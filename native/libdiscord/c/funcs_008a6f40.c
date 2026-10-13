// ===== 008a6f40  FUN_008a6f40 =====

long FUN_008a6f40(int *param_1)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  
  if (((*(ushort *)(param_1 + 0x155) >> 8 & 1) == 0) ||
     (plVar5 = (long *)FUN_008a76b8(), plVar5 == (long *)0x0)) {
    if (*param_1 == 2) {
      lVar10 = FUN_007b8ca4(param_1);
      uVar11 = (ulong)*(byte *)(lVar10 + 10);
      FUN_007b8ca4(param_1);
    }
    else {
      uVar11 = 1;
    }
  }
  else {
    puStack_3c = &DAT_aaaaaaaaaaaaaaaa;
    uStack_40 = 0xaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_48 = 0xaaaaaaaa;
    local_44 = 0xaaaaaaaa;
    puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
    (**(code **)(*plVar5 + 0x10))(&local_60);
    uVar11 = (ulong)(int)local_60;
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  bVar3 = false;
  if (uVar11 == 0 || (*(byte *)(param_1 + 0x8a) & 1) != 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
    if ((uVar11 != 1) && ((*(byte *)(param_1 + 0xb2) & 1) == 0)) {
      uVar6 = 2;
      bVar3 = false;
      if ((uVar11 != 2) && (bVar3 = false, (*(byte *)(param_1 + 0xda) & 1) == 0)) {
        bVar3 = false;
        uVar6 = 3;
        if ((uVar11 != 3) && ((*(byte *)(param_1 + 0x102) & 1) == 0)) {
          bVar3 = false;
          uVar6 = 4;
          if ((uVar11 != 4) && ((*(byte *)(param_1 + 0x12a) & 1) == 0)) {
            if (uVar11 != 5) goto LAB_008a71d8;
            bVar3 = true;
            uVar6 = 5;
          }
        }
      }
    }
  }
  if (uVar6 < uVar11) {
    if (bVar3) {
LAB_008a71d8:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x8a71dc);
      (*pcVar4)();
    }
    uVar9 = uVar6;
    if (((char)param_1[uVar6 * 0x28 + 0x8a] == '\x01') &&
       (uVar1 = uVar6 + 1, uVar9 = uVar11, uVar1 != uVar11)) {
      if (uVar1 == 5) goto LAB_008a71d8;
      uVar9 = uVar1;
      if (((char)param_1[uVar1 * 0x28 + 0x8a] == '\x01') &&
         (uVar1 = uVar6 + 2, uVar9 = uVar11, uVar1 != uVar11)) {
        if (uVar1 == 5) goto LAB_008a71d8;
        uVar9 = uVar1;
        if (((char)param_1[uVar1 * 0x28 + 0x8a] == '\x01') &&
           (uVar1 = uVar6 + 3, uVar9 = uVar11, uVar1 != uVar11)) {
          if (uVar1 == 5) goto LAB_008a71d8;
          uVar9 = uVar1;
          if (((char)param_1[uVar1 * 0x28 + 0x8a] == '\x01') &&
             (uVar1 = uVar6 + 4, uVar9 = uVar11, uVar1 != uVar11)) {
            if (uVar1 == 5) goto LAB_008a71d8;
            uVar9 = uVar1;
            if (((char)param_1[uVar1 * 0x28 + 0x8a] == '\x01') &&
               (uVar1 = uVar6 + 5, uVar9 = uVar11, uVar1 != uVar11)) {
              if (uVar11 == 0 || (*(byte *)(param_1 + 0x8a) & 1) != 0) goto LAB_008a71d8;
              if ((char)param_1[uVar1 * 0x28 + 0x8a] == '\0') {
                uVar9 = uVar1;
              }
            }
          }
        }
      }
    }
    lVar10 = uVar9 - uVar6;
    if (lVar10 != 0) {
      if (uVar6 - uVar9 <= uVar6 - 6) goto LAB_008a71d8;
      lVar8 = 0;
      puVar7 = (uint *)(param_1 + uVar6 * 0x28 + 0x86);
      do {
        lVar2 = lVar8;
        if (lVar8 != -0x8000000000000000) {
          lVar2 = lVar8 + (ulong)*puVar7 * 1000;
        }
        if (lVar8 != 0x7fffffffffffffff) {
          lVar8 = lVar2;
        }
        lVar10 = lVar10 + -1;
        puVar7 = puVar7 + 0x28;
      } while (lVar10 != 0);
      goto LAB_008a71a4;
    }
  }
  lVar8 = 0;
LAB_008a71a4:
  lVar10 = (ulong)(uint)param_1[3] * 1000;
  if (lVar8 <= lVar10) {
    lVar10 = lVar8;
  }
  if (param_1[3] != 0) {
    lVar8 = lVar10;
  }
  return lVar8;
}


// ===== 008a71dc  FUN_008a71dc =====

undefined8 FUN_008a71dc(void)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_008a5960(&local_60);
  if (local_60 < (undefined1 *)0x2) {
    uVar3 = 0;
    puVar1 = local_60;
  }
  else {
    puVar1 = (undefined1 *)((ulong)&local_60 | 8);
    if ((undefined1 *)((ulong)local_60 & 1) != (undefined1 *)0x0) {
      puVar1 = puStack_58;
    }
    uVar3 = *(undefined8 *)(puVar1 + ((ulong)local_60 >> 1) * 8 + -8);
    puVar1 = (undefined1 *)((ulong)local_60 & 1);
  }
  if (puVar1 != (undefined1 *)0x0) {
    operator_delete(puStack_58);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008a7284  FUN_008a7284 =====

void FUN_008a7284(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3b348;
  if ((*(byte *)(param_1 + 0xaf) & 1) != 0) {
    operator_delete((void *)param_1[0xb0]);
  }
  FUN_008a03f4(param_1 + 1);
  return;
}


// ===== 008a72d0  FUN_008a72d0 =====

void FUN_008a72d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3b348;
  if ((*(byte *)(param_1 + 0xaf) & 1) != 0) {
    operator_delete((void *)param_1[0xb0]);
  }
  FUN_008a03f4(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 008a7328  FUN_008a7328 =====

void FUN_008a7328(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 008a7340  FUN_008a7340 =====

undefined8 * FUN_008a7340(long *param_1,undefined8 *param_2)

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
    FUN_008a7328();
LAB_008a7430:
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
    if (uVar5 >> 0x3d != 0) goto LAB_008a7430;
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


// ===== 008a7434  FUN_008a7434 =====

undefined8 * FUN_008a7434(long *param_1,undefined8 *param_2)

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
    FUN_008a7328();
LAB_008a7524:
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
    if (uVar5 >> 0x3d != 0) goto LAB_008a7524;
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


// ===== 008a7528  FUN_008a7528 =====

undefined8 * FUN_008a7528(ulong *param_1,undefined8 *param_2)

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
LAB_008a76a0:
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
      if (puVar6 == (ulong *)0x0) goto LAB_008a76a0;
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


// ===== 008a76b8  FUN_008a76b8 =====

long * FUN_008a76b8(undefined1 param_1)

{
  long *plVar1;
  
  switch(param_1) {
  case 0:
    plVar1 = (long *)operator_new(0x10);
    *plVar1 = (long)(PTR_DAT_00d52f78 + 0x10);
    plVar1[1] = 0;
    *(undefined2 *)(plVar1 + 1) = 0x101;
    return plVar1;
  case 1:
    plVar1 = (long *)operator_new(0x38);
    FUN_008a81f0(plVar1,1,2,0x200000001);
    *plVar1 = (long)(PTR_DAT_00d52f80 + 0x10);
    return plVar1;
  case 2:
    plVar1 = (long *)operator_new(0x38);
    FUN_008a81f0(plVar1,1,3,0x200000001);
    *plVar1 = (long)(PTR_DAT_00d52f88 + 0x10);
    return plVar1;
  case 3:
    plVar1 = (long *)operator_new(0x38);
    FUN_008a81f0(plVar1,2,1,0x200000001);
    *plVar1 = (long)(PTR_DAT_00d52f90 + 0x10);
    return plVar1;
  case 4:
    plVar1 = (long *)operator_new(0x38);
    FUN_008a81f0(plVar1,2,1,0x300000002);
    *plVar1 = (long)(PTR_DAT_00d52f90 + 0x10);
    return plVar1;
  case 5:
    plVar1 = (long *)operator_new(0x30);
    FUN_008ad778(plVar1,2,1);
    *plVar1 = (long)(PTR_DAT_00d52f98 + 0x10);
    return plVar1;
  case 6:
    plVar1 = (long *)operator_new(0x38);
    FUN_008a81f0(plVar1,2,2,0x200000001);
    *plVar1 = (long)(PTR_DAT_00d52fa0 + 0x10);
    return plVar1;
  case 7:
    plVar1 = (long *)operator_new(0x38);
    FUN_008a81f0(plVar1,2,2,0x300000002);
    *plVar1 = (long)(PTR_DAT_00d52fa0 + 0x10);
    return plVar1;
  case 8:
    plVar1 = (long *)operator_new(0x30);
    FUN_008ad778(plVar1,2,2);
    *plVar1 = (long)(PTR_DAT_00d52fa8 + 0x10);
    return plVar1;
  case 9:
    plVar1 = (long *)operator_new(0x18);
    *plVar1 = (long)(PTR_DAT_00d52fb0 + 0x10);
    plVar1[1] = 0;
    plVar1[2] = 0xf;
    return plVar1;
  case 10:
    plVar1 = (long *)operator_new(0x38);
    FUN_008a81f0(plVar1,2,3,0x200000001);
    *plVar1 = (long)(PTR_DAT_00d52fb8 + 0x10);
    return plVar1;
  case 0xb:
    plVar1 = (long *)operator_new(0x38);
    FUN_008a81f0(plVar1,2,3,0x300000002);
    *plVar1 = (long)(PTR_DAT_00d52fb8 + 0x10);
    return plVar1;
  case 0xc:
    plVar1 = (long *)operator_new(0x30);
    FUN_008ad778(plVar1,2,3);
    *plVar1 = (long)(PTR_DAT_00d52fc0 + 0x10);
    return plVar1;
  case 0xd:
    plVar1 = (long *)operator_new(0x38);
    FUN_008a81f0(plVar1,3,1,0x200000001);
    *plVar1 = (long)(PTR_DAT_00d52fc8 + 0x10);
    return plVar1;
  case 0xe:
    plVar1 = (long *)operator_new(0x38);
    FUN_008a81f0(plVar1,3,1,0x300000002);
    *plVar1 = (long)(PTR_DAT_00d52fc8 + 0x10);
    return plVar1;
  case 0xf:
    plVar1 = (long *)operator_new(0x30);
    FUN_008ad778(plVar1,3,1);
    *plVar1 = (long)(PTR_DAT_00d52fd0 + 0x10);
    return plVar1;
  case 0x10:
    plVar1 = (long *)operator_new(0x38);
    FUN_008a81f0(plVar1,3,2,0x200000001);
    *plVar1 = (long)(PTR_DAT_00d52fd8 + 0x10);
    return plVar1;
  case 0x11:
    plVar1 = (long *)operator_new(0x38);
    FUN_008a81f0(plVar1,3,2,0x300000002);
    *plVar1 = (long)(PTR_DAT_00d52fd8 + 0x10);
    return plVar1;
  case 0x12:
    plVar1 = (long *)operator_new(0x30);
    FUN_008ad778(plVar1,3,2);
    *plVar1 = (long)(PTR_DAT_00d52fe0 + 0x10);
    return plVar1;
  case 0x13:
    plVar1 = (long *)operator_new(0x38);
    FUN_008a81f0(plVar1,3,3,0x200000001);
    *plVar1 = (long)(PTR_DAT_00d52fe8 + 0x10);
    return plVar1;
  case 0x14:
    plVar1 = (long *)operator_new(0x38);
    FUN_008a81f0(plVar1,3,3,0x300000002);
    *plVar1 = (long)(PTR_DAT_00d52fe8 + 0x10);
    return plVar1;
  case 0x15:
    plVar1 = (long *)operator_new(0x30);
    FUN_008ad778(plVar1,3,3);
    *plVar1 = (long)(PTR_DAT_00d52ff0 + 0x10);
    return plVar1;
  case 0x16:
    plVar1 = (long *)operator_new(0x38);
    FUN_008b232c(plVar1,2,1,0x200000001);
    *plVar1 = (long)(PTR_DAT_00d52ff8 + 0x10);
    return plVar1;
  case 0x17:
    plVar1 = (long *)operator_new(0x38);
    FUN_008b232c(plVar1,2,1,0x300000002);
    *plVar1 = (long)(PTR_DAT_00d52ff8 + 0x10);
    return plVar1;
  case 0x18:
    plVar1 = (long *)operator_new(0x38);
    FUN_008b232c(plVar1,2,2,0x200000001);
    *plVar1 = (long)(PTR_DAT_00d53000 + 0x10);
    return plVar1;
  case 0x19:
    plVar1 = (long *)operator_new(0x38);
    FUN_008b232c(plVar1,2,2,0x300000002);
    *plVar1 = (long)(PTR_DAT_00d53000 + 0x10);
    return plVar1;
  case 0x1a:
    plVar1 = (long *)operator_new(0x38);
    FUN_008b232c(plVar1,2,3,0x200000001);
    *plVar1 = (long)(PTR_DAT_00d53008 + 0x10);
    return plVar1;
  case 0x1b:
    plVar1 = (long *)operator_new(0x38);
    FUN_008b232c(plVar1,2,3,0x300000002);
    *plVar1 = (long)(PTR_DAT_00d53008 + 0x10);
    return plVar1;
  case 0x1c:
    plVar1 = (long *)operator_new(0x38);
    FUN_008b232c(plVar1,3,1,0x200000001);
    *plVar1 = (long)(PTR_DAT_00d53010 + 0x10);
    return plVar1;
  case 0x1d:
    plVar1 = (long *)operator_new(0x38);
    FUN_008b232c(plVar1,3,1,0x300000002);
    *plVar1 = (long)(PTR_DAT_00d53010 + 0x10);
    return plVar1;
  case 0x1e:
    plVar1 = (long *)operator_new(0x38);
    FUN_008b232c(plVar1,3,2,0x200000001);
    *plVar1 = (long)(PTR_DAT_00d53018 + 0x10);
    return plVar1;
  case 0x1f:
    plVar1 = (long *)operator_new(0x38);
    FUN_008b232c(plVar1,3,2,0x300000002);
    *plVar1 = (long)(PTR_DAT_00d53018 + 0x10);
    return plVar1;
  case 0x20:
    plVar1 = (long *)operator_new(0x38);
    FUN_008b232c(plVar1,3,3,0x200000001);
    *plVar1 = (long)(PTR_DAT_00d53020 + 0x10);
    return plVar1;
  case 0x21:
    plVar1 = (long *)operator_new(0x38);
    FUN_008b232c(plVar1,3,3,0x300000002);
    *plVar1 = (long)(PTR_DAT_00d53020 + 0x10);
    return plVar1;
  default:
    return (long *)0x0;
  }
}


// ===== 008a76e8  FUN_008a76e8 =====

void FUN_008a76e8(undefined8 *param_1,byte param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_2 < 0x22) {
    uVar1 = (&switchD_008a76dc::switchdataD_00d3bbf0)[param_2];
    uVar3 = *(undefined8 *)(uVar1 + 0x18);
    uVar2 = *(undefined8 *)(uVar1 + 0x10);
    uVar5 = *(undefined8 *)(uVar1 + 0x28);
    uVar4 = *(undefined8 *)(uVar1 + 0x20);
    uVar7 = *(undefined8 *)(uVar1 + 0x34);
    uVar6 = *(undefined8 *)(uVar1 + 0x2c);
    *(undefined1 *)((long)param_1 + 0x2c) = 1;
    param_1[1] = uVar3;
    *param_1 = uVar2;
    param_1[3] = uVar5;
    param_1[2] = uVar4;
    *(undefined8 *)((long)param_1 + 0x24) = uVar7;
    *(undefined8 *)((long)param_1 + 0x1c) = uVar6;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  return;
}


// ===== 008a7730  switchD_008a76dc::caseD_0 =====

void switchD_008a76dc::caseD_0(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x10);
  *plVar1 = (long)(PTR_DAT_00d52f78 + 0x10);
  plVar1[1] = 0;
  *(undefined2 *)(plVar1 + 1) = 0x101;
  return;
}


// ===== 008a7768  switchD_008a76dc::caseD_1 =====

long * switchD_008a76dc::caseD_1(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x38);
  FUN_008a81f0(plVar1,1,2,0x200000001);
  *plVar1 = (long)(PTR_DAT_00d52f80 + 0x10);
  return plVar1;
}


// ===== 008a77bc  switchD_008a76dc::caseD_2 =====

long * switchD_008a76dc::caseD_2(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x38);
  FUN_008a81f0(plVar1,1,3,0x200000001);
  *plVar1 = (long)(PTR_DAT_00d52f88 + 0x10);
  return plVar1;
}


// ===== 008a7810  switchD_008a76dc::caseD_3 =====

long * switchD_008a76dc::caseD_3(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x38);
  FUN_008a81f0(plVar1,2,1,0x200000001);
  *plVar1 = (long)(PTR_DAT_00d52f90 + 0x10);
  return plVar1;
}


// ===== 008a7864  switchD_008a76dc::caseD_4 =====

long * switchD_008a76dc::caseD_4(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x38);
  FUN_008a81f0(plVar1,2,1,0x300000002);
  *plVar1 = (long)(PTR_DAT_00d52f90 + 0x10);
  return plVar1;
}


// ===== 008a78b8  switchD_008a76dc::caseD_5 =====

long * switchD_008a76dc::caseD_5(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x30);
  FUN_008ad778(plVar1,2,1);
  *plVar1 = (long)(PTR_DAT_00d52f98 + 0x10);
  return plVar1;
}


// ===== 008a7904  switchD_008a76dc::caseD_6 =====

long * switchD_008a76dc::caseD_6(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x38);
  FUN_008a81f0(plVar1,2,2,0x200000001);
  *plVar1 = (long)(PTR_DAT_00d52fa0 + 0x10);
  return plVar1;
}


// ===== 008a7958  switchD_008a76dc::caseD_7 =====

long * switchD_008a76dc::caseD_7(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x38);
  FUN_008a81f0(plVar1,2,2,0x300000002);
  *plVar1 = (long)(PTR_DAT_00d52fa0 + 0x10);
  return plVar1;
}


// ===== 008a79ac  switchD_008a76dc::caseD_8 =====

long * switchD_008a76dc::caseD_8(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x30);
  FUN_008ad778(plVar1,2,2);
  *plVar1 = (long)(PTR_DAT_00d52fa8 + 0x10);
  return plVar1;
}


// ===== 008a79f8  switchD_008a76dc::caseD_9 =====

void switchD_008a76dc::caseD_9(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x18);
  *plVar1 = (long)(PTR_DAT_00d52fb0 + 0x10);
  plVar1[1] = 0;
  plVar1[2] = 0xf;
  return;
}


// ===== 008a7a30  switchD_008a76dc::caseD_a =====

long * switchD_008a76dc::caseD_a(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x38);
  FUN_008a81f0(plVar1,2,3,0x200000001);
  *plVar1 = (long)(PTR_DAT_00d52fb8 + 0x10);
  return plVar1;
}


// ===== 008a7a84  switchD_008a76dc::caseD_b =====

long * switchD_008a76dc::caseD_b(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x38);
  FUN_008a81f0(plVar1,2,3,0x300000002);
  *plVar1 = (long)(PTR_DAT_00d52fb8 + 0x10);
  return plVar1;
}


// ===== 008a7ad8  switchD_008a76dc::caseD_c =====

long * switchD_008a76dc::caseD_c(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x30);
  FUN_008ad778(plVar1,2,3);
  *plVar1 = (long)(PTR_DAT_00d52fc0 + 0x10);
  return plVar1;
}


// ===== 008a7b24  switchD_008a76dc::caseD_d =====

long * switchD_008a76dc::caseD_d(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x38);
  FUN_008a81f0(plVar1,3,1,0x200000001);
  *plVar1 = (long)(PTR_DAT_00d52fc8 + 0x10);
  return plVar1;
}


// ===== 008a7b78  switchD_008a76dc::caseD_e =====

long * switchD_008a76dc::caseD_e(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x38);
  FUN_008a81f0(plVar1,3,1,0x300000002);
  *plVar1 = (long)(PTR_DAT_00d52fc8 + 0x10);
  return plVar1;
}


// ===== 008a7bcc  switchD_008a76dc::caseD_f =====

long * switchD_008a76dc::caseD_f(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x30);
  FUN_008ad778(plVar1,3,1);
  *plVar1 = (long)(PTR_DAT_00d52fd0 + 0x10);
  return plVar1;
}


// ===== 008a7c18  switchD_008a76dc::caseD_10 =====

long * switchD_008a76dc::caseD_10(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x38);
  FUN_008a81f0(plVar1,3,2,0x200000001);
  *plVar1 = (long)(PTR_DAT_00d52fd8 + 0x10);
  return plVar1;
}


// ===== 008a7c6c  switchD_008a76dc::caseD_11 =====

long * switchD_008a76dc::caseD_11(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x38);
  FUN_008a81f0(plVar1,3,2,0x300000002);
  *plVar1 = (long)(PTR_DAT_00d52fd8 + 0x10);
  return plVar1;
}


// ===== 008a7cc0  switchD_008a76dc::caseD_12 =====

long * switchD_008a76dc::caseD_12(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x30);
  FUN_008ad778(plVar1,3,2);
  *plVar1 = (long)(PTR_DAT_00d52fe0 + 0x10);
  return plVar1;
}


// ===== 008a7d0c  switchD_008a76dc::caseD_13 =====

long * switchD_008a76dc::caseD_13(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x38);
  FUN_008a81f0(plVar1,3,3,0x200000001);
  *plVar1 = (long)(PTR_DAT_00d52fe8 + 0x10);
  return plVar1;
}


// ===== 008a7d60  switchD_008a76dc::caseD_14 =====

long * switchD_008a76dc::caseD_14(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x38);
  FUN_008a81f0(plVar1,3,3,0x300000002);
  *plVar1 = (long)(PTR_DAT_00d52fe8 + 0x10);
  return plVar1;
}


// ===== 008a7db4  switchD_008a76dc::caseD_15 =====

long * switchD_008a76dc::caseD_15(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x30);
  FUN_008ad778(plVar1,3,3);
  *plVar1 = (long)(PTR_DAT_00d52ff0 + 0x10);
  return plVar1;
}


// ===== 008a7e00  switchD_008a76dc::caseD_16 =====

long * switchD_008a76dc::caseD_16(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x38);
  FUN_008b232c(plVar1,2,1,0x200000001);
  *plVar1 = (long)(PTR_DAT_00d52ff8 + 0x10);
  return plVar1;
}


// ===== 008a7e54  switchD_008a76dc::caseD_17 =====

long * switchD_008a76dc::caseD_17(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x38);
  FUN_008b232c(plVar1,2,1,0x300000002);
  *plVar1 = (long)(PTR_DAT_00d52ff8 + 0x10);
  return plVar1;
}


// ===== 008a7ea8  switchD_008a76dc::caseD_18 =====

long * switchD_008a76dc::caseD_18(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x38);
  FUN_008b232c(plVar1,2,2,0x200000001);
  *plVar1 = (long)(PTR_DAT_00d53000 + 0x10);
  return plVar1;
}


// ===== 008a7efc  switchD_008a76dc::caseD_19 =====

long * switchD_008a76dc::caseD_19(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x38);
  FUN_008b232c(plVar1,2,2,0x300000002);
  *plVar1 = (long)(PTR_DAT_00d53000 + 0x10);
  return plVar1;
}


// ===== 008a7f50  switchD_008a76dc::caseD_1a =====

long * switchD_008a76dc::caseD_1a(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x38);
  FUN_008b232c(plVar1,2,3,0x200000001);
  *plVar1 = (long)(PTR_DAT_00d53008 + 0x10);
  return plVar1;
}


// ===== 008a7fa4  switchD_008a76dc::caseD_1b =====

long * switchD_008a76dc::caseD_1b(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x38);
  FUN_008b232c(plVar1,2,3,0x300000002);
  *plVar1 = (long)(PTR_DAT_00d53008 + 0x10);
  return plVar1;
}


// ===== 008a7ff8  switchD_008a76dc::caseD_1c =====

long * switchD_008a76dc::caseD_1c(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x38);
  FUN_008b232c(plVar1,3,1,0x200000001);
  *plVar1 = (long)(PTR_DAT_00d53010 + 0x10);
  return plVar1;
}


// ===== 008a804c  switchD_008a76dc::caseD_1d =====

long * switchD_008a76dc::caseD_1d(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x38);
  FUN_008b232c(plVar1,3,1,0x300000002);
  *plVar1 = (long)(PTR_DAT_00d53010 + 0x10);
  return plVar1;
}


// ===== 008a80a0  switchD_008a76dc::caseD_1e =====

long * switchD_008a76dc::caseD_1e(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x38);
  FUN_008b232c(plVar1,3,2,0x200000001);
  *plVar1 = (long)(PTR_DAT_00d53018 + 0x10);
  return plVar1;
}


// ===== 008a80f4  switchD_008a76dc::caseD_1f =====

long * switchD_008a76dc::caseD_1f(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x38);
  FUN_008b232c(plVar1,3,2,0x300000002);
  *plVar1 = (long)(PTR_DAT_00d53018 + 0x10);
  return plVar1;
}


// ===== 008a8148  switchD_008a76dc::caseD_20 =====

long * switchD_008a76dc::caseD_20(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x38);
  FUN_008b232c(plVar1,3,3,0x200000001);
  *plVar1 = (long)(PTR_DAT_00d53020 + 0x10);
  return plVar1;
}


// ===== 008a819c  switchD_008a76dc::caseD_21 =====

long * switchD_008a76dc::caseD_21(void)

{
  long *plVar1;
  
  plVar1 = (long *)operator_new(0x38);
  FUN_008b232c(plVar1,3,3,0x300000002);
  *plVar1 = (long)(PTR_DAT_00d53020 + 0x10);
  return plVar1;
}


// ===== 008a81f0  FUN_008a81f0 =====

void FUN_008a81f0(undefined8 *param_1,int param_2,int param_3,undefined8 param_4)

{
  *param_1 = &PTR_FUN_00d3bd10;
  *(int *)(param_1 + 1) = param_2;
  *(int *)((long)param_1 + 0xc) = param_3;
  param_1[2] = param_4;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = (ulong)(uint)~(-1 << (ulong)(param_3 * param_2 & 0x1f));
  return;
}


// ===== 008a8228  FUN_008a8228 =====

void FUN_008a8228(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x8a8230);
  (*pcVar1)();
}


// ===== 008a8230  FUN_008a8230 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008a8230(undefined8 *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  int *piVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  uVar6 = _UNK_001f2fa8;
  uVar10 = _DAT_001f2fa0;
  uVar3 = *(uint *)(param_2 + 8);
  *(undefined4 *)(param_1 + 5) = 1;
  param_1[2] = uVar6;
  param_1[1] = uVar10;
  uVar10 = *(undefined8 *)(param_2 + 8);
  uVar4 = uVar3 - 1;
  uVar9 = (ulong)uVar4;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[4] = 0x100000001;
  param_1[3] = 0x100000001;
  *param_1 = uVar10;
  if (uVar4 < 4) {
    *(undefined4 *)((long)param_1 + (ulong)uVar4 * 4 + 0xc) = 1;
    *(undefined4 *)((long)param_1 + uVar9 * 4 + 0x1c) = 1;
    if (uVar4 != 0) {
      iVar1 = *(int *)(param_2 + 0x10);
      iVar2 = *(int *)(param_2 + 0x14);
      piVar8 = (int *)((long)param_1 + uVar9 * 4 + 0x1c);
      do {
        uVar9 = uVar9 - 1;
        lVar5 = (uVar9 & 0xffffffff) * 4;
        *(int *)((long)param_1 + lVar5 + 0xc) = piVar8[-4] * iVar1;
        *(int *)((long)param_1 + lVar5 + 0x1c) = *piVar8 * iVar2;
        piVar8 = piVar8 + -1;
      } while ((int)uVar9 != 0);
    }
    *(bool *)(param_1 + 1) = 1 < uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(0x5512,0x8a82cc);
  (*pcVar7)();
}


// ===== 008a82cc  FUN_008a82cc =====

undefined8 FUN_008a82cc(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      return 1;
    }
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 0;
      }
      if (*(int *)(param_1 + 0xc) < 2) {
        return 5;
      }
      uVar2 = (ulong)*(uint *)(param_1 + 8);
      if ((int)*(uint *)(param_1 + 8) < 1) {
        return 5;
      }
      uVar3 = 1;
      while ((uint)uVar3 < 0x20) {
        if ((*(ulong *)(param_1 + 0x30) >> (uVar3 & 0x3f) & 1) != 0) {
          return 3;
        }
        uVar2 = uVar2 - 1;
        uVar3 = (ulong)((uint)uVar3 + *(int *)(param_1 + 0xc));
        if (uVar2 == 0) {
          return 5;
        }
      }
LAB_008a844c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/bitset:686: libc++ Hardening assertion __p < _Size failed: bitset::operator[] index out of bounds\n"
                );
    }
  }
  else {
    if (iVar1 == 3) {
      if (*(int *)(param_1 + 0xc) < 3) {
        return 5;
      }
      uVar2 = (ulong)*(uint *)(param_1 + 8);
      if ((int)*(uint *)(param_1 + 8) < 1) {
        return 5;
      }
      uVar3 = 2;
      while ((uint)uVar3 < 0x20) {
        if ((*(ulong *)(param_1 + 0x30) >> (uVar3 & 0x3f) & 1) != 0) {
          return 4;
        }
        uVar2 = uVar2 - 1;
        uVar3 = (ulong)((uint)uVar3 + *(int *)(param_1 + 0xc));
        if (uVar2 == 0) {
          return 5;
        }
      }
      goto LAB_008a844c;
    }
    if (iVar1 != 5) {
      if (iVar1 == 4) {
        return 5;
      }
      return 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (2 < iVar1) {
    uVar2 = (ulong)*(uint *)(param_1 + 8);
    if ((int)*(uint *)(param_1 + 8) < 1) goto LAB_008a83a0;
    uVar3 = 2;
    do {
      if (0x1f < (uint)uVar3) goto LAB_008a844c;
      if ((*(ulong *)(param_1 + 0x30) >> (uVar3 & 0x3f) & 1) != 0) {
        return 2;
      }
      uVar2 = uVar2 - 1;
      uVar3 = (ulong)((uint)uVar3 + iVar1);
    } while (uVar2 != 0);
  }
  if (iVar1 < 2) {
    return 5;
  }
LAB_008a83a0:
  uVar2 = (ulong)*(uint *)(param_1 + 8);
  if (0 < (int)*(uint *)(param_1 + 8)) {
    uVar3 = 1;
    do {
      if (0x1f < (uint)uVar3) goto LAB_008a844c;
      if ((*(ulong *)(param_1 + 0x30) >> (uVar3 & 0x3f) & 1) != 0) {
        return 3;
      }
      uVar2 = uVar2 - 1;
      uVar3 = (ulong)((uint)uVar3 + iVar1);
    } while (uVar2 != 0);
  }
  return 5;
}


// ===== 008a8460  FUN_008a8460 =====

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_008a8460(undefined8 *param_1,long *param_2,uint param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  bool bVar4;
  code *pcVar5;
  uint uVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong *puVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  undefined1 local_130;
  undefined7 uStack_12f;
  char cStack_119;
  undefined1 local_118;
  undefined7 uStack_117;
  char cStack_101;
  undefined1 uStack_f9;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 *local_e8;
  char *local_e0;
  undefined8 *puStack_d8;
  ulong local_d0;
  char **local_c8;
  undefined *local_c0;
  ulong *puStack_b8;
  ulong local_b0;
  undefined **local_a8;
  char *local_a0;
  ulong *puStack_98;
  undefined1 *local_90;
  char **ppcStack_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  
  local_80 = (undefined8 *)0x0;
  local_78 = (undefined8 *)0x0;
  puVar14 = (ulong *)(param_2 + 6);
  local_70 = (undefined8 *)0x0;
  if ((int)*puVar14 == 0) {
    *(undefined4 *)(param_2 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    return;
  }
  FUN_008a8e44(&local_80,(long)(int)param_2[1]);
  if (((param_3 & 1) != 0) || ((int)param_2[3] == 0)) {
    *(undefined4 *)(param_2 + 3) = 0;
    param_2[4] = param_2[4] & 0xfffffffffffffff8;
  }
  uVar6 = FUN_008a82cc(param_2);
  if ((int)uVar6 < 3) {
    if (uVar6 == 1) goto LAB_008a8568;
    if (uVar6 != 2) goto LAB_008a8bd8;
  }
  else {
    if (uVar6 == 5) {
LAB_008a8568:
      param_2[5] = param_2[5] & 0xfffffffffffffff8;
      if (0 < (int)param_2[1]) {
        uVar17 = 0;
        bVar4 = false;
        iVar9 = -0x55555600;
        do {
          iVar15 = (int)uVar17;
          uVar3 = *(int *)((long)param_2 + 0xc) * iVar15;
          if (0x1f < uVar3) goto LAB_008a8df8;
          if ((*puVar14 >> ((ulong)uVar3 & 0x3f) & 1) == 0) {
            if (2 < uVar17) {
                    /* WARNING: Subroutine does not return */
              FUN_005f55a8("bitset reset argument out of range");
            }
            param_2[4] = param_2[4] & (1L << (uVar17 & 0x3f) ^ 0xffffffffffffffffU);
          }
          else {
            if (local_78 < local_70) {
              if (local_78 == (undefined8 *)0x0) goto LAB_008a8de4;
              local_78[10] = 0;
              puVar8 = local_78 + 0xb;
              local_78[3] = 0;
              local_78[2] = 0;
              local_78[5] = 0;
              local_78[4] = 0;
              local_78[7] = 0;
              local_78[6] = 0;
              local_78[9] = 0;
              local_78[8] = 0;
              local_78[1] = 0;
              *local_78 = 0;
            }
            else {
              puVar8 = (undefined8 *)FUN_008ac89c(&local_80);
            }
            local_78 = puVar8;
            if (local_80 == puVar8) goto LAB_008a8e0c;
            *(uint *)(puVar8 + -0xb) = uVar6;
            *(int *)(puVar8 + -10) = iVar15;
            *(undefined4 *)((long)puVar8 + -0x4c) = 0;
            if (bVar4) {
              local_f8 = (char *)CONCAT44(local_f8._4_4_,iVar9);
              local_118 = 1;
              puVar7 = puVar8 + -9;
              local_130 = 0;
              if ((*puVar7 & 1) == 0) {
                puVar12 = puVar8 + -8;
                uVar13 = 8;
              }
              else {
                puVar12 = (undefined8 *)puVar8[-8];
                uVar13 = puVar8[-7];
              }
              uVar10 = *puVar7 >> 1;
              if (uVar10 == uVar13) {
                FUN_008aca3c(puVar7,&local_f8,&local_118,&local_130);
              }
              else {
                piVar1 = (int *)(puVar12 + uVar10);
                if (piVar1 == (int *)0x0) goto LAB_008a8de4;
                *piVar1 = iVar9;
                *(undefined2 *)(piVar1 + 1) = 1;
                *puVar7 = *puVar7 + 2;
              }
            }
            else if (uVar6 == 1) {
              *(undefined1 *)((long)puVar8 + -0x54) = 1;
            }
            if (2 < uVar17) goto LAB_008a8780;
            puVar7 = puVar8 + -9;
            puVar12 = puVar8 + -8;
            local_f8._4_4_ = (undefined4)((ulong)local_f8 >> 0x20);
            if (((ulong)param_2[4] >> (uVar17 & 0x3f) & 1) == 0) {
              local_f8 = (char *)CONCAT44(local_f8._4_4_,iVar15);
              local_118 = 0;
              local_130 = 1;
              if ((*puVar7 & 1) == 0) {
                uVar13 = 8;
              }
              else {
                puVar12 = (undefined8 *)puVar8[-8];
                uVar13 = puVar8[-7];
              }
              uVar10 = *puVar7 >> 1;
              if (uVar10 != uVar13) {
                piVar1 = (int *)(puVar12 + uVar10);
                if (piVar1 != (int *)0x0) {
                  *piVar1 = iVar15;
                  *(undefined2 *)(piVar1 + 1) = 0x100;
                  goto LAB_008a85a8;
                }
                goto LAB_008a8de4;
              }
LAB_008a8754:
              local_f8 = (char *)CONCAT44(local_f8._4_4_,iVar15);
              local_130 = 1;
              FUN_008aca3c(puVar7,&local_f8,&local_118,&local_130);
            }
            else {
              local_f8 = (char *)CONCAT44(local_f8._4_4_,iVar15);
              local_118 = 1;
              local_130 = 1;
              if ((*puVar7 & 1) == 0) {
                uVar13 = 8;
              }
              else {
                puVar12 = (undefined8 *)puVar8[-8];
                uVar13 = puVar8[-7];
              }
              uVar10 = *puVar7 >> 1;
              if (uVar10 == uVar13) goto LAB_008a8754;
              piVar1 = (int *)(puVar12 + uVar10);
              if (piVar1 == (int *)0x0) goto LAB_008a8de4;
              *piVar1 = iVar15;
              *(undefined2 *)(piVar1 + 1) = 0x101;
LAB_008a85a8:
              local_f8 = (char *)CONCAT44(local_f8._4_4_,iVar15);
              local_130 = 1;
              *puVar7 = *puVar7 + 2;
            }
            bVar4 = true;
            iVar9 = iVar15;
          }
          uVar17 = uVar17 + 1;
        } while ((long)uVar17 < (long)(int)param_2[1]);
      }
      goto LAB_008a8bd8;
    }
    if (uVar6 != 4) {
      if ((uVar6 == 3) && (iVar9 = (int)param_2[1], 0 < iVar9)) {
        uVar17 = 0;
        bVar4 = false;
        iVar15 = -0x55555600;
        do {
          iVar16 = (int)uVar17;
          uVar3 = *(int *)((long)param_2 + 0xc) * iVar16 + 1;
          if (0x1f < uVar3) {
LAB_008a8df8:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/bitset:686: libc++ Hardening assertion __p < _Size failed: bitset::operator[] index out of bounds\n"
                      );
          }
          if ((*puVar14 >> ((ulong)uVar3 & 0x3f) & 1) != 0) {
            if (2 < uVar17) {
LAB_008a8780:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/bitset:696: libc++ Hardening assertion __p < _Size failed: bitset::operator[] index out of bounds\n"
                        );
            }
            if (((ulong)param_2[4] >> (uVar17 & 0x3f) & 1) != 0) {
              if (local_78 < local_70) {
                if (local_78 == (undefined8 *)0x0) {
LAB_008a8de4:
                    /* WARNING: Subroutine does not return */
                  std::__Cr::__libcpp_verbose_abort
                            ("%s",
                             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                            );
                }
                local_78[10] = 0;
                puVar8 = local_78 + 0xb;
                local_78[3] = 0;
                local_78[2] = 0;
                local_78[5] = 0;
                local_78[4] = 0;
                local_78[7] = 0;
                local_78[6] = 0;
                local_78[9] = 0;
                local_78[8] = 0;
                local_78[1] = 0;
                *local_78 = 0;
              }
              else {
                puVar8 = (undefined8 *)FUN_008ac89c(&local_80);
              }
              local_78 = puVar8;
              if (local_80 == puVar8) {
LAB_008a8e0c:
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
                          );
              }
              *(int *)(puVar8 + -10) = iVar16;
              *(undefined4 *)((long)puVar8 + -0x4c) = 1;
              *(undefined4 *)(puVar8 + -0xb) = 3;
              local_f8 = (char *)CONCAT44(local_f8._4_4_,iVar16);
              local_118 = 1;
              puVar7 = puVar8 + -9;
              puVar12 = puVar8 + -8;
              local_130 = 0;
              if ((*puVar7 & 1) == 0) {
                puVar11 = puVar8 + -8;
                uVar13 = 8;
              }
              else {
                puVar11 = (undefined8 *)puVar8[-8];
                uVar13 = puVar8[-7];
              }
              uVar10 = *puVar7 >> 1;
              if (uVar10 == uVar13) {
                FUN_008aca3c(puVar7,&local_f8,&local_118,&local_130);
              }
              else {
                piVar1 = (int *)(puVar11 + uVar10);
                if (piVar1 == (int *)0x0) goto LAB_008a8de4;
                *piVar1 = iVar16;
                *(undefined2 *)(piVar1 + 1) = 1;
                *puVar7 = *puVar7 + 2;
              }
              if (bVar4) {
                local_f8._4_4_ = (undefined4)((ulong)local_f8 >> 0x20);
                local_f8 = (char *)CONCAT44(local_f8._4_4_,iVar15);
                local_118 = 1;
                local_130 = 0;
                if ((*puVar7 & 1) == 0) {
                  puVar11 = puVar8 + -8;
                  uVar13 = 8;
                }
                else {
                  puVar11 = (undefined8 *)puVar8[-8];
                  uVar13 = puVar8[-7];
                }
                uVar10 = *puVar7 >> 1;
                if (uVar10 == uVar13) {
                  FUN_008aca3c(puVar7,&local_f8,&local_118,&local_130);
                }
                else {
                  piVar1 = (int *)(puVar11 + uVar10);
                  if (piVar1 == (int *)0x0) goto LAB_008a8de4;
                  *piVar1 = iVar15;
                  *(undefined2 *)(piVar1 + 1) = 1;
                  *puVar7 = *puVar7 + 2;
                }
              }
              iVar9 = (int)param_2[1];
              if ((2 < *(int *)((long)param_2 + 0xc)) || ((long)uVar17 < (long)(iVar9 + -1))) {
                local_118 = 0;
                local_f8 = (char *)CONCAT44(local_f8._4_4_,iVar16 + iVar9);
                local_130 = 1;
                if ((*puVar7 & 1) == 0) {
                  uVar13 = 8;
                }
                else {
                  puVar12 = (undefined8 *)puVar8[-8];
                  uVar13 = puVar8[-7];
                }
                uVar10 = *puVar7 >> 1;
                if (uVar10 == uVar13) {
                  FUN_008aca3c(puVar7,&local_f8,&local_118,&local_130);
                }
                else {
                  piVar1 = (int *)(puVar12 + uVar10);
                  if (piVar1 == (int *)0x0) goto LAB_008a8de4;
                  *piVar1 = iVar16 + iVar9;
                  *(undefined2 *)(piVar1 + 1) = 0x100;
                  *puVar7 = *puVar7 + 2;
                }
                iVar9 = (int)param_2[1];
              }
              iVar15 = iVar16 + iVar9;
              bVar4 = true;
            }
          }
          uVar17 = uVar17 + 1;
        } while ((long)uVar17 < (long)iVar9);
      }
      goto LAB_008a8bd8;
    }
  }
  iVar9 = (int)param_2[1];
  if (0 < iVar9) {
    uVar17 = 0;
    bVar4 = false;
    iVar15 = -0x55555600;
    do {
      iVar16 = (int)uVar17;
      uVar3 = *(int *)((long)param_2 + 0xc) * iVar16 + 2;
      if (0x1f < uVar3) goto LAB_008a8df8;
      if ((*puVar14 >> ((ulong)uVar3 & 0x3f) & 1) != 0) {
        if (2 < uVar17) goto LAB_008a8780;
        uVar13 = 1L << (uVar17 & 0x3f);
        if ((param_2[4] & uVar13) != 0) {
          if (local_78 < local_70) {
            if (local_78 == (undefined8 *)0x0) goto LAB_008a8de4;
            local_78[10] = 0;
            puVar8 = local_78 + 0xb;
            local_78[3] = 0;
            local_78[2] = 0;
            local_78[5] = 0;
            local_78[4] = 0;
            local_78[7] = 0;
            local_78[6] = 0;
            local_78[9] = 0;
            local_78[8] = 0;
            local_78[1] = 0;
            *local_78 = 0;
          }
          else {
            puVar8 = (undefined8 *)FUN_008ac89c(&local_80);
          }
          local_78 = puVar8;
          if (local_80 == puVar8) goto LAB_008a8e0c;
          *(uint *)(puVar8 + -0xb) = uVar6;
          *(int *)(puVar8 + -10) = iVar16;
          *(undefined4 *)((long)puVar8 + -0x4c) = 2;
          if ((uVar6 == 4) && ((param_2[5] & uVar13) != 0)) {
            local_118 = 1;
            iVar9 = iVar16 + (int)param_2[1];
            local_f8 = (char *)CONCAT44(local_f8._4_4_,iVar9);
            local_130 = 0;
            if ((puVar8[-9] & 1) == 0) {
              puVar12 = puVar8 + -8;
              uVar13 = 8;
            }
            else {
              puVar12 = (undefined8 *)puVar8[-8];
              uVar13 = puVar8[-7];
            }
            uVar10 = (ulong)puVar8[-9] >> 1;
            if (uVar10 == uVar13) goto LAB_008a89b8;
            piVar1 = (int *)(puVar12 + uVar10);
            if (piVar1 == (int *)0x0) goto LAB_008a8de4;
            *piVar1 = iVar9;
            *(undefined2 *)(piVar1 + 1) = 1;
LAB_008a88d8:
            local_118 = 1;
            local_130 = 0;
            puVar8[-9] = puVar8[-9] + 2;
          }
          else {
            local_f8 = (char *)CONCAT44(local_f8._4_4_,iVar16);
            local_118 = 1;
            local_130 = 0;
            if ((puVar8[-9] & 1) == 0) {
              puVar12 = puVar8 + -8;
              uVar13 = 8;
            }
            else {
              puVar12 = (undefined8 *)puVar8[-8];
              uVar13 = puVar8[-7];
            }
            uVar10 = (ulong)puVar8[-9] >> 1;
            if (uVar10 != uVar13) {
              piVar1 = (int *)(puVar12 + uVar10);
              if (piVar1 != (int *)0x0) {
                *piVar1 = iVar16;
                *(undefined2 *)(piVar1 + 1) = 1;
                goto LAB_008a88d8;
              }
              goto LAB_008a8de4;
            }
LAB_008a89b8:
            local_118 = 1;
            local_130 = 0;
            FUN_008aca3c(puVar8 + -9,&local_f8,&local_118,&local_130);
          }
          if (bVar4) {
            local_f8._4_4_ = (undefined4)((ulong)local_f8 >> 0x20);
            local_f8 = (char *)CONCAT44(local_f8._4_4_,iVar15);
            local_118 = 1;
            puVar7 = puVar8 + -9;
            local_130 = 0;
            if ((*puVar7 & 1) == 0) {
              puVar12 = puVar8 + -8;
              uVar13 = 8;
            }
            else {
              puVar12 = (undefined8 *)puVar8[-8];
              uVar13 = puVar8[-7];
            }
            uVar10 = *puVar7 >> 1;
            if (uVar10 == uVar13) {
              FUN_008aca3c(puVar7,&local_f8,&local_118,&local_130);
            }
            else {
              piVar1 = (int *)(puVar12 + uVar10);
              if (piVar1 == (int *)0x0) goto LAB_008a8de4;
              *piVar1 = iVar15;
              *(undefined2 *)(piVar1 + 1) = 1;
              *puVar7 = *puVar7 + 2;
            }
          }
          iVar9 = (int)param_2[1];
          if ((long)uVar17 < (long)(iVar9 + -1)) {
            local_118 = 0;
            iVar9 = iVar16 + iVar9 * 2;
            local_f8 = (char *)CONCAT44(local_f8._4_4_,iVar9);
            puVar7 = puVar8 + -9;
            local_130 = 1;
            if ((*puVar7 & 1) == 0) {
              puVar12 = puVar8 + -8;
              uVar13 = 8;
            }
            else {
              puVar12 = (undefined8 *)puVar8[-8];
              uVar13 = puVar8[-7];
            }
            uVar10 = *puVar7 >> 1;
            if (uVar10 == uVar13) {
              FUN_008aca3c(puVar7,&local_f8,&local_118,&local_130);
            }
            else {
              piVar1 = (int *)(puVar12 + uVar10);
              if (piVar1 == (int *)0x0) goto LAB_008a8de4;
              *piVar1 = iVar9;
              *(undefined2 *)(piVar1 + 1) = 0x100;
              *puVar7 = *puVar7 + 2;
            }
            iVar9 = (int)param_2[1];
          }
          iVar15 = iVar16 + iVar9 * 2;
          bVar4 = true;
        }
      }
      uVar17 = uVar17 + 1;
    } while ((long)uVar17 < (long)iVar9);
  }
LAB_008a8bd8:
  if (((param_3 & 1) == 0) && (local_80 == local_78)) {
    uVar17 = FUN_004022fc();
    if ((uVar17 & 1) == 0) {
      local_f8 = "../../modules/video_coding/svc/scalability_structure_full_svc.cc";
      local_f0 = 0x752;
      local_e8 = &uStack_f9;
      puStack_d8 = &local_f8;
      local_e0 = "Failed to generate configuration for L";
      local_c8 = &local_e0;
      local_d0 = (ulong)*(uint *)(param_2 + 1);
      local_b0 = (ulong)*(uint *)((long)param_2 + 0xc);
      puStack_b8 = &local_d0;
      local_c0 = &DAT_001af347;
      local_a8 = &local_c0;
      puStack_98 = &local_b0;
      local_a0 = " with active decode targets ";
      FUN_008acdb4(&local_130,puVar14,0x2d,0x31);
      FUN_00547e10(&local_118,&local_130,
                   0x20 - (long)(*(int *)((long)param_2 + 0xc) * (int)param_2[1]),0xffffffffffffffff
                   ,&local_90);
      ppcStack_88 = &local_a0;
      local_90 = &local_118;
      if (6 < *(uint *)(param_2 + 3)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x8a8e44);
        (*pcVar5)();
      }
      puVar2 = (undefined4 *)((undefined8 *)puStack_98[1])[1];
      puVar12 = *(undefined8 **)(puVar2 + 2);
      puVar8 = (undefined8 *)puVar12[1];
      FUN_00623bb0(&DAT_00224384,*puVar8,*(undefined4 *)(puVar8 + 1),*puVar12,*puVar2,
                   *(undefined8 *)puStack_98[1],(int)*puStack_98,local_a0,&local_118,
                   " and transition from ",&UNK_00d3bd48 + (ulong)*(uint *)(param_2 + 3) * 0x10,
                   &DAT_0019fec4,&UNK_00d3bd48 + (ulong)uVar6 * 0x10,". Resetting.");
      if (cStack_101 < '\0') {
        operator_delete((void *)CONCAT71(uStack_117,local_118));
      }
      if (cStack_119 < '\0') {
        operator_delete((void *)CONCAT71(uStack_12f,local_130));
      }
    }
    (**(code **)(*param_2 + 0x28))(param_1,param_2,1);
    puVar8 = local_80;
    puVar12 = local_78;
    if (local_80 != (undefined8 *)0x0) {
      while (puVar11 = puVar12, puVar8 != puVar11) {
        puVar12 = puVar11 + -0xb;
        if (puVar12 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if ((*(byte *)(puVar11 + -9) & 1) != 0) {
          operator_delete((void *)puVar11[-8]);
        }
      }
      local_78 = puVar8;
      operator_delete(local_80);
    }
  }
  else {
    *param_1 = local_80;
    param_1[1] = local_78;
    param_1[2] = local_70;
  }
  return;
}


// ===== 008a8e44  FUN_008a8e44 =====

void FUN_008a8e44(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  size_t __n;
  void *__dest;
  int *piVar6;
  long lVar7;
  undefined8 *extraout_x8;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  void *__src;
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_bc [4];
  undefined4 uStack_b8;
  undefined1 auStack_b4 [4];
  undefined1 *puStack_b0;
  code *pcStack_a8;
  void *local_50;
  long local_48;
  long local_40;
  void *local_38;
  
  lVar7 = *param_1;
  if (param_2 <= (ulong)((param_1[2] - lVar7 >> 3) * 0x2e8ba2e8ba2e8ba3)) {
    return;
  }
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    lVar9 = param_1[1];
    local_50 = operator_new(param_2 * 0x58);
    local_48 = (long)local_50 + (lVar9 - lVar7);
    local_38 = (void *)((long)local_50 + param_2 * 0x58);
    local_40 = local_48;
    FUN_008ac77c(param_1,&local_50);
    lVar7 = local_48;
    lVar9 = local_40;
    while (lVar2 = lVar9, lVar7 != lVar2) {
      lVar9 = lVar2 + -0x58;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if ((*(byte *)(lVar2 + -0x48) & 1) != 0) {
        operator_delete(*(void **)(lVar2 + -0x40));
      }
    }
    if (local_50 == (void *)0x0) {
      return;
    }
    local_40 = lVar2;
    operator_delete(local_50);
    return;
  }
  auVar15 = FUN_008ac764();
  piVar6 = auVar15._8_8_;
  lVar7 = auVar15._0_8_;
  pcStack_a8 = FUN_008a8f64;
  *(int *)(lVar7 + 0x18) = *piVar6;
  iVar14 = piVar6[3];
  puStack_b0 = &stack0xffffffffffffffd0;
  if (iVar14 == 0) {
    if (2 < (uint)piVar6[2]) goto LAB_008a9378;
    *(ulong *)(lVar7 + 0x20) = *(ulong *)(lVar7 + 0x20) | 1L << ((ulong)(uint)piVar6[2] & 0x3f);
    iVar14 = piVar6[3];
  }
  if (iVar14 == 1) {
    if (2 < (uint)piVar6[2]) {
LAB_008a9378:
                    /* WARNING: Subroutine does not return */
      FUN_005f55a8("bitset set argument out of range");
    }
    *(ulong *)(lVar7 + 0x28) = *(ulong *)(lVar7 + 0x28) | 1L << ((ulong)(uint)piVar6[2] & 0x3f);
  }
  extraout_x8[3] = &DAT_aaaaaaaaaaaaaaaa;
  extraout_x8[2] = &DAT_aaaaaaaaaaaaaaaa;
  extraout_x8[5] = &DAT_aaaaaaaaaaaaaaaa;
  extraout_x8[4] = &DAT_aaaaaaaaaaaaaaaa;
  extraout_x8[7] = &DAT_aaaaaaaaaaaaaaaa;
  extraout_x8[6] = &DAT_aaaaaaaaaaaaaaaa;
  extraout_x8[9] = &DAT_aaaaaaaaaaaaaaaa;
  extraout_x8[8] = &DAT_aaaaaaaaaaaaaaaa;
  extraout_x8[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  extraout_x8[10] = &DAT_aaaaaaaaaaaaaaaa;
  extraout_x8[0xd] = &DAT_aaaaaaaaaaaaaaaa;
  extraout_x8[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  extraout_x8[0xf] = &DAT_aaaaaaaaaaaaaaaa;
  extraout_x8[0xe] = &DAT_aaaaaaaaaaaaaaaa;
  extraout_x8[0x11] = &DAT_aaaaaaaaaaaaaaaa;
  extraout_x8[0x10] = &DAT_aaaaaaaaaaaaaaaa;
  extraout_x8[0x13] = &DAT_aaaaaaaaaaaaaaaa;
  extraout_x8[0x12] = &DAT_aaaaaaaaaaaaaaaa;
  extraout_x8[0x15] = &DAT_aaaaaaaaaaaaaaaa;
  extraout_x8[0x14] = &DAT_aaaaaaaaaaaaaaaa;
  extraout_x8[0x17] = &DAT_aaaaaaaaaaaaaaaa;
  extraout_x8[0x16] = &DAT_aaaaaaaaaaaaaaaa;
  extraout_x8[0x19] = &DAT_aaaaaaaaaaaaaaaa;
  extraout_x8[0x18] = &DAT_aaaaaaaaaaaaaaaa;
  extraout_x8[1] = &DAT_aaaaaaaaaaaaaaaa;
  *extraout_x8 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00850a9c(extraout_x8);
  *extraout_x8 = *(undefined8 *)(piVar6 + 2);
  if ((int *)(extraout_x8 + 0xd) != piVar6 + 4) {
    piVar4 = piVar6 + 6;
    if ((*(ulong *)(piVar6 + 4) & 1) != 0) {
      piVar4 = *(int **)(piVar6 + 6);
    }
    FUN_008ad1a4(extraout_x8 + 0xd,piVar4,(long)(*(ulong *)(piVar6 + 4) << 2) >> 3);
  }
  FUN_00850e90(extraout_x8 + 1,(long)(*(int *)(lVar7 + 0xc) * *(int *)(lVar7 + 8)));
  iVar14 = *(int *)(lVar7 + 8);
  if (0 < iVar14) {
    iVar8 = *(int *)(lVar7 + 0xc);
    iVar12 = 0;
    puVar1 = extraout_x8 + 2;
    do {
      if (0 < iVar8) {
        uStack_b8 = 0;
        if ((((piVar6[2] <= iVar12) && (piVar6[3] < 1)) && (uStack_b8 = 2, iVar12 != piVar6[2])) &&
           (((*(byte *)(piVar6 + 1) & 1) == 0 && (uStack_b8 = 2, *piVar6 != 1)))) {
          uStack_b8 = 3;
        }
        uVar10 = extraout_x8[1];
        uVar13 = 10;
        if ((uVar10 & 1) != 0) {
          uVar13 = extraout_x8[3];
        }
        if (uVar10 >> 1 == uVar13) {
          FUN_008ad380(extraout_x8 + 1,&uStack_b8);
        }
        else {
          puVar5 = puVar1;
          if ((uVar10 & 1) != 0) {
            puVar5 = (undefined8 *)*puVar1;
          }
          puVar3 = (undefined4 *)((long)puVar5 + (uVar10 >> 1) * 4);
          if (puVar3 == (undefined4 *)0x0) {
LAB_008a9350:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *puVar3 = uStack_b8;
          extraout_x8[1] = extraout_x8[1] + 2;
        }
        iVar8 = *(int *)(lVar7 + 0xc);
        if (1 < iVar8) {
          iVar14 = 1;
          do {
            if ((iVar12 < piVar6[2]) || (iVar14 < piVar6[3])) {
              uStack_b8 = 0;
            }
            else if (iVar12 == piVar6[2]) {
              uStack_b8 = 1;
              if (iVar14 != piVar6[3]) {
                uStack_b8 = 2;
              }
            }
            else if ((*(byte *)(piVar6 + 1) & 1) == 0) {
              uStack_b8 = 2;
              if (*piVar6 != 1) {
                uStack_b8 = 3;
              }
            }
            else {
              uStack_b8 = 2;
            }
            uVar10 = extraout_x8[1];
            uVar13 = 10;
            if ((uVar10 & 1) != 0) {
              uVar13 = extraout_x8[3];
            }
            if (uVar10 >> 1 == uVar13) {
              FUN_008ad380(extraout_x8 + 1,&uStack_b8);
            }
            else {
              puVar5 = puVar1;
              if ((uVar10 & 1) != 0) {
                puVar5 = (undefined8 *)*puVar1;
              }
              puVar3 = (undefined4 *)((long)puVar5 + (uVar10 >> 1) * 4);
              if (puVar3 == (undefined4 *)0x0) goto LAB_008a9350;
              *puVar3 = uStack_b8;
              extraout_x8[1] = extraout_x8[1] + 2;
            }
            iVar8 = *(int *)(lVar7 + 0xc);
            iVar14 = iVar14 + 1;
          } while (iVar14 < iVar8);
        }
        iVar14 = *(int *)(lVar7 + 8);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar14);
  }
  uVar13 = (ulong)iVar14;
  if (piVar6[3] == 0) {
    uVar10 = extraout_x8[0x17];
    auStack_b4[0] = 0;
    lVar9 = uVar13 - uVar10;
    if (uVar10 <= uVar13) {
      if ((ulong)(extraout_x8[0x18] * 0x40) < uVar13) {
        if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00632a3c();
        }
        lVar2 = (uVar13 - 1 >> 6) + 1;
        __dest = operator_new(lVar2 * 8);
        __src = (void *)extraout_x8[0x16];
        __n = 0;
        if (uVar10 != 0) {
          __n = (uVar10 - 1 >> 3 & 0x1ffffffffffffff8) + 8;
        }
        memmove(__dest,__src,__n);
        extraout_x8[0x16] = __dest;
        extraout_x8[0x18] = lVar2;
        if (__src != (void *)0x0) {
          operator_delete(__src);
          uVar10 = extraout_x8[0x17];
        }
      }
      FUN_008acbec(extraout_x8[0x16] + (uVar10 >> 6) * 8,uVar10 & 0x3f,lVar9,auStack_b4);
      iVar14 = *(int *)(lVar7 + 8);
    }
    extraout_x8[0x17] = uVar13;
    if (0 < iVar14) {
      uVar13 = 0;
      do {
        if ((ulong)extraout_x8[0x17] <= uVar13) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector_bool.h:297: libc++ Hardening assertion __n < size() failed: vector<bool>::operator[] index out of bounds\n"
                    );
        }
        lVar9 = extraout_x8[0x16];
        uVar10 = uVar13 >> 6;
        uVar11 = 1L << (uVar13 & 0x3f);
        if ((long)uVar13 < (long)piVar6[2]) {
          uVar11 = *(ulong *)(lVar9 + uVar10 * 8) & (uVar11 ^ 0xffffffffffffffff);
        }
        else {
          uVar11 = *(ulong *)(lVar9 + uVar10 * 8) | uVar11;
        }
        *(ulong *)(lVar9 + uVar10 * 8) = uVar11;
        uVar13 = uVar13 + 1;
      } while ((long)uVar13 < (long)*(int *)(lVar7 + 8));
    }
  }
  else {
    auStack_bc[0] = 0;
    FUN_008a9388(extraout_x8 + 0x16,uVar13,auStack_bc);
  }
  extraout_x8[0x19] = *(undefined8 *)(lVar7 + 0x30);
  return;
}


// ===== 008a8f64  FUN_008a8f64 =====

void FUN_008a8f64(undefined8 *param_1,long param_2,int *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  size_t __n;
  void *__dest;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  void *__src;
  int iVar12;
  undefined1 local_6c [4];
  undefined4 local_68;
  undefined1 local_64 [4];
  
  *(int *)(param_2 + 0x18) = *param_3;
  iVar12 = param_3[3];
  if (iVar12 == 0) {
    if (2 < (uint)param_3[2]) goto LAB_008a9378;
    *(ulong *)(param_2 + 0x20) = *(ulong *)(param_2 + 0x20) | 1L << ((ulong)(uint)param_3[2] & 0x3f)
    ;
    iVar12 = param_3[3];
  }
  if (iVar12 == 1) {
    if (2 < (uint)param_3[2]) {
LAB_008a9378:
                    /* WARNING: Subroutine does not return */
      FUN_005f55a8("bitset set argument out of range");
    }
    *(ulong *)(param_2 + 0x28) = *(ulong *)(param_2 + 0x28) | 1L << ((ulong)(uint)param_3[2] & 0x3f)
    ;
  }
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
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00850a9c(param_1);
  *param_1 = *(undefined8 *)(param_3 + 2);
  if ((int *)(param_1 + 0xd) != param_3 + 4) {
    piVar4 = param_3 + 6;
    if ((*(ulong *)(param_3 + 4) & 1) != 0) {
      piVar4 = *(int **)(param_3 + 6);
    }
    FUN_008ad1a4(param_1 + 0xd,piVar4,(long)(*(ulong *)(param_3 + 4) << 2) >> 3);
  }
  FUN_00850e90(param_1 + 1,(long)(*(int *)(param_2 + 0xc) * *(int *)(param_2 + 8)));
  iVar12 = *(int *)(param_2 + 8);
  if (0 < iVar12) {
    iVar6 = *(int *)(param_2 + 0xc);
    iVar10 = 0;
    puVar1 = param_1 + 2;
    do {
      if (0 < iVar6) {
        local_68 = 0;
        if ((((param_3[2] <= iVar10) && (param_3[3] < 1)) && (local_68 = 2, iVar10 != param_3[2]))
           && (((*(byte *)(param_3 + 1) & 1) == 0 && (local_68 = 2, *param_3 != 1)))) {
          local_68 = 3;
        }
        uVar7 = param_1[1];
        uVar11 = 10;
        if ((uVar7 & 1) != 0) {
          uVar11 = param_1[3];
        }
        if (uVar7 >> 1 == uVar11) {
          FUN_008ad380(param_1 + 1,&local_68);
        }
        else {
          puVar5 = puVar1;
          if ((uVar7 & 1) != 0) {
            puVar5 = (undefined8 *)*puVar1;
          }
          puVar3 = (undefined4 *)((long)puVar5 + (uVar7 >> 1) * 4);
          if (puVar3 == (undefined4 *)0x0) {
LAB_008a9350:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *puVar3 = local_68;
          param_1[1] = param_1[1] + 2;
        }
        iVar6 = *(int *)(param_2 + 0xc);
        if (1 < iVar6) {
          iVar12 = 1;
          do {
            if ((iVar10 < param_3[2]) || (iVar12 < param_3[3])) {
              local_68 = 0;
            }
            else if (iVar10 == param_3[2]) {
              local_68 = 1;
              if (iVar12 != param_3[3]) {
                local_68 = 2;
              }
            }
            else if ((*(byte *)(param_3 + 1) & 1) == 0) {
              local_68 = 2;
              if (*param_3 != 1) {
                local_68 = 3;
              }
            }
            else {
              local_68 = 2;
            }
            uVar7 = param_1[1];
            uVar11 = 10;
            if ((uVar7 & 1) != 0) {
              uVar11 = param_1[3];
            }
            if (uVar7 >> 1 == uVar11) {
              FUN_008ad380(param_1 + 1,&local_68);
            }
            else {
              puVar5 = puVar1;
              if ((uVar7 & 1) != 0) {
                puVar5 = (undefined8 *)*puVar1;
              }
              puVar3 = (undefined4 *)((long)puVar5 + (uVar7 >> 1) * 4);
              if (puVar3 == (undefined4 *)0x0) goto LAB_008a9350;
              *puVar3 = local_68;
              param_1[1] = param_1[1] + 2;
            }
            iVar6 = *(int *)(param_2 + 0xc);
            iVar12 = iVar12 + 1;
          } while (iVar12 < iVar6);
        }
        iVar12 = *(int *)(param_2 + 8);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar12);
  }
  uVar11 = (ulong)iVar12;
  if (param_3[3] == 0) {
    uVar7 = param_1[0x17];
    local_64[0] = 0;
    lVar8 = uVar11 - uVar7;
    if (uVar7 <= uVar11) {
      if ((ulong)(param_1[0x18] * 0x40) < uVar11) {
        if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00632a3c();
        }
        lVar2 = (uVar11 - 1 >> 6) + 1;
        __dest = operator_new(lVar2 * 8);
        __src = (void *)param_1[0x16];
        __n = 0;
        if (uVar7 != 0) {
          __n = (uVar7 - 1 >> 3 & 0x1ffffffffffffff8) + 8;
        }
        memmove(__dest,__src,__n);
        param_1[0x16] = __dest;
        param_1[0x18] = lVar2;
        if (__src != (void *)0x0) {
          operator_delete(__src);
          uVar7 = param_1[0x17];
        }
      }
      FUN_008acbec(param_1[0x16] + (uVar7 >> 6) * 8,uVar7 & 0x3f,lVar8,local_64);
      iVar12 = *(int *)(param_2 + 8);
    }
    param_1[0x17] = uVar11;
    if (0 < iVar12) {
      uVar11 = 0;
      do {
        if ((ulong)param_1[0x17] <= uVar11) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector_bool.h:297: libc++ Hardening assertion __n < size() failed: vector<bool>::operator[] index out of bounds\n"
                    );
        }
        lVar8 = param_1[0x16];
        uVar7 = uVar11 >> 6;
        uVar9 = 1L << (uVar11 & 0x3f);
        if ((long)uVar11 < (long)param_3[2]) {
          uVar9 = *(ulong *)(lVar8 + uVar7 * 8) & (uVar9 ^ 0xffffffffffffffff);
        }
        else {
          uVar9 = *(ulong *)(lVar8 + uVar7 * 8) | uVar9;
        }
        *(ulong *)(lVar8 + uVar7 * 8) = uVar9;
        uVar11 = uVar11 + 1;
      } while ((long)uVar11 < (long)*(int *)(param_2 + 8));
    }
  }
  else {
    local_6c[0] = 0;
    FUN_008a9388(param_1 + 0x16,uVar11,local_6c);
  }
  param_1[0x19] = *(undefined8 *)(param_2 + 0x30);
  return;
}


// ===== 008a9388  FUN_008a9388 =====

void FUN_008a9388(undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  
  param_1[1] = 0;
  if (param_2 == 0) {
    return;
  }
  uVar4 = param_1[2] * 0x40;
  if (uVar4 < param_2) {
    if ((long)param_2 < 0) {
LAB_008a93ec:
                    /* WARNING: Subroutine does not return */
      FUN_00632a3c();
    }
    if (uVar4 < 0x3fffffffffffffff) {
      uVar4 = param_1[2] * 0x80;
      uVar5 = param_2 + 0x3f & 0xffffffffffffffc0;
      if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
        uVar4 = uVar5;
      }
      if ((long)uVar4 < 0) goto LAB_008a93ec;
    }
    else {
      uVar4 = 0x7fffffffffffffff;
    }
    lVar1 = (uVar4 - 1 >> 6) + 1;
    pvVar2 = operator_new(lVar1 * 8);
    pvVar3 = (void *)*param_1;
    param_1[2] = lVar1;
    *param_1 = pvVar2;
    param_1[1] = param_2;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
  }
  else {
    param_1[1] = param_2;
  }
  FUN_008acbec(*param_1,0,param_2,param_3);
  return;
}


// ===== 008a946c  FUN_008a946c =====

void FUN_008a946c(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  iVar1 = *(int *)(param_1 + 8);
  if (0 < iVar1) {
    iVar2 = *(int *)(param_1 + 0xc);
    lVar6 = 0;
    do {
      if (0 < iVar2) {
        lVar7 = 0;
        bVar3 = true;
        do {
          if (bVar3) {
            iVar1 = FUN_007cc028(param_2,lVar6,lVar7);
            iVar2 = *(int *)(param_1 + 0xc);
            uVar5 = lVar7 + (ulong)(uint)((int)lVar6 * iVar2);
            if (0x1f < (uint)uVar5) {
LAB_008a9558:
                    /* WARNING: Subroutine does not return */
              FUN_005f55a8("bitset set argument out of range");
            }
            uVar4 = 1L << (uVar5 & 0x3f);
            uVar5 = *(ulong *)(param_1 + 0x30);
            if (iVar1 == 0) goto LAB_008a9534;
            uVar5 = uVar5 | uVar4;
            bVar3 = true;
          }
          else {
            uVar5 = lVar7 + (ulong)(uint)((int)lVar6 * iVar2);
            if (0x1f < (uint)uVar5) goto LAB_008a9558;
            uVar4 = 1L << (uVar5 & 0x3f);
            uVar5 = *(ulong *)(param_1 + 0x30);
LAB_008a9534:
            bVar3 = false;
            uVar5 = uVar5 & (uVar4 ^ 0xffffffffffffffff);
          }
          lVar7 = lVar7 + 1;
          *(ulong *)(param_1 + 0x30) = uVar5;
        } while (lVar7 < iVar2);
        iVar1 = *(int *)(param_1 + 8);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
  }
  return;
}


// ===== 008a9564  FUN_008a9564 =====

void FUN_008a9564(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  byte local_78;
  undefined7 uStack_77;
  void *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = param_1 + 0xd;
  *plVar3 = 0;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  uVar2 = DAT_001f5200;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = 0;
  param_1[8] = 0;
  *param_1 = uVar2;
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_008ad510(param_1 + 2,&DAT_00223fb4,2);
  FUN_008a9840(plVar3,3);
  lVar4 = *plVar3;
  if (param_1[0xe] != lVar4) {
    *(undefined4 *)(lVar4 + 4) = 0;
    FUN_00850d54(&local_78,&DAT_001b4d87,2);
    if ((byte *)(lVar4 + 8) == &local_78) {
      if ((local_78 & 1) != 0) {
        operator_delete(local_70);
      }
    }
    else {
      if ((*(byte *)(lVar4 + 8) & 1) != 0) {
        operator_delete(*(void **)(lVar4 + 0x10));
      }
      *(ulong *)(lVar4 + 8) = CONCAT71(uStack_77,local_78);
      *(undefined8 *)(lVar4 + 0x30) = local_50;
      *(undefined8 *)(lVar4 + 0x18) = uStack_68;
      *(void **)(lVar4 + 0x10) = local_70;
      *(undefined8 *)(lVar4 + 0x28) = uStack_58;
      *(undefined8 *)(lVar4 + 0x20) = uStack_60;
    }
    FUN_007d51b0(lVar4 + 0x50,&DAT_00223fbc,1);
    lVar4 = param_1[0xd];
    if (1 < (ulong)((param_1[0xe] - lVar4 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
      *(undefined4 *)(lVar4 + 0x6c) = 0;
      FUN_00850d54(&local_78,&DAT_001b4d87,2);
      if ((byte *)(lVar4 + 0x70) == &local_78) {
        if ((local_78 & 1) != 0) {
          operator_delete(local_70);
        }
      }
      else {
        if ((*(byte *)(lVar4 + 0x70) & 1) != 0) {
          operator_delete(*(void **)(lVar4 + 0x78));
        }
        *(ulong *)(lVar4 + 0x70) = CONCAT71(uStack_77,local_78);
        *(undefined8 *)(lVar4 + 0x98) = local_50;
        *(undefined8 *)(lVar4 + 0x90) = uStack_58;
        *(undefined8 *)(lVar4 + 0x88) = uStack_60;
        *(undefined8 *)(lVar4 + 0x80) = uStack_68;
        *(void **)(lVar4 + 0x78) = local_70;
      }
      FUN_007d51b0(lVar4 + 0xb8,&DAT_00223fc0,1);
      FUN_007d51b0(lVar4 + 0xa0,&DAT_00223fc4,1);
      lVar4 = param_1[0xd];
      if (2 < (ulong)((param_1[0xe] - lVar4 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
        *(undefined4 *)(lVar4 + 0xd4) = 1;
        FUN_00850d54(&local_78,&DAT_001b7c94,2);
        if ((byte *)(lVar4 + 0xd8) == &local_78) {
          if ((local_78 & 1) != 0) {
            operator_delete(local_70);
          }
        }
        else {
          if ((*(byte *)(lVar4 + 0xd8) & 1) != 0) {
            operator_delete(*(void **)(lVar4 + 0xe0));
          }
          *(ulong *)(lVar4 + 0xd8) = CONCAT71(uStack_77,local_78);
          *(undefined8 *)(lVar4 + 0x100) = local_50;
          *(undefined8 *)(lVar4 + 0xe8) = uStack_68;
          *(void **)(lVar4 + 0xe0) = local_70;
          *(undefined8 *)(lVar4 + 0xf8) = uStack_58;
          *(undefined8 *)(lVar4 + 0xf0) = uStack_60;
        }
        FUN_007d51b0(lVar4 + 0x120,&DAT_00223fc8,1);
        FUN_007d51b0(lVar4 + 0x108,&DAT_00223fcc,1);
        if (*(long *)(lVar1 + 0x28) == local_48) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 008a9840  FUN_008a9840 =====

void FUN_008a9840(undefined8 *param_1,ulong param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar10 = (undefined8 *)*param_1;
  puVar9 = (undefined8 *)param_1[1];
  lVar11 = (long)puVar9 - (long)puVar10;
  bVar1 = param_2 < (ulong)((lVar11 >> 3) * 0x4ec4ec4ec4ec4ec5);
  lVar6 = param_2 + (lVar11 >> 3) * -0x4ec4ec4ec4ec4ec5;
  if (bVar1 || lVar6 == 0) {
    if (bVar1) {
      while (puVar10 + param_2 * 0xd != puVar9) {
        puVar9 = puVar9 + -0xd;
        FUN_007d511c(param_1,puVar9);
      }
      param_1[1] = puVar10 + param_2 * 0xd;
    }
  }
  else {
    lVar5 = param_1[2] - (long)puVar10 >> 3;
    uVar3 = lVar5 * 0x4ec4ec4ec4ec4ec5;
    if (uVar3 < param_2) {
      if (param_2 < 0x276276276276277) {
        uVar8 = lVar5 * -0x6276276276276276;
        if (uVar8 < param_2 || uVar8 - param_2 == 0) {
          uVar8 = param_2;
        }
        if (0x13b13b13b13b13a < uVar3) {
          uVar8 = 0x276276276276276;
        }
        if (uVar8 < 0x276276276276277) {
          puVar2 = (undefined8 *)operator_new(uVar8 * 0x68);
          lVar6 = lVar6 * 0x68;
          if (lVar6 != 0) {
            lVar5 = lVar6 + lVar11;
            puVar4 = (undefined8 *)((long)puVar2 + lVar11);
            do {
              if (puVar4 == (undefined8 *)0x0) goto LAB_008a9a88;
              puVar4[0xc] = 0;
              lVar6 = lVar6 + -0x68;
              puVar4[1] = 0;
              *puVar4 = 0;
              puVar4[3] = 0;
              puVar4[2] = 0;
              puVar4[5] = 0;
              puVar4[4] = 0;
              puVar4[7] = 0;
              puVar4[6] = 0;
              puVar4[9] = 0;
              puVar4[8] = 0;
              puVar4[0xb] = 0;
              puVar4[10] = 0;
              puVar4 = puVar4 + 0xd;
              lVar11 = lVar5;
            } while (lVar6 != 0);
          }
          puVar4 = puVar10;
          puVar7 = puVar2;
          if (puVar10 != puVar9) {
            do {
              if (puVar7 == (undefined8 *)0x0) goto LAB_008a9a88;
              *puVar7 = *puVar4;
              puVar7[1] = puVar4[1];
              uVar15 = puVar4[3];
              uVar14 = puVar4[2];
              uVar13 = puVar4[5];
              uVar12 = puVar4[4];
              puVar7[6] = puVar4[6];
              puVar7[3] = uVar15;
              puVar7[2] = uVar14;
              puVar7[5] = uVar13;
              puVar7[4] = uVar12;
              puVar4[1] = 0;
              puVar7[7] = puVar4[7];
              uVar12 = puVar4[8];
              puVar7[9] = puVar4[9];
              puVar7[8] = uVar12;
              puVar4[7] = 0;
              puVar7[10] = puVar4[10];
              uVar12 = puVar4[0xb];
              puVar7[0xc] = puVar4[0xc];
              puVar7[0xb] = uVar12;
              puVar4[10] = 0;
              puVar4 = puVar4 + 0xd;
              puVar7 = puVar7 + 0xd;
            } while (puVar4 != puVar9);
            do {
              FUN_007d511c(param_1,puVar10);
              puVar10 = puVar10 + 0xd;
            } while (puVar10 != puVar9);
            puVar10 = (undefined8 *)*param_1;
          }
          *param_1 = puVar2;
          param_1[1] = (long)puVar2 + lVar11;
          param_1[2] = puVar2 + uVar8 * 0xd;
          if (puVar10 == (undefined8 *)0x0) {
            return;
          }
          operator_delete(puVar10);
          return;
        }
      }
      else {
        FUN_007d5104();
      }
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    lVar11 = lVar6 * 0x68;
    puVar10 = puVar9;
    if (lVar11 != 0) {
      puVar10 = puVar9 + lVar6 * 0xd;
      do {
        if (puVar9 == (undefined8 *)0x0) {
LAB_008a9a88:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar9[0xc] = 0;
        lVar11 = lVar11 + -0x68;
        puVar9[1] = 0;
        *puVar9 = 0;
        puVar9[3] = 0;
        puVar9[2] = 0;
        puVar9[5] = 0;
        puVar9[4] = 0;
        puVar9[7] = 0;
        puVar9[6] = 0;
        puVar9[9] = 0;
        puVar9[8] = 0;
        puVar9[0xb] = 0;
        puVar9[10] = 0;
        puVar9 = puVar9 + 0xd;
      } while (lVar11 != 0);
    }
    param_1[1] = puVar10;
  }
  return;
}


// ===== 008a9aa4  FUN_008a9aa4 =====

void FUN_008a9aa4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  byte local_78;
  undefined7 uStack_77;
  void *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = param_1 + 0xd;
  *plVar3 = 0;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  uVar2 = DAT_001f55d0;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = 0;
  param_1[8] = 0;
  *param_1 = uVar2;
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_008ad510(param_1 + 2,&DAT_00223fd0,3);
  FUN_008a9840(plVar3,5);
  lVar4 = *plVar3;
  if (param_1[0xe] != lVar4) {
    *(undefined4 *)(lVar4 + 4) = 0;
    FUN_00850d54(&local_78,&DAT_001e5a40,3);
    if ((byte *)(lVar4 + 8) == &local_78) {
      if ((local_78 & 1) != 0) {
        operator_delete(local_70);
      }
    }
    else {
      if ((*(byte *)(lVar4 + 8) & 1) != 0) {
        operator_delete(*(void **)(lVar4 + 0x10));
      }
      *(ulong *)(lVar4 + 8) = CONCAT71(uStack_77,local_78);
      *(undefined8 *)(lVar4 + 0x30) = local_50;
      *(undefined8 *)(lVar4 + 0x18) = uStack_68;
      *(void **)(lVar4 + 0x10) = local_70;
      *(undefined8 *)(lVar4 + 0x28) = uStack_58;
      *(undefined8 *)(lVar4 + 0x20) = uStack_60;
    }
    FUN_007d51b0(lVar4 + 0x50,&DAT_00223fdc,1);
    lVar4 = param_1[0xd];
    if (1 < (ulong)((param_1[0xe] - lVar4 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
      *(undefined4 *)(lVar4 + 0x6c) = 0;
      FUN_00850d54(&local_78,&DAT_001e5a40,3);
      if ((byte *)(lVar4 + 0x70) == &local_78) {
        if ((local_78 & 1) != 0) {
          operator_delete(local_70);
        }
      }
      else {
        if ((*(byte *)(lVar4 + 0x70) & 1) != 0) {
          operator_delete(*(void **)(lVar4 + 0x78));
        }
        *(ulong *)(lVar4 + 0x70) = CONCAT71(uStack_77,local_78);
        *(undefined8 *)(lVar4 + 0x98) = local_50;
        *(undefined8 *)(lVar4 + 0x90) = uStack_58;
        *(undefined8 *)(lVar4 + 0x88) = uStack_60;
        *(undefined8 *)(lVar4 + 0x80) = uStack_68;
        *(void **)(lVar4 + 0x78) = local_70;
      }
      FUN_007d51b0(lVar4 + 0xb8,&DAT_00223fe0,1);
      FUN_007d51b0(lVar4 + 0xa0,&DAT_00223fe4,1);
      lVar4 = param_1[0xd];
      if (2 < (ulong)((param_1[0xe] - lVar4 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
        *(undefined4 *)(lVar4 + 0xd4) = 1;
        FUN_00850d54(&local_78,&DAT_001b1ea7,3);
        if ((byte *)(lVar4 + 0xd8) == &local_78) {
          if ((local_78 & 1) != 0) {
            operator_delete(local_70);
          }
        }
        else {
          if ((*(byte *)(lVar4 + 0xd8) & 1) != 0) {
            operator_delete(*(void **)(lVar4 + 0xe0));
          }
          *(ulong *)(lVar4 + 0xd8) = CONCAT71(uStack_77,local_78);
          *(undefined8 *)(lVar4 + 0x100) = local_50;
          *(undefined8 *)(lVar4 + 0xe8) = uStack_68;
          *(void **)(lVar4 + 0xe0) = local_70;
          *(undefined8 *)(lVar4 + 0xf8) = uStack_58;
          *(undefined8 *)(lVar4 + 0xf0) = uStack_60;
        }
        FUN_007d51b0(lVar4 + 0x120,&DAT_00223fe8,1);
        FUN_007d51b0(lVar4 + 0x108,&DAT_00223fec,1);
        lVar4 = param_1[0xd];
        if (3 < (ulong)((param_1[0xe] - lVar4 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
          *(undefined4 *)(lVar4 + 0x13c) = 2;
          FUN_00850d54(&local_78,&DAT_001eb36c,3);
          if ((byte *)(lVar4 + 0x140) == &local_78) {
            if ((local_78 & 1) != 0) {
              operator_delete(local_70);
            }
          }
          else {
            if ((*(byte *)(lVar4 + 0x140) & 1) != 0) {
              operator_delete(*(void **)(lVar4 + 0x148));
            }
            *(ulong *)(lVar4 + 0x140) = CONCAT71(uStack_77,local_78);
            *(undefined8 *)(lVar4 + 0x168) = local_50;
            *(undefined8 *)(lVar4 + 0x150) = uStack_68;
            *(void **)(lVar4 + 0x148) = local_70;
            *(undefined8 *)(lVar4 + 0x160) = uStack_58;
            *(undefined8 *)(lVar4 + 0x158) = uStack_60;
          }
          FUN_007d51b0(lVar4 + 0x188,&DAT_00223ff0,1);
          FUN_007d51b0(lVar4 + 0x170,&DAT_00223ff4,1);
          lVar4 = param_1[0xd];
          if (4 < (ulong)((param_1[0xe] - lVar4 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
            *(undefined4 *)(lVar4 + 0x1a4) = 2;
            FUN_00850d54(&local_78,&DAT_001eb36c,3);
            if ((byte *)(lVar4 + 0x1a8) == &local_78) {
              if ((local_78 & 1) != 0) {
                operator_delete(local_70);
              }
            }
            else {
              if ((*(byte *)(lVar4 + 0x1a8) & 1) != 0) {
                operator_delete(*(void **)(lVar4 + 0x1b0));
              }
              *(ulong *)(lVar4 + 0x1a8) = CONCAT71(uStack_77,local_78);
              *(undefined8 *)(lVar4 + 0x1d0) = local_50;
              *(undefined8 *)(lVar4 + 0x1b8) = uStack_68;
              *(void **)(lVar4 + 0x1b0) = local_70;
              *(undefined8 *)(lVar4 + 0x1c8) = uStack_58;
              *(undefined8 *)(lVar4 + 0x1c0) = uStack_60;
            }
            FUN_007d51b0(lVar4 + 0x1f0,&DAT_00223ff8,1);
            FUN_007d51b0(lVar4 + 0x1d8,&DAT_00223ffc,1);
            if (*(long *)(lVar1 + 0x28) == local_48) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 008a9ee4  FUN_008a9ee4 =====

void FUN_008a9ee4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  byte local_78;
  undefined7 uStack_77;
  void *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar4 = param_1 + 0xd;
  *puVar4 = 0;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  uVar3 = DAT_001f5200;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = 0;
  param_1[8] = 0;
  *param_1 = uVar3;
  *(undefined4 *)(param_1 + 1) = 2;
  FUN_008ad510(param_1 + 2,&DAT_00224000,2);
  FUN_008a9840(puVar4,4);
  puVar5 = (undefined4 *)*puVar4;
  if ((undefined4 *)param_1[0xe] != puVar5) {
    *puVar5 = 0;
    FUN_00850d54(&local_78,&DAT_001eb370,2);
    if ((byte *)(puVar5 + 2) == &local_78) {
      if ((local_78 & 1) != 0) {
        operator_delete(local_70);
      }
    }
    else {
      if ((*(byte *)(puVar5 + 2) & 1) != 0) {
        operator_delete(*(void **)(puVar5 + 4));
      }
      *(ulong *)(puVar5 + 2) = CONCAT71(uStack_77,local_78);
      *(undefined8 *)(puVar5 + 0xc) = local_50;
      *(undefined8 *)(puVar5 + 6) = uStack_68;
      *(void **)(puVar5 + 4) = local_70;
      *(undefined8 *)(puVar5 + 10) = uStack_58;
      *(undefined8 *)(puVar5 + 8) = uStack_60;
    }
    FUN_007d51b0(puVar5 + 0x14,&DAT_00224008,2);
    FUN_007d51b0(puVar5 + 0xe,&DAT_00224010,1);
    lVar1 = param_1[0xd];
    if (1 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
      *(undefined4 *)(lVar1 + 0x68) = 0;
      FUN_00850d54(&local_78,&DAT_001b4d87,2);
      if ((byte *)(lVar1 + 0x70) == &local_78) {
        if ((local_78 & 1) != 0) {
          operator_delete(local_70);
        }
      }
      else {
        if ((*(byte *)(lVar1 + 0x70) & 1) != 0) {
          operator_delete(*(void **)(lVar1 + 0x78));
        }
        *(ulong *)(lVar1 + 0x70) = CONCAT71(uStack_77,local_78);
        *(undefined8 *)(lVar1 + 0x98) = local_50;
        *(undefined8 *)(lVar1 + 0x90) = uStack_58;
        *(undefined8 *)(lVar1 + 0x88) = uStack_60;
        *(undefined8 *)(lVar1 + 0x80) = uStack_68;
        *(void **)(lVar1 + 0x78) = local_70;
      }
      FUN_007d51b0(lVar1 + 0xb8,&DAT_00224014,2);
      lVar1 = param_1[0xd];
      if (2 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
        *(undefined4 *)(lVar1 + 0xd0) = 1;
        FUN_00850d54(&local_78,&DAT_001c92a9,2);
        if ((byte *)(lVar1 + 0xd8) == &local_78) {
          if ((local_78 & 1) != 0) {
            operator_delete(local_70);
          }
        }
        else {
          if ((*(byte *)(lVar1 + 0xd8) & 1) != 0) {
            operator_delete(*(void **)(lVar1 + 0xe0));
          }
          *(ulong *)(lVar1 + 0xd8) = CONCAT71(uStack_77,local_78);
          *(undefined8 *)(lVar1 + 0x100) = local_50;
          *(undefined8 *)(lVar1 + 0xe8) = uStack_68;
          *(void **)(lVar1 + 0xe0) = local_70;
          *(undefined8 *)(lVar1 + 0xf8) = uStack_58;
          *(undefined8 *)(lVar1 + 0xf0) = uStack_60;
        }
        FUN_007d51b0(lVar1 + 0x120,&DAT_0022401c,2);
        FUN_007d51b0(lVar1 + 0x108,&DAT_00224024,2);
        lVar1 = param_1[0xd];
        if (3 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
          *(undefined4 *)(lVar1 + 0x138) = 1;
          FUN_00850d54(&local_78,&DAT_001c92a9,2);
          if ((byte *)(lVar1 + 0x140) == &local_78) {
            if ((local_78 & 1) != 0) {
              operator_delete(local_70);
            }
          }
          else {
            if ((*(byte *)(lVar1 + 0x140) & 1) != 0) {
              operator_delete(*(void **)(lVar1 + 0x148));
            }
            *(ulong *)(lVar1 + 0x140) = CONCAT71(uStack_77,local_78);
            *(undefined8 *)(lVar1 + 0x168) = local_50;
            *(undefined8 *)(lVar1 + 0x150) = uStack_68;
            *(void **)(lVar1 + 0x148) = local_70;
            *(undefined8 *)(lVar1 + 0x160) = uStack_58;
            *(undefined8 *)(lVar1 + 0x158) = uStack_60;
          }
          FUN_007d51b0(lVar1 + 0x188,&DAT_0022402c,2);
          FUN_007d51b0(lVar1 + 0x170,&DAT_00224034,1);
          if (*(long *)(lVar2 + 0x28) == local_48) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 008aa274  FUN_008aa274 =====

void FUN_008aa274(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  byte local_78;
  undefined7 uStack_77;
  void *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar4 = param_1 + 0xd;
  *puVar4 = 0;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  uVar3 = DAT_001f5728;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = 0;
  param_1[8] = 0;
  *param_1 = uVar3;
  *(undefined4 *)(param_1 + 1) = 2;
  FUN_008ad510(param_1 + 2,&DAT_00224038,4);
  FUN_008a9840(puVar4,6);
  puVar4 = (undefined8 *)*puVar4;
  if ((undefined8 *)param_1[0xe] != puVar4) {
    *puVar4 = 0;
    FUN_00850d54(&local_78,&DAT_001a1577,4);
    if ((byte *)(puVar4 + 1) == &local_78) {
      if ((local_78 & 1) != 0) {
        operator_delete(local_70);
      }
    }
    else {
      if ((*(byte *)(puVar4 + 1) & 1) != 0) {
        operator_delete((void *)puVar4[2]);
      }
      puVar4[1] = CONCAT71(uStack_77,local_78);
      puVar4[6] = local_50;
      puVar4[3] = uStack_68;
      puVar4[2] = local_70;
      puVar4[5] = uStack_58;
      puVar4[4] = uStack_60;
    }
    FUN_007d51b0(puVar4 + 10,&DAT_00224048,2);
    lVar1 = param_1[0xd];
    if (1 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
      *(undefined8 *)(lVar1 + 0x68) = 0;
      FUN_00850d54(&local_78,&DAT_0019e3cf,4);
      if ((byte *)(lVar1 + 0x70) == &local_78) {
        if ((local_78 & 1) != 0) {
          operator_delete(local_70);
        }
      }
      else {
        if ((*(byte *)(lVar1 + 0x70) & 1) != 0) {
          operator_delete(*(void **)(lVar1 + 0x78));
        }
        *(ulong *)(lVar1 + 0x70) = CONCAT71(uStack_77,local_78);
        *(undefined8 *)(lVar1 + 0x98) = local_50;
        *(undefined8 *)(lVar1 + 0x90) = uStack_58;
        *(undefined8 *)(lVar1 + 0x88) = uStack_60;
        *(undefined8 *)(lVar1 + 0x80) = uStack_68;
        *(void **)(lVar1 + 0x78) = local_70;
      }
      FUN_007d51b0(lVar1 + 0xb8,&DAT_00224050,2);
      FUN_007d51b0(lVar1 + 0xa0,&DAT_00224058,1);
      lVar1 = param_1[0xd];
      if (2 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
        *(undefined8 *)(lVar1 + 0xd0) = DAT_001f5170;
        FUN_00850d54(&local_78,&DAT_001e2e55,4);
        if ((byte *)(lVar1 + 0xd8) == &local_78) {
          if ((local_78 & 1) != 0) {
            operator_delete(local_70);
          }
        }
        else {
          if ((*(byte *)(lVar1 + 0xd8) & 1) != 0) {
            operator_delete(*(void **)(lVar1 + 0xe0));
          }
          *(ulong *)(lVar1 + 0xd8) = CONCAT71(uStack_77,local_78);
          *(undefined8 *)(lVar1 + 0x100) = local_50;
          *(undefined8 *)(lVar1 + 0xe8) = uStack_68;
          *(void **)(lVar1 + 0xe0) = local_70;
          *(undefined8 *)(lVar1 + 0xf8) = uStack_58;
          *(undefined8 *)(lVar1 + 0xf0) = uStack_60;
        }
        FUN_007d51b0(lVar1 + 0x120,&DAT_0022405c,2);
        FUN_007d51b0(lVar1 + 0x108,&DAT_00224064,1);
        uVar3 = DAT_001f58a0;
        lVar1 = param_1[0xd];
        if (3 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
          *(undefined8 *)(lVar1 + 0x138) = DAT_001f58a0;
          FUN_00850d54(&local_78,&DAT_001dcd79,4);
          if ((byte *)(lVar1 + 0x140) == &local_78) {
            if ((local_78 & 1) != 0) {
              operator_delete(local_70);
            }
          }
          else {
            if ((*(byte *)(lVar1 + 0x140) & 1) != 0) {
              operator_delete(*(void **)(lVar1 + 0x148));
            }
            *(ulong *)(lVar1 + 0x140) = CONCAT71(uStack_77,local_78);
            *(undefined8 *)(lVar1 + 0x168) = local_50;
            *(undefined8 *)(lVar1 + 0x150) = uStack_68;
            *(void **)(lVar1 + 0x148) = local_70;
            *(undefined8 *)(lVar1 + 0x160) = uStack_58;
            *(undefined8 *)(lVar1 + 0x158) = uStack_60;
          }
          FUN_007d51b0(lVar1 + 0x188,&DAT_00224068,2);
          FUN_007d51b0(lVar1 + 0x170,&DAT_00224070,1);
          lVar1 = param_1[0xd];
          if (4 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
            *(undefined8 *)(lVar1 + 0x1a0) = uVar3;
            FUN_00850d54(&local_78,&DAT_001dcd79,4);
            if ((byte *)(lVar1 + 0x1a8) == &local_78) {
              if ((local_78 & 1) != 0) {
                operator_delete(local_70);
              }
            }
            else {
              if ((*(byte *)(lVar1 + 0x1a8) & 1) != 0) {
                operator_delete(*(void **)(lVar1 + 0x1b0));
              }
              *(ulong *)(lVar1 + 0x1a8) = CONCAT71(uStack_77,local_78);
              *(undefined8 *)(lVar1 + 0x1d0) = local_50;
              *(undefined8 *)(lVar1 + 0x1b8) = uStack_68;
              *(void **)(lVar1 + 0x1b0) = local_70;
              *(undefined8 *)(lVar1 + 0x1c8) = uStack_58;
              *(undefined8 *)(lVar1 + 0x1c0) = uStack_60;
            }
            FUN_007d51b0(lVar1 + 0x1f0,&DAT_00224074,2);
            FUN_007d51b0(lVar1 + 0x1d8,&DAT_0022407c,2);
            lVar1 = param_1[0xd];
            if (5 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
              *(undefined8 *)(lVar1 + 0x208) = 0x100000001;
              FUN_00850d54(&local_78,&DAT_001d7496,4);
              if ((byte *)(lVar1 + 0x210) == &local_78) {
                if ((local_78 & 1) != 0) {
                  operator_delete(local_70);
                }
              }
              else {
                if ((*(byte *)(lVar1 + 0x210) & 1) != 0) {
                  operator_delete(*(void **)(lVar1 + 0x218));
                }
                *(ulong *)(lVar1 + 0x210) = CONCAT71(uStack_77,local_78);
                *(undefined8 *)(lVar1 + 0x238) = local_50;
                *(undefined8 *)(lVar1 + 0x220) = uStack_68;
                *(void **)(lVar1 + 0x218) = local_70;
                *(undefined8 *)(lVar1 + 0x230) = uStack_58;
                *(undefined8 *)(lVar1 + 0x228) = uStack_60;
              }
              FUN_007d51b0(lVar1 + 600,&DAT_00224084,2);
              FUN_007d51b0(lVar1 + 0x240,&DAT_0022408c,2);
              if (*(long *)(lVar2 + 0x28) == local_48) {
                return;
              }
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 008aa778  FUN_008aa778 =====

void FUN_008aa778(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  byte local_88;
  undefined7 uStack_87;
  void *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar6 = param_1 + 0xd;
  *plVar6 = 0;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  uVar5 = DAT_001f5b60;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = 0;
  param_1[8] = 0;
  *param_1 = uVar5;
  *(undefined4 *)(param_1 + 1) = 2;
  FUN_008ad510(param_1 + 2,&DAT_00224094,6);
  FUN_008a9840(plVar6,10);
  lVar7 = *plVar6;
  if (1 < (ulong)((param_1[0xe] - lVar7 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
    *(undefined8 *)(lVar7 + 0x68) = 0;
    FUN_00850d54(&local_88,"SSSSSS",6);
    if ((byte *)(lVar7 + 0x70) == &local_88) {
      if ((local_88 & 1) != 0) {
        operator_delete(local_80);
      }
    }
    else {
      if ((*(byte *)(lVar7 + 0x70) & 1) != 0) {
        operator_delete(*(void **)(lVar7 + 0x78));
      }
      *(ulong *)(lVar7 + 0x70) = CONCAT71(uStack_87,local_88);
      *(undefined8 *)(lVar7 + 0x98) = local_60;
      *(undefined8 *)(lVar7 + 0x90) = uStack_68;
      *(undefined8 *)(lVar7 + 0x88) = uStack_70;
      *(undefined8 *)(lVar7 + 0x80) = uStack_78;
      *(void **)(lVar7 + 0x78) = local_80;
    }
    FUN_007d51b0(lVar7 + 0xb8,&DAT_002240ac,2);
    uVar5 = DAT_001f58a0;
    lVar7 = param_1[0xd];
    if (6 < (ulong)((param_1[0xe] - lVar7 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
      *(undefined8 *)(lVar7 + 0x270) = DAT_001f58a0;
      FUN_00850d54(&local_88,"---SSS",6);
      if ((byte *)(lVar7 + 0x278) == &local_88) {
        if ((local_88 & 1) != 0) {
          operator_delete(local_80);
        }
      }
      else {
        if ((*(byte *)(lVar7 + 0x278) & 1) != 0) {
          operator_delete(*(void **)(lVar7 + 0x280));
        }
        *(ulong *)(lVar7 + 0x278) = CONCAT71(uStack_87,local_88);
        *(undefined8 *)(lVar7 + 0x2a0) = local_60;
        *(undefined8 *)(lVar7 + 0x288) = uStack_78;
        *(void **)(lVar7 + 0x280) = local_80;
        *(undefined8 *)(lVar7 + 0x298) = uStack_68;
        *(undefined8 *)(lVar7 + 0x290) = uStack_70;
      }
      FUN_007d51b0(lVar7 + 0x2c0,&DAT_002240b4,2);
      FUN_007d51b0(lVar7 + 0x2a8,&DAT_002240bc,1);
      uVar4 = DAT_001f5200;
      lVar7 = param_1[0xd];
      if (3 < (ulong)((param_1[0xe] - lVar7 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
        *(undefined8 *)(lVar7 + 0x138) = DAT_001f5200;
        FUN_00850d54(&local_88,"--D--R",6);
        if ((byte *)(lVar7 + 0x140) == &local_88) {
          if ((local_88 & 1) != 0) {
            operator_delete(local_80);
          }
        }
        else {
          if ((*(byte *)(lVar7 + 0x140) & 1) != 0) {
            operator_delete(*(void **)(lVar7 + 0x148));
          }
          *(ulong *)(lVar7 + 0x140) = CONCAT71(uStack_87,local_88);
          *(undefined8 *)(lVar7 + 0x168) = local_60;
          *(undefined8 *)(lVar7 + 0x150) = uStack_78;
          *(void **)(lVar7 + 0x148) = local_80;
          *(undefined8 *)(lVar7 + 0x160) = uStack_68;
          *(undefined8 *)(lVar7 + 0x158) = uStack_70;
        }
        FUN_007d51b0(lVar7 + 0x188,&DAT_002240c0,2);
        FUN_007d51b0(lVar7 + 0x170,&DAT_002240c8,1);
        uVar3 = DAT_001f50d0;
        lVar7 = param_1[0xd];
        if (8 < (ulong)((param_1[0xe] - lVar7 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
          *(undefined8 *)(lVar7 + 0x340) = DAT_001f50d0;
          FUN_00850d54(&local_88,"-----D",6);
          if ((byte *)(lVar7 + 0x348) == &local_88) {
            if ((local_88 & 1) != 0) {
              operator_delete(local_80);
            }
          }
          else {
            if ((*(byte *)(lVar7 + 0x348) & 1) != 0) {
              operator_delete(*(void **)(lVar7 + 0x350));
            }
            *(ulong *)(lVar7 + 0x348) = CONCAT71(uStack_87,local_88);
            *(undefined8 *)(lVar7 + 0x370) = local_60;
            *(undefined8 *)(lVar7 + 0x358) = uStack_78;
            *(void **)(lVar7 + 0x350) = local_80;
            *(undefined8 *)(lVar7 + 0x368) = uStack_68;
            *(undefined8 *)(lVar7 + 0x360) = uStack_70;
          }
          FUN_007d51b0(lVar7 + 0x390,&DAT_002240cc,2);
          FUN_007d51b0(lVar7 + 0x378,&DAT_002240d4,2);
          lVar7 = param_1[0xd];
          if (2 < (ulong)((param_1[0xe] - lVar7 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
            *(undefined8 *)(lVar7 + 0xd0) = DAT_001f5170;
            FUN_00850d54(&local_88,"-DS-RR",6);
            if ((byte *)(lVar7 + 0xd8) == &local_88) {
              if ((local_88 & 1) != 0) {
                operator_delete(local_80);
              }
            }
            else {
              if ((*(byte *)(lVar7 + 0xd8) & 1) != 0) {
                operator_delete(*(void **)(lVar7 + 0xe0));
              }
              *(ulong *)(lVar7 + 0xd8) = CONCAT71(uStack_87,local_88);
              *(undefined8 *)(lVar7 + 0x100) = local_60;
              *(undefined8 *)(lVar7 + 0xe8) = uStack_78;
              *(void **)(lVar7 + 0xe0) = local_80;
              *(undefined8 *)(lVar7 + 0xf8) = uStack_68;
              *(undefined8 *)(lVar7 + 0xf0) = uStack_70;
            }
            FUN_007d51b0(lVar7 + 0x120,&DAT_002240dc,2);
            FUN_007d51b0(lVar7 + 0x108,&DAT_002240e4,1);
            lVar7 = param_1[0xd];
            if (7 < (ulong)((param_1[0xe] - lVar7 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
              *(undefined8 *)(lVar7 + 0x2d8) = 0x100000001;
              FUN_00850d54(&local_88,"----DS",6);
              if ((byte *)(lVar7 + 0x2e0) == &local_88) {
                if ((local_88 & 1) != 0) {
                  operator_delete(local_80);
                }
              }
              else {
                if ((*(byte *)(lVar7 + 0x2e0) & 1) != 0) {
                  operator_delete(*(void **)(lVar7 + 0x2e8));
                }
                *(ulong *)(lVar7 + 0x2e0) = CONCAT71(uStack_87,local_88);
                *(undefined8 *)(lVar7 + 0x308) = local_60;
                *(undefined8 *)(lVar7 + 0x2f0) = uStack_78;
                *(void **)(lVar7 + 0x2e8) = local_80;
                *(undefined8 *)(lVar7 + 0x300) = uStack_68;
                *(undefined8 *)(lVar7 + 0x2f8) = uStack_70;
              }
              FUN_007d51b0(lVar7 + 0x328,&DAT_002240e8,2);
              FUN_007d51b0(lVar7 + 0x310,&DAT_002240f0,2);
              lVar7 = param_1[0xd];
              if (4 < (ulong)((param_1[0xe] - lVar7 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                *(undefined8 *)(lVar7 + 0x1a0) = uVar4;
                FUN_00850d54(&local_88,"--D--R",6);
                if ((byte *)(lVar7 + 0x1a8) == &local_88) {
                  if ((local_88 & 1) != 0) {
                    operator_delete(local_80);
                  }
                }
                else {
                  if ((*(byte *)(lVar7 + 0x1a8) & 1) != 0) {
                    operator_delete(*(void **)(lVar7 + 0x1b0));
                  }
                  *(ulong *)(lVar7 + 0x1a8) = CONCAT71(uStack_87,local_88);
                  *(undefined8 *)(lVar7 + 0x1d0) = local_60;
                  *(undefined8 *)(lVar7 + 0x1b8) = uStack_78;
                  *(void **)(lVar7 + 0x1b0) = local_80;
                  *(undefined8 *)(lVar7 + 0x1c8) = uStack_68;
                  *(undefined8 *)(lVar7 + 0x1c0) = uStack_70;
                }
                FUN_007d51b0(lVar7 + 0x1f0,&DAT_002240f8,2);
                FUN_007d51b0(lVar7 + 0x1d8,&DAT_00224100,1);
                lVar7 = param_1[0xd];
                if (9 < (ulong)((param_1[0xe] - lVar7 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                  *(undefined8 *)(lVar7 + 0x3a8) = uVar3;
                  FUN_00850d54(&local_88,"-----D",6);
                  if ((byte *)(lVar7 + 0x3b0) == &local_88) {
                    if ((local_88 & 1) != 0) {
                      operator_delete(local_80);
                    }
                  }
                  else {
                    if ((*(byte *)(lVar7 + 0x3b0) & 1) != 0) {
                      operator_delete(*(void **)(lVar7 + 0x3b8));
                    }
                    *(ulong *)(lVar7 + 0x3b0) = CONCAT71(uStack_87,local_88);
                    *(undefined8 *)(lVar7 + 0x3d8) = local_60;
                    *(undefined8 *)(lVar7 + 0x3c0) = uStack_78;
                    *(void **)(lVar7 + 0x3b8) = local_80;
                    *(undefined8 *)(lVar7 + 0x3d0) = uStack_68;
                    *(undefined8 *)(lVar7 + 0x3c8) = uStack_70;
                  }
                  FUN_007d51b0(lVar7 + 0x3f8,&DAT_00224104,2);
                  FUN_007d51b0(lVar7 + 0x3e0,&DAT_0022410c,2);
                  puVar1 = (undefined8 *)param_1[0xd];
                  if ((undefined8 *)param_1[0xe] != puVar1) {
                    *puVar1 = 0;
                    FUN_00850d54(&local_88,"SSSRRR",6);
                    if ((byte *)(puVar1 + 1) == &local_88) {
                      if ((local_88 & 1) != 0) {
                        operator_delete(local_80);
                      }
                    }
                    else {
                      if ((*(byte *)(puVar1 + 1) & 1) != 0) {
                        operator_delete((void *)puVar1[2]);
                      }
                      puVar1[1] = CONCAT71(uStack_87,local_88);
                      puVar1[6] = local_60;
                      puVar1[3] = uStack_78;
                      puVar1[2] = local_80;
                      puVar1[5] = uStack_68;
                      puVar1[4] = uStack_70;
                    }
                    FUN_007d51b0(puVar1 + 10,&DAT_00224114,2);
                    FUN_007d51b0(puVar1 + 7,&DAT_0022411c,1);
                    lVar7 = param_1[0xd];
                    if (5 < (ulong)((param_1[0xe] - lVar7 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                      *(undefined8 *)(lVar7 + 0x208) = uVar5;
                      FUN_00850d54(&local_88,"---SSS",6);
                      if ((byte *)(lVar7 + 0x210) == &local_88) {
                        if ((local_88 & 1) != 0) {
                          operator_delete(local_80);
                        }
                      }
                      else {
                        if ((*(byte *)(lVar7 + 0x210) & 1) != 0) {
                          operator_delete(*(void **)(lVar7 + 0x218));
                        }
                        *(ulong *)(lVar7 + 0x210) = CONCAT71(uStack_87,local_88);
                        *(undefined8 *)(lVar7 + 0x238) = local_60;
                        *(undefined8 *)(lVar7 + 0x220) = uStack_78;
                        *(void **)(lVar7 + 0x218) = local_80;
                        *(undefined8 *)(lVar7 + 0x230) = uStack_68;
                        *(undefined8 *)(lVar7 + 0x228) = uStack_70;
                      }
                      FUN_007d51b0(lVar7 + 600,&DAT_00224120,2);
                      FUN_007d51b0(lVar7 + 0x240,&DAT_00224128,2);
                      if (*(long *)(lVar2 + 0x28) == local_58) {
                        return;
                      }
                    /* WARNING: Subroutine does not return */
                      __stack_chk_fail();
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
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 008aaf5c  FUN_008aaf5c =====

void FUN_008aaf5c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  byte local_78;
  undefined7 uStack_77;
  void *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar4 = param_1 + 0xd;
  *puVar4 = 0;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  uVar3 = DAT_001f55d0;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = 0;
  param_1[8] = 0;
  *param_1 = uVar3;
  *(undefined4 *)(param_1 + 1) = 3;
  FUN_008ad510(param_1 + 2,&DAT_00224130,3);
  FUN_008a9840(puVar4,6);
  puVar5 = (undefined4 *)*puVar4;
  if ((undefined4 *)param_1[0xe] != puVar5) {
    *puVar5 = 0;
    FUN_00850d54(&local_78,&DAT_001d461d,3);
    if ((byte *)(puVar5 + 2) == &local_78) {
      if ((local_78 & 1) != 0) {
        operator_delete(local_70);
      }
    }
    else {
      if ((*(byte *)(puVar5 + 2) & 1) != 0) {
        operator_delete(*(void **)(puVar5 + 4));
      }
      *(ulong *)(puVar5 + 2) = CONCAT71(uStack_77,local_78);
      *(undefined8 *)(puVar5 + 0xc) = local_50;
      *(undefined8 *)(puVar5 + 6) = uStack_68;
      *(void **)(puVar5 + 4) = local_70;
      *(undefined8 *)(puVar5 + 10) = uStack_58;
      *(undefined8 *)(puVar5 + 8) = uStack_60;
    }
    FUN_007d51b0(puVar5 + 0x14,&DAT_0022413c,3);
    FUN_007d51b0(puVar5 + 0xe,&DAT_00224148,1);
    lVar1 = param_1[0xd];
    if (1 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
      *(undefined4 *)(lVar1 + 0x68) = 0;
      FUN_00850d54(&local_78,&DAT_001e5a40,3);
      if ((byte *)(lVar1 + 0x70) == &local_78) {
        if ((local_78 & 1) != 0) {
          operator_delete(local_70);
        }
      }
      else {
        if ((*(byte *)(lVar1 + 0x70) & 1) != 0) {
          operator_delete(*(void **)(lVar1 + 0x78));
        }
        *(ulong *)(lVar1 + 0x70) = CONCAT71(uStack_77,local_78);
        *(undefined8 *)(lVar1 + 0x98) = local_50;
        *(undefined8 *)(lVar1 + 0x90) = uStack_58;
        *(undefined8 *)(lVar1 + 0x88) = uStack_60;
        *(undefined8 *)(lVar1 + 0x80) = uStack_68;
        *(void **)(lVar1 + 0x78) = local_70;
      }
      FUN_007d51b0(lVar1 + 0xb8,&DAT_0022414c,3);
      lVar1 = param_1[0xd];
      if (2 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
        *(undefined4 *)(lVar1 + 0xd0) = 1;
        FUN_00850d54(&local_78,&DAT_001c92ac,3);
        if ((byte *)(lVar1 + 0xd8) == &local_78) {
          if ((local_78 & 1) != 0) {
            operator_delete(local_70);
          }
        }
        else {
          if ((*(byte *)(lVar1 + 0xd8) & 1) != 0) {
            operator_delete(*(void **)(lVar1 + 0xe0));
          }
          *(ulong *)(lVar1 + 0xd8) = CONCAT71(uStack_77,local_78);
          *(undefined8 *)(lVar1 + 0x100) = local_50;
          *(undefined8 *)(lVar1 + 0xe8) = uStack_68;
          *(void **)(lVar1 + 0xe0) = local_70;
          *(undefined8 *)(lVar1 + 0xf8) = uStack_58;
          *(undefined8 *)(lVar1 + 0xf0) = uStack_60;
        }
        FUN_007d51b0(lVar1 + 0x120,&DAT_00224158,3);
        FUN_007d51b0(lVar1 + 0x108,&DAT_00224164,2);
        lVar1 = param_1[0xd];
        if (3 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
          *(undefined4 *)(lVar1 + 0x138) = 1;
          FUN_00850d54(&local_78,&DAT_001e5a44,3);
          if ((byte *)(lVar1 + 0x140) == &local_78) {
            if ((local_78 & 1) != 0) {
              operator_delete(local_70);
            }
          }
          else {
            if ((*(byte *)(lVar1 + 0x140) & 1) != 0) {
              operator_delete(*(void **)(lVar1 + 0x148));
            }
            *(ulong *)(lVar1 + 0x140) = CONCAT71(uStack_77,local_78);
            *(undefined8 *)(lVar1 + 0x168) = local_50;
            *(undefined8 *)(lVar1 + 0x150) = uStack_68;
            *(void **)(lVar1 + 0x148) = local_70;
            *(undefined8 *)(lVar1 + 0x160) = uStack_58;
            *(undefined8 *)(lVar1 + 0x158) = uStack_60;
          }
          FUN_007d51b0(lVar1 + 0x188,&DAT_0022416c,3);
          FUN_007d51b0(lVar1 + 0x170,&DAT_00224178,1);
          lVar1 = param_1[0xd];
          if (4 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
            *(undefined4 *)(lVar1 + 0x1a0) = 2;
            FUN_00850d54(&local_78,&DAT_001b7c97,3);
            if ((byte *)(lVar1 + 0x1a8) == &local_78) {
              if ((local_78 & 1) != 0) {
                operator_delete(local_70);
              }
            }
            else {
              if ((*(byte *)(lVar1 + 0x1a8) & 1) != 0) {
                operator_delete(*(void **)(lVar1 + 0x1b0));
              }
              *(ulong *)(lVar1 + 0x1a8) = CONCAT71(uStack_77,local_78);
              *(undefined8 *)(lVar1 + 0x1d0) = local_50;
              *(undefined8 *)(lVar1 + 0x1b8) = uStack_68;
              *(void **)(lVar1 + 0x1b0) = local_70;
              *(undefined8 *)(lVar1 + 0x1c8) = uStack_58;
              *(undefined8 *)(lVar1 + 0x1c0) = uStack_60;
            }
            FUN_007d51b0(lVar1 + 0x1f0,&DAT_0022417c,3);
            FUN_007d51b0(lVar1 + 0x1d8,&DAT_00224188,2);
            lVar1 = param_1[0xd];
            if (5 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
              *(undefined4 *)(lVar1 + 0x208) = 2;
              FUN_00850d54(&local_78,&DAT_001b7c97,3);
              if ((byte *)(lVar1 + 0x210) == &local_78) {
                if ((local_78 & 1) != 0) {
                  operator_delete(local_70);
                }
              }
              else {
                if ((*(byte *)(lVar1 + 0x210) & 1) != 0) {
                  operator_delete(*(void **)(lVar1 + 0x218));
                }
                *(ulong *)(lVar1 + 0x210) = CONCAT71(uStack_77,local_78);
                *(undefined8 *)(lVar1 + 0x238) = local_50;
                *(undefined8 *)(lVar1 + 0x220) = uStack_68;
                *(void **)(lVar1 + 0x218) = local_70;
                *(undefined8 *)(lVar1 + 0x230) = uStack_58;
                *(undefined8 *)(lVar1 + 0x228) = uStack_60;
              }
              FUN_007d51b0(lVar1 + 600,&DAT_00224190,3);
              FUN_007d51b0(lVar1 + 0x240,&DAT_0022419c,1);
              if (*(long *)(lVar2 + 0x28) == local_48) {
                return;
              }
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 008ab454  FUN_008ab454 =====

void FUN_008ab454(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  byte local_88;
  undefined7 uStack_87;
  void *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar5 = param_1 + 0xd;
  *plVar5 = 0;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  uVar4 = DAT_001f5b60;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = 0;
  param_1[8] = 0;
  *param_1 = uVar4;
  *(undefined4 *)(param_1 + 1) = 3;
  FUN_008ad510(param_1 + 2,&DAT_002241a0,6);
  FUN_008a9840(plVar5,9);
  lVar6 = *plVar5;
  if (1 < (ulong)((param_1[0xe] - lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
    *(undefined8 *)(lVar6 + 0x68) = 0;
    FUN_00850d54(&local_88,"SSSSSS",6);
    if ((byte *)(lVar6 + 0x70) == &local_88) {
      if ((local_88 & 1) != 0) {
        operator_delete(local_80);
      }
    }
    else {
      if ((*(byte *)(lVar6 + 0x70) & 1) != 0) {
        operator_delete(*(void **)(lVar6 + 0x78));
      }
      *(ulong *)(lVar6 + 0x70) = CONCAT71(uStack_87,local_88);
      *(undefined8 *)(lVar6 + 0x98) = local_60;
      *(undefined8 *)(lVar6 + 0x90) = uStack_68;
      *(undefined8 *)(lVar6 + 0x88) = uStack_70;
      *(undefined8 *)(lVar6 + 0x80) = uStack_78;
      *(void **)(lVar6 + 0x78) = local_80;
    }
    FUN_007d51b0(lVar6 + 0xb8,&DAT_002241b8,3);
    uVar4 = DAT_001f58a0;
    lVar6 = param_1[0xd];
    if (4 < (ulong)((param_1[0xe] - lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
      *(undefined8 *)(lVar6 + 0x1a0) = DAT_001f58a0;
      FUN_00850d54(&local_88,"--SSSS",6);
      if ((byte *)(lVar6 + 0x1a8) == &local_88) {
        if ((local_88 & 1) != 0) {
          operator_delete(local_80);
        }
      }
      else {
        if ((*(byte *)(lVar6 + 0x1a8) & 1) != 0) {
          operator_delete(*(void **)(lVar6 + 0x1b0));
        }
        *(ulong *)(lVar6 + 0x1a8) = CONCAT71(uStack_87,local_88);
        *(undefined8 *)(lVar6 + 0x1d0) = local_60;
        *(undefined8 *)(lVar6 + 0x1b8) = uStack_78;
        *(void **)(lVar6 + 0x1b0) = local_80;
        *(undefined8 *)(lVar6 + 0x1c8) = uStack_68;
        *(undefined8 *)(lVar6 + 0x1c0) = uStack_70;
      }
      FUN_007d51b0(lVar6 + 0x1f0,&DAT_002241c4,3);
      FUN_007d51b0(lVar6 + 0x1d8,&DAT_002241d0,1);
      uVar3 = DAT_001f5360;
      lVar6 = param_1[0xd];
      if (7 < (ulong)((param_1[0xe] - lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
        *(undefined8 *)(lVar6 + 0x2d8) = DAT_001f5360;
        FUN_00850d54(&local_88,"----SS",6);
        if ((byte *)(lVar6 + 0x2e0) == &local_88) {
          if ((local_88 & 1) != 0) {
            operator_delete(local_80);
          }
        }
        else {
          if ((*(byte *)(lVar6 + 0x2e0) & 1) != 0) {
            operator_delete(*(void **)(lVar6 + 0x2e8));
          }
          *(ulong *)(lVar6 + 0x2e0) = CONCAT71(uStack_87,local_88);
          *(undefined8 *)(lVar6 + 0x308) = local_60;
          *(undefined8 *)(lVar6 + 0x2f0) = uStack_78;
          *(void **)(lVar6 + 0x2e8) = local_80;
          *(undefined8 *)(lVar6 + 0x300) = uStack_68;
          *(undefined8 *)(lVar6 + 0x2f8) = uStack_70;
        }
        FUN_007d51b0(lVar6 + 0x328,&DAT_002241d4,3);
        FUN_007d51b0(lVar6 + 0x310,&DAT_002241e0,1);
        lVar6 = param_1[0xd];
        if (2 < (ulong)((param_1[0xe] - lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
          *(undefined8 *)(lVar6 + 0xd0) = DAT_001f5170;
          FUN_00850d54(&local_88,"-D-R-R",6);
          if ((byte *)(lVar6 + 0xd8) == &local_88) {
            if ((local_88 & 1) != 0) {
              operator_delete(local_80);
            }
          }
          else {
            if ((*(byte *)(lVar6 + 0xd8) & 1) != 0) {
              operator_delete(*(void **)(lVar6 + 0xe0));
            }
            *(ulong *)(lVar6 + 0xd8) = CONCAT71(uStack_87,local_88);
            *(undefined8 *)(lVar6 + 0x100) = local_60;
            *(undefined8 *)(lVar6 + 0xe8) = uStack_78;
            *(void **)(lVar6 + 0xe0) = local_80;
            *(undefined8 *)(lVar6 + 0xf8) = uStack_68;
            *(undefined8 *)(lVar6 + 0xf0) = uStack_70;
          }
          FUN_007d51b0(lVar6 + 0x120,&DAT_002241e4,3);
          FUN_007d51b0(lVar6 + 0x108,&DAT_002241f0,1);
          lVar6 = param_1[0xd];
          if (5 < (ulong)((param_1[0xe] - lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
            *(undefined8 *)(lVar6 + 0x208) = 0x100000001;
            FUN_00850d54(&local_88,"---D-R",6);
            if ((byte *)(lVar6 + 0x210) == &local_88) {
              if ((local_88 & 1) != 0) {
                operator_delete(local_80);
              }
            }
            else {
              if ((*(byte *)(lVar6 + 0x210) & 1) != 0) {
                operator_delete(*(void **)(lVar6 + 0x218));
              }
              *(ulong *)(lVar6 + 0x210) = CONCAT71(uStack_87,local_88);
              *(undefined8 *)(lVar6 + 0x238) = local_60;
              *(undefined8 *)(lVar6 + 0x220) = uStack_78;
              *(void **)(lVar6 + 0x218) = local_80;
              *(undefined8 *)(lVar6 + 0x230) = uStack_68;
              *(undefined8 *)(lVar6 + 0x228) = uStack_70;
            }
            FUN_007d51b0(lVar6 + 600,&DAT_002241f4,3);
            FUN_007d51b0(lVar6 + 0x240,&DAT_00224200,2);
            lVar6 = param_1[0xd];
            if (8 < (ulong)((param_1[0xe] - lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
              *(undefined8 *)(lVar6 + 0x340) = DAT_001f54e8;
              FUN_00850d54(&local_88,"-----D",6);
              if ((byte *)(lVar6 + 0x348) == &local_88) {
                if ((local_88 & 1) != 0) {
                  operator_delete(local_80);
                }
              }
              else {
                if ((*(byte *)(lVar6 + 0x348) & 1) != 0) {
                  operator_delete(*(void **)(lVar6 + 0x350));
                }
                *(ulong *)(lVar6 + 0x348) = CONCAT71(uStack_87,local_88);
                *(undefined8 *)(lVar6 + 0x370) = local_60;
                *(undefined8 *)(lVar6 + 0x358) = uStack_78;
                *(void **)(lVar6 + 0x350) = local_80;
                *(undefined8 *)(lVar6 + 0x368) = uStack_68;
                *(undefined8 *)(lVar6 + 0x360) = uStack_70;
              }
              FUN_007d51b0(lVar6 + 0x390,&DAT_00224208,3);
              FUN_007d51b0(lVar6 + 0x378,&DAT_00224214,2);
              puVar1 = (undefined8 *)param_1[0xd];
              if ((undefined8 *)param_1[0xe] != puVar1) {
                *puVar1 = 0;
                FUN_00850d54(&local_88,"SSRRRR",6);
                if ((byte *)(puVar1 + 1) == &local_88) {
                  if ((local_88 & 1) != 0) {
                    operator_delete(local_80);
                  }
                }
                else {
                  if ((*(byte *)(puVar1 + 1) & 1) != 0) {
                    operator_delete((void *)puVar1[2]);
                  }
                  puVar1[1] = CONCAT71(uStack_87,local_88);
                  puVar1[6] = local_60;
                  puVar1[3] = uStack_78;
                  puVar1[2] = local_80;
                  puVar1[5] = uStack_68;
                  puVar1[4] = uStack_70;
                }
                FUN_007d51b0(puVar1 + 10,&DAT_0022421c,3);
                FUN_007d51b0(puVar1 + 7,&DAT_00224228,1);
                lVar6 = param_1[0xd];
                if (3 < (ulong)((param_1[0xe] - lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                  *(undefined8 *)(lVar6 + 0x138) = uVar4;
                  FUN_00850d54(&local_88,"--SSRR",6);
                  if ((byte *)(lVar6 + 0x140) == &local_88) {
                    if ((local_88 & 1) != 0) {
                      operator_delete(local_80);
                    }
                  }
                  else {
                    if ((*(byte *)(lVar6 + 0x140) & 1) != 0) {
                      operator_delete(*(void **)(lVar6 + 0x148));
                    }
                    *(ulong *)(lVar6 + 0x140) = CONCAT71(uStack_87,local_88);
                    *(undefined8 *)(lVar6 + 0x168) = local_60;
                    *(undefined8 *)(lVar6 + 0x150) = uStack_78;
                    *(void **)(lVar6 + 0x148) = local_80;
                    *(undefined8 *)(lVar6 + 0x160) = uStack_68;
                    *(undefined8 *)(lVar6 + 0x158) = uStack_70;
                  }
                  FUN_007d51b0(lVar6 + 0x188,&DAT_0022422c,3);
                  FUN_007d51b0(lVar6 + 0x170,&DAT_00224238,2);
                  lVar6 = param_1[0xd];
                  if (6 < (ulong)((param_1[0xe] - lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                    *(undefined8 *)(lVar6 + 0x270) = uVar3;
                    FUN_00850d54(&local_88,"----SS",6);
                    if ((byte *)(lVar6 + 0x278) == &local_88) {
                      if ((local_88 & 1) != 0) {
                        operator_delete(local_80);
                      }
                    }
                    else {
                      if ((*(byte *)(lVar6 + 0x278) & 1) != 0) {
                        operator_delete(*(void **)(lVar6 + 0x280));
                      }
                      *(ulong *)(lVar6 + 0x278) = CONCAT71(uStack_87,local_88);
                      *(undefined8 *)(lVar6 + 0x2a0) = local_60;
                      *(undefined8 *)(lVar6 + 0x288) = uStack_78;
                      *(void **)(lVar6 + 0x280) = local_80;
                      *(undefined8 *)(lVar6 + 0x298) = uStack_68;
                      *(undefined8 *)(lVar6 + 0x290) = uStack_70;
                    }
                    FUN_007d51b0(lVar6 + 0x2c0,&DAT_00224240,3);
                    FUN_007d51b0(lVar6 + 0x2a8,&DAT_0022424c,2);
                    if (*(long *)(lVar2 + 0x28) == local_58) {
                      return;
                    }
                    /* WARNING: Subroutine does not return */
                    __stack_chk_fail();
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
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 008abb7c  FUN_008abb7c =====

void FUN_008abb7c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  byte local_98;
  undefined7 uStack_97;
  void *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  plVar7 = param_1 + 0xd;
  *plVar7 = 0;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  uVar6 = DAT_001f5c90;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = 0;
  param_1[8] = 0;
  *param_1 = uVar6;
  *(undefined4 *)(param_1 + 1) = 3;
  FUN_008ad510(param_1 + 2,&DAT_00224254,9);
  FUN_008a9840(plVar7,0xf);
  lVar8 = *plVar7;
  if (1 < (ulong)((param_1[0xe] - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
    *(undefined8 *)(lVar8 + 0x68) = 0;
    FUN_00850d54(&local_98,"SSSSSSSSS",9);
    if ((byte *)(lVar8 + 0x70) == &local_98) {
      if ((local_98 & 1) != 0) {
        operator_delete(local_90);
      }
    }
    else {
      if ((*(byte *)(lVar8 + 0x70) & 1) != 0) {
        operator_delete(*(void **)(lVar8 + 0x78));
      }
      *(ulong *)(lVar8 + 0x70) = CONCAT71(uStack_97,local_98);
      *(undefined8 *)(lVar8 + 0x98) = local_70;
      *(undefined8 *)(lVar8 + 0x90) = uStack_78;
      *(undefined8 *)(lVar8 + 0x88) = uStack_80;
      *(undefined8 *)(lVar8 + 0x80) = uStack_88;
      *(void **)(lVar8 + 0x78) = local_90;
    }
    FUN_007d51b0(lVar8 + 0xb8,&DAT_00224278,3);
    uVar6 = DAT_001f58a0;
    lVar8 = param_1[0xd];
    if (6 < (ulong)((param_1[0xe] - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
      *(undefined8 *)(lVar8 + 0x270) = DAT_001f58a0;
      FUN_00850d54(&local_98,"---SSSSSS",9);
      if ((byte *)(lVar8 + 0x278) == &local_98) {
        if ((local_98 & 1) != 0) {
          operator_delete(local_90);
        }
      }
      else {
        if ((*(byte *)(lVar8 + 0x278) & 1) != 0) {
          operator_delete(*(void **)(lVar8 + 0x280));
        }
        *(ulong *)(lVar8 + 0x278) = CONCAT71(uStack_97,local_98);
        *(undefined8 *)(lVar8 + 0x2a0) = local_70;
        *(undefined8 *)(lVar8 + 0x288) = uStack_88;
        *(void **)(lVar8 + 0x280) = local_90;
        *(undefined8 *)(lVar8 + 0x298) = uStack_78;
        *(undefined8 *)(lVar8 + 0x290) = uStack_80;
      }
      FUN_007d51b0(lVar8 + 0x2c0,&DAT_00224284,3);
      FUN_007d51b0(lVar8 + 0x2a8,&DAT_00224290,1);
      uVar5 = DAT_001f5360;
      lVar8 = param_1[0xd];
      if (0xb < (ulong)((param_1[0xe] - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
        *(undefined8 *)(lVar8 + 0x478) = DAT_001f5360;
        FUN_00850d54(&local_98,"------SSS",9);
        if ((byte *)(lVar8 + 0x480) == &local_98) {
          if ((local_98 & 1) != 0) {
            operator_delete(local_90);
          }
        }
        else {
          if ((*(byte *)(lVar8 + 0x480) & 1) != 0) {
            operator_delete(*(void **)(lVar8 + 0x488));
          }
          *(ulong *)(lVar8 + 0x480) = CONCAT71(uStack_97,local_98);
          *(undefined8 *)(lVar8 + 0x4a8) = local_70;
          *(undefined8 *)(lVar8 + 0x490) = uStack_88;
          *(void **)(lVar8 + 0x488) = local_90;
          *(undefined8 *)(lVar8 + 0x4a0) = uStack_78;
          *(undefined8 *)(lVar8 + 0x498) = uStack_80;
        }
        FUN_007d51b0(lVar8 + 0x4c8,&DAT_00224294,3);
        FUN_007d51b0(lVar8 + 0x4b0,&DAT_002242a0,1);
        uVar4 = DAT_001f5200;
        lVar8 = param_1[0xd];
        if (3 < (ulong)((param_1[0xe] - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
          *(undefined8 *)(lVar8 + 0x138) = DAT_001f5200;
          FUN_00850d54(&local_98,"--D--R--R",9);
          if ((byte *)(lVar8 + 0x140) == &local_98) {
            if ((local_98 & 1) != 0) {
              operator_delete(local_90);
            }
          }
          else {
            if ((*(byte *)(lVar8 + 0x140) & 1) != 0) {
              operator_delete(*(void **)(lVar8 + 0x148));
            }
            *(ulong *)(lVar8 + 0x140) = CONCAT71(uStack_97,local_98);
            *(undefined8 *)(lVar8 + 0x168) = local_70;
            *(undefined8 *)(lVar8 + 0x150) = uStack_88;
            *(void **)(lVar8 + 0x148) = local_90;
            *(undefined8 *)(lVar8 + 0x160) = uStack_78;
            *(undefined8 *)(lVar8 + 0x158) = uStack_80;
          }
          FUN_007d51b0(lVar8 + 0x188,&DAT_002242a4,3);
          FUN_007d51b0(lVar8 + 0x170,&DAT_002242b0,1);
          uVar3 = DAT_001f50d0;
          lVar8 = param_1[0xd];
          if (8 < (ulong)((param_1[0xe] - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
            *(undefined8 *)(lVar8 + 0x340) = DAT_001f50d0;
            FUN_00850d54(&local_98,"-----D--R",9);
            if ((byte *)(lVar8 + 0x348) == &local_98) {
              if ((local_98 & 1) != 0) {
                operator_delete(local_90);
              }
            }
            else {
              if ((*(byte *)(lVar8 + 0x348) & 1) != 0) {
                operator_delete(*(void **)(lVar8 + 0x350));
              }
              *(ulong *)(lVar8 + 0x348) = CONCAT71(uStack_97,local_98);
              *(undefined8 *)(lVar8 + 0x370) = local_70;
              *(undefined8 *)(lVar8 + 0x358) = uStack_88;
              *(void **)(lVar8 + 0x350) = local_90;
              *(undefined8 *)(lVar8 + 0x368) = uStack_78;
              *(undefined8 *)(lVar8 + 0x360) = uStack_80;
            }
            FUN_007d51b0(lVar8 + 0x390,&DAT_002242b4,3);
            FUN_007d51b0(lVar8 + 0x378,&DAT_002242c0,2);
            lVar8 = param_1[0xd];
            if (0xd < (ulong)((param_1[0xe] - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
              *(undefined8 *)(lVar8 + 0x548) = 0x200000002;
              FUN_00850d54(&local_98,"--------D",9);
              if ((byte *)(lVar8 + 0x550) == &local_98) {
                if ((local_98 & 1) != 0) {
                  operator_delete(local_90);
                }
              }
              else {
                if ((*(byte *)(lVar8 + 0x550) & 1) != 0) {
                  operator_delete(*(void **)(lVar8 + 0x558));
                }
                *(ulong *)(lVar8 + 0x550) = CONCAT71(uStack_97,local_98);
                *(undefined8 *)(lVar8 + 0x578) = local_70;
                *(undefined8 *)(lVar8 + 0x560) = uStack_88;
                *(void **)(lVar8 + 0x558) = local_90;
                *(undefined8 *)(lVar8 + 0x570) = uStack_78;
                *(undefined8 *)(lVar8 + 0x568) = uStack_80;
              }
              FUN_007d51b0(lVar8 + 0x598,&DAT_002242c8,3);
              FUN_007d51b0(lVar8 + 0x580,&DAT_002242d4,2);
              lVar8 = param_1[0xd];
              if (2 < (ulong)((param_1[0xe] - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                *(undefined8 *)(lVar8 + 0xd0) = DAT_001f5170;
                FUN_00850d54(&local_98,"-DS-RR-RR",9);
                if ((byte *)(lVar8 + 0xd8) == &local_98) {
                  if ((local_98 & 1) != 0) {
                    operator_delete(local_90);
                  }
                }
                else {
                  if ((*(byte *)(lVar8 + 0xd8) & 1) != 0) {
                    operator_delete(*(void **)(lVar8 + 0xe0));
                  }
                  *(ulong *)(lVar8 + 0xd8) = CONCAT71(uStack_97,local_98);
                  *(undefined8 *)(lVar8 + 0x100) = local_70;
                  *(undefined8 *)(lVar8 + 0xe8) = uStack_88;
                  *(void **)(lVar8 + 0xe0) = local_90;
                  *(undefined8 *)(lVar8 + 0xf8) = uStack_78;
                  *(undefined8 *)(lVar8 + 0xf0) = uStack_80;
                }
                FUN_007d51b0(lVar8 + 0x120,&DAT_002242dc,3);
                FUN_007d51b0(lVar8 + 0x108,&DAT_002242e8,1);
                lVar8 = param_1[0xd];
                if (7 < (ulong)((param_1[0xe] - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                  *(undefined8 *)(lVar8 + 0x2d8) = 0x100000001;
                  FUN_00850d54(&local_98,"----DS-RR",9);
                  if ((byte *)(lVar8 + 0x2e0) == &local_98) {
                    if ((local_98 & 1) != 0) {
                      operator_delete(local_90);
                    }
                  }
                  else {
                    if ((*(byte *)(lVar8 + 0x2e0) & 1) != 0) {
                      operator_delete(*(void **)(lVar8 + 0x2e8));
                    }
                    *(ulong *)(lVar8 + 0x2e0) = CONCAT71(uStack_97,local_98);
                    *(undefined8 *)(lVar8 + 0x308) = local_70;
                    *(undefined8 *)(lVar8 + 0x2f0) = uStack_88;
                    *(void **)(lVar8 + 0x2e8) = local_90;
                    *(undefined8 *)(lVar8 + 0x300) = uStack_78;
                    *(undefined8 *)(lVar8 + 0x2f8) = uStack_80;
                  }
                  FUN_007d51b0(lVar8 + 0x328,&DAT_002242ec,3);
                  FUN_007d51b0(lVar8 + 0x310,&DAT_002242f8,2);
                  lVar8 = param_1[0xd];
                  if (0xc < (ulong)((param_1[0xe] - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                    *(undefined8 *)(lVar8 + 0x4e0) = DAT_001f54e8;
                    FUN_00850d54(&local_98,"-------DS",9);
                    if ((byte *)(lVar8 + 0x4e8) == &local_98) {
                      if ((local_98 & 1) != 0) {
                        operator_delete(local_90);
                      }
                    }
                    else {
                      if ((*(byte *)(lVar8 + 0x4e8) & 1) != 0) {
                        operator_delete(*(void **)(lVar8 + 0x4f0));
                      }
                      *(ulong *)(lVar8 + 0x4e8) = CONCAT71(uStack_97,local_98);
                      *(undefined8 *)(lVar8 + 0x510) = local_70;
                      *(undefined8 *)(lVar8 + 0x508) = uStack_78;
                      *(undefined8 *)(lVar8 + 0x500) = uStack_80;
                      *(undefined8 *)(lVar8 + 0x4f8) = uStack_88;
                      *(void **)(lVar8 + 0x4f0) = local_90;
                    }
                    FUN_007d51b0(lVar8 + 0x530,&DAT_00224300,3);
                    FUN_007d51b0(lVar8 + 0x518,&DAT_0022430c,2);
                    lVar8 = param_1[0xd];
                    if (4 < (ulong)((param_1[0xe] - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                      *(undefined8 *)(lVar8 + 0x1a0) = uVar4;
                      FUN_00850d54(&local_98,"--D--R--R",9);
                      if ((byte *)(lVar8 + 0x1a8) == &local_98) {
                        if ((local_98 & 1) != 0) {
                          operator_delete(local_90);
                        }
                      }
                      else {
                        if ((*(byte *)(lVar8 + 0x1a8) & 1) != 0) {
                          operator_delete(*(void **)(lVar8 + 0x1b0));
                        }
                        *(ulong *)(lVar8 + 0x1a8) = CONCAT71(uStack_97,local_98);
                        *(undefined8 *)(lVar8 + 0x1d0) = local_70;
                        *(undefined8 *)(lVar8 + 0x1b8) = uStack_88;
                        *(void **)(lVar8 + 0x1b0) = local_90;
                        *(undefined8 *)(lVar8 + 0x1c8) = uStack_78;
                        *(undefined8 *)(lVar8 + 0x1c0) = uStack_80;
                      }
                      FUN_007d51b0(lVar8 + 0x1f0,&DAT_00224314,3);
                      FUN_007d51b0(lVar8 + 0x1d8,&DAT_00224320,1);
                      lVar8 = param_1[0xd];
                      if (9 < (ulong)((param_1[0xe] - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                        *(undefined8 *)(lVar8 + 0x3a8) = uVar3;
                        FUN_00850d54(&local_98,"-----D--R",9);
                        if ((byte *)(lVar8 + 0x3b0) == &local_98) {
                          if ((local_98 & 1) != 0) {
                            operator_delete(local_90);
                          }
                        }
                        else {
                          if ((*(byte *)(lVar8 + 0x3b0) & 1) != 0) {
                            operator_delete(*(void **)(lVar8 + 0x3b8));
                          }
                          *(ulong *)(lVar8 + 0x3b0) = CONCAT71(uStack_97,local_98);
                          *(undefined8 *)(lVar8 + 0x3d8) = local_70;
                          *(undefined8 *)(lVar8 + 0x3c0) = uStack_88;
                          *(void **)(lVar8 + 0x3b8) = local_90;
                          *(undefined8 *)(lVar8 + 0x3d0) = uStack_78;
                          *(undefined8 *)(lVar8 + 0x3c8) = uStack_80;
                        }
                        FUN_007d51b0(lVar8 + 0x3f8,&DAT_00224324,3);
                        FUN_007d51b0(lVar8 + 0x3e0,&DAT_00224330,2);
                        lVar8 = param_1[0xd];
                        if (0xe < (ulong)((param_1[0xe] - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                          *(undefined8 *)(lVar8 + 0x5b0) = 0x200000002;
                          FUN_00850d54(&local_98,"--------D",9);
                          if ((byte *)(lVar8 + 0x5b8) == &local_98) {
                            if ((local_98 & 1) != 0) {
                              operator_delete(local_90);
                            }
                          }
                          else {
                            if ((*(byte *)(lVar8 + 0x5b8) & 1) != 0) {
                              operator_delete(*(void **)(lVar8 + 0x5c0));
                            }
                            *(ulong *)(lVar8 + 0x5b8) = CONCAT71(uStack_97,local_98);
                            *(undefined8 *)(lVar8 + 0x5e0) = local_70;
                            *(undefined8 *)(lVar8 + 0x5d8) = uStack_78;
                            *(undefined8 *)(lVar8 + 0x5d0) = uStack_80;
                            *(undefined8 *)(lVar8 + 0x5c8) = uStack_88;
                            *(void **)(lVar8 + 0x5c0) = local_90;
                          }
                          FUN_007d51b0(lVar8 + 0x600,&DAT_00224338,3);
                          FUN_007d51b0(lVar8 + 0x5e8,&DAT_00224344,2);
                          puVar1 = (undefined8 *)param_1[0xd];
                          if ((undefined8 *)param_1[0xe] != puVar1) {
                            *puVar1 = 0;
                            FUN_00850d54(&local_98,"SSSRRRRRR",9);
                            if ((byte *)(puVar1 + 1) == &local_98) {
                              if ((local_98 & 1) != 0) {
                                operator_delete(local_90);
                              }
                            }
                            else {
                              if ((*(byte *)(puVar1 + 1) & 1) != 0) {
                                operator_delete((void *)puVar1[2]);
                              }
                              puVar1[1] = CONCAT71(uStack_97,local_98);
                              puVar1[6] = local_70;
                              puVar1[3] = uStack_88;
                              puVar1[2] = local_90;
                              puVar1[5] = uStack_78;
                              puVar1[4] = uStack_80;
                            }
                            FUN_007d51b0(puVar1 + 10,&DAT_0022434c,3);
                            FUN_007d51b0(puVar1 + 7,&DAT_00224358,1);
                            lVar8 = param_1[0xd];
                            if (5 < (ulong)((param_1[0xe] - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                              *(undefined8 *)(lVar8 + 0x208) = uVar6;
                              FUN_00850d54(&local_98,"---SSSRRR",9);
                              if ((byte *)(lVar8 + 0x210) == &local_98) {
                                if ((local_98 & 1) != 0) {
                                  operator_delete(local_90);
                                }
                              }
                              else {
                                if ((*(byte *)(lVar8 + 0x210) & 1) != 0) {
                                  operator_delete(*(void **)(lVar8 + 0x218));
                                }
                                *(ulong *)(lVar8 + 0x210) = CONCAT71(uStack_97,local_98);
                                *(undefined8 *)(lVar8 + 0x238) = local_70;
                                *(undefined8 *)(lVar8 + 0x220) = uStack_88;
                                *(void **)(lVar8 + 0x218) = local_90;
                                *(undefined8 *)(lVar8 + 0x230) = uStack_78;
                                *(undefined8 *)(lVar8 + 0x228) = uStack_80;
                              }
                              FUN_007d51b0(lVar8 + 600,&DAT_0022435c,3);
                              FUN_007d51b0(lVar8 + 0x240,&DAT_00224368,2);
                              lVar8 = param_1[0xd];
                              if (10 < (ulong)((param_1[0xe] - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                                *(undefined8 *)(lVar8 + 0x410) = uVar5;
                                FUN_00850d54(&local_98,"------SSS",9);
                                if ((byte *)(lVar8 + 0x418) == &local_98) {
                                  if ((local_98 & 1) != 0) {
                                    operator_delete(local_90);
                                  }
                                }
                                else {
                                  if ((*(byte *)(lVar8 + 0x418) & 1) != 0) {
                                    operator_delete(*(void **)(lVar8 + 0x420));
                                  }
                                  *(ulong *)(lVar8 + 0x418) = CONCAT71(uStack_97,local_98);
                                  *(undefined8 *)(lVar8 + 0x440) = local_70;
                                  *(undefined8 *)(lVar8 + 0x438) = uStack_78;
                                  *(undefined8 *)(lVar8 + 0x430) = uStack_80;
                                  *(undefined8 *)(lVar8 + 0x428) = uStack_88;
                                  *(void **)(lVar8 + 0x420) = local_90;
                                }
                                FUN_007d51b0(lVar8 + 0x460,&DAT_00224370,3);
                                FUN_007d51b0(lVar8 + 0x448,&DAT_0022437c,2);
                                if (*(long *)(lVar2 + 0x28) == local_68) {
                                  return;
                                }
                    /* WARNING: Subroutine does not return */
                                __stack_chk_fail();
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
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 008ac6fc  FUN_008ac6fc =====

void FUN_008ac6fc(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 008ac708  FUN_008ac708 =====

void FUN_008ac708(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 008ac714  FUN_008ac714 =====

void FUN_008ac714(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 008ac720  FUN_008ac720 =====

void FUN_008ac720(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 008ac72c  FUN_008ac72c =====

void FUN_008ac72c(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 008ac738  FUN_008ac738 =====

void FUN_008ac738(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 008ac744  FUN_008ac744 =====

void FUN_008ac744(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 008ac750  FUN_008ac750 =====

void FUN_008ac750(void)

{
  return;
}


// ===== 008ac758  FUN_008ac758 =====

void FUN_008ac758(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 008ac764  FUN_008ac764 =====

void FUN_008ac764(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 008ac77c  FUN_008ac77c =====

void FUN_008ac77c(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar8 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar8 + (param_2[1] - (long)puVar2));
  puVar3 = puVar8;
  puVar5 = puVar1;
  if (puVar2 != puVar8) {
    do {
      if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar11 = puVar3[1];
      uVar9 = *puVar3;
      puVar5[2] = 0;
      puVar5[1] = uVar11;
      *puVar5 = uVar9;
      puVar5[2] = puVar3[2];
      uVar9 = puVar3[9];
      uVar12 = puVar3[8];
      uVar11 = puVar3[7];
      uVar14 = puVar3[4];
      uVar13 = puVar3[3];
      uVar16 = puVar3[6];
      uVar15 = puVar3[5];
      puVar5[10] = puVar3[10];
      puVar5[9] = uVar9;
      puVar5[8] = uVar12;
      puVar5[7] = uVar11;
      puVar5[6] = uVar16;
      puVar5[5] = uVar15;
      puVar5[4] = uVar14;
      puVar5[3] = uVar13;
      puVar3[2] = 0;
      puVar3 = puVar3 + 0xb;
      puVar5 = puVar5 + 0xb;
    } while (puVar3 != puVar2);
    do {
      if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if ((*(byte *)(puVar8 + 2) & 1) != 0) {
        operator_delete((void *)puVar8[3]);
      }
      puVar8 = puVar8 + 0xb;
    } while (puVar8 != puVar2);
  }
  param_2[1] = (long)puVar1;
  lVar4 = *param_1;
  lVar7 = param_1[2];
  param_1[1] = lVar4;
  lVar10 = param_2[1];
  lVar6 = param_2[3];
  param_1[1] = param_2[2];
  *param_1 = lVar10;
  param_1[2] = lVar6;
  param_2[2] = lVar4;
  param_2[3] = lVar7;
  *param_2 = lVar4;
  param_2[1] = lVar4;
  return;
}


// ===== 008ac89c  FUN_008ac89c =====

long FUN_008ac89c(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  void *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  void *local_38;
  
  lVar6 = param_1[1] - *param_1;
  uVar3 = (lVar6 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (0x2e8ba2e8ba2e8ba < uVar3) {
    FUN_008ac764();
LAB_008aca38:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  local_50 = (void *)0x0;
  lVar4 = param_1[2] - *param_1 >> 3;
  uVar5 = lVar4 * 0x5d1745d1745d1746;
  if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
    uVar5 = uVar3;
  }
  if (0x1745d1745d1745c < (ulong)(lVar4 * 0x2e8ba2e8ba2e8ba3)) {
    uVar5 = 0x2e8ba2e8ba2e8ba;
  }
  if (uVar5 != 0) {
    if (0x2e8ba2e8ba2e8ba < uVar5) goto LAB_008aca38;
    local_50 = operator_new(uVar5 * 0x58);
  }
  local_38 = (void *)((long)local_50 + uVar5 * 0x58);
  local_48 = (undefined8 *)((long)local_50 + lVar6);
  if (local_48 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  local_48[10] = 0;
  local_48[1] = 0;
  *local_48 = 0;
  local_48[3] = 0;
  local_48[2] = 0;
  local_48[7] = 0;
  local_48[6] = 0;
  local_48[9] = 0;
  local_48[8] = 0;
  local_48[5] = 0;
  local_48[4] = 0;
  local_40 = local_48 + 0xb;
  FUN_008ac77c(param_1,&local_50);
  puVar2 = local_48;
  lVar6 = param_1[1];
  puVar7 = local_40;
  while( true ) {
    puVar1 = puVar7;
    if (puVar2 == puVar1) {
      if (local_50 != (void *)0x0) {
        local_40 = puVar1;
        operator_delete(local_50);
      }
      return lVar6;
    }
    puVar7 = puVar1 + -0xb;
    if (puVar7 == (undefined8 *)0x0) break;
    if ((*(byte *)(puVar1 + -9) & 1) != 0) {
      operator_delete((void *)puVar1[-8]);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008aca3c  FUN_008aca3c =====

undefined4 *
FUN_008aca3c(ulong *param_1,undefined4 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ulong *puVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  
  puVar14 = param_1 + 1;
  uVar13 = *param_1;
  if ((uVar13 & 1) == 0) {
    uVar12 = 0x10;
  }
  else {
    if ((param_1[2] >> 0x3c & 7) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar14 = (ulong *)param_1[1];
    uVar12 = param_1[2] << 1;
  }
  uVar15 = uVar13 >> 1;
  pvVar5 = operator_new(uVar12 << 3);
  puVar1 = (undefined4 *)((long)pvVar5 + uVar15 * 8);
  if (puVar1 == (undefined4 *)0x0) {
LAB_008acbd4:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar2 = *param_3;
  uVar3 = *param_4;
  *puVar1 = *param_2;
  *(undefined1 *)(puVar1 + 1) = uVar2;
  *(undefined1 *)((long)puVar1 + 5) = uVar3;
  if (uVar15 != 0) {
    uVar9 = uVar15 - 1;
    uVar16 = (ulong)-(long)pvVar5 >> 3;
    if (uVar9 <= (ulong)-(long)pvVar5 >> 3) {
      uVar16 = uVar9;
    }
    if (uVar16 < 0x1e) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      uVar11 = (ulong)-(long)pvVar5 >> 3;
      if (uVar9 <= uVar11) {
        uVar11 = uVar9;
      }
      if (((((-(long)pvVar5 & 7U) == 0) && (pvVar5 <= (void *)((long)pvVar5 + uVar11 * 8))) &&
          (puVar14 <= puVar14 + uVar11)) && (0x1f < (ulong)((long)pvVar5 - (long)puVar14))) {
        puVar8 = (ulong *)((long)pvVar5 + 0x10);
        uVar9 = uVar16 + 1 & 3;
        uVar11 = 4;
        if (uVar9 != 0) {
          uVar11 = uVar9;
        }
        puVar10 = puVar14 + 2;
        lVar6 = (uVar16 + 1) - uVar11;
        puVar14 = puVar14 + lVar6;
        lVar7 = lVar6;
        do {
          puVar4 = puVar10 + -1;
          uVar16 = puVar10[-2];
          uVar11 = puVar10[1];
          uVar9 = *puVar10;
          lVar7 = lVar7 + -4;
          puVar10 = puVar10 + 4;
          puVar8[-1] = *puVar4;
          puVar8[-2] = uVar16;
          puVar8[1] = uVar11;
          *puVar8 = uVar9;
          puVar8 = puVar8 + 4;
        } while (lVar7 != 0);
      }
    }
    lVar7 = uVar15 - lVar6;
    puVar8 = (ulong *)((long)pvVar5 + lVar6 * 8);
    do {
      if (puVar8 == (ulong *)0x0) goto LAB_008acbd4;
      lVar7 = lVar7 + -1;
      *puVar8 = *puVar14;
      puVar8 = puVar8 + 1;
      puVar14 = puVar14 + 1;
    } while (lVar7 != 0);
  }
  if ((uVar13 & 1) != 0) {
    operator_delete((void *)param_1[1]);
    uVar13 = *param_1;
  }
  param_1[1] = (ulong)pvVar5;
  param_1[2] = uVar12;
  *param_1 = (uVar13 | 1) + 2;
  return puVar1;
}


// ===== 008acbec  FUN_008acbec =====

undefined1  [16] FUN_008acbec(ulong *param_1,ulong param_2,ulong param_3,char *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  iVar4 = (int)param_2;
  if (param_3 != 0) {
    puVar5 = param_1;
    if (*param_4 == '\x01') {
      if (iVar4 == 0) {
        uVar3 = param_3 >> 6;
        uVar6 = param_3;
      }
      else {
        uVar3 = 0x40 - param_2 & 0xffffffff;
        uVar6 = param_3;
        if (uVar3 <= param_3) {
          uVar6 = uVar3;
        }
        uVar3 = (0x40 - param_2) - uVar6;
        if (0x3f < (uint)((int)uVar3 + iVar4)) goto LAB_008acda0;
        uVar6 = param_3 - uVar6;
        puVar5 = param_1 + 1;
        *param_1 = *param_1 |
                   ((0xffffffffffffffffU >> (uVar3 & 0x3f)) >> (param_2 & 0x3f)) << (param_2 & 0x3f)
        ;
        uVar3 = uVar6 >> 6;
      }
      if (uVar3 != 0) {
        memset(puVar5,0xff,uVar3 << 3);
      }
      if ((uVar6 & 0x3f) == 0) goto LAB_008acd38;
      if ((uVar6 & 0x3f) == 0) {
LAB_008acda0:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__bit_reference:113: libc++ Hardening assertion __ctz + __clz < sizeof(_StorageType) * 8 failed: __fill_masked_range called with invalid range\n"
                  );
      }
      uVar6 = puVar5[uVar3] | 0xffffffffffffffffU >> ((ulong)-((uint)uVar6 & 0x3f) & 0x3f);
    }
    else {
      if (iVar4 == 0) {
        uVar3 = param_3 >> 6;
        uVar6 = param_3;
      }
      else {
        uVar3 = 0x40 - param_2 & 0xffffffff;
        uVar6 = param_3;
        if (uVar3 <= param_3) {
          uVar6 = uVar3;
        }
        uVar3 = (0x40 - param_2) - uVar6;
        if (0x3f < (uint)((int)uVar3 + iVar4)) goto LAB_008acda0;
        uVar6 = param_3 - uVar6;
        puVar5 = param_1 + 1;
        *param_1 = *param_1 &
                   (((0xffffffffffffffffU >> (uVar3 & 0x3f)) >> (param_2 & 0x3f)) <<
                    (param_2 & 0x3f) ^ 0xffffffffffffffff);
        uVar3 = uVar6 >> 6;
      }
      if (uVar3 != 0) {
        memset(puVar5,0,uVar3 << 3);
      }
      if ((uVar6 & 0x3f) == 0) goto LAB_008acd38;
      if ((uVar6 & 0x3f) == 0) goto LAB_008acda0;
      uVar6 = puVar5[uVar3] &
              (0xffffffffffffffffU >> ((ulong)-((uint)uVar6 & 0x3f) & 0x3f) ^ 0xffffffffffffffff);
    }
    puVar5[uVar3] = uVar6;
  }
LAB_008acd38:
  uVar6 = param_3 - 0x3f;
  if (-1 < (long)param_3) {
    uVar6 = param_3;
  }
  lVar1 = uVar6 + (param_2 & 0xffffffff);
  lVar2 = lVar1 + 0x3f;
  if (-1 < lVar1) {
    lVar2 = lVar1;
  }
  auVar7._8_8_ = (ulong)(uint)(iVar4 + (int)param_3) & 0x3f;
  auVar7._0_8_ = param_1 + (lVar2 >> 6);
  return auVar7;
}


// ===== 008acdb4  FUN_008acdb4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008acdb4(long *param_1,uint *param_2,undefined1 param_3,undefined1 param_4)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  
  local_38[0] = 1;
  local_34[0] = 0xaa;
  uVar7 = FUN_008acf30(param_2,0,param_2,0x20,local_38,local_34);
  if (uVar7 < 0x10) {
    puVar8 = (undefined8 *)operator_new(0x28);
    *param_1 = (long)puVar8;
    lVar6 = _UNK_001f2a68;
    lVar5 = _DAT_001f2a60;
    uVar2 = *param_2;
    *(undefined1 *)(puVar8 + 4) = 0;
    param_1[2] = lVar6;
    param_1[1] = lVar5;
    puVar8[1] = CONCAT17(param_3,CONCAT16(param_3,CONCAT15(param_3,CONCAT14(param_3,CONCAT13(param_3
                                                  ,CONCAT12(param_3,CONCAT11(param_3,param_3)))))));
    *puVar8 = CONCAT17(param_3,CONCAT16(param_3,CONCAT15(param_3,CONCAT14(param_3,CONCAT13(param_3,
                                                  CONCAT12(param_3,CONCAT11(param_3,param_3)))))));
    puVar8[3] = CONCAT17(param_3,CONCAT16(param_3,CONCAT15(param_3,CONCAT14(param_3,CONCAT13(param_3
                                                  ,CONCAT12(param_3,CONCAT11(param_3,param_3)))))));
    puVar8[2] = CONCAT17(param_3,CONCAT16(param_3,CONCAT15(param_3,CONCAT14(param_3,CONCAT13(param_3
                                                  ,CONCAT12(param_3,CONCAT11(param_3,param_3)))))));
    for (uVar7 = (ulong)uVar2; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
      bVar3 = *(byte *)((long)param_1 + 0x17);
      uVar4 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar9 = 0x1f - LZCOUNT((uVar4 >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10) << 0x20);
      uVar4 = param_1[1];
      if (-1 < (char)bVar3) {
        uVar4 = (ulong)bVar3;
      }
      if (uVar4 < uVar9) {
LAB_008acf1c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string:1360: libc++ Hardening assertion __pos <= size() failed: string index out of bounds\n"
                  );
      }
      plVar1 = (long *)*param_1;
      if (-1 < (char)bVar3) {
        plVar1 = param_1;
      }
      *(undefined1 *)((long)plVar1 + uVar9) = param_4;
    }
  }
  else {
    puVar8 = (undefined8 *)operator_new(0x28);
    lVar6 = _UNK_001f2a68;
    lVar5 = _DAT_001f2a60;
    uVar2 = *param_2;
    *param_1 = (long)puVar8;
    *(undefined1 *)(puVar8 + 4) = 0;
    param_1[2] = lVar6;
    param_1[1] = lVar5;
    puVar8[1] = CONCAT17(param_4,CONCAT16(param_4,CONCAT15(param_4,CONCAT14(param_4,CONCAT13(param_4
                                                  ,CONCAT12(param_4,CONCAT11(param_4,param_4)))))));
    *puVar8 = CONCAT17(param_4,CONCAT16(param_4,CONCAT15(param_4,CONCAT14(param_4,CONCAT13(param_4,
                                                  CONCAT12(param_4,CONCAT11(param_4,param_4)))))));
    puVar8[3] = CONCAT17(param_4,CONCAT16(param_4,CONCAT15(param_4,CONCAT14(param_4,CONCAT13(param_4
                                                  ,CONCAT12(param_4,CONCAT11(param_4,param_4)))))));
    puVar8[2] = CONCAT17(param_4,CONCAT16(param_4,CONCAT15(param_4,CONCAT14(param_4,CONCAT13(param_4
                                                  ,CONCAT12(param_4,CONCAT11(param_4,param_4)))))));
    if ((ulong)uVar2 != 0xffffffff) {
      uVar7 = (ulong)uVar2 ^ 0xffffffff;
      do {
        bVar3 = *(byte *)((long)param_1 + 0x17);
        uVar4 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
        uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
        uVar9 = 0x1f - LZCOUNT((uVar4 >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10) << 0x20);
        uVar4 = param_1[1];
        if (-1 < (char)bVar3) {
          uVar4 = (ulong)bVar3;
        }
        if (uVar4 < uVar9) goto LAB_008acf1c;
        plVar1 = (long *)*param_1;
        if (-1 < (char)bVar3) {
          plVar1 = param_1;
        }
        uVar7 = uVar7 - 1 & uVar7;
        *(undefined1 *)((long)plVar1 + uVar9) = param_3;
      } while (uVar7 != 0);
    }
  }
  return;
}


// ===== 008acf30  FUN_008acf30 =====

long FUN_008acf30(ulong *param_1,uint param_2,long param_3,uint param_4,char *param_5)

{
  undefined1 (*pauVar1) [16];
  ulong *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  ulong *puVar25;
  byte *pbVar26;
  byte *pbVar27;
  byte *pbVar28;
  byte *pbVar29;
  byte *pbVar30;
  byte *pbVar31;
  byte *pbVar32;
  ulong uVar33;
  undefined1 (*pauVar34) [16];
  ulong *puVar35;
  ulong uVar36;
  ulong uVar37;
  ulong *puVar38;
  ulong uVar39;
  ulong uVar40;
  undefined1 uVar41;
  undefined8 uVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  
  uVar37 = (ulong)param_2;
  uVar36 = (param_4 - uVar37) + (param_3 - (long)param_1) * 8;
  if (*param_5 != '\x01') {
    if (uVar37 == 0) {
      lVar43 = 0;
      puVar35 = param_1;
    }
    else {
      param_2 = 0x40 - param_2;
      uVar40 = uVar36;
      if (param_2 <= uVar36) {
        uVar40 = (ulong)param_2;
      }
      uVar36 = uVar36 - uVar40;
      puVar35 = param_1 + 1;
      uVar42 = NEON_cnt(((0xffffffffffffffffU >> ((ulong)(param_2 - (int)uVar40) & 0x3f)) >>
                        (uVar37 & 0x3f)) << (uVar37 & 0x3f) & (*param_1 ^ 0xffffffffffffffff),1);
      uVar41 = NEON_addv(uVar42,1);
      lVar43 = CONCAT71((int7)((ulong)uVar42 >> 8),uVar41);
    }
    if (0x3f < uVar36) {
      if (0xbf < uVar36 - 0x40) {
        lVar44 = 0;
        lVar45 = 0;
        lVar46 = 0;
        uVar37 = (uVar36 - 0x40 >> 6) + 1;
        uVar39 = uVar37 & 0x7fffffffffffffc;
        uVar40 = uVar37 & 0x7fffffffffffffc;
        puVar38 = puVar35 + uVar39;
        uVar36 = uVar36 + uVar39 * -0x40;
        puVar35 = puVar35 + 2;
        do {
          puVar2 = puVar35 + -2;
          pbVar3 = (byte *)((long)puVar35 + -0xf);
          pbVar4 = (byte *)((long)puVar35 + -0xe);
          pbVar5 = (byte *)((long)puVar35 + -0xd);
          pbVar6 = (byte *)((long)puVar35 + -0xc);
          pbVar7 = (byte *)((long)puVar35 + -0xb);
          pbVar8 = (byte *)((long)puVar35 + -10);
          pbVar9 = (byte *)((long)puVar35 + -9);
          puVar10 = puVar35 + -1;
          pbVar11 = (byte *)((long)puVar35 + -7);
          pbVar12 = (byte *)((long)puVar35 + -6);
          pbVar13 = (byte *)((long)puVar35 + -5);
          pbVar14 = (byte *)((long)puVar35 + -4);
          pbVar15 = (byte *)((long)puVar35 + -3);
          pbVar16 = (byte *)((long)puVar35 + -2);
          pbVar17 = (byte *)((long)puVar35 + -1);
          uVar33 = *puVar35;
          pbVar18 = (byte *)((long)puVar35 + 1);
          pbVar19 = (byte *)((long)puVar35 + 2);
          pbVar20 = (byte *)((long)puVar35 + 3);
          pbVar21 = (byte *)((long)puVar35 + 4);
          pbVar22 = (byte *)((long)puVar35 + 5);
          pbVar23 = (byte *)((long)puVar35 + 6);
          pbVar24 = (byte *)((long)puVar35 + 7);
          puVar25 = puVar35 + 1;
          pbVar26 = (byte *)((long)puVar35 + 9);
          pbVar27 = (byte *)((long)puVar35 + 10);
          pbVar28 = (byte *)((long)puVar35 + 0xb);
          pbVar29 = (byte *)((long)puVar35 + 0xc);
          pbVar30 = (byte *)((long)puVar35 + 0xd);
          pbVar31 = (byte *)((long)puVar35 + 0xe);
          pbVar32 = (byte *)((long)puVar35 + 0xf);
          uVar40 = uVar40 - 4;
          puVar35 = puVar35 + 4;
          auVar48[0] = ~(byte)*puVar2;
          auVar48[1] = ~*pbVar3;
          auVar48[2] = ~*pbVar4;
          auVar48[3] = ~*pbVar5;
          auVar48[4] = ~*pbVar6;
          auVar48[5] = ~*pbVar7;
          auVar48[6] = ~*pbVar8;
          auVar48[7] = ~*pbVar9;
          auVar48[8] = ~(byte)*puVar10;
          auVar48[9] = ~*pbVar11;
          auVar48[10] = ~*pbVar12;
          auVar48[0xb] = ~*pbVar13;
          auVar48[0xc] = ~*pbVar14;
          auVar48[0xd] = ~*pbVar15;
          auVar48[0xe] = ~*pbVar16;
          auVar48[0xf] = ~*pbVar17;
          auVar47[0] = ~(byte)uVar33;
          auVar47[1] = ~*pbVar18;
          auVar47[2] = ~*pbVar19;
          auVar47[3] = ~*pbVar20;
          auVar47[4] = ~*pbVar21;
          auVar47[5] = ~*pbVar22;
          auVar47[6] = ~*pbVar23;
          auVar47[7] = ~*pbVar24;
          auVar47[8] = ~(byte)*puVar25;
          auVar47[9] = ~*pbVar26;
          auVar47[10] = ~*pbVar27;
          auVar47[0xb] = ~*pbVar28;
          auVar47[0xc] = ~*pbVar29;
          auVar47[0xd] = ~*pbVar30;
          auVar47[0xe] = ~*pbVar31;
          auVar47[0xf] = ~*pbVar32;
          auVar48 = NEON_cnt(auVar48,1);
          auVar47 = NEON_cnt(auVar47,1);
          lVar43 = lVar43 + (ulong)((uint)(ushort)((ushort)auVar48[0] + (ushort)auVar48[1]) +
                                   (uint)(ushort)((ushort)auVar48[2] + (ushort)auVar48[3])) +
                            (ulong)((uint)(ushort)((ushort)auVar48[4] + (ushort)auVar48[5]) +
                                   (uint)(ushort)((ushort)auVar48[6] + (ushort)auVar48[7]));
          lVar44 = lVar44 + (ulong)((uint)(ushort)((ushort)auVar48[8] + (ushort)auVar48[9]) +
                                   (uint)(ushort)((ushort)auVar48[10] + (ushort)auVar48[0xb])) +
                            (ulong)((uint)(ushort)((ushort)auVar48[0xc] + (ushort)auVar48[0xd]) +
                                   (uint)(ushort)((ushort)auVar48[0xe] + (ushort)auVar48[0xf]));
          lVar45 = lVar45 + (ulong)((uint)(ushort)((ushort)auVar47[0] + (ushort)auVar47[1]) +
                                   (uint)(ushort)((ushort)auVar47[2] + (ushort)auVar47[3])) +
                            (ulong)((uint)(ushort)((ushort)auVar47[4] + (ushort)auVar47[5]) +
                                   (uint)(ushort)((ushort)auVar47[6] + (ushort)auVar47[7]));
          lVar46 = lVar46 + (ulong)((uint)(ushort)((ushort)auVar47[8] + (ushort)auVar47[9]) +
                                   (uint)(ushort)((ushort)auVar47[10] + (ushort)auVar47[0xb])) +
                            (ulong)((uint)(ushort)((ushort)auVar47[0xc] + (ushort)auVar47[0xd]) +
                                   (uint)(ushort)((ushort)auVar47[0xe] + (ushort)auVar47[0xf]));
        } while (uVar40 != 0);
        lVar43 = lVar45 + lVar43 + lVar46 + lVar44;
        puVar35 = puVar38;
        if (uVar37 == uVar39) goto LAB_008ad174;
      }
      do {
        puVar38 = puVar35 + 1;
        uVar36 = uVar36 - 0x40;
        uVar42 = NEON_cnt(~*puVar35,1);
        uVar41 = NEON_addv(uVar42,1);
        lVar43 = CONCAT71((int7)((ulong)uVar42 >> 8),uVar41) + lVar43;
        puVar35 = puVar38;
      } while (0x3f < uVar36);
    }
LAB_008ad174:
    if (uVar36 == 0) {
      return lVar43;
    }
    uVar37 = ~*puVar35;
    goto LAB_008ad180;
  }
  if (uVar37 == 0) {
    lVar43 = 0;
    puVar35 = param_1;
  }
  else {
    param_2 = 0x40 - param_2;
    uVar40 = uVar36;
    if (param_2 <= uVar36) {
      uVar40 = (ulong)param_2;
    }
    uVar36 = uVar36 - uVar40;
    puVar35 = param_1 + 1;
    uVar42 = NEON_cnt(((0xffffffffffffffffU >> ((ulong)(param_2 - (int)uVar40) & 0x3f)) >>
                      (uVar37 & 0x3f)) << (uVar37 & 0x3f) & *param_1,1);
    uVar41 = NEON_addv(uVar42,1);
    lVar43 = CONCAT71((int7)((ulong)uVar42 >> 8),uVar41);
  }
  if (0x3f < uVar36) {
    if (0xbf < uVar36 - 0x40) {
      lVar44 = 0;
      lVar45 = 0;
      lVar46 = 0;
      uVar37 = (uVar36 - 0x40 >> 6) + 1;
      uVar39 = uVar37 & 0x7fffffffffffffc;
      uVar40 = uVar37 & 0x7fffffffffffffc;
      puVar38 = puVar35 + uVar39;
      uVar36 = uVar36 + uVar39 * -0x40;
      pauVar34 = (undefined1 (*) [16])(puVar35 + 2);
      do {
        pauVar1 = pauVar34 + -1;
        auVar48 = *pauVar34;
        uVar40 = uVar40 - 4;
        pauVar34 = pauVar34 + 2;
        auVar47 = NEON_cnt(*pauVar1,1);
        auVar48 = NEON_cnt(auVar48,1);
        lVar43 = lVar43 + (ulong)((uint)(ushort)((ushort)auVar47[0] + (ushort)auVar47[1]) +
                                 (uint)(ushort)((ushort)auVar47[2] + (ushort)auVar47[3])) +
                          (ulong)((uint)(ushort)((ushort)auVar47[4] + (ushort)auVar47[5]) +
                                 (uint)(ushort)((ushort)auVar47[6] + (ushort)auVar47[7]));
        lVar44 = lVar44 + (ulong)((uint)(ushort)((ushort)auVar47[8] + (ushort)auVar47[9]) +
                                 (uint)(ushort)((ushort)auVar47[10] + (ushort)auVar47[0xb])) +
                          (ulong)((uint)(ushort)((ushort)auVar47[0xc] + (ushort)auVar47[0xd]) +
                                 (uint)(ushort)((ushort)auVar47[0xe] + (ushort)auVar47[0xf]));
        lVar45 = lVar45 + (ulong)((uint)(ushort)((ushort)auVar48[0] + (ushort)auVar48[1]) +
                                 (uint)(ushort)((ushort)auVar48[2] + (ushort)auVar48[3])) +
                          (ulong)((uint)(ushort)((ushort)auVar48[4] + (ushort)auVar48[5]) +
                                 (uint)(ushort)((ushort)auVar48[6] + (ushort)auVar48[7]));
        lVar46 = lVar46 + (ulong)((uint)(ushort)((ushort)auVar48[8] + (ushort)auVar48[9]) +
                                 (uint)(ushort)((ushort)auVar48[10] + (ushort)auVar48[0xb])) +
                          (ulong)((uint)(ushort)((ushort)auVar48[0xc] + (ushort)auVar48[0xd]) +
                                 (uint)(ushort)((ushort)auVar48[0xe] + (ushort)auVar48[0xf]));
      } while (uVar40 != 0);
      lVar43 = lVar45 + lVar43 + lVar46 + lVar44;
      puVar35 = puVar38;
      if (uVar37 == uVar39) goto LAB_008ad0cc;
    }
    do {
      puVar38 = puVar35 + 1;
      uVar36 = uVar36 - 0x40;
      uVar42 = NEON_cnt(*puVar35,1);
      uVar41 = NEON_addv(uVar42,1);
      lVar43 = CONCAT71((int7)((ulong)uVar42 >> 8),uVar41) + lVar43;
      puVar35 = puVar38;
    } while (0x3f < uVar36);
  }
LAB_008ad0cc:
  if (uVar36 == 0) {
    return lVar43;
  }
  uVar37 = *puVar35;
LAB_008ad180:
  uVar42 = NEON_cnt((uVar37 << (-uVar36 & 0x3f)) >> (-uVar36 & 0x3f),1);
  uVar41 = NEON_addv(uVar42,1);
  return CONCAT71((int7)((ulong)uVar42 >> 8),uVar41) + lVar43;
}


// ===== 008ad1a4  FUN_008ad1a4 =====

void FUN_008ad1a4(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  bool bVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  
  puVar6 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar8 = 8;
    if (param_3 < 9) goto LAB_008ad1e0;
LAB_008ad234:
    uVar8 = uVar8 * 2;
    if (uVar8 < param_3 || uVar8 - param_3 == 0) {
      uVar8 = param_3;
    }
    if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar3 = (ulong *)operator_new(uVar8 << 3);
    uVar5 = param_3;
    puVar6 = puVar3;
  }
  else {
    puVar6 = (ulong *)param_1[1];
    uVar8 = param_1[2];
    if (uVar8 < param_3) goto LAB_008ad234;
LAB_008ad1e0:
    uVar9 = *param_1 >> 1;
    puVar3 = puVar6 + uVar9;
    bVar2 = uVar9 <= param_3;
    uVar8 = param_3;
    if (bVar2) {
      uVar8 = uVar9;
    }
    uVar5 = 0;
    if (bVar2) {
      uVar5 = param_3 - uVar9;
    }
    if (!bVar2 || param_3 - uVar9 == 0) {
      puVar3 = (ulong *)0x0;
    }
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      uVar10 = *param_2;
      *(undefined2 *)((long)puVar6 + 4) = *(undefined2 *)((long)param_2 + 4);
      *(int *)puVar6 = (int)uVar10;
      puVar6 = puVar6 + 1;
      param_2 = param_2 + 1;
    }
    if (param_3 <= uVar9) {
      uVar5 = *param_1;
      goto LAB_008ad348;
    }
    uVar8 = 0;
    puVar6 = (ulong *)0x0;
  }
  uVar10 = uVar5 - 1;
  uVar9 = (ulong)-(long)puVar3 >> 3;
  if (uVar10 <= (ulong)-(long)puVar3 >> 3) {
    uVar9 = uVar10;
  }
  if (uVar9 < 0x1e) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    uVar13 = (ulong)-(long)puVar3 >> 3;
    if (uVar10 <= uVar13) {
      uVar13 = uVar10;
    }
    if (((((-(long)puVar3 & 7U) == 0) && (puVar3 <= puVar3 + uVar13)) &&
        (param_2 <= param_2 + uVar13)) && (0x1f < (ulong)((long)puVar3 - (long)param_2))) {
      puVar12 = puVar3 + 2;
      uVar10 = uVar9 + 1 & 3;
      uVar13 = 4;
      if (uVar10 != 0) {
        uVar13 = uVar10;
      }
      puVar11 = param_2 + 2;
      lVar7 = (uVar9 + 1) - uVar13;
      param_2 = param_2 + lVar7;
      lVar4 = lVar7;
      do {
        puVar1 = puVar11 + -1;
        uVar9 = puVar11[-2];
        uVar13 = puVar11[1];
        uVar10 = *puVar11;
        lVar4 = lVar4 + -4;
        puVar11 = puVar11 + 4;
        puVar12[-1] = *puVar1;
        puVar12[-2] = uVar9;
        puVar12[1] = uVar13;
        *puVar12 = uVar10;
        puVar12 = puVar12 + 4;
      } while (lVar4 != 0);
    }
  }
  lVar4 = uVar5 - lVar7;
  puVar3 = puVar3 + lVar7;
  do {
    if (puVar3 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    lVar4 = lVar4 + -1;
    *puVar3 = *param_2;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  } while (lVar4 != 0);
  uVar5 = *param_1;
  if (puVar6 != (ulong *)0x0) {
    if ((uVar5 & 1) != 0) {
      operator_delete((void *)param_1[1]);
      uVar5 = *param_1;
    }
    uVar5 = uVar5 | 1;
    param_1[1] = (ulong)puVar6;
    param_1[2] = uVar8;
  }
LAB_008ad348:
  *param_1 = uVar5 & 1 | param_3 << 1;
  return;
}


// ===== 008ad380  FUN_008ad380 =====

undefined4 * FUN_008ad380(ulong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  ulong *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  
  puVar13 = param_1 + 1;
  uVar12 = *param_1;
  if ((uVar12 & 1) == 0) {
    uVar11 = 0x14;
  }
  else {
    if ((param_1[2] >> 0x3d & 3) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar13 = (ulong *)param_1[1];
    uVar11 = param_1[2] << 1;
  }
  uVar14 = uVar12 >> 1;
  pvVar3 = operator_new(uVar11 << 2);
  puVar1 = (undefined4 *)((long)pvVar3 + uVar14 * 4);
  if (puVar1 == (undefined4 *)0x0) {
LAB_008ad4f8:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *puVar1 = *param_2;
  if (uVar14 != 0) {
    uVar7 = uVar14 - 1;
    uVar15 = (ulong)-(long)pvVar3 >> 2;
    if (uVar7 <= (ulong)-(long)pvVar3 >> 2) {
      uVar15 = uVar7;
    }
    if (uVar15 < 0x20) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      uVar10 = (ulong)-(long)pvVar3 >> 2;
      if (uVar7 <= uVar10) {
        uVar10 = uVar7;
      }
      if (((((-(long)pvVar3 & 3U) == 0) && (pvVar3 <= (void *)((long)pvVar3 + uVar10 * 4))) &&
          (puVar13 <= (ulong *)((long)puVar13 + uVar10 * 4))) &&
         (0x1f < (ulong)((long)pvVar3 - (long)puVar13))) {
        puVar9 = (ulong *)((long)pvVar3 + 0x10);
        uVar7 = uVar15 + 1 & 7;
        uVar10 = 8;
        if (uVar7 != 0) {
          uVar10 = uVar7;
        }
        puVar8 = puVar13 + 2;
        lVar4 = (uVar15 + 1) - uVar10;
        puVar13 = (ulong *)((long)puVar13 + lVar4 * 4);
        lVar5 = lVar4;
        do {
          puVar2 = puVar8 + -1;
          uVar15 = puVar8[-2];
          uVar10 = puVar8[1];
          uVar7 = *puVar8;
          lVar5 = lVar5 + -8;
          puVar8 = puVar8 + 4;
          puVar9[-1] = *puVar2;
          puVar9[-2] = uVar15;
          puVar9[1] = uVar10;
          *puVar9 = uVar7;
          puVar9 = puVar9 + 4;
        } while (lVar5 != 0);
      }
    }
    lVar5 = uVar14 - lVar4;
    puVar6 = (undefined4 *)((long)pvVar3 + lVar4 * 4);
    do {
      if (puVar6 == (undefined4 *)0x0) goto LAB_008ad4f8;
      lVar5 = lVar5 + -1;
      *puVar6 = (int)*puVar13;
      puVar6 = puVar6 + 1;
      puVar13 = (ulong *)((long)puVar13 + 4);
    } while (lVar5 != 0);
  }
  if ((uVar12 & 1) != 0) {
    operator_delete((void *)param_1[1]);
    uVar12 = *param_1;
  }
  param_1[1] = (ulong)pvVar3;
  param_1[2] = uVar11;
  *param_1 = (uVar12 | 1) + 2;
  return puVar1;
}


// ===== 008ad510  FUN_008ad510 =====

void FUN_008ad510(ulong *param_1,undefined4 *param_2,ulong param_3)

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
    uVar7 = 10;
    if (10 < param_3) goto LAB_008ad5a0;
LAB_008ad54c:
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
LAB_008ad574:
        uVar16 = 0;
      }
      else {
        uVar12 = uVar7 - 1;
        if (((((ulong *)((long)puVar9 + uVar12 * 4) < puVar9) || (param_2 + uVar12 < param_2)) ||
            (uVar12 >> 0x3e != 0)) || ((ulong)((long)puVar9 - (long)param_2) < 0x20))
        goto LAB_008ad574;
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
        if (uVar7 == uVar16) goto LAB_008ad5cc;
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
LAB_008ad5cc:
    if (param_3 <= uVar8) {
      uVar8 = *param_1;
      goto LAB_008ad6d0;
    }
    uVar7 = 0;
    pvVar19 = (void *)0x0;
  }
  else {
    puVar9 = (ulong *)param_1[1];
    uVar7 = param_1[2];
    if (param_3 <= uVar7) goto LAB_008ad54c;
LAB_008ad5a0:
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
LAB_008ad6d0:
  *param_1 = uVar8 & 1 | param_3 << 1;
  return;
}


// ===== 008ad778  FUN_008ad778 =====

void FUN_008ad778(undefined8 *param_1,int param_2,int param_3)

{
  *param_1 = &PTR_FUN_00d3bff8;
  *(int *)(param_1 + 1) = param_2;
  *(int *)((long)param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (ulong)(uint)~(-1 << (ulong)(param_3 * param_2 & 0x1f));
  return;
}


// ===== 008ad7ac  FUN_008ad7ac =====

void FUN_008ad7ac(void)

{
  return;
}


// ===== 008ad7b4  FUN_008ad7b4 =====

void FUN_008ad7b4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x8ad7bc);
  (*pcVar1)();
}


// ===== 008ad7bc  FUN_008ad7bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ad7bc(undefined8 *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  
  uVar3 = _UNK_001f2fa8;
  uVar7 = _DAT_001f2fa0;
  uVar1 = *(uint *)(param_2 + 8);
  *(undefined4 *)(param_1 + 5) = 1;
  param_1[2] = uVar3;
  param_1[1] = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 8);
  uVar2 = uVar1 - 1;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[4] = 0x100000001;
  param_1[3] = 0x100000001;
  *param_1 = uVar7;
  if (uVar2 < 4) {
    *(undefined4 *)((long)param_1 + (ulong)uVar2 * 4 + 0xc) = 1;
    *(undefined4 *)((long)param_1 + (ulong)uVar2 * 4 + 0x1c) = 1;
    if (1 < uVar1) {
      uVar5 = (ulong)uVar1 + 1;
      piVar6 = (int *)((long)param_1 + (ulong)uVar1 * 4 + 0x14);
      do {
        uVar5 = uVar5 - 1;
        piVar6[-4] = 1;
        *piVar6 = piVar6[1] << 1;
        piVar6 = piVar6 + -1;
      } while (2 < uVar5);
    }
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x8ad84c);
  (*pcVar4)();
}


// ===== 008ad84c  FUN_008ad84c =====

void FUN_008ad84c(undefined8 *param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  bool bVar12;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  int local_60;
  undefined1 local_5c [4];
  undefined1 local_58 [4];
  int local_54;
  
  iVar5 = *(int *)(param_2 + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_008a8e44(param_1,(long)iVar5);
  iVar5 = *(int *)(param_2 + 8);
  *(ulong *)(param_2 + 0x20) = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffff8;
  *(ulong *)(param_2 + 0x18) = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffff8;
  if (0 < iVar5) {
    uVar10 = 0;
    bVar12 = false;
    iVar11 = -0x55555600;
    do {
      iVar9 = (int)uVar10;
      uVar2 = *(int *)(param_2 + 0xc) * iVar9;
      if (0x1f < uVar2) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/bitset:686: libc++ Hardening assertion __p < _Size failed: bitset::operator[] index out of bounds\n"
                  );
      }
      if ((*(ulong *)(param_2 + 0x28) >> ((ulong)uVar2 & 0x3f) & 1) != 0) {
        puVar7 = (undefined8 *)param_1[1];
        if (puVar7 < (undefined8 *)param_1[2]) {
          if (puVar7 == (undefined8 *)0x0) goto LAB_008ada60;
          puVar7[10] = 0;
          puVar4 = puVar7 + 0xb;
          puVar7[3] = 0;
          puVar7[2] = 0;
          puVar7[5] = 0;
          puVar7[4] = 0;
          puVar7[7] = 0;
          puVar7[6] = 0;
          puVar7[9] = 0;
          puVar7[8] = 0;
          puVar7[1] = 0;
          *puVar7 = 0;
        }
        else {
          puVar4 = (undefined8 *)FUN_008ac89c(param_1);
        }
        param_1[1] = puVar4;
        if ((undefined8 *)*param_1 == puVar4) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
                    );
        }
        *(undefined4 *)(puVar4 + -0xb) = 1;
        *(int *)(puVar4 + -10) = iVar9;
        *(undefined4 *)((long)puVar4 + -0x4c) = 0;
        if (bVar12) {
          puVar3 = puVar4 + -9;
          local_64[0] = 1;
          local_68[0] = 0;
          if ((*puVar3 & 1) == 0) {
            puVar7 = puVar4 + -8;
            uVar8 = 8;
          }
          else {
            puVar7 = (undefined8 *)puVar4[-8];
            uVar8 = puVar4[-7];
          }
          uVar6 = *puVar3 >> 1;
          local_60 = iVar11;
          if (uVar6 == uVar8) {
            FUN_008aca3c(puVar3,&local_60,local_64,local_68);
          }
          else {
            piVar1 = (int *)(puVar7 + uVar6);
            if (piVar1 == (int *)0x0) goto LAB_008ada60;
            *piVar1 = iVar11;
            *(undefined2 *)(piVar1 + 1) = 1;
            *puVar3 = *puVar3 + 2;
          }
        }
        else {
          *(undefined1 *)((long)puVar4 + -0x54) = 1;
        }
        puVar3 = puVar4 + -9;
        local_58[0] = 0;
        local_5c[0] = 1;
        if ((*puVar3 & 1) == 0) {
          puVar7 = puVar4 + -8;
          uVar8 = 8;
        }
        else {
          puVar7 = (undefined8 *)puVar4[-8];
          uVar8 = puVar4[-7];
        }
        uVar6 = *puVar3 >> 1;
        local_54 = iVar9;
        if (uVar6 == uVar8) {
          FUN_008aca3c(puVar3,&local_54,local_58,local_5c);
        }
        else {
          piVar1 = (int *)(puVar7 + uVar6);
          if (piVar1 == (int *)0x0) {
LAB_008ada60:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *piVar1 = iVar9;
          *(undefined2 *)(piVar1 + 1) = 0x100;
          *puVar3 = *puVar3 + 2;
        }
        if (2 < uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_005f55a8("bitset set argument out of range");
        }
        bVar12 = true;
        iVar5 = *(int *)(param_2 + 8);
        *(ulong *)(param_2 + 0x18) = *(ulong *)(param_2 + 0x18) | 1L << (uVar10 & 0x3f);
        iVar11 = iVar9;
      }
      uVar10 = uVar10 + 1;
    } while ((long)uVar10 < (long)iVar5);
  }
  return;
}


// ===== 008adaa8  FUN_008adaa8 =====

void FUN_008adaa8(undefined8 *param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  int local_44;
  
  iVar5 = *(int *)(param_2 + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_008a8e44(param_1,(long)iVar5);
  iVar5 = *(int *)(param_2 + 8);
  *(ulong *)(param_2 + 0x20) = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffff8;
  if (0 < iVar5) {
    uVar10 = 0;
    do {
      iVar9 = (int)uVar10;
      uVar2 = *(int *)(param_2 + 0xc) * iVar9;
      if (0x1f < uVar2) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/bitset:686: libc++ Hardening assertion __p < _Size failed: bitset::operator[] index out of bounds\n"
                  );
      }
      if ((*(ulong *)(param_2 + 0x28) >> ((ulong)uVar2 & 0x3f) & 1) == 0) {
        if (2 < uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_005f55a8("bitset reset argument out of range");
        }
        *(ulong *)(param_2 + 0x18) =
             *(ulong *)(param_2 + 0x18) & (1L << (uVar10 & 0x3f) ^ 0xffffffffffffffffU);
      }
      else {
        puVar8 = (undefined8 *)param_1[1];
        if (puVar8 < (undefined8 *)param_1[2]) {
          if (puVar8 == (undefined8 *)0x0) goto LAB_008adc24;
          puVar8[10] = 0;
          puVar4 = puVar8 + 0xb;
          puVar8[3] = 0;
          puVar8[2] = 0;
          puVar8[5] = 0;
          puVar8[4] = 0;
          puVar8[7] = 0;
          puVar8[6] = 0;
          puVar8[9] = 0;
          puVar8[8] = 0;
          puVar8[1] = 0;
          *puVar8 = 0;
        }
        else {
          puVar4 = (undefined8 *)FUN_008ac89c(param_1);
        }
        param_1[1] = puVar4;
        if ((undefined8 *)*param_1 == puVar4) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
                    );
        }
        *(undefined4 *)(puVar4 + -0xb) = 2;
        puVar3 = puVar4 + -9;
        *(int *)(puVar4 + -10) = iVar9;
        *(undefined4 *)((long)puVar4 + -0x4c) = 0;
        local_48[0] = 1;
        local_4c[0] = 1;
        if ((*puVar3 & 1) == 0) {
          puVar8 = puVar4 + -8;
          uVar6 = 8;
        }
        else {
          puVar8 = (undefined8 *)puVar4[-8];
          uVar6 = puVar4[-7];
        }
        uVar7 = *puVar3 >> 1;
        local_44 = iVar9;
        if (uVar7 == uVar6) {
          FUN_008aca3c(puVar3,&local_44,local_48,local_4c);
        }
        else {
          piVar1 = (int *)(puVar8 + uVar7);
          if (piVar1 == (int *)0x0) {
LAB_008adc24:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *piVar1 = iVar9;
          *(undefined2 *)(piVar1 + 1) = 0x101;
          *puVar3 = *puVar3 + 2;
        }
        iVar5 = *(int *)(param_2 + 8);
      }
      uVar10 = uVar10 + 1;
    } while ((long)uVar10 < (long)iVar5);
  }
  return;
}


// ===== 008adc6c  FUN_008adc6c =====

void FUN_008adc6c(undefined8 *param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  int local_68;
  undefined1 local_64 [4];
  undefined1 local_48 [4];
  int local_44;
  
  iVar4 = *(int *)(param_2 + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_008a8e44(param_1,(long)iVar4);
  iVar4 = *(int *)(param_2 + 8);
  if (0 < iVar4) {
    iVar9 = 0;
    do {
      uVar2 = *(int *)(param_2 + 0xc) * iVar9 + 1;
      if (0x1f < uVar2) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/bitset:686: libc++ Hardening assertion __p < _Size failed: bitset::operator[] index out of bounds\n"
                  );
      }
      if ((*(ulong *)(param_2 + 0x28) >> ((ulong)uVar2 & 0x3f) & 1) != 0) {
        puVar10 = (undefined8 *)param_1[1];
        if (puVar10 < (undefined8 *)param_1[2]) {
          if (puVar10 == (undefined8 *)0x0) goto LAB_008ade48;
          puVar10[10] = 0;
          puVar3 = puVar10 + 0xb;
          puVar10[3] = 0;
          puVar10[2] = 0;
          puVar10[5] = 0;
          puVar10[4] = 0;
          puVar10[7] = 0;
          puVar10[6] = 0;
          puVar10[9] = 0;
          puVar10[8] = 0;
          puVar10[1] = 0;
          *puVar10 = 0;
        }
        else {
          puVar3 = (undefined8 *)FUN_008ac89c(param_1);
        }
        param_1[1] = puVar3;
        if ((undefined8 *)*param_1 == puVar3) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
                    );
        }
        *(undefined4 *)(puVar3 + -0xb) = 4;
        puVar8 = puVar3 + -9;
        puVar10 = puVar3 + -8;
        *(int *)(puVar3 + -10) = iVar9;
        *(undefined4 *)((long)puVar3 + -0x4c) = 1;
        local_6c[0] = 1;
        local_70[0] = 0;
        if ((*puVar8 & 1) == 0) {
          puVar6 = puVar3 + -8;
          uVar7 = 8;
        }
        else {
          puVar6 = (undefined8 *)puVar3[-8];
          uVar7 = puVar3[-7];
        }
        uVar5 = *puVar8 >> 1;
        local_68 = iVar9;
        if (uVar5 == uVar7) {
          FUN_008aca3c(puVar8,&local_68,local_6c,local_70);
        }
        else {
          piVar1 = (int *)(puVar6 + uVar5);
          if (piVar1 == (int *)0x0) goto LAB_008ade48;
          *piVar1 = iVar9;
          *(undefined2 *)(piVar1 + 1) = 1;
          *puVar8 = *puVar8 + 2;
        }
        iVar4 = *(int *)(param_2 + 8);
        if (2 < *(int *)(param_2 + 0xc)) {
          local_44 = iVar9 + iVar4;
          local_48[0] = 0;
          local_64[0] = 1;
          if ((*puVar8 & 1) == 0) {
            uVar7 = 8;
          }
          else {
            puVar10 = (undefined8 *)puVar3[-8];
            uVar7 = puVar3[-7];
          }
          uVar5 = *puVar8 >> 1;
          if (uVar5 == uVar7) {
            FUN_008aca3c(puVar8,&local_44,local_48,local_64);
          }
          else {
            piVar1 = (int *)(puVar10 + uVar5);
            if (piVar1 == (int *)0x0) {
LAB_008ade48:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            *piVar1 = local_44;
            *(undefined2 *)(piVar1 + 1) = 0x100;
            *puVar8 = *puVar8 + 2;
          }
          iVar4 = *(int *)(param_2 + 8);
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar4);
  }
  return;
}


// ===== 008ade84  FUN_008ade84 =====

void FUN_008ade84(undefined8 *param_1,long param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  int local_50;
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  int local_44;
  
  iVar9 = *(int *)(param_2 + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_008a8e44(param_1,(long)iVar9);
  if (0 < *(int *)(param_2 + 8)) {
    uVar10 = 0;
    do {
      iVar9 = (int)uVar10;
      uVar1 = *(int *)(param_2 + 0xc) * iVar9 + 2;
      if (0x1f < uVar1) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/bitset:686: libc++ Hardening assertion __p < _Size failed: bitset::operator[] index out of bounds\n"
                  );
      }
      if ((*(ulong *)(param_2 + 0x28) >> ((ulong)uVar1 & 0x3f) & 1) != 0) {
        puVar7 = (undefined8 *)param_1[1];
        if (puVar7 < (undefined8 *)param_1[2]) {
          if (puVar7 == (undefined8 *)0x0) goto LAB_008ae050;
          puVar7[10] = 0;
          puVar2 = puVar7 + 0xb;
          puVar7[3] = 0;
          puVar7[2] = 0;
          puVar7[5] = 0;
          puVar7[4] = 0;
          puVar7[7] = 0;
          puVar7[6] = 0;
          puVar7[9] = 0;
          puVar7[8] = 0;
          puVar7[1] = 0;
          *puVar7 = 0;
        }
        else {
          puVar2 = (undefined8 *)FUN_008ac89c(param_1);
        }
        param_1[1] = puVar2;
        if ((undefined8 *)*param_1 == puVar2) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
                    );
        }
        *(undefined4 *)(puVar2 + -0xb) = param_3;
        *(int *)(puVar2 + -10) = iVar9;
        *(undefined4 *)((long)puVar2 + -0x4c) = 2;
        if (2 < uVar10) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/bitset:696: libc++ Hardening assertion __p < _Size failed: bitset::operator[] index out of bounds\n"
                    );
        }
        if ((*(ulong *)(param_2 + 0x20) >> (uVar10 & 0x3f) & 1) == 0) {
          local_48[0] = 1;
          local_4c[0] = 0;
          if ((puVar2[-9] & 1) == 0) {
            puVar7 = puVar2 + -8;
            uVar8 = 8;
          }
          else {
            puVar7 = (undefined8 *)puVar2[-8];
            uVar8 = puVar2[-7];
          }
          uVar6 = (ulong)puVar2[-9] >> 1;
          local_44 = iVar9;
          if (uVar6 == uVar8) {
            piVar3 = &local_44;
            puVar4 = local_48;
            puVar5 = local_4c;
            goto LAB_008ae028;
          }
          piVar3 = (int *)(puVar7 + uVar6);
          if (piVar3 == (int *)0x0) goto LAB_008ae050;
          *piVar3 = iVar9;
          *(undefined2 *)(piVar3 + 1) = 1;
        }
        else {
          local_54[0] = 1;
          local_58[0] = 0;
          local_50 = iVar9 + *(int *)(param_2 + 8);
          if ((puVar2[-9] & 1) == 0) {
            puVar7 = puVar2 + -8;
            uVar8 = 8;
          }
          else {
            puVar7 = (undefined8 *)puVar2[-8];
            uVar8 = puVar2[-7];
          }
          uVar6 = (ulong)puVar2[-9] >> 1;
          if (uVar6 == uVar8) {
            piVar3 = &local_50;
            puVar4 = local_54;
            puVar5 = local_58;
LAB_008ae028:
            FUN_008aca3c(puVar2 + -9,piVar3,puVar4,puVar5);
            goto LAB_008adef0;
          }
          piVar3 = (int *)(puVar7 + uVar6);
          if (piVar3 == (int *)0x0) {
LAB_008ae050:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *piVar3 = local_50;
          *(undefined2 *)(piVar3 + 1) = 1;
        }
        puVar2[-9] = puVar2[-9] + 2;
      }
LAB_008adef0:
      uVar10 = uVar10 + 1;
    } while ((long)uVar10 < (long)*(int *)(param_2 + 8));
  }
  return;
}


// ===== 008ae0a0  FUN_008ae0a0 =====

undefined8 FUN_008ae0a0(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (2 < param_2) {
    if (param_2 == 3) {
      if (*(int *)(param_1 + 0xc) < 2) {
        return 2;
      }
      uVar2 = (ulong)*(uint *)(param_1 + 8);
      if ((int)*(uint *)(param_1 + 8) < 1) {
        return 2;
      }
      uVar3 = 1;
      while ((uint)uVar3 < 0x20) {
        if ((*(ulong *)(param_1 + 0x28) >> (uVar3 & 0x3f) & 1) != 0) {
          return 4;
        }
        uVar2 = uVar2 - 1;
        uVar3 = (ulong)((uint)uVar3 + *(int *)(param_1 + 0xc));
        if (uVar2 == 0) {
          return 2;
        }
      }
    }
    else {
      if (param_2 != 4) {
        if (param_2 == 5) {
          return 2;
        }
        return 0;
      }
      if (*(int *)(param_1 + 0xc) < 3) {
        return 2;
      }
      uVar2 = (ulong)*(uint *)(param_1 + 8);
      if ((int)*(uint *)(param_1 + 8) < 1) {
        return 2;
      }
      uVar3 = 2;
      while ((uint)uVar3 < 0x20) {
        if ((*(ulong *)(param_1 + 0x28) >> (uVar3 & 0x3f) & 1) != 0) {
          return 5;
        }
        uVar2 = uVar2 - 1;
        uVar3 = (ulong)((uint)uVar3 + *(int *)(param_1 + 0xc));
        if (uVar2 == 0) {
          return 2;
        }
      }
    }
LAB_008ae21c:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/bitset:686: libc++ Hardening assertion __p < _Size failed: bitset::operator[] index out of bounds\n"
              );
  }
  if (1 < param_2 - 1U) {
    if (param_2 != 0) {
      return 0;
    }
    return 1;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (2 < iVar1) {
    uVar2 = (ulong)*(uint *)(param_1 + 8);
    if ((int)*(uint *)(param_1 + 8) < 1) goto LAB_008ae104;
    uVar3 = 2;
    do {
      if (0x1f < (uint)uVar3) goto LAB_008ae21c;
      if ((*(ulong *)(param_1 + 0x28) >> (uVar3 & 0x3f) & 1) != 0) {
        return 3;
      }
      uVar2 = uVar2 - 1;
      uVar3 = (ulong)((uint)uVar3 + iVar1);
    } while (uVar2 != 0);
  }
  if (iVar1 < 2) {
    return 2;
  }
LAB_008ae104:
  uVar2 = (ulong)*(uint *)(param_1 + 8);
  if (0 < (int)*(uint *)(param_1 + 8)) {
    uVar3 = 1;
    do {
      if (0x1f < (uint)uVar3) goto LAB_008ae21c;
      if ((*(ulong *)(param_1 + 0x28) >> (uVar3 & 0x3f) & 1) != 0) {
        return 4;
      }
      uVar2 = uVar2 - 1;
      uVar3 = (ulong)((uint)uVar3 + iVar1);
    } while (uVar2 != 0);
  }
  return 2;
}


// ===== 008ae230  FUN_008ae230 =====

void FUN_008ae230(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_2 + 0x28) == 0) {
    *(undefined4 *)(param_2 + 0x10) = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  else {
    if ((param_3 & 1) == 0) {
      uVar2 = *(undefined4 *)(param_2 + 0x10);
    }
    else {
      uVar2 = 0;
      *(undefined4 *)(param_2 + 0x10) = 0;
    }
    iVar1 = FUN_008ae0a0(param_2,uVar2);
    if (iVar1 < 3) {
      if (iVar1 == 1) {
        FUN_008ad84c(param_1,param_2);
        return;
      }
      if (iVar1 == 2) {
        FUN_008adaa8(param_1,param_2);
        return;
      }
    }
    else {
      if (iVar1 == 3) {
LAB_008ae2a0:
        FUN_008ade84(param_1,param_2);
        return;
      }
      if (iVar1 == 4) {
        FUN_008adc6c(param_1,param_2);
        return;
      }
      if (iVar1 == 5) goto LAB_008ae2a0;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


// ===== 008ae328  FUN_008ae328 =====

void FUN_008ae328(undefined8 *param_1,long param_2,int *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  undefined1 local_48 [4];
  undefined4 local_44;
  
  *(int *)(param_2 + 0x10) = *param_3;
  if (param_3[3] == 1) {
    if (2 < (uint)param_3[2]) {
                    /* WARNING: Subroutine does not return */
      FUN_005f55a8("bitset set argument out of range");
    }
    *(ulong *)(param_2 + 0x20) = *(ulong *)(param_2 + 0x20) | 1L << ((ulong)(uint)param_3[2] & 0x3f)
    ;
  }
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
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00850a9c(param_1);
  *param_1 = *(undefined8 *)(param_3 + 2);
  if ((int *)(param_1 + 0xd) != param_3 + 4) {
    piVar4 = param_3 + 6;
    if ((*(ulong *)(param_3 + 4) & 1) != 0) {
      piVar4 = *(int **)(param_3 + 6);
    }
    FUN_008ad1a4(param_1 + 0xd,piVar4,(long)(*(ulong *)(param_3 + 4) << 2) >> 3);
  }
  FUN_00850e90(param_1 + 1,(long)(*(int *)(param_2 + 0xc) * *(int *)(param_2 + 8)));
  iVar7 = *(int *)(param_2 + 8);
  if (0 < iVar7) {
    iVar6 = *(int *)(param_2 + 0xc);
    iVar11 = 0;
    puVar2 = param_1 + 2;
    do {
      if (0 < iVar6) {
        if (((*(byte *)(param_3 + 1) & 1) == 0) && (*param_3 != 1)) {
          bVar1 = iVar11 != param_3[2] || 0 < param_3[3];
        }
        else {
          bVar1 = iVar11 < param_3[2];
        }
        uVar8 = param_1[1];
        local_44 = 0;
        if (!bVar1) {
          local_44 = 2;
        }
        uVar9 = 10;
        if ((uVar8 & 1) != 0) {
          uVar9 = param_1[3];
        }
        if (uVar8 >> 1 == uVar9) {
          FUN_008ad380(param_1 + 1,&local_44);
        }
        else {
          puVar5 = puVar2;
          if ((uVar8 & 1) != 0) {
            puVar5 = (undefined8 *)*puVar2;
          }
          puVar3 = (undefined4 *)((long)puVar5 + (uVar8 >> 1) * 4);
          if (puVar3 == (undefined4 *)0x0) {
LAB_008ae660:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *puVar3 = local_44;
          param_1[1] = param_1[1] + 2;
        }
        iVar6 = *(int *)(param_2 + 0xc);
        if (1 < iVar6) {
          iVar7 = 1;
          do {
            if (((*(byte *)(param_3 + 1) & 1) == 0) && (*param_3 != 1)) {
              if ((iVar11 == param_3[2]) && (param_3[3] <= iVar7)) {
                local_44 = 1;
                if (iVar7 != param_3[3]) {
                  local_44 = 2;
                }
              }
              else {
                local_44 = 0;
              }
            }
            else {
              local_44 = 0;
              if (param_3[2] <= iVar11) {
                local_44 = 2;
              }
            }
            uVar9 = param_1[1];
            uVar8 = 10;
            if ((uVar9 & 1) != 0) {
              uVar8 = param_1[3];
            }
            if (uVar9 >> 1 == uVar8) {
              FUN_008ad380(param_1 + 1,&local_44);
            }
            else {
              puVar5 = puVar2;
              if ((uVar9 & 1) != 0) {
                puVar5 = (undefined8 *)*puVar2;
              }
              puVar3 = (undefined4 *)((long)puVar5 + (uVar9 >> 1) * 4);
              if (puVar3 == (undefined4 *)0x0) goto LAB_008ae660;
              *puVar3 = local_44;
              param_1[1] = param_1[1] + 2;
            }
            iVar6 = *(int *)(param_2 + 0xc);
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar6);
        }
        iVar7 = *(int *)(param_2 + 8);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar7);
  }
  local_48[0] = 0;
  FUN_008a9388(param_1 + 0x16,(long)iVar7,local_48);
  if (((*(byte *)(param_3 + 1) & 1) == 0) && (*param_3 != 1)) {
    if (param_3[3] == 0) {
      uVar8 = (ulong)param_3[2];
      if ((ulong)param_1[0x17] <= uVar8) {
LAB_008ae674:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector_bool.h:297: libc++ Hardening assertion __n < size() failed: vector<bool>::operator[] index out of bounds\n"
                  );
      }
      uVar9 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(param_1[0x16] + uVar9) = *(ulong *)(param_1[0x16] + uVar9) | 1L << (uVar8 & 0x3f);
    }
  }
  else {
    uVar8 = (ulong)param_3[2];
    if (param_3[2] < *(int *)(param_2 + 8)) {
      do {
        if ((ulong)param_1[0x17] <= uVar8) goto LAB_008ae674;
        uVar10 = uVar8 >> 3;
        uVar9 = uVar8 & 0x3f;
        uVar8 = uVar8 + 1;
        uVar10 = uVar10 & 0x1ffffffffffffff8;
        *(ulong *)(param_1[0x16] + uVar10) = *(ulong *)(param_1[0x16] + uVar10) | 1L << uVar9;
      } while ((long)uVar8 < (long)*(int *)(param_2 + 8));
    }
  }
  param_1[0x19] = *(undefined8 *)(param_2 + 0x28);
  return;
}


// ===== 008ae694  FUN_008ae694 =====

void FUN_008ae694(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  
  if (0 < *(int *)(param_1 + 8)) {
    uVar7 = 0;
    do {
      iVar2 = FUN_007cc028(param_2,uVar7,0);
      iVar3 = *(int *)(param_1 + 0xc);
      bVar1 = iVar2 != 0;
      iVar6 = (int)uVar7;
      if (0x1f < (uint)(iVar3 * iVar6)) {
LAB_008ae7f0:
                    /* WARNING: Subroutine does not return */
        FUN_005f55a8("bitset set argument out of range");
      }
      uVar4 = 1L << ((ulong)(uint)(iVar3 * iVar6) & 0x3f);
      if (iVar2 == 0) {
        uVar4 = *(ulong *)(param_1 + 0x28) & (uVar4 ^ 0xffffffffffffffff);
      }
      else {
        uVar4 = *(ulong *)(param_1 + 0x28) | uVar4;
      }
      *(ulong *)(param_1 + 0x28) = uVar4;
      if (uVar7 == 3) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/bitset:696: libc++ Hardening assertion __p < _Size failed: bitset::operator[] index out of bounds\n"
                  );
      }
      if ((iVar2 != 0) && ((*(ulong *)(param_1 + 0x18) & 1L << (uVar7 & 0x3f)) == 0)) {
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      if (1 < iVar3) {
        lVar8 = 1;
        do {
          if (bVar1) {
            iVar2 = FUN_007cc028(param_2,uVar7,lVar8);
            iVar3 = *(int *)(param_1 + 0xc);
            uVar4 = lVar8 + (ulong)(uint)(iVar6 * iVar3);
            if (0x1f < (uint)uVar4) goto LAB_008ae7f0;
            uVar5 = 1L << (uVar4 & 0x3f);
            uVar4 = *(ulong *)(param_1 + 0x28);
            if (iVar2 == 0) goto LAB_008ae754;
            uVar4 = uVar4 | uVar5;
            bVar1 = true;
          }
          else {
            uVar5 = lVar8 + (ulong)(uint)(iVar6 * iVar3);
            if (0x1f < (uint)uVar5) goto LAB_008ae7f0;
            uVar5 = 1L << (uVar5 & 0x3f);
LAB_008ae754:
            bVar1 = false;
            uVar4 = uVar4 & (uVar5 ^ 0xffffffffffffffff);
          }
          lVar8 = lVar8 + 1;
          *(ulong *)(param_1 + 0x28) = uVar4;
        } while (lVar8 < iVar3);
      }
      uVar7 = uVar7 + 1;
    } while ((long)uVar7 < (long)*(int *)(param_1 + 8));
  }
  return;
}


// ===== 008ae7fc  FUN_008ae7fc =====

void FUN_008ae7fc(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 008ae808  FUN_008ae808 =====

void FUN_008ae808(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  byte local_78;
  undefined7 uStack_77;
  void *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar4 = param_1 + 0xd;
  *puVar4 = 0;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  uVar3 = DAT_001f5200;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = 0;
  param_1[8] = 0;
  *param_1 = uVar3;
  *(undefined4 *)(param_1 + 1) = 2;
  FUN_008ad510(param_1 + 2,&DAT_00224394,2);
  FUN_008a9840(puVar4,4);
  puVar5 = (undefined4 *)*puVar4;
  if ((undefined4 *)param_1[0xe] != puVar5) {
    *puVar5 = 0;
    FUN_00850d54(&local_78,&DAT_001dcd7e,2);
    if ((byte *)(puVar5 + 2) == &local_78) {
      if ((local_78 & 1) != 0) {
        operator_delete(local_70);
      }
    }
    else {
      if ((*(byte *)(puVar5 + 2) & 1) != 0) {
        operator_delete(*(void **)(puVar5 + 4));
      }
      *(ulong *)(puVar5 + 2) = CONCAT71(uStack_77,local_78);
      *(undefined8 *)(puVar5 + 0xc) = local_50;
      *(undefined8 *)(puVar5 + 6) = uStack_68;
      *(void **)(puVar5 + 4) = local_70;
      *(undefined8 *)(puVar5 + 10) = uStack_58;
      *(undefined8 *)(puVar5 + 8) = uStack_60;
    }
    FUN_007d51b0(puVar5 + 0x14,&DAT_0022439c,2);
    FUN_007d51b0(puVar5 + 0xe,&DAT_002243a4,1);
    lVar1 = param_1[0xd];
    if (1 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
      *(undefined4 *)(lVar1 + 0x68) = 0;
      FUN_00850d54(&local_78,&DAT_001b4d87,2);
      if ((byte *)(lVar1 + 0x70) == &local_78) {
        if ((local_78 & 1) != 0) {
          operator_delete(local_70);
        }
      }
      else {
        if ((*(byte *)(lVar1 + 0x70) & 1) != 0) {
          operator_delete(*(void **)(lVar1 + 0x78));
        }
        *(ulong *)(lVar1 + 0x70) = CONCAT71(uStack_77,local_78);
        *(undefined8 *)(lVar1 + 0x98) = local_50;
        *(undefined8 *)(lVar1 + 0x90) = uStack_58;
        *(undefined8 *)(lVar1 + 0x88) = uStack_60;
        *(undefined8 *)(lVar1 + 0x80) = uStack_68;
        *(void **)(lVar1 + 0x78) = local_70;
      }
      FUN_007d51b0(lVar1 + 0xb8,&DAT_002243a8,2);
      lVar1 = param_1[0xd];
      if (2 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
        *(undefined4 *)(lVar1 + 0xd0) = 1;
        FUN_00850d54(&local_78,&DAT_001c92a9,2);
        if ((byte *)(lVar1 + 0xd8) == &local_78) {
          if ((local_78 & 1) != 0) {
            operator_delete(local_70);
          }
        }
        else {
          if ((*(byte *)(lVar1 + 0xd8) & 1) != 0) {
            operator_delete(*(void **)(lVar1 + 0xe0));
          }
          *(ulong *)(lVar1 + 0xd8) = CONCAT71(uStack_77,local_78);
          *(undefined8 *)(lVar1 + 0x100) = local_50;
          *(undefined8 *)(lVar1 + 0xe8) = uStack_68;
          *(void **)(lVar1 + 0xe0) = local_70;
          *(undefined8 *)(lVar1 + 0xf8) = uStack_58;
          *(undefined8 *)(lVar1 + 0xf0) = uStack_60;
        }
        FUN_007d51b0(lVar1 + 0x120,&DAT_002243b0,2);
        FUN_007d51b0(lVar1 + 0x108,&DAT_002243b8,1);
        lVar1 = param_1[0xd];
        if (3 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
          *(undefined4 *)(lVar1 + 0x138) = 1;
          FUN_00850d54(&local_78,&DAT_001c92a9,2);
          if ((byte *)(lVar1 + 0x140) == &local_78) {
            if ((local_78 & 1) != 0) {
              operator_delete(local_70);
            }
          }
          else {
            if ((*(byte *)(lVar1 + 0x140) & 1) != 0) {
              operator_delete(*(void **)(lVar1 + 0x148));
            }
            *(ulong *)(lVar1 + 0x140) = CONCAT71(uStack_77,local_78);
            *(undefined8 *)(lVar1 + 0x168) = local_50;
            *(undefined8 *)(lVar1 + 0x150) = uStack_68;
            *(void **)(lVar1 + 0x148) = local_70;
            *(undefined8 *)(lVar1 + 0x160) = uStack_58;
            *(undefined8 *)(lVar1 + 0x158) = uStack_60;
          }
          FUN_007d51b0(lVar1 + 0x188,&DAT_002243bc,2);
          FUN_007d51b0(lVar1 + 0x170,&DAT_002243c4,1);
          if (*(long *)(lVar2 + 0x28) == local_48) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 008aeb98  FUN_008aeb98 =====

void FUN_008aeb98(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 008aeba4  FUN_008aeba4 =====

void FUN_008aeba4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  byte local_78;
  undefined7 uStack_77;
  void *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar4 = param_1 + 0xd;
  *puVar4 = 0;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  uVar3 = DAT_001f5728;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = 0;
  param_1[8] = 0;
  *param_1 = uVar3;
  *(undefined4 *)(param_1 + 1) = 2;
  FUN_008ad510(param_1 + 2,&DAT_002243c8,4);
  FUN_008a9840(puVar4,6);
  puVar4 = (undefined8 *)*puVar4;
  if ((undefined8 *)param_1[0xe] != puVar4) {
    *puVar4 = 0;
    FUN_00850d54(&local_78,&DAT_001a1577,4);
    if ((byte *)(puVar4 + 1) == &local_78) {
      if ((local_78 & 1) != 0) {
        operator_delete(local_70);
      }
    }
    else {
      if ((*(byte *)(puVar4 + 1) & 1) != 0) {
        operator_delete((void *)puVar4[2]);
      }
      puVar4[1] = CONCAT71(uStack_77,local_78);
      puVar4[6] = local_50;
      puVar4[3] = uStack_68;
      puVar4[2] = local_70;
      puVar4[5] = uStack_58;
      puVar4[4] = uStack_60;
    }
    FUN_007d51b0(puVar4 + 10,&DAT_002243d8,2);
    lVar1 = param_1[0xd];
    if (1 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
      *(undefined8 *)(lVar1 + 0x68) = 0;
      FUN_00850d54(&local_78,&DAT_001bdade,4);
      if ((byte *)(lVar1 + 0x70) == &local_78) {
        if ((local_78 & 1) != 0) {
          operator_delete(local_70);
        }
      }
      else {
        if ((*(byte *)(lVar1 + 0x70) & 1) != 0) {
          operator_delete(*(void **)(lVar1 + 0x78));
        }
        *(ulong *)(lVar1 + 0x70) = CONCAT71(uStack_77,local_78);
        *(undefined8 *)(lVar1 + 0x98) = local_50;
        *(undefined8 *)(lVar1 + 0x90) = uStack_58;
        *(undefined8 *)(lVar1 + 0x88) = uStack_60;
        *(undefined8 *)(lVar1 + 0x80) = uStack_68;
        *(void **)(lVar1 + 0x78) = local_70;
      }
      FUN_007d51b0(lVar1 + 0xb8,&DAT_002243e0,2);
      FUN_007d51b0(lVar1 + 0xa0,&DAT_002243e8,1);
      lVar1 = param_1[0xd];
      if (2 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
        *(undefined8 *)(lVar1 + 0xd0) = DAT_001f5170;
        FUN_00850d54(&local_78,&DAT_0019e3dc,4);
        if ((byte *)(lVar1 + 0xd8) == &local_78) {
          if ((local_78 & 1) != 0) {
            operator_delete(local_70);
          }
        }
        else {
          if ((*(byte *)(lVar1 + 0xd8) & 1) != 0) {
            operator_delete(*(void **)(lVar1 + 0xe0));
          }
          *(ulong *)(lVar1 + 0xd8) = CONCAT71(uStack_77,local_78);
          *(undefined8 *)(lVar1 + 0x100) = local_50;
          *(undefined8 *)(lVar1 + 0xe8) = uStack_68;
          *(void **)(lVar1 + 0xe0) = local_70;
          *(undefined8 *)(lVar1 + 0xf8) = uStack_58;
          *(undefined8 *)(lVar1 + 0xf0) = uStack_60;
        }
        FUN_007d51b0(lVar1 + 0x120,&DAT_002243ec,2);
        FUN_007d51b0(lVar1 + 0x108,&DAT_002243f4,1);
        uVar3 = DAT_001f58a0;
        lVar1 = param_1[0xd];
        if (3 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
          *(undefined8 *)(lVar1 + 0x138) = DAT_001f58a0;
          FUN_00850d54(&local_78,&DAT_001dcd79,4);
          if ((byte *)(lVar1 + 0x140) == &local_78) {
            if ((local_78 & 1) != 0) {
              operator_delete(local_70);
            }
          }
          else {
            if ((*(byte *)(lVar1 + 0x140) & 1) != 0) {
              operator_delete(*(void **)(lVar1 + 0x148));
            }
            *(ulong *)(lVar1 + 0x140) = CONCAT71(uStack_77,local_78);
            *(undefined8 *)(lVar1 + 0x168) = local_50;
            *(undefined8 *)(lVar1 + 0x150) = uStack_68;
            *(void **)(lVar1 + 0x148) = local_70;
            *(undefined8 *)(lVar1 + 0x160) = uStack_58;
            *(undefined8 *)(lVar1 + 0x158) = uStack_60;
          }
          FUN_007d51b0(lVar1 + 0x188,&DAT_002243f8,2);
          FUN_007d51b0(lVar1 + 0x170,&DAT_00224400,1);
          lVar1 = param_1[0xd];
          if (4 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
            *(undefined8 *)(lVar1 + 0x1a0) = uVar3;
            FUN_00850d54(&local_78,&DAT_001dcd79,4);
            if ((byte *)(lVar1 + 0x1a8) == &local_78) {
              if ((local_78 & 1) != 0) {
                operator_delete(local_70);
              }
            }
            else {
              if ((*(byte *)(lVar1 + 0x1a8) & 1) != 0) {
                operator_delete(*(void **)(lVar1 + 0x1b0));
              }
              *(ulong *)(lVar1 + 0x1a8) = CONCAT71(uStack_77,local_78);
              *(undefined8 *)(lVar1 + 0x1d0) = local_50;
              *(undefined8 *)(lVar1 + 0x1b8) = uStack_68;
              *(void **)(lVar1 + 0x1b0) = local_70;
              *(undefined8 *)(lVar1 + 0x1c8) = uStack_58;
              *(undefined8 *)(lVar1 + 0x1c0) = uStack_60;
            }
            FUN_007d51b0(lVar1 + 0x1f0,&DAT_00224404,2);
            FUN_007d51b0(lVar1 + 0x1d8,&DAT_0022440c,1);
            lVar1 = param_1[0xd];
            if (5 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
              *(undefined8 *)(lVar1 + 0x208) = 0x100000001;
              FUN_00850d54(&local_78,&DAT_001d7496,4);
              if ((byte *)(lVar1 + 0x210) == &local_78) {
                if ((local_78 & 1) != 0) {
                  operator_delete(local_70);
                }
              }
              else {
                if ((*(byte *)(lVar1 + 0x210) & 1) != 0) {
                  operator_delete(*(void **)(lVar1 + 0x218));
                }
                *(ulong *)(lVar1 + 0x210) = CONCAT71(uStack_77,local_78);
                *(undefined8 *)(lVar1 + 0x238) = local_50;
                *(undefined8 *)(lVar1 + 0x220) = uStack_68;
                *(void **)(lVar1 + 0x218) = local_70;
                *(undefined8 *)(lVar1 + 0x230) = uStack_58;
                *(undefined8 *)(lVar1 + 0x228) = uStack_60;
              }
              FUN_007d51b0(lVar1 + 600,&DAT_00224410,2);
              FUN_007d51b0(lVar1 + 0x240,&DAT_00224418,1);
              if (*(long *)(lVar2 + 0x28) == local_48) {
                return;
              }
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 008af0a8  FUN_008af0a8 =====

void FUN_008af0a8(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 008af0b4  FUN_008af0b4 =====

void FUN_008af0b4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  byte local_78;
  undefined7 uStack_77;
  void *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar4 = param_1 + 0xd;
  *puVar4 = 0;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  uVar3 = DAT_001f5b60;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = 0;
  param_1[8] = 0;
  *param_1 = uVar3;
  *(undefined4 *)(param_1 + 1) = 2;
  FUN_008ad510(param_1 + 2,&DAT_0022441c,6);
  FUN_008a9840(puVar4,10);
  puVar4 = (undefined8 *)*puVar4;
  if ((undefined8 *)param_1[0xe] != puVar4) {
    *puVar4 = 0;
    FUN_00850d54(&local_78,"SSSSSS",6);
    if ((byte *)(puVar4 + 1) == &local_78) {
      if ((local_78 & 1) != 0) {
        operator_delete(local_70);
      }
    }
    else {
      if ((*(byte *)(puVar4 + 1) & 1) != 0) {
        operator_delete((void *)puVar4[2]);
      }
      puVar4[1] = CONCAT71(uStack_77,local_78);
      puVar4[6] = local_50;
      puVar4[3] = uStack_68;
      puVar4[2] = local_70;
      puVar4[5] = uStack_58;
      puVar4[4] = uStack_60;
    }
    FUN_007d51b0(puVar4 + 10,&DAT_00224434,2);
    lVar1 = param_1[0xd];
    if (1 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
      *(undefined8 *)(lVar1 + 0x68) = 0;
      FUN_00850d54(&local_78,"SSS---",6);
      if ((byte *)(lVar1 + 0x70) == &local_78) {
        if ((local_78 & 1) != 0) {
          operator_delete(local_70);
        }
      }
      else {
        if ((*(byte *)(lVar1 + 0x70) & 1) != 0) {
          operator_delete(*(void **)(lVar1 + 0x78));
        }
        *(ulong *)(lVar1 + 0x70) = CONCAT71(uStack_77,local_78);
        *(undefined8 *)(lVar1 + 0x98) = local_50;
        *(undefined8 *)(lVar1 + 0x90) = uStack_58;
        *(undefined8 *)(lVar1 + 0x88) = uStack_60;
        *(undefined8 *)(lVar1 + 0x80) = uStack_68;
        *(void **)(lVar1 + 0x78) = local_70;
      }
      FUN_007d51b0(lVar1 + 0xb8,&DAT_0022443c,2);
      FUN_007d51b0(lVar1 + 0xa0,&DAT_00224444,1);
      lVar1 = param_1[0xd];
      if (2 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
        *(undefined8 *)(lVar1 + 0xd0) = DAT_001f5170;
        FUN_00850d54(&local_78,"-DS---",6);
        if ((byte *)(lVar1 + 0xd8) == &local_78) {
          if ((local_78 & 1) != 0) {
            operator_delete(local_70);
          }
        }
        else {
          if ((*(byte *)(lVar1 + 0xd8) & 1) != 0) {
            operator_delete(*(void **)(lVar1 + 0xe0));
          }
          *(ulong *)(lVar1 + 0xd8) = CONCAT71(uStack_77,local_78);
          *(undefined8 *)(lVar1 + 0x100) = local_50;
          *(undefined8 *)(lVar1 + 0xe8) = uStack_68;
          *(void **)(lVar1 + 0xe0) = local_70;
          *(undefined8 *)(lVar1 + 0xf8) = uStack_58;
          *(undefined8 *)(lVar1 + 0xf0) = uStack_60;
        }
        FUN_007d51b0(lVar1 + 0x120,&DAT_00224448,2);
        FUN_007d51b0(lVar1 + 0x108,&DAT_00224450,1);
        uVar3 = DAT_001f5200;
        lVar1 = param_1[0xd];
        if (3 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
          *(undefined8 *)(lVar1 + 0x138) = DAT_001f5200;
          FUN_00850d54(&local_78,"--D---",6);
          if ((byte *)(lVar1 + 0x140) == &local_78) {
            if ((local_78 & 1) != 0) {
              operator_delete(local_70);
            }
          }
          else {
            if ((*(byte *)(lVar1 + 0x140) & 1) != 0) {
              operator_delete(*(void **)(lVar1 + 0x148));
            }
            *(ulong *)(lVar1 + 0x140) = CONCAT71(uStack_77,local_78);
            *(undefined8 *)(lVar1 + 0x168) = local_50;
            *(undefined8 *)(lVar1 + 0x150) = uStack_68;
            *(void **)(lVar1 + 0x148) = local_70;
            *(undefined8 *)(lVar1 + 0x160) = uStack_58;
            *(undefined8 *)(lVar1 + 0x158) = uStack_60;
          }
          FUN_007d51b0(lVar1 + 0x188,&DAT_00224454,2);
          FUN_007d51b0(lVar1 + 0x170,&DAT_0022445c,1);
          lVar1 = param_1[0xd];
          if (4 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
            *(undefined8 *)(lVar1 + 0x1a0) = uVar3;
            FUN_00850d54(&local_78,"--D---",6);
            if ((byte *)(lVar1 + 0x1a8) == &local_78) {
              if ((local_78 & 1) != 0) {
                operator_delete(local_70);
              }
            }
            else {
              if ((*(byte *)(lVar1 + 0x1a8) & 1) != 0) {
                operator_delete(*(void **)(lVar1 + 0x1b0));
              }
              *(ulong *)(lVar1 + 0x1a8) = CONCAT71(uStack_77,local_78);
              *(undefined8 *)(lVar1 + 0x1d0) = local_50;
              *(undefined8 *)(lVar1 + 0x1b8) = uStack_68;
              *(void **)(lVar1 + 0x1b0) = local_70;
              *(undefined8 *)(lVar1 + 0x1c8) = uStack_58;
              *(undefined8 *)(lVar1 + 0x1c0) = uStack_60;
            }
            FUN_007d51b0(lVar1 + 0x1f0,&DAT_00224460,2);
            FUN_007d51b0(lVar1 + 0x1d8,&DAT_00224468,1);
            uVar3 = DAT_001f58a0;
            lVar1 = param_1[0xd];
            if (5 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
              *(undefined8 *)(lVar1 + 0x208) = DAT_001f58a0;
              FUN_00850d54(&local_78,"---SSS",6);
              if ((byte *)(lVar1 + 0x210) == &local_78) {
                if ((local_78 & 1) != 0) {
                  operator_delete(local_70);
                }
              }
              else {
                if ((*(byte *)(lVar1 + 0x210) & 1) != 0) {
                  operator_delete(*(void **)(lVar1 + 0x218));
                }
                *(ulong *)(lVar1 + 0x210) = CONCAT71(uStack_77,local_78);
                *(undefined8 *)(lVar1 + 0x238) = local_50;
                *(undefined8 *)(lVar1 + 0x220) = uStack_68;
                *(void **)(lVar1 + 0x218) = local_70;
                *(undefined8 *)(lVar1 + 0x230) = uStack_58;
                *(undefined8 *)(lVar1 + 0x228) = uStack_60;
              }
              FUN_007d51b0(lVar1 + 600,&DAT_0022446c,2);
              FUN_007d51b0(lVar1 + 0x240,&DAT_00224474,1);
              lVar1 = param_1[0xd];
              if (6 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                *(undefined8 *)(lVar1 + 0x270) = uVar3;
                FUN_00850d54(&local_78,"---SSS",6);
                if ((byte *)(lVar1 + 0x278) == &local_78) {
                  if ((local_78 & 1) != 0) {
                    operator_delete(local_70);
                  }
                }
                else {
                  if ((*(byte *)(lVar1 + 0x278) & 1) != 0) {
                    operator_delete(*(void **)(lVar1 + 0x280));
                  }
                  *(ulong *)(lVar1 + 0x278) = CONCAT71(uStack_77,local_78);
                  *(undefined8 *)(lVar1 + 0x2a0) = local_50;
                  *(undefined8 *)(lVar1 + 0x288) = uStack_68;
                  *(void **)(lVar1 + 0x280) = local_70;
                  *(undefined8 *)(lVar1 + 0x298) = uStack_58;
                  *(undefined8 *)(lVar1 + 0x290) = uStack_60;
                }
                FUN_007d51b0(lVar1 + 0x2c0,&DAT_00224478,2);
                FUN_007d51b0(lVar1 + 0x2a8,&DAT_00224480,1);
                lVar1 = param_1[0xd];
                if (7 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                  *(undefined8 *)(lVar1 + 0x2d8) = 0x100000001;
                  FUN_00850d54(&local_78,"----DS",6);
                  if ((byte *)(lVar1 + 0x2e0) == &local_78) {
                    if ((local_78 & 1) != 0) {
                      operator_delete(local_70);
                    }
                  }
                  else {
                    if ((*(byte *)(lVar1 + 0x2e0) & 1) != 0) {
                      operator_delete(*(void **)(lVar1 + 0x2e8));
                    }
                    *(ulong *)(lVar1 + 0x2e0) = CONCAT71(uStack_77,local_78);
                    *(undefined8 *)(lVar1 + 0x308) = local_50;
                    *(undefined8 *)(lVar1 + 0x2f0) = uStack_68;
                    *(void **)(lVar1 + 0x2e8) = local_70;
                    *(undefined8 *)(lVar1 + 0x300) = uStack_58;
                    *(undefined8 *)(lVar1 + 0x2f8) = uStack_60;
                  }
                  FUN_007d51b0(lVar1 + 0x328,&DAT_00224484,2);
                  FUN_007d51b0(lVar1 + 0x310,&DAT_0022448c,1);
                  uVar3 = DAT_001f50d0;
                  lVar1 = param_1[0xd];
                  if (8 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                    *(undefined8 *)(lVar1 + 0x340) = DAT_001f50d0;
                    FUN_00850d54(&local_78,"-----D",6);
                    if ((byte *)(lVar1 + 0x348) == &local_78) {
                      if ((local_78 & 1) != 0) {
                        operator_delete(local_70);
                      }
                    }
                    else {
                      if ((*(byte *)(lVar1 + 0x348) & 1) != 0) {
                        operator_delete(*(void **)(lVar1 + 0x350));
                      }
                      *(ulong *)(lVar1 + 0x348) = CONCAT71(uStack_77,local_78);
                      *(undefined8 *)(lVar1 + 0x370) = local_50;
                      *(undefined8 *)(lVar1 + 0x358) = uStack_68;
                      *(void **)(lVar1 + 0x350) = local_70;
                      *(undefined8 *)(lVar1 + 0x368) = uStack_58;
                      *(undefined8 *)(lVar1 + 0x360) = uStack_60;
                    }
                    FUN_007d51b0(lVar1 + 0x390,&DAT_00224490,2);
                    FUN_007d51b0(lVar1 + 0x378,&DAT_00224498,1);
                    lVar1 = param_1[0xd];
                    if (9 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                      *(undefined8 *)(lVar1 + 0x3a8) = uVar3;
                      FUN_00850d54(&local_78,"-----D",6);
                      if ((byte *)(lVar1 + 0x3b0) == &local_78) {
                        if ((local_78 & 1) != 0) {
                          operator_delete(local_70);
                        }
                      }
                      else {
                        if ((*(byte *)(lVar1 + 0x3b0) & 1) != 0) {
                          operator_delete(*(void **)(lVar1 + 0x3b8));
                        }
                        *(ulong *)(lVar1 + 0x3b0) = CONCAT71(uStack_77,local_78);
                        *(undefined8 *)(lVar1 + 0x3d8) = local_50;
                        *(undefined8 *)(lVar1 + 0x3c0) = uStack_68;
                        *(void **)(lVar1 + 0x3b8) = local_70;
                        *(undefined8 *)(lVar1 + 0x3d0) = uStack_58;
                        *(undefined8 *)(lVar1 + 0x3c8) = uStack_60;
                      }
                      FUN_007d51b0(lVar1 + 0x3f8,&DAT_0022449c,2);
                      FUN_007d51b0(lVar1 + 0x3e0,&DAT_002244a4,1);
                      if (*(long *)(lVar2 + 0x28) == local_48) {
                        return;
                      }
                    /* WARNING: Subroutine does not return */
                      __stack_chk_fail();
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
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 008af890  FUN_008af890 =====

void FUN_008af890(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 008af89c  FUN_008af89c =====

void FUN_008af89c(undefined8 *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  byte local_78;
  undefined7 uStack_77;
  void *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar4 = param_1 + 0xd;
  *plVar4 = 0;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  uVar3 = DAT_001f55d0;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = 0;
  param_1[8] = 0;
  *param_1 = uVar3;
  *(undefined4 *)(param_1 + 1) = 3;
  FUN_008ad510(param_1 + 2,&DAT_002244a8,3);
  FUN_008a9840(plVar4,6);
  lVar5 = *plVar4;
  if (1 < (ulong)((param_1[0xe] - lVar5 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
    *(undefined4 *)(lVar5 + 0x68) = 0;
    FUN_00850d54(&local_78,&DAT_001e5a40,3);
    if ((byte *)(lVar5 + 0x70) == &local_78) {
      if ((local_78 & 1) != 0) {
        operator_delete(local_70);
      }
    }
    else {
      if ((*(byte *)(lVar5 + 0x70) & 1) != 0) {
        operator_delete(*(void **)(lVar5 + 0x78));
      }
      *(ulong *)(lVar5 + 0x70) = CONCAT71(uStack_77,local_78);
      *(undefined8 *)(lVar5 + 0x98) = local_50;
      *(undefined8 *)(lVar5 + 0x90) = uStack_58;
      *(undefined8 *)(lVar5 + 0x88) = uStack_60;
      *(undefined8 *)(lVar5 + 0x80) = uStack_68;
      *(void **)(lVar5 + 0x78) = local_70;
    }
    FUN_007d51b0(lVar5 + 0xb8,&DAT_002244b4,3);
    lVar5 = param_1[0xd];
    if (3 < (ulong)((param_1[0xe] - lVar5 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
      *(undefined4 *)(lVar5 + 0x138) = 1;
      FUN_00850d54(&local_78,&DAT_001e5a44,3);
      if ((byte *)(lVar5 + 0x140) == &local_78) {
        if ((local_78 & 1) != 0) {
          operator_delete(local_70);
        }
      }
      else {
        if ((*(byte *)(lVar5 + 0x140) & 1) != 0) {
          operator_delete(*(void **)(lVar5 + 0x148));
        }
        *(ulong *)(lVar5 + 0x140) = CONCAT71(uStack_77,local_78);
        *(undefined8 *)(lVar5 + 0x168) = local_50;
        *(undefined8 *)(lVar5 + 0x150) = uStack_68;
        *(void **)(lVar5 + 0x148) = local_70;
        *(undefined8 *)(lVar5 + 0x160) = uStack_58;
        *(undefined8 *)(lVar5 + 0x158) = uStack_60;
      }
      FUN_007d51b0(lVar5 + 0x188,&DAT_002244c0,3);
      FUN_007d51b0(lVar5 + 0x170,&DAT_002244cc,1);
      lVar5 = param_1[0xd];
      if (5 < (ulong)((param_1[0xe] - lVar5 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
        *(undefined4 *)(lVar5 + 0x208) = 2;
        FUN_00850d54(&local_78,&DAT_001b7c97,3);
        if ((byte *)(lVar5 + 0x210) == &local_78) {
          if ((local_78 & 1) != 0) {
            operator_delete(local_70);
          }
        }
        else {
          if ((*(byte *)(lVar5 + 0x210) & 1) != 0) {
            operator_delete(*(void **)(lVar5 + 0x218));
          }
          *(ulong *)(lVar5 + 0x210) = CONCAT71(uStack_77,local_78);
          *(undefined8 *)(lVar5 + 0x238) = local_50;
          *(undefined8 *)(lVar5 + 0x220) = uStack_68;
          *(void **)(lVar5 + 0x218) = local_70;
          *(undefined8 *)(lVar5 + 0x230) = uStack_58;
          *(undefined8 *)(lVar5 + 0x228) = uStack_60;
        }
        FUN_007d51b0(lVar5 + 600,&DAT_002244d0,3);
        FUN_007d51b0(lVar5 + 0x240,&DAT_002244dc,1);
        puVar1 = (undefined4 *)param_1[0xd];
        if ((undefined4 *)param_1[0xe] != puVar1) {
          *puVar1 = 0;
          FUN_00850d54(&local_78,&DAT_001a158a,3);
          if ((byte *)(puVar1 + 2) == &local_78) {
            if ((local_78 & 1) != 0) {
              operator_delete(local_70);
            }
          }
          else {
            if ((*(byte *)(puVar1 + 2) & 1) != 0) {
              operator_delete(*(void **)(puVar1 + 4));
            }
            *(ulong *)(puVar1 + 2) = CONCAT71(uStack_77,local_78);
            *(undefined8 *)(puVar1 + 0xc) = local_50;
            *(undefined8 *)(puVar1 + 6) = uStack_68;
            *(void **)(puVar1 + 4) = local_70;
            *(undefined8 *)(puVar1 + 10) = uStack_58;
            *(undefined8 *)(puVar1 + 8) = uStack_60;
          }
          FUN_007d51b0(puVar1 + 0x14,&DAT_002244e0,3);
          FUN_007d51b0(puVar1 + 0xe,&DAT_002244ec,1);
          lVar5 = param_1[0xd];
          if (2 < (ulong)((param_1[0xe] - lVar5 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
            *(undefined4 *)(lVar5 + 0xd0) = 1;
            FUN_00850d54(&local_78,&DAT_0019e3e1,3);
            if ((byte *)(lVar5 + 0xd8) == &local_78) {
              if ((local_78 & 1) != 0) {
                operator_delete(local_70);
              }
            }
            else {
              if ((*(byte *)(lVar5 + 0xd8) & 1) != 0) {
                operator_delete(*(void **)(lVar5 + 0xe0));
              }
              *(ulong *)(lVar5 + 0xd8) = CONCAT71(uStack_77,local_78);
              *(undefined8 *)(lVar5 + 0x100) = local_50;
              *(undefined8 *)(lVar5 + 0xe8) = uStack_68;
              *(void **)(lVar5 + 0xe0) = local_70;
              *(undefined8 *)(lVar5 + 0xf8) = uStack_58;
              *(undefined8 *)(lVar5 + 0xf0) = uStack_60;
            }
            FUN_007d51b0(lVar5 + 0x120,&DAT_002244f0,3);
            FUN_007d51b0(lVar5 + 0x108,&DAT_002244fc,1);
            lVar5 = param_1[0xd];
            if (4 < (ulong)((param_1[0xe] - lVar5 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
              *(undefined4 *)(lVar5 + 0x1a0) = 2;
              FUN_00850d54(&local_78,&DAT_001b7c97,3);
              if ((byte *)(lVar5 + 0x1a8) == &local_78) {
                if ((local_78 & 1) != 0) {
                  operator_delete(local_70);
                }
              }
              else {
                if ((*(byte *)(lVar5 + 0x1a8) & 1) != 0) {
                  operator_delete(*(void **)(lVar5 + 0x1b0));
                }
                *(ulong *)(lVar5 + 0x1a8) = CONCAT71(uStack_77,local_78);
                *(undefined8 *)(lVar5 + 0x1d0) = local_50;
                *(undefined8 *)(lVar5 + 0x1b8) = uStack_68;
                *(void **)(lVar5 + 0x1b0) = local_70;
                *(undefined8 *)(lVar5 + 0x1c8) = uStack_58;
                *(undefined8 *)(lVar5 + 0x1c0) = uStack_60;
              }
              FUN_007d51b0(lVar5 + 0x1f0,&DAT_00224500,3);
              FUN_007d51b0(lVar5 + 0x1d8,&DAT_0022450c,1);
              if (*(long *)(lVar2 + 0x28) == local_48) {
                return;
              }
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 008afd94  FUN_008afd94 =====

void FUN_008afd94(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 008afda0  FUN_008afda0 =====

void FUN_008afda0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  byte local_88;
  undefined7 uStack_87;
  void *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar5 = param_1 + 0xd;
  *plVar5 = 0;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  uVar4 = DAT_001f5b60;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = 0;
  param_1[8] = 0;
  *param_1 = uVar4;
  *(undefined4 *)(param_1 + 1) = 3;
  FUN_008ad510(param_1 + 2,&DAT_00224510,6);
  FUN_008a9840(plVar5,9);
  lVar6 = *plVar5;
  if (1 < (ulong)((param_1[0xe] - lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
    *(undefined8 *)(lVar6 + 0x68) = 0;
    FUN_00850d54(&local_88,"SSSSSS",6);
    if ((byte *)(lVar6 + 0x70) == &local_88) {
      if ((local_88 & 1) != 0) {
        operator_delete(local_80);
      }
    }
    else {
      if ((*(byte *)(lVar6 + 0x70) & 1) != 0) {
        operator_delete(*(void **)(lVar6 + 0x78));
      }
      *(ulong *)(lVar6 + 0x70) = CONCAT71(uStack_87,local_88);
      *(undefined8 *)(lVar6 + 0x98) = local_60;
      *(undefined8 *)(lVar6 + 0x90) = uStack_68;
      *(undefined8 *)(lVar6 + 0x88) = uStack_70;
      *(undefined8 *)(lVar6 + 0x80) = uStack_78;
      *(void **)(lVar6 + 0x78) = local_80;
    }
    FUN_007d51b0(lVar6 + 0xb8,&DAT_00224528,3);
    uVar4 = DAT_001f58a0;
    lVar6 = param_1[0xd];
    if (4 < (ulong)((param_1[0xe] - lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
      *(undefined8 *)(lVar6 + 0x1a0) = DAT_001f58a0;
      FUN_00850d54(&local_88,"--SSSS",6);
      if ((byte *)(lVar6 + 0x1a8) == &local_88) {
        if ((local_88 & 1) != 0) {
          operator_delete(local_80);
        }
      }
      else {
        if ((*(byte *)(lVar6 + 0x1a8) & 1) != 0) {
          operator_delete(*(void **)(lVar6 + 0x1b0));
        }
        *(ulong *)(lVar6 + 0x1a8) = CONCAT71(uStack_87,local_88);
        *(undefined8 *)(lVar6 + 0x1d0) = local_60;
        *(undefined8 *)(lVar6 + 0x1b8) = uStack_78;
        *(void **)(lVar6 + 0x1b0) = local_80;
        *(undefined8 *)(lVar6 + 0x1c8) = uStack_68;
        *(undefined8 *)(lVar6 + 0x1c0) = uStack_70;
      }
      FUN_007d51b0(lVar6 + 0x1f0,&DAT_00224534,3);
      FUN_007d51b0(lVar6 + 0x1d8,&DAT_00224540,1);
      uVar3 = DAT_001f5360;
      lVar6 = param_1[0xd];
      if (7 < (ulong)((param_1[0xe] - lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
        *(undefined8 *)(lVar6 + 0x2d8) = DAT_001f5360;
        FUN_00850d54(&local_88,"----SS",6);
        if ((byte *)(lVar6 + 0x2e0) == &local_88) {
          if ((local_88 & 1) != 0) {
            operator_delete(local_80);
          }
        }
        else {
          if ((*(byte *)(lVar6 + 0x2e0) & 1) != 0) {
            operator_delete(*(void **)(lVar6 + 0x2e8));
          }
          *(ulong *)(lVar6 + 0x2e0) = CONCAT71(uStack_87,local_88);
          *(undefined8 *)(lVar6 + 0x308) = local_60;
          *(undefined8 *)(lVar6 + 0x2f0) = uStack_78;
          *(void **)(lVar6 + 0x2e8) = local_80;
          *(undefined8 *)(lVar6 + 0x300) = uStack_68;
          *(undefined8 *)(lVar6 + 0x2f8) = uStack_70;
        }
        FUN_007d51b0(lVar6 + 0x328,&DAT_00224544,3);
        FUN_007d51b0(lVar6 + 0x310,&DAT_00224550,1);
        lVar6 = param_1[0xd];
        if (2 < (ulong)((param_1[0xe] - lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
          *(undefined8 *)(lVar6 + 0xd0) = DAT_001f5170;
          FUN_00850d54(&local_88,"-D----",6);
          if ((byte *)(lVar6 + 0xd8) == &local_88) {
            if ((local_88 & 1) != 0) {
              operator_delete(local_80);
            }
          }
          else {
            if ((*(byte *)(lVar6 + 0xd8) & 1) != 0) {
              operator_delete(*(void **)(lVar6 + 0xe0));
            }
            *(ulong *)(lVar6 + 0xd8) = CONCAT71(uStack_87,local_88);
            *(undefined8 *)(lVar6 + 0x100) = local_60;
            *(undefined8 *)(lVar6 + 0xe8) = uStack_78;
            *(void **)(lVar6 + 0xe0) = local_80;
            *(undefined8 *)(lVar6 + 0xf8) = uStack_68;
            *(undefined8 *)(lVar6 + 0xf0) = uStack_70;
          }
          FUN_007d51b0(lVar6 + 0x120,&DAT_00224554,3);
          FUN_007d51b0(lVar6 + 0x108,&DAT_00224560,1);
          lVar6 = param_1[0xd];
          if (5 < (ulong)((param_1[0xe] - lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
            *(undefined8 *)(lVar6 + 0x208) = 0x100000001;
            FUN_00850d54(&local_88,"---D--",6);
            if ((byte *)(lVar6 + 0x210) == &local_88) {
              if ((local_88 & 1) != 0) {
                operator_delete(local_80);
              }
            }
            else {
              if ((*(byte *)(lVar6 + 0x210) & 1) != 0) {
                operator_delete(*(void **)(lVar6 + 0x218));
              }
              *(ulong *)(lVar6 + 0x210) = CONCAT71(uStack_87,local_88);
              *(undefined8 *)(lVar6 + 0x238) = local_60;
              *(undefined8 *)(lVar6 + 0x220) = uStack_78;
              *(void **)(lVar6 + 0x218) = local_80;
              *(undefined8 *)(lVar6 + 0x230) = uStack_68;
              *(undefined8 *)(lVar6 + 0x228) = uStack_70;
            }
            FUN_007d51b0(lVar6 + 600,&DAT_00224564,3);
            FUN_007d51b0(lVar6 + 0x240,&DAT_00224570,1);
            lVar6 = param_1[0xd];
            if (8 < (ulong)((param_1[0xe] - lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
              *(undefined8 *)(lVar6 + 0x340) = DAT_001f54e8;
              FUN_00850d54(&local_88,"-----D",6);
              if ((byte *)(lVar6 + 0x348) == &local_88) {
                if ((local_88 & 1) != 0) {
                  operator_delete(local_80);
                }
              }
              else {
                if ((*(byte *)(lVar6 + 0x348) & 1) != 0) {
                  operator_delete(*(void **)(lVar6 + 0x350));
                }
                *(ulong *)(lVar6 + 0x348) = CONCAT71(uStack_87,local_88);
                *(undefined8 *)(lVar6 + 0x370) = local_60;
                *(undefined8 *)(lVar6 + 0x358) = uStack_78;
                *(void **)(lVar6 + 0x350) = local_80;
                *(undefined8 *)(lVar6 + 0x368) = uStack_68;
                *(undefined8 *)(lVar6 + 0x360) = uStack_70;
              }
              FUN_007d51b0(lVar6 + 0x390,&DAT_00224574,3);
              FUN_007d51b0(lVar6 + 0x378,&DAT_00224580,1);
              puVar1 = (undefined8 *)param_1[0xd];
              if ((undefined8 *)param_1[0xe] != puVar1) {
                *puVar1 = 0;
                FUN_00850d54(&local_88,"SS----",6);
                if ((byte *)(puVar1 + 1) == &local_88) {
                  if ((local_88 & 1) != 0) {
                    operator_delete(local_80);
                  }
                }
                else {
                  if ((*(byte *)(puVar1 + 1) & 1) != 0) {
                    operator_delete((void *)puVar1[2]);
                  }
                  puVar1[1] = CONCAT71(uStack_87,local_88);
                  puVar1[6] = local_60;
                  puVar1[3] = uStack_78;
                  puVar1[2] = local_80;
                  puVar1[5] = uStack_68;
                  puVar1[4] = uStack_70;
                }
                FUN_007d51b0(puVar1 + 10,&DAT_00224584,3);
                FUN_007d51b0(puVar1 + 7,&DAT_00224590,1);
                lVar6 = param_1[0xd];
                if (3 < (ulong)((param_1[0xe] - lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                  *(undefined8 *)(lVar6 + 0x138) = uVar4;
                  FUN_00850d54(&local_88,"--SS--",6);
                  if ((byte *)(lVar6 + 0x140) == &local_88) {
                    if ((local_88 & 1) != 0) {
                      operator_delete(local_80);
                    }
                  }
                  else {
                    if ((*(byte *)(lVar6 + 0x140) & 1) != 0) {
                      operator_delete(*(void **)(lVar6 + 0x148));
                    }
                    *(ulong *)(lVar6 + 0x140) = CONCAT71(uStack_87,local_88);
                    *(undefined8 *)(lVar6 + 0x168) = local_60;
                    *(undefined8 *)(lVar6 + 0x150) = uStack_78;
                    *(void **)(lVar6 + 0x148) = local_80;
                    *(undefined8 *)(lVar6 + 0x160) = uStack_68;
                    *(undefined8 *)(lVar6 + 0x158) = uStack_70;
                  }
                  FUN_007d51b0(lVar6 + 0x188,&DAT_00224594,3);
                  FUN_007d51b0(lVar6 + 0x170,&DAT_002245a0,1);
                  lVar6 = param_1[0xd];
                  if (6 < (ulong)((param_1[0xe] - lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                    *(undefined8 *)(lVar6 + 0x270) = uVar3;
                    FUN_00850d54(&local_88,"----SS",6);
                    if ((byte *)(lVar6 + 0x278) == &local_88) {
                      if ((local_88 & 1) != 0) {
                        operator_delete(local_80);
                      }
                    }
                    else {
                      if ((*(byte *)(lVar6 + 0x278) & 1) != 0) {
                        operator_delete(*(void **)(lVar6 + 0x280));
                      }
                      *(ulong *)(lVar6 + 0x278) = CONCAT71(uStack_87,local_88);
                      *(undefined8 *)(lVar6 + 0x2a0) = local_60;
                      *(undefined8 *)(lVar6 + 0x288) = uStack_78;
                      *(void **)(lVar6 + 0x280) = local_80;
                      *(undefined8 *)(lVar6 + 0x298) = uStack_68;
                      *(undefined8 *)(lVar6 + 0x290) = uStack_70;
                    }
                    FUN_007d51b0(lVar6 + 0x2c0,&DAT_002245a4,3);
                    FUN_007d51b0(lVar6 + 0x2a8,&DAT_002245b0,1);
                    if (*(long *)(lVar2 + 0x28) == local_58) {
                      return;
                    }
                    /* WARNING: Subroutine does not return */
                    __stack_chk_fail();
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
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 008b04c8  FUN_008b04c8 =====

void FUN_008b04c8(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 008b04d4  FUN_008b04d4 =====

void FUN_008b04d4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  byte local_98;
  undefined7 uStack_97;
  void *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar7 = param_1 + 0xd;
  *puVar7 = 0;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  uVar6 = DAT_001f5c90;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = 0;
  param_1[8] = 0;
  *param_1 = uVar6;
  *(undefined4 *)(param_1 + 1) = 3;
  FUN_008ad510(param_1 + 2,&DAT_002245b4,9);
  FUN_008a9840(puVar7,0xf);
  puVar7 = (undefined8 *)*puVar7;
  if ((undefined8 *)param_1[0xe] != puVar7) {
    *puVar7 = 0;
    FUN_00850d54(&local_98,"SSSSSSSSS",9);
    if ((byte *)(puVar7 + 1) == &local_98) {
      if ((local_98 & 1) != 0) {
        operator_delete(local_90);
      }
    }
    else {
      if ((*(byte *)(puVar7 + 1) & 1) != 0) {
        operator_delete((void *)puVar7[2]);
      }
      puVar7[1] = CONCAT71(uStack_97,local_98);
      puVar7[6] = local_70;
      puVar7[3] = uStack_88;
      puVar7[2] = local_90;
      puVar7[5] = uStack_78;
      puVar7[4] = uStack_80;
    }
    FUN_007d51b0(puVar7 + 10,&DAT_002245d8,3);
    uVar6 = DAT_001f58a0;
    lVar1 = param_1[0xd];
    if (5 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
      *(undefined8 *)(lVar1 + 0x208) = DAT_001f58a0;
      FUN_00850d54(&local_98,"---SSSSSS",9);
      if ((byte *)(lVar1 + 0x210) == &local_98) {
        if ((local_98 & 1) != 0) {
          operator_delete(local_90);
        }
      }
      else {
        if ((*(byte *)(lVar1 + 0x210) & 1) != 0) {
          operator_delete(*(void **)(lVar1 + 0x218));
        }
        *(ulong *)(lVar1 + 0x210) = CONCAT71(uStack_97,local_98);
        *(undefined8 *)(lVar1 + 0x238) = local_70;
        *(undefined8 *)(lVar1 + 0x220) = uStack_88;
        *(void **)(lVar1 + 0x218) = local_90;
        *(undefined8 *)(lVar1 + 0x230) = uStack_78;
        *(undefined8 *)(lVar1 + 0x228) = uStack_80;
      }
      FUN_007d51b0(lVar1 + 600,&DAT_002245e4,3);
      FUN_007d51b0(lVar1 + 0x240,&DAT_002245f0,1);
      uVar5 = DAT_001f5360;
      lVar1 = param_1[0xd];
      if (10 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
        *(undefined8 *)(lVar1 + 0x410) = DAT_001f5360;
        FUN_00850d54(&local_98,"------SSS",9);
        if ((byte *)(lVar1 + 0x418) == &local_98) {
          if ((local_98 & 1) != 0) {
            operator_delete(local_90);
          }
        }
        else {
          if ((*(byte *)(lVar1 + 0x418) & 1) != 0) {
            operator_delete(*(void **)(lVar1 + 0x420));
          }
          *(ulong *)(lVar1 + 0x418) = CONCAT71(uStack_97,local_98);
          *(undefined8 *)(lVar1 + 0x440) = local_70;
          *(undefined8 *)(lVar1 + 0x438) = uStack_78;
          *(undefined8 *)(lVar1 + 0x430) = uStack_80;
          *(undefined8 *)(lVar1 + 0x428) = uStack_88;
          *(void **)(lVar1 + 0x420) = local_90;
        }
        FUN_007d51b0(lVar1 + 0x460,&DAT_002245f4,3);
        FUN_007d51b0(lVar1 + 0x448,&DAT_00224600,1);
        uVar4 = DAT_001f5200;
        lVar1 = param_1[0xd];
        if (3 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
          *(undefined8 *)(lVar1 + 0x138) = DAT_001f5200;
          FUN_00850d54(&local_98,"--D------",9);
          if ((byte *)(lVar1 + 0x140) == &local_98) {
            if ((local_98 & 1) != 0) {
              operator_delete(local_90);
            }
          }
          else {
            if ((*(byte *)(lVar1 + 0x140) & 1) != 0) {
              operator_delete(*(void **)(lVar1 + 0x148));
            }
            *(ulong *)(lVar1 + 0x140) = CONCAT71(uStack_97,local_98);
            *(undefined8 *)(lVar1 + 0x168) = local_70;
            *(undefined8 *)(lVar1 + 0x150) = uStack_88;
            *(void **)(lVar1 + 0x148) = local_90;
            *(undefined8 *)(lVar1 + 0x160) = uStack_78;
            *(undefined8 *)(lVar1 + 0x158) = uStack_80;
          }
          FUN_007d51b0(lVar1 + 0x188,&DAT_00224604,3);
          FUN_007d51b0(lVar1 + 0x170,&DAT_00224610,1);
          uVar3 = DAT_001f50d0;
          lVar1 = param_1[0xd];
          if (8 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
            *(undefined8 *)(lVar1 + 0x340) = DAT_001f50d0;
            FUN_00850d54(&local_98,"-----D---",9);
            if ((byte *)(lVar1 + 0x348) == &local_98) {
              if ((local_98 & 1) != 0) {
                operator_delete(local_90);
              }
            }
            else {
              if ((*(byte *)(lVar1 + 0x348) & 1) != 0) {
                operator_delete(*(void **)(lVar1 + 0x350));
              }
              *(ulong *)(lVar1 + 0x348) = CONCAT71(uStack_97,local_98);
              *(undefined8 *)(lVar1 + 0x370) = local_70;
              *(undefined8 *)(lVar1 + 0x358) = uStack_88;
              *(void **)(lVar1 + 0x350) = local_90;
              *(undefined8 *)(lVar1 + 0x368) = uStack_78;
              *(undefined8 *)(lVar1 + 0x360) = uStack_80;
            }
            FUN_007d51b0(lVar1 + 0x390,&DAT_00224614,3);
            FUN_007d51b0(lVar1 + 0x378,&DAT_00224620,1);
            lVar1 = param_1[0xd];
            if (0xd < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
              *(undefined8 *)(lVar1 + 0x548) = 0x200000002;
              FUN_00850d54(&local_98,"--------D",9);
              if ((byte *)(lVar1 + 0x550) == &local_98) {
                if ((local_98 & 1) != 0) {
                  operator_delete(local_90);
                }
              }
              else {
                if ((*(byte *)(lVar1 + 0x550) & 1) != 0) {
                  operator_delete(*(void **)(lVar1 + 0x558));
                }
                *(ulong *)(lVar1 + 0x550) = CONCAT71(uStack_97,local_98);
                *(undefined8 *)(lVar1 + 0x578) = local_70;
                *(undefined8 *)(lVar1 + 0x560) = uStack_88;
                *(void **)(lVar1 + 0x558) = local_90;
                *(undefined8 *)(lVar1 + 0x570) = uStack_78;
                *(undefined8 *)(lVar1 + 0x568) = uStack_80;
              }
              FUN_007d51b0(lVar1 + 0x598,&DAT_00224624,3);
              FUN_007d51b0(lVar1 + 0x580,&DAT_00224630,1);
              lVar1 = param_1[0xd];
              if (2 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                *(undefined8 *)(lVar1 + 0xd0) = DAT_001f5170;
                FUN_00850d54(&local_98,"-DS------",9);
                if ((byte *)(lVar1 + 0xd8) == &local_98) {
                  if ((local_98 & 1) != 0) {
                    operator_delete(local_90);
                  }
                }
                else {
                  if ((*(byte *)(lVar1 + 0xd8) & 1) != 0) {
                    operator_delete(*(void **)(lVar1 + 0xe0));
                  }
                  *(ulong *)(lVar1 + 0xd8) = CONCAT71(uStack_97,local_98);
                  *(undefined8 *)(lVar1 + 0x100) = local_70;
                  *(undefined8 *)(lVar1 + 0xe8) = uStack_88;
                  *(void **)(lVar1 + 0xe0) = local_90;
                  *(undefined8 *)(lVar1 + 0xf8) = uStack_78;
                  *(undefined8 *)(lVar1 + 0xf0) = uStack_80;
                }
                FUN_007d51b0(lVar1 + 0x120,&DAT_00224634,3);
                FUN_007d51b0(lVar1 + 0x108,&DAT_00224640,1);
                lVar1 = param_1[0xd];
                if (7 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                  *(undefined8 *)(lVar1 + 0x2d8) = 0x100000001;
                  FUN_00850d54(&local_98,"----DS---",9);
                  if ((byte *)(lVar1 + 0x2e0) == &local_98) {
                    if ((local_98 & 1) != 0) {
                      operator_delete(local_90);
                    }
                  }
                  else {
                    if ((*(byte *)(lVar1 + 0x2e0) & 1) != 0) {
                      operator_delete(*(void **)(lVar1 + 0x2e8));
                    }
                    *(ulong *)(lVar1 + 0x2e0) = CONCAT71(uStack_97,local_98);
                    *(undefined8 *)(lVar1 + 0x308) = local_70;
                    *(undefined8 *)(lVar1 + 0x2f0) = uStack_88;
                    *(void **)(lVar1 + 0x2e8) = local_90;
                    *(undefined8 *)(lVar1 + 0x300) = uStack_78;
                    *(undefined8 *)(lVar1 + 0x2f8) = uStack_80;
                  }
                  FUN_007d51b0(lVar1 + 0x328,&DAT_00224644,3);
                  FUN_007d51b0(lVar1 + 0x310,&DAT_00224650,1);
                  lVar1 = param_1[0xd];
                  if (0xc < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                    *(undefined8 *)(lVar1 + 0x4e0) = DAT_001f54e8;
                    FUN_00850d54(&local_98,"-------DS",9);
                    if ((byte *)(lVar1 + 0x4e8) == &local_98) {
                      if ((local_98 & 1) != 0) {
                        operator_delete(local_90);
                      }
                    }
                    else {
                      if ((*(byte *)(lVar1 + 0x4e8) & 1) != 0) {
                        operator_delete(*(void **)(lVar1 + 0x4f0));
                      }
                      *(ulong *)(lVar1 + 0x4e8) = CONCAT71(uStack_97,local_98);
                      *(undefined8 *)(lVar1 + 0x510) = local_70;
                      *(undefined8 *)(lVar1 + 0x508) = uStack_78;
                      *(undefined8 *)(lVar1 + 0x500) = uStack_80;
                      *(undefined8 *)(lVar1 + 0x4f8) = uStack_88;
                      *(void **)(lVar1 + 0x4f0) = local_90;
                    }
                    FUN_007d51b0(lVar1 + 0x530,&DAT_00224654,3);
                    FUN_007d51b0(lVar1 + 0x518,&DAT_00224660,1);
                    lVar1 = param_1[0xd];
                    if (4 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                      *(undefined8 *)(lVar1 + 0x1a0) = uVar4;
                      FUN_00850d54(&local_98,"--D------",9);
                      if ((byte *)(lVar1 + 0x1a8) == &local_98) {
                        if ((local_98 & 1) != 0) {
                          operator_delete(local_90);
                        }
                      }
                      else {
                        if ((*(byte *)(lVar1 + 0x1a8) & 1) != 0) {
                          operator_delete(*(void **)(lVar1 + 0x1b0));
                        }
                        *(ulong *)(lVar1 + 0x1a8) = CONCAT71(uStack_97,local_98);
                        *(undefined8 *)(lVar1 + 0x1d0) = local_70;
                        *(undefined8 *)(lVar1 + 0x1b8) = uStack_88;
                        *(void **)(lVar1 + 0x1b0) = local_90;
                        *(undefined8 *)(lVar1 + 0x1c8) = uStack_78;
                        *(undefined8 *)(lVar1 + 0x1c0) = uStack_80;
                      }
                      FUN_007d51b0(lVar1 + 0x1f0,&DAT_00224664,3);
                      FUN_007d51b0(lVar1 + 0x1d8,&DAT_00224670,1);
                      lVar1 = param_1[0xd];
                      if (9 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                        *(undefined8 *)(lVar1 + 0x3a8) = uVar3;
                        FUN_00850d54(&local_98,"-----D---",9);
                        if ((byte *)(lVar1 + 0x3b0) == &local_98) {
                          if ((local_98 & 1) != 0) {
                            operator_delete(local_90);
                          }
                        }
                        else {
                          if ((*(byte *)(lVar1 + 0x3b0) & 1) != 0) {
                            operator_delete(*(void **)(lVar1 + 0x3b8));
                          }
                          *(ulong *)(lVar1 + 0x3b0) = CONCAT71(uStack_97,local_98);
                          *(undefined8 *)(lVar1 + 0x3d8) = local_70;
                          *(undefined8 *)(lVar1 + 0x3c0) = uStack_88;
                          *(void **)(lVar1 + 0x3b8) = local_90;
                          *(undefined8 *)(lVar1 + 0x3d0) = uStack_78;
                          *(undefined8 *)(lVar1 + 0x3c8) = uStack_80;
                        }
                        FUN_007d51b0(lVar1 + 0x3f8,&DAT_00224674,3);
                        FUN_007d51b0(lVar1 + 0x3e0,&DAT_00224680,1);
                        lVar1 = param_1[0xd];
                        if (0xe < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                          *(undefined8 *)(lVar1 + 0x5b0) = 0x200000002;
                          FUN_00850d54(&local_98,"--------D",9);
                          if ((byte *)(lVar1 + 0x5b8) == &local_98) {
                            if ((local_98 & 1) != 0) {
                              operator_delete(local_90);
                            }
                          }
                          else {
                            if ((*(byte *)(lVar1 + 0x5b8) & 1) != 0) {
                              operator_delete(*(void **)(lVar1 + 0x5c0));
                            }
                            *(ulong *)(lVar1 + 0x5b8) = CONCAT71(uStack_97,local_98);
                            *(undefined8 *)(lVar1 + 0x5e0) = local_70;
                            *(undefined8 *)(lVar1 + 0x5d8) = uStack_78;
                            *(undefined8 *)(lVar1 + 0x5d0) = uStack_80;
                            *(undefined8 *)(lVar1 + 0x5c8) = uStack_88;
                            *(void **)(lVar1 + 0x5c0) = local_90;
                          }
                          FUN_007d51b0(lVar1 + 0x600,&DAT_00224684,3);
                          FUN_007d51b0(lVar1 + 0x5e8,&DAT_00224690,1);
                          lVar1 = param_1[0xd];
                          if (1 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                            *(undefined8 *)(lVar1 + 0x68) = 0;
                            FUN_00850d54(&local_98,"SSS------",9);
                            if ((byte *)(lVar1 + 0x70) == &local_98) {
                              if ((local_98 & 1) != 0) {
                                operator_delete(local_90);
                              }
                            }
                            else {
                              if ((*(byte *)(lVar1 + 0x70) & 1) != 0) {
                                operator_delete(*(void **)(lVar1 + 0x78));
                              }
                              *(ulong *)(lVar1 + 0x70) = CONCAT71(uStack_97,local_98);
                              *(undefined8 *)(lVar1 + 0x98) = local_70;
                              *(undefined8 *)(lVar1 + 0x90) = uStack_78;
                              *(undefined8 *)(lVar1 + 0x88) = uStack_80;
                              *(undefined8 *)(lVar1 + 0x80) = uStack_88;
                              *(void **)(lVar1 + 0x78) = local_90;
                            }
                            FUN_007d51b0(lVar1 + 0xb8,&DAT_00224694,3);
                            FUN_007d51b0(lVar1 + 0xa0,&DAT_002246a0,1);
                            lVar1 = param_1[0xd];
                            if (6 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                              *(undefined8 *)(lVar1 + 0x270) = uVar6;
                              FUN_00850d54(&local_98,"---SSS---",9);
                              if ((byte *)(lVar1 + 0x278) == &local_98) {
                                if ((local_98 & 1) != 0) {
                                  operator_delete(local_90);
                                }
                              }
                              else {
                                if ((*(byte *)(lVar1 + 0x278) & 1) != 0) {
                                  operator_delete(*(void **)(lVar1 + 0x280));
                                }
                                *(ulong *)(lVar1 + 0x278) = CONCAT71(uStack_97,local_98);
                                *(undefined8 *)(lVar1 + 0x2a0) = local_70;
                                *(undefined8 *)(lVar1 + 0x288) = uStack_88;
                                *(void **)(lVar1 + 0x280) = local_90;
                                *(undefined8 *)(lVar1 + 0x298) = uStack_78;
                                *(undefined8 *)(lVar1 + 0x290) = uStack_80;
                              }
                              FUN_007d51b0(lVar1 + 0x2c0,&DAT_002246a4,3);
                              FUN_007d51b0(lVar1 + 0x2a8,&DAT_002246b0,1);
                              lVar1 = param_1[0xd];
                              if (0xb < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                                *(undefined8 *)(lVar1 + 0x478) = uVar5;
                                FUN_00850d54(&local_98,"------SSS",9);
                                if ((byte *)(lVar1 + 0x480) == &local_98) {
                                  if ((local_98 & 1) != 0) {
                                    operator_delete(local_90);
                                  }
                                }
                                else {
                                  if ((*(byte *)(lVar1 + 0x480) & 1) != 0) {
                                    operator_delete(*(void **)(lVar1 + 0x488));
                                  }
                                  *(ulong *)(lVar1 + 0x480) = CONCAT71(uStack_97,local_98);
                                  *(undefined8 *)(lVar1 + 0x4a8) = local_70;
                                  *(undefined8 *)(lVar1 + 0x490) = uStack_88;
                                  *(void **)(lVar1 + 0x488) = local_90;
                                  *(undefined8 *)(lVar1 + 0x4a0) = uStack_78;
                                  *(undefined8 *)(lVar1 + 0x498) = uStack_80;
                                }
                                FUN_007d51b0(lVar1 + 0x4c8,&DAT_002246b4,3);
                                FUN_007d51b0(lVar1 + 0x4b0,&DAT_002246c0,1);
                                if (*(long *)(lVar2 + 0x28) == local_68) {
                                  return;
                                }
                    /* WARNING: Subroutine does not return */
                                __stack_chk_fail();
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
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 008b1054  FUN_008b1054 =====

void FUN_008b1054(void)

{
  return;
}


// ===== 008b105c  FUN_008b105c =====

void FUN_008b105c(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 008b1068  FUN_008b1068 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b1068(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = _UNK_001f3c38;
  uVar3 = _DAT_001f3c30;
  uVar2 = _UNK_001f26e8;
  uVar1 = _DAT_001f26e0;
  *(undefined4 *)(param_1 + 5) = 1;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[4] = 0x100000001;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


// ===== 008b1098  FUN_008b1098 =====

void FUN_008b1098(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  byte local_78;
  undefined7 uStack_77;
  void *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar4 = param_1 + 0xd;
  *puVar4 = 0;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  uVar3 = DAT_001f5728;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = 0;
  param_1[8] = 0;
  *param_1 = uVar3;
  *(undefined4 *)(param_1 + 1) = 2;
  FUN_008ad510(param_1 + 2,&DAT_002246c4,4);
  FUN_008a9840(puVar4,7);
  puVar4 = (undefined8 *)*puVar4;
  if ((undefined8 *)param_1[0xe] != puVar4) {
    *puVar4 = 0;
    FUN_00850d54(&local_78,&DAT_001a1577,4);
    if ((byte *)(puVar4 + 1) == &local_78) {
      if ((local_78 & 1) != 0) {
        operator_delete(local_70);
      }
    }
    else {
      if ((*(byte *)(puVar4 + 1) & 1) != 0) {
        operator_delete((void *)puVar4[2]);
      }
      puVar4[1] = CONCAT71(uStack_77,local_78);
      puVar4[6] = local_50;
      puVar4[3] = uStack_68;
      puVar4[2] = local_70;
      puVar4[5] = uStack_58;
      puVar4[4] = uStack_60;
    }
    FUN_007d51b0(puVar4 + 10,&DAT_002246d4,2);
    lVar1 = param_1[0xd];
    if (1 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
      *(undefined8 *)(lVar1 + 0x68) = 0;
      FUN_00850d54(&local_78,&DAT_001bdade,4);
      if ((byte *)(lVar1 + 0x70) == &local_78) {
        if ((local_78 & 1) != 0) {
          operator_delete(local_70);
        }
      }
      else {
        if ((*(byte *)(lVar1 + 0x70) & 1) != 0) {
          operator_delete(*(void **)(lVar1 + 0x78));
        }
        *(ulong *)(lVar1 + 0x70) = CONCAT71(uStack_77,local_78);
        *(undefined8 *)(lVar1 + 0x98) = local_50;
        *(undefined8 *)(lVar1 + 0x90) = uStack_58;
        *(undefined8 *)(lVar1 + 0x88) = uStack_60;
        *(undefined8 *)(lVar1 + 0x80) = uStack_68;
        *(void **)(lVar1 + 0x78) = local_70;
      }
      FUN_007d51b0(lVar1 + 0xb8,&DAT_002246dc,2);
      FUN_007d51b0(lVar1 + 0xa0,&DAT_002246e4,1);
      lVar1 = param_1[0xd];
      if (2 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
        *(undefined8 *)(lVar1 + 0xd0) = 0;
        FUN_00850d54(&local_78,&DAT_001bdade,4);
        if ((byte *)(lVar1 + 0xd8) == &local_78) {
          if ((local_78 & 1) != 0) {
            operator_delete(local_70);
          }
        }
        else {
          if ((*(byte *)(lVar1 + 0xd8) & 1) != 0) {
            operator_delete(*(void **)(lVar1 + 0xe0));
          }
          *(ulong *)(lVar1 + 0xd8) = CONCAT71(uStack_77,local_78);
          *(undefined8 *)(lVar1 + 0x100) = local_50;
          *(undefined8 *)(lVar1 + 0xe8) = uStack_68;
          *(void **)(lVar1 + 0xe0) = local_70;
          *(undefined8 *)(lVar1 + 0xf8) = uStack_58;
          *(undefined8 *)(lVar1 + 0xf0) = uStack_60;
        }
        FUN_007d51b0(lVar1 + 0x120,&DAT_002246e8,2);
        FUN_007d51b0(lVar1 + 0x108,&DAT_002246f0,1);
        lVar1 = param_1[0xd];
        if (3 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
          *(undefined8 *)(lVar1 + 0x138) = DAT_001f5170;
          FUN_00850d54(&local_78,&DAT_0019e3dc,4);
          if ((byte *)(lVar1 + 0x140) == &local_78) {
            if ((local_78 & 1) != 0) {
              operator_delete(local_70);
            }
          }
          else {
            if ((*(byte *)(lVar1 + 0x140) & 1) != 0) {
              operator_delete(*(void **)(lVar1 + 0x148));
            }
            *(ulong *)(lVar1 + 0x140) = CONCAT71(uStack_77,local_78);
            *(undefined8 *)(lVar1 + 0x168) = local_50;
            *(undefined8 *)(lVar1 + 0x150) = uStack_68;
            *(void **)(lVar1 + 0x148) = local_70;
            *(undefined8 *)(lVar1 + 0x160) = uStack_58;
            *(undefined8 *)(lVar1 + 0x158) = uStack_60;
          }
          FUN_007d51b0(lVar1 + 0x188,&DAT_002246f4,2);
          FUN_007d51b0(lVar1 + 0x170,&DAT_002246fc,1);
          uVar3 = DAT_001f58a0;
          lVar1 = param_1[0xd];
          if (4 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
            *(undefined8 *)(lVar1 + 0x1a0) = DAT_001f58a0;
            FUN_00850d54(&local_78,&DAT_001dcd79,4);
            if ((byte *)(lVar1 + 0x1a8) == &local_78) {
              if ((local_78 & 1) != 0) {
                operator_delete(local_70);
              }
            }
            else {
              if ((*(byte *)(lVar1 + 0x1a8) & 1) != 0) {
                operator_delete(*(void **)(lVar1 + 0x1b0));
              }
              *(ulong *)(lVar1 + 0x1a8) = CONCAT71(uStack_77,local_78);
              *(undefined8 *)(lVar1 + 0x1d0) = local_50;
              *(undefined8 *)(lVar1 + 0x1b8) = uStack_68;
              *(void **)(lVar1 + 0x1b0) = local_70;
              *(undefined8 *)(lVar1 + 0x1c8) = uStack_58;
              *(undefined8 *)(lVar1 + 0x1c0) = uStack_60;
            }
            FUN_007d51b0(lVar1 + 0x1f0,&DAT_00224700,2);
            FUN_007d51b0(lVar1 + 0x1d8,&DAT_00224708,1);
            lVar1 = param_1[0xd];
            if (5 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
              *(undefined8 *)(lVar1 + 0x208) = uVar3;
              FUN_00850d54(&local_78,&DAT_001dcd79,4);
              if ((byte *)(lVar1 + 0x210) == &local_78) {
                if ((local_78 & 1) != 0) {
                  operator_delete(local_70);
                }
              }
              else {
                if ((*(byte *)(lVar1 + 0x210) & 1) != 0) {
                  operator_delete(*(void **)(lVar1 + 0x218));
                }
                *(ulong *)(lVar1 + 0x210) = CONCAT71(uStack_77,local_78);
                *(undefined8 *)(lVar1 + 0x238) = local_50;
                *(undefined8 *)(lVar1 + 0x220) = uStack_68;
                *(void **)(lVar1 + 0x218) = local_70;
                *(undefined8 *)(lVar1 + 0x230) = uStack_58;
                *(undefined8 *)(lVar1 + 0x228) = uStack_60;
              }
              FUN_007d51b0(lVar1 + 600,&DAT_0022470c,2);
              FUN_007d51b0(lVar1 + 0x240,&DAT_00224714,1);
              lVar1 = param_1[0xd];
              if (6 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                *(undefined8 *)(lVar1 + 0x270) = 0x100000001;
                FUN_00850d54(&local_78,&DAT_001d7496,4);
                if ((byte *)(lVar1 + 0x278) == &local_78) {
                  if ((local_78 & 1) != 0) {
                    operator_delete(local_70);
                  }
                }
                else {
                  if ((*(byte *)(lVar1 + 0x278) & 1) != 0) {
                    operator_delete(*(void **)(lVar1 + 0x280));
                  }
                  *(ulong *)(lVar1 + 0x278) = CONCAT71(uStack_77,local_78);
                  *(undefined8 *)(lVar1 + 0x2a0) = local_50;
                  *(undefined8 *)(lVar1 + 0x288) = uStack_68;
                  *(void **)(lVar1 + 0x280) = local_70;
                  *(undefined8 *)(lVar1 + 0x298) = uStack_58;
                  *(undefined8 *)(lVar1 + 0x290) = uStack_60;
                }
                FUN_007d51b0(lVar1 + 0x2c0,&DAT_00224718,2);
                FUN_007d51b0(lVar1 + 0x2a8,&DAT_00224720,1);
                if (*(long *)(lVar2 + 0x28) == local_48) {
                  return;
                }
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
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
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 008b164c  FUN_008b164c =====

void FUN_008b164c(long *param_1,long param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined2 uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 local_34 [4];
  undefined1 local_18 [4];
  undefined4 local_14;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_008a8e44(param_1,2);
  if ((param_3 & 1) == 0) {
    iVar2 = *(int *)(param_2 + 8);
    if (iVar2 != 2) {
      if (iVar2 == 1) {
        uVar6 = (uint)*(ulong *)(param_2 + 0x10);
        if ((*(ulong *)(param_2 + 0x10) & 1) != 0) {
          puVar5 = (undefined8 *)param_1[1];
          if (puVar5 < (undefined8 *)param_1[2]) {
            if (puVar5 == (undefined8 *)0x0) goto LAB_008b1c7c;
            puVar5[10] = 0;
            puVar4 = puVar5 + 0xb;
            puVar5[3] = 0;
            puVar5[2] = 0;
            puVar5[5] = 0;
            puVar5[4] = 0;
            puVar5[7] = 0;
            puVar5[6] = 0;
            puVar5[9] = 0;
            puVar5[8] = 0;
            puVar5[1] = 0;
            *puVar5 = 0;
          }
          else {
            puVar4 = (undefined8 *)FUN_008ac89c(param_1);
          }
          param_1[1] = (long)puVar4;
          if ((undefined8 *)*param_1 == puVar4) goto LAB_008b1c90;
          puVar4[-10] = 0;
          puVar3 = puVar4 + -9;
          local_14 = 0;
          local_18[0] = 1;
          local_34[0] = 1;
          if ((*puVar3 & 1) == 0) {
            puVar5 = puVar4 + -8;
            uVar10 = 8;
          }
          else {
            puVar5 = (undefined8 *)puVar4[-8];
            uVar10 = puVar4[-7];
          }
          uVar8 = *puVar3 >> 1;
          if (uVar8 == uVar10) {
            FUN_008aca3c(puVar3,&local_14,local_18,local_34);
          }
          else {
            puVar5 = puVar5 + uVar8;
            if (puVar5 == (undefined8 *)0x0) goto LAB_008b1c7c;
            *(undefined4 *)puVar5 = 0;
            *(undefined2 *)((long)puVar5 + 4) = 0x101;
            *puVar3 = *puVar3 + 2;
          }
          uVar6 = (uint)*(undefined8 *)(param_2 + 0x10);
        }
        if ((uVar6 >> 3 & 1) != 0) {
          puVar5 = (undefined8 *)param_1[1];
          if (puVar5 < (undefined8 *)param_1[2]) {
            if (puVar5 == (undefined8 *)0x0) goto LAB_008b1c7c;
            puVar5[10] = 0;
            puVar4 = puVar5 + 0xb;
            puVar5[3] = 0;
            puVar5[2] = 0;
            puVar5[5] = 0;
            puVar5[4] = 0;
            puVar5[7] = 0;
            puVar5[6] = 0;
            puVar5[9] = 0;
            puVar5[8] = 0;
            puVar5[1] = 0;
            *puVar5 = 0;
          }
          else {
            puVar4 = (undefined8 *)FUN_008ac89c(param_1);
          }
          param_1[1] = (long)puVar4;
          if ((undefined8 *)*param_1 == puVar4) goto LAB_008b1c90;
          local_14 = 1;
          local_18[0] = 1;
          puVar3 = puVar4 + -9;
          local_34[0] = 0;
          puVar4[-10] = 0x100000001;
          if ((*puVar3 & 1) == 0) {
            puVar5 = puVar4 + -8;
            uVar10 = 8;
          }
          else {
            puVar5 = (undefined8 *)puVar4[-8];
            uVar10 = puVar4[-7];
          }
          uVar8 = *puVar3 >> 1;
          if (uVar8 == uVar10) {
            FUN_008aca3c(puVar3,&local_14,local_18,local_34);
          }
          else {
            puVar5 = puVar5 + uVar8;
            if (puVar5 == (undefined8 *)0x0) goto LAB_008b1c7c;
            *(undefined4 *)puVar5 = 1;
            *(undefined2 *)((long)puVar5 + 4) = 1;
            *puVar3 = *puVar3 + 2;
          }
        }
        puVar5 = (undefined8 *)*param_1;
        puVar4 = (undefined8 *)param_1[1];
        if ((puVar5 == puVar4) && ((*(byte *)(param_2 + 0x10) >> 2 & 1) != 0)) {
          if (puVar5 < (undefined8 *)param_1[2]) {
            if (puVar5 == (undefined8 *)0x0) goto LAB_008b1c7c;
            puVar4[10] = 0;
            puVar5 = puVar4 + 0xb;
            puVar4[3] = 0;
            puVar4[2] = 0;
            puVar4[5] = 0;
            puVar4[4] = 0;
            puVar4[7] = 0;
            puVar4[6] = 0;
            puVar4[9] = 0;
            puVar4[8] = 0;
            puVar4[1] = 0;
            *puVar4 = 0;
          }
          else {
            puVar5 = (undefined8 *)FUN_008ac89c(param_1);
          }
          param_1[1] = (long)puVar5;
          if ((undefined8 *)*param_1 != puVar5) {
            puVar3 = puVar5 + -9;
            local_14 = 1;
            local_18[0] = 1;
            puVar5[-10] = DAT_001f58a0;
            local_34[0] = 1;
            if ((*puVar3 & 1) == 0) {
              puVar4 = puVar5 + -8;
              uVar10 = 8;
            }
            else {
              puVar4 = (undefined8 *)puVar5[-8];
              uVar10 = puVar5[-7];
            }
            uVar8 = *puVar3 >> 1;
            if (uVar8 == uVar10) {
              FUN_008aca3c(puVar3,&local_14,local_18,local_34);
              uVar7 = 2;
            }
            else {
              puVar4 = puVar4 + uVar8;
              if (puVar4 == (undefined8 *)0x0) goto LAB_008b1c7c;
              *(undefined4 *)puVar4 = 1;
              *(undefined2 *)((long)puVar4 + 4) = 0x101;
              *puVar3 = *puVar3 + 2;
              uVar7 = 2;
            }
            goto LAB_008b1b30;
          }
          goto LAB_008b1c90;
        }
        uVar7 = 2;
        goto LAB_008b1b30;
      }
      if (iVar2 != 0) {
        return;
      }
      goto LAB_008b168c;
    }
    uVar6 = (uint)*(undefined8 *)(param_2 + 0x10);
    if ((uVar6 >> 1 & 1) != 0) {
      puVar5 = (undefined8 *)param_1[1];
      if (puVar5 < (undefined8 *)param_1[2]) {
        if (puVar5 == (undefined8 *)0x0) goto LAB_008b1c7c;
        puVar5[10] = 0;
        puVar4 = puVar5 + 0xb;
        puVar5[3] = 0;
        puVar5[2] = 0;
        puVar5[5] = 0;
        puVar5[4] = 0;
        puVar5[7] = 0;
        puVar5[6] = 0;
        puVar5[9] = 0;
        puVar5[8] = 0;
        puVar5[1] = 0;
        *puVar5 = 0;
      }
      else {
        puVar4 = (undefined8 *)FUN_008ac89c(param_1);
      }
      param_1[1] = (long)puVar4;
      if ((undefined8 *)*param_1 == puVar4) goto LAB_008b1c90;
      puVar3 = puVar4 + -9;
      local_14 = 0;
      local_18[0] = 1;
      puVar4[-10] = DAT_001f5170;
      local_34[0] = 0;
      if ((*puVar3 & 1) == 0) {
        puVar5 = puVar4 + -8;
        uVar10 = 8;
      }
      else {
        puVar5 = (undefined8 *)puVar4[-8];
        uVar10 = puVar4[-7];
      }
      uVar8 = *puVar3 >> 1;
      if (uVar8 == uVar10) {
        FUN_008aca3c(puVar3,&local_14,local_18,local_34);
      }
      else {
        puVar5 = puVar5 + uVar8;
        if (puVar5 == (undefined8 *)0x0) goto LAB_008b1c7c;
        *(undefined4 *)puVar5 = 0;
        *(undefined2 *)((long)puVar5 + 4) = 1;
        *puVar3 = *puVar3 + 2;
      }
      uVar6 = (uint)*(undefined8 *)(param_2 + 0x10);
    }
    if ((uVar6 >> 2 & 1) != 0) {
      puVar5 = (undefined8 *)param_1[1];
      if (puVar5 < (undefined8 *)param_1[2]) {
        if (puVar5 == (undefined8 *)0x0) goto LAB_008b1c7c;
        puVar5[10] = 0;
        puVar4 = puVar5 + 0xb;
        puVar5[3] = 0;
        puVar5[2] = 0;
        puVar5[5] = 0;
        puVar5[4] = 0;
        puVar5[7] = 0;
        puVar5[6] = 0;
        puVar5[9] = 0;
        puVar5[8] = 0;
        puVar5[1] = 0;
        *puVar5 = 0;
      }
      else {
        puVar4 = (undefined8 *)FUN_008ac89c(param_1);
      }
      param_1[1] = (long)puVar4;
      if ((undefined8 *)*param_1 == puVar4) goto LAB_008b1c90;
      puVar3 = puVar4 + -9;
      local_14 = 1;
      local_18[0] = 1;
      puVar4[-10] = DAT_001f58a0;
      local_34[0] = 1;
      if ((*puVar3 & 1) == 0) {
        puVar5 = puVar4 + -8;
        uVar10 = 8;
      }
      else {
        puVar5 = (undefined8 *)puVar4[-8];
        uVar10 = puVar4[-7];
      }
      uVar8 = *puVar3 >> 1;
      if (uVar8 == uVar10) {
        FUN_008aca3c(puVar3,&local_14,local_18,local_34);
      }
      else {
        puVar5 = puVar5 + uVar8;
        if (puVar5 == (undefined8 *)0x0) goto LAB_008b1c7c;
        *(undefined4 *)puVar5 = 1;
        *(undefined2 *)((long)puVar5 + 4) = 0x101;
        *puVar3 = *puVar3 + 2;
      }
    }
    puVar5 = (undefined8 *)*param_1;
    puVar4 = (undefined8 *)param_1[1];
    if ((puVar5 == puVar4) && ((*(byte *)(param_2 + 0x10) & 1) != 0)) {
      if (puVar5 < (undefined8 *)param_1[2]) {
        if (puVar5 == (undefined8 *)0x0) goto LAB_008b1c7c;
        puVar4[10] = 0;
        puVar5 = puVar4 + 0xb;
        puVar4[3] = 0;
        puVar4[2] = 0;
        puVar4[5] = 0;
        puVar4[4] = 0;
        puVar4[7] = 0;
        puVar4[6] = 0;
        puVar4[9] = 0;
        puVar4[8] = 0;
        puVar4[1] = 0;
        *puVar4 = 0;
      }
      else {
        puVar5 = (undefined8 *)FUN_008ac89c(param_1);
      }
      param_1[1] = (long)puVar5;
      if ((undefined8 *)*param_1 == puVar5) goto LAB_008b1c90;
      puVar5[-10] = 0;
      puVar3 = puVar5 + -9;
      local_14 = 0;
      local_18[0] = 1;
      local_34[0] = 1;
      if ((*puVar3 & 1) == 0) {
        puVar4 = puVar5 + -8;
        uVar10 = 8;
      }
      else {
        puVar4 = (undefined8 *)puVar5[-8];
        uVar10 = puVar5[-7];
      }
      uVar8 = *puVar3 >> 1;
      if (uVar8 != uVar10) {
        puVar4 = puVar4 + uVar8;
        if (puVar4 == (undefined8 *)0x0) goto LAB_008b1c7c;
        *(undefined4 *)puVar4 = 0;
        uVar9 = 0x101;
        goto LAB_008b1940;
      }
LAB_008b1cec:
      local_14 = 0;
      local_18[0] = 1;
      FUN_008aca3c(puVar3,&local_14,local_18,local_34);
    }
  }
  else {
    *(undefined4 *)(param_2 + 8) = 0;
LAB_008b168c:
    uVar6 = (uint)*(ulong *)(param_2 + 0x10);
    if ((*(ulong *)(param_2 + 0x10) & 1) != 0) {
      puVar5 = (undefined8 *)param_1[1];
      if (puVar5 < (undefined8 *)param_1[2]) {
        if (puVar5 == (undefined8 *)0x0) goto LAB_008b1c7c;
        puVar5[10] = 0;
        puVar4 = puVar5 + 0xb;
        puVar5[3] = 0;
        puVar5[2] = 0;
        puVar5[5] = 0;
        puVar5[4] = 0;
        puVar5[7] = 0;
        puVar5[6] = 0;
        puVar5[9] = 0;
        puVar5[8] = 0;
        puVar5[1] = 0;
        *puVar5 = 0;
      }
      else {
        puVar4 = (undefined8 *)FUN_008ac89c(param_1);
      }
      param_1[1] = (long)puVar4;
      if ((undefined8 *)*param_1 == puVar4) goto LAB_008b1c90;
      puVar4[-10] = 0;
      puVar3 = puVar4 + -9;
      local_14 = 0;
      local_18[0] = 0;
      local_34[0] = 1;
      if ((*puVar3 & 1) == 0) {
        puVar5 = puVar4 + -8;
        uVar10 = 8;
      }
      else {
        puVar5 = (undefined8 *)puVar4[-8];
        uVar10 = puVar4[-7];
      }
      uVar8 = *puVar3 >> 1;
      if (uVar8 == uVar10) {
        FUN_008aca3c(puVar3,&local_14,local_18,local_34);
      }
      else {
        puVar5 = puVar5 + uVar8;
        if (puVar5 == (undefined8 *)0x0) goto LAB_008b1c7c;
        *(undefined4 *)puVar5 = 0;
        *(undefined2 *)((long)puVar5 + 4) = 0x100;
        *puVar3 = *puVar3 + 2;
      }
      *(undefined1 *)((long)puVar4 + -0x54) = 1;
      uVar6 = (uint)*(undefined8 *)(param_2 + 0x10);
    }
    if ((uVar6 >> 2 & 1) != 0) {
      puVar5 = (undefined8 *)param_1[1];
      if (puVar5 < (undefined8 *)param_1[2]) {
        if (puVar5 == (undefined8 *)0x0) goto LAB_008b1c7c;
        puVar5[10] = 0;
        puVar4 = puVar5 + 0xb;
        puVar5[3] = 0;
        puVar5[2] = 0;
        puVar5[5] = 0;
        puVar5[4] = 0;
        puVar5[7] = 0;
        puVar5[6] = 0;
        puVar5[9] = 0;
        puVar5[8] = 0;
        puVar5[1] = 0;
        *puVar5 = 0;
      }
      else {
        puVar4 = (undefined8 *)FUN_008ac89c(param_1);
      }
      param_1[1] = (long)puVar4;
      if ((undefined8 *)*param_1 == puVar4) {
LAB_008b1c90:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
                  );
      }
      puVar3 = puVar4 + -9;
      local_18[0] = 0;
      local_14 = 1;
      puVar4[-10] = DAT_001f58a0;
      local_34[0] = 1;
      if ((*puVar3 & 1) == 0) {
        puVar5 = puVar4 + -8;
        uVar10 = 8;
      }
      else {
        puVar5 = (undefined8 *)puVar4[-8];
        uVar10 = puVar4[-7];
      }
      uVar8 = *puVar3 >> 1;
      if (uVar8 == uVar10) {
        FUN_008aca3c(puVar3,&local_14,local_18,local_34);
      }
      else {
        puVar5 = puVar5 + uVar8;
        if (puVar5 == (undefined8 *)0x0) goto LAB_008b1c7c;
        *(undefined4 *)puVar5 = 1;
        *(undefined2 *)((long)puVar5 + 4) = 0x100;
        *puVar3 = *puVar3 + 2;
      }
      lVar1 = param_1[1];
      if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
        if (*param_1 == lVar1) goto LAB_008b1c90;
        uVar7 = 1;
        *(undefined1 *)(lVar1 + -0x54) = 1;
        goto LAB_008b1b30;
      }
      if (*param_1 == lVar1) goto LAB_008b1c90;
      local_14 = 0;
      puVar3 = (ulong *)(lVar1 + -0x48);
      local_18[0] = 1;
      local_34[0] = 0;
      if ((*puVar3 & 1) == 0) {
        lVar11 = lVar1 + -0x40;
        uVar10 = 8;
      }
      else {
        lVar11 = *(long *)(lVar1 + -0x40);
        uVar10 = *(ulong *)(lVar1 + -0x38);
      }
      uVar8 = *puVar3 >> 1;
      if (uVar8 == uVar10) goto LAB_008b1cec;
      puVar4 = (undefined8 *)(lVar11 + uVar8 * 8);
      if (puVar4 == (undefined8 *)0x0) {
LAB_008b1c7c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar9 = 1;
      *(undefined4 *)puVar4 = 0;
LAB_008b1940:
      *(undefined2 *)((long)puVar4 + 4) = uVar9;
      *puVar3 = *puVar3 + 2;
    }
  }
  uVar7 = 1;
LAB_008b1b30:
  *(undefined4 *)(param_2 + 8) = uVar7;
  return;
}


// ===== 008b1dc8  FUN_008b1dc8 =====

void FUN_008b1dc8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 local_18;
  undefined1 local_17;
  undefined4 local_14;
  
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
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00850a9c(param_1);
  iVar8 = *(int *)(param_3 + 8);
  *param_1 = *(undefined8 *)(param_3 + 8);
  if (param_1 + 0xd != (undefined8 *)(param_3 + 0x10)) {
    puVar3 = (undefined8 *)(param_3 + 0x18);
    if ((*(ulong *)(param_3 + 0x10) & 1) != 0) {
      puVar3 = *(undefined8 **)(param_3 + 0x18);
    }
    FUN_008ad1a4(param_1 + 0xd,puVar3,(long)(*(ulong *)(param_3 + 0x10) << 2) >> 3);
    iVar8 = *(int *)(param_3 + 8);
  }
  puVar3 = param_1 + 2;
  if (*(char *)(param_3 + 4) == '\x01') {
    bVar4 = iVar8 < 0;
    bVar5 = iVar8 == 0;
  }
  else {
    bVar4 = false;
    bVar5 = false;
    if (iVar8 == 0) {
      bVar4 = *(int *)(param_3 + 0xc) < 0;
      bVar5 = *(int *)(param_3 + 0xc) == 0;
    }
  }
  uVar9 = param_1[1];
  local_14 = 0;
  if (bVar5 || bVar4) {
    local_14 = 2;
  }
  uVar10 = 10;
  if ((uVar9 & 1) != 0) {
    uVar10 = param_1[3];
  }
  if (uVar9 >> 1 == uVar10) {
    FUN_008ad380(param_1 + 1,&local_14);
  }
  else {
    puVar2 = puVar3;
    if ((uVar9 & 1) != 0) {
      puVar2 = (undefined8 *)*puVar3;
    }
    puVar1 = (undefined4 *)((long)puVar2 + (uVar9 >> 1) * 4);
    if (puVar1 == (undefined4 *)0x0) goto LAB_008b20c8;
    *puVar1 = local_14;
    param_1[1] = param_1[1] + 2;
  }
  if ((*(byte *)(param_3 + 4) & 1) == 0) {
    if ((*(int *)(param_3 + 8) == 0) && (*(int *)(param_3 + 0xc) < 2)) {
      local_14 = 1;
      if (*(int *)(param_3 + 0xc) != 1) {
        local_14 = 2;
      }
    }
    else {
      local_14 = 0;
    }
  }
  else {
    local_14 = 0;
    if (*(int *)(param_3 + 8) < 1) {
      local_14 = 2;
    }
  }
  uVar10 = param_1[1];
  uVar9 = 10;
  if ((uVar10 & 1) != 0) {
    uVar9 = param_1[3];
  }
  if (uVar10 >> 1 == uVar9) {
    FUN_008ad380(param_1 + 1,&local_14);
  }
  else {
    puVar2 = puVar3;
    if ((uVar10 & 1) != 0) {
      puVar2 = (undefined8 *)*puVar3;
    }
    puVar1 = (undefined4 *)((long)puVar2 + (uVar10 >> 1) * 4);
    if (puVar1 == (undefined4 *)0x0) goto LAB_008b20c8;
    *puVar1 = local_14;
    param_1[1] = param_1[1] + 2;
  }
  if ((*(byte *)(param_3 + 4) & 1) == 0) {
    local_14 = 0;
    if (*(int *)(param_3 + 0xc) < 1 && *(int *)(param_3 + 8) == 1) {
      local_14 = 2;
    }
  }
  else {
    local_14 = 2;
    if (1 < *(int *)(param_3 + 8)) {
      local_14 = 0;
    }
  }
  uVar10 = param_1[1];
  uVar9 = 10;
  if ((uVar10 & 1) != 0) {
    uVar9 = param_1[3];
  }
  if (uVar10 >> 1 == uVar9) {
    FUN_008ad380(param_1 + 1,&local_14);
  }
  else {
    puVar2 = puVar3;
    if ((uVar10 & 1) != 0) {
      puVar2 = (undefined8 *)*puVar3;
    }
    puVar1 = (undefined4 *)((long)puVar2 + (uVar10 >> 1) * 4);
    if (puVar1 == (undefined4 *)0x0) goto LAB_008b20c8;
    *puVar1 = local_14;
    param_1[1] = param_1[1] + 2;
  }
  if ((*(byte *)(param_3 + 4) & 1) == 0) {
    if ((*(int *)(param_3 + 8) == 1) && (*(int *)(param_3 + 0xc) < 2)) {
      local_14 = 1;
      if (*(int *)(param_3 + 0xc) != 1) {
        local_14 = 2;
      }
    }
    else {
      local_14 = 0;
    }
  }
  else {
    local_14 = 2;
    if (1 < *(int *)(param_3 + 8)) {
      local_14 = 0;
    }
  }
  uVar10 = param_1[1];
  uVar9 = 10;
  if ((uVar10 & 1) != 0) {
    uVar9 = param_1[3];
  }
  if (uVar10 >> 1 == uVar9) {
    FUN_008ad380(param_1 + 1,&local_14);
  }
  else {
    if ((uVar10 & 1) != 0) {
      puVar3 = (undefined8 *)*puVar3;
    }
    puVar1 = (undefined4 *)((long)puVar3 + (uVar10 >> 1) * 4);
    if (puVar1 == (undefined4 *)0x0) {
LAB_008b20c8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *puVar1 = local_14;
    param_1[1] = param_1[1] + 2;
  }
  if (*(char *)(param_3 + 4) == '\x01') {
    puVar6 = &DAT_00224724;
  }
  else {
    if (*(int *)(param_3 + 0xc) == 0) {
      puVar6 = &local_18;
      local_18 = *(int *)(param_3 + 8) == 0;
      local_17 = *(int *)(param_3 + 8) == 1;
      puVar7 = (undefined *)((ulong)&local_18 | 2);
      goto LAB_008b2070;
    }
    puVar6 = &DAT_00224726;
  }
  puVar7 = puVar6 + 2;
LAB_008b2070:
  FUN_008b21fc(param_1 + 0x16,puVar6,puVar7,2);
  return;
}


// ===== 008b211c  FUN_008b211c =====

void FUN_008b211c(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_007cc028(param_2,0,0);
  uVar2 = *(ulong *)(param_1 + 0x10);
  if ((iVar1 == 0) || ((uVar2 & 1) != 0)) {
    if (iVar1 != 0) goto LAB_008b215c;
    uVar2 = uVar2 & 0xfffffffffffffffe;
LAB_008b2188:
    uVar2 = uVar2 & 0xfffffffffffffffd;
  }
  else {
    *(undefined4 *)(param_1 + 8) = 0;
LAB_008b215c:
    *(ulong *)(param_1 + 0x10) = uVar2 | 1;
    iVar1 = FUN_007cc028(param_2,0,1);
    uVar2 = *(ulong *)(param_1 + 0x10);
    if (iVar1 == 0) goto LAB_008b2188;
    uVar2 = uVar2 | 2;
  }
  *(ulong *)(param_1 + 0x10) = uVar2;
  iVar1 = FUN_007cc028(param_2,1,0);
  uVar2 = *(ulong *)(param_1 + 0x10);
  if ((iVar1 == 0) || (((uint)uVar2 >> 2 & 1) != 0)) {
    if (iVar1 != 0) goto LAB_008b21b8;
    uVar2 = uVar2 & 0xfffffffffffffffb;
  }
  else {
    *(undefined4 *)(param_1 + 8) = 0;
LAB_008b21b8:
    *(ulong *)(param_1 + 0x10) = uVar2 | 4;
    iVar1 = FUN_007cc028(param_2,1,1);
    uVar2 = *(ulong *)(param_1 + 0x10);
    if (iVar1 != 0) {
      uVar2 = uVar2 | 8;
      goto LAB_008b21e8;
    }
  }
  uVar2 = uVar2 & 0xfffffffffffffff7;
LAB_008b21e8:
  *(ulong *)(param_1 + 0x10) = uVar2;
  return;
}


// ===== 008b21fc  FUN_008b21fc =====

void FUN_008b21fc(undefined8 *param_1,char *param_2,char *param_3,ulong param_4)

{
  bool bVar1;
  ulong *puVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (-1 < (long)param_4) {
    param_1[1] = 0;
    if (param_4 != 0) {
      puVar2 = (ulong *)*param_1;
      if ((ulong)(param_1[2] * 0x40) < param_4) {
        if (puVar2 != (ulong *)0x0) {
          operator_delete(puVar2);
        }
        lVar3 = (param_4 - 1 >> 6) + 1;
        puVar2 = (ulong *)operator_new(lVar3 * 8);
        *param_1 = puVar2;
        param_1[1] = 0;
        param_1[2] = lVar3;
      }
      if (param_2 == param_3) {
        lVar3 = 0;
      }
      else {
        uVar5 = 0;
        do {
          uVar6 = 1L << (uVar5 & 0x3f);
          if (*param_2 == '\x01') {
            uVar6 = *puVar2 | uVar6;
          }
          else {
            uVar6 = *puVar2 & (uVar6 ^ 0xffffffffffffffff);
          }
          bVar1 = uVar5 != 0x3f;
          param_2 = param_2 + 1;
          iVar4 = (int)uVar5;
          lVar3 = 8;
          if (bVar1) {
            lVar3 = 0;
          }
          uVar5 = 0;
          if (bVar1) {
            uVar5 = (ulong)(iVar4 + 1);
          }
          *puVar2 = uVar6;
          puVar2 = (ulong *)((long)puVar2 + lVar3);
        } while (param_2 != param_3);
        puVar2 = (ulong *)*param_1;
        lVar3 = param_1[1];
      }
      param_4 = lVar3 + param_4;
      param_1[1] = param_4;
      if ((param_4 & 0x3f) != 0) {
        uVar5 = param_4 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)((long)puVar2 + uVar5) =
             *(ulong *)((long)puVar2 + uVar5) & (-1L << (param_4 & 0x3f) ^ 0xffffffffffffffffU);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector_bool.h:839: libc++ Hardening assertion __ns >= 0 failed: invalid range specified\n"
            );
}


// ===== 008b232c  FUN_008b232c =====

void FUN_008b232c(undefined8 *param_1,int param_2,int param_3,undefined8 param_4)

{
  *param_1 = &PTR_FUN_00d3c238;
  *(int *)(param_1 + 1) = param_2;
  *(int *)((long)param_1 + 0xc) = param_3;
  param_1[2] = param_4;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = (ulong)(uint)~(-1 << (ulong)(param_3 * param_2 & 0x1f));
  return;
}


// ===== 008b2364  FUN_008b2364 =====

void FUN_008b2364(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x8b236c);
  (*pcVar1)();
}


// ===== 008b236c  FUN_008b236c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b236c(undefined8 *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  int *piVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  uVar5 = _UNK_001f2fa8;
  uVar9 = _DAT_001f2fa0;
  iVar2 = *(int *)(param_2 + 8);
  *(undefined4 *)(param_1 + 5) = 1;
  param_1[2] = uVar5;
  param_1[1] = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 8);
  uVar3 = iVar2 - 1;
  uVar8 = (ulong)uVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[4] = 0x100000001;
  param_1[3] = 0x100000001;
  *param_1 = uVar9;
  if (uVar3 < 4) {
    *(undefined4 *)((long)param_1 + (ulong)uVar3 * 4 + 0xc) = 1;
    *(undefined4 *)((long)param_1 + uVar8 * 4 + 0x1c) = 1;
    if (uVar3 != 0) {
      iVar2 = *(int *)(param_2 + 0x10);
      iVar1 = *(int *)(param_2 + 0x14);
      piVar7 = (int *)((long)param_1 + uVar8 * 4 + 0x1c);
      do {
        uVar8 = uVar8 - 1;
        lVar4 = (uVar8 & 0xffffffff) * 4;
        *(int *)((long)param_1 + lVar4 + 0xc) = piVar7[-4] * iVar2;
        *(int *)((long)param_1 + lVar4 + 0x1c) = *piVar7 * iVar1;
        piVar7 = piVar7 + -1;
      } while ((int)uVar8 != 0);
    }
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(0x5512,0x8b2400);
  (*pcVar6)();
}


// ===== 008b2400  FUN_008b2400 =====

undefined8 FUN_008b2400(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      if (*(int *)(param_1 + 0xc) < 3) {
        return 4;
      }
      uVar2 = (ulong)*(uint *)(param_1 + 8);
      if ((int)*(uint *)(param_1 + 8) < 1) {
        return 4;
      }
      uVar3 = 2;
      while ((uint)uVar3 < 0x20) {
        if ((*(ulong *)(param_1 + 0x30) >> (uVar3 & 0x3f) & 1) != 0) {
          return 3;
        }
        uVar2 = uVar2 - 1;
        uVar3 = (ulong)((uint)uVar3 + *(int *)(param_1 + 0xc));
        if (uVar2 == 0) {
          return 4;
        }
      }
    }
    else {
      if (iVar1 != 1) {
        return 4;
      }
      if (*(int *)(param_1 + 0xc) < 2) {
        return 4;
      }
      uVar2 = (ulong)*(uint *)(param_1 + 8);
      if ((int)*(uint *)(param_1 + 8) < 1) {
        return 4;
      }
      uVar3 = 1;
      while ((uint)uVar3 < 0x20) {
        if ((*(ulong *)(param_1 + 0x30) >> (uVar3 & 0x3f) & 1) != 0) {
          return 2;
        }
        uVar2 = uVar2 - 1;
        uVar3 = (ulong)((uint)uVar3 + *(int *)(param_1 + 0xc));
        if (uVar2 == 0) {
          return 4;
        }
      }
    }
LAB_008b2544:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/bitset:686: libc++ Hardening assertion __p < _Size failed: bitset::operator[] index out of bounds\n"
              );
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (2 < iVar1) {
    uVar2 = (ulong)*(uint *)(param_1 + 8);
    if ((int)*(uint *)(param_1 + 8) < 1) goto LAB_008b24ec;
    uVar3 = 2;
    do {
      if (0x1f < (uint)uVar3) goto LAB_008b2544;
      if ((*(ulong *)(param_1 + 0x30) >> (uVar3 & 0x3f) & 1) != 0) {
        return 1;
      }
      uVar2 = uVar2 - 1;
      uVar3 = (ulong)((uint)uVar3 + iVar1);
    } while (uVar2 != 0);
  }
  if (iVar1 < 2) {
    return 4;
  }
LAB_008b24ec:
  uVar2 = (ulong)*(uint *)(param_1 + 8);
  if (0 < (int)*(uint *)(param_1 + 8)) {
    uVar3 = 1;
    do {
      if (0x1f < (uint)uVar3) goto LAB_008b2544;
      if ((*(ulong *)(param_1 + 0x30) >> (uVar3 & 0x3f) & 1) != 0) {
        return 2;
      }
      uVar2 = uVar2 - 1;
      uVar3 = (ulong)((uint)uVar3 + iVar1);
    } while (uVar2 != 0);
  }
  return 4;
}


// ===== 008b2558  FUN_008b2558 =====

void FUN_008b2558(undefined8 *param_1,long param_2,ulong param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined1 local_64 [4];
  undefined1 local_48 [4];
  int local_44;
  
  iVar3 = *(int *)(param_2 + 0x30);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (iVar3 == 0) {
    *(undefined4 *)(param_2 + 0x18) = 0;
  }
  else {
    FUN_008a8e44(param_1,(long)*(int *)(param_2 + 8));
    if (((param_3 & 1) != 0) || (*(int *)(param_2 + 0x18) == 0)) {
      *(undefined4 *)(param_2 + 0x18) = 0;
      *(ulong *)(param_2 + 0x20) = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffff8;
    }
    iVar3 = FUN_008b2400(param_2);
    if (iVar3 < 3) {
      if (iVar3 != 1) {
        iVar3 = *(int *)(param_2 + 8);
        if (iVar3 < 1) {
          return;
        }
        uVar12 = 0;
        while( true ) {
          iVar10 = (int)uVar12;
          uVar2 = *(int *)(param_2 + 0xc) * iVar10 + 1;
          if (0x1f < uVar2) break;
          if ((*(ulong *)(param_2 + 0x30) >> ((ulong)uVar2 & 0x3f) & 1) != 0) {
            if (2 < uVar12) goto LAB_008b2ad4;
            if ((*(ulong *)(param_2 + 0x20) >> (uVar12 & 0x3f) & 1) != 0) {
              puVar8 = (undefined8 *)param_1[1];
              if (puVar8 < (undefined8 *)param_1[2]) {
                if (puVar8 == (undefined8 *)0x0) goto LAB_008b2ac0;
                puVar8[10] = 0;
                puVar4 = puVar8 + 0xb;
                puVar8[3] = 0;
                puVar8[2] = 0;
                puVar8[5] = 0;
                puVar8[4] = 0;
                puVar8[7] = 0;
                puVar8[6] = 0;
                puVar8[9] = 0;
                puVar8[8] = 0;
                puVar8[1] = 0;
                *puVar8 = 0;
              }
              else {
                puVar4 = (undefined8 *)FUN_008ac89c(param_1);
              }
              param_1[1] = puVar4;
              if ((undefined8 *)*param_1 == puVar4) goto LAB_008b2ae8;
              *(undefined4 *)(puVar4 + -0xb) = 2;
              puVar11 = puVar4 + -9;
              puVar8 = puVar4 + -8;
              *(int *)(puVar4 + -10) = iVar10;
              *(undefined4 *)((long)puVar4 + -0x4c) = 1;
              local_48[0] = 1;
              local_64[0] = 0;
              if ((*puVar11 & 1) == 0) {
                puVar7 = puVar4 + -8;
                uVar9 = 8;
              }
              else {
                puVar7 = (undefined8 *)puVar4[-8];
                uVar9 = puVar4[-7];
              }
              uVar5 = *puVar11 >> 1;
              local_44 = iVar10;
              if (uVar5 == uVar9) {
                FUN_008aca3c(puVar11,&local_44,local_48,local_64);
              }
              else {
                piVar1 = (int *)(puVar7 + uVar5);
                if (piVar1 == (int *)0x0) goto LAB_008b2ac0;
                *piVar1 = iVar10;
                *(undefined2 *)(piVar1 + 1) = 1;
                *puVar11 = *puVar11 + 2;
              }
              iVar3 = *(int *)(param_2 + 8);
              if (2 < *(int *)(param_2 + 0xc)) {
                local_44 = iVar10 + iVar3;
                local_48[0] = 0;
                local_64[0] = 1;
                if ((*puVar11 & 1) == 0) {
                  uVar9 = 8;
                }
                else {
                  puVar8 = (undefined8 *)puVar4[-8];
                  uVar9 = puVar4[-7];
                }
                uVar5 = *puVar11 >> 1;
                if (uVar5 == uVar9) {
                  FUN_008aca3c(puVar11,&local_44,local_48,local_64);
                }
                else {
                  piVar1 = (int *)(puVar8 + uVar5);
                  if (piVar1 == (int *)0x0) goto LAB_008b2ac0;
                  *piVar1 = local_44;
                  *(undefined2 *)(piVar1 + 1) = 0x100;
                  *puVar11 = *puVar11 + 2;
                }
                iVar3 = *(int *)(param_2 + 8);
              }
            }
          }
          uVar12 = uVar12 + 1;
          if ((long)iVar3 <= (long)uVar12) {
            return;
          }
        }
LAB_008b2aac:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/bitset:686: libc++ Hardening assertion __p < _Size failed: bitset::operator[] index out of bounds\n"
                  );
      }
    }
    else if (iVar3 != 3) {
      iVar3 = *(int *)(param_2 + 8);
      *(ulong *)(param_2 + 0x28) = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffff8;
      if (iVar3 < 1) {
        return;
      }
      uVar12 = 0;
      while( true ) {
        iVar10 = (int)uVar12;
        uVar2 = *(int *)(param_2 + 0xc) * iVar10;
        if (0x1f < uVar2) break;
        if ((*(ulong *)(param_2 + 0x30) >> ((ulong)uVar2 & 0x3f) & 1) == 0) {
          if (2 < uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_005f55a8("bitset reset argument out of range");
          }
          uVar9 = *(ulong *)(param_2 + 0x20) & (1L << (uVar12 & 0x3f) ^ 0xffffffffffffffffU);
        }
        else {
          puVar8 = (undefined8 *)param_1[1];
          if (puVar8 < (undefined8 *)param_1[2]) {
            if (puVar8 == (undefined8 *)0x0) goto LAB_008b2ac0;
            puVar8[10] = 0;
            puVar4 = puVar8 + 0xb;
            puVar8[3] = 0;
            puVar8[2] = 0;
            puVar8[5] = 0;
            puVar8[4] = 0;
            puVar8[7] = 0;
            puVar8[6] = 0;
            puVar8[9] = 0;
            puVar8[8] = 0;
            puVar8[1] = 0;
            *puVar8 = 0;
          }
          else {
            puVar4 = (undefined8 *)FUN_008ac89c(param_1);
          }
          param_1[1] = puVar4;
          if ((undefined8 *)*param_1 == puVar4) goto LAB_008b2ae8;
          *(undefined4 *)(puVar4 + -0xb) = 4;
          *(int *)(puVar4 + -10) = iVar10;
          *(undefined4 *)((long)puVar4 + -0x4c) = 0;
          if (2 < uVar12) goto LAB_008b2ad4;
          uVar9 = 1L << (uVar12 & 0x3f);
          local_44 = iVar10;
          if ((*(ulong *)(param_2 + 0x20) & uVar9) == 0) {
            *(undefined1 *)((long)puVar4 + -0x54) = 1;
            local_48[0] = 0;
            local_64[0] = 1;
            if ((puVar4[-9] & 1) == 0) {
              puVar8 = puVar4 + -8;
              uVar5 = 8;
            }
            else {
              puVar8 = (undefined8 *)puVar4[-8];
              uVar5 = puVar4[-7];
            }
            uVar6 = (ulong)puVar4[-9] >> 1;
            if (uVar6 == uVar5) goto LAB_008b2904;
            piVar1 = (int *)(puVar8 + uVar6);
            if (piVar1 == (int *)0x0) goto LAB_008b2ac0;
            *piVar1 = iVar10;
            *(undefined2 *)(piVar1 + 1) = 0x100;
LAB_008b27b0:
            local_64[0] = 1;
            puVar4[-9] = puVar4[-9] + 2;
          }
          else {
            local_48[0] = 1;
            local_64[0] = 1;
            if ((puVar4[-9] & 1) == 0) {
              puVar8 = puVar4 + -8;
              uVar5 = 8;
            }
            else {
              puVar8 = (undefined8 *)puVar4[-8];
              uVar5 = puVar4[-7];
            }
            uVar6 = (ulong)puVar4[-9] >> 1;
            if (uVar6 != uVar5) {
              piVar1 = (int *)(puVar8 + uVar6);
              if (piVar1 != (int *)0x0) {
                *piVar1 = iVar10;
                *(undefined2 *)(piVar1 + 1) = 0x101;
                goto LAB_008b27b0;
              }
              goto LAB_008b2ac0;
            }
LAB_008b2904:
            local_64[0] = 1;
            FUN_008aca3c(puVar4 + -9,&local_44,local_48,local_64);
          }
          uVar9 = *(ulong *)(param_2 + 0x20) | uVar9;
          iVar3 = *(int *)(param_2 + 8);
        }
        uVar12 = uVar12 + 1;
        *(ulong *)(param_2 + 0x20) = uVar9;
        if ((long)iVar3 <= (long)uVar12) {
          return;
        }
      }
      goto LAB_008b2aac;
    }
    if (0 < *(int *)(param_2 + 8)) {
      uVar12 = 0;
      do {
        iVar10 = (int)uVar12;
        uVar2 = *(int *)(param_2 + 0xc) * iVar10 + 2;
        if (0x1f < uVar2) goto LAB_008b2aac;
        if ((*(ulong *)(param_2 + 0x30) >> ((ulong)uVar2 & 0x3f) & 1) != 0) {
          if (2 < uVar12) {
LAB_008b2ad4:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/bitset:696: libc++ Hardening assertion __p < _Size failed: bitset::operator[] index out of bounds\n"
                      );
          }
          uVar9 = 1L << (uVar12 & 0x3f);
          if ((*(ulong *)(param_2 + 0x20) & uVar9) != 0) {
            puVar8 = (undefined8 *)param_1[1];
            if (puVar8 < (undefined8 *)param_1[2]) {
              if (puVar8 == (undefined8 *)0x0) {
LAB_008b2ac0:
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                          );
              }
              puVar8[10] = 0;
              puVar4 = puVar8 + 0xb;
              puVar8[3] = 0;
              puVar8[2] = 0;
              puVar8[5] = 0;
              puVar8[4] = 0;
              puVar8[7] = 0;
              puVar8[6] = 0;
              puVar8[9] = 0;
              puVar8[8] = 0;
              puVar8[1] = 0;
              *puVar8 = 0;
            }
            else {
              puVar4 = (undefined8 *)FUN_008ac89c(param_1);
            }
            param_1[1] = puVar4;
            if ((undefined8 *)*param_1 == puVar4) {
LAB_008b2ae8:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
                        );
            }
            *(int *)(puVar4 + -0xb) = iVar3;
            *(int *)(puVar4 + -10) = iVar10;
            *(undefined4 *)((long)puVar4 + -0x4c) = 2;
            if ((*(ulong *)(param_2 + 0x28) & uVar9) == 0) {
              local_48[0] = 1;
              local_64[0] = 0;
              if ((puVar4[-9] & 1) == 0) {
                puVar8 = puVar4 + -8;
                uVar9 = 8;
              }
              else {
                puVar8 = (undefined8 *)puVar4[-8];
                uVar9 = puVar4[-7];
              }
              uVar5 = (ulong)puVar4[-9] >> 1;
              local_44 = iVar10;
              if (uVar5 == uVar9) goto LAB_008b2768;
              piVar1 = (int *)(puVar8 + uVar5);
              if (piVar1 == (int *)0x0) goto LAB_008b2ac0;
              *piVar1 = iVar10;
              *(undefined2 *)(piVar1 + 1) = 1;
            }
            else {
              local_48[0] = 1;
              local_64[0] = 0;
              local_44 = iVar10 + *(int *)(param_2 + 8);
              if ((puVar4[-9] & 1) == 0) {
                puVar8 = puVar4 + -8;
                uVar9 = 8;
              }
              else {
                puVar8 = (undefined8 *)puVar4[-8];
                uVar9 = puVar4[-7];
              }
              uVar5 = (ulong)puVar4[-9] >> 1;
              if (uVar5 == uVar9) {
LAB_008b2768:
                local_48[0] = 1;
                local_64[0] = 0;
                FUN_008aca3c(puVar4 + -9,&local_44,local_48,local_64);
                goto LAB_008b263c;
              }
              piVar1 = (int *)(puVar8 + uVar5);
              if (piVar1 == (int *)0x0) goto LAB_008b2ac0;
              *piVar1 = local_44;
              *(undefined2 *)(piVar1 + 1) = 1;
            }
            local_48[0] = 1;
            local_64[0] = 0;
            puVar4[-9] = puVar4[-9] + 2;
          }
        }
LAB_008b263c:
        uVar12 = uVar12 + 1;
      } while ((long)uVar12 < (long)*(int *)(param_2 + 8));
    }
  }
  return;
}


// ===== 008b2b08  FUN_008b2b08 =====

void FUN_008b2b08(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  undefined1 local_48 [4];
  undefined4 local_44;
  
  *(undefined4 *)(param_2 + 0x18) = *param_3;
  if (param_3[3] == 1) {
    if (2 < (uint)param_3[2]) {
                    /* WARNING: Subroutine does not return */
      FUN_005f55a8("bitset set argument out of range");
    }
    *(ulong *)(param_2 + 0x28) = *(ulong *)(param_2 + 0x28) | 1L << ((ulong)(uint)param_3[2] & 0x3f)
    ;
  }
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
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00850a9c(param_1);
  *param_1 = *(undefined8 *)(param_3 + 2);
  if (param_1 + 0xd != (undefined8 *)(param_3 + 4)) {
    puVar2 = (undefined8 *)(param_3 + 6);
    if ((*(ulong *)(param_3 + 4) & 1) != 0) {
      puVar2 = *(undefined8 **)(param_3 + 6);
    }
    FUN_008ad1a4(param_1 + 0xd,puVar2,(long)(*(ulong *)(param_3 + 4) << 2) >> 3);
  }
  FUN_00850e90(param_1 + 1,(long)(*(int *)(param_2 + 0xc) * *(int *)(param_2 + 8)));
  iVar5 = *(int *)(param_2 + 8);
  if (0 < iVar5) {
    iVar4 = *(int *)(param_2 + 0xc);
    iVar8 = 0;
    puVar2 = param_1 + 2;
    do {
      if (0 < iVar4) {
        uVar6 = param_1[1];
        local_44 = 0;
        if ((int)param_3[3] < 1 && iVar8 == param_3[2]) {
          local_44 = 2;
        }
        uVar7 = 10;
        if ((uVar6 & 1) != 0) {
          uVar7 = param_1[3];
        }
        if (uVar6 >> 1 == uVar7) {
          FUN_008ad380(param_1 + 1,&local_44);
        }
        else {
          puVar3 = puVar2;
          if ((uVar6 & 1) != 0) {
            puVar3 = (undefined8 *)*puVar2;
          }
          puVar1 = (undefined4 *)((long)puVar3 + (uVar6 >> 1) * 4);
          if (puVar1 == (undefined4 *)0x0) {
LAB_008b2d90:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *puVar1 = local_44;
          param_1[1] = param_1[1] + 2;
        }
        iVar4 = *(int *)(param_2 + 0xc);
        if (1 < iVar4) {
          iVar5 = 1;
          do {
            if ((iVar8 == param_3[2]) && ((int)param_3[3] <= iVar5)) {
              local_44 = 1;
              if (iVar5 != param_3[3]) {
                local_44 = 2;
              }
            }
            else {
              local_44 = 0;
            }
            uVar7 = param_1[1];
            uVar6 = 10;
            if ((uVar7 & 1) != 0) {
              uVar6 = param_1[3];
            }
            if (uVar7 >> 1 == uVar6) {
              FUN_008ad380(param_1 + 1,&local_44);
            }
            else {
              puVar3 = puVar2;
              if ((uVar7 & 1) != 0) {
                puVar3 = (undefined8 *)*puVar2;
              }
              puVar1 = (undefined4 *)((long)puVar3 + (uVar7 >> 1) * 4);
              if (puVar1 == (undefined4 *)0x0) goto LAB_008b2d90;
              *puVar1 = local_44;
              param_1[1] = param_1[1] + 2;
            }
            iVar4 = *(int *)(param_2 + 0xc);
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar4);
        }
        iVar5 = *(int *)(param_2 + 8);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar5);
  }
  local_48[0] = 0;
  FUN_008a9388(param_1 + 0x16,(long)iVar5,local_48);
  if (param_3[3] == 0) {
    uVar6 = (ulong)(int)param_3[2];
    if ((ulong)param_1[0x17] <= uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector_bool.h:297: libc++ Hardening assertion __n < size() failed: vector<bool>::operator[] index out of bounds\n"
                );
    }
    uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[0x16] + uVar7) = *(ulong *)(param_1[0x16] + uVar7) | 1L << (uVar6 & 0x3f);
  }
  param_1[0x19] = *(undefined8 *)(param_2 + 0x30);
  return;
}


// ===== 008b2dc4  FUN_008b2dc4 =====

void FUN_008b2dc4(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  iVar1 = *(int *)(param_1 + 8);
  if (0 < iVar1) {
    iVar2 = *(int *)(param_1 + 0xc);
    lVar6 = 0;
    do {
      if (0 < iVar2) {
        lVar7 = 0;
        bVar3 = true;
        do {
          if (bVar3) {
            iVar1 = FUN_007cc028(param_2,lVar6,lVar7);
            iVar2 = *(int *)(param_1 + 0xc);
            uVar5 = lVar7 + (ulong)(uint)((int)lVar6 * iVar2);
            if (0x1f < (uint)uVar5) {
LAB_008b2eb0:
                    /* WARNING: Subroutine does not return */
              FUN_005f55a8("bitset set argument out of range");
            }
            uVar4 = 1L << (uVar5 & 0x3f);
            uVar5 = *(ulong *)(param_1 + 0x30);
            if (iVar1 == 0) goto LAB_008b2e8c;
            uVar5 = uVar5 | uVar4;
            bVar3 = true;
          }
          else {
            uVar5 = lVar7 + (ulong)(uint)((int)lVar6 * iVar2);
            if (0x1f < (uint)uVar5) goto LAB_008b2eb0;
            uVar4 = 1L << (uVar5 & 0x3f);
            uVar5 = *(ulong *)(param_1 + 0x30);
LAB_008b2e8c:
            bVar3 = false;
            uVar5 = uVar5 & (uVar4 ^ 0xffffffffffffffff);
          }
          lVar7 = lVar7 + 1;
          *(ulong *)(param_1 + 0x30) = uVar5;
        } while (lVar7 < iVar2);
        iVar1 = *(int *)(param_1 + 8);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
  }
  return;
}


// ===== 008b2ebc  FUN_008b2ebc =====

void FUN_008b2ebc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  byte local_78;
  undefined7 uStack_77;
  void *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar4 = param_1 + 0xd;
  *puVar4 = 0;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  uVar3 = DAT_001f5200;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = 0;
  param_1[8] = 0;
  *param_1 = uVar3;
  *(undefined4 *)(param_1 + 1) = 2;
  FUN_008ad510(param_1 + 2,&DAT_00224728,2);
  FUN_008a9840(puVar4,4);
  puVar5 = (undefined4 *)*puVar4;
  if ((undefined4 *)param_1[0xe] != puVar5) {
    *puVar5 = 0;
    FUN_00850d54(&local_78,&DAT_001dcd7e,2);
    if ((byte *)(puVar5 + 2) == &local_78) {
      if ((local_78 & 1) != 0) {
        operator_delete(local_70);
      }
    }
    else {
      if ((*(byte *)(puVar5 + 2) & 1) != 0) {
        operator_delete(*(void **)(puVar5 + 4));
      }
      *(ulong *)(puVar5 + 2) = CONCAT71(uStack_77,local_78);
      *(undefined8 *)(puVar5 + 0xc) = local_50;
      *(undefined8 *)(puVar5 + 6) = uStack_68;
      *(void **)(puVar5 + 4) = local_70;
      *(undefined8 *)(puVar5 + 10) = uStack_58;
      *(undefined8 *)(puVar5 + 8) = uStack_60;
    }
    FUN_007d51b0(puVar5 + 0x14,&DAT_00224730,2);
    FUN_007d51b0(puVar5 + 0xe,&DAT_00224738,1);
    lVar1 = param_1[0xd];
    if (1 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
      *(undefined4 *)(lVar1 + 0x68) = 0;
      FUN_00850d54(&local_78,&DAT_001dcd7e,2);
      if ((byte *)(lVar1 + 0x70) == &local_78) {
        if ((local_78 & 1) != 0) {
          operator_delete(local_70);
        }
      }
      else {
        if ((*(byte *)(lVar1 + 0x70) & 1) != 0) {
          operator_delete(*(void **)(lVar1 + 0x78));
        }
        *(ulong *)(lVar1 + 0x70) = CONCAT71(uStack_77,local_78);
        *(undefined8 *)(lVar1 + 0x98) = local_50;
        *(undefined8 *)(lVar1 + 0x90) = uStack_58;
        *(undefined8 *)(lVar1 + 0x88) = uStack_60;
        *(undefined8 *)(lVar1 + 0x80) = uStack_68;
        *(void **)(lVar1 + 0x78) = local_70;
      }
      FUN_007d51b0(lVar1 + 0xb8,&DAT_0022473c,2);
      lVar1 = param_1[0xd];
      if (2 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
        *(undefined4 *)(lVar1 + 0xd0) = 1;
        FUN_00850d54(&local_78,&DAT_001c92a9,2);
        if ((byte *)(lVar1 + 0xd8) == &local_78) {
          if ((local_78 & 1) != 0) {
            operator_delete(local_70);
          }
        }
        else {
          if ((*(byte *)(lVar1 + 0xd8) & 1) != 0) {
            operator_delete(*(void **)(lVar1 + 0xe0));
          }
          *(ulong *)(lVar1 + 0xd8) = CONCAT71(uStack_77,local_78);
          *(undefined8 *)(lVar1 + 0x100) = local_50;
          *(undefined8 *)(lVar1 + 0xe8) = uStack_68;
          *(void **)(lVar1 + 0xe0) = local_70;
          *(undefined8 *)(lVar1 + 0xf8) = uStack_58;
          *(undefined8 *)(lVar1 + 0xf0) = uStack_60;
        }
        FUN_007d51b0(lVar1 + 0x120,&DAT_00224744,2);
        FUN_007d51b0(lVar1 + 0x108,&DAT_0022474c,1);
        lVar1 = param_1[0xd];
        if (3 < (ulong)((param_1[0xe] - lVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
          *(undefined4 *)(lVar1 + 0x138) = 1;
          FUN_00850d54(&local_78,&DAT_001c92a9,2);
          if ((byte *)(lVar1 + 0x140) == &local_78) {
            if ((local_78 & 1) != 0) {
              operator_delete(local_70);
            }
          }
          else {
            if ((*(byte *)(lVar1 + 0x140) & 1) != 0) {
              operator_delete(*(void **)(lVar1 + 0x148));
            }
            *(ulong *)(lVar1 + 0x140) = CONCAT71(uStack_77,local_78);
            *(undefined8 *)(lVar1 + 0x168) = local_50;
            *(undefined8 *)(lVar1 + 0x150) = uStack_68;
            *(void **)(lVar1 + 0x148) = local_70;
            *(undefined8 *)(lVar1 + 0x160) = uStack_58;
            *(undefined8 *)(lVar1 + 0x158) = uStack_60;
          }
          FUN_007d51b0(lVar1 + 0x188,&DAT_00224750,2);
          if (*(long *)(lVar2 + 0x28) == local_48) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 008b3238  FUN_008b3238 =====

void FUN_008b3238(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  byte local_78;
  undefined7 uStack_77;
  void *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar4 = param_1 + 0xd;
  *plVar4 = 0;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  uVar3 = DAT_001f5728;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = 0;
  param_1[8] = 0;
  *param_1 = uVar3;
  *(undefined4 *)(param_1 + 1) = 2;
  FUN_008ad510(param_1 + 2,&DAT_00224758,4);
  FUN_008a9840(plVar4,6);
  lVar5 = *plVar4;
  if (1 < (ulong)((param_1[0xe] - lVar5 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
    *(undefined8 *)(lVar5 + 0x68) = 0;
    FUN_00850d54(&local_78,&DAT_001bdade,4);
    if ((byte *)(lVar5 + 0x70) == &local_78) {
      if ((local_78 & 1) != 0) {
        operator_delete(local_70);
      }
    }
    else {
      if ((*(byte *)(lVar5 + 0x70) & 1) != 0) {
        operator_delete(*(void **)(lVar5 + 0x78));
      }
      *(ulong *)(lVar5 + 0x70) = CONCAT71(uStack_77,local_78);
      *(undefined8 *)(lVar5 + 0x98) = local_50;
      *(undefined8 *)(lVar5 + 0x90) = uStack_58;
      *(undefined8 *)(lVar5 + 0x88) = uStack_60;
      *(undefined8 *)(lVar5 + 0x80) = uStack_68;
      *(void **)(lVar5 + 0x78) = local_70;
    }
    FUN_007d51b0(lVar5 + 0xb8,&DAT_00224768,2);
    uVar3 = DAT_001f58a0;
    lVar5 = param_1[0xd];
    if (4 < (ulong)((param_1[0xe] - lVar5 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
      *(undefined8 *)(lVar5 + 0x1a0) = DAT_001f58a0;
      FUN_00850d54(&local_78,&DAT_001dcd79,4);
      if ((byte *)(lVar5 + 0x1a8) == &local_78) {
        if ((local_78 & 1) != 0) {
          operator_delete(local_70);
        }
      }
      else {
        if ((*(byte *)(lVar5 + 0x1a8) & 1) != 0) {
          operator_delete(*(void **)(lVar5 + 0x1b0));
        }
        *(ulong *)(lVar5 + 0x1a8) = CONCAT71(uStack_77,local_78);
        *(undefined8 *)(lVar5 + 0x1d0) = local_50;
        *(undefined8 *)(lVar5 + 0x1b8) = uStack_68;
        *(void **)(lVar5 + 0x1b0) = local_70;
        *(undefined8 *)(lVar5 + 0x1c8) = uStack_58;
        *(undefined8 *)(lVar5 + 0x1c0) = uStack_60;
      }
      FUN_007d51b0(lVar5 + 0x1f0,&DAT_00224770,2);
      lVar5 = param_1[0xd];
      if (2 < (ulong)((param_1[0xe] - lVar5 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
        *(undefined8 *)(lVar5 + 0xd0) = DAT_001f5170;
        FUN_00850d54(&local_78,&DAT_0019e3dc,4);
        if ((byte *)(lVar5 + 0xd8) == &local_78) {
          if ((local_78 & 1) != 0) {
            operator_delete(local_70);
          }
        }
        else {
          if ((*(byte *)(lVar5 + 0xd8) & 1) != 0) {
            operator_delete(*(void **)(lVar5 + 0xe0));
          }
          *(ulong *)(lVar5 + 0xd8) = CONCAT71(uStack_77,local_78);
          *(undefined8 *)(lVar5 + 0x100) = local_50;
          *(undefined8 *)(lVar5 + 0xe8) = uStack_68;
          *(void **)(lVar5 + 0xe0) = local_70;
          *(undefined8 *)(lVar5 + 0xf8) = uStack_58;
          *(undefined8 *)(lVar5 + 0xf0) = uStack_60;
        }
        FUN_007d51b0(lVar5 + 0x120,&DAT_00224778,2);
        FUN_007d51b0(lVar5 + 0x108,&DAT_00224780,1);
        lVar5 = param_1[0xd];
        if (5 < (ulong)((param_1[0xe] - lVar5 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
          *(undefined8 *)(lVar5 + 0x208) = 0x100000001;
          FUN_00850d54(&local_78,&DAT_001d7496,4);
          if ((byte *)(lVar5 + 0x210) == &local_78) {
            if ((local_78 & 1) != 0) {
              operator_delete(local_70);
            }
          }
          else {
            if ((*(byte *)(lVar5 + 0x210) & 1) != 0) {
              operator_delete(*(void **)(lVar5 + 0x218));
            }
            *(ulong *)(lVar5 + 0x210) = CONCAT71(uStack_77,local_78);
            *(undefined8 *)(lVar5 + 0x238) = local_50;
            *(undefined8 *)(lVar5 + 0x220) = uStack_68;
            *(void **)(lVar5 + 0x218) = local_70;
            *(undefined8 *)(lVar5 + 0x230) = uStack_58;
            *(undefined8 *)(lVar5 + 0x228) = uStack_60;
          }
          FUN_007d51b0(lVar5 + 600,&DAT_00224784,2);
          FUN_007d51b0(lVar5 + 0x240,&DAT_0022478c,1);
          puVar1 = (undefined8 *)param_1[0xd];
          if ((undefined8 *)param_1[0xe] != puVar1) {
            *puVar1 = 0;
            FUN_00850d54(&local_78,&DAT_001bdade,4);
            if ((byte *)(puVar1 + 1) == &local_78) {
              if ((local_78 & 1) != 0) {
                operator_delete(local_70);
              }
            }
            else {
              if ((*(byte *)(puVar1 + 1) & 1) != 0) {
                operator_delete((void *)puVar1[2]);
              }
              puVar1[1] = CONCAT71(uStack_77,local_78);
              puVar1[6] = local_50;
              puVar1[3] = uStack_68;
              puVar1[2] = local_70;
              puVar1[5] = uStack_58;
              puVar1[4] = uStack_60;
            }
            FUN_007d51b0(puVar1 + 10,&DAT_00224790,2);
            FUN_007d51b0(puVar1 + 7,&DAT_00224798,1);
            lVar5 = param_1[0xd];
            if (3 < (ulong)((param_1[0xe] - lVar5 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
              *(undefined8 *)(lVar5 + 0x138) = uVar3;
              FUN_00850d54(&local_78,&DAT_001dcd79,4);
              if ((byte *)(lVar5 + 0x140) == &local_78) {
                if ((local_78 & 1) != 0) {
                  operator_delete(local_70);
                }
              }
              else {
                if ((*(byte *)(lVar5 + 0x140) & 1) != 0) {
                  operator_delete(*(void **)(lVar5 + 0x148));
                }
                *(ulong *)(lVar5 + 0x140) = CONCAT71(uStack_77,local_78);
                *(undefined8 *)(lVar5 + 0x168) = local_50;
                *(undefined8 *)(lVar5 + 0x150) = uStack_68;
                *(void **)(lVar5 + 0x148) = local_70;
                *(undefined8 *)(lVar5 + 0x160) = uStack_58;
                *(undefined8 *)(lVar5 + 0x158) = uStack_60;
              }
              FUN_007d51b0(lVar5 + 0x188,&DAT_0022479c,2);
              FUN_007d51b0(lVar5 + 0x170,&DAT_002247a4,1);
              if (*(long *)(lVar2 + 0x28) == local_48) {
                return;
              }
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 008b3728  FUN_008b3728 =====

void FUN_008b3728(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  byte local_88;
  undefined7 uStack_87;
  void *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar6 = param_1 + 0xd;
  *plVar6 = 0;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  uVar5 = DAT_001f5b60;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = 0;
  param_1[8] = 0;
  *param_1 = uVar5;
  *(undefined4 *)(param_1 + 1) = 2;
  FUN_008ad510(param_1 + 2,&DAT_002247a8,6);
  FUN_008a9840(plVar6,10);
  lVar7 = *plVar6;
  if (1 < (ulong)((param_1[0xe] - lVar7 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
    *(undefined8 *)(lVar7 + 0x68) = 0;
    FUN_00850d54(&local_88,"SSS---",6);
    if ((byte *)(lVar7 + 0x70) == &local_88) {
      if ((local_88 & 1) != 0) {
        operator_delete(local_80);
      }
    }
    else {
      if ((*(byte *)(lVar7 + 0x70) & 1) != 0) {
        operator_delete(*(void **)(lVar7 + 0x78));
      }
      *(ulong *)(lVar7 + 0x70) = CONCAT71(uStack_87,local_88);
      *(undefined8 *)(lVar7 + 0x98) = local_60;
      *(undefined8 *)(lVar7 + 0x90) = uStack_68;
      *(undefined8 *)(lVar7 + 0x88) = uStack_70;
      *(undefined8 *)(lVar7 + 0x80) = uStack_78;
      *(void **)(lVar7 + 0x78) = local_80;
    }
    FUN_007d51b0(lVar7 + 0xb8,&DAT_002247c0,2);
    uVar5 = DAT_001f58a0;
    lVar7 = param_1[0xd];
    if (6 < (ulong)((param_1[0xe] - lVar7 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
      *(undefined8 *)(lVar7 + 0x270) = DAT_001f58a0;
      FUN_00850d54(&local_88,"---SSS",6);
      if ((byte *)(lVar7 + 0x278) == &local_88) {
        if ((local_88 & 1) != 0) {
          operator_delete(local_80);
        }
      }
      else {
        if ((*(byte *)(lVar7 + 0x278) & 1) != 0) {
          operator_delete(*(void **)(lVar7 + 0x280));
        }
        *(ulong *)(lVar7 + 0x278) = CONCAT71(uStack_87,local_88);
        *(undefined8 *)(lVar7 + 0x2a0) = local_60;
        *(undefined8 *)(lVar7 + 0x288) = uStack_78;
        *(void **)(lVar7 + 0x280) = local_80;
        *(undefined8 *)(lVar7 + 0x298) = uStack_68;
        *(undefined8 *)(lVar7 + 0x290) = uStack_70;
      }
      FUN_007d51b0(lVar7 + 0x2c0,&DAT_002247c8,2);
      uVar4 = DAT_001f5200;
      lVar7 = param_1[0xd];
      if (3 < (ulong)((param_1[0xe] - lVar7 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
        *(undefined8 *)(lVar7 + 0x138) = DAT_001f5200;
        FUN_00850d54(&local_88,"--D---",6);
        if ((byte *)(lVar7 + 0x140) == &local_88) {
          if ((local_88 & 1) != 0) {
            operator_delete(local_80);
          }
        }
        else {
          if ((*(byte *)(lVar7 + 0x140) & 1) != 0) {
            operator_delete(*(void **)(lVar7 + 0x148));
          }
          *(ulong *)(lVar7 + 0x140) = CONCAT71(uStack_87,local_88);
          *(undefined8 *)(lVar7 + 0x168) = local_60;
          *(undefined8 *)(lVar7 + 0x150) = uStack_78;
          *(void **)(lVar7 + 0x148) = local_80;
          *(undefined8 *)(lVar7 + 0x160) = uStack_68;
          *(undefined8 *)(lVar7 + 0x158) = uStack_70;
        }
        FUN_007d51b0(lVar7 + 0x188,&DAT_002247d0,2);
        FUN_007d51b0(lVar7 + 0x170,&DAT_002247d8,1);
        uVar3 = DAT_001f50d0;
        lVar7 = param_1[0xd];
        if (8 < (ulong)((param_1[0xe] - lVar7 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
          *(undefined8 *)(lVar7 + 0x340) = DAT_001f50d0;
          FUN_00850d54(&local_88,"-----D",6);
          if ((byte *)(lVar7 + 0x348) == &local_88) {
            if ((local_88 & 1) != 0) {
              operator_delete(local_80);
            }
          }
          else {
            if ((*(byte *)(lVar7 + 0x348) & 1) != 0) {
              operator_delete(*(void **)(lVar7 + 0x350));
            }
            *(ulong *)(lVar7 + 0x348) = CONCAT71(uStack_87,local_88);
            *(undefined8 *)(lVar7 + 0x370) = local_60;
            *(undefined8 *)(lVar7 + 0x358) = uStack_78;
            *(void **)(lVar7 + 0x350) = local_80;
            *(undefined8 *)(lVar7 + 0x368) = uStack_68;
            *(undefined8 *)(lVar7 + 0x360) = uStack_70;
          }
          FUN_007d51b0(lVar7 + 0x390,&DAT_002247dc,2);
          FUN_007d51b0(lVar7 + 0x378,&DAT_002247e4,1);
          lVar7 = param_1[0xd];
          if (2 < (ulong)((param_1[0xe] - lVar7 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
            *(undefined8 *)(lVar7 + 0xd0) = DAT_001f5170;
            FUN_00850d54(&local_88,"-DS---",6);
            if ((byte *)(lVar7 + 0xd8) == &local_88) {
              if ((local_88 & 1) != 0) {
                operator_delete(local_80);
              }
            }
            else {
              if ((*(byte *)(lVar7 + 0xd8) & 1) != 0) {
                operator_delete(*(void **)(lVar7 + 0xe0));
              }
              *(ulong *)(lVar7 + 0xd8) = CONCAT71(uStack_87,local_88);
              *(undefined8 *)(lVar7 + 0x100) = local_60;
              *(undefined8 *)(lVar7 + 0xe8) = uStack_78;
              *(void **)(lVar7 + 0xe0) = local_80;
              *(undefined8 *)(lVar7 + 0xf8) = uStack_68;
              *(undefined8 *)(lVar7 + 0xf0) = uStack_70;
            }
            FUN_007d51b0(lVar7 + 0x120,&DAT_002247e8,2);
            FUN_007d51b0(lVar7 + 0x108,&DAT_002247f0,1);
            lVar7 = param_1[0xd];
            if (7 < (ulong)((param_1[0xe] - lVar7 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
              *(undefined8 *)(lVar7 + 0x2d8) = 0x100000001;
              FUN_00850d54(&local_88,"----DS",6);
              if ((byte *)(lVar7 + 0x2e0) == &local_88) {
                if ((local_88 & 1) != 0) {
                  operator_delete(local_80);
                }
              }
              else {
                if ((*(byte *)(lVar7 + 0x2e0) & 1) != 0) {
                  operator_delete(*(void **)(lVar7 + 0x2e8));
                }
                *(ulong *)(lVar7 + 0x2e0) = CONCAT71(uStack_87,local_88);
                *(undefined8 *)(lVar7 + 0x308) = local_60;
                *(undefined8 *)(lVar7 + 0x2f0) = uStack_78;
                *(void **)(lVar7 + 0x2e8) = local_80;
                *(undefined8 *)(lVar7 + 0x300) = uStack_68;
                *(undefined8 *)(lVar7 + 0x2f8) = uStack_70;
              }
              FUN_007d51b0(lVar7 + 0x328,&DAT_002247f4,2);
              FUN_007d51b0(lVar7 + 0x310,&DAT_002247fc,1);
              lVar7 = param_1[0xd];
              if (4 < (ulong)((param_1[0xe] - lVar7 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                *(undefined8 *)(lVar7 + 0x1a0) = uVar4;
                FUN_00850d54(&local_88,"--D---",6);
                if ((byte *)(lVar7 + 0x1a8) == &local_88) {
                  if ((local_88 & 1) != 0) {
                    operator_delete(local_80);
                  }
                }
                else {
                  if ((*(byte *)(lVar7 + 0x1a8) & 1) != 0) {
                    operator_delete(*(void **)(lVar7 + 0x1b0));
                  }
                  *(ulong *)(lVar7 + 0x1a8) = CONCAT71(uStack_87,local_88);
                  *(undefined8 *)(lVar7 + 0x1d0) = local_60;
                  *(undefined8 *)(lVar7 + 0x1b8) = uStack_78;
                  *(void **)(lVar7 + 0x1b0) = local_80;
                  *(undefined8 *)(lVar7 + 0x1c8) = uStack_68;
                  *(undefined8 *)(lVar7 + 0x1c0) = uStack_70;
                }
                FUN_007d51b0(lVar7 + 0x1f0,&DAT_00224800,2);
                FUN_007d51b0(lVar7 + 0x1d8,&DAT_00224808,1);
                lVar7 = param_1[0xd];
                if (9 < (ulong)((param_1[0xe] - lVar7 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                  *(undefined8 *)(lVar7 + 0x3a8) = uVar3;
                  FUN_00850d54(&local_88,"-----D",6);
                  if ((byte *)(lVar7 + 0x3b0) == &local_88) {
                    if ((local_88 & 1) != 0) {
                      operator_delete(local_80);
                    }
                  }
                  else {
                    if ((*(byte *)(lVar7 + 0x3b0) & 1) != 0) {
                      operator_delete(*(void **)(lVar7 + 0x3b8));
                    }
                    *(ulong *)(lVar7 + 0x3b0) = CONCAT71(uStack_87,local_88);
                    *(undefined8 *)(lVar7 + 0x3d8) = local_60;
                    *(undefined8 *)(lVar7 + 0x3c0) = uStack_78;
                    *(void **)(lVar7 + 0x3b8) = local_80;
                    *(undefined8 *)(lVar7 + 0x3d0) = uStack_68;
                    *(undefined8 *)(lVar7 + 0x3c8) = uStack_70;
                  }
                  FUN_007d51b0(lVar7 + 0x3f8,&DAT_0022480c,2);
                  FUN_007d51b0(lVar7 + 0x3e0,&DAT_00224814,1);
                  puVar1 = (undefined8 *)param_1[0xd];
                  if ((undefined8 *)param_1[0xe] != puVar1) {
                    *puVar1 = 0;
                    FUN_00850d54(&local_88,"SSS---",6);
                    if ((byte *)(puVar1 + 1) == &local_88) {
                      if ((local_88 & 1) != 0) {
                        operator_delete(local_80);
                      }
                    }
                    else {
                      if ((*(byte *)(puVar1 + 1) & 1) != 0) {
                        operator_delete((void *)puVar1[2]);
                      }
                      puVar1[1] = CONCAT71(uStack_87,local_88);
                      puVar1[6] = local_60;
                      puVar1[3] = uStack_78;
                      puVar1[2] = local_80;
                      puVar1[5] = uStack_68;
                      puVar1[4] = uStack_70;
                    }
                    FUN_007d51b0(puVar1 + 10,&DAT_00224818,2);
                    FUN_007d51b0(puVar1 + 7,&DAT_00224820,1);
                    lVar7 = param_1[0xd];
                    if (5 < (ulong)((param_1[0xe] - lVar7 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                      *(undefined8 *)(lVar7 + 0x208) = uVar5;
                      FUN_00850d54(&local_88,"---SSS",6);
                      if ((byte *)(lVar7 + 0x210) == &local_88) {
                        if ((local_88 & 1) != 0) {
                          operator_delete(local_80);
                        }
                      }
                      else {
                        if ((*(byte *)(lVar7 + 0x210) & 1) != 0) {
                          operator_delete(*(void **)(lVar7 + 0x218));
                        }
                        *(ulong *)(lVar7 + 0x210) = CONCAT71(uStack_87,local_88);
                        *(undefined8 *)(lVar7 + 0x238) = local_60;
                        *(undefined8 *)(lVar7 + 0x220) = uStack_78;
                        *(void **)(lVar7 + 0x218) = local_80;
                        *(undefined8 *)(lVar7 + 0x230) = uStack_68;
                        *(undefined8 *)(lVar7 + 0x228) = uStack_70;
                      }
                      FUN_007d51b0(lVar7 + 600,&DAT_00224824,2);
                      FUN_007d51b0(lVar7 + 0x240,&DAT_0022482c,1);
                      if (*(long *)(lVar2 + 0x28) == local_58) {
                        return;
                      }
                    /* WARNING: Subroutine does not return */
                      __stack_chk_fail();
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
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 008b3ef8  FUN_008b3ef8 =====

void FUN_008b3ef8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  byte local_88;
  undefined7 uStack_87;
  void *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar5 = param_1 + 0xd;
  *plVar5 = 0;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  uVar4 = DAT_001f55d0;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = 0;
  param_1[8] = 0;
  *param_1 = uVar4;
  *(undefined4 *)(param_1 + 1) = 3;
  FUN_008ad510(param_1 + 2,&DAT_00224830,3);
  FUN_008a9840(plVar5,6);
  lVar6 = *plVar5;
  if (1 < (ulong)((param_1[0xe] - lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
    *(undefined8 *)(lVar6 + 0x68) = 0;
    FUN_00850d54(&local_88,&DAT_001a158a,3);
    if ((byte *)(lVar6 + 0x70) == &local_88) {
      if ((local_88 & 1) != 0) {
        operator_delete(local_80);
      }
    }
    else {
      if ((*(byte *)(lVar6 + 0x70) & 1) != 0) {
        operator_delete(*(void **)(lVar6 + 0x78));
      }
      *(ulong *)(lVar6 + 0x70) = CONCAT71(uStack_87,local_88);
      *(undefined8 *)(lVar6 + 0x98) = local_60;
      *(undefined8 *)(lVar6 + 0x90) = uStack_68;
      *(undefined8 *)(lVar6 + 0x88) = uStack_70;
      *(undefined8 *)(lVar6 + 0x80) = uStack_78;
      *(void **)(lVar6 + 0x78) = local_80;
    }
    FUN_007d51b0(lVar6 + 0xb8,&DAT_0022483c,3);
    uVar4 = DAT_001f58a0;
    lVar6 = param_1[0xd];
    if (3 < (ulong)((param_1[0xe] - lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
      *(undefined8 *)(lVar6 + 0x138) = DAT_001f58a0;
      FUN_00850d54(&local_88,&DAT_0019e3e1,3);
      if ((byte *)(lVar6 + 0x140) == &local_88) {
        if ((local_88 & 1) != 0) {
          operator_delete(local_80);
        }
      }
      else {
        if ((*(byte *)(lVar6 + 0x140) & 1) != 0) {
          operator_delete(*(void **)(lVar6 + 0x148));
        }
        *(ulong *)(lVar6 + 0x140) = CONCAT71(uStack_87,local_88);
        *(undefined8 *)(lVar6 + 0x168) = local_60;
        *(undefined8 *)(lVar6 + 0x150) = uStack_78;
        *(void **)(lVar6 + 0x148) = local_80;
        *(undefined8 *)(lVar6 + 0x160) = uStack_68;
        *(undefined8 *)(lVar6 + 0x158) = uStack_70;
      }
      FUN_007d51b0(lVar6 + 0x188,&DAT_00224848,3);
      uVar3 = DAT_001f5360;
      lVar6 = param_1[0xd];
      if (5 < (ulong)((param_1[0xe] - lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
        *(undefined8 *)(lVar6 + 0x208) = DAT_001f5360;
        FUN_00850d54(&local_88,&DAT_001b7c97,3);
        if ((byte *)(lVar6 + 0x210) == &local_88) {
          if ((local_88 & 1) != 0) {
            operator_delete(local_80);
          }
        }
        else {
          if ((*(byte *)(lVar6 + 0x210) & 1) != 0) {
            operator_delete(*(void **)(lVar6 + 0x218));
          }
          *(ulong *)(lVar6 + 0x210) = CONCAT71(uStack_87,local_88);
          *(undefined8 *)(lVar6 + 0x238) = local_60;
          *(undefined8 *)(lVar6 + 0x220) = uStack_78;
          *(void **)(lVar6 + 0x218) = local_80;
          *(undefined8 *)(lVar6 + 0x230) = uStack_68;
          *(undefined8 *)(lVar6 + 0x228) = uStack_70;
        }
        FUN_007d51b0(lVar6 + 600,&DAT_00224854,3);
        puVar1 = (undefined8 *)param_1[0xd];
        if ((undefined8 *)param_1[0xe] != puVar1) {
          *puVar1 = 0;
          FUN_00850d54(&local_88,&DAT_001a158a,3);
          if ((byte *)(puVar1 + 1) == &local_88) {
            if ((local_88 & 1) != 0) {
              operator_delete(local_80);
            }
          }
          else {
            if ((*(byte *)(puVar1 + 1) & 1) != 0) {
              operator_delete((void *)puVar1[2]);
            }
            puVar1[1] = CONCAT71(uStack_87,local_88);
            puVar1[6] = local_60;
            puVar1[3] = uStack_78;
            puVar1[2] = local_80;
            puVar1[5] = uStack_68;
            puVar1[4] = uStack_70;
          }
          FUN_007d51b0(puVar1 + 10,&DAT_00224860,3);
          FUN_007d51b0(puVar1 + 7,&DAT_0022486c,1);
          lVar6 = param_1[0xd];
          if (2 < (ulong)((param_1[0xe] - lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
            *(undefined8 *)(lVar6 + 0xd0) = uVar4;
            FUN_00850d54(&local_88,&DAT_0019e3e1,3);
            if ((byte *)(lVar6 + 0xd8) == &local_88) {
              if ((local_88 & 1) != 0) {
                operator_delete(local_80);
              }
            }
            else {
              if ((*(byte *)(lVar6 + 0xd8) & 1) != 0) {
                operator_delete(*(void **)(lVar6 + 0xe0));
              }
              *(ulong *)(lVar6 + 0xd8) = CONCAT71(uStack_87,local_88);
              *(undefined8 *)(lVar6 + 0x100) = local_60;
              *(undefined8 *)(lVar6 + 0xe8) = uStack_78;
              *(void **)(lVar6 + 0xe0) = local_80;
              *(undefined8 *)(lVar6 + 0xf8) = uStack_68;
              *(undefined8 *)(lVar6 + 0xf0) = uStack_70;
            }
            FUN_007d51b0(lVar6 + 0x120,&DAT_00224870,3);
            FUN_007d51b0(lVar6 + 0x108,&DAT_0022487c,1);
            lVar6 = param_1[0xd];
            if (4 < (ulong)((param_1[0xe] - lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
              *(undefined8 *)(lVar6 + 0x1a0) = uVar3;
              FUN_00850d54(&local_88,&DAT_001b7c97,3);
              if ((byte *)(lVar6 + 0x1a8) == &local_88) {
                if ((local_88 & 1) != 0) {
                  operator_delete(local_80);
                }
              }
              else {
                if ((*(byte *)(lVar6 + 0x1a8) & 1) != 0) {
                  operator_delete(*(void **)(lVar6 + 0x1b0));
                }
                *(ulong *)(lVar6 + 0x1a8) = CONCAT71(uStack_87,local_88);
                *(undefined8 *)(lVar6 + 0x1d0) = local_60;
                *(undefined8 *)(lVar6 + 0x1b8) = uStack_78;
                *(void **)(lVar6 + 0x1b0) = local_80;
                *(undefined8 *)(lVar6 + 0x1c8) = uStack_68;
                *(undefined8 *)(lVar6 + 0x1c0) = uStack_70;
              }
              FUN_007d51b0(lVar6 + 0x1f0,&DAT_00224880,3);
              FUN_007d51b0(lVar6 + 0x1d8,&DAT_0022488c,1);
              if (*(long *)(lVar2 + 0x28) == local_58) {
                return;
              }
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 008b43d0  FUN_008b43d0 =====

void FUN_008b43d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  byte local_88;
  undefined7 uStack_87;
  void *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar5 = param_1 + 0xd;
  *plVar5 = 0;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  uVar4 = DAT_001f5b60;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = 0;
  param_1[8] = 0;
  *param_1 = uVar4;
  *(undefined4 *)(param_1 + 1) = 3;
  FUN_008ad510(param_1 + 2,&DAT_00224890,6);
  FUN_008a9840(plVar5,9);
  lVar6 = *plVar5;
  if (1 < (ulong)((param_1[0xe] - lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
    *(undefined8 *)(lVar6 + 0x68) = 0;
    FUN_00850d54(&local_88,"SS----",6);
    if ((byte *)(lVar6 + 0x70) == &local_88) {
      if ((local_88 & 1) != 0) {
        operator_delete(local_80);
      }
    }
    else {
      if ((*(byte *)(lVar6 + 0x70) & 1) != 0) {
        operator_delete(*(void **)(lVar6 + 0x78));
      }
      *(ulong *)(lVar6 + 0x70) = CONCAT71(uStack_87,local_88);
      *(undefined8 *)(lVar6 + 0x98) = local_60;
      *(undefined8 *)(lVar6 + 0x90) = uStack_68;
      *(undefined8 *)(lVar6 + 0x88) = uStack_70;
      *(undefined8 *)(lVar6 + 0x80) = uStack_78;
      *(void **)(lVar6 + 0x78) = local_80;
    }
    FUN_007d51b0(lVar6 + 0xb8,&DAT_002248a8,3);
    uVar4 = DAT_001f58a0;
    lVar6 = param_1[0xd];
    if (4 < (ulong)((param_1[0xe] - lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
      *(undefined8 *)(lVar6 + 0x1a0) = DAT_001f58a0;
      FUN_00850d54(&local_88,"--SS--",6);
      if ((byte *)(lVar6 + 0x1a8) == &local_88) {
        if ((local_88 & 1) != 0) {
          operator_delete(local_80);
        }
      }
      else {
        if ((*(byte *)(lVar6 + 0x1a8) & 1) != 0) {
          operator_delete(*(void **)(lVar6 + 0x1b0));
        }
        *(ulong *)(lVar6 + 0x1a8) = CONCAT71(uStack_87,local_88);
        *(undefined8 *)(lVar6 + 0x1d0) = local_60;
        *(undefined8 *)(lVar6 + 0x1b8) = uStack_78;
        *(void **)(lVar6 + 0x1b0) = local_80;
        *(undefined8 *)(lVar6 + 0x1c8) = uStack_68;
        *(undefined8 *)(lVar6 + 0x1c0) = uStack_70;
      }
      FUN_007d51b0(lVar6 + 0x1f0,&DAT_002248b4,3);
      uVar3 = DAT_001f5360;
      lVar6 = param_1[0xd];
      if (7 < (ulong)((param_1[0xe] - lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
        *(undefined8 *)(lVar6 + 0x2d8) = DAT_001f5360;
        FUN_00850d54(&local_88,"----SS",6);
        if ((byte *)(lVar6 + 0x2e0) == &local_88) {
          if ((local_88 & 1) != 0) {
            operator_delete(local_80);
          }
        }
        else {
          if ((*(byte *)(lVar6 + 0x2e0) & 1) != 0) {
            operator_delete(*(void **)(lVar6 + 0x2e8));
          }
          *(ulong *)(lVar6 + 0x2e0) = CONCAT71(uStack_87,local_88);
          *(undefined8 *)(lVar6 + 0x308) = local_60;
          *(undefined8 *)(lVar6 + 0x2f0) = uStack_78;
          *(void **)(lVar6 + 0x2e8) = local_80;
          *(undefined8 *)(lVar6 + 0x300) = uStack_68;
          *(undefined8 *)(lVar6 + 0x2f8) = uStack_70;
        }
        FUN_007d51b0(lVar6 + 0x328,&DAT_002248c0,3);
        lVar6 = param_1[0xd];
        if (2 < (ulong)((param_1[0xe] - lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
          *(undefined8 *)(lVar6 + 0xd0) = DAT_001f5170;
          FUN_00850d54(&local_88,"-D----",6);
          if ((byte *)(lVar6 + 0xd8) == &local_88) {
            if ((local_88 & 1) != 0) {
              operator_delete(local_80);
            }
          }
          else {
            if ((*(byte *)(lVar6 + 0xd8) & 1) != 0) {
              operator_delete(*(void **)(lVar6 + 0xe0));
            }
            *(ulong *)(lVar6 + 0xd8) = CONCAT71(uStack_87,local_88);
            *(undefined8 *)(lVar6 + 0x100) = local_60;
            *(undefined8 *)(lVar6 + 0xe8) = uStack_78;
            *(void **)(lVar6 + 0xe0) = local_80;
            *(undefined8 *)(lVar6 + 0xf8) = uStack_68;
            *(undefined8 *)(lVar6 + 0xf0) = uStack_70;
          }
          FUN_007d51b0(lVar6 + 0x120,&DAT_002248cc,3);
          FUN_007d51b0(lVar6 + 0x108,&DAT_002248d8,1);
          lVar6 = param_1[0xd];
          if (5 < (ulong)((param_1[0xe] - lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
            *(undefined8 *)(lVar6 + 0x208) = 0x100000001;
            FUN_00850d54(&local_88,"---D--",6);
            if ((byte *)(lVar6 + 0x210) == &local_88) {
              if ((local_88 & 1) != 0) {
                operator_delete(local_80);
              }
            }
            else {
              if ((*(byte *)(lVar6 + 0x210) & 1) != 0) {
                operator_delete(*(void **)(lVar6 + 0x218));
              }
              *(ulong *)(lVar6 + 0x210) = CONCAT71(uStack_87,local_88);
              *(undefined8 *)(lVar6 + 0x238) = local_60;
              *(undefined8 *)(lVar6 + 0x220) = uStack_78;
              *(void **)(lVar6 + 0x218) = local_80;
              *(undefined8 *)(lVar6 + 0x230) = uStack_68;
              *(undefined8 *)(lVar6 + 0x228) = uStack_70;
            }
            FUN_007d51b0(lVar6 + 600,&DAT_002248dc,3);
            FUN_007d51b0(lVar6 + 0x240,&DAT_002248e8,1);
            lVar6 = param_1[0xd];
            if (8 < (ulong)((param_1[0xe] - lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
              *(undefined8 *)(lVar6 + 0x340) = DAT_001f54e8;
              FUN_00850d54(&local_88,"-----D",6);
              if ((byte *)(lVar6 + 0x348) == &local_88) {
                if ((local_88 & 1) != 0) {
                  operator_delete(local_80);
                }
              }
              else {
                if ((*(byte *)(lVar6 + 0x348) & 1) != 0) {
                  operator_delete(*(void **)(lVar6 + 0x350));
                }
                *(ulong *)(lVar6 + 0x348) = CONCAT71(uStack_87,local_88);
                *(undefined8 *)(lVar6 + 0x370) = local_60;
                *(undefined8 *)(lVar6 + 0x358) = uStack_78;
                *(void **)(lVar6 + 0x350) = local_80;
                *(undefined8 *)(lVar6 + 0x368) = uStack_68;
                *(undefined8 *)(lVar6 + 0x360) = uStack_70;
              }
              FUN_007d51b0(lVar6 + 0x390,&DAT_002248ec,3);
              FUN_007d51b0(lVar6 + 0x378,&DAT_002248f8,1);
              puVar1 = (undefined8 *)param_1[0xd];
              if ((undefined8 *)param_1[0xe] != puVar1) {
                *puVar1 = 0;
                FUN_00850d54(&local_88,"SS----",6);
                if ((byte *)(puVar1 + 1) == &local_88) {
                  if ((local_88 & 1) != 0) {
                    operator_delete(local_80);
                  }
                }
                else {
                  if ((*(byte *)(puVar1 + 1) & 1) != 0) {
                    operator_delete((void *)puVar1[2]);
                  }
                  puVar1[1] = CONCAT71(uStack_87,local_88);
                  puVar1[6] = local_60;
                  puVar1[3] = uStack_78;
                  puVar1[2] = local_80;
                  puVar1[5] = uStack_68;
                  puVar1[4] = uStack_70;
                }
                FUN_007d51b0(puVar1 + 10,&DAT_002248fc,3);
                FUN_007d51b0(puVar1 + 7,&DAT_00224908,1);
                lVar6 = param_1[0xd];
                if (3 < (ulong)((param_1[0xe] - lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                  *(undefined8 *)(lVar6 + 0x138) = uVar4;
                  FUN_00850d54(&local_88,"--SS--",6);
                  if ((byte *)(lVar6 + 0x140) == &local_88) {
                    if ((local_88 & 1) != 0) {
                      operator_delete(local_80);
                    }
                  }
                  else {
                    if ((*(byte *)(lVar6 + 0x140) & 1) != 0) {
                      operator_delete(*(void **)(lVar6 + 0x148));
                    }
                    *(ulong *)(lVar6 + 0x140) = CONCAT71(uStack_87,local_88);
                    *(undefined8 *)(lVar6 + 0x168) = local_60;
                    *(undefined8 *)(lVar6 + 0x150) = uStack_78;
                    *(void **)(lVar6 + 0x148) = local_80;
                    *(undefined8 *)(lVar6 + 0x160) = uStack_68;
                    *(undefined8 *)(lVar6 + 0x158) = uStack_70;
                  }
                  FUN_007d51b0(lVar6 + 0x188,&DAT_0022490c,3);
                  FUN_007d51b0(lVar6 + 0x170,&DAT_00224918,1);
                  lVar6 = param_1[0xd];
                  if (6 < (ulong)((param_1[0xe] - lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                    *(undefined8 *)(lVar6 + 0x270) = uVar3;
                    FUN_00850d54(&local_88,"----SS",6);
                    if ((byte *)(lVar6 + 0x278) == &local_88) {
                      if ((local_88 & 1) != 0) {
                        operator_delete(local_80);
                      }
                    }
                    else {
                      if ((*(byte *)(lVar6 + 0x278) & 1) != 0) {
                        operator_delete(*(void **)(lVar6 + 0x280));
                      }
                      *(ulong *)(lVar6 + 0x278) = CONCAT71(uStack_87,local_88);
                      *(undefined8 *)(lVar6 + 0x2a0) = local_60;
                      *(undefined8 *)(lVar6 + 0x288) = uStack_78;
                      *(void **)(lVar6 + 0x280) = local_80;
                      *(undefined8 *)(lVar6 + 0x298) = uStack_68;
                      *(undefined8 *)(lVar6 + 0x290) = uStack_70;
                    }
                    FUN_007d51b0(lVar6 + 0x2c0,&DAT_0022491c,3);
                    FUN_007d51b0(lVar6 + 0x2a8,&DAT_00224928,1);
                    if (*(long *)(lVar2 + 0x28) == local_58) {
                      return;
                    }
                    /* WARNING: Subroutine does not return */
                    __stack_chk_fail();
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
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 008b4ad0  FUN_008b4ad0 =====

void FUN_008b4ad0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  byte local_98;
  undefined7 uStack_97;
  void *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  plVar7 = param_1 + 0xd;
  *plVar7 = 0;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  uVar6 = DAT_001f5c90;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = 0;
  param_1[8] = 0;
  *param_1 = uVar6;
  *(undefined4 *)(param_1 + 1) = 3;
  FUN_008ad510(param_1 + 2,&DAT_0022492c,9);
  FUN_008a9840(plVar7,0xf);
  lVar8 = *plVar7;
  if (1 < (ulong)((param_1[0xe] - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
    *(undefined8 *)(lVar8 + 0x68) = 0;
    FUN_00850d54(&local_98,"SSS------",9);
    if ((byte *)(lVar8 + 0x70) == &local_98) {
      if ((local_98 & 1) != 0) {
        operator_delete(local_90);
      }
    }
    else {
      if ((*(byte *)(lVar8 + 0x70) & 1) != 0) {
        operator_delete(*(void **)(lVar8 + 0x78));
      }
      *(ulong *)(lVar8 + 0x70) = CONCAT71(uStack_97,local_98);
      *(undefined8 *)(lVar8 + 0x98) = local_70;
      *(undefined8 *)(lVar8 + 0x90) = uStack_78;
      *(undefined8 *)(lVar8 + 0x88) = uStack_80;
      *(undefined8 *)(lVar8 + 0x80) = uStack_88;
      *(void **)(lVar8 + 0x78) = local_90;
    }
    FUN_007d51b0(lVar8 + 0xb8,&DAT_00224950,3);
    uVar6 = DAT_001f58a0;
    lVar8 = param_1[0xd];
    if (6 < (ulong)((param_1[0xe] - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
      *(undefined8 *)(lVar8 + 0x270) = DAT_001f58a0;
      FUN_00850d54(&local_98,"---SSS---",9);
      if ((byte *)(lVar8 + 0x278) == &local_98) {
        if ((local_98 & 1) != 0) {
          operator_delete(local_90);
        }
      }
      else {
        if ((*(byte *)(lVar8 + 0x278) & 1) != 0) {
          operator_delete(*(void **)(lVar8 + 0x280));
        }
        *(ulong *)(lVar8 + 0x278) = CONCAT71(uStack_97,local_98);
        *(undefined8 *)(lVar8 + 0x2a0) = local_70;
        *(undefined8 *)(lVar8 + 0x288) = uStack_88;
        *(void **)(lVar8 + 0x280) = local_90;
        *(undefined8 *)(lVar8 + 0x298) = uStack_78;
        *(undefined8 *)(lVar8 + 0x290) = uStack_80;
      }
      FUN_007d51b0(lVar8 + 0x2c0,&DAT_0022495c,3);
      uVar5 = DAT_001f5360;
      lVar8 = param_1[0xd];
      if (0xb < (ulong)((param_1[0xe] - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
        *(undefined8 *)(lVar8 + 0x478) = DAT_001f5360;
        FUN_00850d54(&local_98,"------SSS",9);
        if ((byte *)(lVar8 + 0x480) == &local_98) {
          if ((local_98 & 1) != 0) {
            operator_delete(local_90);
          }
        }
        else {
          if ((*(byte *)(lVar8 + 0x480) & 1) != 0) {
            operator_delete(*(void **)(lVar8 + 0x488));
          }
          *(ulong *)(lVar8 + 0x480) = CONCAT71(uStack_97,local_98);
          *(undefined8 *)(lVar8 + 0x4a8) = local_70;
          *(undefined8 *)(lVar8 + 0x490) = uStack_88;
          *(void **)(lVar8 + 0x488) = local_90;
          *(undefined8 *)(lVar8 + 0x4a0) = uStack_78;
          *(undefined8 *)(lVar8 + 0x498) = uStack_80;
        }
        FUN_007d51b0(lVar8 + 0x4c8,&DAT_00224968,3);
        uVar4 = DAT_001f5200;
        lVar8 = param_1[0xd];
        if (3 < (ulong)((param_1[0xe] - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
          *(undefined8 *)(lVar8 + 0x138) = DAT_001f5200;
          FUN_00850d54(&local_98,"--D------",9);
          if ((byte *)(lVar8 + 0x140) == &local_98) {
            if ((local_98 & 1) != 0) {
              operator_delete(local_90);
            }
          }
          else {
            if ((*(byte *)(lVar8 + 0x140) & 1) != 0) {
              operator_delete(*(void **)(lVar8 + 0x148));
            }
            *(ulong *)(lVar8 + 0x140) = CONCAT71(uStack_97,local_98);
            *(undefined8 *)(lVar8 + 0x168) = local_70;
            *(undefined8 *)(lVar8 + 0x150) = uStack_88;
            *(void **)(lVar8 + 0x148) = local_90;
            *(undefined8 *)(lVar8 + 0x160) = uStack_78;
            *(undefined8 *)(lVar8 + 0x158) = uStack_80;
          }
          FUN_007d51b0(lVar8 + 0x188,&DAT_00224974,3);
          FUN_007d51b0(lVar8 + 0x170,&DAT_00224980,1);
          uVar3 = DAT_001f50d0;
          lVar8 = param_1[0xd];
          if (8 < (ulong)((param_1[0xe] - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
            *(undefined8 *)(lVar8 + 0x340) = DAT_001f50d0;
            FUN_00850d54(&local_98,"-----D---",9);
            if ((byte *)(lVar8 + 0x348) == &local_98) {
              if ((local_98 & 1) != 0) {
                operator_delete(local_90);
              }
            }
            else {
              if ((*(byte *)(lVar8 + 0x348) & 1) != 0) {
                operator_delete(*(void **)(lVar8 + 0x350));
              }
              *(ulong *)(lVar8 + 0x348) = CONCAT71(uStack_97,local_98);
              *(undefined8 *)(lVar8 + 0x370) = local_70;
              *(undefined8 *)(lVar8 + 0x358) = uStack_88;
              *(void **)(lVar8 + 0x350) = local_90;
              *(undefined8 *)(lVar8 + 0x368) = uStack_78;
              *(undefined8 *)(lVar8 + 0x360) = uStack_80;
            }
            FUN_007d51b0(lVar8 + 0x390,&DAT_00224984,3);
            FUN_007d51b0(lVar8 + 0x378,&DAT_00224990,1);
            lVar8 = param_1[0xd];
            if (0xd < (ulong)((param_1[0xe] - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
              *(undefined8 *)(lVar8 + 0x548) = 0x200000002;
              FUN_00850d54(&local_98,"--------D",9);
              if ((byte *)(lVar8 + 0x550) == &local_98) {
                if ((local_98 & 1) != 0) {
                  operator_delete(local_90);
                }
              }
              else {
                if ((*(byte *)(lVar8 + 0x550) & 1) != 0) {
                  operator_delete(*(void **)(lVar8 + 0x558));
                }
                *(ulong *)(lVar8 + 0x550) = CONCAT71(uStack_97,local_98);
                *(undefined8 *)(lVar8 + 0x578) = local_70;
                *(undefined8 *)(lVar8 + 0x560) = uStack_88;
                *(void **)(lVar8 + 0x558) = local_90;
                *(undefined8 *)(lVar8 + 0x570) = uStack_78;
                *(undefined8 *)(lVar8 + 0x568) = uStack_80;
              }
              FUN_007d51b0(lVar8 + 0x598,&DAT_00224994,3);
              FUN_007d51b0(lVar8 + 0x580,&DAT_002249a0,1);
              lVar8 = param_1[0xd];
              if (2 < (ulong)((param_1[0xe] - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                *(undefined8 *)(lVar8 + 0xd0) = DAT_001f5170;
                FUN_00850d54(&local_98,"-DS------",9);
                if ((byte *)(lVar8 + 0xd8) == &local_98) {
                  if ((local_98 & 1) != 0) {
                    operator_delete(local_90);
                  }
                }
                else {
                  if ((*(byte *)(lVar8 + 0xd8) & 1) != 0) {
                    operator_delete(*(void **)(lVar8 + 0xe0));
                  }
                  *(ulong *)(lVar8 + 0xd8) = CONCAT71(uStack_97,local_98);
                  *(undefined8 *)(lVar8 + 0x100) = local_70;
                  *(undefined8 *)(lVar8 + 0xe8) = uStack_88;
                  *(void **)(lVar8 + 0xe0) = local_90;
                  *(undefined8 *)(lVar8 + 0xf8) = uStack_78;
                  *(undefined8 *)(lVar8 + 0xf0) = uStack_80;
                }
                FUN_007d51b0(lVar8 + 0x120,&DAT_002249a4,3);
                FUN_007d51b0(lVar8 + 0x108,&DAT_002249b0,1);
                lVar8 = param_1[0xd];
                if (7 < (ulong)((param_1[0xe] - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                  *(undefined8 *)(lVar8 + 0x2d8) = 0x100000001;
                  FUN_00850d54(&local_98,"----DS---",9);
                  if ((byte *)(lVar8 + 0x2e0) == &local_98) {
                    if ((local_98 & 1) != 0) {
                      operator_delete(local_90);
                    }
                  }
                  else {
                    if ((*(byte *)(lVar8 + 0x2e0) & 1) != 0) {
                      operator_delete(*(void **)(lVar8 + 0x2e8));
                    }
                    *(ulong *)(lVar8 + 0x2e0) = CONCAT71(uStack_97,local_98);
                    *(undefined8 *)(lVar8 + 0x308) = local_70;
                    *(undefined8 *)(lVar8 + 0x2f0) = uStack_88;
                    *(void **)(lVar8 + 0x2e8) = local_90;
                    *(undefined8 *)(lVar8 + 0x300) = uStack_78;
                    *(undefined8 *)(lVar8 + 0x2f8) = uStack_80;
                  }
                  FUN_007d51b0(lVar8 + 0x328,&DAT_002249b4,3);
                  FUN_007d51b0(lVar8 + 0x310,&DAT_002249c0,1);
                  lVar8 = param_1[0xd];
                  if (0xc < (ulong)((param_1[0xe] - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                    *(undefined8 *)(lVar8 + 0x4e0) = DAT_001f54e8;
                    FUN_00850d54(&local_98,"-------DS",9);
                    if ((byte *)(lVar8 + 0x4e8) == &local_98) {
                      if ((local_98 & 1) != 0) {
                        operator_delete(local_90);
                      }
                    }
                    else {
                      if ((*(byte *)(lVar8 + 0x4e8) & 1) != 0) {
                        operator_delete(*(void **)(lVar8 + 0x4f0));
                      }
                      *(ulong *)(lVar8 + 0x4e8) = CONCAT71(uStack_97,local_98);
                      *(undefined8 *)(lVar8 + 0x510) = local_70;
                      *(undefined8 *)(lVar8 + 0x508) = uStack_78;
                      *(undefined8 *)(lVar8 + 0x500) = uStack_80;
                      *(undefined8 *)(lVar8 + 0x4f8) = uStack_88;
                      *(void **)(lVar8 + 0x4f0) = local_90;
                    }
                    FUN_007d51b0(lVar8 + 0x530,&DAT_002249c4,3);
                    FUN_007d51b0(lVar8 + 0x518,&DAT_002249d0,1);
                    lVar8 = param_1[0xd];
                    if (4 < (ulong)((param_1[0xe] - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                      *(undefined8 *)(lVar8 + 0x1a0) = uVar4;
                      FUN_00850d54(&local_98,"--D------",9);
                      if ((byte *)(lVar8 + 0x1a8) == &local_98) {
                        if ((local_98 & 1) != 0) {
                          operator_delete(local_90);
                        }
                      }
                      else {
                        if ((*(byte *)(lVar8 + 0x1a8) & 1) != 0) {
                          operator_delete(*(void **)(lVar8 + 0x1b0));
                        }
                        *(ulong *)(lVar8 + 0x1a8) = CONCAT71(uStack_97,local_98);
                        *(undefined8 *)(lVar8 + 0x1d0) = local_70;
                        *(undefined8 *)(lVar8 + 0x1b8) = uStack_88;
                        *(void **)(lVar8 + 0x1b0) = local_90;
                        *(undefined8 *)(lVar8 + 0x1c8) = uStack_78;
                        *(undefined8 *)(lVar8 + 0x1c0) = uStack_80;
                      }
                      FUN_007d51b0(lVar8 + 0x1f0,&DAT_002249d4,3);
                      FUN_007d51b0(lVar8 + 0x1d8,&DAT_002249e0,1);
                      lVar8 = param_1[0xd];
                      if (9 < (ulong)((param_1[0xe] - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                        *(undefined8 *)(lVar8 + 0x3a8) = uVar3;
                        FUN_00850d54(&local_98,"-----D---",9);
                        if ((byte *)(lVar8 + 0x3b0) == &local_98) {
                          if ((local_98 & 1) != 0) {
                            operator_delete(local_90);
                          }
                        }
                        else {
                          if ((*(byte *)(lVar8 + 0x3b0) & 1) != 0) {
                            operator_delete(*(void **)(lVar8 + 0x3b8));
                          }
                          *(ulong *)(lVar8 + 0x3b0) = CONCAT71(uStack_97,local_98);
                          *(undefined8 *)(lVar8 + 0x3d8) = local_70;
                          *(undefined8 *)(lVar8 + 0x3c0) = uStack_88;
                          *(void **)(lVar8 + 0x3b8) = local_90;
                          *(undefined8 *)(lVar8 + 0x3d0) = uStack_78;
                          *(undefined8 *)(lVar8 + 0x3c8) = uStack_80;
                        }
                        FUN_007d51b0(lVar8 + 0x3f8,&DAT_002249e4,3);
                        FUN_007d51b0(lVar8 + 0x3e0,&DAT_002249f0,1);
                        lVar8 = param_1[0xd];
                        if (0xe < (ulong)((param_1[0xe] - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                          *(undefined8 *)(lVar8 + 0x5b0) = 0x200000002;
                          FUN_00850d54(&local_98,"--------D",9);
                          if ((byte *)(lVar8 + 0x5b8) == &local_98) {
                            if ((local_98 & 1) != 0) {
                              operator_delete(local_90);
                            }
                          }
                          else {
                            if ((*(byte *)(lVar8 + 0x5b8) & 1) != 0) {
                              operator_delete(*(void **)(lVar8 + 0x5c0));
                            }
                            *(ulong *)(lVar8 + 0x5b8) = CONCAT71(uStack_97,local_98);
                            *(undefined8 *)(lVar8 + 0x5e0) = local_70;
                            *(undefined8 *)(lVar8 + 0x5d8) = uStack_78;
                            *(undefined8 *)(lVar8 + 0x5d0) = uStack_80;
                            *(undefined8 *)(lVar8 + 0x5c8) = uStack_88;
                            *(void **)(lVar8 + 0x5c0) = local_90;
                          }
                          FUN_007d51b0(lVar8 + 0x600,&DAT_002249f4,3);
                          FUN_007d51b0(lVar8 + 0x5e8,&DAT_00224a00,1);
                          puVar1 = (undefined8 *)param_1[0xd];
                          if ((undefined8 *)param_1[0xe] != puVar1) {
                            *puVar1 = 0;
                            FUN_00850d54(&local_98,"SSS------",9);
                            if ((byte *)(puVar1 + 1) == &local_98) {
                              if ((local_98 & 1) != 0) {
                                operator_delete(local_90);
                              }
                            }
                            else {
                              if ((*(byte *)(puVar1 + 1) & 1) != 0) {
                                operator_delete((void *)puVar1[2]);
                              }
                              puVar1[1] = CONCAT71(uStack_97,local_98);
                              puVar1[6] = local_70;
                              puVar1[3] = uStack_88;
                              puVar1[2] = local_90;
                              puVar1[5] = uStack_78;
                              puVar1[4] = uStack_80;
                            }
                            FUN_007d51b0(puVar1 + 10,&DAT_00224a04,3);
                            FUN_007d51b0(puVar1 + 7,&DAT_00224a10,1);
                            lVar8 = param_1[0xd];
                            if (5 < (ulong)((param_1[0xe] - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                              *(undefined8 *)(lVar8 + 0x208) = uVar6;
                              FUN_00850d54(&local_98,"---SSS---",9);
                              if ((byte *)(lVar8 + 0x210) == &local_98) {
                                if ((local_98 & 1) != 0) {
                                  operator_delete(local_90);
                                }
                              }
                              else {
                                if ((*(byte *)(lVar8 + 0x210) & 1) != 0) {
                                  operator_delete(*(void **)(lVar8 + 0x218));
                                }
                                *(ulong *)(lVar8 + 0x210) = CONCAT71(uStack_97,local_98);
                                *(undefined8 *)(lVar8 + 0x238) = local_70;
                                *(undefined8 *)(lVar8 + 0x220) = uStack_88;
                                *(void **)(lVar8 + 0x218) = local_90;
                                *(undefined8 *)(lVar8 + 0x230) = uStack_78;
                                *(undefined8 *)(lVar8 + 0x228) = uStack_80;
                              }
                              FUN_007d51b0(lVar8 + 600,&DAT_00224a14,3);
                              FUN_007d51b0(lVar8 + 0x240,&DAT_00224a20,1);
                              lVar8 = param_1[0xd];
                              if (10 < (ulong)((param_1[0xe] - lVar8 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                                *(undefined8 *)(lVar8 + 0x410) = uVar5;
                                FUN_00850d54(&local_98,"------SSS",9);
                                if ((byte *)(lVar8 + 0x418) == &local_98) {
                                  if ((local_98 & 1) != 0) {
                                    operator_delete(local_90);
                                  }
                                }
                                else {
                                  if ((*(byte *)(lVar8 + 0x418) & 1) != 0) {
                                    operator_delete(*(void **)(lVar8 + 0x420));
                                  }
                                  *(ulong *)(lVar8 + 0x418) = CONCAT71(uStack_97,local_98);
                                  *(undefined8 *)(lVar8 + 0x440) = local_70;
                                  *(undefined8 *)(lVar8 + 0x438) = uStack_78;
                                  *(undefined8 *)(lVar8 + 0x430) = uStack_80;
                                  *(undefined8 *)(lVar8 + 0x428) = uStack_88;
                                  *(void **)(lVar8 + 0x420) = local_90;
                                }
                                FUN_007d51b0(lVar8 + 0x460,&DAT_00224a24,3);
                                FUN_007d51b0(lVar8 + 0x448,&DAT_00224a30,1);
                                if (*(long *)(lVar2 + 0x28) == local_68) {
                                  return;
                                }
                    /* WARNING: Subroutine does not return */
                                __stack_chk_fail();
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
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 008b5628  FUN_008b5628 =====

void FUN_008b5628(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 008b5634  FUN_008b5634 =====

void FUN_008b5634(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 008b5640  FUN_008b5640 =====

void FUN_008b5640(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 008b564c  FUN_008b564c =====

void FUN_008b564c(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 008b5658  FUN_008b5658 =====

void FUN_008b5658(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 008b5664  FUN_008b5664 =====

void FUN_008b5664(void)

{
  return;
}


// ===== 008b566c  FUN_008b566c =====

void FUN_008b566c(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 008b5678  FUN_008b5678 =====

void FUN_008b5678(void)

{
  return;
}


// ===== 008b5680  FUN_008b5680 =====

void FUN_008b5680(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 008b568c  FUN_008b568c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b568c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_001f4558;
  uVar1 = _DAT_001f4550;
  *(undefined4 *)(param_1 + 5) = 1;
  param_1[4] = 0x100000001;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = 0x100000001;
  param_1[2] = 0x100000001;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


// ===== 008b56b8  FUN_008b56b8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_008b56b8(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 local_118;
  ulong local_110;
  undefined1 *local_108;
  undefined1 *puStack_100;
  undefined1 *local_f8;
  undefined1 *puStack_f0;
  undefined1 *local_e8;
  ulong uStack_e0;
  undefined1 *local_d8;
  undefined1 *puStack_d0;
  ulong local_c8;
  undefined1 *puStack_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  ulong local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  ulong local_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  ulong local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar5 = param_1 + 0xd;
  *puVar5 = 0;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  uVar3 = DAT_001f5170;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = 0;
  param_1[8] = 0;
  *param_1 = uVar3;
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_008ad510(param_1 + 2,&DAT_00224a34,1);
  local_b0 = 0;
  local_a8 = 0;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = 0;
  local_60 = 0;
  FUN_0060adc4(&local_a8,&DAT_00224a38,1);
  FUN_007d51b0(&local_60,&DAT_00224a3c,1);
  uVar1 = param_1[0xe];
  if (uVar1 < (ulong)param_1[0xf]) {
    FUN_008b5b74(puVar5,uVar1,&local_b0);
    lVar4 = uVar1 + 0x68;
  }
  else {
    lVar4 = FUN_008b5c60(puVar5,&local_b0);
  }
  param_1[0xe] = lVar4;
  local_118 = 0;
  local_110 = 0;
  puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
  local_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  local_d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
  local_f8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
  local_108 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_e0 = 0;
  local_c8 = 0;
  FUN_0060adc4(&local_110,&DAT_00224a40,1);
  FUN_007d51b0(&local_c8,&DAT_00224a44,1);
  FUN_007d51b0(&uStack_e0,&DAT_00224a48,1);
  uVar1 = param_1[0xe];
  if (uVar1 < (ulong)param_1[0xf]) {
    FUN_008b5b74(puVar5,uVar1,&local_118);
    lVar4 = uVar1 + 0x68;
  }
  else {
    lVar4 = FUN_008b5c60(puVar5,&local_118);
  }
  param_1[0xe] = lVar4;
  if ((local_c8 & 1) != 0) {
    operator_delete(puStack_c0);
  }
  if ((uStack_e0 & 1) != 0) {
    operator_delete(local_d8);
  }
  if ((local_110 & 1) != 0) {
    operator_delete(local_108);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_a8 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008b5934  FUN_008b5934 =====

void FUN_008b5934(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  
  if ((*(byte *)(param_2 + 9) & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    puVar1 = (undefined8 *)operator_new(0x58);
    *param_1 = puVar1;
    param_1[2] = puVar1 + 0xb;
    if (puVar1 == (undefined8 *)0x0) {
LAB_008b59f8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar1[10] = 0;
    param_1[1] = puVar1 + 0xb;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    if (((param_3 & 1) == 0) && (*(char *)(param_2 + 8) != '\x01')) {
      if (puVar1 == (undefined8 *)0xffffffffffffffe8) goto LAB_008b59f8;
      uVar2 = 1;
    }
    else {
      *(undefined1 *)((long)puVar1 + 4) = 1;
      if (puVar1 == (undefined8 *)0xffffffffffffffe8) goto LAB_008b59f8;
      uVar2 = 0;
    }
    *(undefined1 *)((long)puVar1 + 0x1c) = uVar2;
    *(undefined1 *)((long)puVar1 + 0x1d) = 1;
    puVar1[2] = 2;
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}


// ===== 008b5a0c  FUN_008b5a0c =====

void FUN_008b5a0c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  
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
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00850a9c(param_1);
  if (param_1 + 0xd != (undefined8 *)(param_3 + 0x10)) {
    plVar2 = (long *)(param_3 + 0x18);
    if ((*(ulong *)(param_3 + 0x10) & 1) != 0) {
      plVar2 = (long *)*(long *)(param_3 + 0x18);
    }
    FUN_008ad1a4(param_1 + 0xd,plVar2,(long)(*(ulong *)(param_3 + 0x10) << 2) >> 3);
  }
  if (*(char *)(param_3 + 4) == '\x01') {
    uVar4 = param_1[0xd] * 4;
    puVar3 = param_1 + 0xe;
    if ((param_1[0xd] & 1) != 0) {
      puVar3 = (undefined8 *)param_1[0xe];
    }
    uVar1 = uVar4 & 0xfffffffffffffff8;
    if (uVar1 != 0) {
      uVar4 = uVar4 - 8 >> 3;
      puVar5 = puVar3;
      if (uVar4 != 0) {
        uVar4 = uVar4 + 1;
        uVar7 = uVar4 & 0x3ffffffffffffffe;
        puVar6 = (undefined1 *)((long)puVar3 + 0xc);
        do {
          uVar7 = uVar7 - 2;
          puVar6[-8] = 0;
          *puVar6 = 0;
          puVar6 = puVar6 + 0x10;
        } while (uVar7 != 0);
        puVar5 = puVar3 + (uVar4 & 0x3ffffffffffffffe);
        if (uVar4 == (uVar4 & 0x3ffffffffffffffe)) goto LAB_008b5afc;
      }
      do {
        *(undefined1 *)((long)puVar5 + 4) = 0;
        puVar5 = puVar5 + 1;
      } while (puVar5 != (undefined8 *)((long)puVar3 + uVar1));
    }
  }
LAB_008b5afc:
  FUN_0060adc4(param_1 + 1,&DAT_00224a4c,1);
  FUN_008b21fc(param_1 + 0x16,&DAT_00224a50,&DAT_00224a51,1);
  return;
}


// ===== 008b5b34  FUN_008b5b34 =====

void FUN_008b5b34(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_007cc028(param_2,0,0);
  *(bool *)(param_1 + 9) = iVar1 != 0;
  return;
}


// ===== 008b5b74  FUN_008b5b74 =====

void FUN_008b5b74(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar1 = *param_3;
  param_2[1] = 0;
  *param_2 = uVar1;
  uVar2 = param_3[1];
  if (1 < uVar2) {
    if ((uVar2 & 1) == 0) {
      param_2[1] = uVar2;
      uVar5 = param_3[3];
      uVar4 = param_3[2];
      uVar3 = param_3[5];
      uVar1 = param_3[4];
      param_2[6] = param_3[6];
      param_2[3] = uVar5;
      param_2[2] = uVar4;
      param_2[5] = uVar3;
      param_2[4] = uVar1;
    }
    else {
      FUN_007ddc94();
    }
  }
  param_2[7] = 0;
  uVar2 = param_3[7];
  if (1 < uVar2) {
    if ((uVar2 & 1) == 0) {
      param_2[7] = uVar2;
      uVar1 = param_3[8];
      param_2[9] = param_3[9];
      param_2[8] = uVar1;
    }
    else {
      FUN_007ddda0();
    }
  }
  param_2[10] = 0;
  uVar2 = param_3[10];
  if (1 < uVar2) {
    if ((uVar2 & 1) != 0) {
      FUN_007ddda0();
      return;
    }
    param_2[10] = uVar2;
    uVar1 = param_3[0xb];
    param_2[0xc] = param_3[0xc];
    param_2[0xb] = uVar1;
  }
  return;
}


// ===== 008b5c60  FUN_008b5c60 =====

long FUN_008b5c60(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar10 = param_1[1] - *param_1;
  uVar5 = (lVar10 >> 3) * 0x4ec4ec4ec4ec4ec5 + 1;
  if (0x276276276276276 < uVar5) {
    FUN_007d5104();
LAB_008b5e24:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  lVar7 = param_1[2] - *param_1 >> 3;
  uVar8 = lVar7 * -0x6276276276276276;
  if (uVar8 < uVar5 || uVar8 - uVar5 == 0) {
    uVar8 = uVar5;
  }
  if (0x13b13b13b13b13a < (ulong)(lVar7 * 0x4ec4ec4ec4ec4ec5)) {
    uVar8 = 0x276276276276276;
  }
  if (uVar8 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (0x276276276276276 < uVar8) goto LAB_008b5e24;
    pvVar3 = operator_new(uVar8 * 0x68);
  }
  lVar10 = (long)pvVar3 + lVar10;
  FUN_008b5b74(param_1,lVar10,param_2);
  puVar9 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar9 + (lVar10 - (long)puVar2));
  puVar4 = puVar9;
  puVar6 = puVar1;
  if (puVar2 != puVar9) {
    do {
      if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *puVar6 = *puVar4;
      puVar6[1] = 0;
      puVar6[1] = puVar4[1];
      uVar14 = puVar4[3];
      uVar13 = puVar4[2];
      uVar12 = puVar4[5];
      uVar11 = puVar4[4];
      puVar6[6] = puVar4[6];
      puVar6[3] = uVar14;
      puVar6[2] = uVar13;
      puVar6[5] = uVar12;
      puVar6[4] = uVar11;
      puVar4[1] = 0;
      puVar6[7] = 0;
      puVar6[7] = puVar4[7];
      uVar11 = puVar4[8];
      puVar6[9] = puVar4[9];
      puVar6[8] = uVar11;
      puVar4[7] = 0;
      puVar6[10] = 0;
      puVar6[10] = puVar4[10];
      uVar11 = puVar4[0xb];
      puVar6[0xc] = puVar4[0xc];
      puVar6[0xb] = uVar11;
      puVar4[10] = 0;
      puVar4 = puVar4 + 0xd;
      puVar6 = puVar6 + 0xd;
    } while (puVar4 != puVar2);
    do {
      FUN_007d511c(param_1,puVar9);
      puVar9 = puVar9 + 0xd;
    } while (puVar9 != puVar2);
    puVar9 = (undefined8 *)*param_1;
  }
  *param_1 = (long)puVar1;
  param_1[1] = lVar10 + 0x68;
  param_1[2] = (long)((long)pvVar3 + uVar8 * 0x68);
  if (puVar9 != (undefined8 *)0x0) {
    operator_delete(puVar9);
  }
  return lVar10 + 0x68;
}


// ===== 008b5e28  FUN_008b5e28 =====

void FUN_008b5e28(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    FUN_00d0f740(1,lVar1 + 8);
  }
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  return;
}


// ===== 008b5e88  FUN_008b5e88 =====

void FUN_008b5e88(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    param_1[1] = param_2;
    puVar1 = (undefined8 *)operator_new(0x20);
    uVar2 = *param_1;
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = &PTR_FUN_00d3c478;
    puVar1[2] = uVar2;
    puVar1[3] = param_2;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d0f740(1,puVar1 + 1);
    }
    *param_1 = puVar1;
  }
  return;
}


// ===== 008b5efc  FUN_008b5efc =====

void FUN_008b5efc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    param_1[4] = param_2;
    puVar1 = (undefined8 *)operator_new(0x20);
    uVar2 = *param_1;
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = &PTR_FUN_00d3c4b8;
    puVar1[2] = uVar2;
    puVar1[3] = param_2;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d0f740(1,puVar1 + 1);
    }
    *param_1 = puVar1;
  }
  return;
}


// ===== 008b5f70  FUN_008b5f70 =====

void FUN_008b5f70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_2[1] == 0) {
    puVar1 = (undefined8 *)operator_new(0x20);
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_00d3c4d8;
    if (puVar1 != (undefined8 *)0x0) {
      param_2[1] = puVar1;
      puVar2 = (undefined8 *)operator_new(0x20);
      uVar4 = *param_2;
      *(undefined4 *)(puVar2 + 1) = 0;
      *puVar2 = &PTR_FUN_00d3c478;
      puVar2[2] = uVar4;
      puVar2[3] = puVar1;
      if (puVar2 != (undefined8 *)0x0) {
        FUN_00d0f740(1,puVar2 + 1);
      }
      *param_2 = puVar2;
    }
  }
  if ((param_2[2] == 0) && (lVar3 = FUN_00622394(), lVar3 != 0)) {
    param_2[2] = lVar3;
  }
  if ((param_2[3] == 0) && (lVar3 = thunk_FUN_008b6884(param_2[1]), lVar3 != 0)) {
    param_2[3] = lVar3;
    puVar1 = (undefined8 *)operator_new(0x20);
    uVar4 = *param_2;
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = &PTR_FUN_00d3c498;
    puVar1[2] = uVar4;
    puVar1[3] = lVar3;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d0f740(1,puVar1 + 1);
    }
    *param_2 = puVar1;
  }
  plVar5 = (long *)param_2[4];
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)operator_new(8);
    *plVar5 = (long)(PTR_DAT_00d51bf8 + 0x10);
    if (plVar5 != (long *)0x0) {
      param_2[4] = plVar5;
      puVar1 = (undefined8 *)operator_new(0x20);
      uVar4 = *param_2;
      *(undefined4 *)(puVar1 + 1) = 0;
      *puVar1 = &PTR_FUN_00d3c4b8;
      puVar1[2] = uVar4;
      puVar1[3] = plVar5;
      if (puVar1 != (undefined8 *)0x0) {
        FUN_00d0f740(1,puVar1 + 1);
      }
      *param_2 = puVar1;
    }
  }
  uVar4 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  *param_2 = 0;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  param_1[4] = plVar5;
  return;
}


// ===== 008b60e8  FUN_008b60e8 =====

void FUN_008b60e8(undefined8 param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  long *local_48;
  long local_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  local_48 = (long *)*param_2;
  if (local_48 != (long *)0x0) {
    FUN_00d0f740(1,local_48 + 1);
  }
  lStack_38 = param_2[2];
  local_40 = param_2[1];
  lStack_28 = param_2[4];
  lStack_30 = param_2[3];
  FUN_008b5f70(param_1,&local_48);
  plVar1 = local_48;
  if ((local_48 != (long *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,local_48 + 1), iVar2 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x008b616c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1);
    return;
  }
  return;
}


// ===== 008b6184  FUN_008b6184 =====

void FUN_008b6184(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[3];
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d3c478;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x008b61f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 008b6204  FUN_008b6204 =====

void FUN_008b6204(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[3];
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d3c478;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 008b6280  FUN_008b6280 =====

void FUN_008b6280(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[3];
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d3c498;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x008b62ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 008b6300  FUN_008b6300 =====

void FUN_008b6300(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[3];
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d3c498;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 008b637c  FUN_008b637c =====

void FUN_008b637c(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[3];
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d3c4b8;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x008b63e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 008b63fc  FUN_008b63fc =====

void FUN_008b63fc(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[3];
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d3c4b8;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 008b6478  thunk_FUN_008b6884 =====

void thunk_FUN_008b6884(void)

{
  FUN_008b6884();
  return;
}


// ===== 008b6480  FUN_008b6480 =====

void FUN_008b6480(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4ed3,"../../api/environment/deprecated_global_field_trials.cc",0x211,
                 "Setting field trial string:",param_1);
  }
  DAT_00d803e8 = param_1;
  return;
}


// ===== 008b64d8  FUN_008b64d8 =====

void FUN_008b64d8(char *param_1,undefined8 param_2,void *param_3,size_t param_4)

{
  long lVar1;
  char *__src;
  size_t sVar2;
  ulong uVar3;
  int iVar4;
  size_t sVar5;
  void *pvVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  pcVar7 = DAT_00d803e8;
  if ((DAT_00d803e8 == (char *)0x0) || (sVar5 = strlen(DAT_00d803e8), sVar5 == 0)) {
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
  }
  else {
    uVar10 = 0;
    do {
      pvVar6 = memchr(pcVar7 + uVar10,0x2f,sVar5 - uVar10);
      uVar8 = (long)pvVar6 - (long)pcVar7;
      if (pvVar6 == (void *)0x0) {
        uVar8 = 0xffffffffffffffff;
      }
      if (sVar5 <= uVar8 || uVar8 == uVar10) break;
      lVar1 = uVar8 + 1;
      __src = pcVar7 + lVar1;
      pvVar6 = memchr(pcVar7 + lVar1,0x2f,sVar5 - lVar1);
      lVar9 = (long)pvVar6 - (long)pcVar7;
      if (pvVar6 == (void *)0x0) {
        lVar9 = -1;
      }
      if (lVar9 == -1 || lVar9 == lVar1) break;
      sVar2 = sVar5 - uVar10;
      if (uVar8 - uVar10 <= sVar5 - uVar10) {
        sVar2 = uVar8 - uVar10;
      }
      if ((param_4 == sVar2) && (iVar4 = memcmp(param_3,pcVar7 + uVar10,param_4), iVar4 == 0)) {
        uVar10 = sVar5 - lVar1;
        if (lVar9 + ~uVar8 <= sVar5 - lVar1) {
          uVar10 = lVar9 + ~uVar8;
        }
        if (0x7ffffffffffffff6 < uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_005d45ec();
        }
        if (uVar10 < 0x17) {
          param_1[0x17] = (char)uVar10;
          pcVar7 = param_1;
        }
        else {
          uVar8 = (uVar10 & 0x7ffffffffffffff8) + 8;
          uVar3 = 0x19;
          if (uVar8 != 0x18) {
            uVar3 = uVar8;
          }
          pcVar7 = (char *)operator_new(uVar3);
          *(char **)param_1 = pcVar7;
          *(ulong *)(param_1 + 8) = uVar10;
          *(ulong *)(param_1 + 0x10) = uVar3 | 0x8000000000000000;
        }
        if (pcVar7 <= pcVar7 + uVar10) {
          if ((pcVar7 <= __src) && (__src < pcVar7 + uVar10)) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                      );
          }
          memmove(pcVar7,__src,uVar10);
          pcVar7[uVar10] = '\0';
          return;
        }
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                  );
      }
      uVar10 = lVar9 + 1;
    } while (uVar10 < sVar5);
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
  }
  return;
}


// ===== 008b66c0  FUN_008b66c0 =====

/* WARNING: Removing unreachable block (ram,0x008b6720) */

void FUN_008b66c0(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)param_1[1];
  *param_1 = &PTR_FUN_00d3c510;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  pvVar2 = (void *)param_1[2];
  pvVar1 = pvVar3;
  if (pvVar3 != pvVar2) {
    do {
      pvVar2 = (void *)((long)pvVar2 + -0x18);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    } while (pvVar2 != pvVar3);
    pvVar1 = (void *)param_1[1];
  }
  param_1[2] = pvVar3;
  operator_delete(pvVar1);
  return;
}


// ===== 008b6780  FUN_008b6780 =====

/* WARNING: Removing unreachable block (ram,0x008b67e0) */

void FUN_008b6780(long *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)param_1[1];
  *param_1 = (long)(PTR_DAT_00d53030 + 0x10);
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)param_1[2];
    pvVar1 = pvVar3;
    if (pvVar3 != pvVar2) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -0x18);
        if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      } while (pvVar2 != pvVar3);
      pvVar1 = (void *)param_1[1];
    }
    param_1[2] = (long)pvVar3;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 008b6838  FUN_008b6838 =====

void FUN_008b6838(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_00d3c4d8;
  return;
}


// ===== 008b686c  FUN_008b686c =====

void FUN_008b686c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008b6878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}


// ===== 008b687c  FUN_008b687c =====

void FUN_008b687c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x8b6884);
  (*pcVar1)();
}


// ===== 008b6884  FUN_008b6884 =====

void FUN_008b6884(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  *puVar1 = &PTR_FUN_00d3c548;
  return;
}


// ===== 008b68b0  FUN_008b68b0 =====

void FUN_008b68b0(void)

{
  return;
}


// ===== 008b68b8  FUN_008b68b8 =====

void FUN_008b68b8(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 008b68c4  FUN_008b68c4 =====

undefined8 * FUN_008b68c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 **local_c0;
  undefined8 *puStack_b8;
  code *local_b0;
  code *pcStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  
  puVar1 = (undefined8 *)operator_new(0xf8);
  uVar2 = *(undefined8 *)(&DAT_00224a58 + (ulong)param_4 * 8);
  *puVar1 = &PTR_FUN_00d3c570;
  FUN_0066f1bc(puVar1 + 1,0,0);
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_a0);
  pthread_mutex_init((pthread_mutex_t *)((long)puVar1 + 100),(pthread_mutexattr_t *)&local_a0);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_a0);
  *(undefined1 *)((long)puVar1 + 0x8c) = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = puVar1 + 0x1a;
  puStack_4c = &DAT_aaaaaaaaaaaaaaaa;
  uStack_50 = 0xaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_58 = 0xaaaaaaaa;
  local_54 = 0xaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0066f1ac(&local_a0);
  puVar1[0x1e] = &DAT_aaaaaaaaaaaaaaaa;
  puVar1[0x1d] = &DAT_aaaaaaaaaaaaaaaa;
  puVar1[0x1c] = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = FUN_004473ec;
  pcStack_a8 = FUN_008b6d98;
  local_c0 = &local_a0;
  puStack_b8 = puVar1;
  FUN_0066ebd8(&local_c0,param_2,param_3,uVar2);
  (*local_b0)(0,&local_c0,&local_c0);
  FUN_0066f318(&local_a0,0x7fffffffffffffff,3000000);
  FUN_0066f2b0(&local_a0);
  return puVar1;
}


// ===== 008b6a0c  FUN_008b6a0c =====

void FUN_008b6a0c(void *param_1)

{
  pthread_mutex_lock((pthread_mutex_t *)((long)param_1 + 100));
  *(undefined1 *)((long)param_1 + 0x8c) = 1;
  pthread_mutex_unlock((pthread_mutex_t *)((long)param_1 + 100));
  FUN_0066f2dc((long)param_1 + 8);
  if (param_1 != (void *)0x0) {
    FUN_0066eb40((long)param_1 + 0xe0);
    FUN_008b8628(*(undefined8 *)((long)param_1 + 0xd0));
    FUN_008b76d8((long)param_1 + 0x98);
    pthread_mutex_destroy((pthread_mutex_t *)((long)param_1 + 100));
    FUN_0066f2b0((long)param_1 + 8);
    operator_delete(param_1);
    return;
  }
  return;
}


// ===== 008b6a94  FUN_008b6a94 =====

void FUN_008b6a94(long param_1,long param_2)

{
  long lVar1;
  long local_70 [2];
  undefined1 auStack_60 [16];
  code *local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 100));
  local_70[0] = *(long *)(param_1 + 0x90) + 1;
  *(long *)(param_1 + 0x90) = local_70[0];
  (**(code **)(param_2 + 0x10))(1,param_2,auStack_60);
  uStack_48 = *(undefined8 *)(param_2 + 0x18);
  local_50 = *(code **)(param_2 + 0x10);
  *(code **)(param_2 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_2 + 0x18) = 0;
  FUN_008b78f8(param_1 + 0x98,local_70);
  (*local_50)(0,auStack_60,auStack_60);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 100));
  FUN_0066f2dc(param_1 + 8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008b6b60  FUN_008b6b60 =====

void FUN_008b6b60(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  lVar4 = FUN_006258f0();
  lVar4 = lVar4 + param_3;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 100));
  puVar7 = *(undefined8 **)(param_1 + 0xd0);
  uVar1 = *(long *)(param_1 + 0x90) + 1;
  *(ulong *)(param_1 + 0x90) = uVar1;
  puVar6 = (undefined8 *)(param_1 + 0xd0);
  do {
    puVar8 = puVar6;
    if (puVar7 == (undefined8 *)0x0) {
LAB_008b6c1c:
      puVar5 = (undefined8 *)operator_new(0x50);
      if ((puVar5 == (undefined8 *)0x0) || (puVar5 == (undefined8 *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar5[4] = lVar4;
      puVar5[5] = uVar1;
      puVar5[6] = 0;
      puVar5[7] = 0;
      puVar5[8] = FUN_00433984;
      puVar5[9] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = puVar6;
      *puVar8 = puVar5;
      puVar6 = puVar5;
      if (**(long **)(param_1 + 200) != 0) {
        *(long *)(param_1 + 200) = **(long **)(param_1 + 200);
        puVar6 = (undefined8 *)*puVar8;
      }
      FUN_005d5b94(*(undefined8 *)(param_1 + 0xd0),puVar6);
      *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + 1;
LAB_008b6c80:
      (*(code *)puVar5[8])(0,puVar5 + 6,puVar5 + 6);
      puVar5[8] = FUN_00433984;
      puVar5[9] = 0;
      (**(code **)(param_2 + 0x10))(1,param_2,puVar5 + 6);
      puVar5[8] = *(undefined8 *)(param_2 + 0x10);
      puVar5[9] = *(undefined8 *)(param_2 + 0x18);
      *(code **)(param_2 + 0x10) = FUN_00433984;
      *(undefined8 *)(param_2 + 0x18) = 0;
      pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 100));
      FUN_0066f2dc(param_1 + 8);
      return;
    }
    while( true ) {
      puVar5 = puVar7;
      lVar2 = puVar5[4];
      bVar3 = uVar1 < (ulong)puVar5[5];
      if (lVar4 != lVar2) {
        bVar3 = lVar4 < lVar2;
      }
      puVar6 = puVar5;
      if (bVar3) break;
      bVar3 = (ulong)puVar5[5] < uVar1;
      if (lVar4 != lVar2) {
        bVar3 = lVar2 < lVar4;
      }
      if (!bVar3) goto LAB_008b6c80;
      puVar7 = (undefined8 *)puVar5[1];
      if ((undefined8 *)puVar5[1] == (undefined8 *)0x0) {
        puVar8 = puVar5 + 1;
        goto LAB_008b6c1c;
      }
    }
    puVar7 = (undefined8 *)*puVar5;
  } while( true );
}


// ===== 008b6cfc  FUN_008b6cfc =====

void FUN_008b6cfc(long param_1)

{
  FUN_0066eb40(param_1 + 0xe0);
  FUN_008b8628(*(undefined8 *)(param_1 + 0xd0));
  FUN_008b76d8(param_1 + 0x98);
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 100));
  FUN_0066f2b0(param_1 + 8);
  return;
}


// ===== 008b6d44  FUN_008b6d44 =====

void FUN_008b6d44(void *param_1)

{
  FUN_0066eb40((long)param_1 + 0xe0);
  FUN_008b8628(*(undefined8 *)((long)param_1 + 0xd0));
  FUN_008b76d8((long)param_1 + 0x98);
  pthread_mutex_destroy((pthread_mutex_t *)((long)param_1 + 100));
  FUN_0066f2b0((long)param_1 + 8);
  operator_delete(param_1);
  return;
}


// ===== 008b6d98  FUN_008b6d98 =====

void FUN_008b6d98(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  code *pcVar16;
  long lVar17;
  code *pcVar18;
  undefined1 *local_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  undefined8 *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined8 *puStack_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  code *local_90;
  code *pcStack_88;
  long local_80;
  undefined1 *puStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_e8 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_005d64b8(&local_e8,param_1[1]);
  FUN_0066f2dc(*param_1);
  lVar17 = param_1[1];
  do {
    puStack_a8 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
    local_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = 0xaaaaaaaaaaaaaa00;
    local_90 = FUN_00433984;
    pcStack_88 = (code *)0x0;
    local_80 = 0x7fffffffffffffff;
    lVar5 = FUN_006258f0();
    pthread_mutex_lock((pthread_mutex_t *)(lVar17 + 100));
    if (*(char *)(lVar17 + 0x8c) == '\x01') {
      local_b0 = CONCAT71(local_b0._1_7_,1);
    }
    else {
      if (*(long *)(lVar17 + 0xd8) == 0) {
LAB_008b6eb4:
        if (*(long *)(lVar17 + 0xc0) == 0) goto LAB_008b7038;
        local_90 = FUN_00433984;
        pcStack_88 = (code *)0x0;
        lVar5 = *(long *)(*(long *)(lVar17 + 0xa0) + (*(ulong *)(lVar17 + 0xb8) / 0x55) * 8) +
                (*(ulong *)(lVar17 + 0xb8) % 0x55) * 0x30;
        (**(code **)(lVar5 + 0x20))(1,lVar5 + 0x10,&local_a0);
        local_90 = *(code **)(lVar5 + 0x20);
        pcStack_88 = *(code **)(lVar5 + 0x28);
        *(code **)(lVar5 + 0x20) = FUN_00433984;
        *(undefined8 *)(lVar5 + 0x28) = 0;
      }
      else {
        plVar11 = *(long **)(lVar17 + 200);
        lVar6 = plVar11[4];
        lVar1 = lVar6 - lVar5;
        if (lVar1 != 0 && lVar5 <= lVar6) {
          local_80 = lVar1 / 1000;
          if (0 < lVar1 % 1000) {
            local_80 = local_80 + 1;
          }
          local_80 = local_80 * 1000;
          goto LAB_008b6eb4;
        }
        if ((*(long *)(lVar17 + 0xc0) == 0) ||
           (puVar13 = (ulong *)(*(long *)(*(long *)(lVar17 + 0xa0) +
                                         (*(ulong *)(lVar17 + 0xb8) / 0x55) * 8) +
                               (*(ulong *)(lVar17 + 0xb8) % 0x55) * 0x30),
           (ulong)plVar11[5] <= *puVar13)) {
          local_90 = FUN_00433984;
          pcStack_88 = (code *)0x0;
          (*(code *)plVar11[8])(1,plVar11 + 6,&local_a0);
          local_90 = (code *)plVar11[8];
          pcStack_88 = (code *)plVar11[9];
          plVar11[8] = (long)FUN_00433984;
          plVar11[9] = 0;
          plVar7 = plVar11;
          plVar3 = (long *)plVar11[1];
          if ((long *)plVar11[1] == (long *)0x0) {
            do {
              plVar8 = (long *)plVar7[2];
              bVar4 = plVar7 != (long *)*plVar8;
              plVar7 = plVar8;
            } while (bVar4);
          }
          else {
            do {
              plVar8 = plVar3;
              plVar3 = (long *)*plVar8;
            } while ((long *)*plVar8 != (long *)0x0);
          }
          if (*(long **)(lVar17 + 200) == plVar11) {
            *(long **)(lVar17 + 200) = plVar8;
          }
          *(long *)(lVar17 + 0xd8) = *(long *)(lVar17 + 0xd8) + -1;
          FUN_005d5d48(*(undefined8 *)(lVar17 + 0xd0),plVar11);
          if (plVar11 + 4 != (long *)0x0) {
            (*(code *)plVar11[8])(0,plVar11 + 6,plVar11 + 6);
            operator_delete(plVar11);
            goto LAB_008b7038;
          }
          goto LAB_008b7248;
        }
        local_90 = FUN_00433984;
        pcStack_88 = (code *)0x0;
        (*(code *)puVar13[4])(1,puVar13 + 2,&local_a0);
        local_90 = (code *)puVar13[4];
        pcStack_88 = (code *)puVar13[5];
        puVar13[4] = (ulong)FUN_00433984;
        puVar13[5] = 0;
      }
      FUN_008b72d8(lVar17 + 0x98);
    }
LAB_008b7038:
    pthread_mutex_unlock((pthread_mutex_t *)(lVar17 + 100));
    if ((local_b0 & 1) != 0) break;
    if (pcStack_88 == (code *)0x0) {
      FUN_0066f318(lVar17 + 8,local_80,local_80);
    }
    else {
      (*pcStack_88)(&local_a0);
    }
    (*local_90)(0,&local_a0,&local_a0);
  } while( true );
  (*local_90)(0,&local_a0,&local_a0);
  pthread_mutex_lock((pthread_mutex_t *)(lVar17 + 100));
  local_b0 = *(ulong *)(lVar17 + 0x98);
  *(undefined8 *)(lVar17 + 0x98) = 0;
  puVar12 = *(undefined8 **)(lVar17 + 0xa0);
  *(undefined8 *)(lVar17 + 0xa0) = 0;
  local_98 = *(undefined1 **)(lVar17 + 0xb0);
  *(undefined8 *)(lVar17 + 0xb0) = 0;
  puVar14 = *(undefined8 **)(lVar17 + 0xa8);
  *(undefined8 *)(lVar17 + 0xa8) = 0;
  pcVar16 = *(code **)(lVar17 + 0xb8);
  *(undefined8 *)(lVar17 + 0xb8) = 0;
  pcVar18 = *(code **)(lVar17 + 0xc0);
  *(undefined8 *)(lVar17 + 0xc0) = 0;
  puStack_a8 = puVar12;
  local_a0 = puVar14;
  local_90 = pcVar16;
  pcStack_88 = pcVar18;
  pthread_mutex_unlock((pthread_mutex_t *)(lVar17 + 100));
  uStack_c8 = 0;
  local_d0 = (undefined8 *)0x0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  puVar15 = puVar12;
  if (puVar12 != puVar14) {
    pcVar18 = pcVar18 + (long)pcVar16;
    plVar11 = puVar12 + (ulong)pcVar16 / 0x55;
    lVar5 = puVar12[(ulong)pcVar18 / 0x55];
    lVar17 = *plVar11 + ((ulong)pcVar16 % 0x55) * 0x30;
    puVar15 = puVar14;
    while (lVar17 != lVar5 + ((ulong)pcVar18 % 0x55) * 0x30) {
      if (lVar17 == 0) goto LAB_008b7248;
      (**(code **)(lVar17 + 0x20))(0,lVar17 + 0x10,lVar17 + 0x10);
      lVar17 = lVar17 + 0x30;
      puVar12 = puStack_a8;
      puVar15 = local_a0;
      if (lVar17 - *plVar11 == 0xff0) {
        plVar11 = plVar11 + 1;
        lVar17 = *plVar11;
      }
    }
  }
  pcStack_88 = (code *)0x0;
  lVar17 = (long)puVar15 - (long)puVar12;
  for (; uVar9 = lVar17 >> 3, 2 < uVar9; lVar17 = lVar17 + -8) {
    puVar15 = puVar12 + 1;
    operator_delete((void *)*puVar12);
    puVar12 = puVar15;
    puStack_a8 = puVar15;
  }
  if (uVar9 == 1) {
    local_90 = (code *)0x2a;
  }
  else if (uVar9 == 2) {
    local_90 = (code *)0x55;
  }
  FUN_008b73bc(&local_b0);
  uVar10 = (ulong)((long)local_a0 + (-8 - ((long)local_a0 << 0x3d))) >> 3;
  uVar9 = (ulong)(((long)puStack_a8 - (long)local_a0 << 0x3d) - ((long)puStack_a8 - (long)local_a0))
          >> 3;
  if (uVar10 <= uVar9) {
    uVar9 = uVar10;
  }
  puVar12 = local_a0;
  if ((1 < uVar9) && ((((int)puStack_a8 - (int)local_a0 | -(int)local_a0) & 7U) == 0)) {
    uVar9 = uVar9 & 0x1ffffffffffffffe;
    puVar12 = local_a0 + -uVar9;
    do {
      uVar9 = uVar9 - 2;
    } while (uVar9 != 0);
  }
  do {
    if (puVar12 == puStack_a8) {
      local_a0 = puVar12;
      FUN_008b74bc(&local_b0);
      pcStack_88 = (code *)uStack_b8;
      local_90 = (code *)local_c0;
      local_c0 = 0;
      uStack_b8 = 0;
      puStack_a8 = (undefined8 *)uStack_d8;
      local_b0 = local_e0;
      local_98 = (undefined1 *)uStack_c8;
      local_a0 = local_d0;
      uStack_d8 = 0;
      local_e0 = 0;
      uStack_c8 = 0;
      local_d0 = (undefined8 *)0x0;
      FUN_008b76d8(&local_e0);
      FUN_008b76d8(&local_b0);
      FUN_005d64f8(&local_e8);
      if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    puVar12 = puVar12 + -1;
  } while (puVar12 != (undefined8 *)0x0);
LAB_008b7248:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008b72d8  FUN_008b72d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b72d8(long param_1)

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
  lVar1 = *(long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) / 0x55) * 8) +
          (*(ulong *)(param_1 + 0x20) % 0x55) * 0x30;
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x20))(0,lVar1 + 0x10,lVar1 + 0x10);
    uVar2 = *(long *)(param_1 + 0x20) + _DAT_001f2940;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + _UNK_001f2948;
    *(ulong *)(param_1 + 0x20) = uVar2;
    if (0xa9 < uVar2) {
      operator_delete((void *)**(undefined8 **)(param_1 + 8));
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x55;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008b73bc  FUN_008b73bc =====

void FUN_008b73bc(long param_1)

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
        if (lVar2 == 0) goto LAB_008b74a8;
        *(long *)(param_1 + 0x10) = lVar2;
      } while (lVar2 != *(long *)(param_1 + 8));
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x20);
    puVar3 = *(undefined8 **)(param_1 + 8);
    if (0x54 < uVar4) {
      operator_delete((void *)*puVar3);
      puVar3 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
      lVar2 = *(long *)(param_1 + 0x28);
      *(undefined8 **)(param_1 + 8) = puVar3;
      uVar4 = *(long *)(param_1 + 0x20) - 0x55;
      *(ulong *)(param_1 + 0x20) = uVar4;
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    lVar1 = 0;
    if (puVar5 != puVar3) {
      lVar1 = ((long)puVar5 - (long)puVar3 >> 3) * 0x55 + -1;
    }
    if (0x54 < lVar1 - (lVar2 + uVar4)) {
      operator_delete((void *)puVar5[-1]);
      lVar2 = *(long *)(param_1 + 0x10) + -8;
      if (lVar2 == 0) {
LAB_008b74a8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      *(long *)(param_1 + 0x10) = lVar2;
    }
  }
  FUN_008b74bc(param_1);
  return;
}


// ===== 008b74bc  FUN_008b74bc =====

void FUN_008b74bc(long *param_1)

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


// ===== 008b76d8  FUN_008b76d8 =====

void FUN_008b76d8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  puVar6 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)param_1[2];
  puVar1 = puVar6;
  if (puVar6 != puVar3) {
    uVar4 = param_1[4];
    plVar7 = puVar6 + uVar4 / 0x55;
    lVar9 = *plVar7 + (uVar4 % 0x55) * 0x30;
    lVar8 = puVar6[(param_1[5] + uVar4) / 0x55] + ((param_1[5] + uVar4) % 0x55) * 0x30;
    puVar1 = puVar3;
    if (lVar9 != lVar8) {
      do {
        if (lVar9 == 0) goto LAB_008b7898;
        (**(code **)(lVar9 + 0x20))(0,lVar9 + 0x10,lVar9 + 0x10);
        lVar9 = lVar9 + 0x30;
        if (lVar9 - *plVar7 == 0xff0) {
          plVar7 = plVar7 + 1;
          lVar9 = *plVar7;
        }
      } while (lVar9 != lVar8);
      puVar6 = (undefined8 *)param_1[1];
      puVar3 = (undefined8 *)param_1[2];
      puVar1 = puVar3;
    }
  }
  param_1[5] = 0;
  lVar9 = (long)puVar1 - (long)puVar6;
  while (uVar4 = lVar9 >> 3, 2 < uVar4) {
    operator_delete((void *)*puVar6);
    puVar3 = (undefined8 *)param_1[2];
    puVar6 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = puVar6;
    lVar9 = (long)puVar3 - (long)puVar6;
  }
  if (uVar4 == 1) {
    uVar2 = 0x2a;
  }
  else {
    if (uVar4 != 2) goto LAB_008b7810;
    uVar2 = 0x55;
  }
  param_1[4] = uVar2;
LAB_008b7810:
  puVar1 = puVar3;
  if (puVar6 != puVar3) {
    do {
      puVar1 = puVar6 + 1;
      operator_delete((void *)*puVar6);
      puVar6 = puVar1;
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
LAB_008b7898:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008b78f8  FUN_008b78f8 =====

void FUN_008b78f8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar2 = 0;
  if (lVar4 != lVar3) {
    lVar2 = (lVar4 - lVar3 >> 3) * 0x55 + -1;
  }
  if (lVar2 == *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) {
    FUN_008b79f8(param_1);
    lVar3 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  if (lVar3 != lVar4) {
    uVar1 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
    puVar5 = (undefined8 *)(*(long *)(lVar3 + (uVar1 / 0x55) * 8) + (uVar1 % 0x55) * 0x30);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = *param_2;
      (*(code *)param_2[4])(1,param_2 + 2,puVar5 + 2);
      puVar5[4] = param_2[4];
      puVar5[5] = param_2[5];
      param_2[4] = FUN_00433984;
      param_2[5] = 0;
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


// ===== 008b79f8  FUN_008b79f8 =====

void FUN_008b79f8(long *param_1)

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
  
  if ((ulong)param_1[4] < 0x55) {
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
      FUN_008b7e68(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_008b838c(&local_50,lVar5);
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
      FUN_008b7e68(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0xff0);
    FUN_008b80f0(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x55;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_008b7be0(param_1,&local_50);
  return;
}


// ===== 008b7be0  FUN_008b7be0 =====

void FUN_008b7be0(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_008b7e50;
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
LAB_008b7e50:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008b7e68  FUN_008b7e68 =====

void FUN_008b7e68(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_008b80d8;
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
LAB_008b80d8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008b80f0  FUN_008b80f0 =====

void FUN_008b80f0(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_008b8374;
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
LAB_008b8374:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008b838c  FUN_008b838c =====

void FUN_008b838c(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_008b8610;
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
LAB_008b8610:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008b8628  FUN_008b8628 =====

void FUN_008b8628(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    do {
      FUN_008b8628(*param_1);
      if (param_1 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar1 = (undefined8 *)param_1[1];
      (*(code *)param_1[8])(0,param_1 + 6,param_1 + 6);
      operator_delete(param_1);
      param_1 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


// ===== 008b86a0  FUN_008b86a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b86a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d3c5a8;
  param_1[1] = param_2;
  uVar2 = _UNK_001f2c48;
  uVar1 = _DAT_001f2c40;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[8] = uVar2;
  param_1[7] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0x493e000000000;
  param_1[0xe] = param_3;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  return;
}


// ===== 008b86e4  FUN_008b86e4 =====

void FUN_008b86e4(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  
  *param_1 = &PTR_FUN_00d3c5a8;
  lVar1 = DAT_00d803f0;
  if (DAT_00d803f0 == 0) {
    lVar1 = FUN_006660d0("WebRTC.Call.NumberOfPauseEvents",0x1f,1,100,0x32);
    FUN_00d0f5e0(0,lVar1,&DAT_00d803f0);
    if (lVar1 == 0) goto LAB_008b8758;
  }
  FUN_00666568(lVar1,*(undefined4 *)(param_1 + 9));
LAB_008b8758:
  pvVar2 = (void *)param_1[2];
  if (pvVar2 == (void *)0x0) {
    return;
  }
  pvVar3 = (void *)param_1[3];
  uVar4 = (ulong)(((long)pvVar2 - (long)pvVar3) * 0x11745d1745d1745d) >> 3;
  uVar5 = (long)pvVar3 * -0x11745d1745d1745d - 8U >> 3;
  if (uVar5 <= uVar4) {
    uVar4 = uVar5;
  }
  if ((1 < uVar4) && ((((int)pvVar2 - (int)pvVar3 | -(int)pvVar3) & 7U) == 0)) {
    uVar4 = uVar4 & 0x1ffffffffffffffe;
    pvVar3 = (void *)((long)pvVar3 + uVar4 * -0x58);
    do {
      uVar4 = uVar4 - 2;
    } while (uVar4 != 0);
  }
  do {
    if (pvVar3 == pvVar2) {
      param_1[3] = pvVar2;
      operator_delete(pvVar2);
      return;
    }
    pvVar3 = (void *)((long)pvVar3 + -0x58);
  } while (pvVar3 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008b8824  FUN_008b8824 =====

void FUN_008b8824(void *param_1)

{
  FUN_008b86e4();
  operator_delete(param_1);
  return;
}


// ===== 008b8854  FUN_008b8854 =====

void FUN_008b8854(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}


// ===== 008b8860  FUN_008b8860 =====

void FUN_008b8860(long param_1,ulong *param_2)

{
  uint uVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  char extraout_w1;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined1 uStack_f1;
  undefined1 **local_f0;
  undefined8 uStack_e8;
  undefined1 *local_e0;
  char *pcStack_d8;
  undefined1 ***local_d0;
  undefined1 *local_c8;
  char **ppcStack_c0;
  undefined1 *local_b8;
  double local_b0;
  long local_a8;
  long lStack_a0;
  ulong local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  
  iVar5 = (int)param_2[6];
  *(int *)(param_1 + 0x28) = iVar5;
  iVar7 = iVar5;
  if (iVar5 == 0) {
    iVar7 = *(int *)(param_1 + 0x2c);
  }
  *(int *)(param_1 + 0x2c) = iVar7;
  uVar1 = (int)(*(float *)(param_2 + 5) * 255.0) &
          ((int)(*(float *)(param_2 + 5) * 255.0) >> 0x1f ^ 0xffffffffU);
  if (0xfe < (int)uVar1) {
    uVar1 = 0xff;
  }
  *(char *)(param_1 + 0x30) = (char)uVar1;
  uVar8 = param_2[3];
  if ((long)uVar8 < 0) {
    uVar9 = -(-uVar8 / 1000) - (ulong)(500 < -uVar8 % 1000);
  }
  else {
    uVar9 = uVar8 / 1000;
    if (499 < uVar8 % 1000) {
      uVar9 = uVar9 + 1;
    }
  }
  *(ulong *)(param_1 + 0x38) = uVar9;
  uVar8 = param_2[4];
  if ((long)uVar8 < 0) {
    uVar9 = -(-uVar8 / 1000) - (ulong)(500 < -uVar8 % 1000);
  }
  else {
    uVar9 = uVar8 / 1000;
    if (499 < uVar8 % 1000) {
      uVar9 = uVar9 + 1;
    }
  }
  *(ulong *)(param_1 + 0x40) = uVar9;
  uVar8 = *param_2;
  if ((long)uVar8 < 0) {
    uVar9 = -(-uVar8 / 1000) - (ulong)(500 < -uVar8 % 1000);
  }
  else {
    uVar9 = uVar8 / 1000;
    if (499 < uVar8 % 1000) {
      uVar9 = uVar9 + 1;
    }
  }
  if (*(long *)(param_1 + 0x50) + 5000 < (long)uVar9) {
    uVar8 = FUN_00417e08();
    if ((uVar8 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6220,"../../call/bitrate_allocator.cc",0xfa1,"Current BWE ",
                   *(undefined4 *)(param_1 + 0x28));
    }
    iVar5 = *(int *)(param_1 + 0x28);
    *(ulong *)(param_1 + 0x50) = uVar9;
  }
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_008b8c94(&local_90,param_1 + 0x10,iVar5,*(undefined8 *)(param_1 + 0x70));
  ppuVar3 = *(undefined1 ***)(param_1 + 0x18);
  for (ppuVar2 = *(undefined1 ***)(param_1 + 0x10); ppuVar2 != ppuVar3; ppuVar2 = ppuVar2 + 0xb) {
    local_f0 = ppuVar2;
    lVar6 = FUN_008bbc60(0,&local_90,&local_90,&DAT_001f94c3,&local_f0,&local_c8);
    uVar1 = *(uint *)(lVar6 + 0x28);
    local_b0 = (double)*(byte *)(param_1 + 0x30) / 256.0;
    local_a8 = *(long *)(param_1 + 0x38) * 1000;
    lStack_a0 = *(long *)(param_1 + 0x40) * 1000;
    local_98 = param_2[7];
    local_b8 = (undefined1 *)(ulong)uVar1;
    iVar5 = (*(code *)**(undefined8 **)*ppuVar2)(*ppuVar2,&local_b8);
    if (uVar1 == 0) {
      if (0 < (long)ppuVar2[7]) {
        if (*(int *)(param_1 + 0x28) != 0) {
          *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
        }
        puVar10 = ppuVar2[10];
        uVar4 = *(uint *)(ppuVar2 + 1);
        uVar8 = FUN_00417e08();
        if ((uVar8 & 1) == 0) {
          local_f0 = (undefined1 **)0x1cbf8f;
          uStack_e8 = 0x1061;
          local_e0 = &uStack_f1;
          pcStack_d8 = "Pausing observer ";
          local_d0 = &local_f0;
          ppcStack_c0 = &pcStack_d8;
          local_c8 = *ppuVar2;
          FUN_00623bb0(&DAT_00224aa0,"../../call/bitrate_allocator.cc",0x1061,"Pausing observer ",
                       local_c8," with configured min bitrate ",*(undefined4 *)(ppuVar2 + 1),
                       " and current estimate of ",*(undefined4 *)(param_1 + 0x28),
                       " and protection bitrate ",(int)((1.0 - (double)puVar10) * (double)uVar4));
        }
      }
    }
    else {
      if (ppuVar2[7] == (undefined1 *)0x0) {
        if (*(int *)(param_1 + 0x28) != 0) {
          *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
        }
        uVar8 = FUN_00417e08();
        if ((uVar8 & 1) == 0) {
          local_f0 = (undefined1 **)0x1cbf8f;
          uStack_e8 = 0x10a9;
          local_e0 = &uStack_f1;
          pcStack_d8 = "Resuming observer ";
          local_d0 = &local_f0;
          ppcStack_c0 = &pcStack_d8;
          local_c8 = *ppuVar2;
          FUN_00623bb0(&DAT_00224aa0,"../../call/bitrate_allocator.cc",0x10a9,"Resuming observer ",
                       local_c8,", configured min bitrate ",*(undefined4 *)(ppuVar2 + 1),
                       ", current allocation ",uVar1," and protection bitrate ",iVar5);
        }
      }
      if (iVar5 == 0) {
        puVar10 = (undefined1 *)0x3ff0000000000000;
      }
      else {
        puVar10 = (undefined1 *)((double)(uVar1 - iVar5) / (double)uVar1);
      }
      ppuVar2[10] = puVar10;
    }
    ppuVar2[7] = (undefined1 *)(ulong)uVar1;
    puVar10 = (undefined1 *)(**(code **)(*(long *)*ppuVar2 + 8))();
    ppuVar2[8] = puVar10;
    *(char *)(ppuVar2 + 9) = extraout_w1;
  }
  FUN_008b9a20(param_1);
  local_f0 = &local_90;
  FUN_008bba88(&local_f0,puStack_88);
  return;
}


// ===== 008b8c94  FUN_008b8c94 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_008b8c94(long *param_1,long *param_2,uint param_3,ulong param_4)

{
  int *piVar1;
  double *pdVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  uint uVar8;
  bool bVar9;
  long lVar10;
  long ******pppppplVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong *******pppppppuVar15;
  ulong ******ppppppuVar16;
  ulong *******pppppppuVar17;
  ulong ****ppppuVar18;
  ulong *******pppppppuVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  ulong *******pppppppuVar23;
  uint uVar24;
  long *******ppppppplVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  undefined8 *puVar29;
  uint uVar30;
  long lVar31;
  int iVar32;
  uint uVar33;
  int iVar35;
  uint uVar36;
  double dVar34;
  int iVar37;
  int iVar38;
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  ulong *******local_100;
  ulong *******local_f8;
  ulong *******local_f0;
  char local_e8;
  long *******local_e0;
  long *******local_d8;
  ulong *******local_d0;
  ulong *****local_c8;
  ulong ****local_c0;
  undefined8 uStack_b8;
  ulong *******local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  ulong ******local_a0;
  ulong *******local_98;
  ulong *******local_90;
  ulong *******local_88;
  ulong *******local_80;
  
  pppppppuVar17 = (ulong *******)*param_2;
  pppppppuVar19 = (ulong *******)param_2[1];
  if (pppppppuVar17 == pppppppuVar19) {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (long)(param_1 + 1);
    return;
  }
  if (param_3 == 0) {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (long)(param_1 + 1);
    do {
      local_100 = pppppppuVar17;
      lVar10 = FUN_008bbc60(0,param_1,param_1,&DAT_001f94c3,&local_100,&local_90);
      pppppppuVar17 = pppppppuVar17 + 0xb;
      *(undefined4 *)(lVar10 + 0x28) = 0;
    } while (pppppppuVar17 != pppppppuVar19);
    return;
  }
  lVar10 = (long)pppppppuVar19 + (-0x58 - (long)pppppppuVar17);
  if (lVar10 == 0) {
    uVar33 = 0;
    uVar36 = 0;
    pppppppuVar15 = pppppppuVar17;
LAB_008b8dac:
    do {
      pppppppuVar23 = pppppppuVar15 + 1;
      pppppppuVar15 = pppppppuVar15 + 0xb;
      uVar33 = (int)*pppppppuVar23 + uVar33;
      uVar36 = (int)((ulong)*pppppppuVar23 >> 0x20) + uVar36;
    } while (pppppppuVar15 != pppppppuVar19);
  }
  else {
    iVar32 = 0;
    iVar35 = 0;
    iVar37 = 0;
    iVar38 = 0;
    uVar27 = ((ulong)(lVar10 * 0xe8ba2e8ba2e8ba3) >> 3) + 1;
    uVar20 = uVar27 & 0x3ffffffffffffffe;
    pppppppuVar15 = pppppppuVar17 + (uVar27 & 0x3ffffffffffffffe) * 0xb;
    pppppppuVar23 = pppppppuVar17 + 0xc;
    do {
      uVar20 = uVar20 - 2;
      iVar37 = (int)pppppppuVar23[-0xb] + iVar37;
      iVar38 = (int)((ulong)pppppppuVar23[-0xb] >> 0x20) + iVar38;
      iVar32 = (int)*pppppppuVar23 + iVar32;
      iVar35 = (int)((ulong)*pppppppuVar23 >> 0x20) + iVar35;
      pppppppuVar23 = pppppppuVar23 + 0x16;
    } while (uVar20 != 0);
    uVar33 = iVar32 + iVar37;
    uVar36 = iVar35 + iVar38;
    if (uVar27 != (uVar27 & 0x3ffffffffffffffe)) goto LAB_008b8dac;
  }
  uVar30 = param_3 - uVar33;
  if (param_3 < uVar33) {
LAB_008b8dcc:
    uVar27 = (ulong)param_3;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (long)(param_1 + 1);
    do {
      iVar32 = *(int *)(pppppppuVar17 + 1);
      if (*(char *)(pppppppuVar17 + 4) == '\0') {
        iVar32 = 0;
      }
      local_100 = pppppppuVar17;
      lVar10 = FUN_008bbc60(0,param_1,param_1,&DAT_001f94c3,&local_100,&local_90);
      pppppppuVar17 = pppppppuVar17 + 0xb;
      uVar27 = uVar27 - (long)iVar32;
      *(int *)(lVar10 + 0x28) = iVar32;
      dVar39 = DAT_001f5930;
    } while (pppppppuVar17 != pppppppuVar19);
    if ((long)uVar27 < 1) {
      return;
    }
    pppppppuVar17 = (ulong *******)*param_2;
    pppppppuVar19 = (ulong *******)param_2[1];
    if (pppppppuVar17 != pppppppuVar19) {
      do {
        if (((ulong)pppppppuVar17[4] & 1) == 0) {
          ppppppuVar16 = pppppppuVar17[7];
          uVar33 = (uint)ppppppuVar16;
          if (ppppppuVar16 == (ulong ******)0xffffffffffffffff) {
            uVar33 = *(uint *)(pppppppuVar17 + 1);
          }
          if (uVar33 != 0) {
            uVar33 = *(uint *)(pppppppuVar17 + 1);
            uVar36 = uVar33;
            if (ppppppuVar16 != (ulong ******)0xffffffffffffffff) {
              uVar36 = (uint)ppppppuVar16;
            }
            if (uVar36 == 0) {
              uVar36 = (uint)((double)uVar33 * dVar39);
              if (uVar36 < 0x4e21) {
                uVar36 = 20000;
              }
              uVar33 = uVar36 + uVar33;
            }
            ppppppuVar16 = pppppppuVar17[10];
            if (((double)ppppppuVar16 != 0.0 &&
                 (double)ppppppuVar16 < 0.0 == NAN((double)ppppppuVar16)) &&
               ((double)ppppppuVar16 < 1.0)) {
              uVar33 = (uint)((1.0 - (double)ppppppuVar16) * (double)uVar33 + (double)uVar33);
            }
            if ((long)(ulong)uVar33 <= (long)uVar27) {
              local_100 = pppppppuVar17;
              lVar10 = FUN_008bbc60(0,param_1,param_1,&DAT_001f94c3,&local_100,&local_90);
              *(uint *)(lVar10 + 0x28) = uVar33;
              uVar27 = uVar27 - uVar33;
            }
          }
        }
        pppppppuVar17 = pppppppuVar17 + 0xb;
      } while (pppppppuVar17 != pppppppuVar19);
      if ((long)uVar27 < 1) {
        return;
      }
      pppppppuVar17 = (ulong *******)*param_2;
      pppppppuVar19 = (ulong *******)param_2[1];
    }
    dVar39 = DAT_001f5930;
    if (pppppppuVar17 != pppppppuVar19) {
      do {
        ppppppuVar16 = pppppppuVar17[7];
        uVar33 = (uint)ppppppuVar16;
        if (ppppppuVar16 == (ulong ******)0xffffffffffffffff) {
          uVar33 = *(uint *)(pppppppuVar17 + 1);
        }
        if (uVar33 == 0) {
          uVar33 = *(uint *)(pppppppuVar17 + 1);
          uVar36 = uVar33;
          if (ppppppuVar16 != (ulong ******)0xffffffffffffffff) {
            uVar36 = (uint)ppppppuVar16;
          }
          if (uVar36 == 0) {
            uVar36 = (uint)((double)uVar33 * dVar39);
            if (uVar36 < 0x4e21) {
              uVar36 = 20000;
            }
            uVar33 = uVar36 + uVar33;
          }
          ppppppuVar16 = pppppppuVar17[10];
          if (((double)ppppppuVar16 != 0.0 &&
               (double)ppppppuVar16 < 0.0 == NAN((double)ppppppuVar16)) &&
             ((double)ppppppuVar16 < 1.0)) {
            uVar33 = (uint)((1.0 - (double)ppppppuVar16) * (double)uVar33 + (double)uVar33);
          }
          if ((long)(ulong)uVar33 <= (long)uVar27) {
            local_100 = pppppppuVar17;
            lVar10 = FUN_008bbc60(0,param_1,param_1,&DAT_001f94c3,&local_100,&local_90);
            *(uint *)(lVar10 + 0x28) = uVar33;
            uVar27 = uVar27 - uVar33;
          }
        }
        pppppppuVar17 = pppppppuVar17 + 0xb;
      } while (pppppppuVar17 != pppppppuVar19);
      if ((long)uVar27 < 1) {
        return;
      }
    }
    uVar27 = uVar27 & 0xffffffff;
    uVar13 = 0;
    uVar14 = 1;
LAB_008b9120:
    FUN_008ba408(param_2,uVar27,uVar13,uVar14,param_1);
    return;
  }
  uVar33 = (int)((ulong)((long)pppppppuVar19 - (long)pppppppuVar17) >> 3) * -0x45d1745d;
  uVar8 = 0;
  pppppppuVar15 = pppppppuVar17;
  if (uVar33 != 0) {
    uVar8 = uVar30 / uVar33;
  }
  do {
    uVar5 = *(uint *)(pppppppuVar15 + 1);
    uVar33 = uVar5;
    if (pppppppuVar15[7] != (ulong ******)0xffffffffffffffff) {
      uVar33 = (uint)pppppppuVar15[7];
    }
    uVar24 = uVar5;
    if (uVar33 == 0) {
      uVar24 = (uint)((double)uVar5 * DAT_001f5930);
      if (uVar24 < 0x4e21) {
        uVar24 = 20000;
      }
      uVar24 = uVar24 + uVar5;
    }
    ppppppuVar16 = pppppppuVar15[10];
    if (((double)ppppppuVar16 != 0.0 && (double)ppppppuVar16 < 0.0 == NAN((double)ppppppuVar16)) &&
       ((double)ppppppuVar16 < 1.0)) {
      uVar24 = (uint)((1.0 - (double)ppppppuVar16) * (double)uVar24 + (double)uVar24);
    }
    if (uVar5 + uVar8 < uVar24) goto LAB_008b8dcc;
    pppppppuVar15 = pppppppuVar15 + 0xb;
  } while (pppppppuVar15 != pppppppuVar19);
  if (uVar36 < param_3) {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (long)(param_1 + 1);
    do {
      uVar6 = *(undefined4 *)((long)pppppppuVar17 + 0xc);
      local_100 = pppppppuVar17;
      lVar10 = FUN_008bbc60(0,param_1,param_1,&DAT_001f94c3,&local_100,&local_90);
      *(undefined4 *)(lVar10 + 0x28) = uVar6;
      piVar1 = (int *)((long)pppppppuVar17 + 0xc);
      pppppppuVar17 = pppppppuVar17 + 0xb;
      param_3 = param_3 - *piVar1;
    } while (pppppppuVar17 != pppppppuVar19);
    uVar27 = (ulong)param_3;
    uVar13 = 1;
    uVar14 = 2;
    goto LAB_008b9120;
  }
  local_d8 = (long *******)0x0;
  local_d0 = (ulong *******)0x0;
  local_c8 = &local_c0;
  local_c0 = (ulong ****)0x0;
  uStack_b8 = 0;
  local_e0 = (long *******)&local_d8;
  do {
    uVar6 = *(undefined4 *)(pppppppuVar17 + 1);
    local_100 = pppppppuVar17;
    lVar10 = FUN_008bbc60(0,&local_e0,&local_e0,&DAT_001f94c3,&local_100,&local_90);
    *(undefined4 *)(lVar10 + 0x28) = uVar6;
    iVar32 = *(int *)(pppppppuVar17 + 1);
    iVar35 = *(int *)((long)pppppppuVar17 + 0xc);
    local_100 = pppppppuVar17;
    lVar10 = FUN_008bbc60(0,&local_c8,&local_c8,&DAT_001f94c3,&local_100,&local_90);
    pppppppuVar17 = pppppppuVar17 + 0xb;
    *(int *)(lVar10 + 0x28) = iVar35 - iVar32;
  } while (pppppppuVar17 != pppppppuVar19);
  pppppppuVar19 = (ulong *******)param_2[1];
  for (pppppppuVar17 = (ulong *******)*param_2; pppppppuVar17 != pppppppuVar19;
      pppppppuVar17 = pppppppuVar17 + 0xb) {
    ppppppuVar16 = pppppppuVar17[3];
    local_100 = pppppppuVar17;
    lVar10 = FUN_008bbc60(0,&local_e0,&local_e0,&DAT_001f94c3,&local_100,&local_90);
    uVar27 = (long)ppppppuVar16 - (long)*(int *)(lVar10 + 0x28);
    if (0 < (long)uVar27 && uVar30 != 0) {
      uVar20 = uVar27;
      if (uVar30 <= uVar27) {
        uVar20 = (ulong)uVar30;
      }
      local_100 = pppppppuVar17;
      lVar10 = FUN_008bbc60(0,&local_e0,&local_e0,&DAT_001f94c3,&local_100,&local_90);
      *(int *)(lVar10 + 0x28) = *(int *)(lVar10 + 0x28) + (int)uVar20;
      local_100 = pppppppuVar17;
      lVar10 = FUN_008bbc60(0,&local_c8,&local_c8,&DAT_001f94c3,&local_100,&local_90);
      if (0xfffffffe < uVar27) {
        uVar27 = 0xffffffff;
      }
      bVar9 = (uint)uVar27 <= uVar30;
      uVar33 = uVar30 - (uint)uVar27;
      uVar30 = 0;
      if (bVar9) {
        uVar30 = uVar33;
      }
      *(int *)(lVar10 + 0x28) = *(int *)(lVar10 + 0x28) - (int)uVar20;
    }
  }
  if (uVar30 != 0) {
    puVar29 = (undefined8 *)*param_2;
    puVar4 = (undefined8 *)param_2[1];
    local_90 = (ulong *******)0x0;
    local_88 = (ulong *******)0x0;
    local_80 = (ulong *******)0x0;
    if (puVar29 == puVar4) {
      dVar39 = 0.0;
LAB_008b94b4:
      uVar27 = 0;
    }
    else {
      dVar39 = 0.0;
      do {
        local_b0 = (ulong *******)*puVar29;
        ppppuVar18 = local_c0;
        while( true ) {
          while( true ) {
            if (ppppuVar18 == (ulong ****)0x0) goto LAB_008b9554;
            if (ppppuVar18[4] <= local_b0) break;
            ppppuVar18 = (ulong ****)*ppppuVar18;
          }
          if (local_b0 <= ppppuVar18[4]) break;
          ppppuVar18 = (ulong ****)ppppuVar18[1];
        }
        uStack_a8 = *(undefined4 *)(ppppuVar18 + 5);
        local_a0 = (ulong ******)puVar29[5];
        local_f8 = (ulong *******)&local_b0;
        local_f0 = (ulong *******)&local_90;
        local_100 = (ulong *******)&local_98;
        local_98 = local_88;
        if (local_88 < local_80) {
          if (local_88 == (ulong *******)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          local_88[2] = local_a0;
          local_98 = local_88 + 3;
          local_88[1] = (ulong ******)CONCAT44(uStack_a4,uStack_a8);
          *local_88 = (ulong ******)local_b0;
        }
        else {
          FUN_008ba788(&local_100);
        }
        pdVar2 = (double *)(puVar29 + 5);
        local_88 = local_98;
        puVar29 = puVar29 + 0xb;
        dVar39 = dVar39 + *pdVar2;
      } while (puVar29 != puVar4);
      if (local_90 != local_98) {
        FUN_008ba8d0(local_90,local_98,
                     LZCOUNT(((long)local_98 - (long)local_90 >> 3) * -0x5555555555555555) << 1 ^
                     0x7e,1);
      }
      if (local_88 == local_90) goto LAB_008b94b4;
      uVar27 = 0;
      pppppppuVar19 = local_90 + 2;
      pppppppuVar15 = local_90 + 1;
      iVar32 = *(int *)pppppppuVar15;
      dVar34 = ((double)*pppppppuVar19 / dVar39) * (double)uVar30;
      pppppppuVar17 = local_90;
      if (dVar34 < (double)iVar32 == (NAN(dVar34) || NAN((double)iVar32))) {
LAB_008b9408:
        if (local_d8 != (long *******)0x0) {
          ppppppplVar25 = local_d8;
          do {
            if (*pppppppuVar17 < ppppppplVar25[4]) {
              ppppppplVar25 = (long *******)*ppppppplVar25;
            }
            else {
              if (*pppppppuVar17 <= ppppppplVar25[4]) goto LAB_008b9440;
              ppppppplVar25 = (long *******)ppppppplVar25[1];
            }
            if (ppppppplVar25 == (long *******)0x0) break;
          } while( true );
        }
        goto LAB_008b9554;
      }
    }
LAB_008b94b8:
    if (uVar27 < (ulong)(((long)local_88 - (long)local_90 >> 3) * -0x5555555555555555)) {
LAB_008b9510:
      if (local_d8 != (long *******)0x0) {
        lVar10 = uVar27 * 3;
        ppppppuVar16 = local_90[lVar10];
        ppppppplVar25 = local_d8;
        do {
          if (ppppppuVar16 < ppppppplVar25[4]) {
            ppppppplVar25 = (long *******)*ppppppplVar25;
          }
          else {
            if (ppppppuVar16 <= ppppppplVar25[4]) goto LAB_008b94e0;
            ppppppplVar25 = (long *******)ppppppplVar25[1];
          }
          if (ppppppplVar25 == (long *******)0x0) break;
        } while( true );
      }
LAB_008b9554:
                    /* WARNING: Subroutine does not return */
      FUN_005f55a8("map::at:  key not found");
    }
LAB_008b9560:
    if (local_90 != (ulong *******)0x0) {
      uVar27 = (ulong)(((long)local_90 - (long)local_88) * 0x1555555555555555) >> 3;
      uVar20 = (long)local_88 * -0x1555555555555555 - 8U >> 3;
      if (uVar20 <= uVar27) {
        uVar27 = uVar20;
      }
      pppppppuVar17 = local_88;
      if ((1 < uVar27) && ((((int)local_90 - (int)local_88 | -(int)local_88) & 7U) == 0)) {
        uVar27 = uVar27 & 0x1ffffffffffffffe;
        pppppppuVar17 = local_88 + uVar27 * -3;
        do {
          uVar27 = uVar27 - 2;
        } while (uVar27 != 0);
      }
      while (pppppppuVar17 != local_90) {
        pppppppuVar17 = pppppppuVar17 + -3;
        if (pppppppuVar17 == (ulong *******)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      local_88 = local_90;
      operator_delete(local_90);
    }
  }
  local_100 = (ulong *******)&local_c8;
  FUN_008bba88(&local_100,local_c0);
  if (param_4 == 0) {
LAB_008b9810:
    local_100 = (ulong *******)((ulong)local_100 & 0xffffffffffffff00);
    local_e8 = '\0';
  }
  else {
    puVar29 = (undefined8 *)*param_2;
    puVar4 = (undefined8 *)param_2[1];
    if (puVar29 == puVar4) goto LAB_008b9810;
    dVar39 = 0.0;
    lVar31 = 0;
    lVar10 = 0;
    do {
      if (local_d8 != (long *******)0x0) {
        pppppplVar11 = (long ******)*puVar29;
        ppppppplVar25 = local_d8;
        do {
          while (ppppppplVar25[4] <= pppppplVar11) {
            if (pppppplVar11 <= ppppppplVar25[4]) {
              if ((long ********)ppppppplVar25 == &local_d8) goto LAB_008b964c;
              iVar32 = *(int *)(ppppppplVar25 + 5);
              lVar28 = (long)iVar32;
              uVar27 = puVar29[6];
              lVar12 = lVar10;
              if (lVar10 != -0x8000000000000000) {
                lVar12 = lVar10 + lVar28;
              }
              if (lVar10 != 0x7fffffffffffffff) {
                lVar10 = lVar12;
              }
              if ((uVar27 >> 0x20 & 1) == 0) goto LAB_008b964c;
              if ((uVar27 & 0xfffffffd) == 0) {
                auVar41 = (*(code *)(*pppppplVar11)[1])();
                lVar12 = auVar41._0_8_;
                if (((auVar41 & (undefined1  [16])0x1) == (undefined1  [16])0x0) ||
                   (lVar7 = lVar28 - lVar12, lVar7 == 0 || lVar28 < lVar12)) goto LAB_008b974c;
                lVar28 = 0x7fffffffffffffff;
                if ((lVar12 != -0x8000000000000000) &&
                   ((lVar31 != 0x7fffffffffffffff && (lVar7 != 0x7fffffffffffffff)))) {
                  lVar28 = -0x8000000000000000;
                  if (lVar7 != -0x8000000000000000 && lVar31 != -0x8000000000000000) {
                    lVar28 = lVar7 + lVar31;
                  }
                }
                lVar31 = lVar28;
                if ((int)uVar27 != 2) goto LAB_008b974c;
                if (lVar12 < iVar32 / 2) goto LAB_008b964c;
              }
              else {
LAB_008b974c:
                if (1 < (int)uVar27 - 1U) goto LAB_008b964c;
              }
              dVar39 = dVar39 + (double)puVar29[5];
              goto LAB_008b964c;
            }
            ppppppplVar25 = (long *******)ppppppplVar25[1];
            if (ppppppplVar25 == (long *******)0x0) goto LAB_008b964c;
          }
          ppppppplVar25 = (long *******)*ppppppplVar25;
        } while (ppppppplVar25 != (long *******)0x0);
      }
LAB_008b964c:
      puVar29 = puVar29 + 0xb;
    } while (puVar29 != puVar4);
    lVar12 = lVar10;
    if (lVar10 != 0x7fffffffffffffff) {
      lVar12 = lVar10 - (ulong)param_3;
    }
    lVar28 = 0;
    if ((long)(ulong)param_3 <= lVar10) {
      lVar28 = lVar12;
    }
    if ((dVar39 < DAT_001f4f18) || (lVar31 < lVar28)) goto LAB_008b9810;
    local_88 = (ulong *******)0x0;
    local_80 = (ulong *******)0x0;
    dVar34 = -9.223372036854776e+18;
    if (lVar28 != 0x7fffffffffffffff) {
      dVar34 = (double)(lVar31 - lVar28);
    }
    dVar40 = 9.223372036854776e+18;
    if (lVar31 != 0x7fffffffffffffff) {
      dVar40 = dVar34;
    }
    local_90 = (ulong *******)&local_88;
    if (local_d0 != (ulong *******)0x0) {
      local_88 = (ulong *******)FUN_008bb9c8(&local_90,local_d8,&local_90);
      local_88[2] = (ulong ******)&local_88;
      pppppppuVar17 = local_88;
      do {
        local_90 = pppppppuVar17;
        pppppppuVar17 = (ulong *******)*local_90;
      } while (pppppppuVar17 != (ulong *******)0x0);
      local_80 = local_d0;
    }
    local_f0 = local_80;
    local_f8 = local_88;
    puVar4 = (undefined8 *)param_2[1];
    for (puVar29 = (undefined8 *)*param_2; puVar29 != puVar4; puVar29 = puVar29 + 0xb) {
      if (local_88 != (ulong *******)0x0) {
        pppppppuVar17 = local_88;
        do {
          while (pppppppuVar17[4] <= (ulong ******)*puVar29) {
            if ((ulong ******)*puVar29 <= pppppppuVar17[4]) {
              if (((ulong ********)pppppppuVar17 != &local_88) &&
                 ((puVar29[6] & 0x1ffffffff) - 0x100000001 < 2)) {
                uVar27 = (ulong)*(int *)(pppppppuVar17 + 5);
                if ((long)uVar27 < (long)param_4) {
                  uVar26 = (ulong)(dVar40 * ((double)puVar29[5] / dVar39));
                  uVar20 = uVar26 + uVar27;
                  if ((long)param_4 <= (long)(uVar26 + uVar27)) {
                    uVar20 = param_4;
                  }
                  uVar3 = uVar26;
                  if (uVar26 != 0x8000000000000000) {
                    uVar3 = uVar20;
                  }
                  uVar27 = param_4;
                  if (uVar26 != 0x7fffffffffffffff) {
                    uVar27 = uVar3;
                  }
                }
                if ((long)(ulong)*(uint *)((long)puVar29 + 0xc) <= (long)uVar27) {
                  uVar27 = (ulong)*(uint *)((long)puVar29 + 0xc);
                }
                *(int *)(pppppppuVar17 + 5) = (int)uVar27;
              }
              goto LAB_008b98d8;
            }
            pppppppuVar17 = (ulong *******)pppppppuVar17[1];
            if (pppppppuVar17 == (ulong *******)0x0) goto LAB_008b98d8;
          }
          pppppppuVar17 = (ulong *******)*pppppppuVar17;
        } while (pppppppuVar17 != (ulong *******)0x0);
      }
LAB_008b98d8:
    }
    local_100 = (ulong *******)&local_f8;
    if (local_80 != (ulong *******)0x0) {
      local_88[2] = (ulong ******)local_100;
      local_88 = (ulong *******)0x0;
      local_80 = (ulong *******)0x0;
      local_100 = local_90;
      local_90 = (ulong *******)&local_88;
    }
    local_b0 = (ulong *******)&local_90;
    local_e8 = '\x01';
    FUN_008bba88(&local_b0,local_88);
    if (local_e8 == '\x01') {
      *param_1 = (long)local_100;
      ppppppuVar16 = (ulong ******)(param_1 + 1);
      *ppppppuVar16 = (ulong *****)local_f8;
      param_1[2] = (long)local_f0;
      if (local_f0 == (ulong *******)0x0) {
        *param_1 = (long)ppppppuVar16;
      }
      else {
        local_f8[2] = ppppppuVar16;
        local_100 = (ulong *******)&local_f8;
        local_f8 = (ulong *******)0x0;
        local_f0 = (ulong *******)0x0;
      }
      goto LAB_008b9864;
    }
  }
  param_1[2] = 0;
  plVar22 = param_1 + 1;
  *plVar22 = 0;
  *param_1 = (long)plVar22;
  if (local_d0 != (ulong *******)0x0) {
    lVar10 = FUN_008bb9c8(param_1,local_d8,param_1);
    param_1[1] = lVar10;
    *(long **)(lVar10 + 0x10) = plVar22;
    plVar22 = (long *)param_1[1];
    do {
      plVar21 = plVar22;
      plVar22 = (long *)*plVar21;
    } while (plVar22 != (long *)0x0);
    *param_1 = (long)plVar21;
    param_1[2] = (long)local_d0;
  }
LAB_008b9864:
  if (local_e8 == '\x01') {
    local_90 = (ulong *******)&local_100;
    FUN_008bba88(&local_90,local_f8);
  }
  local_100 = (ulong *******)&local_e0;
  FUN_008bba88(&local_100,local_d8);
  return;
LAB_008b9440:
  uVar27 = uVar27 + 1;
  *(int *)(ppppppplVar25 + 5) = *(int *)(ppppppplVar25 + 5) + iVar32;
  dVar39 = dVar39 - (double)*pppppppuVar19;
  uVar30 = uVar30 - *(int *)pppppppuVar15;
  if ((ulong)(((long)local_88 - (long)local_90 >> 3) * -0x5555555555555555) <= uVar27)
  goto LAB_008b94b8;
  pppppppuVar17 = local_90 + uVar27 * 3;
  pppppppuVar19 = pppppppuVar17 + 2;
  pppppppuVar15 = pppppppuVar17 + 1;
  iVar32 = *(int *)pppppppuVar15;
  dVar34 = ((double)*pppppppuVar19 / dVar39) * (double)uVar30;
  if (dVar34 < (double)iVar32 != (NAN(dVar34) || NAN((double)iVar32))) goto LAB_008b94b8;
  goto LAB_008b9408;
LAB_008b94e0:
  uVar27 = uVar27 + 1;
  *(int *)(ppppppplVar25 + 5) =
       (int)(((double)(local_90 + lVar10)[2] / dVar39) * (double)uVar30 +
            (double)*(int *)(ppppppplVar25 + 5));
  if ((ulong)(((long)local_88 - (long)local_90 >> 3) * -0x5555555555555555) <= uVar27)
  goto LAB_008b9560;
  goto LAB_008b9510;
}


// ===== 008b9a20  FUN_008b9a20 =====

void FUN_008b9a20(long param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  long local_d8;
  long lStack_d0;
  long local_c8;
  void *local_c0 [2];
  char cStack_a9;
  void *local_a8 [2];
  char cStack_91;
  void *local_90 [2];
  char cStack_79;
  char *local_78;
  undefined8 local_70;
  undefined1 *local_68;
  char *local_60;
  char **ppcStack_58;
  void **local_50;
  char **ppcStack_48;
  undefined1 uStack_21;
  
  if (*(long **)(param_1 + 0x10) == *(long **)(param_1 + 0x18)) {
    lVar7 = 0;
    lVar8 = 0;
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    lVar8 = 0;
    lVar7 = 0;
    plVar4 = *(long **)(param_1 + 0x10) + 7;
    do {
      uVar3 = *(uint *)(plVar4 + -5);
      uVar5 = (ulong)uVar3;
      if ((char)plVar4[-3] == '\x01') {
        if (lVar9 == 0x7fffffffffffffff) {
          lVar9 = 0x7fffffffffffffff;
        }
        else if (lVar9 != -0x8000000000000000) {
          lVar9 = lVar9 + (ulong)*(uint *)(plVar4 + -6);
        }
      }
      else if (*plVar4 == 0) {
        uVar6 = (uint)((double)*(uint *)(plVar4 + -6) * DAT_001f5930);
        dVar10 = (double)plVar4[3];
        if (uVar6 < 0x4e21) {
          uVar6 = 20000;
        }
        uVar6 = uVar6 + *(uint *)(plVar4 + -6);
        if ((dVar10 != 0.0 && dVar10 < 0.0 == NAN(dVar10)) && (dVar10 < 1.0)) {
          uVar6 = (uint)((1.0 - dVar10) * (double)uVar6 + (double)uVar6);
        }
        if (uVar6 <= uVar3) {
          uVar6 = uVar3;
        }
        uVar5 = (ulong)uVar6;
      }
      lVar2 = lVar7;
      if (lVar7 != -0x8000000000000000) {
        lVar2 = lVar7 + uVar5;
      }
      if (lVar7 != 0x7fffffffffffffff) {
        lVar7 = lVar2;
      }
      lVar2 = lVar8;
      if (lVar8 != -0x8000000000000000) {
        lVar2 = lVar8 + (ulong)*(uint *)((long)plVar4 + -0x2c);
      }
      plVar1 = plVar4 + 4;
      if (lVar8 != 0x7fffffffffffffff) {
        lVar8 = lVar2;
      }
      plVar4 = plVar4 + 0xb;
    } while (plVar1 != *(long **)(param_1 + 0x18));
  }
  if (((lVar9 != *(long *)(param_1 + 0x58)) || (lVar8 != *(long *)(param_1 + 0x60))) ||
     (lVar7 != *(long *)(param_1 + 0x68))) {
    *(long *)(param_1 + 0x58) = lVar9;
    *(long *)(param_1 + 0x60) = lVar8;
    *(long *)(param_1 + 0x68) = lVar7;
    uVar5 = FUN_00417e08();
    if ((uVar5 & 1) == 0) {
      local_78 = "../../call/bitrate_allocator.cc";
      local_70 = 0x1579;
      local_68 = &uStack_21;
      ppcStack_58 = &local_78;
      local_60 = "UpdateAllocationLimits : total_requested_min_bitrate: ";
      FUN_00665ccc(local_90,lVar9);
      ppcStack_48 = &local_60;
      local_50 = local_90;
      FUN_00665ccc(local_a8,lVar7);
      FUN_00665ccc(local_c0,lVar8);
      FUN_00623bb0("\r\t\n\t\n\t\n",*ppcStack_58,*(undefined4 *)(ppcStack_58 + 1),local_60,local_50,
                   ", total_requested_padding_bitrate: ",local_a8,", total_requested_max_bitrate: ",
                   local_c0);
      if (cStack_a9 < '\0') {
        operator_delete(local_c0[0]);
      }
      if (cStack_91 < '\0') {
        operator_delete(local_a8[0]);
      }
      if (cStack_79 < '\0') {
        operator_delete(local_90[0]);
      }
    }
    local_d8 = lVar9;
    lStack_d0 = lVar8;
    local_c8 = lVar7;
    (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),&local_d8);
  }
  return;
}


// ===== 008b9ca4  FUN_008b9ca4 =====

void FUN_008b9ca4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 **ppuVar1;
  undefined8 **ppuVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 extraout_w1;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_110;
  double local_108;
  long local_100;
  long lStack_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  double local_e0;
  long local_d8;
  long lStack_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80;
  uint7 uStack_7f;
  undefined1 uStack_78;
  uint7 uStack_77;
  undefined8 local_70;
  undefined1 uStack_61;
  undefined8 **local_48;
  
  puVar7 = (undefined8 *)(param_1 + 0x10);
  puVar6 = (undefined8 *)*puVar7;
  puVar8 = *(undefined8 **)(param_1 + 0x18);
  if (puVar6 == puVar8) {
LAB_008b9cfc:
    if (puVar6 != puVar8) {
      uVar12 = param_3[3];
      uVar11 = param_3[2];
      uVar10 = param_3[5];
      uVar9 = param_3[4];
      uVar13 = *param_3;
      puVar6[2] = param_3[1];
      puVar6[1] = uVar13;
      puVar6[6] = uVar10;
      puVar6[5] = uVar9;
      puVar6[4] = uVar12;
      puVar6[3] = uVar11;
      iVar4 = *(int *)(param_1 + 0x28);
      goto joined_r0x008b9d1c;
    }
  }
  else {
    do {
      if ((undefined8 *)*puVar6 == param_2) goto LAB_008b9cfc;
      puVar6 = puVar6 + 0xb;
    } while (puVar6 != puVar8);
  }
  puStack_b0 = (undefined1 *)param_3[1];
  puStack_b8 = (undefined1 *)*param_3;
  uStack_a0 = param_3[3];
  local_a8 = param_3[2];
  local_88 = 0xffffffffffffffff;
  uStack_90 = param_3[5];
  local_98 = param_3[4];
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0x3ff0000000000000;
  local_c0 = param_2;
  if (puVar8 < *(undefined8 **)(param_1 + 0x20)) {
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar6 = puVar8 + 0xb;
    puVar8[5] = local_98;
    puVar8[4] = uStack_a0;
    puVar8[7] = 0xffffffffffffffff;
    puVar8[6] = uStack_90;
    puVar8[1] = puStack_b8;
    *puVar8 = param_2;
    puVar8[3] = local_a8;
    puVar8[2] = puStack_b0;
    puVar8[10] = 0x3ff0000000000000;
    puVar8[9] = (ulong)uStack_77 << 8;
    puVar8[8] = (ulong)uStack_7f << 8;
  }
  else {
    puVar6 = (undefined8 *)FUN_008bbafc(puVar7,&local_c0);
  }
  *(undefined8 **)(param_1 + 0x18) = puVar6;
  iVar4 = *(int *)(param_1 + 0x28);
joined_r0x008b9d1c:
  if (iVar4 == 0) {
    local_110 = 0;
    local_f0 = 0;
    local_100 = *(long *)(param_1 + 0x38) * 1000;
    local_108 = (double)*(byte *)(param_1 + 0x30) / 256.0;
    lStack_f8 = *(long *)(param_1 + 0x40) * 1000;
    (**(code **)*param_2)(param_2,&local_110);
  }
  else {
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
    puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_008b8c94(&local_c0,puVar7,iVar4,*(undefined8 *)(param_1 + 0x70));
    ppuVar2 = *(undefined8 ***)(param_1 + 0x18);
    for (ppuVar1 = *(undefined8 ***)(param_1 + 0x10); ppuVar1 != ppuVar2; ppuVar1 = ppuVar1 + 0xb) {
      local_48 = ppuVar1;
      lVar5 = FUN_008bbc60(0,&local_c0,&local_c0,&DAT_001f94c3,&local_48,&uStack_61);
      uVar3 = *(uint *)(lVar5 + 0x28);
      puVar8 = (undefined8 *)(ulong)uVar3;
      local_c8 = 0;
      local_d8 = *(long *)(param_1 + 0x38) * 1000;
      local_e0 = (double)*(byte *)(param_1 + 0x30) / 256.0;
      lStack_d0 = *(long *)(param_1 + 0x40) * 1000;
      local_e8 = puVar8;
      iVar4 = (**(code **)**ppuVar1)(*ppuVar1,&local_e8);
      ppuVar1[7] = puVar8;
      puVar6 = (undefined8 *)(**(code **)(**ppuVar1 + 8))(*ppuVar1);
      ppuVar1[8] = puVar6;
      *(undefined1 *)(ppuVar1 + 9) = extraout_w1;
      if (uVar3 != 0) {
        if (iVar4 == 0) {
          puVar6 = (undefined8 *)0x3ff0000000000000;
        }
        else {
          puVar6 = (undefined8 *)((double)(uVar3 - iVar4) / (double)(long)puVar8);
        }
        ppuVar1[10] = puVar6;
      }
    }
    local_48 = &local_c0;
    FUN_008bba88(&local_48,puStack_b8);
  }
  FUN_008b9a20(param_1);
  return;
}


// ===== 008b9f1c  FUN_008b9f1c =====

uint FUN_008b9f1c(long param_1)

{
  long lVar1;
  undefined1 **ppuVar2;
  undefined8 *puVar3;
  undefined1 **ppuVar4;
  uint uVar5;
  double dVar6;
  int iVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 extraout_w1;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined1 *local_b8;
  double local_b0;
  long local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 uStack_71;
  undefined1 **local_68;
  
  dVar6 = DAT_001f5108;
  uVar10 = *(ulong *)(param_1 + 0x70);
  if (uVar10 != 0) {
    puVar13 = *(undefined8 **)(param_1 + 0x10);
    puVar3 = *(undefined8 **)(param_1 + 0x18);
    if (puVar13 == puVar3) {
      uVar10 = 0;
    }
    else {
      uVar14 = 0;
      uVar16 = 0;
      uVar15 = 0;
      do {
        if (*(char *)((long)puVar13 + 0x34) == '\x01') {
          uVar5 = *(uint *)(puVar13 + 6);
          if ((uVar5 & 0xfffffffd) == 0) {
            auVar17 = (**(code **)(*(long *)*puVar13 + 8))();
            lVar8 = auVar17._0_8_;
            if ((auVar17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
              lVar8 = 0;
            }
            if ((*(char *)(puVar13 + 9) == '\x01') && (lVar11 = puVar13[8], lVar11 != 0)) {
              uVar10 = puVar13[7];
              if (uVar10 == 0xffffffffffffffff) {
                uVar10 = (ulong)*(uint *)(puVar13 + 1);
              }
              uVar16 = 1;
              if ((lVar11 != 0x7fffffffffffffff) &&
                 (lVar12 = (long)((double)(uVar10 & 0xffffffff) * dVar6),
                 lVar12 != 0x7fffffffffffffff)) {
                lVar1 = -0x8000000000000000;
                if (lVar12 != -0x8000000000000000 && lVar11 != -0x8000000000000000) {
                  lVar1 = lVar12 + lVar11;
                }
                uVar14 = lVar1 < lVar8 | uVar14;
              }
            }
          }
          uVar15 = uVar5 - 1 < 2 | uVar15;
        }
        puVar13 = puVar13 + 0xb;
      } while (puVar13 != puVar3);
      uVar10 = (ulong)(uVar16 & uVar15);
      if ((uVar16 & uVar15 & uVar14) != 0) {
        if (*(int *)(param_1 + 0x28) != 0) {
          puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
          local_90 = &DAT_aaaaaaaaaaaaaaaa;
          local_80 = &DAT_aaaaaaaaaaaaaaaa;
          FUN_008b8c94(&local_90,(long *)(param_1 + 0x10),*(int *)(param_1 + 0x28),
                       *(undefined8 *)(param_1 + 0x70));
          ppuVar4 = *(undefined1 ***)(param_1 + 0x18);
          for (ppuVar2 = *(undefined1 ***)(param_1 + 0x10); ppuVar2 != ppuVar4;
              ppuVar2 = ppuVar2 + 0xb) {
            local_68 = ppuVar2;
            lVar8 = FUN_008bbc60(0,&local_90,&local_90,&DAT_001f94c3,&local_68,&uStack_71);
            uVar15 = *(uint *)(lVar8 + 0x28);
            local_98 = 0;
            local_a8 = *(long *)(param_1 + 0x38) * 1000;
            local_b0 = (double)*(byte *)(param_1 + 0x30) / 256.0;
            lStack_a0 = *(long *)(param_1 + 0x40) * 1000;
            local_b8 = (undefined1 *)(long)(int)uVar15;
            iVar7 = (*(code *)**(undefined8 **)*ppuVar2)(*ppuVar2,&local_b8);
            ppuVar2[7] = (undefined1 *)(long)(int)uVar15;
            puVar9 = (undefined1 *)(**(code **)(*(long *)*ppuVar2 + 8))(*ppuVar2);
            ppuVar2[8] = puVar9;
            *(undefined1 *)(ppuVar2 + 9) = extraout_w1;
            if (0 < (int)uVar15) {
              if (iVar7 == 0) {
                puVar9 = (undefined1 *)0x3ff0000000000000;
              }
              else {
                puVar9 = (undefined1 *)((double)(uVar15 - iVar7) / (double)uVar15);
              }
              ppuVar2[10] = puVar9;
            }
          }
          FUN_008b9a20(param_1);
          local_68 = &local_90;
          FUN_008bba88(&local_68,puStack_88);
        }
        uVar10 = 1;
      }
    }
  }
  return (uint)uVar10 & 1;
}


// ===== 008ba188  FUN_008ba188 =====

void FUN_008ba188(long param_1,long param_2)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *__dest;
  
  __dest = *(long **)(param_1 + 0x10);
  plVar1 = *(long **)(param_1 + 0x18);
  if (__dest != plVar1) {
    __n = (long)plVar1 - (long)__dest;
    do {
      __n = __n - 0x58;
      if (*__dest == param_2) {
        memmove(__dest,__dest + 0xb,__n);
        lVar2 = *(long *)(param_1 + 0x18);
        uVar3 = ((long)plVar1 - lVar2) * 0x11745d1745d1745d + 8U >> 3;
        uVar4 = lVar2 * -0x11745d1745d1745d - 8U >> 3;
        if (uVar4 <= uVar3) {
          uVar3 = uVar4;
        }
        if ((1 < uVar3) && ((-(int)lVar2 & 7U) == 0)) {
          uVar3 = uVar3 & 0x1ffffffffffffffe;
          lVar2 = lVar2 + uVar3 * -0x58;
          do {
            uVar3 = uVar3 - 2;
          } while (uVar3 != 0);
        }
        while (lVar2 != (long)__dest + __n) {
          lVar2 = lVar2 + -0x58;
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        *(size_t *)(param_1 + 0x18) = (long)__dest + __n;
        break;
      }
      __dest = __dest + 0xb;
    } while (__dest != plVar1);
  }
  FUN_008b9a20(param_1);
  return;
}


// ===== 008ba298  FUN_008ba298 =====

ulong FUN_008ba298(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  
  plVar1 = *(long **)(param_1 + 0x10);
  plVar2 = *(long **)(param_1 + 0x18);
  plVar5 = plVar1;
  if (plVar1 == plVar2) {
LAB_008ba2c8:
    if (plVar5 != plVar2) {
      if (plVar5[7] != 0xffffffffffffffff) {
        return plVar5[7] & 0xffffffff;
      }
      uVar4 = (int)((ulong)((long)plVar2 - (long)plVar1) >> 3) * -0x45d1745d;
      goto LAB_008ba314;
    }
  }
  else {
    do {
      if (*plVar5 == param_2) goto LAB_008ba2c8;
      plVar5 = plVar5 + 0xb;
    } while (plVar5 != plVar2);
  }
  uVar4 = (int)((ulong)((long)plVar2 - (long)plVar1) >> 3) * -0x45d1745d + 1;
LAB_008ba314:
  uVar3 = 0;
  if (uVar4 != 0) {
    uVar3 = *(uint *)(param_1 + 0x2c) / uVar4;
  }
  return (ulong)uVar3;
}


// ===== 008ba324  FUN_008ba324 =====

undefined8 FUN_008ba324(long *param_1)

{
  undefined1 *puVar1;
  undefined8 ***pppuVar2;
  undefined ***local_98;
  undefined8 **local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined **local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00661054(&local_70,"upper_limit",0xb);
  local_30 = (undefined1 *)0x0;
  local_70 = &PTR_FUN_00d28090;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_1 + 0x10))(&local_90,param_1,"WebRTC-ElasticBitrateAllocation",0x1f);
  puVar1 = puStack_88;
  pppuVar2 = (undefined8 ***)local_90;
  if (-1 < (long)local_80) {
    puVar1 = (undefined1 *)((ulong)local_80 >> 0x38);
    pppuVar2 = &local_90;
  }
  local_98 = &local_70;
  FUN_00661cc0(&local_98,1,pppuVar2,puVar1);
  puVar1 = local_30;
  if ((long)local_80 < 0) {
    operator_delete(local_90);
  }
  FUN_006634ac(&local_70);
  return puVar1;
}


// ===== 008ba408  FUN_008ba408 =====

void FUN_008ba408(long *param_1,uint param_2,uint param_3,int param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  bool bVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 **local_78;
  ulong *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  long local_58;
  
  puVar13 = (ulong *)*param_1;
  puVar3 = (ulong *)param_1[1];
  local_60 = 0;
  local_58 = 0;
  local_68 = &local_60;
  if (puVar13 != puVar3) {
LAB_008ba484:
    if ((param_3 & 1) != 0) goto LAB_008ba460;
    plVar10 = *(long **)(param_5 + 8);
    if (plVar10 != (long *)0x0) {
      do {
        if (*puVar13 < (ulong)plVar10[4]) {
          plVar10 = (long *)*plVar10;
        }
        else {
          if (*puVar13 <= (ulong)plVar10[4]) goto LAB_008ba458;
          plVar10 = (long *)plVar10[1];
        }
        if (plVar10 == (long *)0x0) break;
      } while( true );
    }
    goto LAB_008ba4bc;
  }
LAB_008ba5e4:
  local_78 = &local_68;
  FUN_008ba714(&local_78,local_60);
  return;
LAB_008ba458:
  if ((int)plVar10[5] != 0) {
LAB_008ba460:
    local_78 = (undefined8 **)CONCAT44(local_78._4_4_,*(undefined4 *)((long)puVar13 + 0xc));
    local_70 = puVar13;
    FUN_008ba628(&local_68,&local_78);
  }
  puVar13 = puVar13 + 0xb;
  puVar7 = local_68;
  if (puVar13 == puVar3) goto joined_r0x008ba4d0;
  goto LAB_008ba484;
joined_r0x008ba4d0:
  if (puVar7 != &local_60) {
    plVar10 = *(long **)(param_5 + 8);
    if (plVar10 != (long *)0x0) {
      uVar5 = 0;
      if ((uint)local_58 != 0) {
        uVar5 = param_2 / (uint)local_58;
      }
      uVar11 = *(ulong *)puVar7[5];
      plVar12 = plVar10;
      do {
        if (uVar11 < (ulong)plVar12[4]) {
          plVar12 = (long *)*plVar12;
        }
        else {
          if (uVar11 <= (ulong)plVar12[4]) goto LAB_008ba520;
          plVar12 = (long *)plVar12[1];
        }
        if (plVar12 == (long *)0x0) break;
      } while( true );
    }
LAB_008ba4bc:
                    /* WARNING: Subroutine does not return */
    FUN_005f55a8("map::at:  key not found");
  }
  goto LAB_008ba5e4;
LAB_008ba520:
  uVar4 = *(int *)(puVar7 + 4) * param_4;
  uVar1 = (int)plVar12[5] + uVar5;
  uVar2 = uVar1;
  iVar6 = 0;
  if (uVar4 <= uVar1) {
    uVar2 = uVar4;
    iVar6 = uVar1 - uVar4;
  }
  param_2 = (param_2 - uVar5) + iVar6;
  do {
    if (uVar11 < (ulong)plVar10[4]) {
      plVar10 = (long *)*plVar10;
    }
    else {
      if (uVar11 <= (ulong)plVar10[4]) break;
      plVar10 = (long *)plVar10[1];
    }
    if (plVar10 == (long *)0x0) goto LAB_008ba4bc;
  } while( true );
  *(uint *)(plVar10 + 5) = uVar2;
  puVar8 = (undefined8 *)puVar7[1];
  puVar14 = puVar7;
  if ((undefined8 *)puVar7[1] == (undefined8 *)0x0) {
    do {
      puVar15 = (undefined8 *)puVar14[2];
      bVar9 = puVar14 != (undefined8 *)*puVar15;
      puVar14 = puVar15;
    } while (bVar9);
  }
  else {
    do {
      puVar15 = puVar8;
      puVar8 = (undefined8 *)*puVar15;
    } while ((undefined8 *)*puVar15 != (undefined8 *)0x0);
  }
  if (local_68 == puVar7) {
    local_68 = puVar15;
  }
  local_58 = local_58 + -1;
  FUN_005d5d48(local_60,puVar7);
  if ((int *)(puVar7 + 4) == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  operator_delete(puVar7);
  puVar7 = puVar15;
  goto joined_r0x008ba4d0;
}


// ===== 008ba628  FUN_008ba628 =====

undefined8 * FUN_008ba628(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    puVar4 = (uint *)(puVar1 + 4);
    *puVar1 = 0;
    if (puVar4 != (uint *)0x0) {
      uVar7 = *param_2;
      plVar3 = param_1 + 1;
      plVar6 = (long *)*plVar3;
      puVar1[5] = param_2[1];
      *(undefined8 *)puVar4 = uVar7;
      plVar5 = plVar3;
      if (plVar6 != (long *)0x0) {
        do {
          while (plVar3 = plVar6, *(uint *)(plVar3 + 4) <= *puVar4) {
            plVar6 = (long *)plVar3[1];
            if ((long *)plVar3[1] == (long *)0x0) {
              plVar5 = plVar3 + 1;
              goto LAB_008ba6b0;
            }
          }
          plVar5 = plVar3;
          plVar6 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
LAB_008ba6b0:
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = plVar3;
      *plVar5 = (long)puVar1;
      puVar2 = puVar1;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        puVar2 = (undefined8 *)*plVar5;
      }
      FUN_005d5b94(param_1[1],puVar2);
      param_1[2] = param_1[2] + 1;
      return puVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008ba714  FUN_008ba714 =====

void FUN_008ba714(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_008ba714(param_1,*param_2);
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


// ===== 008ba788  FUN_008ba788 =====

void FUN_008ba788(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  size_t __n;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__dest;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  plVar7 = (long *)param_1[2];
  puVar6 = (undefined8 *)(plVar7[1] - *plVar7);
  uVar3 = ((long)puVar6 >> 3) * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar3) {
    FUN_008ba8b8();
LAB_008ba8b4:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  puVar8 = (undefined8 *)param_1[1];
  lVar4 = plVar7[2] - *plVar7 >> 3;
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
    if (0xaaaaaaaaaaaaaaa < uVar5) goto LAB_008ba8b4;
    pvVar1 = operator_new(uVar5 * 0x18);
    puVar6 = (undefined8 *)((long)pvVar1 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    uVar10 = puVar8[1];
    uVar9 = *puVar8;
    puVar6[2] = puVar8[2];
    puVar6[1] = uVar10;
    *puVar6 = uVar9;
    __n = plVar7[1] - *plVar7;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*plVar7,__n);
    pvVar2 = (void *)*plVar7;
    *plVar7 = (long)__dest;
    plVar7[1] = (long)(puVar6 + 3);
    plVar7[2] = (long)((long)pvVar1 + uVar5 * 0x18);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    *(undefined8 **)*param_1 = puVar6 + 3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008ba8b8  FUN_008ba8b8 =====

void FUN_008ba8b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 008ba8d0  FUN_008ba8d0 =====

void FUN_008ba8d0(undefined8 *param_1,undefined8 *param_2,long param_3,uint param_4)

{
  int *piVar1;
  double *pdVar2;
  ulong uVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  ulong uVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  double dVar31;
  double dVar32;
  undefined4 uVar33;
  undefined8 uVar34;
  
LAB_008ba90c:
  puVar19 = param_2 + -3;
  puVar22 = param_1;
LAB_008ba914:
  while( true ) {
    param_1 = puVar22;
    uVar10 = (long)param_2 - (long)param_1;
    uVar11 = ((long)uVar10 >> 3) * -0x5555555555555555;
    if (uVar11 - 2 == 0 || (long)uVar11 < 2) {
      if (uVar11 < 2) {
        return;
      }
      if (uVar11 == 2) {
        iVar17 = *(int *)(param_1 + 1);
        dVar31 = (double)param_1[2];
        if ((double)iVar17 / dVar31 <= (double)*(int *)(param_2 + -2) / (double)param_2[-1]) {
          return;
        }
        uVar30 = param_2[-2];
        uVar12 = param_2[-3];
        uVar15 = *param_1;
        param_1[2] = param_2[-1];
        uVar33 = *(undefined4 *)((long)param_1 + 0xc);
        param_1[1] = uVar30;
        *param_1 = uVar12;
        param_2[-3] = uVar15;
        *(int *)(param_2 + -2) = iVar17;
        *(undefined4 *)((long)param_2 + -0xc) = uVar33;
        param_2[-1] = dVar31;
        return;
      }
    }
    else {
      if (uVar11 == 3) {
        FUN_008bb3d8(param_1,param_1 + 3,puVar19);
        return;
      }
      if (uVar11 == 4) {
        FUN_008bb530(param_1,param_1 + 3,param_1 + 6,puVar19);
        return;
      }
      if (uVar11 == 5) {
        FUN_008bb650(param_1,param_1 + 3,param_1 + 6,param_1 + 9,puVar19);
        return;
      }
    }
    if ((long)uVar10 < 0x240) {
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2) {
          return;
        }
        if (param_1 + 3 == param_2) {
          return;
        }
        lVar13 = -0x18;
        puVar22 = param_1 + 3;
        do {
          puVar19 = puVar22;
          iVar17 = *(int *)(param_1 + 4);
          dVar31 = (double)param_1[5];
          dVar32 = (double)iVar17 / dVar31;
          if (dVar32 < (double)*(int *)(param_1 + 1) / (double)param_1[2]) {
            uVar33 = *(undefined4 *)((long)param_1 + 0x24);
            uVar15 = *puVar19;
            puVar22 = puVar19;
            lVar23 = lVar13;
            do {
              puVar14 = puVar22;
              puVar14[1] = puVar14[-2];
              *puVar14 = puVar14[-3];
              puVar14[2] = puVar14[-1];
              if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__algorithm/sort.h:293: libc++ Hardening assertion __k != __leftmost failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                          );
              }
              lVar23 = lVar23 + 0x18;
              puVar22 = puVar14 + -3;
            } while (dVar32 < (double)*(int *)(puVar14 + -5) / (double)puVar14[-4]);
            puVar14[-3] = uVar15;
            *(int *)(puVar14 + -2) = iVar17;
            puVar14[-1] = dVar31;
            *(undefined4 *)((long)puVar14 - 0xc) = uVar33;
          }
          lVar13 = lVar13 + -0x18;
          puVar22 = puVar19 + 3;
          param_1 = puVar19;
        } while (puVar19 + 3 != param_2);
        return;
      }
      if (param_1 == param_2) {
        return;
      }
      if (param_1 + 3 == param_2) {
        return;
      }
      lVar13 = 0;
      puVar22 = param_1 + 3;
      puVar19 = param_1;
      goto LAB_008baec8;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar16 = uVar11 - 2 >> 1;
      uVar8 = uVar16;
      goto LAB_008baf78;
    }
    puVar22 = param_1 + (uVar11 >> 1) * 3;
    if (uVar10 < 0xc01) break;
    FUN_008bb3d8(param_1,puVar22,param_2 + -3);
    FUN_008bb3d8(param_1 + 3,puVar22 + -3,param_2 + -6);
    FUN_008bb3d8(param_1 + 6,puVar22 + 3,param_2 + -9);
    FUN_008bb3d8(puVar22 + -3,puVar22,puVar22 + 3);
    uVar30 = *puVar22;
    uVar15 = *param_1;
    uVar12 = puVar22[2];
    uVar33 = *(undefined4 *)(param_1 + 1);
    uVar5 = *(undefined4 *)((long)param_1 + 0xc);
    param_1[1] = puVar22[1];
    *param_1 = uVar30;
    uVar30 = param_1[2];
    param_1[2] = uVar12;
    *puVar22 = uVar15;
    *(undefined4 *)(puVar22 + 1) = uVar33;
    *(undefined4 *)((long)puVar22 + 0xc) = uVar5;
    puVar22[2] = uVar30;
    if ((param_4 & 1) != 0) goto LAB_008baa6c;
LAB_008ba9e0:
    iVar17 = *(int *)(param_1 + 1);
    dVar31 = (double)param_1[2];
    dVar32 = (double)iVar17 / dVar31;
    if ((double)*(int *)(param_1 + -2) / (double)param_1[-1] < dVar32) goto LAB_008baa7c;
    uVar15 = *param_1;
    uVar33 = *(undefined4 *)((long)param_1 + 0xc);
    puVar14 = param_1 + 3;
    if ((double)*(int *)(param_2 + -2) / (double)param_2[-1] <= dVar32) {
      do {
        puVar22 = puVar14;
        if (param_2 <= puVar22) break;
        puVar14 = puVar22 + 3;
      } while ((double)*(int *)(puVar22 + 1) / (double)puVar22[2] <= dVar32);
    }
    else {
      do {
        puVar22 = puVar14;
        if (puVar22 == param_2) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:669: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        puVar14 = puVar22 + 3;
      } while ((double)*(int *)(puVar22 + 1) / (double)puVar22[2] <= dVar32);
    }
    puVar14 = param_2;
    if (puVar22 < param_2) {
      do {
        if (puVar14 == param_1) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:682: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        piVar1 = (int *)(puVar14 + -2);
        pdVar2 = (double *)(puVar14 + -1);
        puVar14 = puVar14 + -3;
      } while (dVar32 < (double)*piVar1 / *pdVar2);
    }
    if (puVar22 < puVar14) {
      do {
        uVar34 = *puVar14;
        uVar12 = *puVar22;
        uVar30 = puVar14[2];
        uVar5 = *(undefined4 *)(puVar22 + 1);
        uVar6 = *(undefined4 *)((long)puVar22 + 0xc);
        puVar22[1] = puVar14[1];
        *puVar22 = uVar34;
        uVar34 = puVar22[2];
        puVar22[2] = uVar30;
        *puVar14 = uVar12;
        *(undefined4 *)(puVar14 + 1) = uVar5;
        *(undefined4 *)((long)puVar14 + 0xc) = uVar6;
        puVar14[2] = uVar34;
        puVar9 = puVar22;
        do {
          puVar22 = puVar9 + 3;
          if (puVar22 == param_2) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__algorithm/sort.h:692: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                      );
          }
          piVar1 = (int *)(puVar9 + 4);
          pdVar2 = (double *)(puVar9 + 5);
          puVar9 = puVar22;
        } while ((double)*piVar1 / *pdVar2 <= dVar32);
        do {
          if (puVar14 == param_1) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__algorithm/sort.h:697: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                      );
          }
          piVar1 = (int *)(puVar14 + -2);
          pdVar2 = (double *)(puVar14 + -1);
          puVar14 = puVar14 + -3;
        } while (dVar32 < (double)*piVar1 / *pdVar2);
      } while (puVar22 < puVar14);
    }
    if (param_1 != puVar22 + -3) {
      uVar30 = puVar22[-2];
      uVar12 = puVar22[-3];
      param_1[2] = puVar22[-1];
      param_1[1] = uVar30;
      *param_1 = uVar12;
    }
    param_4 = 0;
    puVar22[-3] = uVar15;
    *(int *)(puVar22 + -2) = iVar17;
    puVar22[-1] = dVar31;
    *(undefined4 *)((long)puVar22 - 0xc) = uVar33;
    param_3 = param_3 + -1;
  }
  FUN_008bb3d8(puVar22,param_1,param_2 + -3);
  if ((param_4 & 1) == 0) goto LAB_008ba9e0;
LAB_008baa6c:
  iVar17 = *(int *)(param_1 + 1);
  dVar31 = (double)param_1[2];
  dVar32 = (double)iVar17 / dVar31;
LAB_008baa7c:
  param_3 = param_3 + -1;
  uVar33 = *(undefined4 *)((long)param_1 + 0xc);
  uVar15 = *param_1;
  lVar13 = 0;
  do {
    if ((undefined8 *)((long)param_1 + lVar13 + 0x18) == param_2) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__algorithm/sort.h:603: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                );
    }
    lVar23 = lVar13 + 0x20;
    lVar20 = lVar13 + 0x28;
    lVar13 = lVar13 + 0x18;
  } while ((double)*(int *)((long)param_1 + lVar23) / *(double *)((long)param_1 + lVar20) < dVar32);
  puVar14 = (undefined8 *)((long)param_1 + lVar13);
  puVar9 = param_2;
  if (lVar13 == 0x18) {
    do {
      if (puVar9 <= puVar14) break;
      piVar1 = (int *)(puVar9 + -2);
      pdVar2 = (double *)(puVar9 + -1);
      puVar9 = puVar9 + -3;
    } while (dVar32 <= (double)*piVar1 / *pdVar2);
  }
  else {
    do {
      if (puVar9 == param_1) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__algorithm/sort.h:615: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                  );
      }
      piVar1 = (int *)(puVar9 + -2);
      pdVar2 = (double *)(puVar9 + -1);
      puVar9 = puVar9 + -3;
    } while (dVar32 <= (double)*piVar1 / *pdVar2);
  }
  puVar18 = puVar9;
  puVar22 = puVar14;
  puVar29 = puVar14;
  if (puVar14 < puVar9) {
    do {
      uVar34 = *puVar18;
      uVar12 = *puVar29;
      uVar30 = puVar18[2];
      uVar5 = *(undefined4 *)(puVar29 + 1);
      uVar6 = *(undefined4 *)((long)puVar29 + 0xc);
      puVar29[1] = puVar18[1];
      *puVar29 = uVar34;
      uVar34 = puVar29[2];
      puVar29[2] = uVar30;
      *puVar18 = uVar12;
      *(undefined4 *)(puVar18 + 1) = uVar5;
      *(undefined4 *)((long)puVar18 + 0xc) = uVar6;
      puVar18[2] = uVar34;
      do {
        puVar22 = puVar29 + 3;
        if (puVar22 == param_2) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:633: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        piVar1 = (int *)(puVar29 + 4);
        pdVar2 = (double *)(puVar29 + 5);
        puVar29 = puVar22;
      } while ((double)*piVar1 / *pdVar2 < dVar32);
      do {
        if (puVar18 == param_1) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:638: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        piVar1 = (int *)(puVar18 + -2);
        pdVar2 = (double *)(puVar18 + -1);
        puVar18 = puVar18 + -3;
      } while (dVar32 <= (double)*piVar1 / *pdVar2);
    } while (puVar22 < puVar18);
  }
  puVar29 = puVar22 + -3;
  if (param_1 != puVar29) {
    uVar30 = puVar22[-2];
    uVar12 = *puVar29;
    param_1[2] = puVar22[-1];
    param_1[1] = uVar30;
    *param_1 = uVar12;
  }
  puVar22[-3] = uVar15;
  *(int *)(puVar22 + -2) = iVar17;
  puVar22[-1] = dVar31;
  *(undefined4 *)((long)puVar22 - 0xc) = uVar33;
  if (puVar9 <= puVar14) {
    uVar10 = FUN_008bb7c8(param_1,puVar22 + -3);
    uVar11 = FUN_008bb7c8(puVar22,param_2);
    if ((uVar11 & 1) != 0) goto LAB_008bad64;
    if ((uVar10 & 1) != 0) goto LAB_008ba914;
  }
  FUN_008ba8d0(param_1,puVar22 + -3,param_3,param_4 & 1);
  param_4 = 0;
  goto LAB_008ba914;
LAB_008baec8:
  puVar14 = puVar22;
  iVar17 = *(int *)(puVar19 + 4);
  dVar31 = (double)puVar19[5];
  dVar32 = (double)iVar17 / dVar31;
  if (dVar32 < (double)*(int *)(puVar19 + 1) / (double)puVar19[2]) {
    uVar33 = *(undefined4 *)((long)puVar19 + 0x24);
    uVar15 = *puVar14;
    lVar23 = lVar13;
    do {
      lVar20 = lVar23;
      puVar22 = (undefined8 *)((long)param_1 + lVar20);
      puVar22[4] = puVar22[1];
      puVar22[3] = *puVar22;
      puVar22[5] = puVar22[2];
      puVar19 = param_1;
      if (lVar20 == 0) goto LAB_008baea0;
      lVar23 = lVar20 + -0x18;
    } while (dVar32 < (double)*(int *)(puVar22 + -2) / (double)puVar22[-1]);
    puVar19 = (undefined8 *)((long)param_1 + lVar20);
LAB_008baea0:
    *puVar19 = uVar15;
    *(int *)(puVar19 + 1) = iVar17;
    puVar19[2] = dVar31;
    *(undefined4 *)((long)puVar19 + 0xc) = uVar33;
  }
  lVar13 = lVar13 + 0x18;
  puVar22 = puVar14 + 3;
  puVar19 = puVar14;
  if (puVar14 + 3 == param_2) {
    return;
  }
  goto LAB_008baec8;
LAB_008baf78:
  do {
    if (uVar8 <= uVar16) {
      uVar3 = (uVar8 & 0x3fffffffffffffff) << 1 | 1;
      uVar7 = uVar8 * 2 + 2;
      uVar21 = uVar3;
      if ((uVar7 < uVar11) &&
         (uVar21 = uVar7,
         (double)*(int *)(param_1 + uVar7 * 3 + 1) / (double)param_1[uVar7 * 3 + 2] <=
         (double)*(int *)(param_1 + uVar3 * 3 + 1) / (double)param_1[uVar3 * 3 + 2])) {
        uVar21 = uVar3;
      }
      puVar22 = param_1 + uVar8 * 3;
      iVar17 = *(int *)(puVar22 + 1);
      dVar31 = (double)puVar22[2];
      dVar32 = (double)iVar17 / dVar31;
      if (dVar32 <= (double)*(int *)(param_1 + uVar21 * 3 + 1) / (double)param_1[uVar21 * 3 + 2]) {
        uVar33 = *(undefined4 *)((long)puVar22 + 0xc);
        uVar15 = *puVar22;
        uVar7 = uVar8;
        do {
          puVar22 = param_1 + uVar21 * 3;
          puVar19 = param_1 + uVar7 * 3;
          uVar30 = puVar22[1];
          uVar12 = *puVar22;
          puVar19[2] = puVar22[2];
          puVar19[1] = uVar30;
          *puVar19 = uVar12;
          if ((long)uVar16 < (long)uVar21) break;
          uVar3 = (uVar21 & 0x3fffffffffffffff) << 1 | 1;
          uVar7 = uVar21 * 2 + 2;
          uVar28 = uVar3;
          if (((long)uVar7 < (long)uVar11) &&
             (uVar28 = uVar7,
             (double)*(int *)(param_1 + uVar7 * 3 + 1) / (double)param_1[uVar7 * 3 + 2] <=
             (double)*(int *)(param_1 + uVar3 * 3 + 1) / (double)param_1[uVar3 * 3 + 2])) {
            uVar28 = uVar3;
          }
          uVar7 = uVar21;
          uVar21 = uVar28;
        } while (dVar32 <= (double)*(int *)(param_1 + uVar28 * 3 + 1) /
                           (double)param_1[uVar28 * 3 + 2]);
        *puVar22 = uVar15;
        *(int *)(puVar22 + 1) = iVar17;
        puVar22[2] = dVar31;
        *(undefined4 *)((long)puVar22 + 0xc) = uVar33;
      }
    }
    bVar4 = uVar8 != 0;
    uVar8 = uVar8 - 1;
  } while (bVar4);
  lVar13 = (uVar10 >> 3) * -0x5555555555555555;
  do {
    uVar15 = *param_1;
    iVar17 = *(int *)(param_1 + 1);
    uVar24 = *(undefined1 *)((long)param_1 + 0xc);
    uVar25 = *(undefined1 *)((long)param_1 + 0xd);
    uVar26 = *(undefined1 *)((long)param_1 + 0xe);
    uVar27 = *(undefined1 *)((long)param_1 + 0xf);
    dVar31 = (double)param_1[2];
    uVar10 = 0;
    puVar22 = param_1;
    do {
      uVar8 = uVar10 << 1 | 1;
      uVar11 = uVar10 * 2 + 2;
      puVar19 = puVar22 + uVar10 * 3 + 3;
      if (((long)uVar11 < lVar13) &&
         ((double)*(int *)(puVar22 + uVar10 * 3 + 4) / (double)puVar22[uVar10 * 3 + 5] <
          (double)*(int *)(puVar22 + uVar10 * 3 + 7) / (double)puVar22[uVar10 * 3 + 8])) {
        puVar19 = puVar22 + uVar10 * 3 + 6;
        uVar8 = uVar11;
      }
      uVar30 = puVar19[1];
      uVar12 = *puVar19;
      puVar22[2] = puVar19[2];
      puVar22[1] = uVar30;
      *puVar22 = uVar12;
      uVar10 = uVar8;
      puVar22 = puVar19;
    } while ((long)uVar8 <= (long)(lVar13 - 2U >> 1));
    puVar22 = param_2 + -3;
    if (puVar19 == puVar22) {
      *puVar19 = uVar15;
LAB_008bb0c8:
      *(int *)(puVar19 + 1) = iVar17;
      *(undefined1 *)((long)puVar19 + 0xc) = uVar24;
      *(undefined1 *)((long)puVar19 + 0xd) = uVar25;
      *(undefined1 *)((long)puVar19 + 0xe) = uVar26;
      *(undefined1 *)((long)puVar19 + 0xf) = uVar27;
      puVar19[2] = dVar31;
    }
    else {
      uVar30 = param_2[-2];
      uVar12 = *puVar22;
      puVar19[2] = param_2[-1];
      puVar19[1] = uVar30;
      *puVar19 = uVar12;
      *(int *)(param_2 + -2) = iVar17;
      uVar10 = (long)puVar19 + (0x18 - (long)param_1);
      param_2[-3] = uVar15;
      *(undefined1 *)((long)param_2 - 0xc) = uVar24;
      *(undefined1 *)((long)param_2 - 0xb) = uVar25;
      *(undefined1 *)((long)param_2 - 10) = uVar26;
      *(undefined1 *)((long)param_2 - 9) = uVar27;
      param_2[-1] = dVar31;
      if (0x18 < (long)uVar10) {
        uVar10 = (uVar10 >> 3) * -0x5555555555555555 - 2 >> 1;
        puVar14 = param_1 + uVar10 * 3;
        iVar17 = *(int *)(puVar19 + 1);
        dVar31 = (double)puVar19[2];
        if ((double)*(int *)(puVar14 + 1) / (double)puVar14[2] < (double)iVar17 / dVar31) {
          uVar15 = *puVar19;
          uVar24 = *(undefined1 *)((long)puVar19 + 0xc);
          uVar25 = *(undefined1 *)((long)puVar19 + 0xd);
          uVar26 = *(undefined1 *)((long)puVar19 + 0xe);
          uVar27 = *(undefined1 *)((long)puVar19 + 0xf);
          puVar9 = puVar19;
          do {
            puVar19 = puVar14;
            uVar30 = puVar19[1];
            uVar12 = *puVar19;
            puVar9[2] = puVar19[2];
            puVar9[1] = uVar30;
            *puVar9 = uVar12;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1 >> 1;
            puVar14 = param_1 + uVar10 * 3;
            puVar9 = puVar19;
          } while ((double)*(int *)(puVar14 + 1) / (double)puVar14[2] < (double)iVar17 / dVar31);
          *puVar19 = uVar15;
          goto LAB_008bb0c8;
        }
      }
    }
    bVar4 = lVar13 < 3;
    lVar13 = lVar13 + -1;
    param_2 = puVar22;
    if (bVar4) {
      return;
    }
  } while( true );
LAB_008bad64:
  param_2 = puVar29;
  if ((uVar10 & 1) != 0) {
    return;
  }
  goto LAB_008ba90c;
}


// ===== 008bb3d8  FUN_008bb3d8 =====

void FUN_008bb3d8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  
  iVar1 = *(int *)(param_2 + 1);
  iVar2 = *(int *)(param_1 + 1);
  dVar12 = (double)param_2[2];
  dVar13 = (double)iVar1 / dVar12;
  dVar9 = (double)param_1[2];
  if ((double)iVar2 / dVar9 <= dVar13) {
    if ((double)*(int *)(param_3 + 1) / (double)param_3[2] < dVar13) {
      uVar11 = param_3[1];
      uVar10 = *param_3;
      uVar8 = *param_2;
      param_2[2] = param_3[2];
      uVar3 = *(undefined4 *)((long)param_2 + 0xc);
      param_2[1] = uVar11;
      *param_2 = uVar10;
      *param_3 = uVar8;
      *(int *)(param_3 + 1) = iVar1;
      *(undefined4 *)((long)param_3 + 0xc) = uVar3;
      param_3[2] = dVar12;
      iVar1 = *(int *)(param_1 + 1);
      dVar9 = (double)param_1[2];
      if ((double)*(int *)(param_2 + 1) / (double)param_2[2] < (double)iVar1 / dVar9) {
        uVar11 = param_2[1];
        uVar10 = *param_2;
        uVar8 = *param_1;
        param_1[2] = param_2[2];
        uVar3 = *(undefined4 *)((long)param_1 + 0xc);
        param_1[1] = uVar11;
        *param_1 = uVar10;
        *param_2 = uVar8;
        *(int *)(param_2 + 1) = iVar1;
        *(undefined4 *)((long)param_2 + 0xc) = uVar3;
        param_2[2] = dVar9;
        return;
      }
    }
  }
  else {
    uVar8 = *param_1;
    uVar4 = *(undefined1 *)((long)param_1 + 0xc);
    uVar5 = *(undefined1 *)((long)param_1 + 0xd);
    uVar6 = *(undefined1 *)((long)param_1 + 0xe);
    uVar7 = *(undefined1 *)((long)param_1 + 0xf);
    if (dVar13 <= (double)*(int *)(param_3 + 1) / (double)param_3[2]) {
      uVar11 = param_2[1];
      uVar10 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar11;
      *param_1 = uVar10;
      *param_2 = uVar8;
      *(int *)(param_2 + 1) = iVar2;
      *(undefined1 *)((long)param_2 + 0xc) = uVar4;
      *(undefined1 *)((long)param_2 + 0xd) = uVar5;
      *(undefined1 *)((long)param_2 + 0xe) = uVar6;
      *(undefined1 *)((long)param_2 + 0xf) = uVar7;
      param_2[2] = dVar9;
      if ((double)iVar2 / dVar9 <= (double)*(int *)(param_3 + 1) / (double)param_3[2]) {
        return;
      }
      uVar11 = param_3[1];
      uVar10 = *param_3;
      param_2[2] = param_3[2];
      param_2[1] = uVar11;
      *param_2 = uVar10;
    }
    else {
      uVar11 = param_3[1];
      uVar10 = *param_3;
      param_1[2] = param_3[2];
      param_1[1] = uVar11;
      *param_1 = uVar10;
    }
    *param_3 = uVar8;
    *(int *)(param_3 + 1) = iVar2;
    *(undefined1 *)((long)param_3 + 0xc) = uVar4;
    *(undefined1 *)((long)param_3 + 0xd) = uVar5;
    *(undefined1 *)((long)param_3 + 0xe) = uVar6;
    *(undefined1 *)((long)param_3 + 0xf) = uVar7;
    param_3[2] = dVar9;
  }
  return;
}


// ===== 008bb530  FUN_008bb530 =====

void FUN_008bb530(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FUN_008bb3d8();
  iVar1 = *(int *)(param_3 + 1);
  dVar4 = (double)param_3[2];
  if ((double)*(int *)(param_4 + 1) / (double)param_4[2] < (double)iVar1 / dVar4) {
    uVar6 = param_4[1];
    uVar5 = *param_4;
    uVar3 = *param_3;
    param_3[2] = param_4[2];
    uVar2 = *(undefined4 *)((long)param_3 + 0xc);
    param_3[1] = uVar6;
    *param_3 = uVar5;
    *param_4 = uVar3;
    *(int *)(param_4 + 1) = iVar1;
    *(undefined4 *)((long)param_4 + 0xc) = uVar2;
    param_4[2] = dVar4;
    iVar1 = *(int *)(param_2 + 1);
    dVar4 = (double)param_2[2];
    if ((double)*(int *)(param_3 + 1) / (double)param_3[2] < (double)iVar1 / dVar4) {
      uVar6 = param_3[1];
      uVar5 = *param_3;
      uVar3 = *param_2;
      param_2[2] = param_3[2];
      uVar2 = *(undefined4 *)((long)param_2 + 0xc);
      param_2[1] = uVar6;
      *param_2 = uVar5;
      *param_3 = uVar3;
      *(int *)(param_3 + 1) = iVar1;
      *(undefined4 *)((long)param_3 + 0xc) = uVar2;
      param_3[2] = dVar4;
      iVar1 = *(int *)(param_1 + 1);
      dVar4 = (double)param_1[2];
      if ((double)*(int *)(param_2 + 1) / (double)param_2[2] < (double)iVar1 / dVar4) {
        uVar6 = param_2[1];
        uVar5 = *param_2;
        uVar3 = *param_1;
        param_1[2] = param_2[2];
        uVar2 = *(undefined4 *)((long)param_1 + 0xc);
        param_1[1] = uVar6;
        *param_1 = uVar5;
        *param_2 = uVar3;
        *(int *)(param_2 + 1) = iVar1;
        *(undefined4 *)((long)param_2 + 0xc) = uVar2;
        param_2[2] = dVar4;
      }
    }
  }
  return;
}


// ===== 008bb650  FUN_008bb650 =====

void FUN_008bb650(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FUN_008bb530();
  iVar1 = *(int *)(param_4 + 1);
  dVar4 = (double)param_4[2];
  if ((double)*(int *)(param_5 + 1) / (double)param_5[2] < (double)iVar1 / dVar4) {
    uVar6 = param_5[1];
    uVar5 = *param_5;
    uVar3 = *param_4;
    param_4[2] = param_5[2];
    uVar2 = *(undefined4 *)((long)param_4 + 0xc);
    param_4[1] = uVar6;
    *param_4 = uVar5;
    *param_5 = uVar3;
    *(int *)(param_5 + 1) = iVar1;
    *(undefined4 *)((long)param_5 + 0xc) = uVar2;
    param_5[2] = dVar4;
    iVar1 = *(int *)(param_3 + 1);
    dVar4 = (double)param_3[2];
    if ((double)*(int *)(param_4 + 1) / (double)param_4[2] < (double)iVar1 / dVar4) {
      uVar6 = param_4[1];
      uVar5 = *param_4;
      uVar3 = *param_3;
      param_3[2] = param_4[2];
      uVar2 = *(undefined4 *)((long)param_3 + 0xc);
      param_3[1] = uVar6;
      *param_3 = uVar5;
      *param_4 = uVar3;
      *(int *)(param_4 + 1) = iVar1;
      *(undefined4 *)((long)param_4 + 0xc) = uVar2;
      param_4[2] = dVar4;
      iVar1 = *(int *)(param_2 + 1);
      dVar4 = (double)param_2[2];
      if ((double)*(int *)(param_3 + 1) / (double)param_3[2] < (double)iVar1 / dVar4) {
        uVar6 = param_3[1];
        uVar5 = *param_3;
        uVar3 = *param_2;
        param_2[2] = param_3[2];
        uVar2 = *(undefined4 *)((long)param_2 + 0xc);
        param_2[1] = uVar6;
        *param_2 = uVar5;
        *param_3 = uVar3;
        *(int *)(param_3 + 1) = iVar1;
        *(undefined4 *)((long)param_3 + 0xc) = uVar2;
        param_3[2] = dVar4;
        iVar1 = *(int *)(param_1 + 1);
        dVar4 = (double)param_1[2];
        if ((double)*(int *)(param_2 + 1) / (double)param_2[2] < (double)iVar1 / dVar4) {
          uVar6 = param_2[1];
          uVar5 = *param_2;
          uVar3 = *param_1;
          param_1[2] = param_2[2];
          uVar2 = *(undefined4 *)((long)param_1 + 0xc);
          param_1[1] = uVar6;
          *param_1 = uVar5;
          *param_2 = uVar3;
          *(int *)(param_2 + 1) = iVar1;
          *(undefined4 *)((long)param_2 + 0xc) = uVar2;
          param_2[2] = dVar4;
        }
      }
    }
  }
  return;
}


// ===== 008bb7c8  FUN_008bb7c8 =====

bool FUN_008bb7c8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  
  uVar3 = ((long)param_2 - (long)param_1 >> 3) * -0x5555555555555555;
  if ((long)uVar3 < 3) {
    if (uVar3 < 2) {
      return true;
    }
    if (uVar3 == 2) {
      iVar6 = *(int *)(param_1 + 1);
      dVar11 = (double)param_1[2];
      if ((double)iVar6 / dVar11 <= (double)*(int *)(param_2 + -2) / (double)param_2[-1]) {
        return true;
      }
      uVar14 = param_2[-2];
      uVar12 = param_2[-3];
      uVar7 = *param_1;
      param_1[2] = param_2[-1];
      uVar15 = *(undefined4 *)((long)param_1 + 0xc);
      param_1[1] = uVar14;
      *param_1 = uVar12;
      param_2[-3] = uVar7;
      *(int *)(param_2 + -2) = iVar6;
      *(undefined4 *)((long)param_2 + -0xc) = uVar15;
      param_2[-1] = dVar11;
      return true;
    }
  }
  else {
    if (uVar3 == 3) {
      FUN_008bb3d8(param_1,param_1 + 3,param_2 + -3);
      return true;
    }
    if (uVar3 == 4) {
      FUN_008bb530(param_1,param_1 + 3,param_1 + 6,param_2 + -3);
      return true;
    }
    if (uVar3 == 5) {
      FUN_008bb650(param_1,param_1 + 3,param_1 + 6,param_1 + 9,param_2 + -3);
      return true;
    }
  }
  FUN_008bb3d8(param_1,param_1 + 3,param_1 + 6);
  if (param_1 + 9 != param_2) {
    lVar5 = 0;
    iVar6 = 0;
    puVar8 = param_1 + 9;
    puVar10 = param_1 + 6;
    do {
      puVar4 = puVar8;
      iVar1 = *(int *)(puVar4 + 1);
      dVar11 = (double)puVar4[2];
      dVar13 = (double)iVar1 / dVar11;
      if (dVar13 < (double)*(int *)(puVar10 + 1) / (double)puVar10[2]) {
        uVar15 = *(undefined4 *)((long)puVar4 + 0xc);
        uVar7 = *puVar4;
        lVar2 = lVar5;
        do {
          lVar9 = lVar2;
          *(undefined8 *)((long)param_1 + lVar9 + 0x50) =
               *(undefined8 *)((long)param_1 + lVar9 + 0x38);
          *(undefined8 *)((long)param_1 + lVar9 + 0x48) =
               *(undefined8 *)((long)param_1 + lVar9 + 0x30);
          *(undefined8 *)((long)param_1 + lVar9 + 0x58) =
               *(undefined8 *)((long)param_1 + lVar9 + 0x40);
          puVar8 = param_1;
          if (lVar9 == -0x30) goto LAB_008bb8d8;
          lVar2 = lVar9 + -0x18;
        } while (dVar13 < (double)*(int *)((long)param_1 + lVar9 + 0x20) /
                          *(double *)((long)param_1 + lVar9 + 0x28));
        puVar8 = (undefined8 *)((long)param_1 + lVar9 + 0x30);
LAB_008bb8d8:
        iVar6 = iVar6 + 1;
        *puVar8 = uVar7;
        *(int *)(puVar8 + 1) = iVar1;
        puVar8[2] = dVar11;
        *(undefined4 *)((long)puVar8 + 0xc) = uVar15;
        if (iVar6 == 8) {
          return puVar4 + 3 == param_2;
        }
      }
      lVar5 = lVar5 + 0x18;
      puVar8 = puVar4 + 3;
      puVar10 = puVar4;
    } while (puVar4 + 3 != param_2);
  }
  return true;
}


// ===== 008bb9c8  FUN_008bb9c8 =====

long * FUN_008bb9c8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

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
    plVar2 = (long *)operator_new(0x30);
    if ((plVar2 == (long *)0x0) || (plVar2 + 4 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    lVar3 = param_2[4];
    uVar5 = *param_2;
    plVar2[5] = param_2[5];
    plVar2[4] = lVar3;
    lVar3 = FUN_008bb9c8(param_1,uVar5,param_3);
    lVar4 = FUN_008bb9c8(param_1,param_2[1],param_3);
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


// ===== 008bba88  FUN_008bba88 =====

void FUN_008bba88(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_008bba88(param_1,*param_2);
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


// ===== 008bbafc  FUN_008bbafc =====

undefined8 * FUN_008bbafc(long *param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  size_t __n;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  void *__dest;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar6 = (undefined8 *)(param_1[1] - *param_1);
  uVar3 = ((long)puVar6 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (0x2e8ba2e8ba2e8ba < uVar3) {
    FUN_008bbc48();
LAB_008bbc44:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  lVar4 = param_1[2] - *param_1 >> 3;
  uVar5 = lVar4 * 0x5d1745d1745d1746;
  if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
    uVar5 = uVar3;
  }
  if (0x1745d1745d1745c < (ulong)(lVar4 * 0x2e8ba2e8ba2e8ba3)) {
    uVar5 = 0x2e8ba2e8ba2e8ba;
  }
  if (uVar5 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    if (0x2e8ba2e8ba2e8ba < uVar5) goto LAB_008bbc44;
    pvVar1 = operator_new(uVar5 * 0x58);
    puVar6 = (undefined8 *)((long)pvVar1 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    uVar9 = param_2[4];
    uVar8 = param_2[7];
    uVar7 = param_2[6];
    uVar11 = param_2[1];
    uVar10 = *param_2;
    uVar13 = param_2[3];
    uVar12 = param_2[2];
    puVar6[5] = param_2[5];
    puVar6[4] = uVar9;
    puVar6[7] = uVar8;
    puVar6[6] = uVar7;
    puVar6[1] = uVar11;
    *puVar6 = uVar10;
    puVar6[3] = uVar13;
    puVar6[2] = uVar12;
    uVar8 = param_2[9];
    uVar7 = param_2[8];
    puVar6[10] = param_2[10];
    puVar6[9] = uVar8;
    puVar6[8] = uVar7;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar2 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 0xb);
    param_1[2] = (long)((long)pvVar1 + uVar5 * 0x58);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    return puVar6 + 0xb;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008bbc48  FUN_008bbc48 =====

void FUN_008bbc48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 008bbc60  FUN_008bbc60 =====

undefined1  [16]
FUN_008bbc60(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
        if ((long *)*plVar2 == (long *)0x0) goto LAB_008bbccc;
      }
      if (uVar5 <= (ulong)plVar2[4]) {
        uVar4 = 0;
        goto LAB_008bbd3c;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar7 = plVar2 + 1;
  }
LAB_008bbccc:
  plVar2 = (long *)operator_new(0x30);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar5 = *puVar6;
  *(undefined4 *)(plVar2 + 5) = 0;
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[4] = uVar5;
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
LAB_008bbd3c:
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar2;
  return auVar8;
}


// ===== 008bbd6c  FUN_008bbd6c =====

void FUN_008bbd6c(undefined8 *param_1,long *param_2)

{
  undefined1 *puVar1;
  int *****pppppiVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 *local_b0 [2];
  code *local_a0;
  code *pcStack_98;
  int ****local_90;
  undefined1 *puStack_88;
  undefined8 local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined8 *local_38;
  
  *param_1 = &PTR_FUN_00d3c5e0;
  param_1[1] = &PTR_FUN_00d3c730;
  param_1[2] = &PTR_FUN_00d3c778;
  lVar9 = *param_2;
  param_1[3] = lVar9;
  if (lVar9 != 0) {
    FUN_00d0f740(1,lVar9 + 8);
  }
  lVar11 = param_2[4];
  lVar9 = param_2[3];
  lVar12 = param_2[1];
  param_1[5] = param_2[2];
  param_1[4] = lVar12;
  param_1[7] = lVar11;
  param_1[6] = lVar9;
  uVar8 = FUN_005d6490();
  param_1[9] = uVar8;
  FUN_008e5e70(param_1 + 10);
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  FUN_008d97a8(param_1 + 0x2f,param_2 + 5);
  param_1[0x36] = param_1 + 0x37;
  *(undefined2 *)(param_1 + 0x39) = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  FUN_008e862c(param_1 + 0x3a,param_1[5],param_1 + 10,param_1[4],5000,3);
  param_1[0xb2] = 0;
  FUN_0090a588(param_1 + 0xb3);
  FUN_00906eb0(param_1 + 0xb7);
  lVar9 = param_2[8];
  param_1[0xd3] = 0;
  param_1[0xce] = lVar9;
  param_1[0xd5] = 0;
  param_1[0xd0] = 0;
  param_1[0xcf] = 0;
  param_1[0xd1] = 0x7fffffffffffffff;
  param_1[0xd4] = 0;
  param_1[0xd2] = param_1 + 0xd3;
  param_1[0xd7] = 0;
  param_1[0xd6] = 0;
  uVar8 = (**(code **)(*(long *)param_1[5] + 0x10))();
  lVar9 = param_1[3];
  param_1[0xd8] = uVar8;
  param_1[0xd9] = lVar9;
  if (lVar9 != 0) {
    FUN_00d0f740(1,lVar9 + 8);
  }
  param_1[0xdb] = param_1[5];
  param_1[0xda] = param_1[4];
  param_1[0xdd] = param_1[7];
  param_1[0xdc] = param_1[6];
  FUN_0086db28(param_1 + 0xde);
  FUN_0086dacc(param_1 + 0xe5);
  param_1[0xef] = 40000;
  FUN_0086dacc(param_1 + 0xf0);
  (**(code **)(*(long *)param_1[4] + 0x10))
            (&local_90,(long *)param_1[4],"WebRTC-Bwe-NoFeedbackReset",0x1a);
  puVar1 = puStack_88;
  if (-1 < (long)local_80) {
    puVar1 = (undefined1 *)((ulong)local_80 >> 0x38);
  }
  if (puVar1 < 7) {
    bVar7 = true;
  }
  else {
    pppppiVar2 = (int *****)local_90;
    if (-1 < (long)local_80) {
      pppppiVar2 = &local_90;
    }
    bVar7 = *(int *)pppppiVar2 != 0x62616e45 || *(int *)((long)pppppiVar2 + 3) != 0x64656c62;
  }
  if ((long)local_80 < 0) {
    operator_delete(local_90);
  }
  *(bool *)(param_1 + 0xfa) = bVar7;
  (**(code **)(*(long *)param_1[4] + 0x10))
            (&local_90,(long *)param_1[4],"WebRTC-AddPacingToCongestionWindowPushback",0x2a);
  puVar1 = puStack_88;
  if (-1 < (long)local_80) {
    puVar1 = (undefined1 *)((ulong)local_80 >> 0x38);
  }
  if (puVar1 < 7) {
    bVar7 = false;
  }
  else {
    pppppiVar2 = (int *****)local_90;
    if (-1 < (long)local_80) {
      pppppiVar2 = &local_90;
    }
    bVar7 = *(int *)pppppiVar2 == 0x62616e45 && *(int *)((long)pppppiVar2 + 3) == 0x64656c62;
  }
  if ((long)local_80 < 0) {
    operator_delete(local_90);
  }
  *(bool *)((long)param_1 + 0x7d1) = bVar7;
  (**(code **)(*(long *)param_1[4] + 0x10))
            (&local_90,(long *)param_1[4],"WebRTC-Bwe-ResetOnAdapterIdChange",0x21);
  puVar1 = puStack_88;
  if (-1 < (long)local_80) {
    puVar1 = (undefined1 *)((ulong)local_80 >> 0x38);
  }
  if (puVar1 < 7) {
    bVar7 = false;
  }
  else {
    pppppiVar2 = (int *****)local_90;
    if (-1 < (long)local_80) {
      pppppiVar2 = &local_90;
    }
    bVar7 = *(int *)pppppiVar2 == 0x62616e45 && *(int *)((long)pppppiVar2 + 3) == 0x64656c62;
  }
  if ((long)local_80 < 0) {
    operator_delete(local_90);
  }
  *(bool *)((long)param_1 + 0x7d2) = bVar7;
  FUN_00661054(param_1 + 0xfb,"relay_cap",9);
  param_1[0xfb] = &PTR_FUN_00d28090;
  param_1[0x103] = 0x7fffffffffffffff;
  param_1[0x108] = 0x7fffffffffffffff;
  param_1[0x104] = 0;
  *(undefined1 *)(param_1 + 0x105) = 0;
  param_1[0x107] = 0;
  param_1[0x106] = 0;
  *(undefined2 *)(param_1 + 0x109) = 0;
  *(undefined1 *)((long)param_1 + 0x84a) = 0;
  *(undefined8 *)((long)param_1 + 0x84c) = 0;
  FUN_00889d1c(param_1 + 0x10b,param_1[5],500);
  FUN_007ebca0(param_1 + 0x11f);
  local_38 = param_1 + 0xfb;
  (**(code **)(*(long *)param_1[4] + 0x10))
            (&local_90,(long *)param_1[4],"WebRTC-Bwe-NetworkRouteConstraints",0x22);
  pppppiVar2 = (int *****)local_90;
  if (-1 < (long)local_80) {
    puStack_88 = (undefined1 *)(ulong)local_80._7_1_;
    pppppiVar2 = &local_90;
  }
  FUN_00661cc0(&local_38,1,pppppiVar2,puStack_88);
  if ((char)local_80._7_1_ < '\0') {
    operator_delete(local_90);
  }
  plVar10 = (long *)param_1[5];
  uVar6 = *(uint *)(param_2 + 5);
  uVar3 = *(uint *)((long)param_2 + 0x2c);
  uVar4 = *(uint *)(param_2 + 6);
  uVar5 = (ulong)uVar4;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = (int ****)&DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0086db28(&local_90);
  local_90 = (int ****)(**(code **)(*plVar10 + 0x10))(plVar10);
  puStack_88 = (undefined1 *)(ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU));
  if (((ulong)local_80 & 1) == 0) {
    local_80 = (undefined1 *)CONCAT71(local_80._1_7_,1);
  }
  if ((int)uVar4 < 1) {
    uVar5 = 0x7fffffffffffffff;
  }
  if (((ulong)local_70 & 1) == 0) {
    local_70 = (undefined1 *)CONCAT71(local_70._1_7_,1);
  }
  if ((0 < (int)uVar3) && (puStack_68 = (undefined1 *)(ulong)uVar3, ((ulong)local_60 & 1) == 0)) {
    local_60 = (undefined1 *)CONCAT71(local_60._1_7_,1);
  }
  param_1[0xdf] = puStack_88;
  param_1[0xde] = local_90;
  param_1[0xe1] = uVar5;
  param_1[0xe0] = local_80;
  param_1[0xe3] = puStack_68;
  param_1[0xe2] = local_70;
  param_1[0xe4] = local_60;
  local_78 = (undefined1 *)uVar5;
  FUN_0086db70(&local_90);
  param_1[0xef] = param_2[9];
  uVar8 = (**(code **)(*(long *)param_1[5] + 0x10))();
  FUN_0086e368(&local_90,uVar8,(long)*(int *)((long)param_2 + 0x2c),0,param_2[9]);
  FUN_008e8c48(param_1 + 0x3a,&local_90);
  local_a0 = FUN_004473ec;
  pcStack_98 = FUN_008bfd18;
  local_b0[0] = param_1;
  FUN_008e657c(param_1 + 10,local_b0);
  (*local_a0)(0,local_b0,local_b0);
  return;
}


// ===== 008bc270  FUN_008bc270 =====

void FUN_008bc270(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  void *pvVar9;
  long *plVar10;
  undefined8 *puVar11;
  long local_18;
  
  FUN_00841cf8(param_1 + 0x830);
  FUN_00841cf8(param_1 + 0x838);
  FUN_007ebdcc(*(undefined8 *)(param_1 + 0x8f8));
  pvVar9 = *(void **)(param_1 + 0x8f8);
  if ((pvVar9 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar9), iVar1 == 1)) {
    operator_delete(pvVar9);
  }
  FUN_00889d94(param_1 + 0x858);
  pvVar9 = *(void **)(param_1 + 0x838);
  if ((pvVar9 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar9), iVar1 == 1)) {
    operator_delete(pvVar9);
  }
  pvVar9 = *(void **)(param_1 + 0x830);
  if ((pvVar9 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar9), iVar1 == 1)) {
    operator_delete(pvVar9);
  }
  FUN_006634ac(param_1 + 0x7d8);
  FUN_0086db20(param_1 + 0x780);
  FUN_0086db20(param_1 + 0x728);
  FUN_0086db70(param_1 + 0x6f0);
  plVar10 = *(long **)(param_1 + 0x6c8);
  if ((plVar10 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar10 + 1), iVar1 == 1)) {
    (**(code **)(*plVar10 + 8))(plVar10);
  }
  pvVar9 = *(void **)(param_1 + 0x6a8);
  if (pvVar9 == (void *)0x0) {
LAB_008bc410:
    local_18 = param_1 + 0x690;
    FUN_008bfca4(&local_18,*(undefined8 *)(param_1 + 0x698));
    plVar10 = *(long **)(param_1 + 0x680);
    *(undefined8 *)(param_1 + 0x680) = 0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    pvVar9 = *(void **)(param_1 + 0x678);
    *(undefined8 *)(param_1 + 0x678) = 0;
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
    local_18 = param_1 + 0x658;
    FUN_008bf710(&local_18,*(undefined8 *)(param_1 + 0x660));
    local_18 = param_1 + 0x640;
    FUN_008bf784(&local_18,*(undefined8 *)(param_1 + 0x648));
    local_18 = param_1 + 0x5e8;
    FUN_008bf7f8(&local_18,*(undefined8 *)(param_1 + 0x5f0));
    puVar11 = *(undefined8 **)(param_1 + 0x5a0);
    if (puVar11 != (undefined8 *)0x0) {
      puVar2 = puVar11;
      puVar5 = *(undefined8 **)(param_1 + 0x5a8);
      if (puVar11 != *(undefined8 **)(param_1 + 0x5a8)) {
        do {
          puVar2 = puVar5 + -4;
          if (puVar2 == (undefined8 *)0x0) goto LAB_008bc3ec;
          pvVar9 = (void *)*puVar2;
          if (pvVar9 != (void *)0x0) {
            pvVar4 = (void *)puVar5[-3];
            uVar8 = (ulong)((long)pvVar4 + (-4 - ((long)pvVar4 << 0x3e))) >> 2;
            uVar7 = (ulong)(((long)pvVar9 - (long)pvVar4 << 0x3e) - ((long)pvVar9 - (long)pvVar4))
                    >> 2;
            if (uVar8 <= uVar7) {
              uVar7 = uVar8;
            }
            if ((1 < uVar7) && ((((int)pvVar9 - (int)pvVar4 | -(int)pvVar4) & 3U) == 0)) {
              uVar7 = uVar7 & 0x3ffffffffffffffe;
              pvVar4 = (void *)((long)pvVar4 + uVar7 * -4);
              do {
                uVar7 = uVar7 - 2;
              } while (uVar7 != 0);
            }
            while (pvVar4 != pvVar9) {
              pvVar4 = (void *)((long)pvVar4 + -4);
              if (pvVar4 == (void *)0x0) goto LAB_008bc3ec;
            }
            puVar5[-3] = pvVar9;
            operator_delete(pvVar9);
          }
          puVar5 = puVar2;
        } while (puVar11 != puVar2);
        puVar2 = *(undefined8 **)(param_1 + 0x5a0);
      }
      *(undefined8 **)(param_1 + 0x5a8) = puVar11;
      operator_delete(puVar2);
    }
    FUN_008e8708(param_1 + 0x1d0);
    local_18 = param_1 + 0x1b0;
    FUN_008bfc10(&local_18,*(undefined8 *)(param_1 + 0x1b8));
    FUN_008d97fc(param_1 + 0x178);
    plVar10 = *(long **)(param_1 + 0x160);
    if (plVar10 != (long *)0x0) {
      plVar6 = *(long **)(param_1 + 0x168);
      plVar3 = plVar10;
      if (plVar10 != plVar6) {
        do {
          plVar6 = plVar6 + -1;
          if (plVar6 == (long *)0x0) goto LAB_008bc3ec;
          plVar3 = (long *)*plVar6;
          *plVar6 = 0;
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 8))();
          }
        } while (plVar6 != plVar10);
        plVar3 = *(long **)(param_1 + 0x160);
      }
      *(long **)(param_1 + 0x168) = plVar10;
      operator_delete(plVar3);
    }
    FUN_008e5ee0(param_1 + 0x50);
    plVar10 = *(long **)(param_1 + 0x18);
    if ((plVar10 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar10 + 1), iVar1 == 1)) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
    return;
  }
  pvVar4 = *(void **)(param_1 + 0x6b0);
  uVar7 = (ulong)(((long)pvVar9 - (long)pvVar4) * 0x555555555555555) >> 4;
  uVar8 = (long)pvVar4 * -0x555555555555555 - 0x10U >> 4;
  if (uVar8 <= uVar7) {
    uVar7 = uVar8;
  }
  if ((1 < uVar7) && ((((int)pvVar9 - (int)pvVar4 | -(int)pvVar4) & 0xfU) == 0)) {
    uVar7 = uVar7 & 0xffffffffffffffe;
    pvVar4 = (void *)((long)pvVar4 + uVar7 * -0x30);
    do {
      uVar7 = uVar7 - 2;
    } while (uVar7 != 0);
  }
  do {
    if (pvVar4 == pvVar9) {
      *(void **)(param_1 + 0x6b0) = pvVar9;
      operator_delete(pvVar9);
      goto LAB_008bc410;
    }
    pvVar4 = (void *)((long)pvVar4 + -0x30);
  } while (pvVar4 != (void *)0x0);
LAB_008bc3ec:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008bc618  FUN_008bc618 =====

void FUN_008bc618(long param_1)

{
  FUN_008bc270(param_1 + -8);
  return;
}


// ===== 008bc624  FUN_008bc624 =====

void FUN_008bc624(long param_1)

{
  FUN_008bc270(param_1 + -0x10);
  return;
}


// ===== 008bc630  FUN_008bc630 =====

void FUN_008bc630(void *param_1)

{
  FUN_008bc270();
  operator_delete(param_1);
  return;
}


// ===== 008bc660  FUN_008bc660 =====

void FUN_008bc660(long param_1)

{
  FUN_008bc270((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 008bc694  FUN_008bc694 =====

void FUN_008bc694(long param_1)

{
  FUN_008bc270((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}


// ===== 008bc6c8  FUN_008bc6c8 =====

undefined8
FUN_008bc6c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 *param_9,undefined8 *param_10)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *local_68;
  
  plVar2 = (long *)operator_new(0x288);
  local_68 = (long *)*param_10;
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uVar5 = *param_9;
  *param_10 = 0;
  FUN_008c08c0(plVar2,param_1 + 0x18,uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_1,
               param_1 + 0x858,param_8,uVar5,param_9 + 1,&local_68);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 8))();
  }
  puVar1 = *(undefined8 **)(param_1 + 0x168);
  local_68 = plVar2;
  if (puVar1 < *(undefined8 **)(param_1 + 0x170)) {
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    local_68 = (long *)0x0;
    puVar3 = puVar1 + 1;
    *puVar1 = plVar2;
  }
  else {
    puVar3 = (undefined8 *)FUN_008bf86c(param_1 + 0x160,&local_68);
  }
  plVar2 = local_68;
  *(undefined8 **)(param_1 + 0x168) = puVar3;
  local_68 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
    puVar3 = *(undefined8 **)(param_1 + 0x168);
  }
  if (*(undefined8 **)(param_1 + 0x160) != puVar3) {
    return puVar3[-1];
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
            );
}


// ===== 008bc828  FUN_008bc828 =====

void FUN_008bc828(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 0x160);
  plVar5 = *(long **)(param_1 + 0x168);
  if (plVar6 == plVar5) {
LAB_008bc8d0:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
              );
  }
  uVar3 = (long)plVar5 + (-8 - (long)plVar6);
  uVar2 = (uint)uVar3;
  if ((~uVar2 & 0x18) != 0) {
    uVar4 = (ulong)((uVar2 >> 3) + 1) & 3;
    do {
      if (*plVar6 == param_2) goto LAB_008bc8f8;
      uVar4 = uVar4 - 1;
      plVar6 = plVar6 + 1;
    } while (uVar4 != 0);
  }
  if (uVar3 < 0x18) goto LAB_008bc8d0;
  plVar6 = plVar6 + 2;
  while( true ) {
    if (plVar6[-2] == param_2) {
      plVar6 = plVar6 + -2;
      goto LAB_008bc8f8;
    }
    if (plVar6[-1] == param_2) break;
    if (*plVar6 == param_2) goto LAB_008bc8f8;
    if (plVar6[1] == param_2) {
      plVar6 = plVar6 + 1;
      goto LAB_008bc8f8;
    }
    plVar1 = plVar6 + 2;
    plVar6 = plVar6 + 4;
    if (plVar1 == plVar5) goto LAB_008bc8d0;
  }
  plVar6 = plVar6 + -1;
LAB_008bc8f8:
  plVar1 = plVar6 + 1;
  if (plVar6 + 1 == plVar5) {
    if (plVar6 == plVar5) goto LAB_008bc97c;
  }
  else {
    do {
      plVar6 = plVar1;
      plVar1 = (long *)plVar6[-1];
      plVar6[-1] = *plVar6;
      *plVar6 = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plVar6 + 1;
    } while (plVar6 + 1 != plVar5);
    plVar5 = *(long **)(param_1 + 0x168);
    if (plVar6 == plVar5) goto LAB_008bc97c;
  }
  do {
    plVar5 = plVar5 + -1;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    plVar1 = (long *)*plVar5;
    *plVar5 = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  } while (plVar5 != plVar6);
LAB_008bc97c:
  *(long **)(param_1 + 0x168) = plVar6;
  return;
}


// ===== 008bc9a8  FUN_008bc9a8 =====

void FUN_008bc9a8(long param_1,undefined8 param_2)

{
  uint uVar1;
  
  FUN_008e6200(param_1 + 0x50,param_2,1);
  if (*(char *)(param_1 + 0x1c8) == '\x01') {
    uVar1 = FUN_008e6520(param_1 + 0x50);
  }
  else {
    uVar1 = 0;
  }
  FUN_008e88f0(param_1 + 0x1d0,uVar1 & 1);
  return;
}


// ===== 008bca00  FUN_008bca00 =====

void FUN_008bca00(long param_1,long *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  
  FUN_008e697c(param_1 + 0x50);
  uVar1 = (**(code **)(*param_2 + 0xd0))(param_2);
  FUN_008e8f0c(param_1 + 0x1d0,uVar1);
  uVar3 = (**(code **)(*param_2 + 0xf0))(param_2);
  if ((uVar3 >> 0x20 & 1) != 0) {
    uVar3 = (**(code **)(*param_2 + 0xf0))(param_2);
    if ((uVar3 >> 0x20 & 1) == 0) goto LAB_008bcadc;
    FUN_008e8f0c(param_1 + 0x1d0,uVar3);
  }
  uVar3 = (**(code **)(*param_2 + 0x100))(param_2);
  if ((uVar3 >> 0x20 & 1) != 0) {
    uVar3 = (**(code **)(*param_2 + 0x100))(param_2);
    if ((uVar3 >> 0x20 & 1) == 0) {
LAB_008bcadc:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1074: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    FUN_008e8f0c(param_1 + 0x1d0,uVar3);
  }
  if (*(char *)(param_1 + 0x1c8) == '\x01') {
    uVar2 = FUN_008e6520(param_1 + 0x50);
  }
  else {
    uVar2 = 0;
  }
  FUN_008e88f0(param_1 + 0x1d0,uVar2 & 1);
  return;
}


// ===== 008bcaf0  FUN_008bcaf0 =====

long FUN_008bcaf0(long param_1)

{
  return param_1 + 0x50;
}


// ===== 008bcafc  FUN_008bcafc =====

long FUN_008bcafc(long param_1)

{
  return param_1 + 0x10;
}


// ===== 008bcb08  FUN_008bcb08 =====

long FUN_008bcb08(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != -0x1d0) {
    lVar1 = param_1 + 0x1d8;
  }
  return lVar1;
}


// ===== 008bcb1c  FUN_008bcb1c =====

void FUN_008bcb1c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 auStack_118 [80];
  undefined1 auStack_c8 [152];
  
  if (*(char *)(param_1 + 0x7a8) == '\x01') {
    *(undefined8 *)(param_1 + 0x7a0) = *param_2;
  }
  else {
    if ((undefined8 *)(param_1 + 0x7a0) == (undefined8 *)0x0) goto LAB_008bcc3c;
    uVar1 = *param_2;
    *(undefined1 *)(param_1 + 0x7a8) = 1;
    *(undefined8 *)(param_1 + 0x7a0) = uVar1;
  }
  if (*(char *)(param_1 + 0x7b8) == '\x01') {
    *(undefined8 *)(param_1 + 0x7b0) = param_2[2];
  }
  else {
    if ((undefined8 *)(param_1 + 0x7b0) == (undefined8 *)0x0) goto LAB_008bcc3c;
    uVar1 = param_2[2];
    *(undefined1 *)(param_1 + 0x7b8) = 1;
    *(undefined8 *)(param_1 + 0x7b0) = uVar1;
  }
  if (*(char *)(param_1 + 0x7c8) == '\x01') {
    *(undefined8 *)(param_1 + 0x7c0) = param_2[1];
  }
  else {
    if ((undefined8 *)(param_1 + 0x7c0) == (undefined8 *)0x0) {
LAB_008bcc3c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar1 = param_2[1];
    *(undefined1 *)(param_1 + 0x7c8) = 1;
    *(undefined8 *)(param_1 + 0x7c0) = uVar1;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
  plVar2 = *(long **)(param_1 + 0x680);
  *(undefined8 *)(param_1 + 0x780) = uVar1;
  if (plVar2 != (long *)0x0) {
    FUN_0086db00(auStack_118,param_1 + 0x780);
    (**(code **)(*plVar2 + 0x48))(auStack_c8,plVar2,auStack_118);
    FUN_008bdf48(param_1,auStack_c8);
    FUN_0086e298(auStack_c8);
    FUN_0086db20(auStack_118);
  }
  return;
}


// ===== 008bcc50  FUN_008bcc50 =====

void FUN_008bcc50(float param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 auStack_118 [80];
  undefined1 auStack_c8 [152];
  
  if (*(char *)(param_2 + 0x798) == '\x01') {
    *(double *)(param_2 + 0x790) = (double)param_1;
  }
  else {
    if ((double *)(param_2 + 0x790) == (double *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(undefined1 *)(param_2 + 0x798) = 1;
    *(double *)(param_2 + 0x790) = (double)param_1;
  }
  uVar1 = (**(code **)(**(long **)(param_2 + 0x28) + 0x10))();
  plVar2 = *(long **)(param_2 + 0x680);
  *(undefined8 *)(param_2 + 0x780) = uVar1;
  if (plVar2 != (long *)0x0) {
    FUN_0086db00(auStack_118,param_2 + 0x780);
    (**(code **)(*plVar2 + 0x48))(auStack_c8,plVar2,auStack_118);
    FUN_008bdf48(param_2,auStack_c8);
    FUN_0086e298(auStack_c8);
    FUN_0086db20(auStack_118);
  }
  return;
}


// ===== 008bcd24  FUN_008bcd24 =====

void FUN_008bcd24(long param_1,int param_2)

{
  FUN_008e92fc(param_1 + 0x1d0,(long)param_2 * 1000);
  return;
}


// ===== 008bcd38  FUN_008bcd38 =====

long FUN_008bcd38(long param_1)

{
  return param_1 + 0x598;
}


// ===== 008bcd44  FUN_008bcd44 =====

void FUN_008bcd44(long param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined1 local_128 [12];
  undefined1 auStack_118 [80];
  undefined1 auStack_c8 [152];
  
  bVar1 = *param_2;
  *(byte *)(param_1 + 0x1c8) = bVar1;
  *(ushort *)(param_1 + 0x78a) = bVar1 | 0x100;
  if ((bVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_008e6520(param_1 + 0x50);
  }
  FUN_008e88f0(param_1 + 0x1d0,uVar2 & 1);
  plVar3 = *(long **)(param_1 + 0x680);
  if (plVar3 == (long *)0x0) {
    return;
  }
  pvVar5 = *(void **)(param_1 + 0x678);
  *(undefined8 *)(param_1 + 0x678) = 0;
  if (pvVar5 == (void *)0x0) {
    *(undefined8 *)(param_1 + 0x680) = 0;
  }
  else {
    operator_delete(pvVar5);
    plVar3 = *(long **)(param_1 + 0x680);
    *(undefined8 *)(param_1 + 0x680) = 0;
    if (plVar3 == (long *)0x0) goto LAB_008bcdd4;
  }
  (**(code **)(*plVar3 + 8))();
LAB_008bcdd4:
  FUN_008bce7c(param_1);
  if (*(long *)(param_1 + 0x680) != 0) {
    local_128 = FUN_008d9808(param_1 + 0x178);
    FUN_008bd210(param_1,local_128);
    uVar4 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
    plVar3 = *(long **)(param_1 + 0x680);
    *(undefined8 *)(param_1 + 0x780) = uVar4;
    if (plVar3 != (long *)0x0) {
      FUN_0086db00(auStack_118,param_1 + 0x780);
      (**(code **)(*plVar3 + 0x48))(auStack_c8,plVar3,auStack_118);
      FUN_008bdf48(param_1,auStack_c8);
      FUN_0086e298(auStack_c8);
      FUN_0086db20(auStack_118);
    }
    FUN_008bd37c(param_1);
  }
  return;
}


// ===== 008bce7c  FUN_008bce7c =====

void FUN_008bce7c(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 auStack_258 [56];
  undefined1 auStack_220 [80];
  undefined8 local_1d0;
  undefined1 local_1c8 [8];
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  long *local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 auStack_188 [56];
  undefined1 auStack_150 [80];
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8;
  undefined4 local_e7;
  undefined2 local_e3;
  undefined1 local_e1;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  long *local_d0;
  undefined1 *puStack_c8;
  
  if ((*(char *)(param_1 + 0x828) == '\x01') && (*(long *)(param_1 + 0x590) != 0)) {
    puVar3 = (undefined8 *)operator_new(0xa0);
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    *(undefined1 *)(puVar3 + 0x12) = 1;
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
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    pvVar4 = *(void **)(param_1 + 0x678);
    puVar3[0x11] = 0;
    puVar3[0x10] = 0;
    *(undefined8 **)(param_1 + 0x678) = puVar3;
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
    uVar5 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
    lVar7 = *(long *)(param_1 + 0x670);
    *(undefined8 *)(param_1 + 0x730) = *(undefined8 *)(param_1 + 0x788);
    *(undefined8 *)(param_1 + 0x728) = *(undefined8 *)(param_1 + 0x780);
    *(undefined8 *)(param_1 + 0x740) = *(undefined8 *)(param_1 + 0x798);
    *(undefined8 *)(param_1 + 0x738) = *(undefined8 *)(param_1 + 0x790);
    *(undefined8 *)(param_1 + 0x6f0) = uVar5;
    *(undefined8 *)(param_1 + 0x750) = *(undefined8 *)(param_1 + 0x7a8);
    *(undefined8 *)(param_1 + 0x748) = *(undefined8 *)(param_1 + 0x7a0);
    *(undefined8 *)(param_1 + 0x760) = *(undefined8 *)(param_1 + 0x7b8);
    *(undefined8 *)(param_1 + 0x758) = *(undefined8 *)(param_1 + 0x7b0);
    *(undefined8 *)(param_1 + 0x770) = *(undefined8 *)(param_1 + 0x7c8);
    *(undefined8 *)(param_1 + 0x768) = *(undefined8 *)(param_1 + 0x7c0);
    uVar6 = FUN_00417e08();
    if (lVar7 == 0) {
      if ((uVar6 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../call/rtp_transport_controller_send.cc",0x1971,
                     "Creating Goog CC Factory.");
      }
      local_1c8[0] = *(undefined1 *)(param_1 + 0x849);
      local_1c0 = 0;
      uStack_1b8 = 0;
      puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
      local_e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
      local_d0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
      FUN_008d9bb4(&local_e0,local_1c8);
      local_280 = *(long **)(param_1 + 0x6c8);
      if (local_280 != (long *)0x0) {
        FUN_00d0f740(1,local_280 + 1);
      }
      uStack_270 = *(undefined8 *)(param_1 + 0x6d8);
      local_278 = *(undefined8 *)(param_1 + 0x6d0);
      uStack_260 = *(undefined8 *)(param_1 + 0x6e8);
      local_268 = *(undefined8 *)(param_1 + 0x6e0);
      FUN_0086db50(auStack_258,param_1 + 0x6f0);
      FUN_0086db00(auStack_220,param_1 + 0x728);
      local_1d0 = *(undefined8 *)(param_1 + 0x778);
      uVar5 = FUN_008d9bfc(&local_e0,&local_280);
      plVar8 = *(long **)(param_1 + 0x680);
      *(undefined8 *)(param_1 + 0x680) = uVar5;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
      FUN_0086db20(auStack_220);
      FUN_0086db70(auStack_258);
      plVar8 = local_280;
      if ((local_280 != (long *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,local_280 + 1), iVar2 == 1)
         ) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
      uVar5 = FUN_008da378(&local_e0);
      plVar8 = local_d0;
      local_e0 = PTR_DAT_00d530c8;
      *(undefined8 *)(param_1 + 0x688) = uVar5;
      local_d0 = (long *)0x0;
      local_e0 = local_e0 + 0x10;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    else {
      if ((uVar6 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../call/rtp_transport_controller_send.cc",0x1951,
                     "Creating overridden congestion controller");
      }
      local_1b0 = *(long **)(param_1 + 0x6c8);
      plVar8 = *(long **)(param_1 + 0x670);
      if (local_1b0 != (long *)0x0) {
        FUN_00d0f740(1,local_1b0 + 1);
      }
      uStack_1a0 = *(undefined8 *)(param_1 + 0x6d8);
      local_1a8 = *(undefined8 *)(param_1 + 0x6d0);
      uStack_190 = *(undefined8 *)(param_1 + 0x6e8);
      local_198 = *(undefined8 *)(param_1 + 0x6e0);
      FUN_0086db50(auStack_188,param_1 + 0x6f0);
      FUN_0086db00(auStack_150,param_1 + 0x728);
      local_100 = *(undefined8 *)(param_1 + 0x778);
      uVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,&local_1b0);
      plVar8 = *(long **)(param_1 + 0x680);
      *(undefined8 *)(param_1 + 0x680) = uVar5;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
      FUN_0086db20(auStack_150);
      FUN_0086db70(auStack_188);
      plVar8 = local_1b0;
      if ((local_1b0 != (long *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,local_1b0 + 1), iVar2 == 1)
         ) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
      uVar5 = (**(code **)(**(long **)(param_1 + 0x670) + 0x18))();
      *(undefined8 *)(param_1 + 0x688) = uVar5;
    }
    local_f8 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
    bVar1 = *(char *)(param_1 + 0x7d1) != '\x01';
    if (bVar1) {
      uStack_f0 = 0xaaaaaaaaaaaaaa00;
    }
    else {
      uStack_f0 = FUN_008e93d4(param_1 + 0x1d0);
    }
    local_e8 = !bVar1;
    local_e7 = 0xaaaaaaaa;
    local_e3 = 0xaaaa;
    local_e1 = 0xaa;
    (**(code **)(**(long **)(param_1 + 0x680) + 0x20))
              (&local_e0,*(long **)(param_1 + 0x680),&local_f8);
    FUN_008bdf48(param_1,&local_e0);
    FUN_0086e298(&local_e0);
    FUN_008bf410(param_1);
  }
  return;
}


// ===== 008bd210  FUN_008bd210 =====

void FUN_008bd210(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  byte local_158;
  undefined7 uStack_157;
  undefined8 auStack_150 [7];
  undefined1 auStack_118 [152];
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = (ulong)uVar2;
  plVar5 = *(long **)(param_1 + 0x28);
  uVar4 = *param_2;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0086db28(&local_80);
  local_80 = (undefined1 *)(**(code **)(*plVar5 + 0x10))(plVar5);
  puStack_78 = (undefined1 *)(ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU));
  if (((ulong)local_70 & 1) == 0) {
    local_70 = (undefined1 *)CONCAT71(local_70._1_7_,1);
  }
  if ((int)uVar2 < 1) {
    uVar3 = 0x7fffffffffffffff;
  }
  if (((ulong)local_60 & 1) == 0) {
    local_60 = (undefined1 *)CONCAT71(local_60._1_7_,1);
  }
  if (0 < (int)uVar1) {
    puStack_58 = (undefined1 *)(ulong)uVar1;
    if (((ulong)local_50 & 1) == 0) {
      local_50 = (undefined1 *)CONCAT71(local_50._1_7_,1);
    }
  }
  plVar5 = *(long **)(param_1 + 0x680);
  local_68 = (undefined1 *)uVar3;
  if (plVar5 == (long *)0x0) {
    FUN_0086db50(&local_188,&local_80);
    if ((local_158 & 1) == 0) {
      uStack_160 = *(undefined8 *)(param_1 + 0x718);
      local_158 = *(byte *)(param_1 + 0x720);
    }
    puVar6 = &local_188;
    *(undefined8 *)(param_1 + 0x6f8) = uStack_180;
    *(undefined8 *)(param_1 + 0x6f0) = local_188;
    *(undefined8 *)(param_1 + 0x708) = uStack_170;
    *(undefined8 *)(param_1 + 0x700) = local_178;
    *(undefined8 *)(param_1 + 0x718) = uStack_160;
    *(undefined8 *)(param_1 + 0x710) = local_168;
    *(ulong *)(param_1 + 0x720) = CONCAT71(uStack_157,local_158);
  }
  else {
    puVar6 = auStack_150;
    FUN_0086db50(auStack_150,&local_80);
    (**(code **)(*plVar5 + 0x50))(auStack_118,plVar5,auStack_150);
    FUN_008bdf48(param_1,auStack_118);
    FUN_0086e298(auStack_118);
  }
  FUN_0086db70(puVar6);
  FUN_0086db70(&local_80);
  return;
}


// ===== 008bd37c  FUN_008bd37c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008bd37c(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 auStack_168 [152];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulong local_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  
  if (*(long *)(param_1 + 0x680) != 0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
    bVar1 = *(byte *)(param_1 + 0x828);
    FUN_00906ae8(*(undefined8 *)(param_1 + 0x678));
    (**(code **)(**(long **)(param_1 + 0x680) + 0x10))
              (auStack_168,*(long **)(param_1 + 0x680),uVar2,(ulong)bVar1 & 1 | 0xaaaaaaaaaaaaaa00);
    FUN_008bdf48(param_1,auStack_168);
    FUN_0086e298(auStack_168);
    uStack_88 = _UNK_00224ab8;
    local_90 = _DAT_00224ab0;
    uStack_78 = _UNK_00224ac8;
    uStack_80 = _DAT_00224ac0;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_68 = _UNK_00224ad8;
    local_70 = _DAT_00224ad0;
    uStack_58 = _UNK_00224ae8;
    local_60 = _DAT_00224ae0;
    FUN_00906b58(&local_90,*(undefined8 *)(param_1 + 0x678));
    if (((ulong)local_50 & 1) != 0) {
      FUN_00889ebc(param_1 + 0x858,local_60 & 0xffffffff);
      if (((ulong)local_50 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      uStack_a8 = uStack_68;
      local_b0 = local_70;
      uStack_98 = uStack_58;
      uStack_a0 = local_60;
      uStack_c8 = uStack_88;
      local_d0 = local_90;
      uStack_b8 = uStack_78;
      uStack_c0 = uStack_80;
      (**(code **)(**(long **)(param_1 + 0x590) + 0x10))(*(long **)(param_1 + 0x590),&local_d0);
    }
  }
  return;
}


// ===== 008bd4a4  FUN_008bd4a4 =====

void FUN_008bd4a4(long param_1,long *param_2)

{
  *(long **)(param_1 + 0x590) = param_2;
  if ((*(byte *)(param_1 + 0x720) & 1) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,*(undefined8 *)(param_1 + 0x718));
    FUN_008bce7c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
            );
}


// ===== 008bd504  FUN_008bd504 =====

/* WARNING: Removing unreachable block (ram,0x008bd710) */
/* WARNING: Removing unreachable block (ram,0x008bd660) */
/* WARNING: Removing unreachable block (ram,0x008bd764) */

void FUN_008bd504(long param_1,undefined8 *******param_2,char **param_3,char *param_4)

{
  undefined4 uVar1;
  char cVar2;
  short sVar3;
  bool bVar4;
  undefined8 *******__dest;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  undefined8 uVar9;
  byte bVar10;
  undefined1 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  byte local_1f0;
  undefined7 uStack_1ef;
  undefined1 auStack_1e8 [64];
  undefined1 auStack_1a8 [152];
  undefined8 ******local_110;
  char **ppcStack_108;
  undefined8 local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 uStack_d1;
  char *local_d0;
  undefined8 ******ppppppuStack_c8;
  undefined8 ******local_c0;
  undefined8 *****pppppuStack_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 ******local_70;
  char **ppcStack_68;
  
  if (*param_4 != '\x01') {
    return;
  }
  local_74 = 0xaaaaaaaa;
  if (((param_4[0xc] & 1U) == 0) && ((param_4[0x18] & 1U) == 0)) {
    uVar9 = 0x7fffffffffffffff;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x818);
  }
  local_70 = param_2;
  ppcStack_68 = param_3;
  auVar15 = FUN_008d9ab8(param_1 + 0x178,uVar9);
  local_80 = auVar15._0_8_;
  local_78 = auVar15._8_4_;
  local_74 = CONCAT31(local_74._1_3_,auVar15[0xc]);
  if ((char **)0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_3 < (char **)0x17) {
    local_100 = (undefined1 *)CONCAT17((char)param_3,(undefined7)local_100);
    __dest = &local_110;
  }
  else {
    uVar6 = ((ulong)param_3 & 0x7ffffffffffffff8) + 8;
    uVar7 = 0x19;
    if (uVar6 != 0x18) {
      uVar7 = uVar6;
    }
    __dest = (undefined8 *******)operator_new(uVar7);
    local_100 = (undefined1 *)(uVar7 | 0x8000000000000000);
    local_110 = __dest;
    ppcStack_108 = param_3;
  }
  if ((undefined8 *******)((long)__dest + (long)param_3) < __dest) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((__dest <= param_2) && (param_2 < (undefined8 *******)((long)__dest + (long)param_3))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(__dest,param_2,(size_t)param_3);
  *(undefined1 *)((long)__dest + (long)param_3) = 0;
  puStack_a0 = *(undefined1 **)(param_4 + 8);
  local_a8 = *(undefined1 **)param_4;
  puStack_90 = *(undefined1 **)(param_4 + 0x18);
  local_98 = *(undefined1 **)(param_4 + 0x10);
  local_b0 = local_100;
  pppppuStack_b8 = (undefined8 *****)ppcStack_108;
  local_c0 = local_110;
  local_88 = (undefined1 *)CONCAT44(local_88._4_4_,*(undefined4 *)(param_4 + 0x20));
  local_d0 = (char *)(param_1 + 0x1b0);
  auVar16 = FUN_008bfd94(&local_d0,&local_c0,&local_c0);
  lVar5 = auVar16._0_8_;
  if (((auVar16 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
     (uVar6 = FUN_008c06d4(lVar5 + 0x38,param_4), (uVar6 & 1) == 0)) {
    uVar6 = FUN_00417e08();
    if ((uVar6 & 1) == 0) {
      local_c0 = (undefined8 ******)0x19e3e5;
      pppppuStack_b8 = (undefined8 *****)0xb81;
      local_b0 = &uStack_d1;
      ppppppuStack_c8 = &local_c0;
      local_d0 = "Network route changed on transport ";
      FUN_008bdaf8(&local_110,param_4);
      FUN_00623bb0(&DAT_00224b90,local_c0,(ulong)pppppuStack_b8 & 0xffffffff,local_d0,&local_70,
                   ": new_route = ",&local_110);
    }
    if ((auVar16 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      if ((auVar15._8_8_ >> 0x20 & 1) != 0) {
        FUN_008bd210(param_1,&local_80);
      }
      *(long *)(param_1 + 0x820) = (long)*(int *)(param_4 + 0x20);
      return;
    }
    uVar6 = FUN_00417e08();
    if ((uVar6 & 1) == 0) {
      FUN_008bdaf8(&local_c0,lVar5 + 0x38);
      FUN_00623bb0(&DAT_001f4e90,"../../call/rtp_transport_controller_send.cc",0xb99,"old_route = ",
                   &local_c0);
    }
  }
  uVar14 = *(undefined8 *)param_4;
  uVar13 = *(undefined8 *)(param_4 + 0x18);
  uVar9 = *(undefined8 *)(param_4 + 0x10);
  uVar1 = *(undefined4 *)(param_4 + 0x20);
  cVar2 = *(char *)(lVar5 + 0x38);
  sVar3 = *(short *)(lVar5 + 0x40);
  *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(lVar5 + 0x38) = uVar14;
  bVar10 = *(byte *)(lVar5 + 0x50);
  *(undefined8 *)(lVar5 + 0x50) = uVar13;
  *(undefined8 *)(lVar5 + 0x48) = uVar9;
  *(undefined4 *)(lVar5 + 0x58) = uVar1;
  if (*(char *)(param_1 + 0x7d2) == '\x01') {
    if (sVar3 == *(short *)(param_4 + 8)) {
      bVar4 = *(short *)(lVar5 + 0x4c) == *(short *)(param_4 + 0x14);
LAB_008bd7dc:
      bVar4 = !bVar4;
      goto LAB_008bd7e8;
    }
  }
  else if (*(short *)(lVar5 + 0x42) == *(short *)(param_4 + 10)) {
    bVar4 = *(short *)(lVar5 + 0x4e) == *(short *)(param_4 + 0x16);
    goto LAB_008bd7dc;
  }
  bVar4 = true;
LAB_008bd7e8:
  if (*(long *)(param_1 + 0x818) + 0x7fffffffffffffffU < 0xfffffffffffffffe) {
    bVar10 = (*(byte *)(lVar5 + 0x44) | bVar10) ^ (param_4[0xc] | param_4[0x18]);
  }
  else {
    bVar10 = 0;
  }
  if (cVar2 != *param_4) {
    bVar4 = true;
  }
  if ((bVar4) || ((bVar10 & 1) != 0)) {
    auVar15 = FUN_008d9808(param_1 + 0x178);
    uVar6 = auVar15._0_8_;
    uVar7 = FUN_00417e08();
    puVar11 = (undefined1 *)(uVar6 >> 0x20);
    if ((uVar7 & 1) == 0) {
      local_c0 = (undefined8 ******)0x19e3e5;
      pppppuStack_b8 = (undefined8 *****)0xc39;
      local_b0 = &uStack_d1;
      ppppppuStack_c8 = &local_c0;
      local_d0 = "Reset bitrates to min: ";
      local_110 = (undefined8 ******)(uVar6 & 0xffffffff);
      ppcStack_108 = &local_d0;
      FUN_00623bb0(&DAT_001f613f,"../../call/rtp_transport_controller_send.cc",0xc39,
                   "Reset bitrates to min: ",uVar6 & 0xffffffff," bps, start: ",puVar11,
                   " bps,  max: ",auVar15._8_4_," bps.");
    }
    plVar12 = *(long **)(param_1 + 0x38);
    pvVar8 = operator_new(0x18);
    FUN_008e5e28(pvVar8,*param_4,*(undefined4 *)(param_4 + 0x20));
    (**(code **)(*plVar12 + 0x28))(plVar12,pvVar8);
    if (*(char *)(param_1 + 0x849) == '\x01') {
      *(undefined1 *)(param_1 + 0x84a) = 1;
      FUN_008e6640(param_1 + 0x50,1,1);
    }
    pppppuStack_b8 = (undefined8 *****)&DAT_aaaaaaaaaaaaaaaa;
    local_c0 = (undefined8 ******)&DAT_aaaaaaaaaaaaaaaa;
    local_a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    local_98 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
    local_88 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_0086db78(&local_c0);
    local_c0 = (undefined8 ******)(**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
    plVar12 = *(long **)(param_1 + 0x28);
    ppcStack_108 = (char **)&DAT_aaaaaaaaaaaaaaaa;
    local_110 = (undefined8 ******)&DAT_aaaaaaaaaaaaaaaa;
    local_f8 = &DAT_aaaaaaaaaaaaaaaa;
    local_100 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
    local_f0 = &DAT_aaaaaaaaaaaaaaaa;
    local_e0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_0086db28(&local_110);
    local_110 = (undefined8 ******)(**(code **)(*plVar12 + 0x10))(plVar12);
    ppcStack_108 = (char **)(ulong)(auVar15._0_4_ & ((int)auVar15._0_4_ >> 0x1f ^ 0xffffffffU));
    if (((ulong)local_100 & 1) == 0) {
      local_100 = (undefined1 *)CONCAT71(local_100._1_7_,1);
    }
    local_f8 = (undefined1 *)(auVar15._8_8_ & 0xffffffff);
    if (auVar15._8_4_ < 1) {
      local_f8 = (undefined1 *)0x7fffffffffffffff;
    }
    if (((ulong)local_f0 & 1) == 0) {
      local_f0 = (undefined1 *)CONCAT71(local_f0._1_7_,1);
    }
    if ((0 < auVar15._4_4_) && (puStack_e8 = puVar11, ((ulong)local_e0 & 1) == 0)) {
      local_e0 = (undefined1 *)CONCAT71(local_e0._1_7_,1);
    }
    local_a8 = local_100;
    puStack_90 = puStack_e8;
    local_98 = local_f0;
    local_88 = local_e0;
    pppppuStack_b8 = local_110;
    local_b0 = (undefined1 *)ppcStack_108;
    puStack_a0 = local_f8;
    FUN_0086db70(&local_110);
    *(long *)(param_1 + 0x820) = (long)*(int *)(param_4 + 0x20);
    if (*(char *)(param_1 + 2000) == '\x01') {
      FUN_0090856c(param_1 + 0x5b8,param_4);
    }
    plVar12 = *(long **)(param_1 + 0x680);
    if (plVar12 == (long *)0x0) {
      FUN_0086db50(&local_220,(ulong)&local_c0 | 8);
      if ((local_1f0 & 1) == 0) {
        uStack_1f8 = *(undefined8 *)(param_1 + 0x718);
        local_1f0 = *(byte *)(param_1 + 0x720);
      }
      *(undefined8 *)(param_1 + 0x6f8) = uStack_218;
      *(undefined8 *)(param_1 + 0x6f0) = local_220;
      *(undefined8 *)(param_1 + 0x708) = uStack_208;
      *(undefined8 *)(param_1 + 0x700) = uStack_210;
      *(undefined8 *)(param_1 + 0x718) = uStack_1f8;
      *(undefined8 *)(param_1 + 0x710) = local_200;
      *(ulong *)(param_1 + 0x720) = CONCAT71(uStack_1ef,local_1f0);
      FUN_0086db70(&local_220);
    }
    else {
      FUN_0086dba4(auStack_1e8,&local_c0);
      (**(code **)(*plVar12 + 0x18))(auStack_1a8,plVar12,auStack_1e8);
      FUN_008bdf48(param_1,auStack_1a8);
      FUN_0086e298(auStack_1a8);
      FUN_0086dbd4(auStack_1e8);
    }
    *(undefined1 *)(param_1 + 0x848) = 0;
    FUN_008e8b7c(param_1 + 0x1d0,0);
    FUN_0086dbd4(&local_c0);
  }
  return;
}


// ===== 008bdaf8  FUN_008bdaf8 =====

/* WARNING: Removing unreachable block (ram,0x008bde5c) */
/* WARNING: Removing unreachable block (ram,0x008bdd4c) */
/* WARNING: Removing unreachable block (ram,0x008bdc40) */
/* WARNING: Removing unreachable block (ram,0x008bdb78) */
/* WARNING: Removing unreachable block (ram,0x008bdbdc) */
/* WARNING: Removing unreachable block (ram,0x008bdce8) */
/* WARNING: Removing unreachable block (ram,0x008bddb0) */
/* WARNING: Removing unreachable block (ram,0x008bdec0) */

void FUN_008bdaf8(undefined8 *param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined1 **ppuVar3;
  undefined1 *local_90;
  ulong uStack_88;
  byte bStack_79;
  undefined8 **local_78;
  ulong uStack_70;
  byte bStack_61;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 **local_48;
  ulong uStack_40;
  ulong local_38;
  
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  FUN_00547cac(&local_60,"[ connected: ",0xd);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,*param_2);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  FUN_00547cac(&local_60," local: [ ",10);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,*(undefined2 *)(param_2 + 8));
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  FUN_00547cac(&local_60,&DAT_001c7bbb,1);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,*(undefined2 *)(param_2 + 10));
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  FUN_00547cac(&local_60,&DAT_001d5e07,1);
  FUN_008c0794(&local_78,*(undefined4 *)(param_2 + 4));
  pppuVar2 = (undefined8 ***)local_78;
  if (-1 < (char)bStack_61) {
    uStack_70 = (ulong)bStack_61;
    pppuVar2 = &local_78;
  }
  FUN_00547cac(&local_60,pppuVar2,uStack_70);
  FUN_00547cac(&local_60," turn: ",7);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,param_2[0xc]);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  FUN_00547cac(&local_60," ] remote: [ ",0xd);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,*(undefined2 *)(param_2 + 0x14));
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  FUN_00547cac(&local_60,&DAT_001c7bbb,1);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,*(undefined2 *)(param_2 + 0x16));
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  FUN_00547cac(&local_60,&DAT_001d5e07,1);
  FUN_008c0794(&local_90,*(undefined4 *)(param_2 + 0x10));
  ppuVar3 = (undefined1 **)local_90;
  if (-1 < (char)bStack_79) {
    uStack_88 = (ulong)bStack_79;
    ppuVar3 = &local_90;
  }
  FUN_00547cac(&local_60,ppuVar3,uStack_88);
  FUN_00547cac(&local_60," turn: ",7);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,param_2[0x18]);
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  FUN_00547cac(&local_60," ] packet_overhead_bytes: ",0x1a);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,*(undefined4 *)(param_2 + 0x20));
  uVar1 = uStack_40;
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    pppuVar2 = &local_48;
  }
  FUN_00547cac(&local_60,pppuVar2,uVar1);
  FUN_00547cac(&local_60,&DAT_001bc69f,2);
  if ((char)bStack_79 < '\0') {
    operator_delete(local_90);
  }
  if ((char)bStack_61 < '\0') {
    operator_delete(local_78);
  }
  param_1[1] = uStack_58;
  *param_1 = local_60;
  param_1[2] = local_50;
  return;
}


// ===== 008bdf48  FUN_008bdf48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008bdf48(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  void *local_d8;
  void *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  
  if (*(char *)(param_2 + 1) == '\x01') {
    *(undefined8 *)(param_1 + 0x840) = *param_2;
    lVar2 = FUN_0090774c(param_1 + 0x5b8);
    lVar3 = *(long *)(param_1 + 0x840);
    if ((bool)*(char *)(param_1 + 0x848) != lVar3 <= lVar2) {
      *(bool *)(param_1 + 0x848) = lVar3 <= lVar2;
      FUN_008e8b7c(param_1 + 0x1d0,lVar3 <= lVar2);
    }
  }
  if (*(char *)(param_2 + 6) == '\x01') {
    FUN_008e8c48(param_1 + 0x1d0,param_2 + 2);
  }
  pvVar4 = (void *)param_2[7];
  pvVar1 = (void *)param_2[8];
  if (pvVar4 != pvVar1) {
    local_c8 = param_2[9];
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    local_d8 = pvVar4;
    local_d0 = pvVar1;
    FUN_008e89c8(param_1 + 0x1d0,&local_d8);
    if (local_d8 != (void *)0x0) {
      uVar5 = (ulong)(((long)local_d8 - (long)local_d0) * 0x1333333333333333) >> 3;
      uVar6 = (long)local_d0 * -0x1333333333333333 - 8U >> 3;
      if (uVar6 <= uVar5) {
        uVar5 = uVar6;
      }
      pvVar4 = local_d0;
      if ((1 < uVar5) && ((((int)local_d8 - (int)local_d0 | -(int)local_d0) & 7U) == 0)) {
        uVar5 = uVar5 & 0x1ffffffffffffffe;
        pvVar4 = (void *)((long)local_d0 + uVar5 * -0x28);
        do {
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
      }
      while (pvVar4 != local_d8) {
        pvVar4 = (void *)((long)pvVar4 + -0x28);
        if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      local_d0 = local_d8;
      operator_delete(local_d8);
    }
  }
  if (*(char *)(param_2 + 0x12) == '\x01') {
    uStack_118 = param_2[0xb];
    local_120 = param_2[10];
    uStack_108 = param_2[0xd];
    uStack_110 = param_2[0xc];
    uStack_f8 = param_2[0xf];
    local_100 = param_2[0xe];
    uStack_e8 = param_2[0x11];
    uStack_f0 = param_2[0x10];
    FUN_00906a4c(*(undefined8 *)(param_1 + 0x678),&local_120);
    uStack_78 = _UNK_00224ab8;
    local_80 = _DAT_00224ab0;
    uStack_68 = _UNK_00224ac8;
    uStack_70 = _DAT_00224ac0;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_58 = _UNK_00224ad8;
    local_60 = _DAT_00224ad0;
    uStack_48 = _UNK_00224ae8;
    local_50 = _DAT_00224ae0;
    FUN_00906b58(&local_80,*(undefined8 *)(param_1 + 0x678));
    if (((ulong)local_40 & 1) != 0) {
      FUN_00889ebc(param_1 + 0x858,local_50 & 0xffffffff);
      if (((ulong)local_40 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      uStack_98 = uStack_58;
      local_a0 = local_60;
      uStack_88 = uStack_48;
      uStack_90 = local_50;
      uStack_b8 = uStack_78;
      local_c0 = local_80;
      uStack_a8 = uStack_68;
      uStack_b0 = uStack_70;
      (**(code **)(**(long **)(param_1 + 0x590) + 0x10))(*(long **)(param_1 + 0x590),&local_c0);
    }
  }
  return;
}


// ===== 008be158  FUN_008be158 =====

void FUN_008be158(long param_1,byte param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  uVar3 = FUN_0044075c();
  if ((uVar3 & 1) == 0) {
    puVar1 = &UNK_001ac759;
    if ((param_2 & 1) == 0) {
      puVar1 = &UNK_0019e411;
    }
    FUN_00623bb0(&DAT_001f4ed3,"../../call/rtp_transport_controller_send.cc",0xd40,
                 "SignalNetworkState ",puVar1);
  }
  *(byte *)(param_1 + 0x828) = param_2 & 1;
  if ((param_2 & 1) == 0) {
    FUN_008e8aa4(param_1 + 0x1d0);
  }
  else {
    FUN_008e8ab0();
  }
  *(undefined1 *)(param_1 + 0x848) = 0;
  FUN_008e8b7c(param_1 + 0x1d0,0);
  if (*(long *)(param_1 + 0x680) == 0) {
    FUN_008bce7c(param_1);
  }
  FUN_008bd37c(param_1);
  puVar2 = *(undefined8 **)(param_1 + 0x168);
  for (puVar4 = *(undefined8 **)(param_1 + 0x160); puVar4 != puVar2; puVar4 = puVar4 + 1) {
    (**(code **)(*(long *)*puVar4 + 0x40))((long *)*puVar4,param_2 & 1);
  }
  return;
}


// ===== 008be234  FUN_008be234 =====

long FUN_008be234(long param_1)

{
  return param_1 + 8;
}


// ===== 008be240  FUN_008be240 =====

ulong FUN_008be240(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = FUN_008e93f4(param_1 + 0x1d0);
  uVar2 = uVar1 / 1000;
  if (499 < uVar1 % 1000) {
    uVar2 = uVar2 + 1;
  }
  if ((uVar1 & 0x8000000000000000) != 0) {
    uVar2 = -(-uVar1 / 1000) - (ulong)(500 < -uVar1 % 1000);
  }
  return uVar2;
}


// ===== 008be2b8  FUN_008be2b8 =====

void FUN_008be2b8(long param_1)

{
  FUN_008e93e0(param_1 + 0x1d0);
  return;
}


// ===== 008be2dc  FUN_008be2dc =====

void FUN_008be2dc(long param_1,ushort param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 auStack_118 [80];
  undefined1 auStack_c8 [152];
  
  *(ushort *)(param_1 + 0x788) = param_2 & 1 | 0x100;
  uVar1 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
  plVar2 = *(long **)(param_1 + 0x680);
  *(undefined8 *)(param_1 + 0x780) = uVar1;
  if (plVar2 != (long *)0x0) {
    FUN_0086db00(auStack_118,param_1 + 0x780);
    (**(code **)(*plVar2 + 0x48))(auStack_c8,plVar2,auStack_118);
    FUN_008bdf48(param_1,auStack_c8);
    FUN_0086e298(auStack_c8);
    FUN_0086db20(auStack_118);
  }
  return;
}


// ===== 008be378  FUN_008be378 =====

void FUN_008be378(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined1 uStack_99;
  long local_98;
  long local_90;
  long lStack_88;
  undefined1 auStack_80 [47];
  undefined1 uStack_51;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  
  plVar1 = (long *)FUN_005d6490();
  plVar2 = *(long **)(param_1 + 0x48);
  if (plVar1 != plVar2) {
    lVar3 = *(long *)(param_1 + 0x8f8);
    if (lVar3 != 0) {
      FUN_00d0f740(1,lVar3);
    }
    lStack_88 = param_2[1];
    local_90 = *param_2;
    local_98 = param_1;
    FUN_007b6424(auStack_80,param_2 + 2);
    plVar1 = (long *)operator_new(0x40);
    *plVar1 = local_98;
    plVar1[2] = lStack_88;
    plVar1[1] = local_90;
    FUN_007b6424(plVar1 + 3,auStack_80);
    local_50[0] = (long *)operator_new(0x30);
    *local_50[0] = lVar3;
    local_50[0][4] = (long)FUN_008bff1c;
    local_50[0][5] = (long)FUN_008bff0c;
    local_50[0][2] = (long)plVar1;
    local_40 = FUN_005db390;
    pcStack_38 = FUN_005db348;
    (**(code **)(*plVar2 + 8))(plVar2,local_50,&uStack_51,&uStack_99);
    (*local_40)(0,local_50,local_50);
    FUN_007b643c(auStack_80);
    return;
  }
  FUN_008be4ac(param_1,param_2);
  return;
}


// ===== 008be4ac  FUN_008be4ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008be4ac(long param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_2b8 [152];
  undefined1 *local_220;
  undefined1 *puStack_218;
  undefined1 *puStack_210;
  undefined1 *puStack_208;
  undefined1 *local_200;
  undefined1 *puStack_1f8;
  undefined1 *puStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 *local_1e0;
  undefined8 local_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  ulong local_1a0;
  long local_198;
  long local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 *local_140;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined8 local_d8;
  ulong uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  long local_a0;
  long lStack_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  local_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  local_130 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_009073e4(&local_130,param_1 + 0x5b8);
  if ((char)local_e8 == '\x01') {
    lVar2 = FUN_0090774c(param_1 + 0x5b8);
    lVar4 = *(long *)(param_1 + 0x840);
    cVar1 = *(char *)(param_1 + 0x848);
    uStack_188 = _UNK_00224b40;
    local_190 = _DAT_00224b38;
    uStack_178 = _UNK_00224b50;
    local_180 = _DAT_00224b48;
    uStack_168 = _UNK_00224b60;
    local_170 = _DAT_00224b58;
    uStack_158 = _UNK_00224b70;
    local_160 = _DAT_00224b68;
    uStack_148 = _UNK_00224b80;
    uStack_150 = _DAT_00224b78;
    uStack_1c8 = _UNK_00224b00;
    local_1d0 = _DAT_00224af8;
    uStack_1b8 = _UNK_00224b10;
    uStack_1c0 = _DAT_00224b08;
    local_140 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_1a8 = _UNK_00224b20;
    local_1b0 = _DAT_00224b18;
    local_198 = _UNK_00224b30;
    local_1a0 = _DAT_00224b28;
    FUN_0086e1ac(&local_1d0);
    plVar3 = *(long **)(param_1 + 0x680);
    if (plVar3 != (long *)0x0) {
      if (((ulong)local_e8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      puStack_218 = puStack_128;
      local_220 = local_130;
      puStack_208 = puStack_118;
      puStack_210 = local_120;
      local_1e0 = local_f0;
      puStack_1f8 = puStack_108;
      local_200 = local_110;
      puStack_1e8 = puStack_f8;
      puStack_1f0 = local_100;
      (**(code **)(*plVar3 + 0x38))(&local_d8,plVar3,&local_220);
      uStack_1c8 = uStack_d0;
      local_1d0 = local_d8;
      uStack_1b8 = uStack_c0;
      uStack_1c0 = local_c8;
      uStack_1a8 = uStack_b0;
      local_1b0 = local_b8;
      local_1a0 = CONCAT71(local_1a0._1_7_,local_a8);
      FUN_008bf97c(&local_198,local_a0,lStack_98,(lStack_98 - local_a0 >> 3) * -0x3333333333333333);
      uStack_178 = uStack_80;
      local_180 = local_88;
      uStack_168 = uStack_70;
      local_170 = local_78;
      local_140 = (undefined1 *)CONCAT71(local_140._1_7_,local_48);
      uStack_158 = uStack_60;
      local_160 = local_68;
      uStack_148 = uStack_50;
      uStack_150 = local_58;
      FUN_0086e298(&local_d8);
    }
    if (((((bool)cVar1 != lVar4 <= lVar2) || ((uStack_1c8 & 1) != 0)) || ((local_1a0 & 1) != 0)) ||
       ((local_198 != local_190 || (((ulong)local_140 & 1) != 0)))) {
      FUN_0086e1d4(auStack_2b8,&local_1d0);
      lVar2 = FUN_0090774c(param_1 + 0x5b8);
      lVar4 = *(long *)(param_1 + 0x840);
      if ((bool)*(char *)(param_1 + 0x848) != lVar4 <= lVar2) {
        *(bool *)(param_1 + 0x848) = lVar4 <= lVar2;
        FUN_008e8b7c(param_1 + 0x1d0,lVar4 <= lVar2);
      }
      if (*(long *)(param_1 + 0x680) != 0) {
        FUN_0086e1d4(&local_d8,auStack_2b8);
        FUN_008bdf48(param_1,&local_d8);
        FUN_0086e298(&local_d8);
      }
      FUN_0086e298(auStack_2b8);
    }
    FUN_0086e298(&local_1d0);
  }
  return;
}


// ===== 008be6c8  FUN_008be6c8 =====

void FUN_008be6c8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 auStack_b8 [152];
  
  plVar1 = *(long **)(param_1 + 0x680);
  if (plVar1 != (long *)0x0) {
    uStack_c8 = param_2[1];
    local_d0 = *param_2;
    local_c0 = param_2[2];
    (**(code **)(*plVar1 + 0x40))(auStack_b8,plVar1,&local_d0);
    FUN_008bdf48(param_1,auStack_b8);
    FUN_0086e298(auStack_b8);
  }
  return;
}


// ===== 008be734  FUN_008be734 =====

void FUN_008be734(long param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  local_24 = 0xaaaaaaaa;
  auVar2 = FUN_008d981c(param_1 + 0x178);
  local_30 = auVar2._0_8_;
  local_28 = auVar2._8_4_;
  local_24 = CONCAT31(local_24._1_3_,auVar2[0xc]);
  if ((auVar2._8_8_ >> 0x20 & 1) == 0) {
    uVar1 = FUN_0044075c();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../call/rtp_transport_controller_send.cc",0x10b0,
                   "WebRTC.RtpTransportControllerSend.SetSdpBitrateParameters: nothing to update");
      return;
    }
  }
  else {
    FUN_008bd210(param_1,&local_30);
  }
  return;
}


// ===== 008be7c8  FUN_008be7c8 =====

void FUN_008be7c8(long param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  local_24 = 0xaaaaaaaa;
  auVar2 = FUN_008d9a88(param_1 + 0x178);
  local_30 = auVar2._0_8_;
  local_28 = auVar2._8_4_;
  local_24 = CONCAT31(local_24._1_3_,auVar2[0xc]);
  if ((auVar2._8_8_ >> 0x20 & 1) == 0) {
    uVar1 = FUN_0044075c();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../call/rtp_transport_controller_send.cc",0x1120,
                   "WebRTC.RtpTransportControllerSend.SetClientBitratePreferences: nothing to update"
                  );
      return;
    }
  }
  else {
    FUN_008bd210(param_1,&local_30);
  }
  return;
}


// ===== 008be85c  FUN_008be85c =====

void FUN_008be85c(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  if (param_2 < 500) {
    FUN_008e9230(param_1 + 0x1d0);
    puVar1 = *(undefined8 **)(param_1 + 0x168);
    for (puVar3 = *(undefined8 **)(param_1 + 0x160); puVar3 != puVar1; puVar3 = puVar3 + 1) {
      (**(code **)(*(long *)*puVar3 + 0x78))((long *)*puVar3,param_2);
    }
  }
  else {
    uVar2 = FUN_004249b0();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6643,"../../call/rtp_transport_controller_send.cc",0x11a3,
                   "Transport overhead exceeds ",500);
      return;
    }
  }
  return;
}


// ===== 008be904  FUN_008be904 =====

void FUN_008be904(long param_1)

{
  FUN_008e9090(param_1 + 0x1d0);
  return;
}


// ===== 008be910  FUN_008be910 =====

void FUN_008be910(long param_1)

{
  FUN_008e915c(param_1 + 0x1d0);
  return;
}


// ===== 008be91c  FUN_008be91c =====

void FUN_008be91c(long param_1)

{
  if ((*(byte *)(param_1 + 0x1c9) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x1c9) = 1;
  FUN_008e88fc(param_1 + 0x1d0);
  return;
}


// ===== 008be940  FUN_008be940 =====

void FUN_008be940(long param_1)

{
  undefined1 auStack_b8 [152];
  
  if (*(long **)(param_1 + 0x680) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x680) + 0x28))(auStack_b8);
    FUN_008bdf48(param_1,auStack_b8);
    FUN_0086e298(auStack_b8);
  }
  return;
}


// ===== 008be998  FUN_008be998 =====

void FUN_008be998(long param_1)

{
  undefined1 auStack_b8 [152];
  
  if (*(long **)(param_1 + 0x678) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x678) + 0x28))(auStack_b8);
    FUN_008bdf48(param_1 + -8,auStack_b8);
    FUN_0086e298(auStack_b8);
  }
  return;
}


// ===== 008be9f8  FUN_008be9f8 =====

void FUN_008be9f8(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 local_d0;
  long lStack_c8;
  undefined1 local_c0;
  undefined4 local_bf;
  undefined2 local_bb;
  undefined1 local_b9;
  undefined1 auStack_b8 [152];
  
  plVar1 = *(long **)(param_1 + 0x680);
  lStack_c8 = (param_3 + 500) / 1000;
  if (lStack_c8 * 1000 != 0 && plVar1 != (long *)0x0) {
    local_c0 = 0;
    lStack_c8 = lStack_c8 * 1000;
    local_bf = 0xaaaaaaaa;
    local_bb = 0xaaaa;
    local_b9 = 0xaa;
    local_d0 = param_2;
    (**(code **)(*plVar1 + 0x30))(auStack_b8,plVar1,&local_d0);
    FUN_008bdf48(param_1,auStack_b8);
    FUN_0086e298(auStack_b8);
  }
  return;
}


// ===== 008beaac  FUN_008beaac =====

void FUN_008beaac(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 local_d0;
  long lStack_c8;
  undefined1 local_c0;
  undefined4 local_bf;
  undefined2 local_bb;
  undefined1 local_b9;
  undefined1 auStack_b8 [152];
  
  lStack_c8 = (param_3 + 500) / 1000;
  plVar1 = *(long **)(param_1 + 0x678);
  if (lStack_c8 * 1000 != 0 && plVar1 != (long *)0x0) {
    local_c0 = 0;
    lStack_c8 = lStack_c8 * 1000;
    local_bf = 0xaaaaaaaa;
    local_bb = 0xaaaa;
    local_b9 = 0xaa;
    local_d0 = param_2;
    (**(code **)(*plVar1 + 0x30))(auStack_b8,plVar1,&local_d0);
    FUN_008bdf48(param_1 + -8,auStack_b8);
    FUN_0086e298(auStack_b8);
  }
  return;
}


// ===== 008beb68  FUN_008beb68 =====

void FUN_008beb68(long param_1,int param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  if (param_2 == 6) {
    *(undefined2 *)(param_1 + 0x849) = 0x101;
    uVar1 = FUN_00417e08();
    if ((uVar1 & 1) != 0) goto LAB_008bec04;
    pcVar3 = "Sending packets as ECT1(1) and assume RFC 8888 feedback.";
    uVar2 = 0x1419;
  }
  else {
    *(undefined2 *)(param_1 + 0x849) = 0;
    uVar1 = FUN_00417e08();
    if ((uVar1 & 1) != 0) goto LAB_008bec04;
    pcVar3 = "Assume TWCC feedback.";
    uVar2 = 0x1441;
  }
  FUN_00623bb0(&DAT_001f4ead,"../../call/rtp_transport_controller_send.cc",uVar2,
               "SetPreferredRtcpCcAckType",&DAT_001c4dc3,pcVar3);
LAB_008bec04:
  FUN_008e6640(param_1 + 0x50,*(undefined1 *)(param_1 + 0x849),*(undefined1 *)(param_1 + 0x84a));
  FUN_008e915c(param_1 + 0x1d0);
  return;
}


// ===== 008bec28  FUN_008bec28 =====

ulong FUN_008bec28(long param_1)

{
  if (*(char *)(param_1 + 0x849) == '\x01') {
    return (ulong)*(uint *)(param_1 + 0x84c) | 0x100000000;
  }
  return 0;
}


// ===== 008bec4c  FUN_008bec4c =====

undefined8 * FUN_008bec4c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar4 = (undefined8 *)param_2[0xd5];
  puVar6 = (undefined8 *)param_2[0xd6];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = (long)puVar6 - (long)puVar4;
  if (uVar1 != 0) {
    if (0x555555555555555 < (ulong)(((long)uVar1 >> 4) * -0x5555555555555555)) {
      lVar3 = FUN_008bfbf8();
      if ((*(byte *)(lVar3 + 0x849) & 1) != 0) {
        return (undefined8 *)0x0;
      }
      return (undefined8 *)((ulong)*(uint *)(lVar3 + 0x850) | 0x100000000);
    }
    puVar2 = (undefined8 *)operator_new(uVar1);
    *param_1 = puVar2;
    param_1[2] = (long)puVar2 + uVar1;
    do {
      if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar9 = puVar4[2];
      uVar8 = puVar4[5];
      uVar7 = puVar4[4];
      puVar5 = puVar4 + 6;
      uVar11 = puVar4[1];
      uVar10 = *puVar4;
      puVar2[3] = puVar4[3];
      puVar2[2] = uVar9;
      puVar2[5] = uVar8;
      puVar2[4] = uVar7;
      param_2 = puVar2 + 6;
      puVar2[1] = uVar11;
      *puVar2 = uVar10;
      puVar2 = param_2;
      puVar4 = puVar5;
    } while (puVar5 != puVar6);
    param_1[1] = param_2;
  }
  return param_2;
}


// ===== 008becfc  FUN_008becfc =====

ulong FUN_008becfc(long param_1)

{
  if ((*(byte *)(param_1 + 0x849) & 1) != 0) {
    return 0;
  }
  return (ulong)*(uint *)(param_1 + 0x850) | 0x100000000;
}


// ===== 008bed1c  FUN_008bed1c =====

void FUN_008bed1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *local_28;
  
  *(int *)(param_1 + 0x850) = *(int *)(param_1 + 0x850) + 1;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00907798(&local_70,param_1 + 0x5b8,param_3,param_2);
  if ((char)local_28 == '\x01') {
    FUN_008beda8(param_1,&local_70);
    if ((char)local_28 == '\x01') {
      FUN_0086dda8(&local_70);
    }
  }
  return;
}


// ===== 008beda8  FUN_008beda8 =====

void FUN_008beda8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 uStack_129;
  char *local_128;
  undefined8 uStack_120;
  undefined1 *local_118;
  undefined1 auStack_110 [72];
  undefined1 auStack_c8 [152];
  
  FUN_0090a924(param_1 + 0x598);
  plVar6 = *(long **)(param_1 + 0x680);
  if (plVar6 != (long *)0x0) {
    FUN_0086dc78(auStack_110,param_2);
    (**(code **)(*plVar6 + 0x60))(auStack_c8,plVar6,auStack_110);
    FUN_008bdf48(param_1,auStack_c8);
    FUN_0086e298(auStack_c8);
    FUN_0086dda8(auStack_110);
  }
  if (*(char *)(param_1 + 0x84a) == '\x01') {
    if (*(long **)(param_1 + 0x680) == (long *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x680) + 0x70))();
      uVar7 = uVar3 & 0xffffffff;
      if (((uVar3 & 1) != 0) && ((*(byte *)(param_2 + 0x10) & 1) != 0)) goto LAB_008beed4;
    }
    *(undefined1 *)(param_1 + 0x84a) = 0;
    FUN_008e6640(param_1 + 0x50,*(undefined1 *)(param_1 + 0x849),0);
    uVar3 = FUN_00417e08();
    if ((uVar3 & 1) == 0) {
      local_128 = "../../call/rtp_transport_controller_send.cc";
      uStack_120 = 0x1851;
      local_118 = &uStack_129;
      puVar1 = &DAT_001b3348;
      if (*(char *)(param_2 + 0x10) == '\0') {
        puVar1 = &UNK_001a6f29;
      }
      puVar2 = &DAT_001b3348;
      if ((uVar7 & 1) == 0) {
        puVar2 = &UNK_001a6f29;
      }
      FUN_00623bb0("\r\t\t\t\t\t","../../call/rtp_transport_controller_send.cc",0x1851,
                   "Transport is ",puVar1,"ECN capable. Congestion Controller does ",puVar2,
                   "support ECN. Stop sending ECT(1).");
    }
  }
LAB_008beed4:
  lVar4 = FUN_0090774c(param_1 + 0x5b8);
  lVar5 = *(long *)(param_1 + 0x840);
  if ((bool)*(char *)(param_1 + 0x848) != lVar5 <= lVar4) {
    *(bool *)(param_1 + 0x848) = lVar5 <= lVar4;
    FUN_008e8b7c(param_1 + 0x1d0,lVar5 <= lVar4);
  }
  return;
}


// ===== 008bef20  FUN_008bef20 =====

void FUN_008bef20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *local_28;
  
  *(int *)(param_1 + 0x848) = *(int *)(param_1 + 0x848) + 1;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00907798(&local_70,param_1 + 0x5b0,param_3,param_2);
  if ((char)local_28 == '\x01') {
    FUN_008beda8(param_1 + -8,&local_70);
    if ((char)local_28 == '\x01') {
      FUN_0086dda8(&local_70);
    }
  }
  return;
}


// ===== 008befac  FUN_008befac =====

void FUN_008befac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *local_28;
  
  *(int *)(param_1 + 0x84c) = *(int *)(param_1 + 0x84c) + 1;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00907d2c(&local_70,param_1 + 0x5b8,param_3,param_2);
  if ((char)local_28 == '\x01') {
    FUN_008bf060(param_1,&local_70);
    if (((ulong)local_28 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    FUN_008beda8(param_1,&local_70);
    if ((char)local_28 == '\x01') {
      FUN_0086dda8(&local_70);
    }
  }
  return;
}


// ===== 008bf060  FUN_008bf060 =====

void FUN_008bf060(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  byte bVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  uint local_34;
  
  lVar11 = *(long *)(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x20);
  if (lVar11 != lVar1) {
    puVar7 = (uint *)0x0;
    bVar5 = 0;
    uVar8 = 0xaaaaaa00;
    do {
      if (*(char *)(lVar11 + 0x6c) == '\x01') {
        uVar2 = *(uint *)(lVar11 + 100);
        if (!(bool)(bVar5 & uVar2 == uVar8)) {
          puVar7 = *(uint **)(param_1 + 0x6a8);
          lVar4 = (long)*(uint **)(param_1 + 0x6b0) - (long)puVar7;
          if (lVar4 != 0) {
            uVar9 = (lVar4 >> 4) * -0x5555555555555555;
            puVar6 = puVar7;
            do {
              uVar10 = uVar9 >> 1;
              puVar7 = puVar6 + uVar10 * 0xc + 0xc;
              uVar9 = uVar9 + ~uVar10;
              if (uVar2 <= puVar6[uVar10 * 0xc]) {
                puVar7 = puVar6;
                uVar9 = uVar10;
              }
              puVar6 = puVar7;
            } while (uVar9 != 0);
          }
          if ((puVar7 == *(uint **)(param_1 + 0x6b0)) || (uVar2 < *puVar7)) {
            local_60 = 0;
            uStack_78 = 0;
            local_80 = 0;
            uStack_68 = 0;
            uStack_70 = 0;
            local_34 = uVar2;
            puVar7 = (uint *)FUN_008bff84(param_1 + 0x6a8,puVar7,&local_34,&local_80);
          }
          puVar7 = puVar7 + 2;
          uVar8 = uVar2;
        }
        if (*(char *)(lVar11 + 0x62) == '\x01') {
          *(long *)(puVar7 + 4) = *(long *)(puVar7 + 4) + 1;
        }
        if (*(char *)(lVar11 + 99) == '\x01') {
          *(long *)(puVar7 + 6) = *(long *)(puVar7 + 6) + 1;
        }
        if (*(long *)(lVar11 + 0x48) != 0x7fffffffffffffff) {
          cVar3 = *(char *)(lVar11 + 0x60);
          if (cVar3 == '\0') {
            if (*(char *)(lVar11 + 0x61) == '\x01') {
              *(long *)(puVar7 + 8) = *(long *)(puVar7 + 8) + 1;
            }
          }
          else if (cVar3 == '\x03') {
            *(long *)(puVar7 + 2) = *(long *)(puVar7 + 2) + 1;
          }
          else if (cVar3 == '\x01') {
            *(long *)puVar7 = *(long *)puVar7 + 1;
          }
        }
        bVar5 = 1;
      }
      lVar11 = lVar11 + 0x70;
    } while (lVar11 != lVar1);
  }
  return;
}


// ===== 008bf20c  FUN_008bf20c =====

void FUN_008bf20c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *local_28;
  
  *(int *)(param_1 + 0x844) = *(int *)(param_1 + 0x844) + 1;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00907d2c(&local_70,param_1 + 0x5b0,param_3,param_2);
  if ((char)local_28 == '\x01') {
    FUN_008bf060(param_1 + -8,&local_70);
    if (((ulong)local_28 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    FUN_008beda8(param_1 + -8,&local_70);
    if ((char)local_28 == '\x01') {
      FUN_0086dda8(&local_70);
    }
  }
  return;
}


// ===== 008bf2c4  FUN_008bf2c4 =====

void FUN_008bf2c4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
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
  undefined8 local_d0;
  undefined1 auStack_c8 [152];
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
  param_2[1] = uVar1;
  plVar2 = *(long **)(param_1 + 0x680);
  if (plVar2 != (long *)0x0) {
    uStack_108 = param_2[9];
    local_110 = param_2[8];
    uStack_f8 = param_2[0xb];
    uStack_100 = param_2[10];
    local_d0 = param_2[0x10];
    uStack_148 = param_2[1];
    local_150 = *param_2;
    uStack_138 = param_2[3];
    uStack_140 = param_2[2];
    uStack_128 = param_2[5];
    local_130 = param_2[4];
    uStack_118 = param_2[7];
    uStack_120 = param_2[6];
    uStack_e8 = param_2[0xd];
    local_f0 = param_2[0xc];
    uStack_d8 = param_2[0xf];
    uStack_e0 = param_2[0xe];
    (**(code **)(*plVar2 + 0x68))(auStack_c8,plVar2,&local_150);
    FUN_008bdf48(param_1,auStack_c8);
    FUN_0086e298(auStack_c8);
  }
  return;
}


// ===== 008bf368  FUN_008bf368 =====

void FUN_008bf368(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
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
  undefined8 local_d0;
  undefined1 auStack_c8 [152];
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  param_2[1] = uVar1;
  plVar2 = *(long **)(param_1 + 0x670);
  if (plVar2 != (long *)0x0) {
    uStack_108 = param_2[9];
    local_110 = param_2[8];
    uStack_f8 = param_2[0xb];
    uStack_100 = param_2[10];
    local_d0 = param_2[0x10];
    uStack_148 = param_2[1];
    local_150 = *param_2;
    uStack_138 = param_2[3];
    uStack_140 = param_2[2];
    uStack_128 = param_2[5];
    local_130 = param_2[4];
    uStack_118 = param_2[7];
    uStack_120 = param_2[6];
    uStack_e8 = param_2[0xd];
    local_f0 = param_2[0xc];
    uStack_d8 = param_2[0xf];
    uStack_e0 = param_2[0xe];
    (**(code **)(*plVar2 + 0x68))(auStack_c8,plVar2,&local_150);
    FUN_008bdf48(param_1 + -0x10,auStack_c8);
    FUN_0086e298(auStack_c8);
  }
  return;
}


// ===== 008bf410  FUN_008bf410 =====

void FUN_008bf410(long param_1)

{
  void *pvVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  long lVar7;
  long local_90 [2];
  code *local_80;
  code *pcStack_78;
  undefined1 uStack_61;
  long local_60 [2];
  code *local_50;
  code *pcStack_48;
  void *local_38;
  
  uVar3 = FUN_00841d54(param_1 + 0x830);
  if ((uVar3 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    local_50 = FUN_004473ec;
    pcStack_48 = FUN_008c0454;
    local_60[0] = param_1;
    uVar4 = FUN_00622394();
    FUN_00841954(&local_38,uVar5,25000,local_60,0,uVar4,&uStack_61);
    pvVar1 = local_38;
    pvVar6 = *(void **)(param_1 + 0x830);
    local_38 = (void *)0x0;
    *(void **)(param_1 + 0x830) = pvVar1;
    if (pvVar6 != (void *)0x0) {
      iVar2 = FUN_00d0f7a0(0xffffffff,pvVar6);
      if (iVar2 == 1) {
        operator_delete(pvVar6);
      }
      pvVar1 = local_38;
      if ((local_38 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,local_38), iVar2 == 1)) {
        operator_delete(pvVar1);
      }
    }
    (*local_50)(0,local_60,local_60);
  }
  FUN_00841cf8(param_1 + 0x838);
  lVar7 = *(long *)(param_1 + 0x688);
  if (lVar7 + 0x7fffffffffffffffU < 0xfffffffffffffffe) {
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    local_80 = FUN_004473ec;
    pcStack_78 = FUN_008c051c;
    local_90[0] = param_1;
    uVar4 = FUN_00622394();
    FUN_00841954(&local_38,uVar5,lVar7,local_90,0,uVar4,&uStack_61);
    pvVar1 = local_38;
    pvVar6 = *(void **)(param_1 + 0x838);
    local_38 = (void *)0x0;
    *(void **)(param_1 + 0x838) = pvVar1;
    if (pvVar6 != (void *)0x0) {
      iVar2 = FUN_00d0f7a0(0xffffffff,pvVar6);
      if (iVar2 == 1) {
        operator_delete(pvVar6);
      }
      pvVar1 = local_38;
      if ((local_38 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,local_38), iVar2 == 1)) {
        operator_delete(pvVar1);
      }
    }
    (*local_80)(0,local_90,local_90);
  }
  return;
}


// ===== 008bf5c4  FUN_008bf5c4 =====

void FUN_008bf5c4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 auVar6 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  long lStack_110;
  ulong local_108;
  undefined1 auStack_100 [152];
  int local_68;
  undefined1 uStack_61;
  int *local_48;
  
  if ((param_4 != 0) && (param_4 = param_4 << 6, param_4 != 0)) {
    iVar3 = 0;
    iVar4 = 0;
    piVar5 = (int *)(param_3 + 0xc);
    do {
      local_68 = piVar5[-2];
      local_48 = &local_68;
      auVar6 = FUN_008c05d8(0,param_1 + 0x690,param_1 + 0x690,&DAT_001f94c3,&local_48,&uStack_61);
      lVar1 = auVar6._0_8_;
      if ((auVar6 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        iVar4 = (piVar5[1] + iVar4) - *(int *)(lVar1 + 0x20);
        iVar3 = (*piVar5 + iVar3) - *(int *)(lVar1 + 0x24);
      }
      *(int *)(lVar1 + 0x20) = piVar5[1];
      param_4 = param_4 + -0x40;
      *(int *)(lVar1 + 0x24) = *piVar5;
      piVar5 = piVar5 + 0x10;
    } while (param_4 != 0);
    if ((iVar4 != 0) && (local_108 = (ulong)(uint)(iVar4 - iVar3), 0 < iVar4 - iVar3)) {
      plVar2 = *(long **)(param_1 + 0x680);
      if (plVar2 != (long *)0x0) {
        uStack_120 = *(undefined8 *)(param_1 + 0x6c0);
        lStack_110 = (long)iVar3;
        local_128 = param_2;
        local_118 = param_2;
        (**(code **)(*plVar2 + 0x58))(auStack_100,plVar2,&local_128);
        FUN_008bdf48(param_1,auStack_100);
        FUN_0086e298(auStack_100);
      }
      *(undefined8 *)(param_1 + 0x6c0) = param_2;
    }
  }
  return;
}


// ===== 008bf6f8  FUN_008bf6f8 =====

void FUN_008bf6f8(long param_1)

{
  FUN_008bf5c4(param_1 + -8);
  return;
}


// ===== 008bf704  FUN_008bf704 =====

undefined8 FUN_008bf704(long param_1)

{
  return *(undefined8 *)(param_1 + 0x680);
}


// ===== 008bf710  FUN_008bf710 =====

void FUN_008bf710(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_008bf710(param_1,*param_2);
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


// ===== 008bf784  FUN_008bf784 =====

void FUN_008bf784(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_008bf784(param_1,*param_2);
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


// ===== 008bf7f8  FUN_008bf7f8 =====

void FUN_008bf7f8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_008bf7f8(param_1,*param_2);
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


// ===== 008bf86c  FUN_008bf86c =====

undefined8 * FUN_008bf86c(long *param_1,undefined8 *param_2)

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
    FUN_008bf964();
LAB_008bf960:
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
    if (uVar6 >> 0x3d != 0) goto LAB_008bf960;
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


// ===== 008bf964  FUN_008bf964 =====

void FUN_008bf964(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 008bf97c  FUN_008bf97c =====

void FUN_008bf97c(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

{
  long lVar1;
  size_t __n;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  size_t __n_00;
  void *pvVar6;
  
  lVar2 = param_1[2];
  pvVar6 = (void *)*param_1;
  if ((ulong)((lVar2 - (long)pvVar6 >> 3) * -0x3333333333333333) < param_4) {
    if (pvVar6 == (void *)0x0) {
LAB_008bfb58:
      if (param_4 < 0x666666666666667) {
        uVar4 = (lVar2 >> 3) * -0x6666666666666666;
        if (uVar4 < param_4 || uVar4 - param_4 == 0) {
          uVar4 = param_4;
        }
        if (0x333333333333332 < (ulong)((lVar2 >> 3) * -0x3333333333333333)) {
          uVar4 = 0x666666666666666;
        }
        if (uVar4 < 0x666666666666667) {
          pvVar6 = operator_new(uVar4 * 0x28);
          *param_1 = pvVar6;
          param_1[1] = pvVar6;
          param_1[2] = (void *)((long)pvVar6 + uVar4 * 0x28);
          memcpy(pvVar6,param_2,param_3 - (long)param_2);
          lVar2 = (long)pvVar6 + (param_3 - (long)param_2);
          goto LAB_008bfbd0;
        }
      }
      FUN_00870980();
                    /* WARNING: Subroutine does not return */
      FUN_005d34a4("vector");
    }
    pvVar3 = (void *)param_1[1];
    uVar4 = (ulong)(((long)pvVar6 - (long)pvVar3) * 0x1333333333333333) >> 3;
    uVar5 = (long)pvVar3 * -0x1333333333333333 - 8U >> 3;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)pvVar6 - (int)pvVar3 | -(int)pvVar3) & 7U) == 0)) {
      uVar4 = uVar4 & 0x1ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar4 * -0x28);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (pvVar3 == pvVar6) {
        param_1[1] = pvVar6;
        operator_delete(pvVar6);
        lVar2 = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        goto LAB_008bfb58;
      }
      pvVar3 = (void *)((long)pvVar3 + -0x28);
    } while (pvVar3 != (void *)0x0);
  }
  else {
    __n = param_1[1] - (long)pvVar6;
    if ((ulong)(((long)__n >> 3) * -0x3333333333333333) < param_4) {
      memmove(pvVar6,param_2,__n);
      pvVar6 = (void *)param_1[1];
      __n_00 = param_3 - (long)((long)param_2 + __n);
      memmove(pvVar6,(void *)((long)param_2 + __n),__n_00);
      lVar2 = (long)pvVar6 + __n_00;
LAB_008bfbd0:
      param_1[1] = lVar2;
      return;
    }
    memmove(pvVar6,param_2,param_3 - (long)param_2);
    lVar2 = param_1[1];
    uVar4 = (ulong)(((long)pvVar6 + (param_3 - (lVar2 + (long)param_2))) * 0x1333333333333333) >> 3;
    uVar5 = lVar2 * -0x1333333333333333 - 8U >> 3;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    lVar1 = (long)pvVar6 + (param_3 - (long)param_2);
    if ((1 < uVar4) &&
       (((((int)pvVar6 + (int)param_3) - ((int)lVar2 + (int)param_2) | -(int)lVar2) & 7U) == 0)) {
      uVar4 = uVar4 & 0x1ffffffffffffffe;
      lVar2 = lVar2 + uVar4 * -0x28;
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (lVar2 == lVar1) {
        param_1[1] = lVar1;
        return;
      }
      lVar2 = lVar2 + -0x28;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008bfbf8  FUN_008bfbf8 =====

void FUN_008bfbf8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 008bfc10  FUN_008bfc10 =====

void FUN_008bfc10(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_008bfc10(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar1 = (undefined8 *)param_2[1];
      if (*(char *)((long)param_2 + 0x37) < '\0') {
        operator_delete((void *)param_2[4]);
      }
      operator_delete(param_2);
      param_2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


// ===== 008bfca4  FUN_008bfca4 =====

void FUN_008bfca4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_008bfca4(param_1,*param_2);
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


// ===== 008bfd18  FUN_008bfd18 =====

void FUN_008bfd18(long *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (((*(uint *)(param_2 + 0xa0) & 1) != 0) && ((*(uint *)(param_2 + 0x80) & 1) != 0)) {
    lVar2 = *param_1;
    uVar1 = (**(code **)(**(long **)(lVar2 + 0x28) + 0x10))();
    FUN_00906f34(lVar2 + 0x5b8,param_2,param_3,*(undefined8 *)(lVar2 + 0x820),uVar1);
    return;
  }
  return;
}


// ===== 008bfd94  FUN_008bfd94 =====

undefined1  [16] FUN_008bfd94(undefined8 *param_1,undefined8 *param_2,long *param_3)

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
  long lVar12;
  undefined1 auVar13 [16];
  
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
          goto LAB_008bfed0;
        }
        if (uVar2 <= uVar1) goto LAB_008bfddc;
LAB_008bfe2c:
        plVar6 = (long *)*plVar4;
        plVar10 = plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_008bfe48;
      }
      if (iVar3 < 0) goto LAB_008bfe2c;
LAB_008bfddc:
      plVar6 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
    plVar10 = plVar4 + 1;
  }
LAB_008bfe48:
  plVar4 = (long *)operator_new(0x60);
  if (plVar4 != (long *)0x0) {
    *plVar4 = 0;
    if (plVar4 + 4 != (long *)0x0) {
      lVar12 = param_3[1];
      lVar11 = *param_3;
      lVar7 = param_3[2];
      param_3[1] = 0;
      param_3[2] = 0;
      plVar4[5] = lVar12;
      plVar4[4] = lVar11;
      lVar12 = param_3[4];
      lVar11 = param_3[3];
      plVar4[6] = lVar7;
      lVar7 = param_3[7];
      plVar4[8] = lVar12;
      plVar4[7] = lVar11;
      lVar11 = param_3[5];
      *param_3 = 0;
      plVar4[10] = param_3[6];
      plVar4[9] = lVar11;
      *(int *)(plVar4 + 0xb) = (int)lVar7;
      *plVar4 = 0;
      plVar4[1] = 0;
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
LAB_008bfed0:
      auVar13._8_8_ = uVar5;
      auVar13._0_8_ = plVar4;
      return auVar13;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008bff0c  FUN_008bff0c =====

void FUN_008bff0c(undefined8 *param_1)

{
  FUN_008be4ac(*(undefined8 *)*param_1,(undefined8 *)*param_1 + 1);
  return;
}


// ===== 008bff1c  FUN_008bff1c =====

void FUN_008bff1c(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x8bff84);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      FUN_007b643c((long)pvVar2 + 0x18);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 008bff84  FUN_008bff84 =====

undefined8 * FUN_008bff84(long *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  size_t __n;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  void *__dest;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 local_64;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar10 = param_2;
    if (param_2 == puVar1) {
      if (param_2 == (undefined8 *)0x0) {
LAB_008c01f8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(undefined4 *)puVar1 = *param_3;
      uVar18 = param_4[1];
      uVar16 = *param_4;
      uVar14 = param_4[3];
      uVar12 = param_4[2];
      puVar1[5] = param_4[4];
      puVar1[4] = uVar14;
      puVar1[3] = uVar12;
      puVar1[2] = uVar18;
      puVar1[1] = uVar16;
      param_1[1] = (long)(puVar1 + 6);
    }
    else {
      uVar14 = param_4[1];
      uVar12 = *param_4;
      uVar18 = param_4[3];
      uVar16 = param_4[2];
      local_64 = param_4[4];
      uVar2 = *param_3;
      uStack_80._4_4_ = (undefined4)uVar14;
      uStack_78._0_4_ = (undefined4)((ulong)uVar14 >> 0x20);
      uStack_84 = (undefined4)uVar12;
      uStack_80._0_4_ = (undefined4)((ulong)uVar12 >> 0x20);
      uStack_70._4_4_ = (undefined4)uVar18;
      uStack_68 = (undefined4)((ulong)uVar18 >> 0x20);
      uStack_78._4_4_ = (undefined4)uVar16;
      uStack_70._0_4_ = (undefined4)((ulong)uVar16 >> 0x20);
      puVar4 = puVar1;
      for (puVar7 = puVar1 + -6; puVar7 < puVar1; puVar7 = puVar7 + 6) {
        if (puVar4 == (undefined8 *)0x0) goto LAB_008c01f8;
        uVar17 = puVar7[2];
        uVar15 = puVar7[5];
        uVar13 = puVar7[4];
        uVar20 = puVar7[1];
        uVar19 = *puVar7;
        puVar4[3] = puVar7[3];
        puVar4[2] = uVar17;
        puVar4[5] = uVar15;
        puVar4[4] = uVar13;
        puVar4[1] = uVar20;
        *puVar4 = uVar19;
        puVar4 = puVar4 + 6;
      }
      param_1[1] = (long)puVar4;
      if (puVar1 != param_2 + 6) {
        lVar11 = 0;
        do {
          *(undefined4 *)((long)puVar1 + lVar11 + -0x30) =
               *(undefined4 *)((long)puVar1 + lVar11 + -0x60);
          lVar6 = lVar11 + -0x60;
          *(undefined8 *)((long)puVar1 + lVar11 + -8) =
               *(undefined8 *)((long)puVar1 + lVar11 + -0x38);
          *(undefined8 *)((long)puVar1 + lVar11 + -0x10) =
               *(undefined8 *)((long)puVar1 + lVar11 + -0x40);
          *(undefined8 *)((long)puVar1 + lVar11 + -0x18) =
               *(undefined8 *)((long)puVar1 + lVar11 + -0x48);
          *(undefined8 *)((long)puVar1 + lVar11 + -0x20) =
               *(undefined8 *)((long)puVar1 + lVar11 + -0x50);
          *(undefined8 *)((long)puVar1 + lVar11 + -0x28) =
               *(undefined8 *)((long)puVar1 + lVar11 + -0x58);
          lVar11 = lVar11 + -0x30;
        } while ((undefined8 *)((long)puVar1 + lVar6) != param_2);
      }
      *(undefined4 *)param_2 = uVar2;
      param_2[2] = uVar14;
      param_2[1] = uVar12;
      param_2[4] = uVar18;
      param_2[3] = uVar16;
      param_2[5] = local_64;
    }
  }
  else {
    lVar11 = *param_1;
    uVar8 = ((long)puVar1 - lVar11 >> 4) * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar8) {
      FUN_008bfbf8();
LAB_008c0214:
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    local_88 = 0;
    uStack_84 = 0;
    lVar6 = param_1[2] - lVar11 >> 4;
    uVar9 = lVar6 * 0x5555555555555556;
    if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
      uVar9 = uVar8;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar9 = 0x555555555555555;
    }
    if (uVar9 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (0x555555555555555 < uVar9) goto LAB_008c0214;
      pvVar5 = operator_new(uVar9 * 0x30);
      local_88 = SUB84(pvVar5,0);
      uStack_84 = (undefined4)((ulong)pvVar5 >> 0x20);
    }
    uStack_70 = (void *)((long)pvVar5 + uVar9 * 0x30);
    uStack_80 = (undefined8 *)((long)pvVar5 + ((long)param_2 - lVar11));
    uStack_78 = uStack_80;
    FUN_008c0218(&local_88,param_3,param_4);
    puVar10 = uStack_80;
    memcpy(uStack_78,param_2,param_1[1] - (long)param_2);
    lVar11 = param_1[1];
    param_1[1] = (long)param_2;
    __n = (long)param_2 - *param_1;
    __dest = (void *)((long)uStack_80 - __n);
    uStack_78 = (undefined8 *)((long)uStack_78 + (lVar11 - (long)param_2));
    memcpy(__dest,(void *)*param_1,__n);
    pvVar5 = (void *)*param_1;
    lVar11 = param_1[2];
    *param_1 = (long)__dest;
    param_1[2] = (long)uStack_70;
    param_1[1] = (long)uStack_78;
    local_88 = SUB84(pvVar5,0);
    uStack_84 = (undefined4)((ulong)pvVar5 >> 0x20);
    uStack_70._0_4_ = (undefined4)lVar11;
    uStack_70._4_4_ = (undefined4)((ulong)lVar11 >> 0x20);
    uStack_80._0_4_ = local_88;
    uStack_80._4_4_ = uStack_84;
    uStack_78._0_4_ = local_88;
    uStack_78._4_4_ = uStack_84;
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return puVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008c0218  FUN_008c0218 =====

void FUN_008c0218(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar10 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar10) {
    pvVar1 = (void *)*param_1;
    puVar11 = (undefined8 *)param_1[1];
    if ((long)puVar11 - (long)pvVar1 == 0) {
      uVar4 = ((long)param_1[3] - (long)pvVar1 >> 4) * 0x5555555555555556;
      if (puVar10 == puVar11) {
        uVar4 = 1;
      }
      if (0x555555555555555 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar2 = operator_new(uVar4 * 0x30);
      lVar3 = (long)puVar10 - (long)puVar11;
      puVar5 = (undefined8 *)((long)pvVar2 + (uVar4 >> 2) * 0x30);
      puVar6 = puVar5;
      if (lVar3 != 0) {
        puVar6 = (undefined8 *)((long)puVar5 + lVar3);
        puVar7 = puVar5;
        puVar9 = puVar11;
        do {
          if (puVar7 == (undefined8 *)0x0) goto LAB_008c043c;
          uVar14 = puVar9[2];
          uVar13 = puVar9[5];
          uVar12 = puVar9[4];
          lVar3 = lVar3 + -0x30;
          uVar16 = puVar9[1];
          uVar15 = *puVar9;
          puVar7[3] = puVar9[3];
          puVar7[2] = uVar14;
          puVar7[5] = uVar13;
          puVar7[4] = uVar12;
          puVar7[1] = uVar16;
          *puVar7 = uVar15;
          puVar7 = puVar7 + 6;
          puVar9 = puVar9 + 6;
        } while (lVar3 != 0);
      }
      *param_1 = pvVar2;
      param_1[1] = puVar5;
      param_1[2] = puVar6;
      param_1[3] = (void *)((long)pvVar2 + uVar4 * 0x30);
      uVar4 = (ulong)(((long)puVar11 - (long)puVar10) * 0x555555555555555) >> 4;
      uVar8 = (long)puVar10 * -0x555555555555555 - 0x10U >> 4;
      if (uVar8 <= uVar4) {
        uVar4 = uVar8;
      }
      puVar6 = puVar10;
      if ((1 < uVar4) && ((((int)puVar11 - (int)puVar10 | -(int)puVar10) & 0xfU) == 0)) {
        uVar4 = uVar4 & 0xffffffffffffffe;
        puVar6 = puVar10 + uVar4 * -6;
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (puVar6 != puVar11) {
        puVar6 = puVar6 + -6;
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (puVar11 != (undefined8 *)0x0) {
        operator_delete(pvVar1);
      }
    }
    else {
      lVar3 = (((long)puVar11 - (long)pvVar1 >> 4) * -0x5555555555555555 + 1) / 2;
      puVar6 = puVar11 + lVar3 * -6;
      if (puVar11 != puVar10) {
        do {
          *(undefined4 *)puVar6 = *(undefined4 *)puVar11;
          puVar5 = puVar11 + 5;
          uVar13 = puVar11[4];
          uVar12 = puVar11[3];
          uVar15 = puVar11[2];
          uVar14 = puVar11[1];
          puVar11 = puVar11 + 6;
          puVar6[5] = *puVar5;
          puVar6[4] = uVar13;
          puVar6[3] = uVar12;
          puVar6[2] = uVar15;
          puVar6[1] = uVar14;
          puVar6 = puVar6 + 6;
        } while (puVar11 != puVar10);
        puVar11 = (undefined8 *)param_1[1];
      }
      param_1[1] = puVar11 + lVar3 * -6;
      param_1[2] = puVar6;
      puVar10 = puVar6;
    }
  }
  if (puVar10 != (undefined8 *)0x0) {
    *(undefined4 *)puVar10 = *param_2;
    uVar15 = param_3[1];
    uVar14 = *param_3;
    uVar13 = param_3[3];
    uVar12 = param_3[2];
    puVar10[5] = param_3[4];
    puVar10[4] = uVar13;
    puVar10[3] = uVar12;
    puVar10[2] = uVar15;
    puVar10[1] = uVar14;
    param_1[2] = puVar10 + 6;
    return;
  }
LAB_008c043c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008c0454  FUN_008c0454 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_008c0454(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulong local_40;
  undefined8 uStack_38;
  undefined1 *local_30;
  
  lVar2 = *param_1;
  uVar1 = FUN_008e93c8(lVar2 + 0x1d0);
  FUN_00906af4(*(undefined8 *)(lVar2 + 0x678),uVar1);
  uStack_68 = _UNK_00224ab8;
  local_70 = _DAT_00224ab0;
  uStack_58 = _UNK_00224ac8;
  uStack_60 = _DAT_00224ac0;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_48 = _UNK_00224ad8;
  local_50 = _DAT_00224ad0;
  uStack_38 = _UNK_00224ae8;
  local_40 = _DAT_00224ae0;
  FUN_00906b58(&local_70,*(undefined8 *)(lVar2 + 0x678));
  if (((ulong)local_30 & 1) != 0) {
    FUN_00889ebc(lVar2 + 0x858,local_40 & 0xffffffff);
    if (((ulong)local_30 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    uStack_88 = uStack_48;
    local_90 = local_50;
    uStack_78 = uStack_38;
    uStack_80 = local_40;
    uStack_a8 = uStack_68;
    local_b0 = local_70;
    uStack_98 = uStack_58;
    uStack_a0 = uStack_60;
    (**(code **)(**(long **)(lVar2 + 0x590) + 0x10))(*(long **)(lVar2 + 0x590),&local_b0);
  }
  return 25000;
}


// ===== 008c051c  FUN_008c051c =====

undefined8 FUN_008c051c(long *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined4 local_bf;
  undefined2 local_bb;
  undefined1 local_b9;
  undefined1 auStack_b8 [152];
  
  lVar2 = *param_1;
  local_d0 = (**(code **)(**(long **)(lVar2 + 0x28) + 0x10))();
  bVar1 = *(char *)(lVar2 + 0x7d1) != '\x01';
  if (bVar1) {
    uStack_c8 = 0xaaaaaaaaaaaaaa00;
  }
  else {
    uStack_c8 = FUN_008e93d4(lVar2 + 0x1d0);
  }
  local_c0 = !bVar1;
  local_bf = 0xaaaaaaaa;
  local_bb = 0xaaaa;
  local_b9 = 0xaa;
  (**(code **)(**(long **)(lVar2 + 0x680) + 0x20))(auStack_b8,*(long **)(lVar2 + 0x680),&local_d0);
  FUN_008bdf48(lVar2,auStack_b8);
  FUN_0086e298(auStack_b8);
  return *(undefined8 *)(lVar2 + 0x688);
}


// ===== 008c05d8  FUN_008c05d8 =====

undefined1  [16]
FUN_008c05d8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  uint *puVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  puVar6 = (uint *)*param_5;
  plVar4 = param_2 + 1;
  plVar7 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    uVar1 = *puVar6;
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, uVar1 < *(uint *)((long)plVar3 + 0x1c)) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_008c0640;
      }
      if (uVar1 == *(uint *)((long)plVar3 + 0x1c)) {
        uVar5 = 0;
        goto LAB_008c06a4;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_008c0640:
  plVar3 = (long *)operator_new(0x28);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar1 = *puVar6;
  plVar3[4] = 0;
  *plVar3 = 0;
  plVar3[1] = 0;
  *(uint *)((long)plVar3 + 0x1c) = uVar1;
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
LAB_008c06a4:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 008c06d4  FUN_008c06d4 =====

bool FUN_008c06d4(char *param_1,char *param_2)

{
  if ((((((*param_1 == *param_2) && (*(int *)(param_1 + 4) == *(int *)(param_2 + 4))) &&
        (*(short *)(param_1 + 8) == *(short *)(param_2 + 8))) &&
       ((*(short *)(param_1 + 10) == *(short *)(param_2 + 10) && (param_1[0xc] == param_2[0xc]))))
      && ((*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10) &&
          ((*(short *)(param_1 + 0x14) == *(short *)(param_2 + 0x14) &&
           (*(short *)(param_1 + 0x16) == *(short *)(param_2 + 0x16))))))) &&
     ((param_1[0x18] == param_2[0x18] && (*(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x20))))) {
    return *(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x1c);
  }
  return false;
}


// ===== 008c0794  FUN_008c0794 =====

void FUN_008c0794(undefined8 *param_1,int param_2)

{
  if (param_2 < 0x10) {
    if (param_2 < 2) {
      if (param_2 == 0) {
        FUN_005d3510(param_1,"Unknown");
        return;
      }
      if (param_2 == 1) {
        FUN_005d3510(param_1,"Ethernet");
        return;
      }
    }
    else {
      if (param_2 == 2) {
        FUN_005d3510(param_1,&DAT_001b7cf1);
        return;
      }
      if (param_2 == 4) {
        FUN_005d3510(param_1,"Cellular");
        return;
      }
      if (param_2 == 8) {
        FUN_005d3510(param_1,&DAT_001ede54);
        return;
      }
    }
  }
  else if (param_2 < 0x80) {
    if (param_2 == 0x10) {
      FUN_005d3510(param_1,"Loopback");
      return;
    }
    if (param_2 == 0x20) {
      FUN_005d3510(param_1,"Wildcard");
      return;
    }
    if (param_2 == 0x40) {
      FUN_005d3510(param_1,"Cellular2G");
      return;
    }
  }
  else {
    if (param_2 == 0x80) {
      FUN_005d3510(param_1,"Cellular3G");
      return;
    }
    if (param_2 == 0x100) {
      FUN_005d3510(param_1,"Cellular4G");
      return;
    }
    if (param_2 == 0x200) {
      FUN_005d3510(param_1,"Cellular5G");
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 008c08c0  FUN_008c08c0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_008c08c0(undefined8 *param_1,long *param_2,undefined8 param_3,long param_4,long param_5,
                 long *param_6,undefined4 param_7,ulong param_8,undefined8 *param_9,long *param_10,
                 undefined8 param_11,long *******param_12,undefined8 param_13,long param_14,
                 undefined8 *param_15)

{
  void *pvVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  wchar_t *pwVar7;
  undefined1 *puVar8;
  long *******ppppppplVar9;
  size_t sVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined1 uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  uint *puVar19;
  char *pcVar20;
  long *plVar21;
  undefined8 *puVar22;
  byte bVar23;
  wchar_t *pwVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  long *plVar28;
  long lVar29;
  long lVar30;
  undefined1 auVar31 [16];
  uint *puStack_610;
  undefined1 *puStack_608;
  undefined1 *puStack_600;
  undefined1 *puStack_5f8;
  undefined1 *puStack_5f0;
  undefined1 *puStack_5e8;
  undefined1 *puStack_5e0;
  undefined1 *puStack_5d8;
  undefined8 uStack_5d0;
  undefined1 *puStack_5c8;
  uint uStack_5b8;
  undefined1 uStack_5b1;
  undefined1 *puStack_5b0;
  code *pcStack_5a8;
  long *plStack_5a0;
  undefined8 uStack_598;
  long *******ppppppplStack_590;
  long *plStack_588;
  ulong uStack_580;
  long lStack_578;
  long *plStack_570;
  long lStack_568;
  ulong uStack_560;
  undefined8 *puStack_558;
  undefined8 local_550;
  undefined8 local_548;
  long *plStack_540;
  long local_538;
  undefined8 *local_530;
  long local_528;
  long *local_520;
  long *local_518;
  long local_510;
  long *local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  long *local_4f0;
  undefined8 *local_4e8;
  undefined8 local_4e0;
  long local_4d8;
  undefined8 local_4d0;
  undefined1 *local_4c8;
  long *local_4c0;
  long *******local_4b8;
  ulong local_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  long *plStack_480;
  long *local_478;
  long lStack_470;
  undefined8 local_468;
  long *******local_460;
  ulong uStack_458;
  ulong local_450;
  long *******local_440;
  void *pvStack_438;
  undefined8 local_430;
  long local_428;
  void *local_420;
  undefined8 uStack_418;
  long local_410;
  ulong local_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  long *plStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined5 uStack_3b0;
  undefined3 local_3ab;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  long *local_3a0;
  undefined7 uStack_398;
  undefined1 uStack_391;
  undefined1 uStack_390;
  undefined1 uStack_38f;
  undefined1 uStack_38e;
  undefined1 uStack_38d;
  undefined4 local_38c;
  undefined8 local_388;
  undefined8 local_380;
  long *******ppppppplStack_378;
  ulong uStack_370;
  ulong local_368;
  undefined8 local_360;
  long local_78;
  
  local_500 = CONCAT44(local_500._4_4_,param_7);
  lVar25 = tpidr_el0;
  local_78 = *(long *)(lVar25 + 0x28);
  puVar27 = param_1 + 2;
  *puVar27 = &PTR_FUN_00d3c8a0;
  *param_1 = &PTR_FUN_00d3c7a0;
  param_1[1] = &PTR_FUN_00d3c878;
  param_1[3] = &PTR_FUN_00d3c8d0;
  lVar16 = *param_2;
  param_1[4] = lVar16;
  local_538 = param_5;
  local_510 = param_4;
  local_4f8 = param_3;
  if (lVar16 != 0) {
    FUN_00d0f740(1,lVar16 + 8);
  }
  lVar16 = param_2[3];
  lVar30 = param_2[2];
  lVar29 = param_2[1];
  param_1[8] = param_2[4];
  param_1[7] = lVar16;
  param_1[6] = lVar30;
  param_1[5] = lVar29;
  (**(code **)(*(long *)param_2[1] + 0x10))
            (&local_440,(long *)param_2[1],"WebRTC-Video-UseFrameRateForOverhead",0x24);
  if (-1 < (char)local_430._7_1_) {
    pvStack_438 = (void *)(ulong)local_430._7_1_;
  }
  if (pvStack_438 < 7) {
    bVar4 = false;
  }
  else {
    ppppppplVar9 = local_440;
    if (-1 < (char)local_430._7_1_) {
      ppppppplVar9 = (long *******)&local_440;
    }
    bVar4 = *(int *)ppppppplVar9 == 0x62616e45 && *(int *)((long)ppppppplVar9 + 3) == 0x64656c62;
  }
  local_4f0 = param_10;
  local_4e8 = param_9;
  local_530 = puVar27;
  local_528 = lVar25;
  if ((char)local_430._7_1_ < '\0') {
    operator_delete(local_440);
  }
  *(bool *)(param_1 + 9) = bVar4;
  local_518 = param_6 + 0xc;
  puVar26 = (undefined8 *)param_6[0xd];
  for (puVar27 = (undefined8 *)*local_518; puVar27 != puVar26; puVar27 = puVar27 + 4) {
    if (((*(char *)((long)puVar27 + 0x17) < '\0') && (puVar27[1] == 0x49)) &&
       (iVar5 = memcmp((void *)*puVar27,
                       "http://www.ietf.org/id/draft-holmer-rmcat-transport-wide-cc-extensions-01",
                       0x49), iVar5 == 0)) {
      uVar15 = 1;
      goto LAB_008c0a70;
    }
  }
  uVar15 = 0;
LAB_008c0a70:
  *(undefined1 *)((long)param_1 + 0x49) = uVar15;
  param_1[10] = local_4f8;
  local_440 = (long *******)&DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_440);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 0xb),(pthread_mutexattr_t *)&local_440);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_440);
  puVar27 = local_4e8;
  plVar21 = local_4f0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x11] = param_12;
  *(undefined1 *)(param_1 + 0x12) = 1;
  plVar28 = (long *)*param_15;
  *param_15 = 0;
  uStack_38d = 0xaa;
  local_38c = 0;
  local_388 = 0xaaaaaa00aaaaaa00;
  local_380 = 0xaaaaaaaaaaaa0000;
  uStack_3b0 = 0;
  uStack_3b8 = 0;
  local_3ab = 0;
  uStack_3a8 = 0;
  uStack_3a4 = 0xaaaaaa00;
  local_3a0 = (long *)0x0;
  uStack_398 = 0;
  uStack_391 = 0;
  uStack_390 = 0;
  uStack_38f = 0;
  uStack_38e = 0;
  ppppppplStack_378 = (long *******)0x0;
  uStack_370 = 0;
  local_360 = 0xaaaaaaaaaaaaaa00;
  local_368 = 0;
  pvStack_438 = (void *)0x0;
  local_410 = 0;
  uStack_418 = 0;
  local_400 = 0;
  local_408 = 0;
  uStack_3f0 = 0;
  uStack_3f8 = 0;
  local_3e0 = 0;
  local_3e8 = 0;
  local_3d0 = 0;
  plStack_3d8 = (long *)0x0;
  local_3c0 = 0;
  uStack_3c8 = 0;
  local_420 = (void *)local_4e8[2];
  local_428 = local_4e8[1];
  local_440 = (long *******)0xaaaaaaaaaaaa0000;
  local_430 = param_8;
  uStack_418 = (**(code **)(*local_4f0 + 0x88))(local_4f0);
  local_410 = (**(code **)(*plVar21 + 0x38))(plVar21);
  local_400 = *puVar27;
  uStack_3f8 = puVar27[7];
  local_3e8 = puVar27[3];
  local_3e0 = (**(code **)(*plVar21 + 0x40))(plVar21);
  local_3d0 = puVar27[5];
  uStack_3c8 = puVar27[8];
  (**(code **)(*(long *)param_2[1] + 0x10))
            (&local_4b8,(long *)param_2[1],"WebRTC-DisableRtxRateLimiter",0x1c);
  bVar4 = false;
  uVar18 = local_4b0;
  if (-1 < (long)local_4a8) {
    uVar18 = local_4a8 >> 0x38;
  }
  if (7 < uVar18) {
    ppppppplVar9 = local_4b8;
    if (-1 < (long)local_4a8) {
      ppppppplVar9 = (long *******)&local_4b8;
    }
    bVar4 = *ppppppplVar9 == (long ******)0x64656c6261736944;
  }
  local_4d8 = param_14;
  if ((long)local_4a8 < 0) {
    operator_delete(local_4b8);
  }
  local_4e0 = param_13;
  if (bVar4) {
    uStack_3b8 = param_11;
  }
  uStack_390 = *(undefined1 *)(local_4d8 + 4);
  uStack_3a8 = (undefined4)local_500;
  uStack_3b0 = (undefined5)local_4e8[4];
  local_3ab = (undefined3)((ulong)local_4e8[4] >> 0x28);
  uStack_38f = (undefined1)param_6[0xb];
  lVar16 = param_6[0x24];
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  lVar25 = *param_6;
  local_360 = CONCAT71(local_360._1_7_,(char)lVar16);
  uStack_398 = (undefined7)param_13;
  uStack_391 = (undefined1)((ulong)param_13 >> 0x38);
  if (param_6[1] - lVar25 != 0) {
    uVar17 = param_6[1] - lVar25 >> 2;
    uVar18 = 0;
    param_12 = (long *******)&local_4b8;
    local_520 = (long *)(local_510 + 8);
    do {
      local_4b8 = (long *******)0x0;
      local_4b0 = 0;
      local_488 = 0xaaaaaaaaaaaaaa00;
      local_4a8 = 0xaaaaaa00aaaaaa00;
      uStack_4a0 = 0;
      local_498 = 0;
      local_490 = 0xaaaaaa00aaaa0000;
      local_478 = (long *)0x0;
      lStack_470 = 0;
      plStack_480 = (long *)0x0;
      local_468 = 0xaaaaaaaaaaaaaa00;
      local_38c = *(undefined4 *)(lVar25 + uVar18 * 4);
      local_4c0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
      if ((int)param_6[0x19] < 0) {
        plVar21 = (long *)0x0;
        if ((-1 < *(int *)((long)param_6 + 0xbc)) && (-1 < (int)param_6[0x17])) {
          uVar17 = FUN_008c4070(0,param_6,param_2[1]);
          if ((uVar17 & 1) != 0) goto LAB_008c0da4;
          plVar21 = (long *)operator_new(0x220);
          FUN_008c54e8(plVar21,param_2,*(undefined4 *)((long)param_6 + 0xbc),(int)param_6[0x17]);
        }
      }
      else if (*(int *)((long)param_6 + 0xcc) == 0) {
        uVar17 = FUN_004022fc();
        if ((uVar17 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../call/rtp_video_sender.cc",0x56a,
                       "FlexFEC is enabled, but no FlexFEC SSRC given. Therefore disabling FlexFEC."
                      );
          plVar21 = (long *)0x0;
        }
        else {
LAB_008c0da4:
          plVar21 = (long *)0x0;
        }
      }
      else {
        pwVar7 = (wchar_t *)param_6[0x1a];
        pwVar24 = (wchar_t *)param_6[0x1b];
        if (pwVar7 == pwVar24) {
          uVar17 = FUN_004022fc();
          if ((uVar17 & 1) == 0) {
            uVar13 = 0x592;
            pcVar20 = 
            "FlexFEC is enabled, but no protected media SSRC given. Therefore disabling FlexFEC.";
LAB_008c0dd0:
            FUN_00623bb0(&DAT_001f4e98,"../../call/rtp_video_sender.cc",uVar13,pcVar20);
          }
        }
        else {
          uVar12 = (long)pwVar24 - (long)pwVar7 >> 2;
          if (uVar12 < 2) {
            if (uVar17 <= (ulong)(long)(int)uVar18) goto LAB_008c17dc;
            pwVar7 = wmemchr(pwVar7,*(wchar_t *)(lVar25 + (long)(int)uVar18 * 4),uVar12);
            if (pwVar7 != (wchar_t *)0x0) {
              pwVar24 = pwVar7;
            }
            if (pwVar24 != (wchar_t *)param_6[0x1b]) {
              plVar14 = (long *)*local_520;
              plVar21 = plVar14;
              if (plVar14 != (long *)0x0) {
                do {
                  while (*(uint *)(plVar14 + 4) <= *(uint *)((long)param_6 + 0xcc)) {
                    if (*(uint *)((long)param_6 + 0xcc) == *(uint *)(plVar14 + 4)) {
                      plVar21 = (long *)0x0;
                      if (plVar14 != local_520) {
                        plVar21 = plVar14 + 5;
                      }
                      goto LAB_008c11e4;
                    }
                    plVar14 = (long *)plVar14[1];
                    if (plVar14 == (long *)0x0) {
                      plVar21 = (long *)0x0;
                      goto LAB_008c11e4;
                    }
                  }
                  plVar14 = (long *)*plVar14;
                  plVar21 = plVar14;
                } while (plVar14 != (long *)0x0);
              }
LAB_008c11e4:
              pwVar24 = (wchar_t *)param_6[0x1a];
              if ((wchar_t *)param_6[0x1b] == pwVar24) goto LAB_008c17dc;
              local_508 = plVar21;
              auVar31 = FUN_00868bd8();
              local_500 = auVar31._0_8_;
              plVar21 = (long *)operator_new(0x338);
              uVar17 = param_6[7];
              plVar14 = (long *)param_6[6];
              if (-1 < (char)*(byte *)((long)param_6 + 0x47)) {
                uVar17 = (ulong)*(byte *)((long)param_6 + 0x47);
                plVar14 = param_6 + 6;
              }
              plStack_540 = local_508;
              local_550 = local_500;
              local_548 = auVar31._8_8_;
              FUN_008d4974(plVar21,param_2,(int)param_6[0x19],*(undefined4 *)((long)param_6 + 0xcc),
                           *pwVar24,plVar14,uVar17,local_518);
              goto LAB_008c0e68;
            }
          }
          else {
            uVar17 = FUN_004022fc();
            if ((uVar17 & 1) == 0) {
              uVar13 = 0x5ca;
              pcVar20 = 
              "The supplied FlexfecConfig contained multiple protected media streams, but our implementation currently only supports protecting a single media stream. To avoid confusion, disabling FlexFEC completely."
              ;
              goto LAB_008c0dd0;
            }
          }
        }
        plVar21 = (long *)0x0;
      }
LAB_008c0e68:
      local_4c0 = plVar21;
      plStack_3d8 = plVar21;
      if ((ulong)(param_6[1] - *param_6 >> 2) <= uVar18) {
LAB_008c17dc:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      uVar13 = FUN_00844c38(param_6,*(undefined4 *)(*param_6 + uVar18 * 4));
      local_388._0_5_ = (undefined5)uVar13;
      if (uVar18 < (ulong)((param_6[4] - param_6[3] >> 3) * -0x5555555555555555)) {
        plVar21 = (long *)(param_6[3] + uVar18 * 0x18);
        if (*(char *)((long)plVar21 + 0x17) < '\0') {
          FUN_005478d8(&local_460,*plVar21,plVar21[1]);
        }
        else {
          local_450 = plVar21[2];
          uStack_458 = plVar21[1];
          local_460 = (long *******)*plVar21;
        }
      }
      else {
        FUN_005d3510(&local_460,&DAT_001b3348);
      }
      if ((long)local_368 < 0) {
        uVar17 = uStack_458;
        ppppppplVar9 = local_460;
        if (-1 < (long)local_450) {
          uVar17 = local_450 >> 0x38;
          ppppppplVar9 = (long *******)&local_460;
        }
        FUN_00547f08(&ppppppplStack_378,ppppppplVar9,uVar17);
joined_r0x008c0f44:
        if ((long)local_450 < 0) {
          operator_delete(local_460);
        }
      }
      else {
        if ((long)local_450 < 0) {
          FUN_00547fc0(&ppppppplStack_378,local_460,uStack_458);
          goto joined_r0x008c0f44;
        }
        uStack_370 = uStack_458;
        ppppppplStack_378 = local_460;
        local_368 = local_450;
      }
      local_4c8 = &DAT_aaaaaaaaaaaaaaaa;
      local_380 = CONCAT71(local_380._1_7_,(char)param_6[0x16]);
      puVar8 = (undefined1 *)operator_new(0x560);
      FUN_00863e98(puVar8,param_2,&local_440);
      local_4c8 = puVar8;
      FUN_00864960(puVar8,0);
      FUN_008649d8(local_4c8,0);
      bVar4 = true;
      FUN_00864f38(local_4c8,1);
      FUN_00865698(local_4c8,1,600);
      local_4b8 = (long *******)param_2[2];
      local_4b0 = FUN_00865b68(local_4c8);
      plStack_480 = (long *)param_2[1];
      local_498 = local_4e0;
      local_490 = CONCAT71(local_490._1_7_,*(undefined1 *)(local_4d8 + 4));
      (**(code **)(*plStack_480 + 0x10))
                (&local_460,plStack_480,"WebRTC-Video-EnableRetransmitAllLayers",0x26);
      uVar17 = uStack_458;
      if (-1 < (long)local_450) {
        uVar17 = local_450 >> 0x38;
      }
      if (7 < uVar17) {
        ppppppplVar9 = local_460;
        if (-1 < (long)local_450) {
          ppppppplVar9 = (long *******)&local_460;
        }
        bVar4 = *ppppppplVar9 != (long ******)0x64656c6261736944;
      }
      if ((long)local_450 < 0) {
        operator_delete(local_460);
      }
      local_490._0_2_ = CONCAT11(bVar4,(undefined1)local_490);
      plVar21 = local_4c0;
      if (local_4c0 != (long *)0x0) {
        iVar5 = (**(code **)(*local_4c0 + 0x10))();
        plVar21 = (long *)(ulong)(iVar5 == 0);
      }
      uVar17 = FUN_008c4070(plVar21,param_6,param_2[1]);
      if (((uVar17 & 1) == 0) && (*(int *)((long)param_6 + 0xbc) != -1)) {
        local_490 = CONCAT44(*(int *)((long)param_6 + 0xbc),(undefined4)local_490);
        local_488 = CONCAT71(local_488._1_7_,1);
      }
      if (local_4c0 != (long *)0x0) {
        uVar6 = (**(code **)(*local_4c0 + 0x10))();
        local_4a8._0_5_ = CONCAT14(1,uVar6);
        uStack_4a0 = (**(code **)(*local_4c0 + 0x20))(local_4c0);
      }
      if (plVar28 != (long *)0x0) {
        (**(code **)*plVar28)(plVar28);
      }
      if (local_478 != (long *)0x0) {
        (**(code **)(*local_478 + 8))();
      }
      lStack_470 = param_2[3];
      local_460 = (long *******)&DAT_aaaaaaaaaaaaaaaa;
      local_468 = CONCAT71(local_468._1_7_,*(undefined1 *)((long)param_6 + 0x94));
      local_478 = plVar28;
      ppppppplVar9 = (long *******)operator_new(0x438);
      FUN_008c5f7c(ppppppplVar9,&local_4b8);
      plVar21 = local_4c0;
      puVar8 = local_4c8;
      puVar27 = (undefined8 *)param_1[0x14];
      local_460 = ppppppplVar9;
      if (puVar27 < (undefined8 *)param_1[0x15]) {
        if (puVar27 == (undefined8 *)0x0) goto LAB_008c17c8;
        puVar26 = puVar27 + 3;
        local_4c8 = (undefined1 *)0x0;
        local_4c0 = (long *)0x0;
        local_460 = (long *******)0x0;
        *puVar27 = puVar8;
        puVar27[1] = ppppppplVar9;
        puVar27[2] = plVar21;
      }
      else {
        puVar26 = (undefined8 *)FUN_008c43bc(param_1 + 0x13,&local_4c8,&local_460,&local_4c0);
      }
      ppppppplVar9 = local_460;
      param_1[0x14] = puVar26;
      local_460 = (long *******)0x0;
      if (ppppppplVar9 != (long *******)0x0) {
        (*(code *)(*ppppppplVar9)[4])(ppppppplVar9);
      }
      puVar8 = local_4c8;
      local_4c8 = (undefined1 *)0x0;
      if (puVar8 != (undefined1 *)0x0) {
        FUN_0086425c(puVar8);
        operator_delete(puVar8);
      }
      plVar21 = local_4c0;
      local_4c0 = (long *)0x0;
      if (plVar21 != (long *)0x0) {
        (**(code **)(*plVar21 + 8))();
      }
      if (local_478 != (long *)0x0) {
        (**(code **)(*local_478 + 8))();
      }
      lVar25 = *param_6;
      uVar18 = uVar18 + 1;
      uVar17 = param_6[1] - lVar25 >> 2;
    } while (uVar18 < uVar17);
  }
  if ((long)local_368 < 0) {
    operator_delete(ppppppplStack_378);
  }
  if (local_3a0 != (long *)0x0) {
    (**(code **)(*local_3a0 + 8))();
  }
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 8))(plVar28);
  }
  FUN_00843c1c(param_1 + 0x16,param_6);
  param_1[0x3b] = local_4f0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  (**(code **)(*(long *)param_2[1] + 0x10))
            (&local_440,(long *)param_2[1],"WebRTC-GenericDescriptorAuth",0x1c);
  pvVar1 = pvStack_438;
  if (-1 < (long)local_430) {
    pvVar1 = (void *)(local_430 >> 0x38);
  }
  if (pvVar1 < (void *)0x8) {
    uVar18 = 0;
  }
  else {
    ppppppplVar9 = local_440;
    if (-1 < (long)local_430) {
      ppppppplVar9 = (long *******)&local_440;
    }
    uVar18 = (ulong)(*ppppppplVar9 == (long ******)0x64656c6261736944);
  }
  if ((long)local_430 < 0) {
    operator_delete(local_440);
  }
  *(char *)(param_1 + 0x40) = (char)uVar18;
  *(undefined4 *)((long)param_1 + 0x244) = 0;
  *(undefined8 *)((long)param_1 + 0x22c) = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  *(undefined8 *)((long)param_1 + 0x23c) = 0;
  *(undefined8 *)((long)param_1 + 0x234) = 0;
  lVar25 = *param_6;
  lVar16 = param_6[1];
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  lVar29 = lVar16 - lVar25;
  if (lVar29 != 0) {
    uVar17 = lVar29 >> 2;
    if (uVar17 >> 0x3d != 0) {
      auVar31 = FUN_008c4854();
      lVar29 = auVar31._0_8_;
      pcStack_5a8 = FUN_008c180c;
      uStack_598 = 0x64656c6261736944;
      plStack_5a0 = plVar28;
      ppppppplStack_590 = param_12;
      plStack_588 = param_6;
      uStack_580 = uVar17;
      lStack_578 = lVar25;
      plStack_570 = param_2;
      lStack_568 = lVar16;
      uStack_560 = uVar18;
      puStack_558 = param_1;
      if (*(long *)(lVar29 + 0x278) != 0) {
        puStack_5b0 = &stack0xffffffffffffffa0;
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../call/rtp_video_sender.cc",0x2dc,"ssrc_to_rtp_module_.empty()",
                     &DAT_001f5fa0);
      }
      lVar25 = *(long *)(lVar29 + 0xb0);
      puStack_5b0 = &stack0xffffffffffffffa0;
      if (*(long *)(lVar29 + 0xb8) != lVar25) {
        uVar18 = 0;
        plVar21 = (long *)(auVar31._8_8_ + 8);
        puStack_5b0 = &stack0xffffffffffffffa0;
        do {
          uStack_5b8 = *(uint *)(lVar25 + uVar18 * 4);
          if ((ulong)((*(long *)(lVar29 + 0xa0) - *(long *)(lVar29 + 0x98) >> 3) *
                     -0x5555555555555555) <= uVar18) goto LAB_008c1aec;
          plVar14 = *(long **)(*(long *)(lVar29 + 0x98) + uVar18 * 0x18);
          for (plVar28 = (long *)*plVar21; plVar28 != (long *)0x0; plVar28 = (long *)*plVar28) {
            while (*(uint *)(plVar28 + 4) <= uStack_5b8) {
              if (uStack_5b8 == *(uint *)(plVar28 + 4)) {
                if (plVar28 != plVar21) {
                  (**(code **)(*plVar14 + 0xa8))(plVar14,plVar28 + 5);
                }
                goto LAB_008c1874;
              }
              plVar28 = (long *)plVar28[1];
              if (plVar28 == (long *)0x0) goto LAB_008c1874;
            }
          }
LAB_008c1874:
          puStack_610 = &uStack_5b8;
          lVar25 = FUN_008c4fbc(0,lVar29 + 0x268,lVar29 + 0x268,&DAT_001f94c3,&puStack_610,
                                &uStack_5b1);
          *(long **)(lVar25 + 0x28) = plVar14;
          uVar18 = uVar18 + 1;
          lVar25 = *(long *)(lVar29 + 0xb0);
        } while (uVar18 < (ulong)(*(long *)(lVar29 + 0xb8) - lVar25 >> 2));
      }
      lVar25 = *(long *)(lVar29 + 0x198);
      lVar16 = *(long *)(lVar29 + 0x1a0);
      if (lVar25 != lVar16) {
        uVar18 = 0;
        plVar21 = (long *)(auVar31._8_8_ + 8);
        do {
          if ((ulong)((*(long *)(lVar29 + 0xa0) - *(long *)(lVar29 + 0x98) >> 3) *
                     -0x5555555555555555) <= uVar18) {
LAB_008c1aec:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                      );
          }
          plVar28 = (long *)*plVar21;
          if (plVar28 != (long *)0x0) {
            uVar3 = *(uint *)(lVar25 + uVar18 * 4);
            plVar14 = *(long **)(*(long *)(lVar29 + 0x98) + uVar18 * 0x18);
            do {
              while (*(uint *)(plVar28 + 4) <= uVar3) {
                if (uVar3 == *(uint *)(plVar28 + 4)) {
                  if (plVar28 != plVar21) {
                    (**(code **)(*plVar14 + 0xb0))(plVar14,plVar28 + 5);
                    lVar25 = *(long *)(lVar29 + 0x198);
                    lVar16 = *(long *)(lVar29 + 0x1a0);
                  }
                  goto LAB_008c1948;
                }
                plVar28 = (long *)plVar28[1];
                if (plVar28 == (long *)0x0) goto LAB_008c1948;
              }
              plVar28 = (long *)*plVar28;
            } while (plVar28 != (long *)0x0);
          }
LAB_008c1948:
          uVar18 = uVar18 + 1;
        } while (uVar18 < (ulong)(lVar16 - lVar25 >> 2));
        puVar27 = *(undefined8 **)(lVar29 + 0x98);
        puVar26 = *(undefined8 **)(lVar29 + 0xa0);
        if (puVar26 != puVar27) {
          lVar25 = 0;
          uVar18 = 0;
          do {
            puStack_5f8 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_600 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_5e8 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_5f0 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_5d8 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_5e0 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_5c8 = &DAT_aaaaaaaaaaaaaaaa;
            uStack_5d0 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_608 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_610 = (uint *)&DAT_aaaaaaaaaaaaaaaa;
            FUN_00844e38(&puStack_610,(long *)(lVar29 + 0xb0),uVar18);
            if (((ulong)puStack_5c8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                        );
            }
            FUN_00864404(*(undefined8 *)((long)puVar27 + lVar25),uStack_5d0._4_4_,
                         (ulong)puStack_5d8 & 0xffffffff);
            FUN_008643d8(*(undefined8 *)((long)puVar27 + lVar25),3);
            if ((long)puStack_5e0 < 0) {
              operator_delete(puStack_5f0);
            }
            if ((long)puStack_5f8 < 0) {
              operator_delete(puStack_608);
            }
            puVar27 = *(undefined8 **)(lVar29 + 0x98);
            puVar26 = *(undefined8 **)(lVar29 + 0xa0);
            uVar18 = uVar18 + 1;
            lVar25 = lVar25 + 0x18;
          } while (uVar18 < (ulong)(((long)puVar26 - (long)puVar27 >> 3) * -0x5555555555555555));
        }
        if ((*(int *)(lVar29 + 0x16c) != -1) && (*(int *)(lVar29 + 0x170) != -1)) {
          for (; puVar27 != puVar26; puVar27 = puVar27 + 3) {
            FUN_00864404(*puVar27,*(undefined4 *)(lVar29 + 0x170),*(undefined4 *)(lVar29 + 0x16c));
          }
        }
      }
      return;
    }
    puVar26 = (undefined8 *)operator_new(lVar29 * 2);
    param_1[0x49] = puVar26;
    param_1[0x4a] = puVar26;
    uVar12 = (lVar16 * 2 + lVar25 * -2) - 8U >> 3;
    param_1[0x4b] = puVar26 + uVar17;
    puVar27 = (undefined8 *)((long)puVar26 + lVar29 * 2);
    uVar18 = (ulong)-(long)puVar26 >> 3;
    if (uVar12 <= (ulong)-(long)puVar26 >> 3) {
      uVar18 = uVar12;
    }
    if (0x27 < uVar18) {
      uVar17 = (ulong)-(long)puVar26 >> 3;
      if (uVar12 <= uVar17) {
        uVar17 = uVar12;
      }
      if (((-(long)puVar26 & 7U) == 0 && ((int)lVar16 - (int)lVar25 & 3U) == 0) &&
         (puVar26 <= puVar26 + uVar17)) {
        uVar17 = uVar18 + 1 & 7;
        uVar12 = 8;
        if (uVar17 != 0) {
          uVar12 = uVar17;
        }
        puVar11 = puVar26 + 4;
        lVar25 = (uVar18 + 1) - uVar12;
        puVar26 = puVar26 + lVar25;
        do {
          lVar25 = lVar25 + -8;
          puVar11[-3] = 0;
          puVar11[-4] = 0;
          puVar11[-1] = 0;
          puVar11[-2] = 0;
          puVar11[1] = 0;
          *puVar11 = 0;
          puVar11[3] = 0;
          puVar11[2] = 0;
          puVar11 = puVar11 + 8;
        } while (lVar25 != 0);
      }
    }
    do {
      if (puVar26 == (undefined8 *)0x0) goto LAB_008c17c8;
      puVar11 = puVar26 + 1;
      *puVar26 = 0;
      puVar26 = puVar11;
    } while (puVar11 != puVar27);
    param_1[0x4a] = puVar27;
  }
  uVar13 = local_4e8[6];
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = param_1 + 0x4e;
  param_1[0x4c] = uVar13;
  FUN_007ebd38(&local_4d0,1,local_4f8);
  uVar13 = local_4d0;
  local_4d0 = 0;
  param_1[0x50] = uVar13;
  if (*(char *)((long)param_1 + 0x49) == '\x01') {
    (**(code **)(*(long *)param_1[0x3b] + 0xd8))();
  }
  puVar19 = (uint *)param_1[0x16];
  puVar2 = (uint *)param_1[0x17];
  if (puVar19 != puVar2) {
    plVar21 = (long *)(local_538 + 8);
    do {
      uVar3 = *puVar19;
      for (plVar28 = (long *)*plVar21; plVar28 != (long *)0x0; plVar28 = (long *)*plVar28) {
        while (*(uint *)(plVar28 + 4) <= uVar3) {
          if (uVar3 == *(uint *)(plVar28 + 4)) {
            if (plVar28 == plVar21) goto LAB_008c1518;
            plVar14 = plVar28 + 5;
            lVar25 = param_1[0x3f];
            if ((long)param_1[0x3f] <= plVar28[6]) {
              lVar25 = plVar28[6];
            }
            param_1[0x3f] = lVar25;
            goto LAB_008c151c;
          }
          plVar28 = (long *)plVar28[1];
          if (plVar28 == (long *)0x0) goto LAB_008c1518;
        }
      }
LAB_008c1518:
      plVar14 = (long *)0x0;
LAB_008c151c:
      FUN_008d5530(&local_440,param_2,uVar3,plVar14);
      uVar18 = param_1[0x42];
      if (uVar18 < (ulong)param_1[0x43]) {
        if (uVar18 == 0) {
LAB_008c17c8:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        FUN_008d57ac(uVar18,&local_440);
        lVar25 = uVar18 + 0x3c8;
      }
      else {
        lVar25 = FUN_008c486c(param_1 + 0x41,&local_440);
      }
      param_1[0x42] = lVar25;
      FUN_008d58c4(&local_440);
      puVar19 = puVar19 + 1;
    } while (puVar19 != puVar2);
  }
  lVar25 = param_1[0x22];
  lVar16 = param_1[0x23];
  if (lVar16 != lVar25) {
    uVar18 = 0;
    do {
      puVar27 = (undefined8 *)param_1[0x14];
      if ((undefined8 *)param_1[0x13] != puVar27) {
        plVar21 = (long *)(lVar25 + uVar18 * 0x20);
        lVar25 = plVar21[3];
        puVar26 = (undefined8 *)param_1[0x13];
        do {
          lVar16 = (long)*(char *)((long)plVar21 + 0x17);
          plVar28 = plVar21;
          if (lVar16 < 0) {
            lVar16 = plVar21[1];
            plVar28 = (long *)*plVar21;
          }
          puVar11 = puVar26 + 3;
          FUN_00865210(*puVar26,plVar28,lVar16,(int)lVar25);
          puVar26 = puVar11;
        } while (puVar11 != puVar27);
        lVar25 = param_1[0x22];
        lVar16 = param_1[0x23];
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < (ulong)(lVar16 - lVar25 >> 5));
  }
  FUN_008c180c(param_1,local_510);
  if (*(char *)((long)param_1 + 0xf7) < '\0') {
    puVar27 = (undefined8 *)param_1[0x13];
    puVar26 = (undefined8 *)param_1[0x14];
    if (param_1[0x1d] != 0) goto LAB_008c160c;
LAB_008c1614:
    if (puVar26 == puVar27) {
LAB_008c173c:
      bVar23 = 0;
      goto LAB_008c1740;
    }
  }
  else {
    puVar27 = (undefined8 *)param_1[0x13];
    puVar26 = (undefined8 *)param_1[0x14];
    if (*(char *)((long)param_1 + 0xf7) == '\0') goto LAB_008c1614;
LAB_008c160c:
    if (puVar27 == puVar26) goto LAB_008c1614;
    do {
      lVar25 = (long)*(char *)((long)param_1 + 0xf7);
      if (lVar25 < 0) {
        puVar11 = (undefined8 *)param_1[0x1c];
        lVar25 = param_1[0x1d];
      }
      else {
        puVar11 = param_1 + 0x1c;
      }
      puVar22 = puVar27 + 3;
      FUN_00864688(*puVar27,puVar11,lVar25);
      puVar27 = puVar22;
    } while (puVar22 != puVar26);
    puVar27 = (undefined8 *)param_1[0x13];
    if ((undefined8 *)param_1[0x14] == puVar27) goto LAB_008c173c;
  }
  lVar25 = 0;
  uVar18 = 0;
  bVar23 = 0;
  do {
    pcVar20 = (char *)(param_1 + 0x37);
    if (*(char *)((long)param_1 + 0x1cf) < '\0') {
      pcVar20 = (char *)param_1[0x37];
    }
    if (pcVar20 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
                );
    }
    uVar13 = *(undefined8 *)((long)puVar27 + lVar25);
    sVar10 = strlen(pcVar20);
    FUN_00864f44(uVar13,pcVar20,sVar10);
    FUN_0086420c(*(undefined8 *)((long)puVar27 + lVar25),param_1[0x20]);
    uVar13 = *(undefined8 *)((long)puVar27 + lVar25);
    FUN_00844e38(&local_440,param_1 + 0x16,uVar18);
    FUN_00864460(uVar13,local_408 & 0xffffffff,90000);
    if (local_410 < 0) {
      operator_delete(local_420);
    }
    if (local_428 < 0) {
      operator_delete(pvStack_438);
    }
    lVar16 = lVar25 + 0x10;
    uVar18 = uVar18 + 1;
    lVar25 = lVar25 + 0x18;
    bVar23 = *(long *)((long)puVar27 + lVar16) != 0 | bVar23;
    puVar27 = (undefined8 *)param_1[0x13];
  } while (uVar18 < (ulong)((param_1[0x14] - (long)param_1[0x13] >> 3) * -0x5555555555555555));
LAB_008c1740:
  (**(code **)(*(long *)param_1[0x11] + 0x18))
            ((long *)param_1[0x11],bVar23,0 < *(int *)((long)param_1 + 0x164));
  (**(code **)(*(long *)param_1[0x11] + 0x10))((long *)param_1[0x11],local_530);
  puVar26 = (undefined8 *)param_1[0x14];
  for (puVar27 = (undefined8 *)param_1[0x13]; puVar27 != puVar26; puVar27 = puVar27 + 3) {
    FUN_00864f14(*puVar27);
  }
  if (*(long *)(local_528 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008c180c  FUN_008c180c =====

void FUN_008c180c(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined1 *local_78;
  uint local_68;
  undefined1 uStack_61;
  
  if (*(long *)(param_1 + 0x278) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../call/rtp_video_sender.cc",0x2dc,"ssrc_to_rtp_module_.empty()",&DAT_001f5fa0)
    ;
  }
  lVar2 = *(long *)(param_1 + 0xb0);
  if (*(long *)(param_1 + 0xb8) != lVar2) {
    uVar7 = 0;
    do {
      local_68 = *(uint *)(lVar2 + uVar7 * 4);
      if ((ulong)((*(long *)(param_1 + 0xa0) - *(long *)(param_1 + 0x98) >> 3) * -0x5555555555555555
                 ) <= uVar7) goto LAB_008c1aec;
      plVar6 = *(long **)(*(long *)(param_1 + 0x98) + uVar7 * 0x18);
      for (plVar4 = *(long **)(param_2 + 8); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        while (*(uint *)(plVar4 + 4) <= local_68) {
          if (local_68 == *(uint *)(plVar4 + 4)) {
            if (plVar4 != (long *)(param_2 + 8)) {
              (**(code **)(*plVar6 + 0xa8))(plVar6,plVar4 + 5);
            }
            goto LAB_008c1874;
          }
          plVar4 = (long *)plVar4[1];
          if (plVar4 == (long *)0x0) goto LAB_008c1874;
        }
      }
LAB_008c1874:
      local_c0 = &local_68;
      lVar2 = FUN_008c4fbc(0,param_1 + 0x268,param_1 + 0x268,&DAT_001f94c3,&local_c0,&uStack_61);
      *(long **)(lVar2 + 0x28) = plVar6;
      uVar7 = uVar7 + 1;
      lVar2 = *(long *)(param_1 + 0xb0);
    } while (uVar7 < (ulong)(*(long *)(param_1 + 0xb8) - lVar2 >> 2));
  }
  lVar2 = *(long *)(param_1 + 0x198);
  lVar3 = *(long *)(param_1 + 0x1a0);
  if (lVar2 != lVar3) {
    uVar7 = 0;
    do {
      if ((ulong)((*(long *)(param_1 + 0xa0) - *(long *)(param_1 + 0x98) >> 3) * -0x5555555555555555
                 ) <= uVar7) {
LAB_008c1aec:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      plVar4 = *(long **)(param_2 + 8);
      if (plVar4 != (long *)0x0) {
        uVar1 = *(uint *)(lVar2 + uVar7 * 4);
        plVar6 = *(long **)(*(long *)(param_1 + 0x98) + uVar7 * 0x18);
        do {
          while (*(uint *)(plVar4 + 4) <= uVar1) {
            if (uVar1 == *(uint *)(plVar4 + 4)) {
              if (plVar4 != (long *)(param_2 + 8)) {
                (**(code **)(*plVar6 + 0xb0))(plVar6,plVar4 + 5);
                lVar2 = *(long *)(param_1 + 0x198);
                lVar3 = *(long *)(param_1 + 0x1a0);
              }
              goto LAB_008c1948;
            }
            plVar4 = (long *)plVar4[1];
            if (plVar4 == (long *)0x0) goto LAB_008c1948;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
LAB_008c1948:
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulong)(lVar3 - lVar2 >> 2));
    puVar5 = *(undefined8 **)(param_1 + 0x98);
    puVar8 = *(undefined8 **)(param_1 + 0xa0);
    if (puVar8 != puVar5) {
      lVar2 = 0;
      uVar7 = 0;
      do {
        puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
        local_b0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
        local_a0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
        local_90 = &DAT_aaaaaaaaaaaaaaaa;
        local_78 = &DAT_aaaaaaaaaaaaaaaa;
        uStack_80 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
        local_c0 = (uint *)&DAT_aaaaaaaaaaaaaaaa;
        FUN_00844e38(&local_c0,(long *)(param_1 + 0xb0),uVar7);
        if (((ulong)local_78 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                    );
        }
        FUN_00864404(*(undefined8 *)((long)puVar5 + lVar2),uStack_80._4_4_,
                     (ulong)puStack_88 & 0xffffffff);
        FUN_008643d8(*(undefined8 *)((long)puVar5 + lVar2),3);
        if ((long)local_90 < 0) {
          operator_delete(local_a0);
        }
        if ((long)puStack_a8 < 0) {
          operator_delete(puStack_b8);
        }
        puVar5 = *(undefined8 **)(param_1 + 0x98);
        puVar8 = *(undefined8 **)(param_1 + 0xa0);
        uVar7 = uVar7 + 1;
        lVar2 = lVar2 + 0x18;
      } while (uVar7 < (ulong)(((long)puVar8 - (long)puVar5 >> 3) * -0x5555555555555555));
    }
    if ((*(int *)(param_1 + 0x16c) != -1) && (*(int *)(param_1 + 0x170) != -1)) {
      for (; puVar5 != puVar8; puVar5 = puVar5 + 3) {
        FUN_00864404(*puVar5,*(undefined4 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x16c));
      }
    }
  }
  return;
}


// ===== 008c1b34  FUN_008c1b34 =====

ulong FUN_008c1b34(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  void *pvVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  void *pvVar10;
  undefined8 *local_28;
  
  *param_1 = &PTR_FUN_00d3c7a0;
  param_1[1] = &PTR_FUN_00d3c878;
  param_1[2] = &PTR_FUN_00d3c8a0;
  param_1[3] = &PTR_FUN_00d3c8d0;
  if (*(char *)(param_1 + 0x10) != '\0') {
    puVar1 = (undefined8 *)param_1[0x13];
    puVar2 = (undefined8 *)param_1[0x14];
    *(undefined1 *)(param_1 + 0x10) = 0;
    for (; puVar1 != puVar2; puVar1 = puVar1 + 3) {
      plVar5 = (long *)*puVar1;
      uVar8 = (**(code **)(*plVar5 + 0x120))(plVar5);
      if ((uVar8 & 1) != 0) {
        (**(code **)(*plVar5 + 0x108))(plVar5,0);
        (**(code **)(*plVar5 + 0x118))(plVar5,0);
        (**(code **)(*(long *)param_1[0x3b] + 0x30))((long *)param_1[0x3b],plVar5);
      }
    }
    plVar5 = (long *)(**(code **)(*(long *)param_1[0x3b] + 0x68))();
    (**(code **)(*plVar5 + 8))(plVar5,param_1 + 3);
  }
  FUN_007ebdcc(param_1[0x50]);
  pvVar10 = (void *)param_1[0x50];
  if ((pvVar10 != (void *)0x0) && (iVar3 = FUN_00d0f7a0(0xffffffff,pvVar10), iVar3 == 1)) {
    operator_delete(pvVar10);
  }
  local_28 = param_1 + 0x4d;
  FUN_008c4d4c(&local_28,param_1[0x4e]);
  pvVar10 = (void *)param_1[0x49];
  if (pvVar10 == (void *)0x0) {
LAB_008c1cd4:
    if ((void *)param_1[0x46] != (void *)0x0) {
      operator_delete((void *)param_1[0x46]);
    }
    pvVar10 = (void *)param_1[0x41];
    if (pvVar10 != (void *)0x0) {
      pvVar7 = (void *)param_1[0x42];
      pvVar6 = pvVar10;
      if (pvVar10 != pvVar7) {
        do {
          pvVar7 = (void *)((long)pvVar7 + -0x3c8);
          if (pvVar7 == (void *)0x0) goto LAB_008c1d98;
          FUN_008d58c4(pvVar7);
        } while (pvVar7 != pvVar10);
        pvVar6 = (void *)param_1[0x41];
      }
      param_1[0x42] = pvVar10;
      operator_delete(pvVar6);
    }
    pvVar10 = (void *)param_1[0x3c];
    if (pvVar10 == (void *)0x0) {
LAB_008c1dbc:
      FUN_00843fd0(param_1 + 0x16);
      if (param_1[0x13] != 0) {
        FUN_008c4a30();
        operator_delete((void *)param_1[0x13]);
      }
      plVar5 = (long *)param_1[0x11];
      param_1[0x11] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      uVar4 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0xb));
      uVar8 = (ulong)uVar4;
      plVar5 = (long *)param_1[4];
      if ((plVar5 != (long *)0x0) && (uVar8 = FUN_00d0f7a0(0xffffffff,plVar5 + 1), (int)uVar8 == 1))
      {
        uVar8 = (**(code **)(*plVar5 + 8))(plVar5);
      }
      return uVar8;
    }
    pvVar7 = (void *)param_1[0x3d];
    uVar9 = (ulong)((long)pvVar7 + (-4 - ((long)pvVar7 << 0x3e))) >> 2;
    uVar8 = (ulong)(((long)pvVar10 - (long)pvVar7 << 0x3e) - ((long)pvVar10 - (long)pvVar7)) >> 2;
    if (uVar9 <= uVar8) {
      uVar8 = uVar9;
    }
    if ((1 < uVar8) && ((((int)pvVar10 - (int)pvVar7 | -(int)pvVar7) & 3U) == 0)) {
      uVar8 = uVar8 & 0x3ffffffffffffffe;
      pvVar7 = (void *)((long)pvVar7 + uVar8 * -4);
      do {
        uVar8 = uVar8 - 2;
      } while (uVar8 != 0);
    }
    do {
      if (pvVar7 == pvVar10) {
        param_1[0x3d] = pvVar10;
        operator_delete(pvVar10);
        goto LAB_008c1dbc;
      }
      pvVar7 = (void *)((long)pvVar7 + -4);
    } while (pvVar7 != (void *)0x0);
  }
  else {
    pvVar7 = (void *)param_1[0x4a];
    uVar9 = (ulong)((long)pvVar7 + (-8 - ((long)pvVar7 << 0x3d))) >> 3;
    uVar8 = (ulong)(((long)pvVar10 - (long)pvVar7 << 0x3d) - ((long)pvVar10 - (long)pvVar7)) >> 3;
    if (uVar9 <= uVar8) {
      uVar8 = uVar9;
    }
    if ((1 < uVar8) && ((((int)pvVar10 - (int)pvVar7 | -(int)pvVar7) & 7U) == 0)) {
      uVar8 = uVar8 & 0x1ffffffffffffffe;
      pvVar7 = (void *)((long)pvVar7 + uVar8 * -8);
      do {
        uVar8 = uVar8 - 2;
      } while (uVar8 != 0);
    }
    do {
      if (pvVar7 == pvVar10) {
        param_1[0x4a] = pvVar10;
        operator_delete(pvVar10);
        goto LAB_008c1cd4;
      }
      pvVar7 = (void *)((long)pvVar7 + -8);
    } while (pvVar7 != (void *)0x0);
  }
LAB_008c1d98:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008c1e48  FUN_008c1e48 =====

void FUN_008c1e48(long param_1,byte param_2)

{
  void *pvVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  void *local_58;
  void *local_50;
  void *local_48;
  
  if (*(byte *)(param_1 + 0x80) != (param_2 & 1)) {
    puVar9 = *(undefined8 **)(param_1 + 0x98);
    puVar3 = *(undefined8 **)(param_1 + 0xa0);
    *(byte *)(param_1 + 0x80) = param_2 & 1;
    if (puVar9 != puVar3) {
      lVar2 = 0x28;
      if ((param_2 & 1) == 0) {
        lVar2 = 0x30;
      }
      do {
        plVar8 = (long *)*puVar9;
        bVar4 = (**(code **)(*plVar8 + 0x120))(plVar8);
        if ((param_2 & 1) != (bVar4 & 1)) {
          (**(code **)(*plVar8 + 0x108))(plVar8,param_2 & 1);
          (**(code **)(*plVar8 + 0x118))(plVar8,param_2 & 1);
          (**(code **)(**(long **)(param_1 + 0x1d8) + lVar2))(*(long **)(param_1 + 0x1d8),plVar8);
        }
        puVar9 = puVar9 + 3;
      } while (puVar9 != puVar3);
    }
    plVar8 = (long *)(**(code **)(**(long **)(param_1 + 0x1d8) + 0x68))();
    if ((param_2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x008c2040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 8))(plVar8,param_1 + 0x18);
      return;
    }
    pvVar5 = *(void **)(param_1 + 0xb0);
    local_58 = (void *)0x0;
    local_50 = (void *)0x0;
    local_48 = (void *)0x0;
    uVar6 = *(long *)(param_1 + 0xb8) - (long)pvVar5;
    if (uVar6 != 0) {
      if ((long)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005da79c();
      }
      local_58 = operator_new(uVar6);
      pvVar1 = (void *)((long)local_58 + uVar6);
      local_48 = pvVar1;
      memcpy(local_58,pvVar5,uVar6);
      local_50 = pvVar1;
    }
    (**(code **)*plVar8)(plVar8,&local_58,param_1 + 0x18);
    if (local_58 != (void *)0x0) {
      uVar7 = (ulong)((long)local_50 + (-4 - ((long)local_50 << 0x3e))) >> 2;
      uVar6 = (ulong)(((long)local_58 - (long)local_50 << 0x3e) - ((long)local_58 - (long)local_50))
              >> 2;
      if (uVar7 <= uVar6) {
        uVar6 = uVar7;
      }
      pvVar5 = local_50;
      if ((1 < uVar6) && ((((int)local_58 - (int)local_50 | -(int)local_50) & 3U) == 0)) {
        uVar6 = uVar6 & 0x3ffffffffffffffe;
        pvVar5 = (void *)((long)local_50 + uVar6 * -4);
        do {
          uVar6 = uVar6 - 2;
        } while (uVar6 != 0);
      }
      while (pvVar5 != local_58) {
        pvVar5 = (void *)((long)pvVar5 + -4);
        if (pvVar5 == (void *)0x0) {
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
  return;
}


// ===== 008c205c  FUN_008c205c =====

void FUN_008c205c(long param_1)

{
  FUN_008c1b34(param_1 + -8);
  return;
}


// ===== 008c2068  FUN_008c2068 =====

void FUN_008c2068(long param_1)

{
  FUN_008c1b34(param_1 + -0x10);
  return;
}


// ===== 008c2074  FUN_008c2074 =====

void FUN_008c2074(long param_1)

{
  FUN_008c1b34(param_1 + -0x18);
  return;
}


// ===== 008c2080  FUN_008c2080 =====

void FUN_008c2080(void *param_1)

{
  FUN_008c1b34();
  operator_delete(param_1);
  return;
}


// ===== 008c20b0  FUN_008c20b0 =====

void FUN_008c20b0(long param_1)

{
  FUN_008c1b34((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 008c20e4  FUN_008c20e4 =====

void FUN_008c20e4(long param_1)

{
  FUN_008c1b34((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}


// ===== 008c2118  FUN_008c2118 =====

void FUN_008c2118(long param_1)

{
  FUN_008c1b34((void *)(param_1 + -0x18));
  operator_delete((void *)(param_1 + -0x18));
  return;
}


// ===== 008c214c  FUN_008c214c =====

int FUN_008c214c(long param_1,byte param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x58));
  if (*(byte *)(param_1 + 0x80) != (param_2 & 1)) {
    FUN_008c1e48(param_1);
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x58));
  return iVar1;
}


// ===== 008c2198  FUN_008c2198 =====

bool FUN_008c2198(long param_1)

{
  bool bVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x58));
  if (*(char *)(param_1 + 0x80) == '\x01') {
    bVar1 = *(long *)(param_1 + 0x98) != *(long *)(param_1 + 0xa0);
  }
  else {
    bVar1 = false;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x58));
  return bVar1;
}


// ===== 008c21f0  FUN_008c21f0 =====

/* WARNING: Removing unreachable block (ram,0x008c264c) */
/* WARNING: Removing unreachable block (ram,0x008c2380) */
/* WARNING: Removing unreachable block (ram,0x008c2368) */
/* WARNING: Removing unreachable block (ram,0x008c2664) */

undefined1  [16] FUN_008c21f0(long param_1,long param_2,uint *param_3)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  uint *puVar12;
  int iVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 **ppuVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_940 [8];
  void *local_938;
  char cStack_921;
  void *local_920 [2];
  char cStack_909;
  undefined1 auStack_8f0 [2032];
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
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
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  (**(code **)(**(long **)(param_1 + 0x88) + 0x30))
            (*(long **)(param_1 + 0x88),*(undefined8 *)(param_2 + 0x90),
             *(undefined4 *)(param_2 + 0x18));
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x58));
  if (*(char *)(param_1 + 0x80) != '\x01') {
LAB_008c2394:
    uVar14 = 1;
    goto LAB_008c26fc;
  }
  *(long *)(param_1 + 0x1f8) = *(long *)(param_1 + 0x1f8) + 1;
  uVar14 = (long)(int)*(long *)(param_2 + 0x9c) & (*(long *)(param_2 + 0x9c) << 0x1f) >> 0x3f;
  if ((ulong)((*(long *)(param_1 + 0xa0) - *(long *)(param_1 + 0x98) >> 3) * -0x5555555555555555) <=
      uVar14) goto LAB_008c2740;
  iVar8 = *(int *)(param_2 + 0x98);
  iVar13 = (int)uVar14;
  iVar5 = FUN_00864478(*(undefined8 *)(*(long *)(param_1 + 0x98) + (long)iVar13 * 0x18));
  if ((ulong)((*(long *)(param_1 + 0xa0) - *(long *)(param_1 + 0x98) >> 3) * -0x5555555555555555) <=
      uVar14) goto LAB_008c2740;
  uVar6 = *(undefined4 *)(param_2 + 0x98);
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x98) + (long)iVar13 * 0x18);
  FUN_00844e38(&local_100,param_1 + 0xb0,uVar14);
  uVar9 = FUN_00864a64(uVar15,uVar6,uVar16,(ulong)local_c8 & 0xffffffff,
                       *(int *)(param_2 + 0x18) == 3);
  if ((uVar9 & 1) == 0) goto LAB_008c2394;
  if (*(char *)(param_2 + 0x138) == '\x01') {
    if ((ulong)((*(long *)(param_1 + 0xa0) - *(long *)(param_1 + 0x98) >> 3) * -0x5555555555555555)
        <= uVar14) goto LAB_008c2740;
    uVar15 = FUN_00864fd0(*(undefined8 *)(*(long *)(param_1 + 0x98) + (long)iVar13 * 0x18));
  }
  else {
    uVar15 = 0x7fffffffffffffff;
  }
  if (*(int *)(param_2 + 0x18) == 3) {
    if (param_3 == (uint *)0x0) {
LAB_008c2414:
      if (((*(ulong *)(param_2 + 0xb8) >> 0x20 & 1) != 0) && (0 < (int)*(ulong *)(param_2 + 0xb8)))
      goto LAB_008c24f0;
    }
    else if ((char)param_3[0x1ce] == '\x01') {
      puVar12 = param_3 + 0x1b6;
      if ((*(ulong *)(param_3 + 0x1b4) & 1) != 0) {
        puVar12 = *(uint **)(param_3 + 0x1b6);
      }
      uVar9 = *(ulong *)(param_3 + 0x1b4) & 0x3ffffffffffffffe;
      lVar10 = uVar9 * 4;
      if (uVar9 != 0) {
        puVar12 = puVar12 + 1;
        do {
          lVar10 = lVar10 + -8;
          uVar3 = *puVar12;
          if (lVar10 == 0) break;
          puVar12 = puVar12 + 2;
        } while ((uVar3 & 1) == 0);
        if ((uVar3 & 1) != 0) goto LAB_008c24f0;
      }
    }
    else if ((4 < *param_3) || ((0x13U >> (ulong)(*param_3 & 0x1f) & 1) == 0)) goto LAB_008c2414;
    if ((ulong)((*(long *)(param_1 + 0xa0) - *(long *)(param_1 + 0x98) >> 3) * -0x5555555555555555)
        <= uVar14) goto LAB_008c2740;
    uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x98) + (long)iVar13 * 0x18 + 8);
    if ((param_3 == (uint *)0x0) || ((char)param_3[0x1f0] != '\x01')) {
      puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
      local_100 = &DAT_aaaaaaaaaaaaaaaa;
      local_e8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
      local_e0 = &DAT_aaaaaaaaaaaaaaaa;
      local_c8 = &DAT_aaaaaaaaaaaaaaaa;
      local_d0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
      local_c0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      local_a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      if ((ulong)((*(long *)(param_1 + 0x210) - *(long *)(param_1 + 0x208) >> 3) *
                 0x1b810ecf56be69c9) <= uVar14) goto LAB_008c2754;
      ppuVar17 = &local_100;
      FUN_008d7568(&local_100,*(long *)(param_1 + 0x208) + (long)iVar13 * 0x3c8,param_3);
      if (((ulong)local_80 & 1) == 0) {
        ppuVar17 = (undefined1 **)0x0;
      }
      FUN_008c6794(uVar16,ppuVar17);
      if (((ulong)local_80 & 1) != 0) {
        FUN_0060b02c(&local_100);
      }
    }
    else {
      FUN_008c6794(uVar16,param_3 + 0x1d0);
    }
  }
LAB_008c24f0:
  uVar16 = 0xaaaaaaaaaaaaaa00;
  uVar18 = 0xaaaaaaaaaaaaaa00;
  if ((*(byte *)(param_1 + 0x200) & 1) == 0) {
    uVar18 = *(undefined8 *)(param_1 + 0x1f8);
    uVar16 = 0xaaaaaaaaaaaaaa01;
  }
  if ((ulong)((*(long *)(param_1 + 0xa0) - *(long *)(param_1 + 0x98) >> 3) * -0x5555555555555555) <=
      uVar14) {
LAB_008c2740:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
              );
  }
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x98) + (long)iVar13 * 0x18 + 8);
  FUN_00844e38(&local_100,param_1 + 0xb0,uVar14);
  puVar4 = local_c8;
  FUN_00844e38(auStack_940,param_1 + 0xb0,uVar14);
  uVar6 = FUN_007b8cec(local_920);
  if ((ulong)((*(long *)(param_1 + 0x210) - *(long *)(param_1 + 0x208) >> 3) * 0x1b810ecf56be69c9)
      <= uVar14) {
LAB_008c2754:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
              );
  }
  uVar3 = iVar5 + iVar8;
  FUN_008d59a8(auStack_8f0,*(long *)(param_1 + 0x208) + (long)iVar13 * 0x3c8,param_2,param_3,uVar18,
               uVar16);
  uVar7 = FUN_008c8924(uVar11,(ulong)puVar4 & 0xffffffff,uVar6,uVar3,param_2,auStack_8f0,uVar15,
                       param_1 + 0x1e0);
  FUN_007dd190(auStack_8f0);
  if (cStack_909 < '\0') {
    operator_delete(local_920[0]);
  }
  if (cStack_921 < '\0') {
    operator_delete(local_938);
  }
  if (*(long *)(param_1 + 0x260) != 0) {
    if ((ulong)(*(long *)(param_1 + 0x250) - *(long *)(param_1 + 0x248) >> 3) <= uVar14)
    goto LAB_008c2754;
    piVar1 = (int *)(*(long *)(param_1 + 0x248) + uVar14 * 8);
    if (*(int *)(param_2 + 0x18) == 4) {
      piVar1[1] = piVar1[1] + 1;
    }
    else if (*(int *)(param_2 + 0x18) == 3) {
      *piVar1 = *piVar1 + 1;
    }
    if ((ulong)(*(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 2) <= uVar14)
    goto LAB_008c2740;
    (**(code **)(**(long **)(param_1 + 0x260) + 0x10))
              (*(long **)(param_1 + 0x260),piVar1,
               *(undefined4 *)(*(long *)(param_1 + 0xb0) + uVar14 * 4));
  }
  uVar14 = (ulong)uVar3 << 0x20;
  if ((uVar7 & 1) == 0) {
    uVar14 = 0;
  }
  uVar14 = uVar14 | (ulong)~uVar7 & 1;
LAB_008c26fc:
  iVar8 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x58));
  if (*(long *)(lVar2 + 0x28) == local_70) {
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar14;
    return auVar19;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar8);
}


// ===== 008c276c  FUN_008c276c =====

int FUN_008c276c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_118 [168];
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x58));
  if (*(char *)(param_1 + 0x80) == '\x01') {
    puVar1 = *(undefined8 **)(param_1 + 0x98);
    if (puVar1 != *(undefined8 **)(param_1 + 0xa0)) {
      if ((long)*(undefined8 **)(param_1 + 0xa0) - (long)puVar1 == 0x18) {
        FUN_00865b5c(*puVar1,param_2);
      }
      else {
        puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
        local_70 = &DAT_aaaaaaaaaaaaaaaa;
        local_60 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_007cc380(&local_70,param_2);
        lVar3 = *(long *)(param_1 + 0x98);
        if (*(long *)(param_1 + 0xa0) != lVar3) {
          lVar7 = 0;
          lVar8 = 0;
          uVar9 = 0;
          do {
            if ((ulong)(((long)puStack_68 - (long)local_70 >> 2) * -0x7d05f417d05f417d) <= uVar9) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                        );
            }
            puVar4 = local_70 + lVar8;
            uVar6 = *(undefined8 *)(lVar3 + lVar7);
            if (puVar4[0xa8] != '\x01') {
              FUN_007cbe28(auStack_118);
              puVar4 = auStack_118;
            }
            FUN_00865b5c(uVar6,puVar4);
            lVar3 = *(long *)(param_1 + 0x98);
            uVar9 = uVar9 + 1;
            lVar8 = lVar8 + 0xac;
            lVar7 = lVar7 + 0x18;
          } while (uVar9 < (ulong)((*(long *)(param_1 + 0xa0) - lVar3 >> 3) * -0x5555555555555555));
        }
        if (local_70 != (undefined1 *)0x0) {
          uVar9 = (ulong)(((long)local_70 - (long)puStack_68) * 0x3d05f417d05f417d) >> 2;
          uVar5 = (long)puStack_68 * -0x3d05f417d05f417d - 4U >> 2;
          if (uVar5 <= uVar9) {
            uVar9 = uVar5;
          }
          puVar4 = puStack_68;
          if ((1 < uVar9) && ((((int)local_70 - (int)puStack_68 | -(int)puStack_68) & 3U) == 0)) {
            uVar9 = uVar9 & 0x3ffffffffffffffe;
            puVar4 = puStack_68 + uVar9 * -0xac;
            do {
              uVar9 = uVar9 - 2;
            } while (uVar9 != 0);
          }
          while (puVar4 != local_70) {
            puVar4 = puVar4 + -0xac;
            if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
          }
          puStack_68 = local_70;
          operator_delete(local_70);
        }
      }
    }
  }
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x58));
  return iVar2;
}


// ===== 008c2970  FUN_008c2970 =====

void FUN_008c2970(long param_1,undefined5 *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  void *__s;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  code **ppcVar10;
  long *plVar11;
  undefined4 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  code *pcVar17;
  code *pcVar18;
  code *pcVar19;
  code *pcVar20;
  undefined1 uStack_262;
  undefined1 uStack_261;
  undefined4 local_260;
  undefined1 local_25c;
  ulong local_258;
  code *local_250;
  code *pcStack_248;
  undefined8 auStack_240 [26];
  undefined8 local_170;
  ulong local_168;
  code *local_160;
  code *pcStack_158;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x58));
  if (*(char *)(param_1 + 0x80) == '\x01') {
    lVar15 = *(long *)(param_1 + 0x98);
    lVar14 = *(long *)(param_1 + 0xa0);
    if (lVar15 != lVar14) {
      uVar13 = 0;
      puVar16 = (undefined8 *)((ulong)&local_170 | 5);
      do {
        local_170 = (long *)CONCAT35(local_170._5_3_,*param_2);
        uVar8 = *(ulong *)(param_2 + 1);
        *(undefined1 **)((long)puVar16 + 0xe3) = &DAT_aaaaaaaaaaaaaaaa;
        *(undefined1 **)((long)puVar16 + 0xdb) = &DAT_aaaaaaaaaaaaaaaa;
        puVar16[1] = &DAT_aaaaaaaaaaaaaaaa;
        *puVar16 = &DAT_aaaaaaaaaaaaaaaa;
        puVar16[3] = &DAT_aaaaaaaaaaaaaaaa;
        puVar16[2] = &DAT_aaaaaaaaaaaaaaaa;
        puVar16[5] = &DAT_aaaaaaaaaaaaaaaa;
        puVar16[4] = &DAT_aaaaaaaaaaaaaaaa;
        puVar16[7] = &DAT_aaaaaaaaaaaaaaaa;
        puVar16[6] = &DAT_aaaaaaaaaaaaaaaa;
        puVar16[9] = &DAT_aaaaaaaaaaaaaaaa;
        puVar16[8] = &DAT_aaaaaaaaaaaaaaaa;
        puVar16[0xb] = &DAT_aaaaaaaaaaaaaaaa;
        puVar16[10] = &DAT_aaaaaaaaaaaaaaaa;
        puVar16[0xd] = &DAT_aaaaaaaaaaaaaaaa;
        puVar16[0xc] = &DAT_aaaaaaaaaaaaaaaa;
        puVar16[0xf] = &DAT_aaaaaaaaaaaaaaaa;
        puVar16[0xe] = &DAT_aaaaaaaaaaaaaaaa;
        puVar16[0x11] = &DAT_aaaaaaaaaaaaaaaa;
        puVar16[0x10] = &DAT_aaaaaaaaaaaaaaaa;
        puVar16[0x13] = &DAT_aaaaaaaaaaaaaaaa;
        puVar16[0x12] = &DAT_aaaaaaaaaaaaaaaa;
        puVar16[0x15] = &DAT_aaaaaaaaaaaaaaaa;
        puVar16[0x14] = &DAT_aaaaaaaaaaaaaaaa;
        puVar16[0x17] = &DAT_aaaaaaaaaaaaaaaa;
        puVar16[0x16] = &DAT_aaaaaaaaaaaaaaaa;
        puVar16[0x19] = &DAT_aaaaaaaaaaaaaaaa;
        puVar16[0x18] = &DAT_aaaaaaaaaaaaaaaa;
        puVar16[0x1b] = &DAT_aaaaaaaaaaaaaaaa;
        puVar16[0x1a] = &DAT_aaaaaaaaaaaaaaaa;
        local_168 = 0;
        if (1 < uVar8) {
          FUN_008c4aec(&local_168,param_2 + 1);
          lVar15 = *(long *)(param_1 + 0x98);
          lVar14 = *(long *)(param_1 + 0xa0);
        }
        uVar5 = local_170;
        uVar12 = (undefined4)uVar13;
        local_170 = (long *)CONCAT44(local_170._4_4_,uVar12);
        plVar11 = local_170;
        if ((ulong)((lVar14 - lVar15 >> 3) * -0x5555555555555555) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                    );
        }
        local_170._4_1_ = SUB81(uVar5,4);
        uVar5 = *(undefined8 *)(lVar15 + uVar13 * 0x18 + 8);
        local_25c = local_170._4_1_;
        local_258 = 0;
        local_260 = uVar12;
        local_170 = plVar11;
        if ((local_168 & 1) == 0) {
          uVar8 = local_168;
          if (local_168 != 0) {
            uVar7 = local_168 >> 1;
            ppcVar10 = &local_160;
            uVar8 = (long)&local_258 * -0xdb6db6db6db6db7 + 0x9249249249249248U >> 3;
            puVar9 = auStack_240;
            do {
              if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                          );
              }
              pcVar18 = ppcVar10[1];
              pcVar17 = *ppcVar10;
              pcVar20 = ppcVar10[3];
              pcVar19 = ppcVar10[2];
              uVar7 = uVar7 - 1;
              uVar12 = *(undefined4 *)(ppcVar10 + 6);
              ppcVar10[1] = (code *)0x0;
              uVar8 = uVar8 - 1;
              puVar9[-1] = pcVar18;
              puVar9[-2] = pcVar17;
              puVar9[1] = pcVar20;
              *puVar9 = pcVar19;
              pcVar18 = ppcVar10[5];
              pcVar17 = ppcVar10[4];
              *(undefined4 *)(puVar9 + 4) = uVar12;
              uVar2 = *(undefined1 *)((long)ppcVar10 + 0x34);
              ppcVar10 = ppcVar10 + 7;
              puVar9[3] = pcVar18;
              puVar9[2] = pcVar17;
              *(undefined1 *)((long)puVar9 + 0x24) = uVar2;
              puVar9 = puVar9 + 7;
            } while (uVar7 != 0);
            uVar8 = local_168 & 0xfffffffffffffffe;
          }
        }
        else {
          local_258 = local_168;
          local_168 = 0;
          local_250 = local_160;
          pcStack_248 = pcStack_158;
          uVar8 = local_258;
        }
        local_258 = uVar8;
        FUN_008c6a90(uVar5,&local_260);
        if (local_258 != 0) {
          FUN_008c4c88(&local_258);
        }
        if (local_168 != 0) {
          FUN_008c4c88(&local_168);
        }
        lVar15 = *(long *)(param_1 + 0x98);
        lVar14 = *(long *)(param_1 + 0xa0);
        uVar13 = uVar13 + 1;
        uVar8 = (lVar14 - lVar15 >> 3) * -0x5555555555555555;
      } while (uVar13 < uVar8);
      if (lVar14 == lVar15) {
        lVar15 = 0;
        __s = (void *)0x0;
      }
      else {
        if (lVar14 - lVar15 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00632a3c();
        }
        uVar13 = uVar8 - 1 >> 6;
        lVar15 = uVar13 + 1;
        __s = operator_new(lVar15 * 8);
        memset(__s,0,uVar13 * 8 + 8);
      }
      piVar1 = (int *)(param_2 + 2);
      if ((*(ulong *)(param_2 + 1) & 1) != 0) {
        piVar1 = *(int **)(param_2 + 2);
      }
      for (lVar14 = (*(ulong *)(param_2 + 1) >> 1) * 0x38; lVar14 != 0; lVar14 = lVar14 + -0x38) {
        uVar13 = (ulong)*piVar1;
        if (*piVar1 < (int)uVar8) {
          if (uVar8 < uVar13 || uVar8 - uVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__vector/vector_bool.h:297: libc++ Hardening assertion __n < size() failed: vector<bool>::operator[] index out of bounds\n"
                      );
          }
          uVar7 = uVar13 >> 3 & 0x1ffffffffffffff8;
          *(ulong *)((long)__s + uVar7) = *(ulong *)((long)__s + uVar7) | 1L << (uVar13 & 0x3f);
        }
        piVar1 = piVar1 + 0xe;
      }
      lVar14 = *(long *)(param_1 + 0x280);
      plVar11 = *(long **)(param_1 + 0x50);
      if (lVar14 != 0) {
        FUN_00d0f740(1,lVar14);
      }
      plVar6 = (long *)operator_new(0x20);
      *plVar6 = param_1;
      plVar6[1] = (long)__s;
      plVar6[2] = uVar8;
      plVar6[3] = lVar15;
      local_170 = (long *)operator_new(0x30);
      *local_170 = lVar14;
      local_170[4] = (long)FUN_008c4f48;
      local_170[5] = (long)FUN_008c4dc0;
      local_170[2] = (long)plVar6;
      local_160 = FUN_005db390;
      pcStack_158 = FUN_005db348;
      (**(code **)(*plVar11 + 8))(plVar11,&local_170,&uStack_261,&uStack_262);
      (*local_160)(0,&local_170,&local_170);
    }
  }
  iVar4 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x58));
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}


// ===== 008c2d2c  FUN_008c2d2c =====

long FUN_008c2d2c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar2 = *(long *)(param_1 + 0x98);
  if (*(long *)(param_1 + 0xa0) == lVar2) {
    lVar3 = 0;
  }
  else {
    lVar4 = 0;
    uVar5 = 0;
    lVar6 = 0;
    do {
      uVar1 = FUN_008649e8(*(undefined8 *)(lVar2 + lVar4));
      lVar3 = lVar6;
      if ((uVar1 & 1) != 0) {
        if ((ulong)((*(long *)(param_1 + 0xa0) - *(long *)(param_1 + 0x98) >> 3) *
                   -0x5555555555555555) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                    );
        }
        lVar2 = FUN_008c8b68(*(undefined8 *)(*(long *)(param_1 + 0x98) + lVar4 + 8));
        lVar3 = 0x7fffffffffffffff;
        if ((lVar6 != 0x7fffffffffffffff) && (lVar2 != 0x7fffffffffffffff)) {
          lVar3 = -0x8000000000000000;
          if (lVar2 != -0x8000000000000000 && lVar6 != -0x8000000000000000) {
            lVar3 = lVar2 + lVar6;
          }
        }
      }
      lVar2 = *(long *)(param_1 + 0x98);
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x18;
      lVar6 = lVar3;
    } while (uVar5 < (ulong)((*(long *)(param_1 + 0xa0) - lVar2 >> 3) * -0x5555555555555555));
  }
  return lVar3;
}


// ===== 008c2e30  FUN_008c2e30 =====

void FUN_008c2e30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0xa0);
  for (puVar2 = *(undefined8 **)(param_1 + 0x98); puVar2 != puVar1; puVar2 = puVar2 + 3) {
    FUN_00864454(*puVar2,param_2,param_3);
  }
  return;
}


// ===== 008c2e84  FUN_008c2e84 =====

void FUN_008c2e84(long param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0xa0);
  for (puVar3 = *(undefined8 **)(param_1 + 0x98); puVar3 != puVar2; puVar3 = puVar3 + 3) {
    if ((param_2 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0xf8);
    }
    FUN_00864f38(*puVar3,uVar1);
  }
  return;
}


// ===== 008c2ee4  FUN_008c2ee4 =====

void FUN_008c2ee4(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined4 local_94;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined4 local_60;
  undefined1 uStack_59;
  undefined4 *local_58;
  
  lVar1 = *(long *)(param_2 + 0xb0);
  lVar2 = *(long *)(param_2 + 0xb8);
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  if (lVar2 != lVar1) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      local_60 = *(undefined4 *)(lVar1 + uVar3 * 4);
      if ((ulong)((*(long *)(param_2 + 0xa0) - *(long *)(param_2 + 0x98) >> 3) * -0x5555555555555555
                 ) <= uVar3) goto LAB_008c3114;
      FUN_008645a4(&local_90,*(undefined8 *)(*(long *)(param_2 + 0x98) + lVar2));
      local_58 = &local_60;
      lVar1 = FUN_005e36a8(0,param_1,param_1,&DAT_001f94c3,&local_58,&local_94);
      *(undefined1 *)(lVar1 + 0x48) = local_70._0_1_;
      *(undefined1 **)(lVar1 + 0x40) = puStack_78;
      *(undefined1 **)(lVar1 + 0x38) = local_80;
      *(undefined1 **)(lVar1 + 0x30) = puStack_88;
      *(undefined1 **)(lVar1 + 0x28) = local_90;
      if ((ulong)((*(long *)(param_2 + 0xa0) - *(long *)(param_2 + 0x98) >> 3) * -0x5555555555555555
                 ) <= uVar3) goto LAB_008c3114;
      lVar1 = *(long *)(param_2 + 0x98) + lVar2;
      if (*(long *)(lVar1 + 0x10) != 0) {
        puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
        local_80 = &DAT_aaaaaaaaaaaaaaaa;
        local_68 = &DAT_aaaaaaaaaaaaaaaa;
        local_70 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
        local_90 = &DAT_aaaaaaaaaaaaaaaa;
        (**(code **)(**(long **)(lVar1 + 0x10) + 0x48))(&local_90);
        if ((char)local_68 == '\x01') {
          local_94 = *(undefined4 *)(param_2 + 0x17c);
          local_58 = &local_94;
          lVar1 = FUN_005e36a8(0,param_1,param_1,&DAT_001f94c3,&local_58,&uStack_59);
          *(undefined1 *)(lVar1 + 0x48) = local_70._0_1_;
          *(undefined1 **)(lVar1 + 0x40) = puStack_78;
          *(undefined1 **)(lVar1 + 0x38) = local_80;
          *(undefined1 **)(lVar1 + 0x30) = puStack_88;
          *(undefined1 **)(lVar1 + 0x28) = local_90;
        }
      }
      lVar1 = *(long *)(param_2 + 0xb0);
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x18;
    } while (uVar3 < (ulong)(*(long *)(param_2 + 0xb8) - lVar1 >> 2));
  }
  lVar1 = *(long *)(param_2 + 0x198);
  if (*(long *)(param_2 + 0x1a0) != lVar1) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      local_60 = *(undefined4 *)(lVar1 + uVar3 * 4);
      if ((ulong)((*(long *)(param_2 + 0xa0) - *(long *)(param_2 + 0x98) >> 3) * -0x5555555555555555
                 ) <= uVar3) {
LAB_008c3114:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      FUN_008645f4(&local_90,*(undefined8 *)(*(long *)(param_2 + 0x98) + lVar2));
      local_58 = &local_60;
      lVar1 = FUN_005e36a8(0,param_1,param_1,&DAT_001f94c3,&local_58,&local_94);
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x18;
      *(undefined1 *)(lVar1 + 0x48) = local_70._0_1_;
      *(undefined1 **)(lVar1 + 0x40) = puStack_78;
      *(undefined1 **)(lVar1 + 0x38) = local_80;
      *(undefined1 **)(lVar1 + 0x30) = puStack_88;
      *(undefined1 **)(lVar1 + 0x28) = local_90;
      lVar1 = *(long *)(param_2 + 0x198);
    } while (uVar3 < (ulong)(*(long *)(param_2 + 0x1a0) - lVar1 >> 2));
  }
  return;
}


// ===== 008c3128  FUN_008c3128 =====

int FUN_008c3128(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_7c;
  undefined4 **local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 uStack_59;
  undefined4 *local_58;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x58));
  lVar4 = *(long *)(param_2 + 0x208);
  lVar5 = *(long *)(param_2 + 0x210);
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  if (lVar4 != lVar5) {
    do {
      FUN_008d62ac(&local_78,lVar4);
      local_7c = FUN_008d62a0(lVar4);
      local_58 = &local_7c;
      lVar3 = FUN_008c50c4(0,param_1,param_1,&DAT_001f94c3,&local_58,&uStack_59);
      *(undefined8 *)(lVar3 + 0x38) = local_68;
      *(undefined8 *)(lVar3 + 0x30) = uStack_70;
      *(undefined4 ***)(lVar3 + 0x28) = local_78;
      uVar6 = *(undefined8 *)(param_2 + 0x1f8);
      uVar1 = FUN_008d62a0(lVar4);
      local_58 = (undefined4 *)CONCAT44(local_58._4_4_,uVar1);
      local_78 = &local_58;
      lVar3 = FUN_008c50c4(0,param_1,param_1,&DAT_001f94c3,&local_78,&local_7c);
      lVar4 = lVar4 + 0x3c8;
      *(undefined8 *)(lVar3 + 0x30) = uVar6;
    } while (lVar4 != lVar5);
  }
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x58));
  return iVar2;
}


// ===== 008c3238  FUN_008c3238 =====

int FUN_008c3238(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x58));
  *(long *)(param_1 + 0x220) = param_2;
  puVar4 = *(undefined8 **)(param_1 + 0x98);
  puVar2 = *(undefined8 **)(param_1 + 0xa0);
  uVar1 = 0x5dcU - param_2;
  if (*(ulong *)(param_1 + 0x100) <= 0x5dcU - param_2) {
    uVar1 = *(ulong *)(param_1 + 0x100);
  }
  for (; puVar4 != puVar2; puVar4 = puVar4 + 3) {
    FUN_0086420c(*puVar4,uVar1);
  }
  iVar3 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x58));
  return iVar3;
}


// ===== 008c32b4  FUN_008c32b4 =====

int FUN_008c32b4(long param_1,ulong *param_2,int param_3)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined8 *puVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  double dVar19;
  double dVar20;
  void *local_78;
  long local_70;
  long local_68;
  
  uVar6 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x58));
  uVar9 = (ulong)uVar6;
  puVar14 = *(undefined8 **)(param_1 + 0x98);
  puVar2 = *(undefined8 **)(param_1 + 0xa0);
  if (puVar14 == puVar2) {
    uVar18 = 0;
  }
  else {
    uVar16 = 0;
    uVar17 = 0;
    do {
      uVar9 = FUN_008649e8(*puVar14);
      if ((uVar9 & 1) != 0) {
        uVar9 = FUN_00864ef8(*puVar14);
        uVar16 = uVar16 + 1;
        uVar17 = uVar9 + uVar17;
      }
      puVar14 = puVar14 + 3;
    } while (puVar14 != puVar2);
    uVar18 = uVar17;
    if ((1 < uVar16) && (uVar18 = 0, uVar16 != 0)) {
      uVar18 = uVar17 / uVar16;
    }
  }
  uVar16 = *param_2;
  lVar1 = *(long *)(param_1 + 0x220) + uVar18;
  lVar12 = *(long *)(param_1 + 0x100) + *(long *)(param_1 + 0x220);
  if (*(char *)(param_1 + 0x49) == '\x01') {
    if (*(char *)(param_1 + 0x48) == '\x01') {
      lVar11 = (long)param_3 * 1000;
      if (lVar11 < 0x3e9) {
        lVar11 = 1000;
      }
      lVar4 = 0;
      if (lVar11 != 0) {
        lVar4 = (long)(uVar16 * 0x7d) / lVar11;
      }
      dVar19 = INFINITY;
      if (lVar12 != 0x7fffffffffffffff) {
        dVar19 = (double)lVar12;
      }
      dVar20 = -INFINITY;
      if (lVar12 != -0x8000000000000000) {
        dVar20 = dVar19;
      }
      lVar11 = lVar11 * (int)((double)lVar4 / dVar20);
    }
    else {
      lVar11 = 0;
      if (lVar12 != 0) {
        lVar11 = (long)(uVar16 * 0x7d) / lVar12;
      }
    }
    lVar11 = SUB168(SEXT816(((lVar11 + 999) / 1000) * lVar1 * 8000 + 500) *
                    SEXT816(-0x20c49ba5e353f7cf),8);
    uVar17 = ((lVar11 >> 7) - (lVar11 >> 0x3f)) + (uVar16 & 0xffffffff);
    uVar6 = 2;
    if ((long)uVar17 < 0x100000000) {
      uVar6 = 0;
    }
    uVar6 = uVar6 | (uint)(uVar17 >> 0x3f);
    if (uVar6 < 2) {
      uVar16 = 0;
      if (uVar6 == 0) {
        uVar16 = uVar17 & 0xffffffff;
      }
    }
    else {
      if (uVar6 != 2) goto LAB_008c3710;
      uVar16 = 0xffffffff;
    }
  }
  plVar15 = *(long **)(param_1 + 0x88);
  dVar19 = (double)param_2[1] * 256.0;
  uVar6 = 0;
  if (255.0 < dVar19) {
    uVar6 = 2;
  }
  if (dVar19 < 0.0 != NAN(dVar19)) {
    uVar6 = uVar6 + 1;
  }
  if (uVar6 < 2) {
    iVar10 = 0;
    if (uVar6 == 0) {
      iVar10 = (int)dVar19;
    }
  }
  else {
    if (uVar6 != 2) {
LAB_008c3710:
                    /* WARNING: Subroutine does not return */
      FUN_0061ff28(uVar9);
    }
    iVar10 = 0xff;
  }
  lVar11 = *(long *)(param_1 + 0x238);
  local_78 = (void *)0x0;
  local_70 = 0;
  local_68 = 0;
  if (lVar11 != 0) {
    if (lVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00632a3c();
    }
    lVar4 = (lVar11 - 1U >> 6) + 1;
    local_78 = operator_new(lVar4 * 8);
    local_68 = lVar4;
    memmove(local_78,*(void **)(param_1 + 0x230),(lVar11 - 1U >> 3 & 0x1ffffffffffffff8) + 8);
    local_70 = lVar11;
  }
  uVar9 = param_2[2];
  if ((long)uVar9 < 0) {
    uVar17 = -(-uVar9 / 1000) - (ulong)(500 < -uVar9 % 1000);
  }
  else {
    uVar17 = uVar9 / 1000;
    if (499 < uVar9 % 1000) {
      uVar17 = uVar17 + 1;
    }
  }
  uVar7 = (**(code **)(*plVar15 + 0x28))
                    (plVar15,uVar16 & 0xffffffff,param_3,iVar10,&local_78,uVar17);
  *(undefined4 *)(param_1 + 0x22c) = uVar7;
  if (local_78 != (void *)0x0) {
    operator_delete(local_78);
  }
  if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
    *(int *)(param_1 + 0x22c) = (int)uVar16;
  }
  uVar8 = FUN_008c2d2c(param_1);
  uVar3 = *(uint *)(param_1 + 0x22c);
  *(undefined8 *)(param_1 + 0x238) = 0;
  uVar6 = uVar3 >> 1;
  if (uVar8 <= uVar3 >> 1) {
    uVar6 = uVar8;
  }
  uVar6 = uVar3 - uVar6;
  *(uint *)(param_1 + 0x22c) = uVar6;
  if ((*(byte *)(param_1 + 0x49) & 1) == 0) {
    iVar10 = (int)*param_2;
    uVar8 = 0;
  }
  else {
    lVar11 = -0x8000000000000000;
    if (uVar18 != 0x7fffffffffffffff && lVar12 != -0x8000000000000000) {
      lVar11 = lVar12 - uVar18;
    }
    lVar4 = 0x7fffffffffffffff;
    if (uVar18 != 0x8000000000000000) {
      lVar4 = lVar11;
    }
    lVar11 = 0x7fffffffffffffff;
    if (lVar12 != 0x7fffffffffffffff) {
      lVar11 = lVar4;
    }
    if (*(char *)(param_1 + 0x48) == '\x01') {
      uVar9 = (long)param_3 * 1000;
      if ((long)uVar9 < 0x3e9) {
        uVar9 = 1000;
      }
      uVar18 = 0;
      if (uVar9 != 0) {
        uVar18 = ((ulong)uVar6 * 0x7d) / uVar9;
      }
      dVar19 = INFINITY;
      if (lVar11 != 0x7fffffffffffffff) {
        dVar19 = (double)lVar11;
      }
      dVar20 = -INFINITY;
      if (lVar11 != -0x8000000000000000) {
        dVar20 = dVar19;
      }
      lVar12 = uVar9 * (long)(int)((double)uVar18 / dVar20);
    }
    else {
      lVar12 = 0;
      if (lVar11 != 0) {
        lVar12 = (long)((ulong)uVar6 * 0x7d) / lVar11;
      }
    }
    auVar5 = SEXT816(((lVar12 + 999) / 1000) * lVar1 * 8000 + 500) * SEXT816(0x20c49ba5e353f7cf);
    iVar10 = (int)*param_2;
    uVar13 = (int)(auVar5._8_8_ >> 7) - (auVar5._12_4_ >> 0x1f);
    uVar8 = iVar10 - uVar6;
    if (uVar13 <= iVar10 - uVar6) {
      uVar8 = uVar13;
    }
  }
  *(uint *)(param_1 + 0x228) = iVar10 - (uVar8 + uVar3);
  iVar10 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x58));
  return iVar10;
}


// ===== 008c3714  FUN_008c3714 =====

undefined4 FUN_008c3714(long param_1)

{
  return *(undefined4 *)(param_1 + 0x22c);
}


// ===== 008c3720  FUN_008c3720 =====

undefined4 FUN_008c3720(long param_1)

{
  return *(undefined4 *)(param_1 + 0x228);
}


// ===== 008c372c  FUN_008c372c =====

void FUN_008c372c(undefined8 *param_1,long param_2,int param_3,undefined8 param_4,undefined8 param_5
                 )

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  
  plVar1 = *(long **)(param_2 + 0x98);
  plVar2 = *(long **)(param_2 + 0xa0);
  while( true ) {
    if (plVar1 == plVar2) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    iVar3 = FUN_008562a4(*plVar1 + 0x50);
    if (param_3 == iVar3) break;
    plVar1 = plVar1 + 3;
  }
  FUN_00864ee8(param_1,*plVar1,param_4,param_5);
  return;
}


// ===== 008c37c8  FUN_008c37c8 =====

undefined8
FUN_008c37c8(long param_1,undefined8 param_2,undefined8 param_3,int *param_4,int *param_5,
            int *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0xa0);
  for (puVar2 = *(undefined8 **)(param_1 + 0x98); puVar2 != puVar1; puVar2 = puVar2 + 3) {
    FUN_00864e24(*puVar2,param_2,param_3);
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    local_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_0086585c(&local_80,*puVar2);
    *param_4 = *param_4 + (int)puStack_78;
    *param_6 = *param_6 + (int)local_68;
    *param_5 = *param_5 + (int)local_70;
  }
  return 0;
}


// ===== 008c3898  FUN_008c3898 =====

undefined8
FUN_008c3898(long param_1,undefined8 param_2,undefined8 param_3,int *param_4,int *param_5,
            int *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x90);
  for (puVar2 = *(undefined8 **)(param_1 + 0x88); puVar2 != puVar1; puVar2 = puVar2 + 3) {
    FUN_00864e24(*puVar2,param_2,param_3);
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    local_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_0086585c(&local_80,*puVar2);
    *param_4 = *param_4 + (int)puStack_78;
    *param_6 = *param_6 + (int)local_68;
    *param_5 = *param_5 + (int)local_70;
  }
  return 0;
}


// ===== 008c3968  FUN_008c3968 =====

int FUN_008c3968(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x58));
  lVar2 = *(long *)(param_1 + 0xa0);
  for (lVar1 = *(long *)(param_1 + 0x98); lVar1 != lVar2; lVar1 = lVar1 + 0x18) {
    FUN_008c6788(*(undefined8 *)(lVar1 + 8),param_2);
  }
  iVar3 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x58));
  return iVar3;
}


// ===== 008c39c8  FUN_008c39c8 =====

int FUN_008c39c8(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x48));
  lVar2 = *(long *)(param_1 + 0x90);
  for (lVar1 = *(long *)(param_1 + 0x88); lVar1 != lVar2; lVar1 = lVar1 + 0x18) {
    FUN_008c6788(*(undefined8 *)(lVar1 + 8),param_2);
  }
  iVar3 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x48));
  return iVar3;
}


// ===== 008c3a28  FUN_008c3a28 =====

int FUN_008c3a28(long param_1,undefined1 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x58));
  *(undefined1 *)(param_1 + 0x90) = param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x58));
  return iVar1;
}


// ===== 008c3a60  FUN_008c3a60 =====

int FUN_008c3a60(long param_1,undefined1 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x50));
  *(undefined1 *)(param_1 + 0x88) = param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x50));
  return iVar1;
}


// ===== 008c3a98  FUN_008c3a98 =====

void FUN_008c3a98(long param_1,long *param_2)

{
  byte *pbVar1;
  byte ***pppbVar2;
  undefined1 *puVar3;
  byte *****pppppbVar4;
  byte ******ppppppbVar5;
  byte ****ppppbVar6;
  bool bVar7;
  ulong uVar8;
  undefined2 *puVar9;
  long lVar10;
  undefined2 *puVar11;
  undefined8 uVar12;
  byte ******ppppppbVar13;
  long *plVar14;
  byte ****ppppbVar15;
  byte ****ppppbVar16;
  undefined1 *puVar17;
  byte ******ppppppbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *****pppppbVar21;
  byte *****local_90;
  byte *****local_88;
  undefined8 local_80;
  byte ***local_78;
  byte **local_70;
  undefined8 local_68;
  undefined1 uStack_59;
  byte *local_58;
  
  uVar8 = (**(code **)(**(long **)(param_1 + 0x88) + 0x38))();
  if ((uVar8 & 1) != 0) {
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x58));
    puVar3 = (undefined1 *)param_2[1];
    for (puVar17 = (undefined1 *)*param_2; puVar17 != puVar3; puVar17 = puVar17 + 0x10) {
      local_78._1_7_ = (undefined7)((ulong)local_78 >> 8);
      local_78 = (byte ***)(CONCAT71(local_78._1_7_,*puVar17) ^ 1);
      FUN_008c3eac(param_1 + 0x230,&local_78);
    }
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x58));
  }
  pbVar19 = (byte *)*param_2;
  pbVar20 = (byte *)param_2[1];
  local_70 = (byte **)0x0;
  local_68 = 0;
  local_78 = &local_70;
  if (pbVar19 != pbVar20) {
    pbVar19 = pbVar19 + 0xc;
    do {
      if ((pbVar19[-0xc] == 1) && (pbVar19[-4] == 1)) {
        local_90 = (byte *****)(pbVar19 + -8);
        lVar10 = FUN_008c52c0(0,&local_78,&local_78,&DAT_001f94c3,&local_90,&local_58);
        puVar11 = *(undefined2 **)(lVar10 + 0x30);
        if (puVar11 < *(undefined2 **)(lVar10 + 0x38)) {
          if (puVar11 == (undefined2 *)0x0) goto LAB_008c3e78;
          puVar9 = puVar11 + 1;
          *puVar11 = *(undefined2 *)pbVar19;
        }
        else {
          puVar9 = (undefined2 *)FUN_005dd418(lVar10 + 0x28,pbVar19);
        }
        *(undefined2 **)(lVar10 + 0x30) = puVar9;
      }
      pbVar1 = pbVar19 + 4;
      pbVar19 = pbVar19 + 0x10;
    } while (pbVar1 != pbVar20);
    pbVar19 = (byte *)*param_2;
    pbVar20 = (byte *)param_2[1];
  }
  local_88 = (byte *****)0x0;
  local_80 = 0;
  local_90 = (byte *****)&local_88;
  if (pbVar19 != pbVar20) {
    do {
      if ((*pbVar19 & 1) == 0) {
        if (pbVar19[8] != 1) goto LAB_008c3e64;
        if ((pbVar19[0xe] & 1) != 0) goto LAB_008c3c28;
        local_58 = pbVar19 + 4;
        lVar10 = FUN_008c52c0(0,&local_90,&local_90,&DAT_001f94c3,&local_58,&uStack_59);
        puVar11 = *(undefined2 **)(lVar10 + 0x30);
        if (puVar11 < *(undefined2 **)(lVar10 + 0x38)) {
          if (puVar11 == (undefined2 *)0x0) {
LAB_008c3e78:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *puVar11 = *(undefined2 *)(pbVar19 + 0xc);
          *(undefined2 **)(lVar10 + 0x30) = puVar11 + 1;
        }
        else {
          uVar12 = FUN_005dd418(lVar10 + 0x28,pbVar19 + 0xc);
          *(undefined8 *)(lVar10 + 0x30) = uVar12;
        }
      }
      else {
        if ((pbVar19[8] & 1) == 0) {
LAB_008c3e64:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                    );
        }
LAB_008c3c28:
        if ((byte ******)local_88 != (byte ******)0x0) {
          ppppppbVar13 = (byte ******)local_88;
          do {
            while (*(uint *)(ppppppbVar13 + 4) <= *(uint *)(pbVar19 + 4)) {
              if (*(uint *)(pbVar19 + 4) == *(uint *)(ppppppbVar13 + 4)) {
                if (ppppppbVar13 != &local_88) {
                  FUN_008c53cc(&local_90);
                }
                goto LAB_008c3bf4;
              }
              ppppppbVar13 = (byte ******)ppppppbVar13[1];
              if (ppppppbVar13 == (byte ******)0x0) goto LAB_008c3bf4;
            }
            ppppppbVar13 = (byte ******)*ppppppbVar13;
          } while (ppppppbVar13 != (byte ******)0x0);
        }
      }
LAB_008c3bf4:
      pbVar19 = pbVar19 + 0x10;
    } while (pbVar19 != pbVar20);
    if ((byte ******)local_90 != &local_88) {
      ppppppbVar13 = (byte ******)local_90;
LAB_008c3cd4:
      plVar14 = *(long **)(param_1 + 0x270);
      if (plVar14 != (long *)0x0) {
        do {
          if (*(uint *)(ppppppbVar13 + 4) < *(uint *)(plVar14 + 4)) {
            plVar14 = (long *)*plVar14;
          }
          else {
            if (*(uint *)(ppppppbVar13 + 4) == *(uint *)(plVar14 + 4)) goto LAB_008c3d08;
            plVar14 = (long *)plVar14[1];
          }
          if (plVar14 == (long *)0x0) break;
        } while( true );
      }
      goto LAB_008c3e8c;
    }
  }
LAB_008c3d74:
  if (local_78 != &local_70) {
    ppppbVar16 = (byte ****)local_78;
    do {
      plVar14 = *(long **)(param_1 + 0x270);
      if (plVar14 != (long *)0x0) {
        do {
          while (*(uint *)(plVar14 + 4) <= *(uint *)(ppppbVar16 + 4)) {
            if (*(uint *)(ppppbVar16 + 4) == *(uint *)(plVar14 + 4)) {
              if (plVar14 != (long *)(param_1 + 0x270)) {
                lVar10 = (long)ppppbVar16[6] - (long)ppppbVar16[5];
                pppbVar2 = (byte ***)0x0;
                if (lVar10 != 0) {
                  pppbVar2 = ppppbVar16[5];
                }
                (**(code **)(*(long *)plVar14[5] + 0x198))((long *)plVar14[5],pppbVar2,lVar10 >> 1);
              }
              goto LAB_008c3dec;
            }
            plVar14 = (long *)plVar14[1];
            if (plVar14 == (long *)0x0) goto LAB_008c3dec;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_008c3dec:
      ppppbVar6 = (byte ****)ppppbVar16[1];
      ppppbVar15 = ppppbVar16;
      if ((byte ****)ppppbVar16[1] == (byte ****)0x0) {
        do {
          ppppbVar16 = (byte ****)ppppbVar15[2];
          bVar7 = ppppbVar15 != (byte ****)*ppppbVar16;
          ppppbVar15 = ppppbVar16;
        } while (bVar7);
      }
      else {
        do {
          ppppbVar16 = ppppbVar6;
          ppppbVar6 = (byte ****)*ppppbVar16;
        } while ((byte ****)*ppppbVar16 != (byte ****)0x0);
      }
    } while (ppppbVar16 != (byte ****)&local_70);
  }
  local_58 = (byte *)&local_90;
  FUN_008c51d4(&local_58,local_88);
  local_90 = (byte *****)&local_78;
  FUN_008c51d4(&local_90,local_70);
  return;
LAB_008c3d08:
  if (plVar14 == (long *)(param_1 + 0x270)) {
LAB_008c3e8c:
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../call/rtp_video_sender.cc",0x3ec,"it != ssrc_to_rtp_module_.end()",
                 &DAT_001f5fa0);
  }
  uVar12 = (**(code **)(*(long *)plVar14[5] + 0x140))();
  pppppbVar4 = ppppppbVar13[6];
  for (pppppbVar21 = ppppppbVar13[5]; pppppbVar21 != pppppbVar4;
      pppppbVar21 = (byte *****)((long)pppppbVar21 + 2)) {
    FUN_00868f08(uVar12,*(undefined2 *)pppppbVar21);
  }
  ppppppbVar5 = (byte ******)ppppppbVar13[1];
  ppppppbVar18 = ppppppbVar13;
  if ((byte ******)ppppppbVar13[1] == (byte ******)0x0) {
    do {
      ppppppbVar13 = (byte ******)ppppppbVar18[2];
      bVar7 = ppppppbVar18 != (byte ******)*ppppppbVar13;
      ppppppbVar18 = ppppppbVar13;
    } while (bVar7);
  }
  else {
    do {
      ppppppbVar13 = ppppppbVar5;
      ppppppbVar5 = (byte ******)*ppppppbVar13;
    } while ((byte ******)*ppppppbVar13 != (byte ******)0x0);
  }
  if (ppppppbVar13 == &local_88) goto LAB_008c3d74;
  goto LAB_008c3cd4;
}


// ===== 008c3eac  FUN_008c3eac =====

void FUN_008c3eac(long *param_1,char *param_2)

{
  ulong uVar1;
  size_t __n;
  void *__dest;
  ulong uVar2;
  long lVar3;
  void *__src;
  ulong uVar4;
  
  uVar4 = param_1[1];
  if (uVar4 == param_1[2] * 0x40) {
    if (0x7ffffffffffffffe < uVar4) {
LAB_008c3f14:
                    /* WARNING: Subroutine does not return */
      FUN_00632a3c();
    }
    if (uVar4 < 0x3fffffffffffffff) {
      uVar2 = param_1[2] * 0x80;
      uVar1 = (uVar4 & 0x3fffffffffffffc0) + 0x40;
      if (uVar2 < uVar1 || uVar2 - uVar1 == 0) {
        uVar2 = uVar1;
      }
      if (uVar2 <= uVar4) goto LAB_008c3f74;
      if ((long)uVar2 < 0) goto LAB_008c3f14;
    }
    else {
      uVar2 = 0x7fffffffffffffff;
    }
    lVar3 = (uVar2 - 1 >> 6) + 1;
    __dest = operator_new(lVar3 * 8);
    __src = (void *)*param_1;
    __n = 0;
    if (uVar4 != 0) {
      __n = (uVar4 - 1 >> 3 & 0x1ffffffffffffff8) + 8;
    }
    memmove(__dest,__src,__n);
    *param_1 = (long)__dest;
    param_1[2] = lVar3;
    if (__src != (void *)0x0) {
      operator_delete(__src);
      uVar4 = param_1[1];
    }
  }
LAB_008c3f74:
  param_1[1] = uVar4 + 1;
  if (uVar4 != 0xffffffffffffffff) {
    lVar3 = *param_1;
    uVar2 = uVar4 >> 6;
    uVar4 = 1L << (uVar4 & 0x3f);
    if (*param_2 == '\x01') {
      uVar4 = *(ulong *)(lVar3 + uVar2 * 8) | uVar4;
    }
    else {
      uVar4 = *(ulong *)(lVar3 + uVar2 * 8) & (uVar4 ^ 0xffffffffffffffff);
    }
    *(ulong *)(lVar3 + uVar2 * 8) = uVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector_bool.h:317: libc++ Hardening assertion !empty() failed: vector<bool>::back() called on an empty vector\n"
            );
}


// ===== 008c3fe4  FUN_008c3fe4 =====

void FUN_008c3fe4(long param_1)

{
  FUN_008c3a98(param_1 + -0x18);
  return;
}


// ===== 008c3ff0  FUN_008c3ff0 =====

void FUN_008c3ff0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008c4008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x88) + 0x20))(*(long **)(param_1 + 0x88));
  return;
}


// ===== 008c400c  FUN_008c400c =====

int FUN_008c400c(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x58));
  if (0xe < param_3) {
    param_3 = 0xf;
  }
  FUN_005ec41c(param_1 + 0x1e0,param_2,param_2 + param_3 * 4);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x58));
  return iVar1;
}


// ===== 008c4068  FUN_008c4068 =====

void FUN_008c4068(void)

{
  return;
}


// ===== 008c4070  FUN_008c4070 =====

bool FUN_008c4070(ulong param_1,long param_2,long *param_3)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  int *****__dest;
  size_t __n;
  int *****pppppiVar6;
  int ****local_68;
  ulong local_60;
  undefined8 local_58;
  
  iVar4 = *(int *)(param_2 + 0xb4);
  (**(code **)(*param_3 + 0x10))(&local_68,param_3,"WebRTC-DisableUlpFecExperiment",0x1e);
  uVar5 = local_60;
  if (-1 < (long)local_58) {
    uVar5 = local_58 >> 0x38;
  }
  if (uVar5 < 7) {
    bVar2 = false;
  }
  else {
    pppppiVar6 = (int *****)local_68;
    if (-1 < (long)local_58) {
      pppppiVar6 = &local_68;
    }
    bVar2 = *(int *)pppppiVar6 == 0x62616e45 && *(int *)((long)pppppiVar6 + 3) == 0x64656c62;
  }
  if ((long)local_58 < 0) {
    operator_delete(local_68);
  }
  if ((bVar2 != false) && (uVar5 = FUN_00417e08(), (uVar5 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f4e98,"../../call/rtp_video_sender.cc",0x3f1,
                 "Experiment to disable sending ULPFEC is enabled.");
  }
  if ((param_1 & 1) != 0) {
    if ((-1 < *(int *)(param_2 + 0xb8)) && (uVar5 = FUN_00417e08(), (uVar5 & 1) == 0)) {
      FUN_00623bb0(&DAT_001f4e98,"../../call/rtp_video_sender.cc",0x429,
                   "Both FlexFEC and ULPFEC are configured. Disabling ULPFEC.");
    }
    bVar2 = true;
  }
  if ((iVar4 < 1) || (*(int *)(param_2 + 0xb8) < 0)) goto LAB_008c4334;
  __n = (size_t)*(char *)(param_2 + 0x8f);
  if ((long)__n < 0) {
    __n = *(ulong *)(param_2 + 0x80);
    if (0x7ffffffffffffff6 < __n) {
                    /* WARNING: Subroutine does not return */
      FUN_005d45ec();
    }
    pppppiVar6 = *(int ******)(param_2 + 0x78);
    if (0x16 < __n) goto LAB_008c41e4;
LAB_008c41b8:
    local_58 = CONCAT17((char)__n,(undefined7)local_58);
    __dest = &local_68;
  }
  else {
    pppppiVar6 = (int *****)(param_2 + 0x78);
    if (__n < 0x17) goto LAB_008c41b8;
LAB_008c41e4:
    uVar5 = (__n & 0x7ffffffffffffff8) + 8;
    uVar1 = 0x19;
    if (uVar5 != 0x18) {
      uVar1 = uVar5;
    }
    __dest = (int *****)operator_new(uVar1);
    local_58 = uVar1 | 0x8000000000000000;
    local_68 = (int ****)__dest;
    local_60 = __n;
  }
  if ((int *****)((long)__dest + __n) < __dest) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((__dest <= pppppiVar6) && (pppppiVar6 < (int *****)((long)__dest + __n))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(__dest,pppppiVar6,__n);
  *(undefined1 *)((long)__dest + __n) = 0;
  iVar4 = FUN_007b8cec(&local_68);
  if ((long)local_58 < 0) {
    operator_delete(local_68);
  }
  if (1 < iVar4 - 1U) {
    if (iVar4 == 0) {
      (**(code **)(*param_3 + 0x10))(&local_68,param_3,"WebRTC-GenericPictureId",0x17);
      uVar5 = local_60;
      if (-1 < (long)local_58) {
        uVar5 = local_58 >> 0x38;
      }
      if (uVar5 < 7) {
        bVar3 = false;
      }
      else {
        pppppiVar6 = (int *****)local_68;
        if (-1 < (long)local_58) {
          pppppiVar6 = &local_68;
        }
        bVar3 = *(int *)pppppiVar6 == 0x62616e45 && *(int *)((long)pppppiVar6 + 3) == 0x64656c62;
      }
      if ((long)local_58 < 0) {
        operator_delete(local_68);
      }
      if (bVar3) goto LAB_008c4334;
    }
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../call/rtp_video_sender.cc",0x48a,
                   "Transmitting payload type without picture ID using NACK+ULPFEC is a waste of bandwidth since ULPFEC packets also have to be retransmitted. Disabling ULPFEC."
                  );
    }
    bVar2 = true;
  }
LAB_008c4334:
  if ((int)(*(uint *)(param_2 + 0xbc) ^ *(uint *)(param_2 + 0xb8)) < 0) {
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../call/rtp_video_sender.cc",0x4d2,
                   "Only RED or only ULPFEC enabled, but not both. Disabling both.");
    }
    bVar2 = true;
  }
  return bVar2;
}


// ===== 008c43bc  FUN_008c43bc =====

long FUN_008c43bc(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  void *pvVar10;
  undefined8 *puVar11;
  long lVar12;
  void *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  void *local_48;
  
  lVar12 = param_1[1] - *param_1;
  uVar4 = (lVar12 >> 3) * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar4) {
    FUN_008c483c();
LAB_008c459c:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  local_60 = (void *)0x0;
  lVar6 = param_1[2] - *param_1 >> 3;
  uVar8 = lVar6 * 0x5555555555555556;
  if (uVar8 < uVar4 || uVar8 - uVar4 == 0) {
    uVar8 = uVar4;
  }
  if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
    uVar8 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar8 != 0) {
    if (0xaaaaaaaaaaaaaaa < uVar8) goto LAB_008c459c;
    local_60 = operator_new(uVar8 * 0x18);
  }
  local_48 = (void *)((long)local_60 + uVar8 * 0x18);
  local_58 = (undefined8 *)((long)local_60 + lVar12);
  if (local_58 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar5 = *param_2;
  *param_2 = 0;
  uVar7 = *param_3;
  *param_3 = 0;
  uVar9 = *param_4;
  *param_4 = 0;
  *local_58 = uVar5;
  local_58[1] = uVar7;
  local_58[2] = uVar9;
  local_50 = local_58 + 3;
  FUN_008c45a0(param_1,&local_60);
  puVar2 = local_58;
  lVar12 = param_1[1];
  puVar1 = local_50;
  while( true ) {
    if (puVar2 == puVar1) {
      if (local_60 != (void *)0x0) {
        local_50 = puVar1;
        operator_delete(local_60);
      }
      return lVar12;
    }
    puVar11 = puVar1 + -3;
    if (puVar11 == (undefined8 *)0x0) break;
    plVar3 = (long *)puVar1[-1];
    puVar1[-1] = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = (long *)puVar1[-2];
    puVar1[-2] = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))();
    }
    pvVar10 = (void *)*puVar11;
    *puVar11 = 0;
    puVar1 = puVar11;
    if (pvVar10 != (void *)0x0) {
      FUN_0086425c(pvVar10);
      operator_delete(pvVar10);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008c45a0  FUN_008c45a0 =====

void FUN_008c45a0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  void *pvVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  puVar19 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  lVar7 = param_2[1];
  lVar3 = (long)puVar2 - (long)puVar19;
  puVar20 = (undefined8 *)(lVar7 - ((long)puVar2 - (long)puVar19));
  if (lVar3 != 0) {
    uVar9 = lVar3 * 0xaaaaaaaaaaaaaab - 8U >> 3;
    uVar16 = (ulong)(lVar7 * -0xaaaaaaaaaaaaaab + (lVar3 >> 3) * 0x5555555555555558) >> 3;
    if (uVar16 <= uVar9) {
      uVar9 = uVar16;
    }
    puVar10 = puVar19;
    puVar12 = puVar20;
    if (0x17 < uVar9) {
      uVar17 = (ulong)((lVar3 + -0x18) * 0xaaaaaaaaaaaaaab) >> 3;
      uVar1 = uVar17;
      if (uVar16 <= uVar17) {
        uVar1 = uVar16;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar1;
      bVar5 = SUB168(auVar4 * ZEXT816(0x18),8) == 0;
      if (((((((int)puVar2 - (int)puVar19 | -(int)lVar7) & 7U) == 0) &&
           (puVar19 <= puVar19 + uVar1 * 3)) && (bVar5)) &&
         ((puVar20 <= puVar20 + uVar1 * 3 && (bVar5)))) {
        if (uVar16 <= uVar17) {
          uVar17 = uVar16;
        }
        if (((undefined8 *)(lVar7 + ((lVar3 >> 3) * 0x5555555555555555 + uVar17) * 0x18 + 0x18) <=
             puVar19) || (puVar19 + uVar17 * 3 + 3 <= puVar20)) {
          uVar9 = uVar9 & 0x1ffffffffffffffe;
          puVar10 = puVar19 + uVar9 * 3;
          puVar12 = puVar20 + uVar9 * 3;
          puVar14 = puVar19;
          puVar15 = puVar20;
          do {
            uVar11 = puVar14[1];
            uVar8 = *puVar14;
            uVar21 = puVar14[3];
            uVar13 = puVar14[2];
            uVar9 = uVar9 - 2;
            uVar23 = puVar14[5];
            uVar22 = puVar14[4];
            puVar14[1] = 0;
            *puVar14 = 0;
            puVar14[3] = 0;
            puVar14[2] = 0;
            puVar14[5] = 0;
            puVar14[4] = 0;
            puVar14 = puVar14 + 6;
            puVar15[3] = uVar21;
            puVar15[2] = uVar13;
            puVar15[5] = uVar23;
            puVar15[4] = uVar22;
            puVar15[1] = uVar11;
            *puVar15 = uVar8;
            puVar15 = puVar15 + 6;
          } while (uVar9 != 0);
        }
      }
    }
    do {
      if (puVar12 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar8 = *puVar10;
      *puVar10 = 0;
      *puVar12 = uVar8;
      uVar8 = puVar10[1];
      puVar10[1] = 0;
      puVar12[1] = uVar8;
      uVar8 = puVar10[2];
      puVar10[2] = 0;
      puVar10 = puVar10 + 3;
      puVar12[2] = uVar8;
      puVar12 = puVar12 + 3;
    } while (puVar10 != puVar2);
    do {
      if (puVar19 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar6 = (long *)puVar19[2];
      puVar19[2] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar6 = (long *)puVar19[1];
      puVar19[1] = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))();
      }
      pvVar18 = (void *)*puVar19;
      *puVar19 = 0;
      if (pvVar18 != (void *)0x0) {
        FUN_0086425c(pvVar18);
        operator_delete(pvVar18);
      }
      puVar19 = puVar19 + 3;
    } while (puVar19 != puVar2);
  }
  param_2[1] = puVar20;
  uVar8 = *param_1;
  uVar13 = param_1[2];
  param_1[1] = uVar8;
  uVar21 = param_2[1];
  uVar11 = param_2[3];
  param_1[1] = param_2[2];
  *param_1 = uVar21;
  param_1[2] = uVar11;
  param_2[2] = uVar8;
  param_2[3] = uVar13;
  *param_2 = uVar8;
  param_2[1] = uVar8;
  return;
}


// ===== 008c483c  FUN_008c483c =====

void FUN_008c483c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 008c4854  FUN_008c4854 =====

void FUN_008c4854(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 008c486c  FUN_008c486c =====

long FUN_008c486c(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  long lVar9;
  
  lVar6 = param_1[1] - *param_1;
  uVar3 = (lVar6 >> 3) * 0x1b810ecf56be69c9 + 1;
  if (uVar3 < 0x43b3d5af9a7240) {
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar4 * 0x37021d9ead7cd392;
    if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
      uVar5 = uVar3;
    }
    if (0x21d9ead7cd391e < (ulong)(lVar4 * 0x1b810ecf56be69c9)) {
      uVar5 = 0x43b3d5af9a723f;
    }
    if (uVar5 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0x43b3d5af9a723f < uVar5) goto LAB_008c4a14;
      pvVar2 = operator_new(uVar5 * 0x3c8);
      lVar6 = (long)pvVar2 + lVar6;
    }
    if (lVar6 == 0) {
LAB_008c49e8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_008d57ac(lVar6,param_2);
    pvVar7 = (void *)*param_1;
    pvVar1 = (void *)param_1[1];
    lVar4 = (long)pvVar7 + (lVar6 - (long)pvVar1);
    pvVar8 = pvVar7;
    lVar9 = lVar4;
    if (pvVar1 != pvVar7) {
      do {
        if (lVar9 == 0) goto LAB_008c49e8;
        FUN_008d57ac(lVar9,pvVar8);
        pvVar8 = (void *)((long)pvVar8 + 0x3c8);
        lVar9 = lVar9 + 0x3c8;
      } while (pvVar8 != pvVar1);
      do {
        if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_008d58c4(pvVar7);
        pvVar7 = (void *)((long)pvVar7 + 0x3c8);
      } while (pvVar7 != pvVar1);
      pvVar7 = (void *)*param_1;
    }
    *param_1 = lVar4;
    param_1[1] = lVar6 + 0x3c8;
    param_1[2] = (long)((long)pvVar2 + uVar5 * 0x3c8);
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
    return lVar6 + 0x3c8;
  }
  FUN_008c4a18();
LAB_008c4a14:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 008c4a18  FUN_008c4a18 =====

void FUN_008c4a18(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 008c4a30  FUN_008c4a30 =====

void FUN_008c4a30(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 *puVar5;
  
  puVar1 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  while( true ) {
    if (puVar1 == puVar2) {
      param_1[1] = puVar1;
      return;
    }
    puVar5 = puVar2 + -3;
    if (puVar5 == (undefined8 *)0x0) break;
    plVar3 = (long *)puVar2[-1];
    puVar2[-1] = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = (long *)puVar2[-2];
    puVar2[-2] = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))();
    }
    pvVar4 = (void *)*puVar5;
    *puVar5 = 0;
    puVar2 = puVar5;
    if (pvVar4 != (void *)0x0) {
      FUN_0086425c(pvVar4);
      operator_delete(pvVar4);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008c4aec  FUN_008c4aec =====

void FUN_008c4aec(ulong *param_1,ulong *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar4 = *param_2;
  uVar5 = uVar4 >> 1;
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x8c4bfc);
    (*pcVar2)();
  }
  if ((uVar4 & 1) == 0) {
    puVar3 = param_1 + 1;
    puVar6 = param_2 + 1;
  }
  else {
    if (0x924924924924925 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    uVar4 = uVar5;
    if (uVar5 < 9) {
      uVar4 = 8;
    }
    puVar3 = (ulong *)operator_new(uVar4 * 0x38);
    param_1[1] = (ulong)puVar3;
    param_1[2] = uVar4;
    puVar6 = (ulong *)param_2[1];
  }
  do {
    if (puVar3 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar4 = *puVar6;
    puVar3[1] = 0;
    *puVar3 = uVar4;
    uVar4 = puVar6[1];
    if (1 < uVar4) {
      if ((uVar4 & 1) == 0) {
        puVar3[1] = uVar4;
        uVar8 = puVar6[2];
        uVar7 = puVar6[5];
        uVar4 = puVar6[4];
        puVar3[3] = puVar6[3];
        puVar3[2] = uVar8;
        puVar3[5] = uVar7;
        puVar3[4] = uVar4;
      }
      else {
        FUN_008c4c00();
      }
    }
    puVar1 = (undefined1 *)((long)puVar6 + 0x34);
    uVar4 = puVar6[6];
    uVar5 = uVar5 - 1;
    puVar6 = puVar6 + 7;
    *(undefined1 *)((long)puVar3 + 0x34) = *puVar1;
    *(int *)(puVar3 + 6) = (int)uVar4;
    puVar3 = puVar3 + 7;
  } while (uVar5 != 0);
  *param_1 = *param_2;
  return;
}


// ===== 008c4c00  FUN_008c4c00 =====

void FUN_008c4c00(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong *__dest;
  ulong *__src;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  uVar3 = uVar2 >> 1;
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x8c4c84);
    (*pcVar1)();
  }
  if ((uVar2 & 1) == 0) {
    __dest = param_1 + 1;
    __src = param_2 + 1;
  }
  else {
    if (uVar2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    uVar2 = uVar3;
    if (uVar3 < 9) {
      uVar2 = 8;
    }
    __dest = (ulong *)operator_new(uVar2 << 3);
    param_1[1] = (ulong)__dest;
    param_1[2] = uVar2;
    __src = (ulong *)param_2[1];
  }
  memcpy(__dest,__src,uVar3 << 3);
  *param_1 = *param_2;
  return;
}


// ===== 008c4c88  FUN_008c4c88 =====

void FUN_008c4c88(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  puVar1 = param_1 + 1;
  uVar2 = *param_1;
  if ((uVar2 & 1) != 0) {
    puVar1 = (ulong *)*puVar1;
  }
  uVar3 = uVar2 >> 1;
  if (uVar3 != 0) {
    puVar1 = puVar1 + uVar3 * 7;
    do {
      if (puVar1 + -7 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if ((puVar1[-6] & 1) != 0) {
        operator_delete((void *)puVar1[-5]);
      }
      uVar3 = uVar3 - 1;
      puVar1 = puVar1 + -7;
    } while (uVar3 != 0);
    uVar2 = *param_1;
  }
  if ((uVar2 & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[1]);
  return;
}


// ===== 008c4d4c  FUN_008c4d4c =====

void FUN_008c4d4c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_008c4d4c(param_1,*param_2);
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


// ===== 008c4dc0  FUN_008c4dc0 =====

void FUN_008c4dc0(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  param_1 = (undefined8 *)*param_1;
  plVar6 = (long *)*param_1;
  uVar5 = (**(code **)(*plVar6 + 0x38))(plVar6);
  if ((uVar5 & 1) != 0) {
    if (param_1[2] != (plVar6[0x14] - plVar6[0x13] >> 3) * -0x5555555555555555) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../call/rtp_video_sender.cc",699,"sending.size() == rtp_streams_.size()",
                   &DAT_001fb920);
    }
    if (param_1[2] != 0) {
      lVar8 = 0;
      uVar5 = 0;
      do {
        if ((ulong)((plVar6[0x14] - plVar6[0x13] >> 3) * -0x5555555555555555) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                    );
        }
        plVar7 = *(long **)(plVar6[0x13] + lVar8);
        uVar1 = *(ulong *)(param_1[1] + (uVar5 >> 6) * 8) & 1L << (uVar5 & 0x3f);
        bVar4 = (**(code **)(*plVar7 + 0x120))(plVar7);
        if ((uVar1 != 0) != (bool)(bVar4 & 1)) {
          bVar3 = uVar1 != 0;
          lVar2 = 0x28;
          if (!bVar3) {
            lVar2 = 0x30;
          }
          (**(code **)(*plVar7 + 0x108))(plVar7,bVar3);
          (**(code **)(*plVar7 + 0x118))(plVar7,bVar3);
          (**(code **)(*(long *)plVar6[0x3b] + lVar2))((long *)plVar6[0x3b],plVar7);
        }
        uVar5 = uVar5 + 1;
        lVar8 = lVar8 + 0x18;
      } while (uVar5 < (ulong)param_1[2]);
    }
  }
  return;
}


// ===== 008c4f48  FUN_008c4f48 =====

void FUN_008c4f48(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x8c4fbc);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      if (*(void **)((long)pvVar2 + 8) != (void *)0x0) {
        operator_delete(*(void **)((long)pvVar2 + 8));
      }
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 008c4fbc  FUN_008c4fbc =====

undefined1  [16]
FUN_008c4fbc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  uint *puVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  puVar6 = (uint *)*param_5;
  plVar4 = param_2 + 1;
  plVar7 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    uVar1 = *puVar6;
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, uVar1 < *(uint *)(plVar3 + 4)) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_008c5024;
      }
      if (uVar1 == *(uint *)(plVar3 + 4)) {
        uVar5 = 0;
        goto LAB_008c5094;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_008c5024:
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
  *(uint *)(plVar3 + 4) = uVar1;
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
LAB_008c5094:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 008c50c4  FUN_008c50c4 =====

undefined1  [16]
FUN_008c50c4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  uint *puVar7;
  undefined1 auVar8 [16];
  
  puVar7 = (uint *)*param_5;
  plVar4 = param_2 + 1;
  plVar6 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    uVar1 = *puVar7;
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, uVar1 < *(uint *)(plVar3 + 4)) {
        plVar2 = (long *)*plVar3;
        plVar6 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_008c512c;
      }
      if (uVar1 == *(uint *)(plVar3 + 4)) {
        uVar5 = 0;
        goto LAB_008c51a4;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar6 = plVar3 + 1;
  }
LAB_008c512c:
  plVar3 = (long *)operator_new(0x40);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar1 = *puVar7;
  plVar3[6] = 0;
  plVar3[7] = 0;
  plVar3[5] = 0xffff;
  *(uint *)(plVar3 + 4) = uVar1;
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = (long)plVar4;
  *plVar6 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar4 = (long *)*plVar6;
  }
  FUN_005d5b94(param_2[1],plVar4);
  uVar5 = 1;
  param_2[2] = param_2[2] + 1;
LAB_008c51a4:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 008c51d4  FUN_008c51d4 =====

void FUN_008c51d4(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_008c51d4(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
LAB_008c52ac:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar1 = (void *)param_2[5];
      puVar5 = (undefined8 *)param_2[1];
      if (pvVar1 != (void *)0x0) {
        pvVar2 = (void *)param_2[6];
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
          if (pvVar2 == (void *)0x0) goto LAB_008c52ac;
        }
        param_2[6] = pvVar1;
        operator_delete(pvVar1);
      }
      operator_delete(param_2);
      param_2 = puVar5;
    } while (puVar5 != (undefined8 *)0x0);
  }
  return;
}


// ===== 008c52c0  FUN_008c52c0 =====

undefined1  [16]
FUN_008c52c0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  uint *puVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  puVar6 = (uint *)*param_5;
  plVar4 = param_2 + 1;
  plVar7 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    uVar1 = *puVar6;
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, uVar1 < *(uint *)(plVar3 + 4)) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_008c5328;
      }
      if (uVar1 == *(uint *)(plVar3 + 4)) {
        uVar5 = 0;
        goto LAB_008c539c;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_008c5328:
  plVar3 = (long *)operator_new(0x40);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar1 = *puVar6;
  plVar3[6] = 0;
  plVar3[7] = 0;
  plVar3[5] = 0;
  *(uint *)(plVar3 + 4) = uVar1;
  *plVar3 = 0;
  plVar3[1] = 0;
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
LAB_008c539c:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 008c53cc  FUN_008c53cc =====

undefined8 * FUN_008c53cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar1 = (undefined8 *)param_2[1];
  puVar7 = param_2;
  if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
    do {
      puVar8 = (undefined8 *)puVar7[2];
      bVar2 = puVar7 != (undefined8 *)*puVar8;
      puVar7 = puVar8;
    } while (bVar2);
  }
  else {
    do {
      puVar8 = puVar1;
      puVar1 = (undefined8 *)*puVar8;
    } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
  }
  if ((undefined8 *)*param_1 == param_2) {
    *param_1 = puVar8;
  }
  param_1[2] = param_1[2] + -1;
  FUN_005d5d48(param_1[1],param_2);
  if (param_2 != (undefined8 *)0xffffffffffffffe0) {
    pvVar3 = (void *)param_2[5];
    if (pvVar3 == (void *)0x0) {
LAB_008c54c8:
      operator_delete(param_2);
      return puVar8;
    }
    pvVar4 = (void *)param_2[6];
    uVar6 = (ulong)((long)pvVar4 + ((long)pvVar4 << 0x3f) + -2) >> 1;
    uVar5 = (ulong)(((long)pvVar3 - (long)pvVar4 << 0x3f) - ((long)pvVar3 - (long)pvVar4)) >> 1;
    if (uVar6 <= uVar5) {
      uVar5 = uVar6;
    }
    if ((1 < uVar5) && ((((int)pvVar3 - (uint)pvVar4 | (uint)pvVar4) & 1) == 0)) {
      uVar5 = uVar5 & 0x7ffffffffffffffe;
      pvVar4 = (void *)((long)pvVar4 + uVar5 * -2);
      do {
        uVar5 = uVar5 - 2;
      } while (uVar5 != 0);
    }
    do {
      if (pvVar4 == pvVar3) {
        param_2[6] = pvVar3;
        operator_delete(pvVar3);
        goto LAB_008c54c8;
      }
      pvVar4 = (void *)((long)pvVar4 + -2);
    } while (pvVar4 != (void *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008c54e8  FUN_008c54e8 =====

void FUN_008c54e8(undefined8 *param_1,long *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *local_38;
  
  *param_1 = &PTR_FUN_00d3c8f8;
  lVar2 = *param_2;
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2 + 8);
  }
  lVar3 = param_2[4];
  lVar2 = param_2[3];
  lVar5 = param_2[2];
  lVar4 = param_2[1];
  *(undefined4 *)(param_1 + 6) = param_3;
  *(undefined4 *)((long)param_1 + 0x34) = param_4;
  param_1[3] = lVar5;
  param_1[2] = lVar4;
  param_1[5] = lVar3;
  param_1[4] = lVar2;
  FUN_00660fac(param_1 + 7);
  uVar1 = FUN_0084be04(0);
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[9] = uVar1;
  param_1[10] = param_1 + 10;
  param_1[0xb] = param_1 + 10;
  param_1[0xc] = 0;
  param_1[0x28] = param_1 + 0x28;
  param_1[0x29] = param_1 + 0x28;
  uVar1 = DAT_001f5170;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = uVar1;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_38);
  pthread_mutex_init((pthread_mutex_t *)((long)param_1 + 0x17c),(pthread_mutexattr_t *)&local_38);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_38);
  *(undefined1 *)((long)param_1 + 0x1a4) = 0;
  *(undefined1 *)((long)param_1 + 0x1bc) = 0;
  FUN_008531f8(param_1 + 0x38,1000000);
  return;
}


// ===== 008c55e0  FUN_008c55e0 =====

void FUN_008c55e0(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *local_18;
  
  *param_1 = &PTR_FUN_00d3c8f8;
  lVar2 = *param_2;
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2 + 8);
  }
  lVar3 = param_2[4];
  lVar2 = param_2[3];
  lVar5 = param_2[2];
  lVar4 = param_2[1];
  param_1[6] = 0;
  param_1[3] = lVar5;
  param_1[2] = lVar4;
  param_1[5] = lVar3;
  param_1[4] = lVar2;
  FUN_00660fac(param_1 + 7);
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[9] = param_3;
  param_1[10] = param_1 + 10;
  param_1[0xb] = param_1 + 10;
  param_1[0xc] = 0;
  param_1[0x28] = param_1 + 0x28;
  param_1[0x29] = param_1 + 0x28;
  uVar1 = DAT_001f5170;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = uVar1;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  local_18 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_18);
  pthread_mutex_init((pthread_mutex_t *)((long)param_1 + 0x17c),(pthread_mutexattr_t *)&local_18);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_18);
  *(undefined1 *)((long)param_1 + 0x1a4) = 0;
  *(undefined1 *)((long)param_1 + 0x1bc) = 0;
  FUN_008531f8(param_1 + 0x38,1000000);
  return;
}


// ===== 008c56c4  FUN_008c56c4 =====

void FUN_008c56c4(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  void *pvVar4;
  
  *param_1 = &PTR_FUN_00d3c8f8;
  FUN_007de938(param_1 + 0x38);
  pthread_mutex_destroy((pthread_mutex_t *)((long)param_1 + 0x17c));
  if (param_1[0x2a] != 0) {
    plVar3 = (long *)param_1[0x29];
    plVar2 = *(long **)(param_1[0x28] + 8);
    *(long **)(*plVar3 + 8) = plVar2;
    *plVar2 = *plVar3;
    param_1[0x2a] = 0;
    while (plVar3 != param_1 + 0x28) {
      if ((plVar3 == (long *)0xfffffffffffffff0) || (plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar2 = (long *)plVar3[1];
      operator_delete(plVar3);
      plVar3 = plVar2;
    }
  }
  if (*(char *)(param_1 + 0x27) == '\x01') {
    FUN_007dc854(param_1 + 0xd);
  }
  FUN_008c5ed0(param_1 + 10);
  pvVar4 = (void *)param_1[9];
  param_1[9] = 0;
  if (pvVar4 != (void *)0x0) {
    FUN_0084bd28(pvVar4);
    operator_delete(pvVar4);
  }
  plVar3 = (long *)param_1[1];
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x008c57c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 8))(plVar3);
    return;
  }
  return;
}


// ===== 008c57ec  FUN_008c57ec =====

void FUN_008c57ec(void *param_1)

{
  FUN_008c56c4();
  operator_delete(param_1);
  return;
}


// ===== 008c581c  FUN_008c581c =====

int FUN_008c581c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x17c));
  if (*(char *)(param_1 + 0x1bc) == '\x01') {
    *(undefined1 *)(param_1 + 0x1bc) = 0;
  }
  uVar1 = *(undefined4 *)(param_2 + 1);
  uVar4 = *param_3;
  uVar2 = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(param_1 + 0x1a4) = *param_2;
  *(undefined4 *)(param_1 + 0x1ac) = uVar1;
  *(undefined8 *)(param_1 + 0x1b0) = uVar4;
  *(undefined4 *)(param_1 + 0x1b8) = uVar2;
  *(undefined1 *)(param_1 + 0x1bc) = 1;
  iVar3 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x17c));
  return iVar3;
}


// ===== 008c5898  FUN_008c5898 =====

ulong FUN_008c5898(long param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  void *pvVar9;
  void *pvVar10;
  long *plVar11;
  ulong uVar12;
  undefined4 uVar13;
  long lVar14;
  ulong uVar15;
  void *pvVar16;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x17c));
  if (*(char *)(param_1 + 0x1bc) == '\x01') {
    *(undefined1 *)(param_1 + 0x1bc) = 0;
    *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x1b4);
    lVar14 = 0x16c;
    if (*(char *)(param_1 + 0x178) == '\0') {
      lVar14 = 0x160;
    }
    *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_1 + 0x1ac);
    *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x1a4);
    uVar13 = 4;
    if (*(int *)(param_1 + lVar14) < 0x51) {
      uVar13 = 1;
    }
    *(undefined4 *)(param_1 + 0x15c) = uVar13;
  }
  uVar7 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x17c));
  uVar12 = (ulong)uVar7;
  if (param_2[0xb9] == '\x01') {
    *(undefined1 *)(param_1 + 0x178) = 1;
  }
  cVar4 = *param_2;
  if (*(ulong *)(param_1 + 0x60) < 0x30) {
    pvVar9 = operator_new(0x28);
    FUN_0084bae8();
    FUN_007b53e4(&local_58,param_2 + 0x58);
    uVar5 = local_58;
    pvVar16 = *(void **)((long)pvVar9 + 8);
    local_58 = 0;
    *(undefined8 *)((long)pvVar9 + 8) = uVar5;
    if ((pvVar16 != (void *)0x0) &&
       (iVar8 = FUN_00d0f7a0(0xffffffff,(long)pvVar16 + 0x18), iVar8 == 1)) {
      pvVar10 = *(void **)((long)pvVar16 + 0x10);
      *(undefined8 *)((long)pvVar16 + 0x10) = 0;
      if (pvVar10 != (void *)0x0) {
        operator_delete__(pvVar10);
      }
      operator_delete(pvVar16);
    }
    uVar6 = uStack_48;
    uVar5 = local_50;
    local_50 = 0;
    uStack_48 = 0;
    *(undefined8 *)((long)pvVar9 + 0x18) = uVar6;
    *(undefined8 *)((long)pvVar9 + 0x10) = uVar5;
    FUN_007b5554(&local_58);
    plVar11 = (long *)operator_new(0x18);
    if ((plVar11 == (long *)0x0) || (plVar11 == (long *)0xfffffffffffffff0)) {
LAB_008c5b0c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    lVar14 = *(long *)(param_1 + 0x50);
    plVar11[1] = param_1 + 0x50;
    plVar11[2] = (long)pvVar9;
    *plVar11 = lVar14;
    *(long **)(lVar14 + 8) = plVar11;
    *(long **)(param_1 + 0x50) = plVar11;
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 1;
    if (*(char *)(param_1 + 0x138) == '\x01') {
      uVar12 = FUN_007dc7b0(param_1 + 0x68,param_2);
    }
    else {
      if (param_1 == -0x68) goto LAB_008c5b0c;
      uVar12 = FUN_007dc744(param_1 + 0x68,param_2);
      *(undefined1 *)(param_1 + 0x138) = 1;
    }
  }
  if (cVar4 == '\0') {
    return uVar12;
  }
  lVar14 = 0x16c;
  if (*(char *)(param_1 + 0x178) == '\0') {
    lVar14 = 0x160;
  }
  puVar1 = (undefined4 *)(param_1 + lVar14);
  uVar13 = *puVar1;
  iVar2 = puVar1[1];
  iVar8 = *(int *)(param_1 + 0x158) + 1;
  uVar3 = puVar1[2];
  *(int *)(param_1 + 0x158) = iVar8;
  if (iVar8 < iVar2) {
    uVar12 = FUN_0084c5c4(*(undefined4 *)(param_1 + 0x60),uVar13);
    uVar15 = *(ulong *)(param_1 + 0x60);
    lVar14 = 0x16c;
    if (*(char *)(param_1 + 0x178) == '\0') {
      lVar14 = 0x160;
    }
    iVar8 = 0;
    if (uVar15 != 0) {
      iVar8 = (int)((ulong)(long)((int)uVar12 << 8) / uVar15);
    }
    if (0x31 < iVar8 - *(int *)(param_1 + lVar14)) {
      return uVar12;
    }
    iVar8 = *(int *)(param_1 + 0x15c);
    if (2.0 <= (float)uVar15 / (float)*(int *)(param_1 + 0x158)) {
      iVar8 = iVar8 + 1;
    }
    if ((int)uVar15 < iVar8) {
      return uVar12;
    }
  }
  uVar12 = FUN_0084c008(*(undefined8 *)(param_1 + 0x48),param_1 + 0x50,uVar13,0,0,uVar3,
                        param_1 + 0x140);
  if (*(long *)(param_1 + 0x150) == 0) {
    uVar12 = FUN_008c5b20(param_1);
  }
  return uVar12;
}


// ===== 008c5b20  FUN_008c5b20 =====

void FUN_008c5b20(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  FUN_008c5ed0(param_1 + 0x50);
  if (*(char *)(param_1 + 0x138) == '\x01') {
    FUN_007dc854(param_1 + 0x68);
    *(undefined1 *)(param_1 + 0x138) = 0;
  }
  if (*(long *)(param_1 + 0x150) != 0) {
    plVar1 = *(long **)(param_1 + 0x148);
    plVar2 = *(long **)(*(long *)(param_1 + 0x140) + 8);
    *(long **)(*plVar1 + 8) = plVar2;
    *plVar2 = *plVar1;
    *(undefined8 *)(param_1 + 0x150) = 0;
    while (plVar1 != (long *)(param_1 + 0x140)) {
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
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined1 *)(param_1 + 0x178) = 0;
  return;
}


// ===== 008c5bdc  FUN_008c5bdc =====

void FUN_008c5bdc(long param_1)

{
  FUN_0084c5b4(*(undefined8 *)(param_1 + 0x48));
  return;
}


// ===== 008c5be8  FUN_008c5be8 =====

ulong FUN_008c5be8(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  void *pvVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 *local_68;
  
  if (*(long *)(param_2 + 0x150) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    if ((*(byte *)(param_2 + 0x138) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../modules/rtp_rtcp/source/ulpfec_generator.cc",0xd4,
                   "last_media_packet_.has_value()",&DAT_001f5fa0);
    }
    FUN_007db738(param_2 + 0x68,0);
    uVar9 = *(ulong *)(param_2 + 0x150);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    if (uVar9 != 0) {
      if (uVar9 >> 0x3d != 0) {
        lVar11 = FUN_0086a414();
        pthread_mutex_lock((pthread_mutex_t *)(lVar11 + 0x17c));
        uVar8 = (**(code **)(**(long **)(lVar11 + 0x18) + 0x10))();
        auVar13 = FUN_00853260(lVar11 + 0x1c0,uVar8);
        uVar9 = auVar13._0_8_;
        if ((auVar13 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
          uVar9 = 0;
        }
        pthread_mutex_unlock((pthread_mutex_t *)(lVar11 + 0x17c));
        return uVar9;
      }
      pvVar5 = operator_new(uVar9 * 8);
      *param_1 = pvVar5;
      param_1[1] = pvVar5;
      param_1[2] = (void *)((long)pvVar5 + uVar9 * 8);
    }
    lVar11 = *(long *)(param_2 + 0x148);
    if (lVar11 == param_2 + 0x140) {
      lVar10 = 0;
    }
    else {
      lVar10 = 0;
      do {
        lVar12 = *(long *)(lVar11 + 0x10);
        local_68 = &DAT_aaaaaaaaaaaaaaaa;
        if ((*(byte *)(param_2 + 0x138) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                    );
        }
        puVar6 = (undefined1 *)operator_new(0xd0);
        FUN_007dc744(puVar6,param_2 + 0x68);
        local_68 = puVar6;
        FUN_007daa40(puVar6,*(undefined4 *)(param_2 + 0x30));
        FUN_007da930(local_68,0);
        puVar6 = (undefined1 *)FUN_007db738(local_68,*(long *)(lVar12 + 0x18) + 1);
        *puVar6 = (char)*(undefined4 *)(param_2 + 0x34);
        if (*(long *)(lVar12 + 8) == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          pvVar5 = (void *)(*(long *)(*(long *)(lVar12 + 8) + 0x10) + *(long *)(lVar12 + 0x10));
        }
        memcpy(puVar6 + 1,pvVar5,*(size_t *)(lVar12 + 0x18));
        lVar12 = *(long *)(local_68 + 0x10);
        lVar2 = *(long *)(local_68 + 0x18);
        bVar3 = local_68[2];
        FUN_007dc8a8(local_68,3);
        puVar6 = local_68;
        local_68[0xa8] = 0;
        local_68[0xbb] = 1;
        local_68[0xba] = 0;
        puVar1 = (undefined8 *)param_1[1];
        if (puVar1 < (undefined8 *)param_1[2]) {
          if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          local_68 = (undefined1 *)0x0;
          puVar7 = puVar1 + 1;
          *puVar1 = puVar6;
        }
        else {
          puVar7 = (undefined8 *)FUN_0086a31c(param_1,&local_68);
        }
        puVar6 = local_68;
        param_1[1] = puVar7;
        local_68 = (undefined1 *)0x0;
        if (puVar6 != (undefined1 *)0x0) {
          FUN_007dc854(puVar6);
          operator_delete(puVar6);
        }
        lVar11 = *(long *)(lVar11 + 8);
        lVar10 = lVar12 + lVar10 + lVar2 + (ulong)bVar3;
      } while (lVar11 != param_2 + 0x140);
    }
    FUN_008c5b20(param_2);
    pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x17c));
    uVar8 = (**(code **)(**(long **)(param_2 + 0x18) + 0x10))();
    FUN_008532e0(param_2 + 0x1c0,lVar10,uVar8);
    uVar4 = pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x17c));
    param_2 = (ulong)uVar4;
  }
  return param_2;
}


// ===== 008c5e4c  FUN_008c5e4c =====

undefined8 FUN_008c5e4c(long param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x17c));
  uVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  auVar2 = FUN_00853260(param_1 + 0x1c0,uVar1);
  uVar1 = auVar2._0_8_;
  if ((auVar2 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    uVar1 = 0;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x17c));
  return uVar1;
}


// ===== 008c5ea8  FUN_008c5ea8 =====

undefined8 FUN_008c5ea8(void)

{
  return 1;
}


// ===== 008c5eb4  FUN_008c5eb4 =====

undefined8 FUN_008c5eb4(void)

{
  return 0;
}


// ===== 008c5ec0  FUN_008c5ec0 =====

void FUN_008c5ec0(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x28] = 0;
  return;
}


// ===== 008c5ed0  FUN_008c5ed0 =====

void FUN_008c5ed0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar3 = *(long **)(*param_1 + 8);
    *(long **)(*plVar1 + 8) = plVar3;
    *plVar3 = *plVar1;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar3 = plVar1 + 2;
      if (plVar3 == (long *)0x0) {
LAB_008c5f68:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar2 = (long *)*plVar3;
      plVar4 = (long *)plVar1[1];
      *plVar3 = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar1 == (long *)0x0) goto LAB_008c5f68;
      operator_delete(plVar1);
      plVar1 = plVar4;
    }
  }
  return;
}


// ===== 008c5f7c  FUN_008c5f7c =====

void FUN_008c5f7c(undefined8 ******param_1,undefined8 *param_2)

{
  long ******pppppplVar1;
  undefined8 ******ppppppuVar2;
  undefined1 *puVar3;
  long *******ppppppplVar4;
  char cVar5;
  undefined8 *******pppppppuVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined8 *****pppppuVar10;
  long *plVar11;
  undefined4 local_11c;
  undefined8 ******local_118;
  ulong uStack_110;
  byte bStack_101;
  long *****local_100;
  long ******local_f8;
  long *****local_f0;
  undefined8 ***pppuStack_e8;
  undefined8 ***local_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined4 uStack_b8;
  int local_b4;
  uint local_b0;
  undefined4 uStack_ac;
  long ******local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined4 uStack_68;
  int local_64;
  uint local_60;
  undefined4 uStack_5c;
  
  *param_1 = (undefined8 *****)&PTR_FUN_00d3c958;
  param_1[1] = (undefined8 *****)param_2[1];
  param_1[2] = (undefined8 *****)*param_2;
  FUN_00660fac(param_1 + 3);
  cVar5 = *(char *)((long)param_2 + 0x29);
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((long)param_1 + 0x74) = 0;
  uVar9 = 6;
  if (cVar5 == '\0') {
    uVar9 = 10;
  }
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 5) = uVar9;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  param_1[0x10] = (undefined8 *****)0x0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)(param_1 + 0x30) = 2;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  plVar11 = (long *)param_2[7];
  local_60 = 0xaaaaaaaa;
  uStack_5c = 0xaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_68 = 0xaaaaaaaa;
  local_64 = 0xaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = (long ******)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00661054(&local_a0,"min_ms",6);
  local_64 = 0;
  local_60 = 0;
  pppppplVar1 = (long ******)(PTR_DAT_00d51ff8 + 0x10);
  local_b0 = 0xaaaaaaaa;
  uStack_ac = 0xaaaaaaaa;
  pppuStack_e8 = (undefined8 ***)&DAT_aaaaaaaaaaaaaaaa;
  local_f0 = (long *****)&DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = (undefined8 ***)&DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b8 = 0xaaaaaaaa;
  local_b4 = 0xaaaaaaaa;
  puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = pppppplVar1;
  FUN_00661054(&local_f0,"max_ms",6);
  local_b4 = 0;
  local_b0 = 0;
  local_100 = (long *****)&local_f0;
  local_f8 = (long ******)&local_a0;
  local_f0 = (long *****)pppppplVar1;
  (**(code **)(*plVar11 + 0x10))(&local_118,plVar11,"WebRTC-ForceSendPlayoutDelay",0x1c);
  pppppppuVar6 = (undefined8 *******)local_118;
  if (-1 < (char)bStack_101) {
    uStack_110 = (ulong)bStack_101;
    pppppppuVar6 = &local_118;
  }
  FUN_00661cc0(&local_100,2,pppppppuVar6,uStack_110);
  if ((char)bStack_101 < '\0') {
    operator_delete(local_118);
  }
  if (((local_b0 & 1) == 0) || ((local_60 & 1) == 0)) {
    uVar8 = 0;
    *(undefined1 *)(param_1 + 0x54) = 0;
  }
  else {
    FUN_0065a16c(param_1 + 0x54,(long)local_64 * 1000,(long)local_b4 * 1000);
    uVar8 = 1;
  }
  *(undefined1 *)(param_1 + 0x56) = uVar8;
  FUN_006634ac(&local_f0);
  FUN_006634ac(&local_a0);
  local_a0 = (long ******)&DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_a0);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 0x57),(pthread_mutexattr_t *)&local_a0);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_a0);
  local_a0 = (long ******)&DAT_aaaaaaaaaaaaaaaa;
  param_1[0x5c] = *(undefined8 ******)((long)param_2 + 0x2c);
  param_1[0x5d] = (undefined8 *****)param_2[2];
  param_1[0x5e] = (undefined8 *****)param_2[3];
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_a0);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 0x5f),(pthread_mutexattr_t *)&local_a0);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_a0);
  FUN_008531f8(param_1 + 100,1000000);
  *(undefined1 *)(param_1 + 0x73) = 0;
  param_1[0x70] = param_1 + 0x71;
  local_a0 = (long ******)&DAT_aaaaaaaaaaaaaaaa;
  param_1[0x72] = (undefined8 *****)0x0;
  param_1[0x71] = (undefined8 *****)0x0;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_a0);
  pthread_mutex_init((pthread_mutex_t *)((long)param_1 + 0x39c),(pthread_mutexattr_t *)&local_a0);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_a0);
  param_1[0x79] = (undefined8 *****)param_2[4];
  *(undefined1 *)(param_1 + 0x7a) = *(undefined1 *)(param_2 + 5);
  (**(code **)(*(long *)param_2[7] + 0x10))
            (&local_a0,(long *)param_2[7],"WebRTC-GenericDescriptorAuth",0x1c);
  puVar3 = puStack_98;
  if (-1 < (long)local_90) {
    puVar3 = (undefined1 *)((ulong)local_90 >> 0x38);
  }
  if (puVar3 < (undefined1 *)0x8) {
    bVar7 = true;
  }
  else {
    ppppppplVar4 = (long *******)local_a0;
    if (-1 < (long)local_90) {
      ppppppplVar4 = &local_a0;
    }
    bVar7 = *ppppppplVar4 != (long ******)0x64656c6261736944;
  }
  if ((long)local_90 < 0) {
    operator_delete(local_a0);
  }
  *(bool *)((long)param_1 + 0x3d1) = bVar7;
  *(undefined1 *)((long)param_1 + 0x3d2) = *(undefined1 *)(param_2 + 10);
  FUN_0086b60c(param_1 + 0x7b,*param_2);
  ppppppuVar2 = param_1 + 0x86;
  param_1[0x85] = (undefined8 *****)0x0;
  param_1[0x84] = (undefined8 *****)0x0;
  param_1[0x83] = (undefined8 *****)0x0;
  param_1[0x82] = (undefined8 *****)0x0;
  if (param_2[8] == 0) {
    *ppppppuVar2 = (undefined8 *****)0x0;
  }
  else {
    pppppuVar10 = param_1[1];
    local_100 = (long *****)CONCAT44(local_100._4_4_,*(undefined4 *)((long)pppppuVar10 + 0x14));
    local_118 = param_1;
    if (*(char *)((long)pppppuVar10 + 0xb7) < '\0') {
      FUN_005478d8(&local_f0,pppppuVar10[0x14],pppppuVar10[0x15]);
    }
    else {
      local_e0 = pppppuVar10[0x16];
      pppuStack_e8 = pppppuVar10[0x15];
      local_f0 = (long *****)pppppuVar10[0x14];
    }
    (**(code **)(*(long *)param_2[7] + 0x10))
              (&local_a0,(long *)param_2[7],"WebRTC-MediaTaskQueuePriorities",0x1f);
    puVar3 = puStack_98;
    if (-1 < (long)local_90) {
      puVar3 = (undefined1 *)((ulong)local_90 >> 0x38);
    }
    if (puVar3 < (undefined1 *)0x7) {
      uVar9 = 0;
    }
    else {
      ppppppplVar4 = (long *******)local_a0;
      if (-1 < (long)local_90) {
        ppppppplVar4 = &local_a0;
      }
      uVar9 = 0;
      if (*(int *)ppppppplVar4 == 0x62616e45 && *(int *)((long)ppppppplVar4 + 3) == 0x64656c62) {
        uVar9 = 2;
      }
    }
    if ((long)local_90 < 0) {
      operator_delete(local_a0);
    }
    local_11c = uVar9;
    FUN_008c63f8(ppppppuVar2,&local_118,param_2 + 8,&local_100,&local_f0,param_2 + 9,&local_11c);
    if ((long)local_e0 < 0) {
      operator_delete(local_f0);
    }
    if (*ppppppuVar2 != (undefined8 *****)0x0) {
      FUN_008c9fb0();
    }
  }
  return;
}


// ===== 008c63f8  FUN_008c63f8 =====

void FUN_008c63f8(undefined8 *param_1,undefined8 *param_2,long *param_3,undefined4 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  void *local_70;
  undefined8 uStack_68;
  long local_60;
  long *local_58;
  
  puVar2 = (undefined8 *)operator_new(0x70);
  local_58 = (long *)*param_3;
  uVar3 = *param_2;
  if (local_58 != (long *)0x0) {
    (**(code **)*local_58)();
  }
  uVar1 = *param_4;
  local_60 = param_5[2];
  uStack_68 = param_5[1];
  local_70 = (void *)*param_5;
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  FUN_008c9ed8(puVar2,uVar3,&local_58,uVar1,&local_70,*param_6,*param_7);
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 8))();
  }
  *(undefined4 *)((long)puVar2 + 0x6c) = 0;
  *puVar2 = &PTR_FUN_00d3c9b8;
  *param_1 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d0f740(1,(long)puVar2 + 0x6c);
  }
  return;
}


// ===== 008c6504  FUN_008c6504 =====

void FUN_008c6504(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *local_28;
  
  *param_1 = &PTR_FUN_00d3c958;
  if (param_1[0x86] != 0) {
    FUN_008cace8();
    if ((long *)param_1[0x86] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x86] + 8))();
    }
  }
  pthread_mutex_destroy((pthread_mutex_t *)((long)param_1 + 0x39c));
  local_28 = param_1 + 0x70;
  FUN_008c9b98(&local_28,param_1[0x71]);
  FUN_007de938(param_1 + 100);
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x5f));
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x57));
  if ((*(char *)(param_1 + 0x4f) == '\x01') && (param_1[0x32] != 0)) {
    FUN_008c4c88(param_1 + 0x32);
  }
  if (*(char *)(param_1 + 0x2f) == '\x01') {
    if (param_1[0x12] != 0) {
      FUN_008c4c88();
    }
  }
  pvVar1 = (void *)param_1[0x10];
  param_1[0x10] = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_0060b02c(pvVar1);
    operator_delete(pvVar1);
  }
  return;
}


// ===== 008c65e8  FUN_008c65e8 =====

void FUN_008c65e8(void *param_1)

{
  FUN_008c6504();
  operator_delete(param_1);
  return;
}


// ===== 008c6618  FUN_008c6618 =====

void FUN_008c6618(long param_1,long *param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 *local_50;
  undefined8 *puStack_48;
  long local_40;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2f8));
  plVar3 = (long *)*param_2;
  if (plVar3 == (long *)param_2[1]) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    do {
      lVar5 = *plVar3;
      if ((*(uint *)(lVar5 + 0x80) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1074: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      if (*(long *)(lVar5 + 0x78) == 1) {
        uVar4 = *(long *)(lVar5 + 0x18) + uVar4;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != (long *)param_2[1]);
  }
  if (param_3 <= uVar4) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    FUN_008532e0(param_1 + 800,uVar4 - param_3,uVar2);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x2f8));
  puStack_48 = (undefined8 *)param_2[1];
  local_50 = (undefined8 *)*param_2;
  uVar2 = *(undefined8 *)(param_1 + 8);
  local_40 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_008697e4(uVar2,&local_50);
  puVar1 = local_50;
  puVar7 = puStack_48;
  if (local_50 != (undefined8 *)0x0) {
    while (puVar1 != puVar7) {
      puVar7 = puVar7 + -1;
      if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar6 = (void *)*puVar7;
      *puVar7 = 0;
      if (pvVar6 != (void *)0x0) {
        FUN_007dc854(pvVar6);
        operator_delete(pvVar6);
      }
    }
    puStack_48 = puVar1;
    operator_delete(local_50);
  }
  return;
}


// ===== 008c6788  FUN_008c6788 =====

void FUN_008c6788(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}


// ===== 008c6794  FUN_008c6794 =====

void FUN_008c6794(long param_1)

{
  if (*(long *)(param_1 + 0x430) != 0) {
    FUN_008caaf4();
    return;
  }
  FUN_008c67b0(param_1);
  return;
}


// ===== 008c67b0  FUN_008c67b0 =====

void FUN_008c67b0(long param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  uint *puVar3;
  int *piVar4;
  undefined8 uVar5;
  void *pvVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  pvVar6 = *(void **)(param_1 + 0x80);
  if (param_2 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
    if (pvVar6 != (void *)0x0) {
      FUN_0060b02c(pvVar6);
      operator_delete(pvVar6);
      return;
    }
  }
  else {
    if (pvVar6 == (void *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar2 = FUN_008c6924(pvVar6,param_2);
      if ((uVar2 & 1) != 0) {
        return;
      }
      piVar4 = *(int **)(param_1 + 0x80);
      uVar7 = *piVar4 + ((uint)(piVar4[0x1c] - piVar4[0x1a]) >> 3) * 0x4ec5 & 0x3f;
    }
    puVar3 = (uint *)operator_new(0x80);
    uVar1 = *(uint *)(param_2 + 1);
    uVar2 = param_2[2];
    *(undefined8 *)puVar3 = *param_2;
    puVar3[2] = uVar1;
    puVar3[4] = 0;
    puVar3[5] = 0;
    if (1 < uVar2) {
      if ((uVar2 & 1) == 0) {
        uVar9 = param_2[4];
        uVar8 = param_2[3];
        *(ulong *)(puVar3 + 4) = uVar2;
        uVar11 = param_2[6];
        uVar10 = param_2[5];
        uVar5 = param_2[7];
        *(undefined8 *)(puVar3 + 8) = uVar9;
        *(undefined8 *)(puVar3 + 6) = uVar8;
        *(undefined8 *)(puVar3 + 0xc) = uVar11;
        *(undefined8 *)(puVar3 + 10) = uVar10;
        *(undefined8 *)(puVar3 + 0xe) = uVar5;
      }
      else {
        FUN_00850990();
      }
    }
    uVar2 = param_2[8];
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    if (1 < uVar2) {
      if ((uVar2 & 1) == 0) {
        uVar8 = param_2[10];
        uVar5 = param_2[9];
        uVar10 = param_2[0xc];
        uVar9 = param_2[0xb];
        *(ulong *)(puVar3 + 0x10) = uVar2;
        *(undefined8 *)(puVar3 + 0x14) = uVar8;
        *(undefined8 *)(puVar3 + 0x12) = uVar5;
        *(undefined8 *)(puVar3 + 0x18) = uVar10;
        *(undefined8 *)(puVar3 + 0x16) = uVar9;
      }
      else {
        FUN_00850a14();
      }
    }
    FUN_008507f8(puVar3 + 0x1a,param_2 + 0xd);
    pvVar6 = *(void **)(param_1 + 0x80);
    *(uint **)(param_1 + 0x80) = puVar3;
    if (pvVar6 != (void *)0x0) {
      FUN_0060b02c(pvVar6);
      operator_delete(pvVar6);
      puVar3 = *(uint **)(param_1 + 0x80);
    }
    *puVar3 = uVar7;
  }
  return;
}


// ===== 008c691c  thunk_FUN_008c67b0 =====

void thunk_FUN_008c67b0(void)

{
  FUN_008c67b0();
  return;
}


// ===== 008c6924  FUN_008c6924 =====

uint FUN_008c6924(long param_1,long param_2)

{
  int *piVar1;
  undefined8 *__s2;
  undefined8 *__s1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  size_t __n;
  long *plVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  
  if (*(int *)(param_1 + 4) != *(int *)(param_2 + 4)) {
    return 0;
  }
  if (*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) {
    __n = (*(ulong *)(param_1 + 0x10) & 0x7ffffffffffffffe) * 2;
    if (__n + (*(ulong *)(param_2 + 0x10) >> 1) * -4 == 0) {
      __s2 = (undefined8 *)(param_2 + 0x18);
      if ((*(ulong *)(param_2 + 0x10) & 1) != 0) {
        __s2 = (undefined8 *)*(void **)(param_2 + 0x18);
      }
      __s1 = (undefined8 *)(param_1 + 0x18);
      if ((*(ulong *)(param_1 + 0x10) & 1) != 0) {
        __s1 = (undefined8 *)*(void **)(param_1 + 0x18);
      }
      iVar4 = memcmp(__s1,__s2,__n);
      if (iVar4 == 0) {
        plVar6 = (long *)(param_1 + 0x48);
        if ((*(ulong *)(param_1 + 0x40) & 1) != 0) {
          plVar6 = (long *)*(long *)(param_1 + 0x48);
        }
        uVar3 = *(ulong *)(param_1 + 0x40) & 0x3ffffffffffffffe;
        lVar7 = uVar3 * 4;
        if (lVar7 + (*(ulong *)(param_2 + 0x40) >> 1) * -8 == 0) {
          if (uVar3 != 0) {
            piVar1 = (int *)((long)plVar6 + lVar7);
            piVar8 = (int *)(param_2 + 0x48);
            if ((*(ulong *)(param_2 + 0x40) & 1) != 0) {
              piVar8 = *(int **)(param_2 + 0x48);
            }
            do {
              uVar5 = 0;
              if ((*(int *)plVar6 != *piVar8) || (*(int *)((long)plVar6 + 4) != piVar8[1]))
              goto LAB_008c6a70;
              plVar6 = (long *)((long)plVar6 + 8);
              piVar8 = piVar8 + 2;
            } while (plVar6 != (long *)piVar1);
          }
          lVar7 = *(long *)(param_1 + 0x68);
          lVar2 = *(long *)(param_1 + 0x70);
          lVar9 = *(long *)(param_2 + 0x68);
          if (lVar2 - lVar7 == *(long *)(param_2 + 0x70) - lVar9) {
            if (lVar7 == lVar2) {
              uVar5 = 1;
            }
            else {
              do {
                uVar5 = FUN_008c8e0c(lVar7,lVar9);
                lVar7 = lVar7 + 0x68;
                if (lVar7 == lVar2) break;
                lVar9 = lVar9 + 0x68;
              } while ((uVar5 & 1) != 0);
            }
            goto LAB_008c6a70;
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_008c6a70:
  return uVar5 & 1;
}


// ===== 008c6a90  FUN_008c6a90 =====

void FUN_008c6a90(long param_1,undefined4 *param_2)

{
  ulong *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 local_218;
  undefined1 local_214;
  ulong local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 auStack_1f8 [26];
  undefined4 local_128;
  undefined1 local_124;
  ulong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 auStack_108 [26];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  lVar5 = *(long *)(param_1 + 0x430);
  if (lVar5 == 0) {
    local_218 = *param_2;
    local_214 = *(undefined1 *)(param_2 + 1);
    uVar6 = *(ulong *)(param_2 + 2);
    local_210 = 0;
    puVar1 = &local_210;
    if ((uVar6 & 1) == 0) {
      if (uVar6 != 0) {
        uVar6 = uVar6 >> 1;
        puVar9 = auStack_1f8;
        puVar8 = (undefined8 *)(param_2 + 4);
        uVar7 = (long)puVar1 * -0xdb6db6db6db6db7 + 0x9249249249249248U >> 3;
        do {
          if (uVar7 == 0) goto LAB_008c6c8c;
          uVar11 = puVar8[1];
          uVar10 = *puVar8;
          uVar13 = puVar8[3];
          uVar12 = puVar8[2];
          uVar6 = uVar6 - 1;
          uVar2 = *(undefined4 *)(puVar8 + 6);
          puVar8[1] = 0;
          uVar7 = uVar7 - 1;
          puVar9[-1] = uVar11;
          puVar9[-2] = uVar10;
          puVar9[1] = uVar13;
          *puVar9 = uVar12;
          uVar11 = puVar8[5];
          uVar10 = puVar8[4];
          *(undefined4 *)(puVar9 + 4) = uVar2;
          uVar3 = *(undefined1 *)((long)puVar8 + 0x34);
          puVar8 = puVar8 + 7;
          puVar9[3] = uVar11;
          puVar9[2] = uVar10;
          *(undefined1 *)((long)puVar9 + 0x24) = uVar3;
          puVar9 = puVar9 + 7;
        } while (uVar6 != 0);
        uVar6 = *(ulong *)(param_2 + 2) & 0xfffffffffffffffe;
      }
    }
    else {
      local_208 = *(undefined8 *)(param_2 + 4);
      uStack_200 = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_2 + 2) = 0;
    }
    local_210 = uVar6;
    FUN_008c6ca4(param_1,&local_218);
    uVar6 = local_210;
  }
  else {
    local_128 = *param_2;
    local_124 = *(undefined1 *)(param_2 + 1);
    uVar6 = *(ulong *)(param_2 + 2);
    local_120 = 0;
    puVar1 = &local_120;
    if ((uVar6 & 1) == 0) {
      if (uVar6 != 0) {
        uVar6 = uVar6 >> 1;
        puVar9 = auStack_108;
        puVar8 = (undefined8 *)(param_2 + 4);
        uVar7 = (long)puVar1 * -0xdb6db6db6db6db7 + 0x9249249249249248U >> 3;
        do {
          if (uVar7 == 0) {
LAB_008c6c8c:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          uVar11 = puVar8[1];
          uVar10 = *puVar8;
          uVar13 = puVar8[3];
          uVar12 = puVar8[2];
          uVar6 = uVar6 - 1;
          uVar2 = *(undefined4 *)(puVar8 + 6);
          puVar8[1] = 0;
          uVar7 = uVar7 - 1;
          puVar9[-1] = uVar11;
          puVar9[-2] = uVar10;
          puVar9[1] = uVar13;
          *puVar9 = uVar12;
          uVar11 = puVar8[5];
          uVar10 = puVar8[4];
          *(undefined4 *)(puVar9 + 4) = uVar2;
          uVar3 = *(undefined1 *)((long)puVar8 + 0x34);
          puVar8 = puVar8 + 7;
          puVar9[3] = uVar11;
          puVar9[2] = uVar10;
          *(undefined1 *)((long)puVar9 + 0x24) = uVar3;
          puVar9 = puVar9 + 7;
        } while (uVar6 != 0);
        uVar6 = *(ulong *)(param_2 + 2) & 0xfffffffffffffffe;
      }
    }
    else {
      local_118 = *(undefined8 *)(param_2 + 4);
      uStack_110 = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_2 + 2) = 0;
    }
    local_120 = uVar6;
    FUN_008cab60(lVar5,&local_128);
    uVar6 = local_120;
  }
  if (uVar6 != 0) {
    FUN_008c4c88(puVar1);
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008c6ca4  FUN_008c6ca4 =====

void FUN_008c6ca4(long param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((*(char *)(param_1 + 0x178) == '\x01') &&
     ((*(ulong *)(param_1 + 0x90) ^ *(ulong *)(param_2 + 8)) < 2)) {
    if (*(int *)(param_1 + 0x180) != 1) {
      if (*(int *)(param_1 + 0x180) != 2) goto LAB_008c6d64;
      *(undefined4 *)(param_1 + 0x180) = 1;
    }
    uVar2 = *(ulong *)(param_2 + 8) >> 1;
    if (uVar2 != 0) {
      uVar3 = 0;
      lVar4 = 0x34;
      do {
        lVar5 = param_2 + 0x10;
        if ((*(ulong *)(param_2 + 8) & 1) != 0) {
          lVar5 = *(long *)(param_2 + 0x10);
        }
        if ((*(byte *)(param_1 + 0x278) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                    );
        }
        if (*(ulong *)(param_1 + 400) >> 1 <= uVar3) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x8c6d8c);
          (*pcVar1)();
        }
        lVar6 = param_1 + 0x198;
        if ((*(ulong *)(param_1 + 400) & 1) != 0) {
          lVar6 = *(long *)(param_1 + 0x198);
        }
        if (((uint)*(byte *)(lVar5 + lVar4) - (uint)*(byte *)(lVar6 + lVar4)) - 6 < 0xfffffff5)
        goto LAB_008c6d60;
        uVar3 = uVar3 + 1;
        lVar4 = lVar4 + 0x38;
      } while (uVar2 != uVar3);
    }
  }
  else {
LAB_008c6d60:
    *(undefined4 *)(param_1 + 0x180) = 0;
  }
LAB_008c6d64:
  FUN_008c6ec4(param_1 + 0x88);
  return;
}


// ===== 008c6d8c  FUN_008c6d8c =====

void FUN_008c6d8c(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 local_128;
  undefined1 local_124;
  ulong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 auStack_108 [26];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_128 = *param_2;
  local_124 = *(undefined1 *)(param_2 + 1);
  uVar4 = *(ulong *)(param_2 + 2);
  local_120 = 0;
  if ((uVar4 & 1) == 0) {
    if (uVar4 != 0) {
      uVar4 = uVar4 >> 1;
      puVar7 = auStack_108;
      puVar6 = (undefined8 *)(param_2 + 4);
      uVar5 = (long)&local_120 * -0xdb6db6db6db6db7 + 0x9249249249249248U >> 3;
      do {
        if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        uVar9 = puVar6[1];
        uVar8 = *puVar6;
        uVar11 = puVar6[3];
        uVar10 = puVar6[2];
        uVar4 = uVar4 - 1;
        uVar1 = *(undefined4 *)(puVar6 + 6);
        puVar6[1] = 0;
        uVar5 = uVar5 - 1;
        puVar7[-1] = uVar9;
        puVar7[-2] = uVar8;
        puVar7[1] = uVar11;
        *puVar7 = uVar10;
        uVar9 = puVar6[5];
        uVar8 = puVar6[4];
        *(undefined4 *)(puVar7 + 4) = uVar1;
        uVar2 = *(undefined1 *)((long)puVar6 + 0x34);
        puVar6 = puVar6 + 7;
        puVar7[3] = uVar9;
        puVar7[2] = uVar8;
        *(undefined1 *)((long)puVar7 + 0x24) = uVar2;
        puVar7 = puVar7 + 7;
      } while (uVar4 != 0);
      uVar4 = *(ulong *)(param_2 + 2) & 0xfffffffffffffffe;
    }
  }
  else {
    local_118 = *(undefined8 *)(param_2 + 4);
    uStack_110 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_2 + 2) = 0;
  }
  local_120 = uVar4;
  FUN_008c6ca4(param_1,&local_128);
  if (local_120 != 0) {
    FUN_008c4c88(&local_120);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008c6ec4  FUN_008c6ec4 =====

undefined4 * FUN_008c6ec4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    uVar2 = *param_2;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
    *param_1 = uVar2;
    if (param_1 != param_2) {
      if ((*(ulong *)(param_2 + 2) & 1) == 0) {
        FUN_008c9070(param_1 + 2,param_2 + 4,*(ulong *)(param_2 + 2) >> 1);
      }
      else {
        FUN_008c8f44(param_1 + 2,param_2 + 2);
      }
    }
  }
  else {
    if (param_1 == (undefined4 *)0x0) {
LAB_008c700c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar2 = *param_2;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
    *param_1 = uVar2;
    puVar3 = (ulong *)(param_1 + 2);
    *puVar3 = 0;
    uVar4 = *(ulong *)(param_2 + 2);
    if ((uVar4 & 1) == 0) {
      if (uVar4 != 0) {
        uVar4 = uVar4 >> 1;
        puVar7 = (undefined8 *)(param_1 + 8);
        puVar6 = (undefined8 *)(param_2 + 4);
        uVar5 = (long)puVar3 * -0xdb6db6db6db6db7 + 0x9249249249249248U >> 3;
        do {
          if (uVar5 == 0) goto LAB_008c700c;
          uVar4 = uVar4 - 1;
          uVar5 = uVar5 - 1;
          puVar7[-2] = *puVar6;
          puVar7[-1] = 0;
          puVar7[-1] = puVar6[1];
          uVar10 = puVar6[2];
          uVar9 = puVar6[5];
          uVar8 = puVar6[4];
          puVar7[1] = puVar6[3];
          *puVar7 = uVar10;
          puVar7[3] = uVar9;
          puVar7[2] = uVar8;
          puVar1 = (undefined4 *)((long)puVar6 + 0x34);
          uVar2 = *(undefined4 *)(puVar6 + 6);
          puVar6[1] = 0;
          puVar6 = puVar6 + 7;
          *(undefined1 *)((long)puVar7 + 0x24) = *(undefined1 *)puVar1;
          *(undefined4 *)(puVar7 + 4) = uVar2;
          puVar7 = puVar7 + 7;
        } while (uVar4 != 0);
        uVar4 = *(ulong *)(param_2 + 2) & 0xfffffffffffffffe;
      }
      *puVar3 = uVar4;
    }
    else {
      uVar8 = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 6) = uVar8;
      *(ulong *)(param_1 + 2) = *(ulong *)(param_2 + 2) | 1;
      *(undefined8 *)(param_2 + 2) = 0;
    }
    *(undefined1 *)(param_1 + 0x3c) = 1;
  }
  return param_1;
}


// ===== 008c7020  FUN_008c7020 =====

/* WARNING: Removing unreachable block (ram,0x008c739c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_008c7020(long param_1,int *param_2,byte param_3,byte param_4,long param_5)

{
  int *piVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 *******pppppppuVar4;
  long lVar5;
  bool bVar6;
  byte bVar7;
  long lVar8;
  undefined8 uVar9;
  byte bVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  uint uVar14;
  undefined8 uVar15;
  int *piVar16;
  undefined8 uVar17;
  int *piVar18;
  undefined1 auVar19 [16];
  int local_174;
  undefined8 local_170;
  undefined1 *puStack_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  undefined1 *puStack_138;
  undefined1 *local_130;
  undefined8 *******pppppppuStack_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined8 local_f8;
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
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  bVar10 = *(byte *)(param_1 + 0x74);
  bVar7 = *(byte *)(param_2 + 0x47) != bVar10;
  if ((bVar10 & *(byte *)(param_2 + 0x47)) == 0) {
LAB_008c70f0:
    bVar10 = 1;
    if (((bVar7 & 1) == 0) && (param_2[0x26] != 3)) {
      bVar10 = *(byte *)(param_1 + 0x78);
    }
  }
  else {
    if ((bVar10 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    if ((((((char)param_2[0x36] == *(char *)(param_1 + 0x30)) &&
          (*(char *)((long)param_2 + 0xd9) == *(char *)(param_1 + 0x31))) &&
         (*(char *)((long)param_2 + 0xda) == *(char *)(param_1 + 0x32))) &&
        ((param_2[0x37] == *(int *)(param_1 + 0x34) && (param_2[0x38] == *(int *)(param_1 + 0x38))))
        ) && (param_2[0x39] == *(int *)(param_1 + 0x3c))) {
      bVar7 = FUN_008c92a0(param_2 + 0x3a,param_1 + 0x40);
      bVar7 = bVar7 ^ 1;
      goto LAB_008c70f0;
    }
    bVar10 = 1;
  }
  piVar18 = param_2 + 0x26;
  if ((((param_4 & 1) != 0) && ((bVar10 & 1) != 0)) && ((*(byte *)(param_2 + 0x47) & 1) != 0)) {
    lVar8 = FUN_00659ba8(param_2 + 0x36);
    uVar9 = 4;
    if (lVar8 != 0) {
      uVar9 = 0x1c;
    }
    auVar19 = FUN_007dbacc(param_5,0x13,uVar9);
    if (auVar19._8_8_ != 0) {
      FUN_007d96f4(auVar19._0_8_,auVar19._8_8_,param_2 + 0x36);
    }
  }
  if (*piVar18 == 3) {
    bVar6 = true;
  }
  else {
    bVar6 = *(int *)(param_1 + 0x2c) != 0 || param_2[0x28] != 0;
  }
  if (((param_4 & 1) != 0) && (bVar6)) {
    auVar19 = FUN_007dbacc(param_5,7,1);
    if (auVar19._8_8_ != 0) {
      FUN_007d910c(auVar19._0_8_,auVar19._8_8_,param_2[0x28]);
    }
  }
  if ((((param_4 & 1) != 0) && (*piVar18 == 3)) && ((char)param_2[0x29] != '\0')) {
    auVar19 = FUN_007dbacc(param_5,0xb,1);
    if (auVar19._8_8_ != 0) {
      FUN_007d9250(auVar19._0_8_,auVar19._8_8_,(char)param_2[0x29]);
    }
  }
  if (((param_4 & 1) != 0) && ((char)param_2[0x35] != -1)) {
    auVar19 = FUN_007dbacc(param_5,0xd,0xd);
    if (auVar19._8_8_ != 0) {
      FUN_007d9304(auVar19._0_8_,auVar19._8_8_,param_2 + 0x32);
    }
  }
  if ((*(char *)(param_1 + 0x298) == '\x01') && (*(char *)(param_1 + 0x290) == '\x01')) {
    auVar19 = FUN_007dbacc(param_5,10,3);
    if (auVar19._8_8_ != 0) {
      FUN_007d919c(auVar19._0_8_,auVar19._8_8_,param_1 + 0x280);
    }
  }
  if (((param_3 & 1) != 0) && ((char)param_2[0x1ec] == '\x01')) {
    uVar9 = FUN_007d8e00(param_2 + 0x1e6);
    auVar19 = FUN_007dbacc(param_5,6,uVar9);
    if (auVar19._8_8_ != 0) {
      FUN_007d8e1c(auVar19._0_8_,auVar19._8_8_,param_2 + 0x1e6);
    }
  }
  if ((char)param_2[0x24] == '\x01') {
    if ((*(char *)(param_5 + 0x32) != '\0') && (*(long *)(param_1 + 0x80) != 0)) {
      puStack_e8 = (undefined1 *)0x0;
      local_158 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
      local_150 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_140 = &DAT_aaaaaaaaaaaaaaaa;
      pppppppuStack_128 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
      local_120 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
      local_110 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_168 = *(undefined1 **)(param_2 + 2);
      local_170 = (undefined1 *)(CONCAT71(0xaaaaaaaaaaaaaa,param_3) & 0xffffffffffffff01);
      piVar16 = param_2 + 0x12;
      if ((*(ulong *)(param_2 + 0x10) & 1) != 0) {
        piVar16 = *(int **)(param_2 + 0x12);
      }
      uVar12 = *(ulong *)(param_2 + 0x10) & 0x3ffffffffffffffe;
      lVar8 = uVar12 << 2;
      local_130 = (undefined1 *)0x0;
      local_118 = (undefined1 *)0x0;
      local_100 = (undefined1 *)0xaaaaaaaaaaaaaa00;
      local_f8 = (undefined1 *)0xaaaaaa00aaaaaa00;
      local_f0 = (undefined1 *)0xaaaaaaaaaaaaaa00;
      local_160 = (undefined1 *)0x0;
      local_170 = (undefined1 *)
                  (ulong)(CONCAT24((short)*param_2,
                                   (int)CONCAT62(local_170._2_6_,
                                                 CONCAT11(param_4,(undefined1)local_170))) &
                         0xffffffff01ff);
      if (uVar12 != 0) {
        do {
          if ((*(byte *)(param_2 + 0x24) & 1) == 0) goto LAB_008c78b0;
          puVar3 = (undefined1 *)0x4;
          if (((ulong)local_130 & 1) != 0) {
            puVar3 = local_120;
          }
          local_174 = *param_2 - (int)*(undefined8 *)piVar16;
          if ((undefined1 *)((ulong)local_130 >> 1) == puVar3) {
            FUN_007d577c(&local_130,&local_174);
          }
          else {
            pppppppuVar4 = &pppppppuStack_128;
            if (((ulong)local_130 & 1) != 0) {
              pppppppuVar4 = pppppppuStack_128;
            }
            piVar1 = (int *)((long)pppppppuVar4 + (long)((ulong)local_130 >> 1) * 4);
            if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            *piVar1 = local_174;
            local_130 = local_130 + 2;
          }
          lVar8 = lVar8 + -8;
          piVar16 = piVar16 + 2;
        } while (lVar8 != 0);
        if ((*(byte *)(param_2 + 0x24) & 1) == 0) goto LAB_008c78b0;
      }
      if (&local_118 != (undefined1 **)(param_2 + 0x1c)) {
        piVar16 = param_2 + 0x1e;
        if ((*(ulong *)(param_2 + 0x1c) & 1) != 0) {
          piVar16 = *(int **)(param_2 + 0x1e);
        }
        FUN_007d51b0(&local_118,piVar16,(long)(*(ulong *)(param_2 + 0x1c) << 1) >> 2);
        if ((*(byte *)(param_2 + 0x24) & 1) == 0) goto LAB_008c78b0;
      }
      if ((int *)&local_170 != param_2) {
        piVar16 = param_2 + 6;
        if ((*(ulong *)(param_2 + 4) & 1) != 0) {
          piVar16 = *(int **)(param_2 + 6);
        }
        FUN_0060adc4(&local_160,piVar16,(long)(*(ulong *)(param_2 + 4) << 1) >> 2);
      }
      puVar3 = puStack_e8;
      if ((param_3 & 1) != 0) {
        if (*(int *)(param_1 + 0x410) == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = (ulong)*(uint *)(param_1 + 0x418) | 0x100000000;
        }
        local_f8 = (undefined1 *)CONCAT44((int)uVar12,(undefined4)local_f8);
        local_f0 = (undefined1 *)CONCAT71(local_f0._1_7_,(char)(uVar12 >> 0x20));
      }
      if (*piVar18 == 3) {
        if ((*(byte *)(param_2 + 0x24) & 1) == 0) goto LAB_008c78b0;
        if ((((param_3 & 1) != 0) && (*(ulong *)(param_2 + 0x10) < 2)) &&
           (bVar6 = puStack_e8 != (undefined1 *)0x0, puStack_e8 = *(undefined1 **)(param_1 + 0x80),
           bVar6)) {
          FUN_0060b02c(puVar3);
          operator_delete(puVar3);
        }
      }
      uVar15 = *(undefined8 *)(param_1 + 0x80);
      uVar17 = *(undefined8 *)(param_1 + 0x420);
      uVar9 = FUN_007d4228(uVar15,uVar17,&local_170);
      auVar19 = FUN_007dbacc(param_5,0x12,uVar9);
      if (auVar19._8_8_ == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = FUN_007d4298(auVar19._0_8_,auVar19._8_8_,uVar15,uVar17,&local_170);
        uVar12 = uVar12 & 0xffffffff;
      }
      puStack_e8 = (undefined1 *)0x0;
      if (((ulong)local_118 & 1) != 0) {
        operator_delete(local_110);
      }
      if (((ulong)local_130 & 1) != 0) {
        operator_delete(pppppppuStack_128);
      }
      if (((ulong)local_160 & 1) != 0) {
        operator_delete(local_158);
      }
      if ((uVar12 & 1) != 0) goto LAB_008c75f0;
    }
    if (*(char *)(param_5 + 0x31) != '\0') {
      puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
      local_170 = &DAT_aaaaaaaaaaaaaaaa;
      local_158 = &DAT_aaaaaaaaaaaaaaaa;
      local_160 = &DAT_aaaaaaaaaaaaaaaa;
      local_150 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_007d7f20(&local_170);
      local_170 = (undefined1 *)(CONCAT71(local_170._1_7_,param_3) & 0xffffffffffffff01);
      local_170 = (undefined1 *)
                  (CONCAT62(local_170._2_6_,CONCAT11(param_4,(undefined1)local_170)) &
                  0xffffffffffff01ff);
      if ((param_3 & 1) != 0) {
        if (((*(byte *)(param_2 + 0x24) & 1) == 0) ||
           (FUN_007d7fb8(&local_170,(short)*param_2), (*(byte *)(param_2 + 0x24) & 1) == 0)) {
LAB_008c78b0:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                    );
        }
        piVar16 = param_2 + 0x12;
        if ((*(ulong *)(param_2 + 0x10) & 1) != 0) {
          piVar16 = *(int **)(param_2 + 0x12);
        }
        uVar12 = *(ulong *)(param_2 + 0x10) & 0x3ffffffffffffffe;
        lVar8 = uVar12 << 2;
        if (uVar12 != 0) {
          do {
            if ((*(byte *)(param_2 + 0x24) & 1) == 0) goto LAB_008c78b0;
            FUN_007d7fdc(&local_170,*param_2 - *piVar16);
            lVar8 = lVar8 + -8;
            piVar16 = piVar16 + 2;
          } while (lVar8 != 0);
          if ((*(byte *)(param_2 + 0x24) & 1) == 0) goto LAB_008c78b0;
        }
        FUN_007d7f94(&local_170,1 << (ulong)(param_2[2] & 0x1f));
        if ((*(byte *)(param_2 + 0x24) & 1) == 0) goto LAB_008c78b0;
        FUN_007d7f50(&local_170,param_2[3]);
        if (param_2[0x26] == 3) {
          FUN_007d7fa0(&local_170,(short)param_2[0x27],*(undefined2 *)((long)param_2 + 0x9e));
        }
      }
      uVar9 = FUN_007d8148(&local_170);
      auVar19 = FUN_007dbacc(param_5,0x11,uVar9);
      if (auVar19._8_8_ != 0) {
        FUN_007d83dc(auVar19._0_8_,auVar19._8_8_,&local_170);
      }
      FUN_007d7f3c(&local_170);
    }
  }
LAB_008c75f0:
  if ((((param_3 & 1) == 0) || (*(char *)(param_5 + 0x2c) == '\0')) ||
     (iVar11 = *(int *)(param_1 + 0x180), iVar11 == 2)) goto LAB_008c76b4;
  if (*piVar18 != 3) {
    if ((char)param_2[0x24] == '\x01') {
      if ((param_2[3] != 0) && (param_2[3] != 0xff)) goto LAB_008c76b4;
      uVar12 = *(ulong *)(param_2 + 4) * 2;
      plVar13 = (long *)(param_2 + 6);
      if ((*(ulong *)(param_2 + 4) & 1) != 0) {
        plVar13 = (long *)*(long *)(param_2 + 6);
      }
      uVar2 = uVar12 & 0xfffffffffffffffc;
      if (uVar2 != 0) {
        uVar12 = uVar12 - 4;
        piVar18 = (int *)((long)plVar13 + uVar2);
        uVar14 = (uint)uVar12;
        if ((~uVar14 & 0xc) != 0) {
          lVar8 = -((ulong)((uVar14 >> 2) + 1) & 3);
          do {
            if (*(int *)plVar13 == 1) goto LAB_008c78ec;
            bVar6 = lVar8 != -1;
            lVar8 = lVar8 + 1;
            plVar13 = (long *)((long)plVar13 + 4);
          } while (bVar6);
        }
        if (0xb < uVar12) {
          plVar13 = (long *)((long)plVar13 + 8);
          while( true ) {
            if (*(int *)((long)plVar13 + -8) == 1) {
              plVar13 = (long *)((long)plVar13 + -8);
              goto LAB_008c78ec;
            }
            if (*(int *)((long)plVar13 + -4) == 1) break;
            if (*(int *)plVar13 == 1) goto LAB_008c78ec;
            if (*(int *)((long)plVar13 + 4) == 1) {
              plVar13 = (long *)((long)plVar13 + 4);
              goto LAB_008c78ec;
            }
            piVar16 = (int *)((long)plVar13 + 8);
            plVar13 = (long *)((long)plVar13 + 0x10);
            if (piVar16 == piVar18) goto LAB_008c7614;
          }
          plVar13 = (long *)((long)plVar13 + -4);
LAB_008c78ec:
          if (plVar13 != (long *)piVar18) goto LAB_008c76b4;
        }
      }
    }
    else {
      if (param_2[0x2b] == 2) {
        if ((char)param_2[0x1e4] != '\x02') {
LAB_008c7914:
                    /* WARNING: Subroutine does not return */
          FUN_005ee558();
        }
        bVar7 = *(byte *)(param_2 + 0x4d);
      }
      else {
        if (param_2[0x2b] != 1) goto LAB_008c7614;
        if ((char)param_2[0x1e4] != '\x01') goto LAB_008c7914;
        bVar7 = *(byte *)((long)param_2 + 0x12e);
      }
      if (0xffffff01 < bVar7 - 0xff) goto LAB_008c76b4;
    }
  }
LAB_008c7614:
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
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
  local_170 = &DAT_aaaaaaaaaaaaaaaa;
  local_158 = &DAT_aaaaaaaaaaaaaaaa;
  local_160 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  local_150 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_140 = &DAT_aaaaaaaaaaaaaaaa;
  pppppppuStack_128 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
  local_130 = &DAT_aaaaaaaaaaaaaaaa;
  local_118 = &DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  local_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  if ((*(byte *)(param_1 + 0x178) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_005dc08c();
  }
  puStack_168 = (undefined1 *)0x0;
  local_170 = (undefined1 *)CONCAT35(0xaaaaaa,*(undefined5 *)(param_1 + 0x88));
  if (1 < *(ulong *)(param_1 + 0x90)) {
    FUN_008c4aec((ulong)&local_170 | 8);
    iVar11 = *(int *)(param_1 + 0x180);
  }
  local_170._0_5_ = CONCAT14(iVar11 == 0,(int)local_170);
  uVar9 = FUN_008cb71c(&local_170);
  auVar19 = FUN_007dbacc(param_5,0xc,uVar9);
  if (auVar19._8_8_ != 0) {
    FUN_008cb3f0(auVar19._0_8_,auVar19._8_8_,&local_170);
  }
  if (puStack_168 != (undefined1 *)0x0) {
    FUN_008c4c88((ulong)&local_170 | 8);
  }
LAB_008c76b4:
  if (((param_3 & 1) != 0) && (*(char *)((long)param_2 + 0x122) == '\x01')) {
    auVar19 = FUN_007dbacc(param_5,0x14,2);
    if (auVar19._8_8_ != 0) {
      FUN_007d99ac(auVar19._0_8_,auVar19._8_8_,(short)param_2[0x48]);
    }
  }
  if (((param_4 & 1) != 0) && ((*(byte *)(param_2 + 0x1fa) & 1) != 0)) {
    FUN_008cbab4(&local_170,param_2 + 0x1ee);
    uVar9 = FUN_007cd04c(&local_170);
    auVar19 = FUN_007dbacc(param_5,0x15,uVar9);
    if (auVar19._8_8_ != 0) {
      FUN_007ccf64(auVar19._0_8_,auVar19._8_8_,&local_170);
    }
    if (((ulong)local_158 & 1) != 0) {
      operator_delete(local_150);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008c7918  FUN_008c7918 =====

bool FUN_008c7918(long param_1)

{
  int *piVar1;
  int *piVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  
  uVar5 = FUN_008c8898();
  if ((uVar5 & 1) == 0) {
    bVar4 = false;
  }
  else {
    if (*(char *)(param_1 + 0x90) == '\x01') {
      uVar5 = *(ulong *)(param_1 + 0x10) * 2;
      plVar7 = (long *)(param_1 + 0x18);
      if ((*(ulong *)(param_1 + 0x10) & 1) != 0) {
        plVar7 = (long *)*(long *)(param_1 + 0x18);
      }
      uVar3 = uVar5 & 0xfffffffffffffffc;
      if (uVar3 != 0) {
        uVar5 = uVar5 - 4;
        piVar2 = (int *)((long)plVar7 + uVar3);
        uVar8 = (uint)uVar5;
        if ((~uVar8 & 0xc) != 0) {
          lVar9 = -((ulong)((uVar8 >> 2) + 1) & 3);
          do {
            if (*(int *)plVar7 == 1) goto LAB_008c7a1c;
            bVar4 = lVar9 != -1;
            lVar9 = lVar9 + 1;
            plVar7 = (long *)((long)plVar7 + 4);
          } while (bVar4);
        }
        if (0xb < uVar5) {
          piVar6 = (int *)((long)plVar7 + 8);
          do {
            if (piVar6[-2] == 1) {
              plVar7 = (long *)(piVar6 + -2);
              break;
            }
            if (piVar6[-1] == 1) {
              plVar7 = (long *)(piVar6 + -1);
              break;
            }
            plVar7 = (long *)piVar6;
            if (*piVar6 == 1) break;
            if (piVar6[1] == 1) {
              plVar7 = (long *)(piVar6 + 1);
              break;
            }
            piVar1 = piVar6 + 2;
            piVar6 = piVar6 + 4;
            plVar7 = (long *)piVar2;
          } while (piVar1 != piVar2);
LAB_008c7a1c:
          return plVar7 == (long *)piVar2;
        }
      }
    }
    bVar4 = true;
  }
  return bVar4;
}


// ===== 008c7a28  FUN_008c7a28 =====

uint FUN_008c7a28(long param_1,undefined4 param_2,uint param_3,undefined4 param_4,long param_5,
                 void *param_6,void *param_7,undefined8 param_8,undefined8 *param_9,long param_10,
                 long *param_11)

{
  void *pvVar1;
  bool bVar2;
  uint uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  ulong uVar15;
  void *pvVar16;
  void *pvVar17;
  long *plVar18;
  void *pvVar19;
  void *pvVar20;
  long lVar21;
  undefined1 *puVar22;
  undefined8 *puVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  void **ppvVar28;
  long lVar29;
  uint uVar30;
  void **ppvVar31;
  long lVar32;
  undefined8 uVar33;
  double dVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  void *local_118;
  void *local_f0;
  void *local_e8;
  void *local_e0;
  uint local_d4;
  void **local_d0;
  void **ppvStack_c8;
  undefined8 local_c0;
  undefined1 *local_b0;
  void *local_a8;
  void **local_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 local_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00660fb8(&local_80,param_1 + 0x18);
  uVar15 = FUN_00661028(&local_80);
  if ((uVar15 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_sender_video.cc",0x212,
                 "!race_checker530.RaceDetected()",&DAT_001f5fa0);
  }
  if (*(int *)(param_9 + 0x13) == 0) {
    param_7 = (void *)0x1;
    goto LAB_008c87c4;
  }
  if (param_7 == (void *)0x0) goto LAB_008c87c4;
  uVar15 = FUN_00869c3c(*(undefined8 *)(param_1 + 8));
  if ((uVar15 & 1) == 0) {
    param_7 = (void *)0x0;
    goto LAB_008c87c4;
  }
  if ((ulong)*(byte *)(param_9 + 0xf2) == 0xff) {
                    /* WARNING: Subroutine does not return */
    FUN_005ee558();
  }
  uVar30 = *(uint *)(param_1 + 0x28);
  local_a0 = &local_a8;
  uVar10 = (*(code *)(&PTR_FUN_00d3c980)[*(byte *)(param_9 + 0xf2)])(&local_a0,param_9 + 0x25);
  if (param_10 + 0x7fffffffffffffffU < 0xfffffffffffffffe) {
    uVar3 = 6;
    if (param_3 != 4) {
      uVar3 = uVar30;
    }
    if (uVar3 == 0) goto LAB_008c7b64;
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2f8));
    uVar30 = uVar3;
    if ((uVar3 >> 3 & 1) != 0) {
      uVar15 = FUN_008c8bc4(param_1,uVar10,param_10);
      uVar30 = uVar3 | 4;
      if ((uVar15 & 1) == 0) {
        uVar30 = uVar3;
      }
    }
    if ((((uVar10 ^ 0xffffffff) & 0xff) == 0) ||
       (((uVar10 & 0xff) == 0 && ((uVar30 >> 1 & 1) != 0)))) {
      local_d4 = 1;
    }
    else {
      local_d4 = 0;
      if ((uVar10 & 0xff) != 0) {
        local_d4 = uVar30 >> 2 & 1;
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x2f8));
  }
  else {
LAB_008c7b64:
    local_d4 = 0;
  }
  puVar4 = (undefined8 *)(param_1 + 0x2a0);
  if (*(char *)(param_1 + 0x2b0) == '\0') {
    puVar4 = param_9 + 0x16;
  }
  if ((*(byte *)(puVar4 + 2) & 1) != 0) {
    uVar35 = puVar4[1];
    uVar33 = *puVar4;
    *(undefined1 *)(param_1 + 0x290) = 1;
    *(undefined8 *)(param_1 + 0x288) = uVar35;
    *(undefined8 *)(param_1 + 0x280) = uVar33;
    *(undefined1 *)(param_1 + 0x298) = 1;
  }
  if (*(int *)(param_9 + 0x13) == 3) {
    if (*(char *)(param_1 + 0x290) == '\x01') {
      *(undefined1 *)(param_1 + 0x298) = 1;
    }
    if (*(char *)(param_1 + 0x178) == '\x01') {
      *(undefined4 *)(param_1 + 0x180) = 0;
    }
  }
  lVar24 = *(long *)(param_1 + 0x80);
  if ((lVar24 != 0) && (*(char *)(param_9 + 0x12) == '\x01')) {
    uVar15 = *(ulong *)(lVar24 + 0x10) >> 1;
    plVar18 = (long *)(lVar24 + 0x18);
    if ((*(ulong *)(lVar24 + 0x10) & 1) != 0) {
      plVar18 = (long *)*(long *)(lVar24 + 0x18);
    }
    puVar4 = param_9 + 0xf;
    if ((param_9[0xe] & 1) != 0) {
      puVar4 = (undefined8 *)param_9[0xf];
    }
    lVar24 = 0;
    if (uVar15 != 0) {
      lVar24 = (long)plVar18;
    }
    puVar23 = (undefined8 *)0x0;
    if ((ulong)param_9[0xe] >> 1 != 0) {
      puVar23 = puVar4;
    }
    FUN_008cc09c(param_1 + 0x410,lVar24,uVar15,param_9[0x11],*(int *)(param_9 + 0x13) == 3,*param_9,
                 puVar23);
  }
  bVar9 = (uVar10 + 1 & 0xfe) == 0 & *(byte *)(param_1 + 0x2ec);
  iVar11 = FUN_00868d8c(*(undefined8 *)(param_1 + 8));
  if (bVar9 == 1) {
    iVar27 = (int)*(undefined8 *)(param_1 + 0x2f0);
    iVar12 = iVar27;
    if (((*(char *)(param_1 + 0x2e4) == '\x01') &&
        (iVar12 = iVar27 + 1, *(char *)(param_1 + 0x2ec) == '\x01')) &&
       (*(int *)(param_1 + 0x2e8) == 1)) {
      iVar12 = FUN_00869938(*(undefined8 *)(param_1 + 8));
      iVar12 = iVar27 + iVar12 + -0xb;
    }
    iVar11 = iVar11 - iVar12;
  }
  if (local_d4 != 0) {
    iVar12 = FUN_00869b54(*(undefined8 *)(param_1 + 8));
    iVar11 = iVar11 - iVar12;
  }
  lVar32 = param_11[1] - *param_11;
  lVar24 = 0;
  if (lVar32 != 0) {
    lVar24 = *param_11;
  }
  pvVar16 = (void *)FUN_008699b0(*(undefined8 *)(param_1 + 8),lVar24,lVar32 >> 2);
  FUN_007daa40(pvVar16,param_2);
  FUN_007dab68(pvVar16,param_4);
  if (param_5 + 0x7fffffffffffffffU < 0xfffffffffffffffe) {
    *(long *)((long)pvVar16 + 0x70) = param_5;
    if ((*(byte *)(param_9 + 0xf6) & 1) == 0) {
      if (param_9 + 0xf3 == (undefined8 *)0x0) {
LAB_008c8838:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      param_9[0xf3] = 0;
      param_9[0xf4] = 0;
      param_9[0xf5] = 0;
      *(byte *)(param_9 + 0xf6) = 1;
      uVar15 = (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(*(long **)(param_1 + 0x10),param_5)
      ;
      lVar24 = 0;
      dVar34 = (double)(long)((double)(long)((long)((double)(uVar15 & 0xffffffff) / DAT_001f4ff8 +
                                                   0.5) + (uVar15 >> 0x20) * 1000) * DAT_001f4ff8);
      if (0.0 < dVar34) {
        if (dVar34 < 1.8446744073709552e+19 == NAN(dVar34)) {
          lVar24 = -1;
        }
        else {
          lVar24 = (long)dVar34;
        }
      }
      if ((*(byte *)(param_9 + 0xf6) & 1) == 0) goto LAB_008c8860;
      param_9[0xf3] = lVar24;
      if (*(char *)(param_9 + 0xf5) == '\x01') {
        param_9[0xf4] = 0;
      }
      else {
        if (param_9 + 0xf4 == (undefined8 *)0x0) goto LAB_008c8838;
        param_9[0xf4] = 0;
        *(undefined1 *)(param_9 + 0xf5) = 1;
      }
    }
LAB_008c7e00:
    lVar32 = param_11[1] - *param_11;
    lVar24 = 0;
    if (lVar32 != 0) {
      lVar24 = *param_11;
    }
    uVar13 = thunk_FUN_0084ab88(*(undefined4 *)((long)pvVar16 + 0xc),lVar24,lVar32 >> 2);
    if ((*(byte *)(param_9 + 0xf6) & 1) == 0) {
LAB_008c8860:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    FUN_0086b630(&local_a0,param_1 + 0x3d8,uVar13,*(undefined4 *)((long)pvVar16 + 8),90000,
                 param_9[0xf3],param_9[0xf4],param_9[0xf5],0);
    param_9[0xf4] = CONCAT71(uStack_97,uStack_98);
    param_9[0xf3] = local_a0;
    *(ulong *)((long)param_9 + 0x7a9) = CONCAT17(uStack_88,uStack_8f);
    *(ulong *)((long)param_9 + 0x7a1) = CONCAT17(local_90,uStack_97);
  }
  else if (*(char *)(param_9 + 0xf6) == '\x01') goto LAB_008c7e00;
  local_e8 = operator_new(0xd0);
  FUN_007dc744(local_e8,pvVar16);
  pvVar17 = operator_new(0xd0);
  FUN_007dc744(pvVar17,pvVar16);
  local_f0 = operator_new(0xd0);
  FUN_007dc744(local_f0,pvVar16);
  FUN_008c7020(param_1,param_9,1,1,pvVar16);
  if (((*(long *)(param_1 + 0x80) != 0) && (*(char *)((long)pvVar16 + 0x32) != '\0')) &&
     (uVar15 = FUN_007dbb58(pvVar16,0x12), (uVar15 & 1) == 0)) {
    uVar15 = FUN_004022fc();
    if ((uVar15 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtp_sender_video.cc",0x13d2,
                   "Disable dependency descriptor because failed to attach it to a key frame.");
    }
    FUN_008c9b4c((long *)(param_1 + 0x80),0);
  }
  FUN_008c7020(param_1,param_9,1,0,local_e8);
  FUN_008c7020(param_1,param_9,0,0,pvVar17);
  FUN_008c7020(param_1,param_9,0,1,local_f0);
  iVar12 = *(int *)((long)local_f0 + 0x10);
  iVar27 = *(int *)((long)pvVar17 + 0x10);
  iVar6 = *(int *)((long)pvVar16 + 0x10);
  iVar7 = *(int *)((long)local_e8 + 0x10);
  uVar15 = FUN_007dbb58(local_e8,0x11);
  if ((((uVar15 & 1) != 0) || (uVar15 = FUN_007dbb58(local_e8,0x12), (uVar15 & 1) != 0)) &&
     (*(char *)(param_9 + 0xf2) == '\x01')) {
    *(undefined4 *)((long)param_9 + 0x12a) = 0xffffffff;
    *(undefined2 *)((long)param_9 + 0x12e) = 0xff;
    *(undefined1 *)(param_9 + 0x27) = 0;
    param_9[0x26] = 0xffffffff;
  }
  plVar18 = *(long **)(param_1 + 0x3c8);
  if (plVar18 == (long *)0x0) {
    if ((*(char *)(param_1 + 0x3d0) == '\x01') && (uVar15 = FUN_004022fc(), (uVar15 & 1) == 0)) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtp_sender_video.cc",0x15f2,
                   "No FrameEncryptor is attached to this video sending stream but one is required since require_frame_encryptor is set"
                  );
    }
    local_118 = (void *)0x0;
    local_e0 = param_6;
LAB_008c8170:
    if ((*(byte *)(param_1 + 0x3d2) & 1) == 0) {
      uVar13 = *(undefined4 *)(&DAT_00224ba0 + (ulong)param_3 * 4);
    }
    else {
      uVar13 = 1;
    }
    plVar18 = (long *)FUN_008cc260(uVar13,local_e0,param_7,CONCAT44(iVar7 - iVar27,iVar11 - iVar27),
                                   CONCAT44(iVar6 - iVar27,iVar12 - iVar27),param_9);
    lVar24 = (**(code **)(*plVar18 + 0x10))();
    if (lVar24 == 0) {
      param_7 = (void *)0x0;
    }
    else {
      pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x39c));
      bVar8 = *(byte *)(param_1 + 0x398);
      if ((bVar8 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x398) = 1;
      }
      pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x39c));
      lVar29 = 0;
      local_a0 = (void **)0x0;
      uStack_98 = 0;
      uStack_97 = 0;
      lVar32 = 1 - lVar24;
      local_90 = 0;
      uStack_8f = 0;
      pvVar19 = pvVar16;
      do {
        pvVar1 = local_e8;
        pvVar20 = local_f0;
        local_a8 = (void *)0x0;
        if (lVar24 == 1) {
          pvVar16 = (void *)0x0;
          local_a8 = pvVar19;
        }
        else {
          pvVar16 = pvVar19;
          if (lVar29 == 0) {
            local_e8 = (void *)0x0;
            local_a8 = pvVar1;
          }
          else if (lVar32 == 0) {
            local_f0 = (void *)0x0;
            local_a8 = pvVar20;
          }
          else {
            pvVar20 = operator_new(0xd0);
            FUN_007dc744(pvVar20,pvVar17);
            pvVar19 = local_a8;
            bVar2 = local_a8 != (void *)0x0;
            local_a8 = pvVar20;
            if (bVar2) {
              FUN_007dc854(pvVar19);
              operator_delete(pvVar19);
            }
          }
        }
        *(bool *)((long)local_a8 + 0xb8) = lVar29 == 0;
        uVar15 = (**(code **)(*plVar18 + 0x18))(plVar18,local_a8);
        param_7 = (void *)(uVar15 & 0xffffffff);
        if ((uVar15 & 1) == 0) {
          FUN_008c9c14(&local_a8,0);
          goto LAB_008c86d4;
        }
        *(char *)((long)local_a8 + 0xa8) = (char)local_d4;
        *(bool *)((long)local_a8 + 0xb9) = *(int *)(param_9 + 0x13) == 3;
        uVar15 = FUN_007dbb58(local_a8,0xd);
        pvVar19 = local_a8;
        if ((uVar15 & 1) != 0) {
          lVar21 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
          lVar25 = 0x7fffffffffffffff;
          if ((lVar21 != 0x7fffffffffffffff) &&
             (lVar26 = *(long *)((long)pvVar19 + 0x70), lVar26 != -0x8000000000000000)) {
            lVar25 = -0x8000000000000000;
            if (lVar26 != 0x7fffffffffffffff && lVar21 != -0x8000000000000000) {
              lVar25 = lVar21 - lVar26;
            }
          }
          uVar13 = FUN_00659dd8(lVar25);
          auVar36 = FUN_007dbacc(pvVar19,0xd,0xd);
          if (auVar36._8_8_ != 0) {
            FUN_007d937c(auVar36._0_8_,auVar36._8_8_,uVar13,5);
          }
        }
        *(byte *)((long)local_a8 + 0xba) = bVar9;
        if (*(char *)(param_1 + 0x2e4) == '\x01') {
          local_b0 = &DAT_aaaaaaaaaaaaaaaa;
          puVar22 = (undefined1 *)operator_new(0xd0);
          FUN_007dc744(puVar22,local_a8);
          pvVar19 = local_a8;
          local_b0 = puVar22;
          puVar22 = (undefined1 *)FUN_007db6a0(puVar22,*(long *)((long)local_a8 + 0x18) + 1);
          *puVar22 = *(undefined1 *)((long)pvVar19 + 1);
          lVar25 = *(long *)((long)pvVar19 + 0x58);
          if (lVar25 != 0) {
            lVar25 = *(long *)(lVar25 + 0x10) + *(long *)((long)pvVar19 + 0x60);
          }
          pvVar20 = (void *)0x0;
          if (*(size_t *)((long)pvVar19 + 0x18) != 0) {
            pvVar20 = (void *)(lVar25 + *(long *)((long)pvVar19 + 0x10));
          }
          memcpy(puVar22 + 1,pvVar20,*(size_t *)((long)pvVar19 + 0x18));
          if ((*(byte *)(param_1 + 0x2e4) & 1) == 0) goto LAB_008c884c;
          FUN_007daa40(local_b0,*(undefined4 *)(param_1 + 0x2e0));
          local_b0[0xbb] = 1;
          FUN_007dc8a8(local_b0,1);
          puVar22 = local_b0;
          local_b0[0xa8] = *(undefined1 *)((long)local_a8 + 0xa8);
          puVar4 = (undefined8 *)CONCAT71(uStack_97,uStack_98);
          if (puVar4 < (undefined8 *)CONCAT71(uStack_8f,local_90)) {
            if (puVar4 == (undefined8 *)0x0) goto LAB_008c8838;
            local_b0 = (undefined1 *)0x0;
            puVar23 = puVar4 + 1;
            *puVar4 = puVar22;
          }
          else {
            puVar23 = (undefined8 *)FUN_0086a31c(&local_a0,&local_b0);
          }
          puVar22 = local_b0;
          uStack_98 = SUB81(puVar23,0);
          uStack_97 = (undefined7)((ulong)puVar23 >> 8);
          local_b0 = (undefined1 *)0x0;
          if (puVar22 != (undefined1 *)0x0) {
            FUN_007dc854(puVar22);
            operator_delete(puVar22);
          }
        }
        else {
          FUN_007dc8a8(local_a8,1);
          pvVar19 = local_a8;
          puVar4 = (undefined8 *)CONCAT71(uStack_97,uStack_98);
          if (puVar4 < (undefined8 *)CONCAT71(uStack_8f,local_90)) {
            if (puVar4 == (undefined8 *)0x0) goto LAB_008c8838;
            local_a8 = (void *)0x0;
            puVar23 = puVar4 + 1;
            *puVar4 = pvVar19;
          }
          else {
            puVar23 = (undefined8 *)FUN_0086a31c(&local_a0,&local_a8);
          }
          uStack_98 = SUB81(puVar23,0);
          uStack_97 = (undefined7)((ulong)puVar23 >> 8);
        }
        if ((bVar8 & 1) == 0) {
          if ((lVar29 == 0) && (uVar15 = FUN_00417e08(), (uVar15 & 1) == 0)) {
            FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtp_sender_video.cc",0x1839,
                         "Sent first RTP packet of the first video frame (pre-pacer)");
          }
          if ((lVar32 == 0) && (uVar15 = FUN_00417e08(), (uVar15 & 1) == 0)) {
            FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtp_sender_video.cc",0x1859,
                         "Sent last RTP packet of the first video frame (pre-pacer)");
          }
        }
        pvVar19 = local_a8;
        local_a8 = (void *)0x0;
        if (pvVar19 != (void *)0x0) {
          FUN_007dc854(pvVar19);
          operator_delete(pvVar19);
        }
        lVar32 = lVar32 + 1;
        lVar29 = lVar29 + -1;
        pvVar19 = pvVar16;
      } while (lVar32 != 1);
      ppvStack_c8 = (void **)CONCAT71(uStack_97,uStack_98);
      local_c0 = CONCAT71(uStack_8f,local_90);
      uStack_98 = 0;
      uStack_97 = 0;
      local_90 = 0;
      uStack_8f = 0;
      local_d0 = local_a0;
      local_a0 = (void **)0x0;
      FUN_008c6618(param_1,&local_d0,param_8);
      ppvVar28 = local_d0;
      ppvVar31 = ppvStack_c8;
      if (local_d0 != (void **)0x0) {
        while (ppvVar28 != ppvVar31) {
          ppvVar31 = ppvVar31 + -1;
          if (ppvVar31 == (void **)0x0) goto LAB_008c8824;
          pvVar19 = *ppvVar31;
          *ppvVar31 = (void *)0x0;
          if (pvVar19 != (void *)0x0) {
            FUN_007dc854(pvVar19);
            operator_delete(pvVar19);
          }
        }
        ppvStack_c8 = ppvVar28;
        operator_delete(ppvVar28);
      }
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_9 + 0x14);
      bVar9 = *(byte *)(param_1 + 0x74);
      if ((bVar9 & *(byte *)((long)param_9 + 0x11c)) == 0) {
        if (*(byte *)((long)param_9 + 0x11c) != bVar9) goto LAB_008c867c;
LAB_008c87fc:
        if (*(char *)(param_1 + 0x78) == '\x01') {
          bVar9 = FUN_008c8898(param_9);
          bVar9 = bVar9 ^ 1;
        }
        else {
          bVar9 = 0;
        }
      }
      else {
        if ((bVar9 & 1) == 0) {
LAB_008c884c:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                    );
        }
        if (((((*(char *)(param_9 + 0x1b) == *(char *)(param_1 + 0x30)) &&
              (*(char *)((long)param_9 + 0xd9) == *(char *)(param_1 + 0x31))) &&
             (*(char *)((long)param_9 + 0xda) == *(char *)(param_1 + 0x32))) &&
            ((*(int *)((long)param_9 + 0xdc) == *(int *)(param_1 + 0x34) &&
             (*(int *)(param_9 + 0x1c) == *(int *)(param_1 + 0x38))))) &&
           ((*(int *)((long)param_9 + 0xe4) == *(int *)(param_1 + 0x3c) &&
            (uVar15 = FUN_008c92a0(param_9 + 0x1d,param_1 + 0x40), (uVar15 & 1) != 0))))
        goto LAB_008c87fc;
LAB_008c867c:
        FUN_0060a64c(param_1 + 0x30,param_9 + 0x1b);
        bVar9 = FUN_008c8898(param_9);
        bVar9 = bVar9 ^ 0xff;
      }
      *(byte *)(param_1 + 0x78) = bVar9 & 1;
      if ((*(int *)(param_9 + 0x13) == 3) || (uVar15 = FUN_008c7918(param_9), (uVar15 & 1) != 0)) {
        *(undefined1 *)(param_1 + 0x298) = 0;
        if (*(int *)(param_1 + 0x180) == 0) {
          FUN_008c93b0(param_1 + 0x188,param_1 + 0x88);
        }
        *(undefined4 *)(param_1 + 0x180) = 2;
      }
LAB_008c86d4:
      ppvVar31 = local_a0;
      if (local_a0 != (void **)0x0) {
        ppvVar28 = (void **)CONCAT71(uStack_97,uStack_98);
        while (ppvVar31 != ppvVar28) {
          ppvVar28 = ppvVar28 + -1;
          if (ppvVar28 == (void **)0x0) goto LAB_008c8824;
          pvVar19 = *ppvVar28;
          *ppvVar28 = (void *)0x0;
          if (pvVar19 != (void *)0x0) {
            FUN_007dc854(pvVar19);
            operator_delete(pvVar19);
          }
        }
        uStack_98 = SUB81(ppvVar31,0);
        uStack_97 = (undefined7)((ulong)ppvVar31 >> 8);
        operator_delete(local_a0);
      }
    }
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 8))(plVar18);
    }
  }
  else {
    pvVar19 = (void *)(**(code **)(*plVar18 + 0x28))(plVar18,1,param_7);
    if (pvVar19 == (void *)0x0) {
      pvVar20 = (void *)0x0;
    }
    else {
      pvVar20 = operator_new__((ulong)pvVar19);
    }
    local_a8 = (void *)0x0;
    if (*(char *)(param_1 + 0x3d1) == '\x01') {
      FUN_00863c14(&local_a0,param_9);
      lVar24 = CONCAT71(uStack_97,uStack_98);
      ppvVar31 = local_a0;
    }
    else {
      lVar24 = 0;
      ppvVar31 = (void **)0x0;
    }
    uVar15 = lVar24 - (long)ppvVar31;
    ppvVar28 = (void **)0x0;
    if (uVar15 != 0) {
      ppvVar28 = ppvVar31;
    }
    iVar14 = (**(code **)(**(long **)(param_1 + 0x3c8) + 0x20))
                       (*(long **)(param_1 + 0x3c8),1,*(undefined4 *)((long)local_e8 + 0xc),ppvVar28
                        ,uVar15,param_6,param_7);
    param_7 = local_a8;
    local_118 = pvVar20;
    if (iVar14 == 0) {
      if (pvVar19 < local_a8) {
        pvVar1 = (void *)((long)pvVar19 + ((ulong)pvVar19 >> 1));
        pvVar5 = local_a8;
        if (local_a8 <= pvVar1) {
          pvVar5 = pvVar1;
        }
        local_118 = operator_new__((ulong)pvVar5);
        if (pvVar20 != (void *)0x0) {
          memcpy(local_118,pvVar20,(size_t)pvVar19);
          operator_delete__(pvVar20);
        }
      }
      if (ppvVar31 != (void **)0x0) {
        if (lVar24 - 1U < uVar15) goto LAB_008c8824;
        operator_delete(ppvVar31);
      }
      local_e0 = (void *)0x0;
      if (param_7 != (void *)0x0) {
        local_e0 = local_118;
      }
      goto LAB_008c8170;
    }
    if (ppvVar31 != (void **)0x0) {
      if (lVar24 - 1U < uVar15) {
LAB_008c8824:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      operator_delete(ppvVar31);
    }
    param_7 = (void *)0x0;
  }
  if (local_118 != (void *)0x0) {
    operator_delete__(local_118);
  }
  if (local_f0 != (void *)0x0) {
    FUN_007dc854(local_f0);
    operator_delete(local_f0);
  }
  if (pvVar17 != (void *)0x0) {
    FUN_007dc854(pvVar17);
    operator_delete(pvVar17);
  }
  if (local_e8 != (void *)0x0) {
    FUN_007dc854(local_e8);
    operator_delete(local_e8);
  }
  if (pvVar16 != (void *)0x0) {
    FUN_007dc854(pvVar16);
    operator_delete(pvVar16);
  }
LAB_008c87c4:
  FUN_0066103c(&local_80);
  return (uint)param_7 & 1;
}


// ===== 008c8898  FUN_008c8898 =====

bool FUN_008c8898(long param_1)

{
  byte bVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x90) == '\x01') {
    bVar2 = *(int *)(param_1 + 0xc) == 0 || *(int *)(param_1 + 0xc) == 0xff;
  }
  else {
    if (*(int *)(param_1 + 0xac) == 2) {
      if (*(char *)(param_1 + 0x790) != '\x02') goto LAB_008c8920;
      bVar1 = *(byte *)(param_1 + 0x134);
    }
    else {
      if (*(int *)(param_1 + 0xac) != 1) {
        return true;
      }
      if (*(char *)(param_1 + 0x790) != '\x01') {
LAB_008c8920:
                    /* WARNING: Subroutine does not return */
        FUN_005ee558();
      }
      bVar1 = *(byte *)(param_1 + 0x12e);
    }
    bVar2 = bVar1 - 0xff < 0xffffff02;
  }
  return bVar2;
}


// ===== 008c8924  FUN_008c8924 =====

uint FUN_008c8924(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  void *pvVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  long *plVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 local_1078;
  void *local_1068;
  void *local_1060;
  void *local_1058;
  undefined1 auStack_1050 [2032];
  undefined1 auStack_860 [2032];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  lVar11 = param_1[0x86];
  if (lVar11 == 0) {
    uVar5 = FUN_007bcaf8(param_5);
    plVar6 = *(long **)(param_5 + 0x88);
    if (plVar6 == (long *)0x0) {
      local_1078 = 0;
    }
    else {
      local_1078 = (**(code **)(*plVar6 + 0x20))(plVar6);
    }
    lVar11 = *(long *)(param_5 + 0x90);
    puVar10 = auStack_1050;
    FUN_007dd000(auStack_1050,param_6);
    pvVar7 = (void *)*param_8;
    local_1068 = (void *)0x0;
    local_1060 = (void *)0x0;
    local_1058 = (void *)0x0;
    uVar8 = param_8[1] - (long)pvVar7;
    if (uVar8 != 0) {
      if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005da79c();
      }
      local_1068 = operator_new(uVar8);
      pvVar1 = (void *)((long)local_1068 + uVar8);
      local_1058 = pvVar1;
      memcpy(local_1068,pvVar7,uVar8);
      local_1060 = pvVar1;
    }
    uVar2 = 0;
    if (lVar11 != 0) {
      uVar2 = local_1078;
    }
    uVar4 = (**(code **)*param_1)
                      (param_1,param_2,param_3,param_4,uVar5,uVar2,lVar11,lVar11,puVar10,param_7,
                       &local_1068);
    if (local_1068 != (void *)0x0) {
      uVar9 = (ulong)((long)local_1060 + (-4 - ((long)local_1060 << 0x3e))) >> 2;
      uVar8 = (ulong)(((long)local_1068 - (long)local_1060 << 0x3e) -
                     ((long)local_1068 - (long)local_1060)) >> 2;
      if (uVar9 <= uVar8) {
        uVar8 = uVar9;
      }
      pvVar7 = local_1060;
      if ((1 < uVar8) && ((((int)local_1068 - (int)local_1060 | -(int)local_1060) & 3U) == 0)) {
        uVar8 = uVar8 & 0x3ffffffffffffffe;
        pvVar7 = (void *)((long)local_1060 + uVar8 * -4);
        do {
          uVar8 = uVar8 - 2;
        } while (uVar8 != 0);
      }
      while (pvVar7 != local_1068) {
        pvVar7 = (void *)((long)pvVar7 + -4);
        if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      local_1060 = local_1068;
      operator_delete(local_1068);
      puVar10 = auStack_1050;
    }
  }
  else {
    puVar10 = auStack_860;
    FUN_007dd000(auStack_860,param_6);
    uVar4 = FUN_008ca024(lVar11,param_2,param_3,param_4,param_5,auStack_860,param_7,param_8);
  }
  FUN_007dd190(puVar10);
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008c8b68  FUN_008c8b68 =====

undefined8 FUN_008c8b68(long param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2f8));
  uVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  auVar2 = FUN_00853260(param_1 + 800,uVar1);
  uVar1 = auVar2._0_8_;
  if ((auVar2 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    uVar1 = 0;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x2f8));
  return uVar1;
}


// ===== 008c8bc4  FUN_008c8bc4 =====

undefined8 FUN_008c8bc4(long param_1,uint param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  uint local_78;
  undefined1 uStack_71;
  uint *local_70;
  long local_68;
  
  lVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  local_70 = &local_78;
  local_78 = param_2 & 0xff;
  local_68 = param_1 + 0x380;
  lVar3 = FUN_008c9c60(&local_68,&local_78,&DAT_001f94c3,&local_70,&uStack_71);
  FUN_008d4914(lVar3 + 0x28,1,lVar2);
  lVar6 = *(long *)(lVar3 + 0x88);
  *(long *)(lVar3 + 0x88) = lVar2;
  local_78 = (param_2 & 0xff) - 1;
  if ((lVar2 == 0x7fffffffffffffff) || (lVar6 == -0x8000000000000000)) {
    if (local_78 < 0xfe) {
      return 1;
    }
  }
  else if (local_78 < 0xfe) {
    if (((lVar2 == -0x8000000000000000) || (lVar6 == 0x7fffffffffffffff)) ||
       (lVar2 - lVar6 < 0x203a0)) {
      lVar3 = 0x7fffffffffffffff;
      do {
        local_70 = &local_78;
        local_68 = param_1 + 0x380;
        lVar4 = FUN_008c9d9c(&local_68,&local_78,&DAT_001f94c3,&local_70,&uStack_71);
        auVar8 = FUN_008d4894(lVar4 + 0x28,lVar2);
        uVar5 = auVar8._0_8_;
        lVar6 = lVar3;
        if (((auVar8 & (undefined1  [16])0x1) != (undefined1  [16])0x0) && (0 < (long)uVar5)) {
          if (0x7ffffffffffffffe < uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_0061fd88("../../api/units/frequency.h",0x4d,"frequency.IsFinite()",&DAT_001f5fa0);
          }
          lVar6 = *(long *)(lVar4 + 0x88);
          lVar4 = 0x7fffffffffffffff;
          if (lVar6 == 0x7fffffffffffffff) {
            lVar6 = 0x7fffffffffffffff;
          }
          else {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = 1000000000 / uVar5;
            }
            if (lVar6 != -0x8000000000000000) {
              lVar6 = uVar1 + lVar6;
            }
            if ((lVar6 != 0x7fffffffffffffff && lVar2 != -0x8000000000000000) &&
               (lVar4 = lVar6, lVar6 != -0x8000000000000000)) {
              lVar4 = lVar6 - lVar2;
            }
          }
          lVar7 = -0x8000000000000000;
          if (param_3 == -0x8000000000000000) {
            lVar7 = 0x7fffffffffffffff;
          }
          else if (param_3 != 0x7fffffffffffffff) {
            lVar7 = -param_3;
          }
          if (lVar3 <= lVar6) {
            lVar6 = lVar3;
          }
          if (lVar4 <= lVar7) {
            lVar6 = lVar3;
          }
        }
        local_78 = local_78 - 1;
        lVar3 = lVar6;
      } while (-1 < (int)local_78);
      if (lVar6 != -0x8000000000000000) {
        lVar3 = lVar6 - lVar2;
      }
      lVar4 = 0x7fffffffffffffff;
      if (lVar2 != -0x8000000000000000 && lVar6 != 0x7fffffffffffffff) {
        lVar4 = lVar3;
      }
      if (lVar4 <= param_3) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}


// ===== 008c8e0c  FUN_008c8e0c =====

bool FUN_008c8e0c(int *param_1,int *param_2)

{
  ulong uVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  
  if (*param_1 != *param_2) {
    return false;
  }
  if (param_1[1] == param_2[1]) {
    piVar5 = param_1 + 4;
    if ((*(ulong *)(param_1 + 2) & 1) != 0) {
      piVar5 = *(int **)(param_1 + 4);
    }
    uVar1 = *(ulong *)(param_1 + 2) & 0x7ffffffffffffffe;
    lVar4 = uVar1 * 2;
    if (lVar4 + (*(ulong *)(param_2 + 2) >> 1) * -4 == 0) {
      if (uVar1 != 0) {
        piVar6 = param_2 + 4;
        if ((*(ulong *)(param_2 + 2) & 1) != 0) {
          piVar6 = *(int **)(param_2 + 4);
        }
        do {
          if (*piVar5 != *piVar6) {
            return false;
          }
          lVar4 = lVar4 + -4;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        } while (lVar4 != 0);
      }
      sVar3 = (*(ulong *)(param_1 + 0xe) & 0x7ffffffffffffffe) * 2;
      if (sVar3 + (*(ulong *)(param_2 + 0xe) >> 1) * -4 == 0) {
        piVar5 = param_2 + 0x10;
        if ((*(ulong *)(param_2 + 0xe) & 1) != 0) {
          piVar5 = *(int **)(param_2 + 0x10);
        }
        piVar6 = param_1 + 0x10;
        if ((*(ulong *)(param_1 + 0xe) & 1) != 0) {
          piVar6 = *(int **)(param_1 + 0x10);
        }
        iVar2 = memcmp(piVar6,piVar5,sVar3);
        if (iVar2 == 0) {
          sVar3 = (*(ulong *)(param_1 + 0x14) & 0x7ffffffffffffffe) * 2;
          if (sVar3 + (*(ulong *)(param_2 + 0x14) >> 1) * -4 == 0) {
            piVar5 = param_2 + 0x16;
            if ((*(ulong *)(param_2 + 0x14) & 1) != 0) {
              piVar5 = *(int **)(param_2 + 0x16);
            }
            piVar6 = param_1 + 0x16;
            if ((*(ulong *)(param_1 + 0x14) & 1) != 0) {
              piVar6 = *(int **)(param_1 + 0x16);
            }
            iVar2 = memcmp(piVar6,piVar5,sVar3);
            return iVar2 == 0;
          }
        }
      }
    }
  }
  return false;
}


// ===== 008c8f44  FUN_008c8f44 =====

void FUN_008c8f44(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if ((*param_2 & 1) != 0) {
    puVar4 = param_1 + 1;
    uVar2 = *param_1;
    puVar3 = puVar4;
    if ((uVar2 & 1) != 0) {
      puVar3 = (ulong *)*puVar4;
    }
    uVar5 = uVar2 >> 1;
    if (uVar5 != 0) {
      puVar3 = puVar3 + uVar5 * 7;
      do {
        if (puVar3 + -7 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if ((puVar3[-6] & 1) != 0) {
          operator_delete((void *)puVar3[-5]);
        }
        uVar5 = uVar5 - 1;
        puVar3 = puVar3 + -7;
      } while (uVar5 != 0);
      uVar2 = *param_1;
    }
    if ((uVar2 & 1) != 0) {
      operator_delete((void *)param_1[1]);
    }
    if ((*param_2 & 1) != 0) {
      *param_1 = *param_2;
      uVar5 = param_2[8];
      uVar2 = param_2[7];
      uVar6 = param_2[5];
      uVar8 = param_2[2];
      uVar7 = param_2[1];
      uVar10 = param_2[4];
      uVar9 = param_2[3];
      param_1[6] = param_2[6];
      param_1[5] = uVar6;
      param_1[8] = uVar5;
      param_1[7] = uVar2;
      param_1[2] = uVar8;
      *puVar4 = uVar7;
      param_1[4] = uVar10;
      param_1[3] = uVar9;
      uVar5 = param_2[0x10];
      uVar2 = param_2[0xf];
      uVar6 = param_2[0xd];
      uVar8 = param_2[10];
      uVar7 = param_2[9];
      uVar10 = param_2[0xc];
      uVar9 = param_2[0xb];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar6;
      param_1[0x10] = uVar5;
      param_1[0xf] = uVar2;
      param_1[10] = uVar8;
      param_1[9] = uVar7;
      param_1[0xc] = uVar10;
      param_1[0xb] = uVar9;
      uVar5 = param_2[0x18];
      uVar2 = param_2[0x17];
      uVar6 = param_2[0x15];
      uVar8 = param_2[0x12];
      uVar7 = param_2[0x11];
      uVar10 = param_2[0x14];
      uVar9 = param_2[0x13];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar6;
      param_1[0x18] = uVar5;
      param_1[0x17] = uVar2;
      param_1[0x12] = uVar8;
      param_1[0x11] = uVar7;
      param_1[0x14] = uVar10;
      param_1[0x13] = uVar9;
      uVar5 = param_2[0x1c];
      uVar2 = param_2[0x1b];
      uVar6 = param_2[0x19];
      param_1[0x1a] = param_2[0x1a];
      param_1[0x19] = uVar6;
      param_1[0x1c] = uVar5;
      param_1[0x1b] = uVar2;
      *param_2 = 0;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x8c9070);
  (*pcVar1)();
}


// ===== 008c9070  FUN_008c9070 =====

void FUN_008c9070(ulong *param_1,ulong *param_2,ulong param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  puVar6 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar3 = 4;
  }
  else {
    puVar6 = (ulong *)param_1[1];
    uVar3 = param_1[2];
  }
  uVar7 = *param_1 >> 1;
  if (uVar3 < param_3) {
    uVar3 = uVar3 * 2;
    if (uVar3 < param_3 || uVar3 - param_3 == 0) {
      uVar3 = param_3;
    }
    if (0x492492492492492 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar2 = (ulong *)operator_new(uVar3 * 0x38);
    uVar4 = param_3;
    puVar5 = puVar2;
  }
  else {
    uVar4 = param_3 - uVar7;
    if (param_3 < uVar7 || uVar4 == 0) {
      uVar4 = 0;
      puVar2 = (ulong *)0x0;
      puVar5 = puVar6 + param_3 * 7;
      uVar7 = uVar7 - param_3;
      uVar3 = param_3;
      if (param_3 != 0) goto LAB_008c9144;
    }
    else {
      puVar5 = (ulong *)0x0;
      puVar2 = puVar6 + uVar7 * 7;
      uVar3 = uVar7;
      uVar7 = 0;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
LAB_008c9144:
        *puVar6 = *param_2;
        if (puVar6 != param_2) {
          if ((puVar6[1] & 1) != 0) {
            operator_delete((void *)puVar6[2]);
          }
          puVar6[1] = param_2[1];
          uVar10 = param_2[2];
          uVar9 = param_2[5];
          uVar8 = param_2[4];
          puVar6[3] = param_2[3];
          puVar6[2] = uVar10;
          puVar6[5] = uVar9;
          puVar6[4] = uVar8;
          param_2[1] = 0;
        }
        puVar1 = (undefined1 *)((long)param_2 + 0x34);
        uVar8 = param_2[6];
        param_2 = param_2 + 7;
        *(undefined1 *)((long)puVar6 + 0x34) = *puVar1;
        *(int *)(puVar6 + 6) = (int)uVar8;
        puVar6 = puVar6 + 7;
      }
    }
    puVar6 = puVar5;
    uVar3 = 0;
    puVar5 = (ulong *)0x0;
    if (uVar4 == 0) goto LAB_008c91e8;
  }
  do {
    if (puVar2 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar4 = uVar4 - 1;
    *puVar2 = *param_2;
    puVar2[1] = 0;
    puVar2[1] = param_2[1];
    uVar10 = param_2[2];
    uVar9 = param_2[5];
    uVar8 = param_2[4];
    puVar2[3] = param_2[3];
    puVar2[2] = uVar10;
    puVar2[5] = uVar9;
    puVar2[4] = uVar8;
    puVar1 = (undefined1 *)((long)param_2 + 0x34);
    uVar8 = param_2[6];
    param_2[1] = 0;
    param_2 = param_2 + 7;
    *(undefined1 *)((long)puVar2 + 0x34) = *puVar1;
    *(int *)(puVar2 + 6) = (int)uVar8;
    puVar2 = puVar2 + 7;
  } while (uVar4 != 0);
LAB_008c91e8:
  if (uVar7 != 0) {
    puVar6 = puVar6 + uVar7 * 7;
    do {
      if (puVar6 + -7 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if ((puVar6[-6] & 1) != 0) {
        operator_delete((void *)puVar6[-5]);
      }
      uVar7 = uVar7 - 1;
      puVar6 = puVar6 + -7;
    } while (uVar7 != 0);
  }
  uVar7 = *param_1;
  if (puVar5 != (ulong *)0x0) {
    if ((uVar7 & 1) != 0) {
      operator_delete((void *)param_1[1]);
      uVar7 = *param_1;
    }
    uVar7 = uVar7 | 1;
    param_1[1] = (ulong)puVar5;
    param_1[2] = uVar3;
  }
  *param_1 = uVar7 & 1 | param_3 << 1;
  return;
}


// ===== 008c92a0  FUN_008c92a0 =====

bool FUN_008c92a0(float *param_1,float *param_2)

{
  byte bVar1;
  bool bVar2;
  
  bVar1 = *(byte *)(param_2 + 0xc);
  bVar2 = *(byte *)(param_1 + 0xc) == bVar1;
  if ((bVar1 & *(byte *)(param_1 + 0xc)) != 0) {
    if ((bVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    if ((((((param_1[10] != param_2[10]) || (param_1[0xb] != param_2[0xb])) ||
          (*param_1 != *param_2)) || ((param_1[1] != param_2[1] || (param_1[2] != param_2[2])))) ||
        ((param_1[3] != param_2[3] || ((param_1[4] != param_2[4] || (param_1[5] != param_2[5]))))))
       || ((param_1[6] != param_2[6] || ((param_1[7] != param_2[7] || (param_1[8] != param_2[8])))))
       ) {
      return false;
    }
    bVar2 = param_1[9] == param_2[9];
  }
  return bVar2;
}


// ===== 008c93b0  FUN_008c93b0 =====

void FUN_008c93b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  undefined1 uVar4;
  
  cVar3 = *(char *)(param_1 + 0x3c);
  if (cVar3 == *(char *)(param_2 + 0x3c)) {
    if (cVar3 != '\0') {
      uVar2 = *param_2;
      *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
      *param_1 = uVar2;
      if (param_1 != param_2) {
        puVar1 = (undefined8 *)(param_2 + 4);
        if ((*(ulong *)(param_2 + 2) & 1) != 0) {
          puVar1 = *(undefined8 **)(param_2 + 4);
        }
        FUN_008c94ac(param_1 + 2,puVar1,
                     ((long)((*(ulong *)(param_2 + 2) >> 1) * 0x38) >> 3) * 0x6db6db6db6db6db7);
        return;
      }
    }
  }
  else if (cVar3 == '\0') {
    if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar4 = *(undefined1 *)(param_2 + 1);
    uVar2 = *param_2;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined1 *)(param_1 + 1) = uVar4;
    *param_1 = uVar2;
    if (1 < *(ulong *)(param_2 + 2)) {
      FUN_008c4aec();
    }
    *(undefined1 *)(param_1 + 0x3c) = 1;
  }
  else {
    if (*(long *)(param_1 + 2) != 0) {
      FUN_008c4c88();
    }
    *(undefined1 *)(param_1 + 0x3c) = 0;
  }
  return;
}


// ===== 008c94ac  FUN_008c94ac =====

void FUN_008c94ac(ulong *param_1,ulong *param_2,ulong param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  ulong *puVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  puVar12 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar8 = 4;
  }
  else {
    puVar12 = (ulong *)param_1[1];
    uVar8 = param_1[2];
  }
  uVar13 = *param_1 >> 1;
  if (uVar8 < param_3) {
    uVar8 = uVar8 * 2;
    if (uVar8 < param_3 || uVar8 - param_3 == 0) {
      uVar8 = param_3;
    }
    if (0x492492492492492 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar5 = (ulong *)operator_new(uVar8 * 0x38);
    uVar9 = param_3;
    puVar10 = puVar12;
    puVar12 = puVar5;
  }
  else {
    uVar9 = param_3 - uVar13;
    if (param_3 < uVar13 || uVar9 == 0) {
      uVar9 = 0;
      puVar5 = (ulong *)0x0;
      puVar10 = puVar12 + param_3 * 7;
      uVar8 = uVar13 - param_3;
      uVar13 = param_3;
      if (param_3 != 0) goto LAB_008c9584;
    }
    else {
      uVar8 = 0;
      puVar10 = (ulong *)0x0;
      puVar5 = puVar12 + uVar13 * 7;
      if (uVar13 != 0) {
LAB_008c9584:
        lVar11 = 0;
        do {
          puVar3 = (undefined8 *)((long)param_2 + lVar11);
          *(undefined8 *)((long)puVar12 + lVar11) = *puVar3;
          if (puVar12 != param_2) {
            plVar6 = (long *)((long)param_2 + lVar11 + 0x10);
            uVar7 = *(ulong *)((long)param_2 + lVar11 + 8);
            if ((uVar7 & 1) != 0) {
              plVar6 = (long *)*plVar6;
            }
            FUN_008c9710((long)puVar12 + lVar11 + 8,plVar6,(long)(uVar7 << 2) >> 3);
          }
          uVar4 = *(undefined4 *)(puVar3 + 6);
          uVar13 = uVar13 - 1;
          lVar2 = lVar11 + 0x38;
          *(undefined1 *)((long)puVar12 + lVar11 + 0x34) = *(undefined1 *)((long)puVar3 + 0x34);
          *(undefined4 *)((long)puVar12 + lVar11 + 0x30) = uVar4;
          lVar11 = lVar2;
        } while (uVar13 != 0);
        param_2 = (ulong *)((long)param_2 + lVar2);
      }
    }
    uVar13 = uVar8;
    uVar8 = 0;
    puVar12 = (ulong *)0x0;
    if (uVar9 == 0) goto LAB_008c95f8;
  }
  do {
    if (puVar5 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar7 = *param_2;
    puVar5[1] = 0;
    *puVar5 = uVar7;
    uVar7 = param_2[1];
    if (1 < uVar7) {
      if ((uVar7 & 1) == 0) {
        puVar5[1] = uVar7;
        uVar15 = param_2[2];
        uVar14 = param_2[5];
        uVar7 = param_2[4];
        puVar5[3] = param_2[3];
        puVar5[2] = uVar15;
        puVar5[5] = uVar14;
        puVar5[4] = uVar7;
      }
      else {
        FUN_008c4c00();
      }
    }
    puVar1 = (undefined1 *)((long)param_2 + 0x34);
    uVar7 = param_2[6];
    uVar9 = uVar9 - 1;
    param_2 = param_2 + 7;
    *(undefined1 *)((long)puVar5 + 0x34) = *puVar1;
    *(int *)(puVar5 + 6) = (int)uVar7;
    puVar5 = puVar5 + 7;
  } while (uVar9 != 0);
LAB_008c95f8:
  if (uVar13 != 0) {
    puVar5 = puVar10 + uVar13 * 7;
    do {
      if (puVar5 + -7 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if ((puVar5[-6] & 1) != 0) {
        operator_delete((void *)puVar5[-5]);
      }
      uVar13 = uVar13 - 1;
      puVar5 = puVar5 + -7;
    } while (uVar13 != 0);
  }
  uVar13 = *param_1;
  if (puVar12 != (ulong *)0x0) {
    if ((uVar13 & 1) != 0) {
      operator_delete((void *)param_1[1]);
      uVar13 = *param_1;
    }
    uVar13 = uVar13 | 1;
    param_1[1] = (ulong)puVar12;
    param_1[2] = uVar8;
  }
  *param_1 = uVar13 & 1 | param_3 << 1;
  return;
}


// ===== 008c9710  FUN_008c9710 =====

void FUN_008c9710(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  puVar8 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar6 = 4;
    if (4 < param_3) goto LAB_008c97a0;
LAB_008c974c:
    uVar7 = *param_1 >> 1;
    puVar3 = puVar8 + uVar7;
    bVar2 = uVar7 <= param_3;
    uVar6 = param_3;
    if (bVar2) {
      uVar6 = uVar7;
    }
    uVar4 = 0;
    if (bVar2) {
      uVar4 = param_3 - uVar7;
    }
    if (!bVar2 || param_3 - uVar7 == 0) {
      puVar3 = (ulong *)0x0;
    }
    if (uVar6 != 0) {
      if (uVar6 < 0x18) {
LAB_008c9774:
        uVar13 = 0;
      }
      else {
        uVar10 = uVar6 - 1;
        if ((((puVar8 + uVar10 < puVar8) || (param_2 + uVar10 < param_2)) || (uVar10 >> 0x3d != 0))
           || ((ulong)((long)puVar8 - (long)param_2) < 0x20)) goto LAB_008c9774;
        uVar13 = uVar6 & 0x3ffffffffffffffc;
        puVar12 = param_2 + 2;
        puVar11 = puVar8 + 2;
        param_2 = param_2 + uVar13;
        uVar10 = uVar6 & 0x3ffffffffffffffc;
        do {
          puVar1 = puVar12 + -1;
          uVar14 = puVar12[-2];
          uVar16 = puVar12[1];
          uVar15 = *puVar12;
          uVar10 = uVar10 - 4;
          puVar12 = puVar12 + 4;
          puVar11[-1] = *puVar1;
          puVar11[-2] = uVar14;
          puVar11[1] = uVar16;
          *puVar11 = uVar15;
          puVar11 = puVar11 + 4;
        } while (uVar10 != 0);
        if (uVar6 == uVar13) goto LAB_008c97cc;
      }
      lVar9 = uVar6 - uVar13;
      puVar8 = puVar8 + uVar13;
      puVar12 = param_2;
      do {
        param_2 = puVar12 + 1;
        lVar9 = lVar9 + -1;
        *puVar8 = *puVar12;
        puVar8 = puVar8 + 1;
        puVar12 = param_2;
      } while (lVar9 != 0);
    }
LAB_008c97cc:
    if (param_3 <= uVar7) {
      uVar7 = *param_1;
      goto LAB_008c98d0;
    }
    uVar6 = 0;
    puVar8 = (ulong *)0x0;
  }
  else {
    puVar8 = (ulong *)param_1[1];
    uVar6 = param_1[2];
    if (param_3 <= uVar6) goto LAB_008c974c;
LAB_008c97a0:
    uVar6 = uVar6 * 2;
    if (uVar6 < param_3 || uVar6 - param_3 == 0) {
      uVar6 = param_3;
    }
    if (uVar6 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar3 = (ulong *)operator_new(uVar6 << 3);
    uVar4 = param_3;
    puVar8 = puVar3;
  }
  uVar10 = uVar4 - 1;
  uVar7 = (ulong)-(long)puVar3 >> 3;
  if (uVar10 <= (ulong)-(long)puVar3 >> 3) {
    uVar7 = uVar10;
  }
  if (uVar7 < 0x1e) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    uVar13 = (ulong)-(long)puVar3 >> 3;
    if (uVar10 <= uVar13) {
      uVar13 = uVar10;
    }
    if ((((-(long)puVar3 & 7U) == 0) && (puVar3 <= puVar3 + uVar13)) &&
       ((param_2 <= param_2 + uVar13 && (0x1f < (ulong)((long)puVar3 - (long)param_2))))) {
      puVar12 = puVar3 + 2;
      uVar10 = uVar7 + 1 & 3;
      uVar13 = 4;
      if (uVar10 != 0) {
        uVar13 = uVar10;
      }
      puVar11 = param_2 + 2;
      lVar9 = (uVar7 + 1) - uVar13;
      param_2 = param_2 + lVar9;
      lVar5 = lVar9;
      do {
        puVar1 = puVar11 + -1;
        uVar7 = puVar11[-2];
        uVar13 = puVar11[1];
        uVar10 = *puVar11;
        lVar5 = lVar5 + -4;
        puVar11 = puVar11 + 4;
        puVar12[-1] = *puVar1;
        puVar12[-2] = uVar7;
        puVar12[1] = uVar13;
        *puVar12 = uVar10;
        puVar12 = puVar12 + 4;
      } while (lVar5 != 0);
    }
  }
  lVar5 = uVar4 - lVar9;
  puVar3 = puVar3 + lVar9;
  do {
    if (puVar3 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    lVar5 = lVar5 + -1;
    *puVar3 = *param_2;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  } while (lVar5 != 0);
  uVar7 = *param_1;
  if (puVar8 != (ulong *)0x0) {
    if ((uVar7 & 1) != 0) {
      operator_delete((void *)param_1[1]);
      uVar7 = *param_1;
    }
    uVar7 = uVar7 | 1;
    param_1[1] = (ulong)puVar8;
    param_1[2] = uVar6;
  }
LAB_008c98d0:
  *param_1 = uVar7 & 1 | param_3 << 1;
  return;
}


// ===== 008c9978  FUN_008c9978 =====

undefined8 FUN_008c9978(void)

{
  return 0xff;
}


// ===== 008c9984  FUN_008c9984 =====

undefined1 FUN_008c9984(undefined8 param_1,long param_2)

{
  return *(undefined1 *)(param_2 + 6);
}


// ===== 008c9990  FUN_008c9990 =====

undefined1 FUN_008c9990(undefined8 param_1,long param_2)

{
  return *(undefined1 *)(param_2 + 0xc);
}


// ===== 008c999c  FUN_008c999c =====

undefined8 FUN_008c999c(void)

{
  return 0xff;
}


// ===== 008c99a8  FUN_008c99a8 =====

undefined8 FUN_008c99a8(void)

{
  return 0xff;
}


// ===== 008c99b4  FUN_008c99b4 =====

void FUN_008c99b4(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x6c);
  return;
}


// ===== 008c99d8  FUN_008c99d8 =====

bool FUN_008c99d8(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,(long)param_1 + 0x6c);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 008c9a30  FUN_008c9a30 =====

int FUN_008c9a30(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_DAT_00d52d78;
  puVar3 = (undefined8 *)param_1[0xc];
  param_1[0xc] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if ((long *)param_1[7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 8))();
  }
  iVar2 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 1));
  return iVar2;
}


// ===== 008c9aac  FUN_008c9aac =====

void FUN_008c9aac(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = PTR_DAT_00d52d78;
  puVar2 = (undefined8 *)param_1[0xc];
  param_1[0xc] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if ((long *)param_1[7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 8))();
  }
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 1));
  operator_delete(param_1);
  return;
}


// ===== 008c9b34  FUN_008c9b34 =====

bool FUN_008c9b34(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x6c) == 1;
}


// ===== 008c9b4c  FUN_008c9b4c =====

void FUN_008c9b4c(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = param_2;
  if (pvVar1 != (void *)0x0) {
    FUN_0060b02c(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 008c9b98  FUN_008c9b98 =====

void FUN_008c9b98(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_008c9b98(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar1 = (undefined8 *)param_2[1];
      FUN_007de938(param_2 + 5);
      operator_delete(param_2);
      param_2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


