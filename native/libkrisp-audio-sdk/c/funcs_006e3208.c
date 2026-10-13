// ===== 006e3208  FUN_006e3208 =====

void FUN_006e3208(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long local_60;
  long local_58;
  uint *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_60 = *param_2;
  iVar1 = *(int *)(param_1 + 8);
  local_58 = 0;
  local_50 = (uint *)0x0;
  if (iVar1 != 0) {
    lVar8 = *(long *)(param_1 + 0x10);
    uVar4 = FUN_00675710(&local_60,iVar1);
    FUN_006e3180(&local_60,uVar4,lVar8 + 8,iVar1,*local_50 - (int)local_58);
    iVar1 = (int)local_58 + iVar1;
    local_58 = CONCAT44(local_58._4_4_,iVar1);
    if ((int)*local_50 < iVar1) {
      *local_50 = iVar1;
    }
    uVar7 = (ulong)*(uint *)(param_1 + 8);
    if (0 < (int)*(uint *)(param_1 + 8)) {
      puVar6 = *(undefined8 **)(param_1 + 0x10);
      do {
        puVar6 = puVar6 + 1;
        (**(code **)(*(long *)*puVar6 + 0x20))();
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      *(undefined4 *)(param_1 + 8) = 0;
    }
  }
  iVar1 = (int)param_2[1];
  if (iVar1 != 0) {
    lVar8 = param_2[2];
    uVar4 = FUN_00675710(param_1,iVar1);
    FUN_006e3180(param_1,uVar4,lVar8 + 8,iVar1,**(int **)(param_1 + 0x10) - *(int *)(param_1 + 8));
    iVar2 = **(int **)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 8) + iVar1;
    *(int *)(param_1 + 8) = iVar1;
    if (iVar2 < iVar1) {
      **(int **)(param_1 + 0x10) = iVar1;
    }
  }
  lVar8 = *param_2;
  puVar5 = (uint *)param_2[2];
  lVar9 = param_2[1];
  *param_2 = local_60;
  param_2[1] = local_58;
  param_2[2] = (long)local_50;
  local_60 = lVar8;
  local_58 = lVar9;
  local_50 = puVar5;
  if ((puVar5 != (uint *)0x0) && (lVar8 == 0)) {
    uVar7 = (ulong)*puVar5;
    if (0 < (int)*puVar5) {
      do {
        puVar5 = puVar5 + 2;
        if (*(long **)puVar5 != (long *)0x0) {
          (**(code **)(**(long **)puVar5 + 8))();
        }
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    free(local_50);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 006e33cc  FUN_006e33cc =====

void FUN_006e33cc(undefined8 *param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *__ptr;
  ulong uVar7;
  byte *__ptr_00;
  byte *pbVar8;
  byte *pbVar9;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar7 = 0;
    do {
      lVar3 = param_1[4];
      __ptr = *(byte **)(lVar3 + uVar7 * 8);
      if (__ptr != (byte *)0x0) {
        if (__ptr == *(byte **)(lVar3 + (uVar7 ^ 1) * 8)) {
          uVar2 = uVar7 + 1;
          *(undefined8 *)(lVar3 + uVar2 * 8) = 0;
          *(undefined8 *)(param_1[4] + uVar7 * 8) = 0;
          pbVar8 = *(byte **)__ptr;
          do {
            pbVar4 = *(byte **)(pbVar8 + 8);
            __ptr_00 = *(byte **)(pbVar8 + 0x28);
            pbVar5 = pbVar8;
            pbVar6 = pbVar4;
            if (pbVar4 == (byte *)0x0) {
              do {
                pbVar9 = *(byte **)(pbVar5 + 0x10);
                bVar1 = *(byte **)pbVar9 != pbVar5;
                pbVar5 = pbVar9;
              } while (bVar1);
            }
            else {
              do {
                pbVar9 = pbVar6;
                pbVar6 = *(byte **)pbVar9;
              } while (*(byte **)pbVar9 != (byte *)0x0);
            }
            pbVar5 = pbVar8;
            if (pbVar4 == (byte *)0x0) {
              do {
                pbVar6 = *(byte **)(pbVar5 + 0x10);
                bVar1 = *(byte **)pbVar6 != pbVar5;
                pbVar5 = pbVar6;
              } while (bVar1);
            }
            else {
              do {
                pbVar6 = pbVar4;
                pbVar4 = *(byte **)pbVar6;
              } while (*(byte **)pbVar6 != (byte *)0x0);
            }
            if (*(byte **)__ptr == pbVar8) {
              *(byte **)__ptr = pbVar6;
            }
            *(long *)(__ptr + 0x18) = *(long *)(__ptr + 0x18) + -1;
            FUN_00328dd0(*(undefined8 *)(__ptr + 8),pbVar8);
            if (*(long *)(__ptr + 0x10) == 0) {
              free(pbVar8);
            }
            if ((__ptr_00 != (byte *)0x0) && (param_1[5] == 0)) {
              if ((*(int *)(__ptr_00 + 0x18) == 9) && ((*__ptr_00 & 1) != 0)) {
                free(*(void **)(__ptr_00 + 0x10));
              }
              free(__ptr_00);
            }
            pbVar8 = pbVar9;
          } while (pbVar9 != __ptr + 8);
          uVar7 = uVar2;
          if (param_1[5] == 0) {
            FUN_006e35ac(__ptr,*(undefined8 *)(__ptr + 8));
            free(__ptr);
          }
        }
        else {
          *(undefined8 *)(lVar3 + uVar7 * 8) = 0;
          if (param_1[5] == 0) {
            lVar3 = 0;
            while( true ) {
              pbVar8 = *(byte **)(__ptr + 0x30);
              if (lVar3 == 0) {
                if ((*(int *)(__ptr + 0x18) == 9) && ((*__ptr & 1) != 0)) {
                  free(*(void **)(__ptr + 0x10));
                }
                free(__ptr);
              }
              if (pbVar8 == (byte *)0x0) break;
              lVar3 = param_1[5];
              __ptr = pbVar8;
            }
          }
        }
      }
      uVar2 = param_1[1];
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar2);
  }
  *param_1 = 0;
  param_1[3] = uVar2;
  return;
}


// ===== 006e35ac  FUN_006e35ac =====

void FUN_006e35ac(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_006e35ac(param_1,*param_2);
    FUN_006e35ac(param_1,param_2[1]);
    if (*(long *)(param_1 + 0x10) == 0) {
      free(param_2);
      return;
    }
  }
  return;
}


// ===== 006e35fc  FUN_006e35fc =====

void FUN_006e35fc(long *param_1)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *local_50;
  undefined1 auStack_48 [16];
  ulong local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  lVar5 = *(long *)(lVar4 + 0x30);
  if (lVar5 == 0) {
    lVar5 = param_1[1];
    lVar6 = *(long *)(lVar5 + 0x20);
    uVar8 = param_1[2] & *(long *)(lVar5 + 8) - 1U;
    lVar10 = *(long *)(lVar6 + uVar8 * 8);
    param_1[2] = uVar8;
    if (lVar10 == lVar4) {
LAB_006e36c8:
      uVar11 = *(ulong *)(lVar5 + 8);
      uVar8 = uVar8 + 1;
      *param_1 = 0;
      uVar7 = uVar8;
      if (uVar8 < uVar11) {
        do {
          plVar9 = *(long **)(lVar6 + uVar8 * 8);
          if (plVar9 != (long *)0x0) goto LAB_006e378c;
          uVar8 = uVar8 + 1;
          uVar7 = uVar11;
        } while (uVar11 != uVar8);
      }
    }
    else {
      if ((lVar10 != 0) && (lVar10 != *(long *)(lVar6 + (uVar8 ^ 1) * 8))) {
        do {
          lVar10 = *(long *)(lVar10 + 0x30);
          if (lVar10 == lVar4) break;
        } while (lVar10 != 0);
        if (lVar10 != 0) goto LAB_006e36c8;
      }
      FUN_006e37c4(auStack_48,lVar5,lVar4,&local_50);
      lVar5 = param_1[1];
      lVar6 = *(long *)(lVar5 + 0x20);
      param_1[2] = local_38;
      lVar4 = *(long *)(lVar6 + local_38 * 8);
      uVar8 = local_38;
      if ((lVar4 == 0) || (lVar4 != *(long *)(lVar6 + (local_38 ^ 1) * 8))) goto LAB_006e36c8;
      plVar9 = local_50;
      plVar2 = (long *)local_50[1];
      if ((long *)local_50[1] == (long *)0x0) {
        do {
          local_50 = (long *)plVar9[2];
          bVar3 = (long *)*local_50 != plVar9;
          plVar9 = local_50;
        } while (bVar3);
      }
      else {
        do {
          local_50 = plVar2;
          plVar2 = (long *)*local_50;
        } while ((long *)*local_50 != (long *)0x0);
      }
      if (local_50 != (long *)(lVar4 + 8)) {
        lVar5 = local_50[5];
        goto LAB_006e3624;
      }
      uVar11 = *(ulong *)(lVar5 + 8);
      uVar8 = local_38 + 2;
      *param_1 = 0;
      uVar7 = uVar8;
      if (uVar8 < uVar11) {
        do {
          plVar9 = *(long **)(lVar6 + uVar8 * 8);
          if (plVar9 != (long *)0x0) goto LAB_006e378c;
          uVar8 = uVar8 + 1;
          uVar7 = uVar11;
        } while (uVar11 != uVar8);
      }
    }
    param_1[2] = uVar7;
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
    goto LAB_006e37b4;
  }
  goto LAB_006e3624;
LAB_006e378c:
  param_1[2] = uVar8;
  if (plVar9 != *(long **)(lVar6 + (uVar8 ^ 1) * 8)) {
    *param_1 = (long)plVar9;
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
    goto LAB_006e37b4;
  }
  lVar5 = *(long *)(*plVar9 + 0x28);
LAB_006e3624:
  *param_1 = lVar5;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_006e37b4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e37c4  FUN_006e37c4 =====

void FUN_006e37c4(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  uVar1 = FUN_006e3900();
  uVar1 = *(long *)(param_2 + 8) - 1U &
          (*(ulong *)(param_2 + 0x10) ^ uVar1) * -0x61c8864680b583eb >> 0x20;
  lVar3 = *(long *)(param_2 + 0x20);
  lVar4 = *(long *)(lVar3 + uVar1 * 8);
  if (lVar4 != 0) {
    if (lVar4 == *(long *)(lVar3 + (uVar1 ^ 1) * 8)) {
      uVar1 = uVar1 & 0xfffffffe;
      plVar5 = (long *)(*(long *)(lVar3 + uVar1 * 8) + 8);
      plVar7 = (long *)*plVar5;
      plVar6 = plVar5;
      if (plVar7 != (long *)0x0) {
        do {
          uVar2 = FUN_006e3da8(plVar7[4],param_3);
          lVar3 = 8;
          if ((uVar2 & 1) == 0) {
            lVar3 = 0;
            plVar6 = plVar7;
          }
          plVar7 = *(long **)((long)plVar7 + lVar3);
        } while (plVar7 != (long *)0x0);
        if (plVar6 != plVar5) {
          uVar2 = FUN_006e3da8(param_3,plVar6[4]);
          plVar7 = plVar5;
          if ((uVar2 & 1) == 0) {
            plVar7 = plVar6;
          }
          if (plVar5 != plVar7) {
            if (param_4 != (long *)0x0) {
              *param_4 = (long)plVar7;
            }
            *param_1 = plVar7[5];
LAB_006e38dc:
            param_1[1] = param_2;
            param_1[2] = uVar1;
            goto LAB_006e38e0;
          }
        }
      }
    }
    else {
      do {
        uVar2 = FUN_006e3b38(lVar4,param_3);
        if ((uVar2 & 1) != 0) {
          *param_1 = lVar4;
          goto LAB_006e38dc;
        }
        lVar4 = *(long *)(lVar4 + 0x30);
      } while (lVar4 != 0);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_006e38e0:
  param_1[3] = uVar1;
  return;
}


// ===== 006e3900  FUN_006e3900 =====

void FUN_006e3900(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  undefined1 uStack_59;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_006e2e60(param_2);
  uVar3 = (uint)uVar5;
  if ((int)uVar3 < 4) {
    if (uVar3 == 1) {
      FUN_006e1e5c(param_2);
      iVar4 = FUN_006e1e5c(param_2);
      uVar5 = (ulong)iVar4;
LAB_006e3aa0:
      if (*(long *)(lVar2 + 0x28) == local_28) {
        return;
      }
      goto LAB_006e3b00;
    }
    if (uVar3 == 2) {
      if (*(long *)(lVar2 + 0x28) == local_28) {
        FUN_006e1d38(param_2);
        return;
      }
      goto LAB_006e3b00;
    }
    if (uVar3 == 3) {
      FUN_006e20a4(param_2);
      uVar5 = FUN_006e20a4(param_2);
      uVar5 = uVar5 & 0xffffffff;
      if (*(long *)(lVar2 + 0x28) == local_28) {
        return;
      }
      goto LAB_006e3b00;
    }
  }
  else {
    if (uVar3 < 0xb) {
      if ((1 << (ulong)(uVar3 & 0x1f) & 0x560U) != 0) {
        FUN_00675e64(auStack_58,3,
                     "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
                     ,0x11f);
                    /* try { // try from 006e3964 to 006e3977 has its CatchHandler @ 006e3b0c */
        uVar6 = FUN_00675a58(auStack_58,"Unsupported");
                    /* try { // try from 006e3978 to 006e397f has its CatchHandler @ 006e3b08 */
        FUN_00675ac0(&uStack_59,uVar6);
        FUN_00675e7c(auStack_58);
        goto LAB_006e3988;
      }
      if (uVar3 == 7) {
        uVar5 = FUN_006e21c8(param_2);
        uVar5 = uVar5 & 1;
        if (*(long *)(lVar2 + 0x28) == local_28) {
          return;
        }
        goto LAB_006e3b00;
      }
      if (uVar3 == 9) {
        pbVar7 = (byte *)FUN_006e1c14(param_2);
        uVar5 = *(ulong *)(pbVar7 + 8);
        pbVar1 = *(byte **)(pbVar7 + 0x10);
        if ((*pbVar7 & 1) == 0) {
          pbVar1 = pbVar7 + 1;
          uVar5 = (ulong)(*pbVar7 >> 1);
        }
                    /* try { // try from 006e3a4c to 006e3a53 has its CatchHandler @ 006e3b04 */
        uVar5 = FUN_0034bfb4(auStack_58,pbVar1,uVar5);
        goto LAB_006e3aa0;
      }
    }
    if (uVar3 == 4) {
      uVar5 = FUN_006e1f80(param_2);
      if (*(long *)(lVar2 + 0x28) == local_28) {
        FUN_006e1f80(param_2);
        return;
      }
      goto LAB_006e3b00;
    }
  }
LAB_006e3988:
  FUN_00675e64(auStack_58,3,
               "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
               ,0x137);
                    /* try { // try from 006e39a0 to 006e39b3 has its CatchHandler @ 006e3b14 */
  uVar6 = FUN_00675a58(auStack_58,"Can\'t get here.");
                    /* try { // try from 006e39b4 to 006e39bb has its CatchHandler @ 006e3b10 */
  FUN_00675ac0(&uStack_59,uVar6);
  FUN_00675e7c(auStack_58);
  uVar5 = 0;
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
LAB_006e3b00:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 006e3b38  FUN_006e3b38 =====

void FUN_006e3b38(uint *param_1,uint *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  byte *pbVar10;
  uint uVar11;
  ulong uVar12;
  byte *__s2;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  if (param_1[6] != param_2[6]) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
                 ,0xbc);
                    /* try { // try from 006e3b88 to 006e3b9b has its CatchHandler @ 006e3d80 */
    uVar9 = FUN_00675a58(auStack_68,"Unsupported: type mismatch");
                    /* try { // try from 006e3b9c to 006e3ba3 has its CatchHandler @ 006e3d7c */
    FUN_00675ac0(&uStack_69,uVar9);
    FUN_00675e7c(auStack_68);
  }
  uVar7 = FUN_006e2e60(param_1);
  if ((int)uVar7 < 4) {
    if (uVar7 != 1) {
      if (uVar7 == 2) goto LAB_006e3ce4;
      if (uVar7 != 3) goto LAB_006e3c14;
    }
    uVar7 = *param_1;
    uVar11 = *param_2;
LAB_006e3cfc:
    bVar6 = uVar7 == uVar11;
  }
  else {
    if (uVar7 < 0xb) {
      if ((1 << (ulong)(uVar7 & 0x1f) & 0x560U) == 0) {
        if (uVar7 != 7) {
          if (uVar7 == 9) {
            bVar3 = (byte)*param_1;
            bVar4 = (byte)*param_2;
            uVar12 = (ulong)(bVar3 >> 1);
            sVar1 = uVar12;
            if ((bVar3 & 1) != 0) {
              sVar1 = *(size_t *)(param_1 + 2);
            }
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = *(size_t *)(param_2 + 2);
            }
            if (sVar1 == sVar2) {
              __s2 = *(byte **)(param_2 + 4);
              if ((bVar4 & 1) == 0) {
                __s2 = (byte *)((long)param_2 + 1);
              }
              if ((bVar3 & 1) == 0) {
                if (bVar3 < 2) {
                  bVar6 = true;
                }
                else {
                  pbVar10 = (byte *)((long)param_1 + 1);
                  do {
                    uVar12 = uVar12 - 1;
                    bVar6 = *pbVar10 == *__s2;
                    if (!bVar6) break;
                    __s2 = __s2 + 1;
                    pbVar10 = pbVar10 + 1;
                  } while (uVar12 != 0);
                }
              }
              else {
                iVar8 = memcmp(*(void **)(param_1 + 4),__s2,*(size_t *)(param_1 + 2));
                bVar6 = iVar8 == 0;
              }
            }
            else {
              bVar6 = false;
            }
            goto LAB_006e3d04;
          }
          goto LAB_006e3cdc;
        }
        uVar7 = (uint)(byte)*param_1;
        uVar11 = (uint)(byte)*param_2;
        goto LAB_006e3cfc;
      }
      FUN_00675e64(auStack_68,3,
                   "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
                   ,0xc3);
                    /* try { // try from 006e3bf0 to 006e3c03 has its CatchHandler @ 006e3d70 */
      uVar9 = FUN_00675a58(auStack_68,"Unsupported");
                    /* try { // try from 006e3c04 to 006e3c0b has its CatchHandler @ 006e3d6c */
      FUN_00675ac0(&uStack_69,uVar9);
      FUN_00675e7c(auStack_68);
    }
    else {
LAB_006e3cdc:
      if (uVar7 == 4) {
LAB_006e3ce4:
        bVar6 = *(long *)param_1 == *(long *)param_2;
        goto LAB_006e3d04;
      }
    }
LAB_006e3c14:
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
                 ,0xd2);
                    /* try { // try from 006e3c2c to 006e3c3f has its CatchHandler @ 006e3d78 */
    uVar9 = FUN_00675a58(auStack_68,"Can\'t get here.");
                    /* try { // try from 006e3c40 to 006e3c47 has its CatchHandler @ 006e3d74 */
    FUN_00675ac0(&uStack_69,uVar9);
    FUN_00675e7c(auStack_68);
    bVar6 = false;
  }
LAB_006e3d04:
  if (*(long *)(lVar5 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar6);
  }
  return;
}


// ===== 006e3da8  FUN_006e3da8 =====

void FUN_006e3da8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte *__s2;
  byte *__s1;
  long lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((uint)param_1[3] != (uint)param_2[3]) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
                 ,0xa0);
                    /* try { // try from 006e3df8 to 006e3e0b has its CatchHandler @ 006e3f9c */
    uVar7 = FUN_00675a58(auStack_68,"Unsupported: type mismatch");
                    /* try { // try from 006e3e0c to 006e3e13 has its CatchHandler @ 006e3f98 */
    FUN_00675ac0(&uStack_69,uVar7);
    FUN_00675e7c(auStack_68);
  }
  uVar5 = FUN_006e2e60(param_1);
  bVar4 = false;
  if ((int)uVar5 < 4) {
    if (uVar5 == 1) {
      bVar4 = (int)(uint)*param_1 < (int)(uint)*param_2;
      goto LAB_006e3f6c;
    }
    if (uVar5 == 2) {
      bVar4 = (long)*param_1 < (long)*param_2;
      goto LAB_006e3f6c;
    }
    if (uVar5 != 3) goto LAB_006e3f6c;
    uVar5 = (uint)*param_1;
    uVar8 = (uint)*param_2;
LAB_006e3f64:
    bVar4 = uVar8 <= uVar5;
  }
  else {
    if (uVar5 < 0xb) {
      if ((1 << (ulong)(uVar5 & 0x1f) & 0x560U) != 0) {
        FUN_00675e64(auStack_68,3,
                     "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/map_field.h"
                     ,0xa7);
                    /* try { // try from 006e3e68 to 006e3e7b has its CatchHandler @ 006e3f94 */
        uVar7 = FUN_00675a58(auStack_68,"Unsupported");
                    /* try { // try from 006e3e7c to 006e3e83 has its CatchHandler @ 006e3f90 */
        FUN_00675ac0(&uStack_69,uVar7);
        FUN_00675e7c(auStack_68);
        bVar4 = false;
        goto LAB_006e3f6c;
      }
      if (uVar5 == 7) {
        uVar5 = (uint)(byte)*param_1;
        uVar8 = (uint)(byte)*param_2;
        goto LAB_006e3f64;
      }
      if (uVar5 == 9) {
        __s2 = (byte *)param_2[2];
        bVar4 = ((byte)*param_2 & 1) == 0;
        if (bVar4) {
          __s2 = (byte *)((long)param_2 + 1);
        }
        uVar1 = (ulong)(byte)((byte)*param_2 >> 1);
        if (!bVar4) {
          uVar1 = param_2[1];
        }
        uVar2 = param_1[1];
        __s1 = (byte *)param_1[2];
        if (((byte)*param_1 & 1) == 0) {
          __s1 = (byte *)((long)param_1 + 1);
          uVar2 = (ulong)(byte)((byte)*param_1 >> 1);
        }
        __n = uVar1;
        if (uVar2 <= uVar1) {
          __n = uVar2;
        }
        iVar6 = memcmp(__s1,__s2,__n);
        bVar4 = uVar2 < uVar1;
        if (iVar6 != 0) {
          bVar4 = iVar6 < 0;
        }
        goto LAB_006e3f6c;
      }
    }
    if (uVar5 != 4) goto LAB_006e3f6c;
    bVar4 = *param_2 <= *param_1;
  }
  bVar4 = !bVar4;
LAB_006e3f6c:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar4);
}


// ===== 006e3fc4  FUN_006e3fc4 =====

void FUN_006e3fc4(long *param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 local_a0 [24];
  undefined8 uStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  undefined8 local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_006e37c4(&local_80,param_2,param_3,0);
  if (local_80 != 0) {
    *param_1 = local_80;
    param_1[1] = lStack_78;
    param_1[2] = local_70;
    *(undefined1 *)(param_1 + 3) = 0;
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
    goto LAB_006e4104;
  }
  uVar1 = param_2[1];
  uVar5 = *param_2 + 1;
  uVar4 = uVar1 * 3 >> 2 & 0xfffffffffffffff;
  if (uVar5 < uVar4) {
    if ((8 < uVar1) && (uVar5 <= uVar1 * 0xc >> 6)) {
      uVar6 = 0;
      do {
        uVar6 = uVar6 + 1;
      } while ((uVar5 * 5 >> 2) + 1 << (uVar6 & 0x3f) < uVar4);
      uVar5 = uVar1 >> (uVar6 & 0x3f);
      if (uVar5 < 9) {
        uVar5 = 8;
      }
      if (uVar5 != uVar1) goto LAB_006e4178;
    }
  }
  else if (uVar1 < 0x800000000000001) {
    uVar5 = uVar1 << 1;
LAB_006e4178:
    FUN_006e42fc(param_2,uVar5);
    FUN_006e37c4(local_a0,param_2,param_3,0);
    local_68 = uStack_88;
  }
  if (param_2[5] == 0) {
    lVar3 = FUN_00759c3c(0x38);
    lVar7 = param_2[5];
    *(undefined4 *)(lVar3 + 0x18) = 0;
    FUN_006df758(lVar3,param_3);
  }
  else {
    lVar3 = thunk_FUN_006634e4(param_2[5],0x38,PTR_PTR_007a36d0);
    lVar7 = param_2[5];
    *(undefined4 *)(lVar3 + 0x18) = 0;
    FUN_006df758(lVar3,param_3);
  }
  if (lVar7 != 0) {
    FUN_006630c8(lVar7,lVar3,PTR_FUN_007a36d8);
  }
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined4 *)(lVar3 + 0x28) = 0;
  FUN_006e41a8(param_1,param_2,local_68,lVar3);
  *param_2 = *param_2 + 1;
  *(undefined1 *)(param_1 + 3) = 1;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_006e4104:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e41a8  FUN_006e41a8 =====

void FUN_006e41a8(long *param_1,long param_2,ulong param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long local_48;
  long lStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(param_2 + 0x20);
  lVar3 = *(long *)(lVar2 + param_3 * 8);
  if (lVar3 == 0) {
    *(undefined8 *)(param_4 + 0x30) = 0;
    *(long *)(lVar2 + param_3 * 8) = param_4;
  }
  else {
    if (lVar3 == *(long *)(lVar2 + (param_3 ^ 1) * 8)) {
      *(undefined8 *)(param_4 + 0x30) = 0;
      local_48 = param_4;
      lStack_40 = param_4;
      lVar2 = FUN_006e479c(*(undefined8 *)(lVar2 + param_3 * 8),&local_48,&local_48);
      *param_1 = *(long *)(lVar2 + 0x28);
      param_1[1] = param_2;
      param_1[2] = param_3 & 0xfffffffffffffffe;
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
      goto LAB_006e42b0;
    }
    uVar4 = 0;
    lVar5 = lVar3;
    do {
      lVar5 = *(long *)(lVar5 + 0x30);
      uVar4 = uVar4 + 1;
    } while (lVar5 != 0);
    if (uVar4 < 8) {
      *(long *)(param_4 + 0x30) = lVar3;
      *(long *)(lVar2 + param_3 * 8) = param_4;
      *param_1 = param_4;
      param_1[1] = param_2;
      param_1[2] = param_3;
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
      goto LAB_006e42b0;
    }
    FUN_006e4660();
    *(undefined8 *)(param_4 + 0x30) = 0;
    local_48 = param_4;
    lStack_40 = param_4;
    lVar2 = FUN_006e479c(*(undefined8 *)(*(long *)(param_2 + 0x20) + param_3 * 8),&local_48,
                         &local_48);
    param_4 = *(long *)(lVar2 + 0x28);
    param_3 = param_3 & 0xfffffffffffffffe;
  }
  uVar4 = *(ulong *)(param_2 + 0x18);
  *param_1 = param_4;
  param_1[1] = param_2;
  param_1[2] = param_3;
  if (uVar4 <= param_3) {
    param_3 = uVar4;
  }
  *(ulong *)(param_2 + 0x18) = param_3;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_006e42b0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e42fc  FUN_006e42fc =====

void FUN_006e42fc(ulong param_1,long param_2)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  void *__s;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  size_t __n;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long local_78;
  long lStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar10 = *(ulong *)(param_1 + 8);
  if (uVar10 == 1) {
    *(undefined8 *)(param_1 + 0x18) = 8;
    *(undefined8 *)(param_1 + 8) = 8;
    if (*(long *)(param_1 + 0x28) == 0) {
      puVar2 = (undefined8 *)FUN_00759c3c(0x40);
    }
    else {
      puVar2 = (undefined8 *)thunk_FUN_006634e4(*(long *)(param_1 + 0x28),0x40,PTR_PTR_007a36d0);
    }
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    *(undefined8 **)(param_1 + 0x20) = puVar2;
    lVar9 = cntvct_el0;
    *(ulong *)(param_1 + 0x10) = lVar9 + (param_1 >> 4);
  }
  else {
    __ptr = *(void **)(param_1 + 0x20);
    __n = param_2 << 3;
    *(long *)(param_1 + 8) = param_2;
    if (*(long *)(param_1 + 0x28) == 0) {
      __s = (void *)FUN_00759c3c(__n);
    }
    else {
      __s = (void *)thunk_FUN_006634e4(*(long *)(param_1 + 0x28),__n,PTR_PTR_007a36d0);
    }
    memset(__s,0,__n);
    uVar8 = *(ulong *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 8);
    *(void **)(param_1 + 0x20) = __s;
    for (; uVar8 < uVar10; uVar8 = uVar8 + 1) {
      lVar9 = *(long *)((long)__ptr + uVar8 * 8);
      if (lVar9 != 0) {
        if (lVar9 == *(long *)((long)__ptr + (uVar8 ^ 1) * 8)) {
          FUN_006e4544(param_1,__ptr,uVar8);
          uVar8 = uVar8 + 1;
        }
        else {
          do {
            lVar11 = *(long *)(lVar9 + 0x30);
            uVar3 = FUN_006e3900(param_1,lVar9);
            uVar3 = *(long *)(param_1 + 8) - 1U &
                    (*(ulong *)(param_1 + 0x10) ^ uVar3) * -0x61c8864680b583eb >> 0x20;
            lVar4 = *(long *)(param_1 + 0x20);
            lVar5 = *(long *)(lVar4 + uVar3 * 8);
            if (lVar5 == 0) {
              *(undefined8 *)(lVar9 + 0x30) = 0;
              *(long *)(lVar4 + uVar3 * 8) = lVar9;
LAB_006e44bc:
              if (*(ulong *)(param_1 + 0x18) <= uVar3) {
                uVar3 = *(ulong *)(param_1 + 0x18);
              }
              *(ulong *)(param_1 + 0x18) = uVar3;
            }
            else if (lVar5 == *(long *)(lVar4 + (uVar3 ^ 1) * 8)) {
              *(undefined8 *)(lVar9 + 0x30) = 0;
              local_78 = lVar9;
              lStack_70 = lVar9;
              FUN_006e479c(*(undefined8 *)(lVar4 + uVar3 * 8),&local_78,&local_78);
            }
            else {
              uVar6 = 0;
              lVar7 = lVar5;
              do {
                lVar7 = *(long *)(lVar7 + 0x30);
                uVar6 = uVar6 + 1;
              } while (lVar7 != 0);
              if (7 < uVar6) {
                FUN_006e4660(param_1,uVar3);
                *(undefined8 *)(lVar9 + 0x30) = 0;
                local_78 = lVar9;
                lStack_70 = lVar9;
                FUN_006e479c(*(undefined8 *)(*(long *)(param_1 + 0x20) + uVar3 * 8),&local_78,
                             &local_78);
                uVar3 = uVar3 & 0xfffffffe;
                goto LAB_006e44bc;
              }
              *(long *)(lVar9 + 0x30) = lVar5;
              *(long *)(lVar4 + uVar3 * 8) = lVar9;
            }
            lVar9 = lVar11;
          } while (lVar11 != 0);
        }
      }
    }
    if (*(long *)(param_1 + 0x28) == 0) {
      free(__ptr);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e4544  FUN_006e4544 =====

void FUN_006e4544(long param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *__ptr;
  long *plVar5;
  long *plVar6;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __ptr = *(undefined8 **)(param_2 + param_3 * 8);
  plVar5 = (long *)*__ptr;
  do {
    uVar4 = FUN_006e3900(param_1,plVar5[4]);
    FUN_006e41a8(auStack_60,param_1,
                 *(long *)(param_1 + 8) - 1U &
                 (*(ulong *)(param_1 + 0x10) ^ uVar4) * -0x61c8864680b583eb >> 0x20,plVar5[5]);
    plVar2 = (long *)plVar5[1];
    plVar6 = plVar5;
    if ((long *)plVar5[1] == (long *)0x0) {
      do {
        plVar5 = (long *)plVar6[2];
        bVar3 = (long *)*plVar5 != plVar6;
        plVar6 = plVar5;
      } while (bVar3);
    }
    else {
      do {
        plVar5 = plVar2;
        plVar2 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  } while (plVar5 != __ptr + 1);
  if (*(long *)(param_1 + 0x28) == 0) {
    FUN_006e35ac(__ptr,__ptr[1]);
    free(__ptr);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 006e4640  FUN_006e4640 =====

void FUN_006e4640(byte *param_1)

{
  if ((*(int *)(param_1 + 0x18) == 9) && ((*param_1 & 1) != 0)) {
    free(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 006e4660  FUN_006e4660 =====

void FUN_006e4660(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  long local_58;
  long lStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 == 0) {
    puVar3 = (undefined8 *)FUN_00759c3c(0x20);
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[1] = 0;
    *puVar3 = puVar3 + 1;
    lVar4 = *(long *)(param_1 + 0x20);
    lVar5 = *(long *)(lVar4 + param_2 * 8);
  }
  else {
    auVar6 = FUN_00663600(lVar4,0x20,PTR_PTR_007a36e0);
    puVar2 = PTR_FUN_007a36e8;
    puVar3 = auVar6._0_8_;
    *auVar6._8_8_ = puVar3;
    auVar6._8_8_[1] = puVar2;
    puVar3[1] = 0;
    puVar3[2] = lVar4;
    puVar3[3] = 0;
    *puVar3 = puVar3 + 1;
    lVar4 = *(long *)(param_1 + 0x20);
    lVar5 = *(long *)(lVar4 + param_2 * 8);
  }
  if (lVar5 != 0) {
    do {
      local_58 = lVar5;
      lStack_50 = lVar5;
      FUN_006e479c(puVar3,&local_58,&local_58);
      lVar4 = *(long *)(lVar5 + 0x30);
      *(undefined8 *)(lVar5 + 0x30) = 0;
      lVar5 = lVar4;
    } while (lVar4 != 0);
    lVar4 = *(long *)(param_1 + 0x20);
  }
  lVar5 = *(long *)(lVar4 + (param_2 ^ 1) * 8);
  if (lVar5 != 0) {
    do {
      local_58 = lVar5;
      lStack_50 = lVar5;
      FUN_006e479c(puVar3,&local_58,&local_58);
      lVar4 = *(long *)(lVar5 + 0x30);
      *(undefined8 *)(lVar5 + 0x30) = 0;
      lVar5 = lVar4;
    } while (lVar4 != 0);
    lVar4 = *(long *)(param_1 + 0x20);
  }
  *(undefined8 **)(lVar4 + (param_2 ^ 1) * 8) = puVar3;
  *(undefined8 **)(*(long *)(param_1 + 0x20) + param_2 * 8) = puVar3;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e4794  FUN_006e4794 =====

void FUN_006e4794(long param_1)

{
  FUN_006e35ac(param_1,*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 006e479c  FUN_006e479c =====

undefined1  [16] FUN_006e479c(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  puVar5 = (ulong *)(param_1 + 1);
  puVar6 = puVar5;
  puVar1 = (ulong *)*puVar5;
joined_r0x006e47c0:
  do {
    if (puVar1 == (ulong *)0x0) {
LAB_006e4810:
      if (param_1[2] == 0) {
        puVar3 = (undefined8 *)FUN_00759c3c(0x30);
      }
      else {
        puVar3 = (undefined8 *)thunk_FUN_006634e4(param_1[2],0x30,PTR_PTR_007a36d0);
      }
      uVar8 = param_3[1];
      uVar7 = *param_3;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = puVar6;
      puVar3[5] = uVar8;
      puVar3[4] = uVar7;
      *puVar5 = (ulong)puVar3;
      puVar4 = puVar3;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        puVar4 = (undefined8 *)*puVar5;
      }
      FUN_00328410(param_1[1],puVar4);
      param_1[3] = param_1[3] + 1;
      auVar9._8_8_ = 1;
      auVar9._0_8_ = puVar3;
      return auVar9;
    }
    uVar2 = FUN_006e3da8(*param_2,puVar1[4]);
    puVar6 = puVar1;
    if ((uVar2 & 1) != 0) {
      puVar5 = puVar1;
      puVar1 = (ulong *)*puVar1;
      goto joined_r0x006e47c0;
    }
    uVar2 = FUN_006e3da8(puVar1[4],*param_2);
    if ((uVar2 & 1) == 0) {
      if (*puVar5 != 0) {
        auVar10._8_8_ = 0;
        auVar10._0_8_ = *puVar5;
        return auVar10;
      }
      goto LAB_006e4810;
    }
    puVar5 = puVar1 + 1;
    puVar1 = (ulong *)*puVar5;
  } while( true );
}


// ===== 006e48b8  FUN_006e48b8 =====

void FUN_006e48b8(long *param_1,long *param_2)

{
  byte *pbVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  byte *pbVar10;
  byte *__ptr;
  long *__ptr_00;
  ulong uVar11;
  long *local_80;
  undefined1 auStack_78 [16];
  ulong local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pbVar1 = (byte *)*param_2;
  lVar8 = param_2[1];
  lVar6 = *(long *)(lVar8 + 0x20);
  uVar11 = param_2[2] & *(long *)(lVar8 + 8) - 1U;
  pbVar10 = *(byte **)(lVar6 + uVar11 * 8);
  param_2[2] = uVar11;
  __ptr = pbVar10;
  if (pbVar10 == pbVar1) {
LAB_006e4974:
    uVar5 = FUN_006e4b00(param_1,__ptr,*(undefined8 *)(param_1[4] + uVar11 * 8));
  }
  else {
    if ((pbVar10 != (byte *)0x0) && (pbVar10 != *(byte **)(lVar6 + (uVar11 ^ 1) * 8))) {
      do {
        pbVar10 = *(byte **)(pbVar10 + 0x30);
        if (pbVar10 == pbVar1) break;
      } while (pbVar10 != (byte *)0x0);
      __ptr = pbVar1;
      if (pbVar10 != (byte *)0x0) goto LAB_006e4974;
    }
    FUN_006e37c4(auStack_78,lVar8,pbVar1,&local_80);
    __ptr = (byte *)*param_2;
    param_2[2] = local_68;
    lVar8 = *(long *)(*(long *)(param_2[1] + 0x20) + local_68 * 8);
    uVar11 = local_68;
    if ((lVar8 == 0) || (lVar8 != *(long *)(*(long *)(param_2[1] + 0x20) + (local_68 ^ 1) * 8)))
    goto LAB_006e4974;
    __ptr_00 = *(long **)(param_1[4] + local_68 * 8);
    plVar9 = local_80;
    plVar3 = (long *)local_80[1];
    if ((long *)local_80[1] == (long *)0x0) {
      do {
        plVar7 = (long *)plVar9[2];
        bVar4 = (long *)*plVar7 != plVar9;
        plVar9 = plVar7;
      } while (bVar4);
    }
    else {
      do {
        plVar7 = plVar3;
        plVar3 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
    if ((long *)*__ptr_00 == local_80) {
      *__ptr_00 = (long)plVar7;
    }
    __ptr_00[3] = __ptr_00[3] + -1;
    FUN_00328dd0(__ptr_00[1],local_80);
    if (__ptr_00[2] == 0) {
      free(local_80);
      lVar8 = __ptr_00[3];
    }
    else {
      lVar8 = __ptr_00[3];
    }
    if (lVar8 != 0) goto LAB_006e4994;
    uVar11 = local_68 & 0xfffffffffffffffe;
    if (param_1[5] == 0) {
      FUN_006e35ac(__ptr_00,__ptr_00[1]);
      free(__ptr_00);
    }
    uVar5 = 0;
    *(undefined8 *)(param_1[4] + (local_68 << 3 | 8)) = 0;
  }
  *(undefined8 *)(param_1[4] + uVar11 * 8) = uVar5;
LAB_006e4994:
  if ((__ptr != (byte *)0x0) && (param_1[5] == 0)) {
    if ((*(int *)(__ptr + 0x18) == 9) && ((*__ptr & 1) != 0)) {
      free(*(void **)(__ptr + 0x10));
    }
    free(__ptr);
  }
  *param_1 = *param_1 + -1;
  if ((uVar11 == param_1[3]) && (uVar11 < (ulong)param_1[1])) {
    do {
      if (*(long *)(param_1[4] + uVar11 * 8) != 0) break;
      uVar11 = uVar11 + 1;
      param_1[3] = uVar11;
    } while (param_1[1] != uVar11);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e4b00  FUN_006e4b00 =====

long FUN_006e4b00(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != param_2) {
    uVar1 = FUN_006e4b00();
    *(undefined8 *)(param_3 + 0x30) = uVar1;
    return param_3;
  }
  return *(long *)(param_3 + 0x30);
}


// ===== 006e4b48  FUN_006e4b48 =====

void FUN_006e4b48(long *param_1)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *local_50;
  undefined1 auStack_48 [16];
  ulong local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  lVar5 = *(long *)(lVar4 + 0x30);
  if (lVar5 == 0) {
    lVar5 = param_1[1];
    lVar6 = *(long *)(lVar5 + 0x20);
    uVar8 = param_1[2] & *(long *)(lVar5 + 8) - 1U;
    lVar10 = *(long *)(lVar6 + uVar8 * 8);
    param_1[2] = uVar8;
    if (lVar10 == lVar4) {
LAB_006e4c14:
      uVar11 = *(ulong *)(lVar5 + 8);
      uVar8 = uVar8 + 1;
      *param_1 = 0;
      uVar7 = uVar8;
      if (uVar8 < uVar11) {
        do {
          plVar9 = *(long **)(lVar6 + uVar8 * 8);
          if (plVar9 != (long *)0x0) goto LAB_006e4cd8;
          uVar8 = uVar8 + 1;
          uVar7 = uVar11;
        } while (uVar11 != uVar8);
      }
    }
    else {
      if ((lVar10 != 0) && (lVar10 != *(long *)(lVar6 + (uVar8 ^ 1) * 8))) {
        do {
          lVar10 = *(long *)(lVar10 + 0x30);
          if (lVar10 == lVar4) break;
        } while (lVar10 != 0);
        if (lVar10 != 0) goto LAB_006e4c14;
      }
      FUN_006e37c4(auStack_48,lVar5,lVar4,&local_50);
      lVar5 = param_1[1];
      lVar6 = *(long *)(lVar5 + 0x20);
      param_1[2] = local_38;
      lVar4 = *(long *)(lVar6 + local_38 * 8);
      uVar8 = local_38;
      if ((lVar4 == 0) || (lVar4 != *(long *)(lVar6 + (local_38 ^ 1) * 8))) goto LAB_006e4c14;
      plVar9 = local_50;
      plVar2 = (long *)local_50[1];
      if ((long *)local_50[1] == (long *)0x0) {
        do {
          local_50 = (long *)plVar9[2];
          bVar3 = (long *)*local_50 != plVar9;
          plVar9 = local_50;
        } while (bVar3);
      }
      else {
        do {
          local_50 = plVar2;
          plVar2 = (long *)*local_50;
        } while ((long *)*local_50 != (long *)0x0);
      }
      if (local_50 != (long *)(lVar4 + 8)) {
        lVar5 = local_50[5];
        goto LAB_006e4b70;
      }
      uVar11 = *(ulong *)(lVar5 + 8);
      uVar8 = local_38 + 2;
      *param_1 = 0;
      uVar7 = uVar8;
      if (uVar8 < uVar11) {
        do {
          plVar9 = *(long **)(lVar6 + uVar8 * 8);
          if (plVar9 != (long *)0x0) goto LAB_006e4cd8;
          uVar8 = uVar8 + 1;
          uVar7 = uVar11;
        } while (uVar11 != uVar8);
      }
    }
    param_1[2] = uVar7;
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
    goto LAB_006e4d00;
  }
  goto LAB_006e4b70;
LAB_006e4cd8:
  param_1[2] = uVar8;
  if (plVar9 != *(long **)(lVar6 + (uVar8 ^ 1) * 8)) {
    *param_1 = (long)plVar9;
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
    goto LAB_006e4d00;
  }
  lVar5 = *(long *)(*plVar9 + 0x28);
LAB_006e4b70:
  *param_1 = lVar5;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_006e4d00:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e4d10  FUN_006e4d10 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006e4d10(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *local_70;
  long lStack_68;
  ulong local_60;
  undefined1 auStack_58 [32];
  long local_38;
  
  uVar3 = _UNK_002003a8;
  uVar2 = _DAT_002003a0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1[1] = _UNK_002003a8;
  *param_1 = uVar2;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar4 = *(ulong *)(param_2 + 0x18);
  uVar6 = *(ulong *)(param_2 + 8);
  param_1[4] = PTR_DAT_007a3250;
  param_1[5] = 0;
  if (uVar4 < uVar6) {
    do {
      plVar5 = *(long **)(*(long *)(param_2 + 0x20) + uVar4 * 8);
      if (plVar5 != (long *)0x0) {
        local_70 = plVar5;
        lStack_68 = param_2;
        local_60 = uVar4;
        if (plVar5 != *(long **)(*(long *)(param_2 + 0x20) + (uVar4 ^ 1) * 8)) goto LAB_006e4da8;
        local_70 = *(long **)(*plVar5 + 0x28);
        while (local_70 != (long *)0x0) {
LAB_006e4da8:
                    /* try { // try from 006e4da8 to 006e4dc3 has its CatchHandler @ 006e4df0 */
          FUN_006e4e1c(auStack_58,param_1,local_70,local_70 + 4);
          FUN_006e4b48(&local_70);
        }
        break;
      }
      uVar4 = uVar4 + 1;
    } while (uVar6 != uVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e4e1c  FUN_006e4e1c =====

void FUN_006e4e1c(long *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 local_a0 [24];
  undefined8 uStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  undefined8 local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_006e37c4(&local_80,param_2,param_3,0);
  if (local_80 != 0) {
    *param_1 = local_80;
    param_1[1] = lStack_78;
    param_1[2] = local_70;
    *(undefined1 *)(param_1 + 3) = 0;
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
    goto LAB_006e4f60;
  }
  uVar1 = param_2[1];
  uVar5 = *param_2 + 1;
  uVar4 = uVar1 * 3 >> 2 & 0xfffffffffffffff;
  if (uVar5 < uVar4) {
    if ((8 < uVar1) && (uVar5 <= uVar1 * 0xc >> 6)) {
      uVar6 = 0;
      do {
        uVar6 = uVar6 + 1;
      } while ((uVar5 * 5 >> 2) + 1 << (uVar6 & 0x3f) < uVar4);
      uVar5 = uVar1 >> (uVar6 & 0x3f);
      if (uVar5 < 9) {
        uVar5 = 8;
      }
      if (uVar5 != uVar1) goto LAB_006e4fd4;
    }
  }
  else if (uVar1 < 0x800000000000001) {
    uVar5 = uVar1 << 1;
LAB_006e4fd4:
    FUN_006e42fc(param_2,uVar5);
    FUN_006e37c4(local_a0,param_2,param_3,0);
    local_68 = uStack_88;
  }
  if (param_2[5] == 0) {
    lVar3 = FUN_00759c3c(0x38);
    lVar7 = param_2[5];
    *(undefined4 *)(lVar3 + 0x18) = 0;
    FUN_006df758(lVar3,param_3);
  }
  else {
    lVar3 = thunk_FUN_006634e4(param_2[5],0x38,PTR_PTR_007a36d0);
    lVar7 = param_2[5];
    *(undefined4 *)(lVar3 + 0x18) = 0;
    FUN_006df758(lVar3,param_3);
  }
  if (lVar7 != 0) {
    FUN_006630c8(lVar7,lVar3,PTR_FUN_007a36d8);
  }
  uVar8 = *param_4;
  *(undefined8 *)(lVar3 + 0x28) = param_4[1];
  *(undefined8 *)(lVar3 + 0x20) = uVar8;
  FUN_006e41a8(param_1,param_2,local_68,lVar3);
  *param_2 = *param_2 + 1;
  *(undefined1 *)(param_1 + 3) = 1;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_006e4f60:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e5004  FUN_006e5004 =====

void FUN_006e5004(long *param_1,long *param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  int iVar5;
  
  plVar3 = param_2;
  if ((param_3 == 0) && (param_4 != 0)) {
    if (param_2 != (long *)0x0) {
      FUN_006630c8(param_4,param_2,PTR_FUN_007a31e8);
    }
  }
  else if (param_4 != param_3) {
    plVar3 = (long *)FUN_006e5f04(param_2,param_4);
    FUN_00685b44(param_2,plVar3);
    if (param_3 == 0) {
      (**(code **)(*param_2 + 8))(param_2);
    }
  }
  piVar4 = (int *)param_1[2];
  if (piVar4 == (int *)0x0) {
    iVar5 = *(int *)((long)param_1 + 0xc);
LAB_006e50d0:
    FUN_006758fc(param_1,iVar5 + 1);
LAB_006e50dc:
    piVar4 = (int *)param_1[2];
    iVar1 = *piVar4;
  }
  else {
    iVar5 = (int)param_1[1];
    if (iVar5 == *(int *)((long)param_1 + 0xc)) goto LAB_006e50d0;
    iVar1 = *piVar4;
    if (iVar1 == *(int *)((long)param_1 + 0xc)) {
      if ((*(long **)(piVar4 + (long)iVar5 * 2 + 2) != (long *)0x0) && (*param_1 == 0)) {
        (**(code **)(**(long **)(piVar4 + (long)iVar5 * 2 + 2) + 8))();
        piVar4 = (int *)param_1[2];
      }
      goto LAB_006e50ec;
    }
    if (iVar5 < iVar1) {
      *(undefined8 *)(piVar4 + (long)iVar1 * 2 + 2) = *(undefined8 *)(piVar4 + (long)iVar5 * 2 + 2);
      goto LAB_006e50dc;
    }
  }
  *piVar4 = iVar1 + 1;
LAB_006e50ec:
  lVar2 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar2 + 1;
  *(long **)(piVar4 + (long)(int)lVar2 * 2 + 2) = plVar3;
  return;
}


// ===== 006e5130  FUN_006e5130 =====

void FUN_006e5130(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x88))();
  lVar2 = (**(code **)(*param_2 + 0x88))(param_2);
  if ((lVar1 != 0) && (lVar1 == lVar2)) {
                    /* WARNING: Could not recover jumptable at 0x006e51ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))(param_1,param_2);
    return;
  }
  FUN_006e8b74(param_2,param_1);
  return;
}


// ===== 006e51b0  FUN_006e51b0 =====

void FUN_006e51b0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006e51b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))();
  return;
}


// ===== 006e51bc  FUN_006e51bc =====

void FUN_006e51bc(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 != param_1) {
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x88))();
    puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x88))(param_2);
    if ((puVar2 == (undefined8 *)0x0) || (puVar2 != puVar3)) {
      lVar4 = (**(code **)(*param_1 + 0x80))(param_1);
      lVar5 = (**(code **)(*param_2 + 0x80))(param_2);
      if (lVar5 != lVar4) {
        FUN_00675e64(auStack_68,3,
                     "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/message.cc"
                     ,0x6b);
                    /* try { // try from 006e525c to 006e52b7 has its CatchHandler @ 006e530c */
        uVar6 = FUN_00675a58(auStack_68,"CHECK failed: (from.GetDescriptor()) == (descriptor): ");
        uVar6 = FUN_00675a58(uVar6,": Tried to copy from a message with a different type. to: ");
        uVar6 = FUN_00675a80(uVar6,*(long *)(lVar4 + 8) + 0x18);
        uVar6 = FUN_00675a58(uVar6,", from: ");
        lVar4 = (**(code **)(*param_2 + 0x80))(param_2);
        uVar6 = FUN_00675a80(uVar6,*(long *)(lVar4 + 8) + 0x18);
                    /* try { // try from 006e52b8 to 006e52bf has its CatchHandler @ 006e5308 */
        FUN_00675ac0(&uStack_69,uVar6);
        FUN_00675e7c(auStack_68);
      }
      pcVar7 = FUN_006e5f44;
    }
    else {
      pcVar7 = (code *)*puVar2;
    }
    (*pcVar7)(param_1,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e5334  FUN_006e5334 =====

void FUN_006e5334(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  (**(code **)(*param_1 + 0x20))();
  lVar1 = (**(code **)(*param_1 + 0x88))(param_1);
                    /* WARNING: Could not recover jumptable at 0x006e5378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,param_2);
  return;
}


// ===== 006e537c  FUN_006e537c =====

void FUN_006e537c(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_2 + 0x80))();
  lVar1 = *(long *)(lVar1 + 8);
  if ((*(byte *)(lVar1 + 0x18) & 1) == 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    param_1[2] = *(undefined8 *)(lVar1 + 0x28);
    param_1[1] = uVar3;
    *param_1 = uVar2;
    return;
  }
  FUN_002fb36c(param_1,*(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x20));
  return;
}


// ===== 006e53d8  thunk_FUN_006e8a6c =====

void thunk_FUN_006e8a6c(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  byte *pbVar5;
  long *plVar6;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_006e94d0();
  puStack_60 = (undefined8 *)0x0;
  puStack_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_0067cb34(uVar4,param_1,&puStack_60);
  puVar3 = puStack_58;
  for (puVar2 = puStack_60; puVar2 != puVar3; puVar2 = puVar2 + 1) {
    FUN_0067a3b8(uVar4,param_1,*puVar2);
  }
  pbVar5 = (byte *)FUN_006795f8(uVar4,param_1);
  if (((*pbVar5 & 1) != 0) && (plVar6 = (long *)FUN_00679604(uVar4,param_1), *plVar6 != plVar6[1]))
  {
    FUN_006fa9f8();
  }
  if (puStack_60 != (undefined8 *)0x0) {
    puStack_58 = puStack_60;
    free(puStack_60);
  }
  if (*(long *)(lVar1 + 0x28) != lStack_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 006e53dc  thunk_FUN_006e96d8 =====

undefined4 thunk_FUN_006e96d8(long *param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined4 uVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  long *plStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined ***pppuStack_f0;
  long *plStack_e8;
  byte bStack_e0;
  void *pvStack_d0;
  int iStack_c8;
  undefined **ppuStack_b0;
  long *plStack_a8;
  byte bStack_a0;
  void *pvStack_90;
  int iStack_88;
  undefined1 auStack_80 [16];
  long lStack_70;
  
  lVar2 = tpidr_el0;
  lStack_70 = *(long *)(lVar2 + 0x28);
  lVar7 = (**(code **)(*param_1 + 0x80))();
  uVar8 = FUN_006e94d0(param_1);
  uVar1 = *(uint *)(lVar7 + 4);
  if (0 < (int)uVar1) {
    lVar14 = 0;
    do {
      if (((*(byte *)(*(long *)(lVar7 + 0x28) + lVar14 + 1) & 0x60) == 0x40) &&
         (uVar9 = FUN_0067b838(uVar8,param_1), (uVar9 & 1) == 0)) {
        uVar12 = 0;
        goto LAB_006e9a94;
      }
      lVar14 = lVar14 + 0x48;
    } while ((ulong)uVar1 * 0x48 - lVar14 != 0);
  }
  plStack_118 = (long *)0x0;
  plStack_110 = (long *)0x0;
  uStack_108 = 0;
  FUN_0067cb34(uVar8,param_1,&plStack_118);
  plVar5 = plStack_110;
  puVar4 = PTR_DAT_007a32d8;
  puVar3 = PTR_thunk_FUN_006af330_007a32d0;
  if (plStack_118 != plStack_110) {
    plVar13 = plStack_118;
    do {
      lVar7 = *plVar13;
      plVar10 = *(long **)(lVar7 + 0x18);
      if ((plVar10 != (long *)0x0) && (puStack_f8 = puVar3, lStack_100 = lVar7, *plVar10 != -1)) {
        ppuStack_b0 = &puStack_f8;
        plStack_a8 = &lStack_100;
        pppuStack_f0 = &ppuStack_b0;
        FUN_00710f84(plVar10,&pppuStack_f0,FUN_00685640);
      }
      uVar9 = (ulong)*(byte *)(lVar7 + 2);
      if (*(int *)(puVar4 + uVar9 * 4) == 10) {
        plVar10 = *(long **)(lVar7 + 0x18);
        if (plVar10 != (long *)0x0) {
          puStack_f8 = puVar3;
          lStack_100 = lVar7;
          if (*plVar10 != -1) {
            ppuStack_b0 = &puStack_f8;
            plStack_a8 = &lStack_100;
            pppuStack_f0 = &ppuStack_b0;
            FUN_00710f84(plVar10,&pppuStack_f0,FUN_00685640);
          }
          uVar9 = (ulong)*(byte *)(lVar7 + 2);
        }
        if (((int)uVar9 == 0xb) && (uVar9 = FUN_0068d830(lVar7), (uVar9 & 1) != 0)) {
          lVar14 = FUN_0068c940(lVar7);
          lVar14 = *(long *)(lVar14 + 0x28);
          plVar10 = *(long **)(lVar14 + 0x60);
          if (plVar10 != (long *)0x0) {
            lStack_100 = lVar14 + 0x48;
            puStack_f8 = puVar3;
            if (*plVar10 != -1) {
              ppuStack_b0 = &puStack_f8;
              plStack_a8 = &lStack_100;
              pppuStack_f0 = &ppuStack_b0;
              FUN_00710f84(plVar10,&pppuStack_f0,FUN_00685640);
            }
          }
          if (*(int *)(puVar4 + (ulong)*(byte *)(lVar14 + 0x4a) * 4) == 10) {
            plVar10 = (long *)FUN_00684cf0(uVar8,param_1,lVar7);
            uVar9 = FUN_006dead4();
            if ((uVar9 & 1) == 0) goto LAB_006e998c;
            FUN_006843a0(&ppuStack_b0,param_1,lVar7);
            FUN_006843a0(&pppuStack_f0,param_1,lVar7);
            (**(code **)(*plVar10 + 0x28))(plVar10,&ppuStack_b0);
            (**(code **)(*plVar10 + 0x30))(plVar10,&pppuStack_f0);
            while (uVar9 = (**(code **)(*plStack_a8 + 0x20))(plStack_a8,&ppuStack_b0,&pppuStack_f0),
                  (uVar9 & 1) == 0) {
              plVar10 = (long *)FUN_006e11b4(auStack_80);
              uVar11 = (**(code **)(*plVar10 + 0x28))();
              if ((uVar11 & 1) == 0) break;
              (**(code **)(*plStack_a8 + 0x90))(plStack_a8,&ppuStack_b0);
            }
            (**(code **)(*plStack_e8 + 0x80))(plStack_e8,&pppuStack_f0);
            if ((iStack_c8 == 9) && ((bStack_e0 & 1) != 0)) {
              free(pvStack_d0);
            }
            (**(code **)(*plStack_a8 + 0x80))(plStack_a8,&ppuStack_b0);
            if ((iStack_88 == 9) && ((bStack_a0 & 1) != 0)) {
              free(pvStack_90);
            }
            if ((uVar9 & 1) != 0) goto LAB_006e97cc;
LAB_006e9a7c:
            uVar12 = 0;
            goto joined_r0x006e9a84;
          }
        }
        else {
LAB_006e998c:
          if (((*(byte *)(lVar7 + 1) ^ 0xff) & 0x60) == 0) {
            iVar6 = FUN_0067c384(uVar8,param_1,lVar7);
            if (0 < iVar6) {
              iVar15 = 0;
              do {
                plVar10 = (long *)FUN_006832a0(uVar8,param_1,lVar7,iVar15);
                uVar9 = (**(code **)(*plVar10 + 0x28))();
                if ((uVar9 & 1) == 0) goto LAB_006e9a7c;
                iVar15 = iVar15 + 1;
              } while (iVar6 != iVar15);
            }
          }
          else {
            plVar10 = (long *)FUN_0068265c(uVar8,param_1,lVar7,0);
            uVar9 = (**(code **)(*plVar10 + 0x28))();
            if ((uVar9 & 1) == 0) goto LAB_006e9a7c;
          }
        }
      }
LAB_006e97cc:
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar5);
  }
  uVar12 = 1;
joined_r0x006e9a84:
  if (plStack_118 != (long *)0x0) {
    plStack_110 = plStack_118;
    free(plStack_118);
  }
LAB_006e9a94:
  if (*(long *)(lVar2 + 0x28) == lStack_70) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e53e0  FUN_006e53e0 =====

void FUN_006e53e0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__s;
  ulong local_60;
  size_t local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __n = strlen("");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_60);
    }
    goto LAB_006e5514;
  }
  if (__n < 0x17) {
    __s = (void *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_006e5474;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
    __s = (void *)FUN_00759c3c(uVar1 + 1);
    local_60 = uVar1 + 1 | 1;
    local_58 = __n;
    local_50 = __s;
LAB_006e5474:
    memset(__s,0,__n);
  }
  *(undefined1 *)((long)__s + __n) = 0;
                    /* try { // try from 006e5488 to 006e5497 has its CatchHandler @ 006e54e8 */
  FUN_006e9b54(param_1,&local_60,param_2);
  if ((local_60 & 1) != 0) {
    free(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_006e5514:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e5518  FUN_006e5518 =====

void FUN_006e5518(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *local_50;
  byte *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (byte *)0x0;
  local_48 = (byte *)0x0;
  local_40 = 0;
                    /* try { // try from 006e5544 to 006e555f has its CatchHandler @ 006e55d0 */
  FUN_006e53e0(param_2,&local_50);
  FUN_006b142c(param_1,&local_50,&DAT_001c2f11);
  pbVar3 = local_50;
  pbVar4 = local_48;
  if (local_50 != (byte *)0x0) {
    while (pbVar2 = pbVar4, pbVar2 != pbVar3) {
      pbVar4 = pbVar2 + -0x18;
      if ((*pbVar4 & 1) != 0) {
        free(*(void **)(pbVar2 + -8));
      }
    }
    local_48 = pbVar3;
    free(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 006e55f8  thunk_FUN_006fcb84 =====

void thunk_FUN_006fcb84(long *param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  undefined8 extraout_x1;
  uint uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  long *plStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar4 = tpidr_el0;
  lStack_58 = *(long *)(lVar4 + 0x28);
  lVar6 = (**(code **)(*param_1 + 0x80))();
  (**(code **)(*param_1 + 0x80))(param_1);
  if ((*(byte *)(*(long *)(lVar6 + 0x20) + 0x48) & 1) == 0) {
    do {
      pbVar7 = param_2;
      if ((byte *)*param_3 <= param_2) {
        iVar3 = (int)param_2 - *(int *)(param_3 + 1);
        if (*(int *)((long)param_3 + 0x1c) == iVar3) {
          pbVar7 = (byte *)0x0;
          if (param_3[2] != 0 || iVar3 < 1) {
            pbVar7 = param_2;
          }
          if (*(long *)(lVar4 + 0x28) == lStack_58) {
            return;
          }
          goto LAB_006fcd70;
        }
        auVar11 = FUN_0066f53c(param_3,iVar3,*(undefined4 *)((long)param_3 + 0x5c));
        pbVar7 = auVar11._0_8_;
        if ((auVar11 & (undefined1  [16])0x1) != (undefined1  [16])0x0) break;
      }
      bVar2 = *pbVar7;
      uVar10 = (ulong)(uint)bVar2;
      pbVar5 = pbVar7 + 1;
      if ((char)bVar2 < '\0') {
        bVar1 = pbVar7[1];
        uVar10 = (ulong)(((uint)bVar2 + (uint)bVar1 * 0x80) - 0x80);
        if (-1 < (char)bVar1) {
          pbVar5 = pbVar7 + 2;
          goto LAB_006fcc70;
        }
        auVar11 = FUN_0066fe50(pbVar7,uVar10);
        pbVar7 = auVar11._0_8_;
        if (pbVar7 != (byte *)0x0) {
          if (auVar11._8_4_ != 0) goto LAB_006fcc74;
          uVar9 = 0;
LAB_006fcd18:
          *(uint *)(param_3 + 10) = uVar9 - 1;
        }
        break;
      }
LAB_006fcc70:
      pbVar7 = pbVar5;
      auVar11._8_8_ = uVar10;
      auVar11._0_8_ = pbVar7;
      uVar9 = (uint)uVar10;
      if (uVar9 == 0) goto LAB_006fcd18;
LAB_006fcc74:
      pbVar7 = auVar11._0_8_;
      uVar9 = auVar11._8_4_;
      if ((uVar9 & 7) == 4) goto LAB_006fcd18;
      uVar9 = uVar9 >> 3;
      lVar8 = FUN_0068c9d8(lVar6,uVar9);
      if (lVar8 == 0) {
        lVar8 = FUN_0068d53c(lVar6,uVar9);
        if (lVar8 == 0) {
          lVar8 = 0;
        }
        else if (param_3[0xc] == 0) {
          lVar8 = FUN_00684764(extraout_x1,uVar9);
        }
        else {
          lVar8 = FUN_0068bfbc(param_3[0xc],lVar6,uVar9);
        }
      }
      param_2 = (byte *)FUN_006fcf50(param_1,pbVar7,param_3,auVar11._8_8_ & 0xffffffff,extraout_x1,
                                     lVar8);
      pbVar7 = param_2;
    } while (param_2 != (byte *)0x0);
    if (*(long *)(lVar4 + 0x28) == lStack_58) {
      return;
    }
  }
  else {
    plStack_70 = param_1;
    lStack_68 = lVar6;
    uStack_60 = extraout_x1;
    pbVar7 = (byte *)FUN_006fcd74(&plStack_70,param_2,param_3);
    if (*(long *)(lVar4 + 0x28) == lStack_58) {
      return;
    }
  }
LAB_006fcd70:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pbVar7);
}


// ===== 006e55fc  thunk_FUN_006fdd30 =====

undefined8 thunk_FUN_006fdd30(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long *__dest;
  undefined8 uVar6;
  undefined8 extraout_x1;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  size_t __n;
  int iVar12;
  long lVar13;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long lStack_68;
  
  lVar4 = tpidr_el0;
  lStack_68 = *(long *)(lVar4 + 0x28);
  lVar5 = (**(code **)(*param_1 + 0x80))();
  (**(code **)(*param_1 + 0x80))(param_1);
  plStack_80 = (long *)0x0;
  plStack_78 = (long *)0x0;
  plStack_70 = (long *)0x0;
  if (*(char *)(*(long *)(lVar5 + 0x20) + 0x4b) == '\0') {
    FUN_0067cb28(extraout_x1,param_1,&plStack_80);
LAB_006fdea4:
    plVar10 = plStack_78;
    plVar9 = plStack_80;
    if (plStack_80 != plStack_78) {
      do {
        param_2 = FUN_006fdffc(*plVar9,param_1,param_2,param_3);
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar10);
      cVar3 = *(char *)(*(long *)(lVar5 + 0x20) + 0x48);
      goto joined_r0x006fdee0;
    }
  }
  else {
    iVar12 = *(int *)(lVar5 + 4);
    if (0 < iVar12) {
      lVar13 = 0;
      lVar8 = 0;
      do {
        plVar9 = plStack_80;
        lVar2 = *(long *)(lVar5 + 0x28) + lVar13;
        if (plStack_78 < plStack_70) {
          plVar10 = plStack_78 + 1;
          *plStack_78 = lVar2;
        }
        else {
          __n = (long)plStack_78 - (long)plStack_80;
          lVar11 = (long)__n >> 3;
          uVar1 = lVar11 + 1;
          if (uVar1 >> 0x3d != 0) {
            if (*(long *)(lVar4 + 0x28) == lStack_68) {
              FUN_00685d28(&plStack_80);
LAB_006fdfa4:
              if (*(long *)(lVar4 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
                FUN_002f9ee0();
              }
            }
            goto LAB_006fdff8;
          }
          uVar7 = (long)plStack_70 - (long)plStack_80 >> 2;
          if (uVar7 <= uVar1) {
            uVar7 = uVar1;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)plStack_70 - (long)plStack_80)) {
            uVar7 = 0x1fffffffffffffff;
          }
          if (uVar7 == 0) {
            __dest = (long *)0x0;
          }
          else {
            if (uVar7 >> 0x3d != 0) goto LAB_006fdfa4;
            __dest = (long *)FUN_00759c3c(uVar7 << 3);
          }
          plVar10 = __dest + lVar11 + 1;
          __dest[lVar11] = lVar2;
          memcpy(__dest,plVar9,__n);
          plStack_80 = __dest;
          plStack_70 = __dest + uVar7;
          if (plVar9 != (long *)0x0) {
            free(plVar9);
            iVar12 = *(int *)(lVar5 + 4);
          }
        }
        lVar8 = lVar8 + 1;
        lVar13 = lVar13 + 0x48;
        plStack_78 = plVar10;
      } while (lVar8 < iVar12);
      goto LAB_006fdea4;
    }
  }
  cVar3 = *(char *)(*(long *)(lVar5 + 0x20) + 0x48);
joined_r0x006fdee0:
  if (cVar3 == '\0') {
    uVar6 = FUN_006795dc(extraout_x1,param_1);
    uVar6 = FUN_006fc418(uVar6,param_2,param_3);
  }
  else {
    uVar6 = FUN_006795dc(extraout_x1,param_1);
    uVar6 = FUN_006fc864(uVar6,param_2,param_3);
  }
  if (plStack_80 != (long *)0x0) {
    plStack_78 = plStack_80;
    free(plStack_80);
  }
  if (*(long *)(lVar4 + 0x28) == lStack_68) {
    return uVar6;
  }
LAB_006fdff8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e5600  FUN_006e5600 =====

ulong FUN_006e5600(long *param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_007022f4();
  (**(code **)(*param_1 + 0x78))(param_1,uVar1 & 0xffffffff);
  return uVar1;
}


// ===== 006e563c  FUN_006e563c =====

void FUN_006e563c(long param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_006fa958();
    iVar1 = FUN_006fc9ac();
    *param_3 = iVar1 + param_2;
    return;
  }
  iVar1 = FUN_006fc9ac((*(ulong *)(param_1 + 8) & 0xfffffffffffffffc) + 8);
  *param_3 = iVar1 + param_2;
  return;
}


// ===== 006e5694  FUN_006e5694 =====

undefined8 FUN_006e5694(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *param_3 = (int)param_2;
    return param_2;
  }
  uVar1 = FUN_006e563c();
  return uVar1;
}


// ===== 006e56ac  FUN_006e56ac =====

void FUN_006e56ac(long *param_1)

{
  undefined8 extraout_x1;
  
  (**(code **)(*param_1 + 0x80))();
  FUN_00679630(extraout_x1,param_1);
  return;
}


// ===== 006e56dc  FUN_006e56dc =====

void FUN_006e56dc(void)

{
  return;
}


// ===== 006e56e0  FUN_006e56e0 =====

undefined8 * FUN_006e56e0(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (((DAT_007aed78 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007aed78), iVar1 != 0)) {
                    /* try { // try from 006e5720 to 006e576b has its CatchHandler @ 006e5790 */
    puVar2 = (undefined8 *)FUN_00759c3c(0x80);
    *puVar2 = &PTR_FUN_0079ae00;
    *(undefined4 *)(puVar2 + 5) = 0x3f800000;
    puVar2[0xe] = 0;
    puVar2[2] = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    *(undefined4 *)(puVar2 + 0xf) = 0x3f800000;
    FUN_0066ee94(FUN_006e5f54,puVar2);
    DAT_007aed70 = puVar2;
    FUN_00739d60(&DAT_007aed78);
    return DAT_007aed70;
  }
  return DAT_007aed70;
}


// ===== 006e57a8  FUN_006e57a8 =====

void FUN_006e57a8(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong extraout_x1;
  char *__s;
  undefined1 uStack_79;
  char *local_78;
  size_t sStack_70;
  long local_68;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((DAT_007aed78 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007aed78), iVar2 != 0)) {
                    /* try { // try from 006e58b0 to 006e58fb has its CatchHandler @ 006e5910 */
    puVar4 = (undefined8 *)FUN_00759c3c(0x80);
    *puVar4 = &PTR_FUN_0079ae00;
    *(undefined4 *)(puVar4 + 5) = 0x3f800000;
    puVar4[0xe] = 0;
    puVar4[2] = 0;
    puVar4[1] = 0;
    puVar4[4] = 0;
    puVar4[3] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    *(undefined4 *)(puVar4 + 0xf) = 0x3f800000;
    FUN_0066ee94(FUN_006e5f54,puVar4);
    DAT_007aed70 = puVar4;
    FUN_00739d60(&DAT_007aed78);
  }
  puVar4 = DAT_007aed70;
  __s = *(char **)(param_1 + 0x10);
  if (__s == (char *)0x0) {
    sStack_70 = 0;
  }
  else {
    sStack_70 = strlen(__s);
    if ((long)sStack_70 < 0) {
      FUN_00676318(sStack_70,"string length exceeds max size");
    }
  }
  local_78 = __s;
  local_68 = param_1;
  FUN_006e65e8(puVar4 + 1,&local_78,&local_78);
  if ((extraout_x1 & 1) == 0) {
    FUN_00675e64(&local_78,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/message.cc"
                 ,0x102);
                    /* try { // try from 006e584c to 006e5867 has its CatchHandler @ 006e5928 */
    uVar3 = FUN_00675a58(&local_78,"File is already registered: ");
    uVar3 = FUN_00675a58(uVar3,*(undefined8 *)(param_1 + 0x10));
                    /* try { // try from 006e5868 to 006e586f has its CatchHandler @ 006e5924 */
    FUN_00675ac0(&uStack_79,uVar3);
    FUN_00675e7c(&local_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e5950  FUN_006e5950 =====

void FUN_006e5950(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong extraout_x1;
  undefined1 uStack_69;
  long local_68;
  undefined8 uStack_60;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_007aed78 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007aed78), iVar2 != 0)) {
                    /* try { // try from 006e5a24 to 006e5a6f has its CatchHandler @ 006e5a84 */
    puVar4 = (undefined8 *)FUN_00759c3c(0x80);
    *puVar4 = &PTR_FUN_0079ae00;
    *(undefined4 *)(puVar4 + 5) = 0x3f800000;
    puVar4[0xe] = 0;
    puVar4[2] = 0;
    puVar4[1] = 0;
    puVar4[4] = 0;
    puVar4[3] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    *(undefined4 *)(puVar4 + 0xf) = 0x3f800000;
    FUN_0066ee94(FUN_006e5f54,puVar4);
    DAT_007aed70 = puVar4;
    FUN_00739d60(&DAT_007aed78);
  }
  local_68 = param_1;
  uStack_60 = param_2;
  FUN_006e6b2c(DAT_007aed70 + 0xb,&local_68,&local_68);
  if ((extraout_x1 & 1) == 0) {
    FUN_00675e64(&local_68,2,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/message.cc"
                 ,0x111);
                    /* try { // try from 006e59c0 to 006e59df has its CatchHandler @ 006e5a9c */
    uVar3 = FUN_00675a58(&local_68,"Type is already registered: ");
    uVar3 = FUN_00675a80(uVar3,*(long *)(param_1 + 8) + 0x18);
                    /* try { // try from 006e59e0 to 006e59e7 has its CatchHandler @ 006e5a98 */
    FUN_00675ac0(&uStack_69,uVar3);
    FUN_00675e7c(&local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e5ac4  FUN_006e5ac4 =====

void FUN_006e5ac4(undefined8 param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  code **local_70;
  long *plStack_68;
  long local_40;
  code *pcStack_38;
  undefined1 *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (((*(byte *)(param_2 + 1) ^ 0xff) & 0x60) != 0) {
    FUN_00675e64(&local_70,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/message.cc"
                 ,0x159);
                    /* try { // try from 006e5b0c to 006e5b1f has its CatchHandler @ 006e5edc */
    uVar4 = FUN_00675a58(&local_70,"CHECK failed: field->is_repeated(): ");
                    /* try { // try from 006e5b20 to 006e5b27 has its CatchHandler @ 006e5ed8 */
    FUN_00675ac0(&local_30,uVar4);
    FUN_00675e7c(&local_70);
  }
  plVar5 = *(long **)(param_2 + 0x18);
  if ((plVar5 != (long *)0x0) &&
     (pcStack_38 = thunk_FUN_006af330, local_40 = param_2, *plVar5 != -1)) {
    local_70 = &pcStack_38;
    plStack_68 = &local_40;
    local_30 = (undefined1 *)&local_70;
    FUN_00710f84(plVar5,&local_30,FUN_00685640);
  }
  bVar1 = *(byte *)(param_2 + 2);
  iVar3 = *(int *)(PTR_DAT_007a32d8 + (ulong)bVar1 * 4);
  if (iVar3 < 6) {
    if (iVar3 < 3) {
      if (iVar3 == 1) {
        puVar8 = &DAT_007aed80;
        if ((DAT_007aed88 & 1) != 0) goto LAB_006e5e78;
        iVar3 = FUN_00739c1c(&DAT_007aed88);
joined_r0x006e5db0:
        puVar8 = &DAT_007aed80;
        if (iVar3 == 0) goto LAB_006e5e78;
        puVar8 = &DAT_007aed80;
        puVar7 = &DAT_0079ae30;
      }
      else {
        if (iVar3 != 2) {
LAB_006e5e20:
          FUN_00675e64(&local_70,3,
                       "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/message.cc"
                       ,0x175);
                    /* try { // try from 006e5e38 to 006e5e4b has its CatchHandler @ 006e5ed4 */
          uVar4 = FUN_00675a58(&local_70,"Should not reach here.");
                    /* try { // try from 006e5e4c to 006e5e53 has its CatchHandler @ 006e5ed0 */
          FUN_00675ac0(&local_30,uVar4);
          FUN_00675e7c(&local_70);
          puVar8 = (undefined8 *)0x0;
          goto LAB_006e5e78;
        }
        puVar8 = &DAT_007aeda0;
        if ((DAT_007aeda8 & 1) != 0) goto LAB_006e5e78;
        puVar8 = &DAT_007aeda0;
        iVar3 = FUN_00739c1c(&DAT_007aeda8);
        if (iVar3 == 0) goto LAB_006e5e78;
        puVar7 = &DAT_0079aff8;
      }
    }
    else if (iVar3 == 3) {
      puVar8 = &DAT_007aed90;
      if ((DAT_007aed98 & 1) != 0) goto LAB_006e5e78;
      puVar8 = &DAT_007aed90;
      iVar3 = FUN_00739c1c(&DAT_007aed98);
      if (iVar3 == 0) goto LAB_006e5e78;
      puVar7 = &DAT_0079af28;
    }
    else if (iVar3 == 4) {
      puVar8 = &DAT_007aedb0;
      if (((DAT_007aedb8 & 1) != 0) ||
         (iVar3 = FUN_00739c1c(&DAT_007aedb8), puVar8 = &DAT_007aedb0, iVar3 == 0))
      goto LAB_006e5e78;
      puVar7 = &DAT_0079b0c8;
    }
    else {
      if (iVar3 != 5) goto LAB_006e5e20;
      puVar8 = &DAT_007aedd0;
      if (((DAT_007aedd8 & 1) != 0) || (iVar3 = FUN_00739c1c(&DAT_007aedd8), iVar3 == 0))
      goto LAB_006e5e78;
      puVar7 = &DAT_0079b268;
    }
  }
  else if (iVar3 < 8) {
    if (iVar3 == 6) {
      puVar8 = &DAT_007aedc0;
      if ((DAT_007aedc8 & 1) != 0) goto LAB_006e5e78;
      puVar8 = &DAT_007aedc0;
      iVar3 = FUN_00739c1c(&DAT_007aedc8);
      if (iVar3 == 0) goto LAB_006e5e78;
      puVar7 = &DAT_0079b198;
    }
    else {
      if (iVar3 != 7) goto LAB_006e5e20;
      puVar8 = &DAT_007aede0;
      if ((DAT_007aede8 & 1) != 0) goto LAB_006e5e78;
      puVar8 = &DAT_007aede0;
      iVar3 = FUN_00739c1c(&DAT_007aede8);
      if (iVar3 == 0) goto LAB_006e5e78;
      puVar7 = &DAT_0079b338;
    }
  }
  else {
    if (iVar3 == 8) {
      puVar8 = &DAT_007aed80;
      if ((DAT_007aed88 & 1) != 0) goto LAB_006e5e78;
      iVar3 = FUN_00739c1c(&DAT_007aed88);
      goto joined_r0x006e5db0;
    }
    if (iVar3 == 9) {
      puVar8 = &DAT_007aedf0;
      if ((DAT_007aedf8 & 1) != 0) goto LAB_006e5e78;
      puVar8 = &DAT_007aedf0;
      iVar3 = FUN_00739c1c(&DAT_007aedf8);
      if (iVar3 == 0) goto LAB_006e5e78;
      puVar7 = &DAT_0079b408;
    }
    else {
      if (iVar3 != 10) goto LAB_006e5e20;
      plVar5 = *(long **)(param_2 + 0x18);
      if (plVar5 != (long *)0x0) {
        pcStack_38 = thunk_FUN_006af330;
        local_40 = param_2;
        if (*plVar5 != -1) {
          local_70 = &pcStack_38;
          plStack_68 = &local_40;
          local_30 = (undefined1 *)&local_70;
          FUN_00710f84(plVar5,&local_30,FUN_00685640);
        }
        bVar1 = *(byte *)(param_2 + 2);
      }
      if ((bVar1 == 0xb) && (uVar6 = FUN_0068d830(param_2), (uVar6 & 1) != 0)) {
        puVar8 = &DAT_007aee00;
        if ((DAT_007aee08 & 1) != 0) goto LAB_006e5e78;
        puVar8 = &DAT_007aee00;
        iVar3 = FUN_00739c1c(&DAT_007aee08);
        if (iVar3 == 0) goto LAB_006e5e78;
        puVar7 = &DAT_0079b4e0;
      }
      else {
        puVar8 = &DAT_007aee10;
        if ((DAT_007aee18 & 1) != 0) goto LAB_006e5e78;
        puVar8 = &DAT_007aee10;
        iVar3 = FUN_00739c1c(&DAT_007aee18);
        if (iVar3 == 0) goto LAB_006e5e78;
        puVar7 = &DAT_0079b5b0;
      }
    }
  }
  *puVar8 = puVar7 + 0x10;
  FUN_00739d60(puVar8 + 1);
LAB_006e5e78:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar8);
}


// ===== 006e5f04  FUN_006e5f04 =====

void FUN_006e5f04(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006e5f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 006e5f10  FUN_006e5f10 =====

ulong FUN_006e5f10(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (((uint)uVar1 >> 1 & 1) != 0) {
    return 0;
  }
  if ((uVar1 & 1) == 0) {
    return uVar1;
  }
  return *(ulong *)(uVar1 & 0xfffffffffffffffc);
}


// ===== 006e5f34  FUN_006e5f34 =====

void FUN_006e5f34(undefined8 param_1,undefined8 param_2)

{
  FUN_006e8b74(param_2,param_1);
  return;
}


// ===== 006e5f44  FUN_006e5f44 =====

void FUN_006e5f44(undefined8 param_1,undefined8 param_2)

{
  FUN_006e8a30(param_2,param_1);
  return;
}


// ===== 006e5f54  FUN_006e5f54 =====

void FUN_006e5f54(void *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  puVar1 = (undefined8 *)*(void **)((long)param_1 + 0x68);
  while (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    free(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = *(void **)((long)param_1 + 0x58);
  *(undefined8 *)((long)param_1 + 0x58) = 0;
  if (pvVar2 != (void *)0x0) {
    free(pvVar2);
  }
  FUN_00715bac((long)param_1 + 0x30);
  puVar1 = (undefined8 *)*(void **)((long)param_1 + 0x18);
  while (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    free(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = *(void **)((long)param_1 + 8);
  *(undefined8 *)((long)param_1 + 8) = 0;
  if (pvVar2 != (void *)0x0) {
    free(pvVar2);
  }
  free(param_1);
  return;
}


// ===== 006e5fd4  FUN_006e5fd4 =====

void FUN_006e5fd4(long param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = (undefined8 *)*(void **)(param_1 + 0x68);
  while (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    free(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = *(void **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (pvVar2 != (void *)0x0) {
    free(pvVar2);
  }
  FUN_00715bac(param_1 + 0x30);
  puVar1 = (undefined8 *)*(void **)(param_1 + 0x18);
  while (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    free(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = *(void **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  free(pvVar2);
  return;
}


// ===== 006e6050  FUN_006e6050 =====

void FUN_006e6050(void *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = (undefined8 *)*(void **)((long)param_1 + 0x68);
  while (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    free(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = *(void **)((long)param_1 + 0x58);
  *(undefined8 *)((long)param_1 + 0x58) = 0;
  if (pvVar2 != (void *)0x0) {
    free(pvVar2);
  }
  FUN_00715bac((long)param_1 + 0x30);
  puVar1 = (undefined8 *)*(void **)((long)param_1 + 0x18);
  while (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    free(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = *(void **)((long)param_1 + 8);
  *(undefined8 *)((long)param_1 + 8) = 0;
  if (pvVar2 != (void *)0x0) {
    free(pvVar2);
  }
  free(param_1);
  return;
}


// ===== 006e60c8  FUN_006e60c8 =====

long FUN_006e60c8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  undefined8 uVar4;
  byte *pbVar5;
  long lVar6;
  undefined1 uStack_71;
  byte *local_70;
  size_t local_68;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_2;
  FUN_00715bcc(param_1 + 0x30);
                    /* try { // try from 006e60f8 to 006e6103 has its CatchHandler @ 006e6304 */
  lVar2 = FUN_006e632c(param_1 + 0x58,&local_40);
  if (lVar2 == 0) {
    FUN_00715bf8(param_1 + 0x30);
    lVar6 = *(long *)(*(long *)(local_40 + 0x10) + 0x18);
    lVar2 = FUN_0068b994();
    if (lVar6 == lVar2) {
LAB_006e6154:
      pbVar5 = *(byte **)(*(long *)(local_40 + 0x10) + 8);
      local_70 = *(byte **)(pbVar5 + 0x10);
      if ((*pbVar5 & 1) == 0) {
        local_70 = pbVar5 + 1;
      }
      local_68 = 0;
      sVar3 = local_68;
      if ((local_70 != (byte *)0x0) && (sVar3 = strlen((char *)local_70), (long)sVar3 < 0)) {
        FUN_00676318(sVar3,"string length exceeds max size");
      }
      local_68 = sVar3;
      lVar2 = FUN_006e643c(param_1 + 8,&local_70);
      if ((lVar2 != 0) && (lVar6 = *(long *)(lVar2 + 0x20), lVar6 != 0)) {
        FUN_00715bcc(param_1 + 0x30);
                    /* try { // try from 006e61a4 to 006e61cf has its CatchHandler @ 006e62f0 */
        lVar2 = FUN_006e632c(param_1 + 0x58,&local_40);
        if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x18), lVar2 == 0)) {
          FUN_00685458(lVar6);
          lVar2 = FUN_006e632c(param_1 + 0x58,&local_40);
          if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x18), lVar2 == 0)) {
                    /* try { // try from 006e61dc to 006e61f3 has its CatchHandler @ 006e62d8 */
            FUN_00675e64(&local_70,2,
                         "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/message.cc"
                         ,0x137);
                    /* try { // try from 006e61f4 to 006e6223 has its CatchHandler @ 006e62dc */
            uVar4 = FUN_00675a58(&local_70,"Type appears to be in generated pool but wasn\'t ");
            uVar4 = FUN_00675a58(uVar4,"registered: ");
            uVar4 = FUN_00675a80(uVar4,*(long *)(local_40 + 8) + 0x18);
                    /* try { // try from 006e6224 to 006e622b has its CatchHandler @ 006e62d4 */
            FUN_00675ac0(&uStack_71,uVar4);
            FUN_00675e7c(&local_70);
            lVar2 = 0;
          }
        }
        FUN_00715bf8(param_1 + 0x30);
        goto LAB_006e6294;
      }
      FUN_00675e64(&local_70,2,
                   "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/message.cc"
                   ,0x125);
                    /* try { // try from 006e625c to 006e627f has its CatchHandler @ 006e62f4 */
      uVar4 = FUN_00675a58(&local_70,"File appears to be in generated pool but wasn\'t registered: "
                          );
      uVar4 = FUN_00675a80(uVar4,*(undefined8 *)(*(long *)(local_40 + 0x10) + 8));
                    /* try { // try from 006e6280 to 006e6287 has its CatchHandler @ 006e62ec */
      FUN_00675ac0(&uStack_71,uVar4);
      FUN_00675e7c(&local_70);
    }
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x18);
    FUN_00715bf8(param_1 + 0x30);
    if (lVar2 != 0) goto LAB_006e6294;
    lVar6 = *(long *)(*(long *)(local_40 + 0x10) + 0x18);
    lVar2 = FUN_0068b994();
    if (lVar6 == lVar2) goto LAB_006e6154;
  }
  lVar2 = 0;
LAB_006e6294:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar2;
}


// ===== 006e632c  FUN_006e632c =====

long * FUN_006e632c(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar2 = *param_2;
    uVar9 = NEON_cnt(uVar3,1);
    uVar4 = ((ulong)(uint)((int)uVar2 << 3) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar4 = (uVar2 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar6 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) & 0xffffffff;
    if (uVar6 < 2) {
      uVar5 = uVar4 & uVar3 - 1;
    }
    else {
      uVar5 = uVar4;
      if (uVar3 <= uVar4) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar4 / uVar3;
        }
        uVar5 = uVar4 - uVar5 * uVar3;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        return (long *)0x0;
      }
      if (uVar6 < 2) {
        do {
          if (plVar7[1] == uVar4) {
            if (plVar7[2] == uVar2) {
              return plVar7;
            }
          }
          else if ((plVar7[1] & uVar3 - 1) != uVar5) {
            return (long *)0x0;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
        return (long *)0x0;
      }
      do {
        uVar6 = plVar7[1];
        if (uVar6 == uVar4) {
          if (plVar7[2] == uVar2) {
            return plVar7;
          }
        }
        else {
          if (uVar3 <= uVar6) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar6 / uVar3;
            }
            uVar6 = uVar6 - uVar1 * uVar3;
          }
          if (uVar6 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}


// ===== 006e643c  FUN_006e643c =====

long * FUN_006e643c(long *param_1,undefined8 *param_2)

{
  byte *__s2;
  size_t __n;
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  __s2 = (byte *)*param_2;
  __n = param_2[1];
  if ((long)__n < 1) {
    uVar7 = 0;
    uVar9 = param_1[1];
  }
  else {
    uVar7 = 0;
    pbVar4 = __s2;
    do {
      pbVar5 = pbVar4 + 1;
      uVar7 = uVar7 * 5 + (ulong)*pbVar4;
      pbVar4 = pbVar5;
    } while (pbVar5 < __s2 + __n);
    uVar9 = param_1[1];
  }
  if (uVar9 == 0) {
    return (long *)0x0;
  }
  uVar11 = NEON_cnt(uVar9,1);
  uVar10 = NEON_uaddlv(uVar11,1);
  uVar3 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
  if (uVar3 < 2) {
    uVar8 = uVar9 - 1 & uVar7;
  }
  else {
    uVar8 = uVar7;
    if (uVar9 <= uVar7) {
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar7 / uVar9;
      }
      uVar8 = uVar7 - uVar8 * uVar9;
    }
  }
  plVar6 = *(long **)(*param_1 + uVar8 * 8);
  if (plVar6 != (long *)0x0) {
    plVar6 = (long *)*plVar6;
    if (plVar6 != (long *)0x0) {
      if (uVar3 < 2) {
        do {
          if (plVar6[1] == uVar7) {
            if (plVar6[3] == __n) {
              if (__n == 0) {
                return plVar6;
              }
              if (__s2 == (byte *)plVar6[2]) {
                return plVar6;
              }
              iVar2 = memcmp((byte *)plVar6[2],__s2,__n);
              if (iVar2 == 0) {
                return plVar6;
              }
            }
          }
          else if ((plVar6[1] & uVar9 - 1) != uVar8) {
            return (long *)0x0;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar3 = plVar6[1];
          if (uVar3 == uVar7) {
            if (plVar6[3] == __n) {
              if (__n == 0) {
                return plVar6;
              }
              if (__s2 == (byte *)plVar6[2]) {
                return plVar6;
              }
              iVar2 = memcmp((byte *)plVar6[2],__s2,__n);
              if (iVar2 == 0) {
                return plVar6;
              }
            }
          }
          else {
            if (uVar9 <= uVar3) {
              uVar1 = 0;
              if (uVar9 != 0) {
                uVar1 = uVar3 / uVar9;
              }
              uVar3 = uVar3 - uVar1 * uVar9;
            }
            if (uVar3 != uVar8) {
              return (long *)0x0;
            }
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
    return plVar6;
  }
  return (long *)0x0;
}


// ===== 006e65e8  FUN_006e65e8 =====

undefined1  [16] FUN_006e65e8(long *param_1,undefined8 *param_2,long *param_3)

{
  byte *__s2;
  size_t __n;
  int iVar1;
  long lVar2;
  long *plVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x26;
  undefined2 uVar13;
  undefined8 uVar14;
  float fVar15;
  long lVar16;
  undefined1 auVar17 [16];
  
  __s2 = (byte *)*param_2;
  __n = param_2[1];
  uVar11 = 0;
  if (0 < (long)__n) {
    pbVar4 = __s2;
    do {
      pbVar5 = pbVar4 + 1;
      uVar11 = uVar11 * 5 + (ulong)*pbVar4;
      pbVar4 = pbVar5;
    } while (pbVar5 < __s2 + __n);
  }
  uVar12 = param_1[1];
  if (uVar12 != 0) {
    uVar14 = NEON_cnt(uVar12,1);
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar7 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    if (uVar7 < 2) {
      unaff_x26 = uVar12 - 1 & uVar11;
    }
    else {
      unaff_x26 = uVar11;
      if (uVar12 <= uVar11) {
        uVar8 = 0;
        if (uVar12 != 0) {
          uVar8 = uVar11 / uVar12;
        }
        unaff_x26 = uVar11 - uVar8 * uVar12;
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + unaff_x26 * 8);
    if ((puVar6 != (undefined8 *)0x0) && (plVar10 = (long *)*puVar6, plVar10 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar10[1] == uVar11) {
            if ((plVar10[3] == __n) &&
               (((__n == 0 || (__s2 == (byte *)plVar10[2])) ||
                (iVar1 = memcmp((byte *)plVar10[2],__s2,__n), iVar1 == 0)))) goto LAB_006e674c;
          }
          else if ((plVar10[1] & uVar12 - 1) != unaff_x26) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar10[1];
          if (uVar7 == uVar11) {
            if ((plVar10[3] == __n) &&
               (((__n == 0 || (__s2 == (byte *)plVar10[2])) ||
                (iVar1 = memcmp((byte *)plVar10[2],__s2,__n), iVar1 == 0)))) goto LAB_006e674c;
          }
          else {
            if (uVar12 <= uVar7) {
              uVar8 = 0;
              if (uVar12 != 0) {
                uVar8 = uVar7 / uVar12;
              }
              uVar7 = uVar7 - uVar8 * uVar12;
            }
            if (uVar7 != unaff_x26) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  plVar10 = (long *)FUN_00759c3c(0x28);
  lVar2 = param_1[3];
  lVar16 = param_3[1];
  lVar9 = *param_3;
  *plVar10 = 0;
  plVar10[1] = uVar11;
  plVar10[3] = lVar16;
  plVar10[2] = lVar9;
  fVar15 = *(float *)(param_1 + 4);
  plVar10[4] = param_3[2];
  if ((uVar12 == 0) || (fVar15 * (float)uVar12 < (float)(lVar2 + 1))) {
    if (uVar12 < 3) {
      uVar7 = 1;
    }
    else {
      uVar7 = (ulong)((uVar12 & uVar12 - 1) != 0);
    }
    uVar7 = uVar7 | uVar12 << 1;
    uVar8 = (ulong)((float)(lVar2 + 1) / fVar15);
    if (uVar7 <= uVar8) {
      uVar7 = uVar8;
    }
    if (uVar7 - 1 == 0) {
      uVar7 = 2;
    }
    else if ((uVar7 & uVar7 - 1) != 0) {
                    /* try { // try from 006e67ec to 006e686f has its CatchHandler @ 006e6940 */
      uVar7 = FUN_00711ce0(uVar7);
      uVar12 = param_1[1];
    }
    if (uVar12 < uVar7) {
LAB_006e6804:
      FUN_006e6954(param_1,uVar7);
    }
    else if (uVar7 < uVar12) {
      uVar8 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar12 < 3) {
LAB_006e686c:
        uVar8 = FUN_00711ce0();
      }
      else {
        uVar14 = NEON_cnt(uVar12,1);
        uVar13 = NEON_uaddlv(uVar14,1);
        if (1 < (CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff)) goto LAB_006e686c;
        if (1 < uVar8) {
          uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
        }
      }
      if (uVar7 <= uVar8) {
        uVar7 = uVar8;
      }
      if (uVar7 < uVar12) goto LAB_006e6804;
    }
    uVar12 = param_1[1];
    if ((uVar12 & uVar12 - 1) == 0) {
      unaff_x26 = uVar12 - 1 & uVar11;
    }
    else {
      unaff_x26 = uVar11;
      if (uVar12 <= uVar11) {
        uVar7 = 0;
        if (uVar12 != 0) {
          uVar7 = uVar11 / uVar12;
        }
        unaff_x26 = uVar11 - uVar7 * uVar12;
      }
    }
  }
  lVar2 = *param_1;
  plVar3 = *(long **)(lVar2 + unaff_x26 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 2;
    lVar9 = *plVar3;
    *plVar3 = (long)plVar10;
    *plVar10 = lVar9;
    *(long **)(lVar2 + unaff_x26 * 8) = plVar3;
    if (*plVar10 != 0) {
      uVar11 = *(ulong *)(*plVar10 + 8);
      if ((uVar12 & uVar12 - 1) == 0) {
        uVar11 = uVar11 & uVar12 - 1;
      }
      else if (uVar12 <= uVar11) {
        uVar7 = 0;
        if (uVar12 != 0) {
          uVar7 = uVar11 / uVar12;
        }
        uVar11 = uVar11 - uVar7 * uVar12;
      }
      plVar3 = (long *)(*param_1 + uVar11 * 8);
      goto LAB_006e690c;
    }
  }
  else {
    *plVar10 = *plVar3;
LAB_006e690c:
    *plVar3 = (long)plVar10;
  }
  uVar14 = 1;
  param_1[3] = param_1[3] + 1;
LAB_006e6920:
  auVar17._8_8_ = uVar14;
  auVar17._0_8_ = plVar10;
  return auVar17;
LAB_006e674c:
  uVar14 = 0;
  goto LAB_006e6920;
}


// ===== 006e6954  FUN_006e6954 =====

void FUN_006e6954(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar3 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar3 != (void *)0x0) {
      free(pvVar3);
    }
    param_1[1] = 0;
    return;
  }
  if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  lVar2 = FUN_00759c3c(param_2 << 3);
  pvVar3 = (void *)*param_1;
  *param_1 = lVar2;
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
  }
  uVar4 = 0;
  param_1[1] = param_2;
  do {
    *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
    uVar4 = uVar4 + 1;
  } while (param_2 != uVar4);
  plVar6 = param_1 + 2;
  plVar5 = (long *)*plVar6;
  if (plVar5 == (long *)0x0) {
    return;
  }
  uVar4 = plVar5[1];
  uVar10 = NEON_cnt(param_2,1);
  uVar9 = NEON_uaddlv(uVar10,1);
  uVar8 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
  if (uVar8 < 2) {
    uVar4 = uVar4 & param_2 - 1;
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
  }
  else {
    if (param_2 <= uVar4) {
      uVar1 = 0;
      if (param_2 != 0) {
        uVar1 = uVar4 / param_2;
      }
      uVar4 = uVar4 - uVar1 * param_2;
    }
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
    if (1 < uVar8) {
      do {
        while( true ) {
          uVar8 = plVar6[1];
          if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          if (uVar8 != uVar4) break;
LAB_006e6ad8:
          plVar5 = plVar6;
          plVar6 = (long *)*plVar5;
          if (plVar6 == (long *)0x0) {
            return;
          }
        }
        if (*(long *)(*param_1 + uVar8 * 8) != 0) {
          *plVar5 = *plVar6;
          *plVar6 = **(long **)(*param_1 + uVar8 * 8);
          **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
          plVar6 = plVar5;
          goto LAB_006e6ad8;
        }
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        plVar7 = (long *)*plVar6;
        plVar5 = plVar6;
        uVar4 = uVar8;
        plVar6 = plVar7;
        if (plVar7 == (long *)0x0) {
          return;
        }
      } while( true );
    }
  }
  do {
    uVar8 = plVar6[1] & param_2 - 1;
    if (uVar8 != uVar4) {
      if (*(long *)(*param_1 + uVar8 * 8) == 0) {
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        uVar4 = uVar8;
      }
      else {
        *plVar5 = *plVar6;
        *plVar6 = **(long **)(*param_1 + uVar8 * 8);
        **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
        plVar6 = plVar5;
      }
    }
    plVar7 = (long *)*plVar6;
    plVar5 = plVar6;
    plVar6 = plVar7;
  } while (plVar7 != (long *)0x0);
  return;
}


// ===== 006e6b2c  FUN_006e6b2c =====

undefined1  [16] FUN_006e6b2c(long *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x24;
  undefined2 uVar10;
  undefined8 uVar11;
  float fVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  uVar2 = *param_2;
  uVar8 = param_1[1];
  uVar4 = ((ulong)(uint)((int)uVar2 << 3) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  uVar4 = (uVar2 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
  uVar4 = uVar4 ^ uVar4 >> 0x2f;
  uVar9 = uVar4 * -0x622015f714c7d297;
  if (uVar8 != 0) {
    uVar11 = NEON_cnt(uVar8,1);
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar6 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar6 < 2) {
      unaff_x24 = uVar9 & uVar8 - 1;
    }
    else {
      unaff_x24 = uVar9;
      if (uVar8 <= uVar9) {
        uVar1 = 0;
        if (uVar8 != 0) {
          uVar1 = uVar9 / uVar8;
        }
        unaff_x24 = uVar9 - uVar1 * uVar8;
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar5[1] == uVar9) {
            if (plVar5[2] == uVar2) {
LAB_006e6c58:
              auVar14._8_8_ = 0;
              auVar14._0_8_ = plVar5;
              return auVar14;
            }
          }
          else if ((plVar5[1] & uVar8 - 1) != unaff_x24) break;
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar5[1];
          if (uVar6 == uVar9) {
            if (plVar5[2] == uVar2) goto LAB_006e6c58;
          }
          else {
            if (uVar8 <= uVar6) {
              uVar1 = 0;
              if (uVar8 != 0) {
                uVar1 = uVar6 / uVar8;
              }
              uVar6 = uVar6 - uVar1 * uVar8;
            }
            if (uVar6 != unaff_x24) break;
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
  auVar15._0_8_ = (long *)FUN_00759c3c(0x20);
  lVar3 = param_1[3];
  lVar13 = param_3[1];
  lVar7 = *param_3;
  fVar12 = *(float *)(param_1 + 4);
  *auVar15._0_8_ = 0;
  auVar15._0_8_[1] = uVar9;
  auVar15._0_8_[3] = lVar13;
  auVar15._0_8_[2] = lVar7;
  if ((uVar8 == 0) || (fVar12 * (float)uVar8 < (float)(lVar3 + 1))) {
    if (uVar8 < 3) {
      uVar2 = 1;
    }
    else {
      uVar2 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar2 = uVar2 | uVar8 << 1;
    uVar6 = (ulong)((float)(lVar3 + 1) / fVar12);
    if (uVar2 <= uVar6) {
      uVar2 = uVar6;
    }
    if (uVar2 - 1 == 0) {
      uVar2 = 2;
    }
    else if ((uVar2 & uVar2 - 1) != 0) {
                    /* try { // try from 006e6d14 to 006e6d97 has its CatchHandler @ 006e6e74 */
      uVar2 = FUN_00711ce0(uVar2);
      uVar8 = param_1[1];
    }
    if (uVar8 < uVar2) {
LAB_006e6d2c:
      FUN_006e6e88(param_1,uVar2);
    }
    else if (uVar2 < uVar8) {
      uVar6 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar8 < 3) {
LAB_006e6d94:
        uVar6 = FUN_00711ce0();
      }
      else {
        uVar11 = NEON_cnt(uVar8,1);
        uVar10 = NEON_uaddlv(uVar11,1);
        if (1 < (CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff)) goto LAB_006e6d94;
        if (1 < uVar6) {
          uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
        }
      }
      if (uVar2 <= uVar6) {
        uVar2 = uVar6;
      }
      if (uVar2 < uVar8) goto LAB_006e6d2c;
    }
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & uVar9;
      lVar3 = *param_1;
      plVar5 = *(long **)(lVar3 + unaff_x24 * 8);
      goto joined_r0x006e6e10;
    }
    if (uVar9 < uVar8) {
      lVar3 = *param_1;
      plVar5 = *(long **)(lVar3 + uVar4 * -0x1100afb8a63e94b8);
      unaff_x24 = uVar9;
      goto joined_r0x006e6e10;
    }
    uVar2 = 0;
    if (uVar8 != 0) {
      uVar2 = uVar9 / uVar8;
    }
    unaff_x24 = uVar9 - uVar2 * uVar8;
    lVar3 = *param_1;
    plVar5 = *(long **)(lVar3 + unaff_x24 * 8);
    if (plVar5 == (long *)0x0) goto LAB_006e6dc8;
LAB_006e6cbc:
    *auVar15._0_8_ = *plVar5;
  }
  else {
    lVar3 = *param_1;
    plVar5 = *(long **)(lVar3 + unaff_x24 * 8);
joined_r0x006e6e10:
    if (plVar5 != (long *)0x0) goto LAB_006e6cbc;
LAB_006e6dc8:
    plVar5 = param_1 + 2;
    lVar7 = *plVar5;
    *plVar5 = (long)auVar15._0_8_;
    *auVar15._0_8_ = lVar7;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar5;
    if (*auVar15._0_8_ == 0) goto LAB_006e6e4c;
    uVar2 = *(ulong *)(*auVar15._0_8_ + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar2 = uVar2 & uVar8 - 1;
    }
    else if (uVar8 <= uVar2) {
      uVar4 = 0;
      if (uVar8 != 0) {
        uVar4 = uVar2 / uVar8;
      }
      uVar2 = uVar2 - uVar4 * uVar8;
    }
    plVar5 = (long *)(*param_1 + uVar2 * 8);
  }
  *plVar5 = (long)auVar15._0_8_;
LAB_006e6e4c:
  param_1[3] = param_1[3] + 1;
  auVar15._8_8_ = 1;
  return auVar15;
}


// ===== 006e6e88  FUN_006e6e88 =====

void FUN_006e6e88(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar3 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar3 != (void *)0x0) {
      free(pvVar3);
    }
    param_1[1] = 0;
    return;
  }
  if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  lVar2 = FUN_00759c3c(param_2 << 3);
  pvVar3 = (void *)*param_1;
  *param_1 = lVar2;
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
  }
  uVar4 = 0;
  param_1[1] = param_2;
  do {
    *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
    uVar4 = uVar4 + 1;
  } while (param_2 != uVar4);
  plVar6 = param_1 + 2;
  plVar5 = (long *)*plVar6;
  if (plVar5 == (long *)0x0) {
    return;
  }
  uVar4 = plVar5[1];
  uVar10 = NEON_cnt(param_2,1);
  uVar9 = NEON_uaddlv(uVar10,1);
  uVar8 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
  if (uVar8 < 2) {
    uVar4 = uVar4 & param_2 - 1;
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
  }
  else {
    if (param_2 <= uVar4) {
      uVar1 = 0;
      if (param_2 != 0) {
        uVar1 = uVar4 / param_2;
      }
      uVar4 = uVar4 - uVar1 * param_2;
    }
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
    if (1 < uVar8) {
      do {
        while( true ) {
          uVar8 = plVar6[1];
          if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          if (uVar8 != uVar4) break;
LAB_006e700c:
          plVar5 = plVar6;
          plVar6 = (long *)*plVar5;
          if (plVar6 == (long *)0x0) {
            return;
          }
        }
        if (*(long *)(*param_1 + uVar8 * 8) != 0) {
          *plVar5 = *plVar6;
          *plVar6 = **(long **)(*param_1 + uVar8 * 8);
          **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
          plVar6 = plVar5;
          goto LAB_006e700c;
        }
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        plVar7 = (long *)*plVar6;
        plVar5 = plVar6;
        uVar4 = uVar8;
        plVar6 = plVar7;
        if (plVar7 == (long *)0x0) {
          return;
        }
      } while( true );
    }
  }
  do {
    uVar8 = plVar6[1] & param_2 - 1;
    if (uVar8 != uVar4) {
      if (*(long *)(*param_1 + uVar8 * 8) == 0) {
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        uVar4 = uVar8;
      }
      else {
        *plVar5 = *plVar6;
        *plVar6 = **(long **)(*param_1 + uVar8 * 8);
        **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
        plVar6 = plVar5;
      }
    }
    plVar7 = (long *)*plVar6;
    plVar5 = plVar6;
    plVar6 = plVar7;
  } while (plVar7 != (long *)0x0);
  return;
}


// ===== 006e7060  FUN_006e7060 =====

bool FUN_006e7060(undefined8 param_1,int *param_2)

{
  return *param_2 == 0;
}


// ===== 006e7070  FUN_006e7070 =====

undefined4 FUN_006e7070(undefined8 param_1,undefined4 *param_2)

{
  return *param_2;
}


// ===== 006e7078  FUN_006e7078 =====

void FUN_006e7078(long *param_1,long param_2,int param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006e708c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))(param_1,*(long *)(param_2 + 8) + (long)param_3 * 4,param_4);
  return;
}


// ===== 006e7090  FUN_006e7090 =====

void FUN_006e7090(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return;
}


// ===== 006e7098  FUN_006e7098 =====

void FUN_006e7098(long *param_1,long param_2,int param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x80))((int)param_1,param_4);
  *(undefined4 *)(*(long *)(param_2 + 8) + (long)param_3 * 4) = uVar1;
  return;
}


// ===== 006e70d0  FUN_006e70d0 =====

void FUN_006e70d0(long *param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x80))(param_1,param_3);
  uVar1 = *param_2;
  if (uVar1 == param_2[1]) {
    FUN_00673968(param_2,uVar1 + 1);
    *(undefined4 *)(*(long *)(param_2 + 2) + (ulong)uVar1 * 4) = uVar2;
    *param_2 = uVar1 + 1;
    return;
  }
  *(undefined4 *)(*(long *)(param_2 + 2) + (ulong)uVar1 * 4) = uVar2;
  *param_2 = uVar1 + 1;
  return;
}


// ===== 006e7150  FUN_006e7150 =====

void FUN_006e7150(undefined8 param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  return;
}


// ===== 006e7160  FUN_006e7160 =====

void FUN_006e7160(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00673d24(param_2,param_3,param_4);
  return;
}


// ===== 006e7170  FUN_006e7170 =====

void FUN_006e7170(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != param_3) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/reflection_internal.h"
                 ,0x118);
                    /* try { // try from 006e71b8 to 006e71cb has its CatchHandler @ 006e7210 */
    uVar2 = FUN_00675a58(auStack_68,"CHECK failed: this == other_mutator: ");
                    /* try { // try from 006e71cc to 006e71d3 has its CatchHandler @ 006e720c */
    FUN_00675ac0(&uStack_69,uVar2);
    FUN_00675e7c(auStack_68);
  }
  FUN_00673ba8(param_2,param_4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e7238  FUN_006e7238 =====

undefined8 FUN_006e7238(void)

{
  return 0;
}


// ===== 006e7240  FUN_006e7240 =====

long FUN_006e7240(long *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 8))();
  return (long)iVar1;
}


// ===== 006e7260  FUN_006e7260 =====

undefined8 FUN_006e7260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}


// ===== 006e7268  FUN_006e7268 =====

long FUN_006e7268(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 + 1;
}


// ===== 006e7270  FUN_006e7270 =====

bool FUN_006e7270(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  return param_3 == param_4;
}


// ===== 006e727c  FUN_006e727c =====

void FUN_006e727c(void)

{
  return;
}


// ===== 006e7280  FUN_006e7280 =====

void FUN_006e7280(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006e7288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}


// ===== 006e728c  FUN_006e728c =====

undefined4 FUN_006e728c(undefined8 param_1,undefined4 *param_2)

{
  return *param_2;
}


// ===== 006e7294  FUN_006e7294 =====

undefined8 FUN_006e7294(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}


// ===== 006e729c  FUN_006e729c =====

bool FUN_006e729c(undefined8 param_1,int *param_2)

{
  return *param_2 == 0;
}


// ===== 006e72ac  FUN_006e72ac =====

undefined4 FUN_006e72ac(undefined8 param_1,undefined4 *param_2)

{
  return *param_2;
}


// ===== 006e72b4  FUN_006e72b4 =====

void FUN_006e72b4(long *param_1,long param_2,int param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006e72c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))(param_1,*(long *)(param_2 + 8) + (long)param_3 * 4,param_4);
  return;
}


// ===== 006e72cc  FUN_006e72cc =====

void FUN_006e72cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return;
}


// ===== 006e72d4  FUN_006e72d4 =====

void FUN_006e72d4(long *param_1,long param_2,int param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x80))((int)param_1,param_4);
  *(undefined4 *)(*(long *)(param_2 + 8) + (long)param_3 * 4) = uVar1;
  return;
}


// ===== 006e730c  FUN_006e730c =====

void FUN_006e730c(long *param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x80))(param_1,param_3);
  uVar1 = *param_2;
  if (uVar1 == param_2[1]) {
    FUN_00673da8(param_2,uVar1 + 1);
    *(undefined4 *)(*(long *)(param_2 + 2) + (ulong)uVar1 * 4) = uVar2;
    *param_2 = uVar1 + 1;
    return;
  }
  *(undefined4 *)(*(long *)(param_2 + 2) + (ulong)uVar1 * 4) = uVar2;
  *param_2 = uVar1 + 1;
  return;
}


// ===== 006e738c  FUN_006e738c =====

void FUN_006e738c(undefined8 param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  return;
}


// ===== 006e739c  FUN_006e739c =====

void FUN_006e739c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00674164(param_2,param_3,param_4);
  return;
}


// ===== 006e73ac  FUN_006e73ac =====

void FUN_006e73ac(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != param_3) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/reflection_internal.h"
                 ,0x118);
                    /* try { // try from 006e73f4 to 006e7407 has its CatchHandler @ 006e744c */
    uVar2 = FUN_00675a58(auStack_68,"CHECK failed: this == other_mutator: ");
                    /* try { // try from 006e7408 to 006e740f has its CatchHandler @ 006e7448 */
    FUN_00675ac0(&uStack_69,uVar2);
    FUN_00675e7c(auStack_68);
  }
  FUN_00673fe8(param_2,param_4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e7474  FUN_006e7474 =====

undefined4 FUN_006e7474(undefined8 param_1,undefined4 *param_2)

{
  return *param_2;
}


// ===== 006e747c  FUN_006e747c =====

undefined8 FUN_006e747c(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}


// ===== 006e7484  FUN_006e7484 =====

bool FUN_006e7484(undefined8 param_1,int *param_2)

{
  return *param_2 == 0;
}


// ===== 006e7494  FUN_006e7494 =====

undefined4 FUN_006e7494(undefined8 param_1,undefined4 *param_2)

{
  return *param_2;
}


// ===== 006e749c  FUN_006e749c =====

void FUN_006e749c(long *param_1,long param_2,int param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006e74b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))(param_1,*(long *)(param_2 + 8) + (long)param_3 * 8,param_4);
  return;
}


// ===== 006e74b4  FUN_006e74b4 =====

void FUN_006e74b4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return;
}


// ===== 006e74bc  FUN_006e74bc =====

void FUN_006e74bc(long *param_1,long param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x80))(param_1,param_4);
  *(undefined8 *)(*(long *)(param_2 + 8) + (long)param_3 * 8) = uVar1;
  return;
}


// ===== 006e74f4  FUN_006e74f4 =====

void FUN_006e74f4(long *param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x80))(param_1,param_3);
  uVar1 = *param_2;
  if (uVar1 == param_2[1]) {
    FUN_006741e8(param_2,uVar1 + 1);
    *(undefined8 *)(*(long *)(param_2 + 2) + (ulong)uVar1 * 8) = uVar2;
    *param_2 = uVar1 + 1;
    return;
  }
  *(undefined8 *)(*(long *)(param_2 + 2) + (ulong)uVar1 * 8) = uVar2;
  *param_2 = uVar1 + 1;
  return;
}


// ===== 006e7574  FUN_006e7574 =====

void FUN_006e7574(undefined8 param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  return;
}


// ===== 006e7584  FUN_006e7584 =====

void FUN_006e7584(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_006745a8(param_2,param_3,param_4);
  return;
}


// ===== 006e7594  FUN_006e7594 =====

void FUN_006e7594(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != param_3) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/reflection_internal.h"
                 ,0x118);
                    /* try { // try from 006e75dc to 006e75ef has its CatchHandler @ 006e7634 */
    uVar2 = FUN_00675a58(auStack_68,"CHECK failed: this == other_mutator: ");
                    /* try { // try from 006e75f0 to 006e75f7 has its CatchHandler @ 006e7630 */
    FUN_00675ac0(&uStack_69,uVar2);
    FUN_00675e7c(auStack_68);
  }
  FUN_0067442c(param_2,param_4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e765c  FUN_006e765c =====

undefined8 FUN_006e765c(undefined8 param_1,undefined8 *param_2)

{
  return *param_2;
}


// ===== 006e7664  FUN_006e7664 =====

undefined8 FUN_006e7664(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}


// ===== 006e766c  FUN_006e766c =====

bool FUN_006e766c(undefined8 param_1,int *param_2)

{
  return *param_2 == 0;
}


// ===== 006e767c  FUN_006e767c =====

undefined4 FUN_006e767c(undefined8 param_1,undefined4 *param_2)

{
  return *param_2;
}


// ===== 006e7684  FUN_006e7684 =====

void FUN_006e7684(long *param_1,long param_2,int param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006e7698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))(param_1,*(long *)(param_2 + 8) + (long)param_3 * 8,param_4);
  return;
}


// ===== 006e769c  FUN_006e769c =====

void FUN_006e769c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return;
}


// ===== 006e76a4  FUN_006e76a4 =====

void FUN_006e76a4(long *param_1,long param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x80))(param_1,param_4);
  *(undefined8 *)(*(long *)(param_2 + 8) + (long)param_3 * 8) = uVar1;
  return;
}


// ===== 006e76dc  FUN_006e76dc =====

void FUN_006e76dc(long *param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x80))(param_1,param_3);
  uVar1 = *param_2;
  if (uVar1 == param_2[1]) {
    FUN_0067462c(param_2,uVar1 + 1);
    *(undefined8 *)(*(long *)(param_2 + 2) + (ulong)uVar1 * 8) = uVar2;
    *param_2 = uVar1 + 1;
    return;
  }
  *(undefined8 *)(*(long *)(param_2 + 2) + (ulong)uVar1 * 8) = uVar2;
  *param_2 = uVar1 + 1;
  return;
}


// ===== 006e775c  FUN_006e775c =====

void FUN_006e775c(undefined8 param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  return;
}


// ===== 006e776c  FUN_006e776c =====

void FUN_006e776c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_006749ec(param_2,param_3,param_4);
  return;
}


// ===== 006e777c  FUN_006e777c =====

void FUN_006e777c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != param_3) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/reflection_internal.h"
                 ,0x118);
                    /* try { // try from 006e77c4 to 006e77d7 has its CatchHandler @ 006e781c */
    uVar2 = FUN_00675a58(auStack_68,"CHECK failed: this == other_mutator: ");
                    /* try { // try from 006e77d8 to 006e77df has its CatchHandler @ 006e7818 */
    FUN_00675ac0(&uStack_69,uVar2);
    FUN_00675e7c(auStack_68);
  }
  FUN_00674870(param_2,param_4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e7844  FUN_006e7844 =====

undefined8 FUN_006e7844(undefined8 param_1,undefined8 *param_2)

{
  return *param_2;
}


// ===== 006e784c  FUN_006e784c =====

undefined8 FUN_006e784c(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}


// ===== 006e7854  FUN_006e7854 =====

bool FUN_006e7854(undefined8 param_1,int *param_2)

{
  return *param_2 == 0;
}


// ===== 006e7864  FUN_006e7864 =====

undefined4 FUN_006e7864(undefined8 param_1,undefined4 *param_2)

{
  return *param_2;
}


// ===== 006e786c  FUN_006e786c =====

void FUN_006e786c(long *param_1,long param_2,int param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006e7880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))(param_1,*(long *)(param_2 + 8) + (long)param_3 * 4,param_4);
  return;
}


// ===== 006e7884  FUN_006e7884 =====

void FUN_006e7884(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return;
}


// ===== 006e788c  FUN_006e788c =====

void FUN_006e788c(long *param_1,long param_2,int param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x80))(param_1,param_4);
  *(undefined4 *)(*(long *)(param_2 + 8) + (long)param_3 * 4) = uVar1;
  return;
}


// ===== 006e78c4  FUN_006e78c4 =====

void FUN_006e78c4(long *param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x80))(param_1,param_3);
  uVar1 = *param_2;
  if (uVar1 == param_2[1]) {
    FUN_00674a70(param_2,uVar1 + 1);
    *(undefined4 *)(*(long *)(param_2 + 2) + (ulong)uVar1 * 4) = uVar2;
    *param_2 = uVar1 + 1;
    return;
  }
  *(undefined4 *)(*(long *)(param_2 + 2) + (ulong)uVar1 * 4) = uVar2;
  *param_2 = uVar1 + 1;
  return;
}


// ===== 006e7950  FUN_006e7950 =====

void FUN_006e7950(undefined8 param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  return;
}


// ===== 006e7960  FUN_006e7960 =====

void FUN_006e7960(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00674e2c(param_2,param_3,param_4);
  return;
}


// ===== 006e7970  FUN_006e7970 =====

void FUN_006e7970(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != param_3) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/reflection_internal.h"
                 ,0x118);
                    /* try { // try from 006e79b8 to 006e79cb has its CatchHandler @ 006e7a10 */
    uVar2 = FUN_00675a58(auStack_68,"CHECK failed: this == other_mutator: ");
                    /* try { // try from 006e79cc to 006e79d3 has its CatchHandler @ 006e7a0c */
    FUN_00675ac0(&uStack_69,uVar2);
    FUN_00675e7c(auStack_68);
  }
  FUN_00674cb0(param_2,param_4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e7a38  FUN_006e7a38 =====

undefined4 FUN_006e7a38(undefined8 param_1,undefined4 *param_2)

{
  return *param_2;
}


// ===== 006e7a40  FUN_006e7a40 =====

undefined8 FUN_006e7a40(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}


// ===== 006e7a48  FUN_006e7a48 =====

bool FUN_006e7a48(undefined8 param_1,int *param_2)

{
  return *param_2 == 0;
}


// ===== 006e7a58  FUN_006e7a58 =====

undefined4 FUN_006e7a58(undefined8 param_1,undefined4 *param_2)

{
  return *param_2;
}


// ===== 006e7a60  FUN_006e7a60 =====

void FUN_006e7a60(long *param_1,long param_2,int param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006e7a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))(param_1,*(long *)(param_2 + 8) + (long)param_3 * 8,param_4);
  return;
}


// ===== 006e7a78  FUN_006e7a78 =====

void FUN_006e7a78(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return;
}


// ===== 006e7a80  FUN_006e7a80 =====

void FUN_006e7a80(long *param_1,long param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x80))(param_1,param_4);
  *(undefined8 *)(*(long *)(param_2 + 8) + (long)param_3 * 8) = uVar1;
  return;
}


// ===== 006e7ab8  FUN_006e7ab8 =====

void FUN_006e7ab8(long *param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x80))(param_1,param_3);
  uVar1 = *param_2;
  if (uVar1 == param_2[1]) {
    FUN_00674eb0(param_2,uVar1 + 1);
    *(undefined8 *)(*(long *)(param_2 + 2) + (ulong)uVar1 * 8) = uVar2;
    *param_2 = uVar1 + 1;
    return;
  }
  *(undefined8 *)(*(long *)(param_2 + 2) + (ulong)uVar1 * 8) = uVar2;
  *param_2 = uVar1 + 1;
  return;
}


// ===== 006e7b44  FUN_006e7b44 =====

void FUN_006e7b44(undefined8 param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  return;
}


// ===== 006e7b54  FUN_006e7b54 =====

void FUN_006e7b54(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00675270(param_2,param_3,param_4);
  return;
}


// ===== 006e7b64  FUN_006e7b64 =====

void FUN_006e7b64(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != param_3) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/reflection_internal.h"
                 ,0x118);
                    /* try { // try from 006e7bac to 006e7bbf has its CatchHandler @ 006e7c04 */
    uVar2 = FUN_00675a58(auStack_68,"CHECK failed: this == other_mutator: ");
                    /* try { // try from 006e7bc0 to 006e7bc7 has its CatchHandler @ 006e7c00 */
    FUN_00675ac0(&uStack_69,uVar2);
    FUN_00675e7c(auStack_68);
  }
  FUN_006750f4(param_2,param_4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e7c2c  FUN_006e7c2c =====

undefined1  [16] FUN_006e7c2c(undefined8 param_1,ulong *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *param_2;
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 006e7c34  FUN_006e7c34 =====

undefined8 FUN_006e7c34(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}


// ===== 006e7c3c  FUN_006e7c3c =====

bool FUN_006e7c3c(undefined8 param_1,int *param_2)

{
  return *param_2 == 0;
}


// ===== 006e7c4c  FUN_006e7c4c =====

undefined4 FUN_006e7c4c(undefined8 param_1,undefined4 *param_2)

{
  return *param_2;
}


// ===== 006e7c54  FUN_006e7c54 =====

void FUN_006e7c54(long *param_1,long param_2,int param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006e7c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))(param_1,*(long *)(param_2 + 8) + (long)param_3,param_4);
  return;
}


// ===== 006e7c6c  FUN_006e7c6c =====

void FUN_006e7c6c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return;
}


// ===== 006e7c74  FUN_006e7c74 =====

void FUN_006e7c74(long *param_1,long param_2,int param_3,undefined8 param_4)

{
  byte bVar1;
  
  bVar1 = (**(code **)(*param_1 + 0x80))((int)param_1,param_4);
  *(byte *)(*(long *)(param_2 + 8) + (long)param_3) = bVar1 & 1;
  return;
}


// ===== 006e7cb0  FUN_006e7cb0 =====

void FUN_006e7cb0(long *param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = (**(code **)(*param_1 + 0x80))(param_1,param_3);
  uVar1 = *param_2;
  if (uVar1 == param_2[1]) {
    FUN_0067353c(param_2,uVar1 + 1);
    *(byte *)(*(long *)(param_2 + 2) + (ulong)uVar1) = bVar2 & 1;
    *param_2 = uVar1 + 1;
    return;
  }
  *(byte *)(*(long *)(param_2 + 2) + (ulong)uVar1) = bVar2 & 1;
  *param_2 = uVar1 + 1;
  return;
}


// ===== 006e7d30  FUN_006e7d30 =====

void FUN_006e7d30(undefined8 param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  return;
}


// ===== 006e7d40  FUN_006e7d40 =====

void FUN_006e7d40(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_006738ec(param_2,param_3,param_4);
  return;
}


// ===== 006e7d50  FUN_006e7d50 =====

void FUN_006e7d50(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != param_3) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/reflection_internal.h"
                 ,0x118);
                    /* try { // try from 006e7d98 to 006e7dab has its CatchHandler @ 006e7df0 */
    uVar2 = FUN_00675a58(auStack_68,"CHECK failed: this == other_mutator: ");
                    /* try { // try from 006e7dac to 006e7db3 has its CatchHandler @ 006e7dec */
    FUN_00675ac0(&uStack_69,uVar2);
    FUN_00675e7c(auStack_68);
  }
  FUN_00673778(param_2,param_4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e7e18  FUN_006e7e18 =====

undefined1 FUN_006e7e18(undefined8 param_1,undefined1 *param_2)

{
  return *param_2;
}


// ===== 006e7e20  FUN_006e7e20 =====

undefined8 FUN_006e7e20(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}


// ===== 006e7e28  FUN_006e7e28 =====

bool FUN_006e7e28(undefined8 param_1,long param_2)

{
  return *(int *)(param_2 + 8) == 0;
}


// ===== 006e7e38  FUN_006e7e38 =====

undefined4 FUN_006e7e38(undefined8 param_1,long param_2)

{
  return *(undefined4 *)(param_2 + 8);
}


// ===== 006e7e40  FUN_006e7e40 =====

void FUN_006e7e40(long *param_1,long param_2,int param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006e7e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))
            (param_1,*(undefined8 *)(*(long *)(param_2 + 0x10) + (long)param_3 * 8 + 8),param_4);
  return;
}


// ===== 006e7e5c  FUN_006e7e5c =====

void FUN_006e7e5c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  
  uVar1 = (ulong)*(uint *)(param_2 + 8);
  if (0 < (int)*(uint *)(param_2 + 8)) {
    puVar2 = (undefined8 *)(*(long *)(param_2 + 0x10) + 8);
    do {
      while (pbVar3 = (byte *)*puVar2, (*pbVar3 & 1) != 0) {
        **(undefined1 **)(pbVar3 + 0x10) = 0;
        pbVar3[8] = 0;
        pbVar3[9] = 0;
        pbVar3[10] = 0;
        pbVar3[0xb] = 0;
        pbVar3[0xc] = 0;
        pbVar3[0xd] = 0;
        pbVar3[0xe] = 0;
        pbVar3[0xf] = 0;
        uVar1 = uVar1 - 1;
        puVar2 = puVar2 + 1;
        if (uVar1 == 0) goto LAB_006e7ea8;
      }
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      uVar1 = uVar1 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar1 != 0);
LAB_006e7ea8:
    *(undefined4 *)(param_2 + 8) = 0;
  }
  return;
}


// ===== 006e7eb0  FUN_006e7eb0 =====

void FUN_006e7eb0(long *param_1,long param_2,int param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006e7ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))
            (param_1,param_4,*(undefined8 *)(*(long *)(param_2 + 0x10) + (long)param_3 * 8 + 8));
  return;
}


// ===== 006e7ecc  FUN_006e7ecc =====

void FUN_006e7ecc(long *param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  uVar3 = (**(code **)(*param_1 + 0x80))(param_1,param_3);
  (**(code **)(*param_1 + 0x88))(param_1,param_3,uVar3);
  if ((*param_2 == 0) && (piVar4 = (int *)param_2[2], piVar4 != (int *)0x0)) {
    iVar1 = *piVar4;
    if (iVar1 < *(int *)((long)param_2 + 0xc)) {
      iVar2 = (int)param_2[1];
      if (iVar2 < iVar1) {
        *(undefined8 *)(piVar4 + (long)iVar1 * 2 + 2) =
             *(undefined8 *)(piVar4 + (long)iVar2 * 2 + 2);
      }
      *(undefined8 *)(piVar4 + (long)iVar2 * 2 + 2) = uVar3;
      *(int *)(param_2 + 1) = iVar2 + 1;
      *(int *)param_2[2] = *(int *)param_2[2] + 1;
      return;
    }
  }
  FUN_006755d8(param_2,uVar3,0);
  return;
}


// ===== 006e7f94  FUN_006e7f94 =====

void FUN_006e7f94(undefined8 param_1,long param_2)

{
  byte *pbVar1;
  long lVar2;
  
  lVar2 = (long)*(int *)(param_2 + 8) + -1;
  *(int *)(param_2 + 8) = (int)lVar2;
  pbVar1 = *(byte **)(*(long *)(param_2 + 0x10) + lVar2 * 8 + 8);
  if ((*pbVar1 & 1) == 0) {
    pbVar1[0] = 0;
    pbVar1[1] = 0;
    return;
  }
  **(undefined1 **)(pbVar1 + 0x10) = 0;
  pbVar1[8] = 0;
  pbVar1[9] = 0;
  pbVar1[10] = 0;
  pbVar1[0xb] = 0;
  pbVar1[0xc] = 0;
  pbVar1[0xd] = 0;
  pbVar1[0xe] = 0;
  pbVar1[0xf] = 0;
  return;
}


// ===== 006e7fcc  FUN_006e7fcc =====

void FUN_006e7fcc(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar2 = -(param_4 >> 0x1f & 1) & 0xfffffff800000000 | (param_4 & 0xffffffff) << 3;
  uVar3 = -(param_3 >> 0x1f & 1) & 0xfffffff800000000 | (param_3 & 0xffffffff) << 3;
  lVar1 = *(long *)(param_2 + 0x10) + 8;
  uVar4 = *(undefined8 *)(lVar1 + uVar3);
  *(undefined8 *)(lVar1 + uVar3) = *(undefined8 *)(lVar1 + uVar2);
  *(undefined8 *)(lVar1 + uVar2) = uVar4;
  return;
}


// ===== 006e7ff0  FUN_006e7ff0 =====

void FUN_006e7ff0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  long local_88;
  long local_80;
  long local_78;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_1 == param_3) {
    if (param_2 != param_4) {
      lVar6 = *param_2;
      if (lVar6 == *param_4) {
        lVar5 = param_4[2];
        lVar8 = param_2[1];
        param_4[2] = param_2[2];
        *param_2 = lVar6;
        lVar6 = param_4[1];
        param_4[1] = lVar8;
        param_2[2] = lVar5;
        param_2[1] = lVar6;
        if (*(long *)(lVar2 + 0x28) == local_58) {
          return;
        }
      }
      else if (*(long *)(lVar2 + 0x28) == local_58) {
        FUN_006753e8(param_2,param_4);
        return;
      }
      goto LAB_006e82bc;
    }
  }
  else {
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    if (&local_88 != param_2) {
      if (*param_2 == 0) {
        local_78 = param_2[2];
        local_80 = param_2[1];
        param_2[1] = 0;
        param_2[2] = 0;
      }
      else {
                    /* try { // try from 006e804c to 006e8057 has its CatchHandler @ 006e82c0 */
        FUN_006753e8(&local_88,param_2);
      }
    }
                    /* try { // try from 006e80c4 to 006e80cf has its CatchHandler @ 006e82c8 */
    iVar3 = (**(code **)(*param_3 + 8))(param_3,param_4);
    if (0 < iVar3) {
      iVar7 = 0;
      do {
        uStack_68 = 0;
        local_60 = (void *)0x0;
        local_70 = 0;
                    /* try { // try from 006e8100 to 006e813b has its CatchHandler @ 006e8304 */
        puVar4 = (ulong *)(**(code **)(*param_3 + 0x10))(param_3,param_4,iVar7,&local_70);
        if ((*puVar4 & 1) == 0) {
          local_90 = (void *)puVar4[2];
          uStack_98 = puVar4[1];
          local_a0 = *puVar4;
        }
        else {
          FUN_002fb36c(&local_a0,puVar4[2],puVar4[1]);
        }
        if ((local_70 & 1) != 0) {
          free(local_60);
        }
        if ((local_a0 & 1) == 0) {
          uStack_68 = uStack_98;
          local_70 = local_a0;
          local_60 = local_90;
        }
        else {
                    /* try { // try from 006e816c to 006e8173 has its CatchHandler @ 006e82d4 */
          FUN_002fb36c(&local_70,local_90,uStack_98);
        }
                    /* try { // try from 006e817c to 006e818b has its CatchHandler @ 006e82e0 */
        (**(code **)(*param_1 + 0x28))(param_1,param_2,&local_70);
        if ((local_70 & 1) != 0) {
          free(local_60);
        }
        if ((local_a0 & 1) != 0) {
          free(local_90);
        }
        iVar7 = iVar7 + 1;
      } while (iVar3 != iVar7);
    }
    uVar1 = *(uint *)(param_2 + 1);
                    /* try { // try from 006e81c8 to 006e81d3 has its CatchHandler @ 006e82c4 */
    (**(code **)(*param_3 + 0x18))(param_3,param_4);
    if (0 < (int)uVar1) {
      lVar6 = 0;
      do {
        puVar4 = *(ulong **)(local_78 + lVar6 + 8);
        if ((*puVar4 & 1) == 0) {
          local_60 = (void *)puVar4[2];
          uStack_68 = puVar4[1];
          local_70 = *puVar4;
        }
        else {
                    /* try { // try from 006e8220 to 006e8227 has its CatchHandler @ 006e82cc */
          FUN_002fb36c(&local_70,puVar4[2],puVar4[1]);
        }
                    /* try { // try from 006e8230 to 006e823f has its CatchHandler @ 006e82dc */
        (**(code **)(*param_3 + 0x28))(param_3,param_4,&local_70);
        if ((local_70 & 1) != 0) {
          free(local_60);
        }
        lVar6 = lVar6 + 8;
      } while ((ulong)uVar1 * 8 - lVar6 != 0);
    }
    FUN_00675290(&local_88);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_006e82bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e8338  FUN_006e8338 =====

void FUN_006e8338(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x18);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  return;
}


// ===== 006e8358  FUN_006e8358 =====

void FUN_006e8358(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_007139b0(param_3);
  return;
}


// ===== 006e8360  FUN_006e8360 =====

undefined8 FUN_006e8360(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}


// ===== 006e8368  FUN_006e8368 =====

void FUN_006e8368(void)

{
  return;
}


// ===== 006e836c  FUN_006e836c =====

bool FUN_006e836c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_006de5bc(param_2);
  return *(int *)(lVar1 + 8) == 0;
}


// ===== 006e8390  FUN_006e8390 =====

undefined4 FUN_006e8390(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_006de5bc(param_2);
  return *(undefined4 *)(lVar1 + 8);
}


// ===== 006e83ac  FUN_006e83ac =====

undefined8 FUN_006e83ac(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = FUN_006de5bc(param_2);
  return *(undefined8 *)(*(long *)(lVar1 + 0x10) + (long)param_3 * 8 + 8);
}


// ===== 006e83dc  FUN_006e83dc =====

void FUN_006e83dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  lVar1 = FUN_006de6dc(param_2);
  uVar3 = (ulong)*(uint *)(lVar1 + 8);
  if (0 < (int)*(uint *)(lVar1 + 8)) {
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    do {
      puVar2 = puVar2 + 1;
      (**(code **)(*(long *)*puVar2 + 0x20))();
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    *(undefined4 *)(lVar1 + 8) = 0;
  }
  return;
}


// ===== 006e8438  FUN_006e8438 =====

void FUN_006e8438(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = FUN_006de6dc(param_2);
  FUN_006e51bc(*(undefined8 *)(*(long *)(lVar1 + 0x10) + (long)param_3 * 8 + 8),param_4);
  return;
}


// ===== 006e8470  FUN_006e8470 =====

void FUN_006e8470(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  
  lVar3 = (**(code **)(*param_3 + 0x18))(param_3,0);
  FUN_006e51bc(lVar3,param_3);
  puVar4 = (ulong *)FUN_006de6dc(param_2);
  uVar6 = *(ulong *)(lVar3 + 8);
  uVar5 = 0;
  if ((((uint)uVar6 >> 1 & 1) == 0) && (uVar5 = uVar6, (uVar6 & 1) != 0)) {
    if (*puVar4 != *(ulong *)(uVar6 & 0xfffffffffffffffc)) goto LAB_006e84d0;
  }
  else if (*puVar4 != uVar5) goto LAB_006e84d0;
  piVar7 = (int *)puVar4[2];
  if (piVar7 != (int *)0x0) {
    iVar1 = *piVar7;
    if (iVar1 < *(int *)((long)puVar4 + 0xc)) {
      iVar2 = (int)puVar4[1];
      if (iVar2 < iVar1) {
        *(undefined8 *)(piVar7 + (long)iVar1 * 2 + 2) =
             *(undefined8 *)(piVar7 + (long)iVar2 * 2 + 2);
      }
      *(long *)(piVar7 + (long)iVar2 * 2 + 2) = lVar3;
      *(int *)(puVar4 + 1) = iVar2 + 1;
      *(int *)puVar4[2] = *(int *)puVar4[2] + 1;
      return;
    }
  }
LAB_006e84d0:
  FUN_006e5004(puVar4,lVar3);
  return;
}


// ===== 006e8554  FUN_006e8554 =====

void FUN_006e8554(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = FUN_006de6dc(param_2);
  lVar3 = (long)*(int *)(lVar1 + 8) + -1;
  *(int *)(lVar1 + 8) = (int)lVar3;
  plVar2 = *(long **)(*(long *)(lVar1 + 0x10) + lVar3 * 8 + 8);
                    /* WARNING: Could not recover jumptable at 0x006e858c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x20))(plVar2);
  return;
}


// ===== 006e8590  FUN_006e8590 =====

void FUN_006e8590(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_006de6dc(param_2);
  uVar3 = -(ulong)(param_3 >> 0x1f) & 0xfffffff800000000 | (ulong)param_3 << 3;
  uVar2 = -(ulong)(param_4 >> 0x1f) & 0xfffffff800000000 | (ulong)param_4 << 3;
  lVar1 = *(long *)(lVar1 + 0x10) + 8;
  uVar4 = *(undefined8 *)(lVar1 + uVar3);
  *(undefined8 *)(lVar1 + uVar3) = *(undefined8 *)(lVar1 + uVar2);
  *(undefined8 *)(lVar1 + uVar2) = uVar4;
  return;
}


// ===== 006e85d8  FUN_006e85d8 =====

void FUN_006e85d8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != param_3) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/reflection_internal.h"
                 ,0xec);
                    /* try { // try from 006e8620 to 006e8633 has its CatchHandler @ 006e86dc */
    uVar2 = FUN_00675a58(auStack_68,"CHECK failed: this == other_mutator: ");
                    /* try { // try from 006e8634 to 006e863b has its CatchHandler @ 006e86d8 */
    FUN_00675ac0(&uStack_69,uVar2);
    FUN_00675e7c(auStack_68);
  }
  plVar3 = (long *)FUN_006de6dc(param_2);
  plVar4 = (long *)FUN_006de6dc(param_4);
  if (plVar3 != plVar4) {
    lVar5 = *plVar3;
    if (lVar5 == *plVar4) {
      lVar6 = plVar4[2];
      lVar7 = plVar3[1];
      lVar8 = plVar4[1];
      plVar4[2] = plVar3[2];
      *plVar3 = lVar5;
      plVar4[1] = lVar7;
      plVar3[1] = lVar8;
      plVar3[2] = lVar6;
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
      goto LAB_006e86d4;
    }
    FUN_006e3208(plVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_006e86d4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e8700  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 006e8704  FUN_006e8704 =====

void FUN_006e8704(undefined8 param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x006e8714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x18))(param_2,0);
  return;
}


// ===== 006e8718  FUN_006e8718 =====

void FUN_006e8718(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_006e51bc(param_3);
  return;
}


// ===== 006e8720  FUN_006e8720 =====

undefined8 FUN_006e8720(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}


// ===== 006e8728  FUN_006e8728 =====

bool FUN_006e8728(undefined8 param_1,long param_2)

{
  return *(int *)(param_2 + 8) == 0;
}


// ===== 006e8738  FUN_006e8738 =====

undefined4 FUN_006e8738(undefined8 param_1,long param_2)

{
  return *(undefined4 *)(param_2 + 8);
}


// ===== 006e8740  FUN_006e8740 =====

void FUN_006e8740(long *param_1,long param_2,int param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006e8758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))
            (param_1,*(undefined8 *)(*(long *)(param_2 + 0x10) + (long)param_3 * 8 + 8),param_4);
  return;
}


// ===== 006e875c  FUN_006e875c =====

void FUN_006e875c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(uint *)(param_2 + 8);
  if (0 < (int)*(uint *)(param_2 + 8)) {
    puVar1 = *(undefined8 **)(param_2 + 0x10);
    do {
      puVar1 = puVar1 + 1;
      (**(code **)(*(long *)*puVar1 + 0x20))();
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    *(undefined4 *)(param_2 + 8) = 0;
  }
  return;
}


// ===== 006e87b0  FUN_006e87b0 =====

void FUN_006e87b0(long *param_1,long param_2,int param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006e87c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))
            (param_1,param_4,*(undefined8 *)(*(long *)(param_2 + 0x10) + (long)param_3 * 8 + 8));
  return;
}


// ===== 006e87cc  FUN_006e87cc =====

void FUN_006e87cc(long *param_1,ulong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  lVar3 = (**(code **)(*param_1 + 0x80))(param_1,param_3);
  (**(code **)(*param_1 + 0x88))(param_1,param_3,lVar3);
  uVar4 = *(ulong *)(lVar3 + 8);
  if (((uint)uVar4 >> 1 & 1) == 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffc);
    }
  }
  else {
    uVar4 = 0;
  }
  if ((*param_2 == uVar4) && (piVar5 = (int *)param_2[2], piVar5 != (int *)0x0)) {
    iVar1 = *piVar5;
    if (iVar1 < *(int *)((long)param_2 + 0xc)) {
      iVar2 = (int)param_2[1];
      if (iVar2 < iVar1) {
        *(undefined8 *)(piVar5 + (long)iVar1 * 2 + 2) =
             *(undefined8 *)(piVar5 + (long)iVar2 * 2 + 2);
      }
      *(long *)(piVar5 + (long)iVar2 * 2 + 2) = lVar3;
      *(int *)(param_2 + 1) = iVar2 + 1;
      *(int *)param_2[2] = *(int *)param_2[2] + 1;
      return;
    }
  }
  FUN_006e5004(param_2,lVar3);
  return;
}


// ===== 006e88b0  FUN_006e88b0 =====

void FUN_006e88b0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = (long)*(int *)(param_2 + 8) + -1;
  *(int *)(param_2 + 8) = (int)lVar1;
                    /* WARNING: Could not recover jumptable at 0x006e88d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_2 + 0x10) + lVar1 * 8 + 8) + 0x20))();
  return;
}


// ===== 006e88d4  FUN_006e88d4 =====

void FUN_006e88d4(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar2 = -(param_4 >> 0x1f & 1) & 0xfffffff800000000 | (param_4 & 0xffffffff) << 3;
  uVar3 = -(param_3 >> 0x1f & 1) & 0xfffffff800000000 | (param_3 & 0xffffffff) << 3;
  lVar1 = *(long *)(param_2 + 0x10) + 8;
  uVar4 = *(undefined8 *)(lVar1 + uVar3);
  *(undefined8 *)(lVar1 + uVar3) = *(undefined8 *)(lVar1 + uVar2);
  *(undefined8 *)(lVar1 + uVar2) = uVar4;
  return;
}


// ===== 006e88f8  FUN_006e88f8 =====

void FUN_006e88f8(long param_1,long *param_2,long param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != param_3) {
    FUN_00675e64(auStack_68,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/reflection_internal.h"
                 ,0x158);
                    /* try { // try from 006e8940 to 006e8953 has its CatchHandler @ 006e89e8 */
    uVar2 = FUN_00675a58(auStack_68,"CHECK failed: this == other_mutator: ");
                    /* try { // try from 006e8954 to 006e895b has its CatchHandler @ 006e89e4 */
    FUN_00675ac0(&uStack_69,uVar2);
    FUN_00675e7c(auStack_68);
  }
  if (param_2 != param_4) {
    lVar3 = *param_2;
    if (lVar3 == *param_4) {
      lVar4 = param_4[2];
      lVar5 = param_2[1];
      lVar6 = param_4[1];
      param_4[2] = param_2[2];
      *param_2 = lVar3;
      param_4[1] = lVar5;
      param_2[1] = lVar6;
      param_2[2] = lVar4;
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
      goto LAB_006e89e0;
    }
    FUN_006e3208(param_2,param_4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_006e89e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e8a0c  FUN_006e8a0c =====

void FUN_006e8a0c(undefined8 param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x006e8a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x18))(param_2,0);
  return;
}


// ===== 006e8a20  FUN_006e8a20 =====

void FUN_006e8a20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_006e51bc(param_3);
  return;
}


// ===== 006e8a28  FUN_006e8a28 =====

undefined8 FUN_006e8a28(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}


// ===== 006e8a30  FUN_006e8a30 =====

void FUN_006e8a30(long param_1,long param_2)

{
  if (param_1 != param_2) {
    FUN_006e8a6c(param_2);
    FUN_006e8b74(param_1,param_2);
    return;
  }
  return;
}


// ===== 006e8a6c  FUN_006e8a6c =====

void FUN_006e8a6c(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  byte *pbVar5;
  long *plVar6;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_006e94d0();
  local_60 = (undefined8 *)0x0;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
                    /* try { // try from 006e8aa4 to 006e8aaf has its CatchHandler @ 006e8b40 */
  FUN_0067cb34(uVar4,param_1,&local_60);
  puVar3 = local_58;
  for (puVar2 = local_60; puVar2 != puVar3; puVar2 = puVar2 + 1) {
                    /* try { // try from 006e8ac0 to 006e8acb has its CatchHandler @ 006e8b44 */
    FUN_0067a3b8(uVar4,param_1,*puVar2);
  }
                    /* try { // try from 006e8ad8 to 006e8b07 has its CatchHandler @ 006e8b40 */
  pbVar5 = (byte *)FUN_006795f8(uVar4,param_1);
  if (((*pbVar5 & 1) != 0) && (plVar6 = (long *)FUN_00679604(uVar4,param_1), *plVar6 != plVar6[1]))
  {
    FUN_006fa9f8();
  }
  if (local_60 != (undefined8 *)0x0) {
    local_58 = local_60;
    free(local_60);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 006e8b74  FUN_006e8b74 =====

void FUN_006e8b74(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar20;
  int iVar21;
  long *plVar22;
  byte local_f8 [16];
  void *local_e8;
  byte local_e0 [16];
  void *local_d0;
  long *local_c8;
  long *local_c0;
  undefined8 local_b8;
  long local_98;
  code *pcStack_90;
  code ***local_88;
  code **local_80;
  long *local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  if (param_1 == param_2) {
    FUN_00675e64(&local_c8,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/reflection_ops.cc"
                 ,0x48);
                    /* try { // try from 006e8bcc to 006e8bdf has its CatchHandler @ 006e942c */
    uVar7 = FUN_00675a58(&local_c8,"CHECK failed: (&from) != (to): ");
                    /* try { // try from 006e8be0 to 006e8be7 has its CatchHandler @ 006e9428 */
    FUN_00675ac0(&local_80,uVar7);
    FUN_00675e7c(&local_c8);
  }
  lVar8 = (**(code **)(*param_1 + 0x80))(param_1);
  lVar9 = (**(code **)(*param_2 + 0x80))(param_2);
  if (lVar9 != lVar8) {
    FUN_00675e64(&local_c8,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/reflection_ops.cc"
                 ,0x4b);
                    /* try { // try from 006e8c34 to 006e8ca7 has its CatchHandler @ 006e9458 */
    uVar7 = FUN_00675a58(&local_c8,"CHECK failed: (to->GetDescriptor()) == (descriptor): ");
    uVar7 = FUN_00675a58(uVar7,"Tried to merge messages of different types ");
    uVar7 = FUN_00675a58(uVar7,"(merge ");
    uVar7 = FUN_00675a80(uVar7,*(long *)(lVar8 + 8) + 0x18);
    uVar7 = FUN_00675a58(uVar7,&DAT_001e1e07);
    lVar8 = (**(code **)(*param_2 + 0x80))(param_2);
    uVar7 = FUN_00675a80(uVar7,*(long *)(lVar8 + 8) + 0x18);
    uVar7 = FUN_00675a58(uVar7,&DAT_001d047f);
                    /* try { // try from 006e8ca8 to 006e8caf has its CatchHandler @ 006e9430 */
    FUN_00675ac0(&local_80,uVar7);
    FUN_00675e7c(&local_c8);
  }
  lVar8 = FUN_006e94d0(param_1);
  lVar9 = FUN_006e94d0(param_2);
  lVar10 = FUN_0068489c(lVar8);
  lVar11 = FUN_006e56e0();
  lVar12 = FUN_0068489c(lVar9);
  lVar13 = FUN_006e56e0();
  local_c8 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_b8 = 0;
                    /* try { // try from 006e8d00 to 006e8d0f has its CatchHandler @ 006e9454 */
  FUN_0067cb34(lVar8,param_1,&local_c8);
  plVar18 = local_c0;
  puVar3 = PTR_DAT_007a32d8;
  if (local_c8 != local_c0) {
    plVar22 = local_c8;
    do {
      lVar20 = *plVar22;
      if (((*(byte *)(lVar20 + 1) ^ 0xff) & 0x60) == 0) {
        if ((lVar10 == lVar11) != (lVar12 != lVar13)) {
          plVar14 = *(long **)(lVar20 + 0x18);
          if (plVar14 != (long *)0x0) {
            pcStack_90 = thunk_FUN_006af330;
            local_98 = lVar20;
            if (*plVar14 != -1) {
              local_80 = &pcStack_90;
              local_78 = &local_98;
              local_88 = &local_80;
                    /* try { // try from 006e8dbc to 006e8ddf has its CatchHandler @ 006e9490 */
              FUN_00710f84(plVar14,&local_88,FUN_00685640);
            }
          }
          if ((*(char *)(lVar20 + 2) == '\v') && (uVar15 = FUN_0068d830(lVar20), (uVar15 & 1) != 0))
          {
                    /* try { // try from 006e8de4 to 006e8df3 has its CatchHandler @ 006e9448 */
            uVar7 = FUN_00684cf0(lVar8,param_1,lVar20);
                    /* try { // try from 006e8df4 to 006e8e1b has its CatchHandler @ 006e9450 */
            plVar14 = (long *)FUN_00684c10(lVar9,param_2,lVar20);
            uVar15 = FUN_006dead4();
            if (((uVar15 & 1) != 0) && (uVar15 = FUN_006dead4(uVar7), (uVar15 & 1) != 0)) {
                    /* try { // try from 006e8d4c to 006e8d57 has its CatchHandler @ 006e9450 */
              (**(code **)(*plVar14 + 0x38))(plVar14,uVar7);
              goto LAB_006e8d58;
            }
          }
        }
                    /* try { // try from 006e8e20 to 006e8e2f has its CatchHandler @ 006e9468 */
        iVar4 = FUN_0067c384(lVar8,param_1,lVar20);
        if (0 < iVar4) {
          iVar21 = 0;
          do {
            plVar14 = *(long **)(lVar20 + 0x18);
            if (plVar14 != (long *)0x0) {
              pcStack_90 = thunk_FUN_006af330;
              local_98 = lVar20;
              if (*plVar14 != -1) {
                local_80 = &pcStack_90;
                local_78 = &local_98;
                local_88 = &local_80;
                    /* try { // try from 006e8e88 to 006e8eeb has its CatchHandler @ 006e9498 */
                FUN_00710f84(plVar14,&local_88,FUN_00685640);
              }
            }
            iVar1 = *(int *)(puVar3 + (ulong)*(byte *)(lVar20 + 2) * 4);
            if (iVar1 < 6) {
              if (iVar1 < 3) {
                if (iVar1 == 1) {
                  uVar6 = FUN_0067d03c(lVar8,param_1,lVar20,iVar21);
                  FUN_0067d19c(lVar9,param_2,lVar20,uVar6);
                }
                else if (iVar1 == 2) {
                    /* try { // try from 006e8f4c to 006e90a3 has its CatchHandler @ 006e9498 */
                  uVar7 = FUN_0067d87c(lVar8,param_1,lVar20,iVar21);
                  FUN_0067d9dc(lVar9,param_2,lVar20,uVar7);
                }
              }
              else if (iVar1 == 3) {
                uVar6 = FUN_0067e0bc(lVar8,param_1,lVar20,iVar21);
                FUN_0067e21c(lVar9,param_2,lVar20,uVar6);
              }
              else if (iVar1 == 4) {
                uVar7 = FUN_0067e8fc(lVar8,param_1,lVar20,iVar21);
                FUN_0067ea5c(lVar9,param_2,lVar20,uVar7);
              }
              else if (iVar1 == 5) {
                FUN_0067f99c(lVar8,param_1,lVar20,iVar21);
                FUN_0067fafc(lVar9,param_2,lVar20);
              }
            }
            else if (iVar1 < 8) {
              if (iVar1 == 6) {
                FUN_0067f148(lVar8,param_1,lVar20,iVar21);
                FUN_0067f2a8(lVar9,param_2,lVar20);
              }
              else if (iVar1 == 7) {
                uVar5 = FUN_006801e8(lVar8,param_1,lVar20,iVar21);
                FUN_0068034c(lVar9,param_2,lVar20,uVar5 & 1);
              }
            }
            else if (iVar1 == 8) {
              uVar7 = FUN_00681f54(lVar8,param_1,lVar20,iVar21);
              FUN_006820e4(lVar9,param_2,lVar20,uVar7);
            }
            else if (iVar1 == 9) {
              FUN_006812e8(local_e0,lVar8,param_1,lVar20,iVar21);
                    /* try { // try from 006e90a4 to 006e90b7 has its CatchHandler @ 006e946c */
              FUN_006815fc(lVar9,param_2,lVar20,local_e0);
              if ((local_e0[0] & 1) != 0) {
                free(local_d0);
              }
            }
            else if (iVar1 == 10) {
                    /* try { // try from 006e8f10 to 006e8f23 has its CatchHandler @ 006e9494 */
              plVar14 = (long *)FUN_006832a0(lVar8,param_1,lVar20,iVar21);
              if (lVar8 == lVar9) {
                    /* try { // try from 006e90d4 to 006e9107 has its CatchHandler @ 006e9494 */
                (**(code **)(*plVar14 + 0x80))(plVar14);
                uVar7 = FUN_0068489c(extraout_x1);
                lVar16 = lVar8;
              }
              else {
                uVar7 = 0;
                lVar16 = lVar9;
              }
              plVar17 = (long *)FUN_0068347c(lVar16,param_2,lVar20,uVar7);
              (**(code **)(*plVar17 + 0x68))(plVar17,plVar14);
            }
            iVar21 = iVar21 + 1;
          } while (iVar4 != iVar21);
        }
      }
      else {
        plVar14 = *(long **)(lVar20 + 0x18);
        if (plVar14 != (long *)0x0) {
          pcStack_90 = thunk_FUN_006af330;
          local_98 = lVar20;
          if (*plVar14 != -1) {
            local_80 = &pcStack_90;
            local_78 = &local_98;
            local_88 = &local_80;
                    /* try { // try from 006e9144 to 006e91a3 has its CatchHandler @ 006e9490 */
            FUN_00710f84(plVar14,&local_88,FUN_00685640);
          }
        }
        iVar4 = *(int *)(puVar3 + (ulong)*(byte *)(lVar20 + 2) * 4);
        if (iVar4 < 6) {
          if (iVar4 < 3) {
            if (iVar4 == 1) {
              uVar6 = FUN_0067cb40(lVar8,param_1,lVar20);
              FUN_0067cd04(lVar9,param_2,lVar20,uVar6);
            }
            else if (iVar4 == 2) {
                    /* try { // try from 006e9204 to 006e933b has its CatchHandler @ 006e9490 */
              uVar7 = FUN_0067d380(lVar8,param_1,lVar20);
              FUN_0067d544(lVar9,param_2,lVar20,uVar7);
            }
          }
          else if (iVar4 == 3) {
            uVar6 = FUN_0067dbc0(lVar8,param_1,lVar20);
            FUN_0067dd84(lVar9,param_2,lVar20,uVar6);
          }
          else if (iVar4 == 4) {
            uVar7 = FUN_0067e400(lVar8,param_1,lVar20);
            FUN_0067e5c4(lVar9,param_2,lVar20,uVar7);
          }
          else if (iVar4 == 5) {
            FUN_0067f494(lVar8,param_1,lVar20);
            FUN_0067f658(lVar9,param_2,lVar20);
          }
        }
        else if (iVar4 < 8) {
          if (iVar4 == 6) {
            FUN_0067ec40(lVar8,param_1,lVar20);
            FUN_0067ee04(lVar9,param_2,lVar20);
          }
          else if (iVar4 == 7) {
            uVar5 = FUN_0067fce8(lVar8,param_1,lVar20);
            FUN_0067feb0(lVar9,param_2,lVar20,uVar5 & 1);
          }
        }
        else if (iVar4 == 8) {
          uVar7 = FUN_006818cc(lVar8,param_1,lVar20);
          FUN_00681adc(lVar9,param_2,lVar20,uVar7);
        }
        else if (iVar4 == 9) {
          FUN_00680534(local_f8,lVar8,param_1,lVar20);
                    /* try { // try from 006e933c to 006e934f has its CatchHandler @ 006e9434 */
          FUN_00680a64(lVar9,param_2,lVar20,local_f8);
          if ((local_f8[0] & 1) != 0) {
            free(local_e8);
          }
        }
        else if (iVar4 == 10) {
                    /* try { // try from 006e91c8 to 006e91db has its CatchHandler @ 006e944c */
          plVar14 = (long *)FUN_0068265c(lVar8,param_1,lVar20,0);
          if (lVar8 == lVar9) {
                    /* try { // try from 006e936c to 006e939f has its CatchHandler @ 006e944c */
            (**(code **)(*plVar14 + 0x80))(plVar14);
            uVar7 = FUN_0068489c(extraout_x1_00);
            lVar16 = lVar8;
          }
          else {
            uVar7 = 0;
            lVar16 = lVar9;
          }
          plVar17 = (long *)FUN_00682834(lVar16,param_2,lVar20,uVar7);
          (**(code **)(*plVar17 + 0x68))(plVar17,plVar14);
        }
      }
LAB_006e8d58:
      plVar22 = plVar22 + 1;
    } while (plVar22 != plVar18);
  }
                    /* try { // try from 006e93a4 to 006e93e3 has its CatchHandler @ 006e9454 */
  plVar18 = (long *)FUN_006795dc(lVar8,param_1);
  if (*plVar18 != plVar18[1]) {
    uVar7 = FUN_00679604(lVar9,param_2);
    uVar19 = FUN_006795dc(lVar8,param_1);
    FUN_006facf4(uVar7,uVar19);
  }
  if (local_c8 != (long *)0x0) {
    local_c0 = local_c8;
    free(local_c8);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e94d0  FUN_006e94d0 =====

long FUN_006e94d0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x1;
  ulong *puVar4;
  undefined1 uStack_81;
  undefined1 auStack_80 [48];
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_1 + 0x80))();
  if (extraout_x1 == 0) {
    lVar2 = (**(code **)(*param_1 + 0x80))(param_1);
    if (lVar2 == 0) {
      uStack_48 = uStack_48 & 0xffffffffffffff00;
      local_50 = 0x6e776f6e6b6e750e;
    }
    else {
      puVar4 = *(ulong **)(lVar2 + 8);
      if ((*puVar4 & 1) == 0) {
        local_40 = (void *)puVar4[2];
        uStack_48 = puVar4[1];
        local_50 = *puVar4;
      }
      else {
        FUN_002fb36c(&local_50,puVar4[2],puVar4[1]);
      }
    }
                    /* try { // try from 006e9570 to 006e9587 has its CatchHandler @ 006e9600 */
    FUN_00675e64(auStack_80,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/reflection_ops.cc"
                 ,0x3c);
                    /* try { // try from 006e9588 to 006e95af has its CatchHandler @ 006e9608 */
    uVar3 = FUN_00675a58(auStack_80,"Message does not support reflection (type ");
    uVar3 = FUN_00675a80(uVar3,&local_50);
    uVar3 = FUN_00675a58(uVar3,&DAT_001b8fb0);
                    /* try { // try from 006e95b0 to 006e95b7 has its CatchHandler @ 006e95fc */
    FUN_00675ac0(&uStack_81,uVar3);
    FUN_00675e7c(auStack_80);
    if ((local_50 & 1) != 0) {
      free(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return extraout_x1;
}


// ===== 006e9640  FUN_006e9640 =====

void FUN_006e9640(long param_1)

{
  long lVar1;
  long *plVar2;
  long local_50;
  code *pcStack_48;
  undefined8 **local_40;
  code **local_38;
  undefined1 *puStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 != (long *)0x0) {
    pcStack_48 = thunk_FUN_006af330;
    local_50 = param_1;
    if (*plVar2 != -1) {
      local_38 = &pcStack_48;
      local_40 = &local_38;
      puStack_30 = (undefined1 *)&local_50;
      FUN_00710f84(plVar2,&local_40,FUN_00685640);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined4 *)(PTR_DAT_007a32d8 + (ulong)*(byte *)(param_1 + 2) * 4));
}


// ===== 006e96d8  FUN_006e96d8 =====

undefined4 FUN_006e96d8(long *param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined4 uVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  long *local_118;
  long *local_110;
  undefined8 local_108;
  long local_100;
  undefined *puStack_f8;
  undefined ***local_f0;
  long *local_e8;
  byte local_e0;
  void *local_d0;
  int local_c8;
  undefined **local_b0;
  long *local_a8;
  byte local_a0;
  void *local_90;
  int local_88;
  undefined1 auStack_80 [16];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  lVar7 = (**(code **)(*param_1 + 0x80))();
  uVar8 = FUN_006e94d0(param_1);
  uVar1 = *(uint *)(lVar7 + 4);
  if (0 < (int)uVar1) {
    lVar14 = 0;
    do {
      if (((*(byte *)(*(long *)(lVar7 + 0x28) + lVar14 + 1) & 0x60) == 0x40) &&
         (uVar9 = FUN_0067b838(uVar8,param_1), (uVar9 & 1) == 0)) {
        uVar12 = 0;
        goto LAB_006e9a94;
      }
      lVar14 = lVar14 + 0x48;
    } while ((ulong)uVar1 * 0x48 - lVar14 != 0);
  }
  local_118 = (long *)0x0;
  local_110 = (long *)0x0;
  local_108 = 0;
                    /* try { // try from 006e9788 to 006e9797 has its CatchHandler @ 006e9af8 */
  FUN_0067cb34(uVar8,param_1,&local_118);
  plVar5 = local_110;
  puVar4 = PTR_DAT_007a32d8;
  puVar3 = PTR_thunk_FUN_006af330_007a32d0;
  if (local_118 != local_110) {
    plVar13 = local_118;
    do {
      lVar7 = *plVar13;
      plVar10 = *(long **)(lVar7 + 0x18);
      if ((plVar10 != (long *)0x0) && (puStack_f8 = puVar3, local_100 = lVar7, *plVar10 != -1)) {
        local_b0 = &puStack_f8;
        local_a8 = &local_100;
                    /* try { // try from 006e9808 to 006e9877 has its CatchHandler @ 006e9b04 */
        local_f0 = &local_b0;
        FUN_00710f84(plVar10,&local_f0,FUN_00685640);
      }
      uVar9 = (ulong)*(byte *)(lVar7 + 2);
      if (*(int *)(puVar4 + uVar9 * 4) == 10) {
        plVar10 = *(long **)(lVar7 + 0x18);
        if (plVar10 != (long *)0x0) {
          puStack_f8 = puVar3;
          local_100 = lVar7;
          if (*plVar10 != -1) {
            local_b0 = &puStack_f8;
            local_a8 = &local_100;
            local_f0 = &local_b0;
            FUN_00710f84(plVar10,&local_f0,FUN_00685640);
          }
          uVar9 = (ulong)*(byte *)(lVar7 + 2);
        }
        if (((int)uVar9 == 0xb) && (uVar9 = FUN_0068d830(lVar7), (uVar9 & 1) != 0)) {
                    /* try { // try from 006e987c to 006e98c7 has its CatchHandler @ 006e9afc */
          lVar14 = FUN_0068c940(lVar7);
          lVar14 = *(long *)(lVar14 + 0x28);
          plVar10 = *(long **)(lVar14 + 0x60);
          if (plVar10 != (long *)0x0) {
            local_100 = lVar14 + 0x48;
            puStack_f8 = puVar3;
            if (*plVar10 != -1) {
              local_b0 = &puStack_f8;
              local_a8 = &local_100;
              local_f0 = &local_b0;
              FUN_00710f84(plVar10,&local_f0,FUN_00685640);
            }
          }
          if (*(int *)(puVar4 + (ulong)*(byte *)(lVar14 + 0x4a) * 4) == 10) {
                    /* try { // try from 006e98d8 to 006e98ef has its CatchHandler @ 006e9af4 */
            plVar10 = (long *)FUN_00684cf0(uVar8,param_1,lVar7);
            uVar9 = FUN_006dead4();
            if ((uVar9 & 1) == 0) goto LAB_006e998c;
                    /* try { // try from 006e98f4 to 006e9903 has its CatchHandler @ 006e9ae4 */
            FUN_006843a0(&local_b0,param_1,lVar7);
                    /* try { // try from 006e9904 to 006e9913 has its CatchHandler @ 006e9adc */
            FUN_006843a0(&local_f0,param_1,lVar7);
                    /* try { // try from 006e991c to 006e993b has its CatchHandler @ 006e9af0 */
            (**(code **)(*plVar10 + 0x28))(plVar10,&local_b0);
            (**(code **)(*plVar10 + 0x30))(plVar10,&local_f0);
                    /* try { // try from 006e9948 to 006e9987 has its CatchHandler @ 006e9b08 */
            while (uVar9 = (**(code **)(*local_a8 + 0x20))(local_a8,&local_b0,&local_f0),
                  (uVar9 & 1) == 0) {
              plVar10 = (long *)FUN_006e11b4(auStack_80);
              uVar11 = (**(code **)(*plVar10 + 0x28))();
              if ((uVar11 & 1) == 0) break;
              (**(code **)(*local_a8 + 0x90))(local_a8,&local_b0);
            }
                    /* try { // try from 006e9a24 to 006e9a2b has its CatchHandler @ 006e9aec */
            (**(code **)(*local_e8 + 0x80))(local_e8,&local_f0);
            if ((local_c8 == 9) && ((local_e0 & 1) != 0)) {
              free(local_d0);
            }
                    /* try { // try from 006e9a54 to 006e9a5b has its CatchHandler @ 006e9ae8 */
            (**(code **)(*local_a8 + 0x80))(local_a8,&local_b0);
            if ((local_88 == 9) && ((local_a0 & 1) != 0)) {
              free(local_90);
            }
            if ((uVar9 & 1) != 0) goto LAB_006e97cc;
LAB_006e9a7c:
            uVar12 = 0;
            goto joined_r0x006e9a84;
          }
        }
        else {
LAB_006e998c:
          if (((*(byte *)(lVar7 + 1) ^ 0xff) & 0x60) == 0) {
                    /* try { // try from 006e999c to 006e99ab has its CatchHandler @ 006e9b00 */
            iVar6 = FUN_0067c384(uVar8,param_1,lVar7);
            if (0 < iVar6) {
              iVar15 = 0;
              do {
                    /* try { // try from 006e99bc to 006e99db has its CatchHandler @ 006e9b20 */
                plVar10 = (long *)FUN_006832a0(uVar8,param_1,lVar7,iVar15);
                uVar9 = (**(code **)(*plVar10 + 0x28))();
                if ((uVar9 & 1) == 0) goto LAB_006e9a7c;
                iVar15 = iVar15 + 1;
              } while (iVar6 != iVar15);
            }
          }
          else {
                    /* try { // try from 006e99f0 to 006e9a0f has its CatchHandler @ 006e9b04 */
            plVar10 = (long *)FUN_0068265c(uVar8,param_1,lVar7,0);
            uVar9 = (**(code **)(*plVar10 + 0x28))();
            if ((uVar9 & 1) == 0) goto LAB_006e9a7c;
          }
        }
      }
LAB_006e97cc:
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar5);
  }
  uVar12 = 1;
joined_r0x006e9a84:
  if (local_118 != (long *)0x0) {
    local_110 = local_118;
    free(local_118);
  }
LAB_006e9a94:
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006e9b54  FUN_006e9b54 =====

/* WARNING: Removing unreachable block (ram,0x006e9ca0) */

void FUN_006e9b54(long *param_1,byte *param_2,undefined8 *param_3)

{
  long *plVar1;
  size_t __n;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  void *pvVar18;
  size_t sVar19;
  int iVar20;
  long lVar21;
  byte *pbVar22;
  code **local_b0;
  long *local_a8;
  void *local_a0;
  long *local_98;
  long *plStack_90;
  void *local_88;
  long local_80;
  code *pcStack_78;
  code ***local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar8 = (**(code **)(*param_1 + 0x80))();
  uVar9 = FUN_006e94d0(param_1);
  uVar2 = *(uint *)(lVar8 + 4);
  if (0 < (int)uVar2) {
    lVar21 = 0;
    do {
      if (((*(byte *)(*(long *)(lVar8 + 0x28) + lVar21 + 1) & 0x60) == 0x40) &&
         (uVar10 = FUN_0067b838(uVar9,param_1), (uVar10 & 1) == 0)) {
        pbVar22 = *(byte **)(*(long *)(lVar8 + 0x28) + lVar21 + 8);
        bVar3 = *param_2;
        bVar4 = *pbVar22;
        sVar19 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          sVar19 = *(size_t *)(param_2 + 8);
        }
        __n = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          __n = *(size_t *)(pbVar22 + 8);
        }
        plVar1 = (long *)(__n + sVar19);
        if ((long *)0xfffffffffffffff7 < plVar1) {
          if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_002fb400(&local_98);
          }
          goto LAB_006ea078;
        }
        if (plVar1 < (long *)0x17) {
          plStack_90 = (long *)0x0;
          local_88 = (void *)0x0;
          local_98 = (long *)(ulong)(byte)(((uint)plVar1 & 0xff) << 1);
          pvVar18 = (void *)((ulong)&local_98 | 1);
        }
        else {
          uVar10 = ((ulong)plVar1 & 0xfffffffffffffff8) + 8;
          if (((ulong)plVar1 | 7) != 0x17) {
            uVar10 = (ulong)plVar1 | 7;
          }
          local_88 = (void *)FUN_00759c3c();
          local_98 = (long *)(uVar10 + 1 | 1);
          plStack_90 = plVar1;
          pvVar18 = local_88;
        }
        if (sVar19 != 0) {
          pbVar13 = param_2 + 1;
          if ((bVar3 & 1) != 0) {
            pbVar13 = *(byte **)(param_2 + 0x10);
          }
          memmove(pvVar18,pbVar13,sVar19);
        }
        if (__n != 0) {
          pbVar13 = *(byte **)(pbVar22 + 0x10);
          if ((bVar4 & 1) == 0) {
            pbVar13 = pbVar22 + 1;
          }
          memmove((void *)((long)pvVar18 + sVar19),pbVar13,__n);
        }
        puVar14 = (undefined8 *)param_3[1];
        puVar17 = (undefined8 *)param_3[2];
        *(undefined1 *)((long)((long)pvVar18 + sVar19) + __n) = 0;
        if (puVar14 < puVar17) {
          puVar17 = puVar14 + 3;
          puVar14[2] = local_88;
          puVar14[1] = plStack_90;
          *puVar14 = local_98;
        }
        else {
          pvVar18 = (void *)*param_3;
          sVar19 = (long)puVar14 - (long)pvVar18;
          uVar10 = ((long)sVar19 >> 3) * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar10) {
            if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* try { // try from 006e9ff4 to 006ea013 has its CatchHandler @ 006ea01c */
              FUN_00304228(param_3);
LAB_006e9ffc:
              if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_002f9ee0();
              }
            }
            goto LAB_006ea078;
          }
          lVar15 = (long)puVar17 - (long)pvVar18 >> 3;
          uVar16 = lVar15 * 0x5555555555555556;
          if (uVar16 < uVar10 || uVar16 - uVar10 == 0) {
            uVar16 = uVar10;
          }
          if (0x555555555555554 < (ulong)(lVar15 * -0x5555555555555555)) {
            uVar16 = 0xaaaaaaaaaaaaaaa;
          }
          if (uVar16 == 0) {
            lVar15 = 0;
          }
          else {
            if (0xaaaaaaaaaaaaaaa < uVar16) goto LAB_006e9ffc;
                    /* try { // try from 006e9da8 to 006e9dab has its CatchHandler @ 006ea018 */
            lVar15 = FUN_00759c3c(uVar16 * 0x18);
          }
          puVar14 = (undefined8 *)(lVar15 + ((long)sVar19 >> 3) * 8);
          puVar14[1] = plStack_90;
          *puVar14 = local_98;
          puVar17 = puVar14 + 3;
          puVar14[2] = local_88;
          memcpy((void *)((long)puVar14 - sVar19),pvVar18,sVar19);
          *param_3 = (void *)((long)puVar14 - sVar19);
          param_3[1] = puVar17;
          param_3[2] = lVar15 + uVar16 * 0x18;
          if (pvVar18 != (void *)0x0) {
            free(pvVar18);
          }
        }
        param_3[1] = puVar17;
      }
      lVar21 = lVar21 + 0x48;
    } while ((ulong)uVar2 * 0x48 != lVar21);
  }
  local_98 = (long *)0x0;
  plStack_90 = (long *)0x0;
  local_88 = (void *)0x0;
                    /* try { // try from 006e9e08 to 006e9e17 has its CatchHandler @ 006ea014 */
  FUN_0067cb34(uVar9,param_1,&local_98);
  plVar6 = plStack_90;
  for (plVar1 = local_98; plVar1 != plVar6; plVar1 = plVar1 + 1) {
    lVar8 = *plVar1;
    plVar11 = *(long **)(lVar8 + 0x18);
    if ((plVar11 != (long *)0x0) &&
       (pcStack_78 = thunk_FUN_006af330, local_80 = lVar8, *plVar11 != -1)) {
      local_b0 = &pcStack_78;
      local_a8 = &local_80;
      local_70 = &local_b0;
                    /* try { // try from 006e9eb0 to 006e9ebf has its CatchHandler @ 006ea040 */
      FUN_00710f84(plVar11,&local_70,FUN_00685640);
    }
    if (*(int *)(PTR_DAT_007a32d8 + (ulong)*(byte *)(lVar8 + 2) * 4) == 10) {
      if (((*(byte *)(lVar8 + 1) ^ 0xff) & 0x60) == 0) {
                    /* try { // try from 006e9ee8 to 006e9ef7 has its CatchHandler @ 006ea038 */
        iVar7 = FUN_0067c384(uVar9,param_1,lVar8);
        if (0 < iVar7) {
          iVar20 = 0;
          do {
                    /* try { // try from 006e9f18 to 006e9f2b has its CatchHandler @ 006ea044 */
            uVar12 = FUN_006832a0(uVar9,param_1,lVar8,iVar20);
                    /* try { // try from 006e9f2c to 006e9f43 has its CatchHandler @ 006ea048 */
            FUN_006ea094(&local_b0,param_2,lVar8,iVar20);
                    /* try { // try from 006e9f44 to 006e9f53 has its CatchHandler @ 006ea07c */
            FUN_006e9b54(uVar12,&local_b0,param_3);
            if (((ulong)local_b0 & 1) != 0) {
              free(local_a0);
            }
            iVar20 = iVar20 + 1;
          } while (iVar7 != iVar20);
        }
      }
      else {
                    /* try { // try from 006e9f68 to 006e9f7b has its CatchHandler @ 006ea034 */
        uVar12 = FUN_0068265c(uVar9,param_1,lVar8,0);
                    /* try { // try from 006e9f7c to 006e9f93 has its CatchHandler @ 006ea030 */
        FUN_006ea094(&local_b0,param_2,lVar8,0xffffffff);
                    /* try { // try from 006e9f94 to 006e9fa3 has its CatchHandler @ 006ea03c */
        FUN_006e9b54(uVar12,&local_b0,param_3);
        if (((ulong)local_b0 & 1) != 0) {
          free(local_a0);
        }
      }
    }
  }
  if (local_98 != (long *)0x0) {
    plStack_90 = local_98;
    free(local_98);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
LAB_006ea078:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006ea094  FUN_006ea094 =====

void FUN_006ea094(undefined8 *param_1,byte *param_2,long param_3,int param_4)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  undefined1 *__src;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  void *pvVar10;
  undefined8 uVar11;
  undefined8 local_90;
  ulong local_88;
  void *local_80;
  undefined1 *local_78;
  ulong local_70;
  undefined1 auStack_68 [32];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((*param_2 & 1) == 0) {
    uVar11 = *(undefined8 *)param_2;
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    param_1[1] = *(undefined8 *)(param_2 + 8);
    *param_1 = uVar11;
    param_1[2] = uVar6;
    if ((*(byte *)(param_3 + 1) >> 3 & 1) != 0) goto LAB_006ea0e4;
LAB_006ea148:
    pbVar8 = *(byte **)(param_3 + 8);
    uVar9 = *(ulong *)(pbVar8 + 8);
    pbVar2 = *(byte **)(pbVar8 + 0x10);
    if ((*pbVar8 & 1) == 0) {
      pbVar2 = pbVar8 + 1;
      uVar9 = (ulong)(*pbVar8 >> 1);
    }
                    /* try { // try from 006ea164 to 006ea183 has its CatchHandler @ 006ea2f0 */
    FUN_0071302c(param_1,pbVar2,uVar9);
  }
  else {
    FUN_002fb36c(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
    if ((*(byte *)(param_3 + 1) >> 3 & 1) == 0) goto LAB_006ea148;
LAB_006ea0e4:
                    /* try { // try from 006ea0e4 to 006ea12b has its CatchHandler @ 006ea2f0 */
    FUN_00713bdc(param_1,&DAT_001d8d1c);
    lVar7 = *(long *)(param_3 + 8);
    uVar9 = (ulong)(*(byte *)(lVar7 + 0x18) >> 1);
    lVar4 = lVar7 + 0x19;
    if ((*(byte *)(lVar7 + 0x18) & 1) != 0) {
      uVar9 = *(ulong *)(lVar7 + 0x20);
      lVar4 = *(long *)(lVar7 + 0x28);
    }
    FUN_0071302c(param_1,lVar4,uVar9);
    FUN_00713bdc(param_1,&DAT_001d047f);
  }
  if (param_4 != -1) {
    FUN_00713bdc(param_1,&DAT_001cf3bb);
    local_78 = auStack_68;
                    /* try { // try from 006ea190 to 006ea1f3 has its CatchHandler @ 006ea2ec */
    puVar5 = (undefined1 *)FUN_006778a4(param_4,auStack_68);
    __src = local_78;
    uVar9 = (long)puVar5 - (long)auStack_68;
    local_70 = uVar9;
    if (0xfffffffffffffff7 < uVar9) {
      if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 006ea2a4 to 006ea2ab has its CatchHandler @ 006ea2ec */
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(&local_90);
      }
      goto LAB_006ea314;
    }
    if (uVar9 < 0x17) {
      pvVar10 = (void *)((ulong)&local_90 | 1);
      local_90 = CONCAT71(local_90._1_7_,(char)((int)uVar9 << 1));
      if (puVar5 != auStack_68) goto LAB_006ea204;
    }
    else {
      uVar1 = (uVar9 & 0xfffffffffffffff8) + 8;
      if ((uVar9 | 7) != 0x17) {
        uVar1 = uVar9 | 7;
      }
      pvVar10 = (void *)FUN_00759c3c(uVar1 + 1);
      local_90 = uVar1 + 1 | 1;
      local_88 = uVar9;
      local_80 = pvVar10;
LAB_006ea204:
      memmove(pvVar10,__src,uVar9);
    }
    *(undefined1 *)((long)pvVar10 + uVar9) = 0;
    uVar9 = local_88;
    pvVar10 = local_80;
    if ((local_90 & 1) == 0) {
      uVar9 = local_90 >> 1 & 0x7f;
      pvVar10 = (void *)((long)&local_90 + 1);
    }
                    /* try { // try from 006ea234 to 006ea23b has its CatchHandler @ 006ea2ac */
    FUN_0071302c(param_1,pvVar10,uVar9);
    if ((local_90 & 1) != 0) {
      free(local_80);
    }
                    /* try { // try from 006ea24c to 006ea26b has its CatchHandler @ 006ea2f0 */
    FUN_00713bdc(param_1,&DAT_001e1051);
  }
  FUN_00713bdc(param_1,&DAT_001c773b);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_006ea314:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006ea318  FUN_006ea318 =====

void FUN_006ea318(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  long *plVar3;
  
  uVar2 = param_2[1];
  if (((uint)uVar2 >> 1 & 1) == 0) {
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffc);
    }
    plVar3 = param_2;
    if (uVar2 != 0) goto LAB_006ea378;
  }
  uVar2 = param_1[1];
  plVar3 = param_1;
  param_1 = param_2;
  if (((uint)uVar2 >> 1 & 1) == 0) {
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffc);
    }
  }
  else {
    uVar2 = 0;
  }
LAB_006ea378:
  plVar1 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,uVar2);
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  (**(code **)(*param_1 + 0x38))(param_1,plVar3);
  (**(code **)(*plVar3 + 0x80))(plVar3);
  FUN_00679d38(extraout_x1,plVar1,plVar3);
  return;
}


// ===== 006ea3ec  FUN_006ea3ec =====

void FUN_006ea3ec(undefined8 *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
                    /* try { // try from 006ea43c to 006ea44f has its CatchHandler @ 006ea460 */
  FUN_006ea47c(param_1,pbVar1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12);
  return;
}


// ===== 006ea47c  FUN_006ea47c =====

void FUN_006ea47c(byte *param_1,char *param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  size_t sVar6;
  int iVar7;
  byte *pbVar8;
  long lVar9;
  char cVar10;
  void *pvVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined1 uStack_111;
  ulong local_110;
  size_t local_108;
  void *local_100;
  byte local_f8 [16];
  void *local_e8;
  undefined1 auStack_e0 [48];
  long local_b0 [10];
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  cVar10 = *param_2;
  local_b0[0] = param_3;
  local_b0[1] = param_4;
  local_b0[2] = param_5;
  local_b0[3] = param_6;
  local_b0[4] = param_7;
  local_b0[5] = param_8;
  local_b0[7] = param_10;
  local_b0[6] = param_9;
  local_b0[8] = param_11;
  local_b0[9] = param_12;
  local_60 = 0;
  if (cVar10 != '\0') {
    iVar7 = 0;
    lVar9 = 0;
    pvVar11 = (void *)((ulong)&local_110 | 1);
    do {
      while (cVar10 != '$') {
LAB_006ea4f4:
        iVar7 = iVar7 + 1;
        lVar9 = (long)(int)lVar9 + 1;
        cVar10 = param_2[lVar9];
        if (cVar10 == '\0') goto LAB_006ea54c;
      }
      lVar9 = (long)(int)lVar9 + 1;
      uVar3 = (byte)param_2[lVar9] - 0x30;
      if (9 < uVar3) {
        if ((byte)param_2[lVar9] == 0x24) goto LAB_006ea4f4;
        FUN_00675e64(auStack_e0,2,
                     "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/stubs/substitute.cc"
                     ,0x61);
                    /* try { // try from 006ea638 to 006ea647 has its CatchHandler @ 006ea8cc */
        uVar5 = FUN_00675a58(auStack_e0,"Invalid strings::Substitute() format string: \"");
        sVar6 = strlen(param_2);
        if (0xfffffffffffffff7 < sVar6) {
          if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* try { // try from 006ea87c to 006ea883 has its CatchHandler @ 006ea8d0 */
                    /* WARNING: Subroutine does not return */
            FUN_002fb400(&local_110);
          }
          goto LAB_006ea95c;
        }
        if (sVar6 < 0x17) {
          pvVar11 = (void *)((ulong)&local_110 | 1);
          local_110 = CONCAT71(local_110._1_7_,(char)((int)sVar6 << 1));
          if (sVar6 != 0) goto LAB_006ea75c;
        }
        else {
          uVar1 = (sVar6 & 0xfffffffffffffff8) + 8;
          if ((sVar6 | 7) != 0x17) {
            uVar1 = sVar6 | 7;
          }
                    /* try { // try from 006ea744 to 006ea74b has its CatchHandler @ 006ea8d0 */
          pvVar11 = (void *)FUN_00759c3c(uVar1 + 1);
          local_110 = uVar1 + 1 | 1;
          local_108 = sVar6;
          local_100 = pvVar11;
LAB_006ea75c:
          memcpy(pvVar11,param_2,sVar6);
        }
        *(undefined1 *)((long)pvVar11 + sVar6) = 0;
                    /* try { // try from 006ea770 to 006ea77b has its CatchHandler @ 006ea8bc */
        FUN_006774fc(local_f8,&local_110);
                    /* try { // try from 006ea77c to 006ea797 has its CatchHandler @ 006ea8d8 */
        uVar5 = FUN_00675a80(uVar5,local_f8);
        uVar5 = FUN_00675a58(uVar5,&DAT_001f097e);
                    /* try { // try from 006ea798 to 006ea79f has its CatchHandler @ 006ea8b8 */
        FUN_00675ac0(&uStack_111,uVar5);
        goto LAB_006ea818;
      }
      if (*(int *)(local_b0[uVar3] + 8) == -1) {
        FUN_00675e64(auStack_e0,2,
                     "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/stubs/substitute.cc"
                     ,0x54);
                    /* try { // try from 006ea698 to 006ea6fb has its CatchHandler @ 006ea940 */
        uVar5 = FUN_00675a58(auStack_e0,"strings::Substitute format string invalid: asked for \"$");
        uVar5 = FUN_00675d6c(uVar5,uVar3);
        uVar5 = FUN_00675a58(uVar5,"\", but only ");
        lVar9 = 0;
        goto LAB_006ea6c8;
      }
      iVar7 = *(int *)(local_b0[uVar3] + 8) + iVar7;
      lVar9 = (long)(int)lVar9 + 1;
      cVar10 = param_2[lVar9];
    } while (cVar10 != '\0');
LAB_006ea54c:
    if (iVar7 != 0) {
      uVar3 = (uint)(*param_1 >> 1);
      if ((*param_1 & 1) != 0) {
        uVar3 = (uint)*(undefined8 *)(param_1 + 8);
      }
      FUN_00713cc0(param_1,(long)(int)(iVar7 + uVar3),0);
      bVar2 = *param_1;
      pbVar8 = (byte *)(ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        pbVar8 = *(byte **)(param_1 + 8);
      }
      if ((pbVar8 != (byte *)0x0) && (pbVar8 = *(byte **)(param_1 + 0x10), (bVar2 & 1) == 0)) {
        pbVar8 = param_1 + 1;
      }
      iVar7 = 0;
      pbVar8 = pbVar8 + (int)uVar3;
      while( true ) {
        while( true ) {
          bVar2 = param_2[iVar7];
          if (bVar2 != 0x24) break;
          lVar9 = (long)iVar7 + 1;
          bVar2 = param_2[lVar9];
          iVar12 = (int)lVar9;
          if (bVar2 - 0x30 < 10) {
            puVar13 = (undefined8 *)local_b0[(ulong)bVar2 & 0xf];
            memcpy(pbVar8,(void *)*puVar13,(long)*(int *)(puVar13 + 1));
            pbVar8 = pbVar8 + *(int *)(puVar13 + 1);
            iVar7 = iVar12 + 1;
          }
          else {
            if (bVar2 != 0x24) goto LAB_006ea5ec;
            *pbVar8 = 0x24;
            iVar7 = iVar12 + 1;
            pbVar8 = pbVar8 + 1;
          }
        }
        if (bVar2 == 0) break;
        *pbVar8 = bVar2;
        pbVar8 = pbVar8 + 1;
LAB_006ea5ec:
        iVar7 = iVar7 + 1;
      }
    }
  }
LAB_006ea840:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
LAB_006ea95c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while( true ) {
    param_3 = local_b0[lVar9 + 1];
    lVar9 = lVar9 + 1;
    if (param_3 == 0) break;
LAB_006ea6c8:
    if (*(int *)(param_3 + 8) == -1) break;
  }
  uVar5 = FUN_00675d6c(uVar5,lVar9);
  uVar5 = FUN_00675a58(uVar5," args were given.  Full format string was: \"");
  sVar6 = strlen(param_2);
  if (0xfffffffffffffff7 < sVar6) {
    if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* try { // try from 006ea894 to 006ea89b has its CatchHandler @ 006ea8b4 */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_110);
    }
    goto LAB_006ea95c;
  }
  if (sVar6 < 0x17) {
    local_110 = CONCAT71(local_110._1_7_,(char)((int)sVar6 << 1));
    if (sVar6 != 0) goto LAB_006ea7d4;
  }
  else {
    uVar1 = (sVar6 & 0xfffffffffffffff8) + 8;
    if ((sVar6 | 7) != 0x17) {
      uVar1 = sVar6 | 7;
    }
                    /* try { // try from 006ea7bc to 006ea7c3 has its CatchHandler @ 006ea89c */
    pvVar11 = (void *)FUN_00759c3c(uVar1 + 1);
    local_110 = uVar1 + 1 | 1;
    local_108 = sVar6;
    local_100 = pvVar11;
LAB_006ea7d4:
    memcpy(pvVar11,param_2,sVar6);
  }
  *(undefined1 *)((long)pvVar11 + sVar6) = 0;
                    /* try { // try from 006ea7e8 to 006ea7f3 has its CatchHandler @ 006ea8a4 */
  FUN_006774fc(local_f8,&local_110);
                    /* try { // try from 006ea7f4 to 006ea80f has its CatchHandler @ 006ea8d4 */
  uVar5 = FUN_00675a80(uVar5,local_f8);
  uVar5 = FUN_00675a58(uVar5,&DAT_001f097e);
                    /* try { // try from 006ea810 to 006ea817 has its CatchHandler @ 006ea8a0 */
  FUN_00675ac0(&uStack_111,uVar5);
LAB_006ea818:
  if ((local_f8[0] & 1) != 0) {
    free(local_e8);
  }
  if ((local_110 & 1) != 0) {
    free(local_100);
  }
  FUN_00675e7c(auStack_e0);
  goto LAB_006ea840;
}


// ===== 006ea960  FUN_006ea960 =====

void FUN_006ea960(byte *param_1,undefined8 param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  byte *pbVar5;
  undefined1 auStack_a0 [4];
  undefined1 local_9c;
  byte local_99;
  undefined1 local_96;
  long *local_88;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_006ec384(auStack_a0);
  local_9c = 1;
  local_96 = 1;
  local_99 = *PTR_DAT_007a3740;
  param_1[0] = 0;
  param_1[1] = 0;
  local_99 = local_99 & 1;
                    /* try { // try from 006ea9bc to 006eaa17 has its CatchHandler @ 006eaa70 */
  FUN_0066df7c(auStack_48,param_1);
  FUN_006ec438(auStack_a0,param_2,auStack_48);
  bVar2 = *param_1;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 != 0) {
    pbVar5 = *(byte **)(param_1 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    if (pbVar5[uVar1 - 1] == 0x20) {
      FUN_00713cc0(param_1,uVar1 - 1,0);
    }
  }
  FUN_006b137c(auStack_68,local_60);
  FUN_006b13d4(auStack_80,local_78);
  plVar4 = local_88;
  local_88 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006eaaa8  FUN_006eaaa8 =====

void FUN_006eaaa8(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  void *__dest;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  void *__src;
  long *plVar9;
  long lVar10;
  
  plVar7 = param_1 + 1;
  plVar4 = (long *)*plVar7;
  plVar9 = plVar7;
  if ((long *)*plVar7 != (long *)0x0) {
    do {
      while (plVar3 = plVar4, plVar7 = plVar3, param_2 < (ulong)plVar3[4]) {
        plVar4 = (long *)*plVar3;
        plVar9 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_006eab10;
      }
      if (param_2 <= (ulong)plVar3[4]) goto LAB_006eab60;
      plVar4 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar9 = plVar3 + 1;
  }
LAB_006eab10:
  plVar3 = (long *)FUN_00759c3c(0x40);
  plVar3[4] = param_2;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0;
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = (long)plVar7;
  *plVar9 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    plVar4 = (long *)*plVar9;
  }
  FUN_00328410(param_1[1],plVar4);
  param_1[2] = param_1[2] + 1;
LAB_006eab60:
  puVar2 = (undefined8 *)plVar3[6];
  if (puVar2 < (undefined8 *)plVar3[7]) {
    *puVar2 = param_3;
    puVar2[1] = param_4;
    puVar8 = puVar2 + 2;
  }
  else {
    __src = (void *)plVar3[5];
    lVar10 = (long)puVar2 - (long)__src >> 4;
    uVar1 = lVar10 + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_006f7fbc(plVar3 + 5);
LAB_006eac28:
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    uVar5 = plVar3[7] - (long)__src;
    uVar6 = (long)uVar5 >> 3;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar6 = 0xfffffffffffffff;
    }
    if (uVar6 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar6 >> 0x3c != 0) goto LAB_006eac28;
      __dest = (void *)FUN_00759c3c(uVar6 << 4);
    }
    puVar8 = (undefined8 *)((long)__dest + lVar10 * 0x10);
    *puVar8 = param_3;
    puVar8[1] = param_4;
    puVar8 = puVar8 + 2;
    memcpy(__dest,__src,(long)puVar2 - (long)__src);
    plVar3[5] = (long)__dest;
    plVar3[6] = (long)puVar8;
    plVar3[7] = (long)((long)__dest + uVar6 * 0x10);
    if (__src != (void *)0x0) {
      free(__src);
    }
  }
  plVar3[6] = (long)puVar8;
  return;
}


// ===== 006eac2c  FUN_006eac2c =====

undefined8 FUN_006eac2c(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *__dest;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  void *__src;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  
  puVar4 = *(undefined8 **)(param_1 + 0x20);
  puVar3 = (undefined8 *)(param_1 + 0x20);
  while (puVar7 = puVar3, puVar4 != (undefined8 *)0x0) {
    while (puVar2 = puVar4, puVar3 = puVar2, (ulong)puVar2[4] <= param_2) {
      if (param_2 <= (ulong)puVar2[4]) goto LAB_006eacdc;
      puVar4 = (undefined8 *)puVar2[1];
      if ((undefined8 *)puVar2[1] == (undefined8 *)0x0) {
        puVar7 = puVar2 + 1;
        goto LAB_006eac8c;
      }
    }
    puVar4 = (undefined8 *)*puVar2;
  }
LAB_006eac8c:
  puVar2 = (undefined8 *)FUN_00759c3c(0x40);
  puVar2[4] = param_2;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = puVar3;
  *puVar7 = puVar2;
  puVar3 = puVar2;
  if (**(long **)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x18) = **(long **)(param_1 + 0x18);
    puVar3 = (undefined8 *)*puVar7;
  }
  FUN_00328410(*(undefined8 *)(param_1 + 0x20),puVar3);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
LAB_006eacdc:
  puVar4 = (undefined8 *)FUN_00759c3c(0x30);
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[1] = 0;
  *puVar4 = 0;
  puVar4[3] = 0;
  puVar4[2] = 0;
  *puVar4 = puVar4 + 1;
  puVar4[3] = puVar4 + 4;
  puVar3 = (undefined8 *)puVar2[6];
  if (puVar3 < (undefined8 *)puVar2[7]) {
    puVar9 = puVar3 + 1;
    *puVar3 = puVar4;
  }
  else {
    __src = (void *)puVar2[5];
    lVar8 = (long)puVar3 - (long)__src >> 3;
    uVar1 = lVar8 + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_006f7fd0(puVar2 + 5);
LAB_006eadd0:
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    uVar5 = (long)puVar2[7] - (long)__src;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar6 >> 0x3d != 0) goto LAB_006eadd0;
      __dest = (void *)FUN_00759c3c(uVar6 << 3);
    }
    puVar7 = (undefined8 *)((long)__dest + lVar8 * 8);
    puVar9 = puVar7 + 1;
    *puVar7 = puVar4;
    memcpy(__dest,__src,(long)puVar3 - (long)__src);
    puVar2[5] = __dest;
    puVar2[6] = puVar9;
    puVar2[7] = (void *)((long)__dest + uVar6 * 8);
    if (__src != (void *)0x0) {
      free(__src);
    }
  }
  puVar2[6] = puVar9;
  return puVar9[-1];
}


// ===== 006eadd4  FUN_006eadd4 =====

void FUN_006eadd4(void)

{
  return;
}


// ===== 006eadd8  FUN_006eadd8 =====

void FUN_006eadd8(undefined8 param_1,long param_2)

{
  FUN_0068bfbc(*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x18));
  return;
}


// ===== 006eade4  FUN_006eade4 =====

undefined8 FUN_006eade4(long *param_1,byte *param_2,undefined8 param_3)

{
  size_t __n;
  byte bVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  
  sVar3 = strlen(PTR_s_type_googleapis_com__007a3130);
  bVar1 = *param_2;
  __n = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  if (sVar3 == __n) {
    if (sVar3 == 0xffffffffffffffff) {
                    /* try { // try from 006eaed8 to 006eaedf has its CatchHandler @ 006eaeec */
                    /* WARNING: Subroutine does not return */
      FUN_0030b8f4(param_2);
    }
    pbVar6 = *(byte **)(param_2 + 0x10);
    if ((bVar1 & 1) == 0) {
      pbVar6 = param_2 + 1;
    }
    iVar2 = memcmp(pbVar6,PTR_s_type_googleapis_com__007a3130,sVar3);
    if (iVar2 == 0) goto LAB_006eaea8;
  }
  sVar3 = strlen("type.googleprod.com/");
  if (sVar3 == __n) {
    if (__n == 0xffffffffffffffff) {
                    /* try { // try from 006eaee0 to 006eaee7 has its CatchHandler @ 006eaee8 */
                    /* WARNING: Subroutine does not return */
      FUN_0030b8f4(param_2);
    }
    pbVar6 = *(byte **)(param_2 + 0x10);
    if ((bVar1 & 1) == 0) {
      pbVar6 = param_2 + 1;
    }
    iVar2 = memcmp(pbVar6,PTR_s_type_googleprod_com__007a3138,__n);
    if (iVar2 == 0) {
LAB_006eaea8:
      lVar4 = (**(code **)(*param_1 + 0x80))(param_1);
      uVar5 = FUN_0068bf28(*(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x18),param_3);
      return uVar5;
    }
  }
  return 0;
}


// ===== 006eaef0  FUN_006eaef0 =====

undefined8 FUN_006eaef0(void)

{
  return 0;
}


// ===== 006eaef8  FUN_006eaef8 =====

void FUN_006eaef8(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 4) = 0x7fffffff;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}


// ===== 006eaf0c  FUN_006eaf0c =====

void FUN_006eaf0c(void)

{
  return;
}


// ===== 006eaf10  FUN_006eaf10 =====

uint FUN_006eaf10(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  undefined1 uVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  undefined4 uVar9;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined *puStack_168;
  undefined8 *local_160;
  undefined1 auStack_158 [164];
  undefined1 local_b4;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined8 local_a8;
  uint local_a0;
  undefined4 local_9c;
  undefined1 local_98;
  undefined1 local_97;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined2 local_8c;
  long local_80;
  
  lVar6 = tpidr_el0;
  local_80 = *(long *)(lVar6 + 0x28);
  (**(code **)(*param_3 + 0x20))(param_3);
  bVar2 = *(byte *)((long)param_1 + 0x1f);
  uVar8 = (**(code **)(*param_3 + 0x80))(param_3);
  local_170 = param_1[2];
  uStack_178 = param_1[1];
  local_180 = *param_1;
  uVar9 = *(undefined4 *)((long)param_1 + 0x19);
  uVar3 = *(undefined1 *)((long)param_1 + 0x1d);
  cVar4 = *(char *)((long)param_1 + 0x1e);
  local_160 = &local_180;
  uVar5 = *(undefined1 *)(param_1 + 3);
  uVar1 = *(undefined4 *)(param_1 + 4);
  puStack_168 = PTR_DAT_007a3750 + 0x10;
                    /* try { // try from 006eafb0 to 006eafbf has its CatchHandler @ 006eb07c */
  FUN_006dbeec(auStack_158,param_2,&puStack_168);
  local_a0 = bVar2 ^ 1;
  local_8c = 0;
  local_b4 = 1;
  local_b0 = 1;
  if (cVar4 != '\0') {
    local_ac = 0x100;
  }
                    /* try { // try from 006eb000 to 006eb007 has its CatchHandler @ 006eb06c */
  local_a8 = uVar8;
  local_9c = uVar9;
  local_98 = uVar3;
  local_97 = uVar5;
  local_94 = uVar1;
  uStack_90 = uVar1;
  FUN_006dd460(auStack_158);
                    /* try { // try from 006eb008 to 006eb017 has its CatchHandler @ 006eb068 */
  uVar7 = FUN_006eb0a8(param_1,extraout_x1,param_3,&local_180);
  FUN_006dc048(auStack_158);
  FUN_006dbee8(&puStack_168);
  if (*(long *)(lVar6 + 0x28) == local_80) {
    return uVar7 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006eb0a8  FUN_006eb0a8 =====

void FUN_006eb0a8(long param_1,undefined8 param_2,long *param_3,long param_4)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  byte *pbVar7;
  byte local_88 [16];
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  byte *local_50;
  byte *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  do {
    if (*(int *)(param_4 + 0x28) == 1) {
      if ((*(byte *)(param_4 + 0xf5) & 1) == 0) {
        if (((*(byte *)(param_1 + 0x18) & 1) != 0) ||
           (uVar4 = (**(code **)(*param_3 + 0x28))(param_3), (uVar4 & 1) != 0)) {
          uVar5 = 1;
          if (*(long *)(lVar1 + 0x28) == local_38) {
            return;
          }
          goto LAB_006eb154;
        }
        local_50 = (byte *)0x0;
        local_48 = (byte *)0x0;
        local_40 = 0;
                    /* try { // try from 006eb160 to 006eb16b has its CatchHandler @ 006eb2d0 */
        FUN_006e53e0(param_3,&local_50);
                    /* try { // try from 006eb16c to 006eb17f has its CatchHandler @ 006eb2cc */
        FUN_006b142c(local_88,&local_50,&DAT_001c2f11);
                    /* try { // try from 006eb180 to 006eb193 has its CatchHandler @ 006eb29c */
        puVar6 = (ulong *)FUN_00713170(local_88,0,"Message missing required fields: ");
        local_60 = (void *)puVar6[2];
        uStack_68 = puVar6[1];
        local_70 = *puVar6;
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
                    /* try { // try from 006eb1ac to 006eb1bf has its CatchHandler @ 006eb258 */
        FUN_006eb56c(param_4,0xffffffff,0,&local_70);
        if ((local_70 & 1) != 0) {
          free(local_60);
        }
        pbVar2 = local_50;
        if ((local_88[0] & 1) != 0) {
          free(local_78);
          pbVar2 = local_50;
        }
        local_50 = pbVar2;
        pbVar7 = local_48;
        if (pbVar2 != (byte *)0x0) goto joined_r0x006eb208;
      }
      break;
    }
    uVar4 = FUN_006efb34(param_4,param_3);
  } while ((uVar4 & 1) != 0);
  uVar5 = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_006eb154:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
joined_r0x006eb208:
  while (pbVar3 = pbVar7, pbVar3 != pbVar2) {
    pbVar7 = pbVar3 + -0x18;
    if ((*pbVar7 & 1) != 0) {
      free(*(void **)(pbVar3 + -8));
    }
  }
  local_48 = pbVar2;
  free(local_50);
  uVar5 = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
  goto LAB_006eb154;
}


// ===== 006eb2f4  FUN_006eb2f4 =====

uint FUN_006eb2f4(undefined8 *param_1,byte *param_2,undefined8 param_3)

{
  byte *pbVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 auStack_68 [32];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = *(ulong *)(param_2 + 8);
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
    uVar5 = (ulong)(*param_2 >> 1);
  }
  if ((long)uVar5 < 0) {
    FUN_00676318(uVar5,"string length exceeds max size");
    uVar5 = FUN_006eb3f0(pbVar1,uVar5,*param_1);
  }
  else {
    uVar5 = FUN_006eb3f0(pbVar1,uVar5,*param_1);
  }
  if ((uVar5 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    bVar3 = (*param_2 & 1) != 0;
    pbVar1 = param_2 + 1;
    if (bVar3) {
      pbVar1 = *(byte **)(param_2 + 0x10);
    }
    uVar4 = (uint)(*param_2 >> 1);
    if (bVar3) {
      uVar4 = *(uint *)(param_2 + 8);
    }
    FUN_0066dc94(auStack_68,pbVar1,uVar4,0xffffffff);
    uVar4 = FUN_006eaf10(param_1,auStack_68,param_3);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4 & 1;
}


// ===== 006eb3f0  FUN_006eb3f0 =====

void FUN_006eb3f0(undefined8 param_1,ulong param_2,long *param_3)

{
  long lVar1;
  byte local_180 [16];
  void *local_170;
  char *local_168;
  size_t local_160;
  undefined1 *local_138;
  long local_130;
  undefined1 auStack_128 [32];
  undefined *local_108;
  size_t local_100;
  char *local_d8;
  size_t local_d0;
  undefined1 *local_a8;
  long local_a0;
  undefined1 auStack_98 [32];
  char *local_78;
  size_t local_70;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_2 >> 0x1f != 0) {
    local_78 = "Input size too large: ";
    local_70 = strlen("Input size too large: ");
    local_a8 = auStack_98;
    local_a0 = FUN_006779b4(param_2,auStack_98);
    local_a0 = local_a0 - (long)auStack_98;
    local_d8 = " bytes";
    local_d0 = strlen(" bytes");
    local_108 = &DAT_001cb555;
    local_100 = strlen(" > ");
    local_138 = auStack_128;
    local_130 = FUN_006778a4(0x7fffffff,auStack_128);
    local_130 = local_130 - (long)auStack_128;
    local_168 = " bytes.";
    local_160 = strlen(" bytes.");
    FUN_00678858(local_180,&local_78,&local_a8,&local_d8,&local_108,&local_138,&local_168);
                    /* try { // try from 006eb4e8 to 006eb4fb has its CatchHandler @ 006eb53c */
    (**(code **)(*param_3 + 0x10))(param_3,0xffffffff,0,local_180);
    if ((local_180[0] & 1) != 0) {
      free(local_170);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2 >> 0x1f == 0);
}


// ===== 006eb56c  FUN_006eb56c =====

void FUN_006eb56c(long *param_1,int param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 uStack_79;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)*param_1;
  *(undefined1 *)((long)param_1 + 0xf5) = 1;
  if (plVar2 == (long *)0x0) {
    if (param_2 < 0) {
      FUN_00675e64(auStack_78,2,
                   "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/text_format.cc"
                   ,0x155);
                    /* try { // try from 006eb680 to 006eb6b7 has its CatchHandler @ 006eb6f8 */
      uVar3 = FUN_00675a58(auStack_78,"Error parsing text-format ");
      uVar3 = FUN_00675a80(uVar3,*(long *)(param_1[0x1b] + 8) + 0x18);
      uVar3 = FUN_00675a58(uVar3,&DAT_001f2fbc);
      uVar3 = FUN_00675a80(uVar3,param_4);
                    /* try { // try from 006eb6b8 to 006eb6bf has its CatchHandler @ 006eb6f0 */
      FUN_00675ac0(&uStack_79,uVar3);
    }
    else {
      FUN_00675e64(auStack_78,2,
                   "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/text_format.cc"
                   ,0x151);
                    /* try { // try from 006eb60c to 006eb66b has its CatchHandler @ 006eb6fc */
      uVar3 = FUN_00675a58(auStack_78,"Error parsing text-format ");
      uVar3 = FUN_00675a80(uVar3,*(long *)(param_1[0x1b] + 8) + 0x18);
      uVar3 = FUN_00675a58(uVar3,&DAT_001f2fbc);
      uVar3 = FUN_00675d6c(uVar3,param_2 + 1);
      uVar3 = FUN_00675a58(uVar3,&DAT_001d9efd);
      uVar3 = FUN_00675d6c(uVar3,param_3 + 1);
      uVar3 = FUN_00675a58(uVar3,&DAT_001f2fbc);
      uVar3 = FUN_00675a80(uVar3,param_4);
                    /* try { // try from 006eb66c to 006eb673 has its CatchHandler @ 006eb6f4 */
      FUN_00675ac0(&uStack_79,uVar3);
    }
    FUN_00675e7c(auStack_78);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x006eb5e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))(plVar2,param_2,param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006eb724  FUN_006eb724 =====

void FUN_006eb724(undefined8 param_1,ulong param_2,long *param_3)

{
  if ((param_2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x006eb740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x28))(param_3,&DAT_001d5ef8,4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006eb750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x28))(param_3,"false",5);
  return;
}


// ===== 006eb754  FUN_006eb754 =====

void FUN_006eb754(undefined8 param_1,undefined4 param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 *__src;
  undefined1 *puVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 local_90;
  ulong local_88;
  void *local_80;
  undefined1 *local_78;
  ulong local_70;
  undefined1 auStack_68 [32];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_78 = auStack_68;
  puVar3 = (undefined1 *)FUN_006778a4(param_2,auStack_68);
  __src = local_78;
  uVar4 = (long)puVar3 - (long)auStack_68;
  local_70 = uVar4;
  if (0xfffffffffffffff7 < uVar4) {
    if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_90);
    }
    goto LAB_006eb8b8;
  }
  if (uVar4 < 0x17) {
    pvVar5 = (void *)((ulong)&local_90 | 1);
    local_90 = CONCAT71(local_90._1_7_,(char)((int)uVar4 << 1));
    if (puVar3 != auStack_68) goto LAB_006eb7fc;
  }
  else {
    uVar1 = (uVar4 & 0xfffffffffffffff8) + 8;
    if ((uVar4 | 7) != 0x17) {
      uVar1 = uVar4 | 7;
    }
    pvVar5 = (void *)FUN_00759c3c(uVar1 + 1);
    local_90 = uVar1 + 1 | 1;
    local_88 = uVar4;
    local_80 = pvVar5;
LAB_006eb7fc:
    memmove(pvVar5,__src,uVar4);
  }
  *(undefined1 *)((long)pvVar5 + uVar4) = 0;
  uVar4 = local_88;
  pvVar5 = local_80;
  if ((local_90 & 1) == 0) {
    uVar4 = local_90 >> 1 & 0x7f;
    pvVar5 = (void *)((long)&local_90 + 1);
  }
                    /* try { // try from 006eb834 to 006eb83b has its CatchHandler @ 006eb88c */
  (**(code **)(*param_3 + 0x28))(param_3,pvVar5,uVar4);
  if ((local_90 & 1) != 0) {
    free(local_80);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_006eb8b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006eb8bc  FUN_006eb8bc =====

void FUN_006eb8bc(undefined8 param_1,undefined4 param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 *__src;
  undefined1 *puVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 local_90;
  ulong local_88;
  void *local_80;
  undefined1 *local_78;
  ulong local_70;
  undefined1 auStack_68 [32];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_78 = auStack_68;
  puVar3 = (undefined1 *)FUN_0067770c(param_2,auStack_68);
  __src = local_78;
  uVar4 = (long)puVar3 - (long)auStack_68;
  local_70 = uVar4;
  if (0xfffffffffffffff7 < uVar4) {
    if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_90);
    }
    goto LAB_006eba20;
  }
  if (uVar4 < 0x17) {
    pvVar5 = (void *)((ulong)&local_90 | 1);
    local_90 = CONCAT71(local_90._1_7_,(char)((int)uVar4 << 1));
    if (puVar3 != auStack_68) goto LAB_006eb964;
  }
  else {
    uVar1 = (uVar4 & 0xfffffffffffffff8) + 8;
    if ((uVar4 | 7) != 0x17) {
      uVar1 = uVar4 | 7;
    }
    pvVar5 = (void *)FUN_00759c3c(uVar1 + 1);
    local_90 = uVar1 + 1 | 1;
    local_88 = uVar4;
    local_80 = pvVar5;
LAB_006eb964:
    memmove(pvVar5,__src,uVar4);
  }
  *(undefined1 *)((long)pvVar5 + uVar4) = 0;
  uVar4 = local_88;
  pvVar5 = local_80;
  if ((local_90 & 1) == 0) {
    uVar4 = local_90 >> 1 & 0x7f;
    pvVar5 = (void *)((long)&local_90 + 1);
  }
                    /* try { // try from 006eb99c to 006eb9a3 has its CatchHandler @ 006eb9f4 */
  (**(code **)(*param_3 + 0x28))(param_3,pvVar5,uVar4);
  if ((local_90 & 1) != 0) {
    free(local_80);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_006eba20:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006eba24  FUN_006eba24 =====

void FUN_006eba24(undefined8 param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 *__src;
  undefined1 *puVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 local_90;
  ulong local_88;
  void *local_80;
  undefined1 *local_78;
  ulong local_70;
  undefined1 auStack_68 [32];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_78 = auStack_68;
  puVar3 = (undefined1 *)FUN_006779b4(param_2,auStack_68);
  __src = local_78;
  uVar4 = (long)puVar3 - (long)auStack_68;
  local_70 = uVar4;
  if (0xfffffffffffffff7 < uVar4) {
    if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_90);
    }
    goto LAB_006ebb88;
  }
  if (uVar4 < 0x17) {
    pvVar5 = (void *)((ulong)&local_90 | 1);
    local_90 = CONCAT71(local_90._1_7_,(char)((int)uVar4 << 1));
    if (puVar3 != auStack_68) goto LAB_006ebacc;
  }
  else {
    uVar1 = (uVar4 & 0xfffffffffffffff8) + 8;
    if ((uVar4 | 7) != 0x17) {
      uVar1 = uVar4 | 7;
    }
    pvVar5 = (void *)FUN_00759c3c(uVar1 + 1);
    local_90 = uVar1 + 1 | 1;
    local_88 = uVar4;
    local_80 = pvVar5;
LAB_006ebacc:
    memmove(pvVar5,__src,uVar4);
  }
  *(undefined1 *)((long)pvVar5 + uVar4) = 0;
  uVar4 = local_88;
  pvVar5 = local_80;
  if ((local_90 & 1) == 0) {
    uVar4 = local_90 >> 1 & 0x7f;
    pvVar5 = (void *)((long)&local_90 + 1);
  }
                    /* try { // try from 006ebb04 to 006ebb0b has its CatchHandler @ 006ebb5c */
  (**(code **)(*param_3 + 0x28))(param_3,pvVar5,uVar4);
  if ((local_90 & 1) != 0) {
    free(local_80);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_006ebb88:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006ebb8c  FUN_006ebb8c =====

void FUN_006ebb8c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 *__src;
  undefined1 *puVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 local_90;
  ulong local_88;
  void *local_80;
  undefined1 *local_78;
  ulong local_70;
  undefined1 auStack_68 [32];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_78 = auStack_68;
  puVar3 = (undefined1 *)FUN_006778bc(param_2,auStack_68);
  __src = local_78;
  uVar4 = (long)puVar3 - (long)auStack_68;
  local_70 = uVar4;
  if (0xfffffffffffffff7 < uVar4) {
    if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_90);
    }
    goto LAB_006ebcf0;
  }
  if (uVar4 < 0x17) {
    pvVar5 = (void *)((ulong)&local_90 | 1);
    local_90 = CONCAT71(local_90._1_7_,(char)((int)uVar4 << 1));
    if (puVar3 != auStack_68) goto LAB_006ebc34;
  }
  else {
    uVar1 = (uVar4 & 0xfffffffffffffff8) + 8;
    if ((uVar4 | 7) != 0x17) {
      uVar1 = uVar4 | 7;
    }
    pvVar5 = (void *)FUN_00759c3c(uVar1 + 1);
    local_90 = uVar1 + 1 | 1;
    local_88 = uVar4;
    local_80 = pvVar5;
LAB_006ebc34:
    memmove(pvVar5,__src,uVar4);
  }
  *(undefined1 *)((long)pvVar5 + uVar4) = 0;
  uVar4 = local_88;
  pvVar5 = local_80;
  if ((local_90 & 1) == 0) {
    uVar4 = local_90 >> 1 & 0x7f;
    pvVar5 = (void *)((long)&local_90 + 1);
  }
                    /* try { // try from 006ebc6c to 006ebc73 has its CatchHandler @ 006ebcc4 */
  (**(code **)(*param_3 + 0x28))(param_3,pvVar5,uVar4);
  if ((local_90 & 1) != 0) {
    free(local_80);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_006ebcf0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006ebcf4  FUN_006ebcf4 =====

void FUN_006ebcf4(float param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  size_t sVar3;
  void *pvVar4;
  undefined8 local_50;
  size_t local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (NAN(param_1)) {
    sVar3 = strlen("nan");
    if (0xfffffffffffffff7 < sVar3) {
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(&local_50);
      }
      goto LAB_006ebe5c;
    }
    if (sVar3 < 0x17) {
      pvVar4 = (void *)((ulong)&local_50 | 1);
      local_50 = CONCAT71(local_50._1_7_,(char)((int)sVar3 << 1));
      if (sVar3 != 0) goto LAB_006ebdf4;
    }
    else {
      uVar1 = (sVar3 & 0xfffffffffffffff8) + 8;
      if ((sVar3 | 7) != 0x17) {
        uVar1 = sVar3 | 7;
      }
      pvVar4 = (void *)FUN_00759c3c(uVar1 + 1);
      local_50 = uVar1 + 1 | 1;
      local_48 = sVar3;
      local_40 = pvVar4;
LAB_006ebdf4:
      memcpy(pvVar4,&DAT_001f2bf6,sVar3);
    }
    *(undefined1 *)((long)pvVar4 + sVar3) = 0;
  }
  else {
    FUN_00677b94(&local_50);
  }
  sVar3 = local_48;
  pvVar4 = local_40;
  if ((local_50 & 1) == 0) {
    sVar3 = local_50 >> 1 & 0x7f;
    pvVar4 = (void *)((long)&local_50 + 1);
  }
                    /* try { // try from 006ebd4c to 006ebd53 has its CatchHandler @ 006ebe30 */
  (**(code **)(*param_3 + 0x28))(param_3,pvVar4,sVar3);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_006ebe5c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006ebe60  FUN_006ebe60 =====

void FUN_006ebe60(double param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  size_t sVar3;
  void *pvVar4;
  undefined8 local_50;
  size_t local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (NAN(param_1)) {
    sVar3 = strlen("nan");
    if (0xfffffffffffffff7 < sVar3) {
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(&local_50);
      }
      goto LAB_006ebfc8;
    }
    if (sVar3 < 0x17) {
      pvVar4 = (void *)((ulong)&local_50 | 1);
      local_50 = CONCAT71(local_50._1_7_,(char)((int)sVar3 << 1));
      if (sVar3 != 0) goto LAB_006ebf60;
    }
    else {
      uVar1 = (sVar3 & 0xfffffffffffffff8) + 8;
      if ((sVar3 | 7) != 0x17) {
        uVar1 = sVar3 | 7;
      }
      pvVar4 = (void *)FUN_00759c3c(uVar1 + 1);
      local_50 = uVar1 + 1 | 1;
      local_48 = sVar3;
      local_40 = pvVar4;
LAB_006ebf60:
      memcpy(pvVar4,&DAT_001f2bf6,sVar3);
    }
    *(undefined1 *)((long)pvVar4 + sVar3) = 0;
  }
  else {
    FUN_006779cc(&local_50);
  }
  sVar3 = local_48;
  pvVar4 = local_40;
  if ((local_50 & 1) == 0) {
    sVar3 = local_50 >> 1 & 0x7f;
    pvVar4 = (void *)((long)&local_50 + 1);
  }
                    /* try { // try from 006ebeb8 to 006ebebf has its CatchHandler @ 006ebf9c */
  (**(code **)(*param_3 + 0x28))(param_3,pvVar4,sVar3);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_006ebfc8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006ebfcc  FUN_006ebfcc =====

void FUN_006ebfcc(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  byte local_50;
  undefined1 auStack_4f [7];
  ulong local_48;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x28))(param_3,&DAT_001e5312,1);
  FUN_006774fc(&local_50,param_2);
  puVar2 = local_40;
  if ((local_50 & 1) == 0) {
    local_48 = (ulong)(local_50 >> 1);
    puVar2 = auStack_4f;
  }
                    /* try { // try from 006ec040 to 006ec047 has its CatchHandler @ 006ec098 */
  (**(code **)(*param_3 + 0x28))(param_3,puVar2,local_48);
  if ((local_50 & 1) != 0) {
    free(local_40);
  }
  (**(code **)(*param_3 + 0x28))(param_3,&DAT_001e5312,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006ec0c8  FUN_006ec0c8 =====

void FUN_006ec0c8(undefined8 param_1,undefined8 param_2,byte *param_3,long *param_4)

{
  ulong uVar1;
  byte *pbVar2;
  
  uVar1 = *(ulong *)(param_3 + 8);
  pbVar2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
    uVar1 = (ulong)(*param_3 >> 1);
  }
                    /* WARNING: Could not recover jumptable at 0x006ec0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_4 + 0x28))(param_4,pbVar2,uVar1);
  return;
}


// ===== 006ec0f0  FUN_006ec0f0 =====

void FUN_006ec0f0(void)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long in_x3;
  long *in_x4;
  byte *pbVar6;
  long local_60;
  code *pcStack_58;
  undefined8 **local_50;
  code **local_48;
  undefined1 *puStack_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((*(byte *)(in_x3 + 1) >> 3 & 1) == 0) {
    plVar4 = *(long **)(in_x3 + 0x18);
    if ((plVar4 != (long *)0x0) &&
       (pcStack_58 = thunk_FUN_006af330, local_60 = in_x3, *plVar4 != -1)) {
      local_48 = &pcStack_58;
      local_50 = &local_48;
      puStack_40 = (undefined1 *)&local_60;
      FUN_00710f84(plVar4,&local_50,FUN_00685640);
    }
    if (*(char *)(in_x3 + 2) == '\n') {
      lVar5 = FUN_0068c940(in_x3);
      pbVar6 = *(byte **)(lVar5 + 8);
      uVar1 = *(ulong *)(pbVar6 + 8);
      pbVar2 = *(byte **)(pbVar6 + 0x10);
      if ((*pbVar6 & 1) == 0) {
        pbVar2 = pbVar6 + 1;
        uVar1 = (ulong)(*pbVar6 >> 1);
      }
      (**(code **)(*in_x4 + 0x28))(in_x4,pbVar2,uVar1);
    }
    else {
      pbVar6 = *(byte **)(in_x3 + 8);
      uVar1 = *(ulong *)(pbVar6 + 8);
      pbVar2 = *(byte **)(pbVar6 + 0x10);
      if ((*pbVar6 & 1) == 0) {
        pbVar2 = pbVar6 + 1;
        uVar1 = (ulong)(*pbVar6 >> 1);
      }
      (**(code **)(*in_x4 + 0x28))(in_x4,pbVar2,uVar1);
    }
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return;
    }
  }
  else {
    (**(code **)(*in_x4 + 0x28))(in_x4,&DAT_001cf3bb,1);
    pbVar6 = (byte *)FUN_006af7b8(in_x3);
    uVar1 = *(ulong *)(pbVar6 + 8);
    pbVar2 = *(byte **)(pbVar6 + 0x10);
    if ((*pbVar6 & 1) == 0) {
      pbVar2 = pbVar6 + 1;
      uVar1 = (ulong)(*pbVar6 >> 1);
    }
    (**(code **)(*in_x4 + 0x28))(in_x4,pbVar2,uVar1);
    if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Could not recover jumptable at 0x006ec22c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*in_x4 + 0x28))(in_x4,&DAT_001e1051,1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006ec284  FUN_006ec284 =====

void FUN_006ec284(void)

{
  undefined *puVar1;
  uint in_w4;
  long *in_x5;
  
  puVar1 = &DAT_001dc055;
  if ((in_w4 & 1) == 0) {
    puVar1 = &DAT_001c03cd;
  }
                    /* WARNING: Could not recover jumptable at 0x006ec2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_x5 + 0x28))(in_x5,puVar1,2);
  return;
}


// ===== 006ec2b0  FUN_006ec2b0 =====

void FUN_006ec2b0(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong __n;
  undefined1 *__dest;
  void *__src;
  
  __n = param_2[1];
  if (0xfffffffffffffff7 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(param_1);
  }
  __src = (void *)*param_2;
  if (__n < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) {
      *__dest = 0;
      return;
    }
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
    __dest = (undefined1 *)FUN_00759c3c(uVar1 + 1);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar1 + 1 | 1;
  }
  memmove(__dest,__src,__n);
  __dest[__n] = 0;
  return;
}


// ===== 006ec358  FUN_006ec358 =====

void FUN_006ec358(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006ec360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))();
  return;
}


// ===== 006ec364  FUN_006ec364 =====

void FUN_006ec364(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
                    /* WARNING: Could not recover jumptable at 0x006ec378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1,param_2,param_5,param_6,param_7);
  return;
}


// ===== 006ec37c  FUN_006ec37c =====

undefined8 FUN_006ec37c(void)

{
  return 0;
}


// ===== 006ec384  FUN_006ec384 =====

void FUN_006ec384(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[5] = 0;
  param_1[4] = param_1 + 5;
  param_1[6] = 0;
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[7] = param_1 + 8;
  param_1[9] = 0;
  param_1[10] = 0;
                    /* try { // try from 006ec3cc to 006ec3d3 has its CatchHandler @ 006ec3f8 */
  puVar1 = (undefined8 *)FUN_00759c3c(8);
  *puVar1 = &PTR_FUN_0079b728;
  param_1[3] = puVar1;
  return;
}


// ===== 006ec438  FUN_006ec438 =====

void FUN_006ec438(undefined4 *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  char cVar3;
  undefined *local_60;
  long *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_DAT_007a3758 + 0x10;
  local_42 = *(undefined1 *)((long)param_1 + 7);
  local_44 = 1;
  local_40 = *param_1;
  local_50 = 0;
  local_48 = 0;
  local_60 = puVar1;
  local_58 = param_3;
  uStack_3c = local_40;
                    /* try { // try from 006ec488 to 006ec48f has its CatchHandler @ 006ec4e0 */
  FUN_006ec528(param_1,param_2,&local_60);
  cVar3 = local_44._1_1_;
  local_60 = puVar1;
  if (local_44._1_1_ == '\0') {
                    /* try { // try from 006ec4ac to 006ec4af has its CatchHandler @ 006ec4dc */
    (**(code **)(*local_58 + 0x18))(local_58,local_48);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar3 == '\0');
}


// ===== 006ec528  FUN_006ec528 =====

void FUN_006ec528(long param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  size_t sVar2;
  void *__s1;
  undefined1 *puVar3;
  byte bVar4;
  char cVar5;
  long lVar6;
  undefined8 *puVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  size_t __n;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long extraout_x1;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  byte local_88;
  undefined1 auStack_87 [7];
  uint local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  (**(code **)(*param_2 + 0x80))(param_2);
  if (extraout_x1 == 0) {
    local_70 = (undefined8 *)0x0;
    local_68 = (undefined8 *)0x0;
    local_60 = 0;
                    /* try { // try from 006ec7a8 to 006ec7b7 has its CatchHandler @ 006ec8d8 */
    FUN_0066ee24(&local_88,param_2);
    bVar8 = (local_88 & 1) == 0;
    puVar3 = local_78;
    if (bVar8) {
      puVar3 = auStack_87;
    }
    uVar1 = (uint)(local_88 >> 1);
    if (!bVar8) {
      uVar1 = local_80;
    }
                    /* try { // try from 006ec7d4 to 006ec7df has its CatchHandler @ 006ec8c0 */
    FUN_0066dc94(&local_a8,puVar3,uVar1,0xffffffff);
                    /* try { // try from 006ec7e0 to 006ec7eb has its CatchHandler @ 006ec8bc */
    FUN_006fb62c(&local_70,&local_a8);
    if ((local_88 & 1) != 0) {
      free(local_78);
    }
                    /* try { // try from 006ec7fc to 006ec80f has its CatchHandler @ 006ec8b8 */
    FUN_006ec95c(param_1,&local_70,param_3,10);
    if (local_70 != local_68) {
                    /* try { // try from 006ec81c to 006ec823 has its CatchHandler @ 006ec8b0 */
      FUN_006fa9f8(&local_70);
    }
    if (local_70 != (undefined8 *)0x0) {
      local_68 = local_70;
      puVar13 = local_70;
      goto LAB_006ec830;
    }
  }
  else {
    uVar10 = (**(code **)(*param_2 + 0x80))(param_2);
    plVar14 = (long *)(param_1 + 0x40);
    plVar15 = (long *)*plVar14;
    plVar16 = plVar14;
    if (plVar15 != (long *)0x0) {
      do {
        lVar17 = 8;
        if (uVar10 <= (ulong)plVar15[4]) {
          lVar17 = 0;
          plVar16 = plVar15;
        }
        plVar15 = *(long **)((long)plVar15 + lVar17);
      } while (plVar15 != (long *)0x0);
      if (plVar16 != plVar14) {
        plVar15 = plVar14;
        if ((ulong)plVar16[4] <= uVar10) {
          plVar15 = plVar16;
        }
        if (plVar14 != plVar15) {
          if (*(long *)(lVar6 + 0x28) == local_58) {
                    /* WARNING: Could not recover jumptable at 0x006ec79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar15[5] + 0x10))
                      ((long *)plVar15[5],param_2,*(undefined1 *)(param_1 + 4),param_3);
            return;
          }
          goto LAB_006ec914;
        }
      }
    }
    lVar17 = *(long *)(uVar10 + 8);
    __n = strlen(PTR_s_google_protobuf_Any_007a3128);
    bVar4 = *(byte *)(lVar17 + 0x18);
    sVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar2 = *(size_t *)(lVar17 + 0x20);
    }
    if (__n == sVar2) {
      if (__n == 0xffffffffffffffff) {
        if (*(long *)(lVar6 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006ec8a0 to 006ec8a3 has its CatchHandler @ 006ec8a4 */
          FUN_0030b8f4();
        }
        goto LAB_006ec914;
      }
      __s1 = (void *)(lVar17 + 0x19);
      if ((bVar4 & 1) != 0) {
        __s1 = *(void **)(lVar17 + 0x28);
      }
      iVar9 = memcmp(__s1,PTR_s_google_protobuf_Any_007a3128,__n);
      if (((iVar9 == 0) && (*(char *)(param_1 + 10) != '\0')) &&
         (uVar11 = FUN_006ed6fc(param_1,param_2,param_3), (uVar11 & 1) != 0)) goto LAB_006ec834;
    }
    local_a8 = (undefined8 *)0x0;
    local_a0 = (undefined8 *)0x0;
    local_98 = (undefined8 *)0x0;
    if (*(char *)(*(long *)(uVar10 + 0x20) + 0x4b) == '\0') {
                    /* try { // try from 006ec860 to 006ec87f has its CatchHandler @ 006ec8b4 */
      FUN_0067cb34(extraout_x1,param_2,&local_a8);
      (**(code **)(*param_2 + 0x80))(param_2);
      cVar5 = *(char *)(param_1 + 9);
      puVar13 = local_a8;
    }
    else {
      uVar18 = *(undefined8 *)(uVar10 + 0x28);
                    /* try { // try from 006ec660 to 006ec667 has its CatchHandler @ 006ec8ac */
      puVar12 = (undefined8 *)FUN_00759c3c(8);
      local_98 = puVar12 + 1;
      *puVar12 = uVar18;
      lVar17 = *(long *)(uVar10 + 0x28);
      local_a8 = puVar12;
                    /* try { // try from 006ec680 to 006ec687 has its CatchHandler @ 006ec8a8 */
      puVar13 = (undefined8 *)FUN_00759c3c(0x10);
      *puVar13 = *puVar12;
      puVar13[1] = lVar17 + 0x48;
      local_a8 = puVar13;
      local_98 = puVar13 + 2;
      free(puVar12);
      cVar5 = *(char *)(param_1 + 9);
      local_a0 = puVar13 + 2;
    }
    puVar12 = local_a0;
    if (cVar5 != '\0') {
      lVar17 = 0;
      if (local_a0 != puVar13) {
        lVar17 = LZCOUNT((long)local_a0 - (long)puVar13 >> 3) * -2 + 0x7e;
      }
      FUN_006f7fe4(puVar13,local_a0,lVar17,1);
      puVar13 = local_a8;
      puVar12 = local_a0;
    }
    for (; puVar7 = local_a0, puVar13 != local_a0; puVar13 = puVar13 + 1) {
      local_a0 = puVar12;
                    /* try { // try from 006ec6f8 to 006ec70b has its CatchHandler @ 006ec8e8 */
      FUN_006edc00(param_1,param_2,extraout_x1,*puVar13,param_3);
      puVar12 = local_a0;
      local_a0 = puVar7;
    }
    local_a0 = puVar12;
    if (*(char *)(param_1 + 8) == '\0') {
                    /* try { // try from 006ec720 to 006ec73f has its CatchHandler @ 006ec8b4 */
      uVar18 = FUN_006795dc(extraout_x1,param_2);
      FUN_006ec95c(param_1,uVar18,param_3,10);
    }
    if (local_a8 != (undefined8 *)0x0) {
      local_a0 = local_a8;
      puVar13 = local_a8;
LAB_006ec830:
      free(puVar13);
    }
  }
LAB_006ec834:
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
LAB_006ec914:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006ec918  FUN_006ec918 =====

void FUN_006ec918(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0079b7c0;
  if ((*(byte *)((long)param_1 + 0x1d) & 1) == 0) {
                    /* try { // try from 006ec948 to 006ec94f has its CatchHandler @ 006ec958 */
    (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],*(undefined4 *)(param_1 + 3));
  }
  return;
}


// ===== 006ec95c  FUN_006ec95c =====

void FUN_006ec95c(long param_1,long *param_2,long *param_3,int param_4)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  byte *pbVar4;
  size_t sVar5;
  size_t sVar6;
  ulong uVar7;
  void *pvVar8;
  undefined *puVar9;
  undefined8 uVar10;
  int iVar11;
  void *pvVar12;
  void *pvVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte local_118 [8];
  ulong local_110;
  void *local_108;
  byte *local_100;
  byte *local_f8;
  void *local_f0;
  ulong local_e8;
  byte *local_e0;
  void *local_d8;
  byte *local_d0;
  byte *local_c8;
  byte abStack_c0 [8];
  uint local_b8;
  undefined8 local_b4;
  undefined2 local_ac;
  uint local_a8;
  undefined8 local_a4;
  int local_9c;
  int iStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  lVar15 = *param_2;
  if (0 < (int)((ulong)(param_2[1] - lVar15) >> 4)) {
    pvVar12 = (void *)((ulong)&local_e8 | 1);
    lVar16 = 0;
    lVar17 = 0;
    pvVar13 = (void *)((ulong)&local_100 | 1);
    do {
      local_d0 = abStack_c0;
      pbVar4 = (byte *)FUN_006778a4(*(undefined4 *)(lVar15 + lVar16),abStack_c0);
      pbVar19 = local_d0;
      pbVar18 = pbVar4 + -(long)abStack_c0;
      local_c8 = pbVar18;
      if ((byte *)0xfffffffffffffff7 < pbVar18) {
        if (*(long *)(lVar2 + 0x28) == local_80) {
                    /* WARNING: Subroutine does not return */
          FUN_002fb400(&local_e8);
        }
        goto LAB_006ed6f8;
      }
      if (pbVar18 < (byte *)0x17) {
        local_e8 = CONCAT71(local_e8._1_7_,(char)((int)pbVar18 << 1));
        pvVar8 = pvVar12;
        if (pbVar4 != abStack_c0) goto LAB_006ecb7c;
        *(byte *)((long)pvVar12 + (long)pbVar18) = 0;
        iVar11 = *(int *)(lVar15 + lVar16 + 4);
        if (iVar11 < 2) goto LAB_006ecba0;
LAB_006eca70:
        if (iVar11 == 2) {
          pvVar8 = pvVar12;
          pbVar19 = (byte *)(ulong)((byte)local_e8 >> 1);
          if ((local_e8 & 1) != 0) {
            pvVar8 = local_d8;
            pbVar19 = local_e0;
          }
                    /* try { // try from 006eccc4 to 006ecd53 has its CatchHandler @ 006ed6d0 */
          (**(code **)(*param_3 + 0x28))(param_3,pvVar8,pbVar19);
          sVar5 = strlen(": ");
          if ((long)sVar5 < 0) {
                    /* try { // try from 006ed458 to 006ed4b7 has its CatchHandler @ 006ed6d0 */
            FUN_00676318(sVar5,"string length exceeds max size");
          }
          sVar6 = strlen("0x");
          if ((long)sVar6 < 0) {
            FUN_00676318(sVar6,"string length exceeds max size");
          }
          (**(code **)(*param_3 + 0x28))(param_3,&DAT_001f2fbc,sVar5);
          if (*(char *)((long)param_3 + 0x1e) != '\0') {
            *(undefined1 *)((long)param_3 + 0x1e) = 0;
            (**(code **)(*param_3 + 0x28))(param_3,PTR_DAT_007a3760,0);
          }
          (**(code **)(*param_3 + 0x28))(param_3,&DAT_001d5cf9,sVar6);
                    /* try { // try from 006ecd5c to 006ecd67 has its CatchHandler @ 006ed6a8 */
          FUN_00678534(&local_d0,*(undefined8 *)(lVar15 + lVar16 + 8),0x10);
          pbVar4 = local_c8;
          pbVar19 = local_d0;
          if (local_c8 < &DAT_fffffffffffffff8) {
            if (local_c8 < (byte *)0x17) {
              local_100 = (byte *)CONCAT71(local_100._1_7_,(char)((int)local_c8 << 1));
              pvVar8 = pvVar13;
              if (local_c8 != (byte *)0x0) goto LAB_006ed188;
            }
            else {
              uVar7 = ((ulong)local_c8 & 0xfffffffffffffff8) + 8;
              if (((ulong)local_c8 | 7) != 0x17) {
                uVar7 = (ulong)local_c8 | 7;
              }
                    /* try { // try from 006ed170 to 006ed177 has its CatchHandler @ 006ed6a8 */
              pvVar8 = (void *)FUN_00759c3c(uVar7 + 1);
              local_100 = (byte *)(uVar7 + 1 | 1);
              local_f8 = pbVar4;
              local_f0 = pvVar8;
LAB_006ed188:
              memmove(pvVar8,pbVar19,(size_t)pbVar4);
            }
            *(byte *)((long)pvVar8 + (long)pbVar4) = 0;
            pvVar8 = pvVar13;
            pbVar19 = (byte *)((ulong)local_100 >> 1 & 0x7f);
            if (((ulong)local_100 & 1) != 0) {
              pvVar8 = local_f0;
              pbVar19 = local_f8;
            }
                    /* try { // try from 006ed1c0 to 006ed1c7 has its CatchHandler @ 006ed658 */
            (**(code **)(*param_3 + 0x28))(param_3,pvVar8,pbVar19);
            goto LAB_006ed23c;
          }
          if (*(long *)(lVar2 + 0x28) == local_80) {
                    /* try { // try from 006ed608 to 006ed60f has its CatchHandler @ 006ed654 */
                    /* WARNING: Subroutine does not return */
            FUN_002fb400(&local_100);
          }
          goto LAB_006ed6f8;
        }
        if (iVar11 != 3) {
          if (iVar11 != 4) goto LAB_006ed368;
          pvVar8 = pvVar12;
          pbVar19 = (byte *)(ulong)((byte)local_e8 >> 1);
          if ((local_e8 & 1) != 0) {
            pvVar8 = local_d8;
            pbVar19 = local_e0;
          }
                    /* try { // try from 006ecaac to 006ecb47 has its CatchHandler @ 006ed6d0 */
          (**(code **)(*param_3 + 0x28))(param_3,pvVar8,pbVar19);
          cVar1 = *(char *)(param_1 + 4);
          sVar5 = strlen(" ");
          if (cVar1 == '\0') {
            if ((long)sVar5 < 0) {
              FUN_00676318(sVar5,"string length exceeds max size");
            }
            sVar6 = strlen("{\n");
            if ((long)sVar6 < 0) {
              FUN_00676318(sVar6,"string length exceeds max size");
            }
                    /* try { // try from 006ed29c to 006ed367 has its CatchHandler @ 006ed6d0 */
            (**(code **)(*param_3 + 0x28))(param_3,&DAT_001bc0af,sVar5);
            if (*(char *)((long)param_3 + 0x1e) != '\0') {
              *(undefined1 *)((long)param_3 + 0x1e) = 0;
              (**(code **)(*param_3 + 0x28))(param_3,PTR_DAT_007a3760,0);
            }
            (**(code **)(*param_3 + 0x28))(param_3,&DAT_001f90d6,sVar6);
            (**(code **)(*param_3 + 0x10))(param_3);
          }
          else {
            if ((long)sVar5 < 0) {
                    /* try { // try from 006ed4e4 to 006ed52f has its CatchHandler @ 006ed6d0 */
              FUN_00676318(sVar5,"string length exceeds max size");
            }
            sVar6 = strlen("{ ");
            if ((long)sVar6 < 0) {
              FUN_00676318(sVar6,"string length exceeds max size");
            }
            (**(code **)(*param_3 + 0x28))(param_3,&DAT_001bc0af,sVar5);
            if (*(char *)((long)param_3 + 0x1e) != '\0') {
              *(undefined1 *)((long)param_3 + 0x1e) = 0;
              (**(code **)(*param_3 + 0x28))(param_3,PTR_DAT_007a3760,0);
            }
            (**(code **)(*param_3 + 0x28))(param_3,&DAT_001e46a9,sVar6);
          }
          FUN_006ec95c(param_1,*(undefined8 *)(lVar15 + lVar16 + 8),param_3,param_4 + -1);
          lVar15 = *param_3;
          if (*(char *)(param_1 + 4) == '\0') {
            (**(code **)(lVar15 + 0x18))(param_3);
            lVar15 = *param_3;
            puVar9 = &DAT_001c03cd;
          }
          else {
            puVar9 = &DAT_001dc055;
          }
          uVar10 = 2;
          goto LAB_006ed35c;
        }
        pvVar8 = pvVar12;
        pbVar19 = (byte *)(ulong)((byte)local_e8 >> 1);
        if ((local_e8 & 1) != 0) {
          pvVar8 = local_d8;
          pbVar19 = local_e0;
        }
                    /* try { // try from 006ecdb8 to 006ecdbf has its CatchHandler @ 006ed6d0 */
        (**(code **)(*param_3 + 0x28))(param_3,pvVar8,pbVar19);
        pbVar19 = *(byte **)(lVar15 + lVar16 + 8);
        local_d0 = *(byte **)(pbVar19 + 0x10);
        local_b4 = 0;
        bVar3 = (*pbVar19 & 1) == 0;
        local_ac = 0;
        if (bVar3) {
          local_d0 = pbVar19 + 1;
        }
        local_a4 = 0x7ff8000000000000;
        local_b8 = (uint)(*pbVar19 >> 1);
        if (!bVar3) {
          local_b8 = (uint)*(undefined8 *)(pbVar19 + 8);
        }
        local_90 = 0;
        uStack_88 = 0;
        local_c8 = local_d0 + (int)local_b8;
        abStack_c0[0] = 0;
        abStack_c0[1] = 0;
        abStack_c0[2] = 0;
        abStack_c0[3] = 0;
        abStack_c0[4] = 0;
        abStack_c0[5] = 0;
        abStack_c0[6] = 0;
        abStack_c0[7] = 0;
        local_100 = (byte *)0x0;
        local_f8 = (byte *)0x0;
        local_f0 = (void *)0x0;
        uVar7 = (ulong)(*pbVar19 >> 1);
        if ((*pbVar19 & 1) != 0) {
          uVar7 = *(ulong *)(pbVar19 + 8);
        }
        local_a8 = local_b8;
        local_9c = param_4;
        iStack_98 = param_4;
                    /* try { // try from 006ece38 to 006ecedb has its CatchHandler @ 006ed6b0 */
        if (((param_4 < 1) || (uVar7 == 0)) ||
           (uVar7 = FUN_006fb5f4(&local_100,&local_d0), (uVar7 & 1) == 0)) {
          sVar5 = strlen(": ");
          if ((long)sVar5 < 0) {
                    /* try { // try from 006ed4bc to 006ed4df has its CatchHandler @ 006ed6b0 */
            FUN_00676318(sVar5,"string length exceeds max size");
          }
          sVar6 = strlen("\"");
          if ((long)sVar6 < 0) {
            FUN_00676318(sVar6,"string length exceeds max size");
          }
                    /* try { // try from 006ecfdc to 006ed033 has its CatchHandler @ 006ed6b0 */
          (**(code **)(*param_3 + 0x28))(param_3,&DAT_001f2fbc,sVar5);
          if (*(char *)((long)param_3 + 0x1e) != '\0') {
            *(undefined1 *)((long)param_3 + 0x1e) = 0;
            (**(code **)(*param_3 + 0x28))(param_3,PTR_DAT_007a3760,0);
          }
          (**(code **)(*param_3 + 0x28))(param_3,&DAT_001e5312,sVar6);
                    /* try { // try from 006ed034 to 006ed03f has its CatchHandler @ 006ed648 */
          FUN_006774fc(local_118,pbVar19);
          pvVar8 = (void *)((ulong)local_118 | 1);
          uVar7 = (ulong)(local_118[0] >> 1);
          if ((local_118[0] & 1) != 0) {
            pvVar8 = local_108;
            uVar7 = local_110;
          }
                    /* try { // try from 006ed064 to 006ed06b has its CatchHandler @ 006ed630 */
          (**(code **)(*param_3 + 0x28))(param_3,pvVar8,uVar7);
          if ((local_118[0] & 1) != 0) {
            free(local_108);
          }
          puVar14 = (undefined8 *)(*param_3 + 0x28);
          puVar9 = &UNK_001cf9a2;
          if (*(char *)(param_1 + 4) != '\0') {
            puVar9 = &DAT_001f9152;
          }
        }
        else {
          cVar1 = *(char *)(param_1 + 4);
          sVar5 = strlen(" ");
          if (cVar1 == '\0') {
            if ((long)sVar5 < 0) {
              FUN_00676318(sVar5,"string length exceeds max size");
            }
            sVar6 = strlen("{\n");
            if ((long)sVar6 < 0) {
              FUN_00676318(sVar6,"string length exceeds max size");
            }
                    /* try { // try from 006ed39c to 006ed443 has its CatchHandler @ 006ed6b0 */
            (**(code **)(*param_3 + 0x28))(param_3,&DAT_001bc0af,sVar5);
            if (*(char *)((long)param_3 + 0x1e) != '\0') {
              *(undefined1 *)((long)param_3 + 0x1e) = 0;
              (**(code **)(*param_3 + 0x28))(param_3,PTR_DAT_007a3760,0);
            }
            (**(code **)(*param_3 + 0x28))(param_3,&DAT_001f90d6,sVar6);
            (**(code **)(*param_3 + 0x10))(param_3);
          }
          else {
            if ((long)sVar5 < 0) {
                    /* try { // try from 006ed534 to 006ed57f has its CatchHandler @ 006ed6b0 */
              FUN_00676318(sVar5,"string length exceeds max size");
            }
            sVar6 = strlen("{ ");
            if ((long)sVar6 < 0) {
              FUN_00676318(sVar6,"string length exceeds max size");
            }
            (**(code **)(*param_3 + 0x28))(param_3,&DAT_001bc0af,sVar5);
            if (*(char *)((long)param_3 + 0x1e) != '\0') {
              *(undefined1 *)((long)param_3 + 0x1e) = 0;
              (**(code **)(*param_3 + 0x28))(param_3,PTR_DAT_007a3760,0);
            }
            (**(code **)(*param_3 + 0x28))(param_3,&DAT_001e46a9,sVar6);
          }
          FUN_006ec95c(param_1,&local_100,param_3,param_4 + -1);
          if (*(char *)(param_1 + 4) == '\0') {
            (**(code **)(*param_3 + 0x18))(param_3);
            puVar14 = (undefined8 *)(*param_3 + 0x28);
            puVar9 = &DAT_001c03cd;
          }
          else {
            puVar14 = (undefined8 *)(*param_3 + 0x28);
            puVar9 = &DAT_001dc055;
          }
        }
                    /* try { // try from 006ed0a8 to 006ed0b3 has its CatchHandler @ 006ed6b0 */
        (*(code *)*puVar14)(param_3,puVar9,2);
        if (local_100 != local_f8) {
                    /* try { // try from 006ed0c0 to 006ed0c7 has its CatchHandler @ 006ed62c */
          FUN_006fa9f8(&local_100);
        }
        if (local_100 != (byte *)0x0) {
          local_f8 = local_100;
          free(local_100);
        }
        FUN_0066c1f4(&local_d0);
      }
      else {
        uVar7 = ((ulong)pbVar18 & 0xfffffffffffffff8) + 8;
        if (((ulong)pbVar18 | 7) != 0x17) {
          uVar7 = (ulong)pbVar18 | 7;
        }
        pvVar8 = (void *)FUN_00759c3c(uVar7 + 1);
        local_e8 = uVar7 + 1 | 1;
        local_e0 = pbVar18;
        local_d8 = pvVar8;
LAB_006ecb7c:
        memmove(pvVar8,pbVar19,(size_t)pbVar18);
        *(byte *)((long)pvVar8 + (long)pbVar18) = 0;
        iVar11 = *(int *)(lVar15 + lVar16 + 4);
        if (1 < iVar11) goto LAB_006eca70;
LAB_006ecba0:
        if (iVar11 != 0) {
          if (iVar11 != 1) goto LAB_006ed368;
          pvVar8 = pvVar12;
          pbVar19 = (byte *)(ulong)((byte)local_e8 >> 1);
          if ((local_e8 & 1) != 0) {
            pvVar8 = local_d8;
            pbVar19 = local_e0;
          }
                    /* try { // try from 006ecbd0 to 006ecc5f has its CatchHandler @ 006ed6d0 */
          (**(code **)(*param_3 + 0x28))(param_3,pvVar8,pbVar19);
          sVar5 = strlen(": ");
          if ((long)sVar5 < 0) {
            FUN_00676318(sVar5,"string length exceeds max size");
          }
          sVar6 = strlen("0x");
          if ((long)sVar6 < 0) {
            FUN_00676318(sVar6,"string length exceeds max size");
          }
          (**(code **)(*param_3 + 0x28))(param_3,&DAT_001f2fbc,sVar5);
          if (*(char *)((long)param_3 + 0x1e) != '\0') {
            *(undefined1 *)((long)param_3 + 0x1e) = 0;
            (**(code **)(*param_3 + 0x28))(param_3,PTR_DAT_007a3760,0);
          }
          (**(code **)(*param_3 + 0x28))(param_3,&DAT_001d5cf9,sVar6);
                    /* try { // try from 006ecc68 to 006ecc73 has its CatchHandler @ 006ed6a4 */
          FUN_00678534(&local_d0,*(undefined4 *)(lVar15 + lVar16 + 8),8);
          pbVar4 = local_c8;
          pbVar19 = local_d0;
          if (local_c8 < &DAT_fffffffffffffff8) {
            if (local_c8 < (byte *)0x17) {
              local_100 = (byte *)CONCAT71(local_100._1_7_,(char)((int)local_c8 << 1));
              pvVar8 = pvVar13;
              if (local_c8 != (byte *)0x0) goto LAB_006ed1fc;
            }
            else {
              uVar7 = ((ulong)local_c8 & 0xfffffffffffffff8) + 8;
              if (((ulong)local_c8 | 7) != 0x17) {
                uVar7 = (ulong)local_c8 | 7;
              }
                    /* try { // try from 006ed1e4 to 006ed1eb has its CatchHandler @ 006ed6a4 */
              pvVar8 = (void *)FUN_00759c3c(uVar7 + 1);
              local_100 = (byte *)(uVar7 + 1 | 1);
              local_f8 = pbVar4;
              local_f0 = pvVar8;
LAB_006ed1fc:
              memmove(pvVar8,pbVar19,(size_t)pbVar4);
            }
            *(byte *)((long)pvVar8 + (long)pbVar4) = 0;
            pvVar8 = pvVar13;
            pbVar19 = (byte *)((ulong)local_100 >> 1 & 0x7f);
            if (((ulong)local_100 & 1) != 0) {
              pvVar8 = local_f0;
              pbVar19 = local_f8;
            }
                    /* try { // try from 006ed234 to 006ed23b has its CatchHandler @ 006ed650 */
            (**(code **)(*param_3 + 0x28))(param_3,pvVar8,pbVar19);
            goto LAB_006ed23c;
          }
          if (*(long *)(lVar2 + 0x28) == local_80) {
                    /* try { // try from 006ed624 to 006ed62b has its CatchHandler @ 006ed64c */
                    /* WARNING: Subroutine does not return */
            FUN_002fb400(&local_100);
          }
          goto LAB_006ed6f8;
        }
        pvVar8 = pvVar12;
        pbVar19 = (byte *)(ulong)((byte)local_e8 >> 1);
        if ((local_e8 & 1) != 0) {
          pvVar8 = local_d8;
          pbVar19 = local_e0;
        }
                    /* try { // try from 006ecf04 to 006ecf63 has its CatchHandler @ 006ed6d0 */
        (**(code **)(*param_3 + 0x28))(param_3,pvVar8,pbVar19);
        sVar5 = strlen(": ");
        if ((long)sVar5 < 0) {
          FUN_00676318(sVar5,"string length exceeds max size");
        }
        (**(code **)(*param_3 + 0x28))(param_3,&DAT_001f2fbc,sVar5);
        if (*(char *)((long)param_3 + 0x1e) != '\0') {
          *(undefined1 *)((long)param_3 + 0x1e) = 0;
          (**(code **)(*param_3 + 0x28))(param_3,PTR_DAT_007a3760,0);
        }
        local_d0 = abStack_c0;
                    /* try { // try from 006ecf70 to 006ecf77 has its CatchHandler @ 006ed6ac */
        pbVar4 = (byte *)FUN_006778bc(*(undefined8 *)(lVar15 + lVar16 + 8),abStack_c0);
        pbVar19 = local_d0;
        pbVar18 = pbVar4 + -(long)abStack_c0;
        local_c8 = pbVar18;
        if ((byte *)0xfffffffffffffff7 < pbVar18) {
          if (*(long *)(lVar2 + 0x28) == local_80) {
                    /* try { // try from 006ed5ec to 006ed5f3 has its CatchHandler @ 006ed65c */
                    /* WARNING: Subroutine does not return */
            FUN_002fb400(&local_100);
          }
          goto LAB_006ed6f8;
        }
        if (pbVar18 < (byte *)0x17) {
          local_100 = (byte *)CONCAT71(local_100._1_7_,(char)((int)pbVar18 << 1));
          pvVar8 = pvVar13;
          if (pbVar4 != abStack_c0) goto LAB_006ed114;
        }
        else {
          uVar7 = ((ulong)pbVar18 & 0xfffffffffffffff8) + 8;
          if (((ulong)pbVar18 | 7) != 0x17) {
            uVar7 = (ulong)pbVar18 | 7;
          }
                    /* try { // try from 006ed0fc to 006ed103 has its CatchHandler @ 006ed6ac */
          pvVar8 = (void *)FUN_00759c3c(uVar7 + 1);
          local_100 = (byte *)(uVar7 + 1 | 1);
          local_f8 = pbVar18;
          local_f0 = pvVar8;
LAB_006ed114:
          memmove(pvVar8,pbVar19,(size_t)pbVar18);
        }
        *(byte *)((long)pvVar8 + (long)pbVar18) = 0;
        pvVar8 = pvVar13;
        pbVar19 = (byte *)((ulong)local_100 >> 1 & 0x7f);
        if (((ulong)local_100 & 1) != 0) {
          pvVar8 = local_f0;
          pbVar19 = local_f8;
        }
                    /* try { // try from 006ed14c to 006ed153 has its CatchHandler @ 006ed660 */
        (**(code **)(*param_3 + 0x28))(param_3,pvVar8,pbVar19);
LAB_006ed23c:
        if (((ulong)local_100 & 1) != 0) {
          free(local_f0);
        }
        lVar15 = *param_3;
        uVar10 = 1;
        puVar9 = &DAT_001e2980;
        if (*(char *)(param_1 + 4) != '\0') {
          puVar9 = &DAT_001bc0af;
        }
LAB_006ed35c:
        (**(code **)(lVar15 + 0x28))(param_3,puVar9,uVar10);
      }
LAB_006ed368:
      if ((local_e8 & 1) != 0) {
        free(local_d8);
      }
      lVar15 = *param_2;
      lVar17 = lVar17 + 1;
      lVar16 = lVar16 + 0x10;
    } while (lVar17 < (int)((ulong)(param_2[1] - lVar15) >> 4));
  }
  if (*(long *)(lVar2 + 0x28) == local_80) {
    return;
  }
LAB_006ed6f8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006ed6fc  FUN_006ed6fc =====

uint FUN_006ed6fc(long param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined1 uStack_171;
  undefined1 auStack_170 [48];
  byte local_140 [16];
  void *local_130;
  ulong local_128;
  undefined8 uStack_120;
  void *local_118;
  ulong local_110;
  undefined8 uStack_108;
  void *local_100;
  byte local_f8;
  undefined1 auStack_f7 [7];
  ulong local_f0;
  undefined1 *local_e8;
  ulong local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [104];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_006fa798(param_2,&local_d8,&local_e0);
  if ((uVar5 & 1) == 0) {
    uVar4 = 0;
    if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_006edaec;
  }
  else {
    (**(code **)(*param_2 + 0x80))(param_2);
    FUN_00680534(&local_f8,extraout_x1,param_2,local_d8);
    local_110 = 0;
    uStack_108 = 0;
    bVar3 = (local_f8 & 1) == 0;
    local_100 = (void *)0x0;
    puVar1 = local_e8;
    if (bVar3) {
      puVar1 = auStack_f7;
    }
    local_128 = 0;
    uStack_120 = 0;
    uVar5 = (ulong)(local_f8 >> 1);
    if (!bVar3) {
      uVar5 = local_f0;
    }
    local_118 = (void *)0x0;
    if ((long)uVar5 < 0) {
                    /* try { // try from 006edaf0 to 006edb0b has its CatchHandler @ 006edb90 */
      FUN_00676318(uVar5,"string length exceeds max size");
    }
                    /* try { // try from 006ed7a0 to 006ed7af has its CatchHandler @ 006edb90 */
    uVar5 = FUN_006dbdbc(puVar1,uVar5,&local_110,&local_128);
    if ((uVar5 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      plVar6 = *(long **)(param_1 + 0x50);
      if (plVar6 == (long *)0x0) {
        lVar7 = FUN_006eade4(param_2,&local_110,&local_128);
      }
      else {
                    /* try { // try from 006ed7c4 to 006ed807 has its CatchHandler @ 006edb3c */
        lVar7 = (**(code **)(*plVar6 + 0x20))(plVar6,param_2,&local_110,&local_128);
      }
      if (lVar7 == 0) {
                    /* try { // try from 006ed910 to 006ed927 has its CatchHandler @ 006edb1c */
        FUN_00675e64(auStack_d0,1,
                     "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/text_format.cc"
                     ,0x86d);
                    /* try { // try from 006ed928 to 006ed94f has its CatchHandler @ 006edb40 */
        uVar8 = FUN_00675a58(auStack_d0,"Can\'t print proto content: proto type ");
        uVar8 = FUN_00675a80(uVar8,&local_f8);
        uVar8 = FUN_00675a58(uVar8," not found");
                    /* try { // try from 006ed950 to 006ed957 has its CatchHandler @ 006edb18 */
        FUN_00675ac0(auStack_170,uVar8);
        FUN_00675e7c(auStack_d0);
        uVar4 = 0;
      }
      else {
                    /* try { // try from 006ed810 to 006ed817 has its CatchHandler @ 006edb38 */
        FUN_006db6ec(auStack_d0);
                    /* try { // try from 006ed818 to 006ed833 has its CatchHandler @ 006edb50 */
        plVar6 = (long *)FUN_006db814(auStack_d0,lVar7);
        plVar6 = (long *)(**(code **)(*plVar6 + 0x18))(plVar6,0);
                    /* try { // try from 006ed83c to 006ed84b has its CatchHandler @ 006edb30 */
        FUN_00680534(local_140,extraout_x1,param_2,local_e0);
                    /* try { // try from 006ed84c to 006ed8c3 has its CatchHandler @ 006edb5c */
        uVar4 = thunk_FUN_0066e8b0(plVar6,local_140);
        if ((uVar4 & 1) == 0) {
                    /* try { // try from 006ed968 to 006ed97f has its CatchHandler @ 006edb14 */
          FUN_00675e64(auStack_170,1,
                       "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/text_format.cc"
                       ,0x876);
                    /* try { // try from 006ed980 to 006ed99b has its CatchHandler @ 006edb20 */
          uVar8 = FUN_00675a80(auStack_170,&local_f8);
          uVar8 = FUN_00675a58(uVar8,": failed to parse contents");
                    /* try { // try from 006ed99c to 006ed9a3 has its CatchHandler @ 006edb10 */
          FUN_00675ac0(&uStack_171,uVar8);
          FUN_00675e7c(auStack_170);
        }
        else {
          (**(code **)(*param_3 + 0x28))(param_3,&DAT_001cf3bb,1);
          uVar5 = (ulong)(local_f8 >> 1);
          puVar1 = (undefined1 *)((ulong)&local_f8 | 1);
          if ((local_f8 & 1) != 0) {
            uVar5 = local_f0;
            puVar1 = local_e8;
          }
          (**(code **)(*param_3 + 0x28))(param_3,puVar1,uVar5);
          (**(code **)(*param_3 + 0x28))(param_3,&DAT_001e1051,1);
          plVar9 = (long *)(param_1 + 0x28);
          plVar10 = (long *)*plVar9;
          plVar12 = plVar9;
          plVar11 = plVar9;
          if (plVar10 != (long *)0x0) {
            do {
              lVar7 = 8;
              if (local_e0 <= (ulong)plVar10[4]) {
                lVar7 = 0;
                plVar12 = plVar10;
              }
              plVar10 = *(long **)((long)plVar10 + lVar7);
            } while (plVar10 != (long *)0x0);
            if ((plVar12 != plVar9) && ((ulong)plVar12[4] <= local_e0)) {
              plVar11 = plVar12;
            }
          }
          plVar12 = (long *)(param_1 + 0x18);
          if (plVar11 != plVar9) {
            plVar12 = plVar11 + 5;
          }
          plVar12 = (long *)*plVar12;
                    /* try { // try from 006ed9d4 to 006eda3f has its CatchHandler @ 006edb58 */
          (**(code **)(*plVar12 + 0x70))
                    (plVar12,param_2,0xffffffff,0,*(undefined1 *)(param_1 + 4),param_3);
          (**(code **)(*param_3 + 0x10))(param_3);
          FUN_006ec528(param_1,plVar6,param_3);
          (**(code **)(*param_3 + 0x18))(param_3);
          (**(code **)(*plVar12 + 0x80))
                    (plVar12,param_2,0xffffffff,0,*(undefined1 *)(param_1 + 4),param_3);
        }
        if ((local_140[0] & 1) != 0) {
          free(local_130);
        }
        (**(code **)(*plVar6 + 8))(plVar6);
        FUN_006db720(auStack_d0);
      }
    }
    if ((local_128 & 1) != 0) {
      free(local_118);
    }
    if ((local_110 & 1) != 0) {
      free(local_100);
    }
    if ((local_f8 & 1) == 0) {
      if (*(long *)(lVar2 + 0x28) != local_68) {
LAB_006edaec:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    else {
      free(local_e8);
      if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_006edaec;
    }
  }
  return uVar4 & 1;
}


// ===== 006edc00  FUN_006edc00 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006edc00(long param_1,undefined8 param_2,undefined8 param_3,code ******param_4,
                 long *param_5)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  bool bVar6;
  code *******pppppppcVar7;
  code *******pppppppcVar8;
  uint uVar9;
  code *****pppppcVar10;
  ulong uVar11;
  size_t sVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined4 uVar17;
  code ******ppppppcVar18;
  uint local_dc;
  code *******local_a8;
  code *******local_a0;
  undefined8 local_98;
  code ******local_90;
  code ******local_88;
  code *******local_80;
  undefined8 *******local_78;
  code ******local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if ((*(char *)(param_1 + 6) != '\0') &&
     ((((byte)*(code *)((long)param_4 + 1) ^ 0xff) & 0x60) == 0)) {
    pppppcVar10 = param_4[3];
    if ((pppppcVar10 != (code *****)0x0) &&
       (local_80 = (code *******)thunk_FUN_006af330, local_88 = param_4,
       *pppppcVar10 != (code ****)0xffffffffffffffff)) {
      local_a8 = (code *******)&local_80;
      local_a0 = &local_88;
      local_78 = &local_a8;
      FUN_00710f84(pppppcVar10,&local_78,FUN_00685640);
    }
    puVar3 = PTR_DAT_007a32d8;
    iVar4 = *(int *)(PTR_DAT_007a32d8 + (ulong)(byte)*(code *)((long)param_4 + 2) * 4);
    if (iVar4 != 9) {
      pppppcVar10 = param_4[3];
      if (pppppcVar10 != (code *****)0x0) {
        local_80 = (code *******)thunk_FUN_006af330;
        local_88 = param_4;
        if (*pppppcVar10 != (code ****)0xffffffffffffffff) {
          local_a8 = (code *******)&local_80;
          local_a0 = &local_88;
          local_78 = &local_a8;
          FUN_00710f84(pppppcVar10,&local_78,FUN_00685640);
        }
        iVar4 = *(int *)(puVar3 + (ulong)(byte)*(code *)((long)param_4 + 2) * 4);
      }
      if (iVar4 != 10) {
        FUN_006ef49c(param_1,param_2,param_3,param_4,param_5);
        if (*(long *)(lVar5 + 0x28) == local_68) {
          return;
        }
        goto LAB_006ee18c;
      }
    }
  }
  if ((((byte)*(code *)((long)param_4 + 1) ^ 0xff) & 0x60) == 0) {
    uVar9 = FUN_0067c384(param_3,param_2,param_4);
    pppppcVar10 = param_4[3];
  }
  else {
    uVar11 = FUN_0067b838(param_3,param_2,param_4);
    if (((uVar11 & 1) == 0) && (*(char *)((long)param_4[4][4] + 0x4b) == '\0')) {
      uVar9 = 0;
      pppppcVar10 = param_4[3];
    }
    else {
      uVar9 = 1;
      pppppcVar10 = param_4[3];
    }
  }
  local_98 = 0;
  local_a0 = (code *******)0x0;
  local_a8 = (code *******)0x0;
  if (pppppcVar10 != (code *****)0x0) {
    local_98 = 0;
    local_a0 = (code *******)0x0;
    local_a8 = (code *******)0x0;
    local_88 = (code ******)thunk_FUN_006af330;
    local_90 = param_4;
    if (*pppppcVar10 != (code ****)0xffffffffffffffff) {
      local_78 = (undefined8 *******)&local_88;
      local_70 = (code ******)&local_90;
      local_80 = (code *******)&local_78;
                    /* try { // try from 006edda4 to 006edddb has its CatchHandler @ 006ee190 */
      FUN_00710f84(pppppcVar10,&local_80,FUN_00685640);
    }
  }
  if ((*(code *)((long)param_4 + 2) == (code)0xb) &&
     (uVar11 = FUN_0068d830(param_4), (uVar11 & 1) != 0)) {
    local_dc = FUN_006eea5c(param_2,param_3,param_4,&local_a8);
    bVar6 = true;
  }
  else {
    bVar6 = false;
    local_dc = 0;
  }
  if (0 < (int)uVar9) {
    uVar11 = 0;
    plVar1 = (long *)(param_1 + 0x28);
    do {
      uVar17 = (undefined4)uVar11;
      if ((((byte)*(code *)((long)param_4 + 1) ^ 0xff) & 0x60) != 0) {
        uVar17 = 0xffffffff;
      }
                    /* try { // try from 006ede40 to 006edfd3 has its CatchHandler @ 006ee198 */
      FUN_006ef674(param_1,param_2,uVar17,uVar9,param_3,param_4,param_5);
      pppppcVar10 = param_4[3];
      if ((pppppcVar10 != (code *****)0x0) &&
         (local_88 = (code ******)thunk_FUN_006af330, local_90 = param_4,
         *pppppcVar10 != (code ****)0xffffffffffffffff)) {
        local_78 = (undefined8 *******)&local_88;
        local_70 = (code ******)&local_90;
        local_80 = (code *******)&local_78;
        FUN_00710f84(pppppcVar10,&local_80,FUN_00685640);
      }
      if (*(int *)(PTR_DAT_007a32d8 + (ulong)(byte)*(code *)((long)param_4 + 2) * 4) == 10) {
        plVar14 = (long *)*plVar1;
        plVar16 = plVar1;
        plVar15 = plVar1;
        if (plVar14 != (long *)0x0) {
          do {
            lVar2 = 8;
            if (param_4 <= (code ******)plVar14[4]) {
              lVar2 = 0;
              plVar16 = plVar14;
            }
            plVar14 = *(long **)((long)plVar14 + lVar2);
          } while (plVar14 != (long *)0x0);
          if ((plVar16 != plVar1) && ((code ******)plVar16[4] <= param_4)) {
            plVar15 = plVar16;
          }
        }
        plVar16 = (long *)(param_1 + 0x18);
        if (plVar15 != plVar1) {
          plVar16 = plVar15 + 5;
        }
        plVar16 = (long *)*plVar16;
        if ((((byte)*(code *)((long)param_4 + 1) ^ 0xff) & 0x60) == 0) {
          if (bVar6) {
            ppppppcVar18 = local_a8[uVar11];
          }
          else {
            ppppppcVar18 = (code ******)FUN_006832a0(param_3,param_2,param_4,uVar11 & 0xffffffff);
          }
        }
        else {
                    /* try { // try from 006edfd8 to 006ee09f has its CatchHandler @ 006ee194 */
          ppppppcVar18 = (code ******)FUN_0068265c(param_3,param_2,param_4,0);
        }
        (**(code **)(*plVar16 + 0x70))
                  (plVar16,ppppppcVar18,uVar17,uVar9,*(undefined1 *)(param_1 + 4),param_5);
        (**(code **)(*param_5 + 0x10))(param_5);
        uVar13 = (**(code **)(*plVar16 + 0x78))
                           (plVar16,ppppppcVar18,uVar17,uVar9,*(undefined1 *)(param_1 + 4),param_5);
        if ((uVar13 & 1) == 0) {
          FUN_006ec528(param_1,ppppppcVar18,param_5);
        }
        (**(code **)(*param_5 + 0x18))(param_5);
        (**(code **)(*plVar16 + 0x80))
                  (plVar16,ppppppcVar18,uVar17,uVar9,*(undefined1 *)(param_1 + 4),param_5);
      }
      else {
        sVar12 = strlen(": ");
        if ((long)sVar12 < 0) {
                    /* try { // try from 006ee0a4 to 006ee0b3 has its CatchHandler @ 006ee198 */
          FUN_00676318(sVar12,"string length exceeds max size");
        }
        (**(code **)(*param_5 + 0x28))(param_5,&DAT_001f2fbc,sVar12);
        if (*(char *)((long)param_5 + 0x1e) != '\0') {
          *(undefined1 *)((long)param_5 + 0x1e) = 0;
          (**(code **)(*param_5 + 0x28))(param_5,PTR_DAT_007a3760,0);
        }
        FUN_006ee31c(param_1,param_2,param_3,param_4,uVar17,param_5);
        puVar3 = &DAT_001e2980;
        if (*(char *)(param_1 + 4) != '\0') {
          puVar3 = &DAT_001bc0af;
        }
        (**(code **)(*param_5 + 0x28))(param_5,puVar3,1);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar9);
  }
  pppppppcVar8 = local_a0;
  pppppppcVar7 = local_a8;
  if ((local_dc & 1) != 0) {
    for (; pppppppcVar7 != pppppppcVar8; pppppppcVar7 = (code *******)((long)pppppppcVar7 + 8)) {
      if (*pppppppcVar7 != (code ******)0x0) {
        (*(code *)(**pppppppcVar7)[1])();
      }
    }
  }
  if (local_a8 != (code *******)0x0) {
    local_a0 = local_a8;
    free(local_a8);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
LAB_006ee18c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006ee1c8  FUN_006ee1c8 =====

void FUN_006ee1c8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined4 param_4,
                 byte *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 extraout_x1;
  undefined *local_90;
  long *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  ushort local_74;
  undefined1 local_72;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68 [2];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((*param_5 & 1) == 0) {
    param_5[0] = 0;
    param_5[1] = 0;
  }
  else {
    **(undefined1 **)(param_5 + 0x10) = 0;
    param_5[8] = 0;
    param_5[9] = 0;
    param_5[10] = 0;
    param_5[0xb] = 0;
    param_5[0xc] = 0;
    param_5[0xd] = 0;
    param_5[0xe] = 0;
    param_5[0xf] = 0;
  }
  FUN_0066df7c(local_68,param_5);
  puVar2 = PTR_DAT_007a3758;
  local_74 = 1;
  local_70 = *param_1;
  uStack_80 = 0;
  local_90 = PTR_DAT_007a3758 + 0x10;
  local_78 = 0;
  local_72 = 0;
  local_88 = local_68;
  uStack_6c = local_70;
                    /* try { // try from 006ee260 to 006ee283 has its CatchHandler @ 006ee2d8 */
  (**(code **)(*param_2 + 0x80))(param_2);
  FUN_006ee31c(param_1,param_2,extraout_x1,param_3,param_4,&local_90);
  local_90 = puVar2 + 0x10;
  if ((local_74 & 0x100) == 0) {
                    /* try { // try from 006ee2a4 to 006ee2a7 has its CatchHandler @ 006ee2d4 */
    (**(code **)(*local_88 + 0x18))(local_88,local_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006ee31c  FUN_006ee31c =====

void FUN_006ee31c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                 undefined4 param_5,undefined8 param_6)

{
  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  code ***__src;
  uint uVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  byte *pbVar12;
  code ***pppcVar13;
  long *plVar14;
  code *pcVar15;
  byte *__src_00;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  undefined6 *__n;
  ulong *__n_00;
  void *pvVar19;
  code **local_d8;
  ulong *local_d0;
  void *local_c8;
  byte local_c0;
  byte bStack_bf;
  undefined6 uStack_be;
  undefined2 local_b8;
  undefined6 uStack_b6;
  void *local_b0;
  ulong local_a8;
  code *pcStack_a0;
  code ***local_98;
  undefined6 *local_90;
  code **local_88 [4];
  undefined6 local_68;
  undefined2 uStack_62;
  undefined6 uStack_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  plVar14 = (long *)(param_1 + 0x28);
  plVar17 = (long *)*plVar14;
  plVar9 = plVar14;
  plVar18 = plVar14;
  if (plVar17 != (long *)0x0) {
    do {
      lVar10 = 8;
      if (param_4 <= (ulong)plVar17[4]) {
        lVar10 = 0;
        plVar18 = plVar17;
      }
      plVar17 = *(long **)((long)plVar17 + lVar10);
    } while (plVar17 != (long *)0x0);
    if ((plVar18 != plVar14) && ((ulong)plVar18[4] <= param_4)) {
      plVar9 = plVar18;
    }
  }
  plVar18 = (long *)(param_1 + 0x18);
  if (plVar9 != plVar14) {
    plVar18 = plVar9 + 5;
  }
  plVar9 = *(long **)(param_4 + 0x18);
  plVar18 = (long *)*plVar18;
  if (plVar9 != (long *)0x0) {
    local_68 = (undefined6)param_4;
    uStack_62 = (undefined2)(param_4 >> 0x30);
    local_d8 = (code **)thunk_FUN_006af330;
    if (*plVar9 != -1) {
      local_98 = &local_d8;
      local_90 = &local_68;
      local_c0 = (byte)&local_98;
      bStack_bf = (byte)((ulong)&local_98 >> 8);
      uStack_be = (undefined6)((ulong)&local_98 >> 0x10);
      FUN_00710f84(plVar9,&local_c0,FUN_00685640);
    }
  }
  iVar3 = *(int *)(PTR_DAT_007a32d8 + (ulong)*(byte *)(param_4 + 2) * 4);
  if (iVar3 < 6) {
    if (iVar3 < 3) {
      if (iVar3 == 1) {
        if (((*(byte *)(param_4 + 1) ^ 0xff) & 0x60) == 0) {
          uVar7 = FUN_0067d03c();
        }
        else {
          uVar7 = FUN_0067cb40(param_3,param_2,param_4);
        }
        pcVar15 = *(code **)(*plVar18 + 0x18);
        goto LAB_006ee688;
      }
      if (iVar3 == 2) {
        if (((*(byte *)(param_4 + 1) ^ 0xff) & 0x60) == 0) {
          uVar11 = FUN_0067d87c();
        }
        else {
          uVar11 = FUN_0067d380(param_3,param_2,param_4);
        }
        pcVar15 = *(code **)(*plVar18 + 0x28);
        goto LAB_006ee74c;
      }
    }
    else if (iVar3 == 3) {
      if (((*(byte *)(param_4 + 1) ^ 0xff) & 0x60) == 0) {
        uVar7 = FUN_0067e0bc();
      }
      else {
        uVar7 = FUN_0067dbc0(param_3,param_2,param_4);
      }
      pcVar15 = *(code **)(*plVar18 + 0x20);
LAB_006ee688:
      (*pcVar15)(plVar18,uVar7,param_6);
    }
    else if (iVar3 == 4) {
      if (((*(byte *)(param_4 + 1) ^ 0xff) & 0x60) == 0) {
        uVar11 = FUN_0067e8fc();
      }
      else {
        uVar11 = FUN_0067e400(param_3,param_2,param_4);
      }
      pcVar15 = *(code **)(*plVar18 + 0x30);
LAB_006ee74c:
      (*pcVar15)(plVar18,uVar11,param_6);
    }
    else if (iVar3 == 5) {
      if (((*(byte *)(param_4 + 1) ^ 0xff) & 0x60) == 0) {
        FUN_0067f99c();
      }
      else {
        FUN_0067f494(param_3,param_2,param_4);
      }
      (**(code **)(*plVar18 + 0x40))(plVar18,param_6);
    }
  }
  else if (iVar3 < 8) {
    if (iVar3 == 6) {
      if (((*(byte *)(param_4 + 1) ^ 0xff) & 0x60) == 0) {
        FUN_0067f148();
      }
      else {
        FUN_0067ec40(param_3,param_2,param_4);
      }
      (**(code **)(*plVar18 + 0x38))(plVar18,param_6);
    }
    else if (iVar3 == 7) {
      if (((*(byte *)(param_4 + 1) ^ 0xff) & 0x60) == 0) {
        uVar7 = FUN_006801e8();
      }
      else {
        uVar7 = FUN_0067fce8(param_3,param_2,param_4);
      }
      uVar7 = uVar7 & 1;
      pcVar15 = *(code **)(*plVar18 + 0x10);
      goto LAB_006ee688;
    }
  }
  else if (iVar3 == 8) {
    if (((*(byte *)(param_4 + 1) ^ 0xff) & 0x60) == 0) {
      uVar8 = FUN_00681f84();
      uVar11 = FUN_0068f648(param_4);
      lVar10 = FUN_0068cf8c(uVar11,uVar8);
    }
    else {
      uVar8 = FUN_006818fc(param_3,param_2,param_4);
      uVar11 = FUN_0068f648(param_4);
      lVar10 = FUN_0068cf8c(uVar11,uVar8);
    }
    if (lVar10 == 0) {
      local_98 = local_88;
      pppcVar13 = (code ***)FUN_006778a4(uVar8,local_88);
      __src = local_98;
      __n = (undefined6 *)((long)pppcVar13 - (long)local_88);
      local_90 = __n;
      if ((undefined6 *)0xfffffffffffffff7 < __n) {
        if (*(long *)(lVar6 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_002fb400(&local_c0);
        }
        goto LAB_006eea58;
      }
      if (__n < (undefined6 *)0x17) {
        pvVar19 = (void *)((ulong)&local_c0 | 1);
        local_c0 = (byte)((int)__n << 1);
        if (pppcVar13 != local_88) goto LAB_006ee820;
      }
      else {
        uVar2 = ((ulong)__n & 0xfffffffffffffff8) + 8;
        if (((ulong)__n | 7) != 0x17) {
          uVar2 = (ulong)__n | 7;
        }
        lVar10 = uVar2 + 1;
        pvVar19 = (void *)FUN_00759c3c(lVar10);
        local_c0 = (byte)lVar10 | 1;
        local_b8 = SUB82(__n,0);
        uStack_b6 = (undefined6)((ulong)__n >> 0x10);
        bStack_bf = (byte)((ulong)lVar10 >> 8);
        uStack_be = (undefined6)((ulong)lVar10 >> 0x10);
        local_b0 = pvVar19;
LAB_006ee820:
        memmove(pvVar19,__src,(size_t)__n);
      }
      *(undefined1 *)((long)pvVar19 + (long)__n) = 0;
                    /* try { // try from 006ee83c to 006ee84f has its CatchHandler @ 006ee9f8 */
      (**(code **)(*plVar18 + 0x58))(plVar18,uVar8,&local_c0,param_6);
      if ((local_c0 & 1) != 0) {
        free(local_b0);
      }
    }
    else {
      (**(code **)(*plVar18 + 0x58))(plVar18,uVar8,*(undefined8 *)(lVar10 + 8),param_6);
    }
  }
  else if (iVar3 == 9) {
    local_98 = (code ***)0x0;
    local_90 = (undefined6 *)0x0;
    local_88[0] = (code **)0x0;
    if (((*(byte *)(param_4 + 1) ^ 0xff) & 0x60) == 0) {
                    /* try { // try from 006ee608 to 006ee61b has its CatchHandler @ 006eea0c */
      pbVar12 = (byte *)FUN_00681498(param_3,param_2,param_4,param_5,&local_98);
    }
    else {
                    /* try { // try from 006ee784 to 006ee793 has its CatchHandler @ 006eea0c */
      pbVar12 = (byte *)FUN_006807ec(param_3,param_2,param_4,&local_98);
    }
    __n_00 = *(ulong **)(param_1 + 0x10);
    local_c0 = 0;
    bStack_bf = 0;
    uStack_be = 0;
    local_b8 = 0;
    uStack_b6 = 0;
    local_b0 = (void *)0x0;
    if (0 < (long)__n_00) {
      bVar4 = *pbVar12;
      puVar1 = (ulong *)(ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        puVar1 = *(ulong **)(pbVar12 + 8);
      }
      if (__n_00 < puVar1) {
        __src_00 = *(byte **)(pbVar12 + 0x10);
        if ((bVar4 & 1) == 0) {
          __src_00 = pbVar12 + 1;
        }
        if (__n_00 < (ulong *)0x17) {
          pvVar19 = (void *)((ulong)&local_d8 | 1);
          local_d8 = (code **)CONCAT71(local_d8._1_7_,(char)((int)__n_00 << 1));
        }
        else {
          uVar2 = ((ulong)__n_00 & 0x7ffffffffffffff8) + 8;
          if (((ulong)__n_00 | 7) != 0x17) {
            uVar2 = (ulong)__n_00 | 7;
          }
                    /* try { // try from 006ee87c to 006ee883 has its CatchHandler @ 006ee9c0 */
          pvVar19 = (void *)FUN_00759c3c(uVar2 + 1);
          local_d8 = (code **)(uVar2 + 1 | 1);
          local_d0 = __n_00;
          local_c8 = pvVar19;
        }
        memmove(pvVar19,__src_00,(size_t)__n_00);
        *(undefined1 *)((long)pvVar19 + (long)__n_00) = 0;
                    /* try { // try from 006ee8a8 to 006ee8b7 has its CatchHandler @ 006ee9c4 */
        pbVar12 = (byte *)FUN_00713bdc(&local_d8,"...<truncated>...");
        bVar4 = *pbVar12;
        uVar11 = *(undefined8 *)(pbVar12 + 8);
        pvVar19 = *(void **)(pbVar12 + 0x10);
        bVar5 = pbVar12[1];
        uVar16 = *(undefined8 *)(pbVar12 + 2);
        pbVar12[8] = 0;
        pbVar12[9] = 0;
        pbVar12[10] = 0;
        pbVar12[0xb] = 0;
        pbVar12[0xc] = 0;
        pbVar12[0xd] = 0;
        pbVar12[0xe] = 0;
        pbVar12[0xf] = 0;
        pbVar12[0x10] = 0;
        pbVar12[0x11] = 0;
        pbVar12[0x12] = 0;
        pbVar12[0x13] = 0;
        pbVar12[0x14] = 0;
        pbVar12[0x15] = 0;
        pbVar12[0x16] = 0;
        pbVar12[0x17] = 0;
        pbVar12[0] = 0;
        pbVar12[1] = 0;
        pbVar12[2] = 0;
        pbVar12[3] = 0;
        pbVar12[4] = 0;
        pbVar12[5] = 0;
        pbVar12[6] = 0;
        pbVar12[7] = 0;
        local_68 = (undefined6)uVar16;
        uStack_62 = (undefined2)uVar11;
        uStack_60 = (undefined6)((ulong)uVar11 >> 0x10);
        if ((local_c0 & 1) != 0) {
          free(local_b0);
        }
        uStack_be = local_68;
        local_b8 = uStack_62;
        uStack_b6 = uStack_60;
        local_c0 = bVar4;
        bStack_bf = bVar5;
        local_b0 = pvVar19;
        if (((ulong)local_d8 & 1) != 0) {
          free(local_c8);
        }
        pbVar12 = &local_c0;
      }
    }
    plVar9 = *(long **)(param_4 + 0x18);
    if ((plVar9 != (long *)0x0) &&
       (pcStack_a0 = thunk_FUN_006af330, local_a8 = param_4, *plVar9 != -1)) {
      local_d8 = &pcStack_a0;
      local_d0 = &local_a8;
      local_68 = SUB86(&local_d8,0);
      uStack_62 = (undefined2)((ulong)&local_d8 >> 0x30);
                    /* try { // try from 006ee948 to 006ee983 has its CatchHandler @ 006eea1c */
      FUN_00710f84(plVar9,&local_68,FUN_00685640);
    }
    lVar10 = 0x48;
    if (*(char *)(param_4 + 2) != '\t') {
      lVar10 = 0x50;
    }
    (**(code **)(*plVar18 + lVar10))(plVar18,pbVar12,param_6);
    if ((local_c0 & 1) != 0) {
      free(local_b0);
    }
    if (((ulong)local_98 & 1) != 0) {
      free(local_88[0]);
    }
  }
  else if (iVar3 == 10) {
    if (((*(byte *)(param_4 + 1) ^ 0xff) & 0x60) == 0) {
      uVar11 = FUN_006832a0();
    }
    else {
      uVar11 = FUN_0068265c(param_3,param_2,param_4,0);
    }
    FUN_006ec528(param_1,uVar11,param_6);
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
LAB_006eea58:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006eea5c  FUN_006eea5c =====

uint FUN_006eea5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  void *pvVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  ulong uVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined1 auStack_f0 [8];
  long *local_e8;
  byte local_e0;
  void *local_d0;
  int local_c8;
  undefined8 local_b0;
  long *local_a8;
  byte local_a0 [16];
  void *local_90;
  int local_88;
  undefined1 auStack_80 [16];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  FUN_00684cf0(param_2,param_1);
  uVar5 = FUN_006deae8();
  if ((uVar5 & 1) == 0) {
    lVar6 = FUN_0068c940(param_3);
    plVar8 = (long *)FUN_0068489c(param_2);
    plVar8 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,lVar6);
    FUN_00684274(&local_b0,param_2,param_1,param_3);
    do {
                    /* try { // try from 006eec18 to 006eec27 has its CatchHandler @ 006eeee0 */
      FUN_00684638(auStack_f0,param_2,param_1,param_3);
                    /* try { // try from 006eec34 to 006eec3f has its CatchHandler @ 006eeee4 */
      uVar14 = (**(code **)(*local_a8 + 0x20))(local_a8,&local_b0,auStack_f0);
                    /* try { // try from 006eec50 to 006eec57 has its CatchHandler @ 006eeef4 */
      (**(code **)(*local_e8 + 0x80))(local_e8,auStack_f0);
      if ((local_c8 == 9) && ((local_e0 & 1) != 0)) {
        free(local_d0);
      }
      if ((uVar14 & 1) != 0) {
                    /* try { // try from 006eed6c to 006eed73 has its CatchHandler @ 006eeec0 */
        (**(code **)(*local_a8 + 0x80))(local_a8,&local_b0);
        if ((local_88 == 9) && ((local_a0[0] & 1) != 0)) {
          free(local_90);
        }
        goto LAB_006eed90;
      }
                    /* try { // try from 006eec84 to 006eed1f has its CatchHandler @ 006eeef8 */
      uVar16 = (**(code **)(*plVar8 + 0x18))(plVar8,0);
      FUN_006eef24(local_a0,uVar16,*(undefined8 *)(lVar6 + 0x28));
      FUN_006ef1b0(auStack_80,uVar16,*(long *)(lVar6 + 0x28) + 0x48);
      puVar17 = (undefined8 *)param_4[1];
      if (puVar17 < (undefined8 *)param_4[2]) {
        puVar12 = puVar17 + 1;
        *puVar17 = uVar16;
      }
      else {
        pvVar13 = (void *)*param_4;
        lVar11 = (long)puVar17 - (long)pvVar13 >> 3;
        uVar14 = lVar11 + 1;
        if (uVar14 >> 0x3d != 0) {
          if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_006eef20;
                    /* try { // try from 006eee6c to 006eee73 has its CatchHandler @ 006eeed8 */
          FUN_006f7fa8(param_4);
          goto LAB_006eee74;
        }
        uVar9 = param_4[2] - (long)pvVar13;
        uVar10 = (long)uVar9 >> 2;
        if (uVar10 <= uVar14) {
          uVar10 = uVar14;
        }
        if (0x7ffffffffffffff7 < uVar9) {
          uVar10 = 0x1fffffffffffffff;
        }
        if (uVar10 == 0) {
          pvVar7 = (void *)0x0;
        }
        else {
          if (uVar10 >> 0x3d != 0) goto LAB_006eee90;
          pvVar7 = (void *)FUN_00759c3c(uVar10 << 3);
        }
        puVar2 = (undefined8 *)((long)pvVar7 + lVar11 * 8);
        puVar12 = puVar2 + 1;
        *puVar2 = uVar16;
        memcpy(pvVar7,pvVar13,(long)puVar17 - (long)pvVar13);
        *param_4 = (long)pvVar7;
        param_4[1] = (long)puVar12;
        param_4[2] = (long)((long)pvVar7 + uVar10 * 8);
        if (pvVar13 != (void *)0x0) {
          free(pvVar13);
        }
      }
      param_4[1] = (long)puVar12;
                    /* try { // try from 006eec0c to 006eec13 has its CatchHandler @ 006eeedc */
      (**(code **)(*local_a8 + 0x90))(local_a8,&local_b0);
    } while( true );
  }
  lVar6 = FUN_00683c10(param_2,param_1,param_3,10,0xffffffff,0);
  iVar15 = *(int *)(lVar6 + 8);
  if (0 < iVar15) {
    lVar11 = 0;
    puVar17 = (undefined8 *)param_4[1];
    do {
      uVar16 = *(undefined8 *)(*(long *)(lVar6 + 0x10) + lVar11 * 8 + 8);
      if (puVar17 < (undefined8 *)param_4[2]) {
        puVar12 = puVar17 + 1;
        *puVar17 = uVar16;
      }
      else {
        pvVar13 = (void *)*param_4;
        lVar18 = (long)puVar17 - (long)pvVar13 >> 3;
        uVar14 = lVar18 + 1;
        if (uVar14 >> 0x3d != 0) goto LAB_006eee74;
        uVar9 = param_4[2] - (long)pvVar13;
        uVar10 = (long)uVar9 >> 2;
        if (uVar10 <= uVar14) {
          uVar10 = uVar14;
        }
        if (0x7ffffffffffffff7 < uVar9) {
          uVar10 = 0x1fffffffffffffff;
        }
        if (uVar10 == 0) {
          pvVar7 = (void *)0x0;
        }
        else {
          if (uVar10 >> 0x3d != 0) {
            if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
              FUN_002f9ee0();
            }
            goto LAB_006eef20;
          }
          pvVar7 = (void *)FUN_00759c3c(uVar10 << 3);
        }
        puVar2 = (undefined8 *)((long)pvVar7 + lVar18 * 8);
        puVar12 = puVar2 + 1;
        *puVar2 = uVar16;
        memcpy(pvVar7,pvVar13,(long)puVar17 - (long)pvVar13);
        *param_4 = (long)pvVar7;
        param_4[1] = (long)puVar12;
        param_4[2] = (long)((long)pvVar7 + uVar10 * 8);
        if (pvVar13 != (void *)0x0) {
          free(pvVar13);
          iVar15 = *(int *)(lVar6 + 8);
        }
      }
      lVar11 = lVar11 + 1;
      param_4[1] = (long)puVar12;
      puVar17 = puVar12;
    } while (lVar11 < iVar15);
  }
LAB_006eed90:
  lVar18 = FUN_0068c940(param_3);
  puVar4 = PTR_DAT_007a2b78;
  lVar6 = *param_4;
  lVar11 = param_4[1];
  uVar10 = lVar11 - lVar6 >> 3;
  local_b0 = *(undefined8 *)(lVar18 + 0x28);
  uVar14 = uVar10;
  if (0x80 < (long)uVar10) {
    do {
      pvVar13 = (void *)FUN_007539d4(uVar14 << 3,puVar4);
      if (pvVar13 != (void *)0x0) goto LAB_006eedf0;
      bVar1 = 1 < uVar14;
      uVar14 = uVar14 >> 1;
    } while (bVar1);
  }
  pvVar13 = (void *)0x0;
  uVar14 = 0;
LAB_006eedf0:
                    /* try { // try from 006eedf0 to 006eee0b has its CatchHandler @ 006eeec4 */
  FUN_006f9788(lVar6,lVar11,&local_b0,uVar10,pvVar13,uVar14);
  if (pvVar13 != (void *)0x0) {
    free(pvVar13);
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return (uVar5 ^ 1) & 1;
  }
LAB_006eef20:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_006eee74:
  if (*(long *)(lVar3 + 0x28) == local_70) {
    FUN_006f7fa8(param_4);
LAB_006eee90:
    if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006eeea4 to 006eeea7 has its CatchHandler @ 006eeed8 */
      FUN_002f9ee0();
    }
  }
  goto LAB_006eef20;
}


// ===== 006eef24  FUN_006eef24 =====

void FUN_006eef24(undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong *puVar6;
  undefined8 extraout_x1;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  code **local_90;
  long *plStack_88;
  long local_60;
  code *pcStack_58;
  code ***local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_2 + 0x80))(param_2);
  plVar4 = *(long **)(param_3 + 0x18);
  if (plVar4 != (long *)0x0) {
    pcStack_58 = thunk_FUN_006af330;
    local_60 = param_3;
    if (*plVar4 != -1) {
      local_90 = &pcStack_58;
      plStack_88 = &local_60;
      local_50 = &local_90;
      FUN_00710f84(plVar4,&local_50,FUN_00685640);
    }
  }
  uVar3 = *(uint *)(PTR_DAT_007a32d8 + (ulong)*(byte *)(param_3 + 2) * 4);
  if ((int)uVar3 < 4) {
    if (uVar3 == 1) {
      uVar2 = FUN_006e1e5c(param_1);
      FUN_0067cd04(extraout_x1,param_2,param_3,uVar2);
    }
    else if (uVar3 == 2) {
      uVar5 = FUN_006e1d38(param_1);
      FUN_0067d544(extraout_x1,param_2,param_3,uVar5);
    }
    else if (uVar3 == 3) {
      uVar2 = FUN_006e20a4(param_1);
      FUN_0067dd84(extraout_x1,param_2,param_3,uVar2);
    }
    goto LAB_006ef144;
  }
  if (uVar3 < 0xb) {
    if ((1 << (ulong)(uVar3 & 0x1f) & 0x560U) != 0) {
      FUN_00675e64(&local_90,2,
                   "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/text_format.cc"
                   ,0x930);
                    /* try { // try from 006eeff8 to 006ef00b has its CatchHandler @ 006ef188 */
      uVar5 = FUN_00675a58(&local_90,"Not supported.");
                    /* try { // try from 006ef00c to 006ef013 has its CatchHandler @ 006ef184 */
      FUN_00675ac0(&local_50,uVar5);
      FUN_00675e7c(&local_90);
      goto LAB_006ef144;
    }
    if (uVar3 == 7) {
      uVar3 = FUN_006e21c8(param_1);
      FUN_0067feb0(extraout_x1,param_2,param_3,uVar3 & 1);
      goto LAB_006ef144;
    }
    if (uVar3 == 9) {
      puVar6 = (ulong *)FUN_006e1c14(param_1);
      if ((*puVar6 & 1) == 0) {
        local_a0 = (void *)puVar6[2];
        uStack_a8 = puVar6[1];
        local_b0 = *puVar6;
      }
      else {
        FUN_002fb36c(&local_b0,puVar6[2],puVar6[1]);
      }
                    /* try { // try from 006ef120 to 006ef133 has its CatchHandler @ 006ef16c */
      FUN_00680a64(extraout_x1,param_2,param_3,&local_b0);
      if ((local_b0 & 1) != 0) {
        free(local_a0);
      }
      goto LAB_006ef144;
    }
  }
  if (uVar3 == 4) {
    uVar5 = FUN_006e1f80(param_1);
    FUN_0067e5c4(extraout_x1,param_2,param_3,uVar5);
  }
LAB_006ef144:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006ef1b0  FUN_006ef1b0 =====

void FUN_006ef1b0(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong *puVar8;
  undefined8 extraout_x1;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  long local_70;
  code *pcStack_68;
  code ***local_60;
  code **local_58;
  long *plStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  (**(code **)(*param_2 + 0x80))(param_2);
  plVar5 = *(long **)(param_3 + 0x18);
  if (plVar5 != (long *)0x0) {
    pcStack_68 = thunk_FUN_006af330;
    local_70 = param_3;
    if (*plVar5 != -1) {
      local_58 = &pcStack_68;
      plStack_50 = &local_70;
      local_60 = &local_58;
      FUN_00710f84(plVar5,&local_60,FUN_00685640);
    }
  }
  iVar1 = *(int *)(PTR_DAT_007a32d8 + (ulong)*(byte *)(param_3 + 2) * 4);
  if (iVar1 < 6) {
    if (iVar1 < 3) {
      if (iVar1 == 1) {
        uVar4 = FUN_006dfda8(param_1);
        FUN_0067cd04(extraout_x1,param_2,param_3,uVar4);
      }
      else if (iVar1 == 2) {
        uVar7 = FUN_006e0004(param_1);
        FUN_0067d544(extraout_x1,param_2,param_3,uVar7);
      }
    }
    else if (iVar1 == 3) {
      uVar4 = FUN_006e0260(param_1);
      FUN_0067dd84(extraout_x1,param_2,param_3,uVar4);
    }
    else if (iVar1 == 4) {
      uVar7 = FUN_006e04bc(param_1);
      FUN_0067e5c4(extraout_x1,param_2,param_3,uVar7);
    }
    else if (iVar1 == 5) {
      FUN_006e0974(param_1);
      FUN_0067f658(extraout_x1,param_2,param_3);
    }
  }
  else if (iVar1 < 8) {
    if (iVar1 == 6) {
      FUN_006e0718(param_1);
      FUN_0067ee04(extraout_x1,param_2,param_3);
    }
    else if (iVar1 == 7) {
      uVar3 = FUN_006e0bd4(param_1);
      FUN_0067feb0(extraout_x1,param_2,param_3,uVar3 & 1);
    }
  }
  else if (iVar1 == 8) {
    uVar4 = FUN_006e108c(param_1);
    FUN_00681d30(extraout_x1,param_2,param_3,uVar4);
  }
  else if (iVar1 == 9) {
    puVar8 = (ulong *)FUN_006e0e34(param_1);
    if ((*puVar8 & 1) == 0) {
      local_80 = (void *)puVar8[2];
      uStack_88 = puVar8[1];
      local_90 = *puVar8;
    }
    else {
      FUN_002fb36c(&local_90,puVar8[2],puVar8[1]);
    }
                    /* try { // try from 006ef420 to 006ef433 has its CatchHandler @ 006ef46c */
    FUN_00680a64(extraout_x1,param_2,param_3,&local_90);
    if ((local_90 & 1) != 0) {
      free(local_80);
    }
  }
  else if (iVar1 == 10) {
    plVar5 = (long *)FUN_006e11b4(param_1);
    uVar7 = (**(code **)(*plVar5 + 0x18))(plVar5,0);
    uVar6 = FUN_006e11b4(param_1);
    FUN_006e51bc(uVar7,uVar6);
    FUN_00682efc(extraout_x1,param_2,uVar7,param_3);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006ef49c  FUN_006ef49c =====

void FUN_006ef49c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5)

{
  undefined *puVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  int iVar5;
  
  iVar2 = FUN_0067c384(param_3,param_2,param_4);
  FUN_006ef674(param_1,param_2,0xffffffff,iVar2,param_3,param_4,param_5);
  sVar3 = strlen(": ");
  if ((long)sVar3 < 0) {
    FUN_00676318(sVar3,"string length exceeds max size");
    sVar4 = strlen("[");
  }
  else {
    sVar4 = strlen("[");
  }
  if ((long)sVar4 < 0) {
    FUN_00676318(sVar4,"string length exceeds max size");
  }
  (**(code **)(*param_5 + 0x28))(param_5,&DAT_001f2fbc,sVar3);
  if (*(char *)((long)param_5 + 0x1e) != '\0') {
    *(undefined1 *)((long)param_5 + 0x1e) = 0;
    (**(code **)(*param_5 + 0x28))(param_5,PTR_DAT_007a3760,0);
  }
  (**(code **)(*param_5 + 0x28))(param_5,&DAT_001cf3bb,sVar4);
  if ((0 < iVar2) && (FUN_006ee31c(param_1,param_2,param_3,param_4,0,param_5), iVar2 != 1)) {
    iVar5 = 1;
    do {
      (**(code **)(*param_5 + 0x28))(param_5,&DAT_001c2f11,2);
      FUN_006ee31c(param_1,param_2,param_3,param_4,iVar5,param_5);
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  puVar1 = &DAT_001dbdfb;
  if (*(char *)(param_1 + 4) != '\0') {
    puVar1 = &DAT_001e03c5;
  }
                    /* WARNING: Could not recover jumptable at 0x006ef638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_5 + 0x28))(param_5,puVar1,2);
  return;
}


// ===== 006ef674  FUN_006ef674 =====

void FUN_006ef674(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *__src;
  undefined1 *puVar4;
  ulong in_x5;
  long *in_x6;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  void *pvVar10;
  undefined8 local_90;
  ulong local_88;
  void *local_80;
  undefined1 *local_78;
  ulong local_70;
  undefined1 auStack_68 [32];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(char *)(param_1 + 5) == '\0') {
    plVar5 = (long *)(param_1 + 0x28);
    plVar7 = (long *)*plVar5;
    plVar6 = plVar5;
    plVar8 = plVar5;
    if (plVar7 != (long *)0x0) {
      do {
        lVar1 = 8;
        if (in_x5 <= (ulong)plVar7[4]) {
          lVar1 = 0;
          plVar6 = plVar7;
        }
        plVar7 = *(long **)((long)plVar7 + lVar1);
      } while (plVar7 != (long *)0x0);
      if ((plVar6 != plVar5) && ((ulong)plVar6[4] <= in_x5)) {
        plVar8 = plVar6;
      }
    }
    plVar6 = (long *)(param_1 + 0x18);
    if (plVar8 != plVar5) {
      plVar6 = plVar8 + 5;
    }
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x006ef82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)*plVar6 + 0x60))();
      return;
    }
    goto LAB_006ef874;
  }
  local_78 = auStack_68;
  puVar4 = (undefined1 *)FUN_006778a4(*(undefined4 *)(in_x5 + 4),auStack_68);
  __src = local_78;
  uVar9 = (long)puVar4 - (long)auStack_68;
  local_70 = uVar9;
  if (0xfffffffffffffff7 < uVar9) {
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_90);
    }
    goto LAB_006ef874;
  }
  if (uVar9 < 0x17) {
    pvVar10 = (void *)((ulong)&local_90 | 1);
    local_90 = CONCAT71(local_90._1_7_,(char)((int)uVar9 << 1));
    if (puVar4 != auStack_68) goto LAB_006ef76c;
  }
  else {
    uVar2 = (uVar9 & 0xfffffffffffffff8) + 8;
    if ((uVar9 | 7) != 0x17) {
      uVar2 = uVar9 | 7;
    }
    pvVar10 = (void *)FUN_00759c3c(uVar2 + 1);
    local_90 = uVar2 + 1 | 1;
    local_88 = uVar9;
    local_80 = pvVar10;
LAB_006ef76c:
    memmove(pvVar10,__src,uVar9);
  }
  *(undefined1 *)((long)pvVar10 + uVar9) = 0;
  uVar9 = local_88;
  pvVar10 = local_80;
  if ((local_90 & 1) == 0) {
    uVar9 = local_90 >> 1 & 0x7f;
    pvVar10 = (void *)((long)&local_90 + 1);
  }
                    /* try { // try from 006ef7a4 to 006ef7ab has its CatchHandler @ 006ef848 */
  (**(code **)(*in_x6 + 0x28))(in_x6,pvVar10,uVar9);
  if ((local_90 & 1) != 0) {
    free(local_80);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_006ef874:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006ef878  FUN_006ef878 =====

void FUN_006ef878(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_a0 [24];
  long *local_88;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_006ec384(auStack_a0);
                    /* try { // try from 006ef8b8 to 006ef8cf has its CatchHandler @ 006ef928 */
  FUN_006ee1c8(auStack_a0,param_1,param_2,param_3,param_4);
  FUN_006b137c(auStack_68,local_60);
  FUN_006b13d4(auStack_80,local_78);
  plVar2 = local_88;
  local_88 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006ef950  FUN_006ef950 =====

void FUN_006ef950(void *param_1)

{
  FUN_006dbee8();
  free(param_1);
  return;
}


// ===== 006ef974  FUN_006ef974 =====

void FUN_006ef974(long param_1)

{
  FUN_006eb56c(*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 006ef97c  FUN_006ef97c =====

void FUN_006ef97c(long param_1)

{
  FUN_006ef984(*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 006ef984  FUN_006ef984 =====

void FUN_006ef984(long *param_1,int param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 uStack_79;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)*param_1;
  if (plVar2 == (long *)0x0) {
    if (param_2 < 0) {
      FUN_00675e64(auStack_78,1,
                   "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/text_format.cc"
                   ,0x164);
                    /* try { // try from 006efa90 to 006efac7 has its CatchHandler @ 006efb08 */
      uVar3 = FUN_00675a58(auStack_78,"Warning parsing text-format ");
      uVar3 = FUN_00675a80(uVar3,*(long *)(param_1[0x1b] + 8) + 0x18);
      uVar3 = FUN_00675a58(uVar3,&DAT_001f2fbc);
      uVar3 = FUN_00675a80(uVar3,param_4);
                    /* try { // try from 006efac8 to 006efacf has its CatchHandler @ 006efb00 */
      FUN_00675ac0(&uStack_79,uVar3);
    }
    else {
      FUN_00675e64(auStack_78,1,
                   "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/text_format.cc"
                   ,0x160);
                    /* try { // try from 006efa1c to 006efa7b has its CatchHandler @ 006efb0c */
      uVar3 = FUN_00675a58(auStack_78,"Warning parsing text-format ");
      uVar3 = FUN_00675a80(uVar3,*(long *)(param_1[0x1b] + 8) + 0x18);
      uVar3 = FUN_00675a58(uVar3,&DAT_001f2fbc);
      uVar3 = FUN_00675d6c(uVar3,param_2 + 1);
      uVar3 = FUN_00675a58(uVar3,&DAT_001d9efd);
      uVar3 = FUN_00675d6c(uVar3,param_3 + 1);
      uVar3 = FUN_00675a58(uVar3,&DAT_001f2fbc);
      uVar3 = FUN_00675a80(uVar3,param_4);
                    /* try { // try from 006efa7c to 006efa83 has its CatchHandler @ 006efb04 */
      FUN_00675ac0(&uStack_79,uVar3);
    }
    FUN_00675e7c(auStack_78);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x006ef9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2,param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006efb34  FUN_006efb34 =====

/* WARNING: Type propagation algorithm not settling */

uint FUN_006efb34(long param_1,long *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  undefined1 auVar4 [8];
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ulong *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  undefined8 extraout_x1;
  undefined1 *puVar18;
  byte *pbVar19;
  undefined1 *puVar20;
  byte *pbVar21;
  undefined8 uVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  undefined8 uVar30;
  byte bVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined8 *local_1a0;
  undefined1 *puStack_198;
  byte *local_190;
  undefined8 *local_180;
  undefined8 uStack_178;
  void *local_170;
  undefined4 local_168 [4];
  undefined8 *local_158;
  undefined8 *local_150;
  undefined8 uStack_148;
  void *local_140;
  undefined1 local_138 [8];
  undefined1 *local_130;
  undefined8 *local_128;
  undefined1 local_120 [8];
  undefined8 **ppuStack_118;
  undefined8 *local_110;
  long local_108;
  long local_100;
  undefined8 local_f8;
  undefined1 *puStack_f0;
  byte *local_e8;
  undefined8 *local_e0;
  undefined8 **ppuStack_d8;
  undefined8 *local_d0;
  undefined8 local_b0;
  undefined1 *puStack_a8;
  byte *local_a0;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_2 + 0x80))(param_2);
  lVar8 = (**(code **)(*param_2 + 0x80))(param_2);
  uVar22 = *(undefined8 *)(param_1 + 0x48);
  local_f8 = (undefined8 *)0x0;
  puStack_f0 = (undefined1 *)0x0;
  local_e8 = (byte *)0x0;
                    /* try { // try from 006efb9c to 006efbab has its CatchHandler @ 006f22c4 */
  uVar9 = FUN_006fa798(param_2,&local_100,&local_108);
  if ((uVar9 & 1) == 0) {
LAB_006efd8c:
    puVar10 = (undefined1 *)strlen("[");
    if ((undefined1 *)0xfffffffffffffff7 < puVar10) {
      if (*(long *)(lVar1 + 0x28) == local_78) {
                    /* try { // try from 006f1cfc to 006f1d07 has its CatchHandler @ 006f22c0 */
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(&local_b0);
      }
      goto LAB_006f22f4;
    }
    if (puVar10 < (undefined1 *)0x17) {
      pbVar21 = (byte *)((ulong)&local_b0 | 1);
      local_b0 = (undefined8 *)CONCAT71(local_b0._1_7_,(char)((int)puVar10 << 1));
      if (puVar10 != (undefined1 *)0x0) goto LAB_006efdfc;
    }
    else {
      uVar9 = ((ulong)puVar10 & 0xfffffffffffffff8) + 8;
      if (((ulong)puVar10 | 7) != 0x17) {
        uVar9 = (ulong)puVar10 | 7;
      }
                    /* try { // try from 006efde0 to 006efde7 has its CatchHandler @ 006f22c0 */
      pbVar21 = (byte *)FUN_00759c3c(uVar9 + 1);
      local_b0 = (undefined8 *)(uVar9 + 1 | 1);
      puStack_a8 = puVar10;
      local_a0 = pbVar21;
LAB_006efdfc:
      memcpy(pbVar21,&DAT_001cf3bb,(size_t)puVar10);
    }
    puVar13 = local_b0;
    pbVar21[(long)puVar10] = 0;
    bVar3 = false;
    bVar23 = *(byte *)(param_1 + 0x30);
    puVar18 = (undefined1 *)(ulong)(bVar23 >> 1);
    puVar10 = puVar18;
    if ((bVar23 & 1) != 0) {
      puVar10 = *(undefined1 **)(param_1 + 0x38);
    }
    puVar20 = (undefined1 *)((ulong)local_b0 >> 1 & 0x7f);
    if (((ulong)local_b0 & 1) != 0) {
      puVar20 = puStack_a8;
    }
    if (puVar10 == puVar20) {
      pbVar21 = local_a0;
      if (((ulong)local_b0 & 1) == 0) {
        pbVar21 = (byte *)((long)&local_b0 + 1);
      }
      if ((bVar23 & 1) == 0) {
        if (1 < bVar23) {
          pbVar16 = (byte *)(param_1 + 0x31);
          do {
            if (*pbVar16 != *pbVar21) goto LAB_006efe94;
            puVar18 = puVar18 + -1;
            pbVar21 = pbVar21 + 1;
            pbVar16 = pbVar16 + 1;
          } while (puVar18 != (undefined1 *)0x0);
        }
      }
      else {
        iVar6 = memcmp(*(void **)(param_1 + 0x40),pbVar21,(size_t)*(undefined1 **)(param_1 + 0x38));
        if (iVar6 != 0) {
LAB_006efe94:
          bVar3 = false;
          goto joined_r0x006efeac;
        }
      }
                    /* try { // try from 006efea0 to 006efea7 has its CatchHandler @ 006f2208 */
      FUN_006dd460(param_1 + 0x28);
      bVar3 = true;
    }
joined_r0x006efeac:
    if (((ulong)puVar13 & 1) != 0) {
      free(local_a0);
    }
    if (bVar3) {
                    /* try { // try from 006efebc to 006eff37 has its CatchHandler @ 006f22c4 */
      uVar9 = FUN_006f2c1c(param_1,&local_f8);
      if ((uVar9 & 1) != 0) {
        puVar10 = (undefined1 *)strlen("]");
        if ((undefined1 *)0xfffffffffffffff7 < puVar10) {
          if (*(long *)(lVar1 + 0x28) == local_78) {
                    /* try { // try from 006f1d34 to 006f1d3f has its CatchHandler @ 006f2238 */
                    /* WARNING: Subroutine does not return */
            FUN_002fb400(&local_b0);
          }
          goto LAB_006f22f4;
        }
        if (puVar10 < (undefined1 *)0x17) {
          pbVar21 = (byte *)((ulong)&local_b0 | 1);
          local_b0 = (undefined8 *)CONCAT71(local_b0._1_7_,(char)((int)puVar10 << 1));
          if (puVar10 != (undefined1 *)0x0) goto LAB_006efff4;
        }
        else {
          uVar9 = ((ulong)puVar10 & 0xfffffffffffffff8) + 8;
          if (((ulong)puVar10 | 7) != 0x17) {
            uVar9 = (ulong)puVar10 | 7;
          }
                    /* try { // try from 006effd8 to 006effdf has its CatchHandler @ 006f2238 */
          pbVar21 = (byte *)FUN_00759c3c(uVar9 + 1);
          local_b0 = (undefined8 *)(uVar9 + 1 | 1);
          puStack_a8 = puVar10;
          local_a0 = pbVar21;
LAB_006efff4:
          memcpy(pbVar21,&DAT_001e1051,(size_t)puVar10);
        }
        pbVar21[(long)puVar10] = 0;
                    /* try { // try from 006f000c to 006f0033 has its CatchHandler @ 006f22a0 */
        FUN_006dc0ac(param_1 + 0x28,1);
        uVar9 = FUN_006f54d4(param_1,&local_b0);
        FUN_006dc0ac(param_1 + 0x28,0);
        if (((ulong)local_b0 & 1) != 0) {
          free(local_a0);
        }
        if ((uVar9 & 1) != 0) {
                    /* try { // try from 006f0048 to 006f006b has its CatchHandler @ 006f22c4 */
          FUN_006f2730(param_1);
          plVar12 = *(long **)(param_1 + 8);
          if (plVar12 == (long *)0x0) {
                    /* try { // try from 006f0144 to 006f015f has its CatchHandler @ 006f22c4 */
            lVar14 = (**(code **)(*param_2 + 0x80))(param_2);
            puVar13 = (undefined8 *)
                      FUN_0068c648(*(undefined8 *)(*(long *)(lVar14 + 0x10) + 0x18),lVar14,&local_f8
                                  );
          }
          else {
            puVar13 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12,param_2,&local_f8);
          }
          if (puVar13 != (undefined8 *)0x0) {
LAB_006f0dd4:
            if (*(int *)(param_1 + 0xe0) == 1) {
              bVar23 = *(byte *)((long)puVar13 + 1);
              if (((bVar23 ^ 0xff) & 0x60) != 0) {
                    /* try { // try from 006f0df0 to 006f0dff has its CatchHandler @ 006f22c4 */
                uVar9 = FUN_0067b838(extraout_x1,param_2,puVar13);
                if ((uVar9 & 1) != 0) {
                    /* try { // try from 006f0e04 to 006f0e17 has its CatchHandler @ 006f209c */
                  FUN_00714534(&local_e0,"Non-repeated field \"",&local_f8);
                    /* try { // try from 006f0e18 to 006f0e27 has its CatchHandler @ 006f2098 */
                  puVar13 = (undefined8 *)FUN_00713bdc(&local_e0,"\" is specified multiple times.");
                  local_a0 = (byte *)puVar13[2];
                  puStack_a8 = (undefined1 *)puVar13[1];
                  local_b0 = (undefined8 *)*puVar13;
                  puVar13[1] = 0;
                  puVar13[2] = 0;
                  *puVar13 = 0;
                    /* try { // try from 006f0e44 to 006f0e4f has its CatchHandler @ 006f2094 */
                  FUN_006eb56c(param_1,*(undefined4 *)(param_1 + 0x48),
                               *(undefined4 *)(param_1 + 0x4c),&local_b0);
                  local_158 = local_d0;
                  auVar4 = (undefined1  [8])local_e0;
                  if (((ulong)local_b0 & 1) != 0) {
                    free(local_a0);
                    local_158 = local_d0;
                    auVar4 = (undefined1  [8])local_e0;
                  }
                  goto joined_r0x006f1924;
                }
                bVar23 = *(byte *)((long)puVar13 + 1);
              }
                    /* try { // try from 006f0f80 to 006f0f8f has its CatchHandler @ 006f2118 */
              if ((((bVar23 >> 4 & 1) != 0) && (lVar8 = puVar13[5], lVar8 != 0)) &&
                 (uVar9 = FUN_006847a4(extraout_x1,param_2,lVar8), (uVar9 & 1) != 0)) {
                    /* try { // try from 006f0f94 to 006f0fa3 has its CatchHandler @ 006f1f94 */
                lVar14 = FUN_0068407c(extraout_x1,param_2,lVar8);
                    /* try { // try from 006f0fa4 to 006f0fbb has its CatchHandler @ 006f1f90 */
                FUN_00714534(local_168,"Field \"",&local_f8);
                    /* try { // try from 006f0fbc to 006f0fcb has its CatchHandler @ 006f1f74 */
                puVar13 = (undefined8 *)
                          FUN_00713bdc(local_168,"\" is specified along with field \"");
                local_140 = (void *)puVar13[2];
                uStack_148 = puVar13[1];
                local_150 = (undefined8 *)*puVar13;
                puVar13[1] = 0;
                puVar13[2] = 0;
                *puVar13 = 0;
                    /* try { // try from 006f0fe8 to 006f0ff3 has its CatchHandler @ 006f1f60 */
                FUN_00696434(local_138,&local_150,*(undefined8 *)(lVar14 + 8));
                    /* try { // try from 006f0ff4 to 006f1003 has its CatchHandler @ 006f1f4c */
                puVar13 = (undefined8 *)FUN_00713bdc(local_138,"\", another member of oneof \"");
                local_110 = (undefined8 *)puVar13[2];
                ppuStack_118 = (undefined8 **)puVar13[1];
                local_120 = (undefined1  [8])*puVar13;
                puVar13[1] = 0;
                puVar13[2] = 0;
                *puVar13 = 0;
                    /* try { // try from 006f1020 to 006f102b has its CatchHandler @ 006f1f08 */
                FUN_00696434(&local_e0,local_120,*(undefined8 *)(lVar8 + 8));
                    /* try { // try from 006f102c to 006f103b has its CatchHandler @ 006f1ee4 */
                puVar13 = (undefined8 *)FUN_00713bdc(&local_e0,&DAT_001f097e);
                local_a0 = (byte *)puVar13[2];
                puStack_a8 = (undefined1 *)puVar13[1];
                local_b0 = (undefined8 *)*puVar13;
                puVar13[1] = 0;
                puVar13[2] = 0;
                *puVar13 = 0;
                    /* try { // try from 006f1058 to 006f1063 has its CatchHandler @ 006f1e94 */
                FUN_006eb56c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c)
                             ,&local_b0);
                if (((ulong)local_b0 & 1) != 0) {
                  free(local_a0);
                }
                if (((ulong)local_e0 & 1) != 0) {
                  free(local_d0);
                }
                if (((ulong)local_120 & 1) != 0) {
                  free(local_110);
                }
                if (((ulong)local_138 & 1) != 0) {
                  free(local_128);
                }
                if (((ulong)local_150 & 1) != 0) {
                  free(local_140);
                }
                if (((byte)local_168[0] & 1) != 0) goto LAB_006f1a08;
                goto LAB_006f1ab8;
              }
            }
            plVar12 = (long *)puVar13[3];
            if ((plVar12 != (long *)0x0) &&
               (local_120 = (undefined1  [8])PTR_thunk_FUN_006af330_007a32d0,
               local_138 = (undefined1  [8])puVar13, *plVar12 != -1)) {
              local_b0 = (undefined8 *)local_120;
              puStack_a8 = local_138;
              local_e0 = &local_b0;
                    /* try { // try from 006f10d0 to 006f10df has its CatchHandler @ 006f22c4 */
              FUN_00710f84(plVar12,&local_e0,FUN_00685640);
            }
            if (*(int *)(PTR_DAT_007a32d8 + (ulong)*(byte *)((long)puVar13 + 2) * 4) == 10) {
              puVar10 = (undefined1 *)strlen(":");
              if ((undefined1 *)0xfffffffffffffff7 < puVar10) {
                if (*(long *)(lVar1 + 0x28) == local_78) {
                    /* try { // try from 006f1db4 to 006f1dbf has its CatchHandler @ 006f21c8 */
                    /* WARNING: Subroutine does not return */
                  FUN_002fb400(&local_b0);
                }
                goto LAB_006f22f4;
              }
              if (puVar10 < (undefined1 *)0x17) {
                pbVar21 = (byte *)((ulong)&local_b0 | 1);
                local_b0 = (undefined8 *)CONCAT71(local_b0._1_7_,(char)((int)puVar10 << 1));
                if (puVar10 != (undefined1 *)0x0) goto LAB_006f1198;
              }
              else {
                uVar9 = ((ulong)puVar10 & 0xfffffffffffffff8) + 8;
                if (((ulong)puVar10 | 7) != 0x17) {
                  uVar9 = (ulong)puVar10 | 7;
                }
                    /* try { // try from 006f117c to 006f1183 has its CatchHandler @ 006f21c8 */
                pbVar21 = (byte *)FUN_00759c3c(uVar9 + 1);
                local_b0 = (undefined8 *)(uVar9 + 1 | 1);
                puStack_a8 = puVar10;
                local_a0 = pbVar21;
LAB_006f1198:
                memcpy(pbVar21,&DAT_001d9efd,(size_t)puVar10);
              }
              pbVar21[(long)puVar10] = 0;
                    /* try { // try from 006f11b0 to 006f11bb has its CatchHandler @ 006f21b0 */
              uVar9 = FUN_006f2894(param_1,&local_b0);
              if (((ulong)local_b0 & 1) != 0) {
                free(local_a0);
              }
                    /* try { // try from 006f11d4 to 006f11db has its CatchHandler @ 006f211c */
              if ((((uVar9 & 1) == 0) ||
                  (FUN_006f2730(param_1), *(char *)(puVar13[7] + 0x54) == '\0')) ||
                 (*(int *)(param_1 + 0x28) != 5)) goto LAB_006f12c4;
              local_b0 = (undefined8 *)0x0;
              puStack_a8 = (undefined1 *)0x0;
              local_a0 = (byte *)0x0;
                    /* try { // try from 006f11fc to 006f1207 has its CatchHandler @ 006f1fc0 */
              uVar9 = FUN_006f433c(param_1,&local_b0);
              if ((uVar9 & 1) != 0) {
                plVar12 = *(long **)(param_1 + 8);
                if (plVar12 == (long *)0x0) {
                  uVar15 = 0;
                }
                else {
                    /* try { // try from 006f1220 to 006f1227 has its CatchHandler @ 006f20a0 */
                  uVar15 = (**(code **)(*plVar12 + 0x28))(plVar12,puVar13);
                }
                    /* try { // try from 006f1a4c to 006f1a63 has its CatchHandler @ 006f20a0 */
                uVar15 = FUN_00682834(extraout_x1,param_2,puVar13,uVar15);
                thunk_FUN_0066e8b0(uVar15,&local_b0);
              }
              if (((ulong)local_b0 & 1) != 0) {
                free(local_a0);
              }
joined_r0x006f15f8:
              if ((uVar9 & 1) == 0) goto LAB_006f1ab8;
            }
            else {
              puVar10 = (undefined1 *)strlen(":");
              if ((undefined1 *)0xfffffffffffffff7 < puVar10) {
                if (*(long *)(lVar1 + 0x28) == local_78) {
                    /* try { // try from 006f1dd0 to 006f1ddb has its CatchHandler @ 006f21c4 */
                    /* WARNING: Subroutine does not return */
                  FUN_002fb400(&local_b0);
                }
                goto LAB_006f22f4;
              }
              if (puVar10 < (undefined1 *)0x17) {
                pbVar21 = (byte *)((ulong)&local_b0 | 1);
                local_b0 = (undefined8 *)CONCAT71(local_b0._1_7_,(char)((int)puVar10 << 1));
                if (puVar10 != (undefined1 *)0x0) goto LAB_006f1268;
              }
              else {
                uVar9 = ((ulong)puVar10 & 0xfffffffffffffff8) + 8;
                if (((ulong)puVar10 | 7) != 0x17) {
                  uVar9 = (ulong)puVar10 | 7;
                }
                    /* try { // try from 006f124c to 006f1253 has its CatchHandler @ 006f21c4 */
                pbVar21 = (byte *)FUN_00759c3c(uVar9 + 1);
                local_b0 = (undefined8 *)(uVar9 + 1 | 1);
                puStack_a8 = puVar10;
                local_a0 = pbVar21;
LAB_006f1268:
                memcpy(pbVar21,&DAT_001d9efd,(size_t)puVar10);
              }
              pbVar21[(long)puVar10] = 0;
                    /* try { // try from 006f1280 to 006f12a7 has its CatchHandler @ 006f2220 */
              FUN_006dc0ac(param_1 + 0x28,1);
              uVar9 = FUN_006f54d4(param_1,&local_b0);
              FUN_006dc0ac(param_1 + 0x28,0);
              if (((ulong)local_b0 & 1) != 0) {
                free(local_a0);
              }
              if ((uVar9 & 1) == 0) goto LAB_006f1ab8;
                    /* try { // try from 006f12bc to 006f12c3 has its CatchHandler @ 006f22c4 */
              FUN_006f2730(param_1);
LAB_006f12c4:
              if (((*(byte *)((long)puVar13 + 1) ^ 0xff) & 0x60) != 0) {
LAB_006f15bc:
                    /* try { // try from 006f15bc to 006f15f7 has its CatchHandler @ 006f22c4 */
                iVar6 = FUN_006e9640(puVar13);
                if (iVar6 == 10) {
                  uVar9 = FUN_006f4450(param_1,param_2,extraout_x1,puVar13);
                }
                else {
                  uVar9 = FUN_006f4748(param_1,param_2,extraout_x1,puVar13);
                }
                goto joined_r0x006f15f8;
              }
                    /* try { // try from 006f12d8 to 006f12e7 has its CatchHandler @ 006f2198 */
              FUN_002fd2b0(&local_b0,&DAT_001cf3bb);
                    /* try { // try from 006f12e8 to 006f12f3 has its CatchHandler @ 006f2194 */
              uVar9 = FUN_006f22f8(param_1,&local_b0);
              if (((ulong)local_b0 & 1) != 0) {
                free(local_a0);
              }
              if ((uVar9 & 1) == 0) goto LAB_006f15bc;
                    /* try { // try from 006f130c to 006f131b has its CatchHandler @ 006f2090 */
              FUN_002fd2b0(&local_b0,&DAT_001e1051);
                    /* try { // try from 006f131c to 006f1327 has its CatchHandler @ 006f208c */
              uVar9 = FUN_006f22f8(param_1,&local_b0);
              if (((ulong)local_b0 & 1) != 0) {
                free(local_a0);
              }
              if ((uVar9 & 1) == 0) {
                pbVar21 = (byte *)((ulong)&local_b0 | 1);
                do {
                  puVar5 = PTR_DAT_007a32d8;
                  plVar12 = (long *)puVar13[3];
                  if ((plVar12 != (long *)0x0) &&
                     (local_120 = (undefined1  [8])PTR_thunk_FUN_006af330_007a32d0,
                     local_138 = (undefined1  [8])puVar13, *plVar12 != -1)) {
                    local_b0 = (undefined8 *)local_120;
                    puStack_a8 = local_138;
                    local_e0 = &local_b0;
                    /* try { // try from 006f13a8 to 006f13f3 has its CatchHandler @ 006f21f8 */
                    FUN_00710f84(plVar12,&local_e0,FUN_00685640);
                  }
                  if (*(int *)(puVar5 + (ulong)*(byte *)((long)puVar13 + 2) * 4) == 10) {
                    uVar9 = FUN_006f4450(param_1,param_2,extraout_x1,puVar13);
                  }
                  else {
                    uVar9 = FUN_006f4748(param_1,param_2,extraout_x1,puVar13);
                  }
                  if ((uVar9 & 1) == 0) goto LAB_006f1ab8;
                  puVar10 = (undefined1 *)strlen("]");
                  if ((undefined1 *)0xfffffffffffffff7 < puVar10) {
                    if (*(long *)(lVar1 + 0x28) == local_78) {
                    /* try { // try from 006f1d68 to 006f1d73 has its CatchHandler @ 006f21ec */
                    /* WARNING: Subroutine does not return */
                      FUN_002fb400(&local_b0);
                    }
                    goto LAB_006f22f4;
                  }
                  if (puVar10 < (undefined1 *)0x17) {
                    local_b0 = (undefined8 *)CONCAT71(local_b0._1_7_,(char)((int)puVar10 << 1));
                    pbVar16 = pbVar21;
                    if (puVar10 != (undefined1 *)0x0) goto LAB_006f145c;
                  }
                  else {
                    uVar9 = ((ulong)puVar10 & 0xfffffffffffffff8) + 8;
                    if (((ulong)puVar10 | 7) != 0x17) {
                      uVar9 = (ulong)puVar10 | 7;
                    }
                    /* try { // try from 006f1444 to 006f144b has its CatchHandler @ 006f21a4 */
                    pbVar16 = (byte *)FUN_00759c3c(uVar9 + 1);
                    local_b0 = (undefined8 *)(uVar9 + 1 | 1);
                    puStack_a8 = puVar10;
                    local_a0 = pbVar16;
LAB_006f145c:
                    memcpy(pbVar16,&DAT_001e1051,(size_t)puVar10);
                  }
                  puVar17 = local_b0;
                  pbVar16[(long)puVar10] = 0;
                  bVar3 = false;
                  bVar23 = *(byte *)(param_1 + 0x30);
                  puVar18 = (undefined1 *)(ulong)(bVar23 >> 1);
                  puVar10 = puVar18;
                  if ((bVar23 & 1) != 0) {
                    puVar10 = *(undefined1 **)(param_1 + 0x38);
                  }
                  puVar20 = (undefined1 *)((ulong)local_b0 >> 1 & 0x7f);
                  if (((ulong)local_b0 & 1) != 0) {
                    puVar20 = puStack_a8;
                  }
                  if (puVar10 == puVar20) {
                    pbVar16 = pbVar21;
                    if (((ulong)local_b0 & 1) != 0) {
                      pbVar16 = local_a0;
                    }
                    if ((bVar23 & 1) == 0) {
                      pbVar19 = (byte *)(param_1 + 0x31);
                      if (1 < bVar23) {
                        do {
                          if (*pbVar19 != *pbVar16) goto LAB_006f14ec;
                          puVar18 = puVar18 + -1;
                          pbVar16 = pbVar16 + 1;
                          pbVar19 = pbVar19 + 1;
                        } while (puVar18 != (undefined1 *)0x0);
                      }
                    }
                    else {
                      iVar6 = memcmp(*(void **)(param_1 + 0x40),pbVar16,
                                     (size_t)*(undefined1 **)(param_1 + 0x38));
                      if (iVar6 != 0) {
LAB_006f14ec:
                        bVar3 = false;
                        goto joined_r0x006f1504;
                      }
                    }
                    /* try { // try from 006f14f8 to 006f14ff has its CatchHandler @ 006f2104 */
                    FUN_006dd460(param_1 + 0x28);
                    bVar3 = true;
                  }
joined_r0x006f1504:
                  if (((ulong)puVar17 & 1) != 0) {
                    free(local_a0);
                  }
                  if (bVar3) goto LAB_006f1a7c;
                  puVar10 = (undefined1 *)strlen(",");
                  if ((undefined1 *)0xfffffffffffffff7 < puVar10) {
                    if (*(long *)(lVar1 + 0x28) == local_78) {
                    /* try { // try from 006f1d84 to 006f1d8b has its CatchHandler @ 006f21e4 */
                    /* WARNING: Subroutine does not return */
                      FUN_002fb400(&local_b0);
                    }
                    goto LAB_006f22f4;
                  }
                  if (puVar10 < (undefined1 *)0x17) {
                    local_b0 = (undefined8 *)CONCAT71(local_b0._1_7_,(char)((int)puVar10 << 1));
                    pbVar16 = pbVar21;
                    if (puVar10 != (undefined1 *)0x0) goto LAB_006f1580;
                  }
                  else {
                    uVar9 = ((ulong)puVar10 & 0xfffffffffffffff8) + 8;
                    if (((ulong)puVar10 | 7) != 0x17) {
                      uVar9 = (ulong)puVar10 | 7;
                    }
                    /* try { // try from 006f1564 to 006f156b has its CatchHandler @ 006f21a0 */
                    pbVar16 = (byte *)FUN_00759c3c(uVar9 + 1);
                    local_b0 = (undefined8 *)(uVar9 + 1 | 1);
                    puStack_a8 = puVar10;
                    local_a0 = pbVar16;
LAB_006f1580:
                    memcpy(pbVar16,&DAT_001ce2ff,(size_t)puVar10);
                  }
                  pbVar16[(long)puVar10] = 0;
                    /* try { // try from 006f1598 to 006f15a3 has its CatchHandler @ 006f21e8 */
                  uVar9 = FUN_006f54d4(param_1,&local_b0);
                  if (((ulong)local_b0 & 1) != 0) {
                    free(local_a0);
                  }
                  uVar7 = 0;
                } while ((uVar9 & 1) != 0);
                goto joined_r0x006f1ac0;
              }
            }
LAB_006f1a7c:
            puVar10 = (undefined1 *)strlen(";");
            if ((undefined1 *)0xfffffffffffffff7 < puVar10) {
              if (*(long *)(lVar1 + 0x28) == local_78) {
                    /* try { // try from 006f1e04 to 006f1e0b has its CatchHandler @ 006f21b8 */
                    /* WARNING: Subroutine does not return */
                FUN_002fb400(&local_b0);
              }
              goto LAB_006f22f4;
            }
            if (puVar10 < (undefined1 *)0x17) {
              pbVar21 = (byte *)((ulong)&local_b0 | 1);
              local_b0 = (undefined8 *)CONCAT71(local_b0._1_7_,(char)((int)puVar10 << 1));
              if (puVar10 != (undefined1 *)0x0) goto LAB_006f1b34;
            }
            else {
              uVar9 = ((ulong)puVar10 & 0xfffffffffffffff8) + 8;
              if (((ulong)puVar10 | 7) != 0x17) {
                uVar9 = (ulong)puVar10 | 7;
              }
                    /* try { // try from 006f1b18 to 006f1b1f has its CatchHandler @ 006f21b8 */
              pbVar21 = (byte *)FUN_00759c3c(uVar9 + 1);
              local_b0 = (undefined8 *)(uVar9 + 1 | 1);
              puStack_a8 = puVar10;
              local_a0 = pbVar21;
LAB_006f1b34:
              memcpy(pbVar21,&DAT_001d3496,(size_t)puVar10);
            }
            puVar17 = local_b0;
            pbVar21[(long)puVar10] = 0;
            bVar23 = *(byte *)(param_1 + 0x30);
            puVar18 = (undefined1 *)(ulong)(bVar23 >> 1);
            puVar10 = puVar18;
            if ((bVar23 & 1) != 0) {
              puVar10 = *(undefined1 **)(param_1 + 0x38);
            }
            puVar20 = (undefined1 *)((ulong)local_b0 >> 1 & 0x7f);
            if (((ulong)local_b0 & 1) != 0) {
              puVar20 = puStack_a8;
            }
            if (puVar10 == puVar20) {
              pbVar21 = local_a0;
              if (((ulong)local_b0 & 1) == 0) {
                pbVar21 = (byte *)((long)&local_b0 + 1);
              }
              if ((bVar23 & 1) == 0) {
                if (1 < bVar23) {
                  pbVar16 = (byte *)(param_1 + 0x31);
                  do {
                    if (*pbVar16 != *pbVar21) goto LAB_006f1bc8;
                    puVar18 = puVar18 + -1;
                    pbVar21 = pbVar21 + 1;
                    pbVar16 = pbVar16 + 1;
                  } while (puVar18 != (undefined1 *)0x0);
                }
              }
              else {
                iVar6 = memcmp(*(void **)(param_1 + 0x40),pbVar21,
                               (size_t)*(undefined1 **)(param_1 + 0x38));
                if (iVar6 != 0) goto LAB_006f1bc8;
              }
                    /* try { // try from 006f1bf8 to 006f1bff has its CatchHandler @ 006f1e90 */
              FUN_006dd460(param_1 + 0x28);
            }
            else {
LAB_006f1bc8:
                    /* try { // try from 006f1bc8 to 006f1bd7 has its CatchHandler @ 006f2184 */
              FUN_002fd2b0(&local_e0,&DAT_001ce2ff);
                    /* try { // try from 006f1bd8 to 006f1be3 has its CatchHandler @ 006f2164 */
              FUN_006f22f8(param_1,&local_e0);
              if (((ulong)local_e0 & 1) != 0) {
                free(local_d0);
              }
            }
            if (((ulong)puVar17 & 1) != 0) {
              free(local_a0);
            }
            if (*(char *)(puVar13[7] + 0x53) != '\0') {
                    /* try { // try from 006f1c18 to 006f1c2b has its CatchHandler @ 006f215c */
              FUN_00714534(&local_e0,"text format contains deprecated field \"",&local_f8);
                    /* try { // try from 006f1c2c to 006f1c3b has its CatchHandler @ 006f2140 */
              puVar17 = (undefined8 *)FUN_00713bdc(&local_e0,&DAT_001e5312);
              local_a0 = (byte *)puVar17[2];
              puStack_a8 = (undefined1 *)puVar17[1];
              local_b0 = (undefined8 *)*puVar17;
              puVar17[1] = 0;
              puVar17[2] = 0;
              *puVar17 = 0;
                    /* try { // try from 006f1c58 to 006f1c63 has its CatchHandler @ 006f2120 */
              FUN_006ef984(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                           &local_b0);
              if (((ulong)local_b0 & 1) != 0) {
                free(local_a0);
              }
              if (((ulong)local_e0 & 1) != 0) {
                free(local_d0);
              }
            }
            if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 006f1c98 to 006f1ca3 has its CatchHandler @ 006f213c */
              FUN_006eaaa8(*(long *)(param_1 + 0x10),puVar13,uVar22,
                           CONCAT44(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x78))
                          );
            }
            uVar7 = 1;
            goto joined_r0x006f1ac0;
          }
          if (*(char *)(param_1 + 0xe5) != '\0' || *(char *)(param_1 + 0xe6) != '\0') {
                    /* try { // try from 006f0588 to 006f059b has its CatchHandler @ 006f1fb8 */
            FUN_00714534(local_138,"Ignoring extension \"",&local_f8);
                    /* try { // try from 006f059c to 006f05ab has its CatchHandler @ 006f1fb0 */
            puVar13 = (undefined8 *)
                      FUN_00713bdc(local_138,"\" which is not defined or is not an extension of \"")
            ;
            local_110 = (undefined8 *)puVar13[2];
            ppuStack_118 = (undefined8 **)puVar13[1];
            local_120 = (undefined1  [8])*puVar13;
            puVar13[1] = 0;
            puVar13[2] = 0;
            *puVar13 = 0;
                    /* try { // try from 006f05c8 to 006f05d7 has its CatchHandler @ 006f1fa8 */
            FUN_00696434(&local_e0,local_120,*(long *)(lVar8 + 8) + 0x18);
                    /* try { // try from 006f05d8 to 006f05e7 has its CatchHandler @ 006f1fa0 */
            puVar13 = (undefined8 *)FUN_00713bdc(&local_e0,&DAT_001f097e);
            local_a0 = (byte *)puVar13[2];
            puStack_a8 = (undefined1 *)puVar13[1];
            local_b0 = (undefined8 *)*puVar13;
            puVar13[1] = 0;
            puVar13[2] = 0;
            *puVar13 = 0;
                    /* try { // try from 006f0604 to 006f060f has its CatchHandler @ 006f1f98 */
            FUN_006ef984(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                         &local_b0);
            goto LAB_006f0f3c;
          }
                    /* try { // try from 006f0178 to 006f018b has its CatchHandler @ 006f1fbc */
          FUN_00714534(local_138,"Extension \"",&local_f8);
                    /* try { // try from 006f018c to 006f019b has its CatchHandler @ 006f1fb4 */
          puVar11 = (ulong *)FUN_00713bdc(local_138,"\" is not defined or is not an extension of \""
                                         );
          local_110 = (undefined8 *)puVar11[2];
          ppuStack_118 = (undefined8 **)puVar11[1];
          local_120 = (undefined1  [8])*puVar11;
          puVar11[1] = 0;
          puVar11[2] = 0;
          *puVar11 = 0;
                    /* try { // try from 006f01b8 to 006f01c7 has its CatchHandler @ 006f1fac */
          FUN_00696434(&local_e0,local_120,*(long *)(lVar8 + 8) + 0x18);
                    /* try { // try from 006f01c8 to 006f01d7 has its CatchHandler @ 006f1fa4 */
          puVar13 = (undefined8 *)FUN_00713bdc(&local_e0,&DAT_001f097e);
          local_a0 = (byte *)puVar13[2];
          puStack_a8 = (undefined1 *)puVar13[1];
          local_b0 = (undefined8 *)*puVar13;
          puVar13[1] = 0;
          puVar13[2] = 0;
          *puVar13 = 0;
                    /* try { // try from 006f01f4 to 006f01ff has its CatchHandler @ 006f1f9c */
          FUN_006eb56c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                       &local_b0);
LAB_006f18d4:
          if (((ulong)local_b0 & 1) != 0) {
            free(local_a0);
          }
          if (((ulong)local_e0 & 1) != 0) {
            free(local_d0);
          }
          local_158 = local_128;
          auVar4 = local_138;
          if (((ulong)local_120 & 1) != 0) {
            free(local_110);
            local_158 = local_128;
            auVar4 = local_138;
          }
joined_r0x006f1924:
          if (((ulong)auVar4 & 1) != 0) {
LAB_006f1a08:
            free(local_158);
          }
        }
      }
LAB_006f1ab8:
      uVar7 = 0;
    }
    else {
      FUN_006dc0ac(param_1 + 0x28,1);
      uVar9 = FUN_006f5784(param_1,&local_f8);
      FUN_006dc0ac(param_1 + 0x28,0);
      if ((uVar9 & 1) == 0) goto LAB_006f1ab8;
      FUN_006f2730(param_1);
                    /* try { // try from 006eff40 to 006eff8b has its CatchHandler @ 006f229c */
      if ((*(char *)(param_1 + 0xe8) == '\0') ||
         (uVar9 = FUN_00678260(&local_f8,local_168), (uVar9 & 1) == 0)) {
        puVar13 = (undefined8 *)FUN_0068cbb4(lVar8,&local_f8);
        if (puVar13 != (undefined8 *)0x0) {
LAB_006f0940:
          plVar12 = (long *)puVar13[3];
          if ((plVar12 != (long *)0x0) &&
             (local_120 = (undefined1  [8])PTR_thunk_FUN_006af330_007a32d0,
             local_138 = (undefined1  [8])puVar13, *plVar12 != -1)) {
            local_b0 = (undefined8 *)local_120;
            puStack_a8 = local_138;
            local_e0 = &local_b0;
                    /* try { // try from 006f0978 to 006f099b has its CatchHandler @ 006f229c */
            FUN_00710f84(plVar12,&local_e0,FUN_00685640);
          }
          if (*(char *)((long)puVar13 + 2) == '\n') {
            lVar14 = FUN_0068c940(puVar13);
            pbVar21 = *(byte **)(lVar14 + 8);
            bVar23 = *pbVar21;
            puVar18 = (undefined1 *)(ulong)(bVar23 >> 1);
            puVar10 = puVar18;
            if ((bVar23 & 1) != 0) {
              puVar10 = *(undefined1 **)(pbVar21 + 8);
            }
            puVar20 = (undefined1 *)((ulong)local_f8 >> 1 & 0x7f);
            if (((ulong)local_f8 & 1) != 0) {
              puVar20 = puStack_f0;
            }
            if (puVar10 != puVar20) goto LAB_006f0a2c;
            pbVar16 = local_e8;
            if (((ulong)local_f8 & 1) == 0) {
              pbVar16 = (byte *)((long)&local_f8 + 1);
            }
            if ((bVar23 & 1) == 0) {
              if (1 < bVar23) {
                do {
                  pbVar21 = pbVar21 + 1;
                  if (*pbVar21 != *pbVar16) goto LAB_006f0a2c;
                  puVar18 = puVar18 + -1;
                  pbVar16 = pbVar16 + 1;
                } while (puVar18 != (undefined1 *)0x0);
              }
            }
            else {
              iVar6 = memcmp(*(void **)(pbVar21 + 0x10),pbVar16,
                             (size_t)*(undefined1 **)(pbVar21 + 8));
              if (iVar6 != 0) goto LAB_006f0a2c;
            }
          }
          goto LAB_006f0dd4;
        }
        if (((ulong)local_f8 & 1) == 0) {
          puStack_a8 = puStack_f0;
          local_b0 = local_f8;
          local_a0 = local_e8;
        }
        else {
                    /* try { // try from 006f02ac to 006f02b3 has its CatchHandler @ 006f20f0 */
          FUN_002fb36c(&local_b0,local_e8,puStack_f0);
        }
        pbVar21 = local_a0;
        puVar10 = puStack_a8;
        if (((ulong)local_b0 & 1) == 0) {
          pbVar21 = (byte *)((long)&local_b0 + 1);
          puVar10 = (undefined1 *)((ulong)local_b0 >> 1 & 0x7f);
        }
        if (puVar10 != (undefined1 *)0x0) {
          pbVar16 = pbVar21;
          if ((undefined1 *)0x7 < puVar10) {
            if (puVar10 < (undefined1 *)0x10) {
              puVar20 = (undefined1 *)0x0;
            }
            else {
              puVar20 = (undefined1 *)((ulong)puVar10 & 0xfffffffffffffff0);
              pbVar16 = pbVar21 + 7;
              puVar18 = puVar20;
              do {
                uVar30 = *(undefined8 *)(pbVar16 + 1);
                uVar15 = *(undefined8 *)(pbVar16 + -7);
                auVar38[0] = (byte)uVar15 + 0xbf;
                bVar23 = (byte)((ulong)uVar15 >> 8);
                auVar38[1] = bVar23 + 0xbf;
                bVar24 = (byte)((ulong)uVar15 >> 0x10);
                auVar38[2] = bVar24 + 0xbf;
                bVar25 = (byte)((ulong)uVar15 >> 0x18);
                auVar38[3] = bVar25 + 0xbf;
                bVar26 = (byte)((ulong)uVar15 >> 0x20);
                auVar38[4] = bVar26 + 0xbf;
                bVar27 = (byte)((ulong)uVar15 >> 0x28);
                auVar38[5] = bVar27 + 0xbf;
                bVar28 = (byte)((ulong)uVar15 >> 0x30);
                auVar38[6] = bVar28 + 0xbf;
                bVar29 = (byte)((ulong)uVar15 >> 0x38);
                auVar38[7] = bVar29 + 0xbf;
                auVar38[8] = (byte)uVar30 + 0xbf;
                bVar31 = (byte)((ulong)uVar30 >> 8);
                auVar38[9] = bVar31 + 0xbf;
                bVar32 = (byte)((ulong)uVar30 >> 0x10);
                auVar38[10] = bVar32 + 0xbf;
                bVar33 = (byte)((ulong)uVar30 >> 0x18);
                auVar38[0xb] = bVar33 + 0xbf;
                bVar34 = (byte)((ulong)uVar30 >> 0x20);
                auVar38[0xc] = bVar34 + 0xbf;
                bVar35 = (byte)((ulong)uVar30 >> 0x28);
                auVar38[0xd] = bVar35 + 0xbf;
                bVar36 = (byte)((ulong)uVar30 >> 0x30);
                auVar38[0xe] = bVar36 + 0xbf;
                bVar37 = (byte)((ulong)uVar30 >> 0x38);
                auVar38[0xf] = bVar37 + 0xbf;
                auVar40[8] = 0x1a;
                auVar40._0_8_ = 0x1a1a1a1a1a1a1a1a;
                auVar40[9] = 0x1a;
                auVar40[10] = 0x1a;
                auVar40[0xb] = 0x1a;
                auVar40[0xc] = 0x1a;
                auVar40[0xd] = 0x1a;
                auVar40[0xe] = 0x1a;
                auVar40[0xf] = 0x1a;
                auVar40 = NEON_cmhi(auVar40,auVar38,1);
                if ((auVar40 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
                  pbVar16[-7] = (byte)uVar15 | 0x20;
                }
                if ((auVar40 & (undefined1  [16])0x100) != (undefined1  [16])0x0) {
                  pbVar16[-6] = bVar23 | 0x20;
                }
                if ((auVar40 & (undefined1  [16])0x10000) != (undefined1  [16])0x0) {
                  pbVar16[-5] = bVar24 | 0x20;
                }
                if ((auVar40 & (undefined1  [16])0x1000000) != (undefined1  [16])0x0) {
                  pbVar16[-4] = bVar25 | 0x20;
                }
                if ((auVar40 & (undefined1  [16])0x100000000) != (undefined1  [16])0x0) {
                  pbVar16[-3] = bVar26 | 0x20;
                }
                if ((auVar40 & (undefined1  [16])0x10000000000) != (undefined1  [16])0x0) {
                  pbVar16[-2] = bVar27 | 0x20;
                }
                if ((auVar40 & (undefined1  [16])0x1000000000000) != (undefined1  [16])0x0) {
                  pbVar16[-1] = bVar28 | 0x20;
                }
                if ((auVar40 & (undefined1  [16])0x100000000000000) != (undefined1  [16])0x0) {
                  *pbVar16 = bVar29 | 0x20;
                }
                if ((auVar40 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
                  pbVar16[1] = (byte)uVar30 | 0x20;
                }
                if ((auVar40 & (undefined1  [16])0x100) != (undefined1  [16])0x0) {
                  pbVar16[2] = bVar31 | 0x20;
                }
                if ((auVar40 & (undefined1  [16])0x10000) != (undefined1  [16])0x0) {
                  pbVar16[3] = bVar32 | 0x20;
                }
                if ((auVar40 & (undefined1  [16])0x1000000) != (undefined1  [16])0x0) {
                  pbVar16[4] = bVar33 | 0x20;
                }
                if ((auVar40 & (undefined1  [16])0x100000000) != (undefined1  [16])0x0) {
                  pbVar16[5] = bVar34 | 0x20;
                }
                if ((auVar40 & (undefined1  [16])0x10000000000) != (undefined1  [16])0x0) {
                  pbVar16[6] = bVar35 | 0x20;
                }
                if ((auVar40 & (undefined1  [16])0x1000000000000) != (undefined1  [16])0x0) {
                  pbVar16[7] = bVar36 | 0x20;
                }
                if ((auVar40 & (undefined1  [16])0x100000000000000) != (undefined1  [16])0x0) {
                  pbVar16[8] = bVar37 | 0x20;
                }
                puVar18 = puVar18 + -0x10;
                pbVar16 = pbVar16 + 0x10;
              } while (puVar18 != (undefined1 *)0x0);
              if (puVar10 == puVar20) goto LAB_006f08bc;
              if (((uint)puVar10 >> 3 & 1) == 0) {
                pbVar16 = pbVar21 + (long)puVar20;
                goto LAB_006f1a18;
              }
            }
            puVar18 = (undefined1 *)((ulong)puVar10 & 0xfffffffffffffff8);
            pbVar16 = pbVar21 + (long)puVar18;
            lVar14 = (long)puVar20 - (long)puVar18;
            pbVar19 = puVar20 + (long)pbVar21 + 3;
            do {
              uVar15 = *(undefined8 *)(pbVar19 + -3);
              bVar23 = (byte)((ulong)uVar15 >> 8);
              bVar24 = (byte)((ulong)uVar15 >> 0x10);
              bVar25 = (byte)((ulong)uVar15 >> 0x18);
              bVar26 = (byte)((ulong)uVar15 >> 0x20);
              bVar27 = (byte)((ulong)uVar15 >> 0x28);
              bVar28 = (byte)((ulong)uVar15 >> 0x30);
              bVar29 = (byte)((ulong)uVar15 >> 0x38);
              uVar9 = NEON_cmhi(0x1a1a1a1a1a1a1a1a,
                                CONCAT17(bVar29 + 0xbf,
                                         CONCAT16(bVar28 + 0xbf,
                                                  CONCAT15(bVar27 + 0xbf,
                                                           CONCAT14(bVar26 + 0xbf,
                                                                    CONCAT13(bVar25 + 0xbf,
                                                                             CONCAT12(bVar24 + 0xbf,
                                                                                      CONCAT11(
                                                  bVar23 + 0xbf,(byte)uVar15 + 0xbf))))))),1);
              if ((uVar9 & 1) != 0) {
                pbVar19[-3] = (byte)uVar15 | 0x20;
              }
              if ((uVar9 & 0x100) != 0) {
                pbVar19[-2] = bVar23 | 0x20;
              }
              if ((uVar9 & 0x10000) != 0) {
                pbVar19[-1] = bVar24 | 0x20;
              }
              if ((uVar9 & 0x1000000) != 0) {
                *pbVar19 = bVar25 | 0x20;
              }
              if ((uVar9 & 0x100000000) != 0) {
                pbVar19[1] = bVar26 | 0x20;
              }
              if ((uVar9 & 0x10000000000) != 0) {
                pbVar19[2] = bVar27 | 0x20;
              }
              if ((uVar9 & 0x1000000000000) != 0) {
                pbVar19[3] = bVar28 | 0x20;
              }
              if ((uVar9 & 0x100000000000000) != 0) {
                pbVar19[4] = bVar29 | 0x20;
              }
              lVar14 = lVar14 + 8;
              pbVar19 = pbVar19 + 8;
            } while (lVar14 != 0);
            if (puVar10 == puVar18) goto LAB_006f08bc;
          }
LAB_006f1a18:
          do {
            if (*pbVar16 - 0x41 < 0x1a) {
              *pbVar16 = *pbVar16 | 0x20;
            }
            pbVar16 = pbVar16 + 1;
          } while (pbVar16 != pbVar21 + (long)puVar10);
        }
LAB_006f08bc:
                    /* try { // try from 006f08bc to 006f091f has its CatchHandler @ 006f21a8 */
        puVar13 = (undefined8 *)FUN_0068cbb4(lVar8,&local_b0);
        if (puVar13 == (undefined8 *)0x0) {
          puVar13 = (undefined8 *)0x0;
        }
        else {
          plVar12 = (long *)puVar13[3];
          if ((plVar12 != (long *)0x0) &&
             (local_138 = (undefined1  [8])PTR_thunk_FUN_006af330_007a32d0, local_150 = puVar13,
             *plVar12 != -1)) {
            local_e0 = (undefined8 *)local_138;
            ppuStack_d8 = &local_150;
            local_120 = (undefined1  [8])&local_e0;
            FUN_00710f84(plVar12,local_120,FUN_00685640);
          }
          if (*(char *)((long)puVar13 + 2) != '\n') {
            puVar13 = (undefined8 *)0x0;
          }
        }
        if (((ulong)local_b0 & 1) != 0) {
          free(local_a0);
        }
        if (puVar13 != (undefined8 *)0x0) goto LAB_006f0940;
LAB_006f0a2c:
        if (*(char *)(param_1 + 0xe4) != '\0') {
          if (((ulong)local_f8 & 1) == 0) {
            puStack_a8 = puStack_f0;
            local_b0 = local_f8;
            local_a0 = local_e8;
          }
          else {
                    /* try { // try from 006f0a54 to 006f0a5b has its CatchHandler @ 006f1fc4 */
            FUN_002fb36c(&local_b0,local_e8,puStack_f0);
          }
          pbVar21 = local_a0;
          puVar10 = puStack_a8;
          if (((ulong)local_b0 & 1) == 0) {
            pbVar21 = (byte *)((long)&local_b0 + 1);
            puVar10 = (undefined1 *)((ulong)local_b0 >> 1 & 0x7f);
          }
          if (puVar10 != (undefined1 *)0x0) {
            pbVar16 = pbVar21;
            if ((undefined1 *)0x7 < puVar10) {
              if (puVar10 < (undefined1 *)0x10) {
                puVar20 = (undefined1 *)0x0;
              }
              else {
                puVar20 = (undefined1 *)((ulong)puVar10 & 0xfffffffffffffff0);
                pbVar16 = pbVar21 + 7;
                puVar18 = puVar20;
                do {
                  uVar30 = *(undefined8 *)(pbVar16 + 1);
                  uVar15 = *(undefined8 *)(pbVar16 + -7);
                  auVar39[0] = (byte)uVar15 + 0xbf;
                  bVar23 = (byte)((ulong)uVar15 >> 8);
                  auVar39[1] = bVar23 + 0xbf;
                  bVar24 = (byte)((ulong)uVar15 >> 0x10);
                  auVar39[2] = bVar24 + 0xbf;
                  bVar25 = (byte)((ulong)uVar15 >> 0x18);
                  auVar39[3] = bVar25 + 0xbf;
                  bVar26 = (byte)((ulong)uVar15 >> 0x20);
                  auVar39[4] = bVar26 + 0xbf;
                  bVar27 = (byte)((ulong)uVar15 >> 0x28);
                  auVar39[5] = bVar27 + 0xbf;
                  bVar28 = (byte)((ulong)uVar15 >> 0x30);
                  auVar39[6] = bVar28 + 0xbf;
                  bVar29 = (byte)((ulong)uVar15 >> 0x38);
                  auVar39[7] = bVar29 + 0xbf;
                  auVar39[8] = (byte)uVar30 + 0xbf;
                  bVar31 = (byte)((ulong)uVar30 >> 8);
                  auVar39[9] = bVar31 + 0xbf;
                  bVar32 = (byte)((ulong)uVar30 >> 0x10);
                  auVar39[10] = bVar32 + 0xbf;
                  bVar33 = (byte)((ulong)uVar30 >> 0x18);
                  auVar39[0xb] = bVar33 + 0xbf;
                  bVar34 = (byte)((ulong)uVar30 >> 0x20);
                  auVar39[0xc] = bVar34 + 0xbf;
                  bVar35 = (byte)((ulong)uVar30 >> 0x28);
                  auVar39[0xd] = bVar35 + 0xbf;
                  bVar36 = (byte)((ulong)uVar30 >> 0x30);
                  auVar39[0xe] = bVar36 + 0xbf;
                  bVar37 = (byte)((ulong)uVar30 >> 0x38);
                  auVar39[0xf] = bVar37 + 0xbf;
                  auVar2[8] = 0x1a;
                  auVar2._0_8_ = 0x1a1a1a1a1a1a1a1a;
                  auVar2[9] = 0x1a;
                  auVar2[10] = 0x1a;
                  auVar2[0xb] = 0x1a;
                  auVar2[0xc] = 0x1a;
                  auVar2[0xd] = 0x1a;
                  auVar2[0xe] = 0x1a;
                  auVar2[0xf] = 0x1a;
                  auVar40 = NEON_cmhi(auVar2,auVar39,1);
                  if ((auVar40 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
                    pbVar16[-7] = (byte)uVar15 | 0x20;
                  }
                  if ((auVar40 & (undefined1  [16])0x100) != (undefined1  [16])0x0) {
                    pbVar16[-6] = bVar23 | 0x20;
                  }
                  if ((auVar40 & (undefined1  [16])0x10000) != (undefined1  [16])0x0) {
                    pbVar16[-5] = bVar24 | 0x20;
                  }
                  if ((auVar40 & (undefined1  [16])0x1000000) != (undefined1  [16])0x0) {
                    pbVar16[-4] = bVar25 | 0x20;
                  }
                  if ((auVar40 & (undefined1  [16])0x100000000) != (undefined1  [16])0x0) {
                    pbVar16[-3] = bVar26 | 0x20;
                  }
                  if ((auVar40 & (undefined1  [16])0x10000000000) != (undefined1  [16])0x0) {
                    pbVar16[-2] = bVar27 | 0x20;
                  }
                  if ((auVar40 & (undefined1  [16])0x1000000000000) != (undefined1  [16])0x0) {
                    pbVar16[-1] = bVar28 | 0x20;
                  }
                  if ((auVar40 & (undefined1  [16])0x100000000000000) != (undefined1  [16])0x0) {
                    *pbVar16 = bVar29 | 0x20;
                  }
                  if ((auVar40 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
                    pbVar16[1] = (byte)uVar30 | 0x20;
                  }
                  if ((auVar40 & (undefined1  [16])0x100) != (undefined1  [16])0x0) {
                    pbVar16[2] = bVar31 | 0x20;
                  }
                  if ((auVar40 & (undefined1  [16])0x10000) != (undefined1  [16])0x0) {
                    pbVar16[3] = bVar32 | 0x20;
                  }
                  if ((auVar40 & (undefined1  [16])0x1000000) != (undefined1  [16])0x0) {
                    pbVar16[4] = bVar33 | 0x20;
                  }
                  if ((auVar40 & (undefined1  [16])0x100000000) != (undefined1  [16])0x0) {
                    pbVar16[5] = bVar34 | 0x20;
                  }
                  if ((auVar40 & (undefined1  [16])0x10000000000) != (undefined1  [16])0x0) {
                    pbVar16[6] = bVar35 | 0x20;
                  }
                  if ((auVar40 & (undefined1  [16])0x1000000000000) != (undefined1  [16])0x0) {
                    pbVar16[7] = bVar36 | 0x20;
                  }
                  if ((auVar40 & (undefined1  [16])0x100000000000000) != (undefined1  [16])0x0) {
                    pbVar16[8] = bVar37 | 0x20;
                  }
                  puVar18 = puVar18 + -0x10;
                  pbVar16 = pbVar16 + 0x10;
                } while (puVar18 != (undefined1 *)0x0);
                if (puVar10 == puVar20) goto LAB_006f0db0;
                if (((uint)puVar10 >> 3 & 1) == 0) {
                  pbVar16 = pbVar21 + (long)puVar20;
                  goto LAB_006f1cbc;
                }
              }
              puVar18 = (undefined1 *)((ulong)puVar10 & 0xfffffffffffffff8);
              pbVar16 = pbVar21 + (long)puVar18;
              lVar14 = (long)puVar20 - (long)puVar18;
              pbVar19 = puVar20 + (long)pbVar21 + 3;
              do {
                uVar15 = *(undefined8 *)(pbVar19 + -3);
                bVar23 = (byte)((ulong)uVar15 >> 8);
                bVar24 = (byte)((ulong)uVar15 >> 0x10);
                bVar25 = (byte)((ulong)uVar15 >> 0x18);
                bVar26 = (byte)((ulong)uVar15 >> 0x20);
                bVar27 = (byte)((ulong)uVar15 >> 0x28);
                bVar28 = (byte)((ulong)uVar15 >> 0x30);
                bVar29 = (byte)((ulong)uVar15 >> 0x38);
                uVar9 = NEON_cmhi(0x1a1a1a1a1a1a1a1a,
                                  CONCAT17(bVar29 + 0xbf,
                                           CONCAT16(bVar28 + 0xbf,
                                                    CONCAT15(bVar27 + 0xbf,
                                                             CONCAT14(bVar26 + 0xbf,
                                                                      CONCAT13(bVar25 + 0xbf,
                                                                               CONCAT12(bVar24 + 
                                                  0xbf,CONCAT11(bVar23 + 0xbf,(byte)uVar15 + 0xbf)))
                                                  )))),1);
                if ((uVar9 & 1) != 0) {
                  pbVar19[-3] = (byte)uVar15 | 0x20;
                }
                if ((uVar9 & 0x100) != 0) {
                  pbVar19[-2] = bVar23 | 0x20;
                }
                if ((uVar9 & 0x10000) != 0) {
                  pbVar19[-1] = bVar24 | 0x20;
                }
                if ((uVar9 & 0x1000000) != 0) {
                  *pbVar19 = bVar25 | 0x20;
                }
                if ((uVar9 & 0x100000000) != 0) {
                  pbVar19[1] = bVar26 | 0x20;
                }
                if ((uVar9 & 0x10000000000) != 0) {
                  pbVar19[2] = bVar27 | 0x20;
                }
                if ((uVar9 & 0x1000000000000) != 0) {
                  pbVar19[3] = bVar28 | 0x20;
                }
                if ((uVar9 & 0x100000000000000) != 0) {
                  pbVar19[4] = bVar29 | 0x20;
                }
                lVar14 = lVar14 + 8;
                pbVar19 = pbVar19 + 8;
              } while (lVar14 != 0);
              if (puVar10 == puVar18) goto LAB_006f0db0;
            }
LAB_006f1cbc:
            do {
              if (*pbVar16 - 0x41 < 0x1a) {
                *pbVar16 = *pbVar16 | 0x20;
              }
              pbVar16 = pbVar16 + 1;
            } while (pbVar16 != pbVar21 + (long)puVar10);
          }
LAB_006f0db0:
                    /* try { // try from 006f0db0 to 006f0dbb has its CatchHandler @ 006f2160 */
          puVar13 = (undefined8 *)FUN_0068cab8(lVar8,&local_b0);
          if (((ulong)local_b0 & 1) != 0) {
            free(local_a0);
          }
          if (puVar13 != (undefined8 *)0x0) goto LAB_006f0dd4;
        }
                    /* try { // try from 006f0e70 to 006f0e7b has its CatchHandler @ 006f229c */
        uVar9 = FUN_006f2e7c(lVar8,&local_f8);
        if ((uVar9 & 1) != 0) goto LAB_006f1684;
LAB_006f0e80:
        if ((*(byte *)(param_1 + 0xe5) & 1) == 0) {
                    /* try { // try from 006f1824 to 006f1837 has its CatchHandler @ 006f1e54 */
          FUN_00714534(local_138,"Message type \"",*(long *)(lVar8 + 8) + 0x18);
                    /* try { // try from 006f1838 to 006f1847 has its CatchHandler @ 006f1e50 */
          puVar11 = (ulong *)FUN_00713bdc(local_138,"\" has no field named \"");
          local_110 = (undefined8 *)puVar11[2];
          ppuStack_118 = (undefined8 **)puVar11[1];
          local_120 = (undefined1  [8])*puVar11;
          puVar11[1] = 0;
          puVar11[2] = 0;
          *puVar11 = 0;
          puVar10 = puStack_f0;
          pbVar21 = local_e8;
          if (((ulong)local_f8 & 1) == 0) {
            puVar10 = (undefined1 *)((ulong)local_f8 >> 1 & 0x7f);
            pbVar21 = (byte *)((long)&local_f8 + 1);
          }
                    /* try { // try from 006f187c to 006f1883 has its CatchHandler @ 006f1e4c */
          puVar13 = (undefined8 *)FUN_0071302c(local_120,pbVar21,puVar10);
          local_d0 = (undefined8 *)puVar13[2];
          ppuStack_d8 = (undefined8 **)puVar13[1];
          local_e0 = (undefined8 *)*puVar13;
          puVar13[1] = 0;
          puVar13[2] = 0;
          *puVar13 = 0;
                    /* try { // try from 006f189c to 006f18ab has its CatchHandler @ 006f1e48 */
          puVar13 = (undefined8 *)FUN_00713bdc(&local_e0,&DAT_001f097e);
          local_a0 = (byte *)puVar13[2];
          puStack_a8 = (undefined1 *)puVar13[1];
          local_b0 = (undefined8 *)*puVar13;
          puVar13[1] = 0;
          puVar13[2] = 0;
          *puVar13 = 0;
                    /* try { // try from 006f18c8 to 006f18d3 has its CatchHandler @ 006f1e44 */
          FUN_006eb56c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                       &local_b0);
          goto LAB_006f18d4;
        }
                    /* try { // try from 006f0e8c to 006f0e9f has its CatchHandler @ 006f2088 */
        FUN_00714534(local_138,"Message type \"",*(long *)(lVar8 + 8) + 0x18);
                    /* try { // try from 006f0ea0 to 006f0eaf has its CatchHandler @ 006f206c */
        puVar13 = (undefined8 *)FUN_00713bdc(local_138,"\" has no field named \"");
        local_110 = (undefined8 *)puVar13[2];
        ppuStack_118 = (undefined8 **)puVar13[1];
        local_120 = (undefined1  [8])*puVar13;
        puVar13[1] = 0;
        puVar13[2] = 0;
        *puVar13 = 0;
        puVar10 = puStack_f0;
        pbVar21 = local_e8;
        if (((ulong)local_f8 & 1) == 0) {
          puVar10 = (undefined1 *)((ulong)local_f8 >> 1 & 0x7f);
          pbVar21 = (byte *)((long)&local_f8 + 1);
        }
                    /* try { // try from 006f0ee4 to 006f0eeb has its CatchHandler @ 006f2048 */
        puVar13 = (undefined8 *)FUN_0071302c(local_120,pbVar21,puVar10);
        local_d0 = (undefined8 *)puVar13[2];
        ppuStack_d8 = (undefined8 **)puVar13[1];
        local_e0 = (undefined8 *)*puVar13;
        puVar13[1] = 0;
        puVar13[2] = 0;
        *puVar13 = 0;
                    /* try { // try from 006f0f04 to 006f0f13 has its CatchHandler @ 006f2024 */
        puVar13 = (undefined8 *)FUN_00713bdc(&local_e0,&DAT_001f097e);
        local_a0 = (byte *)puVar13[2];
        puStack_a8 = (undefined1 *)puVar13[1];
        local_b0 = (undefined8 *)*puVar13;
        puVar13[1] = 0;
        puVar13[2] = 0;
        *puVar13 = 0;
                    /* try { // try from 006f0f30 to 006f0f3b has its CatchHandler @ 006f1fe4 */
        FUN_006ef984(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                     &local_b0);
LAB_006f0f3c:
        if (((ulong)local_b0 & 1) == 0) {
          if (((ulong)local_e0 & 1) != 0) goto LAB_006f1610;
LAB_006f0f4c:
          if (((ulong)local_120 & 1) != 0) goto LAB_006f1620;
LAB_006f0f54:
          if (((ulong)local_138 & 1) != 0) goto LAB_006f1630;
LAB_006f0f5c:
          if (*(char *)(param_1 + 0xe5) != '\0' || *(char *)(param_1 + 0xe6) != '\0')
          goto LAB_006f1684;
        }
        else {
          free(local_a0);
          if (((ulong)local_e0 & 1) == 0) goto LAB_006f0f4c;
LAB_006f1610:
          free(local_d0);
          if (((ulong)local_120 & 1) == 0) goto LAB_006f0f54;
LAB_006f1620:
          free(local_110);
          if (((ulong)local_138 & 1) == 0) goto LAB_006f0f5c;
LAB_006f1630:
          free(local_128);
          if (*(char *)(param_1 + 0xe5) != '\0' || *(char *)(param_1 + 0xe6) != '\0')
          goto LAB_006f1684;
        }
                    /* try { // try from 006f1648 to 006f165f has its CatchHandler @ 006f1fe0 */
        FUN_00675e64(&local_b0,3,
                     "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/text_format.cc"
                     ,0x225);
                    /* try { // try from 006f1660 to 006f1673 has its CatchHandler @ 006f1fcc */
        uVar22 = FUN_00675a58(&local_b0,
                              "CHECK failed: allow_unknown_field_ || allow_unknown_extension_ || reserved_field: "
                             );
                    /* try { // try from 006f1674 to 006f167b has its CatchHandler @ 006f1fc8 */
        FUN_00675ac0(&local_e0,uVar22);
        FUN_00675e7c(&local_b0);
      }
      else {
        lVar14 = FUN_0068d53c(lVar8,local_168[0]);
        if (lVar14 != 0) {
          plVar12 = *(long **)(param_1 + 8);
          if (plVar12 == (long *)0x0) {
                    /* try { // try from 006f06a4 to 006f06ab has its CatchHandler @ 006f229c */
            puVar13 = (undefined8 *)
                      FUN_0068bfbc(*(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x18),lVar8,
                                   local_168[0]);
          }
          else {
            puVar13 = (undefined8 *)(**(code **)(*plVar12 + 0x18))(plVar12,lVar8);
          }
LAB_006f06ac:
          if (puVar13 == (undefined8 *)0x0) goto LAB_006f0e80;
          goto LAB_006f0dd4;
        }
                    /* try { // try from 006f056c to 006f0583 has its CatchHandler @ 006f229c */
        lVar14 = FUN_0068d580(lVar8,local_168[0]);
        if (lVar14 == 0) {
          puVar13 = (undefined8 *)FUN_0068c9d8(lVar8,local_168[0]);
          goto LAB_006f06ac;
        }
      }
LAB_006f1684:
      puVar10 = (undefined1 *)strlen(":");
      if ((undefined1 *)0xfffffffffffffff7 < puVar10) {
        if (*(long *)(lVar1 + 0x28) == local_78) {
                    /* try { // try from 006f1d9c to 006f1da3 has its CatchHandler @ 006f21cc */
                    /* WARNING: Subroutine does not return */
          FUN_002fb400(&local_b0);
        }
        goto LAB_006f22f4;
      }
      if (puVar10 < (undefined1 *)0x17) {
        pbVar21 = (byte *)((ulong)&local_b0 | 1);
        local_b0 = (undefined8 *)CONCAT71(local_b0._1_7_,(char)((int)puVar10 << 1));
        if (puVar10 != (undefined1 *)0x0) goto LAB_006f16ec;
      }
      else {
        uVar9 = ((ulong)puVar10 & 0xfffffffffffffff8) + 8;
        if (((ulong)puVar10 | 7) != 0x17) {
          uVar9 = (ulong)puVar10 | 7;
        }
                    /* try { // try from 006f16d4 to 006f16db has its CatchHandler @ 006f21cc */
        pbVar21 = (byte *)FUN_00759c3c(uVar9 + 1);
        local_b0 = (undefined8 *)(uVar9 + 1 | 1);
        puStack_a8 = puVar10;
        local_a0 = pbVar21;
LAB_006f16ec:
        memcpy(pbVar21,&DAT_001d9efd,(size_t)puVar10);
      }
      pbVar21[(long)puVar10] = 0;
                    /* try { // try from 006f1704 to 006f170f has its CatchHandler @ 006f21b4 */
      uVar9 = FUN_006f2894(param_1,&local_b0);
      if (((ulong)local_b0 & 1) != 0) {
        free(local_a0);
      }
      if ((uVar9 & 1) != 0) {
                    /* try { // try from 006f1728 to 006f172f has its CatchHandler @ 006f22c4 */
        FUN_006f2730(param_1);
        puVar10 = (undefined1 *)strlen("{");
        if ((undefined1 *)0xfffffffffffffff7 < puVar10) {
          if (*(long *)(lVar1 + 0x28) == local_78) {
                    /* try { // try from 006f1e1c to 006f1e23 has its CatchHandler @ 006f219c */
                    /* WARNING: Subroutine does not return */
            FUN_002fb400(&local_b0);
          }
          goto LAB_006f22f4;
        }
        if (puVar10 < (undefined1 *)0x17) {
          pbVar21 = (byte *)((ulong)&local_b0 | 1);
          local_b0 = (undefined8 *)CONCAT71(local_b0._1_7_,(char)((int)puVar10 << 1));
          if (puVar10 != (undefined1 *)0x0) goto LAB_006f1798;
        }
        else {
          uVar9 = ((ulong)puVar10 & 0xfffffffffffffff8) + 8;
          if (((ulong)puVar10 | 7) != 0x17) {
            uVar9 = (ulong)puVar10 | 7;
          }
                    /* try { // try from 006f1780 to 006f1787 has its CatchHandler @ 006f219c */
          pbVar21 = (byte *)FUN_00759c3c(uVar9 + 1);
          local_b0 = (undefined8 *)(uVar9 + 1 | 1);
          puStack_a8 = puVar10;
          local_a0 = pbVar21;
LAB_006f1798:
          memcpy(pbVar21,&DAT_001f8d3e,(size_t)puVar10);
        }
        puVar13 = local_b0;
        pbVar21[(long)puVar10] = 0;
        bVar23 = *(byte *)(param_1 + 0x30);
        puVar18 = (undefined1 *)(ulong)(bVar23 >> 1);
        puVar10 = puVar18;
        if ((bVar23 & 1) != 0) {
          puVar10 = *(undefined1 **)(param_1 + 0x38);
        }
        puVar20 = (undefined1 *)((ulong)local_b0 >> 1 & 0x7f);
        if (((ulong)local_b0 & 1) != 0) {
          puVar20 = puStack_a8;
        }
        if (puVar10 == puVar20) {
          pbVar21 = local_a0;
          if (((ulong)local_b0 & 1) == 0) {
            pbVar21 = (byte *)((long)&local_b0 + 1);
          }
          if ((bVar23 & 1) == 0) {
            if (1 < bVar23) {
              pbVar16 = (byte *)(param_1 + 0x31);
              do {
                if (*pbVar16 != *pbVar21) goto LAB_006f193c;
                puVar18 = puVar18 + -1;
                pbVar21 = pbVar21 + 1;
                pbVar16 = pbVar16 + 1;
              } while (puVar18 != (undefined1 *)0x0);
            }
          }
          else {
            iVar6 = memcmp(*(void **)(param_1 + 0x40),pbVar21,
                           (size_t)*(undefined1 **)(param_1 + 0x38));
            if (iVar6 != 0) goto LAB_006f193c;
          }
          uVar7 = 0;
        }
        else {
LAB_006f193c:
                    /* try { // try from 006f193c to 006f194b has its CatchHandler @ 006f20f4 */
          FUN_002fd2b0(&local_e0,&DAT_001d348c);
          uVar7 = FUN_006f3038(param_1,&local_e0);
          uVar7 = uVar7 ^ 1;
          if (((ulong)local_e0 & 1) != 0) {
            free(local_d0);
          }
        }
        if (((ulong)puVar13 & 1) != 0) {
          free(local_a0);
        }
        if ((uVar7 & 1) != 0) {
                    /* try { // try from 006f196c to 006f1997 has its CatchHandler @ 006f22c4 */
          uVar7 = FUN_006f30e8(param_1);
          goto joined_r0x006f1ac0;
        }
      }
      uVar7 = FUN_006f3ee8(param_1);
    }
  }
  else {
    puVar10 = (undefined1 *)strlen("[");
    if ((undefined1 *)0xfffffffffffffff7 < puVar10) {
      if (*(long *)(lVar1 + 0x28) == local_78) {
                    /* try { // try from 006f1d18 to 006f1d23 has its CatchHandler @ 006f22bc */
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(&local_b0);
      }
      goto LAB_006f22f4;
    }
    if (puVar10 < (undefined1 *)0x17) {
      pbVar21 = (byte *)((ulong)&local_b0 | 1);
      local_b0 = (undefined8 *)CONCAT71(local_b0._1_7_,(char)((int)puVar10 << 1));
      if (puVar10 != (undefined1 *)0x0) goto LAB_006efc20;
    }
    else {
      uVar9 = ((ulong)puVar10 & 0xfffffffffffffff8) + 8;
      if (((ulong)puVar10 | 7) != 0x17) {
        uVar9 = (ulong)puVar10 | 7;
      }
                    /* try { // try from 006efc04 to 006efc0b has its CatchHandler @ 006f22bc */
      pbVar21 = (byte *)FUN_00759c3c(uVar9 + 1);
      local_b0 = (undefined8 *)(uVar9 + 1 | 1);
      puStack_a8 = puVar10;
      local_a0 = pbVar21;
LAB_006efc20:
      memcpy(pbVar21,&DAT_001cf3bb,(size_t)puVar10);
    }
    puVar13 = local_b0;
    pbVar21[(long)puVar10] = 0;
    bVar3 = false;
    bVar23 = *(byte *)(param_1 + 0x30);
    puVar18 = (undefined1 *)(ulong)(bVar23 >> 1);
    puVar10 = puVar18;
    if ((bVar23 & 1) != 0) {
      puVar10 = *(undefined1 **)(param_1 + 0x38);
    }
    puVar20 = (undefined1 *)((ulong)local_b0 >> 1 & 0x7f);
    if (((ulong)local_b0 & 1) != 0) {
      puVar20 = puStack_a8;
    }
    if (puVar10 == puVar20) {
      pbVar21 = local_a0;
      if (((ulong)local_b0 & 1) == 0) {
        pbVar21 = (byte *)((long)&local_b0 + 1);
      }
      if ((bVar23 & 1) == 0) {
        if (1 < bVar23) {
          pbVar16 = (byte *)(param_1 + 0x31);
          do {
            if (*pbVar16 != *pbVar21) goto LAB_006efcb8;
            puVar18 = puVar18 + -1;
            pbVar21 = pbVar21 + 1;
            pbVar16 = pbVar16 + 1;
          } while (puVar18 != (undefined1 *)0x0);
        }
      }
      else {
        iVar6 = memcmp(*(void **)(param_1 + 0x40),pbVar21,(size_t)*(undefined1 **)(param_1 + 0x38));
        if (iVar6 != 0) {
LAB_006efcb8:
          bVar3 = false;
          goto joined_r0x006efcd0;
        }
      }
                    /* try { // try from 006efcc4 to 006efccb has its CatchHandler @ 006f21f4 */
      FUN_006dd460(param_1 + 0x28);
      bVar3 = true;
    }
joined_r0x006efcd0:
    if (((ulong)puVar13 & 1) != 0) {
      free(local_a0);
    }
    if (!bVar3) goto LAB_006efd8c;
    local_120 = (undefined1  [8])0x0;
    ppuStack_118 = (undefined8 **)0x0;
    local_110 = (undefined8 *)0x0;
    local_138 = (undefined1  [8])0x0;
    local_130 = (undefined1 *)0x0;
    local_128 = (undefined8 *)0x0;
                    /* try { // try from 006efcf0 to 006efcff has its CatchHandler @ 006f2224 */
    uVar9 = FUN_006f23bc(param_1,local_120,local_138);
    if ((uVar9 & 1) == 0) {
      uVar7 = 0;
    }
    else {
      puStack_a8 = local_130;
      local_b0 = local_128;
      if (((ulong)local_138 & 1) == 0) {
        puStack_a8 = (undefined1 *)((ulong)local_138 >> 1 & 0x7f);
        local_b0 = (undefined8 *)(local_138 + 1);
      }
      ppuStack_d8 = ppuStack_118;
      local_e0 = local_110;
      if (((ulong)local_120 & 1) == 0) {
        ppuStack_d8 = (undefined8 **)((ulong)local_120 >> 1 & 0x7f);
        local_e0 = (undefined8 *)(local_120 + 1);
      }
                    /* try { // try from 006efd44 to 006efd53 has its CatchHandler @ 006f21f0 */
      FUN_00678590(&local_150,&local_b0,&local_e0);
      puVar10 = (undefined1 *)strlen("]");
      if ((undefined1 *)0xfffffffffffffff7 < puVar10) {
        if (*(long *)(lVar1 + 0x28) == local_78) {
                    /* try { // try from 006f1d50 to 006f1d57 has its CatchHandler @ 006f21fc */
                    /* WARNING: Subroutine does not return */
          FUN_002fb400(&local_b0);
        }
        goto LAB_006f22f4;
      }
      if (puVar10 < (undefined1 *)0x17) {
        pbVar21 = (byte *)((ulong)&local_b0 | 1);
        local_b0 = (undefined8 *)CONCAT71(local_b0._1_7_,(char)((int)puVar10 << 1));
        if (puVar10 != (undefined1 *)0x0) goto LAB_006f00a0;
      }
      else {
        uVar9 = ((ulong)puVar10 & 0xfffffffffffffff8) + 8;
        if (((ulong)puVar10 | 7) != 0x17) {
          uVar9 = (ulong)puVar10 | 7;
        }
                    /* try { // try from 006f0088 to 006f008f has its CatchHandler @ 006f21fc */
        pbVar21 = (byte *)FUN_00759c3c(uVar9 + 1);
        local_b0 = (undefined8 *)(uVar9 + 1 | 1);
        puStack_a8 = puVar10;
        local_a0 = pbVar21;
LAB_006f00a0:
        memcpy(pbVar21,&DAT_001e1051,(size_t)puVar10);
      }
      pbVar21[(long)puVar10] = 0;
                    /* try { // try from 006f00b8 to 006f00df has its CatchHandler @ 006f223c */
      FUN_006dc0ac(param_1 + 0x28,1);
      uVar9 = FUN_006f54d4(param_1,&local_b0);
      FUN_006dc0ac(param_1 + 0x28,0);
      if (((ulong)local_b0 & 1) != 0) {
        free(local_a0);
      }
      if ((uVar9 & 1) == 0) {
        uVar7 = 0;
      }
      else {
                    /* try { // try from 006f00f4 to 006f00fb has its CatchHandler @ 006f21c0 */
        FUN_006f2730(param_1);
        puVar10 = (undefined1 *)strlen(":");
        if ((undefined1 *)0xfffffffffffffff7 < puVar10) {
          if (*(long *)(lVar1 + 0x28) == local_78) {
                    /* try { // try from 006f1dec to 006f1df3 has its CatchHandler @ 006f21bc */
                    /* WARNING: Subroutine does not return */
            FUN_002fb400(&local_b0);
          }
          goto LAB_006f22f4;
        }
        if (puVar10 < (undefined1 *)0x17) {
          pbVar21 = (byte *)((ulong)&local_b0 | 1);
          local_b0 = (undefined8 *)CONCAT71(local_b0._1_7_,(char)((int)puVar10 << 1));
          if (puVar10 != (undefined1 *)0x0) goto LAB_006f0234;
        }
        else {
          uVar9 = ((ulong)puVar10 & 0xfffffffffffffff8) + 8;
          if (((ulong)puVar10 | 7) != 0x17) {
            uVar9 = (ulong)puVar10 | 7;
          }
                    /* try { // try from 006f021c to 006f0223 has its CatchHandler @ 006f21bc */
          pbVar21 = (byte *)FUN_00759c3c(uVar9 + 1);
          local_b0 = (undefined8 *)(uVar9 + 1 | 1);
          puStack_a8 = puVar10;
          local_a0 = pbVar21;
LAB_006f0234:
          memcpy(pbVar21,&DAT_001d9efd,(size_t)puVar10);
        }
        pbVar21[(long)puVar10] = 0;
                    /* try { // try from 006f024c to 006f0257 has its CatchHandler @ 006f21ac */
        uVar9 = FUN_006f2894(param_1,&local_b0);
        if (((ulong)local_b0 & 1) != 0) {
          free(local_a0);
        }
        if ((uVar9 & 1) != 0) {
                    /* try { // try from 006f0270 to 006f0277 has its CatchHandler @ 006f21c0 */
          FUN_006f2730(param_1);
        }
        plVar12 = *(long **)(param_1 + 8);
        local_b0 = (undefined8 *)0x0;
        puStack_a8 = (undefined1 *)0x0;
        local_a0 = (byte *)0x0;
        if (plVar12 == (long *)0x0) {
                    /* try { // try from 006f0404 to 006f0477 has its CatchHandler @ 006f21d0 */
          lVar8 = FUN_006eade4(param_2,local_138,local_120);
        }
        else {
                    /* try { // try from 006f0290 to 006f02a3 has its CatchHandler @ 006f21d0 */
          lVar8 = (**(code **)(*plVar12 + 0x20))(plVar12,param_2,local_138,local_120);
        }
        if (lVar8 == 0) {
                    /* try { // try from 006f04ac to 006f04bf has its CatchHandler @ 006f20ec */
          FUN_00714534(local_168,"Could not find type \"",&local_150);
                    /* try { // try from 006f04c0 to 006f04cf has its CatchHandler @ 006f20d0 */
          puVar13 = (undefined8 *)FUN_00713bdc(local_168,"\" stored in google.protobuf.Any.");
          local_d0 = (undefined8 *)puVar13[2];
          ppuStack_d8 = (undefined8 **)puVar13[1];
          local_e0 = (undefined8 *)*puVar13;
          puVar13[1] = 0;
          puVar13[2] = 0;
          *puVar13 = 0;
                    /* try { // try from 006f04ec to 006f04f7 has its CatchHandler @ 006f20b4 */
          FUN_006eb56c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                       &local_e0);
          if (((ulong)local_e0 & 1) != 0) {
            free(local_d0);
          }
          if (((byte)local_168[0] & 1) != 0) {
LAB_006f0514:
            free(local_158);
          }
LAB_006f0518:
          uVar7 = 0;
        }
        else {
          uVar9 = FUN_006f295c(param_1,lVar8,&local_b0);
          if ((uVar9 & 1) == 0) goto LAB_006f0518;
          if ((*(int *)(param_1 + 0xe0) == 1) &&
             (((((*(byte *)(local_100 + 1) ^ 0xff) & 0x60) != 0 &&
               (uVar9 = FUN_0067b838(extraout_x1,param_2), (uVar9 & 1) != 0)) ||
              ((((*(byte *)(local_108 + 1) ^ 0xff) & 0x60) != 0 &&
               (uVar9 = FUN_0067b838(extraout_x1,param_2), (uVar9 & 1) != 0)))))) {
                    /* try { // try from 006f047c to 006f048b has its CatchHandler @ 006f1e40 */
            FUN_002fd2b0(&local_e0,"Non-repeated Any specified multiple times.");
                    /* try { // try from 006f0490 to 006f049b has its CatchHandler @ 006f1e24 */
            FUN_006eb56c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                         &local_e0);
            local_158 = local_d0;
            if (((ulong)local_e0 & 1) != 0) goto LAB_006f0514;
            goto LAB_006f0518;
          }
          uStack_178 = uStack_148;
          local_180 = local_150;
          local_150 = (undefined8 *)0x0;
          uStack_148 = 0;
          local_170 = local_140;
          local_140 = (void *)0x0;
                    /* try { // try from 006f0630 to 006f063f has its CatchHandler @ 006f1e74 */
          FUN_00680a64(extraout_x1,param_2,local_100,&local_180);
          if (((ulong)local_180 & 1) != 0) {
            free(local_170);
          }
          puStack_198 = puStack_a8;
          local_1a0 = local_b0;
          local_b0 = (undefined8 *)0x0;
          puStack_a8 = (undefined1 *)0x0;
          local_190 = local_a0;
          local_a0 = (byte *)0x0;
                    /* try { // try from 006f066c to 006f067b has its CatchHandler @ 006f1e58 */
          FUN_00680a64(extraout_x1,param_2,local_108,&local_1a0);
          if (((ulong)local_1a0 & 1) != 0) {
            free(local_190);
          }
          uVar7 = 1;
        }
        if (((ulong)local_b0 & 1) != 0) {
          free(local_a0);
        }
      }
      if (((ulong)local_150 & 1) != 0) {
        free(local_140);
      }
    }
    if (((ulong)local_138 & 1) != 0) {
      free(local_128);
    }
    if (((ulong)local_120 & 1) != 0) {
      free(local_110);
    }
  }
joined_r0x006f1ac0:
  if (((ulong)local_f8 & 1) != 0) {
    free(local_e8);
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return uVar7 & 1;
  }
LAB_006f22f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006f22f8  FUN_006f22f8 =====

undefined8 FUN_006f22f8(long param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *__s2;
  
  bVar3 = *(byte *)(param_1 + 0x30);
  bVar4 = *param_2;
  uVar6 = (ulong)(bVar3 >> 1);
  sVar1 = uVar6;
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 0x38);
  }
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 8);
  }
  if (sVar1 == sVar2) {
    __s2 = *(byte **)(param_2 + 0x10);
    if ((bVar4 & 1) == 0) {
      __s2 = param_2 + 1;
    }
    if ((bVar3 & 1) == 0) {
      if (1 < bVar3) {
        pbVar7 = (byte *)(param_1 + 0x31);
        do {
          if (*pbVar7 != *__s2) {
            return 0;
          }
          uVar6 = uVar6 - 1;
          __s2 = __s2 + 1;
          pbVar7 = pbVar7 + 1;
        } while (uVar6 != 0);
      }
    }
    else {
      iVar5 = memcmp(*(void **)(param_1 + 0x40),__s2,*(size_t *)(param_1 + 0x38));
      if (iVar5 != 0) {
        return 0;
      }
    }
    FUN_006dd460(param_1 + 0x28);
    return 1;
  }
  return 0;
}


// ===== 006f23bc  FUN_006f23bc =====

uint FUN_006f23bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  size_t sVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  void *pvVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  size_t sVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  byte local_98 [8];
  ulong local_90;
  void *local_88;
  ulong local_80;
  size_t local_78;
  char *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar9 = FUN_006f5784(param_1,param_3);
  if ((uVar9 & 1) != 0) {
    pcVar13 = (char *)((ulong)&local_80 | 1);
    do {
      sVar10 = strlen(".");
      if (0xfffffffffffffff7 < sVar10) {
LAB_006f26ac:
        if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_002fb400(&local_80);
        }
        goto LAB_006f272c;
      }
      if (sVar10 < 0x17) {
        local_80 = CONCAT71(local_80._1_7_,(char)((int)sVar10 << 1));
        pcVar11 = pcVar13;
        if (sVar10 != 0) goto LAB_006f2488;
      }
      else {
        uVar9 = (sVar10 & 0xfffffffffffffff8) + 8;
        if ((sVar10 | 7) != 0x17) {
          uVar9 = sVar10 | 7;
        }
        pcVar11 = (char *)FUN_00759c3c(uVar9 + 1);
        local_80 = uVar9 + 1 | 1;
        local_78 = sVar10;
        local_70 = pcVar11;
LAB_006f2488:
        memcpy(pcVar11,&DAT_001c773b,sVar10);
      }
      uVar2 = local_80;
      pcVar11[sVar10] = '\0';
      bVar6 = false;
      bVar3 = *(byte *)(param_1 + 0x30);
      uVar9 = (ulong)(bVar3 >> 1);
      sVar10 = uVar9;
      if ((bVar3 & 1) != 0) {
        sVar10 = *(size_t *)(param_1 + 0x38);
      }
      sVar1 = local_80 >> 1 & 0x7f;
      if ((local_80 & 1) != 0) {
        sVar1 = local_78;
      }
      if (sVar10 == sVar1) {
        pcVar11 = pcVar13;
        if ((local_80 & 1) != 0) {
          pcVar11 = local_70;
        }
        if ((bVar3 & 1) == 0) {
          pcVar12 = (char *)(param_1 + 0x31);
          if (1 < bVar3) {
            do {
              if (*pcVar12 != *pcVar11) goto LAB_006f2518;
              uVar9 = uVar9 - 1;
              pcVar11 = pcVar11 + 1;
              pcVar12 = pcVar12 + 1;
            } while (uVar9 != 0);
          }
        }
        else {
          iVar7 = memcmp(*(void **)(param_1 + 0x40),pcVar11,*(size_t *)(param_1 + 0x38));
          if (iVar7 != 0) {
LAB_006f2518:
            bVar6 = false;
            goto joined_r0x006f2530;
          }
        }
                    /* try { // try from 006f2524 to 006f252b has its CatchHandler @ 006f26d4 */
        FUN_006dd460(param_1 + 0x28);
        bVar6 = true;
      }
joined_r0x006f2530:
      if ((uVar2 & 1) != 0) {
        free(local_70);
      }
      if (!bVar6) {
        sVar10 = strlen("/");
        if (0xfffffffffffffff7 < sVar10) goto LAB_006f26ac;
        if (sVar10 < 0x17) {
          pcVar13 = (char *)((ulong)&local_80 | 1);
          local_80 = CONCAT71(local_80._1_7_,(char)((int)sVar10 << 1));
          if (sVar10 != 0) goto LAB_006f2618;
        }
        else {
          uVar9 = (sVar10 & 0xfffffffffffffff8) + 8;
          if ((sVar10 | 7) != 0x17) {
            uVar9 = sVar10 | 7;
          }
          pcVar13 = (char *)FUN_00759c3c(uVar9 + 1);
          local_80 = uVar9 + 1 | 1;
          local_78 = sVar10;
          local_70 = pcVar13;
LAB_006f2618:
          memcpy(pcVar13,&DAT_001c55aa,sVar10);
        }
        pcVar13[sVar10] = '\0';
                    /* try { // try from 006f2630 to 006f263b has its CatchHandler @ 006f26c4 */
        uVar9 = FUN_006f54d4(param_1,&local_80);
        if ((local_80 & 1) != 0) {
          free(local_70);
        }
        if ((uVar9 & 1) != 0) {
          FUN_00713bdc(param_3,&DAT_001c55aa);
          uVar8 = FUN_006f2c1c(param_1,param_2);
          goto LAB_006f2678;
        }
        break;
      }
      local_80 = 0;
      local_78 = 0;
      local_70 = (char *)0x0;
                    /* try { // try from 006f2548 to 006f2553 has its CatchHandler @ 006f2700 */
      uVar9 = FUN_006f5784(param_1,&local_80);
      if ((uVar9 & 1) != 0) {
                    /* try { // try from 006f255c to 006f256b has its CatchHandler @ 006f26e4 */
        FUN_00714534(local_98,&DAT_001c773b,&local_80);
        uVar2 = (ulong)(local_98[0] >> 1);
        pvVar5 = (void *)((ulong)local_98 | 1);
        if ((local_98[0] & 1) != 0) {
          uVar2 = local_90;
          pvVar5 = local_88;
        }
                    /* try { // try from 006f2584 to 006f258b has its CatchHandler @ 006f26e8 */
        FUN_0071302c(param_3,pvVar5,uVar2);
        if ((local_98[0] & 1) != 0) {
          free(local_88);
        }
      }
      if ((local_80 & 1) != 0) {
        free(local_70);
      }
    } while ((uVar9 & 1) != 0);
  }
  uVar8 = 0;
LAB_006f2678:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return uVar8 & 1;
  }
LAB_006f272c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006f2730  FUN_006f2730 =====

void FUN_006f2730(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  int iVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  char *__s2;
  char *pcVar8;
  ulong uVar9;
  byte local_c0;
  char acStack_bf [7];
  size_t local_b8;
  char *local_b0;
  undefined *local_a8;
  size_t local_a0;
  undefined *local_78;
  size_t local_70;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  iVar3 = *(int *)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0xf4) = 0;
  if (iVar3 == 7) {
    local_78 = &DAT_001bc0af;
    local_70 = strlen(" ");
    local_a8 = &DAT_002117e4;
    local_a0 = strlen("\t ");
    FUN_00678590(&local_c0,&local_78,&local_a8);
    bVar4 = *(byte *)(param_1 + 0x30);
    uVar9 = (ulong)(bVar4 >> 1);
    sVar1 = uVar9;
    if ((bVar4 & 1) != 0) {
      sVar1 = *(size_t *)(param_1 + 0x38);
    }
    sVar2 = (ulong)(local_c0 >> 1);
    if ((local_c0 & 1) != 0) {
      sVar2 = local_b8;
    }
    if (sVar1 == sVar2) {
      __s2 = local_b0;
      if ((local_c0 & 1) == 0) {
        __s2 = acStack_bf;
      }
      if ((bVar4 & 1) == 0) {
        if (bVar4 < 2) {
          bVar6 = true;
        }
        else {
          pcVar8 = (char *)(param_1 + 0x31);
          do {
            uVar9 = uVar9 - 1;
            bVar6 = *pcVar8 == *__s2;
            if (!bVar6) break;
            __s2 = __s2 + 1;
            pcVar8 = pcVar8 + 1;
          } while (uVar9 != 0);
        }
      }
      else {
        iVar7 = memcmp(*(void **)(param_1 + 0x40),__s2,*(size_t *)(param_1 + 0x38));
        bVar6 = iVar7 == 0;
      }
    }
    else {
      bVar6 = false;
    }
    if ((local_c0 & 1) != 0) {
      free(local_b0);
    }
    if (bVar6) {
      *(undefined1 *)(param_1 + 0xf4) = 1;
    }
    FUN_006dd460((int *)(param_1 + 0x28));
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3 == 7);
  }
  return;
}


// ===== 006f2894  FUN_006f2894 =====

undefined4 FUN_006f2894(long param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *__s2;
  undefined4 uVar8;
  
  FUN_006dc0ac(param_1 + 0x28,1);
  bVar3 = *(byte *)(param_1 + 0x30);
  bVar4 = *param_2;
  uVar6 = (ulong)(bVar3 >> 1);
  sVar1 = uVar6;
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 0x38);
  }
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 8);
  }
  if (sVar1 == sVar2) {
    __s2 = *(byte **)(param_2 + 0x10);
    if ((bVar4 & 1) == 0) {
      __s2 = param_2 + 1;
    }
    if ((bVar3 & 1) == 0) {
      if (1 < bVar3) {
        pbVar7 = (byte *)(param_1 + 0x31);
        do {
          if (*pbVar7 != *__s2) goto LAB_006f292c;
          uVar6 = uVar6 - 1;
          __s2 = __s2 + 1;
          pbVar7 = pbVar7 + 1;
        } while (uVar6 != 0);
      }
    }
    else {
      iVar5 = memcmp(*(void **)(param_1 + 0x40),__s2,*(size_t *)(param_1 + 0x38));
      if (iVar5 != 0) goto LAB_006f292c;
    }
    FUN_006dd460(param_1 + 0x28);
    uVar8 = 1;
  }
  else {
LAB_006f292c:
    uVar8 = 0;
  }
  FUN_006dc0ac(param_1 + 0x28,0);
  return uVar8;
}


// ===== 006f295c  FUN_006f295c =====

undefined4 FUN_006f295c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined4 uVar5;
  byte local_128 [16];
  void *local_118;
  ulong local_110;
  ulong uStack_108;
  void *local_100;
  ulong local_f0;
  undefined8 uStack_e8;
  void *local_e0;
  ulong local_d8;
  undefined8 uStack_d0;
  void *local_c8;
  undefined1 auStack_c0 [104];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_006db6ec(auStack_c0);
                    /* try { // try from 006f2998 to 006f29a3 has its CatchHandler @ 006f2bfc */
  plVar2 = (long *)FUN_006db814(auStack_c0,param_2);
  if (plVar2 == (long *)0x0) {
    uVar5 = 0;
    goto LAB_006f2b0c;
  }
                    /* try { // try from 006f29b0 to 006f29b7 has its CatchHandler @ 006f2b90 */
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,0);
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = (void *)0x0;
                    /* try { // try from 006f29c4 to 006f2a03 has its CatchHandler @ 006f2b94 */
  uVar3 = FUN_006f5898(param_1,&local_d8);
  if ((uVar3 & 1) == 0) {
LAB_006f2ae4:
    uVar5 = 0;
  }
  else {
    if ((local_d8 & 1) == 0) {
      uStack_e8 = uStack_d0;
      local_f0 = local_d8;
      local_e0 = local_c8;
    }
    else {
      FUN_002fb36c(&local_f0,local_c8,uStack_d0);
    }
                    /* try { // try from 006f2a04 to 006f2a13 has its CatchHandler @ 006f2b78 */
    uVar3 = FUN_006f5b48(param_1,plVar2,&local_f0);
    if ((local_f0 & 1) != 0) {
      free(local_e0);
    }
    if ((uVar3 & 1) == 0) goto LAB_006f2ae4;
    if (*(char *)(param_1 + 0xe9) == '\0') {
      uVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
      if ((uVar3 & 1) == 0) {
                    /* try { // try from 006f2a78 to 006f2a8b has its CatchHandler @ 006f2b74 */
        FUN_00714534(local_128,"Value of type \"",*(long *)(param_2 + 8) + 0x18);
                    /* try { // try from 006f2a8c to 006f2a9b has its CatchHandler @ 006f2b5c */
        puVar4 = (ulong *)FUN_00713bdc(local_128,
                                       "\" stored in google.protobuf.Any has missing required fields"
                                      );
        local_100 = (void *)puVar4[2];
        uStack_108 = puVar4[1];
        local_110 = *puVar4;
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = 0;
                    /* try { // try from 006f2ab8 to 006f2ac3 has its CatchHandler @ 006f2b44 */
        FUN_006eb56c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                     &local_110);
        if ((local_110 & 1) != 0) {
          free(local_100);
        }
        if ((local_128[0] & 1) != 0) {
          free(local_118);
        }
        goto LAB_006f2ae4;
      }
      thunk_FUN_0066ec20(plVar2,param_3);
    }
    else {
                    /* try { // try from 006f2a34 to 006f2a63 has its CatchHandler @ 006f2b94 */
      FUN_0066ec20(plVar2,param_3);
    }
    uVar5 = 1;
  }
  if ((local_d8 & 1) != 0) {
    free(local_c8);
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
LAB_006f2b0c:
  FUN_006db720(auStack_c0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006f2c1c  FUN_006f2c1c =====

void FUN_006f2c1c(long param_1,undefined8 param_2)

{
  size_t sVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  size_t sVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  ulong local_80;
  size_t local_78;
  char *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar6 = FUN_006f5784();
  if ((uVar6 & 1) == 0) {
    sVar7 = 0;
  }
  else {
    pcVar11 = (char *)((ulong)&local_80 | 1);
    do {
      sVar7 = strlen(".");
      if (0xfffffffffffffff7 < sVar7) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_002fb400(&local_80);
        }
        goto LAB_006f2e78;
      }
      if (sVar7 < 0x17) {
        local_80 = CONCAT71(local_80._1_7_,(char)((int)sVar7 << 1));
        pcVar8 = pcVar11;
        if (sVar7 != 0) goto LAB_006f2cd4;
      }
      else {
        uVar6 = (sVar7 & 0xfffffffffffffff8) + 8;
        if ((sVar7 | 7) != 0x17) {
          uVar6 = sVar7 | 7;
        }
        pcVar8 = (char *)FUN_00759c3c(uVar6 + 1);
        local_80 = uVar6 + 1 | 1;
        local_78 = sVar7;
        local_70 = pcVar8;
LAB_006f2cd4:
        memcpy(pcVar8,&DAT_001c773b,sVar7);
      }
      uVar4 = local_80;
      pcVar8[sVar7] = '\0';
      uVar10 = 0;
      bVar2 = *(byte *)(param_1 + 0x30);
      uVar6 = (ulong)(bVar2 >> 1);
      sVar7 = uVar6;
      if ((bVar2 & 1) != 0) {
        sVar7 = *(size_t *)(param_1 + 0x38);
      }
      sVar1 = local_80 >> 1 & 0x7f;
      if ((local_80 & 1) != 0) {
        sVar1 = local_78;
      }
      if (sVar7 == sVar1) {
        pcVar8 = pcVar11;
        if ((local_80 & 1) != 0) {
          pcVar8 = local_70;
        }
        if ((bVar2 & 1) == 0) {
          pcVar9 = (char *)(param_1 + 0x31);
          if (1 < bVar2) {
            do {
              if (*pcVar9 != *pcVar8) goto LAB_006f2d64;
              uVar6 = uVar6 - 1;
              pcVar8 = pcVar8 + 1;
              pcVar9 = pcVar9 + 1;
            } while (uVar6 != 0);
          }
        }
        else {
          iVar5 = memcmp(*(void **)(param_1 + 0x40),pcVar8,*(size_t *)(param_1 + 0x38));
          if (iVar5 != 0) {
LAB_006f2d64:
            uVar10 = 0;
            goto joined_r0x006f2d7c;
          }
        }
                    /* try { // try from 006f2d70 to 006f2d77 has its CatchHandler @ 006f2e3c */
        FUN_006dd460(param_1 + 0x28);
        uVar10 = 1;
      }
joined_r0x006f2d7c:
      if ((uVar4 & 1) != 0) {
        free(local_70);
      }
      if (uVar10 == 0) break;
      local_80 = 0;
      local_78 = 0;
      local_70 = (char *)0x0;
                    /* try { // try from 006f2d94 to 006f2dd3 has its CatchHandler @ 006f2e4c */
      uVar6 = FUN_006f5784(param_1,&local_80);
      if ((uVar6 & 1) != 0) {
        FUN_00713bdc(param_2,&DAT_001c773b);
        sVar7 = local_80 >> 1 & 0x7f;
        pcVar8 = pcVar11;
        if ((local_80 & 1) != 0) {
          sVar7 = local_78;
          pcVar8 = local_70;
        }
        FUN_0071302c(param_2,pcVar8,sVar7);
      }
      if ((local_80 & 1) != 0) {
        free(local_70);
      }
    } while ((uVar6 & 1) != 0);
    sVar7 = (size_t)(uVar10 ^ 1);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
LAB_006f2e78:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(sVar7);
}


// ===== 006f2e7c  FUN_006f2e7c =====

bool FUN_006f2e7c(long param_1,byte *param_2)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  size_t __n;
  void *__s1;
  ulong uVar12;
  undefined8 *puVar13;
  
  uVar2 = *(uint *)(param_1 + 0x84);
  uVar12 = (ulong)uVar2;
  if ((int)uVar2 < 1) {
    bVar4 = false;
  }
  else {
    bVar3 = *param_2;
    __n = *(size_t *)(param_2 + 8);
    puVar13 = *(undefined8 **)(param_1 + 0x60);
    uVar6 = (ulong)(bVar3 >> 1);
    uVar1 = uVar6;
    if ((bVar3 & 1) != 0) {
      uVar1 = __n;
    }
    if ((bVar3 & 1) == 0) {
      if (bVar3 < 2) {
        bVar3 = *(byte *)*puVar13;
        uVar7 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar7 = *(ulong *)((byte *)*puVar13 + 8);
        }
        if (uVar7 == uVar6) {
          bVar4 = true;
        }
        else {
          uVar6 = 0;
          do {
            uVar7 = uVar6;
            if (uVar2 - 1 == uVar7) break;
            bVar3 = *(byte *)puVar13[uVar7 + 1];
            uVar11 = (ulong)(bVar3 >> 1);
            if ((bVar3 & 1) != 0) {
              uVar11 = *(ulong *)((byte *)puVar13[uVar7 + 1] + 8);
            }
            uVar6 = uVar7 + 1;
          } while (uVar1 != uVar11);
          bVar4 = uVar7 + 1 < uVar12;
        }
      }
      else {
        uVar7 = 0;
        bVar4 = true;
        do {
          pbVar8 = (byte *)puVar13[uVar7];
          bVar3 = *pbVar8;
          uVar11 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            uVar11 = *(ulong *)(pbVar8 + 8);
          }
          if (uVar1 == uVar11) {
            pbVar10 = *(byte **)(pbVar8 + 0x10);
            pbVar9 = param_2 + 1;
            uVar11 = uVar6;
            if ((bVar3 & 1) == 0) {
              pbVar10 = pbVar8 + 1;
            }
            while (*pbVar9 == *pbVar10) {
              uVar11 = uVar11 - 1;
              pbVar10 = pbVar10 + 1;
              pbVar9 = pbVar9 + 1;
              if (uVar11 == 0) {
                return bVar4;
              }
            }
          }
          uVar7 = uVar7 + 1;
          bVar4 = uVar7 < uVar12;
        } while (uVar7 != uVar12);
      }
    }
    else {
      __s1 = *(void **)(param_2 + 0x10);
      uVar6 = 0;
      bVar4 = true;
      do {
        pbVar8 = (byte *)puVar13[uVar6];
        bVar3 = *pbVar8;
        uVar7 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar7 = *(ulong *)(pbVar8 + 8);
        }
        if (uVar1 == uVar7) {
          pbVar10 = *(byte **)(pbVar8 + 0x10);
          if ((bVar3 & 1) == 0) {
            pbVar10 = pbVar8 + 1;
          }
          iVar5 = memcmp(__s1,pbVar10,__n);
          if (iVar5 == 0) {
            return bVar4;
          }
        }
        uVar6 = uVar6 + 1;
        bVar4 = uVar6 < uVar12;
      } while (uVar12 != uVar6);
    }
  }
  return bVar4;
}


// ===== 006f3038  FUN_006f3038 =====

bool FUN_006f3038(long param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *__s2;
  
  bVar3 = *(byte *)(param_1 + 0x30);
  bVar4 = *param_2;
  uVar8 = (ulong)(bVar3 >> 1);
  sVar1 = uVar8;
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 0x38);
  }
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 8);
  }
  if (sVar1 == sVar2) {
    __s2 = *(byte **)(param_2 + 0x10);
    if ((bVar4 & 1) == 0) {
      __s2 = param_2 + 1;
    }
    if ((bVar3 & 1) == 0) {
      if (bVar3 < 2) {
        return true;
      }
      pbVar7 = (byte *)(param_1 + 0x31);
      do {
        uVar8 = uVar8 - 1;
        bVar5 = *pbVar7 == *__s2;
        if (*pbVar7 != *__s2) {
          return bVar5;
        }
        __s2 = __s2 + 1;
        pbVar7 = pbVar7 + 1;
      } while (uVar8 != 0);
      return bVar5;
    }
    iVar6 = memcmp(*(void **)(param_1 + 0x40),__s2,*(size_t *)(param_1 + 0x38));
    return iVar6 == 0;
  }
  return false;
}


// ===== 006f30e8  FUN_006f30e8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006f30e8(long param_1)

{
  size_t sVar1;
  long lVar2;
  char *pcVar3;
  byte **ppbVar4;
  ulong uVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  size_t sVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  byte *pbVar17;
  ulong *puVar18;
  byte *pbVar19;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  undefined8 uVar20;
  byte bVar27;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  undefined8 uVar28;
  byte bVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  byte local_118 [16];
  byte *local_108;
  undefined *local_100;
  size_t local_f8;
  byte **local_d0;
  size_t local_c8;
  byte *local_c0 [4];
  undefined8 local_a0;
  ulong uStack_98;
  byte *local_90;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  iVar7 = *(int *)(param_1 + 0xf0);
  *(int *)(param_1 + 0xf0) = iVar7 + -1;
  if (iVar7 < 1) {
    local_a0 = "Message is too deep, the parser exceeded the configured recursion limit of ";
    uStack_98 = strlen("Message is too deep, the parser exceeded the configured recursion limit of "
                      );
    local_d0 = local_c0;
    lVar15 = FUN_006778a4(*(undefined4 *)(param_1 + 0xec),local_c0);
    local_c8 = lVar15 - (long)local_c0;
    local_100 = &DAT_001c773b;
    local_f8 = strlen(".");
    FUN_00678644(local_118,&local_a0,&local_d0,&local_100);
                    /* try { // try from 006f31b8 to 006f31c3 has its CatchHandler @ 006f3e7c */
    FUN_006eb56c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),local_118);
    if ((local_118[0] & 1) != 0) {
LAB_006f31d0:
      free(local_108);
    }
LAB_006f31d4:
    sVar10 = 0;
  }
  else {
    piVar16 = (int *)(param_1 + 0x28);
    if (*piVar16 == 5) {
      do {
        FUN_006dd460(piVar16);
      } while (*piVar16 == 5);
    }
    else {
      sVar10 = strlen("[");
      if (0xfffffffffffffff7 < sVar10) {
LAB_006f3dfc:
        if (*(long *)(lVar2 + 0x28) == local_70) {
LAB_006f3dd8:
                    /* WARNING: Subroutine does not return */
          FUN_002fb400(&local_a0);
        }
        goto LAB_006f3ee4;
      }
      if (sVar10 < 0x17) {
        pbVar17 = (byte *)((ulong)&local_a0 | 1);
        local_a0 = (char *)CONCAT71(local_a0._1_7_,(char)((int)sVar10 << 1));
        if (sVar10 != 0) goto LAB_006f3244;
      }
      else {
        uVar8 = (sVar10 & 0xfffffffffffffff8) + 8;
        if ((sVar10 | 7) != 0x17) {
          uVar8 = sVar10 | 7;
        }
        pbVar17 = (byte *)FUN_00759c3c(uVar8 + 1);
        local_a0 = (char *)(uVar8 + 1 | 1);
        uStack_98 = sVar10;
        local_90 = pbVar17;
LAB_006f3244:
        memcpy(pbVar17,&DAT_001cf3bb,sVar10);
      }
      pcVar3 = local_a0;
      pbVar17[sVar10] = 0;
      bVar6 = false;
      puVar18 = (ulong *)(param_1 + 0x30);
      bVar21 = *(byte *)puVar18;
      uVar11 = (ulong)(bVar21 >> 1);
      uVar8 = uVar11;
      if ((bVar21 & 1) != 0) {
        uVar8 = *(size_t *)(param_1 + 0x38);
      }
      uVar14 = (ulong)local_a0 >> 1 & 0x7f;
      if (((ulong)local_a0 & 1) != 0) {
        uVar14 = uStack_98;
      }
      if (uVar8 == uVar14) {
        pbVar17 = local_90;
        if (((ulong)local_a0 & 1) == 0) {
          pbVar17 = (byte *)((long)&local_a0 + 1);
        }
        if ((bVar21 & 1) == 0) {
          if (1 < bVar21) {
            pbVar12 = (byte *)(param_1 + 0x31);
            do {
              if (*pbVar12 != *pbVar17) goto LAB_006f32e0;
              uVar11 = uVar11 - 1;
              pbVar17 = pbVar17 + 1;
              pbVar12 = pbVar12 + 1;
            } while (uVar11 != 0);
          }
        }
        else {
          iVar7 = memcmp(*(void **)(param_1 + 0x40),pbVar17,*(size_t *)(param_1 + 0x38));
          if (iVar7 != 0) {
LAB_006f32e0:
            bVar6 = false;
            goto joined_r0x006f32f8;
          }
        }
                    /* try { // try from 006f32ec to 006f32f3 has its CatchHandler @ 006f3e68 */
        FUN_006dd460(piVar16);
        bVar6 = true;
      }
joined_r0x006f32f8:
      if (((ulong)pcVar3 & 1) != 0) {
        free(local_90);
      }
      if (bVar6) {
        pbVar19 = (byte *)((ulong)&local_a0 | 1);
        pbVar12 = (byte *)((ulong)&local_d0 | 1);
        pbVar17 = (byte *)(param_1 + 0x31);
        do {
          sVar10 = strlen("{");
          if (0xfffffffffffffff7 < sVar10) {
LAB_006f3dc4:
            if (*(long *)(lVar2 + 0x28) == local_70) goto LAB_006f3dd8;
            goto LAB_006f3ee4;
          }
          if (sVar10 < 0x17) {
            local_a0 = (char *)CONCAT71(local_a0._1_7_,(char)((int)sVar10 << 1));
            pbVar9 = pbVar19;
            if (sVar10 != 0) goto LAB_006f33a4;
          }
          else {
            uVar8 = (sVar10 & 0xfffffffffffffff8) + 8;
            if ((sVar10 | 7) != 0x17) {
              uVar8 = sVar10 | 7;
            }
            pbVar9 = (byte *)FUN_00759c3c(uVar8 + 1);
            local_a0 = (char *)(uVar8 + 1 | 1);
            uStack_98 = sVar10;
            local_90 = pbVar9;
LAB_006f33a4:
            memcpy(pbVar9,&DAT_001f8d3e,sVar10);
          }
          pcVar3 = local_a0;
          pbVar9[sVar10] = 0;
          bVar21 = *(byte *)(param_1 + 0x30);
          uVar11 = (ulong)(bVar21 >> 1);
          uVar8 = uVar11;
          if ((bVar21 & 1) != 0) {
            uVar8 = *(size_t *)(param_1 + 0x38);
          }
          uVar14 = (ulong)local_a0 >> 1 & 0x7f;
          if (((ulong)local_a0 & 1) != 0) {
            uVar14 = uStack_98;
          }
          if (uVar8 == uVar14) {
            pbVar9 = pbVar19;
            if (((ulong)local_a0 & 1) != 0) {
              pbVar9 = local_90;
            }
            if ((bVar21 & 1) == 0) {
              pbVar13 = pbVar17;
              if (1 < bVar21) {
                do {
                  if (*pbVar13 != *pbVar9) goto LAB_006f3430;
                  uVar11 = uVar11 - 1;
                  pbVar9 = pbVar9 + 1;
                  pbVar13 = pbVar13 + 1;
                } while (uVar11 != 0);
              }
            }
            else {
              iVar7 = memcmp(*(void **)(param_1 + 0x40),pbVar9,*(size_t *)(param_1 + 0x38));
              if (iVar7 != 0) goto LAB_006f3430;
            }
            bVar6 = false;
          }
          else {
LAB_006f3430:
            sVar10 = strlen("<");
            if (0xfffffffffffffff7 < sVar10) {
              if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 006f3df4 to 006f3dfb has its CatchHandler @ 006f3ea8 */
                    /* WARNING: Subroutine does not return */
                FUN_002fb400(&local_d0);
              }
              goto LAB_006f3ee4;
            }
            if (sVar10 < 0x17) {
              local_d0 = (byte **)CONCAT71(local_d0._1_7_,(char)((int)sVar10 << 1));
              pbVar9 = pbVar12;
              if (sVar10 != 0) goto LAB_006f3494;
            }
            else {
              uVar8 = (sVar10 & 0xfffffffffffffff8) + 8;
              if ((sVar10 | 7) != 0x17) {
                uVar8 = sVar10 | 7;
              }
                    /* try { // try from 006f347c to 006f3483 has its CatchHandler @ 006f3ea4 */
              pbVar9 = (byte *)FUN_00759c3c(uVar8 + 1);
              local_d0 = (byte **)(uVar8 + 1 | 1);
              local_c8 = sVar10;
              local_c0[0] = pbVar9;
LAB_006f3494:
              memcpy(pbVar9,&DAT_001d348c,sVar10);
            }
            ppbVar4 = local_d0;
            pbVar9[sVar10] = 0;
            bVar21 = *(byte *)(param_1 + 0x30);
            uVar8 = (ulong)(bVar21 >> 1);
            sVar10 = uVar8;
            if ((bVar21 & 1) != 0) {
              sVar10 = *(size_t *)(param_1 + 0x38);
            }
            sVar1 = (ulong)local_d0 >> 1 & 0x7f;
            if (((ulong)local_d0 & 1) != 0) {
              sVar1 = local_c8;
            }
            bVar6 = false;
            if (sVar10 == sVar1) {
              pbVar9 = pbVar12;
              if (((ulong)local_d0 & 1) != 0) {
                pbVar9 = local_c0[0];
              }
              if ((bVar21 & 1) != 0) {
                iVar7 = memcmp(*(void **)(param_1 + 0x40),pbVar9,*(size_t *)(param_1 + 0x38));
                bVar6 = iVar7 == 0;
                goto LAB_006f3520;
              }
              pbVar13 = pbVar17;
              if (bVar21 < 2) {
                bVar6 = true;
                goto LAB_006f3520;
              }
              do {
                uVar8 = uVar8 - 1;
                bVar6 = *pbVar13 != *pbVar9;
                if (bVar6) break;
                pbVar9 = pbVar9 + 1;
                pbVar13 = pbVar13 + 1;
              } while (uVar8 != 0);
            }
            else {
LAB_006f3520:
              bVar6 = (bool)(bVar6 ^ 1);
            }
            pcVar3 = local_a0;
            if (((ulong)ppbVar4 & 1) != 0) {
              free(local_c0[0]);
              pcVar3 = local_a0;
            }
          }
          if (((ulong)pcVar3 & 1) != 0) {
            free(local_90);
          }
          if (bVar6) {
            uVar8 = FUN_006f30e8();
          }
          else {
            uVar8 = FUN_006f3ee8(param_1);
          }
          if ((uVar8 & 1) == 0) break;
          sVar10 = strlen("]");
          if (0xfffffffffffffff7 < sVar10) goto LAB_006f3dc4;
          if (sVar10 < 0x17) {
            local_a0 = (char *)CONCAT71(local_a0._1_7_,(char)((int)sVar10 << 1));
            pbVar9 = pbVar19;
            if (sVar10 != 0) goto LAB_006f35c0;
          }
          else {
            uVar8 = (sVar10 & 0xfffffffffffffff8) + 8;
            if ((sVar10 | 7) != 0x17) {
              uVar8 = sVar10 | 7;
            }
            pbVar9 = (byte *)FUN_00759c3c(uVar8 + 1);
            local_a0 = (char *)(uVar8 + 1 | 1);
            uStack_98 = sVar10;
            local_90 = pbVar9;
LAB_006f35c0:
            memcpy(pbVar9,&DAT_001e1051,sVar10);
          }
          pcVar3 = local_a0;
          pbVar9[sVar10] = 0;
          bVar6 = false;
          bVar21 = *(byte *)(param_1 + 0x30);
          uVar11 = (ulong)(bVar21 >> 1);
          uVar8 = uVar11;
          if ((bVar21 & 1) != 0) {
            uVar8 = *(size_t *)(param_1 + 0x38);
          }
          uVar14 = (ulong)local_a0 >> 1 & 0x7f;
          if (((ulong)local_a0 & 1) != 0) {
            uVar14 = uStack_98;
          }
          if (uVar8 == uVar14) {
            pbVar9 = pbVar19;
            if (((ulong)local_a0 & 1) != 0) {
              pbVar9 = local_90;
            }
            if ((bVar21 & 1) == 0) {
              pbVar13 = pbVar17;
              if (1 < bVar21) {
                do {
                  if (*pbVar13 != *pbVar9) goto LAB_006f3650;
                  uVar11 = uVar11 - 1;
                  pbVar9 = pbVar9 + 1;
                  pbVar13 = pbVar13 + 1;
                } while (uVar11 != 0);
              }
            }
            else {
              iVar7 = memcmp(*(void **)(param_1 + 0x40),pbVar9,*(size_t *)(param_1 + 0x38));
              if (iVar7 != 0) {
LAB_006f3650:
                bVar6 = false;
                goto joined_r0x006f3668;
              }
            }
                    /* try { // try from 006f365c to 006f3663 has its CatchHandler @ 006f3e94 */
            FUN_006dd460(piVar16);
            bVar6 = true;
          }
joined_r0x006f3668:
          if (((ulong)pcVar3 & 1) != 0) {
            free(local_90);
          }
          if (bVar6) {
            iVar7 = *(int *)(param_1 + 0xf0);
            goto LAB_006f3894;
          }
          sVar10 = strlen(",");
          if (0xfffffffffffffff7 < sVar10) goto LAB_006f3dc4;
          if (sVar10 < 0x17) {
            local_a0 = (char *)CONCAT71(local_a0._1_7_,(char)((int)sVar10 << 1));
            pbVar9 = pbVar19;
            if (sVar10 != 0) goto LAB_006f36d8;
          }
          else {
            uVar8 = (sVar10 & 0xfffffffffffffff8) + 8;
            if ((sVar10 | 7) != 0x17) {
              uVar8 = sVar10 | 7;
            }
            pbVar9 = (byte *)FUN_00759c3c(uVar8 + 1);
            local_a0 = (char *)(uVar8 + 1 | 1);
            uStack_98 = sVar10;
            local_90 = pbVar9;
LAB_006f36d8:
            memcpy(pbVar9,&DAT_001ce2ff,sVar10);
          }
          pbVar9[sVar10] = 0;
                    /* try { // try from 006f36ec to 006f36f7 has its CatchHandler @ 006f3eb4 */
          uVar8 = FUN_006f54d4(param_1,&local_a0);
          if (((ulong)local_a0 & 1) != 0) {
            free(local_90);
          }
        } while ((uVar8 & 1) != 0);
        sVar10 = 0;
        goto LAB_006f38a0;
      }
      sVar10 = strlen("-");
      if (0xfffffffffffffff7 < sVar10) goto LAB_006f3dfc;
      if (sVar10 < 0x17) {
        pbVar17 = (byte *)((ulong)&local_a0 | 1);
        local_a0 = (char *)CONCAT71(local_a0._1_7_,(char)((int)sVar10 << 1));
        if (sVar10 != 0) goto LAB_006f37b0;
      }
      else {
        uVar8 = (sVar10 & 0xfffffffffffffff8) + 8;
        if ((sVar10 | 7) != 0x17) {
          uVar8 = sVar10 | 7;
        }
        pbVar17 = (byte *)FUN_00759c3c(uVar8 + 1);
        local_a0 = (char *)(uVar8 + 1 | 1);
        uStack_98 = sVar10;
        local_90 = pbVar17;
LAB_006f37b0:
        memcpy(pbVar17,&DAT_001eb31a,sVar10);
      }
      pcVar3 = local_a0;
      pbVar17[sVar10] = 0;
      bVar6 = false;
      bVar21 = *(byte *)(param_1 + 0x30);
      uVar11 = (ulong)(bVar21 >> 1);
      uVar8 = uVar11;
      if ((bVar21 & 1) != 0) {
        uVar8 = *(size_t *)(param_1 + 0x38);
      }
      uVar14 = (ulong)local_a0 >> 1 & 0x7f;
      if (((ulong)local_a0 & 1) != 0) {
        uVar14 = uStack_98;
      }
      if (uVar8 == uVar14) {
        pbVar17 = local_90;
        if (((ulong)local_a0 & 1) == 0) {
          pbVar17 = (byte *)((long)&local_a0 + 1);
        }
        if ((bVar21 & 1) == 0) {
          if (1 < bVar21) {
            pbVar12 = (byte *)(param_1 + 0x31);
            do {
              if (*pbVar12 != *pbVar17) goto LAB_006f3854;
              uVar11 = uVar11 - 1;
              pbVar17 = pbVar17 + 1;
              pbVar12 = pbVar12 + 1;
            } while (uVar11 != 0);
          }
        }
        else {
          iVar7 = memcmp(*(void **)(param_1 + 0x40),pbVar17,*(size_t *)(param_1 + 0x38));
          if (iVar7 != 0) {
LAB_006f3854:
            bVar6 = false;
            goto joined_r0x006f386c;
          }
        }
                    /* try { // try from 006f3860 to 006f3867 has its CatchHandler @ 006f3e64 */
        FUN_006dd460(piVar16);
        bVar6 = true;
      }
joined_r0x006f386c:
      if (((ulong)pcVar3 & 1) != 0) {
        free(local_90);
      }
      if (1 < *piVar16 - 3U) {
        if (*piVar16 != 2) {
          if ((*(byte *)puVar18 & 1) == 0) {
            uStack_98 = *(ulong *)(param_1 + 0x38);
            local_a0 = (char *)*puVar18;
            local_90 = *(byte **)(param_1 + 0x40);
          }
          else {
            FUN_002fb36c(&local_a0,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x38));
          }
                    /* try { // try from 006f3920 to 006f3933 has its CatchHandler @ 006f3e50 */
          FUN_00714534(&local_d0,"Cannot skip field value, unexpected token: ",&local_a0);
                    /* try { // try from 006f3938 to 006f3943 has its CatchHandler @ 006f3e34 */
          FUN_006eb56c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                       &local_d0);
LAB_006f3944:
          if (((ulong)local_d0 & 1) != 0) {
            free(local_c0[0]);
          }
          *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
          local_108 = local_90;
          if (((ulong)local_a0 & 1) != 0) goto LAB_006f31d0;
          goto LAB_006f31d4;
        }
        if (!bVar6) goto LAB_006f3888;
        if ((*(byte *)puVar18 & 1) == 0) {
          local_a0 = (char *)*puVar18;
          uStack_98 = *(ulong *)(param_1 + 0x38);
          local_90 = *(byte **)(param_1 + 0x40);
        }
        else {
          FUN_002fb36c(&local_a0,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x38));
        }
        uVar11 = (ulong)((byte)local_a0 >> 1);
        uVar8 = uStack_98;
        pbVar17 = local_90;
        if (((ulong)local_a0 & 1) == 0) {
          uVar8 = uVar11;
          pbVar17 = (byte *)((long)&local_a0 + 1);
        }
        if (uVar8 != 0) {
          pbVar12 = pbVar17;
          if (uVar8 < 8) {
LAB_006f3d94:
            do {
              if (*pbVar12 - 0x41 < 0x1a) {
                *pbVar12 = *pbVar12 | 0x20;
              }
              pbVar12 = pbVar12 + 1;
            } while (pbVar12 != pbVar17 + uVar8);
          }
          else if (uVar8 < 0x10) {
            uVar14 = 0;
LAB_006f39b4:
            uVar11 = uVar8 & 0xfffffffffffffff8;
            pbVar12 = pbVar17 + uVar11;
            lVar15 = uVar14 - uVar11;
            pbVar19 = pbVar17 + uVar14 + 3;
            do {
              uVar20 = *(undefined8 *)(pbVar19 + -3);
              bVar21 = (byte)((ulong)uVar20 >> 8);
              bVar22 = (byte)((ulong)uVar20 >> 0x10);
              bVar23 = (byte)((ulong)uVar20 >> 0x18);
              bVar24 = (byte)((ulong)uVar20 >> 0x20);
              bVar25 = (byte)((ulong)uVar20 >> 0x28);
              bVar26 = (byte)((ulong)uVar20 >> 0x30);
              bVar27 = (byte)((ulong)uVar20 >> 0x38);
              uVar14 = NEON_cmhi(0x1a1a1a1a1a1a1a1a,
                                 CONCAT17(bVar27 + 0xbf,
                                          CONCAT16(bVar26 + 0xbf,
                                                   CONCAT15(bVar25 + 0xbf,
                                                            CONCAT14(bVar24 + 0xbf,
                                                                     CONCAT13(bVar23 + 0xbf,
                                                                              CONCAT12(bVar22 + 0xbf
                                                                                       ,CONCAT11(
                                                  bVar21 + 0xbf,(byte)uVar20 + 0xbf))))))),1);
              if ((uVar14 & 1) != 0) {
                pbVar19[-3] = (byte)uVar20 | 0x20;
              }
              if ((uVar14 & 0x100) != 0) {
                pbVar19[-2] = bVar21 | 0x20;
              }
              if ((uVar14 & 0x10000) != 0) {
                pbVar19[-1] = bVar22 | 0x20;
              }
              if ((uVar14 & 0x1000000) != 0) {
                *pbVar19 = bVar23 | 0x20;
              }
              if ((uVar14 & 0x100000000) != 0) {
                pbVar19[1] = bVar24 | 0x20;
              }
              if ((uVar14 & 0x10000000000) != 0) {
                pbVar19[2] = bVar25 | 0x20;
              }
              if ((uVar14 & 0x1000000000000) != 0) {
                pbVar19[3] = bVar26 | 0x20;
              }
              if ((uVar14 & 0x100000000000000) != 0) {
                pbVar19[4] = bVar27 | 0x20;
              }
              lVar15 = lVar15 + 8;
              pbVar19 = pbVar19 + 8;
            } while (lVar15 != 0);
            if (uVar8 != uVar11) goto LAB_006f3d94;
          }
          else {
            uVar14 = uVar8 & 0xfffffffffffffff0;
            pbVar12 = pbVar17 + 7;
            uVar11 = uVar14;
            do {
              uVar28 = *(undefined8 *)(pbVar12 + 1);
              uVar20 = *(undefined8 *)(pbVar12 + -7);
              auVar36[0] = (byte)uVar20 + 0xbf;
              bVar21 = (byte)((ulong)uVar20 >> 8);
              auVar36[1] = bVar21 + 0xbf;
              bVar22 = (byte)((ulong)uVar20 >> 0x10);
              auVar36[2] = bVar22 + 0xbf;
              bVar23 = (byte)((ulong)uVar20 >> 0x18);
              auVar36[3] = bVar23 + 0xbf;
              bVar24 = (byte)((ulong)uVar20 >> 0x20);
              auVar36[4] = bVar24 + 0xbf;
              bVar25 = (byte)((ulong)uVar20 >> 0x28);
              auVar36[5] = bVar25 + 0xbf;
              bVar26 = (byte)((ulong)uVar20 >> 0x30);
              auVar36[6] = bVar26 + 0xbf;
              bVar27 = (byte)((ulong)uVar20 >> 0x38);
              auVar36[7] = bVar27 + 0xbf;
              auVar36[8] = (byte)uVar28 + 0xbf;
              bVar29 = (byte)((ulong)uVar28 >> 8);
              auVar36[9] = bVar29 + 0xbf;
              bVar30 = (byte)((ulong)uVar28 >> 0x10);
              auVar36[10] = bVar30 + 0xbf;
              bVar31 = (byte)((ulong)uVar28 >> 0x18);
              auVar36[0xb] = bVar31 + 0xbf;
              bVar32 = (byte)((ulong)uVar28 >> 0x20);
              auVar36[0xc] = bVar32 + 0xbf;
              bVar33 = (byte)((ulong)uVar28 >> 0x28);
              auVar36[0xd] = bVar33 + 0xbf;
              bVar34 = (byte)((ulong)uVar28 >> 0x30);
              auVar36[0xe] = bVar34 + 0xbf;
              bVar35 = (byte)((ulong)uVar28 >> 0x38);
              auVar36[0xf] = bVar35 + 0xbf;
              auVar37[8] = 0x1a;
              auVar37._0_8_ = 0x1a1a1a1a1a1a1a1a;
              auVar37[9] = 0x1a;
              auVar37[10] = 0x1a;
              auVar37[0xb] = 0x1a;
              auVar37[0xc] = 0x1a;
              auVar37[0xd] = 0x1a;
              auVar37[0xe] = 0x1a;
              auVar37[0xf] = 0x1a;
              auVar37 = NEON_cmhi(auVar37,auVar36,1);
              if ((auVar37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
                pbVar12[-7] = (byte)uVar20 | 0x20;
              }
              if ((auVar37 & (undefined1  [16])0x100) != (undefined1  [16])0x0) {
                pbVar12[-6] = bVar21 | 0x20;
              }
              if ((auVar37 & (undefined1  [16])0x10000) != (undefined1  [16])0x0) {
                pbVar12[-5] = bVar22 | 0x20;
              }
              if ((auVar37 & (undefined1  [16])0x1000000) != (undefined1  [16])0x0) {
                pbVar12[-4] = bVar23 | 0x20;
              }
              if ((auVar37 & (undefined1  [16])0x100000000) != (undefined1  [16])0x0) {
                pbVar12[-3] = bVar24 | 0x20;
              }
              if ((auVar37 & (undefined1  [16])0x10000000000) != (undefined1  [16])0x0) {
                pbVar12[-2] = bVar25 | 0x20;
              }
              if ((auVar37 & (undefined1  [16])0x1000000000000) != (undefined1  [16])0x0) {
                pbVar12[-1] = bVar26 | 0x20;
              }
              if ((auVar37 & (undefined1  [16])0x100000000000000) != (undefined1  [16])0x0) {
                *pbVar12 = bVar27 | 0x20;
              }
              if ((auVar37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
                pbVar12[1] = (byte)uVar28 | 0x20;
              }
              if ((auVar37 & (undefined1  [16])0x100) != (undefined1  [16])0x0) {
                pbVar12[2] = bVar29 | 0x20;
              }
              if ((auVar37 & (undefined1  [16])0x10000) != (undefined1  [16])0x0) {
                pbVar12[3] = bVar30 | 0x20;
              }
              if ((auVar37 & (undefined1  [16])0x1000000) != (undefined1  [16])0x0) {
                pbVar12[4] = bVar31 | 0x20;
              }
              if ((auVar37 & (undefined1  [16])0x100000000) != (undefined1  [16])0x0) {
                pbVar12[5] = bVar32 | 0x20;
              }
              if ((auVar37 & (undefined1  [16])0x10000000000) != (undefined1  [16])0x0) {
                pbVar12[6] = bVar33 | 0x20;
              }
              if ((auVar37 & (undefined1  [16])0x1000000000000) != (undefined1  [16])0x0) {
                pbVar12[7] = bVar34 | 0x20;
              }
              if ((auVar37 & (undefined1  [16])0x100000000000000) != (undefined1  [16])0x0) {
                pbVar12[8] = bVar35 | 0x20;
              }
              uVar11 = uVar11 - 0x10;
              pbVar12 = pbVar12 + 0x10;
            } while (uVar11 != 0);
            if (uVar8 != uVar14) {
              if (((uint)uVar8 >> 3 & 1) == 0) {
                pbVar12 = pbVar17 + uVar14;
                goto LAB_006f3d94;
              }
              goto LAB_006f39b4;
            }
          }
          uVar11 = (ulong)((byte)local_a0 >> 1);
        }
        uVar5 = uStack_98;
        uVar8 = (ulong)local_a0 & 1;
        uVar14 = (ulong)local_a0 & 1;
        sVar10 = strlen("inf");
        if (uVar8 != 0) {
          uVar11 = uVar5;
        }
        if (sVar10 == uVar11) {
          if (sVar10 == 0xffffffffffffffff) {
            sVar10 = 0xffffffffffffffff;
            if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 006f3e20 to 006f3e27 has its CatchHandler @ 006f3e30 */
                    /* WARNING: Subroutine does not return */
              FUN_0030b8f4(&local_a0);
            }
            goto LAB_006f3ee4;
          }
          pbVar17 = (byte *)((ulong)&local_a0 | 1);
          if (uVar14 != 0) {
            pbVar17 = local_90;
          }
          iVar7 = memcmp(pbVar17,&DAT_001d3221,sVar10);
          if (iVar7 != 0) goto LAB_006f3d28;
        }
        else {
LAB_006f3d28:
          uVar8 = FUN_006aafd4(&local_a0,"infinity");
          if (((uVar8 & 1) != 0) &&
             (uVar8 = FUN_006aafd4(&local_a0,&DAT_001f2bf6), (uVar8 & 1) != 0)) {
                    /* try { // try from 006f3d50 to 006f3d63 has its CatchHandler @ 006f3e2c */
            FUN_00714534(&local_d0,"Invalid float number: ",&local_a0);
                    /* try { // try from 006f3d68 to 006f3d73 has its CatchHandler @ 006f3e28 */
            FUN_006eb56c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                         &local_d0);
            goto LAB_006f3944;
          }
        }
        if (((ulong)local_a0 & 1) != 0) {
          free(local_90);
        }
      }
LAB_006f3888:
      FUN_006dd460(piVar16);
    }
    iVar7 = *(int *)(param_1 + 0xf0);
LAB_006f3894:
    sVar10 = 1;
    *(int *)(param_1 + 0xf0) = iVar7 + 1;
  }
LAB_006f38a0:
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
LAB_006f3ee4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(sVar10);
}


// ===== 006f3ee8  FUN_006f3ee8 =====

void FUN_006f3ee8(long param_1)

{
  size_t sVar1;
  byte bVar2;
  long lVar3;
  char **ppcVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  size_t sVar9;
  char *pcVar10;
  long lVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  byte local_118 [16];
  void *local_108;
  undefined *local_100;
  size_t local_f8;
  char *local_f0;
  char **local_d0;
  size_t local_c8;
  char *local_c0 [4];
  char *local_a0;
  size_t local_98;
  void *local_90;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  iVar7 = *(int *)(param_1 + 0xf0);
  *(int *)(param_1 + 0xf0) = iVar7 + -1;
  if (iVar7 < 1) {
    local_a0 = "Message is too deep, the parser exceeded the configured recursion limit of ";
    local_98 = strlen("Message is too deep, the parser exceeded the configured recursion limit of ")
    ;
    local_d0 = local_c0;
    lVar11 = FUN_006778a4(*(undefined4 *)(param_1 + 0xec),local_c0);
    local_c8 = lVar11 - (long)local_c0;
    local_100 = &DAT_001c773b;
    local_f8 = strlen(".");
    FUN_00678644(local_118,&local_a0,&local_d0,&local_100);
                    /* try { // try from 006f4204 to 006f420f has its CatchHandler @ 006f42d4 */
    FUN_006eb56c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),local_118);
    if ((local_118[0] & 1) != 0) {
      free(local_108);
    }
    sVar9 = 0;
  }
  else {
    local_a0 = (char *)0x0;
    local_98 = 0;
    local_90 = (void *)0x0;
                    /* try { // try from 006f3f34 to 006f3f3f has its CatchHandler @ 006f42e8 */
    uVar8 = FUN_006f5898(param_1,&local_a0);
    if ((uVar8 & 1) != 0) {
      pcVar13 = (char *)((ulong)&local_d0 | 1);
      pcVar14 = (char *)((ulong)&local_100 | 1);
      do {
        sVar9 = strlen(">");
        if (0xfffffffffffffff7 < sVar9) {
          if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* try { // try from 006f42b4 to 006f42bb has its CatchHandler @ 006f430c */
                    /* WARNING: Subroutine does not return */
            FUN_002fb400(&local_d0);
          }
          goto LAB_006f4338;
        }
        if (sVar9 < 0x17) {
          local_d0 = (char **)CONCAT71(local_d0._1_7_,(char)((int)sVar9 << 1));
          pcVar10 = pcVar13;
          if (sVar9 != 0) goto LAB_006f3fcc;
        }
        else {
          uVar8 = (sVar9 & 0xfffffffffffffff8) + 8;
          if ((sVar9 | 7) != 0x17) {
            uVar8 = sVar9 | 7;
          }
                    /* try { // try from 006f3fb4 to 006f3fbb has its CatchHandler @ 006f42f0 */
          pcVar10 = (char *)FUN_00759c3c(uVar8 + 1);
          local_d0 = (char **)(uVar8 + 1 | 1);
          local_c8 = sVar9;
          local_c0[0] = pcVar10;
LAB_006f3fcc:
          memcpy(pcVar10,&DAT_001c9356,sVar9);
        }
        ppcVar4 = local_d0;
        pcVar10[sVar9] = '\0';
        bVar2 = *(byte *)(param_1 + 0x30);
        uVar8 = (ulong)(bVar2 >> 1);
        sVar9 = uVar8;
        if ((bVar2 & 1) != 0) {
          sVar9 = *(size_t *)(param_1 + 0x38);
        }
        sVar1 = (ulong)local_d0 >> 1 & 0x7f;
        if (((ulong)local_d0 & 1) != 0) {
          sVar1 = local_c8;
        }
        if (sVar9 == sVar1) {
          pcVar10 = pcVar13;
          if (((ulong)local_d0 & 1) != 0) {
            pcVar10 = local_c0[0];
          }
          if ((bVar2 & 1) == 0) {
            pcVar12 = (char *)(param_1 + 0x31);
            if (1 < bVar2) {
              do {
                if (*pcVar12 != *pcVar10) goto LAB_006f4058;
                uVar8 = uVar8 - 1;
                pcVar10 = pcVar10 + 1;
                pcVar12 = pcVar12 + 1;
              } while (uVar8 != 0);
            }
          }
          else {
            iVar7 = memcmp(*(void **)(param_1 + 0x40),pcVar10,*(size_t *)(param_1 + 0x38));
            if (iVar7 != 0) goto LAB_006f4058;
          }
          bVar6 = false;
        }
        else {
LAB_006f4058:
          sVar9 = strlen("}");
          if (0xfffffffffffffff7 < sVar9) {
            if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* try { // try from 006f42cc to 006f42d3 has its CatchHandler @ 006f42f4 */
                    /* WARNING: Subroutine does not return */
              FUN_002fb400(&local_100);
            }
            goto LAB_006f4338;
          }
          if (sVar9 < 0x17) {
            local_100 = (undefined *)CONCAT71(local_100._1_7_,(char)((int)sVar9 << 1));
            pcVar10 = pcVar14;
            if (sVar9 != 0) goto LAB_006f40b8;
          }
          else {
            uVar8 = (sVar9 & 0xfffffffffffffff8) + 8;
            if ((sVar9 | 7) != 0x17) {
              uVar8 = sVar9 | 7;
            }
                    /* try { // try from 006f40a0 to 006f40a7 has its CatchHandler @ 006f42ec */
            pcVar10 = (char *)FUN_00759c3c(uVar8 + 1);
            local_100 = (undefined *)(uVar8 + 1 | 1);
            local_f8 = sVar9;
            local_f0 = pcVar10;
LAB_006f40b8:
            memcpy(pcVar10,&DAT_001bb609,sVar9);
          }
          puVar5 = local_100;
          pcVar10[sVar9] = '\0';
          bVar2 = *(byte *)(param_1 + 0x30);
          uVar8 = (ulong)(bVar2 >> 1);
          sVar9 = uVar8;
          if ((bVar2 & 1) != 0) {
            sVar9 = *(size_t *)(param_1 + 0x38);
          }
          sVar1 = (ulong)local_100 >> 1 & 0x7f;
          if (((ulong)local_100 & 1) != 0) {
            sVar1 = local_f8;
          }
          bVar6 = false;
          if (sVar9 == sVar1) {
            pcVar10 = pcVar14;
            if (((ulong)local_100 & 1) != 0) {
              pcVar10 = local_f0;
            }
            if ((bVar2 & 1) != 0) {
              iVar7 = memcmp(*(void **)(param_1 + 0x40),pcVar10,*(size_t *)(param_1 + 0x38));
              bVar6 = iVar7 == 0;
              goto LAB_006f413c;
            }
            pcVar12 = (char *)(param_1 + 0x31);
            if (bVar2 < 2) {
              bVar6 = true;
              goto LAB_006f413c;
            }
            do {
              uVar8 = uVar8 - 1;
              bVar6 = *pcVar12 != *pcVar10;
              if (bVar6) break;
              pcVar10 = pcVar10 + 1;
              pcVar12 = pcVar12 + 1;
            } while (uVar8 != 0);
          }
          else {
LAB_006f413c:
            bVar6 = (bool)(bVar6 ^ 1);
          }
          ppcVar4 = local_d0;
          if (((ulong)puVar5 & 1) != 0) {
            free(local_f0);
            ppcVar4 = local_d0;
          }
        }
        if (((ulong)ppcVar4 & 1) != 0) {
          free(local_c0[0]);
        }
        if (!bVar6) {
                    /* try { // try from 006f4228 to 006f4233 has its CatchHandler @ 006f42e8 */
          uVar8 = FUN_006f54d4(param_1,&local_a0);
          if ((uVar8 & 1) != 0) {
            sVar9 = 1;
            *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
            goto joined_r0x006f424c;
          }
          break;
        }
                    /* try { // try from 006f4164 to 006f416b has its CatchHandler @ 006f4308 */
        uVar8 = FUN_006f5ec0(param_1);
      } while ((uVar8 & 1) != 0);
    }
    sVar9 = 0;
joined_r0x006f424c:
    if (((ulong)local_a0 & 1) != 0) {
      free(local_90);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
LAB_006f4338:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(sVar9);
}


// ===== 006f433c  FUN_006f433c =====

void FUN_006f433c(long param_1,byte *param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  piVar3 = (int *)(param_1 + 0x28);
  iVar1 = *piVar3;
  if (iVar1 == 5) {
    if ((*param_2 & 1) == 0) {
      param_2[0] = 0;
      param_2[1] = 0;
    }
    else {
      **(undefined1 **)(param_2 + 0x10) = 0;
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[0xc] = 0;
      param_2[0xd] = 0;
      param_2[0xe] = 0;
      param_2[0xf] = 0;
    }
    while (*piVar3 == 5) {
      FUN_006ddef8(param_1 + 0x30,param_2);
      FUN_006dd460(piVar3);
    }
  }
  else {
    FUN_00714534(local_60,"Expected string, got: ",param_1 + 0x30);
                    /* try { // try from 006f43a0 to 006f43ab has its CatchHandler @ 006f4420 */
    FUN_006eb56c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),local_60);
    if ((local_60[0] & 1) != 0) {
      free(local_50);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 == 5);
}


// ===== 006f4450  FUN_006f4450 =====

void FUN_006f4450(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  char *local_140;
  size_t sStack_138;
  void *local_130;
  char *local_120;
  size_t sStack_118;
  void *local_110;
  byte local_100 [16];
  void *local_f0;
  undefined *local_e8;
  size_t local_e0;
  undefined1 *local_b8;
  long local_b0;
  undefined1 auStack_a8 [32];
  char *local_88;
  size_t sStack_80;
  void *local_78;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(param_1 + 0xf0);
  *(int *)(param_1 + 0xf0) = iVar1 + -1;
  if (iVar1 < 1) {
    local_88 = "Message is too deep, the parser exceeded the configured recursion limit of ";
    sStack_80 = strlen("Message is too deep, the parser exceeded the configured recursion limit of "
                      );
    local_b8 = auStack_a8;
    local_b0 = FUN_006778a4(*(undefined4 *)(param_1 + 0xec),auStack_a8);
    local_b0 = local_b0 - (long)auStack_a8;
    local_e8 = &DAT_001c773b;
    local_e0 = strlen(".");
    FUN_00678644(local_100,&local_88,&local_b8,&local_e8);
                    /* try { // try from 006f4590 to 006f459b has its CatchHandler @ 006f4700 */
    FUN_006eb56c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),local_100);
    if ((local_100[0] & 1) != 0) {
      free(local_f0);
    }
    uVar3 = 0;
    goto LAB_006f4650;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    uVar3 = FUN_006eac2c(lVar6,param_4);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
  }
  local_88 = (char *)0x0;
  sStack_80 = 0;
  local_78 = (void *)0x0;
                    /* try { // try from 006f44bc to 006f44c7 has its CatchHandler @ 006f4714 */
  uVar4 = FUN_006f5898(param_1,&local_88);
  if ((uVar4 & 1) == 0) {
LAB_006f4630:
    uVar3 = 0;
  }
  else {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 == (long *)0x0) {
      uVar3 = 0;
      if (((*(byte *)(param_4 + 1) ^ 0xff) & 0x60) == 0) goto LAB_006f4500;
LAB_006f45d0:
                    /* try { // try from 006f45d0 to 006f4607 has its CatchHandler @ 006f4718 */
      uVar3 = FUN_00682834(param_3,param_2,param_4,uVar3);
      if (((ulong)local_88 & 1) == 0) {
        sStack_138 = sStack_80;
        local_140 = local_88;
        local_130 = local_78;
      }
      else {
                    /* try { // try from 006f4680 to 006f4687 has its CatchHandler @ 006f4718 */
        FUN_002fb36c(&local_140,local_78,sStack_80);
      }
                    /* try { // try from 006f4688 to 006f4697 has its CatchHandler @ 006f46d0 */
      uVar4 = FUN_006f5b48(param_1,uVar3,&local_140);
      if (((ulong)local_140 & 1) != 0) {
        free(local_130);
      }
    }
    else {
                    /* try { // try from 006f44dc to 006f450b has its CatchHandler @ 006f4718 */
      uVar3 = (**(code **)(*plVar5 + 0x28))(plVar5,param_4);
      if (((*(byte *)(param_4 + 1) ^ 0xff) & 0x60) != 0) goto LAB_006f45d0;
LAB_006f4500:
      uVar3 = FUN_0068347c(param_3,param_2,param_4);
      if (((ulong)local_88 & 1) == 0) {
        sStack_118 = sStack_80;
        local_120 = local_88;
        local_110 = local_78;
      }
      else {
        FUN_002fb36c(&local_120,local_78,sStack_80);
      }
                    /* try { // try from 006f4608 to 006f4617 has its CatchHandler @ 006f46e8 */
      uVar4 = FUN_006f5b48(param_1,uVar3,&local_120);
      if (((ulong)local_120 & 1) != 0) {
        free(local_110);
      }
    }
    if ((uVar4 & 1) == 0) goto LAB_006f4630;
    uVar3 = 1;
    *(long *)(param_1 + 0x10) = lVar6;
    *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
  }
  if (((ulong)local_88 & 1) != 0) {
    free(local_78);
  }
LAB_006f4650:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


// ===== 006f4748  FUN_006f4748 =====

/* WARNING: Type propagation algorithm not settling */

uint FUN_006f4748(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong *puVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  code **ppcVar5;
  code *__ptr;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  code ***pppcVar13;
  ulong *puVar14;
  code *pcVar15;
  uint uVar16;
  code *pcVar17;
  ulong local_150;
  byte local_148 [16];
  void *local_138;
  ulong local_130;
  ulong uStack_128;
  void *local_120;
  code *local_118;
  undefined8 uStack_110;
  void *local_108;
  code *local_100;
  undefined8 uStack_f8;
  void *local_f0;
  code **local_e0;
  ulong *puStack_d8;
  code *local_d0;
  code **local_c0;
  ulong *puStack_b8;
  code *local_b0;
  undefined8 local_a0;
  ulong *puStack_98;
  code *local_90 [5];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  plVar12 = *(long **)(param_4 + 0x18);
  if ((plVar12 != (long *)0x0) &&
     (local_118 = thunk_FUN_006af330, local_130 = param_4, *plVar12 != -1)) {
    local_a0 = &local_118;
    puStack_98 = &local_130;
    local_100 = (code *)&local_a0;
    FUN_00710f84(plVar12,&local_100,FUN_00685640);
  }
  iVar6 = *(int *)(PTR_DAT_007a32d8 + (ulong)*(byte *)(param_4 + 2) * 4);
  if (iVar6 < 6) {
    if (iVar6 < 3) {
      if (iVar6 == 1) {
        uVar7 = FUN_006f6c4c(param_1,&local_a0,0x7fffffff);
        if ((uVar7 & 1) == 0) goto LAB_006f5218;
        if (((*(byte *)(param_4 + 1) ^ 0xff) & 0x60) == 0) {
          FUN_0067d19c();
        }
        else {
          FUN_0067cd04(param_3,param_2,param_4,(ulong)local_a0 & 0xffffffff);
        }
      }
      else if (iVar6 == 2) {
        uVar7 = FUN_006f6c4c(param_1,&local_a0,0x7fffffffffffffff);
        if ((uVar7 & 1) == 0) goto LAB_006f5218;
        if (((*(byte *)(param_4 + 1) ^ 0xff) & 0x60) == 0) {
          FUN_0067d9dc();
        }
        else {
          FUN_0067d544(param_3,param_2,param_4,local_a0);
        }
      }
    }
    else if (iVar6 == 3) {
      uVar7 = FUN_006f6e60(param_1,&local_a0,0xffffffff);
      if ((uVar7 & 1) == 0) {
LAB_006f5218:
        uVar16 = 0;
        if (*(long *)(lVar3 + 0x28) == local_68) goto LAB_006f522c;
        goto LAB_006f54d0;
      }
      if (((*(byte *)(param_4 + 1) ^ 0xff) & 0x60) == 0) {
        FUN_0067e21c();
      }
      else {
        FUN_0067dd84(param_3,param_2,param_4,(ulong)local_a0 & 0xffffffff);
      }
    }
    else if (iVar6 == 4) {
      uVar7 = FUN_006f6e60(param_1,&local_a0,0xffffffffffffffff);
      if ((uVar7 & 1) == 0) goto LAB_006f5218;
      if (((*(byte *)(param_4 + 1) ^ 0xff) & 0x60) == 0) {
        FUN_0067ea5c();
      }
      else {
        FUN_0067e5c4(param_3,param_2,param_4,local_a0);
      }
    }
    else if (iVar6 == 5) {
      uVar7 = FUN_006f6ff0(param_1,&local_a0);
      if ((uVar7 & 1) == 0) goto LAB_006f5218;
      if (((*(byte *)(param_4 + 1) ^ 0xff) & 0x60) == 0) {
        FUN_0067fafc();
      }
      else {
        FUN_0067f658(local_a0,param_3,param_2,param_4);
      }
    }
  }
  else if (iVar6 < 8) {
    if (iVar6 == 6) {
      uVar7 = FUN_006f6ff0(param_1,&local_a0);
      if ((uVar7 & 1) == 0) goto LAB_006f5218;
      bVar2 = *(byte *)(param_4 + 1);
      FUN_006da0b0(local_a0);
      if (((bVar2 ^ 0xff) & 0x60) == 0) {
        FUN_0067f2a8();
      }
      else {
        FUN_0067ee04(param_3,param_2,param_4);
      }
    }
    else if (iVar6 == 7) {
      if (*(int *)(param_1 + 0x28) == 3) {
        uVar7 = FUN_006f6e60(param_1,&local_a0,1);
        if ((uVar7 & 1) == 0) goto LAB_006f5218;
        if (((*(byte *)(param_4 + 1) ^ 0xff) & 0x60) == 0) {
          FUN_0068034c(param_3,param_2,param_4,local_a0 != (code **)0x0);
        }
        else {
          FUN_0067feb0(param_3,param_2,param_4,local_a0 != (code **)0x0);
        }
      }
      else {
        local_a0 = (code **)0x0;
        puStack_98 = (ulong *)0x0;
        local_90[0] = (code *)0x0;
                    /* try { // try from 006f4af4 to 006f4ba3 has its CatchHandler @ 006f5470 */
        uVar7 = FUN_006f5784(param_1,&local_a0);
        if ((uVar7 & 1) == 0) {
LAB_006f51e8:
          bVar4 = false;
        }
        else {
          puVar14 = (ulong *)strlen("true");
          puVar10 = (ulong *)((ulong)local_a0 >> 1 & 0x7f);
          if (((ulong)local_a0 & 1) != 0) {
            puVar10 = puStack_98;
          }
          if (puVar14 == puVar10) {
            if (puVar14 == (ulong *)0xffffffffffffffff) {
              if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 006f52ac to 006f52b3 has its CatchHandler @ 006f541c */
                    /* WARNING: Subroutine does not return */
                FUN_0030b8f4(&local_a0);
              }
              goto LAB_006f54d0;
            }
            pcVar17 = local_90[0];
            if (((ulong)local_a0 & 1) == 0) {
              pcVar17 = (code *)((long)&local_a0 + 1);
            }
            iVar6 = memcmp(pcVar17,&DAT_001d5ef8,(size_t)puVar14);
            if (iVar6 != 0) goto LAB_006f4b58;
LAB_006f4b80:
            uVar8 = 1;
            if (((*(byte *)(param_4 + 1) ^ 0xff) & 0x60) != 0) goto LAB_006f4fb4;
LAB_006f4b94:
            FUN_0068034c(param_3,param_2,param_4);
          }
          else {
LAB_006f4b58:
            uVar7 = FUN_0048a36c(&local_a0,&DAT_001d79ed);
            if (((uVar7 & 1) != 0) ||
               (uVar7 = FUN_0048a36c(&local_a0,&DAT_001f8032), (uVar7 & 1) != 0)) goto LAB_006f4b80;
            uVar7 = FUN_0048a36c(&local_a0,"false");
            if (((uVar7 & 1) == 0) &&
               ((uVar7 = FUN_0048a36c(&local_a0,"False"), (uVar7 & 1) == 0 &&
                (uVar7 = FUN_0048a36c(&local_a0,&DAT_001e25a8), (uVar7 & 1) == 0)))) {
                    /* try { // try from 006f5140 to 006f514f has its CatchHandler @ 006f5348 */
              FUN_00714534(local_148,"Invalid value for boolean field \"",
                           *(undefined8 *)(param_4 + 8));
                    /* try { // try from 006f5150 to 006f515f has its CatchHandler @ 006f5330 */
              puVar10 = (ulong *)FUN_00713bdc(local_148,"\". Value: \"");
              local_120 = (void *)puVar10[2];
              uStack_128 = puVar10[1];
              local_130 = *puVar10;
              puVar10[1] = 0;
              puVar10[2] = 0;
              *puVar10 = 0;
                    /* try { // try from 006f5178 to 006f5187 has its CatchHandler @ 006f5310 */
              FUN_00696434(&local_118,&local_130,&local_a0);
                    /* try { // try from 006f5188 to 006f5197 has its CatchHandler @ 006f52f0 */
              puVar11 = (undefined8 *)FUN_00713bdc(&local_118,&DAT_001f097e);
              local_f0 = (void *)puVar11[2];
              uStack_f8 = puVar11[1];
              local_100 = (code *)*puVar11;
              puVar11[1] = 0;
              puVar11[2] = 0;
              *puVar11 = 0;
                    /* try { // try from 006f51b4 to 006f51bf has its CatchHandler @ 006f52b4 */
              FUN_006eb56c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                           &local_100);
              if (((ulong)local_100 & 1) != 0) {
                free(local_f0);
              }
              if (((ulong)local_118 & 1) != 0) {
                free(local_108);
              }
              if ((local_130 & 1) != 0) {
                free(local_120);
              }
              if ((local_148[0] & 1) != 0) {
                free(local_138);
              }
              goto LAB_006f51e8;
            }
            uVar8 = 0;
            if (((*(byte *)(param_4 + 1) ^ 0xff) & 0x60) == 0) goto LAB_006f4b94;
LAB_006f4fb4:
                    /* try { // try from 006f4fb4 to 006f4fc3 has its CatchHandler @ 006f5470 */
            FUN_0067feb0(param_3,param_2,param_4,uVar8);
          }
          bVar4 = true;
        }
        if (((ulong)local_a0 & 1) != 0) {
          free(local_90[0]);
        }
        if (!bVar4) goto LAB_006f5218;
      }
    }
  }
  else {
    if (iVar6 != 8) {
      if (iVar6 != 9) {
        if (iVar6 == 10) {
          FUN_00675e64(&local_a0,3,
                       "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/text_format.cc"
                       ,0x373);
                    /* try { // try from 006f4878 to 006f488b has its CatchHandler @ 006f5494 */
          uVar8 = FUN_00675a58(&local_a0,"Reached an unintended state: CPPTYPE_MESSAGE");
                    /* try { // try from 006f488c to 006f4893 has its CatchHandler @ 006f5478 */
          FUN_00675ac0(&local_100,uVar8);
          FUN_00675e7c(&local_a0);
        }
        goto LAB_006f5200;
      }
      local_a0 = (code **)0x0;
      puStack_98 = (ulong *)0x0;
      local_90[0] = (code *)0x0;
                    /* try { // try from 006f4a8c to 006f4a97 has its CatchHandler @ 006f547c */
      uVar7 = FUN_006f433c(param_1,&local_a0);
      pcVar17 = local_90[0];
      puVar10 = puStack_98;
      ppcVar5 = local_a0;
      if ((uVar7 & 1) != 0) {
        if (((*(byte *)(param_4 + 1) ^ 0xff) & 0x60) == 0) {
          puStack_98 = (ulong *)0x0;
          local_90[0] = (code *)0x0;
          local_a0 = (code **)0x0;
          puStack_b8 = puVar10;
          local_c0 = ppcVar5;
          local_b0 = pcVar17;
                    /* try { // try from 006f4ac8 to 006f4adb has its CatchHandler @ 006f5454 */
          FUN_006815fc(param_3,param_2,param_4,&local_c0);
          if (((ulong)local_c0 & 1) != 0) {
            pppcVar13 = &local_c0;
LAB_006f4c48:
            free(pppcVar13[2]);
          }
        }
        else {
          puStack_98 = (ulong *)0x0;
          local_90[0] = (code *)0x0;
          local_a0 = (code **)0x0;
          puStack_d8 = puVar10;
          local_e0 = ppcVar5;
          local_d0 = pcVar17;
                    /* try { // try from 006f4c28 to 006f4c3b has its CatchHandler @ 006f543c */
          FUN_00680a64(param_3,param_2,param_4,&local_e0);
          if (((ulong)local_e0 & 1) != 0) {
            pppcVar13 = &local_e0;
            goto LAB_006f4c48;
          }
        }
      }
      if (((ulong)local_a0 & 1) != 0) {
        free(local_90[0]);
      }
      if ((uVar7 & 1) == 0) goto LAB_006f5218;
      goto LAB_006f5200;
    }
    local_100 = (code *)0x0;
    uStack_f8 = 0;
    local_f0 = (void *)0x0;
    local_150 = 0x7fffffffffffffff;
                    /* try { // try from 006f4a10 to 006f4a17 has its CatchHandler @ 006f5490 */
    uVar8 = FUN_0068f648(param_4);
    if (*(int *)(param_1 + 0x28) == 2) {
                    /* try { // try from 006f4a28 to 006f4a43 has its CatchHandler @ 006f54a4 */
      uVar7 = FUN_006f5784(param_1,&local_100);
      if ((uVar7 & 1) == 0) {
LAB_006f5078:
        uVar16 = 0;
        bVar4 = true;
      }
      else {
        lVar9 = FUN_0068ced0(uVar8,&local_100);
LAB_006f4e24:
        if (lVar9 == 0) {
          if ((local_150 == 0x7fffffffffffffff) || (uVar7 = FUN_0068478c(param_3), (uVar7 & 1) == 0)
             ) {
            if ((*(byte *)(param_1 + 0xe7) & 1) == 0) {
                    /* try { // try from 006f4fcc to 006f4fdf has its CatchHandler @ 006f5380 */
              FUN_00714534(local_148,"Unknown enumeration value of \"",&local_100);
                    /* try { // try from 006f4fe0 to 006f4fef has its CatchHandler @ 006f5370 */
              puVar10 = (ulong *)FUN_00713bdc(local_148,"\" for field \"");
              local_120 = (void *)puVar10[2];
              uStack_128 = puVar10[1];
              local_130 = *puVar10;
              puVar10[1] = 0;
              puVar10[2] = 0;
              *puVar10 = 0;
                    /* try { // try from 006f500c to 006f5017 has its CatchHandler @ 006f5360 */
              FUN_00696434(&local_118,&local_130,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 006f5018 to 006f5027 has its CatchHandler @ 006f5350 */
              puVar11 = (undefined8 *)FUN_00713bdc(&local_118,&DAT_001f097e);
              local_90[0] = (code *)puVar11[2];
              puStack_98 = (ulong *)puVar11[1];
              local_a0 = (code **)*puVar11;
              puVar11[1] = 0;
              puVar11[2] = 0;
              *puVar11 = 0;
                    /* try { // try from 006f5044 to 006f504f has its CatchHandler @ 006f534c */
              FUN_006eb56c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                           &local_a0);
              if (((ulong)local_a0 & 1) != 0) {
                free(local_90[0]);
              }
              if (((ulong)local_118 & 1) != 0) {
                free(local_108);
              }
              if ((local_130 & 1) != 0) {
                free(local_120);
              }
              if ((local_148[0] & 1) != 0) {
                free(local_138);
              }
              goto LAB_006f5078;
            }
                    /* try { // try from 006f4ebc to 006f4ecf has its CatchHandler @ 006f5418 */
            FUN_00714534(local_148,"Unknown enumeration value of \"",&local_100);
                    /* try { // try from 006f4ed0 to 006f4edf has its CatchHandler @ 006f5400 */
            puVar10 = (ulong *)FUN_00713bdc(local_148,"\" for field \"");
            local_120 = (void *)puVar10[2];
            uStack_128 = puVar10[1];
            local_130 = *puVar10;
            puVar10[1] = 0;
            puVar10[2] = 0;
            *puVar10 = 0;
                    /* try { // try from 006f4efc to 006f4f07 has its CatchHandler @ 006f53f0 */
            FUN_00696434(&local_118,&local_130,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 006f4f08 to 006f4f17 has its CatchHandler @ 006f53c0 */
            puVar11 = (undefined8 *)FUN_00713bdc(&local_118,&DAT_001f097e);
            local_90[0] = (code *)puVar11[2];
            puStack_98 = (ulong *)puVar11[1];
            local_a0 = (code **)*puVar11;
            puVar11[1] = 0;
            puVar11[2] = 0;
            *puVar11 = 0;
                    /* try { // try from 006f4f34 to 006f4f3f has its CatchHandler @ 006f5384 */
            FUN_006ef984(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                         &local_a0);
            if (((ulong)local_a0 & 1) != 0) {
              free(local_90[0]);
            }
            if (((ulong)local_118 & 1) != 0) {
              free(local_108);
            }
            if ((local_130 & 1) != 0) {
              free(local_120);
            }
            if ((local_148[0] & 1) != 0) {
              free(local_138);
            }
          }
          else if (((*(byte *)(param_4 + 1) ^ 0xff) & 0x60) == 0) {
            FUN_00682274(param_3,param_2,param_4);
          }
          else {
                    /* try { // try from 006f5118 to 006f5127 has its CatchHandler @ 006f54a4 */
            FUN_00681d30(param_3,param_2,param_4,local_150 & 0xffffffff);
          }
          bVar4 = true;
          param_4 = 1;
        }
        else {
          if (((*(byte *)(param_4 + 1) ^ 0xff) & 0x60) == 0) {
            FUN_006820e4(param_3,param_2,param_4);
          }
          else {
            FUN_00681adc(param_3,param_2,param_4);
          }
          bVar4 = false;
        }
        uVar16 = (uint)param_4;
      }
    }
    else {
      puVar10 = (ulong *)strlen("-");
      if ((ulong *)0xfffffffffffffff7 < puVar10) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 006f5294 to 006f529b has its CatchHandler @ 006f5474 */
                    /* WARNING: Subroutine does not return */
          FUN_002fb400(&local_a0);
        }
        goto LAB_006f54d0;
      }
      if (puVar10 < (ulong *)0x17) {
        pcVar17 = (code *)((ulong)&local_a0 | 1);
        local_a0 = (code **)CONCAT71(local_a0._1_7_,(char)((int)puVar10 << 1));
        if (puVar10 != (ulong *)0x0) goto LAB_006f4c98;
      }
      else {
        uVar7 = ((ulong)puVar10 & 0xfffffffffffffff8) + 8;
        if (((ulong)puVar10 | 7) != 0x17) {
          uVar7 = (ulong)puVar10 | 7;
        }
                    /* try { // try from 006f4c80 to 006f4c87 has its CatchHandler @ 006f5474 */
        pcVar17 = (code *)FUN_00759c3c(uVar7 + 1);
        local_a0 = (code **)(uVar7 + 1 | 1);
        puStack_98 = puVar10;
        local_90[0] = pcVar17;
LAB_006f4c98:
        memcpy(pcVar17,&DAT_001eb31a,(size_t)puVar10);
      }
      __ptr = local_90[0];
      ppcVar5 = local_a0;
      pcVar17[(long)puVar10] = (code)0x0;
      bVar2 = *(byte *)(param_1 + 0x30);
      puVar14 = (ulong *)(ulong)(bVar2 >> 1);
      puVar10 = puVar14;
      if ((bVar2 & 1) != 0) {
        puVar10 = *(ulong **)(param_1 + 0x38);
      }
      puVar1 = (ulong *)((ulong)local_a0 >> 1 & 0x7f);
      if (((ulong)local_a0 & 1) != 0) {
        puVar1 = puStack_98;
      }
      if (puVar10 == puVar1) {
        pcVar17 = local_90[0];
        if (((ulong)local_a0 & 1) == 0) {
          pcVar17 = (code *)((long)&local_a0 + 1);
        }
        if ((bVar2 & 1) == 0) {
          if (1 < bVar2) {
            pcVar15 = (code *)(param_1 + 0x31);
            do {
              if (*pcVar15 != *pcVar17) goto LAB_006f4d4c;
              puVar14 = (ulong *)((long)puVar14 + -1);
              pcVar17 = pcVar17 + 1;
              pcVar15 = pcVar15 + 1;
            } while (puVar14 != (ulong *)0x0);
          }
        }
        else {
          iVar6 = memcmp(*(void **)(param_1 + 0x40),pcVar17,(size_t)*(ulong **)(param_1 + 0x38));
          if (iVar6 != 0) goto LAB_006f4d4c;
        }
        if (((ulong)ppcVar5 & 1) != 0) {
          free(__ptr);
        }
LAB_006f4db8:
                    /* try { // try from 006f4db8 to 006f4dc7 has its CatchHandler @ 006f54a4 */
        uVar7 = FUN_006f6c4c(param_1,&local_150,0x7fffffff);
        if ((uVar7 & 1) != 0) {
          local_a0 = local_90;
                    /* try { // try from 006f4ddc to 006f4df7 has its CatchHandler @ 006f546c */
          lVar9 = FUN_006779b4(local_150,local_90);
          puStack_98 = (ulong *)(lVar9 - (long)local_90);
          FUN_006ec2b0(&local_118,&local_a0);
          if (((ulong)local_100 & 1) != 0) {
            free(local_f0);
          }
          uStack_f8 = uStack_110;
          local_100 = local_118;
          local_f0 = local_108;
                    /* try { // try from 006f4e1c to 006f4ea3 has its CatchHandler @ 006f54a4 */
          lVar9 = FUN_0068cf8c(uVar8,local_150 & 0xffffffff);
          goto LAB_006f4e24;
        }
        goto LAB_006f5078;
      }
LAB_006f4d4c:
      iVar6 = *(int *)(param_1 + 0x28);
      if (((ulong)ppcVar5 & 1) != 0) {
        free(local_90[0]);
      }
      if (iVar6 == 3) goto LAB_006f4db8;
                    /* try { // try from 006f4d64 to 006f4d77 has its CatchHandler @ 006f5438 */
      FUN_00714534(&local_a0,"Expected integer or identifier, got: ",(byte *)(param_1 + 0x30));
                    /* try { // try from 006f4d7c to 006f4d87 has its CatchHandler @ 006f5420 */
      FUN_006eb56c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_a0
                  );
      if (((ulong)local_a0 & 1) == 0) goto LAB_006f5078;
      free(local_90[0]);
      uVar16 = 0;
      bVar4 = true;
    }
    if (((ulong)local_100 & 1) != 0) {
      free(local_f0);
    }
    if (bVar4) {
      if (*(long *)(lVar3 + 0x28) == local_68) goto LAB_006f522c;
      goto LAB_006f54d0;
    }
  }
LAB_006f5200:
  uVar16 = 1;
  if (*(long *)(lVar3 + 0x28) == local_68) {
LAB_006f522c:
    return uVar16 & 1;
  }
LAB_006f54d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006f54d4  FUN_006f54d4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_006f54d4(long param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *__s2;
  byte local_a8 [16];
  void *local_98;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  bVar3 = *(byte *)(param_1 + 0x30);
  bVar4 = *param_2;
  uVar10 = (ulong)(bVar3 >> 1);
  sVar1 = uVar10;
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 0x38);
  }
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 8);
  }
  if (sVar1 == sVar2) {
    __s2 = *(byte **)(param_2 + 0x10);
    if ((bVar4 & 1) == 0) {
      __s2 = param_2 + 1;
    }
    if ((bVar3 & 1) == 0) {
      if (1 < bVar3) {
        pbVar11 = (byte *)(param_1 + 0x31);
        do {
          if (*pbVar11 != *__s2) goto LAB_006f557c;
          uVar10 = uVar10 - 1;
          __s2 = __s2 + 1;
          pbVar11 = pbVar11 + 1;
        } while (uVar10 != 0);
      }
    }
    else {
      iVar7 = memcmp(*(void **)(param_1 + 0x40),__s2,*(size_t *)(param_1 + 0x38));
      if (iVar7 != 0) goto LAB_006f557c;
    }
    FUN_006dd460(param_1 + 0x28);
    uVar9 = 1;
    if (*(long *)(lVar5 + 0x28) != local_38) goto LAB_006f5780;
  }
  else {
LAB_006f557c:
    FUN_00714534(local_a8,"Expected \"",param_2);
                    /* try { // try from 006f558c to 006f559b has its CatchHandler @ 006f575c */
    puVar8 = (ulong *)FUN_00713bdc(local_a8,"\", found \"");
    local_80 = (void *)puVar8[2];
    uStack_88 = puVar8[1];
    local_90 = *puVar8;
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
    uVar10 = (ulong)(*(byte *)(param_1 + 0x30) >> 1);
    lVar6 = param_1 + 0x31;
    if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
      uVar10 = *(ulong *)(param_1 + 0x38);
      lVar6 = *(long *)(param_1 + 0x40);
    }
                    /* try { // try from 006f55d0 to 006f55d7 has its CatchHandler @ 006f573c */
    puVar8 = (ulong *)FUN_0071302c(&local_90,lVar6,uVar10);
    local_60 = (void *)puVar8[2];
    uStack_68 = puVar8[1];
    local_70 = *puVar8;
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
                    /* try { // try from 006f55f0 to 006f55ff has its CatchHandler @ 006f571c */
    puVar8 = (ulong *)FUN_00713bdc(&local_70,&DAT_001f097e);
    local_40 = (void *)puVar8[2];
    uStack_48 = puVar8[1];
    local_50 = *puVar8;
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
                    /* try { // try from 006f561c to 006f5627 has its CatchHandler @ 006f56cc */
    FUN_006eb56c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_50);
    if ((local_50 & 1) != 0) {
      free(local_40);
    }
    if ((local_70 & 1) != 0) {
      free(local_60);
    }
    if ((local_90 & 1) != 0) {
      free(local_80);
    }
    if ((local_a8[0] & 1) != 0) {
      free(local_98);
    }
    uVar9 = 0;
    if (*(long *)(lVar5 + 0x28) != local_38) {
LAB_006f5780:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar9);
    }
  }
  return;
}


// ===== 006f5784  FUN_006f5784 =====

void FUN_006f5784(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != 2) {
    if ((iVar1 != 3) ||
       ((*(char *)(param_1 + 0xe8) == '\0' && *(char *)(param_1 + 0xe5) == '\0') &&
        *(char *)(param_1 + 0xe6) == '\0')) {
      FUN_00714534(local_40,"Expected identifier, got: ",param_1 + 0x30);
                    /* try { // try from 006f5828 to 006f5833 has its CatchHandler @ 006f5868 */
      FUN_006eb56c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),local_40)
      ;
      if ((local_40[0] & 1) != 0) {
        free(local_30);
      }
      uVar3 = 0;
      if (*(long *)(lVar2 + 0x28) == local_28) {
        return;
      }
      goto LAB_006f5894;
    }
  }
  FUN_007139b0(param_2,param_1 + 0x30);
  FUN_006dd460((int *)(param_1 + 0x28));
  uVar3 = 1;
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
LAB_006f5894:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 006f5898  FUN_006f5898 =====

void FUN_006f5898(long param_1,undefined8 param_2)

{
  size_t sVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  size_t sVar7;
  undefined *puVar8;
  ulong uVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 local_60;
  size_t local_58;
  char *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  sVar7 = strlen("<");
  if (0xfffffffffffffff7 < sVar7) {
LAB_006f5af0:
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_60);
    }
    goto LAB_006f5b44;
  }
  if (sVar7 < 0x17) {
    pcVar11 = (char *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)sVar7 << 1));
    if (sVar7 != 0) goto LAB_006f592c;
  }
  else {
    uVar9 = (sVar7 & 0xfffffffffffffff8) + 8;
    if ((sVar7 | 7) != 0x17) {
      uVar9 = sVar7 | 7;
    }
    pcVar11 = (char *)FUN_00759c3c(uVar9 + 1);
    local_60 = uVar9 + 1 | 1;
    local_58 = sVar7;
    local_50 = pcVar11;
LAB_006f592c:
    memcpy(pcVar11,&DAT_001d348c,sVar7);
  }
  uVar5 = local_60;
  pcVar11[sVar7] = '\0';
  bVar4 = false;
  bVar2 = *(byte *)(param_1 + 0x30);
  uVar9 = (ulong)(bVar2 >> 1);
  sVar7 = uVar9;
  if ((bVar2 & 1) != 0) {
    sVar7 = *(size_t *)(param_1 + 0x38);
  }
  sVar1 = local_60 >> 1 & 0x7f;
  if ((local_60 & 1) != 0) {
    sVar1 = local_58;
  }
  if (sVar7 == sVar1) {
    pcVar11 = local_50;
    if ((local_60 & 1) == 0) {
      pcVar11 = (char *)((long)&local_60 + 1);
    }
    if ((bVar2 & 1) == 0) {
      if (1 < bVar2) {
        pcVar10 = (char *)(param_1 + 0x31);
        do {
          if (*pcVar10 != *pcVar11) goto LAB_006f59c4;
          uVar9 = uVar9 - 1;
          pcVar11 = pcVar11 + 1;
          pcVar10 = pcVar10 + 1;
        } while (uVar9 != 0);
      }
    }
    else {
      iVar6 = memcmp(*(void **)(param_1 + 0x40),pcVar11,*(size_t *)(param_1 + 0x38));
      if (iVar6 != 0) {
LAB_006f59c4:
        bVar4 = false;
        goto joined_r0x006f59dc;
      }
    }
                    /* try { // try from 006f59d0 to 006f59d7 has its CatchHandler @ 006f5b08 */
    FUN_006dd460(param_1 + 0x28);
    bVar4 = true;
  }
joined_r0x006f59dc:
  if ((uVar5 & 1) != 0) {
    free(local_50);
  }
  if (bVar4) {
    puVar8 = &DAT_001c9356;
  }
  else {
    sVar7 = strlen("{");
    if (0xfffffffffffffff7 < sVar7) goto LAB_006f5af0;
    if (sVar7 < 0x17) {
      pcVar11 = (char *)((ulong)&local_60 | 1);
      local_60 = CONCAT71(local_60._1_7_,(char)((int)sVar7 << 1));
      if (sVar7 != 0) goto LAB_006f5a60;
    }
    else {
      uVar9 = (sVar7 & 0xfffffffffffffff8) + 8;
      if ((sVar7 | 7) != 0x17) {
        uVar9 = sVar7 | 7;
      }
      pcVar11 = (char *)FUN_00759c3c(uVar9 + 1);
      local_60 = uVar9 + 1 | 1;
      local_58 = sVar7;
      local_50 = pcVar11;
LAB_006f5a60:
      memcpy(pcVar11,&DAT_001f8d3e,sVar7);
    }
    pcVar11[sVar7] = '\0';
                    /* try { // try from 006f5a78 to 006f5a83 has its CatchHandler @ 006f5b18 */
    uVar9 = FUN_006f54d4(param_1,&local_60);
    if ((local_60 & 1) != 0) {
      free(local_50);
    }
    if ((uVar9 & 1) == 0) {
      sVar7 = 0;
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return;
      }
      goto LAB_006f5b44;
    }
    puVar8 = &DAT_001bb609;
  }
  FUN_0071396c(param_2,puVar8);
  sVar7 = 1;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_006f5b44:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(sVar7);
}


// ===== 006f5b48  FUN_006f5b48 =====

undefined8 FUN_006f5b48(long param_1,undefined8 param_2,undefined8 param_3)

{
  size_t sVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  char *pcVar10;
  ulong uVar11;
  char *pcVar12;
  char *pcVar13;
  ulong local_98;
  size_t local_90;
  char *local_88;
  ulong local_80;
  size_t local_78;
  char *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pcVar13 = (char *)((ulong)&local_80 | 1);
  pcVar12 = (char *)((ulong)&local_98 | 1);
  do {
    sVar6 = strlen(">");
    if (0xfffffffffffffff7 < sVar6) {
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(&local_80);
      }
      goto LAB_006f5ebc;
    }
    if (sVar6 < 0x17) {
      local_80 = CONCAT71(local_80._1_7_,(char)((int)sVar6 << 1));
      pcVar7 = pcVar13;
      if (sVar6 != 0) goto LAB_006f5c08;
    }
    else {
      uVar9 = (sVar6 & 0xfffffffffffffff8) + 8;
      if ((sVar6 | 7) != 0x17) {
        uVar9 = sVar6 | 7;
      }
      pcVar7 = (char *)FUN_00759c3c(uVar9 + 1);
      local_80 = uVar9 + 1 | 1;
      local_78 = sVar6;
      local_70 = pcVar7;
LAB_006f5c08:
      memcpy(pcVar7,&DAT_001c9356,sVar6);
    }
    uVar11 = local_80;
    pcVar7[sVar6] = '\0';
    bVar2 = *(byte *)(param_1 + 0x30);
    uVar9 = (ulong)(bVar2 >> 1);
    sVar6 = uVar9;
    if ((bVar2 & 1) != 0) {
      sVar6 = *(size_t *)(param_1 + 0x38);
    }
    sVar1 = local_80 >> 1 & 0x7f;
    if ((local_80 & 1) != 0) {
      sVar1 = local_78;
    }
    if (sVar6 == sVar1) {
      pcVar7 = pcVar13;
      if ((local_80 & 1) != 0) {
        pcVar7 = local_70;
      }
      if ((bVar2 & 1) == 0) {
        pcVar10 = (char *)(param_1 + 0x31);
        if (1 < bVar2) {
          do {
            if (*pcVar10 != *pcVar7) goto LAB_006f5c94;
            uVar9 = uVar9 - 1;
            pcVar7 = pcVar7 + 1;
            pcVar10 = pcVar10 + 1;
          } while (uVar9 != 0);
        }
      }
      else {
        iVar5 = memcmp(*(void **)(param_1 + 0x40),pcVar7,*(size_t *)(param_1 + 0x38));
        if (iVar5 != 0) goto LAB_006f5c94;
      }
      bVar4 = false;
    }
    else {
LAB_006f5c94:
      sVar6 = strlen("}");
      if (0xfffffffffffffff7 < sVar6) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 006f5e84 to 006f5e8b has its CatchHandler @ 006f5e90 */
                    /* WARNING: Subroutine does not return */
          FUN_002fb400(&local_98);
        }
        goto LAB_006f5ebc;
      }
      if (sVar6 < 0x17) {
        local_98 = CONCAT71(local_98._1_7_,(char)((int)sVar6 << 1));
        pcVar7 = pcVar12;
        if (sVar6 != 0) goto LAB_006f5cf4;
      }
      else {
        uVar9 = (sVar6 & 0xfffffffffffffff8) + 8;
        if ((sVar6 | 7) != 0x17) {
          uVar9 = sVar6 | 7;
        }
                    /* try { // try from 006f5cdc to 006f5ce3 has its CatchHandler @ 006f5e8c */
        pcVar7 = (char *)FUN_00759c3c(uVar9 + 1);
        local_98 = uVar9 + 1 | 1;
        local_90 = sVar6;
        local_88 = pcVar7;
LAB_006f5cf4:
        memcpy(pcVar7,&DAT_001bb609,sVar6);
      }
      uVar9 = local_98;
      pcVar7[sVar6] = '\0';
      bVar2 = *(byte *)(param_1 + 0x30);
      uVar11 = (ulong)(bVar2 >> 1);
      sVar6 = uVar11;
      if ((bVar2 & 1) != 0) {
        sVar6 = *(size_t *)(param_1 + 0x38);
      }
      sVar1 = local_98 >> 1 & 0x7f;
      if ((local_98 & 1) != 0) {
        sVar1 = local_90;
      }
      bVar4 = false;
      if (sVar6 == sVar1) {
        pcVar7 = pcVar12;
        if ((local_98 & 1) != 0) {
          pcVar7 = local_88;
        }
        if ((bVar2 & 1) != 0) {
          iVar5 = memcmp(*(void **)(param_1 + 0x40),pcVar7,*(size_t *)(param_1 + 0x38));
          bVar4 = iVar5 == 0;
          goto LAB_006f5d78;
        }
        pcVar10 = (char *)(param_1 + 0x31);
        if (bVar2 < 2) {
          bVar4 = true;
          goto LAB_006f5d78;
        }
        do {
          uVar11 = uVar11 - 1;
          bVar4 = *pcVar10 != *pcVar7;
          if (bVar4) break;
          pcVar7 = pcVar7 + 1;
          pcVar10 = pcVar10 + 1;
        } while (uVar11 != 0);
      }
      else {
LAB_006f5d78:
        bVar4 = (bool)(bVar4 ^ 1);
      }
      uVar11 = local_80;
      if ((uVar9 & 1) != 0) {
        free(local_88);
        uVar11 = local_80;
      }
    }
    if ((uVar11 & 1) != 0) {
      free(local_70);
    }
    if (!bVar4) {
      if (*(long *)(lVar3 + 0x28) == local_68) {
        uVar8 = FUN_006f54d4(param_1,param_3);
        return uVar8;
      }
      goto LAB_006f5ebc;
    }
    uVar9 = FUN_006efb34(param_1,param_2);
  } while ((uVar9 & 1) != 0);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return 0;
  }
LAB_006f5ebc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006f5ec0  FUN_006f5ec0 =====

undefined4 FUN_006f5ec0(long param_1)

{
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  size_t sVar7;
  ulong uVar8;
  char *pcVar9;
  ulong uVar10;
  undefined4 uVar11;
  char *pcVar12;
  undefined8 local_90;
  size_t local_88;
  char *local_80;
  undefined8 local_78;
  size_t local_70;
  char *local_68;
  ulong local_60;
  undefined8 uStack_58;
  void *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  local_60 = 0;
  uStack_58 = 0;
  local_50 = (void *)0x0;
  sVar7 = strlen("[");
  if (0xfffffffffffffff7 < sVar7) {
    if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 006f66b8 to 006f66bf has its CatchHandler @ 006f67d0 */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_78);
    }
    goto LAB_006f6800;
  }
  if (sVar7 < 0x17) {
    pcVar12 = (char *)((ulong)&local_78 | 1);
    local_78 = CONCAT71(local_78._1_7_,(char)((int)sVar7 << 1));
    if (sVar7 != 0) goto LAB_006f5f58;
  }
  else {
    uVar8 = (sVar7 & 0xfffffffffffffff8) + 8;
    if ((sVar7 | 7) != 0x17) {
      uVar8 = sVar7 | 7;
    }
                    /* try { // try from 006f5f40 to 006f5f47 has its CatchHandler @ 006f67d0 */
    pcVar12 = (char *)FUN_00759c3c(uVar8 + 1);
    local_78 = uVar8 + 1 | 1;
    local_70 = sVar7;
    local_68 = pcVar12;
LAB_006f5f58:
    memcpy(pcVar12,&DAT_001cf3bb,sVar7);
  }
  uVar10 = local_78;
  pcVar12[sVar7] = '\0';
  bVar5 = false;
  bVar2 = *(byte *)(param_1 + 0x30);
  uVar8 = (ulong)(bVar2 >> 1);
  sVar7 = uVar8;
  if ((bVar2 & 1) != 0) {
    sVar7 = *(size_t *)(param_1 + 0x38);
  }
  sVar1 = local_78 >> 1 & 0x7f;
  if ((local_78 & 1) != 0) {
    sVar1 = local_70;
  }
  if (sVar7 == sVar1) {
    pcVar12 = local_68;
    if ((local_78 & 1) == 0) {
      pcVar12 = (char *)((long)&local_78 + 1);
    }
    if ((bVar2 & 1) == 0) {
      if (1 < bVar2) {
        pcVar9 = (char *)(param_1 + 0x31);
        do {
          if (*pcVar9 != *pcVar12) goto LAB_006f5ff0;
          uVar8 = uVar8 - 1;
          pcVar12 = pcVar12 + 1;
          pcVar9 = pcVar9 + 1;
        } while (uVar8 != 0);
      }
    }
    else {
      iVar6 = memcmp(*(void **)(param_1 + 0x40),pcVar12,*(size_t *)(param_1 + 0x38));
      if (iVar6 != 0) {
LAB_006f5ff0:
        bVar5 = false;
        goto joined_r0x006f6008;
      }
    }
                    /* try { // try from 006f5ffc to 006f6003 has its CatchHandler @ 006f6790 */
    FUN_006dd460(param_1 + 0x28);
    bVar5 = true;
  }
joined_r0x006f6008:
  if ((uVar10 & 1) != 0) {
    free(local_68);
  }
  if (bVar5) {
                    /* try { // try from 006f6018 to 006f6087 has its CatchHandler @ 006f67d4 */
    uVar8 = FUN_006f6804(param_1,&local_60);
    if ((uVar8 & 1) != 0) {
      sVar7 = strlen("]");
      if (0xfffffffffffffff7 < sVar7) {
        if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 006f66e8 to 006f66ef has its CatchHandler @ 006f67b0 */
                    /* WARNING: Subroutine does not return */
          FUN_002fb400(&local_78);
        }
        goto LAB_006f6800;
      }
      if (sVar7 < 0x17) {
        pcVar12 = (char *)((ulong)&local_78 | 1);
        local_78 = CONCAT71(local_78._1_7_,(char)((int)sVar7 << 1));
        if (sVar7 != 0) goto LAB_006f60c0;
      }
      else {
        uVar8 = (sVar7 & 0xfffffffffffffff8) + 8;
        if ((sVar7 | 7) != 0x17) {
          uVar8 = sVar7 | 7;
        }
                    /* try { // try from 006f60a8 to 006f60af has its CatchHandler @ 006f67b0 */
        pcVar12 = (char *)FUN_00759c3c(uVar8 + 1);
        local_78 = uVar8 + 1 | 1;
        local_70 = sVar7;
        local_68 = pcVar12;
LAB_006f60c0:
        memcpy(pcVar12,&DAT_001e1051,sVar7);
      }
      pcVar12[sVar7] = '\0';
                    /* try { // try from 006f60d8 to 006f60ff has its CatchHandler @ 006f67b8 */
      FUN_006dc0ac(param_1 + 0x28,1);
      uVar8 = FUN_006f54d4(param_1,&local_78);
      FUN_006dc0ac(param_1 + 0x28,0);
      if ((local_78 & 1) != 0) {
        free(local_68);
      }
      if ((uVar8 & 1) != 0) goto LAB_006f6114;
    }
LAB_006f6438:
    uVar11 = 0;
  }
  else {
    FUN_006dc0ac(param_1 + 0x28,1);
    uVar8 = FUN_006f5784(param_1,&local_60);
    FUN_006dc0ac(param_1 + 0x28,0);
    if ((uVar8 & 1) == 0) goto LAB_006f6438;
LAB_006f6114:
                    /* try { // try from 006f6114 to 006f611b has its CatchHandler @ 006f67d4 */
    FUN_006f2730(param_1);
    sVar7 = strlen(":");
    if (0xfffffffffffffff7 < sVar7) {
      if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 006f66d0 to 006f66d7 has its CatchHandler @ 006f67b4 */
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(&local_78);
      }
      goto LAB_006f6800;
    }
    if (sVar7 < 0x17) {
      pcVar12 = (char *)((ulong)&local_78 | 1);
      local_78 = CONCAT71(local_78._1_7_,(char)((int)sVar7 << 1));
      if (sVar7 != 0) goto LAB_006f6184;
    }
    else {
      uVar8 = (sVar7 & 0xfffffffffffffff8) + 8;
      if ((sVar7 | 7) != 0x17) {
        uVar8 = sVar7 | 7;
      }
                    /* try { // try from 006f616c to 006f6173 has its CatchHandler @ 006f67b4 */
      pcVar12 = (char *)FUN_00759c3c(uVar8 + 1);
      local_78 = uVar8 + 1 | 1;
      local_70 = sVar7;
      local_68 = pcVar12;
LAB_006f6184:
      memcpy(pcVar12,&DAT_001d9efd,sVar7);
    }
    pcVar12[sVar7] = '\0';
                    /* try { // try from 006f619c to 006f61a7 has its CatchHandler @ 006f67ac */
    uVar8 = FUN_006f2894(param_1,&local_78);
    if ((local_78 & 1) != 0) {
      free(local_68);
    }
    if ((uVar8 & 1) == 0) {
      uVar8 = FUN_006f3ee8(param_1);
    }
    else {
                    /* try { // try from 006f61c0 to 006f6207 has its CatchHandler @ 006f67d4 */
      FUN_006f2730(param_1);
      sVar7 = strlen("{");
      if (0xfffffffffffffff7 < sVar7) {
        if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 006f6700 to 006f6707 has its CatchHandler @ 006f67a8 */
                    /* WARNING: Subroutine does not return */
          FUN_002fb400(&local_78);
        }
        goto LAB_006f6800;
      }
      if (sVar7 < 0x17) {
        pcVar12 = (char *)((ulong)&local_78 | 1);
        local_78 = CONCAT71(local_78._1_7_,(char)((int)sVar7 << 1));
        if (sVar7 != 0) goto LAB_006f623c;
      }
      else {
        uVar8 = (sVar7 & 0xfffffffffffffff8) + 8;
        if ((sVar7 | 7) != 0x17) {
          uVar8 = sVar7 | 7;
        }
                    /* try { // try from 006f6224 to 006f622b has its CatchHandler @ 006f67a8 */
        pcVar12 = (char *)FUN_00759c3c(uVar8 + 1);
        local_78 = uVar8 + 1 | 1;
        local_70 = sVar7;
        local_68 = pcVar12;
LAB_006f623c:
        memcpy(pcVar12,&DAT_001f8d3e,sVar7);
      }
      pcVar12[sVar7] = '\0';
      bVar2 = *(byte *)(param_1 + 0x30);
      bVar3 = (byte)local_78;
      uVar8 = (ulong)(bVar2 >> 1);
      sVar7 = uVar8;
      if ((bVar2 & 1) != 0) {
        sVar7 = *(size_t *)(param_1 + 0x38);
      }
      sVar1 = (ulong)((byte)local_78 >> 1);
      if ((local_78 & 1) != 0) {
        sVar1 = local_70;
      }
      if (sVar7 == sVar1) {
        pcVar12 = local_68;
        if ((local_78 & 1) == 0) {
          pcVar12 = (char *)((long)&local_78 + 1);
        }
        if ((bVar2 & 1) == 0) {
          if (1 < bVar2) {
            pcVar9 = (char *)(param_1 + 0x31);
            do {
              if (*pcVar9 != *pcVar12) goto LAB_006f62d0;
              uVar8 = uVar8 - 1;
              pcVar12 = pcVar12 + 1;
              pcVar9 = pcVar9 + 1;
            } while (uVar8 != 0);
          }
        }
        else {
          iVar6 = memcmp(*(void **)(param_1 + 0x40),pcVar12,*(size_t *)(param_1 + 0x38));
          if (iVar6 != 0) goto LAB_006f62d0;
        }
        bVar5 = false;
      }
      else {
LAB_006f62d0:
        sVar7 = strlen("<");
        if (0xfffffffffffffff7 < sVar7) {
          if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 006f6730 to 006f6737 has its CatchHandler @ 006f6784 */
                    /* WARNING: Subroutine does not return */
            FUN_002fb400(&local_90);
          }
          goto LAB_006f6800;
        }
        if (sVar7 < 0x17) {
          pcVar12 = (char *)((ulong)&local_90 | 1);
          local_90 = CONCAT71(local_90._1_7_,(char)((int)sVar7 << 1));
          if (sVar7 != 0) goto LAB_006f6338;
        }
        else {
          uVar8 = (sVar7 & 0xfffffffffffffff8) + 8;
          if ((sVar7 | 7) != 0x17) {
            uVar8 = sVar7 | 7;
          }
                    /* try { // try from 006f6320 to 006f6327 has its CatchHandler @ 006f6784 */
          pcVar12 = (char *)FUN_00759c3c(uVar8 + 1);
          local_90 = uVar8 + 1 | 1;
          local_88 = sVar7;
          local_80 = pcVar12;
LAB_006f6338:
          memcpy(pcVar12,&DAT_001d348c,sVar7);
        }
        uVar8 = local_90;
        pcVar12[sVar7] = '\0';
        bVar2 = *(byte *)(param_1 + 0x30);
        uVar10 = (ulong)(bVar2 >> 1);
        sVar7 = uVar10;
        if ((bVar2 & 1) != 0) {
          sVar7 = *(size_t *)(param_1 + 0x38);
        }
        sVar1 = local_90 >> 1 & 0x7f;
        if ((local_90 & 1) != 0) {
          sVar1 = local_88;
        }
        bVar5 = false;
        if (sVar7 == sVar1) {
          pcVar12 = local_80;
          if ((local_90 & 1) == 0) {
            pcVar12 = (char *)((long)&local_90 + 1);
          }
          if ((bVar2 & 1) != 0) {
            iVar6 = memcmp(*(void **)(param_1 + 0x40),pcVar12,*(size_t *)(param_1 + 0x38));
            bVar5 = iVar6 == 0;
            goto LAB_006f63c0;
          }
          if (bVar2 < 2) {
            bVar5 = true;
            goto LAB_006f63c0;
          }
          pcVar9 = (char *)(param_1 + 0x31);
          do {
            uVar10 = uVar10 - 1;
            bVar5 = *pcVar9 != *pcVar12;
            if (bVar5) break;
            pcVar12 = pcVar12 + 1;
            pcVar9 = pcVar9 + 1;
          } while (uVar10 != 0);
        }
        else {
LAB_006f63c0:
          bVar5 = (bool)(bVar5 ^ 1);
        }
        if ((uVar8 & 1) != 0) {
          free(local_80);
        }
        bVar3 = (byte)local_78;
      }
      if ((bVar3 & 1) != 0) {
        free(local_68);
      }
      if (bVar5) {
                    /* try { // try from 006f63e8 to 006f63fb has its CatchHandler @ 006f67d4 */
        uVar8 = FUN_006f30e8(param_1);
      }
      else {
        uVar8 = FUN_006f3ee8(param_1);
      }
    }
    if ((uVar8 & 1) == 0) goto LAB_006f6438;
    sVar7 = strlen(";");
    if (0xfffffffffffffff7 < sVar7) {
      if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 006f6718 to 006f671f has its CatchHandler @ 006f67a4 */
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(&local_78);
      }
      goto LAB_006f6800;
    }
    if (sVar7 < 0x17) {
      pcVar12 = (char *)((ulong)&local_78 | 1);
      local_78 = CONCAT71(local_78._1_7_,(char)((int)sVar7 << 1));
      if (sVar7 != 0) goto LAB_006f64a8;
    }
    else {
      uVar8 = (sVar7 & 0xfffffffffffffff8) + 8;
      if ((sVar7 | 7) != 0x17) {
        uVar8 = sVar7 | 7;
      }
                    /* try { // try from 006f6490 to 006f6497 has its CatchHandler @ 006f67a4 */
      pcVar12 = (char *)FUN_00759c3c(uVar8 + 1);
      local_78 = uVar8 + 1 | 1;
      local_70 = sVar7;
      local_68 = pcVar12;
LAB_006f64a8:
      memcpy(pcVar12,&DAT_001d3496,sVar7);
    }
    pcVar12[sVar7] = '\0';
    bVar2 = *(byte *)(param_1 + 0x30);
    bVar3 = (byte)local_78;
    uVar8 = (ulong)(bVar2 >> 1);
    sVar7 = uVar8;
    if ((bVar2 & 1) != 0) {
      sVar7 = *(size_t *)(param_1 + 0x38);
    }
    sVar1 = (ulong)((byte)local_78 >> 1);
    if ((local_78 & 1) != 0) {
      sVar1 = local_70;
    }
    if (sVar7 == sVar1) {
      pcVar12 = local_68;
      if ((local_78 & 1) == 0) {
        pcVar12 = (char *)((long)&local_78 + 1);
      }
      if ((bVar2 & 1) == 0) {
        if (1 < bVar2) {
          pcVar9 = (char *)(param_1 + 0x31);
          do {
            if (*pcVar9 != *pcVar12) goto LAB_006f653c;
            uVar8 = uVar8 - 1;
            pcVar12 = pcVar12 + 1;
            pcVar9 = pcVar9 + 1;
          } while (uVar8 != 0);
        }
      }
      else {
        iVar6 = memcmp(*(void **)(param_1 + 0x40),pcVar12,*(size_t *)(param_1 + 0x38));
        if (iVar6 != 0) goto LAB_006f653c;
      }
                    /* try { // try from 006f662c to 006f6633 has its CatchHandler @ 006f6764 */
      FUN_006dd460(param_1 + 0x28);
    }
    else {
LAB_006f653c:
      sVar7 = strlen(",");
      if (0xfffffffffffffff7 < sVar7) {
        if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 006f6748 to 006f674f has its CatchHandler @ 006f6770 */
                    /* WARNING: Subroutine does not return */
          FUN_002fb400(&local_90);
        }
        goto LAB_006f6800;
      }
      if (sVar7 < 0x17) {
        pcVar12 = (char *)((ulong)&local_90 | 1);
        local_90 = CONCAT71(local_90._1_7_,(char)((int)sVar7 << 1));
        if (sVar7 != 0) goto LAB_006f65a4;
      }
      else {
        uVar8 = (sVar7 & 0xfffffffffffffff8) + 8;
        if ((sVar7 | 7) != 0x17) {
          uVar8 = sVar7 | 7;
        }
                    /* try { // try from 006f658c to 006f6593 has its CatchHandler @ 006f6770 */
        pcVar12 = (char *)FUN_00759c3c(uVar8 + 1);
        local_90 = uVar8 + 1 | 1;
        local_88 = sVar7;
        local_80 = pcVar12;
LAB_006f65a4:
        memcpy(pcVar12,&DAT_001ce2ff,sVar7);
      }
      uVar10 = local_90;
      pcVar12[sVar7] = '\0';
      bVar2 = *(byte *)(param_1 + 0x30);
      uVar8 = (ulong)(bVar2 >> 1);
      sVar7 = uVar8;
      if ((bVar2 & 1) != 0) {
        sVar7 = *(size_t *)(param_1 + 0x38);
      }
      sVar1 = local_90 >> 1 & 0x7f;
      if ((local_90 & 1) != 0) {
        sVar1 = local_88;
      }
      if (sVar7 == sVar1) {
        pcVar12 = local_80;
        if ((local_90 & 1) == 0) {
          pcVar12 = (char *)((long)&local_90 + 1);
        }
        if ((bVar2 & 1) == 0) {
          if (1 < bVar2) {
            pcVar9 = (char *)(param_1 + 0x31);
            do {
              if (*pcVar9 != *pcVar12) goto LAB_006f664c;
              uVar8 = uVar8 - 1;
              pcVar12 = pcVar12 + 1;
              pcVar9 = pcVar9 + 1;
            } while (uVar8 != 0);
          }
        }
        else {
          iVar6 = memcmp(*(void **)(param_1 + 0x40),pcVar12,*(size_t *)(param_1 + 0x38));
          if (iVar6 != 0) goto LAB_006f664c;
        }
                    /* try { // try from 006f6644 to 006f664b has its CatchHandler @ 006f6750 */
        FUN_006dd460(param_1 + 0x28);
      }
LAB_006f664c:
      if ((uVar10 & 1) != 0) {
        free(local_80);
      }
      bVar3 = (byte)local_78;
    }
    if ((bVar3 & 1) != 0) {
      free(local_68);
    }
    uVar11 = 1;
  }
  if ((local_60 & 1) != 0) {
    free(local_50);
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return uVar11;
  }
LAB_006f6800:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006f6804  FUN_006f6804 =====

void FUN_006f6804(long param_1,undefined8 param_2)

{
  size_t sVar1;
  byte bVar2;
  long lVar3;
  void *pvVar4;
  bool bVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  size_t sVar9;
  char *pcVar10;
  undefined *puVar11;
  char *pcVar12;
  char *pcVar13;
  ulong local_98;
  size_t local_90;
  char *local_88;
  ulong local_80;
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar8 = FUN_006f5784();
  if ((uVar8 & 1) != 0) {
    pcVar13 = (char *)((ulong)&local_98 | 1);
    do {
      local_80 = 0;
      local_78 = 0;
      local_70 = (void *)0x0;
      sVar9 = strlen(".");
      if (0xfffffffffffffff7 < sVar9) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 006f6bbc to 006f6bc3 has its CatchHandler @ 006f6c04 */
                    /* WARNING: Subroutine does not return */
          FUN_002fb400(&local_98);
        }
        goto LAB_006f6c30;
      }
      if (sVar9 < 0x17) {
        local_98 = CONCAT71(local_98._1_7_,(char)((int)sVar9 << 1));
        pcVar10 = pcVar13;
        if (sVar9 != 0) goto LAB_006f68d8;
      }
      else {
        uVar8 = (sVar9 & 0xfffffffffffffff8) + 8;
        if ((sVar9 | 7) != 0x17) {
          uVar8 = sVar9 | 7;
        }
                    /* try { // try from 006f68c0 to 006f68c7 has its CatchHandler @ 006f6bfc */
        pcVar10 = (char *)FUN_00759c3c(uVar8 + 1);
        local_98 = uVar8 + 1 | 1;
        local_90 = sVar9;
        local_88 = pcVar10;
LAB_006f68d8:
        memcpy(pcVar10,&DAT_001c773b,sVar9);
      }
      uVar6 = local_98;
      pcVar10[sVar9] = '\0';
      bVar5 = false;
      bVar2 = *(byte *)(param_1 + 0x30);
      uVar8 = (ulong)(bVar2 >> 1);
      sVar9 = uVar8;
      if ((bVar2 & 1) != 0) {
        sVar9 = *(size_t *)(param_1 + 0x38);
      }
      sVar1 = local_98 >> 1 & 0x7f;
      if ((local_98 & 1) != 0) {
        sVar1 = local_90;
      }
      if (sVar9 == sVar1) {
        pcVar10 = pcVar13;
        if ((local_98 & 1) != 0) {
          pcVar10 = local_88;
        }
        if ((bVar2 & 1) == 0) {
          pcVar12 = (char *)(param_1 + 0x31);
          if (1 < bVar2) {
            do {
              if (*pcVar12 != *pcVar10) goto LAB_006f6968;
              uVar8 = uVar8 - 1;
              pcVar10 = pcVar10 + 1;
              pcVar12 = pcVar12 + 1;
            } while (uVar8 != 0);
          }
        }
        else {
          iVar7 = memcmp(*(void **)(param_1 + 0x40),pcVar10,*(size_t *)(param_1 + 0x38));
          if (iVar7 != 0) {
LAB_006f6968:
            bVar5 = false;
            goto joined_r0x006f6980;
          }
        }
                    /* try { // try from 006f6974 to 006f697b has its CatchHandler @ 006f6be4 */
        FUN_006dd460(param_1 + 0x28);
        bVar5 = true;
      }
joined_r0x006f6980:
      if ((uVar6 & 1) != 0) {
        free(local_88);
      }
      puVar11 = &DAT_001c773b;
      if (bVar5) {
LAB_006f6ab0:
                    /* try { // try from 006f6ab0 to 006f6ab7 has its CatchHandler @ 006f6c00 */
        FUN_0071396c(&local_80,puVar11);
        local_98 = 0;
        local_90 = 0;
        local_88 = (char *)0x0;
                    /* try { // try from 006f6ac0 to 006f6b0f has its CatchHandler @ 006f6c34 */
        uVar8 = FUN_006f5784(param_1,&local_98);
        if ((uVar8 & 1) == 0) {
          iVar7 = 1;
        }
        else {
          uVar8 = local_80 >> 1 & 0x7f;
          pvVar4 = (void *)((ulong)&local_80 | 1);
          if ((local_80 & 1) != 0) {
            uVar8 = local_78;
            pvVar4 = local_70;
          }
          FUN_0071302c(param_2,pvVar4,uVar8);
          sVar9 = local_98 >> 1 & 0x7f;
          pcVar10 = pcVar13;
          if ((local_98 & 1) != 0) {
            sVar9 = local_90;
            pcVar10 = local_88;
          }
          FUN_0071302c(param_2,pcVar10,sVar9);
          iVar7 = 0;
        }
        if ((local_98 & 1) != 0) {
          free(local_88);
        }
      }
      else {
        sVar9 = strlen("/");
        if (0xfffffffffffffff7 < sVar9) {
          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 006f6bd4 to 006f6bdb has its CatchHandler @ 006f6bf8 */
                    /* WARNING: Subroutine does not return */
            FUN_002fb400(&local_98);
          }
          goto LAB_006f6c30;
        }
        if (sVar9 < 0x17) {
          local_98 = CONCAT71(local_98._1_7_,(char)((int)sVar9 << 1));
          pcVar10 = pcVar13;
          if (sVar9 != 0) goto LAB_006f69f4;
        }
        else {
          uVar8 = (sVar9 & 0xfffffffffffffff8) + 8;
          if ((sVar9 | 7) != 0x17) {
            uVar8 = sVar9 | 7;
          }
                    /* try { // try from 006f69dc to 006f69e3 has its CatchHandler @ 006f6be0 */
          pcVar10 = (char *)FUN_00759c3c(uVar8 + 1);
          local_98 = uVar8 + 1 | 1;
          local_90 = sVar9;
          local_88 = pcVar10;
LAB_006f69f4:
          memcpy(pcVar10,&DAT_001c55aa,sVar9);
        }
        uVar6 = local_98;
        pcVar10[sVar9] = '\0';
        bVar5 = false;
        bVar2 = *(byte *)(param_1 + 0x30);
        uVar8 = (ulong)(bVar2 >> 1);
        sVar9 = uVar8;
        if ((bVar2 & 1) != 0) {
          sVar9 = *(size_t *)(param_1 + 0x38);
        }
        sVar1 = local_98 >> 1 & 0x7f;
        if ((local_98 & 1) != 0) {
          sVar1 = local_90;
        }
        if (sVar9 == sVar1) {
          pcVar10 = pcVar13;
          if ((local_98 & 1) != 0) {
            pcVar10 = local_88;
          }
          if ((bVar2 & 1) == 0) {
            pcVar12 = (char *)(param_1 + 0x31);
            if (1 < bVar2) {
              do {
                if (*pcVar12 != *pcVar10) goto LAB_006f6a84;
                uVar8 = uVar8 - 1;
                pcVar10 = pcVar10 + 1;
                pcVar12 = pcVar12 + 1;
              } while (uVar8 != 0);
            }
          }
          else {
            iVar7 = memcmp(*(void **)(param_1 + 0x40),pcVar10,*(size_t *)(param_1 + 0x38));
            if (iVar7 != 0) {
LAB_006f6a84:
              bVar5 = false;
              goto joined_r0x006f6a9c;
            }
          }
                    /* try { // try from 006f6a90 to 006f6a97 has its CatchHandler @ 006f6bdc */
          FUN_006dd460(param_1 + 0x28);
          bVar5 = true;
        }
joined_r0x006f6a9c:
        if ((uVar6 & 1) != 0) {
          free(local_88);
        }
        puVar11 = &DAT_001c55aa;
        if (bVar5) goto LAB_006f6ab0;
        iVar7 = 3;
      }
      if ((local_80 & 1) != 0) {
        free(local_70);
      }
    } while (iVar7 == 0);
    if (iVar7 != 1) {
      sVar9 = 1;
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return;
      }
      goto LAB_006f6c30;
    }
  }
  sVar9 = 0;
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
LAB_006f6c30:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(sVar9);
}


// ===== 006f6c4c  FUN_006f6c4c =====

uint FUN_006f6c4c(long param_1,ulong *param_2,long param_3)

{
  size_t sVar1;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  undefined8 local_70;
  size_t local_68;
  char *local_60;
  long local_58;
  
  lVar8 = tpidr_el0;
  local_58 = *(long *)(lVar8 + 0x28);
  sVar6 = strlen("-");
  if (0xfffffffffffffff7 < sVar6) {
    if (*(long *)(lVar8 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_70);
    }
    goto LAB_006f6e5c;
  }
  if (sVar6 < 0x17) {
    pcVar11 = (char *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)sVar6 << 1));
    if (sVar6 != 0) goto LAB_006f6ce8;
  }
  else {
    uVar7 = (sVar6 & 0xfffffffffffffff8) + 8;
    if ((sVar6 | 7) != 0x17) {
      uVar7 = sVar6 | 7;
    }
    pcVar11 = (char *)FUN_00759c3c(uVar7 + 1);
    local_70 = uVar7 + 1 | 1;
    local_68 = sVar6;
    local_60 = pcVar11;
LAB_006f6ce8:
    memcpy(pcVar11,&DAT_001eb31a,sVar6);
  }
  uVar3 = local_70;
  pcVar11[sVar6] = '\0';
  uVar10 = 0;
  bVar2 = *(byte *)(param_1 + 0x30);
  uVar7 = (ulong)(bVar2 >> 1);
  sVar6 = uVar7;
  if ((bVar2 & 1) != 0) {
    sVar6 = *(size_t *)(param_1 + 0x38);
  }
  sVar1 = local_70 >> 1 & 0x7f;
  if ((local_70 & 1) != 0) {
    sVar1 = local_68;
  }
  if (sVar6 == sVar1) {
    pcVar11 = local_60;
    if ((local_70 & 1) == 0) {
      pcVar11 = (char *)((long)&local_70 + 1);
    }
    if ((bVar2 & 1) == 0) {
      if (1 < bVar2) {
        pcVar9 = (char *)(param_1 + 0x31);
        do {
          if (*pcVar9 != *pcVar11) goto LAB_006f6d80;
          uVar7 = uVar7 - 1;
          pcVar11 = pcVar11 + 1;
          pcVar9 = pcVar9 + 1;
        } while (uVar7 != 0);
      }
LAB_006f6db8:
                    /* try { // try from 006f6db8 to 006f6dbf has its CatchHandler @ 006f6e34 */
      FUN_006dd460(param_1 + 0x28);
      uVar10 = 1;
      goto LAB_006f6dc4;
    }
    iVar4 = memcmp(*(void **)(param_1 + 0x40),pcVar11,*(size_t *)(param_1 + 0x38));
    if (iVar4 == 0) goto LAB_006f6db8;
LAB_006f6d80:
    uVar10 = 0;
    if ((uVar3 & 1) != 0) goto LAB_006f6d88;
LAB_006f6dc8:
    uVar5 = FUN_006f6e60(param_1,&local_70,param_3 + (ulong)uVar10);
  }
  else {
LAB_006f6dc4:
    if ((uVar3 & 1) == 0) goto LAB_006f6dc8;
LAB_006f6d88:
    free(local_60);
    uVar5 = FUN_006f6e60(param_1,&local_70,param_3 + (ulong)uVar10);
  }
  if ((uVar5 & 1) == 0) {
    lVar8 = *(long *)(lVar8 + 0x28);
  }
  else {
    uVar7 = -local_70;
    if (uVar10 == 0) {
      uVar7 = local_70;
    }
    *param_2 = uVar7;
    lVar8 = *(long *)(lVar8 + 0x28);
  }
  if (lVar8 == local_58) {
    return uVar5 & 1;
  }
LAB_006f6e5c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006f6e60  FUN_006f6e60 =====

void FUN_006f6e60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  byte local_68 [16];
  void *local_58;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x28) == 3) {
    uVar2 = FUN_006ddc5c(param_1 + 0x30,param_3,param_2);
    if ((uVar2 & 1) != 0) {
      FUN_006dd460((int *)(param_1 + 0x28));
      uVar3 = 1;
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
      goto LAB_006f6fec;
    }
    FUN_00714534(local_68,"Integer out of range (",param_1 + 0x30);
                    /* try { // try from 006f6f14 to 006f6f23 has its CatchHandler @ 006f6fac */
    puVar4 = (ulong *)FUN_00713bdc(local_68,&DAT_001d047f);
    local_40 = (void *)puVar4[2];
    uStack_48 = puVar4[1];
    local_50 = *puVar4;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
                    /* try { // try from 006f6f40 to 006f6f4b has its CatchHandler @ 006f6f94 */
    FUN_006eb56c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_50);
    if ((local_50 & 1) != 0) {
      free(local_40);
    }
    if ((local_68[0] & 1) != 0) goto LAB_006f6f68;
  }
  else {
    FUN_00714534(&local_50,"Expected integer, got: ",param_1 + 0x30);
                    /* try { // try from 006f6ee4 to 006f6eef has its CatchHandler @ 006f6fc0 */
    FUN_006eb56c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_50);
    local_58 = local_40;
    if ((local_50 & 1) != 0) {
LAB_006f6f68:
      free(local_58);
    }
  }
  uVar3 = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_006f6fec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 006f6ff0  FUN_006f6ff0 =====

/* WARNING: Type propagation algorithm not settling */

uint FUN_006f6ff0(long param_1,double *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  size_t sVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  int *piVar14;
  byte *pbVar15;
  ulong *puVar16;
  uint uVar17;
  double dVar18;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  undefined8 uVar19;
  byte bVar26;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  undefined8 uVar27;
  byte bVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  byte local_98 [16];
  void *local_88;
  undefined8 local_80;
  ulong uStack_78;
  byte *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  sVar7 = strlen("-");
  if (0xfffffffffffffff7 < sVar7) {
    if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_80);
    }
    goto LAB_006f76d4;
  }
  if (sVar7 < 0x17) {
    pbVar15 = (byte *)((ulong)&local_80 | 1);
    local_80 = CONCAT71(local_80._1_7_,(char)((int)sVar7 << 1));
    if (sVar7 != 0) goto LAB_006f708c;
  }
  else {
    uVar2 = (sVar7 & 0xfffffffffffffff8) + 8;
    if ((sVar7 | 7) != 0x17) {
      uVar2 = sVar7 | 7;
    }
    pbVar15 = (byte *)FUN_00759c3c(uVar2 + 1);
    local_80 = uVar2 + 1 | 1;
    uStack_78 = sVar7;
    local_70 = pbVar15;
LAB_006f708c:
    memcpy(pbVar15,&DAT_001eb31a,sVar7);
  }
  uVar11 = local_80;
  pbVar15[sVar7] = 0;
  uVar17 = 0;
  puVar16 = (ulong *)(param_1 + 0x30);
  bVar20 = *(byte *)puVar16;
  piVar14 = (int *)(param_1 + 0x28);
  uVar9 = (ulong)(bVar20 >> 1);
  uVar2 = uVar9;
  if ((bVar20 & 1) != 0) {
    uVar2 = *(size_t *)(param_1 + 0x38);
  }
  uVar1 = local_80 >> 1 & 0x7f;
  if ((local_80 & 1) != 0) {
    uVar1 = uStack_78;
  }
  if (uVar2 == uVar1) {
    pbVar15 = local_70;
    if ((local_80 & 1) == 0) {
      pbVar15 = (byte *)((long)&local_80 + 1);
    }
    if ((bVar20 & 1) == 0) {
      if (1 < bVar20) {
        pbVar10 = (byte *)(param_1 + 0x31);
        do {
          if (*pbVar10 != *pbVar15) goto LAB_006f712c;
          uVar9 = uVar9 - 1;
          pbVar15 = pbVar15 + 1;
          pbVar10 = pbVar10 + 1;
        } while (uVar9 != 0);
      }
    }
    else {
      iVar6 = memcmp(*(void **)(param_1 + 0x40),pbVar15,*(size_t *)(param_1 + 0x38));
      if (iVar6 != 0) {
LAB_006f712c:
        uVar17 = 0;
        goto joined_r0x006f7144;
      }
    }
                    /* try { // try from 006f7138 to 006f713f has its CatchHandler @ 006f77f0 */
    FUN_006dd460(piVar14);
    uVar17 = 1;
  }
joined_r0x006f7144:
  if ((uVar11 & 1) != 0) {
    free(local_70);
  }
  iVar6 = *piVar14;
  if (iVar6 == 2) {
    if ((*(byte *)puVar16 & 1) == 0) {
      local_80 = *puVar16;
      uStack_78 = *(ulong *)(param_1 + 0x38);
      local_70 = *(byte **)(param_1 + 0x40);
    }
    else {
      FUN_002fb36c(&local_80,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x38));
    }
    sVar7 = (size_t)((byte)local_80 >> 1);
    uVar2 = uStack_78;
    pbVar15 = local_70;
    if ((local_80 & 1) == 0) {
      uVar2 = sVar7;
      pbVar15 = (byte *)((long)&local_80 + 1);
    }
    if (uVar2 != 0) {
      pbVar10 = pbVar15;
      if (uVar2 < 8) {
LAB_006f7714:
        do {
          if (*pbVar10 - 0x41 < 0x1a) {
            *pbVar10 = *pbVar10 | 0x20;
          }
          pbVar10 = pbVar10 + 1;
        } while (pbVar10 != pbVar15 + uVar2);
      }
      else if (uVar2 < 0x10) {
        uVar11 = 0;
LAB_006f7290:
        uVar9 = uVar2 & 0xfffffffffffffff8;
        pbVar10 = pbVar15 + uVar9;
        lVar12 = uVar11 - uVar9;
        pbVar13 = pbVar15 + uVar11 + 3;
        do {
          uVar19 = *(undefined8 *)(pbVar13 + -3);
          bVar20 = (byte)((ulong)uVar19 >> 8);
          bVar21 = (byte)((ulong)uVar19 >> 0x10);
          bVar22 = (byte)((ulong)uVar19 >> 0x18);
          bVar23 = (byte)((ulong)uVar19 >> 0x20);
          bVar24 = (byte)((ulong)uVar19 >> 0x28);
          bVar25 = (byte)((ulong)uVar19 >> 0x30);
          bVar26 = (byte)((ulong)uVar19 >> 0x38);
          uVar11 = NEON_cmhi(0x1a1a1a1a1a1a1a1a,
                             CONCAT17(bVar26 + 0xbf,
                                      CONCAT16(bVar25 + 0xbf,
                                               CONCAT15(bVar24 + 0xbf,
                                                        CONCAT14(bVar23 + 0xbf,
                                                                 CONCAT13(bVar22 + 0xbf,
                                                                          CONCAT12(bVar21 + 0xbf,
                                                                                   CONCAT11(bVar20 +
                                                                                            0xbf,(
                                                  byte)uVar19 + 0xbf))))))),1);
          if ((uVar11 & 1) != 0) {
            pbVar13[-3] = (byte)uVar19 | 0x20;
          }
          if ((uVar11 & 0x100) != 0) {
            pbVar13[-2] = bVar20 | 0x20;
          }
          if ((uVar11 & 0x10000) != 0) {
            pbVar13[-1] = bVar21 | 0x20;
          }
          if ((uVar11 & 0x1000000) != 0) {
            *pbVar13 = bVar22 | 0x20;
          }
          if ((uVar11 & 0x100000000) != 0) {
            pbVar13[1] = bVar23 | 0x20;
          }
          if ((uVar11 & 0x10000000000) != 0) {
            pbVar13[2] = bVar24 | 0x20;
          }
          if ((uVar11 & 0x1000000000000) != 0) {
            pbVar13[3] = bVar25 | 0x20;
          }
          if ((uVar11 & 0x100000000000000) != 0) {
            pbVar13[4] = bVar26 | 0x20;
          }
          lVar12 = lVar12 + 8;
          pbVar13 = pbVar13 + 8;
        } while (lVar12 != 0);
        if (uVar2 != uVar9) goto LAB_006f7714;
      }
      else {
        uVar11 = uVar2 & 0xfffffffffffffff0;
        pbVar10 = pbVar15 + 7;
        uVar9 = uVar11;
        do {
          uVar27 = *(undefined8 *)(pbVar10 + 1);
          uVar19 = *(undefined8 *)(pbVar10 + -7);
          auVar35[0] = (byte)uVar19 + 0xbf;
          bVar20 = (byte)((ulong)uVar19 >> 8);
          auVar35[1] = bVar20 + 0xbf;
          bVar21 = (byte)((ulong)uVar19 >> 0x10);
          auVar35[2] = bVar21 + 0xbf;
          bVar22 = (byte)((ulong)uVar19 >> 0x18);
          auVar35[3] = bVar22 + 0xbf;
          bVar23 = (byte)((ulong)uVar19 >> 0x20);
          auVar35[4] = bVar23 + 0xbf;
          bVar24 = (byte)((ulong)uVar19 >> 0x28);
          auVar35[5] = bVar24 + 0xbf;
          bVar25 = (byte)((ulong)uVar19 >> 0x30);
          auVar35[6] = bVar25 + 0xbf;
          bVar26 = (byte)((ulong)uVar19 >> 0x38);
          auVar35[7] = bVar26 + 0xbf;
          auVar35[8] = (byte)uVar27 + 0xbf;
          bVar28 = (byte)((ulong)uVar27 >> 8);
          auVar35[9] = bVar28 + 0xbf;
          bVar29 = (byte)((ulong)uVar27 >> 0x10);
          auVar35[10] = bVar29 + 0xbf;
          bVar30 = (byte)((ulong)uVar27 >> 0x18);
          auVar35[0xb] = bVar30 + 0xbf;
          bVar31 = (byte)((ulong)uVar27 >> 0x20);
          auVar35[0xc] = bVar31 + 0xbf;
          bVar32 = (byte)((ulong)uVar27 >> 0x28);
          auVar35[0xd] = bVar32 + 0xbf;
          bVar33 = (byte)((ulong)uVar27 >> 0x30);
          auVar35[0xe] = bVar33 + 0xbf;
          bVar34 = (byte)((ulong)uVar27 >> 0x38);
          auVar35[0xf] = bVar34 + 0xbf;
          auVar36[8] = 0x1a;
          auVar36._0_8_ = 0x1a1a1a1a1a1a1a1a;
          auVar36[9] = 0x1a;
          auVar36[10] = 0x1a;
          auVar36[0xb] = 0x1a;
          auVar36[0xc] = 0x1a;
          auVar36[0xd] = 0x1a;
          auVar36[0xe] = 0x1a;
          auVar36[0xf] = 0x1a;
          auVar36 = NEON_cmhi(auVar36,auVar35,1);
          if ((auVar36 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
            pbVar10[-7] = (byte)uVar19 | 0x20;
          }
          if ((auVar36 & (undefined1  [16])0x100) != (undefined1  [16])0x0) {
            pbVar10[-6] = bVar20 | 0x20;
          }
          if ((auVar36 & (undefined1  [16])0x10000) != (undefined1  [16])0x0) {
            pbVar10[-5] = bVar21 | 0x20;
          }
          if ((auVar36 & (undefined1  [16])0x1000000) != (undefined1  [16])0x0) {
            pbVar10[-4] = bVar22 | 0x20;
          }
          if ((auVar36 & (undefined1  [16])0x100000000) != (undefined1  [16])0x0) {
            pbVar10[-3] = bVar23 | 0x20;
          }
          if ((auVar36 & (undefined1  [16])0x10000000000) != (undefined1  [16])0x0) {
            pbVar10[-2] = bVar24 | 0x20;
          }
          if ((auVar36 & (undefined1  [16])0x1000000000000) != (undefined1  [16])0x0) {
            pbVar10[-1] = bVar25 | 0x20;
          }
          if ((auVar36 & (undefined1  [16])0x100000000000000) != (undefined1  [16])0x0) {
            *pbVar10 = bVar26 | 0x20;
          }
          if ((auVar36 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
            pbVar10[1] = (byte)uVar27 | 0x20;
          }
          if ((auVar36 & (undefined1  [16])0x100) != (undefined1  [16])0x0) {
            pbVar10[2] = bVar28 | 0x20;
          }
          if ((auVar36 & (undefined1  [16])0x10000) != (undefined1  [16])0x0) {
            pbVar10[3] = bVar29 | 0x20;
          }
          if ((auVar36 & (undefined1  [16])0x1000000) != (undefined1  [16])0x0) {
            pbVar10[4] = bVar30 | 0x20;
          }
          if ((auVar36 & (undefined1  [16])0x100000000) != (undefined1  [16])0x0) {
            pbVar10[5] = bVar31 | 0x20;
          }
          if ((auVar36 & (undefined1  [16])0x10000000000) != (undefined1  [16])0x0) {
            pbVar10[6] = bVar32 | 0x20;
          }
          if ((auVar36 & (undefined1  [16])0x1000000000000) != (undefined1  [16])0x0) {
            pbVar10[7] = bVar33 | 0x20;
          }
          if ((auVar36 & (undefined1  [16])0x100000000000000) != (undefined1  [16])0x0) {
            pbVar10[8] = bVar34 | 0x20;
          }
          uVar9 = uVar9 - 0x10;
          pbVar10 = pbVar10 + 0x10;
        } while (uVar9 != 0);
        if (uVar2 != uVar11) {
          if (((uint)uVar2 >> 3 & 1) == 0) {
            pbVar10 = pbVar15 + uVar11;
            goto LAB_006f7714;
          }
          goto LAB_006f7290;
        }
      }
      sVar7 = (size_t)((byte)local_80 >> 1);
    }
    uVar4 = uStack_78;
    uVar2 = local_80 & 1;
    uVar9 = local_80 & 1;
    uVar11 = local_80 & 1;
    uVar1 = local_80 & 1;
    pbVar15 = (byte *)((ulong)&local_80 | 1);
    sVar8 = strlen("inf");
    if (uVar2 != 0) {
      sVar7 = uVar4;
    }
    if (sVar8 != sVar7) {
LAB_006f7604:
      sVar8 = strlen("infinity");
      if (sVar8 == sVar7) {
        if (sVar7 == 0xffffffffffffffff) {
          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 006f7784 to 006f778b has its CatchHandler @ 006f77a8 */
                    /* WARNING: Subroutine does not return */
            FUN_0030b8f4(&local_80);
          }
          goto LAB_006f76d4;
        }
        pbVar10 = pbVar15;
        if (uVar11 != 0) {
          pbVar10 = local_70;
        }
        iVar6 = memcmp(pbVar10,"infinity",sVar7);
        if (iVar6 == 0) goto LAB_006f76d8;
      }
      sVar8 = strlen("nan");
      if (sVar8 == sVar7) {
        if (sVar7 == 0xffffffffffffffff) {
          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 006f779c to 006f77a3 has its CatchHandler @ 006f77a4 */
                    /* WARNING: Subroutine does not return */
            FUN_0030b8f4(&local_80);
          }
          goto LAB_006f76d4;
        }
        if (uVar1 != 0) {
          pbVar15 = local_70;
        }
        iVar6 = memcmp(pbVar15,&DAT_001f2bf6,sVar7);
        if (iVar6 == 0) {
          dVar18 = NAN;
          goto LAB_006f76e4;
        }
      }
                    /* try { // try from 006f767c to 006f768f has its CatchHandler @ 006f77cc */
      FUN_00714534(local_98,"Expected double, got: ",&local_80);
                    /* try { // try from 006f7694 to 006f769f has its CatchHandler @ 006f77b4 */
      FUN_006eb56c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),local_98)
      ;
      if ((local_98[0] & 1) != 0) {
        free(local_88);
      }
      if ((local_80 & 1) != 0) {
        free(local_70);
      }
      uVar5 = 0;
      if (*(long *)(lVar3 + 0x28) == local_68) goto LAB_006f7228;
      goto LAB_006f76d4;
    }
    if (sVar8 == 0xffffffffffffffff) {
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 006f776c to 006f7773 has its CatchHandler @ 006f77b0 */
                    /* WARNING: Subroutine does not return */
        FUN_0030b8f4(&local_80);
      }
      goto LAB_006f76d4;
    }
    pbVar10 = pbVar15;
    if (uVar9 != 0) {
      pbVar10 = local_70;
    }
    iVar6 = memcmp(pbVar10,&DAT_001d3221,sVar8);
    if (iVar6 != 0) goto LAB_006f7604;
LAB_006f76d8:
    dVar18 = INFINITY;
LAB_006f76e4:
    *param_2 = dVar18;
                    /* try { // try from 006f76ec to 006f76f3 has its CatchHandler @ 006f77ac */
    FUN_006dd460(piVar14);
    if ((local_80 & 1) == 0) goto LAB_006f7180;
    free(local_70);
    if (uVar17 != 0) goto LAB_006f71a0;
  }
  else {
    if (iVar6 == 3) {
      uVar5 = FUN_006f7818(param_1,param_2,0xffffffffffffffff);
      if ((uVar17 & uVar5) == 0) goto LAB_006f7218;
    }
    else {
      if (iVar6 != 4) {
        FUN_00714534(&local_80,"Expected double, got: ",puVar16);
                    /* try { // try from 006f71f8 to 006f7203 has its CatchHandler @ 006f77dc */
        FUN_006eb56c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                     &local_80);
        if ((local_80 & 1) != 0) {
          free(local_70);
        }
        uVar5 = 0;
LAB_006f7218:
        if (*(long *)(lVar3 + 0x28) == local_68) goto LAB_006f7228;
        goto LAB_006f76d4;
      }
      dVar18 = (double)FUN_006ddd54(puVar16);
      *param_2 = dVar18;
      FUN_006dd460(piVar14);
LAB_006f7180:
      if (uVar17 == 0) goto LAB_006f71ac;
    }
LAB_006f71a0:
    *param_2 = -*param_2;
  }
LAB_006f71ac:
  uVar5 = 1;
  if (*(long *)(lVar3 + 0x28) == local_68) {
LAB_006f7228:
    return uVar5 & 1;
  }
LAB_006f76d4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006f7818  FUN_006f7818 =====

void FUN_006f7818(long param_1,undefined8 *param_2,undefined8 param_3)

{
  char *pcVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte local_50;
  undefined7 uStack_4f;
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (*(int *)(param_1 + 0x28) == 3) {
    pbVar6 = (byte *)(param_1 + 0x30);
    bVar2 = *pbVar6;
    uVar5 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x38);
    }
    if (1 < uVar5) {
      pcVar1 = (char *)(param_1 + 0x31);
      if ((bVar2 & 1) != 0) {
        pcVar1 = *(char **)(param_1 + 0x40);
      }
      if ((*pcVar1 == '0') && (((pcVar1[1] & 0xdfU) == 0x58 || ((pcVar1[1] & 0xf8U) == 0x30)))) {
        FUN_00714534(&local_50,"Expect a decimal number, got: ",pbVar6);
                    /* try { // try from 006f78cc to 006f78d7 has its CatchHandler @ 006f798c */
        FUN_006eb56c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                     &local_50);
        goto LAB_006f7908;
      }
    }
    uVar5 = FUN_006ddc5c(pbVar6,param_3,&local_50);
    if ((uVar5 & 1) == 0) {
      uVar4 = FUN_006ddd54(pbVar6);
    }
    else {
      uVar4 = NEON_ucvtf(CONCAT71(uStack_4f,local_50));
    }
    *param_2 = uVar4;
    FUN_006dd460((int *)(param_1 + 0x28));
    uVar4 = 1;
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return;
    }
  }
  else {
    FUN_00714534(&local_50,"Expected integer, got: ",param_1 + 0x30);
                    /* try { // try from 006f78fc to 006f7907 has its CatchHandler @ 006f7990 */
    FUN_006eb56c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_50);
LAB_006f7908:
    if ((local_50 & 1) != 0) {
      free(local_40);
    }
    uVar4 = 0;
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 006f79c0  FUN_006f79c0 =====

void FUN_006f79c0(void)

{
  return;
}


// ===== 006f79c4  FUN_006f79c4 =====

void FUN_006f79c4(void)

{
  size_t sVar1;
  size_t sVar2;
  undefined *puVar3;
  uint in_w4;
  long *in_x5;
  long lVar4;
  
  sVar1 = strlen(" ");
  if ((in_w4 & 1) == 0) {
    if ((long)sVar1 < 0) {
      FUN_00676318(sVar1,"string length exceeds max size");
      sVar2 = strlen("{\n");
    }
    else {
      sVar2 = strlen("{\n");
    }
    if ((long)sVar2 < 0) {
      FUN_00676318(sVar2,"string length exceeds max size");
    }
    (**(code **)(*in_x5 + 0x28))(in_x5,&DAT_001bc0af,sVar1);
    if (*(char *)((long)in_x5 + 0x1e) != '\0') {
      *(undefined1 *)((long)in_x5 + 0x1e) = 0;
      (**(code **)(*in_x5 + 0x28))(in_x5,PTR_DAT_007a3760,0);
    }
    lVar4 = *in_x5;
    puVar3 = &DAT_001f90d6;
  }
  else {
    if ((long)sVar1 < 0) {
      FUN_00676318(sVar1,"string length exceeds max size");
      sVar2 = strlen("{ ");
    }
    else {
      sVar2 = strlen("{ ");
    }
    if ((long)sVar2 < 0) {
      FUN_00676318(sVar2,"string length exceeds max size");
    }
    (**(code **)(*in_x5 + 0x28))(in_x5,&DAT_001bc0af,sVar1);
    if (*(char *)((long)in_x5 + 0x1e) != '\0') {
      *(undefined1 *)((long)in_x5 + 0x1e) = 0;
      (**(code **)(*in_x5 + 0x28))(in_x5,PTR_DAT_007a3760,0);
    }
    lVar4 = *in_x5;
    puVar3 = &DAT_001e46a9;
  }
                    /* WARNING: Could not recover jumptable at 0x006f7adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x28))(in_x5,puVar3,sVar2);
  return;
}


// ===== 006f7b50  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 006f7b54  FUN_006f7b54 =====

void FUN_006f7b54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0079b7c0;
  if ((*(byte *)((long)param_1 + 0x1d) & 1) == 0) {
                    /* try { // try from 006f7b88 to 006f7b97 has its CatchHandler @ 006f7ba4 */
    (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],*(undefined4 *)(param_1 + 3));
  }
  free(param_1);
  return;
}


// ===== 006f7ba8  FUN_006f7ba8 =====

void FUN_006f7ba8(long param_1)

{
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return;
}


// ===== 006f7bb8  FUN_006f7bb8 =====

void FUN_006f7bb8(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uStack_59;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(param_1 + 0x20);
  if ((iVar1 == 0) || (iVar1 < *(int *)(param_1 + 0x24))) {
    FUN_00675e64(auStack_58,2,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/text_format.cc"
                 ,0x566);
                    /* try { // try from 006f7c0c to 006f7c1f has its CatchHandler @ 006f7c54 */
    uVar3 = FUN_00675a58(auStack_58," Outdent() without matching Indent().");
                    /* try { // try from 006f7c20 to 006f7c27 has its CatchHandler @ 006f7c50 */
    FUN_00675ac0(&uStack_59,uVar3);
    FUN_00675e7c(auStack_58);
  }
  else {
    *(int *)(param_1 + 0x20) = iVar1 + -1;
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006f7c7c  FUN_006f7c7c =====

long FUN_006f7c7c(long param_1)

{
  return (long)*(int *)(param_1 + 0x20) << 1;
}


// ===== 006f7c88  FUN_006f7c88 =====

void FUN_006f7c88(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x20) < 1) {
    FUN_006f7d70(param_1,param_2,param_3);
    if ((param_3 != 0) && (*(char *)(param_2 + param_3 + -1) == '\n')) {
      *(undefined1 *)(param_1 + 0x1c) = 1;
    }
    return;
  }
  if (param_3 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = 0;
    lVar2 = 0;
    do {
      while (*(char *)(param_2 + lVar2) == '\n') {
        FUN_006f7d70(param_1,param_2 + lVar1,(lVar2 - lVar1) + 1);
        lVar1 = lVar2 + 1;
        *(undefined1 *)(param_1 + 0x1c) = 1;
        lVar2 = lVar1;
        if (lVar1 == param_3) goto LAB_006f7d50;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != param_3);
  }
LAB_006f7d50:
  FUN_006f7d70(param_1,param_2 + lVar1,param_3 - lVar1);
  return;
}


// ===== 006f7d70  FUN_006f7d70 =====

void FUN_006f7d70(long param_1,void *param_2,size_t param_3)

{
  long lVar1;
  byte bVar2;
  void *__dest;
  size_t __n;
  int iVar3;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0x1d) & 1) == 0)) {
    if (*(char *)(param_1 + 0x1c) != '\0') {
      *(undefined1 *)(param_1 + 0x1c) = 0;
      FUN_006f7e98(param_1);
      if ((*(byte *)(param_1 + 0x1d) & 1) != 0) goto LAB_006f7e6c;
    }
    iVar3 = *(int *)(param_1 + 0x18);
    __n = (size_t)iVar3;
    if ((long)__n < (long)param_3) {
      do {
        if (0 < iVar3) {
          memcpy(*(void **)(param_1 + 0x10),param_2,__n);
          param_2 = (void *)((long)param_2 + (long)*(int *)(param_1 + 0x18));
          param_3 = param_3 - (long)*(int *)(param_1 + 0x18);
        }
        local_50 = (void *)0x0;
        bVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x10))
                          (*(long **)(param_1 + 8),&local_50,(int *)(param_1 + 0x18));
        *(byte *)(param_1 + 0x1d) = (bVar2 ^ 0xff) & 1;
        if ((bVar2 & 1) == 0) goto LAB_006f7e6c;
        iVar3 = *(int *)(param_1 + 0x18);
        __n = (size_t)iVar3;
        *(void **)(param_1 + 0x10) = local_50;
        __dest = local_50;
      } while ((long)__n < (long)param_3);
    }
    else {
      __dest = *(void **)(param_1 + 0x10);
    }
    memcpy(__dest,param_2,param_3);
    *(size_t *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_3;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (int)param_3;
  }
LAB_006f7e6c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 006f7e98  FUN_006f7e98 =====

void FUN_006f7e98(long *param_1)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((int)param_1[4] != 0) {
    iVar3 = (**(code **)(*param_1 + 0x20))();
    uVar4 = *(uint *)(param_1 + 3);
    if ((int)uVar4 < iVar3) {
      do {
        if (0 < (int)uVar4) {
          memset((void *)param_1[2],0x20,(ulong)uVar4);
          uVar4 = *(uint *)(param_1 + 3);
        }
        bVar2 = (**(code **)(*(long *)param_1[1] + 0x10))((long *)param_1[1],&local_50,param_1 + 3);
        *(byte *)((long)param_1 + 0x1d) = (bVar2 ^ 0xff) & 1;
        if ((~bVar2 & 1) != 0) goto LAB_006f7f7c;
        iVar3 = iVar3 - uVar4;
        uVar4 = *(uint *)(param_1 + 3);
        param_1[2] = (long)local_50;
      } while ((int)uVar4 < iVar3);
    }
    else {
      local_50 = (void *)param_1[2];
    }
    memset(local_50,0x20,(long)iVar3);
    param_1[2] = param_1[2] + (long)iVar3;
    *(int *)(param_1 + 3) = (int)param_1[3] - iVar3;
  }
LAB_006f7f7c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 006f7fa8  FUN_006f7fa8 =====

void FUN_006f7fa8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 006f7fbc  FUN_006f7fbc =====

void FUN_006f7fbc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 006f7fd0  FUN_006f7fd0 =====

void FUN_006f7fd0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 006f7fe4  FUN_006f7fe4 =====

void FUN_006f7fe4(long *param_1,long *param_2,long param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  int iVar14;
  uint uVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  
  do {
    plVar12 = param_2 + -1;
    plVar13 = param_1;
LAB_006f8034:
    param_1 = plVar13;
    uVar5 = (long)param_2 - (long)param_1 >> 3;
    if (uVar5 - 2 == 0 || (long)uVar5 < 2) {
      if (uVar5 < 2) {
        return;
      }
      if (uVar5 == 2) {
        lVar6 = param_2[-1];
        lVar8 = *param_1;
        if ((*(byte *)(lVar6 + 1) >> 3 & 1) == 0) {
          if ((*(byte *)(lVar8 + 1) >> 3 & 1) != 0) goto LAB_006f8e10;
          iVar10 = (int)((ulong)(lVar6 - *(long *)(*(long *)(lVar6 + 0x20) + 0x28)) >> 3) *
                   0x38e38e39;
          iVar14 = (int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x20) + 0x28)) >> 3) *
                   0x38e38e39;
        }
        else {
          if ((*(byte *)(lVar8 + 1) >> 3 & 1) == 0) {
            return;
          }
          iVar10 = *(int *)(lVar6 + 4);
          iVar14 = *(int *)(lVar8 + 4);
        }
        if (iVar14 <= iVar10) {
          return;
        }
LAB_006f8e10:
        *param_1 = lVar6;
        param_2[-1] = lVar8;
        return;
      }
    }
    else {
      if (uVar5 == 3) {
        FUN_006f9134(param_1,param_1 + 1,param_2 + -1);
        return;
      }
      if (uVar5 == 4) {
        FUN_006f95f8(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
        return;
      }
      if (uVar5 == 5) {
        FUN_006f8f2c(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
        return;
      }
    }
    if ((long)uVar5 < 0x18) {
      plVar13 = param_1 + 1;
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2 || plVar13 == param_2) {
          return;
        }
        break;
      }
      if (param_1 == param_2 || plVar13 == param_2) {
        return;
      }
      lVar6 = 0;
      plVar12 = param_1;
      goto LAB_006f88e8;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar9 = uVar5 - 2 >> 1;
      uVar21 = uVar9;
      goto LAB_006f8a10;
    }
    uVar21 = uVar5 >> 1;
    plVar13 = param_1 + uVar21;
    if (uVar5 < 0x81) {
      FUN_006f9134(plVar13,param_1,plVar12);
      lVar6 = *param_1;
      if ((param_4 & 1) == 0) goto LAB_006f8114;
LAB_006f8178:
      uVar15 = (uint)*(byte *)(lVar6 + 1);
    }
    else {
      FUN_006f9134(param_1,plVar13,plVar12);
      plVar7 = param_1 + 1;
      plVar16 = param_1 + uVar21;
      FUN_006f9134(plVar7,plVar16 + -1,param_2 + -2);
      FUN_006f9134(param_1 + 2,plVar7 + uVar21,param_2 + -3);
      FUN_006f9134(plVar16 + -1,plVar13,plVar7 + uVar21);
      lVar6 = *param_1;
      *param_1 = *plVar16;
      *plVar16 = lVar6;
      lVar6 = *param_1;
      if ((param_4 & 1) != 0) goto LAB_006f8178;
LAB_006f8114:
      lVar8 = param_1[-1];
      bVar1 = *(byte *)(lVar6 + 1);
      uVar15 = (uint)bVar1;
      plVar7 = param_2;
      if ((*(byte *)(lVar8 + 1) >> 3 & 1) != 0) {
        if ((bVar1 >> 3 & 1) == 0) {
LAB_006f84a4:
          lVar8 = *plVar12;
          bVar2 = *(byte *)(lVar8 + 1);
          uVar15 = (uint)bVar2;
          bVar4 = (bVar2 & 8) == 0;
          if (((bVar2 >> 3 & 1) == 0) &&
             (iVar10 = (int)((ulong)(lVar6 - *(long *)(*(long *)(lVar6 + 0x20) + 0x28)) >> 3) *
                       0x38e38e39,
             (int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x20) + 0x28)) >> 3) * 0x38e38e39 <=
             iVar10)) {
            plVar13 = param_1 + 1;
            if (plVar13 < param_2) {
              do {
                lVar19 = *plVar13;
                if (((*(byte *)(lVar19 + 1) >> 3 & 1) != 0) ||
                   (iVar10 < (int)((ulong)(lVar19 - *(long *)(*(long *)(lVar19 + 0x20) + 0x28)) >> 3
                                  ) * 0x38e38e39)) goto LAB_006f860c;
                plVar13 = plVar13 + 1;
                bVar4 = true;
              } while (plVar13 < param_2);
            }
            else {
LAB_006f860c:
              bVar4 = true;
            }
          }
          else {
            plVar13 = param_1 + 1;
            lVar19 = *plVar13;
            if ((*(byte *)(lVar19 + 1) >> 3 & 1) == 0) {
              do {
                if ((int)((ulong)(lVar6 - *(long *)(*(long *)(lVar6 + 0x20) + 0x28)) >> 3) *
                    0x38e38e39 <
                    (int)((ulong)(lVar19 - *(long *)(*(long *)(lVar19 + 0x20) + 0x28)) >> 3) *
                    0x38e38e39) break;
                plVar13 = plVar13 + 1;
                lVar19 = *plVar13;
              } while ((*(byte *)(lVar19 + 1) >> 3 & 1) == 0);
            }
          }
          goto LAB_006f8610;
        }
        iVar10 = *(int *)(lVar6 + 4);
        if (*(int *)(lVar8 + 4) < iVar10) goto LAB_006f8194;
        lVar8 = *plVar12;
        bVar2 = *(byte *)(lVar8 + 1);
        uVar15 = (uint)bVar2;
        bVar4 = (bVar2 & 8) == 0;
        if (((bVar2 >> 3 & 1) == 0) || (plVar13 = param_1, *(int *)(lVar8 + 4) <= iVar10)) {
          plVar13 = param_1 + 1;
          if (plVar13 < param_2) {
            do {
              if (((*(byte *)(*plVar13 + 1) >> 3 & 1) != 0) && (iVar10 < *(int *)(*plVar13 + 4)))
              break;
              plVar13 = plVar13 + 1;
            } while (plVar13 < param_2);
            goto LAB_006f8610;
          }
        }
        else {
          do {
            do {
              plVar13 = plVar13 + 1;
            } while ((*(byte *)(*plVar13 + 1) >> 3 & 1) == 0);
          } while (*(int *)(*plVar13 + 4) <= iVar10);
          bVar4 = false;
LAB_006f8610:
          if (plVar13 < param_2) {
            plVar7 = plVar12;
            if ((bVar1 >> 3 & 1) == 0) {
              while (((uVar15 >> 3 & 1) != 0 ||
                     ((int)((ulong)(lVar6 - *(long *)(*(long *)(lVar6 + 0x20) + 0x28)) >> 3) *
                      0x38e38e39 <
                      (int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x20) + 0x28)) >> 3) *
                      0x38e38e39))) {
                lVar8 = plVar7[-1];
                uVar15 = (uint)*(byte *)(lVar8 + 1);
                plVar7 = plVar7 + -1;
              }
            }
            else if (!bVar4) {
              do {
                if (*(int *)(lVar8 + 4) <= *(int *)(lVar6 + 4)) break;
                plVar7 = plVar7 + -1;
                lVar8 = *plVar7;
              } while ((*(byte *)(lVar8 + 1) >> 3 & 1) != 0);
            }
          }
        }
        if (plVar13 < plVar7) {
          lVar8 = *plVar13;
          lVar19 = *plVar7;
          do {
            *plVar13 = lVar19;
            *plVar7 = lVar8;
            if ((*(byte *)(lVar6 + 1) >> 3 & 1) == 0) {
              plVar13 = plVar13 + 1;
              lVar8 = *plVar13;
              if ((*(byte *)(lVar8 + 1) >> 3 & 1) == 0) {
                do {
                  if ((int)((ulong)(lVar6 - *(long *)(*(long *)(lVar6 + 0x20) + 0x28)) >> 3) *
                      0x38e38e39 <
                      (int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x20) + 0x28)) >> 3) *
                      0x38e38e39) break;
                  plVar13 = plVar13 + 1;
                  lVar8 = *plVar13;
                } while ((*(byte *)(lVar8 + 1) >> 3 & 1) == 0);
                goto LAB_006f86fc;
              }
LAB_006f8700:
              do {
                do {
                  plVar7 = plVar7 + -1;
                  lVar19 = *plVar7;
                } while ((*(byte *)(lVar19 + 1) >> 3 & 1) != 0);
              } while ((int)((ulong)(lVar6 - *(long *)(*(long *)(lVar6 + 0x20) + 0x28)) >> 3) *
                       0x38e38e39 <
                       (int)((ulong)(lVar19 - *(long *)(*(long *)(lVar19 + 0x20) + 0x28)) >> 3) *
                       0x38e38e39);
            }
            else {
              do {
                do {
                  plVar13 = plVar13 + 1;
                  lVar8 = *plVar13;
                } while ((*(byte *)(lVar8 + 1) >> 3 & 1) == 0);
              } while (*(int *)(lVar8 + 4) <= *(int *)(lVar6 + 4));
LAB_006f86fc:
              if ((*(byte *)(lVar6 + 1) >> 3 & 1) == 0) goto LAB_006f8700;
              plVar7 = plVar7 + -1;
              lVar19 = *plVar7;
              if ((*(byte *)(lVar19 + 1) >> 3 & 1) != 0) {
                do {
                  if (*(int *)(lVar19 + 4) <= *(int *)(lVar6 + 4)) break;
                  plVar7 = plVar7 + -1;
                  lVar19 = *plVar7;
                } while ((*(byte *)(lVar19 + 1) >> 3 & 1) != 0);
              }
            }
          } while (plVar13 < plVar7);
        }
        plVar7 = plVar13 + -1;
        if (plVar7 != param_1) {
          *param_1 = *plVar7;
        }
        param_4 = 0;
        *plVar7 = lVar6;
        param_3 = param_3 + -1;
        goto LAB_006f8034;
      }
      if (((bVar1 >> 3 & 1) == 0) &&
         ((int)((ulong)(lVar6 - *(long *)(*(long *)(lVar6 + 0x20) + 0x28)) >> 3) * 0x38e38e39 <=
          (int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x20) + 0x28)) >> 3) * 0x38e38e39))
      goto LAB_006f84a4;
    }
LAB_006f8194:
    param_3 = param_3 + -1;
    plVar7 = param_1;
    if ((uVar15 >> 3 & 1) == 0) {
      do {
        plVar7 = plVar7 + 1;
        lVar8 = *plVar7;
        if ((*(byte *)(lVar8 + 1) >> 3 & 1) != 0) break;
      } while ((int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x20) + 0x28)) >> 3) * 0x38e38e39 <
               (int)((ulong)(lVar6 - *(long *)(*(long *)(lVar6 + 0x20) + 0x28)) >> 3) * 0x38e38e39);
    }
    else {
      do {
        do {
          plVar7 = plVar7 + 1;
          lVar8 = *plVar7;
        } while ((*(byte *)(lVar8 + 1) >> 3 & 1) == 0);
      } while (*(int *)(lVar8 + 4) < *(int *)(lVar6 + 4));
    }
    plVar16 = plVar12;
    if (plVar7 + -1 == param_1) {
      plVar16 = param_2;
      if (plVar7 < param_2) {
        plVar16 = plVar12;
        plVar13 = plVar12;
        if ((uVar15 >> 3 & 1) == 0) {
          do {
            lVar19 = *plVar16;
            if ((*(byte *)(lVar19 + 1) >> 3 & 1) == 0) {
              if ((plVar16 <= plVar7) ||
                 ((int)((ulong)(lVar19 - *(long *)(*(long *)(lVar19 + 0x20) + 0x28)) >> 3) *
                  0x38e38e39 <
                  (int)((ulong)(lVar6 - *(long *)(*(long *)(lVar6 + 0x20) + 0x28)) >> 3) *
                  0x38e38e39)) goto LAB_006f8338;
            }
            else if (plVar16 <= plVar7) goto LAB_006f8338;
            plVar16 = plVar16 + -1;
          } while( true );
        }
        do {
          plVar16 = plVar13;
          if (((*(byte *)(*plVar16 + 1) >> 3 & 1) == 0) || (plVar16 <= plVar7)) break;
          plVar13 = plVar16 + -1;
        } while (*(int *)(lVar6 + 4) <= *(int *)(*plVar16 + 4));
      }
    }
    else if ((uVar15 >> 3 & 1) == 0) {
      while ((lVar19 = *plVar16, (*(byte *)(lVar19 + 1) >> 3 & 1) != 0 ||
             ((int)((ulong)(lVar6 - *(long *)(*(long *)(lVar6 + 0x20) + 0x28)) >> 3) * 0x38e38e39 <=
              (int)((ulong)(lVar19 - *(long *)(*(long *)(lVar19 + 0x20) + 0x28)) >> 3) * 0x38e38e39)
             )) {
        plVar16 = plVar16 + -1;
      }
    }
    else {
      lVar19 = *plVar12;
      if ((*(byte *)(lVar19 + 1) >> 3 & 1) != 0) {
        do {
          if (*(int *)(lVar19 + 4) < *(int *)(lVar6 + 4)) break;
          plVar16 = plVar16 + -1;
          lVar19 = *plVar16;
        } while ((*(byte *)(lVar19 + 1) >> 3 & 1) != 0);
      }
    }
LAB_006f8338:
    plVar13 = plVar7;
    if (plVar7 < plVar16) {
      lVar19 = *plVar16;
      plVar11 = plVar16;
      do {
        *plVar13 = lVar19;
        *plVar11 = lVar8;
        if ((*(byte *)(lVar6 + 1) >> 3 & 1) == 0) {
          do {
            plVar13 = plVar13 + 1;
            lVar8 = *plVar13;
            if ((*(byte *)(lVar8 + 1) >> 3 & 1) != 0) break;
          } while ((int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x20) + 0x28)) >> 3) *
                   0x38e38e39 <
                   (int)((ulong)(lVar6 - *(long *)(*(long *)(lVar6 + 0x20) + 0x28)) >> 3) *
                   0x38e38e39);
        }
        else {
          do {
            do {
              plVar13 = plVar13 + 1;
              lVar8 = *plVar13;
            } while ((*(byte *)(lVar8 + 1) >> 3 & 1) == 0);
          } while (*(int *)(lVar8 + 4) < *(int *)(lVar6 + 4));
        }
        if ((*(byte *)(lVar6 + 1) >> 3 & 1) == 0) {
          do {
            do {
              plVar11 = plVar11 + -1;
              lVar19 = *plVar11;
            } while ((*(byte *)(lVar19 + 1) >> 3 & 1) != 0);
          } while ((int)((ulong)(lVar6 - *(long *)(*(long *)(lVar6 + 0x20) + 0x28)) >> 3) *
                   0x38e38e39 <=
                   (int)((ulong)(lVar19 - *(long *)(*(long *)(lVar19 + 0x20) + 0x28)) >> 3) *
                   0x38e38e39);
        }
        else {
          plVar11 = plVar11 + -1;
          lVar19 = *plVar11;
          if ((*(byte *)(lVar19 + 1) >> 3 & 1) != 0) {
            do {
              if (*(int *)(lVar19 + 4) < *(int *)(lVar6 + 4)) break;
              plVar11 = plVar11 + -1;
              lVar19 = *plVar11;
            } while ((*(byte *)(lVar19 + 1) >> 3 & 1) != 0);
          }
        }
      } while (plVar13 < plVar11);
    }
    plVar11 = plVar13 + -1;
    if (plVar11 != param_1) {
      *param_1 = *plVar11;
    }
    *plVar11 = lVar6;
    if (plVar7 < plVar16) goto LAB_006f8488;
    uVar5 = FUN_006f9340(param_1,plVar11);
    uVar21 = FUN_006f9340(plVar13,param_2);
    if ((uVar21 & 1) == 0) goto code_r0x006f8484;
    param_2 = plVar11;
    if ((uVar5 & 1) != 0) {
      return;
    }
  } while( true );
LAB_006f8e5c:
  plVar12 = plVar13;
  lVar6 = *param_1;
  lVar8 = param_1[1];
  if ((*(byte *)(lVar8 + 1) >> 3 & 1) == 0) {
    if (((*(byte *)(lVar6 + 1) >> 3 & 1) != 0) ||
       ((int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x20) + 0x28)) >> 3) * 0x38e38e39 <
        (int)((ulong)(lVar6 - *(long *)(*(long *)(lVar6 + 0x20) + 0x28)) >> 3) * 0x38e38e39)) {
LAB_006f8ec0:
      do {
        while( true ) {
          plVar13 = param_1;
          param_1 = plVar13 + -1;
          lVar19 = *param_1;
          plVar13[1] = lVar6;
          lVar6 = lVar19;
          if ((*(byte *)(lVar8 + 1) >> 3 & 1) == 0) break;
          if (((*(byte *)(lVar19 + 1) >> 3 & 1) == 0) ||
             (*(int *)(lVar19 + 4) <= *(int *)(lVar8 + 4))) goto LAB_006f8e4c;
        }
      } while (((*(byte *)(lVar19 + 1) >> 3 & 1) != 0) ||
              ((int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x20) + 0x28)) >> 3) * 0x38e38e39 <
               (int)((ulong)(lVar19 - *(long *)(*(long *)(lVar19 + 0x20) + 0x28)) >> 3) * 0x38e38e39
              ));
LAB_006f8e4c:
      *plVar13 = lVar8;
    }
  }
  else if (((*(byte *)(lVar6 + 1) >> 3 & 1) != 0) && (*(int *)(lVar8 + 4) < *(int *)(lVar6 + 4)))
  goto LAB_006f8ec0;
  plVar13 = plVar12 + 1;
  param_1 = plVar12;
  if (plVar13 == param_2) {
    return;
  }
  goto LAB_006f8e5c;
LAB_006f88e8:
  lVar8 = *plVar12;
  lVar19 = plVar12[1];
  if ((*(byte *)(lVar19 + 1) >> 3 & 1) == 0) {
    if (((*(byte *)(lVar8 + 1) >> 3 & 1) != 0) ||
       ((int)((ulong)(lVar19 - *(long *)(*(long *)(lVar19 + 0x20) + 0x28)) >> 3) * 0x38e38e39 <
        (int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x20) + 0x28)) >> 3) * 0x38e38e39)) {
LAB_006f894c:
      plVar12[1] = lVar8;
      plVar7 = param_1;
      lVar8 = lVar6;
      if (plVar12 != param_1) {
        do {
          lVar20 = ((long *)((long)param_1 + lVar8))[-1];
          plVar7 = plVar12;
          if ((*(byte *)(lVar19 + 1) >> 3 & 1) == 0) {
            if (((*(byte *)(lVar20 + 1) >> 3 & 1) == 0) &&
               ((int)((ulong)(lVar20 - *(long *)(*(long *)(lVar20 + 0x20) + 0x28)) >> 3) *
                0x38e38e39 <=
                (int)((ulong)(lVar19 - *(long *)(*(long *)(lVar19 + 0x20) + 0x28)) >> 3) *
                0x38e38e39)) break;
          }
          else {
            if ((*(byte *)(lVar20 + 1) >> 3 & 1) == 0) {
              plVar7 = (long *)((long)param_1 + lVar8);
              break;
            }
            if (*(int *)(lVar20 + 4) <= *(int *)(lVar19 + 4)) break;
          }
          lVar3 = lVar8 + -8;
          plVar12 = plVar12 + -1;
          *(long *)((long)param_1 + lVar8) = lVar20;
          plVar7 = param_1;
          lVar8 = lVar3;
        } while (lVar3 != 0);
      }
      *plVar7 = lVar19;
    }
  }
  else if (((*(byte *)(lVar8 + 1) >> 3 & 1) != 0) && (*(int *)(lVar19 + 4) < *(int *)(lVar8 + 4)))
  goto LAB_006f894c;
  plVar7 = plVar13 + 1;
  lVar6 = lVar6 + 8;
  plVar12 = plVar13;
  plVar13 = plVar7;
  if (plVar7 == param_2) {
    return;
  }
  goto LAB_006f88e8;
LAB_006f8a10:
  do {
    if ((long)uVar21 <= (long)uVar9) {
      uVar17 = uVar21 << 1 | 1;
      uVar18 = uVar21 * 2 + 2;
      plVar13 = param_1 + uVar17;
      if ((long)uVar18 < (long)uVar5) {
        lVar6 = *plVar13;
        lVar8 = plVar13[1];
        if ((*(byte *)(lVar6 + 1) >> 3 & 1) == 0) {
          if (((*(byte *)(lVar8 + 1) >> 3 & 1) != 0) ||
             ((int)((ulong)(lVar6 - *(long *)(*(long *)(lVar6 + 0x20) + 0x28)) >> 3) * 0x38e38e39 <
              (int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x20) + 0x28)) >> 3) * 0x38e38e39))
          {
LAB_006f8a9c:
            plVar13 = plVar13 + 1;
            uVar17 = uVar18;
          }
        }
        else if (((*(byte *)(lVar8 + 1) >> 3 & 1) != 0) &&
                (*(int *)(lVar6 + 4) < *(int *)(lVar8 + 4))) goto LAB_006f8a9c;
      }
      lVar8 = *plVar13;
      lVar6 = param_1[uVar21];
      if ((*(byte *)(lVar8 + 1) >> 3 & 1) == 0) {
        if (((*(byte *)(lVar6 + 1) >> 3 & 1) == 0) &&
           ((int)((ulong)(lVar6 - *(long *)(*(long *)(lVar6 + 0x20) + 0x28)) >> 3) * 0x38e38e39 <=
            (int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x20) + 0x28)) >> 3) * 0x38e38e39)) {
LAB_006f8b04:
          param_1[uVar21] = lVar8;
          while ((long)uVar17 <= (long)uVar9) {
            lVar8 = uVar17 * 2;
            uVar17 = uVar17 << 1 | 1;
            uVar18 = lVar8 + 2;
            plVar12 = param_1 + uVar17;
            if ((long)uVar18 < (long)uVar5) {
              lVar8 = *plVar12;
              lVar19 = plVar12[1];
              if ((*(byte *)(lVar8 + 1) >> 3 & 1) == 0) {
                if (((*(byte *)(lVar19 + 1) >> 3 & 1) != 0) ||
                   ((int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x20) + 0x28)) >> 3) *
                    0x38e38e39 <
                    (int)((ulong)(lVar19 - *(long *)(*(long *)(lVar19 + 0x20) + 0x28)) >> 3) *
                    0x38e38e39)) {
LAB_006f8bb0:
                  plVar12 = plVar12 + 1;
                  uVar17 = uVar18;
                }
              }
              else if (((*(byte *)(lVar19 + 1) >> 3 & 1) != 0) &&
                      (*(int *)(lVar8 + 4) < *(int *)(lVar19 + 4))) goto LAB_006f8bb0;
            }
            lVar8 = *plVar12;
            if ((*(byte *)(lVar8 + 1) >> 3 & 1) == 0) {
              if ((*(byte *)(lVar6 + 1) >> 3 & 1) != 0) break;
              iVar10 = (int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x20) + 0x28)) >> 3) *
                       0x38e38e39;
              iVar14 = (int)((ulong)(lVar6 - *(long *)(*(long *)(lVar6 + 0x20) + 0x28)) >> 3) *
                       0x38e38e39;
LAB_006f8b14:
              if (iVar10 < iVar14) break;
            }
            else if ((*(byte *)(lVar6 + 1) >> 3 & 1) != 0) {
              iVar10 = *(int *)(lVar8 + 4);
              iVar14 = *(int *)(lVar6 + 4);
              goto LAB_006f8b14;
            }
            *plVar13 = lVar8;
            plVar13 = plVar12;
          }
          *plVar13 = lVar6;
        }
      }
      else if (((*(byte *)(lVar6 + 1) >> 3 & 1) == 0) ||
              (*(int *)(lVar6 + 4) <= *(int *)(lVar8 + 4))) goto LAB_006f8b04;
    }
    bVar4 = uVar21 != 0;
    uVar21 = uVar21 - 1;
  } while (bVar4);
  do {
    lVar6 = *param_1;
    plVar13 = param_1;
    uVar21 = 0;
    do {
      uVar18 = uVar21 << 1 | 1;
      uVar9 = uVar21 * 2 + 2;
      plVar12 = plVar13 + uVar21 + 1;
      if ((long)uVar9 < (long)uVar5) {
        lVar19 = plVar13[uVar21 + 2];
        lVar8 = plVar13[uVar21 + 1];
        if ((*(byte *)(lVar8 + 1) >> 3 & 1) == 0) {
          if (((*(byte *)(lVar19 + 1) >> 3 & 1) != 0) ||
             ((int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x20) + 0x28)) >> 3) * 0x38e38e39 <
              (int)((ulong)(lVar19 - *(long *)(*(long *)(lVar19 + 0x20) + 0x28)) >> 3) * 0x38e38e39)
             ) {
LAB_006f8c40:
            plVar12 = plVar13 + uVar21 + 2;
            uVar18 = uVar9;
          }
        }
        else if (((*(byte *)(lVar19 + 1) >> 3 & 1) != 0) &&
                (*(int *)(lVar8 + 4) < *(int *)(lVar19 + 4))) goto LAB_006f8c40;
      }
      *plVar13 = *plVar12;
      plVar13 = plVar12;
      uVar21 = uVar18;
    } while ((long)uVar18 <= (long)(uVar5 - 2 >> 1));
    param_2 = param_2 + -1;
    if (plVar12 == param_2) {
LAB_006f8c18:
      *plVar12 = lVar6;
    }
    else {
      lVar8 = (long)plVar12 + (8 - (long)param_1) >> 3;
      *plVar12 = *param_2;
      *param_2 = lVar6;
      uVar21 = lVar8 - 2;
      if (1 < lVar8) {
        uVar9 = uVar21 >> 1;
        lVar6 = *plVar12;
        lVar8 = param_1[uVar9];
        if ((*(byte *)(lVar8 + 1) >> 3 & 1) == 0) {
          if (((*(byte *)(lVar6 + 1) >> 3 & 1) != 0) ||
             ((int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x20) + 0x28)) >> 3) * 0x38e38e39 <
              (int)((ulong)(lVar6 - *(long *)(*(long *)(lVar6 + 0x20) + 0x28)) >> 3) * 0x38e38e39))
          {
LAB_006f8d78:
            *plVar12 = lVar8;
            plVar12 = param_1 + uVar9;
            while (1 < uVar21) {
              uVar21 = uVar9 - 1;
              uVar9 = uVar21 >> 1;
              lVar8 = param_1[uVar9];
              if ((*(byte *)(lVar8 + 1) >> 3 & 1) == 0) {
                if ((*(byte *)(lVar6 + 1) >> 3 & 1) == 0) {
                  iVar10 = (int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x20) + 0x28)) >> 3) *
                           0x38e38e39;
                  iVar14 = (int)((ulong)(lVar6 - *(long *)(*(long *)(lVar6 + 0x20) + 0x28)) >> 3) *
                           0x38e38e39;
                  goto LAB_006f8d88;
                }
              }
              else {
                if ((*(byte *)(lVar6 + 1) >> 3 & 1) == 0) break;
                iVar10 = *(int *)(lVar8 + 4);
                iVar14 = *(int *)(lVar6 + 4);
LAB_006f8d88:
                if (iVar14 <= iVar10) break;
              }
              *plVar12 = lVar8;
              plVar12 = param_1 + uVar9;
            }
            goto LAB_006f8c18;
          }
        }
        else if (((*(byte *)(lVar6 + 1) >> 3 & 1) != 0) &&
                (*(int *)(lVar8 + 4) < *(int *)(lVar6 + 4))) goto LAB_006f8d78;
      }
    }
    bVar4 = (long)uVar5 < 3;
    uVar5 = uVar5 - 1;
    if (bVar4) {
      return;
    }
  } while( true );
code_r0x006f8484:
  if ((uVar5 & 1) == 0) {
LAB_006f8488:
    FUN_006f7fe4(param_1,plVar11,param_3,param_4 & 1);
    param_4 = 0;
  }
  goto LAB_006f8034;
}


// ===== 006f8f2c  FUN_006f8f2c =====

void FUN_006f8f2c(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  FUN_006f95f8();
  lVar1 = *param_5;
  lVar2 = *param_4;
  if ((*(byte *)(lVar1 + 1) >> 3 & 1) == 0) {
    if (((*(byte *)(lVar2 + 1) >> 3 & 1) == 0) &&
       ((int)((ulong)(lVar2 - *(long *)(*(long *)(lVar2 + 0x20) + 0x28)) >> 3) * 0x38e38e39 <=
        (int)((ulong)(lVar1 - *(long *)(*(long *)(lVar1 + 0x20) + 0x28)) >> 3) * 0x38e38e39)) {
      return;
    }
  }
  else {
    if ((*(byte *)(lVar2 + 1) >> 3 & 1) == 0) {
      return;
    }
    if (*(int *)(lVar2 + 4) <= *(int *)(lVar1 + 4)) {
      return;
    }
  }
  *param_4 = lVar1;
  *param_5 = lVar2;
  lVar1 = *param_4;
  lVar2 = *param_3;
  if ((*(byte *)(lVar1 + 1) >> 3 & 1) == 0) {
    if (((*(byte *)(lVar2 + 1) >> 3 & 1) == 0) &&
       ((int)((ulong)(lVar2 - *(long *)(*(long *)(lVar2 + 0x20) + 0x28)) >> 3) * 0x38e38e39 <=
        (int)((ulong)(lVar1 - *(long *)(*(long *)(lVar1 + 0x20) + 0x28)) >> 3) * 0x38e38e39)) {
      return;
    }
  }
  else {
    if ((*(byte *)(lVar2 + 1) >> 3 & 1) == 0) {
      return;
    }
    if (*(int *)(lVar2 + 4) <= *(int *)(lVar1 + 4)) {
      return;
    }
  }
  *param_3 = lVar1;
  *param_4 = lVar2;
  lVar1 = *param_3;
  lVar2 = *param_2;
  if ((*(byte *)(lVar1 + 1) >> 3 & 1) == 0) {
    if (((*(byte *)(lVar2 + 1) >> 3 & 1) == 0) &&
       ((int)((ulong)(lVar2 - *(long *)(*(long *)(lVar2 + 0x20) + 0x28)) >> 3) * 0x38e38e39 <=
        (int)((ulong)(lVar1 - *(long *)(*(long *)(lVar1 + 0x20) + 0x28)) >> 3) * 0x38e38e39)) {
      return;
    }
  }
  else {
    if ((*(byte *)(lVar2 + 1) >> 3 & 1) == 0) {
      return;
    }
    if (*(int *)(lVar2 + 4) <= *(int *)(lVar1 + 4)) {
      return;
    }
  }
  *param_2 = lVar1;
  *param_3 = lVar2;
  lVar1 = *param_2;
  lVar2 = *param_1;
  if ((*(byte *)(lVar1 + 1) >> 3 & 1) == 0) {
    if ((*(byte *)(lVar2 + 1) >> 3 & 1) != 0) goto LAB_006f9118;
    iVar3 = (int)((ulong)(lVar1 - *(long *)(*(long *)(lVar1 + 0x20) + 0x28)) >> 3) * 0x38e38e39;
    iVar4 = (int)((ulong)(lVar2 - *(long *)(*(long *)(lVar2 + 0x20) + 0x28)) >> 3) * 0x38e38e39;
  }
  else {
    if ((*(byte *)(lVar2 + 1) >> 3 & 1) == 0) {
      return;
    }
    iVar3 = *(int *)(lVar1 + 4);
    iVar4 = *(int *)(lVar2 + 4);
  }
  if (iVar4 <= iVar3) {
    return;
  }
LAB_006f9118:
  *param_1 = lVar1;
  *param_2 = lVar2;
  return;
}


// ===== 006f9134  FUN_006f9134 =====

void FUN_006f9134(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_2;
  lVar2 = *param_1;
  if ((*(byte *)(lVar3 + 1) >> 3 & 1) == 0) {
    if (((*(byte *)(lVar2 + 1) >> 3 & 1) == 0) &&
       (iVar1 = (int)((ulong)(lVar3 - *(long *)(*(long *)(lVar3 + 0x20) + 0x28)) >> 3) * 0x38e38e39,
       (int)((ulong)(lVar2 - *(long *)(*(long *)(lVar2 + 0x20) + 0x28)) >> 3) * 0x38e38e39 <= iVar1)
       ) {
      lVar2 = *param_3;
      if ((*(byte *)(lVar2 + 1) >> 3 & 1) != 0) {
        return;
      }
      if (iVar1 <= (int)((ulong)(lVar2 - *(long *)(*(long *)(lVar2 + 0x20) + 0x28)) >> 3) *
                   0x38e38e39) {
        return;
      }
LAB_006f92c4:
      *param_2 = lVar2;
      *param_3 = lVar3;
      lVar2 = *param_2;
      lVar3 = *param_1;
      if ((*(byte *)(lVar2 + 1) >> 3 & 1) == 0) {
        if (((*(byte *)(lVar3 + 1) >> 3 & 1) == 0) &&
           ((int)((ulong)(lVar3 - *(long *)(*(long *)(lVar3 + 0x20) + 0x28)) >> 3) * 0x38e38e39 <=
            (int)((ulong)(lVar2 - *(long *)(*(long *)(lVar2 + 0x20) + 0x28)) >> 3) * 0x38e38e39)) {
          return;
        }
      }
      else {
        if ((*(byte *)(lVar3 + 1) >> 3 & 1) == 0) {
          return;
        }
        if (*(int *)(lVar3 + 4) <= *(int *)(lVar2 + 4)) {
          return;
        }
      }
      *param_1 = lVar2;
      *param_2 = lVar3;
      return;
    }
    lVar4 = *param_3;
    if (((*(byte *)(lVar4 + 1) >> 3 & 1) == 0) &&
       ((int)((ulong)(lVar4 - *(long *)(*(long *)(lVar4 + 0x20) + 0x28)) >> 3) * 0x38e38e39 <
        (int)((ulong)(lVar3 - *(long *)(*(long *)(lVar3 + 0x20) + 0x28)) >> 3) * 0x38e38e39)) {
LAB_006f91f8:
      *param_1 = lVar4;
      *param_3 = lVar2;
      return;
    }
  }
  else {
    if (((*(byte *)(lVar2 + 1) >> 3 & 1) == 0) || (*(int *)(lVar2 + 4) <= *(int *)(lVar3 + 4))) {
      lVar2 = *param_3;
      if (((*(byte *)(lVar2 + 1) >> 3 & 1) != 0) && (*(int *)(lVar3 + 4) <= *(int *)(lVar2 + 4))) {
        return;
      }
      goto LAB_006f92c4;
    }
    lVar4 = *param_3;
    if (((*(byte *)(lVar4 + 1) >> 3 & 1) == 0) || (*(int *)(lVar4 + 4) < *(int *)(lVar3 + 4)))
    goto LAB_006f91f8;
  }
  *param_1 = lVar3;
  *param_2 = lVar2;
  lVar3 = *param_3;
  if ((*(byte *)(lVar3 + 1) >> 3 & 1) == 0) {
    if (((*(byte *)(lVar2 + 1) >> 3 & 1) == 0) &&
       ((int)((ulong)(lVar2 - *(long *)(*(long *)(lVar2 + 0x20) + 0x28)) >> 3) * 0x38e38e39 <=
        (int)((ulong)(lVar3 - *(long *)(*(long *)(lVar3 + 0x20) + 0x28)) >> 3) * 0x38e38e39)) {
      return;
    }
  }
  else {
    if ((*(byte *)(lVar2 + 1) >> 3 & 1) == 0) {
      return;
    }
    if (*(int *)(lVar2 + 4) <= *(int *)(lVar3 + 4)) {
      return;
    }
  }
  *param_2 = lVar3;
  *param_3 = lVar2;
  return;
}


// ===== 006f9340  FUN_006f9340 =====

bool FUN_006f9340(long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  
  uVar3 = (long)param_2 - (long)param_1 >> 3;
  if (2 < (long)uVar3) {
    if (uVar3 == 3) {
      FUN_006f9134(param_1,param_1 + 1,param_2 + -1);
      return true;
    }
    if (uVar3 == 4) {
      FUN_006f95f8(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
      return true;
    }
    if (uVar3 == 5) {
      FUN_006f8f2c(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
      return true;
    }
LAB_006f942c:
    FUN_006f9134(param_1,param_1 + 1,param_1 + 2);
    if (param_1 + 3 != param_2) {
      lVar4 = 0;
      iVar7 = 0;
      plVar1 = param_1 + 3;
      plVar12 = param_1 + 2;
      do {
        plVar6 = plVar1;
        lVar5 = *plVar6;
        lVar9 = *plVar12;
        if ((*(byte *)(lVar5 + 1) >> 3 & 1) == 0) {
          if (((*(byte *)(lVar9 + 1) >> 3 & 1) != 0) ||
             ((int)((ulong)(lVar5 - *(long *)(*(long *)(lVar5 + 0x20) + 0x28)) >> 3) * 0x38e38e39 <
              (int)((ulong)(lVar9 - *(long *)(*(long *)(lVar9 + 0x20) + 0x28)) >> 3) * 0x38e38e39))
          {
LAB_006f94e0:
            *plVar6 = lVar9;
            lVar9 = lVar4;
            do {
              lVar11 = *(long *)((long)param_1 + lVar9 + 8);
              if ((*(byte *)(lVar5 + 1) >> 3 & 1) != 0) {
                if ((*(byte *)(lVar11 + 1) >> 3 & 1) != 0) {
                  iVar8 = *(int *)(lVar5 + 4);
                  iVar2 = *(int *)(lVar11 + 4);
                  goto LAB_006f94ec;
                }
LAB_006f9468:
                *(long *)((long)param_1 + lVar9 + 0x10) = lVar5;
                goto joined_r0x006f9478;
              }
              if ((*(byte *)(lVar11 + 1) >> 3 & 1) == 0) {
                iVar8 = (int)((ulong)(lVar5 - *(long *)(*(long *)(lVar5 + 0x20) + 0x28)) >> 3) *
                        0x38e38e39;
                iVar2 = (int)((ulong)(lVar11 - *(long *)(*(long *)(lVar11 + 0x20) + 0x28)) >> 3) *
                        0x38e38e39;
LAB_006f94ec:
                if (iVar2 <= iVar8) goto LAB_006f9468;
              }
              lVar10 = lVar9 + -8;
              *(long *)((long)param_1 + lVar9 + 0x10) = lVar11;
              lVar9 = lVar10;
            } while (lVar10 != -0x10);
            *param_1 = lVar5;
joined_r0x006f9478:
            iVar7 = iVar7 + 1;
            if (iVar7 == 8) {
              return plVar6 + 1 == param_2;
            }
          }
        }
        else if (((*(byte *)(lVar9 + 1) >> 3 & 1) != 0) &&
                (*(int *)(lVar5 + 4) < *(int *)(lVar9 + 4))) goto LAB_006f94e0;
        lVar4 = lVar4 + 8;
        plVar1 = plVar6 + 1;
        plVar12 = plVar6;
      } while (plVar6 + 1 != param_2);
    }
    return true;
  }
  if (uVar3 < 2) {
    return true;
  }
  if (uVar3 != 2) goto LAB_006f942c;
  lVar5 = param_2[-1];
  lVar4 = *param_1;
  if ((*(byte *)(lVar5 + 1) >> 3 & 1) == 0) {
    if ((*(byte *)(lVar4 + 1) >> 3 & 1) != 0) goto LAB_006f95c0;
    iVar7 = (int)((ulong)(lVar5 - *(long *)(*(long *)(lVar5 + 0x20) + 0x28)) >> 3) * 0x38e38e39;
    iVar8 = (int)((ulong)(lVar4 - *(long *)(*(long *)(lVar4 + 0x20) + 0x28)) >> 3) * 0x38e38e39;
  }
  else {
    if ((*(byte *)(lVar4 + 1) >> 3 & 1) == 0) {
      return true;
    }
    iVar7 = *(int *)(lVar5 + 4);
    iVar8 = *(int *)(lVar4 + 4);
  }
  if (iVar8 <= iVar7) {
    return true;
  }
LAB_006f95c0:
  *param_1 = lVar5;
  param_2[-1] = lVar4;
  return true;
}


// ===== 006f95f8  FUN_006f95f8 =====

void FUN_006f95f8(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  
  FUN_006f9134();
  lVar1 = *param_4;
  lVar2 = *param_3;
  if ((*(byte *)(lVar1 + 1) >> 3 & 1) == 0) {
    if (((*(byte *)(lVar2 + 1) >> 3 & 1) == 0) &&
       ((int)((ulong)(lVar2 - *(long *)(*(long *)(lVar2 + 0x20) + 0x28)) >> 3) * 0x38e38e39 <=
        (int)((ulong)(lVar1 - *(long *)(*(long *)(lVar1 + 0x20) + 0x28)) >> 3) * 0x38e38e39)) {
      return;
    }
  }
  else {
    if ((*(byte *)(lVar2 + 1) >> 3 & 1) == 0) {
      return;
    }
    if (*(int *)(lVar2 + 4) <= *(int *)(lVar1 + 4)) {
      return;
    }
  }
  *param_3 = lVar1;
  *param_4 = lVar2;
  lVar1 = *param_3;
  lVar2 = *param_2;
  if ((*(byte *)(lVar1 + 1) >> 3 & 1) == 0) {
    if (((*(byte *)(lVar2 + 1) >> 3 & 1) == 0) &&
       ((int)((ulong)(lVar2 - *(long *)(*(long *)(lVar2 + 0x20) + 0x28)) >> 3) * 0x38e38e39 <=
        (int)((ulong)(lVar1 - *(long *)(*(long *)(lVar1 + 0x20) + 0x28)) >> 3) * 0x38e38e39)) {
      return;
    }
  }
  else {
    if ((*(byte *)(lVar2 + 1) >> 3 & 1) == 0) {
      return;
    }
    if (*(int *)(lVar2 + 4) <= *(int *)(lVar1 + 4)) {
      return;
    }
  }
  *param_2 = lVar1;
  *param_3 = lVar2;
  lVar1 = *param_2;
  lVar2 = *param_1;
  if ((*(byte *)(lVar1 + 1) >> 3 & 1) == 0) {
    if (((*(byte *)(lVar2 + 1) >> 3 & 1) == 0) &&
       ((int)((ulong)(lVar2 - *(long *)(*(long *)(lVar2 + 0x20) + 0x28)) >> 3) * 0x38e38e39 <=
        (int)((ulong)(lVar1 - *(long *)(*(long *)(lVar1 + 0x20) + 0x28)) >> 3) * 0x38e38e39)) {
      return;
    }
  }
  else {
    if ((*(byte *)(lVar2 + 1) >> 3 & 1) == 0) {
      return;
    }
    if (*(int *)(lVar2 + 4) <= *(int *)(lVar1 + 4)) {
      return;
    }
  }
  *param_1 = lVar1;
  *param_2 = lVar2;
  return;
}


// ===== 006f9788  FUN_006f9788 =====

void FUN_006f9788(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulong param_4,
                 undefined8 *param_5,long param_6)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (1 < param_4) {
    if (param_4 == 2) {
      uVar1 = FUN_006f9ad8(param_3,param_2[-1],*param_1);
      if ((uVar1 & 1) != 0) {
        uVar7 = *param_1;
        *param_1 = param_2[-1];
        param_2[-1] = uVar7;
        return;
      }
    }
    else {
      if (0x80 < (long)param_4) {
        uVar1 = param_4 >> 1;
        puVar5 = param_1 + uVar1;
        lVar12 = param_4 - uVar1;
        if (param_6 < (long)param_4) {
          FUN_006f9788();
          FUN_006f9788(puVar5,param_2,param_3,lVar12,param_5,param_6);
          FUN_006fa0f4(param_1,puVar5,param_2,param_3,uVar1,lVar12,param_5,param_6);
          return;
        }
        FUN_006f9df4(param_1,puVar5,param_3,uVar1,param_5);
        puVar2 = param_5 + uVar1;
        FUN_006f9df4(puVar5,param_2,param_3,lVar12,puVar2);
        puVar5 = param_5 + param_4;
        puVar6 = puVar2;
        puVar9 = param_1;
        do {
          puVar4 = puVar6;
          if (puVar4 == puVar5) {
            if (param_5 == puVar2) {
              return;
            }
            uVar1 = (long)puVar2 + (-8 - (long)param_5);
            if ((0x37 < uVar1) && (0x1f < (ulong)((long)param_1 - (long)param_5))) {
              lVar12 = 0;
              uVar1 = (uVar1 >> 3) + 1;
              uVar10 = uVar1 & 0x3ffffffffffffffc;
              uVar11 = uVar10;
              do {
                puVar5 = (undefined8 *)((long)param_5 + lVar12);
                puVar6 = (undefined8 *)((long)puVar9 + lVar12);
                uVar11 = uVar11 - 4;
                uVar7 = *puVar5;
                uVar16 = puVar5[3];
                uVar15 = puVar5[2];
                lVar12 = lVar12 + 0x20;
                puVar6[1] = puVar5[1];
                *puVar6 = uVar7;
                puVar6[3] = uVar16;
                puVar6[2] = uVar15;
              } while (uVar11 != 0);
              param_5 = param_5 + uVar10;
              puVar9 = puVar9 + uVar10;
              if (uVar1 == uVar10) {
                return;
              }
            }
            do {
              puVar5 = param_5 + 1;
              *puVar9 = *param_5;
              param_5 = puVar5;
              puVar9 = puVar9 + 1;
            } while (puVar5 != puVar2);
            return;
          }
          uVar1 = FUN_006f9ad8(param_3,*puVar4,*param_5);
          if ((uVar1 & 1) == 0) {
            lVar12 = 8;
            puVar3 = param_5;
            if ((uVar1 & 1) == 0) goto LAB_006f9964;
LAB_006f99c0:
            lVar8 = 8;
          }
          else {
            lVar12 = 0;
            puVar3 = puVar4;
            if ((uVar1 & 1) != 0) goto LAB_006f99c0;
LAB_006f9964:
            lVar8 = 0;
          }
          param_5 = (undefined8 *)((long)param_5 + lVar12);
          puVar6 = (undefined8 *)((long)puVar4 + lVar8);
          param_1 = param_1 + 1;
          puVar13 = puVar9 + 1;
          *puVar9 = *puVar3;
          puVar9 = puVar13;
          if (param_5 == puVar2) {
            if (puVar6 == puVar5) {
              return;
            }
            uVar1 = (long)puVar5 + (-8 - (lVar8 + (long)puVar4));
            if ((0x57 < uVar1) && (0x1f < (ulong)((long)param_1 - (lVar8 + (long)puVar4)))) {
              lVar12 = 0;
              uVar1 = (uVar1 >> 3) + 1;
              uVar10 = uVar1 & 0x3ffffffffffffffc;
              uVar11 = uVar10;
              do {
                puVar2 = (undefined8 *)((long)puVar4 + lVar12 + lVar8);
                puVar9 = (undefined8 *)((long)puVar13 + lVar12);
                uVar11 = uVar11 - 4;
                uVar7 = *puVar2;
                uVar16 = puVar2[3];
                uVar15 = puVar2[2];
                lVar12 = lVar12 + 0x20;
                puVar9[1] = puVar2[1];
                *puVar9 = uVar7;
                puVar9[3] = uVar16;
                puVar9[2] = uVar15;
              } while (uVar11 != 0);
              puVar6 = puVar6 + uVar10;
              puVar13 = puVar13 + uVar10;
              if (uVar1 == uVar10) {
                return;
              }
            }
            do {
              puVar2 = puVar6 + 1;
              *puVar13 = *puVar6;
              puVar6 = puVar2;
              puVar13 = puVar13 + 1;
            } while (puVar2 != puVar5);
            return;
          }
        } while( true );
      }
      if ((param_1 != param_2) && (param_1 + 1 != param_2)) {
        lVar12 = 0;
        puVar5 = param_1 + 1;
        puVar2 = param_1;
        do {
          puVar6 = puVar5;
          uVar1 = FUN_006f9ad8(param_3,*puVar6,*puVar2);
          if ((uVar1 & 1) != 0) {
            uVar7 = *puVar6;
            lVar8 = lVar12;
            do {
              lVar14 = lVar8;
              puVar5 = (undefined8 *)((long)param_1 + lVar14);
              puVar5[1] = *puVar5;
              puVar2 = param_1;
              if (lVar14 == 0) goto LAB_006f9838;
              uVar1 = FUN_006f9ad8(param_3,uVar7,puVar5[-1]);
              lVar8 = lVar14 + -8;
            } while ((uVar1 & 1) != 0);
            puVar2 = (undefined8 *)((long)param_1 + lVar14);
LAB_006f9838:
            *puVar2 = uVar7;
          }
          lVar12 = lVar12 + 8;
          puVar5 = puVar6 + 1;
          puVar2 = puVar6;
        } while (puVar6 + 1 != param_2);
      }
    }
  }
  return;
}


// ===== 006f9ad8  FUN_006f9ad8 =====

byte FUN_006f9ad8(long *param_1,long *param_2,undefined8 param_3)

{
  long *__n;
  void *__s2;
  void *__s1;
  long lVar1;
  long *plVar2;
  undefined1 *puVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 extraout_x1;
  long lVar17;
  undefined8 local_b0;
  long *local_a8;
  void *local_a0;
  undefined8 local_80;
  long *local_78;
  void *pvStack_70;
  long local_68;
  code *pcStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_2 + 0x80))(param_2);
  lVar17 = *param_1;
  plVar12 = *(long **)(lVar17 + 0x18);
  if ((plVar12 != (long *)0x0) &&
     (pcStack_60 = thunk_FUN_006af330, local_68 = lVar17, *plVar12 != -1)) {
    local_b0 = &pcStack_60;
    local_a8 = &local_68;
    local_80 = &local_b0;
    FUN_00710f84(plVar12,&local_80,FUN_00685640);
  }
  iVar10 = *(int *)(PTR_DAT_007a32d8 + (ulong)*(byte *)(lVar17 + 2) * 4);
  if (iVar10 < 4) {
    if (iVar10 == 1) {
      iVar10 = FUN_0067cb40(extraout_x1,param_2,*param_1);
      iVar11 = FUN_0067cb40(extraout_x1,param_3,*param_1);
      bVar5 = SBORROW4(iVar10,iVar11);
      bVar6 = iVar10 - iVar11 < 0;
    }
    else {
      if (iVar10 != 2) {
        if (iVar10 == 3) {
          uVar8 = FUN_0067dbc0(extraout_x1,param_2,*param_1);
          uVar9 = FUN_0067dbc0(extraout_x1,param_3,*param_1);
          bVar4 = uVar8 < uVar9;
          goto LAB_006f9d80;
        }
        goto LAB_006f9c6c;
      }
      lVar17 = FUN_0067d380(extraout_x1,param_2,*param_1);
      lVar16 = FUN_0067d380(extraout_x1,param_3,*param_1);
      bVar5 = SBORROW8(lVar17,lVar16);
      bVar6 = lVar17 - lVar16 < 0;
    }
    bVar4 = bVar6 != bVar5;
  }
  else {
    if (iVar10 == 4) {
      uVar13 = FUN_0067e400(extraout_x1,param_2,*param_1);
      uVar14 = FUN_0067e400(extraout_x1,param_3,*param_1);
      bVar4 = uVar13 < uVar14;
      goto LAB_006f9d80;
    }
    if (iVar10 == 9) {
      FUN_00680534(&local_b0,extraout_x1,param_2,*param_1);
                    /* try { // try from 006f9cfc to 006f9d0f has its CatchHandler @ 006f9db4 */
      FUN_00680534(&local_80,extraout_x1,param_3,*param_1);
      puVar3 = (undefined1 *)local_80;
      bVar7 = (byte)local_b0;
      bVar6 = ((ulong)local_80 & 1) == 0;
      __s2 = pvStack_70;
      if (bVar6) {
        __s2 = (void *)((long)&local_80 + 1);
      }
      plVar12 = (long *)((ulong)local_80 >> 1 & 0x7f);
      if (!bVar6) {
        plVar12 = local_78;
      }
      __s1 = local_a0;
      plVar2 = local_a8;
      if (((ulong)local_b0 & 1) == 0) {
        __s1 = (void *)((long)&local_b0 + 1);
        plVar2 = (long *)(ulong)((byte)local_b0 >> 1);
      }
      __n = plVar12;
      if (plVar2 <= plVar12) {
        __n = plVar2;
      }
      iVar10 = memcmp(__s1,__s2,(size_t)__n);
      bVar4 = plVar2 < plVar12;
      if (iVar10 != 0) {
        bVar4 = iVar10 < 0;
      }
      if (((ulong)puVar3 & 1) != 0) {
        free(pvStack_70);
        bVar7 = (byte)local_b0;
      }
      if ((bVar7 & 1) != 0) {
        free(local_a0);
      }
      goto LAB_006f9d80;
    }
    if (iVar10 == 7) {
      bVar7 = FUN_0067fce8(extraout_x1,param_2,*param_1);
      bVar4 = FUN_0067fce8(extraout_x1,param_3,*param_1);
      bVar4 = bVar4 & (bVar7 ^ 1);
      goto LAB_006f9d80;
    }
LAB_006f9c6c:
    FUN_00675e64(&local_b0,2,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/text_format.cc"
                 ,0x8e9);
                    /* try { // try from 006f9c84 to 006f9c97 has its CatchHandler @ 006f9dcc */
    uVar15 = FUN_00675a58(&local_b0,"Invalid key for map field.");
                    /* try { // try from 006f9c98 to 006f9c9f has its CatchHandler @ 006f9db0 */
    FUN_00675ac0(&local_80,uVar15);
    FUN_00675e7c(&local_b0);
    bVar4 = 1;
  }
LAB_006f9d80:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return bVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006f9df4  FUN_006f9df4 =====

void FUN_006f9df4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulong param_4,
                 undefined8 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (param_4 == 0) {
    return;
  }
  puVar7 = param_5;
  puVar11 = param_1;
  if (param_4 != 1) {
    if (param_4 != 2) {
      if ((long)param_4 < 9) {
        if (param_1 == param_2) {
          return;
        }
        *param_5 = *param_1;
        if (param_1 + 1 == param_2) {
          return;
        }
        lVar12 = 0;
        puVar11 = param_1 + 1;
        do {
          uVar1 = FUN_006f9ad8(param_3,*puVar11,*puVar7);
          puVar6 = puVar7 + 1;
          if (((uVar1 & 1) != 0) &&
             (puVar7[1] = *puVar7, puVar6 = param_5, lVar8 = lVar12, puVar7 != param_5)) {
            do {
              puVar6 = (undefined8 *)((long)param_5 + lVar8);
              uVar1 = FUN_006f9ad8(param_3,*puVar11,puVar6[-1]);
              if ((uVar1 & 1) == 0) break;
              lVar8 = lVar8 + -8;
              *puVar6 = puVar6[-1];
              puVar6 = param_5;
            } while (lVar8 != 0);
          }
          puVar5 = puVar11 + 1;
          lVar12 = lVar12 + 8;
          *puVar6 = *puVar11;
          puVar11 = puVar5;
          puVar7 = puVar7 + 1;
          if (puVar5 == param_2) {
            return;
          }
        } while( true );
      }
      uVar1 = param_4 >> 1;
      puVar11 = param_1 + uVar1;
      FUN_006f9788(param_1,puVar11,param_3,uVar1,param_5,uVar1);
      FUN_006f9788(puVar11,param_2,param_3,param_4 - uVar1,param_5 + uVar1,param_4 - uVar1);
      puVar6 = puVar11;
      puVar5 = param_5;
      puVar7 = param_1;
      do {
        puVar4 = puVar6;
        if (puVar4 == param_2) {
          if (puVar7 == puVar11) {
            return;
          }
          uVar1 = (long)param_1 + (uVar1 * 8 - (long)puVar7) + -8;
          if ((0x37 < uVar1) && (0x1f < (ulong)((long)param_5 - (long)puVar7))) {
            lVar12 = 0;
            uVar1 = (uVar1 >> 3) + 1;
            uVar9 = uVar1 & 0x3ffffffffffffffc;
            uVar2 = uVar9;
            do {
              puVar6 = (undefined8 *)((long)puVar7 + lVar12);
              puVar4 = (undefined8 *)((long)puVar5 + lVar12);
              uVar2 = uVar2 - 4;
              uVar13 = *puVar6;
              uVar15 = puVar6[3];
              uVar14 = puVar6[2];
              lVar12 = lVar12 + 0x20;
              puVar4[1] = puVar6[1];
              *puVar4 = uVar13;
              puVar4[3] = uVar15;
              puVar4[2] = uVar14;
            } while (uVar2 != 0);
            puVar5 = puVar5 + uVar9;
            puVar7 = puVar7 + uVar9;
            if (uVar1 == uVar9) {
              return;
            }
          }
          do {
            puVar6 = puVar7 + 1;
            *puVar5 = *puVar7;
            puVar5 = puVar5 + 1;
            puVar7 = puVar6;
          } while (puVar6 != puVar11);
          return;
        }
        uVar2 = FUN_006f9ad8(param_3,*puVar4,*puVar7);
        if ((uVar2 & 1) == 0) {
          lVar12 = 0;
          puVar3 = puVar7;
          if ((uVar2 & 1) != 0) goto LAB_006f9fd4;
LAB_006f9f78:
          lVar8 = 8;
        }
        else {
          lVar12 = 8;
          puVar3 = puVar4;
          if ((uVar2 & 1) == 0) goto LAB_006f9f78;
LAB_006f9fd4:
          lVar8 = 0;
        }
        puVar7 = (undefined8 *)((long)puVar7 + lVar8);
        puVar6 = (undefined8 *)((long)puVar4 + lVar12);
        param_5 = param_5 + 1;
        puVar10 = puVar5 + 1;
        *puVar5 = *puVar3;
        puVar5 = puVar10;
        if (puVar7 == puVar11) {
          if (puVar6 == param_2) {
            return;
          }
          uVar1 = (long)param_2 + (-(long)puVar4 - lVar12) + -8;
          if ((0x57 < uVar1) && (0x1f < (ulong)((long)param_5 - (lVar12 + (long)puVar4)))) {
            lVar8 = 0;
            uVar1 = (uVar1 >> 3) + 1;
            uVar9 = uVar1 & 0x3ffffffffffffffc;
            uVar2 = uVar9;
            do {
              puVar11 = (undefined8 *)((long)puVar4 + lVar8 + lVar12);
              puVar7 = (undefined8 *)((long)puVar10 + lVar8);
              uVar2 = uVar2 - 4;
              uVar13 = *puVar11;
              uVar15 = puVar11[3];
              uVar14 = puVar11[2];
              lVar8 = lVar8 + 0x20;
              puVar7[1] = puVar11[1];
              *puVar7 = uVar13;
              puVar7[3] = uVar15;
              puVar7[2] = uVar14;
            } while (uVar2 != 0);
            puVar6 = puVar6 + uVar9;
            puVar10 = puVar10 + uVar9;
            if (uVar1 == uVar9) {
              return;
            }
          }
          do {
            puVar11 = puVar6 + 1;
            *puVar10 = *puVar6;
            puVar6 = puVar11;
            puVar10 = puVar10 + 1;
          } while (puVar11 != param_2);
          return;
        }
      } while( true );
    }
    param_2 = param_2 + -1;
    uVar1 = FUN_006f9ad8(param_3,*param_2,*param_1);
    if ((uVar1 & 1) == 0) {
      puVar11 = param_2;
      param_2 = param_1;
    }
    puVar7 = param_5 + 1;
    *param_5 = *param_2;
  }
  *puVar7 = *puVar11;
  return;
}


// ===== 006fa0f4  FUN_006fa0f4 =====

void FUN_006fa0f4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 long param_5,long param_6,undefined8 *param_7,long param_8)

{
  size_t __n;
  long lVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_78 = param_3;
  if (param_6 != 0) {
LAB_006fa144:
    do {
      if ((param_6 <= param_8) || (param_5 <= param_8)) {
        if (param_6 < param_5) {
          if ((long)local_78 - (long)param_2 != 0) {
            uVar3 = ((long)local_78 - (long)param_2) - 8;
            puVar6 = param_2;
            puVar13 = param_7;
            puVar15 = local_78;
            if ((uVar3 < 0x18) || ((ulong)((long)param_7 - (long)param_2) < 0x20))
            goto LAB_006fa674;
            puVar6 = param_2 + 2;
            puVar13 = param_7 + 2;
            uVar3 = (uVar3 >> 3) + 1;
            uVar4 = uVar3 & 0x3ffffffffffffffc;
            puVar7 = param_7 + uVar4;
            uVar19 = uVar4;
            do {
              puVar10 = puVar6 + -1;
              uVar9 = puVar6[-2];
              uVar21 = puVar6[1];
              uVar20 = *puVar6;
              uVar19 = uVar19 - 4;
              puVar6 = puVar6 + 4;
              puVar13[-1] = *puVar10;
              puVar13[-2] = uVar9;
              puVar13[1] = uVar21;
              *puVar13 = uVar20;
              puVar13 = puVar13 + 4;
            } while (uVar19 != 0);
            puVar6 = param_2 + uVar4;
            puVar13 = puVar7;
            if (uVar3 != uVar4) {
LAB_006fa674:
              do {
                puVar10 = puVar6 + 1;
                puVar7 = puVar13 + 1;
                *puVar13 = *puVar6;
                puVar6 = puVar10;
                puVar13 = puVar7;
              } while (puVar10 != local_78);
            }
            do {
              if (param_2 == param_1) {
                uVar3 = (long)puVar7 + (-8 - (long)param_7);
                if ((0x47 < uVar3) && (0x1f < (ulong)((long)puVar7 - (long)puVar15))) {
                  uVar3 = (uVar3 >> 3) + 1;
                  uVar4 = uVar3 & 0x3ffffffffffffffc;
                  lVar17 = 0;
                  uVar19 = uVar4;
                  do {
                    uVar19 = uVar19 - 4;
                    uVar21 = *(undefined8 *)((long)puVar7 + lVar17 + -0x20);
                    uVar20 = *(undefined8 *)((long)puVar7 + lVar17 + -8);
                    uVar9 = *(undefined8 *)((long)puVar7 + lVar17 + -0x10);
                    *(undefined8 *)((long)local_78 + lVar17 + -0x18) =
                         *(undefined8 *)((long)puVar7 + lVar17 + -0x18);
                    *(undefined8 *)((long)local_78 + lVar17 + -0x20) = uVar21;
                    *(undefined8 *)((long)local_78 + lVar17 + -8) = uVar20;
                    *(undefined8 *)((long)local_78 + lVar17 + -0x10) = uVar9;
                    lVar17 = lVar17 + -0x20;
                  } while (uVar19 != 0);
                  puVar7 = puVar7 + -uVar4;
                  local_78 = local_78 + -uVar4;
                  if (uVar3 == uVar4) break;
                }
                do {
                  puVar7 = puVar7 + -1;
                  local_78[-1] = *puVar7;
                  local_78 = local_78 + -1;
                } while (puVar7 != param_7);
                break;
              }
              puVar6 = param_2 + -1;
              puVar10 = puVar7 + -1;
              uVar3 = FUN_006f9ad8(param_4,*puVar10,*puVar6);
              puVar13 = puVar6;
              if ((uVar3 & 1) == 0) {
                puVar6 = param_2;
                puVar13 = puVar10;
                puVar7 = puVar10;
              }
              local_78 = local_78 + -1;
              *local_78 = *puVar13;
              puVar15 = puVar15 + -1;
              param_2 = puVar6;
            } while (puVar7 != param_7);
          }
        }
        else if (param_1 != param_2) {
          uVar3 = (long)param_2 + (-8 - (long)param_1);
          puVar6 = param_1;
          puVar13 = param_7;
          if ((uVar3 < 0x18) || ((ulong)((long)param_7 - (long)param_1) < 0x20)) goto LAB_006fa5cc;
          puVar6 = param_1 + 2;
          puVar13 = param_7 + 2;
          uVar3 = (uVar3 >> 3) + 1;
          uVar4 = uVar3 & 0x3ffffffffffffffc;
          puVar15 = param_7 + uVar4;
          uVar19 = uVar4;
          do {
            puVar7 = puVar6 + -1;
            uVar9 = puVar6[-2];
            uVar21 = puVar6[1];
            uVar20 = *puVar6;
            uVar19 = uVar19 - 4;
            puVar6 = puVar6 + 4;
            puVar13[-1] = *puVar7;
            puVar13[-2] = uVar9;
            puVar13[1] = uVar21;
            *puVar13 = uVar20;
            puVar13 = puVar13 + 4;
          } while (uVar19 != 0);
          puVar6 = param_1 + uVar4;
          puVar13 = puVar15;
          if (uVar3 != uVar4) {
LAB_006fa5cc:
            do {
              puVar7 = puVar6 + 1;
              puVar15 = puVar13 + 1;
              *puVar13 = *puVar6;
              puVar6 = puVar7;
              puVar13 = puVar15;
            } while (puVar7 != param_2);
          }
          do {
            if (param_2 == local_78) {
              memmove(param_1,param_7,(long)puVar15 - (long)param_7);
              break;
            }
            uVar3 = FUN_006f9ad8(param_4,*param_2,*param_7);
            if ((uVar3 & 1) == 0) {
              lVar17 = 0;
              puVar6 = param_7;
              if ((uVar3 & 1) != 0) goto LAB_006fa638;
LAB_006fa5e0:
              lVar16 = 8;
            }
            else {
              lVar17 = 8;
              puVar6 = param_2;
              if ((uVar3 & 1) == 0) goto LAB_006fa5e0;
LAB_006fa638:
              lVar16 = 0;
            }
            param_7 = (undefined8 *)((long)param_7 + lVar16);
            param_2 = (undefined8 *)((long)param_2 + lVar17);
            *param_1 = *puVar6;
            param_1 = param_1 + 1;
          } while (param_7 != puVar15);
        }
        break;
      }
      if (param_5 == 0) break;
      lVar16 = 0;
      lVar17 = -param_5;
      while (uVar3 = FUN_006f9ad8(param_4,*param_2,*(undefined8 *)((long)param_1 + lVar16)),
            (uVar3 & 1) == 0) {
        bVar2 = lVar17 == -1;
        lVar17 = lVar17 + 1;
        lVar16 = lVar16 + 8;
        if (bVar2) goto LAB_006fa764;
      }
      param_5 = -lVar17;
      if (param_5 < param_6) {
        lVar5 = param_6;
        if (param_6 < 0) {
          lVar5 = param_6 + 1;
        }
        lVar5 = lVar5 >> 1;
        lVar18 = (long)param_2 + (-lVar16 - (long)param_1);
        puVar13 = param_2 + lVar5;
        puVar6 = param_2;
        if (lVar18 != 0) {
          uVar3 = lVar18 >> 3;
          puVar6 = (undefined8 *)((long)param_1 + lVar16);
          do {
            uVar19 = uVar3 >> 1;
            uVar4 = FUN_006f9ad8(param_4,*puVar13,puVar6[uVar19]);
            if ((uVar4 & 1) == 0) {
              puVar6 = puVar6 + uVar19 + 1;
              uVar19 = uVar3 + ~uVar19;
            }
            uVar3 = uVar19;
          } while (uVar3 != 0);
        }
        param_5 = (long)puVar6 + (-lVar16 - (long)param_1) >> 3;
      }
      else {
        if (lVar17 == -1) {
          uVar9 = *(undefined8 *)((long)param_1 + lVar16);
          *(undefined8 *)((long)param_1 + lVar16) = *param_2;
          *param_2 = uVar9;
          break;
        }
        local_70 = *param_4;
        if (0 < lVar17) {
          param_5 = param_5 + 1;
        }
        param_5 = param_5 >> 1;
        puVar6 = (undefined8 *)((long)param_1 + lVar16 + param_5 * 8);
        puVar13 = param_2;
        if (param_2 != local_78) {
          uVar3 = (long)local_78 - (long)param_2 >> 3;
          do {
            uVar19 = uVar3 >> 1;
            uVar4 = FUN_006f9ad8(&local_70,puVar13[uVar19],*puVar6);
            if ((uVar4 & 1) != 0) {
              puVar13 = puVar13 + uVar19 + 1;
              uVar19 = uVar3 + ~uVar19;
            }
            uVar3 = uVar19;
          } while (uVar3 != 0);
        }
        lVar5 = (long)puVar13 - (long)param_2 >> 3;
      }
      puVar15 = puVar13;
      if ((puVar6 != param_2) && (__n = (long)puVar13 - (long)param_2, puVar15 = puVar6, __n != 0))
      {
        puVar7 = puVar6 + 1;
        if (puVar7 == param_2) {
          uVar9 = *puVar6;
          memmove(puVar6,param_2,__n);
          *(undefined8 *)((long)puVar6 + __n) = uVar9;
          puVar15 = (undefined8 *)((long)puVar6 + __n);
        }
        else {
          puVar10 = param_2 + 1;
          if (puVar10 == puVar13) {
            puVar7 = puVar13 + -1;
            uVar9 = *puVar7;
            puVar15 = (undefined8 *)((long)puVar13 - ((long)puVar7 - (long)puVar6));
            if ((long)puVar7 - (long)puVar6 != 0) {
              memmove(puVar15,puVar6,(long)puVar7 - (long)puVar6);
            }
            *puVar6 = uVar9;
          }
          else {
            lVar8 = (long)param_2 - (long)puVar6 >> 3;
            lVar18 = lVar8;
            lVar12 = (long)__n >> 3;
            if (lVar8 == (long)__n >> 3) {
              do {
                uVar9 = puVar7[-1];
                puVar7[-1] = puVar10[-1];
                puVar10[-1] = uVar9;
                puVar15 = param_2;
                if (puVar7 == param_2) break;
                bVar2 = puVar10 != puVar13;
                puVar10 = puVar10 + 1;
                puVar7 = puVar7 + 1;
              } while (bVar2);
            }
            else {
              do {
                lVar11 = lVar12;
                lVar12 = 0;
                if (lVar11 != 0) {
                  lVar12 = lVar18 / lVar11;
                }
                lVar12 = lVar18 - lVar12 * lVar11;
                lVar18 = lVar11;
              } while (lVar12 != 0);
              puVar15 = puVar6 + lVar11;
              do {
                puVar15 = puVar15 + -1;
                uVar9 = *puVar15;
                puVar10 = puVar15;
                puVar7 = (undefined8 *)((long)puVar15 + ((long)param_2 - (long)puVar6));
                do {
                  puVar14 = puVar7;
                  lVar18 = (long)puVar13 - (long)puVar14 >> 3;
                  *puVar10 = *puVar14;
                  puVar7 = puVar14 + lVar8;
                  if (lVar18 <= lVar8) {
                    puVar7 = puVar6 + (lVar8 - lVar18);
                  }
                  puVar10 = puVar14;
                } while (puVar7 != puVar15);
                *puVar14 = uVar9;
              } while (puVar15 != puVar6);
              puVar15 = (undefined8 *)((long)puVar6 + __n);
            }
          }
        }
      }
      lVar18 = param_6 - lVar5;
      if ((param_6 - (param_5 + lVar5)) - lVar17 <= param_5 + lVar5) {
        FUN_006fa0f4(puVar15,puVar13,local_78,param_4,-lVar17 - param_5,lVar18,param_7,param_8);
        param_6 = lVar5;
        param_1 = (undefined8 *)((long)param_1 + lVar16);
        param_2 = puVar6;
        local_78 = puVar15;
        if (lVar5 == 0) break;
        goto LAB_006fa144;
      }
      FUN_006fa0f4((long)param_1 + lVar16,puVar6,puVar15,param_4,param_5,lVar5,param_7,param_8);
      param_6 = lVar18;
      param_1 = puVar15;
      param_2 = puVar13;
      param_5 = -lVar17 - param_5;
    } while (lVar18 != 0);
  }
LAB_006fa764:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 006fa798  FUN_006fa798 =====

void FUN_006fa798(long *param_1,long *param_2,long *param_3)

{
  size_t sVar1;
  void *__s1;
  byte bVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  size_t __n;
  byte *pbVar6;
  long *plVar7;
  long lVar8;
  long local_70;
  code *pcStack_68;
  code ***local_60;
  code **local_58;
  undefined1 *puStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar5 = (**(code **)(*param_1 + 0x80))();
  lVar8 = *(long *)(lVar5 + 8);
  __n = strlen("google.protobuf.Any");
  pbVar6 = (byte *)(lVar8 + 0x18);
  bVar2 = *pbVar6;
  sVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    sVar1 = *(size_t *)(lVar8 + 0x20);
  }
  if (__n == sVar1) {
    if (__n == 0xffffffffffffffff) {
      if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006fa950 to 006fa953 has its CatchHandler @ 006fa954 */
        FUN_0030b8f4();
      }
      goto LAB_006fa93c;
    }
    __s1 = (void *)(lVar8 + 0x19);
    if ((bVar2 & 1) != 0) {
      __s1 = *(void **)(lVar8 + 0x28);
    }
    iVar4 = memcmp(__s1,PTR_s_google_protobuf_Any_007a3128,__n);
    if (iVar4 == 0) {
      lVar8 = FUN_0068c9d8(lVar5,1);
      *param_2 = lVar8;
      lVar5 = FUN_0068c9d8(lVar5,2);
      *param_3 = lVar5;
      lVar5 = *param_2;
      if (lVar5 != 0) {
        plVar7 = *(long **)(lVar5 + 0x18);
        if ((plVar7 != (long *)0x0) &&
           (pcStack_68 = thunk_FUN_006af330, local_70 = lVar5, *plVar7 != -1)) {
          local_58 = &pcStack_68;
          local_60 = &local_58;
          puStack_50 = (undefined1 *)&local_70;
          FUN_00710f84(plVar7,&local_60,FUN_00685640);
        }
        if ((*(char *)(lVar5 + 2) == '\t') && (lVar5 = *param_3, lVar5 != 0)) {
          plVar7 = *(long **)(lVar5 + 0x18);
          if ((plVar7 != (long *)0x0) &&
             (pcStack_68 = thunk_FUN_006af330, local_70 = lVar5, *plVar7 != -1)) {
            local_58 = &pcStack_68;
            local_60 = &local_58;
            puStack_50 = (undefined1 *)&local_70;
            FUN_00710f84(plVar7,&local_60,FUN_00685640);
          }
          pbVar6 = (byte *)(ulong)(*(char *)(lVar5 + 2) == '\f');
          if (*(long *)(lVar3 + 0x28) == local_48) {
            return;
          }
          goto LAB_006fa93c;
        }
      }
    }
  }
  pbVar6 = (byte *)0x0;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_006fa93c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pbVar6);
}


// ===== 006fa958  FUN_006fa958 =====

undefined8 * FUN_006fa958(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (((DAT_007aee30 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007aee30), iVar1 != 0)) {
                    /* try { // try from 006fa998 to 006fa9bb has its CatchHandler @ 006fa9e0 */
    puVar2 = (undefined8 *)FUN_00759c3c(0x18);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    FUN_0066ee94(PTR_FUN_007a3770,puVar2);
    DAT_007aee28 = puVar2;
    FUN_00739d60(&DAT_007aee30);
    return DAT_007aee28;
  }
  return DAT_007aee28;
}


// ===== 006fa9f8  FUN_006fa9f8 =====

void FUN_006fa9f8(long *param_1)

{
  long lVar1;
  int iVar2;
  void *__ptr;
  byte *__ptr_00;
  long lVar3;
  long lVar4;
  
  lVar4 = (param_1[1] - *param_1) * 0x10000000 >> 0x20;
  lVar3 = lVar4 << 4;
  lVar4 = lVar4 + 1;
  do {
    lVar1 = *param_1 + lVar3;
    iVar2 = *(int *)(lVar1 + -0xc);
    if (iVar2 == 4) {
      __ptr_00 = *(byte **)(lVar1 + -8);
      if (__ptr_00 != (byte *)0x0) {
        __ptr = *(void **)__ptr_00;
        if (__ptr != *(void **)(__ptr_00 + 8)) {
          FUN_006fa9f8(__ptr_00);
          __ptr = *(void **)__ptr_00;
        }
        if (__ptr != (void *)0x0) {
          *(void **)(__ptr_00 + 8) = __ptr;
          goto LAB_006faa24;
        }
        goto LAB_006faa28;
      }
    }
    else if ((iVar2 == 3) && (__ptr_00 = *(byte **)(*param_1 + lVar3 + -8), __ptr_00 != (byte *)0x0)
            ) {
      if ((*__ptr_00 & 1) != 0) {
        __ptr = *(void **)(__ptr_00 + 0x10);
LAB_006faa24:
        free(__ptr);
      }
LAB_006faa28:
      free(__ptr_00);
    }
    lVar4 = lVar4 + -1;
    lVar3 = lVar3 + -0x10;
    if (lVar4 < 2) {
      param_1[1] = *param_1;
      return;
    }
  } while( true );
}


// ===== 006faabc  FUN_006faabc =====

void FUN_006faabc(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  size_t __n;
  void *pvVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
    pvVar7 = (void *)*param_1;
    uVar9 = (ulong)(param_2[1] - *param_2) >> 4 & 0x7fffffff;
    __n = param_1[1] - (long)pvVar7;
    uVar1 = ((long)__n >> 4) + uVar9;
    if ((ulong)(param_1[2] - (long)pvVar7 >> 4) < uVar1) {
      if (uVar1 >> 0x3c != 0) {
LAB_006fac48:
        FUN_006fbdec(param_1);
LAB_006fac50:
                    /* WARNING: Subroutine does not return */
        FUN_002f9ee0();
      }
      lVar4 = FUN_00759c3c(uVar1 * 0x10);
      pvVar8 = (void *)(lVar4 + __n + ((long)__n >> 4) * -0x10);
      memcpy(pvVar8,pvVar7,__n);
      *param_1 = pvVar8;
      param_1[1] = lVar4 + __n;
      param_1[2] = lVar4 + uVar1 * 0x10;
      if (pvVar7 != (void *)0x0) {
        free(pvVar7);
      }
    }
    lVar4 = 0;
    do {
      puVar2 = (undefined8 *)param_1[1];
      lVar12 = *param_2;
      if (puVar2 < (undefined8 *)param_1[2]) {
        puVar3 = (undefined8 *)(lVar12 + lVar4);
        uVar13 = *puVar3;
        puVar10 = puVar2 + 2;
        puVar2[1] = puVar3[1];
        *puVar2 = uVar13;
      }
      else {
        pvVar7 = (void *)*param_1;
        lVar11 = (long)puVar2 - (long)pvVar7 >> 4;
        uVar1 = lVar11 + 1;
        if (uVar1 >> 0x3c != 0) goto LAB_006fac48;
        uVar5 = (long)param_1[2] - (long)pvVar7;
        uVar6 = (long)uVar5 >> 3;
        if (uVar6 <= uVar1) {
          uVar6 = uVar1;
        }
        if (0x7fffffffffffffef < uVar5) {
          uVar6 = 0xfffffffffffffff;
        }
        if (uVar6 == 0) {
          pvVar8 = (void *)0x0;
        }
        else {
          if (uVar6 >> 0x3c != 0) goto LAB_006fac50;
          pvVar8 = (void *)FUN_00759c3c(uVar6 << 4);
        }
        puVar10 = (undefined8 *)((long)pvVar8 + lVar11 * 0x10);
        puVar3 = (undefined8 *)(lVar12 + lVar4);
        uVar13 = *puVar3;
        puVar10[1] = puVar3[1];
        *puVar10 = uVar13;
        puVar10 = puVar10 + 2;
        memcpy(pvVar8,pvVar7,(long)puVar2 - (long)pvVar7);
        *param_1 = pvVar8;
        param_1[1] = puVar10;
        param_1[2] = (void *)((long)pvVar8 + uVar6 * 0x10);
        if (pvVar7 != (void *)0x0) {
          free(pvVar7);
        }
      }
      param_1[1] = puVar10;
      FUN_006fac54(puVar10 + -2);
      uVar9 = uVar9 - 1;
      lVar4 = lVar4 + 0x10;
    } while (uVar9 != 0);
  }
  return;
}


// ===== 006fac54  FUN_006fac54 =====

void FUN_006fac54(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 4) == 4) {
    puVar1 = (undefined8 *)FUN_00759c3c(0x18);
    uVar2 = *(undefined8 *)(param_1 + 8);
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    FUN_006faabc(puVar1,uVar2);
  }
  else {
    if (*(int *)(param_1 + 4) != 3) {
      return;
    }
    puVar1 = (undefined8 *)FUN_00759c3c(0x18);
    pbVar3 = *(byte **)(param_1 + 8);
    if ((*pbVar3 & 1) == 0) {
      uVar4 = *(undefined8 *)(pbVar3 + 8);
      uVar2 = *(undefined8 *)pbVar3;
      puVar1[2] = *(undefined8 *)(pbVar3 + 0x10);
      puVar1[1] = uVar4;
      *puVar1 = uVar2;
    }
    else {
                    /* try { // try from 006facc8 to 006faccf has its CatchHandler @ 006face0 */
      FUN_002fb36c(puVar1,*(undefined8 *)(pbVar3 + 0x10),*(undefined8 *)(pbVar3 + 8));
    }
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}


// ===== 006facf4  FUN_006facf4 =====

void FUN_006facf4(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  size_t __n;
  void *pvVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
    pvVar7 = (void *)*param_1;
    uVar9 = (ulong)(param_2[1] - *param_2) >> 4 & 0x7fffffff;
    __n = param_1[1] - (long)pvVar7;
    uVar1 = ((long)__n >> 4) + uVar9;
    if ((ulong)(param_1[2] - (long)pvVar7 >> 4) < uVar1) {
      if (uVar1 >> 0x3c != 0) {
LAB_006fae80:
        FUN_006fbdec(param_1);
LAB_006fae88:
                    /* WARNING: Subroutine does not return */
        FUN_002f9ee0();
      }
      lVar4 = FUN_00759c3c(uVar1 * 0x10);
      pvVar8 = (void *)(lVar4 + __n + ((long)__n >> 4) * -0x10);
      memcpy(pvVar8,pvVar7,__n);
      *param_1 = pvVar8;
      param_1[1] = lVar4 + __n;
      param_1[2] = lVar4 + uVar1 * 0x10;
      if (pvVar7 != (void *)0x0) {
        free(pvVar7);
      }
    }
    lVar4 = 0;
    do {
      puVar2 = (undefined8 *)param_1[1];
      lVar12 = *param_2;
      if (puVar2 < (undefined8 *)param_1[2]) {
        puVar3 = (undefined8 *)(lVar12 + lVar4);
        uVar13 = *puVar3;
        puVar10 = puVar2 + 2;
        puVar2[1] = puVar3[1];
        *puVar2 = uVar13;
      }
      else {
        pvVar7 = (void *)*param_1;
        lVar11 = (long)puVar2 - (long)pvVar7 >> 4;
        uVar1 = lVar11 + 1;
        if (uVar1 >> 0x3c != 0) goto LAB_006fae80;
        uVar5 = (long)param_1[2] - (long)pvVar7;
        uVar6 = (long)uVar5 >> 3;
        if (uVar6 <= uVar1) {
          uVar6 = uVar1;
        }
        if (0x7fffffffffffffef < uVar5) {
          uVar6 = 0xfffffffffffffff;
        }
        if (uVar6 == 0) {
          pvVar8 = (void *)0x0;
        }
        else {
          if (uVar6 >> 0x3c != 0) goto LAB_006fae88;
          pvVar8 = (void *)FUN_00759c3c(uVar6 << 4);
        }
        puVar10 = (undefined8 *)((long)pvVar8 + lVar11 * 0x10);
        puVar3 = (undefined8 *)(lVar12 + lVar4);
        uVar13 = *puVar3;
        puVar10[1] = puVar3[1];
        *puVar10 = uVar13;
        puVar10 = puVar10 + 2;
        memcpy(pvVar8,pvVar7,(long)puVar2 - (long)pvVar7);
        *param_1 = pvVar8;
        param_1[1] = puVar10;
        param_1[2] = (void *)((long)pvVar8 + uVar6 * 0x10);
        if (pvVar7 != (void *)0x0) {
          free(pvVar7);
        }
      }
      param_1[1] = puVar10;
      FUN_006fac54(puVar10 + -2);
      uVar9 = uVar9 - 1;
      lVar4 = lVar4 + 0x10;
    } while (uVar9 != 0);
  }
  return;
}


// ===== 006fae8c  FUN_006fae8c =====

long FUN_006fae8c(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  lVar1 = param_1[1];
  if (lVar5 == lVar1) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1[2] - lVar5;
    do {
      if (*(int *)(lVar5 + 4) == 4) {
        iVar2 = FUN_006faf0c(*(undefined8 *)(lVar5 + 8));
        lVar3 = (long)iVar2;
LAB_006faec0:
        lVar4 = lVar4 + lVar3 + 0x18;
      }
      else if (*(int *)(lVar5 + 4) == 3) {
        lVar3 = FUN_00663b4c(*(undefined8 *)(lVar5 + 8));
        goto LAB_006faec0;
      }
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != lVar1);
  }
  return lVar4;
}


// ===== 006faf0c  FUN_006faf0c =====

ulong FUN_006faf0c(long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  lVar1 = param_1[1];
  if (lVar4 == lVar1) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_1[2] - lVar4;
    do {
      if (*(int *)(lVar4 + 4) == 4) {
        uVar2 = FUN_006faf0c(*(undefined8 *)(lVar4 + 8));
        uVar2 = uVar2 & 0xffffffff;
LAB_006faf40:
        uVar3 = uVar3 + uVar2 + 0x18;
      }
      else if (*(int *)(lVar4 + 4) == 3) {
        uVar2 = FUN_00663b4c(*(undefined8 *)(lVar4 + 8));
        goto LAB_006faf40;
      }
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != lVar1);
  }
  return uVar3 & 0xffffffff;
}


// ===== 006faf8c  FUN_006faf8c =====

void FUN_006faf8c(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  void *__src;
  long lVar6;
  undefined4 *puVar7;
  
  puVar3 = (undefined4 *)param_1[1];
  if (puVar3 < (undefined4 *)param_1[2]) {
    *puVar3 = param_2;
    puVar3[1] = 0;
    puVar7 = puVar3 + 4;
    *(undefined8 *)(puVar3 + 2) = param_3;
  }
  else {
    __src = (void *)*param_1;
    lVar6 = (long)puVar3 - (long)__src >> 4;
    uVar1 = lVar6 + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_006fbdec(param_1);
LAB_006fb088:
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    uVar4 = (long)param_1[2] - (long)__src;
    uVar5 = (long)uVar4 >> 3;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7fffffffffffffef < uVar4) {
      uVar5 = 0xfffffffffffffff;
    }
    if (uVar5 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar5 >> 0x3c != 0) goto LAB_006fb088;
      __dest = (void *)FUN_00759c3c(uVar5 << 4);
    }
    puVar2 = (undefined4 *)((long)__dest + lVar6 * 0x10);
    *puVar2 = param_2;
    puVar2[1] = 0;
    puVar7 = puVar2 + 4;
    *(undefined8 *)(puVar2 + 2) = param_3;
    memcpy(__dest,__src,(long)puVar3 - (long)__src);
    *param_1 = __dest;
    param_1[1] = puVar7;
    param_1[2] = (void *)((long)__dest + uVar5 * 0x10);
    if (__src != (void *)0x0) {
      free(__src);
    }
  }
  param_1[1] = puVar7;
  return;
}


// ===== 006fb08c  FUN_006fb08c =====

void FUN_006fb08c(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  void *__src;
  long lVar6;
  undefined4 *puVar7;
  
  puVar3 = (undefined4 *)param_1[1];
  if (puVar3 < (undefined4 *)param_1[2]) {
    puVar7 = puVar3 + 4;
    puVar3[2] = param_3;
    *puVar3 = param_2;
    puVar3[1] = 1;
  }
  else {
    __src = (void *)*param_1;
    lVar6 = (long)puVar3 - (long)__src >> 4;
    uVar1 = lVar6 + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_006fbdec(param_1);
LAB_006fb190:
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    uVar4 = (long)param_1[2] - (long)__src;
    uVar5 = (long)uVar4 >> 3;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7fffffffffffffef < uVar4) {
      uVar5 = 0xfffffffffffffff;
    }
    if (uVar5 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar5 >> 0x3c != 0) goto LAB_006fb190;
      __dest = (void *)FUN_00759c3c(uVar5 << 4);
    }
    puVar2 = (undefined4 *)((long)__dest + lVar6 * 0x10);
    *puVar2 = param_2;
    puVar2[1] = 1;
    puVar7 = puVar2 + 4;
    puVar2[2] = param_3;
    memcpy(__dest,__src,(long)puVar3 - (long)__src);
    *param_1 = __dest;
    param_1[1] = puVar7;
    param_1[2] = (void *)((long)__dest + uVar5 * 0x10);
    if (__src != (void *)0x0) {
      free(__src);
    }
  }
  param_1[1] = puVar7;
  return;
}


// ===== 006fb194  FUN_006fb194 =====

void FUN_006fb194(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  void *__src;
  long lVar6;
  undefined4 *puVar7;
  
  puVar3 = (undefined4 *)param_1[1];
  if (puVar3 < (undefined4 *)param_1[2]) {
    puVar7 = puVar3 + 4;
    *(undefined8 *)(puVar3 + 2) = param_3;
    *puVar3 = param_2;
    puVar3[1] = 2;
  }
  else {
    __src = (void *)*param_1;
    lVar6 = (long)puVar3 - (long)__src >> 4;
    uVar1 = lVar6 + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_006fbdec(param_1);
LAB_006fb298:
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    uVar4 = (long)param_1[2] - (long)__src;
    uVar5 = (long)uVar4 >> 3;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7fffffffffffffef < uVar4) {
      uVar5 = 0xfffffffffffffff;
    }
    if (uVar5 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar5 >> 0x3c != 0) goto LAB_006fb298;
      __dest = (void *)FUN_00759c3c(uVar5 << 4);
    }
    puVar2 = (undefined4 *)((long)__dest + lVar6 * 0x10);
    *puVar2 = param_2;
    puVar2[1] = 2;
    puVar7 = puVar2 + 4;
    *(undefined8 *)(puVar2 + 2) = param_3;
    memcpy(__dest,__src,(long)puVar3 - (long)__src);
    *param_1 = __dest;
    param_1[1] = puVar7;
    param_1[2] = (void *)((long)__dest + uVar5 * 0x10);
    if (__src != (void *)0x0) {
      free(__src);
    }
  }
  param_1[1] = puVar7;
  return;
}


// ===== 006fb29c  FUN_006fb29c =====

undefined8 * FUN_006fb29c(undefined8 *param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  void *__dest;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  void *__src;
  long lVar8;
  
  puVar4 = (undefined8 *)FUN_00759c3c(0x18);
  puVar3 = (undefined4 *)param_1[1];
  puVar7 = (undefined4 *)param_1[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if (puVar3 < puVar7) {
    *(undefined8 **)(puVar3 + 2) = puVar4;
    *puVar3 = param_2;
    puVar3[1] = 3;
    puVar7 = puVar3 + 4;
  }
  else {
    __src = (void *)*param_1;
    lVar8 = (long)puVar3 - (long)__src >> 4;
    uVar1 = lVar8 + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_006fbdec(param_1);
LAB_006fb3ac:
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    uVar5 = (long)puVar7 - (long)__src;
    uVar6 = (long)uVar5 >> 3;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar6 = 0xfffffffffffffff;
    }
    if (uVar6 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar6 >> 0x3c != 0) goto LAB_006fb3ac;
      __dest = (void *)FUN_00759c3c(uVar6 << 4);
    }
    puVar2 = (undefined4 *)((long)__dest + lVar8 * 0x10);
    *puVar2 = param_2;
    puVar2[1] = 3;
    puVar7 = puVar2 + 4;
    *(undefined8 **)(puVar2 + 2) = puVar4;
    memcpy(__dest,__src,(long)puVar3 - (long)__src);
    *param_1 = __dest;
    param_1[1] = puVar7;
    param_1[2] = (void *)((long)__dest + uVar6 * 0x10);
    if (__src != (void *)0x0) {
      free(__src);
    }
  }
  param_1[1] = puVar7;
  return puVar4;
}


// ===== 006fb3b0  FUN_006fb3b0 =====

undefined8 * FUN_006fb3b0(undefined8 *param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  void *__dest;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  void *__src;
  long lVar8;
  
  puVar4 = (undefined8 *)FUN_00759c3c(0x18);
  puVar3 = (undefined4 *)param_1[1];
  puVar7 = (undefined4 *)param_1[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if (puVar3 < puVar7) {
    *(undefined8 **)(puVar3 + 2) = puVar4;
    *puVar3 = param_2;
    puVar3[1] = 4;
    puVar7 = puVar3 + 4;
  }
  else {
    __src = (void *)*param_1;
    lVar8 = (long)puVar3 - (long)__src >> 4;
    uVar1 = lVar8 + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_006fbdec(param_1);
LAB_006fb4c0:
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    uVar5 = (long)puVar7 - (long)__src;
    uVar6 = (long)uVar5 >> 3;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar6 = 0xfffffffffffffff;
    }
    if (uVar6 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar6 >> 0x3c != 0) goto LAB_006fb4c0;
      __dest = (void *)FUN_00759c3c(uVar6 << 4);
    }
    puVar2 = (undefined4 *)((long)__dest + lVar8 * 0x10);
    *puVar2 = param_2;
    puVar2[1] = 4;
    puVar7 = puVar2 + 4;
    *(undefined8 **)(puVar2 + 2) = puVar4;
    memcpy(__dest,__src,(long)puVar3 - (long)__src);
    *param_1 = __dest;
    param_1[1] = puVar7;
    param_1[2] = (void *)((long)__dest + uVar6 * 0x10);
    if (__src != (void *)0x0) {
      free(__src);
    }
  }
  param_1[1] = puVar7;
  return puVar4;
}


// ===== 006fb4c4  FUN_006fb4c4 =====

undefined4 FUN_006fb4c4(long *param_1,long param_2)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  void *local_50;
  void *pvStack_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (void *)0x0;
  pvStack_48 = (void *)0x0;
  local_40 = 0;
                    /* try { // try from 006fb4f4 to 006fb52b has its CatchHandler @ 006fb5cc */
  uVar3 = FUN_006fc378(param_2,&local_50);
  if (((uVar3 & 1) == 0) || (*(char *)(param_2 + 0x24) == '\0')) {
    uVar4 = 0;
    if (local_50 != pvStack_48) {
      uVar4 = 0;
      FUN_006fa9f8(&local_50);
    }
  }
  else {
    __ptr = (void *)*param_1;
    if (__ptr == (void *)param_1[1]) {
      if (__ptr != (void *)0x0) {
        param_1[1] = (long)__ptr;
        free(__ptr);
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
      }
      lVar2 = local_40;
      local_40 = 0;
      param_1[1] = (long)pvStack_48;
      *param_1 = (long)local_50;
      param_1[2] = lVar2;
      local_50 = (void *)0x0;
    }
    else {
      FUN_006fbe00(param_1);
    }
    uVar4 = 1;
    pvStack_48 = local_50;
  }
  if (local_50 != (void *)0x0) {
    pvStack_48 = local_50;
    free(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}


// ===== 006fb5f4  FUN_006fb5f4 =====

void FUN_006fb5f4(long *param_1,undefined8 param_2)

{
  if (*param_1 != param_1[1]) {
    FUN_006fa9f8();
  }
  FUN_006fb4c4(param_1,param_2);
  return;
}


// ===== 006fb62c  FUN_006fb62c =====

byte FUN_006fb62c(long *param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined6 uStack_70;
  undefined2 local_6a;
  undefined4 uStack_68;
  char cStack_64;
  undefined1 uStack_63;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_88 = 0;
  uStack_80 = 0;
  uStack_70 = 0;
  local_6a = 0;
  uStack_68 = 0;
  cStack_64 = '\0';
  uStack_63 = 0;
  local_60 = DAT_001b70c8;
  uStack_54 = *(undefined4 *)PTR_DAT_007a3238;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0x7fffffff;
  local_78 = param_2;
  local_50 = uStack_54;
  FUN_0066c49c(&local_88);
  if (*param_1 != param_1[1]) {
    FUN_006fa9f8(param_1);
  }
                    /* try { // try from 006fb6a0 to 006fb6ab has its CatchHandler @ 006fb6ec */
  bVar3 = FUN_006fb4c4(param_1,&local_88);
  bVar2 = cStack_64 != '\0';
  FUN_0066c1f4(&local_88);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar3 & bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006fb714  FUN_006fb714 =====

byte FUN_006fb714(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 *local_78;
  undefined6 uStack_70;
  undefined2 local_6a;
  undefined4 uStack_68;
  char cStack_64;
  undefined1 uStack_63;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_0066dc94(auStack_a8,param_2,param_3,0xffffffff);
  local_88 = 0;
  uStack_80 = 0;
  uStack_70 = 0;
  local_6a = 0;
  uStack_68 = 0;
  cStack_64 = '\0';
  uStack_63 = 0;
  local_60 = DAT_001b70c8;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0x7fffffff;
  uStack_54 = DAT_007aa118;
  local_50 = DAT_007aa118;
  local_78 = auStack_a8;
  FUN_0066c49c(&local_88);
  if (*param_1 != param_1[1]) {
    FUN_006fa9f8(param_1);
  }
                    /* try { // try from 006fb798 to 006fb7a3 has its CatchHandler @ 006fb7e4 */
  bVar3 = FUN_006fb4c4(param_1,&local_88);
  bVar2 = cStack_64 != '\0';
  FUN_0066c1f4(&local_88);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar3 & bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006fb80c  FUN_006fb80c =====

undefined8 FUN_006fb80c(undefined8 param_1,ulong *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *local_78;
  undefined8 uStack_70;
  undefined8 local_48;
  undefined2 local_40;
  byte local_3e;
  undefined1 local_3d;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_006fc9ac();
  uVar4 = 0x16;
  if ((*param_2 & 1) != 0) {
    uVar4 = (*param_2 & 0xfffffffffffffffe) - 1;
  }
  if (uVar4 < uVar3) {
    uVar4 = uVar4 * 2;
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar4 = uVar3;
    }
    FUN_00712ea8(param_2,uVar4);
  }
  FUN_00713cc0(param_2,uVar3,0);
  pbVar5 = (byte *)param_2[2];
  if ((*param_2 & 1) == 0) {
    pbVar5 = (byte *)((long)param_2 + 1);
  }
  iVar2 = FUN_006fc9ac(param_1);
  local_78 = pbVar5 + iVar2;
  local_48 = 0;
  local_40 = 0;
  local_3e = *PTR_DAT_007a3218 & 1;
  uStack_70 = 0;
  local_3d = 0;
  FUN_006fc418(param_1,pbVar5,&local_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006fb900  FUN_006fb900 =====

byte * FUN_006fb900(long param_1,byte *param_2,long *param_3)

{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *__dest;
  size_t __n;
  
  pbVar5 = *(byte **)(param_1 + 8);
  uVar2 = (uint)(*pbVar5 >> 1);
  if ((*pbVar5 & 1) != 0) {
    uVar2 = (uint)*(undefined8 *)(pbVar5 + 8);
  }
  *param_2 = (byte)uVar2;
  if (uVar2 < 0x80) {
    __dest = param_2 + 1;
  }
  else {
    uVar4 = uVar2 >> 7;
    __dest = param_2 + 2;
    *param_2 = (byte)uVar2 | 0x80;
    param_2[1] = (byte)uVar4;
    pbVar6 = __dest;
    if (0x3fff < uVar2) {
      do {
        uVar2 = uVar4 >> 0xe;
        uVar4 = uVar4 >> 7;
        pbVar6[-1] = pbVar6[-1] | 0x80;
        __dest = pbVar6 + 1;
        *pbVar6 = (byte)uVar4;
        pbVar6 = __dest;
      } while (uVar2 != 0);
    }
  }
  bVar3 = (*pbVar5 & 1) != 0;
  uVar1 = (ulong)(*pbVar5 >> 1);
  if (bVar3) {
    uVar1 = *(ulong *)(pbVar5 + 8);
  }
  pbVar6 = *(byte **)(pbVar5 + 0x10);
  __n = (size_t)(int)uVar1;
  if (!bVar3) {
    pbVar6 = pbVar5 + 1;
  }
  if ((long)__n <= *param_3 - (long)__dest) {
    memcpy(__dest,pbVar6,__n);
    return __dest + __n;
  }
  pbVar5 = (byte *)FUN_0066d454(param_3,pbVar6,uVar1 & 0xffffffff,__dest);
  return pbVar5;
}


// ===== 006fb9d4  FUN_006fb9d4 =====

byte * FUN_006fb9d4(undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  undefined1 auVar4 [16];
  
  do {
    if ((byte *)*param_3 <= param_2) {
      iVar1 = (int)param_2 - *(int *)(param_3 + 1);
      if (*(int *)((long)param_3 + 0x1c) == iVar1) {
        pbVar3 = (byte *)0x0;
        if (param_3[2] != 0 || iVar1 < 1) {
          pbVar3 = param_2;
        }
        return pbVar3;
      }
      auVar4 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar4._0_8_;
      if ((auVar4 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        return param_2;
      }
    }
    pbVar3 = param_2 + 1;
    uVar2 = (uint)*param_2;
    if ((char)*param_2 < '\0') {
      uVar2 = (uVar2 + (uint)*pbVar3 * 0x80) - 0x80;
      if (-1 < (char)*pbVar3) {
        pbVar3 = param_2 + 2;
        goto LAB_006fba20;
      }
      auVar4 = FUN_0066fe50();
      pbVar3 = auVar4._0_8_;
      if (pbVar3 == (byte *)0x0) {
        return (byte *)0x0;
      }
      if (auVar4._8_4_ == 0) {
        uVar2 = 0;
        goto LAB_006fba84;
      }
    }
    else {
LAB_006fba20:
      auVar4._8_4_ = uVar2;
      auVar4._0_8_ = pbVar3;
      auVar4._12_4_ = 0;
      if (uVar2 == 0) goto LAB_006fba84;
    }
    pbVar3 = auVar4._0_8_;
    uVar2 = auVar4._8_4_;
    if ((uVar2 & 7) == 4) {
LAB_006fba84:
      *(uint *)(param_3 + 10) = uVar2 - 1;
      return pbVar3;
    }
    param_2 = (byte *)FUN_006fbb04(auVar4._8_8_ & 0xffffffff,param_1,pbVar3,param_3);
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


// ===== 006fbab8  FUN_006fbab8 =====

void FUN_006fbab8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_2;
  FUN_006fbb04(param_1,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006fbb04  FUN_006fbb04 =====

void FUN_006fbb04(ulong param_1,undefined8 *param_2,byte *param_3,long param_4)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 uStack_79;
  undefined8 local_78 [6];
  long local_48;
  
  lVar5 = tpidr_el0;
  uVar9 = param_1 >> 3;
  local_48 = *(long *)(lVar5 + 0x28);
  if ((int)uVar9 != 0) {
    param_1 = param_1 & 7;
    pbVar7 = (byte *)0x0;
    if (param_1 < 3) {
      if (param_1 == 0) {
        bVar3 = *param_3;
        auVar12._8_8_ = (long)(char)bVar3;
        auVar12._0_8_ = param_3 + 1;
        if ((long)(char)bVar3 < 0) {
          bVar2 = param_3[1];
          iVar4 = (uint)bVar2 * 0x80 + (uint)bVar3 + -0x80;
          if ((char)bVar2 < '\0') {
            auVar12 = FUN_0066fd14(param_3,iVar4);
            pbVar7 = auVar12._0_8_;
            if (auVar12._0_8_ == (byte *)0x0) goto LAB_006fbd10;
          }
          else {
            auVar12._8_4_ = iVar4;
            auVar12._0_8_ = param_3 + 2;
            auVar12._12_4_ = 0;
          }
        }
        FUN_006faf8c(*param_2,uVar9 & 0xffffffff,auVar12._8_8_);
        pbVar7 = auVar12._0_8_;
        goto LAB_006fbd10;
      }
      if (param_1 == 1) {
        FUN_006fb194(*param_2,uVar9 & 0xffffffff,*(undefined8 *)param_3);
        pbVar7 = param_3 + 8;
        goto LAB_006fbd10;
      }
      if (param_1 != 2) goto LAB_006fbd10;
      uVar6 = FUN_006fb29c(*param_2,uVar9 & 0xffffffff);
      if ((char)*param_3 < '\0') {
        auVar11 = FUN_0066fed4(param_3);
        pbVar7 = auVar11._0_8_;
        if (auVar11._0_8_ == (byte *)0x0) goto LAB_006fbd10;
      }
      else {
        auVar11[8] = *param_3;
        auVar11._0_8_ = param_3 + 1;
        auVar11._9_7_ = 0;
      }
      lVar8 = auVar11._0_8_;
      lVar10 = (long)auVar11._8_4_;
      if ((*(long *)(param_4 + 8) - lVar8) + 0x10 < lVar10) {
        pbVar7 = (byte *)FUN_0066f6c8(param_4,lVar8,auVar11._8_8_ & 0xffffffff,uVar6);
      }
      else {
        FUN_00712d54(uVar6,lVar8,lVar10);
        pbVar7 = (byte *)(lVar8 + lVar10);
      }
joined_r0x006fbc44:
      if (pbVar7 != (byte *)0x0) goto LAB_006fbd10;
    }
    else {
      if (param_1 != 3) {
        if (param_1 == 4) {
          FUN_00675e64(local_78,3,
                       "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/parse_context.h"
                       ,0x390);
                    /* try { // try from 006fbc80 to 006fbc93 has its CatchHandler @ 006fbd74 */
          uVar6 = FUN_00675a58(local_78,"Can\'t happen");
                    /* try { // try from 006fbc94 to 006fbc9b has its CatchHandler @ 006fbd70 */
          FUN_00675ac0(&uStack_79,uVar6);
          FUN_00675e7c(local_78);
          pbVar7 = param_3;
        }
        else if (param_1 == 5) {
          pbVar7 = param_3 + 4;
          FUN_006fb08c(*param_2,uVar9 & 0xffffffff,*(undefined4 *)param_3);
        }
        goto LAB_006fbd10;
      }
      local_78[0] = FUN_006fb3b0(*param_2,uVar9 & 0xffffffff);
      iVar4 = *(int *)(param_4 + 0x58);
      *(int *)(param_4 + 0x58) = iVar4 + -1;
      if (0 < iVar4) {
        *(int *)(param_4 + 0x5c) = *(int *)(param_4 + 0x5c) + 1;
        pbVar7 = (byte *)FUN_006fb9d4(local_78,param_3,param_4);
        uVar6 = DAT_001b7178;
        uVar1 = *(uint *)(param_4 + 0x50);
        *(undefined4 *)(param_4 + 0x50) = 0;
        *(ulong *)(param_4 + 0x58) =
             CONCAT44((int)((ulong)*(undefined8 *)(param_4 + 0x58) >> 0x20) +
                      (int)((ulong)uVar6 >> 0x20),(int)*(undefined8 *)(param_4 + 0x58) + (int)uVar6)
        ;
        if (uVar1 == ((int)uVar9 << 3 | 3U)) goto joined_r0x006fbc44;
      }
    }
  }
  pbVar7 = (byte *)0x0;
LAB_006fbd10:
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pbVar7);
}


// ===== 006fbd9c  FUN_006fbd9c =====

void FUN_006fbd9c(long *param_1)

{
  void *__ptr;
  
  if (param_1 != (long *)0x0) {
    __ptr = (void *)*param_1;
    if (__ptr != (void *)param_1[1]) {
      FUN_006fa9f8(param_1);
      __ptr = (void *)*param_1;
    }
    if (__ptr != (void *)0x0) {
      param_1[1] = (long)__ptr;
      free(__ptr);
    }
    free(param_1);
    return;
  }
  return;
}


// ===== 006fbdec  FUN_006fbdec =====

void FUN_006fbdec(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 006fbe00  FUN_006fbe00 =====

undefined8 *
FUN_006fbe00(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,long param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  void *__dest;
  long lVar11;
  void *__src;
  undefined8 uVar12;
  
  if (0 < param_5) {
    puVar5 = (undefined8 *)param_1[1];
    if (param_1[2] - (long)puVar5 >> 4 < param_5) {
      lVar11 = *param_1;
      uVar1 = param_5 + ((long)puVar5 - lVar11 >> 4);
      if (uVar1 >> 0x3c != 0) {
        FUN_006fbdec();
LAB_006fc02c:
                    /* WARNING: Subroutine does not return */
        FUN_002f9ee0();
      }
      uVar4 = param_1[2] - lVar11;
      uVar8 = (long)uVar4 >> 3;
      if (uVar8 <= uVar1) {
        uVar8 = uVar1;
      }
      if (0x7fffffffffffffef < uVar4) {
        uVar8 = 0xfffffffffffffff;
      }
      if (uVar8 == 0) {
        lVar3 = 0;
      }
      else {
        if (uVar8 >> 0x3c != 0) goto LAB_006fc02c;
        lVar3 = FUN_00759c3c(uVar8 << 4);
      }
      puVar6 = (undefined8 *)(lVar3 + ((long)param_2 - lVar11 >> 4) * 0x10);
      lVar11 = param_5 * 0x10;
      puVar7 = puVar6;
      do {
        uVar12 = *param_3;
        lVar11 = lVar11 + -0x10;
        puVar7[1] = param_3[1];
        *puVar7 = uVar12;
        param_3 = param_3 + 2;
        puVar7 = puVar7 + 2;
      } while (lVar11 != 0);
      memcpy(puVar6 + param_5 * 2,param_2,(long)puVar5 - (long)param_2);
      __src = (void *)*param_1;
      param_1[1] = (long)param_2;
      __dest = (void *)((long)puVar6 - ((long)param_2 - (long)__src));
      memcpy(__dest,__src,(long)param_2 - (long)__src);
      *param_1 = (long)__dest;
      param_1[1] = (long)(puVar6 + param_5 * 2) + ((long)puVar5 - (long)param_2);
      param_1[2] = lVar3 + uVar8 * 0x10;
      param_2 = puVar6;
      if (__src != (void *)0x0) {
        free(__src);
      }
    }
    else {
      lVar11 = (long)puVar5 - (long)param_2 >> 4;
      puVar6 = puVar5;
      if (lVar11 < param_5) {
        puVar7 = (undefined8 *)((long)param_3 + ((long)puVar5 - (long)param_2));
        if (puVar7 == param_4) {
          param_1[1] = (long)puVar5;
        }
        else {
          puVar10 = puVar5;
          do {
            puVar9 = (undefined8 *)(((long)param_3 - (long)param_2) + (long)puVar6);
            uVar12 = *puVar9;
            puVar6 = puVar6 + 2;
            puVar10[1] = puVar9[1];
            *puVar10 = uVar12;
            puVar10 = puVar10 + 2;
          } while ((undefined8 *)(((long)param_3 - (long)param_2) + (long)puVar6) != param_4);
          param_1[1] = (long)puVar6;
        }
        if (lVar11 < 1) {
          return param_2;
        }
        puVar9 = puVar6 + param_5 * -2;
        puVar10 = param_2 + param_5 * 2;
        puVar2 = puVar6;
      }
      else {
        puVar7 = param_3 + param_5 * 2;
        puVar9 = puVar5 + param_5 * -2;
        puVar10 = param_2 + param_5 * 2;
        puVar2 = puVar5;
      }
      for (; puVar9 < puVar5; puVar9 = puVar9 + 2) {
        uVar12 = *puVar9;
        puVar6[1] = puVar9[1];
        *puVar6 = uVar12;
        puVar6 = puVar6 + 2;
      }
      param_1[1] = (long)puVar6;
      if (puVar2 != puVar10) {
        memmove((void *)((long)puVar2 - ((long)puVar2 - (long)puVar10)),param_2,
                (long)puVar2 - (long)puVar10);
      }
      puVar5 = param_2;
      if (puVar7 != param_3) {
        do {
          puVar6 = param_3 + 2;
          uVar12 = *param_3;
          puVar5[1] = param_3[1];
          *puVar5 = uVar12;
          param_3 = puVar6;
          puVar5 = puVar5 + 2;
        } while (puVar6 != puVar7);
      }
    }
  }
  return param_2;
}


// ===== 006fc030  FUN_006fc030 =====

uint FUN_006fc030(ulong *param_1,uint param_2,long param_3)

{
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  ulong *puVar12;
  long lVar13;
  undefined1 auVar14 [12];
  ulong local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  if (7 < param_2) {
    uVar7 = param_2 & 7;
    uVar5 = param_2 >> 3;
    uVar8 = 0;
    if (uVar7 < 2) {
      if ((param_2 & 7) == 0) {
        pcVar1 = (char *)*param_1;
        if ((pcVar1 < (char *)param_1[1]) && (lVar13 = (long)*pcVar1, -1 < lVar13)) {
          uVar8 = 1;
          *param_1 = (ulong)(pcVar1 + 1);
        }
        else {
          auVar14 = FUN_0066ca3c(param_1,uVar5);
          lVar13 = auVar14._0_8_;
          uVar8 = auVar14._8_4_ & 1;
        }
        if ((param_3 != 0) && (uVar8 != 0)) {
          FUN_006faf8c(param_3,uVar5,lVar13);
          uVar8 = 1;
        }
      }
      else if (uVar7 == 1) {
        puVar12 = (ulong *)*param_1;
        if ((int)param_1[1] - (int)puVar12 < 8) {
          uVar8 = FUN_0066c944(param_1,&local_50);
        }
        else {
          local_50 = *puVar12;
          *param_1 = (ulong)(puVar12 + 1);
          uVar8 = 1;
        }
        if ((param_3 != 0) && ((uVar8 & 1) != 0)) {
          FUN_006fb194(param_3,uVar5,local_50);
        }
      }
      goto LAB_006fc060;
    }
    if (uVar7 != 2) {
      if (uVar7 != 3) {
        uVar8 = 0;
        if (uVar7 == 5) {
          puVar11 = (undefined4 *)*param_1;
          if ((int)param_1[1] - (int)puVar11 < 4) {
            uVar8 = FUN_0066c84c(param_1,&local_50);
          }
          else {
            uVar4 = *puVar11;
            *param_1 = (ulong)(puVar11 + 1);
            uVar8 = 1;
            local_50 = CONCAT44(local_50._4_4_,uVar4);
          }
          if ((param_3 != 0) && ((uVar8 & 1) != 0)) {
            FUN_006fb08c(param_3,uVar5,local_50 & 0xffffffff);
          }
        }
        goto LAB_006fc060;
      }
      iVar3 = *(int *)((long)param_1 + 0x34);
      *(int *)((long)param_1 + 0x34) = iVar3 + -1;
      if (0 < iVar3) {
        if (param_3 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = FUN_006fb3b0(param_3);
        }
        do {
          pbVar2 = (byte *)*param_1;
          if (pbVar2 < (byte *)param_1[1]) {
            uVar7 = (uint)*pbVar2;
            if ((char)*pbVar2 < '\0') goto LAB_006fc2a4;
            *param_1 = (ulong)(pbVar2 + 1);
            *(uint *)(param_1 + 4) = uVar7;
            if (uVar7 != 0) goto LAB_006fc2b8;
            uVar7 = 0;
LAB_006fc2dc:
            if (*(int *)((long)param_1 + 0x34) < (int)param_1[7]) {
              *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + 1;
            }
            uVar8 = (uint)(uVar7 == (param_2 & 0xfffffff8 | 4));
            break;
          }
          uVar7 = 0;
LAB_006fc2a4:
          uVar7 = FUN_0066cd78(param_1,uVar7);
          *(uint *)(param_1 + 4) = uVar7;
          if (uVar7 == 0) goto LAB_006fc2dc;
LAB_006fc2b8:
          if ((uVar7 & 7) == 4) goto LAB_006fc2dc;
          uVar10 = FUN_006fc030(param_1,uVar7,uVar9);
          uVar8 = 0;
        } while ((uVar10 & 1) != 0);
        goto LAB_006fc060;
      }
      goto LAB_006fc05c;
    }
    pbVar2 = (byte *)*param_1;
    if (pbVar2 < (byte *)param_1[1]) {
      uVar10 = (ulong)*pbVar2;
      if ((char)*pbVar2 < '\0') goto LAB_006fc204;
      *param_1 = (ulong)(pbVar2 + 1);
    }
    else {
      uVar10 = 0;
LAB_006fc204:
      uVar10 = FUN_0066cc04(param_1,uVar10);
      if ((long)uVar10 < 0) goto LAB_006fc05c;
    }
    if (param_3 == 0) {
      if (-1 < (int)uVar10) {
        if ((int)param_1[1] - (int)*param_1 < (int)uVar10) {
          uVar10 = FUN_0066c330(param_1,uVar10 & 0xffffffff);
          if ((uVar10 & 1) == 0) goto LAB_006fc05c;
        }
        else {
          *param_1 = *param_1 + (uVar10 & 0xffffffff);
        }
LAB_006fc30c:
        uVar8 = 1;
        goto LAB_006fc060;
      }
    }
    else {
      uVar9 = FUN_006fb29c(param_3,uVar5);
      uVar10 = FUN_0066c688(param_1,uVar9,uVar10 & 0xffffffff);
      if ((uVar10 & 1) != 0) goto LAB_006fc30c;
    }
  }
LAB_006fc05c:
  uVar8 = 0;
LAB_006fc060:
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return uVar8 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006fc378  FUN_006fc378 =====

bool FUN_006fc378(ulong *param_1,undefined8 param_2)

{
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  
  do {
    pbVar1 = (byte *)*param_1;
    if (pbVar1 < (byte *)param_1[1]) {
      uVar4 = (uint)*pbVar1;
      if ((char)*pbVar1 < '\0') goto LAB_006fc3d0;
      *param_1 = (ulong)(pbVar1 + 1);
      *(uint *)(param_1 + 4) = uVar4;
      bVar3 = (uVar4 & 7) == 4;
      bVar2 = uVar4 == 0 || bVar3;
      if (uVar4 == 0 || bVar3) {
        return bVar2;
      }
    }
    else {
      uVar4 = 0;
LAB_006fc3d0:
      uVar4 = FUN_0066cd78(param_1,uVar4);
      *(uint *)(param_1 + 4) = uVar4;
      bVar2 = uVar4 == 0 || (uVar4 & 7) == 4;
      if (bVar2) {
        return bVar2;
      }
    }
    uVar5 = FUN_006fc030(param_1,uVar4,param_2);
    if ((uVar5 & 1) == 0) {
      return bVar2;
    }
  } while( true );
}


// ===== 006fc418  FUN_006fc418 =====

byte * FUN_006fc418(long *param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  size_t __n;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  int *piVar13;
  long lVar14;
  
  lVar9 = *param_1;
  if (0 < (int)((ulong)(param_1[1] - lVar9) >> 4)) {
    lVar14 = 0;
    do {
      if (param_2 < (byte *)*param_3) {
        piVar13 = (int *)(lVar9 + lVar14 * 0x10);
        iVar4 = piVar13[1];
        if (1 < iVar4) goto LAB_006fc494;
LAB_006fc6b8:
        if (iVar4 == 0) {
          uVar1 = *piVar13 << 3;
          uVar7 = *(ulong *)(piVar13 + 2);
          *param_2 = (byte)uVar1;
          if (uVar1 < 0x80) {
            pbVar3 = param_2 + 1;
          }
          else {
            uVar8 = uVar1 >> 7;
            pbVar3 = param_2 + 2;
            *param_2 = (byte)uVar1 | 0x80;
            param_2[1] = (byte)uVar8;
            pbVar12 = pbVar3;
            if (0x3fff < uVar1) {
              do {
                uVar1 = uVar8 >> 0xe;
                uVar8 = uVar8 >> 7;
                pbVar12[-1] = pbVar12[-1] | 0x80;
                pbVar3 = pbVar12 + 1;
                *pbVar12 = (byte)uVar8;
                pbVar12 = pbVar3;
              } while (uVar1 != 0);
            }
          }
          *pbVar3 = (byte)uVar7;
          if (uVar7 < 0x80) {
            param_2 = pbVar3 + 1;
          }
          else {
            uVar11 = uVar7 >> 7;
            param_2 = pbVar3 + 2;
            *pbVar3 = (byte)uVar7 | 0x80;
            pbVar3[1] = (byte)uVar11;
            pbVar3 = param_2;
            if (0x3fff < uVar7) {
              do {
                uVar7 = uVar11 >> 0xe;
                uVar11 = uVar11 >> 7;
                pbVar3[-1] = pbVar3[-1] | 0x80;
                param_2 = pbVar3 + 1;
                *pbVar3 = (byte)uVar11;
                pbVar3 = param_2;
              } while (uVar7 != 0);
            }
          }
        }
        else if (iVar4 == 1) {
          iVar4 = *piVar13;
          iVar2 = piVar13[2];
          uVar1 = iVar4 << 3 | 5;
          *param_2 = (byte)uVar1;
          if (uVar1 < 0x80) {
            pbVar3 = param_2 + 1;
            param_2 = param_2 + 5;
            *(int *)pbVar3 = iVar2;
          }
          else {
            *param_2 = (byte)uVar1 | 0x80;
            uVar8 = (uint)(iVar4 << 3) >> 7;
            param_2[1] = (byte)uVar8;
            pbVar3 = param_2 + 2;
            pbVar12 = pbVar3;
            if (0x3fff < uVar1) {
              do {
                uVar1 = uVar8 >> 0xe;
                uVar8 = uVar8 >> 7;
                pbVar12[-1] = pbVar12[-1] | 0x80;
                pbVar3 = pbVar12 + 1;
                *pbVar12 = (byte)uVar8;
                pbVar12 = pbVar3;
              } while (uVar1 != 0);
            }
            param_2 = pbVar3 + 4;
            *(int *)pbVar3 = iVar2;
          }
        }
      }
      else {
        param_2 = (byte *)FUN_0066d3f8(param_3,param_2);
        piVar13 = (int *)(lVar9 + lVar14 * 0x10);
        iVar4 = piVar13[1];
        if (iVar4 < 2) goto LAB_006fc6b8;
LAB_006fc494:
        if (iVar4 == 2) {
          iVar4 = *piVar13;
          uVar6 = *(undefined8 *)(piVar13 + 2);
          uVar1 = iVar4 << 3 | 1;
          *param_2 = (byte)uVar1;
          if (uVar1 < 0x80) {
            pbVar3 = param_2 + 1;
          }
          else {
            *param_2 = (byte)uVar1 | 0x80;
            uVar8 = (uint)(iVar4 << 3) >> 7;
            param_2[1] = (byte)uVar8;
            pbVar3 = param_2 + 2;
            pbVar12 = pbVar3;
            if (0x3fff < uVar1) {
              do {
                uVar1 = uVar8 >> 0xe;
                uVar8 = uVar8 >> 7;
                pbVar12[-1] = pbVar12[-1] | 0x80;
                pbVar3 = pbVar12 + 1;
                *pbVar12 = (byte)uVar8;
                pbVar12 = pbVar3;
              } while (uVar1 != 0);
            }
          }
          param_2 = pbVar3 + 8;
          *(undefined8 *)pbVar3 = uVar6;
        }
        else if (iVar4 == 3) {
          pbVar3 = *(byte **)(piVar13 + 2);
          __n = (ulong)(*pbVar3 >> 1);
          if ((*pbVar3 & 1) != 0) {
            __n = *(size_t *)(pbVar3 + 8);
          }
          if ((long)__n < 0x80) {
            uVar1 = *piVar13 << 3;
            if (uVar1 < 0x80) {
              lVar9 = 1;
            }
            else if (uVar1 < 0x4000) {
              lVar9 = 2;
            }
            else if (uVar1 < 0x200000) {
              lVar9 = 3;
            }
            else {
              lVar9 = 4;
              if (uVar1 >> 0x1c != 0) {
                lVar9 = 5;
              }
            }
            if ((long)__n <= (long)(*param_3 + ~(ulong)(param_2 + lVar9) + 0x10)) {
              uVar8 = uVar1 | 2;
              *param_2 = (byte)uVar8;
              if (uVar8 < 0x80) {
                pbVar12 = param_2 + 1;
              }
              else {
                uVar5 = uVar1 >> 7;
                pbVar12 = param_2 + 2;
                *param_2 = (byte)uVar1 | 0x82;
                param_2[1] = (byte)uVar5;
                pbVar10 = pbVar12;
                if (0x3fff < uVar8) {
                  do {
                    uVar1 = uVar5 >> 0xe;
                    uVar5 = uVar5 >> 7;
                    pbVar10[-1] = pbVar10[-1] | 0x80;
                    pbVar12 = pbVar10 + 1;
                    *pbVar10 = (byte)uVar5;
                    pbVar10 = pbVar12;
                  } while (uVar1 != 0);
                }
              }
              *pbVar12 = (byte)__n;
              pbVar10 = *(byte **)(pbVar3 + 0x10);
              if ((*pbVar3 & 1) == 0) {
                pbVar10 = pbVar3 + 1;
              }
              memcpy(pbVar12 + 1,pbVar10,__n);
              param_2 = pbVar12 + 1 + __n;
              goto LAB_006fc460;
            }
          }
          param_2 = (byte *)FUN_0066d8d0(param_3);
        }
        else if (iVar4 == 4) {
          iVar4 = *piVar13;
          uVar1 = iVar4 << 3 | 3;
          *param_2 = (byte)uVar1;
          if (uVar1 < 0x80) {
            pbVar3 = param_2 + 1;
          }
          else {
            pbVar3 = param_2 + 2;
            *param_2 = (byte)uVar1 | 0x80;
            uVar8 = (uint)(iVar4 << 3) >> 7;
            uVar7 = (ulong)uVar8;
            param_2[1] = (byte)uVar8;
            pbVar12 = pbVar3;
            if (0x3fff < uVar1) {
              do {
                uVar11 = uVar7 >> 0xe;
                uVar7 = uVar7 >> 7;
                pbVar12[-1] = pbVar12[-1] | 0x80;
                pbVar3 = pbVar12 + 1;
                *pbVar12 = (byte)uVar7;
                pbVar12 = pbVar3;
              } while (uVar11 != 0);
            }
          }
          pbVar3 = (byte *)FUN_006fc418(*(undefined8 *)(piVar13 + 2),pbVar3,param_3);
          if (pbVar3 < (byte *)*param_3) {
            iVar4 = *piVar13;
            uVar1 = iVar4 << 3 | 4;
            *pbVar3 = (byte)uVar1;
          }
          else {
            pbVar3 = (byte *)FUN_0066d3f8(param_3);
            iVar4 = *piVar13;
            uVar1 = iVar4 << 3 | 4;
            *pbVar3 = (byte)uVar1;
          }
          if (uVar1 < 0x80) {
            param_2 = pbVar3 + 1;
          }
          else {
            param_2 = pbVar3 + 2;
            *pbVar3 = (byte)uVar1 | 0x80;
            uVar8 = (uint)(iVar4 << 3) >> 7;
            pbVar3[1] = (byte)uVar8;
            pbVar3 = param_2;
            if (0x3fff < uVar1) {
              do {
                uVar1 = uVar8 >> 0xe;
                uVar8 = uVar8 >> 7;
                pbVar3[-1] = pbVar3[-1] | 0x80;
                param_2 = pbVar3 + 1;
                *pbVar3 = (byte)uVar8;
                pbVar3 = param_2;
              } while (uVar1 != 0);
            }
          }
        }
      }
LAB_006fc460:
      lVar9 = *param_1;
      lVar14 = lVar14 + 1;
    } while (lVar14 < (int)((ulong)(param_1[1] - lVar9) >> 4));
  }
  return param_2;
}


// ===== 006fc864  FUN_006fc864 =====

undefined2 * FUN_006fc864(long *param_1,undefined2 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *param_1;
  lVar5 = param_1[1];
  if (0 < (int)((ulong)(lVar5 - lVar7) >> 4)) {
    lVar8 = 0;
    do {
      puVar1 = (uint *)(lVar7 + lVar8 * 0x10);
      if (puVar1[1] == 3) {
        if (param_2 < (undefined2 *)*param_3) {
          *param_2 = 0x100b;
          uVar6 = *puVar1;
          *(char *)(param_2 + 1) = (char)uVar6;
          if (uVar6 < 0x80) goto LAB_006fc8ac;
LAB_006fc918:
          uVar4 = uVar6 >> 7;
          *(byte *)(param_2 + 1) = (byte)uVar6 | 0x80;
          *(char *)((long)param_2 + 3) = (char)uVar4;
          param_2 = param_2 + 2;
          puVar3 = param_2;
          if (0x3fff < uVar6) {
            do {
              uVar6 = uVar4 >> 0xe;
              uVar4 = uVar4 >> 7;
              *(byte *)((long)puVar3 + -1) = *(byte *)((long)puVar3 + -1) | 0x80;
              param_2 = (undefined2 *)((long)puVar3 + 1);
              *(char *)puVar3 = (char)uVar4;
              puVar3 = param_2;
            } while (uVar6 != 0);
          }
        }
        else {
          param_2 = (undefined2 *)FUN_0066d3f8(param_3);
          *param_2 = 0x100b;
          uVar6 = *puVar1;
          *(char *)(param_2 + 1) = (char)uVar6;
          if (0x7f < uVar6) goto LAB_006fc918;
LAB_006fc8ac:
          param_2 = (undefined2 *)((long)param_2 + 3);
        }
        *(undefined1 *)param_2 = 0x1a;
        puVar2 = (undefined1 *)FUN_006fb900(puVar1,(undefined1 *)((long)param_2 + 1),param_3);
        if ((undefined1 *)*param_3 <= puVar2) {
          puVar2 = (undefined1 *)FUN_0066d3f8(param_3);
        }
        param_2 = (undefined2 *)(puVar2 + 1);
        *puVar2 = 0xc;
        lVar7 = *param_1;
        lVar5 = param_1[1];
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)((ulong)(lVar5 - lVar7) >> 4));
  }
  return param_2;
}


// ===== 006fc9ac  FUN_006fc9ac =====

long FUN_006fc9ac(long *param_1)

{
  ulong uVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  
  piVar6 = (int *)*param_1;
  if ((int)((ulong)(param_1[1] - (long)piVar6) >> 4) < 1) {
    lVar5 = 0;
  }
  else {
    uVar7 = (ulong)(param_1[1] - (long)piVar6) >> 4 & 0x7fffffff;
    lVar5 = 0;
    do {
      iVar2 = piVar6[1];
      if (iVar2 < 2) {
        if (iVar2 == 0) {
          lVar5 = lVar5 + ((LZCOUNT(*(ulong *)(piVar6 + 2) | 1) ^ 0x3fU) * 9 + 0x49 >> 6) +
                  (ulong)(((uint)LZCOUNT(*piVar6 << 3 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
        }
        else if (iVar2 == 1) {
          lVar5 = lVar5 + (ulong)(((uint)LZCOUNT(*piVar6 << 3 | 5) ^ 0x1f) * 9 + 0x49 >> 6) + 4;
        }
      }
      else if (iVar2 == 2) {
        lVar5 = lVar5 + (ulong)(((uint)LZCOUNT(*piVar6 << 3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 8;
      }
      else if (iVar2 == 3) {
        bVar3 = **(byte **)(piVar6 + 2);
        uVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar1 = *(ulong *)(*(byte **)(piVar6 + 2) + 8);
        }
        lVar5 = uVar1 + lVar5 + (ulong)(((uint)LZCOUNT(*piVar6 << 3 | 3) ^ 0x1f) * 9 + 0x49 >> 6) +
                (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      }
      else if (iVar2 == 4) {
        iVar2 = *piVar6;
        lVar4 = FUN_006fc9ac(*(undefined8 *)(piVar6 + 2));
        lVar5 = lVar4 + lVar5 + (ulong)(((uint)LZCOUNT(iVar2 << 3 | 3) ^ 0x1f) * 9 + 0x49 >> 6) +
                (ulong)(((uint)LZCOUNT(iVar2 << 3 | 5) ^ 0x1f) * 9 + 0x49 >> 6);
      }
      uVar7 = uVar7 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar7 != 0);
  }
  return lVar5;
}


// ===== 006fcb84  FUN_006fcb84 =====

void FUN_006fcb84(long *param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  undefined8 extraout_x1;
  uint uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  long *local_70;
  long lStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar6 = (**(code **)(*param_1 + 0x80))();
  (**(code **)(*param_1 + 0x80))(param_1);
  if ((*(byte *)(*(long *)(lVar6 + 0x20) + 0x48) & 1) == 0) {
    do {
      pbVar7 = param_2;
      if ((byte *)*param_3 <= param_2) {
        iVar3 = (int)param_2 - *(int *)(param_3 + 1);
        if (*(int *)((long)param_3 + 0x1c) == iVar3) {
          pbVar7 = (byte *)0x0;
          if (param_3[2] != 0 || iVar3 < 1) {
            pbVar7 = param_2;
          }
          if (*(long *)(lVar4 + 0x28) == local_58) {
            return;
          }
          goto LAB_006fcd70;
        }
        auVar11 = FUN_0066f53c(param_3,iVar3,*(undefined4 *)((long)param_3 + 0x5c));
        pbVar7 = auVar11._0_8_;
        if ((auVar11 & (undefined1  [16])0x1) != (undefined1  [16])0x0) break;
      }
      bVar2 = *pbVar7;
      uVar10 = (ulong)(uint)bVar2;
      pbVar5 = pbVar7 + 1;
      if ((char)bVar2 < '\0') {
        bVar1 = pbVar7[1];
        uVar10 = (ulong)(((uint)bVar2 + (uint)bVar1 * 0x80) - 0x80);
        if (-1 < (char)bVar1) {
          pbVar5 = pbVar7 + 2;
          goto LAB_006fcc70;
        }
        auVar11 = FUN_0066fe50(pbVar7,uVar10);
        pbVar7 = auVar11._0_8_;
        if (pbVar7 != (byte *)0x0) {
          if (auVar11._8_4_ != 0) goto LAB_006fcc74;
          uVar9 = 0;
LAB_006fcd18:
          *(uint *)(param_3 + 10) = uVar9 - 1;
        }
        break;
      }
LAB_006fcc70:
      pbVar7 = pbVar5;
      auVar11._8_8_ = uVar10;
      auVar11._0_8_ = pbVar7;
      uVar9 = (uint)uVar10;
      if (uVar9 == 0) goto LAB_006fcd18;
LAB_006fcc74:
      pbVar7 = auVar11._0_8_;
      uVar9 = auVar11._8_4_;
      if ((uVar9 & 7) == 4) goto LAB_006fcd18;
      uVar9 = uVar9 >> 3;
      lVar8 = FUN_0068c9d8(lVar6,uVar9);
      if (lVar8 == 0) {
        lVar8 = FUN_0068d53c(lVar6,uVar9);
        if (lVar8 == 0) {
          lVar8 = 0;
        }
        else if (param_3[0xc] == 0) {
          lVar8 = FUN_00684764(extraout_x1,uVar9);
        }
        else {
          lVar8 = FUN_0068bfbc(param_3[0xc],lVar6,uVar9);
        }
      }
      param_2 = (byte *)FUN_006fcf50(param_1,pbVar7,param_3,auVar11._8_8_ & 0xffffffff,extraout_x1,
                                     lVar8);
      pbVar7 = param_2;
    } while (param_2 != (byte *)0x0);
    if (*(long *)(lVar4 + 0x28) == local_58) {
      return;
    }
  }
  else {
    local_70 = param_1;
    lStack_68 = lVar6;
    local_60 = extraout_x1;
    pbVar7 = (byte *)FUN_006fcd74(&local_70,param_2,param_3);
    if (*(long *)(lVar4 + 0x28) == local_58) {
      return;
    }
  }
LAB_006fcd70:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pbVar7);
}


// ===== 006fcd74  FUN_006fcd74 =====

byte * FUN_006fcd74(undefined8 *param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  uVar3 = DAT_001b7178;
  while( true ) {
    if ((byte *)*param_3 <= param_2) {
      iVar1 = (int)param_2 - *(int *)(param_3 + 1);
      if (*(int *)((long)param_3 + 0x1c) == iVar1) {
        pbVar6 = (byte *)0x0;
        if (param_3[2] != 0 || iVar1 < 1) {
          pbVar6 = param_2;
        }
        return pbVar6;
      }
      auVar9 = FUN_0066f53c(param_3,iVar1,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar9._0_8_;
      if ((auVar9 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        return param_2;
      }
    }
    pbVar6 = param_2 + 1;
    bVar2 = *param_2;
    auVar9[8] = bVar2;
    auVar9._0_8_ = pbVar6;
    auVar9._9_7_ = 0;
    uVar7 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      iVar1 = uVar7 + (uint)*pbVar6 * 0x80 + -0x80;
      if ((char)*pbVar6 < '\0') {
        auVar9 = FUN_0066fe50(param_2,iVar1);
        pbVar6 = auVar9._0_8_;
        if (pbVar6 == (byte *)0x0) {
          return (byte *)0x0;
        }
        if (auVar9._8_4_ == 0) {
          uVar7 = 0;
          break;
        }
      }
      else {
        pbVar6 = param_2 + 2;
        auVar9._8_4_ = iVar1;
        auVar9._0_8_ = pbVar6;
        auVar9._12_4_ = 0;
        if (iVar1 == 0) {
          uVar7 = 0;
          break;
        }
      }
    }
    else if (uVar7 == 0) break;
    pbVar6 = auVar9._0_8_;
    uVar7 = auVar9._8_4_;
    if ((uVar7 & 7) == 4) break;
    if (uVar7 == 0xb) {
      iVar1 = *(int *)(param_3 + 0xb);
      *(int *)(param_3 + 0xb) = iVar1 + -1;
      if (iVar1 < 1) {
        return (byte *)0x0;
      }
      *(int *)((long)param_3 + 0x5c) = *(int *)((long)param_3 + 0x5c) + 1;
      param_2 = (byte *)FUN_00702f28(param_1,pbVar6,param_3);
      iVar1 = *(int *)(param_3 + 10);
      *(undefined4 *)(param_3 + 10) = 0;
      param_3[0xb] = CONCAT44((int)((ulong)param_3[0xb] >> 0x20) + (int)((ulong)uVar3 >> 0x20),
                              (int)param_3[0xb] + (int)uVar3);
      if (iVar1 != 0xb) {
        return (byte *)0x0;
      }
    }
    else {
      uVar8 = auVar9._8_8_ >> 3 & 0x1fffffff;
      lVar4 = FUN_0068d53c(param_1[1],uVar8);
      if (lVar4 == 0) {
        uVar5 = 0;
      }
      else if (param_3[0xc] == 0) {
        uVar5 = FUN_00684764(param_1[2],uVar8);
      }
      else {
        uVar5 = FUN_0068bfbc(param_3[0xc],param_1[1],uVar8);
      }
      param_2 = (byte *)FUN_006fcf50(*param_1,pbVar6,param_3,auVar9._8_8_ & 0xffffffff,param_1[2],
                                     uVar5);
    }
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  }
  *(uint *)(param_3 + 10) = uVar7 - 1;
  return pbVar6;
}


// ===== 006fcf50  FUN_006fcf50 =====

void FUN_006fcf50(undefined8 param_1,ulong *param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong *puVar9;
  code **ppcVar10;
  uint uVar11;
  ulong uVar12;
  code ***pppcVar13;
  long lVar14;
  undefined1 auVar15 [12];
  code **local_100;
  long *plStack_f8;
  void *local_f0;
  code **local_e0;
  long *plStack_d8;
  void *local_d0;
  undefined8 local_c8;
  long *plStack_c0;
  void *local_b8;
  undefined8 local_98;
  long lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong *local_78;
  long local_70;
  code *pcStack_68;
  undefined8 *local_60;
  long local_58;
  
  pppcVar13 = &local_100;
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  local_78 = param_2;
  if (param_6 == 0) {
    puVar9 = (ulong *)FUN_00679604(param_5,param_1);
    if (*(long *)(lVar5 + 0x28) == local_58) {
      FUN_006fbab8(param_4,puVar9,param_2,param_3);
      return;
    }
    goto LAB_006fda38;
  }
  plVar7 = *(long **)(param_6 + 0x18);
  uVar11 = (uint)param_4 & 7;
  if ((plVar7 != (long *)0x0) &&
     (pcStack_68 = thunk_FUN_006af330, local_70 = param_6, *plVar7 != -1)) {
    local_c8 = &pcStack_68;
    plStack_c0 = &local_70;
    local_60 = &local_c8;
    FUN_00710f84(plVar7,&local_60,FUN_00685640);
  }
  uVar12 = (ulong)*(byte *)(param_6 + 2);
  if (uVar11 != *(uint *)(PTR_DAT_007a3228 + uVar12 * 4)) {
    if (((*(byte *)(param_6 + 1) ^ 0xff) & 0x60) == 0) {
      plVar7 = *(long **)(param_6 + 0x18);
      if (plVar7 != (long *)0x0) {
        pcStack_68 = thunk_FUN_006af330;
        local_70 = param_6;
        if (*plVar7 != -1) {
          local_c8 = &pcStack_68;
          plStack_c0 = &local_70;
          local_60 = &local_c8;
          FUN_00710f84(plVar7,&local_60,FUN_00685640);
        }
        uVar12 = (ulong)*(byte *)(param_6 + 2);
      }
      if ((uVar11 == 2) && ((int)uVar12 - 0xdU < 0xfffffffc)) {
        plVar7 = *(long **)(param_6 + 0x18);
        if (plVar7 != (long *)0x0) {
          pcStack_68 = thunk_FUN_006af330;
          local_70 = param_6;
          if (*plVar7 != -1) {
            local_c8 = &pcStack_68;
            plStack_c0 = &local_70;
            local_60 = &local_c8;
            FUN_00710f84(plVar7,&local_60,FUN_00685640);
          }
          uVar12 = (ulong)*(byte *)(param_6 + 2);
        }
        switch((int)uVar12) {
        case 1:
          uVar8 = FUN_00684878(param_5,param_1,param_6);
          puVar9 = (ulong *)FUN_00670620(uVar8,local_78,param_3);
          break;
        case 2:
          uVar8 = FUN_00684860(param_5,param_1,param_6);
          puVar9 = (ulong *)FUN_00670528(uVar8,local_78,param_3);
          break;
        case 3:
          uVar8 = FUN_00684818(param_5,param_1,param_6);
          puVar9 = (ulong *)FUN_006700e8(uVar8,local_78,param_3);
          break;
        case 4:
          uVar8 = FUN_00684848(param_5,param_1,param_6);
          puVar9 = (ulong *)FUN_006700f8(uVar8,local_78,param_3);
          break;
        case 5:
          uVar8 = FUN_00684800(param_5,param_1,param_6);
          puVar9 = (ulong *)FUN_006700c8(uVar8,local_78,param_3);
          break;
        case 6:
          uVar8 = FUN_00684848(param_5,param_1,param_6);
          puVar9 = (ulong *)FUN_00670338(uVar8,local_78,param_3);
          break;
        case 7:
          uVar8 = FUN_00684830(param_5,param_1,param_6);
          puVar9 = (ulong *)FUN_00670148(uVar8,local_78,param_3);
          break;
        case 8:
          uVar8 = FUN_00684890(param_5,param_1,param_6);
          puVar9 = (ulong *)FUN_00670138(uVar8,local_78,param_3);
          break;
        case 9:
        case 10:
        case 0xb:
        case 0xc:
          FUN_00675e64(&local_c8,3,
                       "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/wire_format.cc"
                       ,0x37c);
                    /* try { // try from 006fd1d4 to 006fd1e7 has its CatchHandler @ 006fd9fc */
          uVar8 = FUN_00675a58(&local_c8,"Can\'t reach");
                    /* try { // try from 006fd1e8 to 006fd1ef has its CatchHandler @ 006fd9f8 */
          FUN_00675ac0(&local_60,uVar8);
          FUN_00675e7c(&local_c8);
          puVar9 = (ulong *)0x0;
          break;
        case 0xd:
          uVar8 = FUN_00684830(param_5,param_1,param_6);
          puVar9 = (ulong *)FUN_006700d8(uVar8,local_78,param_3);
          break;
        case 0xe:
          uVar8 = FUN_00684800(param_5,param_1,param_6);
          if (*(char *)(*(long *)(param_6 + 0x10) + 3) == '\x03') {
            puVar9 = (ulong *)FUN_00670128(uVar8,local_78,param_3);
          }
          else {
            local_98 = uVar8;
            lStack_90 = param_6;
            local_88 = param_5;
            uStack_80 = param_1;
            puVar9 = (ulong *)FUN_006fda3c(param_3,local_78,&local_98);
          }
          break;
        case 0xf:
          uVar8 = FUN_00684800(param_5,param_1,param_6);
          puVar9 = (ulong *)FUN_00670240(uVar8,local_78,param_3);
          break;
        case 0x10:
          uVar8 = FUN_00684818(param_5,param_1,param_6);
          puVar9 = (ulong *)FUN_00670430(uVar8,local_78,param_3);
          break;
        case 0x11:
          uVar8 = FUN_00684800(param_5,param_1,param_6);
          puVar9 = (ulong *)FUN_00670108(uVar8,local_78,param_3);
          break;
        case 0x12:
          uVar8 = FUN_00684818(param_5,param_1,param_6);
          puVar9 = (ulong *)FUN_00670118(uVar8,local_78,param_3);
          break;
        default:
          goto switchD_006fd1b8_default;
        }
        goto LAB_006fd220;
      }
    }
    uVar8 = FUN_00679604(param_5,param_1);
    puVar9 = (ulong *)FUN_006fbab8(param_4,uVar8,local_78,param_3);
    goto LAB_006fd220;
  }
switchD_006fd1b8_default:
  uVar11 = (uint)uVar12;
  plVar7 = *(long **)(param_6 + 0x18);
  if (plVar7 != (long *)0x0) {
    pcStack_68 = thunk_FUN_006af330;
    local_70 = param_6;
    if (*plVar7 != -1) {
      local_c8 = &pcStack_68;
      plStack_c0 = &local_70;
      local_60 = &local_c8;
      FUN_00710f84(plVar7,&local_60,FUN_00685640);
    }
    uVar11 = (uint)*(byte *)(param_6 + 2);
  }
  bVar6 = false;
  switch(uVar11) {
  case 1:
    uVar12 = *local_78;
    if (((*(byte *)(param_6 + 1) ^ 0xff) & 0x60) == 0) {
      local_78 = local_78 + 1;
      FUN_0067fafc();
      puVar9 = local_78;
    }
    else {
      local_78 = local_78 + 1;
      FUN_0067f658(uVar12,param_5,param_1,param_6);
      puVar9 = local_78;
    }
    break;
  case 2:
    uVar12 = *local_78;
    if (((*(byte *)(param_6 + 1) ^ 0xff) & 0x60) == 0) {
      local_78 = (ulong *)((long)local_78 + 4);
      FUN_0067f2a8();
      puVar9 = local_78;
    }
    else {
      local_78 = (ulong *)((long)local_78 + 4);
      FUN_0067ee04((uint)uVar12,param_5,param_1,param_6);
      puVar9 = local_78;
    }
    break;
  case 3:
    local_78 = (ulong *)FUN_006fdba8(local_78,&local_c8);
    puVar9 = local_78;
    if (local_78 != (ulong *)0x0) {
      bVar4 = *(byte *)(param_6 + 1);
      ppcVar10 = local_c8;
joined_r0x006fd4e4:
      if (((bVar4 ^ 0xff) & 0x60) == 0) goto LAB_006fd3f0;
LAB_006fd3bc:
      FUN_0067d544();
      puVar9 = local_78;
    }
    break;
  case 4:
    local_78 = (ulong *)FUN_006fdba8(local_78,&local_c8);
    puVar9 = local_78;
    if (local_78 != (ulong *)0x0) {
      ppcVar10 = local_c8;
      if (((*(byte *)(param_6 + 1) ^ 0xff) & 0x60) == 0) goto LAB_006fd514;
LAB_006fd430:
      FUN_0067e5c4();
      puVar9 = local_78;
    }
    break;
  case 5:
    local_78 = (ulong *)FUN_006fdc08(local_78,&local_c8);
    puVar9 = local_78;
    if (local_78 != (ulong *)0x0) {
      bVar4 = *(byte *)(param_6 + 1);
      ppcVar10 = local_c8;
joined_r0x006fd278:
      uVar12 = (ulong)ppcVar10 & 0xffffffff;
      if (((bVar4 ^ 0xff) & 0x60) != 0) goto LAB_006fd27c;
LAB_006fd2b0:
      FUN_0067d19c();
      puVar9 = local_78;
    }
    break;
  case 6:
    puVar9 = local_78 + 1;
    ppcVar10 = (code **)*local_78;
    local_78 = puVar9;
    if (((*(byte *)(param_6 + 1) ^ 0xff) & 0x60) != 0) goto LAB_006fd430;
LAB_006fd514:
    FUN_0067ea5c(param_5,param_1,param_6,ppcVar10);
    puVar9 = local_78;
    break;
  case 7:
    bVar4 = *(byte *)(param_6 + 1);
    uVar12 = (ulong)(uint)*local_78;
    local_78 = (ulong *)((long)local_78 + 4);
joined_r0x006fd34c:
    if (((bVar4 ^ 0xff) & 0x60) == 0) {
      FUN_0067e21c();
      puVar9 = local_78;
    }
    else {
      FUN_0067dd84(param_5,param_1,param_6,uVar12);
      puVar9 = local_78;
    }
    break;
  case 8:
    local_78 = (ulong *)FUN_006fdba8(local_78,&local_c8);
    puVar9 = local_78;
    if (local_78 != (ulong *)0x0) {
      if (((*(byte *)(param_6 + 1) ^ 0xff) & 0x60) == 0) {
        FUN_0068034c(param_5,param_1,param_6,local_c8 != (code **)0x0);
        puVar9 = local_78;
      }
      else {
        FUN_0067feb0(param_5,param_1,param_6,local_c8 != (code **)0x0);
        puVar9 = local_78;
      }
    }
    break;
  case 9:
    bVar6 = *(char *)(*(long *)(param_6 + 0x10) + 3) == '\x03';
  case 0xc:
    if ((char)*local_78 < '\0') {
      auVar15 = FUN_0066fed4();
      local_78 = auVar15._0_8_;
      puVar9 = local_78;
      if (local_78 == (ulong *)0x0) break;
    }
    else {
      auVar15[8] = (char)*local_78;
      auVar15._0_8_ = (long)local_78 + 1;
      auVar15._9_3_ = 0;
    }
    puVar9 = auVar15._0_8_;
    lVar14 = (long)auVar15._8_4_;
    local_c8 = (code **)0x0;
    plStack_c0 = (long *)0x0;
    local_b8 = (void *)0x0;
    local_78 = puVar9;
    if ((*(long *)(param_3 + 8) - (long)puVar9) + 0x10 < lVar14) {
                    /* try { // try from 006fd5ec to 006fd667 has its CatchHandler @ 006fda0c */
      puVar9 = (ulong *)FUN_0066f6c8(param_3,puVar9,auVar15._8_4_,&local_c8);
      local_78 = puVar9;
      if (puVar9 != (ulong *)0x0) goto LAB_006fd624;
    }
    else {
      FUN_00712d54(&local_c8,puVar9,lVar14);
      local_78 = (ulong *)((long)puVar9 + lVar14);
LAB_006fd624:
      if (bVar6) {
        lVar14 = *(long *)(param_6 + 8);
        bVar6 = ((ulong)local_c8 & 1) == 0;
        pvVar2 = local_b8;
        if (bVar6) {
          pvVar2 = (void *)((long)&local_c8 + 1);
        }
        uVar11 = (uint)((byte)local_c8 >> 1);
        if (!bVar6) {
          uVar11 = (uint)plStack_c0;
        }
        lVar1 = lVar14 + 0x19;
        if ((*(byte *)(lVar14 + 0x18) & 1) != 0) {
          lVar1 = *(long *)(lVar14 + 0x28);
        }
        uVar12 = FUN_00679224(pvVar2,uVar11,0,lVar1);
        if ((uVar12 & 1) == 0) {
          puVar9 = (ulong *)0x0;
          goto LAB_006fd794;
        }
      }
      pvVar2 = local_b8;
      plVar7 = plStack_c0;
      ppcVar10 = local_c8;
      if (((*(byte *)(param_6 + 1) ^ 0xff) & 0x60) == 0) {
        plStack_c0 = (long *)0x0;
        local_b8 = (void *)0x0;
        plStack_d8 = plVar7;
        local_e0 = local_c8;
        local_d0 = pvVar2;
        local_c8 = (code **)0x0;
                    /* try { // try from 006fd690 to 006fd6a3 has its CatchHandler @ 006fd9e0 */
        FUN_006815fc(param_5,param_1,param_6,&local_e0);
        puVar9 = local_78;
        if (((ulong)local_e0 & 1) != 0) {
          pppcVar13 = &local_e0;
LAB_006fd6ec:
          free(pppcVar13[2]);
          puVar9 = local_78;
        }
      }
      else {
        plStack_c0 = (long *)0x0;
        local_b8 = (void *)0x0;
        local_c8 = (code **)0x0;
        plStack_f8 = plVar7;
        local_100 = ppcVar10;
        local_f0 = pvVar2;
                    /* try { // try from 006fd6cc to 006fd6df has its CatchHandler @ 006fd9c8 */
        FUN_00680a64(param_5,param_1,param_6,&local_100);
        puVar9 = local_78;
        if (((ulong)local_100 & 1) != 0) goto LAB_006fd6ec;
      }
    }
LAB_006fd794:
    if (((ulong)local_c8 & 1) != 0) {
      free(local_b8);
    }
    break;
  case 10:
    if (((*(byte *)(param_6 + 1) ^ 0xff) & 0x60) == 0) {
      plVar7 = (long *)FUN_0068347c();
    }
    else {
      plVar7 = (long *)FUN_00682834(param_5,param_1,param_6,*(undefined8 *)(param_3 + 0x68));
    }
    iVar3 = *(int *)(param_3 + 0x58);
    *(int *)(param_3 + 0x58) = iVar3 + -1;
    if (iVar3 < 1) goto switchD_006fd060_default;
    *(int *)(param_3 + 0x5c) = *(int *)(param_3 + 0x5c) + 1;
    puVar9 = (ulong *)(**(code **)(*plVar7 + 0x50))(plVar7,local_78,param_3);
    uVar8 = DAT_001b7178;
    uVar11 = *(uint *)(param_3 + 0x50);
    *(undefined4 *)(param_3 + 0x50) = 0;
    if (uVar11 != (uint)param_4) {
      puVar9 = (ulong *)0x0;
    }
    *(ulong *)(param_3 + 0x58) =
         CONCAT44((int)((ulong)*(undefined8 *)(param_3 + 0x58) >> 0x20) +
                  (int)((ulong)uVar8 >> 0x20),(int)*(undefined8 *)(param_3 + 0x58) + (int)uVar8);
    break;
  case 0xb:
    if (((*(byte *)(param_6 + 1) ^ 0xff) & 0x60) == 0) {
      uVar8 = FUN_0068347c();
    }
    else {
      uVar8 = FUN_00682834(param_5,param_1,param_6,*(undefined8 *)(param_3 + 0x68));
    }
    puVar9 = (ulong *)FUN_0066fa8c(param_3,uVar8,local_78);
    break;
  case 0xd:
    local_78 = (ulong *)FUN_006fdc08(local_78,&local_c8);
    puVar9 = local_78;
    if (local_78 != (ulong *)0x0) {
      bVar4 = *(byte *)(param_6 + 1);
      uVar12 = (ulong)local_c8 & 0xffffffff;
      goto joined_r0x006fd34c;
    }
    break;
  case 0xe:
    local_78 = (ulong *)FUN_006fdc08(local_78,&local_c8);
    puVar9 = local_78;
    if (local_78 != (ulong *)0x0) {
      if (((*(byte *)(param_6 + 1) ^ 0xff) & 0x60) == 0) {
        FUN_00682274();
        puVar9 = local_78;
      }
      else {
        FUN_00681d30(param_5,param_1,param_6,(ulong)local_c8 & 0xffffffff);
        puVar9 = local_78;
      }
    }
    break;
  case 0xf:
    puVar9 = (ulong *)((long)local_78 + 4);
    uVar12 = (ulong)(uint)*local_78;
    local_78 = puVar9;
    if (((*(byte *)(param_6 + 1) ^ 0xff) & 0x60) == 0) goto LAB_006fd2b0;
LAB_006fd27c:
    FUN_0067cd04(param_5,param_1,param_6,uVar12);
    puVar9 = local_78;
    break;
  case 0x10:
    puVar9 = local_78 + 1;
    ppcVar10 = (code **)*local_78;
    local_78 = puVar9;
    if (((*(byte *)(param_6 + 1) ^ 0xff) & 0x60) != 0) goto LAB_006fd3bc;
LAB_006fd3f0:
    FUN_0067d9dc(param_5,param_1,param_6,ppcVar10);
    puVar9 = local_78;
    break;
  case 0x11:
    ppcVar10 = (code **)FUN_006fdc68(&local_78);
    if (local_78 != (ulong *)0x0) {
      bVar4 = *(byte *)(param_6 + 1);
      goto joined_r0x006fd278;
    }
  default:
switchD_006fd060_default:
    puVar9 = (ulong *)0x0;
    break;
  case 0x12:
    ppcVar10 = (code **)FUN_006fdccc(&local_78);
    if (local_78 != (ulong *)0x0) {
      bVar4 = *(byte *)(param_6 + 1);
      goto joined_r0x006fd4e4;
    }
    goto switchD_006fd060_default;
  }
LAB_006fd220:
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
LAB_006fda38:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar9);
}


// ===== 006fda3c  FUN_006fda3c =====

void FUN_006fda3c(long param_1,byte *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70 [3];
  undefined2 local_58;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  bVar3 = *param_2;
  uVar9 = (uint)bVar3;
  if ((char)bVar3 < '\0') {
    auVar12 = FUN_0066fed4(param_2,bVar3);
    param_2 = auVar12._0_8_;
    uVar9 = auVar12._8_4_;
    if (param_2 == (byte *)0x0) goto LAB_006fdb2c;
    uVar7 = *(undefined8 *)(param_1 + 8);
    iVar10 = (int)uVar7 - auVar12._0_4_;
    if (iVar10 < (int)uVar9) goto LAB_006fdab0;
  }
  else {
    param_2 = param_2 + 1;
    auVar12[8] = bVar3;
    auVar12._0_8_ = param_2;
    auVar12._9_7_ = 0;
    uVar7 = *(undefined8 *)(param_1 + 8);
    iVar10 = (int)uVar7 - (int)param_2;
    if (iVar10 < (int)(uint)bVar3) {
LAB_006fdab0:
      do {
        uStack_88 = param_3[1];
        local_90 = *param_3;
        uStack_78 = param_3[3];
        uStack_80 = param_3[2];
        param_2 = (byte *)FUN_00706184(auVar12._0_8_,uVar7,&local_90);
        if (param_2 == (byte *)0x0) goto LAB_006fdb2c;
        puVar8 = *(undefined8 **)(param_1 + 8);
        iVar4 = auVar12._8_4_ - iVar10;
        iVar11 = (int)param_2 - (int)puVar8;
        if (iVar4 < 0x11) {
          local_58 = 0;
          local_70[2] = 0;
          uStack_a8 = param_3[1];
          local_b0 = *param_3;
          uStack_98 = param_3[3];
          uStack_a0 = param_3[2];
          lVar2 = (long)local_70 + (long)iVar4;
          local_70[1] = puVar8[1];
          local_70[0] = *puVar8;
          lVar6 = FUN_00706184((long)local_70 + (long)iVar11,lVar2,&local_b0);
          param_2 = (byte *)(*(long *)(param_1 + 8) + (lVar6 - (long)local_70));
          if (lVar6 != lVar2) {
            param_2 = (byte *)0x0;
          }
          goto LAB_006fdb2c;
        }
        if (*(int *)(param_1 + 0x1c) < 0x11) {
          param_2 = (byte *)0x0;
          goto LAB_006fdb2c;
        }
        param_2 = (byte *)FUN_0066f100(param_1);
        if (param_2 == (byte *)0x0) goto LAB_006fdb2c;
        uVar7 = *(undefined8 *)(param_1 + 8);
        param_2 = param_2 + iVar11;
        uVar9 = (auVar12._8_4_ - iVar10) - iVar11;
        auVar12._8_4_ = uVar9;
        auVar12._0_8_ = param_2;
        auVar12._12_4_ = 0;
        iVar10 = (int)uVar7 - (int)param_2;
      } while (iVar10 < (int)uVar9);
    }
  }
  uStack_c8 = param_3[1];
  local_d0 = *param_3;
  uStack_b8 = param_3[3];
  uStack_c0 = param_3[2];
  pbVar1 = param_2 + (int)uVar9;
  param_2 = (byte *)FUN_00706184(param_2,pbVar1,&local_d0);
  if (pbVar1 != param_2) {
    param_2 = (byte *)0x0;
  }
LAB_006fdb2c:
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_2);
  }
  return;
}


// ===== 006fdba8  FUN_006fdba8 =====

byte * FUN_006fdba8(byte *param_1,ulong *param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  bVar1 = *param_1;
  if (-1 < (long)(char)bVar1) {
    *param_2 = (long)(char)bVar1;
    return param_1 + 1;
  }
  uVar2 = (ulong)(((uint)param_1[1] * 0x80 + (uint)bVar1) - 0x80);
  if (-1 < (char)param_1[1]) {
    *param_2 = uVar2;
    return param_1 + 2;
  }
  auVar3 = FUN_0066fd14(param_1,uVar2);
  *param_2 = auVar3._8_8_;
  return auVar3._0_8_;
}


// ===== 006fdc08  FUN_006fdc08 =====

byte * FUN_006fdc08(byte *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined1 auVar3 [12];
  
  bVar1 = *param_1;
  if (-1 < (char)bVar1) {
    *param_2 = (uint)bVar1;
    return param_1 + 1;
  }
  uVar2 = ((uint)bVar1 + (uint)param_1[1] * 0x80) - 0x80;
  if (-1 < (char)param_1[1]) {
    *param_2 = uVar2;
    return param_1 + 2;
  }
  auVar3 = FUN_0066fc04(param_1,uVar2);
  *param_2 = auVar3._8_4_;
  return auVar3._0_8_;
}


// ===== 006fdc68  FUN_006fdc68 =====

uint FUN_006fdc68(undefined8 *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 auVar3 [12];
  byte *pbVar4;
  undefined1 auVar5 [16];
  
  pbVar4 = (byte *)*param_1;
  bVar2 = *pbVar4;
  auVar5._8_8_ = (long)(char)bVar2;
  auVar5._0_8_ = pbVar4 + 1;
  auVar3 = auVar5._0_12_;
  if ((long)(char)bVar2 < 0) {
    bVar1 = pbVar4[1];
    if ((char)bVar1 < '\0') {
      auVar5 = FUN_0066fd14();
      auVar3 = auVar5._0_12_;
    }
    else {
      auVar3._8_4_ = (uint)bVar1 * 0x80 + (uint)bVar2 + -0x80;
      auVar3._0_8_ = pbVar4 + 2;
    }
  }
  *param_1 = auVar3._0_8_;
  return -(auVar3._8_4_ & 1) ^ auVar3._8_4_ >> 1;
}


// ===== 006fdccc  FUN_006fdccc =====

ulong FUN_006fdccc(undefined8 *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined1 auVar4 [16];
  
  pbVar3 = (byte *)*param_1;
  bVar2 = *pbVar3;
  auVar4._8_8_ = (long)(char)bVar2;
  auVar4._0_8_ = pbVar3 + 1;
  if ((long)(char)bVar2 < 0) {
    bVar1 = pbVar3[1];
    if ((char)bVar1 < '\0') {
      auVar4 = FUN_0066fd14();
    }
    else {
      auVar4._8_4_ = (uint)bVar1 * 0x80 + (uint)bVar2 + -0x80;
      auVar4._0_8_ = pbVar3 + 2;
      auVar4._12_4_ = 0;
    }
  }
  *param_1 = auVar4._0_8_;
  return -(auVar4._8_8_ & 1) ^ auVar4._8_8_ >> 1;
}


// ===== 006fdd30  FUN_006fdd30 =====

undefined8 FUN_006fdd30(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long *__dest;
  undefined8 uVar6;
  undefined8 extraout_x1;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  size_t __n;
  int iVar12;
  long lVar13;
  long *local_80;
  long *local_78;
  long *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar5 = (**(code **)(*param_1 + 0x80))();
  (**(code **)(*param_1 + 0x80))(param_1);
  local_80 = (long *)0x0;
  local_78 = (long *)0x0;
  local_70 = (long *)0x0;
  if (*(char *)(*(long *)(lVar5 + 0x20) + 0x4b) == '\0') {
                    /* try { // try from 006fde90 to 006fde9f has its CatchHandler @ 006fdfbc */
    FUN_0067cb28(extraout_x1,param_1,&local_80);
LAB_006fdea4:
    plVar10 = local_78;
    plVar9 = local_80;
    if (local_80 != local_78) {
      do {
                    /* try { // try from 006fdeb8 to 006fdec7 has its CatchHandler @ 006fdfc8 */
        param_2 = FUN_006fdffc(*plVar9,param_1,param_2,param_3);
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar10);
      cVar3 = *(char *)(*(long *)(lVar5 + 0x20) + 0x48);
      goto joined_r0x006fdee0;
    }
  }
  else {
    iVar12 = *(int *)(lVar5 + 4);
    if (0 < iVar12) {
      lVar13 = 0;
      lVar8 = 0;
      do {
        plVar9 = local_80;
        lVar2 = *(long *)(lVar5 + 0x28) + lVar13;
        if (local_78 < local_70) {
          plVar10 = local_78 + 1;
          *local_78 = lVar2;
        }
        else {
          __n = (long)local_78 - (long)local_80;
          lVar11 = (long)__n >> 3;
          uVar1 = lVar11 + 1;
          if (uVar1 >> 0x3d != 0) {
            if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 006fdf9c to 006fdfbb has its CatchHandler @ 006fdfc4 */
              FUN_00685d28(&local_80);
LAB_006fdfa4:
              if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_002f9ee0();
              }
            }
            goto LAB_006fdff8;
          }
          uVar7 = (long)local_70 - (long)local_80 >> 2;
          if (uVar7 <= uVar1) {
            uVar7 = uVar1;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)local_70 - (long)local_80)) {
            uVar7 = 0x1fffffffffffffff;
          }
          if (uVar7 == 0) {
            __dest = (long *)0x0;
          }
          else {
            if (uVar7 >> 0x3d != 0) goto LAB_006fdfa4;
                    /* try { // try from 006fde3c to 006fde3f has its CatchHandler @ 006fdfc0 */
            __dest = (long *)FUN_00759c3c(uVar7 << 3);
          }
          plVar10 = __dest + lVar11 + 1;
          __dest[lVar11] = lVar2;
          memcpy(__dest,plVar9,__n);
          local_80 = __dest;
          local_70 = __dest + uVar7;
          if (plVar9 != (long *)0x0) {
            free(plVar9);
            iVar12 = *(int *)(lVar5 + 4);
          }
        }
        lVar8 = lVar8 + 1;
        lVar13 = lVar13 + 0x48;
        local_78 = plVar10;
      } while (lVar8 < iVar12);
      goto LAB_006fdea4;
    }
  }
  cVar3 = *(char *)(*(long *)(lVar5 + 0x20) + 0x48);
joined_r0x006fdee0:
  if (cVar3 == '\0') {
    uVar6 = FUN_006795dc(extraout_x1,param_1);
    uVar6 = FUN_006fc418(uVar6,param_2,param_3);
  }
  else {
                    /* try { // try from 006fdee4 to 006fdf37 has its CatchHandler @ 006fdfbc */
    uVar6 = FUN_006795dc(extraout_x1,param_1);
    uVar6 = FUN_006fc864(uVar6,param_2,param_3);
  }
  if (local_80 != (long *)0x0) {
    local_78 = local_80;
    free(local_80);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return uVar6;
  }
LAB_006fdff8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 006fdffc  FUN_006fdffc =====

byte * FUN_006fdffc(code *param_1,long *param_2,byte *param_3,long *param_4)

{
  long lVar1;
  size_t sVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 extraout_x1;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  byte *pbVar21;
  code *pcVar22;
  code **ppcVar23;
  code **ppcVar24;
  byte *pbVar25;
  code **ppcVar26;
  code *local_100;
  code *local_f8;
  code ***local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  byte local_e0;
  void *local_d0;
  int local_c8;
  code **local_b0;
  code **local_a8;
  void *local_a0 [2];
  void *local_90;
  int local_88;
  undefined1 auStack_80 [16];
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  (**(code **)(*param_2 + 0x80))(param_2);
  if ((((byte)param_1[1] >> 3 & 1) != 0) &&
     (*(char *)(*(long *)(*(long *)(param_1 + 0x20) + 0x20) + 0x48) != '\0')) {
    plVar12 = *(long **)(param_1 + 0x18);
    if ((plVar12 != (long *)0x0) &&
       (local_f8 = thunk_FUN_006af330, local_100 = param_1, *plVar12 != -1)) {
      local_b0 = &local_f8;
      local_a8 = &local_100;
      local_f0 = &local_b0;
      FUN_00710f84(plVar12,&local_f0,FUN_00685640);
    }
    if ((*(int *)(PTR_DAT_007a32d8 + (ulong)(byte)param_1[2] * 4) == 10) &&
       ((((byte)param_1[1] ^ 0xff) & 0x60) != 0)) {
      param_3 = (byte *)FUN_00700c18(param_1,param_2,param_3,param_4);
      goto LAB_006ffae4;
    }
  }
  plVar12 = *(long **)(param_1 + 0x18);
  if ((plVar12 != (long *)0x0) &&
     (local_f8 = thunk_FUN_006af330, local_100 = param_1, *plVar12 != -1)) {
    local_b0 = &local_f8;
    local_a8 = &local_100;
    local_f0 = &local_b0;
    FUN_00710f84(plVar12,&local_f0,FUN_00685640);
  }
  if ((param_1[2] == (code)0xb) && (uVar13 = FUN_0068d830(param_1), (uVar13 & 1) != 0)) {
    FUN_00684cf0(extraout_x1,param_2,param_1);
    uVar13 = FUN_006dead4();
    if ((uVar13 & 1) != 0) {
      if (*(char *)((long)param_4 + 0x3a) == '\0') {
        FUN_00684274(&local_b0,extraout_x1,param_2,param_1);
        while( true ) {
                    /* try { // try from 006ff290 to 006ff2a3 has its CatchHandler @ 0070070c */
          FUN_00684638(&local_f0,extraout_x1,param_2,param_1);
                    /* try { // try from 006ff2b0 to 006ff2bb has its CatchHandler @ 00700710 */
          uVar13 = (**(code **)(*local_a8 + 0x20))(local_a8,&local_b0,&local_f0);
                    /* try { // try from 006ff2cc to 006ff2d3 has its CatchHandler @ 00700724 */
          (**(code **)(*(long *)CONCAT44(uStack_e4,local_e8) + 0x80))
                    ((long *)CONCAT44(uStack_e4,local_e8),&local_f0);
          if ((local_c8 == 9) && ((local_e0 & 1) != 0)) {
            free(local_d0);
          }
          if ((uVar13 & 1) != 0) break;
                    /* try { // try from 006ff2f4 to 006ff323 has its CatchHandler @ 00700728 */
          param_3 = (byte *)FUN_00700f44(param_1,local_a0,auStack_80,param_3,param_4);
          (**(code **)(*local_a8 + 0x90))(local_a8,&local_b0);
        }
                    /* try { // try from 006ff334 to 006ff33b has its CatchHandler @ 00700678 */
        (**(code **)(*local_a8 + 0x80))(local_a8,&local_b0);
        if ((local_88 == 9) && (((ulong)local_a0[0] & 1) != 0)) {
          free(local_90);
        }
      }
      else {
        FUN_00700d50(&local_b0,param_2,extraout_x1,param_1);
        ppcVar23 = local_b0;
        ppcVar26 = local_b0;
        if (local_b0 != local_a8) {
          do {
            local_f0 = (code ***)0x0;
            local_e8 = 0;
                    /* try { // try from 006fe174 to 006fe1a3 has its CatchHandler @ 00700750 */
            FUN_00684104(extraout_x1,param_2,param_1,ppcVar23,&local_f0);
            param_3 = (byte *)FUN_00700f44(param_1,ppcVar23,&local_f0,param_3,param_4);
            ppcVar23 = ppcVar23 + 4;
            ppcVar26 = local_b0;
          } while (ppcVar23 != local_a8);
        }
        local_b0 = ppcVar26;
        if (ppcVar26 != (code **)0x0) {
          while (ppcVar24 = ppcVar23, ppcVar24 != ppcVar26) {
            ppcVar23 = ppcVar24 + -4;
            if ((*(uint *)(ppcVar24 + -1) == 9) && (((ulong)*ppcVar23 & 1) != 0)) {
              free(ppcVar24[-2]);
            }
          }
          local_a8 = ppcVar26;
          free(local_b0);
        }
      }
      goto LAB_006ffae4;
    }
  }
  if ((((byte)param_1[1] ^ 0xff) & 0x60) == 0) {
    uVar8 = FUN_0067c384(extraout_x1,param_2,param_1);
    uVar13 = (ulong)uVar8;
    if (1 < (int)uVar8) {
      plVar12 = *(long **)(param_1 + 0x18);
      if ((plVar12 != (long *)0x0) &&
         (local_f8 = thunk_FUN_006af330, local_100 = param_1, *plVar12 != -1)) {
        local_b0 = &local_f8;
        local_a8 = &local_100;
        local_f0 = &local_b0;
                    /* try { // try from 006fe228 to 006fe253 has its CatchHandler @ 00700700 */
        FUN_00710f84(plVar12,&local_f0,FUN_00685640);
      }
      if (((param_1[2] == (code)0xb) && (uVar14 = FUN_0068d830(param_1), (uVar14 & 1) != 0)) &&
         (*(char *)((long)param_4 + 0x3a) != '\0')) {
        FUN_00701604(&local_b0,param_2,uVar13,extraout_x1,param_1);
        ppcVar23 = local_b0;
        ppcVar26 = local_a8;
        goto LAB_006fe2c8;
      }
    }
    ppcVar23 = (code **)0x0;
    ppcVar26 = (code **)0x0;
  }
  else if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 0x20) + 0x4b) & 1) == 0) {
    uVar8 = FUN_0067b838(extraout_x1,param_2,param_1);
    ppcVar23 = (code **)0x0;
    ppcVar26 = (code **)0x0;
    uVar13 = (ulong)(uVar8 & 1);
  }
  else {
    ppcVar23 = (code **)0x0;
    ppcVar26 = (code **)0x0;
    uVar13 = 1;
  }
LAB_006fe2c8:
                    /* try { // try from 006fe2c8 to 006fe32b has its CatchHandler @ 00700700 */
  uVar14 = FUN_0069399c(param_1);
  if ((uVar14 & 1) == 0) {
    if (0 < (int)uVar13) {
      uVar14 = 0;
      do {
        if (param_3 < (byte *)*param_4) {
          plVar12 = *(long **)(param_1 + 0x18);
        }
        else {
                    /* try { // try from 006ff210 to 006ff21b has its CatchHandler @ 00700778 */
          param_3 = (byte *)FUN_0066d3f8(param_4,param_3);
          plVar12 = *(long **)(param_1 + 0x18);
        }
        if ((plVar12 != (long *)0x0) &&
           (local_f8 = thunk_FUN_006af330, local_100 = param_1, *plVar12 != -1)) {
          local_b0 = &local_f8;
          local_a8 = &local_100;
          local_f0 = &local_b0;
                    /* try { // try from 006fe414 to 006fe423 has its CatchHandler @ 00700778 */
          FUN_00710f84(plVar12,&local_f0,FUN_00685640);
        }
        switch(param_1[2]) {
        case (code)0x1:
          if ((((byte)param_1[1] ^ 0xff) & 0x60) == 0) {
                    /* try { // try from 006fe458 to 006fe46b has its CatchHandler @ 0070067c */
            uVar16 = FUN_0067f99c(extraout_x1,param_2,param_1,uVar14 & 0xffffffff);
          }
          else {
                    /* try { // try from 006fe934 to 006fe943 has its CatchHandler @ 0070067c */
            uVar16 = FUN_0067f494(extraout_x1,param_2,param_1);
          }
          iVar9 = *(int *)(param_1 + 4);
          uVar8 = iVar9 << 3 | 1;
          *param_3 = (byte)uVar8;
          if (uVar8 < 0x80) {
            pbVar25 = param_3 + 1;
            param_3 = param_3 + 9;
            *(undefined8 *)pbVar25 = uVar16;
          }
          else {
            *param_3 = (byte)uVar8 | 0x80;
            uVar17 = (uint)(iVar9 << 3) >> 7;
            param_3[1] = (byte)uVar17;
            pbVar25 = param_3 + 2;
            pbVar21 = pbVar25;
            if (0x3fff < uVar8) {
              do {
                uVar8 = uVar17 >> 0xe;
                uVar17 = uVar17 >> 7;
                pbVar21[-1] = pbVar21[-1] | 0x80;
                pbVar25 = pbVar21 + 1;
                *pbVar21 = (byte)uVar17;
                pbVar21 = pbVar25;
              } while (uVar8 != 0);
            }
            param_3 = pbVar25 + 8;
            *(undefined8 *)pbVar25 = uVar16;
          }
          break;
        case (code)0x2:
          if ((((byte)param_1[1] ^ 0xff) & 0x60) == 0) {
                    /* try { // try from 006fe5f0 to 006fe603 has its CatchHandler @ 00700680 */
            uVar10 = FUN_0067f148(extraout_x1,param_2,param_1,uVar14 & 0xffffffff);
          }
          else {
                    /* try { // try from 006fe968 to 006fe977 has its CatchHandler @ 00700680 */
            uVar10 = FUN_0067ec40(extraout_x1,param_2,param_1);
          }
          iVar9 = *(int *)(param_1 + 4);
          uVar8 = iVar9 << 3 | 5;
          *param_3 = (byte)uVar8;
          if (uVar8 < 0x80) {
            pbVar25 = param_3 + 1;
            param_3 = param_3 + 5;
            *(undefined4 *)pbVar25 = uVar10;
          }
          else {
            *param_3 = (byte)uVar8 | 0x80;
            uVar17 = (uint)(iVar9 << 3) >> 7;
            param_3[1] = (byte)uVar17;
            pbVar25 = param_3 + 2;
            pbVar21 = pbVar25;
            if (0x3fff < uVar8) {
              do {
                uVar8 = uVar17 >> 0xe;
                uVar17 = uVar17 >> 7;
                pbVar21[-1] = pbVar21[-1] | 0x80;
                pbVar25 = pbVar21 + 1;
                *pbVar21 = (byte)uVar17;
                pbVar21 = pbVar25;
              } while (uVar8 != 0);
            }
            param_3 = pbVar25 + 4;
            *(undefined4 *)pbVar25 = uVar10;
          }
          break;
        case (code)0x3:
          if ((((byte)param_1[1] ^ 0xff) & 0x60) == 0) {
                    /* try { // try from 006fe560 to 006fe573 has its CatchHandler @ 00700684 */
            uVar18 = FUN_0067d87c(extraout_x1,param_2,param_1,uVar14 & 0xffffffff);
          }
          else {
                    /* try { // try from 006fe848 to 006fe857 has its CatchHandler @ 00700684 */
            uVar18 = FUN_0067d380(extraout_x1,param_2,param_1);
          }
          uVar8 = *(int *)(param_1 + 4) << 3;
          *param_3 = (byte)uVar8;
          if (uVar8 < 0x80) {
            pbVar25 = param_3 + 1;
          }
          else {
            uVar17 = uVar8 >> 7;
            pbVar25 = param_3 + 2;
            *param_3 = (byte)uVar8 | 0x80;
            param_3[1] = (byte)uVar17;
            pbVar21 = pbVar25;
            if (0x3fff < uVar8) {
              do {
                uVar8 = uVar17 >> 0xe;
                uVar17 = uVar17 >> 7;
                pbVar21[-1] = pbVar21[-1] | 0x80;
                pbVar25 = pbVar21 + 1;
                *pbVar21 = (byte)uVar17;
                pbVar21 = pbVar25;
              } while (uVar8 != 0);
            }
          }
          *pbVar25 = (byte)uVar18;
          if (uVar18 < 0x80) {
LAB_006fe3c0:
            param_3 = pbVar25 + 1;
          }
          else {
            uVar20 = uVar18 >> 7;
            param_3 = pbVar25 + 2;
            *pbVar25 = (byte)uVar18 | 0x80;
            pbVar25[1] = (byte)uVar20;
            pbVar25 = param_3;
            if (0x3fff < uVar18) {
              do {
                uVar18 = uVar20 >> 0xe;
                uVar20 = uVar20 >> 7;
                pbVar25[-1] = pbVar25[-1] | 0x80;
                param_3 = pbVar25 + 1;
                *pbVar25 = (byte)uVar20;
                pbVar25 = param_3;
              } while (uVar18 != 0);
            }
          }
          break;
        case (code)0x4:
          if ((((byte)param_1[1] ^ 0xff) & 0x60) == 0) {
                    /* try { // try from 006fe5a8 to 006fe5bb has its CatchHandler @ 00700688 */
            uVar18 = FUN_0067e8fc(extraout_x1,param_2,param_1,uVar14 & 0xffffffff);
          }
          else {
                    /* try { // try from 006fe8dc to 006fe8eb has its CatchHandler @ 00700688 */
            uVar18 = FUN_0067e400(extraout_x1,param_2,param_1);
          }
          uVar8 = *(int *)(param_1 + 4) << 3;
          *param_3 = (byte)uVar8;
          if (uVar8 < 0x80) {
            pbVar25 = param_3 + 1;
          }
          else {
            uVar17 = uVar8 >> 7;
            pbVar25 = param_3 + 2;
            *param_3 = (byte)uVar8 | 0x80;
            param_3[1] = (byte)uVar17;
            pbVar21 = pbVar25;
            if (0x3fff < uVar8) {
              do {
                uVar8 = uVar17 >> 0xe;
                uVar17 = uVar17 >> 7;
                pbVar21[-1] = pbVar21[-1] | 0x80;
                pbVar25 = pbVar21 + 1;
                *pbVar21 = (byte)uVar17;
                pbVar21 = pbVar25;
              } while (uVar8 != 0);
            }
          }
          *pbVar25 = (byte)uVar18;
          if (uVar18 < 0x80) goto LAB_006fe3c0;
          uVar20 = uVar18 >> 7;
          param_3 = pbVar25 + 2;
          *pbVar25 = (byte)uVar18 | 0x80;
          pbVar25[1] = (byte)uVar20;
          pbVar25 = param_3;
          if (0x3fff < uVar18) {
            do {
              uVar18 = uVar20 >> 0xe;
              uVar20 = uVar20 >> 7;
              pbVar25[-1] = pbVar25[-1] | 0x80;
              param_3 = pbVar25 + 1;
              *pbVar25 = (byte)uVar20;
              pbVar25 = param_3;
            } while (uVar18 != 0);
          }
          break;
        case (code)0x5:
          if ((((byte)param_1[1] ^ 0xff) & 0x60) == 0) {
                    /* try { // try from 006fe4f4 to 006fe507 has its CatchHandler @ 0070068c */
            uVar8 = FUN_0067d03c(extraout_x1,param_2,param_1,uVar14 & 0xffffffff);
          }
          else {
                    /* try { // try from 006fe7d4 to 006fe7e3 has its CatchHandler @ 0070068c */
            uVar8 = FUN_0067cb40(extraout_x1,param_2,param_1);
          }
          uVar17 = *(int *)(param_1 + 4) << 3;
          *param_3 = (byte)uVar17;
          if (uVar17 < 0x80) {
            pbVar25 = param_3 + 1;
          }
          else {
            uVar19 = uVar17 >> 7;
            pbVar25 = param_3 + 2;
            *param_3 = (byte)uVar17 | 0x80;
            param_3[1] = (byte)uVar19;
            pbVar21 = pbVar25;
            if (0x3fff < uVar17) {
              do {
                uVar17 = uVar19 >> 0xe;
                uVar19 = uVar19 >> 7;
                pbVar21[-1] = pbVar21[-1] | 0x80;
                pbVar25 = pbVar21 + 1;
                *pbVar21 = (byte)uVar19;
                pbVar21 = pbVar25;
              } while (uVar17 != 0);
            }
          }
          *pbVar25 = (byte)uVar8;
          if (uVar8 < 0x80) goto LAB_006fe3c0;
          param_3 = pbVar25 + 2;
          *pbVar25 = (byte)uVar8 | 0x80;
          uVar18 = (ulong)(long)(int)uVar8 >> 7;
          pbVar25[1] = (byte)uVar18;
          pbVar25 = param_3;
          if (0x3fff < uVar8) {
            do {
              uVar20 = uVar18 >> 0xe;
              uVar18 = uVar18 >> 7;
              pbVar25[-1] = pbVar25[-1] | 0x80;
              param_3 = pbVar25 + 1;
              *pbVar25 = (byte)uVar18;
              pbVar25 = param_3;
            } while (uVar20 != 0);
          }
          break;
        case (code)0x6:
          if ((((byte)param_1[1] ^ 0xff) & 0x60) == 0) {
                    /* try { // try from 006fe638 to 006fe64b has its CatchHandler @ 00700690 */
            uVar16 = FUN_0067e8fc(extraout_x1,param_2,param_1,uVar14 & 0xffffffff);
          }
          else {
                    /* try { // try from 006fe9c8 to 006fe9d7 has its CatchHandler @ 00700690 */
            uVar16 = FUN_0067e400(extraout_x1,param_2,param_1);
          }
          iVar9 = *(int *)(param_1 + 4);
          uVar8 = iVar9 << 3 | 1;
          *param_3 = (byte)uVar8;
          if (0x7f < uVar8) {
            *param_3 = (byte)uVar8 | 0x80;
            uVar17 = (uint)(iVar9 << 3) >> 7;
            param_3[1] = (byte)uVar17;
            pbVar25 = param_3 + 2;
            pbVar21 = pbVar25;
            if (0x3fff < uVar8) {
              do {
                uVar8 = uVar17 >> 0xe;
                uVar17 = uVar17 >> 7;
                pbVar21[-1] = pbVar21[-1] | 0x80;
                pbVar25 = pbVar21 + 1;
                *pbVar21 = (byte)uVar17;
                pbVar21 = pbVar25;
              } while (uVar8 != 0);
            }
            goto LAB_006fef24;
          }
LAB_006fe9f0:
          pbVar25 = param_3 + 1;
          param_3 = param_3 + 9;
          *(undefined8 *)pbVar25 = uVar16;
          break;
        case (code)0x7:
          if ((((byte)param_1[1] ^ 0xff) & 0x60) == 0) {
                    /* try { // try from 006fe680 to 006fe693 has its CatchHandler @ 00700694 */
            uVar10 = FUN_0067e0bc(extraout_x1,param_2,param_1,uVar14 & 0xffffffff);
          }
          else {
                    /* try { // try from 006fea2c to 006fea3b has its CatchHandler @ 00700694 */
            uVar10 = FUN_0067dbc0(extraout_x1,param_2,param_1);
          }
          iVar9 = *(int *)(param_1 + 4);
          uVar8 = iVar9 << 3 | 5;
          *param_3 = (byte)uVar8;
          if (0x7f < uVar8) {
            *param_3 = (byte)uVar8 | 0x80;
            uVar17 = (uint)(iVar9 << 3) >> 7;
            param_3[1] = (byte)uVar17;
            pbVar25 = param_3 + 2;
            pbVar21 = pbVar25;
            if (0x3fff < uVar8) {
              do {
                uVar8 = uVar17 >> 0xe;
                uVar17 = uVar17 >> 7;
                pbVar21[-1] = pbVar21[-1] | 0x80;
                pbVar25 = pbVar21 + 1;
                *pbVar21 = (byte)uVar17;
                pbVar21 = pbVar25;
              } while (uVar8 != 0);
            }
            goto LAB_006feff0;
          }
LAB_006fea54:
          pbVar25 = param_3 + 1;
          param_3 = param_3 + 5;
          *(undefined4 *)pbVar25 = uVar10;
          break;
        case (code)0x8:
          if ((((byte)param_1[1] ^ 0xff) & 0x60) == 0) {
                    /* try { // try from 006fe5cc to 006fe5df has its CatchHandler @ 00700698 */
            bVar7 = FUN_006801e8(extraout_x1,param_2,param_1,uVar14 & 0xffffffff);
          }
          else {
                    /* try { // try from 006fe908 to 006fe917 has its CatchHandler @ 00700698 */
            bVar7 = FUN_0067fce8(extraout_x1,param_2,param_1);
          }
          uVar8 = *(int *)(param_1 + 4) << 3;
          *param_3 = (byte)uVar8;
          if (uVar8 < 0x80) {
            pbVar25 = param_3 + 1;
          }
          else {
            uVar17 = uVar8 >> 7;
            *param_3 = (byte)uVar8 | 0x80;
            param_3[1] = (byte)uVar17;
            pbVar25 = param_3 + 2;
            pbVar21 = pbVar25;
            if (0x3fff < uVar8) {
              do {
                uVar8 = uVar17 >> 0xe;
                uVar17 = uVar17 >> 7;
                pbVar21[-1] = pbVar21[-1] | 0x80;
                pbVar25 = pbVar21 + 1;
                *pbVar21 = (byte)uVar17;
                pbVar21 = pbVar25;
              } while (uVar8 != 0);
            }
          }
          param_3 = pbVar25 + 1;
          *pbVar25 = bVar7 & 1;
          break;
        case (code)0x9:
          cVar3 = *(char *)(*(long *)(param_1 + 0x10) + 3);
          local_b0 = (code **)0x0;
          local_a8 = (code **)0x0;
          local_a0[0] = (void *)0x0;
          if ((((byte)param_1[1] ^ 0xff) & 0x60) == 0) {
                    /* try { // try from 006fe6d8 to 006fe6ef has its CatchHandler @ 007006b8 */
            pbVar25 = (byte *)FUN_00681498(extraout_x1,param_2,param_1,uVar14 & 0xffffffff,&local_b0
                                          );
          }
          else {
                    /* try { // try from 006fea78 to 006fead3 has its CatchHandler @ 007006b8 */
            pbVar25 = (byte *)FUN_006807ec(extraout_x1,param_2,param_1,&local_b0);
          }
          if (cVar3 == '\x03') {
            lVar15 = *(long *)(param_1 + 8);
            pbVar21 = *(byte **)(pbVar25 + 0x10);
            bVar6 = (*pbVar25 & 1) == 0;
            if (bVar6) {
              pbVar21 = pbVar25 + 1;
            }
            uVar8 = (uint)(*pbVar25 >> 1);
            if (!bVar6) {
              uVar8 = *(uint *)(pbVar25 + 8);
            }
            lVar1 = lVar15 + 0x19;
            if ((*(byte *)(lVar15 + 0x18) & 1) != 0) {
              lVar1 = *(long *)(lVar15 + 0x28);
            }
            FUN_00679224(pbVar21,uVar8,1,lVar1);
          }
          sVar2 = (ulong)(*pbVar25 >> 1);
          if ((*pbVar25 & 1) != 0) {
            sVar2 = *(size_t *)(pbVar25 + 8);
          }
          if (0x7f < (long)sVar2) {
LAB_006ff23c:
                    /* try { // try from 006ff23c to 006ff24b has its CatchHandler @ 007006b8 */
            param_3 = (byte *)FUN_0066d8d0(param_4,*(int *)(param_1 + 4),pbVar25,param_3);
            goto joined_r0x006ff154;
          }
          uVar8 = *(int *)(param_1 + 4) << 3;
          if (uVar8 < 0x80) {
            lVar15 = 1;
          }
          else if (uVar8 < 0x4000) {
            lVar15 = 2;
          }
          else if (uVar8 < 0x200000) {
            lVar15 = 3;
          }
          else {
            lVar15 = 4;
            if (uVar8 >> 0x1c != 0) {
              lVar15 = 5;
            }
          }
          if ((long)(*param_4 + ~(ulong)(param_3 + lVar15) + 0x10) < (long)sVar2) goto LAB_006ff23c;
          uVar17 = uVar8 | 2;
          *param_3 = (byte)uVar17;
          if (uVar17 < 0x80) {
            param_3 = param_3 + 1;
          }
          else {
            uVar19 = uVar8 >> 7;
            *param_3 = (byte)uVar8 | 0x82;
            param_3[1] = (byte)uVar19;
            param_3 = param_3 + 2;
            pbVar21 = param_3;
            if (0x3fff < uVar17) {
              do {
                uVar8 = uVar19 >> 0xe;
                uVar19 = uVar19 >> 7;
                pbVar21[-1] = pbVar21[-1] | 0x80;
                param_3 = pbVar21 + 1;
                *pbVar21 = (byte)uVar19;
                pbVar21 = param_3;
              } while (uVar8 != 0);
            }
          }
          *param_3 = (byte)sVar2;
          pbVar21 = *(byte **)(pbVar25 + 0x10);
          if ((*pbVar25 & 1) == 0) {
            pbVar21 = pbVar25 + 1;
          }
          memcpy(param_3 + 1,pbVar21,sVar2);
          param_3 = param_3 + 1 + sVar2;
          if (((ulong)local_b0 & 1) == 0) break;
LAB_006ff204:
          free(local_a0[0]);
          break;
        case (code)0xa:
          if ((((byte)param_1[1] ^ 0xff) & 0x60) == 0) {
            if (ppcVar23 == ppcVar26) {
                    /* try { // try from 006ff038 to 006ff05f has its CatchHandler @ 007006fc */
              pcVar22 = (code *)FUN_006832a0(extraout_x1,param_2,param_1,uVar14 & 0xffffffff);
            }
            else {
              pcVar22 = ppcVar23[uVar14];
            }
          }
          else {
                    /* try { // try from 006fe82c to 006fe843 has its CatchHandler @ 007006fc */
            pcVar22 = (code *)FUN_0068265c(extraout_x1,param_2,param_1,0);
          }
          param_3 = (byte *)FUN_00678bd4(*(undefined4 *)(param_1 + 4),pcVar22,param_3,param_4);
          break;
        case (code)0xb:
          if ((((byte)param_1[1] ^ 0xff) & 0x60) == 0) {
            if (ppcVar23 == ppcVar26) {
                    /* try { // try from 006ff064 to 006ff0a7 has its CatchHandler @ 00700708 */
              pcVar22 = (code *)FUN_006832a0(extraout_x1,param_2,param_1,uVar14 & 0xffffffff);
            }
            else {
              pcVar22 = ppcVar23[uVar14];
            }
          }
          else {
                    /* try { // try from 006fea60 to 006fea73 has its CatchHandler @ 00700708 */
            pcVar22 = (code *)FUN_0068265c(extraout_x1,param_2,param_1,0);
          }
          uVar10 = *(undefined4 *)(param_1 + 4);
          uVar11 = (**(code **)(*(long *)pcVar22 + 0x48))(pcVar22);
          param_3 = (byte *)FUN_00678d18(uVar10,pcVar22,uVar11,param_3,param_4);
          break;
        case (code)0xc:
          local_b0 = (code **)0x0;
          local_a8 = (code **)0x0;
          local_a0[0] = (void *)0x0;
          if ((((byte)param_1[1] ^ 0xff) & 0x60) == 0) {
                    /* try { // try from 006fe4cc to 006fe4e3 has its CatchHandler @ 007006b4 */
            pbVar25 = (byte *)FUN_00681498(extraout_x1,param_2,param_1,uVar14 & 0xffffffff,&local_b0
                                          );
          }
          else {
                    /* try { // try from 006fe788 to 006fe79b has its CatchHandler @ 007006b4 */
            pbVar25 = (byte *)FUN_006807ec(extraout_x1,param_2,param_1,&local_b0);
          }
          sVar2 = (ulong)(*pbVar25 >> 1);
          if ((*pbVar25 & 1) != 0) {
            sVar2 = *(size_t *)(pbVar25 + 8);
          }
          if ((long)sVar2 < 0x80) {
            uVar8 = *(int *)(param_1 + 4) << 3;
            if (uVar8 < 0x80) {
              lVar15 = 1;
            }
            else if (uVar8 < 0x4000) {
              lVar15 = 2;
            }
            else if (uVar8 < 0x200000) {
              lVar15 = 3;
            }
            else {
              lVar15 = 4;
              if (uVar8 >> 0x1c != 0) {
                lVar15 = 5;
              }
            }
            if ((long)(*param_4 + ~(ulong)(param_3 + lVar15) + 0x10) < (long)sVar2)
            goto LAB_006ff22c;
            uVar17 = uVar8 | 2;
            *param_3 = (byte)uVar17;
            if (uVar17 < 0x80) {
              param_3 = param_3 + 1;
            }
            else {
              uVar19 = uVar8 >> 7;
              *param_3 = (byte)uVar8 | 0x82;
              param_3[1] = (byte)uVar19;
              param_3 = param_3 + 2;
              pbVar21 = param_3;
              if (0x3fff < uVar17) {
                do {
                  uVar8 = uVar19 >> 0xe;
                  uVar19 = uVar19 >> 7;
                  pbVar21[-1] = pbVar21[-1] | 0x80;
                  param_3 = pbVar21 + 1;
                  *pbVar21 = (byte)uVar19;
                  pbVar21 = param_3;
                } while (uVar8 != 0);
              }
            }
            *param_3 = (byte)sVar2;
            pbVar21 = *(byte **)(pbVar25 + 0x10);
            if ((*pbVar25 & 1) == 0) {
              pbVar21 = pbVar25 + 1;
            }
            memcpy(param_3 + 1,pbVar21,sVar2);
            param_3 = param_3 + 1 + sVar2;
          }
          else {
LAB_006ff22c:
                    /* try { // try from 006ff22c to 006ff237 has its CatchHandler @ 007006b4 */
            param_3 = (byte *)FUN_0066d8d0(param_4,*(int *)(param_1 + 4),pbVar25,param_3);
          }
joined_r0x006ff154:
          if (((ulong)local_b0 & 1) != 0) goto LAB_006ff204;
          break;
        case (code)0xd:
          if ((((byte)param_1[1] ^ 0xff) & 0x60) == 0) {
                    /* try { // try from 006fe518 to 006fe52b has its CatchHandler @ 0070069c */
            uVar8 = FUN_0067e0bc(extraout_x1,param_2,param_1,uVar14 & 0xffffffff);
          }
          else {
                    /* try { // try from 006fe800 to 006fe80f has its CatchHandler @ 0070069c */
            uVar8 = FUN_0067dbc0(extraout_x1,param_2,param_1);
          }
          uVar17 = *(int *)(param_1 + 4) << 3;
          *param_3 = (byte)uVar17;
          if (uVar17 < 0x80) {
            pbVar25 = param_3 + 1;
          }
          else {
            uVar19 = uVar17 >> 7;
            pbVar25 = param_3 + 2;
            *param_3 = (byte)uVar17 | 0x80;
            param_3[1] = (byte)uVar19;
            pbVar21 = pbVar25;
            if (0x3fff < uVar17) {
              do {
                uVar17 = uVar19 >> 0xe;
                uVar19 = uVar19 >> 7;
                pbVar21[-1] = pbVar21[-1] | 0x80;
                pbVar25 = pbVar21 + 1;
                *pbVar21 = (byte)uVar19;
                pbVar21 = pbVar25;
              } while (uVar17 != 0);
            }
          }
          *pbVar25 = (byte)uVar8;
          if (uVar8 < 0x80) goto LAB_006fe3c0;
          uVar17 = uVar8 >> 7;
          param_3 = pbVar25 + 2;
          *pbVar25 = (byte)uVar8 | 0x80;
          pbVar25[1] = (byte)uVar17;
          pbVar25 = param_3;
          if (0x3fff < uVar8) {
            do {
              uVar8 = uVar17 >> 0xe;
              uVar17 = uVar17 >> 7;
              pbVar25[-1] = pbVar25[-1] | 0x80;
              param_3 = pbVar25 + 1;
              *pbVar25 = (byte)uVar17;
              pbVar25 = param_3;
            } while (uVar8 != 0);
          }
          break;
        case (code)0xe:
          if ((((byte)param_1[1] ^ 0xff) & 0x60) == 0) {
                    /* try { // try from 006fe65c to 006fe66f has its CatchHandler @ 007006a0 */
            lVar15 = FUN_00681f54(extraout_x1,param_2,param_1,uVar14 & 0xffffffff);
          }
          else {
                    /* try { // try from 006fe9fc to 006fea0b has its CatchHandler @ 007006a0 */
            lVar15 = FUN_006818cc(extraout_x1,param_2,param_1);
          }
          uVar17 = *(int *)(param_1 + 4) << 3;
          uVar8 = *(uint *)(lVar15 + 4);
          *param_3 = (byte)uVar17;
          if (uVar17 < 0x80) {
            pbVar25 = param_3 + 1;
          }
          else {
            uVar19 = uVar17 >> 7;
            pbVar25 = param_3 + 2;
            *param_3 = (byte)uVar17 | 0x80;
            param_3[1] = (byte)uVar19;
            pbVar21 = pbVar25;
            if (0x3fff < uVar17) {
              do {
                uVar17 = uVar19 >> 0xe;
                uVar19 = uVar19 >> 7;
                pbVar21[-1] = pbVar21[-1] | 0x80;
                pbVar25 = pbVar21 + 1;
                *pbVar21 = (byte)uVar19;
                pbVar21 = pbVar25;
              } while (uVar17 != 0);
            }
          }
          *pbVar25 = (byte)uVar8;
          if (uVar8 < 0x80) {
            param_3 = pbVar25 + 1;
          }
          else {
            uVar18 = (ulong)(long)(int)uVar8 >> 7;
            param_3 = pbVar25 + 2;
            *pbVar25 = (byte)uVar8 | 0x80;
            pbVar25[1] = (byte)uVar18;
            pbVar25 = param_3;
            if (0x3fff < uVar8) {
              do {
                uVar20 = uVar18 >> 0xe;
                uVar18 = uVar18 >> 7;
                pbVar25[-1] = pbVar25[-1] | 0x80;
                param_3 = pbVar25 + 1;
                *pbVar25 = (byte)uVar18;
                pbVar25 = param_3;
              } while (uVar20 != 0);
            }
          }
          break;
        case (code)0xf:
          if ((((byte)param_1[1] ^ 0xff) & 0x60) == 0) {
                    /* try { // try from 006fe4a0 to 006fe4b3 has its CatchHandler @ 007006a4 */
            uVar10 = FUN_0067d03c(extraout_x1,param_2,param_1,uVar14 & 0xffffffff);
          }
          else {
                    /* try { // try from 006fe720 to 006fe72f has its CatchHandler @ 007006a4 */
            uVar10 = FUN_0067cb40(extraout_x1,param_2,param_1);
          }
          iVar9 = *(int *)(param_1 + 4);
          uVar8 = iVar9 << 3 | 5;
          *param_3 = (byte)uVar8;
          if (uVar8 < 0x80) goto LAB_006fea54;
          *param_3 = (byte)uVar8 | 0x80;
          uVar17 = (uint)(iVar9 << 3) >> 7;
          param_3[1] = (byte)uVar17;
          pbVar25 = param_3 + 2;
          pbVar21 = pbVar25;
          if (0x3fff < uVar8) {
            do {
              uVar8 = uVar17 >> 0xe;
              uVar17 = uVar17 >> 7;
              pbVar21[-1] = pbVar21[-1] | 0x80;
              pbVar25 = pbVar21 + 1;
              *pbVar21 = (byte)uVar17;
              pbVar21 = pbVar25;
            } while (uVar8 != 0);
          }
LAB_006feff0:
          param_3 = pbVar25 + 4;
          *(undefined4 *)pbVar25 = uVar10;
          break;
        case (code)0x10:
          if ((((byte)param_1[1] ^ 0xff) & 0x60) == 0) {
                    /* try { // try from 006fe584 to 006fe597 has its CatchHandler @ 007006a8 */
            uVar16 = FUN_0067d87c(extraout_x1,param_2,param_1,uVar14 & 0xffffffff);
          }
          else {
                    /* try { // try from 006fe874 to 006fe883 has its CatchHandler @ 007006a8 */
            uVar16 = FUN_0067d380(extraout_x1,param_2,param_1);
          }
          iVar9 = *(int *)(param_1 + 4);
          uVar8 = iVar9 << 3 | 1;
          *param_3 = (byte)uVar8;
          if (uVar8 < 0x80) goto LAB_006fe9f0;
          *param_3 = (byte)uVar8 | 0x80;
          uVar17 = (uint)(iVar9 << 3) >> 7;
          param_3[1] = (byte)uVar17;
          pbVar25 = param_3 + 2;
          pbVar21 = pbVar25;
          if (0x3fff < uVar8) {
            do {
              uVar8 = uVar17 >> 0xe;
              uVar17 = uVar17 >> 7;
              pbVar21[-1] = pbVar21[-1] | 0x80;
              pbVar25 = pbVar21 + 1;
              *pbVar21 = (byte)uVar17;
              pbVar21 = pbVar25;
            } while (uVar8 != 0);
          }
LAB_006fef24:
          param_3 = pbVar25 + 8;
          *(undefined8 *)pbVar25 = uVar16;
          break;
        case (code)0x11:
          if ((((byte)param_1[1] ^ 0xff) & 0x60) == 0) {
                    /* try { // try from 006fe47c to 006fe48f has its CatchHandler @ 007006ac */
            iVar9 = FUN_0067d03c(extraout_x1,param_2,param_1,uVar14 & 0xffffffff);
          }
          else {
                    /* try { // try from 006fe6f4 to 006fe703 has its CatchHandler @ 007006ac */
            iVar9 = FUN_0067cb40(extraout_x1,param_2,param_1);
          }
          uVar8 = *(int *)(param_1 + 4) << 3;
          *param_3 = (byte)uVar8;
          if (uVar8 < 0x80) {
            pbVar25 = param_3 + 1;
          }
          else {
            uVar17 = uVar8 >> 7;
            pbVar25 = param_3 + 2;
            *param_3 = (byte)uVar8 | 0x80;
            param_3[1] = (byte)uVar17;
            pbVar21 = pbVar25;
            if (0x3fff < uVar8) {
              do {
                uVar8 = uVar17 >> 0xe;
                uVar17 = uVar17 >> 7;
                pbVar21[-1] = pbVar21[-1] | 0x80;
                pbVar25 = pbVar21 + 1;
                *pbVar21 = (byte)uVar17;
                pbVar21 = pbVar25;
              } while (uVar8 != 0);
            }
          }
          uVar8 = iVar9 << 1 ^ iVar9 >> 0x1f;
          *pbVar25 = (byte)uVar8;
          if (uVar8 < 0x80) goto LAB_006fe3c0;
          uVar17 = uVar8 >> 7;
          param_3 = pbVar25 + 2;
          *pbVar25 = (byte)uVar8 | 0x80;
          pbVar25[1] = (byte)uVar17;
          pbVar25 = param_3;
          if (0x3fff < uVar8) {
            do {
              uVar8 = uVar17 >> 0xe;
              uVar17 = uVar17 >> 7;
              pbVar25[-1] = pbVar25[-1] | 0x80;
              param_3 = pbVar25 + 1;
              *pbVar25 = (byte)uVar17;
              pbVar25 = param_3;
            } while (uVar8 != 0);
          }
          break;
        case (code)0x12:
          if ((((byte)param_1[1] ^ 0xff) & 0x60) == 0) {
                    /* try { // try from 006fe614 to 006fe627 has its CatchHandler @ 007006b0 */
            lVar15 = FUN_0067d87c(extraout_x1,param_2,param_1,uVar14 & 0xffffffff);
          }
          else {
                    /* try { // try from 006fe99c to 006fe9ab has its CatchHandler @ 007006b0 */
            lVar15 = FUN_0067d380(extraout_x1,param_2,param_1);
          }
          uVar8 = *(int *)(param_1 + 4) << 3;
          *param_3 = (byte)uVar8;
          if (uVar8 < 0x80) {
            pbVar25 = param_3 + 1;
          }
          else {
            uVar17 = uVar8 >> 7;
            pbVar25 = param_3 + 2;
            *param_3 = (byte)uVar8 | 0x80;
            param_3[1] = (byte)uVar17;
            pbVar21 = pbVar25;
            if (0x3fff < uVar8) {
              do {
                uVar8 = uVar17 >> 0xe;
                uVar17 = uVar17 >> 7;
                pbVar21[-1] = pbVar21[-1] | 0x80;
                pbVar25 = pbVar21 + 1;
                *pbVar21 = (byte)uVar17;
                pbVar21 = pbVar25;
              } while (uVar8 != 0);
            }
          }
          uVar18 = lVar15 << 1 ^ lVar15 >> 0x3f;
          *pbVar25 = (byte)uVar18;
          if (uVar18 < 0x80) goto LAB_006fe3c0;
          uVar20 = uVar18 >> 7;
          param_3 = pbVar25 + 2;
          *pbVar25 = (byte)uVar18 | 0x80;
          pbVar25[1] = (byte)uVar20;
          pbVar25 = param_3;
          if (0x3fff < uVar18) {
            do {
              uVar18 = uVar20 >> 0xe;
              uVar20 = uVar20 >> 7;
              pbVar25[-1] = pbVar25[-1] | 0x80;
              param_3 = pbVar25 + 1;
              *pbVar25 = (byte)uVar20;
              pbVar25 = param_3;
            } while (uVar18 != 0);
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar13);
    }
    goto joined_r0x006ffcfc;
  }
  if ((int)uVar13 == 0) goto joined_r0x006ffcfc;
  if (param_3 < (byte *)*param_4) {
    plVar12 = *(long **)(param_1 + 0x18);
  }
  else {
                    /* try { // try from 006ffb18 to 006ffb23 has its CatchHandler @ 00700700 */
    param_3 = (byte *)FUN_0066d3f8(param_4,param_3);
    plVar12 = *(long **)(param_1 + 0x18);
  }
  if ((plVar12 != (long *)0x0) &&
     (local_f8 = thunk_FUN_006af330, local_100 = param_1, *plVar12 != -1)) {
    local_b0 = &local_f8;
    local_a8 = &local_100;
    local_f0 = &local_b0;
    FUN_00710f84(plVar12,&local_f0,FUN_00685640);
  }
  switch(param_1[2]) {
  case (code)0x1:
                    /* try { // try from 006fe354 to 006fe36f has its CatchHandler @ 00700674 */
    uVar16 = FUN_0068486c(extraout_x1,param_2,param_1);
    FUN_00674e54(&local_b0,uVar16);
    iVar9 = *(int *)(param_1 + 4);
    if ((byte *)*param_4 <= param_3) {
                    /* try { // try from 006ffc30 to 006ffc3b has its CatchHandler @ 007005e0 */
      param_3 = (byte *)FUN_0066d3f8(param_4,param_3);
    }
    uVar8 = iVar9 << 3 | 2;
    uVar17 = (int)local_b0 << 3;
    *param_3 = (byte)uVar8;
    if (uVar8 < 0x80) {
      pbVar25 = param_3 + 1;
    }
    else {
      pbVar25 = param_3 + 2;
      *param_3 = (byte)uVar8 | 0x80;
      uVar19 = (uint)(iVar9 << 3) >> 7;
      param_3[1] = (byte)uVar19;
      pbVar21 = pbVar25;
      if (0x3fff < uVar8) {
        do {
          uVar8 = uVar19 >> 0xe;
          uVar19 = uVar19 >> 7;
          pbVar21[-1] = pbVar21[-1] | 0x80;
          pbVar25 = pbVar21 + 1;
          *pbVar21 = (byte)uVar19;
          pbVar21 = pbVar25;
        } while (uVar8 != 0);
      }
    }
    pbVar21 = pbVar25;
    uVar19 = uVar17;
    uVar8 = uVar17;
    if (0x7f < uVar17) {
      do {
        uVar8 = uVar19 >> 7;
        uVar4 = uVar19 >> 0xe;
        pbVar25 = pbVar21 + 1;
        *pbVar21 = (byte)uVar19 | 0x80;
        pbVar21 = pbVar25;
        uVar19 = uVar8;
      } while (uVar4 != 0);
    }
    *pbVar25 = (byte)uVar8;
                    /* try { // try from 006ff9e0 to 006ff9e7 has its CatchHandler @ 007005e0 */
    param_3 = (byte *)FUN_00706310(param_4,local_a8,uVar17,pbVar25 + 1);
    FUN_00674fac(&local_b0);
    break;
  case (code)0x2:
                    /* try { // try from 006ff65c to 006ff677 has its CatchHandler @ 00700650 */
    uVar16 = FUN_00684854(extraout_x1,param_2,param_1);
    FUN_00674a14(&local_b0,uVar16);
    iVar9 = *(int *)(param_1 + 4);
    if ((byte *)*param_4 <= param_3) {
                    /* try { // try from 006ffc44 to 006ffc4f has its CatchHandler @ 007005c8 */
      param_3 = (byte *)FUN_0066d3f8(param_4,param_3);
    }
    uVar8 = iVar9 << 3 | 2;
    uVar17 = (int)local_b0 << 2;
    *param_3 = (byte)uVar8;
    if (uVar8 < 0x80) {
      pbVar25 = param_3 + 1;
    }
    else {
      pbVar25 = param_3 + 2;
      *param_3 = (byte)uVar8 | 0x80;
      uVar19 = (uint)(iVar9 << 3) >> 7;
      param_3[1] = (byte)uVar19;
      pbVar21 = pbVar25;
      if (0x3fff < uVar8) {
        do {
          uVar8 = uVar19 >> 0xe;
          uVar19 = uVar19 >> 7;
          pbVar21[-1] = pbVar21[-1] | 0x80;
          pbVar25 = pbVar21 + 1;
          *pbVar21 = (byte)uVar19;
          pbVar21 = pbVar25;
        } while (uVar8 != 0);
      }
    }
    pbVar21 = pbVar25;
    uVar19 = uVar17;
    uVar8 = uVar17;
    if (0x7f < uVar17) {
      do {
        uVar8 = uVar19 >> 7;
        uVar4 = uVar19 >> 0xe;
        pbVar25 = pbVar21 + 1;
        *pbVar21 = (byte)uVar19 | 0x80;
        pbVar21 = pbVar25;
        uVar19 = uVar8;
      } while (uVar4 != 0);
    }
    *pbVar25 = (byte)uVar8;
                    /* try { // try from 006ffa50 to 006ffa57 has its CatchHandler @ 007005c8 */
    param_3 = (byte *)FUN_007062c0(param_4,local_a8,uVar17,pbVar25 + 1);
    FUN_00674b68(&local_b0);
    break;
  case (code)0x3:
                    /* try { // try from 006ff604 to 006ff61f has its CatchHandler @ 00700654 */
    uVar16 = FUN_0068480c(extraout_x1,param_2,param_1);
    FUN_0067418c(&local_b0,uVar16);
    iVar9 = *(int *)(param_1 + 4);
                    /* try { // try from 006ff624 to 006ff62f has its CatchHandler @ 00700584 */
    uVar13 = FUN_00701a38(param_1,param_2);
    if (param_3 < (byte *)*param_4) {
      uVar8 = iVar9 << 3 | 2;
      *param_3 = (byte)uVar8;
      if (0x7f < uVar8) goto LAB_007001f8;
LAB_006ff654:
      pbVar25 = param_3 + 1;
    }
    else {
                    /* try { // try from 007001d4 to 007001df has its CatchHandler @ 00700584 */
      param_3 = (byte *)FUN_0066d3f8(param_4,param_3);
      uVar8 = iVar9 << 3 | 2;
      *param_3 = (byte)uVar8;
      if (uVar8 < 0x80) goto LAB_006ff654;
LAB_007001f8:
      *param_3 = (byte)uVar8 | 0x80;
      uVar17 = (uint)(iVar9 << 3) >> 7;
      param_3[1] = (byte)uVar17;
      pbVar25 = param_3 + 2;
      pbVar21 = pbVar25;
      if (0x3fff < uVar8) {
        do {
          uVar8 = uVar17 >> 0xe;
          uVar17 = uVar17 >> 7;
          pbVar21[-1] = pbVar21[-1] | 0x80;
          pbVar25 = pbVar21 + 1;
          *pbVar21 = (byte)uVar17;
          pbVar21 = pbVar25;
        } while (uVar8 != 0);
      }
    }
    pbVar21 = pbVar25;
    if ((uint)uVar13 < 0x80) {
      bVar7 = (byte)uVar13;
    }
    else {
      do {
        uVar18 = uVar13 >> 7 & 0x1ffffff;
        uVar14 = uVar13 >> 0xe;
        pbVar25 = pbVar21 + 1;
        *pbVar21 = (byte)uVar13 | 0x80;
        bVar7 = (byte)uVar18;
        pbVar21 = pbVar25;
        uVar13 = uVar18;
      } while ((uVar14 & 0x3ffff) != 0);
    }
    param_3 = pbVar25 + 1;
    *pbVar25 = bVar7;
    ppcVar26 = local_a8 + (int)local_b0;
    ppcVar24 = local_a8;
    do {
      if (param_3 < (byte *)*param_4) {
        pcVar22 = *ppcVar24;
        *param_3 = (byte)pcVar22;
        if (pcVar22 < (code *)0x80) goto LAB_00700254;
LAB_0070027c:
        uVar13 = (ulong)pcVar22 >> 7;
        *param_3 = (byte)pcVar22 | 0x80;
        param_3[1] = (byte)uVar13;
        param_3 = param_3 + 2;
        pbVar25 = param_3;
        if ((code *)0x3fff < pcVar22) {
          do {
            uVar14 = uVar13 >> 0xe;
            uVar13 = uVar13 >> 7;
            pbVar25[-1] = pbVar25[-1] | 0x80;
            param_3 = pbVar25 + 1;
            *pbVar25 = (byte)uVar13;
            pbVar25 = param_3;
          } while (uVar14 != 0);
        }
      }
      else {
                    /* try { // try from 007002b8 to 007002c3 has its CatchHandler @ 00700548 */
        param_3 = (byte *)FUN_0066d3f8(param_4,param_3);
        pcVar22 = *ppcVar24;
        *param_3 = (byte)pcVar22;
        if ((code *)0x7f < pcVar22) goto LAB_0070027c;
LAB_00700254:
        param_3 = param_3 + 1;
      }
      ppcVar24 = ppcVar24 + 1;
    } while (ppcVar24 < ppcVar26);
    goto LAB_006ff97c;
  case (code)0x4:
                    /* try { // try from 006ff5ac to 006ff5c7 has its CatchHandler @ 00700658 */
    uVar16 = FUN_0068483c(extraout_x1,param_2,param_1);
    FUN_006745d0(&local_b0,uVar16);
    iVar9 = *(int *)(param_1 + 4);
                    /* try { // try from 006ff5cc to 006ff5d7 has its CatchHandler @ 00700588 */
    uVar13 = FUN_00701a38(param_1,param_2);
    if (param_3 < (byte *)*param_4) {
      uVar8 = iVar9 << 3 | 2;
      *param_3 = (byte)uVar8;
      if (0x7f < uVar8) goto LAB_007000d4;
LAB_006ff5fc:
      pbVar25 = param_3 + 1;
    }
    else {
                    /* try { // try from 007000b0 to 007000bb has its CatchHandler @ 00700588 */
      param_3 = (byte *)FUN_0066d3f8(param_4,param_3);
      uVar8 = iVar9 << 3 | 2;
      *param_3 = (byte)uVar8;
      if (uVar8 < 0x80) goto LAB_006ff5fc;
LAB_007000d4:
      *param_3 = (byte)uVar8 | 0x80;
      uVar17 = (uint)(iVar9 << 3) >> 7;
      param_3[1] = (byte)uVar17;
      pbVar25 = param_3 + 2;
      pbVar21 = pbVar25;
      if (0x3fff < uVar8) {
        do {
          uVar8 = uVar17 >> 0xe;
          uVar17 = uVar17 >> 7;
          pbVar21[-1] = pbVar21[-1] | 0x80;
          pbVar25 = pbVar21 + 1;
          *pbVar21 = (byte)uVar17;
          pbVar21 = pbVar25;
        } while (uVar8 != 0);
      }
    }
    pbVar21 = pbVar25;
    if ((uint)uVar13 < 0x80) {
      bVar7 = (byte)uVar13;
    }
    else {
      do {
        uVar18 = uVar13 >> 7 & 0x1ffffff;
        uVar14 = uVar13 >> 0xe;
        pbVar25 = pbVar21 + 1;
        *pbVar21 = (byte)uVar13 | 0x80;
        bVar7 = (byte)uVar18;
        pbVar21 = pbVar25;
        uVar13 = uVar18;
      } while ((uVar14 & 0x3ffff) != 0);
    }
    param_3 = pbVar25 + 1;
    *pbVar25 = bVar7;
    ppcVar26 = local_a8 + (int)local_b0;
    ppcVar24 = local_a8;
    do {
      if (param_3 < (byte *)*param_4) {
        pcVar22 = *ppcVar24;
        *param_3 = (byte)pcVar22;
        if (pcVar22 < (code *)0x80) goto LAB_00700130;
LAB_00700158:
        uVar13 = (ulong)pcVar22 >> 7;
        *param_3 = (byte)pcVar22 | 0x80;
        param_3[1] = (byte)uVar13;
        param_3 = param_3 + 2;
        pbVar25 = param_3;
        if ((code *)0x3fff < pcVar22) {
          do {
            uVar14 = uVar13 >> 0xe;
            uVar13 = uVar13 >> 7;
            pbVar25[-1] = pbVar25[-1] | 0x80;
            param_3 = pbVar25 + 1;
            *pbVar25 = (byte)uVar13;
            pbVar25 = param_3;
          } while (uVar14 != 0);
        }
      }
      else {
                    /* try { // try from 00700194 to 0070019f has its CatchHandler @ 0070054c */
        param_3 = (byte *)FUN_0066d3f8(param_4,param_3);
        pcVar22 = *ppcVar24;
        *param_3 = (byte)pcVar22;
        if ((code *)0x7f < pcVar22) goto LAB_00700158;
LAB_00700130:
        param_3 = param_3 + 1;
      }
      ppcVar24 = ppcVar24 + 1;
    } while (ppcVar24 < ppcVar26);
    goto LAB_006ff90c;
  case (code)0x5:
                    /* try { // try from 006ff45c to 006ff477 has its CatchHandler @ 00700668 */
    uVar16 = FUN_006847f4(extraout_x1,param_2,param_1);
    FUN_0067390c(&local_b0,uVar16);
    iVar9 = *(int *)(param_1 + 4);
                    /* try { // try from 006ff47c to 006ff487 has its CatchHandler @ 00700590 */
    uVar13 = FUN_00701a38(param_1,param_2);
    if (param_3 < (byte *)*param_4) {
      uVar8 = iVar9 << 3 | 2;
      *param_3 = (byte)uVar8;
      if (0x7f < uVar8) goto LAB_006ffe7c;
LAB_006ff4ac:
      pbVar25 = param_3 + 1;
    }
    else {
                    /* try { // try from 006ffe58 to 006ffe63 has its CatchHandler @ 00700590 */
      param_3 = (byte *)FUN_0066d3f8(param_4,param_3);
      uVar8 = iVar9 << 3 | 2;
      *param_3 = (byte)uVar8;
      if (uVar8 < 0x80) goto LAB_006ff4ac;
LAB_006ffe7c:
      *param_3 = (byte)uVar8 | 0x80;
      uVar17 = (uint)(iVar9 << 3) >> 7;
      param_3[1] = (byte)uVar17;
      pbVar25 = param_3 + 2;
      pbVar21 = pbVar25;
      if (0x3fff < uVar8) {
        do {
          uVar8 = uVar17 >> 0xe;
          uVar17 = uVar17 >> 7;
          pbVar21[-1] = pbVar21[-1] | 0x80;
          pbVar25 = pbVar21 + 1;
          *pbVar21 = (byte)uVar17;
          pbVar21 = pbVar25;
        } while (uVar8 != 0);
      }
    }
    pbVar21 = pbVar25;
    if ((uint)uVar13 < 0x80) {
      bVar7 = (byte)uVar13;
    }
    else {
      do {
        uVar18 = uVar13 >> 7 & 0x1ffffff;
        uVar14 = uVar13 >> 0xe;
        pbVar25 = pbVar21 + 1;
        *pbVar21 = (byte)uVar13 | 0x80;
        bVar7 = (byte)uVar18;
        pbVar21 = pbVar25;
        uVar13 = uVar18;
      } while ((uVar14 & 0x3ffff) != 0);
    }
    param_3 = pbVar25 + 1;
    *pbVar25 = bVar7;
    ppcVar26 = (code **)((long)local_a8 + (long)(int)local_b0 * 4);
    ppcVar24 = local_a8;
    do {
      if (param_3 < (byte *)*param_4) {
        uVar8 = *(uint *)ppcVar24;
        *param_3 = (byte)uVar8;
        if (uVar8 < 0x80) goto LAB_006ffed8;
LAB_006fff00:
        uVar13 = (ulong)(long)(int)uVar8 >> 7;
        *param_3 = (byte)uVar8 | 0x80;
        param_3[1] = (byte)uVar13;
        param_3 = param_3 + 2;
        pbVar25 = param_3;
        if (0x3fff < uVar8) {
          do {
            uVar14 = uVar13 >> 0xe;
            uVar13 = uVar13 >> 7;
            pbVar25[-1] = pbVar25[-1] | 0x80;
            param_3 = pbVar25 + 1;
            *pbVar25 = (byte)uVar13;
            pbVar25 = param_3;
          } while (uVar14 != 0);
        }
      }
      else {
                    /* try { // try from 006fff3c to 006fff47 has its CatchHandler @ 00700554 */
        param_3 = (byte *)FUN_0066d3f8(param_4,param_3);
        uVar8 = *(uint *)ppcVar24;
        *param_3 = (byte)uVar8;
        if (0x7f < uVar8) goto LAB_006fff00;
LAB_006ffed8:
        param_3 = param_3 + 1;
      }
      ppcVar24 = (code **)((long)ppcVar24 + 4);
    } while (ppcVar24 < ppcVar26);
    goto LAB_006ff89c;
  case (code)0x6:
                    /* try { // try from 006ff50c to 006ff527 has its CatchHandler @ 00700660 */
    uVar16 = FUN_0068483c(extraout_x1,param_2,param_1);
    FUN_006745d0(&local_b0,uVar16);
    iVar9 = *(int *)(param_1 + 4);
    if ((byte *)*param_4 <= param_3) {
                    /* try { // try from 006ffc08 to 006ffc13 has its CatchHandler @ 00700610 */
      param_3 = (byte *)FUN_0066d3f8(param_4,param_3);
    }
    uVar8 = iVar9 << 3 | 2;
    uVar17 = (int)local_b0 << 3;
    *param_3 = (byte)uVar8;
    if (uVar8 < 0x80) {
      pbVar25 = param_3 + 1;
    }
    else {
      pbVar25 = param_3 + 2;
      *param_3 = (byte)uVar8 | 0x80;
      uVar19 = (uint)(iVar9 << 3) >> 7;
      param_3[1] = (byte)uVar19;
      pbVar21 = pbVar25;
      if (0x3fff < uVar8) {
        do {
          uVar8 = uVar19 >> 0xe;
          uVar19 = uVar19 >> 7;
          pbVar21[-1] = pbVar21[-1] | 0x80;
          pbVar25 = pbVar21 + 1;
          *pbVar21 = (byte)uVar19;
          pbVar21 = pbVar25;
        } while (uVar8 != 0);
      }
    }
    pbVar21 = pbVar25;
    uVar19 = uVar17;
    uVar8 = uVar17;
    if (0x7f < uVar17) {
      do {
        uVar8 = uVar19 >> 7;
        uVar4 = uVar19 >> 0xe;
        pbVar25 = pbVar21 + 1;
        *pbVar21 = (byte)uVar19 | 0x80;
        pbVar21 = pbVar25;
        uVar19 = uVar8;
      } while (uVar4 != 0);
    }
    *pbVar25 = (byte)uVar8;
                    /* try { // try from 006ff900 to 006ff907 has its CatchHandler @ 00700610 */
    param_3 = (byte *)FUN_00706310(param_4,local_a8,uVar17,pbVar25 + 1);
LAB_006ff90c:
    FUN_00674728(&local_b0);
    break;
  case (code)0x7:
                    /* try { // try from 006ff6ac to 006ff6c7 has its CatchHandler @ 0070064c */
    uVar16 = FUN_00684824(extraout_x1,param_2,param_1);
    FUN_00673d4c(&local_b0,uVar16);
    iVar9 = *(int *)(param_1 + 4);
    if ((byte *)*param_4 <= param_3) {
                    /* try { // try from 006ffc58 to 006ffc63 has its CatchHandler @ 007005b0 */
      param_3 = (byte *)FUN_0066d3f8(param_4,param_3);
    }
    uVar8 = iVar9 << 3 | 2;
    uVar17 = (int)local_b0 << 2;
    *param_3 = (byte)uVar8;
    if (uVar8 < 0x80) {
      pbVar25 = param_3 + 1;
    }
    else {
      pbVar25 = param_3 + 2;
      *param_3 = (byte)uVar8 | 0x80;
      uVar19 = (uint)(iVar9 << 3) >> 7;
      param_3[1] = (byte)uVar19;
      pbVar21 = pbVar25;
      if (0x3fff < uVar8) {
        do {
          uVar8 = uVar19 >> 0xe;
          uVar19 = uVar19 >> 7;
          pbVar21[-1] = pbVar21[-1] | 0x80;
          pbVar25 = pbVar21 + 1;
          *pbVar21 = (byte)uVar19;
          pbVar21 = pbVar25;
        } while (uVar8 != 0);
      }
    }
    pbVar21 = pbVar25;
    uVar19 = uVar17;
    uVar8 = uVar17;
    if (0x7f < uVar17) {
      do {
        uVar8 = uVar19 >> 7;
        uVar4 = uVar19 >> 0xe;
        pbVar25 = pbVar21 + 1;
        *pbVar21 = (byte)uVar19 | 0x80;
        pbVar21 = pbVar25;
        uVar19 = uVar8;
      } while (uVar4 != 0);
    }
    *pbVar25 = (byte)uVar8;
                    /* try { // try from 006ffac0 to 006ffac7 has its CatchHandler @ 007005b0 */
    param_3 = (byte *)FUN_007062c0(param_4,local_a8,uVar17,pbVar25 + 1);
    goto LAB_006ffacc;
  case (code)0x8:
                    /* try { // try from 006ff6fc to 006ff717 has its CatchHandler @ 00700648 */
    uVar16 = FUN_00684884(extraout_x1,param_2,param_1);
    FUN_006734e4(&local_b0,uVar16);
    iVar9 = *(int *)(param_1 + 4);
    if (param_3 < (byte *)*param_4) {
      uVar13 = (ulong)local_b0 & 0xffffffff;
      uVar8 = iVar9 << 3 | 2;
      *param_3 = (byte)uVar8;
      if (0x7f < uVar8) goto LAB_006ffc94;
LAB_006ff740:
      pbVar25 = param_3 + 1;
    }
    else {
                    /* try { // try from 006ffc6c to 006ffceb has its CatchHandler @ 00700598 */
      param_3 = (byte *)FUN_0066d3f8(param_4,param_3);
      uVar13 = (ulong)local_b0 & 0xffffffff;
      uVar8 = iVar9 << 3 | 2;
      *param_3 = (byte)uVar8;
      if (uVar8 < 0x80) goto LAB_006ff740;
LAB_006ffc94:
      pbVar25 = param_3 + 2;
      *param_3 = (byte)uVar8 | 0x80;
      uVar17 = (uint)(iVar9 << 3) >> 7;
      param_3[1] = (byte)uVar17;
      pbVar21 = pbVar25;
      if (0x3fff < uVar8) {
        do {
          uVar8 = uVar17 >> 0xe;
          uVar17 = uVar17 >> 7;
          pbVar21[-1] = pbVar21[-1] | 0x80;
          pbVar25 = pbVar21 + 1;
          *pbVar21 = (byte)uVar17;
          pbVar21 = pbVar25;
        } while (uVar8 != 0);
      }
    }
    pbVar21 = pbVar25;
    uVar14 = uVar13;
    uVar18 = uVar13;
    if (0x7f < (uint)uVar13) {
      do {
        uVar20 = uVar18 >> 0xe;
        pbVar25 = pbVar21 + 1;
        *pbVar21 = (byte)uVar18 | 0x80;
        pbVar21 = pbVar25;
        uVar14 = uVar18 >> 7;
        uVar18 = uVar18 >> 7;
      } while (uVar20 != 0);
    }
    *pbVar25 = (byte)uVar14;
    param_3 = (byte *)FUN_00706360(param_4,local_a8,uVar13,pbVar25 + 1);
    FUN_00673630(&local_b0);
    break;
  default:
                    /* try { // try from 006ff7f8 to 006ff80f has its CatchHandler @ 00700578 */
    FUN_00675e64(&local_b0,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/wire_format.cc"
                 ,0x531);
                    /* try { // try from 006ff810 to 006ff823 has its CatchHandler @ 00700560 */
    uVar16 = FUN_00675a58(&local_b0,"Invalid descriptor");
                    /* try { // try from 006ff824 to 006ff82b has its CatchHandler @ 0070055c */
    FUN_00675ac0(&local_f0,uVar16);
    FUN_00675e7c(&local_b0);
    break;
  case (code)0xd:
                    /* try { // try from 006ff7a0 to 006ff7bb has its CatchHandler @ 00700640 */
    uVar16 = FUN_00684824(extraout_x1,param_2,param_1);
    FUN_00673d4c(&local_b0,uVar16);
    iVar9 = *(int *)(param_1 + 4);
                    /* try { // try from 006ff7c0 to 006ff7cb has its CatchHandler @ 0070057c */
    uVar13 = FUN_00701a38(param_1,param_2);
    if (param_3 < (byte *)*param_4) {
      uVar8 = iVar9 << 3 | 2;
      *param_3 = (byte)uVar8;
      if (0x7f < uVar8) goto LAB_00700440;
LAB_006ff7f0:
      pbVar25 = param_3 + 1;
    }
    else {
                    /* try { // try from 0070041c to 00700427 has its CatchHandler @ 0070057c */
      param_3 = (byte *)FUN_0066d3f8(param_4,param_3);
      uVar8 = iVar9 << 3 | 2;
      *param_3 = (byte)uVar8;
      if (uVar8 < 0x80) goto LAB_006ff7f0;
LAB_00700440:
      *param_3 = (byte)uVar8 | 0x80;
      uVar17 = (uint)(iVar9 << 3) >> 7;
      param_3[1] = (byte)uVar17;
      pbVar25 = param_3 + 2;
      pbVar21 = pbVar25;
      if (0x3fff < uVar8) {
        do {
          uVar8 = uVar17 >> 0xe;
          uVar17 = uVar17 >> 7;
          pbVar21[-1] = pbVar21[-1] | 0x80;
          pbVar25 = pbVar21 + 1;
          *pbVar21 = (byte)uVar17;
          pbVar21 = pbVar25;
        } while (uVar8 != 0);
      }
    }
    pbVar21 = pbVar25;
    if ((uint)uVar13 < 0x80) {
      bVar7 = (byte)uVar13;
    }
    else {
      do {
        uVar18 = uVar13 >> 7 & 0x1ffffff;
        uVar14 = uVar13 >> 0xe;
        pbVar25 = pbVar21 + 1;
        *pbVar21 = (byte)uVar13 | 0x80;
        bVar7 = (byte)uVar18;
        pbVar21 = pbVar25;
        uVar13 = uVar18;
      } while ((uVar14 & 0x3ffff) != 0);
    }
    param_3 = pbVar25 + 1;
    *pbVar25 = bVar7;
    ppcVar26 = (code **)((long)local_a8 + (long)(int)local_b0 * 4);
    ppcVar24 = local_a8;
    do {
      if (param_3 < (byte *)*param_4) {
        uVar8 = *(uint *)ppcVar24;
        *param_3 = (byte)uVar8;
        if (uVar8 < 0x80) goto LAB_0070049c;
LAB_007004c4:
        uVar17 = uVar8 >> 7;
        *param_3 = (byte)uVar8 | 0x80;
        param_3[1] = (byte)uVar17;
        param_3 = param_3 + 2;
        pbVar25 = param_3;
        if (0x3fff < uVar8) {
          do {
            uVar8 = uVar17 >> 0xe;
            uVar17 = uVar17 >> 7;
            pbVar25[-1] = pbVar25[-1] | 0x80;
            param_3 = pbVar25 + 1;
            *pbVar25 = (byte)uVar17;
            pbVar25 = param_3;
          } while (uVar8 != 0);
        }
      }
      else {
                    /* try { // try from 00700500 to 0070050b has its CatchHandler @ 00700540 */
        param_3 = (byte *)FUN_0066d3f8(param_4,param_3);
        uVar8 = *(uint *)ppcVar24;
        *param_3 = (byte)uVar8;
        if (0x7f < uVar8) goto LAB_007004c4;
LAB_0070049c:
        param_3 = param_3 + 1;
      }
      ppcVar24 = (code **)((long)ppcVar24 + 4);
    } while (ppcVar24 < ppcVar26);
LAB_006ffacc:
    FUN_00673ea0(&local_b0);
    break;
  case (code)0xe:
                    /* try { // try from 006ff748 to 006ff763 has its CatchHandler @ 00700644 */
    uVar16 = FUN_006847f4(extraout_x1,param_2,param_1);
    FUN_0067390c(&local_b0,uVar16);
    iVar9 = *(int *)(param_1 + 4);
                    /* try { // try from 006ff768 to 006ff773 has its CatchHandler @ 00700580 */
    uVar13 = FUN_00701a38(param_1,param_2);
    if (param_3 < (byte *)*param_4) {
      uVar8 = iVar9 << 3 | 2;
      *param_3 = (byte)uVar8;
      if (0x7f < uVar8) goto LAB_0070031c;
LAB_006ff798:
      pbVar25 = param_3 + 1;
    }
    else {
                    /* try { // try from 007002f8 to 00700303 has its CatchHandler @ 00700580 */
      param_3 = (byte *)FUN_0066d3f8(param_4,param_3);
      uVar8 = iVar9 << 3 | 2;
      *param_3 = (byte)uVar8;
      if (uVar8 < 0x80) goto LAB_006ff798;
LAB_0070031c:
      *param_3 = (byte)uVar8 | 0x80;
      uVar17 = (uint)(iVar9 << 3) >> 7;
      param_3[1] = (byte)uVar17;
      pbVar25 = param_3 + 2;
      pbVar21 = pbVar25;
      if (0x3fff < uVar8) {
        do {
          uVar8 = uVar17 >> 0xe;
          uVar17 = uVar17 >> 7;
          pbVar21[-1] = pbVar21[-1] | 0x80;
          pbVar25 = pbVar21 + 1;
          *pbVar21 = (byte)uVar17;
          pbVar21 = pbVar25;
        } while (uVar8 != 0);
      }
    }
    pbVar21 = pbVar25;
    if ((uint)uVar13 < 0x80) {
      bVar7 = (byte)uVar13;
    }
    else {
      do {
        uVar18 = uVar13 >> 7 & 0x1ffffff;
        uVar14 = uVar13 >> 0xe;
        pbVar25 = pbVar21 + 1;
        *pbVar21 = (byte)uVar13 | 0x80;
        bVar7 = (byte)uVar18;
        pbVar21 = pbVar25;
        uVar13 = uVar18;
      } while ((uVar14 & 0x3ffff) != 0);
    }
    param_3 = pbVar25 + 1;
    *pbVar25 = bVar7;
    ppcVar26 = (code **)((long)local_a8 + (long)(int)local_b0 * 4);
    ppcVar24 = local_a8;
    do {
      if (param_3 < (byte *)*param_4) {
        uVar8 = *(uint *)ppcVar24;
        *param_3 = (byte)uVar8;
        if (uVar8 < 0x80) goto LAB_00700378;
LAB_007003a0:
        uVar13 = (ulong)(long)(int)uVar8 >> 7;
        *param_3 = (byte)uVar8 | 0x80;
        param_3[1] = (byte)uVar13;
        param_3 = param_3 + 2;
        pbVar25 = param_3;
        if (0x3fff < uVar8) {
          do {
            uVar14 = uVar13 >> 0xe;
            uVar13 = uVar13 >> 7;
            pbVar25[-1] = pbVar25[-1] | 0x80;
            param_3 = pbVar25 + 1;
            *pbVar25 = (byte)uVar13;
            pbVar25 = param_3;
          } while (uVar14 != 0);
        }
      }
      else {
                    /* try { // try from 007003dc to 007003e7 has its CatchHandler @ 00700544 */
        param_3 = (byte *)FUN_0066d3f8(param_4,param_3);
        uVar8 = *(uint *)ppcVar24;
        *param_3 = (byte)uVar8;
        if (0x7f < uVar8) goto LAB_007003a0;
LAB_00700378:
        param_3 = param_3 + 1;
      }
      ppcVar24 = (code **)((long)ppcVar24 + 4);
    } while (ppcVar24 < ppcVar26);
    goto LAB_006ff89c;
  case (code)0xf:
                    /* try { // try from 006ff40c to 006ff427 has its CatchHandler @ 0070066c */
    uVar16 = FUN_006847f4(extraout_x1,param_2,param_1);
    FUN_0067390c(&local_b0,uVar16);
    iVar9 = *(int *)(param_1 + 4);
    if ((byte *)*param_4 <= param_3) {
                    /* try { // try from 006ffbf4 to 006ffbff has its CatchHandler @ 00700628 */
      param_3 = (byte *)FUN_0066d3f8(param_4,param_3);
    }
    uVar8 = iVar9 << 3 | 2;
    uVar17 = (int)local_b0 << 2;
    *param_3 = (byte)uVar8;
    if (uVar8 < 0x80) {
      pbVar25 = param_3 + 1;
    }
    else {
      pbVar25 = param_3 + 2;
      *param_3 = (byte)uVar8 | 0x80;
      uVar19 = (uint)(iVar9 << 3) >> 7;
      param_3[1] = (byte)uVar19;
      pbVar21 = pbVar25;
      if (0x3fff < uVar8) {
        do {
          uVar8 = uVar19 >> 0xe;
          uVar19 = uVar19 >> 7;
          pbVar21[-1] = pbVar21[-1] | 0x80;
          pbVar25 = pbVar21 + 1;
          *pbVar21 = (byte)uVar19;
          pbVar21 = pbVar25;
        } while (uVar8 != 0);
      }
    }
    pbVar21 = pbVar25;
    uVar19 = uVar17;
    uVar8 = uVar17;
    if (0x7f < uVar17) {
      do {
        uVar8 = uVar19 >> 7;
        uVar4 = uVar19 >> 0xe;
        pbVar25 = pbVar21 + 1;
        *pbVar21 = (byte)uVar19 | 0x80;
        pbVar21 = pbVar25;
        uVar19 = uVar8;
      } while (uVar4 != 0);
    }
    *pbVar25 = (byte)uVar8;
                    /* try { // try from 006ff890 to 006ff897 has its CatchHandler @ 00700628 */
    param_3 = (byte *)FUN_007062c0(param_4,local_a8,uVar17,pbVar25 + 1);
    goto LAB_006ff89c;
  case (code)0x10:
                    /* try { // try from 006ff55c to 006ff577 has its CatchHandler @ 0070065c */
    uVar16 = FUN_0068480c(extraout_x1,param_2,param_1);
    FUN_0067418c(&local_b0,uVar16);
    iVar9 = *(int *)(param_1 + 4);
    if ((byte *)*param_4 <= param_3) {
                    /* try { // try from 006ffc1c to 006ffc27 has its CatchHandler @ 007005f8 */
      param_3 = (byte *)FUN_0066d3f8(param_4,param_3);
    }
    uVar8 = iVar9 << 3 | 2;
    uVar17 = (int)local_b0 << 3;
    *param_3 = (byte)uVar8;
    if (uVar8 < 0x80) {
      pbVar25 = param_3 + 1;
    }
    else {
      pbVar25 = param_3 + 2;
      *param_3 = (byte)uVar8 | 0x80;
      uVar19 = (uint)(iVar9 << 3) >> 7;
      param_3[1] = (byte)uVar19;
      pbVar21 = pbVar25;
      if (0x3fff < uVar8) {
        do {
          uVar8 = uVar19 >> 0xe;
          uVar19 = uVar19 >> 7;
          pbVar21[-1] = pbVar21[-1] | 0x80;
          pbVar25 = pbVar21 + 1;
          *pbVar21 = (byte)uVar19;
          pbVar21 = pbVar25;
        } while (uVar8 != 0);
      }
    }
    pbVar21 = pbVar25;
    uVar19 = uVar17;
    uVar8 = uVar17;
    if (0x7f < uVar17) {
      do {
        uVar8 = uVar19 >> 7;
        uVar4 = uVar19 >> 0xe;
        pbVar25 = pbVar21 + 1;
        *pbVar21 = (byte)uVar19 | 0x80;
        pbVar21 = pbVar25;
        uVar19 = uVar8;
      } while (uVar4 != 0);
    }
    *pbVar25 = (byte)uVar8;
                    /* try { // try from 006ff970 to 006ff977 has its CatchHandler @ 007005f8 */
    param_3 = (byte *)FUN_00706310(param_4,local_a8,uVar17,pbVar25 + 1);
    goto LAB_006ff97c;
  case (code)0x11:
                    /* try { // try from 006ff4b4 to 006ff4cf has its CatchHandler @ 00700664 */
    uVar16 = FUN_006847f4(extraout_x1,param_2,param_1);
    FUN_0067390c(&local_b0,uVar16);
    iVar9 = *(int *)(param_1 + 4);
                    /* try { // try from 006ff4d4 to 006ff4df has its CatchHandler @ 0070058c */
    uVar13 = FUN_00701a38(param_1,param_2);
    if (param_3 < (byte *)*param_4) {
      uVar8 = iVar9 << 3 | 2;
      *param_3 = (byte)uVar8;
      if (0x7f < uVar8) goto LAB_006fffa0;
LAB_006ff504:
      pbVar25 = param_3 + 1;
    }
    else {
                    /* try { // try from 006fff7c to 006fff87 has its CatchHandler @ 0070058c */
      param_3 = (byte *)FUN_0066d3f8(param_4,param_3);
      uVar8 = iVar9 << 3 | 2;
      *param_3 = (byte)uVar8;
      if (uVar8 < 0x80) goto LAB_006ff504;
LAB_006fffa0:
      *param_3 = (byte)uVar8 | 0x80;
      uVar17 = (uint)(iVar9 << 3) >> 7;
      param_3[1] = (byte)uVar17;
      pbVar25 = param_3 + 2;
      pbVar21 = pbVar25;
      if (0x3fff < uVar8) {
        do {
          uVar8 = uVar17 >> 0xe;
          uVar17 = uVar17 >> 7;
          pbVar21[-1] = pbVar21[-1] | 0x80;
          pbVar25 = pbVar21 + 1;
          *pbVar21 = (byte)uVar17;
          pbVar21 = pbVar25;
        } while (uVar8 != 0);
      }
    }
    pbVar21 = pbVar25;
    if ((uint)uVar13 < 0x80) {
      bVar7 = (byte)uVar13;
    }
    else {
      do {
        uVar18 = uVar13 >> 7 & 0x1ffffff;
        uVar14 = uVar13 >> 0xe;
        pbVar25 = pbVar21 + 1;
        *pbVar21 = (byte)uVar13 | 0x80;
        bVar7 = (byte)uVar18;
        pbVar21 = pbVar25;
        uVar13 = uVar18;
      } while ((uVar14 & 0x3ffff) != 0);
    }
    param_3 = pbVar25 + 1;
    *pbVar25 = bVar7;
    ppcVar26 = (code **)((long)local_a8 + (long)(int)local_b0 * 4);
    ppcVar24 = local_a8;
    do {
      if (param_3 < (byte *)*param_4) {
        uVar8 = *(uint *)ppcVar24 << 1 ^ (int)*(uint *)ppcVar24 >> 0x1f;
        *param_3 = (byte)uVar8;
        if (uVar8 < 0x80) goto LAB_006ffffc;
LAB_0070002c:
        uVar17 = uVar8 >> 7;
        *param_3 = (byte)uVar8 | 0x80;
        param_3[1] = (byte)uVar17;
        param_3 = param_3 + 2;
        pbVar25 = param_3;
        if (0x3fff < uVar8) {
          do {
            uVar8 = uVar17 >> 0xe;
            uVar17 = uVar17 >> 7;
            pbVar25[-1] = pbVar25[-1] | 0x80;
            param_3 = pbVar25 + 1;
            *pbVar25 = (byte)uVar17;
            pbVar25 = param_3;
          } while (uVar8 != 0);
        }
      }
      else {
                    /* try { // try from 00700068 to 00700073 has its CatchHandler @ 00700550 */
        param_3 = (byte *)FUN_0066d3f8(param_4,param_3);
        uVar8 = *(uint *)ppcVar24 << 1 ^ (int)*(uint *)ppcVar24 >> 0x1f;
        *param_3 = (byte)uVar8;
        if (0x7f < uVar8) goto LAB_0070002c;
LAB_006ffffc:
        param_3 = param_3 + 1;
      }
      ppcVar24 = (code **)((long)ppcVar24 + 4);
    } while (ppcVar24 < ppcVar26);
LAB_006ff89c:
    FUN_00673a60(&local_b0);
joined_r0x006ff8a8:
    if (ppcVar23 == (code **)0x0) goto LAB_006ffae4;
    goto LAB_006ffadc;
  case (code)0x12:
                    /* try { // try from 006ff3b4 to 006ff3cf has its CatchHandler @ 00700670 */
    uVar16 = FUN_0068480c(extraout_x1,param_2,param_1);
    FUN_0067418c(&local_b0,uVar16);
    iVar9 = *(int *)(param_1 + 4);
                    /* try { // try from 006ff3d4 to 006ff3df has its CatchHandler @ 00700594 */
    uVar13 = FUN_00701a38(param_1,param_2);
    if (param_3 < (byte *)*param_4) {
      uVar8 = iVar9 << 3 | 2;
      *param_3 = (byte)uVar8;
      if (0x7f < uVar8) goto LAB_006ffd48;
LAB_006ff404:
      pbVar25 = param_3 + 1;
    }
    else {
                    /* try { // try from 006ffd24 to 006ffd2f has its CatchHandler @ 00700594 */
      param_3 = (byte *)FUN_0066d3f8(param_4,param_3);
      uVar8 = iVar9 << 3 | 2;
      *param_3 = (byte)uVar8;
      if (uVar8 < 0x80) goto LAB_006ff404;
LAB_006ffd48:
      *param_3 = (byte)uVar8 | 0x80;
      uVar17 = (uint)(iVar9 << 3) >> 7;
      param_3[1] = (byte)uVar17;
      pbVar25 = param_3 + 2;
      pbVar21 = pbVar25;
      if (0x3fff < uVar8) {
        do {
          uVar8 = uVar17 >> 0xe;
          uVar17 = uVar17 >> 7;
          pbVar21[-1] = pbVar21[-1] | 0x80;
          pbVar25 = pbVar21 + 1;
          *pbVar21 = (byte)uVar17;
          pbVar21 = pbVar25;
        } while (uVar8 != 0);
      }
    }
    pbVar21 = pbVar25;
    if ((uint)uVar13 < 0x80) {
      bVar7 = (byte)uVar13;
    }
    else {
      do {
        uVar18 = uVar13 >> 7 & 0x1ffffff;
        uVar14 = uVar13 >> 0xe;
        pbVar25 = pbVar21 + 1;
        *pbVar21 = (byte)uVar13 | 0x80;
        bVar7 = (byte)uVar18;
        pbVar21 = pbVar25;
        uVar13 = uVar18;
      } while ((uVar14 & 0x3ffff) != 0);
    }
    param_3 = pbVar25 + 1;
    *pbVar25 = bVar7;
    ppcVar26 = local_a8 + (int)local_b0;
    ppcVar24 = local_a8;
    do {
      if (param_3 < (byte *)*param_4) {
        uVar13 = (long)*ppcVar24 << 1 ^ (long)*ppcVar24 >> 0x3f;
        *param_3 = (byte)uVar13;
        if (uVar13 < 0x80) goto LAB_006ffda4;
LAB_006ffdd4:
        uVar14 = uVar13 >> 7;
        *param_3 = (byte)uVar13 | 0x80;
        param_3[1] = (byte)uVar14;
        param_3 = param_3 + 2;
        pbVar25 = param_3;
        if (0x3fff < uVar13) {
          do {
            uVar13 = uVar14 >> 0xe;
            uVar14 = uVar14 >> 7;
            pbVar25[-1] = pbVar25[-1] | 0x80;
            param_3 = pbVar25 + 1;
            *pbVar25 = (byte)uVar14;
            pbVar25 = param_3;
          } while (uVar13 != 0);
        }
      }
      else {
                    /* try { // try from 006ffe10 to 006ffe1b has its CatchHandler @ 00700558 */
        param_3 = (byte *)FUN_0066d3f8(param_4,param_3);
        uVar13 = (long)*ppcVar24 << 1 ^ (long)*ppcVar24 >> 0x3f;
        *param_3 = (byte)uVar13;
        if (0x7f < uVar13) goto LAB_006ffdd4;
LAB_006ffda4:
        param_3 = param_3 + 1;
      }
      ppcVar24 = ppcVar24 + 1;
    } while (ppcVar24 < ppcVar26);
LAB_006ff97c:
    FUN_006742e4(&local_b0);
    goto joined_r0x006ff8a8;
  }
joined_r0x006ffcfc:
  if (ppcVar23 != (code **)0x0) {
LAB_006ffadc:
    free(ppcVar23);
  }
LAB_006ffae4:
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_3;
}


// ===== 007007a4  FUN_007007a4 =====

undefined1 * FUN_007007a4(long param_1,undefined8 param_2,undefined1 *param_3,long *param_4)

{
  size_t __n;
  long lVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  byte *pbVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  byte *__src;
  ulong uVar12;
  undefined1 *puVar13;
  code **local_90;
  long *plStack_88;
  long local_60;
  code *pcStack_58;
  undefined1 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_3 < (undefined1 *)*param_4) {
    plVar6 = *(long **)(param_1 + 0x18);
  }
  else {
    param_3 = (undefined1 *)FUN_0066d3f8(param_4,param_3);
    plVar6 = *(long **)(param_1 + 0x18);
  }
  if ((plVar6 != (long *)0x0) &&
     (pcStack_58 = thunk_FUN_006af330, local_60 = param_1, *plVar6 != -1)) {
    local_90 = &pcStack_58;
    plStack_88 = &local_60;
    local_50 = (undefined1 *)&local_90;
    FUN_00710f84(plVar6,&local_50,FUN_00685640);
  }
  switch(*(undefined1 *)(param_1 + 2)) {
  case 1:
  case 2:
  case 10:
  case 0xb:
  case 0xc:
  case 0xe:
    FUN_00675e64(&local_90,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/wire_format.cc"
                 ,0x43b);
                    /* try { // try from 00700868 to 0070087b has its CatchHandler @ 00700bf0 */
    uVar8 = FUN_00675a58(&local_90,"Unsupported");
                    /* try { // try from 0070087c to 00700883 has its CatchHandler @ 00700bec */
    FUN_00675ac0(&local_50,uVar8);
    FUN_00675e7c(&local_90);
    goto switchD_0070084c_default;
  case 3:
    uVar12 = FUN_006e1d38(param_2);
    param_3[1] = (byte)uVar12;
    *param_3 = 8;
    if (0x7f < uVar12) {
      uVar11 = uVar12 >> 7;
      param_3[1] = (byte)uVar12 | 0x80;
      param_3[2] = (char)uVar11;
      param_3 = param_3 + 3;
      puVar13 = param_3;
      if (0x3fff < uVar12) {
        do {
          uVar12 = uVar11 >> 0xe;
          uVar11 = uVar11 >> 7;
          puVar13[-1] = puVar13[-1] | 0x80;
          param_3 = puVar13 + 1;
          *puVar13 = (char)uVar11;
          puVar13 = param_3;
        } while (uVar12 != 0);
      }
      goto switchD_0070084c_default;
    }
    break;
  case 4:
    uVar12 = FUN_006e1f80(param_2);
    param_3[1] = (byte)uVar12;
    *param_3 = 8;
    if (0x7f < uVar12) {
      uVar11 = uVar12 >> 7;
      param_3[1] = (byte)uVar12 | 0x80;
      param_3[2] = (char)uVar11;
      param_3 = param_3 + 3;
      puVar13 = param_3;
      if (0x3fff < uVar12) {
        do {
          uVar12 = uVar11 >> 0xe;
          uVar11 = uVar11 >> 7;
          puVar13[-1] = puVar13[-1] | 0x80;
          param_3 = puVar13 + 1;
          *puVar13 = (char)uVar11;
          puVar13 = param_3;
        } while (uVar12 != 0);
      }
      goto switchD_0070084c_default;
    }
    break;
  case 5:
    uVar3 = FUN_006e1e5c(param_2);
    param_3[1] = (byte)uVar3;
    *param_3 = 8;
    if (0x7f < uVar3) {
      param_3[1] = (byte)uVar3 | 0x80;
      uVar12 = (ulong)(long)(int)uVar3 >> 7;
      param_3[2] = (char)uVar12;
      param_3 = param_3 + 3;
      puVar13 = param_3;
      if (0x3fff < uVar3) {
        do {
          uVar11 = uVar12 >> 0xe;
          uVar12 = uVar12 >> 7;
          puVar13[-1] = puVar13[-1] | 0x80;
          param_3 = puVar13 + 1;
          *puVar13 = (char)uVar12;
          puVar13 = param_3;
        } while (uVar11 != 0);
      }
      goto switchD_0070084c_default;
    }
    break;
  case 6:
    uVar8 = FUN_006e1f80(param_2);
    goto LAB_00700988;
  case 7:
    uVar4 = FUN_006e20a4(param_2);
    goto LAB_00700b18;
  case 8:
    bVar2 = FUN_006e21c8(param_2);
    *param_3 = 8;
    param_3[1] = bVar2 & 1;
    param_3 = param_3 + 2;
    goto switchD_0070084c_default;
  case 9:
    pbVar7 = (byte *)FUN_006e1c14(param_2);
    __n = (ulong)(*pbVar7 >> 1);
    if ((*pbVar7 & 1) != 0) {
      __n = *(size_t *)(pbVar7 + 8);
    }
    if (((long)__n < 0x80) && ((long)__n <= (*param_4 - (long)param_3) + 0xe)) {
      param_3[1] = (char)__n;
      *param_3 = 10;
      __src = *(byte **)(pbVar7 + 0x10);
      if ((*pbVar7 & 1) == 0) {
        __src = pbVar7 + 1;
      }
      memcpy(param_3 + 2,__src,__n);
      param_3 = param_3 + 2 + __n;
    }
    else {
      param_3 = (undefined1 *)FUN_0066d8d0(param_4,1,pbVar7,param_3);
    }
    goto switchD_0070084c_default;
  case 0xd:
    uVar3 = FUN_006e20a4(param_2);
    param_3[1] = (byte)uVar3;
    *param_3 = 8;
    if (0x7f < uVar3) {
      uVar10 = uVar3 >> 7;
      param_3[1] = (byte)uVar3 | 0x80;
      param_3[2] = (char)uVar10;
      param_3 = param_3 + 3;
      puVar13 = param_3;
      if (0x3fff < uVar3) {
        do {
          uVar3 = uVar10 >> 0xe;
          uVar10 = uVar10 >> 7;
          puVar13[-1] = puVar13[-1] | 0x80;
          param_3 = puVar13 + 1;
          *puVar13 = (char)uVar10;
          puVar13 = param_3;
        } while (uVar3 != 0);
      }
      goto switchD_0070084c_default;
    }
    break;
  case 0xf:
    uVar4 = FUN_006e1e5c(param_2);
LAB_00700b18:
    *(undefined4 *)(param_3 + 1) = uVar4;
    *param_3 = 0xd;
    param_3 = param_3 + 5;
    goto switchD_0070084c_default;
  case 0x10:
    uVar8 = FUN_006e1d38(param_2);
LAB_00700988:
    *(undefined8 *)(param_3 + 1) = uVar8;
    *param_3 = 9;
    param_3 = param_3 + 9;
    goto switchD_0070084c_default;
  case 0x11:
    iVar5 = FUN_006e1e5c(param_2);
    *param_3 = 8;
    uVar3 = iVar5 << 1 ^ iVar5 >> 0x1f;
    param_3[1] = (byte)uVar3;
    if (0x7f < uVar3) {
      uVar10 = uVar3 >> 7;
      param_3[1] = (byte)uVar3 | 0x80;
      param_3[2] = (char)uVar10;
      param_3 = param_3 + 3;
      puVar13 = param_3;
      if (0x3fff < uVar3) {
        do {
          uVar3 = uVar10 >> 0xe;
          uVar10 = uVar10 >> 7;
          puVar13[-1] = puVar13[-1] | 0x80;
          param_3 = puVar13 + 1;
          *puVar13 = (char)uVar10;
          puVar13 = param_3;
        } while (uVar3 != 0);
      }
      goto switchD_0070084c_default;
    }
    break;
  case 0x12:
    lVar9 = FUN_006e1d38(param_2);
    *param_3 = 8;
    uVar12 = lVar9 << 1 ^ lVar9 >> 0x3f;
    param_3[1] = (byte)uVar12;
    if (0x7f < uVar12) {
      uVar11 = uVar12 >> 7;
      param_3[1] = (byte)uVar12 | 0x80;
      param_3[2] = (char)uVar11;
      param_3 = param_3 + 3;
      puVar13 = param_3;
      if (0x3fff < uVar12) {
        do {
          uVar12 = uVar11 >> 0xe;
          uVar11 = uVar11 >> 7;
          puVar13[-1] = puVar13[-1] | 0x80;
          param_3 = puVar13 + 1;
          *puVar13 = (char)uVar11;
          puVar13 = param_3;
        } while (uVar12 != 0);
      }
      goto switchD_0070084c_default;
    }
    break;
  default:
    goto switchD_0070084c_default;
  }
  param_3 = param_3 + 2;
switchD_0070084c_default:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00700c18  FUN_00700c18 =====

undefined1 * FUN_00700c18(long param_1,long *param_2,undefined1 *param_3,undefined8 *param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 extraout_x1;
  ulong uVar6;
  
  (**(code **)(*param_2 + 0x80))(param_2);
  if ((undefined1 *)*param_4 <= param_3) {
    param_3 = (undefined1 *)FUN_0066d3f8(param_4,param_3);
  }
  *param_3 = 0xb;
  uVar1 = *(uint *)(param_1 + 4);
  param_3[1] = 0x10;
  param_3[2] = (byte)uVar1;
  if (uVar1 < 0x80) {
    param_3 = param_3 + 3;
  }
  else {
    uVar6 = (ulong)(uVar1 >> 7);
    param_3[2] = (byte)uVar1 | 0x80;
    param_3[3] = (char)(uVar1 >> 7);
    param_3 = param_3 + 4;
    puVar5 = param_3;
    if (0x3fff < uVar1) {
      do {
        uVar2 = uVar6 >> 0xe;
        uVar6 = uVar6 >> 7;
        puVar5[-1] = puVar5[-1] | 0x80;
        param_3 = puVar5 + 1;
        *puVar5 = (char)uVar6;
        puVar5 = param_3;
      } while (uVar2 != 0);
    }
  }
  plVar4 = (long *)FUN_0068265c(extraout_x1,param_2,param_1,0);
  uVar3 = (**(code **)(*plVar4 + 0x48))();
  puVar5 = (undefined1 *)FUN_00678d18(3,plVar4,uVar3,param_3,param_4);
  if ((undefined1 *)*param_4 <= puVar5) {
    puVar5 = (undefined1 *)FUN_0066d3f8(param_4);
  }
  *puVar5 = 0xc;
  return puVar5 + 1;
}


// ===== 00700d50  FUN_00700d50 =====

void FUN_00700d50(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_d8 [8];
  long *local_d0;
  byte local_c8;
  void *local_b8;
  int local_b0;
  undefined1 auStack_98 [8];
  long *local_90;
  byte local_88 [16];
  void *local_78;
  int local_70;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
                    /* try { // try from 00700d90 to 00700da3 has its CatchHandler @ 00700ee8 */
  FUN_00684274(auStack_98,param_3,param_2);
  while( true ) {
                    /* try { // try from 00700dd0 to 00700de3 has its CatchHandler @ 00700efc */
    FUN_00684638(auStack_d8,param_3,param_2,param_4);
                    /* try { // try from 00700df0 to 00700dfb has its CatchHandler @ 00700f00 */
    uVar5 = (**(code **)(*local_90 + 0x20))(local_90,auStack_98,auStack_d8);
                    /* try { // try from 00700e0c to 00700e13 has its CatchHandler @ 00700f10 */
    (**(code **)(*local_d0 + 0x80))(local_d0,auStack_d8);
    if ((local_b0 == 9) && ((local_c8 & 1) != 0)) {
      free(local_b8);
    }
    if ((uVar5 & 1) != 0) break;
    uVar5 = param_1[1];
    if (uVar5 < (ulong)param_1[2]) {
      *(undefined4 *)(uVar5 + 0x18) = 0;
                    /* try { // try from 00700e44 to 00700e4f has its CatchHandler @ 00700ef0 */
      FUN_006df758(uVar5,local_88);
      lVar4 = uVar5 + 0x20;
    }
    else {
                    /* try { // try from 00700da8 to 00700dcf has its CatchHandler @ 00700f14 */
      lVar4 = FUN_007035c4(param_1,local_88);
    }
    param_1[1] = lVar4;
    (**(code **)(*local_90 + 0x90))(local_90,auStack_98);
  }
                    /* try { // try from 00700e64 to 00700e6b has its CatchHandler @ 00700ee4 */
  (**(code **)(*local_90 + 0x80))(local_90,auStack_98);
  if ((local_70 == 9) && ((local_88[0] & 1) != 0)) {
    free(local_78);
  }
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar4 = 0;
  if (lVar2 != lVar1) {
    lVar4 = LZCOUNT(lVar2 - lVar1 >> 5) * -2 + 0x7e;
  }
                    /* try { // try from 00700ea8 to 00700eb3 has its CatchHandler @ 00700ee0 */
  FUN_00703994(lVar1,lVar2,auStack_98,lVar4,1);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00700f44  FUN_00700f44 =====

undefined1 *
FUN_00700f44(long param_1,undefined8 param_2,undefined8 param_3,byte *param_4,long *param_5)

{
  size_t __n;
  long lVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined1 *puVar7;
  long *plVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  long local_90;
  code *pcStack_88;
  code ***local_80;
  code **local_78;
  undefined1 *puStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar6 = FUN_0068c940();
  uVar16 = *(undefined8 *)(lVar6 + 0x28);
  lVar6 = FUN_0068c940(param_1);
  lVar18 = *(long *)(lVar6 + 0x28);
  lVar6 = lVar18 + 0x48;
  iVar3 = FUN_007029a8(uVar16,param_2);
  iVar4 = FUN_00702c40(lVar6,param_3);
  uVar17 = iVar3 + iVar4 + 2;
  if (param_4 < (byte *)*param_5) {
    iVar3 = *(int *)(param_1 + 4);
    uVar10 = iVar3 << 3 | 2;
    *param_4 = (byte)uVar10;
    if (uVar10 < 0x80) goto LAB_00700fe4;
LAB_00701014:
    pbVar11 = param_4 + 2;
    *param_4 = (byte)uVar10 | 0x80;
    uVar13 = (uint)(iVar3 << 3) >> 7;
    param_4[1] = (byte)uVar13;
    pbVar9 = pbVar11;
    if (0x3fff < uVar10) {
      do {
        uVar10 = uVar13 >> 0xe;
        uVar13 = uVar13 >> 7;
        pbVar9[-1] = pbVar9[-1] | 0x80;
        pbVar11 = pbVar9 + 1;
        *pbVar9 = (byte)uVar13;
        pbVar9 = pbVar11;
      } while (uVar10 != 0);
    }
  }
  else {
    param_4 = (byte *)FUN_0066d3f8(param_5,param_4);
    iVar3 = *(int *)(param_1 + 4);
    uVar10 = iVar3 << 3 | 2;
    *param_4 = (byte)uVar10;
    if (0x7f < uVar10) goto LAB_00701014;
LAB_00700fe4:
    pbVar11 = param_4 + 1;
  }
  *pbVar11 = (byte)uVar17;
  if (uVar17 < 0x80) {
    pbVar9 = pbVar11 + 1;
  }
  else {
    uVar10 = uVar17 >> 7;
    pbVar9 = pbVar11 + 2;
    *pbVar11 = (byte)uVar17 | 0x80;
    pbVar11[1] = (byte)uVar10;
    pbVar11 = pbVar9;
    if (0x3fff < uVar17) {
      do {
        uVar17 = uVar10 >> 0xe;
        uVar10 = uVar10 >> 7;
        pbVar11[-1] = pbVar11[-1] | 0x80;
        pbVar9 = pbVar11 + 1;
        *pbVar11 = (byte)uVar10;
        pbVar11 = pbVar9;
      } while (uVar17 != 0);
    }
  }
  puVar7 = (undefined1 *)FUN_007007a4(uVar16,param_2,pbVar9,param_5);
  if (puVar7 < (undefined1 *)*param_5) {
    plVar8 = *(long **)(lVar18 + 0x60);
  }
  else {
    puVar7 = (undefined1 *)FUN_0066d3f8(param_5,puVar7);
    plVar8 = *(long **)(lVar18 + 0x60);
  }
  if ((plVar8 != (long *)0x0) && (pcStack_88 = thunk_FUN_006af330, local_90 = lVar6, *plVar8 != -1))
  {
    local_78 = &pcStack_88;
    local_80 = &local_78;
    puStack_70 = (undefined1 *)&local_90;
    FUN_00710f84(plVar8,&local_80,FUN_00685640);
  }
  puVar15 = puVar7;
  switch(*(undefined1 *)(lVar18 + 0x4a)) {
  case 1:
    uVar16 = FUN_006e0974(param_3);
    *(undefined8 *)(puVar7 + 1) = uVar16;
    puVar15 = puVar7 + 9;
    *puVar7 = 0x11;
    break;
  case 2:
    uVar5 = FUN_006e0718(param_3);
    *(undefined4 *)(puVar7 + 1) = uVar5;
    goto LAB_007014c0;
  case 3:
    uVar14 = FUN_006e0004(param_3);
    puVar7[1] = (byte)uVar14;
    *puVar7 = 0x10;
    if (0x7f < uVar14) {
      uVar12 = uVar14 >> 7;
      puVar7[1] = (byte)uVar14 | 0x80;
      puVar7[2] = (char)uVar12;
      puVar15 = puVar7 + 3;
      puVar7 = puVar15;
      if (0x3fff < uVar14) {
        do {
          uVar14 = uVar12 >> 0xe;
          uVar12 = uVar12 >> 7;
          puVar7[-1] = puVar7[-1] | 0x80;
          puVar15 = puVar7 + 1;
          *puVar7 = (char)uVar12;
          puVar7 = puVar15;
        } while (uVar14 != 0);
      }
      break;
    }
    goto LAB_0070146c;
  case 4:
    uVar14 = FUN_006e04bc(param_3);
    puVar7[1] = (byte)uVar14;
    *puVar7 = 0x10;
    if (0x7f < uVar14) {
      uVar12 = uVar14 >> 7;
      puVar7[1] = (byte)uVar14 | 0x80;
      puVar7[2] = (char)uVar12;
      puVar15 = puVar7 + 3;
      puVar7 = puVar15;
      if (0x3fff < uVar14) {
        do {
          uVar14 = uVar12 >> 0xe;
          uVar12 = uVar12 >> 7;
          puVar7[-1] = puVar7[-1] | 0x80;
          puVar15 = puVar7 + 1;
          *puVar7 = (char)uVar12;
          puVar7 = puVar15;
        } while (uVar14 != 0);
      }
      break;
    }
    goto LAB_0070146c;
  case 5:
    uVar17 = FUN_006dfda8(param_3);
    puVar7[1] = (byte)uVar17;
    *puVar7 = 0x10;
    if (0x7f < uVar17) {
      puVar7[1] = (byte)uVar17 | 0x80;
      uVar14 = (ulong)(long)(int)uVar17 >> 7;
      puVar7[2] = (char)uVar14;
      puVar15 = puVar7 + 3;
      puVar7 = puVar15;
      if (0x3fff < uVar17) {
        do {
          uVar12 = uVar14 >> 0xe;
          uVar14 = uVar14 >> 7;
          puVar7[-1] = puVar7[-1] | 0x80;
          puVar15 = puVar7 + 1;
          *puVar7 = (char)uVar14;
          puVar7 = puVar15;
        } while (uVar12 != 0);
      }
      break;
    }
    goto LAB_0070146c;
  case 6:
    uVar16 = FUN_006e04bc(param_3);
    goto LAB_0070147c;
  case 7:
    uVar5 = FUN_006e0260(param_3);
    goto LAB_007014b8;
  case 8:
    bVar2 = FUN_006e0bd4(param_3);
    *puVar7 = 0x10;
    puVar7[1] = bVar2 & 1;
    puVar15 = puVar7 + 2;
    break;
  case 9:
  case 0xc:
    pbVar11 = (byte *)FUN_006e0e34(param_3);
    __n = (ulong)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      __n = *(size_t *)(pbVar11 + 8);
    }
    if (((long)__n < 0x80) && ((long)__n <= (*param_5 - (long)puVar7) + 0xe)) {
      puVar7[1] = (char)__n;
      *puVar7 = 0x12;
      pbVar9 = *(byte **)(pbVar11 + 0x10);
      if ((*pbVar11 & 1) == 0) {
        pbVar9 = pbVar11 + 1;
      }
      memcpy(puVar7 + 2,pbVar9,__n);
      puVar15 = puVar7 + 2 + __n;
    }
    else {
      puVar15 = (undefined1 *)FUN_0066d8d0(param_5,2,pbVar11,puVar7);
    }
    break;
  case 10:
    uVar16 = FUN_006e11b4(param_3);
    puVar15 = (undefined1 *)FUN_00678bd4(2,uVar16,puVar7,param_5);
    break;
  case 0xb:
    plVar8 = (long *)FUN_006e11b4(param_3);
    uVar5 = (**(code **)(*plVar8 + 0x48))();
    puVar15 = (undefined1 *)FUN_00678d18(2,plVar8,uVar5,puVar7,param_5);
    break;
  case 0xd:
    uVar17 = FUN_006e0260(param_3);
    puVar7[1] = (byte)uVar17;
    *puVar7 = 0x10;
    if (0x7f < uVar17) {
      uVar10 = uVar17 >> 7;
      puVar7[1] = (byte)uVar17 | 0x80;
      puVar7[2] = (char)uVar10;
      puVar15 = puVar7 + 3;
      puVar7 = puVar15;
      if (0x3fff < uVar17) {
        do {
          uVar17 = uVar10 >> 0xe;
          uVar10 = uVar10 >> 7;
          puVar7[-1] = puVar7[-1] | 0x80;
          puVar15 = puVar7 + 1;
          *puVar7 = (char)uVar10;
          puVar7 = puVar15;
        } while (uVar17 != 0);
      }
      break;
    }
    goto LAB_0070146c;
  case 0xe:
    uVar17 = FUN_006e108c(param_3);
    puVar7[1] = (byte)uVar17;
    *puVar7 = 0x10;
    if (0x7f < uVar17) {
      puVar7[1] = (byte)uVar17 | 0x80;
      uVar14 = (ulong)(long)(int)uVar17 >> 7;
      puVar7[2] = (char)uVar14;
      puVar15 = puVar7 + 3;
      puVar7 = puVar15;
      if (0x3fff < uVar17) {
        do {
          uVar12 = uVar14 >> 0xe;
          uVar14 = uVar14 >> 7;
          puVar7[-1] = puVar7[-1] | 0x80;
          puVar15 = puVar7 + 1;
          *puVar7 = (char)uVar14;
          puVar7 = puVar15;
        } while (uVar12 != 0);
      }
      break;
    }
    goto LAB_0070146c;
  case 0xf:
    uVar5 = FUN_006dfda8(param_3);
LAB_007014b8:
    *(undefined4 *)(puVar7 + 1) = uVar5;
LAB_007014c0:
    puVar15 = puVar7 + 5;
    *puVar7 = 0x15;
    break;
  case 0x10:
    uVar16 = FUN_006e0004(param_3);
LAB_0070147c:
    *(undefined8 *)(puVar7 + 1) = uVar16;
    puVar15 = puVar7 + 9;
    *puVar7 = 0x11;
    break;
  case 0x11:
    iVar3 = FUN_006dfda8(param_3);
    *puVar7 = 0x10;
    uVar17 = iVar3 << 1 ^ iVar3 >> 0x1f;
    puVar7[1] = (byte)uVar17;
    if (0x7f < uVar17) {
      uVar10 = uVar17 >> 7;
      puVar7[1] = (byte)uVar17 | 0x80;
      puVar7[2] = (char)uVar10;
      puVar15 = puVar7 + 3;
      puVar7 = puVar15;
      if (0x3fff < uVar17) {
        do {
          uVar17 = uVar10 >> 0xe;
          uVar10 = uVar10 >> 7;
          puVar7[-1] = puVar7[-1] | 0x80;
          puVar15 = puVar7 + 1;
          *puVar7 = (char)uVar10;
          puVar7 = puVar15;
        } while (uVar17 != 0);
      }
      break;
    }
    goto LAB_0070146c;
  case 0x12:
    lVar6 = FUN_006e0004(param_3);
    *puVar7 = 0x10;
    uVar14 = lVar6 << 1 ^ lVar6 >> 0x3f;
    puVar7[1] = (byte)uVar14;
    if (0x7f < uVar14) {
      uVar12 = uVar14 >> 7;
      puVar7[1] = (byte)uVar14 | 0x80;
      puVar7[2] = (char)uVar12;
      puVar15 = puVar7 + 3;
      puVar7 = puVar15;
      if (0x3fff < uVar14) {
        do {
          uVar14 = uVar12 >> 0xe;
          uVar12 = uVar12 >> 7;
          puVar7[-1] = puVar7[-1] | 0x80;
          puVar15 = puVar7 + 1;
          *puVar7 = (char)uVar12;
          puVar7 = puVar15;
        } while (uVar14 != 0);
      }
      break;
    }
LAB_0070146c:
    puVar15 = puVar7 + 2;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return puVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0070156c  FUN_0070156c =====

void FUN_0070156c(undefined8 *param_1)

{
  byte *__ptr;
  byte *pbVar1;
  byte *pbVar2;
  
  __ptr = (byte *)*param_1;
  if (__ptr == (byte *)0x0) {
    return;
  }
  pbVar1 = (byte *)param_1[1];
  if ((byte *)param_1[1] == __ptr) {
    param_1[1] = __ptr;
    free(__ptr);
    return;
  }
  do {
    pbVar2 = pbVar1 + -0x20;
    if ((*(int *)(pbVar1 + -8) == 9) && ((*pbVar2 & 1) != 0)) {
      free(*(void **)(pbVar1 + -0x10));
    }
    pbVar1 = pbVar2;
  } while (pbVar2 != __ptr);
  param_1[1] = __ptr;
  free((void *)*param_1);
  return;
}


// ===== 00701604  FUN_00701604 =====

void FUN_00701604(long *param_1,long *param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  void *__dest;
  long lVar14;
  undefined8 extraout_x1;
  ulong uVar15;
  ulong uVar16;
  void *unaff_x24;
  void *pvVar17;
  undefined8 *puVar18;
  undefined8 local_88;
  long *plStack_80;
  undefined8 local_78;
  long *plStack_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    if (param_3 < 0) {
      if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* try { // try from 00701994 to 0070199f has its CatchHandler @ 007019c8 */
        uVar8 = FUN_006f7fa8(param_1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 007018f0 with catch @ 007019a0
                        */
        if (unaff_x24 != (void *)0x0) {
          free(unaff_x24);
        }
        pvVar17 = (void *)*param_1;
        if (pvVar17 != (void *)0x0) {
          param_1[1] = (long)pvVar17;
          free(pvVar17);
        }
        if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_00755eac(uVar8);
        }
      }
      goto LAB_00701a34;
    }
                    /* try { // try from 0070165c to 0070165f has its CatchHandler @ 007019c8 */
    lVar7 = FUN_00759c3c((long)param_3 << 3);
    *param_1 = lVar7;
    param_1[1] = lVar7;
    param_1[2] = lVar7 + (long)param_3 * 8;
  }
                    /* try { // try from 00701674 to 007016d3 has its CatchHandler @ 007019d0 */
  (**(code **)(*param_2 + 0x80))(param_2);
  uVar8 = FUN_006848a4(extraout_x1,param_2,param_5,10,0);
  plVar9 = (long *)FUN_006e5ac4(extraout_x1,param_5);
  plVar10 = (long *)FUN_0068489c(extraout_x1);
  uVar11 = FUN_0068c940(param_5);
  plVar10 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,uVar11);
                    /* try { // try from 007016dc to 007016ff has its CatchHandler @ 007019cc */
  plVar10 = (long *)(**(code **)(*plVar10 + 0x18))(plVar10,0);
  local_88 = uVar8;
  plStack_80 = plVar9;
  uVar11 = (**(code **)(*plVar9 + 0x48))(plVar9,uVar8);
  plStack_70 = plVar10;
  while( true ) {
    local_78 = uVar11;
                    /* try { // try from 00701718 to 00701723 has its CatchHandler @ 007019e0 */
    uVar12 = (**(code **)(*plVar9 + 0x50))(plVar9,uVar8);
                    /* try { // try from 00701734 to 00701747 has its CatchHandler @ 007019e4 */
    uVar13 = (**(code **)(*plVar9 + 0x68))(plVar9,uVar8,uVar11,uVar12);
                    /* try { // try from 00701754 to 00701763 has its CatchHandler @ 007019f4 */
    (**(code **)(*plVar9 + 0x70))(plVar9,uVar8,uVar12);
    if ((uVar13 & 1) != 0) break;
                    /* try { // try from 00701770 to 007017f3 has its CatchHandler @ 007019f8 */
    uVar12 = (**(code **)(*plVar9 + 0x78))(plVar9,uVar8,uVar11,plVar10);
    puVar3 = (undefined8 *)param_1[1];
    if (puVar3 < (undefined8 *)param_1[2]) {
      puVar18 = puVar3 + 1;
      *puVar3 = uVar12;
    }
    else {
      pvVar17 = (void *)*param_1;
      lVar7 = (long)puVar3 - (long)pvVar17 >> 3;
      uVar13 = lVar7 + 1;
      if (uVar13 >> 0x3d != 0) {
        if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* try { // try from 00701960 to 0070197f has its CatchHandler @ 007019d8 */
          FUN_006f7fa8(param_1);
LAB_00701968:
          if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_002f9ee0();
          }
        }
        goto LAB_00701a34;
      }
      uVar15 = param_1[2] - (long)pvVar17;
      uVar16 = (long)uVar15 >> 2;
      if (uVar16 <= uVar13) {
        uVar16 = uVar13;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar16 = 0x1fffffffffffffff;
      }
      if (uVar16 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar16 >> 0x3d != 0) goto LAB_00701968;
        __dest = (void *)FUN_00759c3c(uVar16 << 3);
      }
      puVar2 = (undefined8 *)((long)__dest + lVar7 * 8);
      puVar18 = puVar2 + 1;
      *puVar2 = uVar12;
      memcpy(__dest,pvVar17,(long)puVar3 - (long)pvVar17);
      *param_1 = (long)__dest;
      param_1[1] = (long)puVar18;
      param_1[2] = (long)((long)__dest + uVar16 * 8);
      if (pvVar17 != (void *)0x0) {
        free(pvVar17);
      }
    }
    param_1[1] = (long)puVar18;
                    /* try { // try from 00701844 to 00701853 has its CatchHandler @ 007019dc */
    uVar11 = (**(code **)(*plVar9 + 0x60))(plVar9,uVar8,uVar11);
  }
                    /* try { // try from 00701864 to 00701873 has its CatchHandler @ 007019c4 */
  (**(code **)(*plVar9 + 0x70))(plVar9,uVar8,uVar11);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))(plVar10);
  }
                    /* try { // try from 00701890 to 00701897 has its CatchHandler @ 007019c0 */
  lVar14 = FUN_0068c940(param_5);
  puVar6 = PTR_DAT_007a2b78;
  lVar7 = *param_1;
  lVar4 = param_1[1];
  uVar16 = lVar4 - lVar7 >> 3;
  local_88 = *(undefined8 *)(lVar14 + 0x28);
  uVar13 = uVar16;
  if (0x80 < (long)uVar16) {
    do {
      pvVar17 = (void *)FUN_007539d4(uVar13 << 3,puVar6);
      if (pvVar17 != (void *)0x0) goto LAB_007018f0;
      bVar1 = 1 < uVar13;
      uVar13 = uVar13 >> 1;
    } while (bVar1);
  }
  pvVar17 = (void *)0x0;
  uVar13 = 0;
LAB_007018f0:
                    /* try { // try from 007018f0 to 0070190b has its CatchHandler @ 007019a0 */
  FUN_00705174(lVar7,lVar4,&local_88,uVar16,pvVar17,uVar13);
  if (pvVar17 != (void *)0x0) {
    free(pvVar17);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
LAB_00701a34:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00701a38  FUN_00701a38 =====

ulong FUN_00701a38(long param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  undefined8 extraout_x1;
  undefined8 uVar13;
  ulong uVar14;
  long local_f8;
  undefined *puStack_f0;
  undefined ***local_e8;
  long *local_e0;
  byte local_d8;
  void *local_c8;
  int local_c0;
  undefined **local_a8;
  long *local_a0;
  void *local_98 [2];
  void *local_88;
  int local_80;
  undefined1 auStack_78 [16];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_2 + 0x80))(param_2);
  puVar2 = PTR_thunk_FUN_006af330_007a32d0;
  plVar5 = *(long **)(param_1 + 0x18);
  if ((plVar5 != (long *)0x0) &&
     (puStack_f0 = PTR_thunk_FUN_006af330_007a32d0, local_f8 = param_1, *plVar5 != -1)) {
    local_a8 = &puStack_f0;
    local_a0 = &local_f8;
    local_e8 = &local_a8;
    FUN_00710f84(plVar5,&local_e8,FUN_00685640);
  }
  if ((*(char *)(param_1 + 2) == '\v') && (uVar6 = FUN_0068d830(param_1), (uVar6 & 1) != 0)) {
    plVar5 = (long *)FUN_00684cf0(extraout_x1,param_2,param_1);
    uVar6 = FUN_006dead4();
    if ((uVar6 & 1) != 0) {
      FUN_006843a0(&local_a8,param_2,param_1);
                    /* try { // try from 00701b08 to 00701b17 has its CatchHandler @ 0070229c */
      FUN_006843a0(&local_e8,param_2,param_1);
                    /* try { // try from 00701b18 to 00701b1f has its CatchHandler @ 00702298 */
      lVar7 = FUN_0068c940(param_1);
      uVar13 = *(undefined8 *)(lVar7 + 0x28);
                    /* try { // try from 00701b24 to 00701b57 has its CatchHandler @ 007022a4 */
      lVar7 = FUN_0068c940(param_1);
      lVar7 = *(long *)(lVar7 + 0x28);
      (**(code **)(*plVar5 + 0x28))(plVar5,&local_a8);
      (**(code **)(*plVar5 + 0x30))(plVar5,&local_e8);
      uVar6 = 0;
                    /* try { // try from 00701b6c to 00701b77 has its CatchHandler @ 007022c4 */
      while (uVar8 = (**(code **)(*local_a0 + 0x20))(local_a0,&local_a8,&local_e8), (uVar8 & 1) == 0
            ) {
                    /* try { // try from 00701b7c to 00701b97 has its CatchHandler @ 007022c0 */
        lVar9 = FUN_007029a8(uVar13,local_98);
        lVar10 = FUN_00702c40(lVar7 + 0x48,auStack_78);
        lVar9 = lVar9 + lVar10 + 2;
        uVar6 = lVar9 + uVar6 + (ulong)(((uint)LZCOUNT((uint)lVar9 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
                    /* try { // try from 00701bcc to 00701bd3 has its CatchHandler @ 007022c4 */
        (**(code **)(*local_a0 + 0x90))(local_a0,&local_a8);
      }
                    /* try { // try from 00701cbc to 00701cc3 has its CatchHandler @ 00702294 */
      (**(code **)(*local_e0 + 0x80))(local_e0,&local_e8);
      if ((local_c0 == 9) && ((local_d8 & 1) != 0)) {
        free(local_c8);
      }
                    /* try { // try from 00701cec to 00701cf3 has its CatchHandler @ 00702290 */
      (**(code **)(*local_a0 + 0x80))(local_a0,&local_a8);
      if ((local_80 == 9) && (((ulong)local_98[0] & 1) != 0)) {
        free(local_88);
      }
      goto LAB_0070225c;
    }
  }
  if (((*(byte *)(param_1 + 1) ^ 0xff) & 0x60) == 0) {
    uVar8 = FUN_0067c384(extraout_x1,param_2,param_1);
    uVar8 = uVar8 & 0xffffffff;
    plVar5 = *(long **)(param_1 + 0x18);
  }
  else if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 0x20) + 0x4b) & 1) == 0) {
    uVar8 = FUN_0067b838(extraout_x1,param_2,param_1);
    uVar8 = uVar8 & 1;
    plVar5 = *(long **)(param_1 + 0x18);
  }
  else {
    uVar8 = 1;
    plVar5 = *(long **)(param_1 + 0x18);
  }
  if ((plVar5 != (long *)0x0) && (puStack_f0 = puVar2, local_f8 = param_1, *plVar5 != -1)) {
    local_a8 = &puStack_f0;
    local_a0 = &local_f8;
    local_e8 = &local_a8;
    FUN_00710f84(plVar5,&local_e8,FUN_00685640);
  }
  switch(*(undefined1 *)(param_1 + 2)) {
  case 1:
  case 6:
  case 0x10:
    uVar6 = uVar8 << 3;
    goto LAB_0070225c;
  case 2:
  case 7:
  case 0xf:
    uVar6 = uVar8 << 2;
    goto LAB_0070225c;
  case 3:
    if (((*(byte *)(param_1 + 1) ^ 0xff) & 0x60) != 0) {
      uVar6 = FUN_0067d380(extraout_x1,param_2,param_1);
LAB_007021c8:
      uVar6 = uVar6 | 1;
LAB_00702248:
      uVar6 = (LZCOUNT(uVar6) ^ 0x3fU) * 9 + 0x49 >> 6;
      goto LAB_0070225c;
    }
    if (uVar8 != 0) {
      uVar14 = 0;
      uVar6 = 0;
      do {
        uVar12 = FUN_0067d87c(extraout_x1,param_2,param_1,uVar14 & 0xffffffff);
        uVar14 = uVar14 + 1;
        uVar6 = uVar6 + ((LZCOUNT(uVar12 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
      } while (uVar8 != uVar14);
      goto LAB_0070225c;
    }
    break;
  case 4:
    if (((*(byte *)(param_1 + 1) ^ 0xff) & 0x60) != 0) {
      uVar6 = FUN_0067e400(extraout_x1,param_2,param_1);
      goto LAB_007021c8;
    }
    if (uVar8 != 0) {
      uVar14 = 0;
      uVar6 = 0;
      do {
        uVar12 = FUN_0067e8fc(extraout_x1,param_2,param_1,uVar14 & 0xffffffff);
        uVar14 = uVar14 + 1;
        uVar6 = uVar6 + ((LZCOUNT(uVar12 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
      } while (uVar8 != uVar14);
      goto LAB_0070225c;
    }
    break;
  case 5:
    if (((*(byte *)(param_1 + 1) ^ 0xff) & 0x60) != 0) {
      uVar4 = FUN_0067cb40(extraout_x1,param_2,param_1);
      uVar6 = (ulong)(int)(uVar4 | 1);
      goto LAB_00702248;
    }
    if (uVar8 != 0) {
      uVar14 = 0;
      uVar6 = 0;
      do {
        uVar4 = FUN_0067d03c(extraout_x1,param_2,param_1,uVar14 & 0xffffffff);
        uVar14 = uVar14 + 1;
        uVar6 = uVar6 + ((LZCOUNT((long)(int)(uVar4 | 1)) ^ 0x3fU) * 9 + 0x49 >> 6);
      } while (uVar8 != uVar14);
      goto LAB_0070225c;
    }
    break;
  case 8:
    uVar6 = uVar8;
    goto LAB_0070225c;
  case 9:
  case 0xc:
    if (uVar8 != 0) {
      uVar14 = 0;
      uVar6 = 0;
      do {
        local_a8 = (undefined **)0x0;
        local_a0 = (long *)0x0;
        local_98[0] = (void *)0x0;
        if (((*(byte *)(param_1 + 1) ^ 0xff) & 0x60) == 0) {
                    /* try { // try from 00701d68 to 00701d97 has its CatchHandler @ 007022a8 */
          pbVar11 = (byte *)FUN_00681498(extraout_x1,param_2,param_1,uVar14 & 0xffffffff,&local_a8);
        }
        else {
          pbVar11 = (byte *)FUN_006807ec(extraout_x1,param_2,param_1,&local_a8);
        }
        uVar12 = (ulong)(*pbVar11 >> 1);
        if ((*pbVar11 & 1) != 0) {
          uVar12 = *(ulong *)(pbVar11 + 8);
        }
        if (((ulong)local_a8 & 1) != 0) {
          free(local_98[0]);
        }
        uVar14 = uVar14 + 1;
        uVar6 = uVar12 + uVar6 + (ulong)(((uint)LZCOUNT((uint)uVar12 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      } while (uVar8 != uVar14);
      goto LAB_0070225c;
    }
    break;
  case 10:
    if (((*(byte *)(param_1 + 1) ^ 0xff) & 0x60) != 0) {
      plVar5 = (long *)FUN_0068265c(extraout_x1,param_2,param_1,0);
      uVar6 = (**(code **)(*plVar5 + 0x40))();
      goto LAB_0070225c;
    }
    if (uVar8 != 0) {
      uVar14 = 0;
      uVar6 = 0;
      do {
        plVar5 = (long *)FUN_006832a0(extraout_x1,param_2,param_1,uVar14 & 0xffffffff);
        lVar7 = (**(code **)(*plVar5 + 0x40))();
        uVar14 = uVar14 + 1;
        uVar6 = lVar7 + uVar6;
      } while (uVar8 != uVar14);
      goto LAB_0070225c;
    }
    break;
  case 0xb:
    if (((*(byte *)(param_1 + 1) ^ 0xff) & 0x60) != 0) {
      plVar5 = (long *)FUN_0068265c(extraout_x1,param_2,param_1,0);
      lVar7 = (**(code **)(*plVar5 + 0x40))();
      uVar6 = lVar7 + (ulong)(((uint)LZCOUNT((uint)lVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      goto LAB_0070225c;
    }
    if (uVar8 != 0) {
      uVar14 = 0;
      uVar6 = 0;
      do {
        plVar5 = (long *)FUN_006832a0(extraout_x1,param_2,param_1,uVar14 & 0xffffffff);
        lVar7 = (**(code **)(*plVar5 + 0x40))();
        uVar14 = uVar14 + 1;
        uVar6 = lVar7 + uVar6 + (ulong)(((uint)LZCOUNT((uint)lVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      } while (uVar8 != uVar14);
      goto LAB_0070225c;
    }
    break;
  case 0xd:
    if (((*(byte *)(param_1 + 1) ^ 0xff) & 0x60) != 0) {
      uVar4 = FUN_0067dbc0(extraout_x1,param_2,param_1);
LAB_00702148:
      uVar6 = (ulong)(((uint)LZCOUNT(uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      goto LAB_0070225c;
    }
    if (uVar8 != 0) {
      uVar14 = 0;
      uVar6 = 0;
      do {
        uVar4 = FUN_0067e0bc(extraout_x1,param_2,param_1,uVar14 & 0xffffffff);
        uVar14 = uVar14 + 1;
        uVar6 = uVar6 + (((uint)LZCOUNT(uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      } while (uVar8 != uVar14);
      goto LAB_0070225c;
    }
    break;
  case 0xe:
    if (((*(byte *)(param_1 + 1) ^ 0xff) & 0x60) != 0) {
      lVar7 = FUN_006818cc(extraout_x1,param_2,param_1);
      uVar6 = (long)*(int *)(lVar7 + 4) | 1;
      goto LAB_00702248;
    }
    if (uVar8 != 0) {
      uVar14 = 0;
      uVar6 = 0;
      do {
        lVar7 = FUN_00681f54(extraout_x1,param_2,param_1,uVar14 & 0xffffffff);
        uVar14 = uVar14 + 1;
        uVar6 = uVar6 + ((LZCOUNT((long)*(int *)(lVar7 + 4) | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
      } while (uVar8 != uVar14);
      goto LAB_0070225c;
    }
    break;
  case 0x11:
    if (((*(byte *)(param_1 + 1) ^ 0xff) & 0x60) != 0) {
      iVar3 = FUN_0067cb40(extraout_x1,param_2,param_1);
      uVar4 = iVar3 << 1 ^ iVar3 >> 0x1f;
      goto LAB_00702148;
    }
    if (uVar8 != 0) {
      uVar14 = 0;
      uVar6 = 0;
      do {
        iVar3 = FUN_0067d03c(extraout_x1,param_2,param_1,uVar14 & 0xffffffff);
        uVar14 = uVar14 + 1;
        uVar6 = uVar6 + (((uint)LZCOUNT(iVar3 << 1 ^ iVar3 >> 0x1f | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      } while (uVar8 != uVar14);
      goto LAB_0070225c;
    }
    break;
  case 0x12:
    if (((*(byte *)(param_1 + 1) ^ 0xff) & 0x60) != 0) {
      lVar7 = FUN_0067d380(extraout_x1,param_2,param_1);
      uVar6 = lVar7 << 1 ^ lVar7 >> 0x3f | 1;
      goto LAB_00702248;
    }
    if (uVar8 != 0) {
      uVar14 = 0;
      uVar6 = 0;
      do {
        lVar7 = FUN_0067d87c(extraout_x1,param_2,param_1,uVar14 & 0xffffffff);
        uVar14 = uVar14 + 1;
        uVar6 = uVar6 + ((LZCOUNT(lVar7 << 1 ^ lVar7 >> 0x3f | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
      } while (uVar8 != uVar14);
      goto LAB_0070225c;
    }
  }
  uVar6 = 0;
LAB_0070225c:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007022f4  FUN_007022f4 =====

long FUN_007022f4(long *param_1)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long *__dest;
  long *plVar7;
  undefined8 extraout_x1;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  size_t __n;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long *local_80;
  long *local_78;
  long *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar6 = (**(code **)(*param_1 + 0x80))();
  (**(code **)(*param_1 + 0x80))(param_1);
  local_80 = (long *)0x0;
  local_78 = (long *)0x0;
  local_70 = (long *)0x0;
  if (*(char *)(*(long *)(lVar6 + 0x20) + 0x4b) == '\0') {
                    /* try { // try from 00702448 to 00702457 has its CatchHandler @ 00702608 */
    FUN_0067cb28(extraout_x1,param_1,&local_80);
LAB_0070245c:
    plVar7 = local_78;
    if (local_80 != local_78) {
      lVar12 = 0;
      plVar11 = local_80;
      do {
                    /* try { // try from 00702470 to 00702477 has its CatchHandler @ 00702614 */
        lVar14 = FUN_00702648(*plVar11,param_1);
        plVar11 = plVar11 + 1;
        lVar12 = lVar14 + lVar12;
      } while (plVar11 != plVar7);
      cVar3 = *(char *)(*(long *)(lVar6 + 0x20) + 0x48);
      goto joined_r0x00702490;
    }
  }
  else {
    iVar15 = *(int *)(lVar6 + 4);
    if (0 < iVar15) {
      lVar14 = 0;
      lVar12 = 0;
      do {
        plVar7 = local_80;
        lVar1 = *(long *)(lVar6 + 0x28) + lVar14;
        if (local_78 < local_70) {
          plVar11 = local_78 + 1;
          *local_78 = lVar1;
        }
        else {
          __n = (long)local_78 - (long)local_80;
          lVar13 = (long)__n >> 3;
          uVar8 = lVar13 + 1;
          if (uVar8 >> 0x3d != 0) {
            if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* try { // try from 007025e8 to 00702607 has its CatchHandler @ 00702610 */
              FUN_00685d28(&local_80);
LAB_007025f0:
              if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_002f9ee0();
              }
            }
            goto LAB_00702644;
          }
          uVar9 = (long)local_70 - (long)local_80 >> 2;
          if (uVar9 <= uVar8) {
            uVar9 = uVar8;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)local_70 - (long)local_80)) {
            uVar9 = 0x1fffffffffffffff;
          }
          if (uVar9 == 0) {
            __dest = (long *)0x0;
          }
          else {
            if (uVar9 >> 0x3d != 0) goto LAB_007025f0;
                    /* try { // try from 007023f4 to 007023f7 has its CatchHandler @ 0070260c */
            __dest = (long *)FUN_00759c3c(uVar9 << 3);
          }
          plVar11 = __dest + lVar13 + 1;
          __dest[lVar13] = lVar1;
          memcpy(__dest,plVar7,__n);
          local_80 = __dest;
          local_70 = __dest + uVar9;
          if (plVar7 != (long *)0x0) {
            free(plVar7);
            iVar15 = *(int *)(lVar6 + 4);
          }
        }
        lVar12 = lVar12 + 1;
        lVar14 = lVar14 + 0x48;
        local_78 = plVar11;
      } while (lVar12 < iVar15);
      goto LAB_0070245c;
    }
  }
  lVar12 = 0;
  cVar3 = *(char *)(*(long *)(lVar6 + 0x20) + 0x48);
joined_r0x00702490:
  if (cVar3 == '\0') {
    FUN_006795dc(extraout_x1,param_1);
    lVar6 = FUN_006fc9ac();
  }
  else {
                    /* try { // try from 00702494 to 00702573 has its CatchHandler @ 00702608 */
    plVar7 = (long *)FUN_006795dc(extraout_x1,param_1);
    uVar8 = plVar7[1] - *plVar7;
    if ((int)(uVar8 >> 4) < 1) {
      lVar6 = 0;
    }
    else {
      uVar8 = uVar8 >> 4 & 0x7fffffff;
      lVar6 = 0;
      puVar10 = (undefined8 *)(*plVar7 + 8);
      do {
        if (*(int *)((long)puVar10 + -4) == 3) {
          bVar4 = *(byte *)*puVar10;
          uVar2 = (uint)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            uVar2 = (uint)*(undefined8 *)((byte *)*puVar10 + 8);
          }
          lVar6 = lVar6 + *(long *)PTR_DAT_007a3230 +
                  (ulong)(((uint)LZCOUNT(*(uint *)(puVar10 + -1) | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
                  (long)(int)uVar2 + (ulong)(((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
        }
        uVar8 = uVar8 - 1;
        puVar10 = puVar10 + 2;
      } while (uVar8 != 0);
    }
  }
  if (local_80 != (long *)0x0) {
    local_78 = local_80;
    free(local_80);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return lVar6 + lVar12;
  }
LAB_00702644:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00702648  FUN_00702648 =====

void FUN_00702648(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  byte bVar7;
  long lVar8;
  long lVar9;
  long local_70;
  code *pcStack_68;
  code ***local_60;
  code **local_58;
  undefined1 *puStack_50;
  long local_48;
  
  lVar8 = tpidr_el0;
  local_48 = *(long *)(lVar8 + 0x28);
  (**(code **)(*param_2 + 0x80))(param_2);
  bVar7 = *(byte *)(param_1 + 1);
  if (((bVar7 >> 3 & 1) != 0) &&
     (*(char *)(*(long *)(*(long *)(param_1 + 0x20) + 0x20) + 0x48) != '\0')) {
    plVar3 = *(long **)(param_1 + 0x18);
    if (plVar3 != (long *)0x0) {
      pcStack_68 = thunk_FUN_006af330;
      local_70 = param_1;
      if (*plVar3 != -1) {
        local_58 = &pcStack_68;
        local_60 = &local_58;
        puStack_50 = (undefined1 *)&local_70;
        FUN_00710f84(plVar3,&local_60,FUN_00685640);
      }
      bVar7 = *(byte *)(param_1 + 1);
    }
    if ((*(int *)(PTR_DAT_007a32d8 + (ulong)*(byte *)(param_1 + 2) * 4) == 10) &&
       ((bVar7 & 0x60) != 0x60)) {
      (**(code **)(*param_2 + 0x80))(param_2);
      uVar1 = *(uint *)(param_1 + 4);
      lVar9 = *(long *)PTR_DAT_007a3230;
      plVar3 = (long *)FUN_0068265c(extraout_x1_00,param_2,param_1,0);
      lVar4 = (**(code **)(*plVar3 + 0x40))();
      lVar4 = lVar4 + lVar9 + (ulong)(((uint)LZCOUNT(uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
              (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      if (*(long *)(lVar8 + 0x28) == local_48) {
        return;
      }
      goto LAB_007029a4;
    }
  }
  if (((bVar7 ^ 0xff) & 0x60) == 0) {
    plVar3 = *(long **)(param_1 + 0x18);
    if ((plVar3 != (long *)0x0) &&
       (pcStack_68 = thunk_FUN_006af330, local_70 = param_1, *plVar3 != -1)) {
      local_58 = &pcStack_68;
      local_60 = &local_58;
      puStack_50 = (undefined1 *)&local_70;
      FUN_00710f84(plVar3,&local_60,FUN_00685640);
    }
    if ((*(char *)(param_1 + 2) == '\v') && (uVar5 = FUN_0068d830(param_1), (uVar5 & 1) != 0)) {
      plVar3 = (long *)FUN_00684cf0(extraout_x1,param_2,param_1);
      uVar5 = FUN_006dead4();
      if ((uVar5 & 1) != 0) {
        uVar5 = (**(code **)(*plVar3 + 0x50))(plVar3);
        uVar5 = uVar5 & 0xffffffff;
        goto LAB_0070287c;
      }
    }
    uVar5 = FUN_0067c384(extraout_x1,param_2,param_1);
    uVar5 = uVar5 & 0xffffffff;
  }
  else if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 0x20) + 0x4b) & 1) == 0) {
    uVar5 = FUN_0067b838(extraout_x1,param_2,param_1);
    uVar5 = uVar5 & 1;
  }
  else {
    uVar5 = 1;
  }
LAB_0070287c:
  lVar4 = FUN_00701a38(param_1,param_2);
  uVar6 = FUN_0069399c(param_1);
  if ((uVar6 & 1) == 0) {
    plVar3 = *(long **)(param_1 + 0x18);
    iVar2 = *(int *)(param_1 + 4);
    if ((plVar3 != (long *)0x0) &&
       (pcStack_68 = thunk_FUN_006af330, local_70 = param_1, *plVar3 != -1)) {
      local_58 = &pcStack_68;
      local_60 = &local_58;
      puStack_50 = (undefined1 *)&local_70;
      FUN_00710f84(plVar3,&local_60,FUN_00685640);
    }
    lVar4 = lVar4 + ((ulong)(((uint)LZCOUNT(iVar2 << 3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) <<
                     (*(char *)(param_1 + 2) == '\n') & 0xffffffff) * uVar5;
    if (*(long *)(lVar8 + 0x28) == local_48) {
      return;
    }
  }
  else {
    if (lVar4 == 0) {
      lVar4 = 0;
      lVar8 = *(long *)(lVar8 + 0x28);
    }
    else {
      lVar4 = lVar4 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
              (ulong)(((uint)LZCOUNT(*(int *)(param_1 + 4) << 3 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar8 = *(long *)(lVar8 + 0x28);
    }
    if (lVar8 == local_48) {
      return;
    }
  }
LAB_007029a4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


// ===== 007029a8  FUN_007029a8 =====

void FUN_007029a8(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  undefined8 uVar8;
  code **local_80;
  long *plStack_78;
  long local_50;
  code *pcStack_48;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x18);
  if ((plVar4 != (long *)0x0) &&
     (pcStack_48 = thunk_FUN_006af330, local_50 = param_1, *plVar4 != -1)) {
    local_80 = &pcStack_48;
    plStack_78 = &local_50;
    local_40 = (undefined1 *)&local_80;
    FUN_00710f84(plVar4,&local_40,FUN_00685640);
  }
  uVar5 = 4;
  switch(*(undefined1 *)(param_1 + 2)) {
  case 1:
  case 2:
  case 10:
  case 0xb:
  case 0xc:
  case 0xe:
    FUN_00675e64(&local_80,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/wire_format.cc"
                 ,0x611);
                    /* try { // try from 00702a58 to 00702a6b has its CatchHandler @ 00702c1c */
    uVar8 = FUN_00675a58(&local_80,"Unsupported");
                    /* try { // try from 00702a6c to 00702a73 has its CatchHandler @ 00702c18 */
    FUN_00675ac0(&local_40,uVar8);
    goto LAB_00702a74;
  case 3:
    uVar5 = FUN_006e1d38(param_2);
    goto LAB_00702b48;
  case 4:
    uVar5 = FUN_006e1f80(param_2);
LAB_00702b48:
    uVar5 = uVar5 | 1;
    goto LAB_00702b64;
  case 5:
    uVar2 = FUN_006e1e5c(param_2);
    uVar5 = (ulong)(int)(uVar2 | 1);
    goto LAB_00702b64;
  case 6:
  case 0x10:
    uVar5 = 8;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
    break;
  case 7:
  case 0xf:
    goto switchD_00702a3c_caseD_7;
  case 8:
    uVar5 = 1;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
    break;
  case 9:
    pbVar6 = (byte *)FUN_006e1c14(param_2);
    uVar5 = (ulong)(*pbVar6 >> 1);
    if ((*pbVar6 & 1) != 0) {
      uVar5 = *(ulong *)(pbVar6 + 8);
    }
    uVar5 = uVar5 + (((uint)LZCOUNT((uint)uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
    break;
  case 0xd:
    uVar2 = FUN_006e20a4(param_2);
    goto LAB_00702be8;
  case 0x11:
    iVar3 = FUN_006e1e5c(param_2);
    uVar2 = iVar3 << 1 ^ iVar3 >> 0x1f;
LAB_00702be8:
    uVar5 = (ulong)(((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
    break;
  case 0x12:
    lVar7 = FUN_006e1d38(param_2);
    uVar5 = lVar7 << 1 ^ lVar7 >> 0x3f | 1;
LAB_00702b64:
    uVar5 = (LZCOUNT(uVar5) ^ 0x3fU) * 9 + 0x49 >> 6;
switchD_00702a3c_caseD_7:
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
    break;
  default:
    FUN_00675e64(&local_80,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/wire_format.cc"
                 ,0x62c);
                    /* try { // try from 00702bb4 to 00702bc7 has its CatchHandler @ 00702c14 */
    uVar8 = FUN_00675a58(&local_80,"Cannot get here");
                    /* try { // try from 00702bc8 to 00702bcf has its CatchHandler @ 00702c10 */
    FUN_00675ac0(&local_40,uVar8);
LAB_00702a74:
    FUN_00675e7c(&local_80);
    uVar5 = 0;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 00702c40  FUN_00702c40 =====

void FUN_00702c40(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  undefined8 uVar8;
  code **local_80;
  long *plStack_78;
  long local_50;
  code *pcStack_48;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x18);
  if ((plVar4 != (long *)0x0) &&
     (pcStack_48 = thunk_FUN_006af330, local_50 = param_1, *plVar4 != -1)) {
    local_80 = &pcStack_48;
    plStack_78 = &local_50;
    local_40 = (undefined1 *)&local_80;
    FUN_00710f84(plVar4,&local_40,FUN_00685640);
  }
  uVar5 = 4;
  switch(*(undefined1 *)(param_1 + 2)) {
  case 1:
  case 6:
  case 0x10:
    uVar5 = 8;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
    break;
  case 2:
  case 7:
  case 0xf:
    goto switchD_00702cd4_caseD_2;
  case 3:
    uVar5 = FUN_006e0004(param_2);
    goto LAB_00702e1c;
  case 4:
    uVar5 = FUN_006e04bc(param_2);
LAB_00702e1c:
    uVar5 = uVar5 | 1;
LAB_00702e6c:
    uVar5 = (LZCOUNT(uVar5) ^ 0x3fU) * 9 + 0x49 >> 6;
switchD_00702cd4_caseD_2:
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
    break;
  case 5:
    uVar3 = FUN_006dfda8(param_2);
    goto LAB_00702e64;
  case 8:
    uVar5 = 1;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
    break;
  case 9:
  case 0xc:
    pbVar6 = (byte *)FUN_006e0e34(param_2);
    uVar5 = (ulong)(*pbVar6 >> 1);
    if ((*pbVar6 & 1) != 0) {
      uVar5 = *(ulong *)(pbVar6 + 8);
    }
    uVar5 = uVar5 + (((uint)LZCOUNT((uint)uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
    break;
  case 10:
    FUN_00675e64(&local_80,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/wire_format.cc"
                 ,0x634);
                    /* try { // try from 00702e3c to 00702e4f has its CatchHandler @ 00702f04 */
    uVar8 = FUN_00675a58(&local_80,"Unsupported");
                    /* try { // try from 00702e50 to 00702e57 has its CatchHandler @ 00702efc */
    FUN_00675ac0(&local_40,uVar8);
    goto LAB_00702ed8;
  case 0xb:
    plVar4 = (long *)FUN_006e11b4(param_2);
    lVar7 = (**(code **)(*plVar4 + 0x40))();
    uVar5 = lVar7 + (ulong)(((uint)LZCOUNT((uint)lVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
    break;
  case 0xd:
    uVar3 = FUN_006e0260(param_2);
    goto LAB_00702d60;
  case 0xe:
    uVar3 = FUN_006e108c(param_2);
LAB_00702e64:
    uVar5 = (ulong)(int)(uVar3 | 1);
    goto LAB_00702e6c;
  case 0x11:
    iVar2 = FUN_006dfda8(param_2);
    uVar3 = iVar2 << 1 ^ iVar2 >> 0x1f;
LAB_00702d60:
    uVar5 = (ulong)(((uint)LZCOUNT(uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
    break;
  case 0x12:
    lVar7 = FUN_006e0004(param_2);
    uVar5 = lVar7 << 1 ^ lVar7 >> 0x3f | 1;
    goto LAB_00702e6c;
  default:
    FUN_00675e64(&local_80,3,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/wire_format.cc"
                 ,0x654);
                    /* try { // try from 00702ebc to 00702ecf has its CatchHandler @ 00702f00 */
    uVar8 = FUN_00675a58(&local_80,"Cannot get here");
                    /* try { // try from 00702ed0 to 00702ed7 has its CatchHandler @ 00702ef8 */
    FUN_00675ac0(&local_40,uVar8);
LAB_00702ed8:
    FUN_00675e7c(&local_80);
    uVar5 = 0;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 00702f28  FUN_00702f28 =====

/* WARNING: Type propagation algorithm not settling */

ushort * FUN_00702f28(undefined8 *param_1,ushort *param_2,undefined8 *param_3)

{
  long *plVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  uint uVar10;
  long *plVar11;
  uint uVar12;
  ushort *puVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  ushort *puVar17;
  int iVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  ulong local_100;
  ulong local_f8;
  long *local_f0;
  long local_e8;
  long lStack_e0;
  long *local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  long alStack_c0 [5];
  int local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  puVar5 = (ulong *)FUN_00679624(param_1[2],*param_1);
  iVar18 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = (long *)0x0;
  uVar14 = 0;
LAB_00702fa4:
  do {
    while( true ) {
      if ((ushort *)*param_3 <= param_2) {
        iVar3 = (int)param_2 - *(int *)(param_3 + 1);
        if (*(int *)((long)param_3 + 0x1c) == iVar3) {
          puVar13 = (ushort *)0x0;
          if (param_3[2] != 0 || iVar3 < 1) {
            puVar13 = param_2;
          }
          goto joined_r0x00703504;
        }
                    /* try { // try from 00703200 to 0070320b has its CatchHandler @ 00703574 */
        auVar19 = FUN_0066f53c(param_3,iVar3,*(undefined4 *)((long)param_3 + 0x5c));
        param_2 = auVar19._0_8_;
        puVar13 = param_2;
        if ((auVar19 & (undefined1  [16])0x1) != (undefined1  [16])0x0) goto joined_r0x00703504;
      }
      puVar17 = (ushort *)((long)param_2 + 1);
      bVar2 = (byte)*param_2;
      auVar19[8] = bVar2;
      auVar19._0_8_ = puVar17;
      auVar19._9_7_ = 0;
      uVar10 = (uint)bVar2;
      if (bVar2 == 0x1a) break;
      if (bVar2 != 0x10) {
        if ((char)bVar2 < '\0') {
          iVar3 = (uint)bVar2 + (uint)*(byte *)puVar17 * 0x80 + -0x80;
          if ((char)*(byte *)puVar17 < '\0') {
                    /* try { // try from 0070310c to 00703113 has its CatchHandler @ 00703590 */
            auVar19 = FUN_0066fe50(param_2);
            puVar17 = auVar19._0_8_;
            if (auVar19._8_4_ != 0) goto LAB_0070306c;
            uVar10 = 0;
          }
          else {
            puVar17 = param_2 + 1;
            auVar19._8_4_ = iVar3;
            auVar19._0_8_ = puVar17;
            auVar19._12_4_ = 0;
            if (iVar3 == 0) {
              uVar10 = 0;
            }
            else {
LAB_0070306c:
              puVar17 = auVar19._0_8_;
              uVar10 = auVar19._8_4_;
              if ((uVar10 & 7) != 4) {
                    /* try { // try from 00703078 to 0070308b has its CatchHandler @ 00703590 */
                param_2 = (ushort *)FUN_00670864(auVar19._8_8_ & 0xffffffff,0,puVar17,param_3);
                goto joined_r0x007031e4;
              }
            }
          }
        }
        else if (bVar2 != 0) goto LAB_0070306c;
        *(uint *)(param_3 + 10) = uVar10 - 1;
        puVar13 = puVar17;
        goto joined_r0x00703504;
      }
      uVar12 = (uint)(char)*puVar17;
      uVar10 = (uVar12 & *puVar17) + uVar12;
      uVar15 = uVar10 >> 1;
      if ((uVar10 >> 0xf & 1) == 0) {
        lVar7 = 1;
        if (uVar10 < uVar12) {
          lVar7 = 2;
        }
      }
      else {
        uVar12 = (uint)(char)*(ushort *)((long)param_2 + 3);
        uVar10 = (uVar12 & *(ushort *)((long)param_2 + 3)) + uVar12;
        uVar15 = (uVar15 + uVar10 * 0x2000) - 0x4000;
        if ((uVar10 >> 0xf & 1) == 0) {
          lVar6 = 2;
        }
        else {
          uVar12 = (uint)(char)*(ushort *)((long)param_2 + 5);
          uVar10 = (uVar12 & *(ushort *)((long)param_2 + 5)) + uVar12;
          uVar15 = uVar15 + uVar10 * 0x8000000 + 0xf0000000;
          if ((uVar10 >> 0xf & 1) == 0) {
            lVar6 = 4;
          }
          else {
            uVar12 = (uint)(char)*(ushort *)((long)param_2 + 7);
            uVar10 = (uVar12 & *(ushort *)((long)param_2 + 7)) + uVar12;
            if ((uVar10 >> 0xf & 1) == 0) {
              lVar6 = 6;
            }
            else {
              uVar12 = (uint)(char)*(ushort *)((long)param_2 + 9);
              uVar10 = (uVar12 & *(ushort *)((long)param_2 + 9)) + uVar12;
              if ((uVar10 >> 0xf & 1) != 0) goto LAB_0070350c;
              lVar6 = 8;
            }
          }
        }
        lVar7 = 1;
        if (uVar10 < uVar12) {
          lVar7 = 2;
        }
        lVar7 = lVar7 + lVar6;
      }
      param_2 = (ushort *)((long)puVar17 + lVar7);
      if (iVar18 == 2) {
        if (param_3[0xc] == 0) {
          lVar6 = FUN_00684764(param_1[2],uVar15);
        }
        else {
                    /* try { // try from 00703264 to 0070328b has its CatchHandler @ 0070358c */
          lVar6 = FUN_0068bfbc(param_3[0xc],param_1[1],uVar15);
        }
        if ((lVar6 == 0) || (lVar7 = FUN_0068c940(lVar6), lVar7 == 0)) {
          uVar16 = local_100 >> 1 & 0x7f;
          plVar8 = (long *)((ulong)&local_100 | 1);
          if ((local_100 & 1) != 0) {
            uVar16 = local_f8;
            plVar8 = local_f0;
          }
          if ((long)uVar16 < 0) {
                    /* try { // try from 00703418 to 00703433 has its CatchHandler @ 0070358c */
            FUN_00676318(uVar16,"string length exceeds max size");
          }
          if ((*puVar5 & 1) == 0) {
            lVar6 = FUN_00661fa4(puVar5);
          }
          else {
            lVar6 = (*puVar5 & 0xfffffffffffffffc) + 8;
          }
                    /* try { // try from 007032e8 to 007032ff has its CatchHandler @ 0070358c */
          uVar9 = FUN_006fb29c(lVar6,uVar15);
          iVar18 = 3;
          FUN_00712d54(uVar9,plVar8,uVar16);
          uVar14 = uVar15;
        }
        else {
          if (((*(byte *)(lVar6 + 1) ^ 0xff) & 0x60) == 0) {
                    /* try { // try from 007032ac to 007032b3 has its CatchHandler @ 00703578 */
            plVar8 = (long *)FUN_0068347c(param_1[2],*param_1,lVar6);
          }
          else {
                    /* try { // try from 00703308 to 0070330f has its CatchHandler @ 00703578 */
            plVar8 = (long *)FUN_00682834(param_1[2],*param_1,lVar6,param_3[0xd]);
          }
          uStack_90 = *(undefined4 *)(param_3 + 0xb);
          local_98 = 0;
          local_94 = 0x7fffffff;
          local_8c = 0x80000000;
          uStack_80 = 0;
          uStack_78 = 0;
          alStack_c0[0] = 0;
          local_c8 = 0;
          alStack_c0[2] = 0;
          alStack_c0[1] = 0;
          plVar1 = (long *)((ulong)&local_100 | 1);
          uVar16 = local_100 >> 1 & 0x7f;
          if ((local_100 & 1) != 0) {
            plVar1 = local_f0;
            uVar16 = local_f8;
          }
          alStack_c0[4] = 0;
          alStack_c0[3] = 0;
          local_88 = 0;
          plVar11 = plVar1;
          if ((long)uVar16 < 0) {
                    /* try { // try from 00703438 to 00703447 has its CatchHandler @ 0070357c */
            FUN_00676318(uVar16,"string length exceeds max size");
            lStack_e0 = (long)plVar1 + (uVar16 - 0x10);
            local_94 = 0;
            local_cc = 0x10;
            local_d8 = alStack_c0;
            if (alStack_c0[4] == 1) {
              alStack_c0[4] = 2;
            }
          }
          else {
            local_94 = 0;
            if (uVar16 < 0x11) {
              __memcpy_chk(alStack_c0,plVar1,uVar16,0x50);
              lStack_e0 = (long)alStack_c0 + uVar16;
              local_cc = 0;
              local_d8 = (long *)0x0;
              plVar11 = alStack_c0;
              if (alStack_c0[4] == 1) {
                alStack_c0[4] = (long)plVar1 - (long)alStack_c0;
              }
            }
            else {
              lStack_e0 = (long)plVar1 + (uVar16 - 0x10);
              local_cc = 0x10;
              local_d8 = alStack_c0;
            }
          }
          uStack_80 = param_3[0xd];
          local_88 = param_3[0xc];
                    /* try { // try from 007033f4 to 007033ff has its CatchHandler @ 0070357c */
          local_e8 = lStack_e0;
          lVar6 = (**(code **)(*plVar8 + 0x50))(plVar8,plVar11,&local_e8);
          if ((lVar6 == 0) || (iVar18 = 3, uVar14 = uVar15, local_98 != 0)) {
LAB_0070350c:
            puVar13 = (ushort *)0x0;
            goto joined_r0x00703504;
          }
        }
      }
      else if (iVar18 == 0) {
        iVar18 = 1;
        uVar14 = uVar15;
      }
    }
    if (iVar18 == 1) {
                    /* try { // try from 007030bc to 007030db has its CatchHandler @ 00703588 */
      lVar6 = FUN_0068d53c(param_1[1],uVar14);
      if (lVar6 == 0) {
        uVar9 = 0;
      }
      else if (param_3[0xc] == 0) {
                    /* try { // try from 007031b0 to 007031db has its CatchHandler @ 00703588 */
        uVar9 = FUN_00684764(param_1[2],uVar14);
      }
      else {
        uVar9 = FUN_0068bfbc(param_3[0xc],param_1[1],uVar14);
      }
      param_2 = (ushort *)
                FUN_006fcf50(*param_1,puVar17,param_3,(ulong)uVar14 << 3 | 2,param_1[2],uVar9);
      iVar18 = 3;
    }
    else if (iVar18 == 0) {
      if ((char)*(byte *)puVar17 < '\0') {
                    /* try { // try from 00703120 to 00703157 has its CatchHandler @ 00703584 */
        auVar20 = FUN_0066fed4(puVar17);
        puVar13 = auVar20._0_8_;
        if (puVar13 == (ushort *)0x0) goto joined_r0x00703504;
        uVar16 = (ulong)auVar20._8_4_;
        if ((long)uVar16 <= (param_3[1] - (long)puVar13) + 0x10) goto LAB_00703148;
      }
      else {
        puVar13 = param_2 + 1;
        uVar16 = (ulong)(int)(uint)*(byte *)puVar17;
        if ((long)uVar16 <= (param_3[1] - (long)puVar13) + 0x10) {
LAB_00703148:
          FUN_00712d54(&local_100,puVar13,uVar16);
          param_2 = (ushort *)((long)puVar13 + uVar16);
          iVar18 = 2;
          goto LAB_00702fa4;
        }
      }
                    /* try { // try from 00703040 to 00703053 has its CatchHandler @ 00703584 */
      param_2 = (ushort *)FUN_0066f6c8(param_3,puVar13,uVar16 & 0xffffffff,&local_100);
      iVar18 = 2;
    }
    else {
      if ((char)*(byte *)puVar17 < '\0') {
                    /* try { // try from 00703164 to 00703197 has its CatchHandler @ 00703580 */
        auVar20 = FUN_0066fed4(puVar17);
        param_2 = auVar20._0_8_;
        if (param_2 == (ushort *)0x0) goto LAB_0070350c;
        lVar6 = (long)auVar20._8_4_;
        if (lVar6 <= (param_3[1] - (long)param_2) + 0x10) goto LAB_00702fa0;
      }
      else {
        param_2 = param_2 + 1;
        lVar6 = (long)(int)(uint)*(byte *)puVar17;
        if (lVar6 <= (param_3[1] - (long)param_2) + 0x10) {
LAB_00702fa0:
          param_2 = (ushort *)((long)param_2 + lVar6);
          goto LAB_00702fa4;
        }
      }
      param_2 = (ushort *)FUN_0066f600(param_3,param_2);
    }
joined_r0x007031e4:
    puVar13 = param_2;
    if (param_2 == (ushort *)0x0) {
joined_r0x00703504:
      if ((local_100 & 1) != 0) {
        free(local_f0);
      }
      if (*(long *)(lVar4 + 0x28) == local_70) {
        return puVar13;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


// ===== 007035c4  FUN_007035c4 =====

long FUN_007035c4(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  void *local_70;
  byte *local_68;
  byte *local_60;
  void *pvStack_58;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar7 = param_1[1] - *param_1 >> 5;
  uVar1 = lVar7 + 1;
  if (uVar1 >> 0x3b == 0) {
    local_50 = param_1 + 2;
    uVar5 = *local_50 - *param_1;
    uVar6 = (long)uVar5 >> 4;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar5) {
      uVar6 = 0x7ffffffffffffff;
    }
    if (uVar6 == 0) {
      local_70 = (void *)0x0;
    }
    else {
      if (uVar6 >> 0x3b != 0) goto LAB_00703720;
      local_70 = (void *)FUN_00759c3c(uVar6 << 5);
    }
    local_68 = (byte *)((long)local_70 + lVar7 * 0x20);
    pvStack_58 = (void *)((long)local_70 + uVar6 * 0x20);
    local_68[0x18] = 0;
    local_68[0x19] = 0;
    local_68[0x1a] = 0;
    local_68[0x1b] = 0;
    local_60 = local_68;
                    /* try { // try from 00703668 to 00703687 has its CatchHandler @ 00703734 */
    FUN_006df758(local_68,param_2);
    local_60 = local_60 + 0x20;
    FUN_0070375c(param_1,&local_70);
    pbVar4 = local_68;
    lVar7 = param_1[1];
    while (pbVar3 = local_60, pbVar3 != pbVar4) {
      local_60 = pbVar3 + -0x20;
      if ((*(int *)(pbVar3 + -8) == 9) && ((*local_60 & 1) != 0)) {
        free(*(void **)(pbVar3 + -0x10));
      }
    }
    local_60 = pbVar3;
    if (local_70 != (void *)0x0) {
      free(local_70);
    }
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return lVar7;
    }
  }
  else {
    if (*(long *)(lVar2 + 0x28) != local_48) goto LAB_00703758;
    FUN_00703920(param_1);
LAB_00703720:
    if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
  }
LAB_00703758:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0070375c  FUN_0070375c =====

void FUN_0070375c(long *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  long local_88;
  long local_80;
  long *local_78;
  long *plStack_70;
  long *local_68;
  undefined1 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  plStack_70 = &local_88;
  local_58 = *(long *)(lVar2 + 0x28);
  local_78 = param_1 + 2;
  pbVar5 = (byte *)*param_1;
  pbVar1 = (byte *)param_1[1];
  local_68 = &local_80;
  local_60 = 0;
  lVar3 = param_2[1] + ((long)pbVar5 - (long)pbVar1);
  local_80 = lVar3;
  pbVar4 = pbVar5;
  local_88 = lVar3;
  if ((long)pbVar5 - (long)pbVar1 != 0) {
    do {
      *(undefined4 *)(local_80 + 0x18) = 0;
                    /* try { // try from 007037c8 to 007037cf has its CatchHandler @ 00703884 */
      FUN_006df758(local_80,pbVar4);
      pbVar4 = pbVar4 + 0x20;
      local_80 = local_80 + 0x20;
    } while (pbVar4 != pbVar1);
    do {
      if ((*(int *)(pbVar5 + 0x18) == 9) && ((*pbVar5 & 1) != 0)) {
        free(*(void **)(pbVar5 + 0x10));
      }
      pbVar5 = pbVar5 + 0x20;
    } while (pbVar5 != pbVar1);
  }
  param_2[1] = lVar3;
  lVar3 = *param_1;
  param_1[1] = lVar3;
  *param_1 = param_2[1];
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 007038ac  FUN_007038ac =====

void FUN_007038ac(undefined8 *param_1)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar1 = (byte *)param_1[1];
  pbVar4 = (byte *)param_1[2];
  while (pbVar3 = pbVar4, pbVar3 != pbVar1) {
    iVar2 = *(int *)(pbVar3 + -8);
    pbVar4 = pbVar3 + -0x20;
    param_1[2] = pbVar4;
    if ((iVar2 == 9) && ((*pbVar4 & 1) != 0)) {
      free(*(void **)(pbVar3 + -0x10));
      pbVar4 = (byte *)param_1[2];
    }
  }
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 00703920  FUN_00703920 =====

void FUN_00703920(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 00703934  FUN_00703934 =====

void FUN_00703934(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    return;
  }
  pbVar1 = (byte *)**(undefined8 **)(param_1 + 8);
  pbVar3 = (byte *)**(undefined8 **)(param_1 + 0x10);
  while (pbVar2 = pbVar3, pbVar2 != pbVar1) {
    pbVar3 = pbVar2 + -0x20;
    if ((*(int *)(pbVar2 + -8) == 9) && ((*pbVar3 & 1) != 0)) {
      free(*(void **)(pbVar2 + -0x10));
    }
  }
  return;
}


// ===== 00703994  FUN_00703994 =====

void FUN_00703994(long param_1,long param_2,undefined8 param_3,long param_4,uint param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_78 = param_2;
  local_70 = param_1;
  do {
    param_4 = 1 - param_4;
LAB_007039dc:
    lVar3 = local_70;
    uVar7 = param_2 - local_70 >> 5;
    if (uVar7 - 2 == 0 || (long)uVar7 < 2) {
      if (uVar7 < 2) goto LAB_00703cac;
      if (uVar7 == 2) {
        local_78 = param_2 + -0x20;
        uVar7 = FUN_00703ce0(param_3,local_78,local_70);
        if ((uVar7 & 1) != 0) {
          FUN_00703f44(&local_70,&local_78);
        }
        goto LAB_00703cac;
      }
    }
    else {
      if (uVar7 == 3) {
        local_78 = param_2 + -0x20;
        FUN_007042b0(local_70,local_70 + 0x20,local_78,param_3);
        goto LAB_00703cac;
      }
      if (uVar7 == 4) {
        local_78 = param_2 + -0x20;
        FUN_00704ac0(local_70,local_70 + 0x20,local_70 + 0x40,local_78,param_3);
        goto LAB_00703cac;
      }
      if (uVar7 == 5) {
        local_78 = param_2 + -0x20;
        FUN_00704b98(local_70,local_70 + 0x20,local_70 + 0x40,local_70 + 0x60,local_78,param_3);
        goto LAB_00703cac;
      }
    }
    if ((long)uVar7 < 0x18) {
      if ((param_5 & 1) == 0) {
        FUN_00704174(local_70,param_2,param_3);
      }
      else {
        FUN_00704010();
      }
LAB_00703cac:
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (param_4 == 1) {
      if (local_70 != param_2) {
        uVar4 = uVar7 - 2 >> 1;
        lVar6 = local_70 + uVar4 * 0x20;
        lVar5 = uVar4 + 1;
        do {
          FUN_00704c9c(lVar3,param_3,uVar7,lVar6);
          lVar5 = lVar5 + -1;
          lVar6 = lVar6 + -0x20;
        } while (lVar5 != 0);
        do {
          FUN_00704e54(lVar3,param_2,param_3,uVar7);
          param_2 = param_2 + -0x20;
          bVar1 = 2 < uVar7;
          uVar7 = uVar7 - 1;
        } while (bVar1);
      }
      goto LAB_00703cac;
    }
    lVar3 = local_70 + (uVar7 >> 1) * 0x20;
    if (uVar7 < 0x81) {
      FUN_007042b0(lVar3,local_70,param_2 + -0x20,param_3);
      if ((param_5 & 1) != 0) goto LAB_00703afc;
LAB_00703ab4:
      uVar7 = FUN_00703ce0(param_3,local_70 + -0x20);
      param_2 = local_78;
      if ((uVar7 & 1) == 0) {
        local_70 = FUN_007044b0(local_70,local_78,param_3);
        goto LAB_00703b9c;
      }
      auVar8 = FUN_007046b4(local_70,local_78,param_3);
      lVar3 = auVar8._0_8_;
    }
    else {
      FUN_007042b0(local_70,lVar3,param_2 + -0x20,param_3);
      lVar3 = local_78;
      lVar5 = (uVar7 >> 1) * 0x20;
      FUN_007042b0(local_70 + 0x20,local_70 + lVar5 + -0x20,local_78 + -0x40,param_3);
      FUN_007042b0(local_70 + 0x40,local_70 + lVar5 + 0x20,lVar3 + -0x60,param_3);
      FUN_007042b0(local_70 + lVar5 + -0x20,local_70 + lVar5,local_70 + lVar5 + 0x20,param_3);
      local_80 = local_70 + lVar5;
      FUN_007043e4(&local_70,&local_80);
      if ((param_5 & 1) == 0) goto LAB_00703ab4;
LAB_00703afc:
      param_2 = local_78;
      auVar8 = FUN_007046b4(local_70,local_78,param_3);
      lVar3 = auVar8._0_8_;
    }
    if ((auVar8 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      uVar7 = FUN_007048a0(local_70,lVar3,param_3);
      uVar4 = FUN_007048a0(lVar3 + 0x20,param_2,param_3);
      if ((uVar4 & 1) == 0) {
        if ((uVar7 & 1) == 0) goto LAB_00703b68;
        param_4 = param_4 + 1;
        local_70 = lVar3 + 0x20;
      }
      else {
        if ((uVar7 & 1) != 0) goto LAB_00703cac;
        param_4 = param_4 + 1;
        param_2 = lVar3;
        local_78 = lVar3;
      }
      goto LAB_007039dc;
    }
LAB_00703b68:
    FUN_00703994(local_70,lVar3,param_3,-param_4,param_5 & 1);
    local_70 = lVar3 + 0x20;
LAB_00703b9c:
    param_5 = 0;
    param_4 = -param_4;
  } while( true );
}


// ===== 00703ce0  FUN_00703ce0 =====

byte FUN_00703ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  size_t __n;
  byte *__s2;
  long lVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined1 uStack_69;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar5 = FUN_006e2e60(param_2);
  if (iVar5 < 4) {
    if (iVar5 == 1) {
      iVar5 = FUN_006e1e5c(param_2);
      iVar8 = FUN_006e1e5c(param_3);
      bVar2 = iVar5 < iVar8;
      if (*(long *)(lVar1 + 0x28) != local_38) goto LAB_00703f40;
      goto LAB_00703f00;
    }
    if (iVar5 == 2) {
      lVar14 = FUN_006e1d38(param_2);
      lVar15 = FUN_006e1d38(param_3);
      bVar2 = lVar14 < lVar15;
      if (*(long *)(lVar1 + 0x28) == local_38) goto LAB_00703f00;
      goto LAB_00703f40;
    }
    if (iVar5 == 3) {
      uVar6 = FUN_006e20a4(param_2);
      uVar7 = FUN_006e20a4(param_3);
      bVar2 = uVar6 < uVar7;
      if (*(long *)(lVar1 + 0x28) == local_38) goto LAB_00703f00;
      goto LAB_00703f40;
    }
  }
  else {
    if (iVar5 == 4) {
      uVar11 = FUN_006e1f80(param_2);
      uVar12 = FUN_006e1f80(param_3);
      bVar2 = uVar11 < uVar12;
      if (*(long *)(lVar1 + 0x28) == local_38) goto LAB_00703f00;
      goto LAB_00703f40;
    }
    if (iVar5 == 7) {
      bVar4 = FUN_006e21c8(param_2);
      bVar2 = FUN_006e21c8(param_3);
      bVar2 = bVar2 & (bVar4 ^ 1);
      if (*(long *)(lVar1 + 0x28) == local_38) goto LAB_00703f00;
      goto LAB_00703f40;
    }
    if (iVar5 == 9) {
      pbVar9 = (byte *)FUN_006e1c14(param_2);
      pbVar10 = (byte *)FUN_006e1c14(param_3);
      __s2 = *(byte **)(pbVar10 + 0x10);
      bVar3 = (*pbVar10 & 1) == 0;
      if (bVar3) {
        __s2 = pbVar10 + 1;
      }
      uVar11 = (ulong)(*pbVar10 >> 1);
      if (!bVar3) {
        uVar11 = *(ulong *)(pbVar10 + 8);
      }
      uVar12 = *(ulong *)(pbVar9 + 8);
      pbVar10 = *(byte **)(pbVar9 + 0x10);
      if ((*pbVar9 & 1) == 0) {
        pbVar10 = pbVar9 + 1;
        uVar12 = (ulong)(*pbVar9 >> 1);
      }
      __n = uVar11;
      if (uVar12 <= uVar11) {
        __n = uVar12;
      }
      iVar5 = memcmp(pbVar10,__s2,__n);
      bVar2 = uVar12 < uVar11;
      if (iVar5 != 0) {
        bVar2 = iVar5 < 0;
      }
      if (*(long *)(lVar1 + 0x28) == local_38) goto LAB_00703f00;
      goto LAB_00703f40;
    }
  }
  FUN_00675e64(auStack_68,2,
               "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/wire_format.cc"
               ,0x4a3);
                    /* try { // try from 00703e68 to 00703e7b has its CatchHandler @ 00703f1c */
  uVar13 = FUN_00675a58(auStack_68,"Invalid key for map field.");
                    /* try { // try from 00703e7c to 00703e83 has its CatchHandler @ 00703f18 */
  FUN_00675ac0(&uStack_69,uVar13);
  FUN_00675e7c(auStack_68);
  bVar2 = 1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
LAB_00703f00:
    return bVar2 & 1;
  }
LAB_00703f40:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00703f44  FUN_00703f44 =====

void FUN_00703f44(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte local_58 [16];
  void *local_48;
  int local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = *param_1;
  uVar2 = *param_2;
  local_40 = 0;
  FUN_006df758(local_58,uVar3);
                    /* try { // try from 00703f7c to 00703f93 has its CatchHandler @ 00703fd4 */
  FUN_006df758(uVar3,uVar2);
  FUN_006df758(uVar2,local_58);
  if ((local_40 == 9) && ((local_58[0] & 1) != 0)) {
    free(local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00704010  FUN_00704010 =====

void FUN_00704010(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  byte local_78 [16];
  void *local_68;
  int local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((param_1 != param_2) && (param_1 + 0x20 != param_2)) {
    lVar5 = 0;
    lVar6 = param_1 + 0x20;
    lVar3 = param_1;
    do {
      lVar4 = lVar6;
      uVar2 = FUN_00703ce0(param_3,lVar4,lVar3);
      if ((uVar2 & 1) != 0) {
        local_60 = 0;
        FUN_006df758(local_78,lVar4);
        lVar6 = lVar5;
        do {
                    /* try { // try from 007040a4 to 007040c3 has its CatchHandler @ 00704134 */
          FUN_006df758(param_1 + lVar6 + 0x20);
          lVar3 = param_1;
          if (lVar6 == 0) goto LAB_007040dc;
          uVar2 = FUN_00703ce0(param_3,local_78,param_1 + lVar6 + -0x20);
          lVar6 = lVar6 + -0x20;
        } while ((uVar2 & 1) != 0);
        lVar3 = param_1 + lVar6 + 0x20;
LAB_007040dc:
                    /* try { // try from 007040dc to 007040e3 has its CatchHandler @ 00704130 */
        FUN_006df758(lVar3,local_78);
        if ((local_60 == 9) && ((local_78[0] & 1) != 0)) {
          free(local_68);
        }
      }
      lVar5 = lVar5 + 0x20;
      lVar6 = lVar4 + 0x20;
      lVar3 = lVar4;
    } while (lVar4 + 0x20 != param_2);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00704174  FUN_00704174 =====

void FUN_00704174(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  byte local_68 [16];
  void *local_58;
  int local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 != param_2) {
    lVar4 = param_1 + 0x20;
    while (lVar2 = lVar4, lVar2 != param_2) {
      uVar3 = FUN_00703ce0(param_3,lVar2,param_1);
      if ((uVar3 & 1) != 0) {
        local_50 = 0;
        FUN_006df758(local_68,lVar2);
        do {
          lVar4 = param_1;
                    /* try { // try from 007041f4 to 00704213 has its CatchHandler @ 00704270 */
          FUN_006df758(lVar4 + 0x20,lVar4);
          uVar3 = FUN_00703ce0(param_3,local_68,lVar4 + -0x20);
          param_1 = lVar4 + -0x20;
        } while ((uVar3 & 1) != 0);
                    /* try { // try from 00704218 to 00704223 has its CatchHandler @ 0070426c */
        FUN_006df758(lVar4,local_68);
        if ((local_50 == 9) && ((local_68[0] & 1) != 0)) {
          free(local_58);
        }
      }
      param_1 = lVar2;
      lVar4 = lVar2 + 0x20;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007042b0  FUN_007042b0 =====

void FUN_007042b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  puVar6 = &local_60;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = param_3;
  local_58 = param_2;
  uStack_50 = param_1;
  uVar2 = FUN_00703ce0(param_4,param_2,param_1);
  uVar3 = FUN_00703ce0(param_4,param_3,param_2);
  if ((uVar2 & 1) == 0) {
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
      goto LAB_007043e0;
    }
    FUN_00703f44(&local_58,&local_60);
    uVar2 = FUN_00703ce0(param_4,local_58,uStack_50);
    if ((uVar2 & 1) == 0) goto LAB_007043a0;
    puVar5 = &uStack_50;
    puVar6 = &local_58;
  }
  else {
    if ((uVar3 & 1) != 0) {
      FUN_00703f44(&uStack_50,&local_60);
      uVar4 = 1;
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
      goto LAB_007043e0;
    }
    FUN_00703f44(&uStack_50,&local_58);
    uVar2 = FUN_00703ce0(param_4,local_60,local_58);
    if ((uVar2 & 1) == 0) {
LAB_007043a0:
      uVar4 = 1;
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
      goto LAB_007043e0;
    }
    puVar5 = &local_58;
  }
  FUN_00703f44(puVar5,puVar6);
  uVar4 = 2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_007043e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 007043e4  FUN_007043e4 =====

void FUN_007043e4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte local_58 [16];
  void *local_48;
  int local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = *param_1;
  uVar2 = *param_2;
  local_40 = 0;
  FUN_006df758(local_58,uVar3);
                    /* try { // try from 0070441c to 00704433 has its CatchHandler @ 00704474 */
  FUN_006df758(uVar3,uVar2);
  FUN_006df758(uVar2,local_58);
  if ((local_40 == 9) && ((local_58[0] & 1) != 0)) {
    free(local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007044b0  FUN_007044b0 =====

void FUN_007044b0(ulong param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_78;
  ulong local_70;
  byte local_68 [16];
  void *local_58;
  int local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = 0;
  local_78 = param_2;
  local_70 = param_1;
  FUN_006df758(local_68,param_1);
                    /* try { // try from 007044f8 to 00704503 has its CatchHandler @ 00704658 */
  uVar2 = FUN_00703ce0(param_3,local_68,param_2 - 0x20);
  uVar4 = param_1;
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1 + 0x20;
    do {
      uVar4 = uVar2;
      local_70 = uVar4;
      if (local_78 <= uVar4) break;
                    /* try { // try from 00704544 to 00704553 has its CatchHandler @ 00704660 */
      uVar3 = FUN_00703ce0(param_3,local_68,uVar4);
      uVar2 = uVar4 + 0x20;
    } while ((uVar3 & 1) == 0);
  }
  else {
    do {
      uVar4 = uVar4 + 0x20;
                    /* try { // try from 00704514 to 00704523 has its CatchHandler @ 0070466c */
      local_70 = uVar4;
      uVar2 = FUN_00703ce0(param_3,local_68,uVar4);
    } while ((uVar2 & 1) == 0);
  }
  uVar2 = local_78;
  if (uVar4 < local_78) {
    do {
      uVar2 = uVar2 - 0x20;
                    /* try { // try from 00704570 to 0070457f has its CatchHandler @ 00704668 */
      local_78 = uVar2;
      uVar3 = FUN_00703ce0(param_3,local_68,uVar2);
      uVar4 = local_70;
    } while ((uVar3 & 1) != 0);
  }
  if (uVar4 < uVar2) {
    do {
                    /* try { // try from 00704590 to 0070459b has its CatchHandler @ 00704664 */
      FUN_00703f44(&local_70,&local_78);
      do {
        local_70 = local_70 + 0x20;
                    /* try { // try from 007045a8 to 007045b3 has its CatchHandler @ 00704674 */
        uVar4 = FUN_00703ce0(param_3,local_68);
      } while ((uVar4 & 1) == 0);
      do {
        local_78 = local_78 - 0x20;
                    /* try { // try from 007045c4 to 007045cf has its CatchHandler @ 00704670 */
        uVar4 = FUN_00703ce0(param_3,local_68);
      } while ((uVar4 & 1) != 0);
      uVar4 = local_70;
    } while (local_70 < local_78);
  }
  uVar4 = uVar4 - 0x20;
  if (uVar4 != param_1) {
                    /* try { // try from 007045ec to 00704603 has its CatchHandler @ 0070465c */
    FUN_006df758(param_1,uVar4);
  }
  FUN_006df758(uVar4,local_68);
  uVar4 = local_70;
  if ((local_50 == 9) && ((local_68[0] & 1) != 0)) {
    free(local_58);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


// ===== 007046b4  FUN_007046b4 =====

long FUN_007046b4(long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong local_78;
  ulong local_70;
  byte local_68 [16];
  void *local_58;
  int local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = 0;
  local_78 = param_2;
  FUN_006df758(local_68,param_1);
  lVar5 = 0;
  do {
    local_70 = param_1 + lVar5 + 0x20;
                    /* try { // try from 00704704 to 0070470f has its CatchHandler @ 00704858 */
    uVar2 = FUN_00703ce0(param_3,local_70,local_68);
    lVar5 = lVar5 + 0x20;
  } while ((uVar2 & 1) != 0);
  uVar2 = local_78;
  if (lVar5 == 0x20) {
    uVar4 = param_1 + 0x20;
    do {
      if (uVar2 <= uVar4) break;
      uVar2 = uVar2 - 0x20;
                    /* try { // try from 00704760 to 0070476f has its CatchHandler @ 0070484c */
      local_78 = uVar2;
      uVar3 = FUN_00703ce0(param_3,uVar2,local_68);
    } while ((uVar3 & 1) == 0);
  }
  else {
    do {
      uVar2 = uVar2 - 0x20;
                    /* try { // try from 0070472c to 0070473b has its CatchHandler @ 00704854 */
      local_78 = uVar2;
      uVar3 = FUN_00703ce0(param_3,uVar2,local_68);
      uVar4 = local_70;
    } while ((uVar3 & 1) == 0);
  }
  if (uVar4 < local_78) {
    do {
                    /* try { // try from 00704784 to 0070478f has its CatchHandler @ 00704850 */
      FUN_00703f44(&local_70,&local_78);
      do {
        local_70 = local_70 + 0x20;
                    /* try { // try from 0070479c to 007047a7 has its CatchHandler @ 00704860 */
        uVar2 = FUN_00703ce0(param_3,local_70,local_68);
      } while ((uVar2 & 1) != 0);
      do {
        local_78 = local_78 - 0x20;
                    /* try { // try from 007047b8 to 007047c3 has its CatchHandler @ 0070485c */
        uVar2 = FUN_00703ce0(param_3,local_78,local_68);
      } while ((uVar2 & 1) == 0);
      uVar4 = local_70;
    } while (local_70 < local_78);
  }
  lVar5 = uVar4 - 0x20;
  if (lVar5 != param_1) {
                    /* try { // try from 007047e0 to 007047f7 has its CatchHandler @ 00704848 */
    FUN_006df758(param_1,lVar5);
  }
  FUN_006df758(lVar5,local_68);
  if ((local_50 == 9) && ((local_68[0] & 1) != 0)) {
    free(local_58);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar5;
}


// ===== 007048a0  FUN_007048a0 =====

void FUN_007048a0(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long local_78;
  long local_70;
  byte local_68 [16];
  void *local_58;
  int local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  uVar3 = param_2 - param_1 >> 5;
  local_48 = *(long *)(lVar1 + 0x28);
  local_78 = param_2;
  local_70 = param_1;
  if ((long)uVar3 < 3) {
    if (uVar3 < 2) goto LAB_00704a54;
    if (uVar3 == 2) {
      local_78 = param_2 + -0x20;
      uVar3 = FUN_00703ce0(param_3,local_78,param_1);
      if ((uVar3 & 1) != 0) {
        FUN_00703f44(&local_70,&local_78);
      }
      goto LAB_00704a54;
    }
  }
  else {
    if (uVar3 == 3) {
      FUN_007042b0(param_1,param_1 + 0x20,param_2 + -0x20,param_3);
      goto LAB_00704a54;
    }
    if (uVar3 == 4) {
      FUN_00704ac0(param_1,param_1 + 0x20,param_1 + 0x40,param_2 + -0x20,param_3);
      goto LAB_00704a54;
    }
    if (uVar3 == 5) {
      FUN_00704b98(param_1,param_1 + 0x20,param_1 + 0x40,param_1 + 0x60,param_2 + -0x20,param_3);
      goto LAB_00704a54;
    }
  }
  FUN_007042b0(param_1,param_1 + 0x20,param_1 + 0x40,param_3);
  if (param_1 + 0x60 != param_2) {
    iVar8 = 0;
    lVar7 = param_1 + 0x60;
    lVar6 = param_1 + 0x40;
    do {
      lVar4 = lVar7;
      uVar3 = FUN_00703ce0(param_3,lVar4,lVar6);
      lVar5 = local_78;
      if ((uVar3 & 1) != 0) {
        local_50 = 0;
        FUN_006df758(local_68,lVar4);
        do {
          lVar7 = lVar6;
                    /* try { // try from 007049c8 to 007049f3 has its CatchHandler @ 00704a84 */
          FUN_006df758(lVar7 + 0x20,lVar7);
          if (lVar7 == local_70) break;
          uVar3 = FUN_00703ce0(param_3,local_68,lVar7 + -0x20);
          lVar6 = lVar7 + -0x20;
        } while ((uVar3 & 1) != 0);
                    /* try { // try from 007049f8 to 00704a03 has its CatchHandler @ 00704a80 */
        FUN_006df758(lVar7,local_68);
        lVar5 = local_78;
        if ((local_50 == 9) && ((local_68[0] & 1) != 0)) {
          free(local_58);
        }
        iVar8 = iVar8 + 1;
        if (iVar8 == 8) {
          bVar2 = lVar4 + 0x20 == lVar5;
          goto LAB_00704a58;
        }
      }
      lVar7 = lVar4 + 0x20;
      lVar6 = lVar4;
    } while (lVar4 + 0x20 != lVar5);
  }
LAB_00704a54:
  bVar2 = true;
LAB_00704a58:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


// ===== 00704ac0  FUN_00704ac0 =====

void FUN_00704ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_68 = param_4;
  local_60 = param_3;
  local_58 = param_2;
  local_50 = param_1;
  FUN_007042b0();
  uVar2 = FUN_00703ce0(param_5,param_4,param_3);
  if ((uVar2 & 1) != 0) {
    FUN_00703f44(&local_60,&local_68);
    uVar2 = FUN_00703ce0(param_5,local_60,param_2);
    if ((uVar2 & 1) != 0) {
      FUN_00703f44(&local_58,&local_60);
      uVar2 = FUN_00703ce0(param_5,local_58,param_1);
      if ((uVar2 & 1) != 0) {
        FUN_00703f44(&local_50,&local_58);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00704b98  FUN_00704b98 =====

void FUN_00704b98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_80 = param_5;
  local_78 = param_4;
  local_70 = param_3;
  local_68 = param_2;
  local_60 = param_1;
  FUN_00704ac0();
  uVar2 = FUN_00703ce0(param_6,param_5,param_4);
  if ((uVar2 & 1) != 0) {
    FUN_00703f44(&local_78,&local_80);
    uVar2 = FUN_00703ce0(param_6,local_78,param_3);
    if ((uVar2 & 1) != 0) {
      FUN_00703f44(&local_70,&local_78);
      uVar2 = FUN_00703ce0(param_6,local_70,param_2);
      if ((uVar2 & 1) != 0) {
        FUN_00703f44(&local_68,&local_70);
        uVar2 = FUN_00703ce0(param_6,local_68,param_1);
        if ((uVar2 & 1) != 0) {
          FUN_00703f44(&local_60,&local_68);
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00704c9c  FUN_00704c9c =====

void FUN_00704c9c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  byte local_88 [16];
  void *local_78;
  int local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (1 < param_3) {
    uVar7 = param_3 - 2U >> 1;
    if (param_4 - param_1 >> 5 <= (long)uVar7) {
      lVar5 = param_4 - param_1 >> 4;
      uVar3 = lVar5 + 1;
      uVar4 = lVar5 + 2;
      lVar5 = param_1 + uVar3 * 0x20;
      lVar6 = lVar5;
      uVar8 = uVar3;
      if ((long)uVar4 < param_3) {
        uVar2 = FUN_00703ce0(param_2,lVar5,lVar5 + 0x20);
        lVar6 = lVar5 + 0x20;
        uVar8 = uVar4;
        if ((uVar2 & 1) == 0) {
          lVar6 = lVar5;
          uVar8 = uVar3;
        }
      }
      uVar3 = FUN_00703ce0(param_2,lVar6,param_4);
      if ((uVar3 & 1) == 0) {
        local_70 = 0;
        FUN_006df758(local_88,param_4);
        do {
          lVar5 = lVar6;
                    /* try { // try from 00704d50 to 00704db3 has its CatchHandler @ 00704e18 */
          FUN_006df758(param_4,lVar5);
          if ((long)uVar7 < (long)uVar8) break;
          uVar4 = uVar8 << 1 | 1;
          uVar3 = uVar8 * 2 + 2;
          lVar6 = param_1 + uVar4 * 0x20;
          uVar8 = uVar4;
          if ((long)uVar3 < param_3) {
            uVar4 = FUN_00703ce0(param_2,lVar6,lVar6 + 0x20);
            if ((uVar4 & 1) != 0) {
              lVar6 = lVar6 + 0x20;
              uVar8 = uVar3;
            }
          }
          uVar3 = FUN_00703ce0(param_2,lVar6,local_88);
          param_4 = lVar5;
        } while ((uVar3 & 1) == 0);
                    /* try { // try from 00704dbc to 00704dc7 has its CatchHandler @ 00704e14 */
        FUN_006df758(lVar5,local_88);
        if ((local_70 == 9) && ((local_88[0] & 1) != 0)) {
          free(local_78);
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00704e54  FUN_00704e54 =====

void FUN_00704e54(long param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  byte local_88 [16];
  void *local_78;
  int local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if (1 < param_4) {
    local_70 = 0;
    FUN_006df758(local_88,param_1);
    uVar9 = 0;
    lVar8 = param_1;
    do {
      lVar3 = lVar8 + uVar9 * 0x20;
      uVar4 = uVar9 << 1 | 1;
      uVar1 = uVar9 * 2 + 2;
      lVar2 = lVar3 + 0x20;
      lVar7 = lVar2;
      uVar9 = uVar4;
      if ((long)uVar1 < param_4) {
        lVar7 = lVar3 + 0x40;
                    /* try { // try from 00704edc to 00704f03 has its CatchHandler @ 00704fb0 */
        uVar6 = FUN_00703ce0(param_3,lVar2,lVar7);
        uVar9 = uVar1;
        if ((uVar6 & 1) == 0) {
          lVar7 = lVar2;
          uVar9 = uVar4;
        }
      }
      FUN_006df758(lVar8,lVar7);
      lVar8 = lVar7;
    } while ((long)uVar9 <= (long)(param_4 - 2U >> 1));
    param_2 = param_2 + -0x20;
    if (lVar7 == param_2) {
      FUN_006df758(lVar7,local_88);
    }
    else {
                    /* try { // try from 00704f20 to 00704f5f has its CatchHandler @ 00704fac */
      FUN_006df758(lVar7,param_2);
      FUN_006df758(param_2,local_88);
      FUN_00704fec(param_1,lVar7 + 0x20,param_3,(lVar7 + 0x20) - param_1 >> 5);
    }
    if ((local_70 == 9) && ((local_88[0] & 1) != 0)) {
      free(local_78);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00704fec  FUN_00704fec =====

void FUN_00704fec(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  byte local_68 [16];
  void *local_58;
  int local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (1 < param_4) {
    uVar6 = param_4 - 2U >> 1;
    lVar1 = param_1 + uVar6 * 0x20;
    uVar3 = FUN_00703ce0(param_3,lVar1);
    if ((uVar3 & 1) != 0) {
      local_50 = 0;
      FUN_006df758(local_68,param_2 + -0x20);
      lVar4 = param_2 + -0x20;
      do {
        lVar5 = lVar1;
                    /* try { // try from 00705058 to 0070507f has its CatchHandler @ 007050e0 */
        FUN_006df758(lVar4,lVar5);
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1 >> 1;
        lVar1 = param_1 + uVar6 * 0x20;
        uVar3 = FUN_00703ce0(param_3,lVar1,local_68);
        lVar4 = lVar5;
      } while ((uVar3 & 1) != 0);
                    /* try { // try from 0070508c to 00705097 has its CatchHandler @ 007050dc */
      FUN_006df758(lVar5,local_68);
      if ((local_50 == 9) && ((local_68[0] & 1) != 0)) {
        free(local_58);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0070511c  FUN_0070511c =====

void FUN_0070511c(undefined8 *param_1)

{
  long *plVar1;
  
                    /* try { // try from 00705140 to 00705143 has its CatchHandler @ 00705170 */
  (**(code **)(*(long *)param_1[1] + 0x70))((long *)param_1[1],*param_1,param_1[2]);
  plVar1 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00705160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 00705174  FUN_00705174 =====

void FUN_00705174(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulong param_4,
                 undefined8 *param_5,long param_6)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (1 < param_4) {
    if (param_4 == 2) {
      uVar1 = FUN_007054c4(param_3,param_2[-1],*param_1);
      if ((uVar1 & 1) != 0) {
        uVar7 = *param_1;
        *param_1 = param_2[-1];
        param_2[-1] = uVar7;
        return;
      }
    }
    else {
      if (0x80 < (long)param_4) {
        uVar1 = param_4 >> 1;
        puVar5 = param_1 + uVar1;
        lVar12 = param_4 - uVar1;
        if (param_6 < (long)param_4) {
          FUN_00705174();
          FUN_00705174(puVar5,param_2,param_3,lVar12,param_5,param_6);
          FUN_00705ae0(param_1,puVar5,param_2,param_3,uVar1,lVar12,param_5,param_6);
          return;
        }
        FUN_007057e0(param_1,puVar5,param_3,uVar1,param_5);
        puVar2 = param_5 + uVar1;
        FUN_007057e0(puVar5,param_2,param_3,lVar12,puVar2);
        puVar5 = param_5 + param_4;
        puVar6 = puVar2;
        puVar9 = param_1;
        do {
          puVar4 = puVar6;
          if (puVar4 == puVar5) {
            if (param_5 == puVar2) {
              return;
            }
            uVar1 = (long)puVar2 + (-8 - (long)param_5);
            if ((0x37 < uVar1) && (0x1f < (ulong)((long)param_1 - (long)param_5))) {
              lVar12 = 0;
              uVar1 = (uVar1 >> 3) + 1;
              uVar10 = uVar1 & 0x3ffffffffffffffc;
              uVar11 = uVar10;
              do {
                puVar5 = (undefined8 *)((long)param_5 + lVar12);
                puVar6 = (undefined8 *)((long)puVar9 + lVar12);
                uVar11 = uVar11 - 4;
                uVar7 = *puVar5;
                uVar16 = puVar5[3];
                uVar15 = puVar5[2];
                lVar12 = lVar12 + 0x20;
                puVar6[1] = puVar5[1];
                *puVar6 = uVar7;
                puVar6[3] = uVar16;
                puVar6[2] = uVar15;
              } while (uVar11 != 0);
              param_5 = param_5 + uVar10;
              puVar9 = puVar9 + uVar10;
              if (uVar1 == uVar10) {
                return;
              }
            }
            do {
              puVar5 = param_5 + 1;
              *puVar9 = *param_5;
              param_5 = puVar5;
              puVar9 = puVar9 + 1;
            } while (puVar5 != puVar2);
            return;
          }
          uVar1 = FUN_007054c4(param_3,*puVar4,*param_5);
          if ((uVar1 & 1) == 0) {
            lVar12 = 8;
            puVar3 = param_5;
            if ((uVar1 & 1) == 0) goto LAB_00705350;
LAB_007053ac:
            lVar8 = 8;
          }
          else {
            lVar12 = 0;
            puVar3 = puVar4;
            if ((uVar1 & 1) != 0) goto LAB_007053ac;
LAB_00705350:
            lVar8 = 0;
          }
          param_5 = (undefined8 *)((long)param_5 + lVar12);
          puVar6 = (undefined8 *)((long)puVar4 + lVar8);
          param_1 = param_1 + 1;
          puVar13 = puVar9 + 1;
          *puVar9 = *puVar3;
          puVar9 = puVar13;
          if (param_5 == puVar2) {
            if (puVar6 == puVar5) {
              return;
            }
            uVar1 = (long)puVar5 + (-8 - (lVar8 + (long)puVar4));
            if ((0x57 < uVar1) && (0x1f < (ulong)((long)param_1 - (lVar8 + (long)puVar4)))) {
              lVar12 = 0;
              uVar1 = (uVar1 >> 3) + 1;
              uVar10 = uVar1 & 0x3ffffffffffffffc;
              uVar11 = uVar10;
              do {
                puVar2 = (undefined8 *)((long)puVar4 + lVar12 + lVar8);
                puVar9 = (undefined8 *)((long)puVar13 + lVar12);
                uVar11 = uVar11 - 4;
                uVar7 = *puVar2;
                uVar16 = puVar2[3];
                uVar15 = puVar2[2];
                lVar12 = lVar12 + 0x20;
                puVar9[1] = puVar2[1];
                *puVar9 = uVar7;
                puVar9[3] = uVar16;
                puVar9[2] = uVar15;
              } while (uVar11 != 0);
              puVar6 = puVar6 + uVar10;
              puVar13 = puVar13 + uVar10;
              if (uVar1 == uVar10) {
                return;
              }
            }
            do {
              puVar2 = puVar6 + 1;
              *puVar13 = *puVar6;
              puVar6 = puVar2;
              puVar13 = puVar13 + 1;
            } while (puVar2 != puVar5);
            return;
          }
        } while( true );
      }
      if ((param_1 != param_2) && (param_1 + 1 != param_2)) {
        lVar12 = 0;
        puVar5 = param_1 + 1;
        puVar2 = param_1;
        do {
          puVar6 = puVar5;
          uVar1 = FUN_007054c4(param_3,*puVar6,*puVar2);
          if ((uVar1 & 1) != 0) {
            uVar7 = *puVar6;
            lVar8 = lVar12;
            do {
              lVar14 = lVar8;
              puVar5 = (undefined8 *)((long)param_1 + lVar14);
              puVar5[1] = *puVar5;
              puVar2 = param_1;
              if (lVar14 == 0) goto LAB_00705224;
              uVar1 = FUN_007054c4(param_3,uVar7,puVar5[-1]);
              lVar8 = lVar14 + -8;
            } while ((uVar1 & 1) != 0);
            puVar2 = (undefined8 *)((long)param_1 + lVar14);
LAB_00705224:
            *puVar2 = uVar7;
          }
          lVar12 = lVar12 + 8;
          puVar5 = puVar6 + 1;
          puVar2 = puVar6;
        } while (puVar6 + 1 != param_2);
      }
    }
  }
  return;
}


// ===== 007054c4  FUN_007054c4 =====

byte FUN_007054c4(long *param_1,long *param_2,undefined8 param_3)

{
  long *__n;
  void *__s2;
  void *__s1;
  long lVar1;
  long *plVar2;
  undefined1 *puVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 extraout_x1;
  long lVar17;
  undefined8 local_b0;
  long *local_a8;
  void *local_a0;
  undefined8 local_80;
  long *local_78;
  void *pvStack_70;
  long local_68;
  code *pcStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_2 + 0x80))(param_2);
  lVar17 = *param_1;
  plVar12 = *(long **)(lVar17 + 0x18);
  if ((plVar12 != (long *)0x0) &&
     (pcStack_60 = thunk_FUN_006af330, local_68 = lVar17, *plVar12 != -1)) {
    local_b0 = &pcStack_60;
    local_a8 = &local_68;
    local_80 = &local_b0;
    FUN_00710f84(plVar12,&local_80,FUN_00685640);
  }
  iVar10 = *(int *)(PTR_DAT_007a32d8 + (ulong)*(byte *)(lVar17 + 2) * 4);
  if (iVar10 < 4) {
    if (iVar10 == 1) {
      iVar10 = FUN_0067cb40(extraout_x1,param_2,*param_1);
      iVar11 = FUN_0067cb40(extraout_x1,param_3,*param_1);
      bVar5 = SBORROW4(iVar10,iVar11);
      bVar6 = iVar10 - iVar11 < 0;
    }
    else {
      if (iVar10 != 2) {
        if (iVar10 == 3) {
          uVar8 = FUN_0067dbc0(extraout_x1,param_2,*param_1);
          uVar9 = FUN_0067dbc0(extraout_x1,param_3,*param_1);
          bVar4 = uVar8 < uVar9;
          goto LAB_0070576c;
        }
        goto LAB_00705658;
      }
      lVar17 = FUN_0067d380(extraout_x1,param_2,*param_1);
      lVar16 = FUN_0067d380(extraout_x1,param_3,*param_1);
      bVar5 = SBORROW8(lVar17,lVar16);
      bVar6 = lVar17 - lVar16 < 0;
    }
    bVar4 = bVar6 != bVar5;
  }
  else {
    if (iVar10 == 4) {
      uVar13 = FUN_0067e400(extraout_x1,param_2,*param_1);
      uVar14 = FUN_0067e400(extraout_x1,param_3,*param_1);
      bVar4 = uVar13 < uVar14;
      goto LAB_0070576c;
    }
    if (iVar10 == 9) {
      FUN_00680534(&local_b0,extraout_x1,param_2,*param_1);
                    /* try { // try from 007056e8 to 007056fb has its CatchHandler @ 007057a0 */
      FUN_00680534(&local_80,extraout_x1,param_3,*param_1);
      puVar3 = (undefined1 *)local_80;
      bVar7 = (byte)local_b0;
      bVar6 = ((ulong)local_80 & 1) == 0;
      __s2 = pvStack_70;
      if (bVar6) {
        __s2 = (void *)((long)&local_80 + 1);
      }
      plVar12 = (long *)((ulong)local_80 >> 1 & 0x7f);
      if (!bVar6) {
        plVar12 = local_78;
      }
      __s1 = local_a0;
      plVar2 = local_a8;
      if (((ulong)local_b0 & 1) == 0) {
        __s1 = (void *)((long)&local_b0 + 1);
        plVar2 = (long *)(ulong)((byte)local_b0 >> 1);
      }
      __n = plVar12;
      if (plVar2 <= plVar12) {
        __n = plVar2;
      }
      iVar10 = memcmp(__s1,__s2,(size_t)__n);
      bVar4 = plVar2 < plVar12;
      if (iVar10 != 0) {
        bVar4 = iVar10 < 0;
      }
      if (((ulong)puVar3 & 1) != 0) {
        free(pvStack_70);
        bVar7 = (byte)local_b0;
      }
      if ((bVar7 & 1) != 0) {
        free(local_a0);
      }
      goto LAB_0070576c;
    }
    if (iVar10 == 7) {
      bVar7 = FUN_0067fce8(extraout_x1,param_2,*param_1);
      bVar4 = FUN_0067fce8(extraout_x1,param_3,*param_1);
      bVar4 = bVar4 & (bVar7 ^ 1);
      goto LAB_0070576c;
    }
LAB_00705658:
    FUN_00675e64(&local_b0,2,
                 "/var/lib/jenkins/.conan2/p/b/proto14fe27540a49d/b/src/src/google/protobuf/dynamic_message.h"
                 ,0xd4);
                    /* try { // try from 00705670 to 00705683 has its CatchHandler @ 007057b8 */
    uVar15 = FUN_00675a58(&local_b0,"Invalid key for map field.");
                    /* try { // try from 00705684 to 0070568b has its CatchHandler @ 0070579c */
    FUN_00675ac0(&local_80,uVar15);
    FUN_00675e7c(&local_b0);
    bVar4 = 1;
  }
LAB_0070576c:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return bVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007057e0  FUN_007057e0 =====

void FUN_007057e0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulong param_4,
                 undefined8 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (param_4 == 0) {
    return;
  }
  puVar7 = param_5;
  puVar11 = param_1;
  if (param_4 != 1) {
    if (param_4 != 2) {
      if ((long)param_4 < 9) {
        if (param_1 == param_2) {
          return;
        }
        *param_5 = *param_1;
        if (param_1 + 1 == param_2) {
          return;
        }
        lVar12 = 0;
        puVar11 = param_1 + 1;
        do {
          uVar1 = FUN_007054c4(param_3,*puVar11,*puVar7);
          puVar6 = puVar7 + 1;
          if (((uVar1 & 1) != 0) &&
             (puVar7[1] = *puVar7, puVar6 = param_5, lVar8 = lVar12, puVar7 != param_5)) {
            do {
              puVar6 = (undefined8 *)((long)param_5 + lVar8);
              uVar1 = FUN_007054c4(param_3,*puVar11,puVar6[-1]);
              if ((uVar1 & 1) == 0) break;
              lVar8 = lVar8 + -8;
              *puVar6 = puVar6[-1];
              puVar6 = param_5;
            } while (lVar8 != 0);
          }
          puVar5 = puVar11 + 1;
          lVar12 = lVar12 + 8;
          *puVar6 = *puVar11;
          puVar11 = puVar5;
          puVar7 = puVar7 + 1;
          if (puVar5 == param_2) {
            return;
          }
        } while( true );
      }
      uVar1 = param_4 >> 1;
      puVar11 = param_1 + uVar1;
      FUN_00705174(param_1,puVar11,param_3,uVar1,param_5,uVar1);
      FUN_00705174(puVar11,param_2,param_3,param_4 - uVar1,param_5 + uVar1,param_4 - uVar1);
      puVar6 = puVar11;
      puVar5 = param_5;
      puVar7 = param_1;
      do {
        puVar4 = puVar6;
        if (puVar4 == param_2) {
          if (puVar7 == puVar11) {
            return;
          }
          uVar1 = (long)param_1 + (uVar1 * 8 - (long)puVar7) + -8;
          if ((0x37 < uVar1) && (0x1f < (ulong)((long)param_5 - (long)puVar7))) {
            lVar12 = 0;
            uVar1 = (uVar1 >> 3) + 1;
            uVar9 = uVar1 & 0x3ffffffffffffffc;
            uVar2 = uVar9;
            do {
              puVar6 = (undefined8 *)((long)puVar7 + lVar12);
              puVar4 = (undefined8 *)((long)puVar5 + lVar12);
              uVar2 = uVar2 - 4;
              uVar13 = *puVar6;
              uVar15 = puVar6[3];
              uVar14 = puVar6[2];
              lVar12 = lVar12 + 0x20;
              puVar4[1] = puVar6[1];
              *puVar4 = uVar13;
              puVar4[3] = uVar15;
              puVar4[2] = uVar14;
            } while (uVar2 != 0);
            puVar5 = puVar5 + uVar9;
            puVar7 = puVar7 + uVar9;
            if (uVar1 == uVar9) {
              return;
            }
          }
          do {
            puVar6 = puVar7 + 1;
            *puVar5 = *puVar7;
            puVar5 = puVar5 + 1;
            puVar7 = puVar6;
          } while (puVar6 != puVar11);
          return;
        }
        uVar2 = FUN_007054c4(param_3,*puVar4,*puVar7);
        if ((uVar2 & 1) == 0) {
          lVar12 = 0;
          puVar3 = puVar7;
          if ((uVar2 & 1) != 0) goto LAB_007059c0;
LAB_00705964:
          lVar8 = 8;
        }
        else {
          lVar12 = 8;
          puVar3 = puVar4;
          if ((uVar2 & 1) == 0) goto LAB_00705964;
LAB_007059c0:
          lVar8 = 0;
        }
        puVar7 = (undefined8 *)((long)puVar7 + lVar8);
        puVar6 = (undefined8 *)((long)puVar4 + lVar12);
        param_5 = param_5 + 1;
        puVar10 = puVar5 + 1;
        *puVar5 = *puVar3;
        puVar5 = puVar10;
        if (puVar7 == puVar11) {
          if (puVar6 == param_2) {
            return;
          }
          uVar1 = (long)param_2 + (-(long)puVar4 - lVar12) + -8;
          if ((0x57 < uVar1) && (0x1f < (ulong)((long)param_5 - (lVar12 + (long)puVar4)))) {
            lVar8 = 0;
            uVar1 = (uVar1 >> 3) + 1;
            uVar9 = uVar1 & 0x3ffffffffffffffc;
            uVar2 = uVar9;
            do {
              puVar11 = (undefined8 *)((long)puVar4 + lVar8 + lVar12);
              puVar7 = (undefined8 *)((long)puVar10 + lVar8);
              uVar2 = uVar2 - 4;
              uVar13 = *puVar11;
              uVar15 = puVar11[3];
              uVar14 = puVar11[2];
              lVar8 = lVar8 + 0x20;
              puVar7[1] = puVar11[1];
              *puVar7 = uVar13;
              puVar7[3] = uVar15;
              puVar7[2] = uVar14;
            } while (uVar2 != 0);
            puVar6 = puVar6 + uVar9;
            puVar10 = puVar10 + uVar9;
            if (uVar1 == uVar9) {
              return;
            }
          }
          do {
            puVar11 = puVar6 + 1;
            *puVar10 = *puVar6;
            puVar6 = puVar11;
            puVar10 = puVar10 + 1;
          } while (puVar11 != param_2);
          return;
        }
      } while( true );
    }
    param_2 = param_2 + -1;
    uVar1 = FUN_007054c4(param_3,*param_2,*param_1);
    if ((uVar1 & 1) == 0) {
      puVar11 = param_2;
      param_2 = param_1;
    }
    puVar7 = param_5 + 1;
    *param_5 = *param_2;
  }
  *puVar7 = *puVar11;
  return;
}


// ===== 00705ae0  FUN_00705ae0 =====

void FUN_00705ae0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 long param_5,long param_6,undefined8 *param_7,long param_8)

{
  size_t __n;
  long lVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_78 = param_3;
  if (param_6 != 0) {
LAB_00705b30:
    do {
      if ((param_6 <= param_8) || (param_5 <= param_8)) {
        if (param_6 < param_5) {
          if ((long)local_78 - (long)param_2 != 0) {
            uVar3 = ((long)local_78 - (long)param_2) - 8;
            puVar6 = param_2;
            puVar13 = param_7;
            puVar15 = local_78;
            if ((uVar3 < 0x18) || ((ulong)((long)param_7 - (long)param_2) < 0x20))
            goto LAB_00706060;
            puVar6 = param_2 + 2;
            puVar13 = param_7 + 2;
            uVar3 = (uVar3 >> 3) + 1;
            uVar4 = uVar3 & 0x3ffffffffffffffc;
            puVar7 = param_7 + uVar4;
            uVar19 = uVar4;
            do {
              puVar10 = puVar6 + -1;
              uVar9 = puVar6[-2];
              uVar21 = puVar6[1];
              uVar20 = *puVar6;
              uVar19 = uVar19 - 4;
              puVar6 = puVar6 + 4;
              puVar13[-1] = *puVar10;
              puVar13[-2] = uVar9;
              puVar13[1] = uVar21;
              *puVar13 = uVar20;
              puVar13 = puVar13 + 4;
            } while (uVar19 != 0);
            puVar6 = param_2 + uVar4;
            puVar13 = puVar7;
            if (uVar3 != uVar4) {
LAB_00706060:
              do {
                puVar10 = puVar6 + 1;
                puVar7 = puVar13 + 1;
                *puVar13 = *puVar6;
                puVar6 = puVar10;
                puVar13 = puVar7;
              } while (puVar10 != local_78);
            }
            do {
              if (param_2 == param_1) {
                uVar3 = (long)puVar7 + (-8 - (long)param_7);
                if ((0x47 < uVar3) && (0x1f < (ulong)((long)puVar7 - (long)puVar15))) {
                  uVar3 = (uVar3 >> 3) + 1;
                  uVar4 = uVar3 & 0x3ffffffffffffffc;
                  lVar17 = 0;
                  uVar19 = uVar4;
                  do {
                    uVar19 = uVar19 - 4;
                    uVar21 = *(undefined8 *)((long)puVar7 + lVar17 + -0x20);
                    uVar20 = *(undefined8 *)((long)puVar7 + lVar17 + -8);
                    uVar9 = *(undefined8 *)((long)puVar7 + lVar17 + -0x10);
                    *(undefined8 *)((long)local_78 + lVar17 + -0x18) =
                         *(undefined8 *)((long)puVar7 + lVar17 + -0x18);
                    *(undefined8 *)((long)local_78 + lVar17 + -0x20) = uVar21;
                    *(undefined8 *)((long)local_78 + lVar17 + -8) = uVar20;
                    *(undefined8 *)((long)local_78 + lVar17 + -0x10) = uVar9;
                    lVar17 = lVar17 + -0x20;
                  } while (uVar19 != 0);
                  puVar7 = puVar7 + -uVar4;
                  local_78 = local_78 + -uVar4;
                  if (uVar3 == uVar4) break;
                }
                do {
                  puVar7 = puVar7 + -1;
                  local_78[-1] = *puVar7;
                  local_78 = local_78 + -1;
                } while (puVar7 != param_7);
                break;
              }
              puVar6 = param_2 + -1;
              puVar10 = puVar7 + -1;
              uVar3 = FUN_007054c4(param_4,*puVar10,*puVar6);
              puVar13 = puVar6;
              if ((uVar3 & 1) == 0) {
                puVar6 = param_2;
                puVar13 = puVar10;
                puVar7 = puVar10;
              }
              local_78 = local_78 + -1;
              *local_78 = *puVar13;
              puVar15 = puVar15 + -1;
              param_2 = puVar6;
            } while (puVar7 != param_7);
          }
        }
        else if (param_1 != param_2) {
          uVar3 = (long)param_2 + (-8 - (long)param_1);
          puVar6 = param_1;
          puVar13 = param_7;
          if ((uVar3 < 0x18) || ((ulong)((long)param_7 - (long)param_1) < 0x20)) goto LAB_00705fb8;
          puVar6 = param_1 + 2;
          puVar13 = param_7 + 2;
          uVar3 = (uVar3 >> 3) + 1;
          uVar4 = uVar3 & 0x3ffffffffffffffc;
          puVar15 = param_7 + uVar4;
          uVar19 = uVar4;
          do {
            puVar7 = puVar6 + -1;
            uVar9 = puVar6[-2];
            uVar21 = puVar6[1];
            uVar20 = *puVar6;
            uVar19 = uVar19 - 4;
            puVar6 = puVar6 + 4;
            puVar13[-1] = *puVar7;
            puVar13[-2] = uVar9;
            puVar13[1] = uVar21;
            *puVar13 = uVar20;
            puVar13 = puVar13 + 4;
          } while (uVar19 != 0);
          puVar6 = param_1 + uVar4;
          puVar13 = puVar15;
          if (uVar3 != uVar4) {
LAB_00705fb8:
            do {
              puVar7 = puVar6 + 1;
              puVar15 = puVar13 + 1;
              *puVar13 = *puVar6;
              puVar6 = puVar7;
              puVar13 = puVar15;
            } while (puVar7 != param_2);
          }
          do {
            if (param_2 == local_78) {
              memmove(param_1,param_7,(long)puVar15 - (long)param_7);
              break;
            }
            uVar3 = FUN_007054c4(param_4,*param_2,*param_7);
            if ((uVar3 & 1) == 0) {
              lVar17 = 0;
              puVar6 = param_7;
              if ((uVar3 & 1) != 0) goto LAB_00706024;
LAB_00705fcc:
              lVar16 = 8;
            }
            else {
              lVar17 = 8;
              puVar6 = param_2;
              if ((uVar3 & 1) == 0) goto LAB_00705fcc;
LAB_00706024:
              lVar16 = 0;
            }
            param_7 = (undefined8 *)((long)param_7 + lVar16);
            param_2 = (undefined8 *)((long)param_2 + lVar17);
            *param_1 = *puVar6;
            param_1 = param_1 + 1;
          } while (param_7 != puVar15);
        }
        break;
      }
      if (param_5 == 0) break;
      lVar16 = 0;
      lVar17 = -param_5;
      while (uVar3 = FUN_007054c4(param_4,*param_2,*(undefined8 *)((long)param_1 + lVar16)),
            (uVar3 & 1) == 0) {
        bVar2 = lVar17 == -1;
        lVar17 = lVar17 + 1;
        lVar16 = lVar16 + 8;
        if (bVar2) goto LAB_00706150;
      }
      param_5 = -lVar17;
      if (param_5 < param_6) {
        lVar5 = param_6;
        if (param_6 < 0) {
          lVar5 = param_6 + 1;
        }
        lVar5 = lVar5 >> 1;
        lVar18 = (long)param_2 + (-lVar16 - (long)param_1);
        puVar13 = param_2 + lVar5;
        puVar6 = param_2;
        if (lVar18 != 0) {
          uVar3 = lVar18 >> 3;
          puVar6 = (undefined8 *)((long)param_1 + lVar16);
          do {
            uVar19 = uVar3 >> 1;
            uVar4 = FUN_007054c4(param_4,*puVar13,puVar6[uVar19]);
            if ((uVar4 & 1) == 0) {
              puVar6 = puVar6 + uVar19 + 1;
              uVar19 = uVar3 + ~uVar19;
            }
            uVar3 = uVar19;
          } while (uVar3 != 0);
        }
        param_5 = (long)puVar6 + (-lVar16 - (long)param_1) >> 3;
      }
      else {
        if (lVar17 == -1) {
          uVar9 = *(undefined8 *)((long)param_1 + lVar16);
          *(undefined8 *)((long)param_1 + lVar16) = *param_2;
          *param_2 = uVar9;
          break;
        }
        local_70 = *param_4;
        if (0 < lVar17) {
          param_5 = param_5 + 1;
        }
        param_5 = param_5 >> 1;
        puVar6 = (undefined8 *)((long)param_1 + lVar16 + param_5 * 8);
        puVar13 = param_2;
        if (param_2 != local_78) {
          uVar3 = (long)local_78 - (long)param_2 >> 3;
          do {
            uVar19 = uVar3 >> 1;
            uVar4 = FUN_007054c4(&local_70,puVar13[uVar19],*puVar6);
            if ((uVar4 & 1) != 0) {
              puVar13 = puVar13 + uVar19 + 1;
              uVar19 = uVar3 + ~uVar19;
            }
            uVar3 = uVar19;
          } while (uVar3 != 0);
        }
        lVar5 = (long)puVar13 - (long)param_2 >> 3;
      }
      puVar15 = puVar13;
      if ((puVar6 != param_2) && (__n = (long)puVar13 - (long)param_2, puVar15 = puVar6, __n != 0))
      {
        puVar7 = puVar6 + 1;
        if (puVar7 == param_2) {
          uVar9 = *puVar6;
          memmove(puVar6,param_2,__n);
          *(undefined8 *)((long)puVar6 + __n) = uVar9;
          puVar15 = (undefined8 *)((long)puVar6 + __n);
        }
        else {
          puVar10 = param_2 + 1;
          if (puVar10 == puVar13) {
            puVar7 = puVar13 + -1;
            uVar9 = *puVar7;
            puVar15 = (undefined8 *)((long)puVar13 - ((long)puVar7 - (long)puVar6));
            if ((long)puVar7 - (long)puVar6 != 0) {
              memmove(puVar15,puVar6,(long)puVar7 - (long)puVar6);
            }
            *puVar6 = uVar9;
          }
          else {
            lVar8 = (long)param_2 - (long)puVar6 >> 3;
            lVar18 = lVar8;
            lVar12 = (long)__n >> 3;
            if (lVar8 == (long)__n >> 3) {
              do {
                uVar9 = puVar7[-1];
                puVar7[-1] = puVar10[-1];
                puVar10[-1] = uVar9;
                puVar15 = param_2;
                if (puVar7 == param_2) break;
                bVar2 = puVar10 != puVar13;
                puVar10 = puVar10 + 1;
                puVar7 = puVar7 + 1;
              } while (bVar2);
            }
            else {
              do {
                lVar11 = lVar12;
                lVar12 = 0;
                if (lVar11 != 0) {
                  lVar12 = lVar18 / lVar11;
                }
                lVar12 = lVar18 - lVar12 * lVar11;
                lVar18 = lVar11;
              } while (lVar12 != 0);
              puVar15 = puVar6 + lVar11;
              do {
                puVar15 = puVar15 + -1;
                uVar9 = *puVar15;
                puVar10 = puVar15;
                puVar7 = (undefined8 *)((long)puVar15 + ((long)param_2 - (long)puVar6));
                do {
                  puVar14 = puVar7;
                  lVar18 = (long)puVar13 - (long)puVar14 >> 3;
                  *puVar10 = *puVar14;
                  puVar7 = puVar14 + lVar8;
                  if (lVar18 <= lVar8) {
                    puVar7 = puVar6 + (lVar8 - lVar18);
                  }
                  puVar10 = puVar14;
                } while (puVar7 != puVar15);
                *puVar14 = uVar9;
              } while (puVar15 != puVar6);
              puVar15 = (undefined8 *)((long)puVar6 + __n);
            }
          }
        }
      }
      lVar18 = param_6 - lVar5;
      if ((param_6 - (param_5 + lVar5)) - lVar17 <= param_5 + lVar5) {
        FUN_00705ae0(puVar15,puVar13,local_78,param_4,-lVar17 - param_5,lVar18,param_7,param_8);
        param_6 = lVar5;
        param_1 = (undefined8 *)((long)param_1 + lVar16);
        param_2 = puVar6;
        local_78 = puVar15;
        if (lVar5 == 0) break;
        goto LAB_00705b30;
      }
      FUN_00705ae0((long)param_1 + lVar16,puVar6,puVar15,param_4,param_5,lVar5,param_7,param_8);
      param_6 = lVar18;
      param_1 = puVar15;
      param_2 = puVar13;
      param_5 = -lVar17 - param_5;
    } while (lVar18 != 0);
  }
LAB_00706150:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00706184  FUN_00706184 =====

byte * FUN_00706184(byte *param_1,byte *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  undefined1 auVar5 [12];
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  undefined1 auVar10 [16];
  
  if (param_1 < param_2) {
    do {
      uVar8 = (ulong)(char)*param_1;
      auVar10._8_8_ = uVar8;
      auVar10._0_8_ = param_1 + 1;
      auVar5 = auVar10._0_12_;
      if ((long)uVar8 < 0) {
        bVar3 = param_1[1];
        iVar4 = (uint)bVar3 * 0x80 + (uint)*param_1 + -0x80;
        if ((char)bVar3 < '\0') {
          auVar10 = FUN_0066fd14(param_1,iVar4);
          auVar5 = auVar10._0_12_;
          if (auVar10._0_8_ == 0) {
            return (byte *)0x0;
          }
          uVar6 = FUN_0068f648(param_3[1]);
          lVar7 = FUN_0068cf8c(uVar6,auVar10._8_8_ & 0xffffffff);
          goto joined_r0x0070625c;
        }
        auVar5._8_4_ = iVar4;
        auVar5._0_8_ = param_1 + 2;
        auVar10._8_4_ = iVar4;
        auVar10._0_8_ = param_1 + 2;
        auVar10._12_4_ = 0;
        uVar6 = FUN_0068f648(param_3[1]);
        lVar7 = FUN_0068cf8c(uVar6,iVar4);
        if (lVar7 == 0) goto LAB_007061b4;
LAB_00706260:
        param_1 = auVar5._0_8_;
        puVar9 = (uint *)*param_3;
        uVar1 = *puVar9;
        if (uVar1 == puVar9[1]) {
          FUN_00673968(puVar9,uVar1 + 1);
          *(int *)(*(long *)(puVar9 + 2) + (ulong)uVar1 * 4) = auVar5._8_4_;
          *puVar9 = uVar1 + 1;
        }
        else {
          *(int *)(*(long *)(puVar9 + 2) + (ulong)uVar1 * 4) = auVar5._8_4_;
          *puVar9 = uVar1 + 1;
        }
      }
      else {
        uVar6 = FUN_0068f648(param_3[1]);
        lVar7 = FUN_0068cf8c(uVar6,uVar8 & 0xffffffff);
joined_r0x0070625c:
        if (lVar7 != 0) goto LAB_00706260;
LAB_007061b4:
        param_1 = auVar10._0_8_;
        uVar2 = *(undefined4 *)(param_3[1] + 4);
        uVar6 = FUN_00679604(param_3[2],param_3[3]);
        FUN_006faf8c(uVar6,uVar2,auVar10._8_8_);
      }
    } while (param_1 < param_2);
  }
  return param_1;
}


// ===== 007062c0  FUN_007062c0 =====

long FUN_007062c0(long *param_1,void *param_2,int param_3,void *param_4)

{
  long lVar1;
  size_t __n;
  
  __n = (size_t)param_3;
  if ((long)__n <= *param_1 - (long)param_4) {
    memcpy(param_4,param_2,__n);
    return (long)param_4 + __n;
  }
  lVar1 = FUN_0066d454();
  return lVar1;
}


// ===== 00706310  FUN_00706310 =====

long FUN_00706310(long *param_1,void *param_2,int param_3,void *param_4)

{
  long lVar1;
  size_t __n;
  
  __n = (size_t)param_3;
  if ((long)__n <= *param_1 - (long)param_4) {
    memcpy(param_4,param_2,__n);
    return (long)param_4 + __n;
  }
  lVar1 = FUN_0066d454();
  return lVar1;
}


// ===== 00706360  FUN_00706360 =====

long FUN_00706360(long *param_1,void *param_2,int param_3,void *param_4)

{
  long lVar1;
  size_t __n;
  
  __n = (size_t)param_3;
  if ((long)__n <= *param_1 - (long)param_4) {
    memcpy(param_4,param_2,__n);
    return (long)param_4 + __n;
  }
  lVar1 = FUN_0066d454();
  return lVar1;
}


// ===== 007063b0  FUN_007063b0 =====

int FUN_007063b0(uint *param_1,uint *param_2,code *param_3,code *param_4,undefined8 param_5,
                undefined8 param_6,undefined8 param_7)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar10 = FUN_00706cc0();
  puVar4 = PTR_FUN_007a1f48;
  *(undefined4 *)(lVar10 + 0x128) = 1;
  *(undefined8 *)(lVar10 + 0x158) = 0;
  *(undefined8 *)(lVar10 + 0x160) = 0;
  *(undefined8 *)(lVar10 + 0x168) = 0;
  puVar1 = param_2;
  if ((param_3 != (code *)puVar4 && param_3 != thunk_FUN_007073d8) && param_3 != FUN_00707470) {
    puVar1 = (uint *)0x0;
  }
  *(uint **)(lVar10 + 0x140) = puVar1;
  if (puVar1 == (uint *)0x0) {
    *(undefined8 *)(lVar10 + 0x148) = 0;
  }
  else {
    uVar5 = *puVar1;
    if ((uVar5 & 1) == 0) {
      if (0xff < uVar5) {
        bVar3 = false;
        *(undefined8 *)(lVar10 + 0x148) = *(undefined8 *)PTR_PTR_DAT_007a3788;
        goto LAB_0070648c;
      }
      FUN_00708cb4("mu not held on entry to nsync_cv_wait_with_deadline()\n");
    }
    else {
      if (0xff < uVar5) {
        FUN_00708cb4(
                    "mu held in reader and writer mode simultaneously on entry to nsync_cv_wait_with_deadline()\n"
                    );
      }
      *(undefined **)(lVar10 + 0x148) = PTR_DAT_007aaa78;
    }
  }
  bVar3 = true;
LAB_0070648c:
  uVar5 = FUN_00706bec(param_1,1,3,0);
  uVar11 = FUN_0070715c(*(undefined8 *)(param_1 + 2),lVar10 + 0x110);
  *(undefined8 *)(param_1 + 2) = uVar11;
  iVar2 = *(int *)(lVar10 + 0x150);
  *param_1 = uVar5 | 2;
  if (bVar3) {
    (*param_4)(param_2);
    iVar8 = (int)*(undefined8 *)(lVar10 + 0x128);
  }
  else {
    FUN_00707cb4(puVar1);
    iVar8 = (int)*(undefined8 *)(lVar10 + 0x128);
  }
  if (iVar8 == 0) {
    iVar8 = 0;
  }
  else {
    iVar6 = 0;
    uVar9 = 0;
    iVar8 = 0;
    do {
      if (((iVar6 != 0) || (iVar6 = FUN_00707d50(lVar10,param_5,param_6,param_7), iVar6 != 0)) &&
         (*(int *)(lVar10 + 0x128) != 0)) {
        uVar5 = FUN_00706bec(param_1,1,1,0);
        if ((*(int *)(lVar10 + 0x128) != 0) && (iVar2 == *(int *)(lVar10 + 0x150))) {
          uVar11 = FUN_007070d8(*(undefined8 *)(param_1 + 2),lVar10 + 0x110);
          *(undefined8 *)(param_1 + 2) = uVar11;
          do {
            iVar8 = *(int *)(lVar10 + 0x150);
            iVar7 = FUN_00755a40(iVar8,iVar8 + 1,lVar10 + 0x150);
          } while (iVar7 != iVar8);
          iVar8 = FUN_007070cc(*(undefined8 *)(param_1 + 2));
          if (iVar8 != 0) {
            uVar5 = uVar5 & 0xfffffffd;
          }
          *(undefined4 *)(lVar10 + 0x128) = 0;
          iVar8 = iVar6;
        }
        *param_1 = uVar5;
      }
      if (*(int *)(lVar10 + 0x128) != 0) {
        uVar9 = FUN_00706b80(uVar9);
      }
    } while ((int)*(undefined8 *)(lVar10 + 0x128) != 0);
  }
  if ((puVar1 == (uint *)0x0) || (*(long *)(lVar10 + 0x140) != 0)) {
    FUN_00706fb0(lVar10);
    if (bVar3) {
      (*param_3)(param_2);
    }
    else {
      FUN_00707470(puVar1);
    }
  }
  else {
    FUN_007071c0(puVar1,lVar10,8,*(undefined8 *)(lVar10 + 0x148));
    FUN_00706fb0(lVar10);
  }
  return iVar8;
}


// ===== 00706670  thunk_FUN_007073d8 =====

void thunk_FUN_007073d8(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  iVar2 = FUN_00755a80(0,1,param_1);
  if ((iVar2 != 0) &&
     ((uVar1 = *param_1, (uVar1 & 0xffffff41) != 0 ||
      (uVar3 = FUN_00755a80(uVar1,uVar1 & 0x9e | 1,param_1), uVar3 != uVar1)))) {
    uVar4 = FUN_00706cc0();
    FUN_007071c0(param_1,uVar4,0,*(undefined8 *)PTR_PTR_DAT_007a3780);
    FUN_00706fb0(uVar4);
    return;
  }
  return;
}


// ===== 00706674  FUN_00706674 =====

void FUN_00706674(uint *param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  long lVar12;
  long lVar13;
  
  if (((uint)*(undefined8 *)param_1 >> 1 & 1) != 0) {
    uVar5 = FUN_00706bec(param_1,1,1,0);
    iVar6 = FUN_007070cc(*(undefined8 *)(param_1 + 2));
    if (iVar6 == 0) {
      lVar8 = FUN_00707198(*(undefined8 *)(param_1 + 2));
      uVar10 = FUN_007070d8(*(undefined8 *)(param_1 + 2),lVar8);
      lVar12 = *(long *)(lVar8 + 0x10);
      *(undefined8 *)(param_1 + 2) = uVar10;
      if ((*(byte *)(lVar12 + 0x30) & 1) != 0) {
        do {
          iVar6 = *(int *)(*(long *)(lVar8 + 0x10) + 0x48);
          iVar7 = FUN_00755a40(iVar6,iVar6 + 1,*(long *)(lVar8 + 0x10) + 0x48);
        } while (iVar7 != iVar6);
      }
      uVar10 = FUN_0070715c(0,lVar8);
      puVar4 = PTR_PTR_DAT_007a3788;
      if (((*(byte *)(lVar12 + 0x30) & 1) == 0) ||
         (*(long *)(*(long *)(lVar8 + 0x10) + 0x40) != *(long *)PTR_PTR_DAT_007a3788)) {
        uVar11 = 0;
      }
      else {
        lVar8 = FUN_00707198(*(undefined8 *)(param_1 + 2));
        if (lVar8 == 0) {
          uVar11 = 1;
        }
        else {
          bVar2 = false;
          uVar11 = 1;
          do {
            lVar13 = *(long *)(lVar8 + 0x10);
            lVar12 = FUN_007071a8(*(undefined8 *)(param_1 + 2),lVar8);
            if (((*(byte *)(lVar13 + 0x30) & 1) == 0) ||
               (*(long *)(*(long *)(lVar8 + 0x10) + 0x40) != *(long *)puVar4)) {
              bVar3 = !bVar2;
              bVar2 = true;
              if (bVar3) {
                uVar11 = 0;
                uVar9 = FUN_007070d8(*(undefined8 *)(param_1 + 2),lVar8);
                *(undefined8 *)(param_1 + 2) = uVar9;
                bVar1 = *(byte *)(lVar13 + 0x30);
                goto joined_r0x00706848;
              }
            }
            else {
              uVar9 = FUN_007070d8(*(undefined8 *)(param_1 + 2),lVar8);
              *(undefined8 *)(param_1 + 2) = uVar9;
              bVar1 = *(byte *)(lVar13 + 0x30);
joined_r0x00706848:
              if ((bVar1 & 1) != 0) {
                do {
                  iVar6 = *(int *)(*(long *)(lVar8 + 0x10) + 0x48);
                  iVar7 = FUN_00755a40(iVar6,iVar6 + 1,*(long *)(lVar8 + 0x10) + 0x48);
                } while (iVar7 != iVar6);
              }
              uVar10 = FUN_0070715c(uVar10,lVar8);
            }
            lVar8 = lVar12;
          } while (lVar12 != 0);
        }
      }
      iVar6 = FUN_007070cc(*(undefined8 *)(param_1 + 2));
      if (iVar6 != 0) {
        uVar5 = uVar5 & 0xfffffffd;
      }
      *param_1 = uVar5;
      iVar6 = FUN_007070cc(uVar10);
    }
    else {
      uVar11 = 0;
      uVar10 = 0;
      *param_1 = uVar5;
      iVar6 = FUN_007070cc(0);
    }
    if (iVar6 == 0) {
      FUN_00706898(uVar10,uVar11);
      return;
    }
  }
  return;
}


// ===== 00706898  FUN_00706898 =====

void FUN_00706898(undefined8 param_1,int param_2)

{
  bool bVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  uint *puVar11;
  long lVar12;
  undefined *puVar13;
  
  lVar7 = FUN_00707198();
  lVar12 = *(long *)(lVar7 + 0x10);
  if (((*(byte *)(lVar12 + 0x30) & 1) != 0) &&
     (puVar11 = *(uint **)(lVar12 + 0x38), puVar11 != (uint *)0x0)) {
    uVar10 = *puVar11;
    uVar5 = **(uint **)(lVar12 + 0x40);
    lVar8 = FUN_007071a8(param_1,lVar7);
    if (((uVar10 & 0xffffff01) != 0) && ((uVar10 >> 1 & 1) == 0)) {
      if ((uVar5 & uVar10) == 0) {
        if (((param_2 != 0) || (lVar8 == 0)) ||
           (uVar5 = FUN_00755a80(uVar10,uVar10 & 0xffffff7f | 6,puVar11), uVar5 != uVar10))
        goto LAB_00706aec;
        bVar3 = false;
        bVar4 = *(long *)(lVar12 + 0x40) == *(long *)PTR_PTR_DAT_007a3780;
        bVar1 = !bVar4;
        if (bVar4) goto LAB_00706988;
        bVar3 = false;
        do {
          lVar12 = *(long *)(lVar8 + 0x10);
          uVar10 = *(uint *)(lVar12 + 0x30);
          lVar7 = FUN_007071a8(param_1,lVar8);
          if ((uVar10 & 1) != 0) {
            if (*(undefined **)(*(long *)(lVar8 + 0x10) + 0x40) == PTR_DAT_007aaa78) {
              param_1 = FUN_007070d8(param_1,lVar8);
              uVar9 = FUN_0070715c(*(undefined8 *)(puVar11 + 2),lVar8);
              bVar3 = true;
              *(undefined8 *)(lVar12 + 0x38) = 0;
              *(undefined8 *)(puVar11 + 2) = uVar9;
            }
            else {
              bVar1 = true;
            }
          }
          lVar8 = lVar7;
        } while (lVar7 != 0);
      }
      else {
        uVar5 = FUN_00755a80(uVar10,uVar10 & 0xffffff7f | 6,puVar11);
        if (uVar5 != uVar10) goto LAB_00706aec;
        bVar3 = *(long *)(lVar12 + 0x40) == *(long *)PTR_PTR_DAT_007a3780;
        param_1 = FUN_007070d8(param_1,lVar7);
        uVar9 = FUN_0070715c(*(undefined8 *)(puVar11 + 2),lVar7);
        bVar1 = false;
        *(undefined8 *)(lVar12 + 0x38) = 0;
        *(undefined8 *)(puVar11 + 2) = uVar9;
        lVar7 = lVar8;
        while (lVar8 = lVar7, lVar8 != 0) {
LAB_00706988:
          lVar12 = *(long *)(lVar8 + 0x10);
          uVar10 = *(uint *)(lVar12 + 0x30);
          lVar7 = FUN_007071a8(param_1,lVar8);
          puVar2 = PTR_DAT_007aaa78;
          if ((uVar10 & 1) != 0) {
            puVar13 = *(undefined **)(*(long *)(lVar8 + 0x10) + 0x40);
            param_1 = FUN_007070d8(param_1,lVar8);
            uVar9 = FUN_0070715c(*(undefined8 *)(puVar11 + 2),lVar8);
            *(undefined8 *)(puVar11 + 2) = uVar9;
            bVar3 = bVar3 || puVar13 == puVar2;
            *(undefined8 *)(lVar12 + 0x38) = 0;
          }
        }
      }
      uVar5 = *puVar11;
      uVar10 = 0;
      if (!bVar1 && bVar3) {
        uVar10 = 0x20;
      }
      while (uVar6 = FUN_00755ac0(uVar5,uVar5 & 0xfffffffd | uVar10,puVar11), uVar6 != uVar5) {
        uVar5 = *puVar11;
      }
    }
  }
LAB_00706aec:
  lVar7 = FUN_00707198(param_1);
  while (lVar7 != 0) {
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar12 = FUN_007071a8(param_1,lVar7);
    param_1 = FUN_007070d8(param_1,lVar7);
    *(undefined4 *)(lVar8 + 0x20) = 0;
    FUN_00708b10(*(undefined8 *)(lVar8 + 0x28));
    lVar7 = lVar12;
  }
  return;
}


// ===== 00706b58  thunk_FUN_00707c00 =====

void thunk_FUN_00707c00(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_00755ac0(1,0,param_1);
  if (iVar2 != 1) {
    uVar1 = *param_1;
    if ((uVar1 - 1 & 0xffffff01) != 0) {
      if (uVar1 < 0x100) {
        FUN_00708cb4("attempt to nsync_mu_unlock() an nsync_mu not held in write mode\n");
        return;
      }
      FUN_00708cb4("attempt to nsync_mu_unlock() an nsync_mu held in read mode\n");
      return;
    }
    if (((uVar1 & 0xc) == 4) ||
       (uVar3 = FUN_00755ac0(uVar1,uVar1 - 1 & 0xffffff7f,param_1), uVar3 != uVar1)) {
      FUN_007076b4(param_1,PTR_DAT_007aaa78);
      return;
    }
  }
  return;
}


// ===== 00706b5c  FUN_00706b5c =====

void FUN_00706b5c(undefined8 param_1,undefined8 param_2)

{
  FUN_007063b0(param_1,param_2,thunk_FUN_007073d8,thunk_FUN_00707c00,*(undefined8 *)PTR_DAT_007a3798
               ,*(undefined8 *)(PTR_DAT_007a3798 + 8),0);
  return;
}


// ===== 00706b80  FUN_00706b80 =====

uint FUN_00706b80(uint param_1)

{
  int iVar1;
  undefined4 local_4;
  
  if (param_1 < 7) {
    local_4 = 0;
    iVar1 = 1 << (ulong)(param_1 & 0x1f);
    if (iVar1 != 0) {
      do {
        local_4 = local_4 + 1;
      } while (local_4 != iVar1);
    }
    return param_1 + 1;
  }
  FUN_00708c04();
  return param_1;
}


// ===== 00706bec  FUN_00706bec =====

uint FUN_00706bec(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int local_34;
  
  uVar3 = *param_1;
  uVar4 = 0;
  do {
    if ((uVar3 & param_2) != 0) goto LAB_00706c58;
LAB_00706c3c:
    uVar2 = FUN_00755a80(uVar3,(uVar3 | param_3) & ~param_4,param_1);
    if (uVar2 == uVar3) {
      return uVar3;
    }
LAB_00706c58:
    while (6 < uVar4) {
      FUN_00708c04();
      uVar3 = *param_1;
      if ((uVar3 & param_2) == 0) goto LAB_00706c3c;
    }
    local_34 = 0;
    iVar1 = 1 << (ulong)(uVar4 & 0x1f);
    if (iVar1 != 0) {
      do {
        local_34 = local_34 + 1;
      } while (local_34 != iVar1);
    }
    uVar3 = *param_1;
    uVar4 = uVar4 + 1;
  } while( true );
}


// ===== 00706cc0  FUN_00706cc0 =====

undefined4 * FUN_00706cc0(void)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  int local_54;
  
  lVar6 = (*(code *)PTR_007a3b08)(&PTR_007a3b08);
  lVar2 = tpidr_el0;
  puVar9 = *(undefined4 **)(lVar2 + lVar6);
  if ((puVar9 == (undefined4 *)0x0) || ((puVar9[0x62] & 3) != 1)) {
    uVar10 = 0;
    if ((DAT_007aee40 & 1) == 0) goto LAB_00706d44;
    do {
      do {
        if (uVar10 < 7) {
          local_54 = 0;
          iVar1 = 1 << (ulong)(uVar10 & 0x1f);
          if (iVar1 != 0) {
            do {
              local_54 = local_54 + 1;
            } while (local_54 != iVar1);
          }
          uVar10 = uVar10 + 1;
        }
        else {
          FUN_00708c04();
        }
      } while ((DAT_007aee40 & 1) != 0);
LAB_00706d44:
      uVar4 = DAT_007aee40;
      uVar5 = FUN_00755a80(DAT_007aee40,DAT_007aee40 | 1,&DAT_007aee40);
    } while (uVar5 != uVar4);
    lVar7 = FUN_00707198(DAT_007aee48);
    if (lVar7 == 0) {
      DAT_007aee40 = 0;
      if (DAT_007aee38 == (code *)0x0) {
        puVar8 = (undefined4 *)malloc(400);
      }
      else {
        puVar8 = (undefined4 *)(*DAT_007aee38)(400);
      }
      *puVar8 = 0x590239f;
      puVar8[0x42] = 0x726d2ba9;
      FUN_0070864c(puVar8 + 2);
      *(undefined4 **)(puVar8 + 0x4c) = puVar8 + 2;
      FUN_007070c0(puVar8 + 0x44,puVar8 + 0x42);
      puVar8[0x4a] = 0;
      puVar8[0x4e] = 1;
      puVar8[0x54] = 0;
      FUN_007070c0(puVar8 + 0x5c,puVar8);
      puVar8[0x62] = 0;
    }
    else {
      DAT_007aee48 = FUN_007070d8(DAT_007aee48,lVar7);
      DAT_007aee40 = 0;
      puVar8 = (undefined4 *)(*(long *)(lVar7 + 0x10) + -0x108);
    }
    bVar3 = puVar9 == (undefined4 *)0x0;
    puVar9 = puVar8;
    if (bVar3) {
      puVar8[0x62] = puVar8[0x62] | 1;
      FUN_00708b58(puVar8,FUN_00706ea8);
      *(undefined4 **)(lVar2 + lVar6) = puVar8;
    }
  }
  puVar9[0x62] = puVar9[0x62] | 2;
  return puVar9;
}


// ===== 00706ea8  FUN_00706ea8 =====

void FUN_00706ea8(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  int local_44;
  
  lVar5 = (*(code *)PTR_007a3b08)(&PTR_007a3b08);
  uVar1 = *(uint *)(param_1 + 0x188);
  lVar3 = tpidr_el0;
  *(undefined8 *)(lVar3 + lVar5) = 0;
  if ((uVar1 & 3) != 1) {
    uRam0000000000000000 = 0;
  }
  uVar6 = 0;
  *(uint *)(param_1 + 0x188) = uVar1 & 0xfffffffe;
  if ((DAT_007aee40 & 1) == 0) goto LAB_00706f2c;
  do {
    do {
      if (uVar6 < 7) {
        local_44 = 0;
        iVar2 = 1 << (ulong)(uVar6 & 0x1f);
        if (iVar2 != 0) {
          do {
            local_44 = local_44 + 1;
          } while (local_44 != iVar2);
        }
        uVar6 = uVar6 + 1;
      }
      else {
        FUN_00708c04();
      }
    } while ((DAT_007aee40 & 1) != 0);
LAB_00706f2c:
    uVar1 = DAT_007aee40;
    uVar4 = FUN_00755a80(DAT_007aee40,DAT_007aee40 | 1,&DAT_007aee40);
  } while (uVar4 != uVar1);
  DAT_007aee48 = FUN_00707130(DAT_007aee48,param_1 + 0x110);
  DAT_007aee40 = 0;
  return;
}


// ===== 00706fb0  FUN_00706fb0 =====

void FUN_00706fb0(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int local_44;
  
  uVar4 = *(uint *)(param_1 + 0x188);
  if ((uVar4 >> 1 & 1) == 0) {
    uRam0000000000000000 = 0;
    *(uint *)(param_1 + 0x188) = uVar4 & 0xfffffffd;
  }
  else {
    *(uint *)(param_1 + 0x188) = uVar4 & 0xfffffffd;
  }
  if ((uVar4 & 1) == 0) {
    uVar4 = 0;
    if ((DAT_007aee40 & 1) == 0) goto LAB_0070703c;
    do {
      do {
        if (uVar4 < 7) {
          local_44 = 0;
          iVar1 = 1 << (ulong)(uVar4 & 0x1f);
          if (iVar1 != 0) {
            do {
              local_44 = local_44 + 1;
            } while (local_44 != iVar1);
          }
          uVar4 = uVar4 + 1;
        }
        else {
          FUN_00708c04();
        }
      } while ((DAT_007aee40 & 1) != 0);
LAB_0070703c:
      uVar2 = DAT_007aee40;
      uVar3 = FUN_00755a80(DAT_007aee40,DAT_007aee40 | 1,&DAT_007aee40);
    } while (uVar3 != uVar2);
    DAT_007aee48 = FUN_00707130(DAT_007aee48,param_1 + 0x110);
    DAT_007aee40 = 0;
    return;
  }
  return;
}


// ===== 007070c0  FUN_007070c0 =====

void FUN_007070c0(long param_1,undefined8 param_2)

{
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}


// ===== 007070cc  FUN_007070cc =====

bool FUN_007070cc(long param_1)

{
  return param_1 == 0;
}


// ===== 007070d8  FUN_007070d8 =====

long * FUN_007070d8(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  if (param_1 != param_2) {
    lVar1 = *param_2;
    plVar2 = (long *)param_2[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *param_2 = (long)param_2;
    param_2[1] = (long)param_2;
    return param_1;
  }
  plVar2 = (long *)0x0;
  if ((long *)param_1[1] != param_1) {
    plVar2 = (long *)param_1[1];
  }
  lVar1 = *param_2;
  plVar3 = (long *)param_2[1];
  *(long **)(lVar1 + 8) = plVar3;
  *plVar3 = lVar1;
  *param_2 = (long)param_2;
  param_2[1] = (long)param_2;
  return plVar2;
}


// ===== 00707114  FUN_00707114 =====

void FUN_00707114(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_1;
  plVar2 = *(long **)(param_2 + 8);
  *param_1 = param_2;
  *(long **)(param_2 + 8) = param_1;
  *plVar2 = lVar1;
  *(long **)(lVar1 + 8) = plVar2;
  return;
}


// ===== 00707130  FUN_00707130 =====

long * FUN_00707130(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  if (param_2 != 0) {
    if (param_1 != (long *)0x0) {
      lVar1 = *param_1;
      plVar2 = *(long **)(param_2 + 8);
      *param_1 = param_2;
      *(long **)(param_2 + 8) = param_1;
      *plVar2 = lVar1;
      *(long **)(lVar1 + 8) = plVar2;
      return param_1;
    }
    param_1 = *(long **)(param_2 + 8);
  }
  return param_1;
}


// ===== 0070715c  FUN_0070715c =====

long * FUN_0070715c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = param_1;
  if (((param_2 != (long *)0x0) && (plVar3 = param_2, param_1 != (long *)0x0)) &&
     (lVar1 = *param_2, lVar1 != 0)) {
    lVar2 = *param_1;
    plVar3 = *(long **)(lVar1 + 8);
    *param_1 = lVar1;
    *(long **)(lVar1 + 8) = param_1;
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    return param_2;
  }
  return plVar3;
}


// ===== 00707198  FUN_00707198 =====

long * FUN_00707198(long *param_1)

{
  if (param_1 != (long *)0x0) {
    param_1 = (long *)*param_1;
  }
  return param_1;
}


// ===== 007071a4  FUN_007071a4 =====

void FUN_007071a4(void)

{
  return;
}


// ===== 007071a8  FUN_007071a8 =====

undefined8 FUN_007071a8(undefined8 *param_1,undefined8 *param_2)

{
  if (param_2 != param_1) {
    return *param_2;
  }
  return 0;
}


// ===== 007071c0  FUN_007071c0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_007071c0(uint *param_1,long param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  
  *(undefined8 *)(param_2 + 0x160) = 0;
  *(undefined8 *)(param_2 + 0x168) = 0;
  *(undefined8 *)(param_2 + 0x158) = 0;
  uVar2 = *param_4;
  iVar7 = 0;
  uVar8 = 0;
  uVar5 = 0;
  *(undefined8 *)(param_2 + 0x140) = 0;
  *(uint **)(param_2 + 0x148) = param_4;
  if (param_3 != 0) {
    uVar2 = uVar2 & 0xffffff9f;
  }
  uVar3 = *param_1;
  uVar4 = uVar3 & uVar2;
  do {
    while (uVar4 == 0) {
      uVar5 = uVar5 & 0xffffffff;
      uVar4 = FUN_00755a80(uVar3,param_4[1] + uVar3 & ((uVar8 | param_3 | param_4[4]) ^ 0xffffffff),
                           param_1);
      if (uVar4 == uVar3) {
        return;
      }
LAB_0070725c:
      uVar5 = FUN_00706b80(uVar5);
      uVar3 = *param_1;
joined_r0x00707268:
      uVar4 = uVar3 & uVar2;
    }
    if ((uVar3 >> 1 & 1) != 0) goto LAB_0070725c;
    uVar4 = FUN_00755a80(uVar3,(uVar3 | param_4[3] | uVar8 | 2) & (param_3 ^ 0xffffffff) &
                               0xffffff7f,param_1);
    if (uVar4 != uVar3) {
      uVar5 = FUN_00706b80(uVar5 & 0xffffffff);
      uVar3 = *param_1;
      goto joined_r0x00707268;
    }
    *(undefined4 *)(param_2 + 0x128) = 1;
    if (iVar7 == 0) {
      uVar6 = FUN_0070715c(*(undefined8 *)(param_1 + 2),param_2 + 0x110);
    }
    else {
      uVar6 = FUN_00707130();
    }
    *(undefined8 *)(param_1 + 2) = uVar6;
    do {
      uVar3 = *param_1;
      uVar4 = FUN_00755ac0(uVar3,uVar3 & 0xfffffffd,param_1);
    } while (uVar4 != uVar3);
    while ((int)*(undefined8 *)(param_2 + 0x128) != 0) {
      FUN_00708664(param_2 + 8);
    }
    iVar7 = iVar7 + 1;
    uVar2 = uVar2 & 0xffffff9f;
    param_3 = 8;
    uVar1 = 0x40;
    if (iVar7 != 0x1e) {
      uVar1 = uVar8;
    }
    uVar5 = FUN_00706b80(0);
    uVar3 = *param_1;
    uVar4 = uVar3 & uVar2;
    uVar8 = uVar1;
  } while( true );
}


// ===== 00707358  FUN_00707358 =====

bool FUN_00707358(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  bVar4 = true;
  iVar2 = FUN_00755a80(0,1,param_1);
  if (iVar2 != 0) {
    uVar1 = *param_1;
    if ((uVar1 & 0xffffff41) == 0) {
      uVar3 = FUN_00755a80(uVar1,uVar1 & 0x9e | 1,param_1);
      return uVar3 == uVar1;
    }
    bVar4 = false;
  }
  return bVar4;
}


// ===== 007073d8  FUN_007073d8 =====

void FUN_007073d8(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  iVar2 = FUN_00755a80(0,1,param_1);
  if ((iVar2 != 0) &&
     ((uVar1 = *param_1, (uVar1 & 0xffffff41) != 0 ||
      (uVar3 = FUN_00755a80(uVar1,uVar1 & 0x9e | 1,param_1), uVar3 != uVar1)))) {
    uVar4 = FUN_00706cc0();
    FUN_007071c0(param_1,uVar4,0,*(undefined8 *)PTR_PTR_DAT_007a3780);
    FUN_00706fb0(uVar4);
    return;
  }
  return;
}


// ===== 00707470  FUN_00707470 =====

void FUN_00707470(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  iVar2 = FUN_00755a80(0,0x100,param_1);
  if ((iVar2 != 0) &&
     ((uVar1 = *param_1, (uVar1 & 0x61) != 0 ||
      (uVar3 = FUN_00755a80(uVar1,uVar1 + 0x100,param_1), uVar3 != uVar1)))) {
    uVar4 = FUN_00706cc0();
    FUN_007071c0(param_1,uVar4,0,*(undefined8 *)PTR_PTR_DAT_007a3788);
    FUN_00706fb0(uVar4);
    return;
  }
  return;
}


// ===== 00707500  FUN_00707500 =====

void FUN_00707500(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    lVar3 = *(long *)(param_1 + 0x10);
    if ((*(long *)(lVar3 + 0x50) != 0) &&
       (lVar4 = *(long *)(param_2 + 0x10), *(long *)(lVar3 + 0x50) == *(long *)(lVar4 + 0x50))) {
      lVar2 = *(long *)(lVar3 + 0x58);
      if (lVar2 != *(long *)(lVar4 + 0x58)) {
        if (*(code **)(lVar3 + 0x60) == (code *)0x0) {
          return;
        }
        iVar1 = (**(code **)(lVar3 + 0x60))(lVar2,*(long *)(lVar4 + 0x58));
        if (iVar1 == 0) {
          return;
        }
        lVar3 = *(long *)(param_1 + 0x10);
        lVar4 = *(long *)(param_2 + 0x10);
        lVar2 = param_2;
      }
      FUN_00707114(lVar2,lVar3 + 0x68,lVar4 + 0x68);
      return;
    }
  }
  return;
}


// ===== 0070758c  FUN_0070758c =====

undefined8 FUN_0070758c(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  uVar5 = FUN_007070d8();
  do {
    iVar4 = *(int *)(param_2[2] + 0x48);
    iVar3 = FUN_00755a40(iVar4,iVar4 + 1,param_2[2] + 0x48);
  } while (iVar3 != iVar4);
  iVar4 = FUN_007070cc(uVar5);
  if (iVar4 == 0) {
    lVar6 = param_2[2];
    plVar7 = (long *)(lVar6 + 0x68);
    plVar9 = (long *)*plVar7;
    if (plVar9 != plVar7) {
      plVar10 = *(long **)(lVar6 + 0x70);
      plVar9[1] = (long)plVar10;
      *plVar10 = (long)plVar9;
      *(long *)(lVar6 + 0x68) = lVar6 + 0x68;
      *(long **)(lVar6 + 0x70) = plVar7;
      return uVar5;
    }
    lVar6 = FUN_007071a4(uVar5);
    if (((lVar2 != lVar6) && (lVar2 != 0)) && (lVar1 != 0)) {
      lVar6 = *(long *)(lVar2 + 0x10);
      if ((*(long *)(lVar6 + 0x50) != 0) &&
         (lVar8 = *(long *)(lVar1 + 0x10), *(long *)(lVar6 + 0x50) == *(long *)(lVar8 + 0x50))) {
        if (*(long *)(lVar6 + 0x58) != *(long *)(lVar8 + 0x58)) {
          if (*(code **)(lVar6 + 0x60) == (code *)0x0) {
            return uVar5;
          }
          iVar4 = (**(code **)(lVar6 + 0x60))();
          if (iVar4 == 0) {
            return uVar5;
          }
          lVar6 = *(long *)(lVar2 + 0x10);
          lVar8 = *(long *)(lVar1 + 0x10);
        }
        FUN_00707114(lVar6 + 0x68,lVar8 + 0x68);
        return uVar5;
      }
    }
  }
  return uVar5;
}


// ===== 007076b4  FUN_007076b4 =====

void FUN_007076b4(uint *param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  uint local_64;
  
  uVar4 = 0;
  do {
    uVar7 = *param_1;
    if (((((uVar7 ^ 0xffffffff) & 0x180) == 0) || ((uVar7 & 0xc) != 4)) ||
       (0x100 < (uVar7 & 0xffffff00))) {
      uVar8 = FUN_00755ac0(uVar7,uVar7 - *(int *)(param_2 + 4) &
                                 (*(uint *)(param_2 + 0x14) ^ 0xffffffff),param_1);
      if (uVar8 == uVar7) {
        return;
      }
    }
    else if ((uVar7 >> 1 & 1) == 0) {
      uVar8 = uVar7 >> 4 & 1;
      uVar5 = FUN_00755a80(uVar7,(uVar7 - *(int *)(param_2 + 4)) + uVar8 | 10,param_1);
      if (uVar5 == uVar7) break;
    }
    uVar4 = FUN_00706b80(uVar4);
  } while( true );
  uVar23 = *(undefined8 *)(param_1 + 2);
  param_1[2] = 0;
  param_1[3] = 0;
  iVar1 = -((uVar7 & 0x10) >> 4);
  iVar6 = FUN_007070cc(uVar23);
  puVar2 = PTR_PTR_DAT_007a3780;
  if (iVar6 == 0) {
    uVar24 = 0;
    lVar10 = 0;
    uVar22 = 0;
    local_64 = 0x80;
    do {
      plVar12 = (long *)FUN_00707198(uVar23);
      bVar3 = uVar8 != 0;
      uVar8 = 0;
      if ((bVar3) && (lVar10 != *(long *)puVar2)) {
        if ((lVar10 == 0) &&
           ((*(long *)(plVar12[2] + 0x40) != *(long *)PTR_PTR_DAT_007a3788 &&
            (*(long *)(plVar12[2] + 0x50) == 0)))) {
          uVar8 = 0;
        }
        else {
          do {
            uVar7 = *param_1;
            uVar8 = FUN_00755ac0(uVar7,uVar7 & 0xfffffffd,param_1);
          } while (uVar8 != uVar7);
          uVar8 = 1;
        }
      }
      bVar3 = plVar12 != (long *)0x0;
      if ((plVar12 != (long *)0x0) && (bVar3 = plVar12 != (long *)0x0, lVar10 != *(long *)puVar2)) {
        do {
          plVar13 = (long *)FUN_007071a8(uVar23,plVar12);
          pcVar15 = *(code **)(plVar12[2] + 0x50);
          uVar7 = uVar8;
          if (pcVar15 == (code *)0x0) {
            uVar7 = 1;
          }
          if (uVar7 == 0) {
            FUN_00708cb4("checking a waiter condition while unlocked\n");
            iVar6 = (**(code **)(plVar12[2] + 0x50))(*(undefined8 *)(plVar12[2] + 0x58));
            if (iVar6 == 0) goto LAB_007079e4;
LAB_00707994:
            if ((lVar10 == 0) || (*(long *)(plVar12[2] + 0x40) == *(long *)PTR_PTR_DAT_007a3788)) {
              lVar10 = *plVar12;
              lVar11 = plVar12[1];
              uVar23 = FUN_007070d8(uVar23,plVar12);
              do {
                iVar6 = *(int *)(plVar12[2] + 0x48);
                iVar9 = FUN_00755a40(iVar6,iVar6 + 1,plVar12[2] + 0x48);
              } while (iVar9 != iVar6);
              iVar6 = FUN_007070cc(uVar23);
              if (iVar6 == 0) {
                lVar14 = plVar12[2];
                plVar17 = (long *)(lVar14 + 0x68);
                plVar19 = (long *)*plVar17;
                if (plVar19 == plVar17) {
                  lVar14 = FUN_007071a4(uVar23);
                  if (((lVar11 != lVar14) && (lVar11 != 0)) && (lVar10 != 0)) {
                    lVar14 = *(long *)(lVar11 + 0x10);
                    if ((*(long *)(lVar14 + 0x50) != 0) &&
                       (lVar18 = *(long *)(lVar10 + 0x10),
                       *(long *)(lVar14 + 0x50) == *(long *)(lVar18 + 0x50))) {
                      if (*(long *)(lVar14 + 0x58) != *(long *)(lVar18 + 0x58)) {
                        if ((*(code **)(lVar14 + 0x60) == (code *)0x0) ||
                           (iVar6 = (**(code **)(lVar14 + 0x60))(), iVar6 == 0)) goto LAB_00707a84;
                        lVar14 = *(long *)(lVar11 + 0x10);
                        lVar18 = *(long *)(lVar10 + 0x10);
                      }
                      FUN_00707114(lVar14 + 0x68,lVar18 + 0x68);
                    }
                  }
                }
                else {
                  plVar21 = *(long **)(lVar14 + 0x70);
                  plVar19[1] = (long)plVar21;
                  *plVar21 = (long)plVar19;
                  *(long *)(lVar14 + 0x68) = lVar14 + 0x68;
                  *(long **)(lVar14 + 0x70) = plVar17;
                }
              }
LAB_00707a84:
              uVar22 = FUN_0070715c(uVar22,plVar12);
              lVar10 = *(long *)(plVar12[2] + 0x40);
              plVar12 = plVar13;
            }
            else {
              local_64 = 0x20;
              plVar12 = plVar13;
            }
          }
          else {
            if ((pcVar15 == (code *)0x0) ||
               (iVar6 = (*pcVar15)(*(undefined8 *)(plVar12[2] + 0x58)), iVar6 != 0))
            goto LAB_00707994;
LAB_007079e4:
            plVar13 = (long *)(*(long *)(*(long *)(plVar12[2] + 0x70) + 0x10) + 0x110);
            if ((plVar13 == plVar12) || (plVar13 == (long *)plVar12[1])) {
              plVar13 = plVar12;
            }
            plVar12 = (long *)FUN_007071a8(uVar23,plVar13);
          }
          bVar3 = plVar12 != (long *)0x0;
        } while ((plVar12 != (long *)0x0) && (lVar10 != *(long *)puVar2));
      }
      uVar7 = local_64 & 0xffffff7f;
      if (!bVar3) {
        uVar7 = local_64;
      }
      if (uVar8 != 0) {
        FUN_00706bec(param_1,2,2,0);
      }
      lVar11 = FUN_007071a4(uVar24);
      lVar14 = FUN_00707198(uVar23);
      if ((lVar11 != 0) && (lVar14 != 0)) {
        lVar18 = *(long *)(lVar11 + 0x10);
        if ((*(long *)(lVar18 + 0x50) != 0) &&
           (lVar20 = *(long *)(lVar14 + 0x10), *(long *)(lVar18 + 0x50) == *(long *)(lVar20 + 0x50))
           ) {
          lVar16 = *(long *)(lVar18 + 0x58);
          if (lVar16 != *(long *)(lVar20 + 0x58)) {
            if ((*(code **)(lVar18 + 0x60) == (code *)0x0) ||
               (iVar6 = (**(code **)(lVar18 + 0x60))(lVar16), iVar6 == 0)) goto LAB_007078c8;
            lVar18 = *(long *)(lVar11 + 0x10);
            lVar20 = *(long *)(lVar14 + 0x10);
            lVar16 = lVar14;
          }
          FUN_00707114(lVar16,lVar18 + 0x68,lVar20 + 0x68);
        }
      }
LAB_007078c8:
      uVar23 = FUN_007071a4(uVar23);
      uVar24 = FUN_0070715c(uVar24,uVar23);
      uVar23 = *(undefined8 *)(param_1 + 2);
      param_1[2] = 0;
      param_1[3] = 0;
      iVar6 = FUN_007070cc(uVar23);
      local_64 = uVar7;
    } while (iVar6 == 0);
  }
  else {
    uVar22 = 0;
    uVar24 = 0;
    local_64 = 0x80;
  }
  *(undefined8 *)(param_1 + 2) = uVar24;
  iVar6 = FUN_007070cc(uVar22);
  uVar7 = 2;
  if (iVar6 != 0) {
    uVar7 = 10;
  }
  iVar6 = FUN_007070cc(*(undefined8 *)(param_1 + 2));
  uVar5 = *param_1;
  uVar8 = (uVar7 | local_64 & 0x80) ^ 0x80;
  if (iVar6 != 0) {
    uVar8 = uVar7 | 0xb4;
  }
  uVar7 = FUN_00755ac0(uVar5,(uVar5 + iVar1 | local_64) & (uVar8 ^ 0xffffffff),param_1);
  if (uVar7 != uVar5) {
    do {
      uVar7 = *param_1;
      uVar5 = FUN_00755ac0(uVar7,(uVar7 + iVar1 | local_64) & ~uVar8,param_1);
    } while (uVar5 != uVar7);
  }
  lVar10 = FUN_00707198(uVar22);
  while (lVar10 != 0) {
    lVar11 = FUN_007071a8(uVar22,lVar10);
    uVar22 = FUN_007070d8(uVar22,lVar10);
    *(undefined4 *)(*(long *)(lVar10 + 0x10) + 0x20) = 0;
    FUN_00708b10(*(long *)(lVar10 + 0x10) + -0x100);
    lVar10 = lVar11;
  }
  return;
}


// ===== 00707c00  FUN_00707c00 =====

void FUN_00707c00(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_00755ac0(1,0,param_1);
  if (iVar2 != 1) {
    uVar1 = *param_1;
    if ((uVar1 - 1 & 0xffffff01) != 0) {
      if (uVar1 < 0x100) {
        FUN_00708cb4("attempt to nsync_mu_unlock() an nsync_mu not held in write mode\n");
        return;
      }
      FUN_00708cb4("attempt to nsync_mu_unlock() an nsync_mu held in read mode\n");
      return;
    }
    if (((uVar1 & 0xc) == 4) ||
       (uVar3 = FUN_00755ac0(uVar1,uVar1 - 1 & 0xffffff7f,param_1), uVar3 != uVar1)) {
      FUN_007076b4(param_1,PTR_DAT_007aaa78);
      return;
    }
  }
  return;
}


// ===== 00707cb4  FUN_00707cb4 =====

void FUN_00707cb4(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_00755ac0(0x100,0,param_1);
  if (iVar2 != 0x100) {
    uVar1 = *param_1;
    if ((uVar1 & 0xffffff01) == 1) {
      FUN_00708cb4("attempt to nsync_mu_runlock() an nsync_mu held in write mode\n");
      return;
    }
    if (((uVar1 & 0xffffff8c) == 0x104) ||
       (uVar3 = FUN_00755ac0(uVar1,uVar1 - 0x100,param_1), uVar3 != uVar1)) {
      FUN_007076b4(param_1,PTR_DAT_007aaa98);
      return;
    }
  }
  return;
}


// ===== 00707d50  FUN_00707d50 =====

ulong FUN_00707d50(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined4 local_a0 [2];
  undefined1 auStack_98 [24];
  undefined4 local_80;
  long local_78;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_4 == 0) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
      uVar8 = FUN_00708750(param_1 + 8);
      return uVar8;
    }
  }
  else {
    auVar9 = FUN_00707f7c(param_4);
    iVar3 = FUN_00708c8c(auVar9._0_8_,auVar9._8_8_,DAT_00211a38,DAT_00211a40);
    if (iVar3 < 1) {
      uVar8 = 0x7d;
    }
    else {
      local_a0[0] = 0x726d2ba9;
      local_78 = param_1 + 8;
      FUN_007070c0(auStack_98,local_a0);
      local_80 = 1;
      local_70 = 0;
      FUN_007073d8(param_4 + 0x30);
      puVar7 = &DAT_00211a38;
      if (((int)*(undefined8 *)(param_4 + 0x54) == 0) &&
         (puVar7 = (undefined8 *)PTR_DAT_007a3798, *(int *)(param_4 + 0x18) != 0)) {
        puVar7 = (undefined8 *)(param_4 + 0x20);
      }
      uVar6 = *puVar7;
      uVar1 = puVar7[1];
      iVar3 = FUN_00708c8c(uVar6,uVar1,DAT_00211a38,DAT_00211a40);
      if (iVar3 < 1) {
        uVar8 = 0x7d;
      }
      else {
        uVar5 = FUN_0070715c(*(undefined8 *)(param_4 + 0x68),auStack_98);
        *(undefined8 *)(param_4 + 0x68) = uVar5;
        iVar3 = FUN_00708c8c(param_2,param_3,uVar6,uVar1);
        if (-1 < iVar3) {
          param_3 = uVar1;
          param_2 = uVar6;
        }
        FUN_00707c00(param_4 + 0x30);
        uVar4 = FUN_00708750(param_1 + 8,param_2,param_3);
        uVar8 = (ulong)uVar4;
        if ((-1 < iVar3) && (uVar4 == 0x6e)) {
          FUN_00708138(param_4);
          uVar8 = 0x7d;
        }
        FUN_007073d8(param_4 + 0x30);
        puVar7 = &DAT_00211a38;
        if (((int)*(undefined8 *)(param_4 + 0x54) == 0) &&
           (puVar7 = (undefined8 *)PTR_DAT_007a3798, *(int *)(param_4 + 0x18) != 0)) {
          puVar7 = (undefined8 *)(param_4 + 0x20);
        }
        iVar3 = FUN_00708c8c(*puVar7,puVar7[1],DAT_00211a38,DAT_00211a40);
        if (0 < iVar3) {
          uVar6 = FUN_007070d8(*(undefined8 *)(param_4 + 0x68),auStack_98);
          *(undefined8 *)(param_4 + 0x68) = uVar6;
        }
      }
      FUN_00707c00(param_4 + 0x30);
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return uVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00707f7c  FUN_00707f7c =====

undefined1  [16] FUN_00707f7c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar4 = DAT_00211a38;
  uVar5 = DAT_00211a40;
  if ((int)*(undefined8 *)(param_1 + 0x54) == 0) {
    FUN_007073d8(param_1 + 0x30);
    puVar1 = PTR_DAT_007a37a0;
    puVar3 = (undefined8 *)PTR_DAT_007a37a0;
    if (((int)*(undefined8 *)(param_1 + 0x54) == 0) &&
       (puVar3 = (undefined8 *)PTR_DAT_007a3798, *(int *)(param_1 + 0x18) != 0)) {
      puVar3 = (undefined8 *)(param_1 + 0x20);
    }
    uVar4 = *puVar3;
    uVar5 = puVar3[1];
    FUN_00707c00(param_1 + 0x30);
    iVar2 = FUN_00708c8c(uVar4,uVar5,*(undefined8 *)puVar1,*(undefined8 *)(puVar1 + 8));
    if (0 < iVar2) {
      auVar6 = FUN_00708c48();
      iVar2 = FUN_00708c8c(uVar4,uVar5,auVar6._0_8_,auVar6._8_8_);
      if (iVar2 < 1) {
        FUN_0070805c(param_1);
        return *(undefined1 (*) [16])puVar1;
      }
    }
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}


// ===== 0070805c  FUN_0070805c =====

void FUN_0070805c(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  FUN_007073d8(param_1 + 0x30);
  puVar2 = &DAT_00211a38;
  if (((int)*(undefined8 *)(param_1 + 0x54) == 0) &&
     (puVar2 = (undefined8 *)PTR_DAT_007a3798, *(int *)(param_1 + 0x18) != 0)) {
    puVar2 = (undefined8 *)(param_1 + 0x20);
  }
  iVar1 = FUN_00708c8c(*puVar2,puVar2[1],DAT_00211a38,DAT_00211a40);
  if (0 < iVar1) {
    lVar3 = *(long *)(param_1 + 0x58);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    if (lVar3 == 0) {
      FUN_00708180(param_1,0);
    }
    else {
      iVar1 = FUN_00707358(lVar3 + 0x30);
      if (iVar1 == 0) {
        FUN_00707c00(param_1 + 0x30);
        FUN_007073d8(lVar3 + 0x30);
        FUN_007073d8(param_1 + 0x30);
      }
      FUN_00708180(param_1,lVar3);
      FUN_00707c00(lVar3 + 0x30);
    }
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
  }
  FUN_00707c00(param_1 + 0x30);
  return;
}


// ===== 00708130  FUN_00708130 =====

void FUN_00708130(long param_1)

{
  FUN_007070cc(*(undefined8 *)(param_1 + 0x60));
  return;
}


// ===== 00708138  FUN_00708138 =====

void FUN_00708138(undefined8 param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  
  auVar2 = FUN_00707f7c();
  iVar1 = FUN_00708c8c(auVar2._0_8_,auVar2._8_8_,DAT_00211a38,DAT_00211a40);
  if (0 < iVar1) {
    FUN_0070805c(param_1);
    return;
  }
  return;
}


// ===== 00708180  FUN_00708180 =====

void FUN_00708180(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar4 = &DAT_00211a38;
  if (((int)*(undefined8 *)(param_1 + 0x54) == 0) &&
     (puVar4 = (undefined8 *)PTR_DAT_007a3798, *(int *)(param_1 + 0x18) != 0)) {
    puVar4 = (undefined8 *)(param_1 + 0x20);
  }
  iVar1 = FUN_00708c8c(*puVar4,puVar4[1],DAT_00211a38,DAT_00211a40);
  if (0 < iVar1) {
    *(undefined4 *)(param_1 + 0x54) = 1;
    lVar2 = FUN_00707198(*(undefined8 *)(param_1 + 0x68));
    while (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + 0x10);
      uVar3 = FUN_007070d8(*(undefined8 *)(param_1 + 0x68));
      *(undefined8 *)(param_1 + 0x68) = uVar3;
      *(undefined4 *)(lVar2 + 0x20) = 0;
      FUN_00708b10(*(undefined8 *)(lVar2 + 0x28));
      lVar2 = FUN_00707198(*(undefined8 *)(param_1 + 0x68));
    }
    lVar2 = FUN_00707198(*(undefined8 *)(param_1 + 0x60));
    while (lVar2 != 0) {
      lVar5 = *(long *)(lVar2 + 0x10);
      lVar2 = FUN_007071a8(*(undefined8 *)(param_1 + 0x60),lVar2);
      FUN_007073d8(lVar5 + 0x30);
      if (*(int *)(lVar5 + 0x50) == 0) {
        FUN_00708180(lVar5,param_1);
      }
      FUN_00707c00(lVar5 + 0x30);
    }
    FUN_00708614(param_1 + 0x30,FUN_00708130,param_1,0);
    if (param_2 != 0) {
      uVar3 = FUN_007070d8(*(undefined8 *)(param_2 + 0x60),param_1);
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_2 + 0x60) = uVar3;
    }
  }
  return;
}


// ===== 007082bc  FUN_007082bc =====

int FUN_007082bc(uint *param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int local_7c;
  
  uVar4 = *param_1;
  if ((uVar4 & 0xffffff01) == 0) {
    FUN_00708cb4("nsync_mu not held in some mode when calling nsync_mu_wait_with_deadline()\n");
  }
  plVar1 = (long *)PTR_PTR_DAT_007a3780;
  if (0xff < uVar4) {
    plVar1 = (long *)PTR_PTR_DAT_007a3788;
  }
  if (param_2 != (code *)0x0) {
    lVar11 = *plVar1;
    iVar3 = (*param_2)(param_3);
    if (iVar3 == 0) {
      bVar2 = false;
      lVar10 = 0;
      do {
        if (lVar10 == 0) {
          lVar10 = FUN_00706cc0();
        }
        *(undefined8 *)(lVar10 + 0x140) = 0;
        *(long *)(lVar10 + 0x148) = lVar11;
        *(code **)(lVar10 + 0x158) = param_2;
        *(undefined8 *)(lVar10 + 0x160) = param_3;
        *(undefined8 *)(lVar10 + 0x168) = param_4;
        *(undefined4 *)(lVar10 + 0x128) = 1;
        iVar3 = *(int *)(lVar10 + 0x150);
        uVar4 = FUN_00706bec(param_1,2,0x16,0x80);
        if (bVar2) {
          uVar9 = FUN_00707198(*(undefined8 *)(param_1 + 2));
          FUN_00707500(lVar10 + 0x110,uVar9);
          uVar9 = FUN_00707130(*(undefined8 *)(param_1 + 2),lVar10 + 0x110);
          *(undefined8 *)(param_1 + 2) = uVar9;
          if ((uVar4 & 0xc) != 4) goto LAB_00708434;
LAB_00708400:
          do {
            uVar4 = *param_1;
            iVar7 = 0;
            if ((uVar4 - *(int *)(lVar11 + 4) & 0xffffff01) != 0) {
              iVar7 = *(int *)(lVar11 + 4);
            }
            uVar5 = FUN_00755ac0(uVar4,uVar4 - iVar7 & 0xfffffffd,param_1);
          } while (uVar5 != uVar4);
        }
        else {
          uVar9 = FUN_007071a4(*(undefined8 *)(param_1 + 2));
          FUN_00707500(uVar9,lVar10 + 0x110);
          uVar9 = FUN_0070715c(*(undefined8 *)(param_1 + 2),lVar10 + 0x110);
          *(undefined8 *)(param_1 + 2) = uVar9;
          if ((uVar4 & 0xc) == 4) goto LAB_00708400;
LAB_00708434:
          do {
            uVar4 = *param_1;
            iVar7 = *(int *)(lVar11 + 4);
            uVar5 = FUN_00755ac0(uVar4,uVar4 - iVar7 & 0xfffffffd,param_1);
          } while (uVar5 != uVar4);
        }
        if (iVar7 == 0) {
          FUN_007076b4(param_1,lVar11);
          if ((int)*(undefined8 *)(lVar10 + 0x128) == 0) goto LAB_007085a0;
LAB_0070846c:
          bVar2 = false;
          uVar6 = 0;
          iVar7 = 0;
          local_7c = 0;
          do {
            if (((iVar7 == 0) && (iVar7 = FUN_00707d50(lVar10,param_5,param_6,param_7), iVar7 != 0))
               && (*(int *)(lVar10 + 0x128) != 0)) {
              uVar8 = 0;
              while ((uVar4 = *param_1, (uVar4 & 0xffffff43) != 0 ||
                     (uVar5 = FUN_00755a80(uVar4,uVar4 & 0x9c | 3,param_1), uVar5 != uVar4))) {
                if ((uVar4 & 0x22) == 0) {
                  FUN_00755b00(uVar4,uVar4 | 0x20,param_1);
                }
                uVar8 = FUN_00706b80(uVar8);
              }
              if ((*(int *)(lVar10 + 0x128) == 0) || (*(int *)(lVar10 + 0x150) != iVar3)) {
                bVar2 = false;
              }
              else {
                uVar9 = FUN_0070758c(*(undefined8 *)(param_1 + 2),lVar10 + 0x110);
                *(undefined8 *)(param_1 + 2) = uVar9;
                bVar2 = true;
                *(undefined4 *)(lVar10 + 0x128) = 0;
                uVar4 = *(int *)(lVar11 + 4) + uVar4;
                local_7c = iVar7;
              }
              *param_1 = uVar4;
            }
            if (*(int *)(lVar10 + 0x128) != 0) {
              uVar6 = FUN_00706b80(uVar6);
            }
          } while ((int)*(undefined8 *)(lVar10 + 0x128) != 0);
          if (!bVar2) goto LAB_007085a4;
        }
        else {
          if ((int)*(undefined8 *)(lVar10 + 0x128) != 0) goto LAB_0070846c;
LAB_007085a0:
          local_7c = 0;
LAB_007085a4:
          FUN_007071c0(param_1,lVar10,8,lVar11);
        }
        if (param_2 == (code *)0x0) {
          local_7c = 0;
          goto LAB_007085e8;
        }
        iVar3 = (*param_2)(param_3);
        bVar2 = true;
        if (local_7c != 0 || iVar3 != 0) {
          if (iVar3 != 0) {
            local_7c = 0;
          }
LAB_007085e8:
          FUN_00706fb0(lVar10);
          return local_7c;
        }
      } while( true );
    }
  }
  return 0;
}


