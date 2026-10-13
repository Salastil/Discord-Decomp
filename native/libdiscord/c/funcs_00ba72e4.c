// ===== 00ba72e4  FUN_00ba72e4 =====

void FUN_00ba72e4(long param_1)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(param_1 + 0xa0);
  while (plVar3 != (long *)(param_1 + 0xa8)) {
    if ((int)plVar3[8] == 3) {
      *(undefined4 *)(plVar3 + 8) = 0;
      FUN_00ba9714(plVar3[7]);
    }
    plVar1 = (long *)plVar3[1];
    plVar4 = plVar3;
    if ((long *)plVar3[1] == (long *)0x0) {
      do {
        plVar3 = (long *)plVar4[2];
        bVar2 = plVar4 != (long *)*plVar3;
        plVar4 = plVar3;
      } while (bVar2);
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  return;
}


// ===== 00ba735c  FUN_00ba735c =====

void FUN_00ba735c(long param_1)

{
  uint uVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = *(long **)(param_1 + 0xa0);
  while (plVar5 != (long *)(param_1 + 0xa8)) {
    uVar1 = *(uint *)(plVar5 + 8);
    *(undefined8 *)((long)plVar5 + 0x46) = 0;
    plVar5[8] = 0;
    if (plVar5[0xf] != 0) {
      lVar4 = *(long *)(plVar5[0xb] + ((ulong)plVar5[0xe] / 0x2a) * 8) +
              ((ulong)plVar5[0xe] % 0x2a) * 0x60;
      plVar5[0x14] = (*(long *)(lVar4 + 0x18) - (*(long *)(lVar4 + 0x48) + *(long *)(lVar4 + 0x10)))
                     + plVar5[0x14];
      *(long *)(plVar5[6] + 0x90) =
           (*(long *)(lVar4 + 0x18) - (*(long *)(lVar4 + 0x48) + *(long *)(lVar4 + 0x10))) +
           *(long *)(plVar5[6] + 0x90);
      *(undefined8 *)(lVar4 + 0x40) = 0;
      *(long *)(lVar4 + 0x48) = *(long *)(lVar4 + 0x18) - *(long *)(lVar4 + 0x10);
      if (*(char *)(lVar4 + 0x54) == '\x01') {
        *(undefined1 *)(lVar4 + 0x54) = 0;
      }
      if (*(char *)(lVar4 + 0x5a) == '\x01') {
        *(undefined1 *)(lVar4 + 0x5a) = 0;
      }
      *(undefined4 *)(lVar4 + 0x5c) = 0;
      if ((uVar1 & 0xfffffffe) == 2) {
        FUN_00ba9714(plVar5[7]);
      }
    }
    plVar2 = (long *)plVar5[1];
    plVar6 = plVar5;
    if ((long *)plVar5[1] == (long *)0x0) {
      do {
        plVar5 = (long *)plVar6[2];
        bVar3 = plVar6 != (long *)*plVar5;
        plVar6 = plVar5;
      } while (bVar3);
    }
    else {
      do {
        plVar5 = plVar2;
        plVar2 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  *(undefined1 *)(param_1 + 0x51) = 0;
  return;
}


// ===== 00ba74b0  FUN_00ba74b0 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00ba74b0(long param_1,ushort param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0xa8);
  while( true ) {
    while( true ) {
      if (plVar1 == (long *)0x0) {
        return 0;
      }
      if (*(ushort *)(plVar1 + 4) <= param_2) break;
      plVar1 = (long *)*plVar1;
    }
    if (param_2 <= *(ushort *)(plVar1 + 4)) break;
    plVar1 = (long *)plVar1[1];
  }
  if (plVar1 == (undefined8 *)(param_1 + 0xa8)) {
    return 0;
  }
  return plVar1[0x14];
}


// ===== 00ba7500  FUN_00ba7500 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00ba7500(long param_1,ushort param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0xa8);
  while( true ) {
    while( true ) {
      if (plVar1 == (long *)0x0) {
        return 0;
      }
      if (*(ushort *)(plVar1 + 4) <= param_2) break;
      plVar1 = (long *)*plVar1;
    }
    if (param_2 <= *(ushort *)(plVar1 + 4)) break;
    plVar1 = (long *)plVar1[1];
  }
  if (plVar1 == (undefined8 *)(param_1 + 0xa8)) {
    return 0;
  }
  return plVar1[0x15];
}


// ===== 00ba7550  FUN_00ba7550 =====

void FUN_00ba7550(undefined8 param_1,undefined2 param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = FUN_00ba6e44(param_1,param_2);
  if (*(ulong *)(lVar1 + 0x80) < *(ulong *)(lVar1 + 0x78) && *(ulong *)(lVar1 + 0x78) <= param_3) {
    (**(code **)(lVar1 + 0x68))(lVar1 + 0x58);
  }
  *(ulong *)(lVar1 + 0x80) = param_3;
  return;
}


// ===== 00ba75a0  FUN_00ba75a0 =====

void FUN_00ba75a0(undefined8 param_1,undefined2 param_2,undefined2 param_3)

{
  long lVar1;
  
  lVar1 = FUN_00ba6e44(param_1,param_2);
  FUN_00ba912c(*(undefined8 *)(lVar1 + 0x10),param_3);
  return;
}


// ===== 00ba75d4  FUN_00ba75d4 =====

/* WARNING: Type propagation algorithm not settling */

undefined2 FUN_00ba75d4(long param_1,ushort param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0xa8);
joined_r0x00ba75e0:
  do {
    if (plVar1 == (long *)0x0) {
LAB_00ba7624:
      return *(undefined2 *)(param_1 + 0x20);
    }
    if (param_2 < *(ushort *)(plVar1 + 4)) {
      plVar1 = (long *)*plVar1;
      goto joined_r0x00ba75e0;
    }
    if (param_2 <= *(ushort *)(plVar1 + 4)) {
      if (plVar1 != (undefined8 *)(param_1 + 0xa8)) {
        return *(undefined2 *)(plVar1[7] + 0x12);
      }
      goto LAB_00ba7624;
    }
    plVar1 = (long *)plVar1[1];
  } while( true );
}


// ===== 00ba7630  FUN_00ba7630 =====

undefined4 FUN_00ba7630(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x58))();
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = 2;
  }
  return uVar2;
}


// ===== 00ba7660  FUN_00ba7660 =====

void FUN_00ba7660(long param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  long *plVar5;
  long *plVar6;
  ulong local_48;
  ulong uStack_40;
  undefined4 local_38;
  
  plVar5 = *(long **)(param_1 + 0xa0);
  if (plVar5 != (long *)(param_1 + 0xa8)) {
    puVar3 = *(ulong **)(param_2 + 0x48);
    do {
      local_48 = (ulong)CONCAT24(*(undefined2 *)((long)plVar5 + 0x4c),(uint)*(ushort *)(plVar5 + 4))
      ;
      uStack_40 = *(ulong *)((long)plVar5 + 0x44);
      local_38 = CONCAT22(0xaaaa,*(undefined2 *)(plVar5[7] + 0x12));
      if (puVar3 < *(ulong **)(param_2 + 0x50)) {
        if (puVar3 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *(undefined4 *)(puVar3 + 2) = local_38;
        puVar4 = (ulong *)((long)puVar3 + 0x14);
        puVar3[1] = uStack_40;
        *puVar3 = local_48;
      }
      else {
        puVar4 = (ulong *)FUN_00ba7e64(param_2 + 0x40,&local_48);
      }
      *(ulong **)(param_2 + 0x48) = puVar4;
      plVar1 = (long *)plVar5[1];
      plVar6 = plVar5;
      if ((long *)plVar5[1] == (long *)0x0) {
        do {
          plVar5 = (long *)plVar6[2];
          bVar2 = plVar6 != (long *)*plVar5;
          plVar6 = plVar5;
        } while (bVar2);
      }
      else {
        do {
          plVar5 = plVar1;
          plVar1 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      puVar3 = puVar4;
    } while (plVar5 != (long *)(param_1 + 0xa8));
  }
  return;
}


// ===== 00ba7768  FUN_00ba7768 =====

void FUN_00ba7768(long param_1,long param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort uVar4;
  double dVar5;
  long *plVar6;
  undefined2 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong unaff_x28;
  double dVar11;
  double dVar12;
  
  dVar5 = DAT_001f5658;
  puVar1 = *(ushort **)(param_2 + 0x40);
  puVar2 = *(ushort **)(param_2 + 0x48);
  do {
    if (puVar1 == puVar2) {
      return;
    }
    uVar3 = *puVar1;
    uVar4 = puVar1[8];
    puVar9 = (undefined8 *)(param_1 + 0xa8);
    unaff_x28 = unaff_x28 & 0xffffffffffff0000 | (ulong)uVar3;
    puVar8 = *(undefined8 **)(param_1 + 0xa8);
    while (puVar10 = puVar9, puVar8 != (undefined8 *)0x0) {
      while (puVar9 = puVar8, *(ushort *)(puVar9 + 4) <= uVar3) {
        if (uVar3 <= *(ushort *)(puVar9 + 4)) goto LAB_00ba77c4;
        puVar8 = (undefined8 *)puVar9[1];
        if ((undefined8 *)puVar9[1] == (undefined8 *)0x0) {
          puVar10 = puVar9 + 1;
          goto LAB_00ba7824;
        }
      }
      puVar8 = (undefined8 *)*puVar9;
    }
LAB_00ba7824:
    puVar8 = (undefined8 *)operator_new(0xb0);
    if ((puVar8 == (undefined8 *)0x0) || (*puVar8 = 0, puVar8 == (undefined8 *)0xffffffffffffffe0))
    {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar8[5] = &PTR_FUN_00d477e8;
    *(ushort *)(puVar8 + 4) = uVar3;
    puVar8[6] = param_1;
    plVar6 = (long *)operator_new(0x30);
    dVar11 = (double)uVar4;
    *(ushort *)(plVar6 + 2) = uVar3;
    *plVar6 = param_1 + 0x28;
    plVar6[1] = (long)(puVar8 + 5);
    *(ushort *)((long)plVar6 + 0x12) = uVar4;
    plVar6[4] = 0;
    plVar6[5] = 0;
    puVar8[7] = plVar6;
    *(undefined4 *)(puVar8 + 8) = 0;
    dVar12 = dVar5;
    if (dVar5 <= dVar11) {
      dVar12 = dVar11;
    }
    plVar6[3] = (long)(1.0 / dVar12);
    if (puVar1 == (ushort *)0x0) {
      uVar7 = 0;
      *(undefined4 *)((long)puVar8 + 0x44) = 0;
      *(undefined4 *)(puVar8 + 9) = 0;
    }
    else {
      *(undefined4 *)((long)puVar8 + 0x44) = *(undefined4 *)(puVar1 + 4);
      *(undefined4 *)(puVar8 + 9) = *(undefined4 *)(puVar1 + 6);
      uVar7 = (undefined2)*(undefined4 *)(puVar1 + 2);
    }
    *(undefined2 *)((long)puVar8 + 0x4c) = uVar7;
    puVar8[0x10] = param_1;
    puVar8[0x11] = unaff_x28;
    puVar8[0x12] = FUN_00ba910c;
    puVar8[0x13] = &DAT_00257da8;
    puVar8[0xb] = 0;
    puVar8[10] = 0;
    puVar8[0xd] = 0;
    puVar8[0xc] = 0;
    puVar8[0xf] = 0;
    puVar8[0xe] = 0;
    puVar8[0x14] = 0;
    puVar8[0x15] = 0;
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = puVar9;
    *puVar10 = puVar8;
    if (**(long **)(param_1 + 0xa0) != 0) {
      *(long *)(param_1 + 0xa0) = **(long **)(param_1 + 0xa0);
      puVar8 = (undefined8 *)*puVar10;
    }
    FUN_005d5b94(*(undefined8 *)(param_1 + 0xa8),puVar8);
    *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + 1;
LAB_00ba77c4:
    puVar1 = puVar1 + 10;
  } while( true );
}


// ===== 00ba793c  FUN_00ba793c =====

void FUN_00ba793c(undefined8 *param_1)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *param_1 = &PTR_FUN_00d477e8;
  if (*(code **)(param_1[0xe] + 8) != (code *)0x0) {
    (**(code **)(param_1[0xe] + 8))(param_1[0xb]);
  }
  FUN_00ba12a0(param_1 + 5);
  puVar5 = (undefined8 *)param_1[6];
  puVar6 = (undefined8 *)param_1[7];
  if (puVar5 != puVar6) {
    do {
      puVar4 = puVar5 + 1;
      operator_delete((void *)*puVar5);
      puVar5 = puVar4;
    } while (puVar4 != puVar6);
    puVar5 = (undefined8 *)param_1[6];
    puVar6 = (undefined8 *)param_1[7];
  }
  uVar3 = (ulong)((long)puVar6 + (-8 - ((long)puVar6 << 0x3d))) >> 3;
  uVar2 = (ulong)(((long)puVar5 - (long)puVar6 << 0x3d) - ((long)puVar5 - (long)puVar6)) >> 3;
  if (uVar3 <= uVar2) {
    uVar2 = uVar3;
  }
  if ((1 < uVar2) && ((((int)puVar5 - (int)puVar6 | -(int)puVar6) & 7U) == 0)) {
    uVar2 = uVar2 & 0x1ffffffffffffffe;
    puVar6 = puVar6 + -uVar2;
    do {
      uVar2 = uVar2 - 2;
    } while (uVar2 != 0);
  }
  while (puVar6 != puVar5) {
    puVar6 = puVar6 + -1;
    if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
  param_1[7] = puVar6;
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete((void *)param_1[5]);
  }
  pvVar1 = (void *)param_1[2];
  param_1[2] = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00ba7a64  FUN_00ba7a64 =====

void FUN_00ba7a64(undefined8 *param_1)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *param_1 = &PTR_FUN_00d477e8;
  if (*(code **)(param_1[0xe] + 8) != (code *)0x0) {
    (**(code **)(param_1[0xe] + 8))(param_1[0xb]);
  }
  FUN_00ba12a0(param_1 + 5);
  puVar5 = (undefined8 *)param_1[6];
  puVar6 = (undefined8 *)param_1[7];
  if (puVar5 != puVar6) {
    do {
      puVar4 = puVar5 + 1;
      operator_delete((void *)*puVar5);
      puVar5 = puVar4;
    } while (puVar4 != puVar6);
    puVar5 = (undefined8 *)param_1[6];
    puVar6 = (undefined8 *)param_1[7];
  }
  uVar3 = (ulong)((long)puVar6 + (-8 - ((long)puVar6 << 0x3d))) >> 3;
  uVar2 = (ulong)(((long)puVar5 - (long)puVar6 << 0x3d) - ((long)puVar5 - (long)puVar6)) >> 3;
  if (uVar3 <= uVar2) {
    uVar2 = uVar3;
  }
  if ((1 < uVar2) && ((((int)puVar5 - (int)puVar6 | -(int)puVar6) & 7U) == 0)) {
    uVar2 = uVar2 & 0x1ffffffffffffffe;
    puVar6 = puVar6 + -uVar2;
    do {
      uVar2 = uVar2 - 2;
    } while (uVar2 != 0);
  }
  do {
    if (puVar6 == puVar5) {
      param_1[7] = puVar6;
      if ((void *)param_1[5] != (void *)0x0) {
        operator_delete((void *)param_1[5]);
      }
      pvVar1 = (void *)param_1[2];
      param_1[2] = 0;
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
      }
      operator_delete(param_1);
      return;
    }
    puVar6 = puVar6 + -1;
  } while (puVar6 != (undefined8 *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00ba7b84  FUN_00ba7b84 =====

void FUN_00ba7b84(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *local_8;
  
  *param_1 = &PTR_FUN_00d47760;
  local_8 = param_1 + 0x14;
  FUN_00ba1144(&local_8,param_1[0x15]);
  if (*(code **)(param_1[0x11] + 8) != (code *)0x0) {
    (**(code **)(param_1[0x11] + 8))(param_1[0xe]);
  }
  pvVar1 = (void *)param_1[0xb];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0xc];
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
    param_1[0xc] = pvVar1;
    operator_delete(pvVar1);
  }
  return;
}


// ===== 00ba7c6c  FUN_00ba7c6c =====

void FUN_00ba7c6c(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *local_8;
  
  *param_1 = &PTR_FUN_00d47760;
  local_8 = param_1 + 0x14;
  FUN_00ba1144(&local_8,param_1[0x15]);
  if (*(code **)(param_1[0x11] + 8) != (code *)0x0) {
    (**(code **)(param_1[0x11] + 8))(param_1[0xe]);
  }
  pvVar1 = (void *)param_1[0xb];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[0xc];
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
    param_1[0xc] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00ba7d60  FUN_00ba7d60 =====

undefined8 FUN_00ba7d60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}


// ===== 00ba7d6c  FUN_00ba7d6c =====

void FUN_00ba7d6c(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x50) = param_2;
  return;
}


// ===== 00ba7d78  FUN_00ba7d78 =====

undefined2 * FUN_00ba7d78(long *param_1,undefined2 *param_2)

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
    FUN_00ba3880();
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


// ===== 00ba7e64  FUN_00ba7e64 =====

long FUN_00ba7e64(long *param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  size_t __n;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__dest;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar6 = (undefined8 *)(param_1[1] - *param_1);
  uVar3 = ((long)puVar6 >> 2) * -0x3333333333333333 + 1;
  if (0xccccccccccccccc < uVar3) {
    FUN_00ba7f84();
LAB_00ba7f80:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  lVar4 = param_1[2] - *param_1 >> 2;
  uVar5 = lVar4 * -0x6666666666666666;
  if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
    uVar5 = uVar3;
  }
  if (0x666666666666665 < (ulong)(lVar4 * -0x3333333333333333)) {
    uVar5 = 0xccccccccccccccc;
  }
  if (uVar5 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    if (0xccccccccccccccc < uVar5) goto LAB_00ba7f80;
    pvVar1 = operator_new(uVar5 * 0x14);
    puVar6 = (undefined8 *)((long)pvVar1 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    uVar8 = param_2[1];
    uVar7 = *param_2;
    *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(param_2 + 2);
    puVar6[1] = uVar8;
    *puVar6 = uVar7;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar2 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)puVar6 + 0x14;
    param_1[2] = (long)((long)pvVar1 + uVar5 * 0x14);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    return (long)puVar6 + 0x14;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00ba7f84  FUN_00ba7f84 =====

void FUN_00ba7f84(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00ba7f9c  FUN_00ba7f9c =====

void FUN_00ba7f9c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ba7fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*param_1 + 0x18) + 0xa8))();
  return;
}


// ===== 00ba7fb4  FUN_00ba7fb4 =====

void FUN_00ba7fb4(long *param_1)

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
  
  if ((ulong)param_1[4] < 0x2a) {
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
      FUN_00ba8424(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_00ba8948(&local_50,lVar5);
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
      FUN_00ba8424(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0xfc0);
    FUN_00ba86ac(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x2a;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_00ba819c(param_1,&local_50);
  return;
}


// ===== 00ba819c  FUN_00ba819c =====

void FUN_00ba819c(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_00ba840c;
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
LAB_00ba840c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00ba8424  FUN_00ba8424 =====

void FUN_00ba8424(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_00ba8694;
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
LAB_00ba8694:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00ba86ac  FUN_00ba86ac =====

void FUN_00ba86ac(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_00ba8930;
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
LAB_00ba8930:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00ba8948  FUN_00ba8948 =====

void FUN_00ba8948(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_00ba8bcc;
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
LAB_00ba8bcc:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00ba8be4  FUN_00ba8be4 =====

void FUN_00ba8be4(long *param_1,undefined8 param_2,long *param_3,long param_4,undefined8 *param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uStack_51;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  puVar1 = (undefined1 *)*param_5;
  puVar2 = (undefined1 *)param_5[1];
  if (param_1 != param_3) {
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00ba8ce0(&local_50,&uStack_51,*param_3,param_4,puVar1,puVar2);
    *param_5 = puStack_48;
    param_5[1] = local_40;
    puVar1 = puStack_48;
    puVar2 = local_40;
    for (param_3 = param_3 + -1; param_1 != param_3; param_3 = param_3 + -1) {
      local_40 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00ba8ce0(&local_50,&uStack_51,*param_3,*param_3 + 0xfc0);
      *param_5 = puStack_48;
      param_5[1] = local_40;
      puVar1 = puStack_48;
      puVar2 = local_40;
    }
    param_4 = *param_3 + 0xfc0;
  }
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00ba8ce0(&local_50,&uStack_51,param_2,param_4,puVar1,puVar2);
  param_5[1] = local_40;
  *param_5 = puStack_48;
  return;
}


// ===== 00ba8ce0  FUN_00ba8ce0 =====

void FUN_00ba8ce0(long *param_1,undefined8 param_2,long param_3,long param_4,long *param_5,
                 long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (param_3 == param_4) {
    *param_1 = param_3;
    param_1[1] = (long)param_5;
    param_1[2] = param_6;
  }
  else {
    lVar5 = *param_5;
    lVar8 = param_4;
    while( true ) {
      lVar6 = (param_6 - lVar5 >> 5) * -0x5555555555555555;
      lVar5 = (lVar8 - param_3 >> 5) * -0x5555555555555555;
      if (lVar6 <= lVar5) {
        lVar5 = lVar6;
      }
      if (lVar5 != 0) {
        lVar6 = 0;
        do {
          lVar1 = lVar8 + lVar6;
          lVar2 = param_6 + lVar6;
          lVar3 = param_6 + lVar6;
          puVar7 = (undefined8 *)(lVar2 + -0x50);
          pvVar4 = (void *)*puVar7;
          *(undefined4 *)(lVar2 + -0x60) = *(undefined4 *)(lVar1 + -0x60);
          *(undefined8 *)(lVar2 + -0x58) = *(undefined8 *)(lVar1 + -0x58);
          if (pvVar4 != (void *)0x0) {
            if (*(long *)(lVar3 + -0x48) - 1U < (ulong)(*(long *)(lVar3 + -0x48) - (long)pvVar4)) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            *(void **)(lVar3 + -0x48) = pvVar4;
            operator_delete(pvVar4);
            *puVar7 = 0;
            *(undefined8 *)(lVar2 + -0x48) = 0;
            *(undefined8 *)(lVar2 + -0x40) = 0;
          }
          lVar6 = lVar6 + -0x60;
          *puVar7 = *(undefined8 *)(lVar1 + -0x50);
          *(undefined8 *)(lVar3 + -0x48) = *(undefined8 *)(lVar1 + -0x48);
          *(undefined8 *)(lVar3 + -0x40) = *(undefined8 *)(lVar1 + -0x40);
          uVar10 = *(undefined8 *)(lVar1 + -0x10);
          uVar9 = *(undefined8 *)(lVar1 + -0x18);
          uVar12 = *(undefined8 *)(lVar1 + -0x30);
          uVar11 = *(undefined8 *)(lVar1 + -0x38);
          uVar14 = *(undefined8 *)(lVar1 + -0x20);
          uVar13 = *(undefined8 *)(lVar1 + -0x28);
          *(undefined8 *)(lVar1 + -0x50) = 0;
          *(undefined8 *)(lVar1 + -0x48) = 0;
          *(undefined8 *)(lVar1 + -0x40) = 0;
          *(undefined8 *)(lVar3 + -8) = *(undefined8 *)(lVar1 + -8);
          *(undefined8 *)(lVar3 + -0x10) = uVar10;
          *(undefined8 *)(lVar3 + -0x18) = uVar9;
          *(undefined8 *)(lVar3 + -0x20) = uVar14;
          *(undefined8 *)(lVar3 + -0x28) = uVar13;
          *(undefined8 *)(lVar3 + -0x30) = uVar12;
          *(undefined8 *)(lVar3 + -0x38) = uVar11;
        } while (lVar5 * -0x60 != lVar6);
        param_6 = param_6 + lVar6;
      }
      lVar8 = lVar8 + lVar5 * -0x60;
      if (param_3 == lVar8) break;
      param_5 = param_5 + -1;
      lVar5 = *param_5;
      param_6 = lVar5 + 0xfc0;
    }
    if ((param_5 != (long *)0x0) && (param_6 == *param_5 + 0xfc0)) {
      param_5 = param_5 + 1;
      param_6 = *param_5;
    }
    *param_1 = param_4;
    param_1[1] = (long)param_5;
    param_1[2] = param_6;
  }
  return;
}


// ===== 00ba8e94  FUN_00ba8e94 =====

void FUN_00ba8e94(long *param_1,long param_2,long *param_3,undefined8 param_4,undefined8 *param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined1 uStack_51;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  if (param_1 == param_3) {
    puVar2 = (undefined1 *)*param_5;
    puVar3 = (undefined1 *)param_5[1];
  }
  else {
    puVar2 = (undefined1 *)*param_5;
    puVar3 = (undefined1 *)param_5[1];
    plVar4 = param_1 + 1;
    lVar1 = *param_1;
    while( true ) {
      local_40 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00ba8f64(&local_50,&uStack_51,param_2,lVar1 + 0xfc0,puVar2,puVar3);
      *param_5 = puStack_48;
      param_5[1] = local_40;
      if (plVar4 == param_3) break;
      param_2 = *plVar4;
      puVar2 = puStack_48;
      puVar3 = local_40;
      plVar4 = plVar4 + 1;
      lVar1 = param_2;
    }
    param_2 = *plVar4;
    puVar2 = puStack_48;
    puVar3 = local_40;
  }
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00ba8f64(&local_50,&uStack_51,param_2,param_4,puVar2,puVar3);
  param_5[1] = local_40;
  *param_5 = puStack_48;
  return;
}


// ===== 00ba8f64  FUN_00ba8f64 =====

void FUN_00ba8f64(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                 long *param_5,undefined4 *param_6)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (param_3 != param_4) {
    puVar3 = (undefined4 *)*param_5;
    do {
      lVar5 = ((long)param_4 - (long)param_3 >> 5) * -0x5555555555555555;
      lVar4 = ((long)puVar3 + (0xfc0 - (long)param_6) >> 5) * -0x5555555555555555;
      if (lVar4 <= lVar5) {
        lVar5 = lVar4;
      }
      puVar6 = param_3;
      if (lVar5 != 0) {
        puVar6 = param_3 + lVar5 * 0x18;
        do {
          pvVar2 = *(void **)(param_6 + 4);
          *param_6 = *param_3;
          *(undefined8 *)(param_6 + 2) = *(undefined8 *)(param_3 + 2);
          if (pvVar2 != (void *)0x0) {
            if (*(long *)(param_6 + 6) - 1U < (ulong)(*(long *)(param_6 + 6) - (long)pvVar2)) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            *(void **)(param_6 + 6) = pvVar2;
            operator_delete(pvVar2);
            *(undefined8 *)(param_6 + 4) = 0;
            *(undefined8 *)(param_6 + 6) = 0;
            *(undefined8 *)(param_6 + 8) = 0;
          }
          *(undefined8 *)(param_6 + 4) = *(undefined8 *)(param_3 + 4);
          *(undefined8 *)(param_6 + 6) = *(undefined8 *)(param_3 + 6);
          *(undefined8 *)(param_6 + 8) = *(undefined8 *)(param_3 + 8);
          puVar1 = (undefined8 *)(param_3 + 0x16);
          uVar8 = *(undefined8 *)(param_3 + 0x14);
          uVar7 = *(undefined8 *)(param_3 + 0x12);
          uVar10 = *(undefined8 *)(param_3 + 0xc);
          uVar9 = *(undefined8 *)(param_3 + 10);
          uVar12 = *(undefined8 *)(param_3 + 0x10);
          uVar11 = *(undefined8 *)(param_3 + 0xe);
          *(undefined8 *)(param_3 + 4) = 0;
          *(undefined8 *)(param_3 + 6) = 0;
          *(undefined8 *)(param_3 + 8) = 0;
          param_3 = param_3 + 0x18;
          *(undefined8 *)(param_6 + 0x16) = *puVar1;
          *(undefined8 *)(param_6 + 0x14) = uVar8;
          *(undefined8 *)(param_6 + 0x12) = uVar7;
          *(undefined8 *)(param_6 + 0x10) = uVar12;
          *(undefined8 *)(param_6 + 0xe) = uVar11;
          *(undefined8 *)(param_6 + 0xc) = uVar10;
          *(undefined8 *)(param_6 + 10) = uVar9;
          param_6 = param_6 + 0x18;
        } while (param_3 != puVar6);
        if (param_4 == puVar6) goto LAB_00ba90a4;
      }
      param_5 = param_5 + 1;
      puVar3 = (undefined4 *)*param_5;
      param_6 = puVar3;
      param_3 = puVar6;
    } while( true );
  }
  *param_1 = param_3;
LAB_00ba90c8:
  param_1[1] = param_5;
  param_1[2] = param_6;
  return;
LAB_00ba90a4:
  if ((param_5 != (long *)0x0) && (param_6 == (undefined4 *)(*param_5 + 0xfc0))) {
    param_5 = param_5 + 1;
    param_6 = (undefined4 *)*param_5;
  }
  *param_1 = puVar6;
  goto LAB_00ba90c8;
}


// ===== 00ba90ec  FUN_00ba90ec =====

void FUN_00ba90ec(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ba9108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*param_1 + 0x18) + 0xa0))(*(long **)(*param_1 + 0x18),(short)param_1[1]);
  return;
}


// ===== 00ba910c  FUN_00ba910c =====

void FUN_00ba910c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ba9128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*param_1 + 0x18) + 0xa0))(*(long **)(*param_1 + 0x18),(short)param_1[1]);
  return;
}


// ===== 00ba912c  FUN_00ba912c =====

void FUN_00ba912c(long param_1,ushort param_2)

{
  double dVar1;
  
  *(ushort *)(param_1 + 0x12) = param_2;
  dVar1 = DAT_001f5658;
  if (DAT_001f5658 <= (double)param_2) {
    dVar1 = (double)param_2;
  }
  *(double *)(param_1 + 0x18) = 1.0 / dVar1;
  return;
}


// ===== 00ba915c  FUN_00ba915c =====

/* WARNING: Removing unreachable block (ram,0x00ba93f8) */
/* WARNING: Removing unreachable block (ram,0x00ba940c) */

void FUN_00ba915c(undefined4 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  long *plVar7;
  double dVar8;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined8 local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined8 local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  ulong local_50;
  
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    bVar6 = *(byte *)(param_2 + 0x29) ^ 1;
  }
  else {
    bVar6 = 1;
  }
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = 0xaaaaaaaaaaaaaa00;
  local_50 = 0xaaaaaaaaaaaaaa00;
  do {
    puVar3 = *(undefined8 **)(param_2 + 0x30);
    puVar1 = *(undefined8 **)(param_2 + 0x38);
    if (puVar3 == puVar1) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 0x14) = 0;
      return;
    }
    if ((bVar6 & 1) != 0) {
      *(undefined8 *)(param_2 + 0x20) = *puVar3;
      memmove(puVar3,puVar3 + 1,(long)puVar1 - (long)(puVar3 + 1));
      puVar3 = *(undefined8 **)(param_2 + 0x38);
      uVar5 = (ulong)((long)puVar3 + (-8 - ((long)puVar3 << 0x3d))) >> 3;
      uVar4 = (((long)puVar1 - (long)puVar3 << 0x3d) - ((long)puVar1 - (long)puVar3)) + 8U >> 3;
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
      if ((1 < uVar4) && ((-(int)puVar3 & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        puVar3 = puVar3 + -uVar4;
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (puVar3 != puVar1 + -1) {
        puVar3 = puVar3 + -1;
        if (puVar3 == (undefined8 *)0x0) goto LAB_00ba9420;
      }
      *(undefined8 **)(param_2 + 0x38) = puVar1 + -1;
      *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x28) = 0;
    }
    plVar7 = *(long **)(param_2 + 0x20);
    puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
    local_100 = &DAT_aaaaaaaaaaaaaaaa;
    local_e8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
    local_e0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    (**(code **)(*(long *)plVar7[1] + 0x10))(&local_100,(long *)plVar7[1],param_3,param_4);
    if (((ulong)local_b0 & 1) != 0) {
      dVar8 = 1.0;
      if (*(char *)(*plVar7 + 0x28) == '\x01') {
        dVar8 = (double)plVar7[3] * (double)(ulong)((long)local_e0 - (long)local_e8);
      }
      plVar7[4] = (long)((double)plVar7[4] + dVar8);
    }
    FUN_00ba9764(&local_a0,&local_100);
    if ((((ulong)local_b0 & 1) != 0) && (local_e8 != (undefined1 *)0x0)) {
      if (local_e0 + -1 < local_e0 + -(long)local_e8) {
LAB_00ba9420:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      local_e0 = local_e8;
      operator_delete(local_e8);
    }
    if ((local_50 & 1) != 0) {
      *(byte *)(param_2 + 0x29) = local_70._1_1_ ^ 1;
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x20);
      lVar2 = (**(code **)(**(long **)(*(long *)(param_2 + 0x20) + 8) + 0x18))();
      if (lVar2 == 0 || ((bVar6 ^ 0xff) & 1) != 0) {
        if ((bVar6 & 1) == 0 && lVar2 == 0) {
          FUN_00ba9548(*(undefined8 *)(param_2 + 0x20));
        }
      }
      else {
        FUN_00ba9448(*(undefined8 *)(param_2 + 0x20),lVar2);
      }
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 0x14) = 0;
      if ((local_50 & 1) != 0) {
        if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *param_1 = (undefined4)local_a0;
        *(undefined1 **)(param_1 + 4) = local_90;
        *(undefined1 **)(param_1 + 2) = puStack_98;
        *(undefined1 **)(param_1 + 10) = local_78;
        *(undefined2 *)(param_1 + 0xc) = (undefined2)local_70;
        *(undefined1 **)(param_1 + 8) = local_80;
        *(undefined1 **)(param_1 + 6) = puStack_88;
        *(undefined1 *)((long)param_1 + 0x32) = local_70._2_1_;
        *(undefined1 **)(param_1 + 0x12) = local_58;
        *(undefined1 *)(param_1 + 0x14) = 1;
        *(undefined1 **)(param_1 + 0x10) = puStack_60;
        *(undefined1 **)(param_1 + 0xe) = puStack_68;
      }
      return;
    }
  } while( true );
}


// ===== 00ba9448  FUN_00ba9448 =====

void FUN_00ba9448(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  double dVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  long *local_18;
  
  lVar1 = *param_1;
  dVar7 = 1.0;
  dVar3 = *(double *)(lVar1 + 0x18);
  param_1[4] = (long)dVar3;
  if (*(char *)(lVar1 + 0x28) == '\x01') {
    uVar4 = *(ulong *)(lVar1 + 0x10);
    if (param_2 <= *(ulong *)(lVar1 + 0x10)) {
      uVar4 = param_2;
    }
    dVar7 = (double)param_1[3] * (double)uVar4;
  }
  dVar7 = dVar7 + dVar3;
  param_1[5] = (long)dVar7;
  plVar2 = *(long **)(lVar1 + 0x30);
  lVar6 = (long)*(long **)(lVar1 + 0x38) - (long)plVar2;
  if (lVar6 != 0) {
    uVar4 = lVar6 >> 3;
    do {
      uVar5 = uVar4 >> 1;
      lVar6 = plVar2[uVar5];
      dVar3 = *(double *)(lVar6 + 0x28);
      if (dVar3 == dVar7) {
        if (*(ushort *)(lVar6 + 0x10) < *(ushort *)(param_1 + 2)) {
LAB_00ba94b8:
          plVar2 = plVar2 + uVar5 + 1;
          uVar5 = uVar4 + ~uVar5;
        }
      }
      else if (dVar3 < dVar7) goto LAB_00ba94b8;
      uVar4 = uVar5;
    } while (uVar4 != 0);
  }
  if (plVar2 != *(long **)(lVar1 + 0x38)) {
    dVar3 = *(double *)(*plVar2 + 0x28);
    if (dVar7 == dVar3) {
      if (*(ushort *)(*plVar2 + 0x10) <= *(ushort *)(param_1 + 2)) {
        return;
      }
    }
    else if (dVar3 <= dVar7) {
      return;
    }
  }
  local_18 = param_1;
  FUN_00ba9944((long *)(lVar1 + 0x30),plVar2,&local_18);
  return;
}


// ===== 00ba9548  FUN_00ba9548 =====

void FUN_00ba9548(long *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *__dest;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  lVar8 = *param_1;
  param_1[5] = 0;
  __dest = *(long **)(lVar8 + 0x30);
  plVar9 = *(long **)(lVar8 + 0x38);
  if (__dest == plVar9) {
LAB_00ba960c:
    if ((__dest != plVar9) && (plVar4 = __dest + 1, plVar7 = __dest, plVar4 != plVar9)) {
      do {
        __dest = plVar7;
        if ((long *)*plVar4 != param_1) {
          __dest = plVar7 + 1;
          *plVar7 = *plVar4;
        }
        plVar4 = plVar4 + 1;
        plVar7 = __dest;
      } while (plVar4 != plVar9);
      plVar9 = *(long **)(lVar8 + 0x38);
    }
    lVar1 = (long)plVar9 - (long)__dest;
    if (plVar9 < __dest) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:1170: libc++ Hardening assertion __first <= __last failed: vector::erase(first, last) called with invalid range\n"
                );
    }
    if (__dest != plVar9) {
      memmove(__dest,(void *)((long)__dest + lVar1),(long)plVar9 - ((long)__dest + lVar1));
      lVar5 = *(long *)(lVar8 + 0x38);
      uVar6 = (lVar5 - (lVar5 << 0x3d)) - 8U >> 3;
      uVar3 = (ulong)(((long)__dest - lVar5 << 0x3d) - ((long)__dest - lVar5)) >> 3;
      if (uVar6 <= uVar3) {
        uVar3 = uVar6;
      }
      if ((1 < uVar3) && ((((int)__dest - (int)lVar5 | -(int)lVar5) & 7U) == 0)) {
        uVar3 = uVar3 & 0x1ffffffffffffffe;
        lVar5 = lVar5 + uVar3 * -8;
        do {
          uVar3 = uVar3 - 2;
        } while (uVar3 != 0);
      }
      while (lVar5 != (long)plVar9 - lVar1) {
        lVar5 = lVar5 + -8;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      *(long *)(lVar8 + 0x38) = (long)plVar9 - lVar1;
    }
  }
  else {
    uVar3 = (long)plVar9 + (-8 - (long)__dest);
    uVar2 = (uint)uVar3;
    if ((~uVar2 & 0x18) != 0) {
      uVar6 = (ulong)((uVar2 >> 3) + 1) & 3;
      do {
        if ((long *)*__dest == param_1) goto LAB_00ba960c;
        uVar6 = uVar6 - 1;
        __dest = __dest + 1;
      } while (uVar6 != 0);
    }
    if (0x17 < uVar3) {
      __dest = __dest + 2;
      do {
        if ((long *)__dest[-2] == param_1) {
          __dest = __dest + -2;
          goto LAB_00ba960c;
        }
        if ((long *)__dest[-1] == param_1) {
          __dest = __dest + -1;
          goto LAB_00ba960c;
        }
        if ((long *)*__dest == param_1) goto LAB_00ba960c;
        if ((long *)__dest[1] == param_1) {
          __dest = __dest + 1;
          goto LAB_00ba960c;
        }
        plVar4 = __dest + 2;
        __dest = __dest + 4;
      } while (plVar4 != plVar9);
    }
  }
  return;
}


// ===== 00ba9714  FUN_00ba9714 =====

void FUN_00ba9714(long param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x18))();
  if (lVar1 != 0) {
    FUN_00ba9448(param_1,lVar1);
    return;
  }
  return;
}


// ===== 00ba9764  FUN_00ba9764 =====

void FUN_00ba9764(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined2 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  cVar1 = *(char *)(param_1 + 0x14);
  if (cVar1 == *(char *)(param_2 + 0x14)) {
    if (cVar1 != '\0') {
      FUN_00ba9874(param_1);
      return;
    }
  }
  else if (cVar1 == '\0') {
    if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *param_1 = *param_2;
    uVar5 = *(undefined8 *)(param_2 + 4);
    uVar4 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 4) = uVar5;
    *(undefined8 *)(param_1 + 2) = uVar4;
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    uVar2 = *(undefined2 *)(param_2 + 0xc);
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 10) = 0;
    *(undefined1 *)((long)param_1 + 0x32) = *(undefined1 *)((long)param_2 + 0x32);
    *(undefined2 *)(param_1 + 0xc) = uVar2;
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    uVar4 = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
    *(undefined8 *)(param_1 + 0x10) = uVar5;
    *(undefined8 *)(param_1 + 0xe) = uVar4;
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  else {
    pvVar3 = *(void **)(param_1 + 6);
    if (pvVar3 != (void *)0x0) {
      if (*(long *)(param_1 + 8) - 1U < (ulong)(*(long *)(param_1 + 8) - (long)pvVar3)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      *(void **)(param_1 + 8) = pvVar3;
      operator_delete(pvVar3);
    }
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}


// ===== 00ba9874  FUN_00ba9874 =====

undefined4 * FUN_00ba9874(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  pvVar2 = *(void **)(param_1 + 6);
  uVar3 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar3;
  if (pvVar2 != (void *)0x0) {
    if (*(long *)(param_1 + 8) - 1U < (ulong)(*(long *)(param_1 + 8) - (long)pvVar2)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    *(void **)(param_1 + 8) = pvVar2;
    operator_delete(pvVar2);
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
  }
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  uVar1 = *(undefined2 *)(param_2 + 0xc);
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x32) = *(undefined1 *)((long)param_2 + 0x32);
  *(undefined2 *)(param_1 + 0xc) = uVar1;
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  *(undefined8 *)(param_1 + 0xe) = uVar3;
  return param_1;
}


// ===== 00ba9944  FUN_00ba9944 =====

undefined8 * FUN_00ba9944(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  size_t sVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  void *__dest;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  void *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  void *pvStack_48;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar8 = param_2;
    if (param_2 == puVar2) {
      if (param_2 == (undefined8 *)0x0) {
LAB_00ba9ae0:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *puVar2 = *param_3;
      param_1[1] = (long)(puVar2 + 1);
    }
    else {
      uVar9 = *param_3;
      puVar3 = puVar2;
      for (puVar6 = puVar2 + -1; puVar6 < puVar2; puVar6 = puVar6 + 1) {
        if (puVar3 == (undefined8 *)0x0) goto LAB_00ba9ae0;
        *puVar3 = *puVar6;
        puVar3 = puVar3 + 1;
      }
      param_1[1] = (long)puVar3;
      sVar4 = (long)puVar2 + (-8 - (long)param_2);
      memmove((void *)((long)puVar2 - sVar4),param_2,sVar4);
      *param_2 = uVar9;
    }
  }
  else {
    lVar10 = *param_1;
    uVar1 = ((long)puVar2 - lVar10 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_00ba9d84();
LAB_00ba9af8:
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    uVar5 = param_1[2] - lVar10;
    local_60 = (void *)0x0;
    uVar7 = (long)uVar5 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 != 0) {
      if (uVar7 >> 0x3d != 0) goto LAB_00ba9af8;
      local_60 = operator_new(uVar7 << 3);
    }
    pvStack_48 = (void *)((long)local_60 + uVar7 * 8);
    local_58 = (undefined8 *)((long)local_60 + ((long)param_2 - lVar10));
    local_50 = local_58;
    FUN_00ba9afc(&local_60,param_3);
    puVar8 = local_58;
    memcpy(local_50,param_2,param_1[1] - (long)param_2);
    lVar10 = param_1[1];
    param_1[1] = (long)param_2;
    sVar4 = (long)param_2 - *param_1;
    __dest = (void *)((long)local_58 - sVar4);
    local_50 = (undefined8 *)((long)local_50 + (lVar10 - (long)param_2));
    memcpy(__dest,(void *)*param_1,sVar4);
    local_60 = (void *)*param_1;
    lVar10 = param_1[2];
    *param_1 = (long)__dest;
    param_1[2] = (long)pvStack_48;
    param_1[1] = (long)local_50;
    if (local_60 != (void *)0x0) {
      local_58 = (undefined8 *)local_60;
      local_50 = (undefined8 *)local_60;
      pvStack_48 = (void *)lVar10;
      operator_delete(local_60);
    }
  }
  return puVar8;
}


// ===== 00ba9afc  FUN_00ba9afc =====

void FUN_00ba9afc(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_00ba9d6c;
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
LAB_00ba9d6c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00ba9d84  FUN_00ba9d84 =====

void FUN_00ba9d84(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00ba9d9c  FUN_00ba9d9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ba9d9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 param_7,long *param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,int param_12,
                 undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 *param_16)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long local_118;
  undefined4 local_110;
  undefined8 local_10c;
  long local_100;
  undefined4 local_f8;
  undefined8 *local_f0 [2];
  code *local_e0;
  undefined *local_d8;
  undefined8 *local_d0 [2];
  code *local_c0;
  undefined **local_b8;
  undefined8 *local_b0 [2];
  code *local_a0;
  undefined **local_98;
  undefined8 *local_90 [2];
  code *local_80;
  undefined **local_78;
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  *param_1 = &PTR_FUN_00d47818;
  param_1[1] = param_3;
  param_1[2] = param_4;
  uVar10 = param_5[5];
  uVar12 = param_5[4];
  uVar8 = param_5[6];
  uVar13 = param_5[1];
  uVar11 = *param_5;
  uVar15 = param_5[3];
  uVar14 = param_5[2];
  param_1[10] = param_5[7];
  param_1[9] = uVar8;
  param_1[8] = uVar10;
  param_1[7] = uVar12;
  param_1[6] = uVar15;
  param_1[5] = uVar14;
  param_1[4] = uVar13;
  param_1[3] = uVar11;
  uVar10 = param_5[0xd];
  uVar12 = param_5[0xc];
  uVar8 = param_5[0xe];
  uVar13 = param_5[9];
  uVar11 = param_5[8];
  uVar15 = param_5[0xb];
  uVar14 = param_5[10];
  param_1[0x12] = param_5[0xf];
  param_1[0x11] = uVar8;
  param_1[0x10] = uVar10;
  param_1[0xf] = uVar12;
  param_1[0xe] = uVar15;
  param_1[0xd] = uVar14;
  param_1[0xc] = uVar13;
  param_1[0xb] = uVar11;
  uVar11 = param_5[0x15];
  uVar10 = param_5[0x14];
  uVar12 = param_5[0x17];
  uVar8 = param_5[0x16];
  uVar14 = param_5[0x11];
  uVar13 = param_5[0x10];
  uVar16 = param_5[0x13];
  uVar15 = param_5[0x12];
  param_1[0x1b] = param_2;
  param_1[0x1a] = uVar12;
  param_1[0x19] = uVar8;
  param_1[0x18] = uVar11;
  param_1[0x17] = uVar10;
  param_1[0x16] = uVar16;
  param_1[0x15] = uVar15;
  param_1[0x14] = uVar14;
  param_1[0x13] = uVar13;
  param_1[0x1c] = *param_6;
  param_1[0x1d] = param_7;
  local_80 = FUN_00babb4c;
  local_78 = &PTR_FUN_00d478a0;
  local_90[0] = (undefined8 *)operator_new(0x18);
  iVar4 = *(int *)((long)param_5 + 0x54);
  *local_90[0] = FUN_00baa1f0;
  local_90[0][1] = 0;
  iVar5 = *(int *)((long)param_5 + 0x6c);
  bVar1 = *(byte *)(param_5 + 0xe);
  local_90[0][2] = param_1;
  local_100 = (long)iVar5 * 1000;
  local_118 = 0x7fffffffffffffff;
  if (iVar4 != 0x7fffffff) {
    local_118 = (long)iVar4 * 1000;
  }
  if ((bVar1 & iVar5 != 0x7fffffff) == 0) {
    local_100 = 0x7fffffffffffffff;
  }
  local_10c = 0;
  local_110 = 1;
  local_f8 = 0;
  uVar8 = FUN_00ba434c(param_2,"t3-rtx",6,local_90,&local_118);
  param_1[0x1e] = uVar8;
  if ((code *)local_78[1] != (code *)0x0) {
    (*(code *)local_78[1])(local_90[0]);
  }
  uVar8 = param_1[0x1b];
  local_a0 = FUN_00babb4c;
  local_98 = &PTR_FUN_00d478a0;
  local_b0[0] = (undefined8 *)operator_new(0x18);
  iVar4 = *(int *)(param_5 + 0xf);
  *local_b0[0] = FUN_00baa2d0;
  local_b0[0][1] = 0;
  local_b0[0][2] = param_1;
  local_118 = 0x7fffffffffffffff;
  if (iVar4 != 0x7fffffff) {
    local_118 = (long)iVar4 * 1000;
  }
  local_110 = 1;
  local_10c = 0x100000000;
  local_100 = 0x7fffffffffffffff;
  local_f8 = 1;
  uVar8 = FUN_00ba434c(uVar8,"delayed-ack",0xb,local_b0,&local_118);
  param_1[0x1f] = uVar8;
  if ((code *)local_98[1] != (code *)0x0) {
    (*(code *)local_98[1])(local_b0[0]);
  }
  *(undefined4 *)(param_1 + 0x20) = param_9;
  *(undefined4 *)(param_1 + 0x21) = param_11;
  *(undefined4 *)((long)param_1 + 0x104) = param_10;
  *(int *)((long)param_1 + 0x10c) = param_12;
  param_1[0x22] = param_14;
  uVar8 = *param_16;
  param_1[0x24] = param_16[1];
  param_1[0x23] = uVar8;
  param_1[0x25] = param_16[2];
  lVar9 = param_16[3];
  param_1[0x26] = lVar9;
  if (*(long *)(lVar9 + 8) != 0) {
    param_16[2] = 0;
    param_16[3] = &DAT_001fbc50;
  }
  param_1[0x27] = param_15;
  param_1[0x28] = 0;
  FUN_00babc48(param_1 + 0x29,param_5);
  param_1[0x31] = param_3;
  param_1[0x32] = param_4;
  uVar8 = *(undefined8 *)((long)param_5 + 0xa4);
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x35] = param_3;
  param_1[0x36] = param_4;
  param_1[0x33] = uVar8;
  *(undefined1 *)(param_1 + 0x37) = 0;
  param_1[0x38] = param_1[0x1f];
  uVar6 = param_12 - 1;
  param_1[0x3a] = (ulong)uVar6;
  *(uint *)(param_1 + 0x3b) = uVar6;
  param_1[0x3c] = (ulong)uVar6;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *(undefined1 *)((long)param_1 + 0x1dc) = 1;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = param_1 + 0x41;
  FUN_00babe68(param_1 + 0x43,param_3,param_4,param_5[5],*(undefined1 *)((long)param_6 + 1));
  uVar11 = param_1[0x1d];
  local_c0 = FUN_00babbc0;
  local_b8 = &PTR_FUN_00d478c0;
  local_d0[0] = (undefined8 *)operator_new(0x18);
  uVar12 = _UNK_001f4c48;
  uVar8 = _DAT_001f4c40;
  local_e0 = FUN_00babc38;
  local_d8 = &DAT_00257dc8;
  uVar2 = *(undefined1 *)param_6;
  uVar10 = param_1[0x1e];
  uVar3 = *(undefined1 *)((long)param_6 + 1);
  local_d0[0][2] = param_1;
  local_d0[0][1] = uVar12;
  *local_d0[0] = uVar8;
  local_f0[0] = param_1;
  FUN_00bb3620(param_1 + 0x59,param_3,param_4,uVar11,param_10,param_13,param_8,local_d0,local_f0,
               uVar10,param_5,uVar2,uVar3);
  if (*(code **)(local_d8 + 8) != (code *)0x0) {
    (**(code **)(local_d8 + 8))(local_f0[0]);
  }
  if ((code *)local_b8[1] != (code *)0x0) {
    (*(code *)local_b8[1])(local_d0[0]);
  }
  FUN_00baa308(param_1 + 0xa2,param_3,param_4,param_1,param_2,param_1 + 0x35,param_1 + 0x43,
               param_1 + 0x59,0);
  FUN_00bb940c(param_1 + 0xb5,param_3,param_4,param_5,param_1,param_1[0x1b]);
  *(undefined1 *)(param_1 + 0xbd) = 0;
  *(undefined1 *)(param_1 + 0xc1) = 0;
  (**(code **)(*param_8 + 0x70))(param_8,*(undefined1 *)((long)param_6 + 1));
  if (*(long *)(lVar7 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00baa1f0  FUN_00baa1f0 =====

undefined8 FUN_00baa1f0(long *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  uVar1 = (**(code **)(*(long *)param_1[0x1d] + 0x38))();
  if (((*(byte *)(param_1 + 0xc1) & 1) == 0) &&
     (uVar2 = (**(code **)(*param_1 + 0x40))(param_1,"t3-rtx expired",0xe), (uVar2 & 1) != 0)) {
    FUN_00bb3bf4(param_1 + 0x59);
    local_30 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    local_38 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00ba4828(&local_50,(int)param_1[0x21],param_1 + 3);
    FUN_00baab74(param_1,&local_50,uVar1);
    if (local_40 != (undefined1 *)0x0) {
      if (local_38 + -1 < local_38 + -(long)local_40) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      local_38 = local_40;
      operator_delete(local_40);
    }
  }
  return 0;
}


// ===== 00baa2d0  FUN_00baa2d0 =====

undefined8 FUN_00baa2d0(long param_1)

{
  FUN_00bbbbdc(param_1 + 0x1a8);
  FUN_00baa53c(param_1);
  return 0;
}


// ===== 00baa308  FUN_00baa308 =====

void FUN_00baa308(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 *local_58 [2];
  code *local_48;
  undefined **local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_6;
  param_1[4] = param_7;
  param_1[5] = param_8;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  local_48 = FUN_00bab410;
  local_40 = &PTR_FUN_00d47880;
  local_58[0] = (undefined8 *)operator_new(0x18);
  puVar4 = PTR_FUN_00d52e68;
  local_58[0][1] = 0;
  local_58[0][2] = param_1;
  *local_58[0] = puVar4;
  local_78 = 1;
  local_80 = 0;
  local_74 = 0;
  local_68 = 0x7fffffffffffffff;
  local_60 = 0;
  uVar7 = FUN_00ba434c(param_5,"re-config",9,local_58,&local_80);
  param_1[8] = uVar7;
  if ((code *)local_40[1] != (code *)0x0) {
    (*(code *)local_40[1])(local_58[0]);
  }
  if (param_9 == 0) {
    uVar5 = (**(code **)(*(long *)param_1[2] + 0x18))();
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined4 *)(param_1 + 9) = uVar5;
    *(undefined1 *)(param_1 + 0x10) = 0;
    iVar6 = (**(code **)(*(long *)param_1[2] + 0x20))((long *)param_1[2]);
    uVar8 = iVar6 - 1;
  }
  else {
    uVar5 = *(undefined4 *)(param_9 + 0x2c);
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 9) = uVar5;
    uVar8 = *(uint *)(param_9 + 0x68);
  }
  if (*(char *)((long)param_1 + 0x3c) == '\x01') {
    uVar1 = uVar8 - *(uint *)(param_1 + 7);
    bVar3 = *(uint *)(param_1 + 7) <= uVar8 && uVar1 != 0;
    if (uVar1 != 0x80000000) {
      bVar3 = uVar1 != 0xffffffff && (int)(uVar1 + 1) < 0 == SCARRY4(uVar1,1);
    }
    uVar9 = (ulong)uVar1;
    if (!bVar3) {
      uVar9 = (ulong)uVar1 | 0xffffffff00000000;
    }
    uVar9 = uVar9 + param_1[6];
  }
  else {
    uVar9 = (ulong)uVar8;
  }
  *(uint *)(param_1 + 7) = uVar8;
  param_1[6] = uVar9;
  *(undefined1 *)((long)param_1 + 0x3c) = 1;
  param_1[0x11] = uVar9;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00baa4ac  FUN_00baa4ac =====

void FUN_00baa4ac(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_00babcec(param_1 + 0x148);
  lVar2 = *(long *)(param_1 + 0x180);
  if (86399999999 < *(long *)(param_1 + 0x180)) {
    lVar2 = 86400000000;
  }
  *(long *)(*(long *)(param_1 + 0xf0) + 0x90) = lVar2;
  lVar2 = (long)*(int *)(param_1 + 0x90) * 1000;
  lVar1 = (long)((double)*(long *)(param_1 + 0x180) * 0.5);
  if (lVar1 <= lVar2) {
    lVar2 = lVar1;
  }
  if (*(int *)(param_1 + 0x90) != 0x7fffffff) {
    lVar1 = lVar2;
  }
  if (86399999999 < lVar1) {
    lVar1 = 86400000000;
  }
  *(long *)(*(long *)(param_1 + 0xf8) + 0x90) = lVar1;
  return;
}


// ===== 00baa53c  FUN_00baa53c =====

void FUN_00baa53c(long *param_1)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  undefined *local_90 [2];
  void *local_80;
  void *local_78;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  
  uVar1 = FUN_00bbbb0c(param_1 + 0x35,0);
  if ((uVar1 & 1) != 0) {
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    local_38 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    local_30 = &DAT_aaaaaaaaaaaaaaaa;
    (**(code **)(*param_1 + 0x58))(&local_50,param_1);
    FUN_00bbb82c(local_90,param_1 + 0x35,param_1[0x46] - param_1[0x57]);
    FUN_00ba4854(&local_50,local_90);
    local_28 = auStack_68;
    local_90[0] = PTR_DAT_00d52e08 + 0x10;
    FUN_00ba1004(&local_28,local_60);
    if (local_80 != (void *)0x0) {
      uVar3 = (ulong)((long)local_78 + (-4 - ((long)local_78 << 0x3e))) >> 2;
      uVar1 = (ulong)(((long)local_80 - (long)local_78 << 0x3e) - ((long)local_80 - (long)local_78))
              >> 2;
      if (uVar3 <= uVar1) {
        uVar1 = uVar3;
      }
      pvVar2 = local_78;
      if ((1 < uVar1) && ((((int)local_80 - (int)local_78 | -(int)local_78) & 3U) == 0)) {
        uVar1 = uVar1 & 0x3ffffffffffffffe;
        pvVar2 = (void *)((long)local_78 + uVar1 * -4);
        do {
          uVar1 = uVar1 - 2;
        } while (uVar1 != 0);
      }
      do {
        if (pvVar2 == local_80) {
          local_78 = local_80;
          operator_delete(local_80);
          goto LAB_00baa660;
        }
        pvVar2 = (void *)((long)pvVar2 + -4);
      } while (pvVar2 != (void *)0x0);
LAB_00baa63c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
LAB_00baa660:
    (**(code **)(*param_1 + 0x60))(param_1,&local_50);
    if (local_40 != (undefined1 *)0x0) {
      if (local_38 + -1 < local_38 + -(long)local_40) goto LAB_00baa63c;
      local_38 = local_40;
      operator_delete(local_40);
    }
  }
  return;
}


// ===== 00baa6b4  FUN_00baa6b4 =====

void FUN_00baa6b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined **local_58 [2];
  void *local_48;
  void *local_40;
  
  if (param_3 < *(long *)(param_1 + 0x140)) {
    return;
  }
  uVar2 = FUN_00bb4248(param_1 + 0x2c8,param_3);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0xe1) == '\x01') {
    FUN_00bb6760(local_58,param_1 + 0x450);
    FUN_00ba4854(param_2,local_58);
    if (local_48 != (void *)0x0) {
      uVar2 = (ulong)(((long)local_48 - (long)local_40) * 0x1555555555555555) >> 2;
      uVar5 = (long)local_40 * -0x1555555555555555 - 4U >> 2;
      if (uVar5 <= uVar2) {
        uVar2 = uVar5;
      }
      if ((1 < uVar2) && ((((int)local_48 - (int)local_40 | -(int)local_40) & 3U) == 0)) {
        uVar2 = uVar2 & 0x3ffffffffffffffe;
        local_40 = (void *)((long)local_40 + uVar2 * -0xc);
        do {
          uVar2 = uVar2 - 2;
        } while (uVar2 != 0);
      }
      do {
        if (local_40 == local_48) goto LAB_00baa858;
        local_40 = (void *)((long)local_40 + -0xc);
      } while (local_40 != (void *)0x0);
LAB_00baa844:
      local_58[0] = &PTR_FUN_00d47598;
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
  else {
    FUN_00bb6368(local_58,param_1 + 0x450);
    FUN_00ba4854(param_2,local_58);
    if (local_48 != (void *)0x0) {
      uVar2 = (ulong)(((long)local_48 - (long)local_40) * 0x1555555555555555) >> 2;
      uVar5 = (long)local_40 * -0x1555555555555555 - 4U >> 2;
      if (uVar5 <= uVar2) {
        uVar2 = uVar5;
      }
      if ((1 < uVar2) && ((((int)local_48 - (int)local_40 | -(int)local_40) & 3U) == 0)) {
        uVar2 = uVar2 & 0x3ffffffffffffffe;
        local_40 = (void *)((long)local_40 + uVar2 * -0xc);
        do {
          uVar2 = uVar2 - 2;
        } while (uVar2 != 0);
      }
      do {
        if (local_40 == local_48) goto LAB_00baa858;
        local_40 = (void *)((long)local_40 + -0xc);
      } while (local_40 != (void *)0x0);
      goto LAB_00baa844;
    }
  }
LAB_00baa868:
  lVar4 = 0x7fffffffffffffff;
  if (param_3 != 0x7fffffffffffffff) {
    lVar3 = *(long *)(param_1 + 0x170);
    lVar1 = lVar3;
    if (199999 < lVar3) {
      lVar1 = 200000;
    }
    lVar4 = -0x8000000000000000;
    if (lVar3 != -0x8000000000000000 && param_3 != -0x8000000000000000) {
      lVar4 = lVar1 + param_3;
    }
  }
  *(long *)(param_1 + 0x140) = lVar4;
  return;
LAB_00baa858:
  local_58[0] = &PTR_FUN_00d47598;
  operator_delete(local_48);
  goto LAB_00baa868;
}


// ===== 00baa8b8  FUN_00baa8b8 =====

void FUN_00baa8b8(long *param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined **local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  void *local_c8;
  void *pvStack_c0;
  undefined8 local_b8;
  undefined2 local_b0;
  undefined1 local_ae;
  undefined1 local_a8;
  undefined4 *local_a0;
  undefined4 *puStack_98;
  undefined1 *local_90;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  
  if (param_1[0x9b] != 0) {
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    local_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00ba4828(&local_80,(int)param_1[0x21],param_1 + 3);
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_98 = (undefined4 *)&DAT_aaaaaaaaaaaaaaaa;
    local_a0 = (undefined4 *)&DAT_aaaaaaaaaaaaaaaa;
    uVar6 = FUN_00ba4994(&local_80);
    FUN_00bb3c24(&local_a0,param_1 + 0x59,uVar6);
    puVar5 = puStack_98;
    puVar4 = PTR_DAT_00d52de0;
    puVar3 = PTR_DAT_00d52db8;
    for (puVar1 = local_a0; puVar1 != puVar5; puVar1 = puVar1 + 0xe) {
      if (*(char *)((long)param_1 + 0xe1) == '\x01') {
        uStack_d0 = *(undefined8 *)(puVar1 + 4);
        local_d8 = *(undefined8 *)(puVar1 + 2);
        local_e0 = *puVar1;
        local_b8 = *(undefined8 *)(puVar1 + 10);
        pvStack_c0 = *(void **)(puVar1 + 8);
        local_c8 = *(void **)(puVar1 + 6);
        local_ae = *(undefined1 *)((long)puVar1 + 0x32);
        local_b0 = *(undefined2 *)(puVar1 + 0xc);
        *(undefined8 *)(puVar1 + 8) = 0;
        *(undefined8 *)(puVar1 + 10) = 0;
        *(undefined8 *)(puVar1 + 6) = 0;
        puVar2 = puVar4;
      }
      else {
        uStack_d0 = *(undefined8 *)(puVar1 + 4);
        local_d8 = *(undefined8 *)(puVar1 + 2);
        local_e0 = *puVar1;
        local_b8 = *(undefined8 *)(puVar1 + 10);
        pvStack_c0 = *(void **)(puVar1 + 8);
        local_c8 = *(void **)(puVar1 + 6);
        local_ae = *(undefined1 *)((long)puVar1 + 0x32);
        local_b0 = *(undefined2 *)(puVar1 + 0xc);
        *(undefined8 *)(puVar1 + 8) = 0;
        *(undefined8 *)(puVar1 + 10) = 0;
        *(undefined8 *)(puVar1 + 6) = 0;
        puVar2 = puVar3;
      }
      local_e8 = (undefined **)(puVar2 + 0x10);
      local_a8 = 0;
      FUN_00ba4854(&local_80,&local_e8);
      local_e8 = &PTR_FUN_00d47568;
      if (local_c8 != (void *)0x0) {
        if ((long)pvStack_c0 - 1U < (ulong)((long)pvStack_c0 - (long)local_c8)) goto LAB_00baaa9c;
        pvStack_c0 = local_c8;
        operator_delete(local_c8);
      }
    }
    (**(code **)(*param_1 + 0x60))(param_1,&local_80);
    FUN_00baaab0(&local_a0);
    if (local_70 != (undefined1 *)0x0) {
      if (local_68 + -1 < local_68 + -(long)local_70) {
LAB_00baaa9c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      local_68 = local_70;
      operator_delete(local_70);
    }
  }
  return;
}


// ===== 00baaab0  FUN_00baaab0 =====

void FUN_00baaab0(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar4 = (void *)*param_1;
  if (pvVar4 == (void *)0x0) {
    return;
  }
  pvVar2 = pvVar4;
  pvVar3 = (void *)param_1[1];
  if (pvVar4 != (void *)param_1[1]) {
    do {
      pvVar2 = (void *)((long)pvVar3 + -0x38);
      if (pvVar2 == (void *)0x0) {
LAB_00baab60:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar1 = *(void **)((long)pvVar3 + -0x20);
      if (pvVar1 != (void *)0x0) {
        if (*(long *)((long)pvVar3 + -0x18) - 1U <
            (ulong)(*(long *)((long)pvVar3 + -0x18) - (long)pvVar1)) goto LAB_00baab60;
        *(void **)((long)pvVar3 + -0x18) = pvVar1;
        operator_delete(pvVar1);
      }
      pvVar3 = pvVar2;
    } while (pvVar2 != pvVar4);
    pvVar2 = (void *)*param_1;
  }
  param_1[1] = pvVar4;
  operator_delete(pvVar2);
  return;
}


// ===== 00baab74  FUN_00baab74 =====

void FUN_00baab74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined4 uVar5;
  undefined1 **ppuVar6;
  undefined8 uVar7;
  byte bVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  undefined1 **ppuVar14;
  undefined **local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined2 local_d8;
  undefined1 local_d6;
  undefined1 local_d0;
  undefined1 **local_c0;
  undefined1 **ppuStack_b8;
  undefined1 *local_b0;
  undefined2 local_88;
  
  if (*(int *)(param_1 + 0xb8) < 1) {
    return;
  }
  ppuVar1 = (undefined **)(PTR_DAT_00d52e08 + 0x10);
  iVar13 = 0;
  ppuVar2 = (undefined **)(PTR_DAT_00d52e00 + 0x10);
  ppuVar3 = (undefined **)(PTR_DAT_00d52de0 + 0x10);
  ppuVar4 = (undefined **)(PTR_DAT_00d52db8 + 0x10);
  do {
    if (iVar13 == 0) {
      if (*(char *)(param_1 + 0x608) == '\x01') {
        FUN_00ba4854(param_2,param_1 + 0x5e8);
      }
      uVar12 = FUN_00bbbb0c(param_1 + 0x1a8,1);
      if ((uVar12 & 1) != 0) {
        FUN_00bbb82c(&local_110,param_1 + 0x1a8,
                     *(long *)(param_1 + 0x230) - *(long *)(param_1 + 0x2b8));
        FUN_00ba4854(param_2,&local_110);
        local_c0 = &puStack_e8;
        local_110 = ppuVar1;
        FUN_00ba1004(&local_c0,local_e0);
        if (local_100 != (undefined1 *)0x0) {
          uVar12 = (ulong)(((long)local_100 - (long)puStack_f8 << 0x3e) -
                          ((long)local_100 - (long)puStack_f8)) >> 2;
          if ((ulong)(puStack_f8 + (-4 - ((long)puStack_f8 << 0x3e))) >> 2 <= uVar12) {
            uVar12 = (ulong)(puStack_f8 + (-4 - ((long)puStack_f8 << 0x3e))) >> 2;
          }
          puVar10 = puStack_f8;
          if ((1 < uVar12) && ((((int)local_100 - (int)puStack_f8 | -(int)puStack_f8) & 3U) == 0)) {
            uVar12 = uVar12 & 0x3ffffffffffffffe;
            puVar10 = puStack_f8 + uVar12 * -4;
            do {
              uVar12 = uVar12 - 2;
            } while (uVar12 != 0);
          }
          while (puVar10 != local_100) {
            puVar10 = puVar10 + -4;
            if (puVar10 == (undefined1 *)0x0) goto LAB_00baaef4;
          }
          puStack_f8 = local_100;
          operator_delete(local_100);
        }
      }
      FUN_00baa6b4(param_1,param_2,param_3);
      local_f0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
      local_110 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
      puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
      local_100 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00bbdf7c(&local_110,param_1 + 0x510);
      if (((((ulong)local_f0 & 1) != 0) &&
          (FUN_00ba4854(param_2,&local_110), ((ulong)local_f0 & 1) != 0)) &&
         (local_110 = ppuVar2, puStack_108 != (undefined1 *)0x0)) {
        if (local_100 + -1 < local_100 + -(long)puStack_108) {
LAB_00baaef4:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        local_100 = puStack_108;
        operator_delete(puStack_108);
      }
    }
    ppuStack_b8 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
    local_c0 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    uVar7 = FUN_00ba4994(param_2);
    FUN_00bb3ea0(&local_c0,param_1 + 0x2c8,param_3,uVar7);
    if (local_c0 != ppuStack_b8) {
      FUN_00bb99ac(param_1 + 0x5a8);
    }
    ppuVar6 = ppuStack_b8;
    if (local_c0 != ppuStack_b8) {
      lVar9 = *(long *)(param_1 + 0xb0);
      lVar11 = *(long *)(param_1 + 0x28);
      uVar12 = *(ulong *)(param_1 + 0x408);
      ppuVar14 = local_c0;
      do {
        if (*(char *)(param_1 + 0xe1) == '\x01') {
          local_e0 = ppuVar14[5];
          puStack_e8 = ppuVar14[4];
          local_f0 = ppuVar14[3];
          local_88 = *(undefined2 *)(ppuVar14 + 6);
          uVar5 = *(undefined4 *)ppuVar14;
          puStack_f8 = ppuVar14[2];
          local_100 = ppuVar14[1];
          local_d6 = *(undefined1 *)((long)ppuVar14 + 0x32);
          ppuVar14[4] = (undefined1 *)0x0;
          ppuVar14[5] = (undefined1 *)0x0;
          ppuVar14[3] = (undefined1 *)0x0;
          local_110 = ppuVar3;
        }
        else {
          local_e0 = ppuVar14[5];
          puStack_e8 = ppuVar14[4];
          local_f0 = ppuVar14[3];
          local_88 = *(undefined2 *)(ppuVar14 + 6);
          uVar5 = *(undefined4 *)ppuVar14;
          puStack_f8 = ppuVar14[2];
          local_100 = ppuVar14[1];
          local_d6 = *(undefined1 *)((long)ppuVar14 + 0x32);
          ppuVar14[4] = (undefined1 *)0x0;
          ppuVar14[5] = (undefined1 *)0x0;
          ppuVar14[3] = (undefined1 *)0x0;
          local_110 = ppuVar4;
        }
        puStack_108 = (undefined1 *)CONCAT44(puStack_108._4_4_,uVar5);
        local_d8 = local_88;
        local_d0 = uVar12 < (ulong)(lVar11 * lVar9);
        FUN_00ba4854(param_2,&local_110);
        local_110 = &PTR_FUN_00d47568;
        if (local_f0 != (undefined1 *)0x0) {
          if (puStack_e8 + -1 < puStack_e8 + -(long)local_f0) goto LAB_00baaef4;
          puStack_e8 = local_f0;
          operator_delete(local_f0);
        }
        ppuVar14 = ppuVar14 + 7;
      } while (ppuVar14 != ppuVar6);
    }
    if ((*(byte *)(param_1 + 0xe3) & 1) == 0) {
      bVar8 = 1;
    }
    else {
      bVar8 = *(byte *)(param_1 + 0x608);
    }
    uVar12 = FUN_00ba4738(*(undefined8 *)(param_1 + 0x138),param_2,bVar8 & 1);
    if ((uVar12 & 1) == 0) {
      FUN_00baaab0(&local_c0);
      return;
    }
    bVar8 = *(byte *)(param_1 + 0x608);
    FUN_00baaab0(&local_c0);
    if ((bVar8 & 1) != 0) {
      return;
    }
    iVar13 = iVar13 + 1;
    if (*(int *)(param_1 + 0xb8) <= iVar13) {
      return;
    }
  } while( true );
}


// ===== 00baaf34  FUN_00baaf34 =====

uint FUN_00baaf34(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FUN_00bbbc6c(param_1 + 0x1a8);
  uVar2 = FUN_00bbe4fc(param_1 + 0x510);
  uVar3 = FUN_00bacbc0(param_1 + 0x218);
  uVar4 = FUN_00bb4324(param_1 + 0x2c8);
  return uVar2 | uVar1 | uVar3 | uVar4;
}


// ===== 00baaf94  FUN_00baaf94 =====

void FUN_00baaf94(long *param_1,long param_2)

{
  undefined4 uVar1;
  
  *(char *)(param_2 + 0x20) = (char)param_1[0x1c];
  *(undefined1 *)(param_2 + 0x21) = *(undefined1 *)((long)param_1 + 0xe1);
  *(undefined1 *)(param_2 + 0x22) = *(undefined1 *)((long)param_1 + 0xe2);
  *(undefined1 *)(param_2 + 0x23) = *(undefined1 *)((long)param_1 + 0xe3);
  *(undefined2 *)(param_2 + 0x24) = *(undefined2 *)((long)param_1 + 0xe4);
  *(undefined2 *)(param_2 + 0x26) = *(undefined2 *)((long)param_1 + 0xe6);
  *(int *)(param_2 + 4) = (int)param_1[0x20];
  *(int *)(param_2 + 0xc) = (int)param_1[0x21];
  uVar1 = (**(code **)(*param_1 + 0x18))();
  *(undefined4 *)(param_2 + 8) = uVar1;
  uVar1 = (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  *(long *)(param_2 + 0x18) = param_1[0x22];
  FUN_00bbbc84(param_1 + 0x35,param_2);
  FUN_00bbe53c(param_1 + 0xa2,param_2);
  FUN_00bacbfc(param_1 + 0x43,param_2);
  FUN_00bb435c(param_1 + 0x59,param_2);
  return;
}


// ===== 00bab054  FUN_00bab054 =====

void FUN_00bab054(long param_1,undefined8 param_2)

{
  FUN_00bbbc9c(param_1 + 0x1a8);
  FUN_00bb43b4(param_1 + 0x2c8,param_2);
  FUN_00bacc10(param_1 + 0x218,param_2);
  return;
}


// ===== 00bab098  FUN_00bab098 =====

void FUN_00bab098(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *local_28;
  
  *param_1 = &PTR_FUN_00d47818;
  if (*(char *)(param_1 + 0xc1) == '\x01') {
    pvVar1 = (void *)param_1[0xbe];
    param_1[0xbd] = &PTR_FUN_00d47bf0;
    if (pvVar1 != (void *)0x0) {
      if (param_1[0xbf] - 1 < (ulong)(param_1[0xbf] - (long)pvVar1)) goto LAB_00bab2a0;
      param_1[0xbf] = pvVar1;
      operator_delete(pvVar1);
    }
  }
  pvVar1 = (void *)param_1[0xbc];
  param_1[0xbc] = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_00ba3e2c(pvVar1);
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0xbb];
  param_1[0xbb] = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_00ba3e2c(pvVar1);
    operator_delete(pvVar1);
  }
  if ((*(char *)(param_1 + 0xb2) == '\x01') &&
     (pvVar1 = (void *)param_1[0xae], pvVar1 != (void *)0x0)) {
    pvVar2 = (void *)param_1[0xaf];
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
    do {
      if (pvVar2 == pvVar1) {
        param_1[0xaf] = pvVar1;
        operator_delete(pvVar1);
        goto LAB_00bab1c8;
      }
      pvVar2 = (void *)((long)pvVar2 + -2);
    } while (pvVar2 != (void *)0x0);
  }
  else {
LAB_00bab1c8:
    pvVar1 = (void *)param_1[0xaa];
    param_1[0xaa] = 0;
    if (pvVar1 != (void *)0x0) {
      FUN_00ba3e2c(pvVar1);
      operator_delete(pvVar1);
    }
    FUN_00bab668(param_1 + 0x8a);
    if (*(code **)(param_1[0x7d] + 8) != (code *)0x0) {
      (**(code **)(param_1[0x7d] + 8))(param_1[0x7a]);
    }
    if (*(code **)(param_1[0x79] + 8) != (code *)0x0) {
      (**(code **)(param_1[0x79] + 8))(param_1[0x76]);
    }
    FUN_00bab484(param_1 + 0x43);
    local_28 = param_1 + 0x40;
    FUN_00ba1004(&local_28,param_1[0x41]);
    pvVar1 = (void *)param_1[0x3d];
    if (pvVar1 == (void *)0x0) {
LAB_00bab2c4:
      if (*(code **)(param_1[0x26] + 8) != (code *)0x0) {
        (**(code **)(param_1[0x26] + 8))(param_1[0x23]);
      }
      pvVar1 = (void *)param_1[0x1f];
      param_1[0x1f] = 0;
      if (pvVar1 != (void *)0x0) {
        FUN_00ba3e2c(pvVar1);
        operator_delete(pvVar1);
      }
      pvVar1 = (void *)param_1[0x1e];
      param_1[0x1e] = 0;
      if (pvVar1 != (void *)0x0) {
        FUN_00ba3e2c(pvVar1);
        operator_delete(pvVar1);
      }
      return;
    }
    pvVar2 = (void *)param_1[0x3e];
    uVar4 = (ulong)((long)pvVar2 + (-0x10 - ((long)pvVar2 << 0x3c))) >> 4;
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3c) - ((long)pvVar1 - (long)pvVar2)) >> 4;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 0xfU) == 0)) {
      uVar3 = uVar3 & 0xffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x10);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    do {
      if (pvVar2 == pvVar1) {
        param_1[0x3e] = pvVar1;
        operator_delete(pvVar1);
        goto LAB_00bab2c4;
      }
      pvVar2 = (void *)((long)pvVar2 + -0x10);
    } while (pvVar2 != (void *)0x0);
  }
LAB_00bab2a0:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00bab32c  FUN_00bab32c =====

void FUN_00bab32c(void *param_1)

{
  FUN_00bab098();
  operator_delete(param_1);
  return;
}


// ===== 00bab35c  FUN_00bab35c =====

void FUN_00bab35c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bab368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x128))(param_1 + 0x118);
  return;
}


// ===== 00bab36c  FUN_00bab36c =====

undefined4 FUN_00bab36c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x104);
}


// ===== 00bab378  FUN_00bab378 =====

undefined4 FUN_00bab378(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10c);
}


// ===== 00bab384  FUN_00bab384 =====

undefined8 FUN_00bab384(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}


// ===== 00bab390  FUN_00bab390 =====

undefined8 FUN_00bab390(long param_1)

{
  return *(undefined8 *)(param_1 + 0x180);
}


// ===== 00bab39c  FUN_00bab39c =====

void FUN_00bab39c(long param_1)

{
  FUN_00bc0df0(param_1 + 0x188);
  return;
}


// ===== 00bab3a8  FUN_00bab3a8 =====

void FUN_00bab3a8(long param_1)

{
  FUN_00bc0e28(param_1 + 0x188);
  return;
}


// ===== 00bab3b4  FUN_00bab3b4 =====

bool FUN_00bab3b4(long param_1)

{
  if (*(char *)(param_1 + 0x19c) == '\x01') {
    return *(int *)(param_1 + 0x198) < *(int *)(param_1 + 0x1a0);
  }
  return false;
}


// ===== 00bab3e0  FUN_00bab3e0 =====

void FUN_00bab3e0(undefined8 param_1,long param_2)

{
  FUN_00ba4828(param_1,*(undefined4 *)(param_2 + 0x108),param_2 + 0x18);
  return;
}


// ===== 00bab3f4  FUN_00bab3f4 =====

void FUN_00bab3f4(long param_1,undefined8 param_2)

{
  FUN_00ba4738(*(undefined8 *)(param_1 + 0x138),param_2,(*(byte *)(param_1 + 0xe3) ^ 0xff) & 1);
  return;
}


// ===== 00bab410  FUN_00bab410 =====

void FUN_00bab410(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1 = (long *)*param_1;
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  if ((param_1[1] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(param_1[2] + (param_1[1] >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x00bab430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ===== 00bab434  FUN_00bab434 =====

void FUN_00bab434(undefined8 *param_1)

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


// ===== 00bab470  FUN_00bab470 =====

void FUN_00bab470(void *param_1)

{
  if (param_1 != (void *)0x0) {
    operator_delete(param_1);
    return;
  }
  return;
}


// ===== 00bab484  FUN_00bab484 =====

void FUN_00bab484(long param_1)

{
  long *plVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined8 *puVar9;
  
  plVar1 = *(long **)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (*(char *)(param_1 + 0x98) == '\x01') {
    pvVar8 = *(void **)(param_1 + 0x80);
    if (pvVar8 != (void *)0x0) {
      pvVar2 = pvVar8;
      pvVar3 = *(void **)(param_1 + 0x88);
      if (pvVar8 != *(void **)(param_1 + 0x88)) {
        do {
          pvVar2 = (void *)((long)pvVar3 + -0x20);
          if (pvVar2 == (void *)0x0) goto LAB_00bab618;
          (**(code **)((long)pvVar3 + -0x10))(0,pvVar2,pvVar2);
          pvVar3 = pvVar2;
        } while (pvVar2 != pvVar8);
        pvVar2 = *(void **)(param_1 + 0x80);
      }
      *(void **)(param_1 + 0x88) = pvVar8;
      operator_delete(pvVar2);
    }
    pvVar8 = *(void **)(param_1 + 0x68);
    if (pvVar8 != (void *)0x0) {
      pvVar2 = *(void **)(param_1 + 0x70);
      uVar5 = (ulong)((long)pvVar2 + ((long)pvVar2 << 0x3f) + -2) >> 1;
      uVar4 = (ulong)(((long)pvVar8 - (long)pvVar2 << 0x3f) - ((long)pvVar8 - (long)pvVar2)) >> 1;
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
      if ((1 < uVar4) && ((((int)pvVar8 - (uint)pvVar2 | (uint)pvVar2) & 1) == 0)) {
        uVar4 = uVar4 & 0x7ffffffffffffffe;
        pvVar2 = (void *)((long)pvVar2 + uVar4 * -2);
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      do {
        if (pvVar2 == pvVar8) {
          *(void **)(param_1 + 0x70) = pvVar8;
          operator_delete(pvVar8);
          goto LAB_00bab58c;
        }
        pvVar2 = (void *)((long)pvVar2 + -2);
      } while (pvVar2 != (void *)0x0);
      goto LAB_00bab618;
    }
  }
LAB_00bab58c:
  FUN_00bab9fc(param_1 + 0x30);
  puVar7 = *(undefined8 **)(param_1 + 0x38);
  puVar9 = *(undefined8 **)(param_1 + 0x40);
  if (puVar7 != puVar9) {
    do {
      puVar6 = puVar7 + 1;
      operator_delete((void *)*puVar7);
      puVar7 = puVar6;
    } while (puVar6 != puVar9);
    puVar7 = *(undefined8 **)(param_1 + 0x38);
    puVar9 = *(undefined8 **)(param_1 + 0x40);
  }
  uVar5 = (ulong)((long)puVar9 + (-8 - ((long)puVar9 << 0x3d))) >> 3;
  uVar4 = (ulong)(((long)puVar7 - (long)puVar9 << 0x3d) - ((long)puVar7 - (long)puVar9)) >> 3;
  if (uVar5 <= uVar4) {
    uVar4 = uVar5;
  }
  if ((1 < uVar4) && ((((int)puVar7 - (int)puVar9 | -(int)puVar9) & 7U) == 0)) {
    uVar4 = uVar4 & 0x1ffffffffffffffe;
    puVar9 = puVar9 + -uVar4;
    do {
      uVar4 = uVar4 - 2;
    } while (uVar4 != 0);
  }
  do {
    if (puVar9 == puVar7) {
      *(undefined8 **)(param_1 + 0x40) = puVar9;
      if (*(void **)(param_1 + 0x30) == (void *)0x0) {
        return;
      }
      operator_delete(*(void **)(param_1 + 0x30));
      return;
    }
    puVar9 = puVar9 + -1;
  } while (puVar9 != (undefined8 *)0x0);
LAB_00bab618:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00bab668  FUN_00bab668 =====

void FUN_00bab668(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long local_18;
  
  pvVar1 = *(void **)(param_1 + 0xa8);
  if (pvVar1 == (void *)0x0) {
LAB_00bab700:
    local_18 = param_1 + 0x90;
    FUN_00bab808(&local_18,*(undefined8 *)(param_1 + 0x98));
    local_18 = param_1 + 0x78;
    FUN_00bab808(&local_18,*(undefined8 *)(param_1 + 0x80));
    FUN_00bab87c(param_1 + 0x30);
    puVar7 = *(undefined8 **)(param_1 + 0x38);
    puVar8 = *(undefined8 **)(param_1 + 0x40);
    if (puVar7 != puVar8) {
      do {
        puVar6 = puVar7 + 1;
        operator_delete((void *)*puVar7);
        puVar7 = puVar6;
      } while (puVar6 != puVar8);
      puVar7 = *(undefined8 **)(param_1 + 0x38);
      puVar8 = *(undefined8 **)(param_1 + 0x40);
    }
    uVar5 = (ulong)((long)puVar8 + (-8 - ((long)puVar8 << 0x3d))) >> 3;
    uVar4 = (ulong)(((long)puVar7 - (long)puVar8 << 0x3d) - ((long)puVar7 - (long)puVar8)) >> 3;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)puVar7 - (int)puVar8 | -(int)puVar8) & 7U) == 0)) {
      uVar4 = uVar4 & 0x1ffffffffffffffe;
      puVar8 = puVar8 + -uVar4;
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (puVar8 == puVar7) {
        *(undefined8 **)(param_1 + 0x40) = puVar8;
        if (*(void **)(param_1 + 0x30) != (void *)0x0) {
          operator_delete(*(void **)(param_1 + 0x30));
        }
        pcVar3 = *(code **)(*(long *)(param_1 + 0x28) + 8);
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(*(undefined8 *)(param_1 + 0x10));
        }
        return;
      }
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined8 *)0x0);
  }
  else {
    pvVar2 = *(void **)(param_1 + 0xb0);
    uVar5 = (ulong)((long)pvVar2 + (-8 - ((long)pvVar2 << 0x3d))) >> 3;
    uVar4 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3d) - ((long)pvVar1 - (long)pvVar2)) >> 3;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 7U) == 0)) {
      uVar4 = uVar4 & 0x1ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar4 * -8);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (pvVar2 == pvVar1) {
        *(void **)(param_1 + 0xb0) = pvVar1;
        operator_delete(pvVar1);
        goto LAB_00bab700;
      }
      pvVar2 = (void *)((long)pvVar2 + -8);
    } while (pvVar2 != (void *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00bab808  FUN_00bab808 =====

void FUN_00bab808(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00bab808(param_1,*param_2);
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


// ===== 00bab87c  FUN_00bab87c =====

void FUN_00bab87c(long param_1)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if (puVar3 != puVar5) {
    uVar6 = *(ulong *)(param_1 + 0x20);
    uVar1 = *(long *)(param_1 + 0x28) + uVar6;
    plVar7 = puVar3 + uVar6 / 0x2e;
    lVar9 = *plVar7 + (uVar6 % 0x2e) * 0x58;
    lVar8 = puVar3[uVar1 / 0x2e] + (uVar1 % 0x2e) * 0x58;
    if (lVar9 != lVar8) {
      do {
        if (lVar9 == 0) {
LAB_00bab9e8:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        pvVar2 = *(void **)(lVar9 + 0x38);
        if (pvVar2 != (void *)0x0) {
          if (*(long *)(lVar9 + 0x40) - 1U < (ulong)(*(long *)(lVar9 + 0x40) - (long)pvVar2))
          goto LAB_00bab9e8;
          *(void **)(lVar9 + 0x40) = pvVar2;
          operator_delete(pvVar2);
        }
        lVar9 = lVar9 + 0x58;
        if (lVar9 - *plVar7 == 0xfd0) {
          plVar7 = plVar7 + 1;
          lVar9 = *plVar7;
        }
      } while (lVar9 != lVar8);
      puVar3 = *(undefined8 **)(param_1 + 8);
      puVar5 = *(undefined8 **)(param_1 + 0x10);
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  lVar9 = (long)puVar5 - (long)puVar3;
  while (uVar1 = lVar9 >> 3, 2 < uVar1) {
    operator_delete((void *)*puVar3);
    puVar3 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar3;
    lVar9 = *(long *)(param_1 + 0x10) - (long)puVar3;
  }
  if (uVar1 == 1) {
    uVar4 = 0x17;
  }
  else {
    if (uVar1 != 2) {
      return;
    }
    uVar4 = 0x2e;
  }
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  return;
}


// ===== 00bab9fc  FUN_00bab9fc =====

void FUN_00bab9fc(long param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar7;
  
  puVar4 = *(undefined8 **)(param_1 + 8);
  puVar7 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 != puVar7) {
    uVar8 = *(ulong *)(param_1 + 0x20);
    uVar1 = *(long *)(param_1 + 0x28) + uVar8;
    plVar9 = puVar4 + (uVar8 >> 7);
    lVar6 = *plVar9 + (uVar8 & 0x7f) * 0x20;
    lVar2 = puVar4[uVar1 >> 7] + (uVar1 & 0x7f) * 0x20;
    if (lVar6 != lVar2) {
      do {
        if (lVar6 == 0) {
LAB_00babb38:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        pvVar3 = *(void **)(lVar6 + 8);
        if (pvVar3 != (void *)0x0) {
          if (*(long *)(lVar6 + 0x10) - 1U < (ulong)(*(long *)(lVar6 + 0x10) - (long)pvVar3))
          goto LAB_00babb38;
          *(void **)(lVar6 + 0x10) = pvVar3;
          operator_delete(pvVar3);
        }
        lVar6 = lVar6 + 0x20;
        if (lVar6 - *plVar9 == 0x1000) {
          plVar9 = plVar9 + 1;
          lVar6 = *plVar9;
        }
      } while (lVar6 != lVar2);
      puVar4 = *(undefined8 **)(param_1 + 8);
      puVar7 = *(undefined8 **)(param_1 + 0x10);
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  lVar6 = (long)puVar7 - (long)puVar4;
  while (uVar1 = lVar6 >> 3, 2 < uVar1) {
    operator_delete((void *)*puVar4);
    puVar4 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar4;
    lVar6 = *(long *)(param_1 + 0x10) - (long)puVar4;
  }
  if (uVar1 == 1) {
    uVar5 = 0x40;
  }
  else {
    if (uVar1 != 2) {
      return;
    }
    uVar5 = 0x80;
  }
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  return;
}


// ===== 00babb4c  FUN_00babb4c =====

void FUN_00babb4c(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1 = (long *)*param_1;
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  if ((param_1[1] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(param_1[2] + (param_1[1] >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x00babb6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ===== 00babb70  FUN_00babb70 =====

void FUN_00babb70(undefined8 *param_1)

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


// ===== 00babbac  FUN_00babbac =====

void FUN_00babbac(void *param_1)

{
  if (param_1 != (void *)0x0) {
    operator_delete(param_1);
    return;
  }
  return;
}


// ===== 00babbc0  FUN_00babbc0 =====

void FUN_00babbc0(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  param_1 = (long *)*param_1;
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar1 = (long *)(param_1[2] + (param_1[1] >> 1));
  if ((param_1[1] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00babbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*param_2);
  return;
}


// ===== 00babbe8  FUN_00babbe8 =====

void FUN_00babbe8(undefined8 *param_1)

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


// ===== 00babc24  FUN_00babc24 =====

void FUN_00babc24(void *param_1)

{
  if (param_1 != (void *)0x0) {
    operator_delete(param_1);
    return;
  }
  return;
}


// ===== 00babc38  FUN_00babc38 =====

void FUN_00babc38(long *param_1)

{
  FUN_00bc0e28(*param_1 + 0x188);
  return;
}


// ===== 00babc48  FUN_00babc48 =====

void FUN_00babc48(long *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  double dVar3;
  
  lVar1 = 0x7fffffffffffffff;
  if (*(int *)(param_2 + 0x5c) != 0x7fffffff) {
    lVar1 = (long)*(int *)(param_2 + 0x5c) * 1000;
  }
  *param_1 = lVar1;
  lVar1 = 0x7fffffffffffffff;
  if (*(int *)(param_2 + 0x58) != 0x7fffffff) {
    lVar1 = (long)*(int *)(param_2 + 0x58) * 1000;
  }
  param_1[1] = lVar1;
  lVar1 = 0x7fffffffffffffff;
  if (*(int *)(param_2 + 0x50) != 0x7fffffff) {
    lVar1 = (long)*(int *)(param_2 + 0x50) * 1000;
  }
  param_1[2] = lVar1;
  iVar2 = *(int *)(param_2 + 0x7c);
  *(undefined1 *)(param_1 + 4) = 1;
  dVar3 = 1.152921504606847e+18;
  if (iVar2 != 0x7fffffff) {
    dVar3 = (double)((long)iVar2 * 1000) / 8.0;
  }
  param_1[3] = (long)dVar3;
  lVar1 = 0x7fffffffffffffff;
  if (*(int *)(param_2 + 0x54) != 0x7fffffff) {
    lVar1 = (long)*(int *)(param_2 + 0x54) * 1000;
  }
  param_1[5] = lVar1;
  param_1[6] = 0;
  lVar1 = 0x7fffffffffffffff;
  if (*(int *)(param_2 + 0x54) != 0x7fffffff) {
    lVar1 = (long)*(int *)(param_2 + 0x54) * 1000;
  }
  param_1[7] = lVar1;
  return;
}


// ===== 00babcec  FUN_00babcec =====

void FUN_00babcec(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  
  if ((-1 < (long)param_2) && ((long)param_2 <= param_1[2])) {
    if ((char)param_1[4] == '\x01') {
      uVar3 = param_2 >> 1;
      *(undefined1 *)(param_1 + 4) = 0;
      param_1[5] = param_2;
      param_1[6] = uVar3;
    }
    else {
      lVar4 = param_1[5];
      if (lVar4 == 0x7fffffffffffffff) {
        dVar8 = 2.305843009213694e+18;
      }
      else {
        lVar6 = lVar4 - param_2;
        lVar7 = -lVar6;
        if (-1 < lVar6) {
          lVar7 = lVar6;
        }
        dVar8 = -2.305843009213694e+18;
        if (lVar4 != -0x8000000000000000 && param_2 != 0x7fffffffffffffff) {
          dVar8 = (double)lVar7 / 4.0;
        }
      }
      lVar6 = (long)dVar8;
      lVar7 = (long)((double)param_1[6] * 0.75);
      uVar3 = 0x7fffffffffffffff;
      if (lVar7 != 0x7fffffffffffffff && lVar6 != 0x7fffffffffffffff) {
        uVar3 = 0x8000000000000000;
        if (lVar6 != -0x8000000000000000 && lVar7 != -0x8000000000000000) {
          uVar3 = lVar7 + lVar6;
        }
      }
      param_1[6] = uVar3;
      lVar4 = (long)((double)lVar4 * 0.875);
      lVar7 = (long)((double)param_2 / 8.0);
      param_2 = 0x7fffffffffffffff;
      if (lVar4 != 0x7fffffffffffffff && lVar7 != 0x7fffffffffffffff) {
        param_2 = 0x8000000000000000;
        if (lVar7 != -0x8000000000000000 && lVar4 != -0x8000000000000000) {
          param_2 = lVar4 + lVar7;
        }
      }
      param_1[5] = param_2;
    }
    uVar5 = param_1[3];
    if ((long)uVar3 < (long)uVar5) {
      param_1[6] = uVar5;
      uVar3 = uVar5;
    }
    lVar4 = 0x7fffffffffffffff;
    if (param_2 != 0x7fffffffffffffff) {
      lVar4 = -0x8000000000000000;
      if (uVar3 * 4 != -0x8000000000000000 && param_2 != 0x8000000000000000) {
        lVar4 = uVar3 * 4 + param_2;
      }
    }
    lVar7 = param_1[1];
    param_1[7] = lVar4;
    if (lVar7 < *param_1) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__algorithm/clamp.h:29: libc++ Hardening assertion !__comp(__hi, __lo) failed: Bad bounds passed to std::clamp\n"
                );
    }
    plVar1 = param_1 + 1;
    if (lVar4 <= lVar7) {
      plVar1 = param_1 + 7;
    }
    plVar2 = param_1;
    if (*param_1 <= lVar4) {
      plVar2 = plVar1;
    }
    param_1[7] = *plVar2;
  }
  return;
}


// ===== 00babe68  FUN_00babe68 =====

void FUN_00babe68(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                 uint param_5)

{
  long lVar1;
  void *pvVar2;
  undefined8 *local_68 [2];
  code *local_58;
  undefined *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[2] = param_4;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[3] = (long)((float)param_4 * 0.9);
  param_1[4] = 0;
  local_68[0] = param_1;
  if ((param_5 & 1) == 0) {
    pvVar2 = operator_new(0x68);
    local_58 = FUN_00bad458;
    local_50 = &DAT_00257de8;
    FUN_00bb1610(pvVar2,param_2,param_3,local_68);
  }
  else {
    pvVar2 = operator_new(0x50);
    local_58 = FUN_00bad458;
    local_50 = &DAT_00257de8;
    FUN_00baf6dc(pvVar2,param_2,param_3,local_68);
  }
  if (*(code **)(local_50 + 8) != (code *)0x0) {
    (**(code **)(local_50 + 8))(local_68[0]);
  }
  param_1[0x15] = pvVar2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00babf98  FUN_00babf98 =====

void FUN_00babf98(long param_1,uint param_2,ushort *param_3)

{
  undefined8 *puVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ushort *puVar10;
  ushort *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 local_80;
  undefined8 uStack_78;
  void *local_70;
  void *local_68;
  undefined8 local_60;
  ushort local_58;
  undefined1 local_56;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  
  if (*(char *)(param_1 + 0x2c) == '\x01') {
    uVar3 = param_2 - *(uint *)(param_1 + 0x28);
    bVar4 = *(uint *)(param_1 + 0x28) <= param_2 && uVar3 != 0;
    if (uVar3 != 0x80000000) {
      bVar4 = uVar3 != 0xffffffff && (int)(uVar3 + 1) < 0 == SCARRY4(uVar3,1);
    }
    uVar9 = (ulong)uVar3;
    if (!bVar4) {
      uVar9 = (ulong)uVar3 | 0xffffffff00000000;
    }
    uVar9 = uVar9 + *(long *)(param_1 + 0x20);
  }
  else {
    uVar9 = (ulong)param_2;
  }
  *(ulong *)(param_1 + 0x20) = uVar9;
  *(uint *)(param_1 + 0x28) = param_2;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  if ((*(char *)(param_1 + 0x98) == '\x01') && (*(long *)(param_1 + 0x60) < (long)uVar9)) {
    puVar11 = *(ushort **)(param_1 + 0x68);
    lVar14 = (long)*(ushort **)(param_1 + 0x70) - (long)puVar11;
    if (lVar14 != 0) {
      uVar12 = lVar14 >> 1;
      puVar10 = puVar11;
      do {
        uVar13 = uVar12 >> 1;
        puVar11 = puVar10 + uVar13 + 1;
        uVar12 = uVar12 + ~uVar13;
        if (*param_3 <= puVar10[uVar13]) {
          puVar11 = puVar10;
          uVar12 = uVar13;
        }
        puVar10 = puVar11;
      } while (uVar12 != 0);
    }
    if ((puVar11 != *(ushort **)(param_1 + 0x70)) && (*puVar11 <= *param_3)) {
      *(long *)(param_1 + 0xa0) =
           (*(long *)(param_3 + 0xc) - *(long *)(param_3 + 8)) + *(long *)(param_1 + 0xa0);
      lVar16 = *(long *)(param_3 + 0xc);
      lVar15 = *(long *)(param_3 + 8);
      lVar14 = *(long *)(param_3 + 0x10);
      param_3[8] = 0;
      param_3[9] = 0;
      param_3[10] = 0;
      param_3[0xb] = 0;
      param_3[0xc] = 0;
      param_3[0xd] = 0;
      param_3[0xe] = 0;
      param_3[0xf] = 0;
      param_3[0x10] = 0;
      param_3[0x11] = 0;
      param_3[0x12] = 0;
      param_3[0x13] = 0;
      local_50[0] = (long *)operator_new(0x40);
      uVar2 = param_3[0x14];
      uVar5 = param_3[0x15];
      lVar18 = *(long *)(param_3 + 4);
      lVar17 = *(long *)param_3;
      *local_50[0] = param_1;
      *(ushort *)(local_50[0] + 7) = uVar2;
      puVar8 = *(undefined8 **)(param_1 + 0x88);
      puVar1 = *(undefined8 **)(param_1 + 0x90);
      *(char *)((long)local_50[0] + 0x3a) = (char)uVar5;
      *(uint *)(local_50[0] + 1) = param_2;
      local_50[0][3] = lVar18;
      local_50[0][2] = lVar17;
      local_50[0][5] = lVar16;
      local_50[0][4] = lVar15;
      local_50[0][6] = lVar14;
      local_40 = FUN_00bad5ac;
      pcStack_38 = FUN_00bad4f4;
      if (puVar8 < puVar1) {
        if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar8[2] = FUN_00bad5ac;
        puVar8[3] = FUN_00bad4f4;
        *puVar8 = local_50[0];
        puVar8 = puVar8 + 4;
        local_40 = FUN_00433984;
        pcStack_38 = (code *)0x0;
      }
      else {
        puVar8 = (undefined8 *)FUN_00bacc24(param_1 + 0x80,local_50);
      }
      *(undefined8 **)(param_1 + 0x88) = puVar8;
      (*local_40)(0,local_50,local_50);
      return;
    }
  }
  local_60 = *(undefined8 *)(param_3 + 0x10);
  uStack_78 = *(undefined8 *)(param_3 + 4);
  local_80 = *(undefined8 *)param_3;
  local_68 = *(void **)(param_3 + 0xc);
  local_70 = *(void **)(param_3 + 8);
  local_56 = (undefined1)param_3[0x15];
  plVar7 = *(long **)(param_1 + 0xa8);
  local_58 = param_3[0x14];
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  param_3[0xe] = 0;
  param_3[0xf] = 0;
  param_3[0x10] = 0;
  param_3[0x11] = 0;
  param_3[0x12] = 0;
  param_3[0x13] = 0;
  iVar6 = (**(code **)(*plVar7 + 0x10))(plVar7,uVar9,&local_80);
  *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + (long)iVar6;
  if (local_70 != (void *)0x0) {
    if ((long)local_68 - 1U < (ulong)((long)local_68 - (long)local_70)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    local_68 = local_70;
    operator_delete(local_70);
  }
  return;
}


// ===== 00bac1f4  FUN_00bac1f4 =====

void FUN_00bac1f4(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  (**(code **)(**(long **)(param_1 + 0xa8) + 0x20))();
  if (*(char *)(param_1 + 0x98) == '\x01') {
    pvVar3 = *(void **)(param_1 + 0x88);
    pvVar1 = *(void **)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    FUN_00baced0(param_1 + 0x60);
    pvVar2 = pvVar1;
    if (pvVar1 == pvVar3) {
      if (pvVar1 != (void *)0x0) goto LAB_00bac298;
    }
    else {
      do {
        (**(code **)((long)pvVar2 + 0x18))(pvVar2);
        pvVar2 = (void *)((long)pvVar2 + 0x20);
      } while (pvVar2 != pvVar3);
      if (pvVar1 != (void *)0x0) {
        do {
          pvVar2 = (void *)((long)pvVar3 + -0x20);
          if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          (**(code **)((long)pvVar3 + -0x10))(0,pvVar2,pvVar2);
          pvVar3 = pvVar2;
        } while (pvVar2 != pvVar1);
LAB_00bac298:
        operator_delete(pvVar1);
        return;
      }
    }
  }
  return;
}


// ===== 00bac2dc  FUN_00bac2dc =====

void FUN_00bac2dc(long param_1,uint param_2,undefined2 *param_3,long param_4)

{
  ulong uVar1;
  void *pvVar2;
  uint uVar3;
  undefined8 *puVar4;
  bool bVar5;
  void *pvVar6;
  void *pvVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined2 *local_98;
  undefined2 *local_90;
  undefined2 *local_88;
  ulong local_80;
  undefined2 *local_78;
  undefined2 *local_70;
  undefined2 *local_68;
  void *local_60;
  void *local_58;
  undefined8 local_50;
  char local_48;
  
  if ((*(byte *)(param_1 + 0x98) & 1) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x2c) == '\x01') {
    uVar3 = param_2 - *(uint *)(param_1 + 0x28);
    bVar5 = *(uint *)(param_1 + 0x28) <= param_2 && uVar3 != 0;
    if (uVar3 != 0x80000000) {
      bVar5 = uVar3 != 0xffffffff && (int)(uVar3 + 1) < 0 == SCARRY4(uVar3,1);
    }
    uVar11 = (ulong)uVar3;
    if (!bVar5) {
      uVar11 = (ulong)uVar3 | 0xffffffff00000000;
    }
    uVar11 = uVar11 + *(long *)(param_1 + 0x20);
  }
  else {
    uVar11 = (ulong)param_2;
  }
  uVar16 = param_4 * 2;
  *(ulong *)(param_1 + 0x20) = uVar11;
  *(uint *)(param_1 + 0x28) = param_2;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  local_98 = (undefined2 *)0x0;
  local_90 = (undefined2 *)0x0;
  local_88 = (undefined2 *)0x0;
  if (uVar16 != 0) {
    if ((long)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00ba3880();
    }
    local_98 = (undefined2 *)operator_new(uVar16);
    uVar13 = uVar16 - 2 >> 1;
    uVar16 = uVar13;
    if ((ulong)-(long)local_98 >> 1 <= uVar13) {
      uVar16 = (ulong)-(long)local_98 >> 1;
    }
    local_88 = local_98 + param_4;
    puVar8 = param_3;
    puVar10 = local_98;
    if (0x27 < uVar16) {
      if ((ulong)-(long)local_98 >> 1 <= uVar13) {
        uVar13 = (ulong)-(long)local_98 >> 1;
      }
      if ((((local_98 <= local_98 + uVar13) && (((ulong)local_98 & 1) == 0)) &&
          (param_3 <= param_3 + uVar13)) && (0x1f < (ulong)((long)local_98 - (long)param_3))) {
        puVar14 = (undefined8 *)(local_98 + 8);
        uVar13 = uVar16 + 1 & 0xf;
        puVar15 = (undefined8 *)(param_3 + 8);
        uVar1 = 0x10;
        if (uVar13 != 0) {
          uVar1 = uVar13;
        }
        lVar12 = (uVar16 + 1) - uVar1;
        puVar8 = param_3 + lVar12;
        puVar10 = local_98 + lVar12;
        do {
          puVar4 = puVar15 + -1;
          uVar17 = puVar15[-2];
          uVar19 = puVar15[1];
          uVar18 = *puVar15;
          lVar12 = lVar12 + -0x10;
          puVar15 = puVar15 + 4;
          puVar14[-1] = *puVar4;
          puVar14[-2] = uVar17;
          puVar14[1] = uVar19;
          *puVar14 = uVar18;
          puVar14 = puVar14 + 4;
        } while (lVar12 != 0);
      }
    }
    lVar12 = (long)local_98 - (long)puVar10;
    do {
      if (puVar10 == (undefined2 *)0x0) goto LAB_00bac684;
      puVar9 = puVar8 + 1;
      lVar12 = lVar12 + -2;
      *puVar10 = *puVar8;
      puVar8 = puVar9;
      puVar10 = puVar10 + 1;
    } while (puVar9 != param_3 + param_4);
    local_90 = (undefined2 *)((long)local_98 - lVar12);
  }
  FUN_00bad64c(&local_98,local_98,local_90);
  local_68 = local_88;
  local_70 = local_90;
  local_78 = local_98;
  local_90 = (undefined2 *)0x0;
  local_88 = (undefined2 *)0x0;
  local_98 = (undefined2 *)0x0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = '\x01';
  local_60 = (void *)0x0;
  local_80 = uVar11;
  if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
    if (param_1 + 0x60 == 0) {
LAB_00bac684:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(ulong *)(param_1 + 0x60) = uVar11;
    *(undefined2 **)(param_1 + 0x68) = local_78;
    *(undefined2 **)(param_1 + 0x70) = local_70;
    *(undefined2 **)(param_1 + 0x78) = local_68;
    local_78 = (undefined2 *)0x0;
    local_70 = (undefined2 *)0x0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    local_68 = (undefined2 *)0x0;
    local_60 = (void *)0x0;
    local_58 = (void *)0x0;
    local_50 = 0;
    *(undefined1 *)(param_1 + 0x98) = 1;
joined_r0x00bac5e0:
    if (local_78 != (undefined2 *)0x0) {
      uVar16 = (ulong)((long)local_70 + ((long)local_70 << 0x3f) + -2) >> 1;
      uVar11 = (ulong)(((long)local_78 - (long)local_70 << 0x3f) - ((long)local_78 - (long)local_70)
                      ) >> 1;
      if (uVar16 <= uVar11) {
        uVar11 = uVar16;
      }
      puVar8 = local_70;
      if ((1 < uVar11) && ((((int)local_78 - (uint)local_70 | (uint)local_70) & 1) == 0)) {
        uVar11 = uVar11 & 0x7ffffffffffffffe;
        puVar8 = local_70 + -uVar11;
        do {
          uVar11 = uVar11 - 2;
        } while (uVar11 != 0);
      }
      do {
        if (puVar8 == local_78) {
          local_70 = local_78;
          operator_delete(local_78);
          goto joined_r0x00bac668;
        }
        puVar8 = puVar8 + -1;
      } while (puVar8 != (undefined2 *)0x0);
      goto LAB_00bac640;
    }
  }
  else {
    FUN_00bacfe8(param_1 + 0x60,&local_80);
    pvVar7 = local_60;
    if (local_48 == '\x01') {
      pvVar6 = local_58;
      if (local_60 != (void *)0x0) {
        while (pvVar7 != pvVar6) {
          pvVar2 = (void *)((long)pvVar6 + -0x20);
          if (pvVar2 == (void *)0x0) goto LAB_00bac640;
          (**(code **)((long)pvVar6 + -0x10))(0,pvVar2,pvVar2);
          pvVar6 = pvVar2;
        }
        local_58 = pvVar7;
        operator_delete(local_60);
      }
      goto joined_r0x00bac5e0;
    }
  }
joined_r0x00bac668:
  if (local_98 == (undefined2 *)0x0) {
    return;
  }
  uVar16 = (ulong)((long)local_90 + ((long)local_90 << 0x3f) + -2) >> 1;
  uVar11 = (ulong)(((long)local_98 - (long)local_90 << 0x3f) - ((long)local_98 - (long)local_90)) >>
           1;
  if (uVar16 <= uVar11) {
    uVar11 = uVar16;
  }
  puVar8 = local_90;
  if ((1 < uVar11) && ((((int)local_98 - (uint)local_90 | (uint)local_90) & 1) == 0)) {
    uVar11 = uVar11 & 0x7ffffffffffffffe;
    puVar8 = local_90 + -uVar11;
    do {
      uVar11 = uVar11 - 2;
    } while (uVar11 != 0);
  }
  do {
    if (puVar8 == local_98) {
      local_90 = local_98;
      operator_delete(local_98);
      return;
    }
    puVar8 = puVar8 + -1;
  } while (puVar8 != (undefined2 *)0x0);
LAB_00bac640:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00bac69c  FUN_00bac69c =====

void FUN_00bac69c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  bVar2 = *(long *)(param_2 + 0x58) == 0;
  if (bVar2) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    puVar1 = (undefined8 *)
             (*(long *)(*(long *)(param_2 + 0x38) + (*(ulong *)(param_2 + 0x50) >> 7) * 8) +
             (*(ulong *)(param_2 + 0x50) & 0x7f) * 0x20);
    uVar7 = puVar1[3];
    lVar6 = puVar1[2];
    uVar3 = *puVar1;
    lVar4 = puVar1[1];
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[1] = 0;
    FUN_00bac744(param_2 + 0x30);
    lVar5 = *(long *)(param_2 + 0xa0);
    *param_1 = uVar3;
    param_1[1] = lVar4;
    param_1[3] = uVar7;
    param_1[2] = lVar6;
    *(long *)(param_2 + 0xa0) = (lVar4 - lVar6) + lVar5;
  }
  *(bool *)(param_1 + 4) = !bVar2;
  return;
}


// ===== 00bac744  FUN_00bac744 =====

void FUN_00bac744(long param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:2185: libc++ Hardening assertion !empty() failed: deque::pop_front called on an empty deque\n"
              );
  }
  uVar4 = *(ulong *)(param_1 + 0x20);
  lVar1 = *(long *)(*(long *)(param_1 + 8) + (uVar4 >> 7) * 8) + (uVar4 & 0x7f) * 0x20;
  if (lVar1 != 0) {
    pvVar2 = *(void **)(lVar1 + 8);
    if (pvVar2 != (void *)0x0) {
      if (*(long *)(lVar1 + 0x10) - 1U < (ulong)(*(long *)(lVar1 + 0x10) - (long)pvVar2))
      goto LAB_00bac7f8;
      *(void **)(lVar1 + 0x10) = pvVar2;
      operator_delete(pvVar2);
      uVar4 = *(ulong *)(param_1 + 0x20);
      lVar3 = *(long *)(param_1 + 0x28);
    }
    *(ulong *)(param_1 + 0x20) = uVar4 + 1;
    *(long *)(param_1 + 0x28) = lVar3 + -1;
    if (0xff < uVar4 + 1) {
      operator_delete((void *)**(undefined8 **)(param_1 + 8));
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x80;
    }
    return;
  }
LAB_00bac7f8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00bac820  FUN_00bac820 =====

long FUN_00bac820(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar6 = 0;
  if (lVar4 != lVar7) {
    lVar6 = (lVar4 - lVar7) * 0x10 + -1;
  }
  if (lVar6 == *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) {
    FUN_00baeaac(param_1);
    lVar7 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  if ((lVar7 != lVar4) &&
     (uVar1 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20),
     puVar2 = (undefined8 *)(*(long *)(lVar7 + (uVar1 >> 7) * 8) + (uVar1 & 0x7f) * 0x20),
     puVar2 != (undefined8 *)0x0)) {
    uVar5 = *param_2;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = uVar5;
    puVar2[1] = 0;
    puVar2[1] = param_2[1];
    puVar2[2] = param_2[2];
    puVar2[3] = param_2[3];
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    lVar6 = *(long *)(param_1 + 0x28) + 1;
    uVar1 = *(long *)(param_1 + 0x20) + lVar6;
    *(long *)(param_1 + 0x28) = lVar6;
    plVar3 = (long *)(*(long *)(param_1 + 8) + (uVar1 >> 7) * 8);
    lVar7 = *plVar3;
    lVar6 = 0;
    if (*(long *)(param_1 + 8) != *(long *)(param_1 + 0x10)) {
      lVar6 = lVar7 + (uVar1 & 0x7f) * 0x20;
    }
    if (lVar6 == lVar7) {
      lVar6 = plVar3[-1] + 0x1000;
    }
    return lVar6 + -0x20;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00bac924  FUN_00bac924 =====

void FUN_00bac924(long param_1,uint param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  bool bVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long local_90;
  uint local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  void *local_70;
  undefined8 **local_68;
  undefined1 *puStack_60;
  long local_58;
  undefined8 *local_38;
  
  if (*(char *)(param_1 + 0x2c) == '\x01') {
    uVar1 = param_2 - *(uint *)(param_1 + 0x28);
    bVar2 = *(uint *)(param_1 + 0x28) <= param_2 && uVar1 != 0;
    if (uVar1 != 0x80000000) {
      bVar2 = uVar1 != 0xffffffff && (int)(uVar1 + 1) < 0 == SCARRY4(uVar1,1);
    }
    uVar9 = (ulong)uVar1;
    if (!bVar2) {
      uVar9 = (ulong)uVar1 | 0xffffffff00000000;
    }
    uVar9 = uVar9 + *(long *)(param_1 + 0x20);
  }
  else {
    uVar9 = (ulong)param_2;
  }
  *(ulong *)(param_1 + 0x20) = uVar9;
  *(uint *)(param_1 + 0x28) = param_2;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  if ((*(char *)(param_1 + 0x98) == '\x01') && (*(long *)(param_1 + 0x60) < (long)uVar9)) {
    uVar9 = param_4 * 0xc;
    local_80 = (undefined8 *)0x0;
    local_78 = (undefined8 *)0x0;
    local_70 = (void *)0x0;
    local_90 = param_1;
    local_88 = param_2;
    puVar11 = local_78;
    if (uVar9 != 0) {
      if (0x1555555555555555 < (ulong)(((long)uVar9 >> 2) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
        FUN_00bad440();
      }
      local_80 = (undefined8 *)operator_new(uVar9);
      local_70 = (void *)((long)local_80 + uVar9);
      puVar10 = local_80;
      do {
        if (puVar10 == (undefined8 *)0x0) goto LAB_00bacb9c;
        uVar7 = *param_3;
        uVar9 = uVar9 - 0xc;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(param_3 + 1);
        puVar11 = (undefined8 *)((long)puVar10 + 0xc);
        *puVar10 = uVar7;
        param_3 = (undefined8 *)((long)param_3 + 0xc);
        puVar10 = puVar11;
      } while (uVar9 != 0);
    }
    local_78 = puVar11;
    pvVar4 = local_70;
    puVar3 = local_78;
    puVar10 = local_80;
    puVar11 = *(undefined8 **)(param_1 + 0x88);
    local_68 = &local_38;
    local_58 = param_1 + 0x80;
    local_38 = puVar11;
    if (puVar11 < *(undefined8 **)(param_1 + 0x90)) {
      puStack_60 = (undefined1 *)&local_90;
      if (puVar11 == (undefined8 *)0x0) {
LAB_00bacb9c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puStack_60 = (undefined1 *)&local_90;
      plVar6 = (long *)operator_new(0x28);
      plVar6[2] = (long)puVar10;
      plVar6[3] = (long)puVar3;
      plVar6[4] = (long)pvVar4;
      *plVar6 = local_90;
      *(uint *)(plVar6 + 1) = local_88;
      local_78 = (undefined8 *)0x0;
      local_70 = (void *)0x0;
      local_80 = (undefined8 *)0x0;
      puVar11[2] = FUN_00bad340;
      puVar11[3] = FUN_00bad310;
      local_38 = puVar11 + 4;
      *puVar11 = plVar6;
    }
    else {
      puStack_60 = (undefined1 *)&local_90;
      FUN_00bad164(&local_68);
    }
    *(undefined8 **)(param_1 + 0x88) = local_38;
    if (local_80 != (undefined8 *)0x0) {
      uVar8 = (long)local_78 * -0x1555555555555555 - 4U >> 2;
      uVar9 = (ulong)(((long)local_80 - (long)local_78) * 0x1555555555555555) >> 2;
      if (uVar8 <= uVar9) {
        uVar9 = uVar8;
      }
      puVar11 = local_78;
      if ((1 < uVar9) && ((((int)local_80 - (int)local_78 | -(int)local_78) & 3U) == 0)) {
        uVar9 = uVar9 & 0x3ffffffffffffffe;
        puVar11 = (undefined8 *)((long)local_78 + uVar9 * -0xc);
        do {
          uVar9 = uVar9 - 2;
        } while (uVar9 != 0);
      }
      while (puVar11 != local_80) {
        puVar11 = (undefined8 *)((long)puVar11 + -0xc);
        if (puVar11 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      local_78 = local_80;
      operator_delete(local_80);
    }
  }
  else {
    lVar5 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x18))
                      (*(long **)(param_1 + 0xa8),uVar9,param_3);
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) - lVar5;
  }
  return;
}


// ===== 00bacbc0  FUN_00bacbc0 =====

uint FUN_00bacbc0(long param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x28))();
  return uVar1 | (uint)*(byte *)(param_1 + 0x98) << 6;
}


// ===== 00bacbfc  FUN_00bacbfc =====

void FUN_00bacbfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bacc0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xa8) + 0x30))();
  return;
}


// ===== 00bacc10  FUN_00bacc10 =====

void FUN_00bacc10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bacc20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xa8) + 0x38))();
  return;
}


// ===== 00bacc24  FUN_00bacc24 =====

long FUN_00bacc24(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  void *local_50;
  long local_48;
  long local_40;
  void *local_38;
  
  lVar7 = param_1[1] - *param_1;
  uVar1 = (lVar7 >> 5) + 1;
  if (uVar1 >> 0x3b == 0) {
    local_50 = (void *)0x0;
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 4;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar4) {
      uVar5 = 0x7ffffffffffffff;
    }
    if (uVar5 != 0) {
      if (uVar5 >> 0x3b != 0) goto LAB_00bacd9c;
      local_50 = operator_new(uVar5 << 5);
    }
    local_38 = (void *)((long)local_50 + uVar5 * 0x20);
    lVar7 = (long)local_50 + lVar7;
    local_48 = lVar7;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    (**(code **)(param_2 + 0x10))(1,param_2,lVar7);
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(code **)(param_2 + 0x10) = FUN_00433984;
    *(undefined8 *)(param_2 + 0x18) = 0;
    local_40 = lVar7 + 0x20;
    FUN_00bacda0(param_1,&local_50);
    lVar3 = local_48;
    lVar6 = param_1[1];
    lVar7 = local_40;
    while( true ) {
      if (lVar3 == lVar7) {
        if (local_50 != (void *)0x0) {
          local_40 = lVar7;
          operator_delete(local_50);
        }
        return lVar6;
      }
      lVar2 = lVar7 + -0x20;
      if (lVar2 == 0) break;
      (**(code **)(lVar7 + -0x10))(0,lVar2,lVar2);
      lVar7 = lVar2;
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  FUN_00baceb8();
LAB_00bacd9c:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00bacda0  FUN_00bacda0 =====

void FUN_00bacda0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *param_1;
  lVar5 = param_1[1];
  lVar3 = param_2[1] + (lVar2 - lVar5);
  lVar1 = lVar2;
  lVar4 = lVar3;
  if (lVar5 != lVar2) {
    do {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      (**(code **)(lVar1 + 0x10))(1,lVar1,lVar4);
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar1 + 0x10);
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
      *(code **)(lVar1 + 0x10) = FUN_00433984;
      *(undefined8 *)(lVar1 + 0x18) = 0;
      lVar1 = lVar1 + 0x20;
      lVar4 = lVar4 + 0x20;
    } while (lVar1 != lVar5);
    do {
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      (**(code **)(lVar2 + 0x10))(0,lVar2,lVar2);
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != lVar5);
  }
  param_2[1] = lVar3;
  lVar1 = *param_1;
  lVar3 = param_1[2];
  param_1[1] = lVar1;
  lVar5 = param_2[1];
  lVar2 = param_2[3];
  param_1[1] = param_2[2];
  *param_1 = lVar5;
  param_1[2] = lVar2;
  param_2[2] = lVar1;
  param_2[3] = lVar3;
  *param_2 = lVar1;
  param_2[1] = lVar1;
  return;
}


// ===== 00baceb8  FUN_00baceb8 =====

void FUN_00baceb8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00baced0  FUN_00baced0 =====

void FUN_00baced0(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  
  if (*(char *)(param_1 + 0x38) == '\x01') {
    pvVar5 = *(void **)(param_1 + 0x20);
    if (pvVar5 != (void *)0x0) {
      pvVar1 = pvVar5;
      pvVar2 = *(void **)(param_1 + 0x28);
      if (pvVar5 != *(void **)(param_1 + 0x28)) {
        do {
          pvVar1 = (void *)((long)pvVar2 + -0x20);
          if (pvVar1 == (void *)0x0) goto LAB_00bacfac;
          (**(code **)((long)pvVar2 + -0x10))(0,pvVar1,pvVar1);
          pvVar2 = pvVar1;
        } while (pvVar1 != pvVar5);
        pvVar1 = *(void **)(param_1 + 0x20);
      }
      *(void **)(param_1 + 0x28) = pvVar5;
      operator_delete(pvVar1);
    }
    pvVar5 = *(void **)(param_1 + 8);
    if (pvVar5 != (void *)0x0) {
      pvVar1 = *(void **)(param_1 + 0x10);
      uVar4 = (ulong)((long)pvVar1 + ((long)pvVar1 << 0x3f) + -2) >> 1;
      uVar3 = (ulong)(((long)pvVar5 - (long)pvVar1 << 0x3f) - ((long)pvVar5 - (long)pvVar1)) >> 1;
      if (uVar4 <= uVar3) {
        uVar3 = uVar4;
      }
      if ((1 < uVar3) && ((((int)pvVar5 - (uint)pvVar1 | (uint)pvVar1) & 1) == 0)) {
        uVar3 = uVar3 & 0x7ffffffffffffffe;
        pvVar1 = (void *)((long)pvVar1 + uVar3 * -2);
        do {
          uVar3 = uVar3 - 2;
        } while (uVar3 != 0);
      }
      while (pvVar1 != pvVar5) {
        pvVar1 = (void *)((long)pvVar1 + -2);
        if (pvVar1 == (void *)0x0) {
LAB_00bacfac:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      *(void **)(param_1 + 0x10) = pvVar5;
      operator_delete(pvVar5);
    }
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}


// ===== 00bacfe8  FUN_00bacfe8 =====

undefined8 * FUN_00bacfe8(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  pvVar1 = (void *)param_1[1];
  *param_1 = *param_2;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[2];
    uVar5 = (ulong)((long)pvVar2 + ((long)pvVar2 << 0x3f) + -2) >> 1;
    uVar4 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3f) - ((long)pvVar1 - (long)pvVar2)) >> 1;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)pvVar1 - (uint)pvVar2 | (uint)pvVar2) & 1) == 0)) {
      uVar4 = uVar4 & 0x7ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar4 * -2);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (pvVar2 == pvVar1) {
        param_1[2] = pvVar1;
        operator_delete(pvVar1);
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        goto LAB_00bad0a8;
      }
      pvVar2 = (void *)((long)pvVar2 + -2);
    } while (pvVar2 != (void *)0x0);
LAB_00bad07c:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
LAB_00bad0a8:
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  puVar6 = param_1 + 4;
  pvVar1 = (void *)*puVar6;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    pvVar3 = (void *)param_1[5];
    if (pvVar1 != (void *)param_1[5]) {
      do {
        pvVar2 = (void *)((long)pvVar3 + -0x20);
        if (pvVar2 == (void *)0x0) goto LAB_00bad07c;
        (**(code **)((long)pvVar3 + -0x10))(0,pvVar2,pvVar2);
        pvVar3 = pvVar2;
      } while (pvVar2 != pvVar1);
      pvVar2 = (void *)*puVar6;
    }
    param_1[5] = pvVar1;
    operator_delete(pvVar2);
    *puVar6 = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  return param_1;
}


// ===== 00bad164  FUN_00bad164 =====

void FUN_00bad164(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  void *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  void *local_48;
  
  plVar7 = (long *)param_1[2];
  lVar9 = plVar7[1] - *plVar7;
  uVar1 = (lVar9 >> 5) + 1;
  if (uVar1 >> 0x3b == 0) {
    puVar8 = (undefined8 *)param_1[1];
    local_60 = (void *)0x0;
    uVar4 = plVar7[2] - *plVar7;
    uVar6 = (long)uVar4 >> 4;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar4) {
      uVar6 = 0x7ffffffffffffff;
    }
    if (uVar6 != 0) {
      if (uVar6 >> 0x3b != 0) goto LAB_00bad30c;
      local_60 = operator_new(uVar6 << 5);
    }
    local_48 = (void *)((long)local_60 + uVar6 * 0x20);
    puVar2 = (undefined8 *)((long)local_60 + lVar9);
    local_58 = puVar2;
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar3 = (undefined8 *)operator_new(0x28);
    uVar5 = *puVar8;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar8 + 1);
    *puVar3 = uVar5;
    puVar3[2] = puVar8[2];
    puVar3[3] = puVar8[3];
    puVar3[4] = puVar8[4];
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    *puVar2 = puVar3;
    puVar2[2] = FUN_00bad340;
    puVar2[3] = FUN_00bad310;
    local_50 = puVar2 + 4;
    FUN_00bacda0(plVar7,&local_60);
    puVar2 = local_58;
    lVar9 = plVar7[1];
    puVar8 = local_50;
    while( true ) {
      if (puVar2 == puVar8) {
        if (local_60 != (void *)0x0) {
          local_50 = puVar8;
          operator_delete(local_60);
        }
        *(long *)*param_1 = lVar9;
        return;
      }
      puVar3 = puVar8 + -4;
      if (puVar3 == (undefined8 *)0x0) break;
      (*(code *)puVar8[-2])(0,puVar3,puVar3);
      puVar8 = puVar3;
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  FUN_00baceb8();
LAB_00bad30c:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00bad310  FUN_00bad310 =====

void FUN_00bad310(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = (undefined8 *)*param_1;
  lVar2 = param_1[3] - param_1[2];
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = param_1[2];
  }
  FUN_00bac924(*param_1,*(undefined4 *)(param_1 + 1),lVar1,(lVar2 >> 2) * -0x5555555555555555);
  return;
}


// ===== 00bad340  FUN_00bad340 =====

void FUN_00bad340(uint param_1,undefined8 *param_2,undefined8 *param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0xbad440);
      (*pcVar1)();
    }
    pvVar6 = (void *)*param_2;
    if (pvVar6 != (void *)0x0) {
      pvVar2 = *(void **)((long)pvVar6 + 0x10);
      if (pvVar2 != (void *)0x0) {
        pvVar3 = *(void **)((long)pvVar6 + 0x18);
        uVar4 = (ulong)(((long)pvVar2 - (long)pvVar3) * 0x1555555555555555) >> 2;
        uVar5 = (long)pvVar3 * -0x1555555555555555 - 4U >> 2;
        if (uVar5 <= uVar4) {
          uVar4 = uVar5;
        }
        if ((1 < uVar4) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 3U) == 0)) {
          uVar4 = uVar4 & 0x3ffffffffffffffe;
          pvVar3 = (void *)((long)pvVar3 + uVar4 * -0xc);
          do {
            uVar4 = uVar4 - 2;
          } while (uVar4 != 0);
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
        *(void **)((long)pvVar6 + 0x18) = pvVar2;
        operator_delete(pvVar2);
      }
      operator_delete(pvVar6);
      return;
    }
  }
  return;
}


// ===== 00bad440  FUN_00bad440 =====

void FUN_00bad440(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00bad458  FUN_00bad458 =====

void FUN_00bad458(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 local_30;
  void *local_28;
  void *local_20;
  undefined8 uStack_18;
  
  local_30 = *param_3;
  local_28 = (void *)param_3[1];
  uStack_18 = param_3[3];
  local_20 = (void *)param_3[2];
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[1] = 0;
  lVar1 = *param_1;
  *(long *)(lVar1 + 0xa0) = ((long)local_20 - (long)local_28) + *(long *)(lVar1 + 0xa0);
  FUN_00bac820(lVar1 + 0x30,&local_30);
  if (local_28 != (void *)0x0) {
    if ((long)local_20 - 1U < (ulong)((long)local_20 - (long)local_28)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    local_20 = local_28;
    operator_delete(local_28);
  }
  return;
}


// ===== 00bad4f4  FUN_00bad4f4 =====

void FUN_00bad4f4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long local_40;
  long lStack_38;
  void *local_30;
  long local_28;
  long local_20;
  undefined2 local_18;
  undefined1 local_16;
  
  plVar2 = (long *)*param_1;
  lVar1 = *plVar2;
  *(long *)(lVar1 + 0xa0) = (plVar2[4] - plVar2[5]) + *(long *)(lVar1 + 0xa0);
  local_20 = plVar2[6];
  lStack_38 = plVar2[3];
  local_40 = plVar2[2];
  local_28 = plVar2[5];
  local_30 = (void *)plVar2[4];
  local_18 = (undefined2)plVar2[7];
  plVar2[4] = 0;
  plVar2[5] = 0;
  local_16 = *(undefined1 *)((long)plVar2 + 0x3a);
  plVar2[6] = 0;
  FUN_00babf98(lVar1,(int)plVar2[1],&local_40);
  if (local_30 == (void *)0x0) {
    return;
  }
  if ((ulong)(local_28 - (long)local_30) <= local_28 - 1U) {
    operator_delete(local_30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00bad5ac  FUN_00bad5ac =====

void FUN_00bad5ac(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xbad638);
      (*pcVar1)();
    }
    pvVar3 = (void *)*param_2;
    if (pvVar3 != (void *)0x0) {
      pvVar2 = *(void **)((long)pvVar3 + 0x20);
      if (pvVar2 != (void *)0x0) {
        if (*(long *)((long)pvVar3 + 0x28) - 1U <
            (ulong)(*(long *)((long)pvVar3 + 0x28) - (long)pvVar2)) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        *(void **)((long)pvVar3 + 0x28) = pvVar2;
        operator_delete(pvVar2);
      }
      operator_delete(pvVar3);
      return;
    }
  }
  return;
}


// ===== 00bad64c  FUN_00bad64c =====

void FUN_00bad64c(long param_1,ushort *param_2,ushort *param_3)

{
  ushort uVar1;
  long lVar2;
  ushort *puVar3;
  long lVar4;
  ushort uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 local_24 [4];
  
  local_24[0] = 0;
  FUN_00bad7b0(param_2,param_3,local_24);
  if (param_2 != param_3) {
    puVar3 = param_2 + 1;
    do {
      param_2 = puVar3;
      if (param_2 == param_3) {
        return;
      }
      uVar5 = param_2[-1];
      puVar3 = param_2 + 1;
    } while (uVar5 < *param_2);
    param_2 = param_2 + -1;
    for (; puVar3 != param_3; puVar3 = puVar3 + 1) {
      uVar1 = *puVar3;
      if (uVar5 < uVar1) {
        param_2 = param_2 + 1;
        *param_2 = uVar1;
        uVar5 = uVar1;
      }
    }
    param_2 = param_2 + 1;
  }
  lVar2 = (long)param_2 - (long)param_3;
  if (param_2 < param_3 || lVar2 == 0) {
    if (lVar2 != 0) {
      lVar9 = *(long *)(param_1 + 8);
      memmove(param_2,param_3,lVar9 - (long)param_3);
      lVar4 = *(long *)(param_1 + 8);
      lVar6 = (long)param_2 + (lVar9 - (lVar4 + (long)param_3));
      uVar7 = (ulong)((lVar6 << 0x3f) - lVar6) >> 1;
      uVar8 = (lVar4 + (lVar4 << 0x3f)) - 2U >> 1;
      if (uVar8 <= uVar7) {
        uVar7 = uVar8;
      }
      if ((1 < uVar7) &&
         (((((int)param_2 + (int)lVar9) - ((uint)lVar4 + (int)param_3) | (uint)lVar4) & 1) == 0)) {
        uVar7 = uVar7 & 0x7ffffffffffffffe;
        lVar4 = lVar4 + uVar7 * -2;
        do {
          uVar7 = uVar7 - 2;
        } while (uVar7 != 0);
      }
      while (lVar4 != lVar9 + lVar2) {
        lVar4 = lVar4 + -2;
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      *(long *)(param_1 + 8) = lVar9 + lVar2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:1170: libc++ Hardening assertion __first <= __last failed: vector::erase(first, last) called with invalid range\n"
            );
}


// ===== 00bad7b0  FUN_00bad7b0 =====

void FUN_00bad7b0(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = PTR_DAT_00d51ca8;
  uVar3 = param_2 - param_1 >> 1;
  uVar4 = uVar3;
  if (0x80 < (long)uVar3) {
    do {
      pvVar2 = (void *)FUN_00546b60(uVar4 << 1,puVar1);
      if (pvVar2 != (void *)0x0) {
        FUN_00bad880(param_1,param_2,param_3,uVar3,pvVar2,uVar4);
        operator_delete(pvVar2);
        return;
      }
      uVar4 = uVar4 >> 1;
    } while (uVar4 != 0);
  }
  FUN_00bad880(param_1,param_2,param_3,uVar3,0,0);
  return;
}


// ===== 00bad880  FUN_00bad880 =====

void FUN_00bad880(ushort *param_1,ushort *param_2,undefined8 param_3,ulong param_4,ushort *param_5,
                 long param_6)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  bool bVar4;
  long lVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  if (param_4 < 2) {
    return;
  }
  if (param_4 == 2) {
    uVar1 = *param_1;
    if (uVar1 <= param_2[-1]) {
      return;
    }
    *param_1 = param_2[-1];
    param_2[-1] = uVar1;
    return;
  }
  if ((long)param_4 < 0x81) {
    if (param_1 == param_2) {
      return;
    }
    if (param_1 + 1 == param_2) {
      return;
    }
    lVar5 = 0;
    puVar6 = param_1;
    puVar7 = param_1 + 1;
    do {
      uVar1 = puVar6[1];
      uVar2 = *puVar6;
      lVar11 = lVar5;
      if (uVar1 < uVar2) {
        do {
          lVar12 = lVar11;
          *(ushort *)((long)param_1 + lVar12 + 2) = uVar2;
          puVar6 = param_1;
          if (lVar12 == 0) goto LAB_00bad920;
          uVar2 = *(ushort *)((long)param_1 + lVar12 + -2);
          lVar11 = lVar12 + -2;
        } while (uVar1 < uVar2);
        puVar6 = (ushort *)((long)param_1 + lVar12);
LAB_00bad920:
        *puVar6 = uVar1;
      }
      puVar9 = puVar7 + 1;
      lVar5 = lVar5 + 2;
      puVar6 = puVar7;
      puVar7 = puVar9;
      if (puVar9 == param_2) {
        return;
      }
    } while( true );
  }
  uVar16 = param_4 >> 1;
  uVar17 = param_4 & 0x7ffffffffffffffe;
  lVar5 = param_4 - uVar16;
  if (param_6 < (long)param_4) {
    FUN_00bad880();
    FUN_00bad880(uVar17 + (long)param_1,param_2,param_3,lVar5,param_5,param_6);
    FUN_00bade88(param_1,uVar17 + (long)param_1,param_2,param_3,uVar16,lVar5,param_5,param_6);
    return;
  }
  FUN_00badcb8(param_1,uVar17 + (long)param_1,param_3,uVar16,param_5);
  puVar6 = (ushort *)((long)param_5 + uVar17);
  FUN_00badcb8(uVar17 + (long)param_1,param_2,param_3,lVar5,(long)param_5 + uVar17);
  puVar7 = param_5 + param_4;
  lVar5 = 0;
  puVar9 = (ushort *)((long)param_5 + uVar17);
  puVar10 = param_5;
  do {
    puVar8 = puVar9;
    if (puVar8 == puVar7) {
      if (puVar10 == puVar6) {
        return;
      }
      uVar16 = (long)param_5 + (uVar17 - (long)puVar10) + -2;
      puVar7 = (ushort *)((long)param_1 + lVar5);
      if (((uVar16 < 6) ||
          ((ushort *)((long)param_1 + (uVar16 & 0xfffffffffffffffe) + lVar5) < puVar7)) ||
         (((ushort *)((long)puVar10 + (uVar16 & 0xfffffffffffffffe)) < puVar10 ||
          ((ulong)((long)param_1 + (lVar5 - (long)puVar10)) < 0x20)))) goto LAB_00badad8;
      uVar17 = (uVar16 >> 1) + 1;
      if (0x1d < uVar16) {
        puVar7 = puVar7 + 8;
        uVar16 = uVar17 & 0xfffffffffffffff0;
        puVar9 = puVar10 + 8;
        uVar13 = uVar17 & 0xfffffffffffffff0;
        do {
          puVar8 = puVar9 + -4;
          uVar18 = *(undefined8 *)(puVar9 + -8);
          uVar20 = *(undefined8 *)(puVar9 + 4);
          uVar19 = *(undefined8 *)puVar9;
          uVar13 = uVar13 - 0x10;
          puVar9 = puVar9 + 0x10;
          *(undefined8 *)(puVar7 + -4) = *(undefined8 *)puVar8;
          *(undefined8 *)(puVar7 + -8) = uVar18;
          *(undefined8 *)(puVar7 + 4) = uVar20;
          *(undefined8 *)puVar7 = uVar19;
          puVar7 = puVar7 + 0x10;
        } while (uVar13 != 0);
        if (uVar17 == uVar16) {
          return;
        }
        if ((uVar17 & 0xc) == 0) {
          puVar10 = puVar10 + uVar16;
          puVar7 = (ushort *)((long)param_1 + uVar16 * 2 + lVar5);
        }
        else {
LAB_00badbd0:
          uVar13 = uVar17 & 0xfffffffffffffffc;
          lVar11 = uVar16 - uVar13;
          puVar7 = (ushort *)((long)param_1 + uVar13 * 2 + lVar5);
          lVar12 = uVar16 << 1;
          do {
            lVar11 = lVar11 + 4;
            *(undefined8 *)((long)param_1 + lVar5 + lVar12) =
                 *(undefined8 *)((long)puVar10 + lVar12);
            lVar12 = lVar12 + 8;
          } while (lVar11 != 0);
          puVar10 = puVar10 + uVar13;
          if (uVar17 == uVar13) {
            return;
          }
        }
LAB_00badad8:
        do {
          puVar9 = puVar10 + 1;
          *puVar7 = *puVar10;
          puVar7 = puVar7 + 1;
          puVar10 = puVar9;
        } while (puVar9 != puVar6);
        return;
      }
      uVar16 = 0;
      goto LAB_00badbd0;
    }
    uVar1 = *puVar10;
    bVar4 = uVar1 <= *puVar8;
    lVar11 = 0;
    if (bVar4) {
      lVar11 = 2;
    }
    puVar10 = (ushort *)((long)puVar10 + lVar11);
    uVar2 = *puVar8;
    if (bVar4) {
      uVar2 = uVar1;
    }
    lVar11 = 2;
    if (bVar4) {
      lVar11 = 0;
    }
    puVar9 = (ushort *)((long)puVar8 + lVar11);
    *(ushort *)((long)param_1 + lVar5) = uVar2;
    lVar5 = lVar5 + 2;
  } while (puVar10 != puVar6);
  if (puVar9 == puVar7) {
    return;
  }
  uVar16 = (long)puVar7 + (-lVar11 - (long)puVar8) + -2;
  puVar6 = (ushort *)((long)param_1 + lVar5);
  if ((((5 < uVar16) &&
       (puVar6 <= (ushort *)((long)param_1 + (uVar16 & 0xfffffffffffffffe) + lVar5))) &&
      (puVar9 <= (ushort *)((long)puVar9 + (uVar16 & 0xfffffffffffffffe)))) &&
     (0x1f < (ulong)((long)param_1 + lVar5 + (-lVar11 - (long)puVar8)))) {
    uVar17 = (uVar16 >> 1) + 1;
    if (uVar16 < 0x1e) {
      uVar13 = 0;
    }
    else {
      puVar6 = puVar6 + 8;
      uVar13 = uVar17 & 0xfffffffffffffff0;
      puVar14 = (undefined8 *)((long)puVar8 + lVar11 + 0x10);
      uVar16 = uVar17 & 0xfffffffffffffff0;
      do {
        puVar3 = puVar14 + -1;
        uVar18 = puVar14[-2];
        uVar20 = puVar14[1];
        uVar19 = *puVar14;
        uVar16 = uVar16 - 0x10;
        puVar14 = puVar14 + 4;
        *(undefined8 *)(puVar6 + -4) = *puVar3;
        *(undefined8 *)(puVar6 + -8) = uVar18;
        *(undefined8 *)(puVar6 + 4) = uVar20;
        *(undefined8 *)puVar6 = uVar19;
        puVar6 = puVar6 + 0x10;
      } while (uVar16 != 0);
      if (uVar17 == uVar13) {
        return;
      }
      if ((uVar17 & 0xc) == 0) {
        puVar9 = puVar9 + uVar13;
        puVar6 = (ushort *)((long)param_1 + lVar5 + uVar13 * 2);
        goto LAB_00badaa0;
      }
    }
    uVar16 = uVar17 & 0xfffffffffffffffc;
    lVar12 = uVar13 - uVar16;
    puVar9 = puVar9 + uVar16;
    puVar6 = (ushort *)((long)param_1 + uVar16 * 2 + lVar5);
    lVar15 = uVar13 << 1;
    do {
      lVar12 = lVar12 + 4;
      *(undefined8 *)((long)param_1 + lVar5 + lVar15) =
           *(undefined8 *)((long)puVar8 + lVar15 + lVar11);
      lVar15 = lVar15 + 8;
    } while (lVar12 != 0);
    if (uVar17 == uVar16) {
      return;
    }
  }
LAB_00badaa0:
  do {
    puVar10 = puVar9 + 1;
    *puVar6 = *puVar9;
    puVar9 = puVar10;
    puVar6 = puVar6 + 1;
  } while (puVar10 != puVar7);
  return;
}


// ===== 00badcb8  FUN_00badcb8 =====

void FUN_00badcb8(ushort *param_1,ushort *param_2,undefined8 param_3,ulong param_4,ushort *param_5)

{
  ushort uVar1;
  long lVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  long lVar6;
  ushort *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_4 == 0) {
    return;
  }
  if (param_4 == 2) {
    if (*param_1 <= param_2[-1]) {
      if (param_5 == (ushort *)0x0) goto LAB_00bade74;
      puVar7 = param_5 + 1;
      *param_5 = *param_1;
      if (puVar7 == (ushort *)0x0) goto LAB_00bade74;
      uVar1 = param_2[-1];
      goto LAB_00badde0;
    }
    if (param_5 == (ushort *)0x0) goto LAB_00bade74;
    puVar7 = param_5 + 1;
    *param_5 = param_2[-1];
    if (puVar7 == (ushort *)0x0) goto LAB_00bade74;
  }
  else {
    if (param_4 != 1) {
      if (8 < (long)param_4) {
        uVar8 = param_4 >> 1;
        uVar9 = param_4 & 0x7ffffffffffffffe;
        FUN_00bad880(param_1,uVar9 + (long)param_1,param_3,uVar8,param_5,uVar8);
        FUN_00bad880(uVar9 + (long)param_1,param_2,param_3,param_4 - uVar8,param_5 + uVar8,
                     param_4 - uVar8);
        FUN_00bae0f8(param_1,uVar9 + (long)param_1,uVar9 + (long)param_1,param_2,param_5,param_3);
        return;
      }
      if (param_1 == param_2) {
        return;
      }
      if (param_5 != (ushort *)0x0) {
        puVar7 = param_1 + 1;
        *param_5 = *param_1;
        if (puVar7 == param_2) {
          return;
        }
        lVar2 = 0;
        puVar5 = param_5;
        do {
          puVar3 = puVar5 + 1;
          if (*puVar7 < *puVar5) {
            if (puVar3 == (ushort *)0x0) break;
            puVar5[1] = *puVar5;
            puVar4 = param_5;
            lVar6 = lVar2;
            if (puVar5 != param_5) {
              do {
                puVar4 = (ushort *)((long)param_5 + lVar6);
                if (puVar4[-1] <= *puVar7) break;
                lVar6 = lVar6 + -2;
                *puVar4 = puVar4[-1];
                puVar4 = param_5;
              } while (lVar6 != 0);
            }
            *puVar4 = *puVar7;
          }
          else {
            if (puVar3 == (ushort *)0x0) break;
            *puVar3 = *puVar7;
          }
          puVar7 = puVar7 + 1;
          lVar2 = lVar2 + 2;
          puVar5 = puVar3;
          if (puVar7 == param_2) {
            return;
          }
        } while( true );
      }
LAB_00bade74:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar7 = param_5;
    if (param_5 == (ushort *)0x0) goto LAB_00bade74;
  }
  uVar1 = *param_1;
LAB_00badde0:
  *puVar7 = uVar1;
  return;
}


// ===== 00bade88  FUN_00bade88 =====

void FUN_00bade88(ushort *param_1,ushort *param_2,ushort *param_3,undefined8 param_4,long param_5,
                 long param_6,undefined8 param_7,long param_8)

{
  ushort uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ushort *puVar8;
  long lVar9;
  long lVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *local_80;
  
  local_80 = param_1;
  if (param_6 != 0) {
    do {
      if ((param_6 <= param_8) || (param_5 <= param_8)) {
        FUN_00bae324();
        return;
      }
      if (param_5 == 0) {
        return;
      }
      lVar2 = 0;
      lVar10 = 0;
      while (uVar1 = local_80[lVar10], uVar1 <= *param_2) {
        lVar10 = lVar10 + 1;
        lVar2 = lVar2 + -2;
        if (param_5 == lVar10) {
          return;
        }
      }
      lVar4 = param_5 - lVar10;
      puVar8 = (ushort *)((long)local_80 - lVar2);
      if (lVar4 < param_6) {
        uVar6 = param_6 - (param_6 >> 0x3f);
        puVar11 = (ushort *)((long)param_2 + (uVar6 & 0xfffffffffffffffe));
        puVar12 = param_2;
        if (puVar8 != param_2) {
          uVar3 = (long)param_2 + (lVar2 - (long)local_80) >> 1;
          puVar12 = puVar8;
          do {
            uVar5 = uVar3 >> 1;
            uVar7 = uVar3 + ~uVar5;
            uVar3 = uVar5;
            if (puVar12[uVar5] <= *puVar11) {
              puVar12 = puVar12 + uVar5 + 1;
              uVar3 = uVar7;
            }
          } while (uVar3 != 0);
        }
        uVar3 = (long)puVar12 - (long)puVar8;
        local_80 = puVar8;
      }
      else {
        if (param_5 + -1 == lVar10) {
          local_80[lVar10] = *param_2;
          *param_2 = uVar1;
          return;
        }
        uVar3 = lVar4 - (lVar4 >> 0x3f);
        puVar11 = param_3;
        if ((long)param_3 - (long)param_2 != 0) {
          uVar6 = (long)param_3 - (long)param_2 >> 1;
          puVar8 = param_2;
          do {
            uVar7 = uVar6 >> 1;
            puVar11 = puVar8 + uVar7 + 1;
            uVar6 = uVar6 + ~uVar7;
            if (*(ushort *)((long)local_80 + lVar10 * 2 + (uVar3 & 0xfffffffffffffffe)) <=
                puVar8[uVar7]) {
              puVar11 = puVar8;
              uVar6 = uVar7;
            }
            puVar8 = puVar11;
          } while (uVar6 != 0);
        }
        uVar6 = (long)puVar11 - (long)param_2;
        puVar12 = (ushort *)((long)local_80 + ((uVar3 & 0xfffffffffffffffe) - lVar2));
        local_80 = (ushort *)((long)local_80 - lVar2);
      }
      lVar4 = (long)uVar6 >> 1;
      lVar2 = (long)uVar3 >> 1;
      lVar9 = (param_5 - lVar2) - lVar10;
      puVar8 = (ushort *)FUN_00bae6d8(puVar12,param_2,puVar11);
      if (lVar2 + lVar4 < ((param_6 + param_5) - (lVar2 + lVar4)) - lVar10) {
        FUN_00bade88(local_80,puVar12,puVar8,param_4,lVar2,lVar4,param_7,param_8);
        local_80 = puVar8;
        puVar8 = param_3;
        lVar2 = lVar9;
        param_2 = puVar11;
        param_6 = param_6 - lVar4;
      }
      else {
        FUN_00bade88(puVar8,puVar11,param_3,param_4,lVar9,param_6 - lVar4,param_7,param_8);
        param_2 = puVar12;
        param_6 = lVar4;
      }
      param_3 = puVar8;
      param_5 = lVar2;
    } while (param_6 != 0);
  }
  return;
}


// ===== 00bae0f8  FUN_00bae0f8 =====

void FUN_00bae0f8(ushort *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5)

{
  ulong uVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ushort *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar5 = (uint)param_5;
  if (param_1 != param_2) {
    uVar6 = -(long)param_5;
    do {
      if (param_3 == param_4) {
        if (param_1 == param_2) {
          return;
        }
        uVar12 = (long)param_2 + (-2 - (long)param_1);
        uVar9 = uVar6 >> 1;
        uVar11 = uVar12 >> 1;
        uVar10 = uVar9;
        if (uVar11 <= uVar9) {
          uVar10 = uVar11;
        }
        puVar4 = param_1;
        if (0x2f < uVar10) {
          uVar1 = uVar9;
          if (uVar11 <= uVar9) {
            uVar1 = uVar11;
          }
          if (((((((uint)uVar12 | uVar5) & 1) == 0) && (param_5 <= param_5 + uVar1)) &&
              (param_1 <= param_1 + uVar1)) && (0x1f < -((long)param_1 + uVar6))) {
            uVar6 = uVar10 + 1 & 0xf;
            uVar12 = 0x10;
            if (uVar6 != 0) {
              uVar12 = uVar6;
            }
            if (uVar11 <= uVar9) {
              uVar9 = uVar11;
            }
            puVar4 = param_1 + ((uVar10 + 1) - uVar12);
            puVar8 = param_5 + 8;
            param_1 = param_1 + 8;
            lVar7 = (uVar9 - uVar12) + 1;
            param_5 = param_5 + ((uVar9 + 1) - uVar12);
            do {
              puVar3 = param_1 + -4;
              uVar13 = *(undefined8 *)(param_1 + -8);
              uVar15 = *(undefined8 *)(param_1 + 4);
              uVar14 = *(undefined8 *)param_1;
              lVar7 = lVar7 + -0x10;
              param_1 = param_1 + 0x10;
              *(undefined8 *)(puVar8 + -4) = *(undefined8 *)puVar3;
              *(undefined8 *)(puVar8 + -8) = uVar13;
              *(undefined8 *)(puVar8 + 4) = uVar15;
              *(undefined8 *)puVar8 = uVar14;
              puVar8 = puVar8 + 0x10;
            } while (lVar7 != 0);
          }
        }
        while (param_5 != (ushort *)0x0) {
          puVar8 = puVar4 + 1;
          *param_5 = *puVar4;
          puVar4 = puVar8;
          param_5 = param_5 + 1;
          if (puVar8 == param_2) {
            return;
          }
        }
        goto LAB_00bae310;
      }
      uVar2 = *param_1;
      if (*param_3 < uVar2) {
        if (param_5 == (ushort *)0x0) goto LAB_00bae310;
        *param_5 = *param_3;
        param_3 = param_3 + 1;
      }
      else {
        if (param_5 == (ushort *)0x0) goto LAB_00bae310;
        param_1 = param_1 + 1;
        *param_5 = uVar2;
      }
      param_5 = param_5 + 1;
      uVar6 = uVar6 - 2;
    } while (param_1 != param_2);
  }
  if (param_3 != param_4) {
    uVar9 = (long)param_4 + (-2 - (long)param_3);
    uVar10 = uVar9 >> 1;
    uVar6 = uVar10;
    if ((ulong)-(long)param_5 >> 1 <= uVar10) {
      uVar6 = (ulong)-(long)param_5 >> 1;
    }
    puVar4 = param_5;
    if (0x27 < uVar6) {
      if ((ulong)-(long)param_5 >> 1 <= uVar10) {
        uVar10 = (ulong)-(long)param_5 >> 1;
      }
      if ((((((uint)uVar9 | (uint)param_5) & 1) == 0) && (param_5 <= param_5 + uVar10)) &&
         ((param_3 <= param_3 + uVar10 && (0x1f < (ulong)((long)param_5 - (long)param_3))))) {
        puVar8 = param_3 + 8;
        uVar10 = uVar6 + 1 & 0xf;
        uVar9 = 0x10;
        if (uVar10 != 0) {
          uVar9 = uVar10;
        }
        lVar7 = (uVar6 + 1) - uVar9;
        puVar4 = param_5 + lVar7;
        param_3 = param_3 + lVar7;
        param_5 = param_5 + 8;
        do {
          puVar3 = puVar8 + -4;
          uVar13 = *(undefined8 *)(puVar8 + -8);
          uVar15 = *(undefined8 *)(puVar8 + 4);
          uVar14 = *(undefined8 *)puVar8;
          lVar7 = lVar7 + -0x10;
          puVar8 = puVar8 + 0x10;
          *(undefined8 *)(param_5 + -4) = *(undefined8 *)puVar3;
          *(undefined8 *)(param_5 + -8) = uVar13;
          *(undefined8 *)(param_5 + 4) = uVar15;
          *(undefined8 *)param_5 = uVar14;
          param_5 = param_5 + 0x10;
        } while (lVar7 != 0);
      }
    }
    do {
      if (puVar4 == (ushort *)0x0) {
LAB_00bae310:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar8 = param_3 + 1;
      *puVar4 = *param_3;
      param_3 = puVar8;
      puVar4 = puVar4 + 1;
    } while (puVar8 != param_4);
  }
  return;
}


// ===== 00bae324  FUN_00bae324 =====

void FUN_00bae324(ushort *param_1,ushort *param_2,ushort *param_3,undefined8 param_4,long param_5,
                 long param_6,ushort *param_7)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ushort *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if (param_6 < param_5) {
    if (param_2 != param_3) {
      uVar10 = (long)param_3 + (-2 - (long)param_2);
      uVar11 = uVar10 >> 1;
      uVar13 = uVar11;
      if ((ulong)-(long)param_7 >> 1 <= uVar11) {
        uVar13 = (ulong)-(long)param_7 >> 1;
      }
      puVar7 = param_7;
      puVar8 = param_2;
      if (0x27 < uVar13) {
        if ((ulong)-(long)param_7 >> 1 <= uVar11) {
          uVar11 = (ulong)-(long)param_7 >> 1;
        }
        if ((((((uint)uVar10 | (uint)param_7) & 1) == 0) && (param_7 <= param_7 + uVar11)) &&
           ((param_2 <= param_2 + uVar11 && (0x1f < (ulong)((long)param_7 - (long)param_2))))) {
          puVar6 = param_2 + 8;
          uVar11 = uVar13 + 1 & 0xf;
          puVar12 = param_7 + 8;
          uVar10 = 0x10;
          if (uVar11 != 0) {
            uVar10 = uVar11;
          }
          lVar9 = (uVar13 + 1) - uVar10;
          puVar7 = param_7 + lVar9;
          puVar8 = param_2 + lVar9;
          do {
            puVar5 = puVar6 + -4;
            uVar15 = *(undefined8 *)(puVar6 + -8);
            uVar17 = *(undefined8 *)(puVar6 + 4);
            uVar16 = *(undefined8 *)puVar6;
            lVar9 = lVar9 + -0x10;
            puVar6 = puVar6 + 0x10;
            *(undefined8 *)(puVar12 + -4) = *(undefined8 *)puVar5;
            *(undefined8 *)(puVar12 + -8) = uVar15;
            *(undefined8 *)(puVar12 + 4) = uVar17;
            *(undefined8 *)puVar12 = uVar16;
            puVar12 = puVar12 + 0x10;
          } while (lVar9 != 0);
        }
      }
      do {
        if (puVar7 == (ushort *)0x0) {
LAB_00bae62c:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar12 = puVar8 + 1;
        puVar6 = puVar7 + 1;
        *puVar7 = *puVar8;
        puVar7 = puVar6;
        puVar8 = puVar12;
      } while (puVar12 != param_3);
      if (puVar6 != param_7) {
        lVar9 = 0;
        puVar8 = param_3 + -8;
        puVar7 = param_3;
        do {
          if (param_2 == param_1) {
            if (param_7 == puVar6) {
              return;
            }
            uVar13 = ((long)puVar6 - (long)param_7) - 2;
            if (((uVar13 < 6) ||
                (param_3 + (-1 - lVar9) <
                 (ushort *)
                 ((long)(param_3 + (-1 - lVar9)) +
                 (2 - ((long)puVar6 - (long)param_7 & 0xfffffffffffffffeU))))) ||
               ((ulong)((long)puVar6 + (lVar9 * 2 - (long)param_3)) < 0x20)) goto LAB_00bae5f8;
            uVar11 = (uVar13 >> 1) + 1;
            if (0x1d < uVar13) {
              uVar13 = uVar11 & 0xfffffffffffffff0;
              puVar12 = puVar6 + -8;
              uVar10 = uVar11 & 0xfffffffffffffff0;
              do {
                puVar5 = puVar12 + -4;
                uVar17 = *(undefined8 *)(puVar12 + -8);
                uVar16 = *(undefined8 *)(puVar12 + 4);
                uVar15 = *(undefined8 *)puVar12;
                uVar10 = uVar10 - 0x10;
                puVar12 = puVar12 + -0x10;
                *(undefined8 *)(puVar8 + -4) = *(undefined8 *)puVar5;
                *(undefined8 *)(puVar8 + -8) = uVar17;
                *(undefined8 *)(puVar8 + 4) = uVar16;
                *(undefined8 *)puVar8 = uVar15;
                puVar8 = puVar8 + -0x10;
              } while (uVar10 != 0);
              if (uVar11 == uVar13) {
                return;
              }
              if ((uVar11 & 0xc) == 0) {
                puVar7 = puVar7 + -uVar13;
                puVar6 = puVar6 + -uVar13;
              }
              else {
LAB_00bae68c:
                uVar10 = uVar11 & 0xfffffffffffffffc;
                lVar14 = uVar13 * -2;
                lVar9 = uVar13 - uVar10;
                do {
                  lVar14 = lVar14 + -8;
                  lVar9 = lVar9 + 4;
                  *(undefined8 *)((long)puVar7 + lVar14) = *(undefined8 *)((long)puVar6 + lVar14);
                } while (lVar9 != 0);
                puVar6 = puVar6 + -uVar10;
                puVar7 = puVar7 + -uVar10;
                if (uVar11 == uVar10) {
                  return;
                }
              }
LAB_00bae5f8:
              do {
                puVar6 = puVar6 + -1;
                puVar7[-1] = *puVar6;
                puVar7 = puVar7 + -1;
              } while (puVar6 != param_7);
              return;
            }
            uVar13 = 0;
            goto LAB_00bae68c;
          }
          lVar9 = lVar9 + 1;
          uVar3 = puVar6[-1];
          puVar8 = puVar8 + -1;
          uVar4 = param_2[-1];
          if (uVar4 <= uVar3) {
            puVar6 = puVar6 + -1;
          }
          uVar2 = uVar3;
          if (uVar3 <= uVar4) {
            uVar2 = uVar4;
          }
          puVar12 = param_2 + -1;
          if (uVar4 <= uVar3) {
            puVar12 = param_2;
          }
          puVar7 = puVar7 + -1;
          *puVar7 = uVar2;
          param_2 = puVar12;
        } while (puVar6 != param_7);
      }
    }
  }
  else if (param_1 != param_2) {
    uVar10 = (long)param_2 + (-2 - (long)param_1);
    uVar11 = uVar10 >> 1;
    uVar13 = uVar11;
    if ((ulong)-(long)param_7 >> 1 <= uVar11) {
      uVar13 = (ulong)-(long)param_7 >> 1;
    }
    puVar7 = param_7;
    puVar8 = param_1;
    if (0x27 < uVar13) {
      if ((ulong)-(long)param_7 >> 1 <= uVar11) {
        uVar11 = (ulong)-(long)param_7 >> 1;
      }
      if (((((((uint)uVar10 | (uint)param_7) & 1) == 0) && (param_7 <= param_7 + uVar11)) &&
          (param_1 <= param_1 + uVar11)) && (0x1f < (ulong)((long)param_7 - (long)param_1))) {
        puVar6 = param_1 + 8;
        uVar11 = uVar13 + 1 & 0xf;
        puVar12 = param_7 + 8;
        uVar10 = 0x10;
        if (uVar11 != 0) {
          uVar10 = uVar11;
        }
        lVar9 = (uVar13 + 1) - uVar10;
        puVar7 = param_7 + lVar9;
        puVar8 = param_1 + lVar9;
        do {
          puVar5 = puVar6 + -4;
          uVar15 = *(undefined8 *)(puVar6 + -8);
          uVar17 = *(undefined8 *)(puVar6 + 4);
          uVar16 = *(undefined8 *)puVar6;
          lVar9 = lVar9 + -0x10;
          puVar6 = puVar6 + 0x10;
          *(undefined8 *)(puVar12 + -4) = *(undefined8 *)puVar5;
          *(undefined8 *)(puVar12 + -8) = uVar15;
          *(undefined8 *)(puVar12 + 4) = uVar17;
          *(undefined8 *)puVar12 = uVar16;
          puVar12 = puVar12 + 0x10;
        } while (lVar9 != 0);
      }
    }
    lVar9 = -(long)puVar7;
    do {
      if (puVar7 == (ushort *)0x0) goto LAB_00bae62c;
      puVar12 = puVar8 + 1;
      lVar9 = lVar9 + -2;
      puVar6 = puVar7 + 1;
      *puVar7 = *puVar8;
      puVar7 = puVar6;
      puVar8 = puVar12;
    } while (puVar12 != param_2);
    if (puVar6 != param_7) {
      do {
        if (param_2 == param_3) {
          memmove(param_1,param_7,-((long)param_7 + lVar9));
          return;
        }
        uVar4 = *param_2;
        uVar2 = *param_7;
        lVar14 = 0;
        uVar3 = uVar4;
        if (uVar2 <= uVar4) {
          lVar14 = 2;
          uVar3 = uVar2;
        }
        lVar1 = 2;
        if (uVar2 <= uVar4) {
          lVar1 = 0;
        }
        param_7 = (ushort *)((long)param_7 + lVar14);
        param_2 = (ushort *)((long)param_2 + lVar1);
        *param_1 = uVar3;
        param_1 = param_1 + 1;
      } while (puVar6 != param_7);
    }
  }
  return;
}


// ===== 00bae6d8  FUN_00bae6d8 =====

undefined1  [16] FUN_00bae6d8(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  ulong uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined2 *puVar8;
  size_t __n;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  
  puVar8 = param_3;
  if ((param_1 != param_2) && (puVar8 = param_1, param_2 != param_3)) {
    if (param_1 + 1 == param_2) {
      uVar2 = *param_1;
      memmove(param_1,param_1 + 1,(long)param_3 - (long)param_2);
      puVar8 = (undefined2 *)((long)param_1 + ((long)param_3 - (long)param_2));
      *puVar8 = uVar2;
    }
    else if (param_2 + 1 == param_3) {
      uVar2 = param_3[-1];
      __n = (long)(param_3 + -1) - (long)param_1;
      memmove((void *)((long)param_3 - __n),param_1,__n);
      *param_1 = uVar2;
      puVar8 = (undefined2 *)((long)param_3 - __n);
    }
    else {
      lVar15 = (long)param_2 - (long)param_1 >> 1;
      lVar14 = (long)param_3 - (long)param_2 >> 1;
      lVar10 = lVar14;
      if (lVar15 <= lVar14) {
        lVar10 = lVar15;
      }
      while (puVar3 = puVar8, 0 < lVar10) {
        while (lVar14 < lVar15) {
          uVar1 = (lVar14 * 2 - 2U >> 1) + 1;
          lVar10 = lVar15;
          do {
            lVar15 = lVar10 - lVar14;
            if (lVar15 * 2 + lVar10 * -2 != 0) {
              puVar8 = puVar3 + lVar10;
              puVar5 = puVar3 + lVar15;
              uVar18 = (long)puVar8 + (-2 - (long)puVar5);
              puVar4 = puVar8;
              if (5 < uVar18) {
                puVar12 = (undefined2 *)((long)puVar5 + (uVar18 & 0xfffffffffffffffe));
                puVar13 = (undefined2 *)((long)puVar8 + (uVar18 & 0xfffffffffffffffe));
                if ((puVar5 <= puVar12 && puVar8 <= puVar13) &&
                   ((puVar13 + 1 <= puVar5 || (puVar12 + 1 <= puVar8)))) {
                  uVar11 = (uVar18 >> 1) + 1;
                  if (uVar18 < 0x1e) {
                    uVar7 = 0;
                  }
                  else {
                    uVar7 = uVar11 & 0xfffffffffffffff0;
                    puVar6 = (undefined8 *)(puVar5 + 8);
                    puVar9 = (undefined8 *)(puVar8 + 8);
                    uVar18 = uVar1 & 0xfffffffffffffff0;
                    do {
                      uVar22 = puVar9[-2];
                      uVar23 = puVar9[1];
                      uVar21 = *puVar9;
                      uVar18 = uVar18 - 0x10;
                      uVar25 = puVar6[-1];
                      uVar24 = puVar6[-2];
                      uVar27 = puVar6[1];
                      uVar26 = *puVar6;
                      puVar6[-1] = puVar9[-1];
                      puVar6[-2] = uVar22;
                      puVar6[1] = uVar23;
                      *puVar6 = uVar21;
                      puVar6 = puVar6 + 4;
                      puVar9[-1] = uVar25;
                      puVar9[-2] = uVar24;
                      puVar9[1] = uVar27;
                      *puVar9 = uVar26;
                      puVar9 = puVar9 + 4;
                    } while (uVar18 != 0);
                    if (uVar11 == uVar7) goto LAB_00bae77c;
                    if ((uVar11 & 0xc) == 0) {
                      puVar5 = puVar5 + uVar7;
                      puVar4 = puVar8 + uVar7;
                      goto LAB_00bae7ec;
                    }
                  }
                  uVar18 = uVar11 & 0xfffffffffffffffc;
                  lVar10 = uVar7 - (uVar1 & 0xfffffffffffffffc);
                  puVar6 = (undefined8 *)(puVar8 + uVar7);
                  puVar9 = (undefined8 *)(puVar5 + uVar7);
                  do {
                    uVar22 = *puVar9;
                    lVar10 = lVar10 + 4;
                    *puVar9 = *puVar6;
                    *puVar6 = uVar22;
                    puVar6 = puVar6 + 1;
                    puVar9 = puVar9 + 1;
                  } while (lVar10 != 0);
                  puVar4 = puVar8 + uVar18;
                  puVar5 = puVar5 + uVar18;
                  if (uVar11 == uVar18) goto LAB_00bae77c;
                }
              }
LAB_00bae7ec:
              do {
                uVar2 = *puVar5;
                puVar12 = puVar5 + 1;
                *puVar5 = *puVar4;
                *puVar4 = uVar2;
                puVar4 = puVar4 + 1;
                puVar5 = puVar12;
              } while (puVar12 != puVar8);
            }
LAB_00bae77c:
            lVar10 = lVar15;
          } while (lVar14 < lVar15);
          if (lVar15 < 1) goto LAB_00baea38;
        }
        lVar17 = lVar15 * 2;
        lVar16 = 0;
        puVar6 = (undefined8 *)(puVar3 + 8);
        uVar1 = (lVar17 - 2U >> 1) + 1;
        puVar8 = puVar3;
        do {
          if (lVar17 != 0) {
            lVar10 = (-2 - (long)puVar3) + lVar15 * -2 * lVar16;
            puVar5 = puVar8 + lVar15;
            uVar18 = (long)puVar5 + lVar10;
            if (((uVar18 < 6) ||
                ((undefined2 *)((long)puVar8 + (uVar18 & 0xfffffffffffffffe)) < puVar8 ||
                 (undefined2 *)((long)puVar5 + (uVar18 & 0xfffffffffffffffe)) < puVar5)) ||
               ((uVar11 = (long)puVar5 + lVar10 & 0xfffffffffffffffe,
                puVar8 < (undefined2 *)((long)puVar5 + uVar11 + 2) &&
                (puVar5 < (undefined2 *)((long)puVar3 + uVar11 + lVar17 * lVar16 + 2))))) {
              puVar4 = puVar8 + lVar15;
              puVar12 = puVar8;
            }
            else {
              uVar11 = (uVar18 >> 1) + 1;
              if (uVar18 < 0x1e) {
                uVar7 = 0;
              }
              else {
                uVar7 = uVar11 & 0xfffffffffffffff0;
                puVar9 = (undefined8 *)(puVar5 + 8);
                uVar18 = uVar1 & 0xfffffffffffffff0;
                puVar19 = puVar6;
                do {
                  uVar22 = puVar9[-2];
                  uVar23 = puVar9[1];
                  uVar21 = *puVar9;
                  uVar18 = uVar18 - 0x10;
                  uVar25 = puVar19[-1];
                  uVar24 = puVar19[-2];
                  uVar27 = puVar19[1];
                  uVar26 = *puVar19;
                  puVar19[-1] = puVar9[-1];
                  puVar19[-2] = uVar22;
                  puVar19[1] = uVar23;
                  *puVar19 = uVar21;
                  puVar19 = puVar19 + 4;
                  puVar9[-1] = uVar25;
                  puVar9[-2] = uVar24;
                  puVar9[1] = uVar27;
                  *puVar9 = uVar26;
                  puVar9 = puVar9 + 4;
                } while (uVar18 != 0);
                if (uVar11 == uVar7) goto LAB_00bae8e8;
                if ((uVar11 & 0xc) == 0) {
                  puVar4 = puVar5 + uVar7;
                  puVar12 = puVar8 + uVar7;
                  goto LAB_00bae964;
                }
              }
              uVar18 = uVar11 & 0xfffffffffffffffc;
              lVar20 = uVar7 << 1;
              lVar10 = uVar7 - (uVar1 & 0xfffffffffffffffc);
              puVar4 = puVar5 + uVar18;
              puVar12 = puVar8 + uVar18;
              do {
                uVar22 = *(undefined8 *)((long)puVar8 + lVar20);
                lVar10 = lVar10 + 4;
                *(undefined8 *)((long)puVar8 + lVar20) = *(undefined8 *)((long)puVar5 + lVar20);
                *(undefined8 *)((long)puVar5 + lVar20) = uVar22;
                lVar20 = lVar20 + 8;
              } while (lVar10 != 0);
              if (uVar11 == uVar18) goto LAB_00bae8e8;
            }
LAB_00bae964:
            do {
              uVar2 = *puVar12;
              puVar13 = puVar12 + 1;
              *puVar12 = *puVar4;
              *puVar4 = uVar2;
              puVar4 = puVar4 + 1;
              puVar12 = puVar13;
            } while (puVar13 != puVar5);
          }
LAB_00bae8e8:
          lVar14 = lVar14 - lVar15;
          puVar8 = puVar8 + lVar15;
          lVar16 = lVar16 + 1;
          puVar6 = (undefined8 *)((long)puVar6 + lVar17);
          lVar10 = lVar14;
        } while (lVar15 <= lVar14);
      }
LAB_00baea38:
      puVar8 = (undefined2 *)(((long)param_3 - (long)param_2) + (long)param_1);
    }
  }
  auVar28._8_8_ = param_3;
  auVar28._0_8_ = puVar8;
  return auVar28;
}


// ===== 00baeaac  FUN_00baeaac =====

void FUN_00baeaac(long *param_1)

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
      FUN_00baef1c(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_00baf440(&local_50,lVar5);
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
      FUN_00baef1c(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0x1000);
    FUN_00baf1a4(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x80;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_00baec94(param_1,&local_50);
  return;
}


// ===== 00baec94  FUN_00baec94 =====

void FUN_00baec94(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_00baef04;
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
LAB_00baef04:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00baef1c  FUN_00baef1c =====

void FUN_00baef1c(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_00baf18c;
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
LAB_00baf18c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00baf1a4  FUN_00baf1a4 =====

void FUN_00baf1a4(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_00baf428;
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
LAB_00baf428:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00baf440  FUN_00baf440 =====

void FUN_00baf440(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_00baf6c4;
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
LAB_00baf6c4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00baf6dc  FUN_00baf6dc =====

void FUN_00baf6dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  param_1[2] = param_3;
  *param_1 = &PTR_FUN_00d478f0;
  param_1[1] = param_2;
  uVar1 = *param_4;
  param_1[4] = param_4[1];
  param_1[3] = uVar1;
  param_1[5] = param_4[2];
  puVar2 = (undefined8 *)param_4[3];
  param_1[6] = puVar2;
  pcVar3 = (code *)*puVar2;
  if (pcVar3 != (code *)0x0) {
    uVar1 = (*pcVar3)(*param_4);
    param_1[3] = uVar1;
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = param_1 + 8;
  return;
}


// ===== 00baf744  FUN_00baf744 =====

undefined8 FUN_00baf744(long param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar8 = (long *)(param_1 + 0x18);
  plVar3 = (long *)*plVar8;
  if (plVar3 == (long *)0x0) {
    return 0;
  }
  do {
    if (param_2 < plVar3[4]) {
      plVar3 = (long *)*plVar3;
    }
    else {
      if (param_2 <= plVar3[4]) {
        if (plVar3 == plVar8) {
          return 0;
        }
        if (*(char *)(plVar3[5] + 0x58) != '\x01') {
          return 0;
        }
        plVar4 = plVar3 + 6;
        plVar6 = (long *)*plVar4;
        plVar5 = plVar4;
        plVar7 = plVar6;
        if (plVar6 == (long *)0x0) {
          do {
            plVar6 = (long *)plVar5[2];
            bVar1 = plVar5 == (long *)*plVar6;
            plVar5 = plVar6;
          } while (bVar1);
          if (*(char *)((long)plVar6 + 0x59) != '\x01') {
            return 0;
          }
          do {
            plVar5 = (long *)plVar4[2];
            bVar1 = plVar4 == (long *)*plVar5;
            plVar4 = plVar5;
          } while (bVar1);
        }
        else {
          do {
            plVar4 = plVar7;
            plVar7 = (long *)plVar4[1];
          } while (plVar7 != (long *)0x0);
          if (*(char *)((long)plVar4 + 0x59) != '\x01') {
            return 0;
          }
          do {
            plVar5 = plVar6;
            plVar6 = (long *)plVar5[1];
          } while ((long *)plVar5[1] != (long *)0x0);
        }
        if (plVar3[7] - 1U != (ulong)(uint)((int)plVar5[4] - *(int *)(plVar3[5] + 0x20))) {
          return 0;
        }
        uVar2 = FUN_00baf8b4(param_1);
        plVar3 = *(long **)(param_1 + 0x18);
        do {
          if (plVar3 == (long *)0x0) {
            return uVar2;
          }
          while (plVar3[4] <= param_2) {
            if (param_2 <= plVar3[4]) {
              if (plVar3 != plVar8) {
                FUN_00bb0fbc(param_1 + 0x10);
                return uVar2;
              }
              return uVar2;
            }
            plVar3 = (long *)plVar3[1];
            if (plVar3 == (long *)0x0) {
              return uVar2;
            }
          }
          plVar3 = (long *)*plVar3;
        } while( true );
      }
      plVar3 = (long *)plVar3[1];
    }
    if (plVar3 == (long *)0x0) {
      return 0;
    }
  } while( true );
}


// ===== 00baf8b4  FUN_00baf8b4 =====

ulong FUN_00baf8b4(long param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong local_b0;
  long **local_a8;
  long **pplStack_a0;
  long local_98;
  long **local_90;
  long **pplStack_88;
  long local_80;
  long *local_70;
  long *local_68;
  long *local_60;
  undefined8 uStack_58;
  long *local_50;
  long lStack_48;
  
  uVar4 = param_2[2];
  if (uVar4 == 1) {
    lVar5 = *param_2;
    uStack_58 = *(undefined8 *)(lVar5 + 0x50);
    plVar11 = *(long **)(lVar5 + 0x48);
    *(undefined8 *)(lVar5 + 0x48) = 0;
    *(undefined8 *)(lVar5 + 0x50) = 0;
    local_50 = *(long **)(lVar5 + 0x28);
    plVar10 = *(long **)(lVar5 + 0x40);
    *(undefined8 *)(lVar5 + 0x40) = 0;
    local_70 = (long *)((ulong)*(ushort *)(lVar5 + 0x30) | (ulong)*(uint *)(lVar5 + 0x3c) << 0x20 |
                       0xaaaa0000);
    local_90 = &local_50;
    pplStack_88 = (long **)0x1;
    local_68 = plVar10;
    local_60 = plVar11;
    (**(code **)(*(long *)(param_1 + 8) + 0x28))(*(long *)(param_1 + 8) + 0x18,&local_90,&local_70);
    if (local_68 != (long *)0x0) {
      if ((long)local_60 - 1U < (ulong)((long)local_60 - (long)local_68)) goto LAB_00bafc10;
      local_60 = local_68;
      operator_delete(local_68);
    }
    uVar4 = (long)plVar11 - (long)plVar10;
  }
  else {
    local_70 = (long *)0x0;
    local_68 = (long *)0x0;
    local_60 = (long *)0x0;
    if (uVar4 != 0) {
      if (uVar4 >> 0x3d != 0) {
        FUN_00bb0ae0();
        goto LAB_00bafc6c;
      }
      local_68 = (long *)operator_new(uVar4 * 8);
      local_60 = local_68 + uVar4;
    }
    local_a8 = (long **)0x0;
    pplStack_a0 = (long **)0x0;
    local_80 = 0;
    plVar11 = param_2 + 1;
    plVar10 = (long *)*param_2;
    pplStack_88 = (long **)0x0;
    local_90 = (long **)0x0;
    local_70 = local_68;
    if (plVar10 == plVar11) {
      uVar4 = 0;
      local_98 = 0;
    }
    else {
      uVar4 = 0;
      plVar3 = plVar10;
      do {
        plVar6 = plVar3;
        plVar1 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) {
          do {
            plVar7 = (long *)plVar6[2];
            bVar2 = plVar6 != (long *)*plVar7;
            plVar6 = plVar7;
          } while (bVar2);
        }
        else {
          do {
            plVar7 = plVar1;
            plVar1 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
        }
        uVar4 = (uVar4 + plVar3[9]) - plVar3[8];
        plVar3 = plVar7;
      } while (plVar7 != plVar11);
      if ((uVar4 & 0xffffffff) == 0) {
        uVar4 = 0;
        local_90 = pplStack_88;
      }
      else {
        uVar4 = (ulong)(int)uVar4;
        if ((long)uVar4 < 0) {
LAB_00bafc6c:
                    /* WARNING: Subroutine does not return */
          FUN_005d34c0();
        }
        local_90 = (long **)operator_new(uVar4);
        local_80 = (long)local_90 + uVar4;
        pplStack_88 = local_90;
      }
      do {
        local_50 = (long *)plVar10[5];
        if (local_68 < local_60) {
          if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          plVar3 = local_68 + 1;
          *local_68 = (long)local_50;
        }
        else {
          plVar3 = (long *)FUN_00bb0af8(&local_70,&local_50);
        }
        local_68 = plVar3;
        FUN_007d3a1c(&local_90,pplStack_88,plVar10[8],plVar10[9],plVar10[9] - plVar10[8]);
        plVar3 = (long *)plVar10[1];
        plVar6 = plVar10;
        if ((long *)plVar10[1] == (long *)0x0) {
          do {
            plVar10 = (long *)plVar6[2];
            bVar2 = plVar6 != (long *)*plVar10;
            plVar6 = plVar10;
          } while (bVar2);
        }
        else {
          do {
            plVar10 = plVar3;
            plVar3 = (long *)*plVar10;
          } while ((long *)*plVar10 != (long *)0x0);
        }
      } while (plVar10 != plVar11);
      plVar10 = (long *)*param_2;
      local_98 = local_80;
      local_a8 = local_90;
      pplStack_a0 = pplStack_88;
    }
    local_50 = (long *)0x0;
    if ((long)local_68 - (long)local_70 != 0) {
      local_50 = local_70;
    }
    local_90 = (long **)0x0;
    pplStack_88 = (long **)0x0;
    local_80 = 0;
    local_b0 = (ulong)*(ushort *)(plVar10 + 6) | (ulong)*(uint *)((long)plVar10 + 0x3c) << 0x20 |
               0xaaaa0000;
    lStack_48 = (long)local_68 - (long)local_70 >> 3;
    (**(code **)(*(long *)(param_1 + 8) + 0x28))(*(long *)(param_1 + 8) + 0x18,&local_50,&local_b0);
    if (local_a8 != (long **)0x0) {
      if ((long)pplStack_a0 - 1U < (ulong)((long)pplStack_a0 - (long)local_a8)) goto LAB_00bafc10;
      pplStack_a0 = local_a8;
      operator_delete(local_a8);
    }
    if (local_90 != (long **)0x0) {
      if ((long)pplStack_88 - 1U < (ulong)((long)pplStack_88 - (long)local_90)) goto LAB_00bafc10;
      pplStack_88 = local_90;
      operator_delete(local_90);
    }
    if (local_70 != (long *)0x0) {
      uVar9 = (ulong)((long)local_68 + (-8 - ((long)local_68 << 0x3d))) >> 3;
      uVar8 = (ulong)(((long)local_70 - (long)local_68 << 0x3d) - ((long)local_70 - (long)local_68))
              >> 3;
      if (uVar9 <= uVar8) {
        uVar8 = uVar9;
      }
      plVar10 = local_68;
      if ((1 < uVar8) && ((((int)local_70 - (int)local_68 | -(int)local_68) & 7U) == 0)) {
        uVar8 = uVar8 & 0x1ffffffffffffffe;
        plVar10 = local_68 + -uVar8;
        do {
          uVar8 = uVar8 - 2;
        } while (uVar8 != 0);
      }
      do {
        if (plVar10 == local_70) {
          local_68 = local_70;
          operator_delete(local_70);
          return uVar4;
        }
        plVar10 = plVar10 + -1;
      } while (plVar10 != (long *)0x0);
LAB_00bafc10:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
  return uVar4;
}


// ===== 00bafc70  FUN_00bafc70 =====

long FUN_00bafc70(byte *param_1,uint param_2)

{
  uint uVar1;
  byte *pbVar2;
  bool bVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  if (param_1[0x34] == 1) {
    uVar1 = param_2 - *(uint *)(param_1 + 0x30);
    bVar3 = *(uint *)(param_1 + 0x30) <= param_2 && uVar1 != 0;
    if (uVar1 != 0x80000000) {
      bVar3 = uVar1 != 0xffffffff && (int)(uVar1 + 1) < 0 == SCARRY4(uVar1,1);
    }
    uVar11 = (ulong)uVar1;
    if (!bVar3) {
      uVar11 = (ulong)uVar1 | 0xffffffff00000000;
    }
    uVar11 = uVar11 + *(long *)(param_1 + 0x28);
  }
  else {
    uVar11 = (ulong)param_2;
  }
  lVar9 = 0;
  pbVar5 = *(byte **)(param_1 + 0x10);
  *(ulong *)(param_1 + 0x28) = uVar11;
  *(uint *)(param_1 + 0x30) = param_2;
  param_1[0x34] = 1;
  for (; (param_1 + 0x18 != pbVar5 && (*(long *)(pbVar5 + 0x20) <= (long)uVar11));
      pbVar5 = (byte *)FUN_00bb0fbc(param_1 + 0x10,pbVar5)) {
    if (*(byte **)(pbVar5 + 0x28) == pbVar5 + 0x30) {
      lVar10 = 0;
    }
    else {
      lVar10 = 0;
      pbVar6 = *(byte **)(pbVar5 + 0x28);
      do {
        pbVar7 = pbVar6;
        pbVar2 = *(byte **)(pbVar6 + 8);
        if (*(byte **)(pbVar6 + 8) == (byte *)0x0) {
          do {
            pbVar8 = *(byte **)(pbVar7 + 0x10);
            bVar3 = pbVar7 != *(byte **)pbVar8;
            pbVar7 = pbVar8;
          } while (bVar3);
        }
        else {
          do {
            pbVar8 = pbVar2;
            pbVar2 = *(byte **)pbVar8;
          } while (*(byte **)pbVar8 != (byte *)0x0);
        }
        lVar10 = (lVar10 + *(long *)(pbVar6 + 0x48)) - *(long *)(pbVar6 + 0x40);
        pbVar6 = pbVar8;
      } while (pbVar8 != pbVar5 + 0x30);
      lVar10 = (long)(int)lVar10;
    }
    lVar9 = lVar10 + lVar9;
  }
  if ((*param_1 & 1) == 0) {
    if (*(long *)(param_1 + 0x38) <= (long)uVar11) {
      *(ulong *)(param_1 + 0x38) = uVar11 + 1;
    }
    lVar4 = FUN_00baf744(param_1);
    lVar10 = 0;
    while (lVar4 != 0) {
      lVar10 = lVar10 + lVar4;
      *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
      lVar4 = FUN_00baf744(param_1);
    }
    lVar9 = lVar10 + lVar9;
  }
  return lVar9;
}


// ===== 00bafdfc  FUN_00bafdfc =====

ulong FUN_00bafdfc(char *param_1,undefined8 param_2,ushort *param_3)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  bool bVar5;
  ushort uVar6;
  long lVar7;
  void *pvVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ushort *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong local_a0;
  ulong *local_98;
  void *local_90;
  void *pvStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  
  puVar15 = param_3 + 8;
  lVar11 = *(long *)puVar15;
  uVar2 = *(uint *)(param_3 + 2);
  local_a0 = (ulong)uVar2;
  if (param_1[0x34] == '\x01') {
    uVar4 = uVar2 - *(uint *)(param_1 + 0x30);
    bVar5 = *(uint *)(param_1 + 0x30) <= uVar2 && uVar4 != 0;
    if (uVar4 != 0x80000000) {
      bVar5 = uVar4 != 0xffffffff && (int)(uVar4 + 1) < 0 == SCARRY4(uVar4,1);
    }
    local_a0 = (ulong)uVar4;
    if (!bVar5) {
      local_a0 = (ulong)uVar4 | 0xffffffff00000000;
    }
    local_a0 = local_a0 + *(long *)(param_1 + 0x28);
  }
  lVar10 = *(long *)(param_3 + 0xc);
  *(uint *)(param_1 + 0x30) = uVar2;
  *(ulong *)(param_1 + 0x28) = local_a0;
  param_1[0x34] = '\x01';
  uVar2 = *(uint *)(param_3 + 4);
  if (*param_1 == '\x01') {
    if (((char)param_3[0x14] == '\x01') && (*(char *)((long)param_3 + 0x29) == '\x01')) {
      uVar3 = *param_3;
      uVar2 = *(uint *)(param_3 + 6);
      local_80 = *(undefined8 *)(param_3 + 0x10);
      pvStack_88 = *(void **)(param_3 + 0xc);
      local_90 = *(void **)(param_3 + 8);
      puVar15[0] = 0;
      puVar15[1] = 0;
      puVar15[2] = 0;
      puVar15[3] = 0;
      param_3[0xc] = 0;
      param_3[0xd] = 0;
      param_3[0xe] = 0;
      param_3[0xf] = 0;
      param_3[0x10] = 0;
      param_3[0x11] = 0;
      param_3[0x12] = 0;
      param_3[0x13] = 0;
      local_98 = (ulong *)((ulong)uVar3 | (ulong)uVar2 << 0x20 | 0xaaaa0000);
      puStack_70 = &local_78;
      local_68 = 1;
      local_78 = param_2;
      (**(code **)(*(long *)(param_1 + 8) + 0x28))
                (*(long *)(param_1 + 8) + 0x18,&puStack_70,&local_98);
      if (local_90 != (void *)0x0) {
        if ((long)pvStack_88 - 1U < (ulong)((long)pvStack_88 - (long)local_90)) {
LAB_00bb01f8:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        pvStack_88 = local_90;
        pvVar8 = local_90;
LAB_00bb01a8:
        operator_delete(pvVar8);
      }
LAB_00bb01ac:
      uVar13 = 0;
      goto LAB_00bb01b0;
    }
  }
  else if (((local_a0 == *(ulong *)(param_1 + 0x38)) && ((char)param_3[0x14] == '\x01')) &&
          (*(char *)((long)param_3 + 0x29) == '\x01')) {
    uVar3 = *param_3;
    uVar2 = *(uint *)(param_3 + 6);
    local_80 = *(undefined8 *)(param_3 + 0x10);
    pvStack_88 = *(void **)(param_3 + 0xc);
    local_90 = *(void **)(param_3 + 8);
    puVar15[0] = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    puVar15[3] = 0;
    param_3[0xc] = 0;
    param_3[0xd] = 0;
    param_3[0xe] = 0;
    param_3[0xf] = 0;
    param_3[0x10] = 0;
    param_3[0x11] = 0;
    param_3[0x12] = 0;
    param_3[0x13] = 0;
    local_98 = (ulong *)((ulong)uVar3 | (ulong)uVar2 << 0x20 | 0xaaaa0000);
    puStack_70 = &local_78;
    local_68 = 1;
    local_78 = param_2;
    (**(code **)(*(long *)(param_1 + 8) + 0x28))
              (*(long *)(param_1 + 8) + 0x18,&puStack_70,&local_98);
    if (local_90 != (void *)0x0) {
      if ((long)pvStack_88 - 1U < (ulong)((long)pvStack_88 - (long)local_90)) goto LAB_00bb01f8;
      pvStack_88 = local_90;
      operator_delete(local_90);
    }
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
    lVar11 = FUN_00baf744(param_1);
    if (lVar11 == 0) {
      iVar12 = 0;
    }
    else {
      lVar10 = 0;
      do {
        lVar10 = lVar10 + lVar11;
        iVar12 = (int)lVar10;
        *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
        lVar11 = FUN_00baf744(param_1);
      } while (lVar11 != 0);
    }
    uVar13 = (ulong)(uint)-iVar12;
    goto LAB_00bb01b0;
  }
  local_98 = &local_a0;
  lVar7 = FUN_00bb1080(0,param_1 + 0x10,param_1 + 0x10,&DAT_001f94c3,&local_98,&puStack_70);
  pvVar8 = *(void **)(param_3 + 8);
  lVar1 = *(long *)(param_3 + 0xc);
  puVar15[0] = 0;
  puVar15[1] = 0;
  puVar15[2] = 0;
  puVar15[3] = 0;
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  param_3[0xe] = 0;
  param_3[0xf] = 0;
  uVar17 = *(undefined8 *)(param_3 + 0x10);
  param_3[0x10] = 0;
  param_3[0x11] = 0;
  param_3[0x12] = 0;
  param_3[0x13] = 0;
  puVar9 = *(undefined8 **)(lVar7 + 0x30);
  puVar14 = (undefined8 *)(lVar7 + 0x30);
  while (puVar16 = puVar14, puVar9 != (undefined8 *)0x0) {
    while (puVar16 = puVar9, *(uint *)(puVar16 + 4) <= uVar2) {
      if (uVar2 <= *(uint *)(puVar16 + 4)) {
        if (pvVar8 == (void *)0x0) goto LAB_00bb01ac;
        if (lVar1 - 1U < (ulong)(lVar1 - (long)pvVar8)) goto LAB_00bb01f8;
        goto LAB_00bb01a8;
      }
      puVar9 = (undefined8 *)puVar16[1];
      if ((undefined8 *)puVar16[1] == (undefined8 *)0x0) {
        puVar14 = puVar16 + 1;
        goto LAB_00bb00ac;
      }
    }
    puVar14 = puVar16;
    puVar9 = (undefined8 *)*puVar16;
  }
LAB_00bb00ac:
  puVar9 = (undefined8 *)operator_new(0x60);
  if ((puVar9 == (undefined8 *)0x0) || (puVar9 == (undefined8 *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar19 = *(undefined8 *)(param_3 + 4);
  uVar18 = *(undefined8 *)param_3;
  uVar3 = param_3[0x14];
  uVar6 = param_3[0x15];
  *(uint *)(puVar9 + 4) = uVar2;
  puVar9[5] = param_2;
  puVar9[7] = uVar19;
  puVar9[6] = uVar18;
  puVar9[8] = pvVar8;
  puVar9[9] = lVar1;
  puVar9[10] = uVar17;
  *(ushort *)(puVar9 + 0xb) = uVar3;
  *(char *)((long)puVar9 + 0x5a) = (char)uVar6;
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9[2] = puVar16;
  *puVar14 = puVar9;
  if (**(long **)(lVar7 + 0x28) != 0) {
    *(long *)(lVar7 + 0x28) = **(long **)(lVar7 + 0x28);
    puVar9 = (undefined8 *)*puVar14;
  }
  uVar13 = lVar10 - lVar11;
  FUN_005d5b94(*(undefined8 *)(lVar7 + 0x30),puVar9);
  *(long *)(lVar7 + 0x38) = *(long *)(lVar7 + 0x38) + 1;
  if (*param_1 == '\x01') {
    lVar11 = FUN_00baf744(param_1,local_a0);
    uVar13 = uVar13 - lVar11;
  }
  else if (local_a0 == *(ulong *)(param_1 + 0x38)) {
    lVar10 = FUN_00baf744(param_1);
    lVar11 = 0;
    while (lVar10 != 0) {
      lVar11 = lVar11 + lVar10;
      *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
      lVar10 = FUN_00baf744(param_1);
    }
    uVar13 = uVar13 - lVar11;
  }
LAB_00bb01b0:
  return uVar13 & 0xffffffff;
}


// ===== 00bb020c  FUN_00bb020c =====

void FUN_00bb020c(char *param_1,long param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint local_28;
  undefined4 uStack_24;
  uint local_4;
  
  if (*param_1 == '\x01') {
    puVar1 = *(uint **)(param_2 + 0x90);
    local_4 = (uint)*(ushort *)(param_1 + 2);
    if (puVar1 < *(uint **)(param_2 + 0x98)) {
      if (puVar1 == (uint *)0x0) {
LAB_00bb0294:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *puVar1 = local_4;
      *(uint **)(param_2 + 0x90) = puVar1 + 1;
    }
    else {
      uVar3 = FUN_00bb0bec(param_2 + 0x88,&local_4);
      *(undefined8 *)(param_2 + 0x90) = uVar3;
    }
  }
  else {
    puVar2 = *(undefined8 **)(param_2 + 0x78);
    local_28 = (uint)*(ushort *)(param_1 + 2);
    uStack_24 = (undefined4)*(undefined8 *)(param_1 + 0x38);
    if (puVar2 < *(undefined8 **)(param_2 + 0x80)) {
      if (puVar2 == (undefined8 *)0x0) goto LAB_00bb0294;
      puVar4 = puVar2 + 1;
      *puVar2 = CONCAT44(uStack_24,local_28);
    }
    else {
      puVar4 = (undefined8 *)FUN_00bb0cf8(param_2 + 0x70,&local_28);
    }
    *(undefined8 **)(param_2 + 0x78) = puVar4;
  }
  return;
}


// ===== 00bb02cc  FUN_00bb02cc =====

undefined4 FUN_00bb02cc(long param_1,undefined8 param_2,ushort *param_3)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  void *local_70;
  long local_68;
  undefined8 local_60;
  ushort local_58;
  undefined1 local_56;
  byte local_4c [2];
  ushort uStack_4a;
  long local_48;
  byte *pbStack_40;
  long *local_38;
  byte *pbStack_30;
  long local_28;
  
  uVar2 = *param_3;
  plVar7 = *(long **)(param_1 + 0x40);
  _local_4c = CONCAT31(stack0xffffffffffffffb5,(byte)param_3[0x15]);
  _local_4c = CONCAT22(uVar2,local_4c);
  if (plVar7 != (long *)0x0) {
    uVar4 = (uint)(byte)param_3[0x15];
    do {
      while( true ) {
        uVar3 = *(uint *)(plVar7 + 4) >> 0x10;
        uVar1 = *(uint *)(plVar7 + 4) & 0xff;
        bVar5 = uVar2 < uVar3;
        if (uVar4 != uVar1) {
          bVar5 = uVar4 < uVar1;
        }
        if (bVar5) break;
        bVar5 = uVar3 < uVar2;
        if (uVar4 != uVar1) {
          bVar5 = uVar1 < uVar4;
        }
        if (!bVar5) {
          if (plVar7 != (long *)(param_1 + 0x40)) goto LAB_00bb03b0;
          goto LAB_00bb037c;
        }
        plVar7 = (long *)plVar7[1];
        if (plVar7 == (long *)0x0) goto LAB_00bb037c;
      }
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
  }
LAB_00bb037c:
  pbStack_40 = local_4c;
  local_28 = param_1 + 0x38;
  local_38 = &local_48;
  local_48 = param_1;
  pbStack_30 = pbStack_40;
  plVar7 = (long *)FUN_00bb1194(&local_28,local_4c,&DAT_001f94c3,&pbStack_30,&pbStack_40);
LAB_00bb03b0:
  local_60 = *(undefined8 *)(param_3 + 0x10);
  uStack_78 = *(undefined8 *)(param_3 + 4);
  local_80 = *(undefined8 *)param_3;
  local_68 = *(long *)(param_3 + 0xc);
  local_70 = *(void **)(param_3 + 8);
  local_56 = (undefined1)param_3[0x15];
  local_58 = param_3[0x14];
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  param_3[0xe] = 0;
  param_3[0xf] = 0;
  param_3[0x10] = 0;
  param_3[0x11] = 0;
  param_3[0x12] = 0;
  param_3[0x13] = 0;
  uVar6 = FUN_00bafdfc(plVar7 + 5,param_2,&local_80);
  if (local_70 != (void *)0x0) {
    if (local_68 - 1U < (ulong)(local_68 - (long)local_70)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    operator_delete(local_70);
  }
  return uVar6;
}


// ===== 00bb0444  FUN_00bb0444 =====

long FUN_00bb0444(long param_1,undefined8 param_2,ushort *param_3,long param_4)

{
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  byte local_84 [2];
  ushort uStack_82;
  long local_80;
  byte *pbStack_78;
  long *local_70;
  byte *local_68;
  long local_48;
  
  if (param_4 * 0xc == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    puVar1 = param_3 + param_4 * 6;
    do {
      uVar3 = *param_3;
      plVar8 = *(long **)(param_1 + 0x40);
      _local_84 = CONCAT31(stack0xffffffffffffff7d,(byte)param_3[2]);
      _local_84 = CONCAT22(uVar3,local_84);
      if (plVar8 != (long *)0x0) {
        uVar5 = (uint)(byte)param_3[2];
        do {
          while( true ) {
            uVar4 = *(uint *)(plVar8 + 4) >> 0x10;
            uVar2 = *(uint *)(plVar8 + 4) & 0xff;
            bVar6 = uVar3 < uVar4;
            if (uVar5 != uVar2) {
              bVar6 = uVar5 < uVar2;
            }
            if (bVar6) break;
            bVar6 = uVar4 < uVar3;
            if (uVar5 != uVar2) {
              bVar6 = uVar2 < uVar5;
            }
            if (!bVar6) {
              if (plVar8 != (long *)(param_1 + 0x40)) goto LAB_00bb04c8;
              goto LAB_00bb04a0;
            }
            plVar8 = (long *)plVar8[1];
            if (plVar8 == (long *)0x0) goto LAB_00bb04a0;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
LAB_00bb04a0:
      local_80 = param_1;
      pbStack_78 = local_84;
      local_70 = &local_80;
      local_68 = local_84;
      local_48 = param_1 + 0x38;
      plVar8 = (long *)FUN_00bb1194(&local_48,local_84,&DAT_001f94c3,&local_68,&pbStack_78);
LAB_00bb04c8:
      lVar7 = FUN_00bafc70(plVar8 + 5,*(undefined4 *)(param_3 + 4));
      param_3 = param_3 + 6;
      lVar9 = lVar7 + lVar9;
    } while (param_3 != puVar1);
  }
  return lVar9;
}


// ===== 00bb05a0  FUN_00bb05a0 =====

void FUN_00bb05a0(long param_1,ushort *param_2,ulong param_3)

{
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  long *plVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  undefined4 local_8c;
  long local_88;
  undefined4 *puStack_80;
  long *local_78;
  undefined4 *local_70;
  long lStack_68;
  
  if (param_3 == 0) {
    plVar8 = *(long **)(param_1 + 0x38);
    while (plVar8 != (long *)(param_1 + 0x40)) {
      plVar8[10] = 0;
      *(undefined4 *)(plVar8 + 0xb) = 0;
      *(undefined1 *)((long)plVar8 + 0x5c) = 1;
      plVar8[0xc] = 0;
      plVar7 = plVar8;
      plVar5 = (long *)plVar8[1];
      if ((long *)plVar8[1] == (long *)0x0) {
        do {
          plVar8 = (long *)plVar7[2];
          bVar6 = plVar7 != (long *)*plVar8;
          plVar7 = plVar8;
        } while (bVar6);
      }
      else {
        do {
          plVar8 = plVar5;
          plVar5 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
    }
  }
  else if ((param_3 & 0x7fffffffffffffff) != 0) {
    puVar1 = param_2 + param_3;
    plVar8 = (long *)(param_1 + 0x40);
    do {
      uVar3 = *param_2;
      plVar7 = (long *)*plVar8;
      local_8c = CONCAT31(local_8c._1_3_,1);
      local_8c = CONCAT22(uVar3,(undefined2)local_8c);
      if (plVar7 != (long *)0x0) {
        do {
          while( true ) {
            uVar4 = *(uint *)(plVar7 + 4) >> 0x10;
            uVar2 = *(uint *)(plVar7 + 4) & 0xff;
            bVar6 = uVar3 < uVar4;
            if (uVar2 != 1) {
              bVar6 = 1 < uVar2;
            }
            if (bVar6) break;
            bVar6 = uVar4 < uVar3;
            if (uVar2 != 1) {
              bVar6 = uVar2 == 0;
            }
            if (!bVar6) {
              if (plVar7 != plVar8) goto LAB_00bb06e8;
              goto LAB_00bb06c4;
            }
            plVar7 = (long *)plVar7[1];
            if (plVar7 == (long *)0x0) goto LAB_00bb06c4;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
LAB_00bb06c4:
      local_88 = param_1;
      puStack_80 = &local_8c;
      local_78 = &local_88;
      local_70 = &local_8c;
      lStack_68 = param_1 + 0x38;
      plVar7 = (long *)FUN_00bb1194(&lStack_68,&local_8c,&DAT_001f94c3,&local_70,&puStack_80);
LAB_00bb06e8:
      plVar7[10] = 0;
      *(undefined4 *)(plVar7 + 0xb) = 0;
      *(undefined1 *)((long)plVar7 + 0x5c) = 1;
      plVar7[0xc] = 0;
      plVar7 = (long *)*plVar8;
      local_8c = CONCAT22(uVar3,(short)local_8c) & 0xffffff00;
      if (plVar7 != (long *)0x0) {
        do {
          while( true ) {
            uVar4 = *(uint *)(plVar7 + 4) >> 0x10;
            uVar2 = *(uint *)(plVar7 + 4) & 0xff;
            bVar6 = uVar3 < uVar4;
            if (uVar2 != 0) {
              bVar6 = uVar2 != 0;
            }
            if (bVar6) break;
            if (uVar2 != 0 || uVar3 <= uVar4) {
              if (plVar7 != plVar8) goto LAB_00bb0620;
              goto LAB_00bb05fc;
            }
            plVar7 = (long *)plVar7[1];
            if (plVar7 == (long *)0x0) goto LAB_00bb05fc;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
LAB_00bb05fc:
      local_88 = param_1;
      puStack_80 = &local_8c;
      local_78 = &local_88;
      local_70 = &local_8c;
      lStack_68 = param_1 + 0x38;
      plVar7 = (long *)FUN_00bb1194(&lStack_68,&local_8c,&DAT_001f94c3,&local_70,&puStack_80);
LAB_00bb0620:
      param_2 = param_2 + 1;
      plVar7[10] = 0;
      *(undefined4 *)(plVar7 + 0xb) = 0;
      *(undefined1 *)((long)plVar7 + 0x5c) = 1;
      plVar7[0xc] = 0;
    } while (param_2 != puVar1);
  }
  return;
}


// ===== 00bb0804  FUN_00bb0804 =====

undefined4 FUN_00bb0804(long param_1)

{
  long *plVar1;
  bool bVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = *(long **)(param_1 + 0x38);
  while( true ) {
    if (plVar4 == (long *)(param_1 + 0x40)) {
      return 0;
    }
    if (plVar4[9] != 0) break;
    plVar5 = plVar4;
    plVar1 = (long *)plVar4[1];
    if ((long *)plVar4[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar5[2];
        bVar2 = plVar5 != (long *)*plVar4;
        plVar5 = plVar4;
      } while (bVar2);
    }
    else {
      do {
        plVar4 = plVar1;
        plVar1 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  }
  uVar3 = 0x100;
  if ((char)plVar4[4] == '\0') {
    uVar3 = 0x80;
  }
  return uVar3;
}


// ===== 00bb0870  FUN_00bb0870 =====

void FUN_00bb0870(long param_1,undefined8 param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(param_1 + 0x38);
  while (plVar3 != (long *)(param_1 + 0x40)) {
    FUN_00bb020c(plVar3 + 5,param_2);
    plVar1 = (long *)plVar3[1];
    plVar4 = plVar3;
    if ((long *)plVar3[1] == (long *)0x0) {
      do {
        plVar3 = (long *)plVar4[2];
        bVar2 = plVar4 != (long *)*plVar3;
        plVar4 = plVar3;
      } while (bVar2);
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  return;
}


// ===== 00bb08f4  FUN_00bb08f4 =====

void FUN_00bb08f4(long param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_9c;
  long local_98;
  undefined1 *local_90;
  long *local_88;
  undefined4 *local_80;
  undefined1 *local_78;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined2 local_6a;
  long local_68;
  
  puVar3 = *(undefined4 **)(param_2 + 0x70);
  puVar1 = *(undefined4 **)(param_2 + 0x78);
  if (puVar3 != puVar1) {
    do {
      local_6b = 0xaa;
      local_6c = 0;
      local_6a = (undefined2)*puVar3;
      local_9c = puVar3[1];
      local_98 = param_1;
      local_90 = &local_6c;
      local_88 = &local_98;
      local_80 = &local_9c;
      local_78 = &local_6c;
      local_68 = param_1 + 0x38;
      FUN_00bb1310(&local_68,&local_6c,&DAT_001f94c3,&local_78,&local_90);
      puVar3 = puVar3 + 2;
    } while (puVar3 != puVar1);
  }
  puVar3 = *(undefined4 **)(param_2 + 0x90);
  if (*(undefined4 **)(param_2 + 0x88) != puVar3) {
    puVar1 = *(undefined4 **)(param_2 + 0x88);
    do {
      local_6b = 0xaa;
      puVar2 = puVar1 + 1;
      local_6c = 1;
      local_6a = (undefined2)*puVar1;
      local_98 = param_1;
      local_90 = &local_6c;
      local_88 = &local_98;
      local_78 = &local_6c;
      local_68 = param_1 + 0x38;
      FUN_00bb1494(&local_68,&local_6c,&DAT_001f94c3,&local_78,&local_90);
      puVar1 = puVar2;
    } while (puVar2 != puVar3);
  }
  return;
}


// ===== 00bb0a24  FUN_00bb0a24 =====

void FUN_00bb0a24(undefined8 *param_1)

{
  undefined8 *local_8;
  
  *param_1 = &PTR_FUN_00d478f0;
  local_8 = param_1 + 7;
  FUN_00bb0e04(&local_8,param_1[8]);
  if (*(code **)(param_1[6] + 8) != (code *)0x0) {
    (**(code **)(param_1[6] + 8))(param_1[3]);
  }
  return;
}


// ===== 00bb0a7c  FUN_00bb0a7c =====

void FUN_00bb0a7c(undefined8 *param_1)

{
  undefined8 *local_8;
  
  *param_1 = &PTR_FUN_00d478f0;
  local_8 = param_1 + 7;
  FUN_00bb0e04(&local_8,param_1[8]);
  if (*(code **)(param_1[6] + 8) != (code *)0x0) {
    (**(code **)(param_1[6] + 8))(param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00bb0ae0  FUN_00bb0ae0 =====

void FUN_00bb0ae0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00bb0af8  FUN_00bb0af8 =====

undefined8 * FUN_00bb0af8(long *param_1,undefined8 *param_2)

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
    FUN_00bb0ae0();
LAB_00bb0be8:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00bb0be8;
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


// ===== 00bb0bec  FUN_00bb0bec =====

undefined4 * FUN_00bb0bec(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  void *__dest;
  
  puVar6 = (undefined4 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar6 >> 2) + 1;
  if (uVar1 >> 0x3e != 0) {
    FUN_00bb0ce0();
LAB_00bb0cdc:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 1;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7ffffffffffffffb < uVar4) {
    uVar5 = 0x3fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3e != 0) goto LAB_00bb0cdc;
    pvVar2 = operator_new(uVar5 << 2);
    puVar6 = (undefined4 *)((long)pvVar2 + (long)puVar6);
  }
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = *param_2;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 1);
    param_1[2] = (long)((long)pvVar2 + uVar5 * 4);
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


// ===== 00bb0ce0  FUN_00bb0ce0 =====

void FUN_00bb0ce0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00bb0cf8  FUN_00bb0cf8 =====

undefined8 * FUN_00bb0cf8(long *param_1,undefined8 *param_2)

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
    FUN_00bb0dec();
LAB_00bb0de8:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00bb0de8;
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


// ===== 00bb0dec  FUN_00bb0dec =====

void FUN_00bb0dec(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00bb0e04  FUN_00bb0e04 =====

void FUN_00bb0e04(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *local_18;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_00bb0e04(param_1,*param_2);
    if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    uVar1 = param_2[1];
    local_18 = param_2 + 7;
    FUN_00bb0e8c(&local_18,param_2[8]);
    operator_delete(param_2);
    FUN_00bb0e04(param_1,uVar1);
  }
  return;
}


// ===== 00bb0e8c  FUN_00bb0e8c =====

void FUN_00bb0e8c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *local_18;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_00bb0e8c(param_1,*param_2);
    if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    uVar1 = param_2[1];
    local_18 = param_2 + 5;
    FUN_00bb0f14(&local_18,param_2[6]);
    operator_delete(param_2);
    FUN_00bb0e8c(param_1,uVar1);
  }
  return;
}


// ===== 00bb0f14  FUN_00bb0f14 =====

void FUN_00bb0f14(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00bb0f14(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
LAB_00bb0fa8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar1 = (void *)param_2[8];
      puVar2 = (undefined8 *)param_2[1];
      if (pvVar1 != (void *)0x0) {
        if (param_2[9] - 1 < (ulong)(param_2[9] - (long)pvVar1)) goto LAB_00bb0fa8;
        param_2[9] = pvVar1;
        operator_delete(pvVar1);
      }
      operator_delete(param_2);
      param_2 = puVar2;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}


// ===== 00bb0fbc  FUN_00bb0fbc =====

undefined8 * FUN_00bb0fbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *local_28;
  
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
  if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  local_28 = param_2 + 5;
  FUN_00bb0f14(&local_28,param_2[6]);
  operator_delete(param_2);
  return puVar4;
}


// ===== 00bb1080  FUN_00bb1080 =====

undefined1  [16]
FUN_00bb1080(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  plVar6 = (long *)*param_5;
  plVar3 = param_2 + 1;
  plVar7 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    lVar5 = *plVar6;
    plVar1 = (long *)*plVar3;
    do {
      while (plVar2 = plVar1, plVar3 = plVar2, lVar5 < plVar2[4]) {
        plVar1 = (long *)*plVar2;
        plVar7 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_00bb10ec;
      }
      if (lVar5 <= plVar2[4]) {
        uVar4 = 0;
        goto LAB_00bb1164;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar7 = plVar2 + 1;
  }
LAB_00bb10ec:
  plVar2 = (long *)operator_new(0x40);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  lVar5 = *plVar6;
  plVar2[7] = 0;
  plVar2[6] = 0;
  plVar2[4] = lVar5;
  plVar2[5] = (long)(plVar2 + 6);
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = (long)plVar3;
  *plVar7 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar3 = (long *)*plVar7;
  }
  FUN_005d5b94(param_2[1],plVar3);
  uVar4 = 1;
  param_2[2] = param_2[2] + 1;
LAB_00bb1164:
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar2;
  return auVar8;
}


// ===== 00bb1194  FUN_00bb1194 =====

undefined1  [16]
FUN_00bb1194(undefined8 *param_1,uint *param_2,undefined8 param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  long *plVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  
  plVar13 = (long *)*param_1;
  plVar10 = plVar13 + 1;
  plVar14 = plVar10;
  if ((long *)*plVar10 != (long *)0x0) {
    uVar6 = *param_2 >> 0x10;
    uVar1 = *param_2 & 0xff;
    plVar4 = (long *)*plVar10;
    do {
      while( true ) {
        plVar9 = plVar4;
        uVar7 = *(uint *)(plVar9 + 4) >> 0x10;
        uVar2 = *(uint *)(plVar9 + 4) & 0xff;
        bVar8 = uVar6 < uVar7;
        if (uVar1 != uVar2) {
          bVar8 = uVar1 < uVar2;
        }
        plVar10 = plVar9;
        if (bVar8) break;
        bVar8 = uVar7 < uVar6;
        if (uVar1 != uVar2) {
          bVar8 = uVar2 < uVar1;
        }
        if (!bVar8) {
          uVar11 = 0;
          goto LAB_00bb12e0;
        }
        plVar4 = (long *)plVar9[1];
        if ((long *)plVar9[1] == (long *)0x0) {
          plVar14 = plVar9 + 1;
          goto LAB_00bb1240;
        }
      }
      plVar4 = (long *)*plVar9;
      plVar14 = plVar9;
    } while ((long *)*plVar9 != (long *)0x0);
  }
LAB_00bb1240:
  plVar9 = (long *)operator_new(0x68);
  if ((plVar9 == (long *)0x0) || (*plVar9 = 0, plVar9 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  puVar3 = (undefined4 *)*param_5;
  plVar4 = (long *)param_5[1];
  *(undefined4 *)(plVar9 + 4) = *(undefined4 *)*param_4;
  uVar5 = *puVar3;
  lVar12 = *plVar4;
  plVar9[9] = 0;
  plVar9[10] = 0;
  *(undefined4 *)(plVar9 + 5) = uVar5;
  plVar9[8] = 0;
  *(undefined4 *)(plVar9 + 0xb) = 0;
  plVar9[6] = lVar12;
  plVar9[7] = (long)(plVar9 + 8);
  *(undefined1 *)((long)plVar9 + 0x5c) = 1;
  plVar9[0xc] = 0;
  *plVar9 = 0;
  plVar9[1] = 0;
  plVar9[2] = (long)plVar10;
  *plVar14 = (long)plVar9;
  plVar10 = plVar9;
  if (*(long *)*plVar13 != 0) {
    *plVar13 = *(long *)*plVar13;
    plVar10 = (long *)*plVar14;
  }
  FUN_005d5b94(plVar13[1],plVar10);
  uVar11 = 1;
  plVar13[2] = plVar13[2] + 1;
LAB_00bb12e0:
  auVar15._8_8_ = uVar11;
  auVar15._0_8_ = plVar9;
  return auVar15;
}


// ===== 00bb1310  FUN_00bb1310 =====

undefined1  [16]
FUN_00bb1310(undefined8 *param_1,uint *param_2,undefined8 param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  long *plVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  uint *puVar13;
  long *plVar14;
  long *plVar15;
  undefined1 auVar16 [16];
  
  plVar14 = (long *)*param_1;
  plVar10 = plVar14 + 1;
  plVar15 = plVar10;
  if ((long *)*plVar10 != (long *)0x0) {
    uVar6 = *param_2 >> 0x10;
    uVar1 = *param_2 & 0xff;
    plVar4 = (long *)*plVar10;
    do {
      while( true ) {
        plVar9 = plVar4;
        uVar7 = *(uint *)(plVar9 + 4) >> 0x10;
        uVar2 = *(uint *)(plVar9 + 4) & 0xff;
        bVar8 = uVar6 < uVar7;
        if (uVar1 != uVar2) {
          bVar8 = uVar1 < uVar2;
        }
        plVar10 = plVar9;
        if (bVar8) break;
        bVar8 = uVar7 < uVar6;
        if (uVar1 != uVar2) {
          bVar8 = uVar2 < uVar1;
        }
        if (!bVar8) {
          uVar11 = 0;
          goto LAB_00bb1464;
        }
        plVar4 = (long *)plVar9[1];
        if ((long *)plVar9[1] == (long *)0x0) {
          plVar15 = plVar9 + 1;
          goto LAB_00bb13bc;
        }
      }
      plVar4 = (long *)*plVar9;
      plVar15 = plVar9;
    } while ((long *)*plVar9 != (long *)0x0);
  }
LAB_00bb13bc:
  plVar9 = (long *)operator_new(0x68);
  if ((plVar9 == (long *)0x0) || (*plVar9 = 0, plVar9 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  puVar3 = (undefined4 *)*param_5;
  plVar4 = (long *)param_5[1];
  puVar13 = (uint *)param_5[2];
  *(undefined4 *)(plVar9 + 4) = *(undefined4 *)*param_4;
  lVar12 = *plVar4;
  uVar5 = *puVar3;
  uVar1 = *puVar13;
  plVar9[8] = 0;
  plVar9[6] = lVar12;
  plVar9[7] = (long)(plVar9 + 8);
  *(undefined4 *)(plVar9 + 5) = uVar5;
  plVar9[9] = 0;
  plVar9[10] = (ulong)uVar1;
  *(uint *)(plVar9 + 0xb) = uVar1;
  *(undefined1 *)((long)plVar9 + 0x5c) = 1;
  plVar9[0xc] = (ulong)uVar1;
  *plVar9 = 0;
  plVar9[1] = 0;
  plVar9[2] = (long)plVar10;
  *plVar15 = (long)plVar9;
  plVar10 = plVar9;
  if (*(long *)*plVar14 != 0) {
    *plVar14 = *(long *)*plVar14;
    plVar10 = (long *)*plVar15;
  }
  FUN_005d5b94(plVar14[1],plVar10);
  uVar11 = 1;
  plVar14[2] = plVar14[2] + 1;
LAB_00bb1464:
  auVar16._8_8_ = uVar11;
  auVar16._0_8_ = plVar9;
  return auVar16;
}


// ===== 00bb1494  FUN_00bb1494 =====

undefined1  [16]
FUN_00bb1494(undefined8 *param_1,uint *param_2,undefined8 param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  long *plVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  
  plVar13 = (long *)*param_1;
  plVar10 = plVar13 + 1;
  plVar14 = plVar10;
  if ((long *)*plVar10 != (long *)0x0) {
    uVar6 = *param_2 >> 0x10;
    uVar1 = *param_2 & 0xff;
    plVar4 = (long *)*plVar10;
    do {
      while( true ) {
        plVar9 = plVar4;
        uVar7 = *(uint *)(plVar9 + 4) >> 0x10;
        uVar2 = *(uint *)(plVar9 + 4) & 0xff;
        bVar8 = uVar6 < uVar7;
        if (uVar1 != uVar2) {
          bVar8 = uVar1 < uVar2;
        }
        plVar10 = plVar9;
        if (bVar8) break;
        bVar8 = uVar7 < uVar6;
        if (uVar1 != uVar2) {
          bVar8 = uVar2 < uVar1;
        }
        if (!bVar8) {
          uVar11 = 0;
          goto LAB_00bb15e0;
        }
        plVar4 = (long *)plVar9[1];
        if ((long *)plVar9[1] == (long *)0x0) {
          plVar14 = plVar9 + 1;
          goto LAB_00bb1540;
        }
      }
      plVar4 = (long *)*plVar9;
      plVar14 = plVar9;
    } while ((long *)*plVar9 != (long *)0x0);
  }
LAB_00bb1540:
  plVar9 = (long *)operator_new(0x68);
  if ((plVar9 == (long *)0x0) || (*plVar9 = 0, plVar9 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  puVar3 = (undefined4 *)*param_5;
  plVar4 = (long *)param_5[1];
  *(undefined4 *)(plVar9 + 4) = *(undefined4 *)*param_4;
  uVar5 = *puVar3;
  lVar12 = *plVar4;
  plVar9[9] = 0;
  plVar9[10] = 0;
  *(undefined4 *)(plVar9 + 5) = uVar5;
  plVar9[8] = 0;
  *(undefined4 *)(plVar9 + 0xb) = 0;
  plVar9[6] = lVar12;
  plVar9[7] = (long)(plVar9 + 8);
  *(undefined1 *)((long)plVar9 + 0x5c) = 1;
  plVar9[0xc] = 0;
  *plVar9 = 0;
  plVar9[1] = 0;
  plVar9[2] = (long)plVar10;
  *plVar14 = (long)plVar9;
  plVar10 = plVar9;
  if (*(long *)*plVar13 != 0) {
    *plVar13 = *(long *)*plVar13;
    plVar10 = (long *)*plVar14;
  }
  FUN_005d5b94(plVar13[1],plVar10);
  uVar11 = 1;
  plVar13[2] = plVar13[2] + 1;
LAB_00bb15e0:
  auVar15._8_8_ = uVar11;
  auVar15._0_8_ = plVar9;
  return auVar15;
}


// ===== 00bb1610  FUN_00bb1610 =====

void FUN_00bb1610(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1[2] = param_3;
  *param_1 = &PTR_FUN_00d47940;
  param_1[1] = param_2;
  uVar2 = *param_4;
  param_1[4] = param_4[1];
  param_1[3] = uVar2;
  param_1[5] = param_4[2];
  lVar1 = param_4[3];
  param_1[6] = lVar1;
  if (*(long *)(lVar1 + 8) != 0) {
    param_4[2] = 0;
    param_4[3] = &DAT_001fbc50;
  }
  param_1[8] = 0;
  param_1[7] = param_1 + 8;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[10] = param_1 + 0xb;
  return;
}


// ===== 00bb166c  FUN_00bb166c =====

int FUN_00bb166c(long *param_1,undefined8 param_2,ushort *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined8 local_68;
  long *local_60;
  void *local_58;
  void *pvStack_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  local_68 = param_2;
  if (((char)param_3[0x14] == '\x01') && (*(char *)((long)param_3 + 0x29) == '\x01')) {
    local_48 = *(undefined8 *)(param_3 + 0x10);
    pvStack_50 = *(void **)(param_3 + 0xc);
    local_58 = *(void **)(param_3 + 8);
    param_3[8] = 0;
    param_3[9] = 0;
    param_3[10] = 0;
    param_3[0xb] = 0;
    param_3[0xc] = 0;
    param_3[0xd] = 0;
    param_3[0xe] = 0;
    param_3[0xf] = 0;
    param_3[0x10] = 0;
    param_3[0x11] = 0;
    param_3[0x12] = 0;
    param_3[0x13] = 0;
    local_60 = (long *)((ulong)*param_3 | (ulong)*(uint *)(param_3 + 6) << 0x20 | 0xaaaa0000);
    local_40 = &local_18;
    uStack_38 = 1;
    local_18 = param_2;
    (**(code **)(*param_1 + 0x28))(*param_1 + 0x18,&local_40,&local_60);
    if (local_58 != (void *)0x0) {
      if ((long)pvStack_50 - 1U < (ulong)((long)pvStack_50 - (long)local_58)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvStack_50 = local_58;
      operator_delete(local_58);
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_3 + 8);
    uVar2 = *(undefined8 *)(param_3 + 0xc);
    local_60 = param_1 + 1;
    auVar4 = FUN_00bb2d80(&local_60,&local_68,&local_68);
    if ((auVar4 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      iVar3 = FUN_00bb179c(param_1,auVar4._0_8_);
      return ((int)uVar2 - (int)uVar1) - iVar3;
    }
  }
  return 0;
}


// ===== 00bb179c  FUN_00bb179c =====

undefined8 FUN_00bb179c(long param_1,long *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  lVar3 = param_2[4];
  lVar4 = lVar3;
  plVar7 = param_2;
  do {
    if ((*(byte *)(plVar7 + 10) & 1) != 0) {
      do {
        plVar5 = (long *)param_2[1];
        if (*(char *)((long)param_2 + 0x51) == '\x01') {
          if (plVar5 == (long *)0x0) {
            do {
              plVar6 = (long *)param_2[2];
              bVar1 = param_2 != (long *)*plVar6;
              param_2 = plVar6;
            } while (bVar1);
          }
          else {
            do {
              plVar6 = plVar5;
              plVar5 = (long *)*plVar6;
            } while ((long *)*plVar6 != (long *)0x0);
          }
          uVar2 = FUN_00bb18ec(param_1,plVar7,plVar6);
          for (; plVar7 != plVar6; plVar7 = (long *)FUN_00bb2eb8((long *)(param_1 + 8),plVar7)) {
          }
          return uVar2;
        }
        plVar6 = param_2;
        if (plVar5 == (long *)0x0) {
          do {
            param_2 = (long *)plVar6[2];
            bVar1 = plVar6 != (long *)*param_2;
            plVar6 = param_2;
          } while (bVar1);
        }
        else {
          do {
            param_2 = plVar5;
            plVar5 = (long *)*param_2;
          } while ((long *)*param_2 != (long *)0x0);
        }
      } while ((param_2 != (long *)(param_1 + 0x10)) && (lVar3 = lVar3 + 1, param_2[4] == lVar3));
      return 0;
    }
    if (plVar7 == *(long **)(param_1 + 8)) {
      return 0;
    }
    plVar5 = (long *)*plVar7;
    plVar6 = plVar7;
    if ((long *)*plVar7 == (long *)0x0) {
      do {
        plVar7 = (long *)plVar6[2];
        bVar1 = plVar6 == (long *)*plVar7;
        plVar6 = plVar7;
      } while (bVar1);
    }
    else {
      do {
        plVar7 = plVar5;
        plVar5 = (long *)plVar7[1];
      } while ((long *)plVar7[1] != (long *)0x0);
    }
    bVar1 = plVar7[4] + 1 == lVar4;
    lVar4 = plVar7[4];
  } while (bVar1);
  return 0;
}


// ===== 00bb18ec  FUN_00bb18ec =====

ulong FUN_00bb18ec(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong local_b0;
  long **local_a8;
  long **pplStack_a0;
  long local_98;
  long **local_90;
  long **pplStack_88;
  long local_80;
  long *local_70;
  long *local_68;
  long *local_60;
  long lStack_58;
  long *local_50;
  long lStack_48;
  
  uVar3 = 0;
  plVar2 = param_2;
  if (param_2 != param_3) {
    do {
      uVar7 = uVar3;
      plVar9 = (long *)plVar2[1];
      if ((long *)plVar2[1] == (long *)0x0) {
        do {
          plVar4 = (long *)plVar2[2];
          bVar1 = plVar2 != (long *)*plVar4;
          plVar2 = plVar4;
        } while (bVar1);
      }
      else {
        do {
          plVar4 = plVar9;
          plVar9 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      uVar3 = uVar7 + 1;
      plVar2 = plVar4;
    } while (plVar4 != param_3);
    if (uVar7 == 0) {
      plVar2 = (long *)param_2[7];
      local_50 = (long *)param_2[4];
      lStack_58 = param_2[9];
      plVar9 = (long *)param_2[8];
      param_2[7] = 0;
      param_2[8] = 0;
      param_2[9] = 0;
      local_70 = (long *)((ulong)*(ushort *)(param_2 + 5) |
                          (ulong)*(uint *)((long)param_2 + 0x34) << 0x20 | 0xaaaa0000);
      local_90 = &local_50;
      pplStack_88 = (long **)0x1;
      local_68 = plVar2;
      local_60 = plVar9;
      (**(code **)(*param_1 + 0x28))(*param_1 + 0x18,&local_90,&local_70);
      if (local_68 == (long *)0x0) {
LAB_00bb1c90:
        return (long)plVar9 - (long)plVar2;
      }
      if ((ulong)((long)local_60 - (long)local_68) <= (long)local_60 - 1U) {
        local_60 = local_68;
        operator_delete(local_68);
        goto LAB_00bb1c90;
      }
      goto LAB_00bb1bf4;
    }
  }
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  local_60 = (long *)0x0;
  local_90 = (long **)0x0;
  pplStack_88 = (long **)0x0;
  local_80 = 0;
  if (param_2 == param_3) {
    uVar7 = 0;
    if (uVar3 != 0) goto LAB_00bb19e4;
LAB_00bb1ac4:
    if (uVar7 != 0) goto LAB_00bb1a0c;
LAB_00bb1acc:
    local_98 = 0;
    local_a8 = (long **)0x0;
    local_70 = local_68;
    plVar2 = local_68;
  }
  else {
    lVar5 = 0;
    plVar2 = param_2;
    do {
      plVar9 = plVar2;
      plVar4 = (long *)plVar2[1];
      if ((long *)plVar2[1] == (long *)0x0) {
        do {
          plVar8 = (long *)plVar9[2];
          bVar1 = plVar9 != (long *)*plVar8;
          plVar9 = plVar8;
        } while (bVar1);
      }
      else {
        do {
          plVar8 = plVar4;
          plVar4 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
      lVar5 = (lVar5 + plVar2[8]) - plVar2[7];
      plVar2 = plVar8;
    } while (plVar8 != param_3);
    uVar7 = (ulong)(int)lVar5;
    if (uVar3 == 0) goto LAB_00bb1ac4;
LAB_00bb19e4:
    if (uVar3 >> 0x3d != 0) {
      FUN_00bb0ae0();
      goto LAB_00bb1ce8;
    }
    local_68 = (long *)operator_new(uVar3 * 8);
    local_60 = local_68 + uVar3;
    if (uVar7 == 0) goto LAB_00bb1acc;
LAB_00bb1a0c:
    plVar2 = local_68;
    local_70 = local_68;
    if ((long)uVar7 < 0) {
LAB_00bb1ce8:
                    /* WARNING: Subroutine does not return */
      FUN_005d34c0();
    }
    local_a8 = (long **)operator_new(uVar7);
    local_98 = (long)local_a8 + uVar7;
    local_90 = local_a8;
    pplStack_88 = local_a8;
    local_80 = local_98;
  }
  plVar9 = plVar2;
  plVar4 = param_2;
  pplStack_a0 = local_a8;
  if (param_2 != param_3) {
    do {
      if (local_68 < local_60) {
        if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        plVar2 = local_68 + 1;
        *local_68 = plVar4[4];
      }
      else {
        plVar2 = (long *)FUN_00bb0af8(&local_70,plVar4 + 4);
      }
      local_68 = plVar2;
      FUN_007d3a1c(&local_90,pplStack_88,plVar4[7],plVar4[8],plVar4[8] - plVar4[7]);
      plVar2 = (long *)plVar4[1];
      if ((long *)plVar4[1] == (long *)0x0) {
        do {
          plVar8 = (long *)plVar4[2];
          bVar1 = plVar4 != (long *)*plVar8;
          plVar4 = plVar8;
        } while (bVar1);
      }
      else {
        do {
          plVar8 = plVar2;
          plVar2 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
      local_98 = local_80;
      plVar2 = local_70;
      plVar9 = local_68;
      plVar4 = plVar8;
      local_a8 = local_90;
      pplStack_a0 = pplStack_88;
    } while (plVar8 != param_3);
  }
  local_90 = (long **)0x0;
  local_50 = (long *)0x0;
  if ((long)plVar9 - (long)plVar2 != 0) {
    local_50 = plVar2;
  }
  pplStack_88 = (long **)0x0;
  local_80 = 0;
  local_b0 = (ulong)*(ushort *)(param_2 + 5) | (ulong)*(uint *)((long)param_2 + 0x34) << 0x20 |
             0xaaaa0000;
  lStack_48 = (long)plVar9 - (long)plVar2 >> 3;
  (**(code **)(*param_1 + 0x28))(*param_1 + 0x18,&local_50,&local_b0);
  if (local_a8 != (long **)0x0) {
    if ((long)pplStack_a0 - 1U < (ulong)((long)pplStack_a0 - (long)local_a8)) goto LAB_00bb1bf4;
    pplStack_a0 = local_a8;
    operator_delete(local_a8);
  }
  if (local_90 != (long **)0x0) {
    if ((long)pplStack_88 - 1U < (ulong)((long)pplStack_88 - (long)local_90)) goto LAB_00bb1bf4;
    pplStack_88 = local_90;
    operator_delete(local_90);
  }
  if (local_70 == (long *)0x0) {
    return uVar7;
  }
  uVar6 = (ulong)((long)local_68 + (-8 - ((long)local_68 << 0x3d))) >> 3;
  uVar3 = (ulong)(((long)local_70 - (long)local_68 << 0x3d) - ((long)local_70 - (long)local_68)) >>
          3;
  if (uVar6 <= uVar3) {
    uVar3 = uVar6;
  }
  plVar2 = local_68;
  if ((1 < uVar3) && ((((int)local_70 - (int)local_68 | -(int)local_68) & 7U) == 0)) {
    uVar3 = uVar3 & 0x1ffffffffffffffe;
    plVar2 = local_68 + -uVar3;
    do {
      uVar3 = uVar3 - 2;
    } while (uVar3 != 0);
  }
  do {
    if (plVar2 == local_70) {
      local_68 = local_70;
      operator_delete(local_70);
      return uVar7;
    }
    plVar2 = plVar2 + -1;
  } while (plVar2 != (long *)0x0);
LAB_00bb1bf4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00bb1cec  FUN_00bb1cec =====

undefined8 FUN_00bb1cec(long param_1)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  
  if (((*(long *)(param_1 + 0x18) != 0) &&
      (lVar5 = *(long *)(param_1 + 8), *(long *)(lVar5 + 0x20) == *(long *)(param_1 + 0x30))) &&
     (*(char *)(*(long *)(lVar5 + 0x28) + 0x50) == '\x01')) {
    plVar4 = (long *)(lVar5 + 0x30);
    plVar7 = (long *)*plVar4;
    plVar9 = plVar4;
    plVar11 = plVar7;
    if (plVar7 == (long *)0x0) {
      do {
        plVar7 = (long *)plVar9[2];
        bVar2 = plVar9 == (long *)*plVar7;
        plVar9 = plVar7;
      } while (bVar2);
      if (*(char *)((long)plVar7 + 0x51) != '\x01') {
        return 0;
      }
      do {
        plVar9 = (long *)plVar4[2];
        bVar2 = plVar4 == (long *)*plVar9;
        plVar4 = plVar9;
      } while (bVar2);
    }
    else {
      do {
        lVar10 = (long)plVar11;
        plVar11 = *(long **)(lVar10 + 8);
      } while (plVar11 != (long *)0x0);
      if (*(char *)(lVar10 + 0x51) != '\x01') {
        return 0;
      }
      do {
        plVar9 = plVar7;
        plVar7 = (long *)plVar9[1];
      } while ((long *)plVar9[1] != (long *)0x0);
    }
    lVar10 = *(long *)(*(long *)(lVar5 + 0x28) + 0x20);
    iVar6 = (int)plVar9[4];
    iVar8 = (int)lVar10;
    uVar1 = iVar6 - iVar8;
    if (plVar9[4] <= lVar10) {
      uVar1 = iVar8 - iVar6;
    }
    if (*(long *)(lVar5 + 0x38) - 1U == (ulong)uVar1) {
      uVar3 = FUN_00bb18ec(param_1);
      FUN_00bb2f8c(param_1 + 8,*(undefined8 *)(param_1 + 8));
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
      return uVar3;
    }
  }
  return 0;
}


// ===== 00bb1e08  FUN_00bb1e08 =====

long FUN_00bb1e08(long *param_1,undefined8 param_2,undefined8 param_3,ushort *param_4)

{
  long lVar1;
  ulong extraout_x1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  void *local_60;
  void *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 *puStack_40;
  undefined8 local_38;
  
  local_78 = param_3;
  uStack_70 = param_2;
  if (((char)param_4[0x14] == '\x01') && (*(char *)((long)param_4 + 0x29) == '\x01')) {
    pvVar3 = *(void **)(param_4 + 8);
    uStack_50 = *(undefined8 *)(param_4 + 0x10);
    pvVar5 = *(void **)(param_4 + 0xc);
    param_4[8] = 0;
    param_4[9] = 0;
    param_4[10] = 0;
    param_4[0xb] = 0;
    param_4[0xc] = 0;
    param_4[0xd] = 0;
    param_4[0xe] = 0;
    param_4[0xf] = 0;
    param_4[0x10] = 0;
    param_4[0x11] = 0;
    param_4[0x12] = 0;
    param_4[0x13] = 0;
    local_68 = (undefined8 *)((ulong)*param_4 | (ulong)*(uint *)(param_4 + 6) << 0x20 | 0xaaaa0000);
    puStack_40 = &local_48;
    local_38 = 1;
    local_60 = pvVar3;
    local_58 = pvVar5;
    local_48 = param_3;
    (**(code **)(*param_1 + 0x28))(*param_1 + 0x18,&puStack_40,&local_68);
    if (local_60 != (void *)0x0) {
      if ((long)local_58 - 1U < (ulong)((long)local_58 - (long)local_60)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      local_58 = local_60;
      operator_delete(local_60);
    }
    param_1[6] = param_1[6] + 1;
    lVar2 = (long)pvVar5 - (long)pvVar3;
  }
  else {
    lVar4 = *(long *)(param_4 + 8);
    lVar1 = *(long *)(param_4 + 0xc);
    local_68 = &uStack_70;
    lVar2 = FUN_00bb3050(0,param_1 + 1,param_1 + 1,&DAT_001f94c3,&local_68,&puStack_40);
    local_68 = (undefined8 *)(lVar2 + 0x28);
    FUN_00bb2d80(&local_68,&local_78,&local_78,param_4);
    lVar2 = 0;
    if ((extraout_x1 & 1) == 0) {
      return lVar1 - lVar4;
    }
  }
  lVar4 = 0;
  do {
    lVar1 = FUN_00bb1cec(param_1);
    lVar4 = lVar1 + lVar4;
  } while (lVar1 != 0);
  return lVar4 + lVar2;
}


// ===== 00bb1f80  FUN_00bb1f80 =====

int FUN_00bb1f80(long param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong extraout_x1;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  void *pvVar9;
  ulong local_40;
  undefined8 local_38;
  undefined1 uStack_29;
  ulong *local_28;
  
  uVar6 = *(undefined8 *)(param_3 + 0x10);
  uVar1 = *(ushort *)(param_3 + 2);
  local_40 = (ulong)uVar1;
  uVar7 = *(undefined8 *)(param_3 + 0x18);
  if (*(char *)(param_1 + 0x2a) == '\x01') {
    uVar2 = (uint)uVar1 - (uint)*(ushort *)(param_1 + 0x28);
    iVar8 = (int)(short)uVar2;
    bVar3 = (uint)*(ushort *)(param_1 + 0x28) <= (uint)uVar1 && uVar2 != 0;
    if (uVar2 != 0x8000) {
      bVar3 = iVar8 != -1 && iVar8 + 1 < 0 == SCARRY4(iVar8,1);
    }
    local_40 = (ulong)uVar2 & 0xffff;
    if (!bVar3) {
      local_40 = (ulong)uVar2 & 0xffff | 0xffffffffffff0000;
    }
    local_40 = local_40 + *(long *)(param_1 + 0x20);
  }
  *(ushort *)(param_1 + 0x28) = uVar1;
  iVar8 = (int)uVar7 - (int)uVar6;
  *(ulong *)(param_1 + 0x20) = local_40;
  *(undefined1 *)(param_1 + 0x2a) = 1;
  local_38 = param_2;
  if (local_40 == *(ulong *)(param_1 + 0x30)) {
    lVar5 = *(long *)(param_3 + 0x18);
    pvVar9 = *(void **)(param_3 + 0x10);
    *(undefined8 *)(param_3 + 0x18) = 0;
    *(undefined8 *)(param_3 + 0x20) = 0;
    *(undefined8 *)(param_3 + 0x10) = 0;
    iVar4 = FUN_00bb1e08();
    iVar8 = iVar8 - iVar4;
    if (pvVar9 != (void *)0x0) {
      if (lVar5 - 1U < (ulong)(lVar5 - (long)pvVar9)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      operator_delete(pvVar9);
    }
  }
  else {
    local_28 = &local_40;
    lVar5 = FUN_00bb3050(0,param_1 + 8,param_1 + 8,&DAT_001f94c3,&local_28,&uStack_29);
    local_28 = (ulong *)(lVar5 + 0x28);
    FUN_00bb2d80(&local_28,&local_38,&local_38,param_3);
    if ((extraout_x1 & 1) == 0) {
      iVar8 = 0;
    }
  }
  return iVar8;
}


// ===== 00bb2100  FUN_00bb2100 =====

long FUN_00bb2100(long param_1,ushort param_2)

{
  ushort uVar1;
  ushort uVar2;
  long *plVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  int iVar16;
  
  uVar13 = (ulong)param_2;
  if (*(char *)(param_1 + 0x2a) == '\x01') {
    uVar1 = *(ushort *)(param_1 + 0x28);
    uVar2 = param_2 - uVar1;
    iVar16 = (int)(short)uVar2;
    bVar4 = uVar1 < param_2;
    if ((uint)param_2 - (uint)uVar1 != 0x8000) {
      bVar4 = iVar16 != -1 && iVar16 + 1 < 0 == SCARRY4(iVar16,1);
    }
    uVar13 = (ulong)uVar2;
    if (!bVar4) {
      uVar13 = (ulong)uVar2 | 0xffffffffffff0000;
    }
    uVar13 = uVar13 + *(long *)(param_1 + 0x20);
  }
  plVar6 = *(long **)(param_1 + 0x10);
  *(ulong *)(param_1 + 0x20) = uVar13;
  *(ushort *)(param_1 + 0x28) = param_2;
  *(undefined1 *)(param_1 + 0x2a) = 1;
  plVar15 = (long *)(param_1 + 0x10);
  for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    plVar8 = plVar6 + 4;
    plVar7 = plVar6;
    if ((*plVar8 <= (long)uVar13) &&
       (plVar6 = plVar6 + 1, plVar7 = plVar15, (long)uVar13 <= *plVar8)) goto LAB_00bb21c0;
    plVar15 = plVar7;
  }
LAB_00bb21c8:
  plVar6 = *(long **)(param_1 + 8);
  if (plVar6 == plVar15) {
    lVar10 = 0;
  }
  else {
    iVar16 = 0;
    plVar8 = plVar6;
    do {
      if ((long *)plVar8[5] == plVar8 + 6) {
        iVar9 = 0;
      }
      else {
        lVar10 = 0;
        plVar7 = (long *)plVar8[5];
        do {
          plVar11 = plVar7;
          plVar3 = (long *)plVar7[1];
          if ((long *)plVar7[1] == (long *)0x0) {
            do {
              plVar12 = (long *)plVar11[2];
              bVar4 = plVar11 != (long *)*plVar12;
              plVar11 = plVar12;
            } while (bVar4);
          }
          else {
            do {
              plVar12 = plVar3;
              plVar3 = (long *)*plVar12;
            } while ((long *)*plVar12 != (long *)0x0);
          }
          lVar10 = (lVar10 + plVar7[8]) - plVar7[7];
          iVar9 = (int)lVar10;
          plVar7 = plVar12;
        } while (plVar12 != plVar8 + 6);
      }
      plVar7 = plVar8;
      plVar11 = (long *)plVar8[1];
      if ((long *)plVar8[1] == (long *)0x0) {
        do {
          plVar8 = (long *)plVar7[2];
          bVar4 = plVar7 != (long *)*plVar8;
          plVar7 = plVar8;
        } while (bVar4);
      }
      else {
        do {
          plVar8 = plVar11;
          plVar11 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
      iVar16 = iVar9 + iVar16;
    } while (plVar8 != plVar15);
    do {
      plVar6 = (long *)FUN_00bb2f8c((undefined8 *)(param_1 + 8),plVar6);
    } while (plVar15 != plVar6);
    lVar10 = (long)iVar16;
  }
  if (*(long *)(param_1 + 0x30) <= (long)uVar13) {
    *(ulong *)(param_1 + 0x30) = uVar13 + 1;
  }
  lVar14 = 0;
  do {
    lVar5 = FUN_00bb1cec(param_1);
    lVar14 = lVar5 + lVar14;
  } while (lVar5 != 0);
  return lVar14 + lVar10;
LAB_00bb21c0:
  do {
    plVar15 = plVar7;
    plVar6 = (long *)*plVar6;
    plVar7 = plVar6;
  } while (plVar6 != (long *)0x0);
  goto LAB_00bb21c8;
}


// ===== 00bb22e8  FUN_00bb22e8 =====

undefined4 FUN_00bb22e8(undefined8 *****param_1,undefined8 param_2,undefined8 *****param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 ****ppppuVar3;
  undefined8 ***local_b0;
  undefined8 ***pppuStack_a8;
  undefined8 ***local_a0;
  undefined8 ***local_98;
  undefined8 ***local_90;
  undefined2 local_88;
  undefined1 local_86;
  undefined8 ****local_78;
  undefined8 ***local_70;
  undefined8 ***pppuStack_68;
  undefined8 ***local_60;
  undefined8 ***local_58;
  undefined8 ***local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined8 ****local_38;
  undefined8 ****ppppuStack_30;
  undefined8 ****local_28;
  
  if (*(char *)((long)param_3 + 0x2a) == '\x01') {
    ppppuStack_30 = &local_38;
    local_38 = param_1;
    local_28 = param_3;
    lVar2 = FUN_00bb3164(0,param_1 + 7,param_1 + 7,&DAT_001f94c3,&local_28,&ppppuStack_30);
    local_50 = param_3[4];
    pppuStack_68 = param_3[1];
    local_70 = *param_3;
    local_58 = param_3[3];
    local_60 = param_3[2];
    local_46 = *(undefined1 *)((long)param_3 + 0x2a);
    local_48 = *(undefined2 *)(param_3 + 5);
    param_3[2] = (undefined8 ****)0x0;
    param_3[3] = (undefined8 ****)0x0;
    param_3[4] = (undefined8 ****)0x0;
    uVar1 = FUN_00bb166c(lVar2 + 0x28,param_2,&local_70);
    if ((undefined8 ****)local_60 == (undefined8 ****)0x0) {
      return uVar1;
    }
    if ((long)local_58 - 1U < (ulong)((long)local_58 - (long)local_60)) {
LAB_00bb2454:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    local_58 = local_60;
    ppppuVar3 = (undefined8 ****)local_60;
  }
  else {
    local_38 = &local_78;
    local_28 = param_1 + 10;
    local_78 = param_1;
    ppppuStack_30 = param_3;
    lVar2 = FUN_00bb3288(&local_28,param_3,&DAT_001f94c3,&ppppuStack_30,&local_38);
    local_90 = param_3[4];
    pppuStack_a8 = param_3[1];
    local_b0 = *param_3;
    local_98 = param_3[3];
    local_a0 = param_3[2];
    local_86 = *(undefined1 *)((long)param_3 + 0x2a);
    local_88 = *(undefined2 *)(param_3 + 5);
    param_3[2] = (undefined8 ****)0x0;
    param_3[3] = (undefined8 ****)0x0;
    param_3[4] = (undefined8 ****)0x0;
    uVar1 = FUN_00bb1f80(lVar2 + 0x28,param_2,&local_b0);
    if ((undefined8 ****)local_a0 == (undefined8 ****)0x0) {
      return uVar1;
    }
    if ((long)local_98 - 1U < (ulong)((long)local_98 - (long)local_a0)) goto LAB_00bb2454;
    local_98 = local_a0;
    ppppuVar3 = (undefined8 ****)local_a0;
  }
  operator_delete(ppppuVar3);
  return uVar1;
}


// ===== 00bb2468  FUN_00bb2468 =====

long FUN_00bb2468(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long local_80;
  undefined1 *puStack_78;
  long local_70;
  long local_68;
  
  if (*(long **)(param_1 + 0x38) == (long *)(param_1 + 0x40)) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    plVar9 = *(long **)(param_1 + 0x38);
    do {
      plVar10 = plVar9 + 7;
      plVar7 = (long *)*plVar10;
      plVar4 = plVar10;
      if (plVar7 != (long *)0x0) {
LAB_00bb24e0:
        plVar5 = plVar7 + 4;
        plVar10 = plVar7;
        if ((param_2 < *plVar5) || (plVar7 = plVar7 + 1, plVar10 = plVar4, *plVar5 < param_2))
        goto LAB_00bb24d8;
        plVar7 = (long *)*plVar7;
        while (plVar4 = plVar7, plVar4 != (long *)0x0) {
          plVar10 = plVar4;
          plVar7 = (long *)*plVar4;
        }
      }
LAB_00bb2514:
      plVar7 = (long *)plVar9[6];
      if (plVar7 == plVar10) {
        lVar11 = 0;
        plVar7 = (long *)plVar9[1];
        if ((long *)plVar9[1] != (long *)0x0) goto LAB_00bb25ac;
LAB_00bb25bc:
        do {
          plVar10 = (long *)plVar9[2];
          bVar2 = plVar9 != (long *)*plVar10;
          plVar9 = plVar10;
        } while (bVar2);
      }
      else {
        lVar11 = 0;
        plVar4 = plVar7;
        do {
          plVar5 = plVar4;
          plVar1 = (long *)plVar4[1];
          if ((long *)plVar4[1] == (long *)0x0) {
            do {
              plVar6 = (long *)plVar5[2];
              bVar2 = plVar5 != (long *)*plVar6;
              plVar5 = plVar6;
            } while (bVar2);
          }
          else {
            do {
              plVar6 = plVar1;
              plVar1 = (long *)*plVar6;
            } while ((long *)*plVar6 != (long *)0x0);
          }
          lVar11 = (lVar11 + plVar4[8]) - plVar4[7];
          plVar4 = plVar6;
        } while (plVar6 != plVar10);
        do {
          plVar7 = (long *)FUN_00bb2eb8(plVar9 + 6,plVar7);
        } while (plVar10 != plVar7);
        lVar11 = (long)(int)lVar11;
        plVar7 = (long *)plVar9[1];
        if ((long *)plVar9[1] == (long *)0x0) goto LAB_00bb25bc;
LAB_00bb25ac:
        do {
          plVar10 = plVar7;
          plVar7 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
      lVar8 = lVar11 + lVar8;
      plVar9 = plVar10;
    } while (plVar10 != (long *)(param_1 + 0x40));
  }
  if (param_4 * 0xc != 0) {
    lVar11 = param_3 + param_4 * 0xc;
    do {
      local_80 = param_1;
      puStack_78 = (undefined1 *)&local_80;
      local_70 = param_3;
      local_68 = param_1 + 0x50;
      lVar3 = FUN_00bb3288(&local_68,param_3,&DAT_001f94c3,&local_70,&puStack_78);
      lVar3 = FUN_00bb2100(lVar3 + 0x28,*(undefined2 *)(param_3 + 2));
      param_3 = param_3 + 0xc;
      lVar8 = lVar3 + lVar8;
    } while (param_3 != lVar11);
  }
  return lVar8;
LAB_00bb24d8:
  plVar7 = (long *)*plVar7;
  plVar4 = plVar10;
  if (plVar7 == (long *)0x0) goto LAB_00bb2514;
  goto LAB_00bb24e0;
}


// ===== 00bb2660  FUN_00bb2660 =====

void FUN_00bb2660(long param_1,ushort *param_2,ulong param_3)

{
  ushort *puVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  
  if (param_3 == 0) {
    plVar5 = *(long **)(param_1 + 0x50);
    while (plVar5 != (long *)(param_1 + 0x58)) {
      plVar5[9] = 0;
      *(undefined2 *)(plVar5 + 10) = 0;
      *(undefined1 *)((long)plVar5 + 0x52) = 1;
      plVar5[0xb] = 0;
      plVar4 = plVar5;
      plVar2 = (long *)plVar5[1];
      if ((long *)plVar5[1] == (long *)0x0) {
        do {
          plVar5 = (long *)plVar4[2];
          bVar3 = plVar4 != (long *)*plVar5;
          plVar4 = plVar5;
        } while (bVar3);
      }
      else {
        do {
          plVar5 = plVar2;
          plVar2 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
    }
  }
  else if ((param_3 & 0x7fffffffffffffff) != 0) {
    puVar1 = param_2 + param_3;
    do {
      plVar5 = *(long **)(param_1 + 0x58);
      if (plVar5 != (long *)0x0) {
        do {
          while (*(ushort *)(plVar5 + 4) <= *param_2) {
            if (*param_2 <= *(ushort *)(plVar5 + 4)) {
              if (plVar5 != (long *)(param_1 + 0x58)) {
                plVar5[9] = 0;
                *(undefined2 *)(plVar5 + 10) = 0;
                *(undefined1 *)((long)plVar5 + 0x52) = 1;
                plVar5[0xb] = 0;
              }
              goto LAB_00bb2680;
            }
            plVar5 = (long *)plVar5[1];
            if (plVar5 == (long *)0x0) goto LAB_00bb2680;
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
LAB_00bb2680:
      param_2 = param_2 + 1;
    } while (param_2 != puVar1);
  }
  return;
}


// ===== 00bb2744  FUN_00bb2744 =====

uint FUN_00bb2744(long param_1)

{
  long *plVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x50);
  do {
    if (plVar5 == (long *)(param_1 + 0x58)) {
      uVar3 = 0;
LAB_00bb27a0:
      plVar5 = *(long **)(param_1 + 0x38);
      while( true ) {
        if (plVar5 == (long *)(param_1 + 0x40)) {
          return uVar3;
        }
        if (plVar5[8] != 0) break;
        plVar4 = plVar5;
        plVar1 = (long *)plVar5[1];
        if ((long *)plVar5[1] == (long *)0x0) {
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
      }
      return uVar3 | 0x100;
    }
    if (plVar5[8] != 0) {
      uVar3 = 0x80;
      goto LAB_00bb27a0;
    }
    plVar4 = plVar5;
    plVar1 = (long *)plVar5[1];
    if ((long *)plVar5[1] == (long *)0x0) {
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
  } while( true );
}


// ===== 00bb27f0  FUN_00bb27f0 =====

void FUN_00bb27f0(long param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  uint *puVar5;
  uint *puVar6;
  long *plVar7;
  long *plVar8;
  uint local_3c;
  ulong local_38;
  
  plVar8 = *(long **)(param_1 + 0x50);
  if (plVar8 != (long *)(param_1 + 0x58)) {
    puVar3 = *(ulong **)(param_2 + 0x78);
    do {
      local_38 = (ulong)CONCAT24((short)plVar8[0xb],(uint)*(ushort *)(plVar8 + 4));
      if (puVar3 < *(ulong **)(param_2 + 0x80)) {
        if (puVar3 == (ulong *)0x0) goto LAB_00bb293c;
        puVar4 = puVar3 + 1;
        *puVar3 = local_38;
      }
      else {
        puVar4 = (ulong *)FUN_00bb0cf8(param_2 + 0x70,&local_38);
      }
      *(ulong **)(param_2 + 0x78) = puVar4;
      plVar1 = (long *)plVar8[1];
      plVar7 = plVar8;
      if ((long *)plVar8[1] == (long *)0x0) {
        do {
          plVar8 = (long *)plVar7[2];
          bVar2 = plVar7 != (long *)*plVar8;
          plVar7 = plVar8;
        } while (bVar2);
      }
      else {
        do {
          plVar8 = plVar1;
          plVar1 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
      puVar3 = puVar4;
    } while (plVar8 != (long *)(param_1 + 0x58));
  }
  plVar8 = *(long **)(param_1 + 0x38);
  if (plVar8 != (long *)(param_1 + 0x40)) {
    puVar5 = *(uint **)(param_2 + 0x90);
    do {
      local_3c = (uint)*(ushort *)(plVar8 + 4);
      if (puVar5 < *(uint **)(param_2 + 0x98)) {
        if (puVar5 == (uint *)0x0) {
LAB_00bb293c:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar6 = puVar5 + 1;
        *puVar5 = local_3c;
      }
      else {
        puVar6 = (uint *)FUN_00bb0bec(param_2 + 0x88,&local_3c);
      }
      *(uint **)(param_2 + 0x90) = puVar6;
      plVar1 = (long *)plVar8[1];
      plVar7 = plVar8;
      if ((long *)plVar8[1] == (long *)0x0) {
        do {
          plVar8 = (long *)plVar7[2];
          bVar2 = plVar7 != (long *)*plVar8;
          plVar7 = plVar8;
        } while (bVar2);
      }
      else {
        do {
          plVar8 = plVar1;
          plVar1 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
      puVar5 = puVar6;
    } while (plVar8 != (long *)(param_1 + 0x40));
  }
  return;
}


// ===== 00bb2950  FUN_00bb2950 =====

void FUN_00bb2950(undefined2 *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar3;
  undefined2 local_8c [2];
  undefined2 *local_88;
  undefined2 **local_80;
  undefined2 *puStack_78;
  undefined2 local_6c [2];
  undefined2 *local_68;
  undefined2 **local_48;
  undefined4 *puVar2;
  
  puVar3 = *(undefined4 **)(param_2 + 0x70);
  puVar1 = *(undefined4 **)(param_2 + 0x78);
  if (puVar3 != puVar1) {
    do {
      local_6c[0] = (undefined2)*puVar3;
      local_8c[0] = (undefined2)puVar3[1];
      local_88 = param_1;
      local_80 = &local_88;
      puStack_78 = local_8c;
      local_68 = local_6c;
      local_48 = (undefined2 **)(param_1 + 0x28);
      FUN_00bb33c0(&local_48,local_6c,&DAT_001f94c3,&local_68,&local_80);
      puVar3 = puVar3 + 2;
    } while (puVar3 != puVar1);
  }
  puVar3 = *(undefined4 **)(param_2 + 0x90);
  if (*(undefined4 **)(param_2 + 0x88) != puVar3) {
    puVar1 = *(undefined4 **)(param_2 + 0x88);
    do {
      puVar2 = puVar1 + 1;
      local_88 = (undefined2 *)CONCAT62(local_88._2_6_,(short)*puVar1);
      local_80 = &local_88;
      local_68 = param_1;
      local_48 = &local_68;
      FUN_00bb34fc(0,param_1 + 0x1c,param_1 + 0x1c,&DAT_001f94c3,&local_80,&local_48);
      puVar1 = puVar2;
    } while (puVar2 != puVar3);
  }
  return;
}


// ===== 00bb2a5c  FUN_00bb2a5c =====

void FUN_00bb2a5c(undefined8 *param_1)

{
  undefined8 *local_8;
  
  *param_1 = &PTR_FUN_00d47940;
  local_8 = param_1 + 10;
  FUN_00bb2b40(&local_8,param_1[0xb]);
  local_8 = param_1 + 7;
  FUN_00bb2cf8(&local_8,param_1[8]);
  if (*(code **)(param_1[6] + 8) != (code *)0x0) {
    (**(code **)(param_1[6] + 8))(param_1[3]);
  }
  return;
}


// ===== 00bb2ac8  FUN_00bb2ac8 =====

void FUN_00bb2ac8(undefined8 *param_1)

{
  undefined8 *local_8;
  
  *param_1 = &PTR_FUN_00d47940;
  local_8 = param_1 + 10;
  FUN_00bb2b40(&local_8,param_1[0xb]);
  local_8 = param_1 + 7;
  FUN_00bb2cf8(&local_8,param_1[8]);
  if (*(code **)(param_1[6] + 8) != (code *)0x0) {
    (**(code **)(param_1[6] + 8))(param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00bb2b40  FUN_00bb2b40 =====

void FUN_00bb2b40(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *local_18;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_00bb2b40(param_1,*param_2);
    if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    uVar1 = param_2[1];
    local_18 = param_2 + 6;
    FUN_00bb2bc8(&local_18,param_2[7]);
    operator_delete(param_2);
    FUN_00bb2b40(param_1,uVar1);
  }
  return;
}


// ===== 00bb2bc8  FUN_00bb2bc8 =====

void FUN_00bb2bc8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *local_18;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_00bb2bc8(param_1,*param_2);
    if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    uVar1 = param_2[1];
    local_18 = param_2 + 5;
    FUN_00bb2c50(&local_18,param_2[6]);
    operator_delete(param_2);
    FUN_00bb2bc8(param_1,uVar1);
  }
  return;
}


// ===== 00bb2c50  FUN_00bb2c50 =====

void FUN_00bb2c50(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00bb2c50(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
LAB_00bb2ce4:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar1 = (void *)param_2[7];
      puVar2 = (undefined8 *)param_2[1];
      if (pvVar1 != (void *)0x0) {
        if (param_2[8] - 1 < (ulong)(param_2[8] - (long)pvVar1)) goto LAB_00bb2ce4;
        param_2[8] = pvVar1;
        operator_delete(pvVar1);
      }
      operator_delete(param_2);
      param_2 = puVar2;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}


// ===== 00bb2cf8  FUN_00bb2cf8 =====

void FUN_00bb2cf8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *local_18;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_00bb2cf8(param_1,*param_2);
    if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    uVar1 = param_2[1];
    local_18 = param_2 + 6;
    FUN_00bb2c50(&local_18,param_2[7]);
    operator_delete(param_2);
    FUN_00bb2cf8(param_1,uVar1);
  }
  return;
}


// ===== 00bb2d80  FUN_00bb2d80 =====

undefined1  [16] FUN_00bb2d80(undefined8 *param_1,long *param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  plVar7 = (long *)*param_1;
  plVar4 = plVar7 + 1;
  plVar8 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, *param_2 < plVar3[4]) {
        plVar2 = (long *)*plVar3;
        plVar8 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_00bb2df0;
      }
      if (*param_2 <= plVar3[4]) {
        uVar5 = 0;
        goto LAB_00bb2e88;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar8 = plVar3 + 1;
  }
LAB_00bb2df0:
  plVar3 = (long *)operator_new(0x58);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  lVar6 = *param_3;
  lVar10 = param_4[1];
  lVar9 = *param_4;
  lVar12 = param_4[3];
  lVar11 = param_4[2];
  uVar1 = *(undefined1 *)((long)param_4 + 0x2a);
  param_4[2] = 0;
  param_4[3] = 0;
  plVar3[4] = lVar6;
  lVar6 = param_4[4];
  plVar3[6] = lVar10;
  plVar3[5] = lVar9;
  plVar3[9] = lVar6;
  lVar6 = param_4[5];
  plVar3[8] = lVar12;
  plVar3[7] = lVar11;
  param_4[4] = 0;
  *(short *)(plVar3 + 10) = (short)lVar6;
  *(undefined1 *)((long)plVar3 + 0x52) = uVar1;
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = (long)plVar4;
  *plVar8 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*plVar7 != 0) {
    *plVar7 = *(long *)*plVar7;
    plVar4 = (long *)*plVar8;
  }
  FUN_005d5b94(plVar7[1],plVar4);
  uVar5 = 1;
  plVar7[2] = plVar7[2] + 1;
LAB_00bb2e88:
  auVar13._8_8_ = uVar5;
  auVar13._0_8_ = plVar3;
  return auVar13;
}


// ===== 00bb2eb8  FUN_00bb2eb8 =====

undefined8 * FUN_00bb2eb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  void *pvVar3;
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
LAB_00bb2f78:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  pvVar3 = (void *)param_2[7];
  if (pvVar3 != (void *)0x0) {
    if (param_2[8] - 1 < (ulong)(param_2[8] - (long)pvVar3)) goto LAB_00bb2f78;
    param_2[8] = pvVar3;
    operator_delete(pvVar3);
  }
  operator_delete(param_2);
  return puVar5;
}


// ===== 00bb2f8c  FUN_00bb2f8c =====

undefined8 * FUN_00bb2f8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *local_28;
  
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
  if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  local_28 = param_2 + 5;
  FUN_00bb2c50(&local_28,param_2[6]);
  operator_delete(param_2);
  return puVar4;
}


// ===== 00bb3050  FUN_00bb3050 =====

undefined1  [16]
FUN_00bb3050(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  plVar6 = (long *)*param_5;
  plVar3 = param_2 + 1;
  plVar7 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    lVar5 = *plVar6;
    plVar1 = (long *)*plVar3;
    do {
      while (plVar2 = plVar1, plVar3 = plVar2, lVar5 < plVar2[4]) {
        plVar1 = (long *)*plVar2;
        plVar7 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_00bb30bc;
      }
      if (lVar5 <= plVar2[4]) {
        uVar4 = 0;
        goto LAB_00bb3134;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar7 = plVar2 + 1;
  }
LAB_00bb30bc:
  plVar2 = (long *)operator_new(0x40);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  lVar5 = *plVar6;
  plVar2[7] = 0;
  plVar2[6] = 0;
  plVar2[4] = lVar5;
  plVar2[5] = (long)(plVar2 + 6);
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = (long)plVar3;
  *plVar7 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar3 = (long *)*plVar7;
  }
  FUN_005d5b94(param_2[1],plVar3);
  uVar4 = 1;
  param_2[2] = param_2[2] + 1;
LAB_00bb3134:
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar2;
  return auVar8;
}


// ===== 00bb3164  FUN_00bb3164 =====

undefined1  [16]
FUN_00bb3164(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5,undefined8 *param_6)

{
  ushort uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ushort *puVar8;
  undefined1 auVar9 [16];
  
  puVar8 = (ushort *)*param_5;
  plVar3 = param_2 + 1;
  plVar7 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    uVar1 = *puVar8;
    plVar5 = (long *)*plVar3;
    do {
      while (plVar2 = plVar5, plVar3 = plVar2, *(ushort *)(plVar2 + 4) <= uVar1) {
        if (uVar1 <= *(ushort *)(plVar2 + 4)) {
          uVar4 = 0;
          goto LAB_00bb3258;
        }
        plVar5 = (long *)plVar2[1];
        if ((long *)plVar2[1] == (long *)0x0) {
          plVar7 = plVar2 + 1;
          goto LAB_00bb31d4;
        }
      }
      plVar5 = (long *)*plVar2;
      plVar7 = plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
  }
LAB_00bb31d4:
  plVar2 = (long *)operator_new(0x48);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  plVar5 = (long *)*param_6;
  *(ushort *)(plVar2 + 4) = *puVar8;
  lVar6 = *plVar5;
  plVar2[8] = 0;
  plVar2[7] = 0;
  plVar2[5] = lVar6;
  plVar2[6] = (long)(plVar2 + 7);
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = (long)plVar3;
  *plVar7 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar3 = (long *)*plVar7;
  }
  FUN_005d5b94(param_2[1],plVar3);
  uVar4 = 1;
  param_2[2] = param_2[2] + 1;
LAB_00bb3258:
  auVar9._8_8_ = uVar4;
  auVar9._0_8_ = plVar2;
  return auVar9;
}


// ===== 00bb3288  FUN_00bb3288 =====

undefined1  [16]
FUN_00bb3288(undefined8 *param_1,ushort *param_2,undefined8 param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  plVar6 = (long *)*param_1;
  plVar2 = plVar6 + 1;
  plVar7 = plVar2;
  if ((long *)*plVar2 != (long *)0x0) {
    plVar4 = (long *)*plVar2;
    do {
      while (plVar1 = plVar4, plVar2 = plVar1, *(ushort *)(plVar1 + 4) <= *param_2) {
        if (*param_2 <= *(ushort *)(plVar1 + 4)) {
          uVar3 = 0;
          goto LAB_00bb3390;
        }
        plVar4 = (long *)plVar1[1];
        if ((long *)plVar1[1] == (long *)0x0) {
          plVar7 = plVar1 + 1;
          goto LAB_00bb32f8;
        }
      }
      plVar4 = (long *)*plVar1;
      plVar7 = plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
  }
LAB_00bb32f8:
  plVar1 = (long *)operator_new(0x60);
  if ((plVar1 == (long *)0x0) || (*plVar1 = 0, plVar1 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  plVar4 = (long *)*param_5;
  *(undefined2 *)(plVar1 + 4) = *(undefined2 *)*param_4;
  lVar5 = *plVar4;
  *(undefined1 *)((long)plVar1 + 0x52) = 1;
  plVar1[8] = 0;
  plVar1[9] = 0;
  plVar1[7] = 0;
  *(undefined2 *)(plVar1 + 10) = 0;
  plVar1[5] = lVar5;
  plVar1[6] = (long)(plVar1 + 7);
  plVar1[0xb] = 0;
  *plVar1 = 0;
  plVar1[1] = 0;
  plVar1[2] = (long)plVar2;
  *plVar7 = (long)plVar1;
  plVar2 = plVar1;
  if (*(long *)*plVar6 != 0) {
    *plVar6 = *(long *)*plVar6;
    plVar2 = (long *)*plVar7;
  }
  FUN_005d5b94(plVar6[1],plVar2);
  uVar3 = 1;
  plVar6[2] = plVar6[2] + 1;
LAB_00bb3390:
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = plVar1;
  return auVar8;
}


// ===== 00bb33c0  FUN_00bb33c0 =====

undefined1  [16]
FUN_00bb33c0(undefined8 *param_1,ushort *param_2,undefined8 param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  long *plVar1;
  ushort *puVar2;
  ushort uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  
  plVar8 = (long *)*param_1;
  plVar5 = plVar8 + 1;
  plVar9 = plVar5;
  if ((long *)*plVar5 != (long *)0x0) {
    plVar1 = (long *)*plVar5;
    do {
      while (plVar4 = plVar1, plVar5 = plVar4, *(ushort *)(plVar4 + 4) <= *param_2) {
        if (*param_2 <= *(ushort *)(plVar4 + 4)) {
          uVar6 = 0;
          goto LAB_00bb34cc;
        }
        plVar1 = (long *)plVar4[1];
        if ((long *)plVar4[1] == (long *)0x0) {
          plVar9 = plVar4 + 1;
          goto LAB_00bb3430;
        }
      }
      plVar1 = (long *)*plVar4;
      plVar9 = plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
LAB_00bb3430:
  plVar4 = (long *)operator_new(0x60);
  if ((plVar4 == (long *)0x0) || (*plVar4 = 0, plVar4 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  plVar1 = (long *)*param_5;
  puVar2 = (ushort *)param_5[1];
  *(undefined2 *)(plVar4 + 4) = *(undefined2 *)*param_4;
  lVar7 = *plVar1;
  uVar3 = *puVar2;
  *(undefined1 *)((long)plVar4 + 0x52) = 1;
  *plVar4 = 0;
  plVar4[1] = 0;
  plVar4[7] = 0;
  plVar4[5] = lVar7;
  plVar4[6] = (long)(plVar4 + 7);
  plVar4[8] = 0;
  plVar4[9] = (ulong)uVar3;
  *(ushort *)(plVar4 + 10) = uVar3;
  plVar4[0xb] = (ulong)uVar3;
  plVar4[2] = (long)plVar5;
  *plVar9 = (long)plVar4;
  plVar5 = plVar4;
  if (*(long *)*plVar8 != 0) {
    *plVar8 = *(long *)*plVar8;
    plVar5 = (long *)*plVar9;
  }
  FUN_005d5b94(plVar8[1],plVar5);
  uVar6 = 1;
  plVar8[2] = plVar8[2] + 1;
LAB_00bb34cc:
  auVar10._8_8_ = uVar6;
  auVar10._0_8_ = plVar4;
  return auVar10;
}


// ===== 00bb34fc  FUN_00bb34fc =====

undefined1  [16]
FUN_00bb34fc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5,undefined8 *param_6)

{
  ushort uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ushort *puVar8;
  undefined1 auVar9 [16];
  
  puVar8 = (ushort *)*param_5;
  plVar3 = param_2 + 1;
  plVar7 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    uVar1 = *puVar8;
    plVar5 = (long *)*plVar3;
    do {
      while (plVar2 = plVar5, plVar3 = plVar2, *(ushort *)(plVar2 + 4) <= uVar1) {
        if (uVar1 <= *(ushort *)(plVar2 + 4)) {
          uVar4 = 0;
          goto LAB_00bb35f0;
        }
        plVar5 = (long *)plVar2[1];
        if ((long *)plVar2[1] == (long *)0x0) {
          plVar7 = plVar2 + 1;
          goto LAB_00bb356c;
        }
      }
      plVar5 = (long *)*plVar2;
      plVar7 = plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
  }
LAB_00bb356c:
  plVar2 = (long *)operator_new(0x48);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  plVar5 = (long *)*param_6;
  *(ushort *)(plVar2 + 4) = *puVar8;
  lVar6 = *plVar5;
  plVar2[8] = 0;
  plVar2[7] = 0;
  plVar2[5] = lVar6;
  plVar2[6] = (long)(plVar2 + 7);
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = (long)plVar3;
  *plVar7 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar3 = (long *)*plVar7;
  }
  FUN_005d5b94(param_2[1],plVar3);
  uVar4 = 1;
  param_2[2] = param_2[2] + 1;
LAB_00bb35f0:
  auVar9._8_8_ = uVar4;
  auVar9._0_8_ = plVar2;
  return auVar9;
}


// ===== 00bb3620  FUN_00bb3620 =====

void FUN_00bb3620(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 int param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
                 undefined8 *param_9,undefined8 param_10,undefined8 *param_11,undefined1 param_12,
                 byte param_13)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *param_1 = param_4;
  uVar5 = param_11[5];
  uVar4 = param_11[4];
  uVar3 = param_11[6];
  uVar7 = param_11[1];
  uVar6 = *param_11;
  uVar9 = param_11[3];
  uVar8 = param_11[2];
  param_1[8] = param_11[7];
  param_1[7] = uVar3;
  param_1[6] = uVar5;
  param_1[5] = uVar4;
  param_1[4] = uVar9;
  param_1[3] = uVar8;
  param_1[2] = uVar7;
  param_1[1] = uVar6;
  uVar5 = param_11[0xd];
  uVar4 = param_11[0xc];
  uVar3 = param_11[0xe];
  uVar7 = param_11[9];
  uVar6 = param_11[8];
  uVar9 = param_11[0xb];
  uVar8 = param_11[10];
  param_1[0x10] = param_11[0xf];
  param_1[0xf] = uVar3;
  param_1[0xe] = uVar5;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar9;
  param_1[0xb] = uVar8;
  param_1[10] = uVar7;
  param_1[9] = uVar6;
  uVar7 = param_11[0x15];
  uVar6 = param_11[0x14];
  uVar5 = param_11[0x17];
  uVar4 = param_11[0x16];
  uVar9 = param_11[0x11];
  uVar8 = param_11[0x10];
  uVar11 = param_11[0x13];
  uVar10 = param_11[0x12];
  param_1[0x1a] = param_2;
  param_1[0x1b] = param_3;
  *(undefined1 *)(param_1 + 0x19) = param_12;
  uVar3 = 0x14;
  if ((param_13 & 1) == 0) {
    uVar3 = 0x10;
  }
  param_1[0x18] = uVar5;
  param_1[0x17] = uVar4;
  param_1[0x16] = uVar7;
  param_1[0x15] = uVar6;
  param_1[0x14] = uVar11;
  param_1[0x13] = uVar10;
  param_1[0x12] = uVar9;
  param_1[0x11] = uVar8;
  param_1[0x1c] = uVar3;
  uVar3 = *param_8;
  param_1[0x1e] = param_8[1];
  param_1[0x1d] = uVar3;
  param_1[0x1f] = param_8[2];
  lVar2 = param_8[3];
  param_1[0x20] = lVar2;
  if (*(long *)(lVar2 + 8) != 0) {
    param_8[2] = 0;
    param_8[3] = &DAT_001fbc50;
  }
  uVar3 = *param_9;
  param_1[0x22] = param_9[1];
  param_1[0x21] = uVar3;
  param_1[0x23] = param_9[2];
  lVar2 = param_9[3];
  param_1[0x24] = lVar2;
  if (*(long *)(lVar2 + 8) != 0) {
    param_9[2] = 0;
    param_9[3] = &DAT_001fbc50;
  }
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x2a] = param_6;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x30] = param_7;
  param_1[0x31] = param_1[0x1c];
  param_1[0x48] = 0;
  param_1[0x28] = param_1[3] * param_1[0x11];
  param_1[0x29] = param_6;
  uVar1 = param_5 - 1;
  param_1[0x25] = param_10;
  param_1[0x26] = (ulong)uVar1;
  *(uint *)(param_1 + 0x27) = uVar1;
  *(undefined1 *)((long)param_1 + 0x13c) = 1;
  param_1[0x32] = (ulong)uVar1;
  param_1[0x33] = param_1;
  param_1[0x35] = FUN_00bb47ac;
  param_1[0x36] = &DAT_00257e08;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = param_1 + 0x41;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x43] = param_1 + 0x44;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  return;
}


// ===== 00bb3778  FUN_00bb3778 =====

undefined8 FUN_00bb3778(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined1 *puStack_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined1 *local_60;
  
  uVar3 = *(uint *)(param_3 + 8);
  uVar16 = (ulong)uVar3;
  if (*(char *)((long)param_1 + 0x13c) == '\x01') {
    uVar4 = uVar3 - *(uint *)(param_1 + 0x27);
    bVar6 = *(uint *)(param_1 + 0x27) <= uVar3 && uVar4 != 0;
    if (uVar4 != 0x80000000) {
      bVar6 = uVar4 != 0xffffffff && (int)(uVar4 + 1) < 0 == SCARRY4(uVar4,1);
    }
    uVar16 = (ulong)uVar4;
    if (!bVar6) {
      uVar16 = (ulong)uVar4 | 0xffffffff00000000;
    }
    uVar16 = uVar16 + param_1[0x26];
  }
  if (((long)uVar16 < (long)param_1[0x32]) ||
     (lVar10 = FUN_00bb5c98(param_1 + 0x31), lVar10 < (long)uVar16)) {
    return 0;
  }
  uVar3 = *(uint *)(param_3 + 8);
  uVar16 = (ulong)uVar3;
  if (*(char *)((long)param_1 + 0x13c) == '\x01') {
    uVar4 = uVar3 - *(uint *)(param_1 + 0x27);
    bVar6 = *(uint *)(param_1 + 0x27) <= uVar3 && uVar4 != 0;
    if (uVar4 != 0x80000000) {
      bVar6 = uVar4 != 0xffffffff && (int)(uVar4 + 1) < 0 == SCARRY4(uVar4,1);
    }
    uVar16 = (ulong)uVar4;
    if (!bVar6) {
      uVar16 = (ulong)uVar4 | 0xffffffff00000000;
    }
    uVar16 = uVar16 + param_1[0x26];
  }
  param_1[0x26] = uVar16;
  lVar17 = param_1[0x32];
  *(uint *)(param_1 + 0x27) = uVar3;
  lVar10 = param_1[0x3e];
  *(undefined1 *)((long)param_1 + 0x13c) = 1;
  if ((*(long *)(param_3 + 0x18) == *(long *)(param_3 + 0x10)) &&
     (local_a0 = (undefined1 *)FUN_00bb6228(param_1 + 0x31,param_2,uVar16),
     local_a0 + 0x7fffffffffffffff < (undefined1 *)0xfffffffffffffffe)) {
    (*(code *)param_1[0x1f])(param_1 + 0x1d,&local_a0);
  }
  if (*(char *)(param_1 + 0x2f) == '\x01') {
    if ((long)uVar16 < (long)param_1[0x2e]) {
      uVar11 = 1;
    }
    else {
      uVar11 = 0;
      *(undefined1 *)(param_1 + 0x2f) = 0;
    }
  }
  else {
    uVar11 = 0;
  }
  lVar5 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
  lVar2 = 0;
  if (lVar5 != 0) {
    lVar2 = *(long *)(param_3 + 0x10);
  }
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  local_68 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  local_70 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00bb48c0(&local_a0,param_1 + 0x31,uVar16,lVar2,lVar5 >> 2,uVar11);
  puVar9 = local_80;
  puVar7 = local_68;
  for (puVar13 = local_88; local_68 = puVar7, puVar8 = local_70, puVar13 != puVar9;
      puVar13 = puVar13 + 1) {
    uVar11 = *puVar13;
    (**(code **)(*(long *)*param_1 + 0xc0))((long *)*param_1,uVar11);
    (**(code **)(*(long *)*param_1 + 200))((long *)*param_1,uVar11);
    puVar7 = local_68;
  }
  for (; puVar8 != puVar7; puVar8 = puVar8 + 1) {
    uVar11 = *puVar8;
    (**(code **)(*(long *)*param_1 + 0xb8))((long *)*param_1,uVar11,1);
    (**(code **)(*(long *)*param_1 + 200))((long *)*param_1,uVar11);
  }
  lVar2 = 0;
  if ((ulong)param_1[0x3d] <= (ulong)*(uint *)(param_3 + 0xc)) {
    lVar2 = (ulong)*(uint *)(param_3 + 0xc) - param_1[0x3d];
  }
  param_1[0x29] = lVar2;
  if (lVar17 < (long)uVar16) {
    FUN_00ba3ee4(param_1[0x25]);
    puVar12 = (undefined1 *)param_1[0x28];
    puVar14 = (undefined1 *)param_1[3];
    if ((undefined1 *)param_1[0x2a] < puVar12) {
      puVar1 = local_a0 + param_1[0x2b];
      param_1[0x2b] = puVar1;
      if ((puVar1 < puVar12) || (puVar14 + lVar10 < puVar12)) goto LAB_00bb3a34;
      param_1[0x2b] = (long)puVar1 - (long)puVar12;
    }
    else {
      if ((puVar14 + lVar10 < puVar12) || ((*(byte *)(param_1 + 0x2f) & 1) != 0)) goto LAB_00bb3a34;
      if (local_a0 <= puVar14) {
        puVar14 = local_a0;
      }
    }
    param_1[0x28] = puVar14 + (long)puVar12;
  }
LAB_00bb3a34:
  if (((char)puStack_98 == '\x01') && ((*(byte *)(param_1 + 0x2f) & 1) == 0)) {
    uVar16 = (ulong)param_1[0x28] >> 1;
    if ((ulong)param_1[0x28] >> 1 <= (ulong)(param_1[3] * param_1[0x12])) {
      uVar16 = param_1[3] * param_1[0x12];
    }
    param_1[0x28] = uVar16;
    param_1[0x2a] = uVar16;
    param_1[0x2b] = 0;
    uVar11 = FUN_00bb5c98(param_1 + 0x31);
    if (*(char *)(param_1 + 0x2f) == '\x01') {
      param_1[0x2e] = uVar11;
    }
    else {
      if (param_1 + 0x2e == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      param_1[0x2e] = uVar11;
      *(undefined1 *)(param_1 + 0x2f) = 1;
    }
  }
  if (local_a0 != (undefined1 *)0x0) {
    (*(code *)param_1[0x23])(param_1 + 0x21);
  }
  if ((param_1[0x3c] != 0) && ((*(byte *)(param_1[0x25] + 0x9c) & 1) == 0)) {
    FUN_00ba3f30();
  }
  if (local_70 == (undefined8 *)0x0) {
LAB_00bb3b48:
    if (local_88 == (undefined8 *)0x0) {
      return 1;
    }
    uVar15 = (ulong)((long)local_80 + (-8 - ((long)local_80 << 0x3d))) >> 3;
    uVar16 = (ulong)(((long)local_88 - (long)local_80 << 0x3d) - ((long)local_88 - (long)local_80))
             >> 3;
    if (uVar15 <= uVar16) {
      uVar16 = uVar15;
    }
    puVar13 = local_80;
    if ((1 < uVar16) && ((((int)local_88 - (int)local_80 | -(int)local_80) & 7U) == 0)) {
      uVar16 = uVar16 & 0x1ffffffffffffffe;
      puVar13 = local_80 + -uVar16;
      do {
        uVar16 = uVar16 - 2;
      } while (uVar16 != 0);
    }
    do {
      if (puVar13 == local_88) {
        local_80 = local_88;
        operator_delete(local_88);
        return 1;
      }
      puVar13 = puVar13 + -1;
    } while (puVar13 != (undefined8 *)0x0);
  }
  else {
    uVar15 = (ulong)((long)local_68 + (-8 - ((long)local_68 << 0x3d))) >> 3;
    uVar16 = (ulong)(((long)local_70 - (long)local_68 << 0x3d) - ((long)local_70 - (long)local_68))
             >> 3;
    if (uVar15 <= uVar16) {
      uVar16 = uVar15;
    }
    puVar13 = local_68;
    if ((1 < uVar16) && ((((int)local_70 - (int)local_68 | -(int)local_68) & 7U) == 0)) {
      uVar16 = uVar16 & 0x1ffffffffffffffe;
      puVar13 = local_68 + -uVar16;
      do {
        uVar16 = uVar16 - 2;
      } while (uVar16 != 0);
    }
    do {
      if (puVar13 == local_70) {
        local_68 = local_70;
        operator_delete(local_70);
        goto LAB_00bb3b48;
      }
      puVar13 = puVar13 + -1;
    } while (puVar13 != (undefined8 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00bb3bf4  FUN_00bb3bf4 =====

void FUN_00bb3bf4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x140) >> 1;
  uVar2 = *(long *)(param_1 + 0x18) * 4;
  *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x18);
  if (uVar1 <= uVar2) {
    uVar1 = uVar2;
  }
  *(ulong *)(param_1 + 0x150) = uVar1;
  *(undefined8 *)(param_1 + 0x158) = 0;
  FUN_00bb6030(param_1 + 0x188);
  return;
}


// ===== 00bb3c24  FUN_00bb3c24 =====

void FUN_00bb3c24(long *param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  ulong uVar13;
  undefined1 auStack_38 [24];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00bb598c(auStack_38,param_2 + 0x188);
  FUN_00bb3dbc(param_1,auStack_38);
  FUN_00baaab0(auStack_38);
  if ((int *)param_1[1] == (int *)*param_1) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
              );
  }
  if (*(int *)*param_1 == *(int *)(param_2 + 400) + 1) {
    FUN_00ba3ee4(*(undefined8 *)(param_2 + 0x128));
  }
  if ((*(byte *)(*(long *)(param_2 + 0x128) + 0x9c) & 1) == 0) {
    FUN_00ba3f30();
  }
  lVar7 = *param_1;
  lVar5 = param_1[1];
  if (lVar7 == lVar5) {
    lVar7 = 0;
    goto LAB_00bb3d7c;
  }
  lVar9 = (lVar5 + -0x38) - lVar7;
  iVar8 = (int)*(undefined8 *)(param_2 + 0xe0) + 3;
  if (lVar9 == 0) {
    iVar10 = 0;
    lVar9 = lVar7;
LAB_00bb3d54:
    do {
      piVar12 = (int *)(lVar9 + 0x20);
      piVar1 = (int *)(lVar9 + 0x18);
      lVar9 = lVar9 + 0x38;
      iVar10 = ((iVar8 + *piVar12) - *piVar1 & 0xfffffffcU) + iVar10;
    } while (lVar9 != lVar5);
  }
  else {
    iVar11 = 0;
    iVar10 = 0;
    uVar4 = ((ulong)(lVar9 * 0xdb6db6db6db6db7) >> 3) + 1;
    uVar13 = uVar4 & 0x3ffffffffffffffe;
    lVar9 = lVar7 + (uVar4 & 0x3ffffffffffffffe) * 0x38;
    piVar12 = (int *)(lVar7 + 0x58);
    do {
      piVar1 = piVar12 + -0xe;
      iVar6 = *piVar12;
      uVar13 = uVar13 - 2;
      piVar2 = piVar12 + -0x10;
      piVar3 = piVar12 + -2;
      piVar12 = piVar12 + 0x1c;
      iVar11 = ((iVar8 + *piVar1) - *piVar2 & 0xfffffffcU) + iVar11;
      iVar10 = ((iVar8 + iVar6) - *piVar3 & 0xfffffffcU) + iVar10;
    } while (uVar13 != 0);
    iVar10 = iVar10 + iVar11;
    if (uVar4 != (uVar4 & 0x3ffffffffffffffe)) goto LAB_00bb3d54;
  }
  lVar7 = (long)iVar10;
LAB_00bb3d7c:
  *(long *)(param_2 + 0x168) = *(long *)(param_2 + 0x168) + lVar7;
  *(long *)(param_2 + 0x160) = *(long *)(param_2 + 0x160) + 1;
  return;
}


// ===== 00bb3dbc  FUN_00bb3dbc =====

undefined8 * FUN_00bb3dbc(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar4 = (void *)*param_1;
  if (pvVar4 != (void *)0x0) {
    pvVar2 = pvVar4;
    pvVar3 = (void *)param_1[1];
    if (pvVar4 != (void *)param_1[1]) {
      do {
        pvVar2 = (void *)((long)pvVar3 + -0x38);
        if (pvVar2 == (void *)0x0) {
LAB_00bb3e8c:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        pvVar1 = *(void **)((long)pvVar3 + -0x20);
        if (pvVar1 != (void *)0x0) {
          if (*(long *)((long)pvVar3 + -0x18) - 1U <
              (ulong)(*(long *)((long)pvVar3 + -0x18) - (long)pvVar1)) goto LAB_00bb3e8c;
          *(void **)((long)pvVar3 + -0x18) = pvVar1;
          operator_delete(pvVar1);
        }
        pvVar3 = pvVar2;
      } while (pvVar2 != pvVar4);
      pvVar2 = (void *)*param_1;
    }
    param_1[1] = pvVar4;
    operator_delete(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_1;
}


// ===== 00bb3ea0  FUN_00bb3ea0 =====

void FUN_00bb3ea0(long *param_1,undefined8 *param_2,undefined8 param_3,ulong param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  ulong extraout_x1;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  long lVar20;
  undefined4 local_c4;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  
  uVar15 = param_2[0x3e];
  lVar20 = param_2[0x3f];
  uVar12 = param_2[0x28];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar13 = 0;
  if (uVar15 <= uVar12) {
    uVar13 = uVar12 - uVar15;
  }
  if (lVar20 == 0) {
    uVar15 = param_2[3];
  }
  else {
    uVar15 = param_2[0x29] + param_2[0x1c] + 3 & 0xfffffffffffffffc;
  }
  if (uVar13 <= uVar15) {
    uVar15 = uVar13;
  }
  if (uVar15 <= param_4) {
    param_4 = uVar15;
  }
  param_4 = param_4 & 0xfffffffffffffffc;
  FUN_00bb5a08(&local_c0,param_2 + 0x31,param_4);
  FUN_00bb3dbc(param_1,&local_c0);
  FUN_00baaab0(&local_c0);
  lVar20 = *param_1;
  lVar6 = param_1[1];
  if (lVar20 == lVar6) goto LAB_00bb4034;
  lVar16 = (lVar6 + -0x38) - lVar20;
  iVar14 = (int)param_2[0x1c] + 3;
  if (lVar16 == 0) {
    iVar17 = 0;
    lVar16 = lVar20;
LAB_00bb3ff0:
    do {
      piVar19 = (int *)(lVar16 + 0x20);
      piVar1 = (int *)(lVar16 + 0x18);
      lVar16 = lVar16 + 0x38;
      iVar17 = ((iVar14 + *piVar19) - *piVar1 & 0xfffffffcU) + iVar17;
    } while (lVar16 != lVar6);
  }
  else {
    iVar18 = 0;
    iVar17 = 0;
    uVar13 = ((ulong)(lVar16 * 0xdb6db6db6db6db7) >> 3) + 1;
    uVar15 = uVar13 & 0x3ffffffffffffffe;
    lVar16 = lVar20 + (uVar13 & 0x3ffffffffffffffe) * 0x38;
    piVar19 = (int *)(lVar20 + 0x58);
    do {
      piVar1 = piVar19 + -0xe;
      iVar7 = *piVar19;
      uVar15 = uVar15 - 2;
      piVar2 = piVar19 + -0x10;
      piVar3 = piVar19 + -2;
      piVar19 = piVar19 + 0x1c;
      iVar18 = ((iVar14 + *piVar1) - *piVar2 & 0xfffffffcU) + iVar18;
      iVar17 = ((iVar14 + iVar7) - *piVar3 & 0xfffffffcU) + iVar17;
    } while (uVar15 != 0);
    iVar17 = iVar17 + iVar18;
    if (uVar13 != (uVar13 & 0x3ffffffffffffffe)) goto LAB_00bb3ff0;
  }
  param_4 = param_4 - (long)iVar17;
  param_2[0x2d] = param_2[0x2d] + (long)iVar17;
  param_2[0x2c] = param_2[0x2c] + 1;
LAB_00bb4034:
  uVar13 = param_2[0x1c];
  if (uVar13 < param_4) {
    do {
      puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_b0 = &DAT_aaaaaaaaaaaaaaaa;
      local_98 = &DAT_aaaaaaaaaaaaaaaa;
      local_a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      local_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
      local_c0 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      (**(code **)(*(long *)param_2[0x30] + 0x10))
                (&local_c0,(long *)param_2[0x30],param_3,param_4 - uVar13);
      puVar9 = local_a0;
      puVar8 = puStack_a8;
      if (((ulong)local_70 & 1) == 0) break;
      uVar13 = (ulong)puStack_88 & 0xffff;
      lVar20 = param_2[0x1c];
      param_2[0x29] = puStack_a8 + (param_2[0x29] - (long)local_a0);
      puVar4 = local_80;
      if (*(char *)(param_2 + 0x19) == '\0') {
        uVar13 = 0xffff;
        puVar4 = (undefined1 *)0x7fffffffffffffff;
      }
      uVar10 = FUN_00bb5cac(param_2 + 0x31,(ulong)local_c0 & 0xffffffff,&puStack_b8,param_3,uVar13,
                            puVar4,local_78);
      if ((extraout_x1 & 1) != 0) {
        if ((((ulong)local_70 & 1) == 0) ||
           ((local_78 != (undefined1 *)0x0 &&
            ((**(code **)(*(long *)*param_2 + 0xb0))(), local_c4 = uVar10,
            ((ulong)local_70 & 1) == 0)))) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                    );
        }
        puVar5 = (undefined4 *)param_1[1];
        if (puVar5 < (undefined4 *)param_1[2]) {
          if (puVar5 == (undefined4 *)0x0) {
            local_c4 = uVar10;
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *puVar5 = uVar10;
          puVar11 = puVar5 + 0xe;
          *(undefined8 *)(puVar5 + 8) = 0;
          *(undefined8 *)(puVar5 + 10) = 0;
          *(undefined8 *)(puVar5 + 6) = 0;
          *(undefined1 **)(puVar5 + 4) = local_b0;
          *(undefined1 **)(puVar5 + 2) = puStack_b8;
          *(undefined1 **)(puVar5 + 6) = puStack_a8;
          *(undefined1 **)(puVar5 + 8) = local_a0;
          puStack_a8 = (undefined1 *)0x0;
          local_a0 = (undefined1 *)0x0;
          *(undefined1 **)(puVar5 + 10) = local_98;
          local_98 = (undefined1 *)0x0;
          *(undefined2 *)(puVar5 + 0xc) = (undefined2)local_90;
          *(undefined1 *)((long)puVar5 + 0x32) = local_90._2_1_;
          local_c4 = uVar10;
        }
        else {
          local_c4 = uVar10;
          puVar11 = (undefined4 *)FUN_00bb4444(param_1,&local_c4,&puStack_b8);
        }
        param_1[1] = (long)puVar11;
      }
      if ((((ulong)local_70 & 1) != 0) && (puStack_a8 != (undefined1 *)0x0)) {
        if (local_a0 + -1 < local_a0 + -(long)puStack_a8) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        local_a0 = puStack_a8;
        operator_delete(puStack_a8);
      }
      uVar13 = param_2[0x1c];
      param_4 = param_4 - ((ulong)(puVar9 + (lVar20 - (long)puVar8) + 3) & 0xfffffffffffffffc);
    } while (uVar13 < param_4);
  }
  if ((*param_1 != param_1[1]) && ((*(byte *)(param_2[0x25] + 0x9c) & 1) == 0)) {
    FUN_00ba3f30();
  }
  return;
}


// ===== 00bb4248  FUN_00bb4248 =====

undefined8 FUN_00bb4248(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 200) == '\x01') {
    FUN_00bb5a18(param_1 + 0x188);
    uVar1 = FUN_00bb6308(param_1 + 0x188);
    return uVar1;
  }
  return 0;
}


// ===== 00bb4290  FUN_00bb4290 =====

void FUN_00bb4290(long param_1,undefined2 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00bb42a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x180) + 0x20))(*(long **)(param_1 + 0x180),param_2);
  return;
}


// ===== 00bb42a8  FUN_00bb42a8 =====

void FUN_00bb42a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bb42b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x180) + 0x28))();
  return;
}


// ===== 00bb42bc  FUN_00bb42bc =====

void FUN_00bb42bc(undefined8 param_1,long param_2)

{
  FUN_00bb6a88(param_2 + 0x188);
                    /* WARNING: Could not recover jumptable at 0x00bb42f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_2 + 0x180) + 0x30))(param_1);
  return;
}


// ===== 00bb42fc  FUN_00bb42fc =====

void FUN_00bb42fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bb430c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x180) + 0x38))();
  return;
}


// ===== 00bb4310  FUN_00bb4310 =====

void FUN_00bb4310(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bb4320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x180) + 0x40))();
  return;
}


// ===== 00bb4324  FUN_00bb4324 =====

uint FUN_00bb4324(long param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x1e0) != 0) {
    uVar1 = 0x200;
  }
  uVar1 = uVar1 | (uint)*(byte *)(param_1 + 0x178) << 10;
  if ((*(long *)(param_1 + 0x228) != 0) || (*(long *)(param_1 + 0x210) != 0)) {
    uVar1 = uVar1 | 0x800;
  }
  return uVar1;
}


// ===== 00bb435c  FUN_00bb435c =====

void FUN_00bb435c(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = FUN_00bb5c98(param_1 + 0x188);
  *(int *)(param_2 + 0x28) = iVar1 + 1;
  *(int *)(param_2 + 0x34) = (int)*(undefined8 *)(param_1 + 0x148);
  *(int *)(param_2 + 0x30) = (int)*(undefined8 *)(param_1 + 0x140);
  *(int *)(param_2 + 0x38) = (int)*(undefined8 *)(param_1 + 0x150);
  *(int *)(param_2 + 0x3c) = (int)*(undefined8 *)(param_1 + 0x158);
  return;
}


// ===== 00bb43b4  FUN_00bb43b4 =====

void FUN_00bb43b4(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  
  *(ulong *)(param_1 + 0x140) = (ulong)*(uint *)(param_2 + 0x30);
  *(ulong *)(param_1 + 0x148) = (ulong)*(uint *)(param_2 + 0x34);
  *(ulong *)(param_1 + 0x150) = (ulong)*(uint *)(param_2 + 0x38);
  *(ulong *)(param_1 + 0x158) = (ulong)*(uint *)(param_2 + 0x3c);
  uVar1 = *(int *)(param_2 + 0x28) - 1;
  uVar4 = (ulong)uVar1;
  if (*(char *)(param_1 + 0x13c) == '\x01') {
    uVar2 = uVar1 - *(uint *)(param_1 + 0x138);
    bVar3 = *(uint *)(param_1 + 0x138) <= uVar1 && uVar2 != 0;
    if (uVar2 != 0x80000000) {
      bVar3 = uVar2 != 0xffffffff && (int)(uVar2 + 1) < 0 == SCARRY4(uVar2,1);
    }
    uVar4 = (ulong)uVar2;
    if (!bVar3) {
      uVar4 = (ulong)uVar2 | 0xffffffff00000000;
    }
    uVar4 = uVar4 + *(long *)(param_1 + 0x130);
  }
  *(uint *)(param_1 + 0x138) = uVar1;
  *(ulong *)(param_1 + 0x130) = uVar4;
  *(undefined1 *)(param_1 + 0x13c) = 1;
  FUN_00bb6a7c(param_1 + 0x188);
  return;
}


// ===== 00bb4444  FUN_00bb4444 =====

undefined4 * FUN_00bb4444(long *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long local_60;
  undefined4 *local_58;
  long local_50;
  void *local_48;
  
  lVar7 = param_1[1] - *param_1;
  uVar4 = (lVar7 >> 3) * 0x6db6db6db6db6db7 + 1;
  if (uVar4 < 0x492492492492493) {
    local_60 = 0;
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar6 = lVar5 * -0x2492492492492492;
    if (uVar6 < uVar4 || uVar6 - uVar4 == 0) {
      uVar6 = uVar4;
    }
    if (0x249249249249248 < (ulong)(lVar5 * 0x6db6db6db6db6db7)) {
      uVar6 = 0x492492492492492;
    }
    if (uVar6 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0x492492492492492 < uVar6) goto LAB_00bb45dc;
      pvVar3 = operator_new(uVar6 * 0x38);
    }
    local_48 = (void *)((long)pvVar3 + uVar6 * 0x38);
    local_58 = (undefined4 *)((long)pvVar3 + lVar7);
    if (local_58 != (undefined4 *)0x0) {
      *local_58 = *param_2;
      uVar9 = param_3[1];
      uVar8 = *param_3;
      *(undefined8 *)(local_58 + 8) = 0;
      *(undefined8 *)(local_58 + 10) = 0;
      *(undefined8 *)(local_58 + 6) = 0;
      *(undefined8 *)(local_58 + 4) = uVar9;
      *(undefined8 *)(local_58 + 2) = uVar8;
      *(undefined8 *)(local_58 + 6) = param_3[2];
      *(undefined8 *)(local_58 + 8) = param_3[3];
      *(undefined8 *)(local_58 + 10) = param_3[4];
      uVar2 = *(undefined2 *)(param_3 + 5);
      param_3[2] = 0;
      param_3[3] = 0;
      param_3[4] = 0;
      puVar1 = local_58 + 0xe;
      *(undefined1 *)((long)local_58 + 0x32) = *(undefined1 *)((long)param_3 + 0x2a);
      *(undefined2 *)(local_58 + 0xc) = uVar2;
      lVar7 = (long)local_58 + (*param_1 - param_1[1]);
      FUN_00bb46b4(param_1,*param_1,param_1[1],lVar7);
      local_60 = *param_1;
      lVar5 = param_1[2];
      *param_1 = lVar7;
      param_1[1] = (long)puVar1;
      param_1[2] = (long)local_48;
      local_58 = (undefined4 *)local_60;
      local_50 = local_60;
      local_48 = (void *)lVar5;
      FUN_00bb45e0(&local_60);
      return puVar1;
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  FUN_00bb469c();
LAB_00bb45dc:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00bb45e0  FUN_00bb45e0 =====

void FUN_00bb45e0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while( true ) {
    do {
      lVar3 = lVar2;
      if (lVar1 == lVar3) {
        param_1[2] = lVar3;
        if ((void *)*param_1 == (void *)0x0) {
          return;
        }
        operator_delete((void *)*param_1);
        return;
      }
      lVar2 = lVar3 + -0x38;
      if (lVar2 == 0) goto LAB_00bb4688;
      pvVar4 = *(void **)(lVar3 + -0x20);
    } while (pvVar4 == (void *)0x0);
    if (*(long *)(lVar3 + -0x18) - 1U < (ulong)(*(long *)(lVar3 + -0x18) - (long)pvVar4)) break;
    *(void **)(lVar3 + -0x18) = pvVar4;
    operator_delete(pvVar4);
  }
LAB_00bb4688:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00bb469c  FUN_00bb469c =====

void FUN_00bb469c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00bb46b4  FUN_00bb46b4 =====

void FUN_00bb46b4(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  if (param_2 != param_3) {
    do {
      if (param_4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *param_4 = *puVar4;
      uVar6 = *(undefined8 *)(puVar4 + 4);
      uVar5 = *(undefined8 *)(puVar4 + 2);
      *(undefined8 *)(param_4 + 8) = 0;
      *(undefined8 *)(param_4 + 10) = 0;
      *(undefined8 *)(param_4 + 6) = 0;
      *(undefined8 *)(param_4 + 4) = uVar6;
      *(undefined8 *)(param_4 + 2) = uVar5;
      *(undefined8 *)(param_4 + 6) = *(undefined8 *)(puVar4 + 6);
      *(undefined8 *)(param_4 + 8) = *(undefined8 *)(puVar4 + 8);
      *(undefined8 *)(param_4 + 10) = *(undefined8 *)(puVar4 + 10);
      uVar2 = *(undefined2 *)(puVar4 + 0xc);
      *(undefined8 *)(puVar4 + 6) = 0;
      *(undefined8 *)(puVar4 + 8) = 0;
      *(undefined8 *)(puVar4 + 10) = 0;
      puVar1 = puVar4 + 0xe;
      *(undefined1 *)((long)param_4 + 0x32) = *(undefined1 *)((long)puVar4 + 0x32);
      *(undefined2 *)(param_4 + 0xc) = uVar2;
      param_4 = param_4 + 0xe;
      puVar4 = puVar1;
    } while (puVar1 != param_3);
    do {
      if (param_2 == (undefined4 *)0x0) {
LAB_00bb4774:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar3 = *(void **)(param_2 + 6);
      if (pvVar3 != (void *)0x0) {
        if (*(long *)(param_2 + 8) - 1U < (ulong)(*(long *)(param_2 + 8) - (long)pvVar3))
        goto LAB_00bb4774;
        *(void **)(param_2 + 8) = pvVar3;
        operator_delete(pvVar3);
      }
      param_2 = param_2 + 0xe;
    } while (param_2 != param_3);
  }
  return;
}


// ===== 00bb47ac  FUN_00bb47ac =====

void FUN_00bb47ac(long *param_1,undefined2 *param_2,undefined4 *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00bb47c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*param_1 + 0x180) + 0x18))
            (*(long **)(*param_1 + 0x180),*param_2,*param_3);
  return;
}


// ===== 00bb47cc  FUN_00bb47cc =====

long * FUN_00bb47cc(undefined8 *param_1,long *param_2)

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
      while (plVar6[4] <= *param_2) {
        if (*param_2 <= plVar6[4]) {
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
              operator_delete(plVar6);
              return (long *)1;
            }
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          goto LAB_00bb4844;
        }
        plVar6 = (long *)plVar6[1];
        if (plVar6 == (long *)0x0) goto LAB_00bb4844;
      }
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
LAB_00bb4844:
    plVar3 = (long *)0x0;
  }
  return plVar3;
}


// ===== 00bb48c0  FUN_00bb48c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bb48c0(undefined8 *param_1,long param_2,long param_3,ushort *param_4,ulong param_5,
                 uint param_6)

{
  bool bVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort uVar4;
  undefined8 uVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  uVar5 = _DAT_001f3c90;
  param_1[1] = _UNK_001f3c98;
  *param_1 = uVar5;
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  FUN_00bb4a0c(param_2,param_3,param_1);
  FUN_00bb4d1c(param_2,param_3,param_4,param_5,param_1);
  lVar9 = param_1[2];
  if (((param_6 & 1) != 0) && (*(long *)(param_2 + 8) < param_3)) {
    if (param_5 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (ulong)param_4[param_5 * 2 + -1];
    }
    lVar9 = uVar7 + param_3;
  }
  if ((param_5 & 0x3fffffffffffffff) != 0) {
    puVar3 = param_4 + param_5 * 2;
    lVar8 = param_3;
    do {
      uVar4 = *param_4;
      lVar8 = lVar8 + 1;
      if (lVar8 < (long)(param_3 + (ulong)uVar4) && lVar8 <= lVar9) {
        do {
          bVar6 = FUN_00bb502c(param_2,lVar8,0,(param_6 ^ 1) & 1);
          *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | bVar6 & 1;
          if ((long)(param_3 + (ulong)uVar4) <= lVar8 + 1) break;
          bVar1 = lVar8 < lVar9;
          lVar8 = lVar8 + 1;
        } while (bVar1);
      }
      puVar2 = param_4 + 1;
      param_4 = param_4 + 2;
      lVar8 = param_3 + (ulong)*puVar2;
    } while (param_4 != puVar3);
  }
  return;
}


// ===== 00bb4a0c  FUN_00bb4a0c =====

void FUN_00bb4a0c(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long local_58;
  
  if (param_1[0xb] != 0) {
    lVar4 = param_1[1];
    do {
      if (param_2 <= lVar4) break;
      local_58 = lVar4 + 1;
      lVar4 = *(long *)(param_1[7] + ((ulong)param_1[10] / 0x2e) * 8) +
              ((ulong)param_1[10] % 0x2e) * 0x58;
      if (*(char *)(lVar4 + 0x13) != '\x01') {
        uVar5 = ((*param_1 + *(long *)(lVar4 + 0x40)) - *(long *)(lVar4 + 0x38)) + 3U &
                0xfffffffffffffffc;
        *param_3 = uVar5 + *param_3;
        cVar2 = *(char *)(lVar4 + 0x12);
        if (*(char *)(lVar4 + 0x13) != '\x01' && cVar2 == '\0') {
          param_1[0xc] = (*(long *)(lVar4 + 0x38) - *(long *)(lVar4 + 0x40)) + param_1[0xc];
          param_1[0xe] = param_1[0xe] + -1;
          param_1[0xd] = param_1[0xd] - uVar5;
          cVar2 = *(char *)(lVar4 + 0x12);
        }
        if (cVar2 == '\x01') {
          FUN_00bb47cc(param_1 + 0x12,&local_58);
          cVar2 = *(char *)(lVar4 + 0x12);
        }
        if (cVar2 != '\x02') {
          *(undefined1 *)(lVar4 + 0x12) = 0;
        }
        *(undefined1 *)(lVar4 + 0x13) = 1;
        lVar6 = param_3[2];
        if (param_3[2] <= local_58) {
          lVar6 = local_58;
        }
        param_3[2] = lVar6;
      }
      lVar6 = *(long *)(lVar4 + 0x20);
      if (lVar6 != 0) {
        local_58 = lVar6;
        if (*(char *)(lVar4 + 0x12) == '\x02') {
          plVar1 = (long *)param_3[7];
          if (plVar1 < (long *)param_3[8]) {
            if (plVar1 == (long *)0x0) {
LAB_00bb4cf4:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            *plVar1 = lVar6;
            param_3[7] = (long)(plVar1 + 1);
          }
          else {
            lVar4 = FUN_00bb6b10(param_3 + 6,&local_58);
            param_3[7] = lVar4;
          }
        }
        else {
          plVar1 = (long *)param_3[4];
          if (plVar1 < (long *)param_3[5]) {
            if (plVar1 == (long *)0x0) goto LAB_00bb4cf4;
            plVar3 = plVar1 + 1;
            *plVar1 = lVar6;
          }
          else {
            plVar3 = (long *)FUN_00bb6b10(param_3 + 3,&local_58);
          }
          param_3[4] = (long)plVar3;
        }
      }
      FUN_00bb4f2c(param_1 + 6);
      lVar4 = param_1[1] + 1;
      param_1[1] = lVar4;
    } while (param_1[0xb] != 0);
  }
  plVar1 = (long *)param_1[0x15];
  lVar4 = param_1[0x16];
  if (lVar4 - (long)plVar1 != 0) {
    uVar5 = lVar4 - (long)plVar1 >> 3;
    plVar3 = plVar1;
    do {
      uVar8 = uVar5 >> 1;
      uVar7 = uVar5 + ~uVar8;
      uVar5 = uVar8;
      if (plVar3[uVar8] <= param_2 + 1) {
        plVar3 = plVar3 + uVar8 + 1;
        uVar5 = uVar7;
      }
    } while (uVar5 != 0);
    if (plVar3 < plVar1) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:1170: libc++ Hardening assertion __first <= __last failed: vector::erase(first, last) called with invalid range\n"
                );
    }
    if (plVar1 != plVar3) {
      memmove(plVar1,plVar3,lVar4 - (long)plVar3);
      uVar7 = param_1[0x16];
      lVar6 = (long)plVar1 + ((lVar4 - uVar7) - (long)plVar3);
      uVar5 = (ulong)((lVar6 << 0x3d) - lVar6) >> 3;
      uVar8 = (uVar7 - (uVar7 << 0x3d)) - 8 >> 3;
      if (uVar8 <= uVar5) {
        uVar5 = uVar8;
      }
      uVar8 = (long)plVar1 + (lVar4 - (long)plVar3);
      if (((1 < uVar5) && ((-(int)uVar7 & 7U) == ((uint)plVar3 & 7))) && ((uVar7 & 7) == 0)) {
        uVar5 = uVar5 & 0x1ffffffffffffffe;
        uVar7 = uVar7 + uVar5 * -8;
        do {
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
      }
      while (uVar7 != uVar8) {
        uVar7 = uVar7 - 8;
        if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      param_1[0x16] = uVar8;
    }
  }
  return;
}


// ===== 00bb4d1c  FUN_00bb4d1c =====

void FUN_00bb4d1c(long *param_1,long param_2,ushort *param_3,ulong param_4,long *param_5)

{
  ushort *puVar1;
  char cVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long local_68;
  
  if ((param_4 & 0x3fffffffffffffff) != 0) {
    puVar1 = param_3 + param_4 * 2;
    do {
      uVar3 = param_3[1];
      lVar7 = param_2 + (ulong)*param_3;
      if (lVar7 <= (long)(param_2 + (ulong)uVar3)) {
        lVar6 = (lVar7 << 0x20) + -0x100000000;
        do {
          lVar4 = param_1[1];
          if ((lVar4 < lVar7) && (lVar7 < lVar4 + (int)param_1[0xb] + 1)) {
            uVar5 = lVar6 - (lVar4 << 0x20) >> 0x20;
            if ((ulong)param_1[0xb] <= uVar5) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/deque:1532: libc++ Hardening assertion __i < size() failed: deque::operator[] index out of bounds\n"
                        );
            }
            uVar5 = param_1[10] + uVar5;
            lVar4 = *(long *)(param_1[7] + (uVar5 / 0x2e) * 8) + (uVar5 % 0x2e) * 0x58;
            local_68 = lVar7;
            if (*(char *)(lVar4 + 0x13) != '\x01') {
              uVar5 = ((*param_1 + *(long *)(lVar4 + 0x40)) - *(long *)(lVar4 + 0x38)) + 3U &
                      0xfffffffffffffffc;
              *param_5 = uVar5 + *param_5;
              cVar2 = *(char *)(lVar4 + 0x12);
              if (*(char *)(lVar4 + 0x13) != '\x01' && cVar2 == '\0') {
                param_1[0xc] = (*(long *)(lVar4 + 0x38) - *(long *)(lVar4 + 0x40)) + param_1[0xc];
                param_1[0xe] = param_1[0xe] + -1;
                param_1[0xd] = param_1[0xd] - uVar5;
                cVar2 = *(char *)(lVar4 + 0x12);
              }
              if (cVar2 == '\x01') {
                FUN_00bb47cc(param_1 + 0x12,&local_68);
                cVar2 = *(char *)(lVar4 + 0x12);
              }
              if (cVar2 != '\x02') {
                *(undefined1 *)(lVar4 + 0x12) = 0;
              }
              *(undefined1 *)(lVar4 + 0x13) = 1;
              lVar4 = param_5[2];
              if (param_5[2] <= local_68) {
                lVar4 = local_68;
              }
              param_5[2] = lVar4;
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x100000000;
        } while (lVar7 <= (long)(param_2 + (ulong)uVar3));
      }
      param_3 = param_3 + 2;
    } while (param_3 != puVar1);
  }
  return;
}


// ===== 00bb4f2c  FUN_00bb4f2c =====

void FUN_00bb4f2c(long param_1)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:2185: libc++ Hardening assertion !empty() failed: deque::pop_front called on an empty deque\n"
              );
  }
  uVar3 = *(ulong *)(param_1 + 0x20);
  lVar4 = *(long *)(*(long *)(param_1 + 8) + (uVar3 / 0x2e) * 8) + (uVar3 % 0x2e) * 0x58;
  if (lVar4 != 0) {
    pvVar1 = *(void **)(lVar4 + 0x38);
    if (pvVar1 != (void *)0x0) {
      if (*(long *)(lVar4 + 0x40) - 1U < (ulong)(*(long *)(lVar4 + 0x40) - (long)pvVar1))
      goto LAB_00bb5004;
      *(void **)(lVar4 + 0x40) = pvVar1;
      operator_delete(pvVar1);
      uVar3 = *(ulong *)(param_1 + 0x20);
      lVar2 = *(long *)(param_1 + 0x28);
    }
    *(ulong *)(param_1 + 0x20) = uVar3 + 1;
    *(long *)(param_1 + 0x28) = lVar2 + -1;
    if (0x5b < uVar3 + 1) {
      operator_delete((void *)**(undefined8 **)(param_1 + 8));
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x2e;
    }
    return;
  }
LAB_00bb5004:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00bb502c  FUN_00bb502c =====

byte FUN_00bb502c(long *param_1,long param_2,byte param_3,ulong param_4)

{
  byte bVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  byte bVar5;
  char cVar6;
  ushort uVar7;
  ushort uVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  undefined1 uVar12;
  long local_8;
  
  iVar11 = (int)param_1[1];
  iVar3 = (int)param_2 - iVar11;
  if (param_2 <= param_1[1]) {
    iVar3 = iVar11 - (int)param_2;
  }
  local_8 = param_2;
  if ((ulong)(long)(iVar3 + -1) < (ulong)param_1[0xb]) {
    uVar2 = param_1[10] + (long)(iVar3 + -1);
    lVar9 = *(long *)(param_1[7] + (uVar2 / 0x2e) * 8) + (uVar2 % 0x2e) * 0x58;
    bVar5 = *(byte *)(lVar9 + 0x12);
    bVar1 = *(char *)(lVar9 + 0x14) + 1;
    *(byte *)(lVar9 + 0x14) = bVar1;
    bVar1 = bVar5 - 3 < 0xfffffffe & (param_3 | 2 < bVar1);
    cVar6 = *(char *)(lVar9 + 0x13);
    *(undefined1 *)(lVar9 + 0x13) = 2;
    if (bVar1 == 1) {
      uVar7 = *(ushort *)(lVar9 + 0x16);
      uVar8 = *(ushort *)(lVar9 + 0x10);
      uVar12 = 1;
      if (uVar8 <= uVar7) {
        uVar12 = 2;
      }
      *(undefined1 *)(lVar9 + 0x12) = uVar12;
      if (cVar6 != '\x01' && bVar5 == 0) {
        param_1[0xc] = (*(long *)(lVar9 + 0x38) - *(long *)(lVar9 + 0x40)) + param_1[0xc];
        lVar4 = *(long *)(lVar9 + 0x38);
        lVar9 = *(long *)(lVar9 + 0x40);
        param_1[0xe] = param_1[0xe] + -1;
        param_1[0xd] = param_1[0xd] - (((*param_1 + lVar9) - lVar4) + 3U & 0xfffffffffffffffc);
      }
      if (uVar7 < uVar8) {
        if ((param_4 & 1) == 0) {
          plVar10 = param_1 + 0x12;
          param_1 = param_1 + 0x12;
        }
        else {
          plVar10 = param_1 + 0xf;
          param_1 = param_1 + 0xf;
        }
        FUN_00bb7140(0,plVar10,param_1,&local_8);
      }
      else {
        FUN_00bb51b0();
      }
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/deque:1532: libc++ Hardening assertion __i < size() failed: deque::operator[] index out of bounds\n"
            );
}


// ===== 00bb51b0  FUN_00bb51b0 =====

void FUN_00bb51b0(long *param_1,int *param_2)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  long *plVar7;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined2 local_84 [2];
  undefined8 local_80;
  int local_74;
  undefined8 local_70;
  undefined4 uStack_68;
  int local_64;
  void *local_60;
  void *local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined5 uStack_45;
  
  local_70._0_4_ = *param_2;
  local_80 = CONCAT62(local_80._2_6_,(short)param_2[10]);
  uVar3 = (*(code *)param_1[4])(param_1 + 2,&local_80,&local_70);
  if ((uVar3 & 1) != 0) {
    local_64 = param_2[0xd];
    local_70._0_4_ = param_2[10];
    local_50 = 0;
    local_74 = *param_2;
    _local_48 = CONCAT53(0xaaaaaaaaaa,CONCAT12(*(undefined1 *)((long)param_2 + 0x52),0x100));
    local_70._4_4_ = (undefined4)*(undefined8 *)(param_2 + 0xb);
    uStack_68 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0xb) >> 0x20);
    local_60 = (void *)0x0;
    local_58 = (void *)0x0;
    local_80 = 0;
    local_84[0] = 0;
    local_98 = 0;
    uStack_90 = 0x7fffffffffffffff;
    lVar4 = FUN_00bb5444(param_1 + 6,&local_74,&local_70,&local_80,local_84,&uStack_90,&local_98);
    if (*(char *)(lVar4 + 0x12) != '\x02') {
      *(undefined1 *)(lVar4 + 0x12) = 0;
    }
    *(undefined1 *)(lVar4 + 0x13) = 1;
    if (local_60 != (void *)0x0) {
      if ((long)local_58 - 1U < (ulong)((long)local_58 - (long)local_60)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      local_58 = local_60;
      operator_delete(local_60);
    }
  }
  lVar4 = param_1[7];
  local_70 = param_1[1];
  if (lVar4 != param_1[8]) {
    uVar3 = param_1[10];
    piVar6 = (int *)(*(long *)(lVar4 + (uVar3 / 0x2e) * 8) + (uVar3 % 0x2e) * 0x58);
    piVar5 = (int *)(*(long *)(lVar4 + ((param_1[0xb] + uVar3) / 0x2e) * 8) +
                    ((param_1[0xb] + uVar3) % 0x2e) * 0x58);
    if (piVar6 != piVar5) {
      plVar7 = (long *)(lVar4 + (uVar3 / 0x2e) * 8);
      do {
        local_70 = local_70 + 1;
        if (((*(char *)((long)piVar6 + 0x12) != '\x02') && ((short)piVar6[10] == (short)param_2[10])
            ) && (*piVar6 == *param_2)) {
          if (*(char *)((long)piVar6 + 0x12) == '\x01') {
            FUN_00bb47cc(param_1 + 0xf,&local_70);
            FUN_00bb47cc(param_1 + 0x12,&local_70);
          }
          if (*(char *)((long)piVar6 + 0x13) == '\x01') {
            *(undefined1 *)((long)piVar6 + 0x12) = 2;
          }
          else {
            cVar2 = *(char *)((long)piVar6 + 0x12);
            *(undefined1 *)((long)piVar6 + 0x12) = 2;
            if (cVar2 == '\0') {
              param_1[0xc] = (*(long *)(piVar6 + 0xe) - *(long *)(piVar6 + 0x10)) + param_1[0xc];
              lVar4 = *(long *)(piVar6 + 0xe);
              lVar1 = *(long *)(piVar6 + 0x10);
              param_1[0xe] = param_1[0xe] + -1;
              param_1[0xd] = param_1[0xd] - (((*param_1 + lVar1) - lVar4) + 3U & 0xfffffffffffffffc)
              ;
            }
          }
        }
        piVar6 = piVar6 + 0x16;
        if ((long)piVar6 - *plVar7 == 0xfd0) {
          plVar7 = plVar7 + 1;
          piVar6 = (int *)*plVar7;
        }
      } while (piVar6 != piVar5);
    }
  }
  return;
}


// ===== 00bb5444  FUN_00bb5444 =====

long FUN_00bb5444(long param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined2 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  ulong uVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar12 = *(long *)(param_1 + 8);
  lVar7 = *(long *)(param_1 + 0x10);
  lVar9 = 0;
  if (lVar7 != lVar12) {
    lVar9 = (lVar7 - lVar12 >> 3) * 0x2e + -1;
  }
  if (lVar9 == *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) {
    FUN_00bb7248(param_1);
    lVar12 = *(long *)(param_1 + 8);
    lVar7 = *(long *)(param_1 + 0x10);
  }
  if (lVar12 != lVar7) {
    uVar1 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
    puVar8 = (undefined4 *)(*(long *)(lVar12 + (uVar1 / 0x2e) * 8) + (uVar1 % 0x2e) * 0x58);
    if (puVar8 != (undefined4 *)0x0) {
      uVar16 = param_3[1];
      uVar15 = *param_3;
      uVar18 = param_3[3];
      uVar17 = param_3[2];
      uVar5 = *(undefined2 *)(param_3 + 5);
      uVar3 = *param_2;
      uVar10 = param_3[4];
      param_3[3] = 0;
      param_3[4] = 0;
      param_3[2] = 0;
      uVar4 = *(undefined1 *)((long)param_3 + 0x2a);
      uVar11 = *param_4;
      uVar13 = *param_6;
      uVar14 = *param_7;
      uVar6 = *param_5;
      *puVar8 = uVar3;
      *(undefined8 *)(puVar8 + 2) = uVar11;
      *(undefined2 *)(puVar8 + 4) = uVar6;
      *(undefined2 *)((long)puVar8 + 0x12) = 0;
      *(undefined1 *)(puVar8 + 5) = 0;
      *(undefined2 *)((long)puVar8 + 0x16) = 0;
      *(undefined8 *)(puVar8 + 6) = uVar13;
      *(undefined8 *)(puVar8 + 8) = uVar14;
      *(undefined8 *)(puVar8 + 0xc) = uVar16;
      *(undefined8 *)(puVar8 + 10) = uVar15;
      *(undefined8 *)(puVar8 + 0x10) = uVar18;
      *(undefined8 *)(puVar8 + 0xe) = uVar17;
      *(undefined8 *)(puVar8 + 0x12) = uVar10;
      *(undefined2 *)(puVar8 + 0x14) = uVar5;
      *(undefined1 *)((long)puVar8 + 0x52) = uVar4;
      lVar9 = *(long *)(param_1 + 0x28) + 1;
      uVar1 = *(long *)(param_1 + 0x20) + lVar9;
      *(long *)(param_1 + 0x28) = lVar9;
      plVar2 = (long *)(*(long *)(param_1 + 8) + (uVar1 / 0x2e) * 8);
      lVar12 = *plVar2;
      lVar9 = 0;
      if (*(long *)(param_1 + 8) != *(long *)(param_1 + 0x10)) {
        lVar9 = lVar12 + (uVar1 % 0x2e) * 0x58;
      }
      if (lVar9 == lVar12) {
        lVar9 = plVar2[-1] + 0xfd0;
      }
      return lVar9 + -0x58;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00bb5604  FUN_00bb5604 =====

void FUN_00bb5604(undefined8 *param_1,ulong *param_2,long *param_3,ulong param_4)

{
  int iVar1;
  void *__src;
  int *piVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  long *plVar7;
  bool bVar8;
  void *__dest;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  void *pvVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  int iVar16;
  long lVar17;
  undefined8 uVar18;
  undefined2 local_a0;
  undefined2 uStack_9e;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  void *local_90;
  void *local_88;
  void *local_80;
  undefined2 local_78;
  undefined1 local_76;
  int local_64;
  
  plVar14 = (long *)*param_3;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    if (plVar14 == param_3 + 1) {
      return;
    }
    lVar17 = plVar14[4];
    iVar9 = (int)param_2[1];
    iVar16 = (int)lVar17;
    iVar1 = iVar16 - iVar9;
    if (lVar17 <= (long)param_2[1]) {
      iVar1 = iVar9 - iVar16;
    }
    if (param_2[0xb] <= (ulong)(long)(iVar1 + -1)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/deque:1532: libc++ Hardening assertion __i < size() failed: deque::operator[] index out of bounds\n"
                );
    }
    uVar10 = param_2[10] + (long)(iVar1 + -1);
    lVar17 = *(long *)(param_2[7] + (uVar10 / 0x2e) * 8) + (uVar10 % 0x2e) * 0x58;
    uVar10 = *param_2;
    __src = *(void **)(lVar17 + 0x38);
    uVar11 = ((uVar10 + *(long *)(lVar17 + 0x40)) - (long)__src) + 3 & 0xfffffffffffffffc;
    if (param_4 < uVar11) {
      plVar7 = (long *)plVar14[1];
      if ((long *)plVar14[1] == (long *)0x0) {
        do {
          plVar15 = (long *)plVar14[2];
          bVar8 = plVar14 != (long *)*plVar15;
          plVar14 = plVar15;
        } while (bVar8);
      }
      else {
        do {
          plVar15 = plVar7;
          plVar7 = (long *)*plVar15;
        } while ((long *)*plVar15 != (long *)0x0);
      }
    }
    else {
      *(undefined2 *)(lVar17 + 0x12) = 0;
      uVar10 = *(long *)(lVar17 + 0x40) - (long)__src;
      *(undefined1 *)(lVar17 + 0x14) = 0;
      uVar18 = *(undefined8 *)(lVar17 + 0x2c);
      *(short *)(lVar17 + 0x16) = *(short *)(lVar17 + 0x16) + 1;
      uVar4 = *(undefined2 *)(lVar17 + 0x28);
      uVar5 = *(undefined2 *)(lVar17 + 0x2a);
      uVar6 = *(undefined4 *)(lVar17 + 0x28);
      uVar3 = *(undefined4 *)(lVar17 + 0x34);
      local_64 = iVar16;
      if (uVar10 == 0) {
        __dest = (void *)0x0;
        pvVar12 = (void *)0x0;
      }
      else {
        if ((long)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_005d34c0();
        }
        __dest = operator_new(uVar10);
        pvVar12 = (void *)((long)__dest + uVar10);
        memcpy(__dest,__src,uVar10);
      }
      local_78 = *(undefined2 *)(lVar17 + 0x50);
      local_76 = *(undefined1 *)(lVar17 + 0x52);
      piVar2 = (int *)param_1[1];
      uStack_9c = (undefined4)uVar18;
      uStack_98 = (undefined4)((ulong)uVar18 >> 0x20);
      local_a0 = uVar4;
      uStack_9e = uVar5;
      uStack_94 = uVar3;
      local_90 = __dest;
      local_88 = pvVar12;
      local_80 = pvVar12;
      if (piVar2 < (int *)param_1[2]) {
        if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *piVar2 = iVar16;
        *(ulong *)(piVar2 + 4) = CONCAT44(uVar3,uStack_98);
        *(ulong *)(piVar2 + 2) = CONCAT44(uStack_9c,uVar6);
        *(void **)(piVar2 + 6) = __dest;
        *(void **)(piVar2 + 8) = pvVar12;
        piVar2[10] = 0;
        piVar2[0xb] = 0;
        *(void **)(piVar2 + 10) = pvVar12;
        *(undefined2 *)(piVar2 + 0xc) = local_78;
        *(undefined1 *)((long)piVar2 + 0x32) = local_76;
        param_1[1] = piVar2 + 0xe;
      }
      else {
        uVar18 = FUN_00bb4444(param_1,&local_64,&local_a0);
        param_1[1] = uVar18;
        if (local_90 != (void *)0x0) {
          if ((long)local_88 - 1U < (ulong)((long)local_88 - (long)local_90)) goto LAB_00bb5960;
          local_88 = local_90;
          operator_delete(local_90);
        }
      }
      param_2[0xc] = (*(long *)(lVar17 + 0x40) - *(long *)(lVar17 + 0x38)) + param_2[0xc];
      param_2[0xe] = param_2[0xe] + 1;
      param_2[0xd] = param_2[0xd] + uVar11;
      plVar7 = (long *)plVar14[1];
      plVar13 = plVar14;
      if ((long *)plVar14[1] == (long *)0x0) {
        do {
          plVar15 = (long *)plVar13[2];
          bVar8 = plVar13 != (long *)*plVar15;
          plVar13 = plVar15;
        } while (bVar8);
      }
      else {
        do {
          plVar15 = plVar7;
          plVar7 = (long *)*plVar15;
        } while ((long *)*plVar15 != (long *)0x0);
      }
      if ((long *)*param_3 == plVar14) {
        *param_3 = (long)plVar15;
      }
      param_3[2] = param_3[2] + -1;
      FUN_005d5d48(param_3[1],plVar14);
      if (plVar14 + 4 == (long *)0x0) {
LAB_00bb5960:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      operator_delete(plVar14);
      uVar10 = *param_2;
      param_4 = param_4 - uVar11;
    }
    plVar14 = plVar15;
    if (param_4 <= uVar10) {
      return;
    }
  } while( true );
}


// ===== 00bb598c  FUN_00bb598c =====

void FUN_00bb598c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long local_18;
  
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00bb5604(param_2,param_2 + 0x78,param_3);
  if (*(long *)(param_2 + 0x88) != 0) {
    FUN_00bb6e94(param_2 + 0x90,*(undefined8 *)(param_2 + 0x78),param_2 + 0x80);
    local_18 = param_2 + 0x78;
    FUN_00bab808(&local_18,*(undefined8 *)(param_2 + 0x80));
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(long *)(param_2 + 0x78) = param_2 + 0x80;
  }
  return;
}


// ===== 00bb5a08  FUN_00bb5a08 =====

void FUN_00bb5a08(long param_1,undefined8 param_2)

{
  FUN_00bb5604(param_1,param_1 + 0x90,param_2);
  return;
}


// ===== 00bb5a18  FUN_00bb5a18 =====

void FUN_00bb5a18(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *local_68;
  long *local_60;
  long *local_58;
  long local_38;
  
  lVar10 = *(long *)(param_1 + 0x38);
  local_38 = *(long *)(param_1 + 8);
  local_68 = (long *)0x0;
  local_60 = (long *)0x0;
  local_58 = (long *)0x0;
  if (lVar10 != *(long *)(param_1 + 0x40)) {
    uVar8 = *(ulong *)(param_1 + 0x50);
    uVar7 = *(long *)(param_1 + 0x58) + uVar8;
    plVar5 = (long *)(lVar10 + (uVar8 / 0x2e) * 8);
    lVar11 = *plVar5 + (uVar8 % 0x2e) * 0x58;
    lVar10 = *(long *)(lVar10 + (uVar7 / 0x2e) * 8) + (uVar7 % 0x2e) * 0x58;
    if (lVar11 != lVar10) {
      plVar9 = (long *)0x0;
      do {
        local_38 = local_38 + 1;
        plVar3 = plVar9;
        if (*(char *)(lVar11 + 0x12) != '\x02') {
          plVar2 = local_68;
          if ((*(char *)(lVar11 + 0x13) != '\x02') || (param_2 < *(long *)(lVar11 + 0x18))) break;
          if (plVar9 < local_58) {
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            plVar3 = plVar9 + 1;
            *plVar9 = local_38;
            local_60 = plVar3;
          }
          else {
            plVar3 = (long *)FUN_00bb0af8(&local_68,&local_38);
            local_60 = plVar3;
          }
        }
        lVar11 = lVar11 + 0x58;
        if (lVar11 - *plVar5 == 0xfd0) {
          plVar5 = plVar5 + 1;
          lVar11 = *plVar5;
        }
        plVar9 = plVar3;
        plVar2 = local_68;
      } while (lVar11 != lVar10);
      while (plVar2 != plVar3) {
        iVar4 = (int)*plVar2;
        iVar6 = (int)*(long *)(param_1 + 8);
        iVar1 = iVar4 - iVar6;
        if (*plVar2 <= *(long *)(param_1 + 8)) {
          iVar1 = iVar6 - iVar4;
        }
        if (*(ulong *)(param_1 + 0x58) <= (ulong)(long)(iVar1 + -1)) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/deque:1532: libc++ Hardening assertion __i < size() failed: deque::operator[] index out of bounds\n"
                    );
        }
        uVar7 = *(long *)(param_1 + 0x50) + (long)(iVar1 + -1);
        FUN_00bb51b0(param_1,*(long *)(*(long *)(param_1 + 0x38) + (uVar7 / 0x2e) * 8) +
                             (uVar7 % 0x2e) * 0x58);
        plVar2 = plVar2 + 1;
      }
      if (local_68 != (long *)0x0) {
        uVar8 = (ulong)((long)local_60 + (-8 - ((long)local_60 << 0x3d))) >> 3;
        uVar7 = (ulong)(((long)local_68 - (long)local_60 << 0x3d) -
                       ((long)local_68 - (long)local_60)) >> 3;
        if (uVar8 <= uVar7) {
          uVar7 = uVar8;
        }
        plVar5 = local_60;
        if ((1 < uVar7) && ((((int)local_68 - (int)local_60 | -(int)local_60) & 7U) == 0)) {
          uVar7 = uVar7 & 0x1ffffffffffffffe;
          plVar5 = local_60 + -uVar7;
          do {
            uVar7 = uVar7 - 2;
          } while (uVar7 != 0);
        }
        while (plVar5 != local_68) {
          plVar5 = plVar5 + -1;
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        local_60 = local_68;
        operator_delete(local_68);
      }
    }
  }
  return;
}


// ===== 00bb5c98  FUN_00bb5c98 =====

long FUN_00bb5c98(long param_1)

{
  return (long)*(int *)(param_1 + 0x58) + *(long *)(param_1 + 8);
}


// ===== 00bb5cac  FUN_00bb5cac =====

undefined1  [16]
FUN_00bb5cac(long *param_1,undefined4 param_2,undefined2 *param_3,long param_4,undefined2 param_5,
            undefined8 param_6,undefined8 param_7)

{
  void *__src;
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  ulong __n;
  long lVar6;
  void *__dest;
  long lVar7;
  long lVar8;
  void *pvVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined2 local_b8;
  undefined2 local_b6;
  undefined8 local_b4;
  undefined4 local_ac;
  void *local_a8;
  void *local_a0;
  void *local_98;
  undefined2 local_90;
  undefined1 local_8e;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  undefined2 local_68 [2];
  undefined4 local_64;
  
  lVar1 = param_1[1];
  lVar7 = *(long *)(param_3 + 8);
  lVar2 = *(long *)(param_3 + 0xc);
  lVar6 = param_1[0xb];
  param_1[0xc] = (lVar2 - lVar7) + param_1[0xc];
  param_1[0xe] = param_1[0xe] + 1;
  param_1[0xd] = param_1[0xd] + (((*param_1 + lVar2) - lVar7) + 3U & 0xfffffffffffffffc);
  __src = *(void **)(param_3 + 8);
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar10 = *(undefined8 *)(param_3 + 2);
  uVar3 = *(undefined4 *)(param_3 + 6);
  __n = *(long *)(param_3 + 0xc) - (long)__src;
  local_88 = param_7;
  local_80 = param_6;
  local_78 = param_4;
  local_68[0] = param_5;
  local_64 = param_2;
  if (__n == 0) {
    __dest = (void *)0x0;
    pvVar9 = (void *)0x0;
  }
  else {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d34c0();
    }
    __dest = operator_new(__n);
    pvVar9 = (void *)((long)__dest + __n);
    memcpy(__dest,__src,__n);
  }
  local_90 = param_3[0x14];
  local_8e = *(undefined1 *)(param_3 + 0x15);
  local_b8 = uVar4;
  local_b6 = uVar5;
  local_b4 = uVar10;
  local_ac = uVar3;
  local_a8 = __dest;
  local_a0 = pvVar9;
  local_98 = pvVar9;
  lVar7 = FUN_00bb5e70(param_1 + 6,&local_64,&local_b8,&local_78,local_68,&local_80,&local_88);
  if (local_a8 != (void *)0x0) {
    if ((long)local_a0 - 1U < (ulong)((long)local_a0 - (long)local_a8)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    local_a0 = local_a8;
    operator_delete(local_a8);
  }
  lVar2 = local_78;
  lVar8 = *(long *)(lVar7 + 0x18);
  if (local_78 < lVar8) {
    lVar7 = lVar1 + (int)lVar6 + 1;
  }
  else {
    FUN_00bb51b0(param_1,lVar7);
    lVar7 = 0;
  }
  auVar11[8] = lVar2 < lVar8;
  auVar11._0_8_ = lVar7;
  auVar11._9_7_ = 0;
  return auVar11;
}


// ===== 00bb5e70  FUN_00bb5e70 =====

long FUN_00bb5e70(long param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined2 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  ulong uVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar12 = *(long *)(param_1 + 8);
  lVar7 = *(long *)(param_1 + 0x10);
  lVar9 = 0;
  if (lVar7 != lVar12) {
    lVar9 = (lVar7 - lVar12 >> 3) * 0x2e + -1;
  }
  if (lVar9 == *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) {
    FUN_00bb7248(param_1);
    lVar12 = *(long *)(param_1 + 8);
    lVar7 = *(long *)(param_1 + 0x10);
  }
  if (lVar12 != lVar7) {
    uVar1 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
    puVar8 = (undefined4 *)(*(long *)(lVar12 + (uVar1 / 0x2e) * 8) + (uVar1 % 0x2e) * 0x58);
    if (puVar8 != (undefined4 *)0x0) {
      uVar16 = param_3[1];
      uVar15 = *param_3;
      uVar18 = param_3[3];
      uVar17 = param_3[2];
      uVar5 = *(undefined2 *)(param_3 + 5);
      uVar3 = *param_2;
      uVar10 = param_3[4];
      param_3[3] = 0;
      param_3[4] = 0;
      param_3[2] = 0;
      uVar4 = *(undefined1 *)((long)param_3 + 0x2a);
      uVar11 = *param_4;
      uVar13 = *param_6;
      uVar14 = *param_7;
      uVar6 = *param_5;
      *puVar8 = uVar3;
      *(undefined8 *)(puVar8 + 2) = uVar11;
      *(undefined2 *)(puVar8 + 4) = uVar6;
      *(undefined2 *)((long)puVar8 + 0x12) = 0;
      *(undefined1 *)(puVar8 + 5) = 0;
      *(undefined2 *)((long)puVar8 + 0x16) = 0;
      *(undefined8 *)(puVar8 + 6) = uVar13;
      *(undefined8 *)(puVar8 + 8) = uVar14;
      *(undefined8 *)(puVar8 + 0xc) = uVar16;
      *(undefined8 *)(puVar8 + 10) = uVar15;
      *(undefined8 *)(puVar8 + 0x10) = uVar18;
      *(undefined8 *)(puVar8 + 0xe) = uVar17;
      *(undefined8 *)(puVar8 + 0x12) = uVar10;
      *(undefined2 *)(puVar8 + 0x14) = uVar5;
      *(undefined1 *)((long)puVar8 + 0x52) = uVar4;
      lVar9 = *(long *)(param_1 + 0x28) + 1;
      uVar1 = *(long *)(param_1 + 0x20) + lVar9;
      *(long *)(param_1 + 0x28) = lVar9;
      plVar2 = (long *)(*(long *)(param_1 + 8) + (uVar1 / 0x2e) * 8);
      lVar12 = *plVar2;
      lVar9 = 0;
      if (*(long *)(param_1 + 8) != *(long *)(param_1 + 0x10)) {
        lVar9 = lVar12 + (uVar1 % 0x2e) * 0x58;
      }
      if (lVar9 == lVar12) {
        lVar9 = plVar2[-1] + 0xfd0;
      }
      return lVar9 + -0x58;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00bb6030  FUN_00bb6030 =====

void FUN_00bb6030(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *local_58;
  long *local_50;
  long *local_48;
  long local_28;
  
  lVar7 = *(long *)(param_1 + 0x38);
  local_28 = *(long *)(param_1 + 8);
  local_58 = (long *)0x0;
  local_50 = (long *)0x0;
  local_48 = (long *)0x0;
  if (lVar7 != *(long *)(param_1 + 0x40)) {
    uVar5 = *(ulong *)(param_1 + 0x50);
    uVar4 = *(long *)(param_1 + 0x58) + uVar5;
    plVar3 = (long *)(lVar7 + (uVar5 / 0x2e) * 8);
    lVar8 = *plVar3 + (uVar5 % 0x2e) * 0x58;
    lVar7 = *(long *)(lVar7 + (uVar4 / 0x2e) * 8) + (uVar4 % 0x2e) * 0x58;
    if (lVar8 != lVar7) {
      plVar6 = (long *)0x0;
      do {
        local_28 = local_28 + 1;
        plVar2 = plVar6;
        if (*(char *)(lVar8 + 0x13) != '\x01') {
          if (plVar6 < local_48) {
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            plVar2 = plVar6 + 1;
            *plVar6 = local_28;
            local_50 = plVar2;
          }
          else {
            plVar2 = (long *)FUN_00bb0af8(&local_58,&local_28);
            local_50 = plVar2;
          }
        }
        lVar8 = lVar8 + 0x58;
        if (lVar8 - *plVar3 == 0xfd0) {
          plVar3 = plVar3 + 1;
          lVar8 = *plVar3;
        }
        plVar6 = plVar2;
        plVar1 = local_58;
      } while (lVar8 != lVar7);
      for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
        FUN_00bb502c(param_1,*plVar1,1,0);
      }
      if (local_58 != (long *)0x0) {
        uVar5 = (ulong)((long)local_50 + (-8 - ((long)local_50 << 0x3d))) >> 3;
        uVar4 = (ulong)(((long)local_58 - (long)local_50 << 0x3d) -
                       ((long)local_58 - (long)local_50)) >> 3;
        if (uVar5 <= uVar4) {
          uVar4 = uVar5;
        }
        plVar3 = local_50;
        if ((1 < uVar4) && ((((int)local_58 - (int)local_50 | -(int)local_50) & 7U) == 0)) {
          uVar4 = uVar4 & 0x1ffffffffffffffe;
          plVar3 = local_50 + -uVar4;
          do {
            uVar4 = uVar4 - 2;
          } while (uVar4 != 0);
        }
        while (plVar3 != local_58) {
          plVar3 = plVar3 + -1;
          if (plVar3 == (long *)0x0) {
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
    }
  }
  return;
}


// ===== 00bb6228  FUN_00bb6228 =====

long FUN_00bb6228(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  if ((param_3 <= lVar2) || (lVar2 + (int)*(ulong *)(param_1 + 0x58) + 1 <= param_3)) {
    return 0x7fffffffffffffff;
  }
  uVar3 = (ulong)(int)(~(uint)lVar2 + (int)param_3);
  if (*(ulong *)(param_1 + 0x58) <= uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:1540: libc++ Hardening assertion __i < size() failed: deque::operator[] index out of bounds\n"
              );
  }
  uVar3 = *(long *)(param_1 + 0x50) + uVar3;
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + (uVar3 / 0x2e) * 8) + (uVar3 % 0x2e) * 0x58;
  if (((*(short *)(lVar2 + 0x16) == 0) && (param_2 != 0x7fffffffffffffff)) &&
     (lVar2 = *(long *)(lVar2 + 8), lVar2 != -0x8000000000000000)) {
    lVar1 = -0x8000000000000000;
    if (lVar2 != 0x7fffffffffffffff && param_2 != -0x8000000000000000) {
      lVar1 = param_2 - lVar2;
    }
    return lVar1;
  }
  return 0x7fffffffffffffff;
}


// ===== 00bb6308  FUN_00bb6308 =====

bool FUN_00bb6308(long param_1)

{
  if (*(long *)(param_1 + 0x58) != 0) {
    return *(char *)(*(long *)(*(long *)(param_1 + 0x38) + (*(ulong *)(param_1 + 0x50) / 0x2e) * 8)
                     + (*(ulong *)(param_1 + 0x50) % 0x2e) * 0x58 + 0x12) == '\x02';
  }
  return false;
}


// ===== 00bb6368  FUN_00bb6368 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00bb6368(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined2 uVar2;
  ushort uVar3;
  undefined2 uVar4;
  long lVar5;
  undefined8 *******pppppppuVar6;
  bool bVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *******pppppppuVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined8 *******pppppppuVar18;
  undefined8 *******local_90;
  undefined8 ******local_88;
  undefined8 ******local_80;
  undefined8 *******local_78;
  undefined8 *******local_70;
  ulong local_68;
  
  lVar1 = *(long *)(param_2 + 0x38);
  lVar14 = *(long *)(param_2 + 8);
  local_70 = (undefined8 *******)0x0;
  local_68 = 0;
  local_78 = &local_70;
  if (lVar1 != *(long *)(param_2 + 0x40)) {
    uVar13 = *(ulong *)(param_2 + 0x50);
    uVar12 = *(long *)(param_2 + 0x58) + uVar13;
    lVar16 = *(long *)(lVar1 + (uVar13 / 0x2e) * 8) + (uVar13 % 0x2e) * 0x58;
    lVar15 = *(long *)(lVar1 + (uVar12 / 0x2e) * 8) + (uVar12 % 0x2e) * 0x58;
    if (lVar16 != lVar15) {
      plVar17 = (long *)(lVar1 + (uVar13 / 0x2e) * 8);
      do {
        plVar11 = *(long **)(param_2 + 0xa8);
        lVar1 = lVar14 + 1;
        lVar5 = (long)*(long **)(param_2 + 0xb0) - (long)plVar11;
        if (lVar5 != 0) {
          uVar12 = lVar5 >> 3;
          plVar10 = plVar11;
          do {
            uVar13 = uVar12 >> 1;
            plVar11 = plVar10 + uVar13 + 1;
            uVar12 = uVar12 + ~uVar13;
            if (lVar1 <= plVar10[uVar13]) {
              plVar11 = plVar10;
              uVar12 = uVar13;
            }
            plVar10 = plVar11;
          } while (uVar12 != 0);
        }
        if (((plVar11 != *(long **)(param_2 + 0xb0)) && (*plVar11 <= lVar1)) ||
           (*(char *)(lVar16 + 0x12) != '\x02')) break;
        if ((*(byte *)(lVar16 + 0x52) & 1) == 0) {
          pppppppuVar9 = &local_70;
          pppppppuVar18 = &local_70;
          if (local_70 != (undefined8 *******)0x0) {
            pppppppuVar6 = local_70;
            do {
              while (pppppppuVar8 = pppppppuVar6, pppppppuVar9 = pppppppuVar8,
                    *(ushort *)(lVar16 + 0x28) < *(ushort *)((long)pppppppuVar8 + 0x1a)) {
                pppppppuVar6 = (undefined8 *******)*pppppppuVar8;
                pppppppuVar18 = pppppppuVar8;
                if ((undefined8 *******)*pppppppuVar8 == (undefined8 *******)0x0) goto LAB_00bb64d0;
              }
              if (*(ushort *)(lVar16 + 0x28) <= *(ushort *)((long)pppppppuVar8 + 0x1a))
              goto LAB_00bb652c;
              pppppppuVar6 = (undefined8 *******)pppppppuVar8[1];
            } while ((undefined8 *******)pppppppuVar8[1] != (undefined8 *******)0x0);
            pppppppuVar18 = pppppppuVar8 + 1;
          }
LAB_00bb64d0:
          pppppppuVar8 = (undefined8 *******)operator_new(0x20);
          if (pppppppuVar8 == (undefined8 *******)0x0) goto LAB_00bb6748;
          uVar2 = *(undefined2 *)(lVar16 + 0x28);
          *(undefined2 *)((long)pppppppuVar8 + 0x1c) = 0;
          *pppppppuVar8 = (undefined8 ******)0x0;
          pppppppuVar8[1] = (undefined8 ******)0x0;
          *(undefined2 *)((long)pppppppuVar8 + 0x1a) = uVar2;
          pppppppuVar8[2] = pppppppuVar9;
          *pppppppuVar18 = pppppppuVar8;
          pppppppuVar9 = pppppppuVar8;
          if ((undefined8 *******)*local_78 != (undefined8 *******)0x0) {
            pppppppuVar9 = (undefined8 *******)*pppppppuVar18;
            local_78 = (undefined8 *******)*local_78;
          }
          FUN_005d5b94(local_70,pppppppuVar9);
          local_68 = local_68 + 1;
LAB_00bb652c:
          uVar3 = *(ushort *)(lVar16 + 0x2a);
          if (*(ushort *)((long)pppppppuVar8 + 0x1c) < uVar3) {
            pppppppuVar9 = &local_70;
            pppppppuVar18 = &local_70;
            if (local_70 != (undefined8 *******)0x0) {
              pppppppuVar6 = local_70;
              do {
                while (pppppppuVar8 = pppppppuVar6, pppppppuVar9 = pppppppuVar8,
                      *(ushort *)(lVar16 + 0x28) < *(ushort *)((long)pppppppuVar8 + 0x1a)) {
                  pppppppuVar6 = (undefined8 *******)*pppppppuVar8;
                  pppppppuVar18 = pppppppuVar8;
                  if ((undefined8 *******)*pppppppuVar8 == (undefined8 *******)0x0)
                  goto LAB_00bb6584;
                }
                if (*(ushort *)(lVar16 + 0x28) <= *(ushort *)((long)pppppppuVar8 + 0x1a))
                goto LAB_00bb65e4;
                pppppppuVar6 = (undefined8 *******)pppppppuVar8[1];
              } while ((undefined8 *******)pppppppuVar8[1] != (undefined8 *******)0x0);
              pppppppuVar18 = pppppppuVar8 + 1;
            }
LAB_00bb6584:
            pppppppuVar8 = (undefined8 *******)operator_new(0x20);
            if (pppppppuVar8 == (undefined8 *******)0x0) goto LAB_00bb6748;
            uVar2 = *(undefined2 *)(lVar16 + 0x28);
            *(undefined2 *)((long)pppppppuVar8 + 0x1c) = 0;
            *pppppppuVar8 = (undefined8 ******)0x0;
            pppppppuVar8[1] = (undefined8 ******)0x0;
            *(undefined2 *)((long)pppppppuVar8 + 0x1a) = uVar2;
            pppppppuVar8[2] = pppppppuVar9;
            *pppppppuVar18 = pppppppuVar8;
            pppppppuVar9 = pppppppuVar8;
            if ((undefined8 *******)*local_78 != (undefined8 *******)0x0) {
              pppppppuVar9 = (undefined8 *******)*pppppppuVar18;
              local_78 = (undefined8 *******)*local_78;
            }
            FUN_005d5b94(local_70,pppppppuVar9);
            local_68 = local_68 + 1;
            uVar3 = *(ushort *)(lVar16 + 0x2a);
LAB_00bb65e4:
            *(ushort *)((long)pppppppuVar8 + 0x1c) = uVar3;
          }
        }
        lVar16 = lVar16 + 0x58;
        if (lVar16 - *plVar17 == 0xfd0) {
          plVar17 = plVar17 + 1;
          lVar16 = *plVar17;
        }
        lVar14 = lVar1;
      } while (lVar16 != lVar15);
      uVar12 = local_68;
      local_90 = (undefined8 *******)0x0;
      local_88 = (undefined8 ******)0x0;
      local_80 = (undefined8 ******)0x0;
      pppppppuVar18 = (undefined8 *******)local_88;
      pppppppuVar9 = local_78;
      if (local_68 != 0) {
        if (0x1555555555555555 < local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_00bad440();
        }
        local_88 = (undefined8 ******)operator_new(local_68 * 0xc);
        local_80 = (undefined8 ******)((long)local_88 + uVar12 * 0xc);
        pppppppuVar18 = (undefined8 *******)local_88;
        pppppppuVar9 = local_78;
      }
      goto joined_r0x00bb6664;
    }
  }
  local_88 = (undefined8 ******)0x0;
  local_80 = (undefined8 ******)0x0;
  pppppppuVar18 = (undefined8 *******)local_88;
  pppppppuVar9 = &local_70;
joined_r0x00bb6664:
  do {
    local_90 = pppppppuVar18;
    if ((undefined8 ********)pppppppuVar9 == &local_70) {
      *(int *)(param_1 + 1) = (int)lVar14;
      param_1[4] = local_80;
      param_1[2] = local_90;
      param_1[3] = local_88;
      *param_1 = &PTR_FUN_00d47990;
      local_90 = &local_78;
      FUN_00bb7e78(&local_90,local_70);
      return;
    }
    if (local_88 < local_80) {
      if (local_88 == (undefined8 ******)0x0) {
LAB_00bb6748:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar2 = *(undefined2 *)((long)pppppppuVar9 + 0x1a);
      uVar4 = *(undefined2 *)((long)pppppppuVar9 + 0x1c);
      *(undefined1 *)((long)local_88 + 4) = 0;
      *(undefined4 *)(local_88 + 1) = 0;
      *(undefined2 *)local_88 = uVar2;
      *(undefined2 *)((long)local_88 + 2) = uVar4;
      local_88 = (undefined8 ******)((long)local_88 + 0xc);
    }
    else {
      local_88 = (undefined8 ******)
                 FUN_00bb6c1c(&local_90,(long)pppppppuVar9 + 0x1a,(long)pppppppuVar9 + 0x1c);
    }
    pppppppuVar6 = (undefined8 *******)pppppppuVar9[1];
    pppppppuVar8 = pppppppuVar9;
    pppppppuVar18 = local_90;
    if ((undefined8 *******)pppppppuVar9[1] == (undefined8 *******)0x0) {
      do {
        pppppppuVar9 = (undefined8 *******)pppppppuVar8[2];
        bVar7 = pppppppuVar8 != (undefined8 *******)*pppppppuVar9;
        pppppppuVar8 = pppppppuVar9;
      } while (bVar7);
    }
    else {
      do {
        pppppppuVar9 = pppppppuVar6;
        pppppppuVar6 = (undefined8 *******)*pppppppuVar9;
      } while ((undefined8 *******)*pppppppuVar9 != (undefined8 *******)0x0);
    }
  } while( true );
}


// ===== 00bb6760  FUN_00bb6760 =====

void FUN_00bb6760(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  bool bVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  undefined8 **local_a0;
  undefined8 **local_98;
  undefined8 **local_90;
  uint local_84;
  undefined8 *local_80;
  undefined8 local_78;
  ulong local_70;
  undefined1 uStack_61;
  
  lVar1 = *(long *)(param_2 + 0x38);
  lVar13 = *(long *)(param_2 + 8);
  local_78 = 0;
  local_70 = 0;
  local_80 = &local_78;
  if (lVar1 != *(long *)(param_2 + 0x40)) {
    uVar12 = *(ulong *)(param_2 + 0x50);
    uVar11 = *(long *)(param_2 + 0x58) + uVar12;
    lVar17 = *(long *)(lVar1 + (uVar12 / 0x2e) * 8) + (uVar12 % 0x2e) * 0x58;
    lVar16 = *(long *)(lVar1 + (uVar11 / 0x2e) * 8) + (uVar11 % 0x2e) * 0x58;
    if (lVar17 != lVar16) {
      plVar18 = (long *)(lVar1 + (uVar12 / 0x2e) * 8);
      do {
        plVar10 = *(long **)(param_2 + 0xa8);
        lVar1 = lVar13 + 1;
        lVar5 = (long)*(long **)(param_2 + 0xb0) - (long)plVar10;
        if (lVar5 != 0) {
          uVar11 = lVar5 >> 3;
          plVar9 = plVar10;
          do {
            uVar12 = uVar11 >> 1;
            plVar10 = plVar9 + uVar12 + 1;
            uVar11 = uVar11 + ~uVar12;
            if (lVar1 <= plVar9[uVar12]) {
              plVar10 = plVar9;
              uVar11 = uVar12;
            }
            plVar9 = plVar10;
          } while (uVar11 != 0);
        }
        if (((plVar10 != *(long **)(param_2 + 0xb0)) && (*plVar10 <= lVar1)) ||
           (*(char *)(lVar17 + 0x12) != '\x02')) break;
        local_84 = (uint)*(byte *)(lVar17 + 0x52) | (uint)*(ushort *)(lVar17 + 0x28) << 0x10;
        local_a0 = (undefined8 **)&local_84;
        lVar13 = FUN_00bb7f60(0,&local_80,&local_80,&DAT_001f94c3,&local_a0,&uStack_61);
        if (*(uint *)(lVar13 + 0x20) < *(uint *)(lVar17 + 0x2c)) {
          local_a0 = (undefined8 **)&local_84;
          lVar13 = FUN_00bb7f60(0,&local_80,&local_80,&DAT_001f94c3,&local_a0,&uStack_61);
          *(undefined4 *)(lVar13 + 0x20) = *(undefined4 *)(lVar17 + 0x2c);
        }
        lVar17 = lVar17 + 0x58;
        if (lVar17 - *plVar18 == 0xfd0) {
          plVar18 = plVar18 + 1;
          lVar17 = *plVar18;
        }
        lVar13 = lVar1;
      } while (lVar17 != lVar16);
      uVar11 = local_70;
      local_a0 = (undefined8 **)0x0;
      local_98 = (undefined8 **)0x0;
      local_90 = (undefined8 **)0x0;
      ppuVar7 = local_98;
      puVar15 = local_80;
      if (local_70 != 0) {
        if (0x1555555555555555 < local_70) {
                    /* WARNING: Subroutine does not return */
          FUN_00bad440();
        }
        local_98 = (undefined8 **)operator_new(local_70 * 0xc);
        local_90 = (undefined8 **)((long)local_98 + uVar11 * 0xc);
        ppuVar7 = local_98;
        puVar15 = local_80;
      }
      goto joined_r0x00bb6978;
    }
  }
  local_98 = (undefined8 **)0x0;
  local_90 = (undefined8 **)0x0;
  ppuVar7 = local_98;
  puVar15 = &local_78;
joined_r0x00bb6978:
  do {
    local_a0 = ppuVar7;
    if (puVar15 == &local_78) {
      *(int *)(param_1 + 1) = (int)lVar13;
      param_1[4] = local_90;
      param_1[2] = local_a0;
      param_1[3] = local_98;
      *param_1 = &PTR_FUN_00d479c0;
      local_a0 = &local_80;
      FUN_00bb7eec(&local_a0,local_78);
      return;
    }
    if (local_98 < local_90) {
      if (local_98 == (undefined8 **)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar4 = *(undefined2 *)((long)puVar15 + 0x1e);
      uVar3 = *(undefined1 *)((long)puVar15 + 0x1c);
      uVar2 = *(undefined4 *)(puVar15 + 4);
      *(undefined2 *)((long)local_98 + 2) = 0;
      *(undefined2 *)local_98 = uVar4;
      *(undefined1 *)((long)local_98 + 4) = uVar3;
      *(undefined4 *)(local_98 + 1) = uVar2;
      local_98 = (undefined8 **)((long)local_98 + 0xc);
    }
    else {
      local_98 = (undefined8 **)
                 FUN_00bb6d54(&local_a0,(long)puVar15 + 0x1c,(long)puVar15 + 0x1e,puVar15 + 4);
    }
    puVar6 = (undefined8 *)puVar15[1];
    puVar14 = puVar15;
    ppuVar7 = local_a0;
    if ((undefined8 *)puVar15[1] == (undefined8 *)0x0) {
      do {
        puVar15 = (undefined8 *)puVar14[2];
        bVar8 = puVar14 != (undefined8 *)*puVar15;
        puVar14 = puVar15;
      } while (bVar8);
    }
    else {
      do {
        puVar15 = puVar6;
        puVar6 = (undefined8 *)*puVar15;
      } while ((undefined8 *)*puVar15 != (undefined8 *)0x0);
    }
  } while( true );
}


// ===== 00bb6a7c  FUN_00bb6a7c =====

void FUN_00bb6a7c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}


// ===== 00bb6a88  FUN_00bb6a88 =====

void FUN_00bb6a88(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long local_18;
  
  plVar2 = *(long **)(param_1 + 0xa8);
  lVar1 = (long)*(long **)(param_1 + 0xb0) - (long)plVar2;
  local_18 = *(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x58) + 1;
  if (lVar1 != 0) {
    uVar4 = lVar1 >> 3;
    plVar3 = plVar2;
    do {
      uVar5 = uVar4 >> 1;
      plVar2 = plVar3 + uVar5 + 1;
      uVar4 = uVar4 + ~uVar5;
      if (local_18 <= plVar3[uVar5]) {
        plVar2 = plVar3;
        uVar4 = uVar5;
      }
      plVar3 = plVar2;
    } while (uVar4 != 0);
  }
  if ((plVar2 == *(long **)(param_1 + 0xb0)) || (local_18 < *plVar2)) {
    FUN_00bb807c((long *)(param_1 + 0xa8),plVar2,&local_18);
  }
  return;
}


// ===== 00bb6b10  FUN_00bb6b10 =====

undefined8 * FUN_00bb6b10(long *param_1,undefined8 *param_2)

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
    FUN_00bb6c04();
LAB_00bb6c00:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00bb6c00;
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


// ===== 00bb6c04  FUN_00bb6c04 =====

void FUN_00bb6c04(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00bb6c1c  FUN_00bb6c1c =====

undefined2 * FUN_00bb6c1c(long *param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  void *pvVar3;
  void *pvVar4;
  size_t __n;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  void *__dest;
  undefined2 *puVar8;
  
  puVar8 = (undefined2 *)(param_1[1] - *param_1);
  uVar5 = ((long)puVar8 >> 2) * -0x5555555555555555 + 1;
  if (0x1555555555555555 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00bad440();
  }
  lVar6 = param_1[2] - *param_1 >> 2;
  uVar7 = lVar6 * 0x5555555555555556;
  if (uVar7 < uVar5 || uVar7 - uVar5 == 0) {
    uVar7 = uVar5;
  }
  if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
    uVar7 = 0x1555555555555555;
  }
  if (uVar7 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (0x1555555555555555 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar3 = operator_new(uVar7 * 0xc);
    puVar8 = (undefined2 *)((long)pvVar3 + (long)puVar8);
  }
  if (puVar8 != (undefined2 *)0x0) {
    uVar1 = *param_2;
    uVar2 = *param_3;
    *(undefined1 *)(puVar8 + 2) = 0;
    *puVar8 = uVar1;
    puVar8[1] = uVar2;
    *(undefined4 *)(puVar8 + 4) = 0;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar8 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar4 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar8 + 6);
    param_1[2] = (long)((long)pvVar3 + uVar7 * 0xc);
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
    return puVar8 + 6;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00bb6d54  FUN_00bb6d54 =====

undefined2 * FUN_00bb6d54(long *param_1,undefined1 *param_2,undefined2 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  void *pvVar4;
  void *pvVar5;
  size_t __n;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  void *__dest;
  undefined2 *puVar9;
  
  puVar9 = (undefined2 *)(param_1[1] - *param_1);
  uVar6 = ((long)puVar9 >> 2) * -0x5555555555555555 + 1;
  if (0x1555555555555555 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00bad440();
  }
  lVar7 = param_1[2] - *param_1 >> 2;
  uVar8 = lVar7 * 0x5555555555555556;
  if (uVar8 < uVar6 || uVar8 - uVar6 == 0) {
    uVar8 = uVar6;
  }
  if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
    uVar8 = 0x1555555555555555;
  }
  if (uVar8 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x1555555555555555 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar4 = operator_new(uVar8 * 0xc);
    puVar9 = (undefined2 *)((long)pvVar4 + (long)puVar9);
  }
  if (puVar9 != (undefined2 *)0x0) {
    uVar3 = *param_3;
    uVar2 = *param_2;
    uVar1 = *param_4;
    puVar9[1] = 0;
    *puVar9 = uVar3;
    *(undefined1 *)(puVar9 + 2) = uVar2;
    *(undefined4 *)(puVar9 + 4) = uVar1;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar9 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar5 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar9 + 6);
    param_1[2] = (long)((long)pvVar4 + uVar8 * 0xc);
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
    }
    return puVar9 + 6;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00bb6e94  FUN_00bb6e94 =====

void FUN_00bb6e94(long *param_1,long *param_2,long *param_3)

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
        FUN_00bb6fe0(&local_40,param_2 + 4,param_2 + 4);
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


// ===== 00bb6fe0  FUN_00bb6fe0 =====

void FUN_00bb6fe0(long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  plVar1 = (long *)*param_1;
  lVar9 = *(long *)param_1[1];
  lVar4 = *param_2;
  if (*(long *)(lVar9 + 0x20) < lVar4) {
    puVar2 = (undefined8 *)operator_new(0x28);
    if ((puVar2 == (undefined8 *)0x0) || (puVar2 == (undefined8 *)0xffffffffffffffe0)) {
LAB_00bb712c:
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
      while (plVar7 = plVar6, plVar7[4] <= lVar4) {
        if (lVar4 <= plVar7[4]) {
          return;
        }
        plVar6 = (long *)plVar7[1];
        if ((long *)plVar7[1] == (long *)0x0) {
          plVar8 = plVar7 + 1;
          goto LAB_00bb70c0;
        }
      }
      plVar6 = (long *)*plVar7;
    }
LAB_00bb70c0:
    puVar2 = (undefined8 *)operator_new(0x28);
    if ((puVar2 == (undefined8 *)0x0) || (puVar2 == (undefined8 *)0xffffffffffffffe0))
    goto LAB_00bb712c;
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


// ===== 00bb7140  FUN_00bb7140 =====

undefined1  [16] FUN_00bb7140(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  plVar3 = param_2 + 1;
  plVar6 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar2 = plVar1, plVar3 = plVar2, *param_4 < plVar2[4]) {
        plVar1 = (long *)*plVar2;
        plVar6 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_00bb71ac;
      }
      if (*param_4 <= plVar2[4]) {
        uVar4 = 0;
        goto LAB_00bb7218;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar6 = plVar2 + 1;
  }
LAB_00bb71ac:
  plVar2 = (long *)operator_new(0x28);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  lVar5 = *param_4;
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = (long)plVar3;
  plVar2[4] = lVar5;
  *plVar6 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar3 = (long *)*plVar6;
  }
  FUN_005d5b94(param_2[1],plVar3);
  uVar4 = 1;
  param_2[2] = param_2[2] + 1;
LAB_00bb7218:
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = plVar2;
  return auVar7;
}


// ===== 00bb7248  FUN_00bb7248 =====

void FUN_00bb7248(long *param_1)

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
  
  if ((ulong)param_1[4] < 0x2e) {
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
      local_18 = operator_new(0xfd0);
      FUN_00bb76b8(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_00bb7bdc(&local_50,lVar5);
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
      local_50 = (undefined1 *)operator_new(0xfd0);
      FUN_00bb76b8(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0xfd0);
    FUN_00bb7940(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x2e;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_00bb7430(param_1,&local_50);
  return;
}


// ===== 00bb7430  FUN_00bb7430 =====

void FUN_00bb7430(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_00bb76a0;
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
LAB_00bb76a0:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00bb76b8  FUN_00bb76b8 =====

void FUN_00bb76b8(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_00bb7928;
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
LAB_00bb7928:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00bb7940  FUN_00bb7940 =====

void FUN_00bb7940(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_00bb7bc4;
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
LAB_00bb7bc4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00bb7bdc  FUN_00bb7bdc =====

void FUN_00bb7bdc(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_00bb7e60;
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
LAB_00bb7e60:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00bb7e78  FUN_00bb7e78 =====

void FUN_00bb7e78(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00bb7e78(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe6) {
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


// ===== 00bb7eec  FUN_00bb7eec =====

void FUN_00bb7eec(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00bb7eec(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe4) {
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


// ===== 00bb7f60  FUN_00bb7f60 =====

undefined1  [16]
FUN_00bb7f60(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  uint uVar8;
  byte *pbVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  
  pbVar9 = (byte *)*param_5;
  plVar6 = param_2 + 1;
  plVar10 = plVar6;
  if ((long *)*plVar6 != (long *)0x0) {
    bVar2 = *pbVar9;
    plVar4 = (long *)*plVar6;
    do {
      while( true ) {
        plVar5 = plVar4;
        bVar3 = *(byte *)((long)plVar5 + 0x1c);
        uVar8 = (uint)(bVar3 < bVar2);
        if (bVar2 < bVar3) {
          uVar8 = 0xffffffff;
        }
        if ((bVar2 == bVar3) &&
           (uVar8 = (uint)(*(ushort *)((long)plVar5 + 0x1e) < *(ushort *)(pbVar9 + 2)),
           *(ushort *)(pbVar9 + 2) < *(ushort *)((long)plVar5 + 0x1e))) {
          uVar8 = 0xffffffff;
        }
        plVar6 = plVar5;
        if ((uVar8 >> 7 & 1) != 0) break;
        if ((uVar8 & 0xff) == 0) {
          uVar7 = 0;
          goto LAB_00bb804c;
        }
        plVar4 = (long *)plVar5[1];
        if ((long *)plVar5[1] == (long *)0x0) {
          plVar10 = plVar5 + 1;
          goto LAB_00bb7fec;
        }
      }
      plVar4 = (long *)*plVar5;
      plVar10 = plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
  }
LAB_00bb7fec:
  plVar5 = (long *)operator_new(0x28);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar1 = *(undefined4 *)pbVar9;
  *plVar5 = 0;
  plVar5[1] = 0;
  plVar5[2] = (long)plVar6;
  *(undefined4 *)((long)plVar5 + 0x1c) = uVar1;
  *(undefined4 *)(plVar5 + 4) = 0;
  *plVar10 = (long)plVar5;
  plVar6 = plVar5;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar6 = (long *)*plVar10;
  }
  FUN_005d5b94(param_2[1],plVar6);
  uVar7 = 1;
  param_2[2] = param_2[2] + 1;
LAB_00bb804c:
  auVar11._8_8_ = uVar7;
  auVar11._0_8_ = plVar5;
  return auVar11;
}


// ===== 00bb807c  FUN_00bb807c =====

undefined8 * FUN_00bb807c(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  size_t sVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  void *__dest;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  void *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  void *pvStack_48;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar8 = param_2;
    if (param_2 == puVar2) {
      if (param_2 == (undefined8 *)0x0) {
LAB_00bb8218:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *puVar2 = *param_3;
      param_1[1] = (long)(puVar2 + 1);
    }
    else {
      uVar9 = *param_3;
      puVar3 = puVar2;
      for (puVar6 = puVar2 + -1; puVar6 < puVar2; puVar6 = puVar6 + 1) {
        if (puVar3 == (undefined8 *)0x0) goto LAB_00bb8218;
        *puVar3 = *puVar6;
        puVar3 = puVar3 + 1;
      }
      param_1[1] = (long)puVar3;
      sVar4 = (long)puVar2 + (-8 - (long)param_2);
      memmove((void *)((long)puVar2 - sVar4),param_2,sVar4);
      *param_2 = uVar9;
    }
  }
  else {
    lVar10 = *param_1;
    uVar1 = ((long)puVar2 - lVar10 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_00bb0ae0();
LAB_00bb8230:
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    uVar5 = param_1[2] - lVar10;
    local_60 = (void *)0x0;
    uVar7 = (long)uVar5 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 != 0) {
      if (uVar7 >> 0x3d != 0) goto LAB_00bb8230;
      local_60 = operator_new(uVar7 << 3);
    }
    pvStack_48 = (void *)((long)local_60 + uVar7 * 8);
    local_58 = (undefined8 *)((long)local_60 + ((long)param_2 - lVar10));
    local_50 = local_58;
    FUN_00bb8234(&local_60,param_3);
    puVar8 = local_58;
    memcpy(local_50,param_2,param_1[1] - (long)param_2);
    lVar10 = param_1[1];
    param_1[1] = (long)param_2;
    sVar4 = (long)param_2 - *param_1;
    __dest = (void *)((long)local_58 - sVar4);
    local_50 = (undefined8 *)((long)local_50 + (lVar10 - (long)param_2));
    memcpy(__dest,(void *)*param_1,sVar4);
    local_60 = (void *)*param_1;
    lVar10 = param_1[2];
    *param_1 = (long)__dest;
    param_1[2] = (long)pvStack_48;
    param_1[1] = (long)local_50;
    if (local_60 != (void *)0x0) {
      local_58 = (undefined8 *)local_60;
      local_50 = (undefined8 *)local_60;
      pvStack_48 = (void *)lVar10;
      operator_delete(local_60);
    }
  }
  return puVar8;
}


// ===== 00bb8234  FUN_00bb8234 =====

void FUN_00bb8234(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_00bb84a4;
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
LAB_00bb84a4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00bb84bc  FUN_00bb84bc =====

void FUN_00bb84bc(undefined8 *param_1)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ushort local_88 [2];
  ushort local_84 [2];
  ushort *local_80;
  ushort *puStack_78;
  ushort *local_70;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00bb86b8(&local_60);
  if (((ulong)local_50 & 1) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 5) = 0;
  }
  else {
    uVar1 = *(uint *)(local_60 + 4);
    uVar5 = (ulong)(puStack_58 + -8) >> 2;
    puStack_78 = (ushort *)&DAT_aaaaaaaaaaaaaaaa;
    local_80 = (ushort *)&DAT_aaaaaaaaaaaaaaaa;
    if (uVar5 == 0) {
      local_70 = (ushort *)0x0;
      puStack_78 = (ushort *)0x0;
      local_80 = (ushort *)0x0;
    }
    else {
      if ((undefined1 *)0x5555555555555557 < puStack_58 + -8) {
                    /* WARNING: Subroutine does not return */
        FUN_00bad440();
      }
      puStack_78 = (ushort *)operator_new(uVar5 * 0xc);
      lVar6 = 0;
      lVar7 = -8;
      local_70 = puStack_78 + uVar5 * 6;
      local_80 = puStack_78;
      do {
        if (((ulong)local_50 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                    );
        }
        if (puStack_58 < (undefined1 *)(lVar6 + 0xc)) {
                    /* WARNING: Subroutine does not return */
          FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_reader.h",0x53,
                       "FixedSize + variable_offset + SubSize <= data_.size()",&DAT_001f5fa0);
        }
        if ((puStack_58 < (undefined1 *)(lVar6 + 8)) || (puStack_58 + lVar7 < (undefined1 *)0x4)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0xbb866c);
          (*pcVar4)();
        }
        uVar2 = *(ushort *)(local_60 + lVar6 + 8);
        local_84[0] = uVar2 >> 8 | (ushort)((uVar2 & 0xff00ff) << 8);
        uVar3 = *(ushort *)(local_60 + lVar6 + 10);
        local_88[0] = uVar3 >> 8 | (ushort)((uVar3 & 0xff00ff) << 8);
        if (puStack_78 < local_70) {
          if (puStack_78 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *(undefined1 *)(puStack_78 + 2) = 0;
          *puStack_78 = uVar2 >> 8 | (ushort)((uVar2 & 0xff00ff) << 8);
          puStack_78[1] = uVar3 >> 8 | (ushort)((uVar3 & 0xff00ff) << 8);
          puStack_78[4] = 0;
          puStack_78[5] = 0;
          puStack_78 = puStack_78 + 6;
        }
        else {
          puStack_78 = (ushort *)FUN_00bb8b84(&local_80,local_84,local_88);
        }
        uVar5 = uVar5 - 1;
        lVar7 = lVar7 + -4;
        lVar6 = lVar6 + 4;
      } while (uVar5 != 0);
    }
    param_1[4] = local_70;
    uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    *param_1 = &PTR_FUN_00d47990;
    *(uint *)(param_1 + 1) = uVar1 >> 0x10 | uVar1 << 0x10;
    param_1[2] = local_80;
    param_1[3] = puStack_78;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return;
}


// ===== 00bb86b8  FUN_00bb86b8 =====

void FUN_00bb86b8(undefined8 *param_1,char *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined1 uVar3;
  
  if (param_3 < 8) {
    FUN_00bb8cbc(param_3,8);
  }
  else if (*param_2 == -0x40) {
    uVar1 = (uint)CONCAT11(param_2[2],param_2[3]);
    uVar2 = (ulong)uVar1;
    if ((uVar1 < 8) || (param_3 < uVar2)) {
      FUN_00bb8cd4(uVar2);
    }
    else if (param_3 - uVar2 < 4) {
      if ((param_2[3] & 3U) == 0) {
        uVar3 = 1;
        *param_1 = param_2;
        param_1[1] = uVar2;
        goto LAB_00bb8758;
      }
      FUN_00bb8ce4(uVar2,4);
    }
    else {
      FUN_00bb8cdc(param_3 - uVar2);
    }
  }
  else {
    FUN_00bb8cc4(*param_2,0xc0);
  }
  uVar3 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00bb8758:
  *(undefined1 *)(param_1 + 2) = uVar3;
  return;
}


// ===== 00bb8778  FUN_00bb8778 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bb8778(long param_1,long *param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  long lVar8;
  ushort *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  lVar10 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x18);
  lVar12 = lVar4 - lVar10;
  lVar8 = lVar12 >> 2;
  lVar3 = 0;
  if (lVar12 != 0) {
    lVar3 = lVar10;
  }
  uVar11 = lVar8 * -0x5555555555555555;
  lVar12 = param_2[1] - *param_2;
  uVar13 = lVar8 * -0x5555555555555554;
  uVar1 = uVar13 + 8;
  FUN_004efbd8(param_2,uVar1 + lVar12);
  puVar2 = (undefined1 *)(*param_2 + lVar12);
  *puVar2 = 0xc0;
  puVar2[2] = (char)(uVar1 >> 8);
  puVar2[3] = (char)uVar1;
  if (0xfffffffffffffff7 < uVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x3f,"data.size() >= FixedSize",
                 &DAT_001f5fa0);
  }
  lVar8 = *param_2;
  uVar5 = *(undefined4 *)(param_1 + 8);
  auVar14._4_4_ = uVar5;
  auVar14._0_4_ = uVar5;
  auVar14._8_4_ = uVar5;
  auVar14._12_4_ = uVar5;
  auVar15._8_8_ = _UNK_001f3918;
  auVar15._0_8_ = _DAT_001f3910;
  auVar15 = NEON_ushl(auVar14,auVar15,4);
  *(uint *)(lVar8 + lVar12 + 4) =
       CONCAT13(auVar15[0xc],CONCAT12(auVar15[8],CONCAT11(auVar15[4],auVar15[0])));
  if (lVar4 != lVar10) {
    uVar7 = uVar11 & 0x3fffffffffffffff;
    lVar10 = lVar12 + lVar8 + 0xb;
    uVar13 = 8;
    puVar9 = (ushort *)(lVar3 + 2);
    do {
      if (uVar1 < uVar13 + 4) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x58,
                     "FixedSize + variable_offset + SubSize <= data_.size()",&DAT_001f5fa0);
      }
      if ((uVar1 < uVar13) || (uVar7 == 0)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0xbb88b0);
        (*pcVar6)();
      }
      uVar13 = uVar13 + 4;
      uVar11 = uVar11 - 1;
      uVar7 = uVar7 - 1;
      *(ushort *)(lVar10 + -3) = puVar9[-1] >> 8 | (ushort)((puVar9[-1] & 0xff00ff) << 8);
      *(ushort *)(lVar10 + -1) = *puVar9 >> 8 | (ushort)((*puVar9 & 0xff00ff) << 8);
      lVar10 = lVar10 + 4;
      puVar9 = puVar9 + 6;
    } while (uVar11 != 0);
  }
  return;
}


// ===== 00bb88f0  FUN_00bb88f0 =====

void FUN_00bb88f0(undefined8 *param_1,long param_2)

{
  undefined2 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 ***pppuVar4;
  undefined2 *puVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 **local_58;
  ulong uStack_50;
  ulong local_48;
  
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  FUN_00547cac(&local_70,"FORWARD-TSN, new_cumulative_tsn=",0x20);
  local_58 = (undefined8 ***)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_005fa03c(&local_58,0x16,*(undefined4 *)(param_2 + 8));
  uVar2 = uStack_50;
  pppuVar4 = (undefined8 ***)local_58;
  if (-1 < (long)local_48) {
    uVar2 = local_48 >> 0x38;
    pppuVar4 = &local_58;
  }
  FUN_00547cac(&local_70,pppuVar4,uVar2);
  if ((long)local_48 < 0) {
    operator_delete(local_58);
  }
  puVar5 = *(undefined2 **)(param_2 + 0x10);
  lVar3 = *(long *)(param_2 + 0x18) - (long)puVar5;
  if (lVar3 != 0) {
    puVar1 = (undefined2 *)((long)puVar5 + lVar3);
    do {
      FUN_00547cac(&local_70,", skip ",7);
      local_58 = (undefined8 ***)0x0;
      uStack_50 = 0;
      local_48 = 0;
      FUN_005f55c4(&local_58,0x16,*puVar5);
      uVar2 = uStack_50;
      pppuVar4 = (undefined8 ***)local_58;
      if (-1 < (long)local_48) {
        uVar2 = local_48 >> 0x38;
        pppuVar4 = &local_58;
      }
      FUN_00547cac(&local_70,pppuVar4,uVar2);
      if ((long)local_48 < 0) {
        operator_delete(local_58);
      }
      FUN_00547cac(&local_70,&DAT_001ca603,1);
      local_58 = (undefined8 ***)0x0;
      uStack_50 = 0;
      local_48 = 0;
      FUN_005f55c4(&local_58,0x16,puVar5[1]);
      uVar2 = uStack_50;
      pppuVar4 = (undefined8 ***)local_58;
      if (-1 < (long)local_48) {
        uVar2 = local_48 >> 0x38;
        pppuVar4 = &local_58;
      }
      FUN_00547cac(&local_70,pppuVar4,uVar2);
      if ((long)local_48 < 0) {
        operator_delete(local_58);
      }
      puVar5 = puVar5 + 6;
    } while (puVar5 != puVar1);
  }
  param_1[1] = uStack_68;
  *param_1 = local_70;
  param_1[2] = local_60;
  return;
}


// ===== 00bb8aac  FUN_00bb8aac =====

void FUN_00bb8aac(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR_FUN_00d47598;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[3];
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x1555555555555555) >> 2;
    uVar4 = (long)pvVar2 * -0x1555555555555555 - 4U >> 2;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 3U) == 0)) {
      uVar3 = uVar3 & 0x3ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -0xc);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -0xc);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[3] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00bb8b84  FUN_00bb8b84 =====

undefined2 * FUN_00bb8b84(long *param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  void *pvVar3;
  void *pvVar4;
  size_t __n;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  void *__dest;
  undefined2 *puVar8;
  
  puVar8 = (undefined2 *)(param_1[1] - *param_1);
  uVar5 = ((long)puVar8 >> 2) * -0x5555555555555555 + 1;
  if (0x1555555555555555 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00bad440();
  }
  lVar6 = param_1[2] - *param_1 >> 2;
  uVar7 = lVar6 * 0x5555555555555556;
  if (uVar7 < uVar5 || uVar7 - uVar5 == 0) {
    uVar7 = uVar5;
  }
  if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
    uVar7 = 0x1555555555555555;
  }
  if (uVar7 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (0x1555555555555555 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar3 = operator_new(uVar7 * 0xc);
    puVar8 = (undefined2 *)((long)pvVar3 + (long)puVar8);
  }
  if (puVar8 != (undefined2 *)0x0) {
    uVar1 = *param_2;
    uVar2 = *param_3;
    *(undefined1 *)(puVar8 + 2) = 0;
    *puVar8 = uVar1;
    puVar8[1] = uVar2;
    *(undefined4 *)(puVar8 + 4) = 0;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar8 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar4 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar8 + 6);
    param_1[2] = (long)((long)pvVar3 + uVar7 * 0xc);
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
    return puVar8 + 6;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00bb8cbc  FUN_00bb8cbc =====

void FUN_00bb8cbc(void)

{
  return;
}


// ===== 00bb8cc4  FUN_00bb8cc4 =====

void FUN_00bb8cc4(void)

{
  return;
}


// ===== 00bb8ccc  FUN_00bb8ccc =====

void FUN_00bb8ccc(void)

{
  return;
}


// ===== 00bb8cd4  FUN_00bb8cd4 =====

void FUN_00bb8cd4(void)

{
  return;
}


// ===== 00bb8cdc  FUN_00bb8cdc =====

void FUN_00bb8cdc(void)

{
  return;
}


// ===== 00bb8ce4  FUN_00bb8ce4 =====

void FUN_00bb8ce4(void)

{
  return;
}


// ===== 00bb8cec  FUN_00bb8cec =====

void FUN_00bb8cec(undefined8 *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  uint local_9c;
  byte local_98 [4];
  ushort local_94 [2];
  ushort *local_90;
  ushort *puStack_88;
  ushort *local_80;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00bb8f00(&local_70);
  if (((ulong)local_60 & 1) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 5) = 0;
  }
  else {
    uVar2 = *(uint *)(local_70 + 4);
    uVar7 = (ulong)(puStack_68 + -8) >> 3;
    puStack_88 = (ushort *)&DAT_aaaaaaaaaaaaaaaa;
    local_90 = (ushort *)&DAT_aaaaaaaaaaaaaaaa;
    if (uVar7 == 0) {
      local_80 = (ushort *)0x0;
      puStack_88 = (ushort *)0x0;
      local_90 = (ushort *)0x0;
    }
    else {
      if ((undefined1 *)0xaaaaaaaaaaaaaaaf < puStack_68 + -8) {
                    /* WARNING: Subroutine does not return */
        FUN_00bad440();
      }
      puStack_88 = (ushort *)operator_new(uVar7 * 0xc);
      local_80 = puStack_88 + uVar7 * 6;
      lVar6 = -8;
      puVar8 = (undefined1 *)0x10;
      local_90 = puStack_88;
      do {
        if (((ulong)local_60 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                    );
        }
        if (puStack_68 < puVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_reader.h",0x53,
                       "FixedSize + variable_offset + SubSize <= data_.size()",&DAT_001f5fa0);
        }
        if ((puStack_68 < puVar8 + -8) || (puStack_68 + lVar6 < (undefined1 *)0x8)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0xbb8eb4);
          (*pcVar5)();
        }
        puVar1 = local_70 + (long)puVar8;
        uVar3 = *(ushort *)(puVar1 + -8);
        local_94[0] = uVar3 >> 8 | (ushort)((uVar3 & 0xff00ff) << 8);
        local_98[0] = puVar1[-5] & 1;
        uVar4 = (*(uint *)(puVar1 + -4) & 0xff00ff00) >> 8 |
                (*(uint *)(puVar1 + -4) & 0xff00ff) << 8;
        local_9c = uVar4 >> 0x10 | uVar4 << 0x10;
        if (puStack_88 < local_80) {
          if (puStack_88 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puStack_88[1] = 0;
          *puStack_88 = uVar3 >> 8 | (ushort)((uVar3 & 0xff00ff) << 8);
          *(byte *)(puStack_88 + 2) = local_98[0];
          *(uint *)(puStack_88 + 4) = local_9c;
          puStack_88 = puStack_88 + 6;
        }
        else {
          puStack_88 = (ushort *)FUN_00bb92cc(&local_90,local_98,local_94,&local_9c);
        }
        uVar7 = uVar7 - 1;
        puVar8 = puVar8 + 8;
        lVar6 = lVar6 + -8;
      } while (uVar7 != 0);
    }
    param_1[4] = local_80;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    *param_1 = &PTR_FUN_00d479c0;
    *(uint *)(param_1 + 1) = uVar2 >> 0x10 | uVar2 << 0x10;
    param_1[2] = local_90;
    param_1[3] = puStack_88;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return;
}


// ===== 00bb8f00  FUN_00bb8f00 =====

void FUN_00bb8f00(undefined8 *param_1,char *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined1 uVar3;
  
  if (param_3 < 8) {
    FUN_00bb8cbc(param_3,8);
  }
  else if (*param_2 == -0x3e) {
    uVar1 = (uint)CONCAT11(param_2[2],param_2[3]);
    uVar2 = (ulong)uVar1;
    if ((uVar1 < 8) || (param_3 < uVar2)) {
      FUN_00bb8cd4(uVar2);
    }
    else if (param_3 - uVar2 < 4) {
      if ((param_2[3] & 7U) == 0) {
        uVar3 = 1;
        *param_1 = param_2;
        param_1[1] = uVar2;
        goto LAB_00bb8fa0;
      }
      FUN_00bb8ce4(uVar2,8);
    }
    else {
      FUN_00bb8cdc(param_3 - uVar2);
    }
  }
  else {
    FUN_00bb8cc4(*param_2,0xc2);
  }
  uVar3 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00bb8fa0:
  *(undefined1 *)(param_1 + 2) = uVar3;
  return;
}


// ===== 00bb8fc0  FUN_00bb8fc0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bb8fc0(long param_1,long *param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  code *pcVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x18);
  lVar9 = lVar5 - lVar4;
  lVar10 = lVar9 >> 2;
  lVar3 = 0;
  if (lVar9 != 0) {
    lVar3 = lVar4;
  }
  lVar13 = lVar10 * -0x5555555555555555;
  lVar14 = param_2[1] - *param_2;
  uVar1 = lVar10 * 0x5555555555555558 + 8;
  FUN_004efbd8(param_2,uVar1 + lVar14);
  puVar2 = (undefined1 *)(*param_2 + lVar14);
  *puVar2 = 0xc2;
  puVar2[2] = (char)(uVar1 >> 8);
  puVar2[3] = (char)uVar1;
  if (lVar9 == -0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x3f,"data.size() >= FixedSize",
                 &DAT_001f5fa0);
  }
  uVar6 = *(undefined4 *)(param_1 + 8);
  auVar15._4_4_ = uVar6;
  auVar15._0_4_ = uVar6;
  auVar15._8_4_ = uVar6;
  auVar15._12_4_ = uVar6;
  auVar7._8_8_ = _UNK_001f3918;
  auVar7._0_8_ = _DAT_001f3910;
  auVar16._8_8_ = _UNK_001f3918;
  auVar16._0_8_ = _DAT_001f3910;
  lVar9 = *param_2;
  auVar16 = NEON_ushl(auVar15,auVar16,4);
  *(uint *)(lVar9 + lVar14 + 4) =
       CONCAT13(auVar16[0xc],CONCAT12(auVar16[8],CONCAT11(auVar16[4],auVar16[0])));
  if (lVar5 != lVar4) {
    puVar11 = (undefined4 *)(lVar3 + 8);
    uVar12 = 0x10;
    do {
      if (uVar1 < uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x58,
                     "FixedSize + variable_offset + SubSize <= data_.size()",&DAT_001f5fa0);
      }
      if ((uVar1 < uVar12 - 8) || (lVar10 * -0x5555555555555558 + uVar12 == 0x10)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0xbb9104);
        (*pcVar8)();
      }
      lVar3 = lVar9 + lVar14 + uVar12;
      lVar13 = lVar13 + -1;
      uVar12 = uVar12 + 8;
      *(ushort *)(lVar3 + -8) =
           *(ushort *)(puVar11 + -2) >> 8 | (ushort)((*(ushort *)(puVar11 + -2) & 0xff00ff) << 8);
      *(undefined1 *)(lVar3 + -5) = *(undefined1 *)(puVar11 + -1);
      uVar6 = *puVar11;
      auVar17._4_4_ = uVar6;
      auVar17._0_4_ = uVar6;
      auVar17._8_4_ = uVar6;
      auVar17._12_4_ = uVar6;
      puVar11 = puVar11 + 3;
      auVar16 = NEON_ushl(auVar17,auVar7,4);
      *(uint *)(lVar3 + -4) =
           CONCAT13(auVar16[0xc],CONCAT12(auVar16[8],CONCAT11(auVar16[4],auVar16[0])));
    } while (lVar13 != 0);
  }
  return;
}


// ===== 00bb9144  FUN_00bb9144 =====

void FUN_00bb9144(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 **local_38;
  ulong uStack_30;
  ulong local_28;
  
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  FUN_00547cac(&local_50,"I-FORWARD-TSN, new_cumulative_tsn=",0x22);
  local_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_005fa03c(&local_38,0x16,*(undefined4 *)(param_2 + 8));
  uVar1 = uStack_30;
  pppuVar2 = (undefined8 ***)local_38;
  if (-1 < (long)local_28) {
    uVar1 = local_28 >> 0x38;
    pppuVar2 = &local_38;
  }
  FUN_00547cac(&local_50,pppuVar2,uVar1);
  if ((long)local_28 < 0) {
    operator_delete(local_38);
  }
  param_1[1] = uStack_48;
  *param_1 = local_50;
  param_1[2] = local_40;
  return;
}


// ===== 00bb91f4  FUN_00bb91f4 =====

void FUN_00bb91f4(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR_FUN_00d47598;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[3];
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x1555555555555555) >> 2;
    uVar4 = (long)pvVar2 * -0x1555555555555555 - 4U >> 2;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 3U) == 0)) {
      uVar3 = uVar3 & 0x3ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -0xc);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -0xc);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[3] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00bb92cc  FUN_00bb92cc =====

undefined2 * FUN_00bb92cc(long *param_1,undefined1 *param_2,undefined2 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  void *pvVar4;
  void *pvVar5;
  size_t __n;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  void *__dest;
  undefined2 *puVar9;
  
  puVar9 = (undefined2 *)(param_1[1] - *param_1);
  uVar6 = ((long)puVar9 >> 2) * -0x5555555555555555 + 1;
  if (0x1555555555555555 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00bad440();
  }
  lVar7 = param_1[2] - *param_1 >> 2;
  uVar8 = lVar7 * 0x5555555555555556;
  if (uVar8 < uVar6 || uVar8 - uVar6 == 0) {
    uVar8 = uVar6;
  }
  if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
    uVar8 = 0x1555555555555555;
  }
  if (uVar8 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x1555555555555555 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar4 = operator_new(uVar8 * 0xc);
    puVar9 = (undefined2 *)((long)pvVar4 + (long)puVar9);
  }
  if (puVar9 != (undefined2 *)0x0) {
    uVar3 = *param_3;
    uVar2 = *param_2;
    uVar1 = *param_4;
    puVar9[1] = 0;
    *puVar9 = uVar3;
    *(undefined1 *)(puVar9 + 2) = uVar2;
    *(undefined4 *)(puVar9 + 4) = uVar1;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar9 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar5 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar9 + 6);
    param_1[2] = (long)((long)pvVar4 + uVar8 * 0xc);
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
    }
    return puVar9 + 6;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00bb940c  FUN_00bb940c =====

void FUN_00bb940c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 *local_a8 [2];
  code *local_98;
  undefined **local_90;
  undefined8 *local_88 [2];
  code *local_78;
  undefined **local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_5;
  param_1[3] = param_6;
  local_78 = FUN_00bb9f90;
  local_70 = &PTR_FUN_00d479e0;
  lVar6 = 0x7fffffffffffffff;
  if (*(int *)(param_4 + 0x74) != 0x7fffffff) {
    lVar6 = (long)*(int *)(param_4 + 0x74) * 1000;
  }
  param_1[4] = lVar6;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_4 + 0xb6);
  local_88[0] = (undefined8 *)operator_new(0x18);
  local_88[0][2] = param_1;
  *local_88[0] = FUN_00bb963c;
  local_88[0][1] = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_b8 = 0x7fffffffffffffff;
  local_b0 = 0;
  local_d0 = lVar6;
  uVar4 = FUN_00ba434c(param_6,"heartbeat-interval",0x12,local_88,&local_d0);
  param_1[6] = uVar4;
  if ((code *)local_70[1] != (code *)0x0) {
    (*(code *)local_70[1])(local_88[0]);
  }
  uVar4 = param_1[3];
  local_98 = FUN_00bb9f90;
  local_90 = &PTR_FUN_00d479e0;
  local_a8[0] = (undefined8 *)operator_new(0x18);
  iVar2 = *(int *)(param_4 + 0x54);
  *local_a8[0] = FUN_00bb9974;
  local_a8[0][1] = 0;
  local_a8[0][2] = param_1;
  local_c8 = 1;
  local_d0 = 0x7fffffffffffffff;
  if (iVar2 != 0x7fffffff) {
    local_d0 = (long)iVar2 * 1000;
  }
  local_c4 = 0x100000000;
  local_b8 = 0x7fffffffffffffff;
  local_b0 = 0;
  uVar4 = FUN_00ba434c(uVar4,"heartbeat-timeout",0x11,local_a8,&local_d0);
  param_1[7] = uVar4;
  if ((code *)local_90[1] != (code *)0x0) {
    (*(code *)local_90[1])(local_a8[0]);
  }
  lVar6 = param_1[4];
  if (lVar6 != 0) {
    lVar8 = param_1[6];
    if (*(char *)(param_1 + 5) == '\x01') {
      lVar5 = (**(code **)(*(long *)param_1[2] + 0x38))();
      lVar7 = param_1[4];
      lVar6 = 86400000000;
      if ((lVar7 != 0x7fffffffffffffff) && (lVar5 != 0x7fffffffffffffff)) {
        lVar1 = lVar7 + lVar5;
        if (86399999999 < lVar7 + lVar5) {
          lVar1 = lVar6;
        }
        lVar6 = -0x8000000000000000;
        if (lVar5 != -0x8000000000000000 && lVar7 != -0x8000000000000000) {
          lVar6 = lVar1;
        }
      }
    }
    else if (86399999999 < lVar6) {
      lVar6 = 86400000000;
    }
    *(long *)(lVar8 + 0x90) = lVar6;
    FUN_00ba3f30(param_1[6]);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00bb963c  FUN_00bb963c =====

undefined8 FUN_00bb963c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *local_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined **local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined8 local_48;
  
  uVar5 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  if ((uVar5 & 1) != 0) {
    plVar6 = (long *)(**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
    local_48 = (**(code **)(*plVar6 + 0x38))();
    lVar12 = *(long *)(param_1 + 0x38);
    lVar7 = (**(code **)(**(long **)(param_1 + 0x10) + 0x38))(*(long **)(param_1 + 0x10));
    if (86399999999 < lVar7) {
      lVar7 = 86400000000;
    }
    *(long *)(lVar12 + 0x90) = lVar7;
    FUN_00ba3f30(*(undefined8 *)(param_1 + 0x38));
    local_a8 = (undefined *)0x0;
    local_a0 = (undefined *)0x0;
    puStack_98 = (undefined *)0x0;
    FUN_00bb9d1c(&local_60,&local_48);
    puVar9 = local_58;
    puVar4 = local_60;
    local_78 = (undefined1 *)0x0;
    local_70 = (undefined1 *)0x0;
    uVar5 = (long)local_58 - (long)local_60;
    local_88 = &PTR_FUN_00d47a10;
    local_80 = (undefined1 *)0x0;
    puVar8 = local_78;
    if (uVar5 != 0) {
      if ((long)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d34c0();
      }
      local_80 = (undefined1 *)operator_new(uVar5);
      puVar15 = puVar4 + (long)puVar9 + ~((long)puVar4 << 1);
      local_70 = local_80 + uVar5;
      puVar9 = puVar15;
      if ((undefined1 *)-(long)local_80 < puVar15) {
        puVar9 = (undefined1 *)-(long)local_80;
      }
      puVar9 = puVar9 + 1;
      puVar8 = local_80;
      puVar14 = puVar4;
      if ((undefined1 *)0x20 < puVar9) {
        if ((undefined1 *)-(long)local_80 < puVar15) {
          puVar15 = (undefined1 *)-(long)local_80;
        }
        if (((local_80 <= local_80 + (long)puVar15) && (puVar4 <= puVar4 + (long)puVar15)) &&
           (0x1f < (ulong)((long)local_80 - (long)puVar4))) {
          puVar10 = (undefined8 *)(local_80 + 0x10);
          uVar2 = 0x20;
          if (((ulong)puVar9 & 0x1f) != 0) {
            uVar2 = (ulong)puVar9 & 0x1f;
          }
          puVar11 = (undefined8 *)(puVar4 + 0x10);
          lVar7 = (long)puVar9 - uVar2;
          puVar14 = puVar4 + lVar7;
          puVar8 = local_80 + lVar7;
          do {
            puVar3 = puVar11 + -1;
            uVar13 = puVar11[-2];
            uVar19 = puVar11[1];
            uVar18 = *puVar11;
            lVar7 = lVar7 + -0x20;
            puVar11 = puVar11 + 4;
            puVar10[-1] = *puVar3;
            puVar10[-2] = uVar13;
            puVar10[1] = uVar19;
            *puVar10 = uVar18;
            puVar10 = puVar10 + 4;
          } while (lVar7 != 0);
        }
      }
      puVar9 = puVar8;
      do {
        if (puVar9 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar15 = puVar14 + 1;
        puVar8 = puVar8 + 1;
        *puVar9 = *puVar14;
        puVar9 = puVar9 + 1;
        puVar14 = puVar15;
      } while (puVar15 != puVar4 + uVar5);
    }
    local_78 = puVar8;
    puVar10 = (undefined8 *)FUN_00bba458(&local_a8,&local_88);
    puVar17 = (undefined *)puVar10[1];
    puVar16 = (undefined *)*puVar10;
    *puVar10 = 0;
    puVar10[1] = 0;
    uVar13 = puVar10[2];
    puVar10[2] = 0;
    local_88 = &PTR_FUN_00d47a10;
    if (local_80 != (undefined1 *)0x0) {
      if (local_78 + -1 < local_78 + -(long)local_80) goto LAB_00bb995c;
      local_78 = local_80;
      operator_delete(local_80);
    }
    if (local_60 != (undefined1 *)0x0) {
      if (local_58 + -1 < local_58 + -(long)local_60) goto LAB_00bb995c;
      local_58 = local_60;
      operator_delete(local_60);
    }
    if (local_a8 != (undefined *)0x0) {
      if (local_a0 + -1 < local_a0 + -(long)local_a8) goto LAB_00bb995c;
      local_a0 = local_a8;
      operator_delete(local_a8);
    }
    plVar6 = *(long **)(param_1 + 0x10);
    (**(code **)(*plVar6 + 0x58))(&local_88,plVar6);
    puVar1 = PTR_DAT_00d52dd8 + 0x10;
    local_a8 = puVar1;
    local_a0 = puVar16;
    puStack_98 = puVar17;
    local_90 = uVar13;
    uVar13 = FUN_00ba4854(&local_88,&local_a8);
    (**(code **)(*plVar6 + 0x60))(plVar6,uVar13);
    local_a8 = puVar1;
    if (local_a0 != (undefined *)0x0) {
      if (puStack_98 + -1 < puStack_98 + -(long)local_a0) goto LAB_00bb995c;
      puStack_98 = local_a0;
      operator_delete(local_a0);
    }
    if (local_78 != (undefined1 *)0x0) {
      if (local_70 + -1 < local_70 + -(long)local_78) {
LAB_00bb995c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      local_70 = local_78;
      operator_delete(local_78);
    }
  }
  return 0;
}


// ===== 00bb9974  FUN_00bb9974 =====

undefined8 FUN_00bb9974(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 0x40))
            (*(long **)(param_1 + 0x10),"HEARTBEAT timeout",0x11);
  return 0;
}


// ===== 00bb99ac  FUN_00bb99ac =====

void FUN_00bb99ac(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar5 = *(long *)(param_1 + 0x30);
    if (*(char *)(param_1 + 0x28) == '\x01') {
      lVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x38))();
      lVar4 = *(long *)(param_1 + 0x20);
      lVar3 = 86400000000;
      if ((lVar4 != 0x7fffffffffffffff) && (lVar2 != 0x7fffffffffffffff)) {
        lVar1 = lVar4 + lVar2;
        if (86399999999 < lVar4 + lVar2) {
          lVar1 = lVar3;
        }
        lVar3 = -0x8000000000000000;
        if (lVar2 != -0x8000000000000000 && lVar4 != -0x8000000000000000) {
          lVar3 = lVar1;
        }
      }
    }
    else if (86399999999 < lVar3) {
      lVar3 = 86400000000;
    }
    *(long *)(lVar5 + 0x90) = lVar3;
    FUN_00ba3f30(*(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}


// ===== 00bb9a60  FUN_00bb9a60 =====

void FUN_00bb9a60(long param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined **local_68;
  void *local_60;
  void *pvStack_58;
  undefined8 local_50;
  undefined1 auStack_48 [16];
  void *local_38;
  void *local_30;
  
  plVar2 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar2 + 0x58))(auStack_48,plVar2);
  local_50 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  pvStack_58 = *(void **)(param_2 + 0x10);
  local_60 = *(void **)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  local_68 = &PTR_FUN_00d47a70;
  uVar1 = FUN_00ba4854(auStack_48,&local_68);
  (**(code **)(*plVar2 + 0x60))(plVar2,uVar1);
  local_68 = &PTR_FUN_00d47a70;
  if (local_60 != (void *)0x0) {
    if ((long)pvStack_58 - 1U < (ulong)((long)pvStack_58 - (long)local_60)) goto LAB_00bb9b48;
    pvStack_58 = local_60;
    operator_delete(local_60);
  }
  if (local_38 != (void *)0x0) {
    if ((long)local_30 - 1U < (ulong)((long)local_30 - (long)local_38)) {
LAB_00bb9b48:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    local_30 = local_38;
    operator_delete(local_38);
  }
  return;
}


// ===== 00bb9b5c  FUN_00bb9b5c =====

void FUN_00bb9b5c(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined **local_50;
  ulong *puStack_48;
  ulong *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x38));
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
  local_50 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00bb9e68(&local_50,param_2 + 8);
  if (((ulong)local_30 & 1) == 0) {
    plVar2 = (long *)(**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
    lVar6 = *plVar2;
    pcVar3 = "Failed to parse HEARTBEAT-ACK; No Heartbeat Info parameter";
    uVar4 = 0x3a;
  }
  else {
    lVar6 = (long)local_40 - (long)puStack_48;
    if (lVar6 == 8) {
      uVar5 = (*puStack_48 & 0xff00ff00ff00ff00) >> 8 | (*puStack_48 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      lVar7 = uVar5 * 1000;
      plVar2 = (long *)(**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
      lVar6 = (**(code **)(*plVar2 + 0x38))();
      if ((0 < lVar7) && (lVar1 = lVar6 + uVar5 * -1000, lVar1 < 0 == SBORROW8(lVar6,lVar7))) {
        if (lVar6 != 0x7fffffffffffffff) {
          lVar6 = lVar1;
        }
        (**(code **)(**(long **)(param_1 + 0x10) + 0x30))(*(long **)(param_1 + 0x10),lVar6);
      }
      (**(code **)(**(long **)(param_1 + 0x10) + 0x48))();
      goto joined_r0x00bb9cb4;
    }
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6d4b,"../../net/dcsctp/socket/heartbeat_handler.cc",0x23a,
                   "Invalid heartbeat info: ",lVar6," bytes");
    }
    plVar2 = (long *)(**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
    lVar6 = *plVar2;
    pcVar3 = "Failed to parse HEARTBEAT-ACK; Failed to deserialized Heartbeat info parameter";
    uVar4 = 0x4e;
  }
  (**(code **)(lVar6 + 0x60))(plVar2,3,pcVar3,uVar4);
joined_r0x00bb9cb4:
  if ((((ulong)local_30 & 1) != 0) && (local_50 = &PTR_FUN_00d47a10, puStack_48 != (ulong *)0x0)) {
    if ((undefined1 *)((long)local_40 + -1) < (undefined1 *)((long)local_40 + -(long)puStack_48)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    local_40 = puStack_48;
    operator_delete(puStack_48);
  }
  return;
}


// ===== 00bb9d1c  FUN_00bb9d1c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bb9d1c(undefined8 *param_1,ulong *param_2)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  uVar3 = *param_2;
  uVar4 = uVar3 / 1000;
  if (499 < uVar3 % 1000) {
    uVar4 = uVar4 + 1;
  }
  if ((uVar3 & 0x8000000000000000) != 0) {
    uVar4 = -(-uVar3 / 1000) - (ulong)(500 < -uVar3 % 1000);
  }
  puVar2 = (undefined8 *)operator_new(8);
  *param_1 = puVar2;
  param_1[2] = puVar2 + 1;
  if (((((puVar2 != (undefined8 *)0x0) &&
        (*(undefined1 *)puVar2 = 0, puVar2 != (undefined8 *)0xffffffffffffffff)) &&
       (*(undefined1 *)((long)puVar2 + 1) = 0, puVar2 != (undefined8 *)0xfffffffffffffffe)) &&
      ((*(undefined1 *)((long)puVar2 + 2) = 0, puVar2 != (undefined8 *)0xfffffffffffffffd &&
       (*(undefined1 *)((long)puVar2 + 3) = 0, puVar2 != (undefined8 *)0xfffffffffffffffc)))) &&
     ((*(undefined1 *)((long)puVar2 + 4) = 0, puVar2 != (undefined8 *)0xfffffffffffffffb &&
      ((*(undefined1 *)((long)puVar2 + 5) = 0, puVar2 != (undefined8 *)0xfffffffffffffffa &&
       (*(undefined1 *)((long)puVar2 + 6) = 0, auVar9 = _DAT_001f3400, auVar1 = _DAT_001f2dd0,
       auVar6 = _DAT_001f2dc0, puVar2 != (undefined8 *)0xfffffffffffffff9)))))) {
    auVar5._8_8_ = uVar4;
    auVar5._0_8_ = uVar4;
    auVar7 = NEON_ushl(auVar5,_DAT_001f47c0,8);
    param_1[1] = puVar2 + 1;
    auVar8 = NEON_ushl(auVar5,auVar6,8);
    auVar9 = NEON_ushl(auVar5,auVar9,8);
    auVar6 = NEON_ushl(auVar5,auVar1,8);
    *puVar2 = CONCAT17(auVar9[8],
                       CONCAT16(auVar9[0],
                                CONCAT15(auVar6[8],
                                         CONCAT14(auVar6[0],
                                                  CONCAT13(auVar7[8],
                                                           CONCAT12(auVar7[0],
                                                                    CONCAT11(auVar8[8],auVar8[0]))))
                                        )));
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00bb9e68  FUN_00bb9e68 =====

void FUN_00bb9e68(undefined1 *param_1)

{
  short *psVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  short *local_38;
  short *local_30;
  
  FUN_00bba4b8(&local_38);
  psVar1 = local_38;
  do {
    if (psVar1 == local_30) {
      bVar2 = true;
joined_r0x00bb9eec:
      if (local_38 != (short *)0x0) {
        uVar3 = (ulong)(((long)local_38 - (long)local_30) * 0x1555555555555555) >> 3;
        uVar4 = (long)local_30 * -0x1555555555555555 - 8U >> 3;
        if (uVar4 <= uVar3) {
          uVar3 = uVar4;
        }
        if ((1 < uVar3) && ((((int)local_38 - (int)local_30 | -(int)local_30) & 7U) == 0)) {
          uVar3 = uVar3 & 0x1ffffffffffffffe;
          local_30 = local_30 + uVar3 * -0xc;
          do {
            uVar3 = uVar3 - 2;
          } while (uVar3 != 0);
        }
        while (local_30 != local_38) {
          local_30 = local_30 + -0xc;
          if (local_30 == (short *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        operator_delete(local_38);
      }
      if (bVar2) {
        *param_1 = 0;
        param_1[0x20] = 0;
      }
      return;
    }
    if (*psVar1 == 1) {
      FUN_00bba004(param_1,*(undefined8 *)(psVar1 + 4),*(undefined8 *)(psVar1 + 8));
      bVar2 = false;
      goto joined_r0x00bb9eec;
    }
    psVar1 = psVar1 + 0xc;
  } while( true );
}


// ===== 00bb9f90  FUN_00bb9f90 =====

void FUN_00bb9f90(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1 = (long *)*param_1;
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  if ((param_1[1] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(param_1[2] + (param_1[1] >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x00bb9fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ===== 00bb9fb4  FUN_00bb9fb4 =====

void FUN_00bb9fb4(undefined8 *param_1)

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


// ===== 00bb9ff0  FUN_00bb9ff0 =====

void FUN_00bb9ff0(void *param_1)

{
  if (param_1 != (void *)0x0) {
    operator_delete(param_1);
    return;
  }
  return;
}


// ===== 00bba004  FUN_00bba004 =====

void FUN_00bba004(undefined8 *param_1,ushort *param_2,ulong param_3)

{
  ushort *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if (param_3 < 4) {
    FUN_00bb8cbc(param_3,4);
  }
  else {
    uVar4 = (uint)(*param_2 >> 8) | (*param_2 & 0xff00ff) << 8;
    if (uVar4 == 1) {
      uVar4 = (uint)(param_2[1] >> 8) | (param_2[1] & 0xff00ff) << 8;
      uVar14 = (ulong)uVar4;
      if ((uVar4 < 4) || (param_3 < uVar14)) {
        FUN_00bb8cd4(uVar14);
      }
      else {
        if (param_3 - uVar14 < 4) {
          uVar5 = uVar14 - 4;
          puVar1 = param_2 + 2;
          if (uVar5 == 0) {
            puVar6 = (undefined1 *)0x0;
            lVar13 = 0;
            puVar7 = (undefined1 *)0x0;
          }
          else {
            if ((long)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_005d34c0();
            }
            puVar6 = (undefined1 *)operator_new(uVar5);
            uVar14 = uVar14 - 5;
            puVar7 = puVar6 + uVar5;
            uVar3 = uVar14;
            if ((ulong)-(long)puVar6 < uVar14) {
              uVar3 = -(long)puVar6;
            }
            uVar2 = uVar3 + 1;
            puVar9 = puVar1;
            puVar11 = puVar6;
            if (0x20 < uVar2) {
              if ((ulong)-(long)puVar6 < uVar14) {
                uVar14 = -(long)puVar6;
              }
              if (((puVar6 <= puVar6 + uVar14) && (puVar1 <= (ushort *)((long)puVar1 + uVar14))) &&
                 (0x1f < (ulong)((long)puVar6 - (long)puVar1))) {
                uVar14 = 0x20;
                if ((uVar2 & 0x1f) != 0) {
                  uVar14 = uVar2 & 0x1f;
                }
                lVar13 = ~uVar3 + uVar14;
                puVar12 = (undefined8 *)(puVar6 + 0x10);
                puVar9 = (ushort *)((long)puVar1 + (uVar2 - uVar14));
                puVar11 = puVar6 + (uVar2 - uVar14);
                param_2 = param_2 + 10;
                do {
                  puVar10 = param_2 + -4;
                  uVar15 = *(undefined8 *)(param_2 + -8);
                  uVar17 = *(undefined8 *)(param_2 + 4);
                  uVar16 = *(undefined8 *)param_2;
                  lVar13 = lVar13 + 0x20;
                  param_2 = param_2 + 0x10;
                  puVar12[-1] = *(undefined8 *)puVar10;
                  puVar12[-2] = uVar15;
                  puVar12[1] = uVar17;
                  *puVar12 = uVar16;
                  puVar12 = puVar12 + 4;
                } while (lVar13 != 0);
              }
            }
            lVar13 = (long)puVar6 - (long)puVar11;
            do {
              if (puVar11 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                          );
              }
              puVar10 = (ushort *)((long)puVar9 + 1);
              lVar13 = lVar13 + -1;
              *puVar11 = (char)*puVar9;
              puVar9 = puVar10;
              puVar11 = puVar11 + 1;
            } while (puVar10 != (ushort *)((long)puVar1 + uVar5));
            lVar13 = (long)puVar6 - lVar13;
          }
          param_1[2] = lVar13;
          param_1[3] = puVar7;
          uVar8 = 1;
          *param_1 = &PTR_FUN_00d47a10;
          param_1[1] = puVar6;
          goto LAB_00bba090;
        }
        FUN_00bb8cdc(param_3 - uVar14);
      }
    }
    else {
      FUN_00bb8cc4(uVar4,1);
    }
  }
  uVar8 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00bba090:
  *(undefined1 *)(param_1 + 4) = uVar8;
  return;
}


// ===== 00bba1d4  FUN_00bba1d4 =====

void FUN_00bba1d4(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d47a10;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if ((ulong)(param_1[2] - (long)pvVar1) <= param_1[2] - 1) {
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00bba238  FUN_00bba238 =====

void FUN_00bba238(long param_1,long *param_2)

{
  long lVar1;
  undefined2 *puVar2;
  void *__src;
  ulong uVar3;
  long lVar4;
  size_t __n;
  
  __n = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  lVar4 = param_2[1] - *param_2;
  lVar1 = __n + 4;
  FUN_004efbd8(param_2,lVar4 + lVar1);
  puVar2 = (undefined2 *)(*param_2 + lVar4);
  *puVar2 = 0x100;
  *(char *)(puVar2 + 1) = (char)((ulong)lVar1 >> 8);
  *(char *)((long)puVar2 + 3) = (char)lVar1;
  if (0xfffffffffffffffb < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x3f,"data.size() >= FixedSize",
                 &DAT_001f5fa0);
  }
  __src = *(void **)(param_1 + 8);
  uVar3 = (long)*(void **)(param_1 + 0x10) - (long)__src;
  if (uVar3 <= __n) {
    __n = uVar3;
  }
  if (((__src != (void *)0x0) && (*(void **)(param_1 + 0x10) != __src)) && (__n != 0)) {
    memcpy((void *)(*param_2 + lVar4 + 4),__src,__n);
    return;
  }
  return;
}


// ===== 00bba318  FUN_00bba318 =====

void FUN_00bba318(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 **local_38;
  ulong uStack_30;
  ulong local_28;
  
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  FUN_00547cac(&local_50,"Heartbeat Info parameter (info_length=",0x26);
  local_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_006247b4(&local_38,0x16,*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8));
  uVar1 = uStack_30;
  pppuVar2 = (undefined8 ***)local_38;
  if (-1 < (long)local_28) {
    uVar1 = local_28 >> 0x38;
    pppuVar2 = &local_38;
  }
  FUN_00547cac(&local_50,pppuVar2,uVar1);
  if ((long)local_28 < 0) {
    operator_delete(local_38);
  }
  FUN_00547cac(&local_50,&DAT_001ca519,1);
  param_1[1] = uStack_48;
  *param_1 = local_50;
  param_1[2] = local_40;
  return;
}


// ===== 00bba3e0  FUN_00bba3e0 =====

void FUN_00bba3e0(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d47a10;
  if (pvVar1 != (void *)0x0) {
    if (param_1[2] - 1 < (ulong)(param_1[2] - (long)pvVar1)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00bba458  FUN_00bba458 =====

long * FUN_00bba458(long *param_1,long *param_2)

{
  if ((param_1[1] - *param_1 & 3U) != 0) {
    FUN_004efbd8(param_1,(param_1[1] - *param_1) + 3U & 0xfffffffffffffffc);
  }
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return param_1;
}


// ===== 00bba4b8  FUN_00bba4b8 =====

void FUN_00bba4b8(undefined8 *param_1,long *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  ushort *puVar7;
  ulong uVar8;
  ushort *puVar9;
  ulong uVar10;
  ushort *local_48;
  ulong uStack_40;
  ushort local_34 [2];
  
  puVar1 = (ushort *)*param_2;
  puVar2 = (ushort *)param_2[1];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar8 = (long)puVar2 - (long)puVar1;
  if (uVar8 != 0) {
    puVar7 = (ushort *)0x0;
    puVar9 = (ushort *)0x0;
    if (puVar2 != puVar1) {
      puVar9 = puVar1;
    }
    do {
      if (uVar8 < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_reader.h",0x3a,"data.size() >= FixedSize"
                     ,&DAT_001f5fa0);
      }
      uVar3 = *puVar9;
      local_34[0] = uVar3 >> 8 | (ushort)((uVar3 & 0xff00ff) << 8);
      uVar4 = (uint)(puVar9[1] >> 8) | (puVar9[1] & 0xff00ff) << 8;
      uVar10 = (ulong)uVar4;
      if (uVar8 < uVar10) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0xbba5a0);
        (*pcVar5)();
      }
      local_48 = (ushort *)0x0;
      if (uVar4 != 0) {
        local_48 = puVar9;
      }
      uStack_40 = uVar10;
      if (puVar7 < (ushort *)param_1[2]) {
        if (puVar7 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *(ushort **)(puVar7 + 4) = local_48;
        *(ulong *)(puVar7 + 8) = uVar10;
        *puVar7 = uVar3 >> 8 | (ushort)((uVar3 & 0xff00ff) << 8);
        puVar7 = puVar7 + 0xc;
      }
      else {
        puVar7 = (ushort *)FUN_00bba76c(param_1,local_34,&local_48);
      }
      param_1[1] = puVar7;
      uVar10 = (ulong)(uVar4 + 3) & 0xfffc;
      bVar6 = uVar10 <= uVar8;
      uVar8 = uVar8 - uVar10;
    } while ((bVar6) && (puVar9 = (ushort *)((long)puVar9 + uVar10), uVar8 != 0));
  }
  return;
}


// ===== 00bba5d4  FUN_00bba5d4 =====

void FUN_00bba5d4(undefined8 *param_1,undefined1 *param_2,ulong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar5 = param_3;
  puVar6 = param_2;
  if (param_3 == 0) {
    puVar4 = (undefined1 *)0x0;
    lVar12 = 0;
    puVar6 = (undefined1 *)0x0;
  }
  else {
    do {
      if (uVar5 < 4) {
LAB_00bba6f8:
        uVar7 = 0;
        *(undefined1 *)param_1 = 0;
        goto LAB_00bba73c;
      }
      uVar1 = (uint)(*(ushort *)(puVar6 + 2) >> 8) | (*(ushort *)(puVar6 + 2) & 0xff00ff) << 8;
      if ((uVar1 < 4) || (uVar5 < uVar1)) goto LAB_00bba6f8;
      uVar10 = (ulong)(uVar1 + 3) & 0xfffc;
      bVar3 = uVar10 <= uVar5;
      uVar5 = uVar5 - uVar10;
    } while ((bVar3) && (puVar6 = puVar6 + uVar10, uVar5 != 0));
    if ((long)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d34c0();
    }
    puVar4 = (undefined1 *)operator_new(param_3);
    uVar10 = param_3 - 1;
    uVar5 = uVar10;
    if ((ulong)-(long)puVar4 < uVar10) {
      uVar5 = -(long)puVar4;
    }
    uVar5 = uVar5 + 1;
    puVar6 = puVar4 + param_3;
    puVar8 = param_2;
    puVar11 = puVar4;
    if (0x20 < uVar5) {
      if ((ulong)-(long)puVar4 < uVar10) {
        uVar10 = -(long)puVar4;
      }
      if (((puVar4 <= puVar4 + uVar10) && (param_2 <= param_2 + uVar10)) &&
         (0x1f < (ulong)((long)puVar4 - (long)param_2))) {
        puVar13 = (undefined8 *)(puVar4 + 0x10);
        uVar10 = 0x20;
        if ((uVar5 & 0x1f) != 0) {
          uVar10 = uVar5 & 0x1f;
        }
        puVar14 = (undefined8 *)(param_2 + 0x10);
        lVar12 = uVar5 - uVar10;
        puVar8 = param_2 + lVar12;
        puVar11 = puVar4 + lVar12;
        do {
          puVar2 = puVar14 + -1;
          uVar15 = puVar14[-2];
          uVar17 = puVar14[1];
          uVar16 = *puVar14;
          lVar12 = lVar12 + -0x20;
          puVar14 = puVar14 + 4;
          puVar13[-1] = *puVar2;
          puVar13[-2] = uVar15;
          puVar13[1] = uVar17;
          *puVar13 = uVar16;
          puVar13 = puVar13 + 4;
        } while (lVar12 != 0);
      }
    }
    lVar12 = (long)puVar4 - (long)puVar11;
    do {
      if (puVar11 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar9 = puVar8 + 1;
      lVar12 = lVar12 + -1;
      *puVar11 = *puVar8;
      puVar8 = puVar9;
      puVar11 = puVar11 + 1;
    } while (puVar9 != param_2 + param_3);
    lVar12 = (long)puVar4 - lVar12;
  }
  *param_1 = puVar4;
  param_1[1] = lVar12;
  uVar7 = 1;
  param_1[2] = puVar6;
LAB_00bba73c:
  *(undefined1 *)(param_1 + 3) = uVar7;
  return;
}


// ===== 00bba76c  FUN_00bba76c =====

undefined2 * FUN_00bba76c(long *param_1,undefined2 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  void *pvVar2;
  size_t __n;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  void *__dest;
  undefined2 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar6 = (undefined2 *)(param_1[1] - *param_1);
  uVar3 = ((long)puVar6 >> 3) * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar3) {
    FUN_00bba898();
LAB_00bba894:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  lVar4 = param_1[2] - *param_1 >> 3;
  uVar5 = lVar4 * 0x5555555555555556;
  if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
    uVar5 = uVar3;
  }
  if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
    uVar5 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar5 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar5) goto LAB_00bba894;
    pvVar1 = operator_new(uVar5 * 0x18);
    puVar6 = (undefined2 *)((long)pvVar1 + (long)puVar6);
  }
  if (puVar6 != (undefined2 *)0x0) {
    uVar8 = param_3[1];
    uVar7 = *param_3;
    *puVar6 = *param_2;
    *(undefined8 *)(puVar6 + 8) = uVar8;
    *(undefined8 *)(puVar6 + 4) = uVar7;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar2 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 0xc);
    param_1[2] = (long)((long)pvVar1 + uVar5 * 0x18);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    return puVar6 + 0xc;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00bba898  FUN_00bba898 =====

void FUN_00bba898(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00bba8b0  FUN_00bba8b0 =====

void FUN_00bba8b0(undefined8 *param_1,char *param_2,ulong param_3)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  undefined1 *local_28;
  
  if (param_3 < 4) {
    FUN_00bb8cbc(param_3,4);
  }
  else if (*param_2 == '\x04') {
    uVar3 = (uint)(*(ushort *)(param_2 + 2) >> 8) | (*(ushort *)(param_2 + 2) & 0xff00ff) << 8;
    uVar4 = (ulong)uVar3;
    if ((uVar3 < 4) || (param_3 < uVar4)) {
      FUN_00bb8cd4(uVar4);
    }
    else {
      if (param_3 - uVar4 < 4) {
        pcVar2 = (char *)0x0;
        if (uVar4 - 4 != 0) {
          pcVar2 = param_2 + 4;
        }
        puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
        local_40 = &DAT_aaaaaaaaaaaaaaaa;
        local_28 = &DAT_aaaaaaaaaaaaaaaa;
        local_30 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_00bba5d4(&local_40,pcVar2,uVar4 - 4);
        bVar1 = ((ulong)local_28 & 1) == 0;
        if (bVar1) {
          *(undefined1 *)param_1 = 0;
        }
        else {
          *param_1 = &PTR_FUN_00d47a40;
          param_1[2] = puStack_38;
          param_1[1] = local_40;
          param_1[3] = local_30;
        }
        *(bool *)(param_1 + 4) = !bVar1;
        return;
      }
      FUN_00bb8cdc(param_3 - uVar4);
    }
  }
  else {
    FUN_00bb8cc4(*param_2,4);
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


// ===== 00bba9ac  FUN_00bba9ac =====

void FUN_00bba9ac(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d47a40;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if ((ulong)(param_1[2] - (long)pvVar1) <= param_1[2] - 1) {
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00bbaa10  FUN_00bbaa10 =====

void FUN_00bbaa10(long param_1,long *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  void *__src;
  void *pvVar3;
  ulong __n;
  long lVar4;
  
  __src = *(void **)(param_1 + 8);
  pvVar3 = *(void **)(param_1 + 0x10);
  __n = (long)pvVar3 - (long)__src;
  lVar4 = param_2[1] - *param_2;
  lVar1 = __n + 4;
  FUN_004efbd8(param_2,lVar4 + lVar1);
  puVar2 = (undefined1 *)(*param_2 + lVar4);
  *puVar2 = 4;
  puVar2[2] = (char)((ulong)lVar1 >> 8);
  puVar2[3] = (char)lVar1;
  if (0xfffffffffffffffb < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x3f,"data.size() >= FixedSize",
                 &DAT_001f5fa0);
  }
  if ((__src != (void *)0x0) && (pvVar3 != __src)) {
    memcpy((void *)(*param_2 + lVar4 + 4),__src,__n);
    return;
  }
  return;
}


// ===== 00bbaae0  FUN_00bbaae0 =====

void FUN_00bbaae0(undefined8 param_1)

{
  FUN_005d3510(param_1,"HEARTBEAT");
  return;
}


// ===== 00bbaaf4  FUN_00bbaaf4 =====

void FUN_00bbaaf4(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d47a40;
  if (pvVar1 != (void *)0x0) {
    if (param_1[2] - 1 < (ulong)(param_1[2] - (long)pvVar1)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00bbab6c  FUN_00bbab6c =====

void FUN_00bbab6c(undefined8 *param_1,char *param_2,ulong param_3)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  undefined1 *local_28;
  
  if (param_3 < 4) {
    FUN_00bb8cbc(param_3,4);
  }
  else if (*param_2 == '\x05') {
    uVar3 = (uint)(*(ushort *)(param_2 + 2) >> 8) | (*(ushort *)(param_2 + 2) & 0xff00ff) << 8;
    uVar4 = (ulong)uVar3;
    if ((uVar3 < 4) || (param_3 < uVar4)) {
      FUN_00bb8cd4(uVar4);
    }
    else {
      if (param_3 - uVar4 < 4) {
        pcVar2 = (char *)0x0;
        if (uVar4 - 4 != 0) {
          pcVar2 = param_2 + 4;
        }
        puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
        local_40 = &DAT_aaaaaaaaaaaaaaaa;
        local_28 = &DAT_aaaaaaaaaaaaaaaa;
        local_30 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_00bba5d4(&local_40,pcVar2,uVar4 - 4);
        bVar1 = ((ulong)local_28 & 1) == 0;
        if (bVar1) {
          *(undefined1 *)param_1 = 0;
        }
        else {
          *param_1 = &PTR_FUN_00d47a70;
          param_1[2] = puStack_38;
          param_1[1] = local_40;
          param_1[3] = local_30;
        }
        *(bool *)(param_1 + 4) = !bVar1;
        return;
      }
      FUN_00bb8cdc(param_3 - uVar4);
    }
  }
  else {
    FUN_00bb8cc4(*param_2,5);
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


// ===== 00bbac68  FUN_00bbac68 =====

void FUN_00bbac68(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d47a70;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if ((ulong)(param_1[2] - (long)pvVar1) <= param_1[2] - 1) {
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00bbaccc  FUN_00bbaccc =====

void FUN_00bbaccc(long param_1,long *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  void *__src;
  void *pvVar3;
  ulong __n;
  long lVar4;
  
  __src = *(void **)(param_1 + 8);
  pvVar3 = *(void **)(param_1 + 0x10);
  __n = (long)pvVar3 - (long)__src;
  lVar4 = param_2[1] - *param_2;
  lVar1 = __n + 4;
  FUN_004efbd8(param_2,lVar4 + lVar1);
  puVar2 = (undefined1 *)(*param_2 + lVar4);
  *puVar2 = 5;
  puVar2[2] = (char)((ulong)lVar1 >> 8);
  puVar2[3] = (char)lVar1;
  if (0xfffffffffffffffb < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x3f,"data.size() >= FixedSize",
                 &DAT_001f5fa0);
  }
  if ((__src != (void *)0x0) && (pvVar3 != __src)) {
    memcpy((void *)(*param_2 + lVar4 + 4),__src,__n);
    return;
  }
  return;
}


// ===== 00bbad9c  FUN_00bbad9c =====

void FUN_00bbad9c(undefined8 param_1)

{
  FUN_005d3510(param_1,"HEARTBEAT-ACK");
  return;
}


// ===== 00bbadb0  FUN_00bbadb0 =====

void FUN_00bbadb0(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d47a70;
  if (pvVar1 != (void *)0x0) {
    if (param_1[2] - 1 < (ulong)(param_1[2] - (long)pvVar1)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00bbae28  FUN_00bbae28 =====

undefined8 FUN_00bbae28(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long local_28;
  
  plVar3 = (long *)*param_1;
  plVar6 = (long *)param_1[1];
  if ((long)plVar6 - (long)plVar3 != 0) {
    uVar4 = (long)plVar6 - (long)plVar3 >> 4;
    plVar2 = plVar3;
    do {
      uVar5 = uVar4 >> 1;
      plVar3 = plVar2 + uVar5 * 2 + 2;
      uVar4 = uVar4 + ~uVar5;
      if (param_2 <= plVar2[uVar5 * 2 + 1] + 1) {
        plVar3 = plVar2;
        uVar4 = uVar5;
      }
      plVar2 = plVar3;
    } while (uVar4 != 0);
  }
  local_28 = param_2;
  if (plVar3 == plVar6) {
    if (plVar6 < (long *)param_1[2]) {
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *plVar6 = param_2;
      plVar6[1] = param_2;
      param_1[1] = plVar6 + 2;
    }
    else {
      uVar1 = FUN_00bbbd0c(param_1,&local_28,&local_28);
      param_1[1] = uVar1;
    }
  }
  else {
    if ((*plVar3 <= param_2) && (param_2 <= plVar3[1])) {
      return 0;
    }
    if (plVar3[1] + 1 == param_2) {
      plVar2 = plVar3 + 2;
      if ((plVar6 == plVar2) || (param_2 + 1 != *plVar2)) {
        plVar3[1] = param_2;
      }
      else {
        plVar3[1] = plVar3[3];
        plVar6 = (long *)param_1[1];
        if (plVar6 == plVar2) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
                    );
        }
        memmove(plVar2,plVar3 + 4,(long)plVar6 - (long)(plVar3 + 4));
        plVar3 = (long *)param_1[1];
        uVar5 = (ulong)((long)plVar3 + (-0x10 - ((long)plVar3 << 0x3c))) >> 4;
        uVar4 = (((long)plVar6 - (long)plVar3 << 0x3c) - ((long)plVar6 - (long)plVar3)) + 0x10U >> 4
        ;
        if (uVar5 <= uVar4) {
          uVar4 = uVar5;
        }
        if ((1 < uVar4) && ((((int)plVar6 - (int)plVar3 | -(int)plVar3) & 0xfU) == 0)) {
          uVar4 = uVar4 & 0xffffffffffffffe;
          plVar3 = plVar3 + uVar4 * -2;
          do {
            uVar4 = uVar4 - 2;
          } while (uVar4 != 0);
        }
        while (plVar3 != plVar6 + -2) {
          plVar3 = plVar3 + -2;
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        param_1[1] = plVar6 + -2;
      }
    }
    else if (*plVar3 == param_2 + 1) {
      *plVar3 = param_2;
    }
    else {
      FUN_00bbb01c(param_1,plVar3,&local_28,&local_28);
    }
  }
  return 1;
}


// ===== 00bbb01c  FUN_00bbb01c =====

undefined8 * FUN_00bbb01c(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  size_t sVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  void *__dest;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  void *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  void *pvStack_48;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar8 = param_2;
    if (param_2 == puVar2) {
      if (param_2 == (undefined8 *)0x0) {
LAB_00bbb1cc:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar9 = *param_4;
      *puVar2 = *param_3;
      puVar2[1] = uVar9;
      param_1[1] = (long)(puVar2 + 2);
    }
    else {
      uVar10 = *param_3;
      uVar9 = *param_4;
      puVar3 = puVar2;
      for (puVar5 = puVar2 + -2; puVar5 < puVar2; puVar5 = puVar5 + 2) {
        if (puVar3 == (undefined8 *)0x0) goto LAB_00bbb1cc;
        uVar12 = *puVar5;
        puVar3[1] = puVar5[1];
        *puVar3 = uVar12;
        puVar3 = puVar3 + 2;
      }
      param_1[1] = (long)puVar3;
      sVar4 = (long)puVar2 + (-0x10 - (long)param_2);
      memmove((void *)((long)puVar2 - sVar4),param_2,sVar4);
      *param_2 = uVar10;
      param_2[1] = uVar9;
    }
  }
  else {
    lVar11 = *param_1;
    uVar1 = ((long)puVar2 - lVar11 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_00bbbe10();
LAB_00bbb1e4:
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    uVar6 = param_1[2] - lVar11;
    local_60 = (void *)0x0;
    uVar7 = (long)uVar6 >> 3;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffef < uVar6) {
      uVar7 = 0xfffffffffffffff;
    }
    if (uVar7 != 0) {
      if (uVar7 >> 0x3c != 0) goto LAB_00bbb1e4;
      local_60 = operator_new(uVar7 << 4);
    }
    pvStack_48 = (void *)((long)local_60 + uVar7 * 0x10);
    local_58 = (undefined8 *)((long)local_60 + ((long)param_2 - lVar11));
    local_50 = local_58;
    FUN_00bbbe28(&local_60,param_3,param_4);
    puVar8 = local_58;
    memcpy(local_50,param_2,param_1[1] - (long)param_2);
    lVar11 = param_1[1];
    param_1[1] = (long)param_2;
    sVar4 = (long)param_2 - *param_1;
    __dest = (void *)((long)local_58 - sVar4);
    local_50 = (undefined8 *)((long)local_50 + (lVar11 - (long)param_2));
    memcpy(__dest,(void *)*param_1,sVar4);
    local_60 = (void *)*param_1;
    lVar11 = param_1[2];
    *param_1 = (long)__dest;
    param_1[2] = (long)pvStack_48;
    param_1[1] = (long)local_50;
    if (local_60 != (void *)0x0) {
      local_58 = (undefined8 *)local_60;
      local_50 = (undefined8 *)local_60;
      pvStack_48 = (void *)lVar11;
      operator_delete(local_60);
    }
  }
  return puVar8;
}


// ===== 00bbb1e8  FUN_00bbb1e8 =====

void FUN_00bbb1e8(undefined8 *param_1,long param_2)

{
  bool bVar1;
  long *__dest;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *__src;
  
  __dest = (long *)*param_1;
  plVar2 = (long *)param_1[1];
  __src = __dest;
  if ((long)plVar2 - (long)__dest != 0) {
    uVar3 = (long)plVar2 - (long)__dest >> 4;
    plVar7 = __dest;
    do {
      uVar5 = uVar3 >> 1;
      __src = plVar7 + uVar5 * 2 + 2;
      uVar3 = uVar3 + ~uVar5;
      if (param_2 <= plVar7[uVar5 * 2 + 1]) {
        __src = plVar7;
        uVar3 = uVar5;
      }
      plVar7 = __src;
    } while (uVar3 != 0);
  }
  if (__src == plVar2) {
    bVar1 = false;
  }
  else {
    bVar1 = *__src <= param_2;
  }
  if (__dest <= __src) {
    plVar7 = plVar2;
    if (__dest != __src) {
      memmove(__dest,__src,(long)plVar2 - (long)__src);
      plVar4 = (long *)param_1[1];
      lVar6 = ((long)__dest + (long)plVar2) - ((long)__src + (long)plVar4);
      uVar3 = (ulong)((lVar6 << 0x3c) - lVar6) >> 4;
      uVar5 = (ulong)((long)plVar4 + (-0x10 - ((long)plVar4 << 0x3c))) >> 4;
      if (uVar5 <= uVar3) {
        uVar3 = uVar5;
      }
      plVar7 = (long *)((long)__dest + ((long)plVar2 - (long)__src));
      if ((1 < uVar3) &&
         (((((int)__dest + (int)plVar2) - ((int)__src + (int)plVar4) | -(int)plVar4) & 0xfU) == 0))
      {
        uVar3 = uVar3 & 0xffffffffffffffe;
        plVar4 = plVar4 + uVar3 * -2;
        do {
          uVar3 = uVar3 - 2;
        } while (uVar3 != 0);
      }
      while (plVar4 != plVar7) {
        plVar4 = plVar4 + -2;
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      param_1[1] = plVar7;
    }
    if (bVar1) {
      if ((long *)*param_1 == plVar7) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:431: libc++ Hardening assertion !empty() failed: front() called on an empty vector\n"
                  );
      }
      *(long *)*param_1 = param_2 + 1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:1170: libc++ Hardening assertion __first <= __last failed: vector::erase(first, last) called with invalid range\n"
            );
}


// ===== 00bbb37c  FUN_00bbb37c =====

bool FUN_00bbb37c(long param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x34) == '\x01') {
    uVar1 = param_2 - *(uint *)(param_1 + 0x30);
    bVar2 = *(uint *)(param_1 + 0x30) <= param_2 && uVar1 != 0;
    if (uVar1 != 0x80000000) {
      bVar2 = uVar1 != 0xffffffff && (int)(uVar1 + 1) < 0 == SCARRY4(uVar1,1);
    }
    uVar3 = (ulong)uVar1;
    if (!bVar2) {
      uVar3 = (ulong)uVar1 | 0xffffffff00000000;
    }
    uVar3 = uVar3 + *(long *)(param_1 + 0x28);
  }
  else {
    uVar3 = (ulong)param_2;
  }
  iVar4 = (int)*(long *)(param_1 + 0x38);
  uVar1 = (int)uVar3 - iVar4;
  if ((long)uVar3 <= *(long *)(param_1 + 0x38)) {
    uVar1 = iVar4 - (int)uVar3;
  }
  return uVar1 < 0x186a1;
}


// ===== 00bbb3f0  FUN_00bbb3f0 =====

undefined4 FUN_00bbb3f0(long param_1,uint param_2,ulong param_3)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined4 local_38;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x34) == '\x01') {
    uVar2 = param_2 - *(uint *)(param_1 + 0x30);
    bVar3 = *(uint *)(param_1 + 0x30) <= param_2 && uVar2 != 0;
    if (uVar2 != 0x80000000) {
      bVar3 = uVar2 != 0xffffffff && (int)(uVar2 + 1) < 0 == SCARRY4(uVar2,1);
    }
    uVar6 = (ulong)uVar2;
    if (!bVar3) {
      uVar6 = (ulong)uVar2 | 0xffffffff00000000;
    }
    uVar6 = uVar6 + *(long *)(param_1 + 0x28);
  }
  else {
    uVar6 = (ulong)param_2;
  }
  *(ulong *)(param_1 + 0x28) = uVar6;
  *(uint *)(param_1 + 0x30) = param_2;
  *(undefined1 *)(param_1 + 0x34) = 1;
  if (*(long *)(param_1 + 0x38) < (long)uVar6) {
    if (uVar6 == *(long *)(param_1 + 0x38) + 1U) {
      plVar5 = *(long **)(param_1 + 0x40);
      plVar1 = *(long **)(param_1 + 0x48);
      *(ulong *)(param_1 + 0x38) = uVar6;
      if ((plVar5 != plVar1) && (*plVar5 == uVar6 + 1)) {
        *(long *)(param_1 + 0x38) = plVar5[1];
        memmove(plVar5,plVar5 + 2,(long)plVar1 - (long)(plVar5 + 2));
        plVar5 = *(long **)(param_1 + 0x48);
        uVar7 = (ulong)((long)plVar5 + (-0x10 - ((long)plVar5 << 0x3c))) >> 4;
        uVar6 = (((long)plVar1 - (long)plVar5 << 0x3c) - ((long)plVar1 - (long)plVar5)) + 0x10U >> 4
        ;
        if (uVar7 <= uVar6) {
          uVar6 = uVar7;
        }
        if ((1 < uVar6) && ((((int)plVar1 - (int)plVar5 | -(int)plVar5) & 0xfU) == 0)) {
          uVar6 = uVar6 & 0xffffffffffffffe;
          plVar5 = plVar5 + uVar6 * -2;
          do {
            uVar6 = uVar6 - 2;
          } while (uVar6 != 0);
        }
        while (plVar5 != plVar1 + -2) {
          plVar5 = plVar5 + -2;
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        *(long **)(param_1 + 0x48) = plVar1 + -2;
      }
    }
    else {
      uVar7 = FUN_00bbae28(param_1 + 0x40,uVar6);
      if ((uVar7 & 1) == 0) {
        if (*(ulong *)(param_1 + 0x68) < 0x14) {
          local_38 = (int)uVar6;
          FUN_00bbc104(0,param_1 + 0x58,param_1 + 0x58,&local_38);
        }
        goto LAB_00bbb5c0;
      }
    }
    uVar8 = 1;
  }
  else {
    if (*(ulong *)(param_1 + 0x68) < 0x14) {
      local_34 = (int)uVar6;
      FUN_00bbc104(0,param_1 + 0x58,param_1 + 0x58,&local_34);
    }
    if (*(int *)(param_1 + 0x20) == 3) {
LAB_00bbb5c0:
      uVar8 = 0;
    }
    else {
      if (*(int *)(param_1 + 0x20) == 2) {
        FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x18));
      }
      uVar8 = 0;
      *(undefined4 *)(param_1 + 0x20) = 3;
    }
  }
  if ((*(long *)(param_1 + 0x40) != *(long *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x20) != 3)) {
    if (*(int *)(param_1 + 0x20) == 2) {
      FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x18));
    }
    *(undefined4 *)(param_1 + 0x20) = 3;
  }
  if (((param_3 & 1) != 0) && (*(int *)(param_1 + 0x20) != 3)) {
    if (*(int *)(param_1 + 0x20) == 2) {
      FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x18));
    }
    *(undefined4 *)(param_1 + 0x20) = 3;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x10) = 1;
    if (*(int *)(param_1 + 0x20) == 3) {
      return uVar8;
    }
    if (*(int *)(param_1 + 0x20) == 2) goto LAB_00bbb658;
  }
  else {
    if (*(int *)(param_1 + 0x20) != 2) {
      if (*(int *)(param_1 + 0x20) != 0) {
        return uVar8;
      }
      uVar4 = 1;
      goto LAB_00bbb664;
    }
LAB_00bbb658:
    FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x18));
  }
  uVar4 = 3;
LAB_00bbb664:
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  return uVar8;
}


// ===== 00bbb68c  FUN_00bbb68c =====

bool FUN_00bbb68c(long param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  if (*(char *)(param_1 + 0x34) == '\x01') {
    uVar2 = param_2 - *(uint *)(param_1 + 0x30);
    bVar3 = *(uint *)(param_1 + 0x30) <= param_2 && uVar2 != 0;
    if (uVar2 != 0x80000000) {
      bVar3 = uVar2 != 0xffffffff && (int)(uVar2 + 1) < 0 == SCARRY4(uVar2,1);
    }
    uVar8 = (ulong)uVar2;
    if (!bVar3) {
      uVar8 = (ulong)uVar2 | 0xffffffff00000000;
    }
    uVar8 = uVar8 + *(long *)(param_1 + 0x28);
  }
  else {
    uVar8 = (ulong)param_2;
  }
  lVar9 = *(long *)(param_1 + 0x38);
  *(ulong *)(param_1 + 0x28) = uVar8;
  *(uint *)(param_1 + 0x30) = param_2;
  *(undefined1 *)(param_1 + 0x34) = 1;
  if (lVar9 < (long)uVar8) {
    *(ulong *)(param_1 + 0x38) = uVar8;
    FUN_00bbb1e8(param_1 + 0x40,uVar8);
    plVar5 = *(long **)(param_1 + 0x40);
    plVar1 = *(long **)(param_1 + 0x48);
    if ((plVar5 != plVar1) && (*plVar5 == *(long *)(param_1 + 0x38) + 1)) {
      *(long *)(param_1 + 0x38) = plVar5[1];
      memmove(plVar5,plVar5 + 2,(long)plVar1 - (long)(plVar5 + 2));
      plVar5 = *(long **)(param_1 + 0x48);
      uVar7 = (ulong)((long)plVar5 + (-0x10 - ((long)plVar5 << 0x3c))) >> 4;
      uVar6 = (((long)plVar1 - (long)plVar5 << 0x3c) - ((long)plVar1 - (long)plVar5)) + 0x10U >> 4;
      if (uVar7 <= uVar6) {
        uVar6 = uVar7;
      }
      if ((1 < uVar6) && ((((int)plVar1 - (int)plVar5 | -(int)plVar5) & 0xfU) == 0)) {
        uVar6 = uVar6 & 0xffffffffffffffe;
        plVar5 = plVar5 + uVar6 * -2;
        do {
          uVar6 = uVar6 - 2;
        } while (uVar6 != 0);
      }
      while (plVar5 != plVar1 + -2) {
        plVar5 = plVar5 + -2;
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      *(long **)(param_1 + 0x48) = plVar1 + -2;
    }
    if (*(int *)(param_1 + 0x20) == 2) {
LAB_00bbb800:
      FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x18));
      goto LAB_00bbb808;
    }
    if (*(int *)(param_1 + 0x20) != 0) goto LAB_00bbb810;
    uVar4 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x20) == 3) goto LAB_00bbb810;
    if (*(int *)(param_1 + 0x20) == 2) goto LAB_00bbb800;
LAB_00bbb808:
    uVar4 = 3;
  }
  *(undefined4 *)(param_1 + 0x20) = uVar4;
LAB_00bbb810:
  return lVar9 < (long)uVar8;
}


// ===== 00bbb82c  FUN_00bbb82c =====

void FUN_00bbb82c(undefined8 *param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *local_88;
  long local_80;
  long local_78;
  void *local_70;
  void *pvStack_68;
  undefined8 local_60;
  long *local_50;
  long lStack_48;
  long local_40;
  long **local_38;
  
  plVar6 = (long *)(param_2 + 0x60);
  lVar4 = *plVar6;
  lStack_48 = *(long *)(param_2 + 0x60);
  plVar10 = *(long **)(param_2 + 0x58);
  local_40 = *(long *)(param_2 + 0x68);
  plVar9 = (long *)((ulong)&local_50 | 8);
  *plVar6 = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(long **)(param_2 + 0x58) = plVar6;
  local_50 = plVar9;
  if (local_40 != 0) {
    *(long **)(lVar4 + 0x10) = plVar9;
    local_50 = plVar10;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x38);
  FUN_00bbb9e4(&local_70);
  uVar3 = local_60;
  pvVar2 = pvStack_68;
  pvVar5 = local_70;
  local_80 = lStack_48;
  local_78 = local_40;
  local_88 = &local_80;
  if (local_40 != 0) {
    *(long **)(lStack_48 + 0x10) = &local_80;
    *plVar9 = 0;
    plVar9[1] = 0;
    local_88 = local_50;
    local_50 = plVar9;
  }
  *(undefined4 *)(param_1 + 1) = uVar1;
  *(undefined4 *)((long)param_1 + 0xc) = param_3;
  local_70 = (void *)0x0;
  pvStack_68 = (void *)0x0;
  param_1[3] = pvVar2;
  param_1[2] = pvVar5;
  *param_1 = &PTR_FUN_00d47aa0;
  local_60 = 0;
  param_1[4] = uVar3;
  param_1[5] = local_88;
  plVar6 = param_1 + 6;
  *plVar6 = lStack_48;
  param_1[7] = local_40;
  if (local_40 == 0) {
    param_1[5] = plVar6;
  }
  else {
    *(long **)(lStack_48 + 0x10) = plVar6;
    local_80 = 0;
    local_78 = 0;
    local_88 = &local_80;
  }
  local_38 = &local_88;
  FUN_00ba1004(&local_38,local_80);
  if (local_70 != (void *)0x0) {
    uVar8 = (ulong)((long)pvStack_68 + (-4 - ((long)pvStack_68 << 0x3e))) >> 2;
    uVar7 = (ulong)(((long)local_70 - (long)pvStack_68 << 0x3e) -
                   ((long)local_70 - (long)pvStack_68)) >> 2;
    if (uVar8 <= uVar7) {
      uVar7 = uVar8;
    }
    pvVar5 = pvStack_68;
    if ((1 < uVar7) && ((((int)local_70 - (int)pvStack_68 | -(int)pvStack_68) & 3U) == 0)) {
      uVar7 = uVar7 & 0x3ffffffffffffffe;
      pvVar5 = (void *)((long)pvStack_68 + uVar7 * -4);
      do {
        uVar7 = uVar7 - 2;
      } while (uVar7 != 0);
    }
    while (pvVar5 != local_70) {
      pvVar5 = (void *)((long)pvVar5 + -4);
      if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    pvStack_68 = local_70;
    operator_delete(local_70);
  }
  local_38 = &local_50;
  FUN_00ba1004(&local_38,lStack_48);
  return;
}


// ===== 00bbb9e4  FUN_00bbb9e4 =====

void FUN_00bbb9e4(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  undefined2 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined2 local_28 [2];
  undefined2 local_24 [2];
  
  lVar9 = *(long *)(param_2 + 0x40);
  lVar8 = *(long *)(param_2 + 0x48);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar2 = lVar8 - lVar9;
  if (lVar2 == 0) {
    puVar5 = (undefined2 *)0x0;
  }
  else {
    uVar6 = lVar2 >> 4;
    if (0x13 < uVar6) {
      uVar6 = 0x14;
    }
    puVar5 = (undefined2 *)operator_new(uVar6 * 4);
    *param_1 = puVar5;
    param_1[1] = puVar5;
    param_1[2] = puVar5 + uVar6 * 2;
  }
  if (lVar8 != lVar9) {
    lVar8 = 0;
    uVar6 = 0;
    do {
      lVar7 = *(long *)(param_2 + 0x38);
      lVar2 = *(long *)(lVar9 + lVar8);
      lVar1 = ((long *)(lVar9 + lVar8))[1];
      lVar3 = lVar2 - lVar7;
      lVar9 = -lVar3;
      if (lVar3 != 0 && lVar7 <= lVar2) {
        lVar9 = lVar3;
      }
      lVar3 = lVar1 - lVar7;
      lVar2 = -lVar3;
      if (lVar3 != 0 && lVar7 <= lVar1) {
        lVar2 = lVar3;
      }
      local_24[0] = (undefined2)lVar9;
      local_28[0] = (undefined2)lVar2;
      if (puVar5 < (undefined2 *)param_1[2]) {
        if (puVar5 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        *puVar5 = local_24[0];
        puVar5[1] = local_28[0];
        puVar5 = puVar5 + 2;
      }
      else {
        puVar5 = (undefined2 *)FUN_00bbbffc(param_1,local_24,local_28);
      }
      lVar9 = *(long *)(param_2 + 0x40);
      lVar2 = *(long *)(param_2 + 0x48);
      param_1[1] = puVar5;
    } while ((uVar6 + 1 < (ulong)(lVar2 - lVar9 >> 4)) &&
            (bVar4 = uVar6 < 0x13, lVar8 = lVar8 + 0x10, uVar6 = uVar6 + 1, bVar4));
  }
  return;
}


// ===== 00bbbb0c  FUN_00bbbb0c =====

undefined8 FUN_00bbbb0c(long param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 != 3) {
    if ((param_2 & 1) == 0) {
      return 0;
    }
    if (1 < iVar1 - 1U) {
      return 0;
    }
    if (iVar1 == 2) {
      FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x18));
    }
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  return 1;
}


// ===== 00bbbb6c  FUN_00bbbb6c =====

bool FUN_00bbbb6c(long param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  
  if (*(char *)(param_1 + 0x34) == '\x01') {
    uVar1 = param_2 - *(uint *)(param_1 + 0x30);
    bVar2 = *(uint *)(param_1 + 0x30) <= param_2 && uVar1 != 0;
    if (uVar1 != 0x80000000) {
      bVar2 = uVar1 != 0xffffffff && (int)(uVar1 + 1) < 0 == SCARRY4(uVar1,1);
    }
    uVar3 = (ulong)uVar1;
    if (!bVar2) {
      uVar3 = (ulong)uVar1 | 0xffffffff00000000;
    }
    uVar3 = uVar3 + *(long *)(param_1 + 0x28);
  }
  else {
    uVar3 = (ulong)param_2;
  }
  return uVar3 == *(long *)(param_1 + 0x38) + 1U;
}


// ===== 00bbbbcc  FUN_00bbbbcc =====

void FUN_00bbbbcc(long param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 3;
  return;
}


// ===== 00bbbbdc  FUN_00bbbbdc =====

void FUN_00bbbbdc(long param_1)

{
  if (*(int *)(param_1 + 0x20) != 3) {
    if (*(int *)(param_1 + 0x20) == 2) {
      FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x18));
    }
    *(undefined4 *)(param_1 + 0x20) = 3;
  }
  return;
}


// ===== 00bbbc28  FUN_00bbbc28 =====

void FUN_00bbbc28(long param_1)

{
  if (*(int *)(param_1 + 0x20) == 1) {
    FUN_00ba3f30(*(undefined8 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x20) = 2;
  }
  return;
}


// ===== 00bbbc6c  FUN_00bbbc6c =====

undefined4 FUN_00bbbc6c(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x40) != *(long *)(param_1 + 0x48)) {
    uVar1 = 8;
  }
  return uVar1;
}


// ===== 00bbbc84  FUN_00bbbc84 =====

void FUN_00bbbc84(long param_1,long param_2)

{
  *(int *)(param_2 + 0x5c) = (int)*(undefined8 *)(param_1 + 0x38);
  *(undefined1 *)(param_2 + 0x58) = *(undefined1 *)(param_1 + 0x10);
  return;
}


// ===== 00bbbc9c  FUN_00bbbc9c =====

void FUN_00bbbc9c(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x58);
  uVar1 = *(uint *)(param_2 + 0x5c);
  uVar4 = (ulong)uVar1;
  if (*(char *)(param_1 + 0x34) == '\x01') {
    uVar2 = uVar1 - *(uint *)(param_1 + 0x30);
    bVar3 = *(uint *)(param_1 + 0x30) <= uVar1 && uVar2 != 0;
    if (uVar2 != 0x80000000) {
      bVar3 = uVar2 != 0xffffffff && (int)(uVar2 + 1) < 0 == SCARRY4(uVar2,1);
    }
    uVar4 = (ulong)uVar2;
    if (!bVar3) {
      uVar4 = (ulong)uVar2 | 0xffffffff00000000;
    }
    uVar4 = uVar4 + *(long *)(param_1 + 0x28);
  }
  *(uint *)(param_1 + 0x30) = uVar1;
  *(ulong *)(param_1 + 0x28) = uVar4;
  *(undefined1 *)(param_1 + 0x34) = 1;
  *(ulong *)(param_1 + 0x38) = uVar4;
  return;
}


// ===== 00bbbd0c  FUN_00bbbd0c =====

undefined8 * FUN_00bbbd0c(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  void *__dest;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar7 >> 4) + 1;
  if (uVar1 >> 0x3c != 0) {
    FUN_00bbbe10();
LAB_00bbbe0c:
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
    if (uVar5 >> 0x3c != 0) goto LAB_00bbbe0c;
    pvVar2 = operator_new(uVar5 << 4);
    puVar7 = (undefined8 *)((long)pvVar2 + (long)puVar7);
  }
  if (puVar7 != (undefined8 *)0x0) {
    uVar6 = *param_3;
    *puVar7 = *param_2;
    puVar7[1] = uVar6;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar7 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar7 + 2);
    param_1[2] = (long)((long)pvVar2 + uVar5 * 0x10);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar7 + 2;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00bbbe10  FUN_00bbbe10 =====

void FUN_00bbbe10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00bbbe28  FUN_00bbbe28 =====

void FUN_00bbbe28(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  undefined8 *__src;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  puVar12 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar12) {
    pvVar1 = (void *)*param_1;
    __src = (undefined8 *)param_1[1];
    if ((long)__src - (long)pvVar1 == 0) {
      uVar3 = (long)param_1[3] - (long)pvVar1 >> 3;
      if (puVar12 == __src) {
        uVar3 = 1;
      }
      if (uVar3 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar2 = operator_new(uVar3 * 0x10);
      lVar7 = (long)puVar12 - (long)__src;
      puVar4 = (undefined8 *)((long)pvVar2 + (uVar3 >> 2) * 0x10);
      puVar6 = puVar4;
      if (lVar7 != 0) {
        puVar6 = (undefined8 *)((long)puVar4 + lVar7);
        puVar9 = puVar4;
        puVar11 = __src;
        do {
          if (puVar9 == (undefined8 *)0x0) goto LAB_00bbbfcc;
          uVar5 = *puVar11;
          lVar7 = lVar7 + -0x10;
          puVar9[1] = puVar11[1];
          *puVar9 = uVar5;
          puVar9 = puVar9 + 2;
          puVar11 = puVar11 + 2;
        } while (lVar7 != 0);
      }
      *param_1 = pvVar2;
      param_1[1] = puVar4;
      uVar10 = (ulong)((long)puVar12 + (-0x10 - ((long)puVar12 << 0x3c))) >> 4;
      uVar8 = (ulong)(((long)__src - (long)puVar12 << 0x3c) - ((long)__src - (long)puVar12)) >> 4;
      param_1[2] = puVar6;
      param_1[3] = (void *)((long)pvVar2 + uVar3 * 0x10);
      if (uVar10 <= uVar8) {
        uVar8 = uVar10;
      }
      puVar4 = puVar12;
      if ((1 < uVar8) && ((((int)__src - (int)puVar12 | -(int)puVar12) & 0xfU) == 0)) {
        uVar8 = uVar8 & 0xffffffffffffffe;
        puVar4 = puVar12 + uVar8 * -2;
        do {
          uVar8 = uVar8 - 2;
        } while (uVar8 != 0);
      }
      while (puVar4 != __src) {
        puVar4 = puVar4 + -2;
        if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (__src != (undefined8 *)0x0) {
        operator_delete(pvVar1);
      }
    }
    else {
      lVar7 = ((long)__src - (long)pvVar1 >> 4) + 1;
      uVar3 = (ulong)(lVar7 - (lVar7 >> 0x3f)) >> 1;
      memmove(__src + uVar3 * -2,__src,(long)puVar12 - (long)__src);
      puVar12 = puVar12 + uVar3 * -2;
      param_1[1] = param_1[1] + uVar3 * -0x10;
      param_1[2] = puVar12;
    }
  }
  if (puVar12 != (undefined8 *)0x0) {
    uVar5 = *param_3;
    *puVar12 = *param_2;
    puVar12[1] = uVar5;
    param_1[2] = puVar12 + 2;
    return;
  }
LAB_00bbbfcc:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00bbbfe4  FUN_00bbbfe4 =====

void FUN_00bbbfe4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00bbbffc  FUN_00bbbffc =====

undefined2 * FUN_00bbbffc(long *param_1,undefined2 *param_2,undefined2 *param_3)

{
  ulong uVar1;
  undefined2 uVar2;
  void *pvVar3;
  void *pvVar4;
  size_t __n;
  ulong uVar5;
  ulong uVar6;
  void *__dest;
  undefined2 *puVar7;
  
  puVar7 = (undefined2 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar7 >> 2) + 1;
  if (uVar1 >> 0x3e != 0) {
    FUN_00bbbfe4();
LAB_00bbc100:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar5 = param_1[2] - *param_1;
  uVar6 = (long)uVar5 >> 1;
  if (uVar6 <= uVar1) {
    uVar6 = uVar1;
  }
  if (0x7ffffffffffffffb < uVar5) {
    uVar6 = 0x3fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3e != 0) goto LAB_00bbc100;
    pvVar3 = operator_new(uVar6 << 2);
    puVar7 = (undefined2 *)((long)pvVar3 + (long)puVar7);
  }
  if (puVar7 != (undefined2 *)0x0) {
    uVar2 = *param_3;
    *puVar7 = *param_2;
    puVar7[1] = uVar2;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar7 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar4 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar7 + 2);
    param_1[2] = (long)((long)pvVar3 + uVar6 * 4);
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


// ===== 00bbc104  FUN_00bbc104 =====

undefined1  [16] FUN_00bbc104(undefined8 param_1,long *param_2,undefined8 param_3,uint *param_4)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  plVar4 = param_2 + 1;
  plVar6 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, *param_4 < *(uint *)((long)plVar3 + 0x1c)) {
        plVar2 = (long *)*plVar3;
        plVar6 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_00bbc170;
      }
      if (*param_4 <= *(uint *)((long)plVar3 + 0x1c)) {
        uVar5 = 0;
        goto LAB_00bbc1d0;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar6 = plVar3 + 1;
  }
LAB_00bbc170:
  plVar3 = (long *)operator_new(0x20);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar1 = *param_4;
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = (long)plVar4;
  *(uint *)((long)plVar3 + 0x1c) = uVar1;
  *plVar6 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar4 = (long *)*plVar6;
  }
  FUN_005d5b94(param_2[1],plVar4);
  uVar5 = 1;
  param_2[2] = param_2[2] + 1;
LAB_00bbc1d0:
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = plVar3;
  return auVar7;
}


// ===== 00bbc200  FUN_00bbc200 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00bbc200(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  bool bVar8;
  undefined8 ******ppppppuVar9;
  void *pvVar10;
  char *pcVar11;
  ulong uVar12;
  ushort *puVar13;
  undefined8 *extraout_x8;
  undefined1 uVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *******pppppppuVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  undefined8 *******pppppppuVar21;
  undefined1 auVar22 [16];
  undefined8 *******local_118;
  undefined8 *******local_110;
  long local_108;
  undefined8 *******local_100;
  uint local_f8;
  uint uStack_f4;
  void *local_f0;
  void *local_e8;
  undefined8 local_e0;
  undefined8 *******local_d8;
  undefined8 *******local_d0;
  undefined8 local_c8;
  undefined8 *******local_c0;
  undefined8 *******local_b8;
  long local_b0;
  ushort *local_a8;
  ushort *local_a0;
  ushort *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined8 *******local_70 [2];
  
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00bbc728(&local_90);
  if (((ulong)local_80 & 1) == 0) {
LAB_00bbc330:
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    return;
  }
  uVar19 = (uint)(*(ushort *)(local_90 + 0xc) >> 8) | (*(ushort *)(local_90 + 0xc) & 0xff00ff) << 8;
  uVar12 = (ulong)uVar19;
  uVar6 = (uint)(*(ushort *)(local_90 + 0xe) >> 8) | (*(ushort *)(local_90 + 0xe) & 0xff00ff) << 8;
  if (puStack_88 + -0x10 != (undefined1 *)((uVar6 + uVar12) * 4)) goto LAB_00bbc330;
  uVar1 = *(uint *)(local_90 + 4);
  uVar2 = *(uint *)(local_90 + 8);
  local_a8 = (ushort *)0x0;
  local_a0 = (ushort *)0x0;
  local_98 = (ushort *)0x0;
  if (uVar19 == 0) {
    lVar18 = 0;
  }
  else {
    local_a0 = (ushort *)operator_new(uVar12 * 4);
    lVar18 = 0;
    lVar20 = -0x10;
    local_98 = local_a0 + uVar12 * 2;
    local_a8 = local_a0;
    do {
      if (((ulong)local_80 & 1) == 0) goto LAB_00bbc60c;
      if (puStack_88 < (undefined1 *)(lVar18 + 0x14)) goto LAB_00bbc704;
      if (puStack_88 + lVar20 < (undefined1 *)0x4) goto LAB_00bbc620;
      uVar3 = *(ushort *)(local_90 + lVar18 + 0x10);
      local_100 = (undefined8 *******)
                  CONCAT62(local_100._2_6_,uVar3 >> 8 | (ushort)((uVar3 & 0xff00ff) << 8));
      uVar4 = *(ushort *)(local_90 + lVar18 + 0x12);
      local_c0 = (undefined8 *******)
                 CONCAT62(local_c0._2_6_,uVar4 >> 8 | (ushort)((uVar4 & 0xff00ff) << 8));
      if (local_a0 < local_98) {
        if (local_a0 == (ushort *)0x0) goto LAB_00bbc6dc;
        *local_a0 = uVar3 >> 8 | (ushort)((uVar3 & 0xff00ff) << 8);
        local_a0[1] = uVar4 >> 8 | (ushort)((uVar4 & 0xff00ff) << 8);
        local_a0 = local_a0 + 2;
      }
      else {
        local_a0 = (ushort *)FUN_00bbcf84(&local_a8,&local_100,&local_c0);
      }
      lVar18 = lVar18 + 4;
      lVar20 = lVar20 + -4;
    } while ((int)(uVar12 * 4) != (int)lVar18);
  }
  local_b8 = (undefined8 *******)0x0;
  local_b0 = 0;
  local_c0 = &local_b8;
  if (uVar6 == 0) {
    bVar8 = true;
  }
  else {
    lVar20 = 0;
    uVar19 = 0;
    do {
      if (((ulong)local_80 & 1) == 0) {
LAB_00bbc60c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                  );
      }
      if (puStack_88 < (undefined1 *)(lVar18 + 0x14)) {
LAB_00bbc704:
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_reader.h",0x53,
                     "FixedSize + variable_offset + SubSize <= data_.size()",&DAT_001f5fa0);
      }
      if ((ulong)((long)puStack_88 - (lVar18 + 0x10)) < 4) {
LAB_00bbc620:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0xbbc624);
        (*pcVar7)();
      }
      uVar5 = (*(uint *)(local_90 + lVar18 + 0x10) & 0xff00ff00) >> 8 |
              (*(uint *)(local_90 + lVar18 + 0x10) & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      pppppppuVar16 = &local_b8;
      pppppppuVar15 = local_b8;
      while (pppppppuVar21 = pppppppuVar16, pppppppuVar15 != (undefined8 *******)0x0) {
        while (pppppppuVar16 = pppppppuVar15, *(uint *)((long)pppppppuVar16 + 0x1c) <= uVar5) {
          if (uVar5 <= *(uint *)((long)pppppppuVar16 + 0x1c)) goto LAB_00bbc398;
          pppppppuVar15 = (undefined8 *******)pppppppuVar16[1];
          if ((undefined8 *******)pppppppuVar16[1] == (undefined8 *******)0x0) {
            pppppppuVar21 = pppppppuVar16 + 1;
            goto LAB_00bbc420;
          }
        }
        pppppppuVar15 = (undefined8 *******)*pppppppuVar16;
      }
LAB_00bbc420:
      ppppppuVar9 = (undefined8 ******)operator_new(0x20);
      if (ppppppuVar9 == (undefined8 ******)0x0) {
LAB_00bbc6dc:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(uint *)((long)ppppppuVar9 + 0x1c) = uVar5;
      *ppppppuVar9 = (undefined8 *****)0x0;
      ppppppuVar9[1] = (undefined8 *****)0x0;
      ppppppuVar9[2] = pppppppuVar16;
      *pppppppuVar21 = ppppppuVar9;
      if ((undefined8 *******)*local_c0 != (undefined8 *******)0x0) {
        ppppppuVar9 = *pppppppuVar21;
        local_c0 = (undefined8 *******)*local_c0;
      }
      FUN_005d5b94(local_b8,ppppppuVar9);
      lVar20 = local_b0 + 1;
      local_b0 = lVar20;
LAB_00bbc398:
      uVar19 = uVar19 + 1;
      lVar18 = lVar18 + 4;
    } while (uVar19 != uVar6);
    bVar8 = lVar20 == 0;
  }
  puVar13 = local_a8;
  uVar12 = (long)local_a0 - (long)local_a8;
  if (uVar12 == 0) {
    pvVar10 = (void *)0x0;
    lVar18 = 0;
LAB_00bbc4a4:
    uVar19 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    uVar19 = uVar19 >> 0x10 | uVar19 << 0x10;
    uVar6 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    local_110 = (undefined8 *******)0x0;
    local_108 = 0;
    pppppppuVar16 = &local_110;
    if (!bVar8) {
      local_118 = &local_110;
      local_110 = (undefined8 *******)FUN_00bbd08c(&local_118,local_b8,&local_118);
      local_110[2] = &local_110;
      pppppppuVar15 = local_110;
      do {
        pppppppuVar16 = pppppppuVar15;
        pppppppuVar15 = (undefined8 *******)*pppppppuVar16;
      } while ((undefined8 *******)*pppppppuVar16 != (undefined8 *******)0x0);
      local_108 = local_b0;
    }
    lVar20 = local_108;
    local_d0 = local_110;
    local_70[0] = &local_d8;
    local_118 = pppppppuVar16;
    local_d8 = &local_d0;
    if (local_108 != 0) {
      local_110[2] = &local_d0;
      local_110 = (undefined8 *******)0x0;
      local_108 = 0;
      local_118 = &local_110;
      local_d8 = pppppppuVar16;
    }
    param_1[4] = lVar18;
    param_1[5] = local_d8;
    param_1[2] = pvVar10;
    param_1[3] = lVar18;
    *param_1 = &PTR_FUN_00d47aa0;
    param_1[1] = CONCAT44(uVar6,uVar19);
    local_e8 = (void *)0x0;
    local_e0 = 0;
    local_f0 = (void *)0x0;
    ppppppuVar9 = (undefined8 ******)(param_1 + 6);
    *ppppppuVar9 = local_d0;
    param_1[7] = lVar20;
    if (lVar20 == 0) {
      param_1[5] = ppppppuVar9;
    }
    else {
      local_d0[2] = ppppppuVar9;
      local_d0 = (undefined8 *******)0x0;
      local_d8 = &local_d0;
    }
    local_c8 = 0;
    local_100 = (undefined8 *******)&PTR_FUN_00d47aa0;
    *(undefined1 *)(param_1 + 8) = 1;
    local_f8 = uVar19;
    uStack_f4 = uVar6;
    FUN_00ba1004(local_70,local_d0);
    if (local_f0 == (void *)0x0) {
LAB_00bbc634:
      local_70[0] = &local_118;
      FUN_00ba1004(local_70,local_110);
      local_100 = &local_c0;
      FUN_00ba1004(&local_100,local_b8);
      if (local_a8 == (ushort *)0x0) {
        return;
      }
      uVar17 = (ulong)((long)local_a0 + (-4 - ((long)local_a0 << 0x3e))) >> 2;
      uVar12 = (ulong)(((long)local_a8 - (long)local_a0 << 0x3e) - ((long)local_a8 - (long)local_a0)
                      ) >> 2;
      if (uVar17 <= uVar12) {
        uVar12 = uVar17;
      }
      puVar13 = local_a0;
      if ((1 < uVar12) && ((((int)local_a8 - (int)local_a0 | -(int)local_a0) & 3U) == 0)) {
        uVar12 = uVar12 & 0x3ffffffffffffffe;
        puVar13 = local_a0 + uVar12 * -2;
        do {
          uVar12 = uVar12 - 2;
        } while (uVar12 != 0);
      }
      do {
        if (puVar13 == local_a8) {
          local_a0 = local_a8;
          operator_delete(local_a8);
          return;
        }
        puVar13 = puVar13 + -2;
      } while (puVar13 != (ushort *)0x0);
    }
    else {
      uVar17 = (ulong)((long)local_e8 + (-4 - ((long)local_e8 << 0x3e))) >> 2;
      uVar12 = (ulong)(((long)local_f0 - (long)local_e8 << 0x3e) - ((long)local_f0 - (long)local_e8)
                      ) >> 2;
      if (uVar17 <= uVar12) {
        uVar12 = uVar17;
      }
      pvVar10 = local_e8;
      if ((1 < uVar12) && ((((int)local_f0 - (int)local_e8 | -(int)local_e8) & 3U) == 0)) {
        uVar12 = uVar12 & 0x3ffffffffffffffe;
        pvVar10 = (void *)((long)local_e8 + uVar12 * -4);
        do {
          uVar12 = uVar12 - 2;
        } while (uVar12 != 0);
      }
      do {
        if (pvVar10 == local_f0) {
          local_e8 = local_f0;
          operator_delete(local_f0);
          goto LAB_00bbc634;
        }
        pvVar10 = (void *)((long)pvVar10 + -4);
      } while (pvVar10 != (void *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  if (-1 < (long)uVar12) {
    pvVar10 = operator_new(uVar12);
    lVar18 = (long)pvVar10 + uVar12;
    memcpy(pvVar10,puVar13,uVar12);
    goto LAB_00bbc4a4;
  }
  auVar22 = FUN_00bbbfe4();
  uVar12 = auVar22._8_8_;
  pcVar11 = auVar22._0_8_;
  if (uVar12 < 0x10) {
    FUN_00bb8cbc(uVar12,0x10);
  }
  else if (*pcVar11 == '\x03') {
    uVar19 = (uint)CONCAT11(pcVar11[2],pcVar11[3]);
    uVar17 = (ulong)uVar19;
    if ((uVar19 < 0x10) || (uVar12 < uVar17)) {
      FUN_00bb8cd4(uVar17);
    }
    else if (uVar12 - uVar17 < 4) {
      if ((pcVar11[3] & 3U) == 0) {
        uVar14 = 1;
        *extraout_x8 = pcVar11;
        extraout_x8[1] = uVar17;
        goto LAB_00bbc7c8;
      }
      FUN_00bb8ce4(uVar17,4);
    }
    else {
      FUN_00bb8cdc(uVar12 - uVar17);
    }
  }
  else {
    FUN_00bb8cc4(*pcVar11,3);
  }
  uVar14 = 0;
  *(undefined1 *)extraout_x8 = 0;
LAB_00bbc7c8:
  *(undefined1 *)(extraout_x8 + 2) = uVar14;
  return;
}


// ===== 00bbc728  FUN_00bbc728 =====

void FUN_00bbc728(undefined8 *param_1,char *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined1 uVar3;
  
  if (param_3 < 0x10) {
    FUN_00bb8cbc(param_3,0x10);
  }
  else if (*param_2 == '\x03') {
    uVar1 = (uint)CONCAT11(param_2[2],param_2[3]);
    uVar2 = (ulong)uVar1;
    if ((uVar1 < 0x10) || (param_3 < uVar2)) {
      FUN_00bb8cd4(uVar2);
    }
    else if (param_3 - uVar2 < 4) {
      if ((param_2[3] & 3U) == 0) {
        uVar3 = 1;
        *param_1 = param_2;
        param_1[1] = uVar2;
        goto LAB_00bbc7c8;
      }
      FUN_00bb8ce4(uVar2,4);
    }
    else {
      FUN_00bb8cdc(param_3 - uVar2);
    }
  }
  else {
    FUN_00bb8cc4(*param_2,3);
  }
  uVar3 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00bbc7c8:
  *(undefined1 *)(param_1 + 2) = uVar3;
  return;
}


// ===== 00bbc7e8  FUN_00bbc7e8 =====

void FUN_00bbc7e8(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *local_8;
  
  *param_1 = &PTR_FUN_00d47aa0;
  local_8 = param_1 + 5;
  FUN_00ba1004(&local_8,param_1[6]);
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[3];
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
    param_1[3] = pvVar1;
    operator_delete(pvVar1);
  }
  return;
}


// ===== 00bbc8bc  FUN_00bbc8bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bbc8bc(long param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long lVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long *plVar9;
  code *pcVar10;
  bool bVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  lVar20 = *(long *)(param_1 + 0x38);
  uVar19 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
  uVar2 = ((long)(uVar19 * 0x40000000) >> 0x1e) + ((lVar20 << 0x20) >> 0x1e);
  uVar1 = uVar2 + 0x10;
  lVar21 = param_2[1] - *param_2;
  FUN_004efbd8(param_2,uVar1 + lVar21);
  puVar3 = (undefined1 *)(*param_2 + lVar21);
  *puVar3 = 3;
  puVar3[2] = (char)(uVar1 >> 8);
  puVar3[3] = (char)uVar1;
  if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x3f,"data.size() >= FixedSize",
                 &DAT_001f5fa0);
  }
  lVar15 = *param_2;
  uVar6 = *(undefined4 *)(param_1 + 8);
  auVar22._4_4_ = uVar6;
  auVar22._0_4_ = uVar6;
  auVar22._8_4_ = uVar6;
  auVar22._12_4_ = uVar6;
  auVar8._8_8_ = _UNK_001f3918;
  auVar8._0_8_ = _DAT_001f3910;
  auVar7._8_8_ = _UNK_001f3918;
  auVar7._0_8_ = _DAT_001f3910;
  auVar23._8_8_ = _UNK_001f3918;
  auVar23._0_8_ = _DAT_001f3910;
  lVar4 = lVar15 + lVar21;
  auVar23 = NEON_ushl(auVar22,auVar23,4);
  *(uint *)(lVar4 + 4) = CONCAT13(auVar23[0xc],CONCAT12(auVar23[8],CONCAT11(auVar23[4],auVar23[0])))
  ;
  uVar6 = *(undefined4 *)(param_1 + 0xc);
  auVar24._4_4_ = uVar6;
  auVar24._0_4_ = uVar6;
  auVar24._8_4_ = uVar6;
  auVar24._12_4_ = uVar6;
  lVar12 = (long)uVar19 >> 2;
  *(char *)(lVar4 + 0xf) = (char)lVar20;
  *(char *)(lVar4 + 0xd) = (char)lVar12;
  auVar23 = NEON_ushl(auVar24,auVar7,4);
  *(char *)(lVar4 + 0xc) = (char)((ulong)lVar12 >> 8);
  *(char *)(lVar4 + 0xe) = (char)((ulong)lVar20 >> 8);
  *(uint *)(lVar4 + 8) = CONCAT13(auVar23[0xc],CONCAT12(auVar23[8],CONCAT11(auVar23[4],auVar23[0])))
  ;
  if ((int)lVar12 < 1) {
    uVar13 = 0;
  }
  else {
    uVar14 = 0;
    uVar13 = 0;
    lVar20 = lVar21 + lVar15 + 0x10;
    uVar18 = uVar2;
    do {
      if (uVar1 < uVar13 + 0x14) goto LAB_00bbcae4;
      if (uVar18 < 4) goto LAB_00bbcacc;
      if ((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 2) <= uVar14) {
LAB_00bbcad0:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      uVar5 = *(ushort *)(*(long *)(param_1 + 0x10) + uVar13);
      *(ushort *)(lVar20 + uVar13) = uVar5 >> 8 | (ushort)((uVar5 & 0xff00ff) << 8);
      if ((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 2) <= uVar14)
      goto LAB_00bbcad0;
      lVar21 = *(long *)(param_1 + 0x10) + uVar13;
      lVar12 = lVar20 + uVar13;
      uVar13 = uVar13 + 4;
      uVar5 = *(ushort *)(lVar21 + 2);
      uVar14 = uVar14 + 1;
      uVar18 = uVar18 - 4;
      *(ushort *)(lVar12 + 2) = uVar5 >> 8 | (ushort)((uVar5 & 0xff00ff) << 8);
    } while ((uVar19 & 0x1fffffffc) != uVar13);
  }
  plVar16 = *(long **)(param_1 + 0x28);
  while( true ) {
    if (plVar16 == (long *)(param_1 + 0x30)) {
      return;
    }
    if (uVar1 < uVar13 + 0x14) break;
    if ((uVar1 < uVar13 + 0x10) || (uVar2 - uVar13 < 4)) {
LAB_00bbcacc:
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0xbbcad0);
      (*pcVar10)();
    }
    uVar6 = *(undefined4 *)((long)plVar16 + 0x1c);
    auVar25._4_4_ = uVar6;
    auVar25._0_4_ = uVar6;
    auVar25._8_4_ = uVar6;
    auVar25._12_4_ = uVar6;
    auVar23 = NEON_ushl(auVar25,auVar8,4);
    *(uint *)(lVar4 + uVar13 + 0x10) =
         CONCAT13(auVar23[0xc],CONCAT12(auVar23[8],CONCAT11(auVar23[4],auVar23[0])));
    plVar17 = plVar16;
    plVar9 = (long *)plVar16[1];
    if ((long *)plVar16[1] == (long *)0x0) {
      do {
        plVar16 = (long *)plVar17[2];
        bVar11 = plVar17 != (long *)*plVar16;
        plVar17 = plVar16;
      } while (bVar11);
    }
    else {
      do {
        plVar16 = plVar9;
        plVar9 = (long *)*plVar16;
      } while ((long *)*plVar16 != (long *)0x0);
    }
    uVar13 = uVar13 + 4;
  }
LAB_00bbcae4:
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x58,
               "FixedSize + variable_offset + SubSize <= data_.size()",&DAT_001f5fa0);
}


// ===== 00bbcb24  FUN_00bbcb24 =====

/* WARNING: Removing unreachable block (ram,0x00bbcde4) */
/* WARNING: Removing unreachable block (ram,0x00bbccb4) */
/* WARNING: Removing unreachable block (ram,0x00bbcbb0) */
/* WARNING: Removing unreachable block (ram,0x00bbcc14) */
/* WARNING: Removing unreachable block (ram,0x00bbcd18) */
/* WARNING: Removing unreachable block (ram,0x00bbce60) */

void FUN_00bbcb24(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort uVar4;
  undefined8 ***pppuVar5;
  long *plVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  ushort *puVar11;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 **local_98;
  ulong uStack_90;
  ulong local_88;
  undefined8 **local_80;
  ulong uStack_78;
  ulong local_70;
  
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  FUN_00547cac(&local_b0,"SACK, cum_ack_tsn=",0x12);
  local_80 = (undefined8 ***)0x0;
  uStack_78 = 0;
  local_70 = 0;
  FUN_005fa03c(&local_80,0x16,*(undefined4 *)(param_2 + 8));
  uVar1 = uStack_78;
  pppuVar5 = (undefined8 ***)local_80;
  if (-1 < (long)local_70) {
    uVar1 = local_70 >> 0x38;
    pppuVar5 = &local_80;
  }
  FUN_00547cac(&local_b0,pppuVar5,uVar1);
  FUN_00547cac(&local_b0,", a_rwnd=",9);
  local_80 = (undefined8 ***)0x0;
  uStack_78 = 0;
  local_70 = 0;
  FUN_005fa03c(&local_80,0x16,*(undefined4 *)(param_2 + 0xc));
  uVar1 = uStack_78;
  pppuVar5 = (undefined8 ***)local_80;
  if (-1 < (long)local_70) {
    uVar1 = local_70 >> 0x38;
    pppuVar5 = &local_80;
  }
  FUN_00547cac(&local_b0,pppuVar5,uVar1);
  puVar11 = *(ushort **)(param_2 + 0x10);
  puVar2 = *(ushort **)(param_2 + 0x18);
  if (puVar11 != puVar2) {
    do {
      iVar10 = *(int *)(param_2 + 8);
      uVar3 = *puVar11;
      uVar4 = puVar11[1];
      FUN_00547cac(&local_b0,", gap=",6);
      local_80 = (undefined8 ***)0x0;
      uStack_78 = 0;
      local_70 = 0;
      FUN_005fa03c(&local_80,0x16,iVar10 + (uint)uVar3);
      uVar1 = uStack_78;
      pppuVar5 = (undefined8 ***)local_80;
      if (-1 < (long)local_70) {
        uVar1 = local_70 >> 0x38;
        pppuVar5 = &local_80;
      }
      FUN_00547cac(&local_b0,pppuVar5,uVar1);
      FUN_00547cac(&local_b0,&DAT_001a23a8,2);
      local_80 = (undefined8 ***)0x0;
      uStack_78 = 0;
      local_70 = 0;
      FUN_005fa03c(&local_80,0x16,iVar10 + (uint)uVar4);
      uVar1 = uStack_78;
      pppuVar5 = (undefined8 ***)local_80;
      if (-1 < (long)local_70) {
        uVar1 = local_70 >> 0x38;
        pppuVar5 = &local_80;
      }
      FUN_00547cac(&local_b0,pppuVar5,uVar1);
      puVar11 = puVar11 + 2;
    } while (puVar11 != puVar2);
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    FUN_00547cac(&local_b0,", dup_tsns=",0xb);
    local_98 = (undefined8 ***)0x0;
    uStack_90 = 0;
    local_88 = 0;
    if (*(long **)(param_2 + 0x28) != (long *)(param_2 + 0x30)) {
      iVar10 = 0;
      plVar8 = *(long **)(param_2 + 0x28);
      do {
        if (0 < iVar10) {
          FUN_00547cac(&local_98,&DAT_001ea264,1);
        }
        local_80 = (undefined8 ***)0x0;
        uStack_78 = 0;
        local_70 = 0;
        FUN_005fa03c(&local_80,0x16,*(undefined4 *)((long)plVar8 + 0x1c));
        uVar1 = uStack_78;
        pppuVar5 = (undefined8 ***)local_80;
        if (-1 < (long)local_70) {
          uVar1 = local_70 >> 0x38;
          pppuVar5 = &local_80;
        }
        FUN_00547cac(&local_98,pppuVar5,uVar1);
        plVar6 = (long *)plVar8[1];
        if ((long *)plVar8[1] == (long *)0x0) {
          do {
            plVar9 = (long *)plVar8[2];
            bVar7 = plVar8 != (long *)*plVar9;
            plVar8 = plVar9;
          } while (bVar7);
        }
        else {
          do {
            plVar9 = plVar6;
            plVar6 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
        iVar10 = iVar10 + 1;
        plVar8 = plVar9;
      } while (plVar9 != (long *)(param_2 + 0x30));
    }
    local_70 = local_88;
    uStack_78 = uStack_90;
    local_80 = local_98;
    uVar1 = uStack_90;
    pppuVar5 = (undefined8 ***)local_98;
    if (-1 < (long)local_88) {
      uVar1 = local_88 >> 0x38;
      pppuVar5 = &local_80;
    }
    FUN_00547cac(&local_b0,pppuVar5,uVar1);
  }
  param_1[1] = uStack_a8;
  *param_1 = local_b0;
  param_1[2] = local_a0;
  return;
}


// ===== 00bbcea4  FUN_00bbcea4 =====

void FUN_00bbcea4(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *local_8;
  
  *param_1 = &PTR_FUN_00d47aa0;
  local_8 = param_1 + 5;
  FUN_00ba1004(&local_8,param_1[6]);
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[3];
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
    param_1[3] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00bbcf84  FUN_00bbcf84 =====

undefined2 * FUN_00bbcf84(long *param_1,undefined2 *param_2,undefined2 *param_3)

{
  ulong uVar1;
  undefined2 uVar2;
  void *pvVar3;
  void *pvVar4;
  size_t __n;
  ulong uVar5;
  ulong uVar6;
  void *__dest;
  undefined2 *puVar7;
  
  puVar7 = (undefined2 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar7 >> 2) + 1;
  if (uVar1 >> 0x3e != 0) {
    FUN_00bbbfe4();
LAB_00bbd088:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar5 = param_1[2] - *param_1;
  uVar6 = (long)uVar5 >> 1;
  if (uVar6 <= uVar1) {
    uVar6 = uVar1;
  }
  if (0x7ffffffffffffffb < uVar5) {
    uVar6 = 0x3fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3e != 0) goto LAB_00bbd088;
    pvVar3 = operator_new(uVar6 << 2);
    puVar7 = (undefined2 *)((long)pvVar3 + (long)puVar7);
  }
  if (puVar7 != (undefined2 *)0x0) {
    uVar2 = *param_3;
    *puVar7 = *param_2;
    puVar7[1] = uVar2;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar7 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar4 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar7 + 2);
    param_1[2] = (long)((long)pvVar3 + uVar6 * 4);
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


// ===== 00bbd08c  FUN_00bbd08c =====

long * FUN_00bbd08c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_2 == (undefined8 *)0x0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = (long *)operator_new(0x20);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar5 = *param_2;
    *(undefined4 *)((long)plVar2 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
    lVar3 = FUN_00bbd08c(param_1,uVar5,param_3);
    lVar4 = FUN_00bbd08c(param_1,param_2[1],param_3);
    uVar1 = *(undefined1 *)(param_2 + 3);
    *plVar2 = lVar3;
    plVar2[1] = lVar4;
    *(undefined1 *)(plVar2 + 3) = uVar1;
    if (lVar3 != 0) {
      *(long **)(lVar3 + 0x10) = plVar2;
    }
    if (lVar4 != 0) {
      *(long **)(lVar4 + 0x10) = plVar2;
    }
  }
  return plVar2;
}


// ===== 00bbd144  FUN_00bbd144 =====

undefined4 FUN_00bbd144(undefined8 param_1,long param_2)

{
  ushort uVar1;
  bool bVar2;
  ushort *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  ushort *local_40;
  ushort *puStack_38;
  undefined1 *local_30;
  
  puStack_38 = (ushort *)&DAT_aaaaaaaaaaaaaaaa;
  local_40 = (ushort *)&DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00bba4b8(&local_40,param_2 + 8);
  lVar5 = ((long)puStack_38 - (long)local_40 >> 3) * -0x5555555555555555;
  if (lVar5 == 2) {
    if (puStack_38 == local_40) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                );
    }
    uVar1 = *local_40;
    if (uVar1 < 0x10) {
      if (uVar1 == 0xd) {
        uVar1 = local_40[0xc];
        bVar2 = uVar1 == 0xe;
        goto LAB_00bbd230;
      }
      if ((uVar1 == 0xe) && (local_40[0xc] == 0xd)) goto LAB_00bbd1a8;
    }
    else if (uVar1 == 0x10) {
      uVar1 = local_40[0xc];
      bVar2 = uVar1 == 0xd;
LAB_00bbd230:
      uVar7 = 1;
      if ((bVar2) || (uVar1 == 0x10)) goto LAB_00bbd26c;
    }
    else if (uVar1 == 0x11) {
      if (local_40[0xc] == 0x12) goto LAB_00bbd1a8;
    }
    else if ((uVar1 == 0x12) && (local_40[0xc] == 0x11)) {
LAB_00bbd1a8:
      uVar7 = 1;
      goto LAB_00bbd26c;
    }
  }
  else if ((lVar5 == 1) && (*local_40 - 0xd < 6)) goto LAB_00bbd1a8;
  uVar4 = FUN_004022fc();
  if ((uVar4 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../net/dcsctp/socket/stream_reset_handler.cc",0x2aa,
                 "Invalid set of RE-CONFIG parameters");
  }
  uVar7 = 0;
LAB_00bbd26c:
  if (local_40 != (ushort *)0x0) {
    uVar4 = (ulong)(((long)local_40 - (long)puStack_38) * 0x1555555555555555) >> 3;
    uVar6 = (long)puStack_38 * -0x1555555555555555 - 8U >> 3;
    if (uVar6 <= uVar4) {
      uVar4 = uVar6;
    }
    puVar3 = puStack_38;
    if ((1 < uVar4) && ((((int)local_40 - (int)puStack_38 | -(int)puStack_38) & 7U) == 0)) {
      uVar4 = uVar4 & 0x1ffffffffffffffe;
      puVar3 = puStack_38 + uVar4 * -0xc;
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    while (puVar3 != local_40) {
      puVar3 = puVar3 + -0xc;
      if (puVar3 == (ushort *)0x0) {
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
  return uVar7;
}


// ===== 00bbd338  FUN_00bbd338 =====

void FUN_00bbd338(undefined8 *param_1,undefined8 param_2,long param_3)

{
  short *psVar1;
  short sVar2;
  short *psVar3;
  ulong uVar4;
  ulong uVar5;
  short *local_68;
  short *local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uVar4 = FUN_00bbd144();
  if ((uVar4 & 1) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    FUN_00bba4b8(&local_68,param_3 + 8);
    psVar3 = local_60;
    for (psVar1 = local_68; psVar1 != psVar3; psVar1 = psVar1 + 0xc) {
      sVar2 = *psVar1;
      if (sVar2 == 0x10) {
        FUN_00bbdaec(param_2,psVar1);
      }
      else if (sVar2 == 0xe) {
        FUN_00bbd858(param_2,psVar1,&local_50);
      }
      else if (sVar2 == 0xd) {
        FUN_00bbd4c8(param_2,psVar1,&local_50);
      }
    }
    if (local_68 != (short *)0x0) {
      uVar4 = (ulong)(((long)local_68 - (long)local_60) * 0x1555555555555555) >> 3;
      uVar5 = (long)local_60 * -0x1555555555555555 - 8U >> 3;
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
      if ((1 < uVar4) && ((((int)local_68 - (int)local_60 | -(int)local_60) & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        local_60 = local_60 + uVar4 * -0xc;
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (local_60 != local_68) {
        local_60 = local_60 + -0xc;
        if (local_60 == (short *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      operator_delete(local_68);
    }
    *(undefined1 *)(param_1 + 3) = 1;
    param_1[1] = uStack_48;
    *param_1 = local_50;
    param_1[2] = local_40;
  }
  return;
}


// ===== 00bbd4c8  FUN_00bbd4c8 =====

void FUN_00bbd4c8(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined *local_80;
  uint local_78;
  int iStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  undefined1 uStack_64;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00bbe7ac(&local_60,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  uVar5 = uStack_68;
  uVar4 = uStack_6c;
  uVar2 = uStack_70;
  if (((ulong)local_30 & 1) == 0) {
    plVar6 = (long *)(**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
    (**(code **)(*plVar6 + 0x60))(plVar6,3,"Failed to parse Outgoing Reset command",0x26);
    goto joined_r0x00bbd580;
  }
  uVar8 = (ulong)puStack_58 & 0xffffffff;
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    uVar1 = (uint)puStack_58 - *(uint *)(param_1 + 0x38);
    bVar3 = *(uint *)(param_1 + 0x38) <= (uint)puStack_58 && uVar1 != 0;
    if (uVar1 != 0x80000000) {
      bVar3 = uVar1 != 0xffffffff && (int)(uVar1 + 1) < 0 == SCARRY4(uVar1,1);
    }
    uVar8 = (ulong)uVar1;
    if (!bVar3) {
      uVar8 = (ulong)uVar1 | 0xffffffff00000000;
    }
    uVar8 = uVar8 + *(long *)(param_1 + 0x30);
  }
  *(ulong *)(param_1 + 0x30) = uVar8;
  *(uint *)(param_1 + 0x38) = (uint)puStack_58;
  iVar11 = 0;
  if (uVar8 != *(ulong *)(param_1 + 0x88) + 1) {
    iVar11 = 2;
  }
  if (uVar8 == *(ulong *)(param_1 + 0x88)) {
    iVar11 = 1;
  }
  *(undefined1 *)(param_1 + 0x3c) = 1;
  if (iVar11 == 1) {
    iStack_74 = *(int *)(param_1 + 0x90);
    if (iStack_74 == 6) goto LAB_00bbd5e0;
LAB_00bbd718:
    local_78 = (uint)puStack_58;
    plVar6 = *(long **)(param_3 + 8);
    uStack_70 = uStack_70 & 0xffffff00;
    local_80 = PTR_DAT_00d52e48 + 0x10;
    uStack_6c = uStack_6c & 0xffffff00;
    uVar1 = uStack_6c;
    uStack_68 = uStack_68 & 0xffffff00;
    uStack_64 = 0;
    if (plVar6 < *(long **)(param_3 + 0x10)) {
      if (plVar6 == (long *)0x0) {
LAB_00bbd830:
        uStack_64 = 0;
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *plVar6 = (long)(PTR_DAT_00d52e48 + 0x10);
      uStack_6c._1_3_ = SUB43(uVar4,1);
      *(ulong *)((long)plVar6 + 0x15) = (ulong)(CONCAT43(uVar5,uStack_6c._1_3_) & 0xffffff00ffffff);
      plVar6[2] = CONCAT44(uVar4,uVar2) & 0xffffff00ffffff00;
      plVar6[1] = CONCAT44(iStack_74,(uint)puStack_58);
      *(long **)(param_3 + 8) = plVar6 + 4;
      uStack_6c = uVar1;
      goto joined_r0x00bbd580;
    }
LAB_00bbd820:
    uStack_64 = 0;
    plVar7 = (long *)FUN_00bbe554(param_3,&local_80);
  }
  else {
    if (iVar11 == 2) {
      iStack_74 = 5;
      goto LAB_00bbd718;
    }
LAB_00bbd5e0:
    lVar9 = *(long *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x88) = uVar8;
    uVar8 = (ulong)local_50 & 0xffffffff;
    if (*(char *)(lVar9 + 0x34) == '\x01') {
      uVar2 = (uint)local_50 - *(uint *)(lVar9 + 0x30);
      bVar3 = *(uint *)(lVar9 + 0x30) <= (uint)local_50 && uVar2 != 0;
      if (uVar2 != 0x80000000) {
        bVar3 = uVar2 != 0xffffffff && (int)(uVar2 + 1) < 0 == SCARRY4(uVar2,1);
      }
      uVar8 = (ulong)uVar2;
      if (!bVar3) {
        uVar8 = (ulong)uVar2 | 0xffffffff00000000;
      }
      uVar8 = uVar8 + *(long *)(lVar9 + 0x28);
    }
    puVar10 = (undefined1 *)0x0;
    if ((long)local_40 - (long)puStack_48 != 0) {
      puVar10 = puStack_48;
    }
    if (*(long *)(lVar9 + 0x38) < (long)uVar8) {
      FUN_00bac2dc();
      iStack_74 = 6;
    }
    else {
      FUN_00bac1f4(*(undefined8 *)(param_1 + 0x20),puVar10,(long)local_40 - (long)puStack_48 >> 1);
      plVar6 = (long *)(**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
      if (((ulong)local_30 & 1) == 0) goto LAB_00bbd844;
      puVar10 = (undefined1 *)0x0;
      if ((long)local_40 - (long)puStack_48 != 0) {
        puVar10 = puStack_48;
      }
      (**(code **)(*plVar6 + 0x98))(plVar6,puVar10,(long)local_40 - (long)puStack_48 >> 1);
      iStack_74 = 1;
    }
    uVar5 = uStack_68;
    uVar4 = uStack_6c;
    uVar2 = uStack_70;
    *(int *)(param_1 + 0x90) = iStack_74;
    if (((ulong)local_30 & 1) == 0) {
LAB_00bbd844:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    uStack_70 = uStack_70 & 0xffffff00;
    local_78 = (uint)puStack_58;
    plVar6 = *(long **)(param_3 + 8);
    local_80 = PTR_DAT_00d52e48 + 0x10;
    uStack_6c = uStack_6c & 0xffffff00;
    uVar1 = uStack_6c;
    uStack_68 = uStack_68 & 0xffffff00;
    uStack_64 = 0;
    if (*(long **)(param_3 + 0x10) <= plVar6) goto LAB_00bbd820;
    if (plVar6 == (long *)0x0) goto LAB_00bbd830;
    plVar7 = plVar6 + 4;
    *plVar6 = (long)(PTR_DAT_00d52e48 + 0x10);
    uStack_6c._1_3_ = SUB43(uVar4,1);
    *(ulong *)((long)plVar6 + 0x15) = (ulong)(CONCAT43(uVar5,uStack_6c._1_3_) & 0xffffff00ffffff);
    plVar6[2] = CONCAT44(uVar4,uVar2) & 0xffffff00ffffff00;
    plVar6[1] = CONCAT44(iStack_74,(uint)puStack_58);
    uStack_6c = uVar1;
  }
  *(long **)(param_3 + 8) = plVar7;
joined_r0x00bbd580:
  if ((((ulong)local_30 & 1) != 0) &&
     (local_60 = PTR_DAT_00d52e40 + 0x10, puStack_48 != (undefined1 *)0x0)) {
    uVar8 = (ulong)(((long)puStack_48 - (long)local_40 << 0x3f) -
                   ((long)puStack_48 - (long)local_40)) >> 1;
    if ((ulong)(local_40 + ((long)local_40 << 0x3f) + -2) >> 1 <= uVar8) {
      uVar8 = (ulong)(local_40 + ((long)local_40 << 0x3f) + -2) >> 1;
    }
    puVar10 = local_40;
    if ((1 < uVar8) && ((((int)puStack_48 - (uint)local_40 | (uint)local_40) & 1) == 0)) {
      uVar8 = uVar8 & 0x7ffffffffffffffe;
      puVar10 = local_40 + uVar8 * -2;
      do {
        uVar8 = uVar8 - 2;
      } while (uVar8 != 0);
    }
    while (puVar10 != puStack_48) {
      puVar10 = puVar10 + -2;
      if (puVar10 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    local_40 = puStack_48;
    operator_delete(puStack_48);
  }
  return;
}


// ===== 00bbd858  FUN_00bbd858 =====

void FUN_00bbd858(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  bool bVar3;
  uint3 uVar4;
  uint3 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined **local_70;
  uint local_68;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  undefined1 uStack_54;
  undefined **local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  undefined1 *local_28;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00bbf33c(&local_50,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  if (((ulong)local_28 & 1) == 0) {
    plVar6 = (long *)(**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
    (**(code **)(*plVar6 + 0x60))(plVar6,3,"Failed to parse Incoming Reset command",0x26);
  }
  else {
    uVar10 = (ulong)puStack_48 & 0xffffffff;
    if (*(char *)(param_1 + 0x3c) == '\x01') {
      uVar2 = (uint)puStack_48 - *(uint *)(param_1 + 0x38);
      bVar3 = *(uint *)(param_1 + 0x38) <= (uint)puStack_48 && uVar2 != 0;
      if (uVar2 != 0x80000000) {
        bVar3 = uVar2 != 0xffffffff && (int)(uVar2 + 1) < 0 == SCARRY4(uVar2,1);
      }
      uVar10 = (ulong)uVar2;
      if (!bVar3) {
        uVar10 = (ulong)uVar2 | 0xffffffff00000000;
      }
      uVar10 = uVar10 + *(long *)(param_1 + 0x30);
    }
    *(ulong *)(param_1 + 0x30) = uVar10;
    *(uint *)(param_1 + 0x38) = (uint)puStack_48;
    *(undefined1 *)(param_1 + 0x3c) = 1;
    uVar4 = iStack_60._1_3_;
    uVar5 = iStack_5c._1_3_;
    if ((uVar10 == *(ulong *)(param_1 + 0x88)) || (uVar10 == *(ulong *)(param_1 + 0x88) + 1)) {
      local_68 = (uint)puStack_48;
      uStack_64 = 0;
      puVar1 = *(undefined8 **)(param_3 + 8);
      iStack_60 = (uint)iStack_60._1_3_ << 8;
      iStack_5c = (uint)iStack_5c._1_3_ << 8;
      local_70 = &PTR_FUN_00d47b00;
      iStack_58 = (uint)iStack_58._1_3_ << 8;
      uStack_54 = 0;
      if (puVar1 < *(undefined8 **)(param_3 + 0x10)) {
        if (puVar1 == (undefined8 *)0x0) goto LAB_00bbdab0;
        puVar7 = puVar1 + 4;
        *puVar1 = &PTR_FUN_00d47b00;
        *(ulong *)((long)puVar1 + 0x15) = (ulong)CONCAT43(iStack_58,uVar5);
        puVar1[2] = (ulong)CONCAT43(iStack_5c,uVar4) << 8;
        puVar1[1] = (ulong)puStack_48 & 0xffffffff;
      }
      else {
        puVar7 = (undefined8 *)FUN_00bbe554(param_3,&local_70);
      }
      *(undefined8 **)(param_3 + 8) = puVar7;
      *(ulong *)(param_1 + 0x88) = uVar10;
      *(undefined4 *)(param_1 + 0x90) = 0;
    }
    else {
      local_68 = (uint)puStack_48;
      uStack_64 = 5;
      plVar6 = *(long **)(param_3 + 8);
      iStack_60 = (uint)iStack_60._1_3_ << 8;
      local_70 = (undefined **)(PTR_DAT_00d52e48 + 0x10);
      iStack_5c = (uint)iStack_5c._1_3_ << 8;
      iStack_58 = (uint)iStack_58._1_3_ << 8;
      uStack_54 = 0;
      if (plVar6 < *(long **)(param_3 + 0x10)) {
        if (plVar6 == (long *)0x0) {
LAB_00bbdab0:
          uStack_54 = 0;
          local_68 = (uint)puStack_48;
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        plVar8 = plVar6 + 4;
        *plVar6 = (long)(PTR_DAT_00d52e48 + 0x10);
        *(ulong *)((long)plVar6 + 0x15) = (ulong)CONCAT43(iStack_58,uVar5);
        plVar6[2] = (ulong)CONCAT43(iStack_5c,uVar4) << 8;
        plVar6[1] = CONCAT44(5,(uint)puStack_48);
      }
      else {
        plVar8 = (long *)FUN_00bbe554(param_3,&local_70);
      }
      *(long **)(param_3 + 8) = plVar8;
    }
  }
  if (((char)local_28 == '\x01') && (local_50 = &PTR_FUN_00d47b30, local_40 != (undefined1 *)0x0)) {
    uVar10 = (ulong)(((long)local_40 - (long)puStack_38 << 0x3f) -
                    ((long)local_40 - (long)puStack_38)) >> 1;
    if ((ulong)(puStack_38 + ((long)puStack_38 << 0x3f) + -2) >> 1 <= uVar10) {
      uVar10 = (ulong)(puStack_38 + ((long)puStack_38 << 0x3f) + -2) >> 1;
    }
    puVar9 = puStack_38;
    if ((1 < uVar10) && ((((int)local_40 - (uint)puStack_38 | (uint)puStack_38) & 1) == 0)) {
      uVar10 = uVar10 & 0x7ffffffffffffffe;
      puVar9 = puStack_38 + uVar10 * -2;
      do {
        uVar10 = uVar10 - 2;
      } while (uVar10 != 0);
    }
    while (puVar9 != local_40) {
      puVar9 = puVar9 + -2;
      if (puVar9 == (undefined1 *)0x0) {
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


// ===== 00bbdaec  FUN_00bbdaec =====

void FUN_00bbdaec(long param_1,long param_2)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 *local_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00bbefb4(&local_60,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  if (((ulong)local_40 & 1) == 0) {
    plVar1 = (long *)(**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
    (**(code **)(*plVar1 + 0x60))(plVar1,3,"Failed to parse Reconfiguration Response command",0x30);
  }
  else if (((*(char *)(param_1 + 0x80) == '\x01') && (*(char *)(param_1 + 0x54) == '\x01')) &&
          ((int)uStack_58 == *(int *)(param_1 + 0x50))) {
    FUN_00ba3ee4(*(undefined8 *)(param_1 + 0x40));
    if (((ulong)local_40 & 1) == 0) {
LAB_00bbdd54:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    if (uStack_58._4_4_ - 2 < 4) {
      plVar1 = (long *)(**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
      if (((*(byte *)(param_1 + 0x80) & 1) == 0) || (((ulong)local_40 & 1) == 0)) goto LAB_00bbdd54;
      lVar7 = *(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60);
      lVar3 = 0;
      if (lVar7 != 0) {
        lVar3 = *(long *)(param_1 + 0x60);
      }
      auVar8 = FUN_00bbef90(uStack_58._4_4_);
      (**(code **)(*plVar1 + 0x88))(plVar1,lVar3,lVar7 >> 1,auVar8._0_8_,auVar8._8_8_);
      if (*(char *)(param_1 + 0x80) == '\x01') {
        pvVar2 = *(void **)(param_1 + 0x60);
        if (pvVar2 != (void *)0x0) {
          pvVar4 = *(void **)(param_1 + 0x68);
          uVar6 = (ulong)((long)pvVar4 + ((long)pvVar4 << 0x3f) + -2) >> 1;
          uVar5 = (ulong)(((long)pvVar2 - (long)pvVar4 << 0x3f) - ((long)pvVar2 - (long)pvVar4)) >>
                  1;
          if (uVar6 <= uVar5) {
            uVar5 = uVar6;
          }
          if ((1 < uVar5) && ((((int)pvVar2 - (uint)pvVar4 | (uint)pvVar4) & 1) == 0)) {
            uVar5 = uVar5 & 0x7ffffffffffffffe;
            pvVar4 = (void *)((long)pvVar4 + uVar5 * -2);
            do {
              uVar5 = uVar5 - 2;
            } while (uVar5 != 0);
          }
          while (pvVar4 != pvVar2) {
            pvVar4 = (void *)((long)pvVar4 + -2);
            if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
          }
          *(void **)(param_1 + 0x68) = pvVar2;
          operator_delete(pvVar2);
        }
        *(undefined1 *)(param_1 + 0x80) = 0;
      }
      FUN_00bb4310(*(undefined8 *)(param_1 + 0x28));
    }
    else if (uStack_58._4_4_ < 2) {
      plVar1 = (long *)(**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
      if ((*(byte *)(param_1 + 0x80) & 1) == 0) goto LAB_00bbdd54;
      lVar7 = *(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60);
      lVar3 = 0;
      if (lVar7 != 0) {
        lVar3 = *(long *)(param_1 + 0x60);
      }
      (**(code **)(*plVar1 + 0x90))(plVar1,lVar3,lVar7 >> 1);
      FUN_00bbe6f0(param_1 + 0x50);
      FUN_00bb42fc(*(undefined8 *)(param_1 + 0x28));
    }
    else if (uStack_58._4_4_ == 6) {
      if ((*(byte *)(param_1 + 0x80) & 1) == 0) goto LAB_00bbdd54;
      lVar7 = *(long *)(param_1 + 0x40);
      *(undefined1 *)(param_1 + 0x78) = 1;
      lVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x38))();
      if (86399999999 < lVar3) {
        lVar3 = 86400000000;
      }
      *(long *)(lVar7 + 0x90) = lVar3;
      FUN_00ba3f30(*(undefined8 *)(param_1 + 0x40));
    }
  }
  return;
}


// ===== 00bbdd68  FUN_00bbdd68 =====

void FUN_00bbdd68(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined **local_c0;
  void *local_b8;
  void *pvStack_b0;
  undefined8 local_a8;
  void *local_a0;
  void *pvStack_98;
  undefined8 local_90;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined8 *local_50;
  undefined8 *puStack_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  puStack_48 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  local_50 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00bbd338(&local_50);
  puVar1 = puStack_48;
  puVar3 = local_50;
  if ((char)local_38 != '\x01') {
    plVar2 = (long *)(**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
                    /* WARNING: Could not recover jumptable at 0x00bbdf64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x60))(plVar2,3,"Failed to parse RE-CONFIG command",0x21);
    return;
  }
  if (local_50 != puStack_48) {
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    local_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    (**(code **)(**(long **)(param_1 + 0x10) + 0x58))(&local_80);
    local_a0 = (void *)0x0;
    pvStack_98 = (void *)0x0;
    local_90 = 0;
    do {
      FUN_00bba458(&local_a0,puVar3);
      local_a8 = local_90;
      pvStack_b0 = pvStack_98;
      local_b8 = local_a0;
      puVar3 = puVar3 + 4;
    } while (puVar3 != puVar1);
    local_90 = 0;
    local_a0 = (void *)0x0;
    pvStack_98 = (void *)0x0;
    local_c0 = &PTR_FUN_00d47b60;
    FUN_00ba4854(&local_80,&local_c0);
    local_c0 = &PTR_FUN_00d47b60;
    if (local_b8 != (void *)0x0) {
      if ((long)pvStack_b0 - 1U < (ulong)((long)pvStack_b0 - (long)local_b8)) goto LAB_00bbdf68;
      pvStack_b0 = local_b8;
      operator_delete(local_b8);
    }
    (**(code **)(**(long **)(param_1 + 0x10) + 0x60))(*(long **)(param_1 + 0x10),&local_80);
    if (local_a0 != (void *)0x0) {
      if ((long)pvStack_98 - 1U < (ulong)((long)pvStack_98 - (long)local_a0)) goto LAB_00bbdf68;
      pvStack_98 = local_a0;
      operator_delete(local_a0);
    }
    if (local_70 != (undefined1 *)0x0) {
      if (local_68 + -1 < local_68 + -(long)local_70) {
LAB_00bbdf68:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      local_68 = local_70;
      operator_delete(local_70);
    }
  }
  puVar1 = local_50;
  puVar3 = puStack_48;
  if (local_50 != (undefined8 *)0x0) {
    while (puVar1 != puVar3) {
      puVar3 = puVar3 + -4;
      if (puVar3 == (undefined8 *)0x0) goto LAB_00bbdf68;
      (**(code **)*puVar3)(puVar3);
    }
    puStack_48 = puVar1;
    operator_delete(local_50);
  }
  return;
}


// ===== 00bbdf7c  FUN_00bbdf7c =====

void FUN_00bbdf7c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_50;
  long lStack_48;
  long local_40;
  long local_38;
  
  if (((*(byte *)(param_2 + 0x80) & 1) == 0) &&
     (uVar3 = FUN_00bb42a8(*(undefined8 *)(param_2 + 0x28)), (uVar3 & 1) != 0)) {
    uVar2 = FUN_00bb5c98(*(long *)(param_2 + 0x28) + 0x188);
    FUN_00bb42bc(&local_50,*(undefined8 *)(param_2 + 0x28));
    if (*(char *)(param_2 + 0x80) == '\x01') {
      pvVar4 = *(void **)(param_2 + 0x60);
      if (pvVar4 != (void *)0x0) {
        pvVar6 = *(void **)(param_2 + 0x68);
        uVar7 = (ulong)((long)pvVar6 + ((long)pvVar6 << 0x3f) + -2) >> 1;
        uVar3 = (ulong)(((long)pvVar4 - (long)pvVar6 << 0x3f) - ((long)pvVar4 - (long)pvVar6)) >> 1;
        if (uVar7 <= uVar3) {
          uVar3 = uVar7;
        }
        if ((1 < uVar3) && ((((int)pvVar4 - (uint)pvVar6 | (uint)pvVar6) & 1) == 0)) {
          uVar3 = uVar3 & 0x7ffffffffffffffe;
          pvVar6 = (void *)((long)pvVar6 + uVar3 * -2);
          do {
            uVar3 = uVar3 - 2;
          } while (uVar3 != 0);
        }
        while (pvVar6 != pvVar4) {
          pvVar6 = (void *)((long)pvVar6 + -2);
          if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        *(void **)(param_2 + 0x68) = pvVar4;
        operator_delete(pvVar4);
      }
      *(undefined1 *)(param_2 + 0x80) = 0;
    }
    if (param_2 == -0x50) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(undefined4 *)(param_2 + 0x58) = uVar2;
    *(undefined1 *)(param_2 + 0x50) = 0;
    *(undefined1 *)(param_2 + 0x54) = 0;
    lVar8 = *(long *)(param_2 + 0x40);
    *(long *)(param_2 + 0x68) = lStack_48;
    *(undefined8 *)(param_2 + 0x60) = local_50;
    *(long *)(param_2 + 0x70) = local_40;
    *(undefined1 *)(param_2 + 0x78) = 0;
    *(undefined1 *)(param_2 + 0x80) = 1;
    lVar5 = (**(code **)(**(long **)(param_2 + 0x10) + 0x38))();
    if (86399999999 < lVar5) {
      lVar5 = 86400000000;
    }
    *(long *)(lVar8 + 0x90) = lVar5;
    FUN_00ba3f30(*(undefined8 *)(param_2 + 0x40));
    FUN_00bbe134(&local_50,param_2);
    puVar1 = PTR_DAT_00d52e00;
    *(undefined1 *)(param_1 + 4) = 1;
    param_1[2] = local_40;
    param_1[1] = lStack_48;
    param_1[3] = local_38;
    *param_1 = (long)(puVar1 + 0x10);
  }
  else {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}


// ===== 00bbe134  FUN_00bbe134 =====

void FUN_00bbe134(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *__dest;
  undefined8 *puVar4;
  void *pvVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  void *local_80;
  void *local_78;
  void *local_70;
  void *local_68;
  void *local_60;
  undefined8 local_58;
  
  if ((*(byte *)(param_2 + 0x80) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
              );
  }
  if ((*(byte *)(param_2 + 0x54) & 1) == 0) {
    if (param_2 == -0x50) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(undefined1 *)(param_2 + 0x54) = 1;
    *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x48);
    *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + 1;
  }
  pvVar6 = *(void **)(param_2 + 0x60);
  uVar2 = *(undefined4 *)(param_2 + 0x50);
  uVar3 = *(undefined4 *)(param_2 + 0x58);
  local_68 = (void *)0x0;
  local_60 = (void *)0x0;
  local_58 = 0;
  uVar7 = *(long *)(param_2 + 0x68) - (long)pvVar6;
  if (uVar7 == 0) {
    __dest = (void *)0x0;
    pvVar5 = (void *)0x0;
  }
  else {
    if ((long)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00ba3880();
    }
    __dest = operator_new(uVar7);
    pvVar5 = (void *)((long)__dest + uVar7);
    memcpy(__dest,pvVar6,uVar7);
  }
  puVar1 = PTR_DAT_00d52e40 + 0x10;
  local_98 = puVar1;
  local_90 = uVar2;
  uStack_8c = uVar2;
  local_88 = uVar3;
  local_80 = __dest;
  local_78 = pvVar5;
  local_70 = pvVar5;
  puVar4 = (undefined8 *)FUN_00bba458(&local_68,&local_98);
  pvVar6 = (void *)*puVar4;
  uVar7 = puVar4[1] - (long)pvVar6;
  if (uVar7 == 0) {
    lVar9 = 0;
    pvVar5 = (void *)0x0;
  }
  else {
    if ((long)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d34c0();
    }
    pvVar5 = operator_new(uVar7);
    lVar9 = (long)pvVar5 + uVar7;
    memcpy(pvVar5,pvVar6,uVar7);
  }
  local_98 = puVar1;
  if (local_80 != (void *)0x0) {
    uVar8 = (ulong)((long)local_78 + ((long)local_78 << 0x3f) + -2) >> 1;
    uVar7 = (ulong)(((long)local_80 - (long)local_78 << 0x3f) - ((long)local_80 - (long)local_78))
            >> 1;
    if (uVar8 <= uVar7) {
      uVar7 = uVar8;
    }
    pvVar6 = local_78;
    if ((1 < uVar7) && ((((int)local_80 - (uint)local_78 | (uint)local_78) & 1) == 0)) {
      uVar7 = uVar7 & 0x7ffffffffffffffe;
      pvVar6 = (void *)((long)local_78 + uVar7 * -2);
      do {
        uVar7 = uVar7 - 2;
      } while (uVar7 != 0);
    }
    do {
      if (pvVar6 == local_80) {
        local_78 = local_80;
        operator_delete(local_80);
        goto LAB_00bbe2c0;
      }
      pvVar6 = (void *)((long)pvVar6 + -2);
    } while (pvVar6 != (void *)0x0);
LAB_00bbe29c:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
LAB_00bbe2c0:
  if (local_68 != (void *)0x0) {
    if ((long)local_60 - 1U < (ulong)((long)local_60 - (long)local_68)) goto LAB_00bbe29c;
    local_60 = local_68;
    operator_delete(local_68);
  }
  *param_1 = &PTR_FUN_00d47b60;
  param_1[1] = pvVar5;
  param_1[2] = lVar9;
  param_1[3] = lVar9;
  return;
}


// ===== 00bbe350  FUN_00bbe350 =====

void FUN_00bbe350(long param_1,undefined2 *param_2,long param_3)

{
  for (param_3 = param_3 << 1; param_3 != 0; param_3 = param_3 + -2) {
    FUN_00bb4290(*(undefined8 *)(param_1 + 0x28),*param_2);
    param_2 = param_2 + 1;
  }
  return;
}


// ===== 00bbe39c  FUN_00bbe39c =====

undefined8 FUN_00bbe39c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined **local_68;
  void *local_60;
  void *local_58;
  undefined1 auStack_48 [16];
  void *local_38;
  void *local_30;
  
  if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
              );
  }
  if (*(char *)(param_1 + 0x54) == '\x01') {
    if (*(char *)(param_1 + 0x78) == '\x01') {
      *(undefined1 *)(param_1 + 0x78) = 0;
    }
    else {
      uVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x40))
                        (*(long **)(param_1 + 0x10),"RECONFIG timeout",0x10);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
    }
  }
  plVar3 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar3 + 0x58))(auStack_48,plVar3);
  FUN_00bbe134(&local_68,param_1);
  uVar2 = FUN_00ba4854(auStack_48,&local_68);
  (**(code **)(*plVar3 + 0x60))(plVar3,uVar2);
  local_68 = &PTR_FUN_00d47b60;
  if (local_60 != (void *)0x0) {
    if ((long)local_58 - 1U < (ulong)((long)local_58 - (long)local_60)) goto LAB_00bbe4e8;
    local_58 = local_60;
    operator_delete(local_60);
  }
  if (local_38 != (void *)0x0) {
    if ((long)local_30 - 1U < (ulong)((long)local_30 - (long)local_38)) {
LAB_00bbe4e8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    local_30 = local_38;
    operator_delete(local_38);
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x38))();
  return uVar2;
}


// ===== 00bbe4fc  FUN_00bbe4fc =====

uint FUN_00bbe4fc(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = FUN_00bb42a8(*(undefined8 *)(param_1 + 0x28));
  uVar2 = 0x10;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  return uVar2 | (uint)*(byte *)(param_1 + 0x80) << 2;
}


// ===== 00bbe53c  FUN_00bbe53c =====

void FUN_00bbe53c(long param_1,long param_2)

{
  *(int *)(param_2 + 0x68) = (int)*(undefined8 *)(param_1 + 0x88);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_1 + 0x48);
  return;
}


// ===== 00bbe554  FUN_00bbe554 =====

undefined8 * FUN_00bbe554(long *param_1,long param_2)

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
  undefined8 uVar13;
  
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
      if (uVar9 >> 0x3b != 0) goto LAB_00bbe6d4;
      pvVar5 = operator_new(uVar9 << 5);
      puVar11 = (undefined8 *)((long)pvVar5 + (long)puVar11);
    }
    if (puVar11 == (undefined8 *)0x0) {
LAB_00bbe6a8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *puVar11 = &PTR_FUN_00d47b00;
    uVar13 = *(undefined8 *)(param_2 + 0x10);
    uVar12 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)((long)puVar11 + 0x15) = *(undefined8 *)(param_2 + 0x15);
    puVar11[2] = uVar13;
    puVar11[1] = uVar12;
    puVar6 = (undefined8 *)*param_1;
    puVar4 = (undefined8 *)param_1[1];
    puVar3 = (undefined8 *)((long)puVar11 + ((long)puVar6 - (long)puVar4));
    puVar8 = puVar6;
    puVar10 = puVar3;
    if ((long)puVar6 - (long)puVar4 != 0) {
      do {
        if (puVar10 == (undefined8 *)0x0) goto LAB_00bbe6a8;
        *puVar10 = &PTR_FUN_00d47b00;
        uVar13 = puVar8[2];
        uVar12 = puVar8[1];
        puVar2 = puVar8 + 4;
        *(undefined8 *)((long)puVar10 + 0x15) = *(undefined8 *)((long)puVar8 + 0x15);
        puVar10[2] = uVar13;
        puVar10[1] = uVar12;
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
  FUN_00bbe6d8();
LAB_00bbe6d4:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00bbe6d8  FUN_00bbe6d8 =====

void FUN_00bbe6d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00bbe6f0  FUN_00bbe6f0 =====

void FUN_00bbe6f0(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    pvVar1 = *(void **)(param_1 + 0x10);
    if (pvVar1 != (void *)0x0) {
      pvVar2 = *(void **)(param_1 + 0x18);
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
      *(void **)(param_1 + 0x18) = pvVar1;
      operator_delete(pvVar1);
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}


// ===== 00bbe7ac  FUN_00bbe7ac =====

void FUN_00bbe7ac(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  code *pcVar5;
  ushort *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ushort *local_90;
  ushort *puStack_88;
  ushort *local_80;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  ushort local_34 [2];
  
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00bbe970(&local_70);
  if (((ulong)local_60 & 1) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 6) = 0;
  }
  else {
    uVar3 = *(uint *)(local_70 + 0xc);
    uVar1 = *(uint *)(local_70 + 4);
    uVar2 = *(uint *)(local_70 + 8);
    uVar7 = (ulong)(puStack_68 + -0x10) >> 1;
    puStack_88 = (ushort *)&DAT_aaaaaaaaaaaaaaaa;
    local_90 = (ushort *)&DAT_aaaaaaaaaaaaaaaa;
    if (uVar7 == 0) {
      local_80 = (ushort *)0x0;
      puVar6 = (ushort *)0x0;
      local_90 = (ushort *)0x0;
    }
    else {
      local_90 = (ushort *)operator_new((ulong)(puStack_68 + -0x10) & 0xfffffffffffffffe);
      local_80 = local_90 + uVar7;
      lVar8 = 0;
      lVar9 = -0x10;
      puStack_88 = local_90;
      do {
        if (((ulong)local_60 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                    );
        }
        if (puStack_68 < (undefined1 *)(lVar8 + 0x12)) {
                    /* WARNING: Subroutine does not return */
          FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_reader.h",0x53,
                       "FixedSize + variable_offset + SubSize <= data_.size()",&DAT_001f5fa0);
        }
        if ((puStack_68 < (undefined1 *)(lVar8 + 0x10)) || (puStack_68 + lVar9 < (undefined1 *)0x2))
        {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0xbbe928);
          (*pcVar5)();
        }
        uVar4 = *(ushort *)(local_70 + lVar8 + 0x10);
        local_34[0] = uVar4 >> 8 | (ushort)((uVar4 & 0xff00ff) << 8);
        if (puStack_88 < local_80) {
          if (puStack_88 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puVar6 = puStack_88 + 1;
          *puStack_88 = uVar4 >> 8 | (ushort)((uVar4 & 0xff00ff) << 8);
        }
        else {
          puVar6 = (ushort *)FUN_00bbeea4(&local_90,local_34);
        }
        uVar7 = uVar7 - 1;
        lVar9 = lVar9 + -2;
        lVar8 = lVar8 + 2;
        puStack_88 = puVar6;
      } while (uVar7 != 0);
    }
    uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    *param_1 = &PTR_FUN_00d47ad0;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    *(uint *)(param_1 + 1) = uVar1 >> 0x10 | uVar1 << 0x10;
    *(uint *)((long)param_1 + 0xc) = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar1 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    param_1[5] = local_80;
    *(uint *)(param_1 + 2) = uVar1 >> 0x10 | uVar1 << 0x10;
    param_1[3] = local_90;
    param_1[4] = puVar6;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  return;
}


// ===== 00bbe970  FUN_00bbe970 =====

void FUN_00bbe970(undefined8 *param_1,ushort *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined1 uVar3;
  
  if (param_3 < 0x10) {
    FUN_00bb8cbc(param_3,0x10);
  }
  else {
    uVar1 = (uint)(*param_2 >> 8) | (*param_2 & 0xff00ff) << 8;
    if (uVar1 == 0xd) {
      uVar1 = (uint)CONCAT11((char)param_2[1],*(byte *)((long)param_2 + 3));
      uVar2 = (ulong)uVar1;
      if ((uVar1 < 0x10) || (param_3 < uVar2)) {
        FUN_00bb8cd4(uVar2);
      }
      else if (param_3 - uVar2 < 4) {
        if ((*(byte *)((long)param_2 + 3) & 1) == 0) {
          uVar3 = 1;
          *param_1 = param_2;
          param_1[1] = uVar2;
          goto LAB_00bbe9fc;
        }
        FUN_00bb8ce4(uVar2,2);
      }
      else {
        FUN_00bb8cdc(param_3 - uVar2);
      }
    }
    else {
      FUN_00bb8cc4(uVar1,0xd);
    }
  }
  uVar3 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00bbe9fc:
  *(undefined1 *)(param_1 + 2) = uVar3;
  return;
}


// ===== 00bbea30  FUN_00bbea30 =====

void FUN_00bbea30(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[3];
  *param_1 = &PTR_FUN_00d47ad0;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = (void *)param_1[4];
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
  do {
    if (pvVar2 == pvVar1) {
      param_1[4] = pvVar1;
      operator_delete(pvVar1);
      return;
    }
    pvVar2 = (void *)((long)pvVar2 + -2);
  } while (pvVar2 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00bbeadc  FUN_00bbeadc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bbeadc(long param_1,long *param_2)

{
  ushort *puVar1;
  ulong uVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  uVar12 = *(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18);
  lVar13 = param_2[1] - *param_2;
  uVar2 = uVar12 + 0x10;
  FUN_004efbd8(param_2,lVar13 + uVar2);
  puVar3 = (undefined2 *)(*param_2 + lVar13);
  *puVar3 = 0xd00;
  *(char *)(puVar3 + 1) = (char)(uVar2 >> 8);
  *(char *)((long)puVar3 + 3) = (char)uVar2;
  if (0xffffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x3f,"data.size() >= FixedSize",
                 &DAT_001f5fa0);
  }
  lVar11 = *param_2;
  uVar4 = *(undefined4 *)(param_1 + 8);
  auVar14._4_4_ = uVar4;
  auVar14._0_4_ = uVar4;
  auVar14._8_4_ = uVar4;
  auVar14._12_4_ = uVar4;
  auVar6._8_8_ = _UNK_001f3918;
  auVar6._0_8_ = _DAT_001f3910;
  auVar5._8_8_ = _UNK_001f3918;
  auVar5._0_8_ = _DAT_001f3910;
  auVar15._8_8_ = _UNK_001f3918;
  auVar15._0_8_ = _DAT_001f3910;
  lVar10 = lVar11 + lVar13;
  auVar15 = NEON_ushl(auVar14,auVar15,4);
  *(uint *)(lVar10 + 4) =
       CONCAT13(auVar15[0xc],CONCAT12(auVar15[8],CONCAT11(auVar15[4],auVar15[0])));
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  auVar16._4_4_ = uVar4;
  auVar16._0_4_ = uVar4;
  auVar16._8_4_ = uVar4;
  auVar16._12_4_ = uVar4;
  auVar15 = NEON_ushl(auVar16,auVar5,4);
  *(uint *)(lVar10 + 8) =
       CONCAT13(auVar15[0xc],CONCAT12(auVar15[8],CONCAT11(auVar15[4],auVar15[0])));
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  auVar17._4_4_ = uVar4;
  auVar17._0_4_ = uVar4;
  auVar17._8_4_ = uVar4;
  auVar17._12_4_ = uVar4;
  auVar15 = NEON_ushl(auVar17,auVar6,4);
  *(uint *)(lVar10 + 0xc) =
       CONCAT13(auVar15[0xc],CONCAT12(auVar15[8],CONCAT11(auVar15[4],auVar15[0])));
  lVar10 = *(long *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != lVar10) {
    lVar8 = 0;
    uVar9 = 0;
    do {
      if (uVar2 < lVar8 + 0x12U) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x58,
                     "FixedSize + variable_offset + SubSize <= data_.size()",&DAT_001f5fa0);
      }
      if ((uVar2 < lVar8 + 0x10U) || (uVar12 >> 1 == uVar9)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0xbbec20);
        (*pcVar7)();
      }
      puVar1 = (ushort *)(lVar10 + lVar8);
      lVar10 = lVar13 + lVar11 + lVar8;
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 2;
      *(ushort *)(lVar10 + 0x10) = *puVar1 >> 8 | (ushort)((*puVar1 & 0xff00ff) << 8);
      lVar10 = *(long *)(param_1 + 0x18);
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x20) - lVar10 >> 1));
  }
  return;
}


// ===== 00bbec60  FUN_00bbec60 =====

void FUN_00bbec60(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 **local_48;
  ulong uStack_40;
  ulong local_38;
  
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  FUN_00547cac(&local_60,"Outgoing SSN Reset Request, req_seq_nbr=",0x28);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005fa03c(&local_48,0x16,*(undefined4 *)(param_2 + 8));
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,", resp_seq_nbr=",0xf);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005fa03c(&local_48,0x16,*(undefined4 *)(param_2 + 0xc));
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,", sender_last_asg_tsn=",0x16);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005fa03c(&local_48,0x16,*(undefined4 *)(param_2 + 0x10));
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  param_1[1] = uStack_58;
  *param_1 = local_60;
  param_1[2] = local_50;
  return;
}


// ===== 00bbede4  FUN_00bbede4 =====

void FUN_00bbede4(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[3];
  *param_1 = &PTR_FUN_00d47ad0;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[4];
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
    param_1[4] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00bbeea4  FUN_00bbeea4 =====

undefined2 * FUN_00bbeea4(long *param_1,undefined2 *param_2)

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
    FUN_00ba3880();
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


// ===== 00bbef90  FUN_00bbef90 =====

undefined1  [16] FUN_00bbef90(ulong param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = *(undefined8 *)(&DAT_00257eb8 + (param_1 & 0xffffffff) * 8);
  auVar1._0_8_ = &DAT_00257ef0 + *(int *)(&DAT_00257ef0 + (param_1 & 0xffffffff) * 4);
  return auVar1;
}


// ===== 00bbefb4  FUN_00bbefb4 =====

void FUN_00bbefb4(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 uVar6;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00bbf0a0(&local_40);
  if (((ulong)local_30 & 1) != 0) {
    uVar3 = (*(uint *)(local_40 + 8) & 0xff00ff00) >> 8 | (*(uint *)(local_40 + 8) & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    if (uVar3 < 7) {
      if (puStack_38 < (undefined1 *)0xc) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0xbbf0a0);
        (*pcVar5)();
      }
      uVar4 = (*(uint *)(local_40 + 4) & 0xff00ff00) >> 8 |
              (*(uint *)(local_40 + 4) & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      if (puStack_38 == (undefined1 *)0x14) {
        uVar1 = *(uint *)(local_40 + 0xc);
        uVar2 = *(uint *)(local_40 + 0x10);
        *(uint *)(param_1 + 1) = uVar4;
        *(uint *)((long)param_1 + 0xc) = uVar3;
        uVar6 = 1;
        *param_1 = &PTR_FUN_00d47b00;
        uVar3 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        uVar4 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
        *(undefined1 *)((long)param_1 + 0x14) = 1;
        *(uint *)(param_1 + 2) = uVar3 >> 0x10 | uVar3 << 0x10;
        *(uint *)(param_1 + 3) = uVar4 >> 0x10 | uVar4 << 0x10;
        *(undefined1 *)((long)param_1 + 0x1c) = 1;
        goto LAB_00bbf050;
      }
      if (puStack_38 == (undefined1 *)0xc) {
        *(uint *)(param_1 + 1) = uVar4;
        *(uint *)((long)param_1 + 0xc) = uVar3;
        *param_1 = &PTR_FUN_00d47b00;
        uVar6 = 1;
        *(undefined1 *)(param_1 + 2) = 0;
        *(undefined1 *)((long)param_1 + 0x14) = 0;
        *(undefined1 *)(param_1 + 3) = 0;
        *(undefined1 *)((long)param_1 + 0x1c) = 0;
        goto LAB_00bbf050;
      }
    }
  }
  uVar6 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00bbf050:
  *(undefined1 *)(param_1 + 4) = uVar6;
  return;
}


// ===== 00bbf0a0  FUN_00bbf0a0 =====

void FUN_00bbf0a0(undefined8 *param_1,ushort *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined1 uVar3;
  
  if (param_3 < 0xc) {
    FUN_00bb8cbc(param_3,0xc);
  }
  else {
    uVar1 = (uint)(*param_2 >> 8) | (*param_2 & 0xff00ff) << 8;
    if (uVar1 == 0x10) {
      uVar1 = (uint)CONCAT11((char)param_2[1],*(byte *)((long)param_2 + 3));
      uVar2 = (ulong)uVar1;
      if ((uVar1 < 0xc) || (param_3 < uVar2)) {
        FUN_00bb8cd4(uVar2);
      }
      else if (param_3 - uVar2 < 4) {
        if ((*(byte *)((long)param_2 + 3) & 3) == 0) {
          uVar3 = 1;
          *param_1 = param_2;
          param_1[1] = uVar2;
          goto LAB_00bbf144;
        }
        FUN_00bb8ce4(uVar2,4);
      }
      else {
        FUN_00bb8cdc(param_3 - uVar2);
      }
    }
    else {
      FUN_00bb8cc4(uVar1,0x10);
    }
  }
  uVar3 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00bbf144:
  *(undefined1 *)(param_1 + 2) = uVar3;
  return;
}


// ===== 00bbf164  FUN_00bbf164 =====

void FUN_00bbf164(void)

{
  return;
}


// ===== 00bbf16c  FUN_00bbf16c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bbf16c(long param_1,long *param_2)

{
  long lVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  lVar6 = param_2[1] - *param_2;
  uVar5 = *(ulong *)(param_1 + 0x10) >> 0x1d & 8;
  lVar1 = uVar5 + 0xc;
  FUN_004efbd8(param_2,lVar6 + lVar1);
  puVar2 = (undefined2 *)(*param_2 + lVar6);
  *puVar2 = 0x1000;
  *(undefined1 *)(puVar2 + 1) = 0;
  *(char *)((long)puVar2 + 3) = (char)lVar1;
  auVar7 = _DAT_001f3910;
  uVar4 = *(undefined4 *)(param_1 + 8);
  auVar8._4_4_ = uVar4;
  auVar8._0_4_ = uVar4;
  auVar8._8_4_ = uVar4;
  auVar8._12_4_ = uVar4;
  auVar8 = NEON_ushl(auVar8,_DAT_001f3910,4);
  lVar6 = *param_2 + lVar6;
  *(uint *)(lVar6 + 4) = CONCAT13(auVar8[0xc],CONCAT12(auVar8[8],CONCAT11(auVar8[4],auVar8[0])));
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  auVar9._4_4_ = uVar4;
  auVar9._0_4_ = uVar4;
  auVar9._8_4_ = uVar4;
  auVar9._12_4_ = uVar4;
  auVar8 = NEON_ushl(auVar9,auVar7,4);
  *(uint *)(lVar6 + 8) = CONCAT13(auVar8[0xc],CONCAT12(auVar8[8],CONCAT11(auVar8[4],auVar8[0])));
  if ((*(ulong *)(param_1 + 0x10) >> 0x20 & 1) != 0) {
    if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x58,
                   "FixedSize + variable_offset + SubSize <= data_.size()",&DAT_001f5fa0);
    }
    uVar3 = (uint)*(ulong *)(param_1 + 0x10);
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    *(uint *)(lVar6 + 0xc) = uVar3 >> 0x10 | uVar3 << 0x10;
    if (*(char *)(param_1 + 0x1c) == '\x01') {
      uVar4 = *(undefined4 *)(param_1 + 0x18);
    }
    else {
      uVar4 = 0;
    }
    auVar10._4_4_ = uVar4;
    auVar10._0_4_ = uVar4;
    auVar10._8_4_ = uVar4;
    auVar10._12_4_ = uVar4;
    auVar7 = NEON_ushl(auVar10,auVar7,4);
    *(uint *)(lVar6 + 0x10) =
         CONCAT13(auVar7[0xc],CONCAT12(auVar7[8],CONCAT11(auVar7[4],auVar7[0])));
  }
  return;
}


// ===== 00bbf280  FUN_00bbf280 =====

void FUN_00bbf280(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 **local_38;
  ulong uStack_30;
  ulong local_28;
  
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  FUN_00547cac(&local_50,"Re-configuration Response, resp_seq_nbr=",0x28);
  local_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_005fa03c(&local_38,0x16,*(undefined4 *)(param_2 + 8));
  uVar1 = uStack_30;
  pppuVar2 = (undefined8 ***)local_38;
  if (-1 < (long)local_28) {
    uVar1 = local_28 >> 0x38;
    pppuVar2 = &local_38;
  }
  FUN_00547cac(&local_50,pppuVar2,uVar1);
  if ((long)local_28 < 0) {
    operator_delete(local_38);
  }
  param_1[1] = uStack_48;
  *param_1 = local_50;
  param_1[2] = local_40;
  return;
}


// ===== 00bbf330  FUN_00bbf330 =====

void FUN_00bbf330(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00bbf33c  FUN_00bbf33c =====

void FUN_00bbf33c(undefined8 *param_1)

{
  uint uVar1;
  ushort uVar2;
  code *pcVar3;
  ushort *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ushort *local_80;
  ushort *puStack_78;
  ushort *local_70;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  ushort local_24 [2];
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00bbf4e8(&local_60);
  if (((ulong)local_50 & 1) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 5) = 0;
  }
  else {
    uVar1 = *(uint *)(local_60 + 4);
    uVar5 = (ulong)(puStack_58 + -8) >> 1;
    puStack_78 = (ushort *)&DAT_aaaaaaaaaaaaaaaa;
    local_80 = (ushort *)&DAT_aaaaaaaaaaaaaaaa;
    if (uVar5 == 0) {
      local_70 = (ushort *)0x0;
      puVar4 = (ushort *)0x0;
      local_80 = (ushort *)0x0;
    }
    else {
      local_80 = (ushort *)operator_new((ulong)(puStack_58 + -8) & 0xfffffffffffffffe);
      local_70 = local_80 + uVar5;
      lVar6 = 0;
      lVar7 = -8;
      puStack_78 = local_80;
      do {
        if (((ulong)local_50 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                    );
        }
        if (puStack_58 < (undefined1 *)(lVar6 + 10)) {
                    /* WARNING: Subroutine does not return */
          FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_reader.h",0x53,
                       "FixedSize + variable_offset + SubSize <= data_.size()",&DAT_001f5fa0);
        }
        if ((puStack_58 < (undefined1 *)(lVar6 + 8)) || (puStack_58 + lVar7 < (undefined1 *)0x2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0xbbf4a0);
          (*pcVar3)();
        }
        uVar2 = *(ushort *)(local_60 + lVar6 + 8);
        local_24[0] = uVar2 >> 8 | (ushort)((uVar2 & 0xff00ff) << 8);
        if (puStack_78 < local_70) {
          if (puStack_78 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puVar4 = puStack_78 + 1;
          *puStack_78 = uVar2 >> 8 | (ushort)((uVar2 & 0xff00ff) << 8);
        }
        else {
          puVar4 = (ushort *)FUN_00bbeea4(&local_80,local_24);
        }
        uVar5 = uVar5 - 1;
        lVar7 = lVar7 + -2;
        lVar6 = lVar6 + 2;
        puStack_78 = puVar4;
      } while (uVar5 != 0);
    }
    uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    param_1[4] = local_70;
    *param_1 = &PTR_FUN_00d47b30;
    *(uint *)(param_1 + 1) = uVar1 >> 0x10 | uVar1 << 0x10;
    param_1[2] = local_80;
    param_1[3] = puVar4;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return;
}


// ===== 00bbf4e8  FUN_00bbf4e8 =====

void FUN_00bbf4e8(undefined8 *param_1,ushort *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined1 uVar3;
  
  if (param_3 < 8) {
    FUN_00bb8cbc(param_3,8);
  }
  else {
    uVar1 = (uint)(*param_2 >> 8) | (*param_2 & 0xff00ff) << 8;
    if (uVar1 == 0xe) {
      uVar1 = (uint)CONCAT11((char)param_2[1],*(byte *)((long)param_2 + 3));
      uVar2 = (ulong)uVar1;
      if ((uVar1 < 8) || (param_3 < uVar2)) {
        FUN_00bb8cd4(uVar2);
      }
      else if (param_3 - uVar2 < 4) {
        if ((*(byte *)((long)param_2 + 3) & 1) == 0) {
          uVar3 = 1;
          *param_1 = param_2;
          param_1[1] = uVar2;
          goto LAB_00bbf574;
        }
        FUN_00bb8ce4(uVar2,2);
      }
      else {
        FUN_00bb8cdc(param_3 - uVar2);
      }
    }
    else {
      FUN_00bb8cc4(uVar1,0xe);
    }
  }
  uVar3 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00bbf574:
  *(undefined1 *)(param_1 + 2) = uVar3;
  return;
}


// ===== 00bbf5a8  FUN_00bbf5a8 =====

void FUN_00bbf5a8(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR_FUN_00d47b30;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = (void *)param_1[3];
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
  do {
    if (pvVar2 == pvVar1) {
      param_1[3] = pvVar1;
      operator_delete(pvVar1);
      return;
    }
    pvVar2 = (void *)((long)pvVar2 + -2);
  } while (pvVar2 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00bbf654  FUN_00bbf654 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bbf654(long param_1,long *param_2)

{
  ushort *puVar1;
  ulong uVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  uVar10 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
  lVar11 = param_2[1] - *param_2;
  uVar2 = uVar10 + 8;
  FUN_004efbd8(param_2,lVar11 + uVar2);
  puVar3 = (undefined2 *)(*param_2 + lVar11);
  *puVar3 = 0xe00;
  *(char *)(puVar3 + 1) = (char)(uVar2 >> 8);
  *(char *)((long)puVar3 + 3) = (char)uVar2;
  if (0xfffffffffffffff7 < uVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x3f,"data.size() >= FixedSize",
                 &DAT_001f5fa0);
  }
  lVar9 = *param_2;
  uVar4 = *(undefined4 *)(param_1 + 8);
  auVar12._4_4_ = uVar4;
  auVar12._0_4_ = uVar4;
  auVar12._8_4_ = uVar4;
  auVar12._12_4_ = uVar4;
  auVar13._8_8_ = _UNK_001f3918;
  auVar13._0_8_ = _DAT_001f3910;
  auVar13 = NEON_ushl(auVar12,auVar13,4);
  *(uint *)(lVar9 + lVar11 + 4) =
       CONCAT13(auVar13[0xc],CONCAT12(auVar13[8],CONCAT11(auVar13[4],auVar13[0])));
  lVar8 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x18) != lVar8) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      if (uVar2 < lVar6 + 10U) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x58,
                     "FixedSize + variable_offset + SubSize <= data_.size()",&DAT_001f5fa0);
      }
      if ((uVar2 < lVar6 + 8U) || (uVar10 >> 1 == uVar7)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0xbbf768);
        (*pcVar5)();
      }
      puVar1 = (ushort *)(lVar8 + lVar6);
      lVar8 = lVar11 + lVar9 + lVar6;
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 2;
      *(ushort *)(lVar8 + 8) = *puVar1 >> 8 | (ushort)((*puVar1 & 0xff00ff) << 8);
      lVar8 = *(long *)(param_1 + 0x10);
    } while (uVar7 < (ulong)(*(long *)(param_1 + 0x18) - lVar8 >> 1));
  }
  return;
}


// ===== 00bbf7a8  FUN_00bbf7a8 =====

void FUN_00bbf7a8(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 **local_38;
  ulong uStack_30;
  ulong local_28;
  
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  FUN_00547cac(&local_50,"Incoming SSN Reset Request, req_seq_nbr=",0x28);
  local_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_005fa03c(&local_38,0x16,*(undefined4 *)(param_2 + 8));
  uVar1 = uStack_30;
  pppuVar2 = (undefined8 ***)local_38;
  if (-1 < (long)local_28) {
    uVar1 = local_28 >> 0x38;
    pppuVar2 = &local_38;
  }
  FUN_00547cac(&local_50,pppuVar2,uVar1);
  if ((long)local_28 < 0) {
    operator_delete(local_38);
  }
  param_1[1] = uStack_48;
  *param_1 = local_50;
  param_1[2] = local_40;
  return;
}


// ===== 00bbf858  FUN_00bbf858 =====

void FUN_00bbf858(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR_FUN_00d47b30;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[3];
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
    param_1[3] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00bbf918  FUN_00bbf918 =====

void FUN_00bbf918(undefined8 *param_1,char *param_2,ulong param_3)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  undefined1 *local_28;
  
  if (param_3 < 4) {
    FUN_00bb8cbc(param_3,4);
  }
  else if (*param_2 == -0x7e) {
    uVar3 = (uint)(*(ushort *)(param_2 + 2) >> 8) | (*(ushort *)(param_2 + 2) & 0xff00ff) << 8;
    uVar4 = (ulong)uVar3;
    if ((uVar3 < 4) || (param_3 < uVar4)) {
      FUN_00bb8cd4(uVar4);
    }
    else {
      if (param_3 - uVar4 < 4) {
        pcVar2 = (char *)0x0;
        if (uVar4 - 4 != 0) {
          pcVar2 = param_2 + 4;
        }
        puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
        local_40 = &DAT_aaaaaaaaaaaaaaaa;
        local_28 = &DAT_aaaaaaaaaaaaaaaa;
        local_30 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_00bba5d4(&local_40,pcVar2,uVar4 - 4);
        bVar1 = ((ulong)local_28 & 1) == 0;
        if (bVar1) {
          *(undefined1 *)param_1 = 0;
        }
        else {
          *param_1 = &PTR_FUN_00d47b60;
          param_1[2] = puStack_38;
          param_1[1] = local_40;
          param_1[3] = local_30;
        }
        *(bool *)(param_1 + 4) = !bVar1;
        return;
      }
      FUN_00bb8cdc(param_3 - uVar4);
    }
  }
  else {
    FUN_00bb8cc4(*param_2,0x82);
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


// ===== 00bbfa14  FUN_00bbfa14 =====

void FUN_00bbfa14(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d47b60;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if ((ulong)(param_1[2] - (long)pvVar1) <= param_1[2] - 1) {
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00bbfa78  FUN_00bbfa78 =====

void FUN_00bbfa78(long param_1,long *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  void *__src;
  void *pvVar3;
  ulong __n;
  long lVar4;
  
  __src = *(void **)(param_1 + 8);
  pvVar3 = *(void **)(param_1 + 0x10);
  __n = (long)pvVar3 - (long)__src;
  lVar4 = param_2[1] - *param_2;
  lVar1 = __n + 4;
  FUN_004efbd8(param_2,lVar4 + lVar1);
  puVar2 = (undefined1 *)(*param_2 + lVar4);
  *puVar2 = 0x82;
  puVar2[2] = (char)((ulong)lVar1 >> 8);
  puVar2[3] = (char)lVar1;
  if (0xfffffffffffffffb < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x3f,"data.size() >= FixedSize",
                 &DAT_001f5fa0);
  }
  if ((__src != (void *)0x0) && (pvVar3 != __src)) {
    memcpy((void *)(*param_2 + lVar4 + 4),__src,__n);
    return;
  }
  return;
}


// ===== 00bbfb48  FUN_00bbfb48 =====

void FUN_00bbfb48(undefined8 param_1)

{
  FUN_005d3510(param_1,"RE-CONFIG");
  return;
}


// ===== 00bbfb5c  FUN_00bbfb5c =====

void FUN_00bbfb5c(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d47b60;
  if (pvVar1 != (void *)0x0) {
    if (param_1[2] - 1 < (ulong)(param_1[2] - (long)pvVar1)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00bbfbd4  FUN_00bbfbd4 =====

void FUN_00bbfbd4(undefined8 *param_1,char *param_2,ulong param_3)

{
  char *pcVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  char *pcVar12;
  bool bVar13;
  char *pcVar14;
  undefined1 uVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  if (param_3 < 0x14) {
    FUN_00bb8cbc(param_3,0x14);
  }
  else if (*param_2 == '@') {
    uVar10 = (uint)(*(ushort *)(param_2 + 2) >> 8) | (*(ushort *)(param_2 + 2) & 0xff00ff) << 8;
    uVar21 = (ulong)uVar10;
    if ((uVar10 < 0x14) || (param_3 < uVar21)) {
      FUN_00bb8cd4(uVar21);
    }
    else {
      if (param_3 - uVar21 < 4) {
        uVar5 = *(uint *)(param_2 + 0xc);
        bVar7 = param_2[1];
        uVar6 = *(uint *)(param_2 + 4);
        uVar8 = *(ushort *)(param_2 + 8);
        uVar10 = (*(uint *)(param_2 + 0x10) & 0xff00ff00) >> 8 |
                 (*(uint *)(param_2 + 0x10) & 0xff00ff) << 8;
        uVar9 = uVar10 >> 0x10 | uVar10 << 0x10;
        bVar13 = (bVar7 >> 1 & 1) == 0;
        uVar10 = uVar9;
        if (bVar13) {
          uVar10 = 0;
        }
        uVar3 = 0;
        if (bVar13) {
          uVar3 = uVar9;
        }
        uVar11 = uVar21 - 0x14;
        pcVar1 = param_2 + 0x14;
        if (uVar11 == 0) {
          pcVar14 = (char *)0x0;
          lVar20 = 0;
          pcVar16 = (char *)0x0;
        }
        else {
          if ((long)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_005d34c0();
          }
          pcVar14 = (char *)operator_new(uVar11);
          uVar21 = uVar21 - 0x15;
          pcVar16 = pcVar14 + uVar11;
          uVar4 = uVar21;
          if ((ulong)-(long)pcVar14 < uVar21) {
            uVar4 = -(long)pcVar14;
          }
          uVar2 = uVar4 + 1;
          pcVar17 = pcVar1;
          pcVar19 = pcVar14;
          if (0x20 < uVar2) {
            if ((ulong)-(long)pcVar14 < uVar21) {
              uVar21 = -(long)pcVar14;
            }
            if (((pcVar14 <= pcVar14 + uVar21) && (pcVar1 <= pcVar1 + uVar21)) &&
               (0x1f < (ulong)((long)pcVar14 - (long)pcVar1))) {
              uVar21 = 0x20;
              if ((uVar2 & 0x1f) != 0) {
                uVar21 = uVar2 & 0x1f;
              }
              lVar20 = ~uVar4 + uVar21;
              pcVar18 = pcVar14 + 0x10;
              pcVar17 = pcVar1 + (uVar2 - uVar21);
              pcVar19 = pcVar14 + (uVar2 - uVar21);
              param_2 = param_2 + 0x24;
              do {
                pcVar12 = param_2 + -8;
                uVar22 = *(undefined8 *)(param_2 + -0x10);
                uVar24 = *(undefined8 *)(param_2 + 8);
                uVar23 = *(undefined8 *)param_2;
                lVar20 = lVar20 + 0x20;
                param_2 = param_2 + 0x20;
                *(undefined8 *)(pcVar18 + -8) = *(undefined8 *)pcVar12;
                *(undefined8 *)(pcVar18 + -0x10) = uVar22;
                *(undefined8 *)(pcVar18 + 8) = uVar24;
                *(undefined8 *)pcVar18 = uVar23;
                pcVar18 = pcVar18 + 0x20;
              } while (lVar20 != 0);
            }
          }
          lVar20 = (long)pcVar14 - (long)pcVar19;
          do {
            if (pcVar19 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            pcVar18 = pcVar17 + 1;
            lVar20 = lVar20 + -1;
            *pcVar19 = *pcVar17;
            pcVar17 = pcVar18;
            pcVar19 = pcVar19 + 1;
          } while (pcVar18 != pcVar1 + uVar11);
          lVar20 = (long)pcVar14 - lVar20;
        }
        uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
        param_1[4] = pcVar14;
        param_1[5] = lVar20;
        *(uint *)(param_1 + 1) = uVar6 >> 0x10 | uVar6 << 0x10;
        uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
        *(uint *)((long)param_1 + 0x14) = uVar5 >> 0x10 | uVar5 << 0x10;
        *(uint *)(param_1 + 3) = uVar3;
        param_1[6] = pcVar16;
        *(byte *)((long)param_1 + 0x39) = bVar7 & 1;
        uVar15 = 1;
        *(byte *)((long)param_1 + 0x3a) = bVar7 >> 2 & 1;
        *(ushort *)(param_1 + 2) = uVar8 >> 8 | (ushort)((uVar8 & 0xff00ff) << 8);
        *(undefined2 *)((long)param_1 + 0x12) = 0;
        *(uint *)((long)param_1 + 0x1c) = uVar10;
        *(byte *)(param_1 + 7) = bVar7 >> 1 & 1;
        *(byte *)(param_1 + 8) = bVar7 >> 3 & 1;
        *param_1 = &PTR_FUN_00d47b90;
        goto LAB_00bbfc6c;
      }
      FUN_00bb8cdc(param_3 - uVar21);
    }
  }
  else {
    FUN_00bb8cc4(*param_2,0x40);
  }
  uVar15 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00bbfc6c:
  *(undefined1 *)(param_1 + 9) = uVar15;
  return;
}


// ===== 00bbfe2c  FUN_00bbfe2c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bbfe2c(long param_1,long *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  void *__src;
  undefined4 uVar3;
  ulong uVar4;
  size_t __n;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  __n = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20);
  lVar5 = param_2[1] - *param_2;
  lVar1 = __n + 0x14;
  FUN_004efbd8(param_2,lVar5 + lVar1);
  puVar2 = (undefined1 *)(*param_2 + lVar5);
  *puVar2 = 0x40;
  puVar2[2] = (char)((ulong)lVar1 >> 8);
  puVar2[3] = (char)lVar1;
  if (0xffffffffffffffeb < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x3f,"data.size() >= FixedSize",
                 &DAT_001f5fa0);
  }
  lVar5 = *param_2 + lVar5;
  *(byte *)(lVar5 + 1) =
       *(byte *)(param_1 + 0x39) | *(char *)(param_1 + 0x38) << 1 | *(char *)(param_1 + 0x3a) << 2 |
       *(char *)(param_1 + 0x40) << 3;
  auVar9 = _DAT_001f3910;
  uVar3 = *(undefined4 *)(param_1 + 8);
  auVar6._4_4_ = uVar3;
  auVar6._0_4_ = uVar3;
  auVar6._8_4_ = uVar3;
  auVar6._12_4_ = uVar3;
  auVar6 = NEON_ushl(auVar6,_DAT_001f3910,4);
  *(uint *)(lVar5 + 4) = CONCAT13(auVar6[0xc],CONCAT12(auVar6[8],CONCAT11(auVar6[4],auVar6[0])));
  *(ushort *)(lVar5 + 8) =
       *(ushort *)(param_1 + 0x10) >> 8 | (ushort)((*(ushort *)(param_1 + 0x10) & 0xff00ff) << 8);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  auVar7._4_4_ = uVar3;
  auVar7._0_4_ = uVar3;
  auVar7._8_4_ = uVar3;
  auVar7._12_4_ = uVar3;
  auVar6 = NEON_ushl(auVar7,auVar9,4);
  *(uint *)(lVar5 + 0xc) = CONCAT13(auVar6[0xc],CONCAT12(auVar6[8],CONCAT11(auVar6[4],auVar6[0])));
  lVar1 = 0x1c;
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    lVar1 = 0x18;
  }
  uVar3 = *(undefined4 *)(param_1 + lVar1);
  auVar8._4_4_ = uVar3;
  auVar8._0_4_ = uVar3;
  auVar8._8_4_ = uVar3;
  auVar8._12_4_ = uVar3;
  auVar9 = NEON_ushl(auVar8,auVar9,4);
  *(uint *)(lVar5 + 0x10) = CONCAT13(auVar9[0xc],CONCAT12(auVar9[8],CONCAT11(auVar9[4],auVar9[0])));
  __src = *(void **)(param_1 + 0x20);
  uVar4 = (long)*(void **)(param_1 + 0x28) - (long)__src;
  if (uVar4 <= __n) {
    __n = uVar4;
  }
  if (((__src != (void *)0x0) && (*(void **)(param_1 + 0x28) != __src)) && (__n != 0)) {
    memcpy((void *)(lVar5 + 0x14),__src,__n);
    return;
  }
  return;
}


// ===== 00bbffa0  FUN_00bbffa0 =====

void FUN_00bbffa0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  char *__s;
  ulong uVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined8 ***pppuVar6;
  bool bVar7;
  size_t sVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 **local_48;
  ulong local_40;
  ulong local_38;
  
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  FUN_00547cac(&local_60,"I-DATA, type=",0xd);
  bVar7 = (*(byte *)(param_2 + 0x3a) & 1) == 0;
  pcVar2 = "unordered";
  if (bVar7) {
    pcVar2 = "ordered";
  }
  uVar1 = 9;
  if (bVar7) {
    uVar1 = 7;
  }
  FUN_00547cac(&local_60,pcVar2,uVar1);
  FUN_00547cac(&local_60,&DAT_001e0a11,2);
  pcVar2 = "last";
  __s = "complete";
  if ((*(byte *)(param_2 + 0x39) & 1) == 0) {
    pcVar2 = "middle";
    __s = "first";
  }
  if ((*(byte *)(param_2 + 0x38) & 1) == 0) {
    __s = pcVar2;
  }
  sVar8 = strlen(__s);
  FUN_00547cac(&local_60,__s,sVar8);
  FUN_00547cac(&local_60,", tsn=",6);
  local_48 = (undefined8 ***)0x0;
  local_40 = 0;
  local_38 = 0;
  FUN_005fa03c(&local_48,0x16,*(undefined4 *)(param_2 + 8));
  uVar3 = local_40;
  pppuVar6 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar3 = local_38 >> 0x38;
    pppuVar6 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar6,uVar3);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,", stream_id=",0xc);
  local_48 = (undefined8 ***)0x0;
  local_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,*(undefined2 *)(param_2 + 0x10));
  uVar3 = local_40;
  pppuVar6 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar3 = local_38 >> 0x38;
    pppuVar6 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar6,uVar3);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,", mid=",6);
  local_48 = (undefined8 ***)0x0;
  local_40 = 0;
  local_38 = 0;
  FUN_005fa03c(&local_48,0x16,*(undefined4 *)(param_2 + 0x14));
  uVar3 = local_40;
  pppuVar6 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar3 = local_38 >> 0x38;
    pppuVar6 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar6,uVar3);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
    bVar5 = *(byte *)(param_2 + 0x38);
  }
  else {
    bVar5 = *(byte *)(param_2 + 0x38);
  }
  if ((bVar5 & 1) == 0) {
    FUN_00547cac(&local_60,", fsn=",6);
    uVar4 = *(undefined4 *)(param_2 + 0x18);
  }
  else {
    FUN_00547cac(&local_60,", ppid=",7);
    uVar4 = *(undefined4 *)(param_2 + 0x1c);
  }
  local_40 = 0;
  local_48 = (undefined8 ***)0x0;
  local_38 = 0;
  FUN_005fa03c(&local_48,0x16,uVar4);
  uVar3 = local_40;
  pppuVar6 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar3 = local_38 >> 0x38;
    pppuVar6 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar6,uVar3);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,", length=",9);
  local_48 = (undefined8 ***)0x0;
  local_40 = 0;
  local_38 = 0;
  FUN_006247b4(&local_48,0x16,*(long *)(param_2 + 0x28) - *(long *)(param_2 + 0x20));
  uVar3 = local_40;
  pppuVar6 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar3 = local_38 >> 0x38;
    pppuVar6 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar6,uVar3);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  param_1[1] = uStack_58;
  *param_1 = local_60;
  param_1[2] = local_50;
  return;
}


// ===== 00bc02d4  FUN_00bc02d4 =====

void FUN_00bc02d4(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[4];
  *param_1 = &PTR_FUN_00d47568;
  if (pvVar1 != (void *)0x0) {
    if (param_1[5] - 1 < (ulong)(param_1[5] - (long)pvVar1)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    param_1[5] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00bc034c  FUN_00bc034c =====

void FUN_00bc034c(undefined8 *param_1,char *param_2,ulong param_3)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  ulong uVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 uVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  if (param_3 < 0x10) {
    FUN_00bb8cbc(param_3,0x10);
  }
  else if (*param_2 == '\0') {
    uVar8 = (uint)(*(ushort *)(param_2 + 2) >> 8) | (*(ushort *)(param_2 + 2) & 0xff00ff) << 8;
    uVar18 = (ulong)uVar8;
    if ((uVar8 < 0x10) || (param_3 < uVar18)) {
      FUN_00bb8cd4(uVar18);
    }
    else {
      if (param_3 - uVar18 < 4) {
        bVar5 = param_2[1];
        uVar8 = *(uint *)(param_2 + 4);
        uVar9 = uVar18 - 0x10;
        uVar6 = *(ushort *)(param_2 + 8);
        uVar7 = *(ushort *)(param_2 + 10);
        pcVar1 = param_2 + 0x10;
        uVar4 = *(uint *)(param_2 + 0xc);
        if (uVar9 == 0) {
          pcVar11 = (char *)0x0;
          lVar17 = 0;
          pcVar13 = (char *)0x0;
        }
        else {
          if ((long)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_005d34c0();
          }
          pcVar11 = (char *)operator_new(uVar9);
          uVar18 = uVar18 - 0x11;
          pcVar13 = pcVar11 + uVar9;
          uVar3 = uVar18;
          if ((ulong)-(long)pcVar11 < uVar18) {
            uVar3 = -(long)pcVar11;
          }
          uVar2 = uVar3 + 1;
          pcVar14 = pcVar1;
          pcVar16 = pcVar11;
          if (0x20 < uVar2) {
            if ((ulong)-(long)pcVar11 < uVar18) {
              uVar18 = -(long)pcVar11;
            }
            if (((pcVar11 <= pcVar11 + uVar18) && (pcVar1 <= pcVar1 + uVar18)) &&
               (0x1f < (ulong)((long)pcVar11 - (long)pcVar1))) {
              uVar18 = 0x20;
              if ((uVar2 & 0x1f) != 0) {
                uVar18 = uVar2 & 0x1f;
              }
              lVar17 = ~uVar3 + uVar18;
              pcVar15 = pcVar11 + 0x10;
              pcVar14 = pcVar1 + (uVar2 - uVar18);
              pcVar16 = pcVar11 + (uVar2 - uVar18);
              param_2 = param_2 + 0x20;
              do {
                pcVar10 = param_2 + -8;
                uVar19 = *(undefined8 *)(param_2 + -0x10);
                uVar21 = *(undefined8 *)(param_2 + 8);
                uVar20 = *(undefined8 *)param_2;
                lVar17 = lVar17 + 0x20;
                param_2 = param_2 + 0x20;
                *(undefined8 *)(pcVar15 + -8) = *(undefined8 *)pcVar10;
                *(undefined8 *)(pcVar15 + -0x10) = uVar19;
                *(undefined8 *)(pcVar15 + 8) = uVar21;
                *(undefined8 *)pcVar15 = uVar20;
                pcVar15 = pcVar15 + 0x20;
              } while (lVar17 != 0);
            }
          }
          lVar17 = (long)pcVar11 - (long)pcVar16;
          do {
            if (pcVar16 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            pcVar15 = pcVar14 + 1;
            lVar17 = lVar17 + -1;
            *pcVar16 = *pcVar14;
            pcVar14 = pcVar15;
            pcVar16 = pcVar16 + 1;
          } while (pcVar15 != pcVar1 + uVar9);
          lVar17 = (long)pcVar11 - lVar17;
        }
        uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
        param_1[4] = pcVar11;
        param_1[5] = lVar17;
        *(uint *)(param_1 + 1) = uVar8 >> 0x10 | uVar8 << 0x10;
        *(ushort *)((long)param_1 + 0x12) = uVar7 >> 8 | (ushort)((uVar7 & 0xff00ff) << 8);
        uVar8 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
        *(uint *)((long)param_1 + 0x1c) = uVar8 >> 0x10 | uVar8 << 0x10;
        param_1[6] = pcVar13;
        *(byte *)(param_1 + 7) = bVar5 >> 1 & 1;
        *(byte *)((long)param_1 + 0x39) = bVar5 & 1;
        uVar12 = 1;
        *(byte *)((long)param_1 + 0x3a) = bVar5 >> 2 & 1;
        *(ushort *)(param_1 + 2) = uVar6 >> 8 | (ushort)((uVar6 & 0xff00ff) << 8);
        *(undefined4 *)((long)param_1 + 0x14) = 0;
        *(undefined4 *)(param_1 + 3) = 0;
        *(byte *)(param_1 + 8) = bVar5 >> 3 & 1;
        *param_1 = &PTR_FUN_00d47bc0;
        goto LAB_00bc03dc;
      }
      FUN_00bb8cdc(param_3 - uVar18);
    }
  }
  else {
    FUN_00bb8cc4(*param_2,0);
  }
  uVar12 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00bc03dc:
  *(undefined1 *)(param_1 + 9) = uVar12;
  return;
}


// ===== 00bc0588  FUN_00bc0588 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bc0588(long param_1,long *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  void *__src;
  undefined4 uVar3;
  ulong uVar4;
  size_t __n;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  __n = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20);
  lVar5 = param_2[1] - *param_2;
  lVar1 = __n + 0x10;
  FUN_004efbd8(param_2,lVar5 + lVar1);
  puVar2 = (undefined1 *)(*param_2 + lVar5);
  *puVar2 = 0;
  puVar2[2] = (char)((ulong)lVar1 >> 8);
  puVar2[3] = (char)lVar1;
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x3f,"data.size() >= FixedSize",
                 &DAT_001f5fa0);
  }
  lVar5 = *param_2 + lVar5;
  *(byte *)(lVar5 + 1) =
       *(byte *)(param_1 + 0x39) | *(char *)(param_1 + 0x38) << 1 | *(char *)(param_1 + 0x3a) << 2 |
       *(char *)(param_1 + 0x40) << 3;
  auVar8 = _DAT_001f3910;
  uVar3 = *(undefined4 *)(param_1 + 8);
  auVar6._4_4_ = uVar3;
  auVar6._0_4_ = uVar3;
  auVar6._8_4_ = uVar3;
  auVar6._12_4_ = uVar3;
  auVar6 = NEON_ushl(auVar6,_DAT_001f3910,4);
  *(uint *)(lVar5 + 4) = CONCAT13(auVar6[0xc],CONCAT12(auVar6[8],CONCAT11(auVar6[4],auVar6[0])));
  *(ushort *)(lVar5 + 8) =
       *(ushort *)(param_1 + 0x10) >> 8 | (ushort)((*(ushort *)(param_1 + 0x10) & 0xff00ff) << 8);
  *(ushort *)(lVar5 + 10) =
       *(ushort *)(param_1 + 0x12) >> 8 | (ushort)((*(ushort *)(param_1 + 0x12) & 0xff00ff) << 8);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  auVar7._4_4_ = uVar3;
  auVar7._0_4_ = uVar3;
  auVar7._8_4_ = uVar3;
  auVar7._12_4_ = uVar3;
  auVar8 = NEON_ushl(auVar7,auVar8,4);
  *(uint *)(lVar5 + 0xc) = CONCAT13(auVar8[0xc],CONCAT12(auVar8[8],CONCAT11(auVar8[4],auVar8[0])));
  __src = *(void **)(param_1 + 0x20);
  uVar4 = (long)*(void **)(param_1 + 0x28) - (long)__src;
  if (uVar4 <= __n) {
    __n = uVar4;
  }
  if (((__src != (void *)0x0) && (*(void **)(param_1 + 0x28) != __src)) && (__n != 0)) {
    memcpy((void *)(lVar5 + 0x10),__src,__n);
    return;
  }
  return;
}


// ===== 00bc06dc  FUN_00bc06dc =====

void FUN_00bc06dc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  char *__s;
  ulong uVar3;
  undefined8 ***pppuVar4;
  bool bVar5;
  size_t sVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 **local_48;
  ulong uStack_40;
  ulong local_38;
  
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  FUN_00547cac(&local_60,"DATA, type=",0xb);
  bVar5 = (*(byte *)(param_2 + 0x3a) & 1) == 0;
  pcVar2 = "unordered";
  if (bVar5) {
    pcVar2 = "ordered";
  }
  uVar1 = 9;
  if (bVar5) {
    uVar1 = 7;
  }
  FUN_00547cac(&local_60,pcVar2,uVar1);
  FUN_00547cac(&local_60,&DAT_001e0a11,2);
  pcVar2 = "last";
  __s = "complete";
  if ((*(byte *)(param_2 + 0x39) & 1) == 0) {
    pcVar2 = "middle";
    __s = "first";
  }
  if ((*(byte *)(param_2 + 0x38) & 1) == 0) {
    __s = pcVar2;
  }
  sVar6 = strlen(__s);
  FUN_00547cac(&local_60,__s,sVar6);
  FUN_00547cac(&local_60,", tsn=",6);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005fa03c(&local_48,0x16,*(undefined4 *)(param_2 + 8));
  uVar3 = uStack_40;
  pppuVar4 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar3 = local_38 >> 0x38;
    pppuVar4 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar4,uVar3);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,", sid=",6);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,*(undefined2 *)(param_2 + 0x10));
  uVar3 = uStack_40;
  pppuVar4 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar3 = local_38 >> 0x38;
    pppuVar4 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar4,uVar3);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,", ssn=",6);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,*(undefined2 *)(param_2 + 0x12));
  uVar3 = uStack_40;
  pppuVar4 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar3 = local_38 >> 0x38;
    pppuVar4 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar4,uVar3);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,", ppid=",7);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005fa03c(&local_48,0x16,*(undefined4 *)(param_2 + 0x1c));
  uVar3 = uStack_40;
  pppuVar4 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar3 = local_38 >> 0x38;
    pppuVar4 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar4,uVar3);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_00547cac(&local_60,", length=",9);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_006247b4(&local_48,0x16,*(long *)(param_2 + 0x28) - *(long *)(param_2 + 0x20));
  uVar3 = uStack_40;
  pppuVar4 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar3 = local_38 >> 0x38;
    pppuVar4 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar4,uVar3);
  if ((long)local_38 < 0) {
    operator_delete(local_48);
  }
  param_1[1] = uStack_58;
  *param_1 = local_60;
  param_1[2] = local_50;
  return;
}


// ===== 00bc09dc  FUN_00bc09dc =====

void FUN_00bc09dc(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[4];
  *param_1 = &PTR_FUN_00d47568;
  if (pvVar1 != (void *)0x0) {
    if (param_1[5] - 1 < (ulong)(param_1[5] - (long)pvVar1)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    param_1[5] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00bc0a54  FUN_00bc0a54 =====

void FUN_00bc0a54(undefined8 *param_1,char *param_2,ulong param_3)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 uVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if (param_3 < 4) {
    FUN_00bb8cbc(param_3,4);
  }
  else if (*param_2 == '\n') {
    uVar4 = (uint)(*(ushort *)(param_2 + 2) >> 8) | (*(ushort *)(param_2 + 2) & 0xff00ff) << 8;
    uVar14 = (ulong)uVar4;
    if ((uVar4 < 4) || (param_3 < uVar14)) {
      FUN_00bb8cd4(uVar14);
    }
    else {
      if (param_3 - uVar14 < 4) {
        uVar5 = uVar14 - 4;
        pcVar1 = param_2 + 4;
        if (uVar5 == 0) {
          pcVar7 = (char *)0x0;
          lVar13 = 0;
          pcVar8 = (char *)0x0;
        }
        else {
          if ((long)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_005d34c0();
          }
          pcVar7 = (char *)operator_new(uVar5);
          uVar14 = uVar14 - 5;
          pcVar8 = pcVar7 + uVar5;
          uVar3 = uVar14;
          if ((ulong)-(long)pcVar7 < uVar14) {
            uVar3 = -(long)pcVar7;
          }
          uVar2 = uVar3 + 1;
          pcVar10 = pcVar1;
          pcVar12 = pcVar7;
          if (0x20 < uVar2) {
            if ((ulong)-(long)pcVar7 < uVar14) {
              uVar14 = -(long)pcVar7;
            }
            if (((pcVar7 <= pcVar7 + uVar14) && (pcVar1 <= pcVar1 + uVar14)) &&
               (0x1f < (ulong)((long)pcVar7 - (long)pcVar1))) {
              uVar14 = 0x20;
              if ((uVar2 & 0x1f) != 0) {
                uVar14 = uVar2 & 0x1f;
              }
              lVar13 = ~uVar3 + uVar14;
              pcVar11 = pcVar7 + 0x10;
              pcVar10 = pcVar1 + (uVar2 - uVar14);
              pcVar12 = pcVar7 + (uVar2 - uVar14);
              param_2 = param_2 + 0x14;
              do {
                pcVar6 = param_2 + -8;
                uVar15 = *(undefined8 *)(param_2 + -0x10);
                uVar17 = *(undefined8 *)(param_2 + 8);
                uVar16 = *(undefined8 *)param_2;
                lVar13 = lVar13 + 0x20;
                param_2 = param_2 + 0x20;
                *(undefined8 *)(pcVar11 + -8) = *(undefined8 *)pcVar6;
                *(undefined8 *)(pcVar11 + -0x10) = uVar15;
                *(undefined8 *)(pcVar11 + 8) = uVar17;
                *(undefined8 *)pcVar11 = uVar16;
                pcVar11 = pcVar11 + 0x20;
              } while (lVar13 != 0);
            }
          }
          lVar13 = (long)pcVar7 - (long)pcVar12;
          do {
            if (pcVar12 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            pcVar11 = pcVar10 + 1;
            lVar13 = lVar13 + -1;
            *pcVar12 = *pcVar10;
            pcVar10 = pcVar11;
            pcVar12 = pcVar12 + 1;
          } while (pcVar11 != pcVar1 + uVar5);
          lVar13 = (long)pcVar7 - lVar13;
        }
        param_1[2] = lVar13;
        param_1[3] = pcVar8;
        uVar9 = 1;
        *param_1 = &PTR_FUN_00d47bf0;
        param_1[1] = pcVar7;
        goto LAB_00bc0adc;
      }
      FUN_00bb8cdc(param_3 - uVar14);
    }
  }
  else {
    FUN_00bb8cc4(*param_2,10);
  }
  uVar9 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00bc0adc:
  *(undefined1 *)(param_1 + 4) = uVar9;
  return;
}


// ===== 00bc0c20  FUN_00bc0c20 =====

void FUN_00bc0c20(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d47bf0;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if ((ulong)(param_1[2] - (long)pvVar1) <= param_1[2] - 1) {
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00bc0c84  FUN_00bc0c84 =====

void FUN_00bc0c84(long param_1,long *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  void *__src;
  ulong uVar3;
  long lVar4;
  size_t __n;
  
  __n = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  lVar4 = param_2[1] - *param_2;
  lVar1 = __n + 4;
  FUN_004efbd8(param_2,lVar4 + lVar1);
  puVar2 = (undefined1 *)(*param_2 + lVar4);
  *puVar2 = 10;
  puVar2[2] = (char)((ulong)lVar1 >> 8);
  puVar2[3] = (char)lVar1;
  if (0xfffffffffffffffb < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x3f,"data.size() >= FixedSize",
                 &DAT_001f5fa0);
  }
  __src = *(void **)(param_1 + 8);
  uVar3 = (long)*(void **)(param_1 + 0x10) - (long)__src;
  if (uVar3 <= __n) {
    __n = uVar3;
  }
  if (((__src != (void *)0x0) && (*(void **)(param_1 + 0x10) != __src)) && (__n != 0)) {
    memcpy((void *)(*param_2 + lVar4 + 4),__src,__n);
    return;
  }
  return;
}


// ===== 00bc0d64  FUN_00bc0d64 =====

void FUN_00bc0d64(undefined8 param_1)

{
  FUN_005d3510(param_1,"COOKIE-ECHO");
  return;
}


// ===== 00bc0d78  FUN_00bc0d78 =====

void FUN_00bc0d78(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d47bf0;
  if (pvVar1 != (void *)0x0) {
    if (param_1[2] - 1 < (ulong)(param_1[2] - (long)pvVar1)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00bc0df0  FUN_00bc0df0 =====

undefined8 FUN_00bc0df0(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18) + 1;
  *(int *)(param_1 + 0x18) = iVar1;
  if ((*(char *)(param_1 + 0x14) == '\x01') && (*(int *)(param_1 + 0x10) < iVar1)) {
    return 0;
  }
  return 1;
}


// ===== 00bc0e28  FUN_00bc0e28 =====

void FUN_00bc0e28(long param_1)

{
  if (0 < *(int *)(param_1 + 0x18)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}


// ===== 00bc0e40  FUN_00bc0e40 =====

void FUN_00bc0e40(undefined8 *param_1,ushort *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ushort *******pppppppuVar4;
  ulong uVar5;
  ushort *******pppppppuVar6;
  ushort ******local_78;
  ulong local_70;
  undefined8 local_68;
  ushort ******local_58;
  ulong uStack_50;
  undefined8 local_48;
  
  if (param_3 < 4) {
    FUN_00bb8cbc(param_3,4);
  }
  else {
    uVar3 = (uint)(*param_2 >> 8) | (*param_2 & 0xff00ff) << 8;
    if (uVar3 == 0xc) {
      uVar3 = (uint)(param_2[1] >> 8) | (param_2[1] & 0xff00ff) << 8;
      uVar5 = (ulong)uVar3;
      if ((uVar3 < 4) || (param_3 < uVar5)) {
        FUN_00bb8cd4(uVar5);
      }
      else {
        if (param_3 - uVar5 < 4) {
          uVar5 = uVar5 - 4;
          if (uVar5 == 0) {
            *(undefined1 *)(param_1 + 1) = 0;
            *param_1 = &PTR_FUN_00d47c20;
            *(undefined2 *)((long)param_1 + 0x1f) = 0x100;
            return;
          }
          pppppppuVar6 = (ushort *******)(param_2 + 2);
          if (pppppppuVar6 == (ushort *******)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/string:1081: libc++ Hardening assertion __n == 0 || __s != nullptr failed: basic_string(const char*, n) detected nullptr\n"
                      );
          }
          if (uVar3 < 0x1b) {
            local_68 = CONCAT17((char)uVar5,(undefined7)local_68);
            pppppppuVar4 = &local_78;
          }
          else {
            uVar1 = (uVar5 & 0x7ffffffffffffff8) + 8;
            uVar2 = 0x19;
            if (uVar1 != 0x18) {
              uVar2 = uVar1;
            }
            pppppppuVar4 = (ushort *******)operator_new(uVar2);
            local_68 = uVar2 | 0x8000000000000000;
            local_78 = (ushort ******)pppppppuVar4;
            local_70 = uVar5;
          }
          if (pppppppuVar4 <= (ushort *******)((long)pppppppuVar4 + uVar5)) {
            if ((pppppppuVar6 < pppppppuVar4) ||
               ((ushort *******)((long)pppppppuVar4 + uVar5) <= pppppppuVar6)) {
              memmove(pppppppuVar4,pppppppuVar6,uVar5);
              *(undefined1 *)((long)pppppppuVar4 + uVar5) = 0;
              if ((long)local_68._7_1_ < 0) {
                uVar5 = local_70;
                pppppppuVar6 = (ushort *******)local_78;
                if (0x7ffffffffffffff6 < local_70) {
                    /* WARNING: Subroutine does not return */
                  FUN_005d45ec();
                }
              }
              else {
                uVar5 = (long)local_68._7_1_;
                pppppppuVar6 = &local_78;
              }
              pppppppuVar4 = &local_58;
              if (uVar5 < 0x17) {
                local_48 = CONCAT17((char)uVar5,(undefined7)local_48);
              }
              else {
                uVar1 = (uVar5 & 0x7ffffffffffffff8) + 8;
                uVar2 = 0x19;
                if (uVar1 != 0x18) {
                  uVar2 = uVar1;
                }
                pppppppuVar4 = (ushort *******)operator_new(uVar2);
                local_48 = uVar2 | 0x8000000000000000;
                local_58 = (ushort ******)pppppppuVar4;
                uStack_50 = uVar5;
              }
              if ((ushort *******)((long)pppppppuVar4 + uVar5) < pppppppuVar4) goto LAB_00bc1078;
              if ((pppppppuVar6 < pppppppuVar4) ||
                 ((ushort *******)((long)pppppppuVar4 + uVar5) <= pppppppuVar6)) {
                memmove(pppppppuVar4,pppppppuVar6,uVar5);
                *(undefined1 *)((long)pppppppuVar4 + uVar5) = 0;
                uVar1 = local_48;
                uVar5 = uStack_50;
                *param_1 = &PTR_FUN_00d47c20;
                uStack_50 = 0;
                local_48 = 0;
                param_1[3] = uVar1;
                param_1[2] = uVar5;
                param_1[1] = local_58;
                local_58 = (ushort ******)0x0;
                *(undefined1 *)(param_1 + 4) = 1;
                if (-1 < (long)local_68) {
                  return;
                }
                operator_delete(local_78);
                return;
              }
            }
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                      );
          }
LAB_00bc1078:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                    );
        }
        FUN_00bb8cdc(param_3 - uVar5);
      }
    }
    else {
      FUN_00bb8cc4(uVar3,0xc);
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


// ===== 00bc10b8  FUN_00bc10b8 =====

void FUN_00bc10b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d47c20;
  if (-1 < *(char *)((long)param_1 + 0x1f)) {
    return;
  }
  operator_delete((void *)param_1[1]);
  return;
}


// ===== 00bc10e8  FUN_00bc10e8 =====

void FUN_00bc10e8(long param_1,long *param_2)

{
  long lVar1;
  undefined2 *puVar2;
  void *__src;
  ulong uVar3;
  void *pvVar4;
  size_t __n;
  long lVar5;
  
  __n = (size_t)*(char *)(param_1 + 0x1f);
  if ((long)__n < 0) {
    __n = *(ulong *)(param_1 + 0x10);
  }
  lVar1 = __n + 4;
  lVar5 = param_2[1] - *param_2;
  FUN_004efbd8(param_2,lVar5 + lVar1);
  puVar2 = (undefined2 *)(*param_2 + lVar5);
  *puVar2 = 0xc00;
  *(char *)(puVar2 + 1) = (char)((ulong)lVar1 >> 8);
  *(char *)((long)puVar2 + 3) = (char)lVar1;
  if (0xfffffffffffffffb < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x3f,"data.size() >= FixedSize",
                 &DAT_001f5fa0);
  }
  uVar3 = (ulong)*(char *)(param_1 + 0x1f);
  if ((long)uVar3 < 0) {
    pvVar4 = *(void **)(param_1 + 8);
    uVar3 = *(ulong *)(param_1 + 0x10);
  }
  else {
    pvVar4 = (void *)(param_1 + 8);
  }
  __src = (void *)0x0;
  if (uVar3 != 0) {
    __src = pvVar4;
  }
  if (uVar3 <= __n) {
    __n = uVar3;
  }
  if ((__n != 0) && (__src != (void *)0x0)) {
    memcpy((void *)(*param_2 + lVar5 + 4),__src,__n);
    return;
  }
  return;
}


// ===== 00bc11d8  FUN_00bc11d8 =====

void FUN_00bc11d8(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_00547cac(&local_38,"User-Initiated Abort, reason=",0x1d);
  lVar2 = (long)*(char *)(param_2 + 0x1f);
  if (lVar2 < 0) {
    lVar1 = *(long *)(param_2 + 8);
    lVar2 = *(long *)(param_2 + 0x10);
  }
  else {
    lVar1 = param_2 + 8;
  }
  FUN_00547cac(&local_38,lVar1,lVar2);
  param_1[1] = uStack_30;
  *param_1 = local_38;
  param_1[2] = local_28;
  return;
}


// ===== 00bc1250  FUN_00bc1250 =====

void FUN_00bc1250(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d47c20;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00bc12a0  FUN_00bc12a0 =====

void FUN_00bc12a0(undefined8 *param_1,char *param_2,ulong param_3)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  undefined1 *local_28;
  
  if (param_3 < 4) {
    FUN_00bb8cbc(param_3,4);
  }
  else if (*param_2 == '\x06') {
    uVar3 = (uint)(*(ushort *)(param_2 + 2) >> 8) | (*(ushort *)(param_2 + 2) & 0xff00ff) << 8;
    uVar4 = (ulong)uVar3;
    if ((uVar3 < 4) || (param_3 < uVar4)) {
      FUN_00bb8cd4();
    }
    else if (param_3 - uVar4 < 4) {
      pcVar1 = (char *)0x0;
      if (uVar4 - 4 != 0) {
        pcVar1 = param_2 + 4;
      }
      puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
      local_40 = &DAT_aaaaaaaaaaaaaaaa;
      local_28 = &DAT_aaaaaaaaaaaaaaaa;
      local_30 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00bba5d4(&local_40,pcVar1,uVar4 - 4);
      if (((ulong)local_28 & 1) != 0) {
        bVar2 = param_2[1];
        *param_1 = &PTR_FUN_00d47c50;
        *(byte *)(param_1 + 1) = (bVar2 ^ 0xff) & 1;
        param_1[3] = puStack_38;
        param_1[2] = local_40;
        param_1[4] = local_30;
        *(undefined1 *)(param_1 + 5) = 1;
        return;
      }
    }
    else {
      FUN_00bb8cdc(param_3 - uVar4);
    }
  }
  else {
    FUN_00bb8cc4(*param_2,6);
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}


// ===== 00bc1398  FUN_00bc1398 =====

void FUN_00bc1398(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR_FUN_00d47c50;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if ((ulong)(param_1[3] - (long)pvVar1) <= param_1[3] - 1) {
    param_1[3] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00bc13fc  FUN_00bc13fc =====

void FUN_00bc13fc(long param_1,long *param_2)

{
  undefined1 *puVar1;
  void *__src;
  void *pvVar2;
  long lVar3;
  ulong __n;
  long lVar4;
  
  __src = *(void **)(param_1 + 0x10);
  pvVar2 = *(void **)(param_1 + 0x18);
  __n = (long)pvVar2 - (long)__src;
  lVar4 = param_2[1] - *param_2;
  lVar3 = __n + 4;
  FUN_004efbd8(param_2,lVar4 + lVar3);
  puVar1 = (undefined1 *)(*param_2 + lVar4);
  *puVar1 = 6;
  puVar1[2] = (char)((ulong)lVar3 >> 8);
  puVar1[3] = (char)lVar3;
  if (0xfffffffffffffffb < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x3f,"data.size() >= FixedSize",
                 &DAT_001f5fa0);
  }
  lVar3 = *param_2;
  *(byte *)(lVar3 + lVar4 + 1) = *(byte *)(param_1 + 8) ^ 1;
  if ((__src != (void *)0x0) && (pvVar2 != __src)) {
    memcpy((void *)(lVar3 + lVar4 + 4),__src,__n);
    return;
  }
  return;
}


// ===== 00bc14e8  FUN_00bc14e8 =====

void FUN_00bc14e8(undefined8 param_1)

{
  FUN_005d3510(param_1,"ABORT");
  return;
}


// ===== 00bc14fc  FUN_00bc14fc =====

void FUN_00bc14fc(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR_FUN_00d47c50;
  if (pvVar1 != (void *)0x0) {
    if (param_1[3] - 1 < (ulong)(param_1[3] - (long)pvVar1)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    param_1[3] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00bc1574  FUN_00bc1574 =====

void FUN_00bc1574(undefined8 *param_1,char *param_2,ulong param_3)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  byte bVar10;
  char cVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  uint uVar18;
  ulong uVar19;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *local_68;
  
  if (param_3 < 0x14) {
    FUN_00bb8cbc(param_3,0x14);
  }
  else if (*param_2 == '\x01') {
    uVar18 = (uint)(*(ushort *)(param_2 + 2) >> 8) | (*(ushort *)(param_2 + 2) & 0xff00ff) << 8;
    uVar19 = (ulong)uVar18;
    if ((uVar18 < 0x14) || (param_3 < uVar19)) {
      FUN_00bb8cd4(uVar19);
    }
    else if (param_3 - uVar19 < 4) {
      bVar2 = param_2[6];
      bVar3 = param_2[5];
      bVar4 = param_2[4];
      bVar5 = param_2[7];
      bVar6 = param_2[8];
      cVar7 = param_2[0xc];
      cVar8 = param_2[0xd];
      cVar9 = param_2[0xe];
      bVar10 = param_2[9];
      cVar11 = param_2[0xf];
      bVar12 = param_2[0x10];
      bVar13 = param_2[0x11];
      bVar14 = param_2[0x12];
      bVar15 = param_2[10];
      bVar16 = param_2[0x13];
      bVar17 = param_2[0xb];
      pcVar1 = (char *)0x0;
      if (uVar19 - 0x14 != 0) {
        pcVar1 = param_2 + 0x14;
      }
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      local_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00bba5d4(&local_80,pcVar1,uVar19 - 0x14);
      if (((ulong)local_68 & 1) != 0) {
        *(ushort *)(param_1 + 2) = CONCAT11(cVar7,cVar8);
        *param_1 = &PTR_FUN_00d47c80;
        param_1[4] = puStack_78;
        param_1[3] = local_80;
        *(uint *)((long)param_1 + 0x14) =
             (uint)bVar12 << 0x18 | (uint)bVar13 << 0x10 | (uint)bVar14 << 8 | (uint)bVar16;
        *(uint *)(param_1 + 1) =
             (uint)bVar4 << 0x18 | (uint)bVar3 << 0x10 | (uint)bVar2 << 8 | (uint)bVar5;
        *(uint *)((long)param_1 + 0xc) =
             (uint)bVar6 << 0x18 | (uint)bVar10 << 0x10 | (uint)bVar15 << 8 | (uint)bVar17;
        *(ushort *)((long)param_1 + 0x12) = CONCAT11(cVar9,cVar11);
        param_1[5] = local_70;
        *(undefined1 *)(param_1 + 6) = 1;
        return;
      }
    }
    else {
      FUN_00bb8cdc(param_3 - uVar19);
    }
  }
  else {
    FUN_00bb8cc4(*param_2,1);
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}


// ===== 00bc1738  FUN_00bc1738 =====

void FUN_00bc1738(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[3];
  *param_1 = &PTR_FUN_00d47c80;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if ((ulong)(param_1[4] - (long)pvVar1) <= param_1[4] - 1) {
    param_1[4] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00bc179c  FUN_00bc179c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bc179c(long param_1,long *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  void *__src;
  void *pvVar3;
  undefined4 uVar4;
  ulong __n;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  __src = *(void **)(param_1 + 0x18);
  pvVar3 = *(void **)(param_1 + 0x20);
  __n = (long)pvVar3 - (long)__src;
  lVar5 = param_2[1] - *param_2;
  lVar1 = __n + 0x14;
  FUN_004efbd8(param_2,lVar5 + lVar1);
  puVar2 = (undefined1 *)(*param_2 + lVar5);
  *puVar2 = 1;
  puVar2[2] = (char)((ulong)lVar1 >> 8);
  puVar2[3] = (char)lVar1;
  auVar9 = _DAT_001f3910;
  if (0xffffffffffffffeb < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x3f,"data.size() >= FixedSize",
                 &DAT_001f5fa0);
  }
  uVar4 = *(undefined4 *)(param_1 + 8);
  auVar6._4_4_ = uVar4;
  auVar6._0_4_ = uVar4;
  auVar6._8_4_ = uVar4;
  auVar6._12_4_ = uVar4;
  auVar6 = NEON_ushl(auVar6,_DAT_001f3910,4);
  lVar5 = *param_2 + lVar5;
  *(uint *)(lVar5 + 4) = CONCAT13(auVar6[0xc],CONCAT12(auVar6[8],CONCAT11(auVar6[4],auVar6[0])));
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  auVar7._4_4_ = uVar4;
  auVar7._0_4_ = uVar4;
  auVar7._8_4_ = uVar4;
  auVar7._12_4_ = uVar4;
  auVar6 = NEON_ushl(auVar7,auVar9,4);
  *(uint *)(lVar5 + 8) = CONCAT13(auVar6[0xc],CONCAT12(auVar6[8],CONCAT11(auVar6[4],auVar6[0])));
  *(ushort *)(lVar5 + 0xc) =
       *(ushort *)(param_1 + 0x10) >> 8 | (ushort)((*(ushort *)(param_1 + 0x10) & 0xff00ff) << 8);
  *(ushort *)(lVar5 + 0xe) =
       *(ushort *)(param_1 + 0x12) >> 8 | (ushort)((*(ushort *)(param_1 + 0x12) & 0xff00ff) << 8);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  auVar8._4_4_ = uVar4;
  auVar8._0_4_ = uVar4;
  auVar8._8_4_ = uVar4;
  auVar8._12_4_ = uVar4;
  auVar9 = NEON_ushl(auVar8,auVar9,4);
  *(uint *)(lVar5 + 0x10) = CONCAT13(auVar9[0xc],CONCAT12(auVar9[8],CONCAT11(auVar9[4],auVar9[0])));
  if ((__src != (void *)0x0) && (pvVar3 != __src)) {
    memcpy((void *)(lVar5 + 0x14),__src,__n);
    return;
  }
  return;
}


// ===== 00bc18ec  FUN_00bc18ec =====

void FUN_00bc18ec(long param_1)

{
  FUN_008490e4("INIT, initiate_tag=0x%0x, initial_tsn=%u",*(undefined4 *)(param_1 + 8),
               *(undefined4 *)(param_1 + 0x14));
  return;
}


// ===== 00bc1904  FUN_00bc1904 =====

void FUN_00bc1904(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[3];
  *param_1 = &PTR_FUN_00d47c80;
  if (pvVar1 != (void *)0x0) {
    if (param_1[4] - 1 < (ulong)(param_1[4] - (long)pvVar1)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    param_1[4] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00bc197c  FUN_00bc197c =====

void FUN_00bc197c(undefined8 *param_1,ushort *param_2,ulong param_3)

{
  uint uVar1;
  undefined1 uVar2;
  
  if (param_3 < 4) {
    FUN_00bb8cbc(param_3,4);
  }
  else {
    uVar1 = (uint)(*param_2 >> 8) | (*param_2 & 0xff00ff) << 8;
    if (uVar1 == 0xc000) {
      uVar1 = (uint)(param_2[1] >> 8) | (param_2[1] & 0xff00ff) << 8;
      if ((param_3 == 4) && (uVar1 == 4)) {
        *param_1 = &PTR_FUN_00d47cb0;
        uVar2 = 1;
        goto LAB_00bc1a04;
      }
      FUN_00bb8ccc(uVar1,4);
    }
    else {
      FUN_00bb8cc4(uVar1,0xc000);
    }
  }
  uVar2 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00bc1a04:
  *(undefined1 *)(param_1 + 1) = uVar2;
  return;
}


// ===== 00bc1a18  FUN_00bc1a18 =====

void FUN_00bc1a18(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  FUN_004efbd8(param_2,(lVar2 - lVar1) + 4);
  *(int *)(*param_2 + (lVar2 - lVar1)) = (int)DAT_001f52f8;
  return;
}


// ===== 00bc1a60  FUN_00bc1a60 =====

void FUN_00bc1a60(undefined8 param_1)

{
  FUN_005d3510(param_1,"Forward TSN Supported");
  return;
}


// ===== 00bc1a74  FUN_00bc1a74 =====

void FUN_00bc1a74(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00bc1a80  FUN_00bc1a80 =====

void FUN_00bc1a80(undefined8 *param_1,ushort *param_2,ulong param_3)

{
  uint uVar1;
  undefined1 uVar2;
  
  if (param_3 < 8) {
    FUN_00bb8cbc(param_3,8);
  }
  else {
    uVar1 = (uint)(*param_2 >> 8) | (*param_2 & 0xff00ff) << 8;
    if (uVar1 == 0x8001) {
      uVar1 = (uint)(param_2[1] >> 8) | (param_2[1] & 0xff00ff) << 8;
      if ((param_3 == 8) && (uVar1 == 8)) {
        uVar1 = (*(uint *)(param_2 + 2) & 0xff00ff00) >> 8 |
                (*(uint *)(param_2 + 2) & 0xff00ff) << 8;
        uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
        if (uVar1 != 0) {
          *(uint *)(param_1 + 1) = uVar1;
          *param_1 = &PTR_FUN_00d47ce0;
          uVar2 = 1;
          goto LAB_00bc1b20;
        }
      }
      else {
        FUN_00bb8ccc(uVar1,8);
      }
    }
    else {
      FUN_00bb8cc4(uVar1,0x8001);
    }
  }
  uVar2 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00bc1b20:
  *(undefined1 *)(param_1 + 2) = uVar2;
  return;
}


// ===== 00bc1b34  FUN_00bc1b34 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bc1b34(long param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = param_2[1] - *param_2;
  FUN_004efbd8(param_2,lVar2 + 8);
  *(int *)(*param_2 + lVar2) = (int)DAT_001f5a70;
  uVar1 = *(undefined4 *)(param_1 + 8);
  auVar3._4_4_ = uVar1;
  auVar3._0_4_ = uVar1;
  auVar3._8_4_ = uVar1;
  auVar3._12_4_ = uVar1;
  auVar3 = NEON_ushl(auVar3,_DAT_001f3910,4);
  *(uint *)(*param_2 + lVar2 + 4) =
       CONCAT13(auVar3[0xc],CONCAT12(auVar3[8],CONCAT11(auVar3[4],auVar3[0])));
  return;
}


// ===== 00bc1bb0  FUN_00bc1bb0 =====

void FUN_00bc1bb0(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 **local_38;
  ulong uStack_30;
  ulong local_28;
  
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  FUN_00547cac(&local_50,"Zero Checksum Acceptable (",0x1a);
  local_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_005fa03c(&local_38,0x16,*(undefined4 *)(param_2 + 8));
  uVar1 = uStack_30;
  pppuVar2 = (undefined8 ***)local_38;
  if (-1 < (long)local_28) {
    uVar1 = local_28 >> 0x38;
    pppuVar2 = &local_38;
  }
  FUN_00547cac(&local_50,pppuVar2,uVar1);
  if ((long)local_28 < 0) {
    operator_delete(local_38);
  }
  FUN_00547cac(&local_50,&DAT_001ca519,1);
  param_1[1] = uStack_48;
  *param_1 = local_50;
  param_1[2] = local_40;
  return;
}


// ===== 00bc1c74  FUN_00bc1c74 =====

void FUN_00bc1c74(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00bc1c80  FUN_00bc1c80 =====

void FUN_00bc1c80(undefined8 *param_1,ushort *param_2,ulong param_3)

{
  ushort *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if (param_3 < 4) {
    FUN_00bb8cbc(param_3,4);
  }
  else {
    uVar4 = (uint)(*param_2 >> 8) | (*param_2 & 0xff00ff) << 8;
    if (uVar4 == 0x8008) {
      uVar4 = (uint)(param_2[1] >> 8) | (param_2[1] & 0xff00ff) << 8;
      uVar14 = (ulong)uVar4;
      if ((uVar4 < 4) || (param_3 < uVar14)) {
        FUN_00bb8cd4(uVar14);
      }
      else {
        if (param_3 - uVar14 < 4) {
          uVar5 = uVar14 - 4;
          puVar1 = param_2 + 2;
          if (uVar5 == 0) {
            puVar7 = (undefined1 *)0x0;
            lVar13 = 0;
            puVar6 = (undefined1 *)0x0;
          }
          else {
            if ((long)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_005d34c0();
            }
            puVar6 = (undefined1 *)operator_new(uVar5);
            uVar14 = uVar14 - 5;
            puVar7 = puVar6 + uVar5;
            uVar3 = uVar14;
            if ((ulong)-(long)puVar6 < uVar14) {
              uVar3 = -(long)puVar6;
            }
            uVar2 = uVar3 + 1;
            puVar9 = puVar1;
            puVar11 = puVar6;
            if (0x20 < uVar2) {
              if ((ulong)-(long)puVar6 < uVar14) {
                uVar14 = -(long)puVar6;
              }
              if (((puVar6 <= puVar6 + uVar14) && (puVar1 <= (ushort *)((long)puVar1 + uVar14))) &&
                 (0x1f < (ulong)((long)puVar6 - (long)puVar1))) {
                uVar14 = 0x20;
                if ((uVar2 & 0x1f) != 0) {
                  uVar14 = uVar2 & 0x1f;
                }
                lVar13 = ~uVar3 + uVar14;
                puVar12 = (undefined8 *)(puVar6 + 0x10);
                puVar9 = (ushort *)((long)puVar1 + (uVar2 - uVar14));
                puVar11 = puVar6 + (uVar2 - uVar14);
                param_2 = param_2 + 10;
                do {
                  puVar10 = param_2 + -4;
                  uVar15 = *(undefined8 *)(param_2 + -8);
                  uVar17 = *(undefined8 *)(param_2 + 4);
                  uVar16 = *(undefined8 *)param_2;
                  lVar13 = lVar13 + 0x20;
                  param_2 = param_2 + 0x10;
                  puVar12[-1] = *(undefined8 *)puVar10;
                  puVar12[-2] = uVar15;
                  puVar12[1] = uVar17;
                  *puVar12 = uVar16;
                  puVar12 = puVar12 + 4;
                } while (lVar13 != 0);
              }
            }
            lVar13 = (long)puVar6 - (long)puVar11;
            do {
              if (puVar11 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                          );
              }
              puVar10 = (ushort *)((long)puVar9 + 1);
              lVar13 = lVar13 + -1;
              *puVar11 = (char)*puVar9;
              puVar9 = puVar10;
              puVar11 = puVar11 + 1;
            } while (puVar10 != (ushort *)((long)puVar1 + uVar5));
            lVar13 = (long)puVar6 - lVar13;
          }
          param_1[2] = lVar13;
          param_1[3] = puVar7;
          uVar8 = 1;
          *param_1 = &PTR_FUN_00d47d10;
          param_1[1] = puVar6;
          goto LAB_00bc1d10;
        }
        FUN_00bb8cdc(param_3 - uVar14);
      }
    }
    else {
      FUN_00bb8cc4(uVar4,0x8008);
    }
  }
  uVar8 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00bc1d10:
  *(undefined1 *)(param_1 + 4) = uVar8;
  return;
}


// ===== 00bc1e54  FUN_00bc1e54 =====

void FUN_00bc1e54(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d47d10;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if ((ulong)(param_1[2] - (long)pvVar1) <= param_1[2] - 1) {
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00bc1eb8  FUN_00bc1eb8 =====

void FUN_00bc1eb8(long param_1,long *param_2)

{
  long lVar1;
  undefined2 *puVar2;
  void *__src;
  ulong uVar3;
  long lVar4;
  size_t __n;
  
  __n = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  lVar4 = param_2[1] - *param_2;
  lVar1 = __n + 4;
  FUN_004efbd8(param_2,lVar4 + lVar1);
  puVar2 = (undefined2 *)(*param_2 + lVar4);
  *puVar2 = 0x880;
  *(char *)(puVar2 + 1) = (char)((ulong)lVar1 >> 8);
  *(char *)((long)puVar2 + 3) = (char)lVar1;
  if (0xfffffffffffffffb < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../net/dcsctp/packet/bounded_byte_writer.h",0x3f,"data.size() >= FixedSize",
                 &DAT_001f5fa0);
  }
  __src = *(void **)(param_1 + 8);
  uVar3 = (long)*(void **)(param_1 + 0x10) - (long)__src;
  if (uVar3 <= __n) {
    __n = uVar3;
  }
  if (((__src != (void *)0x0) && (*(void **)(param_1 + 0x10) != __src)) && (__n != 0)) {
    memcpy((void *)(*param_2 + lVar4 + 4),__src,__n);
    return;
  }
  return;
}


// ===== 00bc1f98  FUN_00bc1f98 =====

void FUN_00bc1f98(undefined8 *param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 *local_50;
  ulong uStack_48;
  byte bStack_39;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_00547cac(&local_38,"Supported Extensions (",0x16);
  FUN_00bc205c(&local_50,param_2 + 8,&DAT_001e1644,2);
  ppuVar1 = (undefined1 **)local_50;
  if (-1 < (char)bStack_39) {
    uStack_48 = (ulong)bStack_39;
    ppuVar1 = &local_50;
  }
  FUN_00547cac(&local_38,ppuVar1,uStack_48);
  FUN_00547cac(&local_38,&DAT_001ca519,1);
  if ((char)bStack_39 < '\0') {
    operator_delete(local_50);
  }
  param_1[1] = uStack_30;
  *param_1 = local_38;
  param_1[2] = local_28;
  return;
}


// ===== 00bc205c  FUN_00bc205c =====

void FUN_00bc205c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined8 ***pppuVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 **local_68;
  ulong uStack_60;
  ulong local_58;
  
  puVar4 = (undefined1 *)*param_2;
  puVar2 = (undefined1 *)param_2[1];
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (puVar4 != puVar2) {
    iVar5 = 0;
    do {
      if (0 < iVar5) {
        FUN_00547cac(&local_80,param_3,param_4);
      }
      local_68 = (undefined8 ***)0x0;
      uStack_60 = 0;
      local_58 = 0;
      FUN_005f55c4(&local_68,0x16,*puVar4);
      uVar1 = uStack_60;
      pppuVar3 = (undefined8 ***)local_68;
      if (-1 < (long)local_58) {
        uVar1 = local_58 >> 0x38;
        pppuVar3 = &local_68;
      }
      FUN_00547cac(&local_80,pppuVar3,uVar1);
      if ((long)local_58 < 0) {
        operator_delete(local_68);
      }
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 + 1;
    } while (puVar4 != puVar2);
  }
  param_1[1] = uStack_78;
  *param_1 = local_80;
  param_1[2] = local_70;
  return;
}


// ===== 00bc2154  FUN_00bc2154 =====

void FUN_00bc2154(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d47d10;
  if (pvVar1 != (void *)0x0) {
    if (param_1[2] - 1 < (ulong)(param_1[2] - (long)pvVar1)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00bc21cc  FUN_00bc21cc =====

void FUN_00bc21cc(undefined8 *param_1,char *param_2,ulong param_3)

{
  uint uVar1;
  undefined1 uVar2;
  
  if (param_3 < 8) {
    FUN_00bb8cbc(param_3,8);
  }
  else if (*param_2 == '\a') {
    uVar1 = (uint)(*(ushort *)(param_2 + 2) >> 8) | (*(ushort *)(param_2 + 2) & 0xff00ff) << 8;
    if ((param_3 == 8) && (uVar1 == 8)) {
      uVar1 = *(uint *)(param_2 + 4);
      *param_1 = &PTR_FUN_00d47d40;
      uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      *(uint *)(param_1 + 1) = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar2 = 1;
      goto LAB_00bc2260;
    }
    FUN_00bb8ccc(uVar1,8);
  }
  else {
    FUN_00bb8cc4(*param_2,7);
  }
  uVar2 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00bc2260:
  *(undefined1 *)(param_1 + 2) = uVar2;
  return;
}


// ===== 00bc2274  FUN_00bc2274 =====

void FUN_00bc2274(void)

{
  return;
}


// ===== 00bc227c  FUN_00bc227c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bc227c(long param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar3 = param_2[1] - *param_2;
  FUN_004efbd8(param_2,lVar3 + 8);
  lVar2 = *param_2;
  *(undefined1 *)(lVar2 + lVar3) = 7;
  *(undefined2 *)((undefined1 *)(lVar2 + lVar3) + 2) = 0x800;
  uVar1 = *(undefined4 *)(param_1 + 8);
  auVar4._4_4_ = uVar1;
  auVar4._0_4_ = uVar1;
  auVar4._8_4_ = uVar1;
  auVar4._12_4_ = uVar1;
  auVar4 = NEON_ushl(auVar4,_DAT_001f3910,4);
  *(uint *)(*param_2 + lVar3 + 4) =
       CONCAT13(auVar4[0xc],CONCAT12(auVar4[8],CONCAT11(auVar4[4],auVar4[0])));
  return;
}


