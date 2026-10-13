// ===== 00b34e6c  FUN_00b34e6c =====

void FUN_00b34e6c(undefined8 param_1,long *param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  for (param_3 = param_3 << 3; param_3 != 0; param_3 = param_3 + -8) {
    lVar7 = *param_2;
    lVar3 = FUN_00b392ac(param_4);
    lVar6 = *(long *)(lVar7 + 8);
    uVar1 = *(uint *)(lVar3 + 0x10);
    lVar5 = *(long *)(lVar3 + 0x18);
    *(uint *)(lVar3 + 0x10) = uVar1 | 2;
    *(long *)(lVar3 + 0x20) = lVar6 / 1000;
    uVar2 = *(undefined4 *)(*(long *)(lVar7 + 0x10) + 4);
    *(uint *)(lVar3 + 0x10) = uVar1 | 6;
    *(undefined4 *)(lVar3 + 0x28) = uVar2;
    *(undefined4 *)(lVar3 + 0x2c) = **(undefined4 **)(lVar7 + 0x10);
    *(uint *)(lVar3 + 0x10) = uVar1 | 0xf;
    if (lVar5 == 0) {
      uVar4 = *(ulong *)(lVar3 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      lVar5 = FUN_00b3fd88(uVar4);
      *(long *)(lVar3 + 0x18) = lVar5;
    }
    uVar4 = FUN_00b393e8(*(long *)(lVar7 + 0x10) + 0x30,lVar5);
    if ((uVar4 & 1) == 0) {
      if (*(long *)(lVar3 + 0x18) != 0) {
        FUN_00b4e830();
      }
      *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) & 0xfffffffe;
    }
    param_2 = param_2 + 1;
  }
  return;
}


// ===== 00b34f78  FUN_00b34f78 =====

void FUN_00b34f78(undefined8 param_1,long *param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  for (param_3 = param_3 << 3; param_3 != 0; param_3 = param_3 + -8) {
    lVar6 = *param_2;
    lVar2 = FUN_00b39750(param_4);
    lVar5 = *(long *)(lVar6 + 8);
    uVar1 = *(uint *)(lVar2 + 0x10);
    lVar4 = *(long *)(lVar2 + 0x18);
    *(uint *)(lVar2 + 0x10) = uVar1 | 2;
    *(long *)(lVar2 + 0x20) = lVar5 / 1000;
    *(undefined4 *)(lVar2 + 0x28) = **(undefined4 **)(lVar6 + 0x10);
    *(uint *)(lVar2 + 0x10) = uVar1 | 7;
    if (lVar4 == 0) {
      uVar3 = *(ulong *)(lVar2 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      lVar4 = FUN_00b3fd88(uVar3);
      *(long *)(lVar2 + 0x18) = lVar4;
    }
    uVar3 = FUN_00b393e8(*(long *)(lVar6 + 0x10) + 0x30,lVar4);
    if ((uVar3 & 1) == 0) {
      if (*(long *)(lVar2 + 0x18) != 0) {
        FUN_00b4e830();
      }
      *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) & 0xfffffffe;
    }
    param_2 = param_2 + 1;
  }
  return;
}


// ===== 00b35070  FUN_00b35070 =====

void FUN_00b35070(long param_1,long *param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  ulong *puVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  void *local_a8;
  ulong uStack_a0;
  ulong local_98;
  void *local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  
  if ((param_3 != 0) && ((*(byte *)(param_1 + 8) & 1) == 0)) {
    lVar14 = *param_2;
    lVar4 = FUN_00b39170(param_4);
    lVar6 = *(long *)(lVar14 + 8);
    uVar11 = param_3 - 1;
    uVar5 = *(uint *)(lVar4 + 0x10);
    *(uint *)(lVar4 + 0x10) = uVar5 | 8;
    *(long *)(lVar4 + 0x30) = lVar6 / 1000;
    uVar3 = *(undefined4 *)(lVar14 + 0x10);
    *(uint *)(lVar4 + 0x10) = uVar5 | 0x18;
    *(undefined4 *)(lVar4 + 0x38) = uVar3;
    *(undefined4 *)(lVar4 + 0x3c) = *(undefined4 *)(lVar14 + 0x14);
    *(uint *)(lVar4 + 0x10) = uVar5 | 0x38;
    if (uVar11 != 0) {
      *(int *)(lVar4 + 0x40) = (int)param_3 + -1;
      *(uint *)(lVar4 + 0x10) = uVar5 | 0x78;
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      if (uVar11 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00b3fc80();
      }
      local_70 = (undefined1 *)operator_new(uVar11 * 0x10);
      uVar9 = param_3 + 0xffffffffffffffeU & 0xfffffffffffffff;
      local_60 = local_70 + uVar11 * 0x10;
      uVar8 = uVar9;
      if ((ulong)-(long)local_70 >> 4 <= uVar9) {
        uVar8 = (ulong)-(long)local_70 >> 4;
      }
      puVar7 = local_70;
      if (1 < uVar8) {
        uVar12 = (ulong)-(long)local_70 >> 4;
        if (uVar12 <= uVar9) {
          uVar9 = uVar12;
        }
        if (((-(long)local_70 & 0xfU) == 0) && (local_70 <= local_70 + uVar9 * 0x10)) {
          uVar8 = uVar8 & 0xffffffffffffffe;
          puVar10 = local_70 + 0x10;
          puVar7 = local_70 + uVar8 * 0x10;
          do {
            puVar10[-0x10] = 0;
            uVar8 = uVar8 - 2;
            *puVar10 = 0;
            puVar10[-8] = 0;
            puVar10[8] = 0;
            puVar10 = puVar10 + 0x20;
          } while (uVar8 != 0);
        }
      }
      do {
        if (puVar7 == (undefined1 *)0x0) goto LAB_00b354e0;
        *puVar7 = 0;
        puVar7[8] = 0;
        puVar7 = puVar7 + 0x10;
      } while (puVar7 != local_60);
      local_90 = (void *)0x0;
      uStack_88 = 0;
      local_80 = 0;
      if (uVar11 != 0) {
        lVar6 = 0;
        uVar11 = 0;
        do {
          lVar13 = uVar11 + 1;
          uVar11 = uVar11 + 1;
          lVar13 = *(long *)(param_2[lVar13] + 8);
          plVar1 = (long *)(local_70 + lVar6);
          lVar6 = lVar6 + 0x10;
          *(undefined1 *)(plVar1 + 1) = 1;
          *plVar1 = lVar13 / 1000;
        } while (uVar11 < (ulong)((long)local_60 - (long)local_70 >> 4));
      }
      puStack_68 = local_60;
      FUN_00b53b7c(&local_a8,*(long *)(lVar14 + 8) / 1000,1,&local_70);
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      local_80 = local_98;
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      uVar11 = uStack_a0;
      if ((local_98 >> 0x38 & 0x80) == 0) {
        uVar11 = local_98 >> 0x38;
      }
      if (uVar11 != 0) {
        uVar11 = *(ulong *)(lVar4 + 8);
        *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 1;
        if ((uVar11 & 1) != 0) {
          uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar4 + 0x18,&local_90,uVar11);
      }
      if (puStack_68 != local_70) {
        lVar6 = 0;
        uVar11 = 0;
        do {
          puVar2 = (ulong *)(local_70 + lVar6);
          if ((char)puVar2[1] == '\x01') {
            *puVar2 = (ulong)*(uint *)(param_2[uVar11 + 1] + 0x10);
          }
          else {
            if (puVar2 == (ulong *)0x0) {
LAB_00b354e0:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            *puVar2 = (ulong)*(uint *)(param_2[uVar11 + 1] + 0x10);
            *(undefined1 *)(puVar2 + 1) = 1;
          }
          uVar11 = uVar11 + 1;
          lVar6 = lVar6 + 0x10;
        } while (uVar11 < (ulong)((long)puStack_68 - (long)local_70 >> 4));
      }
      FUN_00b53b7c(&local_a8,*(undefined4 *)(lVar14 + 0x10),1,&local_70);
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      local_80 = local_98;
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      uVar11 = uStack_a0;
      if ((local_98 >> 0x38 & 0x80) == 0) {
        uVar11 = local_98 >> 0x38;
      }
      if (uVar11 != 0) {
        uVar11 = *(ulong *)(lVar4 + 8);
        *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
        if ((uVar11 & 1) != 0) {
          uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar4 + 0x20,&local_90,uVar11);
      }
      if (puStack_68 != local_70) {
        lVar6 = 0;
        uVar11 = 0;
        do {
          lVar13 = uVar11 + 1;
          puVar2 = (ulong *)(local_70 + lVar6);
          uVar11 = uVar11 + 1;
          lVar6 = lVar6 + 0x10;
          uVar5 = *(uint *)(param_2[lVar13] + 0x14);
          *(undefined1 *)(puVar2 + 1) = 1;
          *puVar2 = (ulong)uVar5;
        } while (uVar11 < (ulong)((long)puStack_68 - (long)local_70 >> 4));
      }
      FUN_00b53b7c(&local_a8,*(undefined4 *)(lVar14 + 0x14),1,&local_70);
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      local_80 = local_98;
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      uVar5 = (uint)(char)(local_98 >> 0x38);
      if (-1 < (int)uVar5) {
        uStack_a0 = local_98 >> 0x38;
      }
      if (uStack_a0 != 0) {
        uVar11 = *(ulong *)(lVar4 + 8);
        *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 4;
        if ((uVar11 & 1) != 0) {
          uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar4 + 0x28,&local_90,uVar11);
        uVar5 = (uint)local_80._7_1_;
      }
      if ((uVar5 >> 7 & 1) != 0) {
        operator_delete(local_90);
      }
      if (local_70 != (undefined1 *)0x0) {
        uVar11 = (ulong)(((long)local_70 - (long)puStack_68 << 0x3c) -
                        ((long)local_70 - (long)puStack_68)) >> 4;
        if ((ulong)(puStack_68 + (-0x10 - ((long)puStack_68 << 0x3c))) >> 4 <= uVar11) {
          uVar11 = (ulong)(puStack_68 + (-0x10 - ((long)puStack_68 << 0x3c))) >> 4;
        }
        puVar7 = puStack_68;
        if ((1 < uVar11) && ((((int)local_70 - (int)puStack_68 | -(int)puStack_68) & 0xfU) == 0)) {
          uVar11 = uVar11 & 0xffffffffffffffe;
          puVar7 = puStack_68 + uVar11 * -0x10;
          do {
            uVar11 = uVar11 - 2;
          } while (uVar11 != 0);
        }
        while (puVar7 != local_70) {
          puVar7 = puVar7 + -0x10;
          if (puVar7 == (undefined1 *)0x0) {
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
  return;
}


// ===== 00b3554c  FUN_00b3554c =====

void FUN_00b3554c(undefined8 param_1,long *param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  ulong *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  void *local_a8;
  ulong uStack_a0;
  ulong local_98;
  void *local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  
  if (param_3 != 0) {
    lVar16 = *param_2;
    lVar6 = FUN_00b3988c(param_4);
    lVar8 = *(long *)(lVar16 + 8);
    uVar7 = *(uint *)(lVar6 + 0x10);
    *(uint *)(lVar6 + 0x10) = uVar7 | 8;
    *(long *)(lVar6 + 0x30) = lVar8 / 1000;
    uVar4 = *(undefined4 *)(lVar16 + 0x10);
    *(uint *)(lVar6 + 0x10) = uVar7 | 0x18;
    *(undefined4 *)(lVar6 + 0x38) = uVar4;
    uVar5 = *(uint *)(lVar16 + 0x14);
    *(uint *)(lVar6 + 0x10) = uVar7 | 0x38;
    iVar3 = 0;
    if (uVar5 < 3) {
      iVar3 = uVar5 + 1;
    }
    uVar13 = param_3 - 1;
    *(int *)(lVar6 + 0x3c) = iVar3;
    if (uVar13 != 0) {
      *(int *)(lVar6 + 0x40) = (int)param_3 + -1;
      *(uint *)(lVar6 + 0x10) = uVar7 | 0x78;
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      if (uVar13 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00b3fc80();
      }
      local_70 = (undefined1 *)operator_new(uVar13 * 0x10);
      uVar11 = param_3 + 0xffffffffffffffeU & 0xfffffffffffffff;
      local_60 = local_70 + uVar13 * 0x10;
      uVar10 = (ulong)-(long)local_70 >> 4;
      if (uVar11 <= (ulong)-(long)local_70 >> 4) {
        uVar10 = uVar11;
      }
      puVar9 = local_70;
      if (1 < uVar10) {
        uVar14 = (ulong)-(long)local_70 >> 4;
        if (uVar11 <= uVar14) {
          uVar14 = uVar11;
        }
        if (((-(long)local_70 & 0xfU) == 0) && (local_70 <= local_70 + uVar14 * 0x10)) {
          uVar10 = uVar10 & 0xffffffffffffffe;
          puVar12 = local_70 + 0x10;
          puVar9 = local_70 + uVar10 * 0x10;
          do {
            puVar12[-0x10] = 0;
            uVar10 = uVar10 - 2;
            *puVar12 = 0;
            puVar12[-8] = 0;
            puVar12[8] = 0;
            puVar12 = puVar12 + 0x20;
          } while (uVar10 != 0);
        }
      }
      do {
        if (puVar9 == (undefined1 *)0x0) goto LAB_00b359cc;
        *puVar9 = 0;
        puVar9[8] = 0;
        puVar9 = puVar9 + 0x10;
      } while (puVar9 != local_60);
      local_90 = (void *)0x0;
      uStack_88 = 0;
      local_80 = 0;
      if (uVar13 != 0) {
        lVar8 = 0;
        uVar13 = 0;
        do {
          lVar15 = uVar13 + 1;
          uVar13 = uVar13 + 1;
          lVar15 = *(long *)(param_2[lVar15] + 8);
          plVar1 = (long *)(local_70 + lVar8);
          lVar8 = lVar8 + 0x10;
          *(undefined1 *)(plVar1 + 1) = 1;
          *plVar1 = lVar15 / 1000;
        } while (uVar13 < (ulong)((long)local_60 - (long)local_70 >> 4));
      }
      puStack_68 = local_60;
      FUN_00b53b7c(&local_a8,*(long *)(lVar16 + 8) / 1000,1,&local_70);
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      local_80 = local_98;
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      uVar13 = uStack_a0;
      if ((local_98 >> 0x38 & 0x80) == 0) {
        uVar13 = local_98 >> 0x38;
      }
      if (uVar13 != 0) {
        uVar13 = *(ulong *)(lVar6 + 8);
        *(uint *)(lVar6 + 0x10) = *(uint *)(lVar6 + 0x10) | 1;
        if ((uVar13 & 1) != 0) {
          uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar6 + 0x18,&local_90,uVar13);
      }
      if (puStack_68 != local_70) {
        lVar8 = 0;
        uVar13 = 0;
        do {
          plVar1 = (long *)(local_70 + lVar8);
          if ((char)plVar1[1] == '\x01') {
            *plVar1 = (long)*(int *)(param_2[uVar13 + 1] + 0x10);
          }
          else {
            if (plVar1 == (long *)0x0) {
LAB_00b359cc:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            *plVar1 = (long)*(int *)(param_2[uVar13 + 1] + 0x10);
            *(undefined1 *)(plVar1 + 1) = 1;
          }
          uVar13 = uVar13 + 1;
          lVar8 = lVar8 + 0x10;
        } while (uVar13 < (ulong)((long)puStack_68 - (long)local_70 >> 4));
      }
      FUN_00b53b7c(&local_a8,(long)*(int *)(lVar16 + 0x10),1,&local_70);
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      local_80 = local_98;
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      uVar13 = uStack_a0;
      if ((local_98 >> 0x38 & 0x80) == 0) {
        uVar13 = local_98 >> 0x38;
      }
      if (uVar13 != 0) {
        uVar13 = *(ulong *)(lVar6 + 8);
        *(uint *)(lVar6 + 0x10) = *(uint *)(lVar6 + 0x10) | 2;
        if ((uVar13 & 1) != 0) {
          uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar6 + 0x20,&local_90,uVar13);
      }
      if (puStack_68 != local_70) {
        lVar8 = 0;
        uVar13 = 0;
        do {
          lVar15 = uVar13 + 1;
          puVar2 = (ulong *)(local_70 + lVar8);
          uVar13 = uVar13 + 1;
          lVar8 = lVar8 + 0x10;
          uVar5 = *(uint *)(param_2[lVar15] + 0x14);
          *(undefined1 *)(puVar2 + 1) = 1;
          uVar7 = 0;
          if (uVar5 < 3) {
            uVar7 = uVar5 + 1;
          }
          *puVar2 = (ulong)uVar7;
        } while (uVar13 < (ulong)((long)puStack_68 - (long)local_70 >> 4));
      }
      iVar3 = 0;
      if (*(uint *)(lVar16 + 0x14) < 3) {
        iVar3 = *(uint *)(lVar16 + 0x14) + 1;
      }
      FUN_00b53b7c(&local_a8,iVar3,1,&local_70);
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      local_80 = local_98;
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      uVar7 = (uint)(char)(local_98 >> 0x38);
      if (-1 < (int)uVar7) {
        uStack_a0 = local_98 >> 0x38;
      }
      if (uStack_a0 != 0) {
        uVar13 = *(ulong *)(lVar6 + 8);
        *(uint *)(lVar6 + 0x10) = *(uint *)(lVar6 + 0x10) | 4;
        if ((uVar13 & 1) != 0) {
          uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar6 + 0x28,&local_90,uVar13);
        uVar7 = (uint)local_80._7_1_;
      }
      if ((uVar7 >> 7 & 1) != 0) {
        operator_delete(local_90);
      }
      if (local_70 != (undefined1 *)0x0) {
        uVar13 = (ulong)(((long)local_70 - (long)puStack_68 << 0x3c) -
                        ((long)local_70 - (long)puStack_68)) >> 4;
        if ((ulong)(puStack_68 + (-0x10 - ((long)puStack_68 << 0x3c))) >> 4 <= uVar13) {
          uVar13 = (ulong)(puStack_68 + (-0x10 - ((long)puStack_68 << 0x3c))) >> 4;
        }
        puVar9 = puStack_68;
        if ((1 < uVar13) && ((((int)local_70 - (int)puStack_68 | -(int)puStack_68) & 0xfU) == 0)) {
          uVar13 = uVar13 & 0xffffffffffffffe;
          puVar9 = puStack_68 + uVar13 * -0x10;
          do {
            uVar13 = uVar13 - 2;
          } while (uVar13 != 0);
        }
        while (puVar9 != local_70) {
          puVar9 = puVar9 + -0x10;
          if (puVar9 == (undefined1 *)0x0) {
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
  return;
}


// ===== 00b35a38  FUN_00b35a38 =====

void FUN_00b35a38(undefined8 param_1,long *param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  ulong *puVar2;
  undefined4 uVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  void *local_a8;
  ulong uStack_a0;
  ulong local_98;
  void *local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  
  if (param_3 != 0) {
    lVar15 = *param_2;
    lVar5 = FUN_00b399c8(param_4);
    lVar7 = *(long *)(lVar15 + 8);
    uVar12 = param_3 - 1;
    uVar6 = *(uint *)(lVar5 + 0x10);
    *(uint *)(lVar5 + 0x10) = uVar6 | 0x10;
    *(long *)(lVar5 + 0x38) = lVar7 / 1000;
    uVar3 = *(undefined4 *)(lVar15 + 0x10);
    *(uint *)(lVar5 + 0x10) = uVar6 | 0x30;
    *(undefined4 *)(lVar5 + 0x40) = uVar3;
    bVar4 = *(byte *)(lVar15 + 0x14);
    *(uint *)(lVar5 + 0x10) = uVar6 | 0x70;
    *(uint *)(lVar5 + 0x44) = (uint)bVar4;
    *(undefined4 *)(lVar5 + 0x48) = *(undefined4 *)(lVar15 + 0x18);
    *(uint *)(lVar5 + 0x10) = uVar6 | 0xf0;
    if (uVar12 != 0) {
      *(int *)(lVar5 + 0x4c) = (int)param_3 + -1;
      *(uint *)(lVar5 + 0x10) = uVar6 | 0x1f0;
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      if (uVar12 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00b3fc80();
      }
      local_70 = (undefined1 *)operator_new(uVar12 * 0x10);
      uVar10 = param_3 + 0xffffffffffffffeU & 0xfffffffffffffff;
      local_60 = local_70 + uVar12 * 0x10;
      uVar9 = (ulong)-(long)local_70 >> 4;
      if (uVar10 <= (ulong)-(long)local_70 >> 4) {
        uVar9 = uVar10;
      }
      puVar8 = local_70;
      if (1 < uVar9) {
        uVar13 = (ulong)-(long)local_70 >> 4;
        if (uVar10 <= uVar13) {
          uVar13 = uVar10;
        }
        if (((-(long)local_70 & 0xfU) == 0) && (local_70 <= local_70 + uVar13 * 0x10)) {
          uVar9 = uVar9 & 0xffffffffffffffe;
          puVar11 = local_70 + 0x10;
          puVar8 = local_70 + uVar9 * 0x10;
          do {
            puVar11[-0x10] = 0;
            uVar9 = uVar9 - 2;
            *puVar11 = 0;
            puVar11[-8] = 0;
            puVar11[8] = 0;
            puVar11 = puVar11 + 0x20;
          } while (uVar9 != 0);
        }
      }
      do {
        if (puVar8 == (undefined1 *)0x0) goto LAB_00b35fa0;
        *puVar8 = 0;
        puVar8[8] = 0;
        puVar8 = puVar8 + 0x10;
      } while (puVar8 != local_60);
      local_90 = (void *)0x0;
      uStack_88 = 0;
      local_80 = 0;
      if (uVar12 != 0) {
        lVar7 = 0;
        uVar12 = 0;
        do {
          lVar14 = uVar12 + 1;
          uVar12 = uVar12 + 1;
          lVar14 = *(long *)(param_2[lVar14] + 8);
          plVar1 = (long *)(local_70 + lVar7);
          lVar7 = lVar7 + 0x10;
          *(undefined1 *)(plVar1 + 1) = 1;
          *plVar1 = lVar14 / 1000;
        } while (uVar12 < (ulong)((long)local_60 - (long)local_70 >> 4));
      }
      puStack_68 = local_60;
      FUN_00b53b7c(&local_a8,*(long *)(lVar15 + 8) / 1000,1,&local_70);
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      local_80 = local_98;
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      uVar12 = uStack_a0;
      if ((local_98 >> 0x38 & 0x80) == 0) {
        uVar12 = local_98 >> 0x38;
      }
      if (uVar12 != 0) {
        uVar12 = *(ulong *)(lVar5 + 8);
        *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 1;
        if ((uVar12 & 1) != 0) {
          uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar5 + 0x18,&local_90,uVar12);
      }
      if (puStack_68 != local_70) {
        lVar7 = 0;
        uVar12 = 0;
        do {
          plVar1 = (long *)(local_70 + lVar7);
          if ((char)plVar1[1] == '\x01') {
            *plVar1 = (long)*(int *)(param_2[uVar12 + 1] + 0x10);
          }
          else {
            if (plVar1 == (long *)0x0) goto LAB_00b35fa0;
            *plVar1 = (long)*(int *)(param_2[uVar12 + 1] + 0x10);
            *(undefined1 *)(plVar1 + 1) = 1;
          }
          uVar12 = uVar12 + 1;
          lVar7 = lVar7 + 0x10;
        } while (uVar12 < (ulong)((long)puStack_68 - (long)local_70 >> 4));
      }
      FUN_00b53b7c(&local_a8,(long)*(int *)(lVar15 + 0x10),1,&local_70);
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      local_80 = local_98;
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      uVar12 = uStack_a0;
      if ((local_98 >> 0x38 & 0x80) == 0) {
        uVar12 = local_98 >> 0x38;
      }
      if (uVar12 != 0) {
        uVar12 = *(ulong *)(lVar5 + 8);
        *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 2;
        if ((uVar12 & 1) != 0) {
          uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar5 + 0x20,&local_90,uVar12);
      }
      if (puStack_68 != local_70) {
        lVar7 = 0;
        uVar12 = 0;
        do {
          puVar2 = (ulong *)(local_70 + lVar7);
          if ((char)puVar2[1] == '\x01') {
            *puVar2 = (ulong)*(byte *)(param_2[uVar12 + 1] + 0x14);
          }
          else {
            if (puVar2 == (ulong *)0x0) goto LAB_00b35fa0;
            *puVar2 = (ulong)*(byte *)(param_2[uVar12 + 1] + 0x14);
            *(undefined1 *)(puVar2 + 1) = 1;
          }
          uVar12 = uVar12 + 1;
          lVar7 = lVar7 + 0x10;
        } while (uVar12 < (ulong)((long)puStack_68 - (long)local_70 >> 4));
      }
      FUN_00b53b7c(&local_a8,*(undefined1 *)(lVar15 + 0x14),1,&local_70);
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      local_80 = local_98;
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      uVar12 = uStack_a0;
      if ((local_98 >> 0x38 & 0x80) == 0) {
        uVar12 = local_98 >> 0x38;
      }
      if (uVar12 != 0) {
        uVar12 = *(ulong *)(lVar5 + 8);
        *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 4;
        if ((uVar12 & 1) != 0) {
          uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar5 + 0x28,&local_90,uVar12);
      }
      if (puStack_68 != local_70) {
        lVar7 = 0;
        uVar12 = 0;
        do {
          plVar1 = (long *)(local_70 + lVar7);
          if ((char)plVar1[1] == '\x01') {
            *plVar1 = (long)*(int *)(param_2[uVar12 + 1] + 0x18);
          }
          else {
            if (plVar1 == (long *)0x0) {
LAB_00b35fa0:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            *plVar1 = (long)*(int *)(param_2[uVar12 + 1] + 0x18);
            *(undefined1 *)(plVar1 + 1) = 1;
          }
          uVar12 = uVar12 + 1;
          lVar7 = lVar7 + 0x10;
        } while (uVar12 < (ulong)((long)puStack_68 - (long)local_70 >> 4));
      }
      FUN_00b53b7c(&local_a8,(long)*(int *)(lVar15 + 0x18),1,&local_70);
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      local_80 = local_98;
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      uVar6 = (uint)(char)(local_98 >> 0x38);
      if (-1 < (int)uVar6) {
        uStack_a0 = local_98 >> 0x38;
      }
      if (uStack_a0 != 0) {
        uVar12 = *(ulong *)(lVar5 + 8);
        *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 8;
        if ((uVar12 & 1) != 0) {
          uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar5 + 0x30,&local_90,uVar12);
        uVar6 = (uint)local_80._7_1_;
      }
      if ((uVar6 >> 7 & 1) != 0) {
        operator_delete(local_90);
      }
      if (local_70 != (undefined1 *)0x0) {
        uVar12 = (ulong)(((long)local_70 - (long)puStack_68 << 0x3c) -
                        ((long)local_70 - (long)puStack_68)) >> 4;
        if ((ulong)(puStack_68 + (-0x10 - ((long)puStack_68 << 0x3c))) >> 4 <= uVar12) {
          uVar12 = (ulong)(puStack_68 + (-0x10 - ((long)puStack_68 << 0x3c))) >> 4;
        }
        puVar8 = puStack_68;
        if ((1 < uVar12) && ((((int)local_70 - (int)puStack_68 | -(int)puStack_68) & 0xfU) == 0)) {
          uVar12 = uVar12 & 0xffffffffffffffe;
          puVar8 = puStack_68 + uVar12 * -0x10;
          do {
            uVar12 = uVar12 - 2;
          } while (uVar12 != 0);
        }
        while (puVar8 != local_70) {
          puVar8 = puVar8 + -0x10;
          if (puVar8 == (undefined1 *)0x0) {
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
  return;
}


// ===== 00b36018  FUN_00b36018 =====

void FUN_00b36018(undefined8 param_1,long *param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  ulong *puVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  void *local_a8;
  ulong uStack_a0;
  ulong local_98;
  void *local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  
  if (param_3 != 0) {
    lVar14 = *param_2;
    lVar4 = FUN_00b39b04(param_4);
    lVar6 = *(long *)(lVar14 + 8);
    uVar11 = param_3 - 1;
    uVar5 = *(uint *)(lVar4 + 0x10);
    *(uint *)(lVar4 + 0x10) = uVar5 | 0x80;
    *(long *)(lVar4 + 0x50) = lVar6 / 1000;
    uVar3 = *(undefined4 *)(lVar14 + 0x10);
    *(uint *)(lVar4 + 0x10) = uVar5 | 0x180;
    *(undefined4 *)(lVar4 + 0x58) = uVar3;
    uVar3 = *(undefined4 *)(lVar14 + 0x14);
    *(uint *)(lVar4 + 0x10) = uVar5 | 0x2180;
    *(undefined4 *)(lVar4 + 0x6c) = uVar3;
    uVar3 = *(undefined4 *)(lVar14 + 0x18);
    *(uint *)(lVar4 + 0x10) = uVar5 | 0x2380;
    *(undefined4 *)(lVar4 + 0x5c) = uVar3;
    uVar3 = *(undefined4 *)(lVar14 + 0x1c);
    *(uint *)(lVar4 + 0x10) = uVar5 | 0x2780;
    *(undefined4 *)(lVar4 + 0x60) = uVar3;
    uVar3 = *(undefined4 *)(lVar14 + 0x20);
    *(uint *)(lVar4 + 0x10) = uVar5 | 0x2f80;
    *(undefined4 *)(lVar4 + 100) = uVar3;
    *(undefined4 *)(lVar4 + 0x68) = *(undefined4 *)(lVar14 + 0x24);
    *(uint *)(lVar4 + 0x10) = uVar5 | 0x3f80;
    if (uVar11 != 0) {
      *(int *)(lVar4 + 0x70) = (int)param_3 + -1;
      *(uint *)(lVar4 + 0x10) = uVar5 | 0x7f80;
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      if (uVar11 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00b3fc80();
      }
      local_70 = (undefined1 *)operator_new(uVar11 * 0x10);
      uVar9 = param_3 + 0xffffffffffffffeU & 0xfffffffffffffff;
      local_60 = local_70 + uVar11 * 0x10;
      uVar8 = (ulong)-(long)local_70 >> 4;
      if (uVar9 <= (ulong)-(long)local_70 >> 4) {
        uVar8 = uVar9;
      }
      puVar7 = local_70;
      if (1 < uVar8) {
        uVar12 = (ulong)-(long)local_70 >> 4;
        if (uVar9 <= uVar12) {
          uVar12 = uVar9;
        }
        if (((-(long)local_70 & 0xfU) == 0) && (local_70 <= local_70 + uVar12 * 0x10)) {
          uVar8 = uVar8 & 0xffffffffffffffe;
          puVar10 = local_70 + 0x10;
          puVar7 = local_70 + uVar8 * 0x10;
          do {
            puVar10[-0x10] = 0;
            uVar8 = uVar8 - 2;
            *puVar10 = 0;
            puVar10[-8] = 0;
            puVar10[8] = 0;
            puVar10 = puVar10 + 0x20;
          } while (uVar8 != 0);
        }
      }
      do {
        if (puVar7 == (undefined1 *)0x0) goto LAB_00b3683c;
        *puVar7 = 0;
        puVar7[8] = 0;
        puVar7 = puVar7 + 0x10;
      } while (puVar7 != local_60);
      local_90 = (void *)0x0;
      uStack_88 = 0;
      local_80 = 0;
      if (uVar11 != 0) {
        lVar6 = 0;
        uVar11 = 0;
        do {
          lVar13 = uVar11 + 1;
          uVar11 = uVar11 + 1;
          lVar13 = *(long *)(param_2[lVar13] + 8);
          plVar1 = (long *)(local_70 + lVar6);
          lVar6 = lVar6 + 0x10;
          *(undefined1 *)(plVar1 + 1) = 1;
          *plVar1 = lVar13 / 1000;
        } while (uVar11 < (ulong)((long)local_60 - (long)local_70 >> 4));
      }
      puStack_68 = local_60;
      FUN_00b53b7c(&local_a8,*(long *)(lVar14 + 8) / 1000,1,&local_70);
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      local_80 = local_98;
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      uVar11 = uStack_a0;
      if ((local_98 >> 0x38 & 0x80) == 0) {
        uVar11 = local_98 >> 0x38;
      }
      if (uVar11 != 0) {
        uVar11 = *(ulong *)(lVar4 + 8);
        *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 1;
        if ((uVar11 & 1) != 0) {
          uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar4 + 0x18,&local_90,uVar11);
      }
      if (puStack_68 != local_70) {
        lVar6 = 0;
        uVar11 = 0;
        do {
          puVar2 = (ulong *)(local_70 + lVar6);
          if ((char)puVar2[1] == '\x01') {
            *puVar2 = (ulong)*(uint *)(param_2[uVar11 + 1] + 0x10);
          }
          else {
            if (puVar2 == (ulong *)0x0) goto LAB_00b3683c;
            *puVar2 = (ulong)*(uint *)(param_2[uVar11 + 1] + 0x10);
            *(undefined1 *)(puVar2 + 1) = 1;
          }
          uVar11 = uVar11 + 1;
          lVar6 = lVar6 + 0x10;
        } while (uVar11 < (ulong)((long)puStack_68 - (long)local_70 >> 4));
      }
      FUN_00b53b7c(&local_a8,*(undefined4 *)(lVar14 + 0x10),1,&local_70);
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      local_80 = local_98;
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      uVar11 = uStack_a0;
      if ((local_98 >> 0x38 & 0x80) == 0) {
        uVar11 = local_98 >> 0x38;
      }
      if (uVar11 != 0) {
        uVar11 = *(ulong *)(lVar4 + 8);
        *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
        if ((uVar11 & 1) != 0) {
          uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar4 + 0x20,&local_90,uVar11);
      }
      if (puStack_68 != local_70) {
        lVar6 = 0;
        uVar11 = 0;
        do {
          puVar2 = (ulong *)(local_70 + lVar6);
          if ((char)puVar2[1] == '\x01') {
            *puVar2 = (ulong)*(uint *)(param_2[uVar11 + 1] + 0x14);
          }
          else {
            if (puVar2 == (ulong *)0x0) goto LAB_00b3683c;
            *puVar2 = (ulong)*(uint *)(param_2[uVar11 + 1] + 0x14);
            *(undefined1 *)(puVar2 + 1) = 1;
          }
          uVar11 = uVar11 + 1;
          lVar6 = lVar6 + 0x10;
        } while (uVar11 < (ulong)((long)puStack_68 - (long)local_70 >> 4));
      }
      FUN_00b53b7c(&local_a8,*(undefined4 *)(lVar14 + 0x14),1,&local_70);
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      local_80 = local_98;
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      uVar11 = uStack_a0;
      if ((local_98 >> 0x38 & 0x80) == 0) {
        uVar11 = local_98 >> 0x38;
      }
      if (uVar11 != 0) {
        uVar11 = *(ulong *)(lVar4 + 8);
        *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 0x40;
        if ((uVar11 & 1) != 0) {
          uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar4 + 0x48,&local_90,uVar11);
      }
      if (puStack_68 != local_70) {
        lVar6 = 0;
        uVar11 = 0;
        do {
          puVar2 = (ulong *)(local_70 + lVar6);
          if ((char)puVar2[1] == '\x01') {
            *puVar2 = (ulong)*(uint *)(param_2[uVar11 + 1] + 0x18);
          }
          else {
            if (puVar2 == (ulong *)0x0) goto LAB_00b3683c;
            *puVar2 = (ulong)*(uint *)(param_2[uVar11 + 1] + 0x18);
            *(undefined1 *)(puVar2 + 1) = 1;
          }
          uVar11 = uVar11 + 1;
          lVar6 = lVar6 + 0x10;
        } while (uVar11 < (ulong)((long)puStack_68 - (long)local_70 >> 4));
      }
      FUN_00b53b7c(&local_a8,*(undefined4 *)(lVar14 + 0x18),1,&local_70);
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      local_80 = local_98;
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      uVar11 = uStack_a0;
      if ((local_98 >> 0x38 & 0x80) == 0) {
        uVar11 = local_98 >> 0x38;
      }
      if (uVar11 != 0) {
        uVar11 = *(ulong *)(lVar4 + 8);
        *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 4;
        if ((uVar11 & 1) != 0) {
          uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar4 + 0x28,&local_90,uVar11);
      }
      if (puStack_68 != local_70) {
        lVar6 = 0;
        uVar11 = 0;
        do {
          puVar2 = (ulong *)(local_70 + lVar6);
          if ((char)puVar2[1] == '\x01') {
            *puVar2 = (ulong)*(uint *)(param_2[uVar11 + 1] + 0x1c);
          }
          else {
            if (puVar2 == (ulong *)0x0) goto LAB_00b3683c;
            *puVar2 = (ulong)*(uint *)(param_2[uVar11 + 1] + 0x1c);
            *(undefined1 *)(puVar2 + 1) = 1;
          }
          uVar11 = uVar11 + 1;
          lVar6 = lVar6 + 0x10;
        } while (uVar11 < (ulong)((long)puStack_68 - (long)local_70 >> 4));
      }
      FUN_00b53b7c(&local_a8,*(undefined4 *)(lVar14 + 0x1c),1,&local_70);
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      local_80 = local_98;
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      uVar11 = uStack_a0;
      if ((local_98 >> 0x38 & 0x80) == 0) {
        uVar11 = local_98 >> 0x38;
      }
      if (uVar11 != 0) {
        uVar11 = *(ulong *)(lVar4 + 8);
        *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 8;
        if ((uVar11 & 1) != 0) {
          uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar4 + 0x30,&local_90,uVar11);
      }
      if (puStack_68 != local_70) {
        lVar6 = 0;
        uVar11 = 0;
        do {
          puVar2 = (ulong *)(local_70 + lVar6);
          if ((char)puVar2[1] == '\x01') {
            *puVar2 = (ulong)*(uint *)(param_2[uVar11 + 1] + 0x20);
          }
          else {
            if (puVar2 == (ulong *)0x0) goto LAB_00b3683c;
            *puVar2 = (ulong)*(uint *)(param_2[uVar11 + 1] + 0x20);
            *(undefined1 *)(puVar2 + 1) = 1;
          }
          uVar11 = uVar11 + 1;
          lVar6 = lVar6 + 0x10;
        } while (uVar11 < (ulong)((long)puStack_68 - (long)local_70 >> 4));
      }
      FUN_00b53b7c(&local_a8,*(undefined4 *)(lVar14 + 0x20),1,&local_70);
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      local_80 = local_98;
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      uVar11 = uStack_a0;
      if ((local_98 >> 0x38 & 0x80) == 0) {
        uVar11 = local_98 >> 0x38;
      }
      if (uVar11 != 0) {
        uVar11 = *(ulong *)(lVar4 + 8);
        *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 0x10;
        if ((uVar11 & 1) != 0) {
          uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar4 + 0x38,&local_90,uVar11);
      }
      if (puStack_68 != local_70) {
        lVar6 = 0;
        uVar11 = 0;
        do {
          puVar2 = (ulong *)(local_70 + lVar6);
          if ((char)puVar2[1] == '\x01') {
            *puVar2 = (ulong)*(uint *)(param_2[uVar11 + 1] + 0x24);
          }
          else {
            if (puVar2 == (ulong *)0x0) {
LAB_00b3683c:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            *puVar2 = (ulong)*(uint *)(param_2[uVar11 + 1] + 0x24);
            *(undefined1 *)(puVar2 + 1) = 1;
          }
          uVar11 = uVar11 + 1;
          lVar6 = lVar6 + 0x10;
        } while (uVar11 < (ulong)((long)puStack_68 - (long)local_70 >> 4));
      }
      FUN_00b53b7c(&local_a8,*(undefined4 *)(lVar14 + 0x24),1,&local_70);
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      local_80 = local_98;
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      uVar5 = (uint)(char)(local_98 >> 0x38);
      if (-1 < (int)uVar5) {
        uStack_a0 = local_98 >> 0x38;
      }
      if (uStack_a0 != 0) {
        uVar11 = *(ulong *)(lVar4 + 8);
        *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 0x20;
        if ((uVar11 & 1) != 0) {
          uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar4 + 0x40,&local_90,uVar11);
        uVar5 = (uint)local_80._7_1_;
      }
      if ((uVar5 >> 7 & 1) != 0) {
        operator_delete(local_90);
      }
      if (local_70 != (undefined1 *)0x0) {
        uVar11 = (ulong)(((long)local_70 - (long)puStack_68 << 0x3c) -
                        ((long)local_70 - (long)puStack_68)) >> 4;
        if ((ulong)(puStack_68 + (-0x10 - ((long)puStack_68 << 0x3c))) >> 4 <= uVar11) {
          uVar11 = (ulong)(puStack_68 + (-0x10 - ((long)puStack_68 << 0x3c))) >> 4;
        }
        puVar7 = puStack_68;
        if ((1 < uVar11) && ((((int)local_70 - (int)puStack_68 | -(int)puStack_68) & 0xfU) == 0)) {
          uVar11 = uVar11 & 0xffffffffffffffe;
          puVar7 = puStack_68 + uVar11 * -0x10;
          do {
            uVar11 = uVar11 - 2;
          } while (uVar11 != 0);
        }
        while (puVar7 != local_70) {
          puVar7 = puVar7 + -0x10;
          if (puVar7 == (undefined1 *)0x0) {
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
  return;
}


// ===== 00b368d8  FUN_00b368d8 =====

void FUN_00b368d8(undefined8 param_1,long *param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  byte bVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  void *local_a8;
  ulong uStack_a0;
  ulong local_98;
  void *local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  
  if (param_3 != 0) {
    lVar19 = *param_2;
    lVar8 = FUN_00b3c11c(param_4);
    lVar10 = *(long *)(lVar19 + 8);
    uVar9 = *(uint *)(lVar8 + 0x10);
    *(uint *)(lVar8 + 0x10) = uVar9 | 0x80;
    *(long *)(lVar8 + 0x50) = lVar10 / 1000;
    uVar5 = *(undefined4 *)(lVar19 + 0x18);
    *(uint *)(lVar8 + 0x10) = uVar9 | 0x280;
    *(undefined4 *)(lVar8 + 0x60) = uVar5;
    uVar12 = *(undefined8 *)(lVar19 + 0x10);
    *(uint *)(lVar8 + 0x10) = uVar9 | 0x380;
    *(undefined8 *)(lVar8 + 0x58) = uVar12;
    uVar5 = *(undefined4 *)(lVar19 + 0x1c);
    *(uint *)(lVar8 + 0x10) = uVar9 | 0x780;
    *(undefined4 *)(lVar8 + 100) = uVar5;
    uVar5 = *(undefined4 *)(lVar19 + 0x20);
    *(uint *)(lVar8 + 0x10) = uVar9 | 0xf80;
    *(undefined4 *)(lVar8 + 0x68) = uVar5;
    uVar6 = *(uint *)(lVar19 + 0x24);
    *(uint *)(lVar8 + 0x10) = uVar9 | 0x1f80;
    iVar4 = 0;
    if (uVar6 < 6) {
      iVar4 = uVar6 + 1;
    }
    uVar16 = param_3 - 1;
    *(int *)(lVar8 + 0x6c) = iVar4;
    bVar7 = *(byte *)(lVar19 + 0x28);
    *(uint *)(lVar8 + 0x10) = uVar9 | 0x3f80;
    *(uint *)(lVar8 + 0x70) = (uint)bVar7;
    if (uVar16 != 0) {
      *(int *)(lVar8 + 0x74) = (int)param_3 + -1;
      *(uint *)(lVar8 + 0x10) = uVar9 | 0x7f80;
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      if (uVar16 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00b3fc80();
      }
      local_70 = (undefined1 *)operator_new(uVar16 * 0x10);
      uVar14 = param_3 + 0xffffffffffffffeU & 0xfffffffffffffff;
      local_60 = local_70 + uVar16 * 0x10;
      uVar13 = (ulong)-(long)local_70 >> 4;
      if (uVar14 <= (ulong)-(long)local_70 >> 4) {
        uVar13 = uVar14;
      }
      puVar11 = local_70;
      if (1 < uVar13) {
        uVar17 = (ulong)-(long)local_70 >> 4;
        if (uVar14 <= uVar17) {
          uVar17 = uVar14;
        }
        if (((-(long)local_70 & 0xfU) == 0) && (local_70 <= local_70 + uVar17 * 0x10)) {
          uVar13 = uVar13 & 0xffffffffffffffe;
          puVar15 = local_70 + 0x10;
          puVar11 = local_70 + uVar13 * 0x10;
          do {
            puVar15[-0x10] = 0;
            uVar13 = uVar13 - 2;
            *puVar15 = 0;
            puVar15[-8] = 0;
            puVar15[8] = 0;
            puVar15 = puVar15 + 0x20;
          } while (uVar13 != 0);
        }
      }
      do {
        if (puVar11 == (undefined1 *)0x0) goto LAB_00b37098;
        *puVar11 = 0;
        puVar11[8] = 0;
        puVar11 = puVar11 + 0x10;
      } while (puVar11 != local_60);
      local_90 = (void *)0x0;
      uStack_88 = 0;
      local_80 = 0;
      if (uVar16 != 0) {
        lVar10 = 0;
        uVar16 = 0;
        do {
          lVar18 = uVar16 + 1;
          uVar16 = uVar16 + 1;
          lVar18 = *(long *)(param_2[lVar18] + 8);
          plVar1 = (long *)(local_70 + lVar10);
          lVar10 = lVar10 + 0x10;
          *(undefined1 *)(plVar1 + 1) = 1;
          *plVar1 = lVar18 / 1000;
        } while (uVar16 < (ulong)((long)local_60 - (long)local_70 >> 4));
      }
      puStack_68 = local_60;
      FUN_00b53b7c(&local_a8,*(long *)(lVar19 + 8) / 1000,1,&local_70);
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      local_80 = local_98;
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      uVar16 = uStack_a0;
      if ((local_98 >> 0x38 & 0x80) == 0) {
        uVar16 = local_98 >> 0x38;
      }
      if (uVar16 != 0) {
        uVar16 = *(ulong *)(lVar8 + 8);
        *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | 1;
        if ((uVar16 & 1) != 0) {
          uVar16 = *(ulong *)(uVar16 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar8 + 0x18,&local_90,uVar16);
      }
      if (puStack_68 != local_70) {
        lVar10 = 0;
        uVar16 = 0;
        do {
          puVar2 = (ulong *)(local_70 + lVar10);
          if ((char)puVar2[1] == '\x01') {
            *puVar2 = (ulong)*(uint *)(param_2[uVar16 + 1] + 0x18);
          }
          else {
            if (puVar2 == (ulong *)0x0) goto LAB_00b37098;
            *puVar2 = (ulong)*(uint *)(param_2[uVar16 + 1] + 0x18);
            *(undefined1 *)(puVar2 + 1) = 1;
          }
          uVar16 = uVar16 + 1;
          lVar10 = lVar10 + 0x10;
        } while (uVar16 < (ulong)((long)puStack_68 - (long)local_70 >> 4));
      }
      FUN_00b53b7c(&local_a8,*(undefined4 *)(lVar19 + 0x18),1,&local_70);
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      local_80 = local_98;
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      uVar16 = uStack_a0;
      if ((local_98 >> 0x38 & 0x80) == 0) {
        uVar16 = local_98 >> 0x38;
      }
      if (uVar16 != 0) {
        uVar16 = *(ulong *)(lVar8 + 8);
        *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | 2;
        if ((uVar16 & 1) != 0) {
          uVar16 = *(ulong *)(uVar16 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar8 + 0x20,&local_90,uVar16);
      }
      if (puStack_68 != local_70) {
        lVar10 = 0;
        uVar16 = 0;
        do {
          lVar18 = uVar16 + 1;
          puVar3 = (undefined8 *)(local_70 + lVar10);
          uVar16 = uVar16 + 1;
          lVar10 = lVar10 + 0x10;
          uVar12 = *(undefined8 *)(param_2[lVar18] + 0x10);
          *(undefined1 *)(puVar3 + 1) = 1;
          *puVar3 = uVar12;
        } while (uVar16 < (ulong)((long)puStack_68 - (long)local_70 >> 4));
      }
      FUN_00b53b7c(&local_a8,*(undefined8 *)(lVar19 + 0x10),1,&local_70);
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      local_80 = local_98;
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      uVar16 = uStack_a0;
      if ((local_98 >> 0x38 & 0x80) == 0) {
        uVar16 = local_98 >> 0x38;
      }
      if (uVar16 != 0) {
        uVar16 = *(ulong *)(lVar8 + 8);
        *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | 4;
        if ((uVar16 & 1) != 0) {
          uVar16 = *(ulong *)(uVar16 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar8 + 0x28,&local_90,uVar16);
      }
      if (puStack_68 != local_70) {
        lVar10 = 0;
        uVar16 = 0;
        do {
          lVar18 = uVar16 + 1;
          puVar2 = (ulong *)(local_70 + lVar10);
          uVar16 = uVar16 + 1;
          lVar10 = lVar10 + 0x10;
          uVar9 = *(uint *)(param_2[lVar18] + 0x1c);
          *(undefined1 *)(puVar2 + 1) = 1;
          *puVar2 = (ulong)uVar9;
        } while (uVar16 < (ulong)((long)puStack_68 - (long)local_70 >> 4));
      }
      FUN_00b53b7c(&local_a8,*(undefined4 *)(lVar19 + 0x1c),1,&local_70);
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      local_80 = local_98;
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      uVar16 = uStack_a0;
      if ((local_98 >> 0x38 & 0x80) == 0) {
        uVar16 = local_98 >> 0x38;
      }
      if (uVar16 != 0) {
        uVar16 = *(ulong *)(lVar8 + 8);
        *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | 8;
        if ((uVar16 & 1) != 0) {
          uVar16 = *(ulong *)(uVar16 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar8 + 0x30,&local_90,uVar16);
      }
      if (puStack_68 != local_70) {
        lVar10 = 0;
        uVar16 = 0;
        do {
          lVar18 = uVar16 + 1;
          puVar2 = (ulong *)(local_70 + lVar10);
          uVar16 = uVar16 + 1;
          lVar10 = lVar10 + 0x10;
          uVar9 = *(uint *)(param_2[lVar18] + 0x20);
          *(undefined1 *)(puVar2 + 1) = 1;
          *puVar2 = (ulong)uVar9;
        } while (uVar16 < (ulong)((long)puStack_68 - (long)local_70 >> 4));
      }
      FUN_00b53b7c(&local_a8,*(undefined4 *)(lVar19 + 0x20),1,&local_70);
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      local_80 = local_98;
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      uVar16 = uStack_a0;
      if ((local_98 >> 0x38 & 0x80) == 0) {
        uVar16 = local_98 >> 0x38;
      }
      if (uVar16 != 0) {
        uVar16 = *(ulong *)(lVar8 + 8);
        *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | 0x10;
        if ((uVar16 & 1) != 0) {
          uVar16 = *(ulong *)(uVar16 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar8 + 0x38,&local_90,uVar16);
      }
      if (puStack_68 != local_70) {
        lVar10 = 0;
        uVar16 = 0;
        do {
          lVar18 = uVar16 + 1;
          puVar2 = (ulong *)(local_70 + lVar10);
          uVar16 = uVar16 + 1;
          lVar10 = lVar10 + 0x10;
          uVar6 = *(uint *)(param_2[lVar18] + 0x24);
          *(undefined1 *)(puVar2 + 1) = 1;
          uVar9 = 0;
          if (uVar6 < 6) {
            uVar9 = uVar6 + 1;
          }
          *puVar2 = (ulong)uVar9;
        } while (uVar16 < (ulong)((long)puStack_68 - (long)local_70 >> 4));
      }
      iVar4 = 0;
      if (*(uint *)(lVar19 + 0x24) < 6) {
        iVar4 = *(uint *)(lVar19 + 0x24) + 1;
      }
      FUN_00b53b7c(&local_a8,iVar4,1,&local_70);
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      local_80 = local_98;
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      uVar16 = uStack_a0;
      if ((local_98 >> 0x38 & 0x80) == 0) {
        uVar16 = local_98 >> 0x38;
      }
      if (uVar16 != 0) {
        uVar16 = *(ulong *)(lVar8 + 8);
        *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | 0x20;
        if ((uVar16 & 1) != 0) {
          uVar16 = *(ulong *)(uVar16 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar8 + 0x40,&local_90,uVar16);
      }
      if (puStack_68 != local_70) {
        lVar10 = 0;
        uVar16 = 0;
        do {
          puVar2 = (ulong *)(local_70 + lVar10);
          if ((char)puVar2[1] == '\x01') {
            *puVar2 = (ulong)*(byte *)(param_2[uVar16 + 1] + 0x28);
          }
          else {
            if (puVar2 == (ulong *)0x0) {
LAB_00b37098:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            *puVar2 = (ulong)*(byte *)(param_2[uVar16 + 1] + 0x28);
            *(undefined1 *)(puVar2 + 1) = 1;
          }
          uVar16 = uVar16 + 1;
          lVar10 = lVar10 + 0x10;
        } while (uVar16 < (ulong)((long)puStack_68 - (long)local_70 >> 4));
      }
      FUN_00b53b7c(&local_a8,*(undefined1 *)(lVar19 + 0x28),1,&local_70);
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      local_80 = local_98;
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      uVar9 = (uint)(char)(local_98 >> 0x38);
      if (-1 < (int)uVar9) {
        uStack_a0 = local_98 >> 0x38;
      }
      if (uStack_a0 != 0) {
        uVar16 = *(ulong *)(lVar8 + 8);
        *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | 0x40;
        if ((uVar16 & 1) != 0) {
          uVar16 = *(ulong *)(uVar16 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar8 + 0x48,&local_90,uVar16);
        uVar9 = (uint)local_80._7_1_;
      }
      if ((uVar9 >> 7 & 1) != 0) {
        operator_delete(local_90);
      }
      if (local_70 != (undefined1 *)0x0) {
        uVar16 = (ulong)(((long)local_70 - (long)puStack_68 << 0x3c) -
                        ((long)local_70 - (long)puStack_68)) >> 4;
        if ((ulong)(puStack_68 + (-0x10 - ((long)puStack_68 << 0x3c))) >> 4 <= uVar16) {
          uVar16 = (ulong)(puStack_68 + (-0x10 - ((long)puStack_68 << 0x3c))) >> 4;
        }
        puVar11 = puStack_68;
        if ((1 < uVar16) && ((((int)local_70 - (int)puStack_68 | -(int)puStack_68) & 0xfU) == 0)) {
          uVar16 = uVar16 & 0xffffffffffffffe;
          puVar11 = puStack_68 + uVar16 * -0x10;
          do {
            uVar16 = uVar16 - 2;
          } while (uVar16 != 0);
        }
        while (puVar11 != local_70) {
          puVar11 = puVar11 + -0x10;
          if (puVar11 == (undefined1 *)0x0) {
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
  return;
}


// ===== 00b37134  FUN_00b37134 =====

void FUN_00b37134(undefined8 param_1,long *param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  for (param_3 = param_3 << 3; param_3 != 0; param_3 = param_3 + -8) {
    lVar7 = *param_2;
    lVar3 = FUN_00b3de90(param_4);
    lVar5 = *(long *)(lVar7 + 8);
    uVar2 = *(uint *)(lVar3 + 0x10);
    *(uint *)(lVar3 + 0x10) = uVar2 | 1;
    *(long *)(lVar3 + 0x18) = lVar5 / 1000;
    uVar6 = *(uint *)(lVar7 + 0x10);
    *(uint *)(lVar3 + 0x10) = uVar2 | 3;
    iVar1 = 0;
    if (uVar6 < 4) {
      iVar1 = uVar6 + 1;
    }
    *(int *)(lVar3 + 0x20) = iVar1;
    uVar4 = *(undefined4 *)(lVar7 + 0x14);
    *(uint *)(lVar3 + 0x10) = uVar2 | 7;
    *(undefined4 *)(lVar3 + 0x24) = uVar4;
    uVar6 = *(uint *)(lVar7 + 0x18);
    *(uint *)(lVar3 + 0x10) = uVar2 | 0xf;
    iVar1 = 0;
    if (uVar6 < 4) {
      iVar1 = uVar6 + 1;
    }
    *(int *)(lVar3 + 0x28) = iVar1;
    iVar1 = *(int *)(lVar7 + 0x1c);
    if (3 < iVar1 - 1U) {
      iVar1 = 0;
    }
    *(uint *)(lVar3 + 0x10) = uVar2 | 0x1f;
    *(int *)(lVar3 + 0x2c) = iVar1;
    uVar6 = *(int *)(lVar7 + 0x20) - 1;
    uVar4 = 0;
    if (uVar6 < 5) {
      uVar4 = *(undefined4 *)(&DAT_00255114 + (ulong)uVar6 * 4);
    }
    *(undefined4 *)(lVar3 + 0x30) = uVar4;
    *(uint *)(lVar3 + 0x10) = uVar2 | 0x3f;
    param_2 = param_2 + 1;
    uVar6 = *(uint *)(lVar7 + 0x24);
    *(uint *)(lVar3 + 0x10) = uVar2 | 0x7f;
    if (uVar6 != 2) {
      uVar6 = (uint)(uVar6 == 1);
    }
    *(uint *)(lVar3 + 0x34) = uVar6;
    uVar6 = *(uint *)(lVar7 + 0x28);
    *(uint *)(lVar3 + 0x10) = uVar2 | 0xff;
    iVar1 = 0;
    if (uVar6 < 4) {
      iVar1 = uVar6 + 1;
    }
    *(int *)(lVar3 + 0x38) = iVar1;
    uVar6 = *(uint *)(lVar7 + 0x2c);
    *(uint *)(lVar3 + 0x10) = uVar2 | 0x1ff;
    if (uVar6 != 2) {
      uVar6 = (uint)(uVar6 == 1);
    }
    *(uint *)(lVar3 + 0x3c) = uVar6;
    iVar1 = *(int *)(lVar7 + 0x30);
    *(uint *)(lVar3 + 0x10) = uVar2 | 0x3ff;
    if (3 < iVar1 - 1U) {
      iVar1 = 0;
    }
    *(int *)(lVar3 + 0x40) = iVar1;
  }
  return;
}


// ===== 00b372c0  FUN_00b372c0 =====

void FUN_00b372c0(undefined8 param_1,long *param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  ulong *puVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  void *local_b8;
  ulong uStack_b0;
  ulong local_a8;
  void *local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  
  if (param_3 != 0) {
    lVar18 = *param_2;
    uVar15 = 0xaaaaaaaaaaaaaa00;
    lVar4 = FUN_00b3a3a8(param_4);
    lVar6 = *(long *)(lVar18 + 8);
    uVar5 = *(uint *)(lVar4 + 0x10);
    uVar16 = 0xaaaaaaaaaaaaaa00;
    uVar17 = 0xaaaaaaaaaaaaaa00;
    uVar3 = uVar5 | 8;
    *(uint *)(lVar4 + 0x10) = uVar3;
    *(long *)(lVar4 + 0x30) = lVar6 / 1000;
    uVar10 = *(ulong *)(lVar18 + 0x10);
    if (uVar10 + 0x7fffffffffffffff < 0xfffffffffffffffe) {
      uVar17 = 0xaaaaaaaaaaaaaa01;
      uVar7 = uVar10 / 1000;
      if (499 < uVar10 % 1000) {
        uVar7 = uVar7 + 1;
      }
      if ((uVar10 & 0x8000000000000000) != 0) {
        uVar7 = -(-uVar10 / 1000) - (ulong)(500 < -uVar10 % 1000);
      }
      uVar3 = uVar5 | 0x18;
      uVar16 = uVar7 & 0xffffffff;
      *(int *)(lVar4 + 0x38) = (int)uVar7;
      *(uint *)(lVar4 + 0x10) = uVar3;
    }
    uVar10 = *(ulong *)(lVar18 + 0x18);
    if (uVar10 + 0x7fffffffffffffff < 0xfffffffffffffffe) {
      uVar3 = uVar3 | 0x20;
      *(uint *)(lVar4 + 0x10) = uVar3;
      uVar7 = uVar10 / 1000;
      if (499 < uVar10 % 1000) {
        uVar7 = uVar7 + 1;
      }
      if ((uVar10 & 0x8000000000000000) != 0) {
        uVar7 = -(-uVar10 / 1000) - (ulong)(500 < -uVar10 % 1000);
      }
      uVar15 = uVar7 & 0xffffffff;
      *(int *)(lVar4 + 0x3c) = (int)uVar7;
      uVar9 = 0xaaaaaaaaaaaaaa01;
    }
    else {
      uVar9 = 0xaaaaaaaaaaaaaa00;
    }
    if (param_3 != 1) {
      uVar10 = param_3 - 1;
      *(int *)(lVar4 + 0x40) = (int)param_3 + -1;
      *(uint *)(lVar4 + 0x10) = uVar3 | 0x40;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      if (uVar10 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00b3fc80();
      }
      local_80 = (undefined1 *)operator_new(uVar10 * 0x10);
      uVar11 = param_3 + 0xffffffffffffffeU & 0xfffffffffffffff;
      local_70 = local_80 + uVar10 * 0x10;
      uVar7 = (ulong)-(long)local_80 >> 4;
      if (uVar11 <= (ulong)-(long)local_80 >> 4) {
        uVar7 = uVar11;
      }
      puVar8 = local_80;
      if (1 < uVar7) {
        uVar13 = (ulong)-(long)local_80 >> 4;
        if (uVar11 <= uVar13) {
          uVar13 = uVar11;
        }
        if (((-(long)local_80 & 0xfU) == 0) && (local_80 <= local_80 + uVar13 * 0x10)) {
          uVar7 = uVar7 & 0xffffffffffffffe;
          puVar12 = local_80 + 0x10;
          puVar8 = local_80 + uVar7 * 0x10;
          do {
            puVar12[-0x10] = 0;
            uVar7 = uVar7 - 2;
            *puVar12 = 0;
            puVar12[-8] = 0;
            puVar12[8] = 0;
            puVar12 = puVar12 + 0x20;
          } while (uVar7 != 0);
        }
      }
      do {
        if (puVar8 == (undefined1 *)0x0) goto LAB_00b37918;
        *puVar8 = 0;
        puVar8[8] = 0;
        puVar8 = puVar8 + 0x10;
      } while (puVar8 != local_70);
      local_a0 = (void *)0x0;
      uStack_98 = 0;
      local_90 = 0;
      if (uVar10 != 0) {
        lVar6 = 0;
        uVar10 = 0;
        do {
          lVar14 = uVar10 + 1;
          uVar10 = uVar10 + 1;
          lVar14 = *(long *)(param_2[lVar14] + 8);
          plVar1 = (long *)(local_80 + lVar6);
          lVar6 = lVar6 + 0x10;
          *(undefined1 *)(plVar1 + 1) = 1;
          *plVar1 = lVar14 / 1000;
        } while (uVar10 < (ulong)((long)local_70 - (long)local_80 >> 4));
      }
      puStack_78 = local_70;
      FUN_00b53b7c(&local_b8,*(long *)(lVar18 + 8) / 1000,1,&local_80);
      if ((long)local_90 < 0) {
        operator_delete(local_a0);
      }
      local_90 = local_a8;
      uStack_98 = uStack_b0;
      local_a0 = local_b8;
      uVar10 = uStack_b0;
      if ((local_a8 >> 0x38 & 0x80) == 0) {
        uVar10 = local_a8 >> 0x38;
      }
      if (uVar10 != 0) {
        uVar10 = *(ulong *)(lVar4 + 8);
        *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 1;
        if ((uVar10 & 1) != 0) {
          uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar4 + 0x18,&local_a0,uVar10);
      }
      if (puStack_78 != local_80) {
        lVar6 = 0;
        uVar10 = 0;
        do {
          uVar7 = *(ulong *)(param_2[uVar10 + 1] + 0x10);
          if (uVar7 + 0x7fffffffffffffff < 0xfffffffffffffffe) {
            puVar2 = (ulong *)(local_80 + lVar6);
            uVar11 = uVar7 / 1000;
            if (499 < uVar7 % 1000) {
              uVar11 = uVar11 + 1;
            }
            if ((uVar7 & 0x8000000000000000) != 0) {
              uVar11 = -(-uVar7 / 1000) - (ulong)(500 < -uVar7 % 1000);
            }
            if ((char)puVar2[1] != '\x01') {
              if (puVar2 == (ulong *)0x0) goto LAB_00b37918;
              *(undefined1 *)(puVar2 + 1) = 1;
            }
            *puVar2 = uVar11 & 0xffffffff;
          }
          else if (local_80[lVar6 + 8] == '\x01') {
            local_80[lVar6 + 8] = 0;
          }
          uVar10 = uVar10 + 1;
          lVar6 = lVar6 + 0x10;
        } while (uVar10 < (ulong)((long)puStack_78 - (long)local_80 >> 4));
      }
      FUN_00b53b7c(&local_b8,uVar16,uVar17,&local_80);
      if ((long)local_90 < 0) {
        operator_delete(local_a0);
      }
      local_90 = local_a8;
      uStack_98 = uStack_b0;
      local_a0 = local_b8;
      uVar10 = uStack_b0;
      if ((local_a8 >> 0x38 & 0x80) == 0) {
        uVar10 = local_a8 >> 0x38;
      }
      if (uVar10 != 0) {
        uVar10 = *(ulong *)(lVar4 + 8);
        *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
        if ((uVar10 & 1) != 0) {
          uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar4 + 0x20,&local_a0,uVar10);
      }
      if (puStack_78 != local_80) {
        lVar6 = 0;
        uVar10 = 0;
        do {
          uVar16 = *(ulong *)(param_2[uVar10 + 1] + 0x18);
          if (uVar16 + 0x7fffffffffffffff < 0xfffffffffffffffe) {
            puVar2 = (ulong *)(local_80 + lVar6);
            uVar7 = uVar16 / 1000;
            if (499 < uVar16 % 1000) {
              uVar7 = uVar7 + 1;
            }
            if ((uVar16 & 0x8000000000000000) != 0) {
              uVar7 = -(-uVar16 / 1000) - (ulong)(500 < -uVar16 % 1000);
            }
            if ((char)puVar2[1] != '\x01') {
              if (puVar2 == (ulong *)0x0) {
LAB_00b37918:
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                          );
              }
              *(undefined1 *)(puVar2 + 1) = 1;
            }
            *puVar2 = uVar7 & 0xffffffff;
          }
          else if (local_80[lVar6 + 8] == '\x01') {
            local_80[lVar6 + 8] = 0;
          }
          uVar10 = uVar10 + 1;
          lVar6 = lVar6 + 0x10;
        } while (uVar10 < (ulong)((long)puStack_78 - (long)local_80 >> 4));
      }
      FUN_00b53b7c(&local_b8,uVar15,uVar9,&local_80);
      if ((long)local_90 < 0) {
        operator_delete(local_a0);
      }
      local_90 = local_a8;
      uStack_98 = uStack_b0;
      local_a0 = local_b8;
      uVar5 = (uint)(char)(local_a8 >> 0x38);
      if (-1 < (int)uVar5) {
        uStack_b0 = local_a8 >> 0x38;
      }
      if (uStack_b0 != 0) {
        uVar15 = *(ulong *)(lVar4 + 8);
        *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 4;
        if ((uVar15 & 1) != 0) {
          uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar4 + 0x28,&local_a0,uVar15);
        uVar5 = (uint)local_90._7_1_;
      }
      if ((uVar5 >> 7 & 1) != 0) {
        operator_delete(local_a0);
      }
      if (local_80 != (undefined1 *)0x0) {
        uVar15 = (ulong)(((long)local_80 - (long)puStack_78 << 0x3c) -
                        ((long)local_80 - (long)puStack_78)) >> 4;
        if ((ulong)(puStack_78 + (-0x10 - ((long)puStack_78 << 0x3c))) >> 4 <= uVar15) {
          uVar15 = (ulong)(puStack_78 + (-0x10 - ((long)puStack_78 << 0x3c))) >> 4;
        }
        puVar8 = puStack_78;
        if ((1 < uVar15) && ((((int)local_80 - (int)puStack_78 | -(int)puStack_78) & 0xfU) == 0)) {
          uVar15 = uVar15 & 0xffffffffffffffe;
          puVar8 = puStack_78 + uVar15 * -0x10;
          do {
            uVar15 = uVar15 - 2;
          } while (uVar15 != 0);
        }
        while (puVar8 != local_80) {
          puVar8 = puVar8 + -0x10;
          if (puVar8 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        puStack_78 = local_80;
        operator_delete(local_80);
      }
    }
  }
  return;
}


// ===== 00b37988  FUN_00b37988 =====

/* WARNING: Removing unreachable block (ram,0x00b37cd4) */
/* WARNING: Removing unreachable block (ram,0x00b380ec) */
/* WARNING: Removing unreachable block (ram,0x00b3811c) */
/* WARNING: Removing unreachable block (ram,0x00b38134) */

void FUN_00b37988(undefined8 param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  void *__src;
  long lVar20;
  void *local_c0;
  long local_b8;
  char cStack_a9;
  undefined8 *local_a8;
  undefined8 *puStack_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *puStack_88;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  
  if (param_3 != 0) {
    lVar5 = FUN_00b3a4e4(param_4);
    lVar20 = *param_2;
    uVar17 = *(uint *)(lVar5 + 0x10) | 8;
    lVar8 = *(long *)(lVar20 + 8);
    *(uint *)(lVar5 + 0x10) = uVar17;
    *(long *)(lVar5 + 0x30) = lVar8 / 1000;
    uVar19 = *(ulong *)(lVar20 + 0x10);
    if (uVar19 == 0) {
      puVar12 = (undefined1 *)0x0;
      puVar6 = (undefined1 *)0x0;
    }
    else {
      if ((long)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d34c0();
      }
      puVar6 = (undefined1 *)operator_new(uVar19);
      uVar9 = uVar19 - 1;
      puVar12 = puVar6 + uVar19;
      if ((ulong)-(long)puVar6 < uVar9) {
        uVar9 = -(long)puVar6;
      }
      uVar9 = uVar9 + 1;
      puVar10 = puVar6;
      if (0x20 < uVar9) {
        uVar19 = 0x20;
        if ((uVar9 & 0x1f) != 0) {
          uVar19 = uVar9 & 0x1f;
        }
        puVar13 = (undefined8 *)(puVar6 + 0x10);
        lVar8 = uVar9 - uVar19;
        puVar10 = puVar6 + lVar8;
        do {
          lVar8 = lVar8 + -0x20;
          puVar13[-1] = 0;
          puVar13[-2] = 0;
          puVar13[1] = 0;
          *puVar13 = 0;
          puVar13 = puVar13 + 4;
        } while (lVar8 != 0);
      }
      do {
        puVar11 = local_70;
        if (puVar10 == (undefined1 *)0x0) goto LAB_00b381d8;
        puVar11 = puVar10 + 1;
        *puVar10 = 0;
        puVar10 = puVar11;
      } while (puVar11 != puVar12);
    }
    local_78 = (undefined1 *)0xaa000000;
    local_70 = (undefined1 *)0x0;
    puVar11 = *(undefined1 **)(lVar20 + 0x20);
    puVar10 = puVar11 + *(long *)(lVar20 + 0x10);
    if (puVar11 < puVar10) {
      lVar8 = 0;
      do {
        uVar19 = FUN_007cd9ac(&local_78,puVar11,(long)puVar10 - (long)puVar11);
        if ((uVar19 & 1) == 0) break;
        puVar1 = local_70 + ((ulong)local_78 >> 0x10 & 0xff) + ((ulong)local_78 >> 0x20);
        if (((byte)local_78 - 200 < 8) && ((0xebU >> (ulong)((byte)local_78 - 200 & 0x1f) & 1) != 0)
           ) {
          memcpy(puVar6 + lVar8,puVar11,(long)puVar1 - (long)puVar11);
          lVar8 = ((long)puVar1 - (long)puVar11) + lVar8;
        }
        puVar11 = puVar11 + ((long)puVar1 - (long)puVar11);
      } while (puVar1 < puVar10);
      uVar17 = *(uint *)(lVar5 + 0x10);
    }
    else {
      lVar8 = 0;
    }
    *(uint *)(lVar5 + 0x10) = uVar17 | 1;
    if (lVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
                );
    }
    if ((puVar6 == (undefined1 *)0x0) && (lVar8 != 0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                );
    }
    FUN_00713f34(lVar5 + 0x18,puVar6,lVar8);
    if (puVar6 != (undefined1 *)0x0) {
      if (puVar12 + -1 < puVar12 + -(long)puVar6) goto LAB_00b381c4;
      operator_delete(puVar6);
    }
    uVar19 = param_3 - 1;
    if (uVar19 != 0) {
      *(int *)(lVar5 + 0x38) = (int)param_3 + -1;
      *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 0x10;
      local_78 = (undefined1 *)0x0;
      local_70 = (undefined1 *)0x0;
      local_68 = (undefined1 *)0x0;
      if (uVar19 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00b3fc80();
      }
      local_78 = (undefined1 *)operator_new(uVar19 * 0x10);
      uVar14 = param_3 + 0xffffffffffffffe & 0xfffffffffffffff;
      local_70 = local_78 + uVar19 * 0x10;
      uVar9 = (ulong)-(long)local_78 >> 4;
      if (uVar14 <= (ulong)-(long)local_78 >> 4) {
        uVar9 = uVar14;
      }
      puVar12 = local_78;
      if (1 < uVar9) {
        uVar15 = (ulong)-(long)local_78 >> 4;
        if (uVar14 <= uVar15) {
          uVar15 = uVar14;
        }
        if (((-(long)local_78 & 0xfU) == 0) && (local_78 <= local_78 + uVar15 * 0x10)) {
          uVar9 = uVar9 & 0xffffffffffffffe;
          puVar6 = local_78 + 0x10;
          puVar12 = local_78 + uVar9 * 0x10;
          do {
            puVar6[-0x10] = 0;
            uVar9 = uVar9 - 2;
            *puVar6 = 0;
            puVar6[-8] = 0;
            puVar6[8] = 0;
            puVar6 = puVar6 + 0x20;
          } while (uVar9 != 0);
        }
      }
      do {
        puVar11 = local_78;
        local_68 = local_70;
        if (puVar12 == (undefined1 *)0x0) goto LAB_00b381d8;
        *puVar12 = 0;
        puVar12[8] = 0;
        puVar12 = puVar12 + 0x10;
      } while (puVar12 != local_70);
      lVar8 = 0;
      uVar9 = 0;
      local_90 = (undefined8 *)0x0;
      puStack_88 = (undefined8 *)0x0;
      local_80 = (undefined8 *)0x0;
      do {
        lVar16 = uVar9 + 1;
        uVar9 = uVar9 + 1;
        lVar16 = *(long *)(param_2[lVar16] + 8);
        plVar2 = (long *)(local_78 + lVar8);
        lVar8 = lVar8 + 0x10;
        *(undefined1 *)(plVar2 + 1) = 1;
        *plVar2 = lVar16 / 1000;
      } while (uVar9 < (ulong)((long)local_70 - (long)local_78 >> 4));
      FUN_00b53b7c(&local_a8,*(long *)(lVar20 + 8) / 1000,1,&local_78);
      local_80 = local_98;
      puStack_88 = puStack_a0;
      local_90 = local_a8;
      if (((ulong)local_98 >> 0x38 & 0x80) == 0) {
        puStack_a0 = (undefined8 *)((ulong)local_98 >> 0x38);
      }
      if (puStack_a0 != (undefined8 *)0x0) {
        uVar9 = *(ulong *)(lVar5 + 8);
        *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 2;
        if ((uVar9 & 1) != 0) {
          uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar5 + 0x20,&local_90,uVar9);
      }
      if (0xaaaaaaaaaaaaaaa < uVar19) {
                    /* WARNING: Subroutine does not return */
        FUN_00625650();
      }
      puVar7 = (undefined8 *)operator_new(uVar19 * 0x18);
      puStack_a0 = puVar7 + uVar19 * 3;
      puVar13 = puVar7;
      local_a8 = puVar7;
      local_98 = puStack_a0;
      puVar11 = local_70;
      if ((param_3 & 3) != 1) {
        uVar19 = (ulong)((int)param_3 - 1) & 3;
        do {
          if (puVar13 == (undefined8 *)0x0) goto LAB_00b381d8;
          *puVar13 = 0;
          puVar13[1] = 0;
          uVar19 = uVar19 - 1;
          puVar13[2] = 0;
          puVar13 = puVar13 + 3;
        } while (uVar19 != 0);
      }
      if (2 < (param_3 + 0x1ffffffffffffffe & 0x1fffffffffffffff)) {
        do {
          if (puVar13 == (undefined8 *)0x0) {
LAB_00b381d8:
            local_70 = puVar11;
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *puVar13 = 0;
          puVar13[1] = 0;
          puVar13[2] = 0;
          if (puVar13 + 3 == (undefined8 *)0x0) goto LAB_00b381d8;
          puVar13[3] = 0;
          puVar13[4] = 0;
          puVar13[5] = 0;
          if (puVar13 + 6 == (undefined8 *)0x0) goto LAB_00b381d8;
          puVar13[6] = 0;
          puVar13[7] = 0;
          puVar13[8] = 0;
          if (puVar13 + 9 == (undefined8 *)0x0) goto LAB_00b381d8;
          puVar18 = puVar13 + 0xc;
          puVar13[9] = 0;
          puVar13[10] = 0;
          puVar13[0xb] = 0;
          puVar13 = puVar18;
        } while (puVar18 != puStack_a0);
      }
      uVar19 = 0;
      do {
        puVar13 = puVar7 + uVar19 * 3;
        lVar8 = param_2[uVar19 + 1];
        uVar14 = *(ulong *)(lVar8 + 0x10);
        uVar9 = (ulong)*(char *)((long)puVar13 + 0x17);
        if ((long)uVar9 < 0) {
          uVar9 = puVar13[1];
          if (uVar9 < uVar14) {
            uVar17 = (uint)(byte)((ulong)puVar13[2] >> 0x38);
            lVar20 = (puVar13[2] & 0x7fffffffffffffff) - 1;
            goto LAB_00b37e78;
          }
          puVar7 = (undefined8 *)*puVar13;
LAB_00b37eec:
          puVar13[1] = uVar14;
          puVar13 = puVar7;
        }
        else if (uVar9 < uVar14) {
          uVar17 = (uint)*(char *)((long)puVar13 + 0x17);
          lVar20 = 0x16;
LAB_00b37e78:
          if (lVar20 - uVar9 < uVar14 - uVar9) {
            FUN_0054774c(puVar13,lVar20,uVar14 - lVar20,uVar9,uVar9,0,0);
            uVar17 = (uint)*(byte *)((long)puVar13 + 0x17);
            puVar13[1] = uVar9;
          }
          puVar7 = puVar13;
          if ((uVar17 >> 7 & 1) != 0) {
            puVar7 = (undefined8 *)*puVar13;
          }
          memset((void *)((long)puVar7 + uVar9),0,uVar14 - uVar9);
          if (*(char *)((long)puVar13 + 0x17) < '\0') goto LAB_00b37eec;
          *(byte *)((long)puVar13 + 0x17) = (byte)uVar14 & 0x7f;
          puVar13 = puVar7;
        }
        else {
          *(byte *)((long)puVar13 + 0x17) = (byte)uVar14;
        }
        puVar7 = local_a8;
        *(undefined1 *)((long)puVar13 + uVar14) = 0;
        uVar9 = ((long)puStack_a0 - (long)local_a8 >> 3) * -0x5555555555555555;
        if (uVar9 <= uVar19) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                    );
        }
        uVar14 = uVar19 + 1;
        puVar13 = local_a8 + uVar19 * 3;
        puVar18 = puVar13;
        if (*(char *)((long)puVar13 + 0x17) < '\0') {
          puVar18 = (undefined8 *)*puVar13;
        }
        uVar19 = 0;
        local_c0 = (void *)0xaa000000;
        local_b8 = 0;
        __src = *(void **)(lVar8 + 0x20);
        pvVar3 = (void *)((long)__src + *(long *)(lVar8 + 0x10));
        if (__src < pvVar3) {
          uVar19 = 0;
          do {
            uVar15 = FUN_007cd9ac(&local_c0,__src,(long)pvVar3 - (long)__src);
            if ((uVar15 & 1) == 0) break;
            pvVar4 = (void *)(local_b8 + ((ulong)local_c0 >> 0x20) +
                             ((ulong)local_c0 >> 0x10 & 0xff));
            if (((byte)local_c0 - 200 < 8) &&
               ((0xebU >> (ulong)((byte)local_c0 - 200 & 0x1f) & 1) != 0)) {
              memcpy((void *)((long)puVar18 + uVar19),__src,(long)pvVar4 - (long)__src);
              uVar19 = ((long)pvVar4 - (long)__src) + uVar19;
            }
            __src = (void *)((long)__src + ((long)pvVar4 - (long)__src));
          } while (pvVar4 < pvVar3);
        }
        if (uVar19 < *(ulong *)(lVar8 + 0x10)) {
          uVar9 = (ulong)*(char *)((long)puVar13 + 0x17);
          if ((long)uVar9 < 0) {
            uVar9 = puVar13[1];
            if (uVar9 < uVar19) {
              uVar17 = (uint)(byte)((ulong)puVar13[2] >> 0x38);
              lVar8 = (puVar13[2] & 0x7fffffffffffffff) - 1;
              goto LAB_00b3800c;
            }
            puVar7 = (undefined8 *)*puVar13;
LAB_00b37dfc:
            puVar13[1] = uVar19;
            puVar13 = puVar7;
          }
          else if (uVar9 < uVar19) {
            uVar17 = (uint)*(char *)((long)puVar13 + 0x17);
            lVar8 = 0x16;
LAB_00b3800c:
            if (lVar8 - uVar9 < uVar19 - uVar9) {
              FUN_0054774c(puVar13,lVar8,uVar19 - lVar8,uVar9,uVar9,0,0);
              uVar17 = (uint)*(byte *)((long)puVar13 + 0x17);
              puVar13[1] = uVar9;
            }
            puVar7 = puVar13;
            if ((uVar17 >> 7 & 1) != 0) {
              puVar7 = (undefined8 *)*puVar13;
            }
            memset((void *)((long)puVar7 + uVar9),0,uVar19 - uVar9);
            if (*(char *)((long)puVar13 + 0x17) < '\0') goto LAB_00b37dfc;
            *(byte *)((long)puVar13 + 0x17) = (byte)uVar19 & 0x7f;
            puVar13 = puVar7;
          }
          else {
            *(byte *)((long)puVar13 + 0x17) = (byte)uVar19;
          }
          *(undefined1 *)((long)puVar13 + uVar19) = 0;
          uVar9 = ((long)puStack_a0 - (long)local_a8 >> 3) * -0x5555555555555555;
          puVar7 = local_a8;
        }
        uVar19 = uVar14;
      } while (uVar14 < uVar9);
      FUN_00b54288(&local_c0,&local_a8);
      uVar19 = *(ulong *)(lVar5 + 8);
      *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 4;
      if ((uVar19 & 1) != 0) {
        uVar19 = *(ulong *)(uVar19 & 0xfffffffffffffffe);
      }
      FUN_007140ec(lVar5 + 0x28,&local_c0,uVar19);
      if (cStack_a9 < '\0') {
        operator_delete(local_c0);
      }
      puVar13 = puStack_a0;
      if (local_a8 == (undefined8 *)0x0) {
LAB_00b38158:
        if (local_78 == (undefined1 *)0x0) {
          return;
        }
        uVar19 = (ulong)(((long)local_78 - (long)local_70 << 0x3c) -
                        ((long)local_78 - (long)local_70)) >> 4;
        if ((ulong)(local_70 + (-0x10 - ((long)local_70 << 0x3c))) >> 4 <= uVar19) {
          uVar19 = (ulong)(local_70 + (-0x10 - ((long)local_70 << 0x3c))) >> 4;
        }
        puVar12 = local_70;
        if ((1 < uVar19) && ((((int)local_78 - (int)local_70 | -(int)local_70) & 0xfU) == 0)) {
          uVar19 = uVar19 & 0xffffffffffffffe;
          puVar12 = local_70 + uVar19 * -0x10;
          do {
            uVar19 = uVar19 - 2;
          } while (uVar19 != 0);
        }
        do {
          if (puVar12 == local_78) {
            local_70 = local_78;
            operator_delete(local_78);
            return;
          }
          puVar12 = puVar12 + -0x10;
        } while (puVar12 != (undefined1 *)0x0);
      }
      else {
        do {
          if (local_a8 == puVar13) {
            puStack_a0 = local_a8;
            operator_delete(local_a8);
            goto LAB_00b38158;
          }
          puVar13 = puVar13 + -3;
        } while (puVar13 != (undefined8 *)0x0);
      }
LAB_00b381c4:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
  return;
}


// ===== 00b3828c  FUN_00b3828c =====

/* WARNING: Removing unreachable block (ram,0x00b385d8) */
/* WARNING: Removing unreachable block (ram,0x00b389f0) */
/* WARNING: Removing unreachable block (ram,0x00b38a20) */
/* WARNING: Removing unreachable block (ram,0x00b38a38) */

void FUN_00b3828c(undefined8 param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  void *__src;
  long lVar20;
  void *local_c0;
  long local_b8;
  char cStack_a9;
  undefined8 *local_a8;
  undefined8 *puStack_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *puStack_88;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  
  if (param_3 != 0) {
    lVar5 = FUN_00b3a620(param_4);
    lVar20 = *param_2;
    uVar17 = *(uint *)(lVar5 + 0x10) | 8;
    lVar8 = *(long *)(lVar20 + 8);
    *(uint *)(lVar5 + 0x10) = uVar17;
    *(long *)(lVar5 + 0x30) = lVar8 / 1000;
    uVar19 = *(ulong *)(lVar20 + 0x10);
    if (uVar19 == 0) {
      puVar12 = (undefined1 *)0x0;
      puVar6 = (undefined1 *)0x0;
    }
    else {
      if ((long)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d34c0();
      }
      puVar6 = (undefined1 *)operator_new(uVar19);
      uVar9 = uVar19 - 1;
      puVar12 = puVar6 + uVar19;
      if ((ulong)-(long)puVar6 < uVar9) {
        uVar9 = -(long)puVar6;
      }
      uVar9 = uVar9 + 1;
      puVar10 = puVar6;
      if (0x20 < uVar9) {
        uVar19 = 0x20;
        if ((uVar9 & 0x1f) != 0) {
          uVar19 = uVar9 & 0x1f;
        }
        puVar13 = (undefined8 *)(puVar6 + 0x10);
        lVar8 = uVar9 - uVar19;
        puVar10 = puVar6 + lVar8;
        do {
          lVar8 = lVar8 + -0x20;
          puVar13[-1] = 0;
          puVar13[-2] = 0;
          puVar13[1] = 0;
          *puVar13 = 0;
          puVar13 = puVar13 + 4;
        } while (lVar8 != 0);
      }
      do {
        puVar11 = local_70;
        if (puVar10 == (undefined1 *)0x0) goto LAB_00b38adc;
        puVar11 = puVar10 + 1;
        *puVar10 = 0;
        puVar10 = puVar11;
      } while (puVar11 != puVar12);
    }
    local_78 = (undefined1 *)0xaa000000;
    local_70 = (undefined1 *)0x0;
    puVar11 = *(undefined1 **)(lVar20 + 0x20);
    puVar10 = puVar11 + *(long *)(lVar20 + 0x10);
    if (puVar11 < puVar10) {
      lVar8 = 0;
      do {
        uVar19 = FUN_007cd9ac(&local_78,puVar11,(long)puVar10 - (long)puVar11);
        if ((uVar19 & 1) == 0) break;
        puVar1 = local_70 + ((ulong)local_78 >> 0x10 & 0xff) + ((ulong)local_78 >> 0x20);
        if (((byte)local_78 - 200 < 8) && ((0xebU >> (ulong)((byte)local_78 - 200 & 0x1f) & 1) != 0)
           ) {
          memcpy(puVar6 + lVar8,puVar11,(long)puVar1 - (long)puVar11);
          lVar8 = ((long)puVar1 - (long)puVar11) + lVar8;
        }
        puVar11 = puVar11 + ((long)puVar1 - (long)puVar11);
      } while (puVar1 < puVar10);
      uVar17 = *(uint *)(lVar5 + 0x10);
    }
    else {
      lVar8 = 0;
    }
    *(uint *)(lVar5 + 0x10) = uVar17 | 1;
    if (lVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
                );
    }
    if ((puVar6 == (undefined1 *)0x0) && (lVar8 != 0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                );
    }
    FUN_00713f34(lVar5 + 0x18,puVar6,lVar8);
    if (puVar6 != (undefined1 *)0x0) {
      if (puVar12 + -1 < puVar12 + -(long)puVar6) goto LAB_00b38ac8;
      operator_delete(puVar6);
    }
    uVar19 = param_3 - 1;
    if (uVar19 != 0) {
      *(int *)(lVar5 + 0x38) = (int)param_3 + -1;
      *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 0x10;
      local_78 = (undefined1 *)0x0;
      local_70 = (undefined1 *)0x0;
      local_68 = (undefined1 *)0x0;
      if (uVar19 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00b3fc80();
      }
      local_78 = (undefined1 *)operator_new(uVar19 * 0x10);
      uVar14 = param_3 + 0xffffffffffffffe & 0xfffffffffffffff;
      local_70 = local_78 + uVar19 * 0x10;
      uVar9 = (ulong)-(long)local_78 >> 4;
      if (uVar14 <= (ulong)-(long)local_78 >> 4) {
        uVar9 = uVar14;
      }
      puVar12 = local_78;
      if (1 < uVar9) {
        uVar15 = (ulong)-(long)local_78 >> 4;
        if (uVar14 <= uVar15) {
          uVar15 = uVar14;
        }
        if (((-(long)local_78 & 0xfU) == 0) && (local_78 <= local_78 + uVar15 * 0x10)) {
          uVar9 = uVar9 & 0xffffffffffffffe;
          puVar6 = local_78 + 0x10;
          puVar12 = local_78 + uVar9 * 0x10;
          do {
            puVar6[-0x10] = 0;
            uVar9 = uVar9 - 2;
            *puVar6 = 0;
            puVar6[-8] = 0;
            puVar6[8] = 0;
            puVar6 = puVar6 + 0x20;
          } while (uVar9 != 0);
        }
      }
      do {
        puVar11 = local_78;
        local_68 = local_70;
        if (puVar12 == (undefined1 *)0x0) goto LAB_00b38adc;
        *puVar12 = 0;
        puVar12[8] = 0;
        puVar12 = puVar12 + 0x10;
      } while (puVar12 != local_70);
      lVar8 = 0;
      uVar9 = 0;
      local_90 = (undefined8 *)0x0;
      puStack_88 = (undefined8 *)0x0;
      local_80 = (undefined8 *)0x0;
      do {
        lVar16 = uVar9 + 1;
        uVar9 = uVar9 + 1;
        lVar16 = *(long *)(param_2[lVar16] + 8);
        plVar2 = (long *)(local_78 + lVar8);
        lVar8 = lVar8 + 0x10;
        *(undefined1 *)(plVar2 + 1) = 1;
        *plVar2 = lVar16 / 1000;
      } while (uVar9 < (ulong)((long)local_70 - (long)local_78 >> 4));
      FUN_00b53b7c(&local_a8,*(long *)(lVar20 + 8) / 1000,1,&local_78);
      local_80 = local_98;
      puStack_88 = puStack_a0;
      local_90 = local_a8;
      if (((ulong)local_98 >> 0x38 & 0x80) == 0) {
        puStack_a0 = (undefined8 *)((ulong)local_98 >> 0x38);
      }
      if (puStack_a0 != (undefined8 *)0x0) {
        uVar9 = *(ulong *)(lVar5 + 8);
        *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 2;
        if ((uVar9 & 1) != 0) {
          uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(lVar5 + 0x20,&local_90,uVar9);
      }
      if (0xaaaaaaaaaaaaaaa < uVar19) {
                    /* WARNING: Subroutine does not return */
        FUN_00625650();
      }
      puVar7 = (undefined8 *)operator_new(uVar19 * 0x18);
      puStack_a0 = puVar7 + uVar19 * 3;
      puVar13 = puVar7;
      local_a8 = puVar7;
      local_98 = puStack_a0;
      puVar11 = local_70;
      if ((param_3 & 3) != 1) {
        uVar19 = (ulong)((int)param_3 - 1) & 3;
        do {
          if (puVar13 == (undefined8 *)0x0) goto LAB_00b38adc;
          *puVar13 = 0;
          puVar13[1] = 0;
          uVar19 = uVar19 - 1;
          puVar13[2] = 0;
          puVar13 = puVar13 + 3;
        } while (uVar19 != 0);
      }
      if (2 < (param_3 + 0x1ffffffffffffffe & 0x1fffffffffffffff)) {
        do {
          if (puVar13 == (undefined8 *)0x0) {
LAB_00b38adc:
            local_70 = puVar11;
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          *puVar13 = 0;
          puVar13[1] = 0;
          puVar13[2] = 0;
          if (puVar13 + 3 == (undefined8 *)0x0) goto LAB_00b38adc;
          puVar13[3] = 0;
          puVar13[4] = 0;
          puVar13[5] = 0;
          if (puVar13 + 6 == (undefined8 *)0x0) goto LAB_00b38adc;
          puVar13[6] = 0;
          puVar13[7] = 0;
          puVar13[8] = 0;
          if (puVar13 + 9 == (undefined8 *)0x0) goto LAB_00b38adc;
          puVar18 = puVar13 + 0xc;
          puVar13[9] = 0;
          puVar13[10] = 0;
          puVar13[0xb] = 0;
          puVar13 = puVar18;
        } while (puVar18 != puStack_a0);
      }
      uVar19 = 0;
      do {
        puVar13 = puVar7 + uVar19 * 3;
        lVar8 = param_2[uVar19 + 1];
        uVar14 = *(ulong *)(lVar8 + 0x10);
        uVar9 = (ulong)*(char *)((long)puVar13 + 0x17);
        if ((long)uVar9 < 0) {
          uVar9 = puVar13[1];
          if (uVar9 < uVar14) {
            uVar17 = (uint)(byte)((ulong)puVar13[2] >> 0x38);
            lVar20 = (puVar13[2] & 0x7fffffffffffffff) - 1;
            goto LAB_00b3877c;
          }
          puVar7 = (undefined8 *)*puVar13;
LAB_00b387f0:
          puVar13[1] = uVar14;
          puVar13 = puVar7;
        }
        else if (uVar9 < uVar14) {
          uVar17 = (uint)*(char *)((long)puVar13 + 0x17);
          lVar20 = 0x16;
LAB_00b3877c:
          if (lVar20 - uVar9 < uVar14 - uVar9) {
            FUN_0054774c(puVar13,lVar20,uVar14 - lVar20,uVar9,uVar9,0,0);
            uVar17 = (uint)*(byte *)((long)puVar13 + 0x17);
            puVar13[1] = uVar9;
          }
          puVar7 = puVar13;
          if ((uVar17 >> 7 & 1) != 0) {
            puVar7 = (undefined8 *)*puVar13;
          }
          memset((void *)((long)puVar7 + uVar9),0,uVar14 - uVar9);
          if (*(char *)((long)puVar13 + 0x17) < '\0') goto LAB_00b387f0;
          *(byte *)((long)puVar13 + 0x17) = (byte)uVar14 & 0x7f;
          puVar13 = puVar7;
        }
        else {
          *(byte *)((long)puVar13 + 0x17) = (byte)uVar14;
        }
        puVar7 = local_a8;
        *(undefined1 *)((long)puVar13 + uVar14) = 0;
        uVar9 = ((long)puStack_a0 - (long)local_a8 >> 3) * -0x5555555555555555;
        if (uVar9 <= uVar19) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                    );
        }
        uVar14 = uVar19 + 1;
        puVar13 = local_a8 + uVar19 * 3;
        puVar18 = puVar13;
        if (*(char *)((long)puVar13 + 0x17) < '\0') {
          puVar18 = (undefined8 *)*puVar13;
        }
        uVar19 = 0;
        local_c0 = (void *)0xaa000000;
        local_b8 = 0;
        __src = *(void **)(lVar8 + 0x20);
        pvVar3 = (void *)((long)__src + *(long *)(lVar8 + 0x10));
        if (__src < pvVar3) {
          uVar19 = 0;
          do {
            uVar15 = FUN_007cd9ac(&local_c0,__src,(long)pvVar3 - (long)__src);
            if ((uVar15 & 1) == 0) break;
            pvVar4 = (void *)(local_b8 + ((ulong)local_c0 >> 0x20) +
                             ((ulong)local_c0 >> 0x10 & 0xff));
            if (((byte)local_c0 - 200 < 8) &&
               ((0xebU >> (ulong)((byte)local_c0 - 200 & 0x1f) & 1) != 0)) {
              memcpy((void *)((long)puVar18 + uVar19),__src,(long)pvVar4 - (long)__src);
              uVar19 = ((long)pvVar4 - (long)__src) + uVar19;
            }
            __src = (void *)((long)__src + ((long)pvVar4 - (long)__src));
          } while (pvVar4 < pvVar3);
        }
        if (uVar19 < *(ulong *)(lVar8 + 0x10)) {
          uVar9 = (ulong)*(char *)((long)puVar13 + 0x17);
          if ((long)uVar9 < 0) {
            uVar9 = puVar13[1];
            if (uVar9 < uVar19) {
              uVar17 = (uint)(byte)((ulong)puVar13[2] >> 0x38);
              lVar8 = (puVar13[2] & 0x7fffffffffffffff) - 1;
              goto LAB_00b38910;
            }
            puVar7 = (undefined8 *)*puVar13;
LAB_00b38700:
            puVar13[1] = uVar19;
            puVar13 = puVar7;
          }
          else if (uVar9 < uVar19) {
            uVar17 = (uint)*(char *)((long)puVar13 + 0x17);
            lVar8 = 0x16;
LAB_00b38910:
            if (lVar8 - uVar9 < uVar19 - uVar9) {
              FUN_0054774c(puVar13,lVar8,uVar19 - lVar8,uVar9,uVar9,0,0);
              uVar17 = (uint)*(byte *)((long)puVar13 + 0x17);
              puVar13[1] = uVar9;
            }
            puVar7 = puVar13;
            if ((uVar17 >> 7 & 1) != 0) {
              puVar7 = (undefined8 *)*puVar13;
            }
            memset((void *)((long)puVar7 + uVar9),0,uVar19 - uVar9);
            if (*(char *)((long)puVar13 + 0x17) < '\0') goto LAB_00b38700;
            *(byte *)((long)puVar13 + 0x17) = (byte)uVar19 & 0x7f;
            puVar13 = puVar7;
          }
          else {
            *(byte *)((long)puVar13 + 0x17) = (byte)uVar19;
          }
          *(undefined1 *)((long)puVar13 + uVar19) = 0;
          uVar9 = ((long)puStack_a0 - (long)local_a8 >> 3) * -0x5555555555555555;
          puVar7 = local_a8;
        }
        uVar19 = uVar14;
      } while (uVar14 < uVar9);
      FUN_00b54288(&local_c0,&local_a8);
      uVar19 = *(ulong *)(lVar5 + 8);
      *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 4;
      if ((uVar19 & 1) != 0) {
        uVar19 = *(ulong *)(uVar19 & 0xfffffffffffffffe);
      }
      FUN_007140ec(lVar5 + 0x28,&local_c0,uVar19);
      if (cStack_a9 < '\0') {
        operator_delete(local_c0);
      }
      puVar13 = puStack_a0;
      if (local_a8 == (undefined8 *)0x0) {
LAB_00b38a5c:
        if (local_78 == (undefined1 *)0x0) {
          return;
        }
        uVar19 = (ulong)(((long)local_78 - (long)local_70 << 0x3c) -
                        ((long)local_78 - (long)local_70)) >> 4;
        if ((ulong)(local_70 + (-0x10 - ((long)local_70 << 0x3c))) >> 4 <= uVar19) {
          uVar19 = (ulong)(local_70 + (-0x10 - ((long)local_70 << 0x3c))) >> 4;
        }
        puVar12 = local_70;
        if ((1 < uVar19) && ((((int)local_78 - (int)local_70 | -(int)local_70) & 0xfU) == 0)) {
          uVar19 = uVar19 & 0xffffffffffffffe;
          puVar12 = local_70 + uVar19 * -0x10;
          do {
            uVar19 = uVar19 - 2;
          } while (uVar19 != 0);
        }
        do {
          if (puVar12 == local_78) {
            local_70 = local_78;
            operator_delete(local_78);
            return;
          }
          puVar12 = puVar12 + -0x10;
        } while (puVar12 != (undefined1 *)0x0);
      }
      else {
        do {
          if (local_a8 == puVar13) {
            puStack_a0 = local_a8;
            operator_delete(local_a8);
            goto LAB_00b38a5c;
          }
          puVar13 = puVar13 + -3;
        } while (puVar13 != (undefined8 *)0x0);
      }
LAB_00b38ac8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
  return;
}


// ===== 00b38b90  FUN_00b38b90 =====

void FUN_00b38b90(undefined8 param_1,long *param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  for (param_3 = param_3 << 3; param_3 != 0; param_3 = param_3 + -8) {
    lVar7 = *param_2;
    lVar3 = FUN_00b3dc18(param_4);
    lVar6 = *(long *)(lVar7 + 8);
    uVar1 = *(uint *)(lVar3 + 0x10);
    lVar5 = *(long *)(lVar3 + 0x18);
    *(uint *)(lVar3 + 0x10) = uVar1 | 2;
    *(long *)(lVar3 + 0x20) = lVar6 / 1000;
    uVar2 = *(undefined4 *)(*(long *)(lVar7 + 0x10) + 4);
    *(uint *)(lVar3 + 0x10) = uVar1 | 6;
    *(undefined4 *)(lVar3 + 0x28) = uVar2;
    uVar2 = **(undefined4 **)(lVar7 + 0x10);
    *(uint *)(lVar3 + 0x10) = uVar1 | 0xe;
    *(undefined4 *)(lVar3 + 0x2c) = uVar2;
    *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)(*(long *)(lVar7 + 0x10) + 8);
    *(uint *)(lVar3 + 0x10) = uVar1 | 0x1f;
    if (lVar5 == 0) {
      uVar4 = *(ulong *)(lVar3 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      lVar5 = FUN_00b3fd88(uVar4);
      *(long *)(lVar3 + 0x18) = lVar5;
    }
    uVar4 = FUN_00b393e8(*(long *)(lVar7 + 0x10) + 0x30,lVar5);
    if ((uVar4 & 1) == 0) {
      if (*(long *)(lVar3 + 0x18) != 0) {
        FUN_00b4e830();
      }
      *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) & 0xfffffffe;
    }
    param_2 = param_2 + 1;
  }
  return;
}


// ===== 00b38cb0  FUN_00b38cb0 =====

void FUN_00b38cb0(undefined8 param_1,long *param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  for (param_3 = param_3 << 3; param_3 != 0; param_3 = param_3 + -8) {
    lVar7 = *param_2;
    lVar3 = FUN_00b3dd54(param_4);
    lVar6 = *(long *)(lVar7 + 8);
    uVar1 = *(uint *)(lVar3 + 0x10);
    lVar5 = *(long *)(lVar3 + 0x18);
    *(uint *)(lVar3 + 0x10) = uVar1 | 2;
    *(long *)(lVar3 + 0x20) = lVar6 / 1000;
    uVar2 = **(undefined4 **)(lVar7 + 0x10);
    *(uint *)(lVar3 + 0x10) = uVar1 | 6;
    *(undefined4 *)(lVar3 + 0x28) = uVar2;
    *(undefined4 *)(lVar3 + 0x2c) = *(undefined4 *)(*(long *)(lVar7 + 0x10) + 8);
    *(uint *)(lVar3 + 0x10) = uVar1 | 0xf;
    if (lVar5 == 0) {
      uVar4 = *(ulong *)(lVar3 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      lVar5 = FUN_00b3fd88(uVar4);
      *(long *)(lVar3 + 0x18) = lVar5;
    }
    uVar4 = FUN_00b393e8(*(long *)(lVar7 + 0x10) + 0x30,lVar5);
    if ((uVar4 & 1) == 0) {
      if (*(long *)(lVar3 + 0x18) != 0) {
        FUN_00b4e830();
      }
      *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) & 0xfffffffe;
    }
    param_2 = param_2 + 1;
  }
  return;
}


// ===== 00b38dbc  FUN_00b38dbc =====

ulong FUN_00b38dbc(long param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  puVar2 = (ulong *)(param_1 + 0x180);
  if ((uVar7 & 1) == 0) {
    uVar4 = *puVar2;
  }
  else {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    uVar4 = *puVar2;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x188) = 1;
    uVar3 = FUN_00b3fbe0(uVar7);
    *(undefined8 *)(param_1 + 0x180) = uVar3;
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(param_1 + 0x188) == 0) {
        *(undefined4 *)(param_1 + 0x188) = 1;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_1 + 0x180,1,uVar7);
        uVar7 = FUN_00b3fbe0(uVar7);
        *puVar2 = uVar7;
        *(undefined4 *)(*(long *)(param_1 + 0x180) + 3) = 2;
        *(undefined4 *)(param_1 + 0x188) = 2;
      }
    }
    else {
      piVar5 = (int *)(uVar4 - 1);
      iVar1 = *(int *)(param_1 + 0x188);
      if (iVar1 == *piVar5) {
        FUN_00711858(param_1 + 0x180,1,uVar7);
        iVar6 = *(int *)(*puVar2 + 3);
        piVar5 = (int *)(*puVar2 - 1);
      }
      else {
        iVar6 = *(int *)(uVar4 + 3);
        if (0 < iVar6 - iVar1) {
          *(int *)(param_1 + 0x188) = iVar1 + 1;
          puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
          goto LAB_00b38ed4;
        }
      }
      piVar5[1] = iVar6 + 1;
      iVar1 = *(int *)(param_1 + 0x188);
      *(int *)(param_1 + 0x188) = iVar1 + 1;
      uVar7 = FUN_00b3fbe0(uVar7);
      puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
      *puVar2 = uVar7;
    }
  }
LAB_00b38ed4:
  uVar7 = *puVar2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x8000;
  return uVar7;
}


// ===== 00b38ef8  FUN_00b38ef8 =====

ulong FUN_00b38ef8(long param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  puVar2 = (ulong *)(param_1 + 0x120);
  if ((uVar7 & 1) == 0) {
    uVar4 = *puVar2;
  }
  else {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    uVar4 = *puVar2;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x128) = 1;
    uVar3 = FUN_00b3fc30(uVar7);
    *(undefined8 *)(param_1 + 0x120) = uVar3;
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(param_1 + 0x128) == 0) {
        *(undefined4 *)(param_1 + 0x128) = 1;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_1 + 0x120,1,uVar7);
        uVar7 = FUN_00b3fc30(uVar7);
        *puVar2 = uVar7;
        *(undefined4 *)(*(long *)(param_1 + 0x120) + 3) = 2;
        *(undefined4 *)(param_1 + 0x128) = 2;
      }
    }
    else {
      piVar5 = (int *)(uVar4 - 1);
      iVar1 = *(int *)(param_1 + 0x128);
      if (iVar1 == *piVar5) {
        FUN_00711858(param_1 + 0x120,1,uVar7);
        iVar6 = *(int *)(*puVar2 + 3);
        piVar5 = (int *)(*puVar2 - 1);
      }
      else {
        iVar6 = *(int *)(uVar4 + 3);
        if (0 < iVar6 - iVar1) {
          *(int *)(param_1 + 0x128) = iVar1 + 1;
          puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
          goto LAB_00b39010;
        }
      }
      piVar5[1] = iVar6 + 1;
      iVar1 = *(int *)(param_1 + 0x128);
      *(int *)(param_1 + 0x128) = iVar1 + 1;
      uVar7 = FUN_00b3fc30(uVar7);
      puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
      *puVar2 = uVar7;
    }
  }
LAB_00b39010:
  uVar7 = *puVar2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x800;
  return uVar7;
}


// ===== 00b39034  FUN_00b39034 =====

ulong FUN_00b39034(long param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  puVar2 = (ulong *)(param_1 + 0x90);
  if ((uVar7 & 1) == 0) {
    uVar4 = *puVar2;
  }
  else {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    uVar4 = *puVar2;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x98) = 1;
    uVar3 = FUN_00b3fc98(uVar7);
    *(undefined8 *)(param_1 + 0x90) = uVar3;
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(param_1 + 0x98) == 0) {
        *(undefined4 *)(param_1 + 0x98) = 1;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_1 + 0x90,1,uVar7);
        uVar7 = FUN_00b3fc98(uVar7);
        *puVar2 = uVar7;
        *(undefined4 *)(*(long *)(param_1 + 0x90) + 3) = 2;
        *(undefined4 *)(param_1 + 0x98) = 2;
      }
    }
    else {
      piVar5 = (int *)(uVar4 - 1);
      iVar1 = *(int *)(param_1 + 0x98);
      if (iVar1 == *piVar5) {
        FUN_00711858(param_1 + 0x90,1,uVar7);
        iVar6 = *(int *)(*puVar2 + 3);
        piVar5 = (int *)(*puVar2 - 1);
      }
      else {
        iVar6 = *(int *)(uVar4 + 3);
        if (0 < iVar6 - iVar1) {
          *(int *)(param_1 + 0x98) = iVar1 + 1;
          puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
          goto LAB_00b3914c;
        }
      }
      piVar5[1] = iVar6 + 1;
      iVar1 = *(int *)(param_1 + 0x98);
      *(int *)(param_1 + 0x98) = iVar1 + 1;
      uVar7 = FUN_00b3fc98(uVar7);
      puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
      *puVar2 = uVar7;
    }
  }
LAB_00b3914c:
  uVar7 = *puVar2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
  return uVar7;
}


// ===== 00b39170  FUN_00b39170 =====

ulong FUN_00b39170(long param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  puVar2 = (ulong *)(param_1 + 0x270);
  if ((uVar7 & 1) == 0) {
    uVar4 = *puVar2;
  }
  else {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    uVar4 = *puVar2;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x278) = 1;
    uVar3 = FUN_00b3fce8(uVar7);
    *(undefined8 *)(param_1 + 0x270) = uVar3;
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(param_1 + 0x278) == 0) {
        *(undefined4 *)(param_1 + 0x278) = 1;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_1 + 0x270,1,uVar7);
        uVar7 = FUN_00b3fce8(uVar7);
        *puVar2 = uVar7;
        *(undefined4 *)(*(long *)(param_1 + 0x270) + 3) = 2;
        *(undefined4 *)(param_1 + 0x278) = 2;
      }
    }
    else {
      piVar5 = (int *)(uVar4 - 1);
      iVar1 = *(int *)(param_1 + 0x278);
      if (iVar1 == *piVar5) {
        FUN_00711858(param_1 + 0x270,1,uVar7);
        iVar6 = *(int *)(*puVar2 + 3);
        piVar5 = (int *)(*puVar2 - 1);
      }
      else {
        iVar6 = *(int *)(uVar4 + 3);
        if (0 < iVar6 - iVar1) {
          *(int *)(param_1 + 0x278) = iVar1 + 1;
          puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
          goto LAB_00b39288;
        }
      }
      piVar5[1] = iVar6 + 1;
      iVar1 = *(int *)(param_1 + 0x278);
      *(int *)(param_1 + 0x278) = iVar1 + 1;
      uVar7 = FUN_00b3fce8(uVar7);
      puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
      *puVar2 = uVar7;
    }
  }
LAB_00b39288:
  uVar7 = *puVar2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x2000000;
  return uVar7;
}


// ===== 00b392ac  FUN_00b392ac =====

ulong FUN_00b392ac(long param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  puVar2 = (ulong *)(param_1 + 0x2a0);
  if ((uVar7 & 1) == 0) {
    uVar4 = *puVar2;
  }
  else {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    uVar4 = *puVar2;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x2a8) = 1;
    uVar3 = FUN_00b3fd38(uVar7);
    *(undefined8 *)(param_1 + 0x2a0) = uVar3;
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(param_1 + 0x2a8) == 0) {
        *(undefined4 *)(param_1 + 0x2a8) = 1;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_1 + 0x2a0,1,uVar7);
        uVar7 = FUN_00b3fd38(uVar7);
        *puVar2 = uVar7;
        *(undefined4 *)(*(long *)(param_1 + 0x2a0) + 3) = 2;
        *(undefined4 *)(param_1 + 0x2a8) = 2;
      }
    }
    else {
      piVar5 = (int *)(uVar4 - 1);
      iVar1 = *(int *)(param_1 + 0x2a8);
      if (iVar1 == *piVar5) {
        FUN_00711858(param_1 + 0x2a0,1,uVar7);
        iVar6 = *(int *)(*puVar2 + 3);
        piVar5 = (int *)(*puVar2 - 1);
      }
      else {
        iVar6 = *(int *)(uVar4 + 3);
        if (0 < iVar6 - iVar1) {
          *(int *)(param_1 + 0x2a8) = iVar1 + 1;
          puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
          goto LAB_00b393c4;
        }
      }
      piVar5[1] = iVar6 + 1;
      iVar1 = *(int *)(param_1 + 0x2a8);
      *(int *)(param_1 + 0x2a8) = iVar1 + 1;
      uVar7 = FUN_00b3fd38(uVar7);
      puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
      *puVar2 = uVar7;
    }
  }
LAB_00b393c4:
  uVar7 = *puVar2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x8000000;
  return uVar7;
}


// ===== 00b393e8  FUN_00b393e8 =====

bool FUN_00b393e8(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  puVar4 = (undefined8 *)*param_1;
  puVar5 = (undefined8 *)param_1[1];
  if (puVar4 == puVar5) {
    uVar6 = 0;
    puVar5 = puVar4;
  }
  else {
    uVar6 = 0;
    do {
      if (-1 < *(char *)((long)puVar4 + 0x17)) goto LAB_00b394bc;
      lVar2 = puVar4[1];
      if (lVar2 < 0x3a) {
        if (lVar2 == 0x1a) {
          plVar3 = (long *)*puVar4;
          if (((*plVar3 != 0x707067333a6e7275 || plVar3[1] != 0x6f2d6f656469763a) ||
              plVar3[2] != 0x697461746e656972) || (short)plVar3[3] != 0x6e6f) goto LAB_00b394bc;
          *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(puVar4 + 3);
          *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 8;
        }
        else if (lVar2 == 0x22) {
          plVar3 = (long *)*puVar4;
          if ((((*plVar3 != 0x667465693a6e7275 || plVar3[1] != 0x3a736d617261703a) ||
               plVar3[2] != 0x657264682d707472) || plVar3[3] != 0x7366666f743a7478) ||
              (short)plVar3[4] != 0x7465) goto LAB_00b394bc;
          *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(puVar4 + 3);
          *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
        }
        else {
          if ((lVar2 != 0x2b) ||
             (plVar3 = (long *)*puVar4,
             ((((*plVar3 != 0x667465693a6e7275 || plVar3[1] != 0x3a736d617261703a) ||
               plVar3[2] != 0x657264682d707472) || plVar3[3] != 0x2d637273733a7478) ||
             plVar3[4] != 0x656c2d6f69647561) ||
             *(long *)((long)plVar3 + 0x23) != 0x6c6576656c2d6f69)) goto LAB_00b394bc;
          *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(puVar4 + 3);
          *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x10;
        }
      }
      else if (lVar2 == 0x3a) {
        plVar3 = (long *)*puVar4;
        if (((((((*plVar3 != 0x772f2f3a70747468 || plVar3[1] != 0x74726265772e7777) ||
                plVar3[2] != 0x78652f67726f2e63) || plVar3[3] != 0x746e656d69726570) ||
              plVar3[4] != 0x64682d7074722f73) || plVar3[5] != 0x7362612f74786572) ||
            plVar3[6] != 0x69742d646e65732d) || (short)plVar3[7] != 0x656d) goto LAB_00b394bc;
        *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(puVar4 + 3);
        *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
      }
      else if (lVar2 == 0x49) {
        iVar1 = memcmp((void *)*puVar4,
                       "http://www.ietf.org/id/draft-holmer-rmcat-transport-wide-cc-extensions-01",
                       0x49);
        if (iVar1 != 0) goto LAB_00b394bc;
        *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(puVar4 + 3);
        *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 4;
      }
      else if ((lVar2 == 0x57) &&
              (iVar1 = memcmp((void *)*puVar4,
                              "https://aomediacodec.github.io/av1-rtp-spec/#dependency-descriptor-rtp-header-extension"
                              ,0x57), iVar1 == 0)) {
        *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(puVar4 + 3);
        *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x20;
      }
      else {
LAB_00b394bc:
        uVar6 = uVar6 + 1;
      }
      puVar4 = puVar4 + 4;
    } while (puVar4 != puVar5);
    puVar4 = (undefined8 *)param_1[1];
    puVar5 = (undefined8 *)*param_1;
  }
  return uVar6 < (ulong)((long)puVar4 - (long)puVar5 >> 5);
}


// ===== 00b39750  FUN_00b39750 =====

ulong FUN_00b39750(long param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  puVar2 = (ulong *)(param_1 + 0x2b8);
  if ((uVar7 & 1) == 0) {
    uVar4 = *puVar2;
  }
  else {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    uVar4 = *puVar2;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x2c0) = 1;
    uVar3 = FUN_00b3fdd8(uVar7);
    *(undefined8 *)(param_1 + 0x2b8) = uVar3;
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(param_1 + 0x2c0) == 0) {
        *(undefined4 *)(param_1 + 0x2c0) = 1;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_1 + 0x2b8,1,uVar7);
        uVar7 = FUN_00b3fdd8(uVar7);
        *puVar2 = uVar7;
        *(undefined4 *)(*(long *)(param_1 + 0x2b8) + 3) = 2;
        *(undefined4 *)(param_1 + 0x2c0) = 2;
      }
    }
    else {
      piVar5 = (int *)(uVar4 - 1);
      iVar1 = *(int *)(param_1 + 0x2c0);
      if (iVar1 == *piVar5) {
        FUN_00711858(param_1 + 0x2b8,1,uVar7);
        iVar6 = *(int *)(*puVar2 + 3);
        piVar5 = (int *)(*puVar2 - 1);
      }
      else {
        iVar6 = *(int *)(uVar4 + 3);
        if (0 < iVar6 - iVar1) {
          *(int *)(param_1 + 0x2c0) = iVar1 + 1;
          puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
          goto LAB_00b39868;
        }
      }
      piVar5[1] = iVar6 + 1;
      iVar1 = *(int *)(param_1 + 0x2c0);
      *(int *)(param_1 + 0x2c0) = iVar1 + 1;
      uVar7 = FUN_00b3fdd8(uVar7);
      puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
      *puVar2 = uVar7;
    }
  }
LAB_00b39868:
  uVar7 = *puVar2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10000000;
  return uVar7;
}


// ===== 00b3988c  FUN_00b3988c =====

ulong FUN_00b3988c(long param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  puVar2 = (ulong *)(param_1 + 0x108);
  if ((uVar7 & 1) == 0) {
    uVar4 = *puVar2;
  }
  else {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    uVar4 = *puVar2;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x110) = 1;
    uVar3 = FUN_00b3fe28(uVar7);
    *(undefined8 *)(param_1 + 0x108) = uVar3;
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(param_1 + 0x110) == 0) {
        *(undefined4 *)(param_1 + 0x110) = 1;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_1 + 0x108,1,uVar7);
        uVar7 = FUN_00b3fe28(uVar7);
        *puVar2 = uVar7;
        *(undefined4 *)(*(long *)(param_1 + 0x108) + 3) = 2;
        *(undefined4 *)(param_1 + 0x110) = 2;
      }
    }
    else {
      piVar5 = (int *)(uVar4 - 1);
      iVar1 = *(int *)(param_1 + 0x110);
      if (iVar1 == *piVar5) {
        FUN_00711858(param_1 + 0x108,1,uVar7);
        iVar6 = *(int *)(*puVar2 + 3);
        piVar5 = (int *)(*puVar2 - 1);
      }
      else {
        iVar6 = *(int *)(uVar4 + 3);
        if (0 < iVar6 - iVar1) {
          *(int *)(param_1 + 0x110) = iVar1 + 1;
          puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
          goto LAB_00b399a4;
        }
      }
      piVar5[1] = iVar6 + 1;
      iVar1 = *(int *)(param_1 + 0x110);
      *(int *)(param_1 + 0x110) = iVar1 + 1;
      uVar7 = FUN_00b3fe28(uVar7);
      puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
      *puVar2 = uVar7;
    }
  }
LAB_00b399a4:
  uVar7 = *puVar2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x400;
  return uVar7;
}


// ===== 00b399c8  FUN_00b399c8 =====

ulong FUN_00b399c8(long param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  puVar2 = (ulong *)(param_1 + 0xf0);
  if ((uVar7 & 1) == 0) {
    uVar4 = *puVar2;
  }
  else {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    uVar4 = *puVar2;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0xf8) = 1;
    uVar3 = FUN_00b3fe78(uVar7);
    *(undefined8 *)(param_1 + 0xf0) = uVar3;
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(param_1 + 0xf8) == 0) {
        *(undefined4 *)(param_1 + 0xf8) = 1;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_1 + 0xf0,1,uVar7);
        uVar7 = FUN_00b3fe78(uVar7);
        *puVar2 = uVar7;
        *(undefined4 *)(*(long *)(param_1 + 0xf0) + 3) = 2;
        *(undefined4 *)(param_1 + 0xf8) = 2;
      }
    }
    else {
      piVar5 = (int *)(uVar4 - 1);
      iVar1 = *(int *)(param_1 + 0xf8);
      if (iVar1 == *piVar5) {
        FUN_00711858(param_1 + 0xf0,1,uVar7);
        iVar6 = *(int *)(*puVar2 + 3);
        piVar5 = (int *)(*puVar2 - 1);
      }
      else {
        iVar6 = *(int *)(uVar4 + 3);
        if (0 < iVar6 - iVar1) {
          *(int *)(param_1 + 0xf8) = iVar1 + 1;
          puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
          goto LAB_00b39ae0;
        }
      }
      piVar5[1] = iVar6 + 1;
      iVar1 = *(int *)(param_1 + 0xf8);
      *(int *)(param_1 + 0xf8) = iVar1 + 1;
      uVar7 = FUN_00b3fe78(uVar7);
      puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
      *puVar2 = uVar7;
    }
  }
LAB_00b39ae0:
  uVar7 = *puVar2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x200;
  return uVar7;
}


// ===== 00b39b04  FUN_00b39b04 =====

ulong FUN_00b39b04(long param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  puVar2 = (ulong *)(param_1 + 0x288);
  if ((uVar7 & 1) == 0) {
    uVar4 = *puVar2;
  }
  else {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    uVar4 = *puVar2;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x290) = 1;
    uVar3 = FUN_00b3fec8(uVar7);
    *(undefined8 *)(param_1 + 0x288) = uVar3;
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(param_1 + 0x290) == 0) {
        *(undefined4 *)(param_1 + 0x290) = 1;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_1 + 0x288,1,uVar7);
        uVar7 = FUN_00b3fec8(uVar7);
        *puVar2 = uVar7;
        *(undefined4 *)(*(long *)(param_1 + 0x288) + 3) = 2;
        *(undefined4 *)(param_1 + 0x290) = 2;
      }
    }
    else {
      piVar5 = (int *)(uVar4 - 1);
      iVar1 = *(int *)(param_1 + 0x290);
      if (iVar1 == *piVar5) {
        FUN_00711858(param_1 + 0x288,1,uVar7);
        iVar6 = *(int *)(*puVar2 + 3);
        piVar5 = (int *)(*puVar2 - 1);
      }
      else {
        iVar6 = *(int *)(uVar4 + 3);
        if (0 < iVar6 - iVar1) {
          *(int *)(param_1 + 0x290) = iVar1 + 1;
          puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
          goto LAB_00b39c1c;
        }
      }
      piVar5[1] = iVar6 + 1;
      iVar1 = *(int *)(param_1 + 0x290);
      *(int *)(param_1 + 0x290) = iVar1 + 1;
      uVar7 = FUN_00b3fec8(uVar7);
      puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
      *puVar2 = uVar7;
    }
  }
LAB_00b39c1c:
  uVar7 = *puVar2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x4000000;
  return uVar7;
}


// ===== 00b39c40  FUN_00b39c40 =====

ulong FUN_00b39c40(long param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  puVar2 = (ulong *)(param_1 + 0x1c8);
  if ((uVar7 & 1) == 0) {
    uVar4 = *puVar2;
  }
  else {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    uVar4 = *puVar2;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x1d0) = 1;
    uVar3 = FUN_00b3ff18(uVar7);
    *(undefined8 *)(param_1 + 0x1c8) = uVar3;
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(param_1 + 0x1d0) == 0) {
        *(undefined4 *)(param_1 + 0x1d0) = 1;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_1 + 0x1c8,1,uVar7);
        uVar7 = FUN_00b3ff18(uVar7);
        *puVar2 = uVar7;
        *(undefined4 *)(*(long *)(param_1 + 0x1c8) + 3) = 2;
        *(undefined4 *)(param_1 + 0x1d0) = 2;
      }
    }
    else {
      piVar5 = (int *)(uVar4 - 1);
      iVar1 = *(int *)(param_1 + 0x1d0);
      if (iVar1 == *piVar5) {
        FUN_00711858(param_1 + 0x1c8,1,uVar7);
        iVar6 = *(int *)(*puVar2 + 3);
        piVar5 = (int *)(*puVar2 - 1);
      }
      else {
        iVar6 = *(int *)(uVar4 + 3);
        if (0 < iVar6 - iVar1) {
          *(int *)(param_1 + 0x1d0) = iVar1 + 1;
          puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
          goto LAB_00b39d58;
        }
      }
      piVar5[1] = iVar6 + 1;
      iVar1 = *(int *)(param_1 + 0x1d0);
      *(int *)(param_1 + 0x1d0) = iVar1 + 1;
      uVar7 = FUN_00b3ff18(uVar7);
      puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
      *puVar2 = uVar7;
    }
  }
LAB_00b39d58:
  uVar7 = *puVar2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x40000;
  return uVar7;
}


// ===== 00b39d7c  FUN_00b39d7c =====

ulong FUN_00b39d7c(long param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  puVar2 = (ulong *)(param_1 + 0x1e0);
  if ((uVar7 & 1) == 0) {
    uVar4 = *puVar2;
  }
  else {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    uVar4 = *puVar2;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x1e8) = 1;
    uVar3 = FUN_00b3ff68(uVar7);
    *(undefined8 *)(param_1 + 0x1e0) = uVar3;
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(param_1 + 0x1e8) == 0) {
        *(undefined4 *)(param_1 + 0x1e8) = 1;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_1 + 0x1e0,1,uVar7);
        uVar7 = FUN_00b3ff68(uVar7);
        *puVar2 = uVar7;
        *(undefined4 *)(*(long *)(param_1 + 0x1e0) + 3) = 2;
        *(undefined4 *)(param_1 + 0x1e8) = 2;
      }
    }
    else {
      piVar5 = (int *)(uVar4 - 1);
      iVar1 = *(int *)(param_1 + 0x1e8);
      if (iVar1 == *piVar5) {
        FUN_00711858(param_1 + 0x1e0,1,uVar7);
        iVar6 = *(int *)(*puVar2 + 3);
        piVar5 = (int *)(*puVar2 - 1);
      }
      else {
        iVar6 = *(int *)(uVar4 + 3);
        if (0 < iVar6 - iVar1) {
          *(int *)(param_1 + 0x1e8) = iVar1 + 1;
          puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
          goto LAB_00b39e94;
        }
      }
      piVar5[1] = iVar6 + 1;
      iVar1 = *(int *)(param_1 + 0x1e8);
      *(int *)(param_1 + 0x1e8) = iVar1 + 1;
      uVar7 = FUN_00b3ff68(uVar7);
      puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
      *puVar2 = uVar7;
    }
  }
LAB_00b39e94:
  uVar7 = *puVar2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x80000;
  return uVar7;
}


// ===== 00b39eb8  FUN_00b39eb8 =====

ulong FUN_00b39eb8(long param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  puVar2 = (ulong *)(param_1 + 0x138);
  if ((uVar7 & 1) == 0) {
    uVar4 = *puVar2;
  }
  else {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    uVar4 = *puVar2;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x140) = 1;
    uVar3 = FUN_00b3ffb8(uVar7);
    *(undefined8 *)(param_1 + 0x138) = uVar3;
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(param_1 + 0x140) == 0) {
        *(undefined4 *)(param_1 + 0x140) = 1;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_1 + 0x138,1,uVar7);
        uVar7 = FUN_00b3ffb8(uVar7);
        *puVar2 = uVar7;
        *(undefined4 *)(*(long *)(param_1 + 0x138) + 3) = 2;
        *(undefined4 *)(param_1 + 0x140) = 2;
      }
    }
    else {
      piVar5 = (int *)(uVar4 - 1);
      iVar1 = *(int *)(param_1 + 0x140);
      if (iVar1 == *piVar5) {
        FUN_00711858(param_1 + 0x138,1,uVar7);
        iVar6 = *(int *)(*puVar2 + 3);
        piVar5 = (int *)(*puVar2 - 1);
      }
      else {
        iVar6 = *(int *)(uVar4 + 3);
        if (0 < iVar6 - iVar1) {
          *(int *)(param_1 + 0x140) = iVar1 + 1;
          puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
          goto LAB_00b39fd0;
        }
      }
      piVar5[1] = iVar6 + 1;
      iVar1 = *(int *)(param_1 + 0x140);
      *(int *)(param_1 + 0x140) = iVar1 + 1;
      uVar7 = FUN_00b3ffb8(uVar7);
      puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
      *puVar2 = uVar7;
    }
  }
LAB_00b39fd0:
  uVar7 = *puVar2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x1000;
  return uVar7;
}


// ===== 00b39ff4  FUN_00b39ff4 =====

ulong FUN_00b39ff4(long param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  puVar2 = (ulong *)(param_1 + 0x168);
  if ((uVar7 & 1) == 0) {
    uVar4 = *puVar2;
  }
  else {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    uVar4 = *puVar2;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x170) = 1;
    uVar3 = FUN_00b40008(uVar7);
    *(undefined8 *)(param_1 + 0x168) = uVar3;
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(param_1 + 0x170) == 0) {
        *(undefined4 *)(param_1 + 0x170) = 1;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_1 + 0x168,1,uVar7);
        uVar7 = FUN_00b40008(uVar7);
        *puVar2 = uVar7;
        *(undefined4 *)(*(long *)(param_1 + 0x168) + 3) = 2;
        *(undefined4 *)(param_1 + 0x170) = 2;
      }
    }
    else {
      piVar5 = (int *)(uVar4 - 1);
      iVar1 = *(int *)(param_1 + 0x170);
      if (iVar1 == *piVar5) {
        FUN_00711858(param_1 + 0x168,1,uVar7);
        iVar6 = *(int *)(*puVar2 + 3);
        piVar5 = (int *)(*puVar2 - 1);
      }
      else {
        iVar6 = *(int *)(uVar4 + 3);
        if (0 < iVar6 - iVar1) {
          *(int *)(param_1 + 0x170) = iVar1 + 1;
          puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
          goto LAB_00b3a10c;
        }
      }
      piVar5[1] = iVar6 + 1;
      iVar1 = *(int *)(param_1 + 0x170);
      *(int *)(param_1 + 0x170) = iVar1 + 1;
      uVar7 = FUN_00b40008(uVar7);
      puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
      *puVar2 = uVar7;
    }
  }
LAB_00b3a10c:
  uVar7 = *puVar2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x4000;
  return uVar7;
}


// ===== 00b3a130  FUN_00b3a130 =====

ulong FUN_00b3a130(long param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  puVar2 = (ulong *)(param_1 + 0x150);
  if ((uVar7 & 1) == 0) {
    uVar4 = *puVar2;
  }
  else {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    uVar4 = *puVar2;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x158) = 1;
    uVar3 = FUN_00b40058(uVar7);
    *(undefined8 *)(param_1 + 0x150) = uVar3;
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(param_1 + 0x158) == 0) {
        *(undefined4 *)(param_1 + 0x158) = 1;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_1 + 0x150,1,uVar7);
        uVar7 = FUN_00b40058(uVar7);
        *puVar2 = uVar7;
        *(undefined4 *)(*(long *)(param_1 + 0x150) + 3) = 2;
        *(undefined4 *)(param_1 + 0x158) = 2;
      }
    }
    else {
      piVar5 = (int *)(uVar4 - 1);
      iVar1 = *(int *)(param_1 + 0x158);
      if (iVar1 == *piVar5) {
        FUN_00711858(param_1 + 0x150,1,uVar7);
        iVar6 = *(int *)(*puVar2 + 3);
        piVar5 = (int *)(*puVar2 - 1);
      }
      else {
        iVar6 = *(int *)(uVar4 + 3);
        if (0 < iVar6 - iVar1) {
          *(int *)(param_1 + 0x158) = iVar1 + 1;
          puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
          goto LAB_00b3a248;
        }
      }
      piVar5[1] = iVar6 + 1;
      iVar1 = *(int *)(param_1 + 0x158);
      *(int *)(param_1 + 0x158) = iVar1 + 1;
      uVar7 = FUN_00b40058(uVar7);
      puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
      *puVar2 = uVar7;
    }
  }
LAB_00b3a248:
  uVar7 = *puVar2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x2000;
  return uVar7;
}


// ===== 00b3a26c  FUN_00b3a26c =====

ulong FUN_00b3a26c(long param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  puVar2 = (ulong *)(param_1 + 0x240);
  if ((uVar7 & 1) == 0) {
    uVar4 = *puVar2;
  }
  else {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    uVar4 = *puVar2;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x248) = 1;
    uVar3 = FUN_00b400a8(uVar7);
    *(undefined8 *)(param_1 + 0x240) = uVar3;
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(param_1 + 0x248) == 0) {
        *(undefined4 *)(param_1 + 0x248) = 1;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_1 + 0x240,1,uVar7);
        uVar7 = FUN_00b400a8(uVar7);
        *puVar2 = uVar7;
        *(undefined4 *)(*(long *)(param_1 + 0x240) + 3) = 2;
        *(undefined4 *)(param_1 + 0x248) = 2;
      }
    }
    else {
      piVar5 = (int *)(uVar4 - 1);
      iVar1 = *(int *)(param_1 + 0x248);
      if (iVar1 == *piVar5) {
        FUN_00711858(param_1 + 0x240,1,uVar7);
        iVar6 = *(int *)(*puVar2 + 3);
        piVar5 = (int *)(*puVar2 - 1);
      }
      else {
        iVar6 = *(int *)(uVar4 + 3);
        if (0 < iVar6 - iVar1) {
          *(int *)(param_1 + 0x248) = iVar1 + 1;
          puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
          goto LAB_00b3a384;
        }
      }
      piVar5[1] = iVar6 + 1;
      iVar1 = *(int *)(param_1 + 0x248);
      *(int *)(param_1 + 0x248) = iVar1 + 1;
      uVar7 = FUN_00b400a8(uVar7);
      puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
      *puVar2 = uVar7;
    }
  }
LAB_00b3a384:
  uVar7 = *puVar2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x800000;
  return uVar7;
}


// ===== 00b3a3a8  FUN_00b3a3a8 =====

ulong FUN_00b3a3a8(long param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  puVar2 = (ulong *)(param_1 + 600);
  if ((uVar7 & 1) == 0) {
    uVar4 = *puVar2;
  }
  else {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    uVar4 = *puVar2;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x260) = 1;
    uVar3 = FUN_00b400f8(uVar7);
    *(undefined8 *)(param_1 + 600) = uVar3;
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(param_1 + 0x260) == 0) {
        *(undefined4 *)(param_1 + 0x260) = 1;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_1 + 600,1,uVar7);
        uVar7 = FUN_00b400f8(uVar7);
        *puVar2 = uVar7;
        *(undefined4 *)(*(long *)(param_1 + 600) + 3) = 2;
        *(undefined4 *)(param_1 + 0x260) = 2;
      }
    }
    else {
      piVar5 = (int *)(uVar4 - 1);
      iVar1 = *(int *)(param_1 + 0x260);
      if (iVar1 == *piVar5) {
        FUN_00711858(param_1 + 600,1,uVar7);
        iVar6 = *(int *)(*puVar2 + 3);
        piVar5 = (int *)(*puVar2 - 1);
      }
      else {
        iVar6 = *(int *)(uVar4 + 3);
        if (0 < iVar6 - iVar1) {
          *(int *)(param_1 + 0x260) = iVar1 + 1;
          puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
          goto LAB_00b3a4c0;
        }
      }
      piVar5[1] = iVar6 + 1;
      iVar1 = *(int *)(param_1 + 0x260);
      *(int *)(param_1 + 0x260) = iVar1 + 1;
      uVar7 = FUN_00b400f8(uVar7);
      puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
      *puVar2 = uVar7;
    }
  }
LAB_00b3a4c0:
  uVar7 = *puVar2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x1000000;
  return uVar7;
}


// ===== 00b3a4e4  FUN_00b3a4e4 =====

ulong FUN_00b3a4e4(long param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  puVar2 = (ulong *)(param_1 + 0x60);
  if ((uVar7 & 1) == 0) {
    uVar4 = *puVar2;
  }
  else {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    uVar4 = *puVar2;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x68) = 1;
    uVar3 = FUN_00b40148(uVar7);
    *(undefined8 *)(param_1 + 0x60) = uVar3;
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(param_1 + 0x68) == 0) {
        *(undefined4 *)(param_1 + 0x68) = 1;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_1 + 0x60,1,uVar7);
        uVar7 = FUN_00b40148(uVar7);
        *puVar2 = uVar7;
        *(undefined4 *)(*(long *)(param_1 + 0x60) + 3) = 2;
        *(undefined4 *)(param_1 + 0x68) = 2;
      }
    }
    else {
      piVar5 = (int *)(uVar4 - 1);
      iVar1 = *(int *)(param_1 + 0x68);
      if (iVar1 == *piVar5) {
        FUN_00711858(param_1 + 0x60,1,uVar7);
        iVar6 = *(int *)(*puVar2 + 3);
        piVar5 = (int *)(*puVar2 - 1);
      }
      else {
        iVar6 = *(int *)(uVar4 + 3);
        if (0 < iVar6 - iVar1) {
          *(int *)(param_1 + 0x68) = iVar1 + 1;
          puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
          goto LAB_00b3a5fc;
        }
      }
      piVar5[1] = iVar6 + 1;
      iVar1 = *(int *)(param_1 + 0x68);
      *(int *)(param_1 + 0x68) = iVar1 + 1;
      uVar7 = FUN_00b40148(uVar7);
      puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
      *puVar2 = uVar7;
    }
  }
LAB_00b3a5fc:
  uVar7 = *puVar2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
  return uVar7;
}


// ===== 00b3a620  FUN_00b3a620 =====

ulong FUN_00b3a620(long param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  puVar2 = (ulong *)(param_1 + 0x78);
  if ((uVar7 & 1) == 0) {
    uVar4 = *puVar2;
  }
  else {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    uVar4 = *puVar2;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x80) = 1;
    uVar3 = FUN_00b40198(uVar7);
    *(undefined8 *)(param_1 + 0x78) = uVar3;
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(param_1 + 0x80) == 0) {
        *(undefined4 *)(param_1 + 0x80) = 1;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_1 + 0x78,1,uVar7);
        uVar7 = FUN_00b40198(uVar7);
        *puVar2 = uVar7;
        *(undefined4 *)(*(long *)(param_1 + 0x78) + 3) = 2;
        *(undefined4 *)(param_1 + 0x80) = 2;
      }
    }
    else {
      piVar5 = (int *)(uVar4 - 1);
      iVar1 = *(int *)(param_1 + 0x80);
      if (iVar1 == *piVar5) {
        FUN_00711858(param_1 + 0x78,1,uVar7);
        iVar6 = *(int *)(*puVar2 + 3);
        piVar5 = (int *)(*puVar2 - 1);
      }
      else {
        iVar6 = *(int *)(uVar4 + 3);
        if (0 < iVar6 - iVar1) {
          *(int *)(param_1 + 0x80) = iVar1 + 1;
          puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
          goto LAB_00b3a738;
        }
      }
      piVar5[1] = iVar6 + 1;
      iVar1 = *(int *)(param_1 + 0x80);
      *(int *)(param_1 + 0x80) = iVar1 + 1;
      uVar7 = FUN_00b40198(uVar7);
      puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
      *puVar2 = uVar7;
    }
  }
LAB_00b3a738:
  uVar7 = *puVar2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
  return uVar7;
}


// ===== 00b3a75c  FUN_00b3a75c =====

/* WARNING: Removing unreachable block (ram,0x00b3bcb0) */
/* WARNING: Removing unreachable block (ram,0x00b3ba18) */
/* WARNING: Removing unreachable block (ram,0x00b3b76c) */
/* WARNING: Removing unreachable block (ram,0x00b3b4f4) */
/* WARNING: Removing unreachable block (ram,0x00b3b36c) */
/* WARNING: Removing unreachable block (ram,0x00b3b1c4) */
/* WARNING: Removing unreachable block (ram,0x00b3affc) */
/* WARNING: Removing unreachable block (ram,0x00b3ae34) */
/* WARNING: Removing unreachable block (ram,0x00b3af18) */
/* WARNING: Removing unreachable block (ram,0x00b3b0e0) */
/* WARNING: Removing unreachable block (ram,0x00b3b2a8) */
/* WARNING: Removing unreachable block (ram,0x00b3b430) */
/* WARNING: Removing unreachable block (ram,0x00b3b638) */
/* WARNING: Removing unreachable block (ram,0x00b3b8a8) */
/* WARNING: Removing unreachable block (ram,0x00b3bb64) */
/* WARNING: Removing unreachable block (ram,0x00b3bda0) */

void FUN_00b3a75c(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  ulong *puVar2;
  undefined1 uVar3;
  byte bVar4;
  ushort uVar5;
  bool bVar6;
  long lVar7;
  bool bVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined4 uVar16;
  uint uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined1 *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulong uVar27;
  undefined8 uVar28;
  ulong uVar29;
  undefined1 *puVar30;
  ulong uVar31;
  undefined8 uVar32;
  long lVar33;
  undefined1 *puVar34;
  undefined8 uVar35;
  long lVar36;
  undefined1 auVar37 [16];
  undefined8 local_e8;
  undefined8 *puStack_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined8 *local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  
  if ((long *)*param_2 != (long *)param_2[1]) {
    lVar36 = *(long *)*param_2;
    lVar18 = *(long *)(lVar36 + 8);
    uVar17 = *(uint *)(param_3 + 0x10);
    *(uint *)(param_3 + 0x10) = uVar17 | 0x100;
    *(long *)(param_3 + 0x60) = lVar18 / 1000;
    puVar34 = (undefined1 *)(lVar36 + 0x10);
    uVar3 = *puVar34;
    *(uint *)(param_3 + 0x10) = uVar17 | 0x20100;
    *(undefined1 *)(param_3 + 0x88) = uVar3;
    bVar4 = *(byte *)(lVar36 + 0x11);
    *(uint *)(param_3 + 0x10) = uVar17 | 0x20300;
    *(uint *)(param_3 + 0x68) = (uint)bVar4;
    uVar5 = *(ushort *)(lVar36 + 0x14);
    *(uint *)(param_3 + 0x10) = uVar17 | 0x20700;
    *(uint *)(param_3 + 0x6c) = (uint)uVar5;
    uVar16 = *(undefined4 *)(lVar36 + 0x18);
    *(uint *)(param_3 + 0x10) = uVar17 | 0x20f00;
    *(undefined4 *)(param_3 + 0x70) = uVar16;
    uVar16 = *(undefined4 *)(lVar36 + 0x1c);
    *(uint *)(param_3 + 0x10) = uVar17 | 0x21f00;
    *(undefined4 *)(param_3 + 0x74) = uVar16;
    uVar25 = *(undefined8 *)(lVar36 + 0x28);
    *(uint *)(param_3 + 0x10) = uVar17 | 0x23f00;
    *(int *)(param_3 + 0x78) = (int)uVar25;
    uVar25 = *(undefined8 *)(lVar36 + 0x20);
    *(uint *)(param_3 + 0x10) = uVar17 | 0x27f00;
    *(int *)(param_3 + 0x7c) = (int)uVar25;
    bVar4 = *(byte *)(lVar36 + 0x12);
    *(uint *)(param_3 + 0x10) = uVar17 | 0x2ff00;
    local_d0 = (undefined1 *)CONCAT62(local_d0._2_6_,0xaaaa);
    *(uint *)(param_3 + 0x80) = (uint)bVar4;
    auVar37 = FUN_007dba34(puVar34,8);
    uVar23 = 0xaaaaaaaaaaaaaa00;
    uVar25 = 0xaaaaaaaaaaaaaa00;
    if (auVar37._8_8_ != 0) {
      uVar10 = FUN_007d9000(auVar37._0_8_,auVar37._8_8_,&local_d0);
      uVar23 = 0xaaaaaaaaaaaaaa00;
      uVar25 = 0xaaaaaaaaaaaaaa00;
      if ((uVar10 & 1) != 0) {
        uVar23 = (ulong)local_d0 & 0xffff;
        *(uint *)(param_3 + 0x8c) = (uint)(ushort)local_d0;
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x80000;
        uVar25 = 0xaaaaaaaaaaaaaa01;
      }
    }
    local_d0 = (undefined1 *)CONCAT44(local_d0._4_4_,0xaaaaaaaa);
    auVar37 = FUN_007dba34(puVar34,1);
    uVar10 = 0xaaaaaaaaaaaaaa00;
    uVar19 = 0xaaaaaaaaaaaaaa00;
    if (auVar37._8_8_ != 0) {
      uVar11 = FUN_007d8fa0(auVar37._0_8_,auVar37._8_8_,&local_d0);
      uVar10 = 0xaaaaaaaaaaaaaa00;
      uVar19 = 0xaaaaaaaaaaaaaa00;
      if ((uVar11 & 1) != 0) {
        uVar10 = (ulong)local_d0 & 0xffffffff;
        *(int *)(param_3 + 0x90) = (int)local_d0;
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x100000;
        uVar19 = 0xaaaaaaaaaaaaaa01;
      }
    }
    local_d0 = (undefined1 *)CONCAT44(local_d0._4_4_,0xaaaaaaaa);
    auVar37 = FUN_007dba34(puVar34,5);
    uVar11 = 0xaaaaaaaaaaaaaa00;
    uVar20 = 0xaaaaaaaaaaaaaa00;
    if (auVar37._8_8_ != 0) {
      uVar12 = FUN_007d8d58(auVar37._0_8_,auVar37._8_8_,&local_d0);
      uVar11 = 0xaaaaaaaaaaaaaa00;
      uVar20 = 0xaaaaaaaaaaaaaa00;
      if ((uVar12 & 1) != 0) {
        uVar11 = (ulong)local_d0 & 0xffffffff;
        *(int *)(param_3 + 0x94) = (int)local_d0;
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x200000;
        uVar20 = 0xaaaaaaaaaaaaaa01;
      }
    }
    local_d0 = (undefined1 *)CONCAT44(local_d0._4_4_,0xaaaaaaaa);
    auVar37 = FUN_007dba34(puVar34,7);
    uVar26 = 0xaaaaaaaaaaaaaa00;
    uVar21 = 0xaaaaaaaaaaaaaa00;
    if (auVar37._8_8_ != 0) {
      uVar12 = FUN_007d90e0(auVar37._0_8_,auVar37._8_8_,&local_d0);
      uVar26 = 0xaaaaaaaaaaaaaa00;
      uVar21 = 0xaaaaaaaaaaaaaa00;
      if ((uVar12 & 1) != 0) {
        if ((int)local_d0 == 0x5a) {
          uVar16 = 1;
          uVar26 = 1;
        }
        else if ((int)local_d0 == 0x10e) {
          uVar26 = 3;
          uVar16 = 3;
        }
        else if ((int)local_d0 == 0xb4) {
          uVar26 = 2;
          uVar16 = 2;
        }
        else {
          uVar16 = 0;
          uVar26 = 0;
        }
        *(undefined4 *)(param_3 + 0x98) = uVar16;
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x400000;
        uVar21 = 0xaaaaaaaaaaaaaa01;
      }
    }
    local_d0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00659674(&local_d0);
    auVar37 = FUN_007dba34(puVar34,2);
    uVar12 = 0xaaaaaaaaaaaaaa00;
    uVar35 = 0xaaaaaaaaaaaaaa00;
    lVar18 = -0x5555555555555600;
    if ((auVar37._8_8_ != 0) &&
       (uVar13 = FUN_007d8ec0(auVar37._0_8_,auVar37._8_8_,&local_d0), (uVar13 & 1) != 0)) {
      lVar18 = (long)local_d0._4_4_;
      uVar12 = (ulong)local_d0 & 0xff;
      uVar35 = 0xaaaaaaaaaaaaaa01;
      *(int *)(param_3 + 0x9c) = local_d0._4_4_;
      *(undefined1 *)(param_3 + 0x89) = (undefined1)local_d0;
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x840000;
    }
    if (*(char *)(param_1 + 9) == '\x01') {
      lVar15 = *param_2;
      puStack_78 = (undefined8 *)0x0;
      local_70 = (undefined8 *)0x0;
      local_80 = (undefined8 *)0x0;
      lVar33 = param_2[1] - lVar15;
      if (lVar33 != 0) {
        if ((ulong)(lVar33 >> 3) >> 0x3c != 0) {
          FUN_0060aa38();
          goto LAB_00b3bfdc;
        }
        uVar13 = lVar33 * 2;
        local_80 = (undefined8 *)operator_new(uVar13);
        local_70 = local_80 + (lVar33 >> 3) * 2;
        puVar22 = (undefined8 *)((long)local_80 + uVar13);
        puVar14 = local_80;
        do {
          puVar30 = puStack_c8;
          puStack_78 = local_80;
          if (puVar14 == (undefined8 *)0x0) goto LAB_00b3bec4;
          uVar13 = uVar13 - 0x10;
          *puVar14 = 0;
          puVar14[1] = 0;
          puVar14 = puVar14 + 2;
        } while (uVar13 != 0);
        lVar33 = 0;
        uVar13 = 0;
        puStack_78 = puVar22;
        bVar8 = false;
        do {
          bVar6 = bVar8;
          auVar37 = FUN_007dba34(*(long *)(lVar15 + uVar13 * 8) + 0x10,0x12);
          if (((ulong)((long)puStack_78 - (long)local_80 >> 4) <= uVar13) ||
             (*(undefined1 (*) [16])((long)local_80 + lVar33) = auVar37,
             (ulong)((long)puStack_78 - (long)local_80 >> 4) <= uVar13)) goto LAB_00b3beb0;
          lVar15 = *param_2;
          lVar7 = lVar33 + 8;
          uVar13 = uVar13 + 1;
          lVar33 = lVar33 + 0x10;
          bVar9 = *(long *)((long)local_80 + lVar7) != 0;
          bVar8 = (bool)(bVar6 | bVar9);
        } while (uVar13 < (ulong)(param_2[1] - lVar15 >> 3));
        if (bVar6 || bVar9) {
          puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
          local_c0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
          local_a0 = &DAT_aaaaaaaaaaaaaaaa;
          local_88 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
          local_d0 = &DAT_aaaaaaaaaaaaaaaa;
          FUN_00b543c4(&local_d0,&local_80);
          if ((char)local_88 == '\x01') {
            lVar15 = *(long *)(param_3 + 0x58);
            *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x80;
            if (lVar15 == 0) {
              uVar13 = *(ulong *)(param_3 + 8);
              if ((uVar13 & 1) != 0) {
                uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
              }
              lVar15 = FUN_00b40a18(uVar13);
              *(long *)(param_3 + 0x58) = lVar15;
            }
            FUN_00b45848(lVar15,&local_d0);
            if ((char)local_88 == '\x01') {
              FUN_00b44f8c(&local_d0);
            }
          }
        }
        if (local_80 != (undefined8 *)0x0) {
          uVar27 = (ulong)((long)puStack_78 + (-0x10 - ((long)puStack_78 << 0x3c))) >> 4;
          uVar13 = (ulong)(((long)local_80 - (long)puStack_78 << 0x3c) -
                          ((long)local_80 - (long)puStack_78)) >> 4;
          if (uVar27 <= uVar13) {
            uVar13 = uVar27;
          }
          puVar22 = puStack_78;
          if ((1 < uVar13) && ((((int)local_80 - (int)puStack_78 | -(int)puStack_78) & 0xfU) == 0))
          {
            uVar13 = uVar13 & 0xffffffffffffffe;
            puVar22 = puStack_78 + uVar13 * -2;
            do {
              uVar13 = uVar13 - 2;
            } while (uVar13 != 0);
          }
          do {
            if (puVar22 == local_80) {
              puStack_78 = local_80;
              operator_delete(local_80);
              goto LAB_00b3ac58;
            }
            puVar22 = puVar22 + -2;
          } while (puVar22 != (undefined8 *)0x0);
          goto LAB_00b3be88;
        }
      }
    }
LAB_00b3ac58:
    uVar13 = 0xaaaaaaaaaaaaaa00;
    uVar28 = 0xaaaaaaaaaaaaaa00;
    if ((*(uint *)(lVar36 + 0x80) >> 0x10 & 1) != 0) {
      uVar13 = (ulong)*(uint *)(lVar36 + 0x80) & 0xffff;
      uVar28 = 0xaaaaaaaaaaaaaa01;
      *(int *)(param_3 + 0xa0) = (int)uVar13;
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x1000000;
    }
    if (param_2[1] - *param_2 != 8) {
      puStack_c8 = (undefined1 *)0x0;
      local_c0 = (undefined1 *)0x0;
      local_d0 = (undefined1 *)0x0;
      *(int *)(param_3 + 0x84) = (int)((ulong)(param_2[1] - *param_2) >> 3) + -1;
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x10000;
      lVar15 = *param_2;
      lVar33 = param_2[1];
      uVar27 = (lVar33 - lVar15 >> 3) - 1;
      if (uVar27 != 0) {
        if (uVar27 >> 0x3c != 0) {
LAB_00b3bfdc:
                    /* WARNING: Subroutine does not return */
          FUN_00b3fc80();
        }
        local_d0 = (undefined1 *)operator_new(uVar27 * 0x10);
        uVar29 = (lVar33 - lVar15) * 2 - 0x20U >> 4;
        puStack_c8 = local_d0 + uVar27 * 0x10;
        uVar27 = (ulong)-(long)local_d0 >> 4;
        if (uVar29 <= (ulong)-(long)local_d0 >> 4) {
          uVar27 = uVar29;
        }
        puVar24 = local_d0;
        if (1 < uVar27) {
          uVar31 = (ulong)-(long)local_d0 >> 4;
          if (uVar29 <= uVar31) {
            uVar31 = uVar29;
          }
          if (((-(long)local_d0 & 0xfU) == 0) && (local_d0 <= local_d0 + uVar31 * 0x10)) {
            uVar27 = uVar27 & 0xffffffffffffffe;
            puVar30 = local_d0 + 0x10;
            puVar24 = local_d0 + uVar27 * 0x10;
            do {
              puVar30[-0x10] = 0;
              uVar27 = uVar27 - 2;
              *puVar30 = 0;
              puVar30[-8] = 0;
              puVar30[8] = 0;
              puVar30 = puVar30 + 0x20;
            } while (uVar27 != 0);
          }
        }
        do {
          puVar30 = local_d0;
          local_c0 = puStack_c8;
          if (puVar24 == (undefined1 *)0x0) goto LAB_00b3bec4;
          *puVar24 = 0;
          puVar24[8] = 0;
          puVar24 = puVar24 + 0x10;
        } while (puVar24 != puStack_c8);
        lVar15 = 0;
        uVar27 = 1;
        local_80 = (undefined8 *)0x0;
        puStack_78 = (undefined8 *)0x0;
        local_70 = (undefined8 *)0x0;
        do {
          if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar27) goto LAB_00b3be9c;
          lVar33 = *(long *)(*(long *)(*param_2 + uVar27 * 8) + 8);
          plVar1 = (long *)(local_d0 + lVar15);
          lVar15 = lVar15 + 0x10;
          *(undefined1 *)(plVar1 + 1) = 1;
          *plVar1 = lVar33 / 1000;
          bVar8 = uVar27 < (ulong)((long)puStack_c8 - (long)local_d0 >> 4);
          uVar27 = uVar27 + 1;
        } while (bVar8);
      }
      local_70 = (undefined8 *)0x0;
      puStack_78 = (undefined8 *)0x0;
      local_80 = (undefined8 *)0x0;
      puStack_c8 = local_c0;
      FUN_00b53b7c(&local_e8,*(long *)(lVar36 + 8) / 1000,1,&local_d0);
      local_70 = local_d8;
      puStack_78 = puStack_e0;
      local_80 = local_e8;
      puVar22 = puStack_e0;
      if (((ulong)local_d8 >> 0x38 & 0x80) == 0) {
        puVar22 = (undefined8 *)((ulong)local_d8 >> 0x38);
      }
      if (puVar22 != (undefined8 *)0x0) {
        uVar27 = *(ulong *)(param_3 + 8);
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x2000000;
        if ((uVar27 & 1) != 0) {
          uVar27 = *(ulong *)(uVar27 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(param_3 + 0xa8,&local_80,uVar27);
      }
      if (puStack_c8 != local_d0) {
        lVar15 = 0;
        uVar27 = 1;
        do {
          if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar27) goto LAB_00b3be9c;
          puVar2 = (ulong *)(local_d0 + lVar15);
          uVar29 = (ulong)*(byte *)(*(long *)(*param_2 + uVar27 * 8) + 0x10);
          if ((char)puVar2[1] == '\x01') {
            *puVar2 = uVar29;
          }
          else {
            puVar30 = puStack_c8;
            if (puVar2 == (ulong *)0x0) goto LAB_00b3bec4;
            *puVar2 = uVar29;
            *(undefined1 *)(puVar2 + 1) = 1;
          }
          lVar15 = lVar15 + 0x10;
          bVar8 = uVar27 < (ulong)((long)puStack_c8 - (long)local_d0 >> 4);
          uVar27 = uVar27 + 1;
        } while (bVar8);
      }
      FUN_00b53b7c(&local_e8,*puVar34,1,&local_d0);
      local_70 = local_d8;
      puStack_78 = puStack_e0;
      local_80 = local_e8;
      puVar22 = puStack_e0;
      if (((ulong)local_d8 >> 0x38 & 0x80) == 0) {
        puVar22 = (undefined8 *)((ulong)local_d8 >> 0x38);
      }
      if (puVar22 != (undefined8 *)0x0) {
        uVar27 = *(ulong *)(param_3 + 8);
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x4000000;
        if ((uVar27 & 1) != 0) {
          uVar27 = *(ulong *)(uVar27 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(param_3 + 0xb0,&local_80,uVar27);
      }
      if (puStack_c8 != local_d0) {
        lVar15 = 0;
        uVar27 = 1;
        do {
          if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar27) goto LAB_00b3be9c;
          puVar2 = (ulong *)(local_d0 + lVar15);
          uVar29 = (ulong)*(byte *)(*(long *)(*param_2 + uVar27 * 8) + 0x11);
          if ((char)puVar2[1] == '\x01') {
            *puVar2 = uVar29;
          }
          else {
            puVar30 = puStack_c8;
            if (puVar2 == (ulong *)0x0) goto LAB_00b3bec4;
            *puVar2 = uVar29;
            *(undefined1 *)(puVar2 + 1) = 1;
          }
          lVar15 = lVar15 + 0x10;
          bVar8 = uVar27 < (ulong)((long)puStack_c8 - (long)local_d0 >> 4);
          uVar27 = uVar27 + 1;
        } while (bVar8);
      }
      FUN_00b53b7c(&local_e8,*(undefined1 *)(lVar36 + 0x11),1,&local_d0);
      local_70 = local_d8;
      puStack_78 = puStack_e0;
      local_80 = local_e8;
      puVar22 = puStack_e0;
      if (((ulong)local_d8 >> 0x38 & 0x80) == 0) {
        puVar22 = (undefined8 *)((ulong)local_d8 >> 0x38);
      }
      if (puVar22 != (undefined8 *)0x0) {
        uVar27 = *(ulong *)(param_3 + 8);
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 1;
        if ((uVar27 & 1) != 0) {
          uVar27 = *(ulong *)(uVar27 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(param_3 + 0x20,&local_80,uVar27);
      }
      if (puStack_c8 != local_d0) {
        lVar15 = 0;
        uVar27 = 1;
        do {
          if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar27) goto LAB_00b3be9c;
          puVar2 = (ulong *)(local_d0 + lVar15);
          uVar29 = (ulong)*(ushort *)(*(long *)(*param_2 + uVar27 * 8) + 0x14);
          if ((char)puVar2[1] == '\x01') {
            *puVar2 = uVar29;
          }
          else {
            puVar30 = puStack_c8;
            if (puVar2 == (ulong *)0x0) goto LAB_00b3bec4;
            *puVar2 = uVar29;
            *(undefined1 *)(puVar2 + 1) = 1;
          }
          lVar15 = lVar15 + 0x10;
          bVar8 = uVar27 < (ulong)((long)puStack_c8 - (long)local_d0 >> 4);
          uVar27 = uVar27 + 1;
        } while (bVar8);
      }
      FUN_00b53b7c(&local_e8,*(undefined2 *)(lVar36 + 0x14),1,&local_d0);
      local_70 = local_d8;
      puStack_78 = puStack_e0;
      local_80 = local_e8;
      puVar22 = puStack_e0;
      if (((ulong)local_d8 >> 0x38 & 0x80) == 0) {
        puVar22 = (undefined8 *)((ulong)local_d8 >> 0x38);
      }
      if (puVar22 != (undefined8 *)0x0) {
        uVar27 = *(ulong *)(param_3 + 8);
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 2;
        if ((uVar27 & 1) != 0) {
          uVar27 = *(ulong *)(uVar27 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(param_3 + 0x28,&local_80,uVar27);
      }
      if (puStack_c8 != local_d0) {
        lVar15 = 0;
        uVar27 = 1;
        do {
          if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar27) goto LAB_00b3be9c;
          puVar2 = (ulong *)(local_d0 + lVar15);
          uVar29 = (ulong)*(uint *)(*(long *)(*param_2 + uVar27 * 8) + 0x18);
          if ((char)puVar2[1] == '\x01') {
            *puVar2 = uVar29;
          }
          else {
            puVar30 = puStack_c8;
            if (puVar2 == (ulong *)0x0) goto LAB_00b3bec4;
            *puVar2 = uVar29;
            *(undefined1 *)(puVar2 + 1) = 1;
          }
          lVar15 = lVar15 + 0x10;
          bVar8 = uVar27 < (ulong)((long)puStack_c8 - (long)local_d0 >> 4);
          uVar27 = uVar27 + 1;
        } while (bVar8);
      }
      FUN_00b53b7c(&local_e8,*(undefined4 *)(lVar36 + 0x18),1,&local_d0);
      local_70 = local_d8;
      puStack_78 = puStack_e0;
      local_80 = local_e8;
      puVar22 = puStack_e0;
      if (((ulong)local_d8 >> 0x38 & 0x80) == 0) {
        puVar22 = (undefined8 *)((ulong)local_d8 >> 0x38);
      }
      if (puVar22 != (undefined8 *)0x0) {
        uVar27 = *(ulong *)(param_3 + 8);
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 4;
        if ((uVar27 & 1) != 0) {
          uVar27 = *(ulong *)(uVar27 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(param_3 + 0x30,&local_80,uVar27);
      }
      if (puStack_c8 != local_d0) {
        lVar15 = 0;
        uVar27 = 1;
        do {
          if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar27) goto LAB_00b3be9c;
          puVar2 = (ulong *)(local_d0 + lVar15);
          uVar29 = (ulong)*(uint *)(*(long *)(*param_2 + uVar27 * 8) + 0x1c);
          if ((char)puVar2[1] == '\x01') {
            *puVar2 = uVar29;
          }
          else {
            puVar30 = puStack_c8;
            if (puVar2 == (ulong *)0x0) goto LAB_00b3bec4;
            *puVar2 = uVar29;
            *(undefined1 *)(puVar2 + 1) = 1;
          }
          lVar15 = lVar15 + 0x10;
          bVar8 = uVar27 < (ulong)((long)puStack_c8 - (long)local_d0 >> 4);
          uVar27 = uVar27 + 1;
        } while (bVar8);
      }
      FUN_00b53b7c(&local_e8,*(undefined4 *)(lVar36 + 0x1c),1,&local_d0);
      local_70 = local_d8;
      puStack_78 = puStack_e0;
      local_80 = local_e8;
      puVar22 = puStack_e0;
      if (((ulong)local_d8 >> 0x38 & 0x80) == 0) {
        puVar22 = (undefined8 *)((ulong)local_d8 >> 0x38);
      }
      if (puVar22 != (undefined8 *)0x0) {
        uVar27 = *(ulong *)(param_3 + 8);
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 8;
        if ((uVar27 & 1) != 0) {
          uVar27 = *(ulong *)(uVar27 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(param_3 + 0x38,&local_80,uVar27);
      }
      if (puStack_c8 != local_d0) {
        lVar15 = 0;
        uVar27 = 1;
        do {
          if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar27) goto LAB_00b3be9c;
          puVar22 = (undefined8 *)(local_d0 + lVar15);
          lVar15 = lVar15 + 0x10;
          uVar32 = *(undefined8 *)(*(long *)(*param_2 + uVar27 * 8) + 0x28);
          *(undefined1 *)(puVar22 + 1) = 1;
          *puVar22 = uVar32;
          bVar8 = uVar27 < (ulong)((long)puStack_c8 - (long)local_d0 >> 4);
          uVar27 = uVar27 + 1;
        } while (bVar8);
      }
      FUN_00b53b7c(&local_e8,*(undefined8 *)(lVar36 + 0x28),1,&local_d0);
      local_70 = local_d8;
      puStack_78 = puStack_e0;
      local_80 = local_e8;
      puVar22 = puStack_e0;
      if (((ulong)local_d8 >> 0x38 & 0x80) == 0) {
        puVar22 = (undefined8 *)((ulong)local_d8 >> 0x38);
      }
      if (puVar22 != (undefined8 *)0x0) {
        uVar27 = *(ulong *)(param_3 + 8);
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x10;
        if ((uVar27 & 1) != 0) {
          uVar27 = *(ulong *)(uVar27 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(param_3 + 0x40,&local_80,uVar27);
      }
      if (puStack_c8 != local_d0) {
        lVar15 = 0;
        uVar27 = 1;
        do {
          if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar27) goto LAB_00b3be9c;
          puVar22 = (undefined8 *)(local_d0 + lVar15);
          lVar15 = lVar15 + 0x10;
          uVar32 = *(undefined8 *)(*(long *)(*param_2 + uVar27 * 8) + 0x20);
          *(undefined1 *)(puVar22 + 1) = 1;
          *puVar22 = uVar32;
          bVar8 = uVar27 < (ulong)((long)puStack_c8 - (long)local_d0 >> 4);
          uVar27 = uVar27 + 1;
        } while (bVar8);
      }
      FUN_00b53b7c(&local_e8,*(undefined8 *)(lVar36 + 0x20),1,&local_d0);
      local_70 = local_d8;
      puStack_78 = puStack_e0;
      local_80 = local_e8;
      puVar22 = puStack_e0;
      if (((ulong)local_d8 >> 0x38 & 0x80) == 0) {
        puVar22 = (undefined8 *)((ulong)local_d8 >> 0x38);
      }
      if (puVar22 != (undefined8 *)0x0) {
        uVar27 = *(ulong *)(param_3 + 8);
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x20;
        if ((uVar27 & 1) != 0) {
          uVar27 = *(ulong *)(uVar27 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(param_3 + 0x48,&local_80,uVar27);
      }
      if (puStack_c8 != local_d0) {
        lVar15 = 0;
        uVar27 = 1;
        do {
          if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar27) goto LAB_00b3be9c;
          puVar2 = (ulong *)(local_d0 + lVar15);
          lVar15 = lVar15 + 0x10;
          bVar4 = *(byte *)(*(long *)(*param_2 + uVar27 * 8) + 0x12);
          *(undefined1 *)(puVar2 + 1) = 1;
          *puVar2 = (ulong)bVar4;
          bVar8 = uVar27 < (ulong)((long)puStack_c8 - (long)local_d0 >> 4);
          uVar27 = uVar27 + 1;
        } while (bVar8);
      }
      FUN_00b53b7c(&local_e8,*(undefined1 *)(lVar36 + 0x12),1,&local_d0);
      local_70 = local_d8;
      puStack_78 = puStack_e0;
      local_80 = local_e8;
      puVar22 = puStack_e0;
      if (((ulong)local_d8 >> 0x38 & 0x80) == 0) {
        puVar22 = (undefined8 *)((ulong)local_d8 >> 0x38);
      }
      if (puVar22 != (undefined8 *)0x0) {
        uVar27 = *(ulong *)(param_3 + 8);
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x40;
        if ((uVar27 & 1) != 0) {
          uVar27 = *(ulong *)(uVar27 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(param_3 + 0x50,&local_80,uVar27);
      }
      if (puStack_c8 != local_d0) {
        lVar36 = 0;
        uVar27 = 1;
        do {
          if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar27) goto LAB_00b3be9c;
          local_e8 = (undefined8 *)CONCAT62(local_e8._2_6_,0xaaaa);
          auVar37 = FUN_007dba34(*(long *)(*param_2 + uVar27 * 8) + 0x10,8);
          if ((auVar37._8_8_ == 0) ||
             (uVar29 = FUN_007d9000(auVar37._0_8_,auVar37._8_8_,&local_e8), (uVar29 & 1) == 0)) {
            if ((ulong)((long)puStack_c8 - (long)local_d0 >> 4) <= uVar27 - 1) goto LAB_00b3beb0;
            if (local_d0[lVar36 + 8] == '\x01') {
              local_d0[lVar36 + 8] = 0;
            }
          }
          else {
            if ((ulong)((long)puStack_c8 - (long)local_d0 >> 4) <= uVar27 - 1) goto LAB_00b3beb0;
            puVar2 = (ulong *)(local_d0 + lVar36);
            if ((char)puVar2[1] != '\x01') {
              puVar30 = puStack_c8;
              if (puVar2 == (ulong *)0x0) goto LAB_00b3bec4;
              *(undefined1 *)(puVar2 + 1) = 1;
            }
            *puVar2 = (ulong)local_e8 & 0xffff;
          }
          lVar36 = lVar36 + 0x10;
          bVar8 = uVar27 < (ulong)((long)puStack_c8 - (long)local_d0 >> 4);
          uVar27 = uVar27 + 1;
        } while (bVar8);
      }
      FUN_00b53b7c(&local_e8,uVar23,uVar25,&local_d0);
      local_70 = local_d8;
      puStack_78 = puStack_e0;
      local_80 = local_e8;
      puVar22 = puStack_e0;
      if (((ulong)local_d8 >> 0x38 & 0x80) == 0) {
        puVar22 = (undefined8 *)((ulong)local_d8 >> 0x38);
      }
      if (puVar22 != (undefined8 *)0x0) {
        uVar23 = *(ulong *)(param_3 + 8);
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x8000000;
        if ((uVar23 & 1) != 0) {
          uVar23 = *(ulong *)(uVar23 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(param_3 + 0xb8,&local_80,uVar23);
      }
      if (puStack_c8 != local_d0) {
        lVar36 = 0;
        uVar23 = 1;
        do {
          if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar23) goto LAB_00b3be9c;
          local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,0xaaaaaaaa);
          auVar37 = FUN_007dba34(*(long *)(*param_2 + uVar23 * 8) + 0x10,1);
          if ((auVar37._8_8_ == 0) ||
             (uVar27 = FUN_007d8fa0(auVar37._0_8_,auVar37._8_8_,&local_e8), (uVar27 & 1) == 0)) {
            if ((ulong)((long)puStack_c8 - (long)local_d0 >> 4) <= uVar23 - 1) goto LAB_00b3beb0;
            if (local_d0[lVar36 + 8] == '\x01') {
              local_d0[lVar36 + 8] = 0;
            }
          }
          else {
            if ((ulong)((long)puStack_c8 - (long)local_d0 >> 4) <= uVar23 - 1) goto LAB_00b3beb0;
            *(undefined1 *)((long)(local_d0 + lVar36) + 8) = 1;
            *(ulong *)(local_d0 + lVar36) = (ulong)local_e8 & 0xffffffff;
          }
          lVar36 = lVar36 + 0x10;
          bVar8 = uVar23 < (ulong)((long)puStack_c8 - (long)local_d0 >> 4);
          uVar23 = uVar23 + 1;
        } while (bVar8);
      }
      FUN_00b53b7c(&local_e8,uVar10,uVar19,&local_d0);
      local_70 = local_d8;
      puStack_78 = puStack_e0;
      local_80 = local_e8;
      puVar22 = puStack_e0;
      if (((ulong)local_d8 >> 0x38 & 0x80) == 0) {
        puVar22 = (undefined8 *)((ulong)local_d8 >> 0x38);
      }
      if (puVar22 != (undefined8 *)0x0) {
        uVar23 = *(ulong *)(param_3 + 8);
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x10000000;
        if ((uVar23 & 1) != 0) {
          uVar23 = *(ulong *)(uVar23 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(param_3 + 0xc0,&local_80,uVar23);
      }
      if (puStack_c8 != local_d0) {
        lVar36 = 0;
        uVar23 = 1;
        do {
          if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar23) goto LAB_00b3be9c;
          local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,0xaaaaaaaa);
          auVar37 = FUN_007dba34(*(long *)(*param_2 + uVar23 * 8) + 0x10,5);
          if ((auVar37._8_8_ == 0) ||
             (uVar10 = FUN_007d8d58(auVar37._0_8_,auVar37._8_8_,&local_e8), (uVar10 & 1) == 0)) {
            if ((ulong)((long)puStack_c8 - (long)local_d0 >> 4) <= uVar23 - 1) goto LAB_00b3beb0;
            if (local_d0[lVar36 + 8] == '\x01') {
              local_d0[lVar36 + 8] = 0;
            }
          }
          else {
            if ((ulong)((long)puStack_c8 - (long)local_d0 >> 4) <= uVar23 - 1) goto LAB_00b3beb0;
            puVar2 = (ulong *)(local_d0 + lVar36);
            if ((char)puVar2[1] != '\x01') {
              puVar30 = puStack_c8;
              if (puVar2 == (ulong *)0x0) goto LAB_00b3bec4;
              *(undefined1 *)(puVar2 + 1) = 1;
            }
            *puVar2 = (ulong)local_e8 & 0xffffffff;
          }
          lVar36 = lVar36 + 0x10;
          bVar8 = uVar23 < (ulong)((long)puStack_c8 - (long)local_d0 >> 4);
          uVar23 = uVar23 + 1;
        } while (bVar8);
      }
      FUN_00b53b7c(&local_e8,uVar11,uVar20,&local_d0);
      local_70 = local_d8;
      puStack_78 = puStack_e0;
      local_80 = local_e8;
      puVar22 = puStack_e0;
      if (((ulong)local_d8 >> 0x38 & 0x80) == 0) {
        puVar22 = (undefined8 *)((ulong)local_d8 >> 0x38);
      }
      if (puVar22 != (undefined8 *)0x0) {
        uVar23 = *(ulong *)(param_3 + 8);
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x20000000;
        if ((uVar23 & 1) != 0) {
          uVar23 = *(ulong *)(uVar23 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(param_3 + 200,&local_80,uVar23);
      }
      if (puStack_c8 != local_d0) {
        lVar36 = 0;
        uVar23 = 1;
        do {
          if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar23) goto LAB_00b3be9c;
          local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,0xaaaaaaaa);
          auVar37 = FUN_007dba34(*(long *)(*param_2 + uVar23 * 8) + 0x10,7);
          if ((auVar37._8_8_ == 0) ||
             (uVar10 = FUN_007d90e0(auVar37._0_8_,auVar37._8_8_,&local_e8), (uVar10 & 1) == 0)) {
            if ((ulong)((long)puStack_c8 - (long)local_d0 >> 4) <= uVar23 - 1) goto LAB_00b3beb0;
            if (local_d0[lVar36 + 8] == '\x01') {
              local_d0[lVar36 + 8] = 0;
            }
          }
          else {
            if ((int)local_e8 == 0x5a) {
              uVar25 = 1;
            }
            else if ((int)local_e8 == 0x10e) {
              uVar25 = 3;
            }
            else if ((int)local_e8 == 0xb4) {
              uVar25 = 2;
            }
            else {
              uVar25 = 0;
            }
            if ((ulong)((long)puStack_c8 - (long)local_d0 >> 4) <= uVar23 - 1) goto LAB_00b3beb0;
            puVar22 = (undefined8 *)(local_d0 + lVar36);
            if (*(char *)(puVar22 + 1) == '\x01') {
              *puVar22 = uVar25;
            }
            else {
              puVar30 = puStack_c8;
              if (puVar22 == (undefined8 *)0x0) goto LAB_00b3bec4;
              *puVar22 = uVar25;
              *(undefined1 *)(puVar22 + 1) = 1;
            }
          }
          lVar36 = lVar36 + 0x10;
          bVar8 = uVar23 < (ulong)((long)puStack_c8 - (long)local_d0 >> 4);
          uVar23 = uVar23 + 1;
        } while (bVar8);
      }
      FUN_00b53b7c(&local_e8,uVar26,uVar21,&local_d0);
      local_70 = local_d8;
      puStack_78 = puStack_e0;
      local_80 = local_e8;
      puVar22 = puStack_e0;
      if (((ulong)local_d8 >> 0x38 & 0x80) == 0) {
        puVar22 = (undefined8 *)((ulong)local_d8 >> 0x38);
      }
      if (puVar22 != (undefined8 *)0x0) {
        uVar23 = *(ulong *)(param_3 + 8);
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x40000000;
        if ((uVar23 & 1) != 0) {
          uVar23 = *(ulong *)(uVar23 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(param_3 + 0xd0,&local_80,uVar23);
      }
      if (puStack_c8 != local_d0) {
        lVar36 = 0;
        uVar23 = 1;
        do {
          if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar23) goto LAB_00b3be9c;
          lVar15 = *(long *)(*param_2 + uVar23 * 8);
          local_e8 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
          FUN_00659674(&local_e8);
          auVar37 = FUN_007dba34(lVar15 + 0x10,2);
          if ((auVar37._8_8_ == 0) ||
             (uVar10 = FUN_007d8ec0(auVar37._0_8_,auVar37._8_8_,&local_e8), (uVar10 & 1) == 0)) {
            if ((ulong)((long)puStack_c8 - (long)local_d0 >> 4) <= uVar23 - 1) goto LAB_00b3beb0;
            if (local_d0[lVar36 + 8] == '\x01') {
              local_d0[lVar36 + 8] = 0;
            }
          }
          else {
            if ((ulong)((long)puStack_c8 - (long)local_d0 >> 4) <= uVar23 - 1) goto LAB_00b3beb0;
            plVar1 = (long *)(local_d0 + lVar36);
            if ((char)plVar1[1] == '\x01') {
              *plVar1 = (long)local_e8._4_4_;
            }
            else {
              puVar30 = puStack_c8;
              if (plVar1 == (long *)0x0) goto LAB_00b3bec4;
              *plVar1 = (long)local_e8._4_4_;
              *(undefined1 *)(plVar1 + 1) = 1;
            }
          }
          lVar36 = lVar36 + 0x10;
          bVar8 = uVar23 < (ulong)((long)puStack_c8 - (long)local_d0 >> 4);
          uVar23 = uVar23 + 1;
        } while (bVar8);
      }
      FUN_00b53b7c(&local_e8,lVar18,uVar35,&local_d0);
      local_70 = local_d8;
      puStack_78 = puStack_e0;
      local_80 = local_e8;
      puVar22 = puStack_e0;
      if (((ulong)local_d8 >> 0x38 & 0x80) == 0) {
        puVar22 = (undefined8 *)((ulong)local_d8 >> 0x38);
      }
      if (puVar22 != (undefined8 *)0x0) {
        uVar23 = *(ulong *)(param_3 + 8);
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x80000000;
        if ((uVar23 & 1) != 0) {
          uVar23 = *(ulong *)(uVar23 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(param_3 + 0xd8,&local_80,uVar23);
      }
      if (puStack_c8 != local_d0) {
        lVar18 = 0;
        uVar23 = 1;
        do {
          if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar23) goto LAB_00b3be9c;
          lVar36 = *(long *)(*param_2 + uVar23 * 8);
          local_e8 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
          FUN_00659674(&local_e8);
          auVar37 = FUN_007dba34(lVar36 + 0x10,2);
          if ((auVar37._8_8_ == 0) ||
             (uVar10 = FUN_007d8ec0(auVar37._0_8_,auVar37._8_8_,&local_e8), (uVar10 & 1) == 0)) {
            if ((ulong)((long)puStack_c8 - (long)local_d0 >> 4) <= uVar23 - 1) goto LAB_00b3beb0;
            if (local_d0[lVar18 + 8] == '\x01') {
              local_d0[lVar18 + 8] = 0;
            }
          }
          else {
            if ((ulong)((long)puStack_c8 - (long)local_d0 >> 4) <= uVar23 - 1) {
LAB_00b3beb0:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                        );
            }
            puVar2 = (ulong *)(local_d0 + lVar18);
            if ((char)puVar2[1] == '\x01') {
              *puVar2 = (ulong)local_e8 & 0xff;
            }
            else {
              puVar30 = puStack_c8;
              if (puVar2 == (ulong *)0x0) {
LAB_00b3bec4:
                puStack_c8 = puVar30;
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                          );
              }
              *puVar2 = (ulong)local_e8 & 0xff;
              *(undefined1 *)(puVar2 + 1) = 1;
            }
          }
          lVar18 = lVar18 + 0x10;
          bVar8 = uVar23 < (ulong)((long)puStack_c8 - (long)local_d0 >> 4);
          uVar23 = uVar23 + 1;
        } while (bVar8);
      }
      FUN_00b53b7c(&local_e8,uVar12,uVar35,&local_d0);
      local_70 = local_d8;
      puStack_78 = puStack_e0;
      local_80 = local_e8;
      puVar22 = puStack_e0;
      if (((ulong)local_d8 >> 0x38 & 0x80) == 0) {
        puVar22 = (undefined8 *)((ulong)local_d8 >> 0x38);
      }
      if (puVar22 != (undefined8 *)0x0) {
        uVar23 = *(ulong *)(param_3 + 8);
        *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 1;
        if ((uVar23 & 1) != 0) {
          uVar23 = *(ulong *)(uVar23 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(param_3 + 0xe0,&local_80,uVar23);
      }
      if (puStack_c8 != local_d0) {
        lVar18 = 0;
        uVar23 = 1;
        do {
          if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar23) {
LAB_00b3be9c:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                      );
          }
          uVar17 = *(uint *)(*(long *)(*param_2 + uVar23 * 8) + 0x80);
          if ((uVar17 >> 0x10 & 1) == 0) {
            if (local_d0[lVar18 + 8] == '\x01') {
              local_d0[lVar18 + 8] = 0;
            }
          }
          else {
            *(ulong *)(local_d0 + lVar18) = (ulong)uVar17 & 0xffff;
            *(undefined1 *)((long)(local_d0 + lVar18) + 8) = 1;
          }
          lVar18 = lVar18 + 0x10;
          bVar8 = uVar23 < (ulong)((long)puStack_c8 - (long)local_d0 >> 4);
          uVar23 = uVar23 + 1;
        } while (bVar8);
      }
      FUN_00b53b7c(&local_e8,uVar13,uVar28,&local_d0);
      local_70 = local_d8;
      puStack_78 = puStack_e0;
      local_80 = local_e8;
      uVar17 = (uint)(char)((ulong)local_d8 >> 0x38);
      if (-1 < (int)uVar17) {
        puStack_e0 = (undefined8 *)((ulong)local_d8 >> 0x38);
      }
      if (puStack_e0 != (undefined8 *)0x0) {
        uVar23 = *(ulong *)(param_3 + 8);
        *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 2;
        if ((uVar23 & 1) != 0) {
          uVar23 = *(ulong *)(uVar23 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(param_3 + 0xe8,&local_80,uVar23);
        uVar17 = (uint)local_70._7_1_;
      }
      if ((uVar17 >> 7 & 1) != 0) {
        operator_delete(local_80);
      }
      if (local_d0 != (undefined1 *)0x0) {
        uVar23 = (ulong)(((long)local_d0 - (long)puStack_c8 << 0x3c) -
                        ((long)local_d0 - (long)puStack_c8)) >> 4;
        if ((ulong)(puStack_c8 + (-0x10 - ((long)puStack_c8 << 0x3c))) >> 4 <= uVar23) {
          uVar23 = (ulong)(puStack_c8 + (-0x10 - ((long)puStack_c8 << 0x3c))) >> 4;
        }
        puVar34 = puStack_c8;
        if ((1 < uVar23) && ((((int)local_d0 - (int)puStack_c8 | -(int)puStack_c8) & 0xfU) == 0)) {
          uVar23 = uVar23 & 0xffffffffffffffe;
          puVar34 = puStack_c8 + uVar23 * -0x10;
          do {
            uVar23 = uVar23 - 2;
          } while (uVar23 != 0);
        }
        do {
          if (puVar34 == local_d0) {
            puStack_c8 = local_d0;
            operator_delete(local_d0);
            return;
          }
          puVar34 = puVar34 + -0x10;
        } while (puVar34 != (undefined1 *)0x0);
LAB_00b3be88:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
  }
  return;
}


// ===== 00b3bfe0  FUN_00b3bfe0 =====

ulong FUN_00b3bfe0(long param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  puVar2 = (ulong *)(param_1 + 0x30);
  if ((uVar7 & 1) == 0) {
    uVar4 = *puVar2;
  }
  else {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    uVar4 = *puVar2;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x38) = 1;
    uVar3 = FUN_00b401e8(uVar7);
    *(undefined8 *)(param_1 + 0x30) = uVar3;
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(param_1 + 0x38) == 0) {
        *(undefined4 *)(param_1 + 0x38) = 1;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_1 + 0x30,1,uVar7);
        uVar7 = FUN_00b401e8(uVar7);
        *puVar2 = uVar7;
        *(undefined4 *)(*(long *)(param_1 + 0x30) + 3) = 2;
        *(undefined4 *)(param_1 + 0x38) = 2;
      }
    }
    else {
      piVar5 = (int *)(uVar4 - 1);
      iVar1 = *(int *)(param_1 + 0x38);
      if (iVar1 == *piVar5) {
        FUN_00711858(param_1 + 0x30,1,uVar7);
        iVar6 = *(int *)(*puVar2 + 3);
        piVar5 = (int *)(*puVar2 - 1);
      }
      else {
        iVar6 = *(int *)(uVar4 + 3);
        if (0 < iVar6 - iVar1) {
          *(int *)(param_1 + 0x38) = iVar1 + 1;
          puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
          goto LAB_00b3c0f8;
        }
      }
      piVar5[1] = iVar6 + 1;
      iVar1 = *(int *)(param_1 + 0x38);
      *(int *)(param_1 + 0x38) = iVar1 + 1;
      uVar7 = FUN_00b401e8(uVar7);
      puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
      *puVar2 = uVar7;
    }
  }
LAB_00b3c0f8:
  uVar7 = *puVar2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  return uVar7;
}


// ===== 00b3c11c  FUN_00b3c11c =====

ulong FUN_00b3c11c(long param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  puVar2 = (ulong *)(param_1 + 0xa8);
  if ((uVar7 & 1) == 0) {
    uVar4 = *puVar2;
  }
  else {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    uVar4 = *puVar2;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0xb0) = 1;
    uVar3 = FUN_00b40238(uVar7);
    *(undefined8 *)(param_1 + 0xa8) = uVar3;
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(param_1 + 0xb0) == 0) {
        *(undefined4 *)(param_1 + 0xb0) = 1;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_1 + 0xa8,1,uVar7);
        uVar7 = FUN_00b40238(uVar7);
        *puVar2 = uVar7;
        *(undefined4 *)(*(long *)(param_1 + 0xa8) + 3) = 2;
        *(undefined4 *)(param_1 + 0xb0) = 2;
      }
    }
    else {
      piVar5 = (int *)(uVar4 - 1);
      iVar1 = *(int *)(param_1 + 0xb0);
      if (iVar1 == *piVar5) {
        FUN_00711858(param_1 + 0xa8,1,uVar7);
        iVar6 = *(int *)(*puVar2 + 3);
        piVar5 = (int *)(*puVar2 - 1);
      }
      else {
        iVar6 = *(int *)(uVar4 + 3);
        if (0 < iVar6 - iVar1) {
          *(int *)(param_1 + 0xb0) = iVar1 + 1;
          puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
          goto LAB_00b3c234;
        }
      }
      piVar5[1] = iVar6 + 1;
      iVar1 = *(int *)(param_1 + 0xb0);
      *(int *)(param_1 + 0xb0) = iVar1 + 1;
      uVar7 = FUN_00b40238(uVar7);
      puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
      *puVar2 = uVar7;
    }
  }
LAB_00b3c234:
  uVar7 = *puVar2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x40;
  return uVar7;
}


// ===== 00b3c258  FUN_00b3c258 =====

/* WARNING: Removing unreachable block (ram,0x00b3d7ac) */
/* WARNING: Removing unreachable block (ram,0x00b3d514) */
/* WARNING: Removing unreachable block (ram,0x00b3d268) */
/* WARNING: Removing unreachable block (ram,0x00b3cff0) */
/* WARNING: Removing unreachable block (ram,0x00b3ce68) */
/* WARNING: Removing unreachable block (ram,0x00b3ccc0) */
/* WARNING: Removing unreachable block (ram,0x00b3caf8) */
/* WARNING: Removing unreachable block (ram,0x00b3c930) */
/* WARNING: Removing unreachable block (ram,0x00b3ca14) */
/* WARNING: Removing unreachable block (ram,0x00b3cbdc) */
/* WARNING: Removing unreachable block (ram,0x00b3cda4) */
/* WARNING: Removing unreachable block (ram,0x00b3cf2c) */
/* WARNING: Removing unreachable block (ram,0x00b3d134) */
/* WARNING: Removing unreachable block (ram,0x00b3d3a4) */
/* WARNING: Removing unreachable block (ram,0x00b3d660) */
/* WARNING: Removing unreachable block (ram,0x00b3d89c) */

void FUN_00b3c258(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  ulong *puVar2;
  undefined1 uVar3;
  byte bVar4;
  ushort uVar5;
  bool bVar6;
  long lVar7;
  bool bVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined4 uVar16;
  uint uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined1 *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulong uVar27;
  undefined8 uVar28;
  ulong uVar29;
  undefined1 *puVar30;
  ulong uVar31;
  undefined8 uVar32;
  long lVar33;
  undefined1 *puVar34;
  undefined8 uVar35;
  long lVar36;
  undefined1 auVar37 [16];
  undefined8 local_e8;
  undefined8 *puStack_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined8 *local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  
  if ((long *)*param_2 != (long *)param_2[1]) {
    lVar36 = *(long *)*param_2;
    lVar18 = *(long *)(lVar36 + 8);
    uVar17 = *(uint *)(param_3 + 0x10);
    *(uint *)(param_3 + 0x10) = uVar17 | 0x100;
    *(long *)(param_3 + 0x60) = lVar18 / 1000;
    puVar34 = (undefined1 *)(lVar36 + 0x10);
    uVar3 = *puVar34;
    *(uint *)(param_3 + 0x10) = uVar17 | 0x20100;
    *(undefined1 *)(param_3 + 0x88) = uVar3;
    bVar4 = *(byte *)(lVar36 + 0x11);
    *(uint *)(param_3 + 0x10) = uVar17 | 0x20300;
    *(uint *)(param_3 + 0x68) = (uint)bVar4;
    uVar5 = *(ushort *)(lVar36 + 0x14);
    *(uint *)(param_3 + 0x10) = uVar17 | 0x20700;
    *(uint *)(param_3 + 0x6c) = (uint)uVar5;
    uVar16 = *(undefined4 *)(lVar36 + 0x18);
    *(uint *)(param_3 + 0x10) = uVar17 | 0x20f00;
    *(undefined4 *)(param_3 + 0x70) = uVar16;
    uVar16 = *(undefined4 *)(lVar36 + 0x1c);
    *(uint *)(param_3 + 0x10) = uVar17 | 0x21f00;
    *(undefined4 *)(param_3 + 0x74) = uVar16;
    uVar25 = *(undefined8 *)(lVar36 + 0x28);
    *(uint *)(param_3 + 0x10) = uVar17 | 0x23f00;
    *(int *)(param_3 + 0x78) = (int)uVar25;
    uVar25 = *(undefined8 *)(lVar36 + 0x20);
    *(uint *)(param_3 + 0x10) = uVar17 | 0x27f00;
    *(int *)(param_3 + 0x7c) = (int)uVar25;
    bVar4 = *(byte *)(lVar36 + 0x12);
    *(uint *)(param_3 + 0x10) = uVar17 | 0x2ff00;
    local_d0 = (undefined1 *)CONCAT62(local_d0._2_6_,0xaaaa);
    *(uint *)(param_3 + 0x80) = (uint)bVar4;
    auVar37 = FUN_007dba34(puVar34,8);
    uVar23 = 0xaaaaaaaaaaaaaa00;
    uVar25 = 0xaaaaaaaaaaaaaa00;
    if (auVar37._8_8_ != 0) {
      uVar10 = FUN_007d9000(auVar37._0_8_,auVar37._8_8_,&local_d0);
      uVar23 = 0xaaaaaaaaaaaaaa00;
      uVar25 = 0xaaaaaaaaaaaaaa00;
      if ((uVar10 & 1) != 0) {
        uVar23 = (ulong)local_d0 & 0xffff;
        *(uint *)(param_3 + 0x8c) = (uint)(ushort)local_d0;
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x80000;
        uVar25 = 0xaaaaaaaaaaaaaa01;
      }
    }
    local_d0 = (undefined1 *)CONCAT44(local_d0._4_4_,0xaaaaaaaa);
    auVar37 = FUN_007dba34(puVar34,1);
    uVar10 = 0xaaaaaaaaaaaaaa00;
    uVar19 = 0xaaaaaaaaaaaaaa00;
    if (auVar37._8_8_ != 0) {
      uVar11 = FUN_007d8fa0(auVar37._0_8_,auVar37._8_8_,&local_d0);
      uVar10 = 0xaaaaaaaaaaaaaa00;
      uVar19 = 0xaaaaaaaaaaaaaa00;
      if ((uVar11 & 1) != 0) {
        uVar10 = (ulong)local_d0 & 0xffffffff;
        *(int *)(param_3 + 0x90) = (int)local_d0;
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x100000;
        uVar19 = 0xaaaaaaaaaaaaaa01;
      }
    }
    local_d0 = (undefined1 *)CONCAT44(local_d0._4_4_,0xaaaaaaaa);
    auVar37 = FUN_007dba34(puVar34,5);
    uVar11 = 0xaaaaaaaaaaaaaa00;
    uVar20 = 0xaaaaaaaaaaaaaa00;
    if (auVar37._8_8_ != 0) {
      uVar12 = FUN_007d8d58(auVar37._0_8_,auVar37._8_8_,&local_d0);
      uVar11 = 0xaaaaaaaaaaaaaa00;
      uVar20 = 0xaaaaaaaaaaaaaa00;
      if ((uVar12 & 1) != 0) {
        uVar11 = (ulong)local_d0 & 0xffffffff;
        *(int *)(param_3 + 0x94) = (int)local_d0;
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x200000;
        uVar20 = 0xaaaaaaaaaaaaaa01;
      }
    }
    local_d0 = (undefined1 *)CONCAT44(local_d0._4_4_,0xaaaaaaaa);
    auVar37 = FUN_007dba34(puVar34,7);
    uVar26 = 0xaaaaaaaaaaaaaa00;
    uVar21 = 0xaaaaaaaaaaaaaa00;
    if (auVar37._8_8_ != 0) {
      uVar12 = FUN_007d90e0(auVar37._0_8_,auVar37._8_8_,&local_d0);
      uVar26 = 0xaaaaaaaaaaaaaa00;
      uVar21 = 0xaaaaaaaaaaaaaa00;
      if ((uVar12 & 1) != 0) {
        if ((int)local_d0 == 0x5a) {
          uVar16 = 1;
          uVar26 = 1;
        }
        else if ((int)local_d0 == 0x10e) {
          uVar26 = 3;
          uVar16 = 3;
        }
        else if ((int)local_d0 == 0xb4) {
          uVar26 = 2;
          uVar16 = 2;
        }
        else {
          uVar16 = 0;
          uVar26 = 0;
        }
        *(undefined4 *)(param_3 + 0x98) = uVar16;
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x400000;
        uVar21 = 0xaaaaaaaaaaaaaa01;
      }
    }
    local_d0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00659674(&local_d0);
    auVar37 = FUN_007dba34(puVar34,2);
    uVar12 = 0xaaaaaaaaaaaaaa00;
    uVar35 = 0xaaaaaaaaaaaaaa00;
    lVar18 = -0x5555555555555600;
    if ((auVar37._8_8_ != 0) &&
       (uVar13 = FUN_007d8ec0(auVar37._0_8_,auVar37._8_8_,&local_d0), (uVar13 & 1) != 0)) {
      lVar18 = (long)local_d0._4_4_;
      uVar12 = (ulong)local_d0 & 0xff;
      uVar35 = 0xaaaaaaaaaaaaaa01;
      *(int *)(param_3 + 0x9c) = local_d0._4_4_;
      *(undefined1 *)(param_3 + 0x89) = (undefined1)local_d0;
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x840000;
    }
    if (*(char *)(param_1 + 9) == '\x01') {
      lVar15 = *param_2;
      puStack_78 = (undefined8 *)0x0;
      local_70 = (undefined8 *)0x0;
      local_80 = (undefined8 *)0x0;
      lVar33 = param_2[1] - lVar15;
      if (lVar33 != 0) {
        if ((ulong)(lVar33 >> 3) >> 0x3c != 0) {
          FUN_0060aa38();
          goto LAB_00b3dad8;
        }
        uVar13 = lVar33 * 2;
        local_80 = (undefined8 *)operator_new(uVar13);
        local_70 = local_80 + (lVar33 >> 3) * 2;
        puVar22 = (undefined8 *)((long)local_80 + uVar13);
        puVar14 = local_80;
        do {
          puVar30 = puStack_c8;
          puStack_78 = local_80;
          if (puVar14 == (undefined8 *)0x0) goto LAB_00b3d9c0;
          uVar13 = uVar13 - 0x10;
          *puVar14 = 0;
          puVar14[1] = 0;
          puVar14 = puVar14 + 2;
        } while (uVar13 != 0);
        lVar33 = 0;
        uVar13 = 0;
        puStack_78 = puVar22;
        bVar8 = false;
        do {
          bVar6 = bVar8;
          auVar37 = FUN_007dba34(*(long *)(lVar15 + uVar13 * 8) + 0x10,0x12);
          if (((ulong)((long)puStack_78 - (long)local_80 >> 4) <= uVar13) ||
             (*(undefined1 (*) [16])((long)local_80 + lVar33) = auVar37,
             (ulong)((long)puStack_78 - (long)local_80 >> 4) <= uVar13)) goto LAB_00b3d9ac;
          lVar15 = *param_2;
          lVar7 = lVar33 + 8;
          uVar13 = uVar13 + 1;
          lVar33 = lVar33 + 0x10;
          bVar9 = *(long *)((long)local_80 + lVar7) != 0;
          bVar8 = (bool)(bVar6 | bVar9);
        } while (uVar13 < (ulong)(param_2[1] - lVar15 >> 3));
        if (bVar6 || bVar9) {
          puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
          local_c0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
          local_a0 = &DAT_aaaaaaaaaaaaaaaa;
          local_88 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
          local_d0 = &DAT_aaaaaaaaaaaaaaaa;
          FUN_00b543c4(&local_d0,&local_80);
          if ((char)local_88 == '\x01') {
            lVar15 = *(long *)(param_3 + 0x58);
            *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x80;
            if (lVar15 == 0) {
              uVar13 = *(ulong *)(param_3 + 8);
              if ((uVar13 & 1) != 0) {
                uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
              }
              lVar15 = FUN_00b40a18(uVar13);
              *(long *)(param_3 + 0x58) = lVar15;
            }
            FUN_00b45848(lVar15,&local_d0);
            if ((char)local_88 == '\x01') {
              FUN_00b44f8c(&local_d0);
            }
          }
        }
        if (local_80 != (undefined8 *)0x0) {
          uVar27 = (ulong)((long)puStack_78 + (-0x10 - ((long)puStack_78 << 0x3c))) >> 4;
          uVar13 = (ulong)(((long)local_80 - (long)puStack_78 << 0x3c) -
                          ((long)local_80 - (long)puStack_78)) >> 4;
          if (uVar27 <= uVar13) {
            uVar13 = uVar27;
          }
          puVar22 = puStack_78;
          if ((1 < uVar13) && ((((int)local_80 - (int)puStack_78 | -(int)puStack_78) & 0xfU) == 0))
          {
            uVar13 = uVar13 & 0xffffffffffffffe;
            puVar22 = puStack_78 + uVar13 * -2;
            do {
              uVar13 = uVar13 - 2;
            } while (uVar13 != 0);
          }
          do {
            if (puVar22 == local_80) {
              puStack_78 = local_80;
              operator_delete(local_80);
              goto LAB_00b3c754;
            }
            puVar22 = puVar22 + -2;
          } while (puVar22 != (undefined8 *)0x0);
          goto LAB_00b3d984;
        }
      }
    }
LAB_00b3c754:
    uVar13 = 0xaaaaaaaaaaaaaa00;
    uVar28 = 0xaaaaaaaaaaaaaa00;
    if ((*(uint *)(lVar36 + 0x84) >> 0x10 & 1) != 0) {
      uVar13 = (ulong)*(uint *)(lVar36 + 0x84) & 0xffff;
      uVar28 = 0xaaaaaaaaaaaaaa01;
      *(int *)(param_3 + 0xa0) = (int)uVar13;
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x1000000;
    }
    if (param_2[1] - *param_2 != 8) {
      puStack_c8 = (undefined1 *)0x0;
      local_c0 = (undefined1 *)0x0;
      local_d0 = (undefined1 *)0x0;
      *(int *)(param_3 + 0x84) = (int)((ulong)(param_2[1] - *param_2) >> 3) + -1;
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x10000;
      lVar15 = *param_2;
      lVar33 = param_2[1];
      uVar27 = (lVar33 - lVar15 >> 3) - 1;
      if (uVar27 != 0) {
        if (uVar27 >> 0x3c != 0) {
LAB_00b3dad8:
                    /* WARNING: Subroutine does not return */
          FUN_00b3fc80();
        }
        local_d0 = (undefined1 *)operator_new(uVar27 * 0x10);
        uVar29 = (lVar33 - lVar15) * 2 - 0x20U >> 4;
        puStack_c8 = local_d0 + uVar27 * 0x10;
        uVar27 = (ulong)-(long)local_d0 >> 4;
        if (uVar29 <= (ulong)-(long)local_d0 >> 4) {
          uVar27 = uVar29;
        }
        puVar24 = local_d0;
        if (1 < uVar27) {
          uVar31 = (ulong)-(long)local_d0 >> 4;
          if (uVar29 <= uVar31) {
            uVar31 = uVar29;
          }
          if (((-(long)local_d0 & 0xfU) == 0) && (local_d0 <= local_d0 + uVar31 * 0x10)) {
            uVar27 = uVar27 & 0xffffffffffffffe;
            puVar30 = local_d0 + 0x10;
            puVar24 = local_d0 + uVar27 * 0x10;
            do {
              puVar30[-0x10] = 0;
              uVar27 = uVar27 - 2;
              *puVar30 = 0;
              puVar30[-8] = 0;
              puVar30[8] = 0;
              puVar30 = puVar30 + 0x20;
            } while (uVar27 != 0);
          }
        }
        do {
          puVar30 = local_d0;
          local_c0 = puStack_c8;
          if (puVar24 == (undefined1 *)0x0) goto LAB_00b3d9c0;
          *puVar24 = 0;
          puVar24[8] = 0;
          puVar24 = puVar24 + 0x10;
        } while (puVar24 != puStack_c8);
        lVar15 = 0;
        uVar27 = 1;
        local_80 = (undefined8 *)0x0;
        puStack_78 = (undefined8 *)0x0;
        local_70 = (undefined8 *)0x0;
        do {
          if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar27) goto LAB_00b3d998;
          lVar33 = *(long *)(*(long *)(*param_2 + uVar27 * 8) + 8);
          plVar1 = (long *)(local_d0 + lVar15);
          lVar15 = lVar15 + 0x10;
          *(undefined1 *)(plVar1 + 1) = 1;
          *plVar1 = lVar33 / 1000;
          bVar8 = uVar27 < (ulong)((long)puStack_c8 - (long)local_d0 >> 4);
          uVar27 = uVar27 + 1;
        } while (bVar8);
      }
      local_70 = (undefined8 *)0x0;
      puStack_78 = (undefined8 *)0x0;
      local_80 = (undefined8 *)0x0;
      puStack_c8 = local_c0;
      FUN_00b53b7c(&local_e8,*(long *)(lVar36 + 8) / 1000,1,&local_d0);
      local_70 = local_d8;
      puStack_78 = puStack_e0;
      local_80 = local_e8;
      puVar22 = puStack_e0;
      if (((ulong)local_d8 >> 0x38 & 0x80) == 0) {
        puVar22 = (undefined8 *)((ulong)local_d8 >> 0x38);
      }
      if (puVar22 != (undefined8 *)0x0) {
        uVar27 = *(ulong *)(param_3 + 8);
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x2000000;
        if ((uVar27 & 1) != 0) {
          uVar27 = *(ulong *)(uVar27 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(param_3 + 0xa8,&local_80,uVar27);
      }
      if (puStack_c8 != local_d0) {
        lVar15 = 0;
        uVar27 = 1;
        do {
          if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar27) goto LAB_00b3d998;
          puVar2 = (ulong *)(local_d0 + lVar15);
          uVar29 = (ulong)*(byte *)(*(long *)(*param_2 + uVar27 * 8) + 0x10);
          if ((char)puVar2[1] == '\x01') {
            *puVar2 = uVar29;
          }
          else {
            puVar30 = puStack_c8;
            if (puVar2 == (ulong *)0x0) goto LAB_00b3d9c0;
            *puVar2 = uVar29;
            *(undefined1 *)(puVar2 + 1) = 1;
          }
          lVar15 = lVar15 + 0x10;
          bVar8 = uVar27 < (ulong)((long)puStack_c8 - (long)local_d0 >> 4);
          uVar27 = uVar27 + 1;
        } while (bVar8);
      }
      FUN_00b53b7c(&local_e8,*puVar34,1,&local_d0);
      local_70 = local_d8;
      puStack_78 = puStack_e0;
      local_80 = local_e8;
      puVar22 = puStack_e0;
      if (((ulong)local_d8 >> 0x38 & 0x80) == 0) {
        puVar22 = (undefined8 *)((ulong)local_d8 >> 0x38);
      }
      if (puVar22 != (undefined8 *)0x0) {
        uVar27 = *(ulong *)(param_3 + 8);
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x4000000;
        if ((uVar27 & 1) != 0) {
          uVar27 = *(ulong *)(uVar27 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(param_3 + 0xb0,&local_80,uVar27);
      }
      if (puStack_c8 != local_d0) {
        lVar15 = 0;
        uVar27 = 1;
        do {
          if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar27) goto LAB_00b3d998;
          puVar2 = (ulong *)(local_d0 + lVar15);
          uVar29 = (ulong)*(byte *)(*(long *)(*param_2 + uVar27 * 8) + 0x11);
          if ((char)puVar2[1] == '\x01') {
            *puVar2 = uVar29;
          }
          else {
            puVar30 = puStack_c8;
            if (puVar2 == (ulong *)0x0) goto LAB_00b3d9c0;
            *puVar2 = uVar29;
            *(undefined1 *)(puVar2 + 1) = 1;
          }
          lVar15 = lVar15 + 0x10;
          bVar8 = uVar27 < (ulong)((long)puStack_c8 - (long)local_d0 >> 4);
          uVar27 = uVar27 + 1;
        } while (bVar8);
      }
      FUN_00b53b7c(&local_e8,*(undefined1 *)(lVar36 + 0x11),1,&local_d0);
      local_70 = local_d8;
      puStack_78 = puStack_e0;
      local_80 = local_e8;
      puVar22 = puStack_e0;
      if (((ulong)local_d8 >> 0x38 & 0x80) == 0) {
        puVar22 = (undefined8 *)((ulong)local_d8 >> 0x38);
      }
      if (puVar22 != (undefined8 *)0x0) {
        uVar27 = *(ulong *)(param_3 + 8);
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 1;
        if ((uVar27 & 1) != 0) {
          uVar27 = *(ulong *)(uVar27 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(param_3 + 0x20,&local_80,uVar27);
      }
      if (puStack_c8 != local_d0) {
        lVar15 = 0;
        uVar27 = 1;
        do {
          if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar27) goto LAB_00b3d998;
          puVar2 = (ulong *)(local_d0 + lVar15);
          uVar29 = (ulong)*(ushort *)(*(long *)(*param_2 + uVar27 * 8) + 0x14);
          if ((char)puVar2[1] == '\x01') {
            *puVar2 = uVar29;
          }
          else {
            puVar30 = puStack_c8;
            if (puVar2 == (ulong *)0x0) goto LAB_00b3d9c0;
            *puVar2 = uVar29;
            *(undefined1 *)(puVar2 + 1) = 1;
          }
          lVar15 = lVar15 + 0x10;
          bVar8 = uVar27 < (ulong)((long)puStack_c8 - (long)local_d0 >> 4);
          uVar27 = uVar27 + 1;
        } while (bVar8);
      }
      FUN_00b53b7c(&local_e8,*(undefined2 *)(lVar36 + 0x14),1,&local_d0);
      local_70 = local_d8;
      puStack_78 = puStack_e0;
      local_80 = local_e8;
      puVar22 = puStack_e0;
      if (((ulong)local_d8 >> 0x38 & 0x80) == 0) {
        puVar22 = (undefined8 *)((ulong)local_d8 >> 0x38);
      }
      if (puVar22 != (undefined8 *)0x0) {
        uVar27 = *(ulong *)(param_3 + 8);
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 2;
        if ((uVar27 & 1) != 0) {
          uVar27 = *(ulong *)(uVar27 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(param_3 + 0x28,&local_80,uVar27);
      }
      if (puStack_c8 != local_d0) {
        lVar15 = 0;
        uVar27 = 1;
        do {
          if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar27) goto LAB_00b3d998;
          puVar2 = (ulong *)(local_d0 + lVar15);
          uVar29 = (ulong)*(uint *)(*(long *)(*param_2 + uVar27 * 8) + 0x18);
          if ((char)puVar2[1] == '\x01') {
            *puVar2 = uVar29;
          }
          else {
            puVar30 = puStack_c8;
            if (puVar2 == (ulong *)0x0) goto LAB_00b3d9c0;
            *puVar2 = uVar29;
            *(undefined1 *)(puVar2 + 1) = 1;
          }
          lVar15 = lVar15 + 0x10;
          bVar8 = uVar27 < (ulong)((long)puStack_c8 - (long)local_d0 >> 4);
          uVar27 = uVar27 + 1;
        } while (bVar8);
      }
      FUN_00b53b7c(&local_e8,*(undefined4 *)(lVar36 + 0x18),1,&local_d0);
      local_70 = local_d8;
      puStack_78 = puStack_e0;
      local_80 = local_e8;
      puVar22 = puStack_e0;
      if (((ulong)local_d8 >> 0x38 & 0x80) == 0) {
        puVar22 = (undefined8 *)((ulong)local_d8 >> 0x38);
      }
      if (puVar22 != (undefined8 *)0x0) {
        uVar27 = *(ulong *)(param_3 + 8);
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 4;
        if ((uVar27 & 1) != 0) {
          uVar27 = *(ulong *)(uVar27 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(param_3 + 0x30,&local_80,uVar27);
      }
      if (puStack_c8 != local_d0) {
        lVar15 = 0;
        uVar27 = 1;
        do {
          if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar27) goto LAB_00b3d998;
          puVar2 = (ulong *)(local_d0 + lVar15);
          uVar29 = (ulong)*(uint *)(*(long *)(*param_2 + uVar27 * 8) + 0x1c);
          if ((char)puVar2[1] == '\x01') {
            *puVar2 = uVar29;
          }
          else {
            puVar30 = puStack_c8;
            if (puVar2 == (ulong *)0x0) goto LAB_00b3d9c0;
            *puVar2 = uVar29;
            *(undefined1 *)(puVar2 + 1) = 1;
          }
          lVar15 = lVar15 + 0x10;
          bVar8 = uVar27 < (ulong)((long)puStack_c8 - (long)local_d0 >> 4);
          uVar27 = uVar27 + 1;
        } while (bVar8);
      }
      FUN_00b53b7c(&local_e8,*(undefined4 *)(lVar36 + 0x1c),1,&local_d0);
      local_70 = local_d8;
      puStack_78 = puStack_e0;
      local_80 = local_e8;
      puVar22 = puStack_e0;
      if (((ulong)local_d8 >> 0x38 & 0x80) == 0) {
        puVar22 = (undefined8 *)((ulong)local_d8 >> 0x38);
      }
      if (puVar22 != (undefined8 *)0x0) {
        uVar27 = *(ulong *)(param_3 + 8);
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 8;
        if ((uVar27 & 1) != 0) {
          uVar27 = *(ulong *)(uVar27 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(param_3 + 0x38,&local_80,uVar27);
      }
      if (puStack_c8 != local_d0) {
        lVar15 = 0;
        uVar27 = 1;
        do {
          if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar27) goto LAB_00b3d998;
          puVar22 = (undefined8 *)(local_d0 + lVar15);
          lVar15 = lVar15 + 0x10;
          uVar32 = *(undefined8 *)(*(long *)(*param_2 + uVar27 * 8) + 0x28);
          *(undefined1 *)(puVar22 + 1) = 1;
          *puVar22 = uVar32;
          bVar8 = uVar27 < (ulong)((long)puStack_c8 - (long)local_d0 >> 4);
          uVar27 = uVar27 + 1;
        } while (bVar8);
      }
      FUN_00b53b7c(&local_e8,*(undefined8 *)(lVar36 + 0x28),1,&local_d0);
      local_70 = local_d8;
      puStack_78 = puStack_e0;
      local_80 = local_e8;
      puVar22 = puStack_e0;
      if (((ulong)local_d8 >> 0x38 & 0x80) == 0) {
        puVar22 = (undefined8 *)((ulong)local_d8 >> 0x38);
      }
      if (puVar22 != (undefined8 *)0x0) {
        uVar27 = *(ulong *)(param_3 + 8);
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x10;
        if ((uVar27 & 1) != 0) {
          uVar27 = *(ulong *)(uVar27 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(param_3 + 0x40,&local_80,uVar27);
      }
      if (puStack_c8 != local_d0) {
        lVar15 = 0;
        uVar27 = 1;
        do {
          if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar27) goto LAB_00b3d998;
          puVar22 = (undefined8 *)(local_d0 + lVar15);
          lVar15 = lVar15 + 0x10;
          uVar32 = *(undefined8 *)(*(long *)(*param_2 + uVar27 * 8) + 0x20);
          *(undefined1 *)(puVar22 + 1) = 1;
          *puVar22 = uVar32;
          bVar8 = uVar27 < (ulong)((long)puStack_c8 - (long)local_d0 >> 4);
          uVar27 = uVar27 + 1;
        } while (bVar8);
      }
      FUN_00b53b7c(&local_e8,*(undefined8 *)(lVar36 + 0x20),1,&local_d0);
      local_70 = local_d8;
      puStack_78 = puStack_e0;
      local_80 = local_e8;
      puVar22 = puStack_e0;
      if (((ulong)local_d8 >> 0x38 & 0x80) == 0) {
        puVar22 = (undefined8 *)((ulong)local_d8 >> 0x38);
      }
      if (puVar22 != (undefined8 *)0x0) {
        uVar27 = *(ulong *)(param_3 + 8);
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x20;
        if ((uVar27 & 1) != 0) {
          uVar27 = *(ulong *)(uVar27 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(param_3 + 0x48,&local_80,uVar27);
      }
      if (puStack_c8 != local_d0) {
        lVar15 = 0;
        uVar27 = 1;
        do {
          if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar27) goto LAB_00b3d998;
          puVar2 = (ulong *)(local_d0 + lVar15);
          lVar15 = lVar15 + 0x10;
          bVar4 = *(byte *)(*(long *)(*param_2 + uVar27 * 8) + 0x12);
          *(undefined1 *)(puVar2 + 1) = 1;
          *puVar2 = (ulong)bVar4;
          bVar8 = uVar27 < (ulong)((long)puStack_c8 - (long)local_d0 >> 4);
          uVar27 = uVar27 + 1;
        } while (bVar8);
      }
      FUN_00b53b7c(&local_e8,*(undefined1 *)(lVar36 + 0x12),1,&local_d0);
      local_70 = local_d8;
      puStack_78 = puStack_e0;
      local_80 = local_e8;
      puVar22 = puStack_e0;
      if (((ulong)local_d8 >> 0x38 & 0x80) == 0) {
        puVar22 = (undefined8 *)((ulong)local_d8 >> 0x38);
      }
      if (puVar22 != (undefined8 *)0x0) {
        uVar27 = *(ulong *)(param_3 + 8);
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x40;
        if ((uVar27 & 1) != 0) {
          uVar27 = *(ulong *)(uVar27 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(param_3 + 0x50,&local_80,uVar27);
      }
      if (puStack_c8 != local_d0) {
        lVar36 = 0;
        uVar27 = 1;
        do {
          if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar27) goto LAB_00b3d998;
          local_e8 = (undefined8 *)CONCAT62(local_e8._2_6_,0xaaaa);
          auVar37 = FUN_007dba34(*(long *)(*param_2 + uVar27 * 8) + 0x10,8);
          if ((auVar37._8_8_ == 0) ||
             (uVar29 = FUN_007d9000(auVar37._0_8_,auVar37._8_8_,&local_e8), (uVar29 & 1) == 0)) {
            if ((ulong)((long)puStack_c8 - (long)local_d0 >> 4) <= uVar27 - 1) goto LAB_00b3d9ac;
            if (local_d0[lVar36 + 8] == '\x01') {
              local_d0[lVar36 + 8] = 0;
            }
          }
          else {
            if ((ulong)((long)puStack_c8 - (long)local_d0 >> 4) <= uVar27 - 1) goto LAB_00b3d9ac;
            puVar2 = (ulong *)(local_d0 + lVar36);
            if ((char)puVar2[1] != '\x01') {
              puVar30 = puStack_c8;
              if (puVar2 == (ulong *)0x0) goto LAB_00b3d9c0;
              *(undefined1 *)(puVar2 + 1) = 1;
            }
            *puVar2 = (ulong)local_e8 & 0xffff;
          }
          lVar36 = lVar36 + 0x10;
          bVar8 = uVar27 < (ulong)((long)puStack_c8 - (long)local_d0 >> 4);
          uVar27 = uVar27 + 1;
        } while (bVar8);
      }
      FUN_00b53b7c(&local_e8,uVar23,uVar25,&local_d0);
      local_70 = local_d8;
      puStack_78 = puStack_e0;
      local_80 = local_e8;
      puVar22 = puStack_e0;
      if (((ulong)local_d8 >> 0x38 & 0x80) == 0) {
        puVar22 = (undefined8 *)((ulong)local_d8 >> 0x38);
      }
      if (puVar22 != (undefined8 *)0x0) {
        uVar23 = *(ulong *)(param_3 + 8);
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x8000000;
        if ((uVar23 & 1) != 0) {
          uVar23 = *(ulong *)(uVar23 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(param_3 + 0xb8,&local_80,uVar23);
      }
      if (puStack_c8 != local_d0) {
        lVar36 = 0;
        uVar23 = 1;
        do {
          if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar23) goto LAB_00b3d998;
          local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,0xaaaaaaaa);
          auVar37 = FUN_007dba34(*(long *)(*param_2 + uVar23 * 8) + 0x10,1);
          if ((auVar37._8_8_ == 0) ||
             (uVar27 = FUN_007d8fa0(auVar37._0_8_,auVar37._8_8_,&local_e8), (uVar27 & 1) == 0)) {
            if ((ulong)((long)puStack_c8 - (long)local_d0 >> 4) <= uVar23 - 1) goto LAB_00b3d9ac;
            if (local_d0[lVar36 + 8] == '\x01') {
              local_d0[lVar36 + 8] = 0;
            }
          }
          else {
            if ((ulong)((long)puStack_c8 - (long)local_d0 >> 4) <= uVar23 - 1) goto LAB_00b3d9ac;
            *(undefined1 *)((long)(local_d0 + lVar36) + 8) = 1;
            *(ulong *)(local_d0 + lVar36) = (ulong)local_e8 & 0xffffffff;
          }
          lVar36 = lVar36 + 0x10;
          bVar8 = uVar23 < (ulong)((long)puStack_c8 - (long)local_d0 >> 4);
          uVar23 = uVar23 + 1;
        } while (bVar8);
      }
      FUN_00b53b7c(&local_e8,uVar10,uVar19,&local_d0);
      local_70 = local_d8;
      puStack_78 = puStack_e0;
      local_80 = local_e8;
      puVar22 = puStack_e0;
      if (((ulong)local_d8 >> 0x38 & 0x80) == 0) {
        puVar22 = (undefined8 *)((ulong)local_d8 >> 0x38);
      }
      if (puVar22 != (undefined8 *)0x0) {
        uVar23 = *(ulong *)(param_3 + 8);
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x10000000;
        if ((uVar23 & 1) != 0) {
          uVar23 = *(ulong *)(uVar23 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(param_3 + 0xc0,&local_80,uVar23);
      }
      if (puStack_c8 != local_d0) {
        lVar36 = 0;
        uVar23 = 1;
        do {
          if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar23) goto LAB_00b3d998;
          local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,0xaaaaaaaa);
          auVar37 = FUN_007dba34(*(long *)(*param_2 + uVar23 * 8) + 0x10,5);
          if ((auVar37._8_8_ == 0) ||
             (uVar10 = FUN_007d8d58(auVar37._0_8_,auVar37._8_8_,&local_e8), (uVar10 & 1) == 0)) {
            if ((ulong)((long)puStack_c8 - (long)local_d0 >> 4) <= uVar23 - 1) goto LAB_00b3d9ac;
            if (local_d0[lVar36 + 8] == '\x01') {
              local_d0[lVar36 + 8] = 0;
            }
          }
          else {
            if ((ulong)((long)puStack_c8 - (long)local_d0 >> 4) <= uVar23 - 1) goto LAB_00b3d9ac;
            puVar2 = (ulong *)(local_d0 + lVar36);
            if ((char)puVar2[1] != '\x01') {
              puVar30 = puStack_c8;
              if (puVar2 == (ulong *)0x0) goto LAB_00b3d9c0;
              *(undefined1 *)(puVar2 + 1) = 1;
            }
            *puVar2 = (ulong)local_e8 & 0xffffffff;
          }
          lVar36 = lVar36 + 0x10;
          bVar8 = uVar23 < (ulong)((long)puStack_c8 - (long)local_d0 >> 4);
          uVar23 = uVar23 + 1;
        } while (bVar8);
      }
      FUN_00b53b7c(&local_e8,uVar11,uVar20,&local_d0);
      local_70 = local_d8;
      puStack_78 = puStack_e0;
      local_80 = local_e8;
      puVar22 = puStack_e0;
      if (((ulong)local_d8 >> 0x38 & 0x80) == 0) {
        puVar22 = (undefined8 *)((ulong)local_d8 >> 0x38);
      }
      if (puVar22 != (undefined8 *)0x0) {
        uVar23 = *(ulong *)(param_3 + 8);
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x20000000;
        if ((uVar23 & 1) != 0) {
          uVar23 = *(ulong *)(uVar23 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(param_3 + 200,&local_80,uVar23);
      }
      if (puStack_c8 != local_d0) {
        lVar36 = 0;
        uVar23 = 1;
        do {
          if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar23) goto LAB_00b3d998;
          local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,0xaaaaaaaa);
          auVar37 = FUN_007dba34(*(long *)(*param_2 + uVar23 * 8) + 0x10,7);
          if ((auVar37._8_8_ == 0) ||
             (uVar10 = FUN_007d90e0(auVar37._0_8_,auVar37._8_8_,&local_e8), (uVar10 & 1) == 0)) {
            if ((ulong)((long)puStack_c8 - (long)local_d0 >> 4) <= uVar23 - 1) goto LAB_00b3d9ac;
            if (local_d0[lVar36 + 8] == '\x01') {
              local_d0[lVar36 + 8] = 0;
            }
          }
          else {
            if ((int)local_e8 == 0x5a) {
              uVar25 = 1;
            }
            else if ((int)local_e8 == 0x10e) {
              uVar25 = 3;
            }
            else if ((int)local_e8 == 0xb4) {
              uVar25 = 2;
            }
            else {
              uVar25 = 0;
            }
            if ((ulong)((long)puStack_c8 - (long)local_d0 >> 4) <= uVar23 - 1) goto LAB_00b3d9ac;
            puVar22 = (undefined8 *)(local_d0 + lVar36);
            if (*(char *)(puVar22 + 1) == '\x01') {
              *puVar22 = uVar25;
            }
            else {
              puVar30 = puStack_c8;
              if (puVar22 == (undefined8 *)0x0) goto LAB_00b3d9c0;
              *puVar22 = uVar25;
              *(undefined1 *)(puVar22 + 1) = 1;
            }
          }
          lVar36 = lVar36 + 0x10;
          bVar8 = uVar23 < (ulong)((long)puStack_c8 - (long)local_d0 >> 4);
          uVar23 = uVar23 + 1;
        } while (bVar8);
      }
      FUN_00b53b7c(&local_e8,uVar26,uVar21,&local_d0);
      local_70 = local_d8;
      puStack_78 = puStack_e0;
      local_80 = local_e8;
      puVar22 = puStack_e0;
      if (((ulong)local_d8 >> 0x38 & 0x80) == 0) {
        puVar22 = (undefined8 *)((ulong)local_d8 >> 0x38);
      }
      if (puVar22 != (undefined8 *)0x0) {
        uVar23 = *(ulong *)(param_3 + 8);
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x40000000;
        if ((uVar23 & 1) != 0) {
          uVar23 = *(ulong *)(uVar23 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(param_3 + 0xd0,&local_80,uVar23);
      }
      if (puStack_c8 != local_d0) {
        lVar36 = 0;
        uVar23 = 1;
        do {
          if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar23) goto LAB_00b3d998;
          lVar15 = *(long *)(*param_2 + uVar23 * 8);
          local_e8 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
          FUN_00659674(&local_e8);
          auVar37 = FUN_007dba34(lVar15 + 0x10,2);
          if ((auVar37._8_8_ == 0) ||
             (uVar10 = FUN_007d8ec0(auVar37._0_8_,auVar37._8_8_,&local_e8), (uVar10 & 1) == 0)) {
            if ((ulong)((long)puStack_c8 - (long)local_d0 >> 4) <= uVar23 - 1) goto LAB_00b3d9ac;
            if (local_d0[lVar36 + 8] == '\x01') {
              local_d0[lVar36 + 8] = 0;
            }
          }
          else {
            if ((ulong)((long)puStack_c8 - (long)local_d0 >> 4) <= uVar23 - 1) goto LAB_00b3d9ac;
            plVar1 = (long *)(local_d0 + lVar36);
            if ((char)plVar1[1] == '\x01') {
              *plVar1 = (long)local_e8._4_4_;
            }
            else {
              puVar30 = puStack_c8;
              if (plVar1 == (long *)0x0) goto LAB_00b3d9c0;
              *plVar1 = (long)local_e8._4_4_;
              *(undefined1 *)(plVar1 + 1) = 1;
            }
          }
          lVar36 = lVar36 + 0x10;
          bVar8 = uVar23 < (ulong)((long)puStack_c8 - (long)local_d0 >> 4);
          uVar23 = uVar23 + 1;
        } while (bVar8);
      }
      FUN_00b53b7c(&local_e8,lVar18,uVar35,&local_d0);
      local_70 = local_d8;
      puStack_78 = puStack_e0;
      local_80 = local_e8;
      puVar22 = puStack_e0;
      if (((ulong)local_d8 >> 0x38 & 0x80) == 0) {
        puVar22 = (undefined8 *)((ulong)local_d8 >> 0x38);
      }
      if (puVar22 != (undefined8 *)0x0) {
        uVar23 = *(ulong *)(param_3 + 8);
        *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | 0x80000000;
        if ((uVar23 & 1) != 0) {
          uVar23 = *(ulong *)(uVar23 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(param_3 + 0xd8,&local_80,uVar23);
      }
      if (puStack_c8 != local_d0) {
        lVar18 = 0;
        uVar23 = 1;
        do {
          if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar23) goto LAB_00b3d998;
          lVar36 = *(long *)(*param_2 + uVar23 * 8);
          local_e8 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
          FUN_00659674(&local_e8);
          auVar37 = FUN_007dba34(lVar36 + 0x10,2);
          if ((auVar37._8_8_ == 0) ||
             (uVar10 = FUN_007d8ec0(auVar37._0_8_,auVar37._8_8_,&local_e8), (uVar10 & 1) == 0)) {
            if ((ulong)((long)puStack_c8 - (long)local_d0 >> 4) <= uVar23 - 1) goto LAB_00b3d9ac;
            if (local_d0[lVar18 + 8] == '\x01') {
              local_d0[lVar18 + 8] = 0;
            }
          }
          else {
            if ((ulong)((long)puStack_c8 - (long)local_d0 >> 4) <= uVar23 - 1) {
LAB_00b3d9ac:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                        );
            }
            puVar2 = (ulong *)(local_d0 + lVar18);
            if ((char)puVar2[1] == '\x01') {
              *puVar2 = (ulong)local_e8 & 0xff;
            }
            else {
              puVar30 = puStack_c8;
              if (puVar2 == (ulong *)0x0) {
LAB_00b3d9c0:
                puStack_c8 = puVar30;
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                          );
              }
              *puVar2 = (ulong)local_e8 & 0xff;
              *(undefined1 *)(puVar2 + 1) = 1;
            }
          }
          lVar18 = lVar18 + 0x10;
          bVar8 = uVar23 < (ulong)((long)puStack_c8 - (long)local_d0 >> 4);
          uVar23 = uVar23 + 1;
        } while (bVar8);
      }
      FUN_00b53b7c(&local_e8,uVar12,uVar35,&local_d0);
      local_70 = local_d8;
      puStack_78 = puStack_e0;
      local_80 = local_e8;
      puVar22 = puStack_e0;
      if (((ulong)local_d8 >> 0x38 & 0x80) == 0) {
        puVar22 = (undefined8 *)((ulong)local_d8 >> 0x38);
      }
      if (puVar22 != (undefined8 *)0x0) {
        uVar23 = *(ulong *)(param_3 + 8);
        *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 1;
        if ((uVar23 & 1) != 0) {
          uVar23 = *(ulong *)(uVar23 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(param_3 + 0xe0,&local_80,uVar23);
      }
      if (puStack_c8 != local_d0) {
        lVar18 = 0;
        uVar23 = 1;
        do {
          if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar23) {
LAB_00b3d998:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                      );
          }
          uVar17 = *(uint *)(*(long *)(*param_2 + uVar23 * 8) + 0x84);
          if ((uVar17 >> 0x10 & 1) == 0) {
            if (local_d0[lVar18 + 8] == '\x01') {
              local_d0[lVar18 + 8] = 0;
            }
          }
          else {
            *(ulong *)(local_d0 + lVar18) = (ulong)uVar17 & 0xffff;
            *(undefined1 *)((long)(local_d0 + lVar18) + 8) = 1;
          }
          lVar18 = lVar18 + 0x10;
          bVar8 = uVar23 < (ulong)((long)puStack_c8 - (long)local_d0 >> 4);
          uVar23 = uVar23 + 1;
        } while (bVar8);
      }
      FUN_00b53b7c(&local_e8,uVar13,uVar28,&local_d0);
      local_70 = local_d8;
      puStack_78 = puStack_e0;
      local_80 = local_e8;
      uVar17 = (uint)(char)((ulong)local_d8 >> 0x38);
      if (-1 < (int)uVar17) {
        puStack_e0 = (undefined8 *)((ulong)local_d8 >> 0x38);
      }
      if (puStack_e0 != (undefined8 *)0x0) {
        uVar23 = *(ulong *)(param_3 + 8);
        *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 2;
        if ((uVar23 & 1) != 0) {
          uVar23 = *(ulong *)(uVar23 & 0xfffffffffffffffe);
        }
        FUN_00713ffc(param_3 + 0xe8,&local_80,uVar23);
        uVar17 = (uint)local_70._7_1_;
      }
      if ((uVar17 >> 7 & 1) != 0) {
        operator_delete(local_80);
      }
      if (local_d0 != (undefined1 *)0x0) {
        uVar23 = (ulong)(((long)local_d0 - (long)puStack_c8 << 0x3c) -
                        ((long)local_d0 - (long)puStack_c8)) >> 4;
        if ((ulong)(puStack_c8 + (-0x10 - ((long)puStack_c8 << 0x3c))) >> 4 <= uVar23) {
          uVar23 = (ulong)(puStack_c8 + (-0x10 - ((long)puStack_c8 << 0x3c))) >> 4;
        }
        puVar34 = puStack_c8;
        if ((1 < uVar23) && ((((int)local_d0 - (int)puStack_c8 | -(int)puStack_c8) & 0xfU) == 0)) {
          uVar23 = uVar23 & 0xffffffffffffffe;
          puVar34 = puStack_c8 + uVar23 * -0x10;
          do {
            uVar23 = uVar23 - 2;
          } while (uVar23 != 0);
        }
        do {
          if (puVar34 == local_d0) {
            puStack_c8 = local_d0;
            operator_delete(local_d0);
            return;
          }
          puVar34 = puVar34 + -0x10;
        } while (puVar34 != (undefined1 *)0x0);
LAB_00b3d984:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
  }
  return;
}


// ===== 00b3dadc  FUN_00b3dadc =====

ulong FUN_00b3dadc(long param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  puVar2 = (ulong *)(param_1 + 0x48);
  if ((uVar7 & 1) == 0) {
    uVar4 = *puVar2;
  }
  else {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    uVar4 = *puVar2;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x50) = 1;
    uVar3 = FUN_00b40288(uVar7);
    *(undefined8 *)(param_1 + 0x48) = uVar3;
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(param_1 + 0x50) == 0) {
        *(undefined4 *)(param_1 + 0x50) = 1;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_1 + 0x48,1,uVar7);
        uVar7 = FUN_00b40288(uVar7);
        *puVar2 = uVar7;
        *(undefined4 *)(*(long *)(param_1 + 0x48) + 3) = 2;
        *(undefined4 *)(param_1 + 0x50) = 2;
      }
    }
    else {
      piVar5 = (int *)(uVar4 - 1);
      iVar1 = *(int *)(param_1 + 0x50);
      if (iVar1 == *piVar5) {
        FUN_00711858(param_1 + 0x48,1,uVar7);
        iVar6 = *(int *)(*puVar2 + 3);
        piVar5 = (int *)(*puVar2 - 1);
      }
      else {
        iVar6 = *(int *)(uVar4 + 3);
        if (0 < iVar6 - iVar1) {
          *(int *)(param_1 + 0x50) = iVar1 + 1;
          puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
          goto LAB_00b3dbf4;
        }
      }
      piVar5[1] = iVar6 + 1;
      iVar1 = *(int *)(param_1 + 0x50);
      *(int *)(param_1 + 0x50) = iVar1 + 1;
      uVar7 = FUN_00b40288(uVar7);
      puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
      *puVar2 = uVar7;
    }
  }
LAB_00b3dbf4:
  uVar7 = *puVar2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
  return uVar7;
}


// ===== 00b3dc18  FUN_00b3dc18 =====

ulong FUN_00b3dc18(long param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  puVar2 = (ulong *)(param_1 + 0x2d0);
  if ((uVar7 & 1) == 0) {
    uVar4 = *puVar2;
  }
  else {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    uVar4 = *puVar2;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x2d8) = 1;
    uVar3 = FUN_00b402d8(uVar7);
    *(undefined8 *)(param_1 + 0x2d0) = uVar3;
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(param_1 + 0x2d8) == 0) {
        *(undefined4 *)(param_1 + 0x2d8) = 1;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_1 + 0x2d0,1,uVar7);
        uVar7 = FUN_00b402d8(uVar7);
        *puVar2 = uVar7;
        *(undefined4 *)(*(long *)(param_1 + 0x2d0) + 3) = 2;
        *(undefined4 *)(param_1 + 0x2d8) = 2;
      }
    }
    else {
      piVar5 = (int *)(uVar4 - 1);
      iVar1 = *(int *)(param_1 + 0x2d8);
      if (iVar1 == *piVar5) {
        FUN_00711858(param_1 + 0x2d0,1,uVar7);
        iVar6 = *(int *)(*puVar2 + 3);
        piVar5 = (int *)(*puVar2 - 1);
      }
      else {
        iVar6 = *(int *)(uVar4 + 3);
        if (0 < iVar6 - iVar1) {
          *(int *)(param_1 + 0x2d8) = iVar1 + 1;
          puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
          goto LAB_00b3dd30;
        }
      }
      piVar5[1] = iVar6 + 1;
      iVar1 = *(int *)(param_1 + 0x2d8);
      *(int *)(param_1 + 0x2d8) = iVar1 + 1;
      uVar7 = FUN_00b402d8(uVar7);
      puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
      *puVar2 = uVar7;
    }
  }
LAB_00b3dd30:
  uVar7 = *puVar2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20000000;
  return uVar7;
}


// ===== 00b3dd54  FUN_00b3dd54 =====

ulong FUN_00b3dd54(long param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  puVar2 = (ulong *)(param_1 + 0x2e8);
  if ((uVar7 & 1) == 0) {
    uVar4 = *puVar2;
  }
  else {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    uVar4 = *puVar2;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x2f0) = 1;
    uVar3 = FUN_00b40328(uVar7);
    *(undefined8 *)(param_1 + 0x2e8) = uVar3;
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(param_1 + 0x2f0) == 0) {
        *(undefined4 *)(param_1 + 0x2f0) = 1;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_1 + 0x2e8,1,uVar7);
        uVar7 = FUN_00b40328(uVar7);
        *puVar2 = uVar7;
        *(undefined4 *)(*(long *)(param_1 + 0x2e8) + 3) = 2;
        *(undefined4 *)(param_1 + 0x2f0) = 2;
      }
    }
    else {
      piVar5 = (int *)(uVar4 - 1);
      iVar1 = *(int *)(param_1 + 0x2f0);
      if (iVar1 == *piVar5) {
        FUN_00711858(param_1 + 0x2e8,1,uVar7);
        iVar6 = *(int *)(*puVar2 + 3);
        piVar5 = (int *)(*puVar2 - 1);
      }
      else {
        iVar6 = *(int *)(uVar4 + 3);
        if (0 < iVar6 - iVar1) {
          *(int *)(param_1 + 0x2f0) = iVar1 + 1;
          puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
          goto LAB_00b3de6c;
        }
      }
      piVar5[1] = iVar6 + 1;
      iVar1 = *(int *)(param_1 + 0x2f0);
      *(int *)(param_1 + 0x2f0) = iVar1 + 1;
      uVar7 = FUN_00b40328(uVar7);
      puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
      *puVar2 = uVar7;
    }
  }
LAB_00b3de6c:
  uVar7 = *puVar2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x40000000;
  return uVar7;
}


// ===== 00b3de90  FUN_00b3de90 =====

ulong FUN_00b3de90(long param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  puVar2 = (ulong *)(param_1 + 0x198);
  if ((uVar7 & 1) == 0) {
    uVar4 = *puVar2;
  }
  else {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    uVar4 = *puVar2;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x1a0) = 1;
    uVar3 = FUN_00b40378(uVar7);
    *(undefined8 *)(param_1 + 0x198) = uVar3;
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(param_1 + 0x1a0) == 0) {
        *(undefined4 *)(param_1 + 0x1a0) = 1;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_1 + 0x198,1,uVar7);
        uVar7 = FUN_00b40378(uVar7);
        *puVar2 = uVar7;
        *(undefined4 *)(*(long *)(param_1 + 0x198) + 3) = 2;
        *(undefined4 *)(param_1 + 0x1a0) = 2;
      }
    }
    else {
      piVar5 = (int *)(uVar4 - 1);
      iVar1 = *(int *)(param_1 + 0x1a0);
      if (iVar1 == *piVar5) {
        FUN_00711858(param_1 + 0x198,1,uVar7);
        iVar6 = *(int *)(*puVar2 + 3);
        piVar5 = (int *)(*puVar2 - 1);
      }
      else {
        iVar6 = *(int *)(uVar4 + 3);
        if (0 < iVar6 - iVar1) {
          *(int *)(param_1 + 0x1a0) = iVar1 + 1;
          puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
          goto LAB_00b3dfa8;
        }
      }
      piVar5[1] = iVar6 + 1;
      iVar1 = *(int *)(param_1 + 0x1a0);
      *(int *)(param_1 + 0x1a0) = iVar1 + 1;
      uVar7 = FUN_00b40378(uVar7);
      puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
      *puVar2 = uVar7;
    }
  }
LAB_00b3dfa8:
  uVar7 = *puVar2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10000;
  return uVar7;
}


// ===== 00b3dfcc  FUN_00b3dfcc =====

ulong FUN_00b3dfcc(long param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  puVar2 = (ulong *)(param_1 + 0x1b0);
  if ((uVar7 & 1) == 0) {
    uVar4 = *puVar2;
  }
  else {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    uVar4 = *puVar2;
  }
  if (uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x1b8) = 1;
    uVar3 = FUN_00b403c8(uVar7);
    *(undefined8 *)(param_1 + 0x1b0) = uVar3;
  }
  else {
    Hint_Prefetch(uVar4,0,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(param_1 + 0x1b8) == 0) {
        *(undefined4 *)(param_1 + 0x1b8) = 1;
      }
      else {
        puVar2 = (ulong *)FUN_00711858(param_1 + 0x1b0,1,uVar7);
        uVar7 = FUN_00b403c8(uVar7);
        *puVar2 = uVar7;
        *(undefined4 *)(*(long *)(param_1 + 0x1b0) + 3) = 2;
        *(undefined4 *)(param_1 + 0x1b8) = 2;
      }
    }
    else {
      piVar5 = (int *)(uVar4 - 1);
      iVar1 = *(int *)(param_1 + 0x1b8);
      if (iVar1 == *piVar5) {
        FUN_00711858(param_1 + 0x1b0,1,uVar7);
        iVar6 = *(int *)(*puVar2 + 3);
        piVar5 = (int *)(*puVar2 - 1);
      }
      else {
        iVar6 = *(int *)(uVar4 + 3);
        if (0 < iVar6 - iVar1) {
          *(int *)(param_1 + 0x1b8) = iVar1 + 1;
          puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
          goto LAB_00b3e0e4;
        }
      }
      piVar5[1] = iVar6 + 1;
      iVar1 = *(int *)(param_1 + 0x1b8);
      *(int *)(param_1 + 0x1b8) = iVar1 + 1;
      uVar7 = FUN_00b403c8(uVar7);
      puVar2 = (ulong *)(piVar5 + (long)iVar1 * 2 + 2);
      *puVar2 = uVar7;
    }
  }
LAB_00b3e0e4:
  uVar7 = *puVar2;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20000;
  return uVar7;
}


// ===== 00b3e108  FUN_00b3e108 =====

void FUN_00b3e108(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00b3e114  FUN_00b3e114 =====

void * FUN_00b3e114(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x30);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x30);
  }
  FUN_00b4c154(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b3e164  FUN_00b3e164 =====

void * FUN_00b3e164(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x20);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x20);
  }
  FUN_00b4c47c(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b3e1b4  FUN_00b3e1b4 =====

undefined8 * FUN_00b3e1b4(long *param_1,undefined8 *param_2)

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
    FUN_00b3e2a8();
LAB_00b3e2a4:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00b3e2a4;
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


// ===== 00b3e2a8  FUN_00b3e2a8 =====

void FUN_00b3e2a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b3e2c0  FUN_00b3e2c0 =====

undefined8 * FUN_00b3e2c0(long *param_1,undefined8 *param_2)

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
    FUN_00b3e3b4();
LAB_00b3e3b0:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00b3e3b0;
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


// ===== 00b3e3b4  FUN_00b3e3b4 =====

void FUN_00b3e3b4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b3e3cc  FUN_00b3e3cc =====

undefined8 * FUN_00b3e3cc(long *param_1,undefined8 *param_2)

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
    FUN_00b3e4c0();
LAB_00b3e4bc:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00b3e4bc;
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


// ===== 00b3e4c0  FUN_00b3e4c0 =====

void FUN_00b3e4c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b3e4d8  FUN_00b3e4d8 =====

undefined8 * FUN_00b3e4d8(long *param_1,undefined8 *param_2)

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
    FUN_00b3e5cc();
LAB_00b3e5c8:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00b3e5c8;
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


// ===== 00b3e5cc  FUN_00b3e5cc =====

void FUN_00b3e5cc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b3e5e4  FUN_00b3e5e4 =====

undefined8 * FUN_00b3e5e4(long *param_1,undefined8 *param_2)

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
    FUN_00b3e6d8();
LAB_00b3e6d4:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00b3e6d4;
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


// ===== 00b3e6d8  FUN_00b3e6d8 =====

void FUN_00b3e6d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b3e6f0  FUN_00b3e6f0 =====

undefined8 * FUN_00b3e6f0(long *param_1,undefined8 *param_2)

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
    FUN_00b3e7e4();
LAB_00b3e7e0:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00b3e7e0;
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


// ===== 00b3e7e4  FUN_00b3e7e4 =====

void FUN_00b3e7e4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b3e7fc  FUN_00b3e7fc =====

undefined8 * FUN_00b3e7fc(long *param_1,undefined8 *param_2)

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
    FUN_00b3e8f0();
LAB_00b3e8ec:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00b3e8ec;
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


// ===== 00b3e8f0  FUN_00b3e8f0 =====

void FUN_00b3e8f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b3e908  FUN_00b3e908 =====

undefined8 * FUN_00b3e908(long *param_1,undefined8 *param_2)

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
    FUN_00b3e9fc();
LAB_00b3e9f8:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00b3e9f8;
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


// ===== 00b3e9fc  FUN_00b3e9fc =====

void FUN_00b3e9fc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b3ea14  FUN_00b3ea14 =====

undefined8 * FUN_00b3ea14(long *param_1,undefined8 *param_2)

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
    FUN_00b3eb08();
LAB_00b3eb04:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00b3eb04;
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


// ===== 00b3eb08  FUN_00b3eb08 =====

void FUN_00b3eb08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b3eb20  FUN_00b3eb20 =====

undefined8 * FUN_00b3eb20(long *param_1,undefined8 *param_2)

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
    FUN_00b3ec14();
LAB_00b3ec10:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00b3ec10;
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


// ===== 00b3ec14  FUN_00b3ec14 =====

void FUN_00b3ec14(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b3ec2c  FUN_00b3ec2c =====

undefined8 * FUN_00b3ec2c(long *param_1,undefined8 *param_2)

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
    FUN_00b3ed20();
LAB_00b3ed1c:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00b3ed1c;
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


// ===== 00b3ed20  FUN_00b3ed20 =====

void FUN_00b3ed20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b3ed38  FUN_00b3ed38 =====

undefined8 * FUN_00b3ed38(long *param_1,undefined8 *param_2)

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
    FUN_00b3ee2c();
LAB_00b3ee28:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00b3ee28;
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


// ===== 00b3ee2c  FUN_00b3ee2c =====

void FUN_00b3ee2c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b3ee44  FUN_00b3ee44 =====

undefined8 * FUN_00b3ee44(long *param_1,undefined8 *param_2)

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
    FUN_00b3ef38();
LAB_00b3ef34:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00b3ef34;
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


// ===== 00b3ef38  FUN_00b3ef38 =====

void FUN_00b3ef38(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b3ef50  FUN_00b3ef50 =====

undefined8 * FUN_00b3ef50(long *param_1,undefined8 *param_2)

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
    FUN_00b3f044();
LAB_00b3f040:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00b3f040;
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


// ===== 00b3f044  FUN_00b3f044 =====

void FUN_00b3f044(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b3f05c  FUN_00b3f05c =====

undefined8 * FUN_00b3f05c(long *param_1,undefined8 *param_2)

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
    FUN_00b3f150();
LAB_00b3f14c:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00b3f14c;
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


// ===== 00b3f150  FUN_00b3f150 =====

void FUN_00b3f150(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b3f168  FUN_00b3f168 =====

undefined8 * FUN_00b3f168(long *param_1,undefined8 *param_2)

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
    FUN_00b3f25c();
LAB_00b3f258:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00b3f258;
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


// ===== 00b3f25c  FUN_00b3f25c =====

void FUN_00b3f25c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b3f274  FUN_00b3f274 =====

undefined8 * FUN_00b3f274(long *param_1,undefined8 *param_2)

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
    FUN_00b3f368();
LAB_00b3f364:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00b3f364;
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


// ===== 00b3f368  FUN_00b3f368 =====

void FUN_00b3f368(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b3f380  FUN_00b3f380 =====

undefined8 * FUN_00b3f380(long *param_1,undefined8 *param_2)

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
    FUN_00b3f474();
LAB_00b3f470:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00b3f470;
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


// ===== 00b3f474  FUN_00b3f474 =====

void FUN_00b3f474(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b3f48c  FUN_00b3f48c =====

undefined8 * FUN_00b3f48c(long *param_1,undefined8 *param_2)

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
    FUN_00b3f580();
LAB_00b3f57c:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00b3f57c;
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


// ===== 00b3f580  FUN_00b3f580 =====

void FUN_00b3f580(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b3f598  FUN_00b3f598 =====

undefined8 * FUN_00b3f598(long *param_1,undefined8 *param_2)

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
    FUN_00b3f68c();
LAB_00b3f688:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00b3f688;
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


// ===== 00b3f68c  FUN_00b3f68c =====

void FUN_00b3f68c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b3f6a4  FUN_00b3f6a4 =====

undefined8 * FUN_00b3f6a4(long *param_1,undefined8 *param_2)

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
    FUN_00b3f798();
LAB_00b3f794:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00b3f794;
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


// ===== 00b3f798  FUN_00b3f798 =====

void FUN_00b3f798(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b3f7b0  FUN_00b3f7b0 =====

undefined8 * FUN_00b3f7b0(long *param_1,undefined8 *param_2)

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
    FUN_00b3f8a4();
LAB_00b3f8a0:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00b3f8a0;
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


// ===== 00b3f8a4  FUN_00b3f8a4 =====

void FUN_00b3f8a4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b3f8bc  FUN_00b3f8bc =====

undefined8 * FUN_00b3f8bc(long *param_1,undefined8 *param_2)

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
    FUN_00b3f9b0();
LAB_00b3f9ac:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00b3f9ac;
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


// ===== 00b3f9b0  FUN_00b3f9b0 =====

void FUN_00b3f9b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b3f9c8  FUN_00b3f9c8 =====

undefined8 * FUN_00b3f9c8(long *param_1,undefined8 *param_2)

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
    FUN_00b3fabc();
LAB_00b3fab8:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00b3fab8;
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


// ===== 00b3fabc  FUN_00b3fabc =====

void FUN_00b3fabc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b3fad4  FUN_00b3fad4 =====

undefined8 * FUN_00b3fad4(long *param_1,undefined8 *param_2)

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
    FUN_00b3fbc8();
LAB_00b3fbc4:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00b3fbc4;
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


// ===== 00b3fbc8  FUN_00b3fbc8 =====

void FUN_00b3fbc8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b3fbe0  FUN_00b3fbe0 =====

void * FUN_00b3fbe0(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x28);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x28);
  }
  FUN_00b519e4(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b3fc30  FUN_00b3fc30 =====

void * FUN_00b3fc30(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x70);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x70);
  }
  FUN_00b500b4(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b3fc80  FUN_00b3fc80 =====

void FUN_00b3fc80(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b3fc98  FUN_00b3fc98 =====

void * FUN_00b3fc98(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x38);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x38);
  }
  FUN_00b4a5bc(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b3fce8  FUN_00b3fce8 =====

void * FUN_00b3fce8(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x48);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x48);
  }
  FUN_00b4abe8(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b3fd38  FUN_00b3fd38 =====

void * FUN_00b3fd38(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x30);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x30);
  }
  FUN_00b4f65c(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b3fd88  FUN_00b3fd88 =====

void * FUN_00b3fd88(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x30);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x30);
  }
  FUN_00b4e720(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b3fdd8  FUN_00b3fdd8 =====

void * FUN_00b3fdd8(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x30);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x30);
  }
  FUN_00b4fbcc(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b3fe28  FUN_00b3fe28 =====

void * FUN_00b3fe28(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x48);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x48);
  }
  FUN_00b4d02c(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b3fe78  FUN_00b3fe78 =====

void * FUN_00b3fe78(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x50);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x50);
  }
  FUN_00b4c66c(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b3fec8  FUN_00b3fec8 =====

void * FUN_00b3fec8(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x78);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x78);
  }
  FUN_00b4d83c(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b3ff18  FUN_00b3ff18 =====

void * FUN_00b3ff18(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x28);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x28);
  }
  FUN_00b527f8(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b3ff68  FUN_00b3ff68 =====

void * FUN_00b3ff68(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x28);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x28);
  }
  FUN_00b52ac4(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b3ffb8  FUN_00b3ffb8 =====

void * FUN_00b3ffb8(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x30);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x30);
  }
  FUN_00b50ea0(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b40008  FUN_00b40008 =====

void * FUN_00b40008(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x28);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x28);
  }
  FUN_00b5167c(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b40058  FUN_00b40058 =====

void * FUN_00b40058(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x28);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x28);
  }
  FUN_00b5131c(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b400a8  FUN_00b400a8 =====

void * FUN_00b400a8(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x28);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x28);
  }
  FUN_00b52d44(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b400f8  FUN_00b400f8 =====

void * FUN_00b400f8(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x48);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x48);
  }
  FUN_00b53054(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b40148  FUN_00b40148 =====

void * FUN_00b40148(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x40);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x40);
  }
  FUN_00b497e4(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b40198  FUN_00b40198 =====

void * FUN_00b40198(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x40);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x40);
  }
  FUN_00b49ed0(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b401e8  FUN_00b401e8 =====

void * FUN_00b401e8(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0xf0);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0xf0);
  }
  FUN_00b458f4(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b40238  FUN_00b40238 =====

void * FUN_00b40238(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x78);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x78);
  }
  FUN_00b4b36c(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b40288  FUN_00b40288 =====

void * FUN_00b40288(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0xf0);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0xf0);
  }
  FUN_00b4786c(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b402d8  FUN_00b402d8 =====

void * FUN_00b402d8(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x38);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x38);
  }
  FUN_00b4eae8(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b40328  FUN_00b40328 =====

void * FUN_00b40328(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x30);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x30);
  }
  FUN_00b4f0ec(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b40378  FUN_00b40378 =====

void * FUN_00b40378(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x48);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x48);
  }
  FUN_00b51c64(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b403c8  FUN_00b403c8 =====

void * FUN_00b403c8(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x30);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x30);
  }
  FUN_00b523fc(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b40418  FUN_00b40418 =====

void FUN_00b40418(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00b40418(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
LAB_00b404f8:
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
          if (pvVar2 == (void *)0x0) goto LAB_00b404f8;
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


// ===== 00b4050c  FUN_00b4050c =====

void FUN_00b4050c(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00b4050c(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
LAB_00b405ec:
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
          if (pvVar2 == (void *)0x0) goto LAB_00b405ec;
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


// ===== 00b40600  FUN_00b40600 =====

void FUN_00b40600(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00b40600(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
LAB_00b406e0:
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
          if (pvVar2 == (void *)0x0) goto LAB_00b406e0;
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


// ===== 00b406f4  FUN_00b406f4 =====

undefined1  [16]
FUN_00b406f4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
        if ((long *)*plVar3 == (long *)0x0) goto LAB_00b4075c;
      }
      if (uVar1 == *(uint *)(plVar3 + 4)) {
        uVar5 = 0;
        goto LAB_00b407d0;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_00b4075c:
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
LAB_00b407d0:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 00b40800  FUN_00b40800 =====

undefined1  [16]
FUN_00b40800(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
        if ((long *)*plVar3 == (long *)0x0) goto LAB_00b40868;
      }
      if (uVar1 == *(uint *)(plVar3 + 4)) {
        uVar5 = 0;
        goto LAB_00b408dc;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_00b40868:
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
LAB_00b408dc:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 00b4090c  FUN_00b4090c =====

undefined1  [16]
FUN_00b4090c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
        if ((long *)*plVar3 == (long *)0x0) goto LAB_00b40974;
      }
      if (uVar1 == *(uint *)(plVar3 + 4)) {
        uVar5 = 0;
        goto LAB_00b409e8;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_00b40974:
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
LAB_00b409e8:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 00b40a18  FUN_00b40a18 =====

void * FUN_00b40a18(long param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = operator_new(0x48);
  }
  else {
    pvVar1 = (void *)FUN_006fdbf0(param_1,0x48);
  }
  FUN_00b44e70(pvVar1,param_1);
  return pvVar1;
}


// ===== 00b40a68  FUN_00b40a68 =====

void FUN_00b40a68(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d44cc8;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[5] = param_2;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = param_2;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xb] = param_2;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = param_2;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = param_2;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = param_2;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = param_2;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = param_2;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = param_2;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = param_2;
  param_1[0x23] = param_2;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = param_2;
  param_1[0x29] = param_2;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2c] = param_2;
  param_1[0x2f] = param_2;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x32] = param_2;
  param_1[0x35] = param_2;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x38] = param_2;
  param_1[0x3b] = param_2;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3e] = param_2;
  param_1[0x41] = param_2;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x44] = param_2;
  param_1[0x47] = param_2;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4a] = param_2;
  param_1[0x4d] = param_2;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x50] = param_2;
  param_1[0x53] = param_2;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x56] = param_2;
  param_1[0x59] = param_2;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x5c] = param_2;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5f] = param_2;
  return;
}


// ===== 00b40ba8  FUN_00b40ba8 =====

void FUN_00b40ba8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00b53858(param_1 + 0x10);
  return;
}


// ===== 00b40bdc  FUN_00b40bdc =====

void FUN_00b40bdc(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00b53858((long)param_1 + 0x10);
  operator_delete(param_1);
  return;
}


// ===== 00b40c1c  FUN_00b40c1c =====

void FUN_00b40c1c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if (((uVar1 & 1) != 0) && (*(int *)(param_2 + 0x20) != 0)) {
      FUN_00711e1c(param_1 + 0x18,param_2 + 0x18,uVar2);
    }
    if (((uVar1 >> 1 & 1) != 0) && (*(int *)(param_2 + 0x38) != 0)) {
      FUN_00711e1c(param_1 + 0x30,param_2 + 0x30,uVar2);
    }
    if (((uVar1 >> 2 & 1) != 0) && (*(int *)(param_2 + 0x50) != 0)) {
      FUN_00711e1c(param_1 + 0x48,param_2 + 0x48,uVar2);
    }
    if (((uVar1 >> 3 & 1) != 0) && (*(int *)(param_2 + 0x68) != 0)) {
      FUN_00711e1c(param_1 + 0x60,param_2 + 0x60,uVar2);
    }
    if (((uVar1 >> 4 & 1) != 0) && (*(int *)(param_2 + 0x80) != 0)) {
      FUN_00711e1c(param_1 + 0x78,param_2 + 0x78,uVar2);
    }
    if (((uVar1 >> 5 & 1) != 0) && (*(int *)(param_2 + 0x98) != 0)) {
      FUN_00711e1c(param_1 + 0x90,param_2 + 0x90,uVar2);
    }
    if (((uVar1 >> 6 & 1) != 0) && (*(int *)(param_2 + 0xb0) != 0)) {
      FUN_00711e1c(param_1 + 0xa8,param_2 + 0xa8,uVar2);
    }
    if (((uVar1 >> 7 & 1) != 0) && (*(int *)(param_2 + 200) != 0)) {
      FUN_00711e1c(param_1 + 0xc0,param_2 + 0xc0,uVar2);
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if (((uVar1 >> 8 & 1) != 0) && (*(int *)(param_2 + 0xe0) != 0)) {
      FUN_00711e1c(param_1 + 0xd8,param_2 + 0xd8,uVar2);
    }
    if (((uVar1 >> 9 & 1) != 0) && (*(int *)(param_2 + 0xf8) != 0)) {
      FUN_00711e1c(param_1 + 0xf0,param_2 + 0xf0,uVar2);
    }
    if (((uVar1 >> 10 & 1) != 0) && (*(int *)(param_2 + 0x110) != 0)) {
      FUN_00711e1c(param_1 + 0x108,param_2 + 0x108,uVar2);
    }
    if (((uVar1 >> 0xb & 1) != 0) && (*(int *)(param_2 + 0x128) != 0)) {
      FUN_00711e1c(param_1 + 0x120,param_2 + 0x120,uVar2);
    }
    if (((uVar1 >> 0xc & 1) != 0) && (*(int *)(param_2 + 0x140) != 0)) {
      FUN_00711e1c(param_1 + 0x138,param_2 + 0x138,uVar2);
    }
    if (((uVar1 >> 0xd & 1) != 0) && (*(int *)(param_2 + 0x158) != 0)) {
      FUN_00711e1c(param_1 + 0x150,param_2 + 0x150,uVar2);
    }
    if (((uVar1 >> 0xe & 1) != 0) && (*(int *)(param_2 + 0x170) != 0)) {
      FUN_00711e1c(param_1 + 0x168,param_2 + 0x168,uVar2);
    }
    if (((uVar1 >> 0xf & 1) != 0) && (*(int *)(param_2 + 0x188) != 0)) {
      FUN_00711e1c(param_1 + 0x180,param_2 + 0x180,uVar2);
    }
  }
  if ((uVar1 & 0xff0000) != 0) {
    if (((uVar1 >> 0x10 & 1) != 0) && (*(int *)(param_2 + 0x1a0) != 0)) {
      FUN_00711e1c(param_1 + 0x198,param_2 + 0x198,uVar2);
    }
    if (((uVar1 >> 0x11 & 1) != 0) && (*(int *)(param_2 + 0x1b8) != 0)) {
      FUN_00711e1c(param_1 + 0x1b0,param_2 + 0x1b0,uVar2);
    }
    if (((uVar1 >> 0x12 & 1) != 0) && (*(int *)(param_2 + 0x1d0) != 0)) {
      FUN_00711e1c(param_1 + 0x1c8,param_2 + 0x1c8,uVar2);
    }
    if (((uVar1 >> 0x13 & 1) != 0) && (*(int *)(param_2 + 0x1e8) != 0)) {
      FUN_00711e1c(param_1 + 0x1e0,param_2 + 0x1e0,uVar2);
    }
    if (((uVar1 >> 0x14 & 1) != 0) && (*(int *)(param_2 + 0x200) != 0)) {
      FUN_00711e1c(param_1 + 0x1f8,param_2 + 0x1f8,uVar2);
    }
    if (((uVar1 >> 0x15 & 1) != 0) && (*(int *)(param_2 + 0x218) != 0)) {
      FUN_00711e1c(param_1 + 0x210,param_2 + 0x210,uVar2);
    }
    if (((uVar1 >> 0x16 & 1) != 0) && (*(int *)(param_2 + 0x230) != 0)) {
      FUN_00711e1c(param_1 + 0x228,param_2 + 0x228,uVar2);
    }
    if (((uVar1 >> 0x17 & 1) != 0) && (*(int *)(param_2 + 0x248) != 0)) {
      FUN_00711e1c(param_1 + 0x240,param_2 + 0x240,uVar2);
    }
  }
  if ((uVar1 & 0x7f000000) != 0) {
    if (((uVar1 >> 0x18 & 1) != 0) && (*(int *)(param_2 + 0x260) != 0)) {
      FUN_00711e1c(param_1 + 600,param_2 + 600,uVar2);
    }
    if (((uVar1 >> 0x19 & 1) != 0) && (*(int *)(param_2 + 0x278) != 0)) {
      FUN_00711e1c(param_1 + 0x270,param_2 + 0x270,uVar2);
    }
    if (((uVar1 >> 0x1a & 1) != 0) && (*(int *)(param_2 + 0x290) != 0)) {
      FUN_00711e1c(param_1 + 0x288,param_2 + 0x288,uVar2);
    }
    if (((uVar1 >> 0x1b & 1) != 0) && (*(int *)(param_2 + 0x2a8) != 0)) {
      FUN_00711e1c(param_1 + 0x2a0,param_2 + 0x2a0,uVar2);
    }
    if (((uVar1 >> 0x1c & 1) != 0) && (*(int *)(param_2 + 0x2c0) != 0)) {
      FUN_00711e1c(param_1 + 0x2b8,param_2 + 0x2b8,uVar2);
    }
    if (((uVar1 >> 0x1d & 1) != 0) && (*(int *)(param_2 + 0x2d8) != 0)) {
      FUN_00711e1c(param_1 + 0x2d0,param_2 + 0x2d0,uVar2);
    }
    if (((uVar1 >> 0x1e & 1) != 0) && (*(int *)(param_2 + 0x2f0) != 0)) {
      FUN_00711e1c(param_1 + 0x2e8,param_2 + 0x2e8,uVar2);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcb04((ulong *)(param_1 + 8),(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  return;
}


// ===== 00b4102c  FUN_00b4102c =====

undefined8 * FUN_00b4102c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_2 = &PTR_FUN_00d44cc8;
  param_2[1] = param_3;
  param_2[2] = 0;
  param_2[5] = param_3;
  param_2[0x22] = 0;
  param_2[0x21] = 0;
  param_2[0x28] = 0;
  param_2[0x27] = 0;
  param_2[0x2e] = 0;
  param_2[0x2d] = 0;
  param_2[0x34] = 0;
  param_2[0x33] = 0;
  param_2[0x3a] = 0;
  param_2[0x39] = 0;
  param_2[0x40] = 0;
  param_2[0x3f] = 0;
  param_2[0x46] = 0;
  param_2[0x45] = 0;
  param_2[0x4c] = 0;
  param_2[0x4b] = 0;
  param_2[0x52] = 0;
  param_2[0x51] = 0;
  param_2[0x58] = 0;
  param_2[0x57] = 0;
  param_2[4] = 0;
  param_2[3] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[8] = param_3;
  param_2[10] = 0;
  param_2[9] = 0;
  param_2[0xb] = param_3;
  param_2[0xd] = 0;
  param_2[0xc] = 0;
  param_2[0xe] = param_3;
  param_2[0x10] = 0;
  param_2[0xf] = 0;
  param_2[0x11] = param_3;
  param_2[0x13] = 0;
  param_2[0x12] = 0;
  param_2[0x14] = param_3;
  param_2[0x16] = 0;
  param_2[0x15] = 0;
  param_2[0x17] = param_3;
  param_2[0x19] = 0;
  param_2[0x18] = 0;
  param_2[0x1a] = param_3;
  param_2[0x1c] = 0;
  param_2[0x1b] = 0;
  param_2[0x1d] = param_3;
  param_2[0x1f] = 0;
  param_2[0x1e] = 0;
  param_2[0x20] = param_3;
  param_2[0x23] = param_3;
  param_2[0x25] = 0;
  param_2[0x24] = 0;
  param_2[0x26] = param_3;
  param_2[0x29] = param_3;
  param_2[0x2b] = 0;
  param_2[0x2a] = 0;
  param_2[0x2c] = param_3;
  param_2[0x2f] = param_3;
  param_2[0x31] = 0;
  param_2[0x30] = 0;
  param_2[0x32] = param_3;
  param_2[0x35] = param_3;
  param_2[0x37] = 0;
  param_2[0x36] = 0;
  param_2[0x38] = param_3;
  param_2[0x3b] = param_3;
  param_2[0x3d] = 0;
  param_2[0x3c] = 0;
  param_2[0x3e] = param_3;
  param_2[0x41] = param_3;
  param_2[0x43] = 0;
  param_2[0x42] = 0;
  param_2[0x44] = param_3;
  param_2[0x47] = param_3;
  param_2[0x49] = 0;
  param_2[0x48] = 0;
  param_2[0x4a] = param_3;
  param_2[0x4d] = param_3;
  param_2[0x4f] = 0;
  param_2[0x4e] = 0;
  param_2[0x50] = param_3;
  param_2[0x53] = param_3;
  param_2[0x55] = 0;
  param_2[0x54] = 0;
  param_2[0x56] = param_3;
  param_2[0x59] = param_3;
  param_2[0x5b] = 0;
  param_2[0x5a] = 0;
  param_2[0x5c] = param_3;
  param_2[0x5e] = 0;
  param_2[0x5d] = 0;
  param_2[0x5f] = param_3;
  return param_2;
}


// ===== 00b41170  FUN_00b41170 =====

undefined ** FUN_00b41170(void)

{
  return &PTR_PTR_00d44cf8;
}


// ===== 00b41180  FUN_00b41180 =====

void FUN_00b41180(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if (((uVar1 & 1) != 0) && (0 < *(int *)(param_1 + 0x20))) {
      FUN_006dbb58(param_1 + 0x18);
    }
    if (((uVar1 >> 1 & 1) != 0) && (0 < *(int *)(param_1 + 0x38))) {
      FUN_006dbb58(param_1 + 0x30);
    }
    if (((uVar1 >> 2 & 1) != 0) && (0 < *(int *)(param_1 + 0x50))) {
      FUN_006dbb58(param_1 + 0x48);
    }
    if (((uVar1 >> 3 & 1) != 0) && (0 < *(int *)(param_1 + 0x68))) {
      FUN_006dbb58(param_1 + 0x60);
    }
    if (((uVar1 >> 4 & 1) != 0) && (0 < *(int *)(param_1 + 0x80))) {
      FUN_006dbb58(param_1 + 0x78);
    }
    if (((uVar1 >> 5 & 1) != 0) && (0 < *(int *)(param_1 + 0x98))) {
      FUN_006dbb58(param_1 + 0x90);
    }
    if (((uVar1 >> 6 & 1) != 0) && (0 < *(int *)(param_1 + 0xb0))) {
      FUN_006dbb58(param_1 + 0xa8);
    }
    if (((uVar1 >> 7 & 1) != 0) && (0 < *(int *)(param_1 + 200))) {
      FUN_006dbb58(param_1 + 0xc0);
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if (((uVar1 >> 8 & 1) != 0) && (0 < *(int *)(param_1 + 0xe0))) {
      FUN_006dbb58(param_1 + 0xd8);
    }
    if (((uVar1 >> 9 & 1) != 0) && (0 < *(int *)(param_1 + 0xf8))) {
      FUN_006dbb58(param_1 + 0xf0);
    }
    if (((uVar1 >> 10 & 1) != 0) && (0 < *(int *)(param_1 + 0x110))) {
      FUN_006dbb58(param_1 + 0x108);
    }
    if (((uVar1 >> 0xb & 1) != 0) && (0 < *(int *)(param_1 + 0x128))) {
      FUN_006dbb58(param_1 + 0x120);
    }
    if (((uVar1 >> 0xc & 1) != 0) && (0 < *(int *)(param_1 + 0x140))) {
      FUN_006dbb58(param_1 + 0x138);
    }
    if (((uVar1 >> 0xd & 1) != 0) && (0 < *(int *)(param_1 + 0x158))) {
      FUN_006dbb58(param_1 + 0x150);
    }
    if (((uVar1 >> 0xe & 1) != 0) && (0 < *(int *)(param_1 + 0x170))) {
      FUN_006dbb58(param_1 + 0x168);
    }
    if (((uVar1 >> 0xf & 1) != 0) && (0 < *(int *)(param_1 + 0x188))) {
      FUN_006dbb58(param_1 + 0x180);
    }
  }
  if ((uVar1 & 0xff0000) != 0) {
    if (((uVar1 >> 0x10 & 1) != 0) && (0 < *(int *)(param_1 + 0x1a0))) {
      FUN_006dbb58(param_1 + 0x198);
    }
    if (((uVar1 >> 0x11 & 1) != 0) && (0 < *(int *)(param_1 + 0x1b8))) {
      FUN_006dbb58(param_1 + 0x1b0);
    }
    if (((uVar1 >> 0x12 & 1) != 0) && (0 < *(int *)(param_1 + 0x1d0))) {
      FUN_006dbb58(param_1 + 0x1c8);
    }
    if (((uVar1 >> 0x13 & 1) != 0) && (0 < *(int *)(param_1 + 0x1e8))) {
      FUN_006dbb58(param_1 + 0x1e0);
    }
    if (((uVar1 >> 0x14 & 1) != 0) && (0 < *(int *)(param_1 + 0x200))) {
      FUN_006dbb58(param_1 + 0x1f8);
    }
    if (((uVar1 >> 0x15 & 1) != 0) && (0 < *(int *)(param_1 + 0x218))) {
      FUN_006dbb58(param_1 + 0x210);
    }
    if (((uVar1 >> 0x16 & 1) != 0) && (0 < *(int *)(param_1 + 0x230))) {
      FUN_006dbb58(param_1 + 0x228);
    }
    if (((uVar1 >> 0x17 & 1) != 0) && (0 < *(int *)(param_1 + 0x248))) {
      FUN_006dbb58(param_1 + 0x240);
    }
  }
  if ((uVar1 & 0x7f000000) != 0) {
    if (((uVar1 >> 0x18 & 1) != 0) && (0 < *(int *)(param_1 + 0x260))) {
      FUN_006dbb58(param_1 + 600);
    }
    if (((uVar1 >> 0x19 & 1) != 0) && (0 < *(int *)(param_1 + 0x278))) {
      FUN_006dbb58(param_1 + 0x270);
    }
    if (((uVar1 >> 0x1a & 1) != 0) && (0 < *(int *)(param_1 + 0x290))) {
      FUN_006dbb58(param_1 + 0x288);
    }
    if (((uVar1 >> 0x1b & 1) != 0) && (0 < *(int *)(param_1 + 0x2a8))) {
      FUN_006dbb58(param_1 + 0x2a0);
    }
    if (((uVar1 >> 0x1c & 1) != 0) && (0 < *(int *)(param_1 + 0x2c0))) {
      FUN_006dbb58(param_1 + 0x2b8);
    }
    if (((uVar1 >> 0x1d & 1) != 0) && (0 < *(int *)(param_1 + 0x2d8))) {
      FUN_006dbb58(param_1 + 0x2d0);
    }
    if (((uVar1 >> 0x1e & 1) != 0) && (0 < *(int *)(param_1 + 0x2f0))) {
      FUN_006dbb58(param_1 + 0x2e8);
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0((byte *)(param_1 + 8));
  return;
}


// ===== 00b414d0  FUN_00b414d0 =====

void * FUN_00b414d0(long param_1,void *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if (((uVar2 & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x20), iVar3 != 0)) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)(param_1 + 0x20) <= iVar7)) {
        FUN_006fc6ec(iVar7);
      }
      uVar5 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
      }
      param_2 = (void *)FUN_006fc2f0(1,*puVar1,*(undefined4 *)(*puVar1 + 0x10),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (((uVar2 >> 1 & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x38), iVar3 != 0)) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)(param_1 + 0x38) <= iVar7)) {
        FUN_006fc6ec(iVar7);
      }
      uVar5 = *(ulong *)(param_1 + 0x30);
      puVar1 = (ulong *)(param_1 + 0x30);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
      }
      param_2 = (void *)FUN_006fc2f0(2,*puVar1,*(undefined4 *)(*puVar1 + 0x18),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (((uVar2 >> 2 & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x50), iVar3 != 0)) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)(param_1 + 0x50) <= iVar7)) {
        FUN_006fc6ec(iVar7);
      }
      uVar5 = *(ulong *)(param_1 + 0x48);
      puVar1 = (ulong *)(param_1 + 0x48);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
      }
      param_2 = (void *)FUN_006fc2f0(3,*puVar1,*(undefined4 *)(*puVar1 + 0x18),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (((uVar2 >> 3 & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x68), iVar3 != 0)) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)(param_1 + 0x68) <= iVar7)) {
        FUN_006fc6ec(iVar7);
      }
      uVar5 = *(ulong *)(param_1 + 0x60);
      puVar1 = (ulong *)(param_1 + 0x60);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
      }
      param_2 = (void *)FUN_006fc2f0(4,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (((uVar2 >> 4 & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x80), iVar3 != 0)) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)(param_1 + 0x80) <= iVar7)) {
        FUN_006fc6ec(iVar7);
      }
      uVar5 = *(ulong *)(param_1 + 0x78);
      puVar1 = (ulong *)(param_1 + 0x78);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
      }
      param_2 = (void *)FUN_006fc2f0(5,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (((uVar2 >> 5 & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x98), iVar3 != 0)) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)(param_1 + 0x98) <= iVar7)) {
        FUN_006fc6ec(iVar7);
      }
      uVar5 = *(ulong *)(param_1 + 0x90);
      puVar1 = (ulong *)(param_1 + 0x90);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
      }
      param_2 = (void *)FUN_006fc2f0(6,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (((uVar2 >> 6 & 1) != 0) && (iVar3 = *(int *)(param_1 + 0xb0), iVar3 != 0)) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)(param_1 + 0xb0) <= iVar7)) {
        FUN_006fc6ec(iVar7);
      }
      uVar5 = *(ulong *)(param_1 + 0xa8);
      puVar1 = (ulong *)(param_1 + 0xa8);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
      }
      param_2 = (void *)FUN_006fc2f0(7,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (((uVar2 >> 7 & 1) != 0) && (iVar3 = *(int *)(param_1 + 200), iVar3 != 0)) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)(param_1 + 200) <= iVar7)) {
        FUN_006fc6ec(iVar7);
      }
      uVar5 = *(ulong *)(param_1 + 0xc0);
      puVar1 = (ulong *)(param_1 + 0xc0);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
      }
      param_2 = (void *)FUN_006fc2f0(0x10,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (((uVar2 >> 8 & 1) != 0) && (iVar3 = *(int *)(param_1 + 0xe0), iVar3 != 0)) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)(param_1 + 0xe0) <= iVar7)) {
        FUN_006fc6ec(iVar7);
      }
      uVar5 = *(ulong *)(param_1 + 0xd8);
      puVar1 = (ulong *)(param_1 + 0xd8);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
      }
      param_2 = (void *)FUN_006fc2f0(0x11,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (((uVar2 >> 9 & 1) != 0) && (iVar3 = *(int *)(param_1 + 0xf8), iVar3 != 0)) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)(param_1 + 0xf8) <= iVar7)) {
        FUN_006fc6ec(iVar7);
      }
      uVar5 = *(ulong *)(param_1 + 0xf0);
      puVar1 = (ulong *)(param_1 + 0xf0);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
      }
      param_2 = (void *)FUN_006fc2f0(0x12,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (((uVar2 >> 10 & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x110), iVar3 != 0)) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)(param_1 + 0x110) <= iVar7)) {
        FUN_006fc6ec(iVar7);
      }
      uVar5 = *(ulong *)(param_1 + 0x108);
      puVar1 = (ulong *)(param_1 + 0x108);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
      }
      param_2 = (void *)FUN_006fc2f0(0x13,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (((uVar2 >> 0xb & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x128), iVar3 != 0)) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)(param_1 + 0x128) <= iVar7)) {
        FUN_006fc6ec(iVar7);
      }
      uVar5 = *(ulong *)(param_1 + 0x120);
      puVar1 = (ulong *)(param_1 + 0x120);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
      }
      param_2 = (void *)FUN_006fc2f0(0x14,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (((uVar2 >> 0xc & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x140), iVar3 != 0)) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)(param_1 + 0x140) <= iVar7)) {
        FUN_006fc6ec(iVar7);
      }
      uVar5 = *(ulong *)(param_1 + 0x138);
      puVar1 = (ulong *)(param_1 + 0x138);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
      }
      param_2 = (void *)FUN_006fc2f0(0x15,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (((uVar2 >> 0xd & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x158), iVar3 != 0)) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)(param_1 + 0x158) <= iVar7)) {
        FUN_006fc6ec(iVar7);
      }
      uVar5 = *(ulong *)(param_1 + 0x150);
      puVar1 = (ulong *)(param_1 + 0x150);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
      }
      param_2 = (void *)FUN_006fc2f0(0x16,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (((uVar2 >> 0xe & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x170), iVar3 != 0)) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)(param_1 + 0x170) <= iVar7)) {
        FUN_006fc6ec(iVar7);
      }
      uVar5 = *(ulong *)(param_1 + 0x168);
      puVar1 = (ulong *)(param_1 + 0x168);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
      }
      param_2 = (void *)FUN_006fc2f0(0x17,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (((uVar2 >> 0xf & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x188), iVar3 != 0)) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)(param_1 + 0x188) <= iVar7)) {
        FUN_006fc6ec(iVar7);
      }
      uVar5 = *(ulong *)(param_1 + 0x180);
      puVar1 = (ulong *)(param_1 + 0x180);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
      }
      param_2 = (void *)FUN_006fc2f0(0x18,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (((uVar2 >> 0x10 & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x1a0), iVar3 != 0)) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)(param_1 + 0x1a0) <= iVar7)) {
        FUN_006fc6ec(iVar7);
      }
      uVar5 = *(ulong *)(param_1 + 0x198);
      puVar1 = (ulong *)(param_1 + 0x198);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
      }
      param_2 = (void *)FUN_006fc2f0(0x19,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (((uVar2 >> 0x11 & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x1b8), iVar3 != 0)) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)(param_1 + 0x1b8) <= iVar7)) {
        FUN_006fc6ec(iVar7);
      }
      uVar5 = *(ulong *)(param_1 + 0x1b0);
      puVar1 = (ulong *)(param_1 + 0x1b0);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
      }
      param_2 = (void *)FUN_006fc2f0(0x1a,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (((uVar2 >> 0x12 & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x1d0), iVar3 != 0)) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)(param_1 + 0x1d0) <= iVar7)) {
        FUN_006fc6ec(iVar7);
      }
      uVar5 = *(ulong *)(param_1 + 0x1c8);
      puVar1 = (ulong *)(param_1 + 0x1c8);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
      }
      param_2 = (void *)FUN_006fc2f0(0x1b,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (((uVar2 >> 0x13 & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x1e8), iVar3 != 0)) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)(param_1 + 0x1e8) <= iVar7)) {
        FUN_006fc6ec(iVar7);
      }
      uVar5 = *(ulong *)(param_1 + 0x1e0);
      puVar1 = (ulong *)(param_1 + 0x1e0);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
      }
      param_2 = (void *)FUN_006fc2f0(0x1c,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (((uVar2 >> 0x14 & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x200), iVar3 != 0)) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)(param_1 + 0x200) <= iVar7)) {
        FUN_006fc6ec(iVar7);
      }
      uVar5 = *(ulong *)(param_1 + 0x1f8);
      puVar1 = (ulong *)(param_1 + 0x1f8);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
      }
      param_2 = (void *)FUN_006fc2f0(0x1d,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (((uVar2 >> 0x15 & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x218), iVar3 != 0)) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)(param_1 + 0x218) <= iVar7)) {
        FUN_006fc6ec(iVar7);
      }
      uVar5 = *(ulong *)(param_1 + 0x210);
      puVar1 = (ulong *)(param_1 + 0x210);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
      }
      param_2 = (void *)FUN_006fc2f0(0x1e,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (((uVar2 >> 0x16 & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x230), iVar3 != 0)) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)(param_1 + 0x230) <= iVar7)) {
        FUN_006fc6ec(iVar7);
      }
      uVar5 = *(ulong *)(param_1 + 0x228);
      puVar1 = (ulong *)(param_1 + 0x228);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
      }
      param_2 = (void *)FUN_006fc2f0(0x1f,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (((uVar2 >> 0x17 & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x248), iVar3 != 0)) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)(param_1 + 0x248) <= iVar7)) {
        FUN_006fc6ec(iVar7);
      }
      uVar5 = *(ulong *)(param_1 + 0x240);
      puVar1 = (ulong *)(param_1 + 0x240);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
      }
      param_2 = (void *)FUN_006fc2f0(0x20,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (((uVar2 >> 0x18 & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x260), iVar3 != 0)) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)(param_1 + 0x260) <= iVar7)) {
        FUN_006fc6ec(iVar7);
      }
      uVar5 = *(ulong *)(param_1 + 600);
      puVar1 = (ulong *)(param_1 + 600);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
      }
      param_2 = (void *)FUN_006fc2f0(0x21,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (((uVar2 >> 0x19 & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x278), iVar3 != 0)) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)(param_1 + 0x278) <= iVar7)) {
        FUN_006fc6ec(iVar7);
      }
      uVar5 = *(ulong *)(param_1 + 0x270);
      puVar1 = (ulong *)(param_1 + 0x270);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
      }
      param_2 = (void *)FUN_006fc2f0(0x22,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (((uVar2 >> 0x1a & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x290), iVar3 != 0)) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)(param_1 + 0x290) <= iVar7)) {
        FUN_006fc6ec(iVar7);
      }
      uVar5 = *(ulong *)(param_1 + 0x288);
      puVar1 = (ulong *)(param_1 + 0x288);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
      }
      param_2 = (void *)FUN_006fc2f0(0x23,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (((uVar2 >> 0x1b & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x2a8), iVar3 != 0)) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)(param_1 + 0x2a8) <= iVar7)) {
        FUN_006fc6ec(iVar7);
      }
      uVar5 = *(ulong *)(param_1 + 0x2a0);
      puVar1 = (ulong *)(param_1 + 0x2a0);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
      }
      param_2 = (void *)FUN_006fc2f0(0x65,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (((uVar2 >> 0x1c & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x2c0), iVar3 != 0)) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)(param_1 + 0x2c0) <= iVar7)) {
        FUN_006fc6ec(iVar7);
      }
      uVar5 = *(ulong *)(param_1 + 0x2b8);
      puVar1 = (ulong *)(param_1 + 0x2b8);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
      }
      param_2 = (void *)FUN_006fc2f0(0x66,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (((uVar2 >> 0x1d & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x2d8), iVar3 != 0)) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)(param_1 + 0x2d8) <= iVar7)) {
        FUN_006fc6ec(iVar7);
      }
      uVar5 = *(ulong *)(param_1 + 0x2d0);
      puVar1 = (ulong *)(param_1 + 0x2d0);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
      }
      param_2 = (void *)FUN_006fc2f0(0x67,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if (((uVar2 >> 0x1e & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x2f0), iVar3 != 0)) {
    iVar7 = 0;
    do {
      if ((iVar7 < 0) || (*(int *)(param_1 + 0x2f0) <= iVar7)) {
        FUN_006fc6ec(iVar7);
      }
      uVar5 = *(ulong *)(param_1 + 0x2e8);
      puVar1 = (ulong *)(param_1 + 0x2e8);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
      }
      param_2 = (void *)FUN_006fc2f0(0x68,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      pvVar4 = *(void **)(uVar6 + 8);
      uVar5 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      pvVar4 = (void *)(uVar6 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      pvVar4 = (void *)FUN_006dcef8(param_3,pvVar4,uVar5,param_2);
      return pvVar4;
    }
    memcpy(param_2,pvVar4,uVar5 & 0xffffffff);
    param_2 = (void *)((long)param_2 + (long)(int)uVar5);
  }
  return param_2;
}


// ===== 00b4231c  FUN_00b4231c =====

long FUN_00b4231c(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  undefined8 *puVar13;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) == 0) {
    lVar12 = 0;
    goto LAB_00b425dc;
  }
  if ((uVar1 & 1) == 0) {
LAB_00b42384:
    lVar12 = 0;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x18);
    lVar12 = (long)*(int *)(param_1 + 0x20);
    puVar3 = (ulong *)(param_1 + 0x18);
    if ((uVar5 & 1) != 0) {
      puVar3 = (ulong *)(uVar5 + 7);
    }
    if (*(int *)(param_1 + 0x20) == 0) goto LAB_00b42384;
    lVar6 = lVar12 << 3;
    do {
      uVar5 = *puVar3;
      if ((*(ulong *)(uVar5 + 8) & 1) == 0) {
        lVar7 = 0;
LAB_00b430a0:
        if (*(int *)(uVar5 + 0x10) != 0) {
          iVar11 = 0;
          goto LAB_00b43064;
        }
      }
      else {
        uVar8 = *(ulong *)(uVar5 + 8) & 0xfffffffffffffffe;
        lVar7 = (long)*(char *)(uVar8 + 0x1f);
        if (lVar7 < 0) {
          lVar7 = *(long *)(uVar8 + 0x10);
        }
        iVar11 = (int)lVar7;
        if (iVar11 == 0) goto LAB_00b430a0;
LAB_00b43064:
        *(int *)(uVar5 + 0x10) = iVar11;
      }
      lVar6 = lVar6 + -8;
      puVar3 = puVar3 + 1;
      lVar12 = lVar7 + lVar12 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6);
    } while (lVar6 != 0);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 0x30);
    iVar11 = *(int *)(param_1 + 0x38);
    lVar12 = lVar12 + iVar11;
    puVar3 = (ulong *)(param_1 + 0x30);
    if ((uVar5 & 1) != 0) {
      puVar3 = (ulong *)(uVar5 + 7);
    }
    if (iVar11 != 0) {
      lVar6 = (long)iVar11 << 3;
      do {
        lVar7 = FUN_00b47178(*puVar3);
        lVar6 = lVar6 + -8;
        lVar12 = lVar7 + lVar12 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6);
        puVar3 = puVar3 + 1;
      } while (lVar6 != 0);
    }
  }
  if ((uVar1 >> 2 & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 0x48);
    iVar11 = *(int *)(param_1 + 0x50);
    lVar12 = lVar12 + iVar11;
    puVar3 = (ulong *)(param_1 + 0x48);
    if ((uVar5 & 1) != 0) {
      puVar3 = (ulong *)(uVar5 + 7);
    }
    if (iVar11 != 0) {
      lVar6 = (long)iVar11 << 3;
      do {
        lVar7 = FUN_00b490f0(*puVar3);
        lVar6 = lVar6 + -8;
        lVar12 = lVar7 + lVar12 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6);
        puVar3 = puVar3 + 1;
      } while (lVar6 != 0);
    }
  }
  if ((uVar1 >> 3 & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 0x60);
    iVar11 = *(int *)(param_1 + 0x68);
    lVar12 = lVar12 + iVar11;
    puVar3 = (ulong *)(param_1 + 0x60);
    if ((uVar5 & 1) != 0) {
      puVar3 = (ulong *)(uVar5 + 7);
    }
    if (iVar11 != 0) {
      lVar6 = (long)iVar11 << 3;
      do {
        lVar7 = FUN_00b49d54(*puVar3);
        lVar6 = lVar6 + -8;
        lVar12 = lVar7 + lVar12 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6);
        puVar3 = puVar3 + 1;
      } while (lVar6 != 0);
    }
  }
  if ((uVar1 >> 4 & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 0x78);
    iVar11 = *(int *)(param_1 + 0x80);
    lVar12 = lVar12 + iVar11;
    puVar3 = (ulong *)(param_1 + 0x78);
    if ((uVar5 & 1) != 0) {
      puVar3 = (ulong *)(uVar5 + 7);
    }
    if (iVar11 != 0) {
      lVar6 = (long)iVar11 << 3;
      do {
        lVar7 = FUN_00b4a440(*puVar3);
        lVar6 = lVar6 + -8;
        lVar12 = lVar7 + lVar12 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6);
        puVar3 = puVar3 + 1;
      } while (lVar6 != 0);
    }
  }
  if ((uVar1 >> 5 & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 0x90);
    iVar11 = *(int *)(param_1 + 0x98);
    lVar12 = lVar12 + iVar11;
    puVar3 = (ulong *)(param_1 + 0x90);
    if ((uVar5 & 1) != 0) {
      puVar3 = (ulong *)(uVar5 + 7);
    }
    if (iVar11 != 0) {
      lVar6 = (long)iVar11 << 3;
      do {
        lVar7 = FUN_00b4aa88(*puVar3);
        lVar6 = lVar6 + -8;
        lVar12 = lVar7 + lVar12 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6);
        puVar3 = puVar3 + 1;
      } while (lVar6 != 0);
    }
  }
  if ((uVar1 >> 6 & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 0xa8);
    iVar11 = *(int *)(param_1 + 0xb0);
    lVar12 = lVar12 + iVar11;
    puVar3 = (ulong *)(param_1 + 0xa8);
    if ((uVar5 & 1) != 0) {
      puVar3 = (ulong *)(uVar5 + 7);
    }
    if (iVar11 != 0) {
      lVar6 = (long)iVar11 << 3;
      do {
        lVar7 = FUN_00b4be28(*puVar3);
        lVar6 = lVar6 + -8;
        lVar12 = lVar7 + lVar12 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6);
        puVar3 = puVar3 + 1;
      } while (lVar6 != 0);
    }
  }
  if ((uVar1 >> 7 & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 0xc0);
    iVar11 = *(int *)(param_1 + 200);
    lVar12 = lVar12 + (long)iVar11 * 2;
    puVar3 = (ulong *)(param_1 + 0xc0);
    if ((uVar5 & 1) != 0) {
      puVar3 = (ulong *)(uVar5 + 7);
    }
    if (iVar11 != 0) {
      lVar6 = (long)iVar11 << 3;
      do {
        lVar7 = FUN_00b4c3a0(*puVar3);
        lVar6 = lVar6 + -8;
        lVar12 = lVar7 + lVar12 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6);
        puVar3 = puVar3 + 1;
      } while (lVar6 != 0);
    }
  }
LAB_00b425dc:
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0xd8);
      iVar11 = *(int *)(param_1 + 0xe0);
      lVar12 = lVar12 + (long)iVar11 * 2;
      puVar3 = (ulong *)(param_1 + 0xd8);
      if ((uVar5 & 1) != 0) {
        puVar3 = (ulong *)(uVar5 + 7);
      }
      if (iVar11 != 0) {
        lVar6 = (long)iVar11 << 3;
        do {
          uVar5 = *puVar3;
          if ((*(byte *)(uVar5 + 0x10) & 1) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = (ulong)((int)LZCOUNT(*(undefined8 *)(uVar5 + 0x18)) * -9 + 0x2c0U >> 6);
          }
          if ((*(ulong *)(uVar5 + 8) & 1) == 0) {
            if ((int)uVar8 != 0) goto LAB_00b42648;
LAB_00b4268c:
            if (*(int *)(uVar5 + 0x14) != 0) goto LAB_00b42648;
          }
          else {
            uVar9 = *(ulong *)(uVar5 + 8) & 0xfffffffffffffffe;
            lVar7 = (long)*(char *)(uVar9 + 0x1f);
            if (lVar7 < 0) {
              lVar7 = *(long *)(uVar9 + 0x10);
            }
            uVar8 = lVar7 + uVar8;
            if ((int)uVar8 == 0) goto LAB_00b4268c;
LAB_00b42648:
            *(int *)(uVar5 + 0x14) = (int)uVar8;
          }
          lVar6 = lVar6 + -8;
          puVar3 = puVar3 + 1;
          lVar12 = uVar8 + lVar12 + (ulong)((int)LZCOUNT((int)uVar8) * -9 + 0x160U >> 6);
        } while (lVar6 != 0);
      }
    }
    if ((uVar1 >> 9 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0xf0);
      iVar11 = *(int *)(param_1 + 0xf8);
      lVar12 = lVar12 + (long)iVar11 * 2;
      puVar3 = (ulong *)(param_1 + 0xf0);
      if ((uVar5 & 1) != 0) {
        puVar3 = (ulong *)(uVar5 + 7);
      }
      if (iVar11 != 0) {
        lVar6 = (long)iVar11 << 3;
        do {
          lVar7 = FUN_00b4ce08(*puVar3);
          lVar6 = lVar6 + -8;
          lVar12 = lVar7 + lVar12 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6);
          puVar3 = puVar3 + 1;
        } while (lVar6 != 0);
      }
    }
    if ((uVar1 >> 10 & 1) != 0) {
      iVar11 = *(int *)(param_1 + 0x110);
      lVar12 = lVar12 + (long)iVar11 * 2;
      puVar13 = (undefined8 *)(param_1 + 0x108);
      if ((*(ulong *)(param_1 + 0x108) & 1) != 0) {
        puVar13 = (undefined8 *)(*(ulong *)(param_1 + 0x108) + 7);
      }
      if (iVar11 != 0) {
        lVar6 = (long)iVar11 << 3;
        do {
          lVar7 = FUN_00b4d674(*puVar13);
          lVar6 = lVar6 + -8;
          lVar12 = lVar7 + lVar12 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6);
          puVar13 = puVar13 + 1;
        } while (lVar6 != 0);
      }
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      iVar11 = *(int *)(param_1 + 0x128);
      lVar12 = lVar12 + (long)iVar11 * 2;
      puVar13 = (undefined8 *)(param_1 + 0x120);
      if ((*(ulong *)(param_1 + 0x120) & 1) != 0) {
        puVar13 = (undefined8 *)(*(ulong *)(param_1 + 0x120) + 7);
      }
      if (iVar11 != 0) {
        lVar6 = (long)iVar11 << 3;
        do {
          lVar7 = FUN_00b50b88(*puVar13);
          lVar6 = lVar6 + -8;
          lVar12 = lVar7 + lVar12 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6);
          puVar13 = puVar13 + 1;
        } while (lVar6 != 0);
      }
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      iVar11 = *(int *)(param_1 + 0x140);
      lVar12 = lVar12 + (long)iVar11 * 2;
      puVar13 = (undefined8 *)(param_1 + 0x138);
      if ((*(ulong *)(param_1 + 0x138) & 1) != 0) {
        puVar13 = (undefined8 *)(*(ulong *)(param_1 + 0x138) + 7);
      }
      if (iVar11 != 0) {
        lVar6 = (long)iVar11 << 3;
        do {
          lVar7 = FUN_00b511f4(*puVar13);
          lVar6 = lVar6 + -8;
          lVar12 = lVar7 + lVar12 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6);
          puVar13 = puVar13 + 1;
        } while (lVar6 != 0);
      }
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      iVar11 = *(int *)(param_1 + 0x158);
      lVar12 = lVar12 + (long)iVar11 * 2;
      puVar13 = (undefined8 *)(param_1 + 0x150);
      if ((*(ulong *)(param_1 + 0x150) & 1) != 0) {
        puVar13 = (undefined8 *)(*(ulong *)(param_1 + 0x150) + 7);
      }
      if (iVar11 != 0) {
        lVar6 = (long)iVar11 << 3;
        do {
          lVar7 = FUN_00b5159c(*puVar13);
          lVar6 = lVar6 + -8;
          lVar12 = lVar7 + lVar12 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6);
          puVar13 = puVar13 + 1;
        } while (lVar6 != 0);
      }
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      iVar11 = *(int *)(param_1 + 0x170);
      lVar12 = lVar12 + (long)iVar11 * 2;
      puVar13 = (undefined8 *)(param_1 + 0x168);
      if ((*(ulong *)(param_1 + 0x168) & 1) != 0) {
        puVar13 = (undefined8 *)(*(ulong *)(param_1 + 0x168) + 7);
      }
      if (iVar11 != 0) {
        lVar6 = (long)iVar11 << 3;
        do {
          lVar7 = FUN_00b51904(*puVar13);
          lVar6 = lVar6 + -8;
          lVar12 = lVar7 + lVar12 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6);
          puVar13 = puVar13 + 1;
        } while (lVar6 != 0);
      }
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      iVar11 = *(int *)(param_1 + 0x188);
      lVar12 = lVar12 + (long)iVar11 * 2;
      plVar4 = (long *)(param_1 + 0x180);
      if ((*(ulong *)(param_1 + 0x180) & 1) != 0) {
        plVar4 = (long *)(*(ulong *)(param_1 + 0x180) + 7);
      }
      if (iVar11 != 0) {
        lVar6 = (long)iVar11 << 3;
        do {
          lVar7 = *plVar4;
          Hint_Prefetch(lVar7 + 0x1c0,0,0,0);
          Hint_Prefetch(lVar7 + 0x200,0,0,0);
          Hint_Prefetch(lVar7 + 0x240,0,0,0);
          Hint_Prefetch(lVar7 + 0x280,0,0,0);
          Hint_Prefetch(lVar7 + 0x2c0,0,0,0);
          uVar5 = (ulong)*(uint *)(lVar7 + 0x10) & 2;
          if ((*(uint *)(lVar7 + 0x10) & 1) == 0) {
            uVar8 = *(ulong *)(lVar7 + 8);
            if ((uVar8 & 1) != 0) goto LAB_00b4293c;
LAB_00b428f0:
            if ((int)uVar5 == 0) goto LAB_00b42954;
LAB_00b428f4:
            *(int *)(lVar7 + 0x14) = (int)uVar5;
          }
          else {
            uVar5 = ((int)LZCOUNT(*(undefined8 *)(lVar7 + 0x18)) * -9 + 0x2c0U >> 6) + uVar5;
            uVar8 = *(ulong *)(lVar7 + 8);
            if ((uVar8 & 1) == 0) goto LAB_00b428f0;
LAB_00b4293c:
            lVar10 = (long)*(char *)((uVar8 & 0xfffffffffffffffe) + 0x1f);
            if (lVar10 < 0) {
              lVar10 = *(long *)((uVar8 & 0xfffffffffffffffe) + 0x10);
            }
            uVar5 = lVar10 + uVar5;
            if ((int)uVar5 != 0) goto LAB_00b428f4;
LAB_00b42954:
            if (*(int *)(lVar7 + 0x14) != 0) goto LAB_00b428f4;
          }
          lVar6 = lVar6 + -8;
          plVar4 = plVar4 + 1;
          lVar12 = uVar5 + lVar12 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6);
        } while (lVar6 != 0);
      }
    }
  }
  if ((uVar1 & 0xff0000) != 0) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      iVar11 = *(int *)(param_1 + 0x1a0);
      lVar12 = lVar12 + (long)iVar11 * 2;
      puVar13 = (undefined8 *)(param_1 + 0x198);
      if ((*(ulong *)(param_1 + 0x198) & 1) != 0) {
        puVar13 = (undefined8 *)(*(ulong *)(param_1 + 0x198) + 7);
      }
      if (iVar11 != 0) {
        lVar6 = (long)iVar11 << 3;
        do {
          lVar7 = FUN_00b5221c(*puVar13);
          lVar6 = lVar6 + -8;
          lVar12 = lVar7 + lVar12 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6);
          puVar13 = puVar13 + 1;
        } while (lVar6 != 0);
      }
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
      iVar11 = *(int *)(param_1 + 0x1b8);
      lVar12 = lVar12 + (long)iVar11 * 2;
      puVar13 = (undefined8 *)(param_1 + 0x1b0);
      if ((*(ulong *)(param_1 + 0x1b0) & 1) != 0) {
        puVar13 = (undefined8 *)(*(ulong *)(param_1 + 0x1b0) + 7);
      }
      if (iVar11 != 0) {
        lVar6 = (long)iVar11 << 3;
        do {
          lVar7 = FUN_00b526f4(*puVar13);
          lVar6 = lVar6 + -8;
          lVar12 = lVar7 + lVar12 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6);
          puVar13 = puVar13 + 1;
        } while (lVar6 != 0);
      }
    }
    if ((uVar1 >> 0x12 & 1) != 0) {
      iVar11 = *(int *)(param_1 + 0x1d0);
      lVar12 = lVar12 + (long)iVar11 * 2;
      plVar4 = (long *)(param_1 + 0x1c8);
      if ((*(ulong *)(param_1 + 0x1c8) & 1) != 0) {
        plVar4 = (long *)(*(ulong *)(param_1 + 0x1c8) + 7);
      }
      if (iVar11 != 0) {
        lVar6 = (long)iVar11 << 3;
        do {
          lVar7 = *plVar4;
          Hint_Prefetch(lVar7 + 0x1c0,0,0,0);
          Hint_Prefetch(lVar7 + 0x200,0,0,0);
          Hint_Prefetch(lVar7 + 0x240,0,0,0);
          Hint_Prefetch(lVar7 + 0x280,0,0,0);
          Hint_Prefetch(lVar7 + 0x2c0,0,0,0);
          uVar2 = *(uint *)(lVar7 + 0x10);
          if ((uVar2 & 3) == 0) {
            uVar5 = 0;
          }
          else {
            if ((uVar2 & 1) == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = (ulong)((int)LZCOUNT(*(undefined8 *)(lVar7 + 0x18)) * -9 + 0x2c0U >> 6);
            }
            if ((uVar2 >> 1 & 1) != 0) {
              uVar5 = uVar5 + ((int)LZCOUNT((long)*(int *)(lVar7 + 0x20)) * -9 + 0x280U >> 6) + 1;
            }
          }
          if ((*(ulong *)(lVar7 + 8) & 1) == 0) {
            if ((int)uVar5 != 0) goto LAB_00b42abc;
LAB_00b42b00:
            if (*(int *)(lVar7 + 0x14) != 0) goto LAB_00b42abc;
          }
          else {
            uVar8 = *(ulong *)(lVar7 + 8) & 0xfffffffffffffffe;
            lVar10 = (long)*(char *)(uVar8 + 0x1f);
            if (lVar10 < 0) {
              lVar10 = *(long *)(uVar8 + 0x10);
            }
            uVar5 = lVar10 + uVar5;
            if ((int)uVar5 == 0) goto LAB_00b42b00;
LAB_00b42abc:
            *(int *)(lVar7 + 0x14) = (int)uVar5;
          }
          lVar6 = lVar6 + -8;
          plVar4 = plVar4 + 1;
          lVar12 = uVar5 + lVar12 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6);
        } while (lVar6 != 0);
      }
    }
    if ((uVar1 >> 0x13 & 1) != 0) {
      iVar11 = *(int *)(param_1 + 0x1e8);
      lVar12 = lVar12 + (long)iVar11 * 2;
      plVar4 = (long *)(param_1 + 0x1e0);
      if ((*(ulong *)(param_1 + 0x1e0) & 1) != 0) {
        plVar4 = (long *)(*(ulong *)(param_1 + 0x1e0) + 7);
      }
      if (iVar11 != 0) {
        lVar6 = (long)iVar11 << 3;
        do {
          lVar7 = *plVar4;
          Hint_Prefetch(lVar7 + 0x1c0,0,0,0);
          Hint_Prefetch(lVar7 + 0x200,0,0,0);
          Hint_Prefetch(lVar7 + 0x240,0,0,0);
          Hint_Prefetch(lVar7 + 0x280,0,0,0);
          Hint_Prefetch(lVar7 + 0x2c0,0,0,0);
          uVar5 = (ulong)*(uint *)(lVar7 + 0x10) & 2;
          if ((*(uint *)(lVar7 + 0x10) & 1) == 0) {
            uVar8 = *(ulong *)(lVar7 + 8);
            if ((uVar8 & 1) != 0) goto LAB_00b42bb8;
LAB_00b42b6c:
            if ((int)uVar5 == 0) goto LAB_00b42bd0;
LAB_00b42b70:
            *(int *)(lVar7 + 0x14) = (int)uVar5;
          }
          else {
            uVar5 = ((int)LZCOUNT(*(undefined8 *)(lVar7 + 0x18)) * -9 + 0x2c0U >> 6) + uVar5;
            uVar8 = *(ulong *)(lVar7 + 8);
            if ((uVar8 & 1) == 0) goto LAB_00b42b6c;
LAB_00b42bb8:
            lVar10 = (long)*(char *)((uVar8 & 0xfffffffffffffffe) + 0x1f);
            if (lVar10 < 0) {
              lVar10 = *(long *)((uVar8 & 0xfffffffffffffffe) + 0x10);
            }
            uVar5 = lVar10 + uVar5;
            if ((int)uVar5 != 0) goto LAB_00b42b70;
LAB_00b42bd0:
            if (*(int *)(lVar7 + 0x14) != 0) goto LAB_00b42b70;
          }
          lVar6 = lVar6 + -8;
          plVar4 = plVar4 + 1;
          lVar12 = uVar5 + lVar12 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6);
        } while (lVar6 != 0);
      }
    }
    if ((uVar1 >> 0x14 & 1) != 0) {
      iVar11 = *(int *)(param_1 + 0x200);
      lVar12 = lVar12 + (long)iVar11 * 2;
      puVar13 = (undefined8 *)(param_1 + 0x1f8);
      if ((*(ulong *)(param_1 + 0x1f8) & 1) != 0) {
        puVar13 = (undefined8 *)(*(ulong *)(param_1 + 0x1f8) + 7);
      }
      if (iVar11 != 0) {
        lVar6 = (long)iVar11 << 3;
        do {
          lVar7 = FUN_00b44214(*puVar13);
          lVar6 = lVar6 + -8;
          lVar12 = lVar7 + lVar12 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6);
          puVar13 = puVar13 + 1;
        } while (lVar6 != 0);
      }
    }
    if ((uVar1 >> 0x15 & 1) != 0) {
      iVar11 = *(int *)(param_1 + 0x218);
      lVar12 = lVar12 + (long)iVar11 * 2;
      puVar13 = (undefined8 *)(param_1 + 0x210);
      if ((*(ulong *)(param_1 + 0x210) & 1) != 0) {
        puVar13 = (undefined8 *)(*(ulong *)(param_1 + 0x210) + 7);
      }
      if (iVar11 != 0) {
        lVar6 = (long)iVar11 << 3;
        do {
          lVar7 = FUN_00b4385c(*puVar13);
          lVar6 = lVar6 + -8;
          lVar12 = lVar7 + lVar12 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6);
          puVar13 = puVar13 + 1;
        } while (lVar6 != 0);
      }
    }
    if ((uVar1 >> 0x16 & 1) != 0) {
      iVar11 = *(int *)(param_1 + 0x230);
      lVar12 = lVar12 + (long)iVar11 * 2;
      puVar13 = (undefined8 *)(param_1 + 0x228);
      if ((*(ulong *)(param_1 + 0x228) & 1) != 0) {
        puVar13 = (undefined8 *)(*(ulong *)(param_1 + 0x228) + 7);
      }
      if (iVar11 != 0) {
        lVar6 = (long)iVar11 << 3;
        do {
          lVar7 = FUN_00b44c50(*puVar13);
          lVar6 = lVar6 + -8;
          lVar12 = lVar7 + lVar12 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6);
          puVar13 = puVar13 + 1;
        } while (lVar6 != 0);
      }
    }
    if ((uVar1 >> 0x17 & 1) != 0) {
      iVar11 = *(int *)(param_1 + 0x248);
      lVar12 = lVar12 + (long)iVar11 * 2;
      plVar4 = (long *)(param_1 + 0x240);
      if ((*(ulong *)(param_1 + 0x240) & 1) != 0) {
        plVar4 = (long *)(*(ulong *)(param_1 + 0x240) + 7);
      }
      if (iVar11 != 0) {
        lVar6 = (long)iVar11 << 3;
        do {
          lVar7 = *plVar4;
          Hint_Prefetch(lVar7 + 0x1c0,0,0,0);
          Hint_Prefetch(lVar7 + 0x200,0,0,0);
          Hint_Prefetch(lVar7 + 0x240,0,0,0);
          Hint_Prefetch(lVar7 + 0x280,0,0,0);
          Hint_Prefetch(lVar7 + 0x2c0,0,0,0);
          uVar2 = *(uint *)(lVar7 + 0x10);
          uVar5 = (ulong)uVar2 & 2;
          if ((uVar2 & 5) != 0) {
            if ((uVar2 & 1) != 0) {
              uVar5 = ((int)LZCOUNT(*(undefined8 *)(lVar7 + 0x18)) * -9 + 0x2c0U >> 6) + uVar5;
            }
            if ((uVar2 >> 2 & 1) != 0) {
              uVar5 = uVar5 + ((int)LZCOUNT(*(undefined4 *)(lVar7 + 0x24)) * -9 + 0x1a0U >> 6);
            }
          }
          if ((*(ulong *)(lVar7 + 8) & 1) == 0) {
            if ((int)uVar5 != 0) goto LAB_00b42d7c;
LAB_00b42dc0:
            if (*(int *)(lVar7 + 0x14) != 0) goto LAB_00b42d7c;
          }
          else {
            uVar8 = *(ulong *)(lVar7 + 8) & 0xfffffffffffffffe;
            lVar10 = (long)*(char *)(uVar8 + 0x1f);
            if (lVar10 < 0) {
              lVar10 = *(long *)(uVar8 + 0x10);
            }
            uVar5 = lVar10 + uVar5;
            if ((int)uVar5 == 0) goto LAB_00b42dc0;
LAB_00b42d7c:
            *(int *)(lVar7 + 0x14) = (int)uVar5;
          }
          lVar6 = lVar6 + -8;
          plVar4 = plVar4 + 1;
          lVar12 = uVar5 + lVar12 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6);
        } while (lVar6 != 0);
      }
    }
  }
  if ((uVar1 & 0x7f000000) != 0) {
    if ((uVar1 >> 0x18 & 1) != 0) {
      iVar11 = *(int *)(param_1 + 0x260);
      lVar12 = lVar12 + (long)iVar11 * 2;
      puVar13 = (undefined8 *)(param_1 + 600);
      if ((*(ulong *)(param_1 + 600) & 1) != 0) {
        puVar13 = (undefined8 *)(*(ulong *)(param_1 + 600) + 7);
      }
      if (iVar11 != 0) {
        lVar6 = (long)iVar11 << 3;
        do {
          lVar7 = FUN_00b53694(*puVar13);
          lVar6 = lVar6 + -8;
          lVar12 = lVar7 + lVar12 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6);
          puVar13 = puVar13 + 1;
        } while (lVar6 != 0);
      }
    }
    if ((uVar1 >> 0x19 & 1) != 0) {
      iVar11 = *(int *)(param_1 + 0x278);
      lVar12 = lVar12 + (long)iVar11 * 2;
      puVar13 = (undefined8 *)(param_1 + 0x270);
      if ((*(ulong *)(param_1 + 0x270) & 1) != 0) {
        puVar13 = (undefined8 *)(*(ulong *)(param_1 + 0x270) + 7);
      }
      if (iVar11 != 0) {
        lVar6 = (long)iVar11 << 3;
        do {
          lVar7 = FUN_00b4b1d0(*puVar13);
          lVar6 = lVar6 + -8;
          lVar12 = lVar7 + lVar12 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6);
          puVar13 = puVar13 + 1;
        } while (lVar6 != 0);
      }
    }
    if ((uVar1 >> 0x1a & 1) != 0) {
      iVar11 = *(int *)(param_1 + 0x290);
      lVar12 = lVar12 + (long)iVar11 * 2;
      puVar13 = (undefined8 *)(param_1 + 0x288);
      if ((*(ulong *)(param_1 + 0x288) & 1) != 0) {
        puVar13 = (undefined8 *)(*(ulong *)(param_1 + 0x288) + 7);
      }
      if (iVar11 != 0) {
        lVar6 = (long)iVar11 << 3;
        do {
          lVar7 = FUN_00b4e3c0(*puVar13);
          lVar6 = lVar6 + -8;
          lVar12 = lVar7 + lVar12 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6);
          puVar13 = puVar13 + 1;
        } while (lVar6 != 0);
      }
    }
    if ((uVar1 >> 0x1b & 1) != 0) {
      iVar11 = *(int *)(param_1 + 0x2a8);
      lVar12 = lVar12 + (long)iVar11 * 2;
      puVar13 = (undefined8 *)(param_1 + 0x2a0);
      if ((*(ulong *)(param_1 + 0x2a0) & 1) != 0) {
        puVar13 = (undefined8 *)(*(ulong *)(param_1 + 0x2a0) + 7);
      }
      if (iVar11 != 0) {
        lVar6 = (long)iVar11 << 3;
        do {
          lVar7 = FUN_00b4faa4(*puVar13);
          lVar6 = lVar6 + -8;
          lVar12 = lVar7 + lVar12 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6);
          puVar13 = puVar13 + 1;
        } while (lVar6 != 0);
      }
    }
    if ((uVar1 >> 0x1c & 1) != 0) {
      iVar11 = *(int *)(param_1 + 0x2c0);
      lVar12 = lVar12 + (long)iVar11 * 2;
      puVar13 = (undefined8 *)(param_1 + 0x2b8);
      if ((*(ulong *)(param_1 + 0x2b8) & 1) != 0) {
        puVar13 = (undefined8 *)(*(ulong *)(param_1 + 0x2b8) + 7);
      }
      if (iVar11 != 0) {
        lVar6 = (long)iVar11 << 3;
        do {
          lVar7 = FUN_00b4ffb0(*puVar13);
          lVar6 = lVar6 + -8;
          lVar12 = lVar7 + lVar12 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6);
          puVar13 = puVar13 + 1;
        } while (lVar6 != 0);
      }
    }
    if ((uVar1 >> 0x1d & 1) != 0) {
      iVar11 = *(int *)(param_1 + 0x2d8);
      lVar12 = lVar12 + (long)iVar11 * 2;
      puVar13 = (undefined8 *)(param_1 + 0x2d0);
      if ((*(ulong *)(param_1 + 0x2d0) & 1) != 0) {
        puVar13 = (undefined8 *)(*(ulong *)(param_1 + 0x2d0) + 7);
      }
      if (iVar11 != 0) {
        lVar6 = (long)iVar11 << 3;
        do {
          lVar7 = FUN_00b4efa0(*puVar13);
          lVar6 = lVar6 + -8;
          lVar12 = lVar7 + lVar12 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6);
          puVar13 = puVar13 + 1;
        } while (lVar6 != 0);
      }
    }
    if ((uVar1 >> 0x1e & 1) != 0) {
      iVar11 = *(int *)(param_1 + 0x2f0);
      lVar12 = lVar12 + (long)iVar11 * 2;
      puVar13 = (undefined8 *)(param_1 + 0x2e8);
      if ((*(ulong *)(param_1 + 0x2e8) & 1) != 0) {
        puVar13 = (undefined8 *)(*(ulong *)(param_1 + 0x2e8) + 7);
      }
      if (iVar11 != 0) {
        lVar6 = (long)iVar11 << 3;
        do {
          lVar7 = FUN_00b4f534(*puVar13);
          lVar6 = lVar6 + -8;
          lVar12 = lVar7 + lVar12 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6);
          puVar13 = puVar13 + 1;
        } while (lVar6 != 0);
      }
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar11 = (int)lVar12;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)(uVar5 + 0x10);
    }
    lVar12 = lVar6 + lVar12;
    iVar11 = (int)lVar12;
  }
  if ((iVar11 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)lVar12;
  }
  return lVar12;
}


// ===== 00b430dc  FUN_00b430dc =====

void FUN_00b430dc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dbb00();
  return;
}


// ===== 00b430f0  FUN_00b430f0 =====

void FUN_00b430f0(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  operator_delete(param_1);
  return;
}


// ===== 00b43128  FUN_00b43128 =====

void FUN_00b43128(long param_1,long param_2)

{
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  return;
}


// ===== 00b43148  FUN_00b43148 =====

undefined ** FUN_00b43148(void)

{
  return &PTR_PTR_00d44d58;
}


// ===== 00b43158  FUN_00b43158 =====

void FUN_00b43158(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00b4316c  FUN_00b4316c =====

void * FUN_00b4316c(long param_1,void *param_2,long *param_3)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar2 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uVar2 < 0) {
      pvVar1 = *(void **)(uVar3 + 8);
      uVar2 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      pvVar1 = (void *)(uVar3 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      pvVar1 = (void *)FUN_006dcef8(param_3,pvVar1,uVar2 & 0xffffffff,param_2);
      return pvVar1;
    }
    memcpy(param_2,pvVar1,uVar2 & 0xffffffff);
    param_2 = (void *)((long)param_2 + (long)(int)uVar2);
  }
  return param_2;
}


// ===== 00b431fc  FUN_00b431fc =====

long FUN_00b431fc(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    lVar2 = 0;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2;
    if (iVar1 != 0) goto LAB_00b43220;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return lVar2;
  }
  iVar1 = 0;
LAB_00b43220:
  *(int *)(param_1 + 0x10) = iVar1;
  return lVar2;
}


// ===== 00b43248  FUN_00b43248 =====

void FUN_00b43248(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208(param_1 + 0x18);
  FUN_00714208(param_1 + 0x20);
  FUN_00714208(param_1 + 0x28);
  return;
}


// ===== 00b4328c  FUN_00b4328c =====

void FUN_00b4328c(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208((long)param_1 + 0x18);
  FUN_00714208((long)param_1 + 0x20);
  FUN_00714208((long)param_1 + 0x28);
  operator_delete(param_1);
  return;
}


// ===== 00b432dc  FUN_00b432dc =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b432dc(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x7f) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x18,*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x20,*(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x28,*(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b43410  FUN_00b43410 =====

undefined ** FUN_00b43410(void)

{
  return &PTR_PTR_00d44db0;
}


// ===== 00b43420  FUN_00b43420 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b43420(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
  }
  if ((uVar1 & 0x78) != 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00b434f4  FUN_00b434f4 =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b434f4(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  void *__src;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  size_t sVar11;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 3 & 1) != 0) {
    param_2 = (byte *)FUN_00b2c524(param_3,*(undefined8 *)(param_1 + 0x30),param_2);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    param_2 = (byte *)FUN_00b437e4(param_3,*(undefined8 *)(param_1 + 0x38),param_2);
  }
  if ((uVar1 >> 5 & 1) != 0) {
    param_2 = (byte *)FUN_006d8a68(param_3,*(undefined4 *)(param_1 + 0x40),param_2);
  }
  if ((uVar1 >> 6 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar8 = *(uint *)(param_1 + 0x44);
    pbVar10 = param_2 + 2;
    param_2[0] = 0x80;
    param_2[1] = 1;
    pbVar4 = pbVar10;
    if (0x7f < uVar8) {
      do {
        uVar2 = uVar8 >> 0xe;
        bVar3 = (byte)uVar8;
        uVar8 = uVar8 >> 7;
        pbVar10 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar10;
      } while (uVar2 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar8;
  }
  if ((uVar1 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar11 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar11 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar11 < 0x80) goto LAB_00b435dc;
    }
    else {
LAB_00b435dc:
      puVar6 = puVar5;
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x18a;
        *(byte *)((long)param_2 + 2) = (byte)sVar11;
        memcpy((byte *)((long)param_2 + 3),puVar5,sVar11);
        param_2 = (byte *)((long)param_2 + 3) + sVar11;
        goto joined_r0x00b4370c;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x11,puVar6,sVar11,param_2);
  }
joined_r0x00b4370c:
  if ((uVar1 >> 1 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
    sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar11 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar11 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar11 < 0x80) goto LAB_00b4363c;
    }
    else {
LAB_00b4363c:
      puVar6 = puVar5;
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x192;
        *(byte *)((long)param_2 + 2) = (byte)sVar11;
        memcpy((byte *)((long)param_2 + 3),puVar5,sVar11);
        param_2 = (byte *)((long)param_2 + 3) + sVar11;
        goto joined_r0x00b43534;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x12,puVar6,sVar11,param_2);
  }
joined_r0x00b43534:
  if ((uVar1 >> 2 & 1) == 0) {
    uVar9 = *(ulong *)(param_1 + 8);
    goto joined_r0x00b4353c;
  }
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
  if ((long)sVar11 < 0) {
    puVar6 = (undefined8 *)*puVar5;
    sVar11 = puVar5[1];
    puVar5 = puVar6;
    if ((long)sVar11 < 0x80) goto LAB_00b4369c;
  }
  else {
LAB_00b4369c:
    puVar6 = puVar5;
    if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
      param_2[0] = 0x9a;
      param_2[1] = 1;
      param_2[2] = (byte)sVar11;
      memcpy(param_2 + 3,puVar5,sVar11);
      param_2 = param_2 + 3 + sVar11;
      uVar9 = *(ulong *)(param_1 + 8);
      goto joined_r0x00b4353c;
    }
  }
  param_2 = (byte *)FUN_006dd0b8(param_3,0x13,puVar6,sVar11,param_2);
  uVar9 = *(ulong *)(param_1 + 8);
joined_r0x00b4353c:
  if ((uVar9 & 1) != 0) {
    uVar9 = uVar9 & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar9 + 0x1f);
    if ((long)uVar7 < 0) {
      __src = *(void **)(uVar9 + 8);
      uVar7 = (ulong)*(uint *)(uVar9 + 0x10);
    }
    else {
      __src = (void *)(uVar9 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar7) {
      pbVar4 = (byte *)FUN_006dcef8(param_3,__src,uVar7,param_2);
      return pbVar4;
    }
    memcpy(param_2,__src,uVar7 & 0xffffffff);
    param_2 = param_2 + (int)uVar7;
  }
  return param_2;
}


// ===== 00b437e4  FUN_00b437e4 =====

byte * FUN_00b437e4(undefined8 *param_1,ulong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((undefined1 *)*param_1 <= param_3) {
    param_3 = (undefined1 *)FUN_006dcdb8(param_1,param_3);
  }
  pbVar1 = param_3 + 1;
  *param_3 = 0x10;
  pbVar2 = pbVar1;
  uVar4 = param_2;
  if (0x7f < param_2) {
    do {
      param_2 = uVar4 >> 7;
      uVar3 = uVar4 >> 0xe;
      pbVar1 = pbVar2 + 1;
      *pbVar2 = (byte)uVar4 | 0x80;
      pbVar2 = pbVar1;
      uVar4 = param_2;
    } while (uVar3 != 0);
  }
  *pbVar1 = (byte)param_2;
  return pbVar1 + 1;
}


// ===== 00b4385c  FUN_00b4385c =====

/* WARNING: Type propagation algorithm not settling */

long FUN_00b4385c(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x7f) == 0) {
    lVar4 = 0;
    uVar5 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      uVar5 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar5 = (ulong)bVar2;
      }
      lVar4 = uVar5 + ((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar5 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar5 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar5 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar5 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + lVar4;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x38)) * -9 + 0x2c0U >> 6) + lVar4;
    }
    if ((uVar1 >> 5 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x40)) * -9 + 0x2c0U >> 6) + lVar4;
    }
    if ((uVar1 >> 6 & 1) == 0) {
      uVar5 = *(ulong *)(param_1 + 8);
    }
    else {
      lVar4 = lVar4 + (ulong)(((int)LZCOUNT(*(undefined4 *)(param_1 + 0x44)) * -9 + 0x160U >> 6) + 2
                             );
      uVar5 = *(ulong *)(param_1 + 8);
    }
  }
  if ((uVar5 & 1) == 0) {
    iVar3 = (int)lVar4;
  }
  else {
    lVar6 = (long)*(char *)((uVar5 & 0xfffffffffffffffe) + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)((uVar5 & 0xfffffffffffffffe) + 0x10);
    }
    lVar4 = lVar6 + lVar4;
    iVar3 = (int)lVar4;
  }
  if ((iVar3 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)lVar4;
  }
  return lVar4;
}


// ===== 00b43a20  FUN_00b43a20 =====

void FUN_00b43a20(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208(param_1 + 0x18);
  FUN_00714208(param_1 + 0x20);
  FUN_00714208(param_1 + 0x28);
  FUN_00714208(param_1 + 0x30);
  FUN_00714208(param_1 + 0x38);
  return;
}


// ===== 00b43a74  FUN_00b43a74 =====

void FUN_00b43a74(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208((long)param_1 + 0x18);
  FUN_00714208((long)param_1 + 0x20);
  FUN_00714208((long)param_1 + 0x28);
  FUN_00714208((long)param_1 + 0x30);
  FUN_00714208((long)param_1 + 0x38);
  operator_delete(param_1);
  return;
}


// ===== 00b43ad4  FUN_00b43ad4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b43ad4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x18,*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x20,*(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x28,*(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x30,*(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x38,*(ulong *)(param_2 + 0x38) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    }
  }
  if ((uVar1 & 0x700) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b43c88  FUN_00b43c88 =====

undefined ** FUN_00b43c88(void)

{
  return &PTR_PTR_00d44e18;
}


// ===== 00b43c98  FUN_00b43c98 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b43c98(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
  }
  if ((uVar1 & 0xe0) != 0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if ((uVar1 & 0x700) != 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined8 *)(param_1 + 0x54) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00b43de4  FUN_00b43de4 =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b43de4(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  void *__src;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  size_t sVar11;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 5 & 1) != 0) {
    param_2 = (byte *)FUN_00b2c524(param_3,*(undefined8 *)(param_1 + 0x40),param_2);
  }
  if ((uVar1 >> 6 & 1) != 0) {
    param_2 = (byte *)FUN_00b437e4(param_3,*(undefined8 *)(param_1 + 0x48),param_2);
  }
  if ((uVar1 >> 7 & 1) != 0) {
    param_2 = (byte *)FUN_006d8a68(param_3,*(undefined4 *)(param_1 + 0x50),param_2);
  }
  if ((uVar1 >> 8 & 1) != 0) {
    param_2 = (byte *)FUN_006d9c64(param_3,*(undefined4 *)(param_1 + 0x54),param_2);
  }
  if ((uVar1 >> 9 & 1) != 0) {
    param_2 = (byte *)FUN_006d9ce0(param_3,*(undefined4 *)(param_1 + 0x58),param_2);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar8 = *(uint *)(param_1 + 0x5c);
    pbVar10 = param_2 + 2;
    param_2[0] = 0x80;
    param_2[1] = 1;
    pbVar4 = pbVar10;
    if (0x7f < uVar8) {
      do {
        uVar2 = uVar8 >> 0xe;
        bVar3 = (byte)uVar8;
        uVar8 = uVar8 >> 7;
        pbVar10 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar10;
      } while (uVar2 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar8;
  }
  if ((uVar1 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar11 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar11 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar11 < 0x80) goto LAB_00b43f0c;
    }
    else {
LAB_00b43f0c:
      puVar6 = puVar5;
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x18a;
        *(byte *)((long)param_2 + 2) = (byte)sVar11;
        memcpy((byte *)((long)param_2 + 3),puVar5,sVar11);
        param_2 = (byte *)((long)param_2 + 3) + sVar11;
        goto joined_r0x00b43f40;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x11,puVar6,sVar11,param_2);
  }
joined_r0x00b43f40:
  if ((uVar1 >> 1 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
    sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar11 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar11 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar11 < 0x80) goto LAB_00b43f6c;
    }
    else {
LAB_00b43f6c:
      puVar6 = puVar5;
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x192;
        *(byte *)((long)param_2 + 2) = (byte)sVar11;
        memcpy((byte *)((long)param_2 + 3),puVar5,sVar11);
        param_2 = (byte *)((long)param_2 + 3) + sVar11;
        goto joined_r0x00b4411c;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x12,puVar6,sVar11,param_2);
  }
joined_r0x00b4411c:
  if ((uVar1 >> 2 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
    sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar11 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar11 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar11 < 0x80) goto LAB_00b43fcc;
    }
    else {
LAB_00b43fcc:
      puVar6 = puVar5;
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x19a;
        *(byte *)((long)param_2 + 2) = (byte)sVar11;
        memcpy((byte *)((long)param_2 + 3),puVar5,sVar11);
        param_2 = (byte *)((long)param_2 + 3) + sVar11;
        goto joined_r0x00b44000;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x13,puVar6,sVar11,param_2);
  }
joined_r0x00b44000:
  if ((uVar1 >> 3 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
    sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar11 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar11 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar11 < 0x80) goto LAB_00b4402c;
    }
    else {
LAB_00b4402c:
      puVar6 = puVar5;
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x1a2;
        *(byte *)((long)param_2 + 2) = (byte)sVar11;
        memcpy((byte *)((long)param_2 + 3),puVar5,sVar11);
        param_2 = (byte *)((long)param_2 + 3) + sVar11;
        goto joined_r0x00b43e34;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x14,puVar6,sVar11,param_2);
  }
joined_r0x00b43e34:
  if ((uVar1 >> 4 & 1) == 0) {
    uVar9 = *(ulong *)(param_1 + 8);
    goto joined_r0x00b43e3c;
  }
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
  sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
  if ((long)sVar11 < 0) {
    puVar6 = (undefined8 *)*puVar5;
    sVar11 = puVar5[1];
    puVar5 = puVar6;
    if ((long)sVar11 < 0x80) goto LAB_00b4408c;
  }
  else {
LAB_00b4408c:
    puVar6 = puVar5;
    if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
      param_2[0] = 0xaa;
      param_2[1] = 1;
      param_2[2] = (byte)sVar11;
      memcpy(param_2 + 3,puVar5,sVar11);
      param_2 = param_2 + 3 + sVar11;
      uVar9 = *(ulong *)(param_1 + 8);
      goto joined_r0x00b43e3c;
    }
  }
  param_2 = (byte *)FUN_006dd0b8(param_3,0x15,puVar6,sVar11,param_2);
  uVar9 = *(ulong *)(param_1 + 8);
joined_r0x00b43e3c:
  if ((uVar9 & 1) != 0) {
    uVar9 = uVar9 & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar9 + 0x1f);
    if ((long)uVar7 < 0) {
      __src = *(void **)(uVar9 + 8);
      uVar7 = (ulong)*(uint *)(uVar9 + 0x10);
    }
    else {
      __src = (void *)(uVar9 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar7) {
      pbVar4 = (byte *)FUN_006dcef8(param_3,__src,uVar7,param_2);
      return pbVar4;
    }
    memcpy(param_2,__src,uVar7 & 0xffffffff);
    param_2 = param_2 + (int)uVar7;
  }
  return param_2;
}


// ===== 00b44214  FUN_00b44214 =====

/* WARNING: Type propagation algorithm not settling */

long FUN_00b44214(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) == 0) {
    lVar4 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      uVar6 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      lVar4 = uVar6 + ((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar6 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar6 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar6 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar6 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 5 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x40)) * -9 + 0x2c0U >> 6) + lVar4;
    }
    if ((uVar1 >> 6 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x48)) * -9 + 0x2c0U >> 6) + lVar4;
    }
    if ((uVar1 >> 7 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x50)) * -9 + 0x2c0U >> 6) + lVar4;
    }
  }
  if ((uVar1 & 0x700) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x54)) * -9 + 0x2c0U >> 6) + lVar4;
    }
    if ((uVar1 >> 9 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x58)) * -9 + 0x2c0U >> 6) + lVar4;
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar4 = lVar4 + (ulong)(((int)LZCOUNT(*(undefined4 *)(param_1 + 0x5c)) * -9 + 0x160U >> 6) + 2
                             );
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar3 = (int)lVar4;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar6 + 0x10);
    }
    lVar4 = lVar5 + lVar4;
    iVar3 = (int)lVar4;
  }
  if ((iVar3 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)lVar4;
  }
  return lVar4;
}


// ===== 00b444a0  FUN_00b444a0 =====

void FUN_00b444a0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208(param_1 + 0x18);
  FUN_00714208(param_1 + 0x20);
  FUN_00714208(param_1 + 0x28);
  FUN_00714208(param_1 + 0x30);
  return;
}


// ===== 00b444ec  FUN_00b444ec =====

void FUN_00b444ec(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208((long)param_1 + 0x18);
  FUN_00714208((long)param_1 + 0x20);
  FUN_00714208((long)param_1 + 0x28);
  FUN_00714208((long)param_1 + 0x30);
  operator_delete(param_1);
  return;
}


// ===== 00b44544  FUN_00b44544 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b44544(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x18,*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x20,*(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x28,*(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x30,*(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b446b0  FUN_00b446b0 =====

undefined ** FUN_00b446b0(void)

{
  return &PTR_PTR_00d44e80;
}


// ===== 00b446c0  FUN_00b446c0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b446c0(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
  }
  if ((uVar1 & 0xf0) != 0) {
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dcab0();
    return;
  }
  return;
}


// ===== 00b447d0  FUN_00b447d0 =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b447d0(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  void *__src;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  size_t sVar11;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 4 & 1) != 0) {
    param_2 = (byte *)FUN_00b2c524(param_3,*(undefined8 *)(param_1 + 0x38),param_2);
  }
  if ((uVar1 >> 5 & 1) != 0) {
    param_2 = (byte *)FUN_00b437e4(param_3,*(undefined8 *)(param_1 + 0x40),param_2);
  }
  if ((uVar1 >> 6 & 1) != 0) {
    param_2 = (byte *)FUN_00b44b60(param_3,*(undefined8 *)(param_1 + 0x48),param_2);
  }
  if ((uVar1 >> 7 & 1) != 0) {
    param_2 = (byte *)FUN_00b44bd8(param_3,*(undefined8 *)(param_1 + 0x50),param_2);
  }
  if ((uVar1 >> 8 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar8 = *(uint *)(param_1 + 0x58);
    pbVar10 = param_2 + 2;
    param_2[0] = 0x80;
    param_2[1] = 1;
    pbVar4 = pbVar10;
    if (0x7f < uVar8) {
      do {
        uVar2 = uVar8 >> 0xe;
        bVar3 = (byte)uVar8;
        uVar8 = uVar8 >> 7;
        pbVar10 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar10;
      } while (uVar2 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar8;
  }
  if ((uVar1 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar11 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar11 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar11 < 0x80) goto LAB_00b448d8;
    }
    else {
LAB_00b448d8:
      puVar6 = puVar5;
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x18a;
        *(byte *)((long)param_2 + 2) = (byte)sVar11;
        memcpy((byte *)((long)param_2 + 3),puVar5,sVar11);
        param_2 = (byte *)((long)param_2 + 3) + sVar11;
        goto joined_r0x00b44a68;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x11,puVar6,sVar11,param_2);
  }
joined_r0x00b44a68:
  if ((uVar1 >> 1 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
    sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar11 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar11 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar11 < 0x80) goto LAB_00b44938;
    }
    else {
LAB_00b44938:
      puVar6 = puVar5;
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x192;
        *(byte *)((long)param_2 + 2) = (byte)sVar11;
        memcpy((byte *)((long)param_2 + 3),puVar5,sVar11);
        param_2 = (byte *)((long)param_2 + 3) + sVar11;
        goto joined_r0x00b4496c;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x12,puVar6,sVar11,param_2);
  }
joined_r0x00b4496c:
  if ((uVar1 >> 2 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
    sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar11 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar11 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar11 < 0x80) goto LAB_00b44998;
    }
    else {
LAB_00b44998:
      puVar6 = puVar5;
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x19a;
        *(byte *)((long)param_2 + 2) = (byte)sVar11;
        memcpy((byte *)((long)param_2 + 3),puVar5,sVar11);
        param_2 = (byte *)((long)param_2 + 3) + sVar11;
        goto joined_r0x00b44818;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x13,puVar6,sVar11,param_2);
  }
joined_r0x00b44818:
  if ((uVar1 >> 3 & 1) == 0) {
    uVar9 = *(ulong *)(param_1 + 8);
    goto joined_r0x00b44820;
  }
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
  sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
  if ((long)sVar11 < 0) {
    puVar6 = (undefined8 *)*puVar5;
    sVar11 = puVar5[1];
    puVar5 = puVar6;
    if ((long)sVar11 < 0x80) goto LAB_00b449f8;
  }
  else {
LAB_00b449f8:
    puVar6 = puVar5;
    if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
      param_2[0] = 0xa2;
      param_2[1] = 1;
      param_2[2] = (byte)sVar11;
      memcpy(param_2 + 3,puVar5,sVar11);
      param_2 = param_2 + 3 + sVar11;
      uVar9 = *(ulong *)(param_1 + 8);
      goto joined_r0x00b44820;
    }
  }
  param_2 = (byte *)FUN_006dd0b8(param_3,0x14,puVar6,sVar11,param_2);
  uVar9 = *(ulong *)(param_1 + 8);
joined_r0x00b44820:
  if ((uVar9 & 1) != 0) {
    uVar9 = uVar9 & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar9 + 0x1f);
    if ((long)uVar7 < 0) {
      __src = *(void **)(uVar9 + 8);
      uVar7 = (ulong)*(uint *)(uVar9 + 0x10);
    }
    else {
      __src = (void *)(uVar9 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar7) {
      pbVar4 = (byte *)FUN_006dcef8(param_3,__src,uVar7,param_2);
      return pbVar4;
    }
    memcpy(param_2,__src,uVar7 & 0xffffffff);
    param_2 = param_2 + (int)uVar7;
  }
  return param_2;
}


// ===== 00b44b60  FUN_00b44b60 =====

byte * FUN_00b44b60(undefined8 *param_1,ulong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((undefined1 *)*param_1 <= param_3) {
    param_3 = (undefined1 *)FUN_006dcdb8(param_1,param_3);
  }
  pbVar1 = param_3 + 1;
  *param_3 = 0x18;
  pbVar2 = pbVar1;
  uVar4 = param_2;
  if (0x7f < param_2) {
    do {
      param_2 = uVar4 >> 7;
      uVar3 = uVar4 >> 0xe;
      pbVar1 = pbVar2 + 1;
      *pbVar2 = (byte)uVar4 | 0x80;
      pbVar2 = pbVar1;
      uVar4 = param_2;
    } while (uVar3 != 0);
  }
  *pbVar1 = (byte)param_2;
  return pbVar1 + 1;
}


// ===== 00b44bd8  FUN_00b44bd8 =====

byte * FUN_00b44bd8(undefined8 *param_1,ulong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((undefined1 *)*param_1 <= param_3) {
    param_3 = (undefined1 *)FUN_006dcdb8(param_1,param_3);
  }
  pbVar1 = param_3 + 1;
  *param_3 = 0x20;
  pbVar2 = pbVar1;
  uVar4 = param_2;
  if (0x7f < param_2) {
    do {
      param_2 = uVar4 >> 7;
      uVar3 = uVar4 >> 0xe;
      pbVar1 = pbVar2 + 1;
      *pbVar2 = (byte)uVar4 | 0x80;
      pbVar2 = pbVar1;
      uVar4 = param_2;
    } while (uVar3 != 0);
  }
  *pbVar1 = (byte)param_2;
  return pbVar1 + 1;
}


// ===== 00b44c50  FUN_00b44c50 =====

/* WARNING: Type propagation algorithm not settling */

long FUN_00b44c50(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) == 0) {
    lVar4 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      uVar5 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar5 = (ulong)bVar2;
      }
      lVar4 = uVar5 + ((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar5 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar5 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar5 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar5 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar5 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar5 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x38)) * -9 + 0x2c0U >> 6) + lVar4;
    }
    if ((uVar1 >> 5 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x40)) * -9 + 0x2c0U >> 6) + lVar4;
    }
    if ((uVar1 >> 6 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x48)) * -9 + 0x2c0U >> 6) + lVar4;
    }
    if ((uVar1 >> 7 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x50)) * -9 + 0x2c0U >> 6) + lVar4;
    }
  }
  if ((uVar1 >> 8 & 1) == 0) {
    uVar5 = *(ulong *)(param_1 + 8);
  }
  else {
    lVar4 = lVar4 + (ulong)(((int)LZCOUNT(*(undefined4 *)(param_1 + 0x58)) * -9 + 0x160U >> 6) + 2);
    uVar5 = *(ulong *)(param_1 + 8);
  }
  if ((uVar5 & 1) == 0) {
    iVar3 = (int)lVar4;
  }
  else {
    lVar6 = (long)*(char *)((uVar5 & 0xfffffffffffffffe) + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)((uVar5 & 0xfffffffffffffffe) + 0x10);
    }
    lVar4 = lVar6 + lVar4;
    iVar3 = (int)lVar4;
  }
  if ((iVar3 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)lVar4;
  }
  return lVar4;
}


// ===== 00b44e70  FUN_00b44e70 =====

void FUN_00b44e70(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d44908;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[2] = 0;
  param_1[3] = &DAT_00208540;
  param_1[4] = &DAT_00208540;
  param_1[5] = &DAT_00208540;
  param_1[6] = &DAT_00208540;
  param_1[7] = 0;
  return;
}


// ===== 00b44e9c  FUN_00b44e9c =====

void FUN_00b44e9c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_00d44908;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  uVar1 = *(ulong *)(param_3 + 0x18);
  if ((uVar1 & 3) != 0) {
    uVar1 = FUN_00713e9c((ulong *)(param_3 + 0x18),param_2);
  }
  param_1[3] = uVar1;
  uVar1 = *(ulong *)(param_3 + 0x20);
  if ((uVar1 & 3) != 0) {
    uVar1 = FUN_00713e9c((ulong *)(param_3 + 0x20),param_2);
  }
  param_1[4] = uVar1;
  uVar1 = *(ulong *)(param_3 + 0x28);
  if ((uVar1 & 3) != 0) {
    uVar1 = FUN_00713e9c((ulong *)(param_3 + 0x28),param_2);
  }
  param_1[5] = uVar1;
  uVar1 = *(ulong *)(param_3 + 0x30);
  if ((uVar1 & 3) != 0) {
    uVar1 = FUN_00713e9c((ulong *)(param_3 + 0x30),param_2);
  }
  param_1[6] = uVar1;
  uVar2 = *(undefined8 *)(param_3 + 0x38);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 0x40);
  param_1[7] = uVar2;
  return;
}


// ===== 00b44f8c  FUN_00b44f8c =====

void FUN_00b44f8c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208(param_1 + 0x18);
  FUN_00714208(param_1 + 0x20);
  FUN_00714208(param_1 + 0x28);
  FUN_00714208(param_1 + 0x30);
  return;
}


// ===== 00b44fd8  FUN_00b44fd8 =====

void FUN_00b44fd8(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208((long)param_1 + 0x18);
  FUN_00714208((long)param_1 + 0x20);
  FUN_00714208((long)param_1 + 0x28);
  FUN_00714208((long)param_1 + 0x30);
  operator_delete(param_1);
  return;
}


// ===== 00b45030  FUN_00b45030 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b45030(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x7f) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x18,*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x20,*(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x28,*(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x30,*(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b45180  FUN_00b45180 =====

undefined ** FUN_00b45180(void)

{
  return &PTR_PTR_00d44ee8;
}


// ===== 00b45190  FUN_00b45190 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b45190(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
  }
  if ((uVar1 & 0x70) != 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dcab0();
    return;
  }
  return;
}


// ===== 00b45298  FUN_00b45298 =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b45298(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  void *__src;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  size_t sVar11;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 4 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar8 = *(uint *)(param_1 + 0x38);
    pbVar10 = param_2 + 1;
    *param_2 = 8;
    pbVar4 = pbVar10;
    if (0x7f < uVar8) {
      do {
        uVar2 = uVar8 >> 0xe;
        bVar3 = (byte)uVar8;
        uVar8 = uVar8 >> 7;
        pbVar10 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar10;
      } while (uVar2 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar8;
  }
  if ((uVar1 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar11 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar11 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar11 < 0x80) goto LAB_00b45338;
    }
    else {
LAB_00b45338:
      puVar6 = puVar5;
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x12;
        *(byte *)((long)param_2 + 1) = (byte)sVar11;
        memcpy((byte *)((long)param_2 + 2),puVar5,sVar11);
        param_2 = (byte *)((long)param_2 + 2) + sVar11;
        goto joined_r0x00b45518;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,2,puVar6,sVar11,param_2);
  }
joined_r0x00b45518:
  if ((uVar1 >> 5 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar8 = *(uint *)(param_1 + 0x3c);
    pbVar10 = param_2 + 1;
    *param_2 = 0x18;
    pbVar4 = pbVar10;
    if (0x7f < uVar8) {
      do {
        uVar2 = uVar8 >> 0xe;
        bVar3 = (byte)uVar8;
        uVar8 = uVar8 >> 7;
        pbVar10 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar10;
      } while (uVar2 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar8;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
    sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar11 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar11 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar11 < 0x80) goto LAB_00b453c0;
    }
    else {
LAB_00b453c0:
      puVar6 = puVar5;
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x22;
        *(byte *)((long)param_2 + 1) = (byte)sVar11;
        memcpy((byte *)((long)param_2 + 2),puVar5,sVar11);
        param_2 = (byte *)((long)param_2 + 2) + sVar11;
        goto joined_r0x00b45538;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,4,puVar6,sVar11,param_2);
  }
joined_r0x00b45538:
  if ((uVar1 >> 6 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar8 = *(uint *)(param_1 + 0x40);
    pbVar10 = param_2 + 1;
    *param_2 = 0x28;
    pbVar4 = pbVar10;
    if (0x7f < uVar8) {
      do {
        uVar2 = uVar8 >> 0xe;
        bVar3 = (byte)uVar8;
        uVar8 = uVar8 >> 7;
        pbVar10 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar10;
      } while (uVar2 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar8;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
    sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar11 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar11 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar11 < 0x80) goto LAB_00b45448;
    }
    else {
LAB_00b45448:
      puVar6 = puVar5;
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x32;
        *(byte *)((long)param_2 + 1) = (byte)sVar11;
        memcpy((byte *)((long)param_2 + 2),puVar5,sVar11);
        param_2 = (byte *)((long)param_2 + 2) + sVar11;
        goto joined_r0x00b45558;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,6,puVar6,sVar11,param_2);
  }
joined_r0x00b45558:
  if ((uVar1 >> 3 & 1) == 0) {
    uVar9 = *(ulong *)(param_1 + 8);
    goto joined_r0x00b4557c;
  }
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
  sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
  if ((long)sVar11 < 0) {
    puVar6 = (undefined8 *)*puVar5;
    sVar11 = puVar5[1];
    puVar5 = puVar6;
    if ((long)sVar11 < 0x80) goto LAB_00b454a8;
  }
  else {
LAB_00b454a8:
    puVar6 = puVar5;
    if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 0x3a;
      param_2[1] = (byte)sVar11;
      memcpy(param_2 + 2,puVar5,sVar11);
      param_2 = param_2 + 2 + sVar11;
      uVar9 = *(ulong *)(param_1 + 8);
      goto joined_r0x00b4557c;
    }
  }
  param_2 = (byte *)FUN_006dd0b8(param_3,7,puVar6,sVar11,param_2);
  uVar9 = *(ulong *)(param_1 + 8);
joined_r0x00b4557c:
  if ((uVar9 & 1) != 0) {
    uVar9 = uVar9 & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar9 + 0x1f);
    if ((long)uVar7 < 0) {
      __src = *(void **)(uVar9 + 8);
      uVar7 = (ulong)*(uint *)(uVar9 + 0x10);
    }
    else {
      __src = (void *)(uVar9 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar7) {
      pbVar4 = (byte *)FUN_006dcef8(param_3,__src,uVar7,param_2);
      return pbVar4;
    }
    memcpy(param_2,__src,uVar7 & 0xffffffff);
    param_2 = param_2 + (int)uVar7;
  }
  return param_2;
}


// ===== 00b45668  FUN_00b45668 =====

/* WARNING: Type propagation algorithm not settling */

long FUN_00b45668(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x7f) == 0) {
    lVar4 = 0;
    uVar5 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      uVar5 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar5 = (ulong)bVar2;
      }
      lVar4 = uVar5 + ((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar5 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar5 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar5 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar5 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar5 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar5 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x38)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x3c)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 6 & 1) == 0) {
      uVar5 = *(ulong *)(param_1 + 8);
    }
    else {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x40)) * -9 + 0x1a0U >> 6);
      uVar5 = *(ulong *)(param_1 + 8);
    }
  }
  if ((uVar5 & 1) == 0) {
    iVar3 = (int)lVar4;
  }
  else {
    lVar6 = (long)*(char *)((uVar5 & 0xfffffffffffffffe) + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)((uVar5 & 0xfffffffffffffffe) + 0x10);
    }
    lVar4 = lVar6 + lVar4;
    iVar3 = (int)lVar4;
  }
  if ((iVar3 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)lVar4;
  }
  return lVar4;
}


// ===== 00b45848  FUN_00b45848 =====

void FUN_00b45848(long param_1,long param_2)

{
  if (param_2 != param_1) {
    FUN_00b45190();
    FUN_00b45030(param_1,param_2);
    return;
  }
  return;
}


// ===== 00b4588c  FUN_00b4588c =====

void FUN_00b4588c(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 8) = uVar3;
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *(undefined8 *)(param_2 + 0x18) = uVar6;
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar7;
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_2 + 0x10) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x40);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *(undefined8 *)(param_2 + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined8 *)(param_2 + 0x38) = uVar6;
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_2 + 0x40) = uVar2;
  return;
}


// ===== 00b458f4  FUN_00b458f4 =====

void FUN_00b458f4(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  *param_1 = &PTR_FUN_00d44c08;
  param_1[1] = param_2;
  param_1[2] = 0;
  puVar1 = PTR_DAT_00d52590;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[4] = puVar1;
  param_1[5] = puVar1;
  param_1[6] = puVar1;
  param_1[7] = puVar1;
  param_1[8] = puVar1;
  param_1[9] = puVar1;
  param_1[10] = puVar1;
  param_1[0x15] = puVar1;
  param_1[0x16] = puVar1;
  param_1[0x17] = puVar1;
  param_1[0x18] = puVar1;
  param_1[0x19] = puVar1;
  param_1[0x1a] = puVar1;
  param_1[0x1b] = puVar1;
  param_1[0x1c] = puVar1;
  param_1[0x1d] = puVar1;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  return;
}


// ===== 00b45954  FUN_00b45954 =====

void FUN_00b45954(void)

{
  FUN_00b4595c();
  return;
}


// ===== 00b4595c  FUN_00b4595c =====

void FUN_00b4595c(long param_1)

{
  void *pvVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208(param_1 + 0x20);
  FUN_00714208(param_1 + 0x28);
  FUN_00714208(param_1 + 0x30);
  FUN_00714208(param_1 + 0x38);
  FUN_00714208(param_1 + 0x40);
  FUN_00714208(param_1 + 0x48);
  FUN_00714208(param_1 + 0x50);
  pvVar1 = *(void **)(param_1 + 0x58);
  if (pvVar1 != (void *)0x0) {
    if ((*(byte *)((long)pvVar1 + 8) & 1) != 0) {
      FUN_006dbb00();
    }
    FUN_00714208((long)pvVar1 + 0x18);
    FUN_00714208((long)pvVar1 + 0x20);
    FUN_00714208((long)pvVar1 + 0x28);
    FUN_00714208((long)pvVar1 + 0x30);
    operator_delete(pvVar1);
  }
  FUN_00714208(param_1 + 0xa8);
  FUN_00714208(param_1 + 0xb0);
  FUN_00714208(param_1 + 0xb8);
  FUN_00714208(param_1 + 0xc0);
  FUN_00714208(param_1 + 200);
  FUN_00714208(param_1 + 0xd0);
  FUN_00714208(param_1 + 0xd8);
  FUN_00714208(param_1 + 0xe0);
  FUN_00714208(param_1 + 0xe8);
  return;
}


// ===== 00b45a4c  FUN_00b45a4c =====

void FUN_00b45a4c(void *param_1)

{
  FUN_00b4595c();
  operator_delete(param_1);
  return;
}


// ===== 00b45a7c  FUN_00b45a7c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b45a7c(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)(param_1 + 8);
  uVar4 = uVar3;
  if ((uVar3 & 1) != 0) {
    uVar4 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x20,*(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc,uVar3);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar3 = *(ulong *)(param_1 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x28,*(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc,uVar3);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar3 = *(ulong *)(param_1 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x30,*(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc,uVar3);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar3 = *(ulong *)(param_1 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x38,*(ulong *)(param_2 + 0x38) & 0xfffffffffffffffc,uVar3);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      uVar3 = *(ulong *)(param_1 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x40,*(ulong *)(param_2 + 0x40) & 0xfffffffffffffffc,uVar3);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      uVar3 = *(ulong *)(param_1 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x48,*(ulong *)(param_2 + 0x48) & 0xfffffffffffffffc,uVar3);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      uVar3 = *(ulong *)(param_1 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x50,*(ulong *)(param_2 + 0x50) & 0xfffffffffffffffc,uVar3);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) == 0) {
        uVar2 = FUN_00b53a78(uVar4,*(undefined8 *)(param_2 + 0x58));
        *(undefined8 *)(param_1 + 0x58) = uVar2;
      }
      else {
        FUN_00b45030();
      }
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
    }
  }
  if ((uVar1 & 0xff0000) != 0) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + 0x88);
    }
    if ((uVar1 >> 0x12 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x89) = *(undefined1 *)(param_2 + 0x89);
    }
    if ((uVar1 >> 0x13 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
    }
    if ((uVar1 >> 0x14 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
    }
    if ((uVar1 >> 0x15 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
    }
    if ((uVar1 >> 0x16 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
    }
    if ((uVar1 >> 0x17 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
    }
  }
  if (uVar1 >> 0x18 != 0) {
    if ((uVar1 >> 0x18 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
    }
    if ((uVar1 >> 0x19 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0xa8,*(ulong *)(param_2 + 0xa8) & 0xfffffffffffffffc,uVar4);
    }
    if ((uVar1 >> 0x1a & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0xb0,*(ulong *)(param_2 + 0xb0) & 0xfffffffffffffffc,uVar4);
    }
    if ((uVar1 >> 0x1b & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0xb8,*(ulong *)(param_2 + 0xb8) & 0xfffffffffffffffc,uVar4);
    }
    if ((uVar1 >> 0x1c & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0xc0,*(ulong *)(param_2 + 0xc0) & 0xfffffffffffffffc,uVar4);
    }
    if ((uVar1 >> 0x1d & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 200,*(ulong *)(param_2 + 200) & 0xfffffffffffffffc,uVar4);
    }
    if ((uVar1 >> 0x1e & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0xd0,*(ulong *)(param_2 + 0xd0) & 0xfffffffffffffffc,uVar4);
    }
    if ((int)uVar1 < 0) {
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0xd8,*(ulong *)(param_2 + 0xd8) & 0xfffffffffffffffc,uVar4);
    }
  }
  uVar1 = *(uint *)(param_2 + 0x14);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0xe0,*(ulong *)(param_2 + 0xe0) & 0xfffffffffffffffc,uVar4);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0xe8,*(ulong *)(param_2 + 0xe8) & 0xfffffffffffffffc,uVar4);
    }
  }
  *(ulong *)(param_1 + 0x10) = *(ulong *)(param_2 + 0x10) | *(ulong *)(param_1 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04((ulong *)(param_1 + 8),(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b45f30  FUN_00b45f30 =====

undefined ** FUN_00b45f30(void)

{
  return &PTR_PTR_00d44f58;
}


// ===== 00b45f40  FUN_00b45f40 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b45f40(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      FUN_00b45190(*(undefined8 *)(param_1 + 0x58));
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  if ((uVar1 & 0xff0000) != 0) {
    *(undefined8 *)(param_1 + 0x8c) = 0;
    *(undefined8 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined8 *)(param_1 + 0x94) = 0;
  }
  if (uVar1 >> 0x18 != 0) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
    if ((uVar1 >> 0x19 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0xa8) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 0x1a & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0xb0) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 0x1b & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0xb8) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 0x1c & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0xc0) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 0x1d & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 200) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 0x1e & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0xd0) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((int)uVar1 < 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0xd8) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0xe0) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0xe8) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0((byte *)(param_1 + 8));
  return;
}


// ===== 00b46314  FUN_00b46314 =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b46314(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  void *__src;
  undefined8 *puVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  size_t sVar14;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 8 & 1) == 0) {
    pbVar6 = param_2;
    if ((uVar1 >> 0x11 & 1) != 0) goto LAB_00b463ec;
LAB_00b46344:
    if ((uVar1 >> 9 & 1) != 0) goto LAB_00b46414;
LAB_00b46348:
    if ((uVar1 >> 10 & 1) != 0) goto LAB_00b4643c;
LAB_00b4634c:
    if ((uVar1 >> 0xb & 1) != 0) goto LAB_00b46464;
LAB_00b46350:
    if ((uVar1 >> 0xc & 1) != 0) goto LAB_00b46488;
LAB_00b46354:
    if ((uVar1 >> 0xd & 1) != 0) goto LAB_00b464ac;
LAB_00b46358:
    if ((uVar1 >> 0xe & 1) != 0) goto LAB_00b464d4;
LAB_00b4635c:
    if ((uVar1 >> 0xf & 1) != 0) goto LAB_00b464fc;
LAB_00b46360:
    if ((uVar1 >> 0x10 & 1) != 0) goto LAB_00b46524;
LAB_00b46364:
    if ((uVar1 >> 0x13 & 1) != 0) goto LAB_00b4654c;
LAB_00b46368:
    if ((uVar1 >> 0x14 & 1) != 0) goto LAB_00b46574;
LAB_00b4636c:
    if ((uVar1 >> 0x15 & 1) != 0) goto LAB_00b465a0;
LAB_00b46370:
    if ((uVar1 >> 0x16 & 1) != 0) goto LAB_00b465c8;
LAB_00b46374:
    if ((uVar1 >> 0x17 & 1) != 0) goto LAB_00b465f0;
LAB_00b46378:
    if ((uVar1 >> 0x12 & 1) != 0) goto LAB_00b46618;
LAB_00b4637c:
    pbVar5 = pbVar6;
    if ((uVar1 >> 7 & 1) != 0) goto LAB_00b46640;
LAB_00b46380:
    if ((uVar1 >> 0x18 & 1) != 0) goto LAB_00b46660;
LAB_00b46384:
    if ((uVar1 >> 0x19 & 1) != 0) goto LAB_00b46688;
joined_r0x00b46cc4:
    if ((uVar1 >> 0x1a & 1) != 0) goto LAB_00b466e8;
LAB_00b4638c:
    if ((uVar1 & 1) != 0) goto LAB_00b46748;
LAB_00b46390:
    if ((uVar1 >> 1 & 1) == 0) goto LAB_00b46394;
LAB_00b467a8:
    puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
    sVar14 = (size_t)*(char *)((long)puVar7 + 0x17);
    if ((long)sVar14 < 0) {
      puVar8 = (undefined8 *)*puVar7;
      sVar14 = puVar7[1];
      puVar7 = puVar8;
      if ((long)sVar14 < 0x80) goto LAB_00b467d0;
LAB_00b46d0c:
      pbVar5 = (byte *)FUN_006dd0b8(param_3,0x68,puVar8,sVar14,pbVar5);
    }
    else {
LAB_00b467d0:
      puVar8 = puVar7;
      if ((*param_3 - (long)pbVar5) + 0xd < (long)sVar14) goto LAB_00b46d0c;
      pbVar5[0] = 0xc2;
      pbVar5[1] = 6;
      pbVar5[2] = (byte)sVar14;
      memcpy(pbVar5 + 3,puVar7,sVar14);
      pbVar5 = pbVar5 + 3 + sVar14;
    }
    if ((uVar1 >> 2 & 1) != 0) goto LAB_00b46808;
joined_r0x00b46398:
    if ((uVar1 >> 3 & 1) == 0) goto joined_r0x00b4639c;
LAB_00b46868:
    puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
    sVar14 = (size_t)*(char *)((long)puVar7 + 0x17);
    if ((long)sVar14 < 0) {
      puVar8 = (undefined8 *)*puVar7;
      sVar14 = puVar7[1];
      puVar7 = puVar8;
      if ((long)sVar14 < 0x80) goto LAB_00b46890;
LAB_00b46d4c:
      pbVar5 = (byte *)FUN_006dd0b8(param_3,0x6a,puVar8,sVar14,pbVar5);
      goto joined_r0x00b4639c;
    }
LAB_00b46890:
    puVar8 = puVar7;
    if ((*param_3 - (long)pbVar5) + 0xd < (long)sVar14) goto LAB_00b46d4c;
    pbVar5[0] = 0xd2;
    pbVar5[1] = 6;
    pbVar5[2] = (byte)sVar14;
    memcpy(pbVar5 + 3,puVar7,sVar14);
    pbVar5 = pbVar5 + 3 + sVar14;
    if ((uVar1 >> 4 & 1) == 0) goto LAB_00b463a0;
LAB_00b468c8:
    puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc);
    sVar14 = (size_t)*(char *)((long)puVar7 + 0x17);
    if ((long)sVar14 < 0) {
      puVar8 = (undefined8 *)*puVar7;
      sVar14 = puVar7[1];
      puVar7 = puVar8;
      if ((long)sVar14 < 0x80) goto LAB_00b468f0;
LAB_00b46d6c:
      pbVar5 = (byte *)FUN_006dd0b8(param_3,0x6c,puVar8,sVar14,pbVar5);
    }
    else {
LAB_00b468f0:
      puVar8 = puVar7;
      if ((*param_3 - (long)pbVar5) + 0xd < (long)sVar14) goto LAB_00b46d6c;
      pbVar5[0] = 0xe2;
      pbVar5[1] = 6;
      pbVar5[2] = (byte)sVar14;
      memcpy(pbVar5 + 3,puVar7,sVar14);
      pbVar5 = pbVar5 + 3 + sVar14;
    }
    if ((uVar1 >> 5 & 1) == 0) goto joined_r0x00b463a4;
LAB_00b46928:
    puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
    sVar14 = (size_t)*(char *)((long)puVar7 + 0x17);
    if ((long)sVar14 < 0) {
      puVar8 = (undefined8 *)*puVar7;
      sVar14 = puVar7[1];
      puVar7 = puVar8;
      if ((long)sVar14 < 0x80) goto LAB_00b46950;
LAB_00b46d8c:
      pbVar5 = (byte *)FUN_006dd0b8(param_3,0x6d,puVar8,sVar14,pbVar5);
      goto joined_r0x00b463a4;
    }
LAB_00b46950:
    puVar8 = puVar7;
    if ((*param_3 - (long)pbVar5) + 0xd < (long)sVar14) goto LAB_00b46d8c;
    pbVar5[0] = 0xea;
    pbVar5[1] = 6;
    pbVar5[2] = (byte)sVar14;
    memcpy(pbVar5 + 3,puVar7,sVar14);
    pbVar5 = pbVar5 + 3 + sVar14;
    if ((uVar1 >> 6 & 1) != 0) goto LAB_00b46988;
joined_r0x00b46dc4:
    if ((uVar1 >> 0x1b & 1) != 0) goto LAB_00b469e8;
LAB_00b463ac:
    if ((uVar1 >> 0x1c & 1) != 0) goto LAB_00b46a48;
LAB_00b463b0:
    if ((uVar1 >> 0x1d & 1) == 0) goto LAB_00b463b4;
LAB_00b46aa8:
    puVar7 = (undefined8 *)(*(ulong *)(param_1 + 200) & 0xfffffffffffffffc);
    sVar14 = (size_t)*(char *)((long)puVar7 + 0x17);
    if ((long)sVar14 < 0) {
      puVar8 = (undefined8 *)*puVar7;
      sVar14 = puVar7[1];
      puVar7 = puVar8;
      if ((long)sVar14 < 0x80) goto LAB_00b46ad0;
LAB_00b46e0c:
      pbVar5 = (byte *)FUN_006dd0b8(param_3,0x75,puVar8,sVar14,pbVar5);
    }
    else {
LAB_00b46ad0:
      puVar8 = puVar7;
      if ((*param_3 - (long)pbVar5) + 0xd < (long)sVar14) goto LAB_00b46e0c;
      pbVar5[0] = 0xaa;
      pbVar5[1] = 7;
      pbVar5[2] = (byte)sVar14;
      memcpy(pbVar5 + 3,puVar7,sVar14);
      pbVar5 = pbVar5 + 3 + sVar14;
    }
    if ((uVar1 >> 0x1e & 1) != 0) goto LAB_00b46b08;
joined_r0x00b463b8:
    if (-1 < (int)uVar1) goto LAB_00b463bc;
LAB_00b46b68:
    puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0xd8) & 0xfffffffffffffffc);
    sVar14 = (size_t)*(char *)((long)puVar7 + 0x17);
    if ((long)sVar14 < 0) {
      puVar8 = (undefined8 *)*puVar7;
      sVar14 = puVar7[1];
      puVar7 = puVar8;
      if ((long)sVar14 < 0x80) goto LAB_00b46b90;
LAB_00b46ea0:
      pbVar5 = (byte *)FUN_006dd0b8(param_3,0x77,puVar8,sVar14,pbVar5);
      uVar1 = *(uint *)(param_1 + 0x14);
    }
    else {
LAB_00b46b90:
      puVar8 = puVar7;
      if ((*param_3 - (long)pbVar5) + 0xd < (long)sVar14) goto LAB_00b46ea0;
      pbVar5[0] = 0xba;
      pbVar5[1] = 7;
      pbVar5[2] = (byte)sVar14;
      memcpy(pbVar5 + 3,puVar7,sVar14);
      pbVar5 = pbVar5 + 3 + sVar14;
      uVar1 = *(uint *)(param_1 + 0x14);
    }
  }
  else {
    param_2 = (byte *)FUN_00b2c524(param_3,*(undefined8 *)(param_1 + 0x60),param_2);
    pbVar6 = param_2;
    if ((uVar1 >> 0x11 & 1) == 0) goto LAB_00b46344;
LAB_00b463ec:
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    bVar3 = *(byte *)(param_1 + 0x88);
    *param_2 = 0x10;
    pbVar6 = param_2 + 2;
    param_2[1] = bVar3;
    if ((uVar1 >> 9 & 1) == 0) goto LAB_00b46348;
LAB_00b46414:
    if ((byte *)*param_3 <= pbVar6) {
      pbVar6 = (byte *)FUN_006dcdb8(param_3,pbVar6);
    }
    uVar10 = *(uint *)(param_1 + 0x68);
    pbVar5 = pbVar6 + 1;
    *pbVar6 = 0x18;
    pbVar6 = pbVar5;
    if (0x7f < uVar10) {
      do {
        uVar4 = uVar10 >> 0xe;
        bVar3 = (byte)uVar10;
        uVar10 = uVar10 >> 7;
        pbVar5 = pbVar6 + 1;
        *pbVar6 = bVar3 | 0x80;
        pbVar6 = pbVar5;
      } while (uVar4 != 0);
    }
    pbVar6 = pbVar5 + 1;
    *pbVar5 = (byte)uVar10;
    if ((uVar1 >> 10 & 1) == 0) goto LAB_00b4634c;
LAB_00b4643c:
    if ((byte *)*param_3 <= pbVar6) {
      pbVar6 = (byte *)FUN_006dcdb8(param_3,pbVar6);
    }
    uVar10 = *(uint *)(param_1 + 0x6c);
    pbVar5 = pbVar6 + 1;
    *pbVar6 = 0x20;
    pbVar6 = pbVar5;
    if (0x7f < uVar10) {
      do {
        uVar4 = uVar10 >> 0xe;
        bVar3 = (byte)uVar10;
        uVar10 = uVar10 >> 7;
        pbVar5 = pbVar6 + 1;
        *pbVar6 = bVar3 | 0x80;
        pbVar6 = pbVar5;
      } while (uVar4 != 0);
    }
    pbVar6 = pbVar5 + 1;
    *pbVar5 = (byte)uVar10;
    if ((uVar1 >> 0xb & 1) == 0) goto LAB_00b46350;
LAB_00b46464:
    if ((byte *)*param_3 <= pbVar6) {
      pbVar6 = (byte *)FUN_006dcdb8(param_3,pbVar6);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    *pbVar6 = 0x2d;
    *(undefined4 *)(pbVar6 + 1) = uVar2;
    pbVar6 = pbVar6 + 5;
    if ((uVar1 >> 0xc & 1) == 0) goto LAB_00b46354;
LAB_00b46488:
    if ((byte *)*param_3 <= pbVar6) {
      pbVar6 = (byte *)FUN_006dcdb8(param_3,pbVar6);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x74);
    *pbVar6 = 0x35;
    *(undefined4 *)(pbVar6 + 1) = uVar2;
    pbVar6 = pbVar6 + 5;
    if ((uVar1 >> 0xd & 1) == 0) goto LAB_00b46358;
LAB_00b464ac:
    if ((byte *)*param_3 <= pbVar6) {
      pbVar6 = (byte *)FUN_006dcdb8(param_3,pbVar6);
    }
    uVar10 = *(uint *)(param_1 + 0x78);
    pbVar5 = pbVar6 + 1;
    *pbVar6 = 0x40;
    pbVar6 = pbVar5;
    if (0x7f < uVar10) {
      do {
        uVar4 = uVar10 >> 0xe;
        bVar3 = (byte)uVar10;
        uVar10 = uVar10 >> 7;
        pbVar5 = pbVar6 + 1;
        *pbVar6 = bVar3 | 0x80;
        pbVar6 = pbVar5;
      } while (uVar4 != 0);
    }
    pbVar6 = pbVar5 + 1;
    *pbVar5 = (byte)uVar10;
    if ((uVar1 >> 0xe & 1) == 0) goto LAB_00b4635c;
LAB_00b464d4:
    if ((byte *)*param_3 <= pbVar6) {
      pbVar6 = (byte *)FUN_006dcdb8(param_3,pbVar6);
    }
    uVar10 = *(uint *)(param_1 + 0x7c);
    pbVar5 = pbVar6 + 1;
    *pbVar6 = 0x48;
    pbVar6 = pbVar5;
    if (0x7f < uVar10) {
      do {
        uVar4 = uVar10 >> 0xe;
        bVar3 = (byte)uVar10;
        uVar10 = uVar10 >> 7;
        pbVar5 = pbVar6 + 1;
        *pbVar6 = bVar3 | 0x80;
        pbVar6 = pbVar5;
      } while (uVar4 != 0);
    }
    pbVar6 = pbVar5 + 1;
    *pbVar5 = (byte)uVar10;
    if ((uVar1 >> 0xf & 1) == 0) goto LAB_00b46360;
LAB_00b464fc:
    if ((byte *)*param_3 <= pbVar6) {
      pbVar6 = (byte *)FUN_006dcdb8(param_3,pbVar6);
    }
    uVar10 = *(uint *)(param_1 + 0x80);
    pbVar5 = pbVar6 + 1;
    *pbVar6 = 0x50;
    pbVar6 = pbVar5;
    if (0x7f < uVar10) {
      do {
        uVar4 = uVar10 >> 0xe;
        bVar3 = (byte)uVar10;
        uVar10 = uVar10 >> 7;
        pbVar5 = pbVar6 + 1;
        *pbVar6 = bVar3 | 0x80;
        pbVar6 = pbVar5;
      } while (uVar4 != 0);
    }
    pbVar6 = pbVar5 + 1;
    *pbVar5 = (byte)uVar10;
    if ((uVar1 >> 0x10 & 1) == 0) goto LAB_00b46364;
LAB_00b46524:
    if ((byte *)*param_3 <= pbVar6) {
      pbVar6 = (byte *)FUN_006dcdb8(param_3,pbVar6);
    }
    uVar10 = *(uint *)(param_1 + 0x84);
    pbVar5 = pbVar6 + 1;
    *pbVar6 = 0x58;
    pbVar6 = pbVar5;
    if (0x7f < uVar10) {
      do {
        uVar4 = uVar10 >> 0xe;
        bVar3 = (byte)uVar10;
        uVar10 = uVar10 >> 7;
        pbVar5 = pbVar6 + 1;
        *pbVar6 = bVar3 | 0x80;
        pbVar6 = pbVar5;
      } while (uVar4 != 0);
    }
    pbVar6 = pbVar5 + 1;
    *pbVar5 = (byte)uVar10;
    if ((uVar1 >> 0x13 & 1) == 0) goto LAB_00b46368;
LAB_00b4654c:
    if ((byte *)*param_3 <= pbVar6) {
      pbVar6 = (byte *)FUN_006dcdb8(param_3,pbVar6);
    }
    uVar10 = *(uint *)(param_1 + 0x8c);
    pbVar5 = pbVar6 + 1;
    *pbVar6 = 0x78;
    pbVar6 = pbVar5;
    if (0x7f < uVar10) {
      do {
        uVar4 = uVar10 >> 0xe;
        bVar3 = (byte)uVar10;
        uVar10 = uVar10 >> 7;
        pbVar5 = pbVar6 + 1;
        *pbVar6 = bVar3 | 0x80;
        pbVar6 = pbVar5;
      } while (uVar4 != 0);
    }
    pbVar6 = pbVar5 + 1;
    *pbVar5 = (byte)uVar10;
    if ((uVar1 >> 0x14 & 1) == 0) goto LAB_00b4636c;
LAB_00b46574:
    if ((byte *)*param_3 <= pbVar6) {
      pbVar6 = (byte *)FUN_006dcdb8(param_3,pbVar6);
    }
    uVar10 = *(uint *)(param_1 + 0x90);
    uVar9 = (ulong)(int)uVar10;
    pbVar5 = pbVar6 + 2;
    pbVar6[0] = 0x80;
    pbVar6[1] = 1;
    uVar11 = uVar9;
    pbVar6 = pbVar5;
    if (0x7f < uVar10) {
      do {
        uVar9 = uVar11 >> 7;
        uVar12 = uVar11 >> 0xe;
        pbVar5 = pbVar6 + 1;
        *pbVar6 = (byte)uVar11 | 0x80;
        uVar11 = uVar9;
        pbVar6 = pbVar5;
      } while (uVar12 != 0);
    }
    pbVar6 = pbVar5 + 1;
    *pbVar5 = (byte)uVar9;
    if ((uVar1 >> 0x15 & 1) == 0) goto LAB_00b46370;
LAB_00b465a0:
    if ((byte *)*param_3 <= pbVar6) {
      pbVar6 = (byte *)FUN_006dcdb8(param_3,pbVar6);
    }
    uVar10 = *(uint *)(param_1 + 0x94);
    pbVar5 = pbVar6 + 2;
    pbVar6[0] = 0x88;
    pbVar6[1] = 1;
    pbVar6 = pbVar5;
    if (0x7f < uVar10) {
      do {
        uVar4 = uVar10 >> 0xe;
        bVar3 = (byte)uVar10;
        uVar10 = uVar10 >> 7;
        pbVar5 = pbVar6 + 1;
        *pbVar6 = bVar3 | 0x80;
        pbVar6 = pbVar5;
      } while (uVar4 != 0);
    }
    pbVar6 = pbVar5 + 1;
    *pbVar5 = (byte)uVar10;
    if ((uVar1 >> 0x16 & 1) == 0) goto LAB_00b46374;
LAB_00b465c8:
    if ((byte *)*param_3 <= pbVar6) {
      pbVar6 = (byte *)FUN_006dcdb8(param_3,pbVar6);
    }
    uVar10 = *(uint *)(param_1 + 0x98);
    pbVar5 = pbVar6 + 2;
    pbVar6[0] = 0x90;
    pbVar6[1] = 1;
    pbVar6 = pbVar5;
    if (0x7f < uVar10) {
      do {
        uVar4 = uVar10 >> 0xe;
        bVar3 = (byte)uVar10;
        uVar10 = uVar10 >> 7;
        pbVar5 = pbVar6 + 1;
        *pbVar6 = bVar3 | 0x80;
        pbVar6 = pbVar5;
      } while (uVar4 != 0);
    }
    pbVar6 = pbVar5 + 1;
    *pbVar5 = (byte)uVar10;
    if ((uVar1 >> 0x17 & 1) == 0) goto LAB_00b46378;
LAB_00b465f0:
    if ((byte *)*param_3 <= pbVar6) {
      pbVar6 = (byte *)FUN_006dcdb8(param_3,pbVar6);
    }
    uVar10 = *(uint *)(param_1 + 0x9c);
    pbVar5 = pbVar6 + 2;
    pbVar6[0] = 0x98;
    pbVar6[1] = 1;
    pbVar6 = pbVar5;
    if (0x7f < uVar10) {
      do {
        uVar4 = uVar10 >> 0xe;
        bVar3 = (byte)uVar10;
        uVar10 = uVar10 >> 7;
        pbVar5 = pbVar6 + 1;
        *pbVar6 = bVar3 | 0x80;
        pbVar6 = pbVar5;
      } while (uVar4 != 0);
    }
    pbVar6 = pbVar5 + 1;
    *pbVar5 = (byte)uVar10;
    if ((uVar1 >> 0x12 & 1) == 0) goto LAB_00b4637c;
LAB_00b46618:
    if ((byte *)*param_3 <= pbVar6) {
      pbVar6 = (byte *)FUN_006dcdb8(param_3,pbVar6);
    }
    bVar3 = *(byte *)(param_1 + 0x89);
    pbVar6[0] = 0xa0;
    pbVar6[1] = 1;
    pbVar5 = pbVar6 + 3;
    pbVar6[2] = bVar3;
    if ((uVar1 >> 7 & 1) == 0) goto LAB_00b46380;
LAB_00b46640:
    pbVar5 = (byte *)FUN_006fc2f0(0x15,*(long *)(param_1 + 0x58),
                                  *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x14),pbVar5,param_3);
    if ((uVar1 >> 0x18 & 1) == 0) goto LAB_00b46384;
LAB_00b46660:
    if ((byte *)*param_3 <= pbVar5) {
      pbVar5 = (byte *)FUN_006dcdb8(param_3,pbVar5);
    }
    uVar10 = *(uint *)(param_1 + 0xa0);
    pbVar13 = pbVar5 + 2;
    pbVar5[0] = 0xb0;
    pbVar5[1] = 1;
    pbVar6 = pbVar13;
    if (0x7f < uVar10) {
      do {
        uVar4 = uVar10 >> 0xe;
        bVar3 = (byte)uVar10;
        uVar10 = uVar10 >> 7;
        pbVar13 = pbVar6 + 1;
        *pbVar6 = bVar3 | 0x80;
        pbVar6 = pbVar13;
      } while (uVar4 != 0);
    }
    pbVar5 = pbVar13 + 1;
    *pbVar13 = (byte)uVar10;
    if ((uVar1 >> 0x19 & 1) == 0) goto joined_r0x00b46cc4;
LAB_00b46688:
    puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0xa8) & 0xfffffffffffffffc);
    sVar14 = (size_t)*(char *)((long)puVar7 + 0x17);
    if ((long)sVar14 < 0) {
      puVar8 = (undefined8 *)*puVar7;
      sVar14 = puVar7[1];
      puVar7 = puVar8;
      if ((long)sVar14 < 0x80) goto LAB_00b466b0;
LAB_00b46cac:
      pbVar5 = (byte *)FUN_006dd0b8(param_3,0x65,puVar8,sVar14,pbVar5);
      goto joined_r0x00b46cc4;
    }
LAB_00b466b0:
    puVar8 = puVar7;
    if ((*param_3 - (long)pbVar5) + 0xd < (long)sVar14) goto LAB_00b46cac;
    pbVar5[0] = 0xaa;
    pbVar5[1] = 6;
    pbVar5[2] = (byte)sVar14;
    memcpy(pbVar5 + 3,puVar7,sVar14);
    pbVar5 = pbVar5 + 3 + sVar14;
    if ((uVar1 >> 0x1a & 1) == 0) goto LAB_00b4638c;
LAB_00b466e8:
    puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0xb0) & 0xfffffffffffffffc);
    sVar14 = (size_t)*(char *)((long)puVar7 + 0x17);
    if ((long)sVar14 < 0) {
      puVar8 = (undefined8 *)*puVar7;
      sVar14 = puVar7[1];
      puVar7 = puVar8;
      if ((long)sVar14 < 0x80) goto LAB_00b46710;
LAB_00b46ccc:
      pbVar5 = (byte *)FUN_006dd0b8(param_3,0x66,puVar8,sVar14,pbVar5);
    }
    else {
LAB_00b46710:
      puVar8 = puVar7;
      if ((*param_3 - (long)pbVar5) + 0xd < (long)sVar14) goto LAB_00b46ccc;
      pbVar5[0] = 0xb2;
      pbVar5[1] = 6;
      pbVar5[2] = (byte)sVar14;
      memcpy(pbVar5 + 3,puVar7,sVar14);
      pbVar5 = pbVar5 + 3 + sVar14;
    }
    if ((uVar1 & 1) == 0) goto LAB_00b46390;
LAB_00b46748:
    puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
    sVar14 = (size_t)*(char *)((long)puVar7 + 0x17);
    if ((long)sVar14 < 0) {
      puVar8 = (undefined8 *)*puVar7;
      sVar14 = puVar7[1];
      puVar7 = puVar8;
      if ((long)sVar14 < 0x80) goto LAB_00b46770;
LAB_00b46cec:
      pbVar5 = (byte *)FUN_006dd0b8(param_3,0x67,puVar8,sVar14,pbVar5);
    }
    else {
LAB_00b46770:
      puVar8 = puVar7;
      if ((*param_3 - (long)pbVar5) + 0xd < (long)sVar14) goto LAB_00b46cec;
      pbVar5[0] = 0xba;
      pbVar5[1] = 6;
      pbVar5[2] = (byte)sVar14;
      memcpy(pbVar5 + 3,puVar7,sVar14);
      pbVar5 = pbVar5 + 3 + sVar14;
    }
    if ((uVar1 >> 1 & 1) != 0) goto LAB_00b467a8;
LAB_00b46394:
    if ((uVar1 >> 2 & 1) == 0) goto joined_r0x00b46398;
LAB_00b46808:
    puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
    sVar14 = (size_t)*(char *)((long)puVar7 + 0x17);
    if ((long)sVar14 < 0) {
      puVar8 = (undefined8 *)*puVar7;
      sVar14 = puVar7[1];
      puVar7 = puVar8;
      if ((long)sVar14 < 0x80) goto LAB_00b46830;
    }
    else {
LAB_00b46830:
      puVar8 = puVar7;
      if ((long)sVar14 <= (*param_3 - (long)pbVar5) + 0xd) {
        pbVar5[0] = 0xca;
        pbVar5[1] = 6;
        pbVar5[2] = (byte)sVar14;
        memcpy(pbVar5 + 3,puVar7,sVar14);
        pbVar5 = pbVar5 + 3 + sVar14;
        goto joined_r0x00b46398;
      }
    }
    pbVar5 = (byte *)FUN_006dd0b8(param_3,0x69,puVar8,sVar14,pbVar5);
    if ((uVar1 >> 3 & 1) != 0) goto LAB_00b46868;
joined_r0x00b4639c:
    if ((uVar1 >> 4 & 1) != 0) goto LAB_00b468c8;
LAB_00b463a0:
    if ((uVar1 >> 5 & 1) != 0) goto LAB_00b46928;
joined_r0x00b463a4:
    if ((uVar1 >> 6 & 1) == 0) goto joined_r0x00b46dc4;
LAB_00b46988:
    puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc);
    sVar14 = (size_t)*(char *)((long)puVar7 + 0x17);
    if ((long)sVar14 < 0) {
      puVar8 = (undefined8 *)*puVar7;
      sVar14 = puVar7[1];
      puVar7 = puVar8;
      if ((long)sVar14 < 0x80) goto LAB_00b469b0;
LAB_00b46dac:
      pbVar5 = (byte *)FUN_006dd0b8(param_3,0x6e,puVar8,sVar14,pbVar5);
      goto joined_r0x00b46dc4;
    }
LAB_00b469b0:
    puVar8 = puVar7;
    if ((*param_3 - (long)pbVar5) + 0xd < (long)sVar14) goto LAB_00b46dac;
    pbVar5[0] = 0xf2;
    pbVar5[1] = 6;
    pbVar5[2] = (byte)sVar14;
    memcpy(pbVar5 + 3,puVar7,sVar14);
    pbVar5 = pbVar5 + 3 + sVar14;
    if ((uVar1 >> 0x1b & 1) == 0) goto LAB_00b463ac;
LAB_00b469e8:
    puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0xb8) & 0xfffffffffffffffc);
    sVar14 = (size_t)*(char *)((long)puVar7 + 0x17);
    if ((long)sVar14 < 0) {
      puVar8 = (undefined8 *)*puVar7;
      sVar14 = puVar7[1];
      puVar7 = puVar8;
      if ((long)sVar14 < 0x80) goto LAB_00b46a10;
LAB_00b46dcc:
      pbVar5 = (byte *)FUN_006dd0b8(param_3,0x73,puVar8,sVar14,pbVar5);
    }
    else {
LAB_00b46a10:
      puVar8 = puVar7;
      if ((*param_3 - (long)pbVar5) + 0xd < (long)sVar14) goto LAB_00b46dcc;
      pbVar5[0] = 0x9a;
      pbVar5[1] = 7;
      pbVar5[2] = (byte)sVar14;
      memcpy(pbVar5 + 3,puVar7,sVar14);
      pbVar5 = pbVar5 + 3 + sVar14;
    }
    if ((uVar1 >> 0x1c & 1) == 0) goto LAB_00b463b0;
LAB_00b46a48:
    puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0xc0) & 0xfffffffffffffffc);
    sVar14 = (size_t)*(char *)((long)puVar7 + 0x17);
    if ((long)sVar14 < 0) {
      puVar8 = (undefined8 *)*puVar7;
      sVar14 = puVar7[1];
      puVar7 = puVar8;
      if ((long)sVar14 < 0x80) goto LAB_00b46a70;
LAB_00b46dec:
      pbVar5 = (byte *)FUN_006dd0b8(param_3,0x74,puVar8,sVar14,pbVar5);
    }
    else {
LAB_00b46a70:
      puVar8 = puVar7;
      if ((*param_3 - (long)pbVar5) + 0xd < (long)sVar14) goto LAB_00b46dec;
      pbVar5[0] = 0xa2;
      pbVar5[1] = 7;
      pbVar5[2] = (byte)sVar14;
      memcpy(pbVar5 + 3,puVar7,sVar14);
      pbVar5 = pbVar5 + 3 + sVar14;
    }
    if ((uVar1 >> 0x1d & 1) != 0) goto LAB_00b46aa8;
LAB_00b463b4:
    if ((uVar1 >> 0x1e & 1) == 0) goto joined_r0x00b463b8;
LAB_00b46b08:
    puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0xd0) & 0xfffffffffffffffc);
    sVar14 = (size_t)*(char *)((long)puVar7 + 0x17);
    if ((long)sVar14 < 0) {
      puVar8 = (undefined8 *)*puVar7;
      sVar14 = puVar7[1];
      puVar7 = puVar8;
      if ((long)sVar14 < 0x80) goto LAB_00b46b30;
    }
    else {
LAB_00b46b30:
      puVar8 = puVar7;
      if ((long)sVar14 <= (*param_3 - (long)pbVar5) + 0xd) {
        pbVar5[0] = 0xb2;
        pbVar5[1] = 7;
        pbVar5[2] = (byte)sVar14;
        memcpy(pbVar5 + 3,puVar7,sVar14);
        pbVar5 = pbVar5 + 3 + sVar14;
        goto joined_r0x00b463b8;
      }
    }
    pbVar5 = (byte *)FUN_006dd0b8(param_3,0x76,puVar8,sVar14,pbVar5);
    if ((int)uVar1 < 0) goto LAB_00b46b68;
LAB_00b463bc:
    uVar1 = *(uint *)(param_1 + 0x14);
  }
  if ((uVar1 & 1) != 0) {
    puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0xe0) & 0xfffffffffffffffc);
    sVar14 = (size_t)*(char *)((long)puVar7 + 0x17);
    if ((long)sVar14 < 0) {
      puVar8 = (undefined8 *)*puVar7;
      sVar14 = puVar7[1];
      puVar7 = puVar8;
      if ((long)sVar14 < 0x80) goto LAB_00b46bf4;
    }
    else {
LAB_00b46bf4:
      puVar8 = puVar7;
      if ((long)sVar14 <= (*param_3 - (long)pbVar5) + 0xd) {
        pbVar5[0] = 0xc2;
        pbVar5[1] = 7;
        pbVar5[2] = (byte)sVar14;
        memcpy(pbVar5 + 3,puVar7,sVar14);
        pbVar5 = pbVar5 + 3 + sVar14;
        goto joined_r0x00b46e64;
      }
    }
    pbVar5 = (byte *)FUN_006dd0b8(param_3,0x78,puVar8,sVar14,pbVar5);
  }
joined_r0x00b46e64:
  if ((uVar1 >> 1 & 1) == 0) {
    uVar11 = *(ulong *)(param_1 + 8);
    goto joined_r0x00b46e88;
  }
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0xe8) & 0xfffffffffffffffc);
  sVar14 = (size_t)*(char *)((long)puVar7 + 0x17);
  if ((long)sVar14 < 0) {
    puVar8 = (undefined8 *)*puVar7;
    sVar14 = puVar7[1];
    puVar7 = puVar8;
    if ((long)sVar14 < 0x80) goto LAB_00b46c54;
  }
  else {
LAB_00b46c54:
    puVar8 = puVar7;
    if ((long)sVar14 <= (*param_3 - (long)pbVar5) + 0xd) {
      pbVar5[0] = 0xca;
      pbVar5[1] = 7;
      pbVar5[2] = (byte)sVar14;
      memcpy(pbVar5 + 3,puVar7,sVar14);
      pbVar5 = pbVar5 + 3 + sVar14;
      uVar11 = *(ulong *)(param_1 + 8);
      goto joined_r0x00b46e88;
    }
  }
  pbVar5 = (byte *)FUN_006dd0b8(param_3,0x79,puVar8,sVar14,pbVar5);
  uVar11 = *(ulong *)(param_1 + 8);
joined_r0x00b46e88:
  if ((uVar11 & 1) != 0) {
    uVar11 = uVar11 & 0xfffffffffffffffe;
    uVar9 = (ulong)*(char *)(uVar11 + 0x1f);
    if ((long)uVar9 < 0) {
      __src = *(void **)(uVar11 + 8);
      uVar9 = (ulong)*(uint *)(uVar11 + 0x10);
    }
    else {
      __src = (void *)(uVar11 + 8);
    }
    if (*param_3 - (long)pbVar5 < (long)(int)uVar9) {
      pbVar6 = (byte *)FUN_006dcef8(param_3,__src,uVar9,pbVar5);
      return pbVar6;
    }
    memcpy(pbVar5,__src,uVar9 & 0xffffffff);
    pbVar5 = pbVar5 + (int)uVar9;
  }
  return pbVar5;
}


// ===== 00b47178  FUN_00b47178 =====

/* WARNING: Type propagation algorithm not settling */

long FUN_00b47178(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar6 = 0;
  if ((uVar1 & 0x40000) != 0) {
    lVar6 = 3;
  }
  uVar8 = NEON_cnt((ulong)(uVar1 & 0x1800),1);
  uVar7 = NEON_addv(uVar8,1);
  lVar6 = lVar6 + ((ulong)(uVar1 >> 0x10) & 2) +
          (ulong)(uint)((int)CONCAT71((int7)((ulong)uVar8 >> 8),uVar7) * 5);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar4 = (ulong)bVar2;
      }
      lVar6 = lVar6 + uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar4 = (ulong)bVar2;
      }
      lVar6 = lVar6 + uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar4 = (ulong)bVar2;
      }
      lVar6 = lVar6 + uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar4 = (ulong)bVar2;
      }
      lVar6 = lVar6 + uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar4 = (ulong)bVar2;
      }
      lVar6 = lVar6 + uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 5 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar4 = (ulong)bVar2;
      }
      lVar6 = lVar6 + uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 6 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar4 = (ulong)bVar2;
      }
      lVar6 = lVar6 + uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 7 & 1) != 0) {
      lVar3 = FUN_00b45668(*(undefined8 *)(param_1 + 0x58));
      lVar6 = lVar6 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 2;
    }
  }
  if ((uVar1 & 0xe700) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      lVar6 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x60)) * -9 + 0x2c0U >> 6) + lVar6;
    }
    if ((uVar1 >> 9 & 1) != 0) {
      lVar6 = lVar6 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x68)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar6 = lVar6 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x6c)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      lVar6 = lVar6 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x78)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      lVar6 = lVar6 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x7c)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      lVar6 = lVar6 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x80)) * -9 + 0x1a0U >> 6);
    }
  }
  if ((uVar1 & 0xf90000) != 0) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      lVar6 = lVar6 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x84)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 0x13 & 1) != 0) {
      lVar6 = lVar6 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x8c)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 0x14 & 1) != 0) {
      lVar6 = lVar6 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x90)) * -9 + 0x280U >> 6) + 2;
    }
    if ((uVar1 >> 0x15 & 1) != 0) {
      lVar6 = lVar6 + (ulong)(((int)LZCOUNT(*(undefined4 *)(param_1 + 0x94)) * -9 + 0x160U >> 6) + 2
                             );
    }
    if ((uVar1 >> 0x16 & 1) != 0) {
      lVar6 = lVar6 + (ulong)(((int)LZCOUNT(*(undefined4 *)(param_1 + 0x98)) * -9 + 0x160U >> 6) + 2
                             );
    }
    if ((uVar1 >> 0x17 & 1) != 0) {
      lVar6 = lVar6 + (ulong)(((int)LZCOUNT(*(undefined4 *)(param_1 + 0x9c)) * -9 + 0x160U >> 6) + 2
                             );
    }
  }
  if (uVar1 >> 0x18 != 0) {
    if ((uVar1 >> 0x18 & 1) != 0) {
      lVar6 = lVar6 + (ulong)(((int)LZCOUNT(*(undefined4 *)(param_1 + 0xa0)) * -9 + 0x160U >> 6) + 2
                             );
    }
    if ((uVar1 >> 0x19 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0xa8) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar4 = (ulong)bVar2;
      }
      lVar6 = lVar6 + uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 0x1a & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0xb0) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar4 = (ulong)bVar2;
      }
      lVar6 = lVar6 + uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 0x1b & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0xb8) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar4 = (ulong)bVar2;
      }
      lVar6 = lVar6 + uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 0x1c & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0xc0) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar4 = (ulong)bVar2;
      }
      lVar6 = lVar6 + uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 0x1d & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 200) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar4 = (ulong)bVar2;
      }
      lVar6 = lVar6 + uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 0x1e & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0xd0) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar4 = (ulong)bVar2;
      }
      lVar6 = lVar6 + uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 2;
    }
    if ((int)uVar1 < 0) {
      uVar4 = *(ulong *)(param_1 + 0xd8) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar4 = (ulong)bVar2;
      }
      lVar6 = lVar6 + uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 2;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0xe0) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar4 = (ulong)bVar2;
      }
      lVar6 = lVar6 + uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0xe8) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar4 = (ulong)bVar2;
      }
      lVar6 = lVar6 + uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 2;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar5 = (int)lVar6;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    lVar6 = lVar3 + lVar6;
    iVar5 = (int)lVar6;
  }
  if ((iVar5 != 0) || (*(int *)(param_1 + 0x18) != 0)) {
    *(int *)(param_1 + 0x18) = (int)lVar6;
  }
  return lVar6;
}


// ===== 00b4786c  FUN_00b4786c =====

void FUN_00b4786c(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  *param_1 = &PTR_FUN_00d44bc8;
  param_1[1] = param_2;
  param_1[2] = 0;
  puVar1 = PTR_DAT_00d52590;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[4] = puVar1;
  param_1[5] = puVar1;
  param_1[6] = puVar1;
  param_1[7] = puVar1;
  param_1[8] = puVar1;
  param_1[9] = puVar1;
  param_1[10] = puVar1;
  param_1[0x15] = puVar1;
  param_1[0x16] = puVar1;
  param_1[0x17] = puVar1;
  param_1[0x18] = puVar1;
  param_1[0x19] = puVar1;
  param_1[0x1a] = puVar1;
  param_1[0x1b] = puVar1;
  param_1[0x1c] = puVar1;
  param_1[0x1d] = puVar1;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  return;
}


// ===== 00b478cc  FUN_00b478cc =====

void FUN_00b478cc(void)

{
  FUN_00b478d4();
  return;
}


// ===== 00b478d4  FUN_00b478d4 =====

void FUN_00b478d4(long param_1)

{
  void *pvVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208(param_1 + 0x20);
  FUN_00714208(param_1 + 0x28);
  FUN_00714208(param_1 + 0x30);
  FUN_00714208(param_1 + 0x38);
  FUN_00714208(param_1 + 0x40);
  FUN_00714208(param_1 + 0x48);
  FUN_00714208(param_1 + 0x50);
  pvVar1 = *(void **)(param_1 + 0x58);
  if (pvVar1 != (void *)0x0) {
    if ((*(byte *)((long)pvVar1 + 8) & 1) != 0) {
      FUN_006dbb00();
    }
    FUN_00714208((long)pvVar1 + 0x18);
    FUN_00714208((long)pvVar1 + 0x20);
    FUN_00714208((long)pvVar1 + 0x28);
    FUN_00714208((long)pvVar1 + 0x30);
    operator_delete(pvVar1);
  }
  FUN_00714208(param_1 + 0xa8);
  FUN_00714208(param_1 + 0xb0);
  FUN_00714208(param_1 + 0xb8);
  FUN_00714208(param_1 + 0xc0);
  FUN_00714208(param_1 + 200);
  FUN_00714208(param_1 + 0xd0);
  FUN_00714208(param_1 + 0xd8);
  FUN_00714208(param_1 + 0xe0);
  FUN_00714208(param_1 + 0xe8);
  return;
}


// ===== 00b479c4  FUN_00b479c4 =====

void FUN_00b479c4(void *param_1)

{
  FUN_00b478d4();
  operator_delete(param_1);
  return;
}


// ===== 00b479f4  FUN_00b479f4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b479f4(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)(param_1 + 8);
  uVar4 = uVar3;
  if ((uVar3 & 1) != 0) {
    uVar4 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x20,*(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc,uVar3);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar3 = *(ulong *)(param_1 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x28,*(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc,uVar3);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar3 = *(ulong *)(param_1 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x30,*(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc,uVar3);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar3 = *(ulong *)(param_1 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x38,*(ulong *)(param_2 + 0x38) & 0xfffffffffffffffc,uVar3);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      uVar3 = *(ulong *)(param_1 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x40,*(ulong *)(param_2 + 0x40) & 0xfffffffffffffffc,uVar3);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      uVar3 = *(ulong *)(param_1 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x48,*(ulong *)(param_2 + 0x48) & 0xfffffffffffffffc,uVar3);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      uVar3 = *(ulong *)(param_1 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x50,*(ulong *)(param_2 + 0x50) & 0xfffffffffffffffc,uVar3);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) == 0) {
        uVar2 = FUN_00b53a78(uVar4,*(undefined8 *)(param_2 + 0x58));
        *(undefined8 *)(param_1 + 0x58) = uVar2;
      }
      else {
        FUN_00b45030();
      }
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
    }
  }
  if ((uVar1 & 0xff0000) != 0) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + 0x88);
    }
    if ((uVar1 >> 0x12 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x89) = *(undefined1 *)(param_2 + 0x89);
    }
    if ((uVar1 >> 0x13 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
    }
    if ((uVar1 >> 0x14 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
    }
    if ((uVar1 >> 0x15 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
    }
    if ((uVar1 >> 0x16 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
    }
    if ((uVar1 >> 0x17 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
    }
  }
  if (uVar1 >> 0x18 != 0) {
    if ((uVar1 >> 0x18 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
    }
    if ((uVar1 >> 0x19 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0xa8,*(ulong *)(param_2 + 0xa8) & 0xfffffffffffffffc,uVar4);
    }
    if ((uVar1 >> 0x1a & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0xb0,*(ulong *)(param_2 + 0xb0) & 0xfffffffffffffffc,uVar4);
    }
    if ((uVar1 >> 0x1b & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0xb8,*(ulong *)(param_2 + 0xb8) & 0xfffffffffffffffc,uVar4);
    }
    if ((uVar1 >> 0x1c & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0xc0,*(ulong *)(param_2 + 0xc0) & 0xfffffffffffffffc,uVar4);
    }
    if ((uVar1 >> 0x1d & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 200,*(ulong *)(param_2 + 200) & 0xfffffffffffffffc,uVar4);
    }
    if ((uVar1 >> 0x1e & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0xd0,*(ulong *)(param_2 + 0xd0) & 0xfffffffffffffffc,uVar4);
    }
    if ((int)uVar1 < 0) {
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0xd8,*(ulong *)(param_2 + 0xd8) & 0xfffffffffffffffc,uVar4);
    }
  }
  uVar1 = *(uint *)(param_2 + 0x14);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0xe0,*(ulong *)(param_2 + 0xe0) & 0xfffffffffffffffc,uVar4);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0xe8,*(ulong *)(param_2 + 0xe8) & 0xfffffffffffffffc,uVar4);
    }
  }
  *(ulong *)(param_1 + 0x10) = *(ulong *)(param_2 + 0x10) | *(ulong *)(param_1 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04((ulong *)(param_1 + 8),(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b47ea8  FUN_00b47ea8 =====

undefined ** FUN_00b47ea8(void)

{
  return &PTR_PTR_00d44fc0;
}


// ===== 00b47eb8  FUN_00b47eb8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b47eb8(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      FUN_00b45190(*(undefined8 *)(param_1 + 0x58));
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  if ((uVar1 & 0xff0000) != 0) {
    *(undefined8 *)(param_1 + 0x8c) = 0;
    *(undefined8 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined8 *)(param_1 + 0x94) = 0;
  }
  if (uVar1 >> 0x18 != 0) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
    if ((uVar1 >> 0x19 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0xa8) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 0x1a & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0xb0) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 0x1b & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0xb8) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 0x1c & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0xc0) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 0x1d & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 200) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 0x1e & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0xd0) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((int)uVar1 < 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0xd8) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0xe0) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0xe8) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0((byte *)(param_1 + 8));
  return;
}


// ===== 00b4828c  FUN_00b4828c =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b4828c(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  void *__src;
  undefined8 *puVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  size_t sVar14;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 8 & 1) == 0) {
    pbVar6 = param_2;
    if ((uVar1 >> 0x11 & 1) != 0) goto LAB_00b48364;
LAB_00b482bc:
    if ((uVar1 >> 9 & 1) != 0) goto LAB_00b4838c;
LAB_00b482c0:
    if ((uVar1 >> 10 & 1) != 0) goto LAB_00b483b4;
LAB_00b482c4:
    if ((uVar1 >> 0xb & 1) != 0) goto LAB_00b483dc;
LAB_00b482c8:
    if ((uVar1 >> 0xc & 1) != 0) goto LAB_00b48400;
LAB_00b482cc:
    if ((uVar1 >> 0xd & 1) != 0) goto LAB_00b48424;
LAB_00b482d0:
    if ((uVar1 >> 0xe & 1) != 0) goto LAB_00b4844c;
LAB_00b482d4:
    if ((uVar1 >> 0xf & 1) != 0) goto LAB_00b48474;
LAB_00b482d8:
    if ((uVar1 >> 0x10 & 1) != 0) goto LAB_00b4849c;
LAB_00b482dc:
    if ((uVar1 >> 0x13 & 1) != 0) goto LAB_00b484c4;
LAB_00b482e0:
    if ((uVar1 >> 0x14 & 1) != 0) goto LAB_00b484ec;
LAB_00b482e4:
    if ((uVar1 >> 0x15 & 1) != 0) goto LAB_00b48518;
LAB_00b482e8:
    if ((uVar1 >> 0x16 & 1) != 0) goto LAB_00b48540;
LAB_00b482ec:
    if ((uVar1 >> 0x17 & 1) != 0) goto LAB_00b48568;
LAB_00b482f0:
    if ((uVar1 >> 0x12 & 1) != 0) goto LAB_00b48590;
LAB_00b482f4:
    pbVar5 = pbVar6;
    if ((uVar1 >> 7 & 1) != 0) goto LAB_00b485b8;
LAB_00b482f8:
    if ((uVar1 >> 0x18 & 1) != 0) goto LAB_00b485d8;
LAB_00b482fc:
    if ((uVar1 >> 0x19 & 1) != 0) goto LAB_00b48600;
joined_r0x00b48c3c:
    if ((uVar1 >> 0x1a & 1) != 0) goto LAB_00b48660;
LAB_00b48304:
    if ((uVar1 & 1) != 0) goto LAB_00b486c0;
LAB_00b48308:
    if ((uVar1 >> 1 & 1) == 0) goto LAB_00b4830c;
LAB_00b48720:
    puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
    sVar14 = (size_t)*(char *)((long)puVar7 + 0x17);
    if ((long)sVar14 < 0) {
      puVar8 = (undefined8 *)*puVar7;
      sVar14 = puVar7[1];
      puVar7 = puVar8;
      if ((long)sVar14 < 0x80) goto LAB_00b48748;
LAB_00b48c84:
      pbVar5 = (byte *)FUN_006dd0b8(param_3,0x68,puVar8,sVar14,pbVar5);
    }
    else {
LAB_00b48748:
      puVar8 = puVar7;
      if ((*param_3 - (long)pbVar5) + 0xd < (long)sVar14) goto LAB_00b48c84;
      pbVar5[0] = 0xc2;
      pbVar5[1] = 6;
      pbVar5[2] = (byte)sVar14;
      memcpy(pbVar5 + 3,puVar7,sVar14);
      pbVar5 = pbVar5 + 3 + sVar14;
    }
    if ((uVar1 >> 2 & 1) != 0) goto LAB_00b48780;
joined_r0x00b48310:
    if ((uVar1 >> 3 & 1) == 0) goto joined_r0x00b48314;
LAB_00b487e0:
    puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
    sVar14 = (size_t)*(char *)((long)puVar7 + 0x17);
    if ((long)sVar14 < 0) {
      puVar8 = (undefined8 *)*puVar7;
      sVar14 = puVar7[1];
      puVar7 = puVar8;
      if ((long)sVar14 < 0x80) goto LAB_00b48808;
LAB_00b48cc4:
      pbVar5 = (byte *)FUN_006dd0b8(param_3,0x6a,puVar8,sVar14,pbVar5);
      goto joined_r0x00b48314;
    }
LAB_00b48808:
    puVar8 = puVar7;
    if ((*param_3 - (long)pbVar5) + 0xd < (long)sVar14) goto LAB_00b48cc4;
    pbVar5[0] = 0xd2;
    pbVar5[1] = 6;
    pbVar5[2] = (byte)sVar14;
    memcpy(pbVar5 + 3,puVar7,sVar14);
    pbVar5 = pbVar5 + 3 + sVar14;
    if ((uVar1 >> 4 & 1) == 0) goto LAB_00b48318;
LAB_00b48840:
    puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc);
    sVar14 = (size_t)*(char *)((long)puVar7 + 0x17);
    if ((long)sVar14 < 0) {
      puVar8 = (undefined8 *)*puVar7;
      sVar14 = puVar7[1];
      puVar7 = puVar8;
      if ((long)sVar14 < 0x80) goto LAB_00b48868;
LAB_00b48ce4:
      pbVar5 = (byte *)FUN_006dd0b8(param_3,0x6c,puVar8,sVar14,pbVar5);
    }
    else {
LAB_00b48868:
      puVar8 = puVar7;
      if ((*param_3 - (long)pbVar5) + 0xd < (long)sVar14) goto LAB_00b48ce4;
      pbVar5[0] = 0xe2;
      pbVar5[1] = 6;
      pbVar5[2] = (byte)sVar14;
      memcpy(pbVar5 + 3,puVar7,sVar14);
      pbVar5 = pbVar5 + 3 + sVar14;
    }
    if ((uVar1 >> 5 & 1) == 0) goto joined_r0x00b4831c;
LAB_00b488a0:
    puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
    sVar14 = (size_t)*(char *)((long)puVar7 + 0x17);
    if ((long)sVar14 < 0) {
      puVar8 = (undefined8 *)*puVar7;
      sVar14 = puVar7[1];
      puVar7 = puVar8;
      if ((long)sVar14 < 0x80) goto LAB_00b488c8;
LAB_00b48d04:
      pbVar5 = (byte *)FUN_006dd0b8(param_3,0x6d,puVar8,sVar14,pbVar5);
      goto joined_r0x00b4831c;
    }
LAB_00b488c8:
    puVar8 = puVar7;
    if ((*param_3 - (long)pbVar5) + 0xd < (long)sVar14) goto LAB_00b48d04;
    pbVar5[0] = 0xea;
    pbVar5[1] = 6;
    pbVar5[2] = (byte)sVar14;
    memcpy(pbVar5 + 3,puVar7,sVar14);
    pbVar5 = pbVar5 + 3 + sVar14;
    if ((uVar1 >> 6 & 1) != 0) goto LAB_00b48900;
joined_r0x00b48d3c:
    if ((uVar1 >> 0x1b & 1) != 0) goto LAB_00b48960;
LAB_00b48324:
    if ((uVar1 >> 0x1c & 1) != 0) goto LAB_00b489c0;
LAB_00b48328:
    if ((uVar1 >> 0x1d & 1) == 0) goto LAB_00b4832c;
LAB_00b48a20:
    puVar7 = (undefined8 *)(*(ulong *)(param_1 + 200) & 0xfffffffffffffffc);
    sVar14 = (size_t)*(char *)((long)puVar7 + 0x17);
    if ((long)sVar14 < 0) {
      puVar8 = (undefined8 *)*puVar7;
      sVar14 = puVar7[1];
      puVar7 = puVar8;
      if ((long)sVar14 < 0x80) goto LAB_00b48a48;
LAB_00b48d84:
      pbVar5 = (byte *)FUN_006dd0b8(param_3,0x75,puVar8,sVar14,pbVar5);
    }
    else {
LAB_00b48a48:
      puVar8 = puVar7;
      if ((*param_3 - (long)pbVar5) + 0xd < (long)sVar14) goto LAB_00b48d84;
      pbVar5[0] = 0xaa;
      pbVar5[1] = 7;
      pbVar5[2] = (byte)sVar14;
      memcpy(pbVar5 + 3,puVar7,sVar14);
      pbVar5 = pbVar5 + 3 + sVar14;
    }
    if ((uVar1 >> 0x1e & 1) != 0) goto LAB_00b48a80;
joined_r0x00b48330:
    if (-1 < (int)uVar1) goto LAB_00b48334;
LAB_00b48ae0:
    puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0xd8) & 0xfffffffffffffffc);
    sVar14 = (size_t)*(char *)((long)puVar7 + 0x17);
    if ((long)sVar14 < 0) {
      puVar8 = (undefined8 *)*puVar7;
      sVar14 = puVar7[1];
      puVar7 = puVar8;
      if ((long)sVar14 < 0x80) goto LAB_00b48b08;
LAB_00b48e18:
      pbVar5 = (byte *)FUN_006dd0b8(param_3,0x77,puVar8,sVar14,pbVar5);
      uVar1 = *(uint *)(param_1 + 0x14);
    }
    else {
LAB_00b48b08:
      puVar8 = puVar7;
      if ((*param_3 - (long)pbVar5) + 0xd < (long)sVar14) goto LAB_00b48e18;
      pbVar5[0] = 0xba;
      pbVar5[1] = 7;
      pbVar5[2] = (byte)sVar14;
      memcpy(pbVar5 + 3,puVar7,sVar14);
      pbVar5 = pbVar5 + 3 + sVar14;
      uVar1 = *(uint *)(param_1 + 0x14);
    }
  }
  else {
    param_2 = (byte *)FUN_00b2c524(param_3,*(undefined8 *)(param_1 + 0x60),param_2);
    pbVar6 = param_2;
    if ((uVar1 >> 0x11 & 1) == 0) goto LAB_00b482bc;
LAB_00b48364:
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    bVar3 = *(byte *)(param_1 + 0x88);
    *param_2 = 0x10;
    pbVar6 = param_2 + 2;
    param_2[1] = bVar3;
    if ((uVar1 >> 9 & 1) == 0) goto LAB_00b482c0;
LAB_00b4838c:
    if ((byte *)*param_3 <= pbVar6) {
      pbVar6 = (byte *)FUN_006dcdb8(param_3,pbVar6);
    }
    uVar10 = *(uint *)(param_1 + 0x68);
    pbVar5 = pbVar6 + 1;
    *pbVar6 = 0x18;
    pbVar6 = pbVar5;
    if (0x7f < uVar10) {
      do {
        uVar4 = uVar10 >> 0xe;
        bVar3 = (byte)uVar10;
        uVar10 = uVar10 >> 7;
        pbVar5 = pbVar6 + 1;
        *pbVar6 = bVar3 | 0x80;
        pbVar6 = pbVar5;
      } while (uVar4 != 0);
    }
    pbVar6 = pbVar5 + 1;
    *pbVar5 = (byte)uVar10;
    if ((uVar1 >> 10 & 1) == 0) goto LAB_00b482c4;
LAB_00b483b4:
    if ((byte *)*param_3 <= pbVar6) {
      pbVar6 = (byte *)FUN_006dcdb8(param_3,pbVar6);
    }
    uVar10 = *(uint *)(param_1 + 0x6c);
    pbVar5 = pbVar6 + 1;
    *pbVar6 = 0x20;
    pbVar6 = pbVar5;
    if (0x7f < uVar10) {
      do {
        uVar4 = uVar10 >> 0xe;
        bVar3 = (byte)uVar10;
        uVar10 = uVar10 >> 7;
        pbVar5 = pbVar6 + 1;
        *pbVar6 = bVar3 | 0x80;
        pbVar6 = pbVar5;
      } while (uVar4 != 0);
    }
    pbVar6 = pbVar5 + 1;
    *pbVar5 = (byte)uVar10;
    if ((uVar1 >> 0xb & 1) == 0) goto LAB_00b482c8;
LAB_00b483dc:
    if ((byte *)*param_3 <= pbVar6) {
      pbVar6 = (byte *)FUN_006dcdb8(param_3,pbVar6);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x70);
    *pbVar6 = 0x2d;
    *(undefined4 *)(pbVar6 + 1) = uVar2;
    pbVar6 = pbVar6 + 5;
    if ((uVar1 >> 0xc & 1) == 0) goto LAB_00b482cc;
LAB_00b48400:
    if ((byte *)*param_3 <= pbVar6) {
      pbVar6 = (byte *)FUN_006dcdb8(param_3,pbVar6);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x74);
    *pbVar6 = 0x35;
    *(undefined4 *)(pbVar6 + 1) = uVar2;
    pbVar6 = pbVar6 + 5;
    if ((uVar1 >> 0xd & 1) == 0) goto LAB_00b482d0;
LAB_00b48424:
    if ((byte *)*param_3 <= pbVar6) {
      pbVar6 = (byte *)FUN_006dcdb8(param_3,pbVar6);
    }
    uVar10 = *(uint *)(param_1 + 0x78);
    pbVar5 = pbVar6 + 1;
    *pbVar6 = 0x40;
    pbVar6 = pbVar5;
    if (0x7f < uVar10) {
      do {
        uVar4 = uVar10 >> 0xe;
        bVar3 = (byte)uVar10;
        uVar10 = uVar10 >> 7;
        pbVar5 = pbVar6 + 1;
        *pbVar6 = bVar3 | 0x80;
        pbVar6 = pbVar5;
      } while (uVar4 != 0);
    }
    pbVar6 = pbVar5 + 1;
    *pbVar5 = (byte)uVar10;
    if ((uVar1 >> 0xe & 1) == 0) goto LAB_00b482d4;
LAB_00b4844c:
    if ((byte *)*param_3 <= pbVar6) {
      pbVar6 = (byte *)FUN_006dcdb8(param_3,pbVar6);
    }
    uVar10 = *(uint *)(param_1 + 0x7c);
    pbVar5 = pbVar6 + 1;
    *pbVar6 = 0x48;
    pbVar6 = pbVar5;
    if (0x7f < uVar10) {
      do {
        uVar4 = uVar10 >> 0xe;
        bVar3 = (byte)uVar10;
        uVar10 = uVar10 >> 7;
        pbVar5 = pbVar6 + 1;
        *pbVar6 = bVar3 | 0x80;
        pbVar6 = pbVar5;
      } while (uVar4 != 0);
    }
    pbVar6 = pbVar5 + 1;
    *pbVar5 = (byte)uVar10;
    if ((uVar1 >> 0xf & 1) == 0) goto LAB_00b482d8;
LAB_00b48474:
    if ((byte *)*param_3 <= pbVar6) {
      pbVar6 = (byte *)FUN_006dcdb8(param_3,pbVar6);
    }
    uVar10 = *(uint *)(param_1 + 0x80);
    pbVar5 = pbVar6 + 1;
    *pbVar6 = 0x50;
    pbVar6 = pbVar5;
    if (0x7f < uVar10) {
      do {
        uVar4 = uVar10 >> 0xe;
        bVar3 = (byte)uVar10;
        uVar10 = uVar10 >> 7;
        pbVar5 = pbVar6 + 1;
        *pbVar6 = bVar3 | 0x80;
        pbVar6 = pbVar5;
      } while (uVar4 != 0);
    }
    pbVar6 = pbVar5 + 1;
    *pbVar5 = (byte)uVar10;
    if ((uVar1 >> 0x10 & 1) == 0) goto LAB_00b482dc;
LAB_00b4849c:
    if ((byte *)*param_3 <= pbVar6) {
      pbVar6 = (byte *)FUN_006dcdb8(param_3,pbVar6);
    }
    uVar10 = *(uint *)(param_1 + 0x84);
    pbVar5 = pbVar6 + 1;
    *pbVar6 = 0x58;
    pbVar6 = pbVar5;
    if (0x7f < uVar10) {
      do {
        uVar4 = uVar10 >> 0xe;
        bVar3 = (byte)uVar10;
        uVar10 = uVar10 >> 7;
        pbVar5 = pbVar6 + 1;
        *pbVar6 = bVar3 | 0x80;
        pbVar6 = pbVar5;
      } while (uVar4 != 0);
    }
    pbVar6 = pbVar5 + 1;
    *pbVar5 = (byte)uVar10;
    if ((uVar1 >> 0x13 & 1) == 0) goto LAB_00b482e0;
LAB_00b484c4:
    if ((byte *)*param_3 <= pbVar6) {
      pbVar6 = (byte *)FUN_006dcdb8(param_3,pbVar6);
    }
    uVar10 = *(uint *)(param_1 + 0x8c);
    pbVar5 = pbVar6 + 1;
    *pbVar6 = 0x78;
    pbVar6 = pbVar5;
    if (0x7f < uVar10) {
      do {
        uVar4 = uVar10 >> 0xe;
        bVar3 = (byte)uVar10;
        uVar10 = uVar10 >> 7;
        pbVar5 = pbVar6 + 1;
        *pbVar6 = bVar3 | 0x80;
        pbVar6 = pbVar5;
      } while (uVar4 != 0);
    }
    pbVar6 = pbVar5 + 1;
    *pbVar5 = (byte)uVar10;
    if ((uVar1 >> 0x14 & 1) == 0) goto LAB_00b482e4;
LAB_00b484ec:
    if ((byte *)*param_3 <= pbVar6) {
      pbVar6 = (byte *)FUN_006dcdb8(param_3,pbVar6);
    }
    uVar10 = *(uint *)(param_1 + 0x90);
    uVar9 = (ulong)(int)uVar10;
    pbVar5 = pbVar6 + 2;
    pbVar6[0] = 0x80;
    pbVar6[1] = 1;
    uVar11 = uVar9;
    pbVar6 = pbVar5;
    if (0x7f < uVar10) {
      do {
        uVar9 = uVar11 >> 7;
        uVar12 = uVar11 >> 0xe;
        pbVar5 = pbVar6 + 1;
        *pbVar6 = (byte)uVar11 | 0x80;
        uVar11 = uVar9;
        pbVar6 = pbVar5;
      } while (uVar12 != 0);
    }
    pbVar6 = pbVar5 + 1;
    *pbVar5 = (byte)uVar9;
    if ((uVar1 >> 0x15 & 1) == 0) goto LAB_00b482e8;
LAB_00b48518:
    if ((byte *)*param_3 <= pbVar6) {
      pbVar6 = (byte *)FUN_006dcdb8(param_3,pbVar6);
    }
    uVar10 = *(uint *)(param_1 + 0x94);
    pbVar5 = pbVar6 + 2;
    pbVar6[0] = 0x88;
    pbVar6[1] = 1;
    pbVar6 = pbVar5;
    if (0x7f < uVar10) {
      do {
        uVar4 = uVar10 >> 0xe;
        bVar3 = (byte)uVar10;
        uVar10 = uVar10 >> 7;
        pbVar5 = pbVar6 + 1;
        *pbVar6 = bVar3 | 0x80;
        pbVar6 = pbVar5;
      } while (uVar4 != 0);
    }
    pbVar6 = pbVar5 + 1;
    *pbVar5 = (byte)uVar10;
    if ((uVar1 >> 0x16 & 1) == 0) goto LAB_00b482ec;
LAB_00b48540:
    if ((byte *)*param_3 <= pbVar6) {
      pbVar6 = (byte *)FUN_006dcdb8(param_3,pbVar6);
    }
    uVar10 = *(uint *)(param_1 + 0x98);
    pbVar5 = pbVar6 + 2;
    pbVar6[0] = 0x90;
    pbVar6[1] = 1;
    pbVar6 = pbVar5;
    if (0x7f < uVar10) {
      do {
        uVar4 = uVar10 >> 0xe;
        bVar3 = (byte)uVar10;
        uVar10 = uVar10 >> 7;
        pbVar5 = pbVar6 + 1;
        *pbVar6 = bVar3 | 0x80;
        pbVar6 = pbVar5;
      } while (uVar4 != 0);
    }
    pbVar6 = pbVar5 + 1;
    *pbVar5 = (byte)uVar10;
    if ((uVar1 >> 0x17 & 1) == 0) goto LAB_00b482f0;
LAB_00b48568:
    if ((byte *)*param_3 <= pbVar6) {
      pbVar6 = (byte *)FUN_006dcdb8(param_3,pbVar6);
    }
    uVar10 = *(uint *)(param_1 + 0x9c);
    pbVar5 = pbVar6 + 2;
    pbVar6[0] = 0x98;
    pbVar6[1] = 1;
    pbVar6 = pbVar5;
    if (0x7f < uVar10) {
      do {
        uVar4 = uVar10 >> 0xe;
        bVar3 = (byte)uVar10;
        uVar10 = uVar10 >> 7;
        pbVar5 = pbVar6 + 1;
        *pbVar6 = bVar3 | 0x80;
        pbVar6 = pbVar5;
      } while (uVar4 != 0);
    }
    pbVar6 = pbVar5 + 1;
    *pbVar5 = (byte)uVar10;
    if ((uVar1 >> 0x12 & 1) == 0) goto LAB_00b482f4;
LAB_00b48590:
    if ((byte *)*param_3 <= pbVar6) {
      pbVar6 = (byte *)FUN_006dcdb8(param_3,pbVar6);
    }
    bVar3 = *(byte *)(param_1 + 0x89);
    pbVar6[0] = 0xa0;
    pbVar6[1] = 1;
    pbVar5 = pbVar6 + 3;
    pbVar6[2] = bVar3;
    if ((uVar1 >> 7 & 1) == 0) goto LAB_00b482f8;
LAB_00b485b8:
    pbVar5 = (byte *)FUN_006fc2f0(0x15,*(long *)(param_1 + 0x58),
                                  *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x14),pbVar5,param_3);
    if ((uVar1 >> 0x18 & 1) == 0) goto LAB_00b482fc;
LAB_00b485d8:
    if ((byte *)*param_3 <= pbVar5) {
      pbVar5 = (byte *)FUN_006dcdb8(param_3,pbVar5);
    }
    uVar10 = *(uint *)(param_1 + 0xa0);
    pbVar13 = pbVar5 + 2;
    pbVar5[0] = 0xb0;
    pbVar5[1] = 1;
    pbVar6 = pbVar13;
    if (0x7f < uVar10) {
      do {
        uVar4 = uVar10 >> 0xe;
        bVar3 = (byte)uVar10;
        uVar10 = uVar10 >> 7;
        pbVar13 = pbVar6 + 1;
        *pbVar6 = bVar3 | 0x80;
        pbVar6 = pbVar13;
      } while (uVar4 != 0);
    }
    pbVar5 = pbVar13 + 1;
    *pbVar13 = (byte)uVar10;
    if ((uVar1 >> 0x19 & 1) == 0) goto joined_r0x00b48c3c;
LAB_00b48600:
    puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0xa8) & 0xfffffffffffffffc);
    sVar14 = (size_t)*(char *)((long)puVar7 + 0x17);
    if ((long)sVar14 < 0) {
      puVar8 = (undefined8 *)*puVar7;
      sVar14 = puVar7[1];
      puVar7 = puVar8;
      if ((long)sVar14 < 0x80) goto LAB_00b48628;
LAB_00b48c24:
      pbVar5 = (byte *)FUN_006dd0b8(param_3,0x65,puVar8,sVar14,pbVar5);
      goto joined_r0x00b48c3c;
    }
LAB_00b48628:
    puVar8 = puVar7;
    if ((*param_3 - (long)pbVar5) + 0xd < (long)sVar14) goto LAB_00b48c24;
    pbVar5[0] = 0xaa;
    pbVar5[1] = 6;
    pbVar5[2] = (byte)sVar14;
    memcpy(pbVar5 + 3,puVar7,sVar14);
    pbVar5 = pbVar5 + 3 + sVar14;
    if ((uVar1 >> 0x1a & 1) == 0) goto LAB_00b48304;
LAB_00b48660:
    puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0xb0) & 0xfffffffffffffffc);
    sVar14 = (size_t)*(char *)((long)puVar7 + 0x17);
    if ((long)sVar14 < 0) {
      puVar8 = (undefined8 *)*puVar7;
      sVar14 = puVar7[1];
      puVar7 = puVar8;
      if ((long)sVar14 < 0x80) goto LAB_00b48688;
LAB_00b48c44:
      pbVar5 = (byte *)FUN_006dd0b8(param_3,0x66,puVar8,sVar14,pbVar5);
    }
    else {
LAB_00b48688:
      puVar8 = puVar7;
      if ((*param_3 - (long)pbVar5) + 0xd < (long)sVar14) goto LAB_00b48c44;
      pbVar5[0] = 0xb2;
      pbVar5[1] = 6;
      pbVar5[2] = (byte)sVar14;
      memcpy(pbVar5 + 3,puVar7,sVar14);
      pbVar5 = pbVar5 + 3 + sVar14;
    }
    if ((uVar1 & 1) == 0) goto LAB_00b48308;
LAB_00b486c0:
    puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
    sVar14 = (size_t)*(char *)((long)puVar7 + 0x17);
    if ((long)sVar14 < 0) {
      puVar8 = (undefined8 *)*puVar7;
      sVar14 = puVar7[1];
      puVar7 = puVar8;
      if ((long)sVar14 < 0x80) goto LAB_00b486e8;
LAB_00b48c64:
      pbVar5 = (byte *)FUN_006dd0b8(param_3,0x67,puVar8,sVar14,pbVar5);
    }
    else {
LAB_00b486e8:
      puVar8 = puVar7;
      if ((*param_3 - (long)pbVar5) + 0xd < (long)sVar14) goto LAB_00b48c64;
      pbVar5[0] = 0xba;
      pbVar5[1] = 6;
      pbVar5[2] = (byte)sVar14;
      memcpy(pbVar5 + 3,puVar7,sVar14);
      pbVar5 = pbVar5 + 3 + sVar14;
    }
    if ((uVar1 >> 1 & 1) != 0) goto LAB_00b48720;
LAB_00b4830c:
    if ((uVar1 >> 2 & 1) == 0) goto joined_r0x00b48310;
LAB_00b48780:
    puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
    sVar14 = (size_t)*(char *)((long)puVar7 + 0x17);
    if ((long)sVar14 < 0) {
      puVar8 = (undefined8 *)*puVar7;
      sVar14 = puVar7[1];
      puVar7 = puVar8;
      if ((long)sVar14 < 0x80) goto LAB_00b487a8;
    }
    else {
LAB_00b487a8:
      puVar8 = puVar7;
      if ((long)sVar14 <= (*param_3 - (long)pbVar5) + 0xd) {
        pbVar5[0] = 0xca;
        pbVar5[1] = 6;
        pbVar5[2] = (byte)sVar14;
        memcpy(pbVar5 + 3,puVar7,sVar14);
        pbVar5 = pbVar5 + 3 + sVar14;
        goto joined_r0x00b48310;
      }
    }
    pbVar5 = (byte *)FUN_006dd0b8(param_3,0x69,puVar8,sVar14,pbVar5);
    if ((uVar1 >> 3 & 1) != 0) goto LAB_00b487e0;
joined_r0x00b48314:
    if ((uVar1 >> 4 & 1) != 0) goto LAB_00b48840;
LAB_00b48318:
    if ((uVar1 >> 5 & 1) != 0) goto LAB_00b488a0;
joined_r0x00b4831c:
    if ((uVar1 >> 6 & 1) == 0) goto joined_r0x00b48d3c;
LAB_00b48900:
    puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc);
    sVar14 = (size_t)*(char *)((long)puVar7 + 0x17);
    if ((long)sVar14 < 0) {
      puVar8 = (undefined8 *)*puVar7;
      sVar14 = puVar7[1];
      puVar7 = puVar8;
      if ((long)sVar14 < 0x80) goto LAB_00b48928;
LAB_00b48d24:
      pbVar5 = (byte *)FUN_006dd0b8(param_3,0x6e,puVar8,sVar14,pbVar5);
      goto joined_r0x00b48d3c;
    }
LAB_00b48928:
    puVar8 = puVar7;
    if ((*param_3 - (long)pbVar5) + 0xd < (long)sVar14) goto LAB_00b48d24;
    pbVar5[0] = 0xf2;
    pbVar5[1] = 6;
    pbVar5[2] = (byte)sVar14;
    memcpy(pbVar5 + 3,puVar7,sVar14);
    pbVar5 = pbVar5 + 3 + sVar14;
    if ((uVar1 >> 0x1b & 1) == 0) goto LAB_00b48324;
LAB_00b48960:
    puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0xb8) & 0xfffffffffffffffc);
    sVar14 = (size_t)*(char *)((long)puVar7 + 0x17);
    if ((long)sVar14 < 0) {
      puVar8 = (undefined8 *)*puVar7;
      sVar14 = puVar7[1];
      puVar7 = puVar8;
      if ((long)sVar14 < 0x80) goto LAB_00b48988;
LAB_00b48d44:
      pbVar5 = (byte *)FUN_006dd0b8(param_3,0x73,puVar8,sVar14,pbVar5);
    }
    else {
LAB_00b48988:
      puVar8 = puVar7;
      if ((*param_3 - (long)pbVar5) + 0xd < (long)sVar14) goto LAB_00b48d44;
      pbVar5[0] = 0x9a;
      pbVar5[1] = 7;
      pbVar5[2] = (byte)sVar14;
      memcpy(pbVar5 + 3,puVar7,sVar14);
      pbVar5 = pbVar5 + 3 + sVar14;
    }
    if ((uVar1 >> 0x1c & 1) == 0) goto LAB_00b48328;
LAB_00b489c0:
    puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0xc0) & 0xfffffffffffffffc);
    sVar14 = (size_t)*(char *)((long)puVar7 + 0x17);
    if ((long)sVar14 < 0) {
      puVar8 = (undefined8 *)*puVar7;
      sVar14 = puVar7[1];
      puVar7 = puVar8;
      if ((long)sVar14 < 0x80) goto LAB_00b489e8;
LAB_00b48d64:
      pbVar5 = (byte *)FUN_006dd0b8(param_3,0x74,puVar8,sVar14,pbVar5);
    }
    else {
LAB_00b489e8:
      puVar8 = puVar7;
      if ((*param_3 - (long)pbVar5) + 0xd < (long)sVar14) goto LAB_00b48d64;
      pbVar5[0] = 0xa2;
      pbVar5[1] = 7;
      pbVar5[2] = (byte)sVar14;
      memcpy(pbVar5 + 3,puVar7,sVar14);
      pbVar5 = pbVar5 + 3 + sVar14;
    }
    if ((uVar1 >> 0x1d & 1) != 0) goto LAB_00b48a20;
LAB_00b4832c:
    if ((uVar1 >> 0x1e & 1) == 0) goto joined_r0x00b48330;
LAB_00b48a80:
    puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0xd0) & 0xfffffffffffffffc);
    sVar14 = (size_t)*(char *)((long)puVar7 + 0x17);
    if ((long)sVar14 < 0) {
      puVar8 = (undefined8 *)*puVar7;
      sVar14 = puVar7[1];
      puVar7 = puVar8;
      if ((long)sVar14 < 0x80) goto LAB_00b48aa8;
    }
    else {
LAB_00b48aa8:
      puVar8 = puVar7;
      if ((long)sVar14 <= (*param_3 - (long)pbVar5) + 0xd) {
        pbVar5[0] = 0xb2;
        pbVar5[1] = 7;
        pbVar5[2] = (byte)sVar14;
        memcpy(pbVar5 + 3,puVar7,sVar14);
        pbVar5 = pbVar5 + 3 + sVar14;
        goto joined_r0x00b48330;
      }
    }
    pbVar5 = (byte *)FUN_006dd0b8(param_3,0x76,puVar8,sVar14,pbVar5);
    if ((int)uVar1 < 0) goto LAB_00b48ae0;
LAB_00b48334:
    uVar1 = *(uint *)(param_1 + 0x14);
  }
  if ((uVar1 & 1) != 0) {
    puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0xe0) & 0xfffffffffffffffc);
    sVar14 = (size_t)*(char *)((long)puVar7 + 0x17);
    if ((long)sVar14 < 0) {
      puVar8 = (undefined8 *)*puVar7;
      sVar14 = puVar7[1];
      puVar7 = puVar8;
      if ((long)sVar14 < 0x80) goto LAB_00b48b6c;
    }
    else {
LAB_00b48b6c:
      puVar8 = puVar7;
      if ((long)sVar14 <= (*param_3 - (long)pbVar5) + 0xd) {
        pbVar5[0] = 0xc2;
        pbVar5[1] = 7;
        pbVar5[2] = (byte)sVar14;
        memcpy(pbVar5 + 3,puVar7,sVar14);
        pbVar5 = pbVar5 + 3 + sVar14;
        goto joined_r0x00b48ddc;
      }
    }
    pbVar5 = (byte *)FUN_006dd0b8(param_3,0x78,puVar8,sVar14,pbVar5);
  }
joined_r0x00b48ddc:
  if ((uVar1 >> 1 & 1) == 0) {
    uVar11 = *(ulong *)(param_1 + 8);
    goto joined_r0x00b48e00;
  }
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0xe8) & 0xfffffffffffffffc);
  sVar14 = (size_t)*(char *)((long)puVar7 + 0x17);
  if ((long)sVar14 < 0) {
    puVar8 = (undefined8 *)*puVar7;
    sVar14 = puVar7[1];
    puVar7 = puVar8;
    if ((long)sVar14 < 0x80) goto LAB_00b48bcc;
  }
  else {
LAB_00b48bcc:
    puVar8 = puVar7;
    if ((long)sVar14 <= (*param_3 - (long)pbVar5) + 0xd) {
      pbVar5[0] = 0xca;
      pbVar5[1] = 7;
      pbVar5[2] = (byte)sVar14;
      memcpy(pbVar5 + 3,puVar7,sVar14);
      pbVar5 = pbVar5 + 3 + sVar14;
      uVar11 = *(ulong *)(param_1 + 8);
      goto joined_r0x00b48e00;
    }
  }
  pbVar5 = (byte *)FUN_006dd0b8(param_3,0x79,puVar8,sVar14,pbVar5);
  uVar11 = *(ulong *)(param_1 + 8);
joined_r0x00b48e00:
  if ((uVar11 & 1) != 0) {
    uVar11 = uVar11 & 0xfffffffffffffffe;
    uVar9 = (ulong)*(char *)(uVar11 + 0x1f);
    if ((long)uVar9 < 0) {
      __src = *(void **)(uVar11 + 8);
      uVar9 = (ulong)*(uint *)(uVar11 + 0x10);
    }
    else {
      __src = (void *)(uVar11 + 8);
    }
    if (*param_3 - (long)pbVar5 < (long)(int)uVar9) {
      pbVar6 = (byte *)FUN_006dcef8(param_3,__src,uVar9,pbVar5);
      return pbVar6;
    }
    memcpy(pbVar5,__src,uVar9 & 0xffffffff);
    pbVar5 = pbVar5 + (int)uVar9;
  }
  return pbVar5;
}


// ===== 00b490f0  FUN_00b490f0 =====

/* WARNING: Type propagation algorithm not settling */

long FUN_00b490f0(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar6 = 0;
  if ((uVar1 & 0x40000) != 0) {
    lVar6 = 3;
  }
  uVar8 = NEON_cnt((ulong)(uVar1 & 0x1800),1);
  uVar7 = NEON_addv(uVar8,1);
  lVar6 = lVar6 + ((ulong)(uVar1 >> 0x10) & 2) +
          (ulong)(uint)((int)CONCAT71((int7)((ulong)uVar8 >> 8),uVar7) * 5);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar4 = (ulong)bVar2;
      }
      lVar6 = lVar6 + uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar4 = (ulong)bVar2;
      }
      lVar6 = lVar6 + uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar4 = (ulong)bVar2;
      }
      lVar6 = lVar6 + uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar4 = (ulong)bVar2;
      }
      lVar6 = lVar6 + uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar4 = (ulong)bVar2;
      }
      lVar6 = lVar6 + uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 5 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar4 = (ulong)bVar2;
      }
      lVar6 = lVar6 + uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 6 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar4 = (ulong)bVar2;
      }
      lVar6 = lVar6 + uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 7 & 1) != 0) {
      lVar3 = FUN_00b45668(*(undefined8 *)(param_1 + 0x58));
      lVar6 = lVar6 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 2;
    }
  }
  if ((uVar1 & 0xe700) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      lVar6 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x60)) * -9 + 0x2c0U >> 6) + lVar6;
    }
    if ((uVar1 >> 9 & 1) != 0) {
      lVar6 = lVar6 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x68)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar6 = lVar6 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x6c)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      lVar6 = lVar6 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x78)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      lVar6 = lVar6 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x7c)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      lVar6 = lVar6 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x80)) * -9 + 0x1a0U >> 6);
    }
  }
  if ((uVar1 & 0xf90000) != 0) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      lVar6 = lVar6 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x84)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 0x13 & 1) != 0) {
      lVar6 = lVar6 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x8c)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 0x14 & 1) != 0) {
      lVar6 = lVar6 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x90)) * -9 + 0x280U >> 6) + 2;
    }
    if ((uVar1 >> 0x15 & 1) != 0) {
      lVar6 = lVar6 + (ulong)(((int)LZCOUNT(*(undefined4 *)(param_1 + 0x94)) * -9 + 0x160U >> 6) + 2
                             );
    }
    if ((uVar1 >> 0x16 & 1) != 0) {
      lVar6 = lVar6 + (ulong)(((int)LZCOUNT(*(undefined4 *)(param_1 + 0x98)) * -9 + 0x160U >> 6) + 2
                             );
    }
    if ((uVar1 >> 0x17 & 1) != 0) {
      lVar6 = lVar6 + (ulong)(((int)LZCOUNT(*(undefined4 *)(param_1 + 0x9c)) * -9 + 0x160U >> 6) + 2
                             );
    }
  }
  if (uVar1 >> 0x18 != 0) {
    if ((uVar1 >> 0x18 & 1) != 0) {
      lVar6 = lVar6 + (ulong)(((int)LZCOUNT(*(undefined4 *)(param_1 + 0xa0)) * -9 + 0x160U >> 6) + 2
                             );
    }
    if ((uVar1 >> 0x19 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0xa8) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar4 = (ulong)bVar2;
      }
      lVar6 = lVar6 + uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 0x1a & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0xb0) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar4 = (ulong)bVar2;
      }
      lVar6 = lVar6 + uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 0x1b & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0xb8) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar4 = (ulong)bVar2;
      }
      lVar6 = lVar6 + uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 0x1c & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0xc0) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar4 = (ulong)bVar2;
      }
      lVar6 = lVar6 + uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 0x1d & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 200) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar4 = (ulong)bVar2;
      }
      lVar6 = lVar6 + uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 0x1e & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0xd0) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar4 = (ulong)bVar2;
      }
      lVar6 = lVar6 + uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 2;
    }
    if ((int)uVar1 < 0) {
      uVar4 = *(ulong *)(param_1 + 0xd8) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar4 = (ulong)bVar2;
      }
      lVar6 = lVar6 + uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 2;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0xe0) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar4 = (ulong)bVar2;
      }
      lVar6 = lVar6 + uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0xe8) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar4 + 0x17);
      uVar4 = *(ulong *)(uVar4 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar4 = (ulong)bVar2;
      }
      lVar6 = lVar6 + uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6) + 2;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar5 = (int)lVar6;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    lVar6 = lVar3 + lVar6;
    iVar5 = (int)lVar6;
  }
  if ((iVar5 != 0) || (*(int *)(param_1 + 0x18) != 0)) {
    *(int *)(param_1 + 0x18) = (int)lVar6;
  }
  return lVar6;
}


// ===== 00b497e4  FUN_00b497e4 =====

void FUN_00b497e4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d44648;
  param_1[1] = param_2;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = &DAT_00208540;
  param_1[4] = &DAT_00208540;
  param_1[5] = &DAT_00208540;
  return;
}


// ===== 00b49810  FUN_00b49810 =====

void FUN_00b49810(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208(param_1 + 0x18);
  FUN_00714208(param_1 + 0x20);
  FUN_00714208(param_1 + 0x28);
  return;
}


// ===== 00b49854  FUN_00b49854 =====

void FUN_00b49854(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208((long)param_1 + 0x18);
  FUN_00714208((long)param_1 + 0x20);
  FUN_00714208((long)param_1 + 0x28);
  operator_delete(param_1);
  return;
}


// ===== 00b498a4  FUN_00b498a4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b498a4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x18,*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x20,*(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x28,*(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b499b8  FUN_00b499b8 =====

undefined ** FUN_00b499b8(void)

{
  return &PTR_PTR_00d45028;
}


// ===== 00b499c8  FUN_00b499c8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b499c8(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
  }
  if ((uVar1 & 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00b49a9c  FUN_00b49a9c =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b49a9c(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  void *__src;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  size_t sVar11;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 3 & 1) != 0) {
    param_2 = (byte *)FUN_00b2c524(param_3,*(undefined8 *)(param_1 + 0x30),param_2);
  }
  if ((uVar1 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar11 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar11 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar11 < 0x80) goto LAB_00b49b24;
    }
    else {
LAB_00b49b24:
      puVar6 = puVar5;
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x12;
        *(byte *)((long)param_2 + 1) = (byte)sVar11;
        memcpy((byte *)((long)param_2 + 2),puVar5,sVar11);
        param_2 = (byte *)((long)param_2 + 2) + sVar11;
        goto joined_r0x00b49acc;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,2,puVar6,sVar11,param_2);
  }
joined_r0x00b49acc:
  if ((uVar1 >> 4 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar8 = *(uint *)(param_1 + 0x38);
    pbVar10 = param_2 + 1;
    *param_2 = 0x18;
    pbVar4 = pbVar10;
    if (0x7f < uVar8) {
      do {
        uVar2 = uVar8 >> 0xe;
        bVar3 = (byte)uVar8;
        uVar8 = uVar8 >> 7;
        pbVar10 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar10;
      } while (uVar2 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar8;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
    sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar11 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar11 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar11 < 0x80) goto LAB_00b49bac;
    }
    else {
LAB_00b49bac:
      puVar6 = puVar5;
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
        param_2[0] = 0xaa;
        param_2[1] = 6;
        param_2[2] = (byte)sVar11;
        memcpy(param_2 + 3,puVar5,sVar11);
        param_2 = param_2 + 3 + sVar11;
        goto joined_r0x00b49c9c;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x65,puVar6,sVar11,param_2);
  }
joined_r0x00b49c9c:
  if ((uVar1 >> 2 & 1) == 0) {
    uVar9 = *(ulong *)(param_1 + 8);
    goto joined_r0x00b49adc;
  }
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
  if ((long)sVar11 < 0) {
    puVar6 = (undefined8 *)*puVar5;
    sVar11 = puVar5[1];
    puVar5 = puVar6;
    if ((long)sVar11 < 0x80) goto LAB_00b49c0c;
  }
  else {
LAB_00b49c0c:
    puVar6 = puVar5;
    if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
      param_2[0] = 0xb2;
      param_2[1] = 6;
      param_2[2] = (byte)sVar11;
      memcpy(param_2 + 3,puVar5,sVar11);
      param_2 = param_2 + 3 + sVar11;
      uVar9 = *(ulong *)(param_1 + 8);
      goto joined_r0x00b49adc;
    }
  }
  param_2 = (byte *)FUN_006dd0b8(param_3,0x66,puVar6,sVar11,param_2);
  uVar9 = *(ulong *)(param_1 + 8);
joined_r0x00b49adc:
  if ((uVar9 & 1) != 0) {
    uVar9 = uVar9 & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar9 + 0x1f);
    if ((long)uVar7 < 0) {
      __src = *(void **)(uVar9 + 8);
      uVar7 = (ulong)*(uint *)(uVar9 + 0x10);
    }
    else {
      __src = (void *)(uVar9 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar7) {
      pbVar4 = (byte *)FUN_006dcef8(param_3,__src,uVar7,param_2);
      return pbVar4;
    }
    memcpy(param_2,__src,uVar7 & 0xffffffff);
    param_2 = param_2 + (int)uVar7;
  }
  return param_2;
}


// ===== 00b49d54  FUN_00b49d54 =====

long FUN_00b49d54(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x1f) == 0) {
    lVar4 = 0;
    uVar5 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      uVar5 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar5 = (ulong)bVar2;
      }
      lVar4 = uVar5 + ((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar5 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar5 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar5 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar5 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + lVar4;
    }
    if ((uVar1 >> 4 & 1) == 0) {
      uVar5 = *(ulong *)(param_1 + 8);
    }
    else {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x38)) * -9 + 0x1a0U >> 6);
      uVar5 = *(ulong *)(param_1 + 8);
    }
  }
  if ((uVar5 & 1) == 0) {
    iVar3 = (int)lVar4;
  }
  else {
    lVar6 = (long)*(char *)((uVar5 & 0xfffffffffffffffe) + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)((uVar5 & 0xfffffffffffffffe) + 0x10);
    }
    lVar4 = lVar6 + lVar4;
    iVar3 = (int)lVar4;
  }
  if ((iVar3 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)lVar4;
  }
  return lVar4;
}


// ===== 00b49ed0  FUN_00b49ed0 =====

void FUN_00b49ed0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d44588;
  param_1[1] = param_2;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = &DAT_00208540;
  param_1[4] = &DAT_00208540;
  param_1[5] = &DAT_00208540;
  return;
}


// ===== 00b49efc  FUN_00b49efc =====

void FUN_00b49efc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208(param_1 + 0x18);
  FUN_00714208(param_1 + 0x20);
  FUN_00714208(param_1 + 0x28);
  return;
}


// ===== 00b49f40  FUN_00b49f40 =====

void FUN_00b49f40(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208((long)param_1 + 0x18);
  FUN_00714208((long)param_1 + 0x20);
  FUN_00714208((long)param_1 + 0x28);
  operator_delete(param_1);
  return;
}


// ===== 00b49f90  FUN_00b49f90 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b49f90(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x18,*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x20,*(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x28,*(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b4a0a4  FUN_00b4a0a4 =====

undefined ** FUN_00b4a0a4(void)

{
  return &PTR_PTR_00d45090;
}


// ===== 00b4a0b4  FUN_00b4a0b4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b4a0b4(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
  }
  if ((uVar1 & 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00b4a188  FUN_00b4a188 =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b4a188(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  void *__src;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  size_t sVar11;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 3 & 1) != 0) {
    param_2 = (byte *)FUN_00b2c524(param_3,*(undefined8 *)(param_1 + 0x30),param_2);
  }
  if ((uVar1 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar11 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar11 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar11 < 0x80) goto LAB_00b4a210;
    }
    else {
LAB_00b4a210:
      puVar6 = puVar5;
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x12;
        *(byte *)((long)param_2 + 1) = (byte)sVar11;
        memcpy((byte *)((long)param_2 + 2),puVar5,sVar11);
        param_2 = (byte *)((long)param_2 + 2) + sVar11;
        goto joined_r0x00b4a1b8;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,2,puVar6,sVar11,param_2);
  }
joined_r0x00b4a1b8:
  if ((uVar1 >> 4 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar8 = *(uint *)(param_1 + 0x38);
    pbVar10 = param_2 + 1;
    *param_2 = 0x18;
    pbVar4 = pbVar10;
    if (0x7f < uVar8) {
      do {
        uVar2 = uVar8 >> 0xe;
        bVar3 = (byte)uVar8;
        uVar8 = uVar8 >> 7;
        pbVar10 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar10;
      } while (uVar2 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar8;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
    sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar11 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar11 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar11 < 0x80) goto LAB_00b4a298;
    }
    else {
LAB_00b4a298:
      puVar6 = puVar5;
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
        param_2[0] = 0xaa;
        param_2[1] = 6;
        param_2[2] = (byte)sVar11;
        memcpy(param_2 + 3,puVar5,sVar11);
        param_2 = param_2 + 3 + sVar11;
        goto joined_r0x00b4a388;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x65,puVar6,sVar11,param_2);
  }
joined_r0x00b4a388:
  if ((uVar1 >> 2 & 1) == 0) {
    uVar9 = *(ulong *)(param_1 + 8);
    goto joined_r0x00b4a1c8;
  }
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
  if ((long)sVar11 < 0) {
    puVar6 = (undefined8 *)*puVar5;
    sVar11 = puVar5[1];
    puVar5 = puVar6;
    if ((long)sVar11 < 0x80) goto LAB_00b4a2f8;
  }
  else {
LAB_00b4a2f8:
    puVar6 = puVar5;
    if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
      param_2[0] = 0xb2;
      param_2[1] = 6;
      param_2[2] = (byte)sVar11;
      memcpy(param_2 + 3,puVar5,sVar11);
      param_2 = param_2 + 3 + sVar11;
      uVar9 = *(ulong *)(param_1 + 8);
      goto joined_r0x00b4a1c8;
    }
  }
  param_2 = (byte *)FUN_006dd0b8(param_3,0x66,puVar6,sVar11,param_2);
  uVar9 = *(ulong *)(param_1 + 8);
joined_r0x00b4a1c8:
  if ((uVar9 & 1) != 0) {
    uVar9 = uVar9 & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar9 + 0x1f);
    if ((long)uVar7 < 0) {
      __src = *(void **)(uVar9 + 8);
      uVar7 = (ulong)*(uint *)(uVar9 + 0x10);
    }
    else {
      __src = (void *)(uVar9 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar7) {
      pbVar4 = (byte *)FUN_006dcef8(param_3,__src,uVar7,param_2);
      return pbVar4;
    }
    memcpy(param_2,__src,uVar7 & 0xffffffff);
    param_2 = param_2 + (int)uVar7;
  }
  return param_2;
}


// ===== 00b4a440  FUN_00b4a440 =====

long FUN_00b4a440(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x1f) == 0) {
    lVar4 = 0;
    uVar5 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      uVar5 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar5 = (ulong)bVar2;
      }
      lVar4 = uVar5 + ((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar5 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar5 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar5 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar5 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + lVar4;
    }
    if ((uVar1 >> 4 & 1) == 0) {
      uVar5 = *(ulong *)(param_1 + 8);
    }
    else {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x38)) * -9 + 0x1a0U >> 6);
      uVar5 = *(ulong *)(param_1 + 8);
    }
  }
  if ((uVar5 & 1) == 0) {
    iVar3 = (int)lVar4;
  }
  else {
    lVar6 = (long)*(char *)((uVar5 & 0xfffffffffffffffe) + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)((uVar5 & 0xfffffffffffffffe) + 0x10);
    }
    lVar4 = lVar6 + lVar4;
    iVar3 = (int)lVar4;
  }
  if ((iVar3 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)lVar4;
  }
  return lVar4;
}


// ===== 00b4a5bc  FUN_00b4a5bc =====

void FUN_00b4a5bc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d44a88;
  param_1[1] = param_2;
  param_1[6] = 0;
  param_1[2] = 0;
  param_1[3] = &DAT_00208540;
  param_1[4] = &DAT_00208540;
  param_1[5] = 0;
  return;
}


// ===== 00b4a5e4  FUN_00b4a5e4 =====

void FUN_00b4a5e4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208(param_1 + 0x18);
  FUN_00714208(param_1 + 0x20);
  return;
}


// ===== 00b4a620  FUN_00b4a620 =====

void FUN_00b4a620(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208((long)param_1 + 0x18);
  FUN_00714208((long)param_1 + 0x20);
  operator_delete(param_1);
  return;
}


// ===== 00b4a668  FUN_00b4a668 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b4a668(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x18,*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x20,*(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b4a760  FUN_00b4a760 =====

undefined ** FUN_00b4a760(void)

{
  return &PTR_PTR_00d450f8;
}


// ===== 00b4a770  FUN_00b4a770 =====

void FUN_00b4a770(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
  }
  if ((uVar1 & 0x1c) != 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dcab0();
    return;
  }
  return;
}


// ===== 00b4a7fc  FUN_00b4a7fc =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b4a7fc(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  void *__src;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  size_t sVar11;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 2 & 1) != 0) {
    param_2 = (byte *)FUN_00b2c524(param_3,*(undefined8 *)(param_1 + 0x28),param_2);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar8 = *(uint *)(param_1 + 0x30);
    pbVar10 = param_2 + 1;
    *param_2 = 0x10;
    pbVar4 = pbVar10;
    if (0x7f < uVar8) {
      do {
        uVar2 = uVar8 >> 0xe;
        bVar3 = (byte)uVar8;
        uVar8 = uVar8 >> 7;
        pbVar10 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar10;
      } while (uVar2 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar8;
  }
  if ((uVar1 >> 4 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar8 = *(uint *)(param_1 + 0x34);
    pbVar10 = param_2 + 1;
    *param_2 = 0x18;
    pbVar4 = pbVar10;
    if (0x7f < uVar8) {
      do {
        uVar2 = uVar8 >> 0xe;
        bVar3 = (byte)uVar8;
        uVar8 = uVar8 >> 7;
        pbVar10 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar10;
      } while (uVar2 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar8;
  }
  if ((uVar1 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar11 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar11 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar11 < 0x80) goto LAB_00b4a8d4;
    }
    else {
LAB_00b4a8d4:
      puVar6 = puVar5;
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x6aa;
        *(byte *)((long)param_2 + 2) = (byte)sVar11;
        memcpy((byte *)((long)param_2 + 3),puVar5,sVar11);
        param_2 = (byte *)((long)param_2 + 3) + sVar11;
        goto joined_r0x00b4a834;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x65,puVar6,sVar11,param_2);
  }
joined_r0x00b4a834:
  if ((uVar1 >> 1 & 1) == 0) {
    uVar9 = *(ulong *)(param_1 + 8);
    goto joined_r0x00b4a83c;
  }
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
  sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
  if ((long)sVar11 < 0) {
    puVar6 = (undefined8 *)*puVar5;
    sVar11 = puVar5[1];
    puVar5 = puVar6;
    if ((long)sVar11 < 0x80) goto LAB_00b4a934;
  }
  else {
LAB_00b4a934:
    puVar6 = puVar5;
    if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
      param_2[0] = 0xb2;
      param_2[1] = 6;
      param_2[2] = (byte)sVar11;
      memcpy(param_2 + 3,puVar5,sVar11);
      param_2 = param_2 + 3 + sVar11;
      uVar9 = *(ulong *)(param_1 + 8);
      goto joined_r0x00b4a83c;
    }
  }
  param_2 = (byte *)FUN_006dd0b8(param_3,0x66,puVar6,sVar11,param_2);
  uVar9 = *(ulong *)(param_1 + 8);
joined_r0x00b4a83c:
  if ((uVar9 & 1) != 0) {
    uVar9 = uVar9 & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar9 + 0x1f);
    if ((long)uVar7 < 0) {
      __src = *(void **)(uVar9 + 8);
      uVar7 = (ulong)*(uint *)(uVar9 + 0x10);
    }
    else {
      __src = (void *)(uVar9 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar7) {
      pbVar4 = (byte *)FUN_006dcef8(param_3,__src,uVar7,param_2);
      return pbVar4;
    }
    memcpy(param_2,__src,uVar7 & 0xffffffff);
    param_2 = param_2 + (int)uVar7;
  }
  return param_2;
}


// ===== 00b4aa88  FUN_00b4aa88 =====

long FUN_00b4aa88(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x1f) == 0) {
    lVar4 = 0;
    uVar5 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      uVar5 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar5 = (ulong)bVar2;
      }
      lVar4 = uVar5 + ((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar5 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar5 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + lVar4;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x30)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 4 & 1) == 0) {
      uVar5 = *(ulong *)(param_1 + 8);
    }
    else {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x34)) * -9 + 0x1a0U >> 6);
      uVar5 = *(ulong *)(param_1 + 8);
    }
  }
  if ((uVar5 & 1) == 0) {
    iVar3 = (int)lVar4;
  }
  else {
    lVar6 = (long)*(char *)((uVar5 & 0xfffffffffffffffe) + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)((uVar5 & 0xfffffffffffffffe) + 0x10);
    }
    lVar4 = lVar6 + lVar4;
    iVar3 = (int)lVar4;
  }
  if ((iVar3 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)lVar4;
  }
  return lVar4;
}


// ===== 00b4abe8  FUN_00b4abe8 =====

void FUN_00b4abe8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d445c8;
  param_1[1] = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[2] = 0;
  param_1[3] = &DAT_00208540;
  param_1[4] = &DAT_00208540;
  param_1[5] = &DAT_00208540;
  return;
}


// ===== 00b4ac14  FUN_00b4ac14 =====

void FUN_00b4ac14(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208(param_1 + 0x18);
  FUN_00714208(param_1 + 0x20);
  FUN_00714208(param_1 + 0x28);
  return;
}


// ===== 00b4ac58  FUN_00b4ac58 =====

void FUN_00b4ac58(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208((long)param_1 + 0x18);
  FUN_00714208((long)param_1 + 0x20);
  FUN_00714208((long)param_1 + 0x28);
  operator_delete(param_1);
  return;
}


// ===== 00b4aca8  FUN_00b4aca8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b4aca8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x7f) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x18,*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x20,*(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x28,*(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b4addc  FUN_00b4addc =====

undefined ** FUN_00b4addc(void)

{
  return &PTR_PTR_00d45160;
}


// ===== 00b4adec  FUN_00b4adec =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b4adec(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
  }
  if ((uVar1 & 0x78) != 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00b4aec0  FUN_00b4aec0 =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b4aec0(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  void *__src;
  undefined8 *puVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  byte *pbVar11;
  size_t sVar12;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 3 & 1) != 0) {
    param_2 = (byte *)FUN_00b2c524(param_3,*(undefined8 *)(param_1 + 0x30),param_2);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x38);
    *param_2 = 0x15;
    *(undefined4 *)(param_2 + 1) = uVar2;
    param_2 = param_2 + 5;
  }
  if ((uVar1 >> 5 & 1) != 0) {
    param_2 = (byte *)FUN_006d8a68(param_3,*(undefined4 *)(param_1 + 0x3c),param_2);
  }
  if ((uVar1 >> 6 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar9 = *(uint *)(param_1 + 0x40);
    pbVar11 = param_2 + 1;
    *param_2 = 0x20;
    pbVar5 = pbVar11;
    if (0x7f < uVar9) {
      do {
        uVar3 = uVar9 >> 0xe;
        bVar4 = (byte)uVar9;
        uVar9 = uVar9 >> 7;
        pbVar11 = pbVar5 + 1;
        *pbVar5 = bVar4 | 0x80;
        pbVar5 = pbVar11;
      } while (uVar3 != 0);
    }
    param_2 = pbVar11 + 1;
    *pbVar11 = (byte)uVar9;
  }
  if ((uVar1 & 1) != 0) {
    puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    sVar12 = (size_t)*(char *)((long)puVar6 + 0x17);
    if ((long)sVar12 < 0) {
      puVar7 = (undefined8 *)*puVar6;
      sVar12 = puVar6[1];
      puVar6 = puVar7;
      if ((long)sVar12 < 0x80) goto LAB_00b4afb4;
    }
    else {
LAB_00b4afb4:
      puVar7 = puVar6;
      if ((long)sVar12 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x6aa;
        *(byte *)((long)param_2 + 2) = (byte)sVar12;
        memcpy((byte *)((long)param_2 + 3),puVar6,sVar12);
        param_2 = (byte *)((long)param_2 + 3) + sVar12;
        goto joined_r0x00b4b0e4;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x65,puVar7,sVar12,param_2);
  }
joined_r0x00b4b0e4:
  if ((uVar1 >> 1 & 1) != 0) {
    puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
    sVar12 = (size_t)*(char *)((long)puVar6 + 0x17);
    if ((long)sVar12 < 0) {
      puVar7 = (undefined8 *)*puVar6;
      sVar12 = puVar6[1];
      puVar6 = puVar7;
      if ((long)sVar12 < 0x80) goto LAB_00b4b014;
    }
    else {
LAB_00b4b014:
      puVar7 = puVar6;
      if ((long)sVar12 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x6b2;
        *(byte *)((long)param_2 + 2) = (byte)sVar12;
        memcpy((byte *)((long)param_2 + 3),puVar6,sVar12);
        param_2 = (byte *)((long)param_2 + 3) + sVar12;
        goto joined_r0x00b4af00;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x66,puVar7,sVar12,param_2);
  }
joined_r0x00b4af00:
  if ((uVar1 >> 2 & 1) == 0) {
    uVar10 = *(ulong *)(param_1 + 8);
    goto joined_r0x00b4af08;
  }
  puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  sVar12 = (size_t)*(char *)((long)puVar6 + 0x17);
  if ((long)sVar12 < 0) {
    puVar7 = (undefined8 *)*puVar6;
    sVar12 = puVar6[1];
    puVar6 = puVar7;
    if ((long)sVar12 < 0x80) goto LAB_00b4b074;
  }
  else {
LAB_00b4b074:
    puVar7 = puVar6;
    if ((long)sVar12 <= (*param_3 - (long)param_2) + 0xd) {
      param_2[0] = 0xba;
      param_2[1] = 6;
      param_2[2] = (byte)sVar12;
      memcpy(param_2 + 3,puVar6,sVar12);
      param_2 = param_2 + 3 + sVar12;
      uVar10 = *(ulong *)(param_1 + 8);
      goto joined_r0x00b4af08;
    }
  }
  param_2 = (byte *)FUN_006dd0b8(param_3,0x67,puVar7,sVar12,param_2);
  uVar10 = *(ulong *)(param_1 + 8);
joined_r0x00b4af08:
  if ((uVar10 & 1) != 0) {
    uVar10 = uVar10 & 0xfffffffffffffffe;
    uVar8 = (ulong)*(char *)(uVar10 + 0x1f);
    if ((long)uVar8 < 0) {
      __src = *(void **)(uVar10 + 8);
      uVar8 = (ulong)*(uint *)(uVar10 + 0x10);
    }
    else {
      __src = (void *)(uVar10 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar8) {
      pbVar5 = (byte *)FUN_006dcef8(param_3,__src,uVar8,param_2);
      return pbVar5;
    }
    memcpy(param_2,__src,uVar8 & 0xffffffff);
    param_2 = param_2 + (int)uVar8;
  }
  return param_2;
}


// ===== 00b4b1d0  FUN_00b4b1d0 =====

/* WARNING: Type propagation algorithm not settling */

long FUN_00b4b1d0(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar4 = 0;
  if ((uVar1 & 0x10) != 0) {
    lVar4 = 5;
  }
  if ((uVar1 & 0x6f) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      lVar4 = uVar6 + lVar4 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar6 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar6 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + lVar4;
    }
    if ((uVar1 >> 5 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x3c)) * -9 + 0x2c0U >> 6) + lVar4;
    }
    if ((uVar1 >> 6 & 1) != 0) {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x40)) * -9 + 0x1a0U >> 6);
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar3 = (int)lVar4;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar6 + 0x10);
    }
    lVar4 = lVar5 + lVar4;
    iVar3 = (int)lVar4;
  }
  if ((iVar3 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)lVar4;
  }
  return lVar4;
}


// ===== 00b4b36c  FUN_00b4b36c =====

void FUN_00b4b36c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d447c8;
  param_1[1] = param_2;
  param_1[0xe] = 0;
  param_1[2] = 0;
  param_1[3] = &DAT_00208540;
  param_1[4] = &DAT_00208540;
  param_1[5] = &DAT_00208540;
  param_1[6] = &DAT_00208540;
  param_1[7] = &DAT_00208540;
  param_1[8] = &DAT_00208540;
  param_1[9] = &DAT_00208540;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  return;
}


// ===== 00b4b3a4  FUN_00b4b3a4 =====

void FUN_00b4b3a4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208(param_1 + 0x18);
  FUN_00714208(param_1 + 0x20);
  FUN_00714208(param_1 + 0x28);
  FUN_00714208(param_1 + 0x30);
  FUN_00714208(param_1 + 0x38);
  FUN_00714208(param_1 + 0x40);
  FUN_00714208(param_1 + 0x48);
  return;
}


// ===== 00b4b408  FUN_00b4b408 =====

void FUN_00b4b408(void *param_1)

{
  FUN_00b4b3a4();
  operator_delete(param_1);
  return;
}


// ===== 00b4b438  FUN_00b4b438 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b4b438(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x18,*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x20,*(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x28,*(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x30,*(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x38,*(ulong *)(param_2 + 0x38) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x40,*(ulong *)(param_2 + 0x40) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x48,*(ulong *)(param_2 + 0x48) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    }
  }
  if ((uVar1 & 0x7f00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b4b664  FUN_00b4b664 =====

undefined ** FUN_00b4b664(void)

{
  return &PTR_PTR_00d451c8;
}


// ===== 00b4b674  FUN_00b4b674 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b4b674(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x7f) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  if ((uVar1 & 0x7f00) != 0) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dcab0();
    return;
  }
  return;
}


// ===== 00b4b818  FUN_00b4b818 =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b4b818(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  void *__src;
  undefined8 *puVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  size_t sVar13;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 7 & 1) != 0) {
    param_2 = (byte *)FUN_00b2c524(param_3,*(undefined8 *)(param_1 + 0x50),param_2);
  }
  if ((uVar1 >> 9 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x60);
    *param_2 = 0x15;
    *(undefined4 *)(param_2 + 1) = uVar2;
    param_2 = param_2 + 5;
  }
  if ((uVar1 >> 8 & 1) != 0) {
    param_2 = (byte *)FUN_00b44b60(param_3,*(undefined8 *)(param_1 + 0x58),param_2);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    param_2 = (byte *)FUN_006d9c64(param_3,*(undefined4 *)(param_1 + 100),param_2);
  }
  if ((uVar1 >> 0xb & 1) != 0) {
    param_2 = (byte *)FUN_006d9ce0(param_3,*(undefined4 *)(param_1 + 0x68),param_2);
  }
  if ((uVar1 >> 0xc & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar9 = *(uint *)(param_1 + 0x6c);
    uVar8 = (ulong)(int)uVar9;
    pbVar12 = param_2 + 1;
    *param_2 = 0x30;
    uVar10 = uVar8;
    pbVar5 = pbVar12;
    if (0x7f < uVar9) {
      do {
        uVar8 = uVar10 >> 7;
        uVar11 = uVar10 >> 0xe;
        pbVar12 = pbVar5 + 1;
        *pbVar5 = (byte)uVar10 | 0x80;
        uVar10 = uVar8;
        pbVar5 = pbVar12;
      } while (uVar11 != 0);
    }
    param_2 = pbVar12 + 1;
    *pbVar12 = (byte)uVar8;
  }
  if ((uVar1 >> 0xd & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar9 = *(uint *)(param_1 + 0x70);
    pbVar12 = param_2 + 1;
    *param_2 = 0x38;
    pbVar5 = pbVar12;
    if (0x7f < uVar9) {
      do {
        uVar3 = uVar9 >> 0xe;
        bVar4 = (byte)uVar9;
        uVar9 = uVar9 >> 7;
        pbVar12 = pbVar5 + 1;
        *pbVar5 = bVar4 | 0x80;
        pbVar5 = pbVar12;
      } while (uVar3 != 0);
    }
    param_2 = pbVar12 + 1;
    *pbVar12 = (byte)uVar9;
  }
  if ((uVar1 >> 0xe & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar9 = *(uint *)(param_1 + 0x74);
    pbVar12 = param_2 + 1;
    *param_2 = 0x78;
    pbVar5 = pbVar12;
    if (0x7f < uVar9) {
      do {
        uVar3 = uVar9 >> 0xe;
        bVar4 = (byte)uVar9;
        uVar9 = uVar9 >> 7;
        pbVar12 = pbVar5 + 1;
        *pbVar5 = bVar4 | 0x80;
        pbVar5 = pbVar12;
      } while (uVar3 != 0);
    }
    param_2 = pbVar12 + 1;
    *pbVar12 = (byte)uVar9;
  }
  if ((uVar1 & 1) != 0) {
    puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    sVar13 = (size_t)*(char *)((long)puVar6 + 0x17);
    if ((long)sVar13 < 0) {
      puVar7 = (undefined8 *)*puVar6;
      sVar13 = puVar6[1];
      puVar6 = puVar7;
      if ((long)sVar13 < 0x80) goto LAB_00b4b9b0;
    }
    else {
LAB_00b4b9b0:
      puVar7 = puVar6;
      if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x6aa;
        *(byte *)((long)param_2 + 2) = (byte)sVar13;
        memcpy((byte *)((long)param_2 + 3),puVar6,sVar13);
        param_2 = (byte *)((long)param_2 + 3) + sVar13;
        goto joined_r0x00b4b9e4;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x65,puVar7,sVar13,param_2);
  }
joined_r0x00b4b9e4:
  if ((uVar1 >> 1 & 1) != 0) {
    puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
    sVar13 = (size_t)*(char *)((long)puVar6 + 0x17);
    if ((long)sVar13 < 0) {
      puVar7 = (undefined8 *)*puVar6;
      sVar13 = puVar6[1];
      puVar6 = puVar7;
      if ((long)sVar13 < 0x80) goto LAB_00b4ba10;
    }
    else {
LAB_00b4ba10:
      puVar7 = puVar6;
      if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x6b2;
        *(byte *)((long)param_2 + 2) = (byte)sVar13;
        memcpy((byte *)((long)param_2 + 3),puVar6,sVar13);
        param_2 = (byte *)((long)param_2 + 3) + sVar13;
        goto joined_r0x00b4bc80;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x66,puVar7,sVar13,param_2);
  }
joined_r0x00b4bc80:
  if ((uVar1 >> 2 & 1) != 0) {
    puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
    sVar13 = (size_t)*(char *)((long)puVar6 + 0x17);
    if ((long)sVar13 < 0) {
      puVar7 = (undefined8 *)*puVar6;
      sVar13 = puVar6[1];
      puVar6 = puVar7;
      if ((long)sVar13 < 0x80) goto LAB_00b4ba70;
    }
    else {
LAB_00b4ba70:
      puVar7 = puVar6;
      if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x6ba;
        *(byte *)((long)param_2 + 2) = (byte)sVar13;
        memcpy((byte *)((long)param_2 + 3),puVar6,sVar13);
        param_2 = (byte *)((long)param_2 + 3) + sVar13;
        goto joined_r0x00b4baa4;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x67,puVar7,sVar13,param_2);
  }
joined_r0x00b4baa4:
  if ((uVar1 >> 3 & 1) != 0) {
    puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
    sVar13 = (size_t)*(char *)((long)puVar6 + 0x17);
    if ((long)sVar13 < 0) {
      puVar7 = (undefined8 *)*puVar6;
      sVar13 = puVar6[1];
      puVar6 = puVar7;
      if ((long)sVar13 < 0x80) goto LAB_00b4bad0;
    }
    else {
LAB_00b4bad0:
      puVar7 = puVar6;
      if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x6c2;
        *(byte *)((long)param_2 + 2) = (byte)sVar13;
        memcpy((byte *)((long)param_2 + 3),puVar6,sVar13);
        param_2 = (byte *)((long)param_2 + 3) + sVar13;
        goto joined_r0x00b4b870;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x68,puVar7,sVar13,param_2);
  }
joined_r0x00b4b870:
  if ((uVar1 >> 4 & 1) != 0) {
    puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
    sVar13 = (size_t)*(char *)((long)puVar6 + 0x17);
    if ((long)sVar13 < 0) {
      puVar7 = (undefined8 *)*puVar6;
      sVar13 = puVar6[1];
      puVar6 = puVar7;
      if ((long)sVar13 < 0x80) goto LAB_00b4bb30;
    }
    else {
LAB_00b4bb30:
      puVar7 = puVar6;
      if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x6ca;
        *(byte *)((long)param_2 + 2) = (byte)sVar13;
        memcpy((byte *)((long)param_2 + 3),puVar6,sVar13);
        param_2 = (byte *)((long)param_2 + 3) + sVar13;
        goto joined_r0x00b4b874;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x69,puVar7,sVar13,param_2);
  }
joined_r0x00b4b874:
  if ((uVar1 >> 5 & 1) != 0) {
    puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc);
    sVar13 = (size_t)*(char *)((long)puVar6 + 0x17);
    if ((long)sVar13 < 0) {
      puVar7 = (undefined8 *)*puVar6;
      sVar13 = puVar6[1];
      puVar6 = puVar7;
      if ((long)sVar13 < 0x80) goto LAB_00b4bb90;
    }
    else {
LAB_00b4bb90:
      puVar7 = puVar6;
      if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x6d2;
        *(byte *)((long)param_2 + 2) = (byte)sVar13;
        memcpy((byte *)((long)param_2 + 3),puVar6,sVar13);
        param_2 = (byte *)((long)param_2 + 3) + sVar13;
        goto joined_r0x00b4bd00;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x6a,puVar7,sVar13,param_2);
  }
joined_r0x00b4bd00:
  if ((uVar1 >> 6 & 1) == 0) {
    uVar10 = *(ulong *)(param_1 + 8);
    goto joined_r0x00b4bd24;
  }
  puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
  sVar13 = (size_t)*(char *)((long)puVar6 + 0x17);
  if ((long)sVar13 < 0) {
    puVar7 = (undefined8 *)*puVar6;
    sVar13 = puVar6[1];
    puVar6 = puVar7;
    if ((long)sVar13 < 0x80) goto LAB_00b4bbf0;
  }
  else {
LAB_00b4bbf0:
    puVar7 = puVar6;
    if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xd) {
      param_2[0] = 0xda;
      param_2[1] = 6;
      param_2[2] = (byte)sVar13;
      memcpy(param_2 + 3,puVar6,sVar13);
      param_2 = param_2 + 3 + sVar13;
      uVar10 = *(ulong *)(param_1 + 8);
      goto joined_r0x00b4bd24;
    }
  }
  param_2 = (byte *)FUN_006dd0b8(param_3,0x6b,puVar7,sVar13,param_2);
  uVar10 = *(ulong *)(param_1 + 8);
joined_r0x00b4bd24:
  if ((uVar10 & 1) != 0) {
    uVar10 = uVar10 & 0xfffffffffffffffe;
    uVar8 = (ulong)*(char *)(uVar10 + 0x1f);
    if ((long)uVar8 < 0) {
      __src = *(void **)(uVar10 + 8);
      uVar8 = (ulong)*(uint *)(uVar10 + 0x10);
    }
    else {
      __src = (void *)(uVar10 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar8) {
      pbVar5 = (byte *)FUN_006dcef8(param_3,__src,uVar8,param_2);
      return pbVar5;
    }
    memcpy(param_2,__src,uVar8 & 0xffffffff);
    param_2 = param_2 + (int)uVar8;
  }
  return param_2;
}


// ===== 00b4be28  FUN_00b4be28 =====

/* WARNING: Type propagation algorithm not settling */

long FUN_00b4be28(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar4 = 0;
  if ((uVar1 & 0x200) != 0) {
    lVar4 = 5;
  }
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      lVar4 = uVar6 + lVar4 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar6 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar6 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar6 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar6 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 5 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar6 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 6 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar6 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 7 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x50)) * -9 + 0x2c0U >> 6) + lVar4;
    }
  }
  if ((uVar1 & 32000) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x58)) * -9 + 0x2c0U >> 6) + lVar4;
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 100)) * -9 + 0x2c0U >> 6) + lVar4;
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x68)) * -9 + 0x2c0U >> 6) + lVar4;
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x6c)) * -9 + 0x280U >> 6) + 1;
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x70)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x74)) * -9 + 0x1a0U >> 6);
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar3 = (int)lVar4;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar6 + 0x10);
    }
    lVar4 = lVar5 + lVar4;
    iVar3 = (int)lVar4;
  }
  if ((iVar3 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)lVar4;
  }
  return lVar4;
}


// ===== 00b4c154  FUN_00b4c154 =====

void FUN_00b4c154(undefined8 *param_1,undefined8 param_2)

{
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_00d44a48;
  param_1[1] = param_2;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}


// ===== 00b4c174  FUN_00b4c174 =====

void FUN_00b4c174(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dbb00();
  return;
}


// ===== 00b4c188  FUN_00b4c188 =====

void FUN_00b4c188(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  operator_delete(param_1);
  return;
}


// ===== 00b4c1c0  FUN_00b4c1c0 =====

void FUN_00b4c1c0(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b4c228  FUN_00b4c228 =====

undefined ** FUN_00b4c228(void)

{
  return &PTR_PTR_00d45230;
}


// ===== 00b4c238  FUN_00b4c238 =====

void FUN_00b4c238(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 7) != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00b4c264  FUN_00b4c264 =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b4c264(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  void *__src;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = (byte *)FUN_00b2c524(param_3,*(undefined8 *)(param_1 + 0x18),param_2);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x28);
    pbVar8 = param_2 + 1;
    *param_2 = 0x10;
    pbVar4 = pbVar8;
    if (0x7f < uVar6) {
      do {
        uVar2 = uVar6 >> 0xe;
        bVar3 = (byte)uVar6;
        uVar6 = uVar6 >> 7;
        pbVar8 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar8;
      } while (uVar2 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
  }
  if ((uVar1 >> 1 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 8);
  }
  else {
    param_2 = (byte *)FUN_00b44b60(param_3,*(undefined8 *)(param_1 + 0x20),param_2);
    uVar7 = *(ulong *)(param_1 + 8);
  }
  if ((uVar7 & 1) != 0) {
    uVar7 = uVar7 & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar5 < 0) {
      __src = *(void **)(uVar7 + 8);
      uVar5 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      __src = (void *)(uVar7 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      pbVar4 = (byte *)FUN_006dcef8(param_3,__src,uVar5,param_2);
      return pbVar4;
    }
    memcpy(param_2,__src,uVar5 & 0xffffffff);
    param_2 = param_2 + (int)uVar5;
  }
  return param_2;
}


// ===== 00b4c3a0  FUN_00b4c3a0 =====

ulong FUN_00b4c3a0(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) == 0) {
    uVar3 = 0;
    uVar4 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar3 = ((int)LZCOUNT(*(undefined8 *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + uVar3;
    }
    if ((uVar1 >> 2 & 1) == 0) {
      uVar4 = *(ulong *)(param_1 + 8);
    }
    else {
      uVar3 = uVar3 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x28)) * -9 + 0x1a0U >> 6);
      uVar4 = *(ulong *)(param_1 + 8);
    }
  }
  if ((uVar4 & 1) == 0) {
    iVar2 = (int)uVar3;
  }
  else {
    lVar5 = (long)*(char *)((uVar4 & 0xfffffffffffffffe) + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)((uVar4 & 0xfffffffffffffffe) + 0x10);
    }
    uVar3 = lVar5 + uVar3;
    iVar2 = (int)uVar3;
  }
  if ((iVar2 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)uVar3;
  }
  return uVar3;
}


// ===== 00b4c47c  FUN_00b4c47c =====

void FUN_00b4c47c(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d44848;
  param_1[1] = param_2;
  return;
}


// ===== 00b4c494  FUN_00b4c494 =====

void FUN_00b4c494(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dbb00();
  return;
}


// ===== 00b4c4a8  FUN_00b4c4a8 =====

void FUN_00b4c4a8(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  operator_delete(param_1);
  return;
}


// ===== 00b4c4e0  FUN_00b4c4e0 =====

void FUN_00b4c4e0(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  return;
}


// ===== 00b4c51c  FUN_00b4c51c =====

undefined ** FUN_00b4c51c(void)

{
  return &PTR_PTR_00d45290;
}


// ===== 00b4c52c  FUN_00b4c52c =====

void FUN_00b4c52c(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00b4c548  FUN_00b4c548 =====

void * FUN_00b4c548(long param_1,void *param_2,long *param_3)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    param_2 = (void *)FUN_00b2c524(param_3,*(undefined8 *)(param_1 + 0x18),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar2 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uVar2 < 0) {
      pvVar1 = *(void **)(uVar3 + 8);
      uVar2 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      pvVar1 = (void *)(uVar3 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      pvVar1 = (void *)FUN_006dcef8(param_3,pvVar1,uVar2,param_2);
      return pvVar1;
    }
    memcpy(param_2,pvVar1,uVar2 & 0xffffffff);
    param_2 = (void *)((long)param_2 + (long)(int)uVar2);
  }
  return param_2;
}


// ===== 00b4c604  FUN_00b4c604 =====

ulong FUN_00b4c604(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar1 = (int)uVar2;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar2 = lVar3 + uVar2;
    iVar1 = (int)uVar2;
  }
  if ((iVar1 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)uVar2;
  }
  return uVar2;
}


// ===== 00b4c66c  FUN_00b4c66c =====

void FUN_00b4c66c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d44608;
  param_1[1] = param_2;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = &DAT_00208540;
  param_1[4] = &DAT_00208540;
  param_1[5] = &DAT_00208540;
  param_1[6] = &DAT_00208540;
  param_1[7] = 0;
  return;
}


// ===== 00b4c698  FUN_00b4c698 =====

void FUN_00b4c698(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208(param_1 + 0x18);
  FUN_00714208(param_1 + 0x20);
  FUN_00714208(param_1 + 0x28);
  FUN_00714208(param_1 + 0x30);
  return;
}


// ===== 00b4c6e4  FUN_00b4c6e4 =====

void FUN_00b4c6e4(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208((long)param_1 + 0x18);
  FUN_00714208((long)param_1 + 0x20);
  FUN_00714208((long)param_1 + 0x28);
  FUN_00714208((long)param_1 + 0x30);
  operator_delete(param_1);
  return;
}


// ===== 00b4c73c  FUN_00b4c73c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b4c73c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x18,*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x20,*(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x28,*(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x30,*(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b4c8a8  FUN_00b4c8a8 =====

undefined ** FUN_00b4c8a8(void)

{
  return &PTR_PTR_00d452f0;
}


// ===== 00b4c8b8  FUN_00b4c8b8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b4c8b8(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
  }
  if ((uVar1 & 0xf0) != 0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dcab0();
    return;
  }
  return;
}


// ===== 00b4c9c4  FUN_00b4c9c4 =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b4c9c4(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  void *__src;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  size_t sVar11;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 4 & 1) != 0) {
    param_2 = (byte *)FUN_00b2c524(param_3,*(undefined8 *)(param_1 + 0x38),param_2);
  }
  if ((uVar1 >> 5 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar8 = *(uint *)(param_1 + 0x40);
    pbVar10 = param_2 + 1;
    *param_2 = 0x10;
    pbVar4 = pbVar10;
    if (0x7f < uVar8) {
      do {
        uVar2 = uVar8 >> 0xe;
        bVar3 = (byte)uVar8;
        uVar8 = uVar8 >> 7;
        pbVar10 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar10;
      } while (uVar2 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar8;
  }
  if ((uVar1 >> 6 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar8 = *(uint *)(param_1 + 0x44);
    pbVar10 = param_2 + 1;
    *param_2 = 0x18;
    pbVar4 = pbVar10;
    if (0x7f < uVar8) {
      do {
        uVar2 = uVar8 >> 0xe;
        bVar3 = (byte)uVar8;
        uVar8 = uVar8 >> 7;
        pbVar10 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar10;
      } while (uVar2 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar8;
  }
  if ((uVar1 >> 7 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar8 = *(uint *)(param_1 + 0x48);
    pbVar10 = param_2 + 1;
    *param_2 = 0x20;
    pbVar4 = pbVar10;
    if (0x7f < uVar8) {
      do {
        uVar2 = uVar8 >> 0xe;
        bVar3 = (byte)uVar8;
        uVar8 = uVar8 >> 7;
        pbVar10 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar10;
      } while (uVar2 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar8;
  }
  if ((uVar1 >> 8 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar8 = *(uint *)(param_1 + 0x4c);
    pbVar10 = param_2 + 1;
    *param_2 = 0x28;
    pbVar4 = pbVar10;
    if (0x7f < uVar8) {
      do {
        uVar2 = uVar8 >> 0xe;
        bVar3 = (byte)uVar8;
        uVar8 = uVar8 >> 7;
        pbVar10 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar10;
      } while (uVar2 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar8;
  }
  if ((uVar1 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar11 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar11 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar11 < 0x80) goto LAB_00b4cafc;
    }
    else {
LAB_00b4cafc:
      puVar6 = puVar5;
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x6aa;
        *(byte *)((long)param_2 + 2) = (byte)sVar11;
        memcpy((byte *)((long)param_2 + 3),puVar5,sVar11);
        param_2 = (byte *)((long)param_2 + 3) + sVar11;
        goto joined_r0x00b4cc8c;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x65,puVar6,sVar11,param_2);
  }
joined_r0x00b4cc8c:
  if ((uVar1 >> 1 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
    sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar11 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar11 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar11 < 0x80) goto LAB_00b4cb5c;
    }
    else {
LAB_00b4cb5c:
      puVar6 = puVar5;
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x6b2;
        *(byte *)((long)param_2 + 2) = (byte)sVar11;
        memcpy((byte *)((long)param_2 + 3),puVar5,sVar11);
        param_2 = (byte *)((long)param_2 + 3) + sVar11;
        goto joined_r0x00b4cb90;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x66,puVar6,sVar11,param_2);
  }
joined_r0x00b4cb90:
  if ((uVar1 >> 2 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
    sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar11 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar11 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar11 < 0x80) goto LAB_00b4cbbc;
    }
    else {
LAB_00b4cbbc:
      puVar6 = puVar5;
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x6ba;
        *(byte *)((long)param_2 + 2) = (byte)sVar11;
        memcpy((byte *)((long)param_2 + 3),puVar5,sVar11);
        param_2 = (byte *)((long)param_2 + 3) + sVar11;
        goto joined_r0x00b4ca0c;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x67,puVar6,sVar11,param_2);
  }
joined_r0x00b4ca0c:
  if ((uVar1 >> 3 & 1) == 0) {
    uVar9 = *(ulong *)(param_1 + 8);
    goto joined_r0x00b4ca14;
  }
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
  sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
  if ((long)sVar11 < 0) {
    puVar6 = (undefined8 *)*puVar5;
    sVar11 = puVar5[1];
    puVar5 = puVar6;
    if ((long)sVar11 < 0x80) goto LAB_00b4cc1c;
  }
  else {
LAB_00b4cc1c:
    puVar6 = puVar5;
    if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
      param_2[0] = 0xc2;
      param_2[1] = 6;
      param_2[2] = (byte)sVar11;
      memcpy(param_2 + 3,puVar5,sVar11);
      param_2 = param_2 + 3 + sVar11;
      uVar9 = *(ulong *)(param_1 + 8);
      goto joined_r0x00b4ca14;
    }
  }
  param_2 = (byte *)FUN_006dd0b8(param_3,0x68,puVar6,sVar11,param_2);
  uVar9 = *(ulong *)(param_1 + 8);
joined_r0x00b4ca14:
  if ((uVar9 & 1) != 0) {
    uVar9 = uVar9 & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar9 + 0x1f);
    if ((long)uVar7 < 0) {
      __src = *(void **)(uVar9 + 8);
      uVar7 = (ulong)*(uint *)(uVar9 + 0x10);
    }
    else {
      __src = (void *)(uVar9 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar7) {
      pbVar4 = (byte *)FUN_006dcef8(param_3,__src,uVar7,param_2);
      return pbVar4;
    }
    memcpy(param_2,__src,uVar7 & 0xffffffff);
    param_2 = param_2 + (int)uVar7;
  }
  return param_2;
}


// ===== 00b4ce08  FUN_00b4ce08 =====

/* WARNING: Type propagation algorithm not settling */

long FUN_00b4ce08(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) == 0) {
    lVar4 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      uVar5 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar5 = (ulong)bVar2;
      }
      lVar4 = uVar5 + ((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar5 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar5 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar5 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar5 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar5 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar5 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x38)) * -9 + 0x2c0U >> 6) + lVar4;
    }
    if ((uVar1 >> 5 & 1) != 0) {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x40)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x44)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x48)) * -9 + 0x1a0U >> 6);
    }
  }
  if ((uVar1 >> 8 & 1) == 0) {
    uVar5 = *(ulong *)(param_1 + 8);
  }
  else {
    lVar4 = lVar4 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x4c)) * -9 + 0x1a0U >> 6);
    uVar5 = *(ulong *)(param_1 + 8);
  }
  if ((uVar5 & 1) == 0) {
    iVar3 = (int)lVar4;
  }
  else {
    lVar6 = (long)*(char *)((uVar5 & 0xfffffffffffffffe) + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)((uVar5 & 0xfffffffffffffffe) + 0x10);
    }
    lVar4 = lVar6 + lVar4;
    iVar3 = (int)lVar4;
  }
  if ((iVar3 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)lVar4;
  }
  return lVar4;
}


// ===== 00b4d02c  FUN_00b4d02c =====

void FUN_00b4d02c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d44948;
  param_1[1] = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[2] = 0;
  param_1[3] = &DAT_00208540;
  param_1[4] = &DAT_00208540;
  param_1[5] = &DAT_00208540;
  return;
}


// ===== 00b4d058  FUN_00b4d058 =====

void FUN_00b4d058(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208(param_1 + 0x18);
  FUN_00714208(param_1 + 0x20);
  FUN_00714208(param_1 + 0x28);
  return;
}


// ===== 00b4d09c  FUN_00b4d09c =====

void FUN_00b4d09c(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208((long)param_1 + 0x18);
  FUN_00714208((long)param_1 + 0x20);
  FUN_00714208((long)param_1 + 0x28);
  operator_delete(param_1);
  return;
}


// ===== 00b4d0ec  FUN_00b4d0ec =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b4d0ec(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x7f) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x18,*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x20,*(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x28,*(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b4d220  FUN_00b4d220 =====

undefined ** FUN_00b4d220(void)

{
  return &PTR_PTR_00d45358;
}


// ===== 00b4d230  FUN_00b4d230 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b4d230(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
  }
  if ((uVar1 & 0x78) != 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00b4d304  FUN_00b4d304 =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b4d304(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  void *__src;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  size_t sVar12;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 3 & 1) != 0) {
    param_2 = (byte *)FUN_00b2c524(param_3,*(undefined8 *)(param_1 + 0x30),param_2);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar8 = *(uint *)(param_1 + 0x38);
    pbVar11 = param_2 + 1;
    *param_2 = 0x10;
    pbVar4 = pbVar11;
    if (0x7f < uVar8) {
      do {
        uVar2 = uVar8 >> 0xe;
        bVar3 = (byte)uVar8;
        uVar8 = uVar8 >> 7;
        pbVar11 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar11;
      } while (uVar2 != 0);
    }
    param_2 = pbVar11 + 1;
    *pbVar11 = (byte)uVar8;
  }
  if ((uVar1 >> 5 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar8 = *(uint *)(param_1 + 0x3c);
    uVar7 = (ulong)(int)uVar8;
    pbVar11 = param_2 + 1;
    *param_2 = 0x18;
    uVar9 = uVar7;
    pbVar4 = pbVar11;
    if (0x7f < uVar8) {
      do {
        uVar7 = uVar9 >> 7;
        uVar10 = uVar9 >> 0xe;
        pbVar11 = pbVar4 + 1;
        *pbVar4 = (byte)uVar9 | 0x80;
        uVar9 = uVar7;
        pbVar4 = pbVar11;
      } while (uVar10 != 0);
    }
    param_2 = pbVar11 + 1;
    *pbVar11 = (byte)uVar7;
  }
  if ((uVar1 >> 6 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar8 = *(uint *)(param_1 + 0x40);
    pbVar11 = param_2 + 1;
    *param_2 = 0x20;
    pbVar4 = pbVar11;
    if (0x7f < uVar8) {
      do {
        uVar2 = uVar8 >> 0xe;
        bVar3 = (byte)uVar8;
        uVar8 = uVar8 >> 7;
        pbVar11 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar11;
      } while (uVar2 != 0);
    }
    param_2 = pbVar11 + 1;
    *pbVar11 = (byte)uVar8;
  }
  if ((uVar1 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    sVar12 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar12 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar12 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar12 < 0x80) goto LAB_00b4d410;
    }
    else {
LAB_00b4d410:
      puVar6 = puVar5;
      if ((long)sVar12 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x6aa;
        *(byte *)((long)param_2 + 2) = (byte)sVar12;
        memcpy((byte *)((long)param_2 + 3),puVar5,sVar12);
        param_2 = (byte *)((long)param_2 + 3) + sVar12;
        goto joined_r0x00b4d540;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x65,puVar6,sVar12,param_2);
  }
joined_r0x00b4d540:
  if ((uVar1 >> 1 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
    sVar12 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar12 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar12 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar12 < 0x80) goto LAB_00b4d470;
    }
    else {
LAB_00b4d470:
      puVar6 = puVar5;
      if ((long)sVar12 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x6b2;
        *(byte *)((long)param_2 + 2) = (byte)sVar12;
        memcpy((byte *)((long)param_2 + 3),puVar5,sVar12);
        param_2 = (byte *)((long)param_2 + 3) + sVar12;
        goto joined_r0x00b4d344;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x66,puVar6,sVar12,param_2);
  }
joined_r0x00b4d344:
  if ((uVar1 >> 2 & 1) == 0) {
    uVar9 = *(ulong *)(param_1 + 8);
    goto joined_r0x00b4d34c;
  }
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  sVar12 = (size_t)*(char *)((long)puVar5 + 0x17);
  if ((long)sVar12 < 0) {
    puVar6 = (undefined8 *)*puVar5;
    sVar12 = puVar5[1];
    puVar5 = puVar6;
    if ((long)sVar12 < 0x80) goto LAB_00b4d4d0;
  }
  else {
LAB_00b4d4d0:
    puVar6 = puVar5;
    if ((long)sVar12 <= (*param_3 - (long)param_2) + 0xd) {
      param_2[0] = 0xba;
      param_2[1] = 6;
      param_2[2] = (byte)sVar12;
      memcpy(param_2 + 3,puVar5,sVar12);
      param_2 = param_2 + 3 + sVar12;
      uVar9 = *(ulong *)(param_1 + 8);
      goto joined_r0x00b4d34c;
    }
  }
  param_2 = (byte *)FUN_006dd0b8(param_3,0x67,puVar6,sVar12,param_2);
  uVar9 = *(ulong *)(param_1 + 8);
joined_r0x00b4d34c:
  if ((uVar9 & 1) != 0) {
    uVar9 = uVar9 & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar9 + 0x1f);
    if ((long)uVar7 < 0) {
      __src = *(void **)(uVar9 + 8);
      uVar7 = (ulong)*(uint *)(uVar9 + 0x10);
    }
    else {
      __src = (void *)(uVar9 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar7) {
      pbVar4 = (byte *)FUN_006dcef8(param_3,__src,uVar7,param_2);
      return pbVar4;
    }
    memcpy(param_2,__src,uVar7 & 0xffffffff);
    param_2 = param_2 + (int)uVar7;
  }
  return param_2;
}


// ===== 00b4d674  FUN_00b4d674 =====

/* WARNING: Type propagation algorithm not settling */

long FUN_00b4d674(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x7f) == 0) {
    lVar4 = 0;
    uVar5 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      uVar5 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar5 = (ulong)bVar2;
      }
      lVar4 = uVar5 + ((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar5 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar5 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar5 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar5 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + lVar4;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x38)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x3c)) * -9 + 0x280U >> 6) + 1;
    }
    if ((uVar1 >> 6 & 1) == 0) {
      uVar5 = *(ulong *)(param_1 + 8);
    }
    else {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x40)) * -9 + 0x1a0U >> 6);
      uVar5 = *(ulong *)(param_1 + 8);
    }
  }
  if ((uVar5 & 1) == 0) {
    iVar3 = (int)lVar4;
  }
  else {
    lVar6 = (long)*(char *)((uVar5 & 0xfffffffffffffffe) + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)((uVar5 & 0xfffffffffffffffe) + 0x10);
    }
    lVar4 = lVar6 + lVar4;
    iVar3 = (int)lVar4;
  }
  if ((iVar3 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)lVar4;
  }
  return lVar4;
}


// ===== 00b4d83c  FUN_00b4d83c =====

void FUN_00b4d83c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d44488;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[2] = 0;
  param_1[3] = &DAT_00208540;
  param_1[4] = &DAT_00208540;
  param_1[5] = &DAT_00208540;
  param_1[6] = &DAT_00208540;
  param_1[7] = &DAT_00208540;
  param_1[8] = &DAT_00208540;
  param_1[9] = &DAT_00208540;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  return;
}


// ===== 00b4d874  FUN_00b4d874 =====

void FUN_00b4d874(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208(param_1 + 0x18);
  FUN_00714208(param_1 + 0x20);
  FUN_00714208(param_1 + 0x28);
  FUN_00714208(param_1 + 0x30);
  FUN_00714208(param_1 + 0x38);
  FUN_00714208(param_1 + 0x40);
  FUN_00714208(param_1 + 0x48);
  return;
}


// ===== 00b4d8d8  FUN_00b4d8d8 =====

void FUN_00b4d8d8(void *param_1)

{
  FUN_00b4d874();
  operator_delete(param_1);
  return;
}


// ===== 00b4d908  FUN_00b4d908 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b4d908(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x18,*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x20,*(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x28,*(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x30,*(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x38,*(ulong *)(param_2 + 0x38) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x40,*(ulong *)(param_2 + 0x40) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x48,*(ulong *)(param_2 + 0x48) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    }
  }
  if ((uVar1 & 0x7f00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b4db34  FUN_00b4db34 =====

undefined ** FUN_00b4db34(void)

{
  return &PTR_PTR_00d453c0;
}


// ===== 00b4db44  FUN_00b4db44 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b4db44(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x7f) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  if ((uVar1 & 0x7f00) != 0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dcab0();
    return;
  }
  return;
}


// ===== 00b4dce8  FUN_00b4dce8 =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b4dce8(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  void *__src;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  size_t sVar11;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 7 & 1) != 0) {
    param_2 = (byte *)FUN_00b2c524(param_3,*(undefined8 *)(param_1 + 0x50),param_2);
  }
  if ((uVar1 >> 8 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar8 = *(uint *)(param_1 + 0x58);
    pbVar10 = param_2 + 1;
    *param_2 = 0x10;
    pbVar4 = pbVar10;
    if (0x7f < uVar8) {
      do {
        uVar2 = uVar8 >> 0xe;
        bVar3 = (byte)uVar8;
        uVar8 = uVar8 >> 7;
        pbVar10 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar10;
      } while (uVar2 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar8;
  }
  if ((uVar1 >> 9 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar8 = *(uint *)(param_1 + 0x5c);
    pbVar10 = param_2 + 1;
    *param_2 = 0x18;
    pbVar4 = pbVar10;
    if (0x7f < uVar8) {
      do {
        uVar2 = uVar8 >> 0xe;
        bVar3 = (byte)uVar8;
        uVar8 = uVar8 >> 7;
        pbVar10 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar10;
      } while (uVar2 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar8;
  }
  if ((uVar1 >> 10 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar8 = *(uint *)(param_1 + 0x60);
    pbVar10 = param_2 + 1;
    *param_2 = 0x20;
    pbVar4 = pbVar10;
    if (0x7f < uVar8) {
      do {
        uVar2 = uVar8 >> 0xe;
        bVar3 = (byte)uVar8;
        uVar8 = uVar8 >> 7;
        pbVar10 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar10;
      } while (uVar2 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar8;
  }
  if ((uVar1 >> 0xb & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar8 = *(uint *)(param_1 + 100);
    pbVar10 = param_2 + 1;
    *param_2 = 0x28;
    pbVar4 = pbVar10;
    if (0x7f < uVar8) {
      do {
        uVar2 = uVar8 >> 0xe;
        bVar3 = (byte)uVar8;
        uVar8 = uVar8 >> 7;
        pbVar10 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar10;
      } while (uVar2 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar8;
  }
  if ((uVar1 >> 0xc & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar8 = *(uint *)(param_1 + 0x68);
    pbVar10 = param_2 + 1;
    *param_2 = 0x30;
    pbVar4 = pbVar10;
    if (0x7f < uVar8) {
      do {
        uVar2 = uVar8 >> 0xe;
        bVar3 = (byte)uVar8;
        uVar8 = uVar8 >> 7;
        pbVar10 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar10;
      } while (uVar2 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar8;
  }
  if ((uVar1 >> 0xd & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar8 = *(uint *)(param_1 + 0x6c);
    pbVar10 = param_2 + 1;
    *param_2 = 0x38;
    pbVar4 = pbVar10;
    if (0x7f < uVar8) {
      do {
        uVar2 = uVar8 >> 0xe;
        bVar3 = (byte)uVar8;
        uVar8 = uVar8 >> 7;
        pbVar10 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar10;
      } while (uVar2 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar8;
  }
  if ((uVar1 >> 0xe & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar8 = *(uint *)(param_1 + 0x70);
    pbVar10 = param_2 + 1;
    *param_2 = 0x78;
    pbVar4 = pbVar10;
    if (0x7f < uVar8) {
      do {
        uVar2 = uVar8 >> 0xe;
        bVar3 = (byte)uVar8;
        uVar8 = uVar8 >> 7;
        pbVar10 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar10;
      } while (uVar2 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar8;
  }
  if ((uVar1 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar11 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar11 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar11 < 0x80) goto LAB_00b4deb0;
    }
    else {
LAB_00b4deb0:
      puVar6 = puVar5;
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x6aa;
        *(byte *)((long)param_2 + 2) = (byte)sVar11;
        memcpy((byte *)((long)param_2 + 3),puVar5,sVar11);
        param_2 = (byte *)((long)param_2 + 3) + sVar11;
        goto joined_r0x00b4dee4;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x65,puVar6,sVar11,param_2);
  }
joined_r0x00b4dee4:
  if ((uVar1 >> 1 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
    sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar11 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar11 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar11 < 0x80) goto LAB_00b4df10;
    }
    else {
LAB_00b4df10:
      puVar6 = puVar5;
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x6b2;
        *(byte *)((long)param_2 + 2) = (byte)sVar11;
        memcpy((byte *)((long)param_2 + 3),puVar5,sVar11);
        param_2 = (byte *)((long)param_2 + 3) + sVar11;
        goto joined_r0x00b4e180;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x66,puVar6,sVar11,param_2);
  }
joined_r0x00b4e180:
  if ((uVar1 >> 2 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
    sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar11 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar11 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar11 < 0x80) goto LAB_00b4df70;
    }
    else {
LAB_00b4df70:
      puVar6 = puVar5;
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x6ba;
        *(byte *)((long)param_2 + 2) = (byte)sVar11;
        memcpy((byte *)((long)param_2 + 3),puVar5,sVar11);
        param_2 = (byte *)((long)param_2 + 3) + sVar11;
        goto joined_r0x00b4dfa4;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x67,puVar6,sVar11,param_2);
  }
joined_r0x00b4dfa4:
  if ((uVar1 >> 3 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
    sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar11 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar11 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar11 < 0x80) goto LAB_00b4dfd0;
    }
    else {
LAB_00b4dfd0:
      puVar6 = puVar5;
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x6c2;
        *(byte *)((long)param_2 + 2) = (byte)sVar11;
        memcpy((byte *)((long)param_2 + 3),puVar5,sVar11);
        param_2 = (byte *)((long)param_2 + 3) + sVar11;
        goto joined_r0x00b4dd40;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x68,puVar6,sVar11,param_2);
  }
joined_r0x00b4dd40:
  if ((uVar1 >> 4 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
    sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar11 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar11 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar11 < 0x80) goto LAB_00b4e030;
    }
    else {
LAB_00b4e030:
      puVar6 = puVar5;
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x6ca;
        *(byte *)((long)param_2 + 2) = (byte)sVar11;
        memcpy((byte *)((long)param_2 + 3),puVar5,sVar11);
        param_2 = (byte *)((long)param_2 + 3) + sVar11;
        goto joined_r0x00b4dd44;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x69,puVar6,sVar11,param_2);
  }
joined_r0x00b4dd44:
  if ((uVar1 >> 5 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc);
    sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar11 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar11 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar11 < 0x80) goto LAB_00b4e090;
    }
    else {
LAB_00b4e090:
      puVar6 = puVar5;
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x6d2;
        *(byte *)((long)param_2 + 2) = (byte)sVar11;
        memcpy((byte *)((long)param_2 + 3),puVar5,sVar11);
        param_2 = (byte *)((long)param_2 + 3) + sVar11;
        goto joined_r0x00b4e200;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x6a,puVar6,sVar11,param_2);
  }
joined_r0x00b4e200:
  if ((uVar1 >> 6 & 1) == 0) {
    uVar9 = *(ulong *)(param_1 + 8);
    goto joined_r0x00b4e224;
  }
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
  sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
  if ((long)sVar11 < 0) {
    puVar6 = (undefined8 *)*puVar5;
    sVar11 = puVar5[1];
    puVar5 = puVar6;
    if ((long)sVar11 < 0x80) goto LAB_00b4e0f0;
  }
  else {
LAB_00b4e0f0:
    puVar6 = puVar5;
    if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
      param_2[0] = 0xda;
      param_2[1] = 6;
      param_2[2] = (byte)sVar11;
      memcpy(param_2 + 3,puVar5,sVar11);
      param_2 = param_2 + 3 + sVar11;
      uVar9 = *(ulong *)(param_1 + 8);
      goto joined_r0x00b4e224;
    }
  }
  param_2 = (byte *)FUN_006dd0b8(param_3,0x6b,puVar6,sVar11,param_2);
  uVar9 = *(ulong *)(param_1 + 8);
joined_r0x00b4e224:
  if ((uVar9 & 1) != 0) {
    uVar9 = uVar9 & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar9 + 0x1f);
    if ((long)uVar7 < 0) {
      __src = *(void **)(uVar9 + 8);
      uVar7 = (ulong)*(uint *)(uVar9 + 0x10);
    }
    else {
      __src = (void *)(uVar9 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar7) {
      pbVar4 = (byte *)FUN_006dcef8(param_3,__src,uVar7,param_2);
      return pbVar4;
    }
    memcpy(param_2,__src,uVar7 & 0xffffffff);
    param_2 = param_2 + (int)uVar7;
  }
  return param_2;
}


// ===== 00b4e3c0  FUN_00b4e3c0 =====

/* WARNING: Type propagation algorithm not settling */

long FUN_00b4e3c0(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) == 0) {
    lVar4 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      uVar6 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      lVar4 = uVar6 + ((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar6 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar6 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar6 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar6 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 5 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar6 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 6 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar6 + (ulong)((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 7 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x50)) * -9 + 0x2c0U >> 6) + lVar4;
    }
  }
  if ((uVar1 & 0x7f00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x58)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x5c)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x60)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 100)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x68)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x6c)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT(*(undefined4 *)(param_1 + 0x70)) * -9 + 0x1a0U >> 6);
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar3 = (int)lVar4;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar6 + 0x10);
    }
    lVar4 = lVar5 + lVar4;
    iVar3 = (int)lVar4;
  }
  if ((iVar3 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)lVar4;
  }
  return lVar4;
}


// ===== 00b4e720  FUN_00b4e720 =====

void FUN_00b4e720(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d444c8;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  return;
}


// ===== 00b4e73c  FUN_00b4e73c =====

void FUN_00b4e73c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dbb00();
  return;
}


// ===== 00b4e750  FUN_00b4e750 =====

void FUN_00b4e750(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  operator_delete(param_1);
  return;
}


// ===== 00b4e788  FUN_00b4e788 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b4e788(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b4e820  FUN_00b4e820 =====

undefined ** FUN_00b4e820(void)

{
  return &PTR_PTR_00d45420;
}


// ===== 00b4e830  FUN_00b4e830 =====

void FUN_00b4e830(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 0x3f) != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00b4e85c  FUN_00b4e85c =====

/* WARNING: Type propagation algorithm not settling */

void * FUN_00b4e85c(long param_1,void *param_2,long *param_3)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = (void *)FUN_006d89ec(param_3,*(undefined4 *)(param_1 + 0x18),param_2);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = (void *)FUN_006da6b8(param_3,*(undefined4 *)(param_1 + 0x1c),param_2);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_2 = (void *)FUN_006d8a68(param_3,*(undefined4 *)(param_1 + 0x20),param_2);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_2 = (void *)FUN_006d9c64(param_3,*(undefined4 *)(param_1 + 0x24),param_2);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    param_2 = (void *)FUN_006d9ce0(param_3,*(undefined4 *)(param_1 + 0x28),param_2);
  }
  if ((uVar1 >> 5 & 1) == 0) {
    uVar4 = *(ulong *)(param_1 + 8);
  }
  else {
    param_2 = (void *)FUN_006d9d5c(param_3,*(undefined4 *)(param_1 + 0x2c),param_2);
    uVar4 = *(ulong *)(param_1 + 8);
  }
  if ((uVar4 & 1) != 0) {
    uVar4 = uVar4 & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar3 < 0) {
      pvVar2 = *(void **)(uVar4 + 8);
      uVar3 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      pvVar2 = (void *)(uVar4 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      pvVar2 = (void *)FUN_006dcef8(param_3,pvVar2,uVar3,param_2);
      return pvVar2;
    }
    memcpy(param_2,pvVar2,uVar3 & 0xffffffff);
    param_2 = (void *)((long)param_2 + (long)(int)uVar3);
  }
  return param_2;
}


// ===== 00b4e9b0  FUN_00b4e9b0 =====

ulong FUN_00b4e9b0(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x3f) == 0) {
    uVar3 = 0;
    uVar4 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x2c0U >> 6) + uVar3;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + uVar3;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x2c0U >> 6) + uVar3;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      uVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + uVar3;
    }
    if ((uVar1 >> 5 & 1) == 0) {
      uVar4 = *(ulong *)(param_1 + 8);
    }
    else {
      uVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x2c)) * -9 + 0x2c0U >> 6) + uVar3;
      uVar4 = *(ulong *)(param_1 + 8);
    }
  }
  if ((uVar4 & 1) == 0) {
    iVar2 = (int)uVar3;
  }
  else {
    lVar5 = (long)*(char *)((uVar4 & 0xfffffffffffffffe) + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)((uVar4 & 0xfffffffffffffffe) + 0x10);
    }
    uVar3 = lVar5 + uVar3;
    iVar2 = (int)uVar3;
  }
  if ((iVar2 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)uVar3;
  }
  return uVar3;
}


// ===== 00b4eae8  FUN_00b4eae8 =====

void FUN_00b4eae8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d44b88;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  return;
}


// ===== 00b4eb08  FUN_00b4eb08 =====

void FUN_00b4eb08(long param_1)

{
  void *pvVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    if ((*(byte *)((long)pvVar1 + 8) & 1) != 0) {
      FUN_006dbb00();
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00b4eb68  FUN_00b4eb68 =====

void FUN_00b4eb68(void *param_1)

{
  void *pvVar1;
  
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  pvVar1 = *(void **)((long)param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    if ((*(byte *)((long)pvVar1 + 8) & 1) != 0) {
      FUN_006dbb00();
    }
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00b4ebc4  FUN_00b4ebc4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b4ebc4(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x18);
      lVar5 = *(long *)(param_2 + 0x18);
      if (lVar6 == 0) {
        uVar4 = FUN_00b53adc(uVar3);
        *(undefined8 *)(param_1 + 0x18) = uVar4;
      }
      else {
        uVar2 = *(uint *)(lVar5 + 0x10);
        if ((uVar2 & 0x3f) != 0) {
          if ((uVar2 & 1) != 0) {
            *(undefined4 *)(lVar6 + 0x18) = *(undefined4 *)(lVar5 + 0x18);
          }
          if ((uVar2 >> 1 & 1) != 0) {
            *(undefined4 *)(lVar6 + 0x1c) = *(undefined4 *)(lVar5 + 0x1c);
          }
          if ((uVar2 >> 2 & 1) != 0) {
            *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(lVar5 + 0x20);
          }
          if ((uVar2 >> 3 & 1) != 0) {
            *(undefined4 *)(lVar6 + 0x24) = *(undefined4 *)(lVar5 + 0x24);
          }
          if ((uVar2 >> 4 & 1) != 0) {
            *(undefined4 *)(lVar6 + 0x28) = *(undefined4 *)(lVar5 + 0x28);
          }
          if ((uVar2 >> 5 & 1) != 0) {
            *(undefined4 *)(lVar6 + 0x2c) = *(undefined4 *)(lVar5 + 0x2c);
          }
        }
        *(uint *)(lVar6 + 0x10) = *(uint *)(lVar6 + 0x10) | uVar2;
        if ((*(ulong *)(lVar5 + 8) & 1) != 0) {
          FUN_006dcb04(lVar6 + 8,(*(ulong *)(lVar5 + 8) & 0xfffffffffffffffe) + 8);
        }
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04((ulong *)(param_1 + 8),(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b4ed38  FUN_00b4ed38 =====

undefined ** FUN_00b4ed38(void)

{
  return &PTR_PTR_00d45488;
}


// ===== 00b4ed48  FUN_00b4ed48 =====

void FUN_00b4ed48(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    FUN_00b4e830(*(undefined8 *)(param_1 + 0x18));
  }
  if ((uVar1 & 0x1e) != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0((byte *)(param_1 + 8));
  return;
}


// ===== 00b4edac  FUN_00b4edac =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b4edac(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  void *__src;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = (byte *)FUN_00b2c524(param_3,*(undefined8 *)(param_1 + 0x20),param_2);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x28);
    pbVar8 = param_2 + 1;
    *param_2 = 0x10;
    pbVar4 = pbVar8;
    if (0x7f < uVar6) {
      do {
        uVar2 = uVar6 >> 0xe;
        bVar3 = (byte)uVar6;
        uVar6 = uVar6 >> 7;
        pbVar8 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar8;
      } while (uVar2 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x2c);
    pbVar8 = param_2 + 1;
    *param_2 = 0x18;
    pbVar4 = pbVar8;
    if (0x7f < uVar6) {
      do {
        uVar2 = uVar6 >> 0xe;
        bVar3 = (byte)uVar6;
        uVar6 = uVar6 >> 7;
        pbVar8 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar8;
      } while (uVar2 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
  }
  if ((uVar1 >> 4 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x30);
    pbVar8 = param_2 + 1;
    *param_2 = 0x20;
    pbVar4 = pbVar8;
    if (0x7f < uVar6) {
      do {
        uVar2 = uVar6 >> 0xe;
        bVar3 = (byte)uVar6;
        uVar6 = uVar6 >> 7;
        pbVar8 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar8;
      } while (uVar2 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
  }
  if ((uVar1 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 8);
  }
  else {
    param_2 = (byte *)FUN_006fc2f0(5,*(long *)(param_1 + 0x18),
                                   *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3
                                  );
    uVar7 = *(ulong *)(param_1 + 8);
  }
  if ((uVar7 & 1) != 0) {
    uVar7 = uVar7 & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar5 < 0) {
      __src = *(void **)(uVar7 + 8);
      uVar5 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      __src = (void *)(uVar7 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      pbVar4 = (byte *)FUN_006dcef8(param_3,__src,uVar5,param_2);
      return pbVar4;
    }
    memcpy(param_2,__src,uVar5 & 0xffffffff);
    param_2 = param_2 + (int)uVar5;
  }
  return param_2;
}


// ===== 00b4efa0  FUN_00b4efa0 =====

void FUN_00b4efa0(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x1f) == 0) {
    iVar2 = 0;
    uVar3 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((uVar1 & 1) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00b4e9b0(*(undefined8 *)(param_1 + 0x18));
      iVar2 = iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      iVar2 = ((int)LZCOUNT(*(undefined8 *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + iVar2;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      iVar2 = iVar2 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x28)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      iVar2 = iVar2 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x2c)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 4 & 1) == 0) {
      uVar3 = *(ulong *)(param_1 + 8);
    }
    else {
      iVar2 = iVar2 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x30)) * -9 + 0x1a0U >> 6);
      uVar3 = *(ulong *)(param_1 + 8);
    }
  }
  if ((uVar3 & 1) != 0) {
    lVar4 = (long)*(char *)((uVar3 & 0xfffffffffffffffe) + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)((uVar3 & 0xfffffffffffffffe) + 0x10);
    }
    iVar2 = (int)lVar4 + iVar2;
  }
  if ((iVar2 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = iVar2;
  }
  return;
}


// ===== 00b4f0ec  FUN_00b4f0ec =====

void FUN_00b4f0ec(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d44b48;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  return;
}


// ===== 00b4f108  FUN_00b4f108 =====

void FUN_00b4f108(long param_1)

{
  void *pvVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    if ((*(byte *)((long)pvVar1 + 8) & 1) != 0) {
      FUN_006dbb00();
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00b4f168  FUN_00b4f168 =====

void FUN_00b4f168(void *param_1)

{
  void *pvVar1;
  
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  pvVar1 = *(void **)((long)param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    if ((*(byte *)((long)pvVar1 + 8) & 1) != 0) {
      FUN_006dbb00();
    }
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00b4f1c4  FUN_00b4f1c4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b4f1c4(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x18);
      lVar5 = *(long *)(param_2 + 0x18);
      if (lVar6 == 0) {
        uVar4 = FUN_00b53adc(uVar3);
        *(undefined8 *)(param_1 + 0x18) = uVar4;
      }
      else {
        uVar2 = *(uint *)(lVar5 + 0x10);
        if ((uVar2 & 0x3f) != 0) {
          if ((uVar2 & 1) != 0) {
            *(undefined4 *)(lVar6 + 0x18) = *(undefined4 *)(lVar5 + 0x18);
          }
          if ((uVar2 >> 1 & 1) != 0) {
            *(undefined4 *)(lVar6 + 0x1c) = *(undefined4 *)(lVar5 + 0x1c);
          }
          if ((uVar2 >> 2 & 1) != 0) {
            *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(lVar5 + 0x20);
          }
          if ((uVar2 >> 3 & 1) != 0) {
            *(undefined4 *)(lVar6 + 0x24) = *(undefined4 *)(lVar5 + 0x24);
          }
          if ((uVar2 >> 4 & 1) != 0) {
            *(undefined4 *)(lVar6 + 0x28) = *(undefined4 *)(lVar5 + 0x28);
          }
          if ((uVar2 >> 5 & 1) != 0) {
            *(undefined4 *)(lVar6 + 0x2c) = *(undefined4 *)(lVar5 + 0x2c);
          }
        }
        *(uint *)(lVar6 + 0x10) = *(uint *)(lVar6 + 0x10) | uVar2;
        if ((*(ulong *)(lVar5 + 8) & 1) != 0) {
          FUN_006dcb04(lVar6 + 8,(*(ulong *)(lVar5 + 8) & 0xfffffffffffffffe) + 8);
        }
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04((ulong *)(param_1 + 8),(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b4f328  FUN_00b4f328 =====

undefined ** FUN_00b4f328(void)

{
  return &PTR_PTR_00d454f0;
}


// ===== 00b4f338  FUN_00b4f338 =====

void FUN_00b4f338(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    FUN_00b4e830(*(undefined8 *)(param_1 + 0x18));
  }
  if ((uVar1 & 0xe) != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0((byte *)(param_1 + 8));
  return;
}


// ===== 00b4f398  FUN_00b4f398 =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b4f398(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  void *__src;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = (byte *)FUN_00b2c524(param_3,*(undefined8 *)(param_1 + 0x20),param_2);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x28);
    pbVar8 = param_2 + 1;
    *param_2 = 0x10;
    pbVar4 = pbVar8;
    if (0x7f < uVar6) {
      do {
        uVar2 = uVar6 >> 0xe;
        bVar3 = (byte)uVar6;
        uVar6 = uVar6 >> 7;
        pbVar8 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar8;
      } while (uVar2 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x2c);
    pbVar8 = param_2 + 1;
    *param_2 = 0x18;
    pbVar4 = pbVar8;
    if (0x7f < uVar6) {
      do {
        uVar2 = uVar6 >> 0xe;
        bVar3 = (byte)uVar6;
        uVar6 = uVar6 >> 7;
        pbVar8 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar8;
      } while (uVar2 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
  }
  if ((uVar1 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 8);
  }
  else {
    param_2 = (byte *)FUN_006fc2f0(4,*(long *)(param_1 + 0x18),
                                   *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3
                                  );
    uVar7 = *(ulong *)(param_1 + 8);
  }
  if ((uVar7 & 1) != 0) {
    uVar7 = uVar7 & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar5 < 0) {
      __src = *(void **)(uVar7 + 8);
      uVar5 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      __src = (void *)(uVar7 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      pbVar4 = (byte *)FUN_006dcef8(param_3,__src,uVar5,param_2);
      return pbVar4;
    }
    memcpy(param_2,__src,uVar5 & 0xffffffff);
    param_2 = param_2 + (int)uVar5;
  }
  return param_2;
}


// ===== 00b4f534  FUN_00b4f534 =====

void FUN_00b4f534(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) == 0) {
    iVar2 = 0;
    uVar3 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((uVar1 & 1) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00b4e9b0(*(undefined8 *)(param_1 + 0x18));
      iVar2 = iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      iVar2 = ((int)LZCOUNT(*(undefined8 *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + iVar2;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      iVar2 = iVar2 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x28)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 3 & 1) == 0) {
      uVar3 = *(ulong *)(param_1 + 8);
    }
    else {
      iVar2 = iVar2 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x2c)) * -9 + 0x1a0U >> 6);
      uVar3 = *(ulong *)(param_1 + 8);
    }
  }
  if ((uVar3 & 1) != 0) {
    lVar4 = (long)*(char *)((uVar3 & 0xfffffffffffffffe) + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)((uVar3 & 0xfffffffffffffffe) + 0x10);
    }
    iVar2 = (int)lVar4 + iVar2;
  }
  if ((iVar2 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = iVar2;
  }
  return;
}


// ===== 00b4f65c  FUN_00b4f65c =====

void FUN_00b4f65c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d44c88;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  return;
}


// ===== 00b4f678  FUN_00b4f678 =====

void FUN_00b4f678(long param_1)

{
  void *pvVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    if ((*(byte *)((long)pvVar1 + 8) & 1) != 0) {
      FUN_006dbb00();
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00b4f6d8  FUN_00b4f6d8 =====

void FUN_00b4f6d8(void *param_1)

{
  void *pvVar1;
  
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  pvVar1 = *(void **)((long)param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    if ((*(byte *)((long)pvVar1 + 8) & 1) != 0) {
      FUN_006dbb00();
    }
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00b4f734  FUN_00b4f734 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b4f734(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x18);
      lVar5 = *(long *)(param_2 + 0x18);
      if (lVar6 == 0) {
        uVar4 = FUN_00b53adc(uVar3);
        *(undefined8 *)(param_1 + 0x18) = uVar4;
      }
      else {
        uVar2 = *(uint *)(lVar5 + 0x10);
        if ((uVar2 & 0x3f) != 0) {
          if ((uVar2 & 1) != 0) {
            *(undefined4 *)(lVar6 + 0x18) = *(undefined4 *)(lVar5 + 0x18);
          }
          if ((uVar2 >> 1 & 1) != 0) {
            *(undefined4 *)(lVar6 + 0x1c) = *(undefined4 *)(lVar5 + 0x1c);
          }
          if ((uVar2 >> 2 & 1) != 0) {
            *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(lVar5 + 0x20);
          }
          if ((uVar2 >> 3 & 1) != 0) {
            *(undefined4 *)(lVar6 + 0x24) = *(undefined4 *)(lVar5 + 0x24);
          }
          if ((uVar2 >> 4 & 1) != 0) {
            *(undefined4 *)(lVar6 + 0x28) = *(undefined4 *)(lVar5 + 0x28);
          }
          if ((uVar2 >> 5 & 1) != 0) {
            *(undefined4 *)(lVar6 + 0x2c) = *(undefined4 *)(lVar5 + 0x2c);
          }
        }
        *(uint *)(lVar6 + 0x10) = *(uint *)(lVar6 + 0x10) | uVar2;
        if ((*(ulong *)(lVar5 + 8) & 1) != 0) {
          FUN_006dcb04(lVar6 + 8,(*(ulong *)(lVar5 + 8) & 0xfffffffffffffffe) + 8);
        }
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04((ulong *)(param_1 + 8),(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b4f898  FUN_00b4f898 =====

undefined ** FUN_00b4f898(void)

{
  return &PTR_PTR_00d45558;
}


// ===== 00b4f8a8  FUN_00b4f8a8 =====

void FUN_00b4f8a8(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    FUN_00b4e830(*(undefined8 *)(param_1 + 0x18));
  }
  if ((uVar1 & 0xe) != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0((byte *)(param_1 + 8));
  return;
}


// ===== 00b4f908  FUN_00b4f908 =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b4f908(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  void *__src;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = (byte *)FUN_00b2c524(param_3,*(undefined8 *)(param_1 + 0x20),param_2);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x28);
    pbVar8 = param_2 + 1;
    *param_2 = 0x10;
    pbVar4 = pbVar8;
    if (0x7f < uVar6) {
      do {
        uVar2 = uVar6 >> 0xe;
        bVar3 = (byte)uVar6;
        uVar6 = uVar6 >> 7;
        pbVar8 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar8;
      } while (uVar2 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x2c);
    pbVar8 = param_2 + 1;
    *param_2 = 0x18;
    pbVar4 = pbVar8;
    if (0x7f < uVar6) {
      do {
        uVar2 = uVar6 >> 0xe;
        bVar3 = (byte)uVar6;
        uVar6 = uVar6 >> 7;
        pbVar8 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar8;
      } while (uVar2 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
  }
  if ((uVar1 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 8);
  }
  else {
    param_2 = (byte *)FUN_006fc2f0(5,*(long *)(param_1 + 0x18),
                                   *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3
                                  );
    uVar7 = *(ulong *)(param_1 + 8);
  }
  if ((uVar7 & 1) != 0) {
    uVar7 = uVar7 & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar5 < 0) {
      __src = *(void **)(uVar7 + 8);
      uVar5 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      __src = (void *)(uVar7 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      pbVar4 = (byte *)FUN_006dcef8(param_3,__src,uVar5,param_2);
      return pbVar4;
    }
    memcpy(param_2,__src,uVar5 & 0xffffffff);
    param_2 = param_2 + (int)uVar5;
  }
  return param_2;
}


// ===== 00b4faa4  FUN_00b4faa4 =====

void FUN_00b4faa4(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) == 0) {
    iVar2 = 0;
    uVar3 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((uVar1 & 1) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00b4e9b0(*(undefined8 *)(param_1 + 0x18));
      iVar2 = iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      iVar2 = ((int)LZCOUNT(*(undefined8 *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + iVar2;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      iVar2 = iVar2 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x28)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 3 & 1) == 0) {
      uVar3 = *(ulong *)(param_1 + 8);
    }
    else {
      iVar2 = iVar2 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x2c)) * -9 + 0x1a0U >> 6);
      uVar3 = *(ulong *)(param_1 + 8);
    }
  }
  if ((uVar3 & 1) != 0) {
    lVar4 = (long)*(char *)((uVar3 & 0xfffffffffffffffe) + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)((uVar3 & 0xfffffffffffffffe) + 0x10);
    }
    iVar2 = (int)lVar4 + iVar2;
  }
  if ((iVar2 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = iVar2;
  }
  return;
}


// ===== 00b4fbcc  FUN_00b4fbcc =====

void FUN_00b4fbcc(undefined8 *param_1,undefined8 param_2)

{
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_00d44c48;
  param_1[1] = param_2;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}


// ===== 00b4fbec  FUN_00b4fbec =====

void FUN_00b4fbec(long param_1)

{
  void *pvVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    if ((*(byte *)((long)pvVar1 + 8) & 1) != 0) {
      FUN_006dbb00();
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00b4fc4c  FUN_00b4fc4c =====

void FUN_00b4fc4c(void *param_1)

{
  void *pvVar1;
  
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  pvVar1 = *(void **)((long)param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    if ((*(byte *)((long)pvVar1 + 8) & 1) != 0) {
      FUN_006dbb00();
    }
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00b4fca8  FUN_00b4fca8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b4fca8(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x18);
      lVar5 = *(long *)(param_2 + 0x18);
      if (lVar6 == 0) {
        uVar4 = FUN_00b53adc(uVar3);
        *(undefined8 *)(param_1 + 0x18) = uVar4;
      }
      else {
        uVar2 = *(uint *)(lVar5 + 0x10);
        if ((uVar2 & 0x3f) != 0) {
          if ((uVar2 & 1) != 0) {
            *(undefined4 *)(lVar6 + 0x18) = *(undefined4 *)(lVar5 + 0x18);
          }
          if ((uVar2 >> 1 & 1) != 0) {
            *(undefined4 *)(lVar6 + 0x1c) = *(undefined4 *)(lVar5 + 0x1c);
          }
          if ((uVar2 >> 2 & 1) != 0) {
            *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(lVar5 + 0x20);
          }
          if ((uVar2 >> 3 & 1) != 0) {
            *(undefined4 *)(lVar6 + 0x24) = *(undefined4 *)(lVar5 + 0x24);
          }
          if ((uVar2 >> 4 & 1) != 0) {
            *(undefined4 *)(lVar6 + 0x28) = *(undefined4 *)(lVar5 + 0x28);
          }
          if ((uVar2 >> 5 & 1) != 0) {
            *(undefined4 *)(lVar6 + 0x2c) = *(undefined4 *)(lVar5 + 0x2c);
          }
        }
        *(uint *)(lVar6 + 0x10) = *(uint *)(lVar6 + 0x10) | uVar2;
        if ((*(ulong *)(lVar5 + 8) & 1) != 0) {
          FUN_006dcb04(lVar6 + 8,(*(ulong *)(lVar5 + 8) & 0xfffffffffffffffe) + 8);
        }
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04((ulong *)(param_1 + 8),(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b4fdf8  FUN_00b4fdf8 =====

undefined ** FUN_00b4fdf8(void)

{
  return &PTR_PTR_00d455c0;
}


// ===== 00b4fe08  FUN_00b4fe08 =====

void FUN_00b4fe08(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    FUN_00b4e830(*(undefined8 *)(param_1 + 0x18));
  }
  if ((uVar1 & 6) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0((byte *)(param_1 + 8));
  return;
}


// ===== 00b4fe6c  FUN_00b4fe6c =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b4fe6c(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  void *__src;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = (byte *)FUN_00b2c524(param_3,*(undefined8 *)(param_1 + 0x20),param_2);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x28);
    pbVar8 = param_2 + 1;
    *param_2 = 0x10;
    pbVar4 = pbVar8;
    if (0x7f < uVar6) {
      do {
        uVar2 = uVar6 >> 0xe;
        bVar3 = (byte)uVar6;
        uVar6 = uVar6 >> 7;
        pbVar8 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar8;
      } while (uVar2 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
  }
  if ((uVar1 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 8);
  }
  else {
    param_2 = (byte *)FUN_006fc2f0(4,*(long *)(param_1 + 0x18),
                                   *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3
                                  );
    uVar7 = *(ulong *)(param_1 + 8);
  }
  if ((uVar7 & 1) != 0) {
    uVar7 = uVar7 & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar5 < 0) {
      __src = *(void **)(uVar7 + 8);
      uVar5 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      __src = (void *)(uVar7 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      pbVar4 = (byte *)FUN_006dcef8(param_3,__src,uVar5,param_2);
      return pbVar4;
    }
    memcpy(param_2,__src,uVar5 & 0xffffffff);
    param_2 = param_2 + (int)uVar5;
  }
  return param_2;
}


// ===== 00b4ffb0  FUN_00b4ffb0 =====

void FUN_00b4ffb0(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) == 0) {
    iVar2 = 0;
    uVar3 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((uVar1 & 1) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00b4e9b0(*(undefined8 *)(param_1 + 0x18));
      iVar2 = iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      iVar2 = ((int)LZCOUNT(*(undefined8 *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + iVar2;
    }
    if ((uVar1 >> 2 & 1) == 0) {
      uVar3 = *(ulong *)(param_1 + 8);
    }
    else {
      iVar2 = iVar2 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x28)) * -9 + 0x1a0U >> 6);
      uVar3 = *(ulong *)(param_1 + 8);
    }
  }
  if ((uVar3 & 1) != 0) {
    lVar4 = (long)*(char *)((uVar3 & 0xfffffffffffffffe) + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)((uVar3 & 0xfffffffffffffffe) + 0x10);
    }
    iVar2 = (int)lVar4 + iVar2;
  }
  if ((iVar2 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = iVar2;
  }
  return;
}


// ===== 00b500b4  FUN_00b500b4 =====

void FUN_00b500b4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d44ac8;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = &DAT_00208540;
  param_1[4] = &DAT_00208540;
  param_1[5] = &DAT_00208540;
  param_1[6] = &DAT_00208540;
  param_1[7] = &DAT_00208540;
  param_1[8] = &DAT_00208540;
  param_1[9] = &DAT_00208540;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  return;
}


// ===== 00b500e8  FUN_00b500e8 =====

void FUN_00b500e8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208(param_1 + 0x18);
  FUN_00714208(param_1 + 0x20);
  FUN_00714208(param_1 + 0x28);
  FUN_00714208(param_1 + 0x30);
  FUN_00714208(param_1 + 0x38);
  FUN_00714208(param_1 + 0x40);
  FUN_00714208(param_1 + 0x48);
  return;
}


// ===== 00b5014c  FUN_00b5014c =====

void FUN_00b5014c(void *param_1)

{
  FUN_00b500e8();
  operator_delete(param_1);
  return;
}


// ===== 00b5017c  FUN_00b5017c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b5017c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x18,*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x20,*(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x28,*(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x30,*(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x38,*(ulong *)(param_2 + 0x38) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x40,*(ulong *)(param_2 + 0x40) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_00713ffc(param_1 + 0x48,*(ulong *)(param_2 + 0x48) & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    }
  }
  if ((uVar1 & 0x7f00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      *(undefined1 *)(param_1 + 100) = *(undefined1 *)(param_2 + 100);
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      *(undefined1 *)(param_1 + 0x65) = *(undefined1 *)(param_2 + 0x65);
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b503a8  FUN_00b503a8 =====

undefined ** FUN_00b503a8(void)

{
  return &PTR_PTR_00d45628;
}


// ===== 00b503b8  FUN_00b503b8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b503b8(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x7f) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        *(undefined1 *)*puVar2 = 0;
        puVar2[1] = 0;
      }
      else {
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((long)puVar2 + 0x17) = 0;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  if ((uVar1 & 0x7f00) != 0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dcab0();
    return;
  }
  return;
}


// ===== 00b50558  FUN_00b50558 =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b50558(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  void *__src;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  size_t sVar11;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 7 & 1) != 0) {
    param_2 = (byte *)FUN_00b2c524(param_3,*(undefined8 *)(param_1 + 0x50),param_2);
  }
  if ((uVar1 >> 8 & 1) != 0) {
    param_2 = (byte *)FUN_006da6b8(param_3,*(undefined4 *)(param_1 + 0x58),param_2);
  }
  if ((uVar1 >> 9 & 1) != 0) {
    param_2 = (byte *)FUN_006d8a68(param_3,*(undefined4 *)(param_1 + 0x5c),param_2);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar8 = *(uint *)(param_1 + 0x60);
    pbVar10 = param_2 + 1;
    *param_2 = 0x20;
    pbVar4 = pbVar10;
    if (0x7f < uVar8) {
      do {
        uVar3 = uVar8 >> 0xe;
        bVar2 = (byte)uVar8;
        uVar8 = uVar8 >> 7;
        pbVar10 = pbVar4 + 1;
        *pbVar4 = bVar2 | 0x80;
        pbVar4 = pbVar10;
      } while (uVar3 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar8;
  }
  if ((uVar1 >> 0xb & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    bVar2 = *(byte *)(param_1 + 100);
    *param_2 = 0x28;
    param_2[1] = bVar2;
    param_2 = param_2 + 2;
  }
  if ((uVar1 >> 0xc & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    bVar2 = *(byte *)(param_1 + 0x65);
    *param_2 = 0x30;
    param_2[1] = bVar2;
    param_2 = param_2 + 2;
  }
  if ((uVar1 >> 0xd & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar8 = *(uint *)(param_1 + 0x68);
    pbVar10 = param_2 + 1;
    *param_2 = 0x38;
    pbVar4 = pbVar10;
    if (0x7f < uVar8) {
      do {
        uVar3 = uVar8 >> 0xe;
        bVar2 = (byte)uVar8;
        uVar8 = uVar8 >> 7;
        pbVar10 = pbVar4 + 1;
        *pbVar4 = bVar2 | 0x80;
        pbVar4 = pbVar10;
      } while (uVar3 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar8;
  }
  if ((uVar1 >> 0xe & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar8 = *(uint *)(param_1 + 0x6c);
    pbVar10 = param_2 + 1;
    *param_2 = 0x40;
    pbVar4 = pbVar10;
    if (0x7f < uVar8) {
      do {
        uVar3 = uVar8 >> 0xe;
        bVar2 = (byte)uVar8;
        uVar8 = uVar8 >> 7;
        pbVar10 = pbVar4 + 1;
        *pbVar4 = bVar2 | 0x80;
        pbVar4 = pbVar10;
      } while (uVar3 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar8;
  }
  if ((uVar1 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar11 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar11 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar11 < 0x80) goto LAB_00b50700;
    }
    else {
LAB_00b50700:
      puVar6 = puVar5;
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x6aa;
        *(byte *)((long)param_2 + 2) = (byte)sVar11;
        memcpy((byte *)((long)param_2 + 3),puVar5,sVar11);
        param_2 = (byte *)((long)param_2 + 3) + sVar11;
        goto joined_r0x00b50734;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x65,puVar6,sVar11,param_2);
  }
joined_r0x00b50734:
  if ((uVar1 >> 1 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
    sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar11 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar11 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar11 < 0x80) goto LAB_00b50760;
    }
    else {
LAB_00b50760:
      puVar6 = puVar5;
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x6b2;
        *(byte *)((long)param_2 + 2) = (byte)sVar11;
        memcpy((byte *)((long)param_2 + 3),puVar5,sVar11);
        param_2 = (byte *)((long)param_2 + 3) + sVar11;
        goto joined_r0x00b509d0;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x66,puVar6,sVar11,param_2);
  }
joined_r0x00b509d0:
  if ((uVar1 >> 2 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
    sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar11 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar11 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar11 < 0x80) goto LAB_00b507c0;
    }
    else {
LAB_00b507c0:
      puVar6 = puVar5;
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x6ba;
        *(byte *)((long)param_2 + 2) = (byte)sVar11;
        memcpy((byte *)((long)param_2 + 3),puVar5,sVar11);
        param_2 = (byte *)((long)param_2 + 3) + sVar11;
        goto joined_r0x00b507f4;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x67,puVar6,sVar11,param_2);
  }
joined_r0x00b507f4:
  if ((uVar1 >> 3 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
    sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar11 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar11 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar11 < 0x80) goto LAB_00b50820;
    }
    else {
LAB_00b50820:
      puVar6 = puVar5;
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x6c2;
        *(byte *)((long)param_2 + 2) = (byte)sVar11;
        memcpy((byte *)((long)param_2 + 3),puVar5,sVar11);
        param_2 = (byte *)((long)param_2 + 3) + sVar11;
        goto joined_r0x00b505b0;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x68,puVar6,sVar11,param_2);
  }
joined_r0x00b505b0:
  if ((uVar1 >> 4 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
    sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar11 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar11 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar11 < 0x80) goto LAB_00b50880;
    }
    else {
LAB_00b50880:
      puVar6 = puVar5;
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x6ca;
        *(byte *)((long)param_2 + 2) = (byte)sVar11;
        memcpy((byte *)((long)param_2 + 3),puVar5,sVar11);
        param_2 = (byte *)((long)param_2 + 3) + sVar11;
        goto joined_r0x00b505b4;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x69,puVar6,sVar11,param_2);
  }
joined_r0x00b505b4:
  if ((uVar1 >> 5 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc);
    sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
    if ((long)sVar11 < 0) {
      puVar6 = (undefined8 *)*puVar5;
      sVar11 = puVar5[1];
      puVar5 = puVar6;
      if ((long)sVar11 < 0x80) goto LAB_00b508e0;
    }
    else {
LAB_00b508e0:
      puVar6 = puVar5;
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
        *(undefined2 *)param_2 = 0x6d2;
        *(byte *)((long)param_2 + 2) = (byte)sVar11;
        memcpy((byte *)((long)param_2 + 3),puVar5,sVar11);
        param_2 = (byte *)((long)param_2 + 3) + sVar11;
        goto joined_r0x00b50a50;
      }
    }
    param_2 = (byte *)FUN_006dd0b8(param_3,0x6a,puVar6,sVar11,param_2);
  }
joined_r0x00b50a50:
  if ((uVar1 >> 6 & 1) == 0) {
    uVar9 = *(ulong *)(param_1 + 8);
    goto joined_r0x00b50a74;
  }
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
  sVar11 = (size_t)*(char *)((long)puVar5 + 0x17);
  if ((long)sVar11 < 0) {
    puVar6 = (undefined8 *)*puVar5;
    sVar11 = puVar5[1];
    puVar5 = puVar6;
    if ((long)sVar11 < 0x80) goto LAB_00b50940;
  }
  else {
LAB_00b50940:
    puVar6 = puVar5;
    if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xd) {
      param_2[0] = 0xda;
      param_2[1] = 6;
      param_2[2] = (byte)sVar11;
      memcpy(param_2 + 3,puVar5,sVar11);
      param_2 = param_2 + 3 + sVar11;
      uVar9 = *(ulong *)(param_1 + 8);
      goto joined_r0x00b50a74;
    }
  }
  param_2 = (byte *)FUN_006dd0b8(param_3,0x6b,puVar6,sVar11,param_2);
  uVar9 = *(ulong *)(param_1 + 8);
joined_r0x00b50a74:
  if ((uVar9 & 1) != 0) {
    uVar9 = uVar9 & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar9 + 0x1f);
    if ((long)uVar7 < 0) {
      __src = *(void **)(uVar9 + 8);
      uVar7 = (ulong)*(uint *)(uVar9 + 0x10);
    }
    else {
      __src = (void *)(uVar9 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar7) {
      pbVar4 = (byte *)FUN_006dcef8(param_3,__src,uVar7,param_2);
      return pbVar4;
    }
    memcpy(param_2,__src,uVar7 & 0xffffffff);
    param_2 = param_2 + (int)uVar7;
  }
  return param_2;
}


// ===== 00b50b88  FUN_00b50b88 =====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_00b50b88(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar8 = NEON_cnt((ulong)(uVar1 & 0x1800),1);
  uVar7 = NEON_addv(uVar8,1);
  uVar4 = (ulong)(uint)((int)CONCAT71((int7)((ulong)uVar8 >> 8),uVar7) << 1);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      uVar4 = uVar4 + uVar6 + ((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      uVar4 = uVar4 + uVar6 + ((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      uVar4 = uVar4 + uVar6 + ((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      uVar4 = uVar4 + uVar6 + ((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      uVar4 = uVar4 + uVar6 + ((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 5 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      uVar4 = uVar4 + uVar6 + ((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 6 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar6 + 0x17);
      uVar6 = *(ulong *)(uVar6 + 8);
      if ((bVar2 & 0x80) == 0) {
        uVar6 = (ulong)bVar2;
      }
      uVar4 = uVar4 + uVar6 + ((int)LZCOUNT((int)uVar6) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 7 & 1) != 0) {
      uVar4 = ((int)LZCOUNT(*(undefined8 *)(param_1 + 0x50)) * -9 + 0x2c0U >> 6) + uVar4;
    }
  }
  if ((uVar1 & 0x6700) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      uVar4 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x58)) * -9 + 0x2c0U >> 6) + uVar4;
    }
    if ((uVar1 >> 9 & 1) != 0) {
      uVar4 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x5c)) * -9 + 0x2c0U >> 6) + uVar4;
    }
    if ((uVar1 >> 10 & 1) != 0) {
      uVar4 = uVar4 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x60)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      uVar4 = uVar4 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x68)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      uVar4 = uVar4 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x6c)) * -9 + 0x1a0U >> 6);
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar3 = (int)uVar4;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar6 + 0x10);
    }
    uVar4 = lVar5 + uVar4;
    iVar3 = (int)uVar4;
  }
  if ((iVar3 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)uVar4;
  }
  return uVar4;
}


// ===== 00b50ea0  FUN_00b50ea0 =====

void FUN_00b50ea0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d44a08;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  return;
}


// ===== 00b50ebc  FUN_00b50ebc =====

void FUN_00b50ebc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dbb00();
  return;
}


// ===== 00b50ed0  FUN_00b50ed0 =====

void FUN_00b50ed0(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  operator_delete(param_1);
  return;
}


// ===== 00b50f08  FUN_00b50f08 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b50f08(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b50f90  FUN_00b50f90 =====

undefined ** FUN_00b50f90(void)

{
  return &PTR_PTR_00d45690;
}


// ===== 00b50fa0  FUN_00b50fa0 =====

void FUN_00b50fa0(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 0x1f) != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00b50fcc  FUN_00b50fcc =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b50fcc(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  void *__src;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  
  uVar6 = *(uint *)(param_1 + 0x10);
  if ((uVar6 & 1) != 0) {
    param_2 = (byte *)FUN_00b2c524(param_3,*(undefined8 *)(param_1 + 0x18),param_2);
  }
  if ((uVar6 >> 1 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar5 = *(uint *)(param_1 + 0x20);
    pbVar8 = param_2 + 1;
    *param_2 = 0x10;
    pbVar3 = pbVar8;
    if (0x7f < uVar5) {
      do {
        uVar1 = uVar5 >> 0xe;
        bVar2 = (byte)uVar5;
        uVar5 = uVar5 >> 7;
        pbVar8 = pbVar3 + 1;
        *pbVar3 = bVar2 | 0x80;
        pbVar3 = pbVar8;
      } while (uVar1 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar5;
  }
  if ((uVar6 >> 2 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar5 = *(uint *)(param_1 + 0x24);
    pbVar8 = param_2 + 1;
    *param_2 = 0x18;
    pbVar3 = pbVar8;
    if (0x7f < uVar5) {
      do {
        uVar1 = uVar5 >> 0xe;
        bVar2 = (byte)uVar5;
        uVar5 = uVar5 >> 7;
        pbVar8 = pbVar3 + 1;
        *pbVar3 = bVar2 | 0x80;
        pbVar3 = pbVar8;
      } while (uVar1 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar5;
  }
  if ((uVar6 >> 3 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar5 = *(uint *)(param_1 + 0x28);
    pbVar8 = param_2 + 1;
    *param_2 = 0x20;
    pbVar3 = pbVar8;
    if (0x7f < uVar5) {
      do {
        uVar1 = uVar5 >> 0xe;
        bVar2 = (byte)uVar5;
        uVar5 = uVar5 >> 7;
        pbVar8 = pbVar3 + 1;
        *pbVar3 = bVar2 | 0x80;
        pbVar3 = pbVar8;
      } while (uVar1 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar5;
  }
  if ((uVar6 >> 4 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x2c);
    pbVar8 = param_2 + 1;
    *param_2 = 0x28;
    pbVar3 = pbVar8;
    if (0x7f < uVar6) {
      do {
        uVar5 = uVar6 >> 0xe;
        bVar2 = (byte)uVar6;
        uVar6 = uVar6 >> 7;
        pbVar8 = pbVar3 + 1;
        *pbVar3 = bVar2 | 0x80;
        pbVar3 = pbVar8;
      } while (uVar5 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
    uVar7 = *(ulong *)(param_1 + 8);
  }
  if ((uVar7 & 1) != 0) {
    uVar7 = uVar7 & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar4 < 0) {
      __src = *(void **)(uVar7 + 8);
      uVar4 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      __src = (void *)(uVar7 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      pbVar3 = (byte *)FUN_006dcef8(param_3,__src,uVar4,param_2);
      return pbVar3;
    }
    memcpy(param_2,__src,uVar4 & 0xffffffff);
    param_2 = param_2 + (int)uVar4;
  }
  return param_2;
}


// ===== 00b511f4  FUN_00b511f4 =====

ulong FUN_00b511f4(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x1f) == 0) {
    uVar3 = 0;
    uVar4 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar3 = uVar3 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x20)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar3 = uVar3 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x24)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar3 = uVar3 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x28)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 4 & 1) == 0) {
      uVar4 = *(ulong *)(param_1 + 8);
    }
    else {
      uVar3 = uVar3 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x2c)) * -9 + 0x1a0U >> 6);
      uVar4 = *(ulong *)(param_1 + 8);
    }
  }
  if ((uVar4 & 1) == 0) {
    iVar2 = (int)uVar3;
  }
  else {
    lVar5 = (long)*(char *)((uVar4 & 0xfffffffffffffffe) + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)((uVar4 & 0xfffffffffffffffe) + 0x10);
    }
    uVar3 = lVar5 + uVar3;
    iVar2 = (int)uVar3;
  }
  if ((iVar2 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)uVar3;
  }
  return uVar3;
}


// ===== 00b5131c  FUN_00b5131c =====

void FUN_00b5131c(undefined8 *param_1,undefined8 param_2)

{
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_00d44988;
  param_1[1] = param_2;
  param_1[2] = 0;
  return;
}


// ===== 00b51338  FUN_00b51338 =====

void FUN_00b51338(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dbb00();
  return;
}


// ===== 00b5134c  FUN_00b5134c =====

void FUN_00b5134c(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  operator_delete(param_1);
  return;
}


// ===== 00b51384  FUN_00b51384 =====

void FUN_00b51384(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b513ec  FUN_00b513ec =====

undefined ** FUN_00b513ec(void)

{
  return &PTR_PTR_00d456f0;
}


// ===== 00b513fc  FUN_00b513fc =====

void FUN_00b513fc(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 7) != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00b51424  FUN_00b51424 =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b51424(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  void *__src;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  
  uVar6 = *(uint *)(param_1 + 0x10);
  if ((uVar6 & 1) != 0) {
    param_2 = (byte *)FUN_00b2c524(param_3,*(undefined8 *)(param_1 + 0x18),param_2);
  }
  if ((uVar6 >> 1 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar5 = *(uint *)(param_1 + 0x20);
    pbVar8 = param_2 + 1;
    *param_2 = 0x10;
    pbVar3 = pbVar8;
    if (0x7f < uVar5) {
      do {
        uVar1 = uVar5 >> 0xe;
        bVar2 = (byte)uVar5;
        uVar5 = uVar5 >> 7;
        pbVar8 = pbVar3 + 1;
        *pbVar3 = bVar2 | 0x80;
        pbVar3 = pbVar8;
      } while (uVar1 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar5;
  }
  if ((uVar6 >> 2 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x24);
    pbVar8 = param_2 + 1;
    *param_2 = 0x18;
    pbVar3 = pbVar8;
    if (0x7f < uVar6) {
      do {
        uVar5 = uVar6 >> 0xe;
        bVar2 = (byte)uVar6;
        uVar6 = uVar6 >> 7;
        pbVar8 = pbVar3 + 1;
        *pbVar3 = bVar2 | 0x80;
        pbVar3 = pbVar8;
      } while (uVar5 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
    uVar7 = *(ulong *)(param_1 + 8);
  }
  if ((uVar7 & 1) != 0) {
    uVar7 = uVar7 & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar4 < 0) {
      __src = *(void **)(uVar7 + 8);
      uVar4 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      __src = (void *)(uVar7 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      pbVar3 = (byte *)FUN_006dcef8(param_3,__src,uVar4,param_2);
      return pbVar3;
    }
    memcpy(param_2,__src,uVar4 & 0xffffffff);
    param_2 = param_2 + (int)uVar4;
  }
  return param_2;
}


// ===== 00b5159c  FUN_00b5159c =====

ulong FUN_00b5159c(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) == 0) {
    uVar3 = 0;
    uVar4 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar3 = uVar3 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x20)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 2 & 1) == 0) {
      uVar4 = *(ulong *)(param_1 + 8);
    }
    else {
      uVar3 = uVar3 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x24)) * -9 + 0x1a0U >> 6);
      uVar4 = *(ulong *)(param_1 + 8);
    }
  }
  if ((uVar4 & 1) == 0) {
    iVar2 = (int)uVar3;
  }
  else {
    lVar5 = (long)*(char *)((uVar4 & 0xfffffffffffffffe) + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)((uVar4 & 0xfffffffffffffffe) + 0x10);
    }
    uVar3 = lVar5 + uVar3;
    iVar2 = (int)uVar3;
  }
  if ((iVar2 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)uVar3;
  }
  return uVar3;
}


// ===== 00b5167c  FUN_00b5167c =====

void FUN_00b5167c(undefined8 *param_1,undefined8 param_2)

{
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_00d449c8;
  param_1[1] = param_2;
  param_1[2] = 0;
  return;
}


// ===== 00b51698  FUN_00b51698 =====

void FUN_00b51698(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dbb00();
  return;
}


// ===== 00b516ac  FUN_00b516ac =====

void FUN_00b516ac(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  operator_delete(param_1);
  return;
}


// ===== 00b516e4  FUN_00b516e4 =====

void FUN_00b516e4(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b5174c  FUN_00b5174c =====

undefined ** FUN_00b5174c(void)

{
  return &PTR_PTR_00d45758;
}


// ===== 00b5175c  FUN_00b5175c =====

void FUN_00b5175c(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 7) != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00b51784  FUN_00b51784 =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b51784(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  void *__src;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = (byte *)FUN_00b2c524(param_3,*(undefined8 *)(param_1 + 0x18),param_2);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x20);
    pbVar9 = param_2 + 1;
    *param_2 = 0x10;
    pbVar4 = pbVar9;
    if (0x7f < uVar6) {
      do {
        uVar2 = uVar6 >> 0xe;
        bVar3 = (byte)uVar6;
        uVar6 = uVar6 >> 7;
        pbVar9 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar9;
      } while (uVar2 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar6;
  }
  if ((uVar1 >> 2 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar1 = *(uint *)(param_1 + 0x24);
    uVar5 = (ulong)(int)uVar1;
    pbVar9 = param_2 + 1;
    *param_2 = 0x18;
    uVar7 = uVar5;
    pbVar4 = pbVar9;
    if (0x7f < uVar1) {
      do {
        uVar5 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        pbVar9 = pbVar4 + 1;
        *pbVar4 = (byte)uVar7 | 0x80;
        uVar7 = uVar5;
        pbVar4 = pbVar9;
      } while (uVar8 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar5;
    uVar7 = *(ulong *)(param_1 + 8);
  }
  if ((uVar7 & 1) != 0) {
    uVar7 = uVar7 & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar5 < 0) {
      __src = *(void **)(uVar7 + 8);
      uVar5 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      __src = (void *)(uVar7 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      pbVar4 = (byte *)FUN_006dcef8(param_3,__src,uVar5,param_2);
      return pbVar4;
    }
    memcpy(param_2,__src,uVar5 & 0xffffffff);
    param_2 = param_2 + (int)uVar5;
  }
  return param_2;
}


// ===== 00b51904  FUN_00b51904 =====

ulong FUN_00b51904(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) == 0) {
    uVar3 = 0;
    uVar4 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar3 = uVar3 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x20)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 2 & 1) == 0) {
      uVar4 = *(ulong *)(param_1 + 8);
    }
    else {
      uVar3 = uVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x280U >> 6) + 1;
      uVar4 = *(ulong *)(param_1 + 8);
    }
  }
  if ((uVar4 & 1) == 0) {
    iVar2 = (int)uVar3;
  }
  else {
    lVar5 = (long)*(char *)((uVar4 & 0xfffffffffffffffe) + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)((uVar4 & 0xfffffffffffffffe) + 0x10);
    }
    uVar3 = lVar5 + uVar3;
    iVar2 = (int)uVar3;
  }
  if ((iVar2 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)uVar3;
  }
  return uVar3;
}


// ===== 00b519e4  FUN_00b519e4 =====

void FUN_00b519e4(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d44b08;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


// ===== 00b51a00  FUN_00b51a00 =====

void FUN_00b51a00(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dbb00();
  return;
}


// ===== 00b51a14  FUN_00b51a14 =====

void FUN_00b51a14(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  operator_delete(param_1);
  return;
}


// ===== 00b51a4c  FUN_00b51a4c =====

void FUN_00b51a4c(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  return;
}


// ===== 00b51a9c  FUN_00b51a9c =====

undefined ** FUN_00b51a9c(void)

{
  return &PTR_PTR_00d457c0;
}


// ===== 00b51aac  FUN_00b51aac =====

void FUN_00b51aac(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 3) != 0) {
    *(undefined1 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00b51ad8  FUN_00b51ad8 =====

undefined1 * FUN_00b51ad8(long param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  void *__src;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = (undefined1 *)FUN_00b2c524(param_3,*(undefined8 *)(param_1 + 0x18),param_2);
  }
  if ((uVar1 >> 1 & 1) == 0) {
    uVar5 = *(ulong *)(param_1 + 8);
    puVar3 = param_2;
  }
  else {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_006dcdb8(param_3,param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x20);
    *param_2 = 0x10;
    puVar3 = param_2 + 2;
    param_2[1] = uVar2;
    uVar5 = *(ulong *)(param_1 + 8);
  }
  if ((uVar5 & 1) != 0) {
    uVar5 = uVar5 & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      __src = *(void **)(uVar5 + 8);
      uVar4 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      __src = (void *)(uVar5 + 8);
    }
    if (*param_3 - (long)puVar3 < (long)(int)uVar4) {
      puVar3 = (undefined1 *)FUN_006dcef8(param_3,__src,uVar4,puVar3);
      return puVar3;
    }
    memcpy(puVar3,__src,uVar4 & 0xffffffff);
    puVar3 = puVar3 + (int)uVar4;
  }
  return puVar3;
}


// ===== 00b51be0  FUN_00b51be0 =====

ulong FUN_00b51be0(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar2 = (ulong)*(uint *)(param_1 + 0x10) & 2;
  if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 8);
  }
  else {
    uVar2 = ((int)LZCOUNT(*(undefined8 *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar2;
    uVar3 = *(ulong *)(param_1 + 8);
  }
  if ((uVar3 & 1) == 0) {
    iVar1 = (int)uVar2;
  }
  else {
    lVar4 = (long)*(char *)((uVar3 & 0xfffffffffffffffe) + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)((uVar3 & 0xfffffffffffffffe) + 0x10);
    }
    uVar2 = lVar4 + uVar2;
    iVar1 = (int)uVar2;
  }
  if ((iVar1 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)uVar2;
  }
  return uVar2;
}


// ===== 00b51c64  FUN_00b51c64 =====

void FUN_00b51c64(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d446c8;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  return;
}


// ===== 00b51c88  FUN_00b51c88 =====

void FUN_00b51c88(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dbb00();
  return;
}


// ===== 00b51c9c  FUN_00b51c9c =====

void FUN_00b51c9c(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  operator_delete(param_1);
  return;
}


// ===== 00b51cd4  FUN_00b51cd4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b51cd4(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
  }
  if ((uVar1 & 0x300) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b51dac  FUN_00b51dac =====

undefined ** FUN_00b51dac(void)

{
  return &PTR_PTR_00d45818;
}


// ===== 00b51dbc  FUN_00b51dbc =====

void FUN_00b51dbc(long param_1)

{
  if ((*(uint *)(param_1 + 0x10) & 0xff) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if ((*(uint *)(param_1 + 0x10) & 0x300) != 0) {
    *(undefined8 *)(param_1 + 0x3c) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00b51dfc  FUN_00b51dfc =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b51dfc(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  void *__src;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = (byte *)FUN_00b2c524(param_3,*(undefined8 *)(param_1 + 0x18),param_2);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x20);
    uVar5 = (ulong)(int)uVar6;
    pbVar9 = param_2 + 1;
    *param_2 = 0x10;
    uVar7 = uVar5;
    pbVar4 = pbVar9;
    if (0x7f < uVar6) {
      do {
        uVar5 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        pbVar9 = pbVar4 + 1;
        *pbVar4 = (byte)uVar7 | 0x80;
        uVar7 = uVar5;
        pbVar4 = pbVar9;
      } while (uVar8 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar5;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x24);
    pbVar9 = param_2 + 1;
    *param_2 = 0x18;
    pbVar4 = pbVar9;
    if (0x7f < uVar6) {
      do {
        uVar2 = uVar6 >> 0xe;
        bVar3 = (byte)uVar6;
        uVar6 = uVar6 >> 7;
        pbVar9 = pbVar4 + 1;
        *pbVar4 = bVar3 | 0x80;
        pbVar4 = pbVar9;
      } while (uVar2 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar6;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x28);
    uVar5 = (ulong)(int)uVar6;
    pbVar9 = param_2 + 1;
    *param_2 = 0x20;
    uVar7 = uVar5;
    pbVar4 = pbVar9;
    if (0x7f < uVar6) {
      do {
        uVar5 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        pbVar9 = pbVar4 + 1;
        *pbVar4 = (byte)uVar7 | 0x80;
        uVar7 = uVar5;
        pbVar4 = pbVar9;
      } while (uVar8 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar5;
  }
  if ((uVar1 >> 4 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x2c);
    uVar5 = (ulong)(int)uVar6;
    pbVar9 = param_2 + 1;
    *param_2 = 0x28;
    uVar7 = uVar5;
    pbVar4 = pbVar9;
    if (0x7f < uVar6) {
      do {
        uVar5 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        pbVar9 = pbVar4 + 1;
        *pbVar4 = (byte)uVar7 | 0x80;
        uVar7 = uVar5;
        pbVar4 = pbVar9;
      } while (uVar8 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar5;
  }
  if ((uVar1 >> 5 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x30);
    uVar5 = (ulong)(int)uVar6;
    pbVar9 = param_2 + 1;
    *param_2 = 0x30;
    uVar7 = uVar5;
    pbVar4 = pbVar9;
    if (0x7f < uVar6) {
      do {
        uVar5 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        pbVar9 = pbVar4 + 1;
        *pbVar4 = (byte)uVar7 | 0x80;
        uVar7 = uVar5;
        pbVar4 = pbVar9;
      } while (uVar8 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar5;
  }
  if ((uVar1 >> 6 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x34);
    uVar5 = (ulong)(int)uVar6;
    pbVar9 = param_2 + 1;
    *param_2 = 0x38;
    uVar7 = uVar5;
    pbVar4 = pbVar9;
    if (0x7f < uVar6) {
      do {
        uVar5 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        pbVar9 = pbVar4 + 1;
        *pbVar4 = (byte)uVar7 | 0x80;
        uVar7 = uVar5;
        pbVar4 = pbVar9;
      } while (uVar8 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar5;
  }
  if ((uVar1 >> 7 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x38);
    uVar5 = (ulong)(int)uVar6;
    pbVar9 = param_2 + 1;
    *param_2 = 0x40;
    uVar7 = uVar5;
    pbVar4 = pbVar9;
    if (0x7f < uVar6) {
      do {
        uVar5 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        pbVar9 = pbVar4 + 1;
        *pbVar4 = (byte)uVar7 | 0x80;
        uVar7 = uVar5;
        pbVar4 = pbVar9;
      } while (uVar8 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar5;
  }
  if ((uVar1 >> 8 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x3c);
    uVar5 = (ulong)(int)uVar6;
    pbVar9 = param_2 + 1;
    *param_2 = 0x48;
    uVar7 = uVar5;
    pbVar4 = pbVar9;
    if (0x7f < uVar6) {
      do {
        uVar5 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        pbVar9 = pbVar4 + 1;
        *pbVar4 = (byte)uVar7 | 0x80;
        uVar7 = uVar5;
        pbVar4 = pbVar9;
      } while (uVar8 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar5;
  }
  if ((uVar1 >> 9 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar1 = *(uint *)(param_1 + 0x40);
    uVar5 = (ulong)(int)uVar1;
    pbVar9 = param_2 + 1;
    *param_2 = 0x50;
    uVar7 = uVar5;
    pbVar4 = pbVar9;
    if (0x7f < uVar1) {
      do {
        uVar5 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        pbVar9 = pbVar4 + 1;
        *pbVar4 = (byte)uVar7 | 0x80;
        uVar7 = uVar5;
        pbVar4 = pbVar9;
      } while (uVar8 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar5;
    uVar7 = *(ulong *)(param_1 + 8);
  }
  if ((uVar7 & 1) != 0) {
    uVar7 = uVar7 & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar5 < 0) {
      __src = *(void **)(uVar7 + 8);
      uVar5 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      __src = (void *)(uVar7 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      pbVar4 = (byte *)FUN_006dcef8(param_3,__src,uVar5,param_2);
      return pbVar4;
    }
    memcpy(param_2,__src,uVar5 & 0xffffffff);
    param_2 = param_2 + (int)uVar5;
  }
  return param_2;
}


// ===== 00b5221c  FUN_00b5221c =====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_00b5221c(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) == 0) {
    uVar3 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar3 = uVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x280U >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar3 = uVar3 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x24)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar3 = uVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x280U >> 6) + 1;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      uVar3 = uVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x2c)) * -9 + 0x280U >> 6) + 1;
    }
    if ((uVar1 >> 5 & 1) != 0) {
      uVar3 = uVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * -9 + 0x280U >> 6) + 1;
    }
    if ((uVar1 >> 6 & 1) != 0) {
      uVar3 = uVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x34)) * -9 + 0x280U >> 6) + 1;
    }
    if ((uVar1 >> 7 & 1) != 0) {
      uVar3 = uVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x38)) * -9 + 0x280U >> 6) + 1;
    }
  }
  if ((uVar1 & 0x300) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      uVar3 = uVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x3c)) * -9 + 0x280U >> 6) + 1;
    }
    if ((uVar1 >> 9 & 1) != 0) {
      uVar3 = uVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x40)) * -9 + 0x280U >> 6) + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar2 = (int)uVar3;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    uVar3 = lVar4 + uVar3;
    iVar2 = (int)uVar3;
  }
  if ((iVar2 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)uVar3;
  }
  return uVar3;
}


// ===== 00b523fc  FUN_00b523fc =====

void FUN_00b523fc(undefined8 *param_1,undefined8 param_2)

{
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_00d44688;
  param_1[1] = param_2;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}


// ===== 00b5241c  FUN_00b5241c =====

void FUN_00b5241c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dbb00();
  return;
}


// ===== 00b52430  FUN_00b52430 =====

void FUN_00b52430(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  operator_delete(param_1);
  return;
}


// ===== 00b52468  FUN_00b52468 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b52468(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b524e0  FUN_00b524e0 =====

undefined ** FUN_00b524e0(void)

{
  return &PTR_PTR_00d45880;
}


// ===== 00b524f0  FUN_00b524f0 =====

void FUN_00b524f0(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 0xf) != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00b5251c  FUN_00b5251c =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b5251c(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  void *__src;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  
  uVar6 = *(uint *)(param_1 + 0x10);
  if ((uVar6 & 1) != 0) {
    param_2 = (byte *)FUN_00b2c524(param_3,*(undefined8 *)(param_1 + 0x18),param_2);
  }
  if ((uVar6 >> 1 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar5 = *(uint *)(param_1 + 0x20);
    uVar4 = (ulong)(int)uVar5;
    pbVar9 = param_2 + 1;
    *param_2 = 0x10;
    uVar7 = uVar4;
    pbVar3 = pbVar9;
    if (0x7f < uVar5) {
      do {
        uVar4 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        pbVar9 = pbVar3 + 1;
        *pbVar3 = (byte)uVar7 | 0x80;
        uVar7 = uVar4;
        pbVar3 = pbVar9;
      } while (uVar8 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar4;
  }
  if ((uVar6 >> 2 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar5 = *(uint *)(param_1 + 0x24);
    pbVar9 = param_2 + 1;
    *param_2 = 0x18;
    pbVar3 = pbVar9;
    if (0x7f < uVar5) {
      do {
        uVar1 = uVar5 >> 0xe;
        bVar2 = (byte)uVar5;
        uVar5 = uVar5 >> 7;
        pbVar9 = pbVar3 + 1;
        *pbVar3 = bVar2 | 0x80;
        pbVar3 = pbVar9;
      } while (uVar1 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar5;
  }
  if ((uVar6 >> 3 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar6 = *(uint *)(param_1 + 0x28);
    pbVar9 = param_2 + 1;
    *param_2 = 0x20;
    pbVar3 = pbVar9;
    if (0x7f < uVar6) {
      do {
        uVar5 = uVar6 >> 0xe;
        bVar2 = (byte)uVar6;
        uVar6 = uVar6 >> 7;
        pbVar9 = pbVar3 + 1;
        *pbVar3 = bVar2 | 0x80;
        pbVar3 = pbVar9;
      } while (uVar5 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar6;
    uVar7 = *(ulong *)(param_1 + 8);
  }
  if ((uVar7 & 1) != 0) {
    uVar7 = uVar7 & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar4 < 0) {
      __src = *(void **)(uVar7 + 8);
      uVar4 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      __src = (void *)(uVar7 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      pbVar3 = (byte *)FUN_006dcef8(param_3,__src,uVar4,param_2);
      return pbVar3;
    }
    memcpy(param_2,__src,uVar4 & 0xffffffff);
    param_2 = param_2 + (int)uVar4;
  }
  return param_2;
}


// ===== 00b526f4  FUN_00b526f4 =====

ulong FUN_00b526f4(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) == 0) {
    uVar3 = 0;
    uVar4 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar3 = uVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x280U >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar3 = uVar3 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x24)) * -9 + 0x1a0U >> 6);
    }
    if ((uVar1 >> 3 & 1) == 0) {
      uVar4 = *(ulong *)(param_1 + 8);
    }
    else {
      uVar3 = uVar3 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x28)) * -9 + 0x1a0U >> 6);
      uVar4 = *(ulong *)(param_1 + 8);
    }
  }
  if ((uVar4 & 1) == 0) {
    iVar2 = (int)uVar3;
  }
  else {
    lVar5 = (long)*(char *)((uVar4 & 0xfffffffffffffffe) + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)((uVar4 & 0xfffffffffffffffe) + 0x10);
    }
    uVar3 = lVar5 + uVar3;
    iVar2 = (int)uVar3;
  }
  if ((iVar2 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)uVar3;
  }
  return uVar3;
}


// ===== 00b527f8  FUN_00b527f8 =====

void FUN_00b527f8(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d448c8;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


// ===== 00b52814  FUN_00b52814 =====

void FUN_00b52814(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dbb00();
  return;
}


// ===== 00b52828  FUN_00b52828 =====

void FUN_00b52828(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  operator_delete(param_1);
  return;
}


// ===== 00b52860  FUN_00b52860 =====

void FUN_00b52860(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  return;
}


// ===== 00b528b0  FUN_00b528b0 =====

undefined ** FUN_00b528b0(void)

{
  return &PTR_PTR_00d458e8;
}


// ===== 00b528c0  FUN_00b528c0 =====

void FUN_00b528c0(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 3) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00b528ec  FUN_00b528ec =====

byte * FUN_00b528ec(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  byte *pbVar2;
  void *__src;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = (byte *)FUN_00b2c524(param_3,*(undefined8 *)(param_1 + 0x18),param_2);
  }
  if ((uVar1 >> 1 & 1) == 0) {
    uVar4 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar1 = *(uint *)(param_1 + 0x20);
    uVar3 = (ulong)(int)uVar1;
    pbVar6 = param_2 + 1;
    *param_2 = 0x10;
    uVar4 = uVar3;
    pbVar2 = pbVar6;
    if (0x7f < uVar1) {
      do {
        uVar3 = uVar4 >> 7;
        uVar5 = uVar4 >> 0xe;
        pbVar6 = pbVar2 + 1;
        *pbVar2 = (byte)uVar4 | 0x80;
        uVar4 = uVar3;
        pbVar2 = pbVar6;
      } while (uVar5 != 0);
    }
    param_2 = pbVar6 + 1;
    *pbVar6 = (byte)uVar3;
    uVar4 = *(ulong *)(param_1 + 8);
  }
  if ((uVar4 & 1) != 0) {
    uVar4 = uVar4 & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar3 < 0) {
      __src = *(void **)(uVar4 + 8);
      uVar3 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      __src = (void *)(uVar4 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      pbVar2 = (byte *)FUN_006dcef8(param_3,__src,uVar3,param_2);
      return pbVar2;
    }
    memcpy(param_2,__src,uVar3 & 0xffffffff);
    param_2 = param_2 + (int)uVar3;
  }
  return param_2;
}


// ===== 00b52a14  FUN_00b52a14 =====

ulong FUN_00b52a14(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    uVar3 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      uVar3 = uVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x280U >> 6) + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar2 = (int)uVar3;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    uVar3 = lVar4 + uVar3;
    iVar2 = (int)uVar3;
  }
  if ((iVar2 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)uVar3;
  }
  return uVar3;
}


// ===== 00b52ac4  FUN_00b52ac4 =====

void FUN_00b52ac4(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d44888;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


// ===== 00b52ae0  FUN_00b52ae0 =====

void FUN_00b52ae0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dbb00();
  return;
}


// ===== 00b52af4  FUN_00b52af4 =====

void FUN_00b52af4(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  operator_delete(param_1);
  return;
}


// ===== 00b52b2c  FUN_00b52b2c =====

void FUN_00b52b2c(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  return;
}


// ===== 00b52b7c  FUN_00b52b7c =====

undefined ** FUN_00b52b7c(void)

{
  return &PTR_PTR_00d45950;
}


// ===== 00b52b8c  FUN_00b52b8c =====

void FUN_00b52b8c(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 3) != 0) {
    *(undefined1 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00b52bb8  FUN_00b52bb8 =====

undefined1 * FUN_00b52bb8(long param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  void *__src;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = (undefined1 *)FUN_00b2c524(param_3,*(undefined8 *)(param_1 + 0x18),param_2);
  }
  if ((uVar1 >> 1 & 1) == 0) {
    uVar5 = *(ulong *)(param_1 + 8);
    puVar3 = param_2;
  }
  else {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_006dcdb8(param_3,param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x20);
    *param_2 = 0x10;
    puVar3 = param_2 + 2;
    param_2[1] = uVar2;
    uVar5 = *(ulong *)(param_1 + 8);
  }
  if ((uVar5 & 1) != 0) {
    uVar5 = uVar5 & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      __src = *(void **)(uVar5 + 8);
      uVar4 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      __src = (void *)(uVar5 + 8);
    }
    if (*param_3 - (long)puVar3 < (long)(int)uVar4) {
      puVar3 = (undefined1 *)FUN_006dcef8(param_3,__src,uVar4,puVar3);
      return puVar3;
    }
    memcpy(puVar3,__src,uVar4 & 0xffffffff);
    puVar3 = puVar3 + (int)uVar4;
  }
  return puVar3;
}


// ===== 00b52cc0  FUN_00b52cc0 =====

ulong FUN_00b52cc0(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar2 = (ulong)*(uint *)(param_1 + 0x10) & 2;
  if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 8);
  }
  else {
    uVar2 = ((int)LZCOUNT(*(undefined8 *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar2;
    uVar3 = *(ulong *)(param_1 + 8);
  }
  if ((uVar3 & 1) == 0) {
    iVar1 = (int)uVar2;
  }
  else {
    lVar4 = (long)*(char *)((uVar3 & 0xfffffffffffffffe) + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)((uVar3 & 0xfffffffffffffffe) + 0x10);
    }
    uVar2 = lVar4 + uVar2;
    iVar1 = (int)uVar2;
  }
  if ((iVar1 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)uVar2;
  }
  return uVar2;
}


// ===== 00b52d44  FUN_00b52d44 =====

void FUN_00b52d44(undefined8 *param_1,undefined8 param_2)

{
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_00d44508;
  param_1[1] = param_2;
  param_1[2] = 0;
  return;
}


// ===== 00b52d60  FUN_00b52d60 =====

void FUN_00b52d60(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dbb00();
  return;
}


// ===== 00b52d74  FUN_00b52d74 =====

void FUN_00b52d74(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  operator_delete(param_1);
  return;
}


// ===== 00b52dac  FUN_00b52dac =====

void FUN_00b52dac(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_006dcb04(param_1 + 8,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
    return;
  }
  return;
}


// ===== 00b52e14  FUN_00b52e14 =====

undefined ** FUN_00b52e14(void)

{
  return &PTR_PTR_00d459b8;
}


// ===== 00b52e24  FUN_00b52e24 =====

void FUN_00b52e24(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 7) != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_006dcab0();
  return;
}


// ===== 00b52e4c  FUN_00b52e4c =====

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00b52e4c(long param_1,byte *param_2,long *param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  void *__src;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  
  uVar5 = *(uint *)(param_1 + 0x10);
  if ((uVar5 & 1) != 0) {
    param_2 = (byte *)FUN_00b2c524(param_3,*(undefined8 *)(param_1 + 0x18),param_2);
  }
  if ((uVar5 >> 1 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    bVar1 = *(byte *)(param_1 + 0x20);
    *param_2 = 0x10;
    param_2[1] = bVar1;
    param_2 = param_2 + 2;
  }
  if ((uVar5 >> 2 & 1) == 0) {
    uVar6 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_006dcdb8(param_3,param_2);
    }
    uVar5 = *(uint *)(param_1 + 0x24);
    pbVar7 = param_2 + 1;
    *param_2 = 0x18;
    pbVar3 = pbVar7;
    if (0x7f < uVar5) {
      do {
        uVar2 = uVar5 >> 0xe;
        bVar1 = (byte)uVar5;
        uVar5 = uVar5 >> 7;
        pbVar7 = pbVar3 + 1;
        *pbVar3 = bVar1 | 0x80;
        pbVar3 = pbVar7;
      } while (uVar2 != 0);
    }
    param_2 = pbVar7 + 1;
    *pbVar7 = (byte)uVar5;
    uVar6 = *(ulong *)(param_1 + 8);
  }
  if ((uVar6 & 1) != 0) {
    uVar6 = uVar6 & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar4 < 0) {
      __src = *(void **)(uVar6 + 8);
      uVar4 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      __src = (void *)(uVar6 + 8);
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      pbVar3 = (byte *)FUN_006dcef8(param_3,__src,uVar4,param_2);
      return pbVar3;
    }
    memcpy(param_2,__src,uVar4 & 0xffffffff);
    param_2 = param_2 + (int)uVar4;
  }
  return param_2;
}


// ===== 00b52fac  FUN_00b52fac =====

ulong FUN_00b52fac(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  Hint_Prefetch(param_1 + 0x1c0,0,0,0);
  Hint_Prefetch(param_1 + 0x200,0,0,0);
  Hint_Prefetch(param_1 + 0x240,0,0,0);
  Hint_Prefetch(param_1 + 0x280,0,0,0);
  Hint_Prefetch(param_1 + 0x2c0,0,0,0);
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar3 = (ulong)uVar1 & 2;
  if ((uVar1 & 5) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = ((int)LZCOUNT(*(undefined8 *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar3;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar3 = uVar3 + ((int)LZCOUNT(*(undefined4 *)(param_1 + 0x24)) * -9 + 0x1a0U >> 6);
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    iVar2 = (int)uVar3;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    uVar3 = lVar4 + uVar3;
    iVar2 = (int)uVar3;
  }
  if ((iVar2 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    *(int *)(param_1 + 0x14) = (int)uVar3;
  }
  return uVar3;
}


// ===== 00b53054  FUN_00b53054 =====

void FUN_00b53054(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00d44548;
  param_1[1] = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[2] = 0;
  param_1[3] = &DAT_00208540;
  param_1[4] = &DAT_00208540;
  param_1[5] = &DAT_00208540;
  return;
}


// ===== 00b53080  FUN_00b53080 =====

void FUN_00b53080(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208(param_1 + 0x18);
  FUN_00714208(param_1 + 0x20);
  FUN_00714208(param_1 + 0x28);
  return;
}


// ===== 00b530c4  FUN_00b530c4 =====

void FUN_00b530c4(void *param_1)

{
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    FUN_006dbb00();
  }
  FUN_00714208((long)param_1 + 0x18);
  FUN_00714208((long)param_1 + 0x20);
  FUN_00714208((long)param_1 + 0x28);
  operator_delete(param_1);
  return;
}


