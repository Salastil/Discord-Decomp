// ===== 00947738  FUN_00947738 =====

long FUN_00947738(long param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  if ((*(long *)(param_1 + 0x50) == 0) && (*(long *)(param_1 + 0x58) < 0x7a121)) {
    param_3 = 0;
  }
  else {
    auVar4 = FUN_00949c60(*(undefined8 *)(param_1 + 0x38),param_2);
    lVar2 = auVar4._0_8_;
    if ((auVar4 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      if (*(long *)(param_1 + 0x58) < *(long *)(param_1 + 0x50)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__algorithm/clamp.h:29: libc++ Hardening assertion !__comp(__hi, __lo) failed: Bad bounds passed to std::clamp\n"
                  );
      }
      lVar3 = 0x58;
      if (*(long *)(param_1 + 0x68) <= *(long *)(param_1 + 0x58)) {
        lVar3 = 0x68;
      }
      lVar1 = 0x50;
      if (*(long *)(param_1 + 0x50) <= *(long *)(param_1 + 0x68)) {
        lVar1 = lVar3;
      }
      param_3 = 0x7fffffffffffffff;
      if ((lVar2 != 0x7fffffffffffffff) &&
         (lVar3 = *(long *)(param_1 + lVar1), lVar3 != 0x7fffffffffffffff)) {
        param_3 = -0x8000000000000000;
        if (lVar3 != -0x8000000000000000 && lVar2 != -0x8000000000000000) {
          param_3 = lVar3 + lVar2;
        }
      }
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return param_3;
}


// ===== 00947820  FUN_00947820 =====

int FUN_00947820(long param_1,undefined8 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  *(undefined8 *)(param_1 + 0x148) = param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return iVar1;
}


// ===== 00947858  FUN_00947858 =====

long FUN_00947858(long param_1,long param_2,long param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  if ((((param_2 == 0) && (lVar3 = *(long *)(param_1 + 0x140), 0 < lVar3)) &&
      (*(long *)(param_1 + 0x50) == 0)) && (0 < *(long *)(param_1 + 0x58))) {
    if ((param_4 & 1) == 0) {
      lVar5 = *(long *)(param_1 + 0x148);
      lVar4 = lVar5;
      if (lVar5 != -0x8000000000000000) {
        lVar4 = lVar5 + lVar3;
      }
      lVar1 = 0x7fffffffffffffff;
      if (lVar5 != 0x7fffffffffffffff && lVar3 != 0x7fffffffffffffff) {
        lVar1 = lVar4;
      }
      if (lVar1 - param_3 != 0 && param_3 <= lVar1) {
        lVar3 = 0x7fffffffffffffff;
        if (param_3 != -0x8000000000000000 && lVar1 != 0x7fffffffffffffff) {
          lVar3 = lVar1 - param_3;
        }
        goto LAB_00947918;
      }
    }
    lVar3 = 0;
    goto LAB_00947918;
  }
  if ((param_2 == 0x7fffffffffffffff) || (param_3 == -0x8000000000000000)) {
    FUN_00948070(*(undefined8 *)(param_1 + 0x40));
    lVar3 = 0x7fffffffffffffff;
    goto LAB_00947918;
  }
  iVar2 = FUN_00948070(*(undefined8 *)(param_1 + 0x40));
  if ((param_2 == -0x8000000000000000) || (param_3 == 0x7fffffffffffffff)) {
LAB_009478d4:
    param_2 = -0x8000000000000000;
  }
  else {
    param_2 = param_2 - param_3;
    lVar3 = 0x7fffffffffffffff;
    if (param_2 == 0x7fffffffffffffff) goto LAB_00947918;
    if (param_2 == -0x8000000000000000) goto LAB_009478d4;
    param_2 = param_2 + (long)iVar2 * -1000;
  }
  lVar3 = 0x7fffffffffffffff;
  if ((param_2 != 0x7fffffffffffffff) &&
     (lVar4 = *(long *)(param_1 + 0x48), lVar4 != -0x8000000000000000)) {
    lVar3 = -0x8000000000000000;
    if (lVar4 != 0x7fffffffffffffff && param_2 != -0x8000000000000000) {
      lVar3 = param_2 - lVar4;
    }
  }
LAB_00947918:
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return lVar3;
}


// ===== 009479ac  FUN_009479ac =====

long FUN_009479ac(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  iVar1 = FUN_00948070(*(undefined8 *)(param_1 + 0x40));
  lVar3 = *(long *)(param_1 + 0x60);
  lVar2 = 0x7fffffffffffffff;
  if (lVar3 != 0x7fffffffffffffff) {
    if (lVar3 != -0x8000000000000000) {
      lVar3 = lVar3 + (long)iVar1 * 1000;
    }
    if ((lVar3 != 0x7fffffffffffffff) &&
       (lVar4 = *(long *)(param_1 + 0x48), lVar4 != 0x7fffffffffffffff)) {
      lVar2 = -0x8000000000000000;
      if (lVar4 != -0x8000000000000000 && lVar3 != -0x8000000000000000) {
        lVar2 = lVar4 + lVar3;
      }
    }
  }
  lVar3 = *(long *)(param_1 + 0x50);
  if (*(long *)(param_1 + 0x50) <= lVar2) {
    lVar3 = lVar2;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return lVar3;
}


// ===== 00947a48  FUN_00947a48 =====

ulong FUN_00947a48(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  iVar1 = FUN_00948070(*(undefined8 *)(param_1 + 0x40));
  lVar2 = *(long *)(param_1 + 0x60);
  if (lVar2 != 0x7fffffffffffffff) {
    if (lVar2 != -0x8000000000000000) {
      lVar2 = lVar2 + (long)iVar1 * 1000;
    }
    lVar3 = *(long *)(param_1 + 0x48);
    if (lVar2 != 0x7fffffffffffffff && lVar3 != 0x7fffffffffffffff) {
      lVar4 = -0x8000000000000000;
      if (lVar3 != -0x8000000000000000 && lVar2 != -0x8000000000000000) {
        lVar4 = lVar3 + lVar2;
      }
      goto LAB_00947ab4;
    }
  }
  lVar4 = 0x7fffffffffffffff;
LAB_00947ab4:
  lVar2 = *(long *)(param_1 + 0x50);
  if (*(long *)(param_1 + 0x50) <= lVar4) {
    lVar2 = lVar4;
  }
  iVar1 = FUN_00948070(*(undefined8 *)(param_1 + 0x40));
  lVar4 = *(long *)(param_1 + 0x48);
  lVar3 = lVar4;
  if (lVar4 != -0x8000000000000000) {
    lVar3 = lVar4 + (long)iVar1 * 1000;
  }
  if (lVar4 != 0x7fffffffffffffff) {
    lVar4 = lVar3;
  }
  uVar5 = 0x7fffffffffffffff;
  if ((lVar2 != 0x7fffffffffffffff) && (lVar4 != -0x8000000000000000)) {
    uVar5 = 0;
    if (lVar4 != 0x7fffffffffffffff && lVar2 != -0x8000000000000000) {
      uVar5 = lVar2 - lVar4 & (lVar2 - lVar4 >> 0x3f ^ 0xffffffffffffffffU);
    }
  }
  return uVar5;
}


// ===== 00947b2c  FUN_00947b2c =====

undefined1  [16] FUN_00947b2c(long param_1)

{
  uint uVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  if (*(long *)(param_1 + 0x50) == 0) {
    uVar3 = (ulong)(*(long *)(param_1 + 0x58) < 0x7a121);
  }
  else {
    uVar3 = 0;
  }
  uVar1 = *(uint *)(param_1 + 0xf8);
  uVar2 = *(undefined1 *)(param_1 + 0xfc);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  auVar4._0_8_ = uVar3 | (ulong)uVar1 << 0x20;
  auVar4[8] = uVar2;
  auVar4._9_7_ = 0;
  return auVar4;
}


// ===== 00947b9c  FUN_00947b9c =====

int FUN_00947b9c(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 8));
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  *param_1 = *(undefined8 *)(param_2 + 0xf0);
  param_1[1] = uVar3;
  iVar1 = FUN_00948070(uVar2);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  param_1[4] = *(undefined8 *)(param_2 + 0x50);
  param_1[3] = uVar3;
  param_1[5] = uVar2;
  param_1[2] = (long)iVar1 * 1000;
  uVar2 = FUN_00947a48(param_2);
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 8));
  return iVar1;
}


// ===== 00947c14  FUN_00947c14 =====

int FUN_00947c14(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  if (*(char *)(param_1 + 0xe8) == '\x01') {
    *(undefined1 *)(param_1 + 0xe8) = 0;
  }
  if ((undefined8 *)(param_1 + 0x78) != (undefined8 *)0x0) {
    uVar4 = param_2[4];
    uVar3 = param_2[7];
    uVar2 = param_2[6];
    uVar6 = param_2[1];
    uVar5 = *param_2;
    uVar8 = param_2[3];
    uVar7 = param_2[2];
    *(undefined8 *)(param_1 + 0xa0) = param_2[5];
    *(undefined8 *)(param_1 + 0x98) = uVar4;
    *(undefined8 *)(param_1 + 0xb0) = uVar3;
    *(undefined8 *)(param_1 + 0xa8) = uVar2;
    *(undefined8 *)(param_1 + 0x80) = uVar6;
    *(undefined8 *)(param_1 + 0x78) = uVar5;
    *(undefined8 *)(param_1 + 0x90) = uVar8;
    *(undefined8 *)(param_1 + 0x88) = uVar7;
    uVar5 = param_2[0xb];
    uVar4 = param_2[10];
    uVar3 = param_2[0xd];
    uVar2 = param_2[0xc];
    uVar6 = param_2[8];
    *(undefined8 *)(param_1 + 0xc0) = param_2[9];
    *(undefined8 *)(param_1 + 0xb8) = uVar6;
    *(undefined8 *)(param_1 + 0xd0) = uVar5;
    *(undefined8 *)(param_1 + 200) = uVar4;
    *(undefined8 *)(param_1 + 0xe0) = uVar3;
    *(undefined8 *)(param_1 + 0xd8) = uVar2;
    *(undefined1 *)(param_1 + 0xe8) = 1;
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00947c9c  FUN_00947c9c =====

int FUN_00947c9c(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 8));
  uVar3 = *(undefined8 *)(param_2 + 0xb8);
  uVar5 = *(undefined8 *)(param_2 + 0xd0);
  uVar4 = *(undefined8 *)(param_2 + 200);
  uVar8 = *(undefined8 *)(param_2 + 0xe0);
  uVar7 = *(undefined8 *)(param_2 + 0xd8);
  uVar2 = *(undefined8 *)(param_2 + 0xe8);
  param_1[9] = *(undefined8 *)(param_2 + 0xc0);
  param_1[8] = uVar3;
  param_1[0xb] = uVar5;
  param_1[10] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x80);
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  uVar6 = *(undefined8 *)(param_2 + 0x90);
  uVar5 = *(undefined8 *)(param_2 + 0x88);
  param_1[0xd] = uVar8;
  param_1[0xc] = uVar7;
  uVar8 = *(undefined8 *)(param_2 + 0xa0);
  uVar7 = *(undefined8 *)(param_2 + 0x98);
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  uVar4 = *(undefined8 *)(param_2 + 0xb0);
  uVar3 = *(undefined8 *)(param_2 + 0xa8);
  param_1[0xe] = uVar2;
  param_1[5] = uVar8;
  param_1[4] = uVar7;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 8));
  return iVar1;
}


// ===== 00947d04  FUN_00947d04 =====

int FUN_00947d04(long param_1,undefined8 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  *(char *)(param_1 + 0xfc) = (char)((ulong)param_2 >> 0x20);
  *(int *)(param_1 + 0xf8) = (int)param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return iVar1;
}


// ===== 00947d44  FUN_00947d44 =====

int FUN_00947d44(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_00d3e2c0;
  FUN_006634ac(param_1 + 0x20);
  pvVar2 = (void *)param_1[8];
  param_1[8] = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_00947e2c(pvVar2);
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[7];
  param_1[7] = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_009495f4(pvVar2);
    operator_delete(pvVar2);
  }
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 1));
  return iVar1;
}


// ===== 00947dc0  FUN_00947dc0 =====

void FUN_00947dc0(void *param_1)

{
  FUN_00947d44();
  operator_delete(param_1);
  return;
}


// ===== 00947df0  FUN_00947df0 =====

void FUN_00947df0(undefined4 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0xe] = 0x3f733333;
  puVar1 = (undefined8 *)(param_1 + 0x12);
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 **)(param_1 + 0x10) = puVar1;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 **)(param_1 + 0x16) = puVar1;
  return;
}


// ===== 00947e2c  FUN_00947e2c =====

void FUN_00947e2c(long param_1)

{
  long local_8;
  
  local_8 = param_1 + 0x40;
  FUN_005dabf4(&local_8,*(undefined8 *)(param_1 + 0x48));
  FUN_00948090(param_1 + 8);
  return;
}


// ===== 00947e6c  FUN_00947e6c =====

void FUN_00947e6c(int *param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long local_30;
  long local_28;
  
  if (*param_1 < 5) {
    *param_1 = *param_1 + 1;
    return;
  }
  local_30 = param_3;
  local_28 = param_2;
  FUN_00853aac(param_1 + 0x10,&local_28);
  uVar8 = *(long *)(param_1 + 0x14) - 1;
  if (uVar8 == 0) {
    plVar4 = *(long **)(param_1 + 0x10);
    *(long **)(param_1 + 0x16) = plVar4;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  else {
    plVar4 = *(long **)(param_1 + 0x16);
    if (local_28 < plVar4[4]) {
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
    }
    if (*(long *)(param_1 + 0x14) == 0) goto LAB_00947f0c;
  }
  lVar7 = (long)((float)param_1[0xe] * (float)uVar8);
  lVar9 = lVar7 - *(long *)(param_1 + 0x18);
  if (lVar9 < 0) {
    do {
      plVar6 = plVar4;
      plVar2 = (long *)*plVar4;
      if ((long *)*plVar4 == (long *)0x0) {
        do {
          plVar4 = (long *)plVar6[2];
          bVar3 = plVar6 == (long *)*plVar4;
          plVar6 = plVar4;
        } while (bVar3);
      }
      else {
        do {
          plVar4 = plVar2;
          plVar2 = (long *)plVar4[1];
        } while ((long *)plVar4[1] != (long *)0x0);
      }
      bVar3 = lVar9 != -1;
      lVar9 = lVar9 + 1;
      *(long **)(param_1 + 0x16) = plVar4;
    } while (bVar3);
  }
  else if (lVar9 != 0) {
    do {
      plVar6 = plVar4;
      plVar2 = (long *)plVar4[1];
      if ((long *)plVar4[1] == (long *)0x0) {
        do {
          plVar4 = (long *)plVar6[2];
          bVar3 = plVar6 != (long *)*plVar4;
          plVar6 = plVar4;
        } while (bVar3);
      }
      else {
        do {
          plVar4 = plVar2;
          plVar2 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      lVar1 = lVar9 + -1;
      *(long **)(param_1 + 0x16) = plVar4;
      bVar3 = 0 < lVar9;
      lVar9 = lVar1;
    } while (lVar1 != 0 && bVar3);
  }
  *(long *)(param_1 + 0x18) = lVar7;
LAB_00947f0c:
  FUN_00948240(param_1 + 2,&local_28,&local_30);
  if (*(long *)(param_1 + 0xc) != 0) {
    puVar5 = *(undefined8 **)(param_1 + 4);
    uVar8 = *(ulong *)(param_1 + 10);
    do {
      if (local_30 - *(long *)(puVar5[uVar8 >> 8] + (uVar8 & 0xff) * 0x10 + 8) < 0x2711) {
        return;
      }
      FUN_00853868(param_1 + 0xe);
      if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/deque:2185: libc++ Hardening assertion !empty() failed: deque::pop_front called on an empty deque\n"
                  );
      }
      uVar8 = *(ulong *)(param_1 + 10);
      puVar5 = *(undefined8 **)(param_1 + 4);
      if (puVar5[uVar8 >> 8] + (uVar8 & 0xff) * 0x10 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      lVar9 = *(long *)(param_1 + 0xc) + -1;
      uVar8 = uVar8 + 1;
      *(ulong *)(param_1 + 10) = uVar8;
      *(long *)(param_1 + 0xc) = lVar9;
      if (0x1ff < uVar8) {
        operator_delete((void *)*puVar5);
        lVar9 = *(long *)(param_1 + 0xc);
        puVar5 = (undefined8 *)(*(long *)(param_1 + 4) + 8);
        uVar8 = *(long *)(param_1 + 10) - 0x100;
        *(undefined8 **)(param_1 + 4) = puVar5;
        *(ulong *)(param_1 + 10) = uVar8;
      }
    } while (lVar9 != 0);
  }
  return;
}


// ===== 00948070  FUN_00948070 =====

undefined8 FUN_00948070(long param_1)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    return *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x20);
  }
  return 0;
}


// ===== 00948090  FUN_00948090 =====

void FUN_00948090(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)param_1[2];
  if (puVar9 != puVar2) {
    uVar7 = param_1[4];
    plVar3 = puVar9 + (uVar7 >> 8);
    lVar5 = *plVar3;
    lVar4 = lVar5 + (uVar7 & 0xff) * 0x10;
    while (lVar4 != puVar9[param_1[5] + uVar7 >> 8] + (param_1[5] + uVar7 & 0xff) * 0x10) {
      if (lVar4 == 0) goto LAB_009481f0;
      lVar4 = lVar4 + 0x10;
      if (lVar4 - lVar5 == 0x1000) {
        plVar3 = plVar3 + 1;
        lVar5 = *plVar3;
        lVar4 = lVar5;
      }
    }
  }
  param_1[5] = 0;
  lVar4 = (long)puVar2 - (long)puVar9;
  while (uVar7 = lVar4 >> 3, 2 < uVar7) {
    operator_delete((void *)*puVar9);
    puVar2 = (undefined8 *)param_1[2];
    puVar9 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = puVar9;
    lVar4 = (long)puVar2 - (long)puVar9;
  }
  if (uVar7 == 1) {
    uVar1 = 0x80;
  }
  else {
    if (uVar7 != 2) goto LAB_00948168;
    uVar1 = 0x100;
  }
  param_1[4] = uVar1;
LAB_00948168:
  puVar8 = puVar2;
  if (puVar9 != puVar2) {
    do {
      puVar8 = puVar9 + 1;
      operator_delete((void *)*puVar9);
      puVar9 = puVar8;
    } while (puVar8 != puVar2);
    puVar2 = (undefined8 *)param_1[1];
    puVar8 = (undefined8 *)param_1[2];
  }
  uVar6 = (ulong)((long)puVar8 + (-8 - ((long)puVar8 << 0x3d))) >> 3;
  uVar7 = (ulong)(((long)puVar2 - (long)puVar8 << 0x3d) - ((long)puVar2 - (long)puVar8)) >> 3;
  if (uVar6 <= uVar7) {
    uVar7 = uVar6;
  }
  if ((1 < uVar7) && ((((int)puVar2 - (int)puVar8 | -(int)puVar8) & 7U) == 0)) {
    uVar7 = uVar7 & 0x1ffffffffffffffe;
    puVar8 = puVar8 + -uVar7;
    do {
      uVar7 = uVar7 - 2;
    } while (uVar7 != 0);
  }
  do {
    if (puVar8 == puVar2) {
      param_1[2] = puVar8;
      if ((void *)*param_1 != (void *)0x0) {
        operator_delete((void *)*param_1);
        return;
      }
      return;
    }
    puVar8 = puVar8 + -1;
  } while (puVar8 != (undefined8 *)0x0);
LAB_009481f0:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00948240  FUN_00948240 =====

long FUN_00948240(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar5 = 0;
  if (lVar4 != lVar7) {
    lVar5 = (lVar4 - lVar7) * 0x20 + -1;
  }
  if (lVar5 == *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) {
    FUN_00948328(param_1);
    lVar7 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  if ((lVar7 != lVar4) &&
     (uVar2 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20),
     puVar1 = (undefined8 *)(*(long *)(lVar7 + (uVar2 >> 8) * 8) + (uVar2 & 0xff) * 0x10),
     puVar1 != (undefined8 *)0x0)) {
    uVar6 = *param_3;
    *puVar1 = *param_2;
    puVar1[1] = uVar6;
    lVar5 = *(long *)(param_1 + 0x28) + 1;
    uVar2 = *(long *)(param_1 + 0x20) + lVar5;
    *(long *)(param_1 + 0x28) = lVar5;
    plVar3 = (long *)(*(long *)(param_1 + 8) + (uVar2 >> 8) * 8);
    lVar7 = *plVar3;
    lVar5 = 0;
    if (*(long *)(param_1 + 8) != *(long *)(param_1 + 0x10)) {
      lVar5 = lVar7 + (uVar2 & 0xff) * 0x10;
    }
    if (lVar5 == lVar7) {
      lVar5 = plVar3[-1] + 0x1000;
    }
    return lVar5 + -0x10;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00948328  FUN_00948328 =====

void FUN_00948328(long *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  void *local_18;
  
  if ((ulong)param_1[4] < 0x100) {
    lVar2 = param_1[3];
    uVar6 = param_1[2] - param_1[1];
    uVar4 = lVar2 - *param_1;
    if (uVar4 <= uVar6) {
      uVar4 = (long)uVar4 >> 2;
      if (lVar2 == *param_1) {
        uVar4 = 1;
      }
      puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      local_40 = &DAT_aaaaaaaaaaaaaaaa;
      if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      local_50 = (undefined1 *)operator_new(uVar4 * 8);
      puStack_48 = local_50 + uVar6;
      puStack_38 = local_50 + uVar4 * 8;
      local_40 = puStack_48;
      local_18 = operator_new(0x1000);
      FUN_00948798(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_00948cbc(&local_50,lVar5);
          lVar2 = param_1[1];
        } while (lVar5 != lVar2);
        lVar5 = param_1[2];
      }
      puVar1 = (undefined1 *)*param_1;
      uVar6 = (lVar5 - (lVar5 << 0x3d)) - 8U >> 3;
      uVar4 = (ulong)((lVar2 - lVar5 << 0x3d) - (lVar2 - lVar5)) >> 3;
      lVar3 = param_1[3];
      param_1[1] = (long)puStack_48;
      *param_1 = (long)local_50;
      param_1[3] = (long)puStack_38;
      param_1[2] = (long)local_40;
      if (uVar6 <= uVar4) {
        uVar4 = uVar6;
      }
      local_40 = (undefined1 *)lVar5;
      if ((1 < uVar4) && ((((int)lVar2 - (int)lVar5 | -(int)lVar5) & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        local_40 = (undefined1 *)(lVar5 + uVar4 * -8);
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (local_50 = puVar1, puStack_48 = (undefined1 *)lVar2, puStack_38 = (undefined1 *)lVar3,
            local_40 != (undefined1 *)lVar2) {
        local_40 = (undefined1 *)((long)local_40 + -8);
        if (local_40 == (undefined1 *)0x0) {
          local_40 = (undefined1 *)lVar5;
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (puVar1 == (undefined1 *)0x0) {
        return;
      }
      operator_delete(puVar1);
      return;
    }
    if (lVar2 != param_1[2]) {
      local_50 = (undefined1 *)operator_new(0x1000);
      FUN_00948798(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0x1000);
    FUN_00948a20(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x100;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_00948510(param_1,&local_50);
  return;
}


// ===== 00948510  FUN_00948510 =====

void FUN_00948510(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *__src;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar17 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar17) {
    pvVar2 = (void *)*param_1;
    __src = (undefined8 *)param_1[1];
    if ((long)__src - (long)pvVar2 == 0) {
      uVar5 = (long)param_1[3] - (long)pvVar2 >> 2;
      if (puVar17 == __src) {
        uVar5 = 1;
      }
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar18 = uVar5 >> 2;
      pvVar4 = operator_new(uVar5 * 8);
      puVar6 = (undefined8 *)((long)pvVar4 + uVar18 * 8);
      lVar15 = (long)puVar17 - (long)__src;
      iVar16 = (int)puVar17;
      puVar7 = puVar6;
      if (lVar15 != 0) {
        uVar13 = lVar15 - 8U >> 3;
        uVar11 = uVar13;
        if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
          uVar11 = (ulong)-(long)puVar6 >> 3;
        }
        puVar7 = (undefined8 *)((long)puVar6 + lVar15);
        puVar8 = puVar6;
        puVar10 = __src;
        if (0x31 < uVar11) {
          if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
            uVar13 = (ulong)-(long)puVar6 >> 3;
          }
          if ((((((iVar16 - (int)__src | -(int)pvVar4) & 7U) == 0) && (puVar6 <= puVar6 + uVar13))
              && (__src <= __src + uVar13)) && (0x1f < (long)pvVar4 + (uVar18 * 8 - (long)__src))) {
            uVar1 = uVar11 + 1 & 3;
            puVar14 = (undefined8 *)((long)pvVar4 + uVar18 * 8 + 0x10);
            uVar18 = 4;
            if (uVar1 != 0) {
              uVar18 = uVar1;
            }
            puVar12 = __src + 2;
            lVar9 = (uVar11 + 1) - uVar18;
            lVar15 = ~uVar13 + uVar18;
            puVar8 = puVar6 + lVar9;
            puVar10 = __src + lVar9;
            do {
              puVar3 = puVar12 + -1;
              uVar19 = puVar12[-2];
              uVar21 = puVar12[1];
              uVar20 = *puVar12;
              lVar15 = lVar15 + 4;
              puVar12 = puVar12 + 4;
              puVar14[-1] = *puVar3;
              puVar14[-2] = uVar19;
              puVar14[1] = uVar21;
              *puVar14 = uVar20;
              puVar14 = puVar14 + 4;
            } while (lVar15 != 0);
          }
        }
        do {
          if (puVar8 == (undefined8 *)0x0) goto LAB_00948780;
          puVar14 = puVar8 + 1;
          *puVar8 = *puVar10;
          puVar8 = puVar14;
          puVar10 = puVar10 + 1;
        } while (puVar14 != puVar7);
      }
      *param_1 = pvVar4;
      param_1[1] = puVar6;
      uVar11 = (ulong)((long)puVar17 + (-8 - ((long)puVar17 << 0x3d))) >> 3;
      uVar18 = (ulong)(((long)__src - (long)puVar17 << 0x3d) - ((long)__src - (long)puVar17)) >> 3;
      param_1[2] = puVar7;
      param_1[3] = (void *)((long)pvVar4 + uVar5 * 8);
      if (uVar11 <= uVar18) {
        uVar18 = uVar11;
      }
      puVar6 = puVar17;
      if ((1 < uVar18) && ((((int)__src - iVar16 | -iVar16) & 7U) == 0)) {
        uVar18 = uVar18 & 0x1ffffffffffffffe;
        puVar6 = puVar17 + -uVar18;
        do {
          uVar18 = uVar18 - 2;
        } while (uVar18 != 0);
      }
      while (puVar6 != __src) {
        puVar6 = puVar6 + -1;
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (__src != (undefined8 *)0x0) {
        operator_delete(pvVar2);
      }
    }
    else {
      lVar15 = ((long)__src - (long)pvVar2 >> 3) + 1;
      uVar5 = (ulong)(lVar15 - (lVar15 >> 0x3f)) >> 1;
      memmove(__src + -uVar5,__src,(long)puVar17 - (long)__src);
      puVar17 = puVar17 + -uVar5;
      param_1[1] = param_1[1] + uVar5 * -8;
      param_1[2] = puVar17;
    }
  }
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = *param_2;
    param_1[2] = puVar17 + 1;
    return;
  }
LAB_00948780:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00948798  FUN_00948798 =====

void FUN_00948798(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *__src;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar17 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar17) {
    pvVar2 = (void *)*param_1;
    __src = (undefined8 *)param_1[1];
    if ((long)__src - (long)pvVar2 == 0) {
      uVar5 = (long)param_1[3] - (long)pvVar2 >> 2;
      if (puVar17 == __src) {
        uVar5 = 1;
      }
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar18 = uVar5 >> 2;
      pvVar4 = operator_new(uVar5 * 8);
      puVar6 = (undefined8 *)((long)pvVar4 + uVar18 * 8);
      lVar15 = (long)puVar17 - (long)__src;
      iVar16 = (int)puVar17;
      puVar7 = puVar6;
      if (lVar15 != 0) {
        uVar13 = lVar15 - 8U >> 3;
        uVar11 = uVar13;
        if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
          uVar11 = (ulong)-(long)puVar6 >> 3;
        }
        puVar7 = (undefined8 *)((long)puVar6 + lVar15);
        puVar8 = puVar6;
        puVar10 = __src;
        if (0x31 < uVar11) {
          if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
            uVar13 = (ulong)-(long)puVar6 >> 3;
          }
          if ((((((iVar16 - (int)__src | -(int)pvVar4) & 7U) == 0) && (puVar6 <= puVar6 + uVar13))
              && (__src <= __src + uVar13)) && (0x1f < (long)pvVar4 + (uVar18 * 8 - (long)__src))) {
            uVar1 = uVar11 + 1 & 3;
            puVar14 = (undefined8 *)((long)pvVar4 + uVar18 * 8 + 0x10);
            uVar18 = 4;
            if (uVar1 != 0) {
              uVar18 = uVar1;
            }
            puVar12 = __src + 2;
            lVar9 = (uVar11 + 1) - uVar18;
            lVar15 = ~uVar13 + uVar18;
            puVar8 = puVar6 + lVar9;
            puVar10 = __src + lVar9;
            do {
              puVar3 = puVar12 + -1;
              uVar19 = puVar12[-2];
              uVar21 = puVar12[1];
              uVar20 = *puVar12;
              lVar15 = lVar15 + 4;
              puVar12 = puVar12 + 4;
              puVar14[-1] = *puVar3;
              puVar14[-2] = uVar19;
              puVar14[1] = uVar21;
              *puVar14 = uVar20;
              puVar14 = puVar14 + 4;
            } while (lVar15 != 0);
          }
        }
        do {
          if (puVar8 == (undefined8 *)0x0) goto LAB_00948a08;
          puVar14 = puVar8 + 1;
          *puVar8 = *puVar10;
          puVar8 = puVar14;
          puVar10 = puVar10 + 1;
        } while (puVar14 != puVar7);
      }
      *param_1 = pvVar4;
      param_1[1] = puVar6;
      uVar11 = (ulong)((long)puVar17 + (-8 - ((long)puVar17 << 0x3d))) >> 3;
      uVar18 = (ulong)(((long)__src - (long)puVar17 << 0x3d) - ((long)__src - (long)puVar17)) >> 3;
      param_1[2] = puVar7;
      param_1[3] = (void *)((long)pvVar4 + uVar5 * 8);
      if (uVar11 <= uVar18) {
        uVar18 = uVar11;
      }
      puVar6 = puVar17;
      if ((1 < uVar18) && ((((int)__src - iVar16 | -iVar16) & 7U) == 0)) {
        uVar18 = uVar18 & 0x1ffffffffffffffe;
        puVar6 = puVar17 + -uVar18;
        do {
          uVar18 = uVar18 - 2;
        } while (uVar18 != 0);
      }
      while (puVar6 != __src) {
        puVar6 = puVar6 + -1;
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (__src != (undefined8 *)0x0) {
        operator_delete(pvVar2);
      }
    }
    else {
      lVar15 = ((long)__src - (long)pvVar2 >> 3) + 1;
      uVar5 = (ulong)(lVar15 - (lVar15 >> 0x3f)) >> 1;
      memmove(__src + -uVar5,__src,(long)puVar17 - (long)__src);
      puVar17 = puVar17 + -uVar5;
      param_1[1] = param_1[1] + uVar5 * -8;
      param_1[2] = puVar17;
    }
  }
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = *param_2;
    param_1[2] = puVar17 + 1;
    return;
  }
LAB_00948a08:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00948a20  FUN_00948a20 =====

void FUN_00948a20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  size_t __n;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *__src;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar4 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (__src == puVar4) {
    puVar18 = (undefined8 *)param_1[2];
    lVar16 = param_1[3] - (long)puVar18;
    if (lVar16 == 0) {
      uVar7 = param_1[3] - (long)puVar4 >> 2;
      if (puVar18 == __src) {
        uVar7 = 1;
      }
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar19 = uVar7 + 3 >> 2;
      pvVar6 = operator_new(uVar7 * 8);
      puVar1 = (undefined8 *)((long)pvVar6 + uVar19 * 8);
      lVar16 = (long)puVar18 - (long)__src;
      iVar17 = (int)puVar18;
      puVar8 = puVar1;
      if (lVar16 != 0) {
        uVar14 = lVar16 - 8U >> 3;
        uVar12 = uVar14;
        if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
          uVar12 = (ulong)-(long)puVar1 >> 3;
        }
        puVar8 = (undefined8 *)((long)puVar1 + lVar16);
        puVar9 = puVar1;
        puVar11 = __src;
        if (0x31 < uVar12) {
          if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
            uVar14 = (ulong)-(long)puVar1 >> 3;
          }
          if ((((((iVar17 - (int)__src | -(int)pvVar6) & 7U) == 0) && (puVar1 <= puVar1 + uVar14))
              && (__src <= __src + uVar14)) && (0x1f < (long)pvVar6 + (uVar19 * 8 - (long)__src))) {
            uVar2 = uVar12 + 1 & 3;
            puVar15 = (undefined8 *)((long)pvVar6 + uVar19 * 8 + 0x10);
            uVar19 = 4;
            if (uVar2 != 0) {
              uVar19 = uVar2;
            }
            puVar13 = __src + 2;
            lVar10 = (uVar12 + 1) - uVar19;
            lVar16 = ~uVar14 + uVar19;
            puVar9 = puVar1 + lVar10;
            puVar11 = __src + lVar10;
            do {
              puVar5 = puVar13 + -1;
              uVar20 = puVar13[-2];
              uVar22 = puVar13[1];
              uVar21 = *puVar13;
              lVar16 = lVar16 + 4;
              puVar13 = puVar13 + 4;
              puVar15[-1] = *puVar5;
              puVar15[-2] = uVar20;
              puVar15[1] = uVar22;
              *puVar15 = uVar21;
              puVar15 = puVar15 + 4;
            } while (lVar16 != 0);
          }
        }
        do {
          if (puVar9 == (undefined8 *)0x0) goto LAB_00948ca4;
          puVar15 = puVar9 + 1;
          *puVar9 = *puVar11;
          puVar9 = puVar15;
          puVar11 = puVar11 + 1;
        } while (puVar15 != puVar8);
      }
      *param_1 = pvVar6;
      param_1[1] = puVar1;
      uVar12 = (ulong)((long)puVar18 + (-8 - ((long)puVar18 << 0x3d))) >> 3;
      uVar19 = (ulong)(((long)__src - (long)puVar18 << 0x3d) - ((long)__src - (long)puVar18)) >> 3;
      param_1[2] = puVar8;
      param_1[3] = (void *)((long)pvVar6 + uVar7 * 8);
      if (uVar12 <= uVar19) {
        uVar19 = uVar12;
      }
      if ((1 < uVar19) && ((((int)__src - iVar17 | -iVar17) & 7U) == 0)) {
        uVar19 = uVar19 & 0x1ffffffffffffffe;
        puVar18 = puVar18 + -uVar19;
        do {
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
      }
      while (puVar18 != __src) {
        puVar18 = puVar18 + -1;
        if (puVar18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      bVar3 = __src != (undefined8 *)0x0;
      __src = puVar1;
      if (bVar3) {
        operator_delete(puVar4);
        __src = (undefined8 *)param_1[1];
      }
    }
    else {
      __n = (long)puVar18 - (long)__src;
      lVar16 = (lVar16 >> 3) + 1;
      puVar18 = puVar18 + ((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
      memmove((void *)((long)puVar18 - __n),__src,__n);
      param_1[1] = (undefined8 *)((long)puVar18 - __n);
      param_1[2] = puVar18;
      __src = (undefined8 *)((long)puVar18 - __n);
    }
  }
  if (__src + -1 != (undefined8 *)0x0) {
    __src[-1] = *param_2;
    param_1[1] = param_1[1] + -8;
    return;
  }
LAB_00948ca4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00948cbc  FUN_00948cbc =====

void FUN_00948cbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  size_t __n;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *__src;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar4 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (__src == puVar4) {
    puVar18 = (undefined8 *)param_1[2];
    lVar16 = param_1[3] - (long)puVar18;
    if (lVar16 == 0) {
      uVar7 = param_1[3] - (long)puVar4 >> 2;
      if (puVar18 == __src) {
        uVar7 = 1;
      }
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar19 = uVar7 + 3 >> 2;
      pvVar6 = operator_new(uVar7 * 8);
      puVar1 = (undefined8 *)((long)pvVar6 + uVar19 * 8);
      lVar16 = (long)puVar18 - (long)__src;
      iVar17 = (int)puVar18;
      puVar8 = puVar1;
      if (lVar16 != 0) {
        uVar14 = lVar16 - 8U >> 3;
        uVar12 = uVar14;
        if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
          uVar12 = (ulong)-(long)puVar1 >> 3;
        }
        puVar8 = (undefined8 *)((long)puVar1 + lVar16);
        puVar9 = puVar1;
        puVar11 = __src;
        if (0x31 < uVar12) {
          if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
            uVar14 = (ulong)-(long)puVar1 >> 3;
          }
          if ((((((iVar17 - (int)__src | -(int)pvVar6) & 7U) == 0) && (puVar1 <= puVar1 + uVar14))
              && (__src <= __src + uVar14)) && (0x1f < (long)pvVar6 + (uVar19 * 8 - (long)__src))) {
            uVar2 = uVar12 + 1 & 3;
            puVar15 = (undefined8 *)((long)pvVar6 + uVar19 * 8 + 0x10);
            uVar19 = 4;
            if (uVar2 != 0) {
              uVar19 = uVar2;
            }
            puVar13 = __src + 2;
            lVar10 = (uVar12 + 1) - uVar19;
            lVar16 = ~uVar14 + uVar19;
            puVar9 = puVar1 + lVar10;
            puVar11 = __src + lVar10;
            do {
              puVar5 = puVar13 + -1;
              uVar20 = puVar13[-2];
              uVar22 = puVar13[1];
              uVar21 = *puVar13;
              lVar16 = lVar16 + 4;
              puVar13 = puVar13 + 4;
              puVar15[-1] = *puVar5;
              puVar15[-2] = uVar20;
              puVar15[1] = uVar22;
              *puVar15 = uVar21;
              puVar15 = puVar15 + 4;
            } while (lVar16 != 0);
          }
        }
        do {
          if (puVar9 == (undefined8 *)0x0) goto LAB_00948f40;
          puVar15 = puVar9 + 1;
          *puVar9 = *puVar11;
          puVar9 = puVar15;
          puVar11 = puVar11 + 1;
        } while (puVar15 != puVar8);
      }
      *param_1 = pvVar6;
      param_1[1] = puVar1;
      uVar12 = (ulong)((long)puVar18 + (-8 - ((long)puVar18 << 0x3d))) >> 3;
      uVar19 = (ulong)(((long)__src - (long)puVar18 << 0x3d) - ((long)__src - (long)puVar18)) >> 3;
      param_1[2] = puVar8;
      param_1[3] = (void *)((long)pvVar6 + uVar7 * 8);
      if (uVar12 <= uVar19) {
        uVar19 = uVar12;
      }
      if ((1 < uVar19) && ((((int)__src - iVar17 | -iVar17) & 7U) == 0)) {
        uVar19 = uVar19 & 0x1ffffffffffffffe;
        puVar18 = puVar18 + -uVar19;
        do {
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
      }
      while (puVar18 != __src) {
        puVar18 = puVar18 + -1;
        if (puVar18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      bVar3 = __src != (undefined8 *)0x0;
      __src = puVar1;
      if (bVar3) {
        operator_delete(puVar4);
        __src = (undefined8 *)param_1[1];
      }
    }
    else {
      __n = (long)puVar18 - (long)__src;
      lVar16 = (lVar16 >> 3) + 1;
      puVar18 = puVar18 + ((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
      memmove((void *)((long)puVar18 - __n),__src,__n);
      param_1[1] = (undefined8 *)((long)puVar18 - __n);
      param_1[2] = puVar18;
      __src = (undefined8 *)((long)puVar18 - __n);
    }
  }
  if (__src + -1 != (undefined8 *)0x0) {
    __src[-1] = *param_2;
    param_1[1] = param_1[1] + -8;
    return;
  }
LAB_00948f40:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00948f58  FUN_00948f58 =====

/* WARNING: Removing unreachable block (ram,0x00949230) */
/* WARNING: Removing unreachable block (ram,0x009490e8) */
/* WARNING: Removing unreachable block (ram,0x00949214) */
/* WARNING: Removing unreachable block (ram,0x00949268) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00948f58(long *param_1,long *param_2)

{
  double *pdVar1;
  int iVar2;
  undefined8 *****pppppuVar3;
  long lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  int *piVar13;
  long *plVar14;
  byte *pbVar15;
  double *pdVar16;
  double dVar17;
  undefined1 uStack_c9;
  char *local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  char *local_b0;
  char **ppcStack_a8;
  undefined8 ****local_a0;
  ulong uStack_98;
  ulong local_90;
  char **local_88;
  undefined8 ****local_80;
  ulong uStack_78;
  
  plVar11 = param_1 + 1;
  *plVar11 = DAT_001f5d18;
  dVar17 = _DAT_001f49e0;
  pdVar16 = (double *)(param_1 + 3);
  param_1[4] = _UNK_001f49e8;
  *pdVar16 = dVar17;
  lVar4 = DAT_001f4fa8;
  pbVar15 = (byte *)(param_1 + 5);
  param_1[6] = (long)&DAT_aaaaaaaaaaaaaaaa;
  *(undefined1 **)pbVar15 = &DAT_aaaaaaaaaaaaaaaa;
  plVar14 = param_1 + 6;
  *plVar14 = lVar4;
  plVar12 = param_1 + 7;
  *plVar12 = (long)&DAT_aaaaaaaaaaaaaaaa;
  plVar10 = param_1 + 2;
  *plVar10 = (long)&DAT_aaaaaaaaaaaaaaaa;
  *(int *)plVar10 = 0x96;
  *pbVar15 = 1;
  *(int *)plVar12 = 7000;
  piVar13 = (int *)((long)param_1 + 0x34);
  *param_1 = 10000000;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  pdVar1 = (double *)(param_1 + 4);
  puVar5 = (undefined8 *)
           FUN_00949e0c("hard_reset_timeout",param_1,"hard_reset_rtp_timestamp_jump_threshold",
                        plVar11,"outlier_rejection_startup_delay",(long)param_1 + 0xc,
                        "outlier_rejection_max_consecutive",plVar10,
                        "outlier_rejection_forgetting_factor",pdVar16,"outlier_rejection_stddev",
                        param_1 + 4,"alarm_threshold",plVar14,"acc_drift",piVar13,"acc_max_error",
                        plVar12,"reset_full_cov_on_alarm",(undefined1 *)((long)param_1 + 0x3c));
  (**(code **)(*param_2 + 0x10))(&local_a0,param_2,"WebRTC-TimestampExtrapolatorConfig",0x22);
  uVar7 = uStack_98;
  pppppuVar3 = (undefined8 *****)local_a0;
  if (-1 < (long)local_90) {
    uVar7 = local_90 >> 0x38;
    pppppuVar3 = &local_a0;
  }
  FUN_006659ac(puVar5,pppppuVar3,uVar7);
  if (puVar5 != (undefined8 *)0x0) {
    pvVar6 = (void *)*puVar5;
    if (pvVar6 != (void *)0x0) {
      pvVar8 = (void *)puVar5[1];
      uVar9 = (ulong)((long)pvVar8 + (-0x20 - ((long)pvVar8 << 0x3b))) >> 5;
      uVar7 = (ulong)(((long)pvVar6 - (long)pvVar8 << 0x3b) - ((long)pvVar6 - (long)pvVar8)) >> 5;
      if (uVar9 <= uVar7) {
        uVar7 = uVar9;
      }
      if ((1 < uVar7) && ((((int)pvVar6 - (int)pvVar8 | -(int)pvVar8) & 0x1fU) == 0)) {
        uVar7 = uVar7 & 0x7fffffffffffffe;
        pvVar8 = (void *)((long)pvVar8 + uVar7 * -0x20);
        do {
          uVar7 = uVar7 - 2;
        } while (uVar7 != 0);
      }
      while (pvVar8 != pvVar6) {
        pvVar8 = (void *)((long)pvVar8 + -0x20);
        if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      puVar5[1] = pvVar6;
      operator_delete(pvVar6);
    }
    operator_delete(puVar5);
  }
  if (*param_1 < 1) {
    uVar7 = FUN_004022fc();
    if ((uVar7 & 1) == 0) {
      local_c8 = "../../modules/video_coding/timing/timestamp_extrapolator.cc";
      local_c0 = 0x18a;
      local_b8 = &uStack_c9;
      ppcStack_a8 = &local_c8;
      local_b0 = "Skipping invalid hard_reset_timeout=";
      FUN_005f3380(&local_80,param_1);
      local_88 = &local_b0;
      uStack_98 = uStack_78;
      local_a0 = local_80;
      FUN_00623bb0(&DAT_001f6510,*ppcStack_a8,*(undefined4 *)(ppcStack_a8 + 1),local_b0,&local_a0);
    }
    *param_1 = 10000000;
  }
  if ((int)*plVar11 < 1) {
    uVar7 = FUN_004022fc();
    if ((uVar7 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../modules/video_coding/timing/timestamp_extrapolator.cc",0x1b2
                   ,"Skipping invalid hard_reset_rtp_timestamp_jump_threshold=",(int)*plVar11);
    }
    *(int *)plVar11 = 900000;
    iVar2 = *(int *)((long)param_1 + 0xc);
  }
  else {
    iVar2 = *(int *)((long)param_1 + 0xc);
  }
  if (iVar2 < 0) {
    uVar7 = FUN_004022fc();
    if ((uVar7 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../modules/video_coding/timing/timestamp_extrapolator.cc",0x1ea
                   ,"Skipping invalid outlier_rejection_startup_delay=",
                   *(undefined4 *)((long)param_1 + 0xc));
    }
    *(undefined4 *)((long)param_1 + 0xc) = 300;
  }
  if ((int)*plVar10 < 1) {
    uVar7 = FUN_004022fc();
    if ((uVar7 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../modules/video_coding/timing/timestamp_extrapolator.cc",0x21a
                   ,"Skipping invalid outlier_rejection_max_consecutive=",(int)*plVar10);
    }
    *(int *)plVar10 = 0x96;
  }
  dVar17 = *pdVar16;
  if ((dVar17 < 0.0) || (dVar17 < 1.0 == NAN(dVar17))) {
    uVar7 = FUN_004022fc();
    if ((uVar7 & 1) == 0) {
      FUN_00623bb0(*pdVar16,&DAT_001f667e,
                   "../../modules/video_coding/timing/timestamp_extrapolator.cc",0x252,
                   "Skipping invalid outlier_rejection_forgetting_factor=");
    }
    *pdVar16 = 0.999;
  }
  if ((*pbVar15 == 1) && (*pdVar1 <= 0.0)) {
    uVar7 = FUN_004022fc();
    if ((uVar7 & 1) == 0) {
      if ((*pbVar15 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      FUN_00623bb0(*pdVar1,&DAT_001f667e,
                   "../../modules/video_coding/timing/timestamp_extrapolator.cc",0x292,
                   "Skipping invalid outlier_rejection_stddev=");
    }
    *pdVar1 = 2.0;
    *pbVar15 = 1;
  }
  if ((int)*plVar14 < 1) {
    uVar7 = FUN_004022fc();
    if ((uVar7 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../modules/video_coding/timing/timestamp_extrapolator.cc",0x2ba
                   ,"Skipping invalid alarm_threshold=",(int)*plVar14);
    }
    *(int *)plVar14 = 60000;
    iVar2 = *piVar13;
  }
  else {
    iVar2 = *piVar13;
  }
  if (iVar2 < 0) {
    uVar7 = FUN_004022fc();
    if ((uVar7 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../modules/video_coding/timing/timestamp_extrapolator.cc",0x2e2
                   ,"Skipping invalid acc_drift=",*piVar13);
    }
    *piVar13 = 0x19c8;
  }
  if ((int)*plVar12 < 1) {
    uVar7 = FUN_004022fc();
    if ((uVar7 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../modules/video_coding/timing/timestamp_extrapolator.cc",0x302
                   ,"Skipping invalid acc_max_error=",(int)*plVar12);
    }
    *(int *)plVar12 = 7000;
  }
  return;
}


// ===== 00949500  FUN_00949500 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00949500(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_00948f58(param_1,param_3);
  *(undefined1 *)(param_1 + 0x88) = 0;
  uVar2 = _UNK_001f3948;
  uVar1 = _DAT_001f3940;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0x4202a05f20000000;
  *(undefined8 *)(param_1 + 0x50) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x58) = 0;
  uVar2 = _UNK_001f49f8;
  uVar1 = _DAT_001f49f0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x70) = param_2;
  *(undefined8 *)(param_1 + 0x78) = param_2;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = uVar2;
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  return;
}


// ===== 00949588  FUN_00949588 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00949588(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 0x70) = param_2;
  *(undefined8 *)(param_1 + 0x78) = param_2;
  if (*(char *)(param_1 + 0x88) == '\x01') {
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  uVar2 = _UNK_001f3948;
  uVar1 = _DAT_001f3940;
  *(undefined8 *)(param_1 + 0x50) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar2 = _UNK_001f49f8;
  uVar1 = _DAT_001f49f0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0x4202a05f20000000;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = uVar2;
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  return;
}


// ===== 009495f4  FUN_009495f4 =====

void FUN_009495f4(long param_1)

{
  long lVar1;
  double dVar2;
  
  if (*(int *)(param_1 + 0xb0) < 3000) {
    return;
  }
  dVar2 = *(double *)(param_1 + 0x40);
  lVar1 = DAT_00d80528;
  if (DAT_00d80528 == 0) {
    lVar1 = FUN_006660d0("WebRTC.Video.EstimatedClockDrift_ppm",0x24,1,100000,0x32);
    FUN_00d0f5e0(0,lVar1,&DAT_00d80528);
    if (lVar1 == 0) {
      return;
    }
  }
  FUN_00666568(lVar1,(int)ABS(((dVar2 + -90.0) * 1000000.0) / 90.0));
  return;
}


// ===== 009496c8  FUN_009496c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009496c8(long *param_1,long param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  double *pdVar6;
  double *pdVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double local_50;
  double local_48;
  double local_28;
  
  lVar9 = 0x7fffffffffffffff;
  if ((param_2 != 0x7fffffffffffffff) && (lVar8 = param_1[0xf], lVar8 != -0x8000000000000000)) {
    lVar9 = -0x8000000000000000;
    if (lVar8 != 0x7fffffffffffffff && param_2 != -0x8000000000000000) {
      lVar9 = param_2 - lVar8;
    }
  }
  if (*param_1 < lVar9) {
    param_1[0xe] = param_2;
    param_1[0xf] = param_2;
    if ((char)param_1[0x11] == '\x01') {
      *(undefined1 *)(param_1 + 0x11) = 0;
    }
    if ((char)param_1[0x15] == '\x01') {
      *(undefined1 *)(param_1 + 0x15) = 0;
    }
    lVar8 = _UNK_001f3948;
    lVar9 = _DAT_001f3940;
    param_1[0x12] = 0;
    param_1[10] = 0x3ff0000000000000;
    param_1[0xb] = 0;
    uVar10 = (ulong)param_3;
    param_1[9] = lVar8;
    param_1[8] = lVar9;
    lVar8 = _UNK_001f49f8;
    lVar9 = _DAT_001f49f0;
    param_1[0xc] = 0;
    param_1[0xd] = 0x4202a05f20000000;
    param_1[0x13] = 0;
    *(undefined4 *)(param_1 + 0x16) = 0;
    param_1[0x18] = lVar8;
    param_1[0x17] = lVar9;
    *(undefined4 *)(param_1 + 0x19) = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  else {
    param_1[0xf] = param_2;
    if ((*(byte *)((long)param_1 + 0x9c) & 1) == 0) {
      uVar10 = (ulong)param_3;
    }
    else {
      uVar2 = param_3 - *(uint *)(param_1 + 0x13);
      bVar3 = *(uint *)(param_1 + 0x13) <= param_3 && uVar2 != 0;
      if (uVar2 != 0x80000000) {
        bVar3 = uVar2 != 0xffffffff && (int)(uVar2 + 1) < 0 == SCARRY4(uVar2,1);
      }
      uVar10 = (ulong)uVar2;
      if (!bVar3) {
        uVar10 = (ulong)uVar2 | 0xffffffff00000000;
      }
      uVar10 = uVar10 + param_1[0x12];
    }
  }
  param_1[0x12] = uVar10;
  *(uint *)(param_1 + 0x13) = param_3;
  *(undefined1 *)((long)param_1 + 0x9c) = 1;
  if (((char)param_1[5] == '\x01') && ((char)param_1[0x15] == '\x01')) {
    uVar4 = 0x7fffffffffffffff;
    if (1 < param_2 + 0x8000000000000001U) {
      uVar4 = 0;
    }
    uVar5 = uVar4 / 1000;
    if (499 < uVar4 % 1000) {
      uVar5 = uVar5 + 1;
    }
    lVar8 = (uVar10 - param_1[0x14]) - (long)((double)param_1[8] * (double)uVar5);
    lVar9 = -lVar8;
    if (-1 < lVar8) {
      lVar9 = lVar8;
    }
    if ((int)param_1[1] < lVar9) {
      uVar4 = FUN_004022fc();
      if ((uVar4 & 1) == 0) {
        FUN_00623bb0(&DAT_00215708,"../../modules/video_coding/timing/timestamp_extrapolator.cc",
                     0x55a,"Large jump in RTP timestamp detected at ",uVar10,
                     ". Difference between actual and expected change: ",lVar8,
                     " ticks. Resetting filter.");
      }
      param_1[0xe] = param_2;
      param_1[0xf] = param_2;
      if ((char)param_1[0x11] == '\x01') {
        *(undefined1 *)(param_1 + 0x11) = 0;
      }
      if ((char)param_1[0x15] == '\x01') {
        *(undefined1 *)(param_1 + 0x15) = 0;
      }
      lVar8 = _UNK_001f3948;
      lVar9 = _DAT_001f3940;
      param_1[10] = 0x3ff0000000000000;
      param_1[0xb] = 0;
      param_1[9] = lVar8;
      param_1[8] = lVar9;
      lVar8 = _UNK_001f49f8;
      lVar9 = _DAT_001f49f0;
      param_1[0xc] = 0;
      param_1[0xd] = 0x4202a05f20000000;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *(undefined4 *)(param_1 + 0x16) = 0;
      param_1[0x18] = lVar8;
      param_1[0x17] = lVar9;
      *(undefined4 *)(param_1 + 0x19) = 0;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
    }
  }
  uVar4 = 0x7fffffffffffffff;
  if (param_2 == 0x7fffffffffffffff) {
LAB_00949950:
    uVar5 = uVar4 / 1000;
    if (499 < uVar4 % 1000) {
      uVar5 = uVar5 + 1;
    }
  }
  else {
    lVar9 = param_1[0xe];
    uVar5 = 0x8000000000000000;
    if ((lVar9 == -0x8000000000000000) ||
       (((param_2 != -0x8000000000000000 && (lVar9 != 0x7fffffffffffffff)) &&
        (uVar5 = param_2 - lVar9, uVar4 = uVar5, -1 < (long)uVar5)))) goto LAB_00949950;
    uVar5 = -(-uVar5 / 1000) - (ulong)(500 < -uVar5 % 1000);
  }
  dVar11 = (double)(long)uVar5;
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    param_1[0x10] = uVar10;
    *(undefined1 *)(param_1 + 0x11) = 1;
    param_1[9] = (long)-((double)param_1[8] * dVar11);
  }
  local_28 = (((double)(long)uVar10 - (double)param_1[0x10]) - (double)param_1[8] * dVar11) -
             (double)param_1[9];
  if (*(byte *)(param_1 + 5) == 1) {
    if ((int)param_1[0x16] < *(int *)((long)param_1 + 0xc)) {
      dVar12 = (double)param_1[0x17];
    }
    else {
      dVar12 = (double)param_1[0x17];
      dVar16 = (double)param_1[4] * SQRT((double)param_1[0x18]);
      dVar13 = ABS(local_28 - dVar12);
      if (dVar13 != dVar16 && dVar13 < dVar16 == (NAN(dVar13) || NAN(dVar16))) {
        iVar1 = (int)param_1[0x19] + 1;
        *(int *)(param_1 + 0x19) = iVar1;
        if (iVar1 <= (int)param_1[2]) {
          return;
        }
        if (*(char *)((long)param_1 + 0x3c) == '\x01') {
          param_1[0xb] = 0;
          param_1[0xc] = 0;
          param_1[10] = 0x3ff0000000000000;
        }
        param_1[0xd] = 0x4202a05f20000000;
        goto LAB_00949a74;
      }
    }
    dVar16 = (double)param_1[3];
    dVar13 = dVar12 * dVar16 + local_28 * (1.0 - dVar16);
    dVar12 = local_28 - dVar13;
    dVar16 = (double)param_1[0x18] * dVar16 + (1.0 - dVar16) * dVar12 * dVar12;
    dVar12 = 1.0;
    if (1.0 <= dVar16) {
      dVar12 = dVar16;
    }
    param_1[0x17] = (long)dVar13;
    param_1[0x18] = (long)dVar12;
  }
LAB_00949a74:
  *(undefined4 *)(param_1 + 0x19) = 0;
  local_48 = (double)(int)param_1[7];
  if (local_28 == 0.0 || local_28 < 0.0 != NAN(local_28)) {
    local_50 = -local_48;
    pdVar6 = &local_50;
    if (-local_48 <= local_28) {
      pdVar6 = &local_28;
    }
  }
  else {
    pdVar6 = &local_48;
    if (local_28 == local_48 || local_28 < local_48 != (NAN(local_28) || NAN(local_48))) {
      pdVar6 = &local_28;
    }
  }
  pdVar7 = (double *)(param_1 + 0x1a);
  dVar13 = (*pdVar6 + *pdVar7) - (double)*(int *)((long)param_1 + 0x34);
  dVar16 = *pdVar6 + (double)param_1[0x1b] + (double)*(int *)((long)param_1 + 0x34);
  dVar14 = (double)(int)param_1[6];
  dVar12 = 0.0;
  if (0.0 <= dVar13) {
    dVar12 = dVar13;
  }
  dVar13 = 0.0;
  if (dVar16 == 0.0 || dVar16 < 0.0 != NAN(dVar16)) {
    dVar13 = dVar16;
  }
  *pdVar7 = dVar12;
  param_1[0x1b] = (long)dVar13;
  if ((dVar12 != dVar14 && dVar12 < dVar14 == (NAN(dVar12) || NAN(dVar14))) ||
     (dVar13 < (double)-(int)param_1[6])) {
    *pdVar7 = 0.0;
    param_1[0x1b] = 0;
    if (1 < (int)param_1[0x16]) {
      if (*(char *)((long)param_1 + 0x3c) == '\x01') {
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[10] = 0x3ff0000000000000;
      }
      param_1[0xd] = 0x4202a05f20000000;
    }
  }
  if ((((*(byte *)(param_1 + 5) & 1) != 0) || ((char)param_1[0x15] != '\x01')) ||
     (param_1[0x14] <= (long)uVar10)) {
    dVar16 = (double)param_1[0xb];
    dVar12 = (double)param_1[10];
    dVar14 = (double)param_1[0xd];
    dVar13 = (double)param_1[0xc];
    param_1[0x14] = uVar10;
    *(undefined1 *)(param_1 + 0x15) = 1;
    dVar15 = dVar11 * dVar12 + dVar16;
    dVar17 = dVar11 * dVar13 + dVar14;
    dVar18 = dVar15 * dVar11 + 1.0 + dVar17;
    dVar17 = dVar17 / dVar18;
    dVar15 = dVar15 / dVar18;
    param_1[8] = (long)((double)param_1[8] + local_28 * dVar15);
    param_1[9] = (long)((double)param_1[9] + local_28 * dVar17);
    param_1[0xb] = (long)(dVar16 - (dVar14 * dVar15 + dVar16 * dVar15 * dVar11));
    param_1[10] = (long)(dVar12 - (dVar13 * dVar15 + dVar12 * dVar15 * dVar11));
    param_1[0xd] = (long)(dVar14 - (dVar14 * dVar17 + dVar16 * dVar17 * dVar11));
    param_1[0xc] = (long)(dVar13 - (dVar13 * dVar17 + dVar12 * dVar17 * dVar11));
    if ((int)param_1[0x16] < 3000) {
      *(int *)(param_1 + 0x16) = (int)param_1[0x16] + 1;
    }
  }
  return;
}


// ===== 00949c60  FUN_00949c60 =====

undefined1  [16] FUN_00949c60(long param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  double dVar9;
  undefined1 auVar10 [16];
  
  if ((*(byte *)(param_1 + 0x9c) & 1) == 0) {
    uVar8 = (ulong)param_2;
  }
  else {
    uVar2 = param_2 - *(uint *)(param_1 + 0x98);
    bVar3 = *(uint *)(param_1 + 0x98) <= param_2 && uVar2 != 0;
    if (uVar2 != 0x80000000) {
      bVar3 = uVar2 != 0xffffffff && (int)(uVar2 + 1) < 0 == SCARRY4(uVar2,1);
    }
    uVar8 = (ulong)uVar2;
    if (!bVar3) {
      uVar8 = (ulong)uVar2 | 0xffffffff00000000;
    }
    uVar8 = uVar8 + *(long *)(param_1 + 0x90);
  }
  if (*(char *)(param_1 + 0x88) == '\x01') {
    if (*(int *)(param_1 + 0xb0) < 2) {
      if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      dVar9 = ((double)(long)(uVar8 - *(long *)(param_1 + 0xa0)) / 90.0) * 1000.0;
      if (dVar9 == INFINITY) {
        lVar5 = 0x7fffffffffffffff;
      }
      else if (dVar9 == -INFINITY) {
        lVar5 = -0x8000000000000000;
      }
      else {
        lVar5 = (long)dVar9;
      }
      lVar7 = *(long *)(param_1 + 0x78);
      if (lVar7 + lVar5 < 0) goto LAB_00949dd4;
      uVar8 = 0x8000000000000000;
      if (lVar7 != -0x8000000000000000 && lVar5 != -0x8000000000000000) {
        uVar8 = lVar7 + lVar5;
      }
      uVar6 = 0x7fffffffffffffff;
      if (lVar7 != 0x7fffffffffffffff && lVar5 != 0x7fffffffffffffff) {
        uVar6 = uVar8;
      }
    }
    else if (DAT_001f5860 <= *(double *)(param_1 + 0x40)) {
      lVar5 = (long)(((double)(long)(uVar8 - *(long *)(param_1 + 0x80)) -
                     *(double *)(param_1 + 0x48)) / *(double *)(param_1 + 0x40) + 0.5) * 1000;
      uVar6 = *(ulong *)(param_1 + 0x70);
      uVar8 = lVar5 + uVar6;
      if ((long)uVar8 < 0) goto LAB_00949dd4;
      uVar1 = 0x8000000000000000;
      if (lVar5 != -0x8000000000000000 && uVar6 != 0x8000000000000000) {
        uVar1 = uVar8;
      }
      if (uVar6 != 0x7fffffffffffffff) {
        uVar6 = uVar1;
      }
    }
    else {
      uVar6 = *(ulong *)(param_1 + 0x70);
    }
    uVar8 = uVar6 & 0xffffffffffffff00;
    uVar4 = 1;
  }
  else {
LAB_00949dd4:
    uVar6 = 0;
    uVar4 = 0;
    uVar8 = 0;
  }
  auVar10._0_8_ = uVar8 | uVar6 & 0xff;
  auVar10._8_8_ = uVar4;
  return auVar10;
}


// ===== 00949e0c  FUN_00949e0c =====

void * FUN_00949e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                   undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                   undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  
  puVar5 = (undefined8 *)operator_new(0x140);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    if (puVar5 + 4 != (undefined8 *)0x0) {
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[7] = 0;
      puVar5[6] = 0;
      if (puVar5 + 8 != (undefined8 *)0x0) {
        puVar5[9] = 0;
        puVar5[8] = 0;
        puVar5[0xb] = 0;
        puVar5[10] = 0;
        if (puVar5 + 0xc != (undefined8 *)0x0) {
          puVar5[0xd] = 0;
          puVar5[0xc] = 0;
          puVar5[0xf] = 0;
          puVar5[0xe] = 0;
          if (puVar5 + 0x10 != (undefined8 *)0x0) {
            puVar5[0x11] = 0;
            puVar5[0x10] = 0;
            puVar5[0x13] = 0;
            puVar5[0x12] = 0;
            if (puVar5 + 0x14 != (undefined8 *)0x0) {
              puVar5[0x15] = 0;
              puVar5[0x14] = 0;
              puVar5[0x17] = 0;
              puVar5[0x16] = 0;
              if (puVar5 + 0x18 != (undefined8 *)0x0) {
                puVar5[0x19] = 0;
                puVar5[0x18] = 0;
                puVar5[0x1b] = 0;
                puVar5[0x1a] = 0;
                if (puVar5 + 0x1c != (undefined8 *)0x0) {
                  puVar5[0x1d] = 0;
                  puVar5[0x1c] = 0;
                  puVar5[0x1f] = 0;
                  puVar5[0x1e] = 0;
                  if (puVar5 + 0x20 != (undefined8 *)0x0) {
                    puVar5[0x21] = 0;
                    puVar5[0x20] = 0;
                    puVar5[0x23] = 0;
                    puVar5[0x22] = 0;
                    puVar1 = PTR_FUN_00d520e8;
                    if (puVar5 != (undefined8 *)0xfffffffffffffee0) {
                      *puVar5 = param_1;
                      puVar5[1] = param_2;
                      puVar2 = PTR_FUN_00d520f0;
                      puVar5[2] = puVar1;
                      puVar5[3] = puVar2;
                      puVar3 = PTR_FUN_00d51f50;
                      puVar5[4] = param_3;
                      puVar5[5] = param_4;
                      puVar4 = PTR_FUN_00d51f58;
                      puVar5[8] = param_5;
                      puVar5[9] = param_6;
                      puVar5[0xc] = param_7;
                      puVar5[0xd] = param_8;
                      puVar5[6] = puVar3;
                      puVar5[7] = puVar4;
                      puVar5[10] = puVar3;
                      puVar5[0xb] = puVar4;
                      puVar5[0xe] = puVar3;
                      puVar5[0xf] = puVar4;
                      puVar1 = PTR_FUN_00d51f40;
                      puVar5[0x10] = param_9;
                      puVar5[0x11] = param_10;
                      puVar2 = PTR_FUN_00d51f48;
                      puVar5[0x12] = puVar1;
                      puVar5[0x13] = puVar2;
                      puVar1 = PTR_FUN_00d51fc8;
                      puVar5[0x14] = param_11;
                      puVar5[0x15] = param_12;
                      puVar2 = PTR_FUN_00d51fd0;
                      puVar5[0x16] = puVar1;
                      puVar5[0x23] = puVar4;
                      puVar5[0x17] = puVar2;
                      puVar5[0x18] = param_13;
                      puVar5[0x19] = param_14;
                      puVar5[0x1a] = puVar3;
                      puVar5[0x1b] = puVar4;
                      puVar5[0x1c] = param_15;
                      puVar5[0x1d] = param_16;
                      puVar5[0x1e] = puVar3;
                      puVar5[0x1f] = puVar4;
                      puVar5[0x20] = param_17;
                      puVar5[0x21] = param_18;
                      puVar5[0x22] = puVar3;
                      puVar1 = PTR_FUN_00d51f60;
                      puVar5[0x24] = param_19;
                      puVar5[0x25] = param_20;
                      puVar2 = PTR_FUN_00d51f68;
                      puVar5[0x26] = puVar1;
                      puVar5[0x27] = puVar2;
                      pvVar6 = operator_new(0x18);
                      local_78 = puVar5;
                      local_70 = puVar5 + 0x28;
                      local_68 = puVar5 + 0x28;
                      FUN_0066597c(pvVar6,&local_78);
                      if (local_78 != (undefined8 *)0x0) {
                        uVar8 = (ulong)((long)local_70 + (-0x20 - ((long)local_70 << 0x3b))) >> 5;
                        uVar7 = (ulong)(((long)local_78 - (long)local_70 << 0x3b) -
                                       ((long)local_78 - (long)local_70)) >> 5;
                        if (uVar8 <= uVar7) {
                          uVar7 = uVar8;
                        }
                        puVar5 = local_70;
                        if ((1 < uVar7) &&
                           ((((int)local_78 - (int)local_70 | -(int)local_70) & 0x1fU) == 0)) {
                          uVar7 = uVar7 & 0x7fffffffffffffe;
                          puVar5 = local_70 + uVar7 * -4;
                          do {
                            uVar7 = uVar7 - 2;
                          } while (uVar7 != 0);
                        }
                        while (puVar5 != local_78) {
                          puVar5 = puVar5 + -4;
                          if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                            std::__Cr::__libcpp_verbose_abort
                                      ("%s",
                                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                                      );
                          }
                        }
                        local_70 = local_78;
                        operator_delete(local_78);
                      }
                      return pvVar6;
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
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0094a080  FUN_0094a080 =====

void FUN_0094a080(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  return;
}


// ===== 0094a098  FUN_0094a098 =====

void FUN_0094a098(long param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  
  pvVar2 = *(void **)(param_1 + 0x10);
  if (pvVar2 != (void *)0x0) {
    pvVar3 = *(void **)(param_1 + 0x18);
    uVar5 = (ulong)((long)pvVar3 + (-8 - ((long)pvVar3 << 0x3d))) >> 3;
    uVar4 = (ulong)(((long)pvVar2 - (long)pvVar3 << 0x3d) - ((long)pvVar2 - (long)pvVar3)) >> 3;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 7U) == 0)) {
      uVar4 = uVar4 & 0x1ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar4 * -8);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    while (pvVar3 != pvVar2) {
      pvVar3 = (void *)((long)pvVar3 + -8);
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    *(void **)(param_1 + 0x18) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 8);
  if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar2), iVar1 == 1)) {
    operator_delete(pvVar2);
    return;
  }
  return;
}


// ===== 0094a180  FUN_0094a180 =====

void FUN_0094a180(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined1 uStack_61;
  undefined8 *local_60 [2];
  code *local_50;
  code *pcStack_48;
  void *local_38;
  undefined8 local_18;
  
  puVar3 = (undefined8 *)param_1[3];
  local_18 = param_2;
  if (puVar3 < (undefined8 *)param_1[4]) {
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar6 = puVar3 + 1;
    *puVar3 = param_2;
  }
  else {
    puVar6 = (undefined8 *)FUN_0094b494(param_1 + 2,&local_18);
  }
  param_1[3] = puVar6;
  if ((long)puVar6 - param_1[2] == 8) {
    uVar4 = FUN_005d6490();
    uVar8 = *param_1;
    local_50 = FUN_004473ec;
    pcStack_48 = FUN_0094b68c;
    local_60[0] = param_1;
    uVar5 = FUN_00622394();
    FUN_00841954(&local_38,uVar4,uVar8,local_60,0,uVar5,&uStack_61);
    pvVar1 = local_38;
    pvVar7 = (void *)param_1[1];
    local_38 = (void *)0x0;
    param_1[1] = pvVar1;
    if (pvVar7 != (void *)0x0) {
      iVar2 = FUN_00d0f7a0(0xffffffff,pvVar7);
      if (iVar2 == 1) {
        operator_delete(pvVar7);
      }
      pvVar1 = local_38;
      if ((local_38 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,local_38), iVar2 == 1)) {
        operator_delete(pvVar1);
      }
    }
    (*local_50)(0,local_60,local_60);
  }
  return;
}


// ===== 0094a2c0  FUN_0094a2c0 =====

void FUN_0094a2c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,long *param_7)

{
  char ***__nptr;
  long lVar1;
  ulong uVar2;
  char **local_48 [2];
  char cStack_31;
  
  *param_1 = &PTR_FUN_00d3e2f8;
  param_1[1] = param_2;
  param_1[6] = 0;
  param_1[4] = param_6;
  param_1[5] = param_1 + 6;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  param_1[8] = param_1 + 9;
  FUN_0094b8d4(param_1 + 0xb,10,0x80);
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  param_1[0x13] = 100000;
  (**(code **)(*param_7 + 0x10))(local_48,param_7,"WebRTC-SendNackDelayMs",0x16);
  __nptr = (char ***)local_48[0];
  if (-1 < cStack_31) {
    __nptr = local_48;
  }
  lVar1 = strtol((char *)__nptr,(char **)0x0,10);
  if (cStack_31 < '\0') {
    operator_delete(local_48[0]);
  }
  if (lVar1 - 1U < 0x14) {
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6276,"../../modules/video_coding/nack_requester.cc",0x181,
                   "SendNackDelay is set to ",lVar1);
    }
    lVar1 = lVar1 * 1000;
  }
  else {
    lVar1 = 0;
  }
  param_1[0x15] = lVar1;
  param_1[0x16] = param_1;
  param_1[0x17] = param_3;
  FUN_0094a180(param_3,param_1);
  FUN_007ebca0(param_1 + 0x18);
  return;
}


// ===== 0094a40c  FUN_0094a40c =====

void FUN_0094a40c(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  void *pvVar10;
  long lVar11;
  long local_18;
  
  FUN_007ebdcc(*(undefined8 *)(param_1 + 0xc0));
  pvVar10 = *(void **)(param_1 + 0xc0);
  if ((pvVar10 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar10), iVar2 == 1)) {
    operator_delete(pvVar10);
  }
  lVar11 = *(long *)(param_1 + 0xb8);
  plVar4 = *(long **)(lVar11 + 0x10);
  plVar8 = *(long **)(lVar11 + 0x18);
  if (plVar4 == plVar8) {
LAB_0094a514:
    if (plVar4 != plVar8) {
      memmove(plVar4,plVar4 + 1,(long)plVar8 - (long)(plVar4 + 1));
      plVar4 = *(long **)(lVar11 + 0x18);
      uVar9 = (ulong)((long)plVar4 + (-8 - ((long)plVar4 << 0x3d))) >> 3;
      uVar7 = (((long)plVar8 - (long)plVar4 << 0x3d) - ((long)plVar8 - (long)plVar4)) + 8U >> 3;
      if (uVar9 <= uVar7) {
        uVar7 = uVar9;
      }
      plVar8 = plVar8 + -1;
      if ((1 < uVar7) && ((-(int)plVar4 & 7U) == 0)) {
        uVar7 = uVar7 & 0x1ffffffffffffffe;
        plVar4 = plVar4 + -uVar7;
        do {
          uVar7 = uVar7 - 2;
        } while (uVar7 != 0);
      }
      do {
        if (plVar4 == plVar8) {
          *(long **)(lVar11 + 0x18) = plVar8;
          if (*(long **)(lVar11 + 0x10) == plVar8) {
            FUN_00841cf8(lVar11 + 8);
          }
          pvVar10 = *(void **)(param_1 + 0x70);
          if (pvVar10 == (void *)0x0) goto LAB_0094a638;
          pvVar5 = *(void **)(param_1 + 0x78);
          uVar9 = (ulong)((long)pvVar5 + (-8 - ((long)pvVar5 << 0x3d))) >> 3;
          uVar7 = (ulong)(((long)pvVar10 - (long)pvVar5 << 0x3d) - ((long)pvVar10 - (long)pvVar5))
                  >> 3;
          if (uVar9 <= uVar7) {
            uVar7 = uVar9;
          }
          if ((1 < uVar7) && ((((int)pvVar10 - (int)pvVar5 | -(int)pvVar5) & 7U) == 0)) {
            uVar7 = uVar7 & 0x1ffffffffffffffe;
            pvVar5 = (void *)((long)pvVar5 + uVar7 * -8);
            do {
              uVar7 = uVar7 - 2;
            } while (uVar7 != 0);
          }
          goto LAB_0094a614;
        }
        plVar4 = plVar4 + -1;
      } while (plVar4 != (long *)0x0);
      goto LAB_0094a58c;
    }
  }
  else {
    uVar7 = (long)plVar8 + (-8 - (long)plVar4);
    lVar3 = *(long *)(param_1 + 0xb0);
    uVar6 = (uint)uVar7;
    if ((~uVar6 & 0x18) != 0) {
      uVar9 = (ulong)((uVar6 >> 3) + 1) & 3;
      do {
        if (*plVar4 == lVar3) goto LAB_0094a514;
        uVar9 = uVar9 - 1;
        plVar4 = plVar4 + 1;
      } while (uVar9 != 0);
    }
    if (0x17 < uVar7) {
      plVar4 = plVar4 + 2;
      do {
        if (plVar4[-2] == lVar3) {
          plVar4 = plVar4 + -2;
          goto LAB_0094a514;
        }
        if (plVar4[-1] == lVar3) {
          plVar4 = plVar4 + -1;
          goto LAB_0094a514;
        }
        if (*plVar4 == lVar3) goto LAB_0094a514;
        if (plVar4[1] == lVar3) {
          plVar4 = plVar4 + 1;
          goto LAB_0094a514;
        }
        plVar1 = plVar4 + 2;
        plVar4 = plVar4 + 4;
      } while (plVar1 != plVar8);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
            );
  while (pvVar5 = (void *)((long)pvVar5 + -8), pvVar5 != (void *)0x0) {
LAB_0094a614:
    if (pvVar5 == pvVar10) {
      *(void **)(param_1 + 0x78) = pvVar10;
      operator_delete(pvVar10);
LAB_0094a638:
      pvVar10 = *(void **)(param_1 + 0x58);
      if (pvVar10 == (void *)0x0) {
LAB_0094a6b8:
        local_18 = param_1 + 0x40;
        FUN_00937884(&local_18,*(undefined8 *)(param_1 + 0x48));
        local_18 = param_1 + 0x28;
        FUN_0094b6e0(&local_18,*(undefined8 *)(param_1 + 0x30));
        return;
      }
      pvVar5 = *(void **)(param_1 + 0x60);
      uVar9 = (ulong)((long)pvVar5 + (-8 - ((long)pvVar5 << 0x3d))) >> 3;
      uVar7 = (ulong)(((long)pvVar10 - (long)pvVar5 << 0x3d) - ((long)pvVar10 - (long)pvVar5)) >> 3;
      if (uVar9 <= uVar7) {
        uVar7 = uVar9;
      }
      if ((1 < uVar7) && ((((int)pvVar10 - (int)pvVar5 | -(int)pvVar5) & 7U) == 0)) {
        uVar7 = uVar7 & 0x1ffffffffffffffe;
        pvVar5 = (void *)((long)pvVar5 + uVar7 * -8);
        do {
          uVar7 = uVar7 - 2;
        } while (uVar7 != 0);
      }
      do {
        if (pvVar5 == pvVar10) {
          *(void **)(param_1 + 0x60) = pvVar10;
          operator_delete(pvVar10);
          goto LAB_0094a6b8;
        }
        pvVar5 = (void *)((long)pvVar5 + -8);
      } while (pvVar5 != (void *)0x0);
      break;
    }
  }
LAB_0094a58c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0094a6f4  FUN_0094a6f4 =====

void FUN_0094a6f4(void *param_1)

{
  FUN_0094a40c();
  operator_delete(param_1);
  return;
}


// ===== 0094a724  FUN_0094a724 =====

void FUN_0094a724(long param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0094a814(&local_40,param_1,1);
  if (local_40 != puStack_38) {
    (**(code **)**(undefined8 **)(param_1 + 0x18))(*(undefined8 **)(param_1 + 0x18),&local_40,0);
  }
  if (local_40 != (undefined1 *)0x0) {
    uVar2 = (ulong)(((long)local_40 - (long)puStack_38 << 0x3f) -
                   ((long)local_40 - (long)puStack_38)) >> 1;
    if ((ulong)(puStack_38 + ((long)puStack_38 << 0x3f) + -2) >> 1 <= uVar2) {
      uVar2 = (ulong)(puStack_38 + ((long)puStack_38 << 0x3f) + -2) >> 1;
    }
    puVar1 = puStack_38;
    if ((1 < uVar2) && ((((int)local_40 - (uint)puStack_38 | (uint)puStack_38) & 1) == 0)) {
      uVar2 = uVar2 & 0x7ffffffffffffffe;
      puVar1 = puStack_38 + uVar2 * -2;
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    while (puVar1 != local_40) {
      puVar1 = puVar1 + -2;
      if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    puStack_38 = local_40;
    operator_delete(local_40);
  }
  return;
}


// ===== 0094a814  FUN_0094a814 =====

void FUN_0094a814(undefined8 *param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined2 *puVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  long *plVar8;
  bool bVar9;
  long lVar10;
  ulong uVar11;
  undefined2 *puVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  
  lVar10 = (**(code **)(**(long **)(param_2 + 0x10) + 0x10))();
  plVar13 = *(long **)(param_2 + 0x28);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (plVar13 != (long *)(param_2 + 0x30)) {
    do {
      lVar2 = plVar13[6];
      lVar4 = plVar13[7];
      lVar1 = -0x8000000000000000;
      if (lVar2 != 0x7fffffffffffffff && lVar10 != -0x8000000000000000) {
        lVar1 = lVar10 - lVar2;
      }
      bVar9 = lVar1 < *(long *)(param_2 + 0xa8);
      lVar1 = -0x8000000000000000;
      if (lVar4 != 0x7fffffffffffffff && lVar10 != -0x8000000000000000) {
        lVar1 = lVar10 - lVar4;
      }
      if (lVar4 + 0x8000000000000001U < 2) {
        iVar5 = (uint)*(ushort *)(param_2 + 0xa0) - (uint)*(ushort *)((long)plVar13 + 0x2a);
        iVar6 = (int)(short)iVar5;
        bVar7 = (uint)*(ushort *)((long)plVar13 + 0x2a) <= (uint)*(ushort *)(param_2 + 0xa0) &&
                iVar5 != 0;
        if (iVar5 != 0x8000) {
          bVar7 = iVar6 != -1 && iVar6 + 1 < 0 == SCARRY4(iVar6,1);
        }
        if (bVar9 && (lVar2 != -0x8000000000000000 && lVar10 != 0x7fffffffffffffff))
        goto LAB_0094a940;
LAB_0094a928:
        bVar9 = false;
        if (param_3 != 1) {
          bVar9 = bVar7;
        }
        if ((param_3 == 0 ||
             (lVar10 != 0x7fffffffffffffff && lVar4 != -0x8000000000000000) &&
             lVar1 < *(long *)(param_2 + 0x98)) && (!bVar9)) goto LAB_0094a940;
        puVar3 = (undefined2 *)param_1[1];
        if (puVar3 < (undefined2 *)param_1[2]) {
          if (puVar3 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puVar12 = puVar3 + 1;
          *puVar3 = (short)plVar13[5];
        }
        else {
          puVar12 = (undefined2 *)FUN_0094b5a0(param_1,plVar13 + 5);
        }
        param_1[1] = puVar12;
        plVar13[7] = lVar10;
        iVar5 = (int)plVar13[8] + 1;
        *(int *)(plVar13 + 8) = iVar5;
        if (iVar5 < 100) {
          plVar8 = (long *)plVar13[1];
          if ((long *)plVar13[1] == (long *)0x0) {
            do {
              plVar14 = (long *)plVar13[2];
              bVar9 = plVar13 != (long *)*plVar14;
              plVar13 = plVar14;
            } while (bVar9);
          }
          else {
            do {
              plVar14 = plVar8;
              plVar8 = (long *)*plVar14;
            } while ((long *)*plVar14 != (long *)0x0);
          }
        }
        else {
          uVar11 = FUN_004022fc();
          if ((uVar11 & 1) == 0) {
            FUN_00623bb0(&DAT_001f1906,"../../modules/video_coding/nack_requester.cc",0x8c2,
                         "Sequence number ",(short)plVar13[5],
                         " removed from NACK list due to max retries.");
          }
          plVar8 = (long *)plVar13[1];
          plVar15 = plVar13;
          if ((long *)plVar13[1] == (long *)0x0) {
            do {
              plVar14 = (long *)plVar15[2];
              bVar9 = plVar15 != (long *)*plVar14;
              plVar15 = plVar14;
            } while (bVar9);
          }
          else {
            do {
              plVar14 = plVar8;
              plVar8 = (long *)*plVar14;
            } while ((long *)*plVar14 != (long *)0x0);
          }
          if (*(long **)(param_2 + 0x28) == plVar13) {
            *(long **)(param_2 + 0x28) = plVar14;
          }
          *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + -1;
          FUN_005d5d48(*(undefined8 *)(param_2 + 0x30),plVar13);
          if (plVar13 == (long *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          operator_delete(plVar13);
        }
      }
      else {
        bVar7 = false;
        if (!bVar9 || (lVar2 == -0x8000000000000000 || lVar10 == 0x7fffffffffffffff))
        goto LAB_0094a928;
LAB_0094a940:
        plVar8 = (long *)plVar13[1];
        if ((long *)plVar13[1] == (long *)0x0) {
          do {
            plVar14 = (long *)plVar13[2];
            bVar9 = plVar13 != (long *)*plVar14;
            plVar13 = plVar14;
          } while (bVar9);
        }
        else {
          do {
            plVar14 = plVar8;
            plVar8 = (long *)*plVar14;
          } while ((long *)*plVar14 != (long *)0x0);
        }
      }
      plVar13 = plVar14;
    } while (plVar14 != (long *)(param_2 + 0x30));
  }
  return;
}


// ===== 0094aad8  FUN_0094aad8 =====

undefined4 FUN_0094aad8(long param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  bool bVar9;
  long *plVar10;
  undefined1 *puVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  uint uVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  short local_34 [2];
  
  sVar4 = (short)param_2;
  if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
    *(short *)(param_1 + 0xa0) = sVar4;
    *(undefined1 *)(param_1 + 0x90) = 1;
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0xa0);
    if ((uint)uVar2 != (param_2 & 0xffff)) {
      uVar1 = param_2 & 0xffff;
      iVar5 = (int)(short)(uVar2 - sVar4);
      uVar15 = (uint)uVar2;
      bVar9 = uVar1 < uVar15;
      if (uVar15 - uVar1 != 0x8000) {
        bVar9 = iVar5 != -1 && iVar5 + 1 < 0 == SCARRY4(iVar5,1);
      }
      local_34[0] = sVar4;
      if (bVar9) {
        plVar10 = *(long **)(param_1 + 0x30);
        if (plVar10 != (long *)0x0) {
          uVar2 = *(ushort *)(plVar10 + 4);
          plVar16 = plVar10;
          if ((uint)uVar2 != (param_2 & 0xffff)) {
            do {
              uVar15 = (uint)uVar2;
              iVar5 = (int)(short)(uVar2 - sVar4);
              bVar9 = (param_2 & 0xffff) < uVar15;
              if (uVar15 - uVar1 != 0x8000) {
                bVar9 = iVar5 != -1 && iVar5 + 1 < 0 == SCARRY4(iVar5,1);
              }
              if (bVar9) {
                plVar16 = (long *)*plVar16;
              }
              else {
                iVar5 = (int)(short)(sVar4 - uVar2);
                bVar9 = uVar15 < (param_2 & 0xffff);
                if (uVar1 - uVar15 != 0x8000) {
                  bVar9 = iVar5 != -1 && iVar5 + 1 < 0 == SCARRY4(iVar5,1);
                }
                if (!bVar9) break;
                plVar16 = (long *)plVar16[1];
              }
              if (plVar16 == (long *)0x0) {
                return 0;
              }
              uVar2 = *(ushort *)(plVar16 + 4);
            } while ((uint)uVar2 != (param_2 & 0xffff));
          }
          if (plVar16 != (long *)(param_1 + 0x30)) {
            plVar12 = plVar16;
            plVar8 = (long *)plVar16[1];
            if ((long *)plVar16[1] == (long *)0x0) {
              do {
                plVar13 = (long *)plVar12[2];
                bVar9 = plVar12 != (long *)*plVar13;
                plVar12 = plVar13;
              } while (bVar9);
            }
            else {
              do {
                plVar13 = plVar8;
                plVar8 = (long *)*plVar13;
              } while ((long *)*plVar13 != (long *)0x0);
            }
            lVar6 = plVar16[8];
            if (*(long **)(param_1 + 0x28) == plVar16) {
              *(long **)(param_1 + 0x28) = plVar13;
            }
            *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + -1;
            FUN_005d5d48(plVar10,plVar16);
            if (plVar16 != (long *)0xffffffffffffffe0) {
              operator_delete(plVar16);
              return (int)lVar6;
            }
LAB_0094ad1c:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
      }
      else if ((param_3 & 1) == 0) {
        FUN_0094aea4(param_1,uVar15 + 1,param_2);
        *(short *)(param_1 + 0xa0) = sVar4;
        local_40 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
        local_50 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_0094a814(&local_50,param_1,0);
        if (local_50 != puStack_48) {
          (**(code **)**(undefined8 **)(param_1 + 0x18))
                    (*(undefined8 **)(param_1 + 0x18),&local_50,1);
        }
        if (local_50 != (undefined1 *)0x0) {
          uVar14 = (ulong)(((long)local_50 - (long)puStack_48 << 0x3f) -
                          ((long)local_50 - (long)puStack_48)) >> 1;
          if ((ulong)(puStack_48 + ((long)puStack_48 << 0x3f) + -2) >> 1 <= uVar14) {
            uVar14 = (ulong)(puStack_48 + ((long)puStack_48 << 0x3f) + -2) >> 1;
          }
          puVar11 = puStack_48;
          if ((1 < uVar14) && ((((int)local_50 - (uint)puStack_48 | (uint)puStack_48) & 1) == 0)) {
            uVar14 = uVar14 & 0x7ffffffffffffffe;
            puVar11 = puStack_48 + uVar14 * -2;
            do {
              uVar14 = uVar14 - 2;
            } while (uVar14 != 0);
          }
          do {
            if (puVar11 == local_50) {
              puStack_48 = local_50;
              operator_delete(local_50);
              return 0;
            }
            puVar11 = puVar11 + -2;
          } while (puVar11 != (undefined1 *)0x0);
          goto LAB_0094ad1c;
        }
      }
      else {
        FUN_00939f8c(0,param_1 + 0x40,param_1 + 0x40,local_34);
        puVar17 = (undefined8 *)(param_1 + 0x48);
        if ((undefined8 *)*puVar17 != (undefined8 *)0x0) {
          uVar2 = local_34[0] + 0xd8f0;
          puVar7 = (undefined8 *)*puVar17;
          puVar18 = puVar17;
          do {
            while( true ) {
              puVar19 = puVar7;
              uVar3 = *(ushort *)((long)puVar19 + 0x1a);
              puVar17 = puVar19;
              if (uVar3 == uVar2) goto LAB_0094adb8;
              iVar5 = (int)(short)(uVar3 - uVar2);
              bVar9 = (uint)uVar2 < (uint)uVar3;
              if ((uint)uVar3 - (uint)uVar2 != 0x8000) {
                bVar9 = iVar5 != -1 && iVar5 + 1 < 0 == SCARRY4(iVar5,1);
              }
              if (bVar9) break;
              iVar5 = (int)(short)(uVar2 - uVar3);
              bVar9 = (uint)uVar3 < (uint)uVar2;
              if ((uint)uVar2 - (uint)uVar3 != 0x8000) {
                bVar9 = iVar5 != -1 && iVar5 + 1 < 0 == SCARRY4(iVar5,1);
              }
              if ((!bVar9) ||
                 (puVar7 = (undefined8 *)puVar19[1], puVar17 = puVar18,
                 (undefined8 *)puVar19[1] == (undefined8 *)0x0)) goto LAB_0094adb8;
            }
            puVar7 = (undefined8 *)*puVar19;
            puVar18 = puVar19;
          } while ((undefined8 *)*puVar19 != (undefined8 *)0x0);
        }
LAB_0094adb8:
        puVar7 = *(undefined8 **)(param_1 + 0x40);
        while (puVar17 != puVar7) {
          puVar18 = (undefined8 *)puVar7[1];
          puVar19 = puVar7;
          if ((undefined8 *)puVar7[1] == (undefined8 *)0x0) {
            do {
              puVar20 = (undefined8 *)puVar19[2];
              bVar9 = puVar19 != (undefined8 *)*puVar20;
              puVar19 = puVar20;
            } while (bVar9);
          }
          else {
            do {
              puVar20 = puVar18;
              puVar18 = (undefined8 *)*puVar20;
            } while ((undefined8 *)*puVar20 != (undefined8 *)0x0);
          }
          if (*(undefined8 **)(param_1 + 0x40) == puVar7) {
            *(undefined8 **)(param_1 + 0x40) = puVar20;
          }
          *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + -1;
          FUN_005d5d48(*(undefined8 *)(param_1 + 0x48),puVar7);
          if (puVar7 == (undefined8 *)0xffffffffffffffe6) goto LAB_0094ad1c;
          operator_delete(puVar7);
          puVar7 = puVar20;
        }
      }
    }
  }
  return 0;
}


// ===== 0094aea4  FUN_0094aea4 =====

void FUN_0094aea4(long param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ushort local_74;
  undefined1 uStack_71;
  ushort *local_70;
  undefined8 *local_68;
  
  puVar12 = (undefined8 *)(param_1 + 0x30);
  puVar13 = (undefined8 *)(param_1 + 0x28);
  puVar15 = puVar12;
  if ((undefined8 *)*puVar12 != (undefined8 *)0x0) {
    uVar11 = param_3 - 10000;
    puVar4 = (undefined8 *)*puVar12;
    puVar14 = puVar12;
    do {
      while( true ) {
        puVar16 = puVar4;
        uVar1 = *(ushort *)(puVar16 + 4);
        puVar15 = puVar16;
        if ((uint)uVar1 == (uVar11 & 0xffff)) goto LAB_0094af7c;
        iVar3 = (int)(short)(uVar1 - (short)uVar11);
        bVar5 = (uVar11 & 0xffff) < (uint)uVar1;
        if ((uint)uVar1 - (uVar11 & 0xffff) != 0x8000) {
          bVar5 = iVar3 != -1 && iVar3 + 1 < 0 == SCARRY4(iVar3,1);
        }
        if (bVar5) break;
        iVar3 = (int)(short)((short)uVar11 - uVar1);
        bVar5 = (uint)uVar1 < (uVar11 & 0xffff);
        if ((uVar11 & 0xffff) - (uint)uVar1 != 0x8000) {
          bVar5 = iVar3 != -1 && iVar3 + 1 < 0 == SCARRY4(iVar3,1);
        }
        if ((!bVar5) ||
           (puVar4 = (undefined8 *)puVar16[1], puVar15 = puVar14,
           (undefined8 *)puVar16[1] == (undefined8 *)0x0)) goto LAB_0094af7c;
      }
      puVar4 = (undefined8 *)*puVar16;
      puVar14 = puVar16;
    } while ((undefined8 *)*puVar16 != (undefined8 *)0x0);
  }
LAB_0094af7c:
  puVar4 = (undefined8 *)*puVar13;
  while (puVar4 != puVar15) {
    puVar14 = (undefined8 *)puVar4[1];
    puVar16 = puVar4;
    if ((undefined8 *)puVar4[1] == (undefined8 *)0x0) {
      do {
        puVar17 = (undefined8 *)puVar16[2];
        bVar5 = puVar16 != (undefined8 *)*puVar17;
        puVar16 = puVar17;
      } while (bVar5);
    }
    else {
      do {
        puVar17 = puVar14;
        puVar14 = (undefined8 *)*puVar17;
      } while ((undefined8 *)*puVar17 != (undefined8 *)0x0);
    }
    if ((undefined8 *)*puVar13 == puVar4) {
      *puVar13 = puVar17;
    }
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + -1;
    FUN_005d5d48(*(undefined8 *)(param_1 + 0x30),puVar4);
    if (puVar4 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    operator_delete(puVar4);
    puVar4 = puVar17;
  }
  local_74 = (ushort)param_2;
  if (*(long *)(param_1 + 0x38) + (ulong)(ushort)((short)param_3 - local_74) < 0x3e9) {
    if ((param_3 & 0xffff) != (param_2 & 0xffff)) {
      do {
        plVar10 = *(long **)(param_1 + 0x48);
        sVar2 = (short)param_2;
        if (plVar10 == (long *)0x0) {
LAB_0094b1bc:
          lVar9 = FUN_0094bcbc(param_1 + 0x58);
          if (lVar9 != 0) {
            lVar9 = FUN_0094bc4c(0x3f000000,param_1 + 0x58);
          }
          uVar7 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))(*(long **)(param_1 + 0x10));
          local_70 = &local_74;
          local_68 = puVar13;
          lVar8 = FUN_0094b754(&local_68,&local_74,&DAT_001f94c3,&local_70,&uStack_71);
          *(short *)(lVar8 + 0x28) = sVar2;
          *(short *)(lVar8 + 0x2a) = (short)lVar9 + sVar2;
          *(undefined4 *)(lVar8 + 0x2c) = 0xaaaaaaaa;
          *(undefined4 *)(lVar8 + 0x40) = 0;
          param_2 = (uint)local_74;
          *(undefined8 *)(lVar8 + 0x30) = uVar7;
          *(undefined8 *)(lVar8 + 0x38) = 0x8000000000000000;
        }
        else {
          uVar1 = *(ushort *)((long)plVar10 + 0x1a);
          if ((uint)uVar1 != (param_2 & 0xffff)) {
            do {
              uVar11 = (uint)uVar1;
              iVar3 = (int)(short)(uVar1 - sVar2);
              bVar5 = (param_2 & 0xffff) < uVar11;
              if (uVar11 - (param_2 & 0xffff) != 0x8000) {
                bVar5 = iVar3 != -1 && iVar3 + 1 < 0 == SCARRY4(iVar3,1);
              }
              if (bVar5) {
                plVar10 = (long *)*plVar10;
              }
              else {
                iVar3 = (int)(short)(sVar2 - uVar1);
                bVar5 = uVar11 < (param_2 & 0xffff);
                if ((param_2 & 0xffff) - uVar11 != 0x8000) {
                  bVar5 = iVar3 != -1 && iVar3 + 1 < 0 == SCARRY4(iVar3,1);
                }
                if (!bVar5) break;
                plVar10 = (long *)plVar10[1];
              }
              if (plVar10 == (long *)0x0) goto LAB_0094b1bc;
              uVar1 = *(ushort *)((long)plVar10 + 0x1a);
            } while ((uint)uVar1 != (param_2 & 0xffff));
          }
          if (plVar10 == (long *)(param_1 + 0x48)) goto LAB_0094b1bc;
        }
        param_2 = param_2 + 1;
        local_74 = (ushort)param_2;
      } while ((param_2 & 0xffff) != (param_3 & 0xffff));
    }
  }
  else {
    local_68 = puVar13;
    FUN_0094b6e0(&local_68,*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 **)(param_1 + 0x28) = puVar12;
    uVar6 = FUN_004022fc();
    if ((uVar6 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/video_coding/nack_requester.cc",0x79a,
                   "NACK list full, clearing NACK list and requesting keyframe.");
    }
    (**(code **)**(undefined8 **)(param_1 + 0x20))();
  }
  return;
}


// ===== 0094b1ec  FUN_0094b1ec =====

void FUN_0094b1ec(long param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  short sVar3;
  long *plVar4;
  undefined8 *puVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  
  puVar11 = (undefined8 *)(param_1 + 0x30);
  puVar9 = *(undefined8 **)(param_1 + 0x28);
  sVar3 = (short)param_2;
  if ((undefined8 *)*puVar11 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*puVar11;
    puVar12 = puVar11;
    do {
      while( true ) {
        puVar14 = puVar5;
        uVar1 = *(ushort *)(puVar14 + 4);
        puVar11 = puVar14;
        if ((uint)uVar1 == (param_2 & 0xffff)) goto joined_r0x0094b454;
        iVar2 = (int)(short)(uVar1 - sVar3);
        bVar6 = (param_2 & 0xffff) < (uint)uVar1;
        if ((uint)uVar1 - (param_2 & 0xffff) != 0x8000) {
          bVar6 = iVar2 != -1 && iVar2 + 1 < 0 == SCARRY4(iVar2,1);
        }
        if (bVar6) break;
        iVar2 = (int)(short)(sVar3 - uVar1);
        bVar6 = (uint)uVar1 < (param_2 & 0xffff);
        if ((param_2 & 0xffff) - (uint)uVar1 != 0x8000) {
          bVar6 = iVar2 != -1 && iVar2 + 1 < 0 == SCARRY4(iVar2,1);
        }
        if ((!bVar6) ||
           (puVar5 = (undefined8 *)puVar14[1], puVar11 = puVar12,
           (undefined8 *)puVar14[1] == (undefined8 *)0x0)) goto joined_r0x0094b454;
      }
      puVar5 = (undefined8 *)*puVar14;
      puVar12 = puVar14;
    } while ((undefined8 *)*puVar14 != (undefined8 *)0x0);
  }
joined_r0x0094b454:
  do {
    if (puVar9 == puVar11) break;
    puVar5 = (undefined8 *)puVar9[1];
    puVar12 = puVar9;
    if ((undefined8 *)puVar9[1] == (undefined8 *)0x0) {
      do {
        puVar14 = (undefined8 *)puVar12[2];
        bVar6 = puVar12 != (undefined8 *)*puVar14;
        puVar12 = puVar14;
      } while (bVar6);
    }
    else {
      do {
        puVar14 = puVar5;
        puVar5 = (undefined8 *)*puVar14;
      } while ((undefined8 *)*puVar14 != (undefined8 *)0x0);
    }
    if (*(undefined8 **)(param_1 + 0x28) == puVar9) {
      *(undefined8 **)(param_1 + 0x28) = puVar14;
    }
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + -1;
    FUN_005d5d48(*(undefined8 *)(param_1 + 0x30),puVar9);
    if (puVar9 == (undefined8 *)0xffffffffffffffe0) goto LAB_0094b46c;
    operator_delete(puVar9);
    puVar9 = puVar14;
  } while( true );
  plVar13 = (long *)(param_1 + 0x48);
  plVar10 = *(long **)(param_1 + 0x40);
  if ((long *)*plVar13 != (long *)0x0) {
    plVar4 = (long *)*plVar13;
    plVar7 = plVar13;
    do {
      while( true ) {
        plVar13 = plVar4;
        uVar1 = *(ushort *)((long)plVar13 + 0x1a);
        if ((uint)uVar1 == (param_2 & 0xffff)) goto LAB_0094b3b8;
        iVar2 = (int)(short)(uVar1 - sVar3);
        bVar6 = (param_2 & 0xffff) < (uint)uVar1;
        if ((uint)uVar1 - (param_2 & 0xffff) != 0x8000) {
          bVar6 = iVar2 != -1 && iVar2 + 1 < 0 == SCARRY4(iVar2,1);
        }
        if (bVar6) break;
        iVar2 = (int)(short)(sVar3 - uVar1);
        bVar6 = (uint)uVar1 < (param_2 & 0xffff);
        if ((param_2 & 0xffff) - (uint)uVar1 != 0x8000) {
          bVar6 = iVar2 != -1 && iVar2 + 1 < 0 == SCARRY4(iVar2,1);
        }
        if (!bVar6) {
          if (plVar10 == plVar13) {
            return;
          }
          goto LAB_0094b3c4;
        }
        plVar8 = plVar13 + 1;
        plVar4 = (long *)*plVar8;
        plVar13 = plVar7;
        if ((long *)*plVar8 == (long *)0x0) goto LAB_0094b3b8;
      }
      plVar4 = (long *)*plVar13;
      plVar7 = plVar13;
    } while ((long *)*plVar13 != (long *)0x0);
  }
LAB_0094b3b8:
  if (plVar10 != plVar13) {
LAB_0094b3c4:
    do {
      plVar4 = (long *)plVar10[1];
      plVar7 = plVar10;
      if ((long *)plVar10[1] == (long *)0x0) {
        do {
          plVar8 = (long *)plVar7[2];
          bVar6 = plVar7 != (long *)*plVar8;
          plVar7 = plVar8;
        } while (bVar6);
      }
      else {
        do {
          plVar8 = plVar4;
          plVar4 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
      if (*(long **)(param_1 + 0x40) == plVar10) {
        *(long **)(param_1 + 0x40) = plVar8;
      }
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + -1;
      FUN_005d5d48(*(undefined8 *)(param_1 + 0x48),plVar10);
      if (plVar10 == (long *)0xffffffffffffffe6) {
LAB_0094b46c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      operator_delete(plVar10);
      plVar10 = plVar8;
    } while (plVar13 != plVar8);
  }
  return;
}


// ===== 0094b480  FUN_0094b480 =====

void FUN_0094b480(long param_1,long param_2)

{
  *(long *)(param_1 + 0x98) = param_2 * 1000;
  return;
}


// ===== 0094b494  FUN_0094b494 =====

undefined8 * FUN_0094b494(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__dest;
  
  puVar6 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar6 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_0094b588();
LAB_0094b584:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 2;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_0094b584;
    pvVar2 = operator_new(uVar5 << 3);
    puVar6 = (undefined8 *)((long)pvVar2 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = *param_2;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 1);
    param_1[2] = (long)((long)pvVar2 + uVar5 * 8);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0094b588  FUN_0094b588 =====

void FUN_0094b588(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0094b5a0  FUN_0094b5a0 =====

undefined2 * FUN_0094b5a0(long *param_1,undefined2 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  long lVar4;
  ulong uVar5;
  undefined2 *puVar6;
  void *__dest;
  
  puVar6 = (undefined2 *)(param_1[1] - *param_1);
  lVar4 = (long)puVar6 >> 1;
  if (lVar4 == -2 || lVar4 + 2 < 0 != SCARRY8(lVar4,2)) {
                    /* WARNING: Subroutine does not return */
    FUN_005d4754();
  }
  uVar5 = param_1[2] - *param_1;
  uVar1 = uVar5;
  if (uVar5 <= lVar4 + 1U) {
    uVar1 = lVar4 + 1;
  }
  if (0x7ffffffffffffffd < uVar5) {
    uVar1 = 0x7fffffffffffffff;
  }
  if (uVar1 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar2 = operator_new(uVar1 << 1);
    puVar6 = (undefined2 *)((long)pvVar2 + (long)puVar6);
  }
  if (puVar6 != (undefined2 *)0x0) {
    *puVar6 = *param_2;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 1);
    param_1[2] = (long)((long)pvVar2 + uVar1 * 2);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0094b68c  FUN_0094b68c =====

undefined8 FUN_0094b68c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  param_1 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[3];
  for (puVar2 = (undefined8 *)param_1[2]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x10))();
  }
  return *param_1;
}


// ===== 0094b6e0  FUN_0094b6e0 =====

void FUN_0094b6e0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_0094b6e0(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar1 = (undefined8 *)param_2[1];
      operator_delete(param_2);
      param_2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


// ===== 0094b754  FUN_0094b754 =====

undefined1  [16]
FUN_0094b754(undefined8 *param_1,ushort *param_2,undefined8 param_3,undefined8 *param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  long *plVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  
  plVar13 = (long *)*param_1;
  plVar8 = plVar13 + 1;
  plVar11 = (long *)*plVar8;
  plVar14 = plVar8;
  if (plVar11 == (long *)0x0) {
LAB_0094b79c:
    plVar11 = (long *)operator_new(0x48);
    if ((plVar11 == (long *)0x0) || (*plVar11 = 0, plVar11 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar3 = *(undefined2 *)*param_4;
    *(undefined4 *)(plVar11 + 5) = 0;
    *(undefined4 *)(plVar11 + 8) = 0;
    *plVar11 = 0;
    plVar11[1] = 0;
    plVar11[2] = (long)plVar8;
    *(undefined2 *)(plVar11 + 4) = uVar3;
    plVar11[7] = -0x8000000000000000;
    plVar11[6] = -0x8000000000000000;
    *plVar14 = (long)plVar11;
    plVar8 = plVar11;
    if (*(long *)*plVar13 != 0) {
      *plVar13 = *(long *)*plVar13;
      plVar8 = (long *)*plVar14;
    }
    FUN_005d5b94(plVar13[1],plVar8);
    uVar7 = 1;
    plVar13[2] = plVar13[2] + 1;
  }
  else {
    uVar1 = *param_2;
    uVar2 = *(ushort *)(plVar11 + 4);
    if (uVar2 != uVar1) {
      do {
        uVar10 = (uint)uVar2;
        iVar4 = (int)(short)(uVar2 - uVar1);
        uVar9 = (uint)uVar1;
        bVar6 = uVar9 < uVar10;
        if (uVar10 - uVar9 != 0x8000) {
          bVar6 = iVar4 != -1 && iVar4 + 1 < 0 == SCARRY4(iVar4,1);
        }
        plVar8 = plVar11;
        if (bVar6) {
          plVar12 = (long *)*plVar11;
          plVar14 = plVar11;
          if (plVar12 == (long *)0x0) goto LAB_0094b79c;
        }
        else {
          iVar4 = uVar9 - uVar10;
          iVar5 = (int)(short)iVar4;
          bVar6 = uVar10 <= uVar9 && iVar4 != 0;
          if (iVar4 != 0x8000) {
            bVar6 = iVar5 != -1 && iVar5 + 1 < 0 == SCARRY4(iVar5,1);
          }
          if (!bVar6) {
            uVar7 = 0;
            goto LAB_0094b814;
          }
          plVar12 = (long *)plVar11[1];
          if (plVar12 == (long *)0x0) {
            plVar14 = plVar11 + 1;
            goto LAB_0094b79c;
          }
        }
        uVar2 = *(ushort *)(plVar12 + 4);
        plVar11 = plVar12;
      } while (uVar2 != uVar9);
    }
    uVar7 = 0;
  }
LAB_0094b814:
  auVar15._8_8_ = uVar7;
  auVar15._0_8_ = plVar11;
  return auVar15;
}


// ===== 0094b8d4  FUN_0094b8d4 =====

void FUN_0094b8d4(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  void *__dest;
  long lVar1;
  void *__src;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  FUN_0094b98c(param_1 + 3);
  __src = (void *)*param_1;
  if ((ulong)(param_1[2] - (long)__src >> 3) < param_3) {
    if (param_3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005ff43c();
    }
    lVar1 = param_1[1];
    __dest = operator_new(param_3 * 8);
    memcpy(__dest,__src,lVar1 - (long)__src);
    *param_1 = __dest;
    param_1[1] = (long)__dest + (lVar1 - (long)__src);
    param_1[2] = (void *)((long)__dest + param_3 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  param_1[6] = 0;
  return;
}


// ===== 0094b98c  FUN_0094b98c =====

void FUN_0094b98c(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  void *__src;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  size_t __n;
  ulong uVar8;
  void *__dest;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  
  __src = (void *)*param_1;
  puVar4 = (undefined8 *)param_1[1];
  __n = (long)puVar4 - (long)__src;
  uVar11 = (long)__n >> 3;
  uVar6 = param_2 - uVar11;
  iVar9 = (int)puVar4;
  if (param_2 < uVar11 || uVar6 == 0) {
    if (param_2 < uVar11) {
      puVar10 = (undefined8 *)((long)__src + param_2 * 8);
      uVar6 = (ulong)(((long)puVar10 - (long)puVar4 << 0x3d) - ((long)puVar10 - (long)puVar4)) >> 3;
      uVar11 = (ulong)((long)puVar4 + (-8 - ((long)puVar4 << 0x3d))) >> 3;
      if (uVar11 <= uVar6) {
        uVar6 = uVar11;
      }
      if ((1 < uVar6) && ((((int)__src - iVar9 | -iVar9) & 7U) == 0)) {
        uVar6 = uVar6 & 0x1ffffffffffffffe;
        puVar4 = puVar4 + -uVar6;
        do {
          uVar6 = uVar6 - 2;
        } while (uVar6 != 0);
      }
      while (puVar4 != puVar10) {
        puVar4 = puVar4 + -1;
        if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      param_1[1] = puVar10;
    }
  }
  else {
    uVar8 = param_1[2] - (long)__src;
    if ((ulong)((long)uVar8 >> 3) < param_2) {
      if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005ff43c();
      }
      uVar1 = (long)uVar8 >> 2;
      if ((ulong)((long)uVar8 >> 2) <= param_2) {
        uVar1 = param_2;
      }
      if (0x7ffffffffffffff7 < uVar8) {
        uVar1 = 0x1fffffffffffffff;
      }
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar3 = operator_new(uVar1 * 8);
      if (uVar6 * 8 == 0) {
        puVar10 = (undefined8 *)((long)pvVar3 + __n);
      }
      else {
        puVar10 = (undefined8 *)((long)pvVar3 + uVar6 * 8 + __n);
        uVar6 = (ulong)((long)__src + (-(long)pvVar3 - (long)puVar4)) >> 3;
        uVar8 = (param_2 * 8 - __n) - 8 >> 3;
        if (uVar8 <= uVar6) {
          uVar6 = uVar8;
        }
        if (uVar6 < 8) {
          puVar4 = (undefined8 *)((long)pvVar3 + __n);
        }
        else {
          puVar4 = (undefined8 *)((long)pvVar3 + __n);
          if ((((int)__src - iVar9) - (int)pvVar3 & 7U) == 0) {
            uVar8 = uVar6 + 1 & 3;
            uVar2 = 4;
            if (uVar8 != 0) {
              uVar2 = uVar8;
            }
            lVar5 = (uVar6 + 1) - uVar2;
            puVar7 = (undefined8 *)((long)pvVar3 + __n + 0x10);
            puVar4 = (undefined8 *)((long)pvVar3 + lVar5 * 8 + __n);
            do {
              lVar5 = lVar5 + -4;
              puVar7[-1] = 0;
              puVar7[-2] = 0;
              puVar7[1] = 0;
              *puVar7 = 0;
              puVar7 = puVar7 + 4;
            } while (lVar5 != 0);
          }
        }
        do {
          if (puVar4 == (undefined8 *)0x0) {
LAB_0094bc30:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puVar7 = puVar4 + 1;
          *puVar4 = 0;
          puVar4 = puVar7;
        } while (puVar7 != puVar10);
      }
      __dest = (void *)((long)pvVar3 + uVar11 * -8 + __n);
      memcpy(__dest,__src,__n);
      *param_1 = __dest;
      param_1[1] = puVar10;
      param_1[2] = (void *)((long)pvVar3 + uVar1 * 8);
      if (__src != (void *)0x0) {
        operator_delete(__src);
        return;
      }
    }
    else {
      puVar10 = puVar4;
      if ((uVar6 & 0x1fffffffffffffff) != 0) {
        puVar10 = puVar4 + uVar6;
        uVar11 = (param_2 * 8 - __n) - 8 >> 3;
        uVar6 = (ulong)-(long)puVar4 >> 3;
        if (uVar11 <= (ulong)-(long)puVar4 >> 3) {
          uVar6 = uVar11;
        }
        if ((5 < uVar6) && ((-iVar9 & 7U) == 0)) {
          uVar11 = uVar6 + 1 & 3;
          uVar8 = 4;
          if (uVar11 != 0) {
            uVar8 = uVar11;
          }
          puVar7 = puVar4 + 2;
          lVar5 = (uVar6 + 1) - uVar8;
          puVar4 = puVar4 + lVar5;
          do {
            lVar5 = lVar5 + -4;
            puVar7[-1] = 0;
            puVar7[-2] = 0;
            puVar7[1] = 0;
            *puVar7 = 0;
            puVar7 = puVar7 + 4;
          } while (lVar5 != 0);
        }
        do {
          if (puVar4 == (undefined8 *)0x0) goto LAB_0094bc30;
          puVar7 = puVar4 + 1;
          *puVar4 = 0;
          puVar4 = puVar7;
        } while (puVar7 != puVar10);
      }
      param_1[1] = puVar10;
    }
  }
  return;
}


// ===== 0094bc4c  FUN_0094bc4c =====

long FUN_0094bc4c(float param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  
  if (param_1 == 0.0 || param_1 < 0.0 != NAN(param_1)) {
    return 0;
  }
  fVar4 = 0.0;
  lVar3 = param_2[4] - param_2[3] >> 3;
  lVar2 = 0;
  do {
    if (lVar3 == lVar2) {
      return lVar3;
    }
    lVar1 = lVar2 * 8;
    lVar2 = lVar2 + 1;
    fVar4 = fVar4 + (float)*(ulong *)(param_2[3] + lVar1) /
                    (float)(ulong)(param_2[1] - *param_2 >> 3);
  } while (fVar4 < param_1);
  return lVar2;
}


// ===== 0094bcbc  FUN_0094bcbc =====

long FUN_0094bcbc(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}


// ===== 0094bcd0  FUN_0094bcd0 =====

void FUN_0094bcd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3e320;
  if (*(char *)(param_1 + 10) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0094bcfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_1[8])(0,param_1 + 6,param_1 + 6);
    return;
  }
  return;
}


// ===== 0094bd04  FUN_0094bd04 =====

void FUN_0094bd04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3e320;
  if (*(char *)(param_1 + 10) == '\x01') {
    (*(code *)param_1[8])(0,param_1 + 6,param_1 + 6);
  }
  operator_delete(param_1);
  return;
}


// ===== 0094bd5c  FUN_0094bd5c =====

ulong FUN_0094bd5c(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    return (ulong)*(uint *)(param_1 + 0x10) | 0x100000000;
  }
  return 0;
}


// ===== 0094bd80  FUN_0094bd80 =====

void FUN_0094bd80(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,long param_5
                 )

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 auStack_c0 [16];
  code *local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 auStack_80 [16];
  code *local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  (**(code **)(param_5 + 0x10))(1,param_5,auStack_c0);
  uStack_a8 = *(undefined8 *)(param_5 + 0x18);
  local_b0 = *(code **)(param_5 + 0x10);
  *(code **)(param_5 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_5 + 0x18) = 0;
  local_a0 = param_2;
  uStack_98 = param_3;
  local_90 = param_4;
  (*local_b0)(1,auStack_c0,auStack_80);
  uStack_68 = uStack_a8;
  local_70 = local_b0;
  local_b0 = FUN_00433984;
  uStack_a8 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x50) == '\x01') {
    *(undefined8 *)(param_1 + 0x18) = uStack_98;
    *puVar1 = CONCAT44(uStack_9c,local_a0);
    *(undefined8 *)(param_1 + 0x20) = local_90;
    (**(code **)(param_1 + 0x40))(0,param_1 + 0x30,param_1 + 0x30);
    *(code **)(param_1 + 0x40) = FUN_00433984;
    *(undefined8 *)(param_1 + 0x48) = 0;
    (*local_70)(1,auStack_80,param_1 + 0x30);
    pcVar3 = local_70;
    uVar4 = uStack_68;
  }
  else {
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(undefined8 *)(param_1 + 0x18) = uStack_98;
    *puVar1 = CONCAT44(uStack_9c,local_a0);
    *(undefined8 *)(param_1 + 0x20) = local_90;
    (*local_70)(1,auStack_80,param_1 + 0x30);
    *(undefined1 *)(param_1 + 0x50) = 1;
    pcVar3 = local_70;
    uVar4 = uStack_68;
  }
  uStack_68 = 0;
  local_70 = FUN_00433984;
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  *(code **)(param_1 + 0x40) = pcVar3;
  (*local_b0)(0,auStack_c0,auStack_c0);
  FUN_0094bf10(*(undefined8 *)(param_1 + 8),param_1);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0094bf10  FUN_0094bf10 =====

void FUN_0094bf10(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 local_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  undefined1 *puStack_b0;
  undefined1 *local_a8;
  code *pcStack_a0;
  code *local_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  code *pcStack_60;
  code *local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = (**(code **)(*(long *)*param_1 + 0x10))();
  lVar5 = param_1[3];
  if (param_1[3] + 0x8000000000000001 < 2) {
    lVar4 = (**(code **)(*(long *)param_1[2] + 0x18))();
    if ((lVar3 == 0x7fffffffffffffff) || (lVar4 == 0x7fffffffffffffff)) {
      if (*(char *)(param_2 + 0x50) != '\x01') goto LAB_0094c114;
      lVar4 = *(long *)(param_2 + 0x18);
      lVar2 = 0x7fffffffffffffff;
      goto joined_r0x0094bfd4;
    }
    lVar5 = -0x8000000000000000;
    if (lVar4 != -0x8000000000000000 && lVar3 != -0x8000000000000000) {
      lVar5 = lVar4 + lVar3;
    }
  }
  if ((*(byte *)(param_2 + 0x50) & 1) == 0) {
LAB_0094c114:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
              );
  }
  lVar4 = *(long *)(param_2 + 0x18);
  lVar2 = 0x7fffffffffffffff;
  if ((lVar5 != 0x7fffffffffffffff) && (lVar2 = lVar5, lVar5 != -0x8000000000000000)) {
    lVar2 = lVar5 + -5000;
  }
joined_r0x0094bfd4:
  if ((lVar4 < lVar3) || (lVar4 < lVar2)) {
    uStack_c8 = *(undefined8 *)(param_2 + 0x18);
    local_d0 = *(ulong *)(param_2 + 0x10);
    local_c0 = *(undefined8 *)(param_2 + 0x20);
    pcStack_a0 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    local_a8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
    local_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_98 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    (**(code **)(param_2 + 0x40))(1,param_2 + 0x30,&puStack_b0);
    local_98 = *(code **)(param_2 + 0x48);
    pcStack_a0 = *(code **)(param_2 + 0x40);
    *(code **)(param_2 + 0x40) = FUN_00433984;
    *(undefined8 *)(param_2 + 0x48) = 0;
    if (*(char *)(param_2 + 0x50) == '\x01') {
      *(char *)(param_2 + 0x50) = '\0';
    }
    uStack_88 = uStack_c8;
    local_90 = local_d0;
    local_80 = local_c0;
    pcStack_60 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    local_68 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
    local_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_58 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    (*pcStack_a0)(1,&puStack_b0,&puStack_70);
    local_58 = local_98;
    pcStack_60 = pcStack_a0;
    pcStack_a0 = FUN_00433984;
    local_98 = (code *)0x0;
    local_d8 = local_80;
    (*local_58)(&puStack_70,local_90 & 0xffffffff,&local_d8);
    (*pcStack_60)(0,&puStack_70,&puStack_70);
    (*pcStack_a0)(0,&puStack_b0,&puStack_b0);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0094c12c  FUN_0094c12c =====

void FUN_0094c12c(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    (**(code **)(param_1 + 0x40))(0,param_1 + 0x30,param_1 + 0x30);
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return;
}


// ===== 0094c178  FUN_0094c178 =====

void FUN_0094c178(long *param_1)

{
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    return;
  }
  (**(code **)(*param_1 + 0x20))();
  *(undefined1 *)(param_1 + 0xc) = 1;
  FUN_0094c1c8(param_1[1],param_1);
  return;
}


// ===== 0094c1c8  FUN_0094c1c8 =====

void FUN_0094c1c8(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char **local_58;
  char *local_50;
  char *pcStack_48;
  
  if (((DAT_00d80548 & 1) == 0) && (iVar3 = FUN_0054fdd4(&DAT_00d80548), iVar3 != 0)) {
    DAT_00d80540 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d80548);
  }
  local_58 = (char **)0x0;
  pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d80540 != '\0') {
    local_58 = &local_50;
    FUN_0066d348(0x42,DAT_00d80540,"RemoveFrameScheduler",0,0,0,0,0,0);
    local_50 = DAT_00d80540;
    pcStack_48 = "RemoveFrameScheduler";
  }
  puVar4 = *(undefined8 **)(param_1 + 0x28);
  puVar7 = puVar4;
joined_r0x0094c260:
  do {
    if (puVar7 == (undefined8 *)0x0) {
LAB_0094c314:
      if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
        FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,0);
      }
      return;
    }
    if (param_2 < (ulong)puVar7[4]) {
      puVar7 = (undefined8 *)*puVar7;
      goto joined_r0x0094c260;
    }
    if (param_2 <= (ulong)puVar7[4]) {
      if (puVar7 != (undefined8 *)(param_1 + 0x28)) {
        puVar5 = puVar7;
        puVar1 = (undefined8 *)puVar7[1];
        if ((undefined8 *)puVar7[1] == (undefined8 *)0x0) {
          do {
            puVar6 = (undefined8 *)puVar5[2];
            bVar2 = puVar5 != (undefined8 *)*puVar6;
            puVar5 = puVar6;
          } while (bVar2);
        }
        else {
          do {
            puVar6 = puVar1;
            puVar1 = (undefined8 *)*puVar6;
          } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
        }
        if (*(undefined8 **)(param_1 + 0x20) == puVar7) {
          *(undefined8 **)(param_1 + 0x20) = puVar6;
        }
        *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
        FUN_005d5d48(puVar4,puVar7);
        if (puVar7 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        operator_delete(puVar7);
        if (*(long *)(param_1 + 0x30) == 0) {
          *(undefined8 *)(param_1 + 0x18) = 0x7fffffffffffffff;
        }
      }
      goto LAB_0094c314;
    }
    puVar7 = (undefined8 *)puVar7[1];
  } while( true );
}


// ===== 0094c3ac  FUN_0094c3ac =====

void FUN_0094c3ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_4;
  param_1[2] = param_3;
  param_1[3] = 0x7fffffffffffffff;
  param_1[5] = 0;
  param_1[4] = param_1 + 5;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  FUN_007ebcec(param_1 + 8);
  return;
}


// ===== 0094c3ec  FUN_0094c3ec =====

void FUN_0094c3ec(long param_1)

{
  int iVar1;
  void *pvVar2;
  long local_28;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    FUN_007ebdcc(*(undefined8 *)(param_1 + 0x40));
    pvVar2 = *(void **)(param_1 + 0x40);
    if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar2), iVar1 == 1)) {
      operator_delete(pvVar2);
    }
    local_28 = param_1 + 0x20;
    FUN_0094ca20(&local_28,*(undefined8 *)(param_1 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../video/decode_synchronizer.cc",0x78,"schedulers_.empty()",&DAT_001f5fa0);
}


// ===== 0094c484  FUN_0094c484 =====

long * FUN_0094c484(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong extraout_x1;
  long *plVar3;
  long lVar4;
  char **local_68;
  char *local_60;
  char *pcStack_58;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  
  if (((DAT_00d80538 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d80538), iVar1 != 0)) {
    DAT_00d80530 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d80538);
  }
  local_68 = (char **)0x0;
  pcStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d80530 != '\0') {
    local_68 = &local_60;
    FUN_0066d348(0x42,DAT_00d80530,"CreateSynchronizedFrameScheduler",0,0,0,0,0,0);
    local_60 = DAT_00d80530;
    pcStack_58 = "CreateSynchronizedFrameScheduler";
  }
  plVar2 = (long *)operator_new(0x70);
  *plVar2 = (long)&PTR_FUN_00d3e320;
  plVar2[1] = param_1;
  *(undefined1 *)(plVar2 + 2) = 0;
  *(undefined1 *)(plVar2 + 10) = 0;
  *(undefined1 *)(plVar2 + 0xc) = 0;
  local_50[0] = plVar2;
  FUN_0094ca94(0,param_1 + 0x20,param_1 + 0x20,local_50);
  if ((((extraout_x1 & 1) != 0) && (*(long *)(param_1 + 0x30) == 1)) &&
     ((*(byte *)(param_1 + 0x38) & 1) == 0)) {
    lVar4 = *(long *)(param_1 + 0x40);
    plVar3 = *(long **)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x38) = 1;
    if (lVar4 != 0) {
      FUN_00d0f740(1,lVar4);
    }
    local_50[0] = (long *)operator_new(0x30);
    *local_50[0] = lVar4;
    local_50[0][4] = (long)FUN_004473ec;
    local_50[0][5] = (long)FUN_0094cb9c;
    local_50[0][2] = param_1;
    local_40 = FUN_005db390;
    pcStack_38 = FUN_005db348;
    (**(code **)(*plVar3 + 0x10))(plVar3,local_50);
    (*local_40)(0,local_50,local_50);
  }
  if ((local_68 != (char **)0x0) && (**local_68 != '\0')) {
    FUN_0066d348(0x45,*local_68,local_68[1],0,0,0,0,0,0);
  }
  return plVar2;
}


// ===== 0094c668  FUN_0094c668 =====

void FUN_0094c668(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  char **local_110;
  char *local_108;
  char *pcStack_100;
  code *local_f8;
  long *local_f0;
  undefined1 *puStack_e8;
  code *local_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  code *local_c0;
  code *pcStack_b8;
  long *local_b0;
  long lStack_a8;
  code *local_a0;
  code *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  code *pcStack_80;
  code *local_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (((DAT_00d80558 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00d80558), iVar4 != 0)) {
    DAT_00d80550 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d80558);
  }
  local_110 = (char **)0x0;
  pcStack_100 = &DAT_aaaaaaaaaaaaaaaa;
  local_108 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d80550 != '\0') {
    local_110 = &local_108;
    FUN_0066d348(0x42,DAT_00d80550,"OnTick",0,0,0,0,0,0);
    local_108 = DAT_00d80550;
    pcStack_100 = "OnTick";
  }
  *(undefined1 *)(param_1 + 7) = 0;
  lVar5 = (**(code **)(*(long *)*param_1 + 0x10))();
  lVar6 = (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2]);
  lVar9 = 0x7fffffffffffffff;
  if ((lVar5 != 0x7fffffffffffffff) && (lVar6 != 0x7fffffffffffffff)) {
    lVar9 = -0x8000000000000000;
    if (lVar6 != -0x8000000000000000 && lVar5 != -0x8000000000000000) {
      lVar9 = lVar6 + lVar5;
    }
  }
  puVar10 = (undefined8 *)param_1[4];
  param_1[3] = lVar9;
  while (puVar10 != param_1 + 5) {
    plVar8 = (long *)puVar10[4];
    uVar7 = (**(code **)(*plVar8 + 0x10))(plVar8);
    if ((uVar7 >> 0x20 & 1) != 0) {
      if ((*(byte *)(plVar8 + 10) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                  );
      }
      if (plVar8[3] < (long)param_1[3]) {
        puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
        local_f0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
        puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
        local_e0 = (code *)&DAT_aaaaaaaaaaaaaaaa;
        puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
        local_d0 = &DAT_aaaaaaaaaaaaaaaa;
        pcStack_b8 = (code *)&DAT_aaaaaaaaaaaaaaaa;
        local_c0 = (code *)&DAT_aaaaaaaaaaaaaaaa;
        if ((*(byte *)(plVar8 + 10) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                    );
        }
        local_e0 = (code *)plVar8[4];
        puStack_e8 = (undefined1 *)plVar8[3];
        local_f0 = (long *)plVar8[2];
        (*(code *)plVar8[8])(1,plVar8 + 6,&local_d0);
        pcStack_b8 = (code *)plVar8[9];
        local_c0 = (code *)plVar8[8];
        plVar8[8] = (long)FUN_00433984;
        plVar8[9] = 0;
        if ((char)plVar8[10] == '\x01') {
          *(undefined1 *)(plVar8 + 10) = 0;
        }
        lStack_a8 = (long)puStack_e8;
        local_b0 = local_f0;
        local_a0 = local_e0;
        pcStack_80 = (code *)&DAT_aaaaaaaaaaaaaaaa;
        local_88 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
        local_98 = (code *)&DAT_aaaaaaaaaaaaaaaa;
        local_78 = (code *)&DAT_aaaaaaaaaaaaaaaa;
        (*local_c0)(1,&local_d0,&puStack_90);
        local_78 = pcStack_b8;
        pcStack_80 = local_c0;
        local_c0 = FUN_00433984;
        pcStack_b8 = (code *)0x0;
        local_f8 = local_a0;
        (*local_78)(&puStack_90,(ulong)local_b0 & 0xffffffff,&local_f8);
        (*pcStack_80)(0,&puStack_90,&puStack_90);
        (*local_c0)(0,&local_d0,&local_d0);
      }
    }
    puVar2 = (undefined8 *)puVar10[1];
    puVar11 = puVar10;
    if ((undefined8 *)puVar10[1] == (undefined8 *)0x0) {
      do {
        puVar10 = (undefined8 *)puVar11[2];
        bVar3 = puVar11 != (undefined8 *)*puVar10;
        puVar11 = puVar10;
      } while (bVar3);
    }
    else {
      do {
        puVar10 = puVar2;
        puVar2 = (undefined8 *)*puVar10;
      } while ((undefined8 *)*puVar10 != (undefined8 *)0x0);
    }
  }
  if ((param_1[6] != 0) && ((*(byte *)(param_1 + 7) & 1) == 0)) {
    lVar9 = param_1[8];
    plVar8 = (long *)param_1[2];
    *(undefined1 *)(param_1 + 7) = 1;
    if (lVar9 != 0) {
      FUN_00d0f740(1,lVar9);
    }
    local_b0 = (long *)operator_new(0x30);
    *local_b0 = lVar9;
    local_b0[4] = (long)FUN_004473ec;
    local_b0[5] = (long)FUN_0094cb9c;
    local_b0[2] = (long)param_1;
    local_a0 = FUN_005db390;
    local_98 = FUN_005db348;
    (**(code **)(*plVar8 + 0x10))(plVar8,&local_b0);
    (*local_a0)(0,&local_b0,&local_b0);
  }
  if ((local_110 != (char **)0x0) && (**local_110 != '\0')) {
    FUN_0066d348(0x45,*local_110,local_110[1],0,0,0,0,0,0);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0094ca20  FUN_0094ca20 =====

void FUN_0094ca20(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_0094ca20(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar1 = (undefined8 *)param_2[1];
      operator_delete(param_2);
      param_2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


// ===== 0094ca94  FUN_0094ca94 =====

undefined1  [16] FUN_0094ca94(undefined8 param_1,long *param_2,undefined8 param_3,ulong *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  plVar3 = param_2 + 1;
  plVar6 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar2 = plVar1, plVar3 = plVar2, *param_4 < (ulong)plVar2[4]) {
        plVar1 = (long *)*plVar2;
        plVar6 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_0094cb00;
      }
      if (*param_4 <= (ulong)plVar2[4]) {
        uVar4 = 0;
        goto LAB_0094cb6c;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar6 = plVar2 + 1;
  }
LAB_0094cb00:
  plVar2 = (long *)operator_new(0x28);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar5 = *param_4;
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = (long)plVar3;
  plVar2[4] = uVar5;
  *plVar6 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar3 = (long *)*plVar6;
  }
  FUN_005d5b94(param_2[1],plVar3);
  uVar4 = 1;
  param_2[2] = param_2[2] + 1;
LAB_0094cb6c:
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = plVar2;
  return auVar7;
}


// ===== 0094cb9c  FUN_0094cb9c =====

void FUN_0094cb9c(undefined8 *param_1)

{
  FUN_0094c668(*param_1);
  return;
}


// ===== 0094cba8  FUN_0094cba8 =====

undefined8 *
FUN_0094cba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x228);
  *puVar1 = &PTR_FUN_00d3e360;
  puVar1[1] = param_1;
  puVar1[2] = param_2;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  *(undefined1 *)(puVar1 + 5) = 0;
  *(undefined1 *)(puVar1 + 0x15) = 0;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  *(undefined1 *)(puVar1 + 0x32) = 0;
  puVar1[0x33] = 0;
  *(undefined1 *)(puVar1 + 0x34) = 0;
  *(undefined1 *)(puVar1 + 0x35) = 0;
  puVar1[0x36] = 0;
  puVar1[0x37] = param_3;
  puVar1[0x38] = param_4;
  puVar1[0x39] = 0;
  *(undefined1 *)(puVar1 + 0x3a) = 0;
  *(undefined1 *)(puVar1 + 0x3e) = 0;
  *(undefined1 *)(puVar1 + 0x3f) = 0;
  *(undefined1 *)(puVar1 + 0x40) = 0;
  FUN_00660fac(puVar1 + 0x41);
  *(undefined4 *)(puVar1 + 0x43) = 0;
  FUN_007ebcec(puVar1 + 0x44);
  return puVar1;
}


// ===== 0094cc58  FUN_0094cc58 =====

void FUN_0094cc58(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined1 *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  *param_1 = &PTR_FUN_00d3e360;
  if (param_1[0x37] != 0) {
    lVar2 = param_1[0x33];
    pthread_mutex_lock((pthread_mutex_t *)(lVar2 + 0x10));
    *(undefined8 *)(lVar2 + 0x38) = 0;
    pthread_mutex_unlock((pthread_mutex_t *)(lVar2 + 0x10));
    uVar5 = param_1[0x33];
    plVar3 = (long *)param_1[0x38];
    param_1[0x33] = 0;
    local_50[0] = (undefined1 *)operator_new(0x10);
    *(undefined8 *)(local_50[0] + 8) = uVar5;
    *local_50[0] = 1;
    local_40 = FUN_0094d92c;
    pcStack_38 = FUN_0094d924;
    (**(code **)(*plVar3 + 8))(plVar3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
  }
  FUN_007ebdcc(param_1[0x44]);
  pvVar4 = (void *)param_1[0x44];
  if ((pvVar4 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar4), iVar1 == 1)) {
    operator_delete(pvVar4);
  }
  plVar3 = (long *)param_1[0x33];
  param_1[0x33] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (*(char *)(param_1 + 0x32) == '\x01') {
    FUN_0094d9b4(param_1 + 0x16);
  }
  if (*(char *)(param_1 + 0x15) == '\x01') {
    param_1[5] = &PTR_FUN_00d3e408;
    FUN_007de938(param_1 + 9);
  }
  return;
}


// ===== 0094cd9c  FUN_0094cd9c =====

void FUN_0094cd9c(void *param_1)

{
  FUN_0094cc58();
  operator_delete(param_1);
  return;
}


// ===== 0094cdcc  FUN_0094cdcc =====

void FUN_0094cdcc(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined1 uStack_181;
  long local_180;
  long lStack_178;
  undefined1 auStack_170 [224];
  char **local_90;
  char *local_88;
  char *pcStack_80;
  undefined1 uStack_71;
  long *local_70 [2];
  code *local_60;
  code *pcStack_58;
  
  if (((DAT_00d805a8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d805a8), iVar1 != 0)) {
    DAT_00d805a0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d805a8);
  }
  local_90 = (char **)0x0;
  pcStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d805a0 != '\0') {
    FUN_0066d348(0x42,DAT_00d805a0,"FrameCadenceAdapterImpl::OnFrame",0,0,0,0,0,0);
    local_88 = DAT_00d805a0;
    pcStack_80 = "FrameCadenceAdapterImpl::OnFrame";
    local_90 = &local_88;
  }
  lVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  FUN_00d0f740(1,param_1 + 0x218);
  lVar5 = *(long *)(param_1 + 0x220);
  plVar4 = *(long **)(param_1 + 0x10);
  if (lVar5 != 0) {
    FUN_00d0f740(1,lVar5);
  }
  local_180 = param_1;
  lStack_178 = lVar2;
  FUN_007bf070(auStack_170,param_2);
  plVar3 = (long *)operator_new(0xf0);
  plVar3[1] = lStack_178;
  *plVar3 = local_180;
  FUN_007bf070(plVar3 + 2,auStack_170);
  local_70[0] = (long *)operator_new(0x30);
  *local_70[0] = lVar5;
  local_70[0][4] = (long)FUN_0094f960;
  local_70[0][5] = (long)FUN_0094f7e4;
  local_70[0][2] = (long)plVar3;
  local_60 = FUN_005db390;
  pcStack_58 = FUN_005db348;
  (**(code **)(*plVar4 + 8))(plVar4,local_70,&uStack_71,&uStack_181);
  (*local_60)(0,local_70,local_70);
  FUN_007bf020(auStack_170);
  if ((local_90 != (char **)0x0) && (**local_90 != '\0')) {
    FUN_0066d348(0x45,*local_90,local_90[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 0094cfc4  FUN_0094cfc4 =====

void FUN_0094cfc4(long param_1)

{
  long *plVar1;
  long lVar2;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  (**(code **)(**(long **)(param_1 + 0x1c8) + 0x18))();
  lVar2 = *(long *)(param_1 + 0x220);
  plVar1 = *(long **)(param_1 + 0x10);
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2);
  }
  local_50[0] = (long *)operator_new(0x30);
  *local_50[0] = lVar2;
  local_50[0][4] = (long)FUN_004473ec;
  local_50[0][5] = (long)FUN_0094f9c8;
  local_50[0][2] = param_1;
  local_40 = FUN_005db390;
  pcStack_38 = FUN_005db348;
  (**(code **)(*plVar1 + 8))(plVar1,local_50,&uStack_11,&uStack_12);
  (*local_40)(0,local_50,local_50);
  return;
}


// ===== 0094d08c  FUN_0094d08c =====

void FUN_0094d08c(long param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *local_60 [2];
  code *local_50;
  code *pcStack_48;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    lVar5 = param_2[2];
    lVar8 = *param_2;
    if ((char)param_2[3] == '\0') {
      lVar5 = -0x4010000000000000;
    }
    if ((char)param_2[1] == '\0') {
      lVar8 = -0x4010000000000000;
    }
    FUN_00623bb0(lVar8,lVar5,&DAT_002285f6,"../../video/frame_cadence_adapter.cc",0x1e39,
                 "OnConstraintsChanged"," this ",param_1," min_fps "," max_fps ");
  }
  lVar8 = *(long *)(param_1 + 0x220);
  plVar3 = *(long **)(param_1 + 0x10);
  if (lVar8 != 0) {
    FUN_00d0f740(1,lVar8);
  }
  lVar4 = param_2[1];
  lVar5 = *param_2;
  lVar7 = param_2[3];
  lVar6 = param_2[2];
  plVar2 = (long *)operator_new(0x28);
  *plVar2 = param_1;
  plVar2[2] = lVar4;
  plVar2[1] = lVar5;
  plVar2[4] = lVar7;
  plVar2[3] = lVar6;
  local_60[0] = (long *)operator_new(0x30);
  *local_60[0] = lVar8;
  local_60[0][4] = (long)FUN_005ea56c;
  local_60[0][5] = (long)FUN_0094fc18;
  local_60[0][2] = (long)plVar2;
  local_60[0][3] = 0x28;
  local_50 = FUN_005db390;
  pcStack_48 = FUN_005db348;
  (**(code **)(*plVar3 + 8))(plVar3,local_60,&uStack_21,&uStack_22);
  (*local_50)(0,local_60,local_60);
  return;
}


// ===== 0094d1e0  FUN_0094d1e0 =====

void FUN_0094d1e0(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *local_48;
  
  plVar1 = (long *)(param_1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1c8) = param_2;
  if (*(long *)(param_1 + 0x1b8) == 0) {
    if (*(char *)(param_1 + 0xa8) == '\x01') {
      *(undefined ***)(param_1 + 0x28) = &PTR_FUN_00d3e408;
      FUN_007de938(param_1 + 0x48);
      *(undefined1 *)(param_1 + 0xa8) = 0;
    }
    if (param_1 == -0x28) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(undefined ***)(param_1 + 0x28) = &PTR_FUN_00d3e408;
    *(undefined1 *)(param_1 + 0x30) = 0;
    *(undefined1 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = param_2;
    FUN_007de7c4(0x447a0000,param_1 + 0x48,0xb9a);
    *(undefined1 *)(param_1 + 0xa8) = 1;
    lVar7 = *plVar1;
  }
  else {
    pvVar8 = *(void **)(param_1 + 0x220);
    if (pvVar8 != (void *)0x0) {
      FUN_00d0f740(1,pvVar8);
    }
    puVar5 = (undefined8 *)operator_new(0xf8);
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar10 = *(undefined8 *)(param_1 + 0x1c0);
    lVar7 = *plVar1;
    uVar9 = *(undefined8 *)(param_1 + 0x1c8);
    *puVar5 = &PTR_FUN_00d3e440;
    puVar5[1] = uVar2;
    local_48 = &DAT_aaaaaaaaaaaaaaaa;
    pthread_mutexattr_init((pthread_mutexattr_t *)&local_48);
    pthread_mutex_init((pthread_mutex_t *)(puVar5 + 2),(pthread_mutexattr_t *)&local_48);
    pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_48);
    puVar5[7] = uVar3;
    puVar5[8] = pvVar8;
    if (pvVar8 != (void *)0x0) {
      FUN_00d0f740(1,pvVar8);
    }
    *(undefined1 *)(puVar5 + 9) = 0;
    *(undefined1 *)(puVar5 + 10) = 0;
    FUN_007de7c4(0x447a0000,puVar5 + 0xb,0xb9a);
    puVar5[0x17] = uVar9;
    puVar5[0x19] = uVar10;
    puVar5[0x18] = lVar7;
    FUN_007ebcec(puVar5 + 0x1a);
    puVar5[0x1d] = 0;
    puVar5[0x1e] = 0;
    puVar5[0x1b] = 0x7fffffffffffffff;
    puVar5[0x1c] = 0;
    if ((pvVar8 != (void *)0x0) && (iVar4 = FUN_00d0f7a0(0xffffffff,pvVar8), iVar4 == 1)) {
      operator_delete(pvVar8);
    }
    plVar6 = *(long **)(param_1 + 0x198);
    *(undefined8 **)(param_1 + 0x198) = puVar5;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    lVar7 = *plVar1;
  }
  if (lVar7 == 0) {
    if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../video/frame_cadence_adapter.cc",0x3f1,"passthrough_adapter_",&DAT_001f5fa0
                  );
    }
    lVar7 = param_1 + 0x28;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x198);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../video/frame_cadence_adapter.cc",0x3ee,"vsync_encode_adapter_",
                   &DAT_001f5fa0);
    }
  }
  *(long *)(param_1 + 0x1b0) = lVar7;
  return;
}


// ===== 0094d3f0  FUN_0094d3f0 =====

void FUN_0094d3f0(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1a0) = param_2;
  *(undefined1 *)(param_1 + 0x1a8) = param_3;
  FUN_0094fcc4(param_1,uVar1);
  return;
}


// ===== 0094d408  FUN_0094d408 =====

ulong FUN_0094d408(long param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x1b0) + 0x18))();
  return uVar1 & 0xffffffffff;
}


// ===== 0094d434  FUN_0094d434 =====

void FUN_0094d434(long param_1,ulong param_2,ulong param_3)

{
  ushort *puVar1;
  int iVar2;
  ulong local_50;
  ulong uStack_48;
  char *local_40;
  char *pcStack_38;
  undefined2 local_14 [2];
  
  if (*(char *)(param_1 + 400) == '\x01') {
    if (((DAT_00d80608 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d80608), iVar2 != 0)) {
      DAT_00d80600 = (char *)FUN_0066d328("disabled-by-default-webrtc");
      FUN_0054ff1c(&DAT_00d80608);
    }
    if (*DAT_00d80600 != '\0') {
      local_40 = "spatial_index";
      pcStack_38 = "converged";
      uStack_48 = param_3 & 1 | 0xaaaaaaaaaaaaaa00;
      local_14[0] = 0x102;
      local_50 = param_2;
      FUN_0066d348(0x49,DAT_00d80600,"UpdateLayerQualityConvergence",0,2,&local_40,local_14,
                   &local_50,0);
    }
    if ((param_2 < (ulong)(*(long *)(param_1 + 0x158) - *(long *)(param_1 + 0x150) >> 1)) &&
       (puVar1 = (ushort *)(*(long *)(param_1 + 0x150) + param_2 * 2),
       *(char *)((long)puVar1 + 1) == '\x01')) {
      *puVar1 = (ushort)param_3 & 1 | 0x100;
    }
  }
  return;
}


// ===== 0094d55c  FUN_0094d55c =====

void FUN_0094d55c(long param_1,ulong param_2,ulong param_3)

{
  undefined2 *puVar1;
  int iVar2;
  ulong local_50;
  ulong uStack_48;
  char *local_40;
  char *pcStack_38;
  undefined2 local_14 [2];
  
  if (*(char *)(param_1 + 400) == '\x01') {
    if (((DAT_00d80618 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d80618), iVar2 != 0)) {
      DAT_00d80610 = (char *)FUN_0066d328("disabled-by-default-webrtc");
      FUN_0054ff1c(&DAT_00d80618);
    }
    if (*DAT_00d80610 != '\0') {
      local_40 = "spatial_index";
      pcStack_38 = "enabled";
      uStack_48 = param_3 & 1 | 0xaaaaaaaaaaaaaa00;
      local_14[0] = 0x102;
      local_50 = param_2;
      FUN_0066d348(0x49,DAT_00d80610,"UpdateLayerStatus",0,2,&local_40,local_14,&local_50,0);
    }
    if (param_2 < (ulong)(*(long *)(param_1 + 0x158) - *(long *)(param_1 + 0x150) >> 1)) {
      puVar1 = (undefined2 *)(*(long *)(param_1 + 0x150) + param_2 * 2);
      if ((param_3 & 1) == 0) {
        if (*(byte *)((long)puVar1 + 1) != 0) {
          *(undefined1 *)((long)puVar1 + 1) = 0;
        }
      }
      else if ((*(byte *)((long)puVar1 + 1) & 1) == 0) {
        *puVar1 = 0x100;
      }
    }
  }
  return;
}


// ===== 0094d68c  FUN_0094d68c =====

void FUN_0094d68c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined8 *)(param_1 + 0x1f8) = param_2;
  *(undefined1 *)(param_1 + 0x200) = param_3;
  if (*(char *)(param_1 + 400) == '\x01') {
    FUN_00950160(param_1 + 0xb0);
    return;
  }
  return;
}


// ===== 0094d6b0  FUN_0094d6b0 =====

void FUN_0094d6b0(long param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  
  if (*(char *)(param_1 + 400) == '\x01') {
    if (((DAT_00d80628 & 1) == 0) && (iVar3 = FUN_0054fdd4(&DAT_00d80628), iVar3 != 0)) {
      DAT_00d80620 = (char *)FUN_0066d328("webrtc");
      FUN_0054ff1c(&DAT_00d80628);
    }
    if (*DAT_00d80620 != '\0') {
      FUN_0066d348(0x49,DAT_00d80620,"ProcessKeyFrameRequest",0,0,0,0,0,0);
    }
    puVar2 = *(undefined2 **)(param_1 + 0x158);
    for (puVar1 = *(undefined2 **)(param_1 + 0x150); puVar1 != puVar2; puVar1 = puVar1 + 1) {
      if (*(char *)((long)puVar1 + 1) == '\x01') {
        *puVar1 = 0x100;
      }
    }
    if ((*(char *)(param_1 + 0x148) == '\x01') && ((*(byte *)(param_1 + 0x128) & 1) != 0)) {
      lVar4 = (**(code **)(**(long **)(param_1 + 0xc0) + 0x10))();
      if ((*(byte *)(param_1 + 0x148) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                  );
      }
      lVar8 = *(long *)(param_1 + 0x120);
      lVar9 = 0x7fffffffffffffff;
      if (lVar8 != 0x7fffffffffffffff) {
        if (lVar8 != -0x8000000000000000) {
          lVar8 = lVar8 + 1000000;
        }
        if ((lVar8 != 0x7fffffffffffffff) && (lVar4 != -0x8000000000000000)) {
          lVar9 = -0x8000000000000000;
          if (lVar4 != 0x7fffffffffffffff && lVar8 != -0x8000000000000000) {
            lVar9 = lVar8 - lVar4;
          }
        }
      }
      lVar4 = *(long *)(param_1 + 0xe0);
      uVar5 = FUN_00417e08();
      if (lVar4 < lVar9) {
        if ((uVar5 & 1) == 0) {
          FUN_00623bb0(&DAT_002286e0,"../../video/frame_cadence_adapter.cc",0x1261,
                       "ProcessKeyFrameRequest"," this ",param_1 + 0xb0,
                       " not requesting refresh frame and scheduling a short repeat due to key frame request"
                      );
        }
        iVar3 = *(int *)(param_1 + 0x118) + 1;
        *(int *)(param_1 + 0x118) = iVar3;
        FUN_0094ef88(param_1 + 0xb0,iVar3,0);
        return;
      }
      if ((uVar5 & 1) == 0) {
        pcVar7 = " not requesting refresh frame because of soon happening idle repeat";
        uVar6 = 0x1221;
LAB_0094d890:
        FUN_00623bb0(&DAT_002286e0,"../../video/frame_cadence_adapter.cc",uVar6,
                     "ProcessKeyFrameRequest"," this ",param_1 + 0xb0,pcVar7);
        return;
      }
    }
    else {
      uVar5 = FUN_00417e08();
      if ((uVar5 & 1) == 0) {
        pcVar7 = 
        " not requesting refresh frame because of recently incoming frame or short repeating.";
        uVar6 = 0x11c1;
        goto LAB_0094d890;
      }
    }
  }
  return;
}


// ===== 0094d924  FUN_0094d924 =====

void FUN_0094d924(void)

{
  return;
}


// ===== 0094d92c  FUN_0094d92c =====

void FUN_0094d92c(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long *plVar2;
  char *pcVar3;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x94d9b4);
      (*pcVar1)();
    }
    pcVar3 = (char *)*param_2;
    if (pcVar3 != (char *)0x0) {
      if (*pcVar3 == '\x01') {
        plVar2 = *(long **)(pcVar3 + 8);
        *pcVar3 = '\0';
        pcVar3[8] = '\0';
        pcVar3[9] = '\0';
        pcVar3[10] = '\0';
        pcVar3[0xb] = '\0';
        pcVar3[0xc] = '\0';
        pcVar3[0xd] = '\0';
        pcVar3[0xe] = '\0';
        pcVar3[0xf] = '\0';
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
      }
      operator_delete(pcVar3);
      return;
    }
  }
  return;
}


// ===== 0094d9b4  FUN_0094d9b4 =====

void FUN_0094d9b4(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  
  *param_1 = &PTR_FUN_00d3e3d0;
  FUN_00841cf8(param_1 + 0x17);
  FUN_007ebdcc(param_1[0x1b]);
  pvVar5 = (void *)param_1[0x1b];
  if ((pvVar5 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar5), iVar1 == 1)) {
    operator_delete(pvVar5);
  }
  pvVar5 = (void *)param_1[0x17];
  if ((pvVar5 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar5), iVar1 == 1)) {
    operator_delete(pvVar5);
  }
  pvVar5 = (void *)param_1[0x14];
  if (pvVar5 != (void *)0x0) {
    pvVar2 = (void *)param_1[0x15];
    uVar4 = (ulong)((long)pvVar2 + ((long)pvVar2 << 0x3f) + -2) >> 1;
    uVar3 = (ulong)(((long)pvVar5 - (long)pvVar2 << 0x3f) - ((long)pvVar5 - (long)pvVar2)) >> 1;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar5 - (uint)pvVar2 | (uint)pvVar2) & 1) == 0)) {
      uVar3 = uVar3 & 0x7ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -2);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (pvVar2 != pvVar5) {
      pvVar2 = (void *)((long)pvVar2 + -2);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[0x15] = pvVar5;
    operator_delete(pvVar5);
  }
  FUN_0094dacc(param_1 + 7);
  return;
}


// ===== 0094dacc  FUN_0094dacc =====

void FUN_0094dacc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  
  puVar7 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)param_1[2];
  puVar1 = puVar7;
  if (puVar7 != puVar3) {
    uVar4 = param_1[4];
    plVar8 = puVar7 + uVar4 / 0x12;
    lVar6 = *plVar8 + (uVar4 % 0x12) * 0xe0;
    lVar9 = puVar7[(param_1[5] + uVar4) / 0x12] + ((param_1[5] + uVar4) % 0x12) * 0xe0;
    puVar1 = puVar3;
    if (lVar6 != lVar9) {
      do {
        if (lVar6 == 0) goto LAB_0094dc88;
        FUN_007bf020(lVar6);
        lVar6 = lVar6 + 0xe0;
        if (lVar6 - *plVar8 == 0xfc0) {
          plVar8 = plVar8 + 1;
          lVar6 = *plVar8;
        }
      } while (lVar6 != lVar9);
      puVar7 = (undefined8 *)param_1[1];
      puVar3 = (undefined8 *)param_1[2];
      puVar1 = puVar3;
    }
  }
  param_1[5] = 0;
  lVar6 = (long)puVar1 - (long)puVar7;
  while (uVar4 = lVar6 >> 3, 2 < uVar4) {
    operator_delete((void *)*puVar7);
    puVar3 = (undefined8 *)param_1[2];
    puVar7 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = puVar7;
    lVar6 = (long)puVar3 - (long)puVar7;
  }
  if (uVar4 == 1) {
    uVar2 = 9;
  }
  else {
    if (uVar4 != 2) goto LAB_0094dc00;
    uVar2 = 0x12;
  }
  param_1[4] = uVar2;
LAB_0094dc00:
  puVar1 = puVar3;
  if (puVar7 != puVar3) {
    do {
      puVar1 = puVar7 + 1;
      operator_delete((void *)*puVar7);
      puVar7 = puVar1;
    } while (puVar1 != puVar3);
    puVar3 = (undefined8 *)param_1[1];
    puVar1 = (undefined8 *)param_1[2];
  }
  uVar5 = (ulong)((long)puVar1 + (-8 - ((long)puVar1 << 0x3d))) >> 3;
  uVar4 = (ulong)(((long)puVar3 - (long)puVar1 << 0x3d) - ((long)puVar3 - (long)puVar1)) >> 3;
  if (uVar5 <= uVar4) {
    uVar4 = uVar5;
  }
  if ((1 < uVar4) && ((((int)puVar3 - (int)puVar1 | -(int)puVar1) & 7U) == 0)) {
    uVar4 = uVar4 & 0x1ffffffffffffffe;
    puVar1 = puVar1 + -uVar4;
    do {
      uVar4 = uVar4 - 2;
    } while (uVar4 != 0);
  }
  do {
    if (puVar1 == puVar3) {
      param_1[2] = puVar1;
      if ((void *)*param_1 != (void *)0x0) {
        operator_delete((void *)*param_1);
        return;
      }
      return;
    }
    puVar1 = puVar1 + -1;
  } while (puVar1 != (undefined8 *)0x0);
LAB_0094dc88:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0094dce8  FUN_0094dce8 =====

void FUN_0094dce8(void *param_1)

{
  FUN_0094d9b4();
  operator_delete(param_1);
  return;
}


// ===== 0094dd18  FUN_0094dd18 =====

void FUN_0094dd18(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined1 uStack_89;
  char **local_88;
  char *local_80;
  char *pcStack_78;
  long *local_70 [2];
  code *local_60;
  code *pcStack_58;
  undefined1 local_44 [4];
  
  if (((DAT_00d80568 & 1) == 0) && (iVar3 = FUN_0054fdd4(&DAT_00d80568), iVar3 != 0)) {
    DAT_00d80560 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d80568);
  }
  local_88 = (char **)0x0;
  pcStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d80560 != '\0') {
    FUN_0066d348(0x42,DAT_00d80560,"ZeroHertzAdapterMode::OnFrame",0,0,0,0,0,0);
    local_80 = DAT_00d80560;
    pcStack_78 = "ZeroHertzAdapterMode::OnFrame";
    local_88 = &local_80;
  }
  FUN_00841cf8(param_1 + 0xb8);
  puVar2 = *(undefined2 **)(param_1 + 0xa8);
  for (puVar1 = *(undefined2 **)(param_1 + 0xa0); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    if (*(char *)((long)puVar1 + 1) == '\x01') {
      *puVar1 = 0x100;
    }
  }
  if (*(char *)(param_1 + 0x98) == '\x01') {
    FUN_0094e05c(param_1 + 0x38);
  }
  lVar5 = *(long *)(param_1 + 0x40);
  lVar7 = *(long *)(param_1 + 0x48);
  lVar4 = 0;
  if (lVar7 != lVar5) {
    lVar4 = (lVar7 - lVar5 >> 3) * 0x12 + -1;
  }
  if (lVar4 == *(long *)(param_1 + 0x60) + *(long *)(param_1 + 0x58)) {
    FUN_0094e138(param_1 + 0x38);
    lVar5 = *(long *)(param_1 + 0x40);
    lVar7 = *(long *)(param_1 + 0x48);
  }
  if ((lVar5 != lVar7) &&
     (uVar6 = *(long *)(param_1 + 0x60) + *(long *)(param_1 + 0x58),
     lVar4 = *(long *)(lVar5 + (uVar6 / 0x12) * 8) + (uVar6 % 0x12) * 0xe0, lVar4 != 0)) {
    FUN_007bf070(lVar4,param_4);
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 1;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    if (*(char *)(param_1 + 0x98) == '\x01') {
      *(undefined1 *)(param_1 + 0x98) = 0;
    }
    lVar5 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    lVar4 = 0x7fffffffffffffff;
    if ((param_2 != -0x8000000000000000) && (lVar5 != 0x7fffffffffffffff)) {
      lVar4 = -0x8000000000000000;
      if (lVar5 != -0x8000000000000000 && param_2 != 0x7fffffffffffffff) {
        lVar4 = lVar5 - param_2;
      }
    }
    lVar5 = *(long *)(param_1 + 0xd8);
    plVar8 = *(long **)(param_1 + 8);
    if (lVar5 != 0) {
      FUN_00d0f740(1,lVar5);
    }
    local_70[0] = (long *)operator_new(0x30);
    *local_70[0] = lVar5;
    local_70[0][2] = param_1;
    local_70[0][3] = param_2;
    local_70[0][4] = (long)FUN_004473ec;
    local_70[0][5] = (long)FUN_0094ed68;
    uVar6 = 0x7fffffffffffffff;
    if ((lVar4 != -0x8000000000000000) &&
       (lVar5 = *(long *)(param_1 + 0x30), lVar5 != 0x7fffffffffffffff)) {
      uVar6 = 0;
      if (lVar5 != -0x8000000000000000 && lVar4 != 0x7fffffffffffffff) {
        uVar6 = lVar5 - lVar4 & (lVar5 - lVar4 >> 0x3f ^ 0xffffffffffffffffU);
      }
    }
    local_60 = FUN_005db390;
    pcStack_58 = FUN_005db348;
    local_44[0] = 1;
    (**(code **)(*plVar8 + 0x10))(plVar8,local_70,uVar6,local_44,&uStack_89);
    (*local_60)(0,local_70,local_70);
    if ((local_88 != (char **)0x0) && (**local_88 != '\0')) {
      FUN_0066d348(0x45,*local_88,local_88[1],0,0,0,0,0,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0094e040  FUN_0094e040 =====

ulong FUN_0094e040(long param_1)

{
  return (ulong)(uint)(int)*(double *)(param_1 + 0x20) | 0x100000000;
}


// ===== 0094e054  FUN_0094e054 =====

void FUN_0094e054(void)

{
  return;
}


// ===== 0094e05c  FUN_0094e05c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0094e05c(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:2185: libc++ Hardening assertion !empty() failed: deque::pop_front called on an empty deque\n"
              );
  }
  if (*(long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) / 0x12) * 8) +
      (*(ulong *)(param_1 + 0x20) % 0x12) * 0xe0 != 0) {
    FUN_007bf020();
    uVar1 = *(long *)(param_1 + 0x20) + _DAT_001f2940;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + _UNK_001f2948;
    *(ulong *)(param_1 + 0x20) = uVar1;
    if (0x23 < uVar1) {
      operator_delete((void *)**(undefined8 **)(param_1 + 8));
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x12;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0094e138  FUN_0094e138 =====

void FUN_0094e138(long *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  void *local_18;
  
  if ((ulong)param_1[4] < 0x12) {
    lVar2 = param_1[3];
    uVar6 = param_1[2] - param_1[1];
    uVar4 = lVar2 - *param_1;
    if (uVar4 <= uVar6) {
      uVar4 = (long)uVar4 >> 2;
      if (lVar2 == *param_1) {
        uVar4 = 1;
      }
      puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      local_40 = &DAT_aaaaaaaaaaaaaaaa;
      if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      local_50 = (undefined1 *)operator_new(uVar4 * 8);
      puStack_48 = local_50 + uVar6;
      puStack_38 = local_50 + uVar4 * 8;
      local_40 = puStack_48;
      local_18 = operator_new(0xfc0);
      FUN_0094e5a8(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_0094eacc(&local_50,lVar5);
          lVar2 = param_1[1];
        } while (lVar5 != lVar2);
        lVar5 = param_1[2];
      }
      puVar1 = (undefined1 *)*param_1;
      uVar6 = (lVar5 - (lVar5 << 0x3d)) - 8U >> 3;
      uVar4 = (ulong)((lVar2 - lVar5 << 0x3d) - (lVar2 - lVar5)) >> 3;
      lVar3 = param_1[3];
      param_1[1] = (long)puStack_48;
      *param_1 = (long)local_50;
      param_1[3] = (long)puStack_38;
      param_1[2] = (long)local_40;
      if (uVar6 <= uVar4) {
        uVar4 = uVar6;
      }
      local_40 = (undefined1 *)lVar5;
      if ((1 < uVar4) && ((((int)lVar2 - (int)lVar5 | -(int)lVar5) & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        local_40 = (undefined1 *)(lVar5 + uVar4 * -8);
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (local_50 = puVar1, puStack_48 = (undefined1 *)lVar2, puStack_38 = (undefined1 *)lVar3,
            local_40 != (undefined1 *)lVar2) {
        local_40 = (undefined1 *)((long)local_40 + -8);
        if (local_40 == (undefined1 *)0x0) {
          local_40 = (undefined1 *)lVar5;
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (puVar1 == (undefined1 *)0x0) {
        return;
      }
      operator_delete(puVar1);
      return;
    }
    if (lVar2 != param_1[2]) {
      local_50 = (undefined1 *)operator_new(0xfc0);
      FUN_0094e5a8(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0xfc0);
    FUN_0094e830(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x12;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_0094e320(param_1,&local_50);
  return;
}


// ===== 0094e320  FUN_0094e320 =====

void FUN_0094e320(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *__src;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar17 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar17) {
    pvVar2 = (void *)*param_1;
    __src = (undefined8 *)param_1[1];
    if ((long)__src - (long)pvVar2 == 0) {
      uVar5 = (long)param_1[3] - (long)pvVar2 >> 2;
      if (puVar17 == __src) {
        uVar5 = 1;
      }
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar18 = uVar5 >> 2;
      pvVar4 = operator_new(uVar5 * 8);
      puVar6 = (undefined8 *)((long)pvVar4 + uVar18 * 8);
      lVar15 = (long)puVar17 - (long)__src;
      iVar16 = (int)puVar17;
      puVar7 = puVar6;
      if (lVar15 != 0) {
        uVar13 = lVar15 - 8U >> 3;
        uVar11 = uVar13;
        if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
          uVar11 = (ulong)-(long)puVar6 >> 3;
        }
        puVar7 = (undefined8 *)((long)puVar6 + lVar15);
        puVar8 = puVar6;
        puVar10 = __src;
        if (0x31 < uVar11) {
          if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
            uVar13 = (ulong)-(long)puVar6 >> 3;
          }
          if ((((((iVar16 - (int)__src | -(int)pvVar4) & 7U) == 0) && (puVar6 <= puVar6 + uVar13))
              && (__src <= __src + uVar13)) && (0x1f < (long)pvVar4 + (uVar18 * 8 - (long)__src))) {
            uVar1 = uVar11 + 1 & 3;
            puVar14 = (undefined8 *)((long)pvVar4 + uVar18 * 8 + 0x10);
            uVar18 = 4;
            if (uVar1 != 0) {
              uVar18 = uVar1;
            }
            puVar12 = __src + 2;
            lVar9 = (uVar11 + 1) - uVar18;
            lVar15 = ~uVar13 + uVar18;
            puVar8 = puVar6 + lVar9;
            puVar10 = __src + lVar9;
            do {
              puVar3 = puVar12 + -1;
              uVar19 = puVar12[-2];
              uVar21 = puVar12[1];
              uVar20 = *puVar12;
              lVar15 = lVar15 + 4;
              puVar12 = puVar12 + 4;
              puVar14[-1] = *puVar3;
              puVar14[-2] = uVar19;
              puVar14[1] = uVar21;
              *puVar14 = uVar20;
              puVar14 = puVar14 + 4;
            } while (lVar15 != 0);
          }
        }
        do {
          if (puVar8 == (undefined8 *)0x0) goto LAB_0094e590;
          puVar14 = puVar8 + 1;
          *puVar8 = *puVar10;
          puVar8 = puVar14;
          puVar10 = puVar10 + 1;
        } while (puVar14 != puVar7);
      }
      *param_1 = pvVar4;
      param_1[1] = puVar6;
      uVar11 = (ulong)((long)puVar17 + (-8 - ((long)puVar17 << 0x3d))) >> 3;
      uVar18 = (ulong)(((long)__src - (long)puVar17 << 0x3d) - ((long)__src - (long)puVar17)) >> 3;
      param_1[2] = puVar7;
      param_1[3] = (void *)((long)pvVar4 + uVar5 * 8);
      if (uVar11 <= uVar18) {
        uVar18 = uVar11;
      }
      puVar6 = puVar17;
      if ((1 < uVar18) && ((((int)__src - iVar16 | -iVar16) & 7U) == 0)) {
        uVar18 = uVar18 & 0x1ffffffffffffffe;
        puVar6 = puVar17 + -uVar18;
        do {
          uVar18 = uVar18 - 2;
        } while (uVar18 != 0);
      }
      while (puVar6 != __src) {
        puVar6 = puVar6 + -1;
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (__src != (undefined8 *)0x0) {
        operator_delete(pvVar2);
      }
    }
    else {
      lVar15 = ((long)__src - (long)pvVar2 >> 3) + 1;
      uVar5 = (ulong)(lVar15 - (lVar15 >> 0x3f)) >> 1;
      memmove(__src + -uVar5,__src,(long)puVar17 - (long)__src);
      puVar17 = puVar17 + -uVar5;
      param_1[1] = param_1[1] + uVar5 * -8;
      param_1[2] = puVar17;
    }
  }
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = *param_2;
    param_1[2] = puVar17 + 1;
    return;
  }
LAB_0094e590:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0094e5a8  FUN_0094e5a8 =====

void FUN_0094e5a8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *__src;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar17 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar17) {
    pvVar2 = (void *)*param_1;
    __src = (undefined8 *)param_1[1];
    if ((long)__src - (long)pvVar2 == 0) {
      uVar5 = (long)param_1[3] - (long)pvVar2 >> 2;
      if (puVar17 == __src) {
        uVar5 = 1;
      }
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar18 = uVar5 >> 2;
      pvVar4 = operator_new(uVar5 * 8);
      puVar6 = (undefined8 *)((long)pvVar4 + uVar18 * 8);
      lVar15 = (long)puVar17 - (long)__src;
      iVar16 = (int)puVar17;
      puVar7 = puVar6;
      if (lVar15 != 0) {
        uVar13 = lVar15 - 8U >> 3;
        uVar11 = uVar13;
        if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
          uVar11 = (ulong)-(long)puVar6 >> 3;
        }
        puVar7 = (undefined8 *)((long)puVar6 + lVar15);
        puVar8 = puVar6;
        puVar10 = __src;
        if (0x31 < uVar11) {
          if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
            uVar13 = (ulong)-(long)puVar6 >> 3;
          }
          if ((((((iVar16 - (int)__src | -(int)pvVar4) & 7U) == 0) && (puVar6 <= puVar6 + uVar13))
              && (__src <= __src + uVar13)) && (0x1f < (long)pvVar4 + (uVar18 * 8 - (long)__src))) {
            uVar1 = uVar11 + 1 & 3;
            puVar14 = (undefined8 *)((long)pvVar4 + uVar18 * 8 + 0x10);
            uVar18 = 4;
            if (uVar1 != 0) {
              uVar18 = uVar1;
            }
            puVar12 = __src + 2;
            lVar9 = (uVar11 + 1) - uVar18;
            lVar15 = ~uVar13 + uVar18;
            puVar8 = puVar6 + lVar9;
            puVar10 = __src + lVar9;
            do {
              puVar3 = puVar12 + -1;
              uVar19 = puVar12[-2];
              uVar21 = puVar12[1];
              uVar20 = *puVar12;
              lVar15 = lVar15 + 4;
              puVar12 = puVar12 + 4;
              puVar14[-1] = *puVar3;
              puVar14[-2] = uVar19;
              puVar14[1] = uVar21;
              *puVar14 = uVar20;
              puVar14 = puVar14 + 4;
            } while (lVar15 != 0);
          }
        }
        do {
          if (puVar8 == (undefined8 *)0x0) goto LAB_0094e818;
          puVar14 = puVar8 + 1;
          *puVar8 = *puVar10;
          puVar8 = puVar14;
          puVar10 = puVar10 + 1;
        } while (puVar14 != puVar7);
      }
      *param_1 = pvVar4;
      param_1[1] = puVar6;
      uVar11 = (ulong)((long)puVar17 + (-8 - ((long)puVar17 << 0x3d))) >> 3;
      uVar18 = (ulong)(((long)__src - (long)puVar17 << 0x3d) - ((long)__src - (long)puVar17)) >> 3;
      param_1[2] = puVar7;
      param_1[3] = (void *)((long)pvVar4 + uVar5 * 8);
      if (uVar11 <= uVar18) {
        uVar18 = uVar11;
      }
      puVar6 = puVar17;
      if ((1 < uVar18) && ((((int)__src - iVar16 | -iVar16) & 7U) == 0)) {
        uVar18 = uVar18 & 0x1ffffffffffffffe;
        puVar6 = puVar17 + -uVar18;
        do {
          uVar18 = uVar18 - 2;
        } while (uVar18 != 0);
      }
      while (puVar6 != __src) {
        puVar6 = puVar6 + -1;
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (__src != (undefined8 *)0x0) {
        operator_delete(pvVar2);
      }
    }
    else {
      lVar15 = ((long)__src - (long)pvVar2 >> 3) + 1;
      uVar5 = (ulong)(lVar15 - (lVar15 >> 0x3f)) >> 1;
      memmove(__src + -uVar5,__src,(long)puVar17 - (long)__src);
      puVar17 = puVar17 + -uVar5;
      param_1[1] = param_1[1] + uVar5 * -8;
      param_1[2] = puVar17;
    }
  }
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = *param_2;
    param_1[2] = puVar17 + 1;
    return;
  }
LAB_0094e818:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0094e830  FUN_0094e830 =====

void FUN_0094e830(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  size_t __n;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *__src;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar4 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (__src == puVar4) {
    puVar18 = (undefined8 *)param_1[2];
    lVar16 = param_1[3] - (long)puVar18;
    if (lVar16 == 0) {
      uVar7 = param_1[3] - (long)puVar4 >> 2;
      if (puVar18 == __src) {
        uVar7 = 1;
      }
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar19 = uVar7 + 3 >> 2;
      pvVar6 = operator_new(uVar7 * 8);
      puVar1 = (undefined8 *)((long)pvVar6 + uVar19 * 8);
      lVar16 = (long)puVar18 - (long)__src;
      iVar17 = (int)puVar18;
      puVar8 = puVar1;
      if (lVar16 != 0) {
        uVar14 = lVar16 - 8U >> 3;
        uVar12 = uVar14;
        if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
          uVar12 = (ulong)-(long)puVar1 >> 3;
        }
        puVar8 = (undefined8 *)((long)puVar1 + lVar16);
        puVar9 = puVar1;
        puVar11 = __src;
        if (0x31 < uVar12) {
          if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
            uVar14 = (ulong)-(long)puVar1 >> 3;
          }
          if ((((((iVar17 - (int)__src | -(int)pvVar6) & 7U) == 0) && (puVar1 <= puVar1 + uVar14))
              && (__src <= __src + uVar14)) && (0x1f < (long)pvVar6 + (uVar19 * 8 - (long)__src))) {
            uVar2 = uVar12 + 1 & 3;
            puVar15 = (undefined8 *)((long)pvVar6 + uVar19 * 8 + 0x10);
            uVar19 = 4;
            if (uVar2 != 0) {
              uVar19 = uVar2;
            }
            puVar13 = __src + 2;
            lVar10 = (uVar12 + 1) - uVar19;
            lVar16 = ~uVar14 + uVar19;
            puVar9 = puVar1 + lVar10;
            puVar11 = __src + lVar10;
            do {
              puVar5 = puVar13 + -1;
              uVar20 = puVar13[-2];
              uVar22 = puVar13[1];
              uVar21 = *puVar13;
              lVar16 = lVar16 + 4;
              puVar13 = puVar13 + 4;
              puVar15[-1] = *puVar5;
              puVar15[-2] = uVar20;
              puVar15[1] = uVar22;
              *puVar15 = uVar21;
              puVar15 = puVar15 + 4;
            } while (lVar16 != 0);
          }
        }
        do {
          if (puVar9 == (undefined8 *)0x0) goto LAB_0094eab4;
          puVar15 = puVar9 + 1;
          *puVar9 = *puVar11;
          puVar9 = puVar15;
          puVar11 = puVar11 + 1;
        } while (puVar15 != puVar8);
      }
      *param_1 = pvVar6;
      param_1[1] = puVar1;
      uVar12 = (ulong)((long)puVar18 + (-8 - ((long)puVar18 << 0x3d))) >> 3;
      uVar19 = (ulong)(((long)__src - (long)puVar18 << 0x3d) - ((long)__src - (long)puVar18)) >> 3;
      param_1[2] = puVar8;
      param_1[3] = (void *)((long)pvVar6 + uVar7 * 8);
      if (uVar12 <= uVar19) {
        uVar19 = uVar12;
      }
      if ((1 < uVar19) && ((((int)__src - iVar17 | -iVar17) & 7U) == 0)) {
        uVar19 = uVar19 & 0x1ffffffffffffffe;
        puVar18 = puVar18 + -uVar19;
        do {
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
      }
      while (puVar18 != __src) {
        puVar18 = puVar18 + -1;
        if (puVar18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      bVar3 = __src != (undefined8 *)0x0;
      __src = puVar1;
      if (bVar3) {
        operator_delete(puVar4);
        __src = (undefined8 *)param_1[1];
      }
    }
    else {
      __n = (long)puVar18 - (long)__src;
      lVar16 = (lVar16 >> 3) + 1;
      puVar18 = puVar18 + ((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
      memmove((void *)((long)puVar18 - __n),__src,__n);
      param_1[1] = (undefined8 *)((long)puVar18 - __n);
      param_1[2] = puVar18;
      __src = (undefined8 *)((long)puVar18 - __n);
    }
  }
  if (__src + -1 != (undefined8 *)0x0) {
    __src[-1] = *param_2;
    param_1[1] = param_1[1] + -8;
    return;
  }
LAB_0094eab4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0094eacc  FUN_0094eacc =====

void FUN_0094eacc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  size_t __n;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *__src;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar4 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (__src == puVar4) {
    puVar18 = (undefined8 *)param_1[2];
    lVar16 = param_1[3] - (long)puVar18;
    if (lVar16 == 0) {
      uVar7 = param_1[3] - (long)puVar4 >> 2;
      if (puVar18 == __src) {
        uVar7 = 1;
      }
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar19 = uVar7 + 3 >> 2;
      pvVar6 = operator_new(uVar7 * 8);
      puVar1 = (undefined8 *)((long)pvVar6 + uVar19 * 8);
      lVar16 = (long)puVar18 - (long)__src;
      iVar17 = (int)puVar18;
      puVar8 = puVar1;
      if (lVar16 != 0) {
        uVar14 = lVar16 - 8U >> 3;
        uVar12 = uVar14;
        if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
          uVar12 = (ulong)-(long)puVar1 >> 3;
        }
        puVar8 = (undefined8 *)((long)puVar1 + lVar16);
        puVar9 = puVar1;
        puVar11 = __src;
        if (0x31 < uVar12) {
          if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
            uVar14 = (ulong)-(long)puVar1 >> 3;
          }
          if ((((((iVar17 - (int)__src | -(int)pvVar6) & 7U) == 0) && (puVar1 <= puVar1 + uVar14))
              && (__src <= __src + uVar14)) && (0x1f < (long)pvVar6 + (uVar19 * 8 - (long)__src))) {
            uVar2 = uVar12 + 1 & 3;
            puVar15 = (undefined8 *)((long)pvVar6 + uVar19 * 8 + 0x10);
            uVar19 = 4;
            if (uVar2 != 0) {
              uVar19 = uVar2;
            }
            puVar13 = __src + 2;
            lVar10 = (uVar12 + 1) - uVar19;
            lVar16 = ~uVar14 + uVar19;
            puVar9 = puVar1 + lVar10;
            puVar11 = __src + lVar10;
            do {
              puVar5 = puVar13 + -1;
              uVar20 = puVar13[-2];
              uVar22 = puVar13[1];
              uVar21 = *puVar13;
              lVar16 = lVar16 + 4;
              puVar13 = puVar13 + 4;
              puVar15[-1] = *puVar5;
              puVar15[-2] = uVar20;
              puVar15[1] = uVar22;
              *puVar15 = uVar21;
              puVar15 = puVar15 + 4;
            } while (lVar16 != 0);
          }
        }
        do {
          if (puVar9 == (undefined8 *)0x0) goto LAB_0094ed50;
          puVar15 = puVar9 + 1;
          *puVar9 = *puVar11;
          puVar9 = puVar15;
          puVar11 = puVar11 + 1;
        } while (puVar15 != puVar8);
      }
      *param_1 = pvVar6;
      param_1[1] = puVar1;
      uVar12 = (ulong)((long)puVar18 + (-8 - ((long)puVar18 << 0x3d))) >> 3;
      uVar19 = (ulong)(((long)__src - (long)puVar18 << 0x3d) - ((long)__src - (long)puVar18)) >> 3;
      param_1[2] = puVar8;
      param_1[3] = (void *)((long)pvVar6 + uVar7 * 8);
      if (uVar12 <= uVar19) {
        uVar19 = uVar12;
      }
      if ((1 < uVar19) && ((((int)__src - iVar17 | -iVar17) & 7U) == 0)) {
        uVar19 = uVar19 & 0x1ffffffffffffffe;
        puVar18 = puVar18 + -uVar19;
        do {
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
      }
      while (puVar18 != __src) {
        puVar18 = puVar18 + -1;
        if (puVar18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      bVar3 = __src != (undefined8 *)0x0;
      __src = puVar1;
      if (bVar3) {
        operator_delete(puVar4);
        __src = (undefined8 *)param_1[1];
      }
    }
    else {
      __n = (long)puVar18 - (long)__src;
      lVar16 = (lVar16 >> 3) + 1;
      puVar18 = puVar18 + ((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
      memmove((void *)((long)puVar18 - __n),__src,__n);
      param_1[1] = (undefined8 *)((long)puVar18 - __n);
      param_1[2] = puVar18;
      __src = (undefined8 *)((long)puVar18 - __n);
    }
  }
  if (__src + -1 != (undefined8 *)0x0) {
    __src[-1] = *param_2;
    param_1[1] = param_1[1] + -8;
    return;
  }
LAB_0094ed50:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0094ed68  FUN_0094ed68 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0094ed68(long *param_1)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  char **local_58;
  char *local_50;
  char *pcStack_48;
  
  lVar4 = *param_1;
  if (((DAT_00d80578 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d80578), iVar2 != 0)) {
    DAT_00d80570 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d80578);
  }
  local_58 = (char **)0x0;
  pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d80570 != '\0') {
    FUN_0066d348(0x42,DAT_00d80570,"ProcessOnDelayedCadence",0,0,0,0,0,0);
    local_50 = DAT_00d80570;
    pcStack_48 = "ProcessOnDelayedCadence";
    local_58 = &local_50;
  }
  uStack_78 = _UNK_002286c8;
  local_80 = _DAT_002286c0;
  uStack_68 = _UNK_002286d8;
  uStack_70 = _DAT_002286d0;
  uStack_b8 = _UNK_00228688;
  local_c0 = _DAT_00228680;
  uStack_a8 = _UNK_00228698;
  uStack_b0 = _DAT_00228690;
  uStack_98 = _UNK_002286a8;
  local_a0 = _DAT_002286a0;
  uStack_88 = _UNK_002286b8;
  uStack_90 = _DAT_002286b0;
  uStack_f8 = _UNK_00228648;
  local_100 = _DAT_00228640;
  uStack_e8 = _UNK_00228658;
  uStack_f0 = _DAT_00228650;
  uStack_d8 = _UNK_00228668;
  local_e0 = _DAT_00228660;
  uStack_c8 = _UNK_00228678;
  uStack_d0 = _DAT_00228670;
  uStack_138 = _UNK_00228608;
  local_140 = _DAT_00228600;
  uStack_128 = _UNK_00228618;
  uStack_130 = _DAT_00228610;
  uStack_118 = _UNK_00228628;
  local_120 = _DAT_00228620;
  uStack_108 = _UNK_00228638;
  uStack_110 = _DAT_00228630;
  if (*(long *)(lVar4 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:1563: libc++ Hardening assertion !empty() failed: deque::front called on an empty deque\n"
              );
  }
  FUN_007bf070(&local_140,
               *(long *)(*(long *)(lVar4 + 0x40) + (*(ulong *)(lVar4 + 0x58) / 0x12) * 8) +
               (*(ulong *)(lVar4 + 0x58) % 0x12) * 0xe0);
  if (*(ulong *)(lVar4 + 0x60) < 2) {
    pbVar1 = *(byte **)(lVar4 + 0xa0);
    if (pbVar1 == *(byte **)(lVar4 + 0xa8)) {
      bVar3 = 0;
    }
    else {
      do {
        bVar3 = pbVar1[1] ^ 1 | *pbVar1;
        if (pbVar1 + 2 == *(byte **)(lVar4 + 0xa8)) break;
        pbVar1 = pbVar1 + 2;
      } while ((bVar3 & 1) != 0);
    }
    FUN_0094ef88(lVar4,*(undefined4 *)(lVar4 + 0x68),bVar3 & 1);
  }
  else {
    FUN_0094e05c(lVar4 + 0x38);
  }
  FUN_0094f140(lVar4,&local_140);
  FUN_007bf020(&local_140);
  if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
    FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 0094ef88  FUN_0094ef88 =====

void FUN_0094ef88(long param_1,undefined4 param_2,byte param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [16];
  long *local_60 [2];
  code *local_50;
  code *pcStack_48;
  undefined1 local_24 [3];
  undefined1 uStack_21;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
    if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/deque:1563: libc++ Hardening assertion !empty() failed: deque::front called on an empty deque\n"
                );
    }
    if (param_1 == -0x70) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    auVar5 = *(undefined1 (*) [16])
              (*(long *)(*(long *)(param_1 + 0x40) + (*(ulong *)(param_1 + 0x58) / 0x12) * 8) +
               (*(ulong *)(param_1 + 0x58) % 0x12) * 0xe0 + 0x18);
    *(undefined8 *)(param_1 + 0x80) = uVar1;
    *(undefined1 *)(param_1 + 0x98) = 1;
    auVar5 = NEON_ext(auVar5,auVar5,8,1);
    *(long *)(param_1 + 0x90) = auVar5._8_8_;
    *(long *)(param_1 + 0x88) = auVar5._0_8_;
  }
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(byte *)(param_1 + 0x78) = param_3 & 1;
  if ((param_3 & 1) == 0) {
    lVar4 = 0xc0;
    if (*(char *)(param_1 + 200) == '\0') {
      lVar4 = 0x30;
    }
    lVar2 = *(long *)(param_1 + 0x30);
    if (*(long *)(param_1 + 0x30) <= *(long *)(param_1 + lVar4)) {
      lVar2 = *(long *)(param_1 + lVar4);
    }
  }
  else {
    lVar2 = 1000000;
  }
  lVar4 = *(long *)(param_1 + 0xd8);
  plVar3 = *(long **)(param_1 + 8);
  if (lVar4 != 0) {
    FUN_00d0f740(1,lVar4);
  }
  local_60[0] = (long *)operator_new(0x30);
  *local_60[0] = lVar4;
  local_60[0][4] = (long)FUN_004473ec;
  local_60[0][5] = (long)FUN_0094f324;
  local_60[0][2] = param_1;
  *(undefined4 *)(local_60[0] + 3) = param_2;
  local_50 = FUN_005db390;
  pcStack_48 = FUN_005db348;
  local_24[0] = 1;
  (**(code **)(*plVar3 + 0x10))(plVar3,local_60,lVar2,local_24,&uStack_21);
  (*local_50)(0,local_60,local_60);
  return;
}


// ===== 0094f140  FUN_0094f140 =====

void FUN_0094f140(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char **local_58;
  char *local_50;
  char *pcStack_48;
  
  if (((DAT_00d80598 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d80598), iVar1 != 0)) {
    DAT_00d80590 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d80598);
  }
  local_58 = (char **)0x0;
  pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d80590 != '\0') {
    local_58 = &local_50;
    FUN_0066d348(0x42,DAT_00d80590,"SendFrameNow",0,0,0,0,0,0);
    local_50 = DAT_00d80590;
    pcStack_48 = "SendFrameNow";
  }
  lVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))
            (*(long **)(param_1 + 0x18),lVar2,0 < *(int *)(param_1 + 0xd0),param_2);
  if (*(int *)(param_1 + 0xd0) == 0) {
    iVar1 = **(int **)(param_1 + 0x28);
    if (0 < iVar1) {
      lVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
      lVar4 = 0x7fffffffffffffff;
      if ((lVar3 != 0x7fffffffffffffff) && (lVar2 != -0x8000000000000000)) {
        lVar4 = -0x8000000000000000;
        if (lVar2 != 0x7fffffffffffffff && lVar3 != -0x8000000000000000) {
          lVar4 = lVar3 - lVar2;
        }
      }
      lVar2 = 0xc0;
      if (*(char *)(param_1 + 200) == '\0') {
        lVar2 = 0x30;
      }
      lVar3 = *(long *)(param_1 + 0x30);
      if (*(long *)(param_1 + 0x30) <= *(long *)(param_1 + lVar2)) {
        lVar3 = *(long *)(param_1 + lVar2);
      }
      if (lVar3 < lVar4) {
        *(int *)(param_1 + 0xd0) = iVar1;
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
      }
    }
  }
  else {
    *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + -1;
  }
  if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
    FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 0094f324  FUN_0094f324 =====

void FUN_0094f324(long *param_1)

{
  byte *pbVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 local_68;
  undefined8 uStack_60;
  char **local_58;
  char *local_50;
  char *pcStack_48;
  
  lVar9 = *param_1;
  lVar2 = param_1[1];
  if (((DAT_00d80588 & 1) == 0) && (iVar3 = FUN_0054fdd4(&DAT_00d80588), iVar3 != 0)) {
    DAT_00d80580 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d80588);
  }
  local_58 = (char **)0x0;
  pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d80580 != '\0') {
    FUN_0066d348(0x42,DAT_00d80580,"ProcessRepeatedFrameOnDelayedCadence",0,0,0,0,0,0);
    local_50 = DAT_00d80580;
    pcStack_48 = "ProcessRepeatedFrameOnDelayedCadence";
    local_58 = &local_50;
  }
  if ((int)lVar2 == *(int *)(lVar9 + 0x68)) {
    if (*(long *)(lVar9 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/deque:1563: libc++ Hardening assertion !empty() failed: deque::front called on an empty deque\n"
                );
    }
    local_68 = 0;
    uStack_60 = 0;
    lVar10 = *(long *)(*(long *)(lVar9 + 0x40) + (*(ulong *)(lVar9 + 0x58) / 0x12) * 8) +
             (*(ulong *)(lVar9 + 0x58) % 0x12) * 0xe0;
    FUN_007beb50(&local_68);
    if (*(char *)(lVar10 + 0xb0) != '\x01') {
      if ((undefined8 *)(lVar10 + 0xa0) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(undefined1 *)(lVar10 + 0xb0) = 1;
    }
    *(undefined8 *)(lVar10 + 0xa8) = uStack_60;
    *(undefined8 *)(lVar10 + 0xa0) = local_68;
    lVar4 = (**(code **)(**(long **)(lVar9 + 0x10) + 0x10))();
    if ((*(byte *)(lVar9 + 0x98) & 1) == 0) {
LAB_0094f5d0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    uVar5 = 0x7fffffffffffffff;
    if ((lVar4 != 0x7fffffffffffffff) &&
       (lVar7 = *(long *)(lVar9 + 0x80), lVar7 != -0x8000000000000000)) {
      uVar5 = 0x8000000000000000;
      if (lVar7 != 0x7fffffffffffffff && lVar4 != -0x8000000000000000) {
        uVar5 = lVar4 - lVar7;
      }
    }
    if (0 < *(long *)(lVar10 + 0x20)) {
      *(ulong *)(lVar10 + 0x20) = *(long *)(lVar9 + 0x88) + uVar5;
    }
    if (*(long *)(lVar10 + 0x18) != 0) {
      if ((*(byte *)(lVar9 + 0x98) & 1) == 0) goto LAB_0094f5d0;
      if ((long)uVar5 < 0) {
        uVar8 = -(-uVar5 / 1000) - (ulong)(500 < -uVar5 % 1000);
      }
      else {
        uVar8 = uVar5 / 1000;
        if (499 < uVar5 % 1000) {
          uVar8 = uVar8 + 1;
        }
      }
      *(ulong *)(lVar10 + 0x18) = uVar8 + *(long *)(lVar9 + 0x90);
    }
    pbVar1 = *(byte **)(lVar9 + 0xa0);
    if (pbVar1 == *(byte **)(lVar9 + 0xa8)) {
      bVar6 = 0;
    }
    else {
      do {
        bVar6 = pbVar1[1] ^ 1 | *pbVar1;
        if (pbVar1 + 2 == *(byte **)(lVar9 + 0xa8)) break;
        pbVar1 = pbVar1 + 2;
      } while ((bVar6 & 1) != 0);
    }
    FUN_0094ef88(lVar9,(int)lVar2,bVar6 & 1);
    *(undefined1 *)(lVar10 + 0xd8) = 1;
    FUN_0094f140(lVar9,lVar10);
  }
  if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
    FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 0094f63c  FUN_0094f63c =====

void FUN_0094f63c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3e408;
  FUN_007de938(param_1 + 4);
  return;
}


// ===== 0094f650  FUN_0094f650 =====

void FUN_0094f650(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3e408;
  FUN_007de938(param_1 + 4);
  operator_delete(param_1);
  return;
}


// ===== 0094f68c  FUN_0094f68c =====

void FUN_0094f68c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0094f69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}


// ===== 0094f6a0  FUN_0094f6a0 =====

ulong FUN_0094f6a0(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    return (ulong)*(uint *)(param_1 + 8) | 0x100000000;
  }
  return 0;
}


// ===== 0094f6c4  FUN_0094f6c4 =====

void FUN_0094f6c4(long param_1,ulong param_2)

{
  ulong uVar1;
  char cVar2;
  undefined8 uVar3;
  char extraout_w1;
  ulong uVar4;
  
  uVar4 = param_2 / 1000;
  uVar1 = uVar4;
  if (499 < param_2 % 1000) {
    uVar1 = uVar4 + 1;
  }
  if ((param_2 & 0x8000000000000000) != 0) {
    uVar1 = -(-param_2 / 1000) - (ulong)(500 < -param_2 % 1000);
  }
  uVar3 = FUN_007df10c(param_1 + 0x20,uVar1);
  cVar2 = *(char *)(param_1 + 0x10);
  if (cVar2 == extraout_w1) {
    if (cVar2 != '\0') {
      *(undefined8 *)(param_1 + 8) = uVar3;
    }
  }
  else if (cVar2 == '\0') {
    if ((undefined8 *)(param_1 + 8) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(undefined8 *)(param_1 + 8) = uVar3;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  if (499 < param_2 % 1000) {
    uVar4 = uVar4 + 1;
  }
  if ((param_2 & 0x8000000000000000) != 0) {
    uVar4 = -(-param_2 / 1000) - (ulong)(500 < -param_2 % 1000);
  }
  FUN_007dec4c(param_1 + 0x20,1,uVar4);
  return;
}


// ===== 0094f7e4  FUN_0094f7e4 =====

void FUN_0094f7e4(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = (long *)*param_1;
  lVar6 = *plVar7;
  iVar1 = FUN_00d0f740(0xffffffff,lVar6 + 0x218);
  lVar5 = plVar7[1];
  (**(code **)(**(long **)(lVar6 + 0x1b0) + 0x10))
            (*(long **)(lVar6 + 0x1b0),lVar5,1 < iVar1,plVar7 + 2);
  lVar4 = plVar7[6];
  plVar3 = (long *)(lVar6 + 0x18);
  if (*(char *)(lVar6 + 0x20) == '\x01') {
    if (lVar4 <= *plVar3) {
      uVar2 = FUN_004249b0();
      if ((uVar2 & 1) == 0) {
        if ((*(byte *)(lVar6 + 0x20) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_005dc08c();
        }
        FUN_00623bb0(&DAT_002255e4,"../../video/frame_cadence_adapter.cc",0x1ed3,
                     "Incoming frame timestamp is not monotonically increasing"," current: ",
                     plVar7[6]," last: ",*plVar3);
      }
      lVar4 = plVar7[6];
      if (*(char *)(lVar6 + 0x20) != '\x01') goto LAB_0094f8c8;
    }
    *plVar3 = lVar4;
    lVar4 = *(long *)(lVar6 + 0x1b8);
  }
  else {
LAB_0094f8c8:
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(long *)(lVar6 + 0x18) = lVar4;
    *(undefined1 *)(lVar6 + 0x20) = 1;
    lVar4 = *(long *)(lVar6 + 0x1b8);
  }
  if (lVar4 == 0) {
    if ((*(byte *)(lVar6 + 0xa8) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../video/frame_cadence_adapter.cc",0x37e,"passthrough_adapter_",&DAT_001f5fa0
                  );
    }
    plVar3 = (long *)(lVar6 + 0x28);
  }
  else {
    plVar3 = *(long **)(lVar6 + 0x198);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../video/frame_cadence_adapter.cc",0x37b,"vsync_encode_adapter_",
                   &DAT_001f5fa0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0094f904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x20))(plVar3,lVar5);
  return;
}


// ===== 0094f960  FUN_0094f960 =====

void FUN_0094f960(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x94f9c8);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      FUN_007bf020((long)pvVar2 + 0x10);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 0094f9c8  FUN_0094f9c8 =====

void FUN_0094f9c8(long *param_1)

{
  int iVar1;
  long lVar2;
  char **local_48;
  char *local_40;
  char *pcStack_38;
  
  lVar2 = *param_1;
  if (*(char *)(lVar2 + 400) == '\x01') {
    if (((DAT_00d805b8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d805b8), iVar1 != 0)) {
      DAT_00d805b0 = (char *)FUN_0066d328("webrtc");
      FUN_0054ff1c(&DAT_00d805b8);
    }
    local_48 = (char **)0x0;
    pcStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    if (*DAT_00d805b0 != '\0') {
      local_48 = &local_40;
      FUN_0066d348(0x42,DAT_00d805b0,"OnDiscardedFrame",0,0,0,0,0,0);
      local_40 = DAT_00d805b0;
      pcStack_38 = "OnDiscardedFrame";
    }
    FUN_0094fae4(lVar2 + 0xb0);
    if ((local_48 != (char **)0x0) && (**local_48 != '\0')) {
      FUN_0066d348(0x45,*local_48,local_48[1],0,0,0,0,0,0);
    }
  }
  return;
}


// ===== 0094fae4  FUN_0094fae4 =====

void FUN_0094fae4(long param_1)

{
  void *pvVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined1 uStack_51;
  long local_50 [2];
  code *local_40;
  code *pcStack_38;
  void *local_18;
  
  uVar3 = FUN_00841d54(param_1 + 0xb8);
  if ((uVar3 & 1) == 0) {
    lVar5 = *(long *)(param_1 + 0x30);
    uVar6 = *(undefined8 *)(param_1 + 8);
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_0094fbdc;
    local_50[0] = param_1;
    uVar4 = FUN_00622394();
    FUN_00841954(&local_18,uVar6,lVar5 * 3,local_50,0,uVar4,&uStack_51);
    pvVar1 = local_18;
    pvVar7 = *(void **)(param_1 + 0xb8);
    local_18 = (void *)0x0;
    *(void **)(param_1 + 0xb8) = pvVar1;
    if (pvVar7 != (void *)0x0) {
      iVar2 = FUN_00d0f7a0(0xffffffff,pvVar7);
      if (iVar2 == 1) {
        operator_delete(pvVar7);
      }
      pvVar1 = local_18;
      if ((local_18 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,local_18), iVar2 == 1)) {
        operator_delete(pvVar1);
      }
    }
    (*local_40)(0,local_50,local_50);
  }
  return;
}


// ===== 0094fbdc  FUN_0094fbdc =====

undefined8 FUN_0094fbdc(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  plVar1 = *(long **)(lVar2 + 0x18);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  return *(undefined8 *)(lVar2 + 0x30);
}


// ===== 0094fc18  FUN_0094fc18 =====

void FUN_0094fc18(undefined8 *param_1)

{
  double *pdVar1;
  long lVar2;
  long *plVar3;
  byte bVar4;
  double dVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  plVar3 = (long *)*param_1;
  lVar2 = *plVar3;
  pdVar1 = (double *)(lVar2 + 0x1d0);
  if (*(char *)(lVar2 + 0x1f0) == '\x01') {
    if ((((*(char *)(lVar2 + 0x1e8) == '\x01') &&
         (dVar5 = *(double *)(lVar2 + 0x1e0), dVar5 != 0.0 && dVar5 < 0.0 == NAN(dVar5))) &&
        (*(char *)(lVar2 + 0x1d8) == '\x01')) && (*pdVar1 == 0.0)) {
      bVar4 = *(byte *)(lVar2 + 0x1a8);
    }
    else {
      bVar4 = 0;
    }
    lVar7 = plVar3[4];
    lVar6 = plVar3[3];
    dVar5 = (double)plVar3[1];
    *(long *)(lVar2 + 0x1d8) = plVar3[2];
    *pdVar1 = dVar5;
    *(long *)(lVar2 + 0x1e8) = lVar7;
    *(long *)(lVar2 + 0x1e0) = lVar6;
    FUN_0094fcc4(lVar2,bVar4 & 1);
    return;
  }
  if (pdVar1 != (double *)0x0) {
    lVar7 = plVar3[4];
    lVar6 = plVar3[3];
    lVar8 = plVar3[2];
    dVar5 = (double)plVar3[1];
    *(undefined1 *)(lVar2 + 0x1f0) = 1;
    *(long *)(lVar2 + 0x1d8) = lVar8;
    *pdVar1 = dVar5;
    *(long *)(lVar2 + 0x1e8) = lVar7;
    *(long *)(lVar2 + 0x1e0) = lVar6;
    FUN_0094fcc4(lVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0094fcc4  FUN_0094fcc4 =====

void FUN_0094fcc4(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  long *plVar12;
  double dVar13;
  undefined1 auVar14 [16];
  
  if ((((((char)param_1[0x3e] != '\x01') || ((char)param_1[0x3d] != '\x01')) ||
       (dVar13 = (double)param_1[0x3c], dVar13 == 0.0 || dVar13 < 0.0 != NAN(dVar13))) ||
      (((char)param_1[0x3b] != '\x01' || ((double)param_1[0x3a] != 0.0)))) ||
     ((char)param_1[0x35] != '\x01')) {
    if ((param_2 & 1) != 0) {
      if ((char)param_1[0x32] == '\x01') {
        FUN_0094d9b4(param_1 + 0x16);
        *(undefined1 *)(param_1 + 0x32) = 0;
      }
      uVar3 = FUN_00417e08();
      if ((uVar3 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../video/frame_cadence_adapter.cc",0x2059,
                     "Zero hertz mode disabled.");
      }
    }
    if (param_1[0x37] == 0) {
      if ((*(byte *)(param_1 + 0x15) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../video/frame_cadence_adapter.cc",0x3f1,"passthrough_adapter_",
                     &DAT_001f5fa0);
      }
      plVar12 = param_1 + 5;
    }
    else {
      plVar12 = (long *)param_1[0x33];
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../video/frame_cadence_adapter.cc",0x3ee,"vsync_encode_adapter_",
                     &DAT_001f5fa0);
      }
    }
LAB_0094ff88:
    param_1[0x36] = (long)plVar12;
    return;
  }
  uVar3 = (**(code **)(*param_1 + 0x38))(param_1);
  dVar13 = 4294967295.0;
  if ((uVar3 & 0x100000000) != 0) {
    dVar13 = (double)(uVar3 & 0xffffffff);
  }
  if ((*(byte *)(param_1 + 0x3e) & 1) != 0) {
    if ((((char)param_1[0x3d] != '\x01') || ((param_2 & 1) == 0)) ||
       ((double)param_1[0x3c] != dVar13)) {
      uVar3 = FUN_00417e08();
      if ((uVar3 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x3e) & 1) == 0) goto LAB_00950110;
        if ((*(byte *)(param_1 + 0x3d) & 1) == 0) goto LAB_0095010c;
        FUN_00623bb0(param_1[0x3c],&DAT_001f6471,"../../video/frame_cadence_adapter.cc",0x1ff1,
                     "Zero hertz mode enabled (max_fps=",&DAT_001ca519);
      }
      if ((*(byte *)(param_1 + 0x3e) & 1) == 0) goto LAB_00950110;
      if ((*(byte *)(param_1 + 0x3d) & 1) == 0) goto LAB_0095010c;
      if ((char)param_1[0x32] == '\x01') {
        FUN_0094d9b4(param_1 + 0x16);
        *(undefined1 *)(param_1 + 0x32) = 0;
      }
      if (param_1 == (long *)0xffffffffffffff50) {
LAB_00950124:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      param_1[0x1e] = 0;
      param_1[0x1d] = 0;
      param_1[0x16] = (long)&PTR_FUN_00d3e3d0;
      *(undefined1 *)(param_1 + 0x24) = 0;
      auVar14 = NEON_ext(*(undefined1 (*) [16])(param_1 + 1),*(undefined1 (*) [16])(param_1 + 1),8,1
                        );
      param_1[0x19] = param_1[0x39];
      *(undefined1 *)(param_1 + 0x29) = 0;
      *(undefined1 *)(param_1 + 0x2f) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      param_1[0x20] = 0;
      param_1[0x1f] = 0;
      param_1[0x22] = 0;
      param_1[0x21] = 0;
      *(undefined4 *)(param_1 + 0x23) = 0;
      *(undefined1 *)(param_1 + 0x2e) = 0;
      param_1[0x2d] = 0;
      param_1[0x2c] = 0;
      param_1[0x1a] = param_1[0x3c];
      param_1[0x18] = auVar14._8_8_;
      param_1[0x17] = auVar14._0_8_;
      param_1[0x2b] = 0;
      param_1[0x2a] = 0;
      param_1[0x1b] = (long)(param_1 + 0x43);
      param_1[0x1c] = (long)(1000000.0 / (double)param_1[0x3c]);
      FUN_007ebca0(param_1 + 0x31);
      FUN_0094fae4(param_1 + 0x16);
      *(undefined1 *)(param_1 + 0x32) = 1;
      FUN_00950160(param_1 + 0x16,param_1[0x3f],param_1[0x40]);
    }
    if ((*(byte *)(param_1 + 0x32) & 1) != 0) {
      if ((*(byte *)(param_1 + 0x35) & 1) != 0) {
        puVar11 = (undefined2 *)param_1[0x2a];
        puVar4 = (undefined2 *)param_1[0x2b];
        plVar12 = param_1 + 0x16;
        uVar7 = (ulong)((long)puVar4 + ((long)puVar4 << 0x3f) + -2) >> 1;
        uVar3 = (ulong)(((long)puVar11 - (long)puVar4 << 0x3f) - ((long)puVar11 - (long)puVar4)) >>
                1;
        if (uVar7 <= uVar3) {
          uVar3 = uVar7;
        }
        if ((1 < uVar3) && ((((int)puVar11 - (uint)puVar4 | (uint)puVar4) & 1) == 0)) {
          uVar3 = uVar3 & 0x7ffffffffffffffe;
          puVar4 = puVar4 + -uVar3;
          do {
            uVar3 = uVar3 - 2;
          } while (uVar3 != 0);
        }
        while (puVar4 != puVar11) {
          puVar4 = puVar4 + -1;
          if (puVar4 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        uVar3 = param_1[0x34];
        param_1[0x2b] = (long)puVar11;
        if (uVar3 != 0) {
          uVar7 = param_1[0x2c] - (long)puVar11;
          if ((ulong)((long)uVar7 >> 1) < uVar3) {
            if ((long)uVar3 < 0) {
              FUN_009502cc();
LAB_0095015c:
                    /* WARNING: Subroutine does not return */
              FUN_005d55a4();
            }
            uVar1 = uVar7;
            if (uVar7 <= uVar3) {
              uVar1 = uVar3;
            }
            if (0x7ffffffffffffffd < uVar7) {
              uVar1 = 0x7fffffffffffffff;
            }
            if ((long)uVar1 < 0) goto LAB_0095015c;
            puVar4 = (undefined2 *)operator_new(uVar1 * 2);
            uVar8 = uVar3 * 2 - 2 >> 1;
            uVar7 = (ulong)-(long)puVar4 >> 1;
            if (uVar8 <= (ulong)-(long)puVar4 >> 1) {
              uVar7 = uVar8;
            }
            puVar5 = puVar4;
            if ((0xf < uVar7) && (((ulong)puVar4 & 1) == 0)) {
              uVar8 = uVar7 + 1 & 0xf;
              uVar2 = 0x10;
              if (uVar8 != 0) {
                uVar2 = uVar8;
              }
              puVar10 = (undefined8 *)(puVar4 + 8);
              lVar9 = (uVar7 + 1) - uVar2;
              puVar5 = puVar4 + lVar9;
              do {
                lVar9 = lVar9 + -0x10;
                puVar10[-1] = 0x100010001000100;
                puVar10[-2] = 0x100010001000100;
                puVar10[1] = 0x100010001000100;
                *puVar10 = 0x100010001000100;
                puVar10 = puVar10 + 4;
              } while (lVar9 != 0);
            }
            do {
              if (puVar5 == (undefined2 *)0x0) goto LAB_00950124;
              puVar6 = puVar5 + 1;
              *puVar5 = 0x100;
              puVar5 = puVar6;
            } while (puVar6 != puVar4 + uVar3);
            param_1[0x2a] = (long)puVar4;
            param_1[0x2b] = (long)(puVar4 + uVar3);
            param_1[0x2c] = (long)(puVar4 + uVar1);
            if (puVar11 != (undefined2 *)0x0) {
              operator_delete(puVar11);
            }
          }
          else {
            puVar4 = puVar11;
            if (uVar3 * 2 != 0) {
              puVar4 = puVar11 + uVar3;
              uVar7 = uVar3 * 2 - 2 >> 1;
              uVar3 = (ulong)-(long)puVar11 >> 1;
              if (uVar7 <= (ulong)-(long)puVar11 >> 1) {
                uVar3 = uVar7;
              }
              if ((0xf < uVar3) && (((ulong)puVar11 & 1) == 0)) {
                uVar7 = uVar3 + 1 & 0xf;
                uVar1 = 0x10;
                if (uVar7 != 0) {
                  uVar1 = uVar7;
                }
                puVar10 = (undefined8 *)(puVar11 + 8);
                lVar9 = (uVar3 + 1) - uVar1;
                puVar11 = puVar11 + lVar9;
                do {
                  lVar9 = lVar9 + -0x10;
                  puVar10[-1] = 0x100010001000100;
                  puVar10[-2] = 0x100010001000100;
                  puVar10[1] = 0x100010001000100;
                  *puVar10 = 0x100010001000100;
                  puVar10 = puVar10 + 4;
                } while (lVar9 != 0);
              }
              do {
                if (puVar11 == (undefined2 *)0x0) goto LAB_00950124;
                puVar5 = puVar11 + 1;
                *puVar11 = 0x100;
                puVar11 = puVar5;
              } while (puVar5 != puVar4);
            }
            param_1[0x2b] = (long)puVar4;
          }
        }
        if ((*(byte *)(param_1 + 0x32) & 1) != 0) goto LAB_0094ff88;
      }
LAB_0095010c:
                    /* WARNING: Subroutine does not return */
      FUN_005dc08c();
    }
  }
LAB_00950110:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
            );
}


// ===== 00950160  FUN_00950160 =====

void FUN_00950160(long param_1,double param_2,byte param_3)

{
  int iVar1;
  double local_40;
  undefined1 local_34 [4];
  char *local_28;
  
  if (((DAT_00d805c8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d805c8), iVar1 != 0)) {
    DAT_00d805c0 = (char *)FUN_0066d328("disabled-by-default-webrtc");
    FUN_0054ff1c(&DAT_00d805c8);
  }
  if (*DAT_00d805c0 != '\0') {
    local_28 = "max_frame_rate";
    local_40 = param_2;
    if ((param_3 & 1) == 0) {
      local_40 = -1.0;
    }
    local_34[0] = 4;
    FUN_0066d348(0x49,DAT_00d805c0,"UpdateVideoSourceRestrictions",0,1,&local_28,local_34,&local_40,
                 0);
  }
  if ((param_3 & (param_2 != 0.0 && param_2 < 0.0 == NAN(param_2))) == 1) {
    if (*(char *)(param_1 + 200) == '\x01') {
      *(long *)(param_1 + 0xc0) = (long)(1000000.0 / param_2);
    }
    else {
      if ((long *)(param_1 + 0xc0) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(long *)(param_1 + 0xc0) = (long)(1000000.0 / param_2);
      *(undefined1 *)(param_1 + 200) = 1;
    }
  }
  else if (*(char *)(param_1 + 200) == '\x01') {
    *(undefined1 *)(param_1 + 200) = 0;
  }
  return;
}


// ===== 009502cc  FUN_009502cc =====

void FUN_009502cc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 009502e4  FUN_009502e4 =====

int FUN_009502e4(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar4 = (void *)param_1[0x1c];
  *param_1 = &PTR_FUN_00d3e440;
  if (pvVar4 != (void *)0x0) {
    pvVar2 = pvVar4;
    pvVar3 = (void *)param_1[0x1d];
    if (pvVar4 != (void *)param_1[0x1d]) {
      do {
        pvVar2 = (void *)((long)pvVar3 + -0xe8);
        if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_007bf020((long)pvVar3 + -0xe0);
        pvVar3 = pvVar2;
      } while (pvVar2 != pvVar4);
      pvVar2 = (void *)param_1[0x1c];
    }
    param_1[0x1d] = pvVar4;
    operator_delete(pvVar2);
  }
  FUN_007ebdcc(param_1[0x1a]);
  pvVar4 = (void *)param_1[0x1a];
  if ((pvVar4 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar4), iVar1 == 1)) {
    operator_delete(pvVar4);
  }
  FUN_007de938(param_1 + 0xb);
  pvVar4 = (void *)param_1[8];
  if ((pvVar4 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar4), iVar1 == 1)) {
    operator_delete(pvVar4);
  }
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 2));
  return iVar1;
}


// ===== 009503dc  FUN_009503dc =====

void FUN_009503dc(void *param_1)

{
  FUN_009502e4();
  operator_delete(param_1);
  return;
}


// ===== 0095040c  FUN_0095040c =====

void FUN_0095040c(long **param_1,long param_2,undefined1 param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *local_1a0 [2];
  code *local_190;
  code *pcStack_188;
  undefined1 uStack_171;
  long **local_170;
  long lStack_168;
  long *local_160;
  long **applStack_158 [28];
  long local_78;
  char **local_70;
  char *local_68;
  code *pcStack_60;
  code *pcStack_58;
  long *local_38;
  
  plVar5 = param_1[0x19];
  local_78 = param_2;
  plVar2 = (long *)FUN_005d6490();
  if (plVar2 == plVar5) {
    if (((DAT_00d805d8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d805d8), iVar1 != 0)) {
      DAT_00d805d0 = (char *)FUN_0066d328("webrtc");
      FUN_0054ff1c(&DAT_00d805d8);
    }
    local_70 = (char **)0x0;
    pcStack_60 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    local_68 = &DAT_aaaaaaaaaaaaaaaa;
    if (*DAT_00d805d0 != '\0') {
      FUN_0066d348(0x42,DAT_00d805d0,"VSyncEncodeAdapterMode::OnFrame",0,0,0,0,0,0);
      local_68 = DAT_00d805d0;
      pcStack_60 = (code *)0x1e5f2f;
      local_70 = &local_68;
    }
    local_170 = &local_38;
    local_160 = &local_78;
    applStack_158[0] = param_1 + 0x1c;
    local_38 = param_1[0x1d];
    lStack_168 = param_4;
    if (local_38 < param_1[0x1e]) {
      if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *local_38 = local_78;
      FUN_007bf070(local_38 + 1,param_4);
      local_38 = local_38 + 0x1d;
    }
    else {
      FUN_00950de4(&local_170);
    }
    param_1[0x1d] = local_38;
    lVar4 = (**(code **)(*param_1[0x18] + 0x18))();
    if (lVar4 < 0x84d1) {
      plVar5 = param_1[0x1a];
      plVar2 = param_1[0x18];
      if (plVar5 != (long *)0x0) {
        FUN_00d0f740(1,plVar5);
      }
      local_1a0[0] = (long *)operator_new(0x30);
      *local_1a0[0] = (long)plVar5;
      local_1a0[0][4] = (long)FUN_004473ec;
      local_1a0[0][5] = (long)FUN_00950fcc;
      local_1a0[0][2] = (long)param_1;
      local_190 = FUN_005db390;
      pcStack_188 = FUN_005db348;
      (**(code **)(*plVar2 + 0x10))(plVar2,local_1a0);
      (*local_190)(0,local_1a0,local_1a0);
    }
    else {
      FUN_00950870(param_1);
    }
    if ((local_70 != (char **)0x0) && (**local_70 != '\0')) {
      FUN_0066d348(0x45,*local_70,local_70[1],0,0,0,0,0,0);
    }
  }
  else {
    plVar2 = param_1[0x19];
    plVar5 = param_1[0x1a];
    if (plVar5 != (long *)0x0) {
      FUN_00d0f740(1,plVar5);
    }
    local_160 = (long *)(CONCAT71(local_160._1_7_,param_3) & 0xffffffffffffff01);
    local_170 = param_1;
    lStack_168 = param_2;
    FUN_007bf070(applStack_158,param_4);
    plVar3 = (long *)operator_new(0xf8);
    plVar3[1] = lStack_168;
    *plVar3 = (long)local_170;
    *(undefined1 *)(plVar3 + 2) = local_160._0_1_;
    FUN_007bf070(plVar3 + 3,applStack_158);
    local_70 = (char **)operator_new(0x30);
    *local_70 = (char *)plVar5;
    local_70[4] = (char *)FUN_00950d7c;
    local_70[5] = (char *)FUN_00950d5c;
    local_70[2] = (char *)plVar3;
    pcStack_60 = FUN_005db390;
    pcStack_58 = FUN_005db348;
    (**(code **)(*plVar2 + 8))(plVar2,&local_70,&local_38,&uStack_171);
    (*pcStack_60)(0,&local_70,&local_70);
    FUN_007bf020(applStack_158);
  }
  return;
}


// ===== 0095072c  FUN_0095072c =====

ulong FUN_0095072c(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    return (ulong)*(uint *)(param_1 + 0x48) | 0x100000000;
  }
  return 0;
}


// ===== 00950750  FUN_00950750 =====

void FUN_00950750(long param_1,ulong param_2)

{
  ulong uVar1;
  char cVar2;
  undefined8 uVar3;
  char extraout_w1;
  ulong uVar4;
  
  uVar4 = param_2 / 1000;
  uVar1 = uVar4;
  if (499 < param_2 % 1000) {
    uVar1 = uVar4 + 1;
  }
  if ((param_2 & 0x8000000000000000) != 0) {
    uVar1 = -(-param_2 / 1000) - (ulong)(500 < -param_2 % 1000);
  }
  uVar3 = FUN_007df10c(param_1 + 0x58,uVar1);
  cVar2 = *(char *)(param_1 + 0x50);
  if (cVar2 == extraout_w1) {
    if (cVar2 != '\0') {
      *(undefined8 *)(param_1 + 0x48) = uVar3;
    }
  }
  else if (cVar2 == '\0') {
    if ((undefined8 *)(param_1 + 0x48) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  if (499 < param_2 % 1000) {
    uVar4 = uVar4 + 1;
  }
  if ((param_2 & 0x8000000000000000) != 0) {
    uVar4 = -(-param_2 / 1000) - (ulong)(500 < -param_2 % 1000);
  }
  FUN_007dec4c(param_1 + 0x58,1,uVar4);
  return;
}


// ===== 00950870  FUN_00950870 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00950870(char *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  char **ppcVar7;
  long *plVar8;
  long *plVar9;
  char **ppcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined1 uStack_2e1;
  char *local_2e0;
  long lStack_2d8;
  undefined1 auStack_2d0 [224];
  long *local_1f0 [2];
  code *local_1e0;
  undefined8 uStack_1d8;
  long *local_1d0 [2];
  code *local_1c0;
  undefined8 uStack_1b8;
  ulong local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  char **local_c8;
  char *local_c0;
  char *pcStack_b8;
  char **local_b0;
  char *local_a8;
  char *pcStack_a0;
  undefined1 uStack_91;
  long *local_90 [2];
  code *local_80;
  code *pcStack_78;
  
  if (((DAT_00d805e8 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d805e8), iVar2 != 0)) {
    DAT_00d805e0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d805e8);
  }
  local_b0 = (char **)0x0;
  pcStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d805e0 != '\0') {
    FUN_0066d348(0x42,DAT_00d805e0,"VSyncEncodeAdapterMode::EncodeAllEnqueuedFrames",0,0,0,0,0,0);
    local_a8 = DAT_00d805e0;
    pcStack_a0 = "VSyncEncodeAdapterMode::EncodeAllEnqueuedFrames";
    local_b0 = &local_a8;
  }
  lVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  plVar9 = *(long **)(param_1 + 0xe0);
  plVar1 = *(long **)(param_1 + 0xe8);
  if (plVar9 != plVar1) {
    ppcVar7 = &local_c0;
    ppcVar10 = ppcVar7;
    uVar11 = _DAT_00228630;
    uVar12 = _UNK_00228638;
    uVar13 = _DAT_00228620;
    uVar14 = _UNK_00228628;
    uVar15 = _DAT_00228610;
    uVar16 = _UNK_00228618;
    uVar17 = _DAT_00228600;
    uVar18 = _UNK_00228608;
    uVar19 = _DAT_00228670;
    uVar20 = _UNK_00228678;
    uVar21 = _DAT_00228660;
    uVar22 = _UNK_00228668;
    uVar23 = _DAT_00228650;
    uVar24 = _UNK_00228658;
    uVar25 = _DAT_00228640;
    uVar26 = _UNK_00228648;
    uVar27 = _DAT_002286b0;
    uVar28 = _UNK_002286b8;
    uVar29 = _DAT_002286a0;
    uVar30 = _UNK_002286a8;
    uVar31 = _DAT_00228690;
    uVar32 = _UNK_00228698;
    uVar33 = _DAT_00228680;
    uVar34 = _UNK_00228688;
    uVar35 = _DAT_002286d0;
    uVar36 = _UNK_002286d8;
    uVar37 = _DAT_002286c0;
    uVar38 = _UNK_002286c8;
    do {
      if (((DAT_00d805f8 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d805f8), iVar2 != 0)) {
        DAT_00d805f0 = (char *)FUN_0066d328("webrtc");
        FUN_0054ff1c(&DAT_00d805f8);
      }
      local_c8 = (char **)0x0;
      ppcVar7[1] = &DAT_aaaaaaaaaaaaaaaa;
      *ppcVar7 = &DAT_aaaaaaaaaaaaaaaa;
      if (*DAT_00d805f0 != '\0') {
        uVar5 = 0x7fffffffffffffff;
        if (((lVar3 == 0x7fffffffffffffff) || (lVar6 = *plVar9, lVar6 == -0x8000000000000000)) ||
           ((uVar5 = 0x8000000000000000, lVar3 != -0x8000000000000000 &&
            ((lVar6 != 0x7fffffffffffffff && (uVar5 = lVar3 - lVar6, -1 < (long)uVar5)))))) {
          local_1b0 = uVar5 / 1000;
          if (499 < uVar5 % 1000) {
            local_1b0 = local_1b0 + 1;
          }
        }
        else {
          local_1b0 = -(-uVar5 / 1000) - (ulong)(500 < -uVar5 % 1000);
        }
        local_2e0 = "VSyncEncodeDelay";
        local_90[0] = (long *)CONCAT71(local_90[0]._1_7_,3);
        FUN_0066d348(0x42,DAT_00d805f0,"FrameCadenceAdapterImpl::EncodeAllEnqueuedFrames",0,1,
                     &local_2e0,local_90,&local_1b0,0,ppcVar10,uVar11,uVar12,uVar13,uVar14,uVar15,
                     uVar16,uVar17,uVar18,uVar19,uVar20,uVar21,uVar22,uVar23,uVar24,uVar25,uVar26,
                     uVar27,uVar28,uVar29,uVar30,uVar31,uVar32,uVar33,uVar34,uVar35,uVar36,uVar37,
                     uVar38);
        local_c0 = DAT_00d805f0;
        pcStack_b8 = "FrameCadenceAdapterImpl::EncodeAllEnqueuedFrames";
        local_c8 = ppcVar7;
      }
      local_1b0 = uVar17;
      uStack_1a8 = uVar18;
      uStack_1a0 = uVar15;
      uStack_198 = uVar16;
      local_190 = uVar13;
      uStack_188 = uVar14;
      uStack_180 = uVar11;
      uStack_178 = uVar12;
      local_170 = uVar25;
      uStack_168 = uVar26;
      uStack_160 = uVar23;
      uStack_158 = uVar24;
      local_150 = uVar21;
      uStack_148 = uVar22;
      uStack_140 = uVar19;
      uStack_138 = uVar20;
      local_130 = uVar33;
      uStack_128 = uVar34;
      uStack_120 = uVar31;
      uStack_118 = uVar32;
      local_110 = uVar29;
      uStack_108 = uVar30;
      uStack_100 = uVar27;
      uStack_f8 = uVar28;
      local_f0 = uVar37;
      uStack_e8 = uVar38;
      uStack_e0 = uVar35;
      uStack_d8 = uVar36;
      FUN_007bf070(&local_1b0,plVar9 + 1);
      pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x10));
      plVar8 = *(long **)(param_1 + 0x38);
      if (plVar8 != (long *)0x0) {
        lVar6 = *(long *)(param_1 + 0x40);
        ppcVar7 = ppcVar10;
        if (lVar6 != 0) {
          FUN_00d0f740(1,lVar6);
          ppcVar7 = ppcVar10;
        }
        local_2e0 = param_1;
        lStack_2d8 = lVar3;
        FUN_007bf070(auStack_2d0,&local_1b0);
        plVar4 = (long *)operator_new(0xf0);
        plVar4[1] = lStack_2d8;
        *plVar4 = (long)local_2e0;
        FUN_007bf070(plVar4 + 2,auStack_2d0);
        local_1e0 = FUN_00433984;
        uStack_1d8 = 0;
        local_1f0[0] = plVar4;
        local_1d0[0] = (long *)operator_new(0x30);
        *local_1d0[0] = lVar6;
        local_1d0[0][2] = (long)plVar4;
        local_1d0[0][4] = (long)FUN_0095104c;
        local_1d0[0][5] = (long)FUN_00950fd8;
        local_80 = FUN_005db390;
        pcStack_78 = FUN_005db348;
        local_1c0 = FUN_00433984;
        uStack_1b8 = 0;
        local_90[0] = local_1d0[0];
        (**(code **)(*plVar8 + 8))(plVar8,local_90,&uStack_91,&uStack_2e1);
        (*local_80)(0,local_90,local_90);
        (*local_1c0)(0,local_1d0,local_1d0);
        (*local_1e0)(0,local_1f0,local_1f0);
        FUN_007bf020(auStack_2d0);
        ppcVar10 = ppcVar7;
      }
      pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x10));
      FUN_007bf020(&local_1b0);
      if ((local_c8 != (char **)0x0) && (**local_c8 != '\0')) {
        FUN_0066d348(0x45,*local_c8,local_c8[1],0,0,0,0,0,0);
      }
      plVar9 = plVar9 + 0x1d;
    } while (plVar9 != plVar1);
    plVar9 = *(long **)(param_1 + 0xe0);
    plVar1 = *(long **)(param_1 + 0xe8);
  }
  while( true ) {
    if (plVar9 == plVar1) {
      *(long **)(param_1 + 0xe8) = plVar9;
      if ((local_b0 != (char **)0x0) && (**local_b0 != '\0')) {
        FUN_0066d348(0x45,*local_b0,local_b0[1],0,0,0,0,0,0);
      }
      return;
    }
    if (plVar1 + -0x1d == (long *)0x0) break;
    FUN_007bf020(plVar1 + -0x1c);
    plVar1 = plVar1 + -0x1d;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00950d5c  FUN_00950d5c =====

void FUN_00950d5c(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
                    /* WARNING: Could not recover jumptable at 0x00950d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x10))
            ((long *)*param_1,param_1[1],*(undefined1 *)(param_1 + 2),param_1 + 3);
  return;
}


// ===== 00950d7c  FUN_00950d7c =====

void FUN_00950d7c(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x950de4);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      FUN_007bf020((long)pvVar2 + 0x18);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00950de4  FUN_00950de4 =====

void FUN_00950de4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  plVar11 = (long *)param_1[3];
  puVar12 = (undefined8 *)(plVar11[1] - *plVar11);
  uVar6 = ((long)puVar12 >> 3) * 0x34f72c234f72c235 + 1;
  if (uVar6 < 0x11a7b9611a7b962) {
    uVar2 = param_1[1];
    puVar10 = (undefined8 *)param_1[2];
    lVar8 = plVar11[2] - *plVar11 >> 3;
    uVar9 = lVar8 * 0x69ee58469ee5846a;
    if (uVar9 < uVar6 || uVar9 - uVar6 == 0) {
      uVar9 = uVar6;
    }
    if (0x8d3dcb08d3dcaf < (ulong)(lVar8 * 0x34f72c234f72c235)) {
      uVar9 = 0x11a7b9611a7b961;
    }
    if (uVar9 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (0x11a7b9611a7b961 < uVar9) goto LAB_00950fb0;
      pvVar4 = operator_new(uVar9 * 0xe8);
      puVar12 = (undefined8 *)((long)pvVar4 + (long)puVar12);
    }
    if (puVar12 == (undefined8 *)0x0) {
LAB_00950f84:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *puVar12 = *puVar10;
    FUN_007bf070(puVar12 + 1,uVar2);
    puVar10 = (undefined8 *)*plVar11;
    puVar3 = (undefined8 *)plVar11[1];
    puVar1 = (undefined8 *)((long)puVar12 + ((long)puVar10 - (long)puVar3));
    puVar5 = puVar10;
    puVar7 = puVar1;
    if (puVar3 != puVar10) {
      do {
        if (puVar7 == (undefined8 *)0x0) goto LAB_00950f84;
        puVar13 = puVar5 + 0x1d;
        *puVar7 = *puVar5;
        FUN_007bf070(puVar7 + 1,puVar5 + 1);
        puVar5 = puVar13;
        puVar7 = puVar7 + 0x1d;
      } while (puVar13 != puVar3);
      do {
        if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_007bf020(puVar10 + 1);
        puVar10 = puVar10 + 0x1d;
      } while (puVar10 != puVar3);
      puVar10 = (undefined8 *)*plVar11;
    }
    *plVar11 = (long)puVar1;
    plVar11[1] = (long)(puVar12 + 0x1d);
    plVar11[2] = (long)((long)pvVar4 + uVar9 * 0xe8);
    if (puVar10 != (undefined8 *)0x0) {
      operator_delete(puVar10);
    }
    *(undefined8 **)*param_1 = puVar12 + 0x1d;
    return;
  }
  FUN_00950fb4();
LAB_00950fb0:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00950fb4  FUN_00950fb4 =====

void FUN_00950fb4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00950fcc  FUN_00950fcc =====

void FUN_00950fcc(undefined8 *param_1)

{
  FUN_00950870(*param_1);
  return;
}


// ===== 00950fd8  FUN_00950fd8 =====

ulong FUN_00950fd8(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  param_1 = (long *)*param_1;
  lVar3 = *param_1;
  pthread_mutex_lock((pthread_mutex_t *)(lVar3 + 0x10));
  lVar4 = *(long *)(lVar3 + 0x38);
  uVar1 = pthread_mutex_unlock((pthread_mutex_t *)(lVar3 + 0x10));
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00951034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(lVar3 + 0xb8) + 0x10))
                      (*(long **)(lVar3 + 0xb8),param_1[1],0,param_1 + 2);
    return uVar2;
  }
  return (ulong)uVar1;
}


// ===== 0095104c  FUN_0095104c =====

void FUN_0095104c(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x9510b4);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      FUN_007bf020((long)pvVar2 + 0x10);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 009510b4  FUN_009510b4 =====

undefined8 * FUN_009510b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  *puVar1 = &PTR_FUN_00d3e478;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 2) = 0;
  uVar2 = FUN_00951314(param_2,param_3,100000000,0);
  puVar1[3] = uVar2;
  return puVar1;
}


// ===== 00951128  FUN_00951128 =====

void FUN_00951128(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  
  pvVar2 = (void *)param_1[3];
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d3e478;
  if (pvVar2 != (void *)0x0) {
    FUN_009512d0(pvVar2);
    operator_delete(pvVar2);
  }
  plVar1 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00951188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 0095119c  FUN_0095119c =====

void FUN_0095119c(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  
  pvVar2 = (void *)param_1[3];
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d3e478;
  if (pvVar2 != (void *)0x0) {
    FUN_009512d0(pvVar2);
    operator_delete(pvVar2);
  }
  plVar1 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  operator_delete(param_1);
  return;
}


// ===== 0095120c  FUN_0095120c =====

void FUN_0095120c(long param_1,long param_2)

{
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x00951228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8));
  return;
}


// ===== 0095122c  FUN_0095122c =====

undefined4 FUN_0095122c(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x18))();
  FUN_009516bc(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined4 *)(param_1 + 0x10));
  return uVar1;
}


// ===== 00951280  FUN_00951280 =====

void FUN_00951280(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00951290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x28))();
  return;
}


// ===== 00951294  FUN_00951294 =====

void FUN_00951294(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009512a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x30))();
  return;
}


// ===== 009512a8  FUN_009512a8 =====

void FUN_009512a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009512b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x38))();
  return;
}


// ===== 009512bc  FUN_009512bc =====

void FUN_009512bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009512cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x40))();
  return;
}


// ===== 009512d0  FUN_009512d0 =====

void FUN_009512d0(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x48);
  if (*plVar1 != 0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_009513b4();
    }
    FUN_0065a730(plVar1);
  }
  FUN_0065a730(plVar1);
  return;
}


// ===== 00951314  FUN_00951314 =====

undefined4 *
FUN_00951314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined1 auStack_28 [8];
  
  puVar1 = (undefined4 *)operator_new(0x50);
  FUN_0065a69c(auStack_28,param_1,param_2,param_4);
  *puVar1 = 0;
  *(undefined8 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 4) = param_3;
  *(undefined8 *)(puVar1 + 6) = 0;
  puVar1[8] = 0;
  *(undefined8 *)(puVar1 + 10) = 0xffffffffffffffff;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  *(undefined8 *)(puVar1 + 0xe) = 0;
  *(undefined1 *)(puVar1 + 0x10) = 0;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  FUN_0065a6d0(puVar1 + 0x12,auStack_28);
  FUN_0065a730(auStack_28);
  return puVar1;
}


// ===== 009513b4  FUN_009513b4 =====

uint FUN_009513b4(int *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 local_58;
  undefined4 local_50;
  int local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_0065a7a0(param_1 + 0x12,0);
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/video_coding/utility/ivf_file_writer.cc",0x242,
                   "Unable to rewind ivf output file.");
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
    }
    goto LAB_0095154c;
  }
  iVar1 = *param_1;
  local_58 = DAT_001f56c8;
  if (iVar1 < 3) {
    if (iVar1 == 1) {
      local_50 = (undefined4)DAT_001f59d0;
    }
    else if (iVar1 == 2) {
      local_50 = (undefined4)DAT_001f5b08;
    }
    else {
LAB_009514b8:
      local_50 = 0x2a2a2a2a;
    }
  }
  else if (iVar1 == 3) {
    local_50 = (undefined4)DAT_001f5220;
  }
  else if (iVar1 == 4) {
    local_50 = (undefined4)DAT_001f54f0;
  }
  else {
    if (iVar1 != 5) goto LAB_009514b8;
    local_50 = (undefined4)DAT_001f5218;
  }
  local_4c = param_1[8];
  uStack_40 = (undefined4)*(undefined8 *)(param_1 + 6);
  local_44 = 1;
  uStack_48 = 1000;
  if ((char)param_1[0xc] == '\0') {
    uStack_48 = 90000;
  }
  local_3c = 0;
  uVar3 = FUN_0065a830(param_1 + 0x12,&local_58,0x20);
  if ((uVar3 & 1) == 0) {
    uVar4 = FUN_004249b0();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/video_coding/utility/ivf_file_writer.cc",1099,
                   "Unable to write IVF header for ivf output file.");
    }
  }
  else if (*(ulong *)(param_1 + 2) < 0x20) {
    param_1[2] = 0x20;
    param_1[3] = 0;
  }
LAB_0095154c:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0095157c  FUN_0095157c =====

uint FUN_0095157c(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined2 uVar6;
  char *local_88;
  undefined8 uStack_80;
  undefined1 *local_78;
  char *pcStack_70;
  char **local_68;
  undefined8 local_60;
  char **ppcStack_58;
  char *local_50;
  undefined8 *puStack_48;
  ulong local_40;
  char **ppcStack_38;
  undefined1 uStack_11;
  
  if ((*param_2 == 0) || (param_2[1] == 0)) {
    *(undefined2 *)(param_1 + 8) = 0x500;
    uVar6 = 0x2d0;
  }
  else {
    *(short *)(param_1 + 8) = (short)*param_2;
    uVar6 = (undefined2)param_2[1];
  }
  *(undefined2 *)((long)param_1 + 0x22) = uVar6;
  iVar2 = param_2[0x26];
  *param_1 = param_3;
  *(bool *)(param_1 + 0xc) = iVar2 == 0;
  uVar3 = FUN_009513b4(param_1);
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_007b8c54(*param_1);
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      local_88 = "../../modules/video_coding/utility/ivf_file_writer.cc";
      uStack_80 = 0x532;
      local_78 = &uStack_11;
      local_68 = &local_88;
      pcStack_70 = "Created IVF file for codec data of type ";
      ppcStack_58 = &pcStack_70;
      puStack_48 = &local_60;
      local_40 = (ulong)*(ushort *)(param_1 + 8);
      ppcStack_38 = &local_50;
      local_50 = " at resolution ";
      puVar1 = &DAT_001a8867;
      if (*(char *)(param_1 + 0xc) == '\0') {
        puVar1 = &DAT_001a9883;
      }
      local_60 = uVar4;
      FUN_00623bb0(&DAT_002286e6,"../../modules/video_coding/utility/ivf_file_writer.cc",0x532,
                   "Created IVF file for codec data of type ",uVar4," at resolution ",local_40,
                   &DAT_0019caaa,*(undefined2 *)((long)param_1 + 0x22),", using ",puVar1,
                   "kHz clock resolution.");
    }
  }
  return uVar3 & 1;
}


// ===== 009516bc  FUN_009516bc =====

ulong FUN_009516bc(long param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  if ((*(long *)(param_1 + 0x48) == 0) ||
     ((*(long *)(param_1 + 0x18) == 0 && (uVar4 = FUN_0095157c(param_1,param_2), (uVar4 & 1) == 0)))
     ) {
    uVar3 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x30) == '\x01') {
      uVar4 = *(ulong *)(param_2 + 0x10);
    }
    else {
      uVar3 = *(uint *)(param_2 + 0x98);
      uVar4 = (ulong)uVar3;
      if ((*(byte *)(param_1 + 0x44) & 1) != 0) {
        uVar1 = uVar3 - *(uint *)(param_1 + 0x40);
        bVar2 = *(uint *)(param_1 + 0x40) <= uVar3 && uVar1 != 0;
        if (uVar1 != 0x80000000) {
          bVar2 = uVar1 != 0xffffffff && (int)(uVar1 + 1) < 0 == SCARRY4(uVar1,1);
        }
        uVar4 = (ulong)uVar1;
        if (!bVar2) {
          uVar4 = (ulong)uVar1 | 0xffffffff00000000;
        }
        uVar4 = uVar4 + *(long *)(param_1 + 0x38);
      }
      *(uint *)(param_1 + 0x40) = uVar3;
      *(ulong *)(param_1 + 0x38) = uVar4;
      *(undefined1 *)(param_1 + 0x44) = 1;
    }
    if (((*(long *)(param_1 + 0x28) != -1) && ((long)uVar4 < *(long *)(param_1 + 0x28))) &&
       (uVar5 = FUN_004022fc(), (uVar5 & 1) == 0)) {
      FUN_00623bb0(&DAT_002255de,"../../modules/video_coding/utility/ivf_file_writer.cc",0x5da,
                   "Timestamp not increasing: ",*(undefined8 *)(param_1 + 0x28),&DAT_00199e3f,uVar4)
      ;
    }
    *(ulong *)(param_1 + 0x28) = uVar4;
    lVar7 = *(long *)(param_2 + 0xb8);
    if (*(long **)(param_2 + 0x88) == (long *)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = (**(code **)(**(long **)(param_2 + 0x88) + 0x20))();
    }
    uVar8 = (long)(int)lVar7 & (lVar7 << 0x1f) >> 0x3f;
    bVar2 = false;
    uVar5 = 0;
    do {
      while( true ) {
        auVar9 = FUN_007bcb18(param_2,uVar5 & 0xffffffff);
        lVar7 = auVar9._0_8_;
        if (((auVar9 & (undefined1  [16])0x1) != (undefined1  [16])0x0) && (lVar7 != 0)) break;
        uVar5 = uVar5 + 1;
        if (uVar8 < uVar5) {
          if (!bVar2) {
            uVar4 = FUN_009518a8(param_1,uVar4,lVar6,*(undefined8 *)(param_2 + 0x90));
            return uVar4;
          }
          uVar3 = 1;
          goto LAB_0095185c;
        }
      }
      uVar3 = FUN_009518a8(param_1,uVar4,lVar6,lVar7);
      if ((uVar3 & 1) == 0) break;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + lVar7;
      bVar2 = true;
    } while (uVar5 <= uVar8);
  }
LAB_0095185c:
  return (ulong)(uVar3 & 1);
}


// ===== 009518a8  FUN_009518a8 =====

void FUN_009518a8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 local_44;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(ulong *)(param_1 + 0x10) == 0) ||
     (param_4 + *(long *)(param_1 + 8) + 0xcU <= *(ulong *)(param_1 + 0x10))) {
    local_44 = (undefined4)param_4;
    local_40 = param_2;
    uVar2 = FUN_0065a830(param_1 + 0x48,&local_44,0xc);
    if (((uVar2 & 1) != 0) &&
       (uVar2 = FUN_0065a830(param_1 + 0x48,param_3,param_4), (uVar2 & 1) != 0)) {
      uVar3 = 1;
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
      *(long *)(param_1 + 8) = param_4 + *(long *)(param_1 + 8) + 0xc;
      goto LAB_009519d0;
    }
    uVar2 = FUN_004249b0();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/video_coding/utility/ivf_file_writer.cc",0x743,
                   "Unable to write frame to file.");
    }
  }
  else {
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6d4b,"../../modules/video_coding/utility/ivf_file_writer.cc",0x6ea,
                   "Closing IVF file due to reaching size limit: ",*(undefined8 *)(param_1 + 0x10),
                   " bytes.");
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_009513b4(param_1);
      }
      FUN_0065a730((long *)(param_1 + 0x48));
    }
  }
  uVar3 = 0;
LAB_009519d0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 009519fc  FUN_009519fc =====

void FUN_009519fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_00d3e4d8;
  param_1[1] = param_2;
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  FUN_007ebcec(param_1 + 4);
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}


// ===== 00951a44  FUN_00951a44 =====

void FUN_00951a44(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_00d3e4d8;
  FUN_007ebdcc(param_1[4]);
  pvVar2 = (void *)param_1[4];
  if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar2), iVar1 == 1)) {
    operator_delete(pvVar2);
    return;
  }
  return;
}


// ===== 00951ab0  FUN_00951ab0 =====

void FUN_00951ab0(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_00d3e4d8;
  FUN_007ebdcc(param_1[4]);
  pvVar2 = (void *)param_1[4];
  if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar2), iVar1 == 1)) {
    operator_delete(pvVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 00951b18  FUN_00951b18 =====

void FUN_00951b18(long param_1,undefined4 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  code *pcVar6;
  undefined1 uStack_c1;
  long local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long local_b0;
  long lStack_a8;
  undefined1 auStack_a0 [16];
  code *local_90;
  long lStack_88;
  long *local_80 [2];
  code *local_70;
  code *pcStack_68;
  undefined1 local_54 [4];
  
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  lVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  uVar4 = 0x7fffffffffffffff;
  if ((param_3 != 0x7fffffffffffffff) && (lVar2 != -0x8000000000000000)) {
    uVar4 = 0;
    if (lVar2 != 0x7fffffffffffffff && param_3 != -0x8000000000000000) {
      uVar4 = param_3 - lVar2 & (param_3 - lVar2 >> 0x3f ^ 0xffffffffffffffffU);
    }
  }
  lVar2 = *(long *)(param_1 + 0x20);
  plVar5 = *(long **)(param_1 + 0x10);
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2);
  }
  local_c0 = param_1;
  uStack_b8 = param_2;
  local_b0 = param_3;
  lStack_a8 = param_4;
  (**(code **)(param_5 + 0x10))(1,param_5,auStack_a0);
  lStack_88 = *(long *)(param_5 + 0x18);
  pcVar6 = *(code **)(param_5 + 0x10);
  *(code **)(param_5 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_5 + 0x18) = 0;
  local_90 = pcVar6;
  plVar3 = (long *)operator_new(0x40);
  plVar3[1] = CONCAT44(uStack_b4,uStack_b8);
  *plVar3 = local_c0;
  plVar3[3] = lStack_a8;
  plVar3[2] = local_b0;
  (*pcVar6)(1,auStack_a0,plVar3 + 4);
  lVar1 = lStack_88;
  pcVar6 = local_90;
  local_90 = FUN_00433984;
  lStack_88 = 0;
  plVar3[7] = lVar1;
  plVar3[6] = (long)pcVar6;
  local_80[0] = (long *)operator_new(0x30);
  *local_80[0] = lVar2;
  local_80[0][4] = (long)FUN_00951d90;
  local_80[0][5] = (long)FUN_00951d2c;
  local_80[0][2] = (long)plVar3;
  local_70 = FUN_005db390;
  pcStack_68 = FUN_005db348;
  local_54[0] = 1;
  (**(code **)(*plVar5 + 0x10))(plVar5,local_80,uVar4,local_54,&uStack_c1);
  (*local_70)(0,local_80,local_80);
  (*local_90)(0,auStack_a0,auStack_a0);
  return;
}


// ===== 00951cd0  FUN_00951cd0 =====

void FUN_00951cd0(long param_1)

{
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  return;
}


// ===== 00951ce8  FUN_00951ce8 =====

undefined8 FUN_00951ce8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 00951cf4  FUN_00951cf4 =====

void FUN_00951cf4(long *param_1)

{
  (**(code **)(*param_1 + 0x20))();
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}


// ===== 00951d2c  FUN_00951d2c =====

void FUN_00951d2c(long *param_1)

{
  long lVar1;
  long local_18;
  
  param_1 = (long *)*param_1;
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0x1c) == '\x01' && *(int *)(lVar1 + 0x18) == (int)param_1[1]) {
    *(undefined1 *)(lVar1 + 0x1c) = 0;
    local_18 = param_1[3];
    (*(code *)param_1[7])(param_1 + 4,(int)param_1[1],&local_18);
  }
  return;
}


// ===== 00951d90  FUN_00951d90 =====

void FUN_00951d90(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x951e04);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      (**(code **)((long)pvVar2 + 0x30))(0,(long)pvVar2 + 0x20,(long)pvVar2 + 0x20);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00951e04  FUN_00951e04 =====

void FUN_00951e04(undefined4 *param_1)

{
  void *__s;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined4 **)(param_1 + 2) = param_1 + 4;
  __s = operator_new__(4000);
  memset(__s,0,4000);
  *(void **)(param_1 + 8) = __s;
  *(undefined8 *)(param_1 + 10) = 0xffffffffffffffff;
  return;
}


// ===== 00951e5c  FUN_00951e5c =====

void FUN_00951e5c(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong extraout_x1;
  int *piVar3;
  uint local_24;
  
  if ((*(ulong *)(param_1 + 10) != (ulong)param_2) &&
     (local_24 = param_2, FUN_0089740c(0,param_1 + 2,param_1 + 2,&local_24), (extraout_x1 & 1) != 0)
     ) {
    uVar2 = *param_1 % 1000;
    if (999 < *param_1) {
      piVar3 = *(int **)(param_1 + 4);
      if (piVar3 != (int *)0x0) {
        uVar1 = *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar2 * 4);
        do {
          while ((uint)piVar3[7] <= uVar1) {
            if (uVar1 == piVar3[7]) {
              if (piVar3 != param_1 + 4) {
                FUN_00951f40(param_1 + 2);
              }
              goto LAB_00951f10;
            }
            piVar3 = *(int **)(piVar3 + 2);
            if (piVar3 == (int *)0x0) goto LAB_00951f10;
          }
          piVar3 = *(int **)piVar3;
        } while (piVar3 != (int *)0x0);
      }
    }
LAB_00951f10:
    *(uint *)(*(long *)(param_1 + 8) + (long)(int)uVar2 * 4) = local_24;
    *(ulong *)(param_1 + 10) = (ulong)local_24;
    *param_1 = *param_1 + 1;
  }
  return;
}


// ===== 00951f40  FUN_00951f40 =====

undefined8 * FUN_00951f40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)param_2[1];
  puVar3 = param_2;
  if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
    do {
      puVar4 = (undefined8 *)puVar3[2];
      bVar2 = puVar3 != (undefined8 *)*puVar4;
      puVar3 = puVar4;
    } while (bVar2);
  }
  else {
    do {
      puVar4 = puVar1;
      puVar1 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
  if ((undefined8 *)*param_1 == param_2) {
    *param_1 = puVar4;
  }
  param_1[2] = param_1[2] + -1;
  FUN_005d5d48(param_1[1],param_2);
  if (param_2 == (undefined8 *)0xffffffffffffffe4) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  operator_delete(param_2);
  return puVar4;
}


// ===== 00951fe8  FUN_00951fe8 =====

void FUN_00951fe8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 ****param_7,ulong param_8,
                 undefined8 param_9,long *param_10)

{
  ulong uVar1;
  long lVar2;
  undefined8 ****ppppuVar3;
  undefined *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 ***local_98;
  ulong uStack_90;
  byte bStack_81;
  undefined8 *local_80;
  undefined8 *local_78 [2];
  code *local_68;
  undefined **local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  *param_1 = &PTR_FUN_00d3e518;
  param_1[1] = param_10;
  param_1[2] = param_2;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_4;
  param_1[6] = param_9;
  FUN_00953c48(param_1 + 7,param_2,param_10);
  FUN_00955c5c(param_1 + 0x67);
  *(undefined1 *)(param_1 + 0x6c) = 0;
  pvVar5 = operator_new(0xb8);
  FUN_00956d00(pvVar5,800,0x2000,param_10);
  param_1[0x6d] = pvVar5;
  FUN_00955de4(param_1 + 0x6e,param_1[2],param_1[5]);
  uVar6 = param_1[2];
  local_68 = FUN_009535b4;
  local_60 = &PTR_FUN_00d3e528;
  local_98 = param_7;
  uStack_90 = param_8;
  local_78[0] = (undefined8 *)operator_new(0x18);
  local_78[0][2] = param_1;
  *local_78[0] = FUN_009521c4;
  local_78[0][1] = 0;
  FUN_00956890(param_1 + 0x70,uVar6,param_3,&local_98,local_78);
  if ((code *)local_60[1] != (code *)0x0) {
    (*(code *)local_60[1])(local_78[0]);
  }
  *(undefined1 *)(param_1 + 0x7d) = 0;
  param_1[0x7c] = 0;
  FUN_00661054(param_1 + 0x7e,"max_decode_queue_size",0x15);
  puVar4 = PTR_DAT_00d52098;
  *(undefined4 *)((long)param_1 + 0x42c) = 8;
  param_1[0x7e] = puVar4 + 0x10;
  FUN_007ebca0(param_1 + 0x86);
  local_80 = param_1 + 0x7e;
  (**(code **)(*param_10 + 0x10))(&local_98,param_10,"WebRTC-ZeroPlayoutDelay",0x17);
  uVar1 = uStack_90;
  ppppuVar3 = (undefined8 ****)local_98;
  if (-1 < (char)bStack_81) {
    uVar1 = (ulong)bStack_81;
    ppppuVar3 = &local_98;
  }
  FUN_00661cc0(&local_80,1,ppppuVar3,uVar1);
  if ((char)bStack_81 < '\0') {
    operator_delete(local_98);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 009521c4  FUN_009521c4 =====

void FUN_009521c4(long param_1,undefined8 param_2)

{
  FUN_00956afc(param_1 + 0x380);
  if (*(char *)(param_1 + 1000) == '\x01') {
    *(undefined1 *)(param_1 + 1000) = 0;
                    /* WARNING: Could not recover jumptable at 0x00952210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x20) + 0x18))(*(long **)(param_1 + 0x20),param_2);
    return;
  }
  return;
}


// ===== 00952224  FUN_00952224 =====

void FUN_00952224(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x30) + 0x28))();
  FUN_00956afc(param_1 + 0x380);
  *(undefined1 *)(param_1 + 1000) = 0;
  return;
}


// ===== 00952264  FUN_00952264 =====

void FUN_00952264(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3e4) = param_2;
  return;
}


// ===== 00952270  FUN_00952270 =====

void FUN_00952270(long param_1,long *param_2)

{
  long *****ppppplVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  long ****local_78;
  ulong local_70;
  byte bStack_61;
  
  lVar10 = param_2[0x13];
  bVar2 = *(byte *)(param_2 + 0x37);
  lVar11 = param_2[0x31];
  lVar3 = param_2[5];
  uVar8 = (**(code **)(*param_2 + 0x20))(param_2);
  lVar4 = param_2[0x14];
  auVar12 = FUN_008500e4(param_2);
  iVar6 = FUN_00957c5c(*(undefined8 *)(param_1 + 0x368));
  uVar9 = FUN_00956e0c(*(undefined8 *)(param_1 + 0x368),param_2);
  if ((uVar9 & 1) != 0) {
    if (((uVar8 & 1) == 0) && ((auVar12 & (undefined1  [16])0x1) != (undefined1  [16])0x0)) {
      (**(code **)(**(long **)(param_1 + 8) + 0x10))
                (&local_78,*(long **)(param_1 + 8),"WebRTC-IncomingTimestampOnMarkerBitOnly",0x27);
      if (-1 < (char)bStack_61) {
        local_70 = (ulong)bStack_61;
      }
      if (local_70 < 8) {
        bVar5 = false;
      }
      else {
        ppppplVar1 = (long *****)local_78;
        if (-1 < (char)bStack_61) {
          ppppplVar1 = &local_78;
        }
        bVar5 = *ppppplVar1 == (long ****)0x64656c6261736944;
      }
      if ((char)bStack_61 < '\0') {
        operator_delete(local_78);
      }
      if (bVar5 || (bVar2 & 1) != 0) {
        (**(code **)(**(long **)(param_1 + 0x28) + 0x10))
                  (*(long **)(param_1 + 0x28),(int)lVar4,auVar12._0_8_);
      }
    }
    iVar7 = FUN_00957c5c(*(undefined8 *)(param_1 + 0x368));
    if (iVar6 < iVar7) {
      (**(code **)(**(long **)(param_1 + 0x18) + 0x10))
                (*(long **)(param_1 + 0x18),lVar11 == 0,lVar10,(char)lVar3);
      FUN_00952410(param_1);
    }
  }
  FUN_00957c38(*(undefined8 *)(param_1 + 0x368));
  return;
}


// ===== 00952410  FUN_00952410 =====

void FUN_00952410(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined8 *local_80;
  undefined8 uStack_78;
  code *local_70;
  code *pcStack_68;
  undefined8 local_58;
  undefined8 uStack_50;
  byte local_48;
  
  auVar5 = FUN_00957c48(*(undefined8 *)(param_1 + 0x368));
  uVar3 = auVar5._0_8_;
  if ((*(char *)(param_1 + 1000) == '\x01') &&
     ((auVar5 & (undefined1  [16])0x1) != (undefined1  [16])0x0)) {
    if (*(char *)(param_1 + 0x360) == '\x01') {
      FUN_009531dc(param_1);
      return;
    }
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
    if (((uVar1 >> 0x20 & 1) == 0) || ((int)uVar1 != auVar5._0_4_)) {
      lVar2 = FUN_00956958(param_1 + 0x380);
      if ((lVar2 == -0x8000000000000000) ||
         ((lVar2 != 0x7fffffffffffffff && (lVar2 = lVar2 + -1000, lVar2 < 0)))) {
        lVar2 = 0;
      }
      do {
        uVar1 = FUN_00957c74(*(undefined8 *)(param_1 + 0x368));
        FUN_00955df0(&local_58,param_1 + 0x370,uVar3 & 0xffffffff,uVar3 >> 0x20,lVar2,
                     *(uint *)(param_1 + 0x42c) < uVar1);
        if ((local_48 & 1) != 0) {
          uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
          if (((uVar1 >> 0x20 & 1) != 0) && ((int)uVar1 == (int)uVar3)) {
            return;
          }
          (**(code **)(**(long **)(param_1 + 0x30) + 0x20))();
          plVar4 = *(long **)(param_1 + 0x30);
          local_80 = (undefined8 *)operator_new(0x18);
          *local_80 = FUN_00952f98;
          local_80[1] = 0;
          local_80[2] = param_1;
          uStack_78 = 0x18;
          local_70 = FUN_005ea56c;
          pcStack_68 = FUN_009536ec;
          (**(code **)(*plVar4 + 0x18))(plVar4,uVar3 & 0xffffffff,local_58,uStack_50,&local_80);
          (*local_70)(0,&local_80,&local_80);
          return;
        }
        FUN_00957aa8(*(undefined8 *)(param_1 + 0x368));
        auVar5 = FUN_00957c48(*(undefined8 *)(param_1 + 0x368));
        uVar3 = auVar5._0_8_;
      } while ((auVar5 & (undefined1  [16])0x1) != (undefined1  [16])0x0);
    }
  }
  return;
}


// ===== 009525d0  FUN_009525d0 =====

void FUN_009525d0(long param_1,long param_2)

{
  FUN_00954a40(param_1 + 0x38,param_2 * 1000);
  return;
}


// ===== 009525e4  FUN_009525e4 =====

void FUN_009525e4(long param_1)

{
  FUN_00956c14(param_1 + 0x380);
  return;
}


// ===== 009525f0  FUN_009525f0 =====

void FUN_009525f0(long param_1,byte param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0095694c(param_1 + 0x380);
  if ((uVar1 & 1) == 0) {
    FUN_009569c4(param_1 + 0x380,param_2 & 1);
  }
  *(byte *)(param_1 + 0x360) = param_2 & 1;
  if ((param_2 & 1) != 0) {
    FUN_00956b08(param_1 + 0x380);
  }
  *(undefined1 *)(param_1 + 1000) = 1;
  FUN_00952410(param_1);
  return;
}


// ===== 00952658  FUN_00952658 =====

void FUN_00952658(long param_1)

{
  FUN_00957c74(*(undefined8 *)(param_1 + 0x368));
  return;
}


// ===== 00952678  FUN_00952678 =====

void FUN_00952678(long param_1,ulong *param_2,ulong param_3)

{
  long lVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong *puVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined1 auVar25 [16];
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  ulong local_98 [7];
  
  lVar1 = tpidr_el0;
  local_98[5] = *(long *)(lVar1 + 0x28);
  if (*param_2 < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../video/video_stream_buffer_controller.cc",0xd4,"!frames.empty()",
                 &DAT_001fbee0,"Callers must ensure there is at least one frame to decode.");
  }
  FUN_00956b98(param_1 + 0x380);
  uVar6 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  if (*param_2 < 2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x952b7c);
    (*pcVar2)();
  }
  puVar12 = param_2 + 1;
  if ((*param_2 & 1) != 0) {
    puVar12 = (ulong *)param_2[1];
  }
  uVar19 = *puVar12;
  lVar7 = FUN_00952ba8(uVar19);
  auVar25 = FUN_008500e4(uVar19);
  lVar11 = auVar25._0_8_;
  if ((auVar25 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
LAB_00952b50:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
              );
  }
  if (*(long *)(uVar19 + 0x188) == 0) {
    *(undefined1 *)(param_1 + 0x360) = 0;
  }
  uVar8 = FUN_009562dc(param_3,uVar6);
  if ((uVar8 & 1) == 0) {
    FUN_009479ac(*(undefined8 *)(param_1 + 0x28));
    uVar8 = FUN_009563e8();
    if ((uVar8 & 1) != 0) goto LAB_00952744;
  }
  else {
LAB_00952744:
    uVar8 = FUN_004022fc();
    if ((uVar8 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6220,"../../video/video_stream_buffer_controller.cc",0x732,
                   "Resetting jitter estimator and timing module due to bad render timing for rtp_timestamp="
                   ,*(undefined4 *)(uVar19 + 0xa0));
    }
    FUN_00954014(param_1 + 0x38);
    FUN_009470ac(*(undefined8 *)(param_1 + 0x28));
    param_3 = (**(code **)(**(long **)(param_1 + 0x28) + 0x18))
                        (*(long **)(param_1 + 0x28),*(undefined4 *)(uVar19 + 0xa0),uVar6);
  }
  if ((*param_2 & 1) == 0) {
    puVar12 = param_2 + 1;
  }
  else {
    puVar12 = (ulong *)param_2[1];
  }
  uVar8 = *param_2 & 0x3ffffffffffffffe;
  lVar17 = uVar8 << 2;
  if (uVar8 == 0) {
    lVar21 = 0;
LAB_00952900:
    auVar25 = FUN_00955c78(param_1 + 0x338,*(undefined4 *)(uVar19 + 0xa0),lVar11);
    if ((auVar25 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      FUN_00954388(param_1 + 0x38,auVar25._0_8_,lVar21);
    }
    uVar22 = *(undefined8 *)(param_1 + 0x28);
    uVar9 = FUN_00954d24(DAT_001f59c8,param_1 + 0x38,200000,1);
    FUN_009473b8(uVar22,uVar9);
    FUN_00947408(*(undefined8 *)(param_1 + 0x28),param_3,uVar6);
  }
  else {
    uVar18 = 0;
    lVar20 = 0;
    uVar8 = param_3 / 1000;
    if (499 < param_3 % 1000) {
      uVar8 = uVar8 + 1;
    }
    lVar10 = lVar7;
    uVar13 = -(-param_3 / 1000) - (ulong)(500 < -param_3 % 1000);
    if (-1 < (long)param_3) {
      uVar13 = uVar8;
    }
    do {
      *(ulong *)(*puVar12 + 0x1c0) = uVar13;
      uVar3 = (**(code **)(*(long *)*puVar12 + 0x20))();
      lVar7 = FUN_00952ba8(*puVar12);
      if (lVar10 <= lVar7) {
        lVar7 = lVar10;
      }
      auVar25 = FUN_008500e4(*puVar12);
      if ((auVar25 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto LAB_00952b50;
      if (lVar11 <= auVar25._0_8_) {
        lVar11 = auVar25._0_8_;
      }
      lVar21 = 0x7fffffffffffffff;
      if ((lVar20 != 0x7fffffffffffffff) &&
         (lVar10 = *(long *)(*puVar12 + 0x98), lVar10 != 0x7fffffffffffffff)) {
        lVar21 = -0x8000000000000000;
        if (lVar10 != -0x8000000000000000 && lVar20 != -0x8000000000000000) {
          lVar21 = lVar10 + lVar20;
        }
      }
      lVar17 = lVar17 + -8;
      uVar18 = uVar18 | uVar3;
      puVar12 = puVar12 + 1;
      lVar10 = lVar7;
      lVar20 = lVar21;
    } while (lVar17 != 0);
    if ((uVar18 & 1) == 0) goto LAB_00952900;
    FUN_009549f4(param_1 + 0x38);
  }
  iVar4 = FUN_00957c68(*(undefined8 *)(param_1 + 0x368));
  if (0 < iVar4 - *(int *)(param_1 + 0x3e0)) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  }
  uVar5 = FUN_00957c68(*(undefined8 *)(param_1 + 0x368));
  *(undefined4 *)(param_1 + 0x3e0) = uVar5;
  FUN_00952cfc(param_1,lVar7,uVar6);
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00947c9c(&local_110,*(undefined8 *)(param_1 + 0x28));
  if (((ulong)local_a0 & 1) != 0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))(*(long **)(param_1 + 0x18),&local_110);
  }
  uVar19 = *param_2;
  local_98[0] = 0;
  if ((uVar19 & 1) != 0) {
    local_98[1] = param_2[1];
    local_98[2] = param_2[2];
    *param_2 = 0;
    goto LAB_00952adc;
  }
  if (uVar19 == 0) goto LAB_00952adc;
  uVar13 = ((ulong)local_98 ^ 0xfffffffffffffff8) >> 3;
  uVar14 = (uVar19 >> 1) - 1;
  uVar8 = uVar13;
  if (uVar14 <= uVar13) {
    uVar8 = uVar14;
  }
  if (uVar8 < 10) {
LAB_00952a38:
    lVar7 = 0;
    puVar12 = param_2;
  }
  else {
    uVar23 = uVar13;
    if (uVar14 <= uVar13) {
      uVar23 = uVar14;
    }
    if (param_2 + 1 + uVar23 < param_2 + 1) goto LAB_00952a38;
    uVar14 = uVar8 + 1 & 3;
    uVar23 = 4;
    if (uVar14 != 0) {
      uVar23 = uVar14;
    }
    puVar15 = param_2 + 3;
    puVar16 = local_98 + 3;
    lVar7 = (uVar8 + 1) - uVar23;
    puVar12 = param_2 + lVar7;
    lVar11 = lVar7;
    do {
      uVar14 = puVar15[-1];
      uVar8 = puVar15[-2];
      uVar24 = puVar15[1];
      uVar23 = *puVar15;
      lVar11 = lVar11 + -4;
      puVar15[-1] = 0;
      puVar15[-2] = 0;
      puVar15[1] = 0;
      *puVar15 = 0;
      puVar15 = puVar15 + 4;
      puVar16[-1] = uVar14;
      puVar16[-2] = uVar8;
      puVar16[1] = uVar24;
      *puVar16 = uVar23;
      puVar16 = puVar16 + 4;
    } while (lVar11 != 0);
  }
  puVar15 = local_98 + lVar7;
  lVar11 = (uVar19 >> 1) - lVar7;
  lVar7 = uVar13 - lVar7;
  do {
    puVar15 = puVar15 + 1;
    puVar12 = puVar12 + 1;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar19 = *puVar12;
    lVar11 = lVar11 + -1;
    lVar7 = lVar7 + -1;
    *puVar12 = 0;
    *puVar15 = uVar19;
  } while (lVar11 != 0);
  uVar19 = *param_2 & 0xfffffffffffffffe;
LAB_00952adc:
  local_98[0] = uVar19;
  uVar9 = FUN_00956494(local_98);
  if (local_98[0] != 0) {
    FUN_0095362c(local_98);
  }
  FUN_00947820(*(undefined8 *)(param_1 + 0x28),uVar6);
  *(undefined1 *)(param_1 + 1000) = 0;
  (**(code **)(**(long **)(param_1 + 0x20) + 0x10))(*(long **)(param_1 + 0x20),uVar9);
  if (*(long *)(lVar1 + 0x28) == local_98[5]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00952ba8  FUN_00952ba8 =====

void FUN_00952ba8(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0x138);
  if (lVar5 == 0) {
    if (((DAT_00d60290 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d60290), iVar2 != 0)) {
      DAT_00d60288 = (long *)operator_new(0x18);
      DAT_00d60288[1] = 0;
      DAT_00d60288[2] = 0;
      *DAT_00d60288 = 0;
      FUN_0054ff1c(&DAT_00d60290);
    }
    lVar3 = *DAT_00d60288;
    if (*(long *)(param_1 + 0x138) == 0) {
      plVar4 = DAT_00d60288;
      if (((DAT_00d60290 & 1) == 0) &&
         (iVar2 = FUN_0054fdd4(&DAT_00d60290), plVar4 = DAT_00d60288, iVar2 != 0)) {
        DAT_00d60288 = (long *)operator_new(0x18);
        DAT_00d60288[1] = 0;
        DAT_00d60288[2] = 0;
        *DAT_00d60288 = 0;
        FUN_0054ff1c(&DAT_00d60290);
        plVar4 = DAT_00d60288;
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 0x138) + 8);
    }
  }
  else {
    lVar3 = *(long *)(lVar5 + 8);
    plVar4 = (long *)(lVar5 + 8);
  }
  lVar5 = 0x7fffffffffffffff;
  while (lVar1 = lVar5, lVar3 != plVar4[1]) {
    lVar6 = *(long *)(lVar3 + 0x28);
    lVar3 = lVar3 + 0x68;
    lVar5 = lVar6;
    if (lVar1 <= lVar6) {
      lVar5 = lVar1;
    }
    if (0xfffffffffffffffd < lVar6 + 0x7fffffffffffffffU) {
      lVar5 = lVar1;
    }
  }
  return;
}


// ===== 00952cfc  FUN_00952cfc =====

void FUN_00952cfc(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00947b9c(&local_70,*(undefined8 *)(param_1 + 0x28));
  if (local_70 == (undefined1 *)0x0) goto LAB_00952f38;
  if ((long)local_60 < 0) {
    uVar2 = -((ulong)-(long)local_60 / 1000) - (ulong)(500 < (ulong)-(long)local_60 % 1000);
    if ((long)local_38 < 0) goto LAB_00952e10;
LAB_00952d7c:
    uVar3 = (ulong)local_38 / 1000;
    if (499 < (ulong)local_38 % 1000) {
      uVar3 = uVar3 + 1;
    }
    if (-1 < (long)local_40) goto LAB_00952da0;
LAB_00952e3c:
    uVar4 = -((ulong)-(long)local_40 / 1000) - (ulong)(500 < (ulong)-(long)local_40 % 1000);
    if ((long)puStack_68 < 0) goto LAB_00952e68;
LAB_00952dc4:
    uVar5 = (ulong)puStack_68 / 1000;
    if (499 < (ulong)puStack_68 % 1000) {
      uVar5 = uVar5 + 1;
    }
  }
  else {
    uVar2 = (ulong)local_60 / 1000;
    if (499 < (ulong)local_60 % 1000) {
      uVar2 = uVar2 + 1;
    }
    if (-1 < (long)local_38) goto LAB_00952d7c;
LAB_00952e10:
    uVar3 = -((ulong)-(long)local_38 / 1000) - (ulong)(500 < (ulong)-(long)local_38 % 1000);
    if ((long)local_40 < 0) goto LAB_00952e3c;
LAB_00952da0:
    uVar4 = (ulong)local_40 / 1000;
    if (499 < (ulong)local_40 % 1000) {
      uVar4 = uVar4 + 1;
    }
    if (-1 < (long)puStack_68) goto LAB_00952dc4;
LAB_00952e68:
    uVar5 = -((ulong)-(long)puStack_68 / 1000) - (ulong)(500 < (ulong)-(long)puStack_68 % 1000);
  }
  if ((long)local_50 < 0) {
    uVar6 = -((ulong)-(long)local_50 / 1000) - (ulong)(500 < (ulong)-(long)local_50 % 1000);
    if ((long)local_58 < 0) goto LAB_00952f08;
LAB_00952ebc:
    uVar1 = (ulong)local_58 / 1000;
    if (499 < (ulong)local_58 % 1000) {
      uVar1 = uVar1 + 1;
    }
  }
  else {
    uVar6 = (ulong)local_50 / 1000;
    if (499 < (ulong)local_50 % 1000) {
      uVar6 = uVar6 + 1;
    }
    if (-1 < (long)local_58) goto LAB_00952ebc;
LAB_00952f08:
    uVar1 = -((ulong)-(long)local_58 / 1000) - (ulong)(500 < (ulong)-(long)local_58 % 1000);
  }
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))
            (*(long **)(param_1 + 0x18),uVar2,uVar3,uVar4,uVar5,uVar6,uVar1);
LAB_00952f38:
  uVar2 = 0x7fffffffffffffff;
  if ((param_3 != 0x7fffffffffffffff) && (param_2 != -0x8000000000000000)) {
    uVar2 = 0;
    if (param_3 != -0x8000000000000000 && param_2 != 0x7fffffffffffffff) {
      uVar2 = param_3 - param_2 & (param_3 - param_2 >> 0x3f ^ 0xffffffffffffffffU);
    }
  }
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))
            (*(long **)(param_1 + 0x18),uVar2,local_40,puStack_68);
  return;
}


// ===== 00952f98  FUN_00952f98 =====

void FUN_00952f98(long param_1,undefined4 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong extraout_x1;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 **ppuVar7;
  long lVar8;
  ulong uVar9;
  undefined1 **ppuVar10;
  long lVar11;
  undefined1 **ppuVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *local_88 [10];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00957c48(*(undefined8 *)(param_1 + 0x368));
  if ((extraout_x1 & 1) == 0) {
    uVar3 = FUN_004249b0();
    if ((uVar3 & 1) == 0) {
      if (*(long *)(lVar2 + 0x28) == local_38) {
        FUN_00623bb0(&DAT_001fcbd8,"../../video/video_stream_buffer_controller.cc",0x963,
                     "The frame buffer became undecodable during the wait to decode frame with rtp-timestamp "
                     ,param_2,
                     ". Cancelling the decode of this frame, decoding will resume when the frame buffers become decodable again."
                    );
        return;
      }
      goto LAB_009531d8;
    }
  }
  else {
    local_88[6] = &DAT_aaaaaaaaaaaaaaaa;
    local_88[5] = &DAT_aaaaaaaaaaaaaaaa;
    local_88[8] = &DAT_aaaaaaaaaaaaaaaa;
    local_88[7] = &DAT_aaaaaaaaaaaaaaaa;
    local_88[9] = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00957924(local_88 + 5,*(undefined8 *)(param_1 + 0x368));
    if (local_88[5] < (undefined1 *)0x2) {
      uVar3 = FUN_004249b0();
      if ((uVar3 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../video/video_stream_buffer_controller.cc",0x9cb,
                     "The frame buffer should never return an empty temporal until list when there is a decodable temporal unit."
                    );
      }
    }
    else {
      local_88[0] = (undefined1 *)0x0;
      if (((ulong)local_88[5] & 1) == 0) {
        uVar4 = (ulong)local_88[5] >> 1;
        ppuVar7 = local_88 + 5;
        uVar6 = ((ulong)local_88 ^ 0xfffffffffffffff8) >> 3;
        uVar9 = uVar4 - 1;
        uVar3 = uVar6;
        if (uVar9 <= uVar6) {
          uVar3 = uVar9;
        }
        if (uVar3 < 10) {
LAB_009530c4:
          lVar8 = 0;
        }
        else {
          uVar1 = uVar6;
          if (uVar9 <= uVar6) {
            uVar1 = uVar9;
          }
          if (((ulong)ppuVar7 | 8) + uVar1 * 8 < ((ulong)ppuVar7 | 8)) goto LAB_009530c4;
          uVar9 = uVar3 + 1 & 3;
          uVar1 = 4;
          if (uVar9 != 0) {
            uVar1 = uVar9;
          }
          ppuVar12 = local_88 + 3;
          lVar8 = (uVar3 + 1) - uVar1;
          ppuVar7 = local_88 + lVar8 + 5;
          ppuVar10 = local_88 + 8;
          lVar5 = lVar8;
          do {
            puVar14 = ppuVar10[-1];
            puVar13 = ppuVar10[-2];
            puVar16 = ppuVar10[1];
            puVar15 = *ppuVar10;
            lVar5 = lVar5 + -4;
            ppuVar10[-1] = (undefined1 *)0x0;
            ppuVar10[-2] = (undefined1 *)0x0;
            ppuVar10[1] = (undefined1 *)0x0;
            *ppuVar10 = (undefined1 *)0x0;
            ppuVar10 = ppuVar10 + 4;
            ppuVar12[-1] = puVar14;
            ppuVar12[-2] = puVar13;
            ppuVar12[1] = puVar16;
            *ppuVar12 = puVar15;
            ppuVar12 = ppuVar12 + 4;
          } while (lVar5 != 0);
        }
        lVar11 = lVar8 * 8;
        lVar5 = uVar4 - lVar8;
        lVar8 = uVar6 - lVar8;
        do {
          lVar11 = lVar11 + 8;
          ppuVar7 = ppuVar7 + 1;
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          lVar5 = lVar5 + -1;
          lVar8 = lVar8 + -1;
          *(undefined1 **)((long)local_88 + lVar11) = *ppuVar7;
          *ppuVar7 = (undefined1 *)0x0;
        } while (lVar5 != 0);
        local_88[0] = (undefined1 *)((ulong)local_88[5] & 0xfffffffffffffffe);
      }
      else {
        local_88[0] = local_88[5];
        local_88[5] = (undefined1 *)0x0;
        local_88[1] = local_88[6];
        local_88[2] = local_88[7];
      }
      FUN_00952678(param_1,local_88,param_3);
      if (local_88[0] != (undefined1 *)0x0) {
        FUN_0095362c(local_88);
      }
    }
    if (local_88[5] != (undefined1 *)0x0) {
      FUN_0095362c(local_88 + 5);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_009531d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 009531dc  FUN_009531dc =====

/* WARNING: Type propagation algorithm not settling */

void FUN_009531dc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong extraout_x1;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long **pplVar11;
  long **pplVar12;
  long **pplVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *local_b8;
  long *local_b0 [9];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar15 = ~(ulong)&local_b8 >> 3;
  do {
    FUN_00957c48(*(undefined8 *)(param_1 + 0x368));
    if ((extraout_x1 & 1) == 0) break;
    local_b0[5] = (long *)&DAT_aaaaaaaaaaaaaaaa;
    local_b0[4] = (long *)&DAT_aaaaaaaaaaaaaaaa;
    local_b0[7] = (long *)&DAT_aaaaaaaaaaaaaaaa;
    local_b0[6] = (long *)&DAT_aaaaaaaaaaaaaaaa;
    local_b0[8] = (long *)&DAT_aaaaaaaaaaaaaaaa;
    FUN_00957924(local_b0 + 4,*(undefined8 *)(param_1 + 0x368));
    if (local_b0[4] < (long *)0x2) {
      bVar4 = false;
    }
    else {
      if (((ulong)local_b0[4] & 1) == 0) {
        lVar8 = local_b0[5][0x31];
        plVar14 = local_b0[5];
      }
      else {
        lVar8 = ((long *)*local_b0[5])[0x31];
        plVar14 = (long *)*local_b0[5];
      }
      if (lVar8 == 0) {
        lVar8 = plVar14[0x14];
        plVar14 = *(long **)(param_1 + 0x28);
        uVar5 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
        uVar5 = (**(code **)(*plVar14 + 0x18))(plVar14,(int)lVar8,uVar5);
        local_b8 = (long *)0x0;
        if (((ulong)local_b0[4] & 1) == 0) {
          plVar14 = local_b0[4];
          if (local_b0[4] != (long *)0x0) {
            uVar6 = (ulong)local_b0[4] >> 1;
            uVar10 = uVar6 - 1;
            uVar1 = uVar15;
            if (uVar10 <= uVar15) {
              uVar1 = uVar10;
            }
            if (uVar1 < 10) {
LAB_009532fc:
              lVar8 = 0;
              pplVar11 = local_b0 + 4;
            }
            else {
              uVar2 = uVar15;
              if (uVar10 <= uVar15) {
                uVar2 = uVar10;
              }
              if (local_b0 + 5 + uVar2 < local_b0 + 5) goto LAB_009532fc;
              pplVar13 = local_b0 + 7;
              uVar10 = uVar1 + 1 & 3;
              uVar2 = 4;
              if (uVar10 != 0) {
                uVar2 = uVar10;
              }
              lVar8 = (uVar1 + 1) - uVar2;
              pplVar11 = local_b0 + lVar8 + 4;
              pplVar12 = local_b0 + 2;
              lVar7 = lVar8;
              do {
                plVar16 = pplVar13[-1];
                plVar14 = pplVar13[-2];
                plVar18 = pplVar13[1];
                plVar17 = *pplVar13;
                lVar7 = lVar7 + -4;
                pplVar13[-1] = (long *)0x0;
                pplVar13[-2] = (long *)0x0;
                pplVar13[1] = (long *)0x0;
                *pplVar13 = (long *)0x0;
                pplVar13 = pplVar13 + 4;
                pplVar12[-1] = plVar16;
                pplVar12[-2] = plVar14;
                pplVar12[1] = plVar18;
                *pplVar12 = plVar17;
                pplVar12 = pplVar12 + 4;
              } while (lVar7 != 0);
            }
            lVar7 = uVar6 - lVar8;
            lVar9 = uVar15 - lVar8;
            pplVar13 = local_b0 + lVar8;
            do {
              pplVar11 = pplVar11 + 1;
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                           ,uVar5);
              }
              plVar14 = *pplVar11;
              lVar7 = lVar7 + -1;
              lVar9 = lVar9 + -1;
              *pplVar11 = (long *)0x0;
              *pplVar13 = plVar14;
              pplVar13 = pplVar13 + 1;
            } while (lVar7 != 0);
            plVar14 = (long *)((ulong)local_b0[4] & 0xfffffffffffffffe);
          }
        }
        else {
          local_b8 = local_b0[4];
          local_b0[4] = (long *)0x0;
          local_b0[0] = local_b0[5];
          local_b0[1] = local_b0[6];
          plVar14 = local_b8;
        }
        local_b8 = plVar14;
        FUN_00952678(param_1,&local_b8);
        if (local_b8 != (long *)0x0) {
          FUN_0095362c(&local_b8);
        }
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
    }
    if (local_b0[4] != (long *)0x0) {
      FUN_0095362c(local_b0 + 4);
    }
  } while (!bVar4);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00953424  FUN_00953424 =====

void FUN_00953424(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  long local_28;
  
  *param_1 = &PTR_FUN_00d3e518;
  FUN_007ebdcc(param_1[0x86]);
  pvVar3 = (void *)param_1[0x86];
  if ((pvVar3 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar3), iVar1 == 1)) {
    operator_delete(pvVar3);
  }
  FUN_006634ac(param_1 + 0x7e);
  FUN_009568e0(param_1 + 0x70);
  pvVar3 = (void *)param_1[0x6d];
  param_1[0x6d] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_00955f9c((long)pvVar3 + 0x70);
    local_28 = (long)pvVar3 + 0x10;
    FUN_00953520(&local_28,*(undefined8 *)((long)pvVar3 + 0x18));
    operator_delete(pvVar3);
  }
  FUN_009540fc(param_1 + 7);
  plVar2 = (long *)param_1[6];
  param_1[6] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  return;
}


// ===== 009534f0  FUN_009534f0 =====

void FUN_009534f0(void *param_1)

{
  FUN_00953424();
  operator_delete(param_1);
  return;
}


// ===== 00953520  FUN_00953520 =====

void FUN_00953520(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00953520(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar1 = (long *)param_2[5];
      puVar2 = (undefined8 *)param_2[1];
      param_2[5] = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      operator_delete(param_2);
      param_2 = puVar2;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}


// ===== 009535b4  FUN_009535b4 =====

void FUN_009535b4(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  param_1 = (long *)*param_1;
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar1 = (long *)(param_1[2] + (param_1[1] >> 1));
  if ((param_1[1] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x009535d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*param_2);
  return;
}


// ===== 009535dc  FUN_009535dc =====

void FUN_009535dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  uVar3 = *param_1;
  uVar2 = param_1[2];
  puVar1[1] = param_1[1];
  *puVar1 = uVar3;
  puVar1[2] = uVar2;
  return;
}


// ===== 00953618  FUN_00953618 =====

void FUN_00953618(void *param_1)

{
  if (param_1 != (void *)0x0) {
    operator_delete(param_1);
    return;
  }
  return;
}


// ===== 0095362c  FUN_0095362c =====

void FUN_0095362c(ulong *param_1)

{
  bool bVar1;
  long *plVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  puVar3 = param_1 + 1;
  uVar4 = *param_1;
  if ((uVar4 & 1) != 0) {
    puVar3 = (ulong *)*puVar3;
  }
  uVar5 = uVar4 >> 1;
  if (uVar5 != 0) {
    puVar3 = puVar3 + uVar5;
    lVar6 = -uVar5;
    do {
      puVar3 = puVar3 + -1;
      if (puVar3 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar2 = (long *)*puVar3;
      *puVar3 = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      bVar1 = lVar6 != -1;
      lVar6 = lVar6 + 1;
    } while (bVar1);
    uVar4 = *param_1;
  }
  if ((uVar4 & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[1]);
  return;
}


// ===== 009536ec  FUN_009536ec =====

void FUN_009536ec(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  param_1 = (long *)*param_1;
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar1 = (long *)(param_1[2] + (param_1[1] >> 1));
  if ((param_1[1] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00953710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_2,*param_3);
  return;
}


// ===== 00953714  FUN_00953714 =====

/* WARNING: Removing unreachable block (ram,0x00953bb4) */
/* WARNING: Removing unreachable block (ram,0x00953b98) */
/* WARNING: Removing unreachable block (ram,0x00953bec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00953714(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  double dVar11;
  double dVar12;
  undefined1 uStack_c9;
  char *local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  char *local_b0;
  char **ppcStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char **local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  
  uVar3 = _UNK_00228710;
  uVar2 = _DAT_00228708;
  uVar1 = _DAT_002286f8;
  param_1[1] = _UNK_00228700;
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar3 = _UNK_00228730;
  uVar2 = _DAT_00228728;
  uVar1 = _DAT_00228718;
  param_1[5] = _UNK_00228720;
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  uVar3 = _UNK_00228750;
  uVar2 = _DAT_00228748;
  uVar1 = _DAT_00228738;
  param_1[9] = _UNK_00228740;
  param_1[8] = uVar1;
  param_1[0xb] = uVar3;
  param_1[10] = uVar2;
  uVar3 = _UNK_00228770;
  uVar2 = _DAT_00228768;
  uVar1 = _DAT_00228758;
  param_1[0xd] = _UNK_00228760;
  param_1[0xc] = uVar1;
  param_1[0xf] = uVar3;
  param_1[0xe] = uVar2;
  puVar9 = param_1 + 3;
  *(undefined1 *)puVar9 = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  puVar10 = (undefined4 *)((long)param_1 + 100);
  *(undefined1 *)puVar10 = 0;
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  puVar4 = (undefined8 *)
           FUN_00954f7c("avg_frame_size_median",param_1,"max_frame_size_percentile",param_1 + 1,
                        "frame_size_window",puVar9,"num_stddev_delay_clamp",param_1 + 4,
                        "num_stddev_delay_outlier",param_1 + 6,"num_stddev_size_outlier",param_1 + 8
                        ,"congestion_rejection_factor",param_1 + 10,"estimate_noise_when_congested",
                        param_1 + 0xc,"nack_limit",puVar10,"nack_count_timeout",param_1 + 0xe);
  FUN_006659ac(puVar4,param_2,param_3);
  if (puVar4 != (undefined8 *)0x0) {
    pvVar5 = (void *)*puVar4;
    if (pvVar5 != (void *)0x0) {
      pvVar6 = (void *)puVar4[1];
      uVar8 = (ulong)((long)pvVar6 + (-0x20 - ((long)pvVar6 << 0x3b))) >> 5;
      uVar7 = (ulong)(((long)pvVar5 - (long)pvVar6 << 0x3b) - ((long)pvVar5 - (long)pvVar6)) >> 5;
      if (uVar8 <= uVar7) {
        uVar7 = uVar8;
      }
      if ((1 < uVar7) && ((((int)pvVar5 - (int)pvVar6 | -(int)pvVar6) & 0x1fU) == 0)) {
        uVar7 = uVar7 & 0x7fffffffffffffe;
        pvVar6 = (void *)((long)pvVar6 + uVar7 * -0x20);
        do {
          uVar7 = uVar7 - 2;
        } while (uVar7 != 0);
      }
      while (pvVar6 != pvVar5) {
        pvVar6 = (void *)((long)pvVar6 + -0x20);
        if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      puVar4[1] = pvVar5;
      operator_delete(pvVar5);
    }
    operator_delete(puVar4);
  }
  if (*(char *)(param_1 + 2) == '\x01') {
    dVar12 = (double)param_1[1];
    *(undefined1 *)(param_1 + 2) = 1;
    dVar11 = 1.0;
    if (dVar12 == 1.0 || dVar12 < 1.0 != NAN(dVar12)) {
      dVar11 = dVar12;
    }
    param_1[1] = dVar11;
    if ((dVar11 != dVar12) && (uVar7 = FUN_004249b0(), (uVar7 & 1) == 0)) {
      FUN_00623bb0(dVar12,&DAT_001f667e,"../../modules/video_coding/timing/jitter_estimator.cc",
                   0x313,"Skipping invalid max_frame_size_percentile=");
    }
  }
  if ((*(char *)((long)param_1 + 0x1c) == '\x01') && (*(int *)(param_1 + 3) < 1)) {
    uVar7 = FUN_004249b0();
    if ((uVar7 & 1) == 0) {
      if ((*(byte *)((long)param_1 + 0x1c) & 1) == 0) goto LAB_00953c34;
      FUN_00623bb0(&DAT_001f4e94,"../../modules/video_coding/timing/jitter_estimator.cc",0x33b,
                   "Skipping invalid frame_size_window=",*(undefined4 *)puVar9);
    }
    *(undefined4 *)(param_1 + 3) = 1;
    *(undefined1 *)((long)param_1 + 0x1c) = 1;
  }
  if ((*(char *)(param_1 + 5) == '\x01') && ((double)param_1[4] < 0.0)) {
    uVar7 = FUN_004249b0();
    if ((uVar7 & 1) == 0) {
      if ((*(byte *)(param_1 + 5) & 1) == 0) goto LAB_00953c34;
      FUN_00623bb0(param_1[4],&DAT_001f667e,"../../modules/video_coding/timing/jitter_estimator.cc",
                   899,"Skipping invalid num_stddev_delay_clamp=");
    }
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  if ((*(char *)(param_1 + 7) == '\x01') && ((double)param_1[6] < 0.0)) {
    uVar7 = FUN_004249b0();
    if ((uVar7 & 1) == 0) {
      if ((*(byte *)(param_1 + 7) & 1) == 0) goto LAB_00953c34;
      FUN_00623bb0(param_1[6],&DAT_001f667e,"../../modules/video_coding/timing/jitter_estimator.cc",
                   0x3b3,"Skipping invalid num_stddev_delay_outlier=");
    }
    param_1[6] = 0;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  if ((*(char *)(param_1 + 9) == '\x01') && ((double)param_1[8] < 0.0)) {
    uVar7 = FUN_004249b0();
    if ((uVar7 & 1) == 0) {
      if ((*(byte *)(param_1 + 9) & 1) == 0) goto LAB_00953c34;
      FUN_00623bb0(param_1[8],&DAT_001f667e,"../../modules/video_coding/timing/jitter_estimator.cc",
                   0x3db,"Skipping invalid num_stddev_size_outlier=");
    }
    param_1[8] = 0;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  if ((*(char *)(param_1 + 0xd) == '\x01') && (*(int *)((long)param_1 + 100) < 0)) {
    uVar7 = FUN_004249b0();
    if ((uVar7 & 1) == 0) {
      if ((*(byte *)(param_1 + 0xd) & 1) == 0) goto LAB_00953c34;
      FUN_00623bb0(&DAT_001f4e94,"../../modules/video_coding/timing/jitter_estimator.cc",0x403,
                   "Skipping invalid nack_limit=",*puVar10);
    }
    if (*(char *)(param_1 + 0xd) == '\x01') {
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
  }
  if ((*(char *)(param_1 + 0xf) == '\x01') && ((long)param_1[0xe] < 1)) {
    uVar7 = FUN_004249b0();
    if ((uVar7 & 1) == 0) {
      local_c8 = "../../modules/video_coding/timing/jitter_estimator.cc";
      local_c0 = 0x42b;
      local_b8 = &uStack_c9;
      ppcStack_a8 = &local_c8;
      local_b0 = "Skipping invalid nack_count_timeout=";
      if ((*(byte *)(param_1 + 0xf) & 1) == 0) {
LAB_00953c34:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      FUN_005f3380(&local_78,param_1 + 0xe);
      local_88 = &local_b0;
      uStack_98 = uStack_70;
      local_a0 = local_78;
      FUN_00623bb0(&DAT_001f6510,*ppcStack_a8,*(undefined4 *)(ppcStack_a8 + 1),local_b0,&local_a0);
    }
    if (*(char *)(param_1 + 0xf) == '\x01') {
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  return;
}


// ===== 00953c48  FUN_00953c48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00953c48(long param_1,undefined8 param_2,long *param_3)

{
  int *piVar1;
  double *pdVar2;
  int iVar3;
  undefined8 *****pppppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  double dVar8;
  float fVar9;
  undefined8 ****local_48;
  ulong uStack_40;
  byte bStack_31;
  
  (**(code **)(*param_3 + 0x10))(&local_48,param_3,"WebRTC-JitterEstimatorConfig",0x1c);
  pppppuVar4 = (undefined8 *****)local_48;
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    pppppuVar4 = &local_48;
  }
  FUN_00953714(param_1,pppppuVar4,uStack_40);
  if ((char)bStack_31 < '\0') {
    operator_delete(local_48);
  }
  FUN_009551d8(param_1 + 0x80);
  puVar7 = (undefined8 *)(param_1 + 0xe8);
  *puVar7 = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0x3f000000;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 **)(param_1 + 0xf8) = puVar7;
  *(undefined8 **)(param_1 + 0xe0) = puVar7;
  piVar1 = (int *)(param_1 + 0x18);
  if (*(char *)(param_1 + 0x1c) == '\0') {
    piVar1 = (int *)&UNK_001fdc34;
  }
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(long *)(param_1 + 0x108) = param_1 + 0x108;
  *(long *)(param_1 + 0x110) = param_1 + 0x108;
  *(undefined8 *)(param_1 + 0x118) = 0;
  iVar3 = *piVar1;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(long *)(param_1 + 0x128) = (long)iVar3;
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../rtc_base/numerics/moving_percentile_filter.h",0x46,"window_size > 0",
                 &DAT_001fbca2,0,0);
  }
  *(undefined8 *)(param_1 + 0x158) = 0;
  pdVar2 = (double *)(param_1 + 8);
  if (*(char *)(param_1 + 0x10) == '\0') {
    pdVar2 = (double *)&UNK_001f5aa0;
  }
  dVar8 = *pdVar2;
  *(long *)(param_1 + 0x138) = param_1 + 0x140;
  *(undefined8 *)(param_1 + 0x140) = 0;
  fVar9 = (float)dVar8;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(long *)(param_1 + 0x150) = param_1 + 0x140;
  *(float *)(param_1 + 0x130) = fVar9;
  if (dVar8 < -7.006492321624085e-46 != NAN(dVar8)) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88((double)fVar9,0,"../../rtc_base/numerics/percentile_filter.h",0x3f,
                 "percentile >= 0.0f",&DAT_001fdd70);
  }
  if (1.0000000596046448 < dVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88((double)fVar9,0x3ff0000000000000,"../../rtc_base/numerics/percentile_filter.h",0x40
                 ,"percentile <= 1.0f",&DAT_001fdd70);
  }
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(long *)(param_1 + 0x160) = param_1 + 0x160;
  *(long *)(param_1 + 0x168) = param_1 + 0x160;
  *(long *)(param_1 + 0x180) = (long)iVar3;
  *(undefined1 *)(param_1 + 0x198) = 0;
  *(undefined1 *)(param_1 + 0x1a0) = 0;
  *(undefined1 *)(param_1 + 0x1a8) = 0;
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  *(undefined1 *)(param_1 + 0x1b8) = 0;
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  FUN_00955400(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  puVar7 = (undefined8 *)operator_new(0xf0);
  *(undefined8 **)(param_1 + 0x2e0) = puVar7;
  *(undefined8 **)(param_1 + 0x2e8) = puVar7;
  *(undefined8 **)(param_1 + 0x2f0) = puVar7 + 0x1e;
  if (((((((puVar7 != (undefined8 *)0x0) &&
          (*puVar7 = 0, puVar7 != (undefined8 *)0xfffffffffffffff8)) &&
         (puVar7[1] = 0, puVar7 != (undefined8 *)0xfffffffffffffff0)) &&
        ((puVar7[2] = 0, puVar7 != (undefined8 *)0xffffffffffffffe8 &&
         (puVar7[3] = 0, puVar7 != (undefined8 *)0xffffffffffffffe0)))) &&
       (puVar7[4] = 0, puVar7 != (undefined8 *)0xffffffffffffffd8)) &&
      (((((puVar7[5] = 0, puVar7 != (undefined8 *)0xffffffffffffffd0 &&
          (puVar7[6] = 0, puVar7 != (undefined8 *)0xffffffffffffffc8)) &&
         ((puVar7[7] = 0, puVar7 != (undefined8 *)0xffffffffffffffc0 &&
          (((puVar7[8] = 0, puVar7 != (undefined8 *)0xffffffffffffffb8 &&
            (puVar7[9] = 0, puVar7 != (undefined8 *)0xffffffffffffffb0)) &&
           (puVar7[10] = 0, puVar7 != (undefined8 *)0xffffffffffffffa8)))))) &&
        ((puVar7[0xb] = 0, puVar7 != (undefined8 *)0xffffffffffffffa0 &&
         (puVar7[0xc] = 0, puVar7 != (undefined8 *)0xffffffffffffff98)))) &&
       (puVar7[0xd] = 0, puVar7 != (undefined8 *)0xffffffffffffff90)))) &&
     ((((puVar7[0xe] = 0, puVar7 != (undefined8 *)0xffffffffffffff88 &&
        (puVar7[0xf] = 0, puVar7 != (undefined8 *)0xffffffffffffff80)) &&
       ((puVar7[0x10] = 0, puVar7 != (undefined8 *)0xffffffffffffff78 &&
        (((puVar7[0x11] = 0, puVar7 != (undefined8 *)0xffffffffffffff70 &&
          (puVar7[0x12] = 0, puVar7 != (undefined8 *)0xffffffffffffff68)) &&
         (puVar7[0x13] = 0, puVar7 != (undefined8 *)0xffffffffffffff60)))))) &&
      (((puVar7[0x14] = 0, puVar7 != (undefined8 *)0xffffffffffffff58 &&
        (puVar7[0x15] = 0, puVar7 != (undefined8 *)0xffffffffffffff50)) &&
       ((puVar7[0x16] = 0, puVar7 != (undefined8 *)0xffffffffffffff48 &&
        (((puVar7[0x17] = 0, puVar7 != (undefined8 *)0xffffffffffffff40 &&
          (puVar7[0x18] = 0, puVar7 != (undefined8 *)0xffffffffffffff38)) &&
         ((puVar7[0x19] = 0, puVar7 != (undefined8 *)0xffffffffffffff30 &&
          ((puVar7[0x1a] = 0, puVar7 != (undefined8 *)0xffffffffffffff28 &&
           (puVar7[0x1b] = 0, puVar7 != (undefined8 *)0xffffffffffffff20)))))))))))))) {
    puVar7[0x1c] = 0;
    if (puVar7 + 0x1d != (undefined8 *)0x0) {
      puVar7[0x1d] = 0;
      uVar6 = _UNK_001f3068;
      uVar5 = _DAT_001f3060;
      *(undefined8 **)(param_1 + 0x2e8) = puVar7 + 0x1e;
      *(undefined8 *)(param_1 + 0x2d0) = 0;
      *(undefined8 *)(param_1 + 0x290) = uVar6;
      *(undefined8 *)(param_1 + 0x288) = uVar5;
      *(undefined1 *)(param_1 + 0x2d8) = 0;
      *(undefined8 *)(param_1 + 0x2a0) = 0;
      *(undefined8 *)(param_1 + 0x298) = 0;
      *(undefined8 *)(param_1 + 0x2b0) = 0;
      *(undefined8 *)(param_1 + 0x2a8) = 0;
      *(undefined8 *)(param_1 + 0x2c0) = 0;
      *(undefined8 *)(param_1 + 0x2b8) = 0;
      *(undefined1 *)(param_1 + 0x2c8) = 0;
      *(undefined8 *)(param_1 + 0x2f8) = param_2;
      FUN_00954014(param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00954014  FUN_00954014 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00954014(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = _UNK_001f4238;
  uVar1 = _DAT_001f4230;
  *(undefined8 *)(param_1 + 0xd0) = 0x407f400000000000;
  *(undefined8 *)(param_1 + 200) = uVar2;
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  FUN_009542cc(param_1 + 0xd8);
  FUN_009542cc(param_1 + 0x130);
  if (*(char *)(param_1 + 0x1a0) == '\x01') {
    *(undefined1 *)(param_1 + 0x1a0) = 0;
  }
  if (*(char *)(param_1 + 0x1b0) == '\x01') {
    *(undefined1 *)(param_1 + 0x1b0) = 0;
  }
  if (*(char *)(param_1 + 0x1c0) == '\x01') {
    *(undefined1 *)(param_1 + 0x1c0) = 0;
  }
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0x4010000000000000;
  *(undefined8 *)(param_1 + 0x1d8) = 1;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  FUN_0095543c(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined1 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined1 *)(param_1 + 0x2c8) = 0;
  FUN_009551d8(&local_60);
  *(undefined8 *)(param_1 + 0x88) = uStack_58;
  *(undefined8 *)(param_1 + 0x80) = local_60;
  *(undefined8 *)(param_1 + 0x98) = uStack_48;
  *(undefined8 *)(param_1 + 0x90) = uStack_50;
  *(undefined8 *)(param_1 + 0xa8) = uStack_38;
  *(undefined8 *)(param_1 + 0xa0) = local_40;
  *(undefined8 *)(param_1 + 0xb8) = uStack_28;
  *(undefined8 *)(param_1 + 0xb0) = uStack_30;
  return;
}


// ===== 009540fc  FUN_009540fc =====

void FUN_009540fc(long param_1)

{
  long *plVar1;
  byte bVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long local_18;
  
  pvVar3 = *(void **)(param_1 + 0x2e0);
  if (pvVar3 == (void *)0x0) {
LAB_009541a4:
    if ((*(byte *)(param_1 + 600) & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 0x228);
    }
    else {
      operator_delete(*(void **)(param_1 + 0x260));
      bVar2 = *(byte *)(param_1 + 0x228);
    }
    if ((bVar2 & 1) == 0) {
      lVar5 = *(long *)(param_1 + 0x170);
    }
    else {
      operator_delete(*(void **)(param_1 + 0x230));
      lVar5 = *(long *)(param_1 + 0x170);
    }
    if (lVar5 != 0) {
      plVar1 = *(long **)(param_1 + 0x168);
      plVar6 = *(long **)(*(long *)(param_1 + 0x160) + 8);
      *(long **)(*plVar1 + 8) = plVar6;
      *plVar6 = *plVar1;
      *(undefined8 *)(param_1 + 0x170) = 0;
      while (plVar1 != (long *)(param_1 + 0x160)) {
        if ((plVar1 == (long *)0xfffffffffffffff0) || (plVar1 == (long *)0x0)) goto LAB_00954180;
        plVar6 = (long *)plVar1[1];
        operator_delete(plVar1);
        plVar1 = plVar6;
      }
    }
    local_18 = param_1 + 0x138;
    FUN_005dabf4(&local_18,*(undefined8 *)(param_1 + 0x140));
    if (*(long *)(param_1 + 0x118) != 0) {
      plVar1 = *(long **)(param_1 + 0x110);
      plVar6 = *(long **)(*(long *)(param_1 + 0x108) + 8);
      *(long **)(*plVar1 + 8) = plVar6;
      *plVar6 = *plVar1;
      *(undefined8 *)(param_1 + 0x118) = 0;
      while (plVar1 != (long *)(param_1 + 0x108)) {
        if ((plVar1 == (long *)0xfffffffffffffff0) || (plVar1 == (long *)0x0)) goto LAB_00954180;
        plVar6 = (long *)plVar1[1];
        operator_delete(plVar1);
        plVar1 = plVar6;
      }
    }
    local_18 = param_1 + 0xe0;
    FUN_005dabf4(&local_18,*(undefined8 *)(param_1 + 0xe8));
    return;
  }
  pvVar4 = *(void **)(param_1 + 0x2e8);
  uVar8 = (ulong)((long)pvVar4 + (-8 - ((long)pvVar4 << 0x3d))) >> 3;
  uVar7 = (ulong)(((long)pvVar3 - (long)pvVar4 << 0x3d) - ((long)pvVar3 - (long)pvVar4)) >> 3;
  if (uVar8 <= uVar7) {
    uVar7 = uVar8;
  }
  if ((1 < uVar7) && ((((int)pvVar3 - (int)pvVar4 | -(int)pvVar4) & 7U) == 0)) {
    uVar7 = uVar7 & 0x1ffffffffffffffe;
    pvVar4 = (void *)((long)pvVar4 + uVar7 * -8);
    do {
      uVar7 = uVar7 - 2;
    } while (uVar7 != 0);
  }
  do {
    if (pvVar4 == pvVar3) {
      *(void **)(param_1 + 0x2e8) = pvVar3;
      operator_delete(pvVar3);
      goto LAB_009541a4;
    }
    pvVar4 = (void *)((long)pvVar4 + -8);
  } while (pvVar4 != (void *)0x0);
LAB_00954180:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 009542cc  FUN_009542cc =====

void FUN_009542cc(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long local_18;
  
  puVar3 = (undefined8 *)(param_1 + 0x10);
  local_18 = param_1 + 8;
  FUN_005dabf4(&local_18,*puVar3);
  *(undefined8 **)(param_1 + 8) = puVar3;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 **)(param_1 + 0x20) = puVar3;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    plVar1 = *(long **)(param_1 + 0x38);
    plVar2 = *(long **)(*(long *)(param_1 + 0x30) + 8);
    *(long **)(*plVar1 + 8) = plVar2;
    *plVar2 = *plVar1;
    *(undefined8 *)(param_1 + 0x40) = 0;
    while (plVar1 != (long *)(param_1 + 0x30)) {
      if ((plVar1 == (long *)0xfffffffffffffff0) || (plVar1 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar2 = (long *)plVar1[1];
      operator_delete(plVar1);
      plVar1 = plVar2;
    }
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}


// ===== 00954388  FUN_00954388 =====

void FUN_00954388(char *param_1,ulong param_2,long param_3)

{
  double *pdVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  long local_58;
  
  if (param_3 == 0) {
    return;
  }
  if (param_1[0x1c0] == '\x01') {
    lVar6 = *(long *)(param_1 + 0x1b8);
  }
  else {
    lVar6 = 0;
  }
  dVar11 = (double)param_3;
  uVar3 = *(ulong *)(param_1 + 400);
  if (uVar3 < 5) {
    lVar4 = uVar3 + 1;
    *(double *)(param_1 + 0x188) = *(double *)(param_1 + 0x188) + dVar11;
LAB_00954418:
    *(long *)(param_1 + 400) = lVar4;
  }
  else if (uVar3 == 5) {
    lVar4 = 6;
    *(double *)(param_1 + 0xc0) = *(double *)(param_1 + 0x188) / 5.0;
    goto LAB_00954418;
  }
  dVar7 = DAT_001f52b0;
  dVar8 = DAT_001f4fb0;
  dVar9 = SQRT(*(double *)(param_1 + 200));
  dVar10 = *(double *)(param_1 + 0xc0) + dVar9 + dVar9;
  dVar9 = dVar11 * DAT_001f52b0 + *(double *)(param_1 + 0xc0) * DAT_001f4fb0;
  if (dVar10 != dVar11 && dVar10 < dVar11 == (NAN(dVar10) || NAN(dVar11))) {
    *(double *)(param_1 + 0xc0) = dVar9;
  }
  dVar9 = dVar11 - dVar9;
  dVar7 = *(double *)(param_1 + 200) * dVar8 + dVar9 * dVar9 * dVar7;
  dVar8 = 1.0;
  if (1.0 <= dVar7) {
    dVar8 = dVar7;
  }
  dVar7 = dVar11;
  if (dVar11 <= *(double *)(param_1 + 0xd0) * DAT_001f5068) {
    dVar7 = *(double *)(param_1 + 0xd0) * DAT_001f5068;
  }
  *(double *)(param_1 + 200) = dVar8;
  *(double *)(param_1 + 0xd0) = dVar7;
  if (*param_1 == '\x01') {
    local_58 = param_3;
    FUN_008534b4(param_1 + 0xd8,&local_58);
  }
  if (param_1[0x10] == '\x01') {
    local_58 = param_3;
    FUN_008534b4(param_1 + 0x130,&local_58);
  }
  if ((param_1[0x1c0] & 1U) == 0) {
    if ((long *)(param_1 + 0x1b8) != (long *)0x0) {
      *(long *)(param_1 + 0x1b8) = param_3;
      param_1[0x1c0] = '\x01';
      return;
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *(long *)(param_1 + 0x1b8) = param_3;
  pdVar1 = (double *)(param_1 + 0x20);
  if (param_1[0x28] == '\0') {
    pdVar1 = (double *)&UNK_001f5948;
  }
  dVar8 = (*pdVar1 * SQRT(*(double *)(param_1 + 0x1d0)) + 0.5) * 1000.0;
  if (dVar8 == INFINITY) {
    uVar3 = 0x7fffffffffffffff;
    uVar5 = 0x8000000000000000;
  }
  else {
    if (dVar8 == -INFINITY) {
LAB_009547e0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__algorithm/clamp.h:29: libc++ Hardening assertion !__comp(__hi, __lo) failed: Bad bounds passed to std::clamp\n"
                );
    }
    uVar3 = (ulong)dVar8;
    uVar5 = 0x8000000000000000;
    if (uVar3 != 0x7fffffffffffffff) {
      if ((uVar3 == 0x8000000000000000) || ((long)uVar3 < 0)) goto LAB_009547e0;
      uVar5 = -uVar3;
    }
  }
  dVar8 = (double)(param_3 - lVar6);
  if ((long)param_2 <= (long)uVar3) {
    uVar3 = param_2;
  }
  if ((long)uVar5 <= (long)param_2) {
    uVar5 = uVar3;
  }
  if ((long)uVar5 < 0) {
    uVar3 = -(-uVar5 / 1000) - (ulong)(500 < -uVar5 % 1000);
  }
  else {
    uVar3 = uVar5 / 1000;
    if (499 < uVar5 % 1000) {
      uVar3 = uVar3 + 1;
    }
  }
  dVar7 = (double)FUN_009553dc(dVar8,param_1 + 0x80);
  dVar9 = (double)(long)uVar3 - dVar7;
  pdVar1 = (double *)(param_1 + 0x30);
  if (param_1[0x38] == '\0') {
    pdVar1 = (double *)&UNK_001f5560;
  }
  dVar10 = *pdVar1;
  pdVar1 = (double *)(param_1 + 0x40);
  if (param_1[0x48] == '\0') {
    pdVar1 = (double *)&UNK_001f5198;
  }
  if ((ABS((double)(long)uVar3 - dVar7) < dVar10 * SQRT(*(double *)(param_1 + 0x1d0))) ||
     (*(double *)(param_1 + 0xc0) + *pdVar1 * SQRT(*(double *)(param_1 + 200)) < dVar11)) {
    pdVar1 = (double *)(param_1 + 0x50);
    if (param_1[0x58] == '\0') {
      pdVar1 = (double *)&UNK_001f5468;
    }
    if (param_1[0x10] == '\x01') {
      if (*(long *)(param_1 + 0x148) == 0) {
        dVar11 = 0.0;
      }
      else {
        dVar11 = (double)*(long *)(*(long *)(param_1 + 0x150) + 0x20);
      }
    }
    else {
      dVar11 = *(double *)(param_1 + 0xd0);
    }
    if (*pdVar1 * dVar11 < dVar8) {
      FUN_009547f4(param_1);
      if ((long)uVar5 < 0) {
        uVar3 = -(-uVar5 / 1000) - (ulong)(500 < -uVar5 % 1000);
      }
      else {
        uVar3 = uVar5 / 1000;
        if (499 < uVar5 % 1000) {
          uVar3 = uVar3 + 1;
        }
      }
      FUN_00955224((double)(long)uVar3,dVar8,dVar11,*(undefined8 *)(param_1 + 0x1d0),param_1 + 0x80)
      ;
      goto LAB_00954784;
    }
    if (param_1[0x60] != '\x01') goto LAB_00954784;
  }
  else {
    if (dVar9 < 0.0 != NAN(dVar9)) {
      dVar10 = -dVar10;
    }
    dVar9 = dVar10 * SQRT(*(double *)(param_1 + 0x1d0));
  }
  FUN_009547f4(dVar9,param_1);
LAB_00954784:
  if (*(ulong *)(param_1 + 0x1e8) < 0x1e) {
    *(ulong *)(param_1 + 0x1e8) = *(ulong *)(param_1 + 0x1e8) + 1;
  }
  else {
    uVar2 = FUN_00954bb4(param_1);
    *(undefined8 *)(param_1 + 0x1e0) = uVar2;
  }
  return;
}


// ===== 009547f4  FUN_009547f4 =====

void FUN_009547f4(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  double __x;
  double dVar9;
  double dVar10;
  
  lVar5 = (**(code **)(**(long **)(param_2 + 0x2f8) + 0x10))();
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    lVar6 = *(long *)(param_2 + 0x198);
    lVar1 = -0x8000000000000000;
    if (lVar6 != 0x7fffffffffffffff && lVar5 != -0x8000000000000000) {
      lVar1 = lVar5 - lVar6;
    }
    lVar2 = 0x7fffffffffffffff;
    if (lVar5 != 0x7fffffffffffffff && lVar6 != -0x8000000000000000) {
      lVar2 = lVar1;
    }
    FUN_00954a4c(param_2 + 0x288,lVar2);
    if (*(char *)(param_2 + 0x1a0) != '\x01') goto LAB_00954884;
    *(long *)(param_2 + 0x198) = lVar5;
    uVar7 = *(ulong *)(param_2 + 0x1d8);
  }
  else {
LAB_00954884:
    if ((long *)(param_2 + 0x198) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(long *)(param_2 + 0x198) = lVar5;
    *(undefined1 *)(param_2 + 0x1a0) = 1;
    uVar7 = *(ulong *)(param_2 + 0x1d8);
  }
  if (uVar7 == 0) {
    return;
  }
  uVar3 = 400;
  if (uVar7 + 1 < 400) {
    uVar3 = uVar7 + 1;
  }
  *(ulong *)(param_2 + 0x1d8) = uVar3;
  __x = (double)(uVar7 - 1) / (double)uVar7;
  if (*(long *)(param_2 + 0x288) == 0) {
    dVar9 = 0.0;
  }
  else {
    dVar9 = *(double *)(param_2 + 0x2a0);
    if (dVar9 == INFINITY) goto LAB_009549d4;
    if (dVar9 == -INFINITY) goto LAB_00954970;
  }
  uVar8 = (ulong)dVar9;
  if (0 < (long)uVar8) {
    if (uVar8 == 0x7fffffffffffffff) {
LAB_009549d4:
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../api/units/frequency.h",0x44,"interval.IsFinite()",&DAT_001f5fa0);
    }
    if (uVar8 < 0x3b9aca01) {
      uVar4 = 0;
      if ((uint)uVar8 != 0) {
        uVar4 = 1000000000 / (uint)uVar8;
      }
      if (199999 < uVar4) {
        uVar4 = 200000;
      }
      dVar9 = 30000.0 / (double)uVar4;
      if (uVar7 + 1 < 0x1e) {
        dVar9 = (dVar9 * (double)uVar3 + (double)(0x1e - uVar3)) / 30.0;
      }
      __x = pow(__x,dVar9);
    }
  }
LAB_00954970:
  dVar9 = param_1 - *(double *)(param_2 + 0x1c8);
  dVar10 = __x * *(double *)(param_2 + 0x1d0) + dVar9 * (1.0 - __x) * dVar9;
  dVar9 = 1.0;
  if (1.0 <= dVar10) {
    dVar9 = dVar10;
  }
  *(double *)(param_2 + 0x1c8) = __x * *(double *)(param_2 + 0x1c8) + param_1 * (1.0 - __x);
  *(double *)(param_2 + 0x1d0) = dVar9;
  return;
}


// ===== 009549f4  FUN_009549f4 =====

void FUN_009549f4(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x1f8) < 3) {
    *(int *)(param_1 + 0x1f8) = *(int *)(param_1 + 0x1f8) + 1;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x2f8) + 0x10))();
  *(undefined8 *)(param_1 + 0x1f0) = uVar1;
  return;
}


// ===== 00954a40  FUN_00954a40 =====

void FUN_00954a40(long param_1)

{
  FUN_009554d4(param_1 + 0x200);
  return;
}


// ===== 00954a4c  FUN_00954a4c =====

void FUN_00954a4c(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  uVar1 = param_1[0xb];
  uVar5 = *param_1;
  uVar3 = (long)(param_1[0xc] - uVar1) >> 3;
  uVar2 = param_1[6];
  if (uVar5 == uVar3) {
    if (uVar5 <= uVar2) goto LAB_00954ba0;
    uVar4 = *(ulong *)(uVar1 + uVar2 * 8);
    *param_1 = uVar5 - 1;
    dVar8 = (double)uVar4 - (double)param_1[3];
    dVar6 = (double)param_1[3] - dVar8 / (double)(long)(uVar5 - 1);
    param_1[3] = (ulong)dVar6;
    param_1[4] = (ulong)((double)param_1[4] - dVar8 * ((double)uVar4 - dVar6));
    if (param_1[7] <= uVar4) {
      *(undefined1 *)(param_1 + 8) = 1;
    }
    if (uVar4 <= param_1[9]) {
      *(undefined1 *)(param_1 + 10) = 1;
    }
  }
  if (uVar3 <= uVar2) {
LAB_00954ba0:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
              );
  }
  *(ulong *)(uVar1 + uVar2 * 8) = param_2;
  if (*param_1 == 0) {
    param_1[7] = param_2;
    *(undefined1 *)(param_1 + 8) = 0;
  }
  else {
    if (param_1[7] <= param_2) {
      param_1[7] = param_2;
      *(undefined1 *)(param_1 + 8) = 0;
    }
    if (param_1[9] < param_2) goto LAB_00954b20;
  }
  param_1[9] = param_2;
  *(undefined1 *)(param_1 + 10) = 0;
LAB_00954b20:
  dVar6 = (double)param_2;
  uVar1 = *param_1 + 1;
  *param_1 = uVar1;
  dVar8 = dVar6 - (double)param_1[3];
  uVar3 = (long)(param_1[0xc] - param_1[0xb]) >> 3;
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = (param_1[6] + 1) / uVar3;
  }
  uVar5 = param_1[2];
  if (param_1[2] <= param_2) {
    uVar5 = param_2;
  }
  if (param_1[1] <= param_2) {
    param_2 = param_1[1];
  }
  param_1[1] = param_2;
  param_1[2] = uVar5;
  dVar7 = (double)param_1[3] + dVar8 / (double)(long)uVar1;
  param_1[3] = (ulong)dVar7;
  param_1[5] = (ulong)((double)param_1[5] + dVar6);
  param_1[4] = (ulong)((double)param_1[4] + dVar8 * (dVar6 - dVar7));
  param_1[6] = (param_1[6] + 1) - uVar2 * uVar3;
  return;
}


// ===== 00954bb4  FUN_00954bb4 =====

void FUN_00954bb4(char *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (*param_1 == '\x01') {
    if (*(long *)(param_1 + 0xf0) == 0) {
      dVar3 = 0.0;
    }
    else {
      dVar3 = (double)*(long *)(*(long *)(param_1 + 0xf8) + 0x20);
    }
  }
  else {
    dVar3 = *(double *)(param_1 + 0xc0);
  }
  if (param_1[0x10] == '\x01') {
    if (*(long *)(param_1 + 0x148) == 0) {
      dVar4 = 0.0;
    }
    else {
      dVar4 = (double)*(long *)(*(long *)(param_1 + 0x150) + 0x20);
    }
  }
  else {
    dVar4 = *(double *)(param_1 + 0xd0);
  }
  dVar4 = (double)FUN_009553f0(dVar4 - dVar3,param_1 + 0x80);
  dVar5 = SQRT(*(double *)(param_1 + 0x1d0)) * DAT_001f5668 + -30.0;
  dVar3 = 1.0;
  if (1.0 <= dVar5) {
    dVar3 = dVar5;
  }
  dVar3 = (dVar4 + dVar3) * 1000.0;
  if (dVar3 != INFINITY) {
    if ((dVar3 == -INFINITY) || (uVar2 = (ulong)dVar3, (long)uVar2 < 1000)) {
      puVar1 = (ulong *)(param_1 + 0x1a8);
      if (param_1[0x1b0] == '\0') {
        puVar1 = (ulong *)&UNK_001f5738;
      }
      uVar2 = *puVar1;
      goto LAB_00954cc4;
    }
    if (uVar2 < 0x989681) goto LAB_00954cc4;
  }
  uVar2 = 10000000;
LAB_00954cc4:
  if (param_1[0x1b0] == '\x01') {
    *(ulong *)(param_1 + 0x1a8) = uVar2;
  }
  else {
    if ((ulong *)(param_1 + 0x1a8) == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(ulong *)(param_1 + 0x1a8) = uVar2;
    param_1[0x1b0] = '\x01';
  }
  return;
}


// ===== 00954d24  FUN_00954d24 =====

ulong FUN_00954d24(double param_1,long param_2,long param_3,ulong param_4)

{
  long *plVar1;
  int *piVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  double dVar10;
  
  uVar3 = FUN_00954bb4();
  lVar4 = (**(code **)(**(long **)(param_2 + 0x2f8) + 0x10))();
  lVar8 = *(long *)(param_2 + 0x1f0);
  lVar5 = 0x7fffffffffffffff;
  if (lVar4 != 0x7fffffffffffffff && lVar8 != -0x8000000000000000) {
    lVar5 = -0x8000000000000000;
    if (lVar8 != 0x7fffffffffffffff && lVar4 != -0x8000000000000000) {
      lVar5 = lVar4 - lVar8;
    }
  }
  plVar1 = (long *)(param_2 + 0x70);
  if (*(char *)(param_2 + 0x78) == '\0') {
    plVar1 = (long *)&UNK_001f4fb8;
  }
  if (*plVar1 < lVar5) {
    iVar6 = 0;
    *(undefined4 *)(param_2 + 0x1f8) = 0;
  }
  else {
    iVar6 = *(int *)(param_2 + 0x1f8);
  }
  uVar9 = *(ulong *)(param_2 + 0x1e0);
  uVar7 = uVar9;
  if ((long)uVar9 <= (long)(uVar3 + 10000)) {
    uVar7 = uVar3 + 10000;
  }
  if (uVar3 != 0x8000000000000000) {
    uVar9 = uVar7;
  }
  if (uVar3 != 0x7fffffffffffffff) {
    uVar3 = uVar9;
  }
  piVar2 = (int *)(param_2 + 100);
  if (*(char *)(param_2 + 0x68) == '\0') {
    piVar2 = (int *)&UNK_001fdc30;
  }
  uVar7 = uVar3;
  if (*piVar2 <= iVar6) {
    lVar5 = FUN_00955ac0(param_2 + 0x200);
    lVar4 = (long)(param_1 * (double)lVar5);
    lVar5 = lVar4;
    if (((param_4 & 1) != 0) && (lVar5 = param_3, lVar4 <= param_3)) {
      lVar5 = lVar4;
    }
    uVar7 = 0x7fffffffffffffff;
    if ((uVar3 != 0x7fffffffffffffff) && (uVar7 = 0x7fffffffffffffff, lVar5 != 0x7fffffffffffffff))
    {
      uVar7 = 0x8000000000000000;
      if (lVar5 != -0x8000000000000000 && uVar3 != 0x8000000000000000) {
        uVar7 = lVar5 + uVar3;
      }
    }
  }
  if (*(long *)(param_2 + 0x288) == 0) {
    dVar10 = 0.0;
  }
  else {
    dVar10 = *(double *)(param_2 + 0x2a0);
    if (dVar10 == INFINITY) goto LAB_00954f5c;
    if (dVar10 == -INFINITY) goto LAB_00954f3c;
  }
  uVar3 = (ulong)dVar10;
  if (0 < (long)uVar3) {
    if (uVar3 == 0x7fffffffffffffff) {
LAB_00954f5c:
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../api/units/frequency.h",0x44,"interval.IsFinite()",&DAT_001f5fa0);
    }
    uVar9 = 0;
    if (uVar3 != 0) {
      uVar9 = 1000000000 / uVar3;
    }
    if (199999 < uVar9) {
      uVar9 = 200000;
    }
    if (uVar3 < 0x30d41) {
      if (100000 < uVar3) {
        uVar7 = (ulong)((double)(uVar9 - 5000) * DAT_001f5860 * 0.19999999999999998 *
                       (double)(long)uVar7);
      }
    }
    else if (uVar3 < 0x3b9aca01) {
      return 0;
    }
  }
LAB_00954f3c:
  return uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU);
}


// ===== 00954f7c  FUN_00954f7c =====

void * FUN_00954f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                   undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                   undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  
  puVar7 = (undefined8 *)operator_new(0x140);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    if (puVar7 + 4 != (undefined8 *)0x0) {
      puVar7[5] = 0;
      puVar7[4] = 0;
      puVar7[7] = 0;
      puVar7[6] = 0;
      if (puVar7 + 8 != (undefined8 *)0x0) {
        puVar7[9] = 0;
        puVar7[8] = 0;
        puVar7[0xb] = 0;
        puVar7[10] = 0;
        if (puVar7 + 0xc != (undefined8 *)0x0) {
          puVar7[0xd] = 0;
          puVar7[0xc] = 0;
          puVar7[0xf] = 0;
          puVar7[0xe] = 0;
          if (puVar7 + 0x10 != (undefined8 *)0x0) {
            puVar7[0x11] = 0;
            puVar7[0x10] = 0;
            puVar7[0x13] = 0;
            puVar7[0x12] = 0;
            if (puVar7 + 0x14 != (undefined8 *)0x0) {
              puVar7[0x15] = 0;
              puVar7[0x14] = 0;
              puVar7[0x17] = 0;
              puVar7[0x16] = 0;
              if (puVar7 + 0x18 != (undefined8 *)0x0) {
                puVar7[0x19] = 0;
                puVar7[0x18] = 0;
                puVar7[0x1b] = 0;
                puVar7[0x1a] = 0;
                if (puVar7 + 0x1c != (undefined8 *)0x0) {
                  puVar7[0x1d] = 0;
                  puVar7[0x1c] = 0;
                  puVar7[0x1f] = 0;
                  puVar7[0x1e] = 0;
                  if (puVar7 + 0x20 != (undefined8 *)0x0) {
                    puVar7[0x21] = 0;
                    puVar7[0x20] = 0;
                    puVar7[0x23] = 0;
                    puVar7[0x22] = 0;
                    puVar1 = PTR_FUN_00d51f60;
                    if (puVar7 != (undefined8 *)0xfffffffffffffee0) {
                      *puVar7 = param_1;
                      puVar7[1] = param_2;
                      puVar2 = PTR_FUN_00d51f68;
                      puVar7[2] = puVar1;
                      puVar7[3] = puVar2;
                      puVar3 = PTR_FUN_00d51fc8;
                      puVar7[4] = param_3;
                      puVar7[5] = param_4;
                      puVar4 = PTR_FUN_00d51fd0;
                      puVar7[6] = puVar3;
                      puVar7[7] = puVar4;
                      puVar5 = PTR_FUN_00d520d8;
                      puVar7[8] = param_5;
                      puVar7[9] = param_6;
                      puVar6 = PTR_FUN_00d520e0;
                      puVar7[0xf] = puVar4;
                      puVar7[0x10] = param_9;
                      puVar7[0x11] = param_10;
                      puVar7[0x12] = puVar3;
                      puVar7[0xe] = puVar3;
                      puVar7[10] = puVar5;
                      puVar7[0xb] = puVar6;
                      puVar7[0x13] = puVar4;
                      puVar7[0x14] = param_11;
                      puVar7[0x15] = param_12;
                      puVar7[0x16] = puVar3;
                      puVar7[0xc] = param_7;
                      puVar7[0xd] = param_8;
                      puVar7[0x23] = puVar6;
                      puVar7[0x17] = puVar4;
                      puVar7[0x18] = param_13;
                      puVar7[0x19] = param_14;
                      puVar7[0x1a] = puVar3;
                      puVar7[0x1b] = puVar4;
                      puVar7[0x1c] = param_15;
                      puVar7[0x1d] = param_16;
                      puVar7[0x1e] = puVar1;
                      puVar7[0x1f] = puVar2;
                      puVar7[0x20] = param_17;
                      puVar7[0x21] = param_18;
                      puVar7[0x22] = puVar5;
                      puVar1 = PTR_FUN_00d51f70;
                      puVar7[0x24] = param_19;
                      puVar7[0x25] = param_20;
                      puVar2 = PTR_FUN_00d51f78;
                      puVar7[0x26] = puVar1;
                      puVar7[0x27] = puVar2;
                      pvVar8 = operator_new(0x18);
                      local_78 = puVar7;
                      local_70 = puVar7 + 0x28;
                      local_68 = puVar7 + 0x28;
                      FUN_0066597c(pvVar8,&local_78);
                      if (local_78 != (undefined8 *)0x0) {
                        uVar10 = (ulong)((long)local_70 + (-0x20 - ((long)local_70 << 0x3b))) >> 5;
                        uVar9 = (ulong)(((long)local_78 - (long)local_70 << 0x3b) -
                                       ((long)local_78 - (long)local_70)) >> 5;
                        if (uVar10 <= uVar9) {
                          uVar9 = uVar10;
                        }
                        puVar7 = local_70;
                        if ((1 < uVar9) &&
                           ((((int)local_78 - (int)local_70 | -(int)local_70) & 0x1fU) == 0)) {
                          uVar9 = uVar9 & 0x7fffffffffffffe;
                          puVar7 = local_70 + uVar9 * -4;
                          do {
                            uVar9 = uVar9 - 2;
                          } while (uVar9 != 0);
                        }
                        while (puVar7 != local_78) {
                          puVar7 = puVar7 + -4;
                          if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                            std::__Cr::__libcpp_verbose_abort
                                      ("%s",
                                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                                      );
                          }
                        }
                        local_70 = local_78;
                        operator_delete(local_78);
                      }
                      return pvVar8;
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
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 009551d8  FUN_009551d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009551d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = _UNK_001f4dc8;
  uVar3 = _DAT_001f4dc0;
  uVar2 = _UNK_001f1dc8;
  uVar1 = _DAT_001f1dc0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0x3f1a36e2eb1c432d;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[6] = uVar4;
  param_1[5] = uVar3;
  param_1[7] = 0x3ddb7cdfd9d7bdbb;
  return;
}


// ===== 00955224  FUN_00955224 =====

void FUN_00955224(double param_1,double param_2,double param_3,double param_4,double *param_5)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  if ((1.0 <= param_3) && (0.0 < param_4)) {
    dVar8 = param_5[4];
    dVar7 = param_5[3];
    dVar9 = param_5[1];
    dVar10 = *param_5;
    dVar6 = param_5[6] + param_5[2];
    dVar4 = param_5[4];
    dVar5 = param_5[7] + param_5[5];
    param_5[2] = dVar6;
    dVar11 = param_2 * dVar6 + dVar7;
    param_5[5] = dVar5;
    dVar12 = dVar5 + param_2 * dVar4;
    dVar2 = exp(-ABS(param_2) / param_3);
    dVar3 = SQRT(param_4) * (dVar2 * 300.0 + 1.0);
    dVar2 = 1.0;
    if (1.0 <= dVar3) {
      dVar2 = dVar3;
    }
    dVar2 = dVar2 + param_2 * dVar11 + dVar12;
    if (((DAT_001f5378 <= dVar2) || (dVar2 < 0.0 != NAN(dVar2))) &&
       ((dVar2 == DAT_001f5d78 || dVar2 < DAT_001f5d78 != (NAN(dVar2) || NAN(DAT_001f5d78)) ||
        (0.0 < dVar2)))) {
      dVar11 = dVar11 / dVar2;
      param_1 = param_1 - (param_2 * dVar10 + dVar9);
      dVar12 = dVar12 / dVar2;
      dVar10 = dVar10 + param_1 * dVar11;
      bVar1 = dVar10 < DAT_001f5658;
      *param_5 = dVar10;
      param_5[1] = dVar9 + param_1 * dVar12;
      if (bVar1) {
        *param_5 = 1e-06;
      }
      dVar2 = 1.0 - param_2 * dVar11;
      param_5[3] = dVar7 * dVar2 - dVar5 * dVar11;
      param_5[2] = dVar6 * dVar2 - dVar8 * dVar11;
      param_5[5] = dVar5 * (1.0 - dVar12) - dVar7 * param_2 * dVar12;
      param_5[4] = dVar4 * (1.0 - dVar12) - dVar6 * param_2 * dVar12;
    }
  }
  return;
}


// ===== 009553dc  FUN_009553dc =====

undefined1  [16] FUN_009553dc(double param_1,double *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = param_1 * *param_2 + param_2[1];
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 009553f0  FUN_009553f0 =====

undefined1  [16] FUN_009553f0(double param_1,double *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = param_1 * *param_2;
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 00955400  FUN_00955400 =====

void FUN_00955400(undefined1 *param_1)

{
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined8 *)(param_1 + 0x28) = 10;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 10;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}


// ===== 0095543c  FUN_0095543c =====

void FUN_0095543c(undefined1 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  *param_1 = 0;
  uVar2 = *(ulong *)(param_1 + 0x28) * 4;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x20) = 1;
  if (7 < (long)uVar2) {
    puVar1 = (undefined8 *)(param_1 + 0x30);
    if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
      puVar1 = *(undefined8 **)(param_1 + 0x30);
    }
    memset(puVar1,0,uVar2 & 0x7ffffffffffffff8);
  }
  uVar2 = *(ulong *)(param_1 + 0x58) * 4;
  if (7 < (long)uVar2) {
    puVar1 = (undefined8 *)(param_1 + 0x60);
    if ((*(ulong *)(param_1 + 0x58) & 1) != 0) {
      puVar1 = *(undefined8 **)(param_1 + 0x60);
    }
    memset(puVar1,0,uVar2 & 0x7ffffffffffffff8);
    return;
  }
  return;
}


// ===== 009554d4  FUN_009554d4 =====

void FUN_009554d4(byte *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  double dVar10;
  
  if ((*param_1 & 1) == 0) {
    if (param_2 == 0) {
      return;
    }
    *param_1 = 1;
  }
  dVar10 = 0.0;
  uVar4 = *(uint *)(param_1 + 0x20);
  lVar1 = param_2;
  if (2999999 < param_2) {
    lVar1 = 3000000;
  }
  if (1 < uVar4) {
    dVar10 = (double)(uVar4 - 1) / (double)uVar4;
  }
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  iVar9 = 0x23;
  if (uVar4 + 1 < 0x23) {
    iVar9 = uVar4 + 1;
  }
  *(int *)(param_1 + 0x20) = iVar9;
  lVar7 = (long)(dVar10 * (double)lVar2);
  lVar8 = (long)((1.0 - dVar10) * (double)lVar1);
  if (lVar7 == 0x7fffffffffffffff || lVar8 == 0x7fffffffffffffff) {
    param_1[8] = 0xff;
    param_1[9] = 0xff;
    param_1[10] = 0xff;
    param_1[0xb] = 0xff;
    param_1[0xc] = 0xff;
    param_1[0xd] = 0xff;
    param_1[0xe] = 0xff;
    param_1[0xf] = 0x7f;
    uVar5 = 0x8000000000000000;
LAB_00955580:
    uVar6 = -(-uVar5 / 1000) - (ulong)(500 < -uVar5 % 1000);
    goto LAB_00955610;
  }
  uVar5 = 0x8000000000000000;
  if (lVar7 == -0x8000000000000000 || lVar8 == -0x8000000000000000) {
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0x80;
LAB_009555e0:
    uVar5 = 0x7fffffffffffffff;
  }
  else {
    lVar7 = lVar7 + lVar8;
    *(long *)(param_1 + 8) = lVar7;
    if (lVar7 == -0x8000000000000000) goto LAB_009555e0;
    if (((param_2 == -0x8000000000000000) || (lVar7 == 0x7fffffffffffffff)) ||
       (uVar5 = lVar1 - lVar7, (long)uVar5 < 0)) goto LAB_00955580;
  }
  uVar6 = uVar5 / 1000;
  if (499 < uVar5 % 1000) {
    uVar6 = uVar6 + 1;
  }
LAB_00955610:
  lVar7 = lVar1;
  if (lVar1 <= *(long *)(param_1 + 0x18)) {
    lVar7 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar7;
  *(long *)(param_1 + 0x10) =
       (long)(dVar10 * (double)lVar3 + (1.0 - dVar10) * (double)(long)(uVar6 * uVar6));
  uVar5 = FUN_009556a4(param_1,lVar1);
  if ((uVar5 & 1) == 0) {
    *(long *)(param_1 + 8) = lVar2;
    *(long *)(param_1 + 0x10) = lVar3;
    return;
  }
  FUN_009558e0(param_1,lVar1);
  return;
}


// ===== 009556a4  FUN_009556a4 =====

undefined8 FUN_009556a4(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  long local_8;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar7 = 0x7fffffffffffffff;
  if ((lVar3 != 0x7fffffffffffffff) && (param_2 != -0x8000000000000000)) {
    lVar7 = -0x8000000000000000;
    if (param_2 != 0x7fffffffffffffff && lVar3 != -0x8000000000000000) {
      lVar7 = lVar3 - param_2;
    }
  }
  dVar11 = SQRT((double)*(long *)(param_1 + 0x10)) * 2.5 * 1000.0;
  if (dVar11 != INFINITY) {
    lVar3 = -lVar7;
    if (-1 < lVar7) {
      lVar3 = lVar7;
    }
    if ((long)dVar11 < lVar3) {
      puVar4 = (ulong *)(param_1 + 0x28);
      uVar6 = *puVar4;
      uVar2 = (uint)((ulong)lVar7 >> 0x3f) ^ 1;
      local_8 = param_2;
      if (uVar6 < 2) {
        uVar5 = 0;
        if ((uVar6 & 1) == 0) goto LAB_00955794;
LAB_009557ac:
        if (uVar5 != *(ulong *)(param_1 + 0x38)) {
          lVar7 = *(long *)(param_1 + 0x30);
          goto LAB_009557bc;
        }
        FUN_00955acc(puVar4,&local_8);
        uVar6 = *puVar4;
LAB_009557d4:
        *(char *)(param_1 + 0x24) = (char)uVar2;
        if (uVar6 < 10) {
          return 0;
        }
        uVar5 = uVar6 >> 1;
      }
      else {
        if (*(byte *)(param_1 + 0x24) != uVar2) {
          uVar5 = 0;
          *puVar4 = uVar6 & 1;
          if ((int)(uVar6 & 1) != 0) goto LAB_009557ac;
LAB_00955794:
          lVar7 = param_1 + 0x30;
LAB_009557bc:
          plVar8 = (long *)(lVar7 + uVar5 * 8);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *plVar8 = param_2;
          uVar6 = *puVar4 + 2;
          *puVar4 = uVar6;
          goto LAB_009557d4;
        }
        uVar5 = uVar6 >> 1;
        if (uVar6 < 10) {
          if ((uVar6 & 1) != 0) goto LAB_009557ac;
          goto LAB_00955794;
        }
      }
      lVar7 = uVar5 << 3;
      uVar6 = uVar6 & 1;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      plVar8 = (long *)(param_1 + 0x30);
      if (uVar6 != 0) {
        plVar8 = (long *)*(long *)(param_1 + 0x30);
      }
      if (lVar7 == 0) {
        dVar11 = 0.0;
      }
      else {
        lVar3 = 0;
        lVar9 = 0;
        do {
          lVar10 = *plVar8;
          if (lVar9 < lVar10) {
            *(long *)(param_1 + 0x18) = lVar10;
            lVar9 = lVar10;
            lVar10 = *plVar8;
          }
          if (lVar3 == 0x7fffffffffffffff) {
            lVar3 = 0x7fffffffffffffff;
          }
          else {
            lVar1 = -0x8000000000000000;
            if (lVar10 != -0x8000000000000000 && lVar3 != -0x8000000000000000) {
              lVar1 = lVar10 + lVar3;
            }
            lVar3 = 0x7fffffffffffffff;
            if (lVar10 != 0x7fffffffffffffff) {
              lVar3 = lVar1;
            }
          }
          lVar7 = lVar7 + -8;
          plVar8 = plVar8 + 1;
          *(long *)(param_1 + 8) = lVar3;
        } while (lVar7 != 0);
        dVar11 = (double)lVar3;
      }
      *(undefined4 *)(param_1 + 0x20) = 6;
      *(long *)(param_1 + 8) = (long)(dVar11 / (double)uVar5);
      goto LAB_0095575c;
    }
  }
  uVar6 = *(ulong *)(param_1 + 0x28) & 1;
LAB_0095575c:
  *(ulong *)(param_1 + 0x28) = uVar6;
  return 1;
}


// ===== 009558e0  FUN_009558e0 =====

undefined8 FUN_009558e0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  double dVar11;
  undefined8 local_18;
  
  lVar4 = *(long *)(param_1 + 0x18);
  dVar11 = SQRT((double)*(long *)(param_1 + 0x10)) * 3.5 * 1000.0;
  lVar8 = 0x7fffffffffffffff;
  if ((lVar4 != 0x7fffffffffffffff) &&
     (lVar9 = *(long *)(param_1 + 8), lVar9 != -0x8000000000000000)) {
    lVar8 = -0x8000000000000000;
    if (lVar9 != 0x7fffffffffffffff && lVar4 != -0x8000000000000000) {
      lVar8 = lVar4 - lVar9;
    }
  }
  puVar5 = (ulong *)(param_1 + 0x58);
  uVar6 = *puVar5;
  if (dVar11 == INFINITY || lVar8 <= (long)dVar11) {
    uVar7 = uVar6 & 1;
    goto LAB_00955a70;
  }
  if (uVar6 < 10) {
    local_18 = param_2;
    if ((uVar6 & 1) == 0) {
      lVar8 = param_1 + 0x60;
LAB_00955998:
      puVar1 = (undefined8 *)(lVar8 + (uVar6 >> 1) * 8);
      if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *puVar1 = param_2;
      uVar6 = *puVar5 + 2;
      *puVar5 = uVar6;
    }
    else {
      if (uVar6 >> 1 != *(ulong *)(param_1 + 0x68)) {
        lVar8 = *(long *)(param_1 + 0x60);
        goto LAB_00955998;
      }
      FUN_00955acc(puVar5,&local_18);
      uVar6 = *puVar5;
    }
    if (uVar6 < 10) {
      return 1;
    }
  }
  uVar7 = uVar6 & 1;
  *(undefined8 *)(param_1 + 0x18) = 0;
  lVar8 = (uVar6 >> 1) << 3;
  *(undefined8 *)(param_1 + 8) = 0;
  plVar10 = (long *)(param_1 + 0x60);
  if (uVar7 != 0) {
    plVar10 = *(long **)(param_1 + 0x60);
  }
  if (lVar8 == 0) {
    dVar11 = 0.0;
  }
  else {
    lVar4 = 0;
    lVar9 = 0;
    do {
      lVar3 = *plVar10;
      if (lVar9 < lVar3) {
        *(long *)(param_1 + 0x18) = lVar3;
        lVar9 = lVar3;
        lVar3 = *plVar10;
      }
      if (lVar4 == 0x7fffffffffffffff) {
        lVar4 = 0x7fffffffffffffff;
      }
      else {
        lVar2 = -0x8000000000000000;
        if (lVar3 != -0x8000000000000000 && lVar4 != -0x8000000000000000) {
          lVar2 = lVar3 + lVar4;
        }
        lVar4 = 0x7fffffffffffffff;
        if (lVar3 != 0x7fffffffffffffff) {
          lVar4 = lVar2;
        }
      }
      lVar8 = lVar8 + -8;
      plVar10 = plVar10 + 1;
      *(long *)(param_1 + 8) = lVar4;
    } while (lVar8 != 0);
    dVar11 = (double)lVar4;
  }
  *(undefined4 *)(param_1 + 0x20) = 6;
  *(long *)(param_1 + 8) = (long)(dVar11 / (double)(uVar6 >> 1));
LAB_00955a70:
  *puVar5 = uVar7;
  return 1;
}


// ===== 00955ac0  FUN_00955ac0 =====

undefined8 FUN_00955ac0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 00955acc  FUN_00955acc =====

undefined8 * FUN_00955acc(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  
  puVar12 = param_1 + 1;
  uVar11 = *param_1;
  if ((uVar11 & 1) == 0) {
    uVar10 = 10;
  }
  else {
    if ((param_1[2] >> 0x3c & 7) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar12 = (ulong *)param_1[1];
    uVar10 = param_1[2] << 1;
  }
  uVar13 = uVar11 >> 1;
  pvVar3 = operator_new(uVar10 << 3);
  puVar1 = (undefined8 *)((long)pvVar3 + uVar13 * 8);
  if (puVar1 == (undefined8 *)0x0) {
LAB_00955c44:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *puVar1 = *param_2;
  if (uVar13 != 0) {
    uVar7 = uVar13 - 1;
    uVar14 = (ulong)-(long)pvVar3 >> 3;
    if (uVar7 <= (ulong)-(long)pvVar3 >> 3) {
      uVar14 = uVar7;
    }
    if (uVar14 < 0x1e) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      uVar9 = (ulong)-(long)pvVar3 >> 3;
      if (uVar7 <= uVar9) {
        uVar9 = uVar7;
      }
      if (((((-(long)pvVar3 & 7U) == 0) && (pvVar3 <= (void *)((long)pvVar3 + uVar9 * 8))) &&
          (puVar12 <= puVar12 + uVar9)) && (0x1f < (ulong)((long)pvVar3 - (long)puVar12))) {
        puVar6 = (ulong *)((long)pvVar3 + 0x10);
        uVar7 = uVar14 + 1 & 3;
        uVar9 = 4;
        if (uVar7 != 0) {
          uVar9 = uVar7;
        }
        puVar8 = puVar12 + 2;
        lVar4 = (uVar14 + 1) - uVar9;
        puVar12 = puVar12 + lVar4;
        lVar5 = lVar4;
        do {
          puVar2 = puVar8 + -1;
          uVar14 = puVar8[-2];
          uVar9 = puVar8[1];
          uVar7 = *puVar8;
          lVar5 = lVar5 + -4;
          puVar8 = puVar8 + 4;
          puVar6[-1] = *puVar2;
          puVar6[-2] = uVar14;
          puVar6[1] = uVar9;
          *puVar6 = uVar7;
          puVar6 = puVar6 + 4;
        } while (lVar5 != 0);
      }
    }
    lVar5 = uVar13 - lVar4;
    puVar6 = (ulong *)((long)pvVar3 + lVar4 * 8);
    do {
      if (puVar6 == (ulong *)0x0) goto LAB_00955c44;
      lVar5 = lVar5 + -1;
      *puVar6 = *puVar12;
      puVar6 = puVar6 + 1;
      puVar12 = puVar12 + 1;
    } while (lVar5 != 0);
  }
  if ((uVar11 & 1) != 0) {
    operator_delete((void *)param_1[1]);
    uVar11 = *param_1;
  }
  param_1[1] = (ulong)pvVar3;
  param_1[2] = uVar10;
  *param_1 = (uVar11 | 1) + 2;
  return puVar1;
}


// ===== 00955c5c  FUN_00955c5c =====

void FUN_00955c5c(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[8] = 0;
  param_1[0x24] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x20] = 0;
  return;
}


// ===== 00955c78  FUN_00955c78 =====

undefined1  [16] FUN_00955c78(long *param_1,uint param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  if ((*(byte *)((long)param_1 + 0x24) & 1) == 0) {
    uVar6 = (ulong)param_2;
  }
  else {
    uVar3 = param_2 - *(uint *)(param_1 + 4);
    bVar1 = *(uint *)(param_1 + 4) <= param_2 && uVar3 != 0;
    if (uVar3 != 0x80000000) {
      bVar1 = uVar3 != 0xffffffff && (int)(uVar3 + 1) < 0 == SCARRY4(uVar3,1);
    }
    uVar6 = (ulong)uVar3;
    if (!bVar1) {
      uVar6 = (ulong)uVar3 | 0xffffffff00000000;
    }
    uVar6 = uVar6 + param_1[3];
  }
  param_1[3] = uVar6;
  *(uint *)(param_1 + 4) = param_2;
  *(undefined1 *)((long)param_1 + 0x24) = 1;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    lVar5 = 0;
    *param_1 = param_3;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    lVar4 = param_1[2];
    if ((long)uVar6 < lVar4) {
LAB_00955ce4:
      return ZEXT816(0);
    }
    uVar3 = (uint)lVar4;
    if (param_2 - uVar3 == -0x80000000) {
      if (param_2 <= uVar3) goto LAB_00955ce4;
    }
    else {
      uVar2 = 0;
      lVar5 = 0;
      if ((param_2 == uVar3) || ((int)(param_2 - uVar3) < 0)) goto LAB_00955d8c;
    }
    lVar5 = 0x7fffffffffffffff;
    if ((param_3 != 0x7fffffffffffffff) && (lVar7 = *param_1, lVar7 != -0x8000000000000000)) {
      if ((param_3 == -0x8000000000000000) || (lVar7 == 0x7fffffffffffffff)) {
LAB_00955d7c:
        lVar5 = -0x8000000000000000;
      }
      else {
        lVar7 = param_3 - lVar7;
        if (lVar7 != 0x7fffffffffffffff) {
          if (lVar7 == -0x8000000000000000) goto LAB_00955d7c;
          lVar5 = SUB168(SEXT816((long)((uVar6 - lVar4) * 1000000000)) *
                         SEXT816(-0x5f71977b826f3a1b),8);
          lVar5 = lVar7 + ((lVar5 >> 0x19) - (lVar5 >> 0x3f));
        }
      }
    }
    *param_1 = param_3;
  }
  uVar2 = 1;
  param_1[2] = uVar6;
LAB_00955d8c:
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = lVar5;
  return auVar8;
}


// ===== 00955de4  FUN_00955de4 =====

void FUN_00955de4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}


// ===== 00955df0  FUN_00955df0 =====

void FUN_00955df0(long *param_1,undefined8 *param_2,int param_3,int param_4,long param_5,
                 undefined4 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  
  lVar2 = (**(code **)(*(long *)*param_2 + 0x10))();
  lVar3 = (**(code **)(*(long *)param_2[1] + 0x18))((long *)param_2[1],param_3,lVar2);
  lVar4 = (**(code **)(*(long *)param_2[1] + 0x20))((long *)param_2[1],lVar3,lVar2,param_6);
  if ((param_3 == param_4) || (-5000 < lVar4)) {
    if (param_5 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__algorithm/clamp.h:29: libc++ Hardening assertion !__comp(__hi, __lo) failed: Bad bounds passed to std::clamp\n"
                );
    }
    if (lVar4 <= param_5) {
      param_5 = lVar4;
    }
    lVar1 = 0;
    if (-1 < lVar4) {
      lVar1 = param_5;
    }
    lVar4 = 0x7fffffffffffffff;
    if ((lVar2 != 0x7fffffffffffffff) && (lVar1 != 0x7fffffffffffffff)) {
      lVar4 = -0x8000000000000000;
      if (lVar1 != -0x8000000000000000 && lVar2 != -0x8000000000000000) {
        lVar4 = lVar1 + lVar2;
      }
    }
    *param_1 = lVar4;
    param_1[1] = lVar3;
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
    *(undefined1 *)param_1 = 0;
  }
  *(undefined1 *)(param_1 + 2) = uVar5;
  return;
}


// ===== 00955f10  FUN_00955f10 =====

void FUN_00955f10(undefined8 *param_1,long param_2)

{
  long lVar1;
  void *__s;
  ulong uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00632a3c();
    }
    uVar2 = param_2 - 1U >> 6;
    lVar1 = uVar2 + 1;
    __s = operator_new(lVar1 * 8);
    *param_1 = __s;
    param_1[2] = lVar1;
    memset(__s,0,uVar2 * 8 + 8);
    param_1[1] = param_2;
  }
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  return;
}


// ===== 00955f9c  FUN_00955f9c =====

void FUN_00955f9c(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 00955fbc  FUN_00955fbc =====

void FUN_00955fbc(long *param_1,ulong param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  
  puVar6 = local_40;
  uVar7 = param_1[1];
  *(undefined4 *)(param_1 + 7) = param_3;
  uVar2 = 0;
  if (uVar7 != 0) {
    uVar2 = param_2 / uVar7;
  }
  param_1[5] = param_2;
  uVar9 = param_2 - uVar2 * uVar7;
  iVar8 = (int)uVar9;
  uVar2 = uVar9 & 0x7fffffff;
  if (iVar8 == -1 || iVar8 + 1 < 0 != SCARRY4(iVar8,1)) {
    uVar2 = uVar9 + uVar7;
  }
  uVar9 = (ulong)(int)uVar2;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)((long)param_1 + 0x3c) = 1;
  if ((char)param_1[4] != '\x01') goto LAB_00956130;
  uVar10 = param_1[3];
  if ((long)(param_2 - uVar10) < (long)uVar7) {
    iVar8 = 0;
    if (uVar7 != 0) {
      iVar8 = (int)(uVar10 / uVar7);
    }
    uVar3 = (int)uVar10 - iVar8 * (int)uVar7;
    uVar5 = uVar3 & 0x7fffffff;
    if (uVar3 == 0xffffffff || (int)(uVar3 + 1) < 0 != SCARRY4(uVar3,1)) {
      uVar5 = uVar3 + (int)uVar7;
    }
    lVar11 = (long)(int)uVar5;
    lVar4 = lVar11 + -0x3f;
    if (-1 < lVar11) {
      lVar4 = lVar11;
    }
    lVar1 = lVar4 + 0x3f;
    if (-1 < lVar4) {
      lVar1 = lVar4;
    }
    lVar11 = *param_1;
    lVar4 = lVar11 + (lVar1 >> 6) * 8 + (ulong)((~uVar5 & 0x3f) == 0) * 8;
    if ((int)uVar2 <= (int)uVar5) {
      local_3c[0] = 0;
      FUN_00632a54(lVar4,uVar5 + 1 & 0x3f,lVar11 + (uVar7 >> 6) * 8,uVar7 & 0x3f,local_3c);
      lVar4 = *param_1;
      uVar7 = uVar9 - 0x3f;
      if (-1 < (long)uVar9) {
        uVar7 = uVar9;
      }
      local_40[0] = 0;
      uVar10 = uVar7 + 0x3f;
      if (-1 < (long)uVar7) {
        uVar10 = uVar7;
      }
      lVar11 = lVar4 + ((long)uVar10 >> 6) * 8;
      uVar7 = uVar2;
      goto LAB_00956128;
    }
    local_38[0] = 0;
    uVar7 = uVar9 - 0x3f;
    if (-1 < (long)uVar9) {
      uVar7 = uVar9;
    }
    uVar5 = uVar5 + 1 & 0x3f;
    puVar6 = local_38;
    uVar10 = uVar7 + 0x3f;
    if (-1 < (long)uVar7) {
      uVar10 = uVar7;
    }
    lVar11 = lVar11 + ((long)uVar10 >> 6) * 8;
    uVar7 = uVar2;
  }
  else {
    lVar4 = *param_1;
    local_34[0] = 0;
    puVar6 = local_34;
    lVar11 = lVar4 + (uVar7 >> 6) * 8;
LAB_00956128:
    uVar5 = 0;
  }
  FUN_00632a54(lVar4,uVar5,lVar11,uVar7 & 0x3f,puVar6);
LAB_00956130:
  if (uVar9 < (ulong)param_1[1]) {
    uVar7 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(*param_1 + uVar7) = *(ulong *)(*param_1 + uVar7) | 1L << (uVar2 & 0x3f);
    param_1[3] = param_2;
    *(undefined1 *)(param_1 + 4) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector_bool.h:297: libc++ Hardening assertion __n < size() failed: vector<bool>::operator[] index out of bounds\n"
            );
}


// ===== 00956190  FUN_00956190 =====

uint FUN_00956190(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  
  if ((char)param_1[4] == '\x01') {
    uVar2 = param_1[1];
    if ((long)(param_1[3] - uVar2) < (long)param_2) {
      if ((long)param_2 <= param_1[3]) {
        uVar1 = 0;
        if (uVar2 != 0) {
          uVar1 = param_2 / uVar2;
        }
        param_2 = param_2 - uVar1 * uVar2;
        iVar3 = (int)param_2;
        uVar1 = param_2 & 0x7fffffff;
        if (iVar3 == -1 || iVar3 + 1 < 0 != SCARRY4(iVar3,1)) {
          uVar1 = param_2 + uVar2;
        }
        if ((ulong)(long)(int)uVar1 < uVar2) {
          return (uint)(*(ulong *)(*param_1 + ((ulong)(long)(int)uVar1 >> 6) * 8) >> (uVar1 & 0x3f))
                 & 1;
        }
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector_bool.h:302: libc++ Hardening assertion __n < size() failed: vector<bool>::operator[] index out of bounds\n"
                  );
      }
    }
    else {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../modules/video_coding/utility/decoded_frames_history.cc",
                     0x1f2,
                     "Referencing a frame out of the window. Assuming it was undecoded to avoid artifacts."
                    );
      }
    }
  }
  return 0;
}


// ===== 0095624c  FUN_0095624c =====

void FUN_0095624c(long *param_1)

{
  undefined1 local_4 [4];
  
  if (*(char *)((long)param_1 + 0x3c) == '\x01') {
    *(undefined1 *)((long)param_1 + 0x3c) = 0;
  }
  if ((char)param_1[6] == '\x01') {
    *(undefined1 *)(param_1 + 6) = 0;
  }
  local_4[0] = 0;
  FUN_00632a54(*param_1,0,*param_1 + ((ulong)param_1[1] >> 6) * 8,param_1[1] & 0x3f,local_4);
  if ((char)param_1[4] == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}


// ===== 009562c0  FUN_009562c0 =====

undefined1  [16] FUN_009562c0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x28);
}


// ===== 009562d0  FUN_009562d0 =====

undefined8 FUN_009562d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}


// ===== 009562dc  FUN_009562dc =====

long FUN_009562dc(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_1 != 0) {
    if (-1 < param_1) {
      uVar2 = 0x8000000000000000;
      if (param_2 != 0x7fffffffffffffff) {
        uVar2 = param_1 - param_2;
      }
      uVar1 = 0x7fffffffffffffff;
      if (param_2 != -0x8000000000000000 && param_1 != 0x7fffffffffffffff) {
        uVar1 = uVar2;
      }
      uVar2 = -uVar1;
      if (-1 < (long)uVar1) {
        uVar2 = uVar1;
      }
      if ((long)uVar2 < 0x989681) {
        lVar3 = 0;
      }
      else {
        uVar2 = FUN_004022fc();
        if ((uVar2 & 1) == 0) {
          uVar2 = uVar1 / 1000;
          if (499 < uVar1 % 1000) {
            uVar2 = uVar2 + 1;
          }
          if ((uVar1 & 0x8000000000000000) != 0) {
            uVar2 = -(-uVar1 / 1000) - (ulong)(500 < -uVar1 % 1000);
          }
          FUN_00623bb0(&DAT_00215708,"../../modules/video_coding/frame_helpers.cc",0x15a,
                       "Frame has bad render timing because it is out of the delay bounds (frame_delay_ms="
                       ,uVar2,", kMaxVideoDelay_ms=",10000,&DAT_001ca519);
        }
        lVar3 = 1;
      }
      return lVar3;
    }
    param_1 = 1;
  }
  return param_1;
}


// ===== 009563e8  FUN_009563e8 =====

bool FUN_009563e8(ulong param_1)

{
  ulong uVar1;
  
  if ((10000000 < (long)param_1) && (uVar1 = FUN_004022fc(), (uVar1 & 1) == 0)) {
    uVar1 = param_1 / 1000;
    if (499 < param_1 % 1000) {
      uVar1 = uVar1 + 1;
    }
    FUN_00623bb0(&DAT_00215708,"../../modules/video_coding/frame_helpers.cc",0x1b2,
                 "Target video delay is too large. (target_video_delay_ms=",uVar1,
                 ", kMaxVideoDelay_ms=",10000,&DAT_001ca519);
  }
  return 10000000 < (long)param_1;
}


// ===== 00956494  FUN_00956494 =====

ulong FUN_00956494(ulong *param_1)

{
  void *pvVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  long lVar15;
  long lVar16;
  long *plVar17;
  ulong *puVar18;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  void *local_88;
  void *local_80;
  void *local_78;
  byte local_70;
  long *local_48;
  ulong *puVar14;
  
  puVar18 = param_1 + 1;
  uVar11 = *param_1;
  uVar9 = uVar11 >> 1;
  if (uVar9 == 1) {
    if ((uVar11 & 1) != 0) {
      puVar18 = (ulong *)*puVar18;
    }
    uVar9 = *puVar18;
    *puVar18 = 0;
    return uVar9;
  }
  puVar12 = puVar18;
  if ((uVar11 & 1) != 0) {
    puVar12 = (ulong *)*puVar18;
  }
  if (uVar9 * 8 == 0) {
    lVar16 = 0;
  }
  else {
    uVar10 = uVar9 * 8 - 8;
    if (uVar10 == 0) {
      lVar16 = 0;
      puVar13 = puVar12;
    }
    else {
      lVar15 = 0;
      lVar16 = 0;
      puVar13 = puVar12 + 1;
      uVar10 = (uVar10 >> 3) + 1;
      uVar4 = uVar10 & 0x3ffffffffffffffe;
      do {
        puVar14 = puVar13 + -1;
        uVar2 = *puVar13;
        uVar4 = uVar4 - 2;
        puVar13 = puVar13 + 2;
        lVar15 = *(long *)(*puVar14 + 0x98) + lVar15;
        lVar16 = *(long *)(uVar2 + 0x98) + lVar16;
      } while (uVar4 != 0);
      lVar16 = lVar16 + lVar15;
      puVar13 = puVar12 + (uVar10 & 0x3ffffffffffffffe);
      if (uVar10 == (uVar10 & 0x3ffffffffffffffe)) goto LAB_00956578;
    }
    do {
      puVar14 = puVar13 + 1;
      lVar16 = *(long *)(*puVar13 + 0x98) + lVar16;
      puVar13 = puVar14;
    } while (puVar14 != puVar12 + uVar9);
  }
LAB_00956578:
  if (1 < uVar11) {
    puVar12 = puVar18;
    if ((uVar11 & 1) != 0) {
      if (uVar9 == 0) goto LAB_00956888;
      puVar12 = (ulong *)*puVar18;
    }
    uVar11 = *puVar12;
    uVar9 = puVar12[uVar9 - 1];
    *puVar12 = 0;
    local_48 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    FUN_007bc600(&local_48,lVar16);
    pvVar5 = (void *)FUN_007bc78c(local_48);
    uVar8 = 0;
    if ((*(ulong *)(uVar11 + 0xc0) & 0x100000000) != 0) {
      uVar8 = (undefined4)*(ulong *)(uVar11 + 0xc0);
    }
    FUN_007bcb6c(uVar11 + 8,uVar8,*(undefined8 *)(uVar11 + 0x98));
    if (*(long **)(uVar11 + 0x90) == (long *)0x0) {
      pvVar6 = (void *)0x0;
    }
    else {
      pvVar6 = (void *)(**(code **)(**(long **)(uVar11 + 0x90) + 0x20))();
    }
    memcpy(pvVar5,pvVar6,*(size_t *)(uVar11 + 0x98));
    uVar10 = *(ulong *)(uVar9 + 0xc0);
    lVar16 = *(long *)(uVar11 + 0x98);
    *(undefined1 *)(uVar11 + 0xc4) = 1;
    uVar8 = 0;
    if ((uVar10 & 0x100000000) != 0) {
      uVar8 = (int)uVar10;
    }
    *(undefined4 *)(uVar11 + 0xc0) = uVar8;
    local_a0 = local_a0 & 0xffffffffffffff00;
    local_70 = 0;
    if (*(char *)(uVar9 + 0x9d0) == '\x01') {
      uStack_98 = *(undefined8 *)(uVar9 + 0x9a8);
      local_a0 = *(ulong *)(uVar9 + 0x9a0);
      local_90 = *(undefined8 *)(uVar9 + 0x9b0);
      local_80 = (void *)0x0;
      local_78 = (void *)0x0;
      local_88 = (void *)0x0;
      pvVar6 = *(void **)(uVar9 + 0x9b8);
      uVar10 = *(long *)(uVar9 + 0x9c0) - (long)pvVar6;
      if (uVar10 != 0) {
        if ((long)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_007dd938();
        }
        local_88 = operator_new(uVar10);
        pvVar1 = (void *)((long)local_88 + uVar10);
        local_78 = pvVar1;
        memcpy(local_88,pvVar6,uVar10);
        local_80 = pvVar1;
      }
      local_70 = 1;
    }
    FUN_0084fc00(uVar11 + 0x9a0,&local_a0);
    if (((local_70 & 1) != 0) && (local_88 != (void *)0x0)) {
      uVar4 = (ulong)((long)local_80 + (-8 - ((long)local_80 << 0x3d))) >> 3;
      uVar10 = (ulong)(((long)local_88 - (long)local_80 << 0x3d) - ((long)local_88 - (long)local_80)
                      ) >> 3;
      if (uVar4 <= uVar10) {
        uVar10 = uVar4;
      }
      pvVar6 = local_80;
      if ((1 < uVar10) && ((((int)local_88 - (int)local_80 | -(int)local_80) & 7U) == 0)) {
        uVar10 = uVar10 & 0x1ffffffffffffffe;
        pvVar6 = (void *)((long)local_80 + uVar10 * -8);
        do {
          uVar10 = uVar10 - 2;
        } while (uVar10 != 0);
      }
      while (pvVar6 != local_88) {
        pvVar6 = (void *)((long)pvVar6 + -8);
        if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      local_80 = local_88;
      operator_delete(local_88);
    }
    *(undefined8 *)(uVar11 + 0x60) = *(undefined8 *)(uVar9 + 0x60);
    *(undefined8 *)(uVar11 + 0x70) = *(undefined8 *)(uVar9 + 0x70);
    uVar9 = *param_1;
    if (3 < uVar9) {
      pvVar5 = (void *)((long)pvVar5 + lVar16);
      uVar10 = 1;
      do {
        puVar12 = puVar18;
        if ((uVar9 & 1) != 0) {
          puVar12 = (ulong *)*puVar18;
        }
        plVar17 = (long *)puVar12[uVar10];
        puVar12[uVar10] = 0;
        uVar8 = 0;
        if ((plVar17[0x18] & 0x100000000U) != 0) {
          uVar8 = (undefined4)plVar17[0x18];
        }
        FUN_007bcb6c(uVar11 + 8,uVar8,plVar17[0x13]);
        if ((long *)plVar17[0x12] == (long *)0x0) {
          pvVar6 = (void *)0x0;
        }
        else {
          pvVar6 = (void *)(**(code **)(*(long *)plVar17[0x12] + 0x20))();
        }
        memcpy(pvVar5,pvVar6,plVar17[0x13]);
        lVar16 = plVar17[0x13];
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))(plVar17);
        }
        uVar9 = *param_1;
        uVar10 = uVar10 + 1;
        pvVar5 = (void *)((long)pvVar5 + lVar16);
      } while (uVar10 < uVar9 >> 1);
    }
    plVar17 = local_48;
    if (local_48 != (long *)0x0) {
      (**(code **)*local_48)(local_48);
      (**(code **)*plVar17)(plVar17);
    }
    if (*(long **)(uVar11 + 0x90) != (long *)0x0) {
      (**(code **)(**(long **)(uVar11 + 0x90) + 8))();
    }
    *(long **)(uVar11 + 0x90) = plVar17;
    uVar7 = (**(code **)(*plVar17 + 0x28))(plVar17);
    *(undefined8 *)(uVar11 + 0x98) = uVar7;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))(plVar17);
    }
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 8))();
    }
    return uVar11;
  }
LAB_00956888:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x95688c);
  (*pcVar3)();
}


// ===== 00956890  FUN_00956890 =====

void FUN_00956890(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  uVar2 = *param_4;
  param_1[3] = param_4[1];
  param_1[2] = uVar2;
  uVar2 = *param_5;
  param_1[5] = param_5[1];
  param_1[4] = uVar2;
  param_1[6] = param_5[2];
  lVar1 = param_5[3];
  param_1[7] = lVar1;
  if (*(long *)(lVar1 + 8) != 0) {
    param_5[2] = 0;
    param_5[3] = &DAT_001fbc50;
  }
  param_1[8] = 0;
  param_1[10] = 0x8000000000000000;
  param_1[9] = 0x8000000000000000;
  return;
}


// ===== 009568e0  FUN_009568e0 =====

void FUN_009568e0(long param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  void *pvVar2;
  
  pvVar2 = *(void **)(param_1 + 0x40);
  if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar2), iVar1 == 1)) {
    operator_delete(pvVar2);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x38) + 8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00956938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}


// ===== 0095694c  FUN_0095694c =====

void FUN_0095694c(long param_1)

{
  FUN_00841d54(param_1 + 0x40);
  return;
}


// ===== 00956958  FUN_00956958 =====

ulong FUN_00956958(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = (**(code **)(*(long *)*param_1 + 0x10))();
  lVar3 = param_1[10];
  uVar2 = 0x7fffffffffffffff;
  if ((lVar3 != 0x7fffffffffffffff) && (lVar1 != -0x8000000000000000)) {
    uVar2 = 0;
    if (lVar1 != 0x7fffffffffffffff && lVar3 != -0x8000000000000000) {
      uVar2 = lVar3 - lVar1 & (lVar3 - lVar1 >> 0x3f ^ 0xffffffffffffffffU);
    }
  }
  return uVar2;
}


// ===== 009569c4  FUN_009569c4 =====

void FUN_009569c4(undefined8 *param_1,byte param_2)

{
  void *pvVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined1 uStack_51;
  undefined8 *local_50 [2];
  code *local_40;
  code *pcStack_38;
  void *local_18;
  
  *(byte *)(param_1 + 0xb) = param_2;
  lVar5 = 0x10;
  if ((param_2 & 1) == 0) {
    lVar5 = 0x18;
  }
  lVar6 = *(long *)((long)param_1 + lVar5);
  lVar3 = (**(code **)(*(long *)*param_1 + 0x10))();
  param_1[9] = lVar3;
  lVar5 = 0x7fffffffffffffff;
  if (lVar3 != 0x7fffffffffffffff && lVar6 != 0x7fffffffffffffff) {
    lVar5 = -0x8000000000000000;
    if (lVar6 != -0x8000000000000000 && lVar3 != -0x8000000000000000) {
      lVar5 = lVar3 + lVar6;
    }
  }
  param_1[10] = lVar5;
  uVar8 = param_1[1];
  local_40 = FUN_004473ec;
  pcStack_38 = FUN_00956c20;
  local_50[0] = param_1;
  uVar4 = FUN_00622394();
  FUN_00841954(&local_18,uVar8,lVar6,local_50,0,uVar4,&uStack_51);
  pvVar1 = local_18;
  pvVar7 = (void *)param_1[8];
  local_18 = (void *)0x0;
  param_1[8] = pvVar1;
  if (pvVar7 != (void *)0x0) {
    iVar2 = FUN_00d0f7a0(0xffffffff,pvVar7);
    if (iVar2 == 1) {
      operator_delete(pvVar7);
    }
    pvVar1 = local_18;
    if ((local_18 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,local_18), iVar2 == 1)) {
      operator_delete(pvVar1);
    }
  }
  (*local_40)(0,local_50,local_50);
  return;
}


// ===== 00956afc  FUN_00956afc =====

void FUN_00956afc(long param_1)

{
  FUN_00841cf8(param_1 + 0x40);
  return;
}


// ===== 00956b08  FUN_00956b08 =====

void FUN_00956b08(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 0xb) = 1;
  lVar3 = param_1[2];
  lVar2 = (**(code **)(*(long *)*param_1 + 0x10))();
  if (lVar2 != 0x7fffffffffffffff && lVar3 != 0x7fffffffffffffff) {
    lVar1 = -0x8000000000000000;
    if (lVar3 != -0x8000000000000000 && lVar2 != -0x8000000000000000) {
      lVar1 = lVar2 + lVar3;
    }
    if (lVar1 < (long)param_1[10]) {
      FUN_00841cf8(param_1 + 8);
      FUN_009569c4(param_1,*(undefined1 *)(param_1 + 0xb));
      return;
    }
  }
  return;
}


// ===== 00956b98  FUN_00956b98 =====

void FUN_00956b98(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 0xb) = 0;
  lVar1 = (**(code **)(*(long *)*param_1 + 0x10))();
  param_1[9] = lVar1;
  lVar3 = 0x10;
  if (*(char *)(param_1 + 0xb) == '\0') {
    lVar3 = 0x18;
  }
  lVar2 = *(long *)((long)param_1 + lVar3);
  lVar3 = 0x7fffffffffffffff;
  if (lVar1 != 0x7fffffffffffffff && lVar2 != 0x7fffffffffffffff) {
    lVar3 = -0x8000000000000000;
    if (lVar2 != -0x8000000000000000 && lVar1 != -0x8000000000000000) {
      lVar3 = lVar2 + lVar1;
    }
  }
  param_1[10] = lVar3;
  return;
}


// ===== 00956c14  FUN_00956c14 =====

void FUN_00956c14(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}


// ===== 00956c20  FUN_00956c20 =====

long FUN_00956c20(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_28;
  
  param_1 = (undefined8 *)*param_1;
  lVar2 = (**(code **)(*(long *)*param_1 + 0x10))();
  lVar3 = param_1[10];
  if (lVar3 - lVar2 == 0 || lVar3 < lVar2) {
    lVar3 = 0x10;
    if (*(char *)(param_1 + 0xb) == '\0') {
      lVar3 = 0x18;
    }
    lVar4 = *(long *)((long)param_1 + lVar3);
    lVar3 = -0x8000000000000000;
    if (lVar4 != -0x8000000000000000 && lVar2 != -0x8000000000000000) {
      lVar3 = lVar4 + lVar2;
    }
    lVar1 = 0x7fffffffffffffff;
    if (lVar2 != 0x7fffffffffffffff && lVar4 != 0x7fffffffffffffff) {
      lVar1 = lVar3;
    }
    param_1[10] = lVar1;
    local_28 = 0x7fffffffffffffff;
    if ((lVar2 != 0x7fffffffffffffff) && (lVar3 = param_1[9], lVar3 != -0x8000000000000000)) {
      local_28 = -0x8000000000000000;
      if (lVar3 != 0x7fffffffffffffff && lVar2 != -0x8000000000000000) {
        local_28 = lVar2 - lVar3;
      }
    }
    (*(code *)param_1[6])(param_1 + 4,&local_28);
  }
  else {
    lVar4 = 0x7fffffffffffffff;
    if (lVar3 != 0x7fffffffffffffff && lVar2 != -0x8000000000000000) {
      lVar4 = lVar3 - lVar2;
    }
  }
  return lVar4;
}


// ===== 00956d00  FUN_00956d00 =====

void FUN_00956d00(undefined1 *param_1,int param_2,int param_3,long *param_4)

{
  long *****ppppplVar1;
  bool bVar2;
  long ****local_48;
  ulong local_40;
  byte bStack_31;
  
  (**(code **)(*param_4 + 0x10))(&local_48,param_4,"WebRTC-LegacyFrameIdJumpBehavior",0x20);
  if (-1 < (char)bStack_31) {
    local_40 = (ulong)bStack_31;
  }
  if (local_40 < 8) {
    bVar2 = true;
  }
  else {
    ppppplVar1 = (long *****)local_48;
    if (-1 < (char)bStack_31) {
      ppppplVar1 = &local_48;
    }
    bVar2 = *ppppplVar1 != (long ****)0x64656c6261736944;
  }
  if ((char)bStack_31 < '\0') {
    operator_delete(local_48);
  }
  *param_1 = bVar2;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 8) = (long)param_2;
  *(undefined1 **)(param_1 + 0x10) = param_1 + 0x18;
  param_1[0x28] = 0;
  param_1[0x38] = 0;
  param_1[0x40] = 0;
  param_1[0x48] = 0;
  param_1[0x50] = 0;
  param_1[0x58] = 0;
  param_1[0x60] = 0;
  param_1[0x68] = 0;
  FUN_00955f10(param_1 + 0x70,(long)param_3);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return;
}


// ===== 00956e0c  FUN_00956e0c =====

uint FUN_00956e0c(char *param_1,long *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  char *pcVar14;
  undefined1 auVar15 [16];
  long *local_50;
  undefined1 local_48;
  char *local_40;
  undefined1 *local_38;
  long local_18;
  
  lVar8 = param_2[0x31];
  if (lVar8 == 0) {
    lVar13 = param_2[0x13c];
LAB_00956e70:
    auVar15 = FUN_009562c0(param_1 + 0x70);
    if (((auVar15 & (undefined1  [16])0x1) == (undefined1  [16])0x0) || (auVar15._0_8_ < lVar13)) {
LAB_00956f38:
      if (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 8)) {
        if (param_2[0x31] != 0) goto LAB_00956f54;
        pcVar14 = param_1 + 0x18;
        local_40 = param_1 + 0x10;
        FUN_00953520(&local_40,*(undefined8 *)pcVar14);
        cVar2 = param_1[0x38];
        pcVar14[0] = '\0';
        pcVar14[1] = '\0';
        pcVar14[2] = '\0';
        pcVar14[3] = '\0';
        pcVar14[4] = '\0';
        pcVar14[5] = '\0';
        pcVar14[6] = '\0';
        pcVar14[7] = '\0';
        param_1[0x20] = '\0';
        param_1[0x21] = '\0';
        param_1[0x22] = '\0';
        param_1[0x23] = '\0';
        param_1[0x24] = '\0';
        param_1[0x25] = '\0';
        param_1[0x26] = '\0';
        param_1[0x27] = '\0';
        *(char **)(param_1 + 0x10) = pcVar14;
        if (cVar2 == '\x01') {
          param_1[0x38] = '\0';
        }
        if (param_1[0x48] == '\x01') {
          param_1[0x48] = '\0';
        }
        if (param_1[0x58] == '\x01') {
          param_1[0x58] = '\0';
        }
        if (param_1[0x68] == '\x01') {
          param_1[0x68] = '\0';
        }
        FUN_0095624c(param_1 + 0x70);
      }
      local_18 = param_2[0x13c];
      local_38 = &DAT_aaaaaaaaaaaaaaaa;
      local_48 = 0;
      local_50 = param_2;
      auVar15 = FUN_00957c80(0,param_1 + 0x10,param_1 + 0x10,&local_18,&local_50);
      plVar4 = local_50;
      param_2 = auVar15._8_8_;
      local_40 = auVar15._0_8_;
      local_38 = (undefined1 *)CONCAT71(local_38._1_7_,auVar15[8]);
      local_50 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      if ((auVar15 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        FUN_00957148(param_1,&local_40);
        FUN_00957438(param_1);
      }
      goto LAB_00956f6c;
    }
    if ((*param_1 == '\x01') && (param_2[0x31] == 0)) {
      uVar1 = *(uint *)(param_2 + 0x14);
      uVar7 = FUN_009562d0(param_1 + 0x70);
      if ((uVar7 >> 0x20 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1074: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      iVar3 = uVar1 - (uint)uVar7;
      if (iVar3 != 0) {
        bVar6 = (uint)uVar7 <= uVar1 && iVar3 != 0;
        if (iVar3 != -0x80000000) {
          bVar6 = iVar3 != -1 && iVar3 + 1 < 0 == SCARRY4(iVar3,1);
        }
        if (bVar6) {
          pcVar14 = param_1 + 0x18;
          local_40 = param_1 + 0x10;
          FUN_00953520(&local_40,*(undefined8 *)pcVar14);
          cVar2 = param_1[0x38];
          pcVar14[0] = '\0';
          pcVar14[1] = '\0';
          pcVar14[2] = '\0';
          pcVar14[3] = '\0';
          pcVar14[4] = '\0';
          pcVar14[5] = '\0';
          pcVar14[6] = '\0';
          pcVar14[7] = '\0';
          param_1[0x20] = '\0';
          param_1[0x21] = '\0';
          param_1[0x22] = '\0';
          param_1[0x23] = '\0';
          param_1[0x24] = '\0';
          param_1[0x25] = '\0';
          param_1[0x26] = '\0';
          param_1[0x27] = '\0';
          *(char **)(param_1 + 0x10) = pcVar14;
          if (cVar2 == '\x01') {
            param_1[0x38] = '\0';
          }
          if (param_1[0x48] == '\x01') {
            param_1[0x48] = '\0';
          }
          if (param_1[0x58] == '\x01') {
            param_1[0x58] = '\0';
          }
          if (param_1[0x68] == '\x01') {
            param_1[0x68] = '\0';
          }
          FUN_0095624c(param_1 + 0x70);
          goto LAB_00956f38;
        }
      }
    }
  }
  else {
    lVar13 = param_2[0x13c];
    lVar11 = param_2[0x32];
    if (lVar11 < lVar13) {
      if (lVar8 == 1) goto LAB_00956e70;
      lVar10 = param_2[0x33];
      if (lVar11 != lVar10) {
        if (lVar8 == 2) {
joined_r0x00957104:
          if (lVar10 < lVar13) goto LAB_00956e70;
        }
        else {
          lVar9 = param_2[0x34];
          if (lVar11 != lVar9) {
            if (lVar8 == 3) {
              if ((lVar10 < lVar13) && (bVar6 = lVar10 != lVar9, lVar10 = lVar9, bVar6))
              goto joined_r0x00957104;
            }
            else if (lVar11 != param_2[0x35]) {
              if (lVar8 != 4) {
                if (lVar11 == param_2[0x36]) goto LAB_00956f54;
                if (lVar8 != 5) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x957148);
                  (*pcVar5)();
                }
              }
              if (((lVar10 < lVar13) && (lVar10 != lVar9)) &&
                 (lVar11 = param_2[0x35], lVar10 != lVar11)) {
                lVar12 = param_2[0x36];
                if ((((lVar9 != lVar11) && (lVar9 < lVar13)) && (lVar8 == 4 || lVar10 != lVar12)) &&
                   ((lVar10 = lVar11, lVar8 == 4 ||
                    (((lVar11 < lVar13 && (lVar9 != lVar12)) && (lVar10 = lVar12, lVar11 != lVar12))
                    )))) goto joined_r0x00957104;
              }
            }
          }
        }
      }
    }
  }
LAB_00956f54:
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
    param_2 = (long *)0x0;
  }
LAB_00956f6c:
  return (uint)param_2 & 1;
}


// ===== 00957148  FUN_00957148 =====

void FUN_00957148(long param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  param_2 = (long *)*param_2;
  plVar1 = (long *)(param_1 + 0x18);
  do {
    if (plVar1 == param_2) {
      return;
    }
    if ((*(byte *)(param_2 + 6) & 1) == 0) {
      lVar4 = param_2[5];
      lVar8 = *(long *)(lVar4 + 0x188);
      if (lVar8 != 0) {
        lVar6 = *(long *)(lVar4 + 400);
        uVar3 = FUN_00956190(param_1 + 0x70,lVar6);
        if ((uVar3 & 1) == 0) {
          for (plVar5 = (long *)*plVar1; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
            while (plVar5[4] <= lVar6) {
              if (lVar6 == plVar5[4]) {
                if ((plVar5 == plVar1) || ((char)plVar5[6] != '\x01')) goto LAB_009573ec;
                goto LAB_009571bc;
              }
              plVar5 = (long *)plVar5[1];
              if (plVar5 == (long *)0x0) goto LAB_009573ec;
            }
          }
          goto LAB_009573ec;
        }
LAB_009571bc:
        if (lVar8 != 1) {
          lVar6 = *(long *)(lVar4 + 0x198);
          uVar3 = FUN_00956190(param_1 + 0x70,lVar6);
          if ((uVar3 & 1) == 0) {
            for (plVar5 = (long *)*plVar1; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
              while (plVar5[4] <= lVar6) {
                if (lVar6 == plVar5[4]) {
                  if ((plVar5 == plVar1) || ((*(byte *)(plVar5 + 6) & 1) == 0)) goto LAB_009573ec;
                  goto LAB_009571d8;
                }
                plVar5 = (long *)plVar5[1];
                if (plVar5 == (long *)0x0) goto LAB_009573ec;
              }
            }
            goto LAB_009573ec;
          }
LAB_009571d8:
          if (lVar8 != 2) {
            lVar6 = *(long *)(lVar4 + 0x1a0);
            uVar3 = FUN_00956190(param_1 + 0x70,lVar6);
            if ((uVar3 & 1) == 0) {
              for (plVar5 = (long *)*plVar1; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
                while (plVar5[4] <= lVar6) {
                  if (lVar6 == plVar5[4]) {
                    if ((plVar5 == plVar1) || ((*(byte *)(plVar5 + 6) & 1) == 0)) goto LAB_009573ec;
                    goto LAB_009571f4;
                  }
                  plVar5 = (long *)plVar5[1];
                  if (plVar5 == (long *)0x0) goto LAB_009573ec;
                }
              }
              goto LAB_009573ec;
            }
LAB_009571f4:
            if (lVar8 != 3) {
              lVar6 = *(long *)(lVar4 + 0x1a8);
              uVar3 = FUN_00956190(param_1 + 0x70,lVar6);
              if ((uVar3 & 1) == 0) {
                for (plVar5 = (long *)*plVar1; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
                  while (plVar5[4] <= lVar6) {
                    if (lVar6 == plVar5[4]) {
                      if ((plVar5 == plVar1) || ((*(byte *)(plVar5 + 6) & 1) == 0))
                      goto LAB_009573ec;
                      goto LAB_00957210;
                    }
                    plVar5 = (long *)plVar5[1];
                    if (plVar5 == (long *)0x0) goto LAB_009573ec;
                  }
                }
                goto LAB_009573ec;
              }
LAB_00957210:
              if (lVar8 != 4) {
                lVar4 = *(long *)(lVar4 + 0x1b0);
                uVar3 = FUN_00956190(param_1 + 0x70,lVar4);
                if ((uVar3 & 1) == 0) {
                  for (plVar5 = (long *)*plVar1; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
                    while (plVar5[4] <= lVar4) {
                      if (lVar4 == plVar5[4]) {
                        if ((plVar5 == plVar1) || ((*(byte *)(plVar5 + 6) & 1) == 0))
                        goto LAB_009573ec;
                        goto LAB_0095722c;
                      }
                      plVar5 = (long *)plVar5[1];
                      if (plVar5 == (long *)0x0) goto LAB_009573ec;
                    }
                  }
                  goto LAB_009573ec;
                }
              }
            }
          }
        }
      }
LAB_0095722c:
      *(undefined1 *)(param_2 + 6) = 1;
      if ((*(char *)(param_1 + 0x58) != '\x01') || (*(long *)(param_1 + 0x50) < param_2[4])) {
        *(long *)(param_1 + 0x50) = param_2[4];
        *(undefined1 *)(param_1 + 0x58) = 1;
      }
      if (*(char *)(param_2[5] + 0x1b8) == '\x01') {
        *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
        if ((*(char *)(param_1 + 0x68) != '\x01') || (*(long *)(param_1 + 0x60) < param_2[4])) {
          *(long *)(param_1 + 0x60) = param_2[4];
          *(undefined1 *)(param_1 + 0x68) = 1;
        }
      }
    }
LAB_009573ec:
    plVar5 = (long *)param_2[1];
    plVar7 = param_2;
    if ((long *)param_2[1] == (long *)0x0) {
      do {
        param_2 = (long *)plVar7[2];
        bVar2 = plVar7 != (long *)*param_2;
        plVar7 = param_2;
      } while (bVar2);
    }
    else {
      do {
        param_2 = plVar5;
        plVar5 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  } while( true );
}


// ===== 00957438  FUN_00957438 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00957438(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  long lVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 (*pauVar9) [16];
  long *plVar10;
  ulong uVar11;
  undefined1 (*pauVar12) [16];
  undefined1 *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined1 auVar19 [12];
  undefined1 auVar20 [16];
  int iVar21;
  int iVar23;
  undefined1 auVar22 [16];
  uint uVar24;
  ulong local_c8;
  byte local_c0;
  byte bStack_bf;
  byte bStack_be;
  byte bStack_bd;
  byte bStack_b9;
  byte bStack_b8;
  byte bStack_b7;
  byte bStack_b6;
  byte bStack_b5;
  long local_a8;
  ulong local_a0;
  undefined1 (*local_98) [16];
  ulong uStack_90;
  undefined1 *local_88;
  undefined1 *local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(undefined1 **)(lVar3 + 0x28);
  if (*(char *)(param_1 + 0x38) == '\x01') {
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  if (*(char *)(param_1 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  uVar11 = DAT_001f50d0;
  if (*(char *)(param_1 + 0x68) == '\x01') {
    plVar14 = *(long **)(param_1 + 0x10);
    local_a0 = 0;
    local_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_98 = (undefined1 (*) [16])&DAT_aaaaaaaaaaaaaaaa;
    if (plVar14 != (long *)(param_1 + 0x18)) {
      local_c8 = 0xaaaaaaaa;
      bStack_b8 = SUB161(_DAT_001f26f0,8);
      bStack_b7 = SUB161(_DAT_001f26f0,9);
      bStack_b6 = SUB161(_DAT_001f26f0,10);
      bStack_b5 = SUB161(_DAT_001f26f0,0xb);
      local_c0 = SUB161(_DAT_001f26f0,0);
      bStack_bf = SUB161(_DAT_001f26f0,1);
      bStack_be = SUB161(_DAT_001f26f0,2);
      bStack_bd = SUB161(_DAT_001f26f0,3);
      bStack_b9 = SUB161(_DAT_001f26f0,7);
      plVar15 = plVar14;
      do {
        if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                    );
        }
        lVar7 = plVar15[4];
        if (*(long *)(param_1 + 0x60) < lVar7) break;
        if (*(int *)(plVar15[5] + 0xa0) != *(int *)(plVar14[5] + 0xa0)) {
          local_a0 = local_a0 & 1;
          lVar7 = plVar15[4];
          plVar14 = plVar15;
        }
        uVar6 = 4;
        if ((local_a0 & 1) != 0) {
          uVar6 = uStack_90;
        }
        local_a8 = lVar7;
        if (local_a0 >> 1 == uVar6) {
          FUN_00957fb0(&local_a0,&local_a8);
        }
        else {
          pauVar2 = (undefined1 (*) [16])&local_98;
          if ((local_a0 & 1) != 0) {
            pauVar2 = local_98;
          }
          if ((long *)(*pauVar2 + (local_a0 >> 1) * 8) == (long *)0x0) goto LAB_009578f8;
          *(long *)(*pauVar2 + (local_a0 >> 1) * 8) = lVar7;
          local_a0 = local_a0 + 2;
        }
        plVar17 = (long *)plVar15[1];
        plVar10 = plVar15;
        if ((long *)plVar15[1] == (long *)0x0) {
          do {
            plVar16 = (long *)plVar10[2];
            bVar4 = plVar10 != (long *)*plVar16;
            plVar10 = plVar16;
          } while (bVar4);
        }
        else {
          do {
            plVar16 = plVar17;
            plVar17 = (long *)*plVar16;
          } while ((long *)*plVar16 != (long *)0x0);
        }
        if (*(char *)(plVar15[5] + 0x1b8) == '\x01') {
          plVar17 = plVar14;
          if (plVar14 != plVar16) {
            do {
              uVar8 = *(ulong *)(plVar17[5] + 0x188);
              plVar10 = (long *)(plVar17[5] + 400);
              uVar6 = uVar8;
              if (4 < uVar8) {
                uVar6 = 5;
              }
              if (uVar8 != 0) {
                plVar18 = plVar10 + uVar6;
                do {
                  lVar7 = *plVar10;
                  uVar6 = FUN_00956190(param_1 + 0x70,lVar7);
                  if ((uVar6 & 1) == 0) {
                    auVar20._8_8_ = lVar7;
                    auVar20._0_8_ = lVar7;
                    pauVar2 = (undefined1 (*) [16])&local_98;
                    if ((local_a0 & 1) != 0) {
                      pauVar2 = local_98;
                    }
                    uVar6 = (local_a0 >> 1) * 8;
                    pauVar1 = (undefined1 (*) [16])(*pauVar2 + uVar6);
                    pauVar9 = pauVar2;
                    pauVar12 = pauVar2;
                    for (; 0x38 < uVar6; uVar6 = uVar6 - 0x40) {
                      auVar22 = NEON_cmeq(*pauVar9,auVar20,8);
                      uVar24 = NEON_umaxv(auVar22,4);
                      if ((uVar24 & 1) != 0) {
                        iVar21 = auVar22._0_4_;
                        iVar23 = auVar22._8_4_;
                        lVar7 = 0;
LAB_009577a8:
                        uVar6 = NEON_cmlt(CONCAT44(iVar23 << 0x1f,iVar21 << 0x1f),0,4);
                        uVar24 = (int)(uVar6 & uVar11) + (int)((uVar6 & uVar11) >> 0x20);
                        uVar24 = (uVar24 & 0xaaaaaaaa) >> 1 | (uVar24 & 0x55555555 | 4) << 1;
                        uVar24 = (uVar24 & 0xcccccccc) >> 2 | (uVar24 & 0x33333333) << 2;
                        uVar24 = (uVar24 & 0xf0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f) << 4;
                        uVar24 = (uVar24 & 0xff00ff00) >> 8 | (uVar24 & 0xff00ff) << 8;
                        pauVar9 = (undefined1 (*) [16])
                                  (*pauVar9 + lVar7 + LZCOUNT(uVar24 >> 0x10 | uVar24 << 0x10) * 8);
                        goto LAB_00957648;
                      }
                      auVar22 = NEON_cmeq(pauVar9[1],auVar20,8);
                      uVar24 = NEON_umaxv(auVar22,4);
                      if ((uVar24 & 1) != 0) {
                        iVar21 = auVar22._0_4_;
                        iVar23 = auVar22._8_4_;
                        lVar7 = 0x10;
                        goto LAB_009577a8;
                      }
                      auVar22 = NEON_cmeq(pauVar9[2],auVar20,8);
                      uVar24 = NEON_umaxv(auVar22,4);
                      if ((uVar24 & 1) != 0) {
                        iVar21 = auVar22._0_4_;
                        iVar23 = auVar22._8_4_;
                        lVar7 = 0x20;
                        goto LAB_009577a8;
                      }
                      auVar22 = NEON_cmeq(pauVar9[3],auVar20,8);
                      uVar24 = NEON_umaxv(auVar22,4);
                      if ((uVar24 & 1) != 0) {
                        iVar21 = auVar22._0_4_;
                        iVar23 = auVar22._8_4_;
                        lVar7 = 0x30;
                        goto LAB_009577a8;
                      }
                      pauVar9 = pauVar9 + 4;
                      pauVar12 = pauVar12 + 4;
                    }
                    if (8 < uVar6) {
                      puVar13 = (undefined1 *)
                                ((long)pauVar2 + ((local_a0 >> 1) * 8 - (long)pauVar9));
                      pauVar12 = pauVar9;
                      do {
                        auVar22 = NEON_cmeq(*pauVar9,auVar20,8);
                        uVar24 = NEON_umaxv(auVar22,4);
                        if ((uVar24 & 1) != 0) {
                          auVar19[0] = auVar22[0] & local_c0;
                          auVar19[1] = auVar22[1] & bStack_bf;
                          auVar19[2] = auVar22[2] & bStack_be;
                          auVar19[3] = auVar22[3] & bStack_bd;
                          auVar19._4_3_ = 0;
                          auVar19[7] = auVar22[7] & bStack_b9;
                          auVar19[8] = auVar22[8] & bStack_b8;
                          auVar19[9] = auVar22[9] & bStack_b7;
                          auVar19[10] = auVar22[10] & bStack_b6;
                          auVar19[0xb] = auVar22[0xb] & bStack_b5;
                          goto LAB_00957630;
                        }
                        puVar13 = puVar13 + -0x10;
                        pauVar9 = pauVar9 + 1;
                        pauVar12 = pauVar12 + 1;
                      } while ((undefined1 *)0x8 < puVar13);
                    }
                    if (pauVar1 != pauVar9) {
                      if ((ulong)((long)pauVar12 - (long)pauVar2) < 9) {
                        while (*(long *)*pauVar9 != lVar7) {
                          pauVar9 = (undefined1 (*) [16])(*pauVar9 + 8);
                          if (pauVar9 == pauVar1) goto LAB_009577d4;
                        }
                      }
                      else {
                        pauVar9 = pauVar1 + -1;
                        auVar20 = NEON_cmeq(*pauVar9,auVar20,8);
                        auVar19[0] = auVar20[0] & local_c0;
                        auVar19[1] = auVar20[1] & bStack_bf;
                        auVar19[2] = auVar20[2] & bStack_be;
                        auVar19[3] = auVar20[3] & bStack_bd;
                        auVar19._4_3_ = 0;
                        auVar19[7] = auVar20[7] & bStack_b9;
                        auVar19[8] = auVar20[8] & bStack_b8;
                        auVar19[9] = auVar20[9] & bStack_b7;
                        auVar19[10] = auVar20[10] & bStack_b6;
                        auVar19[0xb] = auVar20[0xb] & bStack_b5;
LAB_00957630:
                        uVar24 = auVar19._0_4_ + auVar19._8_4_;
                        uVar24 = (uVar24 & 0xaaaaaaaa) >> 1 | (uVar24 & 0x55555555 | 4) << 1;
                        uVar24 = (uVar24 & 0xcccccccc) >> 2 | (uVar24 & 0x33333333) << 2;
                        uVar24 = (uVar24 & 0xf0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f) << 4;
                        uVar24 = (uVar24 & 0xff00ff00) >> 8 | (uVar24 & 0xff00ff) << 8;
                        pauVar9 = (undefined1 (*) [16])
                                  (*pauVar9 + LZCOUNT(uVar24 >> 0x10 | uVar24 << 0x10) * 8);
                      }
LAB_00957648:
                      if (pauVar9 != pauVar1) goto LAB_00957650;
                    }
LAB_009577d4:
                    bVar4 = false;
                    plVar10 = (long *)plVar17[1];
                    goto joined_r0x009577dc;
                  }
LAB_00957650:
                  plVar10 = plVar10 + 1;
                } while (plVar10 != plVar18);
              }
              bVar4 = true;
              plVar10 = (long *)plVar17[1];
joined_r0x009577dc:
              if (plVar10 == (long *)0x0) {
                do {
                  plVar18 = (long *)plVar17[2];
                  bVar5 = plVar17 != (long *)*plVar18;
                  plVar17 = plVar18;
                } while (bVar5);
              }
              else {
                do {
                  plVar18 = plVar10;
                  plVar10 = (long *)*plVar18;
                } while ((long *)*plVar18 != (long *)0x0);
              }
              bVar5 = false;
              if (plVar18 != plVar16) {
                bVar5 = bVar4;
              }
              plVar17 = plVar18;
            } while (bVar5);
            if (!bVar4) goto LAB_00957500;
          }
          if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
            if (param_1 == -0x28) goto LAB_009578f8;
            *(long **)(param_1 + 0x28) = plVar14;
            *(long **)(param_1 + 0x30) = plVar15;
            *(undefined1 *)(param_1 + 0x38) = 1;
          }
          local_c8 = (ulong)*(uint *)(plVar14[5] + 0xa0);
        }
LAB_00957500:
        plVar15 = plVar16;
      } while (plVar16 != (long *)(param_1 + 0x18));
      if (*(char *)(param_1 + 0x38) == '\x01') {
        uVar11 = (ulong)*(uint *)(*(long *)(*(long *)(param_1 + 0x28) + 0x28) + 0xa0);
        if (*(char *)(param_1 + 0x48) == '\x01') {
          *(ulong *)(param_1 + 0x40) = local_c8 << 0x20 | uVar11;
        }
        else {
          if (param_1 == -0x40) {
LAB_009578f8:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *(ulong *)(param_1 + 0x40) = local_c8 << 0x20 | uVar11;
          *(undefined1 *)(param_1 + 0x48) = 1;
        }
      }
    }
    if ((local_a0 & 1) != 0) {
      operator_delete(local_98);
    }
  }
  if (*(undefined1 **)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00957924  FUN_00957924 =====

void FUN_00957924(ulong *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  cVar2 = *(char *)(param_2 + 0x38);
  *param_1 = 0;
  param_1[4] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
  if (cVar2 != '\x01') {
    return;
  }
  plVar4 = (long *)(*(long **)(param_2 + 0x30))[1];
  plVar8 = *(long **)(param_2 + 0x30);
  if (plVar4 == (long *)0x0) {
    do {
      plVar9 = (long *)plVar8[2];
      bVar3 = plVar8 != (long *)*plVar9;
      plVar8 = plVar9;
    } while (bVar3);
  }
  else {
    do {
      plVar9 = plVar4;
      plVar4 = (long *)*plVar9;
    } while ((long *)*plVar9 != (long *)0x0);
  }
  if (plVar9 != *(long **)(param_2 + 0x28)) {
    plVar4 = *(long **)(param_2 + 0x28);
    do {
      puVar7 = (ulong *)(plVar4 + 5);
      FUN_00955fbc(param_2 + 0x70,plVar4[4],*(undefined4 *)(*puVar7 + 0xa0));
      uVar5 = *param_1;
      uVar6 = 4;
      if ((uVar5 & 1) != 0) {
        uVar6 = param_1[2];
      }
      if (uVar5 >> 1 == uVar6) {
        FUN_00957d98(param_1,puVar7);
        plVar8 = (long *)plVar4[1];
        if ((long *)plVar4[1] != (long *)0x0) goto LAB_00957a1c;
LAB_00957a40:
        do {
          plVar10 = (long *)plVar4[2];
          bVar3 = plVar4 != (long *)*plVar10;
          plVar4 = plVar10;
        } while (bVar3);
      }
      else {
        puVar1 = param_1 + 1;
        if ((uVar5 & 1) != 0) {
          puVar1 = (ulong *)param_1[1];
        }
        if (puVar1 + (uVar5 >> 1) == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        uVar6 = *puVar7;
        *puVar7 = 0;
        puVar1[uVar5 >> 1] = uVar6;
        *param_1 = *param_1 + 2;
        plVar8 = (long *)plVar4[1];
        if ((long *)plVar4[1] == (long *)0x0) goto LAB_00957a40;
LAB_00957a1c:
        do {
          plVar10 = plVar8;
          plVar8 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
      plVar4 = plVar10;
    } while (plVar10 != plVar9);
  }
  FUN_00957aa8(param_2);
  return;
}


// ===== 00957aa8  FUN_00957aa8 =====

void FUN_00957aa8(long param_1)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  if (*(char *)(param_1 + 0x38) != '\x01') {
    return;
  }
  plVar4 = (long *)(*(long **)(param_1 + 0x30))[1];
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar4 == (long *)0x0) {
    do {
      plVar6 = (long *)plVar2[2];
      bVar1 = plVar2 != (long *)*plVar6;
      plVar2 = plVar6;
    } while (bVar1);
  }
  else {
    do {
      plVar6 = plVar4;
      plVar4 = (long *)*plVar6;
    } while ((long *)*plVar6 != (long *)0x0);
  }
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 != plVar6) {
    iVar3 = 0;
    plVar2 = plVar4;
    do {
      if (plVar2[5] != 0) {
        iVar3 = iVar3 + 1;
      }
      plVar5 = plVar2;
      plVar7 = (long *)plVar2[1];
      if ((long *)plVar2[1] == (long *)0x0) {
        do {
          plVar2 = (long *)plVar5[2];
          bVar1 = plVar5 != (long *)*plVar2;
          plVar5 = plVar2;
        } while (bVar1);
      }
      else {
        do {
          plVar2 = plVar7;
          plVar7 = (long *)*plVar2;
        } while ((long *)*plVar2 != (long *)0x0);
      }
    } while (plVar2 != plVar6);
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + iVar3;
    do {
      plVar2 = (long *)plVar4[1];
      plVar5 = plVar4;
      if ((long *)plVar4[1] == (long *)0x0) {
        do {
          plVar7 = (long *)plVar5[2];
          bVar1 = plVar5 != (long *)*plVar7;
          plVar5 = plVar7;
        } while (bVar1);
      }
      else {
        do {
          plVar7 = plVar2;
          plVar2 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
      if (*(long **)(param_1 + 0x10) == plVar4) {
        *(long **)(param_1 + 0x10) = plVar7;
      }
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
      FUN_005d5d48(*(undefined8 *)(param_1 + 0x18),plVar4);
      if (plVar4 == (long *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar2 = (long *)plVar4[5];
      plVar4[5] = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      operator_delete(plVar4);
      plVar4 = plVar7;
    } while (plVar6 != plVar7);
  }
  FUN_00957438(param_1);
  return;
}


// ===== 00957c38  FUN_00957c38 =====

undefined1  [16] FUN_00957c38(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x50);
}


// ===== 00957c48  FUN_00957c48 =====

undefined1  [16] FUN_00957c48(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._12_4_ = 0;
  auVar1._0_12_ = *(undefined1 (*) [12])(param_1 + 0x40);
  return auVar1;
}


// ===== 00957c5c  FUN_00957c5c =====

undefined4 FUN_00957c5c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xb0);
}


// ===== 00957c68  FUN_00957c68 =====

undefined4 FUN_00957c68(long param_1)

{
  return *(undefined4 *)(param_1 + 0xb4);
}


// ===== 00957c74  FUN_00957c74 =====

undefined8 FUN_00957c74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


// ===== 00957c80  FUN_00957c80 =====

undefined1  [16]
FUN_00957c80(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,long *param_5)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  
  plVar4 = param_2 + 1;
  plVar8 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, *param_4 < plVar3[4]) {
        plVar2 = (long *)*plVar3;
        plVar8 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_00957cec;
      }
      if (*param_4 == plVar3[4]) {
        uVar5 = 0;
        goto LAB_00957d68;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar8 = plVar3 + 1;
  }
LAB_00957cec:
  plVar3 = (long *)operator_new(0x38);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  lVar6 = *param_4;
  lVar7 = *param_5;
  lVar1 = param_5[1];
  *param_5 = 0;
  plVar3[4] = lVar6;
  plVar3[5] = lVar7;
  *(char *)(plVar3 + 6) = (char)lVar1;
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = (long)plVar4;
  *plVar8 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar4 = (long *)*plVar8;
  }
  FUN_005d5b94(param_2[1],plVar4);
  uVar5 = 1;
  param_2[2] = param_2[2] + 1;
LAB_00957d68:
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = plVar3;
  return auVar9;
}


// ===== 00957d98  FUN_00957d98 =====

ulong * FUN_00957d98(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  bool bVar2;
  ulong *puVar3;
  long *plVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  
  puVar14 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar13 = 8;
  }
  else {
    if ((param_1[2] >> 0x3c & 7) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar14 = (ulong *)param_1[1];
    uVar13 = param_1[2] << 1;
  }
  uVar15 = *param_1 >> 1;
  puVar3 = (ulong *)operator_new(uVar13 << 3);
  puVar1 = puVar3 + uVar15;
  if (puVar1 == (ulong *)0x0) {
LAB_00957f84:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar5 = *param_2;
  *param_2 = 0;
  *puVar1 = uVar5;
  if (uVar15 == 0) goto LAB_00957e88;
  uVar10 = uVar15 - 1;
  uVar5 = (ulong)-(long)puVar3 >> 3;
  if (uVar10 <= (ulong)-(long)puVar3 >> 3) {
    uVar5 = uVar10;
  }
  puVar6 = puVar14;
  if (uVar5 < 0x22) {
LAB_00957e2c:
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    uVar11 = (ulong)-(long)puVar3 >> 3;
    if (uVar10 <= uVar11) {
      uVar11 = uVar10;
    }
    if (((-(long)puVar3 & 7U) != 0) || (puVar14 + uVar11 < puVar14)) goto LAB_00957e2c;
    if (puVar3 <= puVar3 + uVar11) {
      uVar11 = (ulong)-(long)puVar3 >> 3;
      if (uVar10 <= (ulong)-(long)puVar3 >> 3) {
        uVar11 = uVar10;
      }
      if ((puVar14 < puVar3 + uVar11 + 1) && (puVar3 < puVar14 + uVar11 + 1)) goto LAB_00957e2c;
      uVar10 = uVar5 + 1 & 3;
      puVar8 = puVar3 + 2;
      uVar11 = 4;
      if (uVar10 != 0) {
        uVar11 = uVar10;
      }
      puVar9 = puVar14 + 2;
      lVar12 = (uVar5 + 1) - uVar11;
      puVar6 = puVar14 + lVar12;
      lVar7 = lVar12;
      do {
        uVar10 = puVar9[-1];
        uVar5 = puVar9[-2];
        uVar16 = puVar9[1];
        uVar11 = *puVar9;
        lVar7 = lVar7 + -4;
        puVar9[-1] = 0;
        puVar9[-2] = 0;
        puVar9[1] = 0;
        *puVar9 = 0;
        puVar9 = puVar9 + 4;
        puVar8[-1] = uVar10;
        puVar8[-2] = uVar5;
        puVar8[1] = uVar16;
        *puVar8 = uVar11;
        puVar8 = puVar8 + 4;
      } while (lVar7 != 0);
    }
  }
  lVar7 = uVar15 - lVar12;
  puVar8 = puVar3 + lVar12;
  do {
    if (puVar8 == (ulong *)0x0) goto LAB_00957f84;
    uVar5 = *puVar6;
    lVar7 = lVar7 + -1;
    *puVar6 = 0;
    *puVar8 = uVar5;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  } while (lVar7 != 0);
  puVar14 = puVar14 + uVar15;
  lVar12 = -uVar15;
  do {
    puVar14 = puVar14 + -1;
    if (puVar14 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    plVar4 = (long *)*puVar14;
    *puVar14 = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    bVar2 = lVar12 != -1;
    lVar12 = lVar12 + 1;
  } while (bVar2);
LAB_00957e88:
  uVar15 = *param_1;
  if ((uVar15 & 1) != 0) {
    operator_delete((void *)param_1[1]);
    uVar15 = *param_1;
  }
  param_1[1] = (ulong)puVar3;
  param_1[2] = uVar13;
  *param_1 = (uVar15 | 1) + 2;
  return puVar1;
}


// ===== 00957fb0  FUN_00957fb0 =====

undefined8 * FUN_00957fb0(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  
  puVar12 = param_1 + 1;
  uVar11 = *param_1;
  if ((uVar11 & 1) == 0) {
    uVar10 = 8;
  }
  else {
    if ((param_1[2] >> 0x3c & 7) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar12 = (ulong *)param_1[1];
    uVar10 = param_1[2] << 1;
  }
  uVar13 = uVar11 >> 1;
  pvVar3 = operator_new(uVar10 << 3);
  puVar1 = (undefined8 *)((long)pvVar3 + uVar13 * 8);
  if (puVar1 == (undefined8 *)0x0) {
LAB_00958128:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *puVar1 = *param_2;
  if (uVar13 != 0) {
    uVar7 = uVar13 - 1;
    uVar14 = (ulong)-(long)pvVar3 >> 3;
    if (uVar7 <= (ulong)-(long)pvVar3 >> 3) {
      uVar14 = uVar7;
    }
    if (uVar14 < 0x1e) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      uVar9 = (ulong)-(long)pvVar3 >> 3;
      if (uVar7 <= uVar9) {
        uVar9 = uVar7;
      }
      if (((((-(long)pvVar3 & 7U) == 0) && (pvVar3 <= (void *)((long)pvVar3 + uVar9 * 8))) &&
          (puVar12 <= puVar12 + uVar9)) && (0x1f < (ulong)((long)pvVar3 - (long)puVar12))) {
        puVar6 = (ulong *)((long)pvVar3 + 0x10);
        uVar7 = uVar14 + 1 & 3;
        uVar9 = 4;
        if (uVar7 != 0) {
          uVar9 = uVar7;
        }
        puVar8 = puVar12 + 2;
        lVar4 = (uVar14 + 1) - uVar9;
        puVar12 = puVar12 + lVar4;
        lVar5 = lVar4;
        do {
          puVar2 = puVar8 + -1;
          uVar14 = puVar8[-2];
          uVar9 = puVar8[1];
          uVar7 = *puVar8;
          lVar5 = lVar5 + -4;
          puVar8 = puVar8 + 4;
          puVar6[-1] = *puVar2;
          puVar6[-2] = uVar14;
          puVar6[1] = uVar9;
          *puVar6 = uVar7;
          puVar6 = puVar6 + 4;
        } while (lVar5 != 0);
      }
    }
    lVar5 = uVar13 - lVar4;
    puVar6 = (ulong *)((long)pvVar3 + lVar4 * 8);
    do {
      if (puVar6 == (ulong *)0x0) goto LAB_00958128;
      lVar5 = lVar5 + -1;
      *puVar6 = *puVar12;
      puVar6 = puVar6 + 1;
      puVar12 = puVar12 + 1;
    } while (lVar5 != 0);
  }
  if ((uVar11 & 1) != 0) {
    operator_delete((void *)param_1[1]);
    uVar11 = *param_1;
  }
  param_1[1] = (ulong)pvVar3;
  param_1[2] = uVar10;
  *param_1 = (uVar11 | 1) + 2;
  return puVar1;
}


// ===== 00958140  FUN_00958140 =====

int FUN_00958140(long param_1,undefined8 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x10));
  if (*(long *)(param_1 + 8) != 0) {
    FUN_00958184(*(long *)(param_1 + 8),param_2);
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x10));
  return iVar1;
}


// ===== 00958184  FUN_00958184 =====

void FUN_00958184(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long local_50;
  long lStack_48;
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  lVar6 = *(long *)(param_1 + 0x2150);
  lVar2 = FUN_005d6490();
  if (lVar2 == lVar6) {
    lVar2 = *(long *)(param_1 + 0x2178);
    if (lVar2 != *(long *)(param_1 + 0x2180)) {
      uVar4 = *(ulong *)(param_1 + 0x2190);
      uVar1 = *(long *)(param_1 + 0x2198) + uVar4;
      plVar3 = (long *)(lVar2 + (uVar4 >> 4) * 8);
      lVar5 = *plVar3;
      lVar6 = lVar5 + (uVar4 & 0xf) * 0xf8;
      while (lVar6 != *(long *)(lVar2 + (uVar1 >> 4) * 8) + (uVar1 & 0xf) * 0xf8) {
        if (*(long *)(lVar6 + 0xe8) == param_2) {
          *(undefined1 *)(lVar6 + 0xe0) = 1;
          lVar2 = *(long *)(param_1 + 0x2198);
          goto joined_r0x0095830c;
        }
        lVar6 = lVar6 + 0xf8;
        if (lVar6 - lVar5 == 0xf80) {
          plVar3 = plVar3 + 1;
          lVar5 = *plVar3;
          lVar6 = lVar5;
        }
      }
    }
    lVar2 = *(long *)(param_1 + 0x2198);
joined_r0x0095830c:
    while ((lVar2 != 0 &&
           (lVar2 = *(long *)(*(long *)(param_1 + 0x2178) + (*(ulong *)(param_1 + 0x2190) >> 4) * 8)
                    + (*(ulong *)(param_1 + 0x2190) & 0xf) * 0xf8, *(char *)(lVar2 + 0xe0) == '\x01'
           ))) {
      FUN_0095f230(param_1,lVar2,*(undefined8 *)(lVar2 + 0xf0));
      FUN_0095fb84(param_1 + 0x2170);
      lVar2 = *(long *)(param_1 + 0x2198);
    }
  }
  else {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00965314;
    local_50 = param_1;
    lStack_48 = param_2;
    (**(code **)(**(long **)(param_1 + 0x2150) + 8))
              (*(long **)(param_1 + 0x2150),&local_50,&uStack_11,&uStack_12);
    (*local_40)(0,&local_50,&local_50);
  }
  return;
}


// ===== 00958314  FUN_00958314 =====

void FUN_00958314(long *****param_1,long *param_2,undefined4 param_3,long ****param_4,
                 undefined8 *param_5,undefined8 param_6,long ****param_7,long ****param_8,
                 undefined4 param_9,long ****param_10)

{
  undefined1 *puVar1;
  long ******pppppplVar2;
  char ****ppppcVar3;
  undefined1 uVar4;
  char ******ppppppcVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long ****pppplVar13;
  long ****pppplVar14;
  long ****pppplVar15;
  ulong uVar16;
  double dVar17;
  long ****pppplVar18;
  long ****pppplVar19;
  long *****local_128;
  ulong uStack_120;
  byte bStack_111;
  long *****local_110;
  char *****local_108;
  char *****local_100;
  char ***pppcStack_f8;
  char *local_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  long *****local_c0;
  undefined1 *puStack_b8;
  undefined8 local_b0;
  code *pcStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined4 uStack_88;
  uint local_84;
  uint uStack_80;
  undefined4 uStack_7c;
  
  *param_1 = (long ****)&PTR_FUN_00d3e590;
  param_1[1] = (long ****)&PTR_FUN_00d3e630;
  param_1[2] = (long ****)&PTR_FUN_00d3e670;
  pppplVar15 = (long ****)*param_2;
  param_1[3] = pppplVar15;
  if (pppplVar15 != (long ****)0x0) {
    FUN_00d0f740(1,pppplVar15 + 1);
  }
  pppplVar18 = (long ****)param_2[4];
  pppplVar15 = (long ****)param_2[3];
  pppplVar13 = (long ****)param_2[1];
  param_1[5] = (long ****)param_2[2];
  param_1[4] = pppplVar13;
  param_1[7] = pppplVar18;
  param_1[6] = pppplVar15;
  pppplVar15 = (long ****)FUN_005d6490();
  *(undefined4 *)(param_1 + 9) = param_3;
  param_1[8] = pppplVar15;
  param_1[10] = (long ****)0x0;
  pppplVar13 = (long ****)param_5[1];
  pppplVar18 = (long ****)*param_5;
  pppplVar19 = (long ****)param_5[3];
  pppplVar14 = (long ****)param_5[2];
  pppplVar15 = (long ****)param_5[4];
  *(undefined4 *)(param_1 + 0x10) = param_9;
  param_1[0xf] = pppplVar15;
  param_1[0xc] = pppplVar13;
  param_1[0xb] = pppplVar18;
  param_1[0xe] = pppplVar19;
  param_1[0xd] = pppplVar14;
  FUN_008a5364(param_1 + 0x11,param_1[4]);
  pppplVar15 = (long ****)0x0;
  param_1[0x1c] = param_10;
  if (param_10 == (long ****)0x0) {
    pppplVar15 = (long ****)(**(code **)(*(long *)param_5[1] + 0x20))();
    param_10 = pppplVar15;
    if (param_1[0x1c] != (long ****)0x0) {
      param_10 = param_1[0x1c];
    }
  }
  param_1[0x1d] = pppplVar15;
  param_1[0x1e] = param_10;
  param_1[0x1f] = param_4;
  param_1[0x20] = (long ****)&PTR_FUN_00d3e698;
  param_1[0x21] = (long ****)param_1;
  param_1[0x22] = param_7;
  FUN_0084951c(param_1 + 0x23);
  pppplVar15 = param_1[5];
  param_1[0x3d] = (long ****)0x0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  param_1[0x3f] = (long ****)0x0;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x204) = 0;
  param_1[0x42] = (long ****)0x0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)((long)param_1 + 0x26c) = 0;
  *(undefined1 *)((long)param_1 + 0x27c) = 0;
  param_1[0x50] = (long ****)0x0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined1 *)(param_1 + 0x7f) = 0;
  *(undefined2 *)(param_1 + 0x80) = 0;
  param_1[0x81] = (long ****)0x0;
  param_1[0x4e] = (long ****)0x0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  uVar10 = (*(code *)(*pppplVar15)[2])(pppplVar15);
  uVar11 = (*(code *)(*pppplVar15)[3])(pppplVar15,uVar10);
  dVar17 = (double)(uVar11 & 0xffffffff) / DAT_001f4ff8;
  uVar12 = (*(code *)(*param_1[5])[2])(param_1[5]);
  if ((long)uVar12 < 0) {
    uVar16 = -uVar12 / 1000;
    if (500 < -uVar12 % 1000) {
      uVar16 = uVar16 + 1;
    }
  }
  else {
    uVar16 = -(uVar12 / 1000) - (ulong)(499 < uVar12 % 1000);
  }
  param_1[0x82] = (long ****)((long)(dVar17 + 0.5) + (uVar11 >> 0x20) * 1000 + uVar16);
  uVar11 = (*(code *)(*param_1[5])[2])();
  if ((long)uVar11 < 0) {
    pppplVar15 = (long ****)(-(-uVar11 / 1000) - (ulong)(500 < -uVar11 % 1000));
  }
  else {
    pppplVar15 = (long ****)(uVar11 / 1000);
    if (499 < uVar11 % 1000) {
      pppplVar15 = (long ****)((long)pppplVar15 + 1);
    }
  }
  param_1[0x83] = pppplVar15;
  *(undefined4 *)(param_1 + 0x85) = 0;
  *(undefined1 *)(param_1 + 0x86) = 0;
  *(undefined1 *)(param_1 + 0xa2) = 0;
  param_1[0x84] = (long ****)0x0;
  param_1[0xa3] = (long ****)0x0;
  param_1[0xa5] = (long ****)0x0;
  param_1[0xa4] = (long ****)0x0;
  *(undefined1 *)(param_1 + 0xa6) = 1;
  param_1[0xa7] = (long ****)0x0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xa9) = 0;
  *(undefined1 *)(param_1 + 0xaa) = 0;
  *(undefined1 *)(param_1 + 0xab) = 0;
  FUN_007b94b0(param_1 + 0xac);
  FUN_007b861c(param_1 + 0xce);
  FUN_009658c4(param_1 + 0x17a);
  *(undefined1 *)(param_1 + 0x184) = 0;
  *(undefined4 *)((long)param_1 + 0xc24) = 0;
  *(undefined1 *)(param_1 + 0x185) = 0;
  *(undefined1 *)((long)param_1 + 0xc2c) = 0;
  *(undefined4 *)(param_1 + 0x186) = 0;
  param_1[0x187] = (long ****)0x0;
  pppplVar15 = (long ****)operator_new(4);
  param_1[0x188] = pppplVar15;
  param_1[0x189] = pppplVar15;
  param_1[0x18a] = (long ****)((long)pppplVar15 + 4);
  if (pppplVar15 != (long ****)0x0) {
    *(undefined4 *)pppplVar15 = 4;
    param_1[0x189] = (long ****)((long)pppplVar15 + 4);
    FUN_00965eb4(param_1 + 0x18b,param_1 + 3,param_1 + 1);
    FUN_0097f05c(param_1 + 0x24a,param_4);
    pppplVar15 = param_1[4];
    *(undefined1 *)(param_1 + 0x255) = 0;
    pppplVar13 = (long ****)operator_new(0x108);
    FUN_0097cdbc(pppplVar13,param_1 + 0x24a,param_4,pppplVar15);
    param_1[0x256] = pppplVar13;
    param_1[599] = (long ****)0x0;
    pppplVar14 = (long ****)operator_new(0x20);
    pppplVar15 = param_1[4];
    pppplVar18 = param_1[5];
    uVar4 = *(undefined1 *)(param_1 + 0xb);
    *pppplVar14 = (long ***)&PTR_FUN_00d3e730;
    *(undefined4 *)(pppplVar14 + 1) = 0;
    *(undefined1 *)((long)pppplVar14 + 0xc) = 0;
    *(undefined4 *)(pppplVar14 + 2) = 0;
    pppplVar14[3] = (long ***)pppplVar13;
    param_1[600] = pppplVar14;
    param_1[0x259] = (long ****)0x0;
    param_1[0x25b] = (long ****)0x0;
    param_1[0x25a] = (long ****)0x0;
    FUN_00983064(param_1 + 0x25c,param_1 + 0x24a,param_4,pppplVar18,uVar4,param_6,pppplVar14,
                 pppplVar15);
    param_1[0x397] = (long ****)0x0;
    param_1[0x396] = (long ****)0x0;
    param_1[0x395] = (long ****)0x0;
    FUN_00967248(param_1 + 0x398,param_1[0x22],0);
    (*(code *)(*param_1[4])[2])(&local_c0,param_1[4],"WebRTC-DefaultBitrateLimitsKillSwitch",0x25);
    puVar1 = puStack_b8;
    if (-1 < (long)local_b0) {
      puVar1 = (undefined1 *)((ulong)local_b0 >> 0x38);
    }
    if (puVar1 < 7) {
      bVar8 = true;
    }
    else {
      pppppplVar2 = (long ******)local_c0;
      if (-1 < (long)local_b0) {
        pppppplVar2 = &local_c0;
      }
      bVar8 = *(int *)pppppplVar2 != 0x62616e45 || *(int *)((long)pppppplVar2 + 3) != 0x64656c62;
    }
    if ((long)local_b0 < 0) {
      operator_delete(local_c0);
    }
    *(bool *)(param_1 + 0x3aa) = bVar8;
    FUN_00958c98(param_1 + 0x3ab);
    (*(code *)(*param_1[4])[2])(&local_c0,param_1[4],"WebRTC-QpParsingKillSwitch",0x1a);
    puVar1 = puStack_b8;
    if (-1 < (long)local_b0) {
      puVar1 = (undefined1 *)((ulong)local_b0 >> 0x38);
    }
    if (puVar1 < 7) {
      bVar8 = true;
    }
    else {
      pppppplVar2 = (long ******)local_c0;
      if (-1 < (long)local_b0) {
        pppppplVar2 = &local_c0;
      }
      bVar8 = *(int *)pppppplVar2 != 0x62616e45 || *(int *)((long)pppppplVar2 + 3) != 0x64656c62;
    }
    if ((long)local_b0 < 0) {
      operator_delete(local_c0);
    }
    *(bool *)(param_1 + 0x414) = bVar8;
    *(undefined1 *)(param_1 + 0x415) = 0;
    *(undefined4 *)((long)param_1 + 0x20c4) = 0;
    *(undefined8 *)((long)param_1 + 0x20b4) = 0;
    *(undefined8 *)((long)param_1 + 0x20bc) = 0;
    *(undefined8 *)((long)param_1 + 0x20ac) = 0;
    (*(code *)(*param_1[4])[2])
              (&local_c0,param_1[4],"WebRTC-SwitchEncoderOnInitializationFailures",0x2c);
    if (-1 < (char)local_b0._7_1_) {
      puStack_b8 = (undefined1 *)(ulong)local_b0._7_1_;
    }
    if (puStack_b8 < 8) {
      bVar8 = true;
    }
    else {
      pppppplVar2 = (long ******)local_c0;
      if (-1 < (char)local_b0._7_1_) {
        pppppplVar2 = &local_c0;
      }
      bVar8 = *pppppplVar2 != (long *****)0x64656c6261736944;
    }
    if ((char)local_b0._7_1_ < '\0') {
      operator_delete(local_c0);
    }
    pppplVar15 = param_1[4];
    *(bool *)(param_1 + 0x41a) = bVar8;
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_88 = 0xaaaaaaaa;
    local_84 = 0xaaaaaaaa;
    puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = (long *****)&DAT_aaaaaaaaaaaaaaaa;
    pcStack_a8 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    local_b0 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    FUN_00662484(&local_c0,"Disabled",8);
    pppcStack_f8 = (char ***)&DAT_aaaaaaaaaaaaaaaa;
    local_100 = (char *****)&DAT_aaaaaaaaaaaaaaaa;
    puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
    local_f0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
    local_e0 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00661054(&local_100,"max_core_count",0xe);
    uStack_c8 = (undefined1 *)CONCAT44(2,(undefined4)uStack_c8);
    local_100 = (char *****)(PTR_DAT_00d52028 + 0x10);
    local_110 = (long *****)&local_c0;
    local_108 = (char *****)&local_100;
    (*(code *)(*pppplVar15)[2])(&local_128,pppplVar15,"WebRTC-VP9-LowTierOptimizations",0x1f);
    pppppplVar2 = (long ******)local_128;
    if (-1 < (char)bStack_111) {
      uStack_120 = (ulong)bStack_111;
      pppppplVar2 = &local_128;
    }
    FUN_00661cc0(&local_110,2,pppppplVar2,uStack_120);
    if ((char)bStack_111 < '\0') {
      operator_delete(local_128);
    }
    uVar16 = FUN_006624bc(&local_c0);
    uVar12 = (ulong)uStack_c8 >> 0x20;
    FUN_006634ac(&local_100);
    FUN_006634ac(&local_c0);
    uVar11 = 0;
    if ((uVar16 & 1) == 0) {
      uVar11 = uVar12 | 0x100000000;
    }
    pppplVar15 = param_1[4];
    *(int *)((long)param_1 + 0x20d4) = (int)uVar11;
    uStack_80 = 0xaaaaaaaa;
    uStack_7c = 0xaaaaaaaa;
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_88 = 0xaaaaaaaa;
    local_84 = 0xaaaaaaaa;
    puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
    *(char *)(param_1 + 0x41b) = (char)(uVar11 >> 0x20);
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = (long *****)&DAT_aaaaaaaaaaaaaaaa;
    pcStack_a8 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    local_b0 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    FUN_00661054(&local_c0,"encoder_thread_limit",0x14);
    local_84 = local_84 & 0xffffff00;
    uStack_80 = uStack_80 & 0xffffff00;
    local_c0 = (long *****)(PTR_DAT_00d51ff8 + 0x10);
    local_128 = (long *****)&local_c0;
    (*(code *)(*pppplVar15)[2])(&local_100,pppplVar15,"WebRTC-VideoEncoderSettings",0x1b);
    ppppcVar3 = (char ****)pppcStack_f8;
    ppppppcVar5 = (char ******)local_100;
    if (-1 < (long)local_f0) {
      ppppcVar3 = (char ****)((ulong)local_f0 >> 0x38);
      ppppppcVar5 = &local_100;
    }
    FUN_00661cc0(&local_128,1,ppppppcVar5,ppppcVar3);
    if ((long)local_f0 < 0) {
      operator_delete(local_100);
    }
    uVar7 = uStack_80;
    uVar6 = local_84;
    FUN_006634ac(&local_c0);
    *(uint *)((long)param_1 + 0x20dc) = uVar6;
    *(char *)(param_1 + 0x41c) = (char)uVar7;
    FUN_00981370((long)param_1 + 0x20e4,param_1[4]);
    *(undefined1 *)(param_1 + 0x422) = 0;
    *(undefined1 *)(param_1 + 0x428) = 0;
    FUN_007ebca0(param_1 + 0x429);
    param_1[0x42b] = (long ****)0x0;
    param_1[0x42a] = param_8;
    pppplVar15 = (long ****)operator_new(0x40);
    *pppplVar15 = (long ***)&PTR_FUN_00d3e558;
    pppplVar15[1] = (long ***)param_1;
    local_c0 = (long *****)&DAT_aaaaaaaaaaaaaaaa;
    pthread_mutexattr_init((pthread_mutexattr_t *)&local_c0);
    pthread_mutex_init((pthread_mutex_t *)(pppplVar15 + 2),(pthread_mutexattr_t *)&local_c0);
    pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_c0);
    *(undefined4 *)(pppplVar15 + 7) = 0;
    *pppplVar15 = (long ***)&PTR_FUN_00d3e758;
    param_1[0x42c] = pppplVar15;
    if (pppplVar15 != (long ****)0x0) {
      FUN_00d0f740(1,pppplVar15 + 7);
    }
    param_1[0x433] = (long ****)0x0;
    param_1[0x430] = (long ****)0x0;
    param_1[0x42f] = (long ****)0x0;
    param_1[0x432] = (long ****)0x0;
    param_1[0x431] = (long ****)0x0;
    param_1[0x42e] = (long ****)0x0;
    param_1[0x42d] = (long ****)0x0;
    if (((DAT_00d80638 & 1) == 0) && (iVar9 = FUN_0054fdd4(&DAT_00d80638), iVar9 != 0)) {
      DAT_00d80630 = (char ****)FUN_0066d328("webrtc");
      FUN_0054ff1c(&DAT_00d80638);
    }
    local_100 = (char *****)0x0;
    local_f0 = &DAT_aaaaaaaaaaaaaaaa;
    pppcStack_f8 = (char ***)&DAT_aaaaaaaaaaaaaaaa;
    if (*(char *)DAT_00d80630 != '\0') {
      FUN_0066d348(0x42,DAT_00d80630,"VideoStreamEncoder::VideoStreamEncoder",0,0,0,0,0,0);
      pppcStack_f8 = (char ***)DAT_00d80630;
      local_f0 = "VideoStreamEncoder::VideoStreamEncoder";
      local_100 = (char *****)&pppcStack_f8;
    }
    (*(code *)(*param_1[0x22])[5])(param_1[0x22],param_1 + 0x20);
    FUN_00983554(param_1 + 0x25c,param_1[0x42a]);
    local_b0 = FUN_004473ec;
    pcStack_a8 = FUN_0096324c;
    local_c0 = param_1;
    (*(code *)(*param_1[0x42a])[1])(param_1[0x42a],&local_c0,&local_128,&local_110);
    (*local_b0)(0,&local_c0,&local_c0);
    if ((local_100 != (char *****)0x0) && (*(char *)*local_100 != '\0')) {
      FUN_0066d348(0x45,*local_100,local_100[1],0,0,0,0,0,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00958c98  FUN_00958c98 =====

void FUN_00958c98(pthread_mutex_t *param_1)

{
  undefined1 *local_28;
  
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_28);
  pthread_mutex_init(param_1,(pthread_mutexattr_t *)&local_28);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_28);
  FUN_00967980(param_1 + 1);
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_28);
  pthread_mutex_init((pthread_mutex_t *)((long)param_1 + 0x90),(pthread_mutexattr_t *)&local_28);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_28);
  FUN_00967980((long)param_1 + 0xb8);
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_28);
  pthread_mutex_init((pthread_mutex_t *)((long)param_1 + 0x120),(pthread_mutexattr_t *)&local_28);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_28);
  FUN_00967980((long)param_1 + 0x148);
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_28);
  pthread_mutex_init((pthread_mutex_t *)((long)param_1 + 0x1b0),(pthread_mutexattr_t *)&local_28);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_28);
  FUN_0087f7a4((long)param_1 + 0x1d8);
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_28);
  pthread_mutex_init((pthread_mutex_t *)((long)param_1 + 0x238),(pthread_mutexattr_t *)&local_28);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_28);
  FUN_0087f7a4((long)param_1 + 0x260);
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_28);
  pthread_mutex_init((pthread_mutex_t *)((long)param_1 + 0x2c0),(pthread_mutexattr_t *)&local_28);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_28);
  FUN_0087f7a4((long)param_1 + 0x2e8);
  return;
}


// ===== 00958db8  FUN_00958db8 =====

void FUN_00958db8(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  void *pvVar12;
  
  lVar11 = param_1[0x42c];
  *param_1 = &PTR_FUN_00d3e590;
  param_1[1] = &PTR_FUN_00d3e630;
  param_1[2] = &PTR_FUN_00d3e670;
  pthread_mutex_lock((pthread_mutex_t *)(lVar11 + 0x10));
  *(undefined8 *)(lVar11 + 8) = 0;
  pthread_mutex_unlock((pthread_mutex_t *)(lVar11 + 0x10));
  (*(code *)**(undefined8 **)param_1[0x42a])();
  param_1[0x42a] = 0;
  FUN_009592a4(param_1 + 0x42e);
  if ((long *)param_1[0x42c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x42c] + 8))();
  }
  plVar2 = (long *)param_1[0x42b];
  param_1[0x42b] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  puVar3 = (undefined8 *)param_1[0x42a];
  param_1[0x42a] = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)();
  }
  FUN_007ebdcc(param_1[0x429]);
  pvVar12 = (void *)param_1[0x429];
  if ((pvVar12 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar12), iVar1 == 1)) {
    operator_delete(pvVar12);
  }
  puVar3 = (undefined8 *)param_1[0x416];
  if (puVar3 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)param_1[0x417];
    puVar4 = puVar3;
    if (puVar3 != puVar6) {
      do {
        puVar6 = puVar6 + -1;
        if (puVar6 == (undefined8 *)0x0) goto LAB_00959158;
        pvVar12 = (void *)*puVar6;
        *puVar6 = 0;
        if (pvVar12 != (void *)0x0) {
          FUN_009215a0((long)pvVar12 + 0x28);
          operator_delete(pvVar12);
        }
      } while (puVar6 != puVar3);
      puVar4 = (undefined8 *)param_1[0x416];
    }
    param_1[0x417] = puVar3;
    operator_delete(puVar4);
  }
  FUN_0087f7dc(param_1 + 0x408);
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x403));
  FUN_0087f7dc(param_1 + 0x3f7);
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x3f2));
  FUN_0087f7dc(param_1 + 0x3e6);
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x3e1));
  FUN_009679ac(param_1 + 0x3d4);
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x3cf));
  FUN_009679ac(param_1 + 0x3c2);
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x3bd));
  FUN_009679ac(param_1 + 0x3b0);
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x3ab));
  FUN_009672a4(param_1 + 0x398);
  plVar2 = (long *)param_1[0x395];
  if (plVar2 != (long *)0x0) {
    plVar7 = (long *)param_1[0x396];
    plVar5 = plVar2;
    if (plVar2 != plVar7) {
      do {
        plVar7 = plVar7 + -1;
        if (plVar7 == (long *)0x0) goto LAB_00959158;
        if ((long *)*plVar7 != (long *)0x0) {
          (**(code **)(*(long *)*plVar7 + 8))();
        }
      } while (plVar7 != plVar2);
      plVar5 = (long *)param_1[0x395];
    }
    param_1[0x396] = plVar2;
    operator_delete(plVar5);
  }
  FUN_00983344(param_1 + 0x25c);
  pvVar12 = (void *)param_1[0x259];
  if (pvVar12 == (void *)0x0) {
LAB_00959088:
    plVar2 = (long *)param_1[600];
    param_1[600] = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = (long *)param_1[599];
    param_1[599] = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    pvVar12 = (void *)param_1[0x256];
    param_1[0x256] = 0;
    if (pvVar12 != (void *)0x0) {
      FUN_0097ce20(pvVar12);
      operator_delete(pvVar12);
    }
    FUN_0097f0c8(param_1 + 0x24a);
    FUN_00965f68(param_1 + 0x18b);
    pvVar12 = (void *)param_1[0x188];
    if (pvVar12 == (void *)0x0) {
LAB_0095917c:
      pvVar12 = (void *)param_1[0x187];
      param_1[0x187] = 0;
      if (pvVar12 != (void *)0x0) {
        FUN_009688fc(pvVar12);
        operator_delete(pvVar12);
      }
      FUN_00965a80(param_1 + 0x17a);
      FUN_008a03f4(param_1 + 0xce);
      FUN_007b9754(param_1 + 0xac);
      if (*(char *)(param_1 + 0xa2) == '\x01') {
        FUN_007bf020(param_1 + 0x86);
      }
      if (*(char *)(param_1 + 0x7f) == '\x01') {
        FUN_007baa68(param_1 + 0x51);
      }
      if (param_1[0x42] != 0) {
        FUN_00963198(param_1 + 0x42);
      }
      plVar2 = (long *)param_1[0x3f];
      param_1[0x3f] = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      plVar2 = (long *)param_1[0x3d];
      param_1[0x3d] = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      FUN_0084966c(param_1 + 0x23);
      plVar2 = (long *)param_1[0x22];
      param_1[0x22] = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      plVar2 = (long *)param_1[0x1d];
      param_1[0x1d] = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      FUN_008a56ec(param_1 + 0x11);
      plVar2 = (long *)param_1[3];
      if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
        (**(code **)(*plVar2 + 8))(plVar2);
      }
      FUN_0097cc6c(param_1 + 2);
      return;
    }
    pvVar8 = (void *)param_1[0x189];
    uVar10 = (ulong)((long)pvVar8 + (-4 - ((long)pvVar8 << 0x3e))) >> 2;
    uVar9 = (ulong)(((long)pvVar12 - (long)pvVar8 << 0x3e) - ((long)pvVar12 - (long)pvVar8)) >> 2;
    if (uVar10 <= uVar9) {
      uVar9 = uVar10;
    }
    if ((1 < uVar9) && ((((int)pvVar12 - (int)pvVar8 | -(int)pvVar8) & 3U) == 0)) {
      uVar9 = uVar9 & 0x3ffffffffffffffe;
      pvVar8 = (void *)((long)pvVar8 + uVar9 * -4);
      do {
        uVar9 = uVar9 - 2;
      } while (uVar9 != 0);
    }
    do {
      if (pvVar8 == pvVar12) {
        param_1[0x189] = pvVar12;
        operator_delete(pvVar12);
        goto LAB_0095917c;
      }
      pvVar8 = (void *)((long)pvVar8 + -4);
    } while (pvVar8 != (void *)0x0);
  }
  else {
    pvVar8 = (void *)param_1[0x25a];
    uVar10 = (ulong)((long)pvVar8 + (-8 - ((long)pvVar8 << 0x3d))) >> 3;
    uVar9 = (ulong)(((long)pvVar12 - (long)pvVar8 << 0x3d) - ((long)pvVar12 - (long)pvVar8)) >> 3;
    if (uVar10 <= uVar9) {
      uVar9 = uVar10;
    }
    if ((1 < uVar9) && ((((int)pvVar12 - (int)pvVar8 | -(int)pvVar8) & 7U) == 0)) {
      uVar9 = uVar9 & 0x1ffffffffffffffe;
      pvVar8 = (void *)((long)pvVar8 + uVar9 * -8);
      do {
        uVar9 = uVar9 - 2;
      } while (uVar9 != 0);
    }
    do {
      if (pvVar8 == pvVar12) {
        param_1[0x25a] = pvVar12;
        operator_delete(pvVar12);
        goto LAB_00959088;
      }
      pvVar8 = (void *)((long)pvVar8 + -8);
    } while (pvVar8 != (void *)0x0);
  }
LAB_00959158:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 009592a4  FUN_009592a4 =====

void FUN_009592a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  
  puVar7 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)param_1[2];
  puVar1 = puVar7;
  if (puVar7 != puVar3) {
    uVar4 = param_1[4];
    plVar8 = puVar7 + (uVar4 >> 4);
    lVar6 = *plVar8 + (uVar4 & 0xf) * 0xf8;
    lVar9 = puVar7[param_1[5] + uVar4 >> 4] + (param_1[5] + uVar4 & 0xf) * 0xf8;
    puVar1 = puVar3;
    if (lVar6 != lVar9) {
      do {
        if (lVar6 == 0) goto LAB_00959444;
        FUN_007bf020(lVar6);
        lVar6 = lVar6 + 0xf8;
        if (lVar6 - *plVar8 == 0xf80) {
          plVar8 = plVar8 + 1;
          lVar6 = *plVar8;
        }
      } while (lVar6 != lVar9);
      puVar7 = (undefined8 *)param_1[1];
      puVar3 = (undefined8 *)param_1[2];
      puVar1 = puVar3;
    }
  }
  param_1[5] = 0;
  lVar6 = (long)puVar1 - (long)puVar7;
  while (uVar4 = lVar6 >> 3, 2 < uVar4) {
    operator_delete((void *)*puVar7);
    puVar3 = (undefined8 *)param_1[2];
    puVar7 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = puVar7;
    lVar6 = (long)puVar3 - (long)puVar7;
  }
  if (uVar4 == 1) {
    uVar2 = 8;
  }
  else {
    if (uVar4 != 2) goto LAB_009593bc;
    uVar2 = 0x10;
  }
  param_1[4] = uVar2;
LAB_009593bc:
  puVar1 = puVar3;
  if (puVar7 != puVar3) {
    do {
      puVar1 = puVar7 + 1;
      operator_delete((void *)*puVar7);
      puVar7 = puVar1;
    } while (puVar1 != puVar3);
    puVar3 = (undefined8 *)param_1[1];
    puVar1 = (undefined8 *)param_1[2];
  }
  uVar5 = (ulong)((long)puVar1 + (-8 - ((long)puVar1 << 0x3d))) >> 3;
  uVar4 = (ulong)(((long)puVar3 - (long)puVar1 << 0x3d) - ((long)puVar3 - (long)puVar1)) >> 3;
  if (uVar5 <= uVar4) {
    uVar4 = uVar5;
  }
  if ((1 < uVar4) && ((((int)puVar3 - (int)puVar1 | -(int)puVar1) & 7U) == 0)) {
    uVar4 = uVar4 & 0x1ffffffffffffffe;
    puVar1 = puVar1 + -uVar4;
    do {
      uVar4 = uVar4 - 2;
    } while (uVar4 != 0);
  }
  do {
    if (puVar1 == puVar3) {
      param_1[2] = puVar1;
      if ((void *)*param_1 != (void *)0x0) {
        operator_delete((void *)*param_1);
        return;
      }
      return;
    }
    puVar1 = puVar1 + -1;
  } while (puVar1 != (undefined8 *)0x0);
LAB_00959444:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 009594a4  FUN_009594a4 =====

void FUN_009594a4(void)

{
  return;
}


// ===== 009594ac  FUN_009594ac =====

void FUN_009594ac(long param_1)

{
  FUN_00958db8(param_1 + -8);
  return;
}


// ===== 009594b8  FUN_009594b8 =====

void FUN_009594b8(long param_1)

{
  FUN_00958db8(param_1 + -0x10);
  return;
}


// ===== 009594c4  FUN_009594c4 =====

void FUN_009594c4(void *param_1)

{
  FUN_00958db8();
  operator_delete(param_1);
  return;
}


// ===== 009594f4  FUN_009594f4 =====

void FUN_009594f4(long param_1)

{
  FUN_00958db8((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 00959528  FUN_00959528 =====

void FUN_00959528(long param_1)

{
  FUN_00958db8((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}


// ===== 0095955c  FUN_0095955c =====

void FUN_0095955c(long param_1)

{
  long *plVar1;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  FUN_0096734c(param_1 + 0x1cc0,0);
  puStack_5c = &DAT_aaaaaaaaaaaaaaaa;
  uStack_60 = 0xaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_68 = 0xaaaaaaaa;
  local_64 = 0xaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0066f1ac(&local_b0);
  plVar1 = *(long **)(param_1 + 0x2150);
  local_50[0] = (long *)operator_new(0x18);
  *local_50[0] = param_1;
  *(undefined1 *)(local_50[0] + 1) = 1;
  local_50[0][2] = (long)&local_b0;
  local_40 = FUN_009635d4;
  pcStack_38 = FUN_009633dc;
  (**(code **)(*plVar1 + 8))(plVar1,local_50,&uStack_11,&uStack_12);
  (*local_40)(0,local_50,local_50);
  FUN_0066f318(&local_b0,0x7fffffffffffffff,3000000);
  FUN_0066f2b0(&local_b0);
  return;
}


// ===== 00959640  FUN_00959640 =====

void FUN_00959640(long param_1,undefined8 param_2)

{
  undefined1 uStack_32;
  undefined1 uStack_31;
  long local_30;
  undefined8 uStack_28;
  code *local_20;
  code *pcStack_18;
  
  local_20 = FUN_004473ec;
  pcStack_18 = FUN_00963648;
  local_30 = param_1;
  uStack_28 = param_2;
  (**(code **)(**(long **)(param_1 + 0x2150) + 8))
            (*(long **)(param_1 + 0x2150),&local_30,&uStack_31,&uStack_32);
  (*local_20)(0,&local_30,&local_30);
  return;
}


// ===== 009596ac  FUN_009596ac =====

void FUN_009596ac(long param_1,undefined8 *param_2)

{
  int iVar1;
  long *plVar2;
  char **local_78;
  char *local_70;
  char *pcStack_68;
  long local_60;
  undefined8 uStack_58;
  code *local_50;
  code *pcStack_48;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  if (((DAT_00d80648 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d80648), iVar1 != 0)) {
    DAT_00d80640 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d80648);
  }
  local_78 = (char **)0x0;
  pcStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d80640 != '\0') {
    local_78 = &local_70;
    FUN_0066d348(0x42,DAT_00d80640,"VideoStreamEncoder::AddAdaptationResource",0,0,0,0,0,0);
    local_70 = DAT_00d80640;
    pcStack_68 = "VideoStreamEncoder::AddAdaptationResource";
  }
  if (((DAT_00d80658 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d80658), iVar1 != 0)) {
    DAT_00d80650 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d80658);
  }
  if (*DAT_00d80650 != '\0') {
    FUN_0066d348(0x53,DAT_00d80650,"VideoStreamEncoder::AddAdaptationResource(latency)",param_1,0,0,
                 0,0,6);
  }
  uStack_58 = *param_2;
  plVar2 = *(long **)(param_1 + 0x2150);
  *param_2 = 0;
  local_50 = FUN_009637c8;
  pcStack_48 = FUN_0096366c;
  local_60 = param_1;
  (**(code **)(*plVar2 + 8))(plVar2,&local_60,&uStack_21,&uStack_22);
  (*local_50)(0,&local_60,&local_60);
  if ((local_78 != (char **)0x0) && (**local_78 != '\0')) {
    FUN_0066d348(0x45,*local_78,local_78[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 0095988c  FUN_0095988c =====

void FUN_0095988c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  long *local_60;
  undefined8 uStack_58;
  code *local_50;
  code *pcStack_48;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  puStack_6c = &DAT_aaaaaaaaaaaaaaaa;
  uStack_70 = 0xaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_78 = 0xaaaaaaaa;
  local_74 = 0xaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0066f1ac(&local_c0);
  plVar1 = *(long **)(param_2 + 0x2150);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_60 = (long *)operator_new(0x18);
  *local_60 = param_2;
  local_60[1] = (long)param_1;
  local_60[2] = (long)&local_c0;
  uStack_58 = 0x18;
  local_50 = FUN_005ea56c;
  pcStack_48 = FUN_00963ad0;
  (**(code **)(*plVar1 + 8))(plVar1,&local_60,&uStack_21,&uStack_22);
  (*local_50)(0,&local_60,&local_60);
  FUN_0066f318(&local_c0,0x7fffffffffffffff,3000000);
  FUN_0066f2b0(&local_c0);
  return;
}


// ===== 00959970  FUN_00959970 =====

void FUN_00959970(long param_1,long param_2,undefined4 *param_3)

{
  long local_50;
  undefined4 local_48;
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  FUN_0096734c(param_1 + 0x1cc0);
  FUN_0097f118(param_1 + 0x1250,param_2 != 0);
  local_48 = *param_3;
  local_40 = FUN_004473ec;
  pcStack_38 = FUN_00963bb8;
  local_50 = param_1;
  (**(code **)(**(long **)(param_1 + 0x2150) + 8))
            (*(long **)(param_1 + 0x2150),&local_50,&uStack_11,&uStack_12);
  (*local_40)(0,&local_50,&local_50);
  return;
}


// ===== 00959a1c  FUN_00959a1c =====

void FUN_00959a1c(long param_1,undefined8 param_2,undefined4 param_3)

{
  long local_50;
  undefined8 uStack_48;
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  FUN_00967638(param_1 + 0x1cc0,param_3);
  FUN_00967560(param_1 + 0x1cc0);
  local_40 = FUN_004473ec;
  pcStack_38 = FUN_00963cb4;
  local_50 = param_1;
  uStack_48 = param_2;
  (**(code **)(**(long **)(param_1 + 0x2150) + 8))
            (*(long **)(param_1 + 0x2150),&local_50,&uStack_11,&uStack_12);
  (*local_40)(0,&local_50,&local_50);
  return;
}


// ===== 00959ab4  FUN_00959ab4 =====

void FUN_00959ab4(long param_1,undefined4 param_2)

{
  undefined1 uStack_32;
  undefined1 uStack_31;
  long local_30;
  undefined4 local_28;
  code *local_20;
  code *pcStack_18;
  
  local_20 = FUN_004473ec;
  pcStack_18 = FUN_00963cc4;
  local_30 = param_1;
  local_28 = param_2;
  (**(code **)(**(long **)(param_1 + 0x2150) + 8))
            (*(long **)(param_1 + 0x2150),&local_30,&uStack_31,&uStack_32);
  (*local_20)(0,&local_30,&local_30);
  return;
}


// ===== 00959b24  FUN_00959b24 =====

void FUN_00959b24(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_130 [16];
  code *local_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [208];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008495b4(auStack_108);
  local_120 = FUN_00433984;
  uStack_118 = 0;
  (**(code **)(*param_1 + 0x60))(param_1,auStack_108,param_3,auStack_130);
  (*local_120)(0,auStack_130,auStack_130);
  FUN_0084966c(auStack_108);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00959bc8  FUN_00959bc8 =====

void FUN_00959bc8(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  long *plVar7;
  byte bVar8;
  long *plVar9;
  uint uVar10;
  uint uVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 uStack_1a2;
  undefined1 uStack_1a1;
  long *local_1a0 [2];
  code *local_190;
  code *pcStack_188;
  long local_180 [27];
  long local_a8;
  undefined1 auStack_a0 [16];
  code *local_90;
  long lStack_88;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  bVar8 = 0;
  uVar11 = 0xaaaaaa00;
  uVar3 = 0xffffffff;
  uVar13 = DAT_001f58f0;
  for (lVar1 = *(long *)(param_2 + 0xa8); lVar1 != *(long *)(param_2 + 0xb0); lVar1 = lVar1 + 200) {
    uVar10 = uVar3;
    if ((*(byte *)(lVar1 + 0x52) == 1) &&
       (uVar10 = *(uint *)(lVar1 + 0x10), (int)*(uint *)(lVar1 + 0x10) <= (int)uVar3)) {
      uVar10 = uVar3;
    }
    if (*(char *)(lVar1 + 0x5c) == '\x01') {
      bVar5 = (uVar11 & 1) == 0;
      if (bVar5) {
        uVar11 = 0xaaaaaa01;
      }
      uVar14 = NEON_smax(*(undefined8 *)(lVar1 + 0x54),uVar13,4);
      uVar13 = *(undefined8 *)(lVar1 + 0x54);
      if (!bVar5) {
        uVar13 = uVar14;
      }
    }
    bVar8 = *(byte *)(lVar1 + 0x52) & 1 | bVar8;
    uVar3 = uVar10;
  }
  auVar15 = FUN_009675fc(param_1 + 0x1cc0);
  uVar10 = auVar15._8_4_ & 0xff;
  if ((uVar10 & uVar11 & 0xff) == 0) {
    if ((uVar11 & 0xff) == uVar10) goto LAB_00959ce0;
  }
  else {
    if ((auVar15 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    if (((int)uVar13 == auVar15._0_4_) && ((int)((ulong)uVar13 >> 0x20) == auVar15._4_4_)) {
LAB_00959ce0:
      bVar6 = FUN_009675f0(param_1 + 0x1cc0);
      if (((bVar8 ^ bVar6) & 1) == 0) {
        auVar15 = FUN_009675c8(param_1 + 0x1cc0);
        dVar12 = auVar15._0_8_;
        if ((auVar15 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
          dVar12 = -1.0;
        }
        if (dVar12 == (double)(int)uVar3) goto LAB_00959d64;
      }
    }
  }
  FUN_00967748(param_1 + 0x1cc0,uVar13,uVar11);
  dVar12 = (double)uVar3;
  bVar5 = (int)(uVar3 + 1) < 0;
  if (uVar3 == 0xffffffff || bVar5 != SCARRY4(uVar3,1)) {
    dVar12 = 0.0;
  }
  FUN_00967628(param_1 + 0x1cc0,dVar12,uVar3 != 0xffffffff && bVar5 == SCARRY4(uVar3,1));
  FUN_0096773c(param_1 + 0x1cc0,bVar8);
  FUN_00967560(param_1 + 0x1cc0);
  FUN_00967544(param_1 + 0x1cc0);
LAB_00959d64:
  plVar9 = *(long **)(param_1 + 0x2150);
  local_180[0] = param_1;
  FUN_008495b4((ulong)local_180 | 8,param_2);
  local_a8 = param_3;
  (**(code **)(param_4 + 0x10))(1,param_4,auStack_a0);
  lStack_88 = *(long *)(param_4 + 0x18);
  local_90 = *(code **)(param_4 + 0x10);
  *(code **)(param_4 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_4 + 0x18) = 0;
  plVar7 = (long *)operator_new(0x100);
  *plVar7 = local_180[0];
  FUN_008495b4(plVar7 + 1,(ulong)local_180 | 8);
  plVar7[0x1b] = local_a8;
  (*local_90)(1,auStack_a0,plVar7 + 0x1c);
  lVar1 = lStack_88;
  pcVar4 = local_90;
  local_90 = FUN_00433984;
  lStack_88 = 0;
  plVar7[0x1f] = lVar1;
  plVar7[0x1e] = (long)pcVar4;
  local_190 = FUN_00963fd8;
  pcStack_188 = FUN_00963d38;
  local_1a0[0] = plVar7;
  (**(code **)(*plVar9 + 8))(plVar9,local_1a0,&uStack_1a1,&uStack_1a2);
  (*local_190)(0,local_1a0,local_1a0);
  (*local_90)(0,auStack_a0,auStack_a0);
  FUN_0084966c((ulong)local_180 | 8);
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00959ea4  FUN_00959ea4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00959ea4(long *****param_1)

{
  byte *pbVar1;
  int *piVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  ushort uVar8;
  undefined1 *puVar9;
  long *****ppppplVar10;
  code *pcVar11;
  bool bVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  long ****pppplVar18;
  undefined8 uVar19;
  long *plVar20;
  long lVar21;
  undefined4 *puVar22;
  long lVar23;
  undefined8 uVar24;
  long ******pppppplVar25;
  byte *pbVar26;
  long ****pppplVar27;
  byte bVar28;
  long ****pppplVar29;
  ulong *puVar30;
  ulong *puVar31;
  long *******ppppppplVar32;
  int *piVar33;
  ulong *puVar34;
  ulong uVar35;
  ulong uVar36;
  byte bVar37;
  int iVar38;
  char *pcVar39;
  int iVar40;
  long *****ppppplVar41;
  long *****ppppplVar42;
  long ******pppppplVar43;
  undefined8 *puVar44;
  undefined8 *puVar45;
  undefined4 uVar46;
  float fVar47;
  undefined1 auVar48 [16];
  undefined8 in_stack_ffffffffffffe470;
  undefined8 in_stack_ffffffffffffe480;
  undefined4 local_1b30 [2];
  void *local_1b28;
  undefined8 uStack_1b20;
  long local_1b18;
  undefined4 local_1b10;
  undefined3 uStack_1b0c;
  undefined1 auStack_1b08 [8];
  void *local_1b00;
  char cStack_1ae9;
  ulong *local_1ae0;
  ulong *puStack_1ad8;
  undefined8 local_1ad0;
  long *******local_1ac0;
  undefined8 uStack_1ab8;
  code *local_1ab0;
  undefined5 local_1aa8;
  undefined2 uStack_1aa3;
  undefined4 uStack_1aa1;
  undefined1 uStack_1a9d;
  undefined1 uStack_1a9c;
  byte bStack_1a9b;
  undefined1 local_1a9a;
  undefined1 uStack_1949;
  char *local_1948;
  undefined8 local_1940;
  undefined1 *local_1938;
  char *local_1930;
  char **local_1928;
  undefined8 local_1920;
  char **local_1918;
  undefined *local_1910;
  undefined8 *local_1908;
  long ******local_1900 [2];
  code *local_18f0;
  undefined8 local_18e8;
  long *******local_18e0 [2];
  code *local_18d0;
  undefined8 local_18c8;
  long *****local_18b8;
  long *****local_18b0;
  long *****local_18a8;
  undefined1 *local_18a0;
  undefined1 *puStack_1898;
  undefined1 *local_1890;
  ulong *local_1880;
  ulong *puStack_1878;
  undefined8 local_1870;
  long *******local_1860;
  long *******ppppppplStack_1858;
  code *local_1850;
  undefined **local_1848;
  undefined8 local_1840;
  undefined8 local_176c;
  double local_1708;
  long ****local_16f8;
  undefined8 local_16f0;
  long ****pppplStack_16e8;
  undefined8 local_16e0;
  undefined1 *puStack_16d8;
  undefined1 *local_16d0;
  undefined1 *puStack_16c8;
  undefined1 *local_16c0;
  undefined1 *puStack_16b8;
  undefined1 *local_16b0;
  undefined1 *puStack_16a8;
  undefined1 *local_16a0;
  undefined1 *puStack_1698;
  undefined1 *local_1690;
  undefined1 *puStack_1688;
  undefined1 *local_1680;
  undefined1 *puStack_1678;
  undefined1 *local_1670;
  undefined1 *puStack_1668;
  undefined1 *local_1660;
  undefined1 *puStack_1658;
  undefined1 *local_1650;
  undefined1 *puStack_1648;
  undefined1 *local_1640;
  undefined1 *puStack_1638;
  undefined1 *local_1630;
  undefined1 *puStack_1628;
  undefined1 *local_1620;
  undefined1 *puStack_1618;
  undefined1 *local_1610;
  undefined1 *puStack_1608;
  undefined1 *local_1600;
  undefined1 *puStack_15f8;
  undefined1 *local_15f0;
  undefined1 *puStack_15e8;
  ulong *local_15e0;
  undefined8 uStack_15d8;
  uint local_15d0;
  undefined4 uStack_15cc;
  long local_1530;
  long local_1528;
  byte local_14f0;
  char local_14ef;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  long ****local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  int local_59c;
  byte local_598;
  long *******local_530;
  long *******ppppppplStack_528;
  code *local_520;
  int local_518;
  int iStack_514;
  float local_510;
  char local_50c;
  int local_4fc;
  char local_4f8;
  int local_478;
  int iStack_474;
  float local_470;
  char local_46c;
  int local_45c;
  char local_458;
  int local_3d8;
  int local_3d4;
  char local_3cc;
  int local_3c0;
  int local_3bc;
  byte local_3b8 [128];
  int local_338;
  int local_334;
  char local_32c;
  int local_31c;
  byte local_318;
  int local_298;
  int local_294;
  char local_28c;
  int local_27c;
  byte local_278;
  int local_1f8;
  int local_1f4;
  char local_1ec;
  int local_1dc;
  byte local_1d8;
  int local_158;
  int local_154;
  char local_14c;
  int local_13c;
  byte local_138;
  uint local_b8;
  undefined1 local_b4;
  ushort local_8c;
  long local_78;
  
  lVar23 = tpidr_el0;
  local_78 = *(long *)(lVar23 + 0x28);
  uVar17 = FUN_00417e08();
  if ((uVar17 & 1) == 0) {
    FUN_00849790(&local_15e0,param_1 + 0x23);
    FUN_00623bb0("\r\t\t\t\n\t","../../video/video_stream_encoder.cc",0x2189,"[VSE] ",
                 "ReconfigureEncoder"," [encoder_config=",&local_15e0,&DAT_0019fa9e);
    if (uStack_15cc < 0) {
      operator_delete(local_15e0);
    }
  }
  bVar28 = *(byte *)((long)param_1 + 0x205);
  if (bVar28 == 1) {
    FUN_0095ca4c(param_1);
    pppplVar18 = param_1[0x3d];
    param_1[0x3d] = (long ****)0x0;
    if (pppplVar18 != (long ****)0x0) {
      (*(code *)(*pppplVar18)[1])();
    }
    uVar19 = (*(code *)(*param_1[0xc])[3])(param_1[0xc],param_1 + 3,param_1 + 0x24);
    pppplVar18 = (long ****)FUN_00976200(param_1 + 3,uVar19);
    pppplVar29 = param_1[0x3d];
    param_1[0x3d] = pppplVar18;
    if (pppplVar29 != (long ****)0x0) {
      (*(code *)(*pppplVar29)[1])(pppplVar29);
      pppplVar18 = param_1[0x3d];
    }
    if (pppplVar18 == (long ****)0x0) {
      uVar17 = FUN_004249b0();
      if ((uVar17 & 1) == 0) {
        FUN_007b6dd8(&local_15e0,param_1 + 0x24);
        FUN_00623bb0(&DAT_001f4e90,"../../video/video_stream_encoder.cc",0x2203,
                     "CreateVideoEncoder failed, failing encoder format: ",&local_15e0);
        if (uStack_15cc._3_1_ < '\0') {
          operator_delete(local_15e0);
        }
      }
      FUN_0095cb7c(param_1);
      goto LAB_0095c330;
    }
    pppplVar29 = param_1[0x1e];
    if (pppplVar29 != (long ****)0x0) {
      (*(code *)(*pppplVar29)[2])(pppplVar29,param_1 + 0x24);
      pppplVar18 = param_1[0x3d];
    }
    (*(code *)(*pppplVar18)[2])(pppplVar18,param_1[0xa7]);
  }
  (*(code *)(*param_1[0x3d])[0xc])(&local_15e0);
  FUN_0096e348(&local_15e0,param_1 + 0x23,0,0);
  FUN_007b9754(&local_15e0);
  pppplVar18 = param_1[0x30];
  puStack_1878 = (ulong *)0x0;
  local_1880 = (ulong *)0x0;
  local_1870 = 0;
  if (pppplVar18 == (long ****)0x0) {
    (*(code *)(*param_1[0x3d])[0xc])(&local_15e0);
    plVar20 = (long *)operator_new(0x50);
    uStack_5d8 = param_1[0x423];
    local_5e0 = param_1[0x422];
    uStack_5c8 = param_1[0x425];
    local_5d0 = param_1[0x424];
    uStack_5b8 = param_1[0x427];
    local_5c0 = param_1[0x426];
    local_5b0 = param_1[0x428];
    FUN_0098a12c(plVar20,&local_15e0,&local_5e0);
    *(undefined4 *)(plVar20 + 9) = 0;
    *plVar20 = (long)&PTR_FUN_00d3e798;
    if (plVar20 != (long *)0x0) {
      FUN_00d0f740(1,plVar20 + 9);
    }
    FUN_007b9754(&local_15e0);
    if ((*(byte *)((long)param_1 + 0x26c) & 1) == 0) goto LAB_0095b49c;
    (**(code **)(*plVar20 + 0x20))
              (&local_15e0,plVar20,param_1[4],*(undefined4 *)(param_1 + 0x4c),
               *(undefined4 *)((long)param_1 + 0x264),param_1 + 0x23);
    puVar34 = local_1880;
    uVar46 = (undefined4)((ulong)in_stack_ffffffffffffe480 >> 0x20);
    puVar31 = puStack_1878;
    if (local_1880 != (ulong *)0x0) {
      while (puVar34 != puVar31) {
        puVar31 = puVar31 + -0x19;
        if (puVar31 == (ulong *)0x0) goto LAB_0095c2bc;
        FUN_008492a8(puVar31);
        uVar46 = (undefined4)((ulong)in_stack_ffffffffffffe480 >> 0x20);
      }
      puStack_1878 = puVar34;
      operator_delete(local_1880);
    }
    local_1870 = CONCAT44(uStack_15cc,local_15d0);
    puStack_1878 = uStack_15d8;
    local_1880 = local_15e0;
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 8))(plVar20);
    }
  }
  else {
    if ((*(byte *)((long)param_1 + 0x26c) & 1) == 0) goto LAB_0095b49c;
    (*(code *)(*pppplVar18)[4])
              (&local_15e0,pppplVar18,param_1[4],*(undefined4 *)(param_1 + 0x4c),
               *(undefined4 *)((long)param_1 + 0x264),param_1 + 0x23);
    puVar34 = local_1880;
    uVar46 = (undefined4)((ulong)in_stack_ffffffffffffe480 >> 0x20);
    puVar31 = puStack_1878;
    if (local_1880 != (ulong *)0x0) {
      while (puVar34 != puVar31) {
        puVar31 = puVar31 + -0x19;
        if (puVar31 == (ulong *)0x0) goto LAB_0095c2bc;
        FUN_008492a8(puVar31);
        uVar46 = (undefined4)((ulong)in_stack_ffffffffffffe480 >> 0x20);
      }
      puStack_1878 = puVar34;
      operator_delete(local_1880);
    }
    local_1870 = CONCAT44(uStack_15cc,local_15d0);
    puStack_1878 = uStack_15d8;
    local_1880 = local_15e0;
  }
  (*(code *)(*param_1[0x3d])[0xc])(&local_15e0);
  uVar13 = FUN_0096e348(&local_15e0,param_1 + 0x23,
                        ((long)puStack_1878 - (long)local_1880 >> 3) * -0x70a3d70a3d70a3d7,1);
  FUN_007b9754(&local_15e0);
  puVar31 = local_1880;
  if ((local_1880 != puStack_1878) && (puVar34 = local_1880 + 0x19, puVar34 != puStack_1878)) {
    puVar30 = local_1880;
    uVar17 = *local_1880;
    do {
      uVar35 = *puVar34;
      bVar12 = puVar30[1] < puVar34[1];
      if (uVar17 != uVar35) {
        bVar12 = uVar17 < uVar35;
      }
      puVar31 = puVar34;
      if (!bVar12) {
        puVar31 = puVar30;
      }
      puVar34 = puVar34 + 0x19;
      if (!bVar12) {
        uVar35 = uVar17;
      }
      puVar30 = puVar31;
      uVar17 = uVar35;
    } while (puVar34 != puStack_1878);
  }
  if ((*(byte *)((long)param_1 + 0x26c) & 1) == 0) goto LAB_0095b49c;
  ppppplVar42 = param_1 + 0x4c;
  iVar16 = (int)*puVar31;
  if (*(int *)ppppplVar42 < iVar16) {
    puVar22 = (undefined4 *)FUN_0095cef8(ppppplVar42);
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../video/video_stream_encoder.cc",0x480,
                 "last_frame_info_->width >= highest_stream_width",&DAT_001fbedc,*puVar22,iVar16);
  }
  iVar40 = (int)puVar31[1];
  if (*(int *)((long)param_1 + 0x264) < iVar40) {
    lVar23 = FUN_0095cef8(ppppplVar42);
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../video/video_stream_encoder.cc",0x481,
                 "last_frame_info_->height >= highest_stream_height",&DAT_001fbedc,
                 *(undefined4 *)(lVar23 + 4),iVar40);
  }
  *(int *)(param_1 + 0x4e) = *(int *)ppppplVar42 - iVar16;
  *(int *)((long)param_1 + 0x274) = *(int *)((long)param_1 + 0x264) - iVar40;
  (*(code *)(*param_1[0x3d])[0xc])(&local_15e0);
  FUN_007b9754(&local_15e0);
  if ((local_14ef == '\x01') && ((local_14f0 & 1) == 0)) {
    (*(code *)(*param_1[0x3d])[0xc])(&local_15e0);
    if (local_1530 == local_1528) {
      FUN_0096e844(&local_1860,*(undefined4 *)(param_1 + 0x23));
    }
    else {
      (*(code *)(*param_1[0x3d])[0xc])(&local_5e0);
      local_1850 = local_520;
      local_520 = (code *)0x0;
      ppppppplStack_1858 = ppppppplStack_528;
      local_1860 = local_530;
      ppppppplStack_528 = (long *******)0x0;
      local_530 = (long *******)0x0;
      FUN_007b9754(&local_5e0);
    }
    FUN_007b9754(&local_15e0);
    local_15d0 = 0xaaaaaaaa;
    uStack_15d8 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
    local_15e0 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
    if ((*(byte *)((long)param_1 + 0x26c) & 1) == 0) goto LAB_0095b49c;
    FUN_0096e9d0(&local_15e0,
                 (ulong)(uint)(*(int *)((long)param_1 + 0x264) * *(int *)(param_1 + 0x4c)) |
                 0x100000000,&local_1860);
    if ((((local_15d0 & 1) != 0) && ((long)puStack_1878 - (long)local_1880 == 200)) &&
       ((long)param_1[0x39] - (long)param_1[0x38] == 200)) {
      piVar33 = (int *)((long)puStack_1878 + -0xac);
      iVar16 = uStack_15d8._4_4_;
      if (*piVar33 <= uStack_15d8._4_4_) {
        iVar16 = *piVar33;
      }
      *piVar33 = iVar16;
      if ((local_15d0 & 1) == 0) goto LAB_0095b49c;
      piVar2 = (int *)((ulong)&local_15e0 | 8);
      if (iVar16 <= (int)uStack_15d8) {
        piVar2 = piVar33;
      }
      *(int *)((long)puStack_1878 + -0xb4) = *piVar2;
      if (*(int *)(param_1 + 0x34) == 1) {
        piVar2 = (int *)&UNK_001fdc3c;
        if (1199999 < iVar16) {
          piVar2 = piVar33;
        }
        iVar16 = *piVar2;
        *piVar33 = iVar16;
      }
      *(int *)(puStack_1878 + -0x16) = iVar16;
    }
    if (local_1860 != (long *******)0x0) {
      uVar35 = (ulong)((long)ppppppplStack_1858 + (-0x10 - ((long)ppppppplStack_1858 << 0x3c))) >> 4
      ;
      uVar17 = (ulong)(((long)local_1860 - (long)ppppppplStack_1858 << 0x3c) -
                      ((long)local_1860 - (long)ppppppplStack_1858)) >> 4;
      if (uVar35 <= uVar17) {
        uVar17 = uVar35;
      }
      ppppppplVar32 = ppppppplStack_1858;
      if ((1 < uVar17) &&
         ((((int)local_1860 - (int)ppppppplStack_1858 | -(int)ppppppplStack_1858) & 0xfU) == 0)) {
        uVar17 = uVar17 & 0xffffffffffffffe;
        ppppppplVar32 = ppppppplStack_1858 + uVar17 * -2;
        do {
          uVar17 = uVar17 - 2;
        } while (uVar17 != 0);
      }
      do {
        if (ppppppplVar32 == local_1860) {
          ppppppplStack_1858 = local_1860;
          operator_delete(local_1860);
          goto LAB_0095a6c8;
        }
        ppppppplVar32 = ppppppplVar32 + -2;
      } while (ppppppplVar32 != (long *******)0x0);
      goto LAB_0095c2bc;
    }
  }
  else {
    uStack_5d8 = (long ****)&DAT_aaaaaaaaaaaaaaaa;
    local_5e0 = (long ****)&DAT_aaaaaaaaaaaaaaaa;
    local_5d0 = (long ****)CONCAT44(local_5d0._4_4_,0xaaaaaaaa);
    (*(code *)(*param_1[0x3d])[0xc])(&local_15e0);
    if ((*(byte *)((long)param_1 + 0x26c) & 1) == 0) goto LAB_0095b49c;
    FUN_007ba768(&local_5e0,&local_15e0,*(int *)((long)param_1 + 0x264) * *(int *)(param_1 + 0x4c));
    FUN_007b9754(&local_15e0);
    if (((((ulong)local_5d0 & 1) != 0) && ((long)puStack_1878 - (long)local_1880 == 200)) &&
       (pppplVar18 = param_1[0x38], (long)param_1[0x39] - (long)pppplVar18 == 200)) {
      iVar16 = (int)uStack_5d8;
      if ((0 < *(int *)((long)pppplVar18 + 0x14)) &&
         ((int)uStack_5d8 <= *(int *)((long)puStack_1878 + -0xb4))) {
        iVar16 = *(int *)((long)puStack_1878 + -0xb4);
      }
      iVar40 = *(int *)((long)pppplVar18 + 0x1c);
      iVar5 = *(int *)((long)param_1 + 0x1b4);
      if (iVar40 < 1) {
        if (0 < iVar5) {
          iVar38 = -0x55555600;
          goto LAB_0095a5b4;
        }
        iVar40 = -1;
        iVar5 = uStack_5d8._4_4_;
      }
      else {
        iVar38 = iVar40;
        if (0 < iVar5) {
LAB_0095a5b4:
          if (iVar5 <= iVar38) {
            iVar38 = iVar5;
          }
          bVar12 = iVar40 < 1;
          iVar40 = iVar38;
          if (bVar12) {
            iVar40 = iVar5;
          }
        }
        iVar5 = *(int *)((long)puStack_1878 + -0xac);
        if ((int)uStack_5d8._4_4_ <= *(int *)((long)puStack_1878 + -0xac)) {
          iVar5 = uStack_5d8._4_4_;
        }
      }
      if (iVar16 < iVar5) {
        *(int *)((long)puStack_1878 + -0xb4) = iVar16;
        if ((local_1880 == puStack_1878) ||
           (*(int *)((long)puStack_1878 + -0xac) = iVar5, local_1880 == puStack_1878))
        goto LAB_0095c614;
        if (((ulong)local_5d0 & 1) == 0) goto LAB_0095b49c;
        iVar16 = uStack_5d8._4_4_;
        if ((int)puStack_1878[-0x16] <= (int)uStack_5d8._4_4_) {
          iVar16 = (int)puStack_1878[-0x16];
        }
        *(int *)(puStack_1878 + -0x16) = iVar16;
      }
      else {
        uVar17 = FUN_004022fc();
        if ((uVar17 & 1) == 0) {
          if (((ulong)local_5d0 & 1) == 0) goto LAB_0095b49c;
          if (local_1880 == puStack_1878) goto LAB_0095c614;
          in_stack_ffffffffffffe470 = 0;
          FUN_00623bb0(&DAT_00229887,"../../video/video_stream_encoder.cc",0x271a,
                       "Bitrate limits provided by encoder"," (min=",(ulong)uStack_5d8 & 0xffffffff,
                       ", max=",uStack_5d8._4_4_,") do not intersect with limits set by app",
                       " (min=",CONCAT44(uVar46,*(undefined4 *)((long)puStack_1878 + -0xb4)),
                       ", max=",iVar40,"). The app bitrate limits will be used.");
        }
      }
    }
  }
LAB_0095a6c8:
  (*(code *)(*param_1[0x3d])[0xc])(&local_5e0);
  FUN_0095cf28(&local_15e0,&local_5e0,param_1 + 0x23,*(undefined1 *)(param_1 + 0x3aa));
  uVar17 = ((long)puStack_1878 - (long)local_1880 >> 3) * -0x70a3d70a3d70a3d7;
  if (1 < uVar17 && local_1880 != puStack_1878) {
    iVar16 = 0;
    puVar9 = (undefined1 *)((long)puStack_1878 + (-200 - (long)local_1880));
    puVar31 = local_1880;
    if (puVar9 == (undefined1 *)0x0) {
LAB_0095a89c:
      do {
        puVar34 = puVar31 + 0x19;
        iVar16 = iVar16 + (uint)*(byte *)((long)puVar31 + 0x52);
        puVar31 = puVar34;
      } while (puVar34 != puStack_1878);
    }
    else {
      iVar40 = 0;
      pbVar26 = (byte *)((long)local_1880 + 0x11a);
      uVar35 = ((ulong)((long)puVar9 * 0xf5c28f5c28f5c29) >> 3) + 1;
      uVar36 = uVar35 & 0x3ffffffffffffffe;
      do {
        pbVar1 = pbVar26 + -200;
        bVar37 = *pbVar26;
        uVar36 = uVar36 - 2;
        pbVar26 = pbVar26 + 400;
        iVar16 = iVar16 + (uint)*pbVar1;
        iVar40 = iVar40 + (uint)bVar37;
      } while (uVar36 != 0);
      iVar16 = iVar40 + iVar16;
      puVar31 = local_1880 + (uVar35 & 0x3ffffffffffffffe) * 0x19;
      if (uVar35 != (uVar35 & 0x3ffffffffffffffe)) goto LAB_0095a89c;
    }
    if ((iVar16 == 1) && ((*(byte *)((long)local_1880 + 0x52) & 1) == 0)) {
      pppplVar18 = param_1[0x38];
      pppplVar29 = param_1[0x39];
      if (pppplVar18 != pppplVar29) {
        lVar21 = (long)pppplVar29 + (-200 - (long)pppplVar18);
        if (lVar21 == 0) {
          iVar40 = 0;
          pppplVar27 = pppplVar18;
LAB_0095aa58:
          do {
            pbVar26 = (byte *)((long)pppplVar27 + 0x52);
            pppplVar27 = pppplVar27 + 0x19;
            iVar40 = iVar40 + (uint)*pbVar26;
          } while (pppplVar27 != pppplVar29);
        }
        else {
          iVar16 = 0;
          iVar40 = 0;
          pbVar26 = (byte *)((long)pppplVar18 + 0x11a);
          uVar35 = ((ulong)(lVar21 * 0xf5c28f5c28f5c29) >> 3) + 1;
          uVar36 = uVar35 & 0x3ffffffffffffffe;
          pppplVar27 = pppplVar18 + (uVar35 & 0x3ffffffffffffffe) * 0x19;
          do {
            pbVar1 = pbVar26 + -200;
            bVar37 = *pbVar26;
            uVar36 = uVar36 - 2;
            pbVar26 = pbVar26 + 400;
            iVar16 = iVar16 + (uint)*pbVar1;
            iVar40 = iVar40 + (uint)bVar37;
          } while (uVar36 != 0);
          iVar40 = iVar40 + iVar16;
          if (uVar35 != (uVar35 & 0x3ffffffffffffffe)) goto LAB_0095aa58;
        }
        if (iVar40 == 1) {
          uVar35 = 0;
          pcVar39 = (char *)((long)pppplVar18 + 0x52);
          uVar36 = 0;
          do {
            uVar3 = uVar35;
            if (*pcVar39 == '\0') {
              uVar3 = uVar36;
            }
            uVar35 = uVar35 + 1;
            pcVar39 = pcVar39 + 200;
            uVar36 = uVar3;
          } while (((long)pppplVar29 - (long)pppplVar18 >> 3) * -0x70a3d70a3d70a3d7 - uVar35 != 0);
          if (uVar3 + 1 <= uVar17) {
            if (uVar17 <= uVar3) goto LAB_0095c368;
            puVar31 = local_1880 + uVar3 * 0x19;
            if (*(char *)((long)puVar31 + 0x52) == '\x01') {
              ppppppplStack_1858 = (long *******)&DAT_aaaaaaaaaaaaaaaa;
              local_1860 = (long *******)&DAT_aaaaaaaaaaaaaaaa;
              local_1850 = (code *)CONCAT44(local_1850._4_4_,0xaaaaaaaa);
              FUN_007ba768(&local_1860,&local_15e0,(int)puVar31[1] * (int)*puVar31);
              if (((ulong)local_1850 & 1) != 0) {
                pppplVar18 = param_1[0x38];
                if ((ulong)(((long)param_1[0x39] - (long)pppplVar18 >> 3) * -0x70a3d70a3d70a3d7) <=
                    uVar3) goto LAB_0095ae0c;
                piVar33 = (int *)((ulong)&local_1860 | 0xc);
                uVar17 = ((long)puStack_1878 - (long)local_1880 >> 3) * -0x70a3d70a3d70a3d7;
                iVar16 = *(int *)((long)pppplVar18 + uVar3 * 200 + 0x14);
                bVar12 = uVar3 < uVar17;
                if (iVar16 < 1) {
                  iVar40 = (int)ppppppplStack_1858;
                  if (0 < *(int *)((long)pppplVar18 + uVar3 * 200 + 0x1c)) {
                    if (uVar17 <= uVar3) goto LAB_0095c368;
LAB_0095ac3c:
                    piVar33 = (int *)((long)local_1880 + uVar3 * 200 + 0x1c);
                    goto LAB_0095ac48;
                  }
                }
                else {
                  if (uVar17 <= uVar3) goto LAB_0095c368;
                  iVar40 = *(int *)((long)local_1880 + uVar3 * 200 + 0x14);
                  if (0 < *(int *)((long)pppplVar18 + uVar3 * 200 + 0x1c)) goto LAB_0095ac3c;
LAB_0095ac48:
                  bVar12 = true;
                }
                iVar6 = *piVar33;
                iVar5 = iVar6;
                iVar38 = iVar40;
                if (iVar40 <= iVar6) {
                  iVar5 = iVar40;
                  iVar38 = iVar6;
                }
                if (iVar16 < 1) {
                  iVar40 = iVar5;
                  iVar38 = iVar6;
                }
                if (((!bVar12) ||
                    (*(int *)((long)local_1880 + uVar3 * 200 + 0x14) = iVar40,
                    (ulong)(((long)puStack_1878 - (long)local_1880 >> 3) * -0x70a3d70a3d70a3d7) <=
                    uVar3)) ||
                   (*(int *)((long)local_1880 + uVar3 * 200 + 0x1c) = iVar38,
                   (ulong)(((long)puStack_1878 - (long)local_1880 >> 3) * -0x70a3d70a3d70a3d7) <=
                   uVar3)) goto LAB_0095c368;
                if (iVar38 < iVar40) goto LAB_0095ae58;
                iVar16 = (int)local_1880[uVar3 * 0x19 + 3];
                if (iVar16 <= iVar38) {
                  iVar38 = iVar16;
                }
                if (iVar40 <= iVar16) {
                  iVar40 = iVar38;
                }
                *(int *)(local_1880 + uVar3 * 0x19 + 3) = iVar40;
              }
            }
          }
        }
      }
    }
  }
  FUN_007b9754(&local_15e0);
  FUN_007b9754(&local_5e0);
  memcpy(&local_5e0,&DAT_002287c8,0x560);
  FUN_00971670(&local_5e0,param_1[4],param_1 + 0x23,&local_1880);
  if ((*(uint *)(param_1 + 0x23) < 6) &&
     ((0x2cU >> (ulong)(*(uint *)(param_1 + 0x23) & 0x1f) & 1) != 0)) {
    if ((*(byte *)((long)param_1 + 0x26c) & 1) == 0) goto LAB_0095b49c;
    if (*(int *)ppppplVar42 < (int)(uint)local_5e0._4_2_) {
      puVar22 = (undefined4 *)FUN_0095cef8(ppppplVar42);
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../video/video_stream_encoder.cc",0x500,
                   "last_frame_info_->width >= codec.width",&DAT_001fbedc,*puVar22,local_5e0._4_2_);
    }
    if (*(int *)((long)param_1 + 0x264) < (int)(uint)local_5e0._6_2_) {
      lVar23 = FUN_0095cef8(ppppplVar42);
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../video/video_stream_encoder.cc",0x501,
                   "last_frame_info_->height >= codec.height",&DAT_001fbedc,
                   *(undefined4 *)(lVar23 + 4),local_5e0._6_2_);
    }
    *(uint *)(param_1 + 0x4e) = *(int *)ppppplVar42 - (uint)local_5e0._4_2_;
    *(uint *)((long)param_1 + 0x274) = *(int *)((long)param_1 + 0x264) - (uint)local_5e0._6_2_;
    (*(code *)(*param_1[0x3d])[0xc])(&local_1860);
    FUN_0095cf28(&local_15e0,&local_1860,param_1 + 0x23,*(undefined1 *)(param_1 + 0x3aa));
    if ((int)local_5e0 == 3) {
      if ((local_8c >> 8 & 1) == 0) goto LAB_0095a83c;
      iVar16 = FUN_0096a3b0();
      if (0 < iVar16) goto LAB_0095a8f0;
    }
    else {
      if ((int)local_5e0 == 2) {
        lVar21 = FUN_007b8ca4(&local_5e0);
        if (*(char *)(lVar21 + 10) == '\0') goto LAB_0095afd4;
      }
      else {
LAB_0095a83c:
        if ((int)local_5e0 != 5) goto LAB_0095afd4;
      }
LAB_0095a8f0:
      uVar17 = FUN_00985760(param_1 + 0x23,&local_5e0);
      if ((((uVar17 & 1) == 0) &&
          (1 < (ulong)(((long)param_1[0x39] - (long)param_1[0x38] >> 3) * -0x70a3d70a3d70a3d7))) &&
         (uVar17 = FUN_0097ea38(&local_5e0), (uVar17 >> 0x20 & 1) != 0)) {
        uStack_1ab8 = (long *******)&DAT_aaaaaaaaaaaaaaaa;
        local_1ac0 = (long *******)&DAT_aaaaaaaaaaaaaaaa;
        local_1ab0 = (code *)CONCAT44(local_1ab0._4_4_,0xaaaaaaaa);
        FUN_007ba768(&local_1ac0,&local_15e0,uVar17);
        if (((ulong)local_1ab0 & 1) != 0) {
          pppplVar18 = param_1[0x38];
          if ((long)param_1[0x39] - (long)pppplVar18 != 0) {
            uVar17 = 0;
            bVar37 = 0;
            uVar36 = ((long)param_1[0x39] - (long)pppplVar18 >> 3) * -0x70a3d70a3d70a3d7;
            uVar35 = 0xaaaaaaaaaaaaaa00;
            pbVar26 = (byte *)((long)pppplVar18 + 0x52);
            do {
              bVar37 = *pbVar26 | bVar37;
              uVar3 = uVar17;
              if (*pbVar26 == 0) {
                uVar3 = uVar35;
              }
              uVar17 = uVar17 + 1;
              uVar35 = uVar3;
              pbVar26 = pbVar26 + 200;
            } while (uVar36 - uVar17 != 0);
            if ((bVar37 & 1) != 0) {
              if (uVar36 <= uVar3) {
LAB_0095ae0c:
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                          );
              }
              iVar40 = *(int *)((long)pppplVar18 + uVar3 * 200 + 0x14);
              iVar5 = *(int *)((long)pppplVar18 + uVar3 * 200 + 0x1c);
              iVar16 = (int)uStack_1ab8;
              if (0 < iVar40) {
                iVar16 = iVar40;
              }
              iVar38 = uStack_1ab8._4_4_;
              if (0 < iVar5) {
                iVar38 = iVar5;
              }
              iVar5 = iVar38;
              if (iVar16 <= iVar38) {
                iVar5 = iVar16;
                iVar16 = iVar38;
              }
              if (iVar40 < 1) {
                iVar16 = iVar38;
                iVar40 = iVar5;
              }
              if ((int)local_5e0 == 3) {
                if ((local_8c >> 8 & 1) == 0) goto LAB_0095ab78;
                uVar14 = FUN_0096a3b0();
              }
              else if ((int)local_5e0 == 2) {
                lVar21 = FUN_007b8ca4(&local_5e0);
                uVar14 = (uint)*(byte *)(lVar21 + 10);
              }
              else {
LAB_0095ab78:
                uVar14 = (uint)((int)local_5e0 == 5);
              }
              if (0 < (int)uVar14) {
                if ((local_3b8[0] & 1) == 0) {
                  if ((int)local_5e0 == 2) {
                    lVar21 = FUN_007b8ca4(&local_5e0);
                    uVar14 = (uint)*(byte *)(lVar21 + 10);
                  }
                  else {
                    if (((int)local_5e0 != 3) || ((local_8c >> 8 & 1) == 0)) goto LAB_0095afd4;
                    uVar14 = FUN_0096a3b0();
                  }
                  if (1 < (int)uVar14) {
                    if ((local_318 & 1) != 0) {
                      piVar33 = &local_338;
                      goto LAB_0095aba4;
                    }
                    if ((int)local_5e0 == 2) {
                      lVar21 = FUN_007b8ca4(&local_5e0);
                      uVar14 = (uint)*(byte *)(lVar21 + 10);
                    }
                    else {
                      if (((int)local_5e0 != 3) || ((local_8c >> 8 & 1) == 0)) goto LAB_0095afd4;
                      uVar14 = FUN_0096a3b0();
                    }
                    if (2 < (int)uVar14) {
                      if ((local_278 & 1) != 0) {
                        piVar33 = &local_298;
                        goto LAB_0095aba4;
                      }
                      if ((int)local_5e0 == 2) {
                        lVar21 = FUN_007b8ca4(&local_5e0);
                        uVar14 = (uint)*(byte *)(lVar21 + 10);
                      }
                      else {
                        if (((int)local_5e0 != 3) || ((local_8c >> 8 & 1) == 0)) goto LAB_0095afd4;
                        uVar14 = FUN_0096a3b0();
                      }
                      if (3 < (int)uVar14) {
                        if ((local_1d8 & 1) != 0) {
                          piVar33 = &local_1f8;
                          goto LAB_0095aba4;
                        }
                        if ((int)local_5e0 == 2) {
                          lVar21 = FUN_007b8ca4(&local_5e0);
                          uVar14 = (uint)*(byte *)(lVar21 + 10);
                        }
                        else {
                          if (((int)local_5e0 != 3) || ((local_8c >> 8 & 1) == 0))
                          goto LAB_0095afd4;
                          uVar14 = FUN_0096a3b0();
                        }
                        if (4 < (int)uVar14) {
                          if ((local_138 & 1) != 0) {
                            piVar33 = &local_158;
                            goto LAB_0095aba4;
                          }
                          if ((int)local_5e0 == 2) {
                            lVar21 = FUN_007b8ca4(&local_5e0);
                            uVar14 = (uint)*(byte *)(lVar21 + 10);
                          }
                          else {
                            if (((int)local_5e0 != 3) || ((local_8c >> 8 & 1) == 0))
                            goto LAB_0095afd4;
                            uVar14 = FUN_0096a3b0();
                          }
                          if (5 < (int)uVar14) goto LAB_0095ca30;
                        }
                      }
                    }
                  }
                }
                else {
                  piVar33 = &local_3d8;
LAB_0095aba4:
                  uVar14 = iVar40 / 1000;
                  uVar15 = iVar16 / 1000;
                  piVar33[6] = uVar14;
                  piVar33[4] = uVar15;
                  if (uVar15 < uVar14) {
LAB_0095ae58:
                    /* WARNING: Subroutine does not return */
                    std::__Cr::__libcpp_verbose_abort
                              ("%s",
                               "gen/third_party/libc++/src/include/__algorithm/clamp.h:29: libc++ Hardening assertion !__comp(__hi, __lo) failed: Bad bounds passed to std::clamp\n"
                              );
                  }
                  lVar21 = 0x10;
                  if ((uint)piVar33[5] <= uVar15) {
                    lVar21 = 0x14;
                  }
                  lVar4 = 0x18;
                  if (uVar14 <= (uint)piVar33[5]) {
                    lVar4 = lVar21;
                  }
                  piVar33[5] = *(int *)((long)piVar33 + lVar4);
                }
              }
            }
          }
        }
      }
    }
LAB_0095afd4:
    FUN_007b9754(&local_15e0);
    FUN_007b9754(&local_1860);
  }
  puVar45 = &local_5e0;
  memset(&local_15e0,0xaa,0x1000);
  local_1890 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1898 = &DAT_aaaaaaaaaaaaaaaa;
  local_18a0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00622830(&local_18a0,&local_15e0,0x1000);
  FUN_006228b0(&local_18a0,"ReconfigureEncoder: simulcast streams: ",0x27);
  if ((byte)local_5c0 != '\0') {
    uVar17 = 0;
    puVar44 = &uStack_5b8;
    do {
      uVar19 = FUN_006228b0(&local_18a0,&DAT_001d05bd,1);
      uVar19 = FUN_00622a20(uVar19,uVar17);
      uVar19 = FUN_006228b0(uVar19,&DAT_001c4dc3,2);
      if (uVar17 == 3) goto LAB_0095ca30;
      uVar19 = FUN_00622910(uVar19,*(undefined4 *)puVar44);
      uVar19 = FUN_006228b0(uVar19,&DAT_001c4fee,1);
      uVar19 = FUN_00622910(uVar19,*(undefined4 *)((long)puVar44 + 4));
      uVar19 = FUN_006228b0(uVar19,&DAT_001d5e07,1);
      uVar35 = FUN_007b8ff0(puVar44);
      puVar45 = (undefined8 *)((ulong)puVar45 & 0xffffffffffff0000 | uVar35 & 0xffff);
      auVar48 = FUN_007b8288(puVar45);
      uVar19 = FUN_006228b0(uVar19,auVar48._0_8_,auVar48._8_8_);
      uVar19 = FUN_006228b0(uVar19,", min_kbps: ",0xc);
      uVar19 = FUN_006229f8(uVar19,*(undefined4 *)(puVar44 + 3));
      uVar19 = FUN_006228b0(uVar19,", target_kbps: ",0xf);
      uVar19 = FUN_006229f8(uVar19,*(undefined4 *)((long)puVar44 + 0x14));
      uVar19 = FUN_006228b0(uVar19,", max_kbps: ",0xc);
      uVar19 = FUN_006229f8(uVar19,*(undefined4 *)(puVar44 + 2));
      FUN_006228b0(uVar19,", max_fps: ",0xb);
      uVar19 = FUN_00622a34(*(undefined4 *)(puVar44 + 1));
      uVar19 = FUN_006228b0(uVar19,", max_qp: ",10);
      uVar19 = FUN_006229f8(uVar19,*(undefined4 *)((long)puVar44 + 0x1c));
      uVar19 = FUN_006228b0(uVar19,", num_tl: ",10);
      uVar19 = FUN_00622910(uVar19,*(undefined1 *)((long)puVar44 + 0xc));
      uVar24 = FUN_006228b0(uVar19,", active: ",10);
      uVar19 = 4;
      pcVar39 = "true";
      if (*(char *)(puVar44 + 4) == '\0') {
        uVar19 = 5;
        pcVar39 = "false";
      }
      uVar19 = FUN_006228b0(uVar24,pcVar39,uVar19);
      FUN_006228b0(uVar19,&DAT_001b0cbb,1);
      uVar17 = uVar17 + 1;
      puVar44 = puVar44 + 0x14;
    } while (uVar17 < ((ulong)local_5c0 & 0xff));
  }
  uVar46 = (undefined4)((ulong)in_stack_ffffffffffffe470 >> 0x20);
  uVar14 = *(uint *)(param_1 + 0x23);
  if ((uVar14 < 6) && ((0x2cU >> (ulong)(uVar14 & 0x1f) & 1) != 0)) {
    FUN_006228b0(&local_18a0,", spatial layers: ",0x12);
    uVar17 = 0;
    pbVar26 = local_3b8;
    do {
      uVar46 = (undefined4)((ulong)in_stack_ffffffffffffe470 >> 0x20);
      if ((int)local_5e0 == 3) {
        if ((local_8c >> 8 & 1) == 0) goto LAB_0095b298;
        uVar14 = FUN_0096a3b0();
        uVar46 = (undefined4)((ulong)in_stack_ffffffffffffe470 >> 0x20);
      }
      else if ((int)local_5e0 == 2) {
        lVar21 = FUN_007b8ca4(&local_5e0);
        uVar46 = (undefined4)((ulong)in_stack_ffffffffffffe470 >> 0x20);
        uVar14 = (uint)*(byte *)(lVar21 + 10);
      }
      else {
LAB_0095b298:
        uVar14 = (uint)((int)local_5e0 == 5);
      }
      if ((long)(int)uVar14 <= (long)uVar17) break;
      uVar19 = FUN_006228b0(&local_18a0,&DAT_001d05bd,1);
      uVar19 = FUN_00622910(uVar19,uVar17 & 0xffffffff);
      uVar19 = FUN_006228b0(uVar19,&DAT_001c4dc3,2);
      if (uVar17 == 5) goto LAB_0095ca30;
      uVar19 = FUN_00622910(uVar19,*(undefined4 *)(pbVar26 + -0x20));
      uVar19 = FUN_006228b0(uVar19,&DAT_001c4fee,1);
      uVar19 = FUN_00622910(uVar19,*(undefined4 *)(pbVar26 + -0x1c));
      uVar19 = FUN_006228b0(uVar19,", min_kbps: ",0xc);
      uVar19 = FUN_006229f8(uVar19,*(undefined4 *)(pbVar26 + -8));
      uVar19 = FUN_006228b0(uVar19,", target_kbps: ",0xf);
      uVar19 = FUN_006229f8(uVar19,*(undefined4 *)(pbVar26 + -0xc));
      uVar19 = FUN_006228b0(uVar19,", max_kbps: ",0xc);
      uVar19 = FUN_006229f8(uVar19,*(undefined4 *)(pbVar26 + -0x10));
      FUN_006228b0(uVar19,", max_fps: ",0xb);
      uVar19 = FUN_00622a34(*(undefined4 *)(pbVar26 + -0x18));
      uVar19 = FUN_006228b0(uVar19,", max_qp: ",10);
      uVar19 = FUN_006229f8(uVar19,*(undefined4 *)(pbVar26 + -4));
      uVar19 = FUN_006228b0(uVar19,", num_tl: ",10);
      uVar19 = FUN_00622910(uVar19,pbVar26[-0x14]);
      uVar24 = FUN_006228b0(uVar19,", active: ",10);
      uVar19 = 4;
      pcVar39 = "true";
      if (*pbVar26 == 0) {
        uVar19 = 5;
        pcVar39 = "false";
      }
      uVar19 = FUN_006228b0(uVar24,pcVar39,uVar19);
      FUN_006228b0(uVar19,&DAT_001b0cbb,1);
      uVar17 = uVar17 + 1;
      pbVar26 = pbVar26 + 0xa0;
    } while( true );
  }
  uVar17 = FUN_00417e08();
  if ((uVar17 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,"../../video/video_stream_encoder.cc",0x2981,"[VSE] ",local_18a0);
  }
  if (*(char *)((long)param_1 + 0x27c) == '\x01') {
    uVar14 = *(uint *)(param_1 + 0x4f) / 1000;
  }
  else {
    uVar14 = 0;
  }
  if (uVar14 <= (uint)local_5d0) {
    uVar14 = (uint)local_5d0;
  }
  uVar15 = uStack_5d8._4_4_;
  if (uVar14 <= uStack_5d8._4_4_) {
    uVar15 = uVar14;
  }
  uStack_5d8 = (long ****)CONCAT44(uStack_5d8._4_4_,uVar15);
  if ((*(byte *)((long)param_1 + 0x26c) & 1) == 0) {
LAB_0095b49c:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
              );
  }
  local_b4 = *(undefined1 *)(param_1 + 0x4d);
  local_18b0 = (long *****)0x0;
  *(undefined4 *)(param_1 + 0x40) = local_5d0._4_4_;
  local_18b8 = (long *****)0x0;
  local_18a8 = (long *****)0x0;
  if ((local_598 & 1) != 0) {
    local_18b0 = (long *****)FUN_00962450(&local_18b8,&uStack_5b8,(long)&uStack_5b8 + 4);
  }
  if (local_4f8 == '\x01') {
    if (local_18b0 < local_18a8) {
      if (local_18b0 == (long *****)0x0) goto LAB_0095b488;
      *local_18b0 = (long ****)CONCAT44(iStack_514,local_518);
      local_18b0 = local_18b0 + 1;
    }
    else {
      local_18b0 = (long *****)FUN_00962450(&local_18b8,&local_518,&iStack_514);
    }
  }
  if (local_458 == '\x01') {
    if (local_18b0 < local_18a8) {
      if (local_18b0 == (long *****)0x0) {
LAB_0095b488:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *local_18b0 = (long ****)CONCAT44(iStack_474,local_478);
      local_18b0 = local_18b0 + 1;
    }
    else {
      local_18b0 = (long *****)FUN_00962450(&local_18b8,&local_478,&iStack_474);
    }
  }
  pppppplVar43 = (long ******)param_1[0x429];
  pppplVar18 = param_1[8];
  ppppplVar42 = local_18b0;
  if (pppppplVar43 != (long ******)0x0) {
    FUN_00d0f740(1,pppppplVar43);
    ppppplVar42 = local_18b0;
  }
  ppppplVar10 = local_18a8;
  ppppplVar41 = local_18b8;
  local_18a8 = (long *****)0x0;
  local_18b8 = (long *****)0x0;
  local_18b0 = (long *****)0x0;
  pppppplVar25 = (long ******)operator_new(0x28);
  *pppppplVar25 = param_1;
  *(undefined4 *)(pppppplVar25 + 1) = uVar13;
  pppppplVar25[2] = ppppplVar41;
  pppppplVar25[3] = ppppplVar42;
  pppppplVar25[4] = ppppplVar10;
  local_18f0 = FUN_00433984;
  local_18e8 = 0;
  local_1900[0] = pppppplVar25;
  local_18e0[0] = (long *******)operator_new(0x30);
  *local_18e0[0] = pppppplVar43;
  local_18e0[0][4] = (long ******)FUN_00964418;
  local_18e0[0][5] = (long ******)FUN_00964274;
  local_1850 = FUN_005db390;
  local_18e0[0][2] = pppppplVar25;
  local_1848 = (undefined **)FUN_005db348;
  local_18d0 = FUN_00433984;
  local_18c8 = 0;
  local_1860 = local_18e0[0];
  (*(code *)(*pppplVar18)[1])(pppplVar18,&local_1860,&local_1ac0,&local_16f0);
  (*local_1850)(0,&local_1860,&local_1860);
  (*local_18d0)(0,local_18e0,local_18e0);
  (*local_18f0)(0,local_1900,local_1900);
  pppplVar18 = (long ****)(*(code *)(*param_1[0xe])[2])(param_1[0xe],param_1 + 3,&local_5e0);
  pppplVar29 = param_1[0x3f];
  param_1[0x3f] = pppplVar18;
  if (pppplVar29 != (long ****)0x0) {
    (*(code *)(*pppplVar29)[1])(pppplVar29);
    pppplVar18 = param_1[0x3f];
  }
  (*(code *)(*pppplVar18)[4])(pppplVar18,*(undefined1 *)(param_1 + 0x3c));
  if (((((((bVar28 & 1) == 0) && ((int)local_5e0 == *(int *)(param_1 + 0xce))) &&
        (local_5e0._4_2_ == *(short *)((long)param_1 + 0x674))) &&
       ((local_5e0._6_2_ == *(short *)((long)param_1 + 0x676) &&
        (uStack_5c8._4_4_ == *(int *)((long)param_1 + 0x68c))))) &&
      ((byte)local_5c0 == *(char *)(param_1 + 0xd2))) && (local_b8 == *(uint *)(param_1 + 0x173))) {
    bVar28 = *(byte *)((long)param_1 + 0x401);
    uVar14 = FUN_007b8e5c(&local_5e0);
    uVar15 = FUN_007b8e5c(param_1 + 0xce);
    if ((((uVar14 ^ uVar15) & 1) != 0) ||
       (((bVar28 & 1) == 0 && ((int)uStack_5d8 != *(int *)(param_1 + 0xcf))))) goto LAB_0095b704;
    if (3 < (int)local_5e0) {
      if ((int)local_5e0 == 4) {
        uVar19 = FUN_007b8cbc(&local_5e0);
        uVar24 = FUN_007b8cbc(param_1 + 0xce);
        uVar17 = FUN_007b858c(uVar19,uVar24);
      }
      else {
        if ((int)local_5e0 != 5) goto LAB_0095c4d8;
        uVar19 = FUN_007b8ce0(&local_5e0);
        uVar24 = FUN_007b8ce0(param_1 + 0xce);
        uVar17 = FUN_007b85dc(uVar19,uVar24);
      }
      if ((uVar17 & 1) != 0) goto LAB_0095c4d8;
      goto LAB_0095b704;
    }
    if ((int)local_5e0 == 1) {
      uVar19 = FUN_007b8c8c(&local_5e0);
      uVar24 = FUN_007b8c8c(param_1 + 0xce);
      uVar17 = FUN_007b84bc(uVar19,uVar24);
    }
    else {
      if ((int)local_5e0 != 2) goto LAB_0095c4d8;
      uVar19 = FUN_007b8ca4(&local_5e0);
      uVar24 = FUN_007b8ca4(param_1 + 0xce);
      uVar17 = FUN_007b850c(uVar19,uVar24);
    }
    if ((uVar17 & 1) == 0) goto LAB_0095b704;
LAB_0095c4d8:
    if ((byte)local_5c0 == '\0') goto LAB_0095c72c;
    fVar47 = (float)NEON_ucvtf(local_5d0._4_4_);
    if ((local_598 & 1) != 0) {
      if (*(char *)(param_1 + 0xd7) == '\x01') {
        if (((((int)uStack_5b8 != *(int *)(param_1 + 0xd3)) ||
             (uStack_5b8._4_4_ != *(int *)((long)param_1 + 0x69c))) ||
            (local_5b0._4_1_ != *(char *)((long)param_1 + 0x6a4))) ||
           (local_59c != *(int *)((long)param_1 + 0x6b4))) goto LAB_0095ca20;
        if (((float)local_5b0 == *(float *)(param_1 + 0xd4)) || ((float)local_5b0 == fVar47))
        goto LAB_0095c574;
      }
      goto LAB_0095b704;
    }
LAB_0095c574:
    if ((byte)local_5c0 == '\x01') {
LAB_0095c72c:
      if ((int)local_5e0 == 2) {
        lVar21 = FUN_007b8ca4(&local_5e0);
        cVar7 = *(char *)(lVar21 + 10);
        if (cVar7 != '\0') {
          if (local_3b8[0] == 1) {
            if (((local_3d8 != *(int *)(param_1 + 0x10f)) ||
                (local_3d4 != *(int *)((long)param_1 + 0x87c))) ||
               ((local_3cc != *(char *)((long)param_1 + 0x884) ||
                (bVar12 = true, local_3bc != *(int *)((long)param_1 + 0x894))))) goto LAB_0095ca20;
            if (((ulong)param_1[0x113] & 1) != 0) goto LAB_0095c7c8;
            goto LAB_0095b708;
          }
LAB_0095c7c8:
          if (cVar7 != '\x01') {
            if (local_318 == 1) {
              if ((((local_338 != *(int *)(param_1 + 0x123)) ||
                   (local_334 != *(int *)((long)param_1 + 0x91c))) ||
                  (local_32c != *(char *)((long)param_1 + 0x924))) ||
                 (bVar12 = true, local_31c != *(int *)((long)param_1 + 0x934))) goto LAB_0095ca20;
              if (((ulong)param_1[0x127] & 1) == 0) goto LAB_0095b708;
            }
            if (cVar7 != '\x02') {
              if (local_278 == 1) {
                if (((local_298 != *(int *)(param_1 + 0x137)) ||
                    (local_294 != *(int *)((long)param_1 + 0x9bc))) ||
                   ((local_28c != *(char *)((long)param_1 + 0x9c4) ||
                    (bVar12 = true, local_27c != *(int *)((long)param_1 + 0x9d4)))))
                goto LAB_0095ca20;
                if (((ulong)param_1[0x13b] & 1) == 0) goto LAB_0095b708;
              }
              if (cVar7 != '\x03') {
                if (local_1d8 == 1) {
                  if (((local_1f8 != *(int *)(param_1 + 0x14b)) ||
                      (local_1f4 != *(int *)((long)param_1 + 0xa5c))) ||
                     ((local_1ec != *(char *)((long)param_1 + 0xa64) ||
                      (bVar12 = true, local_1dc != *(int *)((long)param_1 + 0xa74)))))
                  goto LAB_0095ca20;
                  if (((ulong)param_1[0x14f] & 1) == 0) goto LAB_0095b708;
                }
                if (cVar7 != '\x04') {
                  if (local_138 == 1) {
                    if ((((local_158 != *(int *)(param_1 + 0x15f)) ||
                         (local_154 != *(int *)((long)param_1 + 0xafc))) ||
                        (local_14c != *(char *)((long)param_1 + 0xb04))) ||
                       (bVar12 = true, local_13c != *(int *)((long)param_1 + 0xb14)))
                    goto LAB_0095ca20;
                    if (((ulong)param_1[0x163] & 1) == 0) goto LAB_0095b708;
                  }
                  if (cVar7 != '\x05') {
LAB_0095ca30:
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(0x5512,0x95ca34);
                    (*pcVar11)();
                  }
                }
              }
            }
          }
        }
      }
      uVar8 = *(ushort *)((long)param_1 + 0xbc4);
      bVar28 = (byte)(local_8c >> 8);
      bVar37 = (byte)(uVar8 >> 8);
      bVar12 = bVar28 != bVar37;
      if ((bVar37 & bVar28) != 0) {
        if ((uVar8 >> 8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                    );
        }
        bVar12 = (local_8c & 0xff) != (uVar8 & 0xff);
      }
    }
    else {
      if ((local_4f8 != '\x01') ||
         ((((*(char *)(param_1 + 0xeb) == '\x01' && (local_518 == *(int *)(param_1 + 0xe7))) &&
           ((iStack_514 == *(int *)((long)param_1 + 0x73c) &&
            ((local_50c == *(char *)((long)param_1 + 0x744) &&
             (local_4fc == *(int *)((long)param_1 + 0x754))))))) &&
          ((local_510 == *(float *)(param_1 + 0xe8) || (local_510 == fVar47)))))) {
        if ((byte)local_5c0 != '\x02') {
          if ((local_458 == '\x01') &&
             ((((*(char *)(param_1 + 0xff) != '\x01' || (local_478 != *(int *)(param_1 + 0xfb))) ||
               (iStack_474 != *(int *)((long)param_1 + 0x7dc))) ||
              (((local_46c != *(char *)((long)param_1 + 0x7e4) ||
                (local_45c != *(int *)((long)param_1 + 0x7f4))) ||
               ((local_470 != *(float *)(param_1 + 0xfc) && (local_470 != fVar47))))))))
          goto LAB_0095ca20;
          if ((byte)local_5c0 != '\x03') goto LAB_0095ca30;
        }
        goto LAB_0095c72c;
      }
LAB_0095ca20:
      bVar12 = true;
    }
  }
  else {
LAB_0095b704:
    bVar12 = true;
  }
LAB_0095b708:
  iVar16 = FUN_00981578((long)param_1 + 0x20e4,(ulong)local_5e0 & 0xffffffff,local_b8 == 1);
  uVar17 = FUN_0098156c((long)param_1 + 0x20e4);
  if (((uVar17 & 1) == 0) && ((int)local_5e0 == 2)) {
    if (*(char *)(param_1 + 0x41b) == '\x01') {
      iVar40 = *(int *)((long)param_1 + 0x20d4);
    }
    else {
      iVar40 = 0;
    }
    if ((iVar16 == 0) && (*(int *)(param_1 + 9) <= iVar40)) {
      iVar16 = -1;
    }
  }
  FUN_007b8e50(&local_5e0,iVar16);
  uVar17 = (ulong)local_5c0 & 0xff;
  (*(code *)(*param_1[0x3d])[0xc])(&local_1860);
  FUN_00973afc(param_1 + 0x415,uVar17,local_176c,(ulong)local_5e0 & 0xffffffff,param_1[4]);
  FUN_007b9754(&local_1860);
  FUN_0095d0a0(param_1 + 0xce,&local_5e0);
  if (bVar12) {
    FUN_0095ca4c(param_1);
    local_16f0 = (undefined1 *)CONCAT71(0xaaaaaaaaaaaaaa,*(undefined1 *)(param_1 + 0xf));
    pppplStack_16e8 = (long ****)0x5a0;
    if (param_1[0x50] != (long ****)0x0) {
      pppplStack_16e8 = param_1[0x50];
    }
    local_16f0 = (undefined1 *)CONCAT44(*(undefined4 *)(param_1 + 9),(undefined4)local_16f0);
    local_16e0 = (undefined1 *)CONCAT35(0xaaaaaa,*(undefined5 *)((long)param_1 + 0x20dc));
    iVar16 = (*(code *)(*param_1[0x3d])[4])(param_1[0x3d],param_1 + 0xce,&local_16f0);
    if (iVar16 == 0) {
      *(undefined1 *)(param_1 + 0x3e) = 1;
      (*(code *)(*param_1[0x3d])[5])(param_1[0x3d],param_1 + 1);
      FUN_0096603c(param_1 + 0x18b,param_1 + 0xce);
      pppplVar18 = param_1[0x189];
      pppplVar29 = param_1[0x188];
      uVar35 = (ulong)((long)pppplVar18 + (-4 - ((long)pppplVar18 << 0x3e))) >> 2;
      uVar17 = (ulong)(((long)pppplVar29 - (long)pppplVar18 << 0x3e) -
                      ((long)pppplVar29 - (long)pppplVar18)) >> 2;
      if (uVar35 <= uVar17) {
        uVar17 = uVar35;
      }
      if ((1 < uVar17) && ((((int)pppplVar29 - (int)pppplVar18 | -(int)pppplVar18) & 3U) == 0)) {
        uVar17 = uVar17 & 0x3ffffffffffffffe;
        pppplVar18 = (long ****)((long)pppplVar18 + uVar17 * -4);
        do {
          uVar17 = uVar17 - 2;
        } while (uVar17 != 0);
      }
      do {
        if (pppplVar18 == pppplVar29) {
          param_1[0x189] = pppplVar29;
          local_1860 = (long *******)CONCAT44(local_1860._4_4_,3);
          bVar28 = (byte)local_5c0;
          if ((byte)local_5c0 < 2) {
            bVar28 = 1;
          }
          FUN_0095d2f0(param_1 + 0x188,bVar28,&local_1860);
          if (*(char *)((long)param_1 + 0x79) == '\x01') {
            uVar13 = *(undefined4 *)(param_1 + 0x23);
            uVar17 = FUN_0096a654(param_1 + 0xce);
            pppplVar18 = (long ****)FUN_00976cf4(param_1 + 3,uVar13,uVar17 & 0xff | 0x100);
            pppplVar29 = param_1[0x42b];
            param_1[0x42b] = pppplVar18;
            if (pppplVar29 != (long ****)0x0) {
              (*(code *)(*pppplVar29)[1])(pppplVar29);
            }
          }
          goto LAB_0095b9e8;
        }
        pppplVar18 = (long ****)((long)pppplVar18 + -4);
      } while (pppplVar18 != (long ****)0x0);
      goto LAB_0095c2bc;
    }
    uVar17 = FUN_004249b0();
    if ((uVar17 & 1) == 0) {
      local_1948 = "../../video/video_stream_encoder.cc";
      local_1938 = &uStack_1949;
      local_1940 = 0x2c13;
      local_1928 = &local_1948;
      local_1930 = "Failed to initialize the encoder associated with codec type: ";
      local_1920 = FUN_007b8c54(*(undefined4 *)(param_1 + 0xce));
      local_1918 = &local_1930;
      local_1908 = &local_1920;
      local_1910 = &DAT_001a2df6;
      FUN_00964508(&local_1ac0,param_1 + 0xce);
      if ((long)local_1ab0 < 0) {
        FUN_005478d8(&local_1860,local_1ac0,uStack_1ab8);
        local_1848 = &local_1910;
        if ((long)local_1ab0 < 0) {
          operator_delete(local_1ac0);
        }
      }
      else {
        local_1848 = &local_1910;
        ppppppplStack_1858 = uStack_1ab8;
        local_1860 = local_1ac0;
        local_1850 = local_1ab0;
      }
      puVar45 = *(undefined8 **)((long)local_1848[1] + 8);
      puVar44 = (undefined8 *)puVar45[1];
      uVar19 = CONCAT44(uVar46,iVar16);
      FUN_00623bb0(&DAT_00229894,*puVar44,*(undefined4 *)(puVar44 + 1),*puVar45,
                   *(undefined8 *)local_1848[1],*local_1848,&local_1860,"). Error: ",uVar19);
      uVar46 = (undefined4)((ulong)uVar19 >> 0x20);
      if ((long)local_1850 < 0) {
        operator_delete(local_1860);
      }
    }
    FUN_0095ca4c(param_1);
LAB_0095b9e8:
    FUN_00966f2c(param_1 + 0x18b);
    if (*(char *)(param_1 + 0xab) == '\x01') {
      *(undefined1 *)(param_1 + 0xab) = 0;
    }
    *(undefined1 *)((long)param_1 + 0x401) = 0;
    *(undefined1 *)(param_1 + 0x255) = 0;
  }
  FUN_0095d604(param_1);
  if (*(char *)(param_1 + 0x3e) == '\x01') {
    uVar17 = FUN_0044075c();
    if ((uVar17 & 1) == 0) {
      FUN_00623bb0(&DAT_0022989c,"../../video/video_stream_encoder.cc",0x2d10," max bitrate ",
                   uStack_5d8._4_4_," start bitrate ",(ulong)uStack_5d8 & 0xffffffff,
                   " max frame rate ",CONCAT44(uVar46,local_5d0._4_4_)," max payload size ",
                   param_1[0x50]);
    }
  }
  else {
    uVar17 = FUN_004249b0();
    if ((uVar17 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../video/video_stream_encoder.cc",0x2d3b,
                   "[VSE] Failed to configure encoder.");
    }
    pppplVar18 = param_1[0x3f];
    param_1[0x3f] = (long ****)0x0;
    if (pppplVar18 != (long ****)0x0) {
      (*(code *)(*pppplVar18)[1])();
    }
  }
  if (*(char *)((long)param_1 + 0x205) == '\x01') {
    FUN_00983630(param_1 + 0x25c);
    *(undefined1 *)((long)param_1 + 0x205) = 0;
  }
  if ((int)local_5e0 < 3) {
    if ((int)local_5e0 == 1) {
      pbVar26 = (byte *)FUN_007b8c80(&local_5e0);
      uVar14 = (uint)*pbVar26;
    }
    else if ((int)local_5e0 == 2) {
      pbVar26 = (byte *)FUN_007b8c98(&local_5e0);
      uVar14 = (uint)*pbVar26;
    }
    else {
LAB_0095bb68:
      uVar14 = 1;
      if (((int)local_5e0 == 0) && ((byte)local_5c0 != '\0')) {
        uVar14 = (uint)local_5b0._4_1_;
      }
    }
  }
  else if ((int)local_5e0 == 3) {
LAB_0095baf8:
    if ((local_8c >> 8 & 1) == 0) {
      if ((int)local_5e0 == 5) {
        lVar21 = FUN_007b8cd4(&local_5e0);
        uVar14 = (uint)*(byte *)(lVar21 + 8);
      }
      else {
        if ((int)local_5e0 == 4) goto LAB_0095bb10;
        uVar14 = 1;
      }
    }
    else {
      uVar14 = FUN_0096a40c();
    }
  }
  else {
    if ((int)local_5e0 != 4) {
      if ((int)local_5e0 != 5) goto LAB_0095bb68;
      goto LAB_0095baf8;
    }
LAB_0095bb10:
    lVar21 = FUN_007b8cb0(&local_5e0);
    uVar14 = (uint)*(byte *)(lVar21 + 8);
  }
  FUN_009659cc(param_1 + 0x17a);
  uVar46 = NEON_ucvtf((int)uStack_5d8);
  FUN_00965e60(uVar46,(float)*(int *)(param_1 + 0x40),param_1 + 0x17a);
  (*(code *)(*param_1[4])[2])(&local_1860,param_1[4],"WebRTC-FrameDropper",0x13);
  ppppppplVar32 = ppppppplStack_1858;
  if (-1 < (long)local_1850) {
    ppppppplVar32 = (long *******)((ulong)local_1850 >> 0x38);
  }
  if (ppppppplVar32 < (long *******)0x8) {
    bVar12 = false;
    if (-1 < (long)local_1850) goto LAB_0095bc00;
LAB_0095bc38:
    operator_delete(local_1860);
    if (!bVar12) goto LAB_0095bc4c;
LAB_0095bc04:
    local_b8 = 1;
  }
  else {
    ppppppplVar32 = local_1860;
    if (-1 < (long)local_1850) {
      ppppppplVar32 = (long *******)&local_1860;
    }
    bVar12 = *ppppppplVar32 == (long ******)0x64656c6261736944;
    if ((long)local_1850 < 0) goto LAB_0095bc38;
LAB_0095bc00:
    if (bVar12) goto LAB_0095bc04;
LAB_0095bc4c:
    if (((int)uVar14 < 2) || (local_b8 != 1)) {
      local_b8 = (uint)((int)local_5e0 == 5);
    }
  }
  *(char *)(param_1 + 0x184) = (char)local_b8;
  puStack_15e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_15f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_15f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1600 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1608 = &DAT_aaaaaaaaaaaaaaaa;
  local_1610 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1618 = &DAT_aaaaaaaaaaaaaaaa;
  local_1620 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1628 = &DAT_aaaaaaaaaaaaaaaa;
  local_1630 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1638 = &DAT_aaaaaaaaaaaaaaaa;
  local_1640 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1648 = &DAT_aaaaaaaaaaaaaaaa;
  local_1650 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1658 = &DAT_aaaaaaaaaaaaaaaa;
  local_1660 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1668 = &DAT_aaaaaaaaaaaaaaaa;
  local_1670 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1678 = &DAT_aaaaaaaaaaaaaaaa;
  local_1680 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1688 = &DAT_aaaaaaaaaaaaaaaa;
  local_1690 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1698 = &DAT_aaaaaaaaaaaaaaaa;
  local_16a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_16a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_16b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_16b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_16c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_16c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_16d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_16d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_16e0 = &DAT_aaaaaaaaaaaaaaaa;
  pppplStack_16e8 = (long ****)&DAT_aaaaaaaaaaaaaaaa;
  local_16f0 = &DAT_aaaaaaaaaaaaaaaa;
  (*(code *)(*param_1[0x3d])[0xc])(&local_16f0);
  uVar17 = FUN_008a5858(param_1 + 0x11);
  if ((uVar17 & 1) != 0) {
    pppplVar18 = param_1[4];
    pppplVar29 = param_1[5];
    pppplVar27 = (long ****)operator_new(0x2e0);
    FUN_009683e8(pppplVar27,&local_5e0,pppplVar18,pppplVar29);
    pppplVar18 = param_1[0x187];
    param_1[0x187] = pppplVar27;
    if (pppplVar18 != (long ****)0x0) {
      FUN_009688fc(pppplVar18);
      operator_delete(pppplVar18);
      pppplVar27 = param_1[0x187];
    }
    FUN_0096986c(pppplVar27,&local_16f0);
  }
  if ((param_1[0x3f] != (long ****)0x0) && (*(char *)(param_1 + 0x7f) == '\x01')) {
    local_1860 = (long *******)(PTR_DAT_00d52958 + 0x10);
    memcpy(&ppppppplStack_1858,param_1 + 0x52,0x160);
    local_16f8 = param_1[0x7e];
    FUN_007baa68(param_1 + 0x51);
    *(undefined1 *)(param_1 + 0x7f) = 0;
    uVar14 = 0x1e;
    if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
      uVar14 = *(uint *)(param_1 + 0x40);
    }
    if (((param_1[0x22] != (long ****)0x0) &&
        (uVar17 = (*(code *)(*param_1[0x22])[7])(), (uVar17 >> 0x20 & 1) != 0)) &&
       ((uint)uVar17 != 0)) {
      uVar14 = (uint)uVar17;
    }
    local_1708 = (double)uVar14;
    FUN_0095e508(&local_1ac0,param_1,&local_1860);
    FUN_0095d82c(param_1,&local_1ac0);
    FUN_007baa68(&local_1ac0);
    FUN_007baa68(&local_1860);
  }
  (*(code *)(*param_1[0x1f])[7])(param_1[0x1f],param_1 + 0x23,&local_1880);
  puVar31 = local_1880;
  *(undefined1 *)((long)param_1 + 0x204) = 0;
  if (param_1[0x3b] < (long ****)0x2) {
    bVar28 = 1;
  }
  else {
    uVar17 = ((long)param_1[0x39] - (long)param_1[0x38] >> 3) * -0x70a3d70a3d70a3d7;
    if (uVar17 < 2) {
      uVar17 = 1;
    }
    lVar21 = (long)param_1[0x3b] + -2;
    pbVar26 = (byte *)((long)param_1[0x38] + 0x11a);
    do {
      uVar17 = uVar17 - 1;
      if (uVar17 == 0) goto LAB_0095c368;
      bVar28 = *pbVar26;
    } while (((bVar28 & 1) == 0) &&
            (bVar12 = lVar21 != 0, lVar21 = lVar21 + -1, pbVar26 = pbVar26 + 200, bVar12));
    bVar28 = bVar28 ^ 1;
  }
  uVar14 = *(uint *)(param_1 + 0x23);
  if ((uVar14 == 2) || (uVar14 == 5)) {
    if ((bVar28 & 1) != 0) goto LAB_0095be78;
LAB_0095bf3c:
    bVar12 = false;
  }
  else {
    if ((bVar28 & uVar14 == 3) == 0) goto LAB_0095bf3c;
LAB_0095be78:
    if ((puStack_1878 == local_1880) ||
       (iVar16 = FUN_008a6f40(&local_5e0), puStack_1878 == local_1880)) {
LAB_0095c368:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                );
    }
    iVar40 = *(int *)((long)puVar31 + 0x1c);
    if (iVar16 <= *(int *)((long)puVar31 + 0x1c)) {
      iVar40 = iVar16;
    }
    *(int *)((long)local_1880 + 0x1c) = iVar40;
    *(int *)((long)local_1880 + 0x14) = local_3c0 * 1000;
    uVar46 = FUN_008a71dc(&local_5e0);
    if (puStack_1878 == local_1880) goto LAB_0095c368;
    *(undefined4 *)(local_1880 + 3) = uVar46;
    *local_1880 = puStack_1878[-0x19];
    if (local_1880 == puStack_1878) {
LAB_0095c614:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
                );
    }
    local_1880[1] = puStack_1878[-0x18];
    if ((int)local_5e0 == 3) {
      if ((local_8c >> 8 & 1) == 0) goto LAB_0095bf4c;
      uVar14 = FUN_0096a3b0();
    }
    else if ((int)local_5e0 == 2) {
      lVar21 = FUN_007b8ca4(&local_5e0);
      uVar14 = (uint)*(byte *)(lVar21 + 10);
    }
    else {
LAB_0095bf4c:
      uVar14 = (uint)((int)local_5e0 == 5);
    }
    bVar12 = 1 < (int)uVar14;
    FUN_0095e7c4(&local_1880,1);
  }
  local_1ad0 = local_1870;
  local_1870 = 0;
  puStack_1ad8 = puStack_1878;
  local_1ae0 = local_1880;
  puStack_1878 = (ulong *)0x0;
  local_1880 = (ulong *)0x0;
  (*(code *)(*param_1[10])[6])
            (param_1[10],&local_1ae0,bVar12,*(undefined4 *)(param_1 + 0x34),
             *(undefined4 *)(param_1 + 0x36));
  puVar34 = local_1ae0;
  puVar31 = puStack_1ad8;
  if (local_1ae0 != (ulong *)0x0) {
    while (puVar34 != puVar31) {
      puVar31 = puVar31 + -0x19;
      if (puVar31 == (ulong *)0x0) goto LAB_0095c2bc;
      FUN_008492a8(puVar31);
    }
    puStack_1ad8 = puVar34;
    operator_delete(local_1ae0);
  }
  FUN_00984be0(param_1 + 0x25c,&local_16f0);
  FUN_00984dec(param_1 + 0x25c,&local_16f0);
  local_1840 = &DAT_aaaaaaaaaaaaaaaa;
  ppppppplStack_1858 = (long *******)&DAT_aaaaaaaaaaaaaaaa;
  local_1860 = (long *******)&DAT_aaaaaaaaaaaaaaaa;
  local_1848 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  local_1850 = (code *)&DAT_aaaaaaaaaaaaaaaa;
  FUN_005ecd48(&local_1860);
  if (((ulong)param_1[0x3e] & 1) == 0) {
    uVar17 = FUN_004022fc();
    if ((uVar17 & 1) == 0) {
      uVar19 = FUN_007b8c54((ulong)local_5e0 & 0xffffffff);
      FUN_00623bb0(&DAT_002298a6,"../../video/video_stream_encoder.cc",0x3092,
                   "Failed to initialize ",uVar19," encoder.","switch_encoder_on_init_failures: ",
                   *(undefined1 *)(param_1 + 0x41a));
    }
    if (*(char *)(param_1 + 0x41a) == '\x01') {
      FUN_0095cb7c(param_1);
    }
    else {
      puVar45 = (undefined8 *)((ulong)&local_1860 | 8);
      local_1a9a = 0;
      local_1ac0 = (long *******)CONCAT44(local_1ac0._4_4_,1);
      uStack_1ab8 = (long *******)0x0;
      local_1ab0 = (code *)0x0;
      local_1aa8 = 0;
      uStack_1aa3 = 0;
      uStack_1aa1 = 0;
      uStack_1a9d = 0;
      uStack_1a9c = 0;
      local_1860 = (long *******)CONCAT44(local_1860._4_4_,1);
      if ((long)local_1848 < 0) {
        FUN_00547f08(puVar45,&uStack_1ab8,0);
        local_1840._0_7_ =
             CONCAT43(CONCAT13(local_1a9a,CONCAT12(bStack_1a9b,CONCAT11(uStack_1a9c,uStack_1a9d))),
                      uStack_1aa1._1_3_);
        if ((char)uStack_1aa1 < '\0') {
          operator_delete(uStack_1ab8);
        }
      }
      else {
        *puVar45 = 0;
        puVar45[1] = 0;
        puVar45[2] = 0;
        local_1840._0_7_ = (uint7)bStack_1a9b << 0x28;
      }
    }
  }
  pppplVar18 = param_1[0x42];
  if ((long ****)0x1 < pppplVar18) {
    ppppplVar42 = param_1 + 0x44;
    ppppplVar41 = param_1 + 0x44;
    if (((ulong)pppplVar18 & 1) != 0) {
      ppppplVar41 = (long *****)*ppppplVar42;
    }
    lVar21 = ((ulong)pppplVar18 & 0xffffffffffffffe) << 4;
    if (((ulong)pppplVar18 & 0xffffffffffffffe) != 0) {
      puVar45 = (undefined8 *)((ulong)&local_1860 | 8);
      do {
        local_1b30[0] = local_1860._0_4_;
        if ((long)local_1848 < 0) {
          FUN_005478d8(&local_1b28,ppppppplStack_1858,local_1850);
        }
        else {
          uStack_1b20 = puVar45[1];
          local_1b28 = (void *)*puVar45;
          local_1b18 = puVar45[2];
        }
        uStack_1b0c = (undefined3)((ulong)local_1840 >> 0x20);
        local_1b10 = (undefined4)local_1840;
        FUN_0088a3f0(auStack_1b08,ppppplVar41,local_1b30);
        if (cStack_1ae9 < '\0') {
          operator_delete(local_1b00);
        }
        if (local_1b18 < 0) {
          operator_delete(local_1b28);
        }
        lVar21 = lVar21 + -0x20;
        ppppplVar41 = ppppplVar41 + 4;
      } while (lVar21 != 0);
      pppplVar18 = param_1[0x42];
    }
    pppplVar29 = (long ****)((ulong)pppplVar18 & 1);
    if (pppplVar29 != (long ****)0x0) {
      ppppplVar42 = (long *****)*ppppplVar42;
    }
    uVar17 = (ulong)pppplVar18 >> 1;
    if (uVar17 != 0) {
      ppppplVar42 = ppppplVar42 + uVar17 * 4;
      do {
        ppppplVar41 = ppppplVar42 + -4;
        if (ppppplVar41 == (long *****)0x0) goto LAB_0095c2bc;
        uVar17 = uVar17 - 1;
        (*(code *)ppppplVar42[-2])(0,ppppplVar41,ppppplVar41);
        ppppplVar42 = ppppplVar41;
      } while (uVar17 != 0);
      pppplVar29 = (long ****)((ulong)param_1[0x42] & 1);
    }
    param_1[0x42] = pppplVar29;
  }
  if ((long)local_1848 < 0) {
    operator_delete(ppppppplStack_1858);
  }
  FUN_007b9754(&local_16f0);
  if (local_18b8 == (long *****)0x0) {
LAB_0095c2e0:
    FUN_008a03f4(&local_5e0);
    puVar34 = local_1880;
    puVar31 = puStack_1878;
    if (local_1880 != (ulong *)0x0) {
      while (puVar34 != puVar31) {
        puVar31 = puVar31 + -0x19;
        if (puVar31 == (ulong *)0x0) goto LAB_0095c2bc;
        FUN_008492a8(puVar31);
      }
      puStack_1878 = puVar34;
      operator_delete(local_1880);
    }
LAB_0095c330:
    if (*(long *)(lVar23 + 0x28) == local_78) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar35 = (ulong)((long)local_18b0 + (-8 - ((long)local_18b0 << 0x3d))) >> 3;
  uVar17 = (ulong)(((long)local_18b8 - (long)local_18b0 << 0x3d) -
                  ((long)local_18b8 - (long)local_18b0)) >> 3;
  if (uVar35 <= uVar17) {
    uVar17 = uVar35;
  }
  ppppplVar42 = local_18b0;
  if ((1 < uVar17) && ((((int)local_18b8 - (int)local_18b0 | -(int)local_18b0) & 7U) == 0)) {
    uVar17 = uVar17 & 0x1ffffffffffffffe;
    ppppplVar42 = local_18b0 + -uVar17;
    do {
      uVar17 = uVar17 - 2;
    } while (uVar17 != 0);
  }
  do {
    if (ppppplVar42 == local_18b8) {
      local_18b0 = local_18b8;
      operator_delete(local_18b8);
      goto LAB_0095c2e0;
    }
    ppppplVar42 = (long *****)((long ****)ppppplVar42 + -1);
  } while (ppppplVar42 != (long *****)0x0);
LAB_0095c2bc:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0095ca4c  FUN_0095ca4c =====

void FUN_0095ca4c(long param_1)

{
  int iVar1;
  long *plVar2;
  
  if ((*(long **)(param_1 + 0x1e8) != (long *)0x0) && (*(char *)(param_1 + 0x1f0) == '\x01')) {
    (**(code **)(**(long **)(param_1 + 0x1e8) + 0x30))();
    plVar2 = *(long **)(param_1 + 0x2158);
    *(undefined1 *)(param_1 + 0x1f0) = 0;
    *(undefined8 *)(param_1 + 0x2158) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (((DAT_00d806d8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d806d8), iVar1 != 0)) {
      DAT_00d806d0 = (char *)FUN_0066d328("webrtc");
      FUN_0054ff1c(&DAT_00d806d8);
    }
    if (*DAT_00d806d0 != '\0') {
      FUN_0066d348(0x42,DAT_00d806d0,"VCMGenericEncoder::Release",0,0,0,0,0,0);
      if (*DAT_00d806d0 != '\0') {
        FUN_0066d348(0x45,DAT_00d806d0,"VCMGenericEncoder::Release",0,0,0,0,0,0);
      }
    }
  }
  return;
}


// ===== 0095cb7c  FUN_0095cb7c =====

void FUN_0095cb7c(long param_1)

{
  long *****ppppplVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  char *__s;
  size_t __n;
  char **__dest;
  long lVar6;
  long lVar7;
  char *local_140;
  size_t sStack_138;
  undefined8 local_130;
  long ****local_128;
  ulong local_120;
  byte bStack_111;
  char local_c8;
  undefined8 local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  ulong local_60;
  long local_58;
  
  __dest = &local_140;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar7 = *(long *)(param_1 + 0x68);
  lVar6 = *(long *)(param_1 + 0xf0);
  uVar5 = FUN_00417e08();
  if ((uVar5 & 1) == 0) {
    FUN_00623bb0(&DAT_001f666f,"../../video/video_stream_encoder.cc",0x3161,"RequestEncoderSwitch.",
                 " is_encoder_selector_available: ",lVar6 != 0," is_encoder_switching_supported: ",
                 lVar7 != 0);
  }
  if (lVar7 == 0) goto LAB_0095ce70;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = 0xaaaaaaaaaaaaaa00;
  local_60 = 0xaaaaaaaaaaaaaa00;
  if (lVar6 == 0) {
LAB_0095cc98:
    (**(code **)(**(long **)(param_1 + 0x20) + 0x10))
              (&local_128,*(long **)(param_1 + 0x20),
               "WebRTC-SwitchEncoderFollowCodecPreferenceOrder",0x2e);
    if (-1 < (char)bStack_111) {
      local_120 = (ulong)bStack_111;
    }
    if (local_120 < 8) {
      bVar4 = false;
      if ((char)bStack_111 < '\0') goto LAB_0095cd50;
LAB_0095cd10:
      if (bVar4) goto LAB_0095cd14;
    }
    else {
      ppppplVar1 = (long *****)local_128;
      if (-1 < (char)bStack_111) {
        ppppplVar1 = &local_128;
      }
      bVar4 = *ppppplVar1 == (long ****)0x64656c6261736944;
      if (-1 < (char)bStack_111) goto LAB_0095cd10;
LAB_0095cd50:
      operator_delete(local_128);
      if (bVar4) {
LAB_0095cd14:
        __s = (char *)FUN_007b8c54(1);
        if (__s == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/string:1063: libc++ Hardening assertion __s != nullptr failed: basic_string(const char*) detected nullptr\n"
                    );
        }
        __n = strlen(__s);
        if (0x7ffffffffffffff6 < __n) {
                    /* WARNING: Subroutine does not return */
          FUN_005d45ec();
        }
        if (__n < 0x17) {
          local_130 = CONCAT17((char)__n,(undefined7)local_130);
        }
        else {
          uVar5 = (__n & 0x7ffffffffffffff8) + 8;
          uVar2 = 0x19;
          if (uVar5 != 0x18) {
            uVar2 = uVar5;
          }
          __dest = (char **)operator_new(uVar2);
          local_130 = uVar2 | 0x8000000000000000;
          local_140 = (char *)__dest;
          sStack_138 = __n;
        }
        if ((char *)((long)__dest + __n) < __dest) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                    );
        }
        if ((__dest <= __s) && (__s < (char *)((long)__dest + __n))) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                    );
        }
        memmove(__dest,__s,__n);
        *(char *)((long)__dest + __n) = '\0';
        FUN_007b687c(&local_128,&local_140);
        if ((local_60 & 1) == 0) {
          FUN_007b6ad4(&local_c0,&local_128);
          local_60 = CONCAT71(local_60._1_7_,1);
        }
        else {
          FUN_007b6c74(&local_c0,&local_128);
        }
        FUN_007b6d78(&local_128);
        if ((long)local_130 < 0) {
          operator_delete(local_140);
        }
        if ((local_60 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                    );
        }
        goto LAB_0095ce48;
      }
    }
    *(undefined1 *)(param_1 + 0x12a8) = 1;
    (**(code **)(**(long **)(param_1 + 0x68) + 0x10))();
  }
  else {
    (**(code **)(**(long **)(param_1 + 0xf0) + 0x28))(&local_128);
    if ((char)local_60 == local_c8) {
      if ((local_60 & 1) != 0) {
        FUN_007b6c74(&local_c0,&local_128);
      }
    }
    else if ((local_60 & 1) == 0) {
      FUN_007b6ad4(&local_c0,&local_128);
      local_60 = CONCAT71(local_60._1_7_,1);
    }
    else {
      FUN_007b6d78();
      local_60 = local_60 & 0xffffffffffffff00;
    }
    if (local_c8 == '\x01') {
      FUN_007b6d78(&local_128);
    }
    if ((local_60 & 1) == 0) goto LAB_0095cc98;
LAB_0095ce48:
    (**(code **)(**(long **)(param_1 + 0x68) + 0x18))(*(long **)(param_1 + 0x68),&local_c0,1);
  }
  if ((local_60 & 1) != 0) {
    FUN_007b6d78(&local_c0);
  }
LAB_0095ce70:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0095cef8  FUN_0095cef8 =====

void FUN_0095cef8(long param_1)

{
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
            );
}


// ===== 0095cf28  FUN_0095cf28 =====

void FUN_0095cf28(undefined8 *param_1,long param_2,undefined4 *param_3,uint param_4)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  for (lVar1 = *(long *)(param_2 + 0xb0); lVar1 != *(long *)(param_2 + 0xb8); lVar1 = lVar1 + 0x10)
  {
    if (*(int *)(lVar1 + 0xc) != 0 || *(int *)(lVar1 + 8) != 0) goto LAB_0095cf98;
  }
  if (((param_4 & 1) != 0) &&
     (1 < (ulong)((*(long *)(param_3 + 0x2c) - *(long *)(param_3 + 0x2a) >> 3) * -0x70a3d70a3d70a3d7
                 ))) {
    param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0xd] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0xf] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0xe] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0x11] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0x10] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0x13] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0x12] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0x15] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0x14] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0x17] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0x16] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0x19] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0x18] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0x1b] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0x1a] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0x1d] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0x1c] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0x1f] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0x1e] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0x21] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0x20] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
    *param_1 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_007b9554(param_1,param_2);
    FUN_0096e64c(&local_40,*param_3);
    pvVar2 = (void *)param_1[0x16];
    if (pvVar2 != (void *)0x0) {
      pvVar3 = (void *)param_1[0x17];
      uVar5 = (ulong)((long)pvVar3 + (-0x10 - ((long)pvVar3 << 0x3c))) >> 4;
      uVar4 = (ulong)(((long)pvVar2 - (long)pvVar3 << 0x3c) - ((long)pvVar2 - (long)pvVar3)) >> 4;
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
      if ((1 < uVar4) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 0xfU) == 0)) {
        uVar4 = uVar4 & 0xffffffffffffffe;
        pvVar3 = (void *)((long)pvVar3 + uVar4 * -0x10);
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (pvVar3 != pvVar2) {
        pvVar3 = (void *)((long)pvVar3 + -0x10);
        if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      param_1[0x17] = pvVar2;
      operator_delete(pvVar2);
    }
    param_1[0x17] = uStack_38;
    param_1[0x16] = local_40;
    param_1[0x18] = local_30;
    return;
  }
LAB_0095cf98:
  FUN_007b9554(param_1,param_2);
  return;
}


// ===== 0095d0a0  FUN_0095d0a0 =====

undefined8 * FUN_0095d0a0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar8 = param_2[1];
  uVar7 = *param_2;
  uVar6 = param_2[3];
  uVar4 = param_2[2];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[1] = uVar8;
  *param_1 = uVar7;
  param_1[3] = uVar6;
  param_1[2] = uVar4;
  uVar6 = param_2[8];
  uVar4 = param_2[7];
  uVar8 = param_2[6];
  uVar7 = param_2[5];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  cVar2 = *(char *)(param_1 + 0x16);
  param_1[8] = uVar6;
  param_1[7] = uVar4;
  param_1[6] = uVar8;
  param_1[5] = uVar7;
  if (cVar2 == *(char *)(param_2 + 0x16)) {
    if (cVar2 != '\0') {
      FUN_007b6b54(param_1 + 10,param_2 + 10);
    }
  }
  else if (cVar2 == '\0') {
    FUN_007b69e0(param_1 + 10,param_2 + 10);
    *(undefined1 *)(param_1 + 0x16) = 1;
  }
  else {
    FUN_007b6d78();
    *(undefined1 *)(param_1 + 0x16) = 0;
  }
  uVar4 = param_2[0x17];
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  param_1[0x17] = uVar4;
  uVar6 = param_2[0x1c];
  uVar4 = param_2[0x1b];
  uVar8 = param_2[0x1a];
  uVar7 = param_2[0x19];
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
  bVar3 = *(byte *)(param_1 + 0x2a);
  param_1[0x1c] = uVar6;
  param_1[0x1b] = uVar4;
  param_1[0x1a] = uVar8;
  param_1[0x19] = uVar7;
  if (bVar3 == *(byte *)(param_2 + 0x2a)) {
    if (bVar3 != 0) {
      FUN_007b6b54(param_1 + 0x1e,param_2 + 0x1e);
    }
  }
  else if ((bVar3 & 1) == 0) {
    FUN_007b69e0(param_1 + 0x1e,param_2 + 0x1e);
    *(undefined1 *)(param_1 + 0x2a) = 1;
  }
  else {
    FUN_007b6d78();
    *(undefined1 *)(param_1 + 0x2a) = 0;
  }
  uVar4 = param_2[0x2b];
  *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2 + 0x2c);
  param_1[0x2b] = uVar4;
  uVar8 = param_2[0x2e];
  uVar7 = param_2[0x2d];
  uVar6 = param_2[0x30];
  uVar4 = param_2[0x2f];
  *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_2 + 0x31);
  param_1[0x2e] = uVar8;
  param_1[0x2d] = uVar7;
  param_1[0x30] = uVar6;
  param_1[0x2f] = uVar4;
  bVar3 = *(byte *)(param_1 + 0x3e);
  if (bVar3 == *(byte *)(param_2 + 0x3e)) {
    if (bVar3 != 0) {
      FUN_007b6b54(param_1 + 0x32,param_2 + 0x32);
    }
  }
  else if ((bVar3 & 1) == 0) {
    FUN_007b69e0(param_1 + 0x32,param_2 + 0x32);
    *(undefined1 *)(param_1 + 0x3e) = 1;
  }
  else {
    FUN_007b6d78();
    *(undefined1 *)(param_1 + 0x3e) = 0;
  }
  uVar4 = param_2[0x3f];
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  param_1[0x3f] = uVar4;
  lVar5 = 0;
  do {
    uVar8 = *(undefined8 *)((long)param_2 + lVar5 + 0x210);
    uVar7 = *(undefined8 *)((long)param_2 + lVar5 + 0x208);
    uVar6 = *(undefined8 *)((long)param_2 + lVar5 + 0x220);
    uVar4 = *(undefined8 *)((long)param_2 + lVar5 + 0x218);
    *(undefined1 *)((long)param_1 + lVar5 + 0x228) = *(undefined1 *)((long)param_2 + lVar5 + 0x228);
    *(undefined8 *)((long)param_1 + lVar5 + 0x210) = uVar8;
    *(undefined8 *)((long)param_1 + lVar5 + 0x208) = uVar7;
    *(undefined8 *)((long)param_1 + lVar5 + 0x220) = uVar6;
    *(undefined8 *)((long)param_1 + lVar5 + 0x218) = uVar4;
    cVar2 = *(char *)((long)param_1 + lVar5 + 0x290);
    if (cVar2 == *(char *)((long)param_2 + lVar5 + 0x290)) {
      if (cVar2 != '\0') {
        FUN_007b6b54((long)param_1 + lVar5 + 0x230,(long)param_2 + lVar5 + 0x230);
      }
    }
    else if (cVar2 == '\0') {
      FUN_007b69e0((long)param_1 + lVar5 + 0x230,(long)param_2 + lVar5 + 0x230);
      *(undefined1 *)((long)param_1 + lVar5 + 0x290) = 1;
    }
    else {
      FUN_007b6d78();
      *(undefined1 *)((long)param_1 + lVar5 + 0x290) = 0;
    }
    lVar1 = lVar5 + 0xa0;
    uVar4 = *(undefined8 *)((long)param_2 + lVar5 + 0x298);
    *(undefined1 *)((long)param_1 + lVar5 + 0x2a0) = *(undefined1 *)((long)param_2 + lVar5 + 0x2a0);
    *(undefined8 *)((long)param_1 + lVar5 + 0x298) = uVar4;
    lVar5 = lVar1;
  } while (lVar1 != 800);
  uVar10 = param_2[0xa8];
  uVar9 = param_2[0xa7];
  uVar6 = param_2[0xaa];
  uVar4 = param_2[0xa9];
  uVar8 = param_2[0xa6];
  uVar7 = param_2[0xa5];
  *(undefined8 *)((long)param_1 + 0x555) = *(undefined8 *)((long)param_2 + 0x555);
  param_1[0xa8] = uVar10;
  param_1[0xa7] = uVar9;
  param_1[0xaa] = uVar6;
  param_1[0xa9] = uVar4;
  param_1[0xa6] = uVar8;
  param_1[0xa5] = uVar7;
  return param_1;
}


// ===== 0095d2f0  FUN_0095d2f0 =====

void FUN_0095d2f0(undefined8 *param_1,ulong param_2,undefined4 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  void *__src;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  void *__dest;
  size_t __n;
  ulong uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  ulong uVar13;
  
  __src = (void *)*param_1;
  puVar5 = (undefined4 *)param_1[1];
  __n = (long)puVar5 - (long)__src;
  uVar13 = (long)__n >> 2;
  uVar6 = param_2 - uVar13;
  iVar11 = (int)puVar5;
  if (param_2 < uVar13 || uVar6 == 0) {
    if (param_2 < uVar13) {
      puVar10 = (undefined4 *)((long)__src + param_2 * 4);
      uVar6 = (ulong)(((long)puVar10 - (long)puVar5 << 0x3e) - ((long)puVar10 - (long)puVar5)) >> 2;
      uVar13 = (ulong)((long)puVar5 + (-4 - ((long)puVar5 << 0x3e))) >> 2;
      if (uVar13 <= uVar6) {
        uVar6 = uVar13;
      }
      if ((1 < uVar6) && ((((int)__src - iVar11 | -iVar11) & 3U) == 0)) {
        uVar6 = uVar6 & 0x3ffffffffffffffe;
        puVar5 = puVar5 + -uVar6;
        do {
          uVar6 = uVar6 - 2;
        } while (uVar6 != 0);
      }
      while (puVar5 != puVar10) {
        puVar5 = puVar5 + -1;
        if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      param_1[1] = puVar10;
    }
  }
  else {
    uVar9 = param_1[2] - (long)__src;
    if ((ulong)((long)uVar9 >> 2) < param_2) {
      if (param_2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0060fffc();
      }
      uVar1 = (long)uVar9 >> 1;
      if ((ulong)((long)uVar9 >> 1) <= param_2) {
        uVar1 = param_2;
      }
      if (0x7ffffffffffffffb < uVar9) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar4 = operator_new(uVar1 * 4);
      if (uVar6 * 4 == 0) {
        puVar10 = (undefined4 *)((long)pvVar4 + __n);
      }
      else {
        puVar10 = (undefined4 *)((long)pvVar4 + uVar6 * 4 + __n);
        uVar6 = (ulong)((long)__src + (-(long)pvVar4 - (long)puVar5)) >> 2;
        uVar9 = (param_2 * 4 - __n) - 4 >> 2;
        if (uVar9 <= uVar6) {
          uVar6 = uVar9;
        }
        uVar3 = *param_3;
        if (uVar6 < 8) {
          puVar5 = (undefined4 *)((long)pvVar4 + __n);
        }
        else {
          puVar5 = (undefined4 *)((long)pvVar4 + __n);
          if ((((int)__src - iVar11) - (int)pvVar4 & 3U) == 0) {
            uVar9 = uVar6 + 1 & 7;
            uVar2 = 8;
            if (uVar9 != 0) {
              uVar2 = uVar9;
            }
            lVar8 = (uVar6 + 1) - uVar2;
            puVar7 = (undefined8 *)((long)pvVar4 + __n + 0x10);
            puVar5 = (undefined4 *)((long)pvVar4 + lVar8 * 4 + __n);
            do {
              lVar8 = lVar8 + -8;
              puVar7[-1] = CONCAT44(uVar3,uVar3);
              puVar7[-2] = CONCAT44(uVar3,uVar3);
              puVar7[1] = CONCAT44(uVar3,uVar3);
              *puVar7 = CONCAT44(uVar3,uVar3);
              puVar7 = puVar7 + 4;
            } while (lVar8 != 0);
          }
        }
        do {
          if (puVar5 == (undefined4 *)0x0) {
LAB_0095d5e8:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puVar12 = puVar5 + 1;
          *puVar5 = uVar3;
          puVar5 = puVar12;
        } while (puVar12 != puVar10);
      }
      __dest = (void *)((long)pvVar4 + uVar13 * -4 + __n);
      memcpy(__dest,__src,__n);
      *param_1 = __dest;
      param_1[1] = puVar10;
      param_1[2] = (void *)((long)pvVar4 + uVar1 * 4);
      if (__src != (void *)0x0) {
        operator_delete(__src);
        return;
      }
    }
    else {
      puVar10 = puVar5;
      if ((uVar6 & 0x3fffffffffffffff) != 0) {
        puVar10 = puVar5 + uVar6;
        uVar13 = (param_2 * 4 - __n) - 4 >> 2;
        uVar6 = (ulong)-(long)puVar5 >> 2;
        if (uVar13 <= (ulong)-(long)puVar5 >> 2) {
          uVar6 = uVar13;
        }
        if (0x33 < uVar6) {
          uVar9 = (ulong)-(long)puVar5 >> 2;
          if (uVar13 <= uVar9) {
            uVar9 = uVar13;
          }
          if (((-(long)puVar5 & 3U) == 0) && (puVar5 <= puVar5 + uVar9)) {
            uVar9 = (ulong)-(long)puVar5 >> 2;
            if (uVar13 <= (ulong)-(long)puVar5 >> 2) {
              uVar9 = uVar13;
            }
            if ((puVar5 + uVar9 + 1 <= param_3) || (param_3 + 1 <= puVar5)) {
              uVar3 = *param_3;
              uVar13 = uVar6 + 1 & 7;
              uVar9 = 8;
              if (uVar13 != 0) {
                uVar9 = uVar13;
              }
              puVar7 = (undefined8 *)(puVar5 + 4);
              lVar8 = (uVar6 + 1) - uVar9;
              puVar5 = puVar5 + lVar8;
              do {
                lVar8 = lVar8 + -8;
                puVar7[-1] = CONCAT44(uVar3,uVar3);
                puVar7[-2] = CONCAT44(uVar3,uVar3);
                puVar7[1] = CONCAT44(uVar3,uVar3);
                *puVar7 = CONCAT44(uVar3,uVar3);
                puVar7 = puVar7 + 4;
              } while (lVar8 != 0);
            }
          }
        }
        do {
          if (puVar5 == (undefined4 *)0x0) goto LAB_0095d5e8;
          puVar12 = puVar5 + 1;
          *puVar5 = *param_3;
          puVar5 = puVar12;
        } while (puVar12 != puVar10);
      }
      param_1[1] = puVar10;
    }
  }
  return;
}


// ===== 0095d604  FUN_0095d604 =====

void FUN_0095d604(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_1e58 [1376];
  undefined1 auStack_18f8 [272];
  undefined1 auStack_17e8 [208];
  undefined1 auStack_1718 [1376];
  undefined1 auStack_11b8 [272];
  undefined1 auStack_10a8 [208];
  undefined1 auStack_fd8 [1376];
  undefined1 auStack_a78 [208];
  undefined1 auStack_9a8 [272];
  undefined1 auStack_898 [272];
  undefined1 auStack_788 [272];
  undefined1 auStack_678 [208];
  undefined1 auStack_5a8 [1376];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  memcpy(auStack_788,&DAT_00228d70,0x740);
  (**(code **)(**(long **)(param_1 + 0x1e8) + 0x60))(auStack_9a8);
  FUN_0095cf28(auStack_898,auStack_9a8,param_1 + 0x118,*(undefined1 *)(param_1 + 0x1d50));
  FUN_00849b38(auStack_a78,param_1 + 0x118);
  FUN_008a00d8(auStack_1e58,param_1 + 0x670);
  FUN_00979970(auStack_788,auStack_898,auStack_a78,auStack_1e58);
  FUN_008a03f4(auStack_1e58);
  FUN_0084966c(auStack_a78);
  FUN_007b9754(auStack_898);
  FUN_007b9754(auStack_9a8);
  FUN_00979c88(auStack_11b8,auStack_788);
  FUN_00983dd4(param_1 + 0x12e0,auStack_11b8);
  FUN_008a03f4(auStack_fd8);
  FUN_0084966c(auStack_10a8);
  FUN_007b9754(auStack_11b8);
  FUN_00979c88(auStack_18f8,auStack_788);
  FUN_0097f19c(param_1 + 0x1250,auStack_18f8);
  FUN_008a03f4(auStack_1718);
  FUN_0084966c(auStack_17e8);
  FUN_007b9754(auStack_18f8);
  lVar4 = FUN_00979d5c(auStack_788);
  lVar5 = *(long *)(param_1 + 0x12c0);
  iVar2 = *(int *)(lVar4 + 0x88);
  *(bool *)(lVar5 + 0xc) = iVar2 == 1;
  iVar1 = 2;
  if (iVar2 != 1 || *(int *)(lVar5 + 8) != 3) {
    iVar1 = *(int *)(lVar5 + 8);
  }
  if (iVar1 != *(int *)(lVar5 + 0x10)) {
    *(int *)(lVar5 + 0x10) = iVar1;
    FUN_0097d578(*(undefined8 *)(lVar5 + 0x18));
  }
  if (iVar2 == 1) {
    (**(code **)(**(long **)(param_1 + 0x110) + 0x30))
              (*(long **)(param_1 + 0x110),*(undefined1 *)(param_1 + 0x690),1);
  }
  FUN_008a03f4(auStack_5a8);
  FUN_0084966c(auStack_678);
  FUN_007b9754(auStack_788);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0095d82c  FUN_0095d82c =====

void FUN_0095d82c(long param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 ****ppppuVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  undefined8 *****pppppuVar17;
  undefined8 ****ppppuVar18;
  byte *pbVar19;
  undefined8 *****pppppuVar20;
  undefined1 uVar21;
  uint uVar22;
  undefined8 *****pppppuVar23;
  undefined8 ****ppppuVar24;
  undefined8 ****ppppuVar25;
  undefined8 ***pppuVar26;
  undefined8 ***pppuVar27;
  undefined8 ****ppppuVar28;
  long *plVar29;
  int *piVar30;
  ulong *puVar31;
  undefined4 *puVar32;
  byte bVar33;
  double dVar34;
  undefined8 ***local_330;
  undefined1 *puStack_328;
  undefined1 *puStack_320;
  undefined1 *puStack_318;
  undefined1 *local_310;
  undefined1 *puStack_308;
  undefined1 *puStack_300;
  undefined1 *puStack_2f8;
  undefined1 *local_2f0;
  undefined1 *puStack_2e8;
  undefined1 *puStack_2e0;
  undefined1 *puStack_2d8;
  undefined1 *local_2d0;
  undefined1 *puStack_2c8;
  undefined1 *puStack_2c0;
  undefined1 *puStack_2b8;
  undefined1 *local_2b0;
  undefined1 *puStack_2a8;
  undefined1 *puStack_2a0;
  undefined1 *puStack_298;
  undefined8 local_290;
  undefined8 ***local_288;
  undefined1 auStack_280 [56];
  ulong local_248;
  byte local_240 [208];
  undefined8 local_170;
  ulong uStack_168;
  undefined8 ****local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  if (*(char *)(param_1 + 0x3f8) == '\x01') {
    uVar8 = FUN_007baa08(param_1 + 0x288,param_2);
    uVar8 = uVar8 & 0xffffffff;
    if (*(char *)(param_1 + 0x3f8) != '\x01') {
      bVar5 = true;
      goto LAB_0095d8f8;
    }
    uVar9 = FUN_007cc5e8(param_1 + 0x290,param_2 + 8);
    if ((uVar9 & 1) == 0) {
      bVar5 = true;
      if (*(byte *)(param_1 + 0x3f8) == 0) goto LAB_0095d8f8;
    }
    else {
      if ((*(byte *)(param_1 + 0x3f8) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                  );
      }
      bVar5 = *(double *)(param_1 + 0x3e0) != *(double *)(param_2 + 0x158);
    }
    uVar9 = FUN_007ba9a8(param_1 + 0x288,param_2);
    if (((uVar9 & 1) == 0) || (*(long *)(param_1 + 0x3f0) != *(long *)(param_2 + 0x168)))
    goto LAB_0095d8f8;
LAB_0095d91c:
    lVar16 = *(long *)(param_1 + 0x1e8);
  }
  else {
    bVar5 = true;
    uVar8 = 1;
LAB_0095d8f8:
    if (*(char *)(param_1 + 0x3f8) == '\x01') {
      memcpy((void *)(param_1 + 0x290),(void *)(param_2 + 8),0x160);
      *(undefined8 *)(param_1 + 0x3f0) = *(undefined8 *)(param_2 + 0x168);
      goto LAB_0095d91c;
    }
    *(undefined **)(param_1 + 0x288) = PTR_DAT_00d52958 + 0x10;
    memcpy((void *)(param_1 + 0x290),(void *)(param_2 + 8),0x160);
    uVar13 = *(undefined8 *)(param_2 + 0x168);
    *(undefined1 *)(param_1 + 0x3f8) = 1;
    *(undefined8 *)(param_1 + 0x3f0) = uVar13;
    lVar16 = *(long *)(param_1 + 0x1e8);
  }
  if (lVar16 != 0) {
    if (*(char *)(param_1 + 0x690) != '\0') {
      uVar14 = 0;
      do {
        plVar29 = *(long **)(param_1 + 0x110);
        iVar6 = FUN_007cc138(param_2 + 8,(long)(int)uVar14);
        (**(code **)(*plVar29 + 0x48))(plVar29,(long)(int)uVar14,iVar6 != 0);
        uVar14 = uVar14 + 1;
      } while (uVar14 != *(byte *)(param_1 + 0x690));
    }
    piVar30 = (int *)(param_2 + 0xb0);
    if (*piVar30 != 0) {
      if ((uVar8 & 1) != 0) {
        (**(code **)(**(long **)(param_1 + 0x1e8) + 0x40))(*(long **)(param_1 + 0x1e8),param_2);
        (**(code **)(**(long **)(param_1 + 0xf8) + 0x70))
                  (*(long **)(param_1 + 0xf8),param_1 + 0x670,piVar30);
        FUN_00966138(param_1 + 0xc58,piVar30,(int)(*(double *)(param_2 + 0x158) + 0.5));
        FUN_009844b0(param_1 + 0x12e0,param_2);
        if ((bVar5) && (*(int *)(param_1 + 0x80) == 2)) {
          plVar29 = *(long **)(param_1 + 0x50);
          (**(code **)(**(long **)(param_1 + 0x1e8) + 0x60))(auStack_280);
          piVar30 = (int *)(param_2 + 8);
          local_158 = &DAT_aaaaaaaaaaaaaaaa;
          local_160 = (undefined8 ****)&DAT_aaaaaaaaaaaaaaaa;
          puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
          local_140 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
          local_120 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_110 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
          local_100 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
          local_e0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
          local_c0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
          local_a0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
          local_150 = &DAT_aaaaaaaaaaaaaaaa;
          local_170 = 0xaaaaaa0000000000;
          uStack_168 = 0;
          if (*piVar30 != 0) {
            if (*(byte *)(param_1 + 0x690) < 2) {
              if (*(byte *)(param_1 + 0x690) == 1) {
                if (*(int *)(param_1 + 0x670) == 2) {
                  lVar16 = FUN_007b8ca4(param_1 + 0x670);
                  bVar5 = *(int *)(lVar16 + 0xc) == 1;
                }
                else {
                  bVar5 = false;
                }
                local_170._0_5_ = CONCAT14(1,(undefined4)local_170);
                ppppuVar28 = (undefined8 ****)operator_new(0x20);
                if (((ppppuVar28 == (undefined8 ****)0x0) ||
                    (*ppppuVar28 = (undefined8 ***)0x0,
                    ppppuVar28 == (undefined8 ****)0xfffffffffffffff8)) ||
                   (ppppuVar28[1] = (undefined8 ***)0x0,
                   ppppuVar28 == (undefined8 ****)0xfffffffffffffff0)) {
LAB_0095e4bc:
                    /* WARNING: Subroutine does not return */
                  std::__Cr::__libcpp_verbose_abort
                            ("%s",
                             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                            );
                }
                ppppuVar28[2] = (undefined8 ***)0x0;
                if (ppppuVar28 + 3 == (undefined8 ****)0x0) goto LAB_0095e4bc;
                ppppuVar28[3] = (undefined8 ***)0x0;
                lVar16 = 0;
                do {
                  local_170._0_5_ = CONCAT14(1,(undefined4)local_170);
                  uVar8 = FUN_007cc0c4(piVar30,lVar16);
                  if (((uVar8 & 1) == 0) || (iVar6 = FUN_007cc138(piVar30,lVar16), iVar6 == 0))
                  break;
                  puVar1 = (undefined1 *)0x4;
                  if ((uStack_168 & 1) != 0) {
                    puVar1 = local_158;
                  }
                  if ((undefined1 *)(uStack_168 >> 1) == puVar1) {
                    FUN_008cb928((ulong)&local_170 | 8);
                  }
                  else {
                    pppppuVar17 = &local_160;
                    if ((uStack_168 & 1) != 0) {
                      pppppuVar17 = (undefined8 *****)local_160;
                    }
                    pppppuVar17 = pppppuVar17 + (long)(uStack_168 >> 1) * 7;
                    if (pppppuVar17 == (undefined8 *****)0x0) goto LAB_0095e4bc;
                    pppppuVar17[6] = (undefined8 ****)0x0;
                    pppppuVar17[3] = (undefined8 ****)0x0;
                    pppppuVar17[2] = (undefined8 ****)0x0;
                    pppppuVar17[5] = (undefined8 ****)0x0;
                    pppppuVar17[4] = (undefined8 ****)0x0;
                    pppppuVar17[1] = (undefined8 ****)0x0;
                    *pppppuVar17 = (undefined8 ****)0x0;
                    uStack_168 = uStack_168 + 2;
                  }
                  if (uStack_168 < 2) goto LAB_0095e4d0;
                  uVar8 = uStack_168 >> 1;
                  puVar32 = (undefined4 *)(param_1 + 0x878 + lVar16 * 0xa0);
                  pppppuVar17 = &local_160;
                  if ((uStack_168 & 1) != 0) {
                    pppppuVar17 = (undefined8 *****)local_160;
                  }
                  *(short *)(pppppuVar17 + uVar8 * 7 + -1) = (short)*puVar32;
                  lVar2 = lVar16 * 0x18;
                  puVar31 = &local_248 + lVar16 * 3;
                  uVar7 = puVar32[1];
                  *(undefined4 *)(pppppuVar17 + uVar8 * 7 + -7) = 0;
                  *(int *)((long)pppppuVar17 + uVar8 * 0x38 + -0x34) = (int)lVar16;
                  *(short *)((long)pppppuVar17 + uVar8 * 0x38 + -6) = (short)uVar7;
                  if ((*puVar31 & 0xfffffffffffffffe) == 2) {
                    local_330 = (undefined8 ***)&DAT_aaaaaaaaaaaaaaaa;
                    uVar9 = FUN_007cc138(piVar30,lVar16);
                    local_330 = (undefined8 ***)(uVar9 & 0xffffffff);
                    ppppuVar18 = (undefined8 ****)*ppppuVar28;
                    ppppuVar24 = ppppuVar18;
                    if (ppppuVar18 != (undefined8 ****)0x8000000000000000) {
                      ppppuVar24 = (undefined8 ****)((long)ppppuVar18 + (long)local_330);
                    }
                    if (ppppuVar18 != (undefined8 ****)0x7fffffffffffffff) {
                      ppppuVar18 = ppppuVar24;
                    }
                    *ppppuVar28 = ppppuVar18;
                    pppppuVar23 = pppppuVar17 + uVar8 * 7 + -6;
                    ppppuVar24 = *pppppuVar23;
                    pppppuVar20 = pppppuVar17 + uVar8 * 7 + -5;
                    if (bVar5) {
                      if (((ulong)ppppuVar24 & 1) == 0) {
                        ppppuVar25 = (undefined8 ****)0x4;
                      }
                      else {
                        pppppuVar20 = (undefined8 *****)pppppuVar17[uVar8 * 7 + -5];
                        ppppuVar25 = pppppuVar17[uVar8 * 7 + -4];
                      }
                      ppppuVar12 = ppppuVar28;
                      if ((undefined8 ****)((ulong)ppppuVar24 >> 1) != ppppuVar25) {
                        if (pppppuVar20 + (long)((ulong)ppppuVar24 >> 1) != (undefined8 *****)0x0) {
                          pppppuVar20[(long)((ulong)ppppuVar24 >> 1)] = ppppuVar18;
                          goto LAB_0095e1a8;
                        }
                        goto LAB_0095e4bc;
                      }
LAB_0095e248:
                      FUN_009626e4(pppppuVar23,ppppuVar12);
                    }
                    else {
                      if (((ulong)ppppuVar24 & 1) == 0) {
                        ppppuVar18 = (undefined8 ****)0x4;
                      }
                      else {
                        pppppuVar20 = (undefined8 *****)pppppuVar17[uVar8 * 7 + -5];
                        ppppuVar18 = pppppuVar17[uVar8 * 7 + -4];
                      }
                      if ((undefined8 ****)((ulong)ppppuVar24 >> 1) == ppppuVar18) {
                        ppppuVar12 = &local_330;
                        goto LAB_0095e248;
                      }
                      if (pppppuVar20 + (long)((ulong)ppppuVar24 >> 1) == (undefined8 *****)0x0)
                      goto LAB_0095e4bc;
                      pppppuVar20[(long)((ulong)ppppuVar24 >> 1)] = (undefined8 ****)local_330;
LAB_0095e1a8:
                      *pppppuVar23 = (undefined8 ****)((long)*pppppuVar23 + 2);
                    }
                    if (*puVar31 < 2) goto LAB_0095e4d0;
                    pbVar19 = local_240 + lVar2;
                    if ((*puVar31 & 1) != 0) {
                      pbVar19 = *(byte **)pbVar19;
                    }
                    bVar33 = *pbVar19;
                  }
                  else {
                    local_330 = (undefined8 ****)0x0;
                    if (*(char *)(puVar32 + 3) == '\0') {
                      bVar33 = 0xff;
                    }
                    else {
                      uVar9 = 0;
                      pppppuVar20 = pppppuVar17 + uVar8 * 7 + -6;
                      bVar33 = 0xff;
                      do {
                        uVar10 = FUN_007cbfa0(piVar30,lVar16,uVar9);
                        if ((uVar10 & 1) == 0) break;
                        if (uVar9 < *puVar31 >> 1) {
                          pbVar19 = local_240 + lVar2;
                          if ((*puVar31 & 1) != 0) {
                            pbVar19 = *(byte **)(local_240 + lVar2);
                          }
                          bVar33 = pbVar19[uVar9];
                        }
                        uVar10 = FUN_007cc028(piVar30,lVar16,uVar9);
                        ppppuVar24 = (undefined8 ****)local_330;
                        if ((undefined8 ****)local_330 != (undefined8 ****)0x8000000000000000) {
                          ppppuVar24 = (undefined8 ****)((long)local_330 + (uVar10 & 0xffffffff));
                        }
                        if ((undefined8 ****)local_330 != (undefined8 ****)0x7fffffffffffffff) {
                          local_330 = ppppuVar24;
                        }
                        if (bVar5) {
                          if (3 < uVar9) {
                    /* WARNING: Subroutine does not return */
                            std::__Cr::__libcpp_verbose_abort
                                      ("%s",
                                       "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                                      );
                          }
                          local_288 = (undefined8 ****)0x7fffffffffffffff;
                          if (((undefined8 ****)local_330 != (undefined8 ****)0x7fffffffffffffff) &&
                             (pppuVar27 = ppppuVar28[uVar9],
                             pppuVar27 != (undefined8 ***)0x7fffffffffffffff)) {
                            local_288 = (undefined8 ****)0x8000000000000000;
                            if (pppuVar27 != (undefined8 ***)0x8000000000000000 &&
                                (undefined8 ****)local_330 != (undefined8 ****)0x8000000000000000) {
                              local_288 = (undefined8 ****)((long)pppuVar27 + (long)local_330);
                            }
                          }
                          if (((ulong)*pppppuVar20 & 1) == 0) {
                            pppppuVar23 = pppppuVar17 + uVar8 * 7 + -5;
                            ppppuVar24 = (undefined8 ****)0x4;
                          }
                          else {
                            pppppuVar23 = (undefined8 *****)pppppuVar17[uVar8 * 7 + -5];
                            ppppuVar24 = pppppuVar17[uVar8 * 7 + -4];
                          }
                          ppppuVar18 = (undefined8 ****)((ulong)*pppppuVar20 >> 1);
                          if (ppppuVar18 == ppppuVar24) {
                            FUN_00962554(pppppuVar17 + uVar8 * 7 + -6,&local_288);
                          }
                          else {
                            if (pppppuVar23 + (long)ppppuVar18 == (undefined8 *****)0x0)
                            goto LAB_0095e4bc;
                            pppppuVar23[(long)ppppuVar18] = (undefined8 ****)local_288;
                            *pppppuVar20 = (undefined8 ****)((long)*pppppuVar20 + 2);
                          }
                          pppuVar26 = ppppuVar28[uVar9];
                          pppuVar27 = (undefined8 ***)0x7fffffffffffffff;
                          if ((pppuVar26 != (undefined8 ***)0x7fffffffffffffff) &&
                             ((undefined8 ****)local_330 != (undefined8 ****)0x7fffffffffffffff)) {
                            pppuVar27 = (undefined8 ***)0x8000000000000000;
                            if ((undefined8 ****)local_330 != (undefined8 ****)0x8000000000000000 &&
                                pppuVar26 != (undefined8 ***)0x8000000000000000) {
                              pppuVar27 = (undefined8 ***)((long)pppuVar26 + (long)local_330);
                            }
                          }
                          ppppuVar28[uVar9] = pppuVar27;
                        }
                        else {
                          if (((ulong)*pppppuVar20 & 1) == 0) {
                            pppppuVar23 = pppppuVar17 + uVar8 * 7 + -5;
                            ppppuVar24 = (undefined8 ****)0x4;
                          }
                          else {
                            pppppuVar23 = (undefined8 *****)pppppuVar17[uVar8 * 7 + -5];
                            ppppuVar24 = pppppuVar17[uVar8 * 7 + -4];
                          }
                          ppppuVar18 = (undefined8 ****)((ulong)*pppppuVar20 >> 1);
                          if (ppppuVar18 == ppppuVar24) {
                            FUN_009626e4(pppppuVar17 + uVar8 * 7 + -6,&local_330);
                          }
                          else {
                            if (pppppuVar23 + (long)ppppuVar18 == (undefined8 *****)0x0)
                            goto LAB_0095e4bc;
                            pppppuVar23[(long)ppppuVar18] = (undefined8 ****)local_330;
                            *pppppuVar20 = (undefined8 ****)((long)*pppppuVar20 + 2);
                          }
                        }
                        uVar9 = uVar9 + 1;
                      } while (uVar9 < *(byte *)(puVar32 + 3));
                    }
                  }
                  dVar34 = (*(double *)(param_2 + 0x158) * (double)bVar33) / 255.0;
                  uVar14 = 0;
                  if (255.0 < dVar34) {
                    uVar14 = 2;
                  }
                  uVar15 = (uint)(float)puVar32[2];
                  uVar21 = (undefined1)uVar15;
                  if (dVar34 < 0.0 != NAN(dVar34)) {
                    uVar14 = uVar14 + 1;
                  }
                  if (uVar14 < 2) {
                    uVar21 = 0;
                    if (uVar14 == 0) {
                      uVar14 = (int)dVar34;
                      if (uVar15 <= (uint)(int)dVar34) {
                        uVar14 = uVar15;
                      }
                      uVar21 = (undefined1)uVar14;
                    }
                  }
                  else if (uVar14 != 2) goto LAB_0095e504;
                  lVar16 = lVar16 + 1;
                  *(undefined1 *)((long)pppppuVar17 + uVar8 * 0x38 + -4) = uVar21;
                } while (lVar16 != 5);
                operator_delete(ppppuVar28);
              }
            }
            else {
              local_170 = 0xaaaaaa0100000000;
              uVar8 = 0;
              do {
                uVar9 = FUN_007cc0c4(piVar30,uVar8);
                if (((uVar9 & 1) != 0) && (iVar6 = FUN_007cc138(piVar30,uVar8), iVar6 != 0)) {
                  puVar1 = (undefined1 *)0x4;
                  if ((uStack_168 & 1) != 0) {
                    puVar1 = local_158;
                  }
                  if ((undefined1 *)(uStack_168 >> 1) == puVar1) {
                    FUN_008cb928((ulong)&local_170 | 8);
                  }
                  else {
                    pppppuVar17 = &local_160;
                    if ((uStack_168 & 1) != 0) {
                      pppppuVar17 = (undefined8 *****)local_160;
                    }
                    pppppuVar17 = pppppuVar17 + (long)(uStack_168 >> 1) * 7;
                    if (pppppuVar17 == (undefined8 *****)0x0) goto LAB_0095e4bc;
                    pppppuVar17[6] = (undefined8 ****)0x0;
                    pppppuVar17[3] = (undefined8 ****)0x0;
                    pppppuVar17[2] = (undefined8 ****)0x0;
                    pppppuVar17[5] = (undefined8 ****)0x0;
                    pppppuVar17[4] = (undefined8 ****)0x0;
                    pppppuVar17[1] = (undefined8 ****)0x0;
                    *pppppuVar17 = (undefined8 ****)0x0;
                    uStack_168 = uStack_168 + 2;
                  }
                  if (uStack_168 < 2) {
LAB_0095e4d0:
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x95e4d4);
                    (*pcVar4)();
                  }
                  pppppuVar17 = &local_160;
                  if ((uStack_168 & 1) != 0) {
                    pppppuVar17 = (undefined8 *****)local_160;
                  }
                  if (2 < uVar8) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x95e504);
                    (*pcVar4)();
                  }
                  uVar9 = uStack_168 >> 1;
                  puVar32 = (undefined4 *)(param_1 + 0x698 + uVar8 * 0xa0);
                  *(short *)(pppppuVar17 + uVar9 * 7 + -1) = (short)*puVar32;
                  lVar16 = uVar8 * 0x18;
                  puVar31 = &local_248 + uVar8 * 3;
                  uVar7 = puVar32[1];
                  *(int *)(pppppuVar17 + uVar9 * 7 + -7) = (int)uVar8;
                  *(undefined4 *)((long)pppppuVar17 + uVar9 * 0x38 + -0x34) = 0;
                  *(short *)((long)pppppuVar17 + uVar9 * 0x38 + -6) = (short)uVar7;
                  if ((*puVar31 & 0xfffffffffffffffe) == 2) {
                    uVar10 = FUN_007cc138(piVar30,uVar8);
                    local_330 = (undefined8 ***)(uVar10 & 0xffffffff);
                    pppppuVar20 = pppppuVar17 + uVar9 * 7 + -6;
                    if (((ulong)*pppppuVar20 & 1) == 0) {
                      pppppuVar23 = pppppuVar17 + uVar9 * 7 + -5;
                      ppppuVar28 = (undefined8 ****)0x4;
                    }
                    else {
                      pppppuVar23 = (undefined8 *****)pppppuVar17[uVar9 * 7 + -5];
                      ppppuVar28 = pppppuVar17[uVar9 * 7 + -4];
                    }
                    ppppuVar24 = (undefined8 ****)((ulong)*pppppuVar20 >> 1);
                    if (ppppuVar24 == ppppuVar28) {
                      FUN_00962554(pppppuVar20,&local_330);
                    }
                    else {
                      if (pppppuVar23 + (long)ppppuVar24 == (undefined8 *****)0x0)
                      goto LAB_0095e4bc;
                      pppppuVar23[(long)ppppuVar24] = (undefined8 ****)local_330;
                      *pppppuVar20 = (undefined8 ****)((long)*pppppuVar20 + 2);
                    }
                    if (*puVar31 < 2) goto LAB_0095e4d0;
                    pbVar19 = local_240 + lVar16;
                    if ((*puVar31 & 1) != 0) {
                      pbVar19 = *(byte **)pbVar19;
                    }
                    bVar33 = *pbVar19;
                  }
                  else if (*(char *)(puVar32 + 3) == '\0') {
                    bVar33 = 0xff;
                  }
                  else {
                    uVar10 = 0;
                    ppppuVar28 = (undefined8 ****)0x0;
                    pppppuVar20 = pppppuVar17 + uVar9 * 7 + -6;
                    bVar33 = 0xff;
                    do {
                      uVar11 = FUN_007cbfa0(piVar30,uVar8,uVar10);
                      if ((uVar11 & 1) == 0) break;
                      if (uVar10 < *puVar31 >> 1) {
                        pbVar19 = local_240 + lVar16;
                        if ((*puVar31 & 1) != 0) {
                          pbVar19 = *(byte **)(local_240 + lVar16);
                        }
                        bVar33 = pbVar19[uVar10];
                      }
                      iVar6 = FUN_007cc028(piVar30,uVar8,uVar10);
                      ppppuVar28 = (undefined8 ****)(ulong)(uint)(iVar6 + (int)ppppuVar28);
                      if (((ulong)*pppppuVar20 & 1) == 0) {
                        pppppuVar23 = pppppuVar17 + uVar9 * 7 + -5;
                        ppppuVar24 = (undefined8 ****)0x4;
                      }
                      else {
                        pppppuVar23 = (undefined8 *****)pppppuVar17[uVar9 * 7 + -5];
                        ppppuVar24 = pppppuVar17[uVar9 * 7 + -4];
                      }
                      ppppuVar18 = (undefined8 ****)((ulong)*pppppuVar20 >> 1);
                      local_330 = ppppuVar28;
                      if (ppppuVar18 == ppppuVar24) {
                        FUN_00962554(pppppuVar17 + uVar9 * 7 + -6,&local_330);
                      }
                      else {
                        if (pppppuVar23 + (long)ppppuVar18 == (undefined8 *****)0x0)
                        goto LAB_0095e4bc;
                        pppppuVar23[(long)ppppuVar18] = ppppuVar28;
                        *pppppuVar20 = (undefined8 ****)((long)*pppppuVar20 + 2);
                      }
                      uVar10 = uVar10 + 1;
                    } while (uVar10 < *(byte *)(puVar32 + 3));
                  }
                  dVar34 = (*(double *)(param_2 + 0x158) * (double)bVar33) / 255.0;
                  uVar14 = 0;
                  if (255.0 < dVar34) {
                    uVar14 = 2;
                  }
                  uVar15 = (uint)(float)puVar32[2];
                  if (dVar34 < 0.0 != NAN(dVar34)) {
                    uVar14 = uVar14 + 1;
                  }
                  if (uVar14 < 2) {
                    uVar22 = 0;
                    if ((uVar14 == 0) && (uVar22 = (int)dVar34, uVar15 <= (uint)(int)dVar34)) {
                      uVar22 = uVar15;
                    }
                  }
                  else {
                    uVar22 = uVar15;
                    if (uVar14 != 2) {
LAB_0095e504:
                    /* WARNING: Subroutine does not return */
                      FUN_0061ff28();
                    }
                  }
                  *(char *)((long)pppppuVar17 + uVar9 * 0x38 + -4) = (char)uVar22;
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 < *(byte *)(param_1 + 0x690));
            }
          }
          (**(code **)(*plVar29 + 0x40))(plVar29,&local_170);
          if (uStack_168 != 0) {
            FUN_008c4c88((ulong)&local_170 | 8);
          }
          FUN_007b9754(auStack_280);
        }
      }
      if ((*(int *)(param_1 + 0x80) == 0) ||
         ((*(int *)(param_1 + 0x80) == 1 && (*(int *)(param_1 + 0x1a0) == 1)))) {
        plVar29 = *(long **)(param_1 + 0x50);
        (**(code **)(**(long **)(param_1 + 0x1e8) + 0x60))(auStack_280);
        piVar30 = (int *)(param_2 + 8);
        if (*piVar30 == 0) {
          puStack_2a8 = *(undefined1 **)(param_2 + 0x90);
          local_2b0 = *(undefined1 **)(param_2 + 0x88);
          puStack_298 = *(undefined1 **)(param_2 + 0xa0);
          puStack_2a0 = *(undefined1 **)(param_2 + 0x98);
          local_290 = *(undefined1 **)(param_2 + 0xa8);
          puStack_2e8 = *(undefined1 **)(param_2 + 0x50);
          local_2f0 = *(undefined1 **)(param_2 + 0x48);
          puStack_2d8 = *(undefined1 **)(param_2 + 0x60);
          puStack_2e0 = *(undefined1 **)(param_2 + 0x58);
          puStack_2c8 = *(undefined1 **)(param_2 + 0x70);
          local_2d0 = *(undefined1 **)(param_2 + 0x68);
          puStack_2b8 = *(undefined1 **)(param_2 + 0x80);
          puStack_2c0 = *(undefined1 **)(param_2 + 0x78);
          puStack_328 = *(undefined1 **)(param_2 + 0x10);
          local_330 = *(undefined8 ****)piVar30;
          puStack_318 = *(undefined1 **)(param_2 + 0x20);
          puStack_320 = *(undefined1 **)(param_2 + 0x18);
          puStack_308 = *(undefined1 **)(param_2 + 0x30);
          local_310 = *(undefined1 **)(param_2 + 0x28);
          puStack_2f8 = *(undefined1 **)(param_2 + 0x40);
          puStack_300 = *(undefined1 **)(param_2 + 0x38);
        }
        else {
          puStack_328 = &DAT_aaaaaaaaaaaaaaaa;
          local_330 = (undefined8 ***)&DAT_aaaaaaaaaaaaaaaa;
          puStack_318 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_320 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_308 = &DAT_aaaaaaaaaaaaaaaa;
          local_310 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_2f8 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_300 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_2e8 = &DAT_aaaaaaaaaaaaaaaa;
          local_2f0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_2d8 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_2e0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_2c8 = &DAT_aaaaaaaaaaaaaaaa;
          local_2d0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_2b8 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_2c0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_2a8 = &DAT_aaaaaaaaaaaaaaaa;
          local_2b0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_298 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_2a0 = &DAT_aaaaaaaaaaaaaaaa;
          local_290 = &DAT_aaaaaaaaaaaaaaaa;
          FUN_007cbe28(&local_330);
          lVar16 = 0;
          puVar31 = &local_248;
          do {
            if (((*puVar31 & 0xfffffffffffffffe) == 2) &&
               (uVar8 = FUN_007cc0c4(piVar30,lVar16), (uVar8 & 1) != 0)) {
              uVar7 = FUN_007cc138(piVar30,lVar16);
              uVar13 = 0;
LAB_0095e31c:
              FUN_007cbed8(&local_330,lVar16,uVar13,uVar7);
            }
            else {
              uVar8 = FUN_007cbfa0(piVar30,lVar16,0);
              if ((uVar8 & 1) != 0) {
                uVar7 = FUN_007cc028(piVar30,lVar16,0);
                FUN_007cbed8(&local_330,lVar16,0,uVar7);
              }
              uVar8 = FUN_007cbfa0(piVar30,lVar16,1);
              if ((uVar8 & 1) != 0) {
                uVar7 = FUN_007cc028(piVar30,lVar16,1);
                FUN_007cbed8(&local_330,lVar16,1,uVar7);
              }
              uVar8 = FUN_007cbfa0(piVar30,lVar16,2);
              if ((uVar8 & 1) != 0) {
                uVar7 = FUN_007cc028(piVar30,lVar16,2);
                FUN_007cbed8(&local_330,lVar16,2,uVar7);
              }
              uVar8 = FUN_007cbfa0(piVar30,lVar16,3);
              if ((uVar8 & 1) != 0) {
                uVar7 = FUN_007cc028(piVar30,lVar16,3);
                uVar13 = 3;
                goto LAB_0095e31c;
              }
            }
            lVar16 = lVar16 + 1;
            puVar31 = puVar31 + 3;
          } while (lVar16 != 5);
          local_290._0_5_ = CONCAT14(*(undefined1 *)(param_2 + 0xac),(undefined4)local_290);
        }
        (**(code **)(*plVar29 + 0x38))(plVar29,&local_330);
        FUN_007b9754(auStack_280);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0095e508  FUN_0095e508 =====

void FUN_0095e508(long *param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  void *local_230 [2];
  char cStack_219;
  void *local_218 [2];
  char cStack_201;
  undefined1 uStack_1f9;
  char *local_1f8;
  undefined8 local_1f0;
  undefined1 *local_1e8;
  char *local_1e0;
  char **ppcStack_1d8;
  undefined8 local_1d0;
  char **ppcStack_1c8;
  undefined1 auStack_1c0 [16];
  undefined1 *local_1b0;
  undefined1 *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined1 *puStack_198;
  undefined1 *local_190;
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  undefined1 *local_170;
  undefined1 *puStack_168;
  undefined1 *puStack_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  undefined1 *puStack_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined5 uStack_118;
  undefined3 local_113;
  undefined5 uStack_110;
  undefined3 uStack_10b;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined5 uStack_68;
  undefined3 uStack_63;
  undefined5 local_60;
  undefined3 uStack_5b;
  
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_68 = 0xaaaaaaaaaa;
  uStack_63 = 0xaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = 0xaaaaaaaaaa;
  uStack_5b = 0xaaaaaa;
  FUN_007cbe28(&local_100);
  plVar4 = *(long **)(param_2 + 0x1f8);
  if ((plVar4 != (long *)0x0) && (0 < *(long *)(param_3 + 0x168))) {
    FUN_008a3da0(*(undefined8 *)(param_3 + 0x158),auStack_1c0);
    (**(code **)(*plVar4 + 0x18))(&local_1b0,plVar4,auStack_1c0);
    puStack_78 = puStack_128;
    local_80 = local_130;
    uStack_68 = uStack_118;
    puStack_70 = puStack_120;
    uStack_63 = local_113;
    local_60 = uStack_110;
    puStack_b8 = puStack_168;
    local_c0 = local_170;
    puStack_a8 = puStack_158;
    puStack_b0 = puStack_160;
    puStack_98 = puStack_148;
    local_a0 = local_150;
    puStack_88 = puStack_138;
    puStack_90 = puStack_140;
    puStack_f8 = puStack_1a8;
    local_100 = local_1b0;
    puStack_e8 = puStack_198;
    puStack_f0 = puStack_1a0;
    puStack_d8 = puStack_188;
    local_e0 = local_190;
    puStack_c8 = puStack_178;
    puStack_d0 = puStack_180;
    FUN_008a3db0(auStack_1c0);
  }
  *param_1 = (long)(PTR_DAT_00d52958 + 0x10);
  memcpy(param_1 + 1,(void *)(param_3 + 8),0x160);
  lVar1 = *(long *)(param_2 + 0xc38);
  param_1[0x14] = CONCAT35(uStack_63,uStack_68);
  param_1[0x13] = (long)puStack_70;
  param_1[0x12] = (long)puStack_78;
  param_1[0x11] = (long)local_80;
  param_1[0x17] = (long)puStack_f8;
  param_1[0x16] = (long)local_100;
  param_1[0x19] = (long)puStack_e8;
  param_1[0x18] = (long)puStack_f0;
  param_1[10] = (long)puStack_b8;
  param_1[9] = (long)local_c0;
  param_1[0xc] = (long)puStack_a8;
  param_1[0xb] = (long)puStack_b0;
  *(ulong *)((long)param_1 + 0xa5) = CONCAT53(local_60,uStack_63);
  param_1[0x1f] = (long)puStack_b8;
  param_1[0x1e] = (long)local_c0;
  param_1[0x21] = (long)puStack_a8;
  param_1[0x20] = (long)puStack_b0;
  param_1[0xe] = (long)puStack_98;
  param_1[0xd] = (long)local_a0;
  uVar2 = param_1[0x2c];
  if (param_1[0x2c] <= (long)(ulong)*(uint *)(param_1 + 0x16)) {
    uVar2 = (ulong)*(uint *)(param_1 + 0x16);
  }
  param_1[0x10] = (long)puStack_88;
  param_1[0xf] = (long)puStack_90;
  param_1[0x23] = (long)puStack_98;
  param_1[0x22] = (long)local_a0;
  param_1[0x25] = (long)puStack_88;
  param_1[0x24] = (long)puStack_90;
  param_1[0x27] = (long)puStack_78;
  param_1[0x26] = (long)local_80;
  param_1[0x29] = CONCAT35(uStack_63,uStack_68);
  param_1[0x28] = (long)puStack_70;
  *(ulong *)((long)param_1 + 0x14d) = CONCAT53(local_60,uStack_63);
  lVar3 = *(long *)(param_3 + 0x168);
  param_1[2] = (long)puStack_f8;
  param_1[1] = (long)local_100;
  param_1[4] = (long)puStack_e8;
  param_1[3] = (long)puStack_f0;
  param_1[0x2c] = uVar2;
  param_1[0x2d] = lVar3;
  param_1[6] = (long)puStack_d8;
  param_1[5] = (long)local_e0;
  param_1[8] = (long)puStack_c8;
  param_1[7] = (long)puStack_d0;
  param_1[0x1b] = (long)puStack_d8;
  param_1[0x1a] = (long)local_e0;
  param_1[0x1d] = (long)puStack_c8;
  param_1[0x1c] = (long)puStack_d0;
  if (lVar1 != 0) {
    puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_1b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
    local_190 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_180 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
    local_170 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_160 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
    local_150 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_140 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
    local_130 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_118 = 0xaaaaaaaaaa;
    local_113 = 0xaaaaaa;
    puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_110 = 0xaaaaaaaaaa;
    uStack_10b = 0xaaaaaa;
    FUN_00968a7c(&local_1b0,lVar1,param_1);
    uVar2 = FUN_0044075c();
    if ((uVar2 & 1) == 0) {
      local_1f8 = "../../video/video_stream_encoder.cc";
      local_1f0 = 0x37a8;
      local_1e8 = &uStack_1f9;
      ppcStack_1d8 = &local_1f8;
      local_1d0 = *(undefined8 *)(param_3 + 0x158);
      local_1e0 = "Adjusting allocation, fps = ";
      ppcStack_1c8 = &local_1e0;
      FUN_007cc70c(local_218,&local_100);
      FUN_007cc70c(local_230,&local_1b0);
      FUN_00623bb0(local_1d0,&DAT_002298b7,*ppcStack_1d8,*(undefined4 *)(ppcStack_1d8 + 1),local_1e0
                   ,", from ",local_218,", to ",local_230);
      if (cStack_219 < '\0') {
        operator_delete(local_230[0]);
      }
      if (cStack_201 < '\0') {
        operator_delete(local_218[0]);
      }
    }
    param_1[0x27] = (long)puStack_128;
    param_1[0x26] = (long)local_130;
    param_1[0x29] = CONCAT35(local_113,uStack_118);
    param_1[0x28] = (long)puStack_120;
    *(ulong *)((long)param_1 + 0x14d) = CONCAT53(uStack_110,local_113);
    param_1[0x1f] = (long)puStack_168;
    param_1[0x1e] = (long)local_170;
    param_1[0x21] = (long)puStack_158;
    param_1[0x20] = (long)puStack_160;
    param_1[0x23] = (long)puStack_148;
    param_1[0x22] = (long)local_150;
    param_1[0x25] = (long)puStack_138;
    param_1[0x24] = (long)puStack_140;
    param_1[0x17] = (long)puStack_1a8;
    param_1[0x16] = (long)local_1b0;
    param_1[0x19] = (long)puStack_198;
    param_1[0x18] = (long)puStack_1a0;
    param_1[0x1b] = (long)puStack_188;
    param_1[0x1a] = (long)local_190;
    param_1[0x1d] = (long)puStack_178;
    param_1[0x1c] = (long)puStack_180;
  }
  return;
}


// ===== 0095e7c4  FUN_0095e7c4 =====

void FUN_0095e7c4(long *param_1,ulong param_2)

{
  bool bVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  void *pvVar7;
  long lVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  
  pvVar7 = (void *)*param_1;
  pvVar6 = (void *)param_1[1];
  lVar8 = (long)pvVar6 - (long)pvVar7;
  bVar1 = param_2 < (ulong)((lVar8 >> 3) * -0x70a3d70a3d70a3d7);
  lVar11 = param_2 + (lVar8 >> 3) * 0x70a3d70a3d70a3d7;
  if (bVar1 || lVar11 == 0) {
    if (bVar1) {
      pvVar7 = (void *)((long)pvVar7 + param_2 * 200);
      while (pvVar7 != pvVar6) {
        pvVar6 = (void *)((long)pvVar6 + -200);
        if (pvVar6 == (void *)0x0) goto LAB_0095e9dc;
        FUN_008492a8(pvVar6);
      }
      param_1[1] = (long)pvVar7;
    }
  }
  else {
    lVar4 = param_1[2] - (long)pvVar7 >> 3;
    uVar3 = lVar4 * -0x70a3d70a3d70a3d7;
    if (uVar3 < param_2) {
      if (param_2 < 0x147ae147ae147af) {
        uVar5 = lVar4 * 0x1eb851eb851eb852;
        if (uVar5 < param_2 || uVar5 - param_2 == 0) {
          uVar5 = param_2;
        }
        if (0xa3d70a3d70a3d6 < uVar3) {
          uVar5 = 0x147ae147ae147ae;
        }
        if (uVar5 < 0x147ae147ae147af) {
          pvVar2 = operator_new(uVar5 * 200);
          lVar11 = lVar11 * 200;
          lVar4 = (long)pvVar2 + lVar8;
          if (lVar11 == 0) {
            lVar10 = (long)pvVar2 + lVar8;
          }
          else {
            lVar10 = lVar4 + lVar11;
            lVar8 = lVar4;
            do {
              if (lVar8 == 0) goto LAB_0095e9c8;
              FUN_008491f0(lVar8);
              lVar11 = lVar11 + -200;
              lVar8 = lVar8 + 200;
            } while (lVar11 != 0);
            pvVar7 = (void *)*param_1;
            pvVar6 = (void *)param_1[1];
            lVar8 = (long)pvVar6 - (long)pvVar7;
          }
          pvVar9 = pvVar7;
          lVar11 = lVar4 - lVar8;
          if (pvVar7 != pvVar6) {
            do {
              if (lVar11 == 0) goto LAB_0095e9c8;
              FUN_00849240(lVar11,pvVar9);
              pvVar9 = (void *)((long)pvVar9 + 200);
              lVar11 = lVar11 + 200;
            } while (pvVar9 != pvVar6);
            do {
              if (pvVar7 == (void *)0x0) {
LAB_0095e9dc:
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                          );
              }
              FUN_008492a8(pvVar7);
              pvVar7 = (void *)((long)pvVar7 + 200);
            } while (pvVar7 != pvVar6);
            pvVar7 = (void *)*param_1;
          }
          *param_1 = lVar4 - lVar8;
          param_1[1] = lVar10;
          param_1[2] = (long)((long)pvVar2 + uVar5 * 200);
          if (pvVar7 == (void *)0x0) {
            return;
          }
          operator_delete(pvVar7);
          return;
        }
      }
      else {
        FUN_006108c0();
      }
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    lVar11 = lVar11 * 200;
    pvVar7 = pvVar6;
    if (lVar11 != 0) {
      pvVar7 = (void *)((long)pvVar6 + lVar11);
      do {
        if (pvVar6 == (void *)0x0) {
LAB_0095e9c8:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        FUN_008491f0(pvVar6);
        lVar11 = lVar11 + -200;
        pvVar6 = (void *)((long)pvVar6 + 200);
      } while (lVar11 != 0);
    }
    param_1[1] = (long)pvVar7;
  }
  return;
}


// ===== 0095e9f8  FUN_0095e9f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0095e9f8(long param_1,ulong param_2,ulong param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined1 uStack_169;
  char *local_168;
  ulong uStack_160;
  undefined1 *local_158;
  char *pcStack_150;
  char **local_148;
  ulong uStack_140;
  char **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  long local_118;
  ulong local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  ulong uStack_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_78 = _UNK_00229568;
  local_80 = _DAT_00229560;
  uStack_68 = _UNK_00229578;
  local_70 = _DAT_00229570;
  uStack_58 = _UNK_00229588;
  uStack_60 = _DAT_00229580;
  uStack_98 = _UNK_00229548;
  local_a0 = _DAT_00229540;
  uStack_88 = _UNK_00229558;
  local_90 = _DAT_00229550;
  uStack_d8 = _UNK_00229508;
  local_e0 = _DAT_00229500;
  uStack_c8 = _UNK_00229518;
  uStack_d0 = _DAT_00229510;
  uStack_b8 = _UNK_00229528;
  local_c0 = _DAT_00229520;
  uStack_a8 = _UNK_00229538;
  uStack_b0 = _DAT_00229530;
  uStack_128 = _UNK_002294b8;
  local_130 = _DAT_002294b0;
  local_118 = _UNK_002294c8;
  local_120 = _DAT_002294c0;
  uStack_108 = _UNK_002294d8;
  local_110 = _DAT_002294d0;
  uStack_f8 = _UNK_002294e8;
  local_100 = _DAT_002294e0;
  uStack_e8 = _UNK_002294f8;
  uStack_f0 = _DAT_002294f0;
  FUN_007bf070(&local_130,param_4);
  if ((long)param_2 < (long)local_110) {
    local_110 = param_2;
  }
  lVar9 = *(long *)(param_4 + 0x18);
  if (lVar9 < 1) {
    lVar9 = FUN_007bf4f8(param_4);
    if (lVar9 == 0) {
      if ((long)param_2 < 0) {
        uVar7 = -(-param_2 / 1000) - (ulong)(500 < -param_2 % 1000);
      }
      else {
        uVar7 = param_2 / 1000;
        if (499 < param_2 % 1000) {
          uVar7 = uVar7 + 1;
        }
      }
    }
    else {
      uVar7 = FUN_007bf4f8(param_4);
    }
    lVar9 = *(long *)(param_1 + 0x410) + uVar7;
  }
  uStack_108 = *(undefined8 *)(param_4 + 0x28);
  local_100 = CONCAT71(local_100._1_7_,*(undefined1 *)(param_4 + 0x30));
  local_120 = CONCAT44(local_120._4_4_,(int)lVar9 * 0x5a);
  local_118 = lVar9;
  if (lVar9 <= *(long *)(param_1 + 0x408)) {
    uVar7 = FUN_004022fc();
    if ((uVar7 & 1) == 0) {
      FUN_00623bb0(&DAT_00215708,"../../video/video_stream_encoder.cc",0x3412,
                   "Same/old NTP timestamp (",local_118,&DAT_001af803,
                   *(undefined8 *)(param_1 + 0x408),") for incoming frame. Dropping.");
    }
    uVar7 = FUN_007bf3cc(&local_130);
    lVar9 = FUN_007bf3e8(&local_130);
    uStack_160 = uStack_88;
    local_168 = local_90;
    if ((local_80 & 1) == 0) {
      local_168 = (char *)0x0;
      uStack_160 = uVar7 & 0xffffffff | lVar9 << 0x20;
    }
    FUN_007bea28(param_1 + 0x520,&local_168);
    *(byte *)(param_1 + 0x530) = *(byte *)(param_1 + 0x530) & (byte)local_80;
    (**(code **)(**(long **)(param_1 + 0xf8) + 0x30))(*(long **)(param_1 + 0xf8),1);
    goto LAB_0095ee04;
  }
  if ((long)param_2 < 0) {
    uVar7 = -param_2 / 1000;
    lVar10 = -(ulong)(500 < -param_2 % 1000);
    if ((long)(lVar10 - (uVar7 + *(long *)(param_1 + 0x418))) < 0xea61) goto LAB_0095ec94;
    uVar7 = lVar10 - uVar7;
LAB_0095ec88:
    bVar4 = true;
    *(ulong *)(param_1 + 0x418) = uVar7;
  }
  else {
    uVar7 = param_2 / 1000;
    if (499 < param_2 % 1000) {
      uVar7 = uVar7 + 1;
    }
    if (60000 < (long)(uVar7 - *(long *)(param_1 + 0x418))) goto LAB_0095ec88;
LAB_0095ec94:
    bVar4 = false;
  }
  plVar11 = *(long **)(param_1 + 0xf8);
  *(long *)(param_1 + 0x408) = lVar9;
  uVar5 = FUN_007bf3cc(&local_130);
  uVar6 = FUN_007bf3e8(&local_130);
  (**(code **)(*plVar11 + 0x18))(plVar11,uVar5,uVar6);
  *(int *)(param_1 + 0x420) = *(int *)(param_1 + 0x420) + 1;
  if (*(char *)(param_1 + 0xc2c) == '\x01') {
    iVar1 = *(int *)(param_1 + 0xc30);
    iVar2 = *(int *)(param_1 + 0xc28);
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = iVar1 / iVar2;
    }
    *(int *)(param_1 + 0xc30) = iVar1 + 1;
    if (((param_3 & 1) == 0) && (iVar1 != iVar3 * iVar2)) goto LAB_0095ed6c;
    if (iVar1 != iVar3 * iVar2) goto LAB_0095ed20;
    uVar8 = 5;
    *(int *)(param_1 + 0x424) = *(int *)(param_1 + 0x424) + 1;
LAB_0095ed58:
    FUN_0095ee2c(param_1,&local_130,uVar8);
  }
  else {
    if ((param_3 & 1) != 0) {
LAB_0095ed20:
      uVar7 = FUN_00417e08();
      if ((uVar7 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../video/video_stream_encoder.cc",0x3511,
                     "Incoming frame dropped due to that the encoder is blocked.");
      }
      uVar8 = 2;
      *(int *)(param_1 + 0x428) = *(int *)(param_1 + 0x428) + 1;
      goto LAB_0095ed58;
    }
LAB_0095ed6c:
    FUN_0095eef8(param_1,&local_130,param_2);
  }
  if (bVar4) {
    uVar7 = FUN_00417e08();
    if ((uVar7 & 1) == 0) {
      uStack_140 = (ulong)*(uint *)(param_1 + 0x420);
      local_168 = "../../video/video_stream_encoder.cc";
      uStack_160 = 0x3569;
      local_158 = &uStack_169;
      local_148 = &local_168;
      pcStack_150 = "Number of frames: captured ";
      local_138 = &pcStack_150;
      FUN_00623bb0(&DAT_002298ad,"../../video/video_stream_encoder.cc",0x3569,
                   "Number of frames: captured ",uStack_140,
                   ", dropped (due to congestion window pushback) ",*(undefined4 *)(param_1 + 0x424)
                   ,", dropped (due to encoder blocked) ",*(undefined4 *)(param_1 + 0x428),
                   ", interval_ms ",60000);
    }
    *(undefined4 *)(param_1 + 0x428) = 0;
    *(undefined8 *)(param_1 + 0x420) = 0;
  }
LAB_0095ee04:
  FUN_007bf020(&local_130);
  return;
}


// ===== 0095ee2c  FUN_0095ee2c =====

void FUN_0095ee2c(long *param_1,long param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_40;
  ulong uStack_38;
  
  uVar1 = FUN_007bf3cc(param_2);
  lVar2 = FUN_007bf3e8(param_2);
  local_40 = *(undefined8 *)(param_2 + 0xa0);
  uStack_38 = *(ulong *)(param_2 + 0xa8);
  if (*(char *)(param_2 + 0xb0) == '\0') {
    local_40 = 0;
    uStack_38 = uVar1 & 0xffffffff | lVar2 << 0x20;
  }
  FUN_007bea28(param_1 + 0xa4,&local_40);
  *(byte *)(param_1 + 0xa6) = *(byte *)(param_1 + 0xa6) & *(byte *)(param_2 + 0xb0);
  if (param_3 == 4) {
    uVar3 = 0;
  }
  else {
    if (param_3 != 3) goto LAB_0095eecc;
    uVar3 = 1;
  }
  (**(code **)(*param_1 + 0x80))(param_1,uVar3);
LAB_0095eecc:
  (**(code **)(*(long *)param_1[0x1f] + 0x30))((long *)param_1[0x1f],param_3);
  return;
}


// ===== 0095eef8  FUN_0095eef8 =====

void FUN_0095eef8(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  byte bVar10;
  long *local_180;
  long *local_178;
  ulong uStack_170;
  undefined1 local_98;
  undefined7 uStack_97;
  long lStack_90;
  undefined8 local_88;
  int local_7c;
  int local_78;
  byte local_74;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*(ulong *)(param_1 + 0x2198) < 0xb) {
    if (*(long **)(param_1 + 0x1e8) == (long *)0x0) {
      bVar10 = 0;
      iVar4 = -0x55555600;
      iVar5 = -0x55555556;
    }
    else {
      (**(code **)(**(long **)(param_1 + 0x1e8) + 0x60))(&local_178);
      FUN_007b9754(&local_178);
      iVar4 = local_7c;
      iVar5 = local_78;
      bVar10 = local_74;
    }
    FUN_007bf070(&local_178,param_2);
    lVar9 = *(long *)(param_1 + 0x2180);
    lVar8 = *(long *)(param_1 + 0x2178);
    lStack_90 = *(long *)(param_1 + 0x2168);
    local_98 = 0;
    *(long *)(param_1 + 0x2168) = lStack_90 + 1;
    lVar7 = 0;
    if (lVar9 != lVar8) {
      lVar7 = (lVar9 - lVar8) * 2 + -1;
    }
    local_88 = param_3;
    if (lVar7 == *(long *)(param_1 + 0x2198) + *(long *)(param_1 + 0x2190)) {
      FUN_009646e4(param_1 + 0x2170);
      lVar8 = *(long *)(param_1 + 0x2178);
      lVar9 = *(long *)(param_1 + 0x2180);
    }
    if ((lVar8 == lVar9) ||
       (uVar6 = *(long *)(param_1 + 0x2198) + *(long *)(param_1 + 0x2190),
       lVar7 = *(long *)(lVar8 + (uVar6 >> 4) * 8) + (uVar6 & 0xf) * 0xf8, lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_007bf070(lVar7,&local_178);
    *(undefined8 *)(lVar7 + 0xf0) = local_88;
    *(long *)(lVar7 + 0xe8) = lStack_90;
    *(ulong *)(lVar7 + 0xe0) = CONCAT71(uStack_97,local_98);
    *(long *)(param_1 + 0x2198) = *(long *)(param_1 + 0x2198) + 1;
    FUN_007bf020(&local_178);
    if (*(long *)(param_1 + 0x2198) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/deque:1575: libc++ Hardening assertion !empty() failed: deque::back called on an empty deque\n"
                );
    }
    uVar6 = (*(long *)(param_1 + 0x2198) + *(long *)(param_1 + 0x2190)) - 1;
    lVar7 = *(long *)(*(long *)(param_1 + 0x2178) + (uVar6 >> 4) * 8) + (uVar6 & 0xf) * 0xf8;
    if ((bVar10 & 1) == 0) {
      FUN_00958184(param_1,*(undefined8 *)(lVar7 + 0xe8));
    }
    else {
      iVar3 = FUN_007bf3cc(param_2);
      if ((iVar3 < iVar4) || (iVar3 = FUN_007bf3e8(param_2), iVar3 < iVar5)) {
        iVar4 = FUN_007bf3cc(param_2);
        iVar5 = FUN_007bf3e8(param_2);
      }
      FUN_007bf464(&local_178,lVar7);
      plVar2 = local_178;
      local_180 = *(long **)(param_1 + 0x2160);
      if (local_180 != (long *)0x0) {
        (**(code **)*local_180)();
      }
      (**(code **)(*plVar2 + 0x68))
                (plVar2,(long)iVar4,(long)iVar5,&local_180,*(undefined8 *)(lVar7 + 0xe8));
      if (local_180 != (long *)0x0) {
        (**(code **)(*local_180 + 8))();
      }
      if (local_178 != (long *)0x0) {
        (**(code **)(*local_178 + 8))();
      }
    }
  }
  else {
    uVar6 = FUN_004249b0();
    if ((uVar6 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../video/video_stream_encoder.cc",0x3acb,
                   "To many frames are being prepared.");
    }
    uVar6 = FUN_007bf3cc(param_2);
    lVar7 = FUN_007bf3e8(param_2);
    local_178 = *(long **)(param_2 + 0xa0);
    uStack_170 = *(ulong *)(param_2 + 0xa8);
    if (*(char *)(param_2 + 0xb0) == '\0') {
      local_178 = (long *)0x0;
      uStack_170 = uVar6 & 0xffffffff | lVar7 << 0x20;
    }
    FUN_007bea28(param_1 + 0x520,&local_178);
    *(byte *)(param_1 + 0x530) = *(byte *)(param_1 + 0x530) & *(byte *)(param_2 + 0xb0);
    (**(code **)(**(long **)(param_1 + 0xf8) + 0x30))(*(long **)(param_1 + 0xf8),2);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0095f230  FUN_0095f230 =====

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0095f230(long *param_1,long param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  long *plVar12;
  undefined8 local_378;
  ulong *puStack_370;
  undefined1 uStack_201;
  char *local_200;
  long **pplStack_1f8;
  ulong local_1f0;
  char **ppcStack_1e8;
  long *local_1e0;
  undefined1 *puStack_1d8;
  undefined1 *local_1d0;
  undefined1 *puStack_1c8;
  undefined1 *local_1c0;
  undefined1 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  double local_88;
  long local_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_007bf404(param_2);
  FUN_0097f158(param_1 + 0x24a,uVar3);
  plVar8 = param_1 + 0x4c;
  if (*(char *)((long)param_1 + 0x26c) != '\x01') goto LAB_0095f358;
  iVar4 = FUN_007bf3cc(param_2);
  if ((*(byte *)((long)param_1 + 0x26c) & 1) == 0) goto LAB_0095faf4;
  if (iVar4 == (int)*plVar8) {
    iVar4 = FUN_007bf3e8(param_2);
    if ((*(byte *)((long)param_1 + 0x26c) & 1) == 0) goto LAB_0095faf4;
    if (iVar4 != *(int *)((long)param_1 + 0x264)) goto LAB_0095f320;
    FUN_007bf464(&local_1e0,param_2);
    iVar4 = (**(code **)(*local_1e0 + 0x28))();
    if (local_1e0 != (long *)0x0) {
      (**(code **)(*local_1e0 + 8))(local_1e0);
    }
    if ((*(byte *)((long)param_1 + 0x26c) & 1) == 0) goto LAB_0095faf4;
    if ((bool)(char)param_1[0x4d] != (iVar4 == 0)) goto LAB_0095f320;
  }
  else {
LAB_0095f320:
    iVar4 = FUN_007bf3cc(param_2);
    if ((*(byte *)((long)param_1 + 0x26c) & 1) == 0) goto LAB_0095faf4;
    if (iVar4 == (int)*plVar8) {
      iVar4 = FUN_007bf3e8(param_2);
      if ((*(byte *)((long)param_1 + 0x26c) & 1) == 0) goto LAB_0095faf4;
      if (iVar4 != *(int *)((long)param_1 + 0x264)) goto LAB_0095f358;
    }
    else {
LAB_0095f358:
      if ((param_1[0xd] != 0) && (plVar12 = (long *)param_1[0x1e], plVar12 != (long *)0x0)) {
        puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
        local_1e0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
        puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
        local_1d0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
        local_1c0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_1b0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
        local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_190 = &DAT_aaaaaaaaaaaaaaaa;
        local_180 = &DAT_aaaaaaaaaaaaaaaa;
        uVar3 = FUN_007bf3cc(param_2);
        uVar5 = FUN_007bf3e8(param_2);
        local_378 = (undefined *)CONCAT44(uVar5,uVar3);
        (**(code **)(*plVar12 + 0x20))(&local_1e0,plVar12,&local_378);
        if ((((ulong)local_180 & 1) != 0) &&
           ((**(code **)(*(long *)param_1[0xd] + 0x18))((long *)param_1[0xd],&local_1e0,0),
           ((ulong)local_180 & 1) != 0)) {
          FUN_007b6d78(&local_1e0);
        }
      }
    }
    *(undefined1 *)((long)param_1 + 0x204) = 1;
    uVar3 = FUN_007bf3cc(param_2);
    uVar5 = FUN_007bf3e8(param_2);
    FUN_007bf464(&local_1e0,param_2);
    iVar4 = (**(code **)(*local_1e0 + 0x28))();
    if (local_1e0 != (long *)0x0) {
      (**(code **)(*local_1e0 + 8))(local_1e0);
    }
    if (*(char *)((long)param_1 + 0x26c) == '\x01') {
      *(undefined4 *)(param_1 + 0x4c) = uVar3;
      *(undefined4 *)((long)param_1 + 0x264) = uVar5;
      *(bool *)(param_1 + 0x4d) = iVar4 == 0;
      uVar6 = FUN_00417e08();
    }
    else {
      if (plVar8 == (long *)0x0) goto LAB_0095fb08;
      *(bool *)(param_1 + 0x4d) = iVar4 == 0;
      *(undefined4 *)(param_1 + 0x4c) = uVar3;
      *(undefined4 *)((long)param_1 + 0x264) = uVar5;
      *(undefined1 *)((long)param_1 + 0x26c) = 1;
      uVar6 = FUN_00417e08();
    }
    if ((uVar6 & 1) == 0) {
      local_1e0 = (long *)0x1b535e;
      puStack_1d8 = (undefined1 *)0x3d11;
      local_1d0 = &uStack_201;
      pplStack_1f8 = &local_1e0;
      local_200 = "Video frame parameters changed: dimensions=";
      if ((*(byte *)((long)param_1 + 0x26c) & 1) == 0) {
LAB_0095faf4:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                  );
      }
      local_1f0 = (ulong)*(uint *)(param_1 + 0x4c);
      ppcStack_1e8 = &local_200;
      puStack_370 = &local_1f0;
      local_378 = &DAT_001c4fee;
      FUN_00623bb0(&DAT_001f613f,"../../video/video_stream_encoder.cc",0x3d11,
                   "Video frame parameters changed: dimensions=",local_1f0,&DAT_001c4fee,
                   *(undefined4 *)((long)param_1 + 0x264),", texture=",(char)param_1[0x4d],
                   &DAT_001ea377);
    }
    uVar3 = FUN_007bf3cc(param_2);
    uVar5 = FUN_007bf3e8(param_2);
    *(undefined4 *)(param_1 + 0xa5) = uVar3;
    *(undefined4 *)((long)param_1 + 0x52c) = uVar5;
    param_1[0xa4] = 0;
  }
  uVar11 = 0x1e;
  if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
    uVar11 = *(uint *)(param_1 + 0x40);
  }
  if ((((long *)param_1[0x22] != (long *)0x0) &&
      (uVar6 = (**(code **)(*(long *)param_1[0x22] + 0x38))(), (uVar6 >> 0x20 & 1) != 0)) &&
     ((uint)uVar6 != 0)) {
    uVar11 = (uint)uVar6;
  }
  uVar6 = (**(code **)(*(long *)param_1[5] + 0x10))();
  if ((long)uVar6 < 0) {
    uVar10 = -(-uVar6 / 1000) - (ulong)(500 < -uVar6 % 1000);
  }
  else {
    uVar10 = uVar6 / 1000;
    if (499 < uVar6 % 1000) {
      uVar10 = uVar10 + 1;
    }
  }
  if (*(char *)((long)param_1 + 0x204) == '\x01') {
    FUN_00959ea4(param_1);
    if ((char)param_1[0xa9] == '\x01') {
      *(undefined1 *)(param_1 + 0xa9) = 0;
    }
    if (param_1 == (long *)0xfffffffffffffac0) goto LAB_0095fb08;
LAB_0095f698:
    param_1[0xa8] = uVar10;
    *(undefined1 *)(param_1 + 0xa9) = 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0xa9);
    if ((bVar1 != 1) || (999 < (long)(uVar10 - param_1[0xa8]))) {
      if ((char)param_1[0x7f] == '\x01') {
        local_1e0 = (long *)(PTR_DAT_00d52958 + 0x10);
        memcpy(&puStack_1d8,param_1 + 0x52,0x160);
        local_88 = (double)uVar11;
        local_78 = param_1[0x7e];
        FUN_0095e508(&local_378,param_1,&local_1e0);
        FUN_0095d82c(param_1,&local_378);
        FUN_007baa68(&local_378);
        FUN_007baa68(&local_1e0);
        bVar1 = *(byte *)(param_1 + 0xa9) & 1;
      }
      if (bVar1 != 0) {
        *(undefined1 *)(param_1 + 0xa9) = 0;
      }
      if (param_1 + 0xa8 == (long *)0x0) goto LAB_0095fb08;
      goto LAB_0095f698;
    }
  }
  if ((char)param_1[0xa2] == '\x01') {
    uVar6 = FUN_007bf3cc(param_1 + 0x86);
    lVar7 = FUN_007bf3e8(param_1 + 0x86);
    local_1e0 = (long *)param_1[0x9a];
    puStack_1d8 = (undefined1 *)param_1[0x9b];
    if ((char)param_1[0x9c] == '\0') {
      local_1e0 = (long *)0x0;
      puStack_1d8 = (undefined1 *)(uVar6 & 0xffffffff | lVar7 << 0x20);
    }
    FUN_007bea28(param_1 + 0xa4,&local_1e0);
    *(byte *)(param_1 + 0xa6) = *(byte *)(param_1 + 0xa6) & *(byte *)(param_1 + 0x9c);
    (**(code **)(*(long *)param_1[0x1f] + 0x30))((long *)param_1[0x1f],2);
  }
  uVar3 = FUN_007bf404(param_2);
  uVar6 = FUN_0095fc48(param_1,uVar3);
  if ((uVar6 & 1) == 0) {
    FUN_0098479c(param_1 + 0x25c);
    if (((char)param_1[0x7f] == '\x01') && (param_1[0x7e] != 0)) {
      if ((char)param_1[0xa2] == '\x01') {
        FUN_007bf020(param_1 + 0x86);
        *(undefined1 *)(param_1 + 0xa2) = 0;
      }
      FUN_00965bfc(param_1 + 0x17a,uVar11);
      if ((*(byte *)(param_1 + 0x184) & 1) == 0) {
        bVar1 = *(byte *)(param_1 + 0xb2);
        FUN_00965a88(param_1 + 0x17a,bVar1 ^ 1);
        if (((bVar1 & 1) == 0) && (uVar6 = FUN_00965d28(param_1 + 0x17a), (uVar6 & 1) != 0)) {
          uVar6 = FUN_00417e08();
          if ((uVar6 & 1) == 0) {
            if ((char)param_1[0x7f] == '\x01') {
              lVar7 = param_1[0x7e];
            }
            else {
              lVar7 = 0;
            }
            FUN_00623bb0(&DAT_002298bf,"../../video/video_stream_encoder.cc",0x3ff1,
                         "Drop Frame: target bitrate ",lVar7,", input frame rate ",uVar11);
          }
          uVar6 = FUN_007bf3cc(param_2);
          lVar7 = FUN_007bf3e8(param_2);
          local_1e0 = *(long **)(param_2 + 0xa0);
          puStack_1d8 = *(undefined1 **)(param_2 + 0xa8);
          if (*(char *)(param_2 + 0xb0) == '\0') {
            local_1e0 = (long *)0x0;
            puStack_1d8 = (undefined1 *)(uVar6 & 0xffffffff | lVar7 << 0x20);
          }
          FUN_007bea28(param_1 + 0xa4,&local_1e0);
          *(byte *)(param_1 + 0xa6) = *(byte *)(param_1 + 0xa6) & *(byte *)(param_2 + 0xb0);
          (**(code **)(*param_1 + 0x80))(param_1,0);
          plVar8 = (long *)param_1[0x1f];
          uVar9 = 4;
          goto LAB_0095f9c4;
        }
      }
      else {
        FUN_00965a88(param_1 + 0x17a,0);
      }
      FUN_0095fdb0(param_1,param_2,param_3);
      goto LAB_0095fa20;
    }
    FUN_007bf464(&local_1e0,param_2);
    iVar4 = (**(code **)(*local_1e0 + 0x28))();
    if (local_1e0 != (long *)0x0) {
      (**(code **)(*local_1e0 + 8))(local_1e0);
    }
    if (iVar4 == 0) {
      if ((char)param_1[0xa2] != '\0') {
        FUN_007bf020(param_1 + 0x86);
        *(undefined1 *)(param_1 + 0xa2) = 0;
      }
      if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
        if (((DAT_00d80668 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00d80668), iVar4 != 0)) {
          DAT_00d80660 = (char *)FUN_0066d328("webrtc");
          FUN_0054ff1c(&DAT_00d80668);
        }
        if (*DAT_00d80660 != '\0') {
          FUN_0066d348(0x53,DAT_00d80660,"EncoderPaused",param_1,0,0,0,0,6);
        }
      }
      *(undefined1 *)(param_1 + 0x80) = 1;
      goto LAB_0095f96c;
    }
    if ((char)param_1[0xa2] != '\0') {
      if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
        if (((DAT_00d80668 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00d80668), iVar4 != 0)) {
          DAT_00d80660 = (char *)FUN_0066d328("webrtc");
          FUN_0054ff1c(&DAT_00d80668);
        }
        if (*DAT_00d80660 != '\0') {
          FUN_0066d348(0x53,DAT_00d80660,"EncoderPaused",param_1,0,0,0,0,6);
        }
      }
      *(undefined1 *)(param_1 + 0x80) = 1;
      if ((char)param_1[0xa2] == '\x01') goto LAB_0095f8b8;
    }
  }
  else {
    uVar6 = FUN_00417e08();
    if ((uVar6 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../video/video_stream_encoder.cc",0x3e89,
                   "Dropping frame. Too large for target bitrate.");
    }
    FUN_00984548(param_1 + 0x25c);
    FUN_007bf464(&local_1e0,param_2);
    iVar4 = (**(code **)(*local_1e0 + 0x28))();
    if (local_1e0 != (long *)0x0) {
      (**(code **)(*local_1e0 + 8))(local_1e0);
    }
    if (iVar4 == 0) {
      if ((char)param_1[0xa2] != '\0') {
        FUN_007bf020(param_1 + 0x86);
        *(undefined1 *)(param_1 + 0xa2) = 0;
      }
LAB_0095f96c:
      uVar6 = FUN_007bf3cc(param_2);
      lVar7 = FUN_007bf3e8(param_2);
      local_1e0 = *(long **)(param_2 + 0xa0);
      puStack_1d8 = *(undefined1 **)(param_2 + 0xa8);
      if (*(char *)(param_2 + 0xb0) == '\0') {
        local_1e0 = (long *)0x0;
        puStack_1d8 = (undefined1 *)(uVar6 & 0xffffffff | lVar7 << 0x20);
      }
      FUN_007bea28(param_1 + 0xa4,&local_1e0);
      uVar9 = 2;
      plVar8 = (long *)param_1[0x1f];
      *(byte *)(param_1 + 0xa6) = *(byte *)(param_1 + 0xa6) & *(byte *)(param_2 + 0xb0);
LAB_0095f9c4:
      (**(code **)(*plVar8 + 0x30))(plVar8,uVar9);
      goto LAB_0095fa20;
    }
    if ((char)param_1[0xa2] != '\0') {
LAB_0095f8b8:
      FUN_007bf1d8(param_1 + 0x86,param_2);
      param_1[0xa3] = param_3;
      goto LAB_0095fa20;
    }
  }
  if (param_1 == (long *)0xfffffffffffffbd0) {
LAB_0095fb08:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  FUN_007bf070(param_1 + 0x86,param_2);
  param_1[0xa3] = param_3;
  *(undefined1 *)(param_1 + 0xa2) = 1;
LAB_0095fa20:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0095fb84  FUN_0095fb84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0095fb84(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:2185: libc++ Hardening assertion !empty() failed: deque::pop_front called on an empty deque\n"
              );
  }
  if (*(long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) >> 4) * 8) +
      (*(ulong *)(param_1 + 0x20) & 0xf) * 0xf8 != 0) {
    FUN_007bf020();
    uVar1 = *(long *)(param_1 + 0x20) + _DAT_001f2940;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + _UNK_001f2948;
    *(ulong *)(param_1 + 0x20) = uVar1;
    if (0x1f < uVar1) {
      operator_delete((void *)**(undefined8 **)(param_1 + 8));
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x10;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0095fc48  FUN_0095fc48 =====

void FUN_0095fc48(long param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 local_280;
  undefined1 *puStack_278;
  undefined4 local_270;
  undefined1 auStack_268 [272];
  uint local_158;
  undefined1 local_154;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if (*(long *)(param_1 + 0x1e8) != 0) {
    uVar6 = FUN_00984738(param_1 + 0x12e0);
    if ((((uVar6 & 1) != 0) && (*(char *)(param_1 + 0x27c) == '\x01')) &&
       (uVar6 = FUN_00984750(param_1 + 0x12e0), (uVar6 >> 0x20 & 1) != 0)) {
      uVar6 = FUN_00984750(param_1 + 0x12e0);
      if ((uVar6 >> 0x20 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1074: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      uVar7 = FUN_00984768(param_1 + 0x12e0);
      local_158 = (uint)uVar7;
      local_154 = (char)(uVar7 >> 0x20);
      if ((*(byte *)(param_1 + 0x27c) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005dc08c();
      }
      uVar1 = (uint)uVar6;
      if (param_2 <= (uint)uVar6) {
        uVar1 = param_2;
      }
      puVar2 = (uint *)(param_1 + 0x278);
      if ((uVar7 & 0x100000000) != 0) {
        puVar2 = &local_158;
      }
      local_270 = 0xaaaaaaaa;
      uVar3 = *puVar2;
      puStack_278 = &DAT_aaaaaaaaaaaaaaaa;
      local_280 = &DAT_aaaaaaaaaaaaaaaa;
      (**(code **)(**(long **)(param_1 + 0x1e8) + 0x60))(auStack_268,*(long **)(param_1 + 0x1e8));
      FUN_0095cf28(&local_158,auStack_268,param_1 + 0x118,*(undefined1 *)(param_1 + 0x1d50));
      FUN_007ba768(&local_280,&local_158,uVar1);
      FUN_007b9754(&local_158);
      FUN_007b9754(auStack_268);
      bVar5 = (byte)local_270 & uVar3 < local_280._4_4_;
      goto LAB_0095fcac;
    }
  }
  bVar5 = 0;
LAB_0095fcac:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar5);
}


// ===== 0095fdb0  FUN_0095fdb0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0095fdb0(long param_1,long param_2,undefined8 param_3)

{
  undefined1 *__n;
  undefined1 *puVar1;
  void *pvVar2;
  undefined8 *****pppppuVar3;
  byte bVar4;
  long lVar5;
  char *pcVar6;
  long ****pppplVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  long *plVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  undefined1 auStack_3b0 [224];
  long *local_2d0;
  long ****local_2c8;
  int local_2c0;
  int local_2bc;
  char cStack_2b1;
  undefined1 local_2b0 [8];
  undefined8 uStack_2a8;
  char *local_2a0;
  char *local_290;
  char **ppcStack_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long *local_1f0;
  char *pcStack_1e8;
  ulong local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long *local_1a8;
  long ****local_1a0;
  undefined2 local_194 [2];
  long ****local_190;
  char *local_188;
  char *local_180;
  undefined1 *puStack_178;
  undefined8 local_170;
  undefined8 ****ppppuStack_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  undefined8 local_150;
  undefined1 *puStack_148;
  undefined8 ****local_140;
  undefined1 *puStack_138;
  undefined1 *local_130;
  undefined8 ****ppppuStack_128;
  undefined1 *puStack_120;
  undefined1 *local_118;
  undefined8 ****local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined8 ****local_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined8 ****local_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar12 = FUN_0044075c();
  if ((uVar12 & 1) == 0) {
    local_170 = local_2b0;
    puStack_178 = (undefined1 *)0x4088;
    ppcStack_288 = &local_180;
    local_180 = "../../video/video_stream_encoder.cc";
    local_290 = "EncodeVideoFrame";
    FUN_00623bb0(&DAT_002255e4,"../../video/video_stream_encoder.cc",0x4088,"EncodeVideoFrame",
                 " posted ",param_3," ntp time ",*(undefined8 *)(param_2 + 0x18));
  }
  if ((((*(byte *)(param_1 + 0x12a8) & 1) != 0) || (*(char *)(param_1 + 0x1f0) != '\x01')) ||
     (*(long *)(param_1 + 0x1e8) == 0)) goto LAB_00960904;
  if (*(char *)(param_1 + 0x400) == '\x01') {
    if (((DAT_00d80678 & 1) == 0) && (iVar8 = FUN_0054fdd4(&DAT_00d80678), iVar8 != 0)) {
      DAT_00d80670 = (char *)FUN_0066d328("webrtc");
      FUN_0054ff1c(&DAT_00d80678);
    }
    if (*DAT_00d80670 != '\0') {
      FUN_0066d348(0x46,DAT_00d80670,"EncoderPaused",param_1,0,0,0,0,6);
    }
  }
  *(undefined1 *)(param_1 + 0x400) = 0;
  ppppuStack_168 = (undefined8 ****)&DAT_aaaaaaaaaaaaaaaa;
  local_170 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
  local_160 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  local_150 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  local_140 = (undefined8 ****)&DAT_aaaaaaaaaaaaaaaa;
  ppppuStack_128 = (undefined8 ****)&DAT_aaaaaaaaaaaaaaaa;
  local_130 = &DAT_aaaaaaaaaaaaaaaa;
  local_118 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  local_110 = (undefined8 ****)&DAT_aaaaaaaaaaaaaaaa;
  local_f8 = (undefined8 ****)&DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = (undefined8 ****)&DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
  local_180 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(**(long **)(param_1 + 0x1e8) + 0x60))(&local_180);
  bVar4 = *(byte *)(param_1 + 0x58f);
  __n = local_160;
  if (-1 < (long)puStack_158) {
    __n = (undefined1 *)((ulong)puStack_158 >> 0x38);
  }
  puVar1 = *(undefined1 **)(param_1 + 0x580);
  if (-1 < (char)bVar4) {
    puVar1 = (undefined1 *)(ulong)bVar4;
  }
  if (__n == puVar1) {
    pppppuVar3 = (undefined8 *****)ppppuStack_168;
    if (-1 < (long)puStack_158) {
      pppppuVar3 = &ppppuStack_168;
    }
    pvVar2 = *(void **)(param_1 + 0x578);
    if (-1 < (char)bVar4) {
      pvVar2 = (void *)(param_1 + 0x578);
    }
    iVar8 = memcmp(pppppuVar3,pvVar2,(size_t)__n);
    if ((iVar8 != 0) || (local_150._1_1_ != *(char *)(param_1 + 0x591))) goto LAB_0095ff6c;
  }
  else {
LAB_0095ff6c:
    (**(code **)(**(long **)(param_1 + 0xf8) + 0x28))
              (*(long **)(param_1 + 0xf8),&ppppuStack_168,local_150._1_1_);
    if (*(long *)(param_1 + 0xc38) != 0) {
      FUN_00969c3c();
    }
  }
  uVar12 = FUN_007ba480(param_1 + 0x560,&local_180);
  if ((uVar12 & 1) == 0) {
    FUN_0095d604(param_1);
    FUN_00983630(param_1 + 0x12e0);
    FUN_00984be0(param_1 + 0x12e0,&local_180);
    FUN_00984dec(param_1 + 0x12e0,&local_180);
    uVar12 = FUN_00417e08();
    if ((uVar12 & 1) == 0) {
      FUN_007b98b8(&local_290,&local_180);
      FUN_00623bb0(&DAT_001f4e90,"../../video/video_stream_encoder.cc",0x4209,
                   "[VSE] Encoder info changed to ",&local_290);
      if (local_280._7_1_ < '\0') {
        operator_delete(local_290);
      }
    }
  }
  lVar20 = *(long *)(param_1 + 0xc38);
  if (lVar20 != 0) {
    if ((ulong)puStack_148 >> 1 == *(ulong *)(param_1 + 0x598) >> 1) {
      pvVar2 = (void *)(param_1 + 0x5a0);
      if ((*(ulong *)(param_1 + 0x598) & 1) != 0) {
        pvVar2 = *(void **)(param_1 + 0x5a0);
      }
      pppppuVar3 = &local_140;
      if (((ulong)puStack_148 & 1) != 0) {
        pppppuVar3 = (undefined8 *****)local_140;
      }
      iVar8 = memcmp(pppppuVar3,pvVar2,(ulong)puStack_148 >> 1);
      if (iVar8 == 0) {
        if ((ulong)local_130 >> 1 == *(ulong *)(param_1 + 0x5b0) >> 1) {
          pvVar2 = (void *)(param_1 + 0x5b8);
          if ((*(ulong *)(param_1 + 0x5b0) & 1) != 0) {
            pvVar2 = *(void **)(param_1 + 0x5b8);
          }
          pppppuVar3 = &ppppuStack_128;
          if (((ulong)local_130 & 1) != 0) {
            pppppuVar3 = (undefined8 *****)ppppuStack_128;
          }
          iVar8 = memcmp(pppppuVar3,pvVar2,(ulong)local_130 >> 1);
          if (iVar8 == 0) {
            if ((ulong)local_118 >> 1 == *(ulong *)(param_1 + 0x5c8) >> 1) {
              pvVar2 = (void *)(param_1 + 0x5d0);
              if ((*(ulong *)(param_1 + 0x5c8) & 1) != 0) {
                pvVar2 = *(void **)(param_1 + 0x5d0);
              }
              pppppuVar3 = &local_110;
              if (((ulong)local_118 & 1) != 0) {
                pppppuVar3 = (undefined8 *****)local_110;
              }
              iVar8 = memcmp(pppppuVar3,pvVar2,(ulong)local_118 >> 1);
              if (iVar8 == 0) {
                if ((ulong)local_100 >> 1 == *(ulong *)(param_1 + 0x5e0) >> 1) {
                  pvVar2 = (void *)(param_1 + 0x5e8);
                  if ((*(ulong *)(param_1 + 0x5e0) & 1) != 0) {
                    pvVar2 = *(void **)(param_1 + 0x5e8);
                  }
                  pppppuVar3 = &local_f8;
                  if (((ulong)local_100 & 1) != 0) {
                    pppppuVar3 = (undefined8 *****)local_f8;
                  }
                  iVar8 = memcmp(pppppuVar3,pvVar2,(ulong)local_100 >> 1);
                  if (iVar8 == 0) {
                    if ((ulong)puStack_e8 >> 1 == *(ulong *)(param_1 + 0x5f8) >> 1) {
                      pvVar2 = (void *)(param_1 + 0x600);
                      if ((*(ulong *)(param_1 + 0x5f8) & 1) != 0) {
                        pvVar2 = *(void **)(param_1 + 0x600);
                      }
                      pppppuVar3 = &local_e0;
                      if (((ulong)puStack_e8 & 1) != 0) {
                        pppppuVar3 = (undefined8 *****)local_e0;
                      }
                      iVar8 = memcmp(pppppuVar3,pvVar2,(ulong)puStack_e8 >> 1);
                      if (iVar8 == 0) goto LAB_00960170;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    FUN_0096986c(lVar20,&local_180);
  }
LAB_00960170:
  FUN_009609cc(param_1 + 0x560,&local_180);
  uVar12 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
  if ((long)uVar12 < 0) {
    uVar14 = -(-uVar12 / 1000) - (ulong)(500 < -uVar12 % 1000);
  }
  else {
    uVar14 = uVar12 / 1000;
    if (499 < uVar12 % 1000) {
      uVar14 = uVar14 + 1;
    }
  }
  *(ulong *)(param_1 + 0x550) = uVar14;
  uStack_1b8 = _UNK_00229588;
  uStack_1c0 = _DAT_00229580;
  uStack_1c8 = _UNK_00229578;
  local_1d0 = _DAT_00229570;
  *(undefined1 *)(param_1 + 0x558) = 1;
  uStack_208 = _UNK_00229538;
  local_210 = _DAT_00229530;
  uStack_1f8 = _UNK_00229548;
  uStack_200 = _DAT_00229540;
  pcStack_1e8 = _UNK_00229558;
  local_1f0 = _DAT_00229550;
  uStack_1d8 = _UNK_00229568;
  local_1e0 = _DAT_00229560;
  uStack_248 = _UNK_002294f8;
  local_250 = _DAT_002294f0;
  uStack_238 = _UNK_00229508;
  uStack_240 = _DAT_00229500;
  uStack_228 = _UNK_00229518;
  local_230 = _DAT_00229510;
  uStack_218 = _UNK_00229528;
  uStack_220 = _DAT_00229520;
  ppcStack_288 = _UNK_002294b8;
  local_290 = _DAT_002294b0;
  local_278 = _UNK_002294c8;
  local_280 = _DAT_002294c0;
  uStack_268 = _UNK_002294d8;
  local_270 = _DAT_002294d0;
  uStack_258 = _UNK_002294e8;
  local_260 = _DAT_002294e0;
  FUN_007bf070(&local_290,param_2);
  if ((*(int *)(param_1 + 0x270) < 1) && (*(int *)(param_1 + 0x274) < 1)) {
LAB_00960574:
    if ((*(byte *)(param_1 + 0x530) & 1) == 0) {
      if ((local_1e0 & 1) != 0) {
        local_1e0 = local_1e0 & 0xffffffffffffff00;
      }
    }
    else {
      uVar12 = FUN_007beaa4(param_1 + 0x520);
      if (((uVar12 & 1) == 0) && ((local_1e0 & 1) != 0)) {
        _local_2b0 = FUN_00960b6c(&local_290);
        FUN_007bea28(param_1 + 0x520,local_2b0);
        local_2b0 = (undefined1  [8])0x0;
        uVar10 = FUN_007bf3cc(&local_290);
        uStack_2a8 = (char *)CONCAT44(uStack_2a8._4_4_,uVar10);
        uVar10 = FUN_007bf3e8(&local_290);
        uStack_2a8 = (char *)CONCAT44(uVar10,(undefined4)uStack_2a8);
        FUN_007beac8(param_1 + 0x520,local_2b0);
        pcStack_1e8 = *(char **)(param_1 + 0x528);
        local_1f0 = *(long **)(param_1 + 0x520);
        if ((local_1e0 & 1) == 0) {
          local_1e0 = CONCAT71(local_1e0._1_7_,1);
        }
        FUN_007beb50(param_1 + 0x520);
      }
    }
    *(undefined1 *)(param_1 + 0x530) = 1;
    if (((DAT_00d80688 & 1) == 0) && (iVar8 = FUN_0054fdd4(&DAT_00d80688), iVar8 != 0)) {
      DAT_00d80680 = (char *)FUN_0066d328("webrtc");
      FUN_0054ff1c(&DAT_00d80688);
    }
    if (*DAT_00d80680 != '\0') {
      uVar13 = FUN_007bf4f8(param_2);
      local_2b0 = (undefined1  [8])&DAT_001a4a55;
      local_190 = (long ****)CONCAT71(local_190._1_7_,6);
      local_2c8 = (long ****)0x1cef59;
      FUN_0066d348(0x54,DAT_00d80680,"Video",uVar13,1,local_2b0,&local_190,&local_2c8,2);
    }
    FUN_00984600(param_1 + 0x12e0,&local_290,param_3);
    if (((DAT_00d80698 & 1) == 0) && (iVar8 = FUN_0054fdd4(&DAT_00d80698), iVar8 != 0)) {
      DAT_00d80690 = (char *)FUN_0066d328("webrtc");
      FUN_0054ff1c(&DAT_00d80698);
    }
    pcVar6 = DAT_00d80690;
    local_2b0 = (undefined1  [8])0x0;
    local_2a0 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_2a8 = &DAT_aaaaaaaaaaaaaaaa;
    if (*DAT_00d80690 != '\0') {
      plVar19 = (long *)(local_280 & 0xffffffff);
      FUN_007bf464(&local_2d0,&local_290);
      (**(code **)(*local_2d0 + 0x60))(&local_2c8);
      local_188 = "storage_representation";
      local_190 = (long ****)0x1cc0be;
      local_194[0] = 0x702;
      local_1a0 = local_2c8;
      if (-1 < cStack_2b1) {
        local_1a0 = (long ****)&local_2c8;
      }
      local_1a8 = plVar19;
      FUN_0066d348(0x42,pcVar6,"VideoEncoder::Encode",0,2,&local_190,local_194,&local_1a8,0);
      if (cStack_2b1 < '\0') {
        operator_delete(local_2c8);
      }
      if (local_2d0 != (long *)0x0) {
        (**(code **)(*local_2d0 + 8))();
      }
      uStack_2a8 = DAT_00d80690;
      local_2a0 = "VideoEncoder::Encode";
      local_2b0 = (undefined1  [8])&uStack_2a8;
    }
    FUN_00966540(param_1 + 0xc58,&local_290);
    plVar19 = *(long **)(param_1 + 0x2158);
    if (plVar19 != (long *)0x0) {
      FUN_007bf070(auStack_3b0,&local_290);
      (**(code **)(*plVar19 + 0x10))(plVar19,auStack_3b0);
      FUN_007bf020(auStack_3b0);
    }
    iVar8 = (**(code **)(**(long **)(param_1 + 0x1e8) + 0x38))
                      (*(long **)(param_1 + 0x1e8),&local_290,param_1 + 0xc40);
    *(undefined1 *)(param_1 + 0x401) = 1;
    if (iVar8 < 0) {
      uVar12 = FUN_004249b0();
      if ((uVar12 & 1) == 0) {
        FUN_007b6dd8(&local_2c8,param_1 + 0x120);
        FUN_00623bb0(&DAT_001f4e90,"../../video/video_stream_encoder.cc",0x45d3,
                     "Encoder failed, failing encoder format: ",&local_2c8);
        if (cStack_2b1 < '\0') {
          operator_delete(local_2c8);
        }
      }
      FUN_0095cb7c(param_1);
    }
    else {
      puVar17 = *(undefined4 **)(param_1 + 0xc40);
      puVar15 = *(undefined4 **)(param_1 + 0xc48);
      if (puVar17 != puVar15) {
        uVar12 = (long)puVar15 + (-4 - (long)puVar17);
        puVar16 = puVar17;
        if (0x1b < uVar12) {
          uVar12 = (uVar12 >> 2) + 1;
          uVar14 = uVar12 & 0x7ffffffffffffff8;
          puVar16 = puVar17 + (uVar12 & 0x7ffffffffffffff8);
          puVar18 = (undefined8 *)(puVar17 + 4);
          do {
            uVar14 = uVar14 - 8;
            puVar18[-1] = 0x400000004;
            puVar18[-2] = 0x400000004;
            puVar18[1] = 0x400000004;
            *puVar18 = 0x400000004;
            puVar18 = puVar18 + 4;
          } while (uVar14 != 0);
          if (uVar12 == (uVar12 & 0x7ffffffffffffff8)) goto LAB_009608bc;
        }
        do {
          puVar17 = puVar16 + 1;
          *puVar16 = 4;
          puVar16 = puVar17;
        } while (puVar17 != puVar15);
      }
    }
LAB_009608bc:
    if ((local_2b0 != (undefined1  [8])0x0) && (**(char **)local_2b0 != '\0')) {
      FUN_0066d348(0x45,*(char **)local_2b0,*(long *)((long)local_2b0 + 8),0,0,0,0,0,0);
    }
  }
  else {
    FUN_007bf464(local_2b0,&local_290);
    iVar8 = (**(code **)(*(long *)local_2b0 + 0x28))();
    bVar4 = iVar8 == 0 & local_170._5_1_;
    if (local_2b0 != (undefined1  [8])0x0) {
      (**(code **)(*(long *)local_2b0 + 8))();
    }
    if (bVar4 != 0) goto LAB_00960574;
    iVar8 = FUN_007bf3cc(param_2);
    iVar8 = iVar8 - *(int *)(param_1 + 0x270);
    iVar9 = FUN_007bf3e8(param_2);
    local_190 = (long ****)0x0;
    iVar9 = iVar9 - *(int *)(param_1 + 0x274);
    uStack_2a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_2b0 = (undefined1  [8])&DAT_aaaaaaaaaaaaaaaa;
    uVar12 = FUN_007bf3cc(param_2);
    lVar20 = FUN_007bf3e8(param_2);
    local_2b0 = *(undefined1 (*) [8])(param_2 + 0xa0);
    uStack_2a8 = *(char **)(param_2 + 0xa8);
    if (*(char *)(param_2 + 0xb0) == '\0') {
      local_2b0 = (undefined1  [8])0x0;
      uStack_2a8 = (char *)(uVar12 & 0xffffffff | lVar20 << 0x20);
    }
    if ((*(int *)(param_1 + 0x270) < 4) && (*(int *)(param_1 + 0x274) < 4)) {
      iVar21 = *(int *)(param_1 + 0x270) + 1;
      iVar22 = *(int *)(param_1 + 0x274) + 1;
      uVar23 = iVar21 / 2 - (iVar21 - (iVar21 >> 0x1f) >> 0x1f);
      uVar12 = CONCAT44(iVar22 / 2 - (iVar22 - (iVar22 >> 0x1f) >> 0x1f),uVar23) &
               0xfffffffefffffffe;
      FUN_007bf464(&local_1a8,param_2);
      (**(code **)(*local_1a8 + 0x50))
                (&local_2c8,local_1a8,uVar23 & 0xfffffffe,uVar12 >> 0x20,iVar8,iVar9,iVar8,iVar9);
      pppplVar7 = local_190;
      local_190 = local_2c8;
      local_2c8 = (long ****)0x0;
      if ((pppplVar7 != (long ****)0x0) &&
         ((*(code *)(*pppplVar7)[1])(), local_2c8 != (long ****)0x0)) {
        (*(code *)(*local_2c8)[1])();
      }
      if (local_1a8 != (long *)0x0) {
        (**(code **)(*local_1a8 + 8))();
      }
      local_2c8 = (long ****)0x0;
      local_2b0 = (undefined1  [8])
                  CONCAT44(local_2b0._4_4_ - (int)(uVar12 >> 0x20),local_2b0._0_4_ - (int)uVar12);
      local_2c0 = iVar8;
      local_2bc = iVar9;
      FUN_007beac8(local_2b0,&local_2c8);
    }
    else {
      FUN_007bf464(&local_1a8,param_2);
      plVar19 = local_1a8;
      uVar10 = (**(code **)(*local_1a8 + 0x30))(local_1a8);
      uVar11 = (**(code **)(*plVar19 + 0x38))(plVar19);
      (**(code **)(*plVar19 + 0x50))(&local_2c8,plVar19,0,0,uVar10,uVar11,iVar8,iVar9);
      pppplVar7 = local_190;
      local_190 = local_2c8;
      local_2c8 = (long ****)0x0;
      if ((pppplVar7 != (long ****)0x0) &&
         ((*(code *)(*pppplVar7)[1])(), (long *****)local_2c8 != (long *****)0x0)) {
        (*(code *)(*local_2c8)[1])();
      }
      if (local_1a8 != (long *)0x0) {
        (**(code **)(*local_1a8 + 8))();
      }
      uVar12 = FUN_007beaa4(local_2b0);
      if ((uVar12 & 1) == 0) {
        local_2b0 = (undefined1  [8])0x0;
        uStack_2a8 = (char *)CONCAT44(iVar9,iVar8);
      }
    }
    pppplVar7 = local_190;
    if ((long *****)local_190 == (long *****)0x0) {
      uVar12 = FUN_004249b0();
      if ((uVar12 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../video/video_stream_encoder.cc",0x43e3,
                     "Cropping and scaling frame failed, dropping frame.");
      }
    }
    else {
      FUN_007bf484(&local_290,&local_190);
      pcStack_1e8 = uStack_2a8;
      local_1f0 = (long *)local_2b0;
      if ((local_1e0 & 1) == 0) {
        local_1e0 = CONCAT71(local_1e0._1_7_,1);
      }
      local_278 = *(undefined8 *)(param_2 + 0x18);
      uStack_268 = *(undefined8 *)(param_2 + 0x28);
      local_260 = CONCAT71(local_260._1_7_,*(undefined1 *)(param_2 + 0x30));
      uVar12 = FUN_007beaa4(param_1 + 0x520);
      if ((uVar12 & 1) == 0) {
        uVar10 = FUN_007bf3cc(&local_290);
        uVar11 = FUN_007bf3e8(&local_290);
        *(undefined4 *)(param_1 + 0x528) = uVar10;
        *(undefined4 *)(param_1 + 0x52c) = uVar11;
        *(undefined1 *)(param_1 + 0x530) = 0;
        *(undefined8 *)(param_1 + 0x520) = 0;
      }
    }
    if ((long *****)local_190 != (long *****)0x0) {
      (*(code *)(*local_190)[1])();
    }
    if ((long *****)pppplVar7 != (long *****)0x0) goto LAB_00960574;
  }
  FUN_007bf020(&local_290);
  FUN_007b9754(&local_180);
LAB_00960904:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 009609cc  FUN_009609cc =====

undefined8 * FUN_009609cc(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2[1];
  uVar5 = *param_2;
  *(undefined8 *)((long)param_1 + 0xe) = *(undefined8 *)((long)param_2 + 0xe);
  param_1[1] = uVar6;
  *param_1 = uVar5;
  if (param_1 == param_2) {
    *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
    *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  }
  else {
    bVar3 = *(byte *)((long)param_2 + 0x2f);
    if (*(char *)((long)param_1 + 0x2f) < '\0') {
      uVar1 = param_2[4];
      puVar4 = (undefined8 *)param_2[3];
      if (-1 < (char)bVar3) {
        uVar1 = (ulong)bVar3;
        puVar4 = param_2 + 3;
      }
      FUN_00547f08(param_1 + 3,puVar4,uVar1);
    }
    else if ((char)bVar3 < '\0') {
      FUN_00547fc0(param_1 + 3,param_2[3],param_2[4]);
    }
    else {
      uVar6 = param_2[4];
      uVar5 = param_2[3];
      param_1[5] = param_2[5];
      param_1[4] = uVar6;
      param_1[3] = uVar5;
    }
    *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
    plVar2 = param_2 + 8;
    if ((param_2[7] & 1) != 0) {
      plVar2 = (long *)param_2[8];
    }
    FUN_00962874(param_1 + 7,plVar2,(ulong)param_2[7] >> 1);
    plVar2 = param_2 + 0xb;
    if ((param_2[10] & 1) != 0) {
      plVar2 = (long *)param_2[0xb];
    }
    FUN_00962874(param_1 + 10,plVar2,(ulong)param_2[10] >> 1);
    plVar2 = param_2 + 0xe;
    if ((param_2[0xd] & 1) != 0) {
      plVar2 = (long *)param_2[0xe];
    }
    FUN_00962874(param_1 + 0xd,plVar2,(ulong)param_2[0xd] >> 1);
    plVar2 = param_2 + 0x11;
    if ((param_2[0x10] & 1) != 0) {
      plVar2 = (long *)param_2[0x11];
    }
    FUN_00962874(param_1 + 0x10,plVar2,(ulong)param_2[0x10] >> 1);
    plVar2 = param_2 + 0x14;
    if ((param_2[0x13] & 1) != 0) {
      plVar2 = (long *)param_2[0x14];
    }
    FUN_00962874(param_1 + 0x13,plVar2,(ulong)param_2[0x13] >> 1);
    FUN_00962a90(param_1 + 0x16,param_2[0x16],param_2[0x17],
                 (long)(param_2[0x17] - param_2[0x16]) >> 4);
    *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
    plVar2 = param_2 + 0x1b;
    if ((param_2[0x1a] & 1) != 0) {
      plVar2 = (long *)param_2[0x1b];
    }
    FUN_00962cb8(param_1 + 0x1a,plVar2,(long)(param_2[0x1a] << 1) >> 2);
  }
  uVar5 = *(undefined8 *)((long)param_2 + 0xf9);
  uVar7 = param_2[0x1f];
  uVar6 = param_2[0x1e];
  *(undefined8 *)((long)param_1 + 0x101) = *(undefined8 *)((long)param_2 + 0x101);
  *(undefined8 *)((long)param_1 + 0xf9) = uVar5;
  param_1[0x1f] = uVar7;
  param_1[0x1e] = uVar6;
  return param_1;
}


// ===== 00960b6c  FUN_00960b6c =====

undefined1  [16] FUN_00960b6c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  
  local_28 = 0;
  local_30 = FUN_007bf3cc();
  local_2c = FUN_007bf3e8(param_1);
  puVar1 = (undefined8 *)(param_1 + 0xa0);
  puVar2 = (undefined8 *)(param_1 + 0xa8);
  if (*(char *)(param_1 + 0xb0) == '\0') {
    puVar1 = &local_28;
    puVar2 = (undefined8 *)&local_30;
  }
  auVar3._8_8_ = *puVar2;
  auVar3._0_8_ = *puVar1;
  return auVar3;
}


// ===== 00960bd8  FUN_00960bd8 =====

void FUN_00960bd8(char *param_1,long *param_2)

{
  void *__src;
  bool bVar1;
  int iVar2;
  long lVar3;
  void *__dest;
  char **ppcVar4;
  char *__dest_00;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  void *pvVar12;
  undefined1 uStack_62;
  undefined1 uStack_61;
  char **local_60;
  char *local_58;
  code *pcStack_50;
  code *pcStack_48;
  
  lVar10 = *(long *)(param_1 + 0x2150);
  lVar3 = FUN_005d6490();
  if (lVar3 == lVar10) {
    if (((DAT_00d806a8 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d806a8), iVar2 != 0)) {
      DAT_00d806a0 = (char *)FUN_0066d328("webrtc");
      FUN_0054ff1c(&DAT_00d806a8);
    }
    local_60 = (char **)0x0;
    pcStack_50 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    local_58 = &DAT_aaaaaaaaaaaaaaaa;
    if (*DAT_00d806a0 != '\0') {
      FUN_0066d348(0x42,DAT_00d806a0,"OnKeyFrameRequest",0,0,0,0,0,0);
      local_58 = DAT_00d806a0;
      pcStack_50 = (code *)0x1e5fc9;
      local_60 = &local_58;
    }
    if (*(long **)(param_1 + 0x110) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x110) + 0x58))();
    }
    if (*(long *)(param_1 + 0x1e8) != 0) {
      lVar3 = *param_2;
      if (lVar3 == param_2[1]) {
        puVar7 = *(undefined4 **)(param_1 + 0xc40);
        uVar6 = *(long *)(param_1 + 0xc48) - (long)puVar7;
        uVar5 = (long)uVar6 >> 2;
        if (0 < (long)uVar5) {
          if (7 < uVar5) {
            puVar8 = (undefined8 *)(puVar7 + 4);
            uVar9 = uVar5 & 0x7ffffffffffffff8;
            do {
              uVar9 = uVar9 - 8;
              puVar8[-1] = 0x300000003;
              puVar8[-2] = 0x300000003;
              puVar8[1] = 0x300000003;
              *puVar8 = 0x300000003;
              puVar8 = puVar8 + 4;
            } while (uVar9 != 0);
            bVar1 = uVar5 == (uVar5 & 0x7ffffffffffffff8);
            puVar7 = puVar7 + (uVar5 & 0x7ffffffffffffff8);
            uVar5 = uVar6 >> 2 & 7;
            if (bVar1) goto LAB_00960ec0;
          }
          *puVar7 = 3;
          if ((1 < uVar5) && (puVar7[1] = 3, uVar5 != 2)) {
            puVar7[2] = 3;
            if ((3 < uVar5) &&
               (((puVar7[3] = 3, uVar5 != 4 && (puVar7[4] = 3, 5 < uVar5)) &&
                (puVar7[5] = 3, uVar5 == 7)))) {
              puVar7[6] = 3;
            }
          }
        }
      }
      else {
        uVar5 = 0;
        do {
          if ((ulong)(*(long *)(param_1 + 0xc48) - *(long *)(param_1 + 0xc40) >> 2) <= uVar5) break;
          *(undefined4 *)(*(long *)(param_1 + 0xc40) + uVar5 * 4) =
               *(undefined4 *)(lVar3 + uVar5 * 4);
          uVar5 = uVar5 + 1;
          lVar3 = *param_2;
        } while (uVar5 < (ulong)(param_2[1] - lVar3 >> 2));
      }
    }
LAB_00960ec0:
    if ((local_60 != (char **)0x0) && (**local_60 != '\0')) {
      FUN_0066d348(0x45,*local_60,local_60[1],0,0,0,0,0,0);
    }
    return;
  }
  __src = (void *)*param_2;
  plVar11 = *(long **)(param_1 + 0x2150);
  uVar5 = param_2[1] - (long)__src;
  if (uVar5 == 0) {
    pvVar12 = (void *)0x0;
    __dest = (void *)0x0;
  }
  else {
    if ((long)uVar5 < 0) goto LAB_00960f24;
    __dest = operator_new(uVar5);
    pvVar12 = (void *)((long)__dest + uVar5);
    memcpy(__dest,__src,uVar5);
  }
  ppcVar4 = (char **)operator_new(0x20);
  uVar5 = (long)pvVar12 - (long)__dest;
  *ppcVar4 = param_1;
  ppcVar4[1] = (char *)0x0;
  ppcVar4[2] = (char *)0x0;
  ppcVar4[3] = (char *)0x0;
  if (uVar5 != 0) {
    if ((long)uVar5 < 0) {
LAB_00960f24:
                    /* WARNING: Subroutine does not return */
      FUN_0060fffc();
    }
    __dest_00 = (char *)operator_new(uVar5);
    ppcVar4[1] = __dest_00;
    ppcVar4[3] = __dest_00 + uVar5;
    memcpy(__dest_00,__dest,uVar5);
    ppcVar4[2] = __dest_00 + uVar5;
  }
  pcStack_50 = FUN_00965350;
  pcStack_48 = FUN_00965338;
  local_60 = ppcVar4;
  (**(code **)(*plVar11 + 8))(plVar11,&local_60,&uStack_61,&uStack_62);
  (*pcStack_50)(0,&local_60,&local_60);
  if (__dest == (void *)0x0) {
    return;
  }
  uVar6 = (ulong)((long)pvVar12 + (-4 - ((long)pvVar12 << 0x3e))) >> 2;
  uVar5 = (ulong)(((long)__dest - (long)pvVar12 << 0x3e) - ((long)__dest - (long)pvVar12)) >> 2;
  if (uVar6 <= uVar5) {
    uVar5 = uVar6;
  }
  if ((1 < uVar5) && ((((int)__dest - (int)pvVar12 | -(int)pvVar12) & 3U) == 0)) {
    uVar5 = uVar5 & 0x3ffffffffffffffe;
    pvVar12 = (void *)((long)pvVar12 + uVar5 * -4);
    do {
      uVar5 = uVar5 - 2;
    } while (uVar5 != 0);
  }
  do {
    if (pvVar12 == __dest) {
      operator_delete(__dest);
      return;
    }
    pvVar12 = (void *)((long)pvVar12 + -4);
  } while (pvVar12 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00960f58  FUN_00960f58 =====

void FUN_00960f58(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *local_50;
  undefined8 uStack_48;
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  lVar3 = *(long *)(param_1 + 0x2150);
  lVar1 = FUN_005d6490();
  if (lVar1 == lVar3) {
    plVar2 = *(long **)(param_1 + 0x1e8);
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00961040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x58))(plVar2,param_2);
      return;
    }
  }
  else {
    lVar3 = *param_2;
    lVar1 = param_2[1];
    plVar2 = *(long **)(param_1 + 0x2150);
    local_50 = (long *)operator_new(0x18);
    uStack_48 = 0x18;
    *local_50 = param_1;
    local_50[1] = lVar3;
    *(int *)(local_50 + 2) = (int)lVar1;
    local_40 = FUN_005ea56c;
    pcStack_38 = FUN_00965440;
    (**(code **)(*plVar2 + 8))(plVar2,&local_50,&uStack_11,&uStack_12);
    (*local_40)(0,&local_50,&local_50);
  }
  return;
}


// ===== 00961044  FUN_00961044 =====

void FUN_00961044(void *param_1,long param_2,long param_3,uint *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined *in_stack_ffffffffffffff40;
  undefined1 uStack_a1;
  char *local_a0;
  undefined *puStack_98;
  undefined1 *local_90;
  char *pcStack_88;
  char **local_80;
  char *local_78;
  char **ppcStack_70;
  char **local_68;
  char *local_60;
  char *pcStack_58;
  long local_50;
  char **ppcStack_48;
  
  memcpy(param_1,&DAT_00229590,0x180);
  FUN_007bc958(param_1,param_3);
  iVar2 = 0;
  if ((*(ulong *)(param_3 + 0x9c) & 0x100000000) != 0) {
    iVar2 = (int)*(ulong *)(param_3 + 0x9c);
  }
  if ((*(ulong *)(param_3 + 0xb8) & 0x100000000) != 0) {
    iVar2 = (int)*(ulong *)(param_3 + 0xb8);
  }
  lVar5 = (long)iVar2;
  FUN_0096699c(param_2 + 0xc58,lVar5,param_1);
  FUN_00966de8(param_2 + 0xc58,param_4,param_1);
  if (param_4 != (uint *)0x0) {
    param_4 = (uint *)(ulong)*param_4;
  }
  if ((*(int *)((long)param_1 + 0x24) < 0) && (*(char *)(param_2 + 0x20a0) == '\x01')) {
    if (*(long **)((long)param_1 + 0x88) == (long *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(**(long **)((long)param_1 + 0x88) + 0x20))();
    }
    uVar4 = FUN_00974f78(param_2 + 0x1d58,(ulong)param_4 & 0xffffffff,lVar5,uVar3,
                         *(undefined8 *)((long)param_1 + 0x90));
    uVar1 = (undefined4)uVar4;
    if ((uVar4 & 0x100000000) == 0) {
      uVar1 = 0xffffffff;
    }
    *(undefined4 *)((long)param_1 + 0x24) = uVar1;
  }
  if (((DAT_00d806b8 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d806b8), iVar2 != 0)) {
    DAT_00d806b0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d806b8);
  }
  local_68 = (char **)0x0;
  pcStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d806b0 != '\0') {
    local_a0 = "stream_idx";
    puStack_98 = &DAT_001cef60;
    local_78 = (char *)CONCAT62(local_78._2_6_,0x303);
    ppcStack_48 = (char **)(long)*(int *)((long)param_1 + 0x24);
    in_stack_ffffffffffffff40 = (undefined *)((ulong)in_stack_ffffffffffffff40 & 0xffffffffffffff00)
    ;
    local_50 = lVar5;
    FUN_0066d348(0x42,DAT_00d806b0,"VideoStreamEncoder::AugmentEncodedImage",0,2,&local_a0,&local_78
                 ,&local_50,in_stack_ffffffffffffff40);
    local_60 = DAT_00d806b0;
    pcStack_58 = "VideoStreamEncoder::AugmentEncodedImage";
    local_68 = &local_60;
  }
  uVar4 = FUN_0044075c();
  if ((uVar4 & 1) == 0) {
    local_a0 = "../../video/video_stream_encoder.cc";
    puStack_98 = (undefined *)0x4898;
    local_80 = &local_a0;
    local_90 = &uStack_a1;
    ppcStack_70 = &pcStack_88;
    local_50 = *(long *)(param_3 + 8);
    pcStack_88 = "AugmentEncodedImage";
    local_78 = " ntp time ";
    ppcStack_48 = &local_78;
    in_stack_ffffffffffffff40 = &DAT_001e5fdb;
    FUN_00623bb0(&DAT_002298c5,"../../video/video_stream_encoder.cc",0x4898);
  }
  if ((local_68 != (char **)0x0) && (**local_68 != '\0')) {
    FUN_0066d348(0x45,*local_68,local_68[1],0,0,0,0,0,
                 (ulong)in_stack_ffffffffffffff40 & 0xffffffffffffff00);
  }
  return;
}


// ===== 009612c0  FUN_009612c0 =====

undefined1  [16] FUN_009612c0(long param_1,long param_2,int *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  int *piVar11;
  undefined1 auVar12 [16];
  long *local_230;
  undefined8 uStack_228;
  code *local_220;
  code *pcStack_218;
  code *local_210;
  undefined1 *local_208;
  undefined1 *local_200;
  char *local_1f8 [4];
  undefined4 local_1d4;
  long *local_170;
  undefined8 uStack_168;
  undefined1 local_be;
  undefined1 local_64 [3];
  undefined1 uStack_61;
  
  if (((DAT_00d806c8 & 1) == 0) && (iVar3 = FUN_0054fdd4(&DAT_00d806c8), iVar3 != 0)) {
    DAT_00d806c0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d806c8);
  }
  if (*DAT_00d806c0 != '\0') {
    local_230 = (long *)(ulong)*(uint *)(param_2 + 0x98);
    local_1f8[0] = "timestamp";
    local_64[0] = 2;
    FUN_0066d348(0x49,DAT_00d806c0,"VCMEncodedFrameCallback::Encoded",0,1,local_1f8,local_64,
                 &local_230,0);
  }
  lVar6 = *(long *)(param_2 + 0x9c);
  if (param_3 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *param_3;
  }
  memcpy(local_1f8,&DAT_00229590,0x180);
  FUN_00961044(local_1f8,param_1,param_2,param_3);
  pcVar1 = local_1f8[0];
  plVar10 = *(long **)(param_1 + 0x2150);
  local_230 = (long *)operator_new(0x28);
  *local_230 = param_1;
  *(int *)(local_230 + 1) = iVar3;
  *(char **)((long)local_230 + 0xc) = pcVar1;
  local_230[3] = (long)(int)lVar6 & (lVar6 << 0x1f) >> 0x3f;
  *(undefined4 *)(local_230 + 4) = local_1d4;
  *(undefined1 *)((long)local_230 + 0x24) = local_be;
  uStack_228 = 0x28;
  local_220 = FUN_005ea56c;
  pcStack_218 = FUN_00965458;
  (**(code **)(*plVar10 + 8))(plVar10,&local_230,local_64,&uStack_61);
  (*local_220)(0,&local_230,&local_230);
  (**(code **)(**(long **)(param_1 + 0xf8) + 0x20))(*(long **)(param_1 + 0xf8),local_1f8,param_3);
  if ((param_3 == (int *)0x0) || (plVar10 = *(long **)(param_1 + 0x2158), plVar10 == (long *)0x0)) {
LAB_00961534:
    piVar4 = param_3;
    piVar11 = (int *)0x0;
  }
  else {
    local_230 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    uStack_228 = 0xffffffffffffffff;
    pcStack_218 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    local_220 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    local_208 = &DAT_aaaaaaaaaaaaaaaa;
    local_210 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    local_200 = &DAT_aaaaaaaaaaaaaaaa;
    (**(code **)(*plVar10 + 0x18))(&local_230,plVar10,local_1f8);
    if ((char)param_3[0x200] == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../video/video_stream_encoder.cc",0x95d,
                   "!codec_specific_info->frame_instrumentation_data.has_value()",&DAT_001fbee0,
                   "CodecSpecificInfo must not have frame_instrumentation_data set.");
    }
    if ((char)local_200 != '\x01') goto LAB_00961534;
    piVar4 = (int *)operator_new(0x808);
    FUN_0085056c(piVar4,param_3);
    FUN_0084fc00(piVar4 + 500,&local_230);
    piVar11 = piVar4;
    if (((char)local_200 == '\x01') && (pcStack_218 != (code *)0x0)) {
      uVar9 = (ulong)(((long)pcStack_218 - (long)local_210 << 0x3d) -
                     ((long)pcStack_218 - (long)local_210)) >> 3;
      if ((ulong)(local_210 + (-8 - ((long)local_210 << 0x3d))) >> 3 <= uVar9) {
        uVar9 = (ulong)(local_210 + (-8 - ((long)local_210 << 0x3d))) >> 3;
      }
      pcVar7 = local_210;
      if ((1 < uVar9) && ((((int)pcStack_218 - (int)local_210 | -(int)local_210) & 7U) == 0)) {
        uVar9 = uVar9 & 0x1ffffffffffffffe;
        pcVar7 = local_210 + uVar9 * -8;
        do {
          uVar9 = uVar9 - 2;
        } while (uVar9 != 0);
      }
      while (pcVar7 != pcStack_218) {
        pcVar7 = pcVar7 + -8;
        if (pcVar7 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      local_210 = pcStack_218;
      operator_delete(pcStack_218);
    }
  }
  auVar12 = (**(code **)(**(long **)(param_1 + 0x50) + 0x10))
                      (*(long **)(param_1 + 0x50),local_1f8,piVar4);
  uVar2 = uStack_168;
  uVar9 = auVar12._8_8_;
  if (local_170 != (long *)0x0) {
    (**(code **)(*local_170 + 8))();
  }
  uVar8 = *(ulong *)(param_2 + 0xc0);
  local_170 = (long *)0x0;
  uStack_168 = 0;
  if ((uVar8 >> 0x20 & 1) == 0) {
    if (piVar4 == (int *)0x0) {
LAB_00961598:
      iVar3 = 0;
      goto LAB_009615ac;
    }
    if (*piVar4 == 1) {
      uVar8 = (ulong)*(byte *)((long)piVar4 + 9);
    }
    else {
      if (*piVar4 != 2) goto LAB_00961598;
      uVar8 = (ulong)*(byte *)((long)piVar4 + 0xd);
    }
  }
  iVar3 = 0;
  if ((int)uVar8 != 0xff) {
    iVar3 = (int)uVar8;
  }
LAB_009615ac:
  uVar5 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
  FUN_009616bc(param_1,local_1f8,uVar5,iVar3,uVar2);
  if ((auVar12._0_4_ == 0) && (0 < (int)*(undefined8 *)(param_1 + 0xc24))) {
    FUN_00d0f7a0(0xffffffff);
    uVar9 = 1;
  }
  if (piVar11 != (int *)0x0) {
    FUN_00850704(piVar11);
    operator_delete(piVar11);
  }
  FUN_007bca94(local_1f8);
  auVar12._8_8_ = uVar9 & 0xff | 0xaaaaaa00;
  return auVar12;
}


// ===== 009616bc  FUN_009616bc =====

void FUN_009616bc(long param_1,long param_2,long param_3,undefined4 param_4,long param_5)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 uStack_219;
  long local_218;
  undefined1 auStack_210 [384];
  long local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  long local_80;
  undefined1 uStack_71;
  long *local_70 [2];
  code *local_60;
  code *pcStack_58;
  
  lVar5 = *(long *)(param_1 + 0x2150);
  lVar1 = FUN_005d6490();
  if (lVar1 == lVar5) {
    if (*(char *)(param_2 + 0x28) == -1) {
      uVar7 = 0xaaaaaa00aaaaaa00;
    }
    else {
      uVar7 = (ulong)(uint)((*(int *)(param_2 + 0x38) - *(int *)(param_2 + 0x30)) * 1000) |
              0xaaaaaa0100000000;
    }
    if (param_5 != 0) {
      FUN_00965a94(param_1 + 0xbd0,param_5,*(int *)(param_2 + 0x18) != 3);
    }
    FUN_00984674(param_1 + 0x12e0,param_2,param_3,uVar7,param_5);
    if (*(long *)(param_1 + 0xc38) != 0) {
      iVar3 = 0;
      if ((*(ulong *)(param_2 + 0x9c) & 0x100000000) != 0) {
        iVar3 = (int)*(ulong *)(param_2 + 0x9c);
      }
      iVar4 = 0;
      if ((*(ulong *)(param_2 + 0xb8) & 0x100000000) != 0) {
        iVar4 = (int)*(ulong *)(param_2 + 0xb8);
      }
      if (iVar3 <= iVar4) {
        iVar3 = iVar4;
      }
      FUN_00969b10(*(long *)(param_1 + 0xc38),param_5,iVar3,param_4);
      return;
    }
  }
  else {
    plVar6 = *(long **)(param_1 + 0x2150);
    local_218 = param_1;
    FUN_007bc958(auStack_210,param_2);
    local_90 = param_3;
    uStack_88 = param_4;
    local_80 = param_5;
    plVar2 = (long *)operator_new(0x1a0);
    *plVar2 = local_218;
    FUN_007bc958(plVar2 + 1,auStack_210);
    plVar2[0x32] = CONCAT44(uStack_84,uStack_88);
    plVar2[0x31] = local_90;
    plVar2[0x33] = local_80;
    local_60 = FUN_00965750;
    pcStack_58 = FUN_00965730;
    local_70[0] = plVar2;
    (**(code **)(*plVar6 + 8))(plVar6,local_70,&uStack_71,&uStack_219);
    (*local_60)(0,local_70,local_70);
    FUN_007bca94(auStack_210);
  }
  return;
}


// ===== 0096188c  FUN_0096188c =====

void FUN_0096188c(long param_1)

{
  FUN_009612c0(param_1 + -8);
  return;
}


// ===== 009618b0  FUN_009618b0 =====

void FUN_009618b0(long param_1,undefined1 param_2)

{
  undefined1 uStack_42;
  undefined1 uStack_41;
  long local_40;
  undefined1 local_38;
  code *local_30;
  code *pcStack_28;
  
  (**(code **)(**(long **)(param_1 + 0x50) + 0x18))();
  local_30 = FUN_004473ec;
  pcStack_28 = FUN_009655fc;
  local_40 = param_1;
  local_38 = param_2;
  (**(code **)(**(long **)(param_1 + 0x2150) + 8))
            (*(long **)(param_1 + 0x2150),&local_40,&uStack_41,&uStack_42);
  (*local_30)(0,&local_40,&local_40);
  return;
}


// ===== 0096193c  FUN_0096193c =====

void FUN_0096193c(long param_1,undefined1 param_2)

{
  long local_50;
  undefined1 local_48;
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  (**(code **)(**(long **)(param_1 + 0x48) + 0x18))();
  local_40 = FUN_004473ec;
  pcStack_38 = FUN_009655fc;
  local_50 = param_1 + -8;
  local_48 = param_2;
  (**(code **)(**(long **)(param_1 + 0x2148) + 8))
            (*(long **)(param_1 + 0x2148),&local_50,&uStack_11,&uStack_12);
  (*local_40)(0,&local_50,&local_50);
  return;
}


// ===== 009619d4  FUN_009619d4 =====

void FUN_009619d4(long param_1,undefined4 param_2,undefined8 *param_3,long param_4)

{
  byte bVar1;
  long *plVar2;
  undefined1 local_70 [24];
  byte local_58;
  void *local_50;
  undefined8 uStack_48;
  long local_40;
  undefined1 *local_18;
  
  local_40 = param_3[2];
  plVar2 = *(long **)(param_1 + 0xf8);
  uStack_48 = param_3[1];
  local_50 = (void *)*param_3;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  bVar1 = *(byte *)(param_4 + 0x18);
  local_70[0] = 0;
  local_58 = 0xff;
  if ((ulong)bVar1 != 0xff) {
    local_18 = local_70;
    (*(code *)(&PTR_FUN_00d3e6f0)[bVar1])(&local_18,param_4);
    local_58 = bVar1;
  }
  (**(code **)(*plVar2 + 0x78))(plVar2,param_2,&local_50,local_70);
  if ((ulong)local_58 != 0xff) {
    (*(code *)(&PTR_FUN_00d3e6c0)[local_58])(&local_18,local_70);
  }
  local_58 = 0xff;
  if (local_40 < 0) {
    operator_delete(local_50);
  }
  return;
}


// ===== 00961ac0  FUN_00961ac0 =====

void FUN_00961ac0(long param_1,undefined4 param_2,undefined8 *param_3,long param_4)

{
  byte bVar1;
  long *plVar2;
  undefined1 local_70 [24];
  byte local_58;
  void *local_50;
  undefined8 uStack_48;
  long local_40;
  undefined1 *local_18;
  
  local_40 = param_3[2];
  plVar2 = *(long **)(param_1 + 0xf0);
  uStack_48 = param_3[1];
  local_50 = (void *)*param_3;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  bVar1 = *(byte *)(param_4 + 0x18);
  local_70[0] = 0;
  local_58 = 0xff;
  if ((ulong)bVar1 != 0xff) {
    local_18 = local_70;
    (*(code *)(&PTR_FUN_00d3e6f0)[bVar1])(&local_18,param_4);
    local_58 = bVar1;
  }
  (**(code **)(*plVar2 + 0x78))(plVar2,param_2,&local_50,local_70);
  if ((ulong)local_58 != 0xff) {
    (*(code *)(&PTR_FUN_00d3e6c0)[local_58])(&local_18,local_70);
  }
  local_58 = 0xff;
  if (local_40 < 0) {
    operator_delete(local_50);
  }
  return;
}


// ===== 00961bac  FUN_00961bac =====

void FUN_00961bac(long param_1,long param_2,long param_3,long param_4,byte param_5,long param_6)

{
  uint uVar1;
  char *pcVar2;
  long lVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  long *local_360 [2];
  code *local_350;
  code *pcStack_348;
  long local_1f0;
  undefined1 uStack_1e2;
  undefined1 uStack_1e1;
  long *local_1e0;
  undefined1 *puStack_1d8;
  code *local_1d0;
  code *pcStack_1c8;
  undefined1 *local_1c0;
  undefined1 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  long local_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar9 = *(long *)(param_2 + 0x2150);
  local_1f0 = param_4;
  lVar6 = FUN_005d6490();
  if (lVar6 != lVar9) {
    plVar10 = *(long **)(param_2 + 0x2150);
    local_1e0 = (long *)operator_new(0x30);
    *local_1e0 = param_2;
    local_1e0[1] = param_3;
    local_1e0[2] = param_4;
    *(byte *)(local_1e0 + 3) = param_5;
    local_1e0[4] = param_6;
    local_1e0[5] = param_1;
    puStack_1d8 = (undefined1 *)0x30;
    local_1d0 = FUN_005ea56c;
    pcStack_1c8 = FUN_00965614;
    (**(code **)(*plVar10 + 8))(plVar10,&local_1e0,local_360,&uStack_1e1);
    (*local_1d0)(0,&local_1e0,&local_1e0);
    goto LAB_00961ff8;
  }
  if (*(char *)(param_2 + 0x3f8) == '\x01') {
    bVar4 = *(long *)(param_2 + 0x3f0) == 0;
  }
  else {
    bVar4 = true;
  }
  if (((param_3 != 0) && (*(long *)(param_2 + 0x68) != 0)) &&
     (plVar10 = *(long **)(param_2 + 0xf0), plVar10 != (long *)0x0)) {
    puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
    local_1e0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    pcStack_1c8 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    local_1d0 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_1c0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
    local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_190 = &DAT_aaaaaaaaaaaaaaaa;
    local_180 = &DAT_aaaaaaaaaaaaaaaa;
    (**(code **)(*plVar10 + 0x18))(&local_1e0,plVar10,&local_1f0);
    if ((((ulong)local_180 & 1) != 0) &&
       ((**(code **)(**(long **)(param_2 + 0x68) + 0x18))(*(long **)(param_2 + 0x68),&local_1e0,0),
       ((ulong)local_180 & 1) != 0)) {
      FUN_007b6d78(&local_1e0);
    }
  }
  uVar7 = FUN_0044075c();
  if ((uVar7 & 1) == 0) {
    FUN_00623bb0(&DAT_002298ce,"../../video/video_stream_encoder.cc",0x4ec8,
                 "OnBitrateUpdated, bitrate ",param_3," link allocation bitrate = ",local_1f0,
                 " packet loss ",param_5," rtt ",param_6);
  }
  if (*(long **)(param_2 + 0x1e8) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0x1e8) + 0x48))((float)param_5 / 256.0);
    (**(code **)(**(long **)(param_2 + 0x1e8) + 0x50))(*(long **)(param_2 + 0x1e8),param_6);
  }
  uVar8 = 0x1e;
  if (*(uint *)(param_2 + 0x200) != 0xffffffff) {
    uVar8 = *(uint *)(param_2 + 0x200);
  }
  if (*(long **)(param_2 + 0x110) != (long *)0x0) {
    uVar7 = (**(code **)(**(long **)(param_2 + 0x110) + 0x38))();
    uVar1 = uVar8;
    if ((uint)uVar7 != 0) {
      uVar1 = (uint)uVar7;
    }
    if ((uVar7 & 0x100000000) != 0) {
      uVar8 = uVar1;
    }
  }
  FUN_00965e60((float)((param_3 + 500) / 1000),(float)uVar8,param_2 + 0xbd0);
  memcpy(&local_1e0,&DAT_00229710,0x170);
  FUN_007cbe28(local_360);
  FUN_007ba920((double)uVar8,&local_1e0,local_360,local_1f0);
  local_78 = param_3;
  FUN_0095e508(local_360,param_2,&local_1e0);
  FUN_0095d82c(param_2,local_360);
  FUN_007baa68(local_360);
  if ((param_3 != 0) &&
     (*(int *)(param_2 + 0x278) = (int)param_3, (*(byte *)(param_2 + 0x27c) & 1) == 0)) {
    *(undefined1 *)(param_2 + 0x27c) = 1;
  }
  FUN_009842ec(param_2 + 0x12e0,param_3);
  if ((bool)(param_3 == 0 ^ bVar4)) {
    uVar7 = FUN_00417e08();
    if ((uVar7 & 1) == 0) {
      pcVar2 = "suspended";
      if (param_3 != 0) {
        pcVar2 = "not suspended";
      }
      FUN_00623bb0(&DAT_001f4ed3,"../../video/video_stream_encoder.cc",0x4f89,
                   "Video suspend state changed to: ",pcVar2);
    }
    (**(code **)(**(long **)(param_2 + 0xf8) + 0x68))(*(long **)(param_2 + 0xf8),param_3 == 0);
    if (param_3 != 0) {
      if (*(char *)(param_2 + 0x510) == '\x01') {
        uVar5 = FUN_007bf404(param_2 + 0x430);
        uVar7 = FUN_0095fc48(param_2,uVar5);
        if ((uVar7 & 1) == 0) {
          lVar6 = (**(code **)(**(long **)(param_2 + 0x28) + 0x10))();
          if (lVar6 - *(long *)(param_2 + 0x518) < 1000000) {
            if ((*(byte *)(param_2 + 0x510) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                        );
            }
            FUN_0095fdb0(param_2,param_2 + 0x430);
          }
          if (*(char *)(param_2 + 0x510) == '\x01') {
            FUN_007bf020(param_2 + 0x430);
            *(undefined1 *)(param_2 + 0x510) = 0;
          }
        }
        else if ((*(byte *)(param_2 + 0x510) & 1) == 0) goto LAB_00961f08;
      }
      else {
LAB_00961f08:
        if (*(char *)(param_2 + 0x400) == '\x01') {
          lVar6 = *(long *)(param_2 + 0x2148);
          plVar10 = *(long **)(param_2 + 0x40);
          if (lVar6 != 0) {
            FUN_00d0f740(1,lVar6);
          }
          local_360[0] = (long *)operator_new(0x30);
          *local_360[0] = lVar6;
          local_360[0][4] = (long)FUN_004473ec;
          local_360[0][5] = (long)FUN_00965324;
          local_360[0][2] = param_2;
          local_350 = FUN_005db390;
          pcStack_348 = FUN_005db348;
          (**(code **)(*plVar10 + 8))(plVar10,local_360,&uStack_1e1,&uStack_1e2);
          (*local_350)(0,local_360,local_360);
        }
      }
    }
  }
  FUN_007baa68(&local_1e0);
LAB_00961ff8:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00962048  FUN_00962048 =====

/* WARNING: Removing unreachable block (ram,0x009622e0) */

void FUN_00962048(long param_1,long *param_2,undefined8 param_3,long *param_4)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 uStack_a1;
  undefined8 local_a0;
  long lStack_98;
  undefined8 local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  undefined1 uStack_61;
  long *local_60 [2];
  code *local_50;
  code *pcStack_48;
  
  uVar3 = FUN_00417e08();
  if ((uVar3 & 1) == 0) {
    if ((long *)*param_4 == (long *)0x0) {
      local_90 = CONCAT17(6,(undefined7)local_90);
      if ((&local_a0 < &UNK_001acb62) && (&UNK_001acb61 < (undefined *)((ulong)&local_a0 | 6))) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                  );
      }
      uVar3 = (ulong)local_a0 >> 0x30;
      local_a0 = (void *)CONCAT26((ushort)uVar3 & 0xff00,0x3e6c00000000);
      local_a0 = (void *)CONCAT44(local_a0._4_4_,0x6c756e3c);
    }
    else {
      (**(code **)(*(long *)*param_4 + 0x20))(&local_a0);
    }
    FUN_0097c9ac(local_60,param_2);
    FUN_00623bb0("\r\t\n\t\n","../../video/video_stream_encoder.cc",0x51b9,
                 "Updating sink restrictions from ",&local_a0,&DAT_0019fec4,local_60);
    if (local_90 < 0) {
      operator_delete(local_a0);
      plVar6 = *(long **)(param_1 + 0x110);
      goto joined_r0x00962124;
    }
  }
  plVar6 = *(long **)(param_1 + 0x110);
joined_r0x00962124:
  if (plVar6 != (long *)0x0) {
    puVar4 = (undefined8 *)FUN_0097cbb0(param_2);
    (**(code **)(*plVar6 + 0x50))(plVar6,*puVar4,puVar4[1]);
  }
  plVar6 = (long *)(param_1 + 0x2110);
  if (*(char *)(param_1 + 0x2140) == '\x01') {
    plVar5 = (long *)FUN_0097cb9c(plVar6);
    lVar7 = *plVar5;
    bVar8 = *(byte *)(plVar5 + 1);
  }
  else {
    bVar8 = 0;
    lVar7 = 0;
  }
  plVar5 = (long *)FUN_0097cb9c(param_2);
  bVar1 = *(byte *)(plVar5 + 1);
  bVar2 = bVar8 != bVar1;
  if ((bVar1 & bVar8) != 0) {
    if ((bVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    bVar2 = lVar7 != *plVar5;
  }
  if (*(char *)(param_1 + 0x2140) == '\x01') {
    lVar11 = param_2[3];
    lVar10 = param_2[2];
    lVar9 = param_2[5];
    lVar7 = param_2[4];
    lVar12 = *param_2;
    *(long *)(param_1 + 0x2118) = param_2[1];
    *plVar6 = lVar12;
    *(long *)(param_1 + 0x2128) = lVar11;
    *(long *)(param_1 + 0x2120) = lVar10;
    *(long *)(param_1 + 0x2138) = lVar9;
    *(long *)(param_1 + 0x2130) = lVar7;
  }
  else {
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    lVar11 = param_2[3];
    lVar10 = param_2[2];
    lVar9 = param_2[5];
    lVar7 = param_2[4];
    lVar13 = param_2[1];
    lVar12 = *param_2;
    *(undefined1 *)(param_1 + 0x2140) = 1;
    *(long *)(param_1 + 0x2128) = lVar11;
    *(long *)(param_1 + 0x2120) = lVar10;
    *(long *)(param_1 + 0x2138) = lVar9;
    *(long *)(param_1 + 0x2130) = lVar7;
    *(long *)(param_1 + 0x2118) = lVar13;
    *plVar6 = lVar12;
  }
  bVar2 = (bool)(bVar2 ^ 1);
  if (*(long *)(param_1 + 0x1e8) == 0) {
    bVar2 = true;
  }
  if ((!bVar2) && (uVar3 = FUN_00849ac0(param_1 + 0x118), (uVar3 & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x204) = 1;
  }
  lVar7 = *(long *)(param_1 + 0x2148);
  plVar6 = *(long **)(param_1 + 0x40);
  if (lVar7 != 0) {
    FUN_00d0f740(1,lVar7);
  }
  lStack_98 = param_2[1];
  local_a0 = (void *)*param_2;
  lStack_88 = param_2[3];
  local_90 = param_2[2];
  lStack_78 = param_2[5];
  local_80 = param_2[4];
  plVar5 = (long *)operator_new(0x38);
  *plVar5 = param_1;
  plVar5[2] = lStack_98;
  plVar5[1] = (long)local_a0;
  plVar5[4] = lStack_88;
  plVar5[3] = local_90;
  plVar5[6] = lStack_78;
  plVar5[5] = local_80;
  local_60[0] = (long *)operator_new(0x30);
  *local_60[0] = lVar7;
  local_60[0][4] = (long)FUN_005ea56c;
  local_60[0][5] = (long)FUN_009656d4;
  local_60[0][2] = (long)plVar5;
  local_60[0][3] = 0x38;
  local_50 = FUN_005db390;
  pcStack_48 = FUN_005db348;
  (**(code **)(*plVar6 + 8))(plVar6,local_60,&uStack_61,&uStack_a1);
  (*local_50)(0,local_60,local_60);
  return;
}


// ===== 00962350  FUN_00962350 =====

void FUN_00962350(long param_1)

{
  FUN_00962048(param_1 + -0x10);
  return;
}


// ===== 0096235c  FUN_0096235c =====

void FUN_0096235c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x962364);
  (*pcVar1)();
}


// ===== 00962364  FUN_00962364 =====

void FUN_00962364(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00962370  FUN_00962370 =====

void FUN_00962370(long param_1)

{
  FUN_0095e9f8(*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 0096237c  FUN_0096237c =====

void FUN_0096237c(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_1 + 8) + 0xf8);
                    /* WARNING: Could not recover jumptable at 0x00962394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}


// ===== 00962398  FUN_00962398 =====

void FUN_00962398(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(lVar3 + 0x2148);
  plVar1 = *(long **)(lVar3 + 0x40);
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2);
  }
  local_50[0] = (long *)operator_new(0x30);
  *local_50[0] = lVar2;
  local_50[0][4] = (long)FUN_004473ec;
  local_50[0][5] = (long)FUN_00965324;
  local_50[0][2] = lVar3;
  local_40 = FUN_005db390;
  pcStack_38 = FUN_005db348;
  (**(code **)(*plVar1 + 8))(plVar1,local_50,&uStack_11,&uStack_12);
  (*local_40)(0,local_50,local_50);
  return;
}


// ===== 00962450  FUN_00962450 =====

undefined4 * FUN_00962450(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *pvVar4;
  size_t __n;
  ulong uVar5;
  ulong uVar6;
  void *__dest;
  undefined4 *puVar7;
  
  puVar7 = (undefined4 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar7 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_007bfbbc();
  }
  uVar5 = param_1[2] - *param_1;
  uVar6 = (long)uVar5 >> 2;
  if (uVar6 <= uVar1) {
    uVar6 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar5) {
    uVar6 = 0x1fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar3 = operator_new(uVar6 << 3);
    puVar7 = (undefined4 *)((long)pvVar3 + (long)puVar7);
  }
  if (puVar7 != (undefined4 *)0x0) {
    uVar2 = *param_3;
    *puVar7 = *param_2;
    puVar7[1] = uVar2;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar7 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar4 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar7 + 2);
    param_1[2] = (long)((long)pvVar3 + uVar6 * 8);
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
    return puVar7 + 2;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00962554  FUN_00962554 =====

undefined8 * FUN_00962554(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  
  puVar12 = param_1 + 1;
  uVar11 = *param_1;
  if ((uVar11 & 1) == 0) {
    uVar10 = 8;
  }
  else {
    if ((param_1[2] >> 0x3c & 7) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar12 = (ulong *)param_1[1];
    uVar10 = param_1[2] << 1;
  }
  uVar13 = uVar11 >> 1;
  pvVar3 = operator_new(uVar10 << 3);
  puVar1 = (undefined8 *)((long)pvVar3 + uVar13 * 8);
  if (puVar1 == (undefined8 *)0x0) {
LAB_009626cc:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *puVar1 = *param_2;
  if (uVar13 != 0) {
    uVar7 = uVar13 - 1;
    uVar14 = (ulong)-(long)pvVar3 >> 3;
    if (uVar7 <= (ulong)-(long)pvVar3 >> 3) {
      uVar14 = uVar7;
    }
    if (uVar14 < 0x1e) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      uVar9 = (ulong)-(long)pvVar3 >> 3;
      if (uVar7 <= uVar9) {
        uVar9 = uVar7;
      }
      if (((((-(long)pvVar3 & 7U) == 0) && (pvVar3 <= (void *)((long)pvVar3 + uVar9 * 8))) &&
          (puVar12 <= puVar12 + uVar9)) && (0x1f < (ulong)((long)pvVar3 - (long)puVar12))) {
        puVar6 = (ulong *)((long)pvVar3 + 0x10);
        uVar7 = uVar14 + 1 & 3;
        uVar9 = 4;
        if (uVar7 != 0) {
          uVar9 = uVar7;
        }
        puVar8 = puVar12 + 2;
        lVar4 = (uVar14 + 1) - uVar9;
        puVar12 = puVar12 + lVar4;
        lVar5 = lVar4;
        do {
          puVar2 = puVar8 + -1;
          uVar14 = puVar8[-2];
          uVar9 = puVar8[1];
          uVar7 = *puVar8;
          lVar5 = lVar5 + -4;
          puVar8 = puVar8 + 4;
          puVar6[-1] = *puVar2;
          puVar6[-2] = uVar14;
          puVar6[1] = uVar9;
          *puVar6 = uVar7;
          puVar6 = puVar6 + 4;
        } while (lVar5 != 0);
      }
    }
    lVar5 = uVar13 - lVar4;
    puVar6 = (ulong *)((long)pvVar3 + lVar4 * 8);
    do {
      if (puVar6 == (ulong *)0x0) goto LAB_009626cc;
      lVar5 = lVar5 + -1;
      *puVar6 = *puVar12;
      puVar6 = puVar6 + 1;
      puVar12 = puVar12 + 1;
    } while (lVar5 != 0);
  }
  if ((uVar11 & 1) != 0) {
    operator_delete((void *)param_1[1]);
    uVar11 = *param_1;
  }
  param_1[1] = (ulong)pvVar3;
  param_1[2] = uVar10;
  *param_1 = (uVar11 | 1) + 2;
  return puVar1;
}


// ===== 009626e4  FUN_009626e4 =====

undefined8 * FUN_009626e4(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  
  puVar12 = param_1 + 1;
  uVar11 = *param_1;
  if ((uVar11 & 1) == 0) {
    uVar10 = 8;
  }
  else {
    if ((param_1[2] >> 0x3c & 7) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar12 = (ulong *)param_1[1];
    uVar10 = param_1[2] << 1;
  }
  uVar13 = uVar11 >> 1;
  pvVar3 = operator_new(uVar10 << 3);
  puVar1 = (undefined8 *)((long)pvVar3 + uVar13 * 8);
  if (puVar1 == (undefined8 *)0x0) {
LAB_0096285c:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *puVar1 = *param_2;
  if (uVar13 != 0) {
    uVar7 = uVar13 - 1;
    uVar14 = (ulong)-(long)pvVar3 >> 3;
    if (uVar7 <= (ulong)-(long)pvVar3 >> 3) {
      uVar14 = uVar7;
    }
    if (uVar14 < 0x1e) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      uVar9 = (ulong)-(long)pvVar3 >> 3;
      if (uVar7 <= uVar9) {
        uVar9 = uVar7;
      }
      if (((((-(long)pvVar3 & 7U) == 0) && (pvVar3 <= (void *)((long)pvVar3 + uVar9 * 8))) &&
          (puVar12 <= puVar12 + uVar9)) && (0x1f < (ulong)((long)pvVar3 - (long)puVar12))) {
        puVar6 = (ulong *)((long)pvVar3 + 0x10);
        uVar7 = uVar14 + 1 & 3;
        uVar9 = 4;
        if (uVar7 != 0) {
          uVar9 = uVar7;
        }
        puVar8 = puVar12 + 2;
        lVar4 = (uVar14 + 1) - uVar9;
        puVar12 = puVar12 + lVar4;
        lVar5 = lVar4;
        do {
          puVar2 = puVar8 + -1;
          uVar14 = puVar8[-2];
          uVar9 = puVar8[1];
          uVar7 = *puVar8;
          lVar5 = lVar5 + -4;
          puVar8 = puVar8 + 4;
          puVar6[-1] = *puVar2;
          puVar6[-2] = uVar14;
          puVar6[1] = uVar9;
          *puVar6 = uVar7;
          puVar6 = puVar6 + 4;
        } while (lVar5 != 0);
      }
    }
    lVar5 = uVar13 - lVar4;
    puVar6 = (ulong *)((long)pvVar3 + lVar4 * 8);
    do {
      if (puVar6 == (ulong *)0x0) goto LAB_0096285c;
      lVar5 = lVar5 + -1;
      *puVar6 = *puVar12;
      puVar6 = puVar6 + 1;
      puVar12 = puVar12 + 1;
    } while (lVar5 != 0);
  }
  if ((uVar11 & 1) != 0) {
    operator_delete((void *)param_1[1]);
    uVar11 = *param_1;
  }
  param_1[1] = (ulong)pvVar3;
  param_1[2] = uVar10;
  *param_1 = (uVar11 | 1) + 2;
  return puVar1;
}


// ===== 00962874  FUN_00962874 =====

void FUN_00962874(ulong *param_1,undefined1 *param_2,ulong param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined1 *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong uVar18;
  void *pvVar19;
  ulong uVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined8 uVar25;
  
  puVar6 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar9 = 0x10;
    if (0x10 < param_3) goto LAB_00962930;
LAB_009628b0:
    uVar10 = *param_1 >> 1;
    uVar9 = param_3;
    if (uVar10 <= param_3) {
      uVar9 = uVar10;
    }
    uVar4 = 0;
    if (uVar10 <= param_3) {
      uVar4 = param_3 - uVar10;
    }
    if (uVar9 != 0) {
      uVar14 = 0;
      if (((0x1f < uVar9) && (param_2 <= param_2 + (uVar9 - 1))) &&
         (0x1f < (ulong)((long)puVar6 - (long)param_2))) {
        uVar14 = uVar9 & 0x7fffffffffffffe0;
        puVar16 = puVar6 + 2;
        puVar17 = (ulong *)(param_2 + 0x10);
        param_2 = param_2 + uVar14;
        uVar18 = uVar9 & 0x7fffffffffffffe0;
        do {
          puVar1 = puVar17 + -1;
          uVar20 = puVar17[-2];
          uVar24 = puVar17[1];
          uVar22 = *puVar17;
          uVar18 = uVar18 - 0x20;
          puVar17 = puVar17 + 4;
          puVar16[-1] = *puVar1;
          puVar16[-2] = uVar20;
          puVar16[1] = uVar24;
          *puVar16 = uVar22;
          puVar16 = puVar16 + 4;
        } while (uVar18 != 0);
        if (uVar9 == uVar14) goto LAB_00962974;
      }
      lVar7 = uVar9 - uVar14;
      puVar11 = param_2;
      puVar15 = (undefined1 *)((long)puVar6 + uVar14);
      do {
        param_2 = puVar11 + 1;
        lVar7 = lVar7 + -1;
        *puVar15 = *puVar11;
        puVar11 = param_2;
        puVar15 = puVar15 + 1;
      } while (lVar7 != 0);
    }
LAB_00962974:
    if (param_3 <= uVar10) {
      uVar10 = *param_1;
      goto LAB_00962a5c;
    }
    uVar9 = 0;
    pvVar3 = (void *)((long)puVar6 + uVar10);
    pvVar19 = (void *)0x0;
  }
  else {
    puVar6 = (ulong *)param_1[1];
    uVar9 = param_1[2];
    if (param_3 <= uVar9) goto LAB_009628b0;
LAB_00962930:
    uVar9 = uVar9 * 2;
    if (uVar9 < param_3 || uVar9 - param_3 == 0) {
      uVar9 = param_3;
    }
    pvVar3 = operator_new(uVar9);
    uVar4 = param_3;
    pvVar19 = pvVar3;
  }
  uVar14 = -(long)pvVar3;
  uVar18 = uVar4 - 1;
  uVar10 = uVar18;
  if (uVar14 < uVar18) {
    uVar10 = -(long)pvVar3;
  }
  uVar10 = uVar10 + 1;
  if (uVar10 < 0x21) {
    lVar7 = 0;
  }
  else {
    if (uVar18 <= uVar14) {
      uVar14 = uVar18;
    }
    lVar7 = 0;
    if ((param_2 <= param_2 + uVar14) && (0x1f < (ulong)((long)pvVar3 - (long)param_2))) {
      puVar13 = (undefined8 *)(param_2 + 0x10);
      uVar14 = 0x20;
      if ((uVar10 & 0x1f) != 0) {
        uVar14 = uVar10 & 0x1f;
      }
      puVar12 = (undefined8 *)((long)pvVar3 + 0x10);
      lVar7 = uVar10 - uVar14;
      param_2 = param_2 + lVar7;
      lVar5 = lVar7;
      do {
        puVar2 = puVar13 + -1;
        uVar21 = puVar13[-2];
        uVar25 = puVar13[1];
        uVar23 = *puVar13;
        lVar5 = lVar5 + -0x20;
        puVar13 = puVar13 + 4;
        puVar12[-1] = *puVar2;
        puVar12[-2] = uVar21;
        puVar12[1] = uVar25;
        *puVar12 = uVar23;
        puVar12 = puVar12 + 4;
      } while (lVar5 != 0);
    }
  }
  lVar5 = uVar4 - lVar7;
  lVar8 = -((long)pvVar3 + lVar7);
  puVar11 = (undefined1 *)((long)pvVar3 + lVar7);
  do {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    lVar5 = lVar5 + -1;
    lVar8 = lVar8 + -1;
    *puVar11 = *param_2;
    puVar11 = puVar11 + 1;
    param_2 = param_2 + 1;
  } while (lVar5 != 0);
  uVar10 = *param_1;
  if (pvVar19 != (void *)0x0) {
    if ((uVar10 & 1) != 0) {
      operator_delete((void *)param_1[1]);
      uVar10 = *param_1;
    }
    uVar10 = uVar10 | 1;
    param_1[1] = (ulong)pvVar19;
    param_1[2] = uVar9;
  }
LAB_00962a5c:
  *param_1 = uVar10 & 1 | param_3 << 1;
  return;
}


// ===== 00962a90  FUN_00962a90 =====

void FUN_00962a90(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

{
  size_t __n;
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  size_t __n_00;
  void *pvVar6;
  
  uVar2 = param_1[2];
  pvVar6 = (void *)*param_1;
  if ((ulong)((long)(uVar2 - (long)pvVar6) >> 4) < param_4) {
    if (pvVar6 == (void *)0x0) {
LAB_00962c34:
      if (param_4 >> 0x3c == 0) {
        uVar5 = (long)uVar2 >> 3;
        if ((ulong)((long)uVar2 >> 3) <= param_4) {
          uVar5 = param_4;
        }
        if (0x7fffffffffffffef < uVar2) {
          uVar5 = 0xfffffffffffffff;
        }
        if (uVar5 >> 0x3c == 0) {
          pvVar6 = operator_new(uVar5 * 0x10);
          *param_1 = pvVar6;
          param_1[1] = pvVar6;
          param_1[2] = (void *)((long)pvVar6 + uVar5 * 0x10);
          memcpy(pvVar6,param_2,param_3 - (long)param_2);
          lVar1 = (long)pvVar6 + (param_3 - (long)param_2);
          goto LAB_00962c90;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_007baaec();
    }
    pvVar3 = (void *)param_1[1];
    uVar5 = (ulong)((long)pvVar3 + (-0x10 - ((long)pvVar3 << 0x3c))) >> 4;
    uVar2 = (ulong)(((long)pvVar6 - (long)pvVar3 << 0x3c) - ((long)pvVar6 - (long)pvVar3)) >> 4;
    if (uVar5 <= uVar2) {
      uVar2 = uVar5;
    }
    if ((1 < uVar2) && ((((int)pvVar6 - (int)pvVar3 | -(int)pvVar3) & 0xfU) == 0)) {
      uVar2 = uVar2 & 0xffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar2 * -0x10);
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    do {
      if (pvVar3 == pvVar6) {
        param_1[1] = pvVar6;
        operator_delete(pvVar6);
        uVar2 = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        goto LAB_00962c34;
      }
      pvVar3 = (void *)((long)pvVar3 + -0x10);
    } while (pvVar3 != (void *)0x0);
  }
  else {
    __n = param_1[1] - (long)pvVar6;
    if ((ulong)((long)__n >> 4) < param_4) {
      memmove(pvVar6,param_2,__n);
      pvVar6 = (void *)param_1[1];
      __n_00 = param_3 - (long)((long)param_2 + __n);
      memmove(pvVar6,(void *)((long)param_2 + __n),__n_00);
      lVar1 = (long)pvVar6 + __n_00;
LAB_00962c90:
      param_1[1] = lVar1;
      return;
    }
    memmove(pvVar6,param_2,param_3 - (long)param_2);
    lVar1 = param_1[1];
    lVar4 = (long)pvVar6 + (param_3 - (lVar1 + (long)param_2));
    uVar2 = (ulong)((lVar4 << 0x3c) - lVar4) >> 4;
    uVar5 = (lVar1 - (lVar1 << 0x3c)) - 0x10U >> 4;
    if (uVar5 <= uVar2) {
      uVar2 = uVar5;
    }
    lVar4 = (long)pvVar6 + (param_3 - (long)param_2);
    if ((1 < uVar2) &&
       (((((int)pvVar6 + (int)param_3) - ((int)lVar1 + (int)param_2) | -(int)lVar1) & 0xfU) == 0)) {
      uVar2 = uVar2 & 0xffffffffffffffe;
      lVar1 = lVar1 + uVar2 * -0x10;
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    do {
      if (lVar1 == lVar4) {
        param_1[1] = lVar4;
        return;
      }
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00962cb8  FUN_00962cb8 =====

void FUN_00962cb8(ulong *param_1,undefined4 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  bool bVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  undefined4 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong *puVar18;
  void *pvVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined8 uVar24;
  ulong uVar25;
  
  puVar9 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar7 = 5;
    if (5 < param_3) goto LAB_00962d48;
LAB_00962cf4:
    uVar8 = *param_1 >> 1;
    pvVar4 = (void *)((long)puVar9 + uVar8 * 4);
    bVar3 = uVar8 <= param_3;
    uVar7 = param_3;
    if (bVar3) {
      uVar7 = uVar8;
    }
    uVar5 = 0;
    if (bVar3) {
      uVar5 = param_3 - uVar8;
    }
    if (!bVar3 || param_3 - uVar8 == 0) {
      pvVar4 = (void *)0x0;
    }
    if (uVar7 != 0) {
      if (uVar7 < 0x18) {
LAB_00962d1c:
        uVar16 = 0;
      }
      else {
        uVar12 = uVar7 - 1;
        if (((((ulong *)((long)puVar9 + uVar12 * 4) < puVar9) || (param_2 + uVar12 < param_2)) ||
            (uVar12 >> 0x3e != 0)) || ((ulong)((long)puVar9 - (long)param_2) < 0x20))
        goto LAB_00962d1c;
        uVar16 = uVar7 & 0x7ffffffffffffff8;
        puVar17 = (ulong *)(param_2 + 4);
        puVar18 = puVar9 + 2;
        param_2 = param_2 + uVar16;
        uVar12 = uVar7 & 0x7ffffffffffffff8;
        do {
          puVar2 = puVar17 + -1;
          uVar21 = puVar17[-2];
          uVar25 = puVar17[1];
          uVar23 = *puVar17;
          uVar12 = uVar12 - 8;
          puVar17 = puVar17 + 4;
          puVar18[-1] = *puVar2;
          puVar18[-2] = uVar21;
          puVar18[1] = uVar25;
          *puVar18 = uVar23;
          puVar18 = puVar18 + 4;
        } while (uVar12 != 0);
        if (uVar7 == uVar16) goto LAB_00962d74;
      }
      lVar11 = uVar7 - uVar16;
      puVar10 = (undefined4 *)((long)puVar9 + uVar16 * 4);
      puVar14 = param_2;
      do {
        param_2 = puVar14 + 1;
        lVar11 = lVar11 + -1;
        *puVar10 = *puVar14;
        puVar10 = puVar10 + 1;
        puVar14 = param_2;
      } while (lVar11 != 0);
    }
LAB_00962d74:
    if (param_3 <= uVar8) {
      uVar8 = *param_1;
      goto LAB_00962e78;
    }
    uVar7 = 0;
    pvVar19 = (void *)0x0;
  }
  else {
    puVar9 = (ulong *)param_1[1];
    uVar7 = param_1[2];
    if (param_3 <= uVar7) goto LAB_00962cf4;
LAB_00962d48:
    uVar7 = uVar7 * 2;
    if (uVar7 < param_3 || uVar7 - param_3 == 0) {
      uVar7 = param_3;
    }
    if (uVar7 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar4 = operator_new(uVar7 << 2);
    uVar5 = param_3;
    pvVar19 = pvVar4;
  }
  uVar12 = uVar5 - 1;
  uVar8 = (ulong)-(long)pvVar4 >> 2;
  if (uVar12 <= (ulong)-(long)pvVar4 >> 2) {
    uVar8 = uVar12;
  }
  if (uVar8 < 0x20) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    uVar16 = (ulong)-(long)pvVar4 >> 2;
    if (uVar12 <= uVar16) {
      uVar16 = uVar12;
    }
    if ((((-(long)pvVar4 & 3U) == 0) && (pvVar4 <= (void *)((long)pvVar4 + uVar16 * 4))) &&
       ((param_2 <= param_2 + uVar16 && (0x1f < (ulong)((long)pvVar4 - (long)param_2))))) {
      puVar15 = (undefined8 *)((long)pvVar4 + 0x10);
      uVar12 = uVar8 + 1 & 7;
      uVar16 = 8;
      if (uVar12 != 0) {
        uVar16 = uVar12;
      }
      puVar13 = (undefined8 *)(param_2 + 4);
      lVar11 = (uVar8 + 1) - uVar16;
      param_2 = param_2 + lVar11;
      lVar6 = lVar11;
      do {
        puVar1 = puVar13 + -1;
        uVar20 = puVar13[-2];
        uVar24 = puVar13[1];
        uVar22 = *puVar13;
        lVar6 = lVar6 + -8;
        puVar13 = puVar13 + 4;
        puVar15[-1] = *puVar1;
        puVar15[-2] = uVar20;
        puVar15[1] = uVar24;
        *puVar15 = uVar22;
        puVar15 = puVar15 + 4;
      } while (lVar6 != 0);
    }
  }
  lVar6 = uVar5 - lVar11;
  puVar10 = (undefined4 *)((long)pvVar4 + lVar11 * 4);
  do {
    if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    lVar6 = lVar6 + -1;
    *puVar10 = *param_2;
    puVar10 = puVar10 + 1;
    param_2 = param_2 + 1;
  } while (lVar6 != 0);
  uVar8 = *param_1;
  if (pvVar19 != (void *)0x0) {
    if ((uVar8 & 1) != 0) {
      operator_delete((void *)param_1[1]);
      uVar8 = *param_1;
    }
    uVar8 = uVar8 | 1;
    param_1[1] = (ulong)pvVar19;
    param_1[2] = uVar7;
  }
LAB_00962e78:
  *param_1 = uVar8 & 1 | param_3 << 1;
  return;
}


// ===== 00962f20  FUN_00962f20 =====

void FUN_00962f20(long *param_1)

{
  if (*param_1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00962f50  FUN_00962f50 =====

void FUN_00962f50(undefined8 *param_1,undefined1 *param_2)

{
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    *(undefined1 *)*param_1 = *param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00962f88  FUN_00962f88 =====

void FUN_00962f88(long *param_1,undefined8 *param_2)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    *(undefined8 *)*param_1 = *param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00962fc0  FUN_00962fc0 =====

void FUN_00962fc0(long *param_1,undefined8 *param_2)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    *(undefined8 *)*param_1 = *param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00962ff8  FUN_00962ff8 =====

void FUN_00962ff8(long *param_1,undefined8 *param_2)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    *(undefined8 *)*param_1 = *param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00963030  FUN_00963030 =====

void FUN_00963030(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00963078  FUN_00963078 =====

void FUN_00963078(void *param_1)

{
  FUN_00979968();
  operator_delete(param_1);
  return;
}


// ===== 009630a8  FUN_009630a8 =====

undefined4 FUN_009630a8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


// ===== 009630b4  FUN_009630b4 =====

void FUN_009630b4(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x38);
  return;
}


// ===== 009630d8  FUN_009630d8 =====

bool FUN_009630d8(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 7);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00963130  FUN_00963130 =====

int FUN_00963130(undefined8 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_00d3e558;
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 2));
  return iVar1;
}


// ===== 00963144  FUN_00963144 =====

void FUN_00963144(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3e558;
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 2));
  operator_delete(param_1);
  return;
}


// ===== 00963180  FUN_00963180 =====

bool FUN_00963180(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x38) == 1;
}


// ===== 00963198  FUN_00963198 =====

void FUN_00963198(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  puVar1 = param_1 + 2;
  uVar2 = *param_1;
  if ((uVar2 & 1) != 0) {
    puVar1 = (ulong *)*puVar1;
  }
  uVar4 = uVar2 >> 1;
  if (uVar4 != 0) {
    puVar1 = puVar1 + uVar4 * 4;
    do {
      puVar3 = puVar1 + -4;
      if (puVar3 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      uVar4 = uVar4 - 1;
      (*(code *)puVar1[-2])(0,puVar3,puVar3);
      puVar1 = puVar3;
    } while (uVar4 != 0);
    uVar2 = *param_1;
  }
  if ((uVar2 & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[2]);
  return;
}


// ===== 0096324c  FUN_0096324c =====

void FUN_0096324c(long *param_1)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  
  lVar10 = *param_1;
  uVar9 = *(undefined8 *)(lVar10 + 0x12b0);
  pvVar3 = operator_new(0xe8);
  FUN_00979ebc(pvVar3,uVar9);
  plVar4 = *(long **)(lVar10 + 0x12b8);
  *(void **)(lVar10 + 0x12b8) = pvVar3;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
    pvVar3 = *(void **)(lVar10 + 0x12b8);
  }
  lVar1 = lVar10 + 0x12e0;
  FUN_00983594(lVar1,pvVar3,*(undefined8 *)(lVar10 + 0x12b0));
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = lVar10 + 0x12e8;
  }
  (**(code **)(**(long **)(lVar10 + 0x12b8) + 0x10))(*(long **)(lVar10 + 0x12b8),lVar2);
  FUN_0097d1c8(*(undefined8 *)(lVar10 + 0x12b0),lVar1);
  FUN_0097d1c8(*(undefined8 *)(lVar10 + 0x12b0),lVar10 + 0x10);
  FUN_009838c8(lVar1);
  FUN_00983d68(&local_48,lVar1);
  pvVar3 = *(void **)(lVar10 + 0x12c8);
  if (pvVar3 != (void *)0x0) {
    pvVar5 = *(void **)(lVar10 + 0x12d0);
    uVar7 = (ulong)((long)pvVar5 + (-8 - ((long)pvVar5 << 0x3d))) >> 3;
    uVar6 = (ulong)(((long)pvVar3 - (long)pvVar5 << 0x3d) - ((long)pvVar3 - (long)pvVar5)) >> 3;
    if (uVar7 <= uVar6) {
      uVar6 = uVar7;
    }
    if ((1 < uVar6) && ((((int)pvVar3 - (int)pvVar5 | -(int)pvVar5) & 7U) == 0)) {
      uVar6 = uVar6 & 0x1ffffffffffffffe;
      pvVar5 = (void *)((long)pvVar5 + uVar6 * -8);
      do {
        uVar6 = uVar6 - 2;
      } while (uVar6 != 0);
    }
    while (pvVar5 != pvVar3) {
      pvVar5 = (void *)((long)pvVar5 + -8);
      if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    *(void **)(lVar10 + 0x12d0) = pvVar3;
    operator_delete(pvVar3);
  }
  *(undefined8 **)(lVar10 + 0x12c8) = local_48;
  *(undefined8 **)(lVar10 + 0x12d0) = local_40;
  *(undefined8 *)(lVar10 + 0x12d8) = local_38;
  for (puVar8 = local_48; puVar8 != local_40; puVar8 = puVar8 + 1) {
    FUN_0097d3a0(*(undefined8 *)(lVar10 + 0x12b0),*puVar8);
  }
  return;
}


// ===== 009633dc  FUN_009633dc =====

void FUN_009633dc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *local_38;
  
  lVar3 = *(long *)*param_1;
  if (*(long *)(lVar3 + 0x12b8) == 0) goto LAB_00963540;
  FUN_0097d230(*(undefined8 *)(lVar3 + 0x12b0),lVar3 + 0x10);
  lVar1 = lVar3 + 0x12e0;
  FUN_0097d230(*(undefined8 *)(lVar3 + 0x12b0),lVar1);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = lVar3 + 0x12e8;
  }
  (**(code **)(**(long **)(lVar3 + 0x12b8) + 0x18))(*(long **)(lVar3 + 0x12b8),lVar2);
  FUN_00983a78(lVar1);
  puVar6 = *(undefined8 **)(lVar3 + 0x12d0);
  for (puVar4 = *(undefined8 **)(lVar3 + 0x12c8); puVar4 != puVar6; puVar4 = puVar4 + 1) {
    FUN_0097d408(*(undefined8 *)(lVar3 + 0x12b0),*puVar4);
  }
  plVar5 = *(long **)(lVar3 + 0x1ca8);
  plVar7 = *(long **)(lVar3 + 0x1cb0);
  if (plVar5 == plVar7) {
    if (plVar5 != plVar7) {
LAB_009634f8:
      do {
        plVar7 = plVar7 + -1;
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if ((long *)*plVar7 != (long *)0x0) {
          (**(code **)(*(long *)*plVar7 + 8))();
        }
      } while (plVar7 != plVar5);
    }
  }
  else {
    do {
      local_38 = (long *)*plVar5;
      if (local_38 != (long *)0x0) {
        (**(code **)*local_38)();
      }
      FUN_00983c1c(lVar1,&local_38);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 8))();
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar7);
    plVar7 = *(long **)(lVar3 + 0x1cb0);
    plVar5 = *(long **)(lVar3 + 0x1ca8);
    if (plVar5 != plVar7) goto LAB_009634f8;
  }
  *(long **)(lVar3 + 0x1cb0) = plVar5;
  FUN_00983594(lVar1,0,0);
  plVar5 = *(long **)(lVar3 + 0x12b8);
  *(undefined8 *)(lVar3 + 0x12b8) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
LAB_00963540:
  plVar5 = *(long **)(lVar3 + 0x1f8);
  *(undefined8 *)(lVar3 + 0x1f8) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  FUN_0095ca4c(lVar3);
  plVar5 = *(long **)(lVar3 + 0x1e8);
  *(undefined8 *)(lVar3 + 0x1e8) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = *(long **)(lVar3 + 0x110);
  *(undefined8 *)(lVar3 + 0x110) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = *(long **)(lVar3 + 0x2158);
  *(undefined8 *)(lVar3 + 0x2158) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  return;
}


// ===== 009635d4  FUN_009635d4 =====

void FUN_009635d4(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x963648);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      if (*(char *)((long)pvVar2 + 8) == '\x01') {
        FUN_0066f2dc(*(undefined8 *)((long)pvVar2 + 0x10));
      }
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00963648  FUN_00963648 =====

void FUN_00963648(long *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(*param_1 + 0x1e8);
  *(long *)(*param_1 + 0x538) = param_1[1];
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00963664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}


// ===== 0096366c  FUN_0096366c =====

void FUN_0096366c(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long *local_18;
  
  lVar3 = *param_1;
  if (((DAT_00d806e8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d806e8), iVar1 != 0)) {
    DAT_00d806e0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d806e8);
  }
  if (*DAT_00d806e0 != '\0') {
    FUN_0066d348(0x46,DAT_00d806e0,"VideoStreamEncoder::AddAdaptationResource(latency)",lVar3,0,0,0,
                 0,6);
  }
  plVar4 = *(long **)(lVar3 + 0x1cb0);
  if (plVar4 < *(long **)(lVar3 + 0x1cb8)) {
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar2 = (undefined8 *)param_1[1];
    *plVar4 = (long)puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)();
    }
    plVar4 = plVar4 + 1;
  }
  else {
    plVar4 = (long *)FUN_00963814(lVar3 + 0x1ca8,param_1 + 1);
  }
  *(long **)(lVar3 + 0x1cb0) = plVar4;
  local_18 = (long *)param_1[1];
  if (local_18 != (long *)0x0) {
    (**(code **)*local_18)();
  }
  FUN_00983838(lVar3 + 0x12e0,&local_18,1);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  return;
}


// ===== 009637c8  FUN_009637c8 =====

void FUN_009637c8(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
    uVar2 = param_2[1];
    param_2[1] = 0;
    param_3[1] = uVar2;
  }
  else if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x963814);
    (*pcVar1)();
  }
  if ((long *)param_2[1] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00963808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_2[1] + 8))();
    return;
  }
  return;
}


// ===== 00963814  FUN_00963814 =====

long * FUN_00963814(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  lVar6 = *param_1;
  lVar16 = param_1[1];
  plVar15 = (long *)(lVar16 - lVar6);
  uVar1 = ((long)plVar15 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar8 = param_1[2] - lVar6 >> 2;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - lVar6)) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 == 0) {
      pvVar4 = (void *)0x0;
      plVar2 = plVar15;
    }
    else {
      if (uVar8 >> 0x3d != 0) goto LAB_00963ab4;
      pvVar4 = operator_new(uVar8 << 3);
      plVar2 = (long *)((long)pvVar4 + (long)plVar15);
    }
    if (plVar2 == (long *)0x0) {
LAB_00963a88:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar5 = (undefined8 *)*param_2;
    *plVar2 = (long)puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)();
    }
    plVar13 = (long *)*param_1;
    plVar3 = (long *)param_1[1];
    lVar17 = (long)plVar3 - (long)plVar13;
    plVar14 = (long *)((long)plVar2 - ((long)plVar3 - (long)plVar13));
    if (lVar17 != 0) {
      uVar10 = lVar17 - 8U >> 3;
      uVar12 = (ulong)((lVar17 + lVar6) - ((long)pvVar4 + lVar16)) >> 3;
      uVar1 = uVar12;
      if (uVar10 <= uVar12) {
        uVar1 = uVar10;
      }
      plVar7 = plVar13;
      plVar9 = plVar14;
      if (0x3b < uVar1) {
        if (uVar10 <= uVar12) {
          uVar12 = uVar10;
        }
        if ((((((int)lVar6 - (int)((long)pvVar4 + lVar16) | (int)plVar3 - (int)plVar13) & 7U) == 0)
            && (plVar13 <= plVar13 + uVar12)) && (plVar14 <= plVar14 + uVar12)) {
          uVar12 = (ulong)((lVar17 + lVar6) - ((long)pvVar4 + lVar16)) >> 3;
          if (uVar10 <= uVar12) {
            uVar12 = uVar10;
          }
          if (((long *)((long)pvVar4 + ((uVar12 * 8 + lVar16) - (lVar17 + lVar6)) + 8) <= plVar13)
             || (plVar13 + uVar12 + 1 <= plVar14)) {
            uVar12 = uVar1 + 1 & 3;
            uVar10 = 4;
            if (uVar12 != 0) {
              uVar10 = uVar12;
            }
            lVar6 = (uVar1 + 1) - uVar10;
            plVar7 = plVar13 + lVar6;
            plVar9 = plVar14 + lVar6;
            plVar15 = (long *)((long)(plVar15 + -(lVar17 >> 3)) + (long)pvVar4 + 0x10);
            plVar11 = plVar13 + 2;
            do {
              lVar17 = plVar11[-1];
              lVar16 = plVar11[-2];
              lVar19 = plVar11[1];
              lVar18 = *plVar11;
              lVar6 = lVar6 + -4;
              plVar11[-1] = 0;
              plVar11[-2] = 0;
              plVar11[1] = 0;
              *plVar11 = 0;
              plVar15[-1] = lVar17;
              plVar15[-2] = lVar16;
              plVar15[1] = lVar19;
              *plVar15 = lVar18;
              plVar15 = plVar15 + 4;
              plVar11 = plVar11 + 4;
            } while (lVar6 != 0);
          }
        }
      }
      do {
        if (plVar9 == (long *)0x0) goto LAB_00963a88;
        lVar6 = *plVar7;
        plVar15 = plVar7 + 1;
        *plVar7 = 0;
        *plVar9 = lVar6;
        plVar7 = plVar15;
        plVar9 = plVar9 + 1;
      } while (plVar15 != plVar3);
      do {
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if ((long *)*plVar13 != (long *)0x0) {
          (**(code **)(*(long *)*plVar13 + 8))();
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar3);
      plVar13 = (long *)*param_1;
    }
    *param_1 = (long)plVar14;
    param_1[1] = (long)(plVar2 + 1);
    param_1[2] = (long)((long)pvVar4 + uVar8 * 8);
    if (plVar13 != (long *)0x0) {
      operator_delete(plVar13);
    }
    return plVar2 + 1;
  }
  FUN_00963ab8();
LAB_00963ab4:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00963ab8  FUN_00963ab8 =====

void FUN_00963ab8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00963ad0  FUN_00963ad0 =====

void FUN_00963ad0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  plVar3 = (long *)*param_1;
  (**(code **)(**(long **)(*plVar3 + 0x12b8) + 0x28))(&local_48);
  puVar4 = (undefined8 *)plVar3[1];
  plVar5 = (long *)*puVar4;
  if (plVar5 != (long *)0x0) {
    plVar2 = (long *)puVar4[1];
    plVar1 = plVar5;
    if (plVar5 != plVar2) {
      do {
        plVar2 = plVar2 + -1;
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if ((long *)*plVar2 != (long *)0x0) {
          (**(code **)(*(long *)*plVar2 + 8))();
        }
      } while (plVar2 != plVar5);
      plVar1 = (long *)*puVar4;
    }
    puVar4[1] = plVar5;
    operator_delete(plVar1);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
  }
  *puVar4 = local_48;
  puVar4[1] = local_40;
  puVar4[2] = local_38;
  FUN_0066f2dc(plVar3[2]);
  return;
}


// ===== 00963bb8  FUN_00963bb8 =====

void FUN_00963bb8(long *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_148 [272];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar5 = *param_1;
  iVar2 = (int)param_1[1];
  lVar4 = *(long *)(lVar5 + 0x12c0);
  *(int *)(lVar4 + 8) = iVar2;
  iVar1 = 2;
  if ((iVar2 == 3 & *(byte *)(lVar4 + 0xc)) == 0) {
    iVar1 = iVar2;
  }
  if (iVar1 != *(int *)(lVar4 + 0x10)) {
    *(int *)(lVar4 + 0x10) = iVar1;
    FUN_0097d578(*(undefined8 *)(lVar4 + 0x18),iVar1);
    iVar2 = (int)param_1[1];
  }
  FUN_009835a0(lVar5 + 0x12e0,iVar2);
  if (*(long **)(lVar5 + 0x1e8) != (long *)0x0) {
    (**(code **)(**(long **)(lVar5 + 0x1e8) + 0x60))(auStack_148);
    FUN_00984be0(lVar5 + 0x12e0,auStack_148);
    FUN_007b9754(auStack_148);
    (**(code **)(**(long **)(lVar5 + 0x1e8) + 0x60))(auStack_148);
    FUN_00984dec(lVar5 + 0x12e0,auStack_148);
    FUN_007b9754(auStack_148);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00963cb4  FUN_00963cb4 =====

void FUN_00963cb4(long *param_1)

{
  *(long *)(*param_1 + 0x50) = param_1[1];
  return;
}


// ===== 00963cc4  FUN_00963cc4 =====

void FUN_00963cc4(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e94,"../../video/video_stream_encoder.cc",0x1d61,"SetStartBitrate ",
                 (int)param_1[1]);
  }
  lVar1 = param_1[1];
  *(int *)(lVar3 + 0x278) = (int)lVar1;
  *(bool *)(lVar3 + 0x27c) = (int)lVar1 != 0;
  FUN_00984278(lVar3 + 0x12e0,(long)(int)param_1[1]);
  return;
}


// ===== 00963d38  FUN_00963d38 =====

void FUN_00963d38(undefined8 *param_1)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_118 [8];
  void *local_110;
  char cStack_f9;
  undefined1 auStack_b8 [8];
  void *local_b0;
  char cStack_99;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar7 = (long *)*param_1;
  lVar6 = *plVar7;
  uVar3 = FUN_00417e08();
  if ((uVar3 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../video/video_stream_encoder.cc",0x1fa1,
                 "ConfigureEncoder requested.");
  }
  (**(code **)(**(long **)(lVar6 + 0x110) + 0x30))
            (*(long **)(lVar6 + 0x110),0,(int)plVar7[0x12] == 1);
  uVar3 = FUN_007b72b4(lVar6 + 0x120,plVar7 + 2);
  bVar2 = true;
  if ((uVar3 & 1) != 0) {
    if (*(long *)(lVar6 + 0x1c8) - *(long *)(lVar6 + 0x1c0) == plVar7[0x17] - plVar7[0x16]) {
      if (*(long *)(lVar6 + 0x1c8) != *(long *)(lVar6 + 0x1c0)) {
        uVar3 = 0;
        do {
          FUN_00849dfc(auStack_b8,lVar6 + 0x118,uVar3);
          FUN_00849dfc(auStack_118,plVar7 + 1,uVar3);
          uVar4 = FUN_007b6ff8(auStack_b8,auStack_118);
          FUN_007b6d78(auStack_118);
          FUN_007b6d78(auStack_b8);
          if ((uVar4 & 1) == 0) goto LAB_00963e7c;
          uVar3 = uVar3 + 1;
        } while (uVar3 < (ulong)((*(long *)(lVar6 + 0x1c8) - *(long *)(lVar6 + 0x1c0) >> 3) *
                                -0x70a3d70a3d70a3d7));
      }
      if (*(long *)(lVar6 + 0x1e8) != 0) {
        bVar2 = *(long *)(lVar6 + 0x280) != plVar7[0x1b];
        goto LAB_00963e80;
      }
    }
LAB_00963e7c:
    bVar2 = true;
  }
LAB_00963e80:
  *(bool *)(lVar6 + 0x205) = bVar2;
  FUN_00469824(lVar6 + 0x118,plVar7 + 1);
  lVar5 = plVar7[0x1b];
  *(undefined1 *)(lVar6 + 0x204) = 1;
  *(long *)(lVar6 + 0x280) = lVar5;
  if (*(char *)(lVar6 + 0x26c) == '\x01') {
    if (plVar7[0x1f] != 0) {
      if ((*(ulong *)(lVar6 + 0x210) & 1) == 0) {
        lVar5 = lVar6 + 0x220;
        uVar3 = 2;
      }
      else {
        lVar5 = *(long *)(lVar6 + 0x220);
        uVar3 = *(ulong *)(lVar6 + 0x228);
      }
      uVar4 = *(ulong *)(lVar6 + 0x210) >> 1;
      if (uVar4 == uVar3) {
        FUN_00964054(lVar6 + 0x210,plVar7 + 0x1c);
      }
      else {
        lVar5 = lVar5 + uVar4 * 0x20;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        (*(code *)plVar7[0x1e])(1,plVar7 + 0x1c,lVar5);
        *(long *)(lVar5 + 0x10) = plVar7[0x1e];
        *(long *)(lVar5 + 0x18) = plVar7[0x1f];
        plVar7[0x1e] = (long)FUN_00433984;
        plVar7[0x1f] = 0;
        *(long *)(lVar6 + 0x210) = *(long *)(lVar6 + 0x210) + 2;
      }
    }
    FUN_00959ea4(lVar6);
  }
  else {
    FUN_005ecd48(auStack_118);
    FUN_0088a3f0(auStack_b8,plVar7 + 0x1c,auStack_118);
    if (cStack_99 < '\0') {
      operator_delete(local_b0);
    }
    if (cStack_f9 < '\0') {
      operator_delete(local_110);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00963fd8  FUN_00963fd8 =====

void FUN_00963fd8(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x964054);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      (**(code **)((long)pvVar2 + 0xf0))(0,(long)pvVar2 + 0xe0,(long)pvVar2 + 0xe0);
      FUN_0084966c((long)pvVar2 + 8);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00964054  FUN_00964054 =====

void * FUN_00964054(ulong *param_1,long param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar7 = param_1 + 2;
  if ((*param_1 & 1) == 0) {
    uVar5 = 4;
  }
  else {
    if ((param_1[3] >> 0x3a & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar7 = (ulong *)param_1[2];
    uVar5 = param_1[3] << 1;
  }
  uVar6 = *param_1 >> 1;
  pvVar2 = operator_new(uVar5 << 5);
  pvVar1 = (void *)((long)pvVar2 + uVar6 * 0x20);
  if (pvVar1 == (void *)0x0) {
LAB_009641a8:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  (**(code **)(param_2 + 0x10))(1,param_2,pvVar1);
  uVar10 = *(undefined8 *)(param_2 + 0x18);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  *(code **)(param_2 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)((long)pvVar1 + 0x18) = uVar10;
  *(undefined8 *)((long)pvVar1 + 0x10) = uVar9;
  pvVar3 = pvVar2;
  puVar4 = puVar7;
  uVar8 = uVar6;
  if (uVar6 != 0) {
    do {
      if (pvVar3 == (void *)0x0) goto LAB_009641a8;
      (*(code *)puVar4[2])(1,puVar4,pvVar3);
      uVar8 = uVar8 - 1;
      *(ulong *)((long)pvVar3 + 0x10) = puVar4[2];
      *(ulong *)((long)pvVar3 + 0x18) = puVar4[3];
      puVar4[2] = (ulong)FUN_00433984;
      puVar4[3] = 0;
      pvVar3 = (void *)((long)pvVar3 + 0x20);
      puVar4 = puVar4 + 4;
    } while (uVar8 != 0);
    puVar7 = puVar7 + uVar6 * 4;
    do {
      puVar4 = puVar7 + -4;
      if (puVar4 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      uVar6 = uVar6 - 1;
      (*(code *)puVar7[-2])(0,puVar4,puVar4);
      puVar7 = puVar4;
    } while (uVar6 != 0);
  }
  uVar6 = *param_1;
  if ((uVar6 & 1) != 0) {
    operator_delete((void *)param_1[2]);
    uVar6 = *param_1;
  }
  param_1[2] = (ulong)pvVar2;
  param_1[3] = uVar5;
  *param_1 = (uVar6 | 1) + 2;
  return pvVar1;
}


// ===== 009641d4  FUN_009641d4 =====

void FUN_009641d4(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x48);
  return;
}


// ===== 009641f8  FUN_009641f8 =====

bool FUN_009641f8(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 9);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00964250  FUN_00964250 =====

void FUN_00964250(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0096425c  FUN_0096425c =====

bool FUN_0096425c(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x48) == 1;
}


// ===== 00964274  FUN_00964274 =====

void FUN_00964274(long *param_1)

{
  void *pvVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  void *local_58;
  void *local_50;
  void *local_48;
  
  param_1 = (long *)*param_1;
  lVar10 = *param_1;
  lVar4 = param_1[1];
  iVar5 = FUN_009675d8(lVar10 + 0x1cc0);
  if ((int)lVar4 == iVar5) {
    plVar6 = (long *)FUN_009675e4(lVar10 + 0x1cc0);
    piVar2 = (int *)param_1[2];
    piVar3 = (int *)*plVar6;
    if (param_1[3] - (long)piVar2 == plVar6[1] - (long)piVar3) {
      while( true ) {
        if (piVar2 == (int *)param_1[3]) {
          return;
        }
        if ((*piVar2 != *piVar3) || (piVar2[1] != piVar3[1])) break;
        piVar2 = piVar2 + 2;
        piVar3 = piVar3 + 2;
      }
    }
  }
  FUN_00967644(lVar10 + 0x1cc0,(int)param_1[1]);
  local_50 = (void *)0x0;
  local_48 = (void *)0x0;
  pvVar7 = (void *)param_1[2];
  local_58 = (void *)0x0;
  uVar8 = param_1[3] - (long)pvVar7;
  if (uVar8 != 0) {
    if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007bfbbc();
    }
    local_58 = operator_new(uVar8);
    pvVar1 = (void *)((long)local_58 + uVar8);
    local_48 = pvVar1;
    memcpy(local_58,pvVar7,uVar8);
    local_50 = pvVar1;
  }
  FUN_00967650(lVar10 + 0x1cc0,&local_58);
  if (local_58 != (void *)0x0) {
    uVar9 = (ulong)((long)local_50 + (-8 - ((long)local_50 << 0x3d))) >> 3;
    uVar8 = (ulong)(((long)local_58 - (long)local_50 << 0x3d) - ((long)local_58 - (long)local_50))
            >> 3;
    if (uVar9 <= uVar8) {
      uVar8 = uVar9;
    }
    pvVar7 = local_50;
    if ((1 < uVar8) && ((((int)local_58 - (int)local_50 | -(int)local_50) & 7U) == 0)) {
      uVar8 = uVar8 & 0x1ffffffffffffffe;
      pvVar7 = (void *)((long)local_50 + uVar8 * -8);
      do {
        uVar8 = uVar8 - 2;
      } while (uVar8 != 0);
    }
    while (pvVar7 != local_58) {
      pvVar7 = (void *)((long)pvVar7 + -8);
      if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    local_50 = local_58;
    operator_delete(local_58);
  }
  FUN_00967560(lVar10 + 0x1cc0);
  return;
}


// ===== 00964418  FUN_00964418 =====

void FUN_00964418(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x964508);
      (*pcVar1)();
    }
    pvVar6 = (void *)*param_2;
    if (pvVar6 != (void *)0x0) {
      pvVar2 = *(void **)((long)pvVar6 + 0x10);
      if (pvVar2 != (void *)0x0) {
        pvVar3 = *(void **)((long)pvVar6 + 0x18);
        uVar5 = (ulong)((long)pvVar3 + (-8 - ((long)pvVar3 << 0x3d))) >> 3;
        uVar4 = (ulong)(((long)pvVar2 - (long)pvVar3 << 0x3d) - ((long)pvVar2 - (long)pvVar3)) >> 3;
        if (uVar5 <= uVar4) {
          uVar4 = uVar5;
        }
        if ((1 < uVar4) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 7U) == 0)) {
          uVar4 = uVar4 & 0x1ffffffffffffffe;
          pvVar3 = (void *)((long)pvVar3 + uVar4 * -8);
          do {
            uVar4 = uVar4 - 2;
          } while (uVar4 != 0);
        }
        while (pvVar3 != pvVar2) {
          pvVar3 = (void *)((long)pvVar3 + -8);
          if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        *(void **)((long)pvVar6 + 0x18) = pvVar2;
        operator_delete(pvVar2);
      }
      operator_delete(pvVar6);
      return;
    }
  }
  return;
}


// ===== 00964508  FUN_00964508 =====

void FUN_00964508(undefined8 ***param_1,int *param_2)

{
  ulong uVar1;
  undefined8 **__n;
  ulong uVar2;
  int iVar3;
  undefined8 ***__src;
  undefined8 **ppuVar4;
  ulong uVar5;
  undefined8 ***__dest;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 **local_58;
  undefined8 *puStack_50;
  ulong local_48;
  
  iVar3 = *param_2;
  local_58 = (undefined8 ***)0x0;
  puStack_50 = (undefined8 **)0x0;
  local_48 = 0;
  if (iVar3 < 3) {
    if (iVar3 == 0) {
      pcVar6 = "Generic";
    }
    else {
      if (iVar3 == 1) {
        pcVar6 = "VP8";
        uVar7 = 3;
        goto LAB_009645cc;
      }
      if (iVar3 == 2) {
        pcVar6 = "VP9";
        uVar7 = 3;
        goto LAB_009645cc;
      }
LAB_009645a0:
      pcVar6 = "Unknown";
    }
    uVar7 = 7;
  }
  else {
    if (iVar3 == 3) {
      pcVar6 = "AV1";
      uVar7 = 3;
      goto LAB_009645cc;
    }
    if (iVar3 == 4) {
      pcVar6 = "H264";
    }
    else {
      if (iVar3 != 5) goto LAB_009645a0;
      pcVar6 = "H265";
    }
    uVar7 = 4;
  }
LAB_009645cc:
  thunk_FUN_00547cac(&local_58,pcVar6,uVar7);
  uVar5 = local_48;
  ppuVar4 = local_58;
  __n = (undefined8 **)puStack_50;
  __src = (undefined8 ***)local_58;
  if (-1 < (long)local_48) {
    __n = (undefined8 **)(local_48 >> 0x38);
    __src = &local_58;
  }
  if ((__src == (undefined8 ***)0x0) && (__n != (undefined8 **)0x0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:1081: libc++ Hardening assertion __n == 0 || __s != nullptr failed: basic_string(const char*, n) detected nullptr\n"
              );
  }
  if ((undefined8 **)0x7ffffffffffffff6 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (__n < (undefined8 **)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)__n;
    __dest = param_1;
  }
  else {
    uVar1 = ((ulong)__n & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 ***)operator_new(uVar2);
    *param_1 = __dest;
    param_1[1] = __n;
    param_1[2] = (undefined8 **)(uVar2 | 0x8000000000000000);
  }
  if ((undefined8 ***)((long)__dest + (long)__n) < __dest) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((__dest <= __src) && (__src < (undefined8 ***)((long)__dest + (long)__n))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(__dest,__src,(size_t)__n);
  *(undefined1 *)((long)__dest + (long)__n) = 0;
  if ((long)uVar5 < 0) {
    operator_delete(ppuVar4);
  }
  return;
}


// ===== 009646e4  FUN_009646e4 =====

void FUN_009646e4(long *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  void *local_18;
  
  if ((ulong)param_1[4] < 0x10) {
    lVar2 = param_1[3];
    uVar6 = param_1[2] - param_1[1];
    uVar4 = lVar2 - *param_1;
    if (uVar4 <= uVar6) {
      uVar4 = (long)uVar4 >> 2;
      if (lVar2 == *param_1) {
        uVar4 = 1;
      }
      puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      local_40 = &DAT_aaaaaaaaaaaaaaaa;
      if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      local_50 = (undefined1 *)operator_new(uVar4 * 8);
      puStack_48 = local_50 + uVar6;
      puStack_38 = local_50 + uVar4 * 8;
      local_40 = puStack_48;
      local_18 = operator_new(0xf80);
      FUN_00964b54(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_00965078(&local_50,lVar5);
          lVar2 = param_1[1];
        } while (lVar5 != lVar2);
        lVar5 = param_1[2];
      }
      puVar1 = (undefined1 *)*param_1;
      uVar6 = (lVar5 - (lVar5 << 0x3d)) - 8U >> 3;
      uVar4 = (ulong)((lVar2 - lVar5 << 0x3d) - (lVar2 - lVar5)) >> 3;
      lVar3 = param_1[3];
      param_1[1] = (long)puStack_48;
      *param_1 = (long)local_50;
      param_1[3] = (long)puStack_38;
      param_1[2] = (long)local_40;
      if (uVar6 <= uVar4) {
        uVar4 = uVar6;
      }
      local_40 = (undefined1 *)lVar5;
      if ((1 < uVar4) && ((((int)lVar2 - (int)lVar5 | -(int)lVar5) & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        local_40 = (undefined1 *)(lVar5 + uVar4 * -8);
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (local_50 = puVar1, puStack_48 = (undefined1 *)lVar2, puStack_38 = (undefined1 *)lVar3,
            local_40 != (undefined1 *)lVar2) {
        local_40 = (undefined1 *)((long)local_40 + -8);
        if (local_40 == (undefined1 *)0x0) {
          local_40 = (undefined1 *)lVar5;
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (puVar1 == (undefined1 *)0x0) {
        return;
      }
      operator_delete(puVar1);
      return;
    }
    if (lVar2 != param_1[2]) {
      local_50 = (undefined1 *)operator_new(0xf80);
      FUN_00964b54(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0xf80);
    FUN_00964ddc(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x10;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_009648cc(param_1,&local_50);
  return;
}


// ===== 009648cc  FUN_009648cc =====

void FUN_009648cc(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *__src;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar17 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar17) {
    pvVar2 = (void *)*param_1;
    __src = (undefined8 *)param_1[1];
    if ((long)__src - (long)pvVar2 == 0) {
      uVar5 = (long)param_1[3] - (long)pvVar2 >> 2;
      if (puVar17 == __src) {
        uVar5 = 1;
      }
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar18 = uVar5 >> 2;
      pvVar4 = operator_new(uVar5 * 8);
      puVar6 = (undefined8 *)((long)pvVar4 + uVar18 * 8);
      lVar15 = (long)puVar17 - (long)__src;
      iVar16 = (int)puVar17;
      puVar7 = puVar6;
      if (lVar15 != 0) {
        uVar13 = lVar15 - 8U >> 3;
        uVar11 = uVar13;
        if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
          uVar11 = (ulong)-(long)puVar6 >> 3;
        }
        puVar7 = (undefined8 *)((long)puVar6 + lVar15);
        puVar8 = puVar6;
        puVar10 = __src;
        if (0x31 < uVar11) {
          if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
            uVar13 = (ulong)-(long)puVar6 >> 3;
          }
          if ((((((iVar16 - (int)__src | -(int)pvVar4) & 7U) == 0) && (puVar6 <= puVar6 + uVar13))
              && (__src <= __src + uVar13)) && (0x1f < (long)pvVar4 + (uVar18 * 8 - (long)__src))) {
            uVar1 = uVar11 + 1 & 3;
            puVar14 = (undefined8 *)((long)pvVar4 + uVar18 * 8 + 0x10);
            uVar18 = 4;
            if (uVar1 != 0) {
              uVar18 = uVar1;
            }
            puVar12 = __src + 2;
            lVar9 = (uVar11 + 1) - uVar18;
            lVar15 = ~uVar13 + uVar18;
            puVar8 = puVar6 + lVar9;
            puVar10 = __src + lVar9;
            do {
              puVar3 = puVar12 + -1;
              uVar19 = puVar12[-2];
              uVar21 = puVar12[1];
              uVar20 = *puVar12;
              lVar15 = lVar15 + 4;
              puVar12 = puVar12 + 4;
              puVar14[-1] = *puVar3;
              puVar14[-2] = uVar19;
              puVar14[1] = uVar21;
              *puVar14 = uVar20;
              puVar14 = puVar14 + 4;
            } while (lVar15 != 0);
          }
        }
        do {
          if (puVar8 == (undefined8 *)0x0) goto LAB_00964b3c;
          puVar14 = puVar8 + 1;
          *puVar8 = *puVar10;
          puVar8 = puVar14;
          puVar10 = puVar10 + 1;
        } while (puVar14 != puVar7);
      }
      *param_1 = pvVar4;
      param_1[1] = puVar6;
      uVar11 = (ulong)((long)puVar17 + (-8 - ((long)puVar17 << 0x3d))) >> 3;
      uVar18 = (ulong)(((long)__src - (long)puVar17 << 0x3d) - ((long)__src - (long)puVar17)) >> 3;
      param_1[2] = puVar7;
      param_1[3] = (void *)((long)pvVar4 + uVar5 * 8);
      if (uVar11 <= uVar18) {
        uVar18 = uVar11;
      }
      puVar6 = puVar17;
      if ((1 < uVar18) && ((((int)__src - iVar16 | -iVar16) & 7U) == 0)) {
        uVar18 = uVar18 & 0x1ffffffffffffffe;
        puVar6 = puVar17 + -uVar18;
        do {
          uVar18 = uVar18 - 2;
        } while (uVar18 != 0);
      }
      while (puVar6 != __src) {
        puVar6 = puVar6 + -1;
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (__src != (undefined8 *)0x0) {
        operator_delete(pvVar2);
      }
    }
    else {
      lVar15 = ((long)__src - (long)pvVar2 >> 3) + 1;
      uVar5 = (ulong)(lVar15 - (lVar15 >> 0x3f)) >> 1;
      memmove(__src + -uVar5,__src,(long)puVar17 - (long)__src);
      puVar17 = puVar17 + -uVar5;
      param_1[1] = param_1[1] + uVar5 * -8;
      param_1[2] = puVar17;
    }
  }
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = *param_2;
    param_1[2] = puVar17 + 1;
    return;
  }
LAB_00964b3c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00964b54  FUN_00964b54 =====

void FUN_00964b54(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *__src;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar17 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar17) {
    pvVar2 = (void *)*param_1;
    __src = (undefined8 *)param_1[1];
    if ((long)__src - (long)pvVar2 == 0) {
      uVar5 = (long)param_1[3] - (long)pvVar2 >> 2;
      if (puVar17 == __src) {
        uVar5 = 1;
      }
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar18 = uVar5 >> 2;
      pvVar4 = operator_new(uVar5 * 8);
      puVar6 = (undefined8 *)((long)pvVar4 + uVar18 * 8);
      lVar15 = (long)puVar17 - (long)__src;
      iVar16 = (int)puVar17;
      puVar7 = puVar6;
      if (lVar15 != 0) {
        uVar13 = lVar15 - 8U >> 3;
        uVar11 = uVar13;
        if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
          uVar11 = (ulong)-(long)puVar6 >> 3;
        }
        puVar7 = (undefined8 *)((long)puVar6 + lVar15);
        puVar8 = puVar6;
        puVar10 = __src;
        if (0x31 < uVar11) {
          if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
            uVar13 = (ulong)-(long)puVar6 >> 3;
          }
          if ((((((iVar16 - (int)__src | -(int)pvVar4) & 7U) == 0) && (puVar6 <= puVar6 + uVar13))
              && (__src <= __src + uVar13)) && (0x1f < (long)pvVar4 + (uVar18 * 8 - (long)__src))) {
            uVar1 = uVar11 + 1 & 3;
            puVar14 = (undefined8 *)((long)pvVar4 + uVar18 * 8 + 0x10);
            uVar18 = 4;
            if (uVar1 != 0) {
              uVar18 = uVar1;
            }
            puVar12 = __src + 2;
            lVar9 = (uVar11 + 1) - uVar18;
            lVar15 = ~uVar13 + uVar18;
            puVar8 = puVar6 + lVar9;
            puVar10 = __src + lVar9;
            do {
              puVar3 = puVar12 + -1;
              uVar19 = puVar12[-2];
              uVar21 = puVar12[1];
              uVar20 = *puVar12;
              lVar15 = lVar15 + 4;
              puVar12 = puVar12 + 4;
              puVar14[-1] = *puVar3;
              puVar14[-2] = uVar19;
              puVar14[1] = uVar21;
              *puVar14 = uVar20;
              puVar14 = puVar14 + 4;
            } while (lVar15 != 0);
          }
        }
        do {
          if (puVar8 == (undefined8 *)0x0) goto LAB_00964dc4;
          puVar14 = puVar8 + 1;
          *puVar8 = *puVar10;
          puVar8 = puVar14;
          puVar10 = puVar10 + 1;
        } while (puVar14 != puVar7);
      }
      *param_1 = pvVar4;
      param_1[1] = puVar6;
      uVar11 = (ulong)((long)puVar17 + (-8 - ((long)puVar17 << 0x3d))) >> 3;
      uVar18 = (ulong)(((long)__src - (long)puVar17 << 0x3d) - ((long)__src - (long)puVar17)) >> 3;
      param_1[2] = puVar7;
      param_1[3] = (void *)((long)pvVar4 + uVar5 * 8);
      if (uVar11 <= uVar18) {
        uVar18 = uVar11;
      }
      puVar6 = puVar17;
      if ((1 < uVar18) && ((((int)__src - iVar16 | -iVar16) & 7U) == 0)) {
        uVar18 = uVar18 & 0x1ffffffffffffffe;
        puVar6 = puVar17 + -uVar18;
        do {
          uVar18 = uVar18 - 2;
        } while (uVar18 != 0);
      }
      while (puVar6 != __src) {
        puVar6 = puVar6 + -1;
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (__src != (undefined8 *)0x0) {
        operator_delete(pvVar2);
      }
    }
    else {
      lVar15 = ((long)__src - (long)pvVar2 >> 3) + 1;
      uVar5 = (ulong)(lVar15 - (lVar15 >> 0x3f)) >> 1;
      memmove(__src + -uVar5,__src,(long)puVar17 - (long)__src);
      puVar17 = puVar17 + -uVar5;
      param_1[1] = param_1[1] + uVar5 * -8;
      param_1[2] = puVar17;
    }
  }
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = *param_2;
    param_1[2] = puVar17 + 1;
    return;
  }
LAB_00964dc4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00964ddc  FUN_00964ddc =====

void FUN_00964ddc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  size_t __n;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *__src;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar4 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (__src == puVar4) {
    puVar18 = (undefined8 *)param_1[2];
    lVar16 = param_1[3] - (long)puVar18;
    if (lVar16 == 0) {
      uVar7 = param_1[3] - (long)puVar4 >> 2;
      if (puVar18 == __src) {
        uVar7 = 1;
      }
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar19 = uVar7 + 3 >> 2;
      pvVar6 = operator_new(uVar7 * 8);
      puVar1 = (undefined8 *)((long)pvVar6 + uVar19 * 8);
      lVar16 = (long)puVar18 - (long)__src;
      iVar17 = (int)puVar18;
      puVar8 = puVar1;
      if (lVar16 != 0) {
        uVar14 = lVar16 - 8U >> 3;
        uVar12 = uVar14;
        if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
          uVar12 = (ulong)-(long)puVar1 >> 3;
        }
        puVar8 = (undefined8 *)((long)puVar1 + lVar16);
        puVar9 = puVar1;
        puVar11 = __src;
        if (0x31 < uVar12) {
          if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
            uVar14 = (ulong)-(long)puVar1 >> 3;
          }
          if ((((((iVar17 - (int)__src | -(int)pvVar6) & 7U) == 0) && (puVar1 <= puVar1 + uVar14))
              && (__src <= __src + uVar14)) && (0x1f < (long)pvVar6 + (uVar19 * 8 - (long)__src))) {
            uVar2 = uVar12 + 1 & 3;
            puVar15 = (undefined8 *)((long)pvVar6 + uVar19 * 8 + 0x10);
            uVar19 = 4;
            if (uVar2 != 0) {
              uVar19 = uVar2;
            }
            puVar13 = __src + 2;
            lVar10 = (uVar12 + 1) - uVar19;
            lVar16 = ~uVar14 + uVar19;
            puVar9 = puVar1 + lVar10;
            puVar11 = __src + lVar10;
            do {
              puVar5 = puVar13 + -1;
              uVar20 = puVar13[-2];
              uVar22 = puVar13[1];
              uVar21 = *puVar13;
              lVar16 = lVar16 + 4;
              puVar13 = puVar13 + 4;
              puVar15[-1] = *puVar5;
              puVar15[-2] = uVar20;
              puVar15[1] = uVar22;
              *puVar15 = uVar21;
              puVar15 = puVar15 + 4;
            } while (lVar16 != 0);
          }
        }
        do {
          if (puVar9 == (undefined8 *)0x0) goto LAB_00965060;
          puVar15 = puVar9 + 1;
          *puVar9 = *puVar11;
          puVar9 = puVar15;
          puVar11 = puVar11 + 1;
        } while (puVar15 != puVar8);
      }
      *param_1 = pvVar6;
      param_1[1] = puVar1;
      uVar12 = (ulong)((long)puVar18 + (-8 - ((long)puVar18 << 0x3d))) >> 3;
      uVar19 = (ulong)(((long)__src - (long)puVar18 << 0x3d) - ((long)__src - (long)puVar18)) >> 3;
      param_1[2] = puVar8;
      param_1[3] = (void *)((long)pvVar6 + uVar7 * 8);
      if (uVar12 <= uVar19) {
        uVar19 = uVar12;
      }
      if ((1 < uVar19) && ((((int)__src - iVar17 | -iVar17) & 7U) == 0)) {
        uVar19 = uVar19 & 0x1ffffffffffffffe;
        puVar18 = puVar18 + -uVar19;
        do {
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
      }
      while (puVar18 != __src) {
        puVar18 = puVar18 + -1;
        if (puVar18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      bVar3 = __src != (undefined8 *)0x0;
      __src = puVar1;
      if (bVar3) {
        operator_delete(puVar4);
        __src = (undefined8 *)param_1[1];
      }
    }
    else {
      __n = (long)puVar18 - (long)__src;
      lVar16 = (lVar16 >> 3) + 1;
      puVar18 = puVar18 + ((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
      memmove((void *)((long)puVar18 - __n),__src,__n);
      param_1[1] = (undefined8 *)((long)puVar18 - __n);
      param_1[2] = puVar18;
      __src = (undefined8 *)((long)puVar18 - __n);
    }
  }
  if (__src + -1 != (undefined8 *)0x0) {
    __src[-1] = *param_2;
    param_1[1] = param_1[1] + -8;
    return;
  }
LAB_00965060:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00965078  FUN_00965078 =====

void FUN_00965078(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  size_t __n;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *__src;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar4 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (__src == puVar4) {
    puVar18 = (undefined8 *)param_1[2];
    lVar16 = param_1[3] - (long)puVar18;
    if (lVar16 == 0) {
      uVar7 = param_1[3] - (long)puVar4 >> 2;
      if (puVar18 == __src) {
        uVar7 = 1;
      }
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar19 = uVar7 + 3 >> 2;
      pvVar6 = operator_new(uVar7 * 8);
      puVar1 = (undefined8 *)((long)pvVar6 + uVar19 * 8);
      lVar16 = (long)puVar18 - (long)__src;
      iVar17 = (int)puVar18;
      puVar8 = puVar1;
      if (lVar16 != 0) {
        uVar14 = lVar16 - 8U >> 3;
        uVar12 = uVar14;
        if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
          uVar12 = (ulong)-(long)puVar1 >> 3;
        }
        puVar8 = (undefined8 *)((long)puVar1 + lVar16);
        puVar9 = puVar1;
        puVar11 = __src;
        if (0x31 < uVar12) {
          if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
            uVar14 = (ulong)-(long)puVar1 >> 3;
          }
          if ((((((iVar17 - (int)__src | -(int)pvVar6) & 7U) == 0) && (puVar1 <= puVar1 + uVar14))
              && (__src <= __src + uVar14)) && (0x1f < (long)pvVar6 + (uVar19 * 8 - (long)__src))) {
            uVar2 = uVar12 + 1 & 3;
            puVar15 = (undefined8 *)((long)pvVar6 + uVar19 * 8 + 0x10);
            uVar19 = 4;
            if (uVar2 != 0) {
              uVar19 = uVar2;
            }
            puVar13 = __src + 2;
            lVar10 = (uVar12 + 1) - uVar19;
            lVar16 = ~uVar14 + uVar19;
            puVar9 = puVar1 + lVar10;
            puVar11 = __src + lVar10;
            do {
              puVar5 = puVar13 + -1;
              uVar20 = puVar13[-2];
              uVar22 = puVar13[1];
              uVar21 = *puVar13;
              lVar16 = lVar16 + 4;
              puVar13 = puVar13 + 4;
              puVar15[-1] = *puVar5;
              puVar15[-2] = uVar20;
              puVar15[1] = uVar22;
              *puVar15 = uVar21;
              puVar15 = puVar15 + 4;
            } while (lVar16 != 0);
          }
        }
        do {
          if (puVar9 == (undefined8 *)0x0) goto LAB_009652fc;
          puVar15 = puVar9 + 1;
          *puVar9 = *puVar11;
          puVar9 = puVar15;
          puVar11 = puVar11 + 1;
        } while (puVar15 != puVar8);
      }
      *param_1 = pvVar6;
      param_1[1] = puVar1;
      uVar12 = (ulong)((long)puVar18 + (-8 - ((long)puVar18 << 0x3d))) >> 3;
      uVar19 = (ulong)(((long)__src - (long)puVar18 << 0x3d) - ((long)__src - (long)puVar18)) >> 3;
      param_1[2] = puVar8;
      param_1[3] = (void *)((long)pvVar6 + uVar7 * 8);
      if (uVar12 <= uVar19) {
        uVar19 = uVar12;
      }
      if ((1 < uVar19) && ((((int)__src - iVar17 | -iVar17) & 7U) == 0)) {
        uVar19 = uVar19 & 0x1ffffffffffffffe;
        puVar18 = puVar18 + -uVar19;
        do {
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
      }
      while (puVar18 != __src) {
        puVar18 = puVar18 + -1;
        if (puVar18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      bVar3 = __src != (undefined8 *)0x0;
      __src = puVar1;
      if (bVar3) {
        operator_delete(puVar4);
        __src = (undefined8 *)param_1[1];
      }
    }
    else {
      __n = (long)puVar18 - (long)__src;
      lVar16 = (lVar16 >> 3) + 1;
      puVar18 = puVar18 + ((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
      memmove((void *)((long)puVar18 - __n),__src,__n);
      param_1[1] = (undefined8 *)((long)puVar18 - __n);
      param_1[2] = puVar18;
      __src = (undefined8 *)((long)puVar18 - __n);
    }
  }
  if (__src + -1 != (undefined8 *)0x0) {
    __src[-1] = *param_2;
    param_1[1] = param_1[1] + -8;
    return;
  }
LAB_009652fc:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00965314  FUN_00965314 =====

void FUN_00965314(undefined8 *param_1)

{
  FUN_00958184(*param_1,param_1[1]);
  return;
}


// ===== 00965324  FUN_00965324 =====

void FUN_00965324(long *param_1)

{
  FUN_00967544(*param_1 + 0x1cc0);
  return;
}


// ===== 00965338  FUN_00965338 =====

void FUN_00965338(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)*param_1;
                    /* WARNING: Could not recover jumptable at 0x0096534c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,(undefined8 *)*param_1 + 1);
  return;
}


// ===== 00965350  FUN_00965350 =====

void FUN_00965350(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x965440);
      (*pcVar1)();
    }
    pvVar6 = (void *)*param_2;
    if (pvVar6 != (void *)0x0) {
      pvVar2 = *(void **)((long)pvVar6 + 8);
      if (pvVar2 != (void *)0x0) {
        pvVar3 = *(void **)((long)pvVar6 + 0x10);
        uVar5 = (ulong)((long)pvVar3 + (-4 - ((long)pvVar3 << 0x3e))) >> 2;
        uVar4 = (ulong)(((long)pvVar2 - (long)pvVar3 << 0x3e) - ((long)pvVar2 - (long)pvVar3)) >> 2;
        if (uVar5 <= uVar4) {
          uVar4 = uVar5;
        }
        if ((1 < uVar4) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 3U) == 0)) {
          uVar4 = uVar4 & 0x3ffffffffffffffe;
          pvVar3 = (void *)((long)pvVar3 + uVar4 * -4);
          do {
            uVar4 = uVar4 - 2;
          } while (uVar4 != 0);
        }
        while (pvVar3 != pvVar2) {
          pvVar3 = (void *)((long)pvVar3 + -4);
          if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        *(void **)((long)pvVar6 + 0x10) = pvVar2;
        operator_delete(pvVar2);
      }
      operator_delete(pvVar6);
      return;
    }
  }
  return;
}


// ===== 00965440  FUN_00965440 =====

void FUN_00965440(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)*param_1;
                    /* WARNING: Could not recover jumptable at 0x00965454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1,(undefined8 *)*param_1 + 1);
  return;
}


// ===== 00965458  FUN_00965458 =====

void FUN_00965458(long *param_1)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  
  param_1 = (long *)*param_1;
  lVar6 = *param_1;
  uVar2 = FUN_00974058(lVar6 + 0x20a8,(int)param_1[3],(int)param_1[4],
                       *(undefined1 *)((long)param_1 + 0x24));
  plVar5 = *(long **)(lVar6 + 0x110);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x40))(plVar5,param_1[3],uVar2 & 1);
  }
  uVar3 = FUN_007b8e74(lVar6 + 0x670);
  if ((((uVar3 & 1) != 0) || ((int)param_1[1] != 2)) ||
     (lVar4 = FUN_007b8c98(lVar6 + 0x670), *(char *)(lVar4 + 9) != '\x01')) {
    return;
  }
  uVar2 = (uint)*(ushort *)(lVar6 + 0x674);
  uVar7 = (uint)*(ushort *)(lVar6 + 0x676);
  lVar4 = FUN_007b8c98(lVar6 + 0x670);
  if (*(char *)(lVar4 + 10) != '\0') {
    if ((*(byte *)(lVar6 + 0x898) & 1) != 0) {
      uVar2 = *(uint *)(lVar6 + 0x878);
      uVar7 = *(uint *)(lVar6 + 0x87c);
    }
    lVar4 = FUN_007b8c98(lVar6 + 0x670);
    if (1 < *(byte *)(lVar4 + 10)) {
      if (*(char *)(lVar6 + 0x938) == '\x01') {
        uVar2 = *(uint *)(lVar6 + 0x918);
        uVar7 = *(uint *)(lVar6 + 0x91c);
      }
      lVar4 = FUN_007b8c98(lVar6 + 0x670);
      if (2 < *(byte *)(lVar4 + 10)) {
        if (*(char *)(lVar6 + 0x9d8) == '\x01') {
          uVar2 = *(uint *)(lVar6 + 0x9b8);
          uVar7 = *(uint *)(lVar6 + 0x9bc);
        }
        lVar4 = FUN_007b8c98(lVar6 + 0x670);
        if (3 < *(byte *)(lVar4 + 10)) {
          if (*(char *)(lVar6 + 0xa78) == '\x01') {
            uVar2 = *(uint *)(lVar6 + 0xa58);
            uVar7 = *(uint *)(lVar6 + 0xa5c);
          }
          lVar4 = FUN_007b8c98(lVar6 + 0x670);
          if (4 < *(byte *)(lVar4 + 10)) {
            if (*(char *)(lVar6 + 0xb18) == '\x01') {
              uVar2 = *(uint *)(lVar6 + 0xaf8);
              uVar7 = *(uint *)(lVar6 + 0xafc);
            }
            lVar4 = FUN_007b8c98(lVar6 + 0x670);
            if (5 < *(byte *)(lVar4 + 10)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(0x5512,0x9655fc);
              (*pcVar1)();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x009655e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar6 + 0xf8) + 0x80))
            (*(long **)(lVar6 + 0xf8),
             *(uint *)((long)param_1 + 0xc) < uVar2 || *(uint *)(param_1 + 2) < uVar7);
  return;
}


// ===== 009655fc  FUN_009655fc =====

void FUN_009655fc(long *param_1)

{
  FUN_0098472c(*param_1 + 0x12e0,(char)param_1[1]);
  return;
}


// ===== 00965614  FUN_00965614 =====

void FUN_00965614(undefined8 *param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  double dVar7;
  
  plVar6 = (long *)*param_1;
  dVar7 = (double)plVar6[5];
  plVar2 = (long *)*plVar6;
  uVar3 = plVar6[1];
  if (((dVar7 != DAT_001f5338 && dVar7 < DAT_001f5338 == (NAN(dVar7) || NAN(DAT_001f5338))) &&
       0 < (long)uVar3) && ((uint)((int)plVar2[0xd0] * 1000) < uVar3)) {
    uVar4 = (int)uVar3 + (int)plVar2[0xd0] * -1000;
    if ((int)(dVar7 * (double)uVar3) <= (int)uVar4) {
      uVar4 = (int)(dVar7 * (double)uVar3);
    }
    if (0 < (int)uVar4) {
      uVar1 = 0;
      if ((ulong)uVar4 != 0) {
        uVar1 = (uint)(uVar3 / uVar4);
      }
      if ((int)uVar1 < 3) {
        uVar1 = 2;
      }
      *(uint *)(plVar2 + 0x185) = uVar1;
      *(undefined1 *)((long)plVar2 + 0xc2c) = 1;
      uVar5 = 0x7fffffffffffffff;
      if (uVar3 != 0x7fffffffffffffff) {
        uVar5 = 0;
        if ((ulong)uVar1 != 0) {
          uVar5 = uVar3 / uVar1;
        }
        uVar5 = uVar3 - uVar5;
      }
      goto LAB_009656b8;
    }
  }
  uVar5 = uVar3;
  if (*(char *)((long)plVar2 + 0xc2c) == '\x01') {
    *(undefined1 *)((long)plVar2 + 0xc2c) = 0;
  }
LAB_009656b8:
                    /* WARNING: Could not recover jumptable at 0x009656d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x48))(plVar6[5],plVar2,uVar5,plVar6[2],(char)plVar6[3],plVar6[4]);
  return;
}


// ===== 009656d4  FUN_009656d4 =====

void FUN_009656d4(long *param_1)

{
  long lVar1;
  long local_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  param_1 = (long *)*param_1;
  lVar1 = *param_1;
  lStack_28 = param_1[6];
  lStack_30 = param_1[5];
  lStack_38 = param_1[4];
  local_40 = param_1[3];
  lStack_48 = param_1[2];
  local_50 = param_1[1];
  FUN_00967610(lVar1 + 0x1cc0,&local_50);
  FUN_00967560(lVar1 + 0x1cc0);
  return;
}


// ===== 00965730  FUN_00965730 =====

void FUN_00965730(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_009616bc(*param_1,param_1 + 1,param_1[0x31],*(undefined4 *)(param_1 + 0x32),param_1[0x33]);
  return;
}


// ===== 00965750  FUN_00965750 =====

void FUN_00965750(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x9657b8);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      FUN_007bca94((long)pvVar2 + 8);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 009657b8  FUN_009657b8 =====

undefined8 * FUN_009657b8(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__dest;
  
  puVar6 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar6 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_009658ac();
LAB_009658a8:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 2;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_009658a8;
    pvVar2 = operator_new(uVar5 << 3);
    puVar6 = (undefined8 *)((long)pvVar2 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = *param_2;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 1);
    param_1[2] = (long)((long)pvVar2 + uVar5 * 8);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 009658ac  FUN_009658ac =====

void FUN_009658ac(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 009658c4  FUN_009658c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009658c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)PTR_DAT_00d52038;
  *(undefined4 *)(param_1 + 8) = uVar3;
  FUN_00625c38(0x3f7d70a4);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  FUN_00625c38(0x3f666666,param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x3c) = 0x3f75c28f;
  FUN_00625c38(0x3f666666,param_1 + 0x34);
  *(undefined1 *)(param_1 + 0x49) = 1;
  *(undefined4 *)(param_1 + 0x4c) = 0x40800000;
  FUN_00625c38(0x3f7d70a4,param_1);
  FUN_00625c4c(0x3f800000,0x3b5a740e,param_1);
  FUN_00625c38(0x3f666666,param_1 + 0xc);
  uVar2 = _UNK_001f32f8;
  uVar1 = _DAT_001f32f0;
  *(undefined4 *)(param_1 + 0x44) = 0x41f00000;
  *(undefined8 *)(param_1 + 0x18) = 0x41700000;
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_00625c38(0x3f666666,param_1 + 0x34);
  FUN_00625c4c(0,0,param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}


// ===== 009659cc  FUN_009659cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009659cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_00625c38(0x3f7d70a4);
  FUN_00625c4c(0x3f800000,0x3b5a740e,param_1);
  FUN_00625c38(0x3f666666,param_1 + 0xc);
  uVar2 = _UNK_001f32f8;
  uVar1 = _DAT_001f32f0;
  *(undefined4 *)(param_1 + 0x44) = 0x41f00000;
  *(undefined8 *)(param_1 + 0x18) = 0x41700000;
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_00625c38(0x3f666666,param_1 + 0x34);
  FUN_00625c4c(0,0,param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}


// ===== 00965a80  FUN_00965a80 =====

void FUN_00965a80(void)

{
  return;
}


// ===== 00965a88  FUN_00965a88 =====

void FUN_00965a88(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x49) = param_2;
  return;
}


// ===== 00965a94  FUN_00965a94 =====

void FUN_00965a94(long param_1,ulong param_2,uint param_3)

{
  int iVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  
  if (*(char *)(param_1 + 0x49) == '\x01') {
    fVar4 = ((float)param_2 * 8.0) / 1000.0;
    if ((param_3 & 1) == 0) {
      FUN_00625c4c(0x3f800000,0x3f800000,param_1);
      if (*(int *)(param_1 + 0x1c) == 0) {
        dVar3 = (double)*(float *)(param_1 + 4);
        if (dVar3 == DAT_001f5b10 || dVar3 < DAT_001f5b10 != (NAN(dVar3) || NAN(DAT_001f5b10))) {
          fVar2 = *(float *)(param_1 + 0x18);
        }
        else {
          fVar2 = 1.0 / *(float *)(param_1 + 4);
          if (*(float *)(param_1 + 0x18) <= fVar2) {
            fVar2 = *(float *)(param_1 + 0x18);
          }
        }
        *(int *)(param_1 + 0x1c) = (int)(fVar2 + 0.5);
        fVar2 = fVar4 / (float)(int)(fVar2 + 0.5);
        fVar4 = 0.0;
        *(float *)(param_1 + 0x20) = fVar2;
      }
    }
    else {
      if (((*(float *)(param_1 + 0x10) == -1.0) ||
          (fVar2 = *(float *)(param_1 + 0x10) * 3.0,
          fVar4 == fVar2 || fVar4 < fVar2 != (NAN(fVar4) || NAN(fVar2)))) ||
         (*(int *)(param_1 + 0x1c) != 0)) {
        FUN_00625c4c(0x3f800000,fVar4,param_1 + 0xc);
      }
      else {
        iVar1 = (int)(*(float *)(param_1 + 0x18) + 0.5);
        *(int *)(param_1 + 0x1c) = iVar1;
        fVar2 = fVar4 / (float)iVar1;
        fVar4 = 0.0;
        *(float *)(param_1 + 0x20) = fVar2;
      }
      FUN_00625c4c(0x3f800000,0,param_1);
    }
    fVar4 = fVar4 + *(float *)(param_1 + 0x24);
    fVar2 = *(float *)(param_1 + 0x2c) * 3.0;
    *(float *)(param_1 + 0x24) = fVar4;
    if (fVar4 != fVar2 && fVar4 < fVar2 == (NAN(fVar4) || NAN(fVar2))) {
      *(float *)(param_1 + 0x24) = fVar2;
    }
  }
  return;
}


// ===== 00965bfc  FUN_00965bfc =====

void FUN_00965bfc(long param_1,uint param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  
  if (((param_2 != 0) && ((*(byte *)(param_1 + 0x49) & 1) != 0)) &&
     (0.0 <= *(float *)(param_1 + 0x2c))) {
    fVar1 = *(float *)(param_1 + 0x2c) / (float)param_2;
    dVar4 = 5.0;
    if (5.0 <= (double)param_2 / 2.0) {
      dVar4 = (double)param_2 / 2.0;
    }
    *(float *)(param_1 + 0x18) = (float)dVar4;
    if (0 < *(int *)(param_1 + 0x1c)) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
      fVar1 = fVar1 - *(float *)(param_1 + 0x20);
    }
    fVar1 = *(float *)(param_1 + 0x24) - fVar1;
    fVar5 = *(float *)(param_1 + 0x28) * 1.3;
    fVar3 = 0.0;
    if (0.0 <= fVar1) {
      fVar3 = fVar1;
    }
    *(float *)(param_1 + 0x24) = fVar3;
    uVar2 = 0x3f4ccccd;
    if (fVar3 == fVar5 || fVar3 < fVar5 != (NAN(fVar3) || NAN(fVar5))) {
      uVar2 = 0x3f666666;
    }
    FUN_00625cd0(uVar2,param_1 + 0x34);
    fVar1 = *(float *)(param_1 + 0x24);
    fVar3 = *(float *)(param_1 + 0x28);
    if (fVar1 == fVar3 || fVar1 < fVar3 != (NAN(fVar1) || NAN(fVar3))) {
      FUN_00625c4c(0x3f800000,0,param_1 + 0x34);
    }
    else {
      if (*(char *)(param_1 + 0x48) == '\x01') {
        *(undefined1 *)(param_1 + 0x30) = 1;
      }
      FUN_00625c4c(0x3f800000,0x3f800000,param_1 + 0x34);
      FUN_00625cd0(0x3f666666,param_1 + 0x34);
    }
    *(bool *)(param_1 + 0x48) = *(float *)(param_1 + 0x24) < *(float *)(param_1 + 0x28);
  }
  return;
}


// ===== 00965d28  FUN_00965d28 =====

bool FUN_00965d28(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  if (*(char *)(param_1 + 0x49) != '\x01') {
    return false;
  }
  if (*(char *)(param_1 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  fVar6 = *(float *)(param_1 + 0x38);
  if (fVar6 < 0.5 != NAN(fVar6)) {
    if ((fVar6 != 0.0 && fVar6 < 0.0 == NAN(fVar6)) && (fVar6 < 0.5)) {
      uVar3 = *(uint *)(param_1 + 0x40);
      iVar2 = 99999;
      if (DAT_001f5b10 <= (double)fVar6) {
        iVar2 = (int)(1.0 / fVar6 + -1.0 + 0.5);
      }
      uVar1 = -uVar3;
      if (-1 < (int)uVar3) {
        uVar1 = uVar3;
      }
      iVar5 = -uVar1;
      if (iVar5 != -iVar2 && iVar5 + iVar2 < 0 == SBORROW4(iVar5,-iVar2)) {
        if (uVar3 != 0) {
          *(uint *)(param_1 + 0x40) = ~uVar1;
          return false;
        }
        *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
        return true;
      }
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    return false;
  }
  iVar5 = (int)(*(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x4c));
  iVar2 = 99999;
  if (DAT_001f5b10 <= (double)(1.0 - fVar6)) {
    iVar2 = (int)(1.0 / (1.0 - fVar6) + -1.0 + 0.5);
  }
  iVar4 = *(int *)(param_1 + 0x40);
  if (iVar5 <= iVar2) {
    iVar2 = iVar5;
  }
  iVar5 = -iVar4;
  if (-1 < iVar4) {
    iVar5 = iVar4;
  }
  iVar4 = 0;
  if (iVar5 < iVar2) {
    iVar4 = iVar5 + 1;
  }
  *(int *)(param_1 + 0x40) = iVar4;
  return iVar5 < iVar2;
}


// ===== 00965e60  FUN_00965e60 =====

void FUN_00965e60(float param_1,undefined4 param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = *(float *)(param_3 + 0x2c);
  fVar7 = param_1 * 0.5;
  fVar5 = *(float *)(param_3 + 0x24);
  bVar1 = false;
  if ((fVar6 != 0.0 && fVar6 < 0.0 == NAN(fVar6)) && (bVar1 = false, !NAN(param_1) && !NAN(fVar6)))
  {
    bVar1 = param_1 < fVar6;
  }
  *(float *)(param_3 + 0x28) = fVar7;
  bVar2 = false;
  bVar3 = true;
  bVar4 = false;
  if (bVar1) {
    bVar2 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar5) && !NAN(fVar7)) {
      bVar2 = fVar5 < fVar7;
      bVar3 = fVar5 == fVar7;
      bVar4 = false;
    }
  }
  if (!bVar3 && bVar2 == bVar4) {
    fVar5 = (param_1 / fVar6) * fVar5;
    *(float *)(param_3 + 0x24) = fVar5;
  }
  *(float *)(param_3 + 0x2c) = param_1;
  param_1 = param_1 * 3.0;
  if (fVar5 != param_1 && fVar5 < param_1 == (NAN(fVar5) || NAN(param_1))) {
    *(float *)(param_3 + 0x24) = param_1;
  }
  *(undefined4 *)(param_3 + 0x44) = param_2;
  return;
}


// ===== 00965eb4  FUN_00965eb4 =====

void FUN_00965eb4(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *local_18;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    FUN_00d0f740(1,lVar1 + 8);
  }
  lVar1 = param_2[3];
  lVar3 = param_2[2];
  lVar2 = param_2[1];
  local_18 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = param_2[4];
  param_1[3] = lVar1;
  param_1[2] = lVar3;
  param_1[1] = lVar2;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_18);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 5),(pthread_mutexattr_t *)&local_18);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_18);
  param_1[10] = param_3;
  FUN_007b861c(param_1 + 0xb);
  *(undefined4 *)(param_1 + 0xb7) = 0;
  param_1[0xb9] = 0;
  param_1[0xbc] = -1;
  param_1[0xbb] = 0;
  param_1[0xba] = 0;
  param_1[0xbe] = 0;
  param_1[0xbd] = 0;
  param_1[0xb1] = -1;
  *(undefined2 *)(param_1 + 0xb2) = 0;
  return;
}


// ===== 00965f68  FUN_00965f68 =====

ulong FUN_00965f68(undefined8 *param_1)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  void *pvVar4;
  long *plVar5;
  void *pvVar6;
  
  pvVar6 = (void *)param_1[0xb9];
  if (pvVar6 != (void *)0x0) {
    pvVar2 = pvVar6;
    pvVar4 = (void *)param_1[0xba];
    if (pvVar6 != (void *)param_1[0xba]) {
      do {
        pvVar2 = (void *)((long)pvVar4 + -0x20);
        if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_00966f9c((long)pvVar4 + -0x18);
        pvVar4 = pvVar2;
      } while (pvVar2 != pvVar6);
      pvVar2 = (void *)param_1[0xb9];
    }
    param_1[0xba] = pvVar6;
    operator_delete(pvVar2);
  }
  FUN_008a03f4(param_1 + 0xb);
  uVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 5));
  uVar3 = (ulong)uVar1;
  plVar5 = (long *)*param_1;
  if ((plVar5 != (long *)0x0) && (uVar3 = FUN_00d0f7a0(0xffffffff,plVar5 + 1), (int)uVar3 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00966010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar5 + 8))(plVar5);
    return uVar3;
  }
  return uVar3;
}


// ===== 0096603c  FUN_0096603c =====

int FUN_0096603c(long param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  int local_5c [11];
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x28));
  FUN_0095d0a0(param_1 + 0x58,param_2);
  bVar1 = *(byte *)(param_1 + 0x78);
  uVar6 = (ulong)bVar1;
  if (*(int *)(param_1 + 0x58) == 3) {
    if ((*(ushort *)(param_1 + 0x5ac) >> 8 & 1) != 0) {
      plVar4 = (long *)FUN_008a76b8();
      if (plVar4 == (long *)0x0) {
        uVar5 = FUN_004022fc();
        if ((uVar5 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../video/frame_encode_metadata_writer.cc",0x2a2,
                       "Cannot create ScalabilityStructure, since the scalability mode is invalid");
        }
      }
      else {
        (**(code **)(*plVar4 + 0x10))(local_5c);
        if (uVar6 <= (ulong)(long)local_5c[0]) {
          uVar6 = (long)local_5c[0];
        }
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  else if (*(int *)(param_1 + 0x58) == 2) {
    lVar3 = FUN_007b8c98(param_1 + 0x58);
    if (bVar1 <= *(byte *)(lVar3 + 10)) {
      bVar1 = *(byte *)(lVar3 + 10);
    }
    uVar6 = (ulong)bVar1;
  }
  if (uVar6 < 2) {
    uVar6 = 1;
  }
  *(ulong *)(param_1 + 0x5c0) = uVar6;
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x28));
  return iVar2;
}


// ===== 00966138  FUN_00966138 =====

int FUN_00966138(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x28));
  uVar3 = *(ulong *)(param_1 + 0x5c0);
  *(undefined4 *)(param_1 + 0x5b8) = param_3;
  if ((ulong)(*(long *)(param_1 + 0x5d0) - *(long *)(param_1 + 0x5c8) >> 5) < uVar3) {
    FUN_009661fc(param_1 + 0x5c8);
    uVar3 = *(ulong *)(param_1 + 0x5c0);
  }
  if (uVar3 != 0) {
    lVar4 = 0;
    uVar3 = 0;
    do {
      uVar2 = FUN_007cc138(param_2,uVar3);
      if ((ulong)(*(long *)(param_1 + 0x5d0) - *(long *)(param_1 + 0x5c8) >> 5) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      uVar3 = uVar3 + 1;
      *(ulong *)(*(long *)(param_1 + 0x5c8) + lVar4) = uVar2 >> 3 & 0x1fffffff;
      lVar4 = lVar4 + 0x20;
    } while (uVar3 < *(ulong *)(param_1 + 0x5c0));
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x28));
  return iVar1;
}


// ===== 009661fc  FUN_009661fc =====

void FUN_009661fc(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  void *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  void *local_58;
  
  lVar4 = *param_1;
  puVar3 = (undefined8 *)param_1[1];
  lVar9 = (long)puVar3 - lVar4;
  uVar2 = lVar9 >> 5;
  uVar1 = param_2 - uVar2;
  if (param_2 < uVar2 || uVar1 == 0) {
    if (param_2 < uVar2) {
      puVar8 = (undefined8 *)(lVar4 + param_2 * 0x20);
      while (puVar8 != puVar3) {
        if (puVar3 + -4 == (undefined8 *)0x0) goto LAB_00966524;
        FUN_00966f9c(puVar3 + -3);
        puVar3 = puVar3 + -4;
      }
      param_1[1] = (long)puVar8;
    }
  }
  else {
    uVar2 = param_1[2] - lVar4;
    if ((ulong)((long)uVar2 >> 5) < param_2) {
      if (param_2 >> 0x3b == 0) {
        uVar5 = (long)uVar2 >> 4;
        if ((ulong)((long)uVar2 >> 4) <= param_2) {
          uVar5 = param_2;
        }
        if (0x7fffffffffffffdf < uVar2) {
          uVar5 = 0x7ffffffffffffff;
        }
        if (uVar5 >> 0x3b == 0) {
          local_70 = operator_new(uVar5 * 0x20);
          local_68 = (undefined8 *)((long)local_70 + lVar9);
          local_58 = (void *)((long)local_70 + uVar5 * 0x20);
          local_60 = local_68;
          if ((uVar1 & 0x7ffffffffffffff) != 0) {
            local_60 = local_68 + uVar1 * 4;
            uVar5 = (lVar4 - (long)puVar3) - (long)local_70;
            uVar2 = uVar5 >> 5;
            uVar7 = (param_2 * 0x20 - lVar9) - 0x20 >> 5;
            uVar1 = uVar2;
            if (uVar7 <= uVar2) {
              uVar1 = uVar7;
            }
            puVar3 = local_68;
            if (0x13 < uVar1) {
              if (uVar7 <= uVar2) {
                uVar2 = uVar7;
              }
              if (((uVar5 & 0x1f) == 0) && (local_68 <= local_68 + uVar2 * 4)) {
                uVar2 = uVar1 + 1 & 3;
                uVar5 = 4;
                if (uVar2 != 0) {
                  uVar5 = uVar2;
                }
                lVar4 = (uVar1 + 1) - uVar5;
                puVar3 = local_68 + lVar4 * 4;
                lVar9 = (long)local_70 + lVar9 + 0x68;
                do {
                  lVar4 = lVar4 + -4;
                  *(undefined8 *)(lVar9 + -0x68) = 0;
                  *(long *)(lVar9 + -0x60) = lVar9 + -0x60;
                  *(long *)(lVar9 + -0x58) = lVar9 + -0x60;
                  *(undefined8 *)(lVar9 + -0x50) = 0;
                  *(undefined8 *)(lVar9 + -0x48) = 0;
                  *(long *)(lVar9 + -0x40) = lVar9 + -0x40;
                  *(long *)(lVar9 + -0x38) = lVar9 + -0x40;
                  *(undefined8 *)(lVar9 + -0x30) = 0;
                  *(undefined8 *)(lVar9 + -0x28) = 0;
                  *(long *)(lVar9 + -0x20) = lVar9 + -0x20;
                  *(long *)(lVar9 + -0x18) = lVar9 + -0x20;
                  *(undefined8 *)(lVar9 + -0x10) = 0;
                  *(undefined8 *)(lVar9 + -8) = 0;
                  *(long *)lVar9 = lVar9;
                  *(long *)(lVar9 + 8) = lVar9;
                  *(undefined8 *)(lVar9 + 0x10) = 0;
                  lVar9 = lVar9 + 0x80;
                } while (lVar4 != 0);
              }
            }
            do {
              if (puVar3 == (undefined8 *)0x0) goto LAB_00966510;
              *puVar3 = 0;
              puVar3[1] = puVar3 + 1;
              puVar3[2] = puVar3 + 1;
              puVar3[3] = 0;
              puVar3 = puVar3 + 4;
            } while (puVar3 != local_60);
          }
          FUN_0096703c(param_1,&local_70);
          puVar8 = local_68;
          puVar3 = local_60;
          while( true ) {
            if (puVar8 == puVar3) {
              if (local_70 == (void *)0x0) {
                return;
              }
              local_60 = puVar3;
              operator_delete(local_70);
              return;
            }
            if (puVar3 + -4 == (undefined8 *)0x0) break;
            FUN_00966f9c(puVar3 + -3);
            puVar3 = puVar3 + -4;
          }
LAB_00966524:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      else {
        FUN_00967160();
      }
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar8 = puVar3;
    if ((uVar1 & 0x7ffffffffffffff) != 0) {
      puVar8 = puVar3 + uVar1 * 4;
      uVar2 = (param_2 * 0x20 - lVar9) - 0x20 >> 5;
      uVar1 = (ulong)-(long)puVar3 >> 5;
      if (uVar2 <= (ulong)-(long)puVar3 >> 5) {
        uVar1 = uVar2;
      }
      if (0x11 < uVar1) {
        uVar5 = (ulong)-(long)puVar3 >> 5;
        if (uVar2 <= uVar5) {
          uVar5 = uVar2;
        }
        if (((-(long)puVar3 & 0x1fU) == 0) && (puVar3 <= puVar3 + uVar5 * 4)) {
          uVar2 = uVar1 + 1 & 3;
          uVar5 = 4;
          if (uVar2 != 0) {
            uVar5 = uVar2;
          }
          puVar6 = puVar3 + 0xd;
          lVar4 = (uVar1 + 1) - uVar5;
          puVar3 = puVar3 + lVar4 * 4;
          do {
            lVar4 = lVar4 + -4;
            puVar6[-0xd] = 0;
            puVar6[-0xc] = puVar6 + -0xc;
            puVar6[-0xb] = puVar6 + -0xc;
            puVar6[-10] = 0;
            puVar6[-9] = 0;
            puVar6[-8] = puVar6 + -8;
            puVar6[-7] = puVar6 + -8;
            puVar6[-6] = 0;
            puVar6[-5] = 0;
            puVar6[-4] = puVar6 + -4;
            puVar6[-3] = puVar6 + -4;
            puVar6[-2] = 0;
            puVar6[-1] = 0;
            *puVar6 = puVar6;
            puVar6[1] = puVar6;
            puVar6[2] = 0;
            puVar6 = puVar6 + 0x10;
          } while (lVar4 != 0);
        }
      }
      do {
        if (puVar3 == (undefined8 *)0x0) {
LAB_00966510:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *puVar3 = 0;
        puVar3[1] = puVar3 + 1;
        puVar3[2] = puVar3 + 1;
        puVar3[3] = 0;
        puVar3 = puVar3 + 4;
      } while (puVar3 != puVar8);
    }
    param_1[1] = (long)puVar8;
  }
  return;
}


// ===== 00966540  FUN_00966540 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00966540(long param_1,long param_2)

{
  long *plVar1;
  undefined1 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  ulong uStack_d8;
  long local_d0;
  long lStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_70;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x28));
  FUN_009661fc(param_1 + 0x5c8,*(undefined8 *)(param_1 + 0x5c0));
  local_70 = 0;
  uStack_88 = _UNK_00229930;
  local_90 = _DAT_00229928;
  uStack_80 = _DAT_00229938;
  uStack_b8 = _UNK_00229900;
  uStack_a8 = _UNK_00229910;
  uStack_b0 = _DAT_00229908;
  local_78._0_4_ = (uint)_UNK_00229940 & 0xffffff00;
  local_78._5_3_ = (undefined3)((ulong)_UNK_00229940 >> 0x28);
  local_78._0_5_ = (uint5)(uint)local_78;
  uStack_98 = _UNK_00229920;
  local_a0 = _DAT_00229918;
  uStack_d8 = _UNK_002298e0;
  lStack_c8 = _UNK_002298f0;
  local_d0 = _DAT_002298e8;
  local_c0 = _DAT_002298f8 & 0xffffff0000000000;
  local_e0 = CONCAT44((int)((ulong)_DAT_002298d8 >> 0x20),*(undefined4 *)(param_2 + 0x10));
  uVar4 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  if ((long)uVar4 < 0) {
    uStack_d8 = -(-uVar4 / 1000) - (ulong)(500 < -uVar4 % 1000);
  }
  else {
    uStack_d8 = uVar4 / 1000;
    if (499 < uVar4 % 1000) {
      uStack_d8 = uStack_d8 + 1;
    }
  }
  lStack_c8 = *(long *)(param_2 + 0x20);
  local_d0 = *(long *)(param_2 + 0x18);
  local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(param_2 + 0x48));
  if (*(char *)(param_2 + 0x90) != '\0') {
    FUN_00659adc((long)&local_c0 + 4,param_2 + 0x4c);
    local_78 = CONCAT71(local_78._1_7_,1);
  }
  uVar4 = FUN_007bf3cc(param_2);
  lVar5 = FUN_007bf3e8(param_2);
  local_f0 = *(undefined8 *)(param_2 + 0xa0);
  uStack_e8 = *(ulong *)(param_2 + 0xa8);
  if (*(char *)(param_2 + 0xb0) == '\0') {
    local_f0 = 0;
    uStack_e8 = uVar4 & 0xffffffff | lVar5 << 0x20;
  }
  uVar2 = FUN_007beaa4(&local_f0);
  lVar5 = *(long *)(param_2 + 0xb8);
  local_78 = CONCAT35(local_78._5_3_,CONCAT14(uVar2,(uint)local_78)) & 0xffffff01ffffffff;
  if (lVar5 != 0) {
    FUN_00d0f740(1,lVar5);
  }
  if (local_70 != 0) {
    FUN_00659370();
  }
  uVar4 = *(ulong *)(param_1 + 0x5c0);
  local_70 = lVar5;
  if (uVar4 != 0) {
    lVar5 = 0;
    uVar10 = 0;
    do {
      lVar9 = *(long *)(param_1 + 0x5c8);
      uVar8 = *(long *)(param_1 + 0x5d0) - lVar9 >> 5;
      if (uVar8 <= uVar10) {
LAB_009668e4:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      if (*(long *)(lVar9 + lVar5) != 0) {
        if (*(long *)(lVar9 + lVar5 + 0x18) == 0x96) {
          uVar4 = *(long *)(param_1 + 0x5f0) + 1;
          *(ulong *)(param_1 + 0x5f0) = uVar4;
          if ((uVar4 < 3) || (uVar4 % 100000 == 0)) {
            uVar4 = FUN_004022fc();
            if ((uVar4 & 1) == 0) {
              FUN_00623bb0(&DAT_001f4e98,"../../video/frame_encode_metadata_writer.cc",0x41a,
                           "Too many frames in the encode_start_list. Did encoder stall?");
            }
            if ((*(long *)(param_1 + 0x5f0) == 2) && (uVar4 = FUN_004022fc(), (uVar4 & 1) == 0)) {
              FUN_00623bb0(&DAT_001f4e98,"../../video/frame_encode_metadata_writer.cc",0x432,
                           "Too many log messages. Further stalled encoderwarnings will be throttled."
                          );
            }
          }
          (**(code **)(**(long **)(param_1 + 0x50) + 0x18))(*(long **)(param_1 + 0x50),1);
          if ((ulong)(*(long *)(param_1 + 0x5d0) - *(long *)(param_1 + 0x5c8) >> 5) <= uVar10)
          goto LAB_009668e4;
          FUN_0096690c(*(long *)(param_1 + 0x5c8) + lVar5 + 8);
          lVar9 = *(long *)(param_1 + 0x5c8);
          uVar8 = *(long *)(param_1 + 0x5d0) - lVar9 >> 5;
        }
        if (uVar8 <= uVar10) goto LAB_009668e4;
        plVar6 = (long *)operator_new(0x88);
        if (plVar6 == (long *)0x0) {
LAB_009668f8:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *plVar6 = 0;
        plVar6[1] = 0;
        if (plVar6 + 2 == (long *)0x0) goto LAB_009668f8;
        *(undefined1 *)((long)plVar6 + 0x34) = 0;
        plVar6[3] = uStack_d8;
        plVar6[2] = local_e0;
        plVar6[5] = lStack_c8;
        plVar6[4] = local_d0;
        *(undefined4 *)(plVar6 + 6) = (undefined4)local_c0;
        *(undefined1 *)(plVar6 + 0xf) = 0;
        if ((char)local_78 == '\x01') {
          FUN_00659adc((undefined1 *)((long)plVar6 + 0x34),(long)&local_c0 + 4);
          *(undefined1 *)(plVar6 + 0xf) = 1;
        }
        *(undefined1 *)((long)plVar6 + 0x7c) = local_78._4_1_;
        plVar6[0x10] = local_70;
        if (local_70 != 0) {
          FUN_00d0f740(1);
        }
        plVar1 = (long *)(lVar9 + lVar5 + 8);
        plVar6[1] = (long)plVar1;
        lVar7 = *plVar1;
        *plVar6 = lVar7;
        *(long **)(lVar7 + 8) = plVar6;
        *plVar1 = (long)plVar6;
        *(long *)(lVar9 + lVar5 + 0x18) = *(long *)(lVar9 + lVar5 + 0x18) + 1;
        uVar4 = *(ulong *)(param_1 + 0x5c0);
      }
      uVar10 = uVar10 + 1;
      lVar5 = lVar5 + 0x20;
    } while (uVar10 < uVar4);
  }
  if (local_70 != 0) {
    FUN_00659370(local_70);
  }
  iVar3 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x28));
  return iVar3;
}


// ===== 0096690c  FUN_0096690c =====

void FUN_0096690c(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/list:1394: libc++ Hardening assertion !empty() failed: list::pop_front() called with empty list\n"
              );
  }
  plVar2 = *(long **)(param_1 + 8);
  plVar1 = (long *)plVar2[1];
  *(long **)(*plVar2 + 8) = plVar1;
  *plVar1 = *plVar2;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -1;
  if (plVar2 != (long *)0xfffffffffffffff0) {
    if (plVar2[0x10] != 0) {
      FUN_00659370();
    }
    if (plVar2 != (long *)0x0) {
      operator_delete(plVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0096699c  FUN_0096699c =====

int FUN_0096699c(long param_1,ulong param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  byte bVar8;
  undefined1 auVar9 [16];
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x28));
  uVar4 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  uVar6 = uVar4 / 1000;
  if (499 < uVar4 % 1000) {
    uVar6 = uVar6 + 1;
  }
  if ((uVar4 & 0x8000000000000000) != 0) {
    uVar6 = -(-uVar4 / 1000) - (ulong)(500 < -uVar4 % 1000);
  }
  auVar9 = FUN_00966b18(param_1,param_2,param_3);
  if (param_2 < (ulong)(*(long *)(param_1 + 0x5d0) - *(long *)(param_1 + 0x5c8) >> 5)) {
    uVar1 = *(uint *)(param_1 + 0x5b8);
    bVar8 = 0;
    if ((uVar1 != 0) &&
       (uVar4 = *(ulong *)(*(long *)(param_1 + 0x5c8) + param_2 * 0x20), uVar4 != 0)) {
      uVar2 = 0;
      if ((ulong)uVar1 != 0) {
        uVar2 = uVar4 / uVar1;
      }
      bVar8 = 0;
      if ((uVar2 * *(ushort *)(param_1 + 0x590)) / 100 <= *(ulong *)(param_3 + 0x90)) {
        bVar8 = 2;
      }
    }
  }
  else {
    bVar8 = 0;
  }
  lVar7 = *(long *)(param_1 + 0x5e0);
  lVar5 = *(long *)(param_3 + 0x10);
  if (((lVar7 == -1) || (lVar5 == lVar7)) || (*(long *)(param_1 + 0x588) <= lVar5 - lVar7)) {
    bVar8 = bVar8 | 1;
    *(long *)(param_1 + 0x5e0) = lVar5;
  }
  if ((auVar9 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    bVar8 = 0xff;
  }
  else {
    FUN_007bcaec(param_3,auVar9._0_8_,uVar6);
  }
  *(byte *)(param_3 + 0x28) = bVar8;
  iVar3 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x28));
  return iVar3;
}


// ===== 00966b18  FUN_00966b18 =====

undefined1  [16] FUN_00966b18(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  uVar9 = 0xaaaaaaaaaaaaaa00;
  if (param_2 < (ulong)(*(long *)(param_1 + 0x5d0) - *(long *)(param_1 + 0x5c8) >> 5)) {
    lVar1 = *(long *)(param_1 + 0x5c8) + param_2 * 0x20;
    lVar8 = *(long *)(lVar1 + 0x18);
    while (lVar8 != 0) {
      uVar2 = *(uint *)(param_3 + 0x98);
      uVar3 = *(uint *)(*(long *)(lVar1 + 0x10) + 0x10);
      if (uVar2 - uVar3 == -0x80000000) {
        if (uVar2 <= uVar3) break;
      }
      else if ((uVar2 == uVar3) || ((int)(uVar2 - uVar3) < 0)) break;
      (**(code **)(**(long **)(param_1 + 0x50) + 0x18))(*(long **)(param_1 + 0x50),1);
      FUN_0096690c(lVar1 + 8);
      lVar8 = *(long *)(lVar1 + 0x18);
    }
    *(bool *)(param_3 + 0x20) = *(int *)(param_1 + 0x580) == 1;
    if ((*(long *)(lVar1 + 0x18) != 0) &&
       (lVar8 = *(long *)(lVar1 + 0x10), *(int *)(lVar8 + 0x10) == *(int *)(param_3 + 0x98))) {
      uVar10 = *(undefined8 *)(lVar8 + 0x18);
      *(long *)(param_3 + 0x10) = *(long *)(lVar8 + 0x28) / 1000;
      if ((*(long *)(lVar1 + 0x18) == 0) ||
         ((*(undefined8 *)(param_3 + 8) = *(undefined8 *)(*(long *)(lVar1 + 0x10) + 0x20),
          *(long *)(lVar1 + 0x18) == 0 ||
          (*(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(*(long *)(lVar1 + 0x10) + 0x30),
          *(long *)(lVar1 + 0x18) == 0)))) {
LAB_00966dc0:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/list:830: libc++ Hardening assertion !empty() failed: list::front called on empty list\n"
                  );
      }
      lVar8 = *(long *)(lVar1 + 0x10);
      cVar4 = *(char *)(param_3 + 0x124);
      if (cVar4 == *(char *)(lVar8 + 0x78)) {
        if (cVar4 != '\0') {
          FUN_00659b1c(param_3 + 0xe0,lVar8 + 0x34);
        }
      }
      else if (cVar4 == '\0') {
        if (param_3 == -0xe0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        FUN_00659adc(param_3 + 0xe0,lVar8 + 0x34);
        *(undefined1 *)(param_3 + 0x124) = 1;
      }
      else {
        *(undefined1 *)(param_3 + 0x124) = 0;
      }
      if (*(long *)(lVar1 + 0x18) == 0) goto LAB_00966dc0;
      if (*(char *)(*(long *)(lVar1 + 0x10) + 0x7c) == '\x01') {
        bVar5 = *(int *)(param_3 + 0x18) != 3;
      }
      else {
        bVar5 = false;
      }
      *(bool *)(param_3 + 0x13a) = bVar5;
      if (*(long *)(lVar1 + 0x18) == 0) goto LAB_00966dc0;
      lVar8 = *(long *)(*(long *)(lVar1 + 0x10) + 0x80);
      if (lVar8 != 0) {
        FUN_00d0f740(1,lVar8);
      }
      lVar7 = *(long *)(param_3 + 0x130);
      *(long *)(param_3 + 0x130) = lVar8;
      if (lVar7 != 0) {
        FUN_00659370();
      }
      FUN_0096690c(lVar1 + 8);
      uVar9 = 0xaaaaaaaaaaaaaa01;
      goto LAB_00966d0c;
    }
    uVar6 = *(long *)(param_1 + 0x5e8) + 1;
    *(ulong *)(param_1 + 0x5e8) = uVar6;
    if ((uVar6 < 3) || (uVar6 % 100000 == 0)) {
      uVar6 = FUN_004022fc();
      if ((uVar6 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../video/frame_encode_metadata_writer.cc",0x8a2,
                     "Frame with no encode started time recordings. Encoder may be reordering frames or not preserving RTP timestamps."
                    );
      }
      if ((*(long *)(param_1 + 0x5e8) == 2) && (uVar6 = FUN_004022fc(), (uVar6 & 1) == 0)) {
        FUN_00623bb0(&DAT_001f4e98,"../../video/frame_encode_metadata_writer.cc",0x8c2,
                     "Too many log messages. Further frames reordering warnings will be throttled.")
        ;
      }
    }
  }
  uVar10 = 0xaaaaaaaaaaaaaa00;
LAB_00966d0c:
  auVar11._8_8_ = uVar9;
  auVar11._0_8_ = uVar10;
  return auVar11;
}


// ===== 00966de8  FUN_00966de8 =====

void FUN_00966de8(undefined8 param_1,int *param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  long *local_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  if (((param_2 != (int *)0x0) && (*param_2 == 4)) && (*(int *)(param_3 + 0x18) == 3)) {
    plVar4 = *(long **)(param_3 + 0x88);
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    local_30 = &DAT_aaaaaaaaaaaaaaaa;
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x20))();
    }
    lVar1 = param_3 + 0xe0;
    if (*(char *)(param_3 + 0x124) == '\0') {
      lVar1 = 0;
    }
    plVar2 = (long *)0x0;
    if (*(long *)(param_3 + 0x90) != 0) {
      plVar2 = plVar4;
    }
    FUN_0087cf78(&local_40,plVar2,*(long *)(param_3 + 0x90),lVar1);
    local_50 = local_30;
    puStack_58 = puStack_38;
    puStack_38 = (undefined1 *)0x0;
    local_30 = (undefined1 *)0x0;
    local_60 = local_40;
    local_40 = (undefined1 *)0x0;
    FUN_007bc714(&local_48,&local_60);
    plVar4 = local_48;
    local_48 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)*plVar4)(plVar4);
    }
    if (*(long **)(param_3 + 0x88) != (long *)0x0) {
      (**(code **)(**(long **)(param_3 + 0x88) + 8))();
    }
    *(long **)(param_3 + 0x88) = plVar4;
    uVar5 = (**(code **)(*plVar4 + 0x28))(plVar4);
    *(undefined8 *)(param_3 + 0x90) = uVar5;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 8))();
    }
    puVar3 = local_50;
    local_50 = (undefined1 *)0x0;
    if (puVar3 != (undefined1 *)0x0) {
      operator_delete__(puVar3);
    }
    puVar3 = local_30;
    local_30 = (undefined1 *)0x0;
    if (puVar3 != (undefined1 *)0x0) {
      operator_delete__(puVar3);
    }
  }
  return;
}


// ===== 00966f2c  FUN_00966f2c =====

int FUN_00966f2c(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x28));
  lVar3 = *(long *)(param_1 + 0x5d0);
  for (lVar2 = *(long *)(param_1 + 0x5c8); lVar2 != lVar3; lVar2 = lVar2 + 0x20) {
    FUN_00966f9c(lVar2 + 8);
  }
  *(undefined8 *)(param_1 + 0x5e0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x5f0) = 0;
  *(undefined8 *)(param_1 + 0x5e8) = 0;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x28));
  return iVar1;
}


// ===== 00966f9c  FUN_00966f9c =====

void FUN_00966f9c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    *(long **)(*plVar1 + 8) = plVar2;
    *plVar2 = *plVar1;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      if (plVar1 == (long *)0xfffffffffffffff0) {
LAB_00967028:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar2 = (long *)plVar1[1];
      if (plVar1[0x10] != 0) {
        FUN_00659370();
      }
      if (plVar1 == (long *)0x0) goto LAB_00967028;
      operator_delete(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}


// ===== 0096703c  FUN_0096703c =====

void FUN_0096703c(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  puVar7 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar7 + (param_2[1] - (long)puVar2));
  puVar8 = puVar7;
  puVar9 = puVar1;
  if (puVar2 != puVar7) {
    do {
      if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar3 = *puVar8;
      puVar9[2] = puVar9 + 1;
      puVar9[3] = 0;
      *puVar9 = uVar3;
      puVar9[1] = puVar9 + 1;
      for (puVar10 = (undefined8 *)puVar8[2]; puVar10 != puVar8 + 1;
          puVar10 = (undefined8 *)puVar10[1]) {
        FUN_00967178(puVar9 + 1,puVar10 + 2);
      }
      puVar8 = puVar8 + 4;
      puVar9 = puVar9 + 4;
    } while (puVar8 != puVar2);
    do {
      if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_00966f9c(puVar7 + 1);
      puVar7 = puVar7 + 4;
    } while (puVar7 != puVar2);
  }
  param_2[1] = (long)puVar1;
  lVar4 = *param_1;
  lVar6 = param_1[2];
  param_1[1] = lVar4;
  lVar11 = param_2[1];
  lVar5 = param_2[3];
  param_1[1] = param_2[2];
  *param_1 = lVar11;
  param_1[2] = lVar5;
  param_2[2] = lVar4;
  param_2[3] = lVar6;
  *param_2 = lVar4;
  param_2[1] = lVar4;
  return;
}


// ===== 00967160  FUN_00967160 =====

void FUN_00967160(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00967178  FUN_00967178 =====

void FUN_00967178(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  plVar2 = (long *)operator_new(0x88);
  if (plVar2 != (long *)0x0) {
    *plVar2 = 0;
    plVar2[1] = 0;
    if (plVar2 + 2 != (long *)0x0) {
      lVar5 = param_2[1];
      lVar4 = *param_2;
      lVar7 = param_2[3];
      lVar6 = param_2[2];
      lVar3 = param_2[0xd];
      lVar1 = param_2[4];
      *(undefined1 *)((long)plVar2 + 0x34) = 0;
      plVar2[3] = lVar5;
      plVar2[2] = lVar4;
      plVar2[5] = lVar7;
      plVar2[4] = lVar6;
      *(int *)(plVar2 + 6) = (int)lVar1;
      *(undefined1 *)(plVar2 + 0xf) = 0;
      if ((char)lVar3 == '\x01') {
        FUN_00659adc((undefined1 *)((long)plVar2 + 0x34),(long)param_2 + 0x24);
        *(undefined1 *)(plVar2 + 0xf) = 1;
      }
      lVar3 = param_2[0xe];
      *(undefined1 *)((long)plVar2 + 0x7c) = *(undefined1 *)((long)param_2 + 0x6c);
      plVar2[0x10] = lVar3;
      if (lVar3 != 0) {
        FUN_00d0f740(1);
      }
      lVar3 = *param_1;
      *plVar2 = lVar3;
      plVar2[1] = (long)param_1;
      *(long **)(lVar3 + 8) = plVar2;
      *param_1 = (long)plVar2;
      param_1[2] = param_1[2] + 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00967248  FUN_00967248 =====

void FUN_00967248(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  FUN_0097c98c(param_1 + 2);
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 100) = 1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  *(undefined1 *)((long)param_1 + 0x8c) = 0;
  return;
}


// ===== 009672a4  FUN_009672a4 =====

void FUN_009672a4(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = *(void **)(param_1 + 0x68);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = *(void **)(param_1 + 0x70);
  uVar4 = (ulong)((long)pvVar2 + (-8 - ((long)pvVar2 << 0x3d))) >> 3;
  uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3d) - ((long)pvVar1 - (long)pvVar2)) >> 3;
  if (uVar4 <= uVar3) {
    uVar3 = uVar4;
  }
  if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 7U) == 0)) {
    uVar3 = uVar3 & 0x1ffffffffffffffe;
    pvVar2 = (void *)((long)pvVar2 + uVar3 * -8);
    do {
      uVar3 = uVar3 - 2;
    } while (uVar3 != 0);
  }
  do {
    if (pvVar2 == pvVar1) {
      *(void **)(param_1 + 0x70) = pvVar1;
      operator_delete(pvVar1);
      return;
    }
    pvVar2 = (void *)((long)pvVar2 + -8);
  } while (pvVar2 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0096734c  FUN_0096734c =====

void FUN_0096734c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [64];
  
  plVar1 = (long *)param_1[1];
  param_1[1] = param_2;
  if ((plVar1 != param_2) && (plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x18))(plVar1,*param_1);
  }
  if (param_2 != (long *)0x0) {
    uVar2 = *param_1;
    FUN_009673dc(auStack_70,param_1);
    (**(code **)(*param_2 + 0x10))(param_2,uVar2,auStack_70);
    FUN_007bfb14(auStack_70);
  }
  return;
}


// ===== 009673dc  FUN_009673dc =====

void FUN_009673dc(undefined8 *param_1,long param_2)

{
  char cVar1;
  undefined4 *puVar2;
  long lVar3;
  double *pdVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007bfa40(param_1);
  *(undefined1 *)param_1 = *(undefined1 *)(param_2 + 0x60);
  puVar2 = (undefined4 *)FUN_0097cb9c(param_2 + 0x10);
  uVar8 = *puVar2;
  if (*(char *)(puVar2 + 2) == '\0') {
    uVar8 = 0x7fffffff;
  }
  *(undefined4 *)((long)param_1 + 4) = uVar8;
  lVar3 = FUN_0097cba4(param_2 + 0x10);
  if (*(char *)(lVar3 + 8) == '\x01') {
    puVar2 = (undefined4 *)FUN_0097cba4(param_2 + 0x10);
    if ((*(byte *)(puVar2 + 2) & 1) == 0) goto LAB_00967540;
    uVar8 = *puVar2;
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
    uVar8 = 0;
  }
  *(undefined4 *)(param_1 + 1) = uVar8;
  *(undefined1 *)((long)param_1 + 0xc) = uVar5;
  lVar3 = FUN_0097cbb0(param_2 + 0x10);
  if (*(char *)(lVar3 + 8) == '\x01') {
    pdVar4 = (double *)FUN_0097cbb0(param_2 + 0x10);
    if (((ulong)pdVar4[1] & 1) == 0) {
LAB_00967540:
                    /* WARNING: Subroutine does not return */
      FUN_005dc08c();
    }
    iVar6 = (int)*pdVar4;
  }
  else {
    iVar6 = 0x7fffffff;
  }
  cVar1 = *(char *)(param_2 + 0x48);
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(param_2 + 100);
  if (cVar1 == '\x01') {
    iVar7 = *(int *)(param_2 + 0x40);
  }
  else {
    iVar7 = 0x7fffffff;
  }
  cVar1 = *(char *)(param_2 + 0x58);
  if (*(int *)((long)param_1 + 4) <= iVar7) {
    iVar7 = *(int *)((long)param_1 + 4);
  }
  *(int *)((long)param_1 + 4) = iVar7;
  iVar7 = iVar6;
  if ((cVar1 == '\x01') &&
     (iVar7 = (int)*(double *)(param_2 + 0x50), iVar6 <= (int)*(double *)(param_2 + 0x50))) {
    iVar7 = iVar6;
  }
  *(int *)(param_1 + 2) = iVar7;
  if (param_1 + 3 != (undefined8 *)(param_2 + 0x68)) {
    FUN_00967758(param_1 + 3,*(long *)(param_2 + 0x68),*(long *)(param_2 + 0x70),
                 *(long *)(param_2 + 0x70) - *(long *)(param_2 + 0x68) >> 3);
  }
  uVar9 = *(undefined8 *)(param_2 + 0x84);
  uVar5 = *(undefined1 *)(param_2 + 0x8c);
  *(undefined1 *)((long)param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x80);
  param_1[6] = uVar9;
  *(undefined1 *)(param_1 + 7) = uVar5;
  return;
}


// ===== 00967544  FUN_00967544 =====

void FUN_00967544(long param_1)

{
  if (*(long **)(param_1 + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00967558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0x20))();
    return;
  }
  return;
}


// ===== 00967560  FUN_00967560 =====

void FUN_00967560(undefined8 *param_1)

{
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  if (param_1[1] != 0) {
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_009673dc(&local_60);
    (**(code **)(*(long *)param_1[1] + 0x10))((long *)param_1[1],*param_1,&local_60);
    FUN_007bfb14(&local_60);
  }
  return;
}


// ===== 009675c8  FUN_009675c8 =====

undefined1  [16] FUN_009675c8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x50);
}


// ===== 009675d8  FUN_009675d8 =====

undefined4 FUN_009675d8(long param_1)

{
  return *(undefined4 *)(param_1 + 100);
}


// ===== 009675e4  FUN_009675e4 =====

long FUN_009675e4(long param_1)

{
  return param_1 + 0x68;
}


// ===== 009675f0  FUN_009675f0 =====

undefined1 FUN_009675f0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x80);
}


// ===== 009675fc  FUN_009675fc =====

undefined1  [16] FUN_009675fc(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._12_4_ = 0;
  auVar1._0_12_ = *(undefined1 (*) [12])(param_1 + 0x84);
  return auVar1;
}


// ===== 00967610  FUN_00967610 =====

void FUN_00967610(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar5 = *param_2;
  *(undefined8 *)(param_1 + 0x18) = param_2[1];
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}


// ===== 00967628  FUN_00967628 =====

void FUN_00967628(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_2;
  *(undefined1 *)(param_1 + 0x58) = param_3;
  return;
}


// ===== 00967638  FUN_00967638 =====

void FUN_00967638(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x60) = param_2;
  return;
}


// ===== 00967644  FUN_00967644 =====

void FUN_00967644(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 100) = param_2;
  return;
}


// ===== 00967650  FUN_00967650 =====

void FUN_00967650(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = *(void **)(param_1 + 0x68);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(param_1 + 0x70);
    uVar4 = (ulong)((long)pvVar2 + (-8 - ((long)pvVar2 << 0x3d))) >> 3;
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3d) - ((long)pvVar1 - (long)pvVar2)) >> 3;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 7U) == 0)) {
      uVar3 = uVar3 & 0x1ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -8);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -8);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    *(void **)(param_1 + 0x70) = pvVar1;
    operator_delete(pvVar1);
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  *(undefined8 *)(param_1 + 0x68) = *param_2;
  *(undefined8 *)(param_1 + 0x70) = param_2[1];
  *(undefined8 *)(param_1 + 0x78) = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


// ===== 0096773c  FUN_0096773c =====

void FUN_0096773c(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x80) = param_2;
  return;
}


// ===== 00967748  FUN_00967748 =====

void FUN_00967748(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined8 *)(param_1 + 0x84) = param_2;
  *(undefined1 *)(param_1 + 0x8c) = param_3;
  return;
}


// ===== 00967758  FUN_00967758 =====

void FUN_00967758(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

{
  size_t __n;
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  size_t __n_00;
  void *pvVar6;
  
  uVar2 = param_1[2];
  pvVar6 = (void *)*param_1;
  if ((ulong)((long)(uVar2 - (long)pvVar6) >> 3) < param_4) {
    if (pvVar6 == (void *)0x0) {
LAB_009678fc:
      if (param_4 >> 0x3d == 0) {
        uVar5 = (long)uVar2 >> 2;
        if ((ulong)((long)uVar2 >> 2) <= param_4) {
          uVar5 = param_4;
        }
        if (0x7ffffffffffffff7 < uVar2) {
          uVar5 = 0x1fffffffffffffff;
        }
        if (uVar5 >> 0x3d == 0) {
          pvVar6 = operator_new(uVar5 * 8);
          *param_1 = pvVar6;
          param_1[1] = pvVar6;
          param_1[2] = (void *)((long)pvVar6 + uVar5 * 8);
          memcpy(pvVar6,param_2,param_3 - (long)param_2);
          lVar1 = (long)pvVar6 + (param_3 - (long)param_2);
          goto LAB_00967958;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_007bfbbc();
    }
    pvVar3 = (void *)param_1[1];
    uVar5 = (ulong)((long)pvVar3 + (-8 - ((long)pvVar3 << 0x3d))) >> 3;
    uVar2 = (ulong)(((long)pvVar6 - (long)pvVar3 << 0x3d) - ((long)pvVar6 - (long)pvVar3)) >> 3;
    if (uVar5 <= uVar2) {
      uVar2 = uVar5;
    }
    if ((1 < uVar2) && ((((int)pvVar6 - (int)pvVar3 | -(int)pvVar3) & 7U) == 0)) {
      uVar2 = uVar2 & 0x1ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar2 * -8);
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    do {
      if (pvVar3 == pvVar6) {
        param_1[1] = pvVar6;
        operator_delete(pvVar6);
        uVar2 = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        goto LAB_009678fc;
      }
      pvVar3 = (void *)((long)pvVar3 + -8);
    } while (pvVar3 != (void *)0x0);
  }
  else {
    __n = param_1[1] - (long)pvVar6;
    if ((ulong)((long)__n >> 3) < param_4) {
      memmove(pvVar6,param_2,__n);
      pvVar6 = (void *)param_1[1];
      __n_00 = param_3 - (long)((long)param_2 + __n);
      memmove(pvVar6,(void *)((long)param_2 + __n),__n_00);
      lVar1 = (long)pvVar6 + __n_00;
LAB_00967958:
      param_1[1] = lVar1;
      return;
    }
    memmove(pvVar6,param_2,param_3 - (long)param_2);
    lVar1 = param_1[1];
    lVar4 = (long)pvVar6 + (param_3 - (lVar1 + (long)param_2));
    uVar2 = (ulong)((lVar4 << 0x3d) - lVar4) >> 3;
    uVar5 = (lVar1 - (lVar1 << 0x3d)) - 8U >> 3;
    if (uVar5 <= uVar2) {
      uVar2 = uVar5;
    }
    lVar4 = (long)pvVar6 + (param_3 - (long)param_2);
    if ((1 < uVar2) &&
       (((((int)pvVar6 + (int)param_3) - ((int)lVar1 + (int)param_2) | -(int)lVar1) & 7U) == 0)) {
      uVar2 = uVar2 & 0x1ffffffffffffffe;
      lVar1 = lVar1 + uVar2 * -8;
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    do {
      if (lVar1 == lVar4) {
        param_1[1] = lVar4;
        return;
      }
      lVar1 = lVar1 + -8;
    } while (lVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00967980  FUN_00967980 =====

void FUN_00967980(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_00d3e7d8;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 100) = 0;
  return;
}


// ===== 009679ac  FUN_009679ac =====

void FUN_009679ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3e7d8;
  if (*(char *)(param_1 + 7) == '\x01') {
    FUN_0087d8c4(param_1 + 1);
    return;
  }
  return;
}


