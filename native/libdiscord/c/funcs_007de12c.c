// ===== 007de12c  FUN_007de12c =====

undefined1 FUN_007de12c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}


// ===== 007de138  FUN_007de138 =====

void FUN_007de138(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xc) = param_2;
  return;
}


// ===== 007de144  FUN_007de144 =====

undefined1  [16] FUN_007de144(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x10);
}


// ===== 007de154  FUN_007de154 =====

void FUN_007de154(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}


// ===== 007de164  FUN_007de164 =====

undefined4 FUN_007de164(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}


// ===== 007de170  FUN_007de170 =====

void FUN_007de170(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}


// ===== 007de17c  FUN_007de17c =====

undefined4 FUN_007de17c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}


// ===== 007de188  FUN_007de188 =====

void FUN_007de188(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// ===== 007de194  FUN_007de194 =====

long FUN_007de194(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0x30);
  if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
    plVar1 = (long *)*(long *)(param_1 + 0x30);
  }
  lVar2 = 0;
  if (*(ulong *)(param_1 + 0x28) >> 1 != 0) {
    lVar2 = (long)plVar1;
  }
  return lVar2;
}


// ===== 007de1b8  FUN_007de1b8 =====

void FUN_007de1b8(long param_1,undefined8 param_2,long param_3)

{
  FUN_007dde24(param_1 + 0x28,param_2,(param_3 << 3) >> 3);
  return;
}


// ===== 007de1c8  FUN_007de1c8 =====

long FUN_007de1c8(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0x60);
  if ((*(ulong *)(param_1 + 0x58) & 1) != 0) {
    plVar1 = (long *)*(long *)(param_1 + 0x60);
  }
  lVar2 = 0;
  if (*(ulong *)(param_1 + 0x58) >> 1 != 0) {
    lVar2 = (long)plVar1;
  }
  return lVar2;
}


// ===== 007de1ec  FUN_007de1ec =====

void FUN_007de1ec(long param_1,undefined8 param_2,long param_3)

{
  FUN_0060adc4(param_1 + 0x58,param_2,(param_3 << 2) >> 2);
  return;
}


// ===== 007de1fc  FUN_007de1fc =====

undefined1 FUN_007de1fc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x88);
}


// ===== 007de208  FUN_007de208 =====

void FUN_007de208(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x88) = param_2;
  return;
}


// ===== 007de214  FUN_007de214 =====

undefined1 FUN_007de214(long param_1)

{
  return *(undefined1 *)(param_1 + 0x89);
}


// ===== 007de220  FUN_007de220 =====

void FUN_007de220(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x89) = param_2;
  return;
}


// ===== 007de22c  FUN_007de22c =====

undefined4 FUN_007de22c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x8c);
}


// ===== 007de238  FUN_007de238 =====

void FUN_007de238(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x8c) = param_2;
  return;
}


// ===== 007de244  FUN_007de244 =====

long FUN_007de244(long param_1)

{
  return param_1 + 0x90;
}


// ===== 007de250  FUN_007de250 =====

void FUN_007de250(long param_1,long param_2)

{
  byte bVar1;
  long local_28;
  undefined1 uStack_1;
  
  bVar1 = *(byte *)(param_2 + 0x668);
  local_28 = param_1 + 0x90;
  if ((ulong)*(byte *)(param_1 + 0x6f8) == 0xff) {
    if (bVar1 == 0xff) {
      return;
    }
  }
  else if (bVar1 == 0xff) {
    (*(code *)(&PTR_FUN_00d38168)[*(byte *)(param_1 + 0x6f8)])(&uStack_1,param_1 + 0x90);
    *(undefined1 *)(param_1 + 0x6f8) = 0xff;
    return;
  }
  (*(code *)(&PTR_FUN_00d38188)[bVar1])(&local_28,local_28,param_2);
  return;
}


// ===== 007de2e0  FUN_007de2e0 =====

undefined4 FUN_007de2e0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x700);
}


// ===== 007de2ec  FUN_007de2ec =====

void FUN_007de2ec(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x700) = param_2;
  return;
}


// ===== 007de2f8  FUN_007de2f8 =====

void FUN_007de2f8(undefined8 *param_1,long param_2)

{
  ulong __n;
  void *__dest;
  long lVar1;
  void *__src;
  
  __src = *(void **)(param_2 + 0x708);
  lVar1 = *(long *)(param_2 + 0x710);
  *param_1 = 0;
  param_1[1] = 0;
  __n = lVar1 - (long)__src;
  param_1[2] = 0;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005da79c();
    }
    __dest = operator_new(__n);
    *param_1 = __dest;
    param_1[2] = (long)__dest + __n;
    memcpy(__dest,__src,__n);
    param_1[1] = (long)__dest + __n;
  }
  return;
}


// ===== 007de368  FUN_007de368 =====

void FUN_007de368(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = *(void **)(param_1 + 0x708);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(param_1 + 0x710);
    uVar4 = (ulong)((long)pvVar2 + (-4 - ((long)pvVar2 << 0x3e))) >> 2;
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3e) - ((long)pvVar1 - (long)pvVar2)) >> 2;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 3U) == 0)) {
      uVar3 = uVar3 & 0x3ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -4);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -4);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    *(void **)(param_1 + 0x710) = pvVar1;
    operator_delete(pvVar1);
    *(undefined8 *)(param_1 + 0x708) = 0;
    *(undefined8 *)(param_1 + 0x710) = 0;
    *(undefined8 *)(param_1 + 0x718) = 0;
  }
  *(undefined8 *)(param_1 + 0x708) = *param_2;
  *(undefined8 *)(param_1 + 0x710) = param_2[1];
  *(undefined8 *)(param_1 + 0x718) = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


// ===== 007de454  FUN_007de454 =====

void FUN_007de454(long *param_1)

{
  byte bVar1;
  long lVar2;
  undefined1 uStack_1;
  
  lVar2 = *param_1;
  bVar1 = *(byte *)(lVar2 + 0x668);
  if (bVar1 != 0) {
    if (bVar1 != 0xff) {
      (*(code *)(&PTR_FUN_00d38168)[bVar1])(&uStack_1,lVar2);
    }
    *(undefined1 *)(lVar2 + 0x668) = 0xff;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(undefined1 *)(lVar2 + 0x668) = 0;
  }
  return;
}


// ===== 007de4c4  FUN_007de4c4 =====

void FUN_007de4c4(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uStack_21;
  
  puVar2 = (undefined8 *)*param_1;
  bVar1 = *(byte *)(puVar2 + 0xcd);
  if (bVar1 != 0xff) {
    if (bVar1 == 1) {
      uVar4 = param_3[1];
      uVar3 = *param_3;
      *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_3 + 2);
      param_2[1] = uVar4;
      *param_2 = uVar3;
      return;
    }
    (*(code *)(&PTR_FUN_00d38168)[bVar1])(&uStack_21,puVar2);
  }
  *(undefined1 *)(puVar2 + 0xcd) = 0xff;
  if (puVar2 != (undefined8 *)0x0) {
    uVar4 = param_3[1];
    uVar3 = *param_3;
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_3 + 2);
    puVar2[1] = uVar4;
    *puVar2 = uVar3;
    *(undefined1 *)(puVar2 + 0xcd) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 007de56c  FUN_007de56c =====

void FUN_007de56c(undefined8 *param_1,void *param_2,void *param_3)

{
  byte bVar1;
  void *__dest;
  undefined1 uStack_21;
  
  __dest = (void *)*param_1;
  bVar1 = *(byte *)((long)__dest + 0x668);
  if (bVar1 != 0xff) {
    if (bVar1 == 2) {
      memcpy(param_2,param_3,0x668);
      return;
    }
    (*(code *)(&PTR_FUN_00d38168)[bVar1])(&uStack_21,__dest);
  }
  *(undefined1 *)((long)__dest + 0x668) = 0xff;
  if (__dest != (void *)0x0) {
    memcpy(__dest,param_3,0x668);
    *(undefined1 *)((long)__dest + 0x668) = 2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 007de620  FUN_007de620 =====

void FUN_007de620(void)

{
  FUN_007de628();
  return;
}


// ===== 007de628  FUN_007de628 =====

void FUN_007de628(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 uStack_11;
  
  param_1 = (undefined8 *)*param_1;
  bVar1 = *(byte *)(param_1 + 0xcd);
  if (bVar1 != 0xff) {
    if (bVar1 == 3) {
      pvVar2 = (void *)param_2[1];
      *param_2 = *param_3;
      if (pvVar2 != (void *)0x0) {
        pvVar3 = (void *)param_2[2];
        uVar5 = (ulong)(((long)pvVar2 - (long)pvVar3) * 0x1555555555555555) >> 2;
        uVar6 = (long)pvVar3 * -0x1555555555555555 - 4U >> 2;
        if (uVar6 <= uVar5) {
          uVar5 = uVar6;
        }
        if ((1 < uVar5) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 3U) == 0)) {
          uVar5 = uVar5 & 0x3ffffffffffffffe;
          pvVar3 = (void *)((long)pvVar3 + uVar5 * -0xc);
          do {
            uVar5 = uVar5 - 2;
          } while (uVar5 != 0);
        }
        while (pvVar3 != pvVar2) {
          pvVar3 = (void *)((long)pvVar3 + -0xc);
          if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        param_2[2] = pvVar2;
        operator_delete(pvVar2);
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
      }
      param_2[1] = param_3[1];
      param_2[2] = param_3[2];
      param_2[3] = param_3[3];
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
      return;
    }
    (*(code *)(&PTR_FUN_00d38168)[bVar1])(&uStack_11,param_1);
  }
  *(undefined1 *)(param_1 + 0xcd) = 0xff;
  if (param_1 != (undefined8 *)0x0) {
    uVar4 = *param_3;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = uVar4;
    param_1[1] = 0;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[1] = 0;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 4);
    *(undefined1 *)(param_1 + 0xcd) = 3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 007de7c4  FUN_007de7c4 =====

void FUN_007de7c4(undefined4 param_1,undefined8 *param_2,undefined8 param_3)

{
  *(undefined1 *)(param_2 + 8) = 0;
  param_2[6] = 0;
  param_2[7] = 0xffffffffffffffff;
  *(undefined4 *)((long)param_2 + 0x44) = 0;
  *(undefined4 *)(param_2 + 9) = param_1;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[10] = param_3;
  param_2[0xb] = param_3;
  return;
}


// ===== 007de7f0  FUN_007de7f0 =====

void FUN_007de7f0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  uVar5 = *(ulong *)(param_2 + 0x20);
  lVar4 = *(long *)(param_2 + 8);
  plVar1 = (long *)(lVar4 + (uVar5 / 0xaa) * 8);
  if (lVar4 == *(long *)(param_2 + 0x10)) {
    lVar4 = 0;
  }
  else {
    uVar2 = *(long *)(param_2 + 0x28) + uVar5;
    plVar3 = (long *)(lVar4 + (uVar2 / 0xaa) * 8);
    lVar4 = *(long *)(lVar4 + (uVar5 / 0xaa) * 8) + (uVar5 % 0xaa) * 0x18;
    lVar6 = *plVar3 + (uVar2 % 0xaa) * 0x18;
    if (lVar4 != lVar6) {
      lVar6 = ((long)plVar3 - (long)plVar1 >> 3) * 0xaa +
              (lVar6 - *plVar3 >> 3) * -0x5555555555555555 +
              (lVar4 - *plVar1 >> 3) * 0x5555555555555555;
      goto LAB_007de8e8;
    }
  }
  lVar6 = 0;
LAB_007de8e8:
  FUN_007df238(param_1,plVar1,lVar4,lVar6);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0x40);
  *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  return;
}


// ===== 007de938  FUN_007de938 =====

void FUN_007de938(void)

{
  FUN_007de940();
  return;
}


// ===== 007de940  FUN_007de940 =====

void FUN_007de940(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)param_1[2];
  if (puVar9 != puVar2) {
    uVar5 = param_1[4];
    plVar3 = puVar9 + uVar5 / 0xaa;
    lVar6 = *plVar3;
    lVar4 = lVar6 + (uVar5 % 0xaa) * 0x18;
    while (lVar4 != puVar9[(param_1[5] + uVar5) / 0xaa] + ((param_1[5] + uVar5) % 0xaa) * 0x18) {
      if (lVar4 == 0) goto LAB_007deac4;
      lVar4 = lVar4 + 0x18;
      if (lVar4 - lVar6 == 0xff0) {
        plVar3 = plVar3 + 1;
        lVar6 = *plVar3;
        lVar4 = lVar6;
      }
    }
  }
  param_1[5] = 0;
  lVar4 = (long)puVar2 - (long)puVar9;
  while (uVar5 = lVar4 >> 3, 2 < uVar5) {
    operator_delete((void *)*puVar9);
    puVar2 = (undefined8 *)param_1[2];
    puVar9 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = puVar9;
    lVar4 = (long)puVar2 - (long)puVar9;
  }
  if (uVar5 == 1) {
    uVar1 = 0x55;
  }
  else {
    if (uVar5 != 2) goto LAB_007dea3c;
    uVar1 = 0xaa;
  }
  param_1[4] = uVar1;
LAB_007dea3c:
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
  uVar7 = (ulong)((long)puVar8 + (-8 - ((long)puVar8 << 0x3d))) >> 3;
  uVar5 = (ulong)(((long)puVar2 - (long)puVar8 << 0x3d) - ((long)puVar2 - (long)puVar8)) >> 3;
  if (uVar7 <= uVar5) {
    uVar5 = uVar7;
  }
  if ((1 < uVar5) && ((((int)puVar2 - (int)puVar8 | -(int)puVar8) & 7U) == 0)) {
    uVar5 = uVar5 & 0x1ffffffffffffffe;
    puVar8 = puVar8 + -uVar5;
    do {
      uVar5 = uVar5 - 2;
    } while (uVar5 != 0);
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
LAB_007deac4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 007deb14  FUN_007deb14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007deb14(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  uVar3 = _UNK_001f3068;
  uVar4 = _DAT_001f3060;
  puVar2 = *(undefined8 **)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x50);
  if (puVar2 != *(undefined8 **)(param_1 + 0x10)) {
    uVar7 = *(ulong *)(param_1 + 0x20);
    uVar1 = *(long *)(param_1 + 0x28) + uVar7;
    plVar6 = puVar2 + uVar7 / 0xaa;
    lVar8 = *plVar6;
    lVar5 = lVar8 + (uVar7 % 0xaa) * 0x18;
    while (lVar5 != puVar2[uVar1 / 0xaa] + (uVar1 % 0xaa) * 0x18) {
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      lVar5 = lVar5 + 0x18;
      if (lVar5 - lVar8 == 0xff0) {
        plVar6 = plVar6 + 1;
        lVar8 = *plVar6;
        lVar5 = lVar8;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  lVar5 = (long)*(undefined8 **)(param_1 + 0x10) - (long)puVar2;
  while (uVar1 = lVar5 >> 3, 2 < uVar1) {
    operator_delete((void *)*puVar2);
    puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar2;
    lVar5 = *(long *)(param_1 + 0x10) - (long)puVar2;
  }
  if (uVar1 == 1) {
    uVar4 = 0x55;
  }
  else {
    if (uVar1 != 2) {
      return;
    }
    uVar4 = 0xaa;
  }
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  return;
}


// ===== 007dec4c  FUN_007dec4c =====

void FUN_007dec4c(long param_1,long param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long local_38;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    bVar1 = false;
  }
  else {
    uVar2 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    bVar1 = param_3 - (long)((double)*(long *)(param_1 + 0x58) * 1.5) <
            *(long *)(*(long *)(*(long *)(param_1 + 8) + (uVar2 / 0xaa) * 8) + (uVar2 % 0xaa) * 0x18
                     + 0x10);
  }
  local_38 = param_3;
  FUN_007deee8(param_1,param_3);
  if ((*(long *)(param_1 + 0x38) == -1) || (!(bool)(*(int *)(param_1 + 0x44) != 0 | bVar1))) {
    *(long *)(param_1 + 0x38) = param_3;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    uVar2 = (lVar3 + *(long *)(param_1 + 0x20)) - 1;
    lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 8) + (uVar2 / 0xaa) * 8) + (uVar2 % 0xaa) * 0x18
                     + 0x10);
    if (param_3 == lVar5) goto LAB_007dee3c;
    if (param_3 < lVar5) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) == 0) {
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_007deed4;
        uVar2 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
        FUN_00623bb0(&DAT_00215708,"../../rtc_base/rate_statistics.cc",0x272,"Timestamp ",param_3,
                     " is before the last added timestamp in the rate window: ",
                     *(undefined8 *)
                      (*(long *)(*(long *)(param_1 + 8) + (uVar2 / 0xaa) * 8) +
                       (uVar2 % 0xaa) * 0x18 + 0x10),", aligning to that.");
      }
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_007deed4;
      uVar2 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
      local_38 = *(long *)(*(long *)(*(long *)(param_1 + 8) + (uVar2 / 0xaa) * 8) +
                           (uVar2 % 0xaa) * 0x18 + 0x10);
    }
  }
  FUN_007deff4(param_1,&local_38);
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
LAB_007deed4:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:1575: libc++ Hardening assertion !empty() failed: deque::back called on an empty deque\n"
              );
  }
LAB_007dee3c:
  uVar2 = (lVar3 + *(long *)(param_1 + 0x20)) - 1;
  plVar4 = (long *)(*(long *)(*(long *)(param_1 + 8) + (uVar2 / 0xaa) * 8) + (uVar2 % 0xaa) * 0x18);
  *plVar4 = *plVar4 + param_2;
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  if (param_2 < (long)(*(ulong *)(param_1 + 0x30) ^ 0x7fffffffffffffff)) {
    *(ulong *)(param_1 + 0x30) = *(ulong *)(param_1 + 0x30) + param_2;
  }
  else {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  return;
}


// ===== 007deee8  FUN_007deee8 =====

void FUN_007deee8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x58);
    uVar4 = *(ulong *)(param_1 + 0x20);
    puVar3 = *(undefined8 **)(param_1 + 8);
    do {
      plVar5 = (long *)(puVar3[uVar4 / 0xaa] + (uVar4 % 0xaa) * 0x18);
      if ((param_2 - lVar2) + 1 <= plVar5[2]) {
        return;
      }
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) - *plVar5;
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) - (int)plVar5[1];
      if (puVar3[uVar4 / 0xaa] + (uVar4 % 0xaa) * 0x18 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      uVar4 = uVar4 + 1;
      lVar1 = lVar1 + -1;
      *(ulong *)(param_1 + 0x20) = uVar4;
      *(long *)(param_1 + 0x28) = lVar1;
      if (0x153 < uVar4) {
        operator_delete((void *)*puVar3);
        puVar3 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
        lVar1 = *(long *)(param_1 + 0x28);
        *(undefined8 **)(param_1 + 8) = puVar3;
        uVar4 = *(long *)(param_1 + 0x20) - 0xaa;
        *(ulong *)(param_1 + 0x20) = uVar4;
      }
    } while (lVar1 != 0);
  }
  return;
}


// ===== 007deff4  FUN_007deff4 =====

long FUN_007deff4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar5 = 0;
  if (lVar4 != lVar7) {
    lVar5 = (lVar4 - lVar7 >> 3) * 0xaa + -1;
  }
  if (lVar5 == *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) {
    FUN_007e01c4(param_1);
    lVar7 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  if ((lVar7 != lVar4) &&
     (uVar1 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20),
     puVar3 = (undefined8 *)(*(long *)(lVar7 + (uVar1 / 0xaa) * 8) + (uVar1 % 0xaa) * 0x18),
     puVar3 != (undefined8 *)0x0)) {
    uVar6 = *param_2;
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 0;
    puVar3[2] = uVar6;
    lVar5 = *(long *)(param_1 + 0x28) + 1;
    uVar1 = *(long *)(param_1 + 0x20) + lVar5;
    *(long *)(param_1 + 0x28) = lVar5;
    plVar2 = (long *)(*(long *)(param_1 + 8) + (uVar1 / 0xaa) * 8);
    lVar7 = *plVar2;
    lVar5 = 0;
    if (*(long *)(param_1 + 8) != *(long *)(param_1 + 0x10)) {
      lVar5 = lVar7 + (uVar1 % 0xaa) * 0x18;
    }
    if (lVar5 == lVar7) {
      lVar5 = plVar2[-1] + 0xff0;
    }
    return lVar5 + -0x18;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 007df10c  FUN_007df10c =====

undefined1  [16] FUN_007df10c(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined1 auVar6 [16];
  
  FUN_007deee8();
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 != -1) {
    lVar3 = *(long *)(param_1 + 0x58);
    lVar1 = 0;
    uVar2 = (uint)lVar3;
    if (param_2 - lVar3 < lVar4) {
      uVar2 = ((int)param_2 - (int)lVar4) + 1;
    }
    lVar4 = lVar1;
    if ((*(int *)(param_1 + 0x44) == 0) || (lVar4 = 0, (int)uVar2 < 2)) goto LAB_007df1ac;
    if (((1 < *(int *)(param_1 + 0x44)) || (lVar3 <= (long)(ulong)uVar2)) &&
       (((*(byte *)(param_1 + 0x40) & 1) == 0 &&
        (fVar5 = (*(float *)(param_1 + 0x48) / (float)uVar2) * (float)*(long *)(param_1 + 0x30) +
                 0.5, fVar5 == 9.223372e+18 || fVar5 < 9.223372e+18 != NAN(fVar5))))) {
      lVar1 = 1;
      lVar4 = (long)fVar5;
      goto LAB_007df1ac;
    }
  }
  lVar1 = 0;
  lVar4 = 0;
LAB_007df1ac:
  auVar6._8_8_ = lVar1;
  auVar6._0_8_ = lVar4;
  return auVar6;
}


// ===== 007df1d0  FUN_007df1d0 =====

undefined8 FUN_007df1d0(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  if ((0 < param_2) && (param_2 <= *(long *)(param_1 + 0x50))) {
    lVar1 = *(long *)(param_1 + 0x38);
    if (lVar1 != -1) {
      if (lVar1 <= (param_3 - param_2) + 1) {
        lVar1 = (param_3 - param_2) + 1;
      }
      *(long *)(param_1 + 0x38) = lVar1;
    }
    *(long *)(param_1 + 0x58) = param_2;
    FUN_007deee8(param_1,param_3);
    return 1;
  }
  return 0;
}


// ===== 007df238  FUN_007df238 =====

void FUN_007df238(long param_1,long *param_2,undefined8 *param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar11 = *(long *)(param_1 + 8);
  lVar7 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x28);
  uVar10 = lVar5 + *(long *)(param_1 + 0x20);
  lVar9 = 0;
  if (lVar7 != lVar11) {
    lVar9 = (lVar7 - lVar11 >> 3) * 0xaa + -1;
  }
  lVar2 = param_4 - (lVar9 - uVar10);
  if (lVar9 - uVar10 <= param_4 && lVar2 != 0) {
    FUN_007df46c(param_1,lVar2);
    lVar5 = *(long *)(param_1 + 0x28);
    lVar11 = *(long *)(param_1 + 8);
    lVar7 = *(long *)(param_1 + 0x10);
    uVar10 = *(long *)(param_1 + 0x20) + lVar5;
  }
  plVar3 = (long *)(lVar11 + (uVar10 / 0xaa) * 8);
  if (lVar11 == lVar7) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)(*plVar3 + (uVar10 % 0xaa) * 0x18);
  }
  if (param_4 != 0) {
    param_4 = param_4 + ((long)puVar6 - *plVar3 >> 3) * -0x5555555555555555;
    if ((long)param_4 < 1) {
      lVar9 = 0xa9 - param_4;
      lVar11 = SUB168(SEXT816(lVar9) * SEXT816(-0x6060606060606061),8);
      plVar1 = plVar3 + ((lVar11 >> 6) - (lVar11 >> 0x3f));
      puVar8 = (undefined8 *)(*plVar1 + ((lVar9 / 0xaa) * 0xaa - lVar9) * 0x18 + 0xfd8);
    }
    else {
      plVar1 = plVar3 + param_4 / 0xaa;
      puVar8 = (undefined8 *)(*plVar1 + (param_4 % 0xaa) * 0x18);
    }
    while (puVar6 != puVar8) {
      puVar12 = puVar8;
      if (plVar3 != plVar1) {
        puVar12 = (undefined8 *)(*plVar3 + 0xff0);
      }
      puVar4 = puVar6;
      if (puVar6 != puVar12) {
        do {
          if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puVar13 = param_3 + 3;
          uVar15 = param_3[1];
          uVar14 = *param_3;
          puVar4[2] = param_3[2];
          puVar4[1] = uVar15;
          *puVar4 = uVar14;
          if ((long)puVar13 - *param_2 == 0xff0) {
            param_2 = param_2 + 1;
            puVar13 = (undefined8 *)*param_2;
          }
          puVar4 = puVar4 + 3;
          param_3 = puVar13;
        } while (puVar4 != puVar12);
        lVar5 = *(long *)(param_1 + 0x28);
        puVar4 = puVar12;
      }
      lVar5 = lVar5 + ((long)puVar4 - (long)puVar6 >> 3) * -0x5555555555555555;
      *(long *)(param_1 + 0x28) = lVar5;
      if (plVar3 == plVar1) {
        return;
      }
      plVar3 = plVar3 + 1;
      puVar6 = (undefined8 *)*plVar3;
    }
  }
  return;
}


// ===== 007df46c  FUN_007df46c =====

void FUN_007df46c(long *param_1,ulong param_2)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  void *local_70;
  void *pvStack_68;
  void *local_60;
  void *local_58;
  void *local_38;
  
  uVar8 = param_1[4];
  if (param_1[1] == param_1[2]) {
    param_2 = param_2 + 1;
  }
  uVar4 = param_2 / 0xaa;
  uVar3 = uVar8 / 0xaa;
  if (param_2 % 0xaa != 0) {
    uVar4 = uVar4 + 1;
  }
  uVar5 = uVar4;
  if (uVar3 <= uVar4) {
    uVar5 = uVar3;
  }
  if (uVar4 <= uVar3) {
    param_1[4] = uVar8 + uVar5 * -0xaa;
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      local_70 = *(void **)param_1[1];
      param_1[1] = (long)((undefined8 *)param_1[1] + 1);
      FUN_007df77c(param_1,&local_70);
    }
    return;
  }
  lVar9 = param_1[2] - param_1[1] >> 3;
  uVar3 = uVar4 - uVar5;
  if ((ulong)((param_1[3] - *param_1 >> 3) - lVar9) < uVar3) {
    uVar4 = param_1[3] - *param_1 >> 2;
    local_70 = (void *)0x0;
    if (uVar4 <= uVar3 + lVar9) {
      uVar4 = uVar3 + lVar9;
    }
    if (uVar4 != 0) {
      if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      local_70 = operator_new(uVar4 << 3);
    }
    lVar7 = uVar5 * -0xaa;
    pvStack_68 = (void *)((long)local_70 + (lVar9 - uVar5) * 8);
    local_58 = (void *)((long)local_70 + uVar4 * 8);
    local_60 = pvStack_68;
    do {
      local_38 = operator_new(0xff0);
      FUN_007dfa04(&local_70,&local_38);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    lVar9 = param_1[1];
    if (0xa9 < uVar8) {
      do {
        FUN_007df77c(&local_70);
        uVar5 = uVar5 - 1;
        lVar9 = param_1[1] + 8;
        param_1[1] = lVar9;
      } while (uVar5 != 0);
    }
    lVar6 = param_1[2];
    if (lVar6 != lVar9) {
      do {
        lVar6 = lVar6 + -8;
        FUN_007dff28(&local_70,lVar6);
        lVar9 = param_1[1];
      } while (lVar6 != lVar9);
      lVar6 = param_1[2];
    }
    pvVar2 = (void *)*param_1;
    lVar1 = param_1[3];
    uVar4 = (lVar6 - (lVar6 << 0x3d)) - 8U >> 3;
    uVar8 = (ulong)((lVar9 - lVar6 << 0x3d) - (lVar9 - lVar6)) >> 3;
    param_1[1] = (long)pvStack_68;
    *param_1 = (long)local_70;
    param_1[3] = (long)local_58;
    param_1[2] = (long)local_60;
    if (uVar4 <= uVar8) {
      uVar8 = uVar4;
    }
    param_1[4] = param_1[4] + lVar7;
    local_60 = (void *)lVar6;
    if ((1 < uVar8) && ((((int)lVar9 - (int)lVar6 | -(int)lVar6) & 7U) == 0)) {
      uVar8 = uVar8 & 0x1ffffffffffffffe;
      local_60 = (void *)(lVar6 + uVar8 * -8);
      do {
        uVar8 = uVar8 - 2;
      } while (uVar8 != 0);
    }
    while (local_70 = pvVar2, pvStack_68 = (void *)lVar9, local_58 = (void *)lVar1,
          local_60 != (void *)lVar9) {
      local_60 = (void *)((long)local_60 + -8);
      if (local_60 == (void *)0x0) {
        local_60 = (void *)lVar6;
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    if (pvVar2 == (void *)0x0) {
      return;
    }
    operator_delete(pvVar2);
    return;
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    if (param_1[3] == param_1[2]) goto LAB_007df6d0;
    local_70 = operator_new(0xff0);
    FUN_007dfa04(param_1,&local_70);
    uVar4 = uVar4 - 1;
  }
  lVar9 = param_1[4];
  uVar4 = uVar5;
LAB_007df710:
  param_1[4] = lVar9 + uVar4 * -0xaa;
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    local_70 = *(void **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
    FUN_007df77c(param_1,&local_70);
  }
  return;
LAB_007df6d0:
  do {
    local_70 = operator_new(0xff0);
    FUN_007dfc8c(param_1,&local_70);
    uVar3 = uVar3 - 1;
    lVar9 = 0xa9;
    if (param_1[2] - param_1[1] != 8) {
      lVar9 = 0xaa;
    }
    lVar9 = lVar9 + param_1[4];
    param_1[4] = lVar9;
  } while (uVar3 != 0);
  goto LAB_007df710;
}


// ===== 007df77c  FUN_007df77c =====

void FUN_007df77c(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_007df9ec;
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
LAB_007df9ec:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 007dfa04  FUN_007dfa04 =====

void FUN_007dfa04(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_007dfc74;
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
LAB_007dfc74:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 007dfc8c  FUN_007dfc8c =====

void FUN_007dfc8c(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_007dff10;
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
LAB_007dff10:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 007dff28  FUN_007dff28 =====

void FUN_007dff28(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_007e01ac;
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
LAB_007e01ac:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 007e01c4  FUN_007e01c4 =====

void FUN_007e01c4(long *param_1)

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
  
  if ((ulong)param_1[4] < 0xaa) {
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
      local_18 = operator_new(0xff0);
      FUN_007dfa04(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_007dff28(&local_50,lVar5);
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
      local_50 = (undefined1 *)operator_new(0xff0);
      FUN_007dfa04(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0xff0);
    FUN_007dfc8c(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0xaa;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_007df77c(param_1,&local_50);
  return;
}


// ===== 007e03ac  FUN_007e03ac =====

void * FUN_007e03ac(void)

{
  int iVar1;
  void *pvVar2;
  
  if (((DAT_00d802c8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d802c8), iVar1 != 0)) {
    pvVar2 = operator_new(0x48);
    FUN_007e0884();
    DAT_00d802c0 = pvVar2;
    FUN_0054ff1c(&DAT_00d802c8);
  }
  return DAT_00d802c0;
}


// ===== 007e0420  FUN_007e0420 =====

int FUN_007e0420(undefined8 param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 local_28;
  
  if (((DAT_00d802c8 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d802c8), iVar2 != 0)) {
    pvVar4 = operator_new(0x48);
    FUN_007e0884();
    DAT_00d802c0 = pvVar4;
    FUN_0054ff1c(&DAT_00d802c8);
  }
  pvVar4 = DAT_00d802c0;
  local_28 = param_1;
  pthread_mutex_lock((pthread_mutex_t *)((long)DAT_00d802c0 + 0x18));
  puVar1 = *(undefined8 **)((long)pvVar4 + 8);
  if (puVar1 < *(undefined8 **)((long)pvVar4 + 0x10)) {
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar3 = puVar1 + 1;
    *puVar1 = param_1;
  }
  else {
    puVar3 = (undefined8 *)FUN_007e2214(pvVar4,&local_28);
  }
  *(undefined8 **)((long)pvVar4 + 8) = puVar3;
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)((long)pvVar4 + 0x18));
  return iVar2;
}


// ===== 007e04f0  FUN_007e04f0 =====

int FUN_007e04f0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  if (((DAT_00d802c8 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00d802c8), iVar4 != 0)) {
    plVar7 = (long *)operator_new(0x48);
    FUN_007e0884();
    DAT_00d802c0 = plVar7;
    FUN_0054ff1c(&DAT_00d802c8);
  }
  plVar3 = DAT_00d802c0;
  pthread_mutex_lock((pthread_mutex_t *)(DAT_00d802c0 + 3));
  plVar7 = (long *)*plVar3;
  plVar2 = (long *)plVar3[1];
  if (plVar7 == plVar2) {
joined_r0x007e05d4:
    if (plVar7 != plVar2) {
      memmove(plVar7,plVar7 + 1,(long)plVar2 - (long)(plVar7 + 1));
      plVar7 = (long *)plVar3[1];
      uVar8 = (ulong)((long)plVar7 + (-8 - ((long)plVar7 << 0x3d))) >> 3;
      uVar6 = (((long)plVar2 - (long)plVar7 << 0x3d) - ((long)plVar2 - (long)plVar7)) + 8U >> 3;
      if (uVar8 <= uVar6) {
        uVar6 = uVar8;
      }
      if ((1 < uVar6) && ((-(int)plVar7 & 7U) == 0)) {
        uVar6 = uVar6 & 0x1ffffffffffffffe;
        plVar7 = plVar7 + -uVar6;
        do {
          uVar6 = uVar6 - 2;
        } while (uVar6 != 0);
      }
      while (plVar7 != plVar2 + -1) {
        plVar7 = plVar7 + -1;
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      plVar3[1] = (long)(plVar2 + -1);
    }
  }
  else {
    uVar6 = (long)plVar2 + (-8 - (long)plVar7);
    uVar5 = (uint)uVar6;
    if ((~uVar5 & 0x18) != 0) {
      uVar8 = (ulong)((uVar5 >> 3) + 1) & 3;
      do {
        if (*plVar7 == param_1) goto joined_r0x007e05d4;
        uVar8 = uVar8 - 1;
        plVar7 = plVar7 + 1;
      } while (uVar8 != 0);
    }
    if (0x17 < uVar6) {
      plVar7 = plVar7 + 2;
      do {
        if (plVar7[-2] == param_1) {
          plVar7 = plVar7 + -2;
          goto joined_r0x007e05d4;
        }
        if (plVar7[-1] == param_1) {
          plVar7 = plVar7 + -1;
          goto joined_r0x007e05d4;
        }
        if (*plVar7 == param_1) goto joined_r0x007e05d4;
        if (plVar7[1] == param_1) {
          plVar7 = plVar7 + 1;
          goto joined_r0x007e05d4;
        }
        plVar1 = plVar7 + 2;
        plVar7 = plVar7 + 4;
      } while (plVar1 != plVar2);
    }
  }
  iVar4 = pthread_mutex_unlock((pthread_mutex_t *)(plVar3 + 3));
  return iVar4;
}


// ===== 007e06bc  FUN_007e06bc =====

void FUN_007e06bc(void)

{
  int iVar1;
  void *pvVar2;
  
  if (((DAT_00d802c8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d802c8), iVar1 != 0)) {
    pvVar2 = operator_new(0x48);
    FUN_007e0884();
    DAT_00d802c0 = pvVar2;
    FUN_0054ff1c(&DAT_00d802c8);
  }
  pthread_getspecific(*(pthread_key_t *)((long)DAT_00d802c0 + 0x40));
  return;
}


// ===== 007e0734  FUN_007e0734 =====

uint FUN_007e0734(long *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_80 [16];
  code *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  code *local_50;
  undefined1 *puStack_48;
  
  iVar4 = param_2;
  if (param_2 == -1) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00625944((long)param_2);
  }
  do {
    while( true ) {
      puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
      local_60 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = (code *)&DAT_aaaaaaaaaaaaaaaa;
      FUN_007e1264(&local_60,param_1,iVar4);
      if (puStack_48 == (undefined1 *)0x0) {
        uVar3 = (**(code **)(*param_1 + 0x30))(param_1);
        uVar3 = uVar3 ^ 1;
        (*local_50)(0,&local_60,&local_60);
        goto LAB_007e0858;
      }
      (*local_50)(1,&local_60,auStack_80);
      puStack_68 = puStack_48;
      local_70 = local_50;
      local_50 = FUN_00433984;
      puStack_48 = (undefined1 *)0x0;
      FUN_007e1770(param_1,auStack_80);
      (*local_70)(0,auStack_80,auStack_80);
      if (param_2 != -1) break;
      (*local_50)(0,&local_60,&local_60);
    }
    iVar2 = FUN_0062589c();
    (*local_50)(0,&local_60,&local_60);
    iVar4 = iVar1 - iVar2;
  } while (-1 < iVar1 - iVar2);
  uVar3 = 1;
LAB_007e0858:
  return uVar3 & 1;
}


// ===== 007e0878  FUN_007e0878 =====

void FUN_007e0878(long param_1)

{
  pthread_getspecific(*(pthread_key_t *)(param_1 + 0x40));
  return;
}


// ===== 007e0884  FUN_007e0884 =====

int FUN_007e0884(undefined8 *param_1)

{
  int iVar1;
  undefined1 *local_8;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_8 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_8);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 3),(pthread_mutexattr_t *)&local_8);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_8);
  iVar1 = pthread_key_create((pthread_key_t *)(param_1 + 8),(__destr_function *)0x0);
  return iVar1;
}


// ===== 007e08e0  FUN_007e08e0 =====

int FUN_007e08e0(long param_1,void *param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  
  if (param_2 == (void *)0x0) {
    pvVar2 = pthread_getspecific(*(pthread_key_t *)(param_1 + 0x40));
    if (pvVar2 == (void *)0x0) goto LAB_007e0950;
    pvVar3 = *(void **)((long)pvVar2 + 200);
    *(undefined8 *)((long)pvVar2 + 200) = 0;
  }
  else {
    pvVar2 = operator_new(8);
    FUN_005d64b8(pvVar2,param_2);
    pvVar3 = *(void **)((long)param_2 + 200);
    *(void **)((long)param_2 + 200) = pvVar2;
  }
  if (pvVar3 != (void *)0x0) {
    FUN_005d64f8(pvVar3);
    operator_delete(pvVar3);
  }
LAB_007e0950:
  iVar1 = pthread_setspecific(*(pthread_key_t *)(param_1 + 0x40),param_2);
  return iVar1;
}


// ===== 007e096c  FUN_007e096c =====

void * FUN_007e096c(long param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  long *plVar3;
  pthread_t pVar4;
  
  pvVar1 = pthread_getspecific(*(pthread_key_t *)(param_1 + 0x40));
  if (pvVar1 == (void *)0x0) {
    pvVar1 = operator_new(0xd8);
    uVar2 = FUN_007e3d94();
    FUN_007e0b2c(pvVar1,uVar2,1);
    plVar3 = *(long **)((long)pvVar1 + 0x98);
    *(undefined8 *)((long)pvVar1 + 0x98) = uVar2;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    pVar4 = pthread_self();
    *(pthread_t *)((long)pvVar1 + 0xb8) = pVar4;
    *(undefined1 *)((long)pvVar1 + 0xc0) = 0;
    FUN_007e08e0(param_1,pvVar1);
  }
  return pvVar1;
}


// ===== 007e0a00  FUN_007e0a00 =====

void FUN_007e0a00(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)pthread_getspecific(*(pthread_key_t *)(param_1 + 0x40));
  if ((plVar1 != (long *)0x0) && ((*(byte *)(plVar1 + 0x18) & 1) == 0)) {
    FUN_007e0a5c(plVar1);
                    /* WARNING: Could not recover jumptable at 0x007e0a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))(plVar1);
    return;
  }
  return;
}


// ===== 007e0a5c  FUN_007e0a5c =====

int FUN_007e0a5c(long param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  if (((DAT_00d802c8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d802c8), iVar1 != 0)) {
    pvVar3 = operator_new(0x48);
    FUN_007e0884();
    DAT_00d802c0 = pvVar3;
    FUN_0054ff1c(&DAT_00d802c8);
  }
  pvVar3 = DAT_00d802c0;
  pvVar2 = pthread_getspecific(*(pthread_key_t *)((long)DAT_00d802c0 + 0x40));
  if (pvVar2 != (void *)0x0) {
    pvVar4 = *(void **)((long)pvVar2 + 200);
    *(undefined8 *)((long)pvVar2 + 200) = 0;
    if (pvVar4 != (void *)0x0) {
      FUN_005d64f8(pvVar4);
      operator_delete(pvVar4);
    }
  }
  iVar1 = pthread_setspecific(*(pthread_key_t *)((long)pvVar3 + 0x40),(void *)0x0);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  return iVar1;
}


// ===== 007e0b10  FUN_007e0b10 =====

void FUN_007e0b10(void)

{
  return;
}


// ===== 007e0b18  FUN_007e0b18 =====

void FUN_007e0b18(void)

{
  return;
}


// ===== 007e0b20  FUN_007e0b20 =====

void FUN_007e0b20(undefined8 param_1,undefined8 param_2)

{
  FUN_007e0b2c(param_1,param_2,1);
  return;
}


// ===== 007e0b2c  FUN_007e0b2c =====

void FUN_007e0b2c(undefined8 *param_1,long *param_2,ulong param_3)

{
  undefined1 *local_18;
  
  *param_1 = &PTR_FUN_00d381b8;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  local_18 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_18);
  pthread_mutex_init((pthread_mutex_t *)((long)param_1 + 0x5c),(pthread_mutexattr_t *)&local_18);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_18);
  *(undefined2 *)((long)param_1 + 0x84) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0x101;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = param_2;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x32;
  (**(code **)(*param_2 + 0x18))(param_2,param_1);
  FUN_007e0c74(param_1,"Thread",6,param_1);
  if (((param_3 & 1) != 0) && ((*(byte *)((long)param_1 + 0x84) & 1) == 0)) {
    *(undefined1 *)((long)param_1 + 0x84) = 1;
    FUN_007e0420(param_1);
  }
  return;
}


// ===== 007e0c24  FUN_007e0c24 =====

void FUN_007e0c24(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  FUN_007e0b2c();
  plVar1 = *(long **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_2;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x007e0c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 007e0c74  FUN_007e0c74 =====

undefined8 FUN_007e0c74(long param_1,undefined1 *param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  undefined1 **__dest;
  size_t sVar5;
  undefined1 *local_80;
  undefined6 uStack_78;
  undefined2 uStack_72;
  undefined6 local_70;
  undefined1 uStack_6a;
  byte bStack_69;
  undefined6 uStack_68;
  long local_58;
  
  __dest = &local_80;
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_3 < 0x17) {
    bStack_69 = (byte)param_3;
  }
  else {
    uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined1 **)operator_new(uVar2);
    bStack_69 = (byte)(uVar2 >> 0x38) | 0x80;
    uStack_78 = (undefined6)param_3;
    uStack_72 = (undefined2)(param_3 >> 0x30);
    local_70 = (undefined6)uVar2;
    uStack_6a = (undefined1)(uVar2 >> 0x30);
    local_80 = (undefined1 *)__dest;
  }
  if ((undefined1 *)((long)__dest + param_3) < __dest) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((__dest <= param_2) && (param_2 < (undefined1 *)((long)__dest + param_3))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(__dest,param_2,param_3);
  cVar3 = *(char *)(param_1 + 0xb7);
  *(undefined1 *)((long)__dest + param_3) = 0;
  if (cVar3 < '\0') {
    operator_delete(*(void **)(param_1 + 0xa0));
  }
  *(ulong *)(param_1 + 0xa8) = CONCAT26(uStack_72,uStack_78);
  *(undefined1 **)(param_1 + 0xa0) = local_80;
  *(ulong *)(param_1 + 0xb0) = CONCAT17(bStack_69,CONCAT16(uStack_6a,local_70));
  if (param_4 != 0) {
    uStack_6a = 0xaa;
    bStack_69 = 0xaa;
    uStack_68 = 0xaaaaaaaaaaaa;
    local_70 = 0xaaaaaaaaaaaa;
    uStack_78 = 0xaaaaaaaaaaaa;
    uStack_72 = 0xaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    snprintf((char *)&local_80,0x1e," 0x%p",param_4);
    sVar5 = strlen((char *)&local_80);
    FUN_00547cac(param_1 + 0xa0,&local_80,sVar5);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e0dfc  FUN_007e0dfc =====

void FUN_007e0dfc(long param_1)

{
  if ((*(byte *)(param_1 + 0x84) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x84) = 1;
  FUN_007e0420();
  return;
}


// ===== 007e0e18  FUN_007e0e18 =====

void FUN_007e0e18(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  *param_1 = &PTR_FUN_00d381b8;
  *(undefined4 *)(param_1 + 0x11) = 1;
  (**(code **)(*(long *)param_1[0x12] + 0x28))();
  FUN_007e1d3c(param_1);
  FUN_007e0f40(param_1);
  pvVar4 = (void *)param_1[0x19];
  param_1[0x19] = 0;
  if (pvVar4 != (void *)0x0) {
    FUN_005d64f8(pvVar4);
    operator_delete(pvVar4);
  }
  if (*(char *)((long)param_1 + 0xb7) < '\0') {
    operator_delete((void *)param_1[0x14]);
  }
  plVar1 = (long *)param_1[0x13];
  param_1[0x13] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  pthread_mutex_destroy((pthread_mutex_t *)((long)param_1 + 0x5c));
  pvVar4 = (void *)param_1[7];
  if (pvVar4 != (void *)0x0) {
    pvVar2 = pvVar4;
    pvVar3 = (void *)param_1[8];
    if (pvVar4 != (void *)param_1[8]) {
      do {
        pvVar2 = (void *)((long)pvVar3 + -0x40);
        if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        (**(code **)((long)pvVar3 + -0x10))(0,(long)pvVar3 + -0x20,(long)pvVar3 + -0x20);
        pvVar3 = pvVar2;
      } while (pvVar2 != pvVar4);
      pvVar2 = (void *)param_1[7];
    }
    param_1[8] = pvVar4;
    operator_delete(pvVar2);
  }
  FUN_007e2320(param_1 + 1);
  return;
}


// ===== 007e0f40  FUN_007e0f40 =====

void FUN_007e0f40(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 *local_28;
  undefined8 *puVar8;
  
  if ((*(byte *)(param_1 + 0x85) & 1) != 0) {
    return;
  }
  plVar2 = *(long **)(param_1 + 0x90);
  *(undefined1 *)(param_1 + 0x85) = 1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,0);
  }
  FUN_007e04f0(param_1);
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_005d64b8(&local_28,param_1);
  puVar11 = *(undefined8 **)(param_1 + 0x10);
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  puVar8 = puVar11;
  if (puVar11 != *(undefined8 **)(param_1 + 0x18)) {
    uVar10 = *(ulong *)(param_1 + 0x28);
    uVar9 = *(long *)(param_1 + 0x30) + uVar10;
    plVar2 = puVar11 + (uVar10 >> 7);
    lVar7 = *plVar2 + (uVar10 & 0x7f) * 0x20;
    lVar5 = puVar11[uVar9 >> 7] + (uVar9 & 0x7f) * 0x20;
    puVar8 = *(undefined8 **)(param_1 + 0x18);
    if (lVar7 != lVar5) {
      do {
        if (lVar7 == 0) goto LAB_007e112c;
        (**(code **)(lVar7 + 0x10))(0,lVar7,lVar7);
        lVar7 = lVar7 + 0x20;
        if (lVar7 - *plVar2 == 0x1000) {
          plVar2 = plVar2 + 1;
          lVar7 = *plVar2;
        }
      } while (lVar7 != lVar5);
      puVar11 = *(undefined8 **)(param_1 + 0x10);
      puVar8 = *(undefined8 **)(param_1 + 0x18);
    }
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  lVar7 = (long)puVar8 - (long)puVar11;
  while (uVar9 = lVar7 >> 3, 2 < uVar9) {
    operator_delete((void *)*puVar11);
    puVar11 = (undefined8 *)(*(long *)(param_1 + 0x10) + 8);
    *(undefined8 **)(param_1 + 0x10) = puVar11;
    lVar7 = *(long *)(param_1 + 0x18) - (long)puVar11;
  }
  if (uVar9 == 1) {
    uVar4 = 0x40;
  }
  else {
    if (uVar9 != 2) goto LAB_007e10c0;
    uVar4 = 0x80;
  }
  *(undefined8 *)(param_1 + 0x28) = uVar4;
LAB_007e10c0:
  FUN_007e2520(param_1 + 8);
  lVar7 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x18);
  uVar10 = (lVar5 - (lVar5 << 0x3d)) - 8U >> 3;
  uVar9 = (ulong)((lVar7 - lVar5 << 0x3d) - (lVar7 - lVar5)) >> 3;
  if (uVar10 <= uVar9) {
    uVar9 = uVar10;
  }
  if ((1 < uVar9) && ((((int)lVar7 - (int)lVar5 | -(int)lVar5) & 7U) == 0)) {
    uVar9 = uVar9 & 0x1ffffffffffffffe;
    lVar5 = lVar5 + uVar9 * -8;
    do {
      uVar9 = uVar9 - 2;
    } while (uVar9 != 0);
  }
  while (lVar5 != lVar7) {
    lVar5 = lVar5 + -8;
    if (lVar5 == 0) goto LAB_007e112c;
  }
  *(long *)(param_1 + 0x18) = lVar5;
  FUN_007e2618(param_1 + 8);
  uVar1 = uStack_48;
  uVar4 = local_50;
  local_50 = 0;
  uStack_48 = 0;
  *(undefined8 *)(param_1 + 0x10) = uStack_68;
  *(undefined8 *)(param_1 + 8) = local_70;
  *(undefined8 *)(param_1 + 0x20) = uStack_58;
  *(undefined8 *)(param_1 + 0x18) = local_60;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  FUN_007e2320(&local_70);
  puVar11 = (undefined8 *)(param_1 + 0x38);
  pvVar12 = (void *)*puVar11;
  if (pvVar12 == (void *)0x0) goto LAB_007e11cc;
  pvVar3 = pvVar12;
  pvVar6 = *(void **)(param_1 + 0x40);
  if (pvVar12 == *(void **)(param_1 + 0x40)) goto LAB_007e11bc;
  while (pvVar3 = (void *)((long)pvVar6 + -0x40), pvVar3 != (void *)0x0) {
    (**(code **)((long)pvVar6 + -0x10))(0,(long)pvVar6 + -0x20,(long)pvVar6 + -0x20);
    pvVar6 = pvVar3;
    if (pvVar3 == pvVar12) {
      pvVar3 = (void *)*puVar11;
LAB_007e11bc:
      *(void **)(param_1 + 0x40) = pvVar12;
      operator_delete(pvVar3);
LAB_007e11cc:
      *puVar11 = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      FUN_005d64f8(&local_28);
      return;
    }
  }
LAB_007e112c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 007e11e0  FUN_007e11e0 =====

void FUN_007e11e0(void *param_1)

{
  FUN_007e0e18();
  operator_delete(param_1);
  return;
}


// ===== 007e1210  FUN_007e1210 =====

undefined8 FUN_007e1210(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}


// ===== 007e121c  FUN_007e121c =====

void FUN_007e121c(long param_1)

{
  *(undefined4 *)(param_1 + 0x88) = 1;
                    /* WARNING: Could not recover jumptable at 0x007e1238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x90) + 0x28))();
  return;
}


// ===== 007e123c  FUN_007e123c =====

bool FUN_007e123c(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x88) != 0;
}


// ===== 007e1254  FUN_007e1254 =====

void FUN_007e1254(long param_1)

{
  *(undefined4 *)(param_1 + 0x88) = 0;
  return;
}


// ===== 007e1264  FUN_007e1264 =====

ulong FUN_007e1264(undefined8 *param_1,long *param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 local_44 [4];
  
  lVar3 = FUN_0062589c();
  uVar8 = 0;
  lVar7 = lVar3;
  do {
    pthread_mutex_lock((pthread_mutex_t *)((long)param_2 + 0x5c));
    lVar6 = param_2[7];
    if (lVar6 != param_2[8]) {
      do {
        if (lVar7 < *(long *)(lVar6 + 8)) {
          uVar9 = FUN_006259ac(*(long *)(lVar6 + 8),lVar7);
          lVar7 = param_2[6];
          goto joined_r0x007e1344;
        }
        FUN_007e2834(param_2 + 1,lVar6 + 0x20);
        local_44[0] = 0;
        FUN_007e353c(param_2[7],param_2[8],local_44,param_2[8] - param_2[7] >> 6);
        lVar6 = param_2[8];
        if (param_2[7] == lVar6) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:492: libc++ Hardening assertion !empty() failed: vector::pop_back called on an empty vector\n"
                    );
        }
        lVar1 = lVar6 + -0x40;
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        (**(code **)(lVar6 + -0x10))(0,lVar6 + -0x20,lVar6 + -0x20);
        lVar6 = param_2[7];
        param_2[8] = lVar1;
      } while (lVar6 != lVar1);
    }
    uVar9 = 0xffffffffffffffff;
    lVar7 = param_2[6];
joined_r0x007e1344:
    if (lVar7 != 0) {
      uVar8 = param_2[5];
      lVar7 = param_2[2];
      param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
      *param_1 = &DAT_aaaaaaaaaaaaaaaa;
      param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
      param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
      lVar7 = *(long *)(lVar7 + (uVar8 >> 7) * 8) + (uVar8 & 0x7f) * 0x20;
      (**(code **)(lVar7 + 0x10))(1,lVar7,param_1);
      param_1[2] = *(undefined8 *)(lVar7 + 0x10);
      param_1[3] = *(undefined8 *)(lVar7 + 0x18);
      *(code **)(lVar7 + 0x10) = FUN_00433984;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      FUN_007e3968(param_2 + 1);
      uVar2 = pthread_mutex_unlock((pthread_mutex_t *)((long)param_2 + 0x5c));
      return (ulong)uVar2;
    }
    pthread_mutex_unlock((pthread_mutex_t *)((long)param_2 + 0x5c));
    uVar4 = (**(code **)(*param_2 + 0x30))(param_2);
    if ((uVar4 & 1) != 0) break;
    if (param_3 == -1) {
      plVar5 = (long *)param_2[0x12];
      uVar8 = uVar9;
      if (uVar9 != 0xffffffffffffffff) goto LAB_007e1398;
      lVar7 = 0x7fffffffffffffff;
    }
    else {
      uVar8 = (long)param_3 - uVar8;
      plVar5 = (long *)param_2[0x12];
      uVar8 = uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU);
      uVar4 = uVar9;
      if ((long)uVar8 <= (long)uVar9) {
        uVar4 = uVar8;
      }
      if (uVar9 != 0xffffffffffffffff) {
        uVar8 = uVar4;
      }
LAB_007e1398:
      lVar7 = uVar8 * 1000;
    }
    uVar4 = (**(code **)(*plVar5 + 0x20))(plVar5,lVar7,1);
    if ((uVar4 & 1) == 0) break;
    lVar7 = FUN_0062589c();
    uVar4 = FUN_006259ac(lVar7,lVar3);
    uVar8 = uVar4;
  } while ((param_3 == -1) || ((long)uVar4 < (long)param_3));
  param_1[2] = FUN_00433984;
  param_1[3] = 0;
  return uVar4;
}


// ===== 007e1498  FUN_007e1498 =====

ulong FUN_007e1498(long *param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x30))();
  if ((uVar2 & 1) != 0) {
    return uVar2;
  }
  pthread_mutex_lock((pthread_mutex_t *)((long)param_1 + 0x5c));
  FUN_007e2834(param_1 + 1,param_2);
  (**(code **)(*(long *)param_1[0x12] + 0x28))();
  uVar1 = pthread_mutex_unlock((pthread_mutex_t *)((long)param_1 + 0x5c));
  return (ulong)uVar1;
}


// ===== 007e1508  FUN_007e1508 =====

void FUN_007e1508(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  undefined1 local_94 [4];
  long local_90;
  long lStack_88;
  undefined4 local_80;
  undefined1 auStack_70 [16];
  code *local_60;
  long lStack_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = (**(code **)(*param_1 + 0x30))();
  if ((uVar4 & 1) == 0) {
    lVar5 = (param_3 + 999) / 1000;
    uVar4 = lVar5 * 1000;
    uVar8 = lVar5 * -1000;
    iVar7 = (int)(uVar4 / 1000);
    if (499 < uVar4 % 1000) {
      iVar7 = iVar7 + 1;
    }
    if ((uVar4 & 0x8000000000000000) != 0) {
      iVar7 = -(int)(uVar8 / 1000) - (uint)(500 < uVar8 % 1000);
    }
    lVar5 = FUN_00625944((long)iVar7);
    pthread_mutex_lock((pthread_mutex_t *)((long)param_1 + 0x5c));
    local_80 = (undefined4)param_1[0xb];
    local_90 = (long)iVar7;
    lStack_88 = lVar5;
    (**(code **)(param_2 + 0x10))(1,param_2,auStack_70);
    lStack_58 = *(long *)(param_2 + 0x18);
    local_60 = *(code **)(param_2 + 0x10);
    *(code **)(param_2 + 0x10) = FUN_00433984;
    *(undefined8 *)(param_2 + 0x18) = 0;
    plVar1 = (long *)param_1[8];
    if (plVar1 < (long *)param_1[9]) {
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(undefined4 *)(plVar1 + 2) = local_80;
      plVar1[1] = lStack_88;
      *plVar1 = local_90;
      (*local_60)(1,auStack_70,plVar1 + 4);
      plVar6 = plVar1 + 8;
      plVar1[6] = (long)local_60;
      plVar1[7] = lStack_58;
      local_60 = FUN_00433984;
      lStack_58 = 0;
    }
    else {
      plVar6 = (long *)FUN_007e3a30(param_1 + 7,&local_90);
    }
    param_1[8] = (long)plVar6;
    local_94[0] = 0;
    FUN_007e37c4(param_1[7],plVar6,local_94,(long)plVar6 - param_1[7] >> 6);
    (*local_60)(0,auStack_70,auStack_70);
    *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
    (**(code **)(*(long *)param_1[0x12] + 0x28))();
    uVar3 = pthread_mutex_unlock((pthread_mutex_t *)((long)param_1 + 0x5c));
    uVar4 = (ulong)uVar3;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 007e1704  FUN_007e1704 =====

uint FUN_007e1704(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x5c));
  if (*(long *)(param_1 + 0x30) == 0) {
    if (*(long *)(param_1 + 0x38) == *(long *)(param_1 + 0x40)) {
      uVar3 = 0xffffffff;
    }
    else {
      iVar1 = *(int *)(*(long *)(param_1 + 0x38) + 8);
      iVar2 = FUN_0062589c(iVar2);
      uVar3 = iVar1 - iVar2;
      uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
    }
  }
  else {
    uVar3 = 0;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x5c));
  return uVar3;
}


// ===== 007e1770  FUN_007e1770 =====

void FUN_007e1770(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  char **local_58;
  char *local_50;
  char *pcStack_48;
  
  if (((DAT_00d802d8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d802d8), iVar1 != 0)) {
    DAT_00d802d0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d802d8);
  }
  local_58 = (char **)0x0;
  pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d802d0 != '\0') {
    local_58 = &local_50;
    FUN_0066d348(0x42,DAT_00d802d0,"Thread::Dispatch",0,0,0,0,0,0);
    local_50 = DAT_00d802d0;
    pcStack_48 = "Thread::Dispatch";
  }
  uVar2 = FUN_0062589c();
  (**(code **)(param_2 + 0x18))(param_2);
  uVar3 = FUN_0062589c();
  lVar4 = FUN_006259ac(uVar3,uVar2);
  if (*(int *)(param_1 + 0xd0) <= lVar4) {
    uVar5 = FUN_00417e08();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_0021570f,"../../rtc_base/thread.cc",0x1161,"Message to ",param_1 + 0xa0,
                   " took ",lVar4,"ms to dispatch.");
    }
    *(int *)(param_1 + 0xd0) = (int)lVar4 + 1;
  }
  if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
    FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 007e18fc  FUN_007e18fc =====

bool FUN_007e18fc(void *param_1)

{
  int iVar1;
  void *pvVar2;
  
  if (((DAT_00d802c8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d802c8), iVar1 != 0)) {
    pvVar2 = operator_new(0x48);
    FUN_007e0884();
    DAT_00d802c0 = pvVar2;
    FUN_0054ff1c(&DAT_00d802c8);
  }
  pvVar2 = pthread_getspecific(*(pthread_key_t *)((long)DAT_00d802c0 + 0x40));
  return pvVar2 == param_1;
}


// ===== 007e1984  FUN_007e1984 =====

void * FUN_007e1984(void)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  
  pvVar1 = operator_new(0xd8);
  pvVar2 = operator_new(0x70);
  FUN_007ebdf4();
  FUN_007e0b2c(pvVar1,pvVar2,1);
  plVar3 = *(long **)((long)pvVar1 + 0x98);
  *(void **)((long)pvVar1 + 0x98) = pvVar2;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return pvVar1;
}


// ===== 007e19ec  FUN_007e19ec =====

void FUN_007e19ec(long *param_1,undefined4 param_2)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  long *local_50;
  undefined4 local_48;
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  if (((DAT_00d802c8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d802c8), iVar1 != 0)) {
    pvVar3 = operator_new(0x48);
    FUN_007e0884();
    DAT_00d802c0 = pvVar3;
    FUN_0054ff1c(&DAT_00d802c8);
  }
  plVar2 = (long *)pthread_getspecific(*(pthread_key_t *)((long)DAT_00d802c0 + 0x40));
  if (plVar2 == param_1) {
    *(undefined4 *)(param_1 + 0x1a) = param_2;
  }
  else {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_007e3cfc;
    local_50 = param_1;
    local_48 = param_2;
    (**(code **)(*param_1 + 8))(param_1,&local_50,&uStack_11,&uStack_12);
    (*local_40)(0,&local_50,&local_50);
  }
  return;
}


// ===== 007e1adc  FUN_007e1adc =====

bool FUN_007e1adc(long *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  void *pvVar5;
  pthread_t *__newthread;
  pthread_attr_t local_70;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __newthread = (pthread_t *)(param_1 + 0x17);
  if (*__newthread == 0) {
    (**(code **)(*param_1 + 0x38))();
    if (((DAT_00d802c8 & 1) == 0) && (iVar3 = FUN_0054fdd4(&DAT_00d802c8), iVar3 != 0)) {
      pvVar5 = operator_new(0x48);
      FUN_007e0884();
      DAT_00d802c0 = pvVar5;
      FUN_0054ff1c(&DAT_00d802c8);
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
    local_70._48_8_ = &DAT_aaaaaaaaaaaaaaaa;
    local_70._24_8_ = &DAT_aaaaaaaaaaaaaaaa;
    local_70._16_8_ = &DAT_aaaaaaaaaaaaaaaa;
    local_70._40_8_ = &DAT_aaaaaaaaaaaaaaaa;
    local_70._32_8_ = &DAT_aaaaaaaaaaaaaaaa;
    local_70._8_8_ = &DAT_aaaaaaaaaaaaaaaa;
    local_70.__align = (long)&DAT_aaaaaaaaaaaaaaaa;
    pthread_attr_init(&local_70);
    iVar3 = pthread_create(__newthread,&local_70,FUN_007e1c14,param_1);
    bVar2 = iVar3 == 0;
    if (iVar3 != 0) {
      uVar4 = FUN_004249b0();
      if ((uVar4 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e94,"../../rtc_base/thread.cc",0x1433,
                     "Unable to create pthread, error ",iVar3);
      }
      *__newthread = 0;
    }
  }
  else {
    bVar2 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e1c14  FUN_007e1c14 =====

undefined8 FUN_007e1c14(long *param_1)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  
  if (((DAT_00d802c8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d802c8), iVar1 != 0)) {
    pvVar4 = operator_new(0x48);
    FUN_007e0884();
    DAT_00d802c0 = pvVar4;
    FUN_0054ff1c(&DAT_00d802c8);
  }
  FUN_007e08e0(DAT_00d802c0,param_1);
  plVar2 = param_1 + 0x14;
  if (*(char *)((long)param_1 + 0xb7) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  FUN_00625834(plVar2);
  (**(code **)(*param_1 + 0x58))(param_1);
  if (((DAT_00d802c8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d802c8), iVar1 != 0)) {
    pvVar4 = operator_new(0x48);
    FUN_007e0884();
    DAT_00d802c0 = pvVar4;
    FUN_0054ff1c(&DAT_00d802c8);
  }
  pvVar4 = DAT_00d802c0;
  pvVar3 = pthread_getspecific(*(pthread_key_t *)((long)DAT_00d802c0 + 0x40));
  if (pvVar3 != (void *)0x0) {
    pvVar5 = *(void **)((long)pvVar3 + 200);
    *(undefined8 *)((long)pvVar3 + 200) = 0;
    if (pvVar5 != (void *)0x0) {
      FUN_005d64f8(pvVar5);
      operator_delete(pvVar5);
    }
  }
  pthread_setspecific(*(pthread_key_t *)((long)pvVar4 + 0x40),(void *)0x0);
  return 0;
}


// ===== 007e1d3c  FUN_007e1d3c =====

ulong FUN_007e1d3c(ulong param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  
  uVar4 = param_1;
  if (*(long *)(param_1 + 0xb8) != 0) {
    if (((DAT_00d802c8 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d802c8), iVar2 != 0)) {
      pvVar3 = operator_new(0x48);
      FUN_007e0884();
      DAT_00d802c0 = pvVar3;
      FUN_0054ff1c(&DAT_00d802c8);
    }
    pvVar3 = pthread_getspecific(*(pthread_key_t *)((long)DAT_00d802c0 + 0x40));
    if (pvVar3 != (void *)0x0) {
      if (((DAT_00d802c8 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d802c8), iVar2 != 0)) {
        pvVar3 = operator_new(0x48);
        FUN_007e0884();
        DAT_00d802c0 = pvVar3;
        FUN_0054ff1c(&DAT_00d802c8);
      }
      pvVar3 = pthread_getspecific(*(pthread_key_t *)((long)DAT_00d802c0 + 0x40));
      if (((*(byte *)((long)pvVar3 + 0xc1) & 1) == 0) && (uVar4 = FUN_004022fc(), (uVar4 & 1) == 0))
      {
        FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/thread.cc",0x1572,
                     "Waiting for the thread to join, but blocking calls have been disallowed");
      }
    }
    uVar1 = pthread_join(*(pthread_t *)(param_1 + 0xb8),(void **)0x0);
    uVar4 = (ulong)uVar1;
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  return uVar4;
}


// ===== 007e1e64  FUN_007e1e64 =====

undefined1 FUN_007e1e64(long param_1,undefined1 param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 0xc1);
  *(undefined1 *)(param_1 + 0xc1) = param_2;
  return uVar1;
}


// ===== 007e1e78  FUN_007e1e78 =====

void FUN_007e1e78(undefined8 param_1)

{
  FUN_007e0734(param_1,0xffffffff);
  return;
}


// ===== 007e1e84  FUN_007e1e84 =====

void FUN_007e1e84(long param_1)

{
  *(undefined4 *)(param_1 + 0x88) = 1;
  (**(code **)(**(long **)(param_1 + 0x90) + 0x28))();
  FUN_007e1d3c(param_1);
  return;
}


// ===== 007e1ec8  FUN_007e1ec8 =====

void FUN_007e1ec8(long *param_1,undefined8 param_2,code *param_3)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  undefined1 uStack_e1;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined1 *puStack_8c;
  char **local_80;
  char *local_78;
  char *pcStack_70;
  undefined1 uStack_61;
  undefined8 *local_60 [2];
  code *local_50;
  code *pcStack_48;
  
  if (((DAT_00d802e8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d802e8), iVar1 != 0)) {
    DAT_00d802e0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d802e8);
  }
  local_80 = (char **)0x0;
  pcStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d802e0 != '\0') {
    FUN_0066d348(0x42,DAT_00d802e0,"Thread::BlockingCall",0,0,0,0,0,0);
    local_78 = DAT_00d802e0;
    pcStack_70 = "Thread::BlockingCall";
    local_80 = &local_78;
  }
  uVar2 = (**(code **)(*param_1 + 0x30))(param_1);
  if ((uVar2 & 1) == 0) {
    if (((DAT_00d802c8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d802c8), iVar1 != 0)) {
      pvVar4 = operator_new(0x48);
      FUN_007e0884();
      DAT_00d802c0 = pvVar4;
      FUN_0054ff1c(&DAT_00d802c8);
    }
    plVar3 = (long *)pthread_getspecific(*(pthread_key_t *)((long)DAT_00d802c0 + 0x40));
    if (plVar3 == param_1) {
      (*param_3)(param_2);
    }
    else {
      puStack_8c = &DAT_aaaaaaaaaaaaaaaa;
      uStack_90 = 0xaaaaaaaa;
      puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
      local_d0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_b0 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_98 = 0xaaaaaaaa;
      local_94 = 0xaaaaaaaa;
      puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
      local_e0 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_0066f1ac(&local_e0);
      local_60[0] = (undefined8 *)operator_new(0x20);
      *(undefined1 *)(local_60[0] + 2) = 1;
      lVar5 = *param_1;
      *local_60[0] = param_2;
      local_60[0][1] = param_3;
      local_60[0][3] = &local_e0;
      local_50 = FUN_007e3d20;
      pcStack_48 = FUN_007e3d10;
      (**(code **)(lVar5 + 8))(param_1,local_60,&uStack_61,&uStack_e1);
      (*local_50)(0,local_60,local_60);
      FUN_0066f318(&local_e0,0x7fffffffffffffff,3000000);
      FUN_0066f2b0(&local_e0);
    }
  }
  if ((local_80 != (char **)0x0) && (**local_80 != '\0')) {
    FUN_0066d348(0x45,*local_80,local_80[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 007e2104  FUN_007e2104 =====

void FUN_007e2104(void)

{
  return;
}


// ===== 007e210c  FUN_007e210c =====

void FUN_007e210c(void)

{
  return;
}


// ===== 007e2114  FUN_007e2114 =====

void FUN_007e2114(long *param_1)

{
  (**(code **)(*param_1 + 0x50))();
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x007e2150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1);
    return;
  }
  return;
}


// ===== 007e2164  FUN_007e2164 =====

uint FUN_007e2164(long *param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  void *pvVar4;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    if (((DAT_00d802c8 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d802c8), iVar2 != 0)) {
      pvVar4 = operator_new(0x48);
      FUN_007e0884();
      DAT_00d802c0 = pvVar4;
      FUN_0054ff1c(&DAT_00d802c8);
    }
    plVar3 = (long *)pthread_getspecific(*(pthread_key_t *)((long)DAT_00d802c0 + 0x40));
    if (plVar3 != param_1) {
      uVar1 = 0;
      goto LAB_007e21c4;
    }
  }
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  uVar1 = uVar1 ^ 1;
LAB_007e21c4:
  return uVar1 & 1;
}


// ===== 007e2214  FUN_007e2214 =====

undefined8 * FUN_007e2214(long *param_1,undefined8 *param_2)

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
    FUN_007e2308();
LAB_007e2304:
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
    if (uVar5 >> 0x3d != 0) goto LAB_007e2304;
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


// ===== 007e2308  FUN_007e2308 =====

void FUN_007e2308(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 007e2320  FUN_007e2320 =====

void FUN_007e2320(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar3;
  
  puVar8 = (undefined8 *)param_1[1];
  puVar5 = (undefined8 *)param_1[2];
  puVar3 = puVar8;
  if (puVar8 != puVar5) {
    uVar6 = param_1[4];
    plVar9 = puVar8 + (uVar6 >> 7);
    lVar2 = *plVar9 + (uVar6 & 0x7f) * 0x20;
    lVar1 = puVar8[param_1[5] + uVar6 >> 7] + (param_1[5] + uVar6 & 0x7f) * 0x20;
    puVar3 = puVar5;
    if (lVar2 != lVar1) {
      do {
        if (lVar2 == 0) goto LAB_007e24c0;
        (**(code **)(lVar2 + 0x10))(0,lVar2,lVar2);
        lVar2 = lVar2 + 0x20;
        if (lVar2 - *plVar9 == 0x1000) {
          plVar9 = plVar9 + 1;
          lVar2 = *plVar9;
        }
      } while (lVar2 != lVar1);
      puVar8 = (undefined8 *)param_1[1];
      puVar5 = (undefined8 *)param_1[2];
      puVar3 = puVar5;
    }
  }
  param_1[5] = 0;
  lVar2 = (long)puVar3 - (long)puVar8;
  while (uVar6 = lVar2 >> 3, 2 < uVar6) {
    operator_delete((void *)*puVar8);
    puVar5 = (undefined8 *)param_1[2];
    puVar8 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = puVar8;
    lVar2 = (long)puVar5 - (long)puVar8;
  }
  if (uVar6 == 1) {
    uVar4 = 0x40;
  }
  else {
    if (uVar6 != 2) goto LAB_007e2438;
    uVar4 = 0x80;
  }
  param_1[4] = uVar4;
LAB_007e2438:
  puVar3 = puVar5;
  if (puVar8 != puVar5) {
    do {
      puVar3 = puVar8 + 1;
      operator_delete((void *)*puVar8);
      puVar8 = puVar3;
    } while (puVar3 != puVar5);
    puVar5 = (undefined8 *)param_1[1];
    puVar3 = (undefined8 *)param_1[2];
  }
  uVar7 = (ulong)((long)puVar3 + (-8 - ((long)puVar3 << 0x3d))) >> 3;
  uVar6 = (ulong)(((long)puVar5 - (long)puVar3 << 0x3d) - ((long)puVar5 - (long)puVar3)) >> 3;
  if (uVar7 <= uVar6) {
    uVar6 = uVar7;
  }
  if ((1 < uVar6) && ((((int)puVar5 - (int)puVar3 | -(int)puVar3) & 7U) == 0)) {
    uVar6 = uVar6 & 0x1ffffffffffffffe;
    puVar3 = puVar3 + -uVar6;
    do {
      uVar6 = uVar6 - 2;
    } while (uVar6 != 0);
  }
  do {
    if (puVar3 == puVar5) {
      param_1[2] = puVar3;
      if ((void *)*param_1 != (void *)0x0) {
        operator_delete((void *)*param_1);
        return;
      }
      return;
    }
    puVar3 = puVar3 + -1;
  } while (puVar3 != (undefined8 *)0x0);
LAB_007e24c0:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 007e2520  FUN_007e2520 =====

void FUN_007e2520(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 != *(long *)(param_1 + 8)) {
      do {
        operator_delete(*(void **)(lVar2 + -8));
        lVar2 = *(long *)(param_1 + 0x10) + -8;
        if (lVar2 == 0) goto LAB_007e2604;
        *(long *)(param_1 + 0x10) = lVar2;
      } while (lVar2 != *(long *)(param_1 + 8));
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x20);
    puVar3 = *(undefined8 **)(param_1 + 8);
    if (0x7f < uVar4) {
      operator_delete((void *)*puVar3);
      puVar3 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
      lVar2 = *(long *)(param_1 + 0x28);
      *(undefined8 **)(param_1 + 8) = puVar3;
      uVar4 = *(long *)(param_1 + 0x20) - 0x80;
      *(ulong *)(param_1 + 0x20) = uVar4;
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    lVar1 = 0;
    if (puVar5 != puVar3) {
      lVar1 = ((long)puVar5 - (long)puVar3) * 0x10 + -1;
    }
    if (0x7f < lVar1 - (lVar2 + uVar4)) {
      operator_delete((void *)puVar5[-1]);
      lVar2 = *(long *)(param_1 + 0x10) + -8;
      if (lVar2 == 0) {
LAB_007e2604:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      *(long *)(param_1 + 0x10) = lVar2;
    }
  }
  FUN_007e2618(param_1);
  return;
}


// ===== 007e2618  FUN_007e2618 =====

void FUN_007e2618(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar6 = param_1[2];
  pvVar5 = (void *)*param_1;
  puVar13 = (undefined8 *)param_1[1];
  puVar11 = (undefined8 *)(lVar6 - (long)puVar13);
  if (puVar11 < (undefined8 *)(param_1[3] - (long)pvVar5)) {
    if (lVar6 - (long)puVar13 == 0) {
      puVar2 = (undefined8 *)0x0;
      lVar12 = lVar6;
    }
    else {
      if ((long)puVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      puVar2 = (undefined8 *)operator_new(lVar6 - (long)puVar13);
      puVar11 = (undefined8 *)((long)puVar2 + (long)puVar11);
      uVar3 = (lVar6 - (long)puVar13) - 8U >> 3;
      uVar8 = (ulong)-(long)puVar2 >> 3;
      if (uVar3 <= (ulong)-(long)puVar2 >> 3) {
        uVar8 = uVar3;
      }
      puVar4 = puVar2;
      if (0x2b < uVar8) {
        uVar9 = (ulong)-(long)puVar2 >> 3;
        if (uVar3 <= uVar9) {
          uVar9 = uVar3;
        }
        if (((((((int)lVar6 - (int)puVar13 | (uint)-(long)puVar2) & 7) == 0) &&
             (puVar2 <= puVar2 + uVar9)) && (puVar13 <= puVar13 + uVar9)) &&
           (0x1f < (ulong)((long)puVar2 - (long)puVar13))) {
          puVar7 = puVar13 + 2;
          uVar3 = uVar8 + 1 & 3;
          puVar10 = puVar2 + 2;
          uVar9 = 4;
          if (uVar3 != 0) {
            uVar9 = uVar3;
          }
          lVar6 = (uVar8 + 1) - uVar9;
          puVar4 = puVar2 + lVar6;
          puVar13 = puVar13 + lVar6;
          do {
            puVar1 = puVar7 + -1;
            uVar14 = puVar7[-2];
            uVar16 = puVar7[1];
            uVar15 = *puVar7;
            lVar6 = lVar6 + -4;
            puVar7 = puVar7 + 4;
            puVar10[-1] = *puVar1;
            puVar10[-2] = uVar14;
            puVar10[1] = uVar16;
            *puVar10 = uVar15;
            puVar10 = puVar10 + 4;
          } while (lVar6 != 0);
        }
      }
      do {
        if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar7 = puVar4 + 1;
        *puVar4 = *puVar13;
        puVar4 = puVar7;
        puVar13 = puVar13 + 1;
      } while (puVar7 != puVar11);
      pvVar5 = (void *)*param_1;
      lVar6 = param_1[2];
      lVar12 = param_1[1];
    }
    *param_1 = (long)puVar2;
    param_1[1] = (long)puVar2;
    uVar3 = (lVar6 - (lVar6 << 0x3d)) - 8U >> 3;
    uVar8 = (ulong)((lVar12 - lVar6 << 0x3d) - (lVar12 - lVar6)) >> 3;
    if (uVar3 <= uVar8) {
      uVar8 = uVar3;
    }
    param_1[2] = (long)puVar2 + (lVar6 - lVar12);
    param_1[3] = (long)puVar11;
    if ((1 < uVar8) && ((((int)lVar12 - (int)lVar6 | -(int)lVar6) & 7U) == 0)) {
      uVar8 = uVar8 & 0x1ffffffffffffffe;
      lVar6 = lVar6 + uVar8 * -8;
      do {
        uVar8 = uVar8 - 2;
      } while (uVar8 != 0);
    }
    while (lVar6 != lVar12) {
      lVar6 = lVar6 + -8;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
      return;
    }
  }
  return;
}


// ===== 007e2834  FUN_007e2834 =====

void FUN_007e2834(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar2 = 0;
  if (lVar4 != lVar3) {
    lVar2 = (lVar4 - lVar3) * 0x10 + -1;
  }
  if (lVar2 == *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) {
    FUN_007e290c(param_1);
    lVar3 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  if (lVar3 != lVar4) {
    uVar1 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
    lVar2 = *(long *)(lVar3 + (uVar1 >> 7) * 8) + (uVar1 & 0x7f) * 0x20;
    if (lVar2 != 0) {
      (**(code **)(param_2 + 0x10))(1,param_2,lVar2);
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(code **)(param_2 + 0x10) = FUN_00433984;
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 007e290c  FUN_007e290c =====

void FUN_007e290c(long *param_1)

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
  
  if ((ulong)param_1[4] < 0x80) {
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
      FUN_007e2d7c(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_007e32a0(&local_50,lVar5);
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
      FUN_007e2d7c(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0x1000);
    FUN_007e3004(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x80;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_007e2af4(param_1,&local_50);
  return;
}


// ===== 007e2af4  FUN_007e2af4 =====

void FUN_007e2af4(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_007e2d64;
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
LAB_007e2d64:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 007e2d7c  FUN_007e2d7c =====

void FUN_007e2d7c(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_007e2fec;
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
LAB_007e2fec:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 007e3004  FUN_007e3004 =====

void FUN_007e3004(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_007e3288;
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
LAB_007e3288:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 007e32a0  FUN_007e32a0 =====

void FUN_007e32a0(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_007e3524;
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
LAB_007e3524:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 007e353c  FUN_007e353c =====

void FUN_007e353c(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_94;
  undefined1 *puStack_8c;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (param_4 < 1) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__algorithm/pop_heap.h:40: libc++ Hardening assertion __len > 0 failed: The heap given to pop_heap must be non-empty\n"
              );
  }
  if (param_4 != 1) {
    uVar2 = *(undefined4 *)(param_1 + 2);
    uVar13 = param_1[1];
    uVar12 = *param_1;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_7c = 0xaaaaaaaa;
    uStack_84 = 0xaaaaaaaa;
    local_80 = 0xaaaaaaaa;
    puStack_8c = &DAT_aaaaaaaaaaaaaaaa;
    uStack_94 = &DAT_aaaaaaaaaaaaaaaa;
    (*(code *)param_1[6])(1,param_1 + 4,(long)&uStack_94 + 4);
    puStack_78 = (undefined1 *)param_1[7];
    pcVar7 = FUN_00433984;
    local_80 = (undefined4)param_1[6];
    uStack_7c = (undefined4)((ulong)param_1[6] >> 0x20);
    param_1[6] = FUN_00433984;
    param_1[7] = 0;
    puVar6 = param_1;
    uVar9 = 0;
    do {
      uVar8 = uVar9 << 1 | 1;
      uVar1 = uVar9 * 2 + 2;
      puVar5 = puVar6 + uVar9 * 8 + 8;
      if (((long)uVar1 < param_4) &&
         (((long)puVar6[uVar9 * 8 + 0x11] < (long)puVar6[uVar9 * 8 + 9] ||
          ((puVar6[uVar9 * 8 + 0x11] == puVar6[uVar9 * 8 + 9] &&
           (*(uint *)(puVar6 + uVar9 * 8 + 0x12) < *(uint *)(puVar6 + uVar9 * 8 + 10))))))) {
        puVar5 = puVar6 + uVar9 * 8 + 0x10;
        uVar8 = uVar1;
      }
      uVar3 = *(undefined4 *)(puVar5 + 2);
      uVar11 = puVar5[1];
      uVar10 = *puVar5;
      puVar6[6] = FUN_00433984;
      puVar6[7] = 0;
      *(undefined4 *)(puVar6 + 2) = uVar3;
      puVar6[1] = uVar11;
      *puVar6 = uVar10;
      (*(code *)puVar5[6])(1,puVar5 + 4,puVar6 + 4);
      puVar6[6] = puVar5[6];
      puVar6[7] = puVar5[7];
      puVar5[6] = FUN_00433984;
      puVar5[7] = 0;
      puVar6 = puVar5;
      uVar9 = uVar8;
    } while ((long)uVar8 <= (long)(param_4 - 2U >> 1));
    puVar6 = (undefined8 *)(param_2 + -0x40);
    if (puVar5 == puVar6) {
      puVar5[6] = FUN_00433984;
      puVar5[7] = 0;
      *(undefined4 *)(puVar5 + 2) = uVar2;
      puVar5[1] = uVar13;
      *puVar5 = uVar12;
      (*(code *)CONCAT44(uStack_7c,local_80))(1,(long)&uStack_94 + 4,puVar5 + 4);
      puVar5[6] = CONCAT44(uStack_7c,local_80);
      puVar5[7] = puStack_78;
      local_80 = 0x433984;
      uStack_7c = 0;
      puStack_78 = (undefined1 *)0x0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + -0x30);
      uVar11 = *(undefined8 *)(param_2 + -0x38);
      uVar10 = *puVar6;
      puVar5[6] = FUN_00433984;
      puVar5[7] = 0;
      *(undefined4 *)(puVar5 + 2) = uVar3;
      puVar5[1] = uVar11;
      *puVar5 = uVar10;
      (**(code **)(param_2 + -0x10))(1,param_2 + -0x20,puVar5 + 4);
      puVar5[6] = *(undefined8 *)(param_2 + -0x10);
      puVar5[7] = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(param_2 + -0x38) = uVar13;
      *puVar6 = uVar12;
      *(undefined4 *)(param_2 + -0x30) = uVar2;
      *(code **)(param_2 + -0x10) = FUN_00433984;
      *(undefined8 *)(param_2 + -8) = 0;
      (*(code *)CONCAT44(uStack_7c,local_80))(1,(long)&uStack_94 + 4,param_2 + -0x20);
      *(undefined1 **)(param_2 + -8) = puStack_78;
      *(ulong *)(param_2 + -0x10) = CONCAT44(uStack_7c,local_80);
      local_80 = 0x433984;
      uStack_7c = 0;
      puStack_78 = (undefined1 *)0x0;
      FUN_007e37c4(param_1,puVar5 + 8,param_3,(long)(puVar5 + 8) - (long)param_1 >> 6);
      pcVar7 = (code *)CONCAT44(uStack_7c,local_80);
    }
    (*pcVar7)(0,(long)&uStack_94 + 4,(long)&uStack_94 + 4);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 007e37c4  FUN_007e37c4 =====

void FUN_007e37c4(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_84;
  undefined1 *puStack_7c;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (1 < param_4) {
    uVar5 = param_4 - 2U >> 1;
    puVar1 = (undefined8 *)(param_1 + uVar5 * 0x40);
    if ((*(long *)(param_2 + -0x38) < (long)puVar1[1]) ||
       ((*(long *)(param_2 + -0x38) == puVar1[1] &&
        (*(uint *)(param_2 + -0x30) < *(uint *)(puVar1 + 2))))) {
      lVar11 = *(long *)(param_2 + -0x38);
      uVar10 = *(undefined8 *)(param_2 + -0x40);
      uVar2 = *(uint *)(param_2 + -0x30);
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_6c = 0xaaaaaaaa;
      uStack_74 = 0xaaaaaaaa;
      local_70 = 0xaaaaaaaa;
      puStack_7c = &DAT_aaaaaaaaaaaaaaaa;
      uStack_84 = &DAT_aaaaaaaaaaaaaaaa;
      (**(code **)(param_2 + -0x10))(1,param_2 + -0x20,(long)&uStack_84 + 4);
      puStack_68 = *(undefined1 **)(param_2 + -8);
      uVar8 = *(undefined8 *)(param_2 + -0x10);
      *(code **)(param_2 + -0x10) = FUN_00433984;
      *(undefined8 *)(param_2 + -8) = 0;
      local_70 = (undefined4)uVar8;
      uStack_6c = (undefined4)((ulong)uVar8 >> 0x20);
      puVar7 = (undefined8 *)(param_2 + -0x40);
      while( true ) {
        puVar6 = puVar1;
        uVar3 = *(undefined4 *)(puVar6 + 2);
        uVar9 = puVar6[1];
        uVar8 = *puVar6;
        puVar7[6] = FUN_00433984;
        puVar7[7] = 0;
        *(undefined4 *)(puVar7 + 2) = uVar3;
        puVar7[1] = uVar9;
        *puVar7 = uVar8;
        (*(code *)puVar6[6])(1,puVar6 + 4,puVar7 + 4);
        puVar7[6] = puVar6[6];
        puVar7[7] = puVar6[7];
        puVar6[6] = FUN_00433984;
        puVar6[7] = 0;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1 >> 1;
        puVar1 = (undefined8 *)(param_1 + uVar5 * 0x40);
        puVar7 = puVar6;
        if (((long)puVar1[1] <= lVar11) &&
           ((lVar11 != puVar1[1] || (*(uint *)(puVar1 + 2) <= uVar2)))) break;
      }
      puVar6[6] = FUN_00433984;
      puVar6[7] = 0;
      *(uint *)(puVar6 + 2) = uVar2;
      puVar6[1] = lVar11;
      *puVar6 = uVar10;
      (*(code *)CONCAT44(uStack_6c,local_70))(1,(long)&uStack_84 + 4,puVar6 + 4);
      puVar6[6] = CONCAT44(uStack_6c,local_70);
      puVar6[7] = puStack_68;
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e3968  FUN_007e3968 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007e3968(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:2185: libc++ Hardening assertion !empty() failed: deque::pop_front called on an empty deque\n"
              );
  }
  lVar1 = *(long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) >> 7) * 8) +
          (*(ulong *)(param_1 + 0x20) & 0x7f) * 0x20;
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(0,lVar1,lVar1);
    uVar2 = *(long *)(param_1 + 0x20) + _DAT_001f2940;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + _UNK_001f2948;
    *(ulong *)(param_1 + 0x20) = uVar2;
    if (0xff < uVar2) {
      operator_delete((void *)**(undefined8 **)(param_1 + 8));
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x80;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 007e3a30  FUN_007e3a30 =====

long FUN_007e3a30(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  void *local_38;
  
  lVar6 = param_1[1] - *param_1;
  uVar1 = (lVar6 >> 6) + 1;
  if (uVar1 >> 0x3a == 0) {
    local_50 = (void *)0x0;
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 5;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7fffffffffffffbf < uVar4) {
      uVar5 = 0x3ffffffffffffff;
    }
    if (uVar5 != 0) {
      if (uVar5 >> 0x3a != 0) goto LAB_007e3bb8;
      local_50 = operator_new(uVar5 << 6);
    }
    local_38 = (void *)((long)local_50 + uVar5 * 0x40);
    puVar2 = (undefined8 *)((long)local_50 + lVar6);
    local_48 = puVar2;
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar8 = param_2[1];
    uVar7 = *param_2;
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 2);
    puVar2[1] = uVar8;
    *puVar2 = uVar7;
    (*(code *)param_2[6])(1,param_2 + 4,puVar2 + 4);
    puVar2[6] = param_2[6];
    puVar2[7] = param_2[7];
    param_2[6] = FUN_00433984;
    param_2[7] = 0;
    local_40 = puVar2 + 8;
    FUN_007e3bbc(param_1,&local_50);
    puVar3 = local_48;
    lVar6 = param_1[1];
    puVar2 = local_40;
    while( true ) {
      if (puVar3 == puVar2) {
        if (local_50 != (void *)0x0) {
          local_40 = puVar2;
          operator_delete(local_50);
        }
        return lVar6;
      }
      if (puVar2 + -8 == (undefined8 *)0x0) break;
      (*(code *)puVar2[-2])(0,puVar2 + -4,puVar2 + -4);
      puVar2 = puVar2 + -8;
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  FUN_007e3ce4();
LAB_007e3bb8:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 007e3bbc  FUN_007e3bbc =====

void FUN_007e3bbc(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  puVar6 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar6 + (param_2[1] - (long)puVar2));
  puVar7 = puVar6;
  puVar8 = puVar1;
  if (puVar2 != puVar6) {
    do {
      if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar11 = puVar7[1];
      uVar9 = *puVar7;
      *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(puVar7 + 2);
      puVar8[1] = uVar11;
      *puVar8 = uVar9;
      (*(code *)puVar7[6])(1,puVar7 + 4,puVar8 + 4);
      puVar8[6] = puVar7[6];
      puVar8[7] = puVar7[7];
      puVar7[6] = FUN_00433984;
      puVar7[7] = 0;
      puVar7 = puVar7 + 8;
      puVar8 = puVar8 + 8;
    } while (puVar7 != puVar2);
    do {
      if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      (*(code *)puVar6[6])(0,puVar6 + 4,puVar6 + 4);
      puVar6 = puVar6 + 8;
    } while (puVar6 != puVar2);
  }
  param_2[1] = (long)puVar1;
  lVar3 = *param_1;
  lVar5 = param_1[2];
  param_1[1] = lVar3;
  lVar10 = param_2[1];
  lVar4 = param_2[3];
  param_1[1] = param_2[2];
  *param_1 = lVar10;
  param_1[2] = lVar4;
  param_2[2] = lVar3;
  param_2[3] = lVar5;
  *param_2 = lVar3;
  param_2[1] = lVar3;
  return;
}


// ===== 007e3ce4  FUN_007e3ce4 =====

void FUN_007e3ce4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 007e3cfc  FUN_007e3cfc =====

void FUN_007e3cfc(undefined8 *param_1)

{
  FUN_007e19ec(*param_1,*(undefined4 *)(param_1 + 1));
  return;
}


// ===== 007e3d10  FUN_007e3d10 =====

void FUN_007e3d10(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007e3d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((undefined8 *)*param_1)[1])(*(undefined8 *)*param_1);
  return;
}


// ===== 007e3d20  FUN_007e3d20 =====

void FUN_007e3d20(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x7e3d94);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      if (*(char *)((long)pvVar2 + 0x10) == '\x01') {
        FUN_0066f2dc(*(undefined8 *)((long)pvVar2 + 0x18));
      }
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 007e3d94  FUN_007e3d94 =====

void * FUN_007e3d94(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x8d0);
  FUN_007e6484();
  return pvVar1;
}


// ===== 007e3dc8  FUN_007e3dc8 =====

int FUN_007e3dc8(long *param_1,long param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  socklen_t local_34;
  undefined1 *local_18;
  
  FUN_007e3ebc();
  *param_1 = (long)&PTR_FUN_00d38230;
  param_1[0x1b] = param_2;
  *(int *)(param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  local_18 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_18);
  pthread_mutex_init((pthread_mutex_t *)((long)param_1 + 0xec),(pthread_mutexattr_t *)&local_18);
  iVar1 = pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_18);
  uVar2 = 0;
  if (param_3 != -1) {
    uVar2 = 2;
  }
  *(undefined4 *)((long)param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x23) = uVar2;
  param_1[0x24] = 0;
  *(undefined4 *)((long)param_1 + 0x127) = 0;
  if ((int)param_1[0x1c] != -1) {
    (**(code **)(*param_1 + 0xb8))(param_1,3);
    local_18 = (undefined1 *)CONCAT44(local_18._4_4_,1);
    local_34 = 4;
    iVar1 = getsockopt((int)param_1[0x1c],1,3,&local_18,&local_34);
    *(bool *)((long)param_1 + 0xe4) = local_18._0_4_ == 2;
  }
  return iVar1;
}


// ===== 007e3ebc  FUN_007e3ebc =====

void FUN_007e3ebc(long *param_1)

{
  undefined1 *local_18;
  
  local_18 = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = (long)(PTR_DAT_00d52910 + 0x10);
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_18);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 1),(pthread_mutexattr_t *)&local_18);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_18);
  FUN_007b5d10(param_1 + 6);
  local_18 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_18);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 10),(pthread_mutexattr_t *)&local_18);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_18);
  FUN_007b5d10(param_1 + 0xf);
  FUN_007b5d10(param_1 + 0x13);
  FUN_007b5d10(param_1 + 0x17);
  return;
}


// ===== 007e3f60  FUN_007e3f60 =====

int FUN_007e3f60(long *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  long *plVar3;
  
  *param_1 = (long)&PTR_FUN_00d38230;
  if ((int)param_1[0x1c] != -1) {
    iVar1 = close((int)param_1[0x1c]);
    puVar2 = (undefined4 *)__errno(iVar1);
    (**(code **)(*param_1 + 0x78))(param_1,*puVar2);
    *(undefined4 *)(param_1 + 0x23) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    (**(code **)(*param_1 + 0xb8))(param_1,0);
    plVar3 = (long *)param_1[0x24];
    if (plVar3 != (long *)0x0) {
      param_1[0x24] = 0;
      (**(code **)(*plVar3 + 8))();
    }
  }
  plVar3 = (long *)param_1[0x24];
  param_1[0x24] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  pthread_mutex_destroy((pthread_mutex_t *)((long)param_1 + 0xec));
  *param_1 = (long)(PTR_DAT_00d52910 + 0x10);
  FUN_007b5d24(param_1 + 0x17);
  FUN_007b5d24(param_1 + 0x13);
  FUN_007b5d24(param_1 + 0xf);
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 10));
  FUN_007b5d24(param_1 + 6);
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 1));
  return iVar1;
}


// ===== 007e4050  FUN_007e4050 =====

void FUN_007e4050(void *param_1)

{
  FUN_007e3f60();
  operator_delete(param_1);
  return;
}


// ===== 007e4080  FUN_007e4080 =====

bool FUN_007e4080(long *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  (**(code **)(*param_1 + 0x68))();
  iVar1 = socket(param_2,param_3,0);
  *(int *)(param_1 + 0x1c) = iVar1;
  *(int *)(param_1 + 0x1d) = param_2;
  *(bool *)((long)param_1 + 0xe4) = param_3 == 2;
  puVar2 = (undefined4 *)__errno();
  (**(code **)(*param_1 + 0x78))(param_1,*puVar2);
  if (*(char *)((long)param_1 + 0xe4) == '\x01') {
    (**(code **)(*param_1 + 0xb8))(param_1,3);
  }
  return (int)param_1[0x1c] != -1;
}


// ===== 007e4128  FUN_007e4128 =====

void FUN_007e4128(undefined8 *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  socklen_t local_c4;
  sockaddr local_c0;
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
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  local_c4 = 0x80;
  local_c0.sa_data[6] = '\0';
  local_c0.sa_data[7] = '\0';
  local_c0.sa_data[8] = '\0';
  local_c0.sa_data[9] = '\0';
  local_c0.sa_data[10] = '\0';
  local_c0.sa_data[0xb] = '\0';
  local_c0.sa_data[0xc] = '\0';
  local_c0.sa_data[0xd] = '\0';
  local_c0.sa_family = 0;
  local_c0.sa_data[0] = '\0';
  local_c0.sa_data[1] = '\0';
  local_c0.sa_data[2] = '\0';
  local_c0.sa_data[3] = '\0';
  local_c0.sa_data[4] = '\0';
  local_c0.sa_data[5] = '\0';
  uStack_a8 = 0;
  uStack_b0 = 0;
  iVar2 = getsockname(*(int *)(param_2 + 0xe0),&local_c0,&local_c4);
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007e8a64(param_1);
  if (iVar2 < 0) {
    uVar3 = FUN_004022fc();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../rtc_base/physical_socket_server.cc",0x642,
                   "GetLocalAddress: unable to get local addr, socket=",
                   *(undefined4 *)(param_2 + 0xe0));
    }
  }
  else {
    FUN_007e99a0(&local_c0,param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e4208  FUN_007e4208 =====

void FUN_007e4208(undefined8 *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  socklen_t local_c4;
  sockaddr local_c0;
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
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  local_c4 = 0x80;
  local_c0.sa_data[6] = '\0';
  local_c0.sa_data[7] = '\0';
  local_c0.sa_data[8] = '\0';
  local_c0.sa_data[9] = '\0';
  local_c0.sa_data[10] = '\0';
  local_c0.sa_data[0xb] = '\0';
  local_c0.sa_data[0xc] = '\0';
  local_c0.sa_data[0xd] = '\0';
  local_c0.sa_family = 0;
  local_c0.sa_data[0] = '\0';
  local_c0.sa_data[1] = '\0';
  local_c0.sa_data[2] = '\0';
  local_c0.sa_data[3] = '\0';
  local_c0.sa_data[4] = '\0';
  local_c0.sa_data[5] = '\0';
  uStack_a8 = 0;
  uStack_b0 = 0;
  iVar2 = getpeername(*(int *)(param_2 + 0xe0),&local_c0,&local_c4);
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007e8a64(param_1);
  if (iVar2 < 0) {
    uVar3 = FUN_004022fc();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../rtc_base/physical_socket_server.cc",0x6ba,
                   "GetRemoteAddress: unable to get remote addr, socket=",
                   *(undefined4 *)(param_2 + 0xe0));
    }
  }
  else {
    FUN_007e99a0(&local_c0,param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e42e8  FUN_007e42e8 =====

int FUN_007e42e8(long *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  socklen_t __len;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 local_d0 [16];
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
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007e8cec(&local_120);
  if ((*(long *)(param_1[0x1b] + 8) != 0) && (uVar3 = FUN_007e95f8(param_2), (uVar3 & 1) == 0)) {
    lVar5 = param_1[0x1c];
    puVar7 = *(undefined8 **)(param_1[0x1b] + 8);
    uVar4 = FUN_007e8ea8(param_2);
    iVar2 = (**(code **)*puVar7)(puVar7,(int)lVar5,uVar4);
    if (iVar2 == -2) {
      uVar3 = FUN_00417e08();
      if ((uVar3 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/physical_socket_server.cc",0x759,
                     "Can\'t bind socket to network because network binding is not implemented for this OS."
                    );
      }
    }
    else if (iVar2 == 0) {
      lVar5 = FUN_007e8ea8(&local_120);
      FUN_007eaa50(local_d0,*(undefined4 *)(lVar5 + 8));
      FUN_007e8c64(&local_120,local_d0);
    }
    else {
      uVar3 = FUN_007e9604(param_2);
      if ((uVar3 & 1) == 0) {
        uVar3 = FUN_004022fc();
        if ((uVar3 & 1) == 0) {
          FUN_00623bb0(&DAT_00215736,"../../rtc_base/physical_socket_server.cc",0x7a2,
                       "Binding socket to network address"," failed; result: ",iVar2);
        }
        iVar2 = -1;
        goto joined_r0x007e4468;
      }
      uVar3 = FUN_0044075c();
      if ((uVar3 & 1) == 0) {
        FUN_00623bb0(&DAT_00215736,"../../rtc_base/physical_socket_server.cc",0x788,
                     "Binding socket to loopback address"," failed; result: ",iVar2);
      }
    }
  }
  local_d0._8_8_ = &DAT_aaaaaaaaaaaaaaaa;
  local_d0._0_8_ = &DAT_aaaaaaaaaaaaaaaa;
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
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  __len = FUN_007e9900(&local_120,local_d0);
  iVar2 = bind((int)param_1[0x1c],(sockaddr *)local_d0,__len);
  puVar6 = (undefined4 *)__errno();
  (**(code **)(*param_1 + 0x78))(param_1,*puVar6);
joined_r0x007e4468:
  if ((long)local_110 < 0) {
    operator_delete(local_120);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e44f4  FUN_007e44f4 =====

undefined8 FUN_007e44f4(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  
  if ((int)param_1[0x23] == 0) {
    uVar2 = FUN_007e95a4(param_2);
    if ((uVar2 & 1) == 0) {
      uVar1 = FUN_007e4620(param_1,param_2);
      return uVar1;
    }
    uVar2 = FUN_0044075c();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/physical_socket_server.cc",0x8a0,
                   "Resolving addr in PhysicalSocket::Connect");
    }
    plVar3 = (long *)operator_new(0xb0);
    FUN_007eac60();
    plVar4 = (long *)param_1[0x24];
    param_1[0x24] = (long)plVar3;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
      plVar3 = (long *)param_1[0x24];
    }
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_007e7c6c;
    local_50[0] = param_1;
    (**(code **)(*plVar3 + 0x10))(plVar3,param_2,local_50);
    (*local_40)(0,local_50,local_50);
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x23) = 1;
  }
  else {
    (**(code **)(*param_1 + 0x78))(param_1,0x72);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// ===== 007e4620  FUN_007e4620 =====

void FUN_007e4620(long *param_1,long param_2)

{
  long lVar1;
  socklen_t __len;
  int iVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 local_c0 [16];
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
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((int)param_1[0x1c] == -1) &&
     (uVar3 = (**(code **)(*param_1 + 0x98))(param_1,*(undefined4 *)(param_2 + 0x20),1),
     (uVar3 & 1) == 0)) {
LAB_007e46f0:
    uVar5 = 0xffffffff;
  }
  else {
    local_c0._8_8_ = &DAT_aaaaaaaaaaaaaaaa;
    local_c0._0_8_ = &DAT_aaaaaaaaaaaaaaaa;
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
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
    __len = FUN_007e9900(param_2,local_c0);
    iVar2 = connect((int)param_1[0x1c],(sockaddr *)local_c0,__len);
    puVar4 = (undefined4 *)__errno();
    (**(code **)(*param_1 + 0x78))(param_1,*puVar4);
    if (iVar2 == 0) {
      uVar5 = 3;
      uVar6 = 2;
    }
    else {
      iVar2 = (**(code **)(*param_1 + 0x70))(param_1);
      uVar5 = 7;
      uVar6 = 1;
      if ((iVar2 != 0x73) && (iVar2 != 0xb)) goto LAB_007e46f0;
    }
    *(undefined4 *)(param_1 + 0x23) = uVar6;
    (**(code **)(*param_1 + 0xc0))(param_1,uVar5);
    uVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 007e4744  FUN_007e4744 =====

undefined4 FUN_007e4744(long param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xec));
  uVar1 = *(undefined4 *)(param_1 + 0x114);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xec));
  return uVar1;
}


// ===== 007e4780  FUN_007e4780 =====

int FUN_007e4780(long param_1,undefined4 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xec));
  *(undefined4 *)(param_1 + 0x114) = param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xec));
  return iVar1;
}


// ===== 007e47b8  FUN_007e47b8 =====

undefined4 FUN_007e47b8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x118);
}


// ===== 007e47c4  FUN_007e47c4 =====

int FUN_007e47c4(long param_1,int param_2,uint *param_3)

{
  bool bVar1;
  int iVar2;
  int __level;
  int __optname;
  uint uVar3;
  socklen_t local_24;
  
  iVar2 = -1;
  __optname = 8;
  __level = param_2;
  switch(param_2) {
  case 0:
    __optname = 10;
    break;
  case 1:
    break;
  case 2:
    __optname = 7;
    __level = 1;
    break;
  case 3:
    __optname = 1;
    __level = 6;
    break;
  default:
    goto code_r0x007e4928;
  case 5:
  case 7:
    bVar1 = *(int *)(param_1 + 0xe8) != 10;
    __level = 0x29;
    if (bVar1) {
      __level = 0;
    }
    __optname = 0x43;
    if (bVar1) {
      __optname = 1;
    }
    break;
  case 8:
    bVar1 = *(int *)(param_1 + 0xe8) != 10;
    __level = 0x29;
    if (bVar1) {
      __level = 0;
    }
    __optname = 0x42;
    if (bVar1) {
      __optname = 0xd;
    }
    break;
  case 9:
    __optname = 9;
    __level = 1;
    break;
  case 10:
    __optname = 6;
    __level = 6;
    break;
  case 0xb:
    __optname = 4;
    __level = 6;
    break;
  case 0xc:
    __optname = 5;
    __level = 6;
    break;
  case 0xd:
    __optname = 0x12;
    __level = 6;
  }
  local_24 = 4;
  iVar2 = getsockopt(*(int *)(param_1 + 0xe0),__level,__optname,param_3,&local_24);
  if (iVar2 != -1) {
    if ((param_2 == 8) || (param_2 == 7)) {
      uVar3 = *param_3 & 3;
    }
    else {
      if (param_2 != 5) {
        return iVar2;
      }
      uVar3 = (int)*param_3 >> 2;
    }
    *param_3 = uVar3;
  }
code_r0x007e4928:
  return iVar2;
}


// ===== 007e4940  FUN_007e4940 =====

int FUN_007e4940(long *param_1,int param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int __optname;
  uint local_24;
  
  iVar2 = -1;
  __optname = 8;
  local_24 = param_3;
  switch(param_2) {
  case 0:
    __optname = 10;
    break;
  case 1:
    break;
  case 2:
    __optname = 7;
    param_2 = 1;
    break;
  case 3:
    __optname = 1;
    param_2 = 6;
    break;
  default:
    goto code_r0x007e4adc;
  case 5:
    *(char *)(param_1 + 0x25) = (char)(param_3 << 2);
    local_24 = param_3 << 2 & 0xfc | *(byte *)((long)param_1 + 0x129) & 3;
    if ((int)param_1[0x1d] != 10) goto LAB_007e4a7c;
LAB_007e49dc:
    setsockopt((int)param_1[0x1c],0,1,&local_24,4);
    __optname = 0x43;
    param_2 = 0x29;
    break;
  case 7:
    *(char *)((long)param_1 + 0x129) = (char)param_3;
    local_24 = (param_3 & 3) + (uint)*(byte *)(param_1 + 0x25);
    if ((int)param_1[0x1d] == 10) goto LAB_007e49dc;
LAB_007e4a7c:
    param_2 = 0;
    __optname = 1;
    break;
  case 8:
    bVar1 = (int)param_1[0x1d] != 10;
    param_2 = 0x29;
    if (bVar1) {
      param_2 = 0;
    }
    __optname = 0x42;
    if (bVar1) {
      __optname = 0xd;
    }
    break;
  case 9:
    __optname = 9;
    param_2 = 1;
    break;
  case 10:
    param_2 = 6;
    __optname = 6;
    break;
  case 0xb:
    __optname = 4;
    param_2 = 6;
    break;
  case 0xc:
    __optname = 5;
    param_2 = 6;
    break;
  case 0xd:
    __optname = 0x12;
    param_2 = 6;
  }
  iVar2 = setsockopt((int)param_1[0x1c],param_2,__optname,&local_24,4);
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)__errno();
    (**(code **)(*param_1 + 0x78))(param_1,*puVar3);
  }
code_r0x007e4adc:
  return iVar2;
}


// ===== 007e4af4  FUN_007e4af4 =====

int FUN_007e4af4(long *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = (**(code **)(*param_1 + 0xa8))(param_1,(int)param_1[0x1c],param_2,param_3,0);
  puVar3 = (undefined4 *)__errno();
  (**(code **)(*param_1 + 0x78))(param_1,*puVar3);
  if (((0 < iVar1) && (iVar1 < param_3)) ||
     ((iVar1 < 0 &&
      ((iVar2 = (**(code **)(*param_1 + 0x70))(param_1), iVar2 == 0x73 || (iVar2 == 0xb)))))) {
    (**(code **)(*param_1 + 0xc0))(param_1,2);
  }
  return iVar1;
}


// ===== 007e4bb4  FUN_007e4bb4 =====

int FUN_007e4bb4(long *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
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
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
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
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  uVar4 = FUN_007e9900(param_4,&local_c0);
  iVar2 = (**(code **)(*param_1 + 0xb0))
                    (param_1,(int)param_1[0x1c],param_2,param_3,0,&local_c0,uVar4);
  puVar5 = (undefined4 *)__errno();
  (**(code **)(*param_1 + 0x78))(param_1,*puVar5);
  if (((0 < iVar2) && (iVar2 < param_3)) ||
     ((iVar2 < 0 &&
      ((iVar3 = (**(code **)(*param_1 + 0x70))(param_1), iVar3 == 0x73 || (iVar3 == 0xb)))))) {
    (**(code **)(*param_1 + 0xc0))(param_1,2);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}


// ===== 007e4cc8  FUN_007e4cc8 =====

int FUN_007e4cc8(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_007e4e30();
  if ((param_3 == 0) || (iVar1 != 0)) {
    puVar4 = (undefined4 *)__errno();
    (**(code **)(*param_1 + 0x78))(param_1,*puVar4);
    iVar2 = (**(code **)(*param_1 + 0x70))(param_1);
    if (iVar1 < 0) {
      if ((((((*(byte *)((long)param_1 + 0xe4) & 1) == 0) && (iVar2 != 0x73)) && (iVar2 != 0xb)) ||
          (((**(code **)(*param_1 + 0xc0))(param_1,1), iVar2 != 0xb && (iVar2 != 0x73)))) &&
         (uVar3 = FUN_0044075c(), (uVar3 & 1) == 0)) {
        FUN_00623bb0(&DAT_0021573b,"../../rtc_base/physical_socket_server.cc",0xe78,&DAT_001d70b7,
                     &DAT_001c4dc3,"Error = ",iVar2);
      }
    }
    else {
      (**(code **)(*param_1 + 0xc0))(param_1,1);
    }
  }
  else {
    uVar3 = FUN_004022fc();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/physical_socket_server.cc",0xe02,
                   "EOF from socket; deferring close event");
    }
    (**(code **)(*param_1 + 0xc0))(param_1,1);
    (**(code **)(*param_1 + 0x78))(param_1,0xb);
    iVar1 = -1;
  }
  return iVar1;
}


// ===== 007e4e30  FUN_007e4e30 =====

ulong FUN_007e4e30(long param_1,void *param_2,size_t param_3,long param_4,long *param_5,
                  byte *param_6)

{
  long lVar1;
  ulong uVar2;
  cmsghdr *__cmsg;
  msghdr local_168;
  iovec local_130;
  cmsghdr local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
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
  undefined1 *puStack_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_168.msg_iov = &local_130;
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
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_168.msg_name = (undefined1 **)0x0;
  local_168.msg_namelen = 0;
  local_168._12_4_ = 0xaaaaaaaa;
  local_168.msg_iovlen = 1;
  local_168.msg_control = (cmsghdr *)0x0;
  local_168.msg_controllen = 0;
  local_168.msg_flags = 0;
  local_168._52_4_ = 0xaaaaaaaa;
  local_130.iov_base = param_2;
  local_130.iov_len = param_3;
  if (param_4 != 0) {
    FUN_007e8a94(param_4);
    local_168.msg_namelen = 0x80;
    local_168.msg_name = &local_e0;
  }
  local_f0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  local_120.cmsg_level = 0;
  local_120.cmsg_type = 0;
  local_120.cmsg_len = 0;
  if (param_5 == (long *)0x0 && param_6 == (byte *)0x0) {
    uVar2 = recvmsg(*(int *)(param_1 + 0xe0),&local_168,0);
    if ((int)uVar2 < 1) goto LAB_007e4fd8;
  }
  else {
    *param_5 = -1;
    local_168.msg_control = &local_120;
    local_168.msg_controllen = 0x38;
    uVar2 = recvmsg(*(int *)(param_1 + 0xe0),&local_168,0);
    if ((int)uVar2 < 1) goto LAB_007e4fd8;
    __cmsg = (cmsghdr *)local_168.msg_control;
    if (0xf < local_168.msg_controllen) {
      for (; __cmsg != (cmsghdr *)0x0; __cmsg = __cmsg_nxthdr(&local_168,__cmsg)) {
        if (param_6 != (byte *)0x0) {
          if (__cmsg->cmsg_type == 1) {
            if (__cmsg->cmsg_level == 0) goto LAB_007e4f64;
          }
          else if ((__cmsg->cmsg_type == 0x43) && (__cmsg->cmsg_level == 0x29)) {
LAB_007e4f64:
            *param_6 = (byte)__cmsg[1].cmsg_len & 3;
          }
        }
        if (((param_5 != (long *)0x0) && (__cmsg->cmsg_level == 1)) && (__cmsg->cmsg_type == 0x1d))
        {
          *param_5 = *(long *)&__cmsg[1].cmsg_level + __cmsg[1].cmsg_len * 1000000;
        }
      }
    }
  }
  if (param_4 != 0) {
    FUN_007e99a0(&local_e0,param_4);
  }
LAB_007e4fd8:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 & 0xffffffff;
}


// ===== 007e5010  FUN_007e5010 =====

int FUN_007e5010(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  ulong uVar4;
  
  iVar1 = FUN_007e4e30();
  puVar3 = (undefined4 *)__errno();
  (**(code **)(*param_1 + 0x78))(param_1,*puVar3);
  iVar2 = (**(code **)(*param_1 + 0x70))(param_1);
  if (iVar1 < 0) {
    if ((((((*(byte *)((long)param_1 + 0xe4) & 1) == 0) && (iVar2 != 0x73)) && (iVar2 != 0xb)) ||
        (((**(code **)(*param_1 + 0xc0))(param_1,1), iVar2 != 0xb && (iVar2 != 0x73)))) &&
       (uVar4 = FUN_0044075c(), (uVar4 & 1) == 0)) {
      FUN_00623bb0(&DAT_0021573b,"../../rtc_base/physical_socket_server.cc",0xf08,"RecvFrom",
                   &DAT_001c4dc3,"Error = ",iVar2);
    }
  }
  else {
    (**(code **)(*param_1 + 0xc0))(param_1,1);
  }
  return iVar1;
}


// ===== 007e510c  FUN_007e510c =====

uint FUN_007e510c(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  ulong uVar7;
  void *pvVar8;
  size_t *psVar9;
  ulong uVar10;
  long local_58;
  
  psVar9 = (size_t *)param_2[0xc];
  uVar7 = psVar9[1];
  local_58 = -1;
  if (uVar7 >> 0x10 == 0) {
    pvVar5 = operator_new__(0x10000);
    pvVar8 = (void *)psVar9[2];
    if (pvVar8 == (void *)0x0) {
      psVar9[2] = (size_t)pvVar5;
    }
    else {
      memcpy(pvVar5,pvVar8,*psVar9);
      psVar9[2] = (size_t)pvVar5;
      operator_delete__(pvVar8);
    }
    psVar9[1] = 0x10000;
    psVar9 = (size_t *)param_2[0xc];
    uVar7 = psVar9[1];
  }
  plVar1 = (long *)0x0;
  if (*(char *)((long)param_1 + 0x129) != '\0') {
    plVar1 = param_2 + 0xb;
  }
  uVar3 = FUN_007e4e30(param_1,psVar9[2],uVar7,param_2 + 2,&local_58,plVar1);
  psVar9 = (size_t *)param_2[0xc];
  uVar10 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
  uVar7 = psVar9[1];
  if (uVar7 < uVar10) {
    uVar7 = uVar7 + (uVar7 >> 1);
    uVar2 = uVar10;
    if (uVar10 <= uVar7) {
      uVar2 = uVar7;
    }
    pvVar5 = operator_new__(uVar2);
    pvVar8 = (void *)psVar9[2];
    if (pvVar8 == (void *)0x0) {
      psVar9[2] = (size_t)pvVar5;
    }
    else {
      memcpy(pvVar5,pvVar8,*psVar9);
      psVar9[2] = (size_t)pvVar5;
      operator_delete__(pvVar8);
    }
    psVar9[1] = uVar2;
  }
  *psVar9 = uVar10;
  if ((0 < (int)uVar3) && (local_58 != -1)) {
    if ((char)param_2[1] == '\x01') {
      *param_2 = local_58;
    }
    else {
      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *param_2 = local_58;
      *(undefined1 *)(param_2 + 1) = 1;
    }
  }
  puVar6 = (undefined4 *)__errno();
  (**(code **)(*param_1 + 0x78))(param_1,*puVar6);
  iVar4 = (**(code **)(*param_1 + 0x70))(param_1);
  if ((int)uVar3 < 0) {
    if ((((((*(byte *)((long)param_1 + 0xe4) & 1) == 0) && (iVar4 != 0x73)) && (iVar4 != 0xb)) ||
        (((**(code **)(*param_1 + 0xc0))(param_1,1), iVar4 != 0xb && (iVar4 != 0x73)))) &&
       (uVar7 = FUN_0044075c(), (uVar7 & 1) == 0)) {
      FUN_00623bb0(&DAT_0021573b,"../../rtc_base/physical_socket_server.cc",0xfc8,"RecvFrom",
                   &DAT_001c4dc3,"Error = ",iVar4);
    }
  }
  else {
    (**(code **)(*param_1 + 0xc0))(param_1,1);
  }
  return uVar3;
}


// ===== 007e534c  FUN_007e534c =====

int FUN_007e534c(long *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = listen((int)param_1[0x1c],param_2);
  puVar2 = (undefined4 *)__errno();
  (**(code **)(*param_1 + 0x78))(param_1,*puVar2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x23) = 1;
    (**(code **)(*param_1 + 0xc0))(param_1,0x10);
  }
  return iVar1;
}


// ===== 007e53b8  FUN_007e53b8 =====

void FUN_007e53b8(long *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 local_c4;
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
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_1 + 0xc0))(param_1,0x10);
  local_c4 = 0x80;
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
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  iVar2 = (**(code **)(*param_1 + 0xa0))(param_1,(int)param_1[0x1c],&local_c0,&local_c4);
  puVar3 = (undefined4 *)__errno();
  (**(code **)(*param_1 + 0x78))(param_1,*puVar3);
  if (iVar2 == -1) {
    uVar4 = 0;
  }
  else {
    if (param_2 != 0) {
      FUN_007e99a0(&local_c0,param_2);
    }
    uVar4 = (**(code **)(*(long *)param_1[0x1b] + 0x30))((long *)param_1[0x1b],iVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 007e54a8  FUN_007e54a8 =====

int FUN_007e54a8(long *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  long *plVar3;
  
  if ((int)param_1[0x1c] == -1) {
    iVar1 = 0;
  }
  else {
    iVar1 = close((int)param_1[0x1c]);
    puVar2 = (undefined4 *)__errno();
    (**(code **)(*param_1 + 0x78))(param_1,*puVar2);
    *(undefined4 *)(param_1 + 0x23) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    (**(code **)(*param_1 + 0xb8))(param_1,0);
    plVar3 = (long *)param_1[0x24];
    if (plVar3 != (long *)0x0) {
      param_1[0x24] = 0;
      (**(code **)(*plVar3 + 8))();
    }
  }
  return iVar1;
}


// ===== 007e553c  FUN_007e553c =====

int FUN_007e553c(undefined8 param_1,int param_2,sockaddr *param_3,socklen_t *param_4)

{
  int iVar1;
  
  iVar1 = accept(param_2,param_3,param_4);
  return iVar1;
}


// ===== 007e5550  FUN_007e5550 =====

void FUN_007e5550(undefined8 param_1,int param_2,void *param_3,int param_4,int param_5)

{
  send(param_2,param_3,(long)param_4,param_5);
  return;
}


// ===== 007e5580  FUN_007e5580 =====

void FUN_007e5580(undefined8 param_1,int param_2,void *param_3,int param_4,int param_5,
                 sockaddr *param_6,socklen_t param_7)

{
  sendto(param_2,param_3,(long)param_4,param_5,param_6,param_7);
  return;
}


// ===== 007e55b8  FUN_007e55b8 =====

void FUN_007e55b8(long *param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long **local_80;
  int *piStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  int local_34;
  long *local_18;
  
  iVar2 = (**(code **)(*param_2 + 0x18))(param_2);
  if (iVar2 == 0) {
    piStack_78 = (int *)&DAT_aaaaaaaaaaaaaaaa;
    local_80 = (long **)&DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_007e8a64(&local_80);
    uVar3 = (**(code **)(*param_2 + 0x10))(param_2,2,&local_80);
    if ((uVar3 & 1) == 0) {
      (**(code **)(*param_1 + 0x68))(param_1);
      bVar1 = true;
    }
    else {
      iVar2 = FUN_007e4620(param_1,&local_80);
      bVar1 = iVar2 == 0;
    }
    if ((long)local_70 < 0) {
      operator_delete(local_80);
    }
    if (bVar1) {
      return;
    }
    iVar2 = -1;
  }
  else {
    (**(code **)(*param_1 + 0x68))(param_1);
  }
  (**(code **)(*param_1 + 0x78))(param_1,iVar2);
  local_80 = &local_18;
  piStack_78 = &local_34;
  local_34 = iVar2;
  local_18 = param_1;
  FUN_007b6160(param_1 + 0x17,&local_80,FUN_007e7a9c);
  return;
}


// ===== 007e56e0  FUN_007e56e0 =====

void FUN_007e56e0(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x12a) = param_2;
  return;
}


// ===== 007e56ec  FUN_007e56ec =====

void FUN_007e56ec(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x12a) = *(byte *)(param_1 + 0x12a) | param_2;
  return;
}


// ===== 007e5700  FUN_007e5700 =====

void FUN_007e5700(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x12a) = *(byte *)(param_1 + 0x12a) & (param_2 ^ 0xff);
  return;
}


// ===== 007e5714  FUN_007e5714 =====

void FUN_007e5714(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d38310;
  param_1[1] = &PTR_FUN_00d38380;
  FUN_007e61cc();
  FUN_007e3f60(param_1 + 1);
  return;
}


// ===== 007e5754  FUN_007e5754 =====

void FUN_007e5754(undefined8 *param_1)

{
  param_1[-1] = &PTR_FUN_00d38310;
  *param_1 = &PTR_FUN_00d38380;
  FUN_007e61cc();
  FUN_007e3f60(param_1);
  return;
}


// ===== 007e5794  FUN_007e5794 =====

void FUN_007e5794(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d38310;
  param_1[1] = &PTR_FUN_00d38380;
  FUN_007e61cc();
  FUN_007e3f60(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 007e57e4  FUN_007e57e4 =====

void FUN_007e57e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -1;
  *puVar1 = &PTR_FUN_00d38310;
  *param_1 = &PTR_FUN_00d38380;
  FUN_007e61cc(puVar1);
  FUN_007e3f60(param_1);
  operator_delete(puVar1);
  return;
}


// ===== 007e5838  FUN_007e5838 =====

void FUN_007e5838(long param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long local_50;
  undefined1 *local_48;
  long *local_40;
  long *local_38;
  
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = param_2;
  FUN_007eac40(&local_48,param_1 + 0x890);
  uVar7 = *(ulong *)(param_1 + 0x850);
  if ((uVar7 != 0) && (*(long *)(param_1 + 0x860) != 0)) {
    local_38 = param_2;
    uVar2 = FUN_0061e264(&local_38,8);
    uVar3 = uVar7 - 1;
    if ((uVar7 & uVar3) == 0) {
      uVar4 = uVar2 & uVar3;
    }
    else {
      uVar4 = uVar2;
      if (uVar7 <= uVar2) {
        uVar4 = 0;
        if (uVar7 != 0) {
          uVar4 = uVar2 / uVar7;
        }
        uVar4 = uVar2 - uVar4 * uVar7;
      }
    }
    plVar5 = *(long **)(*(long *)(param_1 + 0x848) + uVar4 * 8);
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_007e58c4;
          uVar6 = plVar5[1];
          if (uVar2 == uVar6) break;
          if ((uVar7 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar7 <= uVar6) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar6 / uVar7;
            }
            uVar6 = uVar6 - uVar1 * uVar7;
          }
          if (uVar6 != uVar4) goto LAB_007e58c4;
        }
      } while ((long *)plVar5[2] != param_2);
      uVar7 = FUN_004022fc();
      if ((uVar7 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/physical_socket_server.cc",0x2a4a,
                     "PhysicalSocketServer asked to add a duplicate dispatcher.");
      }
      goto LAB_007e5924;
    }
  }
LAB_007e58c4:
  local_50 = *(long *)(param_1 + 0x818);
  local_38 = (long *)(param_1 + 0x820);
  *(long *)(param_1 + 0x818) = local_50 + 1;
  FUN_007e7ca8(&local_38,&local_50,&local_50,&local_40);
  local_38 = (long *)(param_1 + 0x848);
  FUN_007e80c8(&local_38,&local_40,&local_40,&local_50);
  if (*(int *)(param_1 + 0x810) != -1) {
    FUN_007e6968(param_1,local_40,local_50);
  }
LAB_007e5924:
  FUN_007eac54(&local_48);
  return;
}


// ===== 007e59c4  FUN_007e59c4 =====

void FUN_007e59c4(long *param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x007e59d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1,2,param_2);
  return;
}


// ===== 007e59dc  FUN_007e59dc =====

bool FUN_007e59dc(long param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  long *plVar4;
  undefined4 local_34;
  
  plVar4 = (long *)(param_1 + 8);
  (**(code **)(*plVar4 + 0x68))(plVar4);
  iVar1 = socket(param_2,param_3,0);
  *(int *)(param_1 + 0xe8) = iVar1;
  *(int *)(param_1 + 0xf0) = param_2;
  *(bool *)(param_1 + 0xec) = param_3 == 2;
  puVar3 = (undefined4 *)__errno();
  (**(code **)(*plVar4 + 0x78))(plVar4,*puVar3);
  if (*(char *)(param_1 + 0xec) == '\x01') {
    (**(code **)(*plVar4 + 0xb8))(plVar4,3);
  }
  iVar1 = *(int *)(param_1 + 0xe8);
  if (iVar1 != -1) {
    uVar2 = fcntl(iVar1,3,0);
    fcntl(iVar1,4,(ulong)(uVar2 | 0x800));
    local_34 = 1;
    setsockopt(*(int *)(param_1 + 0xe8),1,0x1d,&local_34,4);
    FUN_007e5838(*(undefined8 *)(param_1 + 0xe0),param_1);
  }
  return iVar1 != -1;
}


// ===== 007e5ae8  FUN_007e5ae8 =====

void FUN_007e5ae8(long param_1)

{
  FUN_007e59dc(param_1 + -8);
  return;
}


// ===== 007e5af4  FUN_007e5af4 =====

undefined4 FUN_007e5af4(long param_1)

{
  return *(undefined4 *)(param_1 + 0xe8);
}


// ===== 007e5b00  FUN_007e5b00 =====

bool FUN_007e5b00(long param_1)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  ulong uVar4;
  undefined1 local_3c [4];
  char *local_38;
  undefined4 local_30;
  undefined4 local_28;
  int iStack_24;
  
  if (*(char *)(param_1 + 0xec) == '\x01') {
    return *(int *)(param_1 + 0xe8) == -1;
  }
  local_3c[0] = 0xaa;
  do {
    sVar2 = recv(*(int *)(param_1 + 0xe8),local_3c,1,2);
    if (-1 < sVar2) {
      return sVar2 == 0;
    }
    piVar3 = (int *)__errno();
    iVar1 = *piVar3;
  } while (iVar1 == 4);
  if (iVar1 < 0x67) {
    if (iVar1 == 9) {
      return true;
    }
    if (iVar1 == 0xb) {
      return false;
    }
    if (iVar1 == 0x20) {
      return true;
    }
  }
  else if (iVar1 - 0x67U < 2) {
    return true;
  }
  uVar4 = FUN_004022fc();
  if ((uVar4 & 1) == 0) {
    iStack_24 = *piVar3;
    local_38 = "../../rtc_base/physical_socket_server.cc";
    local_30 = 0x1eaa;
    local_28 = 1;
    FUN_00623bb0(&DAT_00215716,&local_38,"Assuming benign blocking error");
  }
  return false;
}


// ===== 007e5bfc  FUN_007e5bfc =====

undefined1 FUN_007e5bfc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x132);
}


// ===== 007e5c08  FUN_007e5c08 =====

/* WARNING: Type propagation algorithm not settling */

long * FUN_007e5c08(long *param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  char cVar5;
  undefined4 local_4c;
  long *local_48;
  long **local_40;
  undefined4 *local_38;
  
  if ((param_2 >> 2 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 2;
  }
  if ((param_2 >> 3 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(uint *)((long)param_1 + 0x134) = (uint)*(byte *)((long)param_1 + 0x132);
  plVar4 = param_1;
  if ((param_2 >> 2 & 1) != 0) {
    (**(code **)(*param_1 + 0x58))(param_1,4);
    local_48 = param_1 + 1;
    local_40 = &local_48;
    plVar4 = (long *)FUN_007b6160(param_1 + 0x14,&local_40,FUN_007e7acc);
  }
  if ((param_2 >> 4 & 1) != 0) {
    (**(code **)(*param_1 + 0x58))(param_1,0x10);
    local_48 = param_1 + 1;
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 2));
    local_40 = &local_48;
    FUN_007b6160(param_1 + 7,&local_40,FUN_007e7acc);
    uVar3 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 2));
    plVar4 = (long *)(ulong)uVar3;
  }
  if ((param_2 & 1) != 0) {
    (**(code **)(*param_1 + 0x58))(param_1,1);
    local_48 = param_1 + 1;
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 2));
    local_40 = &local_48;
    FUN_007b6160(param_1 + 7,&local_40,FUN_007e7acc);
    uVar3 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 2));
    plVar4 = (long *)(ulong)uVar3;
  }
  if ((param_2 >> 1 & 1) != 0) {
    (**(code **)(*param_1 + 0x58))(param_1,2);
    local_48 = param_1 + 1;
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xb));
    local_40 = &local_48;
    FUN_007b6160(param_1 + 0x10,&local_40,FUN_007e7acc);
    uVar3 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xb));
    plVar4 = (long *)(ulong)uVar3;
  }
  if ((param_2 >> 3 & 1) != 0) {
    (**(code **)(*param_1 + 0x48))(param_1,0);
    local_48 = param_1 + 1;
    local_40 = &local_48;
    local_38 = &local_4c;
    local_4c = param_3;
    plVar4 = (long *)FUN_007b6160(param_1 + 0x18,&local_40,FUN_007e7a9c);
  }
  cVar1 = (*(byte *)((long)param_1 + 0x132) & 0x11) != 0;
  cVar5 = '\x04';
  if ((bool)cVar1) {
    cVar5 = '\x05';
  }
  if ((*(byte *)((long)param_1 + 0x132) & 6) != 0) {
    cVar1 = cVar5;
  }
  cVar2 = (*(uint *)((long)param_1 + 0x134) & 0x11) != 0;
  cVar5 = '\x04';
  if ((bool)cVar2) {
    cVar5 = '\x05';
  }
  if ((*(uint *)((long)param_1 + 0x134) & 6) != 0) {
    cVar2 = cVar5;
  }
  *(undefined4 *)((long)param_1 + 0x134) = 0xffffffff;
  if (cVar1 != cVar2) {
    plVar4 = (long *)FUN_007e5e3c(param_1[0x1c],param_1);
  }
  return plVar4;
}


// ===== 007e5e3c  FUN_007e5e3c =====

void FUN_007e5e3c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *local_48;
  long local_40;
  long local_38;
  
  if (*(int *)(param_1 + 0x810) != -1) {
    local_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = param_2;
    FUN_007eac40(&local_48,param_1 + 0x890);
    uVar8 = *(ulong *)(param_1 + 0x850);
    if ((uVar8 != 0) && (*(long *)(param_1 + 0x860) != 0)) {
      local_38 = param_2;
      uVar2 = FUN_0061e264(&local_38,8);
      uVar4 = uVar8 - 1;
      if ((uVar8 & uVar4) == 0) {
        uVar5 = uVar2 & uVar4;
      }
      else {
        uVar5 = uVar2;
        if (uVar8 <= uVar2) {
          uVar5 = 0;
          if (uVar8 != 0) {
            uVar5 = uVar2 / uVar8;
          }
          uVar5 = uVar2 - uVar5 * uVar8;
        }
      }
      plVar6 = *(long **)(*(long *)(param_1 + 0x848) + uVar5 * 8);
      if (plVar6 != (long *)0x0) {
        do {
          while( true ) {
            plVar6 = (long *)*plVar6;
            if (plVar6 == (long *)0x0) goto LAB_007e5f44;
            uVar7 = plVar6[1];
            if (uVar2 == uVar7) break;
            if ((uVar8 & uVar4) == 0) {
              uVar7 = uVar7 & uVar4;
            }
            else if (uVar8 <= uVar7) {
              uVar1 = 0;
              if (uVar8 != 0) {
                uVar1 = uVar7 / uVar8;
              }
              uVar7 = uVar7 - uVar1 * uVar8;
            }
            if (uVar7 != uVar5) goto LAB_007e5f44;
          }
        } while (plVar6[2] != param_2);
        puVar3 = (undefined8 *)FUN_007e6a5c(param_1 + 0x848,&local_40);
        FUN_007e6c7c(param_1,param_2,*puVar3);
      }
    }
LAB_007e5f44:
    FUN_007eac54(&local_48);
  }
  return;
}


// ===== 007e5f64  FUN_007e5f64 =====

void FUN_007e5f64(long param_1,byte param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  
  bVar1 = *(byte *)(param_1 + 0x132);
  cVar2 = (param_2 & 0x11) != 0;
  *(byte *)(param_1 + 0x132) = param_2;
  cVar4 = '\x04';
  if ((bool)cVar2) {
    cVar4 = '\x05';
  }
  if ((param_2 & 6) != 0) {
    cVar2 = cVar4;
  }
  cVar3 = (bVar1 & 0x11) != 0;
  cVar4 = '\x04';
  if ((bool)cVar3) {
    cVar4 = '\x05';
  }
  if ((bVar1 & 6) != 0) {
    cVar3 = cVar4;
  }
  if ((cVar2 != cVar3) && (*(int *)(param_1 + 0x134) == -1)) {
    FUN_007e5e3c(*(undefined8 *)(param_1 + 0xe0),param_1);
    return;
  }
  return;
}


// ===== 007e5fc8  FUN_007e5fc8 =====

void FUN_007e5fc8(long param_1,byte param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  
  bVar1 = *(byte *)(param_1 + 0x12a);
  cVar2 = (param_2 & 0x11) != 0;
  *(byte *)(param_1 + 0x12a) = param_2;
  cVar4 = '\x04';
  if ((bool)cVar2) {
    cVar4 = '\x05';
  }
  if ((param_2 & 6) != 0) {
    cVar2 = cVar4;
  }
  cVar3 = (bVar1 & 0x11) != 0;
  cVar4 = '\x04';
  if ((bool)cVar3) {
    cVar4 = '\x05';
  }
  if ((bVar1 & 6) != 0) {
    cVar3 = cVar4;
  }
  if ((cVar2 != cVar3) && (*(int *)(param_1 + 300) == -1)) {
    FUN_007e5e3c(*(undefined8 *)(param_1 + 0xd8),param_1 + -8);
    return;
  }
  return;
}


// ===== 007e602c  FUN_007e602c =====

void FUN_007e602c(long param_1,byte param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  
  bVar1 = *(byte *)(param_1 + 0x132);
  param_2 = bVar1 | param_2;
  cVar2 = (param_2 & 0x11) != 0;
  *(byte *)(param_1 + 0x132) = param_2;
  cVar4 = '\x04';
  if ((bool)cVar2) {
    cVar4 = '\x05';
  }
  if ((param_2 & 6) != 0) {
    cVar2 = cVar4;
  }
  cVar3 = (bVar1 & 0x11) != 0;
  cVar4 = '\x04';
  if ((bool)cVar3) {
    cVar4 = '\x05';
  }
  if ((bVar1 & 6) != 0) {
    cVar3 = cVar4;
  }
  if ((cVar2 != cVar3) && (*(int *)(param_1 + 0x134) == -1)) {
    FUN_007e5e3c(*(undefined8 *)(param_1 + 0xe0),param_1);
    return;
  }
  return;
}


// ===== 007e6094  FUN_007e6094 =====

void FUN_007e6094(long param_1,byte param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  
  bVar1 = *(byte *)(param_1 + 0x12a);
  param_2 = bVar1 | param_2;
  cVar2 = (param_2 & 0x11) != 0;
  *(byte *)(param_1 + 0x12a) = param_2;
  cVar4 = '\x04';
  if ((bool)cVar2) {
    cVar4 = '\x05';
  }
  if ((param_2 & 6) != 0) {
    cVar2 = cVar4;
  }
  cVar3 = (bVar1 & 0x11) != 0;
  cVar4 = '\x04';
  if ((bool)cVar3) {
    cVar4 = '\x05';
  }
  if ((bVar1 & 6) != 0) {
    cVar3 = cVar4;
  }
  if ((cVar2 != cVar3) && (*(int *)(param_1 + 300) == -1)) {
    FUN_007e5e3c(*(undefined8 *)(param_1 + 0xd8),param_1 + -8);
    return;
  }
  return;
}


// ===== 007e60fc  FUN_007e60fc =====

void FUN_007e60fc(long param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  
  bVar2 = *(byte *)(param_1 + 0x132);
  bVar1 = bVar2 & (param_2 ^ 0xff);
  cVar3 = (bVar1 & 0x11) != 0;
  *(byte *)(param_1 + 0x132) = bVar1;
  cVar5 = '\x04';
  if ((bool)cVar3) {
    cVar5 = '\x05';
  }
  if ((bVar1 & 6) != 0) {
    cVar3 = cVar5;
  }
  cVar4 = (bVar2 & 0x11) != 0;
  cVar5 = '\x04';
  if ((bool)cVar4) {
    cVar5 = '\x05';
  }
  if ((bVar2 & 6) != 0) {
    cVar4 = cVar5;
  }
  if ((cVar3 != cVar4) && (*(int *)(param_1 + 0x134) == -1)) {
    FUN_007e5e3c(*(undefined8 *)(param_1 + 0xe0),param_1);
    return;
  }
  return;
}


// ===== 007e6164  FUN_007e6164 =====

void FUN_007e6164(long param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  
  bVar2 = *(byte *)(param_1 + 0x12a);
  bVar1 = bVar2 & (param_2 ^ 0xff);
  cVar3 = (bVar1 & 0x11) != 0;
  *(byte *)(param_1 + 0x12a) = bVar1;
  cVar5 = '\x04';
  if ((bool)cVar3) {
    cVar5 = '\x05';
  }
  if ((bVar1 & 6) != 0) {
    cVar3 = cVar5;
  }
  cVar4 = (bVar2 & 0x11) != 0;
  cVar5 = '\x04';
  if ((bool)cVar4) {
    cVar5 = '\x05';
  }
  if ((bVar2 & 6) != 0) {
    cVar4 = cVar5;
  }
  if ((cVar3 != cVar4) && (*(int *)(param_1 + 300) == -1)) {
    FUN_007e5e3c(*(undefined8 *)(param_1 + 0xd8),param_1 + -8);
    return;
  }
  return;
}


// ===== 007e61cc  FUN_007e61cc =====

int FUN_007e61cc(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  long *plVar3;
  
  if (*(int *)(param_1 + 0xe8) != -1) {
    if (*(int *)(param_1 + 0x134) != -1) {
      *(undefined4 *)(param_1 + 0x134) = 0;
    }
    FUN_007e6288(*(undefined8 *)(param_1 + 0xe0),param_1);
    if (*(int *)(param_1 + 0xe8) != -1) {
      iVar1 = close(*(int *)(param_1 + 0xe8));
      puVar2 = (undefined4 *)__errno();
      (**(code **)(*(long *)(param_1 + 8) + 0x78))(param_1 + 8,*puVar2);
      *(undefined4 *)(param_1 + 0x120) = 0;
      *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
      (**(code **)(*(long *)(param_1 + 8) + 0xb8))(param_1 + 8,0);
      plVar3 = *(long **)(param_1 + 0x128);
      if (plVar3 == (long *)0x0) {
        return iVar1;
      }
      *(undefined8 *)(param_1 + 0x128) = 0;
      (**(code **)(*plVar3 + 8))();
      return iVar1;
    }
  }
  return 0;
}


// ===== 007e6288  FUN_007e6288 =====

void FUN_007e6288(long param_1,long *param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 local_70;
  undefined1 *local_68;
  long *local_60;
  epoll_event local_58;
  long *local_48;
  undefined4 local_40;
  undefined4 local_38;
  int iStack_34;
  
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = param_2;
  FUN_007eac40(&local_68,param_1 + 0x890);
  uVar10 = *(ulong *)(param_1 + 0x850);
  if ((uVar10 != 0) && (*(long *)(param_1 + 0x860) != 0)) {
    local_48 = param_2;
    uVar3 = FUN_0061e264(&local_48,8);
    uVar6 = uVar10 - 1;
    if ((uVar10 & uVar6) == 0) {
      uVar7 = uVar3 & uVar6;
    }
    else {
      uVar7 = uVar3;
      if (uVar10 <= uVar3) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar3 / uVar10;
        }
        uVar7 = uVar3 - uVar7 * uVar10;
      }
    }
    plVar8 = *(long **)(*(long *)(param_1 + 0x848) + uVar7 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_007e6314;
          uVar9 = plVar8[1];
          if (uVar3 == uVar9) break;
          if ((uVar10 & uVar6) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uVar10 <= uVar9) {
            uVar1 = 0;
            if (uVar10 != 0) {
              uVar1 = uVar9 / uVar10;
            }
            uVar9 = uVar9 - uVar1 * uVar10;
          }
          if (uVar9 != uVar7) goto LAB_007e6314;
        }
      } while ((long *)plVar8[2] != param_2);
      puVar4 = (undefined8 *)FUN_007e6a5c(param_1 + 0x848,&local_60);
      local_70 = *puVar4;
      FUN_007e6b44(param_1 + 0x848,&local_60);
      FUN_007e8638(param_1 + 0x820,&local_70);
      if ((*(int *)(param_1 + 0x810) != -1) &&
         (iVar2 = (**(code **)(*local_60 + 0x20))(), iVar2 != -1)) {
        local_58.events = 0;
        local_58._4_4_ = 0;
        local_58.data.ptr = (void *)0x0;
        iVar2 = epoll_ctl(*(int *)(param_1 + 0x810),2,iVar2,&local_58);
        if ((iVar2 == -1) &&
           ((piVar5 = (int *)__errno(), *piVar5 != 2 && (uVar10 = FUN_004249b0(), (uVar10 & 1) == 0)
            ))) {
          iStack_34 = *piVar5;
          local_48 = (long *)0x1ba778;
          local_40 = 0x350b;
          local_38 = 1;
          FUN_00623bb0(&DAT_00215716,&local_48,"epoll_ctl EPOLL_CTL_DEL");
        }
      }
      goto LAB_007e633c;
    }
  }
LAB_007e6314:
  uVar10 = FUN_004022fc();
  if ((uVar10 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/physical_socket_server.cc",0x2ad2,
                 "PhysicalSocketServer asked to remove a unknown dispatcher, potentially from a duplicate call to Add."
                );
  }
LAB_007e633c:
  FUN_007eac54(&local_68);
  return;
}


// ===== 007e6478  FUN_007e6478 =====

void FUN_007e6478(long param_1)

{
  FUN_007e61cc(param_1 + -8);
  return;
}


// ===== 007e6484  FUN_007e6484 =====

void FUN_007e6484(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  char *local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  
  *param_1 = &PTR_FUN_00d38460;
  param_1[1] = 0;
  iVar1 = epoll_create(0x400);
  *(int *)(param_1 + 0x102) = iVar1;
  param_1[0x107] = 0;
  *(undefined4 *)(param_1 + 0x108) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x10d) = 0x3f800000;
  param_1[0x104] = 0;
  param_1[0x103] = 0;
  param_1[0x106] = 0;
  param_1[0x105] = 0;
  param_1[0x10a] = 0;
  param_1[0x109] = 0;
  param_1[0x10c] = 0;
  param_1[0x10b] = 0;
  param_1[0x10e] = 0;
  param_1[0x110] = 0;
  param_1[0x10f] = 0;
  FUN_007eabe4(param_1 + 0x112);
  *(undefined2 *)(param_1 + 0x119) = 0;
  if ((*(int *)(param_1 + 0x102) == -1) && (uVar2 = FUN_004022fc(), (uVar2 & 1) == 0)) {
    puVar3 = (undefined4 *)__errno();
    uStack_24 = *puVar3;
    local_38 = "../../rtc_base/physical_socket_server.cc";
    local_30 = 0x28c2;
    local_28 = 1;
    FUN_00623bb0(&DAT_00215716,&local_38,"epoll_create");
  }
  pvVar4 = operator_new(0x50);
  FUN_007e6570(pvVar4,param_1,param_1 + 0x119);
  param_1[0x111] = pvVar4;
  return;
}


// ===== 007e6570  FUN_007e6570 =====

void FUN_007e6570(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined1 *local_28;
  
  *param_1 = &PTR_FUN_00d384e8;
  param_1[1] = param_2;
  local_28 = (undefined1 *)0xffffffffffffffff;
  iVar1 = pipe((int *)&local_28);
  if ((iVar1 < 0) && (uVar2 = FUN_004249b0(), (uVar2 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/physical_socket_server.cc",0x244b,"pipe failed");
  }
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[2] = local_28;
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_28);
  pthread_mutex_init((pthread_mutex_t *)((long)param_1 + 0x1c),(pthread_mutexattr_t *)&local_28);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_28);
  param_1[9] = param_3;
  FUN_007e5838(param_1[1],param_1);
  return;
}


// ===== 007e6628  FUN_007e6628 =====

void FUN_007e6628(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  
  *param_1 = &PTR_FUN_00d38460;
  if ((long *)param_1[0x111] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x111] + 8))();
  }
  if (*(int *)(param_1 + 0x102) != -1) {
    close(*(int *)(param_1 + 0x102));
  }
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x112));
  pvVar2 = (void *)param_1[0x10e];
  if (pvVar2 == (void *)0x0) {
LAB_007e6704:
    puVar1 = (undefined8 *)param_1[0x10b];
    while (puVar1 != (undefined8 *)0x0) {
      if (puVar1 == (undefined8 *)0xfffffffffffffff0) goto LAB_007e66e0;
      pvVar2 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = (undefined8 *)pvVar2;
    }
    pvVar2 = (void *)param_1[0x109];
    param_1[0x109] = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    puVar1 = (undefined8 *)param_1[0x106];
    while( true ) {
      if (puVar1 == (undefined8 *)0x0) {
        pvVar2 = (void *)param_1[0x104];
        param_1[0x104] = 0;
        if (pvVar2 == (void *)0x0) {
          return;
        }
        operator_delete(pvVar2);
        return;
      }
      if (puVar1 == (undefined8 *)0xfffffffffffffff0) break;
      pvVar2 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = (undefined8 *)pvVar2;
    }
  }
  else {
    pvVar3 = (void *)param_1[0x10f];
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
    do {
      if (pvVar3 == pvVar2) {
        param_1[0x10f] = pvVar2;
        operator_delete(pvVar2);
        goto LAB_007e6704;
      }
      pvVar3 = (void *)((long)pvVar3 + -8);
    } while (pvVar3 != (void *)0x0);
  }
LAB_007e66e0:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 007e6798  FUN_007e6798 =====

void FUN_007e6798(void *param_1)

{
  FUN_007e6628();
  operator_delete(param_1);
  return;
}


// ===== 007e67c8  FUN_007e67c8 =====

void FUN_007e67c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007e67d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x888) + 0x30))();
  return;
}


// ===== 007e67dc  FUN_007e67dc =====

long * FUN_007e67dc(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar1 = (long *)operator_new(0x138);
  *plVar1 = (long)&PTR_FUN_00d384a8;
  FUN_007e3dc8(plVar1 + 1,param_1,0xffffffff);
  *plVar1 = (long)&PTR_FUN_00d38310;
  plVar1[1] = (long)&PTR_FUN_00d38380;
  *(undefined4 *)((long)plVar1 + 0x134) = 0xffffffff;
  uVar2 = FUN_007e59dc(plVar1,param_2,param_3);
  if ((uVar2 & 1) == 0) {
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      plVar3 = plVar1 + 1;
    }
  }
  return plVar3;
}


// ===== 007e6894  FUN_007e6894 =====

undefined8 * FUN_007e6894(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  int __fd;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 local_34;
  
  puVar3 = (undefined8 *)operator_new(0x138);
  *puVar3 = &PTR_FUN_00d384a8;
  FUN_007e3dc8(puVar3 + 1,param_1,param_2);
  __fd = *(int *)(puVar3 + 0x1d);
  *puVar3 = &PTR_FUN_00d38310;
  puVar3[1] = &PTR_FUN_00d38380;
  *(undefined4 *)((long)puVar3 + 0x134) = 0xffffffff;
  uVar2 = fcntl(__fd,3,0);
  fcntl(__fd,4,(ulong)(uVar2 | 0x800));
  local_34 = 1;
  setsockopt(*(int *)(puVar3 + 0x1d),1,0x1d,&local_34,4);
  FUN_007e5838(puVar3[0x1c],puVar3);
  puVar1 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = puVar3 + 1;
  }
  return puVar1;
}


// ===== 007e6968  FUN_007e6968 =====

void FUN_007e6968(long param_1,long *param_2,epoll_data_t param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  uint uVar7;
  epoll_event local_58;
  char *local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  
  iVar3 = (**(code **)(*param_2 + 0x20))(param_2);
  if (iVar3 != -1) {
    local_58.events = 0;
    local_58._4_4_ = 0;
    uVar4 = (**(code **)(*param_2 + 0x10))(param_2);
    bVar2 = (uVar4 & 0x11) != 0;
    uVar7 = 4;
    if (bVar2) {
      uVar7 = 5;
    }
    uVar1 = (uint)bVar2;
    if ((uVar4 & 6) != 0) {
      uVar1 = uVar7;
    }
    local_58.events = uVar1;
    if (uVar1 != 0) {
      local_58.data = param_3;
      iVar3 = epoll_ctl(*(int *)(param_1 + 0x810),1,iVar3,&local_58);
      if ((iVar3 == -1) && (uVar5 = FUN_004249b0(), (uVar5 & 1) == 0)) {
        puVar6 = (undefined4 *)__errno();
        uStack_34 = *puVar6;
        local_48 = "../../rtc_base/physical_socket_server.cc";
        local_40 = 0x347b;
        local_38 = 1;
        FUN_00623bb0(&DAT_00215716,&local_48,"epoll_ctl EPOLL_CTL_ADD");
      }
    }
  }
  return;
}


// ===== 007e6a5c  FUN_007e6a5c =====

long FUN_007e6a5c(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long local_18;
  
  uVar7 = param_1[1];
  if ((uVar7 != 0) && (param_1[3] != 0)) {
    lVar8 = *param_2;
    local_18 = lVar8;
    uVar2 = FUN_0061e264(&local_18,8);
    uVar3 = uVar7 - 1;
    if ((uVar7 & uVar3) == 0) {
      uVar4 = uVar2 & uVar3;
    }
    else {
      uVar4 = uVar2;
      if (uVar7 <= uVar2) {
        uVar4 = 0;
        if (uVar7 != 0) {
          uVar4 = uVar2 / uVar7;
        }
        uVar4 = uVar2 - uVar4 * uVar7;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar4 * 8);
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          while( true ) {
            plVar5 = (long *)*plVar5;
            if (plVar5 == (long *)0x0) goto LAB_007e6b20;
            uVar6 = plVar5[1];
            if (uVar6 != uVar2) break;
            if (plVar5[2] == lVar8) {
              return (long)(plVar5 + 3);
            }
          }
          if ((uVar7 & uVar3) == 0) break;
          if (uVar7 <= uVar6) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar6 / uVar7;
            }
            uVar6 = uVar6 - uVar1 * uVar7;
          }
          if (uVar6 != uVar4) goto LAB_007e6b20;
        }
      } while ((uVar6 & uVar3) == uVar4);
    }
  }
LAB_007e6b20:
                    /* WARNING: Subroutine does not return */
  FUN_005f55a8("unordered_map::at: key not found");
}


// ===== 007e6b44  FUN_007e6b44 =====

undefined8 FUN_007e6b44(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  void *local_48 [2];
  byte local_38;
  
  uVar7 = param_1[1];
  if ((uVar7 != 0) && (param_1[3] != 0)) {
    pvVar8 = (void *)*param_2;
    local_48[0] = pvVar8;
    uVar2 = FUN_0061e264(local_48,8);
    uVar3 = uVar7 - 1;
    if ((uVar7 & uVar3) == 0) {
      uVar4 = uVar2 & uVar3;
    }
    else {
      uVar4 = uVar2;
      if (uVar7 <= uVar2) {
        uVar4 = 0;
        if (uVar7 != 0) {
          uVar4 = uVar2 / uVar7;
        }
        uVar4 = uVar2 - uVar4 * uVar7;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar4 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        uVar6 = plVar5[1];
        if (uVar6 == uVar2) {
          if ((void *)plVar5[2] == pvVar8) {
            FUN_007e8504(local_48,param_1);
            pvVar8 = local_48[0];
            local_48[0] = (void *)0x0;
            if (pvVar8 != (void *)0x0) {
              if ((pvVar8 == (void *)0xfffffffffffffff0) && ((local_38 & 1) != 0)) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                          );
              }
              operator_delete(pvVar8);
            }
            return 1;
          }
        }
        else {
          if ((uVar7 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar7 <= uVar6) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar6 / uVar7;
            }
            uVar6 = uVar6 - uVar1 * uVar7;
          }
          if (uVar6 != uVar4) {
            return 0;
          }
        }
      }
    }
  }
  return 0;
}


// ===== 007e6c7c  FUN_007e6c7c =====

ulong FUN_007e6c7c(long param_1,long *param_2,epoll_data_t param_3)

{
  uint uVar1;
  bool bVar2;
  int __fd;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  char *pcVar7;
  epoll_event local_58;
  char *local_48;
  undefined4 local_40;
  undefined4 local_38;
  int iStack_34;
  
  uVar5 = (**(code **)(*param_2 + 0x20))(param_2);
  __fd = (int)uVar5;
  if (__fd != -1) {
    local_58.events = 0;
    local_58._4_4_ = 0;
    uVar3 = (**(code **)(*param_2 + 0x10))(param_2);
    bVar2 = (uVar3 & 0x11) != 0;
    uVar4 = 4;
    if (bVar2) {
      uVar4 = 5;
    }
    uVar1 = (uint)bVar2;
    if ((uVar3 & 6) != 0) {
      uVar1 = uVar4;
    }
    local_58.events = uVar1;
    local_58.data = param_3;
    if (uVar1 == 0) {
      uVar4 = epoll_ctl(*(int *)(param_1 + 0x810),2,__fd,&local_58);
      uVar5 = (ulong)uVar4;
    }
    else {
      uVar4 = epoll_ctl(*(int *)(param_1 + 0x810),3,__fd,&local_58);
      uVar5 = (ulong)uVar4;
      if (uVar4 == 0xffffffff) {
        piVar6 = (int *)__errno();
        if (*piVar6 == 2) {
          uVar4 = epoll_ctl(*(int *)(param_1 + 0x810),1,__fd,&local_58);
          if (uVar4 != 0xffffffff) {
            return (ulong)uVar4;
          }
          uVar5 = FUN_004249b0();
          if ((uVar5 & 1) != 0) {
            return uVar5;
          }
          iStack_34 = *piVar6;
          local_40 = 0x35e3;
          pcVar7 = "epoll_ctl EPOLL_CTL_ADD";
        }
        else {
          uVar5 = FUN_004249b0();
          if ((uVar5 & 1) != 0) {
            return uVar5;
          }
          iStack_34 = *piVar6;
          pcVar7 = "epoll_ctl EPOLL_CTL_MOD";
          local_40 = 0x35fb;
        }
        local_38 = 1;
        local_48 = "../../rtc_base/physical_socket_server.cc";
        uVar5 = FUN_00623bb0(&DAT_00215716,&local_48,pcVar7);
      }
    }
  }
  return uVar5;
}


// ===== 007e6de8  FUN_007e6de8 =====

uint FUN_007e6de8(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  *(undefined1 *)(param_1 + 0x8c9) = 1;
  if (param_2 == 0x7fffffffffffffff) {
    uVar4 = 0xffffffff;
  }
  else {
    lVar1 = (param_2 + 999) / 1000;
    uVar3 = lVar1 * 1000;
    uVar5 = lVar1 * -1000;
    uVar4 = uVar3 / 1000;
    if (499 < uVar3 % 1000) {
      uVar4 = uVar4 + 1;
    }
    if ((uVar3 & 0x8000000000000000) != 0) {
      uVar4 = -(uVar5 / 1000) - (ulong)(500 < uVar5 % 1000);
    }
  }
  if ((param_3 & 1) == 0) {
    uVar2 = FUN_007e6ed4(param_1,uVar4,*(undefined8 *)(param_1 + 0x888));
  }
  else if (*(int *)(param_1 + 0x810) == -1) {
    uVar2 = FUN_007e738c(param_1,uVar4,1);
  }
  else {
    uVar2 = FUN_007e70a0();
  }
  *(undefined1 *)(param_1 + 0x8c9) = 0;
  return uVar2 & 1;
}


// ===== 007e6ed4  FUN_007e6ed4 =====

uint FUN_007e6ed4(long param_1,int param_2,long *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_88;
  pollfd local_80;
  char *local_78;
  undefined4 local_70;
  undefined4 local_68;
  int iStack_64;
  
  if (param_2 == -1) {
    lVar8 = -1;
    local_88 = 0xffffffffffffffff;
  }
  else {
    lVar8 = (long)param_2;
    local_88 = FUN_00625944(lVar8);
  }
  *(undefined1 *)(param_1 + 0x8c8) = 1;
  (**(code **)(*param_3 + 0x20))(param_3);
LAB_007e6f54:
  if (*(char *)(param_1 + 0x8c8) != '\x01') {
    return 1;
  }
  do {
    local_80 = (pollfd)&DAT_aaaaaaaaaaaaaaaa;
    uVar5 = (**(code **)(*param_3 + 0x20))(param_3);
    uVar3 = (**(code **)(*param_3 + 0x10))(param_3);
    bVar2 = (uVar3 & 0x11) != 0;
    uVar4 = 4;
    if (bVar2) {
      uVar4 = 5;
    }
    uVar1 = (uint)bVar2;
    if ((uVar3 & 6) != 0) {
      uVar1 = uVar4;
    }
    local_80 = (pollfd)(uVar5 & 0xffffffff | (ulong)uVar1 << 0x20);
    uVar4 = poll(&local_80,1,(int)lVar8);
    if ((int)uVar4 < 0) {
      piVar6 = (int *)__errno();
      if (*piVar6 != 4) {
        uVar5 = FUN_004249b0();
        if ((uVar5 & 1) == 0) {
          iStack_64 = *piVar6;
          local_78 = "../../rtc_base/physical_socket_server.cc";
          local_70 = 0x38cb;
          local_68 = 1;
          FUN_00623bb0(&DAT_00215716,&local_78,&DAT_001b1a7e);
        }
        goto LAB_007e7074;
      }
    }
    else {
      if (uVar4 == 0) {
LAB_007e7074:
        return ~uVar4 >> 0x1f;
      }
      bVar2 = ((ulong)local_80 & 0x2018000000000000) != 0;
      FUN_007e7964(param_3,((ulong)local_80 & 0x3000000000000) != 0,
                   (ushort)local_80.revents >> 2 & 1,bVar2,bVar2);
    }
    if (param_2 != -1) break;
    if ((*(byte *)(param_1 + 0x8c8) & 1) == 0) {
      return 1;
    }
  } while( true );
  uVar7 = FUN_0062589c();
  lVar8 = FUN_006259ac(local_88,uVar7);
  if (lVar8 < 0) {
    return 1;
  }
  goto LAB_007e6f54;
}


// ===== 007e70a0  FUN_007e70a0 =====

undefined8 FUN_007e70a0(long param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  char *local_78;
  undefined4 local_70;
  undefined4 local_68;
  int iStack_64;
  
  if (param_2 == -1) {
    uVar6 = 0xffffffffffffffff;
    lVar16 = -1;
  }
  else {
    lVar16 = (long)param_2;
    uVar6 = FUN_00625944(lVar16);
  }
  *(undefined1 *)(param_1 + 0x8c8) = 1;
  do {
    if (*(char *)(param_1 + 0x8c8) != '\x01') {
      return 1;
    }
    uVar5 = epoll_wait(*(int *)(param_1 + 0x810),(epoll_event *)(param_1 + 0x10),0x80,(int)lVar16);
    if ((int)uVar5 < 0) {
      piVar7 = (int *)__errno();
      if (*piVar7 != 4) {
        uVar17 = FUN_004249b0();
        if ((uVar17 & 1) == 0) {
          iStack_64 = *piVar7;
          local_78 = "../../rtc_base/physical_socket_server.cc";
          local_70 = 0x36c3;
          local_68 = 1;
          FUN_00623bb0(&DAT_00215716,&local_78,"epoll");
          return 0;
        }
        return 0;
      }
    }
    else {
      if (uVar5 == 0) {
        return 1;
      }
      local_78 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_007eac40(&local_78,param_1 + 0x890);
      uVar17 = 0;
      do {
        if (uVar17 == 0x80) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/array:277: libc++ Hardening assertion __n < _Size failed: out-of-bounds access in std::array<T, N>\n"
                    );
        }
        uVar9 = *(ulong *)(param_1 + 0x828);
        if ((uVar9 != 0) && (*(long *)(param_1 + 0x838) != 0)) {
          puVar1 = (uint *)(param_1 + 0x10 + uVar17 * 0x10);
          uVar10 = uVar9 - 1;
          uVar11 = *(ulong *)(puVar1 + 2);
          if ((uVar9 & uVar10) == 0) {
            uVar13 = uVar10 & uVar11;
          }
          else {
            uVar13 = uVar11;
            if (uVar9 <= uVar11) {
              uVar13 = 0;
              if (uVar9 != 0) {
                uVar13 = uVar11 / uVar9;
              }
              uVar13 = uVar11 - uVar13 * uVar9;
            }
          }
          lVar12 = *(long *)(param_1 + 0x820);
          plVar14 = *(long **)(lVar12 + uVar13 * 8);
          if (plVar14 != (long *)0x0) {
            do {
              while( true ) {
                plVar14 = (long *)*plVar14;
                if (plVar14 == (long *)0x0) goto LAB_007e7184;
                uVar15 = plVar14[1];
                if (uVar11 == uVar15) break;
                if ((uVar9 & uVar10) == 0) {
                  uVar15 = uVar15 & uVar10;
                }
                else if (uVar9 <= uVar15) {
                  uVar3 = 0;
                  if (uVar9 != 0) {
                    uVar3 = uVar15 / uVar9;
                  }
                  uVar15 = uVar15 - uVar3 * uVar9;
                }
                if (uVar15 != uVar13) goto LAB_007e7184;
              }
            } while (plVar14[2] != uVar11);
            if ((uVar9 & uVar10) == 0) {
              uVar13 = uVar10 & uVar11;
              plVar14 = *(long **)(lVar12 + uVar13 * 8);
            }
            else {
              uVar13 = uVar11;
              if (uVar9 <= uVar11) {
                uVar13 = 0;
                if (uVar9 != 0) {
                  uVar13 = uVar11 / uVar9;
                }
                uVar13 = uVar11 - uVar13 * uVar9;
              }
              plVar14 = *(long **)(lVar12 + uVar13 * 8);
            }
            if (plVar14 == (long *)0x0) {
LAB_007e7380:
                    /* WARNING: Subroutine does not return */
              FUN_005f55a8("unordered_map::at: key not found");
            }
            do {
              while( true ) {
                plVar14 = (long *)*plVar14;
                if (plVar14 == (long *)0x0) goto LAB_007e7380;
                uVar15 = plVar14[1];
                if (uVar15 == uVar11) break;
                if ((uVar9 & uVar10) == 0) {
                  uVar15 = uVar15 & uVar10;
                }
                else if (uVar9 <= uVar15) {
                  uVar3 = 0;
                  if (uVar9 != 0) {
                    uVar3 = uVar15 / uVar9;
                  }
                  uVar15 = uVar15 - uVar3 * uVar9;
                }
                if (uVar15 != uVar13) goto LAB_007e7380;
              }
            } while (plVar14[2] != uVar11);
            uVar2 = *puVar1;
            bVar4 = (uVar2 & 0x2018) != 0;
            FUN_007e7964(plVar14[3],(uVar2 & 3) != 0,uVar2 >> 2 & 1,bVar4,bVar4);
          }
        }
LAB_007e7184:
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar5);
      FUN_007eac54(&local_78);
    }
    if (param_2 != -1) {
      uVar8 = FUN_0062589c();
      lVar16 = FUN_006259ac(uVar6,uVar8);
      if (lVar16 < 1) {
        return 1;
      }
    }
  } while( true );
}


// ===== 007e738c  FUN_007e738c =====

undefined8 FUN_007e738c(long param_1,int param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  int *piVar9;
  size_t __n;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  timeval *__timeout;
  ulong *puVar16;
  void *__dest;
  ulong *puVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  ulong *puVar21;
  undefined1 *puVar22;
  fd_set local_190;
  fd_set local_110;
  timeval local_90;
  char *local_80;
  undefined4 local_78;
  undefined4 local_70;
  int iStack_6c;
  
  local_90.tv_usec = (__suseconds_t)&DAT_aaaaaaaaaaaaaaaa;
  local_90.tv_sec = (__time_t)&DAT_aaaaaaaaaaaaaaaa;
  if (param_2 == -1) {
    __timeout = (timeval *)0x0;
    puVar21 = (ulong *)0x8;
    puVar22 = &DAT_aaaaaaaaaaaaaaaa;
  }
  else {
    __timeout = &local_90;
    puVar21 = (ulong *)((ulong)__timeout | 8);
    local_90.tv_sec = (__time_t)(param_2 / 1000);
    local_90.tv_usec = (__suseconds_t)((param_2 % 1000) * 1000);
    lVar6 = FUN_006258f0();
    puVar22 = (undefined1 *)(lVar6 + param_2 * 1000);
  }
  *(undefined1 *)(param_1 + 0x8c8) = 1;
  do {
    local_190.fds_bits[1] = 0;
    local_190.fds_bits[0] = 0;
    local_190.fds_bits[3] = 0;
    local_190.fds_bits[2] = 0;
    local_190.fds_bits[5] = 0;
    local_190.fds_bits[4] = 0;
    local_190.fds_bits[7] = 0;
    local_190.fds_bits[6] = 0;
    local_190.fds_bits[9] = 0;
    local_190.fds_bits[8] = 0;
    local_190.fds_bits[0xb] = 0;
    local_190.fds_bits[10] = 0;
    local_190.fds_bits[0xd] = 0;
    local_190.fds_bits[0xc] = 0;
    local_190.fds_bits[0xf] = 0;
    local_190.fds_bits[0xe] = 0;
    local_110.fds_bits[1] = 0;
    local_110.fds_bits[0] = 0;
    local_110.fds_bits[3] = 0;
    local_110.fds_bits[2] = 0;
    local_110.fds_bits[5] = 0;
    local_110.fds_bits[4] = 0;
    local_110.fds_bits[7] = 0;
    local_110.fds_bits[6] = 0;
    local_110.fds_bits[9] = 0;
    local_110.fds_bits[8] = 0;
    local_110.fds_bits[0xb] = 0;
    local_110.fds_bits[10] = 0;
    local_110.fds_bits[0xd] = 0;
    local_110.fds_bits[0xc] = 0;
    local_110.fds_bits[0xf] = 0;
    local_110.fds_bits[0xe] = 0;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_007eac40(&local_80,param_1 + 0x890);
    lVar6 = *(long *)(param_1 + 0x878);
    lVar10 = *(long *)(param_1 + 0x870);
    uVar13 = (lVar6 - (lVar6 << 0x3d)) - 8U >> 3;
    uVar11 = (ulong)((lVar10 - lVar6 << 0x3d) - (lVar10 - lVar6)) >> 3;
    if (uVar13 <= uVar11) {
      uVar11 = uVar13;
    }
    if ((1 < uVar11) && ((((int)lVar10 - (int)lVar6 | -(int)lVar6) & 7U) == 0)) {
      uVar11 = uVar11 & 0x1ffffffffffffffe;
      lVar6 = lVar6 + uVar11 * -8;
      do {
        uVar11 = uVar11 - 2;
      } while (uVar11 != 0);
    }
    while (lVar6 != lVar10) {
      lVar6 = lVar6 + -8;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    plVar18 = *(long **)(param_1 + 0x830);
    *(long *)(param_1 + 0x878) = lVar10;
    if (plVar18 == (long *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = -1;
      do {
        lVar6 = plVar18[2];
        plVar1 = (long *)plVar18[3];
        if (((param_3 & 1) != 0) || (plVar1 == *(long **)(param_1 + 0x888))) {
          plVar19 = *(long **)(param_1 + 0x878);
          if (plVar19 < *(long **)(param_1 + 0x880)) {
            if (plVar19 == (long *)0x0) {
LAB_007e793c:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            plVar20 = plVar19 + 1;
            *plVar19 = lVar6;
          }
          else {
            lVar10 = (long)plVar19 - *(long *)(param_1 + 0x870);
            uVar11 = (lVar10 >> 3) + 1;
            if (uVar11 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_005ff43c();
            }
            uVar12 = (long)*(long **)(param_1 + 0x880) - *(long *)(param_1 + 0x870);
            uVar13 = (long)uVar12 >> 2;
            if (uVar13 <= uVar11) {
              uVar13 = uVar11;
            }
            if (0x7ffffffffffffff7 < uVar12) {
              uVar13 = 0x1fffffffffffffff;
            }
            if (uVar13 == 0) {
              pvVar7 = (void *)0x0;
            }
            else {
              if (uVar13 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_005d55a4();
              }
              pvVar7 = operator_new(uVar13 << 3);
            }
            plVar19 = (long *)((long)pvVar7 + lVar10);
            if (plVar19 == (long *)0x0) goto LAB_007e793c;
            plVar20 = plVar19 + 1;
            *plVar19 = lVar6;
            __n = *(long *)(param_1 + 0x878) - (long)*(void **)(param_1 + 0x870);
            __dest = (void *)((long)plVar19 - __n);
            memcpy(__dest,*(void **)(param_1 + 0x870),__n);
            pvVar8 = *(void **)(param_1 + 0x870);
            *(void **)(param_1 + 0x870) = __dest;
            *(long **)(param_1 + 0x878) = plVar20;
            *(void **)(param_1 + 0x880) = (void *)((long)pvVar7 + uVar13 * 8);
            if (pvVar8 != (void *)0x0) {
              operator_delete(pvVar8);
            }
          }
          *(long **)(param_1 + 0x878) = plVar20;
          iVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
          iVar5 = iVar3;
          if (iVar3 <= iVar4) {
            iVar5 = iVar4;
          }
          uVar11 = (**(code **)(*plVar1 + 0x10))(plVar1);
          if ((uVar11 & 0x11) != 0) {
            __FD_SET_chk(iVar3,&local_110,0x80);
          }
          iVar4 = iVar5;
          if ((uVar11 & 6) != 0) {
            __FD_SET_chk(iVar3,&local_190,0x80);
          }
        }
        plVar18 = (long *)*plVar18;
      } while (plVar18 != (long *)0x0);
      iVar4 = iVar4 + 1;
    }
    FUN_007eac54(&local_80);
    iVar4 = select(iVar4,&local_110,&local_190,(fd_set *)0x0,__timeout);
    if (iVar4 < 0) {
      piVar9 = (int *)__errno();
      if (*piVar9 != 4) {
        uVar11 = FUN_004249b0();
        if ((uVar11 & 1) == 0) {
          iStack_6c = *piVar9;
          local_80 = "../../rtc_base/physical_socket_server.cc";
          local_78 = 0x321b;
          local_70 = 1;
          FUN_00623bb0(&DAT_00215716,&local_80,"select");
        }
        return 0;
      }
    }
    else {
      if (iVar4 == 0) {
        return 1;
      }
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_007eac40(&local_80,param_1 + 0x890);
      puVar16 = *(ulong **)(param_1 + 0x878);
      for (puVar17 = *(ulong **)(param_1 + 0x870); puVar17 != puVar16; puVar17 = puVar17 + 1) {
        uVar11 = *(ulong *)(param_1 + 0x828);
        if ((uVar11 != 0) && (*(long *)(param_1 + 0x838) != 0)) {
          uVar13 = uVar11 - 1;
          uVar12 = *puVar17;
          if ((uVar11 & uVar13) == 0) {
            uVar14 = uVar13 & uVar12;
          }
          else {
            uVar14 = uVar12;
            if (uVar11 <= uVar12) {
              uVar14 = 0;
              if (uVar11 != 0) {
                uVar14 = uVar12 / uVar11;
              }
              uVar14 = uVar12 - uVar14 * uVar11;
            }
          }
          plVar18 = *(long **)(*(long *)(param_1 + 0x820) + uVar14 * 8);
          if (plVar18 != (long *)0x0) {
            do {
              while( true ) {
                plVar18 = (long *)*plVar18;
                if (plVar18 == (long *)0x0) goto LAB_007e76b0;
                uVar15 = plVar18[1];
                if (uVar12 == uVar15) break;
                if ((uVar11 & uVar13) == 0) {
                  uVar15 = uVar15 & uVar13;
                }
                else if (uVar11 <= uVar15) {
                  uVar2 = 0;
                  if (uVar11 != 0) {
                    uVar2 = uVar15 / uVar11;
                  }
                  uVar15 = uVar15 - uVar2 * uVar11;
                }
                if (uVar15 != uVar14) goto LAB_007e76b0;
              }
            } while (plVar18[2] != uVar12);
            if ((uVar11 & uVar13) == 0) {
              uVar14 = uVar13 & uVar12;
            }
            else {
              uVar14 = uVar12;
              if (uVar11 <= uVar12) {
                uVar14 = 0;
                if (uVar11 != 0) {
                  uVar14 = uVar12 / uVar11;
                }
                uVar14 = uVar12 - uVar14 * uVar11;
              }
            }
            plVar18 = *(long **)(*(long *)(param_1 + 0x820) + uVar14 * 8);
            if (plVar18 == (long *)0x0) {
LAB_007e7950:
                    /* WARNING: Subroutine does not return */
              FUN_005f55a8("unordered_map::at: key not found");
            }
            do {
              while( true ) {
                plVar18 = (long *)*plVar18;
                if (plVar18 == (long *)0x0) goto LAB_007e7950;
                uVar15 = plVar18[1];
                if (uVar15 == uVar12) break;
                if ((uVar11 & uVar13) == 0) {
                  uVar15 = uVar15 & uVar13;
                }
                else if (uVar11 <= uVar15) {
                  uVar2 = 0;
                  if (uVar11 != 0) {
                    uVar2 = uVar15 / uVar11;
                  }
                  uVar15 = uVar15 - uVar2 * uVar11;
                }
                if (uVar15 != uVar14) goto LAB_007e7950;
              }
            } while (plVar18[2] != uVar12);
            plVar18 = (long *)plVar18[3];
            uVar11 = (**(code **)(*plVar18 + 0x20))(plVar18);
            iVar4 = __FD_ISSET_chk(uVar11,&local_110,0x80);
            if (iVar4 != 0) {
              __FD_CLR_chk(uVar11 & 0xffffffff,&local_110,0x80);
            }
            iVar5 = __FD_ISSET_chk(uVar11 & 0xffffffff,&local_190,0x80);
            if (iVar5 != 0) {
              __FD_CLR_chk(uVar11 & 0xffffffff,&local_190,0x80);
            }
            FUN_007e7964(plVar18,iVar4 != 0,iVar5 != 0,0,iVar5 != 0 || iVar4 != 0);
          }
        }
LAB_007e76b0:
      }
      FUN_007eac54(&local_80);
    }
    if (__timeout != (timeval *)0x0) {
      __timeout->tv_sec = 0;
      *puVar21 = 0;
      lVar6 = FUN_006258f0();
      uVar11 = (long)puVar22 - lVar6;
      if (0 < (long)uVar11) {
        __timeout->tv_sec = uVar11 / 1000000;
        *puVar21 = uVar11 % 1000000;
      }
    }
    if ((*(byte *)(param_1 + 0x8c8) & 1) == 0) {
      return 1;
    }
  } while( true );
}


// ===== 007e7964  FUN_007e7964 =====

void FUN_007e7964(long *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  socklen_t local_38;
  int local_34;
  
  local_34 = 0;
  if ((param_5 & 1) != 0) {
    local_38 = 4;
    iVar1 = (**(code **)(*param_1 + 0x20))(param_1);
    iVar1 = getsockopt(iVar1,1,4,&local_34,&local_38);
    if ((iVar1 < 0) && (((param_4 & 1) != 0 || (piVar3 = (int *)__errno(), *piVar3 != 0x58)))) {
      local_34 = 9;
    }
  }
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  if ((param_2 & 1) == 0) {
    uVar6 = 0;
  }
  else if ((local_34 == 0) && (uVar4 = (**(code **)(*param_1 + 0x28))(param_1), (uVar4 & 1) == 0)) {
    uVar6 = 0x10;
    if ((uVar2 & 0x10) == 0) {
      uVar6 = 1;
    }
  }
  else {
    uVar6 = 8;
  }
  uVar5 = uVar6;
  if ((param_3 & 1) != 0) {
    if ((uVar2 >> 2 & 1) == 0) {
      uVar5 = uVar6 | 2;
    }
    else {
      uVar5 = uVar6 | 4;
      if (local_34 != 0) {
        uVar5 = uVar6;
      }
    }
  }
  if (local_34 != 0) {
    uVar5 = uVar5 | 8;
  }
  if (uVar5 != 0) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return;
}


// ===== 007e7a94  FUN_007e7a94 =====

void FUN_007e7a94(void)

{
  return;
}


// ===== 007e7a9c  FUN_007e7a9c =====

void FUN_007e7a9c(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x007e7ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined8 *)*param_1,*(undefined4 *)param_1[1]);
  return;
}


// ===== 007e7abc  FUN_007e7abc =====

void FUN_007e7abc(void)

{
  return;
}


// ===== 007e7ac4  FUN_007e7ac4 =====

void FUN_007e7ac4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x7e7acc);
  (*pcVar1)();
}


// ===== 007e7acc  FUN_007e7acc =====

void FUN_007e7acc(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x007e7ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined8 *)*param_1);
  return;
}


// ===== 007e7ae8  FUN_007e7ae8 =====

int FUN_007e7ae8(undefined8 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_00d384e8;
  FUN_007e6288(param_1[1],param_1);
  close(*(int *)(param_1 + 2));
  close(*(int *)((long)param_1 + 0x14));
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)((long)param_1 + 0x1c));
  return iVar1;
}


// ===== 007e7b38  FUN_007e7b38 =====

void FUN_007e7b38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d384e8;
  FUN_007e6288(param_1[1],param_1);
  close(*(int *)(param_1 + 2));
  close(*(int *)((long)param_1 + 0x14));
  pthread_mutex_destroy((pthread_mutex_t *)((long)param_1 + 0x1c));
  operator_delete(param_1);
  return;
}


// ===== 007e7b94  FUN_007e7b94 =====

undefined8 FUN_007e7b94(void)

{
  return 1;
}


// ===== 007e7ba0  FUN_007e7ba0 =====

int FUN_007e7ba0(long param_1)

{
  int iVar1;
  undefined4 local_4;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x1c));
  if (*(char *)(param_1 + 0x18) == '\x01') {
    local_4 = 0xaaaaaaaa;
    read(*(int *)(param_1 + 0x10),&local_4,4);
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  **(undefined1 **)(param_1 + 0x48) = 0;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x1c));
  return iVar1;
}


// ===== 007e7c00  FUN_007e7c00 =====

undefined4 FUN_007e7c00(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


// ===== 007e7c0c  FUN_007e7c0c =====

undefined8 FUN_007e7c0c(void)

{
  return 0;
}


// ===== 007e7c18  FUN_007e7c18 =====

int FUN_007e7c18(long param_1)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x1c));
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    write(*(int *)(param_1 + 0x14),&DAT_00215735,1);
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x1c));
  return iVar1;
}


// ===== 007e7c6c  FUN_007e7c6c =====

void FUN_007e7c6c(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  uVar1 = (**(code **)(**(long **)(lVar2 + 0x120) + 0x20))();
  FUN_007e55b8(lVar2,uVar1);
  return;
}


// ===== 007e7ca8  FUN_007e7ca8 =====

undefined1  [16] FUN_007e7ca8(undefined8 *param_1,undefined8 *param_2,long *param_3,long *param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 auVar13 [16];
  
  plVar8 = (long *)*param_1;
  puVar11 = (undefined1 *)*param_2;
  puVar10 = (undefined1 *)plVar8[1];
  if (puVar10 == (undefined1 *)0x0) {
    puVar12 = &DAT_aaaaaaaaaaaaaaaa;
  }
  else {
    puVar2 = puVar10 + -1;
    if (((ulong)puVar10 & (ulong)puVar2) == 0) {
      puVar12 = (undefined1 *)((ulong)puVar2 & (ulong)puVar11);
    }
    else {
      puVar12 = puVar11;
      if (puVar10 <= puVar11) {
        uVar5 = 0;
        if (puVar10 != (undefined1 *)0x0) {
          uVar5 = (ulong)puVar11 / (ulong)puVar10;
        }
        puVar12 = puVar11 + -(uVar5 * (long)puVar10);
      }
    }
    puVar3 = *(undefined8 **)(*plVar8 + (long)puVar12 * 8);
    if (puVar3 != (undefined8 *)0x0) {
      for (plVar9 = (long *)*puVar3; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        puVar6 = (undefined1 *)plVar9[1];
        if (puVar6 == puVar11) {
          if ((undefined1 *)plVar9[2] == puVar11) {
            uVar1 = 0;
            goto LAB_007e7f40;
          }
        }
        else {
          if (((ulong)puVar10 & (ulong)puVar2) == 0) {
            puVar6 = (undefined1 *)((ulong)puVar6 & (ulong)puVar2);
          }
          else if (puVar10 <= puVar6) {
            uVar5 = 0;
            if (puVar10 != (undefined1 *)0x0) {
              uVar5 = (ulong)puVar6 / (ulong)puVar10;
            }
            puVar6 = puVar6 + -(uVar5 * (long)puVar10);
          }
          if (puVar6 != puVar12) break;
        }
      }
    }
  }
  plVar9 = (long *)operator_new(0x20);
  if (plVar9 == (long *)0x0) {
LAB_007e7f60:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *plVar9 = 0;
  plVar9[1] = (long)puVar11;
  if (plVar9 == (long *)0xfffffffffffffff0) goto LAB_007e7f60;
  lVar4 = *param_4;
  plVar9[2] = *param_3;
  plVar9[3] = lVar4;
  if ((float)(plVar8[3] + 1) <= *(float *)(plVar8 + 4) * (float)puVar10) goto LAB_007e7ec8;
  if (puVar10 < (undefined1 *)0x3) {
    uVar5 = 1;
  }
  else {
    uVar5 = (ulong)(((ulong)puVar10 & (ulong)(puVar10 + -1)) != 0);
  }
  puVar12 = (undefined1 *)(uVar5 | (long)puVar10 << 1);
  puVar2 = (undefined1 *)(long)((float)(plVar8[3] + 1) / *(float *)(plVar8 + 4));
  if (puVar12 <= puVar2) {
    puVar12 = puVar2;
  }
  if (puVar12 + -1 == (undefined1 *)0x0) {
    puVar12 = (undefined1 *)0x2;
  }
  else if (((ulong)puVar12 & (ulong)(puVar12 + -1)) != 0) {
    puVar12 = (undefined1 *)FUN_005204f8(puVar12);
    puVar10 = (undefined1 *)plVar8[1];
  }
  if (puVar10 < puVar12) {
LAB_007e7e20:
    FUN_007e7f74(plVar8,puVar12);
  }
  else if (puVar12 < puVar10) {
    puVar2 = (undefined1 *)(long)((float)(ulong)plVar8[3] / *(float *)(plVar8 + 4));
    if ((puVar10 < (undefined1 *)0x3) || (((ulong)puVar10 & (ulong)(puVar10 + -1)) != 0)) {
      puVar2 = (undefined1 *)FUN_005204f8();
    }
    else if ((undefined1 *)0x1 < puVar2) {
      puVar2 = (undefined1 *)(1L << (-LZCOUNT(puVar2 + -1) & 0x3fU));
    }
    if (puVar12 <= puVar2) {
      puVar12 = puVar2;
    }
    if (puVar12 < puVar10) goto LAB_007e7e20;
  }
  puVar10 = (undefined1 *)plVar8[1];
  if (((ulong)puVar10 & (ulong)(puVar10 + -1)) == 0) {
    puVar12 = (undefined1 *)((ulong)(puVar10 + -1) & (ulong)puVar11);
  }
  else {
    puVar12 = puVar11;
    if (puVar10 <= puVar11) {
      uVar5 = 0;
      if (puVar10 != (undefined1 *)0x0) {
        uVar5 = (ulong)puVar11 / (ulong)puVar10;
      }
      puVar12 = puVar11 + -(uVar5 * (long)puVar10);
    }
  }
LAB_007e7ec8:
  lVar4 = *plVar8;
  plVar7 = *(long **)(lVar4 + (long)puVar12 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = plVar8 + 2;
    *plVar9 = *plVar7;
    *plVar7 = (long)plVar9;
    *(long **)(lVar4 + (long)puVar12 * 8) = plVar7;
    if (*plVar9 != 0) {
      puVar11 = *(undefined1 **)(*plVar9 + 8);
      if (((ulong)puVar10 & (ulong)(puVar10 + -1)) == 0) {
        puVar11 = (undefined1 *)((ulong)puVar11 & (ulong)(puVar10 + -1));
      }
      else if (puVar10 <= puVar11) {
        uVar5 = 0;
        if (puVar10 != (undefined1 *)0x0) {
          uVar5 = (ulong)puVar11 / (ulong)puVar10;
        }
        puVar11 = puVar11 + -(uVar5 * (long)puVar10);
      }
      *(long **)(*plVar8 + (long)puVar11 * 8) = plVar9;
    }
  }
  else {
    *plVar9 = *plVar7;
    *plVar7 = (long)plVar9;
  }
  uVar1 = 1;
  plVar8[3] = plVar8[3] + 1;
LAB_007e7f40:
  auVar13._8_8_ = uVar1;
  auVar13._0_8_ = plVar9;
  return auVar13;
}


// ===== 007e7f74  FUN_007e7f74 =====

void FUN_007e7f74(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  
  if (param_2 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar2 = operator_new(param_2 << 3);
  }
  pvVar3 = (void *)*param_1;
  *param_1 = (long)pvVar2;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  param_1[1] = param_2;
  if (param_2 != 0) {
    uVar4 = 0;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      uVar5 = param_2 - 1;
      uVar4 = plVar6[1];
      if ((param_2 & uVar5) == 0) {
        uVar4 = uVar4 & uVar5;
      }
      else if (param_2 <= uVar4) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      for (plVar7 = (long *)*plVar6; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar8 = plVar7[1];
        if ((param_2 & uVar5) == 0) {
          uVar8 = uVar8 & uVar5;
        }
        else if (param_2 <= uVar8) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar8 / param_2;
          }
          uVar8 = uVar8 - uVar1 * param_2;
        }
        if (uVar8 != uVar4) {
          if (*(long *)(*param_1 + uVar8 * 8) == 0) {
            *(long **)(*param_1 + uVar8 * 8) = plVar6;
            uVar4 = uVar8;
          }
          else {
            *plVar6 = *plVar7;
            *plVar7 = **(undefined8 **)(*param_1 + uVar8 * 8);
            **(long **)(*param_1 + uVar8 * 8) = (long)plVar7;
            plVar7 = plVar6;
          }
        }
        plVar6 = plVar7;
      }
    }
  }
  return;
}


// ===== 007e80c8  FUN_007e80c8 =====

undefined1  [16] FUN_007e80c8(undefined8 *param_1,long *param_2,long *param_3,long *param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined1 auVar13 [16];
  long local_58;
  
  lVar12 = *param_2;
  plVar8 = (long *)*param_1;
  local_58 = lVar12;
  puVar1 = (undefined1 *)FUN_0061e264(&local_58,8);
  puVar10 = (undefined1 *)plVar8[1];
  if (puVar10 == (undefined1 *)0x0) {
    puVar11 = &DAT_aaaaaaaaaaaaaaaa;
  }
  else {
    puVar3 = puVar10 + -1;
    if (((ulong)puVar10 & (ulong)puVar3) == 0) {
      puVar11 = (undefined1 *)((ulong)puVar3 & (ulong)puVar1);
    }
    else {
      puVar11 = puVar1;
      if (puVar10 <= puVar1) {
        uVar5 = 0;
        if (puVar10 != (undefined1 *)0x0) {
          uVar5 = (ulong)puVar1 / (ulong)puVar10;
        }
        puVar11 = puVar1 + -(uVar5 * (long)puVar10);
      }
    }
    puVar4 = *(undefined8 **)(*plVar8 + (long)puVar11 * 8);
    if (puVar4 != (undefined8 *)0x0) {
      for (plVar9 = (long *)*puVar4; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        puVar6 = (undefined1 *)plVar9[1];
        if (puVar6 == puVar1) {
          if (plVar9[2] == lVar12) {
            uVar2 = 0;
            goto LAB_007e8378;
          }
        }
        else {
          if (((ulong)puVar10 & (ulong)puVar3) == 0) {
            puVar6 = (undefined1 *)((ulong)puVar6 & (ulong)puVar3);
          }
          else if (puVar10 <= puVar6) {
            uVar5 = 0;
            if (puVar10 != (undefined1 *)0x0) {
              uVar5 = (ulong)puVar6 / (ulong)puVar10;
            }
            puVar6 = puVar6 + -(uVar5 * (long)puVar10);
          }
          if (puVar6 != puVar11) break;
        }
      }
    }
  }
  plVar9 = (long *)operator_new(0x20);
  if (plVar9 == (long *)0x0) {
LAB_007e839c:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *plVar9 = 0;
  plVar9[1] = (long)puVar1;
  if (plVar9 == (long *)0xfffffffffffffff0) goto LAB_007e839c;
  lVar12 = *param_4;
  plVar9[2] = *param_3;
  plVar9[3] = lVar12;
  if ((float)(plVar8[3] + 1) <= *(float *)(plVar8 + 4) * (float)puVar10) goto LAB_007e8300;
  if (puVar10 < (undefined1 *)0x3) {
    uVar5 = 1;
  }
  else {
    uVar5 = (ulong)(((ulong)puVar10 & (ulong)(puVar10 + -1)) != 0);
  }
  puVar11 = (undefined1 *)(uVar5 | (long)puVar10 << 1);
  puVar3 = (undefined1 *)(long)((float)(plVar8[3] + 1) / *(float *)(plVar8 + 4));
  if (puVar11 <= puVar3) {
    puVar11 = puVar3;
  }
  if (puVar11 + -1 == (undefined1 *)0x0) {
    puVar11 = (undefined1 *)0x2;
  }
  else if (((ulong)puVar11 & (ulong)(puVar11 + -1)) != 0) {
    puVar11 = (undefined1 *)FUN_005204f8(puVar11);
    puVar10 = (undefined1 *)plVar8[1];
  }
  if (puVar10 < puVar11) {
LAB_007e8258:
    FUN_007e83b0(plVar8,puVar11);
  }
  else if (puVar11 < puVar10) {
    puVar3 = (undefined1 *)(long)((float)(ulong)plVar8[3] / *(float *)(plVar8 + 4));
    if ((puVar10 < (undefined1 *)0x3) || (((ulong)puVar10 & (ulong)(puVar10 + -1)) != 0)) {
      puVar3 = (undefined1 *)FUN_005204f8();
    }
    else if ((undefined1 *)0x1 < puVar3) {
      puVar3 = (undefined1 *)(1L << (-LZCOUNT(puVar3 + -1) & 0x3fU));
    }
    if (puVar11 <= puVar3) {
      puVar11 = puVar3;
    }
    if (puVar11 < puVar10) goto LAB_007e8258;
  }
  puVar10 = (undefined1 *)plVar8[1];
  if (((ulong)puVar10 & (ulong)(puVar10 + -1)) == 0) {
    puVar11 = (undefined1 *)((ulong)(puVar10 + -1) & (ulong)puVar1);
  }
  else {
    puVar11 = puVar1;
    if (puVar10 <= puVar1) {
      uVar5 = 0;
      if (puVar10 != (undefined1 *)0x0) {
        uVar5 = (ulong)puVar1 / (ulong)puVar10;
      }
      puVar11 = puVar1 + -(uVar5 * (long)puVar10);
    }
  }
LAB_007e8300:
  lVar12 = *plVar8;
  plVar7 = *(long **)(lVar12 + (long)puVar11 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = plVar8 + 2;
    *plVar9 = *plVar7;
    *plVar7 = (long)plVar9;
    *(long **)(lVar12 + (long)puVar11 * 8) = plVar7;
    if (*plVar9 != 0) {
      puVar1 = *(undefined1 **)(*plVar9 + 8);
      if (((ulong)puVar10 & (ulong)(puVar10 + -1)) == 0) {
        puVar1 = (undefined1 *)((ulong)puVar1 & (ulong)(puVar10 + -1));
      }
      else if (puVar10 <= puVar1) {
        uVar5 = 0;
        if (puVar10 != (undefined1 *)0x0) {
          uVar5 = (ulong)puVar1 / (ulong)puVar10;
        }
        puVar1 = puVar1 + -(uVar5 * (long)puVar10);
      }
      *(long **)(*plVar8 + (long)puVar1 * 8) = plVar9;
    }
  }
  else {
    *plVar9 = *plVar7;
    *plVar7 = (long)plVar9;
  }
  uVar2 = 1;
  plVar8[3] = plVar8[3] + 1;
LAB_007e8378:
  auVar13._8_8_ = uVar2;
  auVar13._0_8_ = plVar9;
  return auVar13;
}


// ===== 007e83b0  FUN_007e83b0 =====

void FUN_007e83b0(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  
  if (param_2 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar2 = operator_new(param_2 << 3);
  }
  pvVar3 = (void *)*param_1;
  *param_1 = (long)pvVar2;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  param_1[1] = param_2;
  if (param_2 != 0) {
    uVar4 = 0;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      uVar5 = param_2 - 1;
      uVar4 = plVar6[1];
      if ((param_2 & uVar5) == 0) {
        uVar4 = uVar4 & uVar5;
      }
      else if (param_2 <= uVar4) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      for (plVar7 = (long *)*plVar6; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar8 = plVar7[1];
        if ((param_2 & uVar5) == 0) {
          uVar8 = uVar8 & uVar5;
        }
        else if (param_2 <= uVar8) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar8 / param_2;
          }
          uVar8 = uVar8 - uVar1 * param_2;
        }
        if (uVar8 != uVar4) {
          if (*(long *)(*param_1 + uVar8 * 8) == 0) {
            *(long **)(*param_1 + uVar8 * 8) = plVar6;
            uVar4 = uVar8;
          }
          else {
            *plVar6 = *plVar7;
            *plVar7 = **(undefined8 **)(*param_1 + uVar8 * 8);
            **(long **)(*param_1 + uVar8 * 8) = (long)plVar7;
            plVar7 = plVar6;
          }
        }
        plVar6 = plVar7;
      }
    }
  }
  return;
}


// ===== 007e8504  FUN_007e8504 =====

void FUN_007e8504(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar5 = uVar4 - 1;
  if ((uVar4 & uVar5) == 0) {
    uVar3 = uVar5 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_3);
  if (plVar7 != param_2 + 2) {
    uVar8 = plVar7[1];
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_007e85bc;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_007e85bc;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_007e85bc:
  lVar6 = *param_3;
  if (lVar6 != 0) {
    uVar8 = *(ulong *)(lVar6 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar5 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_2 + uVar8 * 8) = plVar7;
      lVar6 = *param_3;
    }
  }
  *plVar7 = lVar6;
  *param_3 = 0;
  lVar6 = param_2[3];
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  param_2[3] = lVar6 + -1;
  return;
}


// ===== 007e8638  FUN_007e8638 =====

undefined8 FUN_007e8638(long *param_1,ulong *param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  void *local_28 [2];
  byte local_18;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = uVar3 - 1;
    uVar5 = *param_2;
    if ((uVar3 & uVar4) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar5;
      if (uVar3 <= uVar5) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar5 / uVar3;
        }
        uVar6 = uVar5 - uVar6 * uVar3;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar8 = plVar7[1];
        if (uVar8 == uVar5) {
          if (plVar7[2] == uVar5) {
            FUN_007e8748(local_28);
            pvVar2 = local_28[0];
            local_28[0] = (void *)0x0;
            if (pvVar2 != (void *)0x0) {
              if ((pvVar2 == (void *)0xfffffffffffffff0) && ((local_18 & 1) != 0)) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                          );
              }
              operator_delete(pvVar2);
            }
            return 1;
          }
        }
        else {
          if ((uVar3 & uVar4) == 0) {
            uVar8 = uVar8 & uVar4;
          }
          else if (uVar3 <= uVar8) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar8 / uVar3;
            }
            uVar8 = uVar8 - uVar1 * uVar3;
          }
          if (uVar8 != uVar6) {
            return 0;
          }
        }
      }
    }
  }
  return 0;
}


// ===== 007e8748  FUN_007e8748 =====

void FUN_007e8748(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar5 = uVar4 - 1;
  if ((uVar4 & uVar5) == 0) {
    uVar3 = uVar5 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_3);
  if (plVar7 != param_2 + 2) {
    uVar8 = plVar7[1];
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_007e8800;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_007e8800;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_007e8800:
  lVar6 = *param_3;
  if (lVar6 != 0) {
    uVar8 = *(ulong *)(lVar6 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar5 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_2 + uVar8 * 8) = plVar7;
      lVar6 = *param_3;
    }
  }
  *plVar7 = lVar6;
  *param_3 = 0;
  lVar6 = param_2[3];
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  param_2[3] = lVar6 + -1;
  return;
}


// ===== 007e887c  FUN_007e887c =====

uint FUN_007e887c(long *param_1,long *param_2)

{
  ulong uVar1;
  uint uVar2;
  void *pvVar3;
  ulong uVar4;
  void *pvVar5;
  size_t *psVar6;
  ulong uVar7;
  long local_38;
  
  psVar6 = (size_t *)param_2[0xc];
  local_38 = -1;
  uVar4 = psVar6[1];
  if (uVar4 >> 0x10 == 0) {
    pvVar3 = operator_new__(0x10000);
    pvVar5 = (void *)psVar6[2];
    if (pvVar5 == (void *)0x0) {
      psVar6[2] = (size_t)pvVar3;
    }
    else {
      memcpy(pvVar3,pvVar5,*psVar6);
      psVar6[2] = (size_t)pvVar3;
      operator_delete__(pvVar5);
    }
    psVar6[1] = 0x10000;
    psVar6 = (size_t *)param_2[0xc];
    uVar4 = psVar6[1];
  }
  uVar2 = (**(code **)(*param_1 + 0x48))(param_1,psVar6[2],uVar4,param_2 + 2,&local_38);
  psVar6 = (size_t *)param_2[0xc];
  uVar7 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
  uVar4 = psVar6[1];
  if (uVar4 < uVar7) {
    uVar4 = uVar4 + (uVar4 >> 1);
    uVar1 = uVar7;
    if (uVar7 <= uVar4) {
      uVar1 = uVar4;
    }
    pvVar3 = operator_new__(uVar1);
    pvVar5 = (void *)psVar6[2];
    if (pvVar5 == (void *)0x0) {
      psVar6[2] = (size_t)pvVar3;
    }
    else {
      memcpy(pvVar3,pvVar5,*psVar6);
      psVar6[2] = (size_t)pvVar3;
      operator_delete__(pvVar5);
    }
    psVar6[1] = uVar1;
  }
  *psVar6 = uVar7;
  if ((0 < (int)uVar2) && (local_38 != -1)) {
    if ((char)param_2[1] == '\x01') {
      *param_2 = local_38;
    }
    else {
      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *param_2 = local_38;
      *(undefined1 *)(param_2 + 1) = 1;
    }
  }
  return uVar2;
}


// ===== 007e89ec  FUN_007e89ec =====

int FUN_007e89ec(undefined8 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_00d38530;
  FUN_007b5d24(param_1 + 0x17);
  FUN_007b5d24(param_1 + 0x13);
  FUN_007b5d24(param_1 + 0xf);
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 10));
  FUN_007b5d24(param_1 + 6);
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 1));
  return iVar1;
}


// ===== 007e8a4c  FUN_007e8a4c =====

void FUN_007e8a4c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x7e8a54);
  (*pcVar1)();
}


// ===== 007e8a54  FUN_007e8a54 =====

void FUN_007e8a54(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 007e8a64  FUN_007e8a64 =====

void FUN_007e8a64(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_FUN_00d385d8;
  *(undefined1 *)((long)param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  return;
}


// ===== 007e8a94  FUN_007e8a94 =====

void FUN_007e8a94(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    *(undefined1 *)*param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  return;
}


// ===== 007e8ad0  FUN_007e8ad0 =====

void FUN_007e8ad0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_FUN_00d385d8;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  FUN_007e8b18();
  *(undefined2 *)(param_1 + 7) = param_4;
  return;
}


// ===== 007e8b18  FUN_007e8b18 =====

void FUN_007e8b18(undefined8 *param_1,undefined8 ***param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  byte bVar4;
  undefined8 ***__dest;
  undefined8 **local_58;
  ulong uStack_50;
  undefined8 local_48;
  
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_3 < 0x17) {
    local_48 = CONCAT17((char)param_3,(undefined7)local_48);
    __dest = &local_58;
  }
  else {
    uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 ***)operator_new(uVar2);
    local_48 = uVar2 | 0x8000000000000000;
    local_58 = __dest;
    uStack_50 = param_3;
  }
  if (__dest <= (undefined8 ***)((long)__dest + param_3)) {
    if ((__dest <= param_2) && (param_2 < (undefined8 ***)((long)__dest + param_3))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(__dest,param_2,param_3);
    cVar3 = *(char *)((long)param_1 + 0x17);
    *(undefined1 *)((long)__dest + param_3) = 0;
    if (cVar3 < '\0') {
      operator_delete((void *)*param_1);
    }
    param_1[1] = uStack_50;
    *param_1 = local_58;
    param_1[2] = local_48;
    bVar4 = FUN_007ea3b0(param_2,param_3,param_1 + 3);
    *(byte *)(param_1 + 8) = bVar4 & 1;
    if ((bVar4 & 1) == 0) {
      param_1[4] = 0;
      param_1[5] = 0;
      *(undefined4 *)(param_1 + 6) = 0;
    }
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 007e8c58  FUN_007e8c58 =====

void FUN_007e8c58(long param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x38) = param_2;
  return;
}


// ===== 007e8c64  FUN_007e8c64 =====

void FUN_007e8c64(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    *(undefined1 *)*param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x14);
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = uVar2;
  *(undefined8 *)((long)param_1 + 0x24) = uVar1;
  return;
}


// ===== 007e8ca4  FUN_007e8ca4 =====

void FUN_007e8ca4(void)

{
  return;
}


// ===== 007e8cac  FUN_007e8cac =====

void FUN_007e8cac(undefined8 *param_1,long param_2,undefined2 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_FUN_00d385d8;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined1 *)((long)param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x14);
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  *(undefined2 *)(param_1 + 7) = param_3;
  *(undefined8 *)((long)param_1 + 0x2c) = uVar2;
  *(undefined8 *)((long)param_1 + 0x24) = uVar1;
  return;
}


// ===== 007e8cec  FUN_007e8cec =====

void FUN_007e8cec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_FUN_00d385d8;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  if (param_1 != param_2) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      FUN_00547fc0(param_1,*param_2,param_2[1]);
    }
    else {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar2;
      *param_1 = uVar1;
    }
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  uVar1 = *(undefined8 *)((long)param_2 + 0x24);
  *(undefined8 *)((long)param_1 + 0x2c) = *(undefined8 *)((long)param_2 + 0x2c);
  *(undefined8 *)((long)param_1 + 0x24) = uVar1;
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)((long)param_2 + 0x3c);
  return;
}


// ===== 007e8d84  FUN_007e8d84 =====

undefined8 * FUN_007e8d84(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 != param_2) {
    bVar2 = *(byte *)((long)param_2 + 0x17);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      uVar1 = param_2[1];
      puVar3 = (undefined8 *)*param_2;
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
        puVar3 = param_2;
      }
      FUN_00547f08(param_1,puVar3,uVar1);
    }
    else if ((char)bVar2 < '\0') {
      FUN_00547fc0(param_1,*param_2,param_2[1]);
    }
    else {
      uVar5 = param_2[1];
      uVar4 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar5;
      *param_1 = uVar4;
    }
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  uVar4 = *(undefined8 *)((long)param_2 + 0x24);
  *(undefined8 *)((long)param_1 + 0x2c) = *(undefined8 *)((long)param_2 + 0x2c);
  *(undefined8 *)((long)param_1 + 0x24) = uVar4;
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)((long)param_2 + 0x3c);
  return param_1;
}


// ===== 007e8e30  FUN_007e8e30 =====

bool FUN_007e8e30(long param_1)

{
  ulong uVar1;
  
  if (*(char *)(param_1 + 0x17) < '\0') {
    if (*(long *)(param_1 + 8) != 0) {
      return false;
    }
  }
  else if (*(char *)(param_1 + 0x17) != '\0') {
    return false;
  }
  uVar1 = FUN_007e9ca4(param_1 + 0x18);
  if ((uVar1 & 1) == 0) {
    return false;
  }
  return *(short *)(param_1 + 0x38) == 0;
}


// ===== 007e8e8c  FUN_007e8e8c =====

void FUN_007e8e8c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x14);
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x2c) = uVar2;
  *(undefined8 *)(param_1 + 0x24) = uVar1;
  return;
}


// ===== 007e8ea8  FUN_007e8ea8 =====

long FUN_007e8ea8(long param_1)

{
  return param_1 + 0x18;
}


// ===== 007e8eb4  FUN_007e8eb4 =====

undefined2 FUN_007e8eb4(long param_1)

{
  return *(undefined2 *)(param_1 + 0x38);
}


// ===== 007e8ec0  FUN_007e8ec0 =====

void FUN_007e8ec0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *local_58 [2];
  char cStack_41;
  void *local_40;
  undefined8 uStack_38;
  long local_30;
  
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      if (param_2[1] != 0) {
        FUN_005478d8(param_1,*param_2);
        return;
      }
    }
    else if (*(char *)((long)param_2 + 0x17) != '\0') {
      uVar3 = *param_2;
      uVar2 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar3;
      param_1[2] = uVar2;
      return;
    }
  }
  if (*(int *)(param_2 + 4) == 10) {
    FUN_007e9e64(local_58,param_2 + 3);
    puVar1 = (undefined8 *)FUN_00547994(local_58,0,&DAT_0019769a,1);
    uStack_38 = puVar1[1];
    local_40 = (void *)*puVar1;
    local_30 = puVar1[2];
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    puVar1 = (undefined8 *)FUN_00547cac(&local_40,&DAT_0019fa9e,1);
    uVar3 = *puVar1;
    uVar2 = puVar1[2];
    param_1[1] = puVar1[1];
    *param_1 = uVar3;
    param_1[2] = uVar2;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    if (local_30 < 0) {
      operator_delete(local_40);
    }
    if (cStack_41 < '\0') {
      operator_delete(local_58[0]);
    }
    return;
  }
  FUN_007e9e64(param_1,param_2 + 3);
  return;
}


// ===== 007e9004  FUN_007e9004 =====

void FUN_007e9004(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *local_58 [2];
  char cStack_41;
  void *local_40;
  undefined8 uStack_38;
  long local_30;
  
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      if (param_2[1] != 0) {
        FUN_005478d8(param_1,*param_2);
        return;
      }
    }
    else if (*(char *)((long)param_2 + 0x17) != '\0') {
      uVar3 = *param_2;
      uVar2 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar3;
      param_1[2] = uVar2;
      return;
    }
  }
  if (*(int *)(param_2 + 4) == 10) {
    FUN_007e9f18(local_58,param_2 + 3);
    puVar1 = (undefined8 *)FUN_00547994(local_58,0,&DAT_0019769a,1);
    uStack_38 = puVar1[1];
    local_40 = (void *)*puVar1;
    local_30 = puVar1[2];
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    puVar1 = (undefined8 *)FUN_00547cac(&local_40,&DAT_0019fa9e,1);
    uVar3 = *puVar1;
    uVar2 = puVar1[2];
    param_1[1] = puVar1[1];
    *param_1 = uVar3;
    param_1[2] = uVar2;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    if (local_30 < 0) {
      operator_delete(local_40);
    }
    if (cStack_41 < '\0') {
      operator_delete(local_58[0]);
    }
    return;
  }
  FUN_007e9f18(param_1,param_2 + 3);
  return;
}


// ===== 007e9148  FUN_007e9148 =====

void FUN_007e9148(long param_1)

{
  FUN_005490bc(*(undefined2 *)(param_1 + 0x38));
  return;
}


// ===== 007e9154  FUN_007e9154 =====

void FUN_007e9154(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 ***pppuVar2;
  undefined8 uVar3;
  undefined8 **local_478;
  ulong uStack_470;
  byte bStack_461;
  undefined1 *local_460;
  undefined1 *puStack_458;
  undefined1 *local_450;
  undefined1 auStack_448 [1024];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  memset(auStack_448,0xaa,0x400);
  local_450 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_458 = &DAT_aaaaaaaaaaaaaaaa;
  local_460 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00622830(&local_460,auStack_448,0x400);
  FUN_007e8ec0(&local_478,param_2);
  pppuVar2 = (undefined8 ***)local_478;
  if (-1 < (char)bStack_461) {
    uStack_470 = (ulong)bStack_461;
    pppuVar2 = &local_478;
  }
  uVar3 = FUN_006228b0(&local_460,pppuVar2,uStack_470);
  uVar3 = FUN_006228b0(uVar3,&DAT_001ca603,1);
  FUN_00622910(uVar3,*(undefined2 *)(param_2 + 0x38));
  if ((char)bStack_461 < '\0') {
    operator_delete(local_478);
  }
  FUN_005d3510(param_1,local_460);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 007e924c  FUN_007e924c =====

void FUN_007e924c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 ***pppuVar2;
  undefined8 uVar3;
  undefined8 **local_478;
  ulong uStack_470;
  byte bStack_461;
  undefined1 *local_460;
  undefined1 *puStack_458;
  undefined1 *local_450;
  undefined1 auStack_448 [1024];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  memset(auStack_448,0xaa,0x400);
  local_450 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_458 = &DAT_aaaaaaaaaaaaaaaa;
  local_460 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00622830(&local_460,auStack_448,0x400);
  FUN_007e9004(&local_478,param_2);
  pppuVar2 = (undefined8 ***)local_478;
  if (-1 < (char)bStack_461) {
    uStack_470 = (ulong)bStack_461;
    pppuVar2 = &local_478;
  }
  uVar3 = FUN_006228b0(&local_460,pppuVar2,uStack_470);
  uVar3 = FUN_006228b0(uVar3,&DAT_001ca603,1);
  FUN_00622910(uVar3,*(undefined2 *)(param_2 + 0x38));
  if ((char)bStack_461 < '\0') {
    operator_delete(local_478);
  }
  FUN_005d3510(param_1,local_460);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 007e9344  FUN_007e9344 =====

void FUN_007e9344(undefined8 param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 **ppuVar5;
  undefined8 *****pppppuVar6;
  undefined8 ****local_478;
  ulong uStack_470;
  byte bStack_461;
  undefined1 *local_460;
  undefined1 *puStack_458;
  undefined1 *local_450;
  undefined1 auStack_448 [1024];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_007e9ca4(param_2 + 0x18);
  if ((uVar3 & 1) == 0) {
    bVar1 = *(byte *)(param_2 + 0x40) & 1;
joined_r0x007e9398:
    if (bVar1 == 0) {
LAB_007e939c:
      if (*(char *)(param_2 + 0x17) < '\0') {
        if (*(long *)(param_2 + 8) != 0) goto LAB_007e93b4;
      }
      else if (*(char *)(param_2 + 0x17) != '\0') {
LAB_007e93b4:
        memset(auStack_448,0xaa,0x400);
        local_450 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_458 = &DAT_aaaaaaaaaaaaaaaa;
        local_460 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_00622830(&local_460,auStack_448,0x400);
        FUN_007e9004(&local_478,param_2);
        uVar3 = uStack_470;
        pppppuVar6 = (undefined8 *****)local_478;
        if (-1 < (char)bStack_461) {
          uVar3 = (ulong)bStack_461;
          pppppuVar6 = &local_478;
        }
        uVar4 = FUN_006228b0(&local_460,pppppuVar6,uVar3);
        uVar4 = FUN_006228b0(uVar4,&DAT_001ca603,1);
        FUN_00622910(uVar4,*(undefined2 *)(param_2 + 0x38));
        if ((char)bStack_461 < '\0') {
          operator_delete(local_478);
        }
        FUN_006228b0(&local_460,&DAT_001a2df6,2);
        if (*(int *)(param_2 + 0x20) == 10) {
          uVar4 = FUN_006228b0(&local_460,&DAT_0019769a,1);
          FUN_007e9f18(&local_478,param_2 + 0x18);
          pppppuVar6 = (undefined8 *****)local_478;
          if (-1 < (char)bStack_461) {
            uStack_470 = (ulong)bStack_461;
            pppppuVar6 = &local_478;
          }
          ppuVar5 = (undefined1 **)FUN_006228b0(uVar4,pppppuVar6,uStack_470);
          pppppuVar6 = (undefined8 *****)&DAT_0019fa9e;
          uStack_470 = 1;
        }
        else {
          FUN_007e9f18(&local_478,param_2 + 0x18);
          ppuVar5 = &local_460;
          pppppuVar6 = (undefined8 *****)local_478;
          if (-1 < (char)bStack_461) {
            pppppuVar6 = &local_478;
            uStack_470 = (ulong)bStack_461;
          }
        }
        FUN_006228b0(ppuVar5,pppppuVar6,uStack_470);
        if ((char)bStack_461 < '\0') {
          operator_delete(local_478);
        }
        uVar4 = FUN_006228b0(&local_460,&DAT_001ca603,1);
        uVar4 = FUN_00622910(uVar4,*(undefined2 *)(param_2 + 0x38));
        FUN_006228b0(uVar4,&DAT_001ca519,1);
        FUN_005d3510(param_1,local_460);
        if (*(long *)(lVar2 + 0x28) == local_48) {
          return;
        }
        goto LAB_007e95a0;
      }
    }
  }
  else if ((*(byte *)(param_2 + 0x40) & 1) == 0) {
    bVar1 = *(byte *)(param_2 + 0x17);
    if (-1 < (char)bVar1) goto joined_r0x007e9398;
    if (*(long *)(param_2 + 8) != 0) goto LAB_007e956c;
    goto LAB_007e939c;
  }
LAB_007e956c:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    FUN_007e924c(param_1,param_2);
    return;
  }
LAB_007e95a0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007e95a4  FUN_007e95a4 =====

bool FUN_007e95a4(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_007e9ca4(param_1 + 0x18);
  if (((uVar2 & 1) == 0) || ((*(byte *)(param_1 + 0x40) & 1) != 0)) {
    bVar1 = false;
  }
  else {
    lVar3 = (long)*(char *)(param_1 + 0x17);
    if (lVar3 < 0) {
      lVar3 = *(long *)(param_1 + 8);
    }
    bVar1 = lVar3 != 0;
  }
  return bVar1;
}


// ===== 007e95f8  FUN_007e95f8 =====

void FUN_007e95f8(long param_1)

{
  FUN_007ea478(param_1 + 0x18);
  return;
}


// ===== 007e9604  FUN_007e9604 =====

bool FUN_007e9604(char *param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = FUN_007ea504(param_1 + 0x18);
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_007ea478(param_1 + 0x18);
    if ((uVar3 & 1) == 0) {
      bVar1 = false;
    }
    else {
      if (param_1[0x17] < '\0') {
        param_1 = *(char **)param_1;
      }
      iVar2 = strcmp(param_1,"localhost");
      bVar1 = iVar2 == 0;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


// ===== 007e9674  FUN_007e9674 =====

void FUN_007e9674(long param_1)

{
  FUN_007ea56c(param_1 + 0x18);
  return;
}


// ===== 007e9680  FUN_007e9680 =====

undefined4 FUN_007e9680(char *param_1)

{
  int iVar1;
  ulong uVar2;
  char *__s1;
  undefined4 uVar3;
  
  uVar2 = FUN_007e9ca4(param_1 + 0x18);
  if (((uVar2 & 1) != 0) && ((param_1[0x40] & 1U) == 0)) {
    if (param_1[0x17] < '\0') {
      if (*(long *)(param_1 + 8) != 0) {
        return 0;
      }
    }
    else if (param_1[0x17] != '\0') {
      return 0;
    }
  }
  uVar2 = FUN_007ea478(param_1 + 0x18);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  uVar2 = FUN_007ea504(param_1 + 0x18);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_007ea478(param_1 + 0x18);
    if ((uVar2 & 1) != 0) {
      __s1 = param_1;
      if (param_1[0x17] < '\0') {
        __s1 = *(char **)param_1;
      }
      iVar1 = strcmp(__s1,"localhost");
      if (iVar1 == 0) goto LAB_007e96e4;
    }
    uVar2 = FUN_007ea56c(param_1 + 0x18);
    uVar3 = 3;
    if ((uVar2 & 1) == 0) {
      uVar3 = 4;
    }
  }
  else {
LAB_007e96e4:
    uVar3 = 2;
  }
  return uVar3;
}


// ===== 007e973c  FUN_007e973c =====

bool FUN_007e973c(undefined8 *param_1,undefined8 *param_2)

{
  size_t __n;
  size_t sVar1;
  undefined8 *__s1;
  undefined8 *__s2;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  
  uVar5 = FUN_007e9cb8(param_1 + 3,param_2 + 3);
  if ((uVar5 & 1) != 0) {
    uVar5 = FUN_007ea478(param_1 + 3);
    if (((uVar5 & 1) == 0) && (uVar5 = FUN_007e9ca4(param_1 + 3), (uVar5 & 1) == 0)) {
LAB_007e97e0:
      return *(short *)(param_1 + 7) == *(short *)(param_2 + 7);
    }
    bVar2 = *(byte *)((long)param_1 + 0x17);
    bVar3 = *(byte *)((long)param_2 + 0x17);
    __n = param_1[1];
    if (-1 < (char)bVar2) {
      __n = (ulong)bVar2;
    }
    sVar1 = param_2[1];
    if (-1 < (char)bVar3) {
      sVar1 = (ulong)bVar3;
    }
    if (__n == sVar1) {
      __s1 = (undefined8 *)*param_1;
      if (-1 < (char)bVar2) {
        __s1 = param_1;
      }
      __s2 = (undefined8 *)*param_2;
      if (-1 < (char)bVar3) {
        __s2 = param_2;
      }
      iVar4 = memcmp(__s1,__s2,__n);
      if (iVar4 == 0) goto LAB_007e97e0;
    }
  }
  return false;
}


// ===== 007e97f4  FUN_007e97f4 =====

ulong FUN_007e97f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *__s1;
  undefined8 *__s2;
  size_t __n;
  bool bVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = FUN_007e9d24(param_1 + 3,param_2 + 3);
  if ((uVar4 & 1) != 0) {
    uVar4 = FUN_007e9d94(param_1 + 3,param_2 + 3);
    return uVar4;
  }
  uVar4 = FUN_007ea478(param_1 + 3);
  if (((uVar4 & 1) != 0) || (uVar4 = FUN_007e9ca4(param_1 + 3), (uVar4 & 1) != 0)) {
    __s1 = (undefined8 *)*param_1;
    uVar4 = param_1[1];
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      __s1 = param_1;
      uVar4 = (ulong)*(byte *)((long)param_1 + 0x17);
    }
    __s2 = (undefined8 *)*param_2;
    uVar2 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      __s2 = param_2;
      uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    if ((uVar4 != uVar2) || (iVar3 = memcmp(__s1,__s2,uVar4), iVar3 != 0)) {
      __n = uVar2;
      if (uVar4 <= uVar2) {
        __n = uVar4;
      }
      iVar3 = memcmp(__s1,__s2,__n);
      bVar1 = iVar3 < 0;
      if (iVar3 == 0 && uVar4 != uVar2) {
        bVar1 = uVar4 < uVar2;
      }
      goto LAB_007e98e8;
    }
  }
  bVar1 = *(ushort *)(param_1 + 7) < *(ushort *)(param_2 + 7);
LAB_007e98e8:
  return (ulong)bVar1;
}


// ===== 007e9900  FUN_007e9900 =====

undefined8 FUN_007e9900(long param_1,short *param_2)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  uVar1 = *(ushort *)(param_1 + 0x38);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x2c] = 0;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  sVar2 = *(short *)(param_1 + 0x20);
  *param_2 = sVar2;
  if (sVar2 == 2) {
    uVar3 = FUN_007e9e58(param_1 + 0x18);
    *(undefined4 *)(param_2 + 2) = uVar3;
    uVar4 = 0x10;
    param_2[1] = uVar1 >> 8 | (ushort)((uVar1 & 0xff00ff) << 8);
  }
  else if (sVar2 == 10) {
    auVar5 = FUN_007e9e44(param_1 + 0x18);
    *(undefined1 (*) [16])(param_2 + 4) = auVar5;
    uVar4 = 0x1c;
    param_2[1] = uVar1 >> 8 | (ushort)((uVar1 & 0xff00ff) << 8);
    *(undefined4 *)(param_2 + 0xc) = uVar3;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


// ===== 007e99a0  FUN_007e99a0 =====

undefined8 FUN_007e99a0(short *param_1,void **param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  undefined **ppuStack_60;
  undefined4 local_58;
  uint local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  ushort local_40;
  undefined4 local_3c;
  undefined1 local_38;
  
  if (param_2 == (void **)0x0) {
    return 0;
  }
  if (*param_1 != 10) {
    if (*param_1 != 2) {
      return 0;
    }
    local_54 = *(uint *)(param_1 + 2);
    uVar1 = param_1[1];
    ppuStack_60 = &PTR_FUN_00d385d8;
    local_58 = 2;
    local_40 = uVar1 >> 8 | (ushort)((uVar1 & 0xff00ff) << 8);
    local_78 = (void *)0x0;
    uStack_70 = 0;
    local_68 = 0;
    local_38 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    local_3c = 0;
    if (param_2 != &local_78) {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        FUN_00547f08(param_2,&local_78,0);
        *(undefined4 *)(param_2 + 4) = local_58;
        *(ulong *)((long)param_2 + 0x2c) = CONCAT44(uStack_48,uStack_4c);
        *(ulong *)((long)param_2 + 0x24) = CONCAT44(uStack_50,local_54);
        *(ushort *)(param_2 + 7) = local_40;
        *(undefined1 *)(param_2 + 8) = local_38;
        *(undefined4 *)((long)param_2 + 0x3c) = local_3c;
        if (-1 < local_68) {
          return 1;
        }
        operator_delete(local_78);
        return 1;
      }
      param_2[1] = (void *)0x0;
      *param_2 = (void *)0x0;
      param_2[2] = (void *)0x0;
    }
    *(undefined4 *)(param_2 + 4) = 2;
    *(ushort *)(param_2 + 7) = uVar1 >> 8 | (ushort)((uVar1 & 0xff00ff) << 8);
    *(undefined8 *)((long)param_2 + 0x2c) = 0;
    *(ulong *)((long)param_2 + 0x24) = (ulong)local_54;
    *(undefined1 *)(param_2 + 8) = 0;
    *(undefined4 *)((long)param_2 + 0x3c) = 0;
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 4);
  ppuStack_60 = &PTR_FUN_00d385d8;
  uVar1 = param_1[1];
  local_78 = (void *)0x0;
  uStack_70 = 0;
  local_40 = uVar1 >> 8 | (ushort)((uVar1 & 0xff00ff) << 8);
  local_68 = 0;
  local_38 = 0;
  local_58 = 10;
  uStack_4c = (undefined4)uVar3;
  uStack_48 = (undefined4)((ulong)uVar3 >> 0x20);
  local_54 = (uint)uVar2;
  uStack_50 = (undefined4)((ulong)uVar2 >> 0x20);
  local_3c = 0;
  if (param_2 != &local_78) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      FUN_00547f08(param_2,&local_78,0);
      *(undefined4 *)((long)param_2 + 0x3c) = local_3c;
      *(undefined4 *)(param_2 + 4) = local_58;
      *(ulong *)((long)param_2 + 0x2c) = CONCAT44(uStack_48,uStack_4c);
      *(ulong *)((long)param_2 + 0x24) = CONCAT44(uStack_50,local_54);
      *(ushort *)(param_2 + 7) = local_40;
      *(undefined1 *)(param_2 + 8) = local_38;
      if (local_68 < 0) {
        operator_delete(local_78);
      }
      goto LAB_007e9ae4;
    }
    param_2[1] = (void *)0x0;
    *param_2 = (void *)0x0;
    param_2[2] = (void *)0x0;
  }
  *(undefined4 *)((long)param_2 + 0x3c) = 0;
  *(undefined4 *)(param_2 + 4) = 10;
  *(undefined8 *)((long)param_2 + 0x2c) = uVar3;
  *(undefined8 *)((long)param_2 + 0x24) = uVar2;
  *(ushort *)(param_2 + 7) = uVar1 >> 8 | (ushort)((uVar1 & 0xff00ff) << 8);
  *(undefined1 *)(param_2 + 8) = 0;
LAB_007e9ae4:
  *(undefined4 *)((long)param_2 + 0x3c) = *(undefined4 *)(param_1 + 0xc);
  return 1;
}


// ===== 007e9bb8  FUN_007e9bb8 =====

void FUN_007e9bb8(undefined8 *param_1,int param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_FUN_00d385d8;
  if (param_2 == 10) {
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 10;
    *(undefined8 *)((long)param_1 + 0x2c) = 0;
    *(undefined8 *)((long)param_1 + 0x24) = 0;
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
    *(undefined2 *)(param_1 + 7) = 0;
    return;
  }
  if (param_2 == 2) {
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 2;
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
    *(undefined2 *)(param_1 + 7) = 0;
    *(undefined8 *)((long)param_1 + 0x2c) = 0;
    *(undefined8 *)((long)param_1 + 0x24) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  return;
}


// ===== 007e9c3c  FUN_007e9c3c =====

void FUN_007e9c3c(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 007e9c48  FUN_007e9c48 =====

uint FUN_007e9c48(long param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 8) == 2) {
    uVar1 = (*(uint *)(param_1 + 0xc) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0xc) & 0xff00ff) << 8;
    return uVar1 >> 0x10 | uVar1 << 0x10;
  }
  return 0;
}


// ===== 007e9c6c  FUN_007e9c6c =====

undefined4 FUN_007e9c6c(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x28;
  if (*(int *)(param_1 + 8) != 10) {
    uVar2 = 0;
  }
  uVar1 = 0x14;
  if (*(int *)(param_1 + 8) != 2) {
    uVar1 = uVar2;
  }
  return uVar1;
}


// ===== 007e9c90  FUN_007e9c90 =====

bool FUN_007e9c90(long param_1)

{
  return *(int *)(param_1 + 8) == 0;
}


// ===== 007e9ca4  FUN_007e9ca4 =====

bool FUN_007e9ca4(long param_1)

{
  return *(int *)(param_1 + 8) == 0;
}


// ===== 007e9cb8  FUN_007e9cb8 =====

bool FUN_007e9cb8(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == *(int *)(param_2 + 8)) {
    if (iVar1 == 0) {
      return true;
    }
    if (iVar1 == 10) {
      return *(long *)(param_1 + 0xc) == *(long *)(param_2 + 0xc) &&
             *(long *)(param_1 + 0x14) == *(long *)(param_2 + 0x14);
    }
    if (iVar1 == 2) {
      return *(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc);
    }
  }
  return false;
}


// ===== 007e9d24  FUN_007e9d24 =====

byte FUN_007e9d24(long param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != *(int *)(param_2 + 8)) {
    return 1;
  }
  if (iVar1 != 0) {
    if (iVar1 == 10) {
      bVar2 = false;
      if (*(long *)(param_1 + 0xc) == *(long *)(param_2 + 0xc)) {
        bVar2 = *(long *)(param_1 + 0x14) == *(long *)(param_2 + 0x14);
      }
    }
    else {
      if (iVar1 != 2) {
        return 1;
      }
      bVar2 = *(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc);
    }
    return bVar2 ^ 1;
  }
  return 0;
}


// ===== 007e9d94  FUN_007e9d94 =====

uint FUN_007e9d94(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == *(int *)(param_2 + 8)) {
    if (iVar1 == 10) {
      uVar5 = (*(ulong *)(param_1 + 0xc) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(param_1 + 0xc) & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar5 = (*(ulong *)(param_2 + 0xc) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(param_2 + 0xc) & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      if (uVar4 == uVar5) {
        uVar5 = (*(ulong *)(param_1 + 0x14) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(param_1 + 0x14) & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar5 >> 0x20 | uVar5 << 0x20;
        uVar5 = (*(ulong *)(param_2 + 0x14) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(param_2 + 0x14) & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
        if (uVar4 == uVar5) {
          return 0;
        }
      }
      uVar2 = 0;
      if (uVar4 < uVar5) {
        uVar2 = 0xffffffff;
      }
      return uVar2 >> 0x1f;
    }
    if (iVar1 == 2) {
      uVar2 = (*(uint *)(param_1 + 0xc) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 0xc) & 0xff00ff) << 8;
      uVar3 = (*(uint *)(param_2 + 0xc) & 0xff00ff00) >> 8 |
              (*(uint *)(param_2 + 0xc) & 0xff00ff) << 8;
      return (uint)((uVar2 >> 0x10 | uVar2 << 0x10) < (uVar3 >> 0x10 | uVar3 << 0x10));
    }
  }
  else if ((iVar1 == 0) || ((iVar1 == 2 && (*(int *)(param_2 + 8) == 10)))) {
    return 1;
  }
  return 0;
}


// ===== 007e9e44  FUN_007e9e44 =====

undefined1  [16] FUN_007e9e44(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0xc);
}


// ===== 007e9e58  FUN_007e9e58 =====

undefined4 FUN_007e9e58(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


// ===== 007e9e64  FUN_007e9e64 =====

void FUN_007e9e64(undefined8 *param_1,long param_2)

{
  long lVar1;
  char *pcVar2;
  char local_60 [56];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*(uint *)(param_2 + 8) | 8) == 10) {
    local_60[0x26] = '\0';
    local_60[0x27] = '\0';
    local_60[0x28] = '\0';
    local_60[0x29] = '\0';
    local_60[0x2a] = '\0';
    local_60[0x2b] = '\0';
    local_60[0x2c] = '\0';
    local_60[0x2d] = '\0';
    local_60[0x20] = '\0';
    local_60[0x21] = '\0';
    local_60[0x22] = '\0';
    local_60[0x23] = '\0';
    local_60[0x24] = '\0';
    local_60[0x25] = '\0';
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
    pcVar2 = inet_ntop(*(uint *)(param_2 + 8),(void *)(param_2 + 0xc),local_60,0x2e);
    if (pcVar2 == (char *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else {
      FUN_005d3510(param_1,local_60);
    }
    if (*(long *)(lVar1 + 0x28) != local_28) {
LAB_007e9f14:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    if (*(long *)(lVar1 + 0x28) != local_28) goto LAB_007e9f14;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// ===== 007e9f18  FUN_007e9f18 =====

void FUN_007e9f18(char *param_1,long param_2)

{
  size_t __maxlen;
  byte bVar1;
  char cVar2;
  long lVar3;
  undefined1 *puVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 **ppuVar13;
  undefined1 *puVar14;
  ulong uVar15;
  undefined1 *puVar16;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined8 local_90;
  char local_80 [56];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(int *)(param_2 + 8) == 10) {
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    FUN_0054774c(param_1,0x16,0x18,0,0,0,0);
    cVar2 = param_1[0x17];
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    pcVar6 = *(char **)param_1;
    if (-1 < cVar2) {
      pcVar6 = param_1;
    }
    pcVar6[8] = '\0';
    pcVar6[9] = '\0';
    pcVar6[10] = '\0';
    pcVar6[0xb] = '\0';
    pcVar6[0xc] = '\0';
    pcVar6[0xd] = '\0';
    pcVar6[0xe] = '\0';
    pcVar6[0xf] = '\0';
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6[4] = '\0';
    pcVar6[5] = '\0';
    pcVar6[6] = '\0';
    pcVar6[7] = '\0';
    pcVar6[0x18] = '\0';
    pcVar6[0x19] = '\0';
    pcVar6[0x1a] = '\0';
    pcVar6[0x1b] = '\0';
    pcVar6[0x1c] = '\0';
    pcVar6[0x1d] = '\0';
    pcVar6[0x1e] = '\0';
    pcVar6[0x1f] = '\0';
    pcVar6[0x10] = '\0';
    pcVar6[0x11] = '\0';
    pcVar6[0x12] = '\0';
    pcVar6[0x13] = '\0';
    pcVar6[0x14] = '\0';
    pcVar6[0x15] = '\0';
    pcVar6[0x16] = '\0';
    pcVar6[0x17] = '\0';
    pcVar6[0x26] = '\0';
    pcVar6[0x27] = '\0';
    pcVar6[0x28] = '\0';
    pcVar6[0x29] = '\0';
    pcVar6[0x2a] = '\0';
    pcVar6[0x2b] = '\0';
    pcVar6[0x2c] = '\0';
    pcVar6[0x2d] = '\0';
    pcVar6[0x1e] = '\0';
    pcVar6[0x1f] = '\0';
    pcVar6[0x20] = '\0';
    pcVar6[0x21] = '\0';
    pcVar6[0x22] = '\0';
    pcVar6[0x23] = '\0';
    pcVar6[0x24] = '\0';
    pcVar6[0x25] = '\0';
    if (cVar2 < '\0') {
      param_1[8] = '.';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
    }
    else {
      param_1[0x17] = '.';
    }
    pcVar6[0x2e] = '\0';
    uVar11 = *(undefined8 *)(param_2 + 0xc);
    bVar1 = param_1[0x17];
    uVar10 = (uint)uVar11;
    __maxlen = *(size_t *)(param_1 + 8);
    if (-1 < (char)bVar1) {
      __maxlen = (ulong)bVar1;
    }
    pcVar6 = *(char **)param_1;
    if (-1 < (char)bVar1) {
      pcVar6 = param_1;
    }
    iVar5 = snprintf(pcVar6,__maxlen,"%x:%x:%x:x:x:x:x:x",
                     (ulong)(((uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8) & 0xffff),
                     (ulong)((uint)((ulong)uVar11 >> 8) & 0xff00 | uVar10 >> 0x18),
                     (ulong)((uint)((ulong)uVar11 >> 0x18) & 0xff00 |
                            (uint)((ulong)uVar11 >> 0x28) & 0xff));
    uVar12 = (ulong)param_1[0x17];
    uVar15 = (ulong)iVar5;
    if ((long)uVar12 < 0) {
      uVar12 = *(ulong *)(param_1 + 8);
      if (uVar12 < uVar15) {
        uVar8 = *(ulong *)(param_1 + 0x10) >> 0x38;
        lVar7 = (*(ulong *)(param_1 + 0x10) & 0x7fffffffffffffff) - 1;
        goto LAB_007ea134;
      }
      pcVar6 = *(char **)param_1;
LAB_007ea1a8:
      *(ulong *)(param_1 + 8) = uVar15;
      param_1 = pcVar6;
    }
    else if (uVar12 < uVar15) {
      lVar7 = 0x16;
      uVar8 = uVar12 & 0xffffffff;
LAB_007ea134:
      if (lVar7 - uVar12 < uVar15 - uVar12) {
        FUN_0054774c(param_1,lVar7,uVar15 - lVar7,uVar12,uVar12,0,0);
        uVar8 = (ulong)(byte)param_1[0x17];
        *(ulong *)(param_1 + 8) = uVar12;
      }
      pcVar6 = *(char **)param_1;
      if ((uVar8 & 0x80) == 0) {
        pcVar6 = param_1;
      }
      memset(pcVar6 + uVar12,0,uVar15 - uVar12);
      if (param_1[0x17] < '\0') goto LAB_007ea1a8;
      param_1[0x17] = (byte)iVar5 & 0x7f;
      param_1 = pcVar6;
    }
    else {
      param_1[0x17] = (byte)iVar5;
    }
    param_1[uVar15] = '\0';
  }
  else {
    if (*(int *)(param_2 + 8) != 2) {
      if (*(long *)(lVar3 + 0x28) == local_48) {
        param_1[0] = '\0';
        param_1[1] = '\0';
        param_1[2] = '\0';
        param_1[3] = '\0';
        param_1[4] = '\0';
        param_1[5] = '\0';
        param_1[6] = '\0';
        param_1[7] = '\0';
        param_1[8] = '\0';
        param_1[9] = '\0';
        param_1[10] = '\0';
        param_1[0xb] = '\0';
        param_1[0xc] = '\0';
        param_1[0xd] = '\0';
        param_1[0xe] = '\0';
        param_1[0xf] = '\0';
        param_1[0x10] = '\0';
        param_1[0x11] = '\0';
        param_1[0x12] = '\0';
        param_1[0x13] = '\0';
        param_1[0x14] = '\0';
        param_1[0x15] = '\0';
        param_1[0x16] = '\0';
        param_1[0x17] = '\0';
        return;
      }
      goto LAB_007ea29c;
    }
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    local_80[0x26] = '\0';
    local_80[0x27] = '\0';
    local_80[0x28] = '\0';
    local_80[0x29] = '\0';
    local_80[0x2a] = '\0';
    local_80[0x2b] = '\0';
    local_80[0x2c] = '\0';
    local_80[0x2d] = '\0';
    local_80[0x20] = '\0';
    local_80[0x21] = '\0';
    local_80[0x22] = '\0';
    local_80[0x23] = '\0';
    local_80[0x24] = '\0';
    local_80[0x25] = '\0';
    local_80[8] = '\0';
    local_80[9] = '\0';
    local_80[10] = '\0';
    local_80[0xb] = '\0';
    local_80[0xc] = '\0';
    local_80[0xd] = '\0';
    local_80[0xe] = '\0';
    local_80[0xf] = '\0';
    local_80[0] = '\0';
    local_80[1] = '\0';
    local_80[2] = '\0';
    local_80[3] = '\0';
    local_80[4] = '\0';
    local_80[5] = '\0';
    local_80[6] = '\0';
    local_80[7] = '\0';
    local_80[0x18] = '\0';
    local_80[0x19] = '\0';
    local_80[0x1a] = '\0';
    local_80[0x1b] = '\0';
    local_80[0x1c] = '\0';
    local_80[0x1d] = '\0';
    local_80[0x1e] = '\0';
    local_80[0x1f] = '\0';
    local_80[0x10] = '\0';
    local_80[0x11] = '\0';
    local_80[0x12] = '\0';
    local_80[0x13] = '\0';
    local_80[0x14] = '\0';
    local_80[0x15] = '\0';
    local_80[0x16] = '\0';
    local_80[0x17] = '\0';
    pcVar6 = inet_ntop(2,(void *)(param_2 + 0xc),local_80,0x2e);
    if (pcVar6 == (char *)0x0) {
      puVar9 = (undefined1 *)0x0;
      local_a0 = (undefined1 *)0x0;
      puStack_98 = (undefined1 *)0x0;
      local_90 = (undefined1 *)0x0;
    }
    else {
      FUN_005d3510(&local_a0,local_80);
      puVar9 = (undefined1 *)((ulong)local_90 >> 0x38);
    }
    ppuVar13 = (undefined1 **)local_a0;
    puVar16 = puStack_98;
    if (-1 < (char)puVar9) {
      ppuVar13 = &local_a0;
      puVar16 = puVar9;
    }
    if (puVar16 != (undefined1 *)0x0) {
      do {
        if (puVar16 == (undefined1 *)0x0) goto LAB_007ea07c;
        puVar4 = puVar16 + -1;
        puVar16 = puVar16 + -1;
      } while (*(char *)((long)ppuVar13 + (long)puVar4) != '.');
      if (puVar16 != (undefined1 *)0xffffffffffffffff) {
        puVar4 = puVar16;
        if ((uint)puVar9 >> 7 == 0) {
          if (puVar9 < puVar16) {
            lVar7 = 0x16;
            puVar14 = puVar9;
LAB_007ea1f8:
            if ((ulong)(lVar7 - (long)puVar14) < (ulong)((long)puVar16 - (long)puVar14)) {
              FUN_0054774c(&local_a0,lVar7,(long)puVar16 - lVar7,puVar14,puVar14,0,0);
              puVar9 = (undefined1 *)((ulong)local_90 >> 0x38);
              puStack_98 = puVar14;
            }
            ppuVar13 = (undefined1 **)local_a0;
            if (((ulong)puVar9 & 0x80) == 0) {
              ppuVar13 = &local_a0;
            }
            memset((undefined1 *)((long)ppuVar13 + (long)puVar14),0,(long)puVar16 - (long)puVar14);
            if (-1 < (long)local_90) {
              local_90 = (undefined1 *)
                         (CONCAT17((char)puVar16,(undefined7)local_90) & 0x7fffffffffffffff);
              puVar4 = puStack_98;
            }
          }
          else {
            local_90 = (undefined1 *)CONCAT17((char)puVar16,(undefined7)local_90);
            ppuVar13 = &local_a0;
            puVar4 = puStack_98;
          }
        }
        else {
          ppuVar13 = (undefined1 **)local_a0;
          if (puStack_98 < puVar16) {
            puVar9 = (undefined1 *)((ulong)local_90 >> 0x38);
            lVar7 = ((ulong)local_90 & 0x7fffffffffffffff) - 1;
            puVar14 = puStack_98;
            goto LAB_007ea1f8;
          }
        }
        puStack_98 = puVar4;
        *(undefined1 *)((long)ppuVar13 + (long)puVar16) = 0;
        FUN_00547cac(&local_a0,&DAT_001a1188,2);
        *(undefined1 **)(param_1 + 8) = puStack_98;
        *(undefined1 **)param_1 = local_a0;
        *(undefined1 **)(param_1 + 0x10) = local_90;
        goto LAB_007ea1b0;
      }
    }
LAB_007ea07c:
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    if ((long)local_90 < 0) {
      operator_delete(local_a0);
    }
  }
LAB_007ea1b0:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_007ea29c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ea2a0  FUN_007ea2a0 =====

bool FUN_007ea2a0(long param_1,long param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x1c)) &&
     (iVar1 = *(int *)(param_1 + 8), iVar1 == *(int *)(param_2 + 8))) {
    if (iVar1 == 0) {
      return true;
    }
    if (iVar1 == 10) {
      return *(long *)(param_1 + 0xc) == *(long *)(param_2 + 0xc) &&
             *(long *)(param_1 + 0x14) == *(long *)(param_2 + 0x14);
    }
    if (iVar1 == 2) {
      return *(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc);
    }
  }
  return false;
}


// ===== 007ea31c  FUN_007ea31c =====

void FUN_007ea31c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  return;
}


// ===== 007ea33c  FUN_007ea33c =====

long FUN_007ea33c(long param_1,long param_2)

{
  undefined4 uVar1;
  short *psVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 != 0) {
    psVar2 = *(short **)(param_1 + 0x20);
    if (psVar2 != (short *)0x0) {
      if (*psVar2 == 10) {
        uVar4 = *(undefined8 *)(psVar2 + 8);
        uVar3 = *(undefined8 *)(psVar2 + 4);
        *(undefined4 *)(param_2 + 8) = 10;
        *(undefined8 *)(param_2 + 0x14) = uVar4;
        *(undefined8 *)(param_2 + 0xc) = uVar3;
        return 1;
      }
      if (*psVar2 == 2) {
        uVar1 = *(undefined4 *)(psVar2 + 2);
        *(undefined8 *)(param_2 + 0x10) = 0;
        *(undefined4 *)(param_2 + 0x18) = 0;
        *(undefined4 *)(param_2 + 8) = 2;
        *(undefined4 *)(param_2 + 0xc) = uVar1;
        return 1;
      }
      return 0;
    }
    param_1 = 0;
  }
  return param_1;
}


// ===== 007ea3b0  FUN_007ea3b0 =====

undefined8 FUN_007ea3b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined4 local_34;
  
  if (param_3 != 0) {
    local_34 = 0xaaaaaaaa;
    iVar1 = FUN_007eaaa4(2,param_1,param_2,&local_34);
    if (iVar1 == 0) {
      puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      uVar2 = FUN_007eaaa4(10,param_1,param_2,&local_50);
      if ((int)uVar2 == 0) {
        *(undefined8 *)(param_3 + 8) = 0;
        *(undefined8 *)(param_3 + 0x10) = 0;
        *(undefined4 *)(param_3 + 0x18) = 0;
      }
      else {
        *(undefined4 *)(param_3 + 8) = 10;
        uVar2 = 1;
        *(undefined1 **)(param_3 + 0x14) = puStack_48;
        *(undefined1 **)(param_3 + 0xc) = local_50;
      }
    }
    else {
      uVar2 = 1;
      *(undefined8 *)(param_3 + 0x10) = 0;
      *(undefined4 *)(param_3 + 0x18) = 0;
      *(undefined4 *)(param_3 + 8) = 2;
      *(undefined4 *)(param_3 + 0xc) = local_34;
    }
    return uVar2;
  }
  return 0;
}


// ===== 007ea478  FUN_007ea478 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_007ea478(long param_1)

{
  if (*(int *)(param_1 + 8) == 10) {
    if (*(long *)(param_1 + 0xc) != 0 || *(long *)(param_1 + 0x14) != 0) {
      return *(long *)(param_1 + 0xc) == _DAT_00215744 && *(long *)(param_1 + 0x14) == _UNK_0021574c
      ;
    }
    return true;
  }
  if (*(int *)(param_1 + 8) == 2) {
    return *(int *)(param_1 + 0xc) == 0;
  }
  return false;
}


// ===== 007ea504  FUN_007ea504 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_007ea504(long param_1)

{
  if (*(int *)(param_1 + 8) == 10) {
    return *(long *)(param_1 + 0xc) == _DAT_001f4020 && *(long *)(param_1 + 0x14) == _UNK_001f4028;
  }
  if (*(int *)(param_1 + 8) == 2) {
    return *(char *)(param_1 + 0xc) == '\x7f';
  }
  return false;
}


// ===== 007ea56c  FUN_007ea56c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_007ea56c(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 2) {
    uVar4 = *(uint *)(param_1 + 0xc);
    if (((uVar4 & 0xffff) != 0xfea9) && ((uVar4 & 0xff) != 0x7f)) {
      uVar3 = (uVar4 & 0xff00ff) << 8;
      uVar2 = (uVar4 & 0xff00ff00) >> 8 | uVar3;
      if (((uVar2 & 0xffff) != 0xc0a8) &&
         (((uVar3 & 0xff00) != 0xa00 && ((uVar2 & 0xfff0) != 0xac10)))) goto LAB_007ea644;
    }
    return true;
  }
  if (iVar1 == 10) {
    uVar5 = *(ulong *)(param_1 + 0xc);
    uVar4 = (uint)uVar5;
    if ((uVar5 & 0xc0ff) == 0x80fe) {
      return true;
    }
    if (*(long *)(param_1 + 0xc) == _DAT_001f4020 && *(long *)(param_1 + 0x14) == _UNK_001f4028) {
      return true;
    }
    if ((uVar5 & 0xff) == 0xfd) {
      return true;
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 0xc);
  }
LAB_007ea644:
  return iVar1 == 2 && (uVar4 & 0xc0ff) == 0x4064;
}


// ===== 007ea660  FUN_007ea660 =====

bool FUN_007ea660(long param_1)

{
  if (*(int *)(param_1 + 8) == 10) {
    return (*(ulong *)(param_1 + 0xc) & 0xc0ff) == 0x80fe;
  }
  if (*(int *)(param_1 + 8) == 2) {
    return *(short *)(param_1 + 0xc) == -0x157;
  }
  return false;
}


// ===== 007ea6ac  FUN_007ea6ac =====

void FUN_007ea6ac(undefined8 *param_1,long param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((int)param_3 < 0) {
LAB_007ea6e4:
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = &PTR_FUN_00d385d8;
    *(undefined4 *)(param_1 + 3) = 0;
    return;
  }
  if (*(int *)(param_2 + 8) != 10) {
    if (*(int *)(param_2 + 8) != 2) goto LAB_007ea6e4;
    if (param_3 < 0x20) {
      if (param_3 != 0) {
        uVar3 = -1 << (ulong)(-param_3 & 0x1f);
        *param_1 = &PTR_FUN_00d385d8;
        uVar4 = *(uint *)(param_2 + 0xc);
        uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
        param_1[2] = 0;
        *(undefined4 *)(param_1 + 3) = 0;
        *(undefined4 *)(param_1 + 1) = 2;
        *(uint *)((long)param_1 + 0xc) = uVar4 & (uVar3 >> 0x10 | uVar3 << 0x10);
        return;
      }
      *param_1 = &PTR_FUN_00d385d8;
      uVar2 = 2;
LAB_007ea7cc:
      *(undefined4 *)(param_1 + 1) = uVar2;
      *(undefined8 *)((long)param_1 + 0x14) = 0;
      *(undefined8 *)((long)param_1 + 0xc) = 0;
      return;
    }
    *param_1 = &PTR_FUN_00d385d8;
    uVar2 = 2;
LAB_007ea714:
    uVar9 = *(undefined8 *)(param_2 + 0x14);
    uVar8 = *(undefined8 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 1) = uVar2;
    *(undefined8 *)((long)param_1 + 0x14) = uVar9;
    *(undefined8 *)((long)param_1 + 0xc) = uVar8;
    return;
  }
  if (0x7f < param_3) {
    *param_1 = &PTR_FUN_00d385d8;
    uVar2 = 10;
    goto LAB_007ea714;
  }
  if (param_3 == 0) {
    *param_1 = &PTR_FUN_00d385d8;
    uVar2 = 10;
    goto LAB_007ea7cc;
  }
  uVar1 = param_3 >> 5;
  uVar5 = *(ulong *)(param_2 + 0x14);
  uVar4 = *(uint *)(param_2 + 0xc);
  uVar3 = *(uint *)(param_2 + 0x10);
  uVar7 = (uint)(0xffffffffL << ((ulong)(0x20 - (param_3 & 0x1f)) & 0x3f));
  uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
  uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
  if (uVar1 == 2) {
    uVar6 = (ulong)(uVar7 & (uint)uVar5);
  }
  else {
    if (uVar1 == 1) {
      uVar3 = uVar7 & uVar3;
    }
    else if (uVar1 == 0) {
      uVar3 = 0;
      uVar4 = uVar7 & uVar4;
    }
    uVar6 = uVar5 & 0xffffffff00000000;
    if (0x3f < param_3) {
      uVar6 = uVar5;
    }
    if (uVar1 == 3) {
      uVar6 = uVar6 & 0xffffffff | (ulong)(uVar7 & (uint)(uVar6 >> 0x20)) << 0x20;
      goto LAB_007ea814;
    }
  }
  uVar6 = uVar6 & 0xffffffff;
LAB_007ea814:
  *param_1 = &PTR_FUN_00d385d8;
  *(undefined4 *)(param_1 + 1) = 10;
  *(ulong *)((long)param_1 + 0xc) = CONCAT44(uVar3,uVar4);
  *(ulong *)((long)param_1 + 0x14) = uVar6;
  return;
}


// ===== 007ea83c  FUN_007ea83c =====

int FUN_007ea83c(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 8) == 10) {
    uVar3 = *(ulong *)(param_1 + 0xc);
    if ((int)uVar3 == -1) {
      uVar3 = uVar3 >> 0x20;
      if (uVar3 == 0xffffffff) {
        uVar3 = *(ulong *)(param_1 + 0x14);
        if ((int)uVar3 == -1) {
          uVar3 = uVar3 >> 0x20;
          if (uVar3 == 0xffffffff) {
            return 0x80;
          }
          iVar1 = 0x60;
        }
        else {
          iVar1 = 0x40;
        }
      }
      else {
        iVar1 = 0x20;
      }
      goto LAB_007ea86c;
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 2) {
      return 0;
    }
    uVar3 = (ulong)*(uint *)(param_1 + 0xc);
  }
  iVar1 = 0;
LAB_007ea86c:
  uVar2 = (uint)uVar3;
  if (uVar2 != 0) {
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = uVar2 & -uVar2;
    iVar4 = 0x1f;
    if (uVar2 == 0) {
      iVar4 = 0x20;
    }
    if ((uVar2 & 0xffff) != 0) {
      iVar4 = iVar4 + -0x10;
    }
    if ((uVar2 & 0xff00ff) != 0) {
      iVar4 = iVar4 + -8;
    }
    if ((uVar2 & 0xf0f0f0f) != 0) {
      iVar4 = iVar4 + -4;
    }
    if ((uVar2 & 0x33333333) != 0) {
      iVar4 = iVar4 + -2;
    }
    if ((uVar2 & 0x55555555) != 0) {
      iVar1 = iVar1 + 1;
    }
    iVar1 = (iVar1 - iVar4) + 0x20;
  }
  return iVar1;
}


// ===== 007ea91c  FUN_007ea91c =====

bool FUN_007ea91c(long param_1)

{
  return (*(ulong *)(param_1 + 0x14) & 0xffff000002) == 0xfeff000002;
}


// ===== 007ea944  FUN_007ea944 =====

bool FUN_007ea944(long param_1)

{
  return (*(ulong *)(param_1 + 0xc) & 0xfe) == 0xfc;
}


// ===== 007ea95c  FUN_007ea95c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_007ea95c(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 8) == 2) {
    return 0x1e;
  }
  if (*(int *)(param_1 + 8) == 10) {
    if (*(long *)(param_1 + 0xc) == _DAT_001f4020 && *(long *)(param_1 + 0x14) == _UNK_001f4028) {
      return 0x3c;
    }
    uVar2 = *(ulong *)(param_1 + 0xc);
    if ((uVar2 & 0xfe) == 0xfc) {
      return 0x32;
    }
    if (uVar2 == 0 && (*(ulong *)(param_1 + 0x14) & 0xffffffff) == 0xffff0000) {
      return 0x1e;
    }
    if (((uint)uVar2 & 0xffff) == 0x220) {
      return 0x14;
    }
    if ((uint)uVar2 == 0x120) {
      return 10;
    }
    uVar1 = 1;
    if (((uVar2 & 0xc0ff) != 0xc0fe) &&
       (uVar2 != 0 || (*(ulong *)(param_1 + 0x14) & 0xffffffff) != 0)) {
      uVar1 = 0x28;
      if ((short)uVar2 == -0x1c1) {
        uVar1 = 1;
      }
      return uVar1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 007eaa50  FUN_007eaa50 =====

void FUN_007eaa50(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_00d385d8;
  if (param_2 == 10) {
    uVar1 = 10;
  }
  else {
    if (param_2 != 2) {
      param_1[1] = 0;
      param_1[2] = 0;
      *(undefined4 *)(param_1 + 3) = 0;
      return;
    }
    uVar1 = 2;
  }
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 1) = uVar1;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  return;
}


// ===== 007eaa9c  <EXTERNAL>::inet_ntop =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * inet_ntop(int __af,void *__cp,char *__buf,socklen_t __len)

{
  char *pcVar1;
  
  pcVar1 = inet_ntop(__af,__cp,__buf,__len);
  return pcVar1;
}


// ===== 007eaaa4  FUN_007eaaa4 =====

int FUN_007eaaa4(int param_1,char *param_2,undefined1 *param_3,void *param_4)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  char **ppcVar4;
  char *local_60;
  undefined1 *puStack_58;
  undefined8 local_50;
  
  ppcVar4 = &local_60;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if ((undefined1 *)0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_3 < (undefined1 *)0x17) {
    local_50 = (undefined1 *)CONCAT17((char)param_3,0xaaaaaaaaaaaaaa);
  }
  else {
    uVar1 = ((ulong)param_3 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    ppcVar4 = (char **)operator_new(uVar2);
    local_50 = (undefined1 *)(uVar2 | 0x8000000000000000);
    local_60 = (char *)ppcVar4;
    puStack_58 = param_3;
  }
  if (ppcVar4 <= (char *)((long)ppcVar4 + (long)param_3)) {
    if ((ppcVar4 <= param_2) && (param_2 < (char *)((long)ppcVar4 + (long)param_3))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(ppcVar4,param_2,(size_t)param_3);
    *(char *)((long)ppcVar4 + (long)param_3) = '\0';
    ppcVar4 = (char **)local_60;
    if (-1 < (long)local_50) {
      ppcVar4 = &local_60;
    }
    iVar3 = inet_pton(param_1,(char *)ppcVar4,param_4);
    if ((long)local_50 < 0) {
      operator_delete(local_60);
    }
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 007eabe4  FUN_007eabe4 =====

int FUN_007eabe4(pthread_mutex_t *param_1)

{
  int iVar1;
  undefined1 *local_8;
  
  local_8 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_8);
  pthread_mutexattr_settype((pthread_mutexattr_t *)&local_8,1);
  pthread_mutex_init(param_1,(pthread_mutexattr_t *)&local_8);
  iVar1 = pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_8);
  return iVar1;
}


// ===== 007eac38  <EXTERNAL>::pthread_mutex_destroy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_destroy(__mutex);
  return iVar1;
}


// ===== 007eac40  FUN_007eac40 =====

int FUN_007eac40(undefined8 *param_1,pthread_mutex_t *param_2)

{
  int iVar1;
  
  *param_1 = param_2;
  iVar1 = pthread_mutex_lock(param_2);
  return iVar1;
}


// ===== 007eac54  FUN_007eac54 =====

int FUN_007eac54(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)*param_1);
  return iVar1;
}


// ===== 007eac60  FUN_007eac60 =====

void FUN_007eac60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d385f8;
  param_1[1] = 0;
  param_1[2] = &PTR_FUN_00d38630;
  FUN_007e8a64(param_1 + 3);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x12] = FUN_00433984;
  param_1[0x13] = 0;
  param_1[0xe] = 0;
  FUN_007ebca0(param_1 + 0x14);
  return;
}


// ===== 007eacc0  FUN_007eacc0 =====

void FUN_007eacc0(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  pthread_mutex_t *ppVar4;
  void *pvVar5;
  undefined8 *puVar6;
  
  ppVar4 = (pthread_mutex_t *)param_1[1];
  *param_1 = &PTR_FUN_00d385f8;
  if (ppVar4 != (pthread_mutex_t *)0x0) {
    pthread_mutex_lock(ppVar4);
    ppVar4[1].__align = 0;
    pthread_mutex_unlock(ppVar4);
  }
  FUN_007ebdcc(param_1[0x14]);
  pvVar5 = (void *)param_1[0x14];
  if ((pvVar5 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar5), iVar1 == 1)) {
    operator_delete(pvVar5);
  }
  (*(code *)param_1[0x12])(0,param_1 + 0x10,param_1 + 0x10);
  puVar6 = (undefined8 *)param_1[0xc];
  param_1[2] = &PTR_FUN_00d38630;
  if (puVar6 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)param_1[0xd];
    puVar2 = puVar6;
    if (puVar6 != puVar3) {
      do {
        puVar3 = puVar3 + -4;
        if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        (**(code **)*puVar3)(puVar3);
      } while (puVar3 != puVar6);
      puVar2 = (undefined8 *)param_1[0xc];
    }
    param_1[0xd] = puVar6;
    operator_delete(puVar2);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
    ppVar4 = (pthread_mutex_t *)param_1[1];
  }
  else {
    ppVar4 = (pthread_mutex_t *)param_1[1];
  }
  if ((ppVar4 != (pthread_mutex_t *)0x0) &&
     (iVar1 = FUN_00d0f7a0(0xffffffff,(long)ppVar4 + 0x30), iVar1 == 1)) {
    pthread_mutex_destroy(ppVar4);
    operator_delete(ppVar4);
    return;
  }
  return;
}


// ===== 007eae30  FUN_007eae30 =====

void FUN_007eae30(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)param_1[10];
  *param_1 = &PTR_FUN_00d38630;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[0xb];
    puVar1 = puVar3;
    if (puVar3 != puVar2) {
      do {
        puVar2 = puVar2 + -4;
        if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        (**(code **)*puVar2)(puVar2);
      } while (puVar2 != puVar3);
      puVar1 = (undefined8 *)param_1[10];
    }
    param_1[0xb] = puVar3;
    operator_delete(puVar1);
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 007eaef8  FUN_007eaef8 =====

void FUN_007eaef8(void *param_1)

{
  FUN_007eacc0();
  operator_delete(param_1);
  return;
}


// ===== 007eaf28  FUN_007eaf28 =====

void FUN_007eaf28(long *param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined1 auStack_50 [16];
  code *local_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  (**(code **)(param_3 + 0x10))(1,param_3,auStack_50);
  uStack_38 = *(undefined8 *)(param_3 + 0x18);
  local_40 = *(code **)(param_3 + 0x10);
  *(code **)(param_3 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_3 + 0x18) = 0;
  (**(code **)(*param_1 + 0x18))(param_1,param_2,uVar1,auStack_50);
  (*local_40)(0,auStack_50,auStack_50);
  return;
}


// ===== 007eafc0  FUN_007eafc0 =====

void FUN_007eafc0(undefined1 *param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  pthread_mutex_t *__mutex;
  long lVar3;
  long *plVar4;
  pthread_mutex_t *__mutex_00;
  long *local_f0 [2];
  code *local_e0;
  code *pcStack_d8;
  undefined1 auStack_c8 [24];
  undefined1 *local_b0;
  void *local_a8;
  code *local_a0;
  long lStack_98;
  undefined4 local_60;
  long local_58;
  long lStack_50;
  
  if (*(long *)(param_1 + 8) == 0) {
    __mutex = (pthread_mutex_t *)operator_new(0x38);
    *(undefined8 *)((long)__mutex + 0x30) = 0;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    *(int *)((long)__mutex + 8) = 0;
    *(uint *)((long)__mutex + 0xc) = 0;
    __mutex->__align = 0;
    (__mutex->__data).__list.__prev = (__pthread_internal_list *)0x0;
    *(int *)((long)__mutex + 0x10) = 0;
    *(int *)((long)__mutex + 0x14) = 0;
    __mutex[1].__align = 0;
    (__mutex->__data).__list.__next = (__pthread_internal_list *)0x0;
    pthread_mutexattr_init((pthread_mutexattr_t *)&local_b0);
    pthread_mutex_init(__mutex,(pthread_mutexattr_t *)&local_b0);
    iVar2 = pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_b0);
    lVar3 = FUN_005d6490(iVar2);
    *(undefined4 *)((long)__mutex + 0x30) = 0;
    __mutex[1].__align = lVar3;
    if (__mutex != (pthread_mutex_t *)0x0) {
      FUN_00d0f740(1,(long)__mutex + 0x30);
    }
    __mutex_00 = *(pthread_mutex_t **)(param_1 + 8);
    *(pthread_mutex_t **)(param_1 + 8) = __mutex;
    if ((__mutex_00 != (pthread_mutex_t *)0x0) &&
       (iVar2 = FUN_00d0f7a0(0xffffffff,(long)__mutex_00 + 0x30), iVar2 == 1)) {
      pthread_mutex_destroy(__mutex_00);
      operator_delete(__mutex_00);
    }
    FUN_007e8d84(param_1 + 0x18,param_2);
    (**(code **)(param_4 + 0x10))(1,param_4,&local_b0);
    lStack_98 = *(long *)(param_4 + 0x18);
    local_a0 = *(code **)(param_4 + 0x10);
    *(code **)(param_4 + 0x10) = FUN_00433984;
    *(undefined8 *)(param_4 + 0x18) = 0;
    (**(code **)(param_1 + 0x90))(0,param_1 + 0x80,param_1 + 0x80);
    *(code **)(param_1 + 0x90) = FUN_00433984;
    *(undefined8 *)(param_1 + 0x98) = 0;
    (*local_a0)(1,&local_b0,param_1 + 0x80);
    *(long *)(param_1 + 0x98) = lStack_98;
    *(code **)(param_1 + 0x90) = local_a0;
    local_b0 = param_1;
    FUN_007e8cec(&local_a8,param_2);
    local_58 = *(long *)(param_1 + 0xa0);
    local_60 = param_3;
    if (local_58 != 0) {
      FUN_00d0f740(1);
    }
    lStack_50 = *(long *)(param_1 + 8);
    if (lStack_50 != 0) {
      FUN_00d0f740(1,lStack_50 + 0x30);
    }
    plVar4 = (long *)operator_new(0x68);
    *plVar4 = (long)local_b0;
    FUN_007e8cec(plVar4 + 1,&local_a8);
    lVar1 = lStack_50;
    lVar3 = local_58;
    local_58 = 0;
    lStack_50 = 0;
    *(undefined4 *)(plVar4 + 10) = local_60;
    plVar4[0xc] = lVar1;
    plVar4[0xb] = lVar3;
    if (lStack_98 < 0) {
      operator_delete(local_a8);
    }
    local_e0 = FUN_007eb588;
    pcStack_d8 = FUN_007eb374;
    local_f0[0] = plVar4;
    FUN_0066eef0(auStack_c8,local_f0,"AsyncResolver",0xd,2);
    FUN_0066eb40(auStack_c8);
    (*local_e0)(0,local_f0,local_f0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../rtc_base/async_dns_resolver.cc",199,"!state_",&DAT_001f5fa0);
}


// ===== 007eb204  FUN_007eb204 =====

long FUN_007eb204(long param_1)

{
  return param_1 + 0x10;
}


// ===== 007eb210  FUN_007eb210 =====

undefined8 FUN_007eb210(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x68) != 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x58)) {
    FUN_007e8d84(param_3,param_1 + 8);
    for (lVar1 = *(long *)(param_1 + 0x50); lVar1 != *(long *)(param_1 + 0x58); lVar1 = lVar1 + 0x20
        ) {
      if (param_2 == *(int *)(lVar1 + 8)) {
        FUN_007e8e8c(param_3);
        return 1;
      }
    }
  }
  return 0;
}


// ===== 007eb2a8  FUN_007eb2a8 =====

undefined4 FUN_007eb2a8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}


// ===== 007eb2b4  FUN_007eb2b4 =====

void FUN_007eb2b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)param_1[10];
  *param_1 = &PTR_FUN_00d38630;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[0xb];
    puVar1 = puVar3;
    if (puVar3 != puVar2) {
      do {
        puVar2 = puVar2 + -4;
        if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        (**(code **)*puVar2)(puVar2);
      } while (puVar2 != puVar3);
      puVar1 = (undefined8 *)param_1[10];
    }
    param_1[0xb] = puVar3;
    operator_delete(puVar1);
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 007eb374  FUN_007eb374 =====

void FUN_007eb374(long *param_1)

{
  addrinfo **ppaVar1;
  char *__name;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  addrinfo *__ai;
  addrinfo *paVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 local_d0;
  undefined8 *puStack_c8;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined1 local_a0 [16];
  undefined8 uStack_90;
  sockaddr *local_88;
  char *pcStack_80;
  addrinfo *local_78;
  undefined **local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  addrinfo *local_38;
  
  puVar8 = (undefined8 *)*param_1;
  iVar4 = *(int *)(puVar8 + 10);
  uVar9 = *puVar8;
  local_38 = (addrinfo *)0x0;
  local_a0._4_4_ = iVar4;
  local_a0._0_4_ = 0x400;
  local_78 = (addrinfo *)0x0;
  __name = (char *)puVar8[1];
  if (-1 < *(char *)((long)puVar8 + 0x1f)) {
    __name = (char *)(puVar8 + 1);
  }
  pcStack_80 = (char *)0x0;
  local_88 = (sockaddr *)0x0;
  puStack_c8 = (undefined8 *)0x0;
  local_d0 = 0;
  uStack_90._0_4_ = 0;
  uStack_90._4_4_ = 0;
  local_a0._8_4_ = 0;
  local_a0._12_4_ = 0;
  iVar5 = getaddrinfo(__name,(char *)0x0,(addrinfo *)local_a0,&local_38);
  if (iVar5 == 0) {
    local_c0 = 0;
    puStack_b0 = (undefined8 *)0x0;
    puStack_b8 = (undefined8 *)0x0;
    paVar7 = local_38;
    if (local_38 == (addrinfo *)0x0) {
      __ai = (addrinfo *)0x0;
    }
    else {
      do {
        if ((iVar4 == 0) || (paVar7->ai_family == iVar4)) {
          uStack_54 = 0xaaaaaaaa;
          local_70 = &PTR_FUN_00d385d8;
          local_68 = 0;
          uStack_64 = 0;
          uStack_60 = 0;
          uStack_5c = 0;
          uStack_58 = 0;
          uVar6 = FUN_007ea33c(paVar7,&local_70);
          if ((uVar6 & 1) != 0) {
            if (puStack_b8 < puStack_b0) {
              if (puStack_b8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                          );
              }
              *puStack_b8 = &PTR_FUN_00d385d8;
              *(undefined4 *)(puStack_b8 + 1) = local_68;
              *(ulong *)((long)puStack_b8 + 0x14) = CONCAT44(uStack_58,uStack_5c);
              *(ulong *)((long)puStack_b8 + 0xc) = CONCAT44(uStack_60,uStack_64);
              puStack_b8 = puStack_b8 + 4;
            }
            else {
              puStack_b8 = (undefined8 *)FUN_007eb730(&local_c0,&local_70);
            }
          }
        }
        ppaVar1 = &paVar7->ai_next;
        __ai = local_38;
        paVar7 = *ppaVar1;
      } while (*ppaVar1 != (addrinfo *)0x0);
    }
    puVar10 = puStack_b0;
    puStack_c8 = puStack_b8;
    local_d0 = local_c0;
    freeaddrinfo(__ai);
    iVar5 = 0;
    lVar2 = puVar8[0xb];
    uVar3 = puVar8[0xc];
  }
  else {
    puVar10 = (undefined8 *)0x0;
    lVar2 = puVar8[0xb];
    uVar3 = puVar8[0xc];
  }
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2);
  }
  puVar8 = (undefined8 *)operator_new(0x28);
  *puVar8 = uVar9;
  *(int *)(puVar8 + 1) = iVar5;
  puVar8[3] = puStack_c8;
  puVar8[2] = local_d0;
  puVar8[4] = puVar10;
  local_a0._0_8_ = operator_new(0x30);
  *(long *)local_a0._0_8_ = lVar2;
  *(code **)(local_a0._0_8_ + 0x20) = FUN_007eb960;
  *(code **)(local_a0._0_8_ + 0x28) = FUN_007eb8c8;
  *(undefined8 **)(local_a0._0_8_ + 0x10) = puVar8;
  uStack_90 = FUN_005db390;
  local_88 = (sockaddr *)FUN_005db348;
  FUN_007eb658(uVar3,local_a0);
  (*uStack_90)(0,local_a0,local_a0);
  return;
}


// ===== 007eb588  FUN_007eb588 =====

void FUN_007eb588(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  pthread_mutex_t *__mutex;
  void *pvVar4;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x7eb658);
      (*pcVar1)();
    }
    pvVar3 = (void *)*param_2;
    if (pvVar3 != (void *)0x0) {
      __mutex = *(pthread_mutex_t **)((long)pvVar3 + 0x60);
      if ((__mutex != (pthread_mutex_t *)0x0) &&
         (iVar2 = FUN_00d0f7a0(0xffffffff,(long)__mutex + 0x30), iVar2 == 1)) {
        pthread_mutex_destroy(__mutex);
        operator_delete(__mutex);
      }
      pvVar4 = *(void **)((long)pvVar3 + 0x58);
      if ((pvVar4 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar4), iVar2 == 1)) {
        operator_delete(pvVar4);
      }
      if (*(char *)((long)pvVar3 + 0x1f) < '\0') {
        operator_delete(*(void **)((long)pvVar3 + 8));
      }
      operator_delete(pvVar3);
      return;
    }
  }
  return;
}


// ===== 007eb658  FUN_007eb658 =====

int FUN_007eb658(pthread_mutex_t *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined1 uStack_81;
  undefined1 auStack_80 [16];
  code *local_70;
  undefined8 uStack_68;
  undefined1 uStack_51;
  undefined1 auStack_50 [16];
  code *local_40;
  undefined8 uStack_38;
  
  pthread_mutex_lock(param_1);
  plVar2 = (long *)param_1[1].__align;
  if (plVar2 != (long *)0x0) {
    (**(code **)(param_2 + 0x10))(1,param_2,auStack_80);
    uStack_68 = *(undefined8 *)(param_2 + 0x18);
    local_70 = *(code **)(param_2 + 0x10);
    *(code **)(param_2 + 0x10) = FUN_00433984;
    *(undefined8 *)(param_2 + 0x18) = 0;
    (*local_70)(1,auStack_80,auStack_50);
    uStack_38 = uStack_68;
    local_40 = local_70;
    local_70 = FUN_00433984;
    uStack_68 = 0;
    (**(code **)(*plVar2 + 8))(plVar2,auStack_50,&uStack_51,&uStack_81);
    (*local_40)(0,auStack_50,auStack_50);
    (*local_70)(0,auStack_80,auStack_80);
  }
  iVar1 = pthread_mutex_unlock(param_1);
  return iVar1;
}


// ===== 007eb730  FUN_007eb730 =====

undefined8 * FUN_007eb730(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  
  puVar11 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar11 >> 5) + 1;
  if (uVar1 >> 0x3b == 0) {
    uVar7 = param_1[2] - *param_1;
    uVar9 = (long)uVar7 >> 4;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar7) {
      uVar9 = 0x7ffffffffffffff;
    }
    if (uVar9 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (uVar9 >> 0x3b != 0) goto LAB_007eb8ac;
      pvVar5 = operator_new(uVar9 << 5);
      puVar11 = (undefined8 *)((long)pvVar5 + (long)puVar11);
    }
    if (puVar11 == (undefined8 *)0x0) {
LAB_007eb880:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *puVar11 = &PTR_FUN_00d385d8;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(param_2 + 8);
    uVar12 = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)((long)puVar11 + 0x14) = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)((long)puVar11 + 0xc) = uVar12;
    puVar6 = (undefined8 *)*param_1;
    puVar4 = (undefined8 *)param_1[1];
    puVar3 = (undefined8 *)((long)puVar11 + ((long)puVar6 - (long)puVar4));
    puVar8 = puVar6;
    puVar10 = puVar3;
    if ((long)puVar6 - (long)puVar4 != 0) {
      do {
        if (puVar10 == (undefined8 *)0x0) goto LAB_007eb880;
        *puVar10 = &PTR_FUN_00d385d8;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar8 + 1);
        uVar12 = *(undefined8 *)((long)puVar8 + 0xc);
        puVar2 = puVar8 + 4;
        *(undefined8 *)((long)puVar10 + 0x14) = *(undefined8 *)((long)puVar8 + 0x14);
        *(undefined8 *)((long)puVar10 + 0xc) = uVar12;
        puVar8 = puVar2;
        puVar10 = puVar10 + 4;
      } while (puVar2 != puVar4);
      do {
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        puVar8 = puVar6 + 4;
        (**(code **)*puVar6)();
        puVar6 = puVar8;
      } while (puVar8 != puVar4);
      puVar6 = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar3;
    param_1[1] = (long)(puVar11 + 4);
    param_1[2] = (long)((long)pvVar5 + uVar9 * 0x20);
    if (puVar6 != (undefined8 *)0x0) {
      operator_delete(puVar6);
    }
    return puVar11 + 4;
  }
  FUN_007eb8b0();
LAB_007eb8ac:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 007eb8b0  FUN_007eb8b0 =====

void FUN_007eb8b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 007eb8c8  FUN_007eb8c8 =====

void FUN_007eb8c8(undefined8 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  lVar2 = *plVar3;
  __mutex = *(pthread_mutex_t **)(lVar2 + 8);
  if ((__mutex != (pthread_mutex_t *)0x0) &&
     (iVar1 = FUN_00d0f7a0(0xffffffff,(long)__mutex + 0x30), iVar1 == 1)) {
    pthread_mutex_destroy(__mutex);
    operator_delete(__mutex);
  }
  *(undefined8 *)(lVar2 + 8) = 0;
  if ((long *)(lVar2 + 0x60) != plVar3 + 2) {
    FUN_007eba34(lVar2 + 0x60,plVar3[2],plVar3[3],plVar3[3] - plVar3[2] >> 5);
  }
  *(int *)(lVar2 + 0x78) = (int)plVar3[1];
                    /* WARNING: Could not recover jumptable at 0x007eb95c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x98))(lVar2 + 0x80);
  return;
}


// ===== 007eb960  FUN_007eb960 =====

void FUN_007eb960(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x7eba34);
      (*pcVar1)();
    }
    pvVar4 = (void *)*param_2;
    if (pvVar4 != (void *)0x0) {
      puVar5 = *(undefined8 **)((long)pvVar4 + 0x10);
      if (puVar5 != (undefined8 *)0x0) {
        puVar3 = *(undefined8 **)((long)pvVar4 + 0x18);
        puVar2 = puVar5;
        if (puVar5 != puVar3) {
          do {
            puVar3 = puVar3 + -4;
            if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            (**(code **)*puVar3)(puVar3);
          } while (puVar3 != puVar5);
          puVar2 = *(undefined8 **)((long)pvVar4 + 0x10);
        }
        *(undefined8 **)((long)pvVar4 + 0x18) = puVar5;
        operator_delete(puVar2);
      }
      operator_delete(pvVar4);
      return;
    }
  }
  return;
}


// ===== 007eba34  FUN_007eba34 =====

void FUN_007eba34(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 *extraout_x8;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar6 = param_1[2];
  puVar9 = (undefined8 *)*param_1;
  if (param_4 <= (ulong)((long)(uVar6 - (long)puVar9) >> 5)) {
    puVar7 = (undefined8 *)param_1[1];
    lVar8 = (long)puVar7 - (long)puVar9;
    if ((ulong)(lVar8 >> 5) < param_4) {
      puVar4 = puVar7;
      lVar1 = param_2;
      if (puVar7 != puVar9) {
        lVar1 = param_2 + lVar8;
        puVar9 = (undefined8 *)((long)puVar9 + 0xc);
        puVar7 = (undefined8 *)(param_2 + 0xc);
        do {
          lVar8 = lVar8 + -0x20;
          *(undefined4 *)((long)puVar9 + -4) = *(undefined4 *)((long)puVar7 + -4);
          uVar10 = *puVar7;
          puVar9[1] = puVar7[1];
          *puVar9 = uVar10;
          puVar9 = puVar9 + 4;
          puVar7 = puVar7 + 4;
        } while (lVar8 != 0);
        puVar7 = (undefined8 *)param_1[1];
        puVar4 = puVar7;
      }
      for (; lVar1 != param_3; lVar1 = lVar1 + 0x20) {
        if (puVar4 == (undefined8 *)0x0) goto LAB_007ebc74;
        *puVar4 = &PTR_FUN_00d385d8;
        puVar7 = puVar7 + 4;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(lVar1 + 8);
        uVar10 = *(undefined8 *)(lVar1 + 0xc);
        *(undefined8 *)((long)puVar4 + 0x14) = *(undefined8 *)(lVar1 + 0x14);
        *(undefined8 *)((long)puVar4 + 0xc) = uVar10;
        puVar4 = puVar4 + 4;
      }
      param_1[1] = puVar7;
    }
    else {
      if (param_2 != param_3) {
        do {
          *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(param_2 + 8);
          puVar7 = (undefined8 *)(param_2 + 0x14);
          uVar10 = *(undefined8 *)(param_2 + 0xc);
          param_2 = param_2 + 0x20;
          *(undefined8 *)((long)puVar9 + 0x14) = *puVar7;
          *(undefined8 *)((long)puVar9 + 0xc) = uVar10;
          puVar9 = puVar9 + 4;
        } while (param_2 != param_3);
        puVar7 = (undefined8 *)param_1[1];
      }
      while (puVar9 != puVar7) {
        puVar7 = puVar7 + -4;
        if (puVar7 == (undefined8 *)0x0) goto LAB_007ebc88;
        (**(code **)*puVar7)(puVar7);
      }
      param_1[1] = puVar9;
    }
    return;
  }
  if (puVar9 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)param_1[1];
    puVar4 = puVar9;
    if (puVar9 != puVar7) {
      do {
        puVar7 = puVar7 + -4;
        if (puVar7 == (undefined8 *)0x0) {
LAB_007ebc88:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        (**(code **)*puVar7)(puVar7);
      } while (puVar7 != puVar9);
      puVar4 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar9;
    operator_delete(puVar4);
    uVar6 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_4 >> 0x3b == 0) {
    uVar2 = (long)uVar6 >> 4;
    if ((ulong)((long)uVar6 >> 4) <= param_4) {
      uVar2 = param_4;
    }
    if (0x7fffffffffffffdf < uVar6) {
      uVar2 = 0x7ffffffffffffff;
    }
    if (uVar2 >> 0x3b == 0) {
      puVar9 = (undefined8 *)operator_new(uVar2 * 0x20);
      *param_1 = puVar9;
      param_1[1] = puVar9;
      param_1[2] = puVar9 + uVar2 * 4;
      if (param_2 != param_3) {
        do {
          if (puVar9 == (undefined8 *)0x0) {
LAB_007ebc74:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          uVar3 = *(undefined4 *)(param_2 + 8);
          uVar11 = *(undefined8 *)(param_2 + 0x14);
          uVar10 = *(undefined8 *)(param_2 + 0xc);
          param_2 = param_2 + 0x20;
          *puVar9 = &PTR_FUN_00d385d8;
          *(undefined4 *)(puVar9 + 1) = uVar3;
          *(undefined8 *)((long)puVar9 + 0x14) = uVar11;
          *(undefined8 *)((long)puVar9 + 0xc) = uVar10;
          puVar9 = puVar9 + 4;
        } while (param_2 != param_3);
      }
      param_1[1] = puVar9;
      return;
    }
  }
  FUN_007eb8b0();
  puVar5 = (undefined4 *)operator_new(8);
  *puVar5 = 0;
  *(undefined1 *)(puVar5 + 1) = 1;
  *extraout_x8 = puVar5;
  if (puVar5 != (undefined4 *)0x0) {
    FUN_00d0f740(1,puVar5);
  }
  return;
}


// ===== 007ebca0  FUN_007ebca0 =====

void FUN_007ebca0(undefined8 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)operator_new(8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *param_1 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00d0f740(1,puVar1);
  }
  return;
}


// ===== 007ebcec  FUN_007ebcec =====

void FUN_007ebcec(undefined8 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)operator_new(8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *param_1 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00d0f740(1,puVar1);
  }
  return;
}


// ===== 007ebd38  FUN_007ebd38 =====

void FUN_007ebd38(undefined8 *param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)operator_new(8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = param_2;
  *param_1 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00d0f740(1,puVar1);
  }
  return;
}


// ===== 007ebd84  FUN_007ebd84 =====

void FUN_007ebd84(undefined8 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)operator_new(8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 0;
  *param_1 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00d0f740(1,puVar1);
  }
  return;
}


// ===== 007ebdcc  FUN_007ebdcc =====

void FUN_007ebdcc(long param_1)

{
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


// ===== 007ebdd8  FUN_007ebdd8 =====

void FUN_007ebdd8(long param_1)

{
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}


// ===== 007ebde8  FUN_007ebde8 =====

undefined1 FUN_007ebde8(long param_1)

{
  return *(undefined1 *)(param_1 + 4);
}


// ===== 007ebdf4  FUN_007ebdf4 =====

void FUN_007ebdf4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d38660;
  param_1[1] = 0;
  FUN_0066f1ac(param_1 + 2);
  return;
}


// ===== 007ebe10  FUN_007ebe10 =====

void FUN_007ebe10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d38660;
  FUN_0066f2b0(param_1 + 2);
  return;
}


// ===== 007ebe24  FUN_007ebe24 =====

void FUN_007ebe24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d38660;
  FUN_0066f2b0(param_1 + 2);
  operator_delete(param_1);
  return;
}


// ===== 007ebe60  FUN_007ebe60 =====

undefined8 FUN_007ebe60(long param_1,undefined8 param_2)

{
  FUN_0066f318(param_1 + 0x10,param_2,0x7fffffffffffffff);
  return 1;
}


// ===== 007ebe88  FUN_007ebe88 =====

void FUN_007ebe88(long param_1)

{
  FUN_0066f2dc(param_1 + 0x10);
  return;
}


// ===== 007ebe94  FUN_007ebe94 =====

undefined8 FUN_007ebe94(void)

{
  return 0;
}


// ===== 007ebea0  FUN_007ebea0 =====

void FUN_007ebea0(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = (int)DAT_001f55f8;
  FUN_0083e36c(param_1 + 2,0);
  return;
}


// ===== 007ebed4  FUN_007ebed4 =====

void FUN_007ebed4(undefined8 *param_1,char *param_2)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  undefined4 *puVar4;
  void *pvVar5;
  void *pvVar6;
  undefined4 *puVar7;
  size_t __n;
  void *__dest;
  
  cVar3 = param_2[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (cVar3 == '\x01') {
    puVar4 = (undefined4 *)operator_new(4);
    if (puVar4 == (undefined4 *)0x0) goto LAB_007ec048;
    *param_1 = puVar4;
    puVar7 = puVar4 + 1;
    *puVar4 = 2;
    param_1[1] = puVar7;
    param_1[2] = puVar7;
  }
  else {
    puVar4 = (undefined4 *)0x0;
    puVar7 = (undefined4 *)0x0;
  }
  if (param_2[2] == '\x01') {
    puVar4 = (undefined4 *)((long)puVar7 - (long)puVar4);
    uVar1 = ((long)puVar4 >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d348c();
    }
    uVar2 = (ulong)puVar4 >> 1;
    if ((ulong)puVar4 >> 1 <= uVar1) {
      uVar2 = uVar1;
    }
    if ((undefined4 *)0x7ffffffffffffffb < puVar4) {
      uVar2 = 0x3fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar5 = operator_new(uVar2 << 2);
      puVar4 = (undefined4 *)((long)pvVar5 + (long)puVar4);
    }
    if (puVar4 == (undefined4 *)0x0) goto LAB_007ec048;
    puVar7 = puVar4 + 1;
    *puVar4 = 1;
    __n = param_1[1] - (long)*param_1;
    __dest = (void *)((long)puVar4 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar6 = (void *)*param_1;
    *param_1 = __dest;
    param_1[1] = puVar7;
    param_1[2] = (void *)((long)pvVar5 + uVar2 * 4);
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
    }
    param_1[1] = puVar7;
  }
  if (*param_2 == '\x01') {
    if (puVar7 < (undefined4 *)param_1[2]) {
      if (puVar7 == (undefined4 *)0x0) goto LAB_007ec048;
      puVar4 = puVar7 + 1;
      *puVar7 = 8;
    }
    else {
      puVar4 = (undefined4 *)FUN_006d13b4(param_1,&DAT_00215754);
    }
    param_1[1] = puVar4;
    if (puVar4 < (undefined4 *)param_1[2]) {
      if (puVar4 == (undefined4 *)0x0) {
LAB_007ec048:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar7 = puVar4 + 1;
      *puVar4 = 7;
    }
    else {
      puVar7 = (undefined4 *)FUN_006d13b4(param_1,&DAT_00215758);
    }
    param_1[1] = puVar7;
  }
  if ((undefined4 *)*param_1 != puVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../api/crypto/crypto_options.cc",0x39,"!crypto_suites.empty()",&DAT_001f5fa0);
}


// ===== 007ec0b4  FUN_007ec0b4 =====

bool FUN_007ec0b4(char *param_1,char *param_2)

{
  int iVar1;
  size_t __n;
  
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     ((param_1[3] == param_2[3] && (param_1[4] == param_2[4])))) {
    __n = *(long *)(param_1 + 0x10) - (long)*(void **)(param_1 + 8);
    if (__n == *(long *)(param_2 + 0x10) - (long)*(void **)(param_2 + 8)) {
      iVar1 = memcmp(*(void **)(param_1 + 8),*(void **)(param_2 + 8),__n);
      return iVar1 == 0;
    }
  }
  return false;
}


// ===== 007ec14c  FUN_007ec14c =====

bool FUN_007ec14c(char *param_1,char *param_2)

{
  int iVar1;
  size_t __n;
  
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     ((param_1[3] == param_2[3] && (param_1[4] == param_2[4])))) {
    __n = *(long *)(param_1 + 0x10) - (long)*(void **)(param_1 + 8);
    if (__n == *(long *)(param_2 + 0x10) - (long)*(void **)(param_2 + 8)) {
      iVar1 = memcmp(*(void **)(param_1 + 8),*(void **)(param_2 + 8),__n);
      return iVar1 != 0;
    }
  }
  return true;
}


// ===== 007ec1e4  FUN_007ec1e4 =====

void FUN_007ec1e4(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  long lVar2;
  long lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  long lVar6;
  undefined2 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *local_70;
  undefined2 *puStack_68;
  undefined1 *local_60;
  undefined2 local_34 [2];
  
  puStack_68 = (undefined2 *)&DAT_aaaaaaaaaaaaaaaa;
  local_70 = (undefined2 *)&DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0083e36c(&local_70,param_2);
  puVar10 = puStack_68;
  if (param_3 == (undefined8 *)0x0) {
    puVar10 = (undefined2 *)param_1[1];
LAB_007ec320:
    puVar7 = (undefined2 *)*param_1;
  }
  else {
    puVar7 = local_70;
    if (local_70 == puStack_68) {
LAB_007ec260:
      puVar11 = puVar7;
      if (puVar7 != puVar10) {
        while (puVar7 = puVar7 + 1, puVar7 != puVar10) {
          lVar2 = param_3[1];
          lVar3 = FUN_007ec7bc(*param_3,lVar2,*puVar7);
          if (lVar3 == lVar2) {
            *puVar11 = *puVar7;
            puVar11 = puVar11 + 1;
          }
        }
      }
    }
    else {
      do {
        lVar2 = param_3[1];
        lVar3 = FUN_007ec7bc(*param_3,lVar2,*puVar7);
        if (lVar3 != lVar2) goto LAB_007ec260;
        puVar7 = puVar7 + 1;
        puVar11 = puVar10;
      } while (puVar7 != puVar10);
    }
    if (puStack_68 < puVar11) {
LAB_007ec614:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:1170: libc++ Hardening assertion __first <= __last failed: vector::erase(first, last) called with invalid range\n"
                );
    }
    puVar10 = puStack_68;
    if (puVar11 != puStack_68) {
      memmove(puVar11,puStack_68,0);
      uVar9 = (ulong)((long)puStack_68 + ((long)puStack_68 << 0x3f) + -2) >> 1;
      uVar8 = (ulong)(((long)puVar11 - (long)puStack_68 << 0x3f) -
                     ((long)puVar11 - (long)puStack_68)) >> 1;
      if (uVar9 <= uVar8) {
        uVar8 = uVar9;
      }
      puVar7 = puStack_68;
      if ((1 < uVar8) && ((((int)puVar11 - (uint)puStack_68 | (uint)puStack_68) & 1) == 0)) {
        uVar8 = uVar8 & 0x7ffffffffffffffe;
        puVar7 = puStack_68 + -uVar8;
        do {
          uVar8 = uVar8 - 2;
        } while (uVar8 != 0);
      }
      do {
        puVar10 = puVar11;
        if (puVar7 == puVar11) goto LAB_007ec354;
        puVar7 = puVar7 + -1;
      } while (puVar7 != (undefined2 *)0x0);
      goto LAB_007ec5bc;
    }
LAB_007ec354:
    puStack_68 = puVar10;
    puVar10 = (undefined2 *)*param_1;
    puVar7 = (undefined2 *)param_1[1];
    if (puVar10 == puVar7) {
LAB_007ec38c:
      puVar11 = puVar10;
      if (puVar10 != puVar7) {
        while (puVar10 = puVar10 + 1, puVar10 != puVar7) {
          lVar2 = param_3[1];
          lVar3 = FUN_007ec7bc(*param_3,lVar2,*puVar10);
          if (lVar3 == lVar2) {
            *puVar11 = *puVar10;
            puVar11 = puVar11 + 1;
          }
        }
      }
    }
    else {
      do {
        lVar2 = param_3[1];
        lVar3 = FUN_007ec7bc(*param_3,lVar2,*puVar10);
        if (lVar3 != lVar2) goto LAB_007ec38c;
        puVar10 = puVar10 + 1;
        puVar11 = puVar7;
      } while (puVar10 != puVar7);
    }
    puVar10 = (undefined2 *)param_1[1];
    if (puVar10 < puVar11) goto LAB_007ec614;
    if (puVar11 != puVar10) {
      memmove(puVar11,puVar10,0);
      puVar7 = (undefined2 *)param_1[1];
      uVar9 = (ulong)((long)puVar7 + ((long)puVar7 << 0x3f) + -2) >> 1;
      uVar8 = (ulong)(((long)puVar11 - (long)puVar7 << 0x3f) - ((long)puVar11 - (long)puVar7)) >> 1;
      if (uVar9 <= uVar8) {
        uVar8 = uVar9;
      }
      if ((1 < uVar8) && ((((int)puVar11 - (uint)puVar7 | (uint)puVar7) & 1) == 0)) {
        uVar8 = uVar8 & 0x7ffffffffffffffe;
        puVar7 = puVar7 + -uVar8;
        do {
          uVar8 = uVar8 - 2;
        } while (uVar8 != 0);
      }
      do {
        puVar10 = puVar11;
        if (puVar7 == puVar11) goto LAB_007ec320;
        puVar7 = puVar7 + -1;
      } while (puVar7 != (undefined2 *)0x0);
      goto LAB_007ec5bc;
    }
    puVar7 = (undefined2 *)*param_1;
  }
  puVar1 = puStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  for (puVar11 = local_70; puVar11 != puVar1; puVar11 = puVar11 + 1) {
    local_34[0] = *puVar11;
    puVar5 = (undefined2 *)FUN_007ec7bc(puVar7,puVar10);
    if (puVar5 == puVar10) {
      puVar5 = (undefined2 *)param_1[1];
      if (puVar5 < (undefined2 *)param_1[2]) {
        if (puVar5 == (undefined2 *)0x0) goto LAB_007ec600;
        puVar4 = puVar5 + 1;
        *puVar5 = local_34[0];
      }
      else {
        puVar4 = (undefined2 *)FUN_005dd418(param_1,local_34);
      }
      param_1[1] = (long)puVar4;
    }
  }
  lVar2 = (long)puVar7 - (long)puVar10;
  puVar11 = puVar7;
  if (lVar2 != 0) {
    do {
      lVar3 = param_1[1];
      local_34[0] = *puVar11;
      lVar6 = FUN_007ec7bc(*param_1,lVar3);
      if (lVar6 == lVar3) {
        puVar1 = (undefined2 *)param_1[1];
        if (puVar1 < (undefined2 *)param_1[2]) {
          if (puVar1 == (undefined2 *)0x0) {
LAB_007ec600:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puVar5 = puVar1 + 1;
          *puVar1 = local_34[0];
        }
        else {
          puVar5 = (undefined2 *)FUN_005dd418(param_1,local_34);
        }
        param_1[1] = (long)puVar5;
      }
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar10);
  }
  if (puVar7 == (undefined2 *)0x0) {
LAB_007ec558:
    if (local_70 == (undefined2 *)0x0) {
      return;
    }
    uVar9 = (ulong)((long)puStack_68 + ((long)puStack_68 << 0x3f) + -2) >> 1;
    uVar8 = (ulong)(((long)local_70 - (long)puStack_68 << 0x3f) -
                   ((long)local_70 - (long)puStack_68)) >> 1;
    if (uVar9 <= uVar8) {
      uVar8 = uVar9;
    }
    puVar10 = puStack_68;
    if ((1 < uVar8) && ((((int)local_70 - (uint)puStack_68 | (uint)puStack_68) & 1) == 0)) {
      uVar8 = uVar8 & 0x7ffffffffffffffe;
      puVar10 = puStack_68 + -uVar8;
      do {
        uVar8 = uVar8 - 2;
      } while (uVar8 != 0);
    }
    do {
      if (puVar10 == local_70) {
        puStack_68 = local_70;
        operator_delete(local_70);
        return;
      }
      puVar10 = puVar10 + -1;
    } while (puVar10 != (undefined2 *)0x0);
  }
  else {
    uVar8 = (ulong)((lVar2 << 0x3f) - lVar2) >> 1;
    uVar9 = (ulong)((long)puVar10 + ((long)puVar10 << 0x3f) + -2) >> 1;
    if (uVar9 <= uVar8) {
      uVar8 = uVar9;
    }
    if (1 < uVar8) {
      uVar8 = uVar8 & 0x7ffffffffffffffe;
      puVar10 = puVar10 + -uVar8;
      do {
        uVar8 = uVar8 - 2;
      } while (uVar8 != 0);
    }
    do {
      if (puVar10 == puVar7) {
        operator_delete(puVar7);
        goto LAB_007ec558;
      }
      puVar10 = puVar10 + -1;
    } while (puVar10 != (undefined2 *)0x0);
  }
LAB_007ec5bc:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 007ec628  FUN_007ec628 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_007ec628(undefined1 (*param_1) [16],undefined1 (*param_2) [16],short param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
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
  byte bVar29;
  undefined1 auVar30 [16];
  ushort uVar31;
  
  auVar8._2_2_ = param_3;
  auVar8._0_2_ = param_3;
  auVar8._4_2_ = param_3;
  auVar8._6_2_ = param_3;
  auVar8._8_2_ = param_3;
  auVar8._10_2_ = param_3;
  auVar8._12_2_ = param_3;
  auVar8._14_2_ = param_3;
  uVar7 = (long)param_2 - (long)param_1;
  bVar14 = (byte)_DAT_001f4ba0;
  bVar15 = (byte)((ulong)_DAT_001f4ba0 >> 8);
  bVar16 = (byte)((ulong)_DAT_001f4ba0 >> 0x10);
  bVar17 = (byte)((ulong)_DAT_001f4ba0 >> 0x18);
  bVar18 = (byte)((ulong)_DAT_001f4ba0 >> 0x20);
  bVar19 = (byte)((ulong)_DAT_001f4ba0 >> 0x28);
  bVar20 = (byte)((ulong)_DAT_001f4ba0 >> 0x30);
  bVar21 = (byte)((ulong)_DAT_001f4ba0 >> 0x38);
  bVar22 = (byte)_UNK_001f4ba8;
  bVar23 = (byte)((ulong)_UNK_001f4ba8 >> 8);
  bVar24 = (byte)((ulong)_UNK_001f4ba8 >> 0x10);
  bVar25 = (byte)((ulong)_UNK_001f4ba8 >> 0x18);
  bVar26 = (byte)((ulong)_UNK_001f4ba8 >> 0x20);
  bVar27 = (byte)((ulong)_UNK_001f4ba8 >> 0x28);
  bVar28 = (byte)((ulong)_UNK_001f4ba8 >> 0x30);
  bVar29 = (byte)((ulong)_UNK_001f4ba8 >> 0x38);
  pauVar4 = param_1;
  pauVar5 = param_1;
  if (0x3e < uVar7) {
    lVar6 = 0x10;
    do {
      auVar30 = NEON_cmeq(*pauVar4,auVar8,2);
      uVar31 = NEON_umaxv(auVar30,2);
      if ((uVar31 & 1) != 0) {
        lVar6 = 0;
LAB_007ec784:
        auVar13[0] = auVar30[0] & bVar14;
        auVar13[1] = auVar30[1] & bVar15;
        auVar13[2] = auVar30[2] & bVar16;
        auVar13[3] = auVar30[3] & bVar17;
        auVar13[4] = auVar30[4] & bVar18;
        auVar13[5] = auVar30[5] & bVar19;
        auVar13[6] = auVar30[6] & bVar20;
        auVar13[7] = auVar30[7] & bVar21;
        auVar13[8] = auVar30[8] & bVar22;
        auVar13[9] = auVar30[9] & bVar23;
        auVar13[10] = auVar30[10] & bVar24;
        auVar13[0xb] = auVar30[0xb] & bVar25;
        auVar13[0xc] = auVar30[0xc] & bVar26;
        auVar13[0xd] = auVar30[0xd] & bVar27;
        auVar13[0xe] = auVar30[0xe] & bVar28;
        auVar13[0xf] = auVar30[0xf] & bVar29;
LAB_007ec7a0:
        auVar30._2_14_ = auVar13._2_14_;
        auVar30._0_2_ = NEON_addv(auVar13,2);
        uVar1 = (auVar30._0_4_ & 0xaaaaaaaa) >> 1 | (auVar30._0_4_ & 0x55555555) << 1;
        uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        return (undefined1 (*) [16])(*pauVar4 + lVar6 + LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10) * 2);
      }
      auVar30 = NEON_cmeq(pauVar4[1],auVar8,2);
      uVar31 = NEON_umaxv(auVar30,2);
      if ((uVar31 & 1) != 0) goto LAB_007ec784;
      auVar30 = NEON_cmeq(pauVar4[2],auVar8,2);
      uVar31 = NEON_umaxv(auVar30,2);
      if ((uVar31 & 1) != 0) {
        auVar13[0] = auVar30[0] & bVar14;
        auVar13[1] = auVar30[1] & bVar15;
        auVar13[2] = auVar30[2] & bVar16;
        auVar13[3] = auVar30[3] & bVar17;
        auVar13[4] = auVar30[4] & bVar18;
        auVar13[5] = auVar30[5] & bVar19;
        auVar13[6] = auVar30[6] & bVar20;
        auVar13[7] = auVar30[7] & bVar21;
        auVar13[8] = auVar30[8] & bVar22;
        auVar13[9] = auVar30[9] & bVar23;
        auVar13[10] = auVar30[10] & bVar24;
        auVar13[0xb] = auVar30[0xb] & bVar25;
        auVar13[0xc] = auVar30[0xc] & bVar26;
        auVar13[0xd] = auVar30[0xd] & bVar27;
        auVar13[0xe] = auVar30[0xe] & bVar28;
        auVar13[0xf] = auVar30[0xf] & bVar29;
        lVar6 = 0x20;
        goto LAB_007ec7a0;
      }
      auVar30 = NEON_cmeq(pauVar4[3],auVar8,2);
      uVar31 = NEON_umaxv(auVar30,2);
      if ((uVar31 & 1) != 0) {
        auVar13[0] = auVar30[0] & bVar14;
        auVar13[1] = auVar30[1] & bVar15;
        auVar13[2] = auVar30[2] & bVar16;
        auVar13[3] = auVar30[3] & bVar17;
        auVar13[4] = auVar30[4] & bVar18;
        auVar13[5] = auVar30[5] & bVar19;
        auVar13[6] = auVar30[6] & bVar20;
        auVar13[7] = auVar30[7] & bVar21;
        auVar13[8] = auVar30[8] & bVar22;
        auVar13[9] = auVar30[9] & bVar23;
        auVar13[10] = auVar30[10] & bVar24;
        auVar13[0xb] = auVar30[0xb] & bVar25;
        auVar13[0xc] = auVar30[0xc] & bVar26;
        auVar13[0xd] = auVar30[0xd] & bVar27;
        auVar13[0xe] = auVar30[0xe] & bVar28;
        auVar13[0xf] = auVar30[0xf] & bVar29;
        lVar6 = 0x30;
        goto LAB_007ec7a0;
      }
      uVar7 = uVar7 - 0x40;
      pauVar4 = pauVar4 + 4;
      pauVar5 = pauVar5 + 4;
    } while (0x3e < uVar7);
  }
  if (0xe < uVar7) {
    uVar7 = (long)param_2 - (long)pauVar4;
    pauVar5 = pauVar4;
    do {
      auVar30 = NEON_cmeq(*pauVar4,auVar8,2);
      uVar31 = NEON_umaxv(auVar30,2);
      if ((uVar31 & 1) != 0) {
        auVar11[0] = auVar30[0] & bVar14;
        auVar11[1] = auVar30[1] & bVar15;
        auVar11[2] = auVar30[2] & bVar16;
        auVar11[3] = auVar30[3] & bVar17;
        auVar11[4] = auVar30[4] & bVar18;
        auVar11[5] = auVar30[5] & bVar19;
        auVar11[6] = auVar30[6] & bVar20;
        auVar11[7] = auVar30[7] & bVar21;
        auVar11[8] = auVar30[8] & bVar22;
        auVar11[9] = auVar30[9] & bVar23;
        auVar11[10] = auVar30[10] & bVar24;
        auVar11[0xb] = auVar30[0xb] & bVar25;
        auVar11[0xc] = auVar30[0xc] & bVar26;
        auVar11[0xd] = auVar30[0xd] & bVar27;
        auVar11[0xe] = auVar30[0xe] & bVar28;
        auVar11[0xf] = auVar30[0xf] & bVar29;
        auVar12._2_14_ = auVar11._2_14_;
        auVar12._0_2_ = NEON_addv(auVar11,2);
        uVar1 = (auVar12._0_4_ & 0xaaaaaaaa) >> 1 | (auVar12._0_4_ & 0x55555555) << 1;
        uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        return (undefined1 (*) [16])(*pauVar4 + LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10) * 2);
      }
      uVar7 = uVar7 - 0x10;
      pauVar4 = pauVar4 + 1;
      pauVar5 = pauVar5 + 1;
    } while (0xe < uVar7);
  }
  if (param_2 != pauVar4) {
    if (0xe < (ulong)((long)pauVar5 - (long)param_1)) {
      uVar3 = *(undefined8 *)(param_2[-1] + 8);
      auVar2[9] = (char)((ulong)uVar3 >> 8);
      auVar2._0_9_ = *(unkbyte9 *)param_2[-1];
      auVar2[10] = (char)((ulong)uVar3 >> 0x10);
      auVar2[0xb] = (char)((ulong)uVar3 >> 0x18);
      auVar2[0xc] = (char)((ulong)uVar3 >> 0x20);
      auVar2[0xd] = (char)((ulong)uVar3 >> 0x28);
      auVar2[0xe] = (char)((ulong)uVar3 >> 0x30);
      auVar2[0xf] = (char)((ulong)uVar3 >> 0x38);
      auVar8 = NEON_cmeq(auVar2,auVar8,2);
      auVar9[0] = auVar8[0] & bVar14;
      auVar9[1] = auVar8[1] & bVar15;
      auVar9[2] = auVar8[2] & bVar16;
      auVar9[3] = auVar8[3] & bVar17;
      auVar9[4] = auVar8[4] & bVar18;
      auVar9[5] = auVar8[5] & bVar19;
      auVar9[6] = auVar8[6] & bVar20;
      auVar9[7] = auVar8[7] & bVar21;
      auVar9[8] = auVar8[8] & bVar22;
      auVar9[9] = auVar8[9] & bVar23;
      auVar9[10] = auVar8[10] & bVar24;
      auVar9[0xb] = auVar8[0xb] & bVar25;
      auVar9[0xc] = auVar8[0xc] & bVar26;
      auVar9[0xd] = auVar8[0xd] & bVar27;
      auVar9[0xe] = auVar8[0xe] & bVar28;
      auVar9[0xf] = auVar8[0xf] & bVar29;
      auVar10._2_14_ = auVar9._2_14_;
      auVar10._0_2_ = NEON_addv(auVar9,2);
      uVar1 = (auVar10._0_4_ & 0xaaaaaaaa) >> 1 | (auVar10._0_4_ & 0x55555555 | 0x100) << 1;
      uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      return (undefined1 (*) [16])(param_2[-1] + LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10) * 2);
    }
    do {
      if (*(short *)*pauVar4 == param_3) {
        return pauVar4;
      }
      pauVar4 = (undefined1 (*) [16])(*pauVar4 + 2);
    } while (pauVar4 != param_2);
  }
  return pauVar4;
}


// ===== 007ec7bc  FUN_007ec7bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_007ec7bc(undefined1 (*param_1) [16],undefined1 (*param_2) [16],short param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
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
  byte bVar29;
  undefined1 auVar30 [16];
  ushort uVar31;
  
  auVar8._2_2_ = param_3;
  auVar8._0_2_ = param_3;
  auVar8._4_2_ = param_3;
  auVar8._6_2_ = param_3;
  auVar8._8_2_ = param_3;
  auVar8._10_2_ = param_3;
  auVar8._12_2_ = param_3;
  auVar8._14_2_ = param_3;
  uVar7 = (long)param_2 - (long)param_1;
  bVar14 = (byte)_DAT_001f4ba0;
  bVar15 = (byte)((ulong)_DAT_001f4ba0 >> 8);
  bVar16 = (byte)((ulong)_DAT_001f4ba0 >> 0x10);
  bVar17 = (byte)((ulong)_DAT_001f4ba0 >> 0x18);
  bVar18 = (byte)((ulong)_DAT_001f4ba0 >> 0x20);
  bVar19 = (byte)((ulong)_DAT_001f4ba0 >> 0x28);
  bVar20 = (byte)((ulong)_DAT_001f4ba0 >> 0x30);
  bVar21 = (byte)((ulong)_DAT_001f4ba0 >> 0x38);
  bVar22 = (byte)_UNK_001f4ba8;
  bVar23 = (byte)((ulong)_UNK_001f4ba8 >> 8);
  bVar24 = (byte)((ulong)_UNK_001f4ba8 >> 0x10);
  bVar25 = (byte)((ulong)_UNK_001f4ba8 >> 0x18);
  bVar26 = (byte)((ulong)_UNK_001f4ba8 >> 0x20);
  bVar27 = (byte)((ulong)_UNK_001f4ba8 >> 0x28);
  bVar28 = (byte)((ulong)_UNK_001f4ba8 >> 0x30);
  bVar29 = (byte)((ulong)_UNK_001f4ba8 >> 0x38);
  pauVar4 = param_1;
  pauVar5 = param_1;
  if (0x3e < uVar7) {
    lVar6 = 0x10;
    do {
      auVar30 = NEON_cmeq(*pauVar4,auVar8,2);
      uVar31 = NEON_umaxv(auVar30,2);
      if ((uVar31 & 1) != 0) {
        lVar6 = 0;
LAB_007ec918:
        auVar13[0] = auVar30[0] & bVar14;
        auVar13[1] = auVar30[1] & bVar15;
        auVar13[2] = auVar30[2] & bVar16;
        auVar13[3] = auVar30[3] & bVar17;
        auVar13[4] = auVar30[4] & bVar18;
        auVar13[5] = auVar30[5] & bVar19;
        auVar13[6] = auVar30[6] & bVar20;
        auVar13[7] = auVar30[7] & bVar21;
        auVar13[8] = auVar30[8] & bVar22;
        auVar13[9] = auVar30[9] & bVar23;
        auVar13[10] = auVar30[10] & bVar24;
        auVar13[0xb] = auVar30[0xb] & bVar25;
        auVar13[0xc] = auVar30[0xc] & bVar26;
        auVar13[0xd] = auVar30[0xd] & bVar27;
        auVar13[0xe] = auVar30[0xe] & bVar28;
        auVar13[0xf] = auVar30[0xf] & bVar29;
LAB_007ec934:
        auVar30._2_14_ = auVar13._2_14_;
        auVar30._0_2_ = NEON_addv(auVar13,2);
        uVar1 = (auVar30._0_4_ & 0xaaaaaaaa) >> 1 | (auVar30._0_4_ & 0x55555555) << 1;
        uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        return (undefined1 (*) [16])(*pauVar4 + lVar6 + LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10) * 2);
      }
      auVar30 = NEON_cmeq(pauVar4[1],auVar8,2);
      uVar31 = NEON_umaxv(auVar30,2);
      if ((uVar31 & 1) != 0) goto LAB_007ec918;
      auVar30 = NEON_cmeq(pauVar4[2],auVar8,2);
      uVar31 = NEON_umaxv(auVar30,2);
      if ((uVar31 & 1) != 0) {
        auVar13[0] = auVar30[0] & bVar14;
        auVar13[1] = auVar30[1] & bVar15;
        auVar13[2] = auVar30[2] & bVar16;
        auVar13[3] = auVar30[3] & bVar17;
        auVar13[4] = auVar30[4] & bVar18;
        auVar13[5] = auVar30[5] & bVar19;
        auVar13[6] = auVar30[6] & bVar20;
        auVar13[7] = auVar30[7] & bVar21;
        auVar13[8] = auVar30[8] & bVar22;
        auVar13[9] = auVar30[9] & bVar23;
        auVar13[10] = auVar30[10] & bVar24;
        auVar13[0xb] = auVar30[0xb] & bVar25;
        auVar13[0xc] = auVar30[0xc] & bVar26;
        auVar13[0xd] = auVar30[0xd] & bVar27;
        auVar13[0xe] = auVar30[0xe] & bVar28;
        auVar13[0xf] = auVar30[0xf] & bVar29;
        lVar6 = 0x20;
        goto LAB_007ec934;
      }
      auVar30 = NEON_cmeq(pauVar4[3],auVar8,2);
      uVar31 = NEON_umaxv(auVar30,2);
      if ((uVar31 & 1) != 0) {
        auVar13[0] = auVar30[0] & bVar14;
        auVar13[1] = auVar30[1] & bVar15;
        auVar13[2] = auVar30[2] & bVar16;
        auVar13[3] = auVar30[3] & bVar17;
        auVar13[4] = auVar30[4] & bVar18;
        auVar13[5] = auVar30[5] & bVar19;
        auVar13[6] = auVar30[6] & bVar20;
        auVar13[7] = auVar30[7] & bVar21;
        auVar13[8] = auVar30[8] & bVar22;
        auVar13[9] = auVar30[9] & bVar23;
        auVar13[10] = auVar30[10] & bVar24;
        auVar13[0xb] = auVar30[0xb] & bVar25;
        auVar13[0xc] = auVar30[0xc] & bVar26;
        auVar13[0xd] = auVar30[0xd] & bVar27;
        auVar13[0xe] = auVar30[0xe] & bVar28;
        auVar13[0xf] = auVar30[0xf] & bVar29;
        lVar6 = 0x30;
        goto LAB_007ec934;
      }
      uVar7 = uVar7 - 0x40;
      pauVar4 = pauVar4 + 4;
      pauVar5 = pauVar5 + 4;
    } while (0x3e < uVar7);
  }
  if (0xe < uVar7) {
    uVar7 = (long)param_2 - (long)pauVar4;
    pauVar5 = pauVar4;
    do {
      auVar30 = NEON_cmeq(*pauVar4,auVar8,2);
      uVar31 = NEON_umaxv(auVar30,2);
      if ((uVar31 & 1) != 0) {
        auVar11[0] = auVar30[0] & bVar14;
        auVar11[1] = auVar30[1] & bVar15;
        auVar11[2] = auVar30[2] & bVar16;
        auVar11[3] = auVar30[3] & bVar17;
        auVar11[4] = auVar30[4] & bVar18;
        auVar11[5] = auVar30[5] & bVar19;
        auVar11[6] = auVar30[6] & bVar20;
        auVar11[7] = auVar30[7] & bVar21;
        auVar11[8] = auVar30[8] & bVar22;
        auVar11[9] = auVar30[9] & bVar23;
        auVar11[10] = auVar30[10] & bVar24;
        auVar11[0xb] = auVar30[0xb] & bVar25;
        auVar11[0xc] = auVar30[0xc] & bVar26;
        auVar11[0xd] = auVar30[0xd] & bVar27;
        auVar11[0xe] = auVar30[0xe] & bVar28;
        auVar11[0xf] = auVar30[0xf] & bVar29;
        auVar12._2_14_ = auVar11._2_14_;
        auVar12._0_2_ = NEON_addv(auVar11,2);
        uVar1 = (auVar12._0_4_ & 0xaaaaaaaa) >> 1 | (auVar12._0_4_ & 0x55555555) << 1;
        uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        return (undefined1 (*) [16])(*pauVar4 + LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10) * 2);
      }
      uVar7 = uVar7 - 0x10;
      pauVar4 = pauVar4 + 1;
      pauVar5 = pauVar5 + 1;
    } while (0xe < uVar7);
  }
  if (param_2 != pauVar4) {
    if (0xe < (ulong)((long)pauVar5 - (long)param_1)) {
      uVar3 = *(undefined8 *)(param_2[-1] + 8);
      auVar2[9] = (char)((ulong)uVar3 >> 8);
      auVar2._0_9_ = *(unkbyte9 *)param_2[-1];
      auVar2[10] = (char)((ulong)uVar3 >> 0x10);
      auVar2[0xb] = (char)((ulong)uVar3 >> 0x18);
      auVar2[0xc] = (char)((ulong)uVar3 >> 0x20);
      auVar2[0xd] = (char)((ulong)uVar3 >> 0x28);
      auVar2[0xe] = (char)((ulong)uVar3 >> 0x30);
      auVar2[0xf] = (char)((ulong)uVar3 >> 0x38);
      auVar8 = NEON_cmeq(auVar2,auVar8,2);
      auVar9[0] = auVar8[0] & bVar14;
      auVar9[1] = auVar8[1] & bVar15;
      auVar9[2] = auVar8[2] & bVar16;
      auVar9[3] = auVar8[3] & bVar17;
      auVar9[4] = auVar8[4] & bVar18;
      auVar9[5] = auVar8[5] & bVar19;
      auVar9[6] = auVar8[6] & bVar20;
      auVar9[7] = auVar8[7] & bVar21;
      auVar9[8] = auVar8[8] & bVar22;
      auVar9[9] = auVar8[9] & bVar23;
      auVar9[10] = auVar8[10] & bVar24;
      auVar9[0xb] = auVar8[0xb] & bVar25;
      auVar9[0xc] = auVar8[0xc] & bVar26;
      auVar9[0xd] = auVar8[0xd] & bVar27;
      auVar9[0xe] = auVar8[0xe] & bVar28;
      auVar9[0xf] = auVar8[0xf] & bVar29;
      auVar10._2_14_ = auVar9._2_14_;
      auVar10._0_2_ = NEON_addv(auVar9,2);
      uVar1 = (auVar10._0_4_ & 0xaaaaaaaa) >> 1 | (auVar10._0_4_ & 0x55555555 | 0x100) << 1;
      uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      return (undefined1 (*) [16])(param_2[-1] + LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10) * 2);
    }
    do {
      if (*(short *)*pauVar4 == param_3) {
        return pauVar4;
      }
      pauVar4 = (undefined1 (*) [16])(*pauVar4 + 2);
    } while (pauVar4 != param_2);
  }
  return pauVar4;
}


// ===== 007ec950  FUN_007ec950 =====

void * FUN_007ec950(undefined8 param_1,undefined4 param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(400);
  FUN_007ec9ec(pvVar1,param_1,0,0,param_2);
  return pvVar1;
}


// ===== 007ec9a4  thunk_FUN_007ec9b4 =====

void thunk_FUN_007ec9b4(void)

{
  FUN_007ec9b4();
  return;
}


// ===== 007ec9ac  thunk_FUN_007ec9e0 =====

void thunk_FUN_007ec9e0(void)

{
  FUN_007ec9e0();
  return;
}


// ===== 007ec9b4  FUN_007ec9b4 =====

bool FUN_007ec9b4(void)

{
  int iVar1;
  
  iVar1 = FUN_007ef940(0,0);
  return iVar1 != 0;
}


// ===== 007ec9e0  FUN_007ec9e0 =====

undefined8 FUN_007ec9e0(void)

{
  return 1;
}


// ===== 007ec9ec  FUN_007ec9ec =====

void FUN_007ec9ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5)

{
  undefined8 uVar1;
  
  FUN_00841130();
  *param_1 = &PTR_FUN_00d386a0;
  param_1[0x1c] = param_3;
  param_1[0x1d] = param_4;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((long)param_1 + 0xfe) = 0;
  *(uint *)(param_1 + 0x29) = param_5 & 1;
  *(undefined1 *)((long)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_007ebca0(param_1 + 0x31);
  if (param_1[0x1c] != 0) {
    uVar1 = FUN_00831b08();
    param_1[0x25] = uVar1;
    FUN_007f048c();
    return;
  }
  return;
}


// ===== 007eca98  FUN_007eca98 =====

/* WARNING: Removing unreachable block (ram,0x007ecb1c) */
/* WARNING: Removing unreachable block (ram,0x007ecb7c) */

int FUN_007eca98(long *param_1)

{
  int iVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  FUN_007ecc7c();
  FUN_007ebdcc(param_1[0x31]);
  pvVar5 = (void *)param_1[0x31];
  if ((pvVar5 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar5), iVar1 == 1)) {
    operator_delete(pvVar5);
  }
  pvVar5 = (void *)param_1[0x2d];
  if (pvVar5 != (void *)0x0) {
    pvVar4 = (void *)param_1[0x2e];
    pvVar2 = pvVar5;
    if (pvVar5 != pvVar4) {
      do {
        pvVar4 = (void *)((long)pvVar4 + -0x18);
        if (pvVar4 == (void *)0x0) goto LAB_007ecc68;
      } while (pvVar4 != pvVar5);
      pvVar2 = (void *)param_1[0x2d];
    }
    param_1[0x2e] = (long)pvVar5;
    operator_delete(pvVar2);
  }
  pvVar5 = (void *)param_1[0x2a];
  if (pvVar5 != (void *)0x0) {
    pvVar4 = (void *)param_1[0x2b];
    pvVar2 = pvVar5;
    if (pvVar5 != pvVar4) {
      do {
        pvVar4 = (void *)((long)pvVar4 + -0x18);
        if (pvVar4 == (void *)0x0) {
LAB_007ecc68:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      } while (pvVar4 != pvVar5);
      pvVar2 = (void *)param_1[0x2a];
    }
    param_1[0x2b] = (long)pvVar5;
    operator_delete(pvVar2);
  }
  if (*(char *)((long)param_1 + 0x147) < '\0') {
    operator_delete((void *)param_1[0x26]);
  }
  pvVar5 = (void *)param_1[0x23];
  param_1[0x23] = 0;
  if (pvVar5 != (void *)0x0) {
    operator_delete__(pvVar5);
  }
  pvVar5 = (void *)param_1[0x1f];
  param_1[0x1f] = 0;
  if (pvVar5 != (void *)0x0) {
    FUN_00831e2c(pvVar5);
    operator_delete(pvVar5);
  }
  plVar3 = (long *)param_1[0x1b];
  param_1[0x1b] = 0;
  *param_1 = (long)&PTR_FUN_00d3a070;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *param_1 = (long)(PTR_DAT_00d52910 + 0x10);
  FUN_007b5d24(param_1 + 0x17);
  FUN_007b5d24(param_1 + 0x13);
  FUN_007b5d24(param_1 + 0xf);
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 10));
  FUN_007b5d24(param_1 + 6);
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 1));
  return iVar1;
}


// ===== 007ecc7c  FUN_007ecc7c =====

void FUN_007ecc7c(long param_1)

{
  int iVar1;
  ulong uVar2;
  void *pvVar3;
  void *pvVar4;
  void *local_28;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/openssl_adapter.cc",0xe09,"OpenSSLAdapter::Cleanup");
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined2 *)(param_1 + 0x104) = 0;
  *(undefined1 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (*(long *)(param_1 + 0x120) != 0) {
    FUN_007f1358();
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  if (*(long *)(param_1 + 0x128) != 0) {
    FUN_007f04ac();
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  pvVar3 = *(void **)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_00831e2c(pvVar3);
    operator_delete(pvVar3);
  }
  FUN_007ebca0(&local_28);
  FUN_007ebdcc(*(undefined8 *)(param_1 + 0x188));
  pvVar3 = local_28;
  pvVar4 = *(void **)(param_1 + 0x188);
  local_28 = (void *)0x0;
  *(void **)(param_1 + 0x188) = pvVar3;
  if (pvVar4 != (void *)0x0) {
    iVar1 = FUN_00d0f7a0(0xffffffff,pvVar4);
    if (iVar1 == 1) {
      operator_delete(pvVar4);
    }
    pvVar3 = local_28;
    if ((local_28 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,local_28), iVar1 == 1)) {
      operator_delete(pvVar3);
    }
  }
  return;
}


// ===== 007ecd8c  FUN_007ecd8c =====

void FUN_007ecd8c(void *param_1)

{
  FUN_007eca98();
  operator_delete(param_1);
  return;
}


// ===== 007ecdbc  FUN_007ecdbc =====

void FUN_007ecdbc(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x14c) = param_2;
  return;
}


// ===== 007ecdc8  FUN_007ecdc8 =====

void FUN_007ecdc8(long param_1,long *param_2)

{
  if ((long *)(param_1 + 0x150) != param_2) {
    FUN_007eeac8((long *)(param_1 + 0x150),*param_2,param_2[1],
                 (param_2[1] - *param_2 >> 3) * -0x5555555555555555);
    return;
  }
  return;
}


// ===== 007ecdfc  FUN_007ecdfc =====

void FUN_007ecdfc(long param_1,long *param_2)

{
  if ((long *)(param_1 + 0x168) != param_2) {
    FUN_007eeac8((long *)(param_1 + 0x168),*param_2,param_2[1],
                 (param_2[1] - *param_2 >> 3) * -0x5555555555555555);
    return;
  }
  return;
}


// ===== 007ece30  FUN_007ece30 =====

void FUN_007ece30(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x148) = param_2;
  return;
}


// ===== 007ece3c  FUN_007ece3c =====

void FUN_007ece3c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xe8) = param_2;
  return;
}


// ===== 007ece48  FUN_007ece48 =====

void FUN_007ece48(long param_1,undefined8 param_2)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = param_2;
  if (pvVar1 != (void *)0x0) {
    FUN_00831e2c(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 007ece94  FUN_007ece94 =====

void FUN_007ece94(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x100) = param_2;
  return;
}


// ===== 007ecea0  FUN_007ecea0 =====

int FUN_007ecea0(long param_1,long param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  char *local_30;
  undefined8 uStack_28;
  
  if (*(int *)(param_1 + 0xf0) == 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string:2845: libc++ Hardening assertion __n == 0 || __s != nullptr failed: string::assign received nullptr\n"
                );
    }
    FUN_00547b08(param_1 + 0x130);
    iVar1 = (**(code **)(**(long **)(param_1 + 0xd8) + 0x80))();
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0xf0) = 2;
      iVar1 = FUN_007ecfa8(param_1);
      if (iVar1 != 0) {
        local_30 = "BeginSSL";
        uStack_28 = 8;
        uVar2 = FUN_004022fc();
        if ((uVar2 & 1) == 0) {
          FUN_00623bb0(&DAT_00214ea3,"../../rtc_base/openssl_adapter.cc",0xdba,
                       "OpenSSLAdapter::Error(",&local_30,&DAT_001e1644,iVar1,&DAT_001ca519);
        }
        *(undefined4 *)(param_1 + 0xf0) = 4;
        FUN_00841388(param_1,iVar1);
      }
    }
    else {
      iVar1 = 0;
      *(undefined4 *)(param_1 + 0xf0) = 1;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


// ===== 007ecfa8  FUN_007ecfa8 =====

/* WARNING: Type propagation algorithm not settling */

int FUN_007ecfa8(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *******pppppppuVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *******local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined8 *******local_70;
  undefined1 *puStack_68;
  undefined8 local_60;
  
  uVar3 = FUN_00417e08();
  if ((uVar3 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e90,"../../rtc_base/openssl_adapter.cc",0x901,
                 "OpenSSLAdapter::BeginSSL: ",param_1 + 0x130);
  }
  if (*(long *)(param_1 + 0xe0) == 0) {
    lVar5 = FUN_007ed39c(*(undefined4 *)(param_1 + 0x148),0);
    *(long *)(param_1 + 0x128) = lVar5;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x128);
  }
  if ((lVar5 != 0) &&
     ((*(long *)(param_1 + 0xf8) == 0 || (uVar3 = FUN_008322e8(), (uVar3 & 1) != 0)))) {
    uVar9 = *(undefined8 *)(param_1 + 0xd8);
    if (((DAT_00d802f8 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d802f8), iVar2 != 0)) {
      DAT_00d802f0 = FUN_007eee34();
      FUN_0054ff1c(&DAT_00d802f8);
    }
    lVar5 = FUN_0076f70c(DAT_00d802f0);
    if (lVar5 != 0) {
      FUN_0076fe28(lVar5,uVar9);
      lVar4 = FUN_007f0714(*(undefined8 *)(param_1 + 0x128));
      *(long *)(param_1 + 0x120) = lVar4;
      if (lVar4 != 0) {
        FUN_007f2d28(lVar4,0,param_1);
        FUN_007f1f08(*(undefined8 *)(param_1 + 0x120),3);
        if (*(char *)(param_1 + 0x147) < '\0') {
          if (*(long *)(param_1 + 0x138) != 0) {
            lVar4 = *(long *)(param_1 + 0x130);
            goto LAB_007ed0b0;
          }
        }
        else {
          lVar4 = param_1 + 0x130;
          if (*(char *)(param_1 + 0x147) != '\0') {
LAB_007ed0b0:
            FUN_007f2a88(*(undefined8 *)(param_1 + 0x120),lVar4);
            lVar4 = *(long *)(param_1 + 0xe0);
            if (lVar4 != 0) {
              if (*(char *)(param_1 + 0x147) < '\0') {
                lVar4 = FUN_0083183c(lVar4,*(undefined8 *)(param_1 + 0x130),
                                     *(undefined8 *)(param_1 + 0x138));
              }
              else {
                lVar4 = FUN_0083183c(lVar4,param_1 + 0x130);
              }
              if (lVar4 != 0) {
                iVar2 = FUN_007f5aa0(*(undefined8 *)(param_1 + 0x120),lVar4);
                if (iVar2 == 0) {
                  uVar3 = FUN_004022fc();
                  if ((uVar3 & 1) == 0) {
                    FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/openssl_adapter.cc",0xaba,
                                 "Failed to apply SSL session from cache");
                  }
                  goto LAB_007ed294;
                }
                uVar3 = FUN_00417e08();
                if ((uVar3 & 1) == 0) {
                  FUN_00623bb0(&DAT_001f4e90,"../../rtc_base/openssl_adapter.cc",0xad9,
                               "Attempting to resume SSL session to ",param_1 + 0x130);
                }
              }
            }
          }
        }
        FUN_007f2a68(*(undefined8 *)(param_1 + 0x120));
        FUN_007f2a48(*(undefined8 *)(param_1 + 0x120));
        if (*(long *)(param_1 + 0x150) != *(long *)(param_1 + 0x158)) {
          puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
          local_70 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
          local_60 = &DAT_aaaaaaaaaaaaaaaa;
          FUN_007ed4f8(&local_70,param_1 + 0x150);
          if ((long)local_60._7_1_ < 0) {
            pppppppuVar6 = local_70;
            puVar8 = puStack_68;
            if (puStack_68 != (undefined1 *)0x0) goto LAB_007ed174;
LAB_007ed188:
            operator_delete(local_70);
          }
          else if (local_60._7_1_ != '\0') {
            pppppppuVar6 = &local_70;
            puVar8 = (undefined1 *)(long)local_60._7_1_;
LAB_007ed174:
            FUN_007f2b2c(*(undefined8 *)(param_1 + 0x120),pppppppuVar6,(ulong)puVar8 & 0xffffffff);
            if ((long)local_60 < 0) goto LAB_007ed188;
          }
        }
        puVar10 = *(undefined8 **)(param_1 + 0x168);
        puVar1 = *(undefined8 **)(param_1 + 0x170);
        if (puVar10 != puVar1) {
          uVar9 = *(undefined8 *)(param_1 + 0x120);
          iVar2 = 0;
          local_70 = (undefined8 *******)0x0;
          puStack_68 = (undefined1 *)0x0;
          local_60 = (undefined1 *)0x0;
          do {
            if (0 < iVar2) {
              FUN_00547cac(&local_70,&DAT_001ca603,1);
            }
            lVar4 = (long)*(char *)((long)puVar10 + 0x17);
            puVar7 = puVar10;
            if (lVar4 < 0) {
              lVar4 = puVar10[1];
              puVar7 = (undefined8 *)*puVar10;
            }
            FUN_00547cac(&local_70,puVar7,lVar4);
            puVar10 = puVar10 + 3;
            iVar2 = iVar2 + 1;
          } while (puVar10 != puVar1);
          local_80 = local_60;
          puStack_88 = puStack_68;
          local_90 = local_70;
          pppppppuVar6 = local_70;
          if (-1 < (long)local_60) {
            pppppppuVar6 = &local_90;
          }
          thunk_FUN_007f281c(uVar9,pppppppuVar6);
          if ((long)local_80 < 0) {
            operator_delete(local_90);
          }
        }
        FUN_007f1390(*(undefined8 *)(param_1 + 0x120),lVar5,lVar5);
        iVar2 = FUN_007ed6d8(param_1);
        if (iVar2 == 0) {
          return 0;
        }
        goto LAB_007ed2a0;
      }
LAB_007ed294:
      FUN_0076f794(lVar5);
    }
  }
  iVar2 = -1;
LAB_007ed2a0:
  FUN_007ecc7c(param_1);
  return iVar2;
}


// ===== 007ed2f4  FUN_007ed2f4 =====

void FUN_007ed2f4(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 ulong param_5)

{
  ulong uVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = param_2;
  uStack_38 = param_3;
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_00214ea3,"../../rtc_base/openssl_adapter.cc",0xdba,"OpenSSLAdapter::Error(",
                 &local_40,&DAT_001e1644,param_4,&DAT_001ca519);
  }
  *(undefined4 *)(param_1 + 0xf0) = 4;
  FUN_00841388(param_1,param_4);
  if ((param_5 & 1) != 0) {
    FUN_008414cc(param_1,param_1,param_4);
  }
  return;
}


// ===== 007ed39c  FUN_007ed39c =====

long FUN_007ed39c(int param_1,ulong param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_1 == 1) {
    FUN_0083cec0();
    lVar2 = FUN_007efda4();
  }
  else {
    FUN_0083dcd8();
    lVar2 = FUN_007efda4();
  }
  if (lVar2 == 0) {
    uVar1 = FUN_007774b0();
    uVar3 = FUN_004022fc();
    if ((uVar3 & 1) == 0) {
      uVar4 = FUN_00777994(uVar1);
      FUN_00623bb0(&DAT_00215764,"../../rtc_base/openssl_adapter.cc",0x1e9a,
                   "SSL_CTX creation failed: ",0x22,uVar4,"\" (error=",uVar1,0x29);
    }
  }
  else {
    uVar3 = FUN_00836d68();
    if ((uVar3 & 1) != 0) {
      uVar4 = FUN_00836e58();
      FUN_007f1f2c(lVar2,uVar4);
      FUN_008378fc(lVar2,1,FUN_007ee5e4);
      FUN_0083790c(lVar2,4);
      FUN_007f29e0(lVar2,"ALL:!SHA256:!SHA384:!aPSK:!ECDSA+SHA1:!ADH:!LOW:!EXP:!MD5:!3DES");
      if ((param_2 & 1) != 0) {
        FUN_007f21c0(lVar2,1);
        FUN_007f5c48(lVar2,FUN_007ee9f0);
      }
      FUN_007f2da4(lVar2,1);
      return lVar2;
    }
    uVar3 = FUN_004249b0();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/openssl_adapter.cc",0x1eeb,
                   "SSL_CTX creation failed: Failed to load any trusted ssl root certificates.");
    }
    FUN_007f04ac(lVar2);
  }
  return 0;
}


// ===== 007ed4f8  FUN_007ed4f8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007ed4f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *******pppppppuVar7;
  long lVar8;
  undefined8 *******local_68;
  ulong uStack_60;
  undefined8 local_58;
  
  puVar1 = (undefined8 *)*param_2;
  puVar2 = (undefined8 *)param_2[1];
  local_68 = (undefined8 *******)0x0;
  uStack_60 = 0;
  local_58 = 0;
  uVar5 = local_58;
  do {
    if (puVar1 == puVar2) {
      param_1[1] = uStack_60;
      *param_1 = local_68;
      param_1[2] = uVar5;
      return;
    }
    cVar3 = *(char *)((long)puVar1 + 0x17);
    lVar8 = (long)cVar3;
    local_58 = uVar5;
    if (cVar3 < '\0') {
      lVar8 = puVar1[1];
      if (lVar8 - 0x100U < 0xffffffffffffff01) goto LAB_007ed654;
    }
    else if (cVar3 == '\0') {
LAB_007ed654:
      uVar5 = FUN_004249b0();
      if ((uVar5 & 1) == 0) {
        lVar8 = (long)*(char *)((long)puVar1 + 0x17);
        if (lVar8 < 0) {
          lVar8 = puVar1[1];
        }
        FUN_00623bb0(&DAT_001f6d4b,"../../rtc_base/openssl_adapter.cc",0x2083,
                     "OpenSSLAdapter::Error(TransformAlpnProtocols received proto with size ",lVar8,
                     &DAT_001ca519);
      }
      FUN_005d3510(param_1,&DAT_001b3348);
      if (-1 < (long)local_58) {
        return;
      }
      operator_delete(local_68);
      return;
    }
    local_58._7_1_ = (byte)(uVar5 >> 0x38);
    if ((long)uVar5 < 0) {
      uVar5 = (uVar5 & 0x7fffffffffffffff) - 1;
      uVar6 = uStack_60;
      if (uStack_60 == uVar5) goto LAB_007ed5a8;
LAB_007ed5cc:
      uStack_60 = uVar6 + 1;
      pppppppuVar7 = local_68;
    }
    else {
      if (local_58._7_1_ == 0x16) {
        uVar5 = 0x16;
LAB_007ed5a8:
        FUN_0054774c(&local_68,uVar5,1,uVar5,uVar5,0,0);
        uVar6 = uVar5;
        goto LAB_007ed5cc;
      }
      uVar6 = (ulong)local_58._7_1_;
      local_58._0_7_ = (undefined7)uVar5;
      local_58 = CONCAT17(local_58._7_1_ + 1,(undefined7)local_58) & 0x7fffffffffffffff;
      pppppppuVar7 = &local_68;
    }
    *(undefined1 *)((long)pppppppuVar7 + uVar6) = (char)lVar8;
    ((undefined1 *)((long)pppppppuVar7 + uVar6))[1] = 0;
    uVar5 = puVar1[1];
    puVar4 = (undefined8 *)*puVar1;
    if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
      uVar5 = (ulong)*(byte *)((long)puVar1 + 0x17);
      puVar4 = puVar1;
    }
    FUN_00547cac(&local_68,puVar4,uVar5);
    uVar5 = FUN_0044075c();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e90,"../../rtc_base/openssl_adapter.cc",0x20b8,
                   "TransformAlpnProtocols: Adding proto: ",puVar1);
    }
    puVar1 = puVar1 + 3;
    uVar5 = local_58;
  } while( true );
}


// ===== 007ed6d8  FUN_007ed6d8 =====

ulong FUN_007ed6d8(long param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  byte bVar12;
  undefined1 *local_80;
  undefined1 *puStack_78;
  void *local_68;
  long *local_60 [2];
  code *local_50;
  code *pcStack_48;
  undefined1 local_24 [3];
  undefined1 uStack_21;
  
  FUN_007ebca0(&local_68);
  FUN_007ebdcc(*(undefined8 *)(param_1 + 0x188));
  pvVar1 = local_68;
  pvVar7 = *(void **)(param_1 + 0x188);
  local_68 = (void *)0x0;
  *(void **)(param_1 + 0x188) = pvVar1;
  if (pvVar7 != (void *)0x0) {
    iVar2 = FUN_00d0f7a0(0xffffffff,pvVar7);
    if (iVar2 == 1) {
      operator_delete(pvVar7);
    }
    pvVar1 = local_68;
    if ((local_68 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,local_68), iVar2 == 1)) {
      operator_delete(pvVar1);
    }
  }
  FUN_00777808();
  if (*(int *)(param_1 + 0x100) == 0) {
    uVar3 = FUN_007f158c(*(undefined8 *)(param_1 + 0x120));
  }
  else {
    uVar3 = FUN_007f15b8();
  }
  iVar2 = FUN_007f1da8(*(undefined8 *)(param_1 + 0x120),uVar3);
  if (iVar2 != 3) {
    if (iVar2 != 2) {
      if (iVar2 != 0) {
        uVar6 = FUN_004022fc();
        if ((uVar6 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e94,"../../rtc_base/openssl_adapter.cc",0xd7a,
                       "ContinueSSL -- error ",uVar3);
        }
        if (uVar3 == 0) {
          uVar3 = 0xffffffff;
        }
        return (ulong)uVar3;
      }
      lVar10 = (long)*(char *)(param_1 + 0x147);
      uVar8 = *(undefined8 *)(param_1 + 0x120);
      if (lVar10 < 0) {
        lVar11 = *(long *)(param_1 + 0x130);
        lVar10 = *(long *)(param_1 + 0x138);
      }
      else {
        lVar11 = param_1 + 0x130;
      }
      lVar5 = FUN_00837918(uVar8);
      if (lVar5 == 0) {
        bVar12 = 1;
      }
      else {
        bVar12 = *(byte *)(param_1 + 0x180);
      }
      uVar6 = FUN_00836b98(uVar8,lVar11,lVar10);
      if ((((uVar6 & 1) == 0) || ((bVar12 & 1) == 0)) && ((*(byte *)(param_1 + 0x14c) & 1) == 0)) {
        uVar6 = FUN_004249b0();
        if ((uVar6 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/openssl_adapter.cc",0xc6b,
                       "TLS post connection check failed");
        }
        FUN_007ecc7c(param_1);
        return 0xffffffff;
      }
      *(undefined4 *)(param_1 + 0xf0) = 3;
      FUN_008413d8(param_1,param_1);
      return 0;
    }
    uVar6 = FUN_0044075c();
    if ((uVar6 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/openssl_adapter.cc",0xd00," -- error want read");
    }
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    uVar6 = FUN_00830a24(*(undefined8 *)(param_1 + 0x120),&local_80);
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    puVar9 = (undefined1 *)0x7fffffffffffffff;
    if (puStack_78 != (undefined1 *)0x7fffffffffffffff) {
      puVar9 = (undefined1 *)0x8000000000000000;
      if ((long)local_80 * 1000000 != -0x8000000000000000 &&
          puStack_78 != (undefined1 *)0x8000000000000000) {
        puVar9 = puStack_78 + (long)local_80 * 1000000;
      }
    }
    plVar4 = (long *)FUN_007e06bc();
    lVar10 = *(long *)(param_1 + 0x188);
    if (lVar10 != 0) {
      FUN_00d0f740(1,lVar10);
    }
    local_60[0] = (long *)operator_new(0x30);
    *local_60[0] = lVar10;
    local_60[0][4] = (long)FUN_004473ec;
    local_60[0][5] = (long)FUN_007ef28c;
    local_60[0][2] = param_1;
    local_50 = FUN_005db390;
    pcStack_48 = FUN_005db348;
    local_24[0] = 0;
    (**(code **)(*plVar4 + 0x10))(plVar4,local_60,puVar9,local_24,&uStack_21);
    (*local_50)(0,local_60,local_60);
  }
  return 0;
}


// ===== 007ed9a4  FUN_007ed9a4 =====

int FUN_007ed9a4(long param_1,undefined8 param_2,ulong param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  char *local_40;
  undefined8 uStack_38;
  
  FUN_00777808();
  *(undefined1 *)(param_1 + 0x105) = 0;
  if (param_3 >> 0x1f != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../rtc_base/numerics/safe_conversions.h",0x24,
                 "IsValueInRangeForNumericType<Dst>(value)",&DAT_001f5fa0);
  }
  iVar1 = FUN_007f1a50(*(undefined8 *)(param_1 + 0x120),param_2,param_3 & 0xffffffff);
  iVar2 = FUN_007f1da8(*(undefined8 *)(param_1 + 0x120),iVar1);
  *param_4 = iVar2;
  if (iVar2 < 2) {
    if (iVar2 == 0) {
      return iVar1;
    }
    if (iVar2 == 1) {
      FUN_007edb48();
    }
LAB_007eda68:
    if (iVar1 == 0) {
      iVar1 = -1;
    }
    local_40 = "SSL_write";
    uStack_38 = 9;
    uVar3 = FUN_004022fc();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_00214ea3,"../../rtc_base/openssl_adapter.cc",0xdba,"OpenSSLAdapter::Error(",
                   &local_40,&DAT_001e1644,iVar1,&DAT_001ca519);
    }
    *(undefined4 *)(param_1 + 0xf0) = 4;
  }
  else {
    if (iVar2 != 6) {
      if (iVar2 == 3) {
        uVar3 = FUN_00417e08();
        if ((uVar3 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/openssl_adapter.cc",0xf61,
                       " -- error want write");
        }
      }
      else {
        if (iVar2 != 2) goto LAB_007eda68;
        uVar3 = FUN_00417e08();
        if ((uVar3 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/openssl_adapter.cc",0xf39," -- error want read"
                      );
        }
        *(undefined1 *)(param_1 + 0x105) = 1;
      }
    }
    iVar1 = 0xb;
  }
  FUN_00841388(param_1,iVar1);
  return -1;
}


// ===== 007edb48  FUN_007edb48 =====

void FUN_007edb48(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uStack_51;
  char *local_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  char *local_38;
  char **ppcStack_30;
  undefined4 local_24;
  undefined1 *local_8;
  
  local_8 = &DAT_aaaaaaaaaaaaaaaa;
  local_24 = 0xaaaaaaaa;
  do {
    uVar1 = FUN_007776cc(&local_8,&local_24);
    if (((uint)(uVar1 >> 0x18) & 0xff) == 0x10) {
      uVar2 = FUN_004249b0();
      if ((uVar2 & 1) != 0) {
        return;
      }
      local_40 = &uStack_51;
      local_50 = "../../rtc_base/openssl_adapter.cc";
      uStack_48 = 0x553;
      ppcStack_30 = &local_50;
      local_38 = "ERR_LIB_SSL: ";
      FUN_00623bb0(&DAT_0021575c,"../../rtc_base/openssl_adapter.cc",0x553,"ERR_LIB_SSL: ",
                   uVar1 & 0xffffffff,&DAT_001e1644,local_8,&DAT_001ca603,local_24);
      return;
    }
  } while ((int)uVar1 != 0);
  return;
}


// ===== 007edc04  FUN_007edc04 =====

ulong FUN_007edc04(long param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  void *pvVar6;
  uint local_34;
  
  iVar2 = *(int *)(param_1 + 0xf0);
  if (iVar2 - 1U < 2) {
    uVar5 = 0x6b;
LAB_007edc70:
    FUN_00841388(param_1,uVar5);
  }
  else {
    if (iVar2 == 3) {
      local_34 = 0xaaaaaaaa;
      if (*(long *)(param_1 + 0x108) != 0) {
        iVar2 = FUN_007ed9a4(param_1,*(undefined8 *)(param_1 + 0x118),*(long *)(param_1 + 0x108),
                             &local_34);
        if (iVar2 != *(int *)(param_1 + 0x108)) {
          uVar5 = 0xb;
          goto LAB_007edc70;
        }
        *(undefined8 *)(param_1 + 0x108) = 0;
      }
      if (param_3 != 0) {
        uVar3 = FUN_007ed9a4(param_1,param_2,param_3,&local_34);
        if ((local_34 & 0xfffffffe) == 2) {
          uVar3 = FUN_004022fc();
          if ((uVar3 & 1) == 0) {
            FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/openssl_adapter.cc",0x11ca,
                         "SSL_write couldn\'t write to the underlying socket; buffering data.");
          }
          uVar3 = *(ulong *)(param_1 + 0x110);
          pvVar6 = (void *)0x0;
          *(undefined8 *)(param_1 + 0x108) = 0;
          if (uVar3 < param_3) {
            uVar3 = uVar3 + (uVar3 >> 1);
            uVar1 = param_3;
            if (param_3 <= uVar3) {
              uVar1 = uVar3;
            }
            pvVar4 = operator_new__(uVar1);
            pvVar6 = *(void **)(param_1 + 0x118);
            *(void **)(param_1 + 0x118) = pvVar4;
            if (pvVar6 != (void *)0x0) {
              operator_delete__(pvVar6);
              pvVar6 = *(void **)(param_1 + 0x108);
            }
            *(ulong *)(param_1 + 0x110) = uVar1;
          }
          memcpy((void *)(*(long *)(param_1 + 0x118) + (long)pvVar6),param_2,param_3);
          *(ulong *)(param_1 + 0x108) = param_3;
        }
        else {
          param_3 = uVar3 & 0xffffffff;
        }
      }
      goto LAB_007edc78;
    }
    if (iVar2 == 0) {
      uVar3 = FUN_008412e8(param_1,param_2,param_3);
      return uVar3;
    }
  }
  param_3 = 0xffffffff;
LAB_007edc78:
  return param_3 & 0xffffffff;
}


// ===== 007edd88  FUN_007edd88 =====

undefined8 FUN_007edd88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *local_78 [2];
  char cStack_61;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0xd8) + 0x80))();
  if (iVar1 == 2) {
    (**(code **)(**(long **)(param_1 + 0xd8) + 0x18))(local_78);
    uVar2 = FUN_007e973c(param_4,local_78);
    if (cStack_61 < '\0') {
      operator_delete(local_78[0]);
    }
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_007edc04(param_1,param_2,param_3);
      return uVar3;
    }
  }
  FUN_00841388(param_1,0x6b);
  return 0xffffffff;
}


// ===== 007ede48  FUN_007ede48 =====

ulong FUN_007ede48(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  char *local_40;
  undefined8 uStack_38;
  
  iVar1 = *(int *)(param_1 + 0xf0);
  if (iVar1 - 1U < 2) {
    iVar1 = 0x6b;
LAB_007edeb4:
    FUN_00841388(param_1,iVar1);
  }
  else {
    if (iVar1 == 3) {
      if (param_3 == 0) goto LAB_007edebc;
      FUN_00777808();
      *(undefined1 *)(param_1 + 0x104) = 0;
      if (param_3 >> 0x1f != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../rtc_base/numerics/safe_conversions.h",0x24,
                     "IsValueInRangeForNumericType<Dst>(value)",&DAT_001f5fa0);
      }
      uVar2 = FUN_007f16e4(*(undefined8 *)(param_1 + 0x120),param_2,param_3 & 0xffffffff);
      param_3 = uVar2 & 0xffffffff;
      iVar1 = FUN_007f1da8(*(undefined8 *)(param_1 + 0x120),param_3);
      if (iVar1 < 2) {
        if (iVar1 == 0) goto LAB_007edebc;
        if (iVar1 == 1) {
          FUN_007edb48();
        }
LAB_007edf44:
        iVar1 = (int)uVar2;
        if (iVar1 == 0) {
          iVar1 = -1;
        }
        local_40 = "SSL_read";
        uStack_38 = 8;
        uVar2 = FUN_004022fc();
        if ((uVar2 & 1) == 0) {
          FUN_00623bb0(&DAT_00214ea3,"../../rtc_base/openssl_adapter.cc",0xdba,
                       "OpenSSLAdapter::Error(",&local_40,&DAT_001e1644,iVar1,&DAT_001ca519);
        }
        *(undefined4 *)(param_1 + 0xf0) = 4;
      }
      else {
        if (iVar1 != 6) {
          if (iVar1 == 3) {
            *(undefined1 *)(param_1 + 0x104) = 1;
          }
          else if (iVar1 != 2) goto LAB_007edf44;
        }
        iVar1 = 0xb;
      }
      goto LAB_007edeb4;
    }
    if (iVar1 == 0) {
      uVar2 = FUN_00841310(param_1,param_2,param_3);
      return uVar2;
    }
  }
  param_3 = 0xffffffff;
LAB_007edebc:
  return param_3 & 0xffffffff;
}


// ===== 007edfe4  FUN_007edfe4 =====

undefined4
FUN_007edfe4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  void *local_88 [2];
  char cStack_71;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0xd8) + 0x80))();
  if (iVar1 == 2) {
    uVar2 = FUN_007ede48(param_1,param_2,param_3,param_5);
    FUN_008412ac(local_88,param_1);
    FUN_007e8d84(param_4,local_88);
    if (cStack_71 < '\0') {
      operator_delete(local_88[0]);
    }
  }
  else {
    FUN_00841388(param_1,0x6b);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ===== 007ee0a8  FUN_007ee0a8 =====

void FUN_007ee0a8(long param_1)

{
  FUN_007ecc7c();
  *(undefined4 *)(param_1 + 0xf0) = 0;
  FUN_00841360(param_1);
  return;
}


// ===== 007ee0d8  FUN_007ee0d8 =====

ulong FUN_007ee0d8(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0xd8) + 0x80))();
  if ((int)uVar1 == 2) {
    uVar2 = 1;
    if (1 < *(int *)(param_1 + 0xf0) - 1U) {
      uVar2 = 2;
    }
    uVar1 = (ulong)uVar2;
  }
  return uVar1;
}


// ===== 007ee128  FUN_007ee128 =====

ulong FUN_007ee128(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x120);
  if (uVar2 != 0) {
    iVar1 = FUN_007f2cf4();
    uVar2 = (ulong)(iVar1 == 1);
  }
  return uVar2;
}


// ===== 007ee158  FUN_007ee158 =====

void FUN_007ee158(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/openssl_adapter.cc",0x1549,
                 "OpenSSLAdapter::OnConnectEvent");
  }
  if (*(int *)(param_1 + 0xf0) == 1) {
    *(undefined4 *)(param_1 + 0xf0) = 2;
    iVar1 = FUN_007ecfa8(param_1);
    if (iVar1 != 0) {
      FUN_008414cc(param_1,param_2,iVar1);
      return;
    }
    return;
  }
  FUN_008413d8(param_1,param_2);
  return;
}


// ===== 007ee1fc  FUN_007ee1fc =====

void FUN_007ee1fc(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xf0);
  if (iVar1 != 3) {
    if (iVar1 == 2) {
      iVar1 = FUN_007ed6d8(param_1);
      if (iVar1 != 0) {
        FUN_007ed2f4(param_1,"ContinueSSL",0xb,iVar1,1);
        return;
      }
    }
    else if (iVar1 == 0) goto LAB_007ee28c;
    return;
  }
  if (*(char *)(param_1 + 0x105) == '\x01') {
    FUN_00841470(param_1,param_2);
  }
LAB_007ee28c:
  FUN_00841414(param_1,param_2);
  return;
}


// ===== 007ee2a4  FUN_007ee2a4 =====

void FUN_007ee2a4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_24 [4];
  
  iVar1 = *(int *)(param_1 + 0xf0);
  if (iVar1 != 3) {
    if (iVar1 == 2) {
      iVar1 = FUN_007ed6d8(param_1);
      if (iVar1 != 0) {
        FUN_007ed2f4(param_1,"ContinueSSL",0xb,iVar1,1);
        return;
      }
    }
    else if (iVar1 == 0) goto LAB_007ee368;
    return;
  }
  if (*(char *)(param_1 + 0x104) == '\x01') {
    FUN_00841414(param_1,param_2);
  }
  if ((*(long *)(param_1 + 0x108) != 0) &&
     (iVar1 = FUN_007ed9a4(param_1,*(undefined8 *)(param_1 + 0x118),*(long *)(param_1 + 0x108),
                           auStack_24), iVar1 == *(int *)(param_1 + 0x108))) {
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
LAB_007ee368:
  FUN_00841470(param_1,param_2);
  return;
}


// ===== 007ee384  FUN_007ee384 =====

void FUN_007ee384(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f1906,"../../rtc_base/openssl_adapter.cc",0x17b1,
                 "OpenSSLAdapter::OnCloseEvent(",param_3,&DAT_001ca519);
  }
  FUN_008414cc(param_1,param_2,param_3);
  return;
}


// ===== 007ee3f8  FUN_007ee3f8 =====

void FUN_007ee3f8(undefined8 param_1,uint param_2,int param_3)

{
  long lVar1;
  char *pcVar2;
  size_t sVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *local_460;
  undefined1 *puStack_458;
  undefined1 *local_450;
  undefined1 auStack_448 [1024];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((8 < param_2) || ((0x112U >> (ulong)(param_2 & 0x1f) & 1) == 0)) {
    memset(auStack_448,0xaa,0x400);
    local_450 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_458 = &DAT_aaaaaaaaaaaaaaaa;
    local_460 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00622830(&local_460,auStack_448,0x400);
    pcVar2 = (char *)FUN_0083df30(param_1);
    if (pcVar2 == (char *)0x0) goto LAB_007ee5cc;
    sVar3 = strlen(pcVar2);
    FUN_006228b0(&local_460,pcVar2,sVar3);
    if (param_3 == 0) {
      uVar5 = FUN_004249b0();
      if ((uVar5 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4ead,"../../rtc_base/openssl_adapter.cc",0x18f3,"Error during ",
                     local_460,&DAT_001ded1c);
      }
      goto LAB_007ee440;
    }
    if (((int)param_2 >> 8) - 1U < 2) {
      uVar4 = FUN_006228b0(&local_460,&DAT_001d5e07,1);
      pcVar2 = (char *)FUN_0083df60(param_3);
      if (pcVar2 == (char *)0x0) {
LAB_007ee5cc:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
                  );
      }
      sVar3 = strlen(pcVar2);
      FUN_006228b0(uVar4,pcVar2,sVar3);
      uVar4 = FUN_006228b0(&local_460,&DAT_001d5e07,1);
      pcVar2 = (char *)FUN_0083df94(param_3);
      if (pcVar2 == (char *)0x0) goto LAB_007ee5cc;
      sVar3 = strlen(pcVar2);
      FUN_006228b0(uVar4,pcVar2,sVar3);
      uVar5 = FUN_004022fc();
      if ((uVar5 & 1) != 0) goto LAB_007ee440;
      uVar4 = 0x1942;
    }
    else {
      uVar5 = FUN_00417e08();
      if ((uVar5 & 1) != 0) goto LAB_007ee440;
      uVar4 = 0x1959;
    }
    FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/openssl_adapter.cc",uVar4,local_460);
  }
LAB_007ee440:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ee5e4  FUN_007ee5e4 =====

undefined8 FUN_007ee5e4(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = FUN_00837a30();
  uVar2 = FUN_0083a56c(param_2,uVar1);
  lVar3 = FUN_007f2d34(uVar2,0);
  uVar2 = FUN_007ee64c(lVar3,param_1,param_3,param_2);
  if (((int)uVar2 == 0) && ((*(byte *)(lVar3 + 0x14c) & 1) != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 007ee64c  FUN_007ee64c =====

int FUN_007ee64c(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  void *pvVar9;
  long *plVar10;
  long *plVar11;
  long *local_c0;
  long *plStack_b8;
  long *local_b0;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  long *local_80;
  long *plStack_78;
  long *local_70;
  void *local_48;
  
  if (param_2 == 0) {
    if (*(long *)(param_1 + 0xe8) != 0) {
      uVar4 = FUN_00417e08();
      if ((uVar4 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/openssl_adapter.cc",0x1c89,
                     "Invoking SSL Verify Callback.");
      }
      lVar5 = FUN_0083a584(param_4);
      if ((lVar5 != 0) && (lVar6 = FUN_00795280(), lVar6 != 0)) {
        local_80 = (long *)0x0;
        plStack_78 = (long *)0x0;
        local_70 = (long *)0x0;
        iVar3 = FUN_00795280(lVar5);
        if (0 < iVar3) {
          lVar6 = 0;
          do {
            uVar7 = FUN_007952e0(lVar5,lVar6);
            local_a0 = (undefined1 *)0x0;
            iVar3 = FUN_007a79e4(uVar7,&local_a0);
            puVar2 = local_a0;
            if (iVar3 < 1) {
              uVar4 = FUN_004249b0();
              if ((uVar4 & 1) == 0) {
                FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/openssl_adapter.cc",0x1d0b,
                             "Failed to encode X509 certificate.");
              }
LAB_007ee960:
              iVar3 = 0;
              plVar1 = local_80;
              plVar11 = plStack_78;
              goto joined_r0x007ee968;
            }
            uVar7 = FUN_00836e58();
            lVar8 = FUN_007a27e4(puVar2,iVar3,uVar7);
            if (lVar8 == 0) {
              uVar4 = FUN_004249b0();
              if ((uVar4 & 1) == 0) {
                FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/openssl_adapter.cc",0x1d43,
                             "Failed to allocate CRYPTO_BUFFER.");
              }
            }
            else {
              pvVar9 = operator_new(0x10);
              FUN_00834b40(pvVar9,lVar8);
              local_48 = pvVar9;
              if (plStack_78 < local_70) {
                if (plStack_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  std::__Cr::__libcpp_verbose_abort
                            ("%s",
                             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                            );
                }
                *plStack_78 = (long)pvVar9;
                plStack_78 = plStack_78 + 1;
              }
              else {
                plStack_78 = (long *)FUN_007ef180(&local_80,&local_48);
              }
            }
            if (puVar2 != (undefined1 *)0x0) {
              FUN_0078cb3c(puVar2);
            }
            if (lVar8 == 0) goto LAB_007ee960;
            lVar6 = lVar6 + 1;
            iVar3 = FUN_00795280(lVar5);
          } while (lVar6 < iVar3);
        }
        plStack_b8 = plStack_78;
        local_c0 = local_80;
        local_80 = (long *)0x0;
        plStack_78 = (long *)0x0;
        local_b0 = local_70;
        puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
        local_a0 = &DAT_aaaaaaaaaaaaaaaa;
        local_90 = &DAT_aaaaaaaaaaaaaaaa;
        local_70 = (long *)0x0;
        FUN_00832a88(&local_a0,&local_c0);
        plVar1 = local_c0;
        plVar11 = plStack_b8;
        if (local_c0 != (long *)0x0) {
          while (plVar1 != plVar11) {
            plVar11 = plVar11 + -1;
            if (plVar11 == (long *)0x0) goto LAB_007ee9c8;
            plVar10 = (long *)*plVar11;
            *plVar11 = 0;
            if (plVar10 != (long *)0x0) {
              (**(code **)(*plVar10 + 8))();
            }
          }
          plStack_b8 = plVar1;
          operator_delete(local_c0);
        }
        uVar4 = (**(code **)(**(long **)(param_1 + 0xe8) + 0x10))
                          (*(long **)(param_1 + 0xe8),&local_a0);
        if ((uVar4 & 1) == 0) {
          uVar4 = FUN_00417e08();
          if ((uVar4 & 1) == 0) {
            FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/openssl_adapter.cc",0x1d99,
                         "Failed to verify certificate chain using custom callback");
          }
          iVar3 = 0;
        }
        else {
          iVar3 = 1;
          *(undefined1 *)(param_1 + 0x180) = 1;
          uVar4 = FUN_00417e08();
          if ((uVar4 & 1) == 0) {
            FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/openssl_adapter.cc",0x1dc9,
                         "Validated certificate chain using custom callback");
          }
        }
        FUN_00832ab8(&local_a0);
        plVar1 = local_80;
        plVar11 = plStack_78;
joined_r0x007ee968:
        local_80 = plVar1;
        plStack_78 = plVar11;
        if (plVar1 == (long *)0x0) {
          return iVar3;
        }
        while( true ) {
          if (plVar1 == plVar11) {
            plStack_78 = plVar1;
            operator_delete(local_80);
            return iVar3;
          }
          plVar11 = plVar11 + -1;
          if (plVar11 == (long *)0x0) break;
          plVar10 = (long *)*plVar11;
          *plVar11 = 0;
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
LAB_007ee9c8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      uVar4 = FUN_004249b0();
      if ((uVar4 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/openssl_adapter.cc",0x1cab,
                     "Failed to get certificate chain from X509_STORE_CTX");
      }
    }
    param_2 = 0;
  }
  return param_2;
}


// ===== 007ee9f0  FUN_007ee9f0 =====

undefined8 FUN_007ee9f0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = FUN_007f2d34(param_1,0);
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e90,"../../rtc_base/openssl_adapter.cc",0x1e11,"Caching SSL session for "
                 ,lVar1 + 0x130);
  }
  lVar4 = (long)*(char *)(lVar1 + 0x147);
  if (lVar4 < 0) {
    lVar3 = *(long *)(lVar1 + 0x130);
    lVar4 = *(long *)(lVar1 + 0x138);
  }
  else {
    lVar3 = lVar1 + 0x130;
  }
  FUN_00831924(*(undefined8 *)(lVar1 + 0xe0),lVar3,lVar4,param_2);
  return 1;
}


// ===== 007eea70  FUN_007eea70 =====

void FUN_007eea70(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../rtc_base/ssl_adapter.h",0x71,"false",&DAT_001f5fa0);
}


// ===== 007eea9c  FUN_007eea9c =====

void FUN_007eea9c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../rtc_base/ssl_adapter.h",0x72,"false",&DAT_001f5fa0);
}


// ===== 007eeac8  FUN_007eeac8 =====

/* WARNING: Removing unreachable block (ram,0x007eedf4) */
/* WARNING: Removing unreachable block (ram,0x007eeb4c) */

void FUN_007eeac8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  lVar5 = param_1[2];
  puVar8 = (undefined8 *)*param_1;
  if ((ulong)((lVar5 - (long)puVar8 >> 3) * -0x5555555555555555) < param_4) {
    if (puVar8 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)param_1[1];
      puVar3 = puVar8;
      if (puVar8 != puVar6) {
        do {
          puVar6 = puVar6 + -3;
          if (puVar6 == (undefined8 *)0x0) goto LAB_007eee1c;
        } while (puVar6 != puVar8);
        puVar3 = (undefined8 *)*param_1;
      }
      param_1[1] = puVar8;
      operator_delete(puVar3);
      lVar5 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (param_4 < 0xaaaaaaaaaaaaaab) {
      uVar7 = (lVar5 >> 3) * 0x5555555555555556;
      if (uVar7 < param_4 || uVar7 - param_4 == 0) {
        uVar7 = param_4;
      }
      if (0x555555555555554 < (ulong)((lVar5 >> 3) * -0x5555555555555555)) {
        uVar7 = 0xaaaaaaaaaaaaaaa;
      }
      if (uVar7 < 0xaaaaaaaaaaaaaab) {
        puVar8 = (undefined8 *)operator_new(uVar7 * 0x18);
        *param_1 = puVar8;
        param_1[1] = puVar8;
        param_1[2] = puVar8 + uVar7 * 3;
        if (param_2 != param_3) {
          do {
            if (puVar8 == (undefined8 *)0x0) goto LAB_007eee08;
            if (*(char *)((long)param_2 + 0x17) < '\0') {
              FUN_005478d8(puVar8,*param_2,param_2[1]);
            }
            else {
              uVar9 = *param_2;
              uVar4 = param_2[2];
              puVar8[1] = param_2[1];
              *puVar8 = uVar9;
              puVar8[2] = uVar4;
            }
            param_2 = param_2 + 3;
            puVar8 = puVar8 + 3;
          } while (param_2 != param_3);
        }
        goto LAB_007eedb8;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00625650();
  }
  puVar6 = (undefined8 *)param_1[1];
  lVar5 = (long)puVar6 - (long)puVar8;
  if ((ulong)((lVar5 >> 3) * -0x5555555555555555) < param_4) {
    puVar3 = param_2;
    puVar2 = puVar6;
    if (puVar6 != puVar8) {
      puVar3 = (undefined8 *)((long)param_2 + lVar5);
      do {
        if (param_2 != puVar8) {
          bVar1 = *(byte *)((long)param_2 + 0x17);
          if (*(char *)((long)puVar8 + 0x17) < '\0') {
            uVar7 = param_2[1];
            puVar6 = (undefined8 *)*param_2;
            if (-1 < (char)bVar1) {
              uVar7 = (ulong)bVar1;
              puVar6 = param_2;
            }
            FUN_00547f08(puVar8,puVar6,uVar7);
          }
          else if ((char)bVar1 < '\0') {
            FUN_00547fc0(puVar8,*param_2,param_2[1]);
          }
          else {
            uVar9 = param_2[1];
            uVar4 = *param_2;
            puVar8[2] = param_2[2];
            puVar8[1] = uVar9;
            *puVar8 = uVar4;
          }
        }
        lVar5 = lVar5 + -0x18;
        param_2 = param_2 + 3;
        puVar8 = puVar8 + 3;
      } while (lVar5 != 0);
      puVar6 = (undefined8 *)param_1[1];
      puVar2 = puVar6;
    }
    while( true ) {
      if (puVar3 == param_3) {
        param_1[1] = puVar2;
        return;
      }
      if (puVar6 == (undefined8 *)0x0) break;
      if (*(char *)((long)puVar3 + 0x17) < '\0') {
        FUN_005478d8(puVar6,*puVar3,puVar3[1]);
      }
      else {
        uVar9 = puVar3[1];
        uVar4 = *puVar3;
        puVar6[2] = puVar3[2];
        puVar6[1] = uVar9;
        *puVar6 = uVar4;
      }
      puVar6 = puVar6 + 3;
      puVar3 = puVar3 + 3;
      puVar2 = puVar2 + 3;
    }
LAB_007eee08:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  if (param_2 == param_3) {
    if (puVar8 == puVar6) goto LAB_007eedb8;
  }
  else {
    do {
      if (param_2 != puVar8) {
        bVar1 = *(byte *)((long)param_2 + 0x17);
        if (*(char *)((long)puVar8 + 0x17) < '\0') {
          uVar7 = param_2[1];
          puVar6 = (undefined8 *)*param_2;
          if (-1 < (char)bVar1) {
            uVar7 = (ulong)bVar1;
            puVar6 = param_2;
          }
          FUN_00547f08(puVar8,puVar6,uVar7);
        }
        else if ((char)bVar1 < '\0') {
          FUN_00547fc0(puVar8,*param_2,param_2[1]);
        }
        else {
          uVar9 = param_2[1];
          uVar4 = *param_2;
          puVar8[2] = param_2[2];
          puVar8[1] = uVar9;
          *puVar8 = uVar4;
        }
      }
      param_2 = param_2 + 3;
      puVar8 = puVar8 + 3;
    } while (param_2 != param_3);
    puVar6 = (undefined8 *)param_1[1];
    if (puVar8 == puVar6) goto LAB_007eedb8;
  }
  do {
    puVar6 = puVar6 + -3;
    if (puVar6 == (undefined8 *)0x0) {
LAB_007eee1c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  } while (puVar6 != puVar8);
LAB_007eedb8:
  param_1[1] = puVar8;
  return;
}


// ===== 007eee34  FUN_007eee34 =====

undefined8 FUN_007eee34(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0076fd78(0x413,"socket");
  FUN_0076fdec(uVar1,FUN_007eeec8);
  FUN_0076fe00(uVar1,FUN_007eef68);
  FUN_0076fe70(uVar1,FUN_007ef00c);
  FUN_0076fe14(uVar1,FUN_007ef0d4);
  FUN_0076fdc4(uVar1,FUN_007ef128);
  FUN_0076fdd8(uVar1,FUN_007ef170);
  return uVar1;
}


// ===== 007eeec8  FUN_007eeec8 =====

undefined8 FUN_007eeec8(undefined8 param_1,long param_2,int param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    plVar2 = (long *)FUN_0076fe34();
    FUN_0076fd64(param_1);
    uVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,param_2,(long)param_3);
    if ((int)uVar3 < 1) {
      iVar1 = (**(code **)(*plVar2 + 0x70))(plVar2);
      if ((iVar1 == 0x73) || (iVar1 == 0xb)) {
        FUN_0076fd4c(param_1);
      }
      uVar3 = 0xffffffff;
    }
    return uVar3;
  }
  return 0xffffffff;
}


// ===== 007eef68  FUN_007eef68 =====

undefined8 FUN_007eef68(undefined8 param_1,long param_2,int param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    plVar2 = (long *)FUN_0076fe34();
    FUN_0076fd64(param_1);
    uVar3 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,(long)param_3,0);
    if ((int)uVar3 < 1) {
      iVar1 = (**(code **)(*plVar2 + 0x70))(plVar2);
      if ((iVar1 == 0x73) || (iVar1 == 0xb)) {
        FUN_0076fd34(param_1);
      }
      uVar3 = 0xffffffff;
    }
    return uVar3;
  }
  return 0xffffffff;
}


// ===== 007ef00c  FUN_007ef00c =====

undefined8 FUN_007ef00c(undefined8 param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  long *plVar3;
  undefined8 uVar4;
  
  sVar2 = strlen(param_2);
  if (sVar2 >> 0x1f != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../rtc_base/numerics/safe_conversions.h",0x24,
                 "IsValueInRangeForNumericType<Dst>(value)",&DAT_001f5fa0);
  }
  if (param_2 != (char *)0x0) {
    plVar3 = (long *)FUN_0076fe34(param_1);
    FUN_0076fd64(param_1);
    uVar4 = (**(code **)(*plVar3 + 0x30))(plVar3,param_2,sVar2);
    if (0 < (int)uVar4) {
      return uVar4;
    }
    iVar1 = (**(code **)(*plVar3 + 0x70))(plVar3);
    if ((iVar1 == 0x73) || (iVar1 == 0xb)) {
      FUN_0076fd4c(param_1);
    }
  }
  return 0xffffffff;
}


// ===== 007ef0d4  FUN_007ef0d4 =====

bool FUN_007ef0d4(undefined8 param_1,int param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  
  if (param_2 == 0xb) {
    return true;
  }
  if (param_2 == 2) {
    iVar1 = (**(code **)(*param_4 + 0x80))(param_4);
    return iVar1 == 0;
  }
  return false;
}


// ===== 007ef128  FUN_007ef128 =====

undefined8 FUN_007ef128(undefined8 param_1)

{
  FUN_0076fe58(param_1,0);
  FUN_0076fe40(param_1,1);
  FUN_0076fe28(param_1,0);
  return 1;
}


// ===== 007ef170  FUN_007ef170 =====

bool FUN_007ef170(long param_1)

{
  return param_1 != 0;
}


// ===== 007ef180  FUN_007ef180 =====

undefined8 * FUN_007ef180(long *param_1,undefined8 *param_2)

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
    FUN_007ef274();
LAB_007ef270:
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
    if (uVar5 >> 0x3d != 0) goto LAB_007ef270;
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


// ===== 007ef274  FUN_007ef274 =====

void FUN_007ef274(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 007ef28c  FUN_007ef28c =====

void FUN_007ef28c(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/openssl_adapter.cc",0x1519,"DTLS timeout expired");
  }
  FUN_00830b18(*(undefined8 *)(lVar2 + 0x120));
  FUN_007ed6d8(lVar2);
  return;
}


// ===== 007ef2e4  FUN_007ef2e4 =====

bool FUN_007ef2e4(undefined8 param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *local_40;
  undefined1 *puStack_38;
  
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  iVar3 = FUN_00770a30(param_1,&puStack_38,&local_40);
  puVar2 = puStack_38;
  puVar1 = local_40;
  if (iVar3 == 0) {
    FUN_00777eb4(0x10,0,0x44,"../../third_party/boringssl/src/ssl/ssl_lib.cc",0x4f);
  }
  else {
    if ((param_2[1] != 0) && ((ulong)-*param_2 <= param_2[1] - 1U)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    FUN_0078cb3c();
    *param_2 = (long)puVar2;
    param_2[1] = (long)puVar1;
  }
  return iVar3 != 0;
}


// ===== 007ef394  FUN_007ef394 =====

void FUN_007ef394(long param_1)

{
  *(undefined4 *)(*(long *)(param_1 + 0x30) + 0xc4) = 0;
  FUN_00777808();
  FUN_00777974();
  return;
}


// ===== 007ef3b8  FUN_007ef3b8 =====

void FUN_007ef3b8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  *(undefined4 *)(*(long *)(param_1 + 0x30) + 0xac) = 2;
  lVar3 = *(long *)(param_1 + 0x30);
  uVar1 = FUN_00778348();
  lVar2 = *(long *)(lVar3 + 0xb8);
  *(undefined8 *)(lVar3 + 0xb8) = uVar1;
  if (lVar2 != 0) {
    FUN_007782c8(lVar2);
    return;
  }
  return;
}


// ===== 007ef40c  FUN_007ef40c =====

uint FUN_007ef40c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x118);
  if (lVar1 != 0) {
    return (*(uint *)(lVar1 + 0x810) >> 3 ^ 0xffffffff) & 1;
  }
  return 0;
}


// ===== 007ef434  FUN_007ef434 =====

undefined8 FUN_007ef434(long *param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  *param_2 = 0;
  if (*(int *)(param_1[6] + 0xac) == 2) {
    FUN_007784d4(*(undefined8 *)(param_1[6] + 0xb8));
    *param_3 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3);
    if ((int)uVar1 != 4) {
      return uVar1;
    }
    *(undefined4 *)(param_1[6] + 0xac) = 2;
    lVar3 = param_1[6];
    uVar1 = FUN_00778348();
    lVar2 = *(long *)(lVar3 + 0xb8);
    *(undefined8 *)(lVar3 + 0xb8) = uVar1;
    if (lVar2 != 0) {
      FUN_007782c8(lVar2);
    }
  }
  return 4;
}


// ===== 007ef4c4  FUN_007ef4c4 =====

undefined8 FUN_007ef4c4(long *param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  *param_2 = 0;
  if (*(int *)(param_1[6] + 0xac) == 2) {
    FUN_007784d4(*(undefined8 *)(param_1[6] + 0xb8));
    *param_3 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3);
    if ((int)uVar1 != 4) {
      return uVar1;
    }
    *(undefined4 *)(param_1[6] + 0xac) = 2;
    lVar3 = param_1[6];
    uVar1 = FUN_00778348();
    lVar2 = *(long *)(lVar3 + 0xb8);
    *(undefined8 *)(lVar3 + 0xb8) = uVar1;
    if (lVar2 != 0) {
      FUN_007782c8(lVar2);
    }
  }
  return 4;
}


// ===== 007ef554  FUN_007ef554 =====

undefined4 FUN_007ef554(long param_1,char *param_2,byte *param_3,long param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  size_t sVar5;
  ulong uVar6;
  long lVar7;
  undefined4 uVar8;
  long lVar9;
  long local_90;
  long local_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  byte *local_48;
  
  if (*(long *)(*(long *)(param_1 + 0x68) + 0x250) == 0) {
    return 1;
  }
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00770970(&local_80);
  local_90 = 0;
  local_88 = 0;
  if (param_2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
              );
  }
  sVar5 = strlen(param_2);
  iVar4 = FUN_00770984(&local_80,param_4 * 2 + sVar5 + 0x43);
  if (((iVar4 == 0) || (iVar4 = FUN_007712e0(&local_80,param_2,sVar5), iVar4 == 0)) ||
     (iVar4 = FUN_00771298(&local_80,0x20), iVar4 == 0)) {
LAB_007ef77c:
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(param_1 + 0x30);
    local_48 = &DAT_aaaaaaaaaaaaaaaa;
    iVar4 = FUN_0077133c(&local_80,&local_48,0x40);
    if (iVar4 == 0) goto LAB_007ef77c;
    lVar7 = 0;
    do {
      bVar3 = *(byte *)(lVar9 + 0x30 + lVar7);
      lVar7 = lVar7 + 1;
      bVar2 = 0xff;
      if (0x9f < bVar3) {
        bVar2 = 0;
      }
      pbVar1 = local_48 + 1;
      *local_48 = (bVar3 >> 4 | 0x30) & bVar2 | (bVar3 >> 4) + 0x57 & (bVar2 ^ 0xff);
      bVar2 = 0xff;
      if (9 < (bVar3 & 0xf)) {
        bVar2 = 0;
      }
      local_48 = local_48 + 2;
      *pbVar1 = (bVar3 & 0xf | 0x30) & bVar2 | (bVar3 & 0xf) + 0x57 & (bVar2 ^ 0xff);
    } while (lVar7 != 0x20);
    iVar4 = FUN_00771298(&local_80,0x20);
    if (iVar4 == 0) goto LAB_007ef77c;
    local_48 = &DAT_aaaaaaaaaaaaaaaa;
    iVar4 = FUN_0077133c(&local_80,&local_48,param_4 * 2);
    if (iVar4 == 0) goto LAB_007ef77c;
    if (param_4 != 0) {
      do {
        bVar3 = *param_3;
        bVar2 = 0xff;
        if (0x9f < bVar3) {
          bVar2 = 0;
        }
        pbVar1 = local_48 + 1;
        *local_48 = (bVar3 >> 4 | 0x30) & bVar2 | (bVar3 >> 4) + 0x57 & (bVar2 ^ 0xff);
        bVar2 = 0xff;
        if (9 < (bVar3 & 0xf)) {
          bVar2 = 0;
        }
        param_4 = param_4 + -1;
        local_48 = local_48 + 2;
        *pbVar1 = (bVar3 & 0xf | 0x30) & bVar2 | (bVar3 & 0xf) + 0x57 & (bVar2 ^ 0xff);
        param_3 = param_3 + 1;
      } while (param_4 != 0);
    }
    iVar4 = FUN_00771298(&local_80,0);
    if (iVar4 == 0) goto LAB_007ef77c;
    uVar6 = FUN_007ef2e4(&local_80,&local_90);
    lVar9 = local_90;
    if ((uVar6 & 1) != 0) {
      (**(code **)(*(long *)(param_1 + 0x68) + 0x250))(param_1,local_90);
      uVar8 = 1;
      goto joined_r0x007ef788;
    }
  }
  uVar8 = 0;
joined_r0x007ef788:
  if ((local_88 != 0) && ((ulong)-lVar9 <= local_88 - 1U)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  FUN_0078cb3c(lVar9);
  FUN_00770a10(&local_80);
  return uVar8;
}


// ===== 007ef7fc  FUN_007ef7fc =====

void FUN_007ef7fc(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x60);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x68) + 0xf0);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x007ef814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ===== 007ef81c  FUN_007ef81c =====

void FUN_007ef81c(long param_1,undefined4 param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x40);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    if (param_3 == 0) {
      uVar1 = 2;
    }
    else if (param_3 == 0x100) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_007f3848(param_1);
      UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x40);
    }
                    /* WARNING: Could not recover jumptable at 0x007ef8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (param_2,uVar1,param_3,param_4,param_5,param_1,*(undefined8 *)(param_1 + 0x48));
    return;
  }
  return;
}


// ===== 007ef8b4  FUN_007ef8b4 =====

undefined1  [16] FUN_007ef8b4(long param_1)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  timeval local_20;
  
  if (*(code **)(param_1 + 600) == (code *)0x0) {
    local_20.tv_usec = (__suseconds_t)&DAT_aaaaaaaaaaaaaaaa;
    local_20.tv_sec = (__time_t)&DAT_aaaaaaaaaaaaaaaa;
    gettimeofday(&local_20,(__timezone_ptr_t)0x0);
  }
  else {
    local_20.tv_usec = (__suseconds_t)&DAT_aaaaaaaaaaaaaaaa;
    local_20.tv_sec = (__time_t)&DAT_aaaaaaaaaaaaaaaa;
    (**(code **)(param_1 + 600))(0,&local_20);
  }
  auVar2._0_8_ = local_20.tv_sec & (local_20.tv_sec >> 0x3f ^ 0xffffffffffffffffU);
  puVar1 = (undefined1 *)0x0;
  if (-1 < local_20.tv_sec) {
    puVar1 = (undefined1 *)local_20.tv_usec;
  }
  auVar2._8_8_ = (ulong)puVar1 & 0xffffffff;
  return auVar2;
}


// ===== 007ef91c  FUN_007ef91c =====

undefined1 FUN_007ef91c(undefined8 *param_1)

{
  return *(undefined1 *)*param_1;
}


// ===== 007ef92c  FUN_007ef92c =====

bool FUN_007ef92c(long param_1)

{
  return *(long *)(param_1 + 0x98) != 0;
}


// ===== 007ef940  FUN_007ef940 =====

undefined8 FUN_007ef940(void)

{
  return 1;
}


// ===== 007ef94c  FUN_007ef94c =====

void FUN_007ef94c(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  FUN_007f5674(param_1,0);
  FUN_0078b424(&DAT_00d5a710,param_1 + 0xe8);
  pthread_rwlock_destroy((pthread_rwlock_t *)(param_1 + 0x18));
  FUN_0078e194(*(undefined8 *)(param_1 + 0x70));
  (**(code **)(*(long *)(param_1 + 0x10) + 0x80))(param_1);
  uVar3 = *(ulong *)(param_1 + 0x290);
  uVar1 = *(ulong *)(param_1 + 0x288);
  if (uVar3 != 0) {
    uVar4 = -uVar1 >> 1;
    if (uVar3 - 1 <= -uVar1 >> 1) {
      uVar4 = uVar3 - 1;
    }
    if ((1 < uVar4) && ((uVar1 & 1) == 0)) {
      uVar4 = uVar4 & 0x7ffffffffffffffe;
      uVar1 = uVar1 + uVar4 * 2;
      uVar3 = uVar3 - uVar4;
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    uVar5 = uVar3;
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      if (uVar1 == 0) goto LAB_007efd90;
      uVar1 = uVar1 + 2;
      uVar5 = uVar5 - 1;
    }
    if (2 < uVar3 - 1) {
      do {
        if ((((uVar1 == 0) || (uVar1 == 0xfffffffffffffffe)) || (uVar1 == 0xfffffffffffffffc)) ||
           (uVar1 == 0xfffffffffffffffa)) goto LAB_007efd90;
        uVar5 = uVar5 - 4;
        uVar1 = uVar1 + 8;
      } while (uVar5 != 0);
    }
  }
  FUN_0078cb3c();
  lVar2 = *(long *)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  if (lVar2 != 0) {
    FUN_008120d4();
  }
  lVar2 = *(long *)(param_1 + 0x240);
  *(undefined8 *)(param_1 + 0x240) = 0;
  if (lVar2 != 0) {
    FUN_00778828();
  }
  uVar1 = *(ulong *)(param_1 + 0x238);
  lVar2 = *(long *)(param_1 + 0x230);
  if (uVar1 != 0) {
    uVar3 = (ulong)-lVar2 >> 2;
    if (uVar1 - 1 <= (ulong)-lVar2 >> 2) {
      uVar3 = uVar1 - 1;
    }
    if ((1 < uVar3) && ((-(int)lVar2 & 3U) == 0)) {
      uVar3 = uVar3 & 0x3ffffffffffffffe;
      lVar2 = lVar2 + uVar3 * 4;
      uVar1 = uVar1 - uVar3;
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    uVar4 = uVar1;
    for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      if (lVar2 == 0) goto LAB_007efd90;
      lVar2 = lVar2 + 4;
      uVar4 = uVar4 - 1;
    }
    if (2 < uVar1 - 1) {
      do {
        if (((lVar2 == 0) || (lVar2 == -4)) || ((lVar2 == -8 || (lVar2 == -0xc))))
        goto LAB_007efd90;
        uVar4 = uVar4 - 4;
        lVar2 = lVar2 + 0x10;
      } while (uVar4 != 0);
    }
  }
  FUN_0078cb3c();
  uVar3 = *(ulong *)(param_1 + 0x228);
  uVar1 = *(ulong *)(param_1 + 0x220);
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  if (uVar3 != 0) {
    uVar4 = -uVar1 >> 1;
    if (uVar3 - 1 <= -uVar1 >> 1) {
      uVar4 = uVar3 - 1;
    }
    if ((1 < uVar4) && ((uVar1 & 1) == 0)) {
      uVar4 = uVar4 & 0x7ffffffffffffffe;
      uVar1 = uVar1 + uVar4 * 2;
      uVar3 = uVar3 - uVar4;
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    uVar5 = uVar3;
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      if (uVar1 == 0) goto LAB_007efd90;
      uVar1 = uVar1 + 2;
      uVar5 = uVar5 - 1;
    }
    if (2 < uVar3 - 1) {
      do {
        if ((((uVar1 == 0) || (uVar1 == 0xfffffffffffffffe)) || (uVar1 == 0xfffffffffffffffc)) ||
           (uVar1 == 0xfffffffffffffffa)) goto LAB_007efd90;
        uVar5 = uVar5 - 4;
        uVar1 = uVar1 + 8;
      } while (uVar5 != 0);
    }
  }
  FUN_0078cb3c();
  uVar1 = *(ulong *)(param_1 + 0x210);
  lVar2 = *(long *)(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  if (uVar1 != 0) {
    uVar3 = (ulong)(lVar2 * -0xaaaaaaaaaaaaaab) >> 3;
    if (uVar1 - 1 <= uVar3) {
      uVar3 = uVar1 - 1;
    }
    if ((1 < uVar3) && ((-(int)lVar2 & 7U) == 0)) {
      uVar3 = uVar3 & 0x1ffffffffffffffe;
      lVar2 = lVar2 + uVar3 * 0x18;
      uVar1 = uVar1 - uVar3;
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    uVar4 = uVar1;
    for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      if (lVar2 == 0) goto LAB_007efd90;
      lVar2 = lVar2 + 0x18;
      uVar4 = uVar4 - 1;
    }
    if (2 < uVar1 - 1) {
      do {
        if (((lVar2 == 0) || (lVar2 == -0x18)) || ((lVar2 == -0x30 || (lVar2 == -0x48))))
        goto LAB_007efd90;
        uVar4 = uVar4 - 4;
        lVar2 = lVar2 + 0x60;
      } while (uVar4 != 0);
    }
  }
  FUN_0078cb3c();
  lVar2 = *(long *)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  if (lVar2 != 0) {
    FUN_00795334();
  }
  if ((*(long *)(param_1 + 0x1f8) != 0) &&
     ((ulong)-*(long *)(param_1 + 0x1f0) <= *(long *)(param_1 + 0x1f8) - 1U)) {
LAB_007efd90:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  FUN_0078cb3c();
  lVar2 = *(long *)(param_1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  if (lVar2 != 0) {
    FUN_0078cb3c();
  }
  lVar2 = *(long *)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x198) = 0;
  if (lVar2 != 0) {
    FUN_0078cb3c();
  }
  lVar2 = *(long *)(param_1 + 400);
  *(undefined8 *)(param_1 + 400) = 0;
  if (lVar2 != 0) {
    FUN_0078cb3c();
  }
  lVar2 = *(long *)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x138) = 0;
  if (lVar2 != 0) {
    FUN_0081b360(lVar2);
    FUN_0078cb3c(lVar2);
  }
  if (*(char *)(param_1 + 0x120) == '\x01') {
    if ((*(long *)(param_1 + 0x118) != 0) &&
       ((ulong)-*(long *)(param_1 + 0x110) <= *(long *)(param_1 + 0x118) - 1U)) goto LAB_007efd90;
    FUN_0078cb3c();
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  lVar2 = *(long *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (lVar2 != 0) {
    FUN_00795370(lVar2,FUN_007f2dd0,0);
  }
  lVar2 = *(long *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (lVar2 != 0) {
    FUN_00795370(lVar2,FUN_007f2dd0,0);
  }
  lVar2 = *(long *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (lVar2 != 0) {
    FUN_007f5f1c(lVar2);
    FUN_0078cb3c(lVar2);
    return;
  }
  return;
}


// ===== 007efda4  FUN_007efda4 =====

undefined4 * FUN_007efda4(undefined2 *param_1)

{
  long *plVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  if (param_1 == (undefined2 *)0x0) {
    FUN_00777eb4(0x10,0,0xba,"../../third_party/boringssl/src/ssl/ssl_lib.cc",0x1aa);
  }
  else {
    puVar3 = (undefined4 *)FUN_0078c954(0x2a0);
    if (puVar3 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    plVar1 = (long *)(puVar3 + 0x4e);
    *puVar3 = 1;
    *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(param_1 + 4);
    uVar7 = *(undefined8 *)(param_1 + 8);
    *(undefined1 *)(puVar3 + 0x15) = 2;
    *(undefined8 *)(puVar3 + 0x1e) = 0x5000;
    uVar5 = DAT_001f5c38;
    puVar3[0x14] = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(undefined8 *)(puVar3 + 0x16) = 0;
    puVar3[0x27] = 0x2a300;
    *(undefined8 *)(puVar3 + 0x25) = uVar5;
    uVar5 = DAT_001f5188;
    *(undefined8 *)(puVar3 + 0x1c) = 0;
    *(undefined8 *)(puVar3 + 0x1a) = 0;
    puVar3[0x4c] = 0x19000;
    *(undefined8 *)(puVar3 + 0x58) = 0;
    *(undefined8 *)(puVar3 + 0x56) = 0;
    *(undefined8 *)(puVar3 + 0x5c) = 0;
    *(undefined8 *)(puVar3 + 0x5a) = 0;
    *(undefined2 *)((long)puVar3 + 0x17a) = 0x4000;
    *(undefined8 *)(puVar3 + 0xa4) = 0;
    *(undefined8 *)(puVar3 + 0xa2) = 0;
    *(undefined8 *)(puVar3 + 4) = uVar7;
    *(undefined8 *)(puVar3 + 0x22) = 0;
    *(undefined8 *)(puVar3 + 0x20) = 0;
    puVar3[0x24] = 0;
    *(undefined1 *)(puVar3 + 0x48) = 0;
    *(undefined8 *)(puVar3 + 0x2a) = 0;
    *(undefined8 *)(puVar3 + 0x28) = 0;
    *(undefined8 *)(puVar3 + 0x2e) = 0;
    *(undefined8 *)(puVar3 + 0x2c) = 0;
    *(undefined8 *)(puVar3 + 0x32) = 0;
    *(undefined8 *)(puVar3 + 0x30) = 0;
    *(undefined8 *)(puVar3 + 0x36) = 0;
    *(undefined8 *)(puVar3 + 0x34) = 0;
    *(undefined8 *)(puVar3 + 0x38) = 0;
    *(undefined8 *)(puVar3 + 0x3e) = 0;
    *(undefined8 *)(puVar3 + 0x3c) = 0;
    *(undefined8 *)(puVar3 + 0x42) = 0;
    *(undefined8 *)(puVar3 + 0x40) = 0;
    *(undefined1 *)(puVar3 + 0x44) = 0;
    *(undefined8 *)(puVar3 + 0x4a) = uVar5;
    *(undefined8 *)(puVar3 + 0x52) = 0;
    puVar3[0x54] = 0;
    *(undefined8 *)(puVar3 + 0x50) = 0;
    *plVar1 = 0;
    *(undefined1 *)(puVar3 + 0x5e) = 0;
    *(undefined8 *)(puVar3 + 0x62) = 0;
    *(undefined8 *)(puVar3 + 0x60) = 0;
    *(undefined8 *)(puVar3 + 0x66) = 0;
    *(undefined8 *)(puVar3 + 100) = 0;
    *(undefined8 *)(puVar3 + 0x6a) = 0;
    *(undefined8 *)(puVar3 + 0x68) = 0;
    *(undefined8 *)(puVar3 + 0x6e) = 0;
    *(undefined8 *)(puVar3 + 0x6c) = 0;
    *(undefined8 *)(puVar3 + 0x72) = 0;
    *(undefined8 *)(puVar3 + 0x70) = 0;
    *(undefined8 *)(puVar3 + 0x76) = 0;
    *(undefined8 *)(puVar3 + 0x74) = 0;
    *(undefined8 *)(puVar3 + 0x7a) = 0;
    *(undefined8 *)(puVar3 + 0x78) = 0;
    *(undefined8 *)(puVar3 + 0x7e) = 0;
    *(undefined8 *)(puVar3 + 0x7c) = 0;
    *(undefined8 *)(puVar3 + 0x82) = 0;
    *(undefined8 *)(puVar3 + 0x80) = 0;
    *(undefined8 *)(puVar3 + 0x86) = 0;
    *(undefined8 *)(puVar3 + 0x84) = 0;
    *(undefined8 *)(puVar3 + 0x8a) = 0;
    *(undefined8 *)(puVar3 + 0x88) = 0;
    *(undefined8 *)(puVar3 + 0x8e) = 0;
    *(undefined8 *)(puVar3 + 0x8c) = 0;
    *(undefined8 *)(puVar3 + 0x92) = 0;
    *(undefined8 *)(puVar3 + 0x90) = 0;
    *(undefined8 *)(puVar3 + 0x96) = 0;
    *(undefined8 *)(puVar3 + 0x94) = 0;
    *(undefined8 *)(puVar3 + 0x9a) = 0;
    *(undefined8 *)(puVar3 + 0x98) = 0;
    *(undefined8 *)(puVar3 + 0x9e) = 0;
    *(undefined8 *)(puVar3 + 0x9c) = 0;
    puVar3[0xa0] = 0;
    *(ushort *)(puVar3 + 0xa6) = *(ushort *)(puVar3 + 0xa6) & 0xc000;
    FUN_00795d20(puVar3 + 6);
    FUN_0078b418(puVar3 + 0x3a);
    lVar4 = FUN_0078c954(0x80);
    if (lVar4 != 0) {
      FUN_0081b2f4(lVar4,*(undefined8 *)(param_1 + 8));
    }
    lVar8 = *plVar1;
    *plVar1 = lVar4;
    if (lVar8 != 0) {
      FUN_0081b360(lVar8);
      FUN_0078cb3c(lVar8);
    }
    uVar5 = FUN_0078e114(FUN_007f007c,FUN_007f008c);
    *(undefined8 *)(puVar3 + 0x1c) = uVar5;
    uVar5 = FUN_00795214();
    lVar4 = *(long *)(puVar3 + 0x3e);
    *(undefined8 *)(puVar3 + 0x3e) = uVar5;
    if (lVar4 != 0) {
      FUN_00795370(lVar4,FUN_007f2dd0,0);
    }
    uVar5 = FUN_00795214();
    lVar4 = *(long *)(puVar3 + 0x42);
    *(undefined8 *)(puVar3 + 0x42) = uVar5;
    if (lVar4 != 0) {
      FUN_00795370(lVar4,FUN_007f2dd0,0);
    }
    if (((((*plVar1 != 0) && (*(long *)(*plVar1 + 0x18) != 0)) && (*(long *)(puVar3 + 0x1c) != 0))
        && ((*(long *)(puVar3 + 0x3e) != 0 && (*(long *)(puVar3 + 0x42) != 0)))) &&
       (uVar6 = (**(code **)(*(long *)(puVar3 + 4) + 0x78))(puVar3), (uVar6 & 1) != 0)) {
      iVar2 = FUN_007f00d4(puVar3,&DAT_001d42fb);
      if (((iVar2 == 0) || (iVar2 = FUN_007f3774(puVar3,*param_1), iVar2 == 0)) ||
         (iVar2 = FUN_007f36a0(puVar3,*param_1), iVar2 == 0)) {
        FUN_00777eb4(0x10,0,0x44,"../../third_party/boringssl/src/ssl/ssl_lib.cc",0x1c5);
      }
      else {
        auVar9 = FUN_0081d8b8();
        uVar6 = FUN_007f012c(puVar3 + 0x88,auVar9._0_8_,auVar9._8_8_);
        if (((uVar6 & 1) != 0) &&
           (uVar6 = FUN_007f0344(puVar3 + 0x8c,*(undefined8 *)(puVar3 + 0x8a)), (uVar6 & 1) != 0)) {
          return puVar3;
        }
      }
    }
    iVar2 = FUN_0079347c(puVar3);
    if (iVar2 != 0) {
      FUN_007ef94c(puVar3);
      FUN_0078cb3c(puVar3);
    }
  }
  return (undefined4 *)0x0;
}


// ===== 007f007c  FUN_007f007c =====

void FUN_007f007c(long param_1)

{
  FUN_007f3970(param_1 + 0x3b,*(undefined1 *)(param_1 + 0x5b));
  return;
}


// ===== 007f008c  FUN_007f008c =====

bool FUN_007f008c(long param_1,long param_2)

{
  int iVar1;
  
  if (*(byte *)(param_1 + 0x5b) == *(byte *)(param_2 + 0x5b)) {
    iVar1 = memcmp((void *)(param_1 + 0x3b),(void *)(param_2 + 0x3b),
                   (ulong)*(byte *)(param_1 + 0x5b));
    return iVar1 != 0;
  }
  return true;
}


// ===== 007f00d4  FUN_007f00d4 =====

uint FUN_007f00d4(long param_1,undefined8 param_2)

{
  uint uVar1;
  
  if ((*(ushort *)(param_1 + 0x298) >> 0xb & 1) == 0) {
    uVar1 = FUN_0072a578();
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x298) >> 0xc & 1;
  }
  uVar1 = FUN_007f611c(param_1 + 0x60,uVar1 != 0,param_2,1);
  return uVar1 & 1;
}


// ===== 007f012c  FUN_007f012c =====

undefined8 FUN_007f012c(ulong *param_1,undefined2 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar7 = -uVar3 >> 1;
    if (uVar4 - 1 <= -uVar3 >> 1) {
      uVar7 = uVar4 - 1;
    }
    if ((1 < uVar7) && ((uVar3 & 1) == 0)) {
      uVar7 = uVar7 & 0x7ffffffffffffffe;
      uVar3 = uVar3 + uVar7 * 2;
      uVar4 = uVar4 - uVar7;
      do {
        uVar7 = uVar7 - 2;
      } while (uVar7 != 0);
    }
    uVar8 = uVar4;
    for (uVar7 = uVar4 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (uVar3 == 0) goto LAB_007f0320;
      uVar3 = uVar3 + 2;
      uVar8 = uVar8 - 1;
    }
    if (2 < uVar4 - 1) {
      do {
        if ((((uVar3 == 0) || (uVar3 == 0xfffffffffffffffe)) || (uVar3 == 0xfffffffffffffffc)) ||
           (uVar3 == 0xfffffffffffffffa)) {
LAB_007f0320:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        uVar8 = uVar8 - 4;
        uVar3 = uVar3 + 8;
      } while (uVar8 != 0);
    }
  }
  FUN_0078cb3c();
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3 == 0) {
    return 1;
  }
  if ((long)param_3 < 0) {
    FUN_00777eb4(0xe,0,0x45,"../../third_party/boringssl/src/ssl/../crypto/mem_internal.h",0xea);
    return 0;
  }
  puVar2 = (undefined2 *)FUN_0078c954(param_3 * 2);
  *param_1 = (ulong)puVar2;
  if (puVar2 == (undefined2 *)0x0) {
    return 0;
  }
  uVar3 = param_3 * 2 - 2;
  param_1[1] = param_3;
  puVar5 = param_2;
  if (((5 < uVar3) && (puVar2 <= puVar2 + (param_3 - 1))) &&
     ((param_2 <= param_2 + (param_3 - 1) && (0x1f < (ulong)((long)puVar2 - (long)param_2))))) {
    uVar4 = (uVar3 >> 1) + 1;
    if (uVar3 < 0x1e) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar4 & 0xfffffffffffffff0;
      puVar10 = (undefined8 *)(puVar2 + 8);
      puVar11 = (undefined8 *)(param_2 + 8);
      uVar3 = uVar4 & 0xfffffffffffffff0;
      do {
        puVar1 = puVar11 + -1;
        uVar12 = puVar11[-2];
        uVar14 = puVar11[1];
        uVar13 = *puVar11;
        uVar3 = uVar3 - 0x10;
        puVar11 = puVar11 + 4;
        puVar10[-1] = *puVar1;
        puVar10[-2] = uVar12;
        puVar10[1] = uVar14;
        *puVar10 = uVar13;
        puVar10 = puVar10 + 4;
      } while (uVar3 != 0);
      if (uVar4 == uVar7) {
        return 1;
      }
      if ((uVar4 & 0xc) == 0) {
        puVar2 = puVar2 + uVar7;
        puVar5 = param_2 + uVar7;
        goto LAB_007f0218;
      }
    }
    uVar3 = uVar4 & 0xfffffffffffffffc;
    lVar9 = uVar7 - uVar3;
    puVar10 = (undefined8 *)(puVar2 + uVar7);
    puVar2 = puVar2 + uVar3;
    puVar11 = (undefined8 *)(param_2 + uVar7);
    do {
      lVar9 = lVar9 + 4;
      *puVar10 = *puVar11;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    } while (lVar9 != 0);
    puVar5 = param_2 + uVar3;
    if (uVar4 == uVar3) {
      return 1;
    }
  }
LAB_007f0218:
  do {
    puVar6 = puVar5 + 1;
    *puVar2 = *puVar5;
    puVar2 = puVar2 + 1;
    puVar5 = puVar6;
  } while (puVar6 != param_2 + param_3);
  return 1;
}


// ===== 007f0344  FUN_007f0344 =====

undefined8 FUN_007f0344(long *param_1,ulong param_2)

{
  void *__s;
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar2 = *param_1;
  uVar1 = param_1[1];
  if (uVar1 != 0) {
    uVar3 = (ulong)-lVar2 >> 2;
    if (uVar1 - 1 <= (ulong)-lVar2 >> 2) {
      uVar3 = uVar1 - 1;
    }
    if ((1 < uVar3) && ((-(int)lVar2 & 3U) == 0)) {
      uVar3 = uVar3 & 0x3ffffffffffffffe;
      lVar2 = lVar2 + uVar3 * 4;
      uVar1 = uVar1 - uVar3;
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    uVar4 = uVar1;
    for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      if (lVar2 == 0) goto LAB_007f0478;
      lVar2 = lVar2 + 4;
      uVar4 = uVar4 - 1;
    }
    if (2 < uVar1 - 1) {
      do {
        if ((((lVar2 == 0) || (lVar2 == -4)) || (lVar2 == -8)) || (lVar2 == -0xc)) {
LAB_007f0478:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        uVar4 = uVar4 - 4;
        lVar2 = lVar2 + 0x10;
      } while (uVar4 != 0);
    }
  }
  FUN_0078cb3c();
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    if (param_2 >> 0x3e != 0) {
      FUN_00777eb4(0xe,0,0x45,"../../third_party/boringssl/src/ssl/../crypto/mem_internal.h",0xea);
      return 0;
    }
    __s = (void *)FUN_0078c954(param_2 << 2);
    *param_1 = (long)__s;
    if (__s == (void *)0x0) {
      return 0;
    }
    param_1[1] = param_2;
    memset(__s,0,param_2 << 2);
  }
  return 1;
}


// ===== 007f048c  FUN_007f048c =====

undefined8 FUN_007f048c(void)

{
  FUN_00793428();
  return 1;
}


// ===== 007f04ac  FUN_007f04ac =====

void FUN_007f04ac(long param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = FUN_0079347c(), iVar1 != 0)) {
    FUN_007ef94c(param_1);
    FUN_0078cb3c(param_1);
    return;
  }
  return;
}


// ===== 007f04f8  FUN_007f04f8 =====

void FUN_007f04f8(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined2 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  *param_1 = *(undefined8 *)(param_2 + 8);
  param_1[1] = 0;
  uVar5 = *(undefined2 *)(param_2 + 0x17a);
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 2) = uVar5;
  param_1[8] = *(undefined8 *)(param_2 + 0x140);
  uVar7 = *(undefined8 *)(param_2 + 0x148);
  *(undefined4 *)(param_1 + 10) = 400;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = uVar7;
  if (param_2 == 0) {
    lVar6 = 0;
    param_1[0xd] = 0;
  }
  else {
    FUN_00793428(param_2);
    param_1[0xd] = param_2;
    FUN_00793428(param_2);
    lVar6 = param_1[0xd];
  }
  param_1[0xe] = param_2;
  bVar4 = *(byte *)((long)param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar6 + 0x128);
  *(undefined4 *)((long)param_1 + 0x84) = *(undefined4 *)(lVar6 + 300);
  uVar3 = *(undefined4 *)(lVar6 + 0x130);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x11) = uVar3;
  *(byte *)((long)param_1 + 0xa4) = bVar4 & 0xfe;
  bVar1 = *(byte *)(lVar6 + 0x298) & 2;
  *(byte *)((long)param_1 + 0xa4) = bVar1 | bVar4 & 0xfc;
  bVar2 = *(byte *)(lVar6 + 0x299) & 4;
  *(byte *)((long)param_1 + 0xa4) = bVar2 | bVar1 | bVar4 & 0xf8;
  *(byte *)((long)param_1 + 0xa4) =
       bVar2 | bVar1 | bVar4 & 0xf0 | (byte)((ushort)*(undefined2 *)(lVar6 + 0x298) >> 10) & 8;
  FUN_0078b418(param_1 + 0xf);
  return;
}


// ===== 007f05f8  FUN_007f05f8 =====

void FUN_007f05f8(long *param_1)

{
  int iVar1;
  long lVar2;
  
  FUN_0078b424(&DAT_00d5a760,param_1 + 0xf);
  lVar2 = param_1[1];
  param_1[1] = 0;
  if (lVar2 != 0) {
    FUN_007f0ed8(lVar2);
    FUN_0078cb3c(lVar2);
  }
  if (*param_1 != 0) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  lVar2 = param_1[0x12];
  param_1[0x12] = 0;
  if (lVar2 != 0) {
    FUN_0078cb3c();
  }
  lVar2 = param_1[0xe];
  param_1[0xe] = 0;
  if ((lVar2 != 0) && (iVar1 = FUN_0079347c(lVar2), iVar1 != 0)) {
    FUN_007ef94c(lVar2);
    FUN_0078cb3c(lVar2);
  }
  lVar2 = param_1[0xd];
  param_1[0xd] = 0;
  if ((lVar2 != 0) && (iVar1 = FUN_0079347c(lVar2), iVar1 != 0)) {
    FUN_007ef94c(lVar2);
    FUN_0078cb3c(lVar2);
  }
  lVar2 = param_1[0xb];
  param_1[0xb] = 0;
  if (lVar2 != 0) {
    FUN_007f58c0();
  }
  lVar2 = param_1[4];
  param_1[4] = 0;
  if (lVar2 != 0) {
    FUN_0076f794();
  }
  lVar2 = param_1[3];
  param_1[3] = 0;
  if (lVar2 != 0) {
    FUN_0076f794();
  }
  lVar2 = param_1[1];
  param_1[1] = 0;
  if (lVar2 != 0) {
    FUN_007f0ed8(lVar2);
    FUN_0078cb3c(lVar2);
    return;
  }
  return;
}


// ===== 007f0714  FUN_007f0714 =====

long * FUN_007f0714(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  if (param_1 == 0) {
    FUN_00777eb4(0x10,0,0xb9,"../../third_party/boringssl/src/ssl/ssl_lib.cc",0x1fa);
    return (long *)0x0;
  }
  plVar1 = (long *)FUN_0078c954(0xa8);
  if (plVar1 == (long *)0x0) {
    return (long *)0x0;
  }
  FUN_007f04f8(plVar1,param_1);
  plVar2 = (long *)FUN_0078c954(0x148);
  if (plVar2 != (long *)0x0) {
    *plVar2 = (long)plVar1;
    *(undefined4 *)(plVar2 + 1) = 0;
    *(undefined1 *)(plVar2 + 0xf) = 0;
    plVar2[0x18] = 0;
    plVar2[0x17] = 0;
    plVar2[0x22] = 0;
    plVar2[0x21] = 0;
    plVar2[0x24] = 0;
    plVar2[0x23] = 0;
    plVar2[0x26] = 0;
    plVar2[0x25] = 0;
    *(undefined8 *)((long)plVar2 + 0x13d) = 0;
    *(undefined8 *)((long)plVar2 + 0x135) = 0;
    *(undefined1 *)(plVar2 + 0x16) = 0;
    plVar2[3] = 0;
    plVar2[2] = 0;
    plVar2[5] = 0;
    plVar2[4] = 0;
    plVar2[7] = 0;
    plVar2[6] = 0;
    plVar2[9] = 0;
    plVar2[8] = 0;
    plVar2[0xb] = 0;
    plVar2[10] = 0;
    *(undefined8 *)((long)plVar2 + 0x61) = 0;
    *(undefined8 *)((long)plVar2 + 0x59) = 0;
    plVar2[0x11] = 0;
    plVar2[0x10] = 0;
    plVar2[0x13] = 0;
    plVar2[0x12] = 0;
    *(undefined1 *)(plVar2 + 0x14) = 0;
    plVar2[0x1a] = 0;
    plVar2[0x19] = 0;
    plVar2[0x1c] = 0;
    plVar2[0x1b] = 0;
    plVar2[0x1e] = 0;
    plVar2[0x1d] = 0;
    plVar2[0x20] = 0;
    plVar2[0x1f] = 0;
    *(ushort *)((long)plVar2 + 0x145) = *(ushort *)((long)plVar2 + 0x145) & 0xf800 | 0x2010;
  }
  lVar6 = plVar1[1];
  plVar1[1] = (long)plVar2;
  if (lVar6 != 0) {
    FUN_007f0ed8(lVar6);
    FUN_0078cb3c(lVar6);
    plVar2 = (long *)plVar1[1];
  }
  if (plVar2 != (long *)0x0) {
    *(undefined2 *)((long)plVar2 + 10) = *(undefined2 *)(param_1 + 0x52);
    *(undefined2 *)(plVar1[1] + 8) = *(undefined2 *)(param_1 + 0x50);
    uVar3 = FUN_0081b41c(*(undefined8 *)(param_1 + 0x138));
    lVar6 = *(long *)(plVar1[1] + 0x20);
    *(undefined8 *)(plVar1[1] + 0x20) = uVar3;
    if (lVar6 != 0) {
      FUN_0081b360(lVar6);
      FUN_0078cb3c(lVar6);
    }
    if (*(long *)(plVar1[1] + 0x20) != 0) {
      *(char *)(plVar1[1] + 0x144) = (char)*(undefined4 *)(param_1 + 0x150);
      *(undefined8 *)(plVar1[1] + 0x28) = *(undefined8 *)(param_1 + 0x158);
      *(undefined8 *)(plVar1[1] + 0x30) = *(undefined8 *)(param_1 + 200);
      *(ushort *)(plVar1[1] + 0x145) =
           *(ushort *)(plVar1[1] + 0x145) & 0xffdf |
           (ushort)((*(ushort *)(param_1 + 0x298) & 1) << 5);
      *(ushort *)(plVar1[1] + 0x145) =
           *(ushort *)(plVar1[1] + 0x145) & 0xfbff |
           (ushort)((*(ushort *)(param_1 + 0x298) & 0x40) << 4);
      *(ushort *)(plVar1[1] + 0x145) =
           *(ushort *)(plVar1[1] + 0x145) & 0xf7ff | *(ushort *)(param_1 + 0x298) & 0x800;
      *(ushort *)(plVar1[1] + 0x145) =
           *(ushort *)(plVar1[1] + 0x145) & 0xefff | *(ushort *)(param_1 + 0x298) & 0x1000;
      *(undefined4 *)(plVar1[1] + 0x140) = *(undefined4 *)(param_1 + 0x280);
      uVar4 = FUN_007f012c(plVar1[1] + 0x80,*(undefined8 *)(param_1 + 0x220),
                           *(undefined8 *)(param_1 + 0x228));
      if (((((uVar4 & 1) != 0) &&
           (uVar4 = FUN_007f0b14(plVar1[1] + 0x90,*(undefined8 *)(param_1 + 0x230),
                                 *(undefined8 *)(param_1 + 0x238)), (uVar4 & 1) != 0)) &&
          (uVar4 = FUN_007f0cec(plVar1[1] + 0xd0,*(undefined8 *)(param_1 + 0x1f0),
                                *(undefined8 *)(param_1 + 0x1f8)), (uVar4 & 1) != 0)) &&
         (uVar4 = FUN_007f012c(plVar1[1] + 0x118,*(undefined8 *)(param_1 + 0x288),
                               *(undefined8 *)(param_1 + 0x290)), (uVar4 & 1) != 0)) {
        if (*(char *)(param_1 + 0x120) == '\x01') {
          FUN_007f0e48(plVar1[1] + 0x68);
          if ((*(byte *)(plVar1[1] + 0x78) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                      );
          }
          if ((*(byte *)(param_1 + 0x120) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                      );
          }
          uVar4 = FUN_007f0cec(plVar1[1] + 0x68,*(undefined8 *)(param_1 + 0x110),
                               *(undefined8 *)(param_1 + 0x118));
          if ((uVar4 & 1) == 0) goto LAB_007f0aa0;
        }
        lVar6 = plVar1[1];
        if (*(long *)(param_1 + 0x1a8) != 0) {
          uVar3 = FUN_0078ce8c();
          lVar5 = *(long *)(lVar6 + 0x38);
          *(undefined8 *)(lVar6 + 0x38) = uVar3;
          if (lVar5 != 0) {
            FUN_0078cb3c(lVar5);
          }
          lVar6 = plVar1[1];
          if (*(long *)(lVar6 + 0x38) == 0) goto LAB_007f0aa0;
        }
        *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)(param_1 + 0x1b0);
        *(undefined8 *)(plVar1[1] + 0x48) = *(undefined8 *)(param_1 + 0x1b8);
        *(ushort *)(plVar1[1] + 0x145) =
             *(ushort *)(plVar1[1] + 0x145) & 0xfff7 | *(ushort *)(param_1 + 0x298) >> 1 & 8;
        lVar6 = *(long *)(param_1 + 0x240);
        if (lVar6 != 0) {
          FUN_00778898(lVar6);
        }
        lVar5 = *(long *)(plVar1[1] + 200);
        *(long *)(plVar1[1] + 200) = lVar6;
        if (lVar5 != 0) {
          FUN_00778828();
        }
        *(ushort *)(plVar1[1] + 0x145) =
             *(ushort *)(plVar1[1] + 0x145) & 0xfffd | *(ushort *)(param_1 + 0x298) >> 2 & 2;
        *(ushort *)(plVar1[1] + 0x145) =
             *(ushort *)(plVar1[1] + 0x145) & 0xfffb | *(ushort *)(param_1 + 0x298) & 4;
        *(ushort *)(plVar1[1] + 0x145) =
             *(ushort *)(plVar1[1] + 0x145) & 0xffbf | *(ushort *)(param_1 + 0x298) >> 3 & 0x40;
        plVar1[0x13] = *(long *)(param_1 + 0x58);
        uVar4 = (**(code **)(*plVar1 + 8))(plVar1);
        if (((uVar4 & 1) != 0) &&
           (uVar4 = (**(code **)(*(long *)(plVar1[0xd] + 0x10) + 0x58))
                              (*(undefined8 *)(plVar1[6] + 0x118)), (uVar4 & 1) != 0)) {
          return plVar1;
        }
      }
    }
  }
LAB_007f0aa0:
  FUN_007f05f8(plVar1);
  FUN_0078cb3c(plVar1);
  return (long *)0x0;
}


// ===== 007f0b14  FUN_007f0b14 =====

undefined8 FUN_007f0b14(long *param_1,undefined4 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar5 = *param_1;
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar10 = (ulong)-lVar5 >> 2;
    if (uVar6 - 1 <= (ulong)-lVar5 >> 2) {
      uVar10 = uVar6 - 1;
    }
    if ((1 < uVar10) && ((-(int)lVar5 & 3U) == 0)) {
      uVar10 = uVar10 & 0x3ffffffffffffffe;
      lVar5 = lVar5 + uVar10 * 4;
      uVar6 = uVar6 - uVar10;
      do {
        uVar10 = uVar10 - 2;
      } while (uVar10 != 0);
    }
    uVar7 = uVar6;
    for (uVar10 = uVar6 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      if (lVar5 == 0) goto LAB_007f0cd8;
      lVar5 = lVar5 + 4;
      uVar7 = uVar7 - 1;
    }
    if (2 < uVar6 - 1) {
      do {
        if ((((lVar5 == 0) || (lVar5 == -4)) || (lVar5 == -8)) || (lVar5 == -0xc)) {
LAB_007f0cd8:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        uVar7 = uVar7 - 4;
        lVar5 = lVar5 + 0x10;
      } while (uVar7 != 0);
    }
  }
  FUN_0078cb3c();
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3 != 0) {
    if (param_3 >> 0x3e != 0) {
      FUN_00777eb4(0xe,0,0x45,"../../third_party/boringssl/src/ssl/../crypto/mem_internal.h",0xea);
      return 0;
    }
    puVar2 = (undefined4 *)FUN_0078c954(param_3 * 4);
    *param_1 = (long)puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    uVar6 = param_3 * 4 - 4;
    param_1[1] = param_3;
    puVar3 = param_2;
    if (((0x7b < uVar6) && (puVar2 <= puVar2 + (param_3 - 1))) &&
       ((param_2 <= param_2 + (param_3 - 1) && (0x1f < (ulong)((long)puVar2 - (long)param_2))))) {
      puVar8 = (undefined8 *)(puVar2 + 4);
      puVar9 = (undefined8 *)(param_2 + 4);
      uVar6 = (uVar6 >> 2) + 1;
      uVar7 = uVar6 & 0x7ffffffffffffff8;
      uVar10 = uVar6 & 0x7ffffffffffffff8;
      puVar2 = puVar2 + uVar7;
      do {
        puVar1 = puVar9 + -1;
        uVar11 = puVar9[-2];
        uVar13 = puVar9[1];
        uVar12 = *puVar9;
        uVar10 = uVar10 - 8;
        puVar9 = puVar9 + 4;
        puVar8[-1] = *puVar1;
        puVar8[-2] = uVar11;
        puVar8[1] = uVar13;
        *puVar8 = uVar12;
        puVar8 = puVar8 + 4;
      } while (uVar10 != 0);
      puVar3 = param_2 + uVar7;
      if (uVar6 == uVar7) {
        return 1;
      }
    }
    do {
      puVar4 = puVar3 + 1;
      *puVar2 = *puVar3;
      puVar2 = puVar2 + 1;
      puVar3 = puVar4;
    } while (puVar4 != param_2 + param_3);
  }
  return 1;
}


// ===== 007f0cec  FUN_007f0cec =====

undefined8 FUN_007f0cec(long *param_1,undefined1 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if ((param_1[1] != 0) && ((ulong)-*param_1 <= param_1[1] - 1U)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  FUN_0078cb3c();
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3 == 0) {
    return 1;
  }
  puVar2 = (undefined1 *)FUN_0078c954(param_3);
  *param_1 = (long)puVar2;
  if (puVar2 == (undefined1 *)0x0) {
    return 0;
  }
  param_1[1] = param_3;
  puVar3 = param_2;
  if ((((7 < param_3) && (puVar2 <= puVar2 + (param_3 - 1))) && (param_2 <= param_2 + (param_3 - 1))
      ) && (0x1f < (ulong)((long)puVar2 - (long)param_2))) {
    if (param_3 < 0x20) {
      uVar5 = 0;
    }
    else {
      uVar5 = param_3 & 0xffffffffffffffe0;
      puVar7 = (undefined8 *)(puVar2 + 0x10);
      puVar6 = (undefined8 *)(param_2 + 0x10);
      uVar8 = param_3 & 0xffffffffffffffe0;
      do {
        puVar1 = puVar6 + -1;
        uVar10 = puVar6[-2];
        uVar12 = puVar6[1];
        uVar11 = *puVar6;
        uVar8 = uVar8 - 0x20;
        puVar6 = puVar6 + 4;
        puVar7[-1] = *puVar1;
        puVar7[-2] = uVar10;
        puVar7[1] = uVar12;
        *puVar7 = uVar11;
        puVar7 = puVar7 + 4;
      } while (uVar8 != 0);
      if (param_3 == uVar5) {
        return 1;
      }
      if ((param_3 & 0x18) == 0) {
        puVar2 = puVar2 + uVar5;
        puVar3 = param_2 + uVar5;
        goto LAB_007f0d50;
      }
    }
    uVar8 = param_3 & 0xfffffffffffffff8;
    puVar7 = (undefined8 *)(puVar2 + uVar5);
    puVar2 = puVar2 + uVar8;
    lVar9 = uVar5 - uVar8;
    puVar6 = (undefined8 *)(param_2 + uVar5);
    do {
      lVar9 = lVar9 + 8;
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar9 != 0);
    puVar3 = param_2 + uVar8;
    if (param_3 == uVar8) {
      return 1;
    }
  }
LAB_007f0d50:
  do {
    puVar4 = puVar3 + 1;
    *puVar2 = *puVar3;
    puVar2 = puVar2 + 1;
    puVar3 = puVar4;
  } while (puVar4 != param_2 + param_3);
  return 1;
}


// ===== 007f0e48  FUN_007f0e48 =====

long * FUN_007f0e48(long *param_1)

{
  if ((char)param_1[2] == '\x01') {
    if ((param_1[1] != 0) && ((ulong)-*param_1 <= param_1[1] - 1U)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    FUN_0078cb3c();
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  if (param_1 != (long *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 1;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 007f0ed8  FUN_007f0ed8 =====

void FUN_007f0ed8(long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*(long *)(*param_1 + 0x68) != 0) {
    (**(code **)(*(long *)(*(long *)(*param_1 + 0x68) + 0x10) + 0x60))(param_1);
  }
  if ((param_1[0x27] == 0) || (param_1[0x27] - 1U < (ulong)-param_1[0x26])) {
    FUN_0078cb3c();
    lVar1 = param_1[0x25];
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x25] = 0;
    if (lVar1 != 0) {
      FUN_00795334();
    }
    uVar3 = param_1[0x23];
    uVar2 = param_1[0x24];
    if (uVar2 != 0) {
      uVar4 = -uVar3 >> 1;
      if (uVar2 - 1 <= -uVar3 >> 1) {
        uVar4 = uVar2 - 1;
      }
      if ((1 < uVar4) && ((uVar3 & 1) == 0)) {
        uVar4 = uVar4 & 0x7ffffffffffffffe;
        uVar3 = uVar3 + uVar4 * 2;
        uVar2 = uVar2 - uVar4;
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      uVar5 = uVar2;
      for (uVar4 = uVar2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        if (uVar3 == 0) goto LAB_007f1344;
        uVar3 = uVar3 + 2;
        uVar5 = uVar5 - 1;
      }
      if (2 < uVar2 - 1) {
        do {
          if ((((uVar3 == 0) || (uVar3 == 0xfffffffffffffffe)) || (uVar3 == 0xfffffffffffffffc)) ||
             (uVar3 == 0xfffffffffffffffa)) goto LAB_007f1344;
          uVar5 = uVar5 - 4;
          uVar3 = uVar3 + 8;
        } while (uVar5 != 0);
      }
    }
    FUN_0078cb3c();
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    if ((param_1[0x22] == 0) || (param_1[0x22] - 1U < (ulong)-param_1[0x21])) {
      FUN_0078cb3c();
      param_1[0x21] = 0;
      param_1[0x22] = 0;
      if ((param_1[0x20] == 0) || (param_1[0x20] - 1U < (ulong)-param_1[0x1f])) {
        FUN_0078cb3c();
        param_1[0x1f] = 0;
        param_1[0x20] = 0;
        FUN_007f2ddc(param_1 + 0x1c);
        if ((param_1[0x1b] == 0) || (param_1[0x1b] - 1U < (ulong)-param_1[0x1a])) {
          FUN_0078cb3c();
          lVar1 = param_1[0x19];
          param_1[0x1a] = 0;
          param_1[0x1b] = 0;
          param_1[0x19] = 0;
          if (lVar1 != 0) {
            FUN_00778828();
          }
          uVar3 = param_1[0x17];
          uVar2 = param_1[0x18];
          if (uVar2 != 0) {
            uVar4 = -uVar3 >> 1;
            if (uVar2 - 1 <= -uVar3 >> 1) {
              uVar4 = uVar2 - 1;
            }
            if ((1 < uVar4) && ((uVar3 & 1) == 0)) {
              uVar4 = uVar4 & 0x7ffffffffffffffe;
              uVar3 = uVar3 + uVar4 * 2;
              uVar2 = uVar2 - uVar4;
              do {
                uVar4 = uVar4 - 2;
              } while (uVar4 != 0);
            }
            uVar5 = uVar2;
            for (uVar4 = uVar2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              if (uVar3 == 0) goto LAB_007f1344;
              uVar3 = uVar3 + 2;
              uVar5 = uVar5 - 1;
            }
            if (2 < uVar2 - 1) {
              do {
                if ((((uVar3 == 0) || (uVar3 == 0xfffffffffffffffe)) ||
                    (uVar3 == 0xfffffffffffffffc)) || (uVar3 == 0xfffffffffffffffa))
                goto LAB_007f1344;
                uVar5 = uVar5 - 4;
                uVar3 = uVar3 + 8;
              } while (uVar5 != 0);
            }
          }
          FUN_0078cb3c();
          param_1[0x17] = 0;
          param_1[0x18] = 0;
          if ((char)param_1[0x16] == '\x01') {
            if (((ulong)*(byte *)((long)param_1 + 0xae) != 0) &&
               ((ulong)-(long)(param_1 + 0x14) >> 1 <= (ulong)*(byte *)((long)param_1 + 0xae) - 1))
            goto LAB_007f1344;
            *(undefined1 *)((long)param_1 + 0xae) = 0;
          }
          lVar1 = param_1[0x12];
          uVar3 = param_1[0x13];
          if (uVar3 != 0) {
            uVar2 = (ulong)-lVar1 >> 2;
            if (uVar3 - 1 <= (ulong)-lVar1 >> 2) {
              uVar2 = uVar3 - 1;
            }
            if ((1 < uVar2) && ((-(int)lVar1 & 3U) == 0)) {
              uVar2 = uVar2 & 0x3ffffffffffffffe;
              lVar1 = lVar1 + uVar2 * 4;
              uVar3 = uVar3 - uVar2;
              do {
                uVar2 = uVar2 - 2;
              } while (uVar2 != 0);
            }
            uVar4 = uVar3;
            for (uVar2 = uVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
              if (lVar1 == 0) goto LAB_007f1344;
              lVar1 = lVar1 + 4;
              uVar4 = uVar4 - 1;
            }
            if (2 < uVar3 - 1) {
              do {
                if ((((lVar1 == 0) || (lVar1 == -4)) || (lVar1 == -8)) || (lVar1 == -0xc))
                goto LAB_007f1344;
                uVar4 = uVar4 - 4;
                lVar1 = lVar1 + 0x10;
              } while (uVar4 != 0);
            }
          }
          FUN_0078cb3c();
          param_1[0x12] = 0;
          param_1[0x13] = 0;
          uVar3 = param_1[0x10];
          uVar2 = param_1[0x11];
          if (uVar2 != 0) {
            uVar4 = -uVar3 >> 1;
            if (uVar2 - 1 <= -uVar3 >> 1) {
              uVar4 = uVar2 - 1;
            }
            if ((1 < uVar4) && ((uVar3 & 1) == 0)) {
              uVar4 = uVar4 & 0x7ffffffffffffffe;
              uVar3 = uVar3 + uVar4 * 2;
              uVar2 = uVar2 - uVar4;
              do {
                uVar4 = uVar4 - 2;
              } while (uVar4 != 0);
            }
            uVar5 = uVar2;
            for (uVar4 = uVar2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              if (uVar3 == 0) goto LAB_007f1344;
              uVar3 = uVar3 + 2;
              uVar5 = uVar5 - 1;
            }
            if (2 < uVar2 - 1) {
              do {
                if (((uVar3 == 0) || (uVar3 == 0xfffffffffffffffe)) ||
                   ((uVar3 == 0xfffffffffffffffc || (uVar3 == 0xfffffffffffffffa))))
                goto LAB_007f1344;
                uVar5 = uVar5 - 4;
                uVar3 = uVar3 + 8;
              } while (uVar5 != 0);
            }
          }
          FUN_0078cb3c();
          param_1[0x10] = 0;
          param_1[0x11] = 0;
          if ((char)param_1[0xf] == '\x01') {
            if ((param_1[0xe] != 0) && ((ulong)-param_1[0xd] <= param_1[0xe] - 1U))
            goto LAB_007f1344;
            FUN_0078cb3c();
            param_1[0xd] = 0;
            param_1[0xe] = 0;
          }
          lVar1 = param_1[0xc];
          param_1[0xc] = 0;
          if (lVar1 != 0) {
            FUN_00795370(lVar1,FUN_007f2dd0,0);
          }
          lVar1 = param_1[10];
          param_1[10] = 0;
          if (lVar1 != 0) {
            FUN_00795370(lVar1,FUN_007f2dd0,0);
          }
          lVar1 = param_1[7];
          param_1[7] = 0;
          if (lVar1 != 0) {
            FUN_0078cb3c();
          }
          lVar1 = param_1[4];
          param_1[4] = 0;
          if (lVar1 != 0) {
            FUN_0081b360(lVar1);
            FUN_0078cb3c(lVar1);
          }
          lVar1 = param_1[3];
          param_1[3] = 0;
          if (lVar1 != 0) {
            FUN_007f5f1c(lVar1);
            FUN_0078cb3c(lVar1);
            return;
          }
          return;
        }
      }
    }
  }
LAB_007f1344:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 007f1358  FUN_007f1358 =====

void FUN_007f1358(long param_1)

{
  if (param_1 != 0) {
    FUN_007f05f8();
    FUN_0078cb3c(param_1);
    return;
  }
  return;
}


// ===== 007f1390  FUN_007f1390 =====

void FUN_007f1390(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if ((param_2 != lVar1) || (param_3 != *(long *)(param_1 + 0x20))) {
    if ((param_2 != 0) && (param_2 == param_3)) {
      FUN_0076f82c(param_2);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    lVar2 = *(long *)(param_1 + 0x20);
    if (param_2 != lVar1) {
      *(long *)(param_1 + 0x18) = param_2;
      if ((param_3 == lVar2) && (lVar1 != lVar2)) {
        lVar2 = lVar1;
        if (lVar1 == 0) {
          return;
        }
        goto LAB_007f1430;
      }
      if (lVar1 != 0) {
        FUN_0076f794();
        lVar2 = *(long *)(param_1 + 0x20);
      }
    }
    *(long *)(param_1 + 0x20) = param_3;
    if (lVar2 != 0) {
LAB_007f1430:
      FUN_0076f794(lVar2);
      return;
    }
  }
  return;
}


// ===== 007f1448  FUN_007f1448 =====

int FUN_007f1448(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  undefined4 uVar5;
  byte local_24 [4];
  
  *(undefined4 *)(*(long *)(param_1 + 0x30) + 0xc4) = 0;
  FUN_00777808();
  FUN_00777974();
  if (*(long *)(param_1 + 0x28) == 0) {
    FUN_00777eb4(0x10,0,0x86,"../../third_party/boringssl/src/ssl/ssl_lib.cc",0x2dc);
    iVar1 = -1;
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 0x118);
    if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x810) >> 3 & 1) == 0)) {
      local_24[0] = 0;
      iVar1 = FUN_0080d514(lVar2,local_24);
      pcVar4 = *(code **)(param_1 + 0x60);
      uVar5 = 0x2002;
      if ((*(byte *)(param_1 + 0xa4) & 1) == 0) {
        uVar5 = 0x1002;
      }
      if ((pcVar4 != (code *)0x0) ||
         (pcVar4 = *(code **)(*(long *)(param_1 + 0x68) + 0xf0), pcVar4 != (code *)0x0)) {
        (*pcVar4)(param_1,uVar5,iVar1);
      }
      if (iVar1 < 1) {
        return iVar1;
      }
      if ((local_24[0] & 1) == 0) {
        lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 0x118);
        *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x118) = 0;
        if (lVar2 != 0) {
          FUN_0080bcd0(lVar2);
          FUN_0078cb3c(lVar2);
        }
        if ((((*(long *)(*(long *)(param_1 + 0x30) + 0x118) == 0) && (*(long *)(param_1 + 8) != 0))
            && ((*(ushort *)(*(long *)(param_1 + 8) + 0x145) >> 7 & 1) != 0)) &&
           (uVar3 = FUN_007f20c0(param_1), (uVar3 & 1) == 0)) {
          lVar2 = *(long *)(param_1 + 8);
          *(undefined8 *)(param_1 + 8) = 0;
          if (lVar2 != 0) {
            FUN_007f0ed8(lVar2);
            FUN_0078cb3c(lVar2);
          }
        }
      }
    }
    iVar1 = 1;
  }
  return iVar1;
}


// ===== 007f158c  FUN_007f158c =====

void FUN_007f158c(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_007f1448();
    return;
  }
  *(byte *)(param_1 + 0xa4) = *(byte *)(param_1 + 0xa4) & 0xfe;
  *(code **)(param_1 + 0x28) = FUN_008129cc;
  FUN_007f1448();
  return;
}


// ===== 007f15b8  FUN_007f15b8 =====

void FUN_007f15b8(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_007f1448();
    return;
  }
  *(byte *)(param_1 + 0xa4) = *(byte *)(param_1 + 0xa4) | 1;
  *(code **)(param_1 + 0x28) = FUN_00826ba4;
  FUN_007f1448();
  return;
}


// ===== 007f15e4  FUN_007f15e4 =====

uint FUN_007f15e4(long param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = FUN_007f319c();
  if (0x303 < uVar1) {
    uVar2 = FUN_0081b164(param_1,param_2);
    return uVar2 & 1;
  }
  if ((*(byte *)(param_1 + 0xa4) & 1) == 0) {
    if ((*(char *)(param_2 + 1) != '\0') || (*(long *)(param_2 + 0x10) != 0)) {
      FUN_008082d0(param_1,2,0x32);
      FUN_00777eb4(0x10,0,0x6e,"../../third_party/boringssl/src/ssl/ssl_lib.cc",0x319);
      return 0;
    }
    if (((*(int *)(param_1 + 0xa0) == 3) ||
        (*(ushort *)(*(long *)(param_1 + 0x30) + 0xdc) =
              *(ushort *)(*(long *)(param_1 + 0x30) + 0xdc) | 0x800, *(int *)(param_1 + 0xa0) == 4))
       || (iVar3 = FUN_007f1f48(param_1), iVar3 != 0)) {
      return 1;
    }
  }
  else {
    FUN_00777eb4(0x10,0,0xb6,"../../third_party/boringssl/src/ssl/ssl_lib.cc",0x312);
  }
  FUN_008082d0(param_1,2,100);
  return 0;
}


// ===== 007f16e4  FUN_007f16e4 =====

ulong FUN_007f16e4(long param_1,void *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong __n;
  
  if (*(long *)(param_1 + 0x98) == 0) {
    uVar4 = (ulong)param_3;
    uVar1 = FUN_007f17c8();
    if ((int)uVar1 < 1) {
      __n = (ulong)uVar1;
    }
    else {
      __n = uVar4;
      if (0 < (int)param_3) {
        uVar3 = *(ulong *)(*(long *)(param_1 + 0x30) + 0x88);
        __n = uVar3;
        if (uVar4 <= uVar3) {
          __n = uVar4;
        }
        if (uVar3 == 0) {
          __n = 0;
        }
        else {
          memcpy(param_2,*(void **)(*(long *)(param_1 + 0x30) + 0x80),__n);
          lVar2 = *(long *)(param_1 + 0x30);
          if (*(ulong *)(lVar2 + 0x88) < __n) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(ulong *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + __n;
          *(ulong *)(lVar2 + 0x88) = *(ulong *)(lVar2 + 0x88) - __n;
          if (*(long *)(*(long *)(param_1 + 0x30) + 0x88) == 0) {
            FUN_00808730(*(long *)(param_1 + 0x30) + 0x50);
          }
        }
      }
    }
  }
  else {
    FUN_00777eb4(0x10,0,0x42,"../../third_party/boringssl/src/ssl/ssl_lib.cc",0x3a9);
    __n = 0xffffffff;
  }
  return __n & 0xffffffff;
}


// ===== 007f17c8  FUN_007f17c8 =====

undefined8 FUN_007f17c8(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 local_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  byte local_38 [4];
  undefined1 local_34 [4];
  
  *(undefined4 *)(param_1[6] + 0xc4) = 0;
  FUN_00777808();
  FUN_00777974();
  if (param_1[5] == 0) {
    uVar2 = 0xe2;
    uVar4 = 0x34d;
LAB_007f183c:
    FUN_00777eb4(0x10,0,uVar2,"../../third_party/boringssl/src/ssl/ssl_lib.cc",uVar4);
    uVar2 = 0xffffffff;
  }
  else if (*(int *)(param_1[6] + 0xac) == 2) {
    FUN_007784d4(*(undefined8 *)(param_1[6] + 0xb8));
    uVar2 = 0xffffffff;
  }
  else {
    lVar5 = param_1[6];
    if (*(long *)(lVar5 + 0x88) == 0) {
      do {
        if ((*(ushort *)(lVar5 + 0xdc) >> 0xb & 1) != 0) {
          *(undefined4 *)(lVar5 + 0xc4) = 0x13;
          return 0xffffffff;
        }
        if ((*(char *)*param_1 != '\0') &&
           (uVar2 = (**(code **)((char *)*param_1 + 0x88))(param_1), (int)uVar2 < 1)) {
          return uVar2;
        }
        while ((*(long *)(param_1[6] + 0x118) != 0 &&
               ((*(ushort *)(*(long *)(param_1[6] + 0x118) + 0x810) & 0x1008) == 0))) {
          uVar2 = FUN_007f1448(param_1);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          if ((int)uVar2 == 0) {
            uVar2 = 0xd7;
            uVar4 = 0x36e;
            goto LAB_007f183c;
          }
        }
        puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
        local_80 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
        local_60 = &DAT_aaaaaaaaaaaaaaaa;
        uVar3 = (**(code **)(*param_1 + 0x18))(param_1,&local_80);
        if ((uVar3 & 1) == 0) {
          lVar5 = param_1[6];
          local_34[0] = 0x32;
          local_88 = 0;
          if (*(int *)(lVar5 + 0xac) == 2) {
            FUN_007784d4(*(undefined8 *)(lVar5 + 0xb8));
            local_34[0] = 0;
LAB_007f19cc:
            uVar3 = 4;
          }
          else {
            auVar7 = (**(code **)(*param_1 + 0x40))
                               (param_1,lVar5 + 0x80,&local_88,local_34,
                                *(long *)(lVar5 + 0x50) + (ulong)*(ushort *)(lVar5 + 0x58),
                                *(undefined2 *)(lVar5 + 0x5a));
            uVar3 = auVar7._0_8_ & 0xffffffff;
            if (auVar7._0_4_ == 4) {
              *(undefined4 *)(param_1[6] + 0xac) = 2;
              lVar6 = param_1[6];
              uVar2 = FUN_00778348(auVar7._0_8_,auVar7._8_8_,uVar3);
              lVar5 = *(long *)(lVar6 + 0xb8);
              *(undefined8 *)(lVar6 + 0xb8) = uVar2;
              if (lVar5 != 0) {
                FUN_007782c8(lVar5);
              }
              goto LAB_007f19cc;
            }
          }
          local_38[0] = 0xaa;
          uVar2 = FUN_00808990(param_1,local_38,uVar3,local_88,local_34[0]);
          if ((int)uVar2 < 1) {
            return uVar2;
          }
          if ((local_38[0] & 1) == 0) {
            *(undefined1 *)(param_1[6] + 0xd6) = 0;
          }
        }
        else {
          lVar5 = *(long *)(param_1[6] + 0x118);
          if ((lVar5 == 0) || ((*(uint *)(lVar5 + 0x810) >> 3 & 1) != 0)) {
            iVar1 = FUN_007f15e4(param_1,&local_80);
            if (iVar1 == 0) {
              FUN_007ef3b8(param_1);
              return 0xffffffff;
            }
            (**(code **)(*param_1 + 0x20))(param_1);
          }
          else {
            *(uint *)(lVar5 + 0x810) = *(uint *)(lVar5 + 0x810) & 0xffffeff7;
          }
        }
        lVar5 = param_1[6];
        uVar2 = 1;
      } while (*(long *)(lVar5 + 0x88) == 0);
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


// ===== 007f1a50  FUN_007f1a50 =====

ulong FUN_007f1a50(long *param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte local_44 [4];
  undefined8 local_28;
  
  *(undefined4 *)(param_1[6] + 0xc4) = 0;
  FUN_00777808();
  FUN_00777974();
  if (param_1[0x13] == 0) {
    if (param_1[5] != 0) {
      local_28 = 0;
      local_44[0] = 0;
      do {
        if ((*(long *)(param_1[6] + 0x118) != 0) &&
           ((*(ushort *)(*(long *)(param_1[6] + 0x118) + 0x810) & 0x2008) == 0)) {
          uVar2 = FUN_007f1448(param_1);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          if ((int)uVar2 == 0) {
            uVar3 = 0xd7;
            uVar4 = 0x3d2;
            goto LAB_007f1aa8;
          }
        }
        if (param_3 < 0) {
          uVar3 = 0x6f;
          uVar4 = 0x3d8;
          goto LAB_007f1aa8;
        }
        uVar1 = (**(code **)(*param_1 + 0x48))(param_1,local_44,&local_28,param_2,param_3);
        if ((local_44[0] & 1) == 0) {
          if (0 < (int)uVar1) {
            uVar1 = (uint)local_28;
          }
          return (ulong)uVar1;
        }
      } while( true );
    }
    uVar3 = 0xe2;
    uVar4 = 0x3c3;
  }
  else {
    uVar3 = 0x42;
    uVar4 = 0x3be;
  }
LAB_007f1aa8:
  FUN_00777eb4(0x10,0,uVar3,"../../third_party/boringssl/src/ssl/ssl_lib.cc",uVar4);
  return 0xffffffff;
}


// ===== 007f1b9c  FUN_007f1b9c =====

ulong FUN_007f1b9c(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  *(undefined4 *)(param_1[6] + 0xc4) = 0;
  FUN_00777808();
  FUN_00777974();
  if (param_1[5] == 0) {
    uVar2 = 0xe2;
    uVar3 = 0x400;
LAB_007f1c48:
    FUN_00777eb4(0x10,0,uVar2,"../../third_party/boringssl/src/ssl/ssl_lib.cc",uVar3);
    return 0xffffffff;
  }
  lVar4 = param_1[6];
  if ((*(long *)(lVar4 + 0x118) != 0) &&
     ((*(byte *)(*(long *)(lVar4 + 0x118) + 0x810) >> 3 & 1) == 0)) {
    return 1;
  }
  if ((*(byte *)((long)param_1 + 0xa4) >> 1 & 1) != 0) {
    *(undefined4 *)(lVar4 + 0xb0) = 1;
    *(undefined4 *)(param_1[6] + 0xac) = 1;
    return 1;
  }
  if (*(int *)(lVar4 + 0xb0) == 1) {
    if ((*(ushort *)(lVar4 + 0xdc) >> 10 & 1) == 0) {
      if (*(int *)(lVar4 + 0xac) != 1) {
        if (*(char *)*param_1 == '\0') {
          iVar1 = FUN_007f17c8(param_1);
          if (0 < iVar1) {
            uVar2 = 0x123;
            uVar3 = 0x42f;
            goto LAB_007f1c48;
          }
          if (*(int *)(param_1[6] + 0xac) != 1) {
            return 0xffffffff;
          }
        }
        else {
          if (*(int *)(lVar4 + 0xac) == 2) {
            FUN_007784d4(*(undefined8 *)(lVar4 + 0xb8));
            return 0xffffffff;
          }
          *(undefined4 *)(lVar4 + 0xac) = 1;
        }
      }
      goto LAB_007f1c9c;
    }
    iVar1 = (**(code **)(*param_1 + 0x50))(param_1);
  }
  else {
    iVar1 = FUN_008083ac(param_1,1,0);
  }
  if (iVar1 < 1) {
    return 0xffffffff;
  }
LAB_007f1c9c:
  return (ulong)(*(int *)(param_1[6] + 0xac) == 1);
}


// ===== 007f1d0c  FUN_007f1d0c =====

undefined8 FUN_007f1d0c(long *param_1,char param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_1[6];
  if ((*(ushort *)(lVar2 + 0xdc) >> 10 & 1) == 0) {
    uVar1 = FUN_008083ac(param_1,2,param_2);
    return uVar1;
  }
  if ((*(char *)(lVar2 + 0x1cd) == '\x02') && (*(char *)(lVar2 + 0x1ce) == param_2)) {
                    /* WARNING: Could not recover jumptable at 0x007f1d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x50))();
    return uVar1;
  }
  FUN_00777eb4(0x10,0,0xc2,"../../third_party/boringssl/src/ssl/ssl_lib.cc",0x441);
  return 0xffffffff;
}


// ===== 007f1d84  FUN_007f1d84 =====

uint FUN_007f1d84(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x118);
  if (lVar1 != 0) {
    return *(uint *)(lVar1 + 0x810) >> 10 & 1;
  }
  return 0;
}


// ===== 007f1da8  FUN_007f1da8 =====

int FUN_007f1da8(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (0 < param_2) {
    return 0;
  }
  uVar1 = FUN_007776ec();
  if (uVar1 != 0) {
    if (uVar1 >> 0x18 != 2) {
      return 1;
    }
    return 5;
  }
  iVar2 = *(int *)(*(long *)(param_1 + 0x30) + 0xc4);
  if (param_2 == 0) {
    if (iVar2 == 6) {
      return 6;
    }
    return 5;
  }
  if (iVar2 - 0xbU < 10) {
    return iVar2;
  }
  if (iVar2 == 4) {
    return 4;
  }
  if (iVar2 == 3) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    iVar2 = FUN_0076fd08(uVar4);
    if (iVar2 != 0) {
      return 3;
    }
    iVar2 = FUN_0076fcf8(uVar4);
    if (iVar2 != 0) {
      return 2;
    }
  }
  else {
    if (iVar2 != 2) {
      return 5;
    }
    if (*(long *)(param_1 + 0x98) != 0) {
      return 2;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    iVar2 = FUN_0076fcf8(uVar4);
    if (iVar2 != 0) {
      return 2;
    }
    iVar2 = FUN_0076fd08(uVar4);
    if (iVar2 != 0) {
      return 3;
    }
  }
  iVar2 = FUN_0076fd18(uVar4);
  if (iVar2 == 0) {
    return 5;
  }
  iVar3 = FUN_0076fd28(uVar4);
  iVar2 = 8;
  if (iVar3 != 3) {
    iVar2 = 5;
  }
  if (iVar3 != 2) {
    return iVar2;
  }
  return 7;
}


// ===== 007f1ecc  FUN_007f1ecc =====

void FUN_007f1ecc(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) | param_2;
  return;
}


// ===== 007f1ee4  FUN_007f1ee4 =====

void FUN_007f1ee4(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | param_2;
  return;
}


