// ===== 00c5f780  FUN_00c5f780 =====

undefined1  [16] FUN_00c5f780(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = *(long *)(param_1 + 0x188) - *(long *)(param_1 + 0x180);
  auVar3._8_8_ = lVar2 >> 3;
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x180);
  }
  auVar3._0_8_ = lVar1;
  return auVar3;
}


// ===== 00c5f798  FUN_00c5f798 =====

undefined1  [16] FUN_00c5f798(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = *(long *)(param_1 + 0x188) - *(long *)(param_1 + 0x180);
  auVar3._8_8_ = lVar2 >> 3;
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x180);
  }
  auVar3._0_8_ = lVar1;
  return auVar3;
}


// ===== 00c5f7b0  FUN_00c5f7b0 =====

undefined8 * FUN_00c5f7b0(long *param_1,undefined8 *param_2)

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
                    /* WARNING: Subroutine does not return */
    FUN_00c5cd28();
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
    if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
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


// ===== 00c5f8a4  FUN_00c5f8a4 =====

void FUN_00c5f8a4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00c5f8a4(param_1,*param_2);
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


// ===== 00c5f918  FUN_00c5f918 =====

undefined1  [16] FUN_00c5f918(undefined8 param_1,long *param_2,undefined8 param_3,ulong *param_4)

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
        if ((long *)*plVar2 == (long *)0x0) goto LAB_00c5f984;
      }
      if (*param_4 <= (ulong)plVar2[4]) {
        uVar4 = 0;
        goto LAB_00c5f9f0;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar6 = plVar2 + 1;
  }
LAB_00c5f984:
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
LAB_00c5f9f0:
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = plVar2;
  return auVar7;
}


// ===== 00c5fa20  FUN_00c5fa20 =====

void FUN_00c5fa20(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long local_48;
  long *local_40;
  long *plStack_38;
  
  if (param_2 != param_3) {
    plVar6 = param_1 + 1;
    if (*plVar6 == 0) {
      puVar2 = (undefined8 *)operator_new(0x28);
      if ((puVar2 == (undefined8 *)0x0) || (puVar2 == (undefined8 *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      lVar3 = param_2[4];
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = plVar6;
      puVar2[4] = lVar3;
      param_1[1] = (long)puVar2;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
      }
      FUN_005d5b94(puVar2,puVar2);
      param_1[2] = param_1[2] + 1;
      plVar5 = (long *)param_2[1];
      plVar4 = param_2;
      if ((long *)param_2[1] == (long *)0x0) {
        do {
          param_2 = (long *)plVar4[2];
          bVar1 = plVar4 != (long *)*param_2;
          plVar4 = param_2;
        } while (bVar1);
      }
      else {
        do {
          param_2 = plVar5;
          plVar5 = (long *)*param_2;
        } while ((long *)*param_2 != (long *)0x0);
      }
    }
    lVar3 = *plVar6;
    do {
      local_48 = lVar3;
      lVar3 = *(long *)(local_48 + 8);
    } while (*(long *)(local_48 + 8) != 0);
    if (param_2 != param_3) {
      do {
        local_40 = param_1;
        plStack_38 = &local_48;
        FUN_00c5fb6c(&local_40,param_2 + 4,param_2 + 4);
        plVar6 = (long *)param_2[1];
        plVar5 = param_2;
        if ((long *)param_2[1] == (long *)0x0) {
          do {
            param_2 = (long *)plVar5[2];
            bVar1 = plVar5 != (long *)*param_2;
            plVar5 = param_2;
          } while (bVar1);
        }
        else {
          do {
            param_2 = plVar6;
            plVar6 = (long *)*param_2;
          } while ((long *)*param_2 != (long *)0x0);
        }
      } while (param_2 != param_3);
    }
  }
  return;
}


// ===== 00c5fb6c  FUN_00c5fb6c =====

void FUN_00c5fb6c(long *param_1,ulong *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  plVar1 = (long *)*param_1;
  lVar9 = *(long *)param_1[1];
  uVar4 = *param_2;
  if (*(ulong *)(lVar9 + 0x20) < uVar4) {
    puVar2 = (undefined8 *)operator_new(0x28);
    if ((puVar2 == (undefined8 *)0x0) || (puVar2 == (undefined8 *)0xffffffffffffffe0)) {
LAB_00c5fcb8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar5 = *param_3;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = lVar9;
    puVar2[4] = uVar5;
    *(undefined8 **)(lVar9 + 8) = puVar2;
    puVar3 = puVar2;
    if (*(long *)*plVar1 != 0) {
      *plVar1 = *(long *)*plVar1;
      puVar3 = *(undefined8 **)(lVar9 + 8);
    }
    FUN_005d5b94(plVar1[1],puVar3);
    plVar1[2] = plVar1[2] + 1;
    *(undefined8 **)param_1[1] = puVar2;
  }
  else {
    plVar7 = plVar1 + 1;
    plVar6 = (long *)*plVar7;
    while (plVar8 = plVar7, plVar6 != (long *)0x0) {
      while (plVar7 = plVar6, (ulong)plVar7[4] <= uVar4) {
        if (uVar4 <= (ulong)plVar7[4]) {
          return;
        }
        plVar6 = (long *)plVar7[1];
        if ((long *)plVar7[1] == (long *)0x0) {
          plVar8 = plVar7 + 1;
          goto LAB_00c5fc4c;
        }
      }
      plVar6 = (long *)*plVar7;
    }
LAB_00c5fc4c:
    puVar2 = (undefined8 *)operator_new(0x28);
    if ((puVar2 == (undefined8 *)0x0) || (puVar2 == (undefined8 *)0xffffffffffffffe0))
    goto LAB_00c5fcb8;
    uVar5 = *param_3;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = plVar7;
    puVar2[4] = uVar5;
    *plVar8 = (long)puVar2;
    if (*(long *)*plVar1 != 0) {
      *plVar1 = *(long *)*plVar1;
      puVar2 = (undefined8 *)*plVar8;
    }
    FUN_005d5b94(plVar1[1],puVar2);
    plVar1[2] = plVar1[2] + 1;
  }
  return;
}


// ===== 00c5fccc  FUN_00c5fccc =====

void FUN_00c5fccc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00c5fccc(param_1,*param_2);
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


// ===== 00c5fd40  FUN_00c5fd40 =====

undefined1  [16]
FUN_00c5fd40(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong *puVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  puVar6 = (ulong *)*param_5;
  plVar3 = param_2 + 1;
  plVar7 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    uVar5 = *puVar6;
    plVar1 = (long *)*plVar3;
    do {
      while (plVar2 = plVar1, plVar3 = plVar2, uVar5 < (ulong)plVar2[4]) {
        plVar1 = (long *)*plVar2;
        plVar7 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_00c5fdac;
      }
      if (uVar5 <= (ulong)plVar2[4]) {
        uVar4 = 0;
        goto LAB_00c5fe18;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar7 = plVar2 + 1;
  }
LAB_00c5fdac:
  plVar2 = (long *)operator_new(0x30);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar5 = *puVar6;
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = (long)plVar3;
  plVar2[4] = uVar5;
  plVar2[5] = 0;
  *plVar7 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar3 = (long *)*plVar7;
  }
  FUN_005d5b94(param_2[1],plVar3);
  uVar4 = 1;
  param_2[2] = param_2[2] + 1;
LAB_00c5fe18:
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar2;
  return auVar8;
}


// ===== 00c5fe48  FUN_00c5fe48 =====

undefined1  [16] FUN_00c5fe48(undefined8 param_1,long *param_2,undefined8 param_3,ulong *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  plVar3 = param_2 + 1;
  plVar5 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar2 = plVar1, plVar3 = plVar2, *param_4 < (ulong)plVar2[4]) {
        plVar1 = (long *)*plVar2;
        plVar5 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_00c5feb4;
      }
      if (*param_4 <= (ulong)plVar2[4]) {
        uVar4 = 0;
        goto LAB_00c5ff20;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar5 = plVar2 + 1;
  }
LAB_00c5feb4:
  plVar2 = (long *)operator_new(0x30);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar7 = param_4[1];
  uVar6 = *param_4;
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = (long)plVar3;
  plVar2[5] = uVar7;
  plVar2[4] = uVar6;
  *plVar5 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar3 = (long *)*plVar5;
  }
  FUN_005d5b94(param_2[1],plVar3);
  uVar4 = 1;
  param_2[2] = param_2[2] + 1;
LAB_00c5ff20:
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar2;
  return auVar8;
}


// ===== 00c5ff50  FUN_00c5ff50 =====

void FUN_00c5ff50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4,
                 undefined8 *param_5,long param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  
  if (1 < param_4) {
    if (param_4 == 2) {
      uVar15 = param_2[-1];
      uVar14 = *param_1;
      iVar1 = FUN_00c5ecd4(*param_3,uVar15,uVar14,0,0,0);
      if (iVar1 == 0) {
        lVar4 = FUN_00c66c3c(uVar15);
        lVar5 = FUN_00c66c3c(uVar14);
        if (lVar5 <= lVar4) {
          return;
        }
      }
      else if (iVar1 < 1) {
        return;
      }
      uVar14 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar14;
    }
    else if ((long)param_4 < 0x81) {
      if ((param_1 != param_2) && (param_1 + 1 != param_2)) {
        lVar4 = 0;
        puVar6 = param_1 + 1;
        puVar10 = param_1;
        do {
          puVar7 = puVar6;
          uVar14 = *puVar10;
          uVar15 = puVar10[1];
          iVar1 = FUN_00c5ecd4(*param_3,uVar15,uVar14,0,0,0);
          if (iVar1 == 0) {
            lVar5 = FUN_00c66c3c(uVar15);
            lVar2 = FUN_00c66c3c(uVar14);
            if (lVar5 < lVar2) goto LAB_00c60060;
          }
          else if (0 < iVar1) {
LAB_00c60060:
            uVar14 = puVar10[1];
            puVar10[1] = *puVar10;
            puVar6 = param_1;
            lVar5 = lVar4;
            if (puVar10 != param_1) {
              do {
                puVar11 = (undefined8 *)((long)param_1 + lVar5);
                uVar15 = puVar11[-1];
                iVar1 = FUN_00c5ecd4(*param_3,uVar14,uVar15,0,0,0);
                if (iVar1 == 0) {
                  lVar2 = FUN_00c66c3c(uVar14);
                  lVar3 = FUN_00c66c3c(uVar15);
                  puVar6 = puVar10;
                  if (lVar3 <= lVar2) break;
                }
                else if (iVar1 < 1) {
                  puVar6 = (undefined8 *)((long)param_1 + lVar5);
                  break;
                }
                lVar5 = lVar5 + -8;
                puVar10 = puVar10 + -1;
                *puVar11 = puVar11[-1];
                puVar6 = param_1;
              } while (lVar5 != 0);
            }
            *puVar6 = uVar14;
          }
          puVar6 = puVar7 + 1;
          lVar4 = lVar4 + 8;
          puVar10 = puVar7;
        } while (puVar6 != param_2);
      }
    }
    else {
      uVar17 = param_4 >> 1;
      lVar4 = param_4 - uVar17;
      if (param_6 < (long)param_4) {
        FUN_00c5ff50();
        FUN_00c5ff50(param_1 + uVar17,param_2,param_3,lVar4,param_5,param_6);
        FUN_00c608f0(param_1,param_1 + uVar17,param_2,param_3,uVar17,lVar4,param_5,param_6);
        return;
      }
      FUN_00c603f4(param_1,param_1 + uVar17,param_3,uVar17,param_5);
      puVar6 = param_5 + uVar17;
      FUN_00c603f4(param_1 + uVar17,param_2,param_3,lVar4,param_5 + uVar17);
      puVar10 = param_5 + param_4;
      puVar7 = puVar6;
      if (uVar17 * 8 != 0) {
        puVar13 = param_1;
        puVar16 = param_5 + uVar17;
        puVar11 = param_1;
        puVar8 = param_5;
        do {
          if (puVar16 == puVar10) {
            if (puVar8 == puVar6) {
              return;
            }
            uVar17 = (long)param_5 + (uVar17 * 8 - (long)puVar8) + -8;
            if ((((0x127 < uVar17) &&
                 (puVar13 <= (undefined8 *)((long)puVar13 + (uVar17 & 0xfffffffffffffff8)))) &&
                (puVar8 <= (undefined8 *)((long)puVar8 + (uVar17 & 0xfffffffffffffff8)))) &&
               (0x1f < (ulong)((long)puVar11 - (long)puVar8))) {
              puVar10 = puVar13 + 2;
              uVar17 = (uVar17 >> 3) + 1;
              uVar9 = uVar17 & 0x3ffffffffffffffc;
              uVar12 = uVar17 & 0x3ffffffffffffffc;
              puVar13 = puVar13 + uVar9;
              puVar7 = puVar8 + 2;
              do {
                puVar11 = puVar7 + -1;
                uVar14 = puVar7[-2];
                uVar18 = puVar7[1];
                uVar15 = *puVar7;
                uVar12 = uVar12 - 4;
                puVar7 = puVar7 + 4;
                puVar10[-1] = *puVar11;
                puVar10[-2] = uVar14;
                puVar10[1] = uVar18;
                *puVar10 = uVar15;
                puVar10 = puVar10 + 4;
              } while (uVar12 != 0);
              puVar8 = puVar8 + uVar9;
              if (uVar17 == uVar9) {
                return;
              }
            }
            do {
              puVar10 = puVar8 + 1;
              *puVar13 = *puVar8;
              puVar8 = puVar10;
              puVar13 = puVar13 + 1;
            } while (puVar10 != puVar6);
            return;
          }
          uVar15 = *puVar16;
          uVar14 = *puVar8;
          iVar1 = FUN_00c5ecd4(*param_3,uVar15,uVar14,0,0,0);
          if (iVar1 == 0) {
            lVar4 = FUN_00c66c3c(uVar15);
            lVar5 = FUN_00c66c3c(uVar14);
            if (lVar4 < lVar5) goto LAB_00c60218;
LAB_00c60284:
            uVar14 = *puVar8;
            puVar7 = puVar16;
            puVar8 = puVar8 + 1;
          }
          else {
            if (iVar1 < 1) goto LAB_00c60284;
LAB_00c60218:
            puVar7 = puVar16 + 1;
            uVar14 = *puVar16;
          }
          puVar11 = puVar11 + 1;
          param_1 = puVar13 + 1;
          *puVar13 = uVar14;
          puVar13 = param_1;
          puVar16 = puVar7;
        } while (puVar8 != puVar6);
      }
      if (puVar7 != puVar10) {
        uVar17 = (long)puVar10 + (-8 - (long)puVar7);
        if (((0x117 < uVar17) &&
            (param_1 <= (undefined8 *)((long)param_1 + (uVar17 & 0xfffffffffffffff8)))) &&
           ((puVar7 <= (undefined8 *)((long)puVar7 + (uVar17 & 0xfffffffffffffff8)) &&
            (0x1f < (ulong)((long)param_1 - (long)puVar7))))) {
          puVar6 = param_1 + 2;
          puVar11 = puVar7 + 2;
          uVar17 = (uVar17 >> 3) + 1;
          uVar9 = uVar17 & 0x3ffffffffffffffc;
          uVar12 = uVar17 & 0x3ffffffffffffffc;
          puVar7 = puVar7 + uVar9;
          param_1 = param_1 + uVar9;
          do {
            puVar13 = puVar11 + -1;
            uVar14 = puVar11[-2];
            uVar18 = puVar11[1];
            uVar15 = *puVar11;
            uVar12 = uVar12 - 4;
            puVar11 = puVar11 + 4;
            puVar6[-1] = *puVar13;
            puVar6[-2] = uVar14;
            puVar6[1] = uVar18;
            *puVar6 = uVar15;
            puVar6 = puVar6 + 4;
          } while (uVar12 != 0);
          if (uVar17 == uVar9) {
            return;
          }
        }
        do {
          puVar6 = puVar7 + 1;
          *param_1 = *puVar7;
          puVar7 = puVar6;
          param_1 = param_1 + 1;
        } while (puVar6 != puVar10);
      }
    }
  }
  return;
}


// ===== 00c603f4  FUN_00c603f4 =====

void FUN_00c603f4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4,
                 undefined8 *param_5)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  
  if (param_4 == 0) {
    return;
  }
  if (param_4 != 2) {
    if (param_4 != 1) {
      if ((long)param_4 < 9) {
        if (param_1 == param_2) {
          return;
        }
        if (param_5 != (undefined8 *)0x0) {
          puVar12 = param_1 + 1;
          *param_5 = *param_1;
          if (puVar12 == param_2) {
            return;
          }
          lVar16 = 0;
          puVar17 = param_5;
          do {
            puVar9 = puVar17 + 1;
            uVar6 = *puVar17;
            uVar14 = *puVar12;
            iVar2 = FUN_00c5ecd4(*param_3,uVar14,uVar6,0,0,0);
            if (iVar2 == 0) {
              lVar5 = FUN_00c66c3c(uVar14);
              lVar3 = FUN_00c66c3c(uVar6);
              if (lVar3 <= lVar5) goto LAB_00c605c4;
LAB_00c6051c:
              if (puVar9 == (undefined8 *)0x0) break;
              puVar17[1] = *puVar17;
              puVar7 = param_5;
              lVar5 = lVar16;
              if (puVar17 != param_5) {
                do {
                  puVar11 = (undefined8 *)((long)param_5 + lVar5);
                  uVar14 = *puVar12;
                  uVar6 = puVar11[-1];
                  iVar2 = FUN_00c5ecd4(*param_3,uVar14,uVar6,0,0,0);
                  if (iVar2 == 0) {
                    lVar3 = FUN_00c66c3c(uVar14);
                    lVar4 = FUN_00c66c3c(uVar6);
                    puVar7 = puVar17;
                    if (lVar4 <= lVar3) break;
                  }
                  else if (iVar2 < 1) {
                    puVar7 = (undefined8 *)((long)param_5 + lVar5);
                    break;
                  }
                  lVar5 = lVar5 + -8;
                  puVar17 = puVar17 + -1;
                  *puVar11 = puVar11[-1];
                  puVar7 = param_5;
                } while (lVar5 != 0);
              }
              *puVar7 = *puVar12;
            }
            else {
              if (0 < iVar2) goto LAB_00c6051c;
LAB_00c605c4:
              if (puVar9 == (undefined8 *)0x0) break;
              *puVar9 = *puVar12;
            }
            puVar12 = puVar12 + 1;
            lVar16 = lVar16 + 8;
            puVar17 = puVar9;
            if (puVar12 == param_2) {
              return;
            }
          } while( true );
        }
      }
      else {
        uVar15 = param_4 >> 1;
        puVar12 = param_1 + uVar15;
        FUN_00c5ff50(param_1,param_1 + uVar15,param_3,uVar15,param_5,uVar15);
        FUN_00c5ff50(param_1 + uVar15,param_2,param_3,param_4 - uVar15,param_5 + uVar15,
                     param_4 - uVar15);
        puVar17 = param_5;
        puVar9 = puVar12;
        if ((uVar15 & 0x1fffffffffffffff) != 0) {
          uVar15 = -(long)param_5;
          puVar7 = param_5;
          puVar11 = param_1;
          puVar18 = puVar12;
          do {
            if (puVar18 == param_2) {
              if (puVar11 == puVar12) {
                return;
              }
              uVar13 = uVar15 >> 3;
              uVar8 = (ulong)((long)puVar12 + (-8 - (long)puVar11)) >> 3;
              uVar10 = uVar8;
              if (uVar13 <= uVar8) {
                uVar10 = uVar13;
              }
              puVar17 = puVar11;
              if (0x31 < uVar10) {
                uVar1 = uVar8;
                if (uVar13 <= uVar8) {
                  uVar1 = uVar13;
                }
                if (((((((int)param_1 - (int)puVar11 | -(int)param_5) & 7U) == 0) &&
                     (puVar7 <= puVar7 + uVar1)) && (puVar11 <= puVar11 + uVar1)) &&
                   (0x1f < -((long)puVar11 + uVar15))) {
                  uVar15 = uVar10 + 1 & 3;
                  uVar1 = 4;
                  if (uVar15 != 0) {
                    uVar1 = uVar15;
                  }
                  if (uVar8 <= uVar13) {
                    uVar13 = uVar8;
                  }
                  puVar17 = puVar11 + ((uVar10 + 1) - uVar1);
                  puVar9 = puVar7 + 2;
                  lVar16 = ~uVar13 + uVar1;
                  puVar7 = puVar7 + ((uVar13 + 1) - uVar1);
                  puVar11 = puVar11 + 2;
                  do {
                    puVar18 = puVar11 + -1;
                    uVar6 = puVar11[-2];
                    uVar19 = puVar11[1];
                    uVar14 = *puVar11;
                    lVar16 = lVar16 + 4;
                    puVar11 = puVar11 + 4;
                    puVar9[-1] = *puVar18;
                    puVar9[-2] = uVar6;
                    puVar9[1] = uVar19;
                    *puVar9 = uVar14;
                    puVar9 = puVar9 + 4;
                  } while (lVar16 != 0);
                }
              }
              while (puVar7 != (undefined8 *)0x0) {
                puVar9 = puVar17 + 1;
                *puVar7 = *puVar17;
                puVar7 = puVar7 + 1;
                puVar17 = puVar9;
                if (puVar9 == puVar12) {
                  return;
                }
              }
              goto LAB_00c608dc;
            }
            uVar14 = *puVar18;
            uVar6 = *puVar11;
            iVar2 = FUN_00c5ecd4(*param_3,uVar14,uVar6,0,0,0);
            if (iVar2 == 0) {
              lVar16 = FUN_00c66c3c(uVar14);
              lVar5 = FUN_00c66c3c(uVar6);
              if (lVar16 < lVar5) goto LAB_00c60640;
LAB_00c606b4:
              if (puVar7 == (undefined8 *)0x0) goto LAB_00c608dc;
              uVar6 = *puVar11;
              puVar11 = puVar11 + 1;
              puVar9 = puVar18;
            }
            else {
              if (iVar2 < 1) goto LAB_00c606b4;
LAB_00c60640:
              if (puVar7 == (undefined8 *)0x0) goto LAB_00c608dc;
              puVar9 = puVar18 + 1;
              uVar6 = *puVar18;
            }
            *puVar7 = uVar6;
            uVar15 = uVar15 - 8;
            puVar17 = puVar7 + 1;
            puVar7 = puVar7 + 1;
            puVar18 = puVar9;
          } while (puVar11 != puVar12);
        }
        if (puVar9 == param_2) {
          return;
        }
        uVar10 = (ulong)((long)param_2 + (-8 - (long)puVar9)) >> 3;
        uVar15 = uVar10;
        if ((ulong)-(long)puVar17 >> 3 <= uVar10) {
          uVar15 = (ulong)-(long)puVar17 >> 3;
        }
        if (0x2b < uVar15) {
          uVar13 = (ulong)-(long)puVar17 >> 3;
          if (uVar13 <= uVar10) {
            uVar10 = uVar13;
          }
          if ((((((int)param_2 - (int)puVar9 | (uint)-(long)puVar17) & 7) == 0) &&
              (puVar17 <= puVar17 + uVar10)) &&
             ((puVar9 <= puVar9 + uVar10 && (0x1f < (ulong)((long)puVar17 - (long)puVar9))))) {
            puVar12 = puVar9 + 2;
            uVar10 = uVar15 + 1 & 3;
            puVar7 = puVar17 + 2;
            uVar13 = 4;
            if (uVar10 != 0) {
              uVar13 = uVar10;
            }
            lVar16 = (uVar15 + 1) - uVar13;
            puVar17 = puVar17 + lVar16;
            puVar9 = puVar9 + lVar16;
            do {
              puVar11 = puVar12 + -1;
              uVar6 = puVar12[-2];
              uVar19 = puVar12[1];
              uVar14 = *puVar12;
              lVar16 = lVar16 + -4;
              puVar12 = puVar12 + 4;
              puVar7[-1] = *puVar11;
              puVar7[-2] = uVar6;
              puVar7[1] = uVar19;
              *puVar7 = uVar14;
              puVar7 = puVar7 + 4;
            } while (lVar16 != 0);
          }
        }
        while (puVar17 != (undefined8 *)0x0) {
          puVar12 = puVar9 + 1;
          *puVar17 = *puVar9;
          puVar17 = puVar17 + 1;
          puVar9 = puVar12;
          if (puVar12 == param_2) {
            return;
          }
        }
      }
      goto LAB_00c608dc;
    }
    puVar12 = param_5;
    if (param_5 == (undefined8 *)0x0) goto LAB_00c608dc;
LAB_00c60488:
    uVar6 = *param_1;
LAB_00c606f0:
    *puVar12 = uVar6;
    return;
  }
  uVar14 = param_2[-1];
  uVar6 = *param_1;
  iVar2 = FUN_00c5ecd4(*param_3,uVar14,uVar6,0,0,0);
  if (iVar2 == 0) {
    lVar16 = FUN_00c66c3c(uVar14);
    lVar5 = FUN_00c66c3c(uVar6);
    if (lVar16 < lVar5) goto LAB_00c60478;
  }
  else if (0 < iVar2) {
LAB_00c60478:
    if (param_5 == (undefined8 *)0x0) goto LAB_00c608dc;
    puVar12 = param_5 + 1;
    *param_5 = param_2[-1];
    if (puVar12 == (undefined8 *)0x0) goto LAB_00c608dc;
    goto LAB_00c60488;
  }
  if (param_5 != (undefined8 *)0x0) {
    puVar12 = param_5 + 1;
    *param_5 = *param_1;
    if (puVar12 != (undefined8 *)0x0) {
      uVar6 = param_2[-1];
      goto LAB_00c606f0;
    }
  }
LAB_00c608dc:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c608f0  FUN_00c608f0 =====

void FUN_00c608f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 long param_5,long param_6,undefined8 *param_7,long param_8)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  
  if (param_6 != 0) {
LAB_00c60938:
    if ((param_8 < param_6) && (param_8 < param_5)) {
      if (param_5 == 0) {
        return;
      }
      do {
        uVar12 = *param_2;
        uVar9 = *param_1;
        iVar2 = FUN_00c5ecd4(*param_4,uVar12,uVar9,0,0,0);
        if (iVar2 == 0) {
          lVar11 = FUN_00c66c3c(uVar12);
          lVar13 = FUN_00c66c3c(uVar9);
          if (lVar11 < lVar13) goto LAB_00c609a8;
        }
        else if (0 < iVar2) goto LAB_00c609a8;
        param_5 = param_5 + -1;
        param_1 = param_1 + 1;
        if (param_5 == 0) {
          return;
        }
      } while( true );
    }
    if (param_5 <= param_6) {
      if (param_1 == param_2) {
        return;
      }
      uVar15 = (ulong)((long)param_2 + (-8 - (long)param_1)) >> 3;
      uVar10 = uVar15;
      if ((ulong)-(long)param_7 >> 3 <= uVar15) {
        uVar10 = (ulong)-(long)param_7 >> 3;
      }
      puVar6 = param_1;
      puVar5 = param_7;
      if (0x2b < uVar10) {
        uVar8 = (ulong)-(long)param_7 >> 3;
        if (uVar8 <= uVar15) {
          uVar15 = uVar8;
        }
        if (((((((int)param_2 - (int)param_1 | (uint)-(long)param_7) & 7) == 0) &&
             (param_7 <= param_7 + uVar15)) && (param_1 <= param_1 + uVar15)) &&
           (0x1f < (ulong)((long)param_7 - (long)param_1))) {
          puVar4 = param_7 + 2;
          uVar15 = uVar10 + 1 & 3;
          uVar8 = 4;
          if (uVar15 != 0) {
            uVar8 = uVar15;
          }
          puVar7 = param_1 + 2;
          lVar11 = (uVar10 + 1) - uVar8;
          puVar5 = param_7 + lVar11;
          puVar6 = param_1 + lVar11;
          do {
            puVar1 = puVar7 + -1;
            uVar9 = puVar7[-2];
            uVar14 = puVar7[1];
            uVar12 = *puVar7;
            lVar11 = lVar11 + -4;
            puVar7 = puVar7 + 4;
            puVar4[-1] = *puVar1;
            puVar4[-2] = uVar9;
            puVar4[1] = uVar14;
            *puVar4 = uVar12;
            puVar4 = puVar4 + 4;
          } while (lVar11 != 0);
        }
      }
      lVar11 = -(long)puVar5;
      do {
        if (puVar5 == (undefined8 *)0x0) goto LAB_00c60fe0;
        puVar4 = puVar6 + 1;
        lVar11 = lVar11 + -8;
        puVar7 = puVar5 + 1;
        *puVar5 = *puVar6;
        puVar6 = puVar4;
        puVar5 = puVar7;
      } while (puVar4 != param_2);
      if (puVar7 == param_7) {
        return;
      }
      do {
        if (param_2 == param_3) {
          memmove(param_1,param_7,-((long)param_7 + lVar11));
          return;
        }
        uVar12 = *param_2;
        uVar9 = *param_7;
        iVar2 = FUN_00c5ecd4(*param_4,uVar12,uVar9,0,0,0);
        if (iVar2 == 0) {
          lVar13 = FUN_00c66c3c(uVar12);
          lVar3 = FUN_00c66c3c(uVar9);
          if (lVar3 <= lVar13) goto LAB_00c60f10;
LAB_00c60ea8:
          puVar5 = param_2 + 1;
          uVar9 = *param_2;
        }
        else {
          if (0 < iVar2) goto LAB_00c60ea8;
LAB_00c60f10:
          uVar9 = *param_7;
          param_7 = param_7 + 1;
          puVar5 = param_2;
        }
        *param_1 = uVar9;
        param_1 = param_1 + 1;
        param_2 = puVar5;
        if (puVar7 == param_7) {
          return;
        }
      } while( true );
    }
    if (param_2 == param_3) {
      return;
    }
    uVar15 = (ulong)((long)param_3 + (-8 - (long)param_2)) >> 3;
    uVar10 = uVar15;
    if ((ulong)-(long)param_7 >> 3 <= uVar15) {
      uVar10 = (ulong)-(long)param_7 >> 3;
    }
    puVar6 = param_2;
    puVar5 = param_7;
    if (0x2b < uVar10) {
      uVar8 = (ulong)-(long)param_7 >> 3;
      if (uVar8 <= uVar15) {
        uVar15 = uVar8;
      }
      if ((((((int)param_3 - (int)param_2 | (uint)-(long)param_7) & 7) == 0) &&
          (param_7 <= param_7 + uVar15)) &&
         ((param_2 <= param_2 + uVar15 && (0x1f < (ulong)((long)param_7 - (long)param_2))))) {
        puVar4 = param_7 + 2;
        uVar15 = uVar10 + 1 & 3;
        uVar8 = 4;
        if (uVar15 != 0) {
          uVar8 = uVar15;
        }
        puVar7 = param_2 + 2;
        lVar11 = (uVar10 + 1) - uVar8;
        puVar5 = param_7 + lVar11;
        puVar6 = param_2 + lVar11;
        do {
          puVar1 = puVar7 + -1;
          uVar9 = puVar7[-2];
          uVar14 = puVar7[1];
          uVar12 = *puVar7;
          lVar11 = lVar11 + -4;
          puVar7 = puVar7 + 4;
          puVar4[-1] = *puVar1;
          puVar4[-2] = uVar9;
          puVar4[1] = uVar14;
          *puVar4 = uVar12;
          puVar4 = puVar4 + 4;
        } while (lVar11 != 0);
      }
    }
    do {
      if (puVar5 == (undefined8 *)0x0) {
LAB_00c60fe0:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar7 = puVar6 + 1;
      puVar4 = puVar5 + 1;
      *puVar5 = *puVar6;
      puVar6 = puVar7;
      puVar5 = puVar4;
    } while (puVar7 != param_3);
    if (puVar4 == param_7) {
      return;
    }
    lVar11 = 0;
    do {
      if (param_2 == param_1) {
        if (param_7 == puVar4) {
          return;
        }
        puVar5 = (undefined8 *)((long)param_3 + lVar11);
        uVar10 = ((long)puVar4 - (long)param_7) - 8;
        puVar6 = puVar4;
        if (((0xf7 < uVar10) &&
            ((long)param_3 + (lVar11 - ((long)puVar4 - (long)param_7 & 0xfffffffffffffff8U)) <=
             (ulong)((long)param_3 + lVar11 + -8))) &&
           (0x1f < (ulong)((long)puVar4 + (-lVar11 - (long)param_3)))) {
          puVar7 = puVar5 + -2;
          uVar10 = (uVar10 >> 3) + 1;
          uVar15 = uVar10 & 0x3ffffffffffffffc;
          uVar8 = uVar10 & 0x3ffffffffffffffc;
          puVar6 = puVar4 + -uVar15;
          puVar5 = (undefined8 *)((long)param_3 + lVar11 + uVar15 * -8);
          puVar4 = puVar4 + -2;
          do {
            puVar1 = puVar4 + -1;
            uVar14 = puVar4[-2];
            uVar12 = puVar4[1];
            uVar9 = *puVar4;
            uVar8 = uVar8 - 4;
            puVar4 = puVar4 + -4;
            puVar7[-1] = *puVar1;
            puVar7[-2] = uVar14;
            puVar7[1] = uVar12;
            *puVar7 = uVar9;
            puVar7 = puVar7 + -4;
          } while (uVar8 != 0);
          if (uVar10 == uVar15) {
            return;
          }
        }
        do {
          puVar5 = puVar5 + -1;
          puVar6 = puVar6 + -1;
          *puVar5 = *puVar6;
        } while (puVar6 != param_7);
        return;
      }
      puVar5 = param_2 + -1;
      uVar9 = *puVar5;
      puVar7 = puVar4 + -1;
      uVar12 = *puVar7;
      iVar2 = FUN_00c5ecd4(*param_4,uVar12,uVar9,0,0,0);
      puVar6 = puVar5;
      if (iVar2 == 0) {
        lVar13 = FUN_00c66c3c(uVar12);
        lVar3 = FUN_00c66c3c(uVar9);
        if (lVar3 <= lVar13) goto LAB_00c60cf8;
      }
      else if (iVar2 < 1) {
LAB_00c60cf8:
        puVar5 = param_2;
        puVar6 = puVar7;
        puVar4 = puVar7;
      }
      *(undefined8 *)((long)param_3 + lVar11 + -8) = *puVar6;
      lVar11 = lVar11 + -8;
      param_2 = puVar5;
    } while (puVar4 != param_7);
  }
  return;
LAB_00c609a8:
  if (param_5 < param_6) {
    lVar13 = param_6 / 2;
    puVar6 = param_2 + lVar13;
    puVar5 = param_2;
    if (param_1 != param_2) {
      uVar10 = (long)param_2 - (long)param_1 >> 3;
      puVar5 = param_1;
      do {
        uVar15 = uVar10 >> 1;
        uVar12 = *puVar6;
        uVar9 = puVar5[uVar15];
        iVar2 = FUN_00c5ecd4(*param_4,uVar12,uVar9,0,0,0);
        if (iVar2 == 0) {
          lVar11 = FUN_00c66c3c(uVar12);
          lVar3 = FUN_00c66c3c(uVar9);
          if (lVar3 <= lVar11) goto LAB_00c609ec;
        }
        else if (iVar2 < 1) {
LAB_00c609ec:
          puVar5 = puVar5 + uVar15 + 1;
          uVar15 = uVar10 + ~uVar15;
        }
        uVar10 = uVar15;
      } while (uVar10 != 0);
    }
    lVar11 = (long)puVar5 - (long)param_1 >> 3;
  }
  else {
    if (param_5 == 1) {
      uVar9 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar9;
      return;
    }
    lVar11 = param_5 / 2;
    puVar5 = param_1 + lVar11;
    puVar6 = param_3;
    if ((long)param_3 - (long)param_2 != 0) {
      uVar10 = (long)param_3 - (long)param_2 >> 3;
      uVar9 = *param_4;
      puVar6 = param_2;
      do {
        uVar15 = uVar10 >> 1;
        uVar14 = *puVar5;
        uVar12 = puVar6[uVar15];
        iVar2 = FUN_00c5ecd4(uVar9,uVar12,uVar14,0,0,0);
        if (iVar2 == 0) {
          lVar13 = FUN_00c66c3c(uVar12);
          lVar3 = FUN_00c66c3c(uVar14);
          if (lVar13 < lVar3) goto LAB_00c60a9c;
        }
        else if (0 < iVar2) {
LAB_00c60a9c:
          puVar6 = puVar6 + uVar15 + 1;
          uVar15 = uVar10 + ~uVar15;
        }
        uVar10 = uVar15;
      } while (uVar10 != 0);
    }
    lVar13 = (long)puVar6 - (long)param_2 >> 3;
  }
  param_5 = param_5 - lVar11;
  param_6 = param_6 - lVar13;
  puVar4 = (undefined8 *)FUN_00c61040(puVar5,param_2,puVar6);
  if (lVar11 + lVar13 < param_5 + param_6) {
    FUN_00c608f0(param_1,puVar5,puVar4,param_4,lVar11,lVar13,param_7,param_8);
    param_1 = puVar4;
    param_2 = puVar6;
  }
  else {
    FUN_00c608f0(puVar4,puVar6,param_3,param_4,param_5,param_6,param_7,param_8);
    param_5 = lVar11;
    param_6 = lVar13;
    param_3 = puVar4;
    param_2 = puVar5;
  }
  if (param_6 == 0) {
    return;
  }
  goto LAB_00c60938;
}


// ===== 00c61040  FUN_00c61040 =====

undefined1  [16] FUN_00c61040(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  size_t __n;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  
  puVar5 = param_3;
  if ((param_1 != param_2) && (puVar5 = param_1, param_2 != param_3)) {
    if (param_1 + 1 == param_2) {
      uVar2 = *param_1;
      memmove(param_1,param_1 + 1,(long)param_3 - (long)param_2);
      puVar5 = (undefined8 *)((long)param_1 + ((long)param_3 - (long)param_2));
      *puVar5 = uVar2;
    }
    else if (param_2 + 1 == param_3) {
      uVar2 = param_3[-1];
      __n = (long)(param_3 + -1) - (long)param_1;
      memmove((void *)((long)param_3 - __n),param_1,__n);
      *param_1 = uVar2;
      puVar5 = (undefined8 *)((long)param_3 - __n);
    }
    else {
      lVar12 = (long)param_2 - (long)param_1 >> 3;
      lVar11 = (long)param_3 - (long)param_2 >> 3;
      lVar7 = lVar11;
      if (lVar12 <= lVar11) {
        lVar7 = lVar12;
      }
      while (puVar1 = puVar5, 0 < lVar7) {
        while (lVar11 < lVar12) {
          lVar7 = lVar12;
          do {
            lVar12 = lVar7 - lVar11;
            if (lVar12 * 8 + lVar7 * -8 != 0) {
              puVar5 = puVar1 + lVar7;
              puVar16 = puVar1 + lVar12;
              uVar15 = (long)puVar5 + (-8 - (long)puVar16);
              puVar6 = puVar5;
              if (0x97 < uVar15) {
                puVar4 = (undefined8 *)((long)puVar16 + (uVar15 & 0xfffffffffffffff8));
                puVar9 = (undefined8 *)((long)puVar5 + (uVar15 & 0xfffffffffffffff8));
                if ((puVar16 <= puVar4 && puVar5 <= puVar9) &&
                   ((puVar9 + 1 <= puVar16 || (puVar4 + 1 <= puVar5)))) {
                  puVar6 = puVar5 + 2;
                  uVar15 = (uVar15 >> 3) + 1;
                  uVar3 = uVar15 & 0x3ffffffffffffffc;
                  puVar4 = puVar16 + 2;
                  uVar8 = (lVar11 * 8 - 8U >> 3) + 1 & 0x3ffffffffffffffc;
                  do {
                    uVar2 = puVar6[-2];
                    uVar19 = puVar6[1];
                    uVar18 = *puVar6;
                    uVar8 = uVar8 - 4;
                    uVar21 = puVar4[-1];
                    uVar20 = puVar4[-2];
                    uVar23 = puVar4[1];
                    uVar22 = *puVar4;
                    puVar4[-1] = puVar6[-1];
                    puVar4[-2] = uVar2;
                    puVar4[1] = uVar19;
                    *puVar4 = uVar18;
                    puVar4 = puVar4 + 4;
                    puVar6[-1] = uVar21;
                    puVar6[-2] = uVar20;
                    puVar6[1] = uVar23;
                    *puVar6 = uVar22;
                    puVar6 = puVar6 + 4;
                  } while (uVar8 != 0);
                  puVar6 = puVar5 + uVar3;
                  puVar16 = puVar16 + uVar3;
                  if (uVar15 == uVar3) goto LAB_00c610dc;
                }
              }
              do {
                uVar2 = *puVar16;
                puVar4 = puVar16 + 1;
                *puVar16 = *puVar6;
                *puVar6 = uVar2;
                puVar6 = puVar6 + 1;
                puVar16 = puVar4;
              } while (puVar4 != puVar5);
            }
LAB_00c610dc:
            lVar7 = lVar12;
          } while (lVar11 < lVar12);
          if (lVar12 < 1) goto LAB_00c612dc;
        }
        lVar14 = lVar12 * 8;
        lVar13 = 0;
        puVar16 = puVar1 + 2;
        puVar5 = puVar1;
        do {
          if (lVar14 != 0) {
            lVar7 = (-8 - (long)puVar1) + lVar12 * -8 * lVar13;
            puVar6 = puVar5 + lVar12;
            uVar15 = (long)puVar6 + lVar7;
            if (((uVar15 < 0x88) ||
                ((undefined8 *)((long)puVar5 + (uVar15 & 0xfffffffffffffff8)) < puVar5 ||
                 (undefined8 *)((long)puVar6 + (uVar15 & 0xfffffffffffffff8)) < puVar6)) ||
               ((uVar8 = (long)puVar6 + lVar7 & 0xfffffffffffffff8,
                puVar5 < (undefined8 *)((long)puVar6 + uVar8 + 8) &&
                (puVar6 < (undefined8 *)((long)puVar1 + uVar8 + lVar14 * lVar13 + 8))))) {
              puVar4 = puVar5 + lVar12;
              puVar9 = puVar5;
            }
            else {
              puVar10 = puVar6 + 2;
              uVar15 = (uVar15 >> 3) + 1;
              uVar3 = uVar15 & 0x3ffffffffffffffc;
              puVar4 = puVar6 + uVar3;
              puVar9 = puVar5 + uVar3;
              uVar8 = (lVar14 - 8U >> 3) + 1 & 0x3ffffffffffffffc;
              puVar17 = puVar16;
              do {
                uVar2 = puVar10[-2];
                uVar19 = puVar10[1];
                uVar18 = *puVar10;
                uVar8 = uVar8 - 4;
                uVar21 = puVar17[-1];
                uVar20 = puVar17[-2];
                uVar23 = puVar17[1];
                uVar22 = *puVar17;
                puVar17[-1] = puVar10[-1];
                puVar17[-2] = uVar2;
                puVar17[1] = uVar19;
                *puVar17 = uVar18;
                puVar17 = puVar17 + 4;
                puVar10[-1] = uVar21;
                puVar10[-2] = uVar20;
                puVar10[1] = uVar23;
                *puVar10 = uVar22;
                puVar10 = puVar10 + 4;
              } while (uVar8 != 0);
              if (uVar15 == uVar3) goto LAB_00c611e4;
            }
            do {
              uVar2 = *puVar9;
              puVar10 = puVar9 + 1;
              *puVar9 = *puVar4;
              *puVar4 = uVar2;
              puVar4 = puVar4 + 1;
              puVar9 = puVar10;
            } while (puVar10 != puVar6);
          }
LAB_00c611e4:
          lVar11 = lVar11 - lVar12;
          puVar5 = puVar5 + lVar12;
          lVar13 = lVar13 + 1;
          puVar16 = puVar16 + lVar12;
          lVar7 = lVar11;
        } while (lVar12 <= lVar11);
      }
LAB_00c612dc:
      puVar5 = (undefined8 *)(((long)param_3 - (long)param_2) + (long)param_1);
    }
  }
  auVar24._8_8_ = param_3;
  auVar24._0_8_ = puVar5;
  return auVar24;
}


// ===== 00c61350  FUN_00c61350 =====

void FUN_00c61350(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00c61368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x60) + 0x48))(*(long **)(param_1 + 0x60),param_1,param_2);
  return;
}


// ===== 00c6136c  FUN_00c6136c =====

void FUN_00c6136c(long param_1,undefined8 param_2)

{
  FUN_00c61384(*(undefined8 *)(param_1 + 0x60),param_1,param_2);
  return;
}


// ===== 00c61384  FUN_00c61384 =====

/* WARNING: Removing unreachable block (ram,0x00c61630) */
/* WARNING: Removing unreachable block (ram,0x00c614e8) */
/* WARNING: Removing unreachable block (ram,0x00c614cc) */
/* WARNING: Removing unreachable block (ram,0x00c616b8) */
/* WARNING: Removing unreachable block (ram,0x00c61694) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c61384(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 local_170;
  void *local_168 [2];
  char cStack_151;
  void *local_150 [2];
  char cStack_139;
  void *local_138 [2];
  char cStack_121;
  undefined1 uStack_119;
  char *local_118;
  undefined8 local_110;
  undefined1 *local_108;
  void **local_100;
  char **ppcStack_f8;
  char *local_f0;
  void ***pppvStack_e8;
  void **local_e0;
  char **ppcStack_d8;
  undefined *local_d0;
  void ***pppvStack_c8;
  void **local_c0;
  undefined **ppuStack_b8;
  char *local_b0;
  void ***pppvStack_a8;
  ulong local_a0;
  char **local_98;
  char *local_90;
  ulong *puStack_88;
  char *local_80;
  ulong uStack_78;
  char **local_70;
  char **local_68;
  char *local_58;
  ulong uStack_50;
  undefined7 local_48;
  undefined1 uStack_41;
  
  uVar9 = FUN_009881a4(param_1 + 0x40);
  if ((uVar9 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x48) == 0) {
    return;
  }
  uVar8 = FUN_00c6a078(param_3);
  uVar9 = FUN_004022fc();
  if ((uVar9 & 1) == 0) {
    local_118 = "../../p2p/base/connection.cc";
    local_110 = 0x3272;
    local_108 = &uStack_119;
    FUN_00c61eb8(local_138,param_1);
    ppcStack_f8 = &local_118;
    pppvStack_e8 = &local_100;
    local_f0 = ": Received ";
    local_100 = local_138;
    FUN_00c6dac8(local_150,*(undefined2 *)(param_3 + 0x20));
    ppcStack_d8 = &local_f0;
    pppvStack_c8 = &local_e0;
    lVar13 = *(long *)(param_2 + 0x38);
    local_d0 = &DAT_0019f39d;
    lVar12 = (long)*(char *)(lVar13 + 0x3f);
    if (lVar12 < 0) {
      lVar10 = *(long *)(lVar13 + 0x28);
      lVar12 = *(long *)(lVar13 + 0x30);
    }
    else {
      lVar10 = lVar13 + 0x28;
    }
    local_e0 = local_150;
    FUN_00624c34(local_168,lVar10,lVar12);
    ppuStack_b8 = &local_d0;
    pppvStack_a8 = &local_c0;
    local_b0 = " code=";
    local_98 = &local_b0;
    puStack_88 = &local_a0;
    local_90 = " rtt=";
    local_c0 = local_168;
    local_a0 = (ulong)uVar8;
    local_170 = FUN_00c6951c(param_2);
    FUN_005f3380(&local_58,&local_170);
    local_70 = (char **)CONCAT17(uStack_41,local_48);
    local_68 = &local_90;
    uStack_78 = uStack_50;
    local_80 = local_58;
    puVar1 = (undefined8 *)((undefined8 *)puStack_88[1])[1];
    puVar2 = (undefined8 *)puVar1[1];
    puVar3 = (undefined8 *)puVar2[1];
    puVar4 = (undefined8 *)puVar3[1];
    puVar5 = (undefined8 *)puVar4[1];
    puVar6 = (undefined8 *)puVar5[1];
    FUN_00623bb0(&DAT_00259980,*puVar6,*(undefined4 *)(puVar6 + 1),*puVar5,*puVar4,*puVar3,*puVar2,
                 *puVar1,*(undefined8 *)puStack_88[1],(int)*puStack_88,local_90,&local_80);
    if (cStack_151 < '\0') {
      operator_delete(local_168[0]);
    }
    if (cStack_139 < '\0') {
      operator_delete(local_150[0]);
    }
    if (cStack_121 < '\0') {
      operator_delete(local_138[0]);
    }
  }
  plVar11 = *(long **)(param_1 + 0x9a8);
  *(undefined8 *)(param_1 + 0x9a8) = 0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
  }
  if ((int)uVar8 < 0x1e7) {
    if (uVar8 == 0x191) {
      return;
    }
    if (uVar8 == 0x1a4) {
      return;
    }
  }
  else {
    if (uVar8 == 500) {
      return;
    }
    if (uVar8 == 0x1e7) {
      uVar9 = FUN_009881a4(param_1 + 0x40);
      if ((uVar9 & 1) == 0) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = *(long **)(param_1 + 0x48);
      }
      (**(code **)(*plVar11 + 0xd0))();
      return;
    }
  }
  lVar12 = FUN_00c6916c(param_2);
  if (*(short *)(lVar12 + 0x20) != 0x200) {
    uVar9 = FUN_004249b0();
    if ((uVar9 & 1) == 0) {
      local_80 = "../../p2p/base/connection.cc";
      uStack_78 = 0x32fb;
      local_70 = &local_118;
      FUN_00c61eb8(&local_58,param_1);
      FUN_00623bb0(&DAT_00256769,local_80,uStack_78 & 0xffffffff,&local_58,
                   ": Received STUN error response, code=",(ulong)uVar8,"; killing connection");
    }
    iVar7 = *(int *)(param_1 + 0x948);
    *(undefined4 *)(param_1 + 0x948) = 3;
    if ((iVar7 != 3) && (uVar9 = FUN_0044075c(), (uVar9 & 1) == 0)) {
      FUN_00c61eb8(&local_80,param_1);
      FUN_00623bb0(&DAT_00223e94,"../../p2p/base/connection.cc",0xbb0,&local_80,": set_state");
    }
    uVar9 = FUN_009881a4(param_1 + 0x40);
    if ((uVar9 & 1) == 0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = *(long **)(param_1 + 0x48);
    }
    (**(code **)(*plVar11 + 0x128))(plVar11,param_1);
  }
  return;
}


// ===== 00c61758  FUN_00c61758 =====

void FUN_00c61758(long param_1)

{
  FUN_00c61768(*(undefined8 *)(param_1 + 0x60),param_1);
  return;
}


// ===== 00c61768  FUN_00c61768 =====

/* WARNING: Removing unreachable block (ram,0x00c61874) */
/* WARNING: Removing unreachable block (ram,0x00c61858) */
/* WARNING: Removing unreachable block (ram,0x00c618ec) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c61768(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 local_108;
  void *local_100 [2];
  char cStack_e9;
  void *local_e8 [2];
  char cStack_d1;
  undefined1 uStack_c9;
  char *local_c8;
  ulong local_c0;
  undefined1 *local_b8;
  void **local_b0;
  char **ppcStack_a8;
  char *local_a0;
  void ***pppvStack_98;
  void **local_90;
  char **ppcStack_88;
  char *local_80;
  void ***pppvStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char **local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  
  bVar3 = *(int *)(param_1 + 0x840) == 0;
  uVar4 = FUN_00623b7c(bVar3);
  if ((uVar4 & 1) == 0) {
    local_c0 = (ulong)(bVar3 | 0x3350);
    local_c8 = "../../p2p/base/connection.cc";
    local_b8 = &uStack_c9;
    FUN_00c61eb8(local_e8,param_1);
    ppcStack_a8 = &local_c8;
    pppvStack_98 = &local_b0;
    lVar7 = *(long *)(param_2 + 0x38);
    local_a0 = ": Timing-out STUN ping ";
    lVar6 = (long)*(char *)(lVar7 + 0x3f);
    if (lVar6 < 0) {
      lVar5 = *(long *)(lVar7 + 0x28);
      lVar6 = *(long *)(lVar7 + 0x30);
    }
    else {
      lVar5 = lVar7 + 0x28;
    }
    local_b0 = local_e8;
    FUN_00624c34(local_100,lVar5,lVar6);
    ppcStack_88 = &local_a0;
    pppvStack_78 = &local_90;
    local_80 = " after ";
    local_90 = local_100;
    local_108 = FUN_00c6951c(param_2);
    FUN_005f3380(&local_48,&local_108);
    local_58 = &local_80;
    uStack_68 = uStack_40;
    local_70 = local_48;
    puVar1 = (undefined8 *)pppvStack_78[1][1];
    puVar2 = (undefined8 *)puVar1[1];
    FUN_00623bb0("\r\n\t\n\t\n\t",*puVar2,*(undefined4 *)(puVar2 + 1),*puVar1,*pppvStack_78[1],
                 *pppvStack_78,local_80,&local_70,&DAT_001e4c4d);
    if (cStack_e9 < '\0') {
      operator_delete(local_100[0]);
    }
    if (cStack_d1 < '\0') {
      operator_delete(local_e8[0]);
    }
  }
  return;
}


// ===== 00c61930  FUN_00c61930 =====

void FUN_00c61930(long param_1)

{
  FUN_00c61964(*(undefined8 *)(param_1 + 0x60),param_1);
  FUN_00c697f8(param_1);
  return;
}


// ===== 00c61964  FUN_00c61964 =====

void FUN_00c61964(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  void *local_d0 [2];
  char cStack_b9;
  void *local_b8 [2];
  char cStack_a1;
  void *local_a0 [2];
  char cStack_89;
  char *local_88;
  ulong local_80;
  undefined1 *local_78;
  void **local_70;
  char **ppcStack_68;
  char *local_60;
  void ***pppvStack_58;
  void **local_50;
  char **ppcStack_48;
  char *local_40;
  void ***pppvStack_38;
  undefined1 uStack_11;
  
  bVar3 = *(int *)(param_1 + 0x840) != 0;
  uVar4 = FUN_00623b7c(bVar3);
  if ((uVar4 & 1) == 0) {
    local_80 = (ulong)(bVar3 | 0x3398);
    local_88 = "../../p2p/base/connection.cc";
    local_78 = &uStack_11;
    FUN_00c61eb8(local_a0,param_1);
    ppcStack_68 = &local_88;
    pppvStack_58 = &local_70;
    local_60 = ": Sent ";
    local_70 = local_a0;
    lVar5 = FUN_00c6916c(param_2);
    FUN_00c6dac8(local_b8,*(undefined2 *)(lVar5 + 0x20));
    ppcStack_48 = &local_60;
    lVar7 = *(long *)(param_2 + 0x38);
    pppvStack_38 = &local_50;
    lVar5 = (long)*(char *)(lVar7 + 0x3f);
    local_40 = ", id=";
    if (lVar5 < 0) {
      lVar6 = *(long *)(lVar7 + 0x28);
      lVar5 = *(long *)(lVar7 + 0x30);
    }
    else {
      lVar6 = lVar7 + 0x28;
    }
    local_50 = local_b8;
    FUN_00624c34(local_d0,lVar6,lVar5);
    puVar1 = (undefined8 *)pppvStack_38[1][1];
    puVar2 = (undefined8 *)puVar1[1];
    FUN_00623bb0(&DAT_00259993,*puVar2,*(undefined4 *)(puVar2 + 1),*puVar1,*pppvStack_38[1],
                 *pppvStack_38,local_40,local_d0,", use_candidate=",*(undefined1 *)(param_1 + 0x848)
                 ,", nomination=",*(undefined4 *)(param_1 + 0x84c));
    if (cStack_b9 < '\0') {
      operator_delete(local_d0[0]);
    }
    if (cStack_a1 < '\0') {
      operator_delete(local_b8[0]);
    }
    if (cStack_89 < '\0') {
      operator_delete(local_a0[0]);
    }
  }
  *(long *)(param_1 + 0x3b8) = *(long *)(param_1 + 0x3b8) + 1;
  if (*(long *)(param_1 + 0x998) != 0) {
    FUN_00c5ba2c(*(long *)(param_1 + 0x998),0,*(undefined4 *)(param_1 + 0x38),
                 *(undefined4 *)(*(long *)(param_2 + 0x38) + 0x40));
  }
  if (*(long *)(param_1 + 0x3f0) == 0) {
    *(long *)(param_1 + 0x3c0) = *(long *)(param_1 + 0x3c0) + 1;
  }
  return;
}


// ===== 00c61b30  FUN_00c61b30 =====

undefined8 FUN_00c61b30(void)

{
  return 60000;
}


// ===== 00c61b3c  FUN_00c61b3c =====

void FUN_00c61b3c(undefined8 *param_1,long *param_2,long param_3,ulong param_4,undefined8 param_5)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  void *local_80 [2];
  char cStack_69;
  undefined8 *local_68 [2];
  code *local_58;
  undefined *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00d4df60;
  lVar7 = *param_2;
  param_1[1] = lVar7;
  if (lVar7 != 0) {
    FUN_00d0f740(1,lVar7 + 8);
  }
  lVar6 = param_2[4];
  lVar7 = param_2[3];
  lVar8 = param_2[1];
  param_1[3] = param_2[2];
  param_1[2] = lVar8;
  param_1[5] = lVar6;
  param_1[4] = lVar7;
  uVar3 = FUN_009881a4(param_3);
  if ((uVar3 & 1) == 0) {
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = *(long **)(param_3 + 8);
  }
  uVar5 = (**(code **)(*plVar4 + 0x130))();
  param_1[6] = uVar5;
  uVar2 = FUN_008367d8();
  *(undefined4 *)(param_1 + 7) = uVar2;
  FUN_0098815c(param_1 + 8,param_3);
  param_1[9] = *(undefined8 *)(param_3 + 8);
  uVar3 = FUN_009881a4(param_1 + 8);
  if ((uVar3 & 1) == 0) {
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = (long *)param_1[9];
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x88))();
  if ((ulong)((plVar4[1] - *plVar4 >> 3) * -0x505050505050505) <= param_4) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
              );
  }
  FUN_00afef10(param_1 + 10,*plVar4 + param_4 * 0x198);
  FUN_00afef10(param_1 + 0x3d,param_5);
  FUN_00c6e860(param_1 + 0x70);
  FUN_008531f8(param_1 + 0xef,1000000);
  FUN_008531f8(param_1 + 0xfb,1000000);
  param_1[0x107] = 0;
  *(undefined1 *)(param_1 + 0x109) = 0;
  *(undefined4 *)((long)param_1 + 0x84c) = 0;
  *(undefined4 *)(param_1 + 0x108) = 2;
  *(undefined4 *)((long)param_1 + 0x844) = 0x100;
  param_1[0x10a] = 0;
  uVar3 = FUN_009881a4(param_1 + 8);
  plVar4 = (long *)0x0;
  if ((uVar3 & 1) != 0) {
    plVar4 = (long *)param_1[9];
  }
  uVar5 = (**(code **)(*plVar4 + 0x130))();
  local_58 = FUN_00c689e0;
  local_50 = &DAT_002598e0;
  local_68[0] = param_1;
  FUN_00c68a38(param_1 + 0x10b,uVar5,local_68);
  if (*(code **)(local_50 + 8) != (code *)0x0) {
    (**(code **)(local_50 + 8))(local_68[0]);
  }
  *(undefined4 *)(param_1 + 0x114) = 0;
  param_1[0x113] = 3000000;
  param_1[0x115] = 0;
  *(undefined1 *)(param_1 + 0x116) = 0;
  *(undefined1 *)(param_1 + 0x117) = 0;
  *(undefined1 *)(param_1 + 0x123) = 0;
  *(undefined1 *)(param_1 + 0x124) = 0;
  *(undefined1 *)(param_1 + 0x125) = 0;
  *(undefined1 *)(param_1 + 0x126) = 0;
  *(undefined1 *)((long)param_1 + 0x934) = 0;
  *(undefined1 *)(param_1 + 0x127) = 0;
  *(undefined1 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x129) = 0;
  *(undefined1 *)(param_1 + 0x12a) = 0;
  *(undefined1 *)(param_1 + 299) = 0;
  param_1[0x119] = 0;
  param_1[0x118] = 0;
  param_1[0x11b] = 0;
  param_1[0x11a] = 0;
  param_1[0x11d] = 0;
  param_1[0x11c] = 0;
  param_1[0x11f] = 0;
  param_1[0x11e] = 0;
  *(undefined1 *)(param_1 + 0x120) = 0;
  uVar5 = (**(code **)(*(long *)param_1[3] + 0x10))();
  param_1[300] = uVar5;
  lVar6 = FUN_00625b64();
  lVar8 = param_1[300];
  lVar7 = 0x7fffffffffffffff;
  if (lVar8 != -0x8000000000000000) {
    lVar7 = -0x8000000000000000;
    if (lVar8 != 0x7fffffffffffffff && lVar6 * 1000 != -0x8000000000000000) {
      lVar7 = lVar6 * 1000 - lVar8;
    }
  }
  param_1[0x12d] = lVar7;
  *(undefined4 *)(param_1 + 0x12e) = 0;
  *(undefined1 *)((long)param_1 + 0x974) = 0;
  *(undefined1 *)(param_1 + 0x132) = 0;
  param_1[0x133] = 0;
  *(undefined2 *)(param_1 + 0x134) = 0;
  param_1[0x135] = 0;
  param_1[0x136] = &DAT_00259898;
  FUN_00c6e99c(param_1 + 0x137,500);
  *(undefined1 *)(param_1 + 0x13d) = 0;
  *(undefined1 *)(param_1 + 0x141) = 0;
  *(undefined1 *)(param_1 + 0x142) = 0;
  *(undefined1 *)(param_1 + 0x146) = 0;
  param_1[0x14a] = FUN_00433984;
  param_1[0x14b] = 0;
  param_1[0x14e] = FUN_00433984;
  param_1[0x14f] = 0;
  param_1[0x152] = FUN_00433984;
  param_1[0x153] = 0;
  FUN_007b5d10(param_1 + 0x154);
  FUN_007b5d10(param_1 + 0x158);
  FUN_007b5d10(param_1 + 0x15c);
  FUN_007b5d10(param_1 + 0x160);
  uVar3 = FUN_00417e08();
  if ((uVar3 & 1) == 0) {
    FUN_00c61eb8(local_80,param_1);
    FUN_00623bb0(&DAT_00223e94,"../../p2p/base/connection.cc",0x861,local_80,": Connection created")
    ;
    if (cStack_69 < '\0') {
      operator_delete(local_80[0]);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c61eb8  FUN_00c61eb8 =====

/* WARNING: Removing unreachable block (ram,0x00c625dc) */
/* WARNING: Removing unreachable block (ram,0x00c624f0) */
/* WARNING: Removing unreachable block (ram,0x00c622f8) */
/* WARNING: Removing unreachable block (ram,0x00c62154) */
/* WARNING: Removing unreachable block (ram,0x00c62040) */
/* WARNING: Removing unreachable block (ram,0x00c61f30) */
/* WARNING: Removing unreachable block (ram,0x00c620f0) */
/* WARNING: Removing unreachable block (ram,0x00c62294) */
/* WARNING: Removing unreachable block (ram,0x00c62654) */
/* WARNING: Removing unreachable block (ram,0x00c62554) */
/* WARNING: Removing unreachable block (ram,0x00c626f4) */

void FUN_00c61eb8(undefined8 *param_1,long *param_2)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined8 **local_88;
  ulong uStack_80;
  byte bStack_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 **local_58;
  ulong uStack_50;
  undefined8 local_48;
  
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  FUN_00547cac(&local_70,"Conn[",5);
  FUN_00625774(&local_58,(ulong)param_2 & 0xffffffff);
  uVar3 = uStack_50;
  pppuVar1 = (undefined8 ***)local_58;
  if (-1 < (long)local_48) {
    uVar3 = local_48 >> 0x38;
    pppuVar1 = &local_58;
  }
  FUN_00547cac(&local_70,pppuVar1,uVar3);
  uVar3 = FUN_009881a4(param_2 + 8);
  if (((uVar3 & 1) == 0) || (param_2[9] == 0)) {
    FUN_00547cac(&local_70,":#:#:",5);
  }
  else {
    FUN_00547cac(&local_70,&DAT_001ca603,1);
    uVar3 = FUN_009881a4(param_2 + 8);
    if ((uVar3 & 1) == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = (long *)param_2[9];
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x158))();
    uVar3 = puVar5[1];
    puVar8 = (undefined8 *)*puVar5;
    if (-1 < (char)*(byte *)((long)puVar5 + 0x17)) {
      uVar3 = (ulong)*(byte *)((long)puVar5 + 0x17);
      puVar8 = puVar5;
    }
    FUN_00547cac(&local_70,puVar8,uVar3);
    FUN_00547cac(&local_70,&DAT_001ca603,1);
    uVar3 = FUN_009881a4(param_2 + 8);
    if ((uVar3 & 1) == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = (long *)param_2[9];
    }
    (**(code **)(*plVar4 + 0x18))();
    FUN_00bcc3dc(&local_58);
    if (-1 < (char)local_48._7_1_) {
      uStack_50 = (ulong)local_48._7_1_;
      local_58 = &local_58;
    }
    FUN_00547cac(&local_70,local_58,uStack_50);
    FUN_00547cac(&local_70,&DAT_001ca603,1);
  }
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2);
  puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x18))(param_2);
  uVar3 = puVar5[1];
  puVar8 = (undefined8 *)*puVar5;
  if (-1 < (char)*(byte *)((long)puVar5 + 0x17)) {
    uVar3 = (ulong)*(byte *)((long)puVar5 + 0x17);
    puVar8 = puVar5;
  }
  FUN_00547cac(&local_70,puVar8,uVar3);
  FUN_00547cac(&local_70,&DAT_001ca603,1);
  local_58 = (undefined8 ***)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_005f55c4(&local_58,0x16,*(undefined4 *)(puVar5 + 3));
  uVar3 = uStack_50;
  pppuVar1 = (undefined8 ***)local_58;
  if (-1 < (long)local_48) {
    uVar3 = local_48 >> 0x38;
    pppuVar1 = &local_58;
  }
  FUN_00547cac(&local_70,pppuVar1,uVar3);
  FUN_00547cac(&local_70,&DAT_001ca603,1);
  local_58 = (undefined8 ***)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_005fa03c(&local_58,0x16,*(undefined4 *)(puVar5 + 0x1f));
  uVar3 = uStack_50;
  pppuVar1 = (undefined8 ***)local_58;
  if (-1 < (long)local_48) {
    uVar3 = local_48 >> 0x38;
    pppuVar1 = &local_58;
  }
  FUN_00547cac(&local_70,pppuVar1,uVar3);
  FUN_00547cac(&local_70,&DAT_001ca603,1);
  auVar12 = FUN_00aff330(puVar5);
  FUN_00547cac(&local_70,auVar12._0_8_,auVar12._8_8_);
  FUN_00547cac(&local_70,&DAT_001ca603,1);
  lVar10 = (long)*(char *)((long)puVar5 + 0x37);
  if (lVar10 < 0) {
    puVar8 = (undefined8 *)puVar5[4];
    lVar10 = puVar5[5];
  }
  else {
    puVar8 = puVar5 + 4;
  }
  FUN_00547cac(&local_70,puVar8,lVar10);
  FUN_00547cac(&local_70,&DAT_001ca603,1);
  FUN_007e924c(&local_88,puVar5 + 10);
  pppuVar1 = (undefined8 ***)local_88;
  if (-1 < (char)bStack_71) {
    uStack_80 = (ulong)bStack_71;
    pppuVar1 = &local_88;
  }
  FUN_00547cac(&local_70,pppuVar1,uStack_80);
  FUN_00547cac(&local_70,&DAT_001e6ca8,2);
  lVar10 = (long)*(char *)((long)puVar6 + 0x17);
  puVar8 = puVar6;
  if (lVar10 < 0) {
    lVar10 = puVar6[1];
    puVar8 = (undefined8 *)*puVar6;
  }
  FUN_00547cac(&local_70,puVar8,lVar10);
  FUN_00547cac(&local_70,&DAT_001ca603,1);
  local_58 = (undefined8 ***)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_005f55c4(&local_58,0x16,*(undefined4 *)(puVar6 + 3));
  uVar3 = uStack_50;
  pppuVar1 = (undefined8 ***)local_58;
  if (-1 < (long)local_48) {
    uVar3 = local_48 >> 0x38;
    pppuVar1 = &local_58;
  }
  FUN_00547cac(&local_70,pppuVar1,uVar3);
  FUN_00547cac(&local_70,&DAT_001ca603,1);
  local_58 = (undefined8 ***)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_005fa03c(&local_58,0x16,*(undefined4 *)(puVar6 + 0x13));
  uVar3 = uStack_50;
  pppuVar1 = (undefined8 ***)local_58;
  if (-1 < (long)local_48) {
    uVar3 = local_48 >> 0x38;
    pppuVar1 = &local_58;
  }
  FUN_00547cac(&local_70,pppuVar1,uVar3);
  FUN_00547cac(&local_70,&DAT_001ca603,1);
  auVar12 = FUN_00aff330(puVar6);
  FUN_00547cac(&local_70,auVar12._0_8_,auVar12._8_8_);
  FUN_00547cac(&local_70,&DAT_001ca603,1);
  lVar10 = (long)*(char *)((long)puVar6 + 0x37);
  if (lVar10 < 0) {
    puVar8 = (undefined8 *)puVar6[4];
    lVar10 = puVar6[5];
  }
  else {
    puVar8 = puVar6 + 4;
  }
  FUN_00547cac(&local_70,puVar8,lVar10);
  FUN_00547cac(&local_70,&DAT_001ca603,1);
  FUN_007e924c(&local_58,puVar6 + 10);
  uVar3 = uStack_50;
  pppuVar1 = (undefined8 ***)local_58;
  if (-1 < (long)local_48) {
    uVar3 = local_48 >> 0x38;
    pppuVar1 = &local_58;
  }
  FUN_00547cac(&local_70,pppuVar1,uVar3);
  FUN_00547cac(&local_70,&DAT_001e3d0b,1);
  if ((char)bStack_71 < '\0') {
    operator_delete(local_88);
  }
  FUN_00547cac(&local_70,(&PTR_DAT_00d4dfb0)[(ulong)*(byte *)((long)param_2 + 0x845) * 2],1);
  FUN_00547cac(&local_70,(&PTR_DAT_00d4dfd0)[(ulong)*(byte *)((long)param_2 + 0x844) * 2],1);
  if (*(uint *)(param_2 + 0x108) < 5) {
    FUN_00547cac(&local_70,(&PTR_DAT_00d4dff0)[(ulong)*(uint *)(param_2 + 0x108) * 2],1);
    if (*(uint *)(param_2 + 0x129) < 5) {
      FUN_00547cac(&local_70,(&PTR_DAT_00d4e030)[(ulong)*(uint *)(param_2 + 0x129) * 2],1);
      FUN_00547cac(&local_70,&DAT_001e3d0b,1);
      FUN_00547cac(&local_70,(&PTR_DAT_00d4e070)[(ulong)*(byte *)((long)param_2 + 0x847) * 2],1);
      FUN_00547cac(&local_70,&DAT_001e3d0b,1);
      local_58 = (undefined8 ***)0x0;
      uStack_50 = 0;
      local_48 = 0;
      FUN_005fa03c(&local_58,0x16,*(undefined4 *)((long)param_2 + 0x854));
      uVar3 = uStack_50;
      pppuVar1 = (undefined8 ***)local_58;
      if (-1 < (long)local_48) {
        uVar3 = local_48 >> 0x38;
        pppuVar1 = &local_58;
      }
      FUN_00547cac(&local_70,pppuVar1,uVar3);
      FUN_00547cac(&local_70,&DAT_001e3d0b,1);
      local_58 = (undefined8 ***)0x0;
      uStack_50 = 0;
      local_48 = 0;
      FUN_005fa03c(&local_58,0x16,*(undefined4 *)((long)param_2 + 0x84c));
      uVar3 = uStack_50;
      pppuVar1 = (undefined8 ***)local_58;
      if (-1 < (long)local_48) {
        uVar3 = local_48 >> 0x38;
        pppuVar1 = &local_58;
      }
      FUN_00547cac(&local_70,pppuVar1,uVar3);
      FUN_00547cac(&local_70,&DAT_001e3d0b,1);
      uVar3 = FUN_009881a4(param_2 + 8);
      if (((uVar3 & 1) != 0) && (param_2[9] != 0)) {
        uVar7 = (**(code **)(*param_2 + 0x30))(param_2);
        local_58 = (undefined8 ***)0x0;
        uStack_50 = 0;
        local_48 = 0;
        FUN_006247b4(&local_58,0x16,uVar7);
        uVar3 = uStack_50;
        pppuVar1 = (undefined8 ***)local_58;
        if (-1 < (long)local_48) {
          uVar3 = local_48 >> 0x38;
          pppuVar1 = &local_58;
        }
        FUN_00547cac(&local_70,pppuVar1,uVar3);
        FUN_00547cac(&local_70,&DAT_001e3d0b,1);
      }
      uVar3 = param_2[0x113];
      if ((long)uVar3 < 3000000) {
        if ((long)uVar3 < 0) {
          uVar11 = -(-uVar3 / 1000) - (ulong)(500 < -uVar3 % 1000);
        }
        else {
          uVar11 = (uVar3 & 0xffffffff) / 1000;
          if (499 < (uint)((int)uVar3 + (int)((uVar3 & 0xffffffff) / 1000) * -1000)) {
            uVar11 = uVar11 + 1;
          }
        }
        local_58 = (undefined8 ***)0x0;
        uStack_50 = 0;
        local_48 = 0;
        FUN_005f5410(&local_58,0x16,uVar11);
        uVar3 = uStack_50;
        pppuVar1 = (undefined8 ***)local_58;
        if (-1 < (long)local_48) {
          uVar3 = local_48 >> 0x38;
          pppuVar1 = &local_58;
        }
        FUN_00547cac(&local_70,pppuVar1,uVar3);
        puVar9 = &DAT_0019fa9e;
        uVar7 = 1;
      }
      else {
        puVar9 = &DAT_001a56ae;
        uVar7 = 2;
      }
      FUN_00547cac(&local_70,puVar9,uVar7);
      param_1[1] = uStack_68;
      *param_1 = local_70;
      param_1[2] = local_60;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(0x5512,0xc62748);
  (*pcVar2)();
}


// ===== 00c62748  FUN_00c62748 =====

void FUN_00c62748(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc62750);
  (*pcVar1)();
}


// ===== 00c62750  FUN_00c62750 =====

undefined8 FUN_00c62750(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}


// ===== 00c6275c  FUN_00c6275c =====

long FUN_00c6275c(long param_1)

{
  return param_1 + 0x50;
}


// ===== 00c62768  FUN_00c62768 =====

long FUN_00c62768(long param_1)

{
  return param_1 + 0x1e8;
}


// ===== 00c62774  FUN_00c62774 =====

void FUN_00c62774(long param_1)

{
  ulong uVar1;
  long *plVar2;
  
  uVar1 = FUN_009881a4(param_1 + 0x40);
  if ((uVar1 & 1) == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = *(long **)(param_1 + 0x48);
  }
                    /* WARNING: Could not recover jumptable at 0x00c627b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))();
  return;
}


// ===== 00c627b8  FUN_00c627b8 =====

void FUN_00c627b8(long param_1)

{
  ulong uVar1;
  long *plVar2;
  
  uVar1 = FUN_009881a4(param_1 + 0x40);
  if ((uVar1 & 1) == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = *(long **)(param_1 + 0x48);
  }
                    /* WARNING: Could not recover jumptable at 0x00c627f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x140))();
  return;
}


// ===== 00c627fc  FUN_00c627fc =====

undefined8 FUN_00c627fc(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  uint *puVar8;
  uint uVar9;
  
  uVar5 = FUN_009881a4(param_1 + 8);
  if (((uVar5 & 1) != 0) && (param_1[9] != 0)) {
    uVar5 = FUN_009881a4(param_1 + 8);
    if ((uVar5 & 1) == 0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = (long *)param_1[9];
    }
    iVar4 = (**(code **)(*plVar6 + 0x28))();
    if (iVar4 != 2) {
      if (iVar4 == 0) {
        lVar7 = (**(code **)(*param_1 + 0x10))(param_1);
        uVar9 = *(uint *)(lVar7 + 0x98);
        puVar8 = (uint *)(param_1 + 0x50);
      }
      else {
        uVar9 = *(uint *)(param_1 + 0x50);
        lVar7 = (**(code **)(*param_1 + 0x10))(param_1);
        puVar8 = (uint *)(lVar7 + 0x98);
      }
      uVar2 = *puVar8;
      uVar1 = uVar9;
      uVar3 = uVar2;
      if (uVar2 >= uVar9) {
        uVar1 = uVar2;
        uVar3 = uVar9;
      }
      return CONCAT44(uVar3,(uint)(uVar2 < uVar9) | uVar1 << 1);
    }
  }
  return 0;
}


// ===== 00c628c0  FUN_00c628c0 =====

void FUN_00c628c0(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  long *local_48 [2];
  char cStack_31;
  long local_18;
  
  iVar1 = *(int *)(param_1 + 0x840);
  *(int *)(param_1 + 0x840) = param_2;
  if (param_2 != iVar1) {
    uVar2 = FUN_0044075c();
    if ((uVar2 & 1) == 0) {
      FUN_00c61eb8(local_48,param_1);
      FUN_00623bb0(&DAT_00259900,"../../p2p/base/connection.cc",0xa88,local_48,
                   ": set_write_state from: ",iVar1,&DAT_0019fec4,param_2);
      if (cStack_31 < '\0') {
        operator_delete(local_48[0]);
      }
    }
    local_48[0] = &local_18;
    local_18 = param_1;
    FUN_007b6160(param_1 + 0xaa0,local_48,FUN_00c68528);
  }
  return;
}


// ===== 00c62988  FUN_00c62988 =====

void FUN_00c62988(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  long *local_48 [2];
  char cStack_31;
  long local_18;
  
  lVar4 = *(long *)(param_1 + 0x8d8);
  if (*(long *)(param_1 + 0x8c0) < lVar4) {
    bVar6 = true;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x8d0);
    if (*(long *)(param_1 + 0x8d0) <= *(long *)(param_1 + 0x8c8)) {
      lVar1 = *(long *)(param_1 + 0x8c8);
    }
    if (lVar1 <= lVar4) {
      lVar1 = lVar4;
    }
    if (lVar1 < 1) {
      bVar6 = false;
    }
    else {
      plVar2 = (long *)(param_1 + 0x950);
      if (*(char *)(param_1 + 0x958) == '\0') {
        plVar2 = (long *)&UNK_002598d8;
      }
      lVar5 = *plVar2;
      lVar4 = lVar5;
      if (lVar5 != -0x8000000000000000) {
        lVar4 = lVar5 + lVar1;
      }
      bVar6 = (lVar1 == 0x7fffffffffffffff || lVar5 == 0x7fffffffffffffff) || param_2 <= lVar4;
    }
  }
  if ((bool)*(char *)(param_1 + 0x844) != bVar6) {
    uVar3 = FUN_0044075c();
    if ((uVar3 & 1) == 0) {
      FUN_00c61eb8(local_48,param_1);
      FUN_00623bb0(&DAT_00259892,"../../p2p/base/connection.cc",0xb58,local_48,": set_receiving to "
                   ,bVar6);
      if (cStack_31 < '\0') {
        operator_delete(local_48[0]);
      }
    }
    local_48[0] = &local_18;
    *(bool *)(param_1 + 0x844) = bVar6;
    *(long *)(param_1 + 0x8e0) = param_2;
    local_18 = param_1;
    FUN_007b6160(param_1 + 0xaa0,local_48,FUN_00c68528);
  }
  return;
}


// ===== 00c62ac8  FUN_00c62ac8 =====

undefined8 FUN_00c62ac8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x8c0);
}


// ===== 00c62ad4  FUN_00c62ad4 =====

undefined8 FUN_00c62ad4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x8d8);
}


// ===== 00c62ae0  FUN_00c62ae0 =====

long FUN_00c62ae0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x8d0);
  if (*(long *)(param_1 + 0x8d0) <= *(long *)(param_1 + 0x8c8)) {
    lVar1 = *(long *)(param_1 + 0x8c8);
  }
  lVar2 = *(long *)(param_1 + 0x8d8);
  if (*(long *)(param_1 + 0x8d8) <= lVar1) {
    lVar2 = lVar1;
  }
  return lVar2;
}


// ===== 00c62b04  FUN_00c62b04 =====

void FUN_00c62b04(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  void *local_38 [2];
  char cStack_21;
  
  iVar1 = *(int *)(param_1 + 0x948);
  *(int *)(param_1 + 0x948) = param_2;
  if ((param_2 != iVar1) && (uVar2 = FUN_0044075c(), (uVar2 & 1) == 0)) {
    FUN_00c61eb8(local_38,param_1);
    FUN_00623bb0(&DAT_00223e94,"../../p2p/base/connection.cc",0xbb0,local_38,": set_state");
    if (cStack_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  return;
}


// ===== 00c62b94  FUN_00c62b94 =====

void FUN_00c62b94(long param_1,byte param_2)

{
  byte bVar1;
  ulong uVar2;
  long *local_40 [2];
  char cStack_29;
  long local_28;
  
  bVar1 = *(byte *)(param_1 + 0x845);
  *(byte *)(param_1 + 0x845) = param_2;
  if (bVar1 != (param_2 & 1)) {
    uVar2 = FUN_0044075c();
    if ((uVar2 & 1) == 0) {
      FUN_00c61eb8(local_40,param_1);
      FUN_00623bb0(&DAT_00259892,"../../p2p/base/connection.cc",0xbf8,local_40,
                   ": Change connected_ to ",param_2 & 1);
      if (cStack_29 < '\0') {
        operator_delete(local_40[0]);
      }
    }
    local_40[0] = &local_28;
    local_28 = param_1;
    FUN_007b6160(param_1 + 0xaa0,local_40,FUN_00c68528);
  }
  return;
}


// ===== 00c62c50  FUN_00c62c50 =====

void FUN_00c62c50(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x848) = param_2;
  return;
}


// ===== 00c62c5c  FUN_00c62c5c =====

void FUN_00c62c5c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x84c) = param_2;
  return;
}


// ===== 00c62c68  FUN_00c62c68 =====

undefined4 FUN_00c62c68(long param_1)

{
  return *(undefined4 *)(param_1 + 0x854);
}


// ===== 00c62c74  FUN_00c62c74 =====

bool FUN_00c62c74(long param_1)

{
  if (*(int *)(param_1 + 0x850) != 0) {
    return true;
  }
  return *(int *)(param_1 + 0x854) != 0;
}


// ===== 00c62c98  FUN_00c62c98 =====

void FUN_00c62c98(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined8 *)(param_1 + 0x920) = param_2;
  *(undefined1 *)(param_1 + 0x928) = param_3;
  return;
}


// ===== 00c62ca8  FUN_00c62ca8 =====

void FUN_00c62ca8(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 0x934) = *(undefined1 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0x930) = uVar1;
  return;
}


// ===== 00c62cc0  FUN_00c62cc0 =====

void FUN_00c62cc0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined8 *)(param_1 + 0x938) = param_2;
  *(undefined1 *)(param_1 + 0x940) = param_3;
  return;
}


// ===== 00c62cd0  FUN_00c62cd0 =====

void FUN_00c62cd0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined8 *)(param_1 + 0x950) = param_2;
  *(undefined1 *)(param_1 + 0x958) = param_3;
  return;
}


// ===== 00c62ce0  FUN_00c62ce0 =====

void FUN_00c62ce0(long param_1,long param_2)

{
  *(long *)(param_1 + 0x9b0) = param_2;
  FUN_00c6e9f8(param_1 + 0x9b8,*(undefined4 *)(param_2 + 0x20));
  return;
}


// ===== 00c62cf4  FUN_00c62cf4 =====

void FUN_00c62cf4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  void *local_118 [2];
  char cStack_101;
  void *local_100 [2];
  char cStack_e9;
  char *local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  void **local_d0;
  char **ppcStack_c8;
  char *local_c0;
  void ***pppvStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 uStack_21;
  
  uVar3 = FUN_009881a4(param_1 + 0x40);
  if ((uVar3 & 1) == 0) {
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = *(long **)(param_1 + 0x48);
  }
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  uVar1 = (**(code **)(*plVar4 + 0x170))();
  FUN_00897b90(&local_b0,uVar1);
  uStack_70 = (undefined1 *)CONCAT44(2,(undefined4)uStack_70);
  uVar3 = FUN_009881a4(param_1 + 0x40);
  if ((uVar3 & 1) == 0) {
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = *(long **)(param_1 + 0x48);
  }
  iVar2 = (**(code **)(*plVar4 + 0x90))(plVar4,param_2,param_3,param_1 + 0x238,&local_b0,0);
  if (iVar2 < 0) {
    uVar3 = FUN_004022fc();
    if ((uVar3 & 1) == 0) {
      local_e8 = "../../p2p/base/connection.cc";
      local_e0 = 0xeb2;
      local_d8 = &uStack_21;
      FUN_00c61eb8(local_100,param_1);
      ppcStack_c8 = &local_e8;
      lVar7 = *(long *)(param_4 + 0x38);
      pppvStack_b8 = &local_d0;
      lVar6 = (long)*(char *)(lVar7 + 0x3f);
      local_c0 = ": Failed to send STUN ping  err=";
      if (lVar6 < 0) {
        lVar5 = *(long *)(lVar7 + 0x28);
        lVar6 = *(long *)(lVar7 + 0x30);
      }
      else {
        lVar5 = lVar7 + 0x28;
      }
      local_d0 = local_100;
      FUN_00624c34(local_118,lVar5,lVar6);
      FUN_00623bb0(&DAT_00259907,*pppvStack_b8[1],*(undefined4 *)(pppvStack_b8[1] + 1),*pppvStack_b8
                   ,local_c0,iVar2,&DAT_0019f39d,local_118);
      if (cStack_101 < '\0') {
        operator_delete(local_118[0]);
      }
      if (cStack_e9 < '\0') {
        operator_delete(local_100[0]);
      }
    }
  }
  FUN_00897c8c(&local_b0);
  return;
}


// ===== 00c62ea0  FUN_00c62ea0 =====

void FUN_00c62ea0(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0xa58) == 0) {
    (**(code **)(param_1 + 0xa50))(0,param_1 + 0xa40,param_1 + 0xa40);
    *(undefined8 *)(param_1 + 0xa58) = 0;
    *(code **)(param_1 + 0xa50) = FUN_00433984;
    (**(code **)(param_2 + 0x10))(1,param_2,param_1 + 0xa40);
    *(undefined8 *)(param_1 + 0xa50) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0xa58) = *(undefined8 *)(param_2 + 0x18);
    *(code **)(param_2 + 0x10) = FUN_00433984;
    *(undefined8 *)(param_2 + 0x18) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../p2p/base/connection.cc",0x1e1,"!received_packet_callback_",&DAT_001f5fa0);
}


// ===== 00c62f44  FUN_00c62f44 =====

void FUN_00c62f44(long param_1)

{
  (**(code **)(param_1 + 0xa50))(0,param_1 + 0xa40,param_1 + 0xa40);
  *(code **)(param_1 + 0xa50) = FUN_00433984;
  *(undefined8 *)(param_1 + 0xa58) = 0;
  return;
}


// ===== 00c62f8c  FUN_00c62f8c =====

/* WARNING: Removing unreachable block (ram,0x00c63500) */
/* WARNING: Removing unreachable block (ram,0x00c6339c) */
/* WARNING: Removing unreachable block (ram,0x00c63210) */
/* WARNING: Removing unreachable block (ram,0x00c630dc) */
/* WARNING: Removing unreachable block (ram,0x00c63414) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00c62f8c(long *param_1,undefined8 *param_2)

{
  void ***pppvVar1;
  ushort uVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  size_t sVar8;
  long lVar9;
  long *plVar10;
  void ****local_f0;
  ulong uStack_e8;
  void *****local_e0;
  char local_d8;
  void *local_d0 [2];
  char cStack_b9;
  void *local_b8 [2];
  char cStack_a1;
  void ****local_a0 [2];
  char cStack_89;
  undefined1 uStack_81;
  char ****local_80;
  char ****ppppcStack_78;
  char ****local_70;
  void *****pppppvStack_68;
  void **local_60;
  void *****pppppvStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_40 = 0;
  local_38 = (long *)0x0;
  local_50 = 0;
  uStack_48 = 0;
  uVar6 = FUN_009881a4(param_1 + 8);
  plVar7 = (long *)0x0;
  if ((uVar6 & 1) != 0) {
    plVar7 = (long *)param_1[9];
  }
  uVar6 = (**(code **)(*plVar7 + 0x178))
                    (plVar7,*param_2,param_2[1],param_1 + 0x47,&local_38,&local_50);
  if ((uVar6 & 1) == 0) {
    lVar9 = (**(code **)(*(long *)param_1[3] + 0x10))();
    param_1[0x11a] = lVar9;
    FUN_00c62988(param_1,lVar9);
    FUN_008532e0(param_1 + 0xef,param_2[1],param_1[0x11a]);
    param_1[0x7a] = param_1[0x7a] + param_2[1];
    param_1[0x7c] = param_1[0x7c] + 1;
    if ((code *)param_1[0x14b] != (code *)0x0) {
      (*(code *)param_1[0x14b])(param_1 + 0x148,param_1,param_2);
    }
    if (((*(byte *)((long)param_1 + 0x846) & 1) == 0) && ((int)param_1[0x108] == 3)) {
      uVar6 = FUN_004022fc();
      if ((uVar6 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../p2p/base/connection.cc",0x101a,
                     "Received a data packet on a timed-out Connection. Resetting state to STATE_WRITE_INIT."
                    );
      }
      FUN_00c628c0(param_1,2);
    }
    goto LAB_00c63424;
  }
  if (local_38 == (long *)0x0) goto LAB_00c63424;
  uVar6 = FUN_00c6a550((short)local_38[4]);
  if ((uVar6 & 1) == 0) {
    uVar6 = FUN_00c6a564((short)local_38[4]);
    if (((uVar6 & 1) != 0) || (uVar6 = FUN_00c6dd98((short)local_38[4]), (uVar6 & 1) != 0)) {
      plVar7 = local_38;
      lVar9 = (**(code **)(*param_1 + 0x18))(param_1);
      iVar5 = FUN_00c6a0c0(plVar7,lVar9 + 0xb8);
      if (iVar5 != 2) {
        uVar6 = FUN_0044075c();
        if ((uVar6 & 1) != 0) goto LAB_00c63424;
        uStack_e8 = 0x1140;
        goto LAB_00c6318c;
      }
    }
LAB_00c63124:
    uVar2 = *(ushort *)(local_38 + 4);
    bVar4 = (int)param_1[0x108] != 0;
    if (uVar2 < 0x111) {
      if (uVar2 == 1) {
        uVar6 = FUN_00623b7c(bVar4);
        if ((uVar6 & 1) == 0) {
          uStack_e8 = (ulong)(bVar4 | 0x11b8);
          local_f0 = (void ****)0x1996ca;
          local_e0 = &local_80;
          FUN_00c61eb8(local_a0,param_1);
          pppppvStack_68 = &local_f0;
          pppppvStack_58 = &local_70;
          local_60 = (void **)0x1e0d29;
          local_70 = (char ****)local_a0;
          FUN_00c6dac8(local_b8,(short)local_38[4]);
          lVar9 = (long)*(char *)((long)local_38 + 0x3f);
          if (lVar9 < 0) {
            plVar7 = (long *)local_38[5];
            lVar9 = local_38[6];
          }
          else {
            plVar7 = local_38 + 5;
          }
          FUN_00624c34(local_d0,plVar7,lVar9);
          FUN_00623bb0("\r\n\t\n\t\n",*pppppvStack_58[1],*(undefined4 *)(pppppvStack_58[1] + 1),
                       *pppppvStack_58,local_60,local_b8,", id=",local_d0);
          if (cStack_b9 < '\0') {
            operator_delete(local_d0[0]);
          }
          if (cStack_a1 < '\0') {
            operator_delete(local_b8[0]);
          }
          if (cStack_89 < '\0') {
            operator_delete(local_a0[0]);
          }
        }
        uVar6 = FUN_005f0614(&local_50,param_1 + 0x51);
        if ((uVar6 & 1) == 0) {
          uVar6 = FUN_004249b0();
          if ((uVar6 & 1) == 0) {
            FUN_00c61eb8(&local_f0,param_1);
            FUN_00623bb0(&DAT_0025987e,"../../p2p/base/connection.cc",0x11fb,&local_f0,
                         ": Received STUN request with bad remote username ",&local_50);
            if ((long)local_e0 < 0) {
              operator_delete(local_f0);
            }
          }
          uVar6 = FUN_009881a4(param_1 + 8);
          plVar7 = local_38;
          puVar3 = PTR_s_Unauthorized_00d52cd0;
          if ((uVar6 & 1) == 0) {
            plVar10 = (long *)0x0;
          }
          else {
            plVar10 = (long *)param_1[9];
          }
          sVar8 = strlen(PTR_s_Unauthorized_00d52cd0);
          (**(code **)(*plVar10 + 0xb0))(plVar10,plVar7,param_1 + 0x47,0x191,puVar3,sVar8);
          goto LAB_00c63424;
        }
LAB_00c63404:
        FUN_00c6355c(param_1,local_38);
        goto LAB_00c63424;
      }
      if (uVar2 == 0x11) {
        if (*(char *)((long)local_38 + 0x3f) < '\0') {
          FUN_005478d8(&local_f0,local_38[5],local_38[6]);
        }
        else {
          local_e0 = (void *****)local_38[7];
          uStack_e8 = local_38[6];
          local_f0 = (void ****)local_38[5];
        }
        local_d8 = '\x01';
        FUN_00c63de4(param_1,&local_f0);
        if ((local_d8 != '\x01') || (local_a0[0] = local_f0, -1 < (long)local_e0))
        goto LAB_00c63424;
        goto LAB_00c6338c;
      }
      if (uVar2 != 0x101) goto LAB_00c63424;
    }
    else if (uVar2 < 0x300) {
      if (uVar2 != 0x111) {
        if (uVar2 != 0x200) goto LAB_00c63424;
        goto LAB_00c63404;
      }
    }
    else if ((uVar2 != 0x300) && (uVar2 != 0x310)) goto LAB_00c63424;
    FUN_00c68cac(param_1 + 0x10b);
  }
  else {
    if ((int)local_38[0xc] == 2) goto LAB_00c63124;
    uVar6 = FUN_0044075c();
    if ((uVar6 & 1) != 0) goto LAB_00c63424;
    uStack_e8 = 0x10d0;
LAB_00c6318c:
    local_f0 = (void ****)0x1996ca;
    local_e0 = (void *****)&uStack_81;
    FUN_00c61eb8(local_a0,param_1);
    ppppcStack_78 = (char ****)&local_f0;
    pppppvStack_68 = &local_80;
    local_70 = (char ****)0x1c1683;
    local_80 = (char ****)local_a0;
    FUN_00c6dac8(local_b8,(short)local_38[4]);
    pppppvStack_58 = &local_70;
    lVar9 = (long)*(char *)((long)local_38 + 0x3f);
    if (lVar9 < 0) {
      plVar7 = (long *)local_38[5];
      lVar9 = local_38[6];
    }
    else {
      plVar7 = local_38 + 5;
    }
    local_60 = local_b8;
    FUN_00624c34(local_d0,plVar7,lVar9);
    pppvVar1 = pppppvStack_58[1][1];
    FUN_00623bb0(&DAT_0025990e,*pppvVar1,*(undefined4 *)(pppvVar1 + 1),*pppppvStack_58[1],
                 *pppppvStack_58,local_60,", id=",local_d0," with invalid message integrity: ",
                 (int)local_38[0xc]);
    if (cStack_b9 < '\0') {
      operator_delete(local_d0[0]);
    }
    if (cStack_a1 < '\0') {
      operator_delete(local_b8[0]);
    }
    if (-1 < cStack_89) goto LAB_00c63424;
LAB_00c6338c:
    operator_delete(local_a0[0]);
  }
LAB_00c63424:
  plVar7 = local_38;
  local_38 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  return;
}


// ===== 00c63548  FUN_00c63548 =====

bool FUN_00c63548(long param_1)

{
  return *(int *)(param_1 + 0x840) == 0;
}


// ===== 00c6355c  FUN_00c6355c =====

/* WARNING: Removing unreachable block (ram,0x00c63d88) */
/* WARNING: Removing unreachable block (ram,0x00c63a70) */
/* WARNING: Removing unreachable block (ram,0x00c63940) */
/* WARNING: Removing unreachable block (ram,0x00c6383c) */
/* WARNING: Removing unreachable block (ram,0x00c639c0) */
/* WARNING: Removing unreachable block (ram,0x00c639dc) */
/* WARNING: Removing unreachable block (ram,0x00c637b8) */
/* WARNING: Removing unreachable block (ram,0x00c637d4) */
/* WARNING: Removing unreachable block (ram,0x00c635f4) */
/* WARNING: Removing unreachable block (ram,0x00c63888) */
/* WARNING: Removing unreachable block (ram,0x00c638a4) */
/* WARNING: Removing unreachable block (ram,0x00c63d2c) */
/* WARNING: Removing unreachable block (ram,0x00c63d44) */
/* WARNING: Removing unreachable block (ram,0x00c63820) */
/* WARNING: Removing unreachable block (ram,0x00c63924) */
/* WARNING: Removing unreachable block (ram,0x00c63a54) */
/* WARNING: Removing unreachable block (ram,0x00c63da0) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c6355c(long *******param_1,long param_2)

{
  long *****ppppplVar1;
  long ***ppplVar2;
  long **pplVar3;
  byte bVar4;
  int iVar5;
  long ******pppppplVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  long *******ppppppplVar10;
  uint uVar11;
  long ******pppppplVar12;
  long ****pppplVar13;
  long local_160;
  void *local_158 [2];
  char cStack_141;
  undefined1 uStack_139;
  char *local_138;
  undefined8 local_130;
  undefined1 *local_128;
  void **local_120;
  char **ppcStack_118;
  char *local_110;
  void ***pppvStack_108;
  long *******local_100;
  undefined8 uStack_f8;
  long local_f0;
  char **local_e8;
  char *local_e0;
  long *******ppppppplStack_d8;
  long *******local_d0;
  undefined8 uStack_c8;
  long local_c0;
  char **local_b8;
  char *local_a8;
  long *******ppppppplStack_a0;
  undefined1 *local_98;
  long *******local_90;
  undefined8 uStack_88;
  long local_80;
  char **local_78;
  long *******local_68;
  undefined8 uStack_60;
  undefined7 local_58;
  undefined1 uStack_51;
  
  if (*(char *)(param_2 + 0x3f) < '\0') {
    FUN_005478d8(&local_90,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30));
  }
  else {
    uStack_88 = *(undefined8 *)(param_2 + 0x30);
    local_90 = *(long ********)(param_2 + 0x28);
    local_80 = *(long *)(param_2 + 0x38);
  }
  local_78 = (char **)CONCAT71(local_78._1_7_,1);
  pppppplVar6 = (long ******)(*(code *)(*param_1[3])[2])();
  param_1[0x119] = pppppplVar6;
  FUN_005e7520(param_1 + 0x120,&local_90);
  FUN_00c62988(param_1,param_1[0x119]);
  if ((*(char *)((long)param_1[0x136] + 0x39) == '\x01') && ((long)param_1[0x11b] < 1)) {
    (*(code *)(*param_1)[2])(param_1);
    uVar7 = FUN_00aff31c();
    if ((uVar7 & 1) == 0) {
      (*(code *)(*param_1)[2])(param_1);
      uVar7 = FUN_00aff308();
      if ((uVar7 & 1) == 0) {
        (*(code *)(*param_1)[3])(param_1);
        uVar7 = FUN_00aff31c();
        if ((uVar7 & 1) == 0) {
          (*(code *)(*param_1)[3])(param_1);
          uVar7 = FUN_00aff308();
          if ((uVar7 & 1) == 0) goto LAB_00c63af4;
        }
      }
    }
    local_98 = &DAT_aaaaaaaaaaaaaaaa;
    puVar8 = (undefined1 *)(*(code *)(*param_1[3])[2])();
    pppppplVar12 = param_1[0x118];
    pppppplVar6 = pppppplVar12;
    if (pppppplVar12 != (long ******)0x8000000000000000) {
      pppppplVar6 = pppppplVar12 + 0x30d4;
    }
    if (pppppplVar12 != (long ******)0x7fffffffffffffff) {
      pppppplVar12 = pppppplVar6;
    }
    local_98 = puVar8;
    uVar7 = FUN_00417e08();
    if ((long)puVar8 < (long)pppppplVar12) {
      if ((uVar7 & 1) == 0) {
        local_138 = "../../p2p/base/connection.cc";
        local_130 = 0x15d1;
        local_128 = &uStack_139;
        FUN_00c61eb8(local_158,param_1);
        ppcStack_118 = &local_138;
        pppvStack_108 = &local_120;
        local_110 = "WebRTC-ExtraICEPing/Not sending extra ping last_ping_sent_: ";
        local_120 = local_158;
        FUN_005f3500(&local_90,param_1 + 0x118);
        local_e8 = &local_110;
        uStack_f8 = uStack_88;
        local_100 = local_90;
        local_f0 = local_80;
        ppppppplStack_d8 = (long *******)&local_100;
        local_e0 = " now: ";
        FUN_005f3500(&local_90,&local_98);
        local_b8 = &local_e0;
        uStack_c8 = uStack_88;
        local_d0 = local_90;
        local_c0 = local_80;
        ppppppplStack_a0 = (long *******)&local_d0;
        local_a8 = " (diff: ";
        local_160 = 0x7fffffffffffffff;
        if ((local_98 != (undefined1 *)0x7fffffffffffffff) &&
           (pppppplVar6 = param_1[0x118], pppppplVar6 != (long ******)0x8000000000000000)) {
          local_160 = -0x8000000000000000;
          if (pppppplVar6 != (long ******)0x7fffffffffffffff &&
              local_98 != (undefined1 *)0x8000000000000000) {
            local_160 = (long)local_98 - (long)pppppplVar6;
          }
        }
        FUN_005f3380(&local_68,&local_160);
        local_80 = CONCAT17(uStack_51,local_58);
        local_78 = &local_a8;
        uStack_88 = uStack_60;
        local_90 = local_68;
        ppppplVar1 = ppppppplStack_a0[3][1];
        pppplVar13 = ppppplVar1[3];
        ppplVar2 = pppplVar13[1];
        pplVar3 = ppplVar2[1];
        FUN_00623bb0("\r\n\t\n\t\n\t\n\t",*pplVar3,*(undefined4 *)(pplVar3 + 1),*ppplVar2,
                     *pppplVar13,ppppplVar1,*ppppppplStack_a0[3],ppppppplStack_a0,local_a8,&local_90
                     ,&DAT_001ca519);
        if (local_f0 < 0) {
          operator_delete(local_100);
        }
        if (cStack_141 < '\0') {
          operator_delete(local_158[0]);
        }
      }
    }
    else {
      if ((uVar7 & 1) == 0) {
        local_138 = "../../p2p/base/connection.cc";
        local_130 = 0x1599;
        local_128 = &uStack_139;
        FUN_00c61eb8(local_158,param_1);
        ppcStack_118 = &local_138;
        pppvStack_108 = &local_120;
        local_110 = "WebRTC-ExtraICEPing/Sending extra ping last_ping_sent_: ";
        local_120 = local_158;
        FUN_005f3500(&local_90,param_1 + 0x118);
        local_e8 = &local_110;
        uStack_f8 = uStack_88;
        local_100 = local_90;
        local_f0 = local_80;
        ppppppplStack_d8 = (long *******)&local_100;
        local_e0 = " now: ";
        FUN_005f3500(&local_90,&local_98);
        local_b8 = &local_e0;
        uStack_c8 = uStack_88;
        local_d0 = local_90;
        local_c0 = local_80;
        ppppppplStack_a0 = (long *******)&local_d0;
        local_a8 = " (diff: ";
        local_160 = 0x7fffffffffffffff;
        if ((local_98 != (undefined1 *)0x7fffffffffffffff) &&
           (pppppplVar6 = param_1[0x118], pppppplVar6 != (long ******)0x8000000000000000)) {
          local_160 = -0x8000000000000000;
          if (pppppplVar6 != (long ******)0x7fffffffffffffff &&
              local_98 != (undefined1 *)0x8000000000000000) {
            local_160 = (long)local_98 - (long)pppppplVar6;
          }
        }
        FUN_005f3380(&local_68,&local_160);
        local_80 = CONCAT17(uStack_51,local_58);
        local_78 = &local_a8;
        uStack_88 = uStack_60;
        local_90 = local_68;
        ppppplVar1 = ppppppplStack_a0[3][1];
        pppplVar13 = ppppplVar1[3];
        ppplVar2 = pppplVar13[1];
        pplVar3 = ppplVar2[1];
        FUN_00623bb0("\r\n\t\n\t\n\t\n\t",*pplVar3,*(undefined4 *)(pplVar3 + 1),*ppplVar2,
                     *pppplVar13,ppppplVar1,*ppppppplStack_a0[3],ppppppplStack_a0,local_a8,&local_90
                     ,&DAT_001ca519);
        if (local_f0 < 0) {
          operator_delete(local_100);
        }
        if (cStack_141 < '\0') {
          operator_delete(local_158[0]);
        }
      }
      FUN_00c64438(param_1,local_98,0);
    }
  }
LAB_00c63af4:
  if (*(short *)(param_2 + 0x20) == 1) {
    uVar7 = FUN_009881a4(param_1 + 8);
    if ((uVar7 & 1) == 0) {
      pppppplVar6 = (long ******)0x0;
      pppppplVar12 = (long ******)(long)*(char *)((long)param_1 + 0x29f);
      if ((long)pppppplVar12 < 0) goto LAB_00c63b2c;
LAB_00c63b18:
      ppppppplVar10 = param_1 + 0x51;
    }
    else {
      pppppplVar6 = param_1[9];
      pppppplVar12 = (long ******)(long)*(char *)((long)param_1 + 0x29f);
      if (-1 < (long)pppppplVar12) goto LAB_00c63b18;
LAB_00c63b2c:
      ppppppplVar10 = (long *******)param_1[0x51];
      pppppplVar12 = param_1[0x52];
    }
    uVar7 = (*(code *)(*pppppplVar6)[0x32])
                      (pppppplVar6,param_1 + 0x47,param_2,ppppppplVar10,pppppplVar12);
    if ((uVar7 & 1) == 0) {
      uVar7 = FUN_00417e08();
      if ((uVar7 & 1) != 0) {
        return;
      }
      FUN_00623bb0(&DAT_001f4e98,"../../p2p/base/connection.cc",0x1649,
                   "Received conflicting role from the peer.");
      return;
    }
  }
  param_1[0x7d] = (long ******)((long)param_1[0x7d] + 1);
  if (param_1[0x133] != (long ******)0x0) {
    FUN_00c5ba2c(param_1[0x133],1,*(undefined4 *)(param_1 + 7),*(undefined4 *)(param_2 + 0x40));
  }
  if (*(short *)(param_2 + 0x20) == 1) {
    FUN_00c6400c(param_1,param_2,0);
    FUN_00c64890(param_1,param_2);
    bVar4 = *(byte *)((long)param_1 + 0x846);
  }
  else {
    FUN_00c64bcc(param_1,param_2);
    bVar4 = *(byte *)((long)param_1 + 0x846);
  }
  if (((bVar4 & 1) == 0) && (*(int *)(param_1 + 0x108) == 3)) {
    FUN_00c628c0(param_1,2);
  }
  uVar7 = FUN_009881a4(param_1 + 8);
  if ((uVar7 & 1) == 0) {
    pppppplVar6 = (long ******)0x0;
  }
  else {
    pppppplVar6 = param_1[9];
  }
  iVar5 = (*(code *)(*pppppplVar6)[5])();
  if (iVar5 == 1) {
    lVar9 = FUN_00c69f88(param_2,0xc001);
    if (lVar9 == 0) {
      lVar9 = FUN_00c69fe8(param_2,0x25);
      if (lVar9 == 0) goto LAB_00c63cac;
      uVar11 = 1;
    }
    else {
      uVar11 = *(uint *)(lVar9 + 0xc);
      if (uVar11 == 0) {
        uVar7 = FUN_004249b0();
        if ((uVar7 & 1) == 0) {
          FUN_00623bb0(&DAT_001f6220,"../../p2p/base/connection.cc",0x173b,"Invalid nomination: ",0)
          ;
        }
        goto LAB_00c63cac;
      }
    }
    if (*(uint *)((long)param_1 + 0x854) < uVar11) {
      *(uint *)((long)param_1 + 0x854) = uVar11;
      local_90 = (long *******)&local_d0;
      local_d0 = param_1;
      FUN_007b6160(param_1 + 0x160,&local_90,FUN_00c68528);
    }
  }
LAB_00c63cac:
  lVar9 = FUN_00c69f88(param_2,0xc057);
  if ((lVar9 != 0) &&
     ((uint)*(ushort *)((long)param_1 + 0x362) != (*(uint *)(lVar9 + 0xc) & 0xffff))) {
    *(short *)((long)param_1 + 0x362) = (short)*(uint *)(lVar9 + 0xc);
    local_90 = (long *******)&local_d0;
    local_d0 = param_1;
    FUN_007b6160(param_1 + 0x154,&local_90,FUN_00c68528);
  }
  if (*(char *)(param_1[0x136] + 7) == '\x01') {
    FUN_00c64c74(param_1,param_2);
  }
  return;
}


// ===== 00c63de4  FUN_00c63de4 =====

void FUN_00c63de4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  *(undefined8 *)(param_1 + 0x8c8) = uVar1;
  FUN_005e7520(param_1 + 0x900,param_2);
  FUN_00c62988(param_1,*(undefined8 *)(param_1 + 0x8c8));
  return;
}


// ===== 00c63e34  FUN_00c63e34 =====

void FUN_00c63e34(long param_1,long param_2)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  void *local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 local_68;
  long local_60;
  char local_58;
  void *local_50;
  void *local_48;
  char local_38;
  
  if (*(code **)(param_1 + 0xa78) == (code *)0x0) {
    return;
  }
  (**(code **)(param_1 + 0xa78))(&local_68,param_1 + 0xa60,*(undefined2 *)(param_2 + 0x20));
  if (local_38 == '\x01') {
    if ((long)local_48 + ((ulong)*(ushort *)(param_2 + 0x22) - (long)local_50) + 4 < 0x491) {
      pvVar1 = operator_new(0x18);
      FUN_00c6c9b8(pvVar1,0xc071,&local_50);
      FUN_00c69d80(param_2,pvVar1);
    }
    else {
      if (0x48c < *(ushort *)(param_2 + 0x22)) goto LAB_00c63f58;
      local_80 = (void *)0x0;
      uStack_78 = 0;
      local_70 = 0;
      pvVar1 = operator_new(0x18);
      FUN_00c6c8e0(pvVar1,0xc071,&local_80,0);
      FUN_00c69d80(param_2,pvVar1);
      if (local_70 < 0) {
        operator_delete(local_80);
      }
    }
  }
  if ((local_58 == '\x01') && (local_60 + (ulong)*(ushort *)(param_2 + 0x22) + 4 < 0x491)) {
    pvVar1 = operator_new(0x18);
    FUN_00c6c8e0(pvVar1,0xc070,local_68,local_60);
    FUN_00c69d80(param_2,pvVar1);
  }
LAB_00c63f58:
  if ((local_38 == '\x01') && (local_50 != (void *)0x0)) {
    uVar3 = (ulong)((long)local_48 + (-4 - ((long)local_48 << 0x3e))) >> 2;
    uVar2 = (ulong)(((long)local_50 - (long)local_48 << 0x3e) - ((long)local_50 - (long)local_48))
            >> 2;
    if (uVar3 <= uVar2) {
      uVar2 = uVar3;
    }
    if ((1 < uVar2) && ((((int)local_50 - (int)local_48 | -(int)local_48) & 3U) == 0)) {
      uVar2 = uVar2 & 0x3ffffffffffffffe;
      local_48 = (void *)((long)local_48 + uVar2 * -4);
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    while (local_48 != local_50) {
      local_48 = (void *)((long)local_48 + -4);
      if (local_48 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    local_48 = local_50;
    operator_delete(local_50);
  }
  return;
}


// ===== 00c6400c  FUN_00c6400c =====

void FUN_00c6400c(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  void *pvVar6;
  undefined4 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 uVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  void *local_b8;
  void *local_b0;
  void *local_a8;
  char local_a0;
  undefined8 local_98;
  undefined1 *puStack_90;
  undefined1 local_88;
  undefined4 local_87;
  undefined2 local_83;
  undefined1 local_81;
  undefined1 local_80;
  undefined7 uStack_7f;
  void *local_78;
  char local_68;
  undefined4 *local_60;
  undefined4 *puStack_58;
  undefined4 *local_50;
  ulong local_48;
  undefined4 local_24;
  
  if (*(long *)(param_1 + 0xa78) == 0) {
    return;
  }
  lVar2 = FUN_00c69fe8(param_2,0xc070);
  lVar3 = FUN_00c69fe8(param_2,0xc071);
  if (lVar2 == 0) {
    puVar11 = &DAT_aaaaaaaaaaaaaaaa;
    uVar10 = 0;
    uVar12 = 0xaaaaaaaaaaaaaa00;
  }
  else {
    puVar11 = (undefined1 *)(ulong)*(ushort *)(lVar2 + 10);
    uVar10 = 1;
    uVar12 = 0;
    if (*(ushort *)(lVar2 + 10) != 0) {
      uVar12 = *(undefined8 *)(lVar2 + 0x10);
    }
  }
  puStack_58 = (undefined4 *)&DAT_aaaaaaaaaaaaaaaa;
  local_50 = (undefined4 *)&DAT_aaaaaaaaaaaaaaaa;
  local_60 = (undefined4 *)0xaaaaaaaaaaaaaa00;
  local_48 = 0xaaaaaaaaaaaaaa00;
  if (lVar3 != 0) {
    FUN_00c6cb80(&local_80);
    FUN_00c68544(&local_60,&local_80);
    if ((local_68 == '\x01') &&
       (pvVar6 = (void *)CONCAT71(uStack_7f,local_80), pvVar6 != (void *)0x0)) {
      uVar9 = (ulong)((long)local_78 + (-4 - ((long)local_78 << 0x3e))) >> 2;
      uVar8 = (ulong)(((long)pvVar6 - (long)local_78 << 0x3e) - ((long)pvVar6 - (long)local_78)) >>
              2;
      if (uVar9 <= uVar8) {
        uVar8 = uVar9;
      }
      pvVar5 = local_78;
      if ((1 < uVar8) && ((((int)pvVar6 - (int)local_78 | -(int)local_78) & 3U) == 0)) {
        uVar8 = uVar8 & 0x3ffffffffffffffe;
        pvVar5 = (void *)((long)local_78 + uVar8 * -4);
        do {
          uVar8 = uVar8 - 2;
        } while (uVar8 != 0);
      }
      do {
        if (pvVar5 == pvVar6) {
          local_78 = pvVar6;
          operator_delete(pvVar6);
          goto LAB_00c64134;
        }
        pvVar5 = (void *)((long)pvVar5 + -4);
      } while (pvVar5 != (void *)0x0);
      goto LAB_00c643bc;
    }
LAB_00c64134:
    if (param_3 != 0) {
      uVar4 = FUN_00c6916c(param_3);
      lVar2 = FUN_00c69fe8(uVar4,0xc070);
      if (lVar2 != 0) {
        uVar4 = 0;
        if (*(short *)(lVar2 + 10) != 0) {
          uVar4 = *(undefined8 *)(lVar2 + 0x10);
        }
        uVar1 = FUN_00c6ebf0(uVar4);
        local_24 = uVar1;
        if ((local_48 & 1) == 0) {
          local_80 = 0;
          local_68 = '\0';
          FUN_00c68544(&local_60,&local_80);
          if ((local_68 == '\x01') &&
             (pvVar6 = (void *)CONCAT71(uStack_7f,local_80), pvVar6 != (void *)0x0)) {
            uVar9 = (ulong)((long)local_78 + (-4 - ((long)local_78 << 0x3e))) >> 2;
            uVar8 = (ulong)(((long)pvVar6 - (long)local_78 << 0x3e) -
                           ((long)pvVar6 - (long)local_78)) >> 2;
            if (uVar9 <= uVar8) {
              uVar8 = uVar9;
            }
            pvVar5 = local_78;
            if ((1 < uVar8) && ((((int)pvVar6 - (int)local_78 | -(int)local_78) & 3U) == 0)) {
              uVar8 = uVar8 & 0x3ffffffffffffffe;
              pvVar5 = (void *)((long)local_78 + uVar8 * -4);
              do {
                uVar8 = uVar8 - 2;
              } while (uVar8 != 0);
            }
            do {
              if (pvVar5 == pvVar6) {
                local_78 = pvVar6;
                operator_delete(pvVar6);
                goto LAB_00c64210;
              }
              pvVar5 = (void *)((long)pvVar5 + -4);
            } while (pvVar5 != (void *)0x0);
            goto LAB_00c643bc;
          }
LAB_00c64210:
          if ((local_48 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                      );
          }
        }
        if (puStack_58 < local_50) {
          if (puStack_58 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *puStack_58 = uVar1;
          puStack_58 = puStack_58 + 1;
        }
        else {
          puStack_58 = (undefined4 *)FUN_00852528(&local_60,&local_24);
        }
      }
    }
  }
  puVar7 = local_60;
  local_87 = 0xaaaaaaaa;
  local_83 = 0xaaaa;
  local_81 = 0xaa;
  local_b8 = (void *)((ulong)local_b8 & 0xffffffffffffff00);
  local_a0 = '\0';
  local_98 = uVar12;
  puStack_90 = puVar11;
  local_88 = uVar10;
  if ((char)local_48 == '\x01') {
    local_b8 = (void *)0x0;
    local_b0 = (void *)0x0;
    local_a8 = (void *)0x0;
    uVar8 = (long)puStack_58 - (long)local_60;
    if (uVar8 != 0) {
      if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005da79c();
      }
      local_b8 = operator_new(uVar8);
      pvVar6 = (void *)((long)local_b8 + uVar8);
      local_a8 = pvVar6;
      memcpy(local_b8,puVar7,uVar8);
      local_b0 = pvVar6;
    }
    local_a0 = '\x01';
  }
  FUN_00c5b394(param_1 + 0xa60,&local_98,&local_b8);
  if ((local_a0 == '\x01') && (local_b8 != (void *)0x0)) {
    uVar9 = (ulong)((long)local_b0 + (-4 - ((long)local_b0 << 0x3e))) >> 2;
    uVar8 = (ulong)(((long)local_b8 - (long)local_b0 << 0x3e) - ((long)local_b8 - (long)local_b0))
            >> 2;
    if (uVar9 <= uVar8) {
      uVar8 = uVar9;
    }
    pvVar6 = local_b0;
    if ((1 < uVar8) && ((((int)local_b8 - (int)local_b0 | -(int)local_b0) & 3U) == 0)) {
      uVar8 = uVar8 & 0x3ffffffffffffffe;
      pvVar6 = (void *)((long)local_b0 + uVar8 * -4);
      do {
        uVar8 = uVar8 - 2;
      } while (uVar8 != 0);
    }
    do {
      if (pvVar6 == local_b8) {
        local_b0 = local_b8;
        operator_delete(local_b8);
        goto LAB_00c64344;
      }
      pvVar6 = (void *)((long)pvVar6 + -4);
    } while (pvVar6 != (void *)0x0);
  }
  else {
LAB_00c64344:
    if ((char)local_48 != '\x01') {
      return;
    }
    if (local_60 == (undefined4 *)0x0) {
      return;
    }
    uVar9 = (ulong)((long)puStack_58 + (-4 - ((long)puStack_58 << 0x3e))) >> 2;
    uVar8 = (ulong)(((long)local_60 - (long)puStack_58 << 0x3e) -
                   ((long)local_60 - (long)puStack_58)) >> 2;
    if (uVar9 <= uVar8) {
      uVar8 = uVar9;
    }
    puVar7 = puStack_58;
    if ((1 < uVar8) && ((((int)local_60 - (int)puStack_58 | -(int)puStack_58) & 3U) == 0)) {
      uVar8 = uVar8 & 0x3ffffffffffffffe;
      puVar7 = puStack_58 + -uVar8;
      do {
        uVar8 = uVar8 - 2;
      } while (uVar8 != 0);
    }
    do {
      if (puVar7 == local_60) {
        puStack_58 = local_60;
        operator_delete(local_60);
        return;
      }
      puVar7 = puVar7 + -1;
    } while (puVar7 != (undefined4 *)0x0);
  }
LAB_00c643bc:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c64438  FUN_00c64438 =====

/* WARNING: Removing unreachable block (ram,0x00c646cc) */

void FUN_00c64438(long param_1,undefined *param_2,long *param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  char ****__dest;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  size_t __n;
  char ****__src;
  void *local_d8 [2];
  char cStack_c1;
  void *local_c0 [2];
  char cStack_a9;
  undefined1 uStack_a1;
  void **local_a0;
  char ***pppcStack_98;
  char ***local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined *local_78;
  uint local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_009881a4(param_1 + 0x40);
  if (((uVar4 & 1) == 0) || (*(long *)(param_1 + 0x48) == 0)) {
    if (param_3 != (long *)0x0) {
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Could not recover jumptable at 0x00c64540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_3 + 8))(param_3);
        return;
      }
      goto LAB_00c64888;
    }
  }
  else {
    *(undefined **)(param_1 + 0x8c0) = param_2;
    uVar1 = (uint)*(byte *)(param_1 + 0x848);
    if (*(uint *)(param_1 + 0x84c) != 0) {
      uVar1 = *(uint *)(param_1 + 0x84c);
    }
    uVar5 = FUN_00c66490(param_1,param_3);
    plVar6 = (long *)operator_new(0x68);
    FUN_00c69328(plVar6,param_1 + 8,param_1 + 0x858,uVar5);
    plVar6[0xc] = param_1;
    *plVar6 = (long)&PTR_FUN_00d4df18;
    plVar8 = plVar6;
    if ((((param_3 == (long *)0x0) &&
         (uVar5 = FUN_00c6916c(plVar6), *(char *)(param_1 + 0x9a1) == '\x01')) &&
        (*(char *)(param_1 + 0x9a0) != '\0')) && (*(long *)(param_1 + 0x9a8) != 0)) {
      local_80 = FUN_00c689ec;
      local_78 = &DAT_002599a0;
      uVar4 = FUN_00c6b8f4(*(long *)(param_1 + 0x9a8),uVar5,&local_90);
      if (*(code **)(local_78 + 8) != (code *)0x0) {
        (**(code **)(local_78 + 8))(local_90);
      }
      if ((uVar4 & 1) != 0) {
        lVar9 = plVar6[7];
        puVar12 = (undefined8 *)operator_new(0x80);
        uVar4 = *(ulong *)(lVar9 + 0x30);
        puVar10 = *(undefined8 **)(lVar9 + 0x28);
        if (-1 < (char)*(byte *)(lVar9 + 0x3f)) {
          uVar4 = (ulong)*(byte *)(lVar9 + 0x3f);
          puVar10 = (undefined8 *)(lVar9 + 0x28);
        }
        FUN_00c69b48(puVar12,0x200,puVar10,uVar4);
        lVar9 = (long)*(char *)(param_1 + 0x2b7);
        *puVar12 = &PTR_FUN_00d4e368;
        if (lVar9 < 0) {
          lVar11 = *(long *)(param_1 + 0x2a0);
          lVar9 = *(long *)(param_1 + 0x2a8);
        }
        else {
          lVar11 = param_1 + 0x2a0;
        }
        FUN_00c6a9a8(puVar12,lVar11,lVar9);
        plVar8 = (long *)operator_new(0x68);
        FUN_00c69328(plVar8,param_1 + 8,param_1 + 0x858,puVar12);
        *plVar8 = (long)&PTR_FUN_00d4df18;
        plVar8[0xc] = param_1;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
    lVar9 = plVar8[7];
    __n = (size_t)*(char *)(lVar9 + 0x3f);
    if ((long)__n < 0) {
      __n = *(ulong *)(lVar9 + 0x30);
      if (0x7ffffffffffffff6 < __n) {
                    /* WARNING: Subroutine does not return */
        FUN_005d45ec();
      }
      __src = *(char *****)(lVar9 + 0x28);
      if (0x16 < __n) goto LAB_00c64618;
LAB_00c644f4:
      local_80 = (code *)CONCAT17((char)__n,(undefined7)local_80);
      __dest = &local_90;
    }
    else {
      __src = (char ****)(lVar9 + 0x28);
      if (__n < 0x17) goto LAB_00c644f4;
LAB_00c64618:
      uVar4 = (__n & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar4 != 0x18) {
        uVar2 = uVar4;
      }
      __dest = (char ****)operator_new(uVar2);
      local_80 = (code *)(uVar2 | 0x8000000000000000);
      local_90 = (char ***)__dest;
      uStack_88 = __n;
    }
    if ((char ****)((long)__dest + __n) < __dest) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((__dest <= __src) && (__src < (char ****)((long)__dest + __n))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(__dest,__src,__n);
    puVar10 = *(undefined8 **)(param_1 + 0x8f0);
    puVar12 = *(undefined8 **)(param_1 + 0x8f8);
    *(undefined1 *)((long)__dest + __n) = 0;
    local_78 = param_2;
    local_70 = uVar1;
    if (puVar10 < puVar12) {
      if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar12 = puVar10 + 5;
      puVar10[2] = local_80;
      puVar10[1] = uStack_88;
      *puVar10 = local_90;
      uStack_88 = 0;
      local_80 = (code *)0x0;
      local_90 = (char ***)0x0;
      puVar10[3] = param_2;
      *(uint *)(puVar10 + 4) = uVar1;
    }
    else {
      puVar12 = (undefined8 *)FUN_00c68710(param_1 + 0x8e8,&local_90);
    }
    *(undefined8 **)(param_1 + 0x8f0) = puVar12;
    uVar4 = FUN_0044075c();
    if ((uVar4 & 1) == 0) {
      local_90 = (char ***)0x1996ca;
      uStack_88 = 0x2310;
      local_80 = (code *)&uStack_a1;
      FUN_00c61eb8(local_c0,param_1);
      lVar11 = plVar8[7];
      pppcStack_98 = (char ***)&local_90;
      lVar9 = (long)*(char *)(lVar11 + 0x3f);
      if (lVar9 < 0) {
        lVar7 = *(long *)(lVar11 + 0x28);
        lVar9 = *(long *)(lVar11 + 0x30);
      }
      else {
        lVar7 = lVar11 + 0x28;
      }
      local_a0 = local_c0;
      FUN_00624c34(local_d8,lVar7,lVar9);
      FUN_00623bb0(&DAT_0025996e,*pppcStack_98,*(undefined4 *)(pppcStack_98 + 1),local_a0,
                   ": Sending STUN ping, id=",local_d8,", nomination=",
                   *(undefined4 *)(param_1 + 0x84c));
      if (cStack_c1 < '\0') {
        operator_delete(local_d8[0]);
      }
      if (cStack_a9 < '\0') {
        operator_delete(local_c0[0]);
      }
    }
    FUN_00c68ac8(param_1 + 0x858,plVar8,0);
    *(undefined4 *)(param_1 + 0x948) = 1;
    *(int *)(param_1 + 0x970) = *(int *)(param_1 + 0x970) + 1;
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
LAB_00c64888:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c64890  FUN_00c64890 =====

void FUN_00c64890(long *param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  short sVar3;
  long lVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 uStack_109;
  char *local_108;
  char **ppcStack_100;
  char *local_f8;
  char **ppcStack_f0;
  ulong local_e8;
  char **ppcStack_e0;
  char *local_d8;
  undefined8 uStack_d0;
  undefined1 *local_c8;
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
  
  lVar4 = FUN_00c69fe8(param_2,6);
  if (lVar4 != 0) {
    lVar4 = (long)*(char *)(param_2 + 0x3f);
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
    if (lVar4 < 0) {
      lVar8 = *(long *)(param_2 + 0x28);
      lVar4 = *(long *)(param_2 + 0x30);
    }
    else {
      lVar8 = param_2 + 0x28;
    }
    FUN_00c69b48(&local_c0,0x101,lVar8,lVar4);
    lVar4 = FUN_00c69f88(param_2,0xff00);
    if (lVar4 != 0) {
      uVar1 = *(undefined4 *)(lVar4 + 0xc);
      pvVar5 = operator_new(0x10);
      FUN_00c6c6b0(pvVar5,0xff00,uVar1);
      FUN_00c69d80(&local_c0,pvVar5);
      if ((5 < *(uint *)(lVar4 + 0xc)) && (uVar6 = FUN_00417e08(), (uVar6 & 1) == 0)) {
        FUN_00c61eb8(&local_d8,param_1);
        FUN_00623bb0(&DAT_00259928,"../../p2p/base/connection.cc",0x1919,&local_d8,
                     ": Received a remote ping with high retransmit count: ",
                     *(undefined4 *)(lVar4 + 0xc));
        if ((long)local_c8 < 0) {
          operator_delete(local_d8);
        }
      }
    }
    pvVar5 = operator_new(0x60);
    FUN_00c6c0e8(pvVar5,0x20,param_1 + 0x47);
    FUN_00c69d80(&local_c0,pvVar5);
    if ((*(char *)(param_1[0x136] + 0x1c) == '\x01') &&
       (lVar4 = FUN_00c6a018(param_2,0xc059), lVar4 != 0)) {
      FUN_00c6d450();
      sVar3 = FUN_00c6d468(lVar4,0);
      if (sVar3 != 0) {
        uVar7 = FUN_00c6bb40(0xc059);
        FUN_00c6d534(uVar7,0,1);
        FUN_00c69d80(&local_c0,uVar7);
      }
    }
    lVar4 = FUN_00c69fe8(param_2,0xc05c);
    if (lVar4 != 0) {
      if ((*(char *)(param_1[0x136] + 0x3b) == '\x01') && ((char)param_1[0x141] == '\x01')) {
        lVar8 = (*(code *)param_1[0x13f])(param_1 + 0x13d,lVar4);
        if (lVar8 == 0) {
          uVar6 = FUN_004249b0();
          if ((uVar6 & 1) == 0) {
            FUN_00623bb0(&DAT_001f4e98,"../../p2p/base/connection.cc",0x1a33,
                         "GOOG_DELTA consumer did not return ack!");
          }
        }
        else {
          uVar6 = FUN_00417e08();
          if ((uVar6 & 1) == 0) {
            FUN_00623bb0(&DAT_0025992d,"../../p2p/base/connection.cc",0x1a11,
                         "Sending GOOG_DELTA_ACK"," delta len: ",*(undefined2 *)(lVar4 + 10));
          }
          FUN_00c69d80(&local_c0,lVar8);
        }
      }
      else {
        uVar6 = FUN_004022fc();
        if ((uVar6 & 1) == 0) {
          local_d8 = "../../p2p/base/connection.cc";
          uStack_d0 = 0x1a4a;
          ppcStack_100 = &local_d8;
          local_108 = "Ignore GOOG_DELTA";
          ppcStack_f0 = &local_108;
          local_c8 = &uStack_109;
          local_f8 = " len: ";
          ppcStack_e0 = &local_f8;
          local_e8 = (ulong)*(ushort *)(lVar4 + 10);
          FUN_00623bb0(&DAT_00259932,"../../p2p/base/connection.cc",0x1a4a);
        }
      }
    }
    FUN_00c63e34(param_1,&local_c0);
    lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
    uVar6 = *(ulong *)(lVar4 + 0xc0);
    plVar2 = (long *)*(long *)(lVar4 + 0xb8);
    if (-1 < (char)*(byte *)(lVar4 + 0xcf)) {
      uVar6 = (ulong)*(byte *)(lVar4 + 0xcf);
      plVar2 = (long *)(lVar4 + 0xb8);
    }
    FUN_00c6a5dc(&local_c0,plVar2,uVar6);
    FUN_00c6ae6c(&local_c0);
    FUN_00c64e44(param_1,&local_c0);
    FUN_00c6e5fc(&local_c0);
  }
  return;
}


// ===== 00c64bcc  FUN_00c64bcc =====

void FUN_00c64bcc(long *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
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
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  lVar4 = (long)*(char *)(param_2 + 0x3f);
  if (lVar4 < 0) {
    lVar3 = *(long *)(param_2 + 0x28);
    lVar4 = *(long *)(param_2 + 0x30);
  }
  else {
    lVar3 = param_2 + 0x28;
  }
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
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c69b48(&local_a0,0x300,lVar3,lVar4);
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
  uVar1 = *(ulong *)(lVar4 + 0xc0);
  plVar2 = (long *)*(long *)(lVar4 + 0xb8);
  if (-1 < (char)*(byte *)(lVar4 + 0xcf)) {
    uVar1 = (ulong)*(byte *)(lVar4 + 0xcf);
    plVar2 = (long *)(lVar4 + 0xb8);
  }
  FUN_00c6a9a8(&local_a0,plVar2,uVar1);
  FUN_00c64e44(param_1,&local_a0);
  FUN_00c6e5fc(&local_a0);
  return;
}


// ===== 00c64c74  FUN_00c64c74 =====

void FUN_00c64c74(long param_1,undefined8 param_2)

{
  undefined8 *__s2;
  byte bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  void *__s1;
  ulong __n;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *local_88 [2];
  char cStack_71;
  void *local_70 [2];
  char cStack_59;
  char *local_58;
  ulong local_50;
  undefined1 *local_48;
  undefined1 uStack_21;
  
  lVar4 = FUN_00c69fe8(param_2,0xc058);
  if (lVar4 != 0) {
    __s1 = *(void **)(lVar4 + 0x10);
    __n = (ulong)*(ushort *)(lVar4 + 10);
    if ((__s1 == (void *)0x0) && (*(ushort *)(lVar4 + 10) != 0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                );
    }
    puVar9 = *(undefined8 **)(param_1 + 0x8e8);
    puVar8 = *(undefined8 **)(param_1 + 0x8f0);
    if (puVar9 == puVar8) {
LAB_00c64d0c:
      if (puVar9 != puVar8) {
        bVar2 = *(int *)(param_1 + 0x840) != 0;
        uVar5 = FUN_00623b7c(bVar2);
        if ((uVar5 & 1) == 0) {
          local_50 = (ulong)(bVar2 | 0x26f0);
          local_58 = "../../p2p/base/connection.cc";
          local_48 = &uStack_21;
          FUN_00c61eb8(local_70,param_1);
          FUN_00624c34(local_88,__s1,__n);
          FUN_00623bb0(&DAT_0025987e,local_58,local_50 & 0xffffffff,local_70,
                       ": Received piggyback STUN ping response, id=",local_88);
          if (cStack_71 < '\0') {
            operator_delete(local_88[0]);
          }
          if (cStack_59 < '\0') {
            operator_delete(local_70[0]);
          }
        }
        lVar6 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
        lVar4 = 0x7fffffffffffffff;
        if ((lVar6 != 0x7fffffffffffffff) && (lVar7 = puVar9[3], lVar7 != -0x8000000000000000)) {
          lVar4 = -0x8000000000000000;
          if (lVar7 != 0x7fffffffffffffff && lVar6 != -0x8000000000000000) {
            lVar4 = lVar6 - lVar7;
          }
        }
        local_58 = (char *)CONCAT35(local_58._5_3_,0x100000000);
        local_58 = (char *)CONCAT44(local_58._4_4_,*(undefined4 *)(puVar9 + 4));
        FUN_00c66910(param_1,lVar4);
      }
    }
    else {
      do {
        bVar1 = *(byte *)((long)puVar9 + 0x17);
        uVar5 = puVar9[1];
        if (-1 < (char)bVar1) {
          uVar5 = (ulong)bVar1;
        }
        if (uVar5 == __n) {
          __s2 = (undefined8 *)*puVar9;
          if (-1 < (char)bVar1) {
            __s2 = puVar9;
          }
          iVar3 = memcmp(__s1,__s2,__n);
          if (iVar3 == 0) goto LAB_00c64d0c;
        }
        puVar9 = puVar9 + 5;
      } while (puVar9 != puVar8);
    }
  }
  return;
}


// ===== 00c64e44  FUN_00c64e44 =====

void FUN_00c64e44(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 in_stack_fffffffffffffe38;
  undefined4 uVar11;
  void *local_1a8 [2];
  char cStack_191;
  void *local_190 [2];
  char cStack_179;
  void *local_178 [2];
  char cStack_161;
  void *local_160 [2];
  char cStack_149;
  char *local_148;
  ulong local_140;
  char **local_138;
  void **local_130;
  char **ppcStack_128;
  char *local_120;
  void ***pppvStack_118;
  void **local_110;
  char **ppcStack_108;
  char *local_100;
  void ***pppvStack_f8;
  void **local_f0;
  char **ppcStack_e8;
  char *local_e0;
  void ***pppvStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined8 uStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  uVar11 = (undefined4)((ulong)in_stack_fffffffffffffe38 >> 0x20);
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_008792d8(&local_60);
  FUN_00c6a9c0(param_2,&local_60);
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  uVar9 = FUN_009881a4(param_1 + 0x40);
  if ((uVar9 & 1) == 0) {
    plVar10 = (long *)0x0;
  }
  else {
    plVar10 = *(long **)(param_1 + 0x48);
  }
  uVar7 = (**(code **)(*plVar10 + 0x170))();
  FUN_00897b90(&local_d0,uVar7);
  uStack_90 = (undefined1 *)CONCAT44(3,(undefined4)uStack_90);
  uVar9 = FUN_009881a4(param_1 + 0x40);
  if ((uVar9 & 1) == 0) {
    plVar10 = (long *)0x0;
  }
  else {
    plVar10 = *(long **)(param_1 + 0x48);
  }
  iVar8 = (**(code **)(*plVar10 + 0x90))(plVar10,local_50,local_60,param_1 + 0x238,&local_d0,0);
  if (iVar8 < 0) {
    uVar9 = FUN_004249b0();
    if ((uVar9 & 1) == 0) {
      local_148 = "../../p2p/base/connection.cc";
      local_140 = 0x1b83;
      local_138 = (char **)&stack0xffffffffffffffdf;
      FUN_00c61eb8(local_160,param_1);
      ppcStack_128 = &local_148;
      pppvStack_118 = &local_130;
      local_120 = ": Failed to send ";
      local_130 = local_160;
      FUN_00c6dac8(local_178,*(undefined2 *)(param_2 + 0x20));
      ppcStack_108 = &local_120;
      pppvStack_f8 = &local_110;
      local_100 = ", to=";
      local_110 = local_178;
      FUN_007e924c(local_190,param_1 + 0x238);
      ppcStack_e8 = &local_100;
      pppvStack_d8 = &local_f0;
      local_e0 = ", err=";
      uVar9 = *(ulong *)(param_2 + 0x30);
      puVar1 = *(undefined8 **)(param_2 + 0x28);
      if (-1 < (char)*(byte *)(param_2 + 0x3f)) {
        uVar9 = (ulong)*(byte *)(param_2 + 0x3f);
        puVar1 = (undefined8 *)(param_2 + 0x28);
      }
      local_f0 = local_190;
      FUN_00624c34(local_1a8,puVar1,uVar9);
      puVar1 = (undefined8 *)pppvStack_d8[1][1];
      puVar2 = (undefined8 *)puVar1[1];
      puVar3 = (undefined8 *)puVar2[1];
      puVar4 = (undefined8 *)puVar3[1];
      FUN_00623bb0(&DAT_0025993b,*puVar4,*(undefined4 *)(puVar4 + 1),*puVar3,*puVar2,*puVar1,
                   *pppvStack_d8[1],*pppvStack_d8,local_e0,CONCAT44(uVar11,iVar8),", id=",local_1a8)
      ;
      if (cStack_191 < '\0') {
        operator_delete(local_1a8[0]);
      }
      if (cStack_179 < '\0') {
        operator_delete(local_190[0]);
      }
      if (cStack_161 < '\0') {
        operator_delete(local_178[0]);
      }
      if (cStack_149 < '\0') {
        operator_delete(local_160[0]);
      }
    }
  }
  else {
    bVar6 = *(int *)(param_1 + 0x840) != 0;
    uVar9 = FUN_00623b7c(bVar6);
    if ((uVar9 & 1) == 0) {
      local_140 = (ulong)(bVar6 | 0x1bc0);
      local_148 = "../../p2p/base/connection.cc";
      local_138 = &local_120;
      FUN_00c61eb8(local_160,param_1);
      ppcStack_108 = &local_148;
      pppvStack_f8 = &local_110;
      local_100 = ": Sent ";
      local_110 = local_160;
      FUN_00c6dac8(local_178,*(undefined2 *)(param_2 + 0x20));
      ppcStack_e8 = &local_100;
      pppvStack_d8 = &local_f0;
      local_e0 = ", to=";
      local_f0 = local_178;
      FUN_007e924c(local_190,param_1 + 0x238);
      uVar9 = *(ulong *)(param_2 + 0x30);
      plVar10 = (long *)*(long *)(param_2 + 0x28);
      if (-1 < (char)*(byte *)(param_2 + 0x3f)) {
        uVar9 = (ulong)*(byte *)(param_2 + 0x3f);
        plVar10 = (long *)(param_2 + 0x28);
      }
      FUN_00624c34(local_1a8,plVar10,uVar9);
      puVar1 = (undefined8 *)pppvStack_d8[1][1];
      puVar2 = (undefined8 *)puVar1[1];
      FUN_00623bb0("\r\n\t\n\t\n\t\n",*puVar2,*(undefined4 *)(puVar2 + 1),*puVar1,*pppvStack_d8[1],
                   *pppvStack_d8,local_e0,local_190,", id=",local_1a8);
      if (cStack_191 < '\0') {
        operator_delete(local_1a8[0]);
      }
      if (cStack_179 < '\0') {
        operator_delete(local_190[0]);
      }
      if (cStack_161 < '\0') {
        operator_delete(local_178[0]);
      }
      if (cStack_149 < '\0') {
        operator_delete(local_160[0]);
      }
    }
    *(long *)(param_1 + 0x3c8) = *(long *)(param_1 + 0x3c8) + 1;
    if (*(long *)(param_1 + 0x998) != 0) {
      FUN_00c5ba2c(*(long *)(param_1 + 0x998),2,*(undefined4 *)(param_1 + 0x38),
                   *(undefined4 *)(param_2 + 0x40));
    }
  }
  FUN_00897c8c(&local_d0);
  puVar5 = local_50;
  local_50 = (undefined1 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    operator_delete__(puVar5);
  }
  return;
}


// ===== 00c65258  FUN_00c65258 =====

void FUN_00c65258(long param_1)

{
  long local_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&local_20;
  local_20 = param_1;
  FUN_007b6160(param_1 + 0xae0,&puStack_18,FUN_00c68528);
  return;
}


// ===== 00c65294  FUN_00c65294 =====

void FUN_00c65294(long param_1)

{
  ulong uVar1;
  void *local_38 [2];
  char cStack_21;
  
  if ((*(char *)(param_1 + 0x846) != '\x01') || (*(int *)(param_1 + 0x840) != 3)) {
    uVar1 = FUN_00417e08();
    if ((uVar1 & 1) == 0) {
      FUN_00c61eb8(local_38,param_1);
      FUN_00623bb0(&DAT_00223e94,"../../p2p/base/connection.cc",0x1cd1,local_38,
                   ": Connection pruned");
      if (cStack_21 < '\0') {
        operator_delete(local_38[0]);
      }
    }
    *(undefined1 *)(param_1 + 0x846) = 1;
    FUN_00c68c6c(param_1 + 0x858);
    FUN_00c628c0(param_1,3);
  }
  return;
}


// ===== 00c65344  FUN_00c65344 =====

bool FUN_00c65344(long param_1)

{
  return *(int *)(param_1 + 0x840) != 3;
}


// ===== 00c65358  FUN_00c65358 =====

void FUN_00c65358(long param_1)

{
  ulong uVar1;
  long *plVar2;
  
  uVar1 = FUN_009881a4(param_1 + 0x40);
  if (((uVar1 & 1) != 0) && (*(long *)(param_1 + 0x48) != 0)) {
    uVar1 = FUN_009881a4(param_1 + 0x40);
    if ((uVar1 & 1) == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = *(long **)(param_1 + 0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x00c653c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x120))(plVar2,param_1);
    return;
  }
  return;
}


// ===== 00c653c4  FUN_00c653c4 =====

undefined8 FUN_00c653c4(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  void *pvVar7;
  long local_38;
  long *local_18;
  
  uVar4 = FUN_009881a4(param_1 + 0x40);
  if (((uVar4 & 1) == 0) || (*(long *)(param_1 + 0x48) == 0)) {
    uVar5 = 0;
  }
  else {
    local_18 = &local_38;
    local_38 = param_1;
    FUN_007b6160(param_1 + 0xac0,&local_18,FUN_00c68528);
    lVar6 = *(long *)(param_1 + 0x998);
    if (lVar6 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x38);
      uVar5 = FUN_00c66d04(param_1);
      FUN_00c5b998(lVar6,2,uVar1,uVar5);
    }
    FUN_009880fc(&local_18);
    plVar2 = local_18;
    pvVar7 = *(void **)(param_1 + 0x40);
    local_18 = (long *)0x0;
    *(long **)(param_1 + 0x40) = plVar2;
    if ((pvVar7 != (void *)0x0) && (iVar3 = FUN_00d0f7a0(0xffffffff,(long)pvVar7 + 4), iVar3 == 1))
    {
      operator_delete(pvVar7);
    }
    FUN_00988108(&local_18);
    *(undefined8 *)(param_1 + 0x48) = 0;
    FUN_00c68c6c(param_1 + 0x858);
    uVar5 = 1;
  }
  return uVar5;
}


// ===== 00c654b0  FUN_00c654b0 =====

void FUN_00c654b0(long param_1)

{
  int iVar1;
  ulong uVar2;
  void *local_38 [2];
  char cStack_21;
  
  uVar2 = FUN_009881a4(param_1 + 0x40);
  if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x48) != 0)) {
    iVar1 = *(int *)(param_1 + 0x948);
    *(undefined4 *)(param_1 + 0x948) = 3;
    if ((iVar1 != 3) && (uVar2 = FUN_0044075c(), (uVar2 & 1) == 0)) {
      FUN_00c61eb8(local_38,param_1);
      FUN_00623bb0(&DAT_00223e94,"../../p2p/base/connection.cc",0xbb0,local_38,": set_state");
      if (cStack_21 < '\0') {
        operator_delete(local_38[0]);
      }
    }
    FUN_00c65294(param_1);
  }
  return;
}


// ===== 00c6555c  FUN_00c6555c =====

void FUN_00c6555c(long param_1,undefined8 *param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  void *pvVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  void *local_80;
  undefined8 local_78;
  long local_70;
  undefined8 **local_68;
  ulong uStack_60;
  ulong local_58;
  
  puVar9 = *(undefined8 **)(param_1 + 0x8f0);
  puVar10 = *(undefined8 **)(param_1 + 0x8e8);
  local_80 = (void *)0x0;
  local_78 = 0;
  local_70 = 0;
  uVar8 = ((long)puVar9 - (long)puVar10 >> 3) * -0x3333333333333333;
  if (uVar8 < param_3 || uVar8 - param_3 == 0) {
    if (puVar10 != puVar9) {
      do {
        lVar11 = (long)*(char *)((long)puVar10 + 0x17);
        puVar6 = puVar10;
        if (lVar11 < 0) {
          lVar11 = puVar10[1];
          puVar6 = (undefined8 *)*puVar10;
        }
        FUN_00624c34(&local_68,puVar6,lVar11);
        uVar8 = uStack_60;
        pppuVar2 = (undefined8 ***)local_68;
        if (-1 < (long)local_58) {
          uVar8 = local_58 >> 0x38;
          pppuVar2 = &local_68;
        }
        FUN_00547cac(&local_80,pppuVar2,uVar8);
        FUN_00547cac(&local_80,&DAT_001d5e07,1);
        if ((long)local_58 < 0) {
          operator_delete(local_68);
        }
        puVar10 = puVar10 + 5;
      } while (puVar10 != puVar9);
    }
  }
  else {
    if (param_3 != 0) {
      lVar11 = 0;
      uVar8 = 0;
      do {
        if ((ulong)((*(long *)(param_1 + 0x8f0) - *(long *)(param_1 + 0x8e8) >> 3) *
                   -0x3333333333333333) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                    );
        }
        plVar5 = (long *)(*(long *)(param_1 + 0x8e8) + lVar11);
        lVar7 = (long)*(char *)((long)plVar5 + 0x17);
        if (lVar7 < 0) {
          lVar7 = plVar5[1];
          plVar5 = (long *)*plVar5;
        }
        FUN_00624c34(&local_68,plVar5,lVar7);
        uVar1 = uStack_60;
        pppuVar2 = (undefined8 ***)local_68;
        if (-1 < (long)local_58) {
          uVar1 = local_58 >> 0x38;
          pppuVar2 = &local_68;
        }
        FUN_00547cac(&local_80,pppuVar2,uVar1);
        FUN_00547cac(&local_80,&DAT_001d5e07,1);
        if ((long)local_58 < 0) {
          operator_delete(local_68);
        }
        uVar8 = uVar8 + 1;
        lVar11 = lVar11 + 0x28;
      } while (param_3 != uVar8);
    }
    FUN_00547cac(&local_80,&DAT_001cd0d0,4);
    local_68 = (undefined8 ***)0x0;
    uStack_60 = 0;
    local_58 = 0;
    FUN_006247b4(&local_68,0x16,
                 (*(long *)(param_1 + 0x8f0) - *(long *)(param_1 + 0x8e8) >> 3) *
                 -0x3333333333333333 - param_3);
    uVar8 = uStack_60;
    pppuVar2 = (undefined8 ***)local_68;
    if (-1 < (long)local_58) {
      uVar8 = local_58 >> 0x38;
      pppuVar2 = &local_68;
    }
    FUN_00547cac(&local_80,pppuVar2,uVar8);
    if ((long)local_58 < 0) {
      operator_delete(local_68);
    }
    FUN_00547cac(&local_80," more",5);
  }
  lVar11 = local_70;
  uVar4 = local_78;
  pvVar3 = local_80;
  local_78 = 0;
  local_70 = 0;
  local_80 = (void *)0x0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    operator_delete((void *)*param_2);
    *param_2 = pvVar3;
    param_2[1] = uVar4;
    param_2[2] = lVar11;
    if (local_70 < 0) {
      operator_delete(local_80);
    }
  }
  else {
    *param_2 = pvVar3;
    param_2[1] = uVar4;
    param_2[2] = lVar11;
  }
  return;
}


// ===== 00c6581c  FUN_00c6581c =====

void FUN_00c6581c(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x847) = param_2;
  return;
}


// ===== 00c65828  FUN_00c65828 =====

/* WARNING: Removing unreachable block (ram,0x00c65ff4) */
/* WARNING: Removing unreachable block (ram,0x00c65fdc) */
/* WARNING: Removing unreachable block (ram,0x00c65e58) */
/* WARNING: Removing unreachable block (ram,0x00c65df0) */
/* WARNING: Removing unreachable block (ram,0x00c65ca8) */
/* WARNING: Removing unreachable block (ram,0x00c663b8) */
/* WARNING: Removing unreachable block (ram,0x00c663a0) */
/* WARNING: Removing unreachable block (ram,0x00c66304) */
/* WARNING: Removing unreachable block (ram,0x00c6629c) */
/* WARNING: Removing unreachable block (ram,0x00c6620c) */
/* WARNING: Removing unreachable block (ram,0x00c6617c) */
/* WARNING: Removing unreachable block (ram,0x00c66078) */
/* WARNING: Removing unreachable block (ram,0x00c65da0) */
/* WARNING: Removing unreachable block (ram,0x00c65d88) */
/* WARNING: Removing unreachable block (ram,0x00c65d70) */
/* WARNING: Removing unreachable block (ram,0x00c65a0c) */
/* WARNING: Removing unreachable block (ram,0x00c65974) */
/* WARNING: Removing unreachable block (ram,0x00c65958) */
/* WARNING: Removing unreachable block (ram,0x00c659f0) */
/* WARNING: Removing unreachable block (ram,0x00c65dd0) */
/* WARNING: Removing unreachable block (ram,0x00c65af4) */
/* WARNING: Removing unreachable block (ram,0x00c66160) */
/* WARNING: Removing unreachable block (ram,0x00c661f0) */
/* WARNING: Removing unreachable block (ram,0x00c66280) */
/* WARNING: Removing unreachable block (ram,0x00c662e8) */
/* WARNING: Removing unreachable block (ram,0x00c663d0) */
/* WARNING: Removing unreachable block (ram,0x00c65dd4) */
/* WARNING: Removing unreachable block (ram,0x00c65e3c) */
/* WARNING: Removing unreachable block (ram,0x00c6600c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c65828(long param_1,long param_2)

{
  bool bVar1;
  uint *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  char **ppcVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  undefined1 uStack_1a1;
  char **local_1a0;
  char ****ppppcStack_198;
  char *local_190;
  char ***pppcStack_188;
  char ***local_180;
  char **local_178;
  char **local_170;
  undefined1 *puStack_168;
  char **local_160;
  char ***local_158;
  char *local_150;
  char ****ppppcStack_148;
  char cStack_139;
  char ***local_138;
  char ***local_130;
  char ***local_128;
  char **local_120;
  char ****ppppcStack_118;
  char *local_110;
  char ***pppcStack_108;
  char **local_100;
  undefined1 *puStack_f8;
  char **local_f0;
  char **local_e8;
  char *local_e0;
  char ***pppcStack_d8;
  char **local_d0;
  undefined1 *puStack_c8;
  char **local_c0;
  char **local_b8;
  char ***local_b0;
  char ***pppcStack_a8;
  long local_a0;
  char **local_98;
  undefined1 *puStack_90;
  char **local_88;
  char **local_80;
  undefined1 *puStack_78;
  char **local_70;
  char ****local_68;
  undefined1 *local_60;
  
  uVar8 = FUN_009881a4(param_1 + 0x40);
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x48) == 0) {
    return;
  }
  local_a0 = *(long *)(param_1 + 0x898) * 2;
  if (local_a0 < 0x186a1) {
    local_a0 = 100000;
  }
  if (59999999 < local_a0) {
    local_a0 = 60000000;
  }
  iVar7 = FUN_00623870();
  if (iVar7 < 1) {
    local_98 = (char **)0x0;
    puStack_90 = (undefined1 *)0x0;
    local_88 = (char **)0x0;
    FUN_00c6555c(param_1,&local_98,5);
    uVar8 = FUN_0044075c();
    if ((uVar8 & 1) == 0) {
      local_138 = (char ***)0x1996ca;
      local_130 = (char ***)0x2000;
      local_128 = &local_1a0;
      FUN_00c61eb8(&local_150,param_1);
      ppppcStack_118 = &local_138;
      pppcStack_108 = &local_120;
      local_110 = ": UpdateState(), ms since last received response=";
      local_180 = (char ***)0x7fffffffffffffff;
      if ((param_2 != 0x7fffffffffffffff) &&
         (lVar12 = *(long *)(param_1 + 0x8d8), lVar12 != -0x8000000000000000)) {
        local_180 = (char ***)0x8000000000000000;
        if (lVar12 != 0x7fffffffffffffff && param_2 != -0x8000000000000000) {
          local_180 = (char ***)(param_2 - lVar12);
        }
      }
      local_120 = &local_150;
      FUN_005f3380(&local_80,&local_180);
      local_e8 = &local_110;
      puStack_f8 = puStack_78;
      local_100 = local_80;
      local_f0 = local_70;
      pppcStack_d8 = &local_100;
      local_e0 = ", ms since last received data=";
      local_190 = (char *)0x7fffffffffffffff;
      if ((param_2 != 0x7fffffffffffffff) &&
         (lVar12 = *(long *)(param_1 + 0x8d0), lVar12 != -0x8000000000000000)) {
        local_190 = (char *)0x8000000000000000;
        if (lVar12 != 0x7fffffffffffffff && param_2 != -0x8000000000000000) {
          local_190 = (char *)(param_2 - lVar12);
        }
      }
      FUN_005f3380(&local_80,&local_190);
      local_b8 = &local_e0;
      puStack_c8 = puStack_78;
      local_d0 = local_80;
      local_c0 = local_70;
      pppcStack_a8 = &local_d0;
      local_b0 = (char ***)0x1ec3d3;
      FUN_005f3380(&local_170,&local_a0);
      if ((long)local_160 < 0) {
        FUN_005478d8(&local_80,local_170,puStack_168);
        local_68 = &local_b0;
        if ((long)local_160 < 0) {
          operator_delete(local_170);
        }
      }
      else {
        puStack_78 = puStack_168;
        local_80 = local_170;
        local_70 = local_160;
        local_68 = &local_b0;
      }
      ppcVar10 = local_68[1][3];
      pcVar3 = ppcVar10[1];
      puVar11 = *(undefined8 **)(pcVar3 + 0x18);
      puVar17 = (undefined8 *)puVar11[1];
      puVar4 = (undefined8 *)puVar17[1];
      FUN_00623bb0("\r\n\t\n\t\n\t\n\t\n",*puVar4,*(undefined4 *)(puVar4 + 1),*puVar17,*puVar11,
                   pcVar3,*ppcVar10,local_68[1],*local_68,&local_80,", pings_since_last_response=",
                   &local_98);
      if (cStack_139 < '\0') {
        operator_delete(local_150);
      }
    }
  }
  if (*(int *)(param_1 + 0x840) == 0) {
    puVar17 = *(undefined8 **)(param_1 + 0x8e8);
    puVar2 = (uint *)(param_1 + 0x930);
    if (*(char *)(param_1 + 0x934) == '\0') {
      puVar2 = (uint *)&DAT_00258074;
    }
    uVar8 = ((long)*(undefined8 **)(param_1 + 0x8f0) - (long)puVar17 >> 3) * -0x3333333333333333;
    if (*puVar2 <= uVar8) {
      uVar13 = (ulong)(*puVar2 - 1);
      if (uVar8 < uVar13 || uVar8 - uVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      lVar12 = puVar17[uVar13 * 5 + 3];
      if ((lVar12 != 0x7fffffffffffffff) && (local_a0 != 0x7fffffffffffffff)) {
        lVar14 = -0x8000000000000000;
        if (local_a0 != -0x8000000000000000 && lVar12 != -0x8000000000000000) {
          lVar14 = lVar12 + local_a0;
        }
        if (lVar14 < param_2) {
          plVar9 = (long *)(param_1 + 0x920);
          if (*(char *)(param_1 + 0x928) == '\0') {
            plVar9 = (long *)&UNK_002580b0;
          }
          if (puVar17 != *(undefined8 **)(param_1 + 0x8f0)) {
            lVar12 = *plVar9;
            puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
            local_80 = (char **)&DAT_aaaaaaaaaaaaaaaa;
            local_68 = (char ****)&DAT_aaaaaaaaaaaaaaaa;
            local_70 = (char **)&DAT_aaaaaaaaaaaaaaaa;
            local_60 = &DAT_aaaaaaaaaaaaaaaa;
            if (*(char *)((long)puVar17 + 0x17) < '\0') {
              FUN_005478d8(&local_80,*puVar17,puVar17[1]);
            }
            else {
              local_70 = (char **)puVar17[2];
              puStack_78 = (undefined1 *)puVar17[1];
              local_80 = (char **)*puVar17;
            }
            local_68 = (char ****)puVar17[3];
            bVar1 = false;
            local_60 = (undefined1 *)CONCAT44(local_60._4_4_,*(undefined4 *)(puVar17 + 4));
            if ((local_68 != (char ****)0x7fffffffffffffff) && (lVar12 != 0x7fffffffffffffff)) {
              lVar14 = -0x8000000000000000;
              if (lVar12 != -0x8000000000000000 && local_68 != (char ****)0x8000000000000000) {
                lVar14 = (long)local_68 + lVar12;
              }
              bVar1 = lVar14 < param_2;
            }
            if (bVar1) {
              puVar2 = (uint *)(param_1 + 0x930);
              if (*(char *)(param_1 + 0x934) == '\0') {
                puVar2 = (uint *)&DAT_00258074;
              }
              uVar6 = *puVar2;
              uVar8 = FUN_00417e08();
              if ((uVar8 & 1) == 0) {
                local_138 = (char ***)0x1996ca;
                local_130 = (char ***)0x20c1;
                local_128 = (char ***)&uStack_1a1;
                FUN_00c61eb8(&local_150,param_1);
                ppppcStack_198 = &local_138;
                pppcStack_188 = &local_1a0;
                local_190 = ": Unwritable after ";
                local_178 = &local_190;
                ppppcStack_118 = &local_180;
                local_120 = (char **)0x1ddf36;
                local_1a0 = &local_150;
                local_180 = (char ***)(ulong)uVar6;
                if (*(long *)(param_1 + 0x8f0) == *(long *)(param_1 + 0x8e8)) goto LAB_00c66428;
                lVar14 = *(long *)(*(long *)(param_1 + 0x8e8) + 0x18);
                lVar12 = -0x8000000000000000;
                if (lVar14 != 0x7fffffffffffffff) {
                  lVar12 = param_2 - lVar14;
                }
                local_1b0 = 0x7fffffffffffffff;
                if (lVar14 != -0x8000000000000000 && param_2 != 0x7fffffffffffffff) {
                  local_1b0 = lVar12;
                }
                FUN_005f3380(&local_80,&local_1b0);
                local_158 = &local_120;
                puStack_168 = puStack_78;
                local_170 = local_80;
                local_160 = local_70;
                lVar14 = *(long *)(param_1 + 0x8c8);
                lVar12 = -0x8000000000000000;
                if (lVar14 != 0x7fffffffffffffff) {
                  lVar12 = param_2 - lVar14;
                }
                pppcStack_108 = &local_170;
                local_110 = " ms without a response, ms since last received ping=";
                local_1b8 = 0x7fffffffffffffff;
                if (lVar14 != -0x8000000000000000 && param_2 != 0x7fffffffffffffff) {
                  local_1b8 = lVar12;
                }
                FUN_005f3380(&local_80,&local_1b8);
                local_e8 = &local_110;
                puStack_f8 = puStack_78;
                local_100 = local_80;
                local_f0 = local_70;
                lVar14 = *(long *)(param_1 + 0x8d0);
                lVar12 = -0x8000000000000000;
                if (lVar14 != 0x7fffffffffffffff) {
                  lVar12 = param_2 - lVar14;
                }
                pppcStack_d8 = &local_100;
                local_e0 = " ms since last received data=";
                local_1c0 = 0x7fffffffffffffff;
                if (lVar14 != -0x8000000000000000 && param_2 != 0x7fffffffffffffff) {
                  local_1c0 = lVar12;
                }
                FUN_005f3380(&local_80,&local_1c0);
                local_b8 = &local_e0;
                puStack_c8 = puStack_78;
                local_d0 = local_80;
                local_c0 = local_70;
                pppcStack_a8 = &local_d0;
                local_b0 = (char ***)0x1a27d4;
                FUN_005f3380(&local_98,&local_a0);
                local_68 = &local_b0;
                puStack_78 = puStack_90;
                local_80 = local_98;
                local_70 = local_88;
                pcVar3 = pppcStack_a8[3][1];
                puVar11 = *(undefined8 **)(pcVar3 + 0x18);
                lVar12 = puVar11[1];
                puVar15 = *(undefined8 **)(lVar12 + 0x18);
                puVar5 = (undefined4 *)puVar15[1];
                puVar16 = *(undefined8 **)(puVar5 + 2);
                puVar17 = (undefined8 *)puVar16[1];
                puVar4 = (undefined8 *)puVar17[1];
                FUN_00623bb0(&DAT_0025995a,*puVar4,*(undefined4 *)(puVar4 + 1),*puVar17,*puVar16,
                             *puVar5,*puVar15,lVar12,*puVar11,pcVar3,*pppcStack_a8[3],pppcStack_a8,
                             local_b0,&local_80);
                if ((long)local_160 < 0) {
                  operator_delete(local_170);
                }
                if (cStack_139 < '\0') {
                  operator_delete(local_150);
                }
              }
              FUN_00c628c0(param_1,1);
            }
          }
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x840) - 1U < 2) {
    puVar17 = *(undefined8 **)(param_1 + 0x8e8);
    plVar9 = (long *)(param_1 + 0x938);
    if (*(char *)(param_1 + 0x940) == '\0') {
      plVar9 = (long *)&UNK_002580b8;
    }
    if (puVar17 != *(undefined8 **)(param_1 + 0x8f0)) {
      lVar12 = *plVar9;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = (char **)&DAT_aaaaaaaaaaaaaaaa;
      local_68 = (char ****)&DAT_aaaaaaaaaaaaaaaa;
      local_70 = (char **)&DAT_aaaaaaaaaaaaaaaa;
      local_60 = &DAT_aaaaaaaaaaaaaaaa;
      if (*(char *)((long)puVar17 + 0x17) < '\0') {
        FUN_005478d8(&local_80,*puVar17,puVar17[1]);
      }
      else {
        local_70 = (char **)puVar17[2];
        puStack_78 = (undefined1 *)puVar17[1];
        local_80 = (char **)*puVar17;
      }
      local_68 = (char ****)puVar17[3];
      bVar1 = false;
      local_60 = (undefined1 *)CONCAT44(local_60._4_4_,*(undefined4 *)(puVar17 + 4));
      if ((local_68 != (char ****)0x7fffffffffffffff) && (lVar12 != 0x7fffffffffffffff)) {
        lVar14 = -0x8000000000000000;
        if (lVar12 != -0x8000000000000000 && local_68 != (char ****)0x8000000000000000) {
          lVar14 = (long)local_68 + lVar12;
        }
        bVar1 = lVar14 < param_2;
      }
      if (bVar1) {
        uVar8 = FUN_00417e08();
        if ((uVar8 & 1) == 0) {
          local_170 = (char **)0x1996ca;
          puStack_168 = (undefined1 *)0x2131;
          local_160 = &local_110;
          FUN_00c61eb8(&local_98,param_1);
          pppcStack_a8 = &local_170;
          ppppcStack_148 = &local_b0;
          local_150 = ": Timed out after ";
          local_b0 = &local_98;
          if (*(long *)(param_1 + 0x8f0) == *(long *)(param_1 + 0x8e8)) {
LAB_00c66428:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                      );
          }
          local_e0 = (char *)0x7fffffffffffffff;
          if ((param_2 != 0x7fffffffffffffff) &&
             (lVar12 = *(long *)(*(long *)(param_1 + 0x8e8) + 0x18), lVar12 != -0x8000000000000000))
          {
            local_e0 = (char *)0x8000000000000000;
            if (lVar12 != 0x7fffffffffffffff && param_2 != -0x8000000000000000) {
              local_e0 = (char *)(param_2 - lVar12);
            }
          }
          FUN_005f3380(&local_80,&local_e0);
          local_b8 = &local_150;
          puStack_c8 = puStack_78;
          local_d0 = local_80;
          local_c0 = local_70;
          local_130 = &local_d0;
          local_138 = (char ***)0x1cfb4d;
          FUN_005f3380(&local_100,&local_a0);
          local_68 = &local_138;
          puStack_78 = puStack_f8;
          local_80 = local_100;
          local_70 = local_f0;
          pcVar3 = local_130[3][1];
          puVar17 = *(undefined8 **)(pcVar3 + 8);
          FUN_00623bb0("\r\n\t\n\t\n",*puVar17,*(undefined4 *)(puVar17 + 1),*(undefined8 *)pcVar3,
                       *local_130[3],local_130,local_138,&local_80);
        }
        FUN_00c628c0(param_1,3);
      }
    }
  }
  FUN_00c62988(param_1,param_2);
  lVar12 = *(long *)(param_1 + 0x8d0);
  if (*(long *)(param_1 + 0x8d0) <= *(long *)(param_1 + 0x8c8)) {
    lVar12 = *(long *)(param_1 + 0x8c8);
  }
  if (lVar12 <= *(long *)(param_1 + 0x8d8)) {
    lVar12 = *(long *)(param_1 + 0x8d8);
  }
  if (lVar12 < 1) {
    if (*(int *)(param_1 + 0x840) != 3) {
      return;
    }
    lVar14 = *(long *)(param_1 + 0x960);
    lVar12 = lVar14;
    if (lVar14 != -0x8000000000000000) {
      lVar12 = lVar14 + 10000000;
    }
  }
  else {
    if (lVar12 == 0x7fffffffffffffff) {
      return;
    }
    if (param_2 <= lVar12 + 30000000) {
      return;
    }
    if (*(long *)(param_1 + 0x8e8) == *(long *)(param_1 + 0x8f0)) {
      lVar12 = lVar12 + (long)*(int *)(*(long *)(param_1 + 0x9b0) + 0x28) * 1000;
      goto joined_r0x00c65f70;
    }
    lVar14 = *(long *)(*(long *)(param_1 + 0x8e8) + 0x18);
    lVar12 = lVar14;
    if (lVar14 != -0x8000000000000000) {
      lVar12 = lVar14 + 30000000;
    }
  }
  if (lVar14 == 0x7fffffffffffffff) {
    return;
  }
joined_r0x00c65f70:
  if (lVar12 < param_2) {
    uVar8 = FUN_009881a4(param_1 + 0x40);
    if ((uVar8 & 1) == 0) {
      plVar9 = (long *)0x0;
    }
    else {
      plVar9 = *(long **)(param_1 + 0x48);
    }
    (**(code **)(*plVar9 + 0x128))(plVar9,param_1);
  }
  return;
}


// ===== 00c6643c  FUN_00c6643c =====

void FUN_00c6643c(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  *(undefined4 *)(param_1 + 0x68) = param_2;
  FUN_00b008fc(param_1 + 0xf0,param_3,param_4);
  FUN_00b008fc(param_1 + 0x108,param_5,param_6);
  return;
}


// ===== 00c66490  FUN_00c66490 =====

long * FUN_00c66490(long param_1,long param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 ****ppppuVar3;
  short sVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  void *pvVar9;
  undefined8 uVar10;
  size_t __n;
  long lVar11;
  undefined4 uVar12;
  uint uVar13;
  long lVar14;
  undefined8 *__s1;
  undefined8 ***local_58;
  ulong uStack_50;
  byte bStack_41;
  
  plVar6 = (long *)operator_new(0x80);
  FUN_00c69ccc(plVar6,1);
  *plVar6 = (long)(PTR_DAT_00d52cc0 + 0x10);
  uVar7 = FUN_009881a4(param_1 + 0x40);
  if ((uVar7 & 1) == 0) {
    plVar8 = (long *)0x0;
    lVar11 = (long)*(char *)(param_1 + 0x29f);
    if (lVar11 < 0) goto LAB_00c66504;
LAB_00c664f0:
    lVar14 = param_1 + 0x288;
  }
  else {
    plVar8 = *(long **)(param_1 + 0x48);
    lVar11 = (long)*(char *)(param_1 + 0x29f);
    if (-1 < lVar11) goto LAB_00c664f0;
LAB_00c66504:
    lVar14 = *(long *)(param_1 + 0x288);
    lVar11 = *(long *)(param_1 + 0x290);
  }
  (**(code **)(*plVar8 + 0x188))(&local_58,plVar8,lVar14,lVar11);
  pvVar9 = operator_new(0x18);
  ppppuVar3 = (undefined8 ****)local_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    ppppuVar3 = &local_58;
  }
  FUN_00c6c8e0(pvVar9,6,ppppuVar3,uStack_50);
  FUN_00c69d80(plVar6,pvVar9);
  if ((char)bStack_41 < '\0') {
    operator_delete(local_58);
  }
  uVar7 = FUN_009881a4(param_1 + 0x40);
  if ((uVar7 & 1) == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = *(long **)(param_1 + 0x48);
  }
  lVar11 = (**(code **)(*plVar8 + 0x18))();
  uVar2 = *(ushort *)(lVar11 + 0xae);
  uVar7 = FUN_009881a4(param_1 + 0x40);
  if ((uVar7 & 1) == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = *(long **)(param_1 + 0x48);
  }
  sVar4 = (**(code **)(*plVar8 + 0x198))();
  pvVar9 = operator_new(0x10);
  FUN_00c6c6b0(pvVar9,0xc057,(uint)uVar2 << 0x10 | (int)sVar4);
  FUN_00c69d80(plVar6,pvVar9);
  if ((*(char *)(*(long *)(param_1 + 0x9b0) + 0x38) == '\x01') &&
     (*(char *)(param_1 + 0x918) == '\x01')) {
    pvVar9 = operator_new(0x18);
    uVar7 = *(ulong *)(param_1 + 0x908);
    lVar11 = *(long *)(param_1 + 0x900);
    if (-1 < (char)*(byte *)(param_1 + 0x917)) {
      uVar7 = (ulong)*(byte *)(param_1 + 0x917);
      lVar11 = param_1 + 0x900;
    }
    FUN_00c6c8e0(pvVar9,0xc058,lVar11,uVar7);
    FUN_00c69d80(plVar6,pvVar9);
  }
  uVar7 = FUN_009881a4(param_1 + 0x40);
  if ((uVar7 & 1) == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = *(long **)(param_1 + 0x48);
  }
  iVar5 = (**(code **)(*plVar8 + 0x28))();
  uVar7 = FUN_009881a4(param_1 + 0x40);
  if ((uVar7 & 1) == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = *(long **)(param_1 + 0x48);
  }
  uVar10 = (**(code **)(*plVar8 + 0x38))();
  pvVar9 = operator_new(0x18);
  uVar12 = 0xffff8029;
  if (iVar5 == 0) {
    uVar12 = 0xffff802a;
  }
  FUN_00c6c7b8(pvVar9,uVar12,uVar10);
  FUN_00c69d80(plVar6,pvVar9);
  if (iVar5 == 0) {
    if (*(char *)(param_1 + 0x848) == '\x01') {
      pvVar9 = operator_new(0x18);
      FUN_00c6c8c0(pvVar9,0x25);
      FUN_00c69d80(plVar6,pvVar9);
    }
    iVar5 = *(int *)(param_1 + 0x84c);
    if ((iVar5 != 0) && (iVar5 != *(int *)(param_1 + 0x850))) {
      pvVar9 = operator_new(0x10);
      FUN_00c6c6b0(pvVar9,0xc001,iVar5);
      FUN_00c69d80(plVar6,pvVar9);
    }
  }
  __s1 = (undefined8 *)(param_1 + 0x70);
  __n = strlen(PTR_DAT_00d528f0);
  if ((long)*(char *)(param_1 + 0x87) < 0) {
    if (__n == *(size_t *)(param_1 + 0x78)) {
      if (__n == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_005f5590();
      }
      __s1 = (undefined8 *)*__s1;
      goto LAB_00c6676c;
    }
  }
  else if (__n == (long)*(char *)(param_1 + 0x87)) {
LAB_00c6676c:
    iVar5 = memcmp(__s1,PTR_DAT_00d528f0,__n);
    uVar13 = 0x50000000;
    if (iVar5 != 0) {
      uVar13 = 0x6e000000;
    }
    goto LAB_00c66794;
  }
  uVar13 = 0x6e000000;
LAB_00c66794:
  uVar1 = *(uint *)(param_1 + 0xe8);
  pvVar9 = operator_new(0x10);
  FUN_00c6c6b0(pvVar9,0x24,uVar1 & 0xffffff | uVar13);
  FUN_00c69d80(plVar6,pvVar9);
  uVar7 = FUN_009881a4(param_1 + 0x40);
  if ((uVar7 & 1) == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = *(long **)(param_1 + 0x48);
  }
  uVar7 = (**(code **)(*plVar8 + 0x150))();
  if ((uVar7 & 1) != 0) {
    lVar11 = *(long *)(param_1 + 0x8f0);
    lVar14 = *(long *)(param_1 + 0x8e8);
    pvVar9 = operator_new(0x10);
    FUN_00c6c6b0(pvVar9,0xff00,(int)((ulong)(lVar11 - lVar14) >> 3) * -0x33333333);
    FUN_00c69d80(plVar6,pvVar9);
  }
  if ((*(char *)(*(long *)(param_1 + 0x9b0) + 0x1d) == '\x01') &&
     ((*(byte *)(param_1 + 0x9a1) & 1) == 0)) {
    uVar10 = FUN_00c6bb40(0xc059);
    FUN_00c6d534(uVar10,0,1);
    FUN_00c69d80(plVar6,uVar10);
  }
  if (param_2 != 0) {
    uVar7 = FUN_00417e08();
    if ((uVar7 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6643,"../../p2p/base/connection.cc",0x2531,"Sending GOOG_DELTA: len: ",
                   *(undefined2 *)(param_2 + 10));
    }
    FUN_00c69d80(plVar6,param_2);
  }
  FUN_00c63e34(param_1,plVar6);
  lVar11 = (long)*(char *)(param_1 + 0x2b7);
  if (lVar11 < 0) {
    lVar14 = *(long *)(param_1 + 0x2a0);
    lVar11 = *(long *)(param_1 + 0x2a8);
  }
  else {
    lVar14 = param_1 + 0x2a0;
  }
  FUN_00c6a5dc(plVar6,lVar14,lVar11);
  FUN_00c6ae6c(plVar6);
  return plVar6;
}


// ===== 00c668f8  FUN_00c668f8 =====

undefined4 FUN_00c668f8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x8a0);
}


// ===== 00c66904  FUN_00c66904 =====

undefined8 FUN_00c66904(long param_1)

{
  return *(undefined8 *)(param_1 + 0x8c8);
}


// ===== 00c66910  FUN_00c66910 =====

void FUN_00c66910(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,uint *param_5)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  void *local_58 [2];
  char cStack_41;
  
  if (((char)param_5[1] == '\x01') && (*(uint *)(param_1 + 0x850) < *param_5)) {
    *(uint *)(param_1 + 0x850) = *param_5;
  }
  uVar5 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  lVar8 = *(long *)(param_1 + 0x8a8);
  lVar6 = 0x7fffffffffffffff;
  if ((lVar8 != 0x7fffffffffffffff) && (param_2 != 0x7fffffffffffffff)) {
    lVar6 = -0x8000000000000000;
    if (param_2 != 0x8000000000000000 && lVar8 != -0x8000000000000000) {
      lVar6 = lVar8 + param_2;
    }
  }
  *(long *)(param_1 + 0x8a8) = lVar6;
  if (*(char *)(param_1 + 0x8b8) == '\x01') {
    *(ulong *)(param_1 + 0x8b0) = param_2;
  }
  else {
    if ((ulong *)(param_1 + 0x8b0) == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(ulong *)(param_1 + 0x8b0) = param_2;
    *(undefined1 *)(param_1 + 0x8b8) = 1;
  }
  uVar7 = uVar5 / 1000;
  uVar9 = param_2 / 1000;
  if (499 < uVar5 % 1000) {
    uVar7 = uVar7 + 1;
  }
  if ((uVar5 & 0x8000000000000000) != 0) {
    uVar7 = -(-uVar5 / 1000) - (ulong)(500 < -uVar5 % 1000);
  }
  if (499 < param_2 % 1000) {
    uVar9 = uVar9 + 1;
  }
  if ((param_2 & 0x8000000000000000) != 0) {
    uVar9 = -(-param_2 / 1000) - (ulong)(500 < -param_2 % 1000);
  }
  FUN_00c6eaac(param_1 + 0x9b8,uVar7,uVar9);
  puVar10 = *(undefined8 **)(param_1 + 0x8e8);
  puVar4 = *(undefined8 **)(param_1 + 0x8f0);
  while( true ) {
    if (puVar10 == puVar4) {
      *(undefined8 **)(param_1 + 0x8f0) = puVar10;
      *(ulong *)(param_1 + 0x8d8) = uVar5;
      FUN_00c62988(param_1,uVar5);
      FUN_00c628c0(param_1,0);
      iVar3 = *(int *)(param_1 + 0x948);
      *(undefined4 *)(param_1 + 0x948) = 2;
      if ((iVar3 != 2) && (uVar5 = FUN_0044075c(), (uVar5 & 1) == 0)) {
        FUN_00c61eb8(local_58,param_1);
        FUN_00623bb0(&DAT_00223e94,"../../p2p/base/connection.cc",0xbb0,local_58,": set_state");
        if (cStack_41 < '\0') {
          operator_delete(local_58[0]);
        }
      }
      uVar5 = param_2;
      if (0 < *(int *)(param_1 + 0x8a0)) {
        lVar6 = *(long *)(param_1 + 0x898) * 3;
        uVar5 = 0x1fffffffffffffff;
        if ((lVar6 != 0x7fffffffffffffff) && (param_2 != 0x7fffffffffffffff)) {
          lVar8 = lVar6 + param_2;
          lVar2 = lVar8 + 3;
          if (-1 < lVar8) {
            lVar2 = lVar8;
          }
          uVar5 = 0xe000000000000000;
          if (param_2 != 0x8000000000000000 && lVar6 != -0x8000000000000000) {
            uVar5 = lVar2 >> 2;
          }
        }
      }
      *(ulong *)(param_1 + 0x898) = uVar5;
      *(int *)(param_1 + 0x8a0) = *(int *)(param_1 + 0x8a0) + 1;
      return;
    }
    puVar11 = puVar4 + -5;
    if (puVar11 == (undefined8 *)0x0) break;
    pcVar1 = (char *)((long)puVar4 + -0x11);
    puVar4 = puVar11;
    if (*pcVar1 < '\0') {
      operator_delete((void *)*puVar11);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c66bd8  FUN_00c66bd8 =====

undefined8 FUN_00c66bd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x8d0);
}


// ===== 00c66be4  FUN_00c66be4 =====

undefined4 FUN_00c66be4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x840);
}


// ===== 00c66bf0  FUN_00c66bf0 =====

undefined1 FUN_00c66bf0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x844);
}


// ===== 00c66bfc  FUN_00c66bfc =====

undefined1 FUN_00c66bfc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x845);
}


// ===== 00c66c08  FUN_00c66c08 =====

byte FUN_00c66c08(long param_1)

{
  if ((*(int *)(param_1 + 0x840) == 0) && (*(char *)(param_1 + 0x844) == '\x01')) {
    return (*(byte *)(param_1 + 0x845) ^ 1) & 1;
  }
  return 1;
}


// ===== 00c66c3c  FUN_00c66c3c =====

undefined8 FUN_00c66c3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x898);
}


// ===== 00c66c48  FUN_00c66c48 =====

bool FUN_00c66c48(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x8a0) < 5) {
    return false;
  }
  if (*(long *)(param_1 + 0x8e8) != *(long *)(param_1 + 0x8f0)) {
    lVar1 = 0x7fffffffffffffff;
    if ((param_2 != 0x7fffffffffffffff) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 0x8e8) + 0x18), lVar2 != -0x8000000000000000)) {
      lVar1 = -0x8000000000000000;
      if (lVar2 != 0x7fffffffffffffff && param_2 != -0x8000000000000000) {
        lVar1 = param_2 - lVar2;
      }
    }
    lVar2 = *(long *)(param_1 + 0x898) * 2;
    return lVar1 == lVar2 || lVar1 + *(long *)(param_1 + 0x898) * -2 < 0 != SBORROW8(lVar1,lVar2);
  }
  return true;
}


// ===== 00c66cb4  FUN_00c66cb4 =====

int FUN_00c66cb4(long param_1)

{
  short sVar1;
  ulong uVar2;
  long *plVar3;
  
  uVar2 = FUN_009881a4(param_1 + 0x40);
  if ((uVar2 & 1) == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = *(long **)(param_1 + 0x48);
  }
  sVar1 = (**(code **)(*plVar3 + 0x198))();
  return (uint)*(ushort *)(param_1 + 0x362) + (int)sVar1;
}


// ===== 00c66d04  FUN_00c66d04 =====

undefined8 * FUN_00c66d04(long *param_1)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  undefined8 local_5c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long lStack_48;
  
  if ((*(byte *)(param_1 + 0x132) & 1) == 0) {
    lVar5 = (**(code **)(*param_1 + 0x10))();
    lVar6 = (**(code **)(*param_1 + 0x18))(param_1);
    uVar7 = FUN_009881a4(param_1 + 8);
    if ((uVar7 & 1) == 0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)param_1[9];
    }
    lVar9 = (**(code **)(*plVar8 + 0x18))();
    uVar7 = FUN_00aff2e0(lVar5);
    if ((uVar7 & 1) == 0) {
      uVar7 = FUN_00aff2f4(lVar5);
      if ((uVar7 & 1) == 0) {
        uVar7 = FUN_00aff308(lVar5);
        uVar4 = 2;
        if ((uVar7 & 1) == 0) {
          uVar4 = 3;
        }
      }
      else {
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 0;
    }
    uVar7 = FUN_00aff2e0(lVar6);
    if ((uVar7 & 1) == 0) {
      uVar7 = FUN_00aff2f4(lVar6);
      if ((uVar7 & 1) == 0) {
        uVar7 = FUN_00aff308(lVar6);
        uVar11 = 2;
        if ((uVar7 & 1) == 0) {
          uVar11 = 3;
        }
      }
      else {
        uVar11 = 1;
      }
    }
    else {
      uVar11 = 0;
    }
    FUN_00c5bf54(&local_5c,uVar4,uVar11);
    if ((char)param_1[0x132] == '\x01') {
      *(ulong *)((long)param_1 + 0x97c) = CONCAT44(uStack_50,uStack_54);
      *(undefined8 *)((long)param_1 + 0x974) = local_5c;
      param_1[0x131] = lStack_48;
      param_1[0x130] = CONCAT44(uStack_4c,uStack_50);
    }
    else {
      FUN_00c5bf70((long)param_1 + 0x974,&local_5c);
      *(undefined1 *)(param_1 + 0x132) = 1;
    }
    FUN_00c5bfb0(&local_5c);
    lVar10 = (long)*(char *)(lVar5 + 0x4f);
    if (lVar10 < 0) {
      lVar1 = *(long *)(lVar5 + 0x38);
      lVar10 = *(long *)(lVar5 + 0x40);
      bVar3 = *(byte *)(param_1 + 0x132);
    }
    else {
      lVar1 = lVar5 + 0x38;
      bVar3 = *(byte *)(param_1 + 0x132);
    }
    if ((bVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    uVar4 = FUN_00c66f28(lVar1,lVar10);
    *(undefined4 *)(param_1 + 0x12f) = uVar4;
    uVar2 = *(uint *)(lVar9 + 0xa0);
    if ((uVar2 - 1 < (uVar2 ^ uVar2 - 1)) &&
       (uVar2 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1,
       uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2,
       uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4,
       uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8,
       lVar9 = LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10), (uint)lVar9 < 10)) {
      uVar4 = *(undefined4 *)(&DAT_002599c0 + lVar9 * 4);
    }
    else {
      uVar4 = 0;
    }
    *(undefined4 *)((long)param_1 + 0x97c) = uVar4;
    uVar11 = 2;
    uVar4 = uVar11;
    if (*(int *)(lVar5 + 0x70) != 10) {
      uVar4 = 0;
    }
    if (*(int *)(lVar5 + 0x70) == 2) {
      uVar4 = 1;
    }
    *(undefined4 *)(param_1 + 0x130) = uVar4;
    if (*(int *)(lVar6 + 0x70) != 10) {
      uVar11 = 0;
    }
    if (*(int *)(lVar6 + 0x70) == 2) {
      uVar11 = 1;
    }
    *(undefined4 *)(param_1 + 0x131) = uVar11;
    lVar6 = (long)*(char *)(lVar5 + 0x37);
    if (lVar6 < 0) {
      lVar9 = *(long *)(lVar5 + 0x20);
      lVar6 = *(long *)(lVar5 + 0x28);
    }
    else {
      lVar9 = lVar5 + 0x20;
    }
    uVar4 = FUN_00c66f28(lVar9,lVar6);
    *(undefined4 *)((long)param_1 + 0x98c) = uVar4;
  }
  return (undefined8 *)((long)param_1 + 0x974);
}


// ===== 00c66f28  FUN_00c66f28 =====

undefined4 FUN_00c66f28(void *param_1,size_t param_2)

{
  int iVar1;
  size_t sVar2;
  undefined4 uVar3;
  
  sVar2 = strlen(PTR_DAT_00d528e8);
  if ((param_2 == sVar2) && (iVar1 = memcmp(param_1,PTR_DAT_00d528e8,sVar2), iVar1 == 0)) {
    uVar3 = 1;
  }
  else {
    sVar2 = strlen("tcp");
    if ((param_2 == sVar2) && (iVar1 = memcmp(param_1,PTR_DAT_00d528f0,param_2), iVar1 == 0)) {
      uVar3 = 2;
    }
    else {
      sVar2 = strlen("ssltcp");
      if ((param_2 == sVar2) && (iVar1 = memcmp(param_1,PTR_s_ssltcp_00d528f8,param_2), iVar1 == 0))
      {
        uVar3 = 3;
      }
      else {
        sVar2 = strlen("tls");
        if (param_2 == sVar2) {
          iVar1 = memcmp(param_1,PTR_DAT_00d52900,param_2);
          uVar3 = 4;
          if (iVar1 != 0) {
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0;
        }
      }
    }
  }
  return uVar3;
}


// ===== 00c67028  FUN_00c67028 =====

void FUN_00c67028(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x998) = param_2;
  return;
}


// ===== 00c67034  FUN_00c67034 =====

/* WARNING: Removing unreachable block (ram,0x00c67684) */
/* WARNING: Removing unreachable block (ram,0x00c67218) */
/* WARNING: Removing unreachable block (ram,0x00c6717c) */
/* WARNING: Removing unreachable block (ram,0x00c67198) */
/* WARNING: Removing unreachable block (ram,0x00c67624) */
/* WARNING: Removing unreachable block (ram,0x00c675f4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c67034(long param_1,long param_2,long param_3)

{
  undefined8 *******__s2;
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined1 *__n;
  bool bVar5;
  short sVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  void *pvVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined2 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined4 local_220 [2];
  void *local_218;
  undefined8 local_210;
  long local_208;
  undefined4 local_200;
  undefined1 local_1fc;
  undefined1 local_1fa;
  undefined1 local_1f8;
  undefined1 local_1f0;
  undefined4 local_1e8 [2];
  void *local_1e0;
  undefined8 local_1d8;
  long local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c4;
  undefined1 local_1c2;
  undefined1 local_1c0;
  undefined1 local_1b8;
  undefined4 local_1b0 [2];
  void *local_1a8;
  undefined8 local_1a0;
  undefined5 uStack_198;
  undefined2 local_193;
  char cStack_191;
  undefined5 uStack_190;
  undefined1 local_18a;
  long local_188;
  undefined1 local_180;
  void *local_178 [2];
  char cStack_161;
  void *local_160 [2];
  char cStack_149;
  void *local_148 [2];
  char cStack_131;
  undefined1 uStack_129;
  char *local_128;
  ulong local_120;
  undefined1 *local_118;
  void **local_110;
  char **ppcStack_108;
  char *local_100;
  void ***pppvStack_f8;
  void **local_f0;
  char **ppcStack_e8;
  char *local_e0;
  void ***pppvStack_d8;
  void **local_d0;
  char **ppcStack_c8;
  char *local_c0;
  void ***pppvStack_b8;
  undefined8 *******local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  char **local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 ******local_68;
  undefined8 uStack_60;
  
  bVar5 = *(int *)(param_1 + 0x840) != 0;
  local_70 = FUN_00c6951c(param_2);
  iVar7 = FUN_00623870();
  if (iVar7 <= (int)(uint)bVar5) {
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    FUN_00c6555c(param_1,&local_88,5);
    uVar8 = FUN_00623b7c(bVar5);
    if ((uVar8 & 1) == 0) {
      local_120 = (ulong)(bVar5 | 0x2fb8);
      local_128 = "../../p2p/base/connection.cc";
      local_118 = &uStack_129;
      FUN_00c61eb8(local_148,param_1);
      ppcStack_108 = &local_128;
      pppvStack_f8 = &local_110;
      local_100 = ": Received ";
      local_110 = local_148;
      FUN_00c6dac8(local_160,*(undefined2 *)(param_3 + 0x20));
      ppcStack_e8 = &local_100;
      pppvStack_d8 = &local_f0;
      lVar13 = *(long *)(param_2 + 0x38);
      local_e0 = ", id=";
      lVar12 = (long)*(char *)(lVar13 + 0x3f);
      if (lVar12 < 0) {
        lVar9 = *(long *)(lVar13 + 0x28);
        lVar12 = *(long *)(lVar13 + 0x30);
      }
      else {
        lVar9 = lVar13 + 0x28;
      }
      local_f0 = local_160;
      FUN_00624c34(local_178,lVar9,lVar12);
      ppcStack_c8 = &local_e0;
      pppvStack_b8 = &local_d0;
      local_c0 = ", code=0, rtt=";
      local_d0 = local_178;
      FUN_005f3380(&local_68,&local_70);
      local_98 = &local_c0;
      puStack_a8 = (undefined1 *)uStack_60;
      local_b0 = (undefined8 *******)local_68;
      puVar16 = (undefined8 *)pppvStack_b8[1][1];
      puVar17 = (undefined8 *)puVar16[1];
      puVar2 = (undefined8 *)puVar17[1];
      puVar3 = (undefined8 *)puVar2[1];
      FUN_00623bb0("\r\n\t\n\t\n\t\n\t\n",*puVar3,*(undefined4 *)(puVar3 + 1),*puVar2,*puVar17,
                   *puVar16,*pppvStack_b8[1],*pppvStack_b8,local_c0,&local_b0,
                   ", pings_since_last_response=",&local_88);
      if (cStack_161 < '\0') {
        operator_delete(local_178[0]);
      }
      if (cStack_149 < '\0') {
        operator_delete(local_160[0]);
      }
      if (cStack_131 < '\0') {
        operator_delete(local_148[0]);
      }
    }
  }
  lVar12 = *(long *)(param_2 + 0x38);
  local_68 = (undefined8 ******)0xaaaaaa00aaaaaa00;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
  if (*(char *)(lVar12 + 0x3f) < '\0') {
    FUN_005478d8(&local_b0,*(undefined8 *)(lVar12 + 0x28),*(undefined8 *)(lVar12 + 0x30));
  }
  else {
    local_a0 = *(undefined1 **)(lVar12 + 0x38);
    puStack_a8 = *(undefined1 **)(lVar12 + 0x30);
    local_b0 = *(undefined8 ********)(lVar12 + 0x28);
  }
  puVar16 = *(undefined8 **)(param_1 + 0x8e8);
  puVar17 = *(undefined8 **)(param_1 + 0x8f0);
  if (puVar16 == puVar17) {
LAB_00c672e4:
    if (puVar16 != puVar17) {
      local_68 = (undefined8 ******)CONCAT35(local_68._5_3_,0x100000000);
      local_68 = (undefined8 ******)CONCAT44(local_68._4_4_,*(undefined4 *)(puVar16 + 4));
    }
  }
  else {
    __n = puStack_a8;
    __s2 = local_b0;
    if (-1 < (long)local_a0) {
      __n = (undefined1 *)((ulong)local_a0 >> 0x38);
      __s2 = &local_b0;
    }
    do {
      bVar4 = *(byte *)((long)puVar16 + 0x17);
      puVar1 = (undefined1 *)puVar16[1];
      if (-1 < (char)bVar4) {
        puVar1 = (undefined1 *)(ulong)bVar4;
      }
      if (puVar1 == __n) {
        puVar2 = (undefined8 *)*puVar16;
        if (-1 < (char)bVar4) {
          puVar2 = puVar16;
        }
        iVar7 = memcmp(puVar2,__s2,(size_t)__n);
        if (iVar7 == 0) goto LAB_00c672e4;
      }
      puVar16 = puVar16 + 5;
    } while (puVar16 != puVar17);
  }
  FUN_00c66910(param_1,local_70);
  *(long *)(param_1 + 0x3f0) = *(long *)(param_1 + 0x3f0) + 1;
  if (*(long *)(param_1 + 0x998) != 0) {
    FUN_00c5ba2c(*(long *)(param_1 + 0x998),3,*(undefined4 *)(param_1 + 0x38),
                 *(undefined4 *)(param_3 + 0x40));
  }
  lVar12 = FUN_00c6916c(param_2);
  if (*(short *)(lVar12 + 0x20) == 1) {
    if ((*(byte *)(param_1 + 0x9a1) & 1) == 0) {
      lVar12 = FUN_00c6a018(param_3,0xc059);
      uVar15 = 0x100;
      if (lVar12 != 0) {
        FUN_00c6d450();
        sVar6 = FUN_00c6d468(lVar12,0);
        uVar15 = 0x100;
        if (sVar6 != 0) {
          uVar15 = 0x101;
        }
      }
      *(undefined2 *)(param_1 + 0x9a0) = uVar15;
    }
    FUN_00c6769c(param_1,param_2,param_3);
    if ((*(char *)(*(long *)(param_1 + 0x9b0) + 0x1d) == '\x01') &&
       (*(char *)(param_1 + 0x9a1) == '\x01')) {
      FUN_00c6916c(param_2);
      uVar10 = FUN_00c6e414();
      plVar14 = *(long **)(param_1 + 0x9a8);
      *(undefined8 *)(param_1 + 0x9a8) = uVar10;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 8))(plVar14);
      }
    }
  }
  uVar10 = FUN_00c6916c(param_2);
  lVar12 = FUN_00c69fe8(uVar10,0xc05c);
  lVar13 = FUN_00c69fb8(param_3,0xc05d);
  if (*(char *)(param_1 + 0xa30) == '\x01') {
    if ((lVar12 == 0) || (lVar13 == 0)) {
      if (lVar12 == 0) {
        if (lVar13 == 0) goto LAB_00c675b0;
        uVar8 = FUN_004249b0();
        if ((uVar8 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../p2p/base/connection.cc",0x31b3,
                       "DELTA ACK w/o DELTA => disable GOOG_DELTA");
        }
        if ((*(byte *)(param_1 + 0xa30) & 1) == 0) goto LAB_00c67688;
        local_220[0] = 10;
        local_1fc = 0;
        local_200 = 0;
        local_210 = 0;
        local_208 = 0;
        local_218 = (void *)0x0;
        local_1fa = 0;
        local_1f8 = 0;
        local_1f0 = 0;
        (**(code **)(param_1 + 0xa20))(param_1 + 0xa10,local_220);
        pvVar11 = local_218;
        lVar12 = local_208;
      }
      else {
        uVar8 = FUN_00417e08();
        if ((uVar8 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../p2p/base/connection.cc",0x3181,
                       "NO DELTA ACK => disable GOOG_DELTA");
        }
        if ((*(byte *)(param_1 + 0xa30) & 1) == 0) goto LAB_00c67688;
        local_1e8[0] = 1;
        local_1c4 = 0;
        local_1c8 = 0;
        local_1d8 = 0;
        local_1d0 = 0;
        local_1e0 = (void *)0x0;
        local_1c2 = 0;
        local_1c0 = 0;
        local_1b8 = 0;
        (**(code **)(param_1 + 0xa20))(param_1 + 0xa10,local_1e8);
        pvVar11 = local_1e0;
        lVar12 = local_1d0;
      }
      if (-1 < lVar12) goto LAB_00c675b0;
    }
    else {
      uVar8 = FUN_0044075c();
      if ((uVar8 & 1) == 0) {
        FUN_00623bb0(&DAT_001f6643,"../../p2p/base/connection.cc",0x3158,"Got GOOG_DELTA_ACK len: ",
                     *(undefined2 *)(lVar13 + 10));
      }
      if ((*(byte *)(param_1 + 0xa30) & 1) == 0) {
LAB_00c67688:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      local_1b0[0] = 0;
      local_18a = 0;
      local_1a0 = 0;
      uStack_198 = 0;
      local_1a8 = (void *)0x0;
      local_193 = 0;
      cStack_191 = '\0';
      uStack_190 = 0;
      local_180 = 1;
      local_188 = lVar13;
      (**(code **)(param_1 + 0xa20))(param_1 + 0xa10,local_1b0);
      pvVar11 = local_1a8;
      if (-1 < cStack_191) goto LAB_00c675b0;
    }
    operator_delete(pvVar11);
  }
  else if ((lVar13 != 0) && (uVar8 = FUN_004249b0(), (uVar8 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f4e98,"../../p2p/base/connection.cc",0x31d3,
                 "Discard GOOG_DELTA_ACK, no consumer");
  }
LAB_00c675b0:
  uVar10 = FUN_00c6916c(param_2);
  lVar12 = FUN_00c69fe8(uVar10,0xc070);
  uVar10 = FUN_00c6916c(param_2);
  lVar13 = FUN_00c69fe8(uVar10,0xc071);
  if (lVar12 != 0 || lVar13 != 0) {
    FUN_00c6400c(param_1,param_3,param_2);
  }
  return;
}


// ===== 00c6769c  FUN_00c6769c =====

void FUN_00c6769c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  long *local_58 [2];
  char cStack_41;
  long local_28;
  
  uVar3 = FUN_009881a4(param_1 + 0x40);
  if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 0x48) != 0)) {
    lVar4 = FUN_00c69f04(param_3,0x20);
    if (lVar4 == 0) {
      uVar3 = FUN_004022fc();
      if ((uVar3 & 1) == 0) {
        pcVar8 = 
        "Connection::OnConnectionRequestResponse - No MAPPED-ADDRESS or XOR-MAPPED-ADDRESS found in the stun response message"
        ;
        uVar6 = 0x3792;
LAB_00c6783c:
        FUN_00623bb0(&DAT_001f4e98,"../../p2p/base/connection.cc",uVar6,pcVar8);
        return;
      }
    }
    else {
      uVar3 = FUN_009881a4(param_1 + 0x40);
      if ((uVar3 & 1) == 0) {
        plVar5 = (long *)0x0;
      }
      else {
        plVar5 = *(long **)(param_1 + 0x48);
      }
      plVar5 = (long *)(**(code **)(*plVar5 + 0x88))();
      lVar1 = plVar5[1];
      for (lVar7 = *plVar5; lVar7 != lVar1; lVar7 = lVar7 + 0x198) {
        uVar3 = FUN_007e973c(lVar7 + 0x50,lVar4 + 0x10);
        if ((uVar3 & 1) != 0) {
          uVar3 = FUN_00b0043c(param_1 + 0x50,lVar7);
          if ((uVar3 & 1) == 0) {
            return;
          }
          uVar3 = FUN_00417e08();
          if ((uVar3 & 1) == 0) {
            FUN_00c61eb8(local_58,param_1);
            FUN_00623bb0(&DAT_00223e94,"../../p2p/base/connection.cc",0x37e1,local_58,
                         ": Updating local candidate type to srflx.");
            if (cStack_41 < '\0') {
              operator_delete(local_58[0]);
            }
          }
          FUN_00c527dc(param_1 + 0x50,lVar7);
          goto LAB_00c67900;
        }
      }
      uVar6 = FUN_00c6916c(param_2);
      lVar7 = FUN_00c69f88(uVar6,0x24);
      if (lVar7 == 0) {
        uVar3 = FUN_004022fc();
        if ((uVar3 & 1) == 0) {
          pcVar8 = 
          "Connection::OnConnectionRequestResponse - No STUN_ATTR_PRIORITY found in the stun response message"
          ;
          uVar6 = 0x386a;
          goto LAB_00c6783c;
        }
      }
      else {
        uVar2 = *(undefined4 *)(lVar7 + 0xc);
        FUN_00aff280(param_1 + 0x50);
        *(undefined4 *)(param_1 + 0x120) = 2;
        FUN_007e8d84(param_1 + 0x168,param_1 + 0xa0);
        uVar3 = FUN_009881a4(param_1 + 0x40);
        if ((uVar3 & 1) == 0) {
          plVar5 = (long *)0x0;
        }
        else {
          plVar5 = *(long **)(param_1 + 0x48);
        }
        uVar6 = (**(code **)(*plVar5 + 0x38))();
        FUN_00b00674(param_1 + 0x50,param_1 + 0xa0,uVar6);
        *(undefined4 *)(param_1 + 0xe8) = uVar2;
        FUN_007e8d84(param_1 + 0xa0,lVar4 + 0x10);
        uVar3 = FUN_00417e08();
        if ((uVar3 & 1) == 0) {
          FUN_00c61eb8(local_58,param_1);
          FUN_00623bb0(&DAT_00223e94,"../../p2p/base/connection.cc",0x3901,local_58,
                       ": Updating local candidate type to prflx.");
          if (cStack_41 < '\0') {
            operator_delete(local_58[0]);
          }
        }
        uVar3 = FUN_009881a4(param_1 + 0x40);
        if ((uVar3 & 1) == 0) {
          plVar5 = (long *)0x0;
        }
        else {
          plVar5 = *(long **)(param_1 + 0x48);
        }
        (**(code **)(*plVar5 + 0x160))(plVar5,param_1 + 0x50);
LAB_00c67900:
        local_58[0] = &local_28;
        local_28 = param_1;
        FUN_007b6160(param_1 + 0xaa0,local_58,FUN_00c68528);
      }
    }
  }
  return;
}


// ===== 00c6793c  FUN_00c6793c =====

undefined4 FUN_00c6793c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x948);
}


// ===== 00c67948  FUN_00c67948 =====

undefined4 FUN_00c67948(long param_1)

{
  return *(undefined4 *)(param_1 + 0x970);
}


// ===== 00c67954  FUN_00c67954 =====

void FUN_00c67954(long param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  size_t sVar2;
  undefined8 *__s2;
  undefined8 *puVar3;
  size_t sVar4;
  void *__s1;
  ulong uVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  size_t sVar10;
  uint uVar11;
  size_t sVar12;
  size_t sVar13;
  size_t sVar14;
  
  sVar10 = (size_t)*(byte *)(param_1 + 0x29f);
  sVar12 = (size_t)*(byte *)((long)param_2 + 0x17);
  sVar13 = *(size_t *)(param_1 + 0x290);
  sVar14 = param_2[1];
  uVar9 = (uint)(char)*(byte *)(param_1 + 0x29f);
  uVar11 = (uint)(char)*(byte *)((long)param_2 + 0x17);
  puVar1 = (undefined8 *)(param_1 + 0x288);
  sVar4 = sVar13;
  if (-1 < (int)uVar9) {
    sVar4 = sVar10;
  }
  sVar2 = sVar14;
  if (-1 < (int)uVar11) {
    sVar2 = sVar12;
  }
  if (sVar4 == sVar2) {
    puVar3 = (undefined8 *)*puVar1;
    if (-1 < (int)uVar9) {
      puVar3 = puVar1;
    }
    __s2 = (undefined8 *)*param_2;
    if (-1 < (int)uVar11) {
      __s2 = param_2;
    }
    iVar8 = memcmp(puVar3,__s2,sVar4);
    if (iVar8 == 0) {
      if (*(char *)(param_1 + 0x2b7) < '\0') {
        if (*(long *)(param_1 + 0x2a8) != 0) goto LAB_00c679e0;
      }
      else if (*(char *)(param_1 + 0x2b7) != '\0') goto LAB_00c679e0;
      uVar5 = param_2[4];
      puVar3 = (undefined8 *)param_2[3];
      if (-1 < (char)*(byte *)((long)param_2 + 0x2f)) {
        uVar5 = (ulong)*(byte *)((long)param_2 + 0x2f);
        puVar3 = param_2 + 3;
      }
      FUN_00b008fc(param_1 + 0x2a0,puVar3,uVar5);
      sVar10 = (size_t)*(byte *)(param_1 + 0x29f);
      sVar12 = (size_t)*(byte *)((long)param_2 + 0x17);
      sVar13 = *(size_t *)(param_1 + 0x290);
      sVar14 = param_2[1];
      uVar11 = (uint)*(byte *)((long)param_2 + 0x17);
      uVar9 = (uint)*(byte *)(param_1 + 0x29f);
    }
  }
LAB_00c679e0:
  if ((uVar9 & 0x80) == 0) {
    sVar13 = sVar10;
  }
  if ((uVar11 & 0x80) == 0) {
    sVar14 = sVar12;
  }
  if (sVar13 == sVar14) {
    puVar3 = (undefined8 *)*puVar1;
    if ((uVar9 & 0x80) == 0) {
      puVar3 = puVar1;
    }
    puVar1 = (undefined8 *)*param_2;
    if ((uVar11 & 0x80) == 0) {
      puVar1 = param_2;
    }
    iVar8 = memcmp(puVar3,puVar1,sVar13);
    if (iVar8 == 0) {
      bVar6 = *(byte *)(param_1 + 0x2b7);
      bVar7 = *(byte *)((long)param_2 + 0x2f);
      sVar4 = *(size_t *)(param_1 + 0x2a8);
      if (-1 < (char)bVar6) {
        sVar4 = (ulong)bVar6;
      }
      sVar13 = param_2[4];
      if (-1 < (char)bVar7) {
        sVar13 = (ulong)bVar7;
      }
      if (sVar4 == sVar13) {
        __s1 = *(void **)(param_1 + 0x2a0);
        if (-1 < (char)bVar6) {
          __s1 = (void *)(param_1 + 0x2a0);
        }
        puVar1 = (undefined8 *)param_2[3];
        if (-1 < (char)bVar7) {
          puVar1 = param_2 + 3;
        }
        iVar8 = memcmp(__s1,puVar1,sVar4);
        if ((iVar8 == 0) && (*(int *)(param_1 + 0x2e0) == 0)) {
          *(undefined4 *)(param_1 + 0x2e0) = param_3;
        }
      }
    }
  }
  return;
}


// ===== 00c67ae4  FUN_00c67ae4 =====

void FUN_00c67ae4(long param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  void *pvVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  
  uVar8 = FUN_00aff308(param_1 + 0x1e8);
  if (((uVar8 & 1) != 0) && (uVar8 = FUN_00aff308(param_2), (uVar8 & 1) == 0)) {
    bVar5 = *(byte *)(param_1 + 0x21f);
    bVar6 = *(byte *)(param_2 + 0x37);
    sVar1 = *(size_t *)(param_1 + 0x210);
    if (-1 < (char)bVar5) {
      sVar1 = (ulong)bVar5;
    }
    sVar2 = *(size_t *)(param_2 + 0x28);
    if (-1 < (char)bVar6) {
      sVar2 = (ulong)bVar6;
    }
    if (sVar1 == sVar2) {
      pvVar3 = *(void **)(param_1 + 0x208);
      if (-1 < (char)bVar5) {
        pvVar3 = (void *)(param_1 + 0x208);
      }
      puVar4 = (undefined8 *)*(void **)(param_2 + 0x20);
      if (-1 < (char)bVar6) {
        puVar4 = (undefined8 *)(param_2 + 0x20);
      }
      iVar7 = memcmp(pvVar3,puVar4,sVar1);
      if ((iVar7 == 0) && (uVar8 = FUN_007e973c(param_1 + 0x238,param_2 + 0x50), (uVar8 & 1) != 0))
      {
        bVar5 = *(byte *)(param_1 + 0x29f);
        bVar6 = *(byte *)(param_2 + 0xb7);
        sVar1 = *(size_t *)(param_1 + 0x290);
        if (-1 < (char)bVar5) {
          sVar1 = (ulong)bVar5;
        }
        sVar2 = *(size_t *)(param_2 + 0xa8);
        if (-1 < (char)bVar6) {
          sVar2 = (ulong)bVar6;
        }
        if (sVar1 == sVar2) {
          pvVar3 = *(void **)(param_1 + 0x288);
          if (-1 < (char)bVar5) {
            pvVar3 = (void *)(param_1 + 0x288);
          }
          puVar4 = (undefined8 *)*(void **)(param_2 + 0xa0);
          if (-1 < (char)bVar6) {
            puVar4 = (undefined8 *)(param_2 + 0xa0);
          }
          iVar7 = memcmp(pvVar3,puVar4,sVar1);
          if (iVar7 == 0) {
            bVar5 = *(byte *)(param_1 + 0x2b7);
            bVar6 = *(byte *)(param_2 + 0xcf);
            sVar1 = *(size_t *)(param_1 + 0x2a8);
            if (-1 < (char)bVar5) {
              sVar1 = (ulong)bVar5;
            }
            sVar2 = *(size_t *)(param_2 + 0xc0);
            if (-1 < (char)bVar6) {
              sVar2 = (ulong)bVar6;
            }
            if (sVar1 == sVar2) {
              pvVar3 = *(void **)(param_1 + 0x2a0);
              if (-1 < (char)bVar5) {
                pvVar3 = (void *)(param_1 + 0x2a0);
              }
              puVar4 = (undefined8 *)*(void **)(param_2 + 0xb8);
              if (-1 < (char)bVar6) {
                puVar4 = (undefined8 *)(param_2 + 0xb8);
              }
              iVar7 = memcmp(pvVar3,puVar4,sVar1);
              if ((iVar7 == 0) && (*(int *)(param_1 + 0x2e0) == *(int *)(param_2 + 0xf8))) {
                FUN_00c527dc(param_1 + 0x1e8,param_2);
                return;
              }
            }
          }
        }
      }
    }
  }
  return;
}


// ===== 00c67c64  FUN_00c67c64 =====

undefined8 FUN_00c67c64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x8e0);
}


// ===== 00c67c70  FUN_00c67c70 =====

void FUN_00c67c70(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  undefined1 uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  uVar4 = (**(code **)(*(long *)param_2[3] + 0x10))();
  auVar11 = FUN_00853260(param_2 + 0xef,uVar4);
  lVar5 = auVar11._0_8_;
  if ((auVar11 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    lVar5 = 0;
  }
  param_2[0x7b] = lVar5;
  auVar11 = FUN_00853260(param_2 + 0xfb,uVar4);
  lVar5 = auVar11._0_8_;
  *(undefined1 *)((long)param_2 + 0x382) = *(undefined1 *)((long)param_2 + 0x844);
  if ((auVar11 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    lVar5 = 0;
  }
  param_2[0x74] = lVar5;
  uVar7 = param_2[0x113];
  *(bool *)((long)param_2 + 0x381) = (int)param_2[0x108] == 0;
  *(bool *)((long)param_2 + 899) = (int)param_2[0x108] == 3;
  if ((long)uVar7 < 0) {
    uVar9 = -(-uVar7 / 1000) - (ulong)(500 < -uVar7 % 1000);
  }
  else {
    uVar9 = uVar7 / 1000;
    if (499 < uVar7 % 1000) {
      uVar9 = uVar9 + 1;
    }
  }
  param_2[0x71] = uVar9;
  param_2[0xe5] = (long)param_2;
  *(int *)(param_2 + 0xe6) = (int)param_2[0x129];
  uVar7 = FUN_009881a4(param_2 + 8);
  if (((uVar7 & 1) != 0) && (param_2[9] != 0)) {
    lVar5 = (**(code **)(*param_2 + 0x30))(param_2);
    param_2[0xe7] = lVar5;
    uVar4 = (**(code **)(*param_2 + 0x10))(param_2);
    FUN_00c527dc(param_2 + 0x7f,uVar4);
  }
  if ((int)param_2[0x10a] == 0) {
    bVar3 = *(int *)((long)param_2 + 0x854) != 0;
  }
  else {
    bVar3 = true;
  }
  uVar7 = param_2[0x115];
  *(bool *)(param_2 + 0xe8) = bVar3;
  if ((long)uVar7 < 0) {
    uVar9 = -(-uVar7 / 1000) - (ulong)(500 < -uVar7 % 1000);
  }
  else {
    uVar9 = uVar7 / 1000;
    if (499 < uVar7 % 1000) {
      uVar9 = uVar9 + 1;
    }
  }
  param_2[0xe9] = uVar9;
  if ((char)param_2[0x117] == '\x01') {
    uVar7 = param_2[0x116];
    if ((long)uVar7 < 0) {
      iVar6 = -(int)(-uVar7 / 1000) - (uint)(500 < -uVar7 % 1000);
    }
    else {
      iVar6 = (int)(uVar7 / 1000);
      if (499 < uVar7 % 1000) {
        iVar6 = iVar6 + 1;
      }
    }
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
    iVar6 = 0;
  }
  *(int *)(param_2 + 0xea) = iVar6;
  *(undefined1 *)((long)param_2 + 0x754) = uVar8;
  uVar4 = (**(code **)(*param_2 + 0x18))(param_2);
  FUN_00c527dc(param_2 + 0xb2,uVar4);
  lVar5 = param_2[0x11a];
  if (0 < lVar5) {
    lVar10 = param_2[0x12d];
    lVar1 = lVar10;
    if (lVar10 != -0x8000000000000000) {
      lVar1 = lVar10 + lVar5;
    }
    lVar2 = 0x7fffffffffffffff;
    if (lVar10 != 0x7fffffffffffffff && lVar5 != 0x7fffffffffffffff) {
      lVar2 = lVar1;
    }
    param_2[0xeb] = lVar2;
    if ((*(byte *)(param_2 + 0xec) & 1) == 0) {
      *(undefined1 *)(param_2 + 0xec) = 1;
    }
  }
  lVar5 = param_2[0x107];
  if (0 < lVar5) {
    lVar10 = param_2[0x12d];
    lVar1 = lVar10;
    if (lVar10 != -0x8000000000000000) {
      lVar1 = lVar10 + lVar5;
    }
    lVar2 = 0x7fffffffffffffff;
    if (lVar10 != 0x7fffffffffffffff && lVar5 != 0x7fffffffffffffff) {
      lVar2 = lVar1;
    }
    param_2[0xed] = lVar2;
    if ((*(byte *)(param_2 + 0xee) & 1) == 0) {
      *(undefined1 *)(param_2 + 0xee) = 1;
    }
  }
  FUN_00c6e8e4(param_1,param_2 + 0x70);
  return;
}


// ===== 00c67f44  FUN_00c67f44 =====

bool FUN_00c67f44(long param_1,int *param_2)

{
  if ((char)param_2[1] == '\x01') {
    return *param_2 <=
           (int)((ulong)(*(long *)(param_1 + 0x8f0) - *(long *)(param_1 + 0x8e8)) >> 3) *
           -0x33333333;
  }
  return false;
}


// ===== 00c67f88  FUN_00c67f88 =====

void FUN_00c67f88(long param_1,short param_2)

{
  long local_20;
  undefined1 *puStack_18;
  
  if (*(short *)(param_1 + 0x1ca) != param_2) {
    puStack_18 = (undefined1 *)&local_20;
    *(short *)(param_1 + 0x1ca) = param_2;
    local_20 = param_1;
    FUN_007b6160(param_1 + 0xaa0,&puStack_18,FUN_00c68528);
  }
  return;
}


// ===== 00c67fd8  FUN_00c67fd8 =====

void FUN_00c67fd8(long param_1)

{
  char *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *local_48 [2];
  char cStack_31;
  
  uVar3 = FUN_00417e08();
  if ((uVar3 & 1) == 0) {
    FUN_00c61eb8(local_48,param_1);
    FUN_00623bb0(&DAT_00223e94,"../../p2p/base/connection.cc",0x3b29,local_48,
                 ": Connection forget learned state");
    if (cStack_31 < '\0') {
      operator_delete(local_48[0]);
    }
  }
  FUN_00c68c6c(param_1 + 0x858);
  *(undefined1 *)(param_1 + 0x844) = 0;
  *(undefined4 *)(param_1 + 0x840) = 2;
  FUN_00c6ea5c(param_1 + 0x9b8);
  puVar4 = *(undefined8 **)(param_1 + 0x8e8);
  puVar2 = *(undefined8 **)(param_1 + 0x8f0);
  while( true ) {
    if (puVar4 == puVar2) {
      *(undefined8 **)(param_1 + 0x8f0) = puVar4;
      return;
    }
    puVar5 = puVar2 + -5;
    if (puVar5 == (undefined8 *)0x0) break;
    pcVar1 = (char *)((long)puVar2 + -0x11);
    puVar2 = puVar5;
    if (*pcVar1 < '\0') {
      operator_delete((void *)*puVar5);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c680d4  FUN_00c680d4 =====

void FUN_00c680d4(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined1 auStack_50 [8];
  undefined8 local_48;
  
  FUN_0098815c(auStack_50,param_3);
  local_48 = *(undefined8 *)(param_3 + 8);
  FUN_00c61b3c(param_1,param_2,auStack_50,param_4,param_5);
  FUN_00988344(auStack_50);
  *param_1 = &PTR_FUN_00d4e0a0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  return;
}


// ===== 00c68164  FUN_00c68164 =====

uint FUN_00c68164(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  uVar3 = FUN_009881a4(param_1 + 8);
  if (((uVar3 & 1) == 0) || (param_1[9] == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    param_1[0x76] = param_1[0x76] + 1;
    uVar3 = FUN_009881a4(param_1 + 8);
    if ((uVar3 & 1) == 0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = (long *)param_1[9];
    }
    lVar4 = (**(code **)(*param_1 + 0x18))(param_1);
    uVar1 = (**(code **)(*plVar7 + 0x90))(plVar7,param_2,param_3,lVar4 + 0x50,param_4,1);
    lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3]);
    if ((int)uVar1 < 1) {
      uVar3 = FUN_009881a4(param_1 + 8);
      if ((uVar3 & 1) == 0) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = (long *)param_1[9];
      }
      uVar2 = (**(code **)(*plVar7 + 0x78))();
      *(undefined4 *)(param_1 + 0x164) = uVar2;
      param_1[0x75] = param_1[0x75] + 1;
      lVar5 = 0x390;
    }
    else {
      param_3 = (ulong)uVar1;
      FUN_008532e0(param_1 + 0xfb,param_3,lVar4);
      lVar5 = 0x398;
    }
    lVar6 = *(long *)((long)param_1 + lVar5);
    param_1[0x107] = lVar4;
    *(ulong *)((long)param_1 + lVar5) = lVar6 + param_3;
  }
  return uVar1;
}


// ===== 00c682a4  FUN_00c682a4 =====

undefined4 FUN_00c682a4(long param_1)

{
  return *(undefined4 *)(param_1 + 0xb20);
}


// ===== 00c682b0  FUN_00c682b0 =====

void FUN_00c682b0(void *param_1)

{
  FUN_00c693c0();
  operator_delete(param_1);
  return;
}


// ===== 00c682e0  FUN_00c682e0 =====

void FUN_00c682e0(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_FUN_00d4df60;
  FUN_007b5d24(param_1 + 0x160);
  FUN_007b5d24(param_1 + 0x15c);
  FUN_007b5d24(param_1 + 0x158);
  FUN_007b5d24(param_1 + 0x154);
  (*(code *)param_1[0x152])(0,param_1 + 0x150,param_1 + 0x150);
  (*(code *)param_1[0x14e])(0,param_1 + 0x14c,param_1 + 0x14c);
  (*(code *)param_1[0x14a])(0,param_1 + 0x148,param_1 + 0x148);
  if ((*(char *)(param_1 + 0x146) == '\x01') && (*(code **)(param_1[0x145] + 8) != (code *)0x0)) {
    (**(code **)(param_1[0x145] + 8))(param_1[0x142]);
  }
  if ((*(char *)(param_1 + 0x141) == '\x01') && (*(code **)(param_1[0x140] + 8) != (code *)0x0)) {
    (**(code **)(param_1[0x140] + 8))(param_1[0x13d]);
  }
  plVar2 = (long *)param_1[0x135];
  param_1[0x135] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (*(char *)(param_1 + 0x132) == '\x01') {
    FUN_00c5bfb0((long)param_1 + 0x974);
  }
  if ((*(char *)(param_1 + 0x123) == '\x01') && (*(char *)((long)param_1 + 0x917) < '\0')) {
    operator_delete((void *)param_1[0x120]);
    puVar5 = (undefined8 *)param_1[0x11d];
  }
  else {
    puVar5 = (undefined8 *)param_1[0x11d];
  }
  if (puVar5 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)param_1[0x11e];
    puVar3 = puVar5;
    if (puVar5 != puVar4) {
      do {
        puVar3 = puVar4 + -5;
        if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if (*(char *)((long)puVar4 + -0x11) < '\0') {
          operator_delete((void *)*puVar3);
        }
        puVar4 = puVar3;
      } while (puVar3 != puVar5);
      puVar3 = (undefined8 *)param_1[0x11d];
    }
    param_1[0x11e] = puVar5;
    operator_delete(puVar3);
  }
  FUN_00c68a7c(param_1 + 0x10b);
  FUN_007de938(param_1 + 0xfb);
  FUN_007de938(param_1 + 0xef);
  FUN_00c6e96c(param_1 + 0x70);
  FUN_00aff0f8(param_1 + 0x3d);
  FUN_00aff0f8(param_1 + 10);
  FUN_00988344(param_1 + 8);
  plVar2 = (long *)param_1[1];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00c684b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 00c684f8  FUN_00c684f8 =====

void FUN_00c684f8(void *param_1)

{
  FUN_00c682e0();
  operator_delete(param_1);
  return;
}


// ===== 00c68528  FUN_00c68528 =====

void FUN_00c68528(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00c68540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined8 *)*param_1);
  return;
}


// ===== 00c68544  FUN_00c68544 =====

void FUN_00c68544(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 == *(char *)(param_2 + 3)) {
    if (cVar1 != '\0') {
      pvVar2 = (void *)*param_1;
      if (pvVar2 != (void *)0x0) {
        pvVar3 = (void *)param_1[1];
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
        do {
          if (pvVar3 == pvVar2) {
            param_1[1] = pvVar2;
            operator_delete(pvVar2);
            *param_1 = 0;
            param_1[1] = 0;
            param_1[2] = 0;
            goto LAB_00c686b4;
          }
          pvVar3 = (void *)((long)pvVar3 + -4);
        } while (pvVar3 != (void *)0x0);
LAB_00c68650:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
LAB_00c686b4:
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
    }
  }
  else if (cVar1 == '\0') {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else {
    pvVar2 = (void *)*param_1;
    if (pvVar2 != (void *)0x0) {
      pvVar3 = (void *)param_1[1];
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
      do {
        if (pvVar3 == pvVar2) {
          param_1[1] = pvVar2;
          operator_delete(pvVar2);
          goto LAB_00c686e8;
        }
        pvVar3 = (void *)((long)pvVar3 + -4);
      } while (pvVar3 != (void *)0x0);
      goto LAB_00c68650;
    }
LAB_00c686e8:
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}


// ===== 00c68710  FUN_00c68710 =====

long FUN_00c68710(long *param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  void *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  void *local_38;
  
  lVar8 = param_1[1] - *param_1;
  uVar4 = (lVar8 >> 3) * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar4) {
    FUN_00c689c8();
LAB_00c688b0:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  local_50 = (void *)0x0;
  lVar5 = param_1[2] - *param_1 >> 3;
  uVar7 = lVar5 * -0x6666666666666666;
  if (uVar7 < uVar4 || uVar7 - uVar4 == 0) {
    uVar7 = uVar4;
  }
  if (0x333333333333332 < (ulong)(lVar5 * -0x3333333333333333)) {
    uVar7 = 0x666666666666666;
  }
  if (uVar7 != 0) {
    if (0x666666666666666 < uVar7) goto LAB_00c688b0;
    local_50 = operator_new(uVar7 * 0x28);
  }
  local_38 = (void *)((long)local_50 + uVar7 * 0x28);
  local_48 = (undefined8 *)((long)local_50 + lVar8);
  if (local_48 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar10 = param_2[1];
  uVar6 = *param_2;
  local_48[2] = param_2[2];
  local_48[1] = uVar10;
  *local_48 = uVar6;
  uVar6 = param_2[3];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *(undefined4 *)(local_48 + 4) = *(undefined4 *)(param_2 + 4);
  local_48[3] = uVar6;
  local_40 = local_48 + 5;
  FUN_00c688b4(param_1,&local_50);
  puVar3 = local_48;
  lVar8 = param_1[1];
  puVar2 = local_40;
  while( true ) {
    if (puVar3 == puVar2) {
      if (local_50 != (void *)0x0) {
        local_40 = puVar2;
        operator_delete(local_50);
      }
      return lVar8;
    }
    puVar9 = puVar2 + -5;
    if (puVar9 == (undefined8 *)0x0) break;
    pcVar1 = (char *)((long)puVar2 + -0x11);
    puVar2 = puVar9;
    if (*pcVar1 < '\0') {
      operator_delete((void *)*puVar9);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c688b4  FUN_00c688b4 =====

void FUN_00c688b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  puVar9 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)((long)puVar9 + (param_2[1] - (long)puVar3));
  puVar4 = puVar9;
  puVar5 = puVar2;
  if (puVar3 != puVar9) {
    do {
      if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar6 = puVar4[1];
      uVar8 = *puVar4;
      puVar5[2] = puVar4[2];
      puVar5[1] = uVar6;
      *puVar5 = uVar8;
      uVar8 = puVar4[3];
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      puVar1 = puVar4 + 5;
      *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(puVar4 + 4);
      puVar5[3] = uVar8;
      puVar4 = puVar1;
      puVar5 = puVar5 + 5;
    } while (puVar1 != puVar3);
    do {
      if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if (*(char *)((long)puVar9 + 0x17) < '\0') {
        operator_delete((void *)*puVar9);
      }
      puVar9 = puVar9 + 5;
    } while (puVar9 != puVar3);
  }
  param_2[1] = puVar2;
  uVar8 = *param_1;
  uVar7 = param_1[2];
  param_1[1] = uVar8;
  uVar10 = param_2[1];
  uVar6 = param_2[3];
  param_1[1] = param_2[2];
  *param_1 = uVar10;
  param_1[2] = uVar6;
  param_2[2] = uVar8;
  param_2[3] = uVar7;
  *param_2 = uVar8;
  param_2[1] = uVar8;
  return;
}


// ===== 00c689c8  FUN_00c689c8 =====

void FUN_00c689c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c689e0  FUN_00c689e0 =====

void FUN_00c689e0(undefined8 *param_1)

{
  FUN_00c62cf4(*param_1);
  return;
}


// ===== 00c689ec  FUN_00c689ec =====

undefined8 FUN_00c689ec(undefined8 param_1,int param_2)

{
  if (param_2 < 0xc059) {
    if ((param_2 != 8) && (param_2 != 0x8028)) {
      return 1;
    }
  }
  else if ((param_2 != 0xc059) && (param_2 != 0xff00)) {
    return 1;
  }
  return 0;
}


// ===== 00c68a38  FUN_00c68a38 =====

void FUN_00c68a38(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1[3] = 0;
  param_1[2] = 0;
  *param_1 = param_2;
  param_1[1] = param_1 + 2;
  uVar2 = *param_3;
  param_1[5] = param_3[1];
  param_1[4] = uVar2;
  param_1[6] = param_3[2];
  lVar1 = param_3[3];
  param_1[7] = lVar1;
  if (*(long *)(lVar1 + 8) != 0) {
    param_3[2] = 0;
    param_3[3] = &DAT_001fbc50;
  }
  return;
}


// ===== 00c68a7c  FUN_00c68a7c =====

void FUN_00c68a7c(long param_1)

{
  code *pcVar1;
  long local_8;
  
  pcVar1 = *(code **)(*(long *)(param_1 + 0x38) + 8);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0x20));
  }
  local_8 = param_1 + 8;
  FUN_00c69820(&local_8,*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 00c68ac8  FUN_00c68ac8 =====

void FUN_00c68ac8(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *local_28;
  long local_8;
  
  local_8 = param_1 + 8;
  local_28 = param_2;
  lVar2 = FUN_00c698cc(&local_8,param_2[7] + 0x28,param_2[7] + 0x28,&local_28);
  FUN_00c68b3c(*(undefined8 *)(lVar2 + 0x38),param_3);
  plVar1 = local_28;
  local_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return;
}


// ===== 00c68b3c  FUN_00c68b3c =====

void FUN_00c68b3c(long param_1,long param_2)

{
  int iVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  undefined1 uStack_55;
  undefined1 local_54 [4];
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  
  pvVar2 = *(void **)(param_1 + 0x50);
  if (pvVar2 == (void *)0x0) {
    FUN_007ebdd8(0);
  }
  else {
    FUN_00d0f740(1,pvVar2);
    FUN_007ebdd8(pvVar2);
    iVar1 = FUN_00d0f7a0(0xffffffff,pvVar2);
    if (iVar1 == 1) {
      operator_delete(pvVar2);
    }
  }
  if (param_2 == 0) {
    FUN_00c6957c(param_1);
    return;
  }
  lVar4 = *(long *)(param_1 + 0x50);
  plVar3 = (long *)**(undefined8 **)(param_1 + 0x30);
  if (lVar4 != 0) {
    FUN_00d0f740(1,lVar4);
  }
  local_50[0] = (long *)operator_new(0x30);
  *local_50[0] = lVar4;
  local_50[0][4] = (long)FUN_004473ec;
  local_50[0][5] = (long)FUN_00c69b24;
  local_50[0][2] = param_1;
  local_40 = FUN_005db390;
  pcStack_38 = FUN_005db348;
  local_54[0] = 0;
  (**(code **)(*plVar3 + 0x10))(plVar3,local_50,param_2,local_54,&uStack_55);
  (*local_40)(0,local_50,local_50);
  return;
}


// ===== 00c68c6c  FUN_00c68c6c =====

void FUN_00c68c6c(long param_1)

{
  undefined8 *puVar1;
  long local_8;
  
  puVar1 = (undefined8 *)(param_1 + 0x10);
  local_8 = param_1 + 8;
  FUN_00c69820(&local_8,*puVar1);
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}


// ===== 00c68cac  FUN_00c68cac =====

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00c68cac(long param_1,long param_2)

{
  size_t __n;
  char *******pppppppcVar1;
  char *******pppppppcVar2;
  void **__s2;
  ushort uVar3;
  undefined2 uVar4;
  undefined8 *__s1;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  char *******pppppppcVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  void *local_90;
  char *******pppppppcStack_88;
  ulong local_80;
  char *******local_70;
  char *******pppppppcStack_68;
  undefined8 local_60;
  
  plVar14 = *(long **)(param_1 + 0x10);
  if (plVar14 != (long *)0x0) {
    lVar15 = param_1 + 8;
    __s1 = (undefined8 *)*(void **)(param_2 + 0x28);
    uVar11 = *(ulong *)(param_2 + 0x30);
    if (-1 < (char)*(byte *)(param_2 + 0x3f)) {
      __s1 = (undefined8 *)(param_2 + 0x28);
      uVar11 = (ulong)*(byte *)(param_2 + 0x3f);
    }
    do {
      while( true ) {
        plVar16 = (long *)plVar14[4];
        uVar13 = plVar14[5];
        if (-1 < (char)*(byte *)((long)plVar14 + 0x37)) {
          plVar16 = plVar14 + 4;
          uVar13 = (ulong)*(byte *)((long)plVar14 + 0x37);
        }
        __n = uVar13;
        if (uVar11 <= uVar13) {
          __n = uVar11;
        }
        iVar6 = memcmp(__s1,plVar16,__n);
        if (iVar6 != 0) break;
        if (uVar11 == uVar13) {
          if (plVar14 == (long *)(param_1 + 0x10)) {
            return 0;
          }
          lVar17 = plVar14[7];
          lVar10 = *(long *)(lVar17 + 0x38);
          iVar6 = *(int *)(lVar10 + 0x60);
          if (*(char *)(lVar17 + 0x58) != '\x01') goto LAB_00c68f48;
          if (iVar6 == 0) {
            uVar11 = FUN_004249b0();
            if ((uVar11 & 1) == 0) {
              FUN_00623bb0(&DAT_001f4e98,"../../p2p/base/stun_request.cc",0x41b,
                           "CheckResponse called on a passwordless request. Fix test!");
            }
            goto LAB_00c68f48;
          }
          iVar7 = *(int *)(param_2 + 0x60);
          if (iVar7 == 2) {
            if (*(char *)(param_2 + 0x7f) < '\0') {
              FUN_005478d8(&local_70,*(undefined8 *)(param_2 + 0x68),*(undefined8 *)(param_2 + 0x70)
                          );
            }
            else {
              pppppppcStack_68 = *(char ********)(param_2 + 0x70);
              local_70 = *(char ********)(param_2 + 0x68);
              local_60 = *(void ***)(param_2 + 0x78);
            }
            lVar10 = *(long *)(lVar17 + 0x38);
            if (*(char *)(lVar10 + 0x7f) < '\0') {
              FUN_005478d8(&local_90,*(undefined8 *)(lVar10 + 0x68),*(undefined8 *)(lVar10 + 0x70));
            }
            else {
              local_80 = *(ulong *)(lVar10 + 0x78);
              pppppppcStack_88 = *(char ********)(lVar10 + 0x70);
              local_90 = *(void **)(lVar10 + 0x68);
            }
            uVar11 = local_80;
            uVar8 = (uint)(char)local_60._7_1_;
            pppppppcVar1 = pppppppcStack_68;
            if (-1 < (int)uVar8) {
              pppppppcVar1 = (char *******)(ulong)local_60._7_1_;
            }
            pppppppcVar2 = pppppppcStack_88;
            if (-1 < (long)local_80) {
              pppppppcVar2 = (char *******)(local_80 >> 0x38);
            }
            if (pppppppcVar1 == pppppppcVar2) {
              pppppppcVar2 = local_70;
              if (-1 < (int)uVar8) {
                pppppppcVar2 = (char *******)&local_70;
              }
              __s2 = (void **)local_90;
              if (-1 < (long)local_80) {
                __s2 = &local_90;
              }
              iVar7 = memcmp(pppppppcVar2,__s2,(size_t)pppppppcVar1);
              bVar5 = iVar7 == 0;
            }
            else {
              bVar5 = false;
            }
            if ((long)uVar11 < 0) {
              operator_delete(local_90);
              if ((long)local_60 < 0) goto LAB_00c68ed8;
            }
            else if ((uVar8 >> 7 & 1) != 0) {
LAB_00c68ed8:
              operator_delete(local_70);
            }
            if (bVar5) goto LAB_00c68f48;
            iVar7 = *(int *)(param_2 + 0x60);
LAB_00c68ef0:
            if (iVar7 != 3) {
                    /* WARNING: Subroutine does not return */
              FUN_0061ff28();
            }
            lVar10 = *(long *)(lVar17 + 0x38);
            if (*(char *)(lVar10 + 0x7f) < '\0') {
              FUN_005478d8(&local_70,*(undefined8 *)(lVar10 + 0x68),*(undefined8 *)(lVar10 + 0x70));
            }
            else {
              local_60 = *(void ***)(lVar10 + 0x78);
              pppppppcStack_68 = *(char ********)(lVar10 + 0x70);
              local_70 = *(char ********)(lVar10 + 0x68);
            }
            FUN_00c6a57c(param_2,&local_70);
          }
          else {
            if (iVar7 != 0) goto LAB_00c68ef0;
            if (*(char *)(lVar10 + 0x7f) < '\0') {
              FUN_005478d8(&local_70,*(undefined8 *)(lVar10 + 0x68),*(undefined8 *)(lVar10 + 0x70));
            }
            else {
              local_60 = *(void ***)(lVar10 + 0x78);
              pppppppcStack_68 = *(char ********)(lVar10 + 0x70);
              local_70 = *(char ********)(lVar10 + 0x68);
            }
            FUN_00c6a0c0(param_2,&local_70);
          }
          if ((long)local_60 < 0) {
            operator_delete(local_70);
          }
LAB_00c68f48:
          FUN_00c69e40(&local_70,param_2);
          pppppppcVar2 = pppppppcStack_68;
          pppppppcVar1 = local_70;
          if (local_70 != (char *******)0x0) {
            uVar13 = (ulong)((long)pppppppcStack_68 + ((long)pppppppcStack_68 << 0x3f) + -2) >> 1;
            uVar11 = (ulong)(((long)local_70 - (long)pppppppcStack_68 << 0x3f) -
                            ((long)local_70 - (long)pppppppcStack_68)) >> 1;
            if (uVar13 <= uVar11) {
              uVar11 = uVar13;
            }
            pppppppcVar12 = pppppppcStack_68;
            if ((1 < uVar11) &&
               ((((int)local_70 - (uint)pppppppcStack_68 | (uint)pppppppcStack_68) & 1) == 0)) {
              uVar11 = uVar11 & 0x7ffffffffffffffe;
              lVar10 = uVar11 * -2;
              do {
                uVar11 = uVar11 - 2;
                pppppppcVar12 = (char *******)((long)pppppppcStack_68 + lVar10);
              } while (uVar11 != 0);
            }
            while (pppppppcVar12 != local_70) {
              pppppppcVar12 = (char *******)((long)pppppppcVar12 - 2);
              if (pppppppcVar12 == (char *******)0x0) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                          );
              }
            }
            pppppppcStack_68 = local_70;
            operator_delete(local_70);
          }
          if (pppppppcVar1 != pppppppcVar2) {
            uVar11 = FUN_004249b0();
            if ((uVar11 & 1) == 0) {
              FUN_00623bb0(&DAT_001f4e98,"../../p2p/base/stun_request.cc",0x4f3,
                           ": Discarding response due to unknown comprehension-required attribute.")
              ;
            }
            FUN_00c69a4c(lVar15,plVar14);
            return 0;
          }
          uVar3 = *(ushort *)(param_2 + 0x20);
          uVar8 = FUN_00c6dd68(*(undefined2 *)(*(long *)(lVar17 + 0x38) + 0x20));
          if (uVar8 == uVar3) {
            if ((iVar6 != 0) && (*(int *)(param_2 + 0x60) != 2)) {
              return 0;
            }
            plVar16 = (long *)plVar14[7];
            plVar14[7] = 0;
            FUN_00c69a4c(lVar15,plVar14);
            (**(code **)(*plVar16 + 0x10))(plVar16,param_2);
          }
          else {
            uVar3 = *(ushort *)(param_2 + 0x20);
            uVar8 = FUN_00c6dd80(*(undefined2 *)(*(long *)(lVar17 + 0x38) + 0x20));
            if (uVar8 != uVar3) {
              uVar11 = FUN_004249b0();
              if ((uVar11 & 1) != 0) {
                return 0;
              }
              local_70 = (char *******)0x1a56b1;
              pppppppcStack_68 = (char *******)0x5b3;
              uVar4 = *(undefined2 *)(param_2 + 0x20);
              local_60 = &local_90;
              uVar9 = FUN_00c6dd68(*(undefined2 *)(*(long *)(lVar17 + 0x38) + 0x20));
              FUN_00623bb0(&DAT_001f4ea6,local_70,(ulong)pppppppcStack_68 & 0xffffffff,
                           "Received response with wrong type: ",uVar4," (expecting ",uVar9,
                           &DAT_001ca519);
              return 0;
            }
            plVar16 = (long *)plVar14[7];
            plVar14[7] = 0;
            FUN_00c69a4c(lVar15,plVar14);
            (**(code **)(*plVar16 + 0x18))(plVar16,param_2);
          }
          if (plVar16 == (long *)0x0) {
            return 1;
          }
          (**(code **)(*plVar16 + 8))(plVar16);
          return 1;
        }
        if (uVar13 <= uVar11) goto LAB_00c68d04;
LAB_00c68d54:
        plVar14 = (long *)*plVar14;
        if (plVar14 == (long *)0x0) {
          return 0;
        }
      }
      if (iVar6 < 0) goto LAB_00c68d54;
LAB_00c68d04:
      plVar14 = (long *)plVar14[1];
    } while (plVar14 != (long *)0x0);
  }
  return 0;
}


// ===== 00c6916c  FUN_00c6916c =====

undefined8 FUN_00c6916c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}


// ===== 00c69178  FUN_00c69178 =====

uint FUN_00c69178(long param_1,long param_2,ulong param_3)

{
  void *__s1;
  long *__s2;
  size_t __n;
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  void *local_88 [2];
  char cStack_71;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  
  if (param_3 < 0x14) {
LAB_00c6927c:
    uVar2 = 0;
LAB_00c69280:
    return uVar2 & 1;
  }
  __s1 = (void *)(param_2 + 8);
  if (__s1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
              );
  }
  plVar4 = *(long **)(param_1 + 0x10);
joined_r0x00c691b8:
  if (plVar4 != (long *)0x0) {
    do {
      __s2 = (long *)plVar4[4];
      uVar3 = plVar4[5];
      if (-1 < (char)*(byte *)((long)plVar4 + 0x37)) {
        __s2 = plVar4 + 4;
        uVar3 = (ulong)*(byte *)((long)plVar4 + 0x37);
      }
      __n = uVar3;
      if (0xb < uVar3) {
        __n = 0xc;
      }
      iVar1 = memcmp(__s1,__s2,__n);
      if (iVar1 == 0) {
        if (uVar3 == 0xc) {
          if (plVar4 == (long *)(param_1 + 0x10)) break;
          puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
          local_70 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
          FUN_00879324(&local_70,param_2,param_3);
          plVar4 = (long *)(**(code **)(**(long **)(plVar4[7] + 0x38) + 0x10))();
          uVar3 = FUN_00c6af90(plVar4,&local_70);
          if ((uVar3 & 1) == 0) {
            uVar3 = FUN_004022fc();
            if ((uVar3 & 1) == 0) {
              FUN_00624c34(local_88,__s1,0xc);
              FUN_00623bb0(&DAT_001f4e90,"../../p2p/base/stun_request.cc",0x6b2,
                           "Failed to read STUN response ",local_88);
              if (cStack_71 < '\0') {
                operator_delete(local_88[0]);
              }
            }
            uVar2 = 0;
          }
          else {
            uVar2 = FUN_00c68cac(param_1,plVar4);
          }
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 8))(plVar4);
          }
          goto LAB_00c69280;
        }
        if (uVar3 < 0xd) goto LAB_00c691c8;
      }
      else if (-1 < iVar1) goto LAB_00c691c8;
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) break;
    } while( true );
  }
  goto LAB_00c6927c;
LAB_00c691c8:
  plVar4 = (long *)plVar4[1];
  goto joined_r0x00c691b8;
}


// ===== 00c69328  FUN_00c69328 =====

void FUN_00c69328(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 local_38;
  
  *param_1 = &PTR_FUN_00d4e100;
  lVar1 = *param_2;
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00d0f740(1,lVar1 + 8);
  }
  lVar2 = param_2[4];
  lVar1 = param_2[3];
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[6] = param_3;
  param_1[7] = param_4;
  param_1[3] = lVar4;
  param_1[2] = lVar3;
  param_1[5] = lVar2;
  param_1[4] = lVar1;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined1 *)((long)param_1 + 0x4c) = 0;
  FUN_007ebd84(&local_38);
  param_1[10] = local_38;
  *(undefined1 *)(param_1 + 0xb) = 1;
  return;
}


// ===== 00c693c0  FUN_00c693c0 =====

void FUN_00c693c0(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  
  *param_1 = &PTR_FUN_00d4e100;
  FUN_007ebdcc(param_1[10]);
  pvVar3 = (void *)param_1[10];
  if ((pvVar3 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar3), iVar1 == 1)) {
    operator_delete(pvVar3);
  }
  plVar2 = (long *)param_1[7];
  param_1[7] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[1];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00c6945c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 00c69470  FUN_00c69470 =====

void FUN_00c69470(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  
  *param_1 = &PTR_FUN_00d4e100;
  FUN_007ebdcc(param_1[10]);
  pvVar3 = (void *)param_1[10];
  if ((pvVar3 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar3), iVar1 == 1)) {
    operator_delete(pvVar3);
  }
  plVar2 = (long *)param_1[7];
  param_1[7] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[1];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 00c6951c  FUN_00c6951c =====

long FUN_00c6951c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  lVar3 = *(long *)(param_1 + 0x40);
  lVar2 = 0x7fffffffffffffff;
  if (lVar1 != 0x7fffffffffffffff && lVar3 != -0x8000000000000000) {
    lVar2 = -0x8000000000000000;
    if (lVar3 != 0x7fffffffffffffff && lVar1 != -0x8000000000000000) {
      lVar2 = lVar1 - lVar3;
    }
  }
  return lVar2;
}


// ===== 00c6957c  FUN_00c6957c =====

void FUN_00c6957c(long *param_1)

{
  ulong uVar1;
  long *__s2;
  size_t __n;
  undefined8 *__s1;
  ulong uVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 uStack_65;
  undefined1 local_64 [4];
  long *local_60 [2];
  code *local_50;
  code *pcStack_48;
  
  if (*(char *)((long)param_1 + 0x4c) == '\x01') {
    (**(code **)(*param_1 + 0x20))(param_1);
    lVar7 = param_1[6];
    plVar8 = (long *)(lVar7 + 0x10);
    plVar6 = (long *)*plVar8;
    if (plVar6 != (long *)0x0) {
      lVar5 = param_1[7];
      __s1 = (undefined8 *)*(void **)(lVar5 + 0x28);
      uVar1 = *(ulong *)(lVar5 + 0x30);
      if (-1 < (char)*(byte *)(lVar5 + 0x3f)) {
        __s1 = (undefined8 *)(lVar5 + 0x28);
        uVar1 = (ulong)*(byte *)(lVar5 + 0x3f);
      }
      do {
        while( true ) {
          __s2 = (long *)plVar6[4];
          uVar2 = plVar6[5];
          if (-1 < (char)*(byte *)((long)plVar6 + 0x37)) {
            __s2 = plVar6 + 4;
            uVar2 = (ulong)*(byte *)((long)plVar6 + 0x37);
          }
          __n = uVar2;
          if (uVar1 <= uVar2) {
            __n = uVar1;
          }
          iVar4 = memcmp(__s1,__s2,__n);
          if (iVar4 == 0) break;
          if (-1 < iVar4) goto LAB_00c695ec;
LAB_00c6963c:
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) {
            return;
          }
        }
        if (uVar1 == uVar2) {
          if (plVar6 == plVar8) {
            return;
          }
          FUN_00c69a4c(lVar7 + 8,plVar6);
          return;
        }
        if (uVar1 < uVar2) goto LAB_00c6963c;
LAB_00c695ec:
        plVar6 = (long *)plVar6[1];
      } while (plVar6 != (long *)0x0);
    }
  }
  else {
    lVar7 = (**(code **)(*(long *)param_1[3] + 0x10))();
    param_1[8] = lVar7;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_008792d8(&local_80);
    FUN_00c6a9c0(param_1[7],&local_80);
    (**(code **)(param_1[6] + 0x30))(param_1[6] + 0x20,local_70,local_80,param_1);
    (**(code **)(*param_1 + 0x28))(param_1);
    iVar4 = (**(code **)(*param_1 + 0x30))(param_1);
    lVar7 = param_1[10];
    plVar6 = *(long **)param_1[6];
    if (lVar7 != 0) {
      FUN_00d0f740(1,lVar7);
    }
    local_60[0] = (long *)operator_new(0x30);
    *local_60[0] = lVar7;
    local_60[0][4] = (long)FUN_004473ec;
    local_60[0][5] = (long)FUN_00c69b24;
    local_60[0][2] = (long)param_1;
    local_50 = FUN_005db390;
    pcStack_48 = FUN_005db348;
    local_64[0] = 0;
    (**(code **)(*plVar6 + 0x10))(plVar6,local_60,(long)iVar4 * 1000,local_64,&uStack_65);
    (*local_50)(0,local_60,local_60);
    puVar3 = local_70;
    local_70 = (undefined1 *)0x0;
    if (puVar3 != (undefined1 *)0x0) {
      operator_delete__(puVar3);
    }
  }
  return;
}


// ===== 00c697a8  FUN_00c697a8 =====

void FUN_00c697a8(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48);
  *(int *)(param_1 + 0x48) = iVar1 + 1;
  if (7 < iVar1) {
    *(undefined1 *)(param_1 + 0x4c) = 1;
  }
  return;
}


// ===== 00c697cc  FUN_00c697cc =====

int FUN_00c697cc(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0xfa << (ulong)(*(int *)(param_1 + 0x48) - 1U & 0x1f);
  if (7999 < iVar2) {
    iVar2 = 8000;
  }
  iVar1 = 0;
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar1 = iVar2;
  }
  return iVar1;
}


// ===== 00c697f8  FUN_00c697f8 =====

void FUN_00c697f8(long param_1)

{
  *(undefined1 *)(param_1 + 0x4c) = 1;
  return;
}


// ===== 00c69808  FUN_00c69808 =====

void FUN_00c69808(void)

{
  return;
}


// ===== 00c69810  FUN_00c69810 =====

void FUN_00c69810(void)

{
  return;
}


// ===== 00c69818  FUN_00c69818 =====

void FUN_00c69818(void)

{
  return;
}


// ===== 00c69820  FUN_00c69820 =====

void FUN_00c69820(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00c69820(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar1 = (long *)param_2[7];
      puVar2 = (undefined8 *)param_2[1];
      param_2[7] = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (*(char *)((long)param_2 + 0x37) < '\0') {
        operator_delete((void *)param_2[4]);
      }
      operator_delete(param_2);
      param_2 = puVar2;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}


// ===== 00c698cc  FUN_00c698cc =====

undefined1  [16] FUN_00c698cc(undefined8 *param_1,undefined8 *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  size_t __n;
  undefined8 *__s1;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  plVar8 = (long *)*param_1;
  plVar9 = plVar8 + 1;
  plVar6 = (long *)*plVar9;
  plVar10 = plVar9;
  if (plVar6 != (long *)0x0) {
    __s1 = (undefined8 *)*param_2;
    uVar1 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      __s1 = param_2;
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    do {
      while( true ) {
        plVar4 = plVar6;
        plVar6 = (long *)plVar4[4];
        uVar2 = plVar4[5];
        if (-1 < (char)*(byte *)((long)plVar4 + 0x37)) {
          plVar6 = plVar4 + 4;
          uVar2 = (ulong)*(byte *)((long)plVar4 + 0x37);
        }
        __n = uVar2;
        if (uVar1 <= uVar2) {
          __n = uVar1;
        }
        iVar3 = memcmp(__s1,plVar6,__n);
        plVar9 = plVar4;
        if (iVar3 != 0) break;
        if (uVar1 == uVar2) {
          uVar5 = 0;
          goto LAB_00c69a0c;
        }
        if (uVar2 <= uVar1) goto LAB_00c6991c;
LAB_00c6996c:
        plVar6 = (long *)*plVar4;
        plVar10 = plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_00c69988;
      }
      if (iVar3 < 0) goto LAB_00c6996c;
LAB_00c6991c:
      plVar6 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
    plVar10 = plVar4 + 1;
  }
LAB_00c69988:
  plVar4 = (long *)operator_new(0x40);
  if (plVar4 != (long *)0x0) {
    plVar6 = plVar4 + 4;
    *plVar4 = 0;
    if (plVar6 != (long *)0x0) {
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        FUN_005478d8(plVar6,*param_3,param_3[1]);
      }
      else {
        lVar11 = *param_3;
        lVar7 = param_3[2];
        plVar4[5] = param_3[1];
        *plVar6 = lVar11;
        plVar4[6] = lVar7;
      }
      lVar7 = *param_4;
      *param_4 = 0;
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[7] = lVar7;
      plVar4[2] = (long)plVar9;
      *plVar10 = (long)plVar4;
      plVar6 = plVar4;
      if (*(long *)*plVar8 != 0) {
        *plVar8 = *(long *)*plVar8;
        plVar6 = (long *)*plVar10;
      }
      FUN_005d5b94(plVar8[1],plVar6);
      uVar5 = 1;
      plVar8[2] = plVar8[2] + 1;
LAB_00c69a0c:
      auVar12._8_8_ = uVar5;
      auVar12._0_8_ = plVar4;
      return auVar12;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c69a4c  FUN_00c69a4c =====

undefined8 * FUN_00c69a4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar1 = (undefined8 *)param_2[1];
  puVar4 = param_2;
  if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
    do {
      puVar5 = (undefined8 *)puVar4[2];
      bVar2 = puVar4 != (undefined8 *)*puVar5;
      puVar4 = puVar5;
    } while (bVar2);
  }
  else {
    do {
      puVar5 = puVar1;
      puVar1 = (undefined8 *)*puVar5;
    } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
  }
  if ((undefined8 *)*param_1 == param_2) {
    *param_1 = puVar5;
  }
  param_1[2] = param_1[2] + -1;
  FUN_005d5d48(param_1[1],param_2);
  if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  plVar3 = (long *)param_2[7];
  param_2[7] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    operator_delete((void *)param_2[4]);
  }
  operator_delete(param_2);
  return puVar5;
}


// ===== 00c69b24  FUN_00c69b24 =====

void FUN_00c69b24(undefined8 *param_1)

{
  FUN_00c6957c(*param_1);
  return;
}


// ===== 00c69b30  FUN_00c69b30 =====

void FUN_00c69b30(undefined8 param_1)

{
  FUN_00c69b48(param_1,0,"0000000000000000",0x10);
  return;
}


// ===== 00c69b48  FUN_00c69b48 =====

void FUN_00c69b48(undefined8 *param_1,undefined2 param_2,undefined8 *param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint local_64;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d4e148;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 4) = param_2;
  *(undefined2 *)((long)param_1 + 0x22) = 0;
  if (0x7ffffffffffffff6 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  puVar6 = param_1 + 5;
  if (param_4 < 0x17) {
    *(char *)((long)param_1 + 0x3f) = (char)param_4;
    puVar2 = param_1 + 5;
  }
  else {
    uVar3 = (param_4 & 0x7ffffffffffffff8) + 8;
    uVar1 = 0x19;
    if (uVar3 != 0x18) {
      uVar1 = uVar3;
    }
    puVar2 = (undefined8 *)operator_new(uVar1);
    param_1[5] = puVar2;
    param_1[6] = param_4;
    param_1[7] = uVar1 | 0x8000000000000000;
  }
  if ((undefined8 *)((long)puVar2 + param_4) < puVar2) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((puVar2 <= param_3) && (param_3 < (undefined8 *)((long)puVar2 + param_4))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(puVar2,param_3,param_4);
  *(undefined1 *)((long)puVar2 + param_4) = 0;
  lVar4 = (long)*(char *)((long)param_1 + 0x3f);
  if (lVar4 < 0) {
    puVar6 = (undefined8 *)param_1[5];
    lVar4 = param_1[6];
  }
  puVar2 = (undefined8 *)0x0;
  if (lVar4 != 0) {
    puVar2 = puVar6;
  }
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00879324(&local_60,puVar2);
  local_64 = 0xaaaaaaaa;
  uVar3 = FUN_008793d0(&local_60,&local_64);
  uVar5 = 0;
  while ((uVar3 & 1) != 0) {
    uVar5 = local_64 ^ uVar5;
    uVar3 = FUN_008793d0(&local_60,&local_64);
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  *(uint *)(param_1 + 8) = uVar5;
  *(undefined4 *)((long)param_1 + 0x44) = 0x2112a442;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


// ===== 00c69ccc  FUN_00c69ccc =====

void FUN_00c69ccc(undefined8 param_1,undefined4 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **local_48;
  ulong uStack_40;
  byte bStack_31;
  
  FUN_00835a20(&local_48,0xc);
  pppuVar1 = (undefined8 ***)local_48;
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    pppuVar1 = &local_48;
  }
  FUN_00c69b48(param_1,param_2,pppuVar1,uStack_40);
  if ((char)bStack_31 < '\0') {
    operator_delete(local_48);
  }
  return;
}


// ===== 00c69d50  FUN_00c69d50 =====

void FUN_00c69d50(void *param_1)

{
  FUN_00c6e5fc();
  operator_delete(param_1);
  return;
}


// ===== 00c69d80  FUN_00c69d80 =====

void FUN_00c69d80(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *local_28;
  
  local_28 = param_2;
  (**(code **)(*param_2 + 0x18))(param_2,param_1);
  plVar1 = *(long **)(param_1 + 0x10);
  *(ushort *)(param_1 + 0x22) =
       *(short *)(param_1 + 0x22) + (*(short *)((long)param_2 + 10) + 3U & 0xfffc) + 4;
  if (plVar1 < *(long **)(param_1 + 0x18)) {
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    local_28 = (long *)0x0;
    plVar2 = plVar1 + 1;
    *plVar1 = (long)param_2;
  }
  else {
    plVar2 = (long *)FUN_00c6e750(param_1 + 8,&local_28);
  }
  plVar1 = local_28;
  *(long **)(param_1 + 0x10) = plVar2;
  local_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  return;
}


// ===== 00c69e40  FUN_00c69e40 =====

void FUN_00c69e40(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined2 *puVar2;
  long *plVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 local_34 [2];
  
  plVar1 = (long *)param_2[1];
  plVar3 = (long *)param_2[2];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    if (plVar1 == plVar3) {
      return;
    }
    if ((-1 < *(short *)(*plVar1 + 8)) &&
       (iVar4 = (**(code **)(*param_2 + 0x18))(param_2), iVar4 == 0)) {
      puVar2 = (undefined2 *)param_1[1];
      local_34[0] = *(undefined2 *)(*plVar1 + 8);
      if (puVar2 < (undefined2 *)param_1[2]) {
        if (puVar2 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar5 = puVar2 + 1;
        *puVar2 = local_34[0];
      }
      else {
        puVar5 = (undefined2 *)FUN_007d40ec(param_1,local_34);
      }
      param_1[1] = puVar5;
    }
    plVar1 = plVar1 + 1;
  } while( true );
}


// ===== 00c69f04  FUN_00c69f04 =====

long FUN_00c69f04(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = *(long **)(param_1 + 8);
  plVar1 = *(long **)(param_1 + 0x10);
  if (param_2 != 1) {
    do {
      if (plVar3 == plVar1) {
        return 0;
      }
      lVar2 = *plVar3;
      plVar3 = plVar3 + 1;
    } while (param_2 != *(ushort *)(lVar2 + 8));
    return lVar2;
  }
  plVar4 = plVar3;
  if (plVar3 != plVar1) {
    do {
      plVar5 = plVar4 + 1;
      lVar2 = *plVar4;
      if (*(short *)(lVar2 + 8) == 1) {
        if (lVar2 != 0) {
          return lVar2;
        }
        break;
      }
      plVar4 = plVar5;
    } while (plVar5 != plVar1);
    do {
      plVar4 = plVar3 + 1;
      if (*(short *)(*plVar3 + 8) == 0x20) {
        return *plVar3;
      }
      plVar3 = plVar4;
    } while (plVar4 != plVar1);
  }
  return 0;
}


// ===== 00c69f88  FUN_00c69f88 =====

long FUN_00c69f88(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 8);
  do {
    if (plVar1 == *(long **)(param_1 + 0x10)) {
      return 0;
    }
    lVar2 = *plVar1;
    plVar1 = plVar1 + 1;
  } while (param_2 != *(ushort *)(lVar2 + 8));
  return lVar2;
}


// ===== 00c69fb8  FUN_00c69fb8 =====

long FUN_00c69fb8(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 8);
  do {
    if (plVar1 == *(long **)(param_1 + 0x10)) {
      return 0;
    }
    lVar2 = *plVar1;
    plVar1 = plVar1 + 1;
  } while (param_2 != *(ushort *)(lVar2 + 8));
  return lVar2;
}


// ===== 00c69fe8  FUN_00c69fe8 =====

long FUN_00c69fe8(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 8);
  do {
    if (plVar1 == *(long **)(param_1 + 0x10)) {
      return 0;
    }
    lVar2 = *plVar1;
    plVar1 = plVar1 + 1;
  } while (param_2 != *(ushort *)(lVar2 + 8));
  return lVar2;
}


// ===== 00c6a018  FUN_00c6a018 =====

long FUN_00c6a018(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 8);
  do {
    if (plVar1 == *(long **)(param_1 + 0x10)) {
      return 0;
    }
    lVar2 = *plVar1;
    plVar1 = plVar1 + 1;
  } while (param_2 != *(ushort *)(lVar2 + 8));
  return lVar2;
}


// ===== 00c6a048  FUN_00c6a048 =====

long FUN_00c6a048(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 8);
  do {
    if (plVar1 == *(long **)(param_1 + 0x10)) {
      return 0;
    }
    lVar2 = *plVar1;
    plVar1 = plVar1 + 1;
  } while (*(short *)(lVar2 + 8) != 9);
  return lVar2;
}


// ===== 00c6a078  FUN_00c6a078 =====

int FUN_00c6a078(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 8);
  do {
    if (plVar1 == *(long **)(param_1 + 0x10)) {
      return 600;
    }
    lVar2 = *plVar1;
    plVar1 = plVar1 + 1;
  } while (*(short *)(lVar2 + 8) != 9);
  if (lVar2 == 0) {
    return 600;
  }
  return (uint)*(byte *)(lVar2 + 0xd) + (uint)*(byte *)(lVar2 + 0xc) * 100;
}


// ===== 00c6a0c0  FUN_00c6a0c0 =====

undefined4 FUN_00c6a0c0(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  long *plVar2;
  byte bVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  char *pcVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined4 uVar15;
  long *plVar14;
  
  if ((undefined8 *)(param_1 + 0x68) != param_2) {
    bVar3 = *(byte *)((long)param_2 + 0x17);
    if (*(char *)(param_1 + 0x7f) < '\0') {
      uVar7 = param_2[1];
      puVar5 = (undefined8 *)*param_2;
      if (-1 < (char)bVar3) {
        uVar7 = (ulong)bVar3;
        puVar5 = param_2;
      }
      FUN_00547f08(param_1 + 0x68,puVar5,uVar7);
    }
    else if ((char)bVar3 < '\0') {
      FUN_00547fc0(param_1 + 0x68,*param_2,param_2[1]);
    }
    else {
      uVar9 = param_2[1];
      uVar6 = *param_2;
      *(undefined8 *)(param_1 + 0x78) = param_2[2];
      *(undefined8 *)(param_1 + 0x70) = uVar9;
      *(undefined8 *)(param_1 + 0x68) = uVar6;
    }
  }
  plVar12 = *(long **)(param_1 + 8);
  plVar2 = *(long **)(param_1 + 0x10);
  plVar13 = plVar12;
  if (plVar12 != plVar2) {
    do {
      plVar14 = plVar13 + 1;
      if (*(short *)(*plVar13 + 8) == 8) {
        if (*plVar13 != 0) {
          lVar11 = (long)*(char *)(param_1 + 0x5f);
          if (lVar11 < 0) {
            lVar10 = *(long *)(param_1 + 0x48);
            lVar11 = *(long *)(param_1 + 0x50);
          }
          else {
            lVar10 = param_1 + 0x48;
          }
          uVar6 = 8;
          uVar9 = 0x14;
          goto LAB_00c6a1c8;
        }
        break;
      }
      plVar13 = plVar14;
    } while (plVar14 != plVar2);
LAB_00c6a17c:
    plVar13 = plVar12 + 1;
    if (*(short *)(*plVar12 + 8) != -0x3fa0) goto LAB_00c6a174;
    if (*plVar12 != 0) {
      lVar11 = (long)*(char *)(param_1 + 0x5f);
      if (lVar11 < 0) {
        lVar10 = *(long *)(param_1 + 0x48);
        lVar11 = *(long *)(param_1 + 0x50);
      }
      else {
        lVar10 = param_1 + 0x48;
      }
      uVar6 = 0xc060;
      uVar9 = 4;
LAB_00c6a1c8:
      uVar7 = FUN_00c6a35c(uVar6,uVar9,lVar10,lVar11,param_2);
      if ((uVar7 & 1) == 0) {
        uVar15 = 3;
      }
      else {
        uVar15 = 2;
      }
      goto LAB_00c6a1e0;
    }
  }
LAB_00c6a1a4:
  uVar15 = 1;
LAB_00c6a1e0:
  *(undefined4 *)(param_1 + 0x60) = uVar15;
  uVar1 = *(ushort *)(param_1 + 0x20) & 0x110;
  if (uVar1 < 0x100) {
    if ((*(ushort *)(param_1 + 0x20) & 0x110) == 0) {
      pcVar8 = "WebRTC.Stun.Integrity.Request";
      uVar6 = 0x1d;
    }
    else {
      pcVar8 = "WebRTC.Stun.Integrity.Indication";
      uVar6 = 0x20;
    }
    goto LAB_00c6a264;
  }
  if (uVar1 == 0x100) {
    pcVar8 = "WebRTC.Stun.Integrity.Response";
    uVar6 = 0x1e;
    goto LAB_00c6a264;
  }
  plVar12 = *(long **)(param_1 + 8);
  do {
    if (plVar12 == *(long **)(param_1 + 0x10)) goto LAB_00c6a258;
    lVar11 = *plVar12;
    plVar12 = plVar12 + 1;
  } while (*(short *)(lVar11 + 8) != 9);
  if (lVar11 == 0) {
LAB_00c6a258:
    pcVar8 = "WebRTC.Stun.Integrity.ErrorResponse.NoErrorAttribute";
LAB_00c6a260:
    uVar6 = 0x34;
  }
  else {
    uVar4 = (uint)*(byte *)(lVar11 + 0xd) + (uint)*(byte *)(lVar11 + 0xc) * 100;
    if (uVar4 < 0x1a4) {
      if (uVar4 == 300) {
        pcVar8 = "WebRTC.Stun.Integrity.ErrorResponse.TryAlternate";
        uVar6 = 0x30;
        goto LAB_00c6a264;
      }
      if (uVar4 != 400) {
        if (uVar4 == 0x191) {
          pcVar8 = "WebRTC.Stun.Integrity.ErrorResponse.Unauthorized";
          uVar6 = 0x30;
          goto LAB_00c6a264;
        }
        goto LAB_00c6a324;
      }
      pcVar8 = "WebRTC.Stun.Integrity.ErrorResponse.BadRequest";
    }
    else {
      if (uVar4 < 500) {
        if (uVar4 == 0x1a4) {
          pcVar8 = "WebRTC.Stun.Integrity.ErrorResponse.UnknownAttribute";
          goto LAB_00c6a260;
        }
        if (uVar4 == 0x1b6) {
          pcVar8 = "WebRTC.Stun.Integrity.ErrorResponse.StaleNonce";
          goto LAB_00c6a354;
        }
      }
      else {
        if (uVar4 == 500) {
          pcVar8 = "WebRTC.Stun.Integrity.ErrorResponse.ServerError";
          uVar6 = 0x2f;
          goto LAB_00c6a264;
        }
        if (uVar4 == 600) {
          pcVar8 = "WebRTC.Stun.Integrity.ErrorResponse.GlobalFailure";
          uVar6 = 0x31;
          goto LAB_00c6a264;
        }
      }
LAB_00c6a324:
      pcVar8 = "WebRTC.Stun.Integrity.ErrorResponse.ErrorOther";
    }
LAB_00c6a354:
    uVar6 = 0x2e;
  }
LAB_00c6a264:
  lVar11 = FUN_0066631c(pcVar8,uVar6,4);
  if (lVar11 != 0) {
    FUN_00666568(lVar11,uVar15);
  }
  return *(undefined4 *)(param_1 + 0x60);
LAB_00c6a174:
  plVar12 = plVar13;
  if (plVar13 == plVar2) goto LAB_00c6a1a4;
  goto LAB_00c6a17c;
}


// ===== 00c6a35c  FUN_00c6a35c =====

bool FUN_00c6a35c(uint param_1,size_t param_2,void *param_3,ulong param_4,undefined8 *param_5)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  void *__dest;
  size_t sVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong __n;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  bVar7 = false;
  local_58 = *(long *)(lVar4 + 0x28);
  if ((((0x13 < param_4) && ((param_4 & 3) == 0)) &&
      (bVar7 = false,
      param_4 ==
      (ulong)((uint)(*(ushort *)((long)param_3 + 2) >> 8) |
             (*(ushort *)((long)param_3 + 2) & 0xff00ff) << 8) + 0x14)) && (0x17 < param_4)) {
    __n = 0x14;
    uVar11 = (ulong)((uint)(*(ushort *)((long)param_3 + 0x16) >> 8) |
                    (*(ushort *)((long)param_3 + 0x16) & 0xff00ff) << 8);
    if (param_1 ==
        ((uint)(*(ushort *)((long)param_3 + 0x14) >> 8) |
        (*(ushort *)((long)param_3 + 0x14) & 0xff00ff) << 8)) {
      uVar12 = 0x18;
    }
    else {
      do {
        uVar3 = 0;
        if ((uVar11 & 3) != 0) {
          uVar3 = 4 - ((uint)uVar11 & 3);
        }
        lVar10 = __n + uVar11 + (ulong)uVar3;
        uVar12 = lVar10 + 8;
        if (param_4 < uVar12) goto LAB_00c6a450;
        __n = lVar10 + 4;
        uVar1 = *(ushort *)((long)param_3 + __n);
        uVar2 = ((ushort *)((long)param_3 + __n))[1];
        uVar11 = (ulong)((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8);
      } while (param_1 != ((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8));
    }
    if (param_2 == uVar11 && uVar12 + uVar11 <= param_4) {
      __dest = operator_new__(__n);
      memcpy(__dest,param_3,__n);
      uVar11 = param_2 + __n + 4;
      if (uVar11 < param_4) {
        uVar3 = (int)uVar11 - 0x14;
        *(ushort *)((long)__dest + 2) =
             (ushort)(uVar3 >> 8) & 0xff | (ushort)((uVar3 & 0xff00ff) << 8);
      }
      puVar6 = PTR_s_sha_1_00d52928;
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      local_60 = 0xaaaaaaaa;
      sVar9 = strlen(PTR_s_sha_1_00d52928);
      uVar11 = param_5[1];
      puVar5 = (undefined8 *)*param_5;
      if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
        uVar11 = (ulong)*(byte *)((long)param_5 + 0x17);
        puVar5 = param_5;
      }
      lVar10 = FUN_0083399c(puVar6,sVar9,puVar5,uVar11,__dest,__n,&local_70,0x14);
      if (lVar10 == 0x14) {
        iVar8 = memcmp((void *)((long)param_3 + __n + 4),&local_70,param_2);
        bVar7 = iVar8 == 0;
      }
      else {
        bVar7 = false;
      }
      if (__dest != (void *)0x0) {
        operator_delete__(__dest);
      }
    }
    else {
LAB_00c6a450:
      bVar7 = false;
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar7;
}


// ===== 00c6a550  FUN_00c6a550 =====

bool FUN_00c6a550(uint param_1)

{
  return (param_1 & 0x110) == 0;
}


// ===== 00c6a564  FUN_00c6a564 =====

bool FUN_00c6a564(uint param_1)

{
  return (param_1 & 0x110) == 0x100;
}


// ===== 00c6a57c  FUN_00c6a57c =====

void FUN_00c6a57c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e94,"../../api/transport/stun.cc",0xac1,
                 "Message revalidation, old status was ",*(undefined4 *)(param_1 + 0x60));
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  FUN_00c6a0c0(param_1,param_2);
  return;
}


// ===== 00c6a5dc  FUN_00c6a5dc =====

void FUN_00c6a5dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00c6a5f4(param_1,8,0x14,param_2,param_3);
  return;
}


// ===== 00c6a5f4  FUN_00c6a5f4 =====

bool FUN_00c6a5f4(long param_1,undefined2 param_2,undefined1 *param_3,undefined8 *****param_4,
                 ulong param_5)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  long ****pppplVar8;
  bool bVar9;
  long *****ppppplVar10;
  long ****pppplVar11;
  long ***ppplVar12;
  ulong uVar13;
  size_t sVar14;
  long lVar15;
  undefined8 *****__dest;
  undefined8 *puVar16;
  undefined **ppuVar17;
  undefined1 *puVar18;
  undefined8 ****local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  long ****local_a0;
  undefined1 *puStack_98;
  undefined8 local_90;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  if ((undefined1 *)0x7ffffffffffffff6 < param_3) goto LAB_00c6a9a0;
  if (param_3 < (undefined1 *)0x17) {
    ppppplVar10 = &local_a0;
    local_90 = (undefined1 *)CONCAT17((char)param_3,(undefined7)local_90);
    if (param_3 != (undefined1 *)0x0) goto LAB_00c6a68c;
  }
  else {
    uVar13 = ((ulong)param_3 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar13 != 0x18) {
      uVar2 = uVar13;
    }
    ppppplVar10 = (long *****)operator_new(uVar2);
    local_90 = (undefined1 *)(uVar2 | 0x8000000000000000);
    local_a0 = (long ****)ppppplVar10;
    puStack_98 = param_3;
LAB_00c6a68c:
    memset(ppppplVar10,0x30,(size_t)param_3);
  }
  *(undefined1 *)((long)ppppplVar10 + (long)param_3) = 0;
  pppplVar11 = (long ****)operator_new(0x18);
  pppplVar8 = local_a0;
  puVar18 = (undefined1 *)(long)local_90._7_1_;
  ppuVar17 = &PTR_FUN_00d4e278;
  *(undefined2 *)(pppplVar11 + 1) = param_2;
  puVar1 = puStack_98;
  if (-1 < (long)local_90) {
    puVar1 = puVar18;
  }
  *pppplVar11 = (long ***)&PTR_FUN_00d4e278;
  ppppplVar10 = (long *****)local_a0;
  if (-1 < (long)local_90) {
    ppppplVar10 = &local_a0;
  }
  ppplVar12 = (long ***)operator_new__((ulong)puVar1);
  memcpy(ppplVar12,ppppplVar10,(size_t)puVar1);
  pppplVar11[2] = ppplVar12;
  *(short *)((long)pppplVar11 + 10) = (short)puVar1;
  if ((long)puVar18 < 0) {
    operator_delete(pppplVar8);
    ppuVar17 = (undefined **)*pppplVar11;
  }
  local_a0 = pppplVar11;
  (*(code *)((long ***)ppuVar17)[3])(pppplVar11,param_1);
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  *(ushort *)(param_1 + 0x22) =
       *(short *)(param_1 + 0x22) + (*(short *)((long)pppplVar11 + 10) + 3U & 0xfffc) + 4;
  if (puVar3 < *(undefined8 **)(param_1 + 0x18)) {
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    local_a0 = (long ****)0x0;
    puVar16 = puVar3 + 1;
    *puVar3 = pppplVar11;
  }
  else {
    puVar16 = (undefined8 *)FUN_00c6e750(param_1 + 8,&local_a0);
  }
  pppplVar8 = local_a0;
  *(undefined8 **)(param_1 + 0x10) = puVar16;
  local_a0 = (long ****)0x0;
  if (pppplVar8 != (long ****)0x0) {
    (*(code *)(*pppplVar8)[1])(pppplVar8);
  }
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = (long ****)&DAT_aaaaaaaaaaaaaaaa;
  FUN_008792d8(&local_a0);
  uVar13 = FUN_00c6a9c0(param_1,&local_a0);
  puVar7 = PTR_s_sha_1_00d52928;
  if ((uVar13 & 1) == 0) {
    bVar9 = false;
  }
  else {
    iVar5 = (int)local_a0 - (uint)*(ushort *)((long)pppplVar11 + 10);
    local_70 = 0xaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    sVar14 = strlen(PTR_s_sha_1_00d52928);
    lVar15 = FUN_0083399c(puVar7,sVar14,param_4,param_5,local_90,(long)(iVar5 + -4),&local_80,0x14);
    bVar9 = lVar15 == 0x14;
    if (bVar9) {
      ppplVar12 = (long ***)operator_new__((ulong)param_3);
      memcpy(ppplVar12,&local_80,(size_t)param_3);
      if (pppplVar11[2] != (long ***)0x0) {
        operator_delete__(pppplVar11[2]);
      }
      pppplVar11[2] = ppplVar12;
      *(short *)((long)pppplVar11 + 10) = (short)param_3;
      if (0x7ffffffffffffff6 < param_5) {
LAB_00c6a9a0:
                    /* WARNING: Subroutine does not return */
        FUN_005d45ec();
      }
      if (param_5 < 0x17) {
        local_a8 = CONCAT17((char)param_5,(undefined7)local_a8);
        __dest = &local_b8;
      }
      else {
        uVar13 = (param_5 & 0x7ffffffffffffff8) + 8;
        uVar2 = 0x19;
        if (uVar13 != 0x18) {
          uVar2 = uVar13;
        }
        __dest = (undefined8 *****)operator_new(uVar2);
        local_a8 = uVar2 | 0x8000000000000000;
        local_b8 = __dest;
        uStack_b0 = param_5;
      }
      if ((undefined8 *****)((long)__dest + param_5) < __dest) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                  );
      }
      if ((__dest <= param_4) && (param_4 < (undefined8 *****)((long)__dest + param_5))) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                  );
      }
      memmove(__dest,param_4,param_5);
      cVar4 = *(char *)(param_1 + 0x7f);
      *(undefined1 *)((long)__dest + param_5) = 0;
      if (cVar4 < '\0') {
        operator_delete(*(void **)(param_1 + 0x68));
      }
      *(undefined4 *)(param_1 + 0x60) = 2;
      *(ulong *)(param_1 + 0x70) = uStack_b0;
      *(undefined8 *****)(param_1 + 0x68) = local_b8;
      *(ulong *)(param_1 + 0x78) = local_a8;
    }
    else {
      uVar13 = FUN_004249b0();
      if ((uVar13 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../api/transport/stun.cc",0xf2b,
                     "HMAC computation failed. Message-Integrity has dummy value.");
      }
    }
  }
  puVar1 = local_90;
  local_90 = (undefined1 *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    operator_delete__(puVar1);
  }
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar9;
}


// ===== 00c6a9a8  FUN_00c6a9a8 =====

void FUN_00c6a9a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00c6a5f4(param_1,0xc060,4,param_2,param_3);
  return;
}


// ===== 00c6a9c0  FUN_00c6a9c0 =====

uint FUN_00c6a9c0(long param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ushort uVar4;
  uint uVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  void *pvVar9;
  size_t sVar10;
  void *__src;
  ulong uVar11;
  
  sVar10 = *param_2;
  uVar8 = param_2[1];
  uVar4 = *(ushort *)(param_1 + 0x20);
  uVar11 = sVar10 + 2;
  uVar7 = sVar10;
  if (uVar8 < uVar11) {
    uVar8 = uVar8 + (uVar8 >> 1);
    uVar1 = uVar11;
    if (uVar11 <= uVar8) {
      uVar1 = uVar8;
    }
    pvVar6 = operator_new__(uVar1);
    pvVar9 = (void *)param_2[2];
    if (pvVar9 == (void *)0x0) {
      param_2[2] = (ulong)pvVar6;
    }
    else {
      memcpy(pvVar6,pvVar9,sVar10);
      param_2[2] = (ulong)pvVar6;
      operator_delete__(pvVar9);
      uVar7 = *param_2;
    }
    param_2[1] = uVar1;
  }
  uVar8 = sVar10 + 4;
  *(ushort *)(param_2[2] + uVar7) = uVar4 >> 8 | (ushort)((uVar4 & 0xff00ff) << 8);
  uVar7 = param_2[1];
  *param_2 = uVar11;
  uVar4 = *(ushort *)(param_1 + 0x22);
  if (uVar7 < uVar8) {
    uVar7 = uVar7 + (uVar7 >> 1);
    uVar1 = uVar8;
    if (uVar8 <= uVar7) {
      uVar1 = uVar7;
    }
    pvVar6 = operator_new__(uVar1);
    pvVar9 = (void *)param_2[2];
    if (pvVar9 == (void *)0x0) {
      param_2[2] = (ulong)pvVar6;
    }
    else {
      memcpy(pvVar6,pvVar9,sVar10 + 2);
      param_2[2] = (ulong)pvVar6;
      operator_delete__(pvVar9);
      uVar11 = *param_2;
    }
    param_2[1] = uVar1;
  }
  *(ushort *)(param_2[2] + uVar11) = uVar4 >> 8 | (ushort)((uVar4 & 0xff00ff) << 8);
  *param_2 = uVar8;
  uVar11 = (ulong)*(char *)(param_1 + 0x3f);
  if ((long)uVar11 < 0) {
    if (*(long *)(param_1 + 0x30) != 0x10) goto LAB_00c6ab0c;
LAB_00c6aae8:
    uVar7 = uVar8;
    if (((uint)(int)*(char *)(param_1 + 0x3f) >> 7 & 1) != 0) {
LAB_00c6ab84:
      pvVar6 = *(void **)(param_1 + 0x28);
      sVar10 = *(size_t *)(param_1 + 0x30);
      goto joined_r0x00c6ab88;
    }
  }
  else {
    if (uVar11 == 0x10) goto LAB_00c6aae8;
LAB_00c6ab0c:
    uVar11 = param_2[1];
    uVar7 = sVar10 + 8;
    uVar5 = *(uint *)(param_1 + 0x44);
    if (uVar11 < uVar7) {
      uVar11 = uVar11 + (uVar11 >> 1);
      uVar1 = uVar7;
      if (uVar7 <= uVar11) {
        uVar1 = uVar11;
      }
      pvVar6 = operator_new__(uVar1);
      pvVar9 = (void *)param_2[2];
      if (pvVar9 == (void *)0x0) {
        param_2[2] = (ulong)pvVar6;
      }
      else {
        memcpy(pvVar6,pvVar9,uVar8);
        param_2[2] = (ulong)pvVar6;
        operator_delete__(pvVar9);
        uVar8 = *param_2;
      }
      param_2[1] = uVar1;
    }
    uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    *(uint *)(param_2[2] + uVar8) = uVar5 >> 0x10 | uVar5 << 0x10;
    *param_2 = uVar7;
    uVar11 = (ulong)*(byte *)(param_1 + 0x3f);
    if ((char)*(byte *)(param_1 + 0x3f) < '\0') goto LAB_00c6ab84;
  }
  pvVar6 = (void *)(param_1 + 0x28);
  sVar10 = uVar11 & 0xff;
joined_r0x00c6ab88:
  if (sVar10 != 0) {
    uVar8 = param_2[1];
    uVar11 = uVar7 + sVar10;
    if (uVar8 < uVar11) {
      uVar8 = uVar8 + (uVar8 >> 1);
      uVar1 = uVar11;
      if (uVar11 <= uVar8) {
        uVar1 = uVar8;
      }
      pvVar9 = operator_new__(uVar1);
      __src = (void *)param_2[2];
      if (__src == (void *)0x0) {
        param_2[2] = (ulong)pvVar9;
      }
      else {
        memcpy(pvVar9,__src,uVar7);
        param_2[2] = (ulong)pvVar9;
        operator_delete__(__src);
        uVar7 = *param_2;
      }
      param_2[1] = uVar1;
    }
    memcpy((void *)(param_2[2] + uVar7),pvVar6,sVar10);
    *param_2 = uVar11;
  }
  plVar2 = *(long **)(param_1 + 8);
  plVar3 = *(long **)(param_1 + 0x10);
  if (plVar2 == plVar3) {
    uVar5 = 1;
  }
  else {
    do {
      sVar10 = *param_2;
      uVar8 = param_2[1];
      uVar4 = *(ushort *)(*plVar2 + 8);
      uVar11 = sVar10 + 2;
      uVar7 = sVar10;
      if (uVar8 < uVar11) {
        uVar8 = uVar8 + (uVar8 >> 1);
        uVar1 = uVar11;
        if (uVar11 <= uVar8) {
          uVar1 = uVar8;
        }
        pvVar6 = operator_new__(uVar1);
        pvVar9 = (void *)param_2[2];
        if (pvVar9 == (void *)0x0) {
          param_2[2] = (ulong)pvVar6;
        }
        else {
          memcpy(pvVar6,pvVar9,sVar10);
          param_2[2] = (ulong)pvVar6;
          operator_delete__(pvVar9);
          uVar7 = *param_2;
        }
        param_2[1] = uVar1;
      }
      uVar8 = sVar10 + 4;
      *(ushort *)(param_2[2] + uVar7) = uVar4 >> 8 | (ushort)((uVar4 & 0xff00ff) << 8);
      *param_2 = uVar11;
      uVar7 = param_2[1];
      uVar4 = *(ushort *)(*plVar2 + 10);
      if (uVar7 < uVar8) {
        uVar7 = uVar7 + (uVar7 >> 1);
        uVar1 = uVar8;
        if (uVar8 <= uVar7) {
          uVar1 = uVar7;
        }
        pvVar6 = operator_new__(uVar1);
        pvVar9 = (void *)param_2[2];
        if (pvVar9 == (void *)0x0) {
          param_2[2] = (ulong)pvVar6;
        }
        else {
          memcpy(pvVar6,pvVar9,uVar11);
          param_2[2] = (ulong)pvVar6;
          operator_delete__(pvVar9);
          uVar11 = *param_2;
        }
        param_2[1] = uVar1;
      }
      *(ushort *)(param_2[2] + uVar11) = uVar4 >> 8 | (ushort)((uVar4 & 0xff00ff) << 8);
      *param_2 = uVar8;
      uVar5 = (**(code **)(*(long *)*plVar2 + 0x28))((long *)*plVar2,param_2);
    } while ((plVar2 + 1 != plVar3) && (plVar2 = plVar2 + 1, (uVar5 & 1) != 0));
  }
  return uVar5 & 1;
}


// ===== 00c6ad54  FUN_00c6ad54 =====

bool FUN_00c6ad54(long param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  
  bVar3 = false;
  if ((0x1b < param_2) && ((param_2 & 3) == 0)) {
    if ((*(int *)(param_1 + 4) != 0x42a41221) ||
       ((lVar1 = param_1 + param_2, *(short *)(lVar1 + -8) != 0x2880 ||
        (*(short *)(lVar1 + -6) != 0x400)))) {
      return false;
    }
    uVar2 = (*(uint *)(lVar1 + -4) & 0xff00ff00) >> 8 | (*(uint *)(lVar1 + -4) & 0xff00ff) << 8;
    uVar4 = FUN_00b00b80(0,param_1,param_2 - 8);
    bVar3 = ((uVar2 >> 0x10 | uVar2 << 0x10) ^ uVar4) == 0x5354554e;
  }
  return bVar3;
}


// ===== 00c6adf8  FUN_00c6adf8 =====

ulong FUN_00c6adf8(uint *param_1,long param_2,ushort *param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = 0;
  if ((0x13 < param_4) && ((param_4 & 3) == 0)) {
    if (*(int *)(param_3 + 2) != 0x42a41221) {
      return 0;
    }
    uVar2 = param_2 * 4;
    if (uVar2 != 0) {
      uVar3 = uVar2;
      do {
        uVar3 = uVar3 - 4;
        bVar1 = *param_1 == ((uint)(*param_3 >> 8) | (*param_3 & 0xff00ff) << 8);
        uVar2 = (ulong)bVar1;
        if (bVar1) break;
        param_1 = param_1 + 1;
      } while (uVar3 != 0);
    }
  }
  return uVar2 & 0xffffffff;
}


// ===== 00c6ae6c  FUN_00c6ae6c =====

uint FUN_00c6ae6c(long param_1)

{
  undefined8 *puVar1;
  short sVar2;
  long *plVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *local_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  plVar7 = (long *)operator_new(0x10);
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  puVar8 = *(undefined8 **)(param_1 + 0x18);
  sVar2 = *(short *)(param_1 + 0x22);
  *plVar7 = (long)&PTR_FUN_00d4e1f8;
  plVar7[1] = 0x48028;
  *(short *)(param_1 + 0x22) = sVar2 + 8;
  local_40 = plVar7;
  if (puVar1 < puVar8) {
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    local_40 = (long *)0x0;
    puVar8 = puVar1 + 1;
    *puVar1 = plVar7;
  }
  else {
    puVar8 = (undefined8 *)FUN_00c6e750(param_1 + 8,&local_40);
  }
  plVar3 = local_40;
  *(undefined8 **)(param_1 + 0x10) = puVar8;
  local_40 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  FUN_008792d8(&local_40);
  uVar5 = FUN_00c6a9c0(param_1,&local_40);
  if ((uVar5 & 1) != 0) {
    uVar6 = FUN_00b00b80(0,local_30,
                         (long)(int)(((int)local_40 - (uint)*(ushort *)((long)plVar7 + 10)) + -4));
    *(uint *)((long)plVar7 + 0xc) = uVar6 ^ 0x5354554e;
  }
  puVar4 = local_30;
  local_30 = (undefined1 *)0x0;
  if (puVar4 != (undefined1 *)0x0) {
    operator_delete__(puVar4);
  }
  return uVar5 & 1;
}


// ===== 00c6af90  FUN_00c6af90 =====

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00c6af90(long *param_1,long *param_2)

{
  undefined8 *******pppppppuVar1;
  undefined8 *puVar2;
  long lVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined8 *******pppppppuVar14;
  ushort local_a4 [2];
  undefined8 *******local_a0;
  ulong uStack_98;
  ulong local_90;
  int *local_88;
  undefined8 local_80;
  undefined4 local_74;
  long *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  
  lVar11 = param_2[2];
  if ((*param_2 + lVar11 == 0) && (param_2[3] != lVar11)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:2845: libc++ Hardening assertion __n == 0 || __s != nullptr failed: string::assign received nullptr\n"
              );
  }
  FUN_00547b08(param_1 + 9,*param_2 + lVar11,param_2[3] - lVar11);
  uVar8 = FUN_0087938c(param_2,param_1 + 4);
  if ((((uVar8 & 1) == 0) || ((short)param_1[4] < 0)) ||
     (uVar8 = FUN_0087938c(param_2,(long)param_1 + 0x22), (uVar8 & 1) == 0)) {
    return 0;
  }
  local_88 = (int *)0x0;
  local_80 = 0;
  uVar8 = FUN_00879628(param_2,&local_88,4);
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  local_a0 = (undefined8 *******)0x0;
  uStack_98 = 0;
  local_90 = 0;
  uVar8 = FUN_008795b0(param_2,&local_a0,0xc);
  if ((uVar8 & 1) != 0) {
    if (*local_88 != 0x42a41221) {
      FUN_00547994(&local_a0,0,local_88,local_80);
    }
    pppppppuVar14 = (undefined8 *******)(param_1 + 5);
    if ((undefined8 ********)pppppppuVar14 != &local_a0) {
      if (*(char *)((long)param_1 + 0x3f) < '\0') {
        uVar8 = uStack_98;
        pppppppuVar1 = local_a0;
        if (-1 < (long)local_90) {
          uVar8 = local_90 >> 0x38;
          pppppppuVar1 = &local_a0;
        }
        FUN_00547f08(param_1 + 5,pppppppuVar1,uVar8);
      }
      else if ((long)local_90 < 0) {
        FUN_00547fc0(param_1 + 5,local_a0,uStack_98);
      }
      else {
        param_1[6] = uStack_98;
        *pppppppuVar14 = local_a0;
        param_1[7] = local_90;
      }
    }
    lVar11 = (long)*(char *)((long)param_1 + 0x3f);
    if (lVar11 < 0) {
      pppppppuVar14 = (undefined8 *******)param_1[5];
      lVar11 = param_1[6];
    }
    pppppppuVar1 = (undefined8 *******)0x0;
    if (lVar11 != 0) {
      pppppppuVar1 = pppppppuVar14;
    }
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00879324(&local_70,pppppppuVar1);
    local_74 = 0xaaaaaaaa;
    uVar8 = FUN_008793d0(&local_70,&local_74);
    uVar13 = 0;
    while ((uVar8 & 1) != 0) {
      uVar13 = local_74 ^ uVar13;
      uVar8 = FUN_008793d0(&local_70,&local_74);
    }
    *(uint *)(param_1 + 8) = uVar13;
    if (param_2[3] - param_2[2] == (ulong)*(ushort *)((long)param_1 + 0x22)) {
      FUN_00c6b330(param_1 + 1,0);
      lVar11 = param_2[2];
      lVar3 = param_2[3];
      uVar4 = *(ushort *)((long)param_1 + 0x22);
      uVar8 = lVar3 - lVar11;
      while (lVar3 - (lVar11 + (ulong)uVar4) < uVar8) {
        uVar13 = local_74 >> 0x10;
        local_74 = CONCAT22((short)uVar13,0xaaaa);
        local_a4[0] = 0xaaaa;
        uVar8 = FUN_0087938c(param_2,&local_74);
        if (((uVar8 & 1) == 0) ||
           (uVar8 = FUN_0087938c(param_2,local_a4), uVar5 = local_a4[0], (uVar8 & 1) == 0))
        goto LAB_00c6b2e8;
        uVar6 = (ushort)local_74;
        local_70 = (long *)&DAT_aaaaaaaaaaaaaaaa;
        uVar9 = (**(code **)(*param_1 + 0x18))(param_1,(ushort)local_74);
        if ((int)uVar9 == 0) {
          if ((uVar6 >> 0xe & 1) == 0) {
            local_70 = (long *)0x0;
          }
          else {
            local_70 = (long *)operator_new(0x18);
            *(ushort *)(local_70 + 1) = uVar6;
            *(ushort *)((long)local_70 + 10) = uVar5;
            *local_70 = (long)&PTR_FUN_00d4e278;
            local_70[2] = 0;
            if (local_70 != (long *)0x0) goto LAB_00c6b23c;
          }
LAB_00c6b274:
          if ((local_a4[0] & 3) != 0) {
            local_a4[0] = (local_a4[0] & 0xfffc) + 4;
          }
          uVar8 = FUN_0087972c(param_2,local_a4[0]);
          if ((uVar8 & 1) == 0) {
LAB_00c6b2d0:
            plVar7 = local_70;
            local_70 = (long *)0x0;
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 8))();
            }
            goto LAB_00c6b2e8;
          }
        }
        else {
          local_70 = (long *)FUN_00c6b734(uVar9,uVar6,uVar5,param_1);
          if (local_70 == (long *)0x0) goto LAB_00c6b274;
LAB_00c6b23c:
          uVar8 = (**(code **)(*local_70 + 0x20))(local_70,param_2);
          plVar7 = local_70;
          if ((uVar8 & 1) == 0) goto LAB_00c6b2d0;
          puVar2 = (undefined8 *)param_1[2];
          if (puVar2 < (undefined8 *)param_1[3]) {
            if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            local_70 = (long *)0x0;
            puVar10 = puVar2 + 1;
            *puVar2 = plVar7;
          }
          else {
            puVar10 = (undefined8 *)FUN_00c6e750(param_1 + 1,&local_70);
          }
          param_1[2] = (long)puVar10;
        }
        plVar7 = local_70;
        local_70 = (long *)0x0;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 8))();
        }
        uVar8 = param_2[3] - param_2[2];
      }
      uVar12 = 1;
      goto LAB_00c6b2ec;
    }
  }
LAB_00c6b2e8:
  uVar12 = 0;
LAB_00c6b2ec:
  if ((long)local_90 < 0) {
    operator_delete(local_a0);
    return uVar12;
  }
  return uVar12;
}


// ===== 00c6b330  FUN_00c6b330 =====

void FUN_00c6b330(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  void *__src;
  void *pvVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  size_t __n;
  ulong uVar9;
  void *__dest;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  
  __src = (void *)*param_1;
  plVar10 = (long *)param_1[1];
  __n = (long)plVar10 - (long)__src;
  uVar12 = (long)__n >> 3;
  uVar7 = param_2 - uVar12;
  if (param_2 < uVar12 || uVar7 == 0) {
    if (param_2 < uVar12) {
      plVar11 = (long *)((long)__src + param_2 * 8);
      while (plVar11 != plVar10) {
        plVar10 = plVar10 + -1;
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        plVar4 = (long *)*plVar10;
        *plVar10 = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
      param_1[1] = plVar11;
    }
  }
  else {
    uVar9 = param_1[2] - (long)__src;
    if ((ulong)((long)uVar9 >> 3) < param_2) {
      if (param_2 >> 0x3d == 0) {
        uVar1 = (long)uVar9 >> 2;
        if ((ulong)((long)uVar9 >> 2) <= param_2) {
          uVar1 = param_2;
        }
        if (0x7ffffffffffffff7 < uVar9) {
          uVar1 = 0x1fffffffffffffff;
        }
        if (uVar1 >> 0x3d == 0) {
          pvVar3 = operator_new(uVar1 * 8);
          if (uVar7 * 8 == 0) {
            puVar13 = (undefined8 *)((long)pvVar3 + __n);
          }
          else {
            puVar13 = (undefined8 *)((long)pvVar3 + uVar7 * 8 + __n);
            uVar7 = (ulong)((long)__src + (-(long)pvVar3 - (long)plVar10)) >> 3;
            uVar9 = (param_2 * 8 - __n) - 8 >> 3;
            if (uVar9 <= uVar7) {
              uVar7 = uVar9;
            }
            if (uVar7 < 8) {
              puVar5 = (undefined8 *)((long)pvVar3 + __n);
            }
            else {
              puVar5 = (undefined8 *)((long)pvVar3 + __n);
              if ((((int)__src - (int)plVar10) - (int)pvVar3 & 7U) == 0) {
                uVar9 = uVar7 + 1 & 3;
                uVar2 = 4;
                if (uVar9 != 0) {
                  uVar2 = uVar9;
                }
                lVar6 = (uVar7 + 1) - uVar2;
                puVar8 = (undefined8 *)((long)pvVar3 + __n + 0x10);
                puVar5 = (undefined8 *)((long)pvVar3 + lVar6 * 8 + __n);
                do {
                  lVar6 = lVar6 + -4;
                  puVar8[-1] = 0;
                  puVar8[-2] = 0;
                  puVar8[1] = 0;
                  *puVar8 = 0;
                  puVar8 = puVar8 + 4;
                } while (lVar6 != 0);
              }
            }
            do {
              if (puVar5 == (undefined8 *)0x0) goto LAB_00c6b5a0;
              puVar8 = puVar5 + 1;
              *puVar5 = 0;
              puVar5 = puVar8;
            } while (puVar8 != puVar13);
          }
          __dest = (void *)((long)pvVar3 + uVar12 * -8 + __n);
          memcpy(__dest,__src,__n);
          *param_1 = __dest;
          param_1[1] = puVar13;
          param_1[2] = (void *)((long)pvVar3 + uVar1 * 8);
          if (__src == (void *)0x0) {
            return;
          }
          operator_delete(__src);
          return;
        }
      }
      else {
        FUN_00c6e848();
      }
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    plVar11 = plVar10;
    if ((uVar7 & 0x1fffffffffffffff) != 0) {
      plVar11 = plVar10 + uVar7;
      uVar12 = (param_2 * 8 - __n) - 8 >> 3;
      uVar7 = (ulong)-(long)plVar10 >> 3;
      if (uVar12 <= (ulong)-(long)plVar10 >> 3) {
        uVar7 = uVar12;
      }
      if ((5 < uVar7) && ((-(int)plVar10 & 7U) == 0)) {
        uVar12 = uVar7 + 1 & 3;
        uVar9 = 4;
        if (uVar12 != 0) {
          uVar9 = uVar12;
        }
        plVar4 = plVar10 + 2;
        lVar6 = (uVar7 + 1) - uVar9;
        plVar10 = plVar10 + lVar6;
        do {
          lVar6 = lVar6 + -4;
          plVar4[-1] = 0;
          plVar4[-2] = 0;
          plVar4[1] = 0;
          *plVar4 = 0;
          plVar4 = plVar4 + 4;
        } while (lVar6 != 0);
      }
      do {
        if (plVar10 == (long *)0x0) {
LAB_00c6b5a0:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        plVar4 = plVar10 + 1;
        *plVar10 = 0;
        plVar10 = plVar4;
      } while (plVar4 != plVar11);
    }
    param_1[1] = plVar11;
  }
  return;
}


// ===== 00c6b5d0  FUN_00c6b5d0 =====

void * FUN_00c6b5d0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x80);
  FUN_00c69b48(pvVar1,0,"0000000000000000",0x10);
  return pvVar1;
}


// ===== 00c6b614  FUN_00c6b614 =====

undefined8 FUN_00c6b614(undefined8 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0x8022) {
    if (param_2 < 10) {
      if (param_2 < 8) {
        if (param_2 == 1) {
          return 1;
        }
        if (param_2 == 6) {
          return 5;
        }
      }
      else {
        if (param_2 == 8) {
          return 5;
        }
        if (param_2 == 9) {
          return 6;
        }
      }
    }
    else {
      if (param_2 - 0x14U < 2) {
        return 5;
      }
      if (param_2 == 10) {
        return 7;
      }
      if (param_2 == 0x20) {
        return 2;
      }
    }
  }
  else {
    if (param_2 < 0xc059) {
      if (param_2 < 0x8028) {
        if (param_2 == 0x8022) {
          return 5;
        }
        if (param_2 != 0x8023) {
          return 0;
        }
        return 1;
      }
      if (param_2 == 0x8028) {
        return 3;
      }
      iVar1 = 0xc058;
    }
    else {
      if (0xc05c < param_2) {
        if (param_2 == 0xc05d) {
          return 4;
        }
        if (param_2 != 0xff00) {
          return 0;
        }
        return 3;
      }
      if (param_2 == 0xc059) {
        return 7;
      }
      iVar1 = 0xc05c;
    }
    if (param_2 == iVar1) {
      return 5;
    }
  }
  return 0;
}


// ===== 00c6b734  FUN_00c6b734 =====

undefined8 * FUN_00c6b734(int param_1,undefined2 param_2,undefined2 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)0x0;
  if (param_1 < 4) {
    if (param_1 == 1) {
      puVar3 = (undefined8 *)operator_new(0x58);
      *(undefined2 *)(puVar3 + 1) = param_2;
      *(undefined2 *)((long)puVar3 + 10) = param_3;
      *puVar3 = &PTR_FUN_00d4e178;
      FUN_007e8a64(puVar3 + 2);
    }
    else if (param_1 == 2) {
      puVar3 = (undefined8 *)operator_new(0x60);
      *(undefined2 *)(puVar3 + 1) = param_2;
      *(undefined2 *)((long)puVar3 + 10) = param_3;
      *puVar3 = &PTR_FUN_00d4e178;
      FUN_007e8a64(puVar3 + 2);
      puVar3[0xb] = param_4;
      *puVar3 = &PTR_FUN_00d4e1b8;
    }
    else if (param_1 == 3) {
      puVar3 = (undefined8 *)operator_new(0x10);
      *(undefined2 *)(puVar3 + 1) = param_2;
      *(undefined2 *)((long)puVar3 + 10) = 4;
      *puVar3 = &PTR_FUN_00d4e1f8;
      *(undefined4 *)((long)puVar3 + 0xc) = 0;
    }
  }
  else if (param_1 < 6) {
    if (param_1 == 4) {
      puVar3 = (undefined8 *)operator_new(0x18);
      *(undefined2 *)(puVar3 + 1) = param_2;
      *(undefined2 *)((long)puVar3 + 10) = 8;
      ppuVar2 = &PTR_FUN_00d4e238;
    }
    else {
      if (param_1 != 5) {
        return (undefined8 *)0x0;
      }
      puVar3 = (undefined8 *)operator_new(0x18);
      ppuVar2 = &PTR_FUN_00d4e278;
      *(undefined2 *)(puVar3 + 1) = param_2;
      *(undefined2 *)((long)puVar3 + 10) = param_3;
    }
    *puVar3 = ppuVar2;
    puVar3[2] = 0;
  }
  else if (param_1 == 6) {
    puVar3 = (undefined8 *)operator_new(0x28);
    *(undefined2 *)(puVar3 + 1) = param_2;
    *(undefined2 *)((long)puVar3 + 10) = param_3;
    *puVar3 = &PTR_FUN_00d4e2b8;
    *(undefined2 *)((long)puVar3 + 0xc) = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[2] = 0;
  }
  else if (param_1 == 7) {
    puVar3 = (undefined8 *)operator_new(0x18);
    *(undefined2 *)(puVar3 + 1) = param_2;
    *(undefined2 *)((long)puVar3 + 10) = param_3;
    *puVar3 = &PTR_FUN_00d4e2f8;
    puVar1 = (undefined8 *)operator_new(0x18);
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    puVar3[2] = puVar1;
  }
  return puVar3;
}


// ===== 00c6b8f4  FUN_00c6b8f4 =====

undefined4 FUN_00c6b8f4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar6;
  undefined4 uVar7;
  long *plVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined8 *puVar5;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_008792d8(&local_60);
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_008792d8(&local_80);
  plVar1 = *(long **)(param_1 + 0x10);
  for (plVar9 = *(long **)(param_1 + 8); plVar9 != plVar1; plVar9 = plVar9 + 1) {
    uVar3 = (**(code **)(param_3 + 0x10))(param_3,*(undefined2 *)(*plVar9 + 8));
    if ((uVar3 & 1) != 0) {
      if (*(undefined8 **)(param_2 + 8) == *(undefined8 **)(param_2 + 0x10)) goto LAB_00c6ba6c;
      puVar4 = *(undefined8 **)(param_2 + 8);
      while( true ) {
        puVar5 = puVar4 + 1;
        plVar8 = (long *)*puVar4;
        if (*(short *)(*plVar9 + 8) == (short)plVar8[1]) break;
        puVar4 = puVar5;
        if (puVar5 == *(undefined8 **)(param_2 + 0x10)) goto LAB_00c6ba6c;
      }
      if (plVar8 == (long *)0x0) goto LAB_00c6ba6c;
      local_60 = (undefined1 *)0x0;
      local_80 = (undefined1 *)0x0;
      (**(code **)(*(long *)*plVar9 + 0x28))((long *)*plVar9,&local_60);
      (**(code **)(*plVar8 + 0x28))(plVar8,&local_80);
      puVar10 = local_70;
      if (local_60 != local_80) goto LAB_00c6ba6c;
      iVar2 = memcmp(local_50,local_70,(size_t)local_60);
      if (iVar2 != 0) {
        uVar7 = 0;
        goto LAB_00c6ba74;
      }
    }
  }
  plVar9 = *(long **)(param_2 + 8);
  plVar1 = *(long **)(param_2 + 0x10);
  if (plVar9 == plVar1) {
    uVar7 = 1;
    puVar10 = local_70;
  }
  else {
    do {
      uVar3 = (**(code **)(param_3 + 0x10))(param_3,*(undefined2 *)(*plVar9 + 8));
      if ((uVar3 & 1) != 0) {
        if (*(long **)(param_1 + 8) == *(long **)(param_1 + 0x10)) goto LAB_00c6ba6c;
        plVar8 = *(long **)(param_1 + 8);
        while( true ) {
          plVar6 = plVar8 + 1;
          if (*(short *)(*plVar9 + 8) == *(short *)(*plVar8 + 8)) break;
          plVar8 = plVar6;
          if (plVar6 == *(long **)(param_1 + 0x10)) goto LAB_00c6ba6c;
        }
        if (*plVar8 == 0) goto LAB_00c6ba6c;
      }
      plVar9 = plVar9 + 1;
      uVar7 = 1;
      puVar10 = local_70;
    } while (plVar9 != plVar1);
  }
LAB_00c6ba74:
  local_70 = (undefined1 *)0x0;
  if (puVar10 != (undefined1 *)0x0) {
    operator_delete__(puVar10);
  }
  puVar10 = local_50;
  local_50 = (undefined1 *)0x0;
  if (puVar10 != (undefined1 *)0x0) {
    operator_delete__(puVar10);
  }
  return uVar7;
LAB_00c6ba6c:
  uVar7 = 0;
  puVar10 = local_70;
  goto LAB_00c6ba74;
}


// ===== 00c6bab4  FUN_00c6bab4 =====

void FUN_00c6bab4(undefined2 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *(undefined2 *)(puVar1 + 1) = param_1;
  *(undefined2 *)((long)puVar1 + 10) = 4;
  *puVar1 = &PTR_FUN_00d4e1f8;
  *(undefined4 *)((long)puVar1 + 0xc) = 0;
  return;
}


// ===== 00c6bafc  FUN_00c6bafc =====

void FUN_00c6bafc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  *(undefined2 *)((long)puVar1 + 0xc) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 1) = 0x40009;
  *puVar1 = &PTR_FUN_00d4e2b8;
  puVar1[4] = 0;
  return;
}


// ===== 00c6bb40  FUN_00c6bb40 =====

undefined8 * FUN_00c6bb40(undefined2 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  *(undefined2 *)(puVar1 + 1) = param_1;
  *(undefined2 *)((long)puVar1 + 10) = 0;
  *puVar1 = &PTR_FUN_00d4e2f8;
  puVar2 = (undefined8 *)operator_new(0x18);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  puVar1[2] = puVar2;
  return puVar1;
}


// ===== 00c6bba0  FUN_00c6bba0 =====

undefined8 * FUN_00c6bba0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  *(undefined4 *)(puVar1 + 1) = 10;
  *puVar1 = &PTR_FUN_00d4e2f8;
  puVar2 = (undefined8 *)operator_new(0x18);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  puVar1[2] = puVar2;
  return puVar1;
}


// ===== 00c6bbfc  FUN_00c6bbfc =====

void FUN_00c6bbfc(long param_1)

{
  undefined2 uVar1;
  long lVar2;
  undefined2 uVar3;
  
  FUN_007e8d84(param_1 + 0x10);
  lVar2 = FUN_007e8ea8(param_1 + 0x10);
  uVar3 = 0x14;
  if (*(int *)(lVar2 + 8) != 10) {
    uVar3 = 0;
  }
  uVar1 = 8;
  if (*(int *)(lVar2 + 8) != 2) {
    uVar1 = uVar3;
  }
  *(undefined2 *)(param_1 + 10) = uVar1;
  return;
}


// ===== 00c6bc50  FUN_00c6bc50 =====

undefined8 FUN_00c6bc50(void)

{
  return 1;
}


// ===== 00c6bc5c  FUN_00c6bc5c =====

undefined8 FUN_00c6bc5c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  void *local_a0 [2];
  char cStack_89;
  undefined **local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined2 local_34 [2];
  char local_18 [4];
  undefined1 local_14 [4];
  
  local_14[0] = 0xaa;
  uVar1 = FUN_0087934c(param_2,local_14);
  if ((uVar1 & 1) != 0) {
    local_18[0] = -0x56;
    uVar1 = FUN_0087934c(param_2,local_18);
    if ((uVar1 & 1) != 0) {
      local_34[0] = 0xaaaa;
      uVar1 = FUN_0087938c(param_2,local_34);
      if ((uVar1 & 1) != 0) {
        if (local_18[0] == '\x02') {
          puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
          local_b0 = &DAT_aaaaaaaaaaaaaaaa;
          if ((*(short *)(param_1 + 10) == 0x14) &&
             (uVar1 = FUN_008796ac(param_2,&local_b0,0x10), (uVar1 & 1) != 0)) {
            local_50 = 10;
            uStack_44 = SUB84(puStack_a8,0);
            uStack_40 = (undefined4)((ulong)puStack_a8 >> 0x20);
            local_4c = SUB84(local_b0,0);
            uStack_48 = (undefined4)((ulong)local_b0 >> 0x20);
            goto LAB_00c6bd88;
          }
        }
        else if (((local_18[0] == '\x01') &&
                 (local_b0 = (undefined1 *)CONCAT44(local_b0._4_4_,0xaaaaaaaa),
                 *(short *)(param_1 + 10) == 8)) &&
                (uVar1 = FUN_008796ac(param_2,&local_b0,4), (uVar1 & 1) != 0)) {
          uStack_48 = 0;
          uStack_44 = 0;
          uStack_40 = 0;
          local_50 = 2;
          local_4c = local_b0._0_4_;
LAB_00c6bd88:
          uStack_3c = 0xaaaaaaaa;
          local_58 = &PTR_FUN_00d385d8;
          FUN_007e8cac(local_a0,&local_58,local_34[0]);
          FUN_00c6bbfc(param_1,local_a0);
          if (cStack_89 < '\0') {
            operator_delete(local_a0[0]);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}


// ===== 00c6bdd4  FUN_00c6bdd4 =====

bool FUN_00c6bdd4(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  undefined1 uVar9;
  ulong uVar10;
  size_t sVar11;
  void *pvVar12;
  undefined1 auVar13 [16];
  
  lVar6 = FUN_007e8ea8(param_1 + 0x10);
  uVar3 = *(uint *)(lVar6 + 8);
  if ((uVar3 | 8) == 10) {
    sVar11 = *param_2;
    uVar2 = param_2[1];
    uVar10 = sVar11 + 1;
    uVar8 = sVar11;
    if (uVar2 < uVar10) {
      uVar2 = uVar2 + (uVar2 >> 1);
      uVar1 = uVar10;
      if (uVar10 <= uVar2) {
        uVar1 = uVar2;
      }
      pvVar7 = operator_new__(uVar1);
      pvVar12 = (void *)param_2[2];
      if (pvVar12 == (void *)0x0) {
        param_2[2] = (ulong)pvVar7;
      }
      else {
        memcpy(pvVar7,pvVar12,sVar11);
        param_2[2] = (ulong)pvVar7;
        operator_delete__(pvVar12);
        uVar8 = *param_2;
      }
      param_2[1] = uVar1;
    }
    uVar2 = sVar11 + 2;
    *(undefined1 *)(param_2[2] + uVar8) = 0;
    uVar8 = param_2[1];
    uVar9 = 2;
    if (uVar3 != 10) {
      uVar9 = 0;
    }
    if (uVar3 == 2) {
      uVar9 = 1;
    }
    *param_2 = uVar10;
    if (uVar8 < uVar2) {
      uVar8 = uVar8 + (uVar8 >> 1);
      uVar1 = uVar2;
      if (uVar2 <= uVar8) {
        uVar1 = uVar8;
      }
      pvVar7 = operator_new__(uVar1);
      pvVar12 = (void *)param_2[2];
      if (pvVar12 == (void *)0x0) {
        param_2[2] = (ulong)pvVar7;
      }
      else {
        memcpy(pvVar7,pvVar12,uVar10);
        param_2[2] = (ulong)pvVar7;
        operator_delete__(pvVar12);
        uVar10 = *param_2;
      }
      param_2[1] = uVar1;
    }
    *(undefined1 *)(param_2[2] + uVar10) = uVar9;
    *param_2 = uVar2;
    uVar4 = FUN_007e8eb4(param_1 + 0x10);
    sVar11 = *param_2;
    uVar2 = param_2[1];
    uVar10 = sVar11 + 2;
    if (uVar2 < uVar10) {
      uVar2 = uVar2 + (uVar2 >> 1);
      uVar8 = uVar10;
      if (uVar10 <= uVar2) {
        uVar8 = uVar2;
      }
      pvVar7 = operator_new__(uVar8);
      pvVar12 = (void *)param_2[2];
      if (pvVar12 == (void *)0x0) {
        param_2[2] = (ulong)pvVar7;
      }
      else {
        memcpy(pvVar7,pvVar12,sVar11);
        param_2[2] = (ulong)pvVar7;
        operator_delete__(pvVar12);
        sVar11 = *param_2;
      }
      param_2[1] = uVar8;
    }
    *(ushort *)(param_2[2] + sVar11) =
         (ushort)(uVar4 >> 8) & 0xff | (ushort)((uVar4 & 0xff00ff) << 8);
    *param_2 = uVar10;
    if (*(int *)(param_1 + 0x30) == 10) {
      FUN_007e8ea8(param_1 + 0x10);
      auVar13 = FUN_007e9e44();
      sVar11 = *param_2;
      uVar2 = param_2[1];
      uVar10 = sVar11 + 0x10;
      if (uVar2 < uVar10) {
        uVar2 = uVar2 + (uVar2 >> 1);
        uVar8 = uVar10;
        if (uVar10 <= uVar2) {
          uVar8 = uVar2;
        }
        pvVar7 = operator_new__(uVar8);
        pvVar12 = (void *)param_2[2];
        if (pvVar12 == (void *)0x0) {
          param_2[2] = (ulong)pvVar7;
        }
        else {
          memcpy(pvVar7,pvVar12,sVar11);
          param_2[2] = (ulong)pvVar7;
          operator_delete__(pvVar12);
          sVar11 = *param_2;
        }
        param_2[1] = uVar8;
      }
      *(undefined1 (*) [16])(param_2[2] + sVar11) = auVar13;
      *param_2 = uVar10;
    }
    else if (*(int *)(param_1 + 0x30) == 2) {
      FUN_007e8ea8(param_1 + 0x10);
      uVar5 = FUN_007e9e58();
      sVar11 = *param_2;
      uVar2 = param_2[1];
      uVar10 = sVar11 + 4;
      if (uVar2 < uVar10) {
        uVar2 = uVar2 + (uVar2 >> 1);
        uVar8 = uVar10;
        if (uVar10 <= uVar2) {
          uVar8 = uVar2;
        }
        pvVar7 = operator_new__(uVar8);
        pvVar12 = (void *)param_2[2];
        if (pvVar12 == (void *)0x0) {
          param_2[2] = (ulong)pvVar7;
        }
        else {
          memcpy(pvVar7,pvVar12,sVar11);
          param_2[2] = (ulong)pvVar7;
          operator_delete__(pvVar12);
          sVar11 = *param_2;
        }
        param_2[1] = uVar8;
      }
      *(undefined4 *)(param_2[2] + sVar11) = uVar5;
      *param_2 = uVar10;
    }
  }
  else {
    uVar10 = FUN_004249b0();
    if ((uVar10 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../api/transport/stun.cc",0x1d1b,
                   "Error writing address attribute: unknown family.");
    }
  }
  return uVar3 == 2 || uVar3 == 10;
}


// ===== 00c6c0e8  FUN_00c6c0e8 =====

void FUN_00c6c0e8(undefined8 *param_1,undefined2 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  int iVar2;
  long lVar3;
  undefined2 uVar4;
  
  *(undefined2 *)(param_1 + 1) = param_2;
  *(undefined2 *)((long)param_1 + 10) = 0;
  *param_1 = &PTR_FUN_00d4e178;
  FUN_007e8a64(param_1 + 2);
  FUN_007e8d84(param_1 + 2,param_3);
  lVar3 = FUN_007e8ea8(param_1 + 2);
  iVar2 = *(int *)(lVar3 + 8);
  *param_1 = &PTR_FUN_00d4e1b8;
  uVar4 = 0x14;
  if (iVar2 != 10) {
    uVar4 = 0;
  }
  uVar1 = 8;
  if (iVar2 != 2) {
    uVar1 = uVar4;
  }
  *(undefined2 *)((long)param_1 + 10) = uVar1;
  param_1[0xb] = 0;
  return;
}


// ===== 00c6c16c  FUN_00c6c16c =====

undefined8 FUN_00c6c16c(void)

{
  return 2;
}


// ===== 00c6c178  FUN_00c6c178 =====

void FUN_00c6c178(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  return;
}


// ===== 00c6c184  FUN_00c6c184 =====

void FUN_00c6c184(undefined8 *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong extraout_x0;
  uint extraout_w1;
  uint extraout_var;
  uint *puVar5;
  undefined **local_50;
  int local_48;
  undefined8 local_44;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (*(long *)(param_2 + 0x58) != 0) {
    uStack_38 = 0xaaaaaaaa;
    uStack_34 = 0xaaaaaaaa;
    lVar4 = FUN_007e8ea8(param_2 + 0x10);
    local_48 = *(int *)(lVar4 + 8);
    local_44 = *(undefined8 *)(lVar4 + 0xc);
    local_50 = &PTR_FUN_00d385d8;
    uStack_3c = (undefined4)*(undefined8 *)(lVar4 + 0x14);
    uStack_38 = (undefined4)((ulong)*(undefined8 *)(lVar4 + 0x14) >> 0x20);
    if (local_48 == 10) {
      FUN_007e9e44(&local_50);
      lVar4 = *(long *)(param_2 + 0x58);
      puVar5 = (uint *)(lVar4 + 0x28);
      if (*(char *)(lVar4 + 0x3f) < '\0') {
        if (*(long *)(lVar4 + 0x30) == 0xc) {
          puVar5 = *(uint **)puVar5;
          goto LAB_00c6c248;
        }
      }
      else if (*(char *)(lVar4 + 0x3f) == '\f') {
LAB_00c6c248:
        uVar3 = *puVar5;
        uVar1 = puVar5[1];
        uVar2 = puVar5[2];
        *param_1 = &PTR_FUN_00d385d8;
        *(undefined4 *)(param_1 + 1) = 10;
        *(ulong *)((long)param_1 + 0xc) =
             (extraout_x0 & 0xffffffff | (ulong)(uVar3 ^ (uint)(extraout_x0 >> 0x20)) << 0x20) ^
             0x42a41221;
        *(ulong *)((long)param_1 + 0x14) = CONCAT44(uVar2 ^ extraout_var,uVar1 ^ extraout_w1);
        return;
      }
    }
    else if (local_48 == 2) {
      uVar3 = FUN_007e9e58(&local_50);
      *param_1 = &PTR_FUN_00d385d8;
      param_1[2] = 0;
      *(undefined4 *)(param_1 + 3) = 0;
      *(undefined4 *)(param_1 + 1) = 2;
      *(uint *)((long)param_1 + 0xc) = uVar3 ^ 0x42a41221;
      return;
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_00d385d8;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}


// ===== 00c6c2b4  FUN_00c6c2b4 =====

uint FUN_00c6c2b4(long param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  undefined2 uVar5;
  void *local_98 [2];
  char cStack_81;
  undefined1 auStack_50 [24];
  undefined1 *local_38;
  
  uVar3 = FUN_00c6bc5c();
  if ((uVar3 & 1) != 0) {
    uVar2 = FUN_007e8eb4(param_1 + 0x10);
    local_38 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00c6c184(auStack_50,param_1);
    FUN_007e8cac(local_98,auStack_50,uVar2 ^ 0x2112);
    FUN_007e8d84(param_1 + 0x10,local_98);
    lVar4 = FUN_007e8ea8(param_1 + 0x10);
    uVar5 = 0x14;
    if (*(int *)(lVar4 + 8) != 10) {
      uVar5 = 0;
    }
    uVar1 = 8;
    if (*(int *)(lVar4 + 8) != 2) {
      uVar1 = uVar5;
    }
    *(undefined2 *)(param_1 + 10) = uVar1;
    if (cStack_81 < '\0') {
      operator_delete(local_98[0]);
    }
  }
  return uVar3 & 1;
}


// ===== 00c6c378  FUN_00c6c378 =====

bool FUN_00c6c378(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  undefined1 uVar9;
  size_t sVar10;
  void *pvVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_80 [8];
  int local_78;
  undefined1 *local_68;
  
  lVar6 = FUN_007e8ea8(param_1 + 0x10);
  if ((*(uint *)(lVar6 + 8) & 0xfffffff7) == 2) {
    local_68 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00c6c184(auStack_80,param_1);
    bVar3 = local_78 != 0;
    if (local_78 != 0) {
      sVar10 = *param_2;
      uVar2 = param_2[1];
      uVar8 = sVar10 + 1;
      if (uVar2 < uVar8) {
        uVar2 = uVar2 + (uVar2 >> 1);
        uVar1 = uVar8;
        if (uVar8 <= uVar2) {
          uVar1 = uVar2;
        }
        pvVar7 = operator_new__(uVar1);
        pvVar11 = (void *)param_2[2];
        if (pvVar11 == (void *)0x0) {
          param_2[2] = (ulong)pvVar7;
        }
        else {
          memcpy(pvVar7,pvVar11,sVar10);
          param_2[2] = (ulong)pvVar7;
          operator_delete__(pvVar11);
          sVar10 = *param_2;
        }
        param_2[1] = uVar1;
      }
      *(undefined1 *)(param_2[2] + sVar10) = 0;
      *param_2 = uVar8;
      lVar6 = FUN_007e8ea8(param_1 + 0x10);
      sVar10 = *param_2;
      uVar8 = param_2[1];
      uVar9 = 2;
      if (*(int *)(lVar6 + 8) != 10) {
        uVar9 = 0;
      }
      uVar2 = sVar10 + 1;
      if (*(int *)(lVar6 + 8) == 2) {
        uVar9 = 1;
      }
      if (uVar8 < uVar2) {
        uVar8 = uVar8 + (uVar8 >> 1);
        uVar1 = uVar2;
        if (uVar2 <= uVar8) {
          uVar1 = uVar8;
        }
        pvVar7 = operator_new__(uVar1);
        pvVar11 = (void *)param_2[2];
        if (pvVar11 == (void *)0x0) {
          param_2[2] = (ulong)pvVar7;
        }
        else {
          memcpy(pvVar7,pvVar11,sVar10);
          param_2[2] = (ulong)pvVar7;
          operator_delete__(pvVar11);
          sVar10 = *param_2;
        }
        param_2[1] = uVar1;
      }
      *(undefined1 *)(param_2[2] + sVar10) = uVar9;
      *param_2 = uVar2;
      uVar4 = FUN_007e8eb4(param_1 + 0x10);
      sVar10 = *param_2;
      uVar2 = param_2[1];
      uVar8 = sVar10 + 2;
      if (uVar2 < uVar8) {
        uVar2 = uVar2 + (uVar2 >> 1);
        uVar1 = uVar8;
        if (uVar8 <= uVar2) {
          uVar1 = uVar2;
        }
        pvVar7 = operator_new__(uVar1);
        pvVar11 = (void *)param_2[2];
        if (pvVar11 == (void *)0x0) {
          param_2[2] = (ulong)pvVar7;
        }
        else {
          memcpy(pvVar7,pvVar11,sVar10);
          param_2[2] = (ulong)pvVar7;
          operator_delete__(pvVar11);
          sVar10 = *param_2;
        }
        param_2[1] = uVar1;
      }
      *(ushort *)(param_2[2] + sVar10) =
           (ushort)((uVar4 ^ 0x2112) >> 8) & 0xff | (ushort)(((uVar4 ^ 0x2112) & 0xff00ff) << 8);
      *param_2 = uVar8;
      if (local_78 == 10) {
        auVar12 = FUN_007e9e44(auStack_80);
        sVar10 = *param_2;
        uVar2 = param_2[1];
        uVar8 = sVar10 + 0x10;
        if (uVar2 < uVar8) {
          uVar2 = uVar2 + (uVar2 >> 1);
          uVar1 = uVar8;
          if (uVar8 <= uVar2) {
            uVar1 = uVar2;
          }
          pvVar7 = operator_new__(uVar1);
          pvVar11 = (void *)param_2[2];
          if (pvVar11 == (void *)0x0) {
            param_2[2] = (ulong)pvVar7;
          }
          else {
            memcpy(pvVar7,pvVar11,sVar10);
            param_2[2] = (ulong)pvVar7;
            operator_delete__(pvVar11);
            sVar10 = *param_2;
          }
          param_2[1] = uVar1;
        }
        *(undefined1 (*) [16])(param_2[2] + sVar10) = auVar12;
      }
      else {
        if (local_78 != 2) {
          return bVar3;
        }
        uVar5 = FUN_007e9e58(auStack_80);
        sVar10 = *param_2;
        uVar2 = param_2[1];
        uVar8 = sVar10 + 4;
        if (uVar2 < uVar8) {
          uVar2 = uVar2 + (uVar2 >> 1);
          uVar1 = uVar8;
          if (uVar8 <= uVar2) {
            uVar1 = uVar2;
          }
          pvVar7 = operator_new__(uVar1);
          pvVar11 = (void *)param_2[2];
          if (pvVar11 == (void *)0x0) {
            param_2[2] = (ulong)pvVar7;
          }
          else {
            memcpy(pvVar7,pvVar11,sVar10);
            param_2[2] = (ulong)pvVar7;
            operator_delete__(pvVar11);
            sVar10 = *param_2;
          }
          param_2[1] = uVar1;
        }
        *(undefined4 *)(param_2[2] + sVar10) = uVar5;
      }
      *param_2 = uVar8;
    }
  }
  else {
    uVar8 = FUN_004249b0();
    if ((uVar8 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../api/transport/stun.cc",0x1fcb,
                   "Error writing xor-address attribute: unknown family.");
      bVar3 = false;
    }
    else {
      bVar3 = false;
    }
  }
  return bVar3;
}


// ===== 00c6c6b0  FUN_00c6c6b0 =====

void FUN_00c6c6b0(undefined8 *param_1,undefined2 param_2,undefined4 param_3)

{
  *(undefined2 *)(param_1 + 1) = param_2;
  *(undefined2 *)((long)param_1 + 10) = 4;
  *param_1 = &PTR_FUN_00d4e1f8;
  *(undefined4 *)((long)param_1 + 0xc) = param_3;
  return;
}


// ===== 00c6c6d4  FUN_00c6c6d4 =====

undefined8 FUN_00c6c6d4(void)

{
  return 3;
}


// ===== 00c6c6e0  FUN_00c6c6e0 =====

undefined8 FUN_00c6c6e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(short *)(param_1 + 10) == 4) {
    uVar1 = FUN_008793d0(param_2,param_1 + 0xc);
    return uVar1;
  }
  return 0;
}


// ===== 00c6c708  FUN_00c6c708 =====

undefined8 FUN_00c6c708(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  void *__dest;
  size_t __n;
  void *__src;
  
  __n = *param_2;
  uVar3 = param_2[1];
  uVar4 = *(uint *)(param_1 + 0xc);
  uVar1 = __n + 4;
  if (uVar3 < uVar1) {
    uVar3 = uVar3 + (uVar3 >> 1);
    uVar2 = uVar1;
    if (uVar1 <= uVar3) {
      uVar2 = uVar3;
    }
    __dest = operator_new__(uVar2);
    __src = (void *)param_2[2];
    if (__src == (void *)0x0) {
      param_2[2] = (ulong)__dest;
    }
    else {
      memcpy(__dest,__src,__n);
      param_2[2] = (ulong)__dest;
      operator_delete__(__src);
      __n = *param_2;
    }
    param_2[1] = uVar2;
  }
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  *(uint *)(param_2[2] + __n) = uVar4 >> 0x10 | uVar4 << 0x10;
  *param_2 = uVar1;
  return 1;
}


// ===== 00c6c7b8  FUN_00c6c7b8 =====

void FUN_00c6c7b8(undefined8 *param_1,undefined2 param_2,undefined8 param_3)

{
  *(undefined2 *)(param_1 + 1) = param_2;
  *(undefined2 *)((long)param_1 + 10) = 8;
  *param_1 = &PTR_FUN_00d4e238;
  param_1[2] = param_3;
  return;
}


// ===== 00c6c7dc  FUN_00c6c7dc =====

undefined8 FUN_00c6c7dc(void)

{
  return 4;
}


// ===== 00c6c7e8  FUN_00c6c7e8 =====

undefined8 FUN_00c6c7e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(short *)(param_1 + 10) == 8) {
    uVar1 = FUN_00879410(param_2,param_1 + 0x10);
    return uVar1;
  }
  return 0;
}


// ===== 00c6c810  FUN_00c6c810 =====

undefined8 FUN_00c6c810(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  void *__dest;
  size_t __n;
  void *__src;
  ulong uVar4;
  
  __n = *param_2;
  uVar3 = param_2[1];
  uVar4 = *(ulong *)(param_1 + 0x10);
  uVar1 = __n + 8;
  if (uVar3 < uVar1) {
    uVar3 = uVar3 + (uVar3 >> 1);
    uVar2 = uVar1;
    if (uVar1 <= uVar3) {
      uVar2 = uVar3;
    }
    __dest = operator_new__(uVar2);
    __src = (void *)param_2[2];
    if (__src == (void *)0x0) {
      param_2[2] = (ulong)__dest;
    }
    else {
      memcpy(__dest,__src,__n);
      param_2[2] = (ulong)__dest;
      operator_delete__(__src);
      __n = *param_2;
    }
    param_2[1] = uVar2;
  }
  uVar3 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
  uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
  *(ulong *)(param_2[2] + __n) = uVar3 >> 0x20 | uVar3 << 0x20;
  *param_2 = uVar1;
  return 1;
}


// ===== 00c6c8c0  FUN_00c6c8c0 =====

void FUN_00c6c8c0(undefined8 *param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 1) = param_2;
  *(undefined2 *)((long)param_1 + 10) = 0;
  *param_1 = &PTR_FUN_00d4e278;
  param_1[2] = 0;
  return;
}


// ===== 00c6c8e0  FUN_00c6c8e0 =====

void FUN_00c6c8e0(undefined8 *param_1,undefined2 param_2,void *param_3,ulong param_4)

{
  void *__dest;
  
  *(undefined2 *)(param_1 + 1) = param_2;
  *(undefined2 *)((long)param_1 + 10) = 0;
  *param_1 = &PTR_FUN_00d4e278;
  param_1[2] = 0;
  __dest = operator_new__(param_4);
  memcpy(__dest,param_3,param_4);
  param_1[2] = __dest;
  *(short *)((long)param_1 + 10) = (short)param_4;
  return;
}


// ===== 00c6c94c  FUN_00c6c94c =====

void FUN_00c6c94c(undefined8 *param_1,undefined2 param_2,void *param_3,ulong param_4)

{
  void *__dest;
  
  *(undefined2 *)(param_1 + 1) = param_2;
  *(undefined2 *)((long)param_1 + 10) = 0;
  *param_1 = &PTR_FUN_00d4e278;
  param_1[2] = 0;
  __dest = operator_new__(param_4);
  memcpy(__dest,param_3,param_4);
  param_1[2] = __dest;
  *(short *)((long)param_1 + 10) = (short)param_4;
  return;
}


// ===== 00c6c9b8  FUN_00c6c9b8 =====

void FUN_00c6c9b8(undefined8 *param_1,undefined2 param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  void *__dest;
  undefined1 *__dest_00;
  undefined1 *__n;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  
  *(undefined2 *)(param_1 + 1) = param_2;
  *(undefined2 *)((long)param_1 + 10) = 0;
  *param_1 = &PTR_FUN_00d4e278;
  param_1[2] = 0;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_008792d8(&local_80);
  puVar4 = (uint *)param_3[1];
  __n = local_80;
  __dest_00 = local_70;
  for (puVar3 = (uint *)*param_3; local_80 = __n, local_70 = __dest_00, puVar3 != puVar4;
      puVar3 = puVar3 + 1) {
    puVar1 = __n + 4;
    uVar5 = *puVar3;
    puVar2 = puStack_78;
    if (puStack_78 < puVar1) {
      puVar2 = puVar1;
      if (puVar1 <= puStack_78 + ((ulong)puStack_78 >> 1)) {
        puVar2 = puStack_78 + ((ulong)puStack_78 >> 1);
      }
      __dest_00 = (undefined1 *)operator_new__((ulong)puVar2);
      puVar6 = local_70;
      if (local_70 != (undefined1 *)0x0) {
        memcpy(__dest_00,local_70,(size_t)__n);
        local_70 = __dest_00;
        operator_delete__(puVar6);
        __n = local_80;
        __dest_00 = local_70;
      }
    }
    local_70 = __dest_00;
    puStack_78 = puVar2;
    uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    *(uint *)(local_70 + (long)__n) = uVar5 >> 0x10 | uVar5 << 0x10;
    __n = puVar1;
    __dest_00 = local_70;
  }
  __dest = operator_new__((ulong)__n);
  memcpy(__dest,__dest_00,(size_t)__n);
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete__((void *)param_1[2]);
    __dest_00 = local_70;
  }
  param_1[2] = __dest;
  *(short *)((long)param_1 + 10) = (short)__n;
  local_70 = (undefined1 *)0x0;
  if (__dest_00 != (undefined1 *)0x0) {
    operator_delete__(__dest_00);
  }
  return;
}


// ===== 00c6cb0c  FUN_00c6cb0c =====

void FUN_00c6cb0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d4e278;
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete__((void *)param_1[2]);
    return;
  }
  return;
}


// ===== 00c6cb30  FUN_00c6cb30 =====

void FUN_00c6cb30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d4e278;
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete__((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00c6cb74  FUN_00c6cb74 =====

undefined8 FUN_00c6cb74(void)

{
  return 5;
}


// ===== 00c6cb80  FUN_00c6cb80 =====

void FUN_00c6cb80(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined8 local_40;
  undefined4 *puStack_38;
  undefined4 *local_30;
  undefined4 local_4;
  
  if ((*(ushort *)(param_2 + 10) & 3) == 0) {
    local_30 = (undefined4 *)0x0;
    uVar1 = 0;
    if (*(ushort *)(param_2 + 10) != 0) {
      uVar1 = *(undefined8 *)(param_2 + 0x10);
    }
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_38 = (undefined4 *)0x0;
    local_40 = 0;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00879324(&local_60,uVar1);
    local_4 = 0xaaaaaaaa;
    uVar3 = FUN_008793d0(&local_60,&local_4);
    uVar1 = 0;
    puVar4 = (undefined4 *)0x0;
    puVar2 = (undefined4 *)0x0;
    while ((uVar3 & 1) != 0) {
      if (puStack_38 < local_30) {
        if (puStack_38 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar4 = puStack_38 + 1;
        *puStack_38 = local_4;
      }
      else {
        puVar4 = (undefined4 *)FUN_00852528(&local_40,&local_4);
      }
      puStack_38 = puVar4;
      uVar3 = FUN_008793d0(&local_60,&local_4);
      uVar1 = local_40;
      puVar4 = puStack_38;
      puVar2 = local_30;
    }
    param_1[2] = puVar2;
    param_1[1] = puVar4;
    *param_1 = uVar1;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}


// ===== 00c6cc78  FUN_00c6cc78 =====

uint FUN_00c6cc78(long param_1,undefined8 param_2)

{
  void *pvVar1;
  ushort uVar2;
  uint uVar3;
  void *pvVar4;
  ulong uVar5;
  
  uVar2 = *(ushort *)(param_1 + 10);
  pvVar4 = operator_new__((ulong)uVar2);
  *(void **)(param_1 + 0x10) = pvVar4;
  pvVar1 = (void *)0x0;
  if (uVar2 != 0) {
    pvVar1 = pvVar4;
  }
  uVar3 = FUN_008796ac(param_2,pvVar1,(ulong)uVar2);
  if (((uVar3 & 1) != 0) && (uVar5 = (ulong)*(ushort *)(param_1 + 10) & 3, (int)uVar5 != 0)) {
    FUN_0087972c(param_2,4 - uVar5);
  }
  return uVar3 & 1;
}


// ===== 00c6ccf4  FUN_00c6ccf4 =====

undefined8 FUN_00c6ccf4(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ushort uVar3;
  ushort uVar4;
  void *pvVar5;
  ulong uVar6;
  size_t __n;
  void *pvVar7;
  size_t sVar8;
  void *__src;
  undefined4 local_44;
  
  uVar3 = *(ushort *)(param_1 + 8);
  uVar4 = *(ushort *)(param_1 + 10);
  if (uVar3 < 0x14) {
    if (uVar3 == 6) goto joined_r0x00c6cd74;
    if (uVar3 == 8) {
      if (uVar4 != 0x14) {
        return 0;
      }
      goto LAB_00c6cd7c;
    }
  }
  else if (((uVar3 == 0x14) || (uVar3 == 0x15)) || (uVar3 == 0x8022)) {
joined_r0x00c6cd74:
    if (0x1fc < uVar4) {
      return 0;
    }
  }
  if (uVar4 == 0) {
    return 1;
  }
LAB_00c6cd7c:
  sVar8 = *param_2;
  uVar2 = param_2[1];
  pvVar7 = *(void **)(param_1 + 0x10);
  uVar6 = sVar8 + uVar4;
  if (uVar2 < uVar6) {
    uVar2 = uVar2 + (uVar2 >> 1);
    uVar1 = uVar6;
    if (uVar6 <= uVar2) {
      uVar1 = uVar2;
    }
    pvVar5 = operator_new__(uVar1);
    __src = (void *)param_2[2];
    if (__src == (void *)0x0) {
      param_2[2] = (ulong)pvVar5;
    }
    else {
      memcpy(pvVar5,__src,sVar8);
      param_2[2] = (ulong)pvVar5;
      operator_delete__(__src);
      sVar8 = *param_2;
    }
    param_2[1] = uVar1;
  }
  memcpy((void *)(param_2[2] + sVar8),pvVar7,(ulong)uVar4);
  *param_2 = uVar6;
  uVar6 = (ulong)*(ushort *)(param_1 + 10) & 3;
  if ((int)uVar6 != 0) {
    local_44 = 0;
    __n = 4 - uVar6;
    sVar8 = *param_2;
    uVar2 = param_2[1];
    uVar6 = sVar8 + __n;
    if (uVar2 < uVar6) {
      uVar2 = uVar2 + (uVar2 >> 1);
      uVar1 = uVar6;
      if (uVar6 <= uVar2) {
        uVar1 = uVar2;
      }
      pvVar7 = operator_new__(uVar1);
      pvVar5 = (void *)param_2[2];
      if (pvVar5 == (void *)0x0) {
        param_2[2] = (ulong)pvVar7;
      }
      else {
        memcpy(pvVar7,pvVar5,sVar8);
        param_2[2] = (ulong)pvVar7;
        operator_delete__(pvVar5);
        sVar8 = *param_2;
      }
      param_2[1] = uVar1;
    }
    memcpy((void *)(param_2[2] + sVar8),&local_44,__n);
    *param_2 = uVar6;
  }
  return 1;
}


// ===== 00c6ceac  FUN_00c6ceac =====

void FUN_00c6ceac(long param_1,int param_2)

{
  char cVar1;
  
  cVar1 = (char)(param_2 / 100);
  *(char *)(param_1 + 0xc) = cVar1;
  *(char *)(param_1 + 0xd) = (char)param_2 + cVar1 * -100;
  return;
}


// ===== 00c6ced8  FUN_00c6ced8 =====

void FUN_00c6ced8(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)(param_1 + 0x10);
  uVar2 = (uint)*(ushort *)(param_2 + 1);
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    uVar2 = (int)*(char *)((long)param_2 + 0x17);
  }
  *(short *)(param_1 + 10) = (short)uVar2 + 4;
  if (puVar1 != param_2) {
    bVar4 = *(byte *)((long)param_2 + 0x17);
    if (*(char *)(param_1 + 0x27) < '\0') {
      uVar3 = param_2[1];
      puVar5 = (undefined8 *)*param_2;
      if (-1 < (char)bVar4) {
        uVar3 = (ulong)bVar4;
        puVar5 = param_2;
      }
      FUN_00547f08(puVar1,puVar5,uVar3);
      return;
    }
    if ((char)bVar4 < '\0') {
      FUN_00547fc0(puVar1,*param_2,param_2[1]);
      return;
    }
    uVar7 = param_2[1];
    uVar6 = *param_2;
    *(undefined8 *)(param_1 + 0x20) = param_2[2];
    *(undefined8 *)(param_1 + 0x18) = uVar7;
    *puVar1 = uVar6;
  }
  return;
}


// ===== 00c6cf4c  FUN_00c6cf4c =====

void FUN_00c6cf4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d4e2b8;
  if (-1 < *(char *)((long)param_1 + 0x27)) {
    return;
  }
  operator_delete((void *)param_1[2]);
  return;
}


// ===== 00c6cf7c  FUN_00c6cf7c =====

void FUN_00c6cf7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d4e2b8;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00c6cfcc  FUN_00c6cfcc =====

undefined8 FUN_00c6cfcc(void)

{
  return 6;
}


// ===== 00c6cfd8  FUN_00c6cfd8 =====

undefined8 FUN_00c6cfd8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  uint local_24;
  
  if (*(ushort *)(param_1 + 10) < 4) {
    return 0;
  }
  local_24 = 0xaaaaaaaa;
  uVar1 = FUN_008793d0(param_2,&local_24);
  if ((uVar1 & 1) != 0) {
    if ((0x7ff < local_24) && (uVar1 = FUN_004249b0(), (uVar1 & 1) == 0)) {
      FUN_00623bb0(&DAT_001f4e98,"../../api/transport/stun.cc",0x26b3,"error-code bits not zero");
    }
    *(char *)(param_1 + 0xd) = (char)local_24;
    *(byte *)(param_1 + 0xc) = (byte)(local_24 >> 8) & 7;
    uVar1 = FUN_008795b0(param_2,param_1 + 0x10,(ulong)*(ushort *)(param_1 + 10) - 4);
    if ((uVar1 & 1) != 0) {
      uVar1 = (ulong)*(ushort *)(param_1 + 10) & 3;
      if ((int)uVar1 != 0) {
        FUN_0087972c(param_2,4 - uVar1);
      }
      return 1;
    }
  }
  return 0;
}


// ===== 00c6d0bc  FUN_00c6d0bc =====

undefined8 FUN_00c6d0bc(long param_1,ulong *param_2)

{
  ulong uVar1;
  ushort uVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  ulong __n;
  size_t sVar6;
  void *pvVar7;
  void *__src;
  undefined4 local_44;
  
  sVar6 = *param_2;
  uVar5 = param_2[1];
  uVar2 = *(ushort *)(param_1 + 0xc);
  __n = sVar6 + 4;
  if (uVar5 < __n) {
    uVar5 = uVar5 + (uVar5 >> 1);
    uVar4 = __n;
    if (__n <= uVar5) {
      uVar4 = uVar5;
    }
    pvVar3 = operator_new__(uVar4);
    pvVar7 = (void *)param_2[2];
    if (pvVar7 == (void *)0x0) {
      param_2[2] = (ulong)pvVar3;
    }
    else {
      memcpy(pvVar3,pvVar7,sVar6);
      param_2[2] = (ulong)pvVar3;
      operator_delete__(pvVar7);
      sVar6 = *param_2;
    }
    param_2[1] = uVar4;
  }
  *(uint *)(param_2[2] + sVar6) = (uVar2 & 0xff00ff | (uint)(uVar2 >> 8) << 8) << 0x10;
  *param_2 = __n;
  sVar6 = (size_t)*(char *)(param_1 + 0x27);
  if ((long)sVar6 < 0) {
    pvVar3 = *(void **)(param_1 + 0x10);
    sVar6 = *(size_t *)(param_1 + 0x18);
  }
  else {
    pvVar3 = (void *)(param_1 + 0x10);
  }
  if (sVar6 != 0) {
    uVar4 = param_2[1];
    uVar5 = sVar6 + __n;
    if (uVar4 < uVar5) {
      uVar4 = uVar4 + (uVar4 >> 1);
      uVar1 = uVar5;
      if (uVar5 <= uVar4) {
        uVar1 = uVar4;
      }
      pvVar7 = operator_new__(uVar1);
      __src = (void *)param_2[2];
      if (__src == (void *)0x0) {
        param_2[2] = (ulong)pvVar7;
      }
      else {
        memcpy(pvVar7,__src,__n);
        param_2[2] = (ulong)pvVar7;
        operator_delete__(__src);
        __n = *param_2;
      }
      param_2[1] = uVar1;
    }
    memcpy((void *)(param_2[2] + __n),pvVar3,sVar6);
    *param_2 = uVar5;
    __n = uVar5;
  }
  uVar5 = (ulong)*(ushort *)(param_1 + 10) & 3;
  if ((int)uVar5 != 0) {
    local_44 = 0;
    sVar6 = 4 - uVar5;
    uVar4 = param_2[1];
    uVar5 = __n + sVar6;
    if (uVar4 < uVar5) {
      uVar4 = uVar4 + (uVar4 >> 1);
      uVar1 = uVar5;
      if (uVar5 <= uVar4) {
        uVar1 = uVar4;
      }
      pvVar3 = operator_new__(uVar1);
      pvVar7 = (void *)param_2[2];
      if (pvVar7 == (void *)0x0) {
        param_2[2] = (ulong)pvVar3;
      }
      else {
        memcpy(pvVar3,pvVar7,__n);
        param_2[2] = (ulong)pvVar3;
        operator_delete__(pvVar7);
        __n = *param_2;
      }
      param_2[1] = uVar1;
    }
    memcpy((void *)(param_2[2] + __n),&local_44,sVar6);
    *param_2 = uVar5;
  }
  return 1;
}


// ===== 00c6d29c  FUN_00c6d29c =====

void FUN_00c6d29c(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)param_1[2];
  *param_1 = &PTR_FUN_00d4e2f8;
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  pvVar1 = (void *)*puVar5;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)puVar5[1];
    uVar4 = (ulong)((long)pvVar2 + ((long)pvVar2 << 0x3f) + -2) >> 1;
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3f) - ((long)pvVar1 - (long)pvVar2)) >> 1;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (uint)pvVar2 | (uint)pvVar2) & 1) == 0)) {
      uVar3 = uVar3 & 0x7ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -2);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -2);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    puVar5[1] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(puVar5);
  return;
}


// ===== 00c6d370  FUN_00c6d370 =====

void FUN_00c6d370(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)param_1[2];
  *param_1 = &PTR_FUN_00d4e2f8;
  if (puVar5 != (undefined8 *)0x0) {
    pvVar1 = (void *)*puVar5;
    if (pvVar1 != (void *)0x0) {
      pvVar2 = (void *)puVar5[1];
      uVar4 = (ulong)((long)pvVar2 + ((long)pvVar2 << 0x3f) + -2) >> 1;
      uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3f) - ((long)pvVar1 - (long)pvVar2)) >> 1;
      if (uVar4 <= uVar3) {
        uVar3 = uVar4;
      }
      if ((1 < uVar3) && ((((int)pvVar1 - (uint)pvVar2 | (uint)pvVar2) & 1) == 0)) {
        uVar3 = uVar3 & 0x7ffffffffffffffe;
        pvVar2 = (void *)((long)pvVar2 + uVar3 * -2);
        do {
          uVar3 = uVar3 - 2;
        } while (uVar3 != 0);
      }
      while (pvVar2 != pvVar1) {
        pvVar2 = (void *)((long)pvVar2 + -2);
        if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      puVar5[1] = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(puVar5);
  }
  operator_delete(param_1);
  return;
}


// ===== 00c6d444  FUN_00c6d444 =====

undefined8 FUN_00c6d444(void)

{
  return 7;
}


// ===== 00c6d450  FUN_00c6d450 =====

long FUN_00c6d450(long param_1)

{
  return (*(long **)(param_1 + 0x10))[1] - **(long **)(param_1 + 0x10) >> 1;
}


// ===== 00c6d468  FUN_00c6d468 =====

undefined2 FUN_00c6d468(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = **(long **)(param_1 + 0x10);
  if ((ulong)(long)param_2 < (ulong)((*(long **)(param_1 + 0x10))[1] - lVar1 >> 1)) {
    return *(undefined2 *)(lVar1 + (long)param_2 * 2);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 00c6d4ac  FUN_00c6d4ac =====

void FUN_00c6d4ac(long param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  long lVar3;
  undefined2 local_24 [2];
  
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = *(undefined2 **)(lVar3 + 8);
  local_24[0] = param_2;
  if (puVar1 < *(undefined2 **)(lVar3 + 0x10)) {
    if (puVar1 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar2 = puVar1 + 1;
    *puVar1 = param_2;
  }
  else {
    puVar2 = (undefined2 *)FUN_005dd418(lVar3,local_24);
  }
  *(undefined2 **)(lVar3 + 8) = puVar2;
  *(ushort *)(param_1 + 10) =
       (short)(*(undefined4 **)(param_1 + 0x10))[2] - (short)**(undefined4 **)(param_1 + 0x10) &
       0xfffe;
  return;
}


// ===== 00c6d534  FUN_00c6d534 =====

void FUN_00c6d534(long param_1,ulong param_2,undefined2 param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x10);
  param_2 = param_2 & 0xffff;
  lVar2 = *plVar1;
  if ((ulong)(plVar1[1] - lVar2 >> 1) <= param_2) {
    FUN_00c6d5c8(plVar1,param_2 + 1);
    lVar2 = **(long **)(param_1 + 0x10);
    if ((ulong)((*(long **)(param_1 + 0x10))[1] - lVar2 >> 1) <= param_2) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                );
    }
  }
  *(undefined2 *)(lVar2 + param_2 * 2) = param_3;
  *(ushort *)(param_1 + 10) =
       (short)(*(undefined4 **)(param_1 + 0x10))[2] - (short)**(undefined4 **)(param_1 + 0x10) &
       0xfffe;
  return;
}


// ===== 00c6d5c8  FUN_00c6d5c8 =====

void FUN_00c6d5c8(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  void *__src;
  void *pvVar3;
  undefined2 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  size_t __n;
  ulong uVar8;
  void *__dest;
  uint uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  ulong uVar12;
  
  __src = (void *)*param_1;
  puVar4 = (undefined2 *)param_1[1];
  __n = (long)puVar4 - (long)__src;
  uVar12 = (long)__n >> 1;
  uVar6 = param_2 - uVar12;
  uVar9 = (uint)puVar4;
  if (param_2 < uVar12 || uVar6 == 0) {
    if (param_2 < uVar12) {
      puVar11 = (undefined2 *)((long)__src + param_2 * 2);
      uVar6 = (ulong)(((long)puVar11 - (long)puVar4 << 0x3f) - ((long)puVar11 - (long)puVar4)) >> 1;
      uVar12 = (ulong)((long)puVar4 + ((long)puVar4 << 0x3f) + -2) >> 1;
      if (uVar12 <= uVar6) {
        uVar6 = uVar12;
      }
      if ((1 < uVar6) && ((((int)__src - uVar9 | uVar9) & 1) == 0)) {
        uVar6 = uVar6 & 0x7ffffffffffffffe;
        puVar4 = puVar4 + -uVar6;
        do {
          uVar6 = uVar6 - 2;
        } while (uVar6 != 0);
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
      param_1[1] = puVar11;
    }
  }
  else {
    uVar8 = param_1[2] - (long)__src;
    if ((ulong)((long)uVar8 >> 1) < param_2) {
      if ((long)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d4754();
      }
      uVar1 = uVar8;
      if (uVar8 <= param_2) {
        uVar1 = param_2;
      }
      if (0x7ffffffffffffffd < uVar8) {
        uVar1 = 0x7fffffffffffffff;
      }
      if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar3 = operator_new(uVar1 * 2);
      if (uVar6 * 2 == 0) {
        puVar11 = (undefined2 *)((long)pvVar3 + __n);
      }
      else {
        puVar11 = (undefined2 *)((long)pvVar3 + uVar6 * 2 + __n);
        uVar6 = (ulong)((long)__src + (-(long)pvVar3 - (long)puVar4)) >> 1;
        uVar8 = (param_2 * 2 - __n) - 2 >> 1;
        if (uVar8 <= uVar6) {
          uVar6 = uVar8;
        }
        if (uVar6 < 0x10) {
          puVar4 = (undefined2 *)((long)pvVar3 + __n);
        }
        else {
          puVar4 = (undefined2 *)((long)pvVar3 + __n);
          if ((((int)__src - uVar9) - (int)pvVar3 & 1) == 0) {
            uVar8 = uVar6 + 1 & 0xf;
            uVar2 = 0x10;
            if (uVar8 != 0) {
              uVar2 = uVar8;
            }
            lVar5 = (uVar6 + 1) - uVar2;
            puVar7 = (undefined8 *)((long)pvVar3 + __n + 0x10);
            puVar4 = (undefined2 *)((long)pvVar3 + lVar5 * 2 + __n);
            do {
              lVar5 = lVar5 + -0x10;
              puVar7[-1] = 0;
              puVar7[-2] = 0;
              puVar7[1] = 0;
              *puVar7 = 0;
              puVar7 = puVar7 + 4;
            } while (lVar5 != 0);
          }
        }
        do {
          if (puVar4 == (undefined2 *)0x0) {
LAB_00c6d84c:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puVar10 = puVar4 + 1;
          *puVar4 = 0;
          puVar4 = puVar10;
        } while (puVar10 != puVar11);
      }
      __dest = (void *)((long)pvVar3 + uVar12 * -2 + __n);
      memcpy(__dest,__src,__n);
      *param_1 = __dest;
      param_1[1] = puVar11;
      param_1[2] = (void *)((long)pvVar3 + uVar1 * 2);
      if (__src != (void *)0x0) {
        operator_delete(__src);
        return;
      }
    }
    else {
      puVar11 = puVar4;
      if ((uVar6 & 0x7fffffffffffffff) != 0) {
        puVar11 = puVar4 + uVar6;
        uVar12 = (param_2 * 2 - __n) - 2 >> 1;
        uVar6 = (ulong)-(long)puVar4 >> 1;
        if (uVar12 <= (ulong)-(long)puVar4 >> 1) {
          uVar6 = uVar12;
        }
        if ((0xf < uVar6) && (((ulong)puVar4 & 1) == 0)) {
          uVar12 = uVar6 + 1 & 0xf;
          uVar8 = 0x10;
          if (uVar12 != 0) {
            uVar8 = uVar12;
          }
          puVar7 = (undefined8 *)(puVar4 + 8);
          lVar5 = (uVar6 + 1) - uVar8;
          puVar4 = puVar4 + lVar5;
          do {
            lVar5 = lVar5 + -0x10;
            puVar7[-1] = 0;
            puVar7[-2] = 0;
            puVar7[1] = 0;
            *puVar7 = 0;
            puVar7 = puVar7 + 4;
          } while (lVar5 != 0);
        }
        do {
          if (puVar4 == (undefined2 *)0x0) goto LAB_00c6d84c;
          puVar10 = puVar4 + 1;
          *puVar4 = 0;
          puVar4 = puVar10;
        } while (puVar10 != puVar11);
      }
      param_1[1] = puVar11;
    }
  }
  return;
}


// ===== 00c6d868  FUN_00c6d868 =====

undefined8 FUN_00c6d868(long param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined2 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined2 local_24 [2];
  
  uVar2 = *(ushort *)(param_1 + 10);
  if ((uVar2 & 1) == 0) {
    if (1 < uVar2) {
      uVar7 = 0;
      do {
        local_24[0] = 0xaaaa;
        uVar4 = FUN_0087938c(param_2,local_24);
        if ((uVar4 & 1) == 0) goto LAB_00c6d918;
        lVar6 = *(long *)(param_1 + 0x10);
        puVar1 = *(undefined2 **)(lVar6 + 8);
        if (puVar1 < *(undefined2 **)(lVar6 + 0x10)) {
          if (puVar1 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puVar5 = puVar1 + 1;
          *puVar1 = local_24[0];
        }
        else {
          puVar5 = (undefined2 *)FUN_005dd418(lVar6,local_24);
        }
        *(undefined2 **)(lVar6 + 8) = puVar5;
        uVar7 = uVar7 + 1;
        uVar2 = *(ushort *)(param_1 + 10);
      } while (uVar7 < uVar2 >> 1);
    }
    if ((uVar2 & 3) != 0) {
      FUN_0087972c(param_2,4 - (uVar2 & 3));
    }
    uVar3 = 1;
  }
  else {
LAB_00c6d918:
    uVar3 = 0;
  }
  return uVar3;
}


// ===== 00c6d948  FUN_00c6d948 =====

undefined8 FUN_00c6d948(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ushort uVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  size_t __n;
  ulong uVar7;
  size_t __n_00;
  void *pvVar8;
  ulong uVar9;
  undefined4 local_44;
  
  lVar5 = **(long **)(param_1 + 0x10);
  if ((*(long **)(param_1 + 0x10))[1] != lVar5) {
    uVar9 = 0;
    uVar7 = *param_2;
    do {
      uVar6 = param_2[1];
      uVar1 = uVar7 + 2;
      uVar3 = *(ushort *)(lVar5 + uVar9 * 2);
      if (uVar6 < uVar1) {
        uVar6 = uVar6 + (uVar6 >> 1);
        uVar2 = uVar1;
        if (uVar1 <= uVar6) {
          uVar2 = uVar6;
        }
        pvVar4 = operator_new__(uVar2);
        pvVar8 = (void *)param_2[2];
        if (pvVar8 == (void *)0x0) {
          param_2[2] = (ulong)pvVar4;
        }
        else {
          memcpy(pvVar4,pvVar8,uVar7);
          param_2[2] = (ulong)pvVar4;
          operator_delete__(pvVar8);
          uVar7 = *param_2;
        }
        param_2[1] = uVar2;
      }
      uVar9 = uVar9 + 1;
      *(ushort *)(param_2[2] + uVar7) = uVar3 >> 8 | (ushort)((uVar3 & 0xff00ff) << 8);
      *param_2 = uVar1;
      lVar5 = **(long **)(param_1 + 0x10);
      uVar7 = uVar1;
    } while (uVar9 < (ulong)((*(long **)(param_1 + 0x10))[1] - lVar5 >> 1));
  }
  uVar9 = (ulong)*(ushort *)(param_1 + 10) & 3;
  if ((int)uVar9 != 0) {
    local_44 = 0;
    __n = 4 - uVar9;
    __n_00 = *param_2;
    uVar7 = param_2[1];
    uVar9 = __n_00 + __n;
    if (uVar7 < uVar9) {
      uVar7 = uVar7 + (uVar7 >> 1);
      uVar1 = uVar9;
      if (uVar9 <= uVar7) {
        uVar1 = uVar7;
      }
      pvVar4 = operator_new__(uVar1);
      pvVar8 = (void *)param_2[2];
      if (pvVar8 == (void *)0x0) {
        param_2[2] = (ulong)pvVar4;
      }
      else {
        memcpy(pvVar4,pvVar8,__n_00);
        param_2[2] = (ulong)pvVar4;
        operator_delete__(pvVar8);
        __n_00 = *param_2;
      }
      param_2[1] = uVar1;
    }
    memcpy((void *)(param_2[2] + __n_00),&local_44,__n);
    *param_2 = uVar9;
  }
  return 1;
}


// ===== 00c6dac8  FUN_00c6dac8 =====

void FUN_00c6dac8(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *local_58 [2];
  char cStack_41;
  void *local_40;
  undefined8 uStack_38;
  long local_30;
  
  if (param_2 < 0x101) {
    if (param_2 < 9) {
      if (param_2 < 4) {
        if (param_2 == 1) {
          pcVar2 = "STUN BINDING request";
        }
        else {
          if (param_2 != 3) goto code_r0x00c6dcc0;
          pcVar2 = "TURN ALLOCATE request";
        }
      }
      else if (param_2 == 4) {
        pcVar2 = "TURN REFRESH request";
      }
      else {
        if (param_2 != 8) goto code_r0x00c6dcc0;
        pcVar2 = "TURN CREATE PERMISSION request";
      }
    }
    else if (param_2 < 0x16) {
      if (param_2 == 9) {
        pcVar2 = "TURN CHANNEL BIND request";
      }
      else {
        if (param_2 != 0x11) goto code_r0x00c6dcc0;
        pcVar2 = "STUN BINDING indication";
      }
    }
    else if (param_2 == 0x16) {
      pcVar2 = "TURN SEND INDICATION";
    }
    else {
      if (param_2 != 0x17) goto code_r0x00c6dcc0;
      pcVar2 = "TURN DATA INDICATION";
    }
  }
  else if (param_2 < 0x200) {
    switch(param_2) {
    case 0x101:
      pcVar2 = "STUN BINDING response";
      break;
    default:
code_r0x00c6dcc0:
      FUN_005490bc(local_58);
      puVar1 = (undefined8 *)FUN_00547994(local_58,0,"UNKNOWN<",8);
      uStack_38 = puVar1[1];
      local_40 = (void *)*puVar1;
      local_30 = puVar1[2];
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
      puVar1 = (undefined8 *)FUN_00547cac(&local_40,&DAT_001ddf7b,1);
      uVar4 = *puVar1;
      uVar3 = puVar1[2];
      param_1[1] = puVar1[1];
      *param_1 = uVar4;
      param_1[2] = uVar3;
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
    case 0x103:
      pcVar2 = "TURN ALLOCATE response";
      break;
    case 0x104:
      pcVar2 = "TURN REFRESH response";
      break;
    case 0x108:
      pcVar2 = "TURN CREATE PERMISSION response";
      break;
    case 0x109:
      pcVar2 = "TURN CHANNEL BIND response";
      break;
    case 0x111:
      pcVar2 = "STUN BINDING error response";
      break;
    case 0x113:
      pcVar2 = "TURN ALLOCATE error response";
      break;
    case 0x114:
      pcVar2 = "TURN REFRESH error response";
      break;
    case 0x118:
      pcVar2 = "TURN CREATE PERMISSION error response";
      break;
    case 0x119:
      pcVar2 = "TURN CHANNEL BIND error response";
    }
  }
  else if (param_2 == 0x200) {
    pcVar2 = "GOOG PING request";
  }
  else if (param_2 == 0x300) {
    pcVar2 = "GOOG PING response";
  }
  else {
    if (param_2 != 0x310) goto code_r0x00c6dcc0;
    pcVar2 = "GOOG PING error response";
  }
  FUN_005d3510(param_1,pcVar2);
  return;
}


// ===== 00c6dd68  FUN_00c6dd68 =====

uint FUN_00c6dd68(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 | 0x100;
  if ((param_1 & 0x110) != 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// ===== 00c6dd80  FUN_00c6dd80 =====

uint FUN_00c6dd80(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 | 0x110;
  if ((param_1 & 0x110) != 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// ===== 00c6dd98  FUN_00c6dd98 =====

bool FUN_00c6dd98(uint param_1)

{
  return ((param_1 ^ 0xffffffff) & 0x110) == 0;
}


// ===== 00c6ddac  FUN_00c6ddac =====

void FUN_00c6ddac(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  size_t sVar8;
  ulong uVar9;
  undefined8 ****ppppuVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 ***local_c8;
  ulong uStack_c0;
  undefined8 local_b8;
  undefined8 ***local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  undefined8 **local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = (undefined8 ***)&DAT_aaaaaaaaaaaaaaaa;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    FUN_005478d8(&local_b0,*param_1,param_1[1]);
    bVar3 = local_a0._7_1_;
    if (-1 < (long)local_a0) goto LAB_00c6de0c;
LAB_00c6de34:
    puVar11 = (undefined1 *)(((ulong)local_a0 & 0x7fffffffffffffff) - 1);
    puVar12 = puStack_a8;
    if (puStack_a8 == puVar11) {
LAB_00c6de48:
      FUN_0054774c(&local_b0,puVar11,1,puVar11,puVar11,0,0);
      puVar12 = puVar11;
    }
    puStack_a8 = puVar12 + 1;
    ppppuVar10 = (undefined8 ****)local_b0;
  }
  else {
    puStack_a8 = (undefined1 *)param_1[1];
    local_b0 = (undefined8 ***)*param_1;
    puVar11 = (undefined1 *)param_1[2];
    local_a0._7_1_ = (byte)((ulong)puVar11 >> 0x38);
    bVar3 = local_a0._7_1_;
    local_a0 = puVar11;
    if ((long)puVar11 < 0) goto LAB_00c6de34;
LAB_00c6de0c:
    if (bVar3 == 0x16) {
      puVar11 = (undefined1 *)0x16;
      goto LAB_00c6de48;
    }
    puVar12 = (undefined1 *)(ulong)bVar3;
    local_a0 = (undefined1 *)(CONCAT17(bVar3 + 1,(undefined7)local_a0) & 0x7fffffffffffffff);
    ppppuVar10 = &local_b0;
  }
  *(undefined2 *)((long)ppppuVar10 + (long)puVar12) = 0x3a;
  uVar9 = param_2[1];
  puVar6 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar9 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar6 = param_2;
  }
  FUN_00547cac(&local_b0,puVar6,uVar9);
  puVar11 = (undefined1 *)(ulong)local_a0._7_1_;
  if ((long)local_a0 < 0) {
    puVar11 = (undefined1 *)(((ulong)local_a0 & 0x7fffffffffffffff) - 1);
    if (puStack_a8 == puVar11) goto LAB_00c6dee4;
  }
  else {
    if (local_a0._7_1_ != 0x16) {
      local_a0 = (undefined1 *)
                 (CONCAT17(local_a0._7_1_ + 1,(undefined7)local_a0) & 0x7fffffffffffffff);
      ppppuVar10 = &local_b0;
      goto LAB_00c6df28;
    }
    puVar11 = (undefined1 *)0x16;
LAB_00c6dee4:
    FUN_0054774c(&local_b0,puVar11,1,puVar11,puVar11,0,0);
    puStack_a8 = puVar11;
  }
  puVar11 = puStack_a8;
  ppppuVar10 = (undefined8 ****)local_b0;
  puStack_a8 = puStack_a8 + 1;
LAB_00c6df28:
  *(undefined2 *)((long)ppppuVar10 + (long)puVar11) = 0x3a;
  uVar9 = param_3[1];
  puVar6 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar9 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar6 = param_3;
  }
  FUN_00547cac(&local_b0,puVar6,uVar9);
  puVar7 = PTR_DAT_00d52920;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  sVar8 = strlen(PTR_DAT_00d52920);
  puVar11 = puStack_a8;
  ppppuVar10 = (undefined8 ****)local_b0;
  if (-1 < (long)local_a0) {
    puVar11 = (undefined1 *)((ulong)local_a0 >> 0x38);
    ppppuVar10 = &local_b0;
  }
  uVar9 = FUN_00833658(puVar7,sVar8,ppppuVar10,puVar11,&local_90,0x40);
  if (uVar9 != 0) {
    if (0x7ffffffffffffff6 < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_005d45ec();
    }
    if (uVar9 < 0x17) {
      local_b8 = CONCAT17((char)uVar9,(undefined7)local_b8);
      ppppuVar10 = &local_c8;
    }
    else {
      uVar1 = (uVar9 & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      ppppuVar10 = (undefined8 ****)operator_new(uVar2);
      local_b8 = uVar2 | 0x8000000000000000;
      local_c8 = ppppuVar10;
      uStack_c0 = uVar9;
    }
    if ((undefined8 ****)((long)ppppuVar10 + uVar9) < ppppuVar10) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((ppppuVar10 <= &local_90) && (&local_90 < (undefined8 ****)((long)ppppuVar10 + uVar9))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memcpy(ppppuVar10,&local_90,uVar9);
    cVar4 = *(char *)((long)param_4 + 0x17);
    *(undefined1 *)((long)ppppuVar10 + uVar9) = 0;
    if (cVar4 < '\0') {
      operator_delete((void *)*param_4);
    }
    param_4[1] = uStack_c0;
    *param_4 = local_c8;
    param_4[2] = local_b8;
  }
  if ((long)local_a0 < 0) {
    operator_delete(local_b0);
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9 != 0);
  }
  return;
}


// ===== 00c6e0d0  FUN_00c6e0d0 =====

undefined8 FUN_00c6e0d0(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_2 < 0x8022) {
    switch(param_2) {
    case 1:
      return 1;
    case 6:
    case 8:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x18:
    case 0x1a:
    case 0x22:
      return 5;
    case 9:
      return 6;
    case 10:
      return 7;
    case 0xc:
    case 0xd:
    case 0x19:
      return uVar1;
    case 0x12:
    case 0x16:
    case 0x20:
      return 2;
    }
  }
  else if (param_2 < 0xc059) {
    if (param_2 < 0x8028) {
      if (param_2 == 0x8022) {
        return 5;
      }
      if (param_2 == 0x8023) {
        return 1;
      }
    }
    else {
      if (param_2 == 0x8028) {
        return uVar1;
      }
      if (param_2 == 0xc058) {
        return 5;
      }
    }
  }
  else if (param_2 < 0xc05d) {
    if (param_2 == 0xc059) {
      return 7;
    }
    if (param_2 == 0xc05c) {
      return 5;
    }
  }
  else {
    if (param_2 == 0xc05d) {
      return 4;
    }
    if (param_2 == 0xff00) {
      return uVar1;
    }
  }
  return 0;
}


// ===== 00c6e1ec  FUN_00c6e1ec =====

undefined8 * FUN_00c6e1ec(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x80);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
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
  FUN_00c69b48(puVar1,0,"0000000000000000",0x10);
  *puVar1 = &PTR_FUN_00d4e338;
  return puVar1;
}


// ===== 00c6e250  FUN_00c6e250 =====

undefined8 FUN_00c6e250(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = 0x8022;
  uVar1 = 3;
  if (param_2 < 0x8023) {
    if (param_2 < 0x14) {
      if (param_2 < 8) {
        if (param_2 == 1) {
          return 1;
        }
        if (param_2 != 6) {
          return 0;
        }
        return 5;
      }
      if (param_2 == 8) {
        return 5;
      }
      if (param_2 != 9) {
        if (param_2 != 10) {
          return 0;
        }
        return 7;
      }
      return 6;
    }
    if (param_2 < 0x24) {
      if (param_2 - 0x14U < 2) {
        return 5;
      }
      if (param_2 != 0x20) {
        return 0;
      }
      return 2;
    }
    if (param_2 == 0x24) {
      return uVar1;
    }
    if (param_2 == 0x25) {
      return 5;
    }
  }
  else {
    if (param_2 < 0xc058) {
      if (param_2 < 0x8029) {
        if (param_2 == 0x8023) {
          return 1;
        }
        iVar2 = 0x8028;
      }
      else {
        if (param_2 - 0x8029U < 2) {
          return 4;
        }
        if (param_2 == 0xc001) {
          return uVar1;
        }
        iVar2 = 0xc057;
      }
      if (param_2 != iVar2) {
        return 0;
      }
      return uVar1;
    }
    if (param_2 < 0xc05c) {
      if (param_2 == 0xc058) {
        return 5;
      }
      if (param_2 != 0xc059) {
        return 0;
      }
      return 7;
    }
    if (param_2 == 0xff00) {
      return uVar1;
    }
    if (param_2 == 0xc05d) {
      return 4;
    }
    iVar2 = 0xc05c;
  }
  if (param_2 != iVar2) {
    return 0;
  }
  return 5;
}


// ===== 00c6e3b0  FUN_00c6e3b0 =====

undefined8 * FUN_00c6e3b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x80);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
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
  FUN_00c69b48(puVar1,0,"0000000000000000",0x10);
  *puVar1 = &PTR_FUN_00d4e368;
  return puVar1;
}


// ===== 00c6e414  FUN_00c6e414 =====

long * FUN_00c6e414(long *param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  plVar3 = (long *)(**(code **)(*param_1 + 0x10))();
  if (plVar3 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    local_30 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_008792d8(&local_40);
    uVar4 = FUN_00c6a9c0(param_1,&local_40);
    if ((uVar4 & 1) == 0) {
      plVar6 = (long *)0x0;
      plVar5 = plVar3;
    }
    else {
      puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
      local_60 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00879334(&local_60,&local_40);
      uVar4 = FUN_00c6af90(plVar3,&local_60);
      bVar2 = (uVar4 & 1) == 0;
      plVar6 = plVar3;
      if (bVar2) {
        plVar6 = (long *)0x0;
      }
      plVar5 = (long *)0x0;
      if (bVar2) {
        plVar5 = plVar3;
      }
    }
    puVar1 = local_30;
    local_30 = (undefined1 *)0x0;
    if (puVar1 != (undefined1 *)0x0) {
      operator_delete__(puVar1);
    }
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
  return plVar6;
}


// ===== 00c6e4dc  FUN_00c6e4dc =====

void FUN_00c6e4dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d4e178;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00c6e52c  FUN_00c6e52c =====

void FUN_00c6e52c(void)

{
  return;
}


// ===== 00c6e534  FUN_00c6e534 =====

void FUN_00c6e534(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d4e178;
  if (-1 < *(char *)((long)param_1 + 0x27)) {
    return;
  }
  operator_delete((void *)param_1[2]);
  return;
}


// ===== 00c6e564  FUN_00c6e564 =====

void FUN_00c6e564(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d4e178;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00c6e5b4  FUN_00c6e5b4 =====

void FUN_00c6e5b4(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00c6e5c0  FUN_00c6e5c0 =====

void FUN_00c6e5c0(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00c6e5cc  FUN_00c6e5cc =====

void FUN_00c6e5cc(void *param_1)

{
  FUN_00c6e5fc();
  operator_delete(param_1);
  return;
}


// ===== 00c6e5fc  FUN_00c6e5fc =====

void FUN_00c6e5fc(undefined8 *param_1)

{
  char cVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  *param_1 = &PTR_FUN_00d4e148;
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    operator_delete((void *)param_1[0xd]);
    cVar1 = *(char *)((long)param_1 + 0x5f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x5f);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[9]);
    cVar1 = *(char *)((long)param_1 + 0x3f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x3f);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[5]);
    plVar4 = (long *)param_1[1];
  }
  else {
    plVar4 = (long *)param_1[1];
  }
  if (plVar4 != (long *)0x0) {
    plVar3 = (long *)param_1[2];
    plVar2 = plVar4;
    if (plVar4 != plVar3) {
      do {
        plVar3 = plVar3 + -1;
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        plVar2 = (long *)*plVar3;
        *plVar3 = 0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
      } while (plVar3 != plVar4);
      plVar2 = (long *)param_1[1];
    }
    param_1[2] = plVar4;
    operator_delete(plVar2);
    return;
  }
  return;
}


// ===== 00c6e718  FUN_00c6e718 =====

void FUN_00c6e718(void *param_1)

{
  FUN_00c6e5fc();
  operator_delete(param_1);
  return;
}


// ===== 00c6e748  FUN_00c6e748 =====

void FUN_00c6e748(void)

{
  return;
}


// ===== 00c6e750  FUN_00c6e750 =====

undefined8 * FUN_00c6e750(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  void *__dest;
  
  puVar7 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar7 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_00c6e848();
LAB_00c6e844:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar4 = param_1[2] - *param_1;
  uVar6 = (long)uVar4 >> 2;
  if (uVar6 <= uVar1) {
    uVar6 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar6 = 0x1fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3d != 0) goto LAB_00c6e844;
    pvVar2 = operator_new(uVar6 << 3);
    puVar7 = (undefined8 *)((long)pvVar2 + (long)puVar7);
  }
  if (puVar7 != (undefined8 *)0x0) {
    uVar5 = *param_2;
    *param_2 = 0;
    *puVar7 = uVar5;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar7 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar7 + 1);
    param_1[2] = (long)((long)pvVar2 + uVar6 * 8);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar7 + 1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c6e848  FUN_00c6e848 =====

void FUN_00c6e848(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c6e860  FUN_00c6e860 =====

void FUN_00c6e860(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  FUN_00afeb90(param_1 + 0x1e);
  FUN_00afeb90(param_1 + 0x84);
  *(undefined8 *)(param_1 + 0xea) = 0;
  param_1[0xec] = 0;
  *(undefined8 *)(param_1 + 0xee) = 0;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf2) = 0;
  *(undefined1 *)(param_1 + 0xf4) = 0;
  *(undefined1 *)(param_1 + 0xf5) = 0;
  *(undefined1 *)(param_1 + 0xf6) = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined1 *)(param_1 + 0xfa) = 0;
  *(undefined1 *)(param_1 + 0xfc) = 0;
  return;
}


// ===== 00c6e8e4  FUN_00c6e8e4 =====

void FUN_00c6e8e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = param_2[4];
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar5 = param_2[1];
  uVar4 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  uVar2 = param_2[0xd];
  uVar1 = param_2[0xc];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  param_1[0xe] = param_2[0xe];
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar1;
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  FUN_00afef10(param_1 + 0xf,param_2 + 0xf);
  FUN_00afef10(param_1 + 0x42,param_2 + 0x42);
  uVar3 = param_2[0x79];
  uVar2 = param_2[0x7c];
  uVar1 = param_2[0x7b];
  uVar5 = param_2[0x76];
  uVar4 = param_2[0x75];
  uVar7 = param_2[0x78];
  uVar6 = param_2[0x77];
  param_1[0x7a] = param_2[0x7a];
  param_1[0x79] = uVar3;
  param_1[0x7c] = uVar2;
  param_1[0x7b] = uVar1;
  param_1[0x76] = uVar5;
  param_1[0x75] = uVar4;
  param_1[0x78] = uVar7;
  param_1[0x77] = uVar6;
  uVar1 = *(undefined8 *)((long)param_2 + 0x3e1);
  *(undefined8 *)((long)param_1 + 0x3e9) = *(undefined8 *)((long)param_2 + 0x3e9);
  *(undefined8 *)((long)param_1 + 0x3e1) = uVar1;
  return;
}


// ===== 00c6e96c  FUN_00c6e96c =====

void FUN_00c6e96c(long param_1)

{
  FUN_00aff0f8(param_1 + 0x210);
  FUN_00aff0f8(param_1 + 0x78);
  return;
}


// ===== 00c6e99c  FUN_00c6e99c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c6e99c(double *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = nan("uninit");
  *(undefined1 *)(param_1 + 4) = 0;
  dVar3 = DAT_001f5d58;
  *(undefined1 *)(param_1 + 5) = 0;
  dVar2 = _UNK_001f3338;
  dVar1 = _DAT_001f3330;
  *param_1 = (double)param_2 / dVar3;
  param_1[1] = dVar4;
  param_1[3] = dVar2;
  param_1[2] = dVar1;
  return;
}


// ===== 00c6e9f8  FUN_00c6e9f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c6e9f8(double *param_1,int param_2)

{
  double dVar1;
  
  *param_1 = (double)param_2 / DAT_001f5d58;
  dVar1 = nan("uninit");
  param_1[1] = dVar1;
  dVar1 = _DAT_001f3330;
  param_1[3] = _UNK_001f3338;
  param_1[2] = dVar1;
  if (*(char *)(param_1 + 5) == '\x01') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}


// ===== 00c6ea5c  FUN_00c6ea5c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c6ea5c(long param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  dVar2 = nan("uninit");
  *(double *)(param_1 + 8) = dVar2;
  uVar1 = _DAT_001f3330;
  *(undefined8 *)(param_1 + 0x18) = _UNK_001f3338;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}


// ===== 00c6eaac  FUN_00c6eaac =====

void FUN_00c6eaac(double *param_1,double param_2,int param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (((ulong)param_1[5] & 1) == 0) {
    param_1[1] = (double)param_3;
  }
  else {
    dVar1 = exp((double)((long)param_1[4] - (long)param_2) / *param_1);
    dVar1 = dVar1 / (dVar1 + 1.0);
    dVar2 = 1.0 - dVar1;
    dVar3 = (double)param_3 - param_1[1];
    param_1[1] = dVar1 * (double)param_3 + param_1[1] * dVar2;
    param_1[3] = dVar1 * dVar1 + param_1[3] * dVar2 * dVar2;
    if (param_1[2] == INFINITY) {
      dVar3 = dVar3 * dVar3;
    }
    else {
      dVar3 = param_1[2] * dVar2 + dVar3 * dVar3 * dVar1;
    }
    param_1[2] = dVar3;
  }
  param_1[4] = param_2;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}


// ===== 00c6eb88  FUN_00c6eb88 =====

bool FUN_00c6eb88(byte *param_1,ulong param_2)

{
  if (0xc < param_2) {
    return *param_1 - 0x14 < 0x2c;
  }
  return false;
}


// ===== 00c6ebb0  FUN_00c6ebb0 =====

bool FUN_00c6ebb0(char *param_1,ulong param_2)

{
  if (((0xc < param_2) && (0x11 < param_2)) && (*param_1 == '\x16')) {
    return param_1[0xd] == '\x01';
  }
  return false;
}


// ===== 00c6ebf0  FUN_00c6ebf0 =====

void FUN_00c6ebf0(undefined8 param_1,undefined8 param_2)

{
  FUN_00b00b80(0,param_1,param_2);
  return;
}


// ===== 00c6ec04  FUN_00c6ec04 =====

undefined8 FUN_00c6ec04(long param_1,void *param_2,ulong param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  void *pvVar5;
  int *piVar6;
  int local_60 [2];
  ulong *local_58;
  
  iVar3 = FUN_00b00b80(0);
  piVar1 = *(int **)(param_1 + 0x10);
  piVar6 = *(int **)(param_1 + 8);
  do {
    if (piVar6 == piVar1) {
      local_60[0] = iVar3;
      puVar4 = (ulong *)operator_new(0x18);
      *puVar4 = param_3;
      puVar4[1] = param_3;
      if (param_3 == 0) {
        puVar4[2] = 0;
      }
      else {
        pvVar5 = operator_new__(param_3);
        puVar4[2] = (ulong)pvVar5;
        memcpy(pvVar5,param_2,param_3);
      }
      local_58 = puVar4;
      if (piVar1 < *(int **)(param_1 + 0x18)) {
        if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *piVar1 = iVar3;
        piVar6 = piVar1 + 4;
        local_58 = (ulong *)0x0;
        *(ulong **)(piVar1 + 2) = puVar4;
      }
      else {
        piVar6 = (int *)FUN_00c6f3dc((ulong *)(param_1 + 8),local_60);
      }
      puVar4 = local_58;
      *(int **)(param_1 + 0x10) = piVar6;
      local_58 = (ulong *)0x0;
      if (puVar4 != (ulong *)0x0) {
        pvVar5 = (void *)puVar4[2];
        puVar4[2] = 0;
        if (pvVar5 != (void *)0x0) {
          operator_delete__(pvVar5);
        }
        operator_delete(puVar4);
      }
      return 1;
    }
    iVar2 = *piVar6;
    piVar6 = piVar6 + 4;
  } while (iVar3 != iVar2);
  return 0;
}


// ===== 00c6ed38  FUN_00c6ed38 =====

void FUN_00c6ed38(long param_1,void *param_2,ulong param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulong *puVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 local_50 [2];
  ulong *local_48;
  
  uVar2 = FUN_00b00b80(0);
  local_50[0] = uVar2;
  puVar3 = (ulong *)operator_new(0x18);
  *puVar3 = param_3;
  puVar3[1] = param_3;
  if (param_3 == 0) {
    puVar3[2] = 0;
  }
  else {
    pvVar4 = operator_new__(param_3);
    puVar3[2] = (ulong)pvVar4;
    memcpy(pvVar4,param_2,param_3);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  local_48 = puVar3;
  if (puVar1 < *(undefined4 **)(param_1 + 0x18)) {
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *puVar1 = uVar2;
    puVar5 = puVar1 + 4;
    local_48 = (ulong *)0x0;
    *(ulong **)(puVar1 + 2) = puVar3;
  }
  else {
    puVar5 = (undefined4 *)FUN_00c6f3dc(param_1 + 8,local_50);
  }
  puVar3 = local_48;
  *(undefined4 **)(param_1 + 0x10) = puVar5;
  local_48 = (ulong *)0x0;
  if (puVar3 != (ulong *)0x0) {
    pvVar4 = (void *)puVar3[2];
    puVar3[2] = 0;
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
    }
    operator_delete(puVar3);
  }
  return;
}


// ===== 00c6ee34  FUN_00c6ee34 =====

void FUN_00c6ee34(uint *param_1,ulong *param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint *puVar6;
  void *pvVar7;
  ulong uVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  byte bVar13;
  uint uVar14;
  long lVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  void *pvVar19;
  byte bVar20;
  ulong uVar21;
  ulong uVar22;
  
  if (0x1ffff < param_2[1]) {
    puVar17 = *(uint **)(param_1 + 2);
    puVar16 = *(uint **)(param_1 + 4);
    uVar3 = (long)puVar16 - (long)puVar17;
    puVar18 = puVar16;
    if (uVar3 == 0) {
LAB_00c6ef50:
      if ((puVar17 != puVar16) && (puVar6 = puVar17 + 4, puVar18 = puVar17, puVar17 + 4 != puVar16))
      {
        do {
          puVar10 = puVar6;
          uVar12 = *param_2;
          if (uVar12 < 2) {
            if (param_2[1] >> 0x11 == 0) {
              uVar9 = *puVar10;
              goto LAB_00c6f040;
            }
            uVar9 = *puVar10;
            if ((uint)param_2[2] != uVar9) goto LAB_00c6f040;
          }
          else {
            Hint_Prefetch(param_2[2],0,2,0);
            uVar9 = *puVar10;
            uVar8 = (long)(short)param_2[1] ^ (ulong)uVar9;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar8;
            uVar8 = SUB168(auVar5 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^ uVar8 * 0x79d5f9e0de1e8cf5;
            lVar15 = 0;
            bVar13 = (byte)(uVar8 >> 0x39);
            while( true ) {
              uVar8 = uVar8 & uVar12;
              Hint_Prefetch(param_2[3] + uVar8 * 4,0,0,0);
              uVar11 = *(undefined8 *)(param_2[2] + uVar8);
              for (uVar21 = NEON_cmeq(uVar11,CONCAT17(bVar13,CONCAT16(bVar13,CONCAT15(bVar13,
                                                  CONCAT14(bVar13,CONCAT13(bVar13,CONCAT12(bVar13,
                                                  CONCAT11(bVar13,bVar13))))))),1); uVar21 != 0;
                  uVar21 = (uVar21 & 0x8080808080808080) - 1 & uVar21 & 0x8080808080808080) {
                uVar22 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
                uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
                uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
                uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
                if (*(uint *)(param_2[3] +
                             (uVar8 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3) &
                             uVar12) * 4) == uVar9) goto LAB_00c6f078;
              }
              uVar11 = NEON_cmeq(uVar11,0x8080808080808080,1);
              bVar20 = NEON_umaxv(uVar11,1);
              if ((bVar20 & 1) != 0) break;
              lVar15 = lVar15 + 8;
              uVar8 = lVar15 + uVar8;
            }
LAB_00c6f040:
            *puVar17 = uVar9;
            uVar11 = *(undefined8 *)(puVar18 + 6);
            puVar18[6] = 0;
            puVar18[7] = 0;
            pvVar19 = *(void **)(puVar17 + 2);
            *(undefined8 *)(puVar17 + 2) = uVar11;
            if (pvVar19 != (void *)0x0) {
              pvVar7 = *(void **)((long)pvVar19 + 0x10);
              *(undefined8 *)((long)pvVar19 + 0x10) = 0;
              if (pvVar7 != (void *)0x0) {
                operator_delete__(pvVar7);
              }
              operator_delete(pvVar19);
            }
            puVar17 = puVar17 + 4;
          }
LAB_00c6f078:
          puVar6 = puVar10 + 4;
          puVar18 = puVar10;
        } while (puVar10 + 4 != puVar16);
        puVar16 = *(uint **)(param_1 + 4);
        puVar18 = puVar17;
      }
    }
    else {
      uVar12 = param_2[2];
      uVar8 = *param_2;
      do {
        if (uVar8 < 2) {
          if (*puVar17 == (uint)uVar12) goto LAB_00c6ef50;
        }
        else {
          Hint_Prefetch(uVar12,0,2,0);
          uVar21 = (long)(short)param_2[1] ^ (ulong)*puVar17;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar21;
          uVar21 = SUB168(auVar4 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^ uVar21 * 0x79d5f9e0de1e8cf5;
          bVar13 = (byte)(uVar21 >> 0x39);
          lVar15 = 0;
          while( true ) {
            uVar21 = uVar21 & uVar8;
            Hint_Prefetch(param_2[3] + uVar21 * 4,0,0,0);
            for (uVar22 = NEON_cmeq(*(undefined8 *)(uVar12 + uVar21),
                                    CONCAT17(bVar13,CONCAT16(bVar13,CONCAT15(bVar13,CONCAT14(bVar13,
                                                  CONCAT13(bVar13,CONCAT12(bVar13,CONCAT11(bVar13,
                                                  bVar13))))))),1); uVar22 != 0;
                uVar22 = (uVar22 & 0x8080808080808080) - 1 & uVar22 & 0x8080808080808080) {
              uVar1 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
              uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
              uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
              uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
              if (*(uint *)(param_2[3] +
                           (uVar21 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar8) *
                           4) == *puVar17) goto LAB_00c6ef50;
            }
            uVar11 = NEON_cmeq(*(undefined8 *)(uVar12 + uVar21),0x8080808080808080,1);
            bVar20 = NEON_umaxv(uVar11,1);
            if ((bVar20 & 1) != 0) break;
            lVar15 = lVar15 + 8;
            uVar21 = lVar15 + uVar21;
          }
        }
        puVar17 = puVar17 + 4;
      } while (puVar17 != puVar16);
    }
    FUN_00c6f168(param_1 + 2,puVar18,puVar16);
    uVar9 = *param_1;
    uVar12 = *(long *)(param_1 + 4) - *(long *)(param_1 + 2);
    uVar14 = (int)(uVar3 >> 4) - (int)(uVar12 >> 4);
    uVar2 = uVar9 - uVar14;
    if (uVar14 <= uVar9) {
      *param_1 = uVar2;
      uVar9 = uVar2;
    }
    if ((ulong)((long)uVar12 >> 4) <= (ulong)uVar9) {
      uVar9 = 0;
      if (*(long *)(param_1 + 2) != *(long *)(param_1 + 4)) {
        uVar9 = (int)(uVar12 >> 4) - 1;
      }
      *param_1 = uVar9;
    }
  }
  return;
}


// ===== 00c6f10c  FUN_00c6f10c =====

void FUN_00c6f10c(uint *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(param_1 + 2);
  uVar4 = *(long *)(param_1 + 4) - lVar1 >> 4;
  uVar3 = uVar4 - param_2;
  if (param_2 <= uVar4 && uVar3 != 0) {
    FUN_00c6f168(param_1 + 2,lVar1,lVar1 + uVar3 * 0x10);
    uVar2 = *param_1 - (int)uVar3;
    if (*param_1 <= uVar3) {
      uVar2 = 0;
    }
    *param_1 = uVar2;
  }
  return;
}


// ===== 00c6f168  FUN_00c6f168 =====

undefined4 * FUN_00c6f168(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (param_3 <= param_2 && param_2 != param_3) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:1170: libc++ Hardening assertion __first <= __last failed: vector::erase(first, last) called with invalid range\n"
              );
  }
  if (param_2 == param_3) {
    return param_2;
  }
  puVar6 = *(undefined4 **)(param_1 + 8);
  puVar5 = param_2;
  if (param_3 == puVar6) {
    if (param_2 == puVar6) goto LAB_00c6f20c;
  }
  else {
    do {
      *puVar5 = *param_3;
      uVar3 = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)(param_3 + 2) = 0;
      pvVar4 = *(void **)(puVar5 + 2);
      *(undefined8 *)(puVar5 + 2) = uVar3;
      if (pvVar4 != (void *)0x0) {
        pvVar2 = *(void **)((long)pvVar4 + 0x10);
        *(undefined8 *)((long)pvVar4 + 0x10) = 0;
        if (pvVar2 != (void *)0x0) {
          operator_delete__(pvVar2);
        }
        operator_delete(pvVar4);
      }
      param_3 = param_3 + 4;
      puVar5 = puVar5 + 4;
    } while (param_3 != puVar6);
    puVar6 = *(undefined4 **)(param_1 + 8);
    if (puVar5 == puVar6) goto LAB_00c6f20c;
  }
  do {
    puVar1 = puVar6 + -4;
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    pvVar4 = *(void **)(puVar6 + -2);
    *(undefined8 *)(puVar6 + -2) = 0;
    if (pvVar4 != (void *)0x0) {
      pvVar2 = *(void **)((long)pvVar4 + 0x10);
      *(undefined8 *)((long)pvVar4 + 0x10) = 0;
      if (pvVar2 != (void *)0x0) {
        operator_delete__(pvVar2);
      }
      operator_delete(pvVar4);
    }
    puVar6 = puVar1;
  } while (puVar1 != puVar5);
LAB_00c6f20c:
  *(undefined4 **)(param_1 + 8) = puVar5;
  return param_2;
}


// ===== 00c6f294  FUN_00c6f294 =====

long FUN_00c6f294(uint *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  
  uVar2 = *param_1;
  uVar5 = *(long *)(param_1 + 4) - *(long *)(param_1 + 2) >> 4;
  iVar3 = 0;
  if (uVar5 != 0) {
    iVar3 = (int)((uVar2 + 1) / uVar5);
  }
  *param_1 = (uVar2 + 1) - iVar3 * (int)uVar5;
  if (uVar2 < uVar5) {
    plVar4 = *(long **)(*(long *)(param_1 + 2) + (ulong)uVar2 * 0x10 + 8);
    lVar1 = 0;
    if (*plVar4 != 0) {
      lVar1 = plVar4[2];
    }
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 00c6f2fc  FUN_00c6f2fc =====

long * FUN_00c6f2fc(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long *plVar6;
  long *plVar7;
  void *pvVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  void *pvVar13;
  long lVar14;
  undefined1 auVar15 [16];
  void *pvStack_90;
  undefined4 *puStack_88;
  undefined4 *puStack_80;
  void *pvStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  long lStack_60;
  long lStack_58;
  ulong uStack_50;
  undefined8 *puStack_48;
  long local_40;
  long lStack_38;
  
  lVar2 = *(long *)(param_2 + 8);
  lVar3 = *(long *)(param_2 + 0x10);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar12 = lVar3 - lVar2;
  if (uVar12 == 0) {
    plVar6 = (long *)0x0;
  }
  else {
    if ((long)uVar12 < 0) {
      auVar15 = FUN_0060aa38();
      puVar9 = auVar15._8_8_;
      plVar6 = auVar15._0_8_;
      pcStack_68 = FUN_00c6f3dc;
      lVar14 = plVar6[1] - *plVar6;
      uVar1 = (lVar14 >> 4) + 1;
      puStack_70 = &stack0xffffffffffffffd0;
      lStack_60 = lVar2;
      lStack_58 = lVar3;
      uStack_50 = uVar12;
      puStack_48 = param_1;
      if (uVar1 >> 0x3c == 0) {
        pvStack_90 = (void *)0x0;
        uVar10 = plVar6[2] - *plVar6;
        uVar12 = (long)uVar10 >> 3;
        if (uVar12 <= uVar1) {
          uVar12 = uVar1;
        }
        if (0x7fffffffffffffef < uVar10) {
          uVar12 = 0xfffffffffffffff;
        }
        if (uVar12 != 0) {
          if (uVar12 >> 0x3c != 0) goto LAB_00c6f54c;
          pvStack_90 = operator_new(uVar12 << 4);
        }
        pvStack_78 = (void *)((long)pvStack_90 + uVar12 * 0x10);
        puStack_88 = (undefined4 *)((long)pvStack_90 + lVar14);
        if (puStack_88 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puStack_80 = puStack_88 + 4;
        *puStack_88 = *puVar9;
        uVar11 = *(undefined8 *)(puVar9 + 2);
        *(undefined8 *)(puVar9 + 2) = 0;
        *(undefined8 *)(puStack_88 + 2) = uVar11;
        FUN_00c6f550(plVar6,&pvStack_90);
        puVar5 = puStack_88;
        plVar6 = (long *)plVar6[1];
        puVar9 = puStack_80;
        while( true ) {
          if (puVar5 == puVar9) {
            if (pvStack_90 != (void *)0x0) {
              puStack_80 = puVar9;
              operator_delete(pvStack_90);
            }
            return plVar6;
          }
          puVar4 = puVar9 + -4;
          if (puVar4 == (undefined4 *)0x0) break;
          pvVar13 = *(void **)(puVar9 + -2);
          *(undefined8 *)(puVar9 + -2) = 0;
          puVar9 = puVar4;
          if (pvVar13 != (void *)0x0) {
            pvVar8 = *(void **)((long)pvVar13 + 0x10);
            *(undefined8 *)((long)pvVar13 + 0x10) = 0;
            if (pvVar8 != (void *)0x0) {
              operator_delete__(pvVar8);
            }
            operator_delete(pvVar13);
          }
        }
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_00c6f660();
LAB_00c6f54c:
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    plVar6 = (long *)operator_new(uVar12);
    *param_1 = plVar6;
    param_1[1] = plVar6;
    param_1[2] = (long)plVar6 + uVar12;
  }
  do {
    if (lVar2 == lVar3) {
      return plVar6;
    }
    lStack_38 = **(long **)(lVar2 + 8);
    local_40 = 0;
    if (lStack_38 != 0) {
      local_40 = (*(long **)(lVar2 + 8))[2];
    }
    if (plVar6 < (long *)param_1[2]) {
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      plVar7 = plVar6 + 2;
      plVar6[1] = lStack_38;
      *plVar6 = local_40;
    }
    else {
      plVar7 = (long *)FUN_00c6f678(param_1,&local_40);
    }
    lVar2 = lVar2 + 0x10;
    param_1[1] = plVar7;
    plVar6 = plVar7;
  } while( true );
}


// ===== 00c6f3dc  FUN_00c6f3dc =====

long FUN_00c6f3dc(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  void *pvVar9;
  long lVar10;
  void *local_50;
  undefined4 *local_48;
  undefined4 *local_40;
  void *local_38;
  
  lVar10 = param_1[1] - *param_1;
  uVar1 = (lVar10 >> 4) + 1;
  if (uVar1 >> 0x3c != 0) {
    FUN_00c6f660();
LAB_00c6f54c:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  local_50 = (void *)0x0;
  uVar6 = param_1[2] - *param_1;
  uVar8 = (long)uVar6 >> 3;
  if (uVar8 <= uVar1) {
    uVar8 = uVar1;
  }
  if (0x7fffffffffffffef < uVar6) {
    uVar8 = 0xfffffffffffffff;
  }
  if (uVar8 != 0) {
    if (uVar8 >> 0x3c != 0) goto LAB_00c6f54c;
    local_50 = operator_new(uVar8 << 4);
  }
  local_38 = (void *)((long)local_50 + uVar8 * 0x10);
  local_48 = (undefined4 *)((long)local_50 + lVar10);
  if (local_48 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  local_40 = local_48 + 4;
  *local_48 = *param_2;
  uVar7 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(local_48 + 2) = uVar7;
  FUN_00c6f550(param_1,&local_50);
  puVar4 = local_48;
  lVar10 = param_1[1];
  puVar3 = local_40;
  while( true ) {
    if (puVar4 == puVar3) {
      if (local_50 != (void *)0x0) {
        local_40 = puVar3;
        operator_delete(local_50);
      }
      return lVar10;
    }
    puVar2 = puVar3 + -4;
    if (puVar2 == (undefined4 *)0x0) break;
    pvVar9 = *(void **)(puVar3 + -2);
    *(undefined8 *)(puVar3 + -2) = 0;
    puVar3 = puVar2;
    if (pvVar9 != (void *)0x0) {
      pvVar5 = *(void **)((long)pvVar9 + 0x10);
      *(undefined8 *)((long)pvVar9 + 0x10) = 0;
      if (pvVar5 != (void *)0x0) {
        operator_delete__(pvVar5);
      }
      operator_delete(pvVar9);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c6f550  FUN_00c6f550 =====

void FUN_00c6f550(long *param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  void *pvVar10;
  undefined4 *puVar11;
  long lVar12;
  
  puVar11 = (undefined4 *)*param_1;
  puVar2 = (undefined4 *)param_1[1];
  puVar1 = (undefined4 *)((long)puVar11 + (param_2[1] - (long)puVar2));
  puVar4 = puVar11;
  puVar6 = puVar1;
  if (puVar2 != puVar11) {
    do {
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *puVar6 = *puVar4;
      uVar8 = *(undefined8 *)(puVar4 + 2);
      *(undefined8 *)(puVar4 + 2) = 0;
      puVar4 = puVar4 + 4;
      *(undefined8 *)(puVar6 + 2) = uVar8;
      puVar6 = puVar6 + 4;
    } while (puVar4 != puVar2);
    do {
      if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar10 = *(void **)(puVar11 + 2);
      *(undefined8 *)(puVar11 + 2) = 0;
      if (pvVar10 != (void *)0x0) {
        pvVar3 = *(void **)((long)pvVar10 + 0x10);
        *(undefined8 *)((long)pvVar10 + 0x10) = 0;
        if (pvVar3 != (void *)0x0) {
          operator_delete__(pvVar3);
        }
        operator_delete(pvVar10);
      }
      puVar11 = puVar11 + 4;
    } while (puVar11 != puVar2);
  }
  param_2[1] = (long)puVar1;
  lVar5 = *param_1;
  lVar9 = param_1[2];
  param_1[1] = lVar5;
  lVar12 = param_2[1];
  lVar7 = param_2[3];
  param_1[1] = param_2[2];
  *param_1 = lVar12;
  param_1[2] = lVar7;
  param_2[2] = lVar5;
  param_2[3] = lVar9;
  *param_2 = lVar5;
  param_2[1] = lVar5;
  return;
}


// ===== 00c6f660  FUN_00c6f660 =====

void FUN_00c6f660(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c6f678  FUN_00c6f678 =====

undefined8 * FUN_00c6f678(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__dest;
  undefined8 uVar7;
  
  puVar6 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar6 >> 4) + 1;
  if (uVar1 >> 0x3c != 0) {
    FUN_0060aa38();
LAB_00c6f768:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 3;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7fffffffffffffef < uVar4) {
    uVar5 = 0xfffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3c != 0) goto LAB_00c6f768;
    pvVar2 = operator_new(uVar5 << 4);
    puVar6 = (undefined8 *)((long)pvVar2 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    uVar7 = *param_2;
    puVar6[1] = param_2[1];
    *puVar6 = uVar7;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 2);
    param_1[2] = (long)((long)pvVar2 + uVar5 * 0x10);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar6 + 2;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c6f76c  FUN_00c6f76c =====

void FUN_00c6f76c(undefined8 param_1,int param_2)

{
  if (param_2 - 1U < 0xb) {
    FUN_005d3510(param_1,&DAT_00259c10 + *(int *)(&DAT_00259c10 + (ulong)(param_2 - 1U) * 4));
    return;
  }
  FUN_005d3510(param_1,"unknown");
  return;
}


// ===== 00c6f7a0  FUN_00c6f7a0 =====

void FUN_00c6f7a0(undefined4 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_d8;
  void *local_d0;
  undefined6 uStack_c8;
  undefined2 uStack_c2;
  undefined4 uStack_c0;
  char cStack_bc;
  char cStack_bb;
  char cStack_ba;
  char cStack_b9;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ushort local_9c [2];
  short local_98 [2];
  undefined2 local_94 [2];
  undefined8 local_90;
  long lStack_88;
  long local_80;
  undefined8 uStack_78;
  ulong local_70;
  long lStack_68;
  short local_58 [2];
  short local_54 [2];
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  
  uVar12 = 0;
  if (*(short *)(param_2 + 10) != 0) {
    uVar12 = *(undefined8 *)(param_2 + 0x10);
  }
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00879324(&local_50,uVar12);
  local_54[0] = -0x5556;
  uVar8 = FUN_0087938c(&local_50,local_54);
  if ((uVar8 & 1) == 0) {
    pcVar11 = (char *)operator_new(0x20);
    uVar14 = s_Failed_to_read_magic_number_001e3dae._19_8_;
    uVar12 = s_Failed_to_read_magic_number_001e3dae._0_8_;
    if (pcVar11 + 0x1b < pcVar11) {
LAB_00c6fdb8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if (("ailed to read magic number" <= pcVar11) ||
       (pcVar11 + 0x1b <= "Failed to read magic number")) {
      uVar13 = CONCAT53(s_Failed_to_read_magic_number_001e3dae._11_5_,
                        s_Failed_to_read_magic_number_001e3dae._8_3_);
      uVar3 = CONCAT35(s_Failed_to_read_magic_number_001e3dae._16_3_,
                       s_Failed_to_read_magic_number_001e3dae._11_5_);
      uVar10 = 0x1b;
      pcVar11[0x1b] = '\0';
      *(undefined8 *)(pcVar11 + 8) = uVar13;
      *(undefined8 *)pcVar11 = uVar12;
      *(undefined8 *)(pcVar11 + 0x13) = uVar14;
      *(undefined8 *)(pcVar11 + 0xb) = uVar3;
LAB_00c6f8f4:
      *param_1 = 3;
      FUN_005478d8(param_1 + 2,pcVar11,uVar10);
      param_1[8] = 0;
      *(undefined1 *)(param_1 + 9) = 0;
      *(undefined1 *)((long)param_1 + 0x26) = 0;
      *(undefined1 *)(param_1 + 10) = 0;
      *(undefined1 *)(param_1 + 0x18) = 0;
      operator_delete(pcVar11);
      return;
    }
LAB_00c6fda4:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  if (local_54[0] != 0x7788) {
    cStack_b9 = '\x14';
    if (((void **)0x1c172d <= &local_d0) || (&cStack_bc <= "Invalid magic number")) {
      cStack_bc = '\0';
      uStack_c0 = 0x7265626d;
      uVar14 = s_Invalid_magic_number_001c172c._0_8_;
      uVar12 = s_Invalid_magic_number_001c172c._8_8_;
LAB_00c6f9bc:
      local_b8._3_4_ = (uint)((ulong)local_b8 >> 0x18) & 0xff0000;
      *param_1 = 3;
      *(undefined8 *)(param_1 + 4) = uVar12;
      *(undefined8 *)(param_1 + 2) = uVar14;
      *(ulong *)(param_1 + 6) =
           CONCAT17(cStack_b9,CONCAT16(cStack_ba,CONCAT15(cStack_bb,CONCAT14(cStack_bc,uStack_c0))))
      ;
      param_1[8] = 0;
      *(uint *)((long)param_1 + 0x23) = local_b8._3_4_;
      *(undefined1 *)(param_1 + 10) = 0;
      *(undefined1 *)(param_1 + 0x18) = 0;
      return;
    }
    goto LAB_00c6fda4;
  }
  local_58[0] = -0x5556;
  uVar8 = FUN_0087938c(&local_50,local_58);
  if ((uVar8 & 1) == 0) {
    cStack_b9 = '\x16';
    if (((void **)0x1e6cfc <= &local_d0) || (&cStack_ba <= "Failed to read version")) {
      cStack_ba = '\0';
      uStack_c0 = (undefined4)s_Failed_to_read_version_001e6cfb._16_6_;
      cStack_bc = SUB61(s_Failed_to_read_version_001e6cfb._16_6_,4);
      cStack_bb = SUB61(s_Failed_to_read_version_001e6cfb._16_6_,5);
      uVar12._6_1_ = s_Failed_to_read_version_001e6cfb[0xe];
      uVar12._7_1_ = s_Failed_to_read_version_001e6cfb[0xf];
      uVar12._0_1_ = s_Failed_to_read_version_001e6cfb[8];
      uVar12._1_1_ = s_Failed_to_read_version_001e6cfb[9];
      uVar12._2_1_ = s_Failed_to_read_version_001e6cfb[10];
      uVar12._3_1_ = s_Failed_to_read_version_001e6cfb[0xb];
      uVar12._4_1_ = s_Failed_to_read_version_001e6cfb[0xc];
      uVar12._5_1_ = s_Failed_to_read_version_001e6cfb[0xd];
      uVar14 = s_Failed_to_read_version_001e6cfb._0_8_;
      goto LAB_00c6f9bc;
    }
    goto LAB_00c6fda4;
  }
  if (local_58[0] != 1) {
    pcVar11 = (char *)operator_new(0x20);
    uVar14 = s_Unsupported_delta_version_0019f413._17_8_;
    uVar12 = s_Unsupported_delta_version_0019f413._0_8_;
    if (pcVar11 + 0x19 < pcVar11) goto LAB_00c6fdb8;
    if (("nsupported delta version" <= pcVar11) || (pcVar11 + 0x19 <= "Unsupported delta version"))
    {
      uVar13 = CONCAT71(s_Unsupported_delta_version_0019f413._9_7_,
                        s_Unsupported_delta_version_0019f413[8]);
      uVar3 = CONCAT17(s_Unsupported_delta_version_0019f413[0x10],
                       s_Unsupported_delta_version_0019f413._9_7_);
      pcVar11[0x19] = '\0';
      *(undefined8 *)(pcVar11 + 8) = uVar13;
      *(undefined8 *)pcVar11 = uVar12;
      uVar10 = 0x19;
      *(undefined8 *)(pcVar11 + 0x11) = uVar14;
      *(undefined8 *)(pcVar11 + 9) = uVar3;
      goto LAB_00c6f8f4;
    }
    goto LAB_00c6fda4;
  }
  uStack_78 = 0;
  local_80 = 0;
  lStack_68 = 0;
  local_70 = 0;
  lStack_88 = 0;
  local_90 = 0;
  if (puStack_38 == local_40) {
LAB_00c6f844:
    pcVar11 = "Empty delta!";
    uVar12 = 0xc;
  }
  else {
    do {
      local_94[0] = 0xaaaa;
      local_98[0] = -0x5556;
      local_9c[0] = 0xaaaa;
      uVar8 = FUN_0087938c(&local_50,local_94);
      if ((uVar8 & 1) == 0) {
        pcVar11 = "Failed to read attribute key";
        uVar12 = 0x1c;
        goto LAB_00c6f858;
      }
      uVar8 = FUN_0087938c(&local_50,local_98);
      if ((uVar8 & 1) == 0) {
        pcVar11 = "Failed to read attribute length";
        uVar12 = 0x1f;
        goto LAB_00c6f858;
      }
      uVar8 = FUN_0087938c(&local_50,local_9c);
      if ((uVar8 & 1) == 0) {
        pcVar11 = "Failed to read value type";
        uVar12 = 0x19;
        goto LAB_00c6f858;
      }
      iVar7 = 0;
      if (local_9c[0] - 1 < 7) {
        iVar7 = (local_9c[0] - 1 & 0xffff) + 1;
      }
      plVar9 = (long *)FUN_00c6b734(iVar7,local_94[0],local_98[0],0);
      if (plVar9 == (long *)0x0) {
        pcVar11 = "Failed to create attribute";
        uVar12 = 0x1a;
        goto LAB_00c6f858;
      }
      if (*(short *)((long)plVar9 + 10) != local_98[0]) {
        pcVar11 = "Inconsistent attribute length";
        uVar12 = 0x1d;
LAB_00c6fcf0:
        FUN_00b0092c(&local_d8,3,pcVar11,uVar12);
        *param_1 = (undefined4)local_d8;
        if (cStack_b9 < '\0') {
          FUN_005478d8(param_1 + 2,local_d0,CONCAT26(uStack_c2,uStack_c8));
          uVar4 = (undefined4)local_b8;
          *(undefined1 *)(param_1 + 10) = 0;
          param_1[8] = uVar4;
          *(uint *)((long)param_1 + 0x23) = local_b8._3_4_;
          *(undefined1 *)(param_1 + 0x18) = 0;
          if (cStack_b9 < '\0') {
            operator_delete(local_d0);
          }
        }
        else {
          uVar4 = (undefined4)local_b8;
          *(undefined1 *)(param_1 + 10) = 0;
          *(ulong *)(param_1 + 4) = CONCAT26(uStack_c2,uStack_c8);
          *(void **)(param_1 + 2) = local_d0;
          *(ulong *)(param_1 + 6) =
               CONCAT17(cStack_b9,
                        CONCAT16(cStack_ba,CONCAT15(cStack_bb,CONCAT14(cStack_bc,uStack_c0))));
          param_1[8] = uVar4;
          *(uint *)((long)param_1 + 0x23) = local_b8._3_4_;
          *(undefined1 *)(param_1 + 0x18) = 0;
        }
        (**(code **)(*plVar9 + 8))(plVar9);
        goto LAB_00c6fd80;
      }
      uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9,&local_50);
      if ((uVar8 & 1) == 0) {
        pcVar11 = "Failed to read attribute content";
        uVar12 = 0x20;
        goto LAB_00c6fcf0;
      }
      lVar2 = 0;
      if (local_80 != lStack_88) {
        lVar2 = (local_80 - lStack_88) * 0x40 + -1;
      }
      if (lVar2 == lStack_68 + local_70) {
        FUN_00c71030(&local_90);
      }
      if ((lStack_88 == local_80) ||
         (plVar1 = (long *)(*(long *)(lStack_88 + (lStack_68 + local_70 >> 9) * 8) +
                           (lStack_68 + local_70 & 0x1ff) * 8), plVar1 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *plVar1 = (long)plVar9;
      lStack_68 = lStack_68 + 1;
    } while (puStack_38 != local_40);
    if (lStack_68 == 0) goto LAB_00c6f844;
    plVar9 = *(long **)(*(long *)(lStack_88 + (local_70 >> 9) * 8) + (local_70 & 0x1ff) * 8);
    if (((short)plVar9[1] == -1) && (iVar7 = (**(code **)(*plVar9 + 0x10))(), iVar7 == 4)) {
      if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/deque:1532: libc++ Hardening assertion __i < size() failed: deque::operator[] index out of bounds\n"
                  );
      }
      uVar13 = *(undefined8 *)
                (*(long *)(*(long *)(lStack_88 + (local_70 >> 9) * 8) + (local_70 & 0x1ff) * 8) +
                0x10);
      FUN_00c6fdf4(&local_90);
      lVar6 = lStack_68;
      uVar8 = local_70;
      uVar14 = uStack_78;
      lVar5 = local_80;
      lVar2 = lStack_88;
      uVar12 = local_90;
      uStack_c8 = 0;
      uStack_c2 = 0;
      local_d0 = (void *)0x0;
      local_b8 = 0;
      uStack_c0 = 0;
      cStack_bc = '\0';
      cStack_bb = '\0';
      cStack_ba = '\0';
      cStack_b9 = '\0';
      lStack_88 = 0;
      local_90 = 0;
      uStack_78 = 0;
      local_80 = 0;
      local_70 = 0;
      lStack_68 = 0;
      *param_1 = 0;
      *(undefined1 *)((long)param_1 + 0x26) = 0;
      *(undefined8 *)(param_1 + 4) = 0;
      *(undefined8 *)(param_1 + 6) = 0;
      *(undefined8 *)(param_1 + 2) = 0;
      *(undefined8 *)((long)param_1 + 0x1d) = 0;
      *(undefined8 *)(param_1 + 10) = uVar13;
      *(long *)(param_1 + 0xe) = lVar2;
      *(undefined8 *)(param_1 + 0xc) = uVar12;
      *(undefined8 *)(param_1 + 0x12) = uVar14;
      *(long *)(param_1 + 0x10) = lVar5;
      *(long *)(param_1 + 0x16) = lVar6;
      *(ulong *)(param_1 + 0x14) = uVar8;
      local_b0 = 0;
      uStack_a8 = 0;
      *(undefined1 *)(param_1 + 0x18) = 1;
      local_d8 = uVar13;
      FUN_00c6fec4(&local_d0);
      goto LAB_00c6fd80;
    }
    pcVar11 = "Missing version!";
    uVar12 = 0x10;
  }
LAB_00c6f858:
  FUN_00b0092c(&local_d8,3,pcVar11,uVar12);
  *param_1 = (undefined4)local_d8;
  if (cStack_b9 < '\0') {
    FUN_005478d8(param_1 + 2,local_d0,CONCAT26(uStack_c2,uStack_c8));
    uVar4 = (undefined4)local_b8;
    *(undefined1 *)(param_1 + 10) = 0;
    param_1[8] = uVar4;
    *(uint *)((long)param_1 + 0x23) = local_b8._3_4_;
    *(undefined1 *)(param_1 + 0x18) = 0;
    if (cStack_b9 < '\0') {
      operator_delete(local_d0);
    }
  }
  else {
    uVar4 = (undefined4)local_b8;
    *(ulong *)(param_1 + 4) = CONCAT26(uStack_c2,uStack_c8);
    *(void **)(param_1 + 2) = local_d0;
    *(ulong *)(param_1 + 6) =
         CONCAT17(cStack_b9,CONCAT16(cStack_ba,CONCAT15(cStack_bb,CONCAT14(cStack_bc,uStack_c0))));
    param_1[8] = uVar4;
    *(uint *)((long)param_1 + 0x23) = local_b8._3_4_;
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
LAB_00c6fd80:
  FUN_00c6fec4(&local_90);
  return;
}


// ===== 00c6fdf4  FUN_00c6fdf4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c6fdf4(long param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:2185: libc++ Hardening assertion !empty() failed: deque::pop_front called on an empty deque\n"
              );
  }
  plVar1 = (long *)(*(long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) >> 9) * 8) +
                   (*(ulong *)(param_1 + 0x20) & 0x1ff) * 8);
  if (plVar1 != (long *)0x0) {
    plVar2 = (long *)*plVar1;
    *plVar1 = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    uVar3 = *(long *)(param_1 + 0x20) + _DAT_001f2940;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + _UNK_001f2948;
    *(ulong *)(param_1 + 0x20) = uVar3;
    if (0x3ff < uVar3) {
      operator_delete((void *)**(undefined8 **)(param_1 + 8));
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x200;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c6fec4  FUN_00c6fec4 =====

void FUN_00c6fec4(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar4;
  
  puVar9 = (undefined8 *)param_1[1];
  puVar6 = (undefined8 *)param_1[2];
  puVar4 = puVar9;
  if (puVar9 != puVar6) {
    uVar7 = param_1[4];
    plVar10 = puVar9 + (uVar7 >> 9);
    plVar11 = (long *)(*plVar10 + (uVar7 & 0x1ff) * 8);
    plVar1 = (long *)(puVar9[param_1[5] + uVar7 >> 9] + (param_1[5] + uVar7 & 0x1ff) * 8);
    puVar4 = puVar6;
    if (plVar11 != plVar1) {
      do {
        if (plVar11 == (long *)0x0) goto LAB_00c70068;
        plVar2 = (long *)*plVar11;
        *plVar11 = 0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        plVar11 = plVar11 + 1;
        if ((long)plVar11 - *plVar10 == 0x1000) {
          plVar10 = plVar10 + 1;
          plVar11 = (long *)*plVar10;
        }
      } while (plVar11 != plVar1);
      puVar9 = (undefined8 *)param_1[1];
      puVar6 = (undefined8 *)param_1[2];
      puVar4 = puVar6;
    }
  }
  param_1[5] = 0;
  lVar3 = (long)puVar4 - (long)puVar9;
  while (uVar7 = lVar3 >> 3, 2 < uVar7) {
    operator_delete((void *)*puVar9);
    puVar6 = (undefined8 *)param_1[2];
    puVar9 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = puVar9;
    lVar3 = (long)puVar6 - (long)puVar9;
  }
  if (uVar7 == 1) {
    uVar5 = 0x100;
  }
  else {
    if (uVar7 != 2) goto LAB_00c6ffe0;
    uVar5 = 0x200;
  }
  param_1[4] = uVar5;
LAB_00c6ffe0:
  puVar4 = puVar6;
  if (puVar9 != puVar6) {
    do {
      puVar4 = puVar9 + 1;
      operator_delete((void *)*puVar9);
      puVar9 = puVar4;
    } while (puVar4 != puVar6);
    puVar6 = (undefined8 *)param_1[1];
    puVar4 = (undefined8 *)param_1[2];
  }
  uVar8 = (ulong)((long)puVar4 + (-8 - ((long)puVar4 << 0x3d))) >> 3;
  uVar7 = (ulong)(((long)puVar6 - (long)puVar4 << 0x3d) - ((long)puVar6 - (long)puVar4)) >> 3;
  if (uVar8 <= uVar7) {
    uVar7 = uVar8;
  }
  if ((1 < uVar7) && ((((int)puVar6 - (int)puVar4 | -(int)puVar4) & 7U) == 0)) {
    uVar7 = uVar7 & 0x1ffffffffffffffe;
    puVar4 = puVar4 + -uVar7;
    do {
      uVar7 = uVar7 - 2;
    } while (uVar7 != 0);
  }
  do {
    if (puVar4 == puVar6) {
      param_1[2] = puVar4;
      if ((void *)*param_1 != (void *)0x0) {
        operator_delete((void *)*param_1);
        return;
      }
      return;
    }
    puVar4 = puVar4 + -1;
  } while (puVar4 != (undefined8 *)0x0);
LAB_00c70068:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c700c8  FUN_00c700c8 =====

/* WARNING: Removing unreachable block (ram,0x00c703b0) */
/* WARNING: Removing unreachable block (ram,0x00c70450) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00c700c8(int *param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  ushort uVar3;
  undefined2 uVar4;
  bool bVar5;
  undefined1 *puVar6;
  int iVar7;
  ulong uVar8;
  char **ppcVar9;
  long *plVar10;
  void *pvVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  int iVar16;
  long *plVar17;
  long *plVar18;
  char *******pppppppcVar19;
  char *local_170;
  undefined1 uStack_161;
  char *local_160;
  char **ppcStack_158;
  char *local_150;
  char **local_148;
  char *local_140;
  char **local_138;
  char *******local_130;
  char **local_128;
  char *******local_120;
  char *******pppppppcStack_118;
  char *local_110;
  char **ppcStack_108;
  char **ppcStack_100;
  long local_f8;
  undefined4 local_f0;
  undefined3 uStack_ec;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c6f7a0(&local_e0,param_3);
  puVar6 = puStack_b8;
  if ((int)local_e0 == 0) {
    if (((ulong)local_80 & 1) == 0) {
LAB_00c70784:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    iVar16 = *(int *)(param_2 + 0x34);
    if (local_a8 != local_a0) {
      puVar1 = puStack_88 + (long)local_90;
      plVar18 = (long *)(local_a8 + ((ulong)local_90 >> 9) * 8);
      lVar12 = *(long *)(local_a8 + ((ulong)puVar1 >> 9) * 8);
      plVar17 = (long *)(*plVar18 + ((ulong)local_90 & 0x1ff) * 8);
      while (plVar17 != (long *)(lVar12 + ((ulong)puVar1 & 0x1ff) * 8)) {
        plVar10 = (long *)(param_2 + 8);
        uVar3 = *(ushort *)(*plVar17 + 8);
        for (plVar14 = *(long **)(param_2 + 0x20); plVar14 != (long *)0x0;
            plVar14 = (long *)plVar14[1]) {
          while (uVar3 < *(ushort *)(plVar14 + 4)) {
            plVar14 = (long *)*plVar14;
            if (plVar14 == (long *)0x0) goto LAB_00c7020c;
          }
          if (uVar3 == *(ushort *)(plVar14 + 4)) {
            if (plVar14 != (long *)(param_2 + 0x20)) {
              if ((undefined1 *)plVar14[5] < puVar6) {
                bVar5 = false;
                plVar14 = (long *)*plVar10;
                goto joined_r0x00c70204;
              }
              goto LAB_00c70344;
            }
            break;
          }
        }
LAB_00c7020c:
        bVar5 = true;
        for (plVar14 = (long *)*plVar10; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
          while (*(ushort *)(plVar14 + 4) <= uVar3) {
            if (*(ushort *)(plVar14 + 4) == uVar3) {
              if ((plVar14 == plVar10) || (plVar14[5] == 0)) goto LAB_00c70258;
              pppppppcVar19 = (char *******)(ulong)*(ushort *)(plVar14[5] + 10);
              goto LAB_00c7025c;
            }
            plVar14 = (long *)plVar14[1];
joined_r0x00c70204:
            if (plVar14 == (long *)0x0) goto LAB_00c70258;
          }
        }
LAB_00c70258:
        pppppppcVar19 = (char *******)0x0;
LAB_00c7025c:
        uVar3 = *(ushort *)(*plVar17 + 10);
        uVar2 = uVar3 + 8;
        if (!bVar5) {
          uVar2 = (uint)uVar3;
        }
        iVar16 = (uVar2 + iVar16) - (int)pppppppcVar19;
        if (iVar16 < 1) {
          uVar8 = FUN_004022fc();
          if ((uVar8 & 1) == 0) {
            local_110 = "../../p2p/base/stun_dictionary.cc";
            ppcStack_108 = (char **)0x6b2;
            ppcStack_100 = &local_160;
            local_148 = &local_110;
            local_150 = "attr: ";
            local_140 = (char *)(ulong)*(ushort *)(*plVar17 + 8);
            local_138 = &local_150;
            local_128 = &local_140;
            local_130 = (char *******)0x1bbe25;
            pppppppcStack_118 = (char *******)&local_130;
            local_120 = pppppppcVar19;
            FUN_00623bb0(&DAT_00259c3c,"../../p2p/base/stun_dictionary.cc",0x6b2);
          }
          iVar16 = 3;
          *(undefined1 *)(param_1 + 9) = 0;
          goto LAB_00c70720;
        }
        if ((*(int *)(param_2 + 0x30) < iVar16) && (uVar8 = FUN_00417e08(), (uVar8 & 1) == 0)) {
          local_110 = "../../p2p/base/stun_dictionary.cc";
          ppcStack_108 = (char **)0x6f1;
          ppcStack_100 = (char **)&uStack_161;
          ppcStack_158 = &local_110;
          local_160 = "attr: ";
          pppppppcStack_118 = (char *******)&local_130;
          local_120 = (char *******)0x1bea4c;
          local_170 = (char *)((ulong)local_170 & 0xffffffff00000000 |
                              (ulong)*(ushort *)(*plVar17 + 8));
          local_148 = &local_160;
          local_140 = " old_length: ";
          local_138 = &local_150;
          local_128 = &local_140;
          local_150 = local_170;
          local_130 = pppppppcVar19;
          FUN_00623bb0(&DAT_00259c3c,"../../p2p/base/stun_dictionary.cc",0x6f1);
        }
LAB_00c70344:
        plVar17 = plVar17 + 1;
        if ((long)plVar17 - *plVar18 == 0x1000) {
          plVar18 = plVar18 + 1;
          plVar17 = (long *)*plVar18;
        }
      }
    }
    if (iVar16 <= *(int *)(param_2 + 0x30)) {
      local_110 = (char *)0x0;
      ppcStack_108 = (char **)0x0;
      ppcStack_100 = (char **)0x0;
      if (((ulong)local_80 & 1) != 0) {
        if (local_a8 != local_a0) {
          plVar18 = (long *)(local_a8 + ((ulong)local_90 >> 9) * 8);
          plVar17 = (long *)(*plVar18 + ((ulong)local_90 & 0x1ff) * 8);
          plVar14 = (long *)(*(long *)(local_a8 + ((ulong)(puStack_88 + (long)local_90) >> 9) * 8) +
                            ((ulong)(puStack_88 + (long)local_90) & 0x1ff) * 8);
          if (plVar17 != plVar14) {
            do {
              local_130 = (char *******)CONCAT62(local_130._2_6_,*(undefined2 *)(*plVar17 + 8));
              local_120 = (char *******)&local_130;
              lVar12 = FUN_00c71c60(0,param_2 + 0x18,param_2 + 0x18,&DAT_001f94c3,&local_120,
                                    &local_140);
              if (*(undefined1 **)(lVar12 + 0x28) < puVar6) {
                local_130 = (char *******)CONCAT62(local_130._2_6_,*(undefined2 *)(*plVar17 + 8));
                local_120 = (char *******)&local_130;
                lVar12 = FUN_00c71c60(0,param_2 + 0x18,param_2 + 0x18,&DAT_001f94c3,&local_120,
                                      &local_140);
                *(undefined1 **)(lVar12 + 0x28) = puVar6;
                uVar4 = *(undefined2 *)(*plVar17 + 8);
                local_120._0_2_ = uVar4;
                if (ppcStack_108 < ppcStack_100) {
                  if (ppcStack_108 == (char **)0x0) {
                    /* WARNING: Subroutine does not return */
                    std::__Cr::__libcpp_verbose_abort
                              ("%s",
                               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                              );
                  }
                  ppcVar9 = (char **)((long)ppcStack_108 + 2);
                  *(undefined2 *)ppcStack_108 = uVar4;
                }
                else {
                  ppcVar9 = (char **)FUN_007d40ec(&local_110,&local_120);
                }
                ppcStack_108 = ppcVar9;
                iVar7 = (**(code **)(*(long *)*plVar17 + 0x10))();
                lVar12 = *plVar17;
                if ((iVar7 == 5) && (*(short *)(lVar12 + 10) == 0)) {
                  local_120 = (char *******)CONCAT62(local_120._2_6_,*(undefined2 *)(lVar12 + 8));
                  FUN_00c70798(param_2,&local_120);
                }
                else {
                  local_130 = (char *******)CONCAT62(local_130._2_6_,*(undefined2 *)(lVar12 + 8));
                  local_120 = (char *******)&local_130;
                  lVar12 = FUN_00c71d68(0,param_2,param_2,&DAT_001f94c3,&local_120,&local_140);
                  lVar15 = *plVar17;
                  *plVar17 = 0;
                  plVar10 = *(long **)(lVar12 + 0x28);
                  *(long *)(lVar12 + 0x28) = lVar15;
                  if (plVar10 != (long *)0x0) {
                    (**(code **)(*plVar10 + 8))();
                  }
                }
              }
              plVar17 = plVar17 + 1;
              if ((long)plVar17 - *plVar18 == 0x1000) {
                plVar18 = plVar18 + 1;
                plVar17 = (long *)*plVar18;
              }
            } while (plVar17 != plVar14);
          }
        }
        *(int *)(param_2 + 0x34) = iVar16;
        pvVar11 = operator_new(0x18);
        FUN_00c6c7b8(pvVar11,0xc05d,puVar6);
        *param_1 = 0;
        *(undefined1 *)((long)param_1 + 0x26) = 0;
        *(char ***)(param_1 + 0x10) = ppcStack_100;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        *(undefined8 *)((long)param_1 + 0x1d) = 0;
        *(void **)(param_1 + 10) = pvVar11;
        *(char ***)(param_1 + 0xe) = ppcStack_108;
        *(char **)(param_1 + 0xc) = local_110;
        *(undefined1 *)(param_1 + 0x12) = 1;
        goto joined_r0x00c7065c;
      }
      goto LAB_00c70784;
    }
    uVar8 = FUN_00417e08();
    if ((uVar8 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6148,"../../p2p/base/stun_dictionary.cc",0x739," bytes_stored_: ",
                   *(undefined4 *)(param_2 + 0x34)," new_bytes_stored: ",iVar16);
    }
    *(undefined1 *)(param_1 + 9) = 0;
    iVar16 = 9;
LAB_00c70720:
    param_1[8] = 0;
    *param_1 = iVar16;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)((long)param_1 + 0x26) = 0;
  }
  else {
    local_110 = (char *)CONCAT44(local_110._4_4_,(int)local_e0);
    puVar13 = (undefined8 *)((ulong)&local_e0 | 8);
    ppcStack_100 = (char **)puVar13[1];
    ppcStack_108 = (char **)*puVar13;
    local_f8 = puVar13[2];
    local_f0 = (int)local_c0;
    *param_1 = (int)local_e0;
    uStack_ec = (undefined3)((ulong)local_c0 >> 0x20);
    if (local_f8 < 0) {
      FUN_005478d8(param_1 + 2,ppcStack_108,ppcStack_100);
      *(undefined1 *)(param_1 + 10) = 0;
      param_1[8] = local_f0;
      *(uint *)((long)param_1 + 0x23) = CONCAT31(uStack_ec,local_f0._3_1_);
      *(undefined1 *)(param_1 + 0x12) = 0;
      if (local_f8 < 0) {
        operator_delete(ppcStack_108);
      }
      goto joined_r0x00c7065c;
    }
    *(char ***)(param_1 + 4) = ppcStack_100;
    *(char ***)(param_1 + 2) = ppcStack_108;
    *(long *)(param_1 + 6) = local_f8;
    param_1[8] = local_f0;
    *(undefined4 *)((long)param_1 + 0x23) = local_c0._3_4_;
  }
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
joined_r0x00c7065c:
  if (((ulong)local_80 & 1) != 0) {
    FUN_00c6fec4(&puStack_b0);
  }
  return;
}


// ===== 00c70798  FUN_00c70798 =====

long * FUN_00c70798(undefined8 *param_1,ushort *param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar3 = (long *)param_1[1];
  if (plVar3 != (long *)0x0) {
    plVar6 = plVar3;
    do {
      while (*(ushort *)(plVar6 + 4) <= *param_2) {
        if (*param_2 == *(ushort *)(plVar6 + 4)) {
          if (plVar6 != param_1 + 1) {
            plVar4 = plVar6;
            plVar1 = (long *)plVar6[1];
            if ((long *)plVar6[1] == (long *)0x0) {
              do {
                plVar5 = (long *)plVar4[2];
                bVar2 = plVar4 != (long *)*plVar5;
                plVar4 = plVar5;
              } while (bVar2);
            }
            else {
              do {
                plVar5 = plVar1;
                plVar1 = (long *)*plVar5;
              } while ((long *)*plVar5 != (long *)0x0);
            }
            if ((long *)*param_1 == plVar6) {
              *param_1 = plVar5;
            }
            param_1[2] = param_1[2] + -1;
            FUN_005d5d48(plVar3,plVar6);
            if (plVar6 != (long *)0xffffffffffffffe0) {
              plVar3 = (long *)plVar6[5];
              plVar6[5] = 0;
              if (plVar3 != (long *)0x0) {
                (**(code **)(*plVar3 + 8))();
              }
              operator_delete(plVar6);
              return (long *)1;
            }
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          goto LAB_00c7080c;
        }
        plVar6 = (long *)plVar6[1];
        if (plVar6 == (long *)0x0) goto LAB_00c7080c;
      }
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
LAB_00c7080c:
    plVar3 = (long *)0x0;
  }
  return plVar3;
}


// ===== 00c708a0  FUN_00c708a0 =====

void FUN_00c708a0(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}


// ===== 00c708b0  FUN_00c708b0 =====

void * FUN_00c708b0(byte *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  void *pvVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  
  if (((*param_1 & 1) == 0) && (*(long *)(param_1 + 0x18) != *(long *)(param_1 + 0x20))) {
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_008792d8(&local_70);
    puVar1 = local_70;
    puVar9 = local_70 + 2;
    puVar8 = puVar1;
    puVar11 = puStack_68;
    puVar7 = local_60;
    if (puStack_68 < puVar9) {
      puVar11 = puVar9;
      if (puVar9 <= puStack_68 + ((ulong)puStack_68 >> 1)) {
        puVar11 = puStack_68 + ((ulong)puStack_68 >> 1);
      }
      puVar7 = (undefined1 *)operator_new__((ulong)puVar11);
      puVar5 = local_60;
      if (local_60 != (undefined1 *)0x0) {
        memcpy(puVar7,local_60,(size_t)puVar1);
        local_60 = puVar7;
        operator_delete__(puVar5);
        puVar8 = local_70;
        puVar7 = local_60;
      }
    }
    local_60 = puVar7;
    puStack_68 = puVar11;
    puVar11 = puVar1 + 4;
    *(undefined2 *)(local_60 + (long)puVar8) = 0x8877;
    puVar8 = puStack_68;
    puVar7 = local_60;
    if (puStack_68 < puVar11) {
      puVar8 = puVar11;
      if (puVar11 <= puStack_68 + ((ulong)puStack_68 >> 1)) {
        puVar8 = puStack_68 + ((ulong)puStack_68 >> 1);
      }
      local_70 = puVar9;
      puVar7 = (undefined1 *)operator_new__((ulong)puVar8);
      puVar5 = local_60;
      if (local_60 != (undefined1 *)0x0) {
        memcpy(puVar7,local_60,(size_t)(puVar1 + 2));
        local_60 = puVar7;
        operator_delete__(puVar5);
        puVar9 = local_70;
        puVar7 = local_60;
      }
    }
    local_60 = puVar7;
    puStack_68 = puVar8;
    *(undefined2 *)(local_60 + (long)puVar9) = 0x100;
    puVar9 = puVar1 + 6;
    puVar8 = puStack_68;
    puVar7 = local_60;
    if (puStack_68 < puVar9) {
      puVar8 = puVar9;
      if (puVar9 <= puStack_68 + ((ulong)puStack_68 >> 1)) {
        puVar8 = puStack_68 + ((ulong)puStack_68 >> 1);
      }
      local_70 = puVar11;
      puVar7 = (undefined1 *)operator_new__((ulong)puVar8);
      puVar5 = local_60;
      if (local_60 != (undefined1 *)0x0) {
        memcpy(puVar7,local_60,(size_t)(puVar1 + 4));
        local_60 = puVar7;
        operator_delete__(puVar5);
        puVar11 = local_70;
        puVar7 = local_60;
      }
    }
    local_60 = puVar7;
    puStack_68 = puVar8;
    puVar8 = puVar1 + 8;
    *(undefined2 *)(local_60 + (long)puVar11) = 0xffff;
    puVar11 = puStack_68;
    puVar7 = local_60;
    if (puStack_68 < puVar8) {
      puVar11 = puVar8;
      if (puVar8 <= puStack_68 + ((ulong)puStack_68 >> 1)) {
        puVar11 = puStack_68 + ((ulong)puStack_68 >> 1);
      }
      local_70 = puVar9;
      puVar7 = (undefined1 *)operator_new__((ulong)puVar11);
      puVar5 = local_60;
      if (local_60 != (undefined1 *)0x0) {
        memcpy(puVar7,local_60,(size_t)(puVar1 + 6));
        local_60 = puVar7;
        operator_delete__(puVar5);
        puVar9 = local_70;
        puVar7 = local_60;
      }
    }
    local_60 = puVar7;
    puStack_68 = puVar11;
    puVar11 = puVar1 + 10;
    *(undefined2 *)(local_60 + (long)puVar9) = 0x800;
    puVar9 = puStack_68;
    puVar7 = local_60;
    if (puStack_68 < puVar11) {
      puVar9 = puVar11;
      if (puVar11 <= puStack_68 + ((ulong)puStack_68 >> 1)) {
        puVar9 = puStack_68 + ((ulong)puStack_68 >> 1);
      }
      local_70 = puVar8;
      puVar7 = (undefined1 *)operator_new__((ulong)puVar9);
      puVar5 = local_60;
      if (local_60 != (undefined1 *)0x0) {
        memcpy(puVar7,local_60,(size_t)(puVar1 + 8));
        local_60 = puVar7;
        operator_delete__(puVar5);
        puVar8 = local_70;
        puVar7 = local_60;
      }
    }
    local_60 = puVar7;
    puStack_68 = puVar9;
    *(undefined2 *)(local_60 + (long)puVar8) = 0x400;
    local_70 = puVar11;
    if (*(long *)(param_1 + 0x18) == *(long *)(param_1 + 0x20)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
                );
    }
    puVar1 = puVar1 + 0x12;
    uVar12 = *(ulong *)(*(long *)(param_1 + 0x20) + -0x10);
    puVar9 = puStack_68;
    puVar8 = local_60;
    if (puStack_68 < puVar1) {
      puVar9 = puVar1;
      if (puVar1 <= puStack_68 + ((ulong)puStack_68 >> 1)) {
        puVar9 = puStack_68 + ((ulong)puStack_68 >> 1);
      }
      puVar8 = (undefined1 *)operator_new__((ulong)puVar9);
      puVar7 = local_60;
      if (local_60 != (undefined1 *)0x0) {
        memcpy(puVar8,local_60,(size_t)puVar11);
        local_60 = puVar8;
        operator_delete__(puVar7);
        puVar11 = local_70;
        puVar8 = local_60;
      }
    }
    local_60 = puVar8;
    puStack_68 = puVar9;
    uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
    uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
    *(ulong *)(local_60 + (long)puVar11) = uVar12 >> 0x20 | uVar12 << 0x20;
    lVar3 = *(long *)(param_1 + 0x20);
    puVar9 = local_60;
    for (lVar2 = *(long *)(param_1 + 0x18); local_70 = puVar1, local_60 = puVar9, lVar2 != lVar3;
        lVar2 = lVar2 + 0x10) {
      uVar4 = *(ushort *)(*(long *)(lVar2 + 8) + 8);
      puVar11 = puVar1 + 2;
      puVar7 = puVar1;
      puVar8 = puStack_68;
      if (puStack_68 < puVar11) {
        puVar8 = puVar11;
        if (puVar11 <= puStack_68 + ((ulong)puStack_68 >> 1)) {
          puVar8 = puStack_68 + ((ulong)puStack_68 >> 1);
        }
        puVar9 = (undefined1 *)operator_new__((ulong)puVar8);
        puVar5 = local_60;
        if (local_60 != (undefined1 *)0x0) {
          memcpy(puVar9,local_60,(size_t)puVar1);
          local_60 = puVar9;
          operator_delete__(puVar5);
          puVar7 = local_70;
          puVar9 = local_60;
        }
      }
      local_60 = puVar9;
      puStack_68 = puVar8;
      puVar1 = puVar1 + 4;
      *(ushort *)(local_60 + (long)puVar7) = uVar4 >> 8 | (ushort)((uVar4 & 0xff00ff) << 8);
      uVar4 = *(ushort *)(*(long *)(lVar2 + 8) + 10);
      puVar9 = puStack_68;
      puVar8 = local_60;
      if (puStack_68 < puVar1) {
        puVar9 = puVar1;
        if (puVar1 <= puStack_68 + ((ulong)puStack_68 >> 1)) {
          puVar9 = puStack_68 + ((ulong)puStack_68 >> 1);
        }
        local_70 = puVar11;
        puVar8 = (undefined1 *)operator_new__((ulong)puVar9);
        puVar7 = local_60;
        if (local_60 != (undefined1 *)0x0) {
          memcpy(puVar8,local_60,(size_t)puVar11);
          local_60 = puVar8;
          operator_delete__(puVar7);
          puVar11 = local_70;
          puVar8 = local_60;
        }
      }
      local_60 = puVar8;
      puStack_68 = puVar9;
      *(ushort *)(local_60 + (long)puVar11) = uVar4 >> 8 | (ushort)((uVar4 & 0xff00ff) << 8);
      local_70 = puVar1;
      uVar6 = (**(code **)(**(long **)(lVar2 + 8) + 0x10))();
      puVar11 = local_70;
      puVar9 = local_70 + 2;
      puVar1 = puStack_68;
      puVar8 = local_60;
      if (puStack_68 < puVar9) {
        puVar1 = puVar9;
        if (puVar9 <= puStack_68 + ((ulong)puStack_68 >> 1)) {
          puVar1 = puStack_68 + ((ulong)puStack_68 >> 1);
        }
        puVar8 = (undefined1 *)operator_new__((ulong)puVar1);
        puVar7 = local_60;
        if (local_60 != (undefined1 *)0x0) {
          memcpy(puVar8,local_60,(size_t)puVar11);
          local_60 = puVar8;
          operator_delete__(puVar7);
          puVar11 = local_70;
          puVar8 = local_60;
        }
      }
      local_60 = puVar8;
      puStack_68 = puVar1;
      *(ushort *)(local_60 + (long)puVar11) =
           (ushort)(uVar6 >> 8) & 0xff | (ushort)((uVar6 & 0xff00ff) << 8);
      local_70 = puVar9;
      uVar12 = (**(code **)(**(long **)(lVar2 + 8) + 0x28))(*(long **)(lVar2 + 8),&local_70);
      if ((uVar12 & 1) == 0) {
        uVar12 = FUN_004249b0();
        if ((uVar12 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e94,"../../p2p/base/stun_dictionary.cc",0xacb,
                       "Failed to write key: ",*(undefined2 *)(*(long *)(lVar2 + 8) + 8));
          pvVar10 = (void *)0x0;
        }
        else {
          pvVar10 = (void *)0x0;
        }
        goto LAB_00c70d74;
      }
      puVar1 = local_70;
      puVar9 = local_60;
    }
    pvVar10 = operator_new(0x18);
    FUN_00c6c94c(pvVar10,0xc05c,puVar9,puVar1);
LAB_00c70d74:
    puVar9 = local_60;
    local_60 = (undefined1 *)0x0;
    if (puVar9 != (undefined1 *)0x0) {
      operator_delete__(puVar9);
    }
  }
  else {
    pvVar10 = (void *)0x0;
  }
  return pvVar10;
}


// ===== 00c70dfc  FUN_00c70dfc =====

/* WARNING: Removing unreachable block (ram,0x00c70ed0) */
/* WARNING: Removing unreachable block (ram,0x00c70edc) */
/* WARNING: Removing unreachable block (ram,0x00c70eec) */
/* WARNING: Removing unreachable block (ram,0x00c70ef8) */
/* WARNING: Removing unreachable block (ram,0x00c70f08) */
/* WARNING: Removing unreachable block (ram,0x00c70f0c) */
/* WARNING: Removing unreachable block (ram,0x00c70f14) */
/* WARNING: Removing unreachable block (ram,0x00c70f18) */
/* WARNING: Removing unreachable block (ram,0x00c70f20) */
/* WARNING: Removing unreachable block (ram,0x00c70f24) */
/* WARNING: Removing unreachable block (ram,0x00c70f2c) */
/* WARNING: Removing unreachable block (ram,0x00c70f30) */
/* WARNING: Removing unreachable block (ram,0x00c70f34) */
/* WARNING: Removing unreachable block (ram,0x00c70f38) */
/* WARNING: Removing unreachable block (ram,0x00c70f3c) */
/* WARNING: Removing unreachable block (ram,0x00c70f68) */
/* WARNING: Removing unreachable block (ram,0x00c70f6c) */
/* WARNING: Removing unreachable block (ram,0x00c70f40) */
/* WARNING: Removing unreachable block (ram,0x00c70f4c) */
/* WARNING: Removing unreachable block (ram,0x00c70f64) */
/* WARNING: Removing unreachable block (ram,0x00c70f8c) */

void FUN_00c70dfc(long param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined2 local_14 [2];
  
  puVar5 = *(ulong **)(param_1 + 0x18);
  puVar1 = *(ulong **)(param_1 + 0x20);
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (puVar5 == puVar1) {
LAB_00c70e40:
    if ((puVar5 != puVar1) && (puVar3 = puVar5 + 2, puVar3 != puVar1)) {
      do {
        if (uVar2 < *puVar3) {
          *puVar5 = *puVar3;
          puVar5[1] = puVar3[1];
          puVar5 = puVar5 + 2;
        }
        puVar3 = puVar3 + 2;
      } while (puVar3 != puVar1);
      puVar1 = *(ulong **)(param_1 + 0x20);
    }
    puVar3 = puVar5;
    if (puVar5 != puVar1) {
      do {
        local_14[0] = *(undefined2 *)(puVar3[1] + 8);
        FUN_00c70798(param_1 + 0x30,local_14);
        puVar1 = *(ulong **)(param_1 + 0x20);
        puVar3 = puVar3 + 2;
      } while (puVar3 != puVar1);
    }
    if (puVar1 < puVar5) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:1170: libc++ Hardening assertion __first <= __last failed: vector::erase(first, last) called with invalid range\n"
                );
    }
    if (puVar5 != puVar1) {
      uVar4 = (ulong)((long)puVar1 + (-0x10 - ((long)puVar1 << 0x3c))) >> 4;
      uVar2 = (ulong)(((long)puVar5 - (long)puVar1 << 0x3c) - ((long)puVar5 - (long)puVar1)) >> 4;
      if (uVar4 <= uVar2) {
        uVar2 = uVar4;
      }
      if ((1 < uVar2) && ((((int)puVar5 - (int)puVar1 | -(int)puVar1) & 0xfU) == 0)) {
        uVar2 = uVar2 & 0xffffffffffffffe;
        puVar1 = puVar1 + uVar2 * -2;
        do {
          uVar2 = uVar2 - 2;
        } while (uVar2 != 0);
      }
      while (puVar1 != puVar5) {
        puVar1 = puVar1 + -2;
        if (puVar1 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      *(ulong **)(param_1 + 0x20) = puVar5;
    }
  }
  else {
    do {
      if (*puVar5 <= uVar2) goto LAB_00c70e40;
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar1);
  }
  return;
}


// ===== 00c71030  FUN_00c71030 =====

void FUN_00c71030(long *param_1)

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
  
  if ((ulong)param_1[4] < 0x200) {
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
      FUN_00c714a0(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_00c719c4(&local_50,lVar5);
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
      FUN_00c714a0(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0x1000);
    FUN_00c71728(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x200;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_00c71218(param_1,&local_50);
  return;
}


// ===== 00c71218  FUN_00c71218 =====

void FUN_00c71218(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_00c71488;
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
LAB_00c71488:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c714a0  FUN_00c714a0 =====

void FUN_00c714a0(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_00c71710;
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
LAB_00c71710:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c71728  FUN_00c71728 =====

void FUN_00c71728(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_00c719ac;
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
LAB_00c719ac:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c719c4  FUN_00c719c4 =====

void FUN_00c719c4(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_00c71c48;
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
LAB_00c71c48:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c71c60  FUN_00c71c60 =====

undefined1  [16]
FUN_00c71c60(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  ushort uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  ushort *puVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  puVar6 = (ushort *)*param_5;
  plVar4 = param_2 + 1;
  plVar7 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    uVar1 = *puVar6;
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, uVar1 < *(ushort *)(plVar3 + 4)) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_00c71cc8;
      }
      if (uVar1 == *(ushort *)(plVar3 + 4)) {
        uVar5 = 0;
        goto LAB_00c71d38;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_00c71cc8:
  plVar3 = (long *)operator_new(0x30);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar1 = *puVar6;
  plVar3[5] = 0;
  *plVar3 = 0;
  plVar3[1] = 0;
  *(ushort *)(plVar3 + 4) = uVar1;
  plVar3[2] = (long)plVar4;
  *plVar7 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar4 = (long *)*plVar7;
  }
  FUN_005d5b94(param_2[1],plVar4);
  uVar5 = 1;
  param_2[2] = param_2[2] + 1;
LAB_00c71d38:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 00c71d68  FUN_00c71d68 =====

undefined1  [16]
FUN_00c71d68(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  ushort uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  ushort *puVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  puVar6 = (ushort *)*param_5;
  plVar4 = param_2 + 1;
  plVar7 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    uVar1 = *puVar6;
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, uVar1 < *(ushort *)(plVar3 + 4)) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_00c71dd0;
      }
      if (uVar1 == *(ushort *)(plVar3 + 4)) {
        uVar5 = 0;
        goto LAB_00c71e40;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_00c71dd0:
  plVar3 = (long *)operator_new(0x30);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar1 = *puVar6;
  plVar3[5] = 0;
  *plVar3 = 0;
  plVar3[1] = 0;
  *(ushort *)(plVar3 + 4) = uVar1;
  plVar3[2] = (long)plVar4;
  *plVar7 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar4 = (long *)*plVar7;
  }
  FUN_005d5b94(param_2[1],plVar4);
  uVar5 = 1;
  param_2[2] = param_2[2] + 1;
LAB_00c71e40:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 00c71e70  FUN_00c71e70 =====

void FUN_00c71e70(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 0x12) = 2;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined2 *)(param_1 + 0x17) = 0;
  return;
}


// ===== 00c71ec0  FUN_00c71ec0 =====

void FUN_00c71ec0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[1];
  uVar3 = *param_2;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  FUN_00c71f0c(param_1 + 7,param_2 + 7);
  *(undefined2 *)(param_1 + 0x17) = *(undefined2 *)(param_2 + 0x17);
  return;
}


// ===== 00c71f0c  FUN_00c71f0c =====

void FUN_00c71f0c(undefined8 *param_1,long *param_2)

{
  void *pvVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar4 = *param_2;
  lVar7 = param_2[1];
  uVar2 = lVar7 - lVar4;
  if (uVar2 != 0) {
    if (0x94f2094f2094f2 < (ulong)(((long)uVar2 >> 3) * 0x6fb586fb586fb587)) {
      FUN_00c721bc();
      goto LAB_00c720ac;
    }
    pvVar3 = operator_new(uVar2);
    *param_1 = pvVar3;
    param_1[1] = pvVar3;
    param_1[2] = (long)pvVar3 + uVar2;
    do {
      if (pvVar3 == (void *)0x0) goto LAB_00c72094;
      FUN_00afef10(pvVar3,lVar4);
      lVar9 = lVar4 + 0x1b8;
      uVar8 = *(undefined8 *)(lVar4 + 0x198);
      uVar6 = *(undefined8 *)(lVar4 + 0x1b0);
      uVar5 = *(undefined8 *)(lVar4 + 0x1a8);
      pvVar1 = (void *)((long)pvVar3 + 0x1b8);
      *(undefined8 *)((long)pvVar3 + 0x1a0) = *(undefined8 *)(lVar4 + 0x1a0);
      *(undefined8 *)((long)pvVar3 + 0x198) = uVar8;
      *(undefined8 *)((long)pvVar3 + 0x1b0) = uVar6;
      *(undefined8 *)((long)pvVar3 + 0x1a8) = uVar5;
      lVar4 = lVar9;
      pvVar3 = pvVar1;
    } while (lVar9 != lVar7);
    param_1[1] = pvVar1;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar4 = param_2[3];
  lVar7 = param_2[4];
  uVar2 = lVar7 - lVar4;
  if (uVar2 != 0) {
    if (0x40810204081020 < (ulong)(((long)uVar2 >> 3) * 0x7efdfbf7efdfbf7f)) {
LAB_00c720ac:
      lVar4 = FUN_00c5a76c();
      FUN_00c720bc(lVar4 + 0x38);
      return;
    }
    pvVar3 = operator_new(uVar2);
    param_1[3] = pvVar3;
    param_1[4] = pvVar3;
    param_1[5] = (long)pvVar3 + uVar2;
    do {
      if (pvVar3 == (void *)0x0) {
LAB_00c72094:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_00c6e8e4(pvVar3,lVar4);
      lVar4 = lVar4 + 0x3f8;
      pvVar3 = (void *)((long)pvVar3 + 0x3f8);
    } while (lVar4 != lVar7);
    param_1[4] = pvVar3;
  }
  lVar10 = param_2[7];
  lVar9 = param_2[6];
  lVar7 = param_2[9];
  lVar4 = param_2[8];
  uVar5 = *(undefined8 *)((long)param_2 + 0x4c);
  *(undefined8 *)((long)param_1 + 0x54) = *(undefined8 *)((long)param_2 + 0x54);
  *(undefined8 *)((long)param_1 + 0x4c) = uVar5;
  param_1[7] = lVar10;
  param_1[6] = lVar9;
  param_1[9] = lVar7;
  param_1[8] = lVar4;
  if (*(char *)((long)param_2 + 0x77) < '\0') {
    FUN_005478d8(param_1 + 0xc,param_2[0xc],param_2[0xd]);
  }
  else {
    lVar7 = param_2[0xd];
    lVar4 = param_2[0xc];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = lVar7;
    param_1[0xc] = lVar4;
  }
  *(int *)(param_1 + 0xf) = (int)param_2[0xf];
  return;
}


// ===== 00c720b0  FUN_00c720b0 =====

void FUN_00c720b0(long param_1)

{
  FUN_00c720bc(param_1 + 0x38);
  return;
}


// ===== 00c720bc  FUN_00c720bc =====

void FUN_00c720bc(long *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    operator_delete((void *)param_1[0xc]);
    pvVar3 = (void *)param_1[3];
  }
  else {
    pvVar3 = (void *)param_1[3];
  }
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)*param_1;
  }
  else {
    pvVar2 = (void *)param_1[4];
    pvVar1 = pvVar3;
    if (pvVar3 != pvVar2) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -0x3f8);
        if (pvVar2 == (void *)0x0) goto LAB_00c721a8;
        FUN_00c6e96c(pvVar2);
      } while (pvVar2 != pvVar3);
      pvVar1 = (void *)param_1[3];
    }
    param_1[4] = (long)pvVar3;
    operator_delete(pvVar1);
    pvVar3 = (void *)*param_1;
  }
  if (pvVar3 == (void *)0x0) {
    return;
  }
  pvVar2 = (void *)param_1[1];
  pvVar1 = pvVar3;
  if (pvVar3 != pvVar2) {
    do {
      pvVar2 = (void *)((long)pvVar2 + -0x1b8);
      if (pvVar2 == (void *)0x0) {
LAB_00c721a8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_00aff0f8(pvVar2);
    } while (pvVar2 != pvVar3);
    pvVar1 = (void *)*param_1;
  }
  param_1[1] = (long)pvVar3;
  operator_delete(pvVar1);
  return;
}


// ===== 00c721bc  FUN_00c721bc =====

void FUN_00c721bc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c721d4  FUN_00c721d4 =====

undefined4 FUN_00c721d4(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    return 3;
  }
  if (*(int *)(param_1 + 0x40) == 1) {
    return 2;
  }
  uVar1 = FUN_00c769e8(param_1 + 0x48);
  uVar2 = 1;
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  return uVar2;
}


// ===== 00c72224  FUN_00c72224 =====

undefined8 FUN_00c72224(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 *local_b0;
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
  undefined2 uStack_58;
  undefined6 uStack_56;
  undefined2 uStack_50;
  undefined6 uStack_4e;
  undefined2 uStack_48;
  undefined6 uStack_46;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_00c77cf0(*(long *)(param_1 + 0x38),param_2,param_3);
  }
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_58 = 0xaaaa;
  uStack_56 = 0xaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_48 = 0xaaaa;
  uStack_46 = 0xaaaaaaaaaaaa;
  uStack_50 = 0xaaaa;
  uStack_4e = 0xaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00897b38(&local_b0);
  if (*(char *)(param_1 + 0x110) == '\x01') {
    puStack_a8 = *(undefined1 **)(param_1 + 0xa8);
    local_b0 = *(undefined1 **)(param_1 + 0xa0);
    local_a0 = (undefined1 *)CONCAT44(local_a0._4_4_,*(undefined4 *)(param_1 + 0xb0));
    if (&local_b0 == (undefined1 **)(param_1 + 0xa0)) {
      puStack_78 = *(undefined1 **)(param_1 + 0xd8);
      local_80 = *(undefined1 **)(param_1 + 0xd0);
      puStack_68 = *(undefined1 **)(param_1 + 0xe8);
      puStack_70 = *(undefined1 **)(param_1 + 0xe0);
      local_60 = *(undefined1 **)(param_1 + 0xf0);
      uStack_58 = (undefined2)*(undefined8 *)(param_1 + 0xf8);
      uStack_4e = (undefined6)*(undefined8 *)(param_1 + 0x102);
      uStack_48 = (undefined2)((ulong)*(undefined8 *)(param_1 + 0x102) >> 0x30);
      uStack_56 = (undefined6)*(undefined8 *)(param_1 + 0xfa);
      uStack_50 = (undefined2)((ulong)*(undefined8 *)(param_1 + 0xfa) >> 0x30);
    }
    else {
      FUN_00c7599c(&puStack_98,*(long *)(param_1 + 0xb8),*(long *)(param_1 + 0xc0),
                   *(long *)(param_1 + 0xc0) - *(long *)(param_1 + 0xb8));
      puStack_78 = *(undefined1 **)(param_1 + 0xd8);
      local_80 = *(undefined1 **)(param_1 + 0xd0);
      puStack_68 = *(undefined1 **)(param_1 + 0xe8);
      puStack_70 = *(undefined1 **)(param_1 + 0xe0);
      local_60 = *(undefined1 **)(param_1 + 0xf0);
      uStack_58 = (undefined2)*(undefined8 *)(param_1 + 0xf8);
      uStack_4e = (undefined6)*(undefined8 *)(param_1 + 0x102);
      uStack_48 = (undefined2)((ulong)*(undefined8 *)(param_1 + 0x102) >> 0x30);
      uStack_56 = (undefined6)*(undefined8 *)(param_1 + 0xfa);
      uStack_50 = (undefined2)((ulong)*(undefined8 *)(param_1 + 0xfa) >> 0x30);
      if (*(char *)(param_1 + 0x110) != '\x01') goto LAB_00c7230c;
    }
    FUN_00897c8c(param_1 + 0xa0);
    *(undefined1 *)(param_1 + 0x110) = 0;
  }
LAB_00c7230c:
  (**(code **)(**(long **)(param_1 + 0x30) + 0x18))
            (*(long **)(param_1 + 0x30),param_2,param_3,&local_b0,0);
  *param_4 = param_3;
  FUN_00897c8c(&local_b0);
  return 1;
}


// ===== 00c72358  FUN_00c72358 =====

undefined8 FUN_00c72358(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_00c77dd8();
  }
  return 0;
}


// ===== 00c72384  FUN_00c72384 =====

uint FUN_00c72384(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = FUN_00c768cc(param_1 + 0x48);
  if ((lVar2 != 0) && (uVar3 = FUN_004022fc(), (uVar3 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f4e98,"../../p2p/dtls/dtls_transport.cc",0x6b2,"Packet already in queue.");
  }
  uVar1 = FUN_00c76b10(param_1 + 0x48,param_2,param_3,0);
  if (((uVar1 & 1) == 0) && (uVar3 = FUN_004249b0(), (uVar3 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f4e98,"../../p2p/dtls/dtls_transport.cc",0x6fb,
                 "Failed to write packet to queue.");
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_00c786b8(*(long *)(param_1 + 0x38),param_2,param_3);
  }
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
    (**(code **)(param_1 + 0x28))(param_1 + 0x10,2,0);
  }
  return uVar1 & 1;
}


// ===== 00c72460  FUN_00c72460 =====

undefined4 FUN_00c72460(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}


// ===== 00c7246c  FUN_00c7246c =====

void FUN_00c7246c(long param_1)

{
  FUN_00c768d8(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}


// ===== 00c7249c  FUN_00c7249c =====

void FUN_00c7249c(undefined8 *param_1,long *param_2,undefined8 *param_3,long param_4,
                 undefined4 param_5,undefined8 *param_6)

{
  int ****ppppiVar1;
  void *__src;
  ulong __n;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  void *__dest;
  undefined8 *puVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *local_80 [2];
  code *local_70;
  code *pcStack_68;
  int ***local_58;
  ulong local_50;
  byte bStack_41;
  
  FUN_00c78b7c();
  *param_1 = &PTR_FUN_00d4e3e0;
  uVar4 = *param_6;
  param_1[0x27] = param_6[1];
  param_1[0x26] = uVar4;
  param_1[0x28] = param_6[2];
  puVar6 = (undefined8 *)param_6[3];
  param_1[0x29] = puVar6;
  pcVar7 = (code *)*puVar6;
  if (pcVar7 != (code *)0x0) {
    uVar4 = (*pcVar7)(*param_6);
    param_1[0x26] = uVar4;
  }
  lVar8 = *param_2;
  param_1[0x2a] = lVar8;
  if (lVar8 != 0) {
    FUN_00d0f740(1,lVar8 + 8);
  }
  lVar9 = param_2[4];
  lVar8 = param_2[3];
  lVar10 = param_2[1];
  param_1[0x2c] = param_2[2];
  param_1[0x2b] = lVar10;
  param_1[0x2e] = lVar9;
  param_1[0x2d] = lVar8;
  plVar5 = (long *)(**(code **)(*(long *)*param_3 + 0x20))();
  uVar3 = (**(code **)(*plVar5 + 0x60))();
  *(undefined4 *)((long)param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x2f) = uVar3;
  param_1[0x30] = 0;
  uVar4 = *param_3;
  *param_3 = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x31] = uVar4;
  FUN_007ebed4(param_1 + 0x34,param_4);
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  __src = *(void **)(param_4 + 8);
  lVar8 = *(long *)(param_4 + 0x10);
  param_1[0x39] = 0;
  __n = lVar8 - (long)__src;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d4754();
    }
    __dest = operator_new(__n);
    param_1[0x37] = __dest;
    param_1[0x39] = (long)__dest + __n;
    memcpy(__dest,__src,__n);
    param_1[0x38] = (long)__dest + __n;
  }
  *(undefined1 *)(param_1 + 0x3a) = 0;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)((long)param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x3d) = param_5;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  local_70 = FUN_004473ec;
  pcStack_68 = FUN_00c75b38;
  local_80[0] = param_1;
  FUN_00c779f8(param_1 + 0x4a,local_80);
  (*local_70)(0,local_80,local_80);
  param_1[0x5f] = 0;
  param_1[0x5e] = FUN_00433984;
  *(undefined1 *)(param_1 + 0x60) = 0;
  FUN_007ebcec(param_1 + 0x61);
  *(undefined1 *)(param_1 + 0x62) = 0;
  FUN_00c726f4(param_1);
  (**(code **)(*(long *)param_1[0x2b] + 0x10))
            (&local_58,(long *)param_1[0x2b],"WebRTC-IceHandshakeDtls",0x17);
  bVar2 = false;
  if (-1 < (char)bStack_41) {
    local_50 = (ulong)bStack_41;
  }
  if (6 < local_50) {
    ppppiVar1 = (int ****)local_58;
    if (-1 < (char)bStack_41) {
      ppppiVar1 = &local_58;
    }
    bVar2 = *(int *)ppppiVar1 == 0x62616e45 && *(int *)((long)ppppiVar1 + 3) == 0x64656c62;
  }
  if ((char)bStack_41 < '\0') {
    operator_delete(local_58);
  }
  *(bool *)((long)param_1 + 0x243) = bVar2;
  return;
}


// ===== 00c726f4  FUN_00c726f4 =====

void FUN_00c726f4(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *local_120;
  code *pcStack_118;
  code *local_110;
  code *pcStack_108;
  long *local_100 [2];
  code *local_f0;
  code *pcStack_e8;
  long *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  long *local_c0 [2];
  code *local_b0;
  code *pcStack_a8;
  long *local_a0 [2];
  code *local_90;
  code *pcStack_88;
  long *local_80 [2];
  code *local_70;
  code *pcStack_68;
  long *local_60 [2];
  code *local_50;
  code *pcStack_48;
  
  uVar1 = (**(code **)(*param_1 + 0xd0))();
  local_50 = FUN_004473ec;
  pcStack_48 = FUN_00c75c64;
  local_60[0] = param_1;
  FUN_00bc8598(uVar1,param_1,local_60);
  (*local_50)(0,local_60,local_60);
  uVar1 = (**(code **)(*param_1 + 0xd0))(param_1);
  local_70 = FUN_004473ec;
  pcStack_68 = FUN_00c75c70;
  local_80[0] = param_1;
  FUN_00bc83e4(uVar1,param_1,local_80);
  (*local_70)(0,local_80,local_80);
  lVar2 = (**(code **)(*param_1 + 0xd0))(param_1);
  lVar4 = param_1[0x61];
  if (lVar4 != 0) {
    FUN_00d0f740(1,lVar4);
  }
  local_120 = (long *)operator_new(0x20);
  *local_120 = (long)param_1;
  local_120[1] = lVar4;
  local_120[2] = (long)FUN_00c75cd8;
  local_120[3] = (long)FUN_00c75c80;
  pcStack_118 = FUN_00c46464;
  local_110 = FUN_00c46474;
  FUN_007b5b08(lVar2 + 0x50,param_1,&local_120);
  uVar1 = (**(code **)(*param_1 + 0xd0))(param_1);
  local_90 = FUN_004473ec;
  pcStack_88 = FUN_00c75d5c;
  local_a0[0] = param_1;
  FUN_00bc8678(uVar1,param_1,local_a0);
  (*local_90)(0,local_a0,local_a0);
  uVar1 = (**(code **)(*param_1 + 0xd0))(param_1);
  local_b0 = FUN_004473ec;
  pcStack_a8 = FUN_00c75dac;
  local_c0[0] = param_1;
  FUN_00bc8758(uVar1,param_1,local_c0);
  (*local_b0)(0,local_c0,local_c0);
  uVar1 = (**(code **)(*param_1 + 0xd0))(param_1);
  local_d0 = FUN_004473ec;
  pcStack_c8 = FUN_00c75db8;
  local_e0[0] = param_1;
  FUN_00bc882c(uVar1,param_1,local_e0);
  (*local_d0)(0,local_e0,local_e0);
  plVar3 = (long *)(**(code **)(*param_1 + 0xd0))(param_1);
  local_110 = FUN_004473ec;
  pcStack_108 = FUN_00c75df4;
  local_f0 = FUN_004473ec;
  pcStack_e8 = FUN_00c76188;
  local_120 = param_1;
  local_100[0] = param_1;
  (**(code **)(*plVar3 + 0xf0))(plVar3,&local_120);
  (*local_f0)(0,local_100,local_100);
  (*local_110)(0,&local_120,&local_120);
  (*(code *)param_1[0x5e])(0,param_1 + 0x5c,param_1 + 0x5c);
  param_1[0x5c] = (long)param_1;
  param_1[0x5e] = (long)FUN_004473ec;
  param_1[0x5f] = (long)FUN_00c763a4;
  return;
}


// ===== 00c72978  FUN_00c72978 =====

void FUN_00c72978(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  void *pvVar9;
  
  *param_1 = (long)&PTR_FUN_00d4e3e0;
  plVar2 = (long *)(**(code **)(*(long *)param_1[0x31] + 0x20))();
  (**(code **)(*plVar2 + 0xe8))();
  uVar3 = (**(code **)(*param_1 + 0xd0))(param_1);
  FUN_00bc847c(uVar3,param_1);
  FUN_007ebdcc(param_1[0x61]);
  pvVar8 = (void *)param_1[0x61];
  if ((pvVar8 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar8), iVar1 == 1)) {
    operator_delete(pvVar8);
  }
  (*(code *)param_1[0x5e])(0,param_1 + 0x5c,param_1 + 0x5c);
  FUN_00c77a74(param_1 + 0x4a);
  pvVar8 = (void *)param_1[0x45];
  if (pvVar8 != (void *)0x0) {
    pvVar5 = pvVar8;
    pvVar4 = (void *)param_1[0x46];
    if (pvVar8 != (void *)param_1[0x46]) {
      do {
        pvVar5 = (void *)((long)pvVar4 + -0x10);
        if (pvVar5 == (void *)0x0) goto LAB_00c72bc8;
        pvVar9 = *(void **)((long)pvVar4 + -8);
        *(undefined8 *)((long)pvVar4 + -8) = 0;
        if (pvVar9 != (void *)0x0) {
          pvVar4 = *(void **)((long)pvVar9 + 0x10);
          *(undefined8 *)((long)pvVar9 + 0x10) = 0;
          if (pvVar4 != (void *)0x0) {
            operator_delete__(pvVar4);
          }
          operator_delete(pvVar9);
        }
        pvVar4 = pvVar5;
      } while (pvVar5 != pvVar8);
      pvVar5 = (void *)param_1[0x45];
    }
    param_1[0x46] = (long)pvVar8;
    operator_delete(pvVar5);
  }
  if (*(char *)((long)param_1 + 0x21f) < '\0') {
    operator_delete((void *)param_1[0x41]);
  }
  pvVar8 = (void *)param_1[0x40];
  param_1[0x40] = 0;
  if (pvVar8 != (void *)0x0) {
    operator_delete__(pvVar8);
  }
  pvVar8 = (void *)param_1[0x3b];
  if ((pvVar8 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar8), iVar1 == 1)) {
    FUN_00833e18(pvVar8);
    operator_delete(pvVar8);
  }
  pvVar8 = (void *)param_1[0x37];
  if (pvVar8 == (void *)0x0) {
LAB_00c72b5c:
    pvVar8 = (void *)param_1[0x34];
    if (pvVar8 == (void *)0x0) {
LAB_00c72bec:
      plVar2 = (long *)param_1[0x32];
      param_1[0x32] = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if ((long *)param_1[0x31] != (long *)0x0) {
        (**(code **)(*(long *)param_1[0x31] + 8))();
      }
      plVar2 = (long *)param_1[0x2a];
      if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
        (**(code **)(*plVar2 + 8))(plVar2);
      }
      if (*(code **)(param_1[0x29] + 8) != (code *)0x0) {
        (**(code **)(param_1[0x29] + 8))(param_1[0x26]);
      }
      FUN_00c78bbc(param_1);
      return;
    }
    pvVar5 = (void *)param_1[0x35];
    uVar7 = (ulong)((long)pvVar5 + (-4 - ((long)pvVar5 << 0x3e))) >> 2;
    uVar6 = (ulong)(((long)pvVar8 - (long)pvVar5 << 0x3e) - ((long)pvVar8 - (long)pvVar5)) >> 2;
    if (uVar7 <= uVar6) {
      uVar6 = uVar7;
    }
    if ((1 < uVar6) && ((((int)pvVar8 - (int)pvVar5 | -(int)pvVar5) & 3U) == 0)) {
      uVar6 = uVar6 & 0x3ffffffffffffffe;
      pvVar5 = (void *)((long)pvVar5 + uVar6 * -4);
      do {
        uVar6 = uVar6 - 2;
      } while (uVar6 != 0);
    }
    do {
      if (pvVar5 == pvVar8) {
        param_1[0x35] = (long)pvVar8;
        operator_delete(pvVar8);
        goto LAB_00c72bec;
      }
      pvVar5 = (void *)((long)pvVar5 + -4);
    } while (pvVar5 != (void *)0x0);
  }
  else {
    pvVar5 = (void *)param_1[0x38];
    uVar7 = (ulong)((long)pvVar5 + ((long)pvVar5 << 0x3f) + -2) >> 1;
    uVar6 = (ulong)(((long)pvVar8 - (long)pvVar5 << 0x3f) - ((long)pvVar8 - (long)pvVar5)) >> 1;
    if (uVar7 <= uVar6) {
      uVar6 = uVar7;
    }
    if ((1 < uVar6) && ((((int)pvVar8 - (uint)pvVar5 | (uint)pvVar5) & 1) == 0)) {
      uVar6 = uVar6 & 0x7ffffffffffffffe;
      pvVar5 = (void *)((long)pvVar5 + uVar6 * -2);
      do {
        uVar6 = uVar6 - 2;
      } while (uVar6 != 0);
    }
    do {
      if (pvVar5 == pvVar8) {
        param_1[0x38] = (long)pvVar8;
        operator_delete(pvVar8);
        goto LAB_00c72b5c;
      }
      pvVar5 = (void *)((long)pvVar5 + -2);
    } while (pvVar5 != (void *)0x0);
  }
LAB_00c72bc8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c72c70  FUN_00c72c70 =====

void FUN_00c72c70(void *param_1)

{
  FUN_00c72978();
  operator_delete(param_1);
  return;
}


// ===== 00c72ca0  FUN_00c72ca0 =====

undefined4 FUN_00c72ca0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x17c);
}


// ===== 00c72cac  FUN_00c72cac =====

void FUN_00c72cac(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(**(long **)(param_1 + 0x188) + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x00c72cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)();
  return;
}


// ===== 00c72cdc  FUN_00c72cdc =====

undefined4 FUN_00c72cdc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x178);
}


// ===== 00c72ce8  FUN_00c72ce8 =====

undefined1 FUN_00c72ce8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1d0);
}


// ===== 00c72cf4  FUN_00c72cf4 =====

undefined4 FUN_00c72cf4(long param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  void *pvVar6;
  void *local_48 [2];
  char cStack_31;
  
  if (*(char *)(param_1 + 0x1d0) == '\x01') {
    if (*param_2 != *(long *)(param_1 + 0x1d8)) {
      uVar2 = FUN_004249b0();
      if ((uVar2 & 1) == 0) {
        FUN_00c72e80(local_48,param_1);
        FUN_00623bb0(&DAT_00223e94,"../../p2p/dtls/dtls_transport.cc",0x9eb,local_48,
                     ": Can\'t change DTLS local identity in this state");
        if (cStack_31 < '\0') {
          operator_delete(local_48[0]);
        }
      }
      return 0;
    }
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    FUN_00c72e80(local_48,param_1);
    pcVar4 = ": Ignoring identical DTLS identity";
    uVar3 = 0x9d1;
  }
  else {
    lVar5 = *param_2;
    if (lVar5 != 0) {
      FUN_00d0f740(1,lVar5);
      pvVar6 = *(void **)(param_1 + 0x1d8);
      if ((pvVar6 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar6), iVar1 == 1)) {
        FUN_00833e18(pvVar6);
        operator_delete(pvVar6);
      }
      *(long *)(param_1 + 0x1d8) = lVar5;
      *(undefined1 *)(param_1 + 0x1d0) = 1;
      return 1;
    }
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    FUN_00c72e80(local_48,param_1);
    pcVar4 = ": NULL DTLS identity supplied. Not doing DTLS";
    uVar3 = 0xa39;
  }
  FUN_00623bb0(&DAT_00223e94,"../../p2p/dtls/dtls_transport.cc",uVar3,local_48,pcVar4);
  if (cStack_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return 1;
}


// ===== 00c72e80  FUN_00c72e80 =====

void FUN_00c72e80(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 ***pppuVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 **local_48;
  ulong uStack_40;
  ulong local_38;
  
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  FUN_00547cac(&local_60,"DtlsTransport[",0xe);
  puVar4 = (undefined8 *)(**(code **)*param_2)(param_2);
  uVar5 = puVar4[1];
  puVar2 = (undefined8 *)*puVar4;
  if (-1 < (char)*(byte *)((long)puVar4 + 0x17)) {
    uVar5 = (ulong)*(byte *)((long)puVar4 + 0x17);
    puVar2 = puVar4;
  }
  FUN_00547cac(&local_60,puVar2,uVar5);
  FUN_00547cac(&local_60,&DAT_001e3d0b,1);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,(int)param_2[0x2f]);
  uVar5 = uStack_40;
  pppuVar3 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar5 = local_38 >> 0x38;
    pppuVar3 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar3,uVar5);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,&DAT_001e3d0b,1);
  uVar5 = (**(code **)(*param_2 + 0x10))(param_2);
  puVar1 = &UNK_0019f343;
  if ((uVar5 & 1) == 0) {
    puVar1 = &DAT_001e47a3;
  }
  FUN_00547cac(&local_60,puVar1,1);
  uVar5 = (**(code **)(*param_2 + 8))(param_2);
  puVar1 = &DAT_001ec3d1;
  if ((uVar5 & 1) == 0) {
    puVar1 = &DAT_001e47a3;
  }
  FUN_00547cac(&local_60,puVar1,1);
  FUN_00547cac(&local_60,&DAT_0019fa9e,1);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  param_1[2] = local_50;
  return;
}


// ===== 00c73004  FUN_00c73004 =====

undefined8 FUN_00c73004(long param_1,int param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 400) == 0) {
    uVar1 = 1;
    *(int *)(param_1 + 0x1e0) = param_2;
    *(undefined1 *)(param_1 + 0x1e4) = 1;
  }
  else {
    if ((*(byte *)(param_1 + 0x1e4) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    if (*(int *)(param_1 + 0x1e0) == param_2) {
      uVar1 = 1;
    }
    else {
      uVar2 = FUN_004249b0();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../p2p/dtls/dtls_transport.cc",0xabb,
                     "SSL Role can\'t be reversed after the session is setup.");
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}


// ===== 00c73094  FUN_00c73094 =====

void FUN_00c73094(long param_1,undefined4 *param_2)

{
  if (*(char *)(param_1 + 0x1e4) == '\x01') {
    *param_2 = *(undefined4 *)(param_1 + 0x1e0);
  }
  return;
}


// ===== 00c730b4  FUN_00c730b4 =====

undefined8 FUN_00c730b4(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x50))();
  if (iVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00c730fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(long *)param_1[0x32] + 0x98))((long *)param_1[0x32],param_2);
    return uVar2;
  }
  return 0;
}


// ===== 00c73114  FUN_00c73114 =====

void FUN_00c73114(undefined1 *param_1,long *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x50))();
  if (iVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00c7315c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_2[0x32] + 0xa0))(param_1);
    return;
  }
  *param_1 = 0;
  param_1[0x10] = 0;
  return;
}


// ===== 00c73178  FUN_00c73178 =====

void FUN_00c73178(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 void *param_5,ulong param_6,ulong param_7)

{
  int iVar1;
  void *__dest;
  ulong uVar2;
  
  if (param_6 == 0) {
    __dest = (void *)0x0;
  }
  else {
    __dest = operator_new__(param_6);
    memcpy(__dest,param_5,param_6);
  }
  if ((char)param_2[0x3a] == '\x01') {
    if (param_2[0x3e] == param_6) {
      if ((param_7 >> 0x20 & 1) != 0) {
        iVar1 = memcmp((void *)param_2[0x40],__dest,param_6);
        if (iVar1 == 0) goto LAB_00c73210;
LAB_00c7324c:
        *(int *)(param_2 + 0x3c) = (int)param_7;
        *(undefined1 *)((long)param_2 + 0x1e4) = 1;
      }
    }
    else if ((param_7 >> 0x20 & 1) != 0) goto LAB_00c7324c;
  }
  else if ((param_7 >> 0x20 & 1) != 0) {
LAB_00c73210:
    uVar2 = (**(code **)(*param_2 + 0x70))(param_2,param_7 & 0xffffffff);
    if ((uVar2 & 1) == 0) {
      FUN_00b0092c(param_1,3,"Failed to set SSL role for the transport.",0x29);
      goto joined_r0x00c73240;
    }
  }
  uVar2 = FUN_00c732d8(param_2,param_3,param_4,param_5,param_6);
  if ((uVar2 & 1) == 0) {
    FUN_00b0092c(param_1,3,"Failed to apply remote fingerprint.",0x23);
  }
  else {
    FUN_005ecd48(param_1);
  }
joined_r0x00c73240:
  if (__dest != (void *)0x0) {
    operator_delete__(__dest);
    return;
  }
  return;
}


// ===== 00c732d8  FUN_00c732d8 =====

/* WARNING: Type propagation algorithm not settling */

bool FUN_00c732d8(long param_1,undefined8 *******param_2,ulong param_3,void *param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  void *__dest;
  void *pvVar6;
  undefined8 *******__dest_00;
  long *plVar7;
  long lVar8;
  bool bVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *******local_58;
  ulong uStack_50;
  undefined8 local_48;
  
  if (param_5 == 0) {
    __dest = (void *)0x0;
  }
  else {
    __dest = operator_new__(param_5);
    memcpy(__dest,param_4,param_5);
  }
  if (*(char *)(param_1 + 0x1d0) == '\x01') {
    uVar11 = *(ulong *)(param_1 + 0x1f0);
    if ((uVar11 == param_5) &&
       (iVar5 = memcmp(*(void **)(param_1 + 0x200),__dest,param_5), iVar5 == 0)) {
      if (param_3 != 0) {
        uVar11 = FUN_00417e08();
        if ((uVar11 & 1) == 0) {
          FUN_00c72e80(&local_58,param_1);
          FUN_00623bb0(&DAT_00223e94,"../../p2p/dtls/dtls_transport.cc",0xd09,&local_58,
                       ": Ignoring identical remote DTLS fingerprint");
          if (local_48._7_1_ < '\0') {
            operator_delete(local_58);
          }
        }
        bVar9 = true;
        goto joined_r0x00c735c4;
      }
    }
    else if (param_3 != 0) {
      pvVar6 = *(void **)(param_1 + 0x200);
      *(ulong *)(param_1 + 0x1f0) = param_5;
      *(ulong *)(param_1 + 0x1f8) = param_5;
      *(void **)(param_1 + 0x200) = __dest;
      if (pvVar6 != (void *)0x0) {
        operator_delete__(pvVar6);
      }
      if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
        FUN_005d45ec();
      }
      if (param_3 < 0x17) {
        local_48 = CONCAT17((char)param_3,(undefined7)local_48);
        __dest_00 = &local_58;
      }
      else {
        uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
        uVar2 = 0x19;
        if (uVar1 != 0x18) {
          uVar2 = uVar1;
        }
        __dest_00 = (undefined8 *******)operator_new(uVar2);
        local_48 = uVar2 | 0x8000000000000000;
        local_58 = __dest_00;
        uStack_50 = param_3;
      }
      if (__dest_00 <= (undefined8 *******)((long)__dest_00 + param_3)) {
        if ((__dest_00 <= param_2) && (param_2 < (undefined8 *******)((long)__dest_00 + param_3))) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                    );
        }
        memmove(__dest_00,param_2,param_3);
        cVar4 = *(char *)(param_1 + 0x21f);
        *(undefined1 *)((long)__dest_00 + param_3) = 0;
        puVar10 = (undefined8 *)(param_1 + 0x208);
        if (cVar4 < '\0') {
          operator_delete(*(void **)(param_1 + 0x208));
        }
        plVar7 = *(long **)(param_1 + 400);
        *(ulong *)(param_1 + 0x210) = uStack_50;
        *puVar10 = local_58;
        *(ulong *)(param_1 + 0x218) = local_48;
        if ((uVar11 == 0) && (plVar7 != (long *)0x0)) {
          lVar8 = (long)*(char *)(param_1 + 0x21f);
          if (lVar8 < 0) {
            puVar10 = *(undefined8 **)(param_1 + 0x208);
            lVar8 = *(long *)(param_1 + 0x210);
          }
          uVar3 = 0;
          if (*(long *)(param_1 + 0x1f0) != 0) {
            uVar3 = *(undefined8 *)(param_1 + 0x200);
          }
          iVar5 = (**(code **)(*plVar7 + 0x80))(plVar7,puVar10,lVar8,uVar3);
          if (iVar5 != 0) {
            uVar11 = FUN_004249b0();
            if ((uVar11 & 1) == 0) {
              FUN_00c72e80(&local_58,param_1);
              FUN_00623bb0(&DAT_00223e94,"../../p2p/dtls/dtls_transport.cc",0xe33,&local_58,
                           ": Couldn\'t set DTLS certificate digest.");
              if ((long)local_48 < 0) {
                operator_delete(local_58);
              }
            }
            FUN_00c73690(param_1,4);
            return iVar5 == 3;
          }
        }
        else {
          if ((plVar7 != (long *)0x0) && (uVar11 != 0)) {
            *(undefined8 *)(param_1 + 400) = 0;
            (**(code **)(*plVar7 + 8))();
            FUN_00c73690(param_1,0);
            FUN_00c739b0(param_1,0);
          }
          uVar11 = FUN_00c73b00(param_1);
          if ((uVar11 & 1) == 0) {
            FUN_00c73690(param_1,4);
            return false;
          }
        }
        return true;
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
  }
  else if (param_3 != 0) {
    uVar11 = FUN_004249b0();
    if ((uVar11 & 1) == 0) {
      FUN_00c72e80(&local_58,param_1);
      FUN_00623bb0(&DAT_00223e94,"../../p2p/dtls/dtls_transport.cc",0xdab,&local_58,
                   ": Can\'t set DTLS remote settings in this state.");
      if (local_48._7_1_ < '\0') {
        operator_delete(local_58);
      }
    }
    bVar9 = false;
    goto joined_r0x00c735c4;
  }
  uVar11 = FUN_00417e08();
  if ((uVar11 & 1) == 0) {
    FUN_00c72e80(&local_58,param_1);
    FUN_00623bb0(&DAT_00223e94,"../../p2p/dtls/dtls_transport.cc",0xd69,&local_58,
                 ": Other side didn\'t support DTLS.");
    if (local_48._7_1_ < '\0') {
      operator_delete(local_58);
    }
  }
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  bVar9 = true;
joined_r0x00c735c4:
  if (__dest != (void *)0x0) {
    operator_delete__(__dest);
  }
  return bVar9;
}


// ===== 00c73690  FUN_00c73690 =====

void FUN_00c73690(long *param_1,int param_2)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  long *local_68 [2];
  char cStack_51;
  long **local_50;
  int *local_48;
  int *local_40;
  int local_34;
  
  if (*(int *)((long)param_1 + 0x17c) == param_2) {
    return;
  }
  plVar9 = (long *)param_1[0x2e];
  pvVar1 = operator_new(0x18);
  FUN_00c78c18(pvVar1,param_2);
  (**(code **)(*plVar9 + 0x28))(plVar9,pvVar1);
  uVar2 = FUN_0044075c();
  if ((uVar2 & 1) == 0) {
    local_50 = (long **)0x1cfbd2;
    local_48 = (int *)0x2350;
    local_40 = &local_34;
    FUN_00c72e80(local_68,param_1);
    FUN_00623bb0(&DAT_00259883,local_50,(ulong)local_48 & 0xffffffff,local_68,
                 ": set_dtls_state from:",*(undefined4 *)((long)param_1 + 0x17c),&DAT_0019fec4,
                 param_2);
    if (cStack_51 < '\0') {
      operator_delete(local_68[0]);
    }
  }
  if ((param_2 == 2) && (*(int *)((long)param_1 + 0x17c) == 1)) {
    if (*(char *)((long)param_1 + 0x1e4) == '\x01') {
      lVar3 = (**(code **)(*(long *)param_1[0x2c] + 0x10))();
      iVar7 = -1;
      if ((lVar3 != 0x7fffffffffffffff) && (lVar6 = param_1[0x30], lVar6 != -0x8000000000000000)) {
        iVar7 = 0;
        if (lVar6 != 0x7fffffffffffffff && lVar3 != -0x8000000000000000) {
          iVar7 = (int)lVar3 - (int)lVar6;
        }
      }
      if ((*(byte *)((long)param_1 + 0x1e4) & 1) == 0) goto LAB_00c7399c;
      if ((int)param_1[0x3c] == 1) {
        lVar3 = DAT_00dbb590;
        if (DAT_00dbb590 == 0) {
          lVar3 = FUN_006660d0("WebRTC.PeerConnection.DtlsServerRoleConnectionTime",0x32,1,
                               1000000000,0x32);
          puVar5 = &DAT_00dbb590;
LAB_00c738d4:
          FUN_00d0f5e0(0,lVar3,puVar5);
          if (lVar3 == 0) goto LAB_00c738f0;
        }
      }
      else {
        if ((int)param_1[0x3c] != 0) goto LAB_00c738f0;
        lVar3 = DAT_00dbb588;
        if (DAT_00dbb588 == 0) {
          lVar3 = FUN_006660d0("WebRTC.PeerConnection.DtlsClientRoleConnectionTime",0x32,1,
                               1000000000,0x32);
          puVar5 = &DAT_00dbb588;
          goto LAB_00c738d4;
        }
      }
      FUN_00666568(lVar3,iVar7);
    }
LAB_00c738f0:
    *(undefined4 *)((long)param_1 + 0x17c) = 2;
  }
  else {
    *(int *)((long)param_1 + 0x17c) = param_2;
    iVar7 = param_2;
    if (param_2 == 1) {
      lVar3 = (**(code **)(*(long *)param_1[0x2c] + 0x10))();
      iVar7 = *(int *)((long)param_1 + 0x17c);
      param_1[0x30] = lVar3;
    }
    if (iVar7 != 2) goto joined_r0x00c7384c;
  }
  local_50 = (long **)((ulong)local_50 & 0xffffffff00000000);
  if ((*(char *)((long)param_1 + 0x1e4) == '\x01') &&
     (uVar2 = (**(code **)(*param_1 + 0x78))(param_1,&local_50), (uVar2 & 1) != 0)) {
    if ((int)local_50 - 0xfefcU < 4) {
      uVar8 = *(undefined4 *)(&DAT_001f3210 + (ulong)((int)local_50 - 0xfefcU) * 4);
    }
    else {
      uVar8 = 0;
    }
    if ((*(byte *)((long)param_1 + 0x1e4) & 1) == 0) {
LAB_00c7399c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    if ((int)param_1[0x3c] == 1) {
      pcVar4 = "WebRTC.PeerConnection.DtlsVersionServerRole";
    }
    else {
      if ((int)param_1[0x3c] != 0) goto LAB_00c7398c;
      pcVar4 = "WebRTC.PeerConnection.DtlsVersionClientRole";
    }
    lVar3 = FUN_0066631c(pcVar4,0x2b,4);
    if (lVar3 != 0) {
      FUN_00666568(lVar3,uVar8);
    }
  }
LAB_00c7398c:
  iVar7 = *(int *)((long)param_1 + 0x17c);
joined_r0x00c7384c:
  if (iVar7 == 4) {
    FUN_00c77c90(param_1 + 0x4a);
  }
  local_50 = local_68;
  local_48 = &local_34;
  local_68[0] = param_1;
  local_34 = param_2;
  FUN_007b6160(param_1 + 0x22,&local_50,FUN_00c75afc);
  return;
}


// ===== 00c739b0  FUN_00c739b0 =====

void FUN_00c739b0(long param_1,byte param_2)

{
  void *pvVar1;
  ulong uVar2;
  long *plVar3;
  void *local_58 [2];
  char cStack_41;
  
  if (*(byte *)(param_1 + 0x241) != (param_2 & 1)) {
    if (((param_2 & 1) == 0) || ((*(byte *)(param_1 + 0x242) & 1) != 0)) {
      plVar3 = *(long **)(param_1 + 0x170);
      pvVar1 = operator_new(0x18);
      FUN_00c78c5c(pvVar1,param_2 & 1);
      (**(code **)(*plVar3 + 0x28))(plVar3,pvVar1);
      uVar2 = FUN_0044075c();
      if ((uVar2 & 1) == 0) {
        FUN_00c72e80(local_58,param_1);
        FUN_00623bb0(&DAT_00259892,"../../p2p/dtls/dtls_transport.cc",0x22e8,local_58,
                     ": set_writable to: ",param_2 & 1);
        if (cStack_41 < '\0') {
          operator_delete(local_58[0]);
        }
      }
      *(byte *)(param_1 + 0x241) = param_2 & 1;
      if ((param_2 & 1) != 0) {
        FUN_00bc871c(param_1,param_1);
      }
      FUN_00bc863c(param_1,param_1);
    }
    else {
      uVar2 = FUN_00417e08();
      if ((uVar2 & 1) == 0) {
        FUN_00c72e80(local_58,param_1);
        FUN_00623bb0(&DAT_00223e94,"../../p2p/dtls/dtls_transport.cc",0x22b1,local_58,
                     ": defer set_writable(true) until ICE has become writable once");
        if (cStack_41 < '\0') {
          operator_delete(local_58[0]);
        }
      }
    }
  }
  return;
}


// ===== 00c73b00  FUN_00c73b00 =====

undefined8 FUN_00c73b00(long *param_1)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long **pplVar7;
  long **pplVar8;
  char *pcVar9;
  long *plVar10;
  code *pcVar11;
  long *local_88 [2];
  char cStack_71;
  long *local_70 [2];
  code *local_60;
  code *pcStack_58;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  
  plVar3 = (long *)(**(code **)(*param_1 + 0xd0))();
  lVar4 = (**(code **)(*plVar3 + 0x98))();
  *(undefined1 *)((long)param_1 + 0x243) = *(undefined1 *)(lVar4 + 0xdc);
  lVar4 = (**(code **)(*param_1 + 0xd0))(param_1);
  plVar3 = (long *)operator_new(0x120);
  FUN_0084172c();
  *plVar3 = (long)&PTR_FUN_00d4e398;
  plVar3[6] = lVar4;
  plVar3[7] = 0;
  *(undefined4 *)(plVar3 + 8) = 2;
  FUN_00c76564(plVar3 + 9,2,0x800);
  cVar1 = *(char *)((long)param_1 + 0x243);
  *(undefined1 *)(plVar3 + 0x14) = 0;
  *(undefined1 *)(plVar3 + 0x22) = 0;
  if (cVar1 == '\x01') {
    plVar3[7] = (long)(param_1 + 0x4a);
  }
  if ((*(byte *)(param_1[0x29] + 0x10) & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00c75bd0;
    local_88[0] = plVar3;
    local_50[0] = param_1;
    lVar4 = (*(code *)param_1[0x28])(param_1 + 0x26,local_88,local_50,param_1[0x2b]);
    plVar10 = local_88[0];
    local_88[0] = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    plVar10 = (long *)param_1[0x32];
    param_1[0x32] = lVar4;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    pplVar7 = local_50;
    pplVar8 = local_50;
    pcVar11 = local_40;
  }
  else {
    local_60 = FUN_004473ec;
    pcStack_58 = FUN_00c75c14;
    local_70[0] = param_1;
    lVar4 = FUN_0083e2d0(plVar3,local_70,param_1[0x2b]);
    plVar10 = (long *)param_1[0x32];
    param_1[0x32] = lVar4;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
    pplVar7 = local_70;
    pplVar8 = local_70;
    pcVar11 = local_60;
  }
  (*pcVar11)(0,pplVar7,pplVar8);
  plVar10 = (long *)param_1[0x32];
  if (plVar10 == (long *)0x0) {
    uVar6 = FUN_004249b0();
    if ((uVar6 & 1) != 0) {
      return 0;
    }
    FUN_00c72e80(local_88,param_1);
    pcVar9 = ": Failed to create DTLS adapter.";
    uVar5 = 0x106b;
  }
  else {
    param_1[0x33] = (long)plVar3;
    if (*(char *)((long)param_1 + 0x243) == '\x01') {
      (**(code **)(*plVar10 + 0x70))(plVar10,900);
      plVar10 = (long *)param_1[0x32];
    }
    if ((char)param_1[0x62] == '\x01') {
      (**(code **)(*plVar10 + 0x60))(plVar10,400);
      plVar10 = (long *)param_1[0x32];
    }
    uVar5 = (**(code **)(**(long **)(param_1[0x3b] + 8) + 0x30))();
    (**(code **)(*plVar10 + 0x38))(plVar10,uVar5);
    (**(code **)(*(long *)param_1[0x32] + 0x58))((long *)param_1[0x32],(int)param_1[0x3d]);
    if ((*(byte *)((long)param_1 + 0x1e4) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    (**(code **)(*(long *)param_1[0x32] + 0x48))((long *)param_1[0x32],(int)param_1[0x3c]);
    lVar4 = param_1[0x32];
    (**(code **)(lVar4 + 0x20))(0,lVar4 + 0x10,lVar4 + 0x10);
    *(long **)(lVar4 + 0x10) = param_1;
    *(code **)(lVar4 + 0x20) = FUN_004473ec;
    *(code **)(lVar4 + 0x28) = FUN_00c75c58;
    if (param_1[0x3e] != 0) {
      lVar4 = (long)*(char *)((long)param_1 + 0x21f);
      if (lVar4 < 0) {
        plVar3 = (long *)param_1[0x41];
        lVar4 = param_1[0x42];
      }
      else {
        plVar3 = param_1 + 0x41;
      }
      iVar2 = (**(code **)(*(long *)param_1[0x32] + 0x80))
                        ((long *)param_1[0x32],plVar3,lVar4,param_1[0x40]);
      if (iVar2 != 0) {
        uVar6 = FUN_004249b0();
        if ((uVar6 & 1) != 0) {
          return 0;
        }
        FUN_00c72e80(local_88,param_1);
        pcVar9 = ": Couldn\'t set DTLS certificate digest.";
        uVar5 = 0x1163;
        goto LAB_00c73f50;
      }
    }
    if (param_1[0x34] == param_1[0x35]) {
      uVar6 = FUN_00417e08();
      if ((uVar6 & 1) == 0) {
        FUN_00c72e80(local_88,param_1);
        FUN_00623bb0(&DAT_00223e94,"../../p2p/dtls/dtls_transport.cc",0x11c1,local_88,
                     ": Not using DTLS-SRTP.");
        if (cStack_71 < '\0') {
          operator_delete(local_88[0]);
        }
      }
    }
    else {
      uVar6 = (**(code **)(*(long *)param_1[0x32] + 0xd0))((long *)param_1[0x32],param_1 + 0x34);
      if ((uVar6 & 1) == 0) {
        uVar6 = FUN_004249b0();
        if ((uVar6 & 1) != 0) {
          return 0;
        }
        FUN_00c72e80(local_88,param_1);
        pcVar9 = ": Couldn\'t set DTLS-SRTP ciphers.";
        uVar5 = 0x11a3;
        goto LAB_00c73f50;
      }
    }
    uVar6 = (**(code **)(*(long *)param_1[0x32] + 0xf0))((long *)param_1[0x32],param_1 + 0x37);
    if ((uVar6 & 1) != 0) {
      uVar6 = FUN_00417e08();
      if ((uVar6 & 1) == 0) {
        FUN_00c72e80(local_88,param_1);
        FUN_00623bb0(&DAT_00259892,"../../p2p/dtls/dtls_transport.cc",0x1201,local_88,
                     ": DTLS setup complete, dtls_in_stun: ",*(undefined1 *)((long)param_1 + 0x243))
        ;
        if (cStack_71 < '\0') {
          operator_delete(local_88[0]);
        }
      }
      FUN_00c73ff0(param_1);
      return 1;
    }
    uVar6 = FUN_004249b0();
    if ((uVar6 & 1) != 0) {
      return 0;
    }
    FUN_00c72e80(local_88,param_1);
    pcVar9 = ": Couldn\'t set DTLS SSL Group Ids.";
    uVar5 = 0x11e3;
  }
LAB_00c73f50:
  FUN_00623bb0(&DAT_00223e94,"../../p2p/dtls/dtls_transport.cc",uVar5,local_88,pcVar9);
  if (cStack_71 < '\0') {
    operator_delete(local_88[0]);
  }
  return 0;
}


// ===== 00c73f9c  FUN_00c73f9c =====

void FUN_00c73f9c(long param_1)

{
  if (*(long **)(param_1 + 400) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c73fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 400) + 0x90))();
    return;
  }
  return;
}


// ===== 00c73fb8  FUN_00c73fb8 =====

void FUN_00c73fb8(long param_1)

{
  if (*(long **)(param_1 + 400) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c73fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 400) + 0xb8))();
    return;
  }
  return;
}


// ===== 00c73fd4  FUN_00c73fd4 =====

void FUN_00c73fd4(long param_1)

{
  if (*(long **)(param_1 + 400) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c73fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 400) + 0xc0))();
    return;
  }
  return;
}


// ===== 00c73ff0  FUN_00c73ff0 =====

void FUN_00c73ff0(long *param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  void *pvVar7;
  undefined8 uVar8;
  char *pcVar9;
  ulong uVar10;
  void *pvVar11;
  long lVar12;
  undefined1 auVar13 [16];
  void *local_78 [2];
  char cStack_61;
  undefined1 uStack_59;
  char *local_58;
  undefined8 local_50;
  undefined1 *local_48;
  void **local_40;
  char **ppcStack_38;
  
  if (param_1[0x32] != 0) {
    plVar5 = (long *)(**(code **)(*param_1 + 0xd0))();
    uVar6 = (**(code **)(*plVar5 + 8))();
    if (((uVar6 & 1) == 0) && (*(char *)((long)param_1 + 0x243) != '\x01')) {
      return;
    }
    FUN_00c75708(param_1);
    uVar6 = FUN_00417e08();
    if ((uVar6 & 1) == 0) {
      local_58 = "../../p2p/dtls/dtls_transport.cc";
      local_50 = 0x20a1;
      local_48 = &uStack_59;
      FUN_00c72e80(local_78,param_1);
      ppcStack_38 = &local_58;
      local_40 = local_78;
      uVar3 = (**(code **)(*param_1 + 0x60))(param_1);
      if ((*(byte *)((long)param_1 + 0x1e4) & 1) == 0) goto LAB_00c74344;
      pcVar9 = "server";
      if ((int)param_1[0x3c] != 1) {
        pcVar9 = "client";
      }
      FUN_00623bb0(&DAT_00259c4f,*ppcStack_38,*(undefined4 *)(ppcStack_38 + 1),local_40,
                   ": DtlsTransportInternalImpl: Start DTLS handshake active=",uVar3 & 1," role=",
                   pcVar9);
      if (cStack_61 < '\0') {
        operator_delete(local_78[0]);
      }
    }
    iVar4 = (**(code **)(*(long *)param_1[0x32] + 0x78))();
    if (iVar4 == 0) {
      FUN_00c73690(param_1,1);
      if (param_1[0x45] != param_1[0x46]) {
        if ((*(byte *)((long)param_1 + 0x1e4) & 1) == 0) {
LAB_00c74344:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                    );
        }
        if ((int)param_1[0x3c] == 1) {
          uVar10 = (ulong)(param_1[0x46] - param_1[0x45]) >> 4;
          uVar6 = FUN_00417e08();
          if ((uVar6 & 1) == 0) {
            FUN_00c72e80(&local_58,param_1);
            FUN_00623bb0(&DAT_00256769,"../../p2p/dtls/dtls_transport.cc",0x2159,&local_58,
                         ": Handling #",uVar10 & 0xffffffff," cached DTLS ClientHello packet(s).");
            if ((long)local_48 < 0) {
              operator_delete(local_58);
            }
          }
          if (0 < (int)uVar10) {
            do {
              auVar13 = FUN_00c6f294(param_1 + 0x44);
              uVar6 = FUN_00c72384(param_1[0x33],auVar13._0_8_,auVar13._8_8_);
              if ((uVar6 & 1) == 0) {
                uVar6 = FUN_004249b0();
                if ((uVar6 & 1) == 0) {
                  FUN_00c72e80(&local_58,param_1);
                  pcVar9 = ": Failed to handle DTLS packet.";
                  uVar8 = 0x217b;
                  goto LAB_00c742a4;
                }
                break;
              }
              uVar3 = (int)uVar10 - 1;
              uVar10 = (ulong)uVar3;
            } while (uVar3 != 0);
          }
        }
        else {
          uVar6 = FUN_004022fc();
          if ((uVar6 & 1) == 0) {
            FUN_00c72e80(&local_58,param_1);
            pcVar9 = 
            ": Discarding cached DTLS ClientHello packet because we don\'t have the server role.";
            uVar8 = 0x21aa;
LAB_00c742a4:
            FUN_00623bb0(&DAT_00223e94,"../../p2p/dtls/dtls_transport.cc",uVar8,&local_58,pcVar9);
            if ((long)local_48 < 0) {
              operator_delete(local_58);
            }
          }
        }
        lVar12 = param_1[0x45];
        lVar2 = param_1[0x46];
        while (lVar12 != lVar2) {
          lVar1 = lVar2 + -0x10;
          if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          pvVar11 = *(void **)(lVar2 + -8);
          *(undefined8 *)(lVar2 + -8) = 0;
          lVar2 = lVar1;
          if (pvVar11 != (void *)0x0) {
            pvVar7 = *(void **)((long)pvVar11 + 0x10);
            *(undefined8 *)((long)pvVar11 + 0x10) = 0;
            if (pvVar7 != (void *)0x0) {
              operator_delete__(pvVar7);
            }
            operator_delete(pvVar11);
          }
        }
        param_1[0x46] = lVar12;
        *(undefined4 *)(param_1 + 0x44) = 0;
      }
    }
    else {
      uVar6 = FUN_004249b0();
      if ((uVar6 & 1) == 0) {
        FUN_00c72e80(&local_58,param_1);
        FUN_00623bb0(&DAT_00223e94,"../../p2p/dtls/dtls_transport.cc",0x2103,&local_58,
                     ": Couldn\'t start DTLS handshake");
        if ((long)local_48 < 0) {
          operator_delete(local_58);
        }
      }
      FUN_00c73690(param_1,4);
    }
  }
  return;
}


// ===== 00c74358  FUN_00c74358 =====

undefined8 FUN_00c74358(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x50))();
  if (iVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00c743a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(long *)param_1[0x32] + 0xd8))((long *)param_1[0x32],param_2);
    return uVar2;
  }
  return 0;
}


// ===== 00c743b8  FUN_00c743b8 =====

undefined8 FUN_00c743b8(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x50))();
  if (iVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00c74400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(long *)param_1[0x32] + 0xb0))((long *)param_1[0x32],param_2);
    return uVar2;
  }
  return 0;
}


// ===== 00c74418  FUN_00c74418 =====

void FUN_00c74418(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c74428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 400) + 0xf8))();
  return;
}


// ===== 00c7442c  FUN_00c7442c =====

undefined8 FUN_00c7442c(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x50))();
  if (iVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00c7446c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(long *)param_1[0x32] + 200))();
    return uVar2;
  }
  return 0;
}


// ===== 00c74484  FUN_00c74484 =====

ulong FUN_00c74484(long *param_1,char *param_2,undefined1 *param_3,undefined8 *param_4,ulong param_5
                  )

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 *local_58 [2];
  char cStack_41;
  undefined4 local_24;
  
  lVar7 = *param_1;
  if ((*(byte *)(param_1 + 0x3a) & 1) == 0) {
LAB_00c745e4:
    plVar3 = (long *)(**(code **)(lVar7 + 0xd0))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00c74620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,param_2,param_3,param_4,0);
    return uVar4;
  }
  iVar2 = (**(code **)(lVar7 + 0x50))(param_1);
  if (iVar2 == 4) {
    uVar4 = FUN_004249b0();
    if ((uVar4 & 1) == 0) {
      FUN_00c72e80(local_58,param_1);
      pcVar6 = ": Couldn\'t send packet due to DtlsTransportState::kFailed.";
      uVar5 = 0x14cb;
LAB_00c745ac:
      FUN_00623bb0(&DAT_00223e94,"../../p2p/dtls/dtls_transport.cc",uVar5,local_58,pcVar6);
      if (cStack_41 < '\0') {
        operator_delete(local_58[0]);
      }
    }
  }
  else if (iVar2 == 3) {
    uVar4 = FUN_004249b0();
    if ((uVar4 & 1) == 0) {
      FUN_00c72e80(local_58,param_1);
      pcVar6 = ": Couldn\'t send packet due to DtlsTransportState::kClosed.";
      uVar5 = 0x14fb;
      goto LAB_00c745ac;
    }
  }
  else if (iVar2 == 2) {
    if ((param_5 & 1) == 0) {
      lVar7 = param_1[0x33];
      puVar1 = (undefined8 *)(lVar7 + 0xa0);
      if (*(char *)(lVar7 + 0x110) == '\x01') {
        uVar5 = *param_4;
        *(undefined8 *)(lVar7 + 0xa8) = param_4[1];
        *puVar1 = uVar5;
        *(undefined4 *)(lVar7 + 0xb0) = *(undefined4 *)(param_4 + 2);
        if (puVar1 != param_4) {
          FUN_00c7599c(lVar7 + 0xb8,param_4[3],param_4[4],param_4[4] - param_4[3]);
        }
        uVar5 = param_4[6];
        *(undefined8 *)(lVar7 + 0xd8) = param_4[7];
        *(undefined8 *)(lVar7 + 0xd0) = uVar5;
        uVar11 = param_4[9];
        uVar10 = param_4[8];
        uVar9 = param_4[0xb];
        uVar8 = param_4[10];
        uVar5 = *(undefined8 *)((long)param_4 + 0x5a);
        *(undefined8 *)(lVar7 + 0x102) = *(undefined8 *)((long)param_4 + 0x62);
        *(undefined8 *)(lVar7 + 0xfa) = uVar5;
        *(undefined8 *)(lVar7 + 0xe8) = uVar11;
        *(undefined8 *)(lVar7 + 0xe0) = uVar10;
        *(undefined8 *)(lVar7 + 0xf8) = uVar9;
        *(undefined8 *)(lVar7 + 0xf0) = uVar8;
      }
      else {
        if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        FUN_00897be8(lVar7 + 0xa0,param_4);
        *(undefined1 *)(lVar7 + 0x110) = 1;
      }
      local_58[0] = &DAT_aaaaaaaaaaaaaaaa;
      pcVar6 = (char *)0x0;
      if (param_3 != (undefined1 *)0x0) {
        pcVar6 = param_2;
      }
      local_24 = 0xaaaaaaaa;
      iVar2 = (**(code **)(*(long *)param_1[0x32] + 0x20))
                        ((long *)param_1[0x32],pcVar6,param_3,local_58,&local_24);
      if (iVar2 == 1) {
        if (local_58[0] != param_3) {
                    /* WARNING: Subroutine does not return */
          FUN_0061fd88("../../p2p/dtls/dtls_transport.cc",0x294,"written == size",&DAT_001f5fa0);
        }
        goto LAB_00c746c4;
      }
      lVar7 = param_1[0x33];
      if (*(char *)(lVar7 + 0x110) == '\x01') {
        FUN_00897c8c(lVar7 + 0xa0);
        *(undefined1 *)(lVar7 + 0x110) = 0;
      }
    }
    else if (((undefined1 *)0xb < param_3) &&
            (iVar2 = (int)*param_2, iVar2 == -0x41 || iVar2 + 0x41 < 0 != SCARRY4(iVar2,0x41))) {
      lVar7 = *param_1;
      goto LAB_00c745e4;
    }
  }
  param_3 = (undefined1 *)0xffffffff;
LAB_00c746c4:
  return (ulong)param_3 & 0xffffffff;
}


// ===== 00c746f8  FUN_00c746f8 =====

void FUN_00c746f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c74708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x188) + 0x20))();
  return;
}


// ===== 00c7470c  FUN_00c7470c =====

undefined1 FUN_00c7470c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x240);
}


// ===== 00c74718  FUN_00c74718 =====

undefined1 FUN_00c74718(long param_1)

{
  return *(undefined1 *)(param_1 + 0x241);
}


// ===== 00c74724  FUN_00c74724 =====

void FUN_00c74724(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*param_1 + 0xd0))();
                    /* WARNING: Could not recover jumptable at 0x00c7474c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))();
  return;
}


// ===== 00c74750  FUN_00c74750 =====

void FUN_00c74750(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(**(long **)(param_2 + 0x188) + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x00c7478c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(param_1);
  return;
}


// ===== 00c74790  FUN_00c74790 =====

void FUN_00c74790(long *param_1,undefined4 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*param_1 + 0xd0))();
                    /* WARNING: Could not recover jumptable at 0x00c747d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2,param_3);
  return;
}


// ===== 00c747d4  FUN_00c747d4 =====

void FUN_00c747d4(long *param_1,undefined4 param_2,undefined4 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*param_1 + 0xd0))();
                    /* WARNING: Could not recover jumptable at 0x00c74814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2,param_3);
  return;
}


// ===== 00c74818  FUN_00c74818 =====

/* WARNING: Removing unreachable block (ram,0x00c74a14) */
/* WARNING: Removing unreachable block (ram,0x00c748f8) */
/* WARNING: Removing unreachable block (ram,0x00c74914) */
/* WARNING: Removing unreachable block (ram,0x00c74ae8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c74818(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  undefined4 local_ec;
  void *local_e8 [2];
  char cStack_d1;
  undefined1 uStack_c9;
  char *local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  void **local_b0;
  char **ppcStack_a8;
  char *local_a0;
  void ***pppvStack_98;
  ulong local_90;
  char **local_88;
  char *local_80;
  ulong *puStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char **local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar6 = FUN_00417e08();
  if ((uVar6 & 1) == 0) {
    local_c8 = "../../p2p/dtls/dtls_transport.cc";
    local_c0 = 0x18b9;
    local_b8 = &uStack_c9;
    FUN_00c72e80(local_e8,param_1);
    ppcStack_a8 = &local_c8;
    pppvStack_98 = &local_b0;
    local_a0 = ": ice_transport writable state changed to ";
    local_b0 = local_e8;
    plVar7 = (long *)(**(code **)(*param_1 + 0xd0))(param_1);
    local_90 = (**(code **)(*plVar7 + 8))();
    local_90 = local_90 & 1;
    local_88 = &local_a0;
    puStack_78 = &local_90;
    local_80 = " dtls_state: ";
    local_ec = (**(code **)(*param_1 + 0x50))(param_1);
    FUN_00c76410(&local_48,&local_ec);
    local_58 = &local_80;
    uStack_68 = uStack_40;
    local_70 = local_48;
    puVar1 = (undefined8 *)((undefined8 *)puStack_78[1])[1];
    puVar2 = (undefined8 *)puVar1[1];
    FUN_00623bb0(&DAT_00259c48,*puVar2,*(undefined4 *)(puVar2 + 1),*puVar1,
                 *(undefined8 *)puStack_78[1],(int)*puStack_78,local_80,&local_70);
    if (cStack_d1 < '\0') {
      operator_delete(local_e8[0]);
    }
  }
  bVar3 = *(byte *)((long)param_1 + 0x242);
  lVar10 = *param_1;
  *(undefined1 *)((long)param_1 + 0x242) = 1;
  if ((*(byte *)(param_1 + 0x3a) & 1) != 0) {
    iVar4 = (**(code **)(lVar10 + 0x50))(param_1);
    if (iVar4 < 2) {
      if (iVar4 == 0) {
        FUN_00c73ff0(param_1);
        return;
      }
      if (iVar4 != 1) {
        return;
      }
      if (*(char *)((long)param_1 + 0x243) != '\x01') {
        return;
      }
      if (param_1[0x32] == 0) {
        return;
      }
      FUN_00c74b08(param_1);
      FUN_00c74c68(param_1);
      return;
    }
    if (iVar4 != 2) {
      if (iVar4 == 3) {
        uVar6 = FUN_004249b0();
        if ((uVar6 & 1) != 0) {
          return;
        }
        FUN_00c72e80(&local_70,param_1);
        pcVar9 = ": OnWritableState() called in state DtlsTransportState::kClosed.";
        uVar8 = 0x1a4b;
      }
      else {
        if (iVar4 != 4) {
          return;
        }
        uVar6 = FUN_004249b0();
        if ((uVar6 & 1) != 0) {
          return;
        }
        FUN_00c72e80(&local_70,param_1);
        pcVar9 = ": OnWritableState() called in state DtlsTransportState::kFailed.";
        uVar8 = 0x1a1b;
      }
      FUN_00623bb0(&DAT_00223e94,"../../p2p/dtls/dtls_transport.cc",uVar8,&local_70,pcVar9);
      return;
    }
    if (((*(char *)((long)param_1 + 0x243) == '\x01') && (param_1[0x32] != 0)) && ((bVar3 & 1) == 0)
       ) {
      FUN_00c74b08(param_1);
      FUN_00c74c68(param_1);
    }
    lVar10 = *param_1;
  }
  plVar7 = (long *)(**(code **)(lVar10 + 0xd0))(param_1);
  uVar5 = (**(code **)(*plVar7 + 8))();
  FUN_00c739b0(param_1,uVar5 & 1);
  return;
}


// ===== 00c74b08  FUN_00c74b08 =====

void FUN_00c74b08(long *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  void *local_a0 [2];
  char cStack_89;
  void *local_88 [2];
  char cStack_71;
  undefined1 uStack_69;
  char *local_68;
  undefined8 local_60;
  undefined1 *local_58;
  void **local_50;
  char **ppcStack_48;
  char *local_40;
  undefined8 **ppuStack_38;
  
  plVar3 = (long *)(**(code **)(*param_1 + 0xd0))();
  uVar4 = (**(code **)(*plVar3 + 0xd0))();
  iVar2 = (int)uVar4 * 2;
  if (iVar2 < 0x33) {
    iVar2 = 0x32;
  }
  if (2999 < iVar2) {
    iVar2 = 3000;
  }
  iVar1 = 400;
  if ((uVar4 & 0x100000000) != 0) {
    iVar1 = iVar2;
  }
  uVar5 = FUN_00417e08();
  if ((uVar5 & 1) == 0) {
    local_68 = "../../p2p/dtls/dtls_transport.cc";
    local_60 = 0x2601;
    local_58 = &uStack_69;
    FUN_00c72e80(local_88,param_1);
    ppcStack_48 = &local_68;
    ppuStack_38 = &local_50;
    local_40 = ": Update DTLS handshake timeout to ";
    local_50 = local_88;
    if ((uVar4 >> 0x20 & 1) == 0) {
      FUN_005d3510(local_a0,"<unset>");
    }
    else {
      FUN_005490bc(local_a0,uVar4 & 0xffffffff);
    }
    FUN_00623bb0(&DAT_00259907,(void *)*ppuStack_38[1],*(undefined4 *)(ppuStack_38[1] + 1),
                 *ppuStack_38,local_40,iVar1,"ms based on ICE RTT ",local_a0);
    if (cStack_89 < '\0') {
      operator_delete(local_a0[0]);
    }
    if (cStack_71 < '\0') {
      operator_delete(local_88[0]);
    }
  }
  (**(code **)(*(long *)param_1[0x32] + 0x68))((long *)param_1[0x32],iVar1);
  return;
}


// ===== 00c74c68  FUN_00c74c68 =====

void FUN_00c74c68(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined1 uStack_d1;
  long *local_d0;
  undefined1 *puStack_c8;
  code *local_c0;
  code *pcStack_b8;
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
  undefined8 *local_60;
  undefined8 *puStack_58;
  undefined1 *local_50;
  
  if (((*(byte *)(param_1 + 0x60) & 1) == 0) && ((int)param_1[0x4a] != 3)) {
    plVar5 = (long *)(**(code **)(*param_1 + 0xd0))(param_1);
    uVar6 = (**(code **)(*plVar5 + 8))();
    if (((uVar6 & 1) != 0) && (*(char *)((long)param_1 + 0x243) == '\x01')) {
      puStack_58 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
      local_60 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00c77f0c(&local_60,param_1 + 0x4a);
      puVar4 = puStack_58;
      puVar3 = local_60;
      for (puVar7 = local_60; puVar7 != puVar4; puVar7 = puVar7 + 2) {
        pcStack_b8 = (code *)&DAT_aaaaaaaaaaaaaaaa;
        local_c0 = (code *)&DAT_aaaaaaaaaaaaaaaa;
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
        puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
        local_d0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
        FUN_00897b38(&local_d0);
        plVar5 = (long *)(**(code **)(*param_1 + 0xd0))(param_1);
        (**(code **)(*plVar5 + 0x18))(plVar5,*puVar7,puVar7[1],&local_d0,0);
        FUN_00897c8c(&local_d0);
      }
      if (local_60 != (undefined8 *)0x0) {
        uVar8 = (ulong)((long)puStack_58 + (-0x10 - ((long)puStack_58 << 0x3c))) >> 4;
        uVar6 = (ulong)(((long)local_60 - (long)puStack_58 << 0x3c) -
                       ((long)local_60 - (long)puStack_58)) >> 4;
        if (uVar8 <= uVar6) {
          uVar6 = uVar8;
        }
        puVar7 = puStack_58;
        if ((1 < uVar6) && ((((int)local_60 - (int)puStack_58 | -(int)puStack_58) & 0xfU) == 0)) {
          uVar6 = uVar6 & 0xffffffffffffffe;
          puVar7 = puStack_58 + uVar6 * -2;
          do {
            uVar6 = uVar6 - 2;
          } while (uVar6 != 0);
        }
        while (puVar7 != local_60) {
          puVar7 = puVar7 + -2;
          if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        puStack_58 = local_60;
        operator_delete(local_60);
      }
      if (puVar3 == puVar4) {
        return;
      }
    }
    plVar5 = (long *)(**(code **)(*param_1 + 0xd0))(param_1);
    uVar6 = (**(code **)(*plVar5 + 0xd0))();
    iVar2 = (int)uVar6 * 2;
    *(undefined1 *)(param_1 + 0x60) = 1;
    if (iVar2 < 0x33) {
      iVar2 = 0x32;
    }
    if (2999 < iVar2) {
      iVar2 = 3000;
    }
    iVar1 = 400;
    if ((uVar6 & 0x100000000) != 0) {
      iVar1 = iVar2;
    }
    plVar5 = (long *)FUN_007e06bc();
    lVar9 = param_1[0x61];
    if (lVar9 != 0) {
      FUN_00d0f740(1,lVar9);
    }
    local_d0 = (long *)operator_new(0x30);
    *local_d0 = lVar9;
    local_d0[4] = (long)FUN_004473ec;
    local_d0[5] = (long)FUN_00c76554;
    local_d0[2] = (long)param_1;
    local_60 = (undefined8 *)CONCAT71(local_60._1_7_,1);
    local_c0 = FUN_005db390;
    pcStack_b8 = FUN_005db348;
    (**(code **)(*plVar5 + 0x10))(plVar5,&local_d0,iVar1 * 1000,&local_60,&uStack_d1);
    (*local_c0)(0,&local_d0,&local_d0);
    uVar6 = FUN_00417e08();
    if ((uVar6 & 1) == 0) {
      FUN_00c72e80(&local_d0,param_1);
      FUN_00623bb0(&DAT_00259892,"../../p2p/dtls/dtls_transport.cc",0x2851,&local_d0,
                   ": Scheduled retransmit of DTLS packet, delay_ms: ",iVar1);
      if ((long)local_c0 < 0) {
        operator_delete(local_d0);
      }
    }
  }
  return;
}


// ===== 00c74f3c  FUN_00c74f3c =====

void FUN_00c74f3c(long *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  void *local_50 [2];
  char cStack_39;
  char *local_38;
  ulong local_30;
  undefined1 *local_28;
  undefined1 uStack_1;
  
  uVar4 = FUN_0044075c();
  if ((uVar4 & 1) == 0) {
    local_38 = "../../p2p/dtls/dtls_transport.cc";
    local_30 = 0x1ab8;
    local_28 = &uStack_1;
    FUN_00c72e80(local_50,param_1);
    plVar5 = (long *)(**(code **)(*param_1 + 0xd0))(param_1);
    uVar2 = (**(code **)(*plVar5 + 0x10))();
    FUN_00623bb0(&DAT_00259892,local_38,local_30 & 0xffffffff,local_50,
                 ": ice_transport receiving state changed to ",uVar2 & 1);
    if (cStack_39 < '\0') {
      operator_delete(local_50[0]);
    }
  }
  if (((char)param_1[0x3a] != '\x01') ||
     (iVar3 = (**(code **)(*param_1 + 0x50))(param_1), iVar3 == 2)) {
    plVar5 = (long *)(**(code **)(*param_1 + 0xd0))(param_1);
    bVar1 = (**(code **)(*plVar5 + 0x10))();
    if (*(byte *)(param_1 + 0x48) != (bVar1 & 1)) {
      *(byte *)(param_1 + 0x48) = bVar1 & 1;
      FUN_00bc87f0(param_1,param_1);
    }
  }
  return;
}


// ===== 00c75050  FUN_00c75050 =====

void FUN_00c75050(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  void *local_60 [2];
  char cStack_49;
  
  if ((*(byte *)(param_1 + 0x3a) & 1) == 0) {
    FUN_00bc8500(param_1,param_3);
    return;
  }
  iVar1 = (**(code **)(*param_1 + 0x50))(param_1);
  if (iVar1 - 1U < 2) {
    uVar2 = FUN_00c6eb88(*param_3,param_3[1]);
    if ((uVar2 & 1) == 0) {
      iVar1 = (**(code **)(*param_1 + 0x50))(param_1);
      if (iVar1 == 2) {
        if ((0xb < (ulong)param_3[1]) &&
           (*(char *)*param_3 + 0x40 < 0 != SCARRY4((int)*(char *)*param_3,0x40))) {
          FUN_00bd336c(local_60,param_3,2);
          FUN_00bc8500(param_1,local_60);
          return;
        }
        uVar2 = FUN_004249b0();
        if ((uVar2 & 1) != 0) {
          return;
        }
        FUN_00c72e80(local_60,param_1);
        pcVar5 = ": Received unexpected non-DTLS packet.";
        uVar4 = 0x1d03;
      }
      else {
        uVar2 = FUN_004249b0();
        if ((uVar2 & 1) != 0) {
          return;
        }
        FUN_00c72e80(local_60,param_1);
        pcVar5 = ": Received non-DTLS packet before DTLS complete.";
        uVar4 = 0x1cc3;
      }
    }
    else {
      uVar2 = FUN_00c72384(param_1[0x33],*param_3,param_3[1]);
      if ((uVar2 & 1) != 0) {
        return;
      }
      uVar2 = FUN_004249b0();
      if ((uVar2 & 1) != 0) {
        return;
      }
      FUN_00c72e80(local_60,param_1);
      pcVar5 = ": Failed to handle DTLS packet.";
      uVar4 = 0x1c93;
    }
    goto LAB_00c75338;
  }
  if (iVar1 != 0) {
    return;
  }
  if (param_1[0x32] == 0) {
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) == 0) {
      FUN_00c72e80(local_60,param_1);
      pcVar5 = ": Packet received before we know if we are doing DTLS or not.";
      uVar4 = 0x1b9a;
      goto LAB_00c7520c;
    }
  }
  else {
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      FUN_00c72e80(local_60,param_1);
      pcVar5 = ": Packet received before DTLS started.";
      uVar4 = 0x1b81;
LAB_00c7520c:
      FUN_00623bb0(&DAT_00223e94,"../../p2p/dtls/dtls_transport.cc",uVar4,local_60,pcVar5);
      if (cStack_49 < '\0') {
        operator_delete(local_60[0]);
      }
    }
  }
  uVar2 = FUN_00c6ebb0(*param_3,param_3[1]);
  uVar3 = FUN_00417e08();
  if ((uVar2 & 1) != 0) {
    if ((uVar3 & 1) == 0) {
      FUN_00c72e80(local_60,param_1);
      FUN_00623bb0(&DAT_00223e94,"../../p2p/dtls/dtls_transport.cc",0x1bc9,local_60,
                   ": Caching DTLS ClientHello packet until DTLS is started.");
      if (cStack_49 < '\0') {
        operator_delete(local_60[0]);
      }
    }
    FUN_00c6ec04(param_1 + 0x44,*param_3,param_3[1]);
    FUN_00c6f10c(param_1 + 0x44,4);
    if (param_1[0x32] != 0) {
      return;
    }
    if (param_1[0x3b] == 0) {
      return;
    }
    (**(code **)(*param_1 + 0x70))(param_1,1);
    FUN_00c73b00(param_1);
    return;
  }
  if ((uVar3 & 1) != 0) {
    return;
  }
  FUN_00c72e80(local_60,param_1);
  pcVar5 = ": Not a DTLS ClientHello packet; dropping.";
  uVar4 = 0x1c39;
LAB_00c75338:
  FUN_00623bb0(&DAT_00223e94,"../../p2p/dtls/dtls_transport.cc",uVar4,local_60,pcVar5);
  if (cStack_49 < '\0') {
    operator_delete(local_60[0]);
  }
  return;
}


// ===== 00c7536c  FUN_00c7536c =====

void FUN_00c7536c(long param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  int *piVar2;
  long lVar3;
  undefined1 *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  void *local_8e0 [2];
  char cStack_8c9;
  undefined1 auStack_898 [52];
  undefined4 local_864;
  undefined1 *local_860;
  int local_858;
  undefined4 uStack_854;
  char cStack_841;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if ((param_2 & 1) != 0) {
    uVar6 = FUN_00417e08();
    if ((uVar6 & 1) == 0) {
      FUN_00c72e80(&local_858,param_1);
      FUN_00623bb0(&DAT_00223e94,"../../p2p/dtls/dtls_transport.cc",0x1e51,&local_858,
                   ": DTLS handshake complete.");
      if (cStack_841 < '\0') {
        operator_delete((void *)CONCAT44(uStack_854,local_858));
      }
    }
    iVar5 = (**(code **)(**(long **)(param_1 + 400) + 0x10))();
    if (iVar5 == 2) {
      local_858 = -0x55555556;
      (**(code **)(**(long **)(param_1 + 400) + 0xb0))(*(long **)(param_1 + 400),&local_858);
      uVar1 = 0;
      if (*(int *)(param_1 + 0x1e0) == 0) {
        uVar1 = *(undefined1 *)(param_1 + 0x1e4);
      }
      FUN_00c77bd8(param_1 + 0x250,uVar1,local_858 == 0xfefc);
      *(undefined8 *)(*(long *)(param_1 + 0x198) + 0x38) = 0;
      FUN_00c73690(param_1,2);
      FUN_00c739b0(param_1,1);
    }
  }
  if ((param_2 >> 1 & 1) != 0) {
    memset(&local_858,0xaa,0x800);
    local_860 = &DAT_aaaaaaaaaaaaaaaa;
    local_864 = 0xaaaaaaaa;
    while( true ) {
      iVar5 = (**(code **)(**(long **)(param_1 + 400) + 0x18))
                        (*(long **)(param_1 + 400),&local_858,0x800,&local_860,&local_864);
      puVar4 = local_860;
      if (iVar5 != 1) break;
      FUN_007e8a64(local_8e0);
      uVar7 = (**(code **)(**(long **)(param_1 + 0x160) + 0x10))();
      piVar2 = (int *)0x0;
      if (puVar4 != (undefined1 *)0x0) {
        piVar2 = &local_858;
      }
      FUN_00bd3350(auStack_898,piVar2,puVar4,local_8e0,uVar7,1,0,1);
      FUN_00bc8500(param_1,auStack_898);
      if (cStack_8c9 < '\0') {
        operator_delete(local_8e0[0]);
      }
    }
    if (iVar5 == 0) {
      uVar6 = FUN_00417e08();
      if ((uVar6 & 1) == 0) {
        FUN_00c72e80(local_8e0,param_1);
        FUN_00623bb0(&DAT_00259892,"../../p2p/dtls/dtls_transport.cc",0x1f89,local_8e0,
                     ": Closed by remote with DTLS transport error, code=",local_864);
        if (cStack_8c9 < '\0') {
          operator_delete(local_8e0[0]);
        }
      }
      uVar7 = 4;
    }
    else {
      if (iVar5 != 3) goto LAB_00c7560c;
      uVar6 = FUN_00417e08();
      if ((uVar6 & 1) == 0) {
        FUN_00c72e80(local_8e0,param_1);
        FUN_00623bb0(&DAT_00223e94,"../../p2p/dtls/dtls_transport.cc",0x1f59,local_8e0,
                     ": DTLS transport closed by remote");
        if (cStack_8c9 < '\0') {
          operator_delete(local_8e0[0]);
        }
      }
      uVar7 = 3;
    }
    FUN_00c739b0(param_1,0);
    FUN_00c73690(param_1,uVar7);
    FUN_00bc8540(param_1);
  }
LAB_00c7560c:
  if ((param_2 >> 3 & 1) != 0) {
    FUN_00c739b0(param_1,0);
    uVar6 = FUN_00417e08();
    if (param_3 == 0) {
      if ((uVar6 & 1) == 0) {
        FUN_00c72e80(&local_858,param_1);
        FUN_00623bb0(&DAT_00223e94,"../../p2p/dtls/dtls_transport.cc",0x1ff9,&local_858,
                     ": DTLS transport closed");
        if (cStack_841 < '\0') {
          operator_delete((void *)CONCAT44(uStack_854,local_858));
        }
      }
      uVar7 = 3;
    }
    else {
      if ((uVar6 & 1) == 0) {
        FUN_00c72e80(&local_858,param_1);
        FUN_00623bb0(&DAT_00259892,"../../p2p/dtls/dtls_transport.cc",0x2011,&local_858,
                     ": DTLS transport error, code=",param_3);
        if (cStack_841 < '\0') {
          operator_delete((void *)CONCAT44(uStack_854,local_858));
        }
      }
      uVar7 = 4;
    }
    FUN_00c73690(param_1,uVar7);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00c75708  FUN_00c75708 =====

void FUN_00c75708(long *param_1)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  void *local_48 [2];
  char cStack_31;
  
  plVar3 = (long *)(**(code **)(*param_1 + 0xd0))();
  uVar4 = (**(code **)(*plVar3 + 0xd0))();
  if ((uVar4 >> 0x20 & 1) == 0) {
    cVar1 = *(char *)((long)param_1 + 0x243);
    uVar4 = FUN_00417e08();
    if (cVar1 != '\x01') {
      if ((uVar4 & 1) != 0) {
        return;
      }
      FUN_00c72e80(local_48,param_1);
      FUN_00623bb0(&DAT_00223e94,"../../p2p/dtls/dtls_transport.cc",0x25a9,local_48,
                   ": no RTT estimate - using default DTLS handshake timeout");
      if (-1 < cStack_31) {
        return;
      }
      operator_delete(local_48[0]);
      return;
    }
    if ((uVar4 & 1) == 0) {
      FUN_00c72e80(local_48,param_1);
      FUN_00623bb0(&DAT_00256769,"../../p2p/dtls/dtls_transport.cc",0x2589,local_48,
                   ": configuring DTLS handshake timeout ",86400000,"ms for DTLS-in-STUN");
      if (cStack_31 < '\0') {
        operator_delete(local_48[0]);
      }
    }
    plVar3 = (long *)param_1[0x32];
    iVar2 = 86400000;
  }
  else {
    iVar2 = (int)uVar4 * 2;
    if (iVar2 < 0x33) {
      iVar2 = 0x32;
    }
    if (2999 < iVar2) {
      iVar2 = 3000;
    }
    uVar5 = FUN_00417e08();
    if ((uVar5 & 1) == 0) {
      FUN_00c72e80(local_48,param_1);
      FUN_00623bb0(&DAT_00259883,"../../p2p/dtls/dtls_transport.cc",0x2551,local_48,
                   ": configuring DTLS handshake timeout ",iVar2,"ms based on ICE RTT ",
                   uVar4 & 0xffffffff);
      if (cStack_31 < '\0') {
        operator_delete(local_48[0]);
      }
    }
    plVar3 = (long *)param_1[0x32];
  }
  (**(code **)(*plVar3 + 0x60))(plVar3,iVar2);
  return;
}


// ===== 00c758b8  FUN_00c758b8 =====

void FUN_00c758b8(long *param_1)

{
  *param_1 = (long)&PTR_FUN_00d4e398;
  if ((char)param_1[0x22] == '\x01') {
    FUN_00897c8c(param_1 + 0x14);
  }
  FUN_00c76580(param_1 + 9);
  *param_1 = (long)(PTR_DAT_00d52d60 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00c75920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[4])(0,param_1 + 2,param_1 + 2);
  return;
}


// ===== 00c75924  FUN_00c75924 =====

void FUN_00c75924(long *param_1)

{
  *param_1 = (long)&PTR_FUN_00d4e398;
  if ((char)param_1[0x22] == '\x01') {
    FUN_00897c8c(param_1 + 0x14);
  }
  FUN_00c76580(param_1 + 9);
  *param_1 = (long)(PTR_DAT_00d52d60 + 0x10);
  (*(code *)param_1[4])(0,param_1 + 2,param_1 + 2);
  operator_delete(param_1);
  return;
}


// ===== 00c7599c  FUN_00c7599c =====

void FUN_00c7599c(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

{
  size_t __n;
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  size_t __n_00;
  void *pvVar4;
  undefined1 auVar5 [16];
  
  uVar3 = param_1[2];
  pvVar4 = (void *)*param_1;
  if (uVar3 - (long)pvVar4 < param_4) {
    if (pvVar4 != (void *)0x0) {
      if (param_1[1] - 1 < (ulong)(param_1[1] - (long)pvVar4)) {
LAB_00c75ae4:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      param_1[1] = pvVar4;
      operator_delete(pvVar4);
      uVar3 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if ((long)param_4 < 0) {
      auVar5 = FUN_006e2dc8();
                    /* WARNING: Could not recover jumptable at 0x00c75b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(auVar5._8_8_ + 0x20))
                (auVar5._8_8_,*(undefined8 *)*auVar5._0_8_,*(undefined4 *)auVar5._0_8_[1]);
      return;
    }
    uVar1 = uVar3 * 2;
    if (uVar1 < param_4 || uVar1 - param_4 == 0) {
      uVar1 = param_4;
    }
    if (0x3ffffffffffffffe < uVar3) {
      uVar1 = 0x7fffffffffffffff;
    }
    pvVar4 = operator_new(uVar1);
    *param_1 = pvVar4;
    param_1[1] = pvVar4;
    param_1[2] = (long)pvVar4 + uVar1;
    memcpy(pvVar4,param_2,param_3 - (long)param_2);
    lVar2 = (long)pvVar4 + (param_3 - (long)param_2);
  }
  else {
    __n = param_1[1] - (long)pvVar4;
    if (__n < param_4) {
      memmove(pvVar4,param_2,__n);
      pvVar4 = (void *)param_1[1];
      __n_00 = param_3 - (long)((long)param_2 + __n);
      memmove(pvVar4,(void *)((long)param_2 + __n),__n_00);
      lVar2 = (long)pvVar4 + __n_00;
    }
    else {
      memmove(pvVar4,param_2,param_3 - (long)param_2);
      lVar2 = (long)pvVar4 + (param_3 - (long)param_2);
      if (param_1[1] - 1 < (ulong)(param_1[1] - lVar2)) goto LAB_00c75ae4;
    }
  }
  param_1[1] = lVar2;
  return;
}


// ===== 00c75afc  FUN_00c75afc =====

void FUN_00c75afc(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00c75b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined8 *)*param_1,*(undefined4 *)param_1[1]);
  return;
}


// ===== 00c75b1c  FUN_00c75b1c =====

void FUN_00c75b1c(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00c75b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined4 *)*param_1);
  return;
}


// ===== 00c75b38  FUN_00c75b38 =====

void FUN_00c75b38(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  void *local_a8 [2];
  char cStack_91;
  undefined1 auStack_60 [48];
  
  lVar3 = *param_1;
  if (*(long *)(lVar3 + 0x2f8) != 0) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    FUN_007e8a64(local_a8);
    FUN_00bd3350(auStack_60,uVar1,uVar2,local_a8,0,0,0,0);
    (**(code **)(lVar3 + 0x2f8))(lVar3 + 0x2e0,lVar3,auStack_60);
    if (cStack_91 < '\0') {
      operator_delete(local_a8[0]);
    }
  }
  return;
}


// ===== 00c75bd0  FUN_00c75bd0 =====

void FUN_00c75bd0(long *param_1,undefined4 param_2)

{
  undefined4 local_1c;
  undefined4 *local_18;
  
  local_18 = &local_1c;
  local_1c = param_2;
  FUN_007b6160(*param_1 + 0xf0,&local_18,FUN_00c75b1c);
  return;
}


// ===== 00c75c14  FUN_00c75c14 =====

void FUN_00c75c14(long *param_1,undefined4 param_2)

{
  undefined4 local_1c;
  undefined4 *local_18;
  
  local_18 = &local_1c;
  local_1c = param_2;
  FUN_007b6160(*param_1 + 0xf0,&local_18,FUN_00c75b1c);
  return;
}


// ===== 00c75c58  FUN_00c75c58 =====

void FUN_00c75c58(undefined8 *param_1)

{
  FUN_00c7536c(*param_1);
  return;
}


// ===== 00c75c64  FUN_00c75c64 =====

void FUN_00c75c64(undefined8 *param_1)

{
  FUN_00c74818(*param_1);
  return;
}


// ===== 00c75c70  FUN_00c75c70 =====

void FUN_00c75c70(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00c75050(*param_1,param_2,param_3,0);
  return;
}


// ===== 00c75c80  FUN_00c75c80 =====

void FUN_00c75c80(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long local_38;
  long *plStack_30;
  undefined8 local_28;
  
  lVar1 = *param_1;
  uVar2 = FUN_007ebde8(param_1[1]);
  if ((uVar2 & 1) != 0) {
    plStack_30 = &local_38;
    local_38 = lVar1;
    local_28 = param_3;
    FUN_007b6160(lVar1 + 0x50,&plStack_30,FUN_00c5aaa0);
  }
  return;
}


// ===== 00c75cd8  FUN_00c75cd8 =====

void FUN_00c75cd8(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
    uVar3 = param_2[1];
    param_2[1] = 0;
    param_3[1] = uVar3;
  }
  else if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xc75d5c);
    (*pcVar1)();
  }
  pvVar4 = (void *)param_2[1];
  if ((pvVar4 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar4), iVar2 == 1)) {
    operator_delete(pvVar4);
    return;
  }
  return;
}


// ===== 00c75d5c  FUN_00c75d5c =====

void FUN_00c75d5c(undefined8 *param_1)

{
  ulong uVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  if ((uVar1 & 1) != 0) {
    FUN_00bc871c(plVar2,plVar2);
    return;
  }
  return;
}


// ===== 00c75dac  FUN_00c75dac =====

void FUN_00c75dac(undefined8 *param_1)

{
  FUN_00c74f3c(*param_1);
  return;
}


// ===== 00c75db8  FUN_00c75db8 =====

void FUN_00c75db8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  uStack_38 = param_2[1];
  local_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  local_20 = param_2[4];
  FUN_00bc88d0(*param_1,&local_40);
  return;
}


// ===== 00c75df4  FUN_00c75df4 =====

void FUN_00c75df4(undefined8 *param_1,long *param_2,undefined4 param_3)

{
  undefined1 *__src;
  void *__dest;
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 local_70;
  char local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  ulong local_48;
  
  lVar5 = *param_2;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = (undefined1 *)0xaaaaaaaaaaaaaa00;
  local_48 = 0xaaaaaaaaaaaaaa00;
  if (*(char *)(lVar5 + 0x243) == '\x01') {
    FUN_00c77de4(&local_80,lVar5 + 0x250);
    puVar3 = local_78;
    puVar4 = local_80;
    FUN_00c77e7c(&local_80,lVar5 + 0x250,param_3);
    FUN_00c7601c(&local_60,&local_80);
    if ((local_68 == '\x01') && (local_80 != (undefined1 *)0x0)) {
      uVar2 = (ulong)(((long)local_80 - (long)local_78 << 0x3e) - ((long)local_80 - (long)local_78))
              >> 2;
      if ((ulong)(local_78 + (-4 - ((long)local_78 << 0x3e))) >> 2 <= uVar2) {
        uVar2 = (ulong)(local_78 + (-4 - ((long)local_78 << 0x3e))) >> 2;
      }
      puVar1 = local_78;
      if ((1 < uVar2) && ((((int)local_80 - (int)local_78 | -(int)local_78) & 3U) == 0)) {
        uVar2 = uVar2 & 0x3ffffffffffffffe;
        puVar1 = local_78 + uVar2 * -4;
        do {
          uVar2 = uVar2 - 2;
        } while (uVar2 != 0);
      }
      do {
        if (puVar1 == local_80) {
          local_78 = local_80;
          operator_delete(local_80);
          goto LAB_00c75f0c;
        }
        puVar1 = puVar1 + -4;
      } while (puVar1 != (undefined1 *)0x0);
      goto LAB_00c75fd4;
    }
LAB_00c75f0c:
    uVar2 = local_48 & 0xff;
  }
  else {
    uVar2 = 0;
    local_70 = 0;
    puVar3 = &DAT_aaaaaaaaaaaaaaaa;
    puVar4 = (undefined1 *)0xaaaaaaaaaaaaaa00;
  }
  puVar1 = puStack_58;
  __src = local_60;
  *param_1 = puVar4;
  param_1[1] = puVar3;
  *(undefined1 *)(param_1 + 2) = local_70;
  *(undefined8 *)((long)param_1 + 0x11) = 0xaaaaaaaaaaaaaa;
  *(undefined1 *)(param_1 + 6) = 0;
  if ((uVar2 & 1) != 0) {
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    uVar2 = (long)puStack_58 - (long)local_60;
    if (uVar2 != 0) {
      if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005da79c();
      }
      __dest = operator_new(uVar2);
      param_1[3] = __dest;
      param_1[5] = (long)__dest + uVar2;
      memcpy(__dest,__src,uVar2);
      param_1[4] = (long)__dest + uVar2;
    }
    *(undefined1 *)(param_1 + 6) = 1;
    if (__src != (undefined1 *)0x0) {
      uVar2 = (ulong)(((long)__src - (long)puVar1 << 0x3e) - ((long)__src - (long)puVar1)) >> 2;
      if ((ulong)(puVar1 + (-4 - ((long)puVar1 << 0x3e))) >> 2 <= uVar2) {
        uVar2 = (ulong)(puVar1 + (-4 - ((long)puVar1 << 0x3e))) >> 2;
      }
      if ((1 < uVar2) && ((((int)__src - (int)puVar1 | -(int)puVar1) & 3U) == 0)) {
        uVar2 = uVar2 & 0x3ffffffffffffffe;
        puVar1 = puVar1 + uVar2 * -4;
        do {
          uVar2 = uVar2 - 2;
        } while (uVar2 != 0);
      }
      do {
        if (puVar1 == __src) {
          puStack_58 = __src;
          operator_delete(__src);
          return;
        }
        puVar1 = puVar1 + -4;
      } while (puVar1 != (undefined1 *)0x0);
LAB_00c75fd4:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
  return;
}


// ===== 00c7601c  FUN_00c7601c =====

void FUN_00c7601c(long *param_1,long *param_2)

{
  char cVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  
  cVar1 = (char)param_1[3];
  if (cVar1 == (char)param_2[3]) {
    if ((param_1 != param_2) && (cVar1 != '\0')) {
      FUN_005e72f8(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 2);
      return;
    }
  }
  else if (cVar1 == '\0') {
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    pvVar2 = (void *)*param_2;
    uVar4 = param_2[1] - (long)pvVar2;
    if (uVar4 != 0) {
      if ((long)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005da79c();
      }
      pvVar3 = operator_new(uVar4);
      *param_1 = (long)pvVar3;
      param_1[1] = (long)pvVar3;
      param_1[2] = (long)pvVar3 + uVar4;
      memcpy(pvVar3,pvVar2,uVar4);
      param_1[1] = (long)pvVar3 + uVar4;
    }
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else {
    pvVar2 = (void *)*param_1;
    if (pvVar2 != (void *)0x0) {
      pvVar3 = (void *)param_1[1];
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
      param_1[1] = (long)pvVar2;
      operator_delete(pvVar2);
    }
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}


// ===== 00c76188  FUN_00c76188 =====

void FUN_00c76188(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  void *__src;
  void *unaff_x22;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *local_90;
  void *local_88;
  void *local_80;
  char local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  cVar1 = *(char *)(param_3 + 3);
  uVar8 = param_2[1];
  uVar7 = *param_2;
  uVar2 = param_2[2];
  if (cVar1 == '\x01') {
    unaff_x22 = (void *)param_3[1];
    param_3[1] = 0;
    param_3[2] = 0;
    __src = (void *)*param_3;
    *param_3 = 0;
    lVar6 = *param_1;
    if ((*(byte *)(lVar6 + 0x243) & 1) != 0) {
      uVar4 = (long)unaff_x22 - (long)__src;
      local_88 = (void *)0x0;
      local_80 = (void *)0x0;
      local_90 = (void *)0x0;
      local_70 = uVar7;
      uStack_68 = uVar8;
      local_60 = uVar2;
      if (uVar4 != 0) {
        if ((long)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_005da79c();
        }
        local_90 = operator_new(uVar4);
        pvVar3 = (void *)((long)local_90 + uVar4);
        local_80 = pvVar3;
        memcpy(local_90,__src,uVar4);
        local_88 = pvVar3;
      }
      local_78 = '\x01';
      goto LAB_00c7625c;
    }
  }
  else {
    lVar6 = *param_1;
    if ((*(byte *)(lVar6 + 0x243) & 1) == 0) {
      return;
    }
    uStack_68 = param_2[1];
    local_70 = *param_2;
    local_60 = param_2[2];
    __src = (void *)0x0;
    local_90 = (void *)((ulong)local_90 & 0xffffffffffffff00);
    local_78 = '\0';
LAB_00c7625c:
    FUN_00c77f18(lVar6 + 0x250,&local_70,&local_90);
    if ((local_78 == '\x01') && (local_90 != (void *)0x0)) {
      uVar5 = (ulong)((long)local_88 + (-4 - ((long)local_88 << 0x3e))) >> 2;
      uVar4 = (ulong)(((long)local_90 - (long)local_88 << 0x3e) - ((long)local_90 - (long)local_88))
              >> 2;
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
      pvVar3 = local_88;
      if ((1 < uVar4) && ((((int)local_90 - (int)local_88 | -(int)local_88) & 3U) == 0)) {
        uVar4 = uVar4 & 0x3ffffffffffffffe;
        pvVar3 = (void *)((long)local_88 + uVar4 * -4);
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      do {
        if (pvVar3 == local_90) {
          local_88 = local_90;
          operator_delete(local_90);
          goto LAB_00c762f8;
        }
        pvVar3 = (void *)((long)pvVar3 + -4);
      } while (pvVar3 != (void *)0x0);
      goto LAB_00c76360;
    }
  }
LAB_00c762f8:
  if ((cVar1 == '\0') || (__src == (void *)0x0)) {
    return;
  }
  uVar5 = (ulong)((long)unaff_x22 + (-4 - ((long)unaff_x22 << 0x3e))) >> 2;
  uVar4 = (ulong)(((long)__src - (long)unaff_x22 << 0x3e) - ((long)__src - (long)unaff_x22)) >> 2;
  if (uVar5 <= uVar4) {
    uVar4 = uVar5;
  }
  if ((1 < uVar4) && ((((int)__src - (int)unaff_x22 | -(int)unaff_x22) & 3U) == 0)) {
    uVar4 = uVar4 & 0x3ffffffffffffffe;
    unaff_x22 = (void *)((long)unaff_x22 + uVar4 * -4);
    do {
      uVar4 = uVar4 - 2;
    } while (uVar4 != 0);
  }
  do {
    if (unaff_x22 == __src) {
      operator_delete(__src);
      return;
    }
    unaff_x22 = (void *)((long)unaff_x22 + -4);
  } while (unaff_x22 != (void *)0x0);
LAB_00c76360:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c763a4  FUN_00c763a4 =====

void FUN_00c763a4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 extraout_x1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  if (((char)plVar2[0x3a] == '\x01') &&
     (uVar1 = FUN_00c6eb88(*param_3,param_3[1]), (uVar1 & 1) != 0)) {
    (**(code **)(*plVar2 + 0xd0))(plVar2);
    FUN_00c75050(plVar2,extraout_x1,param_3,0);
    return;
  }
  return;
}


// ===== 00c76410  FUN_00c76410 =====

void FUN_00c76410(undefined8 param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *local_70;
  ulong uStack_68;
  ulong local_60;
  undefined1 *local_58;
  ulong uStack_50;
  long local_28;
  
  lVar2 = tpidr_el0;
  uVar5 = 0;
  local_28 = *(long *)(lVar2 + 0x28);
  iVar1 = *param_2;
  local_70 = (undefined1 *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      pcVar3 = "kNew";
      uVar4 = 4;
    }
    else if (iVar1 == 1) {
      pcVar3 = "kConnecting";
      uVar4 = 0xb;
    }
    else {
      if (iVar1 != 2) goto LAB_00c764ec;
      pcVar3 = "kConnected";
      uVar4 = 10;
    }
  }
  else {
    if (iVar1 == 3) {
      pcVar3 = "kClosed";
    }
    else {
      if (iVar1 != 4) {
        if (iVar1 != 5) goto LAB_00c764ec;
        pcVar3 = "kNumValues";
        uVar4 = 10;
        goto LAB_00c764dc;
      }
      pcVar3 = "kFailed";
    }
    uVar4 = 7;
  }
LAB_00c764dc:
  thunk_FUN_00547cac(&local_70,pcVar3,uVar4);
  uVar5 = local_60 >> 0x38;
LAB_00c764ec:
  uStack_50 = uStack_68;
  local_58 = local_70;
  if (-1 < (char)uVar5) {
    uStack_50 = uVar5;
    local_58 = (undefined1 *)&local_70;
  }
  FUN_005f9ea8(param_1,&local_58);
  if ((long)local_60 < 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00c76554  FUN_00c76554 =====

void FUN_00c76554(long *param_1)

{
  *(undefined1 *)(*param_1 + 0x300) = 0;
  FUN_00c74c68();
  return;
}


// ===== 00c76564  FUN_00c76564 =====

void FUN_00c76564(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[10] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  return;
}


// ===== 00c76580  FUN_00c76580 =====

void FUN_00c76580(long param_1)

{
  void *pvVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != *(long *)(param_1 + 0x20)) {
    uVar5 = *(ulong *)(param_1 + 0x30);
    uVar4 = *(long *)(param_1 + 0x38) + uVar5;
    plVar7 = (long *)(lVar2 + (uVar5 >> 9) * 8);
    lVar2 = *(long *)(lVar2 + (uVar4 >> 9) * 8);
    puVar8 = (undefined8 *)(*plVar7 + (uVar5 & 0x1ff) * 8);
    while (puVar8 != (undefined8 *)(lVar2 + (uVar4 & 0x1ff) * 8)) {
      pvVar6 = (void *)*puVar8;
      if (pvVar6 != (void *)0x0) {
        pvVar1 = *(void **)((long)pvVar6 + 0x10);
        *(undefined8 *)((long)pvVar6 + 0x10) = 0;
        if (pvVar1 != (void *)0x0) {
          operator_delete__(pvVar1);
        }
        operator_delete(pvVar6);
      }
      puVar8 = puVar8 + 1;
      if ((long)puVar8 - *plVar7 == 0x1000) {
        plVar7 = plVar7 + 1;
        puVar8 = (undefined8 *)*plVar7;
      }
    }
  }
  puVar8 = *(undefined8 **)(param_1 + 0x40);
  puVar3 = *(undefined8 **)(param_1 + 0x48);
  if (puVar8 != puVar3) {
    do {
      pvVar6 = (void *)*puVar8;
      if (pvVar6 != (void *)0x0) {
        pvVar1 = *(void **)((long)pvVar6 + 0x10);
        *(undefined8 *)((long)pvVar6 + 0x10) = 0;
        if (pvVar1 != (void *)0x0) {
          operator_delete__(pvVar1);
        }
        operator_delete(pvVar6);
      }
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar3);
    puVar8 = *(undefined8 **)(param_1 + 0x40);
  }
  if (puVar8 != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x48);
    uVar5 = (ulong)((long)puVar3 + (-8 - ((long)puVar3 << 0x3d))) >> 3;
    uVar4 = (ulong)(((long)puVar8 - (long)puVar3 << 0x3d) - ((long)puVar8 - (long)puVar3)) >> 3;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)puVar8 - (int)puVar3 | -(int)puVar3) & 7U) == 0)) {
      uVar4 = uVar4 & 0x1ffffffffffffffe;
      puVar3 = puVar3 + -uVar4;
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    while (puVar3 != puVar8) {
      puVar3 = puVar3 + -1;
      if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    *(undefined8 **)(param_1 + 0x48) = puVar8;
    operator_delete(puVar8);
  }
  FUN_00c76714(param_1 + 0x10);
  return;
}


// ===== 00c76714  FUN_00c76714 =====

void FUN_00c76714(undefined8 *param_1)

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
    plVar3 = puVar9 + (uVar7 >> 9);
    lVar5 = *plVar3;
    lVar4 = lVar5 + (uVar7 & 0x1ff) * 8;
    while (lVar4 != puVar9[param_1[5] + uVar7 >> 9] + (param_1[5] + uVar7 & 0x1ff) * 8) {
      if (lVar4 == 0) goto LAB_00c7687c;
      lVar4 = lVar4 + 8;
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
    uVar1 = 0x100;
  }
  else {
    if (uVar7 != 2) goto LAB_00c767f4;
    uVar1 = 0x200;
  }
  param_1[4] = uVar1;
LAB_00c767f4:
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
LAB_00c7687c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c768cc  FUN_00c768cc =====

undefined8 FUN_00c768cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}


// ===== 00c768d8  FUN_00c768d8 =====

void FUN_00c768d8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x18);
    uVar4 = *(ulong *)(param_1 + 0x30);
    do {
      puVar1 = *(undefined8 **)(param_1 + 0x48);
      if (puVar1 < *(undefined8 **)(param_1 + 0x50)) {
        if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar2 = puVar1 + 1;
        *puVar1 = *(undefined8 *)(puVar3[uVar4 >> 9] + (uVar4 & 0x1ff) * 8);
      }
      else {
        puVar2 = (undefined8 *)FUN_00c76cbc(param_1 + 0x40);
      }
      *(undefined8 **)(param_1 + 0x48) = puVar2;
      if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/deque:2185: libc++ Hardening assertion !empty() failed: deque::pop_front called on an empty deque\n"
                  );
      }
      uVar4 = *(ulong *)(param_1 + 0x30);
      puVar3 = *(undefined8 **)(param_1 + 0x18);
      if (puVar3[uVar4 >> 9] + (uVar4 & 0x1ff) * 8 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      lVar5 = *(long *)(param_1 + 0x38) + -1;
      uVar4 = uVar4 + 1;
      *(ulong *)(param_1 + 0x30) = uVar4;
      *(long *)(param_1 + 0x38) = lVar5;
      if (0x3ff < uVar4) {
        operator_delete((void *)*puVar3);
        lVar5 = *(long *)(param_1 + 0x38);
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x18) + 8);
        uVar4 = *(long *)(param_1 + 0x30) - 0x200;
        *(undefined8 **)(param_1 + 0x18) = puVar3;
        *(ulong *)(param_1 + 0x30) = uVar4;
      }
    } while (lVar5 != 0);
  }
  return;
}


// ===== 00c769e8  FUN_00c769e8 =====

bool FUN_00c769e8(long param_1,void *param_2,ulong param_3,size_t *param_4)

{
  undefined8 *puVar1;
  size_t __n;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong *local_48;
  
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 0x30);
    puVar1 = (undefined8 *)((*(undefined8 **)(param_1 + 0x18))[uVar3 >> 9] + (uVar3 & 0x1ff) * 8);
    puVar5 = (ulong *)*puVar1;
    local_48 = puVar5;
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    *(ulong *)(param_1 + 0x30) = uVar3 + 1;
    *(long *)(param_1 + 0x38) = lVar4 + -1;
    if (0x3ff < uVar3 + 1) {
      operator_delete((void *)**(undefined8 **)(param_1 + 0x18));
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 8;
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -0x200;
    }
    __n = *puVar5;
    if (param_3 <= *puVar5) {
      __n = param_3;
    }
    memcpy(param_2,(void *)puVar5[2],__n);
    if (param_4 != (size_t *)0x0) {
      *param_4 = __n;
    }
    puVar1 = *(undefined8 **)(param_1 + 0x48);
    if (puVar1 < *(undefined8 **)(param_1 + 0x50)) {
      if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar2 = puVar1 + 1;
      *puVar1 = puVar5;
    }
    else {
      puVar2 = (undefined8 *)FUN_00c76cbc(param_1 + 0x40,&local_48);
    }
    *(undefined8 **)(param_1 + 0x48) = puVar2;
  }
  return lVar4 != 0;
}


// ===== 00c76b10  FUN_00c76b10 =====

bool FUN_00c76b10(long *param_1,void *param_2,void *param_3,undefined8 *param_4)

{
  void *pvVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = param_1[7];
  lVar10 = *param_1;
  if (lVar9 != lVar10) {
    if (param_1[8] == param_1[9]) {
      puVar8 = (undefined8 *)operator_new(0x18);
      pvVar5 = param_3;
      if (param_3 <= (void *)param_1[1]) {
        pvVar5 = (void *)param_1[1];
      }
      *puVar8 = param_3;
      puVar8[1] = pvVar5;
      if (pvVar5 != (void *)0x0) {
        pvVar5 = operator_new__((ulong)pvVar5);
      }
      puVar8[2] = pvVar5;
      *puVar8 = 0;
    }
    else {
      puVar3 = (undefined8 *)(param_1[9] + -8);
      if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar8 = (undefined8 *)*puVar3;
      param_1[9] = (long)puVar3;
      *puVar8 = 0;
    }
    if (param_3 != (void *)0x0) {
      pvVar5 = (void *)puVar8[1];
      if (pvVar5 < param_3) {
        pvVar5 = (void *)((long)pvVar5 + ((ulong)pvVar5 >> 1));
        pvVar1 = param_3;
        if (param_3 <= pvVar5) {
          pvVar1 = pvVar5;
        }
        pvVar4 = operator_new__((ulong)pvVar1);
        pvVar5 = (void *)puVar8[2];
        puVar8[2] = pvVar4;
        if (pvVar5 != (void *)0x0) {
          operator_delete__(pvVar5);
          pvVar5 = (void *)*puVar8;
        }
        puVar8[1] = pvVar1;
      }
      else {
        pvVar5 = (void *)0x0;
      }
      memcpy((void *)(puVar8[2] + (long)pvVar5),param_2,(size_t)param_3);
      *puVar8 = param_3;
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = param_3;
    }
    lVar6 = param_1[3];
    lVar7 = param_1[4];
    lVar2 = 0;
    if (lVar7 != lVar6) {
      lVar2 = (lVar7 - lVar6) * 0x40 + -1;
    }
    if (lVar2 == param_1[7] + param_1[6]) {
      FUN_00c76dc8(param_1 + 2);
      lVar6 = param_1[3];
      lVar7 = param_1[4];
    }
    if ((lVar6 == lVar7) ||
       (puVar3 = (undefined8 *)
                 (*(long *)(lVar6 + ((ulong)(param_1[7] + param_1[6]) >> 9) * 8) +
                 (param_1[7] + param_1[6] & 0x1ffU) * 8), puVar3 == (undefined8 *)0x0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *puVar3 = puVar8;
    param_1[7] = param_1[7] + 1;
  }
  return lVar9 != lVar10;
}


// ===== 00c76cbc  FUN_00c76cbc =====

undefined8 * FUN_00c76cbc(long *param_1,undefined8 *param_2)

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
    FUN_00c76db0();
LAB_00c76dac:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00c76dac;
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


// ===== 00c76db0  FUN_00c76db0 =====

void FUN_00c76db0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00c76dc8  FUN_00c76dc8 =====

void FUN_00c76dc8(long *param_1)

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
  
  if ((ulong)param_1[4] < 0x200) {
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
      FUN_00c77238(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_00c7775c(&local_50,lVar5);
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
      FUN_00c77238(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0x1000);
    FUN_00c774c0(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x200;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_00c76fb0(param_1,&local_50);
  return;
}


// ===== 00c76fb0  FUN_00c76fb0 =====

void FUN_00c76fb0(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_00c77220;
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
LAB_00c77220:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c77238  FUN_00c77238 =====

void FUN_00c77238(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_00c774a8;
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
LAB_00c774a8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c774c0  FUN_00c774c0 =====

void FUN_00c774c0(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_00c77744;
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
LAB_00c77744:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c7775c  FUN_00c7775c =====

void FUN_00c7775c(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_00c779e0;
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
LAB_00c779e0:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00c779f8  FUN_00c779f8 =====

void FUN_00c779f8(undefined4 *param_1,long param_2)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  (**(code **)(param_2 + 0x10))(1,param_2,param_1 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x18);
  *(code **)(param_2 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(code **)(param_1 + 0x18) = FUN_00433984;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  param_1[0x22] = 0;
  return;
}


// ===== 00c77a74  FUN_00c77a74 =====

void FUN_00c77a74(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  
  pvVar1 = *(void **)(param_1 + 0x70);
  if (pvVar1 == (void *)0x0) {
LAB_00c77b1c:
    (**(code **)(param_1 + 0x60))(0,param_1 + 0x50,param_1 + 0x50);
    (**(code **)(param_1 + 0x40))(0,param_1 + 0x30,param_1 + 0x30);
    pvVar1 = *(void **)(param_1 + 0x10);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    pvVar3 = pvVar1;
    pvVar2 = *(void **)(param_1 + 0x18);
    if (pvVar1 != *(void **)(param_1 + 0x18)) {
      do {
        pvVar3 = (void *)((long)pvVar2 + -0x10);
        if (pvVar3 == (void *)0x0) goto LAB_00c77af8;
        pvVar6 = *(void **)((long)pvVar2 + -8);
        *(undefined8 *)((long)pvVar2 + -8) = 0;
        if (pvVar6 != (void *)0x0) {
          pvVar2 = *(void **)((long)pvVar6 + 0x10);
          *(undefined8 *)((long)pvVar6 + 0x10) = 0;
          if (pvVar2 != (void *)0x0) {
            operator_delete__(pvVar2);
          }
          operator_delete(pvVar6);
        }
        pvVar2 = pvVar3;
      } while (pvVar3 != pvVar1);
      pvVar3 = *(void **)(param_1 + 0x10);
    }
    *(void **)(param_1 + 0x18) = pvVar1;
    operator_delete(pvVar3);
    return;
  }
  pvVar3 = *(void **)(param_1 + 0x78);
  uVar5 = (ulong)((long)pvVar3 + (-4 - ((long)pvVar3 << 0x3e))) >> 2;
  uVar4 = (ulong)(((long)pvVar1 - (long)pvVar3 << 0x3e) - ((long)pvVar1 - (long)pvVar3)) >> 2;
  if (uVar5 <= uVar4) {
    uVar4 = uVar5;
  }
  if ((1 < uVar4) && ((((int)pvVar1 - (int)pvVar3 | -(int)pvVar3) & 3U) == 0)) {
    uVar4 = uVar4 & 0x3ffffffffffffffe;
    pvVar3 = (void *)((long)pvVar3 + uVar4 * -4);
    do {
      uVar4 = uVar4 - 2;
    } while (uVar4 != 0);
  }
  do {
    if (pvVar3 == pvVar1) {
      *(void **)(param_1 + 0x78) = pvVar1;
      operator_delete(pvVar1);
      goto LAB_00c77b1c;
    }
    pvVar3 = (void *)((long)pvVar3 + -4);
  } while (pvVar3 != (void *)0x0);
LAB_00c77af8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c77bd8  FUN_00c77bd8 =====

void FUN_00c77bd8(int *param_1,uint param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  
  if ((param_2 & 1) != (param_3 & 1)) {
    lVar1 = *(long *)(param_1 + 4);
    lVar3 = *(long *)(param_1 + 6);
    while (lVar1 != lVar3) {
      lVar2 = lVar3 + -0x10;
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar5 = *(void **)(lVar3 + -8);
      *(undefined8 *)(lVar3 + -8) = 0;
      lVar3 = lVar2;
      if (pvVar5 != (void *)0x0) {
        pvVar4 = *(void **)((long)pvVar5 + 0x10);
        *(undefined8 *)((long)pvVar5 + 0x10) = 0;
        if (pvVar4 != (void *)0x0) {
          operator_delete__(pvVar4);
        }
        operator_delete(pvVar5);
      }
    }
    *(long *)(param_1 + 6) = lVar1;
    param_1[2] = 0;
  }
  if (*param_1 != 4) {
    *param_1 = 2;
  }
  return;
}


// ===== 00c77c90  FUN_00c77c90 =====

void FUN_00c77c90(uint *param_1)

{
  ulong uVar1;
  
  if ((*param_1 < 3) && (uVar1 = FUN_00417e08(), (uVar1 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f4e98,"../../p2p/dtls/dtls_stun_piggyback_controller.cc",0x209,
                 "DTLS-STUN piggybacking DTLS failed during negotiation.");
  }
  *param_1 = 4;
  return;
}


// ===== 00c77cf0  FUN_00c77cf0 =====

void FUN_00c77cf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  void *pvVar6;
  
  uVar4 = FUN_00c6eb88(param_2,param_3);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    lVar3 = *(long *)(param_1 + 0x18);
    while (lVar1 != lVar3) {
      lVar2 = lVar3 + -0x10;
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar6 = *(void **)(lVar3 + -8);
      *(undefined8 *)(lVar3 + -8) = 0;
      lVar3 = lVar2;
      if (pvVar6 != (void *)0x0) {
        pvVar5 = *(void **)((long)pvVar6 + 0x10);
        *(undefined8 *)((long)pvVar6 + 0x10) = 0;
        if (pvVar5 != (void *)0x0) {
          operator_delete__(pvVar5);
        }
        operator_delete(pvVar6);
      }
    }
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  FUN_00c6ed38(param_1 + 8,param_2,param_3);
  return;
}


// ===== 00c77dd8  FUN_00c77dd8 =====

void FUN_00c77dd8(long param_1)

{
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


// ===== 00c77de4  FUN_00c77de4 =====

void FUN_00c77de4(undefined1 (*param_1) [16],int *param_2)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  
  if (((*param_2 == 4) || (*param_2 == 3)) || (*(long *)(param_2 + 4) == *(long *)(param_2 + 6))) {
    uVar1 = 0;
    (*param_1)[0] = 0;
  }
  else {
    auVar2 = FUN_00c6f294(param_2 + 2);
    if (auVar2._8_8_ < 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
                );
    }
    if ((auVar2._0_8_ == 0) && (auVar2._8_8_ != 0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                );
    }
    uVar1 = 1;
    *param_1 = auVar2;
  }
  param_1[1][0] = uVar1;
  return;
}


// ===== 00c77e7c  FUN_00c77e7c =====

void FUN_00c77e7c(undefined8 *param_1,int *param_2)

{
  void *__src;
  long lVar1;
  ulong __n;
  void *__dest;
  undefined1 uVar2;
  
  if (*param_2 - 3U < 2) {
    uVar2 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    __src = *(void **)(param_2 + 0x1c);
    lVar1 = *(long *)(param_2 + 0x1e);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    __n = lVar1 - (long)__src;
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
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 3) = uVar2;
  return;
}


// ===== 00c77f0c  FUN_00c77f0c =====

void FUN_00c77f0c(long param_1)

{
  FUN_00c6f2fc(param_1 + 8);
  return;
}


// ===== 00c77f18  FUN_00c77f18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c77f18(int *param_1,ulong *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  void *pvVar10;
  int *piVar11;
  undefined1 *local_b0;
  undefined1 **ppuStack_a8;
  undefined1 *local_a0;
  ulong local_90;
  ulong uStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  ulong *local_70;
  int *piStack_68;
  
  iVar2 = *param_1;
  if (iVar2 - 3U < 2) {
    return;
  }
  if (iVar2 == 2) {
    if (((param_2[2] & 1) == 0) && ((*(byte *)(param_3 + 3) & 1) == 0)) {
      uVar5 = FUN_00417e08();
      if ((uVar5 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../p2p/dtls/dtls_stun_piggyback_controller.cc",0x539,
                     "DTLS-STUN piggybacking complete.");
      }
      lVar4 = *(long *)(param_1 + 4);
      *param_1 = 3;
      lVar7 = *(long *)(param_1 + 6);
      while (lVar4 != lVar7) {
        lVar8 = lVar7 + -0x10;
        if (lVar8 == 0) goto LAB_00c781f8;
        pvVar10 = *(void **)(lVar7 + -8);
        *(undefined8 *)(lVar7 + -8) = 0;
        lVar7 = lVar8;
        if (pvVar10 != (void *)0x0) {
          pvVar6 = *(void **)((long)pvVar10 + 0x10);
          *(undefined8 *)((long)pvVar10 + 0x10) = 0;
          if (pvVar6 != (void *)0x0) {
            operator_delete__(pvVar6);
          }
          operator_delete(pvVar10);
        }
      }
      lVar7 = *(long *)(param_1 + 0x1c);
      lVar8 = *(long *)(param_1 + 0x1e);
      *(long *)(param_1 + 6) = lVar4;
      param_1[2] = 0;
      uVar9 = (lVar8 - (lVar8 << 0x3e)) - 4U >> 2;
      uVar5 = (ulong)((lVar7 - lVar8 << 0x3e) - (lVar7 - lVar8)) >> 2;
      if (uVar9 <= uVar5) {
        uVar5 = uVar9;
      }
      if ((1 < uVar5) && ((((int)lVar7 - (int)lVar8 | -(int)lVar8) & 3U) == 0)) {
        uVar5 = uVar5 & 0x3ffffffffffffffe;
        lVar8 = lVar8 + uVar5 * -4;
        do {
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
      }
      do {
        if (lVar8 == lVar7) goto LAB_00c78488;
        lVar8 = lVar8 + -4;
      } while (lVar8 != 0);
      goto LAB_00c781f8;
    }
  }
  else if (iVar2 == 0) {
    if (((param_2[2] & 1) == 0) && ((*(byte *)(param_3 + 3) & 1) == 0)) {
      uVar5 = FUN_00417e08();
      if ((uVar5 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../p2p/dtls/dtls_stun_piggyback_controller.cc",0x4f9,
                     "DTLS-STUN piggybacking not supported by peer.");
      }
      *param_1 = 4;
      return;
    }
    *param_1 = 1;
  }
  puVar3 = PTR_DAT_00d525c0;
  if (((char)param_3[3] == '\x01') && (*(long *)(param_1 + 4) != *(long *)(param_1 + 6))) {
    piVar11 = (int *)*param_3;
    piVar1 = (int *)param_3[1];
    uStack_88 = _UNK_001f2d08;
    local_90 = _DAT_001f2d00;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    if (piVar11 != piVar1) {
      do {
        ppuStack_a8 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
        local_b0 = &DAT_aaaaaaaaaaaaaaaa;
        local_a0 = &DAT_aaaaaaaaaaaaaaaa;
        if (local_90 < 2) {
          if (uStack_88 >> 0x11 == 0) {
            uStack_88 = 0x20000;
            ppuStack_a8 = &local_80;
            local_b0 = puVar3;
          }
          else {
            if ((int)local_80 == *piVar11) goto LAB_00c77fe4;
            local_70 = &local_90;
            piStack_68 = piVar11;
            lVar4 = FUN_0070fb14(&local_90,&DAT_00d4e4b8,&local_70,FUN_00c78b4c,0);
            ppuStack_a8 = (undefined1 **)(puStack_78 + lVar4 * 4);
            local_b0 = local_80 + lVar4;
          }
          local_a0 = (undefined1 *)CONCAT71(local_a0._1_7_,1);
LAB_00c78088:
          if (ppuStack_a8 == (undefined1 **)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *(int *)ppuStack_a8 = *piVar11;
        }
        else {
          FUN_00c788a0(&local_b0,&local_90,piVar11);
          if (((ulong)local_a0 & 1) != 0) goto LAB_00c78088;
        }
LAB_00c77fe4:
        piVar11 = piVar11 + 1;
      } while (piVar11 != piVar1);
    }
    uVar5 = FUN_0044075c();
    if ((uVar5 & 1) == 0) {
      FUN_00c784b8(&local_b0,&local_90,&DAT_001ea264,1);
      FUN_00623bb0(&DAT_001f4e90,"../../p2p/dtls/dtls_stun_piggyback_controller.cc",0x5d0,
                   "DTLS-STUN piggybacking ACK: ",&local_b0);
      if ((long)local_a0 < 0) {
        operator_delete(local_b0);
      }
    }
    FUN_00c6ee34(param_1 + 2,&local_90);
    if (1 < local_90) {
      FUN_0070fd04(&local_90,local_90,local_80,4,4,uStack_88 >> 0x10 & 1);
    }
  }
  if ((param_2[2] & 1) != 0) {
LAB_00c7812c:
    if (param_2[1] == 0) {
      return;
    }
    uVar5 = FUN_00c6eb88(*param_2);
    if ((uVar5 & 1) == 0) {
      uVar5 = FUN_004022fc();
      if ((uVar5 & 1) != 0) {
        return;
      }
      FUN_00623bb0(&DAT_001f4e98,"../../p2p/dtls/dtls_stun_piggyback_controller.cc",0x6ca,
                   "Dropping non-DTLS data.");
      return;
    }
    param_1[0x22] = param_1[0x22] + 1;
    if ((param_2[2] & 1) != 0) {
      uVar5 = 0;
      if (param_2[1] != 0) {
        uVar5 = *param_2;
      }
      FUN_00c786b8(param_1,uVar5);
      if ((param_2[2] & 1) != 0) {
        uStack_88 = param_2[1];
        local_90 = 0;
        if (uStack_88 != 0) {
          local_90 = *param_2;
        }
        (**(code **)(param_1 + 0x12))(param_1 + 0xc,&local_90);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
              );
  }
  lVar4 = *(long *)(param_1 + 0x1c);
  lVar7 = *(long *)(param_1 + 0x1e);
  uVar9 = (lVar7 - (lVar7 << 0x3e)) - 4U >> 2;
  uVar5 = (ulong)((lVar4 - lVar7 << 0x3e) - (lVar4 - lVar7)) >> 2;
  if (uVar9 <= uVar5) {
    uVar5 = uVar9;
  }
  if ((1 < uVar5) && ((((int)lVar4 - (int)lVar7 | -(int)lVar7) & 3U) == 0)) {
    uVar5 = uVar5 & 0x3ffffffffffffffe;
    lVar7 = lVar7 + uVar5 * -4;
    do {
      uVar5 = uVar5 - 2;
    } while (uVar5 != 0);
  }
  do {
    if (lVar7 == lVar4) {
      *(long *)(param_1 + 0x1e) = lVar4;
      if ((param_2[2] & 1) != 0) goto LAB_00c7812c;
      if ((char)param_3[3] != '\x01') {
        return;
      }
      if (*param_1 != 2) {
        return;
      }
      uVar5 = FUN_00417e08();
      if ((uVar5 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../p2p/dtls/dtls_stun_piggyback_controller.cc",0x669,
                     "DTLS-STUN piggybacking complete.");
      }
      lVar4 = *(long *)(param_1 + 4);
      *param_1 = 3;
      lVar7 = *(long *)(param_1 + 6);
      goto joined_r0x00c783d4;
    }
    lVar7 = lVar7 + -4;
  } while (lVar7 != 0);
  goto LAB_00c781f8;
joined_r0x00c783d4:
  if (lVar4 != lVar7) {
    lVar8 = lVar7 + -0x10;
    if (lVar8 == 0) goto LAB_00c781f8;
    pvVar10 = *(void **)(lVar7 + -8);
    *(undefined8 *)(lVar7 + -8) = 0;
    lVar7 = lVar8;
    if (pvVar10 != (void *)0x0) {
      pvVar6 = *(void **)((long)pvVar10 + 0x10);
      *(undefined8 *)((long)pvVar10 + 0x10) = 0;
      if (pvVar6 != (void *)0x0) {
        operator_delete__(pvVar6);
      }
      operator_delete(pvVar10);
    }
    goto joined_r0x00c783d4;
  }
  lVar7 = *(long *)(param_1 + 0x1c);
  lVar8 = *(long *)(param_1 + 0x1e);
  *(long *)(param_1 + 6) = lVar4;
  param_1[2] = 0;
  uVar9 = (lVar8 - (lVar8 << 0x3e)) - 4U >> 2;
  uVar5 = (ulong)((lVar7 - lVar8 << 0x3e) - (lVar7 - lVar8)) >> 2;
  if (uVar9 <= uVar5) {
    uVar5 = uVar9;
  }
  if ((1 < uVar5) && ((((int)lVar7 - (int)lVar8 | -(int)lVar8) & 3U) == 0)) {
    uVar5 = uVar5 & 0x3ffffffffffffffe;
    lVar8 = lVar8 + uVar5 * -4;
    do {
      uVar5 = uVar5 - 2;
    } while (uVar5 != 0);
  }
  do {
    if (lVar8 == lVar7) {
LAB_00c78488:
      *(long *)(param_1 + 0x1e) = lVar7;
      return;
    }
    lVar8 = lVar8 + -4;
  } while (lVar8 != 0);
LAB_00c781f8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c784b8  FUN_00c784b8 =====

void FUN_00c784b8(undefined8 *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  undefined *puVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  ulong *unaff_x22;
  char *pcVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 ***local_68;
  ulong uStack_60;
  ulong local_58;
  
  puVar3 = PTR_DAT_00d525c8;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (param_2[1] < 0x20000) {
    pcVar7 = (char *)0x0;
  }
  else {
    unaff_x22 = param_2 + 2;
    if (*param_2 < 2) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)param_2[2];
      unaff_x22 = (ulong *)param_2[3];
      iVar5 = (int)*pcVar7;
      if (iVar5 == -2 || iVar5 + 2 < 0 != SCARRY4(iVar5,2)) {
        do {
          pcVar7 = pcVar7 + 1;
          unaff_x22 = (ulong *)((long)unaff_x22 + 4);
        } while (*pcVar7 + 1 < 0 != SCARRY4((int)*pcVar7,1));
      }
    }
  }
  iVar5 = 0;
  while( true ) {
    if (((pcVar7 != (char *)0x0) && (pcVar7 != puVar3)) && (*pcVar7 < '\0')) goto LAB_00c786ac;
    if (pcVar7 == puVar3) {
      FUN_00622058(3,"raw_hash_set.h",0x546,"Invalid iterator comparison. %s",
                   "Comparing default-constructed hashtable iterator with a non-default-constructed hashtable iterator."
                  );
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0xc7866c);
      (*pcVar4)();
    }
    if (pcVar7 == (char *)0x0) {
      param_1[1] = uStack_78;
      *param_1 = local_80;
      param_1[2] = local_70;
      return;
    }
    if (*pcVar7 < '\0') break;
    if (0 < iVar5) {
      FUN_00547cac(&local_80,param_3,param_4);
    }
    local_68 = (undefined8 ****)0x0;
    uStack_60 = 0;
    local_58 = 0;
    FUN_005fa03c(&local_68,0x16,(int)*unaff_x22);
    uVar1 = uStack_60;
    ppppuVar2 = (undefined8 ****)local_68;
    if (-1 < (long)local_58) {
      uVar1 = local_58 >> 0x38;
      ppppuVar2 = &local_68;
    }
    FUN_00547cac(&local_80,ppppuVar2,uVar1);
    if ((long)local_58 < 0) {
      operator_delete(local_68);
    }
    if (*pcVar7 < '\0') {
      pcVar7 = "operator++";
LAB_00c786a0:
      FUN_00622058(3,"raw_hash_set.h",0x4fd,
                   "%s called on invalid iterator. The element might have been erased or the table might have rehashed. Consider running with --config=asan to diagnose rehashing issues."
                   ,pcVar7);
LAB_00c786ac:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0xc786b0);
      (*pcVar4)();
    }
    pcVar7 = pcVar7 + 1;
    unaff_x22 = (ulong *)((long)unaff_x22 + 4);
    uVar6 = (uint)*pcVar7;
    if (uVar6 == 0xfffffffe || (int)(uVar6 + 2) < 0 != SCARRY4(uVar6,2)) {
      do {
        pcVar7 = pcVar7 + 1;
        unaff_x22 = (ulong *)((long)unaff_x22 + 4);
        uVar6 = (uint)*pcVar7;
      } while ((int)(uVar6 + 1) < 0 != SCARRY4(uVar6,1));
    }
    iVar5 = iVar5 + 1;
    if ((uVar6 & 0xff) == 0xff) {
      pcVar7 = (char *)0x0;
    }
  }
  pcVar7 = "operator*()";
  goto LAB_00c786a0;
}


// ===== 00c786b8  FUN_00c786b8 =====

void FUN_00c786b8(int *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  wchar_t __c;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  wchar_t *pwVar12;
  wchar_t local_64;
  
  if (1 < *param_1 - 3U) {
    __c = FUN_00c6ebf0(param_2,param_3);
    piVar9 = param_1 + 0x1c;
    pwVar4 = *(wchar_t **)(param_1 + 0x1e);
    local_64 = __c;
    pwVar2 = wmemchr(*(wchar_t **)piVar9,__c,(long)pwVar4 - (long)*(wchar_t **)piVar9 >> 2);
    pwVar3 = *(wchar_t **)(param_1 + 0x1e);
    if (pwVar2 != (wchar_t *)0x0) {
      pwVar4 = pwVar2;
    }
    if (pwVar4 == pwVar3) {
      pwVar2 = *(wchar_t **)piVar9;
      if (0xc < (ulong)((long)pwVar4 - (long)pwVar2)) {
        lVar10 = 0;
        lVar1 = (((long)pwVar4 << 0x3e) - (long)pwVar4) + 4;
        lVar11 = lVar1;
        pwVar12 = pwVar4;
        do {
          if (pwVar2 == pwVar3) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
                      );
          }
          memmove(pwVar2,pwVar2 + 1,(long)pwVar12 - (long)(pwVar2 + 1));
          pwVar2 = *(wchar_t **)(param_1 + 0x1e);
          lVar5 = ((long)pwVar2 << 0x3e) - (long)pwVar2;
          uVar8 = (ulong)((lVar1 + lVar10 * 4) - lVar5) >> 2;
          uVar7 = -lVar5 - 4U >> 2;
          if (uVar7 <= uVar8) {
            uVar8 = uVar7;
          }
          if ((1 < uVar8) && ((((int)pwVar4 - (int)pwVar2 | -(int)pwVar2) & 3U) == 0)) {
            uVar6 = (ulong)(lVar11 - lVar5) >> 2;
            pwVar2 = pwVar2 + -(uVar8 & 0x3ffffffffffffffe);
            if (uVar7 <= uVar6) {
              uVar6 = uVar7;
            }
            uVar6 = uVar6 & 0x3ffffffffffffffe;
            do {
              uVar6 = uVar6 - 2;
            } while (uVar6 != 0);
          }
          pwVar3 = pwVar12 + -1;
          while (pwVar2 != pwVar3) {
            pwVar2 = pwVar2 + -1;
            if (pwVar2 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
          }
          pwVar2 = *(wchar_t **)(param_1 + 0x1c);
          lVar10 = lVar10 + 1;
          lVar11 = lVar11 + 4;
          *(wchar_t **)(param_1 + 0x1e) = pwVar3;
          pwVar12 = pwVar3;
        } while (0xc < (ulong)((long)pwVar3 - (long)pwVar2));
      }
      if (pwVar3 < *(wchar_t **)(param_1 + 0x20)) {
        if (pwVar3 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        pwVar4 = pwVar3 + 1;
        *pwVar3 = __c;
      }
      else {
        pwVar4 = (wchar_t *)FUN_00852528(piVar9,&local_64);
      }
      *(wchar_t **)(param_1 + 0x1e) = pwVar4;
    }
  }
  return;
}


// ===== 00c788a0  FUN_00c788a0 =====

void FUN_00c788a0(long *param_1,ulong *param_2,uint *param_3)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 uVar8;
  long lVar9;
  ulong uVar10;
  
  uVar4 = param_2[2];
  Hint_Prefetch(uVar4,0,2,0);
  lVar3 = 0;
  uVar6 = (long)(short)param_2[1] ^ (ulong)*param_3;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar6;
  uVar6 = SUB168(auVar1 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^ uVar6 * 0x79d5f9e0de1e8cf5;
  bVar5 = (byte)(uVar6 >> 0x39);
  uVar7 = param_2[3];
  while( true ) {
    uVar6 = uVar6 & *param_2;
    Hint_Prefetch(uVar7 + uVar6 * 4,0,0,0);
    for (uVar10 = NEON_cmeq(*(undefined8 *)(uVar4 + uVar6),
                            CONCAT17(bVar5,CONCAT16(bVar5,CONCAT15(bVar5,CONCAT14(bVar5,CONCAT13(
                                                  bVar5,CONCAT12(bVar5,CONCAT11(bVar5,bVar5))))))),1
                           ); uVar10 != 0;
        uVar10 = (uVar10 & 0x8080808080808080) - 1 & uVar10 & 0x8080808080808080) {
      uVar2 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar2 = uVar6 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & *param_2;
      if (*(uint *)(uVar7 + uVar2 * 4) == *param_3) {
        uVar8 = 0;
        goto LAB_00c78984;
      }
    }
    lVar9 = NEON_cmeq(*(undefined8 *)(uVar4 + uVar6),0x8080808080808080,1);
    if (lVar9 != 0) break;
    lVar3 = lVar3 + 8;
    uVar6 = lVar3 + uVar6;
  }
  uVar2 = FUN_0071028c(param_2,&DAT_00d4e4b8);
  uVar4 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = 1;
LAB_00c78984:
  *param_1 = uVar4 + uVar2;
  param_1[1] = uVar7 + uVar2 * 4;
  *(undefined1 *)(param_1 + 2) = uVar8;
  return;
}


// ===== 00c789a4  FUN_00c789a4 =====

ulong FUN_00c789a4(undefined8 param_1,uint *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3 ^ *param_2;
  return SUB168(auVar1 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^ (param_3 ^ *param_2) * 0x79d5f9e0de1e8cf5;
}


// ===== 00c789d0  FUN_00c789d0 =====

void FUN_00c789d0(undefined8 param_1,void *param_2,void *param_3,long param_4)

{
  memcpy(param_2,param_3,param_4 << 2);
  return;
}


// ===== 00c789e8  FUN_00c789e8 =====

void FUN_00c789e8(ulong *param_1,long param_2,long param_3,undefined8 param_4,code *param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar9 = *param_1;
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar10 = uVar9 >> 1;
  uVar8 = 0;
  do {
    uVar5 = *(ulong *)(param_2 + uVar8);
    *(undefined8 *)(uVar1 + uVar8) = 0x8080808080808080;
    uVar5 = uVar5 & 0x8080808080808080;
    *(undefined8 *)((long)(uVar1 + uVar8) + uVar10 + 1) = 0x8080808080808080;
    if (uVar5 != 0x8080808080808080) {
      uVar5 = uVar5 ^ 0x8080808080808080;
      do {
        uVar4 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar8 | (ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3;
        uVar6 = (long)(short)param_1[1] ^ (ulong)*(uint *)(param_3 + uVar4 * 4);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar6;
        uVar6 = SUB168(auVar3 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^ uVar6 * 0x79d5f9e0de1e8cf5;
        if ((uVar10 & 0x7ffffffffffffff8 & uVar4 - uVar6) == 0) {
          uVar7 = (uVar4 - uVar6 & 7) + uVar6 & uVar9;
LAB_00c78ab8:
          *(byte *)(uVar1 + uVar7) = (byte)(uVar6 >> 0x39);
          *(undefined4 *)(uVar2 + uVar7 * 4) = *(undefined4 *)(param_3 + uVar4 * 4);
        }
        else {
          if ((uVar10 & uVar6) < uVar4) {
            uVar7 = NEON_cmlt(*(undefined8 *)(uVar1 + (uVar9 & uVar6)),0,1);
            if (uVar7 != 0) {
              uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
              uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
              uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
              uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
              uVar7 = (uVar9 & uVar6) + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3);
              goto LAB_00c78ab8;
            }
          }
          (*param_5)(param_4);
        }
        uVar5 = uVar5 - 1 & uVar5;
      } while (uVar5 != 0);
    }
    uVar8 = uVar8 + 8;
    if (uVar10 <= uVar8) {
      return;
    }
  } while( true );
}


// ===== 00c78b4c  FUN_00c78b4c =====

ulong FUN_00c78b4c(long param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  
  param_2 = param_2 ^ **(uint **)(param_1 + 8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return SUB168(auVar1 * ZEXT816(0x79d5f9e0de1e8cf5),8) ^ param_2 * 0x79d5f9e0de1e8cf5;
}


// ===== 00c78b7c  FUN_00c78b7c =====

void FUN_00c78b7c(undefined8 *param_1)

{
  FUN_00bc82f0();
  *param_1 = &PTR_FUN_00d4e510;
  FUN_007b5d10(param_1 + 0x1e);
  FUN_007b5d10(param_1 + 0x22);
  return;
}


// ===== 00c78bbc  FUN_00c78bbc =====

void FUN_00c78bbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d4e510;
  FUN_007b5d24(param_1 + 0x22);
  FUN_007b5d24(param_1 + 0x1e);
  FUN_00bc8354(param_1);
  return;
}


// ===== 00c78c04  FUN_00c78c04 =====

void FUN_00c78c04(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc78c0c);
  (*pcVar1)();
}


// ===== 00c78c0c  FUN_00c78c0c =====

undefined8 FUN_00c78c0c(void)

{
  return 0;
}


// ===== 00c78c18  FUN_00c78c18 =====

void FUN_00c78c18(undefined8 *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 2) = param_2;
  *param_1 = &PTR_FUN_00d4e5f8;
  param_1[1] = 0;
  return;
}


// ===== 00c78c30  FUN_00c78c30 =====

void FUN_00c78c30(void)

{
  return;
}


// ===== 00c78c38  FUN_00c78c38 =====

void FUN_00c78c38(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00c78c44  FUN_00c78c44 =====

undefined8 FUN_00c78c44(void)

{
  return 10;
}


// ===== 00c78c50  FUN_00c78c50 =====

undefined8 FUN_00c78c50(void)

{
  return 0;
}


// ===== 00c78c5c  FUN_00c78c5c =====

void FUN_00c78c5c(undefined8 *param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 2) = param_2;
  *param_1 = &PTR_FUN_00d4e630;
  param_1[1] = 0;
  return;
}


// ===== 00c78c74  FUN_00c78c74 =====

void FUN_00c78c74(void)

{
  return;
}


// ===== 00c78c7c  FUN_00c78c7c =====

void FUN_00c78c7c(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00c78c88  FUN_00c78c88 =====

undefined8 FUN_00c78c88(void)

{
  return 0xb;
}


// ===== 00c78c94  FUN_00c78c94 =====

undefined8 FUN_00c78c94(void)

{
  return 0;
}


// ===== 00c78ca0  FUN_00c78ca0 =====

/* WARNING: Removing unreachable block (ram,0x00c7908c) */

void FUN_00c78ca0(undefined8 param_1,long param_2,ulong param_3,long *param_4,long *param_5,
                 long *param_6)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  void *local_128;
  undefined1 uStack_119;
  undefined8 local_118;
  long *local_110;
  long *local_100;
  long *plStack_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  int *local_a0;
  int *piStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  
  local_58 = (undefined8 *)0x0;
  local_50 = (undefined8 *)0x0;
  local_48 = (undefined8 *)0x0;
  if ((param_3 & 1) == 0) {
    if (*param_6 != 0) {
      local_100 = &local_118;
      local_118 = (long *)0xaaaaaa00aaaaaa00;
      plStack_f8 = param_6;
      (**(code **)(**(long **)(param_2 + 0x50) + 0x60))
                (*(long **)(param_2 + 0x50),&local_100,FUN_00c83a18,&uStack_119);
      if (local_118._4_1_ == '\x01') {
        FUN_00c7922c(&local_100,*param_4);
        plVar2 = plStack_f8;
        puVar1 = local_50;
        for (plVar5 = local_100; local_50 = puVar1, plVar5 != plVar2; plVar5 = plVar5 + 1) {
          lVar4 = *plVar5;
          if ((*(byte *)(lVar4 + 0x2c) & 1) == 0) goto LAB_00c790d0;
          if (((ulong)local_118 & 0x100000000) == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                      );
          }
          if (*(int *)(lVar4 + 0x28) == (int)local_118) {
            if (puVar1 < local_48) {
              if (puVar1 == (undefined8 *)0x0) {
LAB_00c79110:
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                          );
              }
              if (*(char *)(lVar4 + 0x1f) < '\0') {
                FUN_005478d8(puVar1,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
                local_50 = puVar1 + 3;
              }
              else {
                uVar10 = *(undefined8 *)(lVar4 + 0x10);
                uVar9 = *(undefined8 *)(lVar4 + 8);
                local_50 = puVar1 + 3;
                puVar1[2] = *(undefined8 *)(lVar4 + 0x18);
                puVar1[1] = uVar10;
                *puVar1 = uVar9;
              }
            }
            else {
              local_50 = (undefined8 *)FUN_009d56fc(&local_58,lVar4 + 8);
            }
          }
          puVar1 = local_50;
        }
        if (local_100 != (long *)0x0) {
          uVar8 = (ulong)((long)plStack_f8 + (-8 - ((long)plStack_f8 << 0x3d))) >> 3;
          uVar7 = (ulong)(((long)local_100 - (long)plStack_f8 << 0x3d) -
                         ((long)local_100 - (long)plStack_f8)) >> 3;
          if (uVar8 <= uVar7) {
            uVar7 = uVar8;
          }
          plVar5 = plStack_f8;
          if ((1 < uVar7) && ((((int)local_100 - (int)plStack_f8 | -(int)plStack_f8) & 7U) == 0)) {
            uVar7 = uVar7 & 0x1ffffffffffffffe;
            plVar5 = plStack_f8 + -uVar7;
            do {
              uVar7 = uVar7 - 2;
            } while (uVar7 != 0);
          }
          do {
            if (plVar5 == local_100) {
              plStack_f8 = local_100;
              operator_delete(local_100);
              goto LAB_00c78fd8;
            }
            plVar5 = plVar5 + -1;
          } while (plVar5 != (long *)0x0);
          goto LAB_00c78fa8;
        }
      }
    }
  }
  else {
    param_5 = (long *)*param_5;
    if (param_5 != (long *)0x0) {
      piStack_98 = (int *)&DAT_aaaaaaaaaaaaaaaa;
      local_a0 = (int *)&DAT_aaaaaaaaaaaaaaaa;
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
      plStack_f8 = (long *)&DAT_aaaaaaaaaaaaaaaa;
      local_100 = (long *)&DAT_aaaaaaaaaaaaaaaa;
      puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
      local_f0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
      local_e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
      local_c0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
      local_60 = &DAT_aaaaaaaaaaaaaaaa;
      (**(code **)(*param_5 + 0xf8))(&local_100,param_5,1,0);
      FUN_00c79124(&local_118,*param_4);
      plVar2 = local_110;
      puVar1 = local_50;
      for (plVar5 = local_118; local_50 = puVar1, plVar5 != plVar2; plVar5 = plVar5 + 1) {
        lVar4 = *plVar5;
        if ((*(byte *)(lVar4 + 0x2c) & 1) == 0) {
LAB_00c790d0:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                    );
        }
        if (local_a0 != piStack_98) {
          piVar6 = local_a0;
          do {
            if (((char)piVar6[1] == '\x01') && (*piVar6 == *(int *)(lVar4 + 0x28))) {
              if (piVar6 != piStack_98) {
                if (puVar1 < local_48) {
                  if (puVar1 == (undefined8 *)0x0) goto LAB_00c79110;
                  if (*(char *)(lVar4 + 0x1f) < '\0') {
                    FUN_005478d8(puVar1,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
                    local_50 = puVar1 + 3;
                  }
                  else {
                    uVar10 = *(undefined8 *)(lVar4 + 0x10);
                    uVar9 = *(undefined8 *)(lVar4 + 8);
                    local_50 = puVar1 + 3;
                    puVar1[2] = *(undefined8 *)(lVar4 + 0x18);
                    puVar1[1] = uVar10;
                    *puVar1 = uVar9;
                  }
                }
                else {
                  local_50 = (undefined8 *)FUN_009d56fc(&local_58,lVar4 + 8);
                }
              }
              break;
            }
            piVar6 = piVar6 + 0x4c;
          } while (piVar6 != piStack_98);
        }
        puVar1 = local_50;
      }
      if (local_118 != (long *)0x0) {
        uVar8 = (ulong)((long)local_110 + (-8 - ((long)local_110 << 0x3d))) >> 3;
        uVar7 = (ulong)(((long)local_118 - (long)local_110 << 0x3d) -
                       ((long)local_118 - (long)local_110)) >> 3;
        if (uVar8 <= uVar7) {
          uVar7 = uVar8;
        }
        if ((1 < uVar7) && ((((int)local_118 - (int)local_110 | -(int)local_110) & 7U) == 0)) {
          uVar7 = uVar7 & 0x1ffffffffffffffe;
          local_110 = local_110 + -uVar7;
          do {
            uVar7 = uVar7 - 2;
          } while (uVar7 != 0);
        }
        do {
          if (local_110 == local_118) {
            operator_delete(local_118);
            goto LAB_00c78fd0;
          }
          local_110 = local_110 + -1;
        } while (local_110 != (long *)0x0);
        goto LAB_00c78fa8;
      }
LAB_00c78fd0:
      FUN_0066981c(&local_100);
    }
  }
LAB_00c78fd8:
  if (local_58 == local_50) {
    FUN_00c87b10(param_1,*(undefined8 *)(*param_4 + 8));
  }
  else {
    FUN_00c87b68(&local_128);
    FUN_00c8a71c(param_1,&local_128,&local_58);
    if ((local_128 != (void *)0x0) && (iVar3 = FUN_00d0f7a0(0xffffffff,local_128), iVar3 == 1)) {
      local_100 = (long *)((long)local_128 + 0x10);
      FUN_00c83b6c(&local_100,*(undefined8 *)((long)local_128 + 0x18));
      operator_delete(local_128);
    }
  }
  puVar1 = local_50;
  if (local_58 == (undefined8 *)0x0) {
    return;
  }
  do {
    if (local_58 == puVar1) {
      local_50 = local_58;
      operator_delete(local_58);
      return;
    }
    puVar1 = puVar1 + -3;
  } while (puVar1 != (undefined8 *)0x0);
LAB_00c78fa8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c79124  FUN_00c79124 =====

void FUN_00c79124(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  char *pcVar5;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  long *local_18;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c87f68(&local_40);
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c8800c(&local_50,param_2);
  uVar2 = FUN_00c87af8(&local_40,&local_50);
  do {
    if ((uVar2 & 1) == 0) {
      FUN_00c87a50(&local_50);
      FUN_00c87a50(&local_40);
      return;
    }
    plVar4 = (long *)FUN_00c87ae8(&local_40);
    pcVar5 = (char *)(**(code **)(*plVar4 + 0x18))();
    if (pcVar5 == "outbound-rtp") {
      puVar1 = (undefined8 *)param_1[1];
      local_18 = plVar4;
      if (puVar1 < (undefined8 *)param_1[2]) {
        if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar3 = puVar1 + 1;
        *puVar1 = plVar4;
      }
      else {
        puVar3 = (undefined8 *)FUN_00c8390c(param_1,&local_18);
      }
      param_1[1] = puVar3;
    }
    FUN_00c87aac(&local_40);
    uVar2 = FUN_00c87af8(&local_40,&local_50);
  } while( true );
}


// ===== 00c7922c  FUN_00c7922c =====

void FUN_00c7922c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  char *pcVar5;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  long *local_18;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c87f68(&local_40);
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c8800c(&local_50,param_2);
  uVar2 = FUN_00c87af8(&local_40,&local_50);
  do {
    if ((uVar2 & 1) == 0) {
      FUN_00c87a50(&local_50);
      FUN_00c87a50(&local_40);
      return;
    }
    plVar4 = (long *)FUN_00c87ae8(&local_40);
    pcVar5 = (char *)(**(code **)(*plVar4 + 0x18))();
    if (pcVar5 == "inbound-rtp") {
      puVar1 = (undefined8 *)param_1[1];
      local_18 = plVar4;
      if (puVar1 < (undefined8 *)param_1[2]) {
        if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar3 = puVar1 + 1;
        *puVar1 = plVar4;
      }
      else {
        puVar3 = (undefined8 *)FUN_00c83a60(param_1,&local_18);
      }
      param_1[1] = puVar3;
    }
    FUN_00c87aac(&local_40);
    uVar2 = FUN_00c87af8(&local_40,&local_50);
  } while( true );
}


// ===== 00c79334  FUN_00c79334 =====

void FUN_00c79334(undefined8 *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_1d0 [125];
  undefined1 local_153;
  
  *param_1 = &PTR_FUN_00d4e668;
  param_1[1] = param_2;
  bVar1 = (**(code **)(param_2[1] + 0xc0))();
  *(byte *)(param_1 + 2) = bVar1 & 1;
  lVar3 = *param_3;
  param_1[3] = lVar3;
  if (lVar3 != 0) {
    FUN_00d0f740(1,lVar3 + 8);
  }
  lVar4 = param_3[4];
  lVar3 = param_3[3];
  lVar5 = param_3[1];
  param_1[5] = param_3[2];
  param_1[4] = lVar5;
  param_1[7] = lVar4;
  param_1[6] = lVar3;
  (**(code **)(*param_2 + 0x148))(auStack_1d0,param_2);
  FUN_00b1e590(auStack_1d0);
  *(undefined1 *)(param_1 + 8) = local_153;
  uVar2 = (**(code **)(*param_2 + 0x200))(param_2);
  param_1[9] = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x210))(param_2);
  param_1[10] = uVar2;
  uVar2 = (**(code **)(*param_2 + 0x208))(param_2);
  param_1[0x10] = 0;
  param_1[0xb] = uVar2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = param_1 + 0x10;
  param_1[0x13] = param_4;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  FUN_007ebd38(param_1 + 0x19,1,param_1[9]);
  FUN_007ebd38(param_1 + 0x1a,1,param_1[10]);
  FUN_007ebd38(param_1 + 0x1b,1,param_1[0xb]);
  param_1[0x1c] = 0;
  return;
}


// ===== 00c7947c  FUN_00c7947c =====

void FUN_00c7947c(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  undefined8 *local_38;
  
  pvVar5 = (void *)param_1[0x1c];
  param_1[0x1c] = 0;
  *param_1 = &PTR_FUN_00d4e668;
  if (pvVar5 != (void *)0x0) {
    pvVar6 = *(void **)((long)pvVar5 + 8);
    if ((pvVar6 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar6), iVar1 == 1)) {
      local_38 = (undefined8 *)((long)pvVar6 + 0x10);
      FUN_00c83b6c(&local_38,*(undefined8 *)((long)pvVar6 + 0x18));
      operator_delete(pvVar6);
    }
    operator_delete(pvVar5);
  }
  pvVar5 = (void *)param_1[0x1b];
  if ((pvVar5 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar5), iVar1 == 1)) {
    operator_delete(pvVar5);
  }
  pvVar5 = (void *)param_1[0x1a];
  if ((pvVar5 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar5), iVar1 == 1)) {
    operator_delete(pvVar5);
  }
  pvVar5 = (void *)param_1[0x19];
  if ((pvVar5 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar5), iVar1 == 1)) {
    operator_delete(pvVar5);
  }
  pvVar5 = (void *)param_1[0x16];
  if (pvVar5 == (void *)0x0) {
LAB_00c79600:
    pvVar5 = (void *)param_1[0x14];
    if ((pvVar5 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar5), iVar1 == 1)) {
      local_38 = (undefined8 *)((long)pvVar5 + 0x10);
      FUN_00c83b6c(&local_38,*(undefined8 *)((long)pvVar5 + 0x18));
      operator_delete(pvVar5);
    }
    local_38 = param_1 + 0xf;
    FUN_00c83c18(&local_38,param_1[0x10]);
    pvVar5 = (void *)param_1[0xc];
    if (pvVar5 != (void *)0x0) {
      pvVar6 = pvVar5;
      pvVar7 = (void *)param_1[0xd];
      if (pvVar5 != (void *)param_1[0xd]) {
        do {
          pvVar6 = (void *)((long)pvVar7 + -0x20);
          if (pvVar6 == (void *)0x0) goto LAB_00c795dc;
          if (*(long **)((long)pvVar7 + -8) != (long *)0x0) {
            (**(code **)(**(long **)((long)pvVar7 + -8) + 8))();
          }
          if (*(long **)((long)pvVar7 + -0x10) != (long *)0x0) {
            (**(code **)(**(long **)((long)pvVar7 + -0x10) + 8))();
          }
          if (*(long **)((long)pvVar7 + -0x18) != (long *)0x0) {
            (**(code **)(**(long **)((long)pvVar7 + -0x18) + 8))();
          }
          pvVar7 = pvVar6;
        } while (pvVar6 != pvVar5);
        pvVar6 = (void *)param_1[0xc];
      }
      param_1[0xd] = pvVar5;
      operator_delete(pvVar6);
    }
    plVar4 = (long *)param_1[3];
    if ((plVar4 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar4 + 1), iVar1 == 1)) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
    return;
  }
  pvVar6 = (void *)param_1[0x17];
  uVar3 = (ulong)((long)pvVar6 + (-4 - ((long)pvVar6 << 0x3e))) >> 2;
  uVar2 = (ulong)(((long)pvVar5 - (long)pvVar6 << 0x3e) - ((long)pvVar5 - (long)pvVar6)) >> 2;
  if (uVar3 <= uVar2) {
    uVar2 = uVar3;
  }
  if ((1 < uVar2) && ((((int)pvVar5 - (int)pvVar6 | -(int)pvVar6) & 3U) == 0)) {
    uVar2 = uVar2 & 0x3ffffffffffffffe;
    pvVar6 = (void *)((long)pvVar6 + uVar2 * -4);
    do {
      uVar2 = uVar2 - 2;
    } while (uVar2 != 0);
  }
  do {
    if (pvVar6 == pvVar5) {
      param_1[0x17] = pvVar5;
      operator_delete(pvVar5);
      goto LAB_00c79600;
    }
    pvVar6 = (void *)((long)pvVar6 + -4);
  } while (pvVar6 != (void *)0x0);
LAB_00c795dc:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00c79718  FUN_00c79718 =====

void FUN_00c79718(void *param_1)

{
  FUN_00c7947c();
  operator_delete(param_1);
  return;
}


// ===== 00c79748  FUN_00c79748 =====

void FUN_00c79748(undefined8 param_1,undefined8 *param_2)

{
  undefined4 local_30 [2];
  long *local_28;
  long *local_20;
  long *local_18;
  
  local_28 = (long *)*param_2;
  *param_2 = 0;
  local_30[0] = 0;
  local_20 = (long *)0x0;
  local_18 = (long *)0x0;
  FUN_00c797c0(param_1,local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  if (local_20 != (long *)0x0) {
    (**(code **)(*local_20 + 8))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  return;
}


