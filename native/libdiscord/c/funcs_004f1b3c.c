// ===== 004f1b3c  FUN_004f1b3c =====

undefined8 * FUN_004f1b3c(undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 *puVar9;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  if (param_2 != param_3) {
    do {
      if (param_4 == (undefined8 *)0x0) {
        if (*(long *)(lVar2 + 0x28) == lVar5) {
                    /* try { // try from 004f1c88 to 004f1cc7 has its CatchHandler @ 004f1ccc */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        goto LAB_004f1d20;
      }
      param_4[1] = 0;
      param_4[2] = 0;
      *param_4 = 0;
      uVar10 = param_2[1] - *param_2;
      if (uVar10 != 0) {
        if ((long)uVar10 < 0) {
          if (*(long *)(lVar2 + 0x28) == lVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_004f04ec(param_4);
          }
          goto LAB_004f1d20;
        }
                    /* try { // try from 004f1bbc to 004f1bc3 has its CatchHandler @ 004f1cc8 */
        puVar4 = (undefined1 *)operator_new(uVar10);
        *param_4 = puVar4;
        param_4[1] = puVar4;
        param_4[2] = puVar4 + uVar10;
        puVar8 = (undefined1 *)*param_2;
        puVar1 = (undefined1 *)param_2[1];
        puVar6 = puVar4;
        if (puVar8 != puVar1) {
          uVar10 = (long)puVar1 - (long)puVar8;
          puVar9 = puVar8;
          if ((0x1f < uVar10) && (0x1f < (ulong)((long)puVar4 - (long)puVar8))) {
            uVar11 = uVar10 & 0xffffffffffffffe0;
            puVar12 = (undefined8 *)(puVar4 + 0x10);
            puVar9 = puVar8 + uVar11;
            puVar4 = puVar4 + uVar11;
            puVar7 = (undefined8 *)(puVar8 + 0x10);
            uVar13 = uVar11;
            do {
              puVar3 = puVar7 + -1;
              uVar14 = puVar7[-2];
              uVar16 = puVar7[1];
              uVar15 = *puVar7;
              puVar7 = puVar7 + 4;
              uVar13 = uVar13 - 0x20;
              puVar12[-1] = *puVar3;
              puVar12[-2] = uVar14;
              puVar12[1] = uVar16;
              *puVar12 = uVar15;
              puVar12 = puVar12 + 4;
            } while (uVar13 != 0);
            puVar6 = puVar4;
            if (uVar10 == uVar11) goto LAB_004f1b88;
          }
          do {
            puVar8 = puVar9 + 1;
            puVar6 = puVar4 + 1;
            *puVar4 = *puVar9;
            puVar4 = puVar6;
            puVar9 = puVar8;
          } while (puVar8 != puVar1);
        }
LAB_004f1b88:
        param_4[1] = puVar6;
      }
      param_4 = param_4 + 3;
      param_2 = param_2 + 3;
    } while (param_2 != param_3);
  }
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return param_4;
  }
LAB_004f1d20:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f1d28  FUN_004f1d28 =====

void FUN_004f1d28(long param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)**(undefined8 **)(param_1 + 8);
  puVar5 = (undefined8 *)**(undefined8 **)(param_1 + 0x10);
  while (puVar1 = puVar5, puVar1 != puVar4) {
    puVar5 = puVar1 + -3;
    puVar2 = (undefined1 *)*puVar5;
    if (0 < puVar1[-2] - (long)puVar2) {
      uVar3 = (puVar1[-2] - (long)puVar2) + 1;
      do {
        uVar3 = uVar3 - 1;
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      } while (1 < uVar3);
      puVar2 = (undefined1 *)*puVar5;
    }
    if (puVar2 != (undefined1 *)0x0) {
      puVar1[-2] = puVar2;
      operator_delete(puVar2);
    }
  }
  return;
}


// ===== 004f1da0  FUN_004f1da0 =====

void FUN_004f1da0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_004e8250("vector");
}


// ===== 004f1db4  FUN_004f1db4 =====

long FUN_004f1db4(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_2 != param_3) {
    lVar1 = 0;
    do {
      if (param_4 + lVar1 == 0) {
                    /* try { // try from 004f1e14 to 004f1e3b has its CatchHandler @ 004f1e40 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x23,"__location != nullptr","null pointer given to construct_at");
      }
                    /* try { // try from 004f1de4 to 004f1deb has its CatchHandler @ 004f1e3c */
      FUN_004f1e78(param_4 + lVar1,param_2 + lVar1);
      lVar1 = lVar1 + 0x78;
    } while (param_2 + lVar1 != param_3);
    param_4 = param_4 + lVar1;
  }
  return param_4;
}


// ===== 004f1e78  FUN_004f1e78 =====

void FUN_004f1e78(undefined2 *param_1,undefined2 *param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined2 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar3 = *param_2;
  *(undefined1 *)(param_1 + 0x20) = 0xff;
  *(undefined1 *)(param_1 + 4) = 0;
  bVar2 = *(byte *)(param_2 + 0x20);
  *param_1 = uVar3;
  if ((ulong)bVar2 != 0xff) {
                    /* try { // try from 004f1ed8 to 004f1ee3 has its CatchHandler @ 004f20a8 */
    (*(code *)(&PTR_FUN_00d1f820)[bVar2])(auStack_58,param_1 + 4,param_2 + 4);
    *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  uVar11 = *(long *)(param_2 + 0x28) - *(long *)(param_2 + 0x24);
  if (uVar11 != 0) {
    if ((long)uVar11 < 0) {
      if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 004f208c to 004f2093 has its CatchHandler @ 004f20f0 */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(param_1 + 0x24);
      }
      goto LAB_004f2114;
    }
                    /* try { // try from 004f1f08 to 004f1f0f has its CatchHandler @ 004f20f0 */
    puVar6 = (undefined1 *)operator_new(uVar11);
    *(undefined1 **)(param_1 + 0x24) = puVar6;
    *(undefined1 **)(param_1 + 0x28) = puVar6;
    *(undefined1 **)(param_1 + 0x2c) = puVar6 + uVar11;
    puVar8 = *(undefined1 **)(param_2 + 0x24);
    puVar1 = *(undefined1 **)(param_2 + 0x28);
    puVar7 = puVar6;
    if (puVar8 != puVar1) {
      uVar11 = (long)puVar1 - (long)puVar8;
      puVar10 = puVar8;
      if ((0x1f < uVar11) && (0x1f < (ulong)((long)puVar6 - (long)puVar8))) {
        uVar12 = uVar11 & 0xffffffffffffffe0;
        puVar13 = (undefined8 *)(puVar6 + 0x10);
        puVar10 = puVar8 + uVar12;
        puVar6 = puVar6 + uVar12;
        puVar9 = (undefined8 *)(puVar8 + 0x10);
        uVar14 = uVar12;
        do {
          puVar5 = puVar9 + -1;
          uVar15 = puVar9[-2];
          uVar17 = puVar9[1];
          uVar16 = *puVar9;
          puVar9 = puVar9 + 4;
          uVar14 = uVar14 - 0x20;
          puVar13[-1] = *puVar5;
          puVar13[-2] = uVar15;
          puVar13[1] = uVar17;
          *puVar13 = uVar16;
          puVar13 = puVar13 + 4;
        } while (uVar14 != 0);
        puVar7 = puVar6;
        if (uVar11 == uVar12) goto LAB_004f1f9c;
      }
      do {
        puVar8 = puVar10 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = *puVar10;
        puVar6 = puVar7;
        puVar10 = puVar8;
      } while (puVar8 != puVar1);
    }
LAB_004f1f9c:
    *(undefined1 **)(param_1 + 0x28) = puVar7;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  uVar11 = *(long *)(param_2 + 0x34) - *(long *)(param_2 + 0x30);
  if (uVar11 != 0) {
    if ((long)uVar11 < 0) {
      if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 004f20a4 to 004f20a7 has its CatchHandler @ 004f20e0 */
        FUN_004f04ec();
      }
      goto LAB_004f2114;
    }
                    /* try { // try from 004f1fbc to 004f1fc3 has its CatchHandler @ 004f20e0 */
    puVar6 = (undefined1 *)operator_new(uVar11);
    *(undefined1 **)(param_1 + 0x30) = puVar6;
    *(undefined1 **)(param_1 + 0x34) = puVar6;
    *(undefined1 **)(param_1 + 0x38) = puVar6 + uVar11;
    puVar8 = *(undefined1 **)(param_2 + 0x30);
    puVar1 = *(undefined1 **)(param_2 + 0x34);
    puVar7 = puVar6;
    if (puVar8 != puVar1) {
      uVar11 = (long)puVar1 - (long)puVar8;
      puVar10 = puVar8;
      if ((0x1f < uVar11) && (0x1f < (ulong)((long)puVar6 - (long)puVar8))) {
        uVar12 = uVar11 & 0xffffffffffffffe0;
        puVar13 = (undefined8 *)(puVar6 + 0x10);
        puVar10 = puVar8 + uVar12;
        puVar6 = puVar6 + uVar12;
        puVar9 = (undefined8 *)(puVar8 + 0x10);
        uVar14 = uVar12;
        do {
          puVar5 = puVar9 + -1;
          uVar15 = puVar9[-2];
          uVar17 = puVar9[1];
          uVar16 = *puVar9;
          puVar9 = puVar9 + 4;
          uVar14 = uVar14 - 0x20;
          puVar13[-1] = *puVar5;
          puVar13[-2] = uVar15;
          puVar13[1] = uVar17;
          *puVar13 = uVar16;
          puVar13 = puVar13 + 4;
        } while (uVar14 != 0);
        puVar7 = puVar6;
        if (uVar11 == uVar12) goto LAB_004f2050;
      }
      do {
        puVar8 = puVar10 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = *puVar10;
        puVar6 = puVar7;
        puVar10 = puVar8;
      } while (puVar8 != puVar1);
    }
LAB_004f2050:
    *(undefined1 **)(param_1 + 0x34) = puVar7;
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
LAB_004f2114:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f2118  FUN_004f2118 =====

long FUN_004f2118(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (param_2 != param_3) {
    do {
      if (param_4 == 0) {
        if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* try { // try from 004f21bc to 004f21e3 has its CatchHandler @ 004f21e8 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        goto LAB_004f223c;
      }
                    /* try { // try from 004f2160 to 004f216b has its CatchHandler @ 004f21e4 */
      FUN_004f2324(param_4,param_2);
      param_4 = param_4 + 0x58;
      param_2 = param_2 + 0x58;
    } while (param_2 != param_3);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return param_4;
  }
LAB_004f223c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f2244  FUN_004f2244 =====

void FUN_004f2244(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar5 = (undefined8 *)**(undefined8 **)(param_1 + 8);
  puVar6 = (undefined8 *)**(undefined8 **)(param_1 + 0x10);
  while (puVar2 = puVar6, puVar2 != puVar5) {
    if ((ulong)*(byte *)(puVar2 + -1) != 0xff) {
                    /* try { // try from 004f22ac to 004f22b3 has its CatchHandler @ 004f2320 */
      (*(code *)(&PTR_FUN_00d1f800)[*(byte *)(puVar2 + -1)])(auStack_50,puVar2 + -8);
    }
    puVar3 = (undefined1 *)puVar2[-0xb];
    puVar6 = puVar2 + -0xb;
    *(undefined1 *)(puVar2 + -1) = 0xff;
    if (0 < puVar2[-10] - (long)puVar3) {
      uVar4 = (puVar2[-10] - (long)puVar3) + 1;
      do {
        uVar4 = uVar4 - 1;
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      } while (1 < uVar4);
      puVar3 = (undefined1 *)*puVar6;
    }
    if (puVar3 != (undefined1 *)0x0) {
      puVar2[-10] = puVar3;
      operator_delete(puVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004f2324  FUN_004f2324 =====

void FUN_004f2324(undefined8 *param_1,long *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_48 [16];
  long local_38;
  undefined1 *puVar8;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar9 = param_2[1] - *param_2;
  if (uVar9 != 0) {
    if ((long)uVar9 < 0) {
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(param_1);
      }
      goto LAB_004f24c8;
    }
    puVar4 = (undefined1 *)operator_new(uVar9);
    *param_1 = puVar4;
    param_1[1] = puVar4;
    param_1[2] = puVar4 + uVar9;
    puVar7 = (undefined1 *)*param_2;
    puVar1 = (undefined1 *)param_2[1];
    puVar5 = puVar4;
    if (puVar7 != puVar1) {
      uVar9 = (long)puVar1 - (long)puVar7;
      puVar8 = puVar7;
      if ((0x1f < uVar9) && (0x1f < (ulong)((long)puVar4 - (long)puVar7))) {
        uVar10 = uVar9 & 0xffffffffffffffe0;
        puVar11 = (undefined8 *)(puVar4 + 0x10);
        puVar8 = puVar7 + uVar10;
        puVar4 = puVar4 + uVar10;
        puVar6 = (undefined8 *)(puVar7 + 0x10);
        uVar12 = uVar10;
        do {
          puVar3 = puVar6 + -1;
          uVar13 = puVar6[-2];
          uVar15 = puVar6[1];
          uVar14 = *puVar6;
          puVar6 = puVar6 + 4;
          uVar12 = uVar12 - 0x20;
          puVar11[-1] = *puVar3;
          puVar11[-2] = uVar13;
          puVar11[1] = uVar15;
          *puVar11 = uVar14;
          puVar11 = puVar11 + 4;
        } while (uVar12 != 0);
        puVar5 = puVar4;
        if (uVar9 == uVar10) goto LAB_004f23f8;
      }
      do {
        puVar7 = puVar8 + 1;
        puVar5 = puVar4 + 1;
        *puVar4 = *puVar8;
        puVar4 = puVar5;
        puVar8 = puVar7;
      } while (puVar7 != puVar1);
    }
LAB_004f23f8:
    param_1[1] = puVar5;
  }
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 10) = 0xff;
  if ((ulong)*(byte *)(param_2 + 10) != 0xff) {
                    /* try { // try from 004f2428 to 004f2433 has its CatchHandler @ 004f2478 */
    (*(code *)(&PTR_FUN_00d1f820)[*(byte *)(param_2 + 10)])(auStack_48,param_1 + 3,param_2 + 3);
    *(char *)(param_1 + 10) = (char)param_2[10];
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004f24c8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f24d0  FUN_004f24d0 =====

void FUN_004f24d0(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined8 local_50;
  long local_48;
  undefined1 *puVar8;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_60 = (undefined1 *)0x0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
                    /* try { // try from 004f2504 to 004f25fb has its CatchHandler @ 004f25fc */
  FUN_004f2630(&local_60,param_2);
  puVar5 = local_58;
  puVar4 = local_60;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = (long)local_58 - (long)local_60;
  if (uVar1 != 0) {
    if ((long)uVar1 < 0) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(param_1);
      }
      goto LAB_004f262c;
    }
    puVar6 = (undefined1 *)operator_new(uVar1);
    *param_1 = puVar6;
    param_1[1] = puVar6;
    param_1[2] = puVar6 + uVar1;
    puVar8 = puVar4;
    if ((uVar1 < 0x20) || ((ulong)((long)puVar6 - (long)puVar4) < 0x20)) {
LAB_004f2598:
      do {
        puVar7 = puVar8 + 1;
        puVar9 = puVar6 + 1;
        *puVar6 = *puVar8;
        puVar8 = puVar7;
        puVar6 = puVar9;
      } while (puVar7 != puVar5);
    }
    else {
      uVar10 = uVar1 & 0xffffffffffffffe0;
      puVar11 = (undefined8 *)(puVar6 + 0x10);
      puVar9 = puVar6 + uVar10;
      puVar12 = (undefined8 *)(puVar4 + 0x10);
      uVar13 = uVar10;
      do {
        puVar3 = puVar12 + -1;
        uVar14 = puVar12[-2];
        uVar16 = puVar12[1];
        uVar15 = *puVar12;
        puVar12 = puVar12 + 4;
        uVar13 = uVar13 - 0x20;
        puVar11[-1] = *puVar3;
        puVar11[-2] = uVar14;
        puVar11[1] = uVar16;
        *puVar11 = uVar15;
        puVar11 = puVar11 + 4;
      } while (uVar13 != 0);
      puVar8 = puVar4 + uVar10;
      puVar6 = puVar9;
      if (uVar1 != uVar10) goto LAB_004f2598;
    }
    param_1[1] = puVar9;
  }
  if (puVar4 != (undefined1 *)0x0) {
    local_58 = puVar4;
    operator_delete(puVar4);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_004f262c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f2630  FUN_004f2630 =====

undefined8 FUN_004f2630(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *local_80;
  void *local_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined1 **local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar3 = *param_2;
  lVar1 = param_2[1];
  local_80 = (void *)0x0;
  local_78 = (void *)0x0;
  local_70 = 0;
  if (lVar3 == lVar1) {
    local_60 = (undefined1 **)0x0;
  }
  else {
    do {
                    /* try { // try from 004f2680 to 004f26b3 has its CatchHandler @ 004f274c */
      FUN_004f277c(&local_80,lVar3);
      if ((ulong)*(byte *)(lVar3 + 0x50) == 0xff) {
        local_68 = (undefined1 *)&local_80;
        if (*(long *)(lVar2 + 0x28) == local_58) {
          local_68 = (undefined1 *)&local_80;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 004f273c to 004f273f has its CatchHandler @ 004f2748 */
          FUN_004f2868();
        }
        goto LAB_004f2778;
      }
      local_68 = (undefined1 *)&local_80;
      local_60 = &local_68;
      (*(code *)(&PTR_FUN_00d1f840)[*(byte *)(lVar3 + 0x50)])(&local_60,lVar3 + 0x18);
      lVar3 = lVar3 + 0x58;
    } while (lVar3 != lVar1);
    local_60 = (undefined1 **)((long)local_78 - (long)local_80);
  }
                    /* try { // try from 004f26d4 to 004f26df has its CatchHandler @ 004f2744 */
  FUN_005a3440(param_1,&local_60);
                    /* try { // try from 004f26e0 to 004f26eb has its CatchHandler @ 004f2740 */
  FUN_005a2d20(param_1,&local_80);
  if (local_80 != (void *)0x0) {
    local_78 = local_80;
    operator_delete(local_80);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return param_1;
  }
LAB_004f2778:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f277c  FUN_004f277c =====

undefined8 FUN_004f277c(undefined8 param_1,long *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long local_58;
  void *local_50;
  void *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined1 *)*param_2;
  puVar1 = (undefined1 *)param_2[1];
  local_50 = (void *)0x0;
  local_48 = (void *)0x0;
  local_40 = 0;
  if (puVar3 == puVar1) {
    local_58 = 0;
  }
  else {
    do {
                    /* try { // try from 004f27b8 to 004f27bf has its CatchHandler @ 004f2838 */
      FUN_005a2e60(&local_50,*puVar3);
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar1);
    local_58 = (long)local_48 - (long)local_50;
  }
                    /* try { // try from 004f27e0 to 004f27eb has its CatchHandler @ 004f2834 */
  FUN_005a3440(param_1,&local_58);
                    /* try { // try from 004f27ec to 004f27f7 has its CatchHandler @ 004f2830 */
  FUN_005a2d20(param_1,&local_50);
  if (local_50 != (void *)0x0) {
    local_48 = local_50;
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f2868  FUN_004f2868 =====

void FUN_004f2868(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_0054f64c(8);
  *plVar1 = (long)(PTR_DAT_00d51d00 + 0x10);
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(plVar1,&PTR_PTR_thunk_FUN_00552768_00d22460,PTR_FUN_00d51d08);
}


// ===== 004f289c  FUN_004f289c =====

void FUN_004f289c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_005a2eb4(*(undefined8 *)*param_1,1);
  FUN_004f277c(uVar1,param_2);
  return;
}


// ===== 004f28cc  FUN_004f28cc =====

void FUN_004f28cc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_005a2eb4(*(undefined8 *)*param_1,2);
  thunk_FUN_0055efd8(uVar1,param_2);
  return;
}


// ===== 004f28fc  FUN_004f28fc =====

void FUN_004f28fc(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  void *local_40;
  void *local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_005a2eb4(*(undefined8 *)*param_1,0xfe00);
  FUN_0055f98c(&local_40,uVar2,param_2);
  if (local_40 != (void *)0x0) {
    local_38 = local_40;
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f296c  FUN_004f296c =====

void FUN_004f296c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_005a2eb4(*(undefined8 *)*param_1,0xff00);
  FUN_004f299c(uVar1,param_2);
  return;
}


// ===== 004f299c  FUN_004f299c =====

undefined8 FUN_004f299c(undefined8 param_1,long *param_2)

{
  undefined2 *puVar1;
  long lVar2;
  undefined2 *puVar3;
  void *local_80;
  void *local_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined1 **local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined2 *)*param_2;
  puVar1 = (undefined2 *)param_2[1];
  local_80 = (void *)0x0;
  local_78 = (void *)0x0;
  local_70 = 0;
  if (puVar3 == puVar1) {
    local_60 = (undefined1 **)0x0;
  }
  else {
    do {
                    /* try { // try from 004f29f0 to 004f2a3f has its CatchHandler @ 004f2ad8 */
      FUN_005a2eb4(&local_80,*puVar3);
      if ((ulong)*(byte *)(puVar3 + 0x20) == 0xff) {
        local_68 = (undefined1 *)&local_80;
        if (*(long *)(lVar2 + 0x28) == local_58) {
          local_68 = (undefined1 *)&local_80;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 004f2ac8 to 004f2acb has its CatchHandler @ 004f2ad4 */
          FUN_004f2868();
        }
        goto LAB_004f2b04;
      }
      local_68 = (undefined1 *)&local_80;
      local_60 = &local_68;
      (*(code *)(&PTR_FUN_00d1f840)[*(byte *)(puVar3 + 0x20)])(&local_60,puVar3 + 4);
      FUN_004f277c(&local_80,puVar3 + 0x24);
      FUN_004f277c(&local_80,puVar3 + 0x30);
      puVar3 = puVar3 + 0x3c;
    } while (puVar3 != puVar1);
    local_60 = (undefined1 **)((long)local_78 - (long)local_80);
  }
                    /* try { // try from 004f2a60 to 004f2a6b has its CatchHandler @ 004f2ad0 */
  FUN_005a3440(param_1,&local_60);
                    /* try { // try from 004f2a6c to 004f2a77 has its CatchHandler @ 004f2acc */
  FUN_005a2d20(param_1,&local_80);
  if (local_80 != (void *)0x0) {
    local_78 = local_80;
    operator_delete(local_80);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return param_1;
  }
LAB_004f2b04:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f2b08  _INIT_9 =====

void _INIT_9(void)

{
  int iVar1;
  
  if (((DAT_00d61108 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d61108), iVar1 != 0)) {
                    /* try { // try from 004f2b34 to 004f2b47 has its CatchHandler @ 004f2b84 */
    FUN_004a3cf4(&DAT_00d610f0,"Discord Secure Frames v0");
    __cxa_atexit(PTR_FUN_00d51c00,&DAT_00d610f0,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d61108);
    return;
  }
  return;
}


// ===== 004f2b9c  FUN_004f2b9c =====

void FUN_004f2b9c(undefined8 param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1;
                    /* try { // try from 004f2bbc to 004f2bc3 has its CatchHandler @ 004f2be8 */
  FUN_004f2bec(&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f2bec  FUN_004f2bec =====

void * FUN_004f2bec(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  void *local_88 [2];
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 *local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x110);
  uVar3 = *param_1;
                    /* try { // try from 004f2c2c to 004f2c37 has its CatchHandler @ 004f2cdc */
  FUN_004c55b4(local_88,param_2);
  local_60 = param_3[2];
  local_58 = (undefined8 *)param_3[3];
  uStack_68 = param_3[1];
  local_70 = *param_3;
  if ((code *)*local_58 != (code *)0x0) {
                    /* try { // try from 004f2c54 to 004f2c57 has its CatchHandler @ 004f2cc4 */
    local_70 = (*(code *)*local_58)(*param_3);
  }
  FUN_004f2d04(pvVar2,uVar3,local_88,&local_70);
  if ((code *)local_58[1] != (code *)0x0) {
                    /* try { // try from 004f2c80 to 004f2c83 has its CatchHandler @ 004f2cc0 */
    (*(code *)local_58[1])(local_70);
  }
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f2d04  FUN_004f2d04 =====

void FUN_004f2d04(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [264];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00d1f870;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
                    /* try { // try from 004f2d4c to 004f2de7 has its CatchHandler @ 004f2e1c */
  FUN_004c55b4(param_1 + 5,param_3);
  param_1[0x18] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = param_2;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x1b] = param_1 + 0x1b;
  param_1[0x1c] = param_1 + 0x1b;
  param_1[0x1d] = 0;
  uVar3 = *param_4;
  param_1[0x1f] = param_4[1];
  param_1[0x1e] = uVar3;
  param_1[0x20] = param_4[2];
  lVar2 = param_4[3];
  param_1[0x21] = lVar2;
  if (*(long *)(lVar2 + 8) != 0) {
    param_4[2] = FUN_0041829c;
    param_4[3] = &DAT_001f1910;
  }
  FUN_004f0510(auStack_168,1,
               "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x33);
  FUN_00428964(auStack_150,"Creating a new MLS session",0x1a);
  FUN_004f0604(auStack_168);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f2e20  FUN_004f2e20 =====

void FUN_004f2e20(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined1 *puVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pcVar5 = *(code **)(*(long *)(param_1 + 0x108) + 8);
  if (pcVar5 != (code *)0x0) {
                    /* try { // try from 004f2e58 to 004f2e5b has its CatchHandler @ 004f31f0 */
    (*pcVar5)(*(undefined8 *)(param_1 + 0xf0));
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    lVar7 = *(long *)(param_1 + 0xd8);
    plVar11 = *(long **)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xe8) = 0;
    lVar8 = *plVar11;
    *(undefined8 *)(lVar8 + 8) = *(undefined8 *)(lVar7 + 8);
    **(long **)(lVar7 + 8) = lVar8;
    while (plVar11 != (long *)(param_1 + 0xd8)) {
      puVar4 = (undefined1 *)plVar11[0x48];
      plVar12 = (long *)plVar11[1];
      if (0 < plVar11[0x49] - (long)puVar4) {
        uVar6 = (plVar11[0x49] - (long)puVar4) + 1;
        do {
          uVar6 = uVar6 - 1;
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        } while (1 < uVar6);
        puVar4 = (undefined1 *)plVar11[0x48];
      }
      if (puVar4 != (undefined1 *)0x0) {
        plVar11[0x49] = (long)puVar4;
        operator_delete(puVar4);
      }
      FUN_004fda20(plVar11 + 2);
      operator_delete(plVar11);
      plVar11 = plVar12;
    }
  }
  pvVar9 = *(void **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if (pvVar9 != (void *)0x0) {
    FUN_004fb91c(pvVar9);
    operator_delete(pvVar9);
  }
  FUN_00442104(param_1 + 0xb8,*(undefined8 *)(param_1 + 0xc0));
  pvVar9 = *(void **)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (pvVar9 != (void *)0x0) {
    FUN_004fb91c(pvVar9);
    operator_delete(pvVar9);
  }
  pvVar9 = *(void **)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (pvVar9 != (void *)0x0) {
    FUN_004fb91c(pvVar9);
    operator_delete(pvVar9);
  }
  pvVar9 = *(void **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (pvVar9 != (void *)0x0) {
    if ((ulong)*(byte *)((long)pvVar9 + 0x250) != 0xff) {
                    /* try { // try from 004f2f14 to 004f2f1b has its CatchHandler @ 004f31ec */
      (*(code *)(&PTR_FUN_00d1fac0)[*(byte *)((long)pvVar9 + 0x250)])(auStack_58,(long)pvVar9 + 8);
    }
    operator_delete(pvVar9);
  }
  pvVar9 = *(void **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (pvVar9 != (void *)0x0) {
    FUN_004fb91c(pvVar9);
    operator_delete(pvVar9);
  }
  puVar10 = *(undefined8 **)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (puVar10 != (undefined8 *)0x0) {
    if ((ulong)*(byte *)(puVar10 + 10) != 0xff) {
                    /* try { // try from 004f2f68 to 004f2f6f has its CatchHandler @ 004f31e8 */
      (*(code *)(&PTR_FUN_00d1f9c8)[*(byte *)(puVar10 + 10)])(auStack_50,puVar10 + 3);
    }
    puVar4 = (undefined1 *)*puVar10;
    *(undefined1 *)(puVar10 + 10) = 0xff;
    if (0 < puVar10[1] - (long)puVar4) {
      uVar6 = (puVar10[1] - (long)puVar4) + 1;
      do {
        uVar6 = uVar6 - 1;
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      } while (1 < uVar6);
      puVar4 = (undefined1 *)*puVar10;
    }
    if (puVar4 != (undefined1 *)0x0) {
      puVar10[1] = puVar4;
      operator_delete(puVar4);
    }
    operator_delete(puVar10);
  }
  pvVar9 = *(void **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (pvVar9 != (void *)0x0) {
    FUN_004fc83c(pvVar9);
    operator_delete(pvVar9);
  }
  puVar10 = *(undefined8 **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (puVar10 != (undefined8 *)0x0) {
    puVar4 = (undefined1 *)puVar10[3];
    if (0 < puVar10[4] - (long)puVar4) {
      uVar6 = (puVar10[4] - (long)puVar4) + 1;
      do {
        uVar6 = uVar6 - 1;
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      } while (1 < uVar6);
      puVar4 = (undefined1 *)puVar10[3];
    }
    if (puVar4 != (undefined1 *)0x0) {
      puVar10[4] = puVar4;
      operator_delete(puVar4);
    }
    puVar4 = (undefined1 *)*puVar10;
    if (0 < puVar10[1] - (long)puVar4) {
      uVar6 = (puVar10[1] - (long)puVar4) + 1;
      do {
        uVar6 = uVar6 - 1;
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      } while (1 < uVar6);
      puVar4 = (undefined1 *)*puVar10;
    }
    if (puVar4 != (undefined1 *)0x0) {
      puVar10[1] = puVar4;
      operator_delete(puVar4);
    }
    operator_delete(puVar10);
  }
  puVar10 = *(undefined8 **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (puVar10 != (undefined8 *)0x0) {
    puVar4 = (undefined1 *)puVar10[3];
    if (0 < puVar10[4] - (long)puVar4) {
      uVar6 = (puVar10[4] - (long)puVar4) + 1;
      do {
        uVar6 = uVar6 - 1;
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      } while (1 < uVar6);
      puVar4 = (undefined1 *)puVar10[3];
    }
    if (puVar4 != (undefined1 *)0x0) {
      puVar10[4] = puVar4;
      operator_delete(puVar4);
    }
    puVar4 = (undefined1 *)*puVar10;
    if (0 < puVar10[1] - (long)puVar4) {
      uVar6 = (puVar10[1] - (long)puVar4) + 1;
      do {
        uVar6 = uVar6 - 1;
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      } while (1 < uVar6);
      puVar4 = (undefined1 *)*puVar10;
    }
    if (puVar4 != (undefined1 *)0x0) {
      puVar10[1] = puVar4;
      operator_delete(puVar4);
    }
    operator_delete(puVar10);
  }
  plVar11 = *(long **)(param_1 + 0x70);
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 1;
    do {
      lVar7 = *plVar12;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar2) {
        *plVar12 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      FUN_005466cc(plVar11);
    }
  }
  pvVar9 = *(void **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (pvVar9 != (void *)0x0) {
    FUN_004fc1d0(pvVar9);
    operator_delete(pvVar9);
  }
  if (*(char *)(param_1 + 0x57) < '\0') {
    operator_delete(*(void **)(param_1 + 0x40));
    cVar1 = *(char *)(param_1 + 0x3f);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x3f);
  }
  if (cVar1 < '\0') {
    operator_delete(*(void **)(param_1 + 0x28));
    pvVar9 = *(void **)(param_1 + 0x10);
  }
  else {
    pvVar9 = *(void **)(param_1 + 0x10);
  }
  if (pvVar9 != (void *)0x0) {
    *(void **)(param_1 + 0x18) = pvVar9;
    operator_delete(pvVar9);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f31f4  FUN_004f31f4 =====

void FUN_004f31f4(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_004fb91c(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 004f3230  FUN_004f3230 =====

void FUN_004f3230(void *param_1)

{
  FUN_004f2e20();
  operator_delete(param_1);
  return;
}


// ===== 004f3254  FUN_004f3254 =====

void FUN_004f3254(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  void *pvVar2;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined1 auStack_168 [272];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_004f33c8();
                    /* try { // try from 004f3298 to 004f338b has its CatchHandler @ 004f33c4 */
  FUN_00411268(param_1 + 0x40,param_4);
  FUN_004f0510(&local_180,1,
               "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x41);
  FUN_00428964(auStack_168,"Initializing MLS session with protocol version ",0x2f);
  FUN_0054b908(auStack_168,param_2);
  FUN_00428964(auStack_168," and group ID ",0xe);
  FUN_0054c088(auStack_168,param_3);
  FUN_004f0604(&local_180);
  *(short *)(param_1 + 8) = (short)param_2;
  FUN_0050d628(&local_180,param_3);
  pvVar2 = *(void **)(param_1 + 0x10);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x18) = pvVar2;
    operator_delete(pvVar2);
  }
  *(undefined8 *)(param_1 + 0x18) = uStack_178;
  *(undefined8 *)(param_1 + 0x10) = local_180;
  *(undefined8 *)(param_1 + 0x20) = local_170;
  FUN_004f349c(param_1,param_4,param_5);
  if (*(long *)(param_1 + 0x90) == 0) {
    FUN_004f0510(&local_180,1,
                 "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x4c);
    FUN_00428964(auStack_168,"Waiting for external sender to create a pending group",0x35);
    FUN_004f0604(&local_180);
  }
  else {
    FUN_004f3d2c(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f33c8  FUN_004f33c8 =====

void FUN_004f33c8(long param_1)

{
  long lVar1;
  void *pvVar2;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [264];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 004f33ec to 004f341b has its CatchHandler @ 004f3498 */
  FUN_004f0510(auStack_158,1,
               "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x52);
  FUN_00428964(auStack_140,"Resetting MLS session",0x15);
  FUN_004f0604(auStack_158);
  FUN_004f40c4(param_1);
  pvVar2 = *(void **)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_004fb91c(pvVar2);
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_004fb91c(pvVar2);
    operator_delete(pvVar2);
  }
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f349c  FUN_004f349c =====

void FUN_004f349c(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *pvVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  long lVar15;
  long *plVar16;
  undefined1 auVar17 [16];
  void *local_1f0;
  void *local_1e8;
  undefined1 local_1d8 [16];
  undefined2 local_1c8 [4];
  undefined1 *local_1c0;
  undefined1 *puStack_1b8;
  undefined8 local_1b0;
  undefined1 *local_1a8;
  undefined1 *puStack_1a0;
  undefined8 local_198;
  void *local_190;
  void *local_188;
  void *local_178;
  void *local_170;
  void *local_160;
  void *local_158;
  undefined1 auStack_98 [56];
  byte local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_1c8[0] = FUN_004f0b08(*(undefined2 *)(param_1 + 8));
  plVar16 = *(long **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (plVar16 == (long *)0x0) {
LAB_004f3500:
    lVar12 = *param_3;
  }
  else {
    plVar1 = plVar16 + 1;
    do {
      lVar12 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 != 0) goto LAB_004f3500;
    (**(code **)(*plVar16 + 0x10))(plVar16);
    FUN_005466cc(plVar16);
    lVar12 = *param_3;
  }
  if (lVar12 == 0) {
    uVar11 = *(ulong *)(param_1 + 0x30);
    if (-1 < (char)*(byte *)(param_1 + 0x3f)) {
      uVar11 = (ulong)*(byte *)(param_1 + 0x3f);
    }
    if (uVar11 != 0) {
                    /* try { // try from 004f352c to 004f352f has its CatchHandler @ 004f3a6c */
      auVar17 = FUN_0050dfc0(*(undefined8 *)(param_1 + 0x58),param_1 + 0x28,
                             *(undefined2 *)(param_1 + 8));
      lVar12 = auVar17._0_8_;
      plVar16 = *(long **)(param_1 + 0x70);
      *(undefined1 (*) [16])(param_1 + 0x68) = auVar17;
      if (plVar16 != (long *)0x0) {
        plVar1 = plVar16 + 1;
        do {
          lVar12 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          FUN_005466cc(plVar16);
        }
        lVar12 = *(long *)(param_1 + 0x68);
      }
      if (lVar12 == 0) {
        uVar8 = FUN_0054f64c(0x10);
                    /* try { // try from 004f3580 to 004f358b has its CatchHandler @ 004f3a40 */
        FUN_0054723c(uVar8,"Generic failure in GetPersistedKeyPair");
        if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* try { // try from 004f359c to 004f35b3 has its CatchHandler @ 004f3a3c */
                    /* WARNING: Subroutine does not return */
          FUN_0054f748(uVar8,&PTR_PTR_thunk_FUN_00552768_00d23c78,PTR_FUN_00d51d10);
        }
        goto LAB_004f3a38;
      }
    }
  }
  if (*(long *)(param_1 + 0x68) == 0) {
    lVar12 = *param_3;
    if (lVar12 == 0) {
                    /* try { // try from 004f36bc to 004f36c3 has its CatchHandler @ 004f3a68 */
      FUN_005650ec(&local_1c0,local_1c8[0]);
                    /* try { // try from 004f36c4 to 004f36cb has its CatchHandler @ 004f3a54 */
      puVar9 = (undefined8 *)operator_new(0x48);
      puVar10 = local_1a8;
      plVar16 = (long *)param_3[1];
      puVar9[2] = 0;
      *puVar9 = &PTR_FUN_00d1f7d8;
      puVar9[1] = 0;
      puVar9[4] = puStack_1b8;
      puVar9[3] = local_1c0;
      local_1c0 = (undefined1 *)0x0;
      puStack_1b8 = (undefined1 *)0x0;
      puVar9[5] = local_1b0;
      local_1b0 = 0;
      local_1a8 = (undefined1 *)0x0;
      puVar9[7] = puStack_1a0;
      puVar9[6] = puVar10;
      puVar9[8] = local_198;
      puStack_1a0 = (undefined1 *)0x0;
      local_198 = 0;
      *param_3 = (long)(puVar9 + 3);
      param_3[1] = (long)puVar9;
      if (plVar16 != (long *)0x0) {
        plVar1 = plVar16 + 1;
        do {
          lVar12 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          FUN_005466cc(plVar16);
        }
      }
      if (0 < (long)puStack_1a0 - (long)local_1a8) {
        uVar11 = ((long)puStack_1a0 - (long)local_1a8) + 1;
        puVar10 = local_1a8;
        do {
          uVar11 = uVar11 - 1;
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        } while (1 < uVar11);
      }
      if (local_1a8 != (undefined1 *)0x0) {
        puStack_1a0 = local_1a8;
        operator_delete(local_1a8);
      }
      if (0 < (long)puStack_1b8 - (long)local_1c0) {
        uVar11 = ((long)puStack_1b8 - (long)local_1c0) + 1;
        puVar10 = local_1c0;
        do {
          uVar11 = uVar11 - 1;
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        } while (1 < uVar11);
      }
      if (local_1c0 != (undefined1 *)0x0) {
        puStack_1b8 = local_1c0;
        operator_delete(local_1c0);
      }
      lVar12 = *param_3;
    }
    lVar15 = param_3[1];
    if (lVar15 != 0) {
      plVar16 = (long *)(lVar15 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = *plVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar16 = *(long **)(param_1 + 0x70);
    *(long *)(param_1 + 0x68) = lVar12;
    *(long *)(param_1 + 0x70) = lVar15;
    if (plVar16 != (long *)0x0) {
      plVar1 = plVar16 + 1;
      do {
        lVar12 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        FUN_005466cc(plVar16);
      }
    }
  }
                    /* try { // try from 004f35e0 to 004f35eb has its CatchHandler @ 004f3d20 */
  FUN_0050d50c(auStack_98,param_2,*(undefined2 *)(param_1 + 8));
                    /* try { // try from 004f35f0 to 004f35f7 has its CatchHandler @ 004f3c20 */
  FUN_00563e48(&local_1c0,local_1c8[0]);
                    /* try { // try from 004f35f8 to 004f35ff has its CatchHandler @ 004f3c0c */
  puVar9 = (undefined8 *)operator_new(0x30);
  puVar7 = local_1a8;
  puVar6 = puStack_1b8;
  puVar10 = local_1c0;
  local_1c0 = (undefined1 *)0x0;
  puStack_1b8 = (undefined1 *)0x0;
  puVar13 = *(undefined8 **)(param_1 + 0x78);
  *(undefined8 **)(param_1 + 0x78) = puVar9;
  puVar9[1] = puVar6;
  *puVar9 = puVar10;
  puVar9[2] = local_1b0;
  local_1b0 = 0;
  local_1a8 = (undefined1 *)0x0;
  puVar9[4] = puStack_1a0;
  puVar9[3] = puVar7;
  puVar9[5] = local_198;
  puStack_1a0 = (undefined1 *)0x0;
  local_198 = 0;
  if (puVar13 != (undefined8 *)0x0) {
    puVar10 = (undefined1 *)puVar13[3];
    if (0 < puVar13[4] - (long)puVar10) {
      uVar11 = (puVar13[4] - (long)puVar10) + 1;
      do {
        uVar11 = uVar11 - 1;
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      } while (1 < uVar11);
      puVar10 = (undefined1 *)puVar13[3];
    }
    if (puVar10 != (undefined1 *)0x0) {
      puVar13[4] = puVar10;
      operator_delete(puVar10);
    }
    puVar10 = (undefined1 *)*puVar13;
    if (0 < puVar13[1] - (long)puVar10) {
      uVar11 = (puVar13[1] - (long)puVar10) + 1;
      do {
        uVar11 = uVar11 - 1;
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      } while (1 < uVar11);
      puVar10 = (undefined1 *)*puVar13;
    }
    if (puVar10 != (undefined1 *)0x0) {
      puVar13[1] = puVar10;
      operator_delete(puVar10);
    }
    operator_delete(puVar13);
  }
  if (0 < (long)puStack_1a0 - (long)local_1a8) {
    uVar11 = ((long)puStack_1a0 - (long)local_1a8) + 1;
    puVar10 = local_1a8;
    do {
      uVar11 = uVar11 - 1;
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    } while (1 < uVar11);
  }
  if (local_1a8 != (undefined1 *)0x0) {
    puStack_1a0 = local_1a8;
    operator_delete(local_1a8);
  }
  if (0 < (long)puStack_1b8 - (long)local_1c0) {
    uVar11 = ((long)puStack_1b8 - (long)local_1c0) + 1;
    puVar10 = local_1c0;
    do {
      uVar11 = uVar11 - 1;
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    } while (1 < uVar11);
  }
  if (local_1c0 != (undefined1 *)0x0) {
    puStack_1b8 = local_1c0;
    operator_delete(local_1c0);
  }
  lVar15 = *(long *)(param_1 + 0x78);
  lVar12 = *(long *)(param_1 + 0x68);
  FUN_004f0bb0(&local_1c0,*(undefined2 *)(param_1 + 8));
                    /* try { // try from 004f3890 to 004f3893 has its CatchHandler @ 004f3bf8 */
  local_1d8 = FUN_0055a9ec();
  FUN_004f0c34(&local_1f0,*(undefined2 *)(param_1 + 8));
                    /* try { // try from 004f38b4 to 004f38d3 has its CatchHandler @ 004f3be4 */
  uVar8 = FUN_004f9728(local_1c8,lVar15 + 0x18,lVar12 + 0x18,auStack_98,&local_1c0,local_1d8,
                       &local_1f0,*(undefined8 *)(param_1 + 0x68));
  pvVar14 = *(void **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar8;
  if (pvVar14 != (void *)0x0) {
    FUN_004fc1d0(pvVar14);
    operator_delete(pvVar14);
  }
  pvVar14 = local_1f0;
  if (local_1f0 != (void *)0x0) {
    while (pvVar5 = local_1e8, pvVar5 != pvVar14) {
      puVar10 = *(undefined1 **)((long)pvVar5 + -0x18);
      lVar12 = *(long *)((long)pvVar5 + -0x10) - (long)puVar10;
      if (0 < lVar12) {
        uVar11 = lVar12 + 1;
        do {
          uVar11 = uVar11 - 1;
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        } while (1 < uVar11);
        puVar10 = *(undefined1 **)((long)pvVar5 + -0x18);
      }
      local_1e8 = (void *)((long)pvVar5 + -0x20);
      if (puVar10 != (undefined1 *)0x0) {
        *(undefined1 **)((long)pvVar5 + -0x10) = puVar10;
        operator_delete(puVar10);
      }
    }
    local_1e8 = pvVar14;
    operator_delete(local_1f0);
  }
  if (local_160 != (void *)0x0) {
    local_158 = local_160;
    operator_delete(local_160);
  }
  if (local_178 != (void *)0x0) {
    local_170 = local_178;
    operator_delete(local_178);
  }
  if (local_190 != (void *)0x0) {
    local_188 = local_190;
    operator_delete(local_190);
  }
  if (local_1a8 != (undefined1 *)0x0) {
    puStack_1a0 = local_1a8;
    operator_delete(local_1a8);
  }
  if (local_1c0 != (undefined1 *)0x0) {
    puStack_1b8 = local_1c0;
    operator_delete(local_1c0);
  }
                    /* try { // try from 004f39b0 to 004f39cb has its CatchHandler @ 004f3be0 */
  FUN_004f0510(&local_1c0,1,
               "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x27a);
                    /* try { // try from 004f39d0 to 004f39df has its CatchHandler @ 004f3bcc */
  FUN_00428964(&local_1a8,"Created MLS leaf node",0x15);
  FUN_004f0604(&local_1c0);
  if ((ulong)local_60 != 0xff) {
                    /* try { // try from 004f3a00 to 004f3a0b has its CatchHandler @ 004f3bc8 */
    (*(code *)(&PTR_FUN_00d1f9c8)[local_60])(&local_1c0,auStack_98);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
LAB_004f3a38:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f3d2c  FUN_004f3d2c =====

void FUN_004f3d2c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined2 local_190 [12];
  void *local_178;
  void *local_170;
  undefined1 auStack_160 [264];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
                    /* try { // try from 004f3e74 to 004f3e8f has its CatchHandler @ 004f3fcc */
    FUN_004f0510(&local_178,3,
                 "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x29e);
                    /* try { // try from 004f3e94 to 004f3ea3 has its CatchHandler @ 004f3fb8 */
    FUN_00428964(auStack_160,"Cannot create MLS group without a group ID",0x2a);
  }
  else if (*(long *)(param_1 + 0x90) == 0) {
                    /* try { // try from 004f3ea8 to 004f3ec3 has its CatchHandler @ 004f3f90 */
    FUN_004f0510(&local_178,3,
                 "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x2a3);
                    /* try { // try from 004f3ec8 to 004f3ed7 has its CatchHandler @ 004f3f8c */
    FUN_00428964(auStack_160,"Cannot create MLS group without ExternalSender",0x2e);
  }
  else if (*(long *)(param_1 + 0x60) == 0) {
                    /* try { // try from 004f3edc to 004f3ef7 has its CatchHandler @ 004f3f88 */
    FUN_004f0510(&local_178,3,
                 "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x2a8);
                    /* try { // try from 004f3efc to 004f3f0b has its CatchHandler @ 004f3f84 */
    FUN_00428964(auStack_160,"Cannot create MLS group without self leaf node",0x2e);
  }
  else {
                    /* try { // try from 004f3d78 to 004f3d93 has its CatchHandler @ 004f3fb4 */
    FUN_004f0510(&local_178,1,
                 "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x2ac);
                    /* try { // try from 004f3d98 to 004f3da7 has its CatchHandler @ 004f3fb0 */
    FUN_00428964(auStack_160,"Creating a pending MLS group",0x1c);
    FUN_004f0604(&local_178);
    local_190[0] = FUN_004f0b08(*(undefined2 *)(param_1 + 8));
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    uVar9 = *(undefined8 *)(param_1 + 0x78);
    FUN_004f0c40(&local_178,*(undefined2 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x90));
                    /* try { // try from 004f3dd8 to 004f3df3 has its CatchHandler @ 004f3f9c */
    uVar4 = FUN_004fa664((long *)(param_1 + 0x10),local_190,uVar9,uVar1,uVar4,&local_178);
    pvVar8 = *(void **)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = uVar4;
    if (pvVar8 != (void *)0x0) {
      FUN_004fb91c(pvVar8);
      operator_delete(pvVar8);
    }
    pvVar8 = local_178;
    if (local_178 != (void *)0x0) {
      while (pvVar3 = local_170, pvVar3 != pvVar8) {
        puVar5 = *(undefined1 **)((long)pvVar3 + -0x18);
        lVar6 = *(long *)((long)pvVar3 + -0x10) - (long)puVar5;
        if (0 < lVar6) {
          uVar7 = lVar6 + 1;
          do {
            uVar7 = uVar7 - 1;
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          } while (1 < uVar7);
          puVar5 = *(undefined1 **)((long)pvVar3 + -0x18);
        }
        local_170 = (void *)((long)pvVar3 + -0x20);
        if (puVar5 != (undefined1 *)0x0) {
          *(undefined1 **)((long)pvVar3 + -0x10) = puVar5;
          operator_delete(puVar5);
        }
      }
      local_170 = pvVar8;
      operator_delete(local_178);
    }
                    /* try { // try from 004f3f1c to 004f3f37 has its CatchHandler @ 004f3f98 */
    FUN_004f0510(&local_178,1,
                 "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x2b8);
                    /* try { // try from 004f3f3c to 004f3f4b has its CatchHandler @ 004f3f94 */
    FUN_00428964(auStack_160,"Created a pending MLS group",0x1b);
  }
  FUN_004f0604(&local_178);
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004f40c4  FUN_004f40c4 =====

void FUN_004f40c4(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  pvVar8 = *(void **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (pvVar8 != (void *)0x0) {
    FUN_004fb91c(pvVar8);
    operator_delete(pvVar8);
  }
  pvVar8 = *(void **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (pvVar8 != (void *)0x0) {
    if ((ulong)*(byte *)((long)pvVar8 + 0x250) != 0xff) {
                    /* try { // try from 004f412c to 004f4133 has its CatchHandler @ 004f433c */
      (*(code *)(&PTR_FUN_00d1fac0)[*(byte *)((long)pvVar8 + 0x250)])(auStack_40,(long)pvVar8 + 8);
    }
    operator_delete(pvVar8);
  }
  puVar9 = *(undefined8 **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (puVar9 != (undefined8 *)0x0) {
    puVar4 = (undefined1 *)puVar9[3];
    if (0 < puVar9[4] - (long)puVar4) {
      uVar5 = (puVar9[4] - (long)puVar4) + 1;
      do {
        uVar5 = uVar5 - 1;
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      } while (1 < uVar5);
      puVar4 = (undefined1 *)puVar9[3];
    }
    if (puVar4 != (undefined1 *)0x0) {
      puVar9[4] = puVar4;
      operator_delete(puVar4);
    }
    puVar4 = (undefined1 *)*puVar9;
    if (0 < puVar9[1] - (long)puVar4) {
      uVar5 = (puVar9[1] - (long)puVar4) + 1;
      do {
        uVar5 = uVar5 - 1;
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      } while (1 < uVar5);
      puVar4 = (undefined1 *)*puVar9;
    }
    if (puVar4 != (undefined1 *)0x0) {
      puVar9[1] = puVar4;
      operator_delete(puVar4);
    }
    operator_delete(puVar9);
  }
  pvVar8 = *(void **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (pvVar8 != (void *)0x0) {
    FUN_004fc83c(pvVar8);
    operator_delete(pvVar8);
  }
  puVar9 = *(undefined8 **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (puVar9 != (undefined8 *)0x0) {
    puVar4 = (undefined1 *)puVar9[3];
    if (0 < puVar9[4] - (long)puVar4) {
      uVar5 = (puVar9[4] - (long)puVar4) + 1;
      do {
        uVar5 = uVar5 - 1;
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      } while (1 < uVar5);
      puVar4 = (undefined1 *)puVar9[3];
    }
    if (puVar4 != (undefined1 *)0x0) {
      puVar9[4] = puVar4;
      operator_delete(puVar4);
    }
    puVar4 = (undefined1 *)*puVar9;
    if (0 < puVar9[1] - (long)puVar4) {
      uVar5 = (puVar9[1] - (long)puVar4) + 1;
      do {
        uVar5 = uVar5 - 1;
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      } while (1 < uVar5);
      puVar4 = (undefined1 *)*puVar9;
    }
    if (puVar4 != (undefined1 *)0x0) {
      puVar9[1] = puVar4;
      operator_delete(puVar4);
    }
    operator_delete(puVar9);
  }
  pvVar8 = *(void **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (pvVar8 != (void *)0x0) {
    FUN_004fc1d0(pvVar8);
    operator_delete(pvVar8);
  }
  pvVar8 = *(void **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if (pvVar8 != (void *)0x0) {
    FUN_004fb91c(pvVar8);
    operator_delete(pvVar8);
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    lVar1 = *(long *)(param_1 + 0xd8);
    plVar2 = *(long **)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xe8) = 0;
    lVar6 = *plVar2;
    *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar6;
    while (plVar2 != (long *)(param_1 + 0xd8)) {
      puVar4 = (undefined1 *)plVar2[0x48];
      plVar7 = (long *)plVar2[1];
      if (0 < plVar2[0x49] - (long)puVar4) {
        uVar5 = (plVar2[0x49] - (long)puVar4) + 1;
        do {
          uVar5 = uVar5 - 1;
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        } while (1 < uVar5);
        puVar4 = (undefined1 *)plVar2[0x48];
      }
      if (puVar4 != (undefined1 *)0x0) {
        plVar2[0x49] = (long)puVar4;
        operator_delete(puVar4);
      }
      FUN_004fda20(plVar2 + 2);
      operator_delete(plVar2);
      plVar2 = plVar7;
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004f4340  FUN_004f4340 =====

void FUN_004f4340(long param_1,short param_2)

{
  if (*(short *)(param_1 + 8) != param_2) {
    *(short *)(param_1 + 8) = param_2;
  }
  return;
}


// ===== 004f4354  FUN_004f4354 =====

void FUN_004f4354(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined1 auStack_148 [272];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_2 + 0xb0) == 0) {
    FUN_004f0510(&local_160,3,
                 "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x6a);
    FUN_00428964(auStack_148,"Cannot get epoch authenticator without an established MLS group",0x3f)
    ;
    FUN_004f0604(&local_160);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
                    /* try { // try from 004f4380 to 004f43cb has its CatchHandler @ 004f4404 */
    FUN_00586834(&local_160);
    param_1[1] = uStack_158;
    *param_1 = local_160;
    param_1[2] = local_150;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f4408  FUN_004f4408 =====

void FUN_004f4408(long param_1,long *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined1 *puStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong local_130;
  long local_58;
  undefined1 *puVar13;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(long *)(param_1 + 0xb0) != 0) {
    uVar5 = FUN_0054f64c(0x10);
                    /* try { // try from 004f4770 to 004f477b has its CatchHandler @ 004f47d4 */
    FUN_00547104(uVar5,"Cannot set external sender after joining/creating an MLS group");
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 004f478c to 004f47a3 has its CatchHandler @ 004f47d0 */
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar5,&PTR_PTR_thunk_FUN_00552768_00d23b60,PTR_FUN_00d51d20);
    }
    goto LAB_004f47bc;
  }
                    /* try { // try from 004f443c to 004f445b has its CatchHandler @ 004f4824 */
  FUN_004f0510(&local_180,1,
               "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x77);
                    /* try { // try from 004f4460 to 004f446f has its CatchHandler @ 004f4820 */
  FUN_00428964(&uStack_168,"Unmarshalling MLS external sender",0x21);
  FUN_004f0604(&local_180);
                    /* try { // try from 004f4478 to 004f4493 has its CatchHandler @ 004f481c */
  FUN_004f0510(&local_180,1,
               "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x79);
                    /* try { // try from 004f4498 to 004f44ab has its CatchHandler @ 004f4818 */
  FUN_00428964(&uStack_168,"Sender: ",8);
  puVar12 = (undefined1 *)*param_2;
  puVar1 = (undefined1 *)param_2[1];
  local_198 = (undefined1 *)0x0;
  local_190 = (undefined1 *)0x0;
  local_188 = (undefined1 *)0x0;
  uVar8 = (long)puVar1 - (long)puVar12;
  if (uVar8 != 0) {
    if ((long)uVar8 < 0) {
      if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 004f47b4 to 004f47bb has its CatchHandler @ 004f4830 */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_198);
      }
      goto LAB_004f47bc;
    }
                    /* try { // try from 004f44c4 to 004f44cb has its CatchHandler @ 004f4830 */
    local_198 = (undefined1 *)operator_new(uVar8);
    local_188 = local_198 + uVar8;
    puVar7 = local_198;
    puVar13 = puVar12;
    if ((0x1f < uVar8) && (0x1f < (ulong)((long)local_198 - (long)puVar12))) {
      uVar9 = uVar8 & 0xffffffffffffffe0;
      puVar4 = (undefined8 *)(local_198 + 0x10);
      puVar13 = puVar12 + uVar9;
      puVar7 = local_198 + uVar9;
      puVar11 = (undefined8 *)(puVar12 + 0x10);
      uVar10 = uVar9;
      do {
        puVar3 = puVar11 + -1;
        uVar5 = puVar11[-2];
        uVar15 = puVar11[1];
        uVar14 = *puVar11;
        puVar11 = puVar11 + 4;
        uVar10 = uVar10 - 0x20;
        puVar4[-1] = *puVar3;
        puVar4[-2] = uVar5;
        puVar4[1] = uVar15;
        *puVar4 = uVar14;
        puVar4 = puVar4 + 4;
      } while (uVar10 != 0);
      local_190 = puVar7;
      if (uVar8 == uVar9) goto LAB_004f4544;
    }
    do {
      puVar12 = puVar13 + 1;
      local_190 = puVar7 + 1;
      *puVar7 = *puVar13;
      puVar7 = local_190;
      puVar13 = puVar12;
    } while (puVar12 != puVar1);
  }
LAB_004f4544:
                    /* try { // try from 004f4544 to 004f454f has its CatchHandler @ 004f4804 */
  FUN_005a2b88(&uStack_168,&local_198);
  if (0 < (long)local_190 - (long)local_198) {
    uVar8 = ((long)local_190 - (long)local_198) + 1;
    puVar12 = local_198;
    do {
      uVar8 = uVar8 - 1;
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    } while (1 < uVar8);
  }
  if (local_198 != (undefined1 *)0x0) {
    local_190 = local_198;
    operator_delete(local_198);
  }
  FUN_004f0604(&local_180);
  local_130 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  puStack_178 = (undefined1 *)0x0;
  local_180 = (undefined1 *)0x0;
                    /* try { // try from 004f45a0 to 004f45ab has its CatchHandler @ 004f47f0 */
  FUN_00506044(param_2,&local_180);
                    /* try { // try from 004f45ac to 004f45b3 has its CatchHandler @ 004f47ec */
  puVar4 = (undefined8 *)operator_new(0x58);
  uVar5 = local_170;
  puVar1 = puStack_178;
  puVar12 = local_180;
  puStack_178 = (undefined1 *)0x0;
  local_170 = 0;
  puVar4[2] = uVar5;
  uVar6 = 0xff;
  local_180 = (undefined1 *)0x0;
  puVar4[1] = puVar1;
  *puVar4 = puVar12;
  *(undefined1 *)(puVar4 + 3) = 0;
  *(undefined1 *)(puVar4 + 10) = 0xff;
  if ((local_130 & 0xff) != 0xff) {
                    /* try { // try from 004f4600 to 004f4607 has its CatchHandler @ 004f47e8 */
    (*(code *)(&PTR_FUN_00d1f9e8)[local_130 & 0xff])(&local_198,puVar4 + 3,&uStack_168);
    uVar6 = (uint)(byte)local_130;
    *(byte *)(puVar4 + 10) = (byte)local_130;
  }
  puVar11 = *(undefined8 **)(param_1 + 0x90);
  *(undefined8 **)(param_1 + 0x90) = puVar4;
  if (puVar11 != (undefined8 *)0x0) {
    if ((ulong)*(byte *)(puVar11 + 10) != 0xff) {
                    /* try { // try from 004f4638 to 004f463f has its CatchHandler @ 004f47c8 */
      (*(code *)(&PTR_FUN_00d1f9c8)[*(byte *)(puVar11 + 10)])(&local_198,puVar11 + 3);
    }
    puVar12 = (undefined1 *)*puVar11;
    *(undefined1 *)(puVar11 + 10) = 0xff;
    if (0 < puVar11[1] - (long)puVar12) {
      uVar8 = (puVar11[1] - (long)puVar12) + 1;
      do {
        uVar8 = uVar8 - 1;
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      } while (1 < uVar8);
      puVar12 = (undefined1 *)*puVar11;
    }
    if (puVar12 != (undefined1 *)0x0) {
      puVar11[1] = puVar12;
      operator_delete(puVar12);
    }
    operator_delete(puVar11);
    uVar6 = (uint)(byte)local_130;
  }
  if (uVar6 != 0xff) {
                    /* try { // try from 004f46a4 to 004f46ab has its CatchHandler @ 004f47cc */
    (*(code *)(&PTR_FUN_00d1f9c8)[uVar6])(&local_198,&uStack_168);
  }
  local_130 = CONCAT71(local_130._1_7_,0xff);
  if (0 < (long)puStack_178 - (long)local_180) {
    uVar8 = ((long)puStack_178 - (long)local_180) + 1;
    puVar12 = local_180;
    do {
      uVar8 = uVar8 - 1;
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    } while (1 < uVar8);
  }
  if (local_180 != (undefined1 *)0x0) {
    puStack_178 = local_180;
    operator_delete(local_180);
  }
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
                    /* try { // try from 004f4700 to 004f471b has its CatchHandler @ 004f47c4 */
    FUN_004f0510(&local_180,1,
                 "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x82);
                    /* try { // try from 004f4720 to 004f472f has its CatchHandler @ 004f47c0 */
    FUN_00428964(&uStack_168,"Waiting for group ID to create a pending group",0x2e);
    FUN_004f0604(&local_180);
  }
  else {
    FUN_004f3d2c(param_1);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_004f47bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f4930  FUN_004f4930 =====

void FUN_004f4930(undefined8 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((ulong)*(byte *)(param_1 + 10) != 0xff) {
                    /* try { // try from 004f496c to 004f4973 has its CatchHandler @ 004f49d4 */
    (*(code *)(&PTR_FUN_00d1f9c8)[*(byte *)(param_1 + 10)])(auStack_30,param_1 + 3);
  }
  puVar2 = (undefined1 *)*param_1;
  *(undefined1 *)(param_1 + 10) = 0xff;
  if (0 < param_1[1] - (long)puVar2) {
    uVar3 = (param_1[1] - (long)puVar2) + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (1 < uVar3);
    puVar2 = (undefined1 *)*param_1;
  }
  if (puVar2 != (undefined1 *)0x0) {
    param_1[1] = puVar2;
    operator_delete(puVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f49d8  FUN_004f49d8 =====

void FUN_004f49d8(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined2 *puVar7;
  undefined1 ***pppuVar8;
  undefined8 *puVar9;
  undefined8 extraout_x1;
  ulong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 ***pppuVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  long lVar22;
  void *pvVar23;
  long lVar24;
  long *plVar25;
  undefined1 **ppuVar26;
  undefined8 uVar27;
  undefined1 **ppuVar28;
  undefined8 uVar29;
  undefined1 **ppuVar30;
  undefined1 ***local_1858;
  undefined1 ***local_1850;
  undefined1 *local_1848;
  undefined1 *local_1840;
  undefined1 *puStack_1838;
  undefined1 *puStack_1830;
  undefined8 local_1828;
  undefined8 uStack_1820;
  undefined8 *local_1818;
  undefined8 *local_1810;
  undefined2 local_1800 [2];
  char local_17fc [4];
  undefined1 *local_17f8;
  undefined1 *local_17f0;
  undefined1 *local_17e8;
  undefined1 **local_17e0;
  undefined2 local_17d8;
  undefined6 uStack_17d6;
  undefined8 *local_17d0;
  undefined1 *puStack_17c8;
  undefined8 local_17c0;
  undefined8 local_17b8;
  undefined8 uStack_17b0;
  undefined8 local_17a8;
  undefined8 uStack_17a0;
  undefined8 local_1798;
  undefined1 local_1788 [408];
  byte local_15f0;
  undefined1 local_15e8;
  undefined8 local_15e0;
  undefined8 uStack_15d8;
  undefined8 local_15d0;
  ulong local_15c8;
  undefined8 uStack_15c0;
  undefined8 local_15b8;
  undefined1 local_15b0;
  undefined1 *local_15a8;
  undefined1 *puStack_15a0;
  undefined8 local_1598;
  byte local_1588;
  undefined2 local_1580 [4];
  long local_1578;
  long local_1570;
  undefined1 auStack_1560 [72];
  undefined1 auStack_1518 [1480];
  undefined8 *local_f50;
  undefined8 *local_f48;
  long local_f40;
  undefined2 local_f38;
  undefined1 local_f30;
  undefined1 local_ef0;
  undefined1 local_ee8;
  undefined1 local_e70;
  undefined1 local_e68;
  undefined1 local_e50;
  undefined1 auStack_e48 [1480];
  char local_880;
  undefined8 *local_878;
  undefined8 *local_870;
  undefined1 *puStack_868;
  undefined8 local_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined8 local_838;
  undefined1 auStack_828 [184];
  char local_770;
  byte local_690;
  undefined1 local_688;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined8 local_670;
  ulong local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  char local_650;
  undefined1 auStack_648 [1480];
  char local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  lVar22 = *(long *)(param_2 + 0x98);
  if ((lVar22 == 0) && (lVar22 = *(long *)(param_2 + 0xb0), lVar22 == 0)) {
                    /* try { // try from 004f4c7c to 004f4c97 has its CatchHandler @ 004f5a44 */
    FUN_004f0510(&local_17d8,3,
                 "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x90);
                    /* try { // try from 004f4c9c to 004f4cab has its CatchHandler @ 004f5a3c */
    FUN_00428964(&local_17c0,
                 "Cannot process proposals without any pending or established MLS group state",0x4b)
    ;
    FUN_004f0604(&local_17d8);
    if (*(char *)(*(long *)(param_2 + 0x108) + 0x10) == '\0') {
                    /* try { // try from 004f4cc0 to 004f4ccf has its CatchHandler @ 004f59f0 */
      FUN_004a3cf4(&local_17d8,"ProcessProposals");
                    /* try { // try from 004f4cd0 to 004f4ce3 has its CatchHandler @ 004f59d4 */
      FUN_004a3cf4(&local_878,"Got proposal without MLS state");
                    /* try { // try from 004f4cec to 004f4cfb has its CatchHandler @ 004f59b4 */
      (**(code **)(param_2 + 0x100))(param_2 + 0xf0,&local_17d8,&local_878);
      if ((long)puStack_868 < 0) {
        operator_delete(local_878);
      }
      if ((long)puStack_17c8 < 0) {
        operator_delete((void *)CONCAT62(uStack_17d6,local_17d8));
      }
    }
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    plVar25 = (long *)(param_2 + 0xd0);
    if (*plVar25 == 0) {
                    /* try { // try from 004f4a40 to 004f4a47 has its CatchHandler @ 004f5a94 */
      pvVar4 = operator_new(0x5c8);
                    /* try { // try from 004f4a48 to 004f4a53 has its CatchHandler @ 004f5a80 */
      FUN_00500d30(pvVar4,lVar22);
      pvVar23 = (void *)*plVar25;
      *plVar25 = (long)pvVar4;
      if (pvVar23 != (void *)0x0) {
        FUN_004fb91c(pvVar23);
        operator_delete(pvVar23);
      }
    }
                    /* try { // try from 004f4a70 to 004f4a8b has its CatchHandler @ 004f5ba4 */
    FUN_004f0510(&local_17d8,1,
                 "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x9b);
                    /* try { // try from 004f4a90 to 004f4aa3 has its CatchHandler @ 004f5ba0 */
    FUN_00428964(&local_17c0,"Processing MLS proposals message of ",0x24);
                    /* try { // try from 004f4aac to 004f4ac7 has its CatchHandler @ 004f5be8 */
    FUN_0054c088(&local_17c0,param_3[1] - *param_3);
    FUN_00428964(&local_17c0," bytes",6);
    FUN_004f0604(&local_17d8);
                    /* try { // try from 004f4ad0 to 004f4aeb has its CatchHandler @ 004f5b9c */
    FUN_004f0510(&local_17d8,1,
                 "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x9d);
                    /* try { // try from 004f4af0 to 004f4b03 has its CatchHandler @ 004f5b98 */
    FUN_00428964(&local_17c0,"Proposals: ",0xb);
    puVar21 = (undefined1 *)*param_3;
    puVar14 = (undefined1 *)param_3[1];
    local_870 = (undefined8 *)0x0;
    local_878 = (undefined8 *)0x0;
    puStack_868 = (undefined1 *)0x0;
    uVar10 = (long)puVar14 - (long)puVar21;
    if (uVar10 != 0) {
      if ((long)uVar10 < 0) {
        if (*(long *)(lVar2 + 0x28) == local_78) {
                    /* try { // try from 004f5948 to 004f5953 has its CatchHandler @ 004f5bc8 */
                    /* WARNING: Subroutine does not return */
          FUN_004f04ec(&local_878);
        }
        goto LAB_004f59b0;
      }
                    /* try { // try from 004f4b20 to 004f4b27 has its CatchHandler @ 004f5bc8 */
      local_878 = (undefined8 *)operator_new(uVar10);
      puStack_868 = (undefined1 *)((long)local_878 + uVar10);
      puVar9 = local_878;
      puVar11 = puVar21;
      if ((0x1f < uVar10) && (0x1f < (ulong)((long)local_878 - (long)puVar21))) {
        uVar13 = uVar10 & 0xffffffffffffffe0;
        puVar20 = local_878 + 2;
        puVar11 = puVar21 + uVar13;
        puVar9 = (undefined8 *)((long)local_878 + uVar13);
        puVar18 = (undefined8 *)(puVar21 + 0x10);
        uVar19 = uVar13;
        do {
          puVar3 = puVar18 + -1;
          uVar5 = puVar18[-2];
          uVar29 = puVar18[1];
          uVar27 = *puVar18;
          puVar18 = puVar18 + 4;
          uVar19 = uVar19 - 0x20;
          puVar20[-1] = *puVar3;
          puVar20[-2] = uVar5;
          puVar20[1] = uVar29;
          *puVar20 = uVar27;
          puVar20 = puVar20 + 4;
        } while (uVar19 != 0);
        local_870 = puVar9;
        if (uVar10 == uVar13) goto LAB_004f4ba4;
      }
      do {
        puVar21 = puVar11 + 1;
        local_870 = (undefined8 *)((long)puVar9 + 1);
        *(undefined1 *)puVar9 = *puVar11;
        puVar9 = local_870;
        puVar11 = puVar21;
      } while (puVar21 != puVar14);
    }
LAB_004f4ba4:
                    /* try { // try from 004f4ba4 to 004f4bb3 has its CatchHandler @ 004f5b7c */
    FUN_005a2b88(&local_17c0,&local_878);
    if (0 < (long)local_870 - (long)local_878) {
      uVar10 = ((long)local_870 - (long)local_878) + 1;
      puVar9 = local_878;
      do {
        uVar10 = uVar10 - 1;
        *(undefined1 *)puVar9 = 0;
        puVar9 = (undefined8 *)((long)puVar9 + 1);
      } while (1 < uVar10);
    }
    if (local_878 != (undefined8 *)0x0) {
      local_870 = local_878;
      operator_delete(local_878);
    }
    FUN_004f0604(&local_17d8);
    puVar21 = (undefined1 *)*param_3;
    puVar14 = (undefined1 *)param_3[1];
    local_17f8 = (undefined1 *)0x0;
    local_17f0 = (undefined1 *)0x0;
    local_17e8 = (undefined1 *)0x0;
    uVar10 = (long)puVar14 - (long)puVar21;
    if (uVar10 != 0) {
      if ((long)uVar10 < 0) {
        if (*(long *)(lVar2 + 0x28) == local_78) {
                    /* try { // try from 004f5964 to 004f596b has its CatchHandler @ 004f5bb8 */
                    /* WARNING: Subroutine does not return */
          FUN_004f04ec(&local_17f8);
        }
        goto LAB_004f59b0;
      }
                    /* try { // try from 004f4c0c to 004f4c13 has its CatchHandler @ 004f5bb8 */
      local_17f8 = (undefined1 *)operator_new(uVar10);
      local_17e8 = local_17f8 + uVar10;
      local_17f0 = local_17f8;
      puVar11 = puVar21;
      if ((uVar10 < 0x20) || ((ulong)((long)local_17f8 - (long)puVar21) < 0x20)) {
LAB_004f4d34:
        do {
          puVar15 = puVar11 + 1;
          puVar21 = local_17f0 + 1;
          *local_17f0 = *puVar11;
          local_17f0 = puVar21;
          puVar11 = puVar15;
        } while (puVar15 != puVar14);
      }
      else {
        uVar13 = uVar10 & 0xffffffffffffffe0;
        puVar9 = (undefined8 *)(local_17f8 + 0x10);
        puVar11 = puVar21 + uVar13;
        local_17f0 = local_17f8 + uVar13;
        puVar20 = (undefined8 *)(puVar21 + 0x10);
        uVar19 = uVar13;
        do {
          puVar18 = puVar20 + -1;
          uVar5 = puVar20[-2];
          uVar29 = puVar20[1];
          uVar27 = *puVar20;
          puVar20 = puVar20 + 4;
          uVar19 = uVar19 - 0x20;
          puVar9[-1] = *puVar18;
          puVar9[-2] = uVar5;
          puVar9[1] = uVar29;
          *puVar9 = uVar27;
          puVar9 = puVar9 + 4;
        } while (uVar19 != 0);
        if (uVar10 != uVar13) goto LAB_004f4d34;
      }
      puVar14 = local_17f0 + -1;
      puVar21 = local_17f8;
      if (local_17f8 < puVar14 && local_17f8 != local_17f0) {
        do {
          puVar11 = puVar21 + 1;
          uVar1 = *puVar21;
          *puVar21 = *puVar14;
          puVar15 = puVar14 + -1;
          *puVar14 = uVar1;
          puVar14 = puVar15;
          puVar21 = puVar11;
        } while (puVar11 < puVar15);
      }
    }
    local_17fc[0] = '\0';
                    /* try { // try from 004f4d80 to 004f4d8b has its CatchHandler @ 004f5b78 */
    FUN_005a30b4(&local_17f8,local_17fc);
                    /* try { // try from 004f4d8c to 004f4da7 has its CatchHandler @ 004f5b74 */
    FUN_004f0510(&local_17d8,1,
                 "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0xa4);
                    /* try { // try from 004f4dac to 004f4dcb has its CatchHandler @ 004f5bd0 */
    FUN_00428964(&local_17c0,"Revoking: ",10);
    FUN_0054b538(&local_17c0,local_17fc[0]);
    FUN_004f0604(&local_17d8);
    local_1800[0] = *(undefined2 *)*plVar25;
    if (local_17fc[0] == '\0') {
      local_f48 = (undefined8 *)0x0;
      local_f50 = (undefined8 *)0x0;
      local_f40 = 0;
                    /* try { // try from 004f500c to 004f5017 has its CatchHandler @ 004f5a78 */
      FUN_004f6290(&local_17f8,&local_f50);
      puVar9 = local_f48;
      if (local_f50 == local_f48) {
LAB_004f53bc:
        puVar18 = local_f50;
        puVar9 = local_f50;
        puVar20 = local_f48;
        if (local_f50 != (undefined8 *)0x0) {
          for (; local_f50 = puVar9, puVar20 != puVar18; puVar20 = puVar20 + -0x4b) {
            if ((ulong)*(byte *)(puVar20 + -1) != 0xff) {
                    /* try { // try from 004f5408 to 004f540f has its CatchHandler @ 004f5bcc */
              (*(code *)(&PTR_FUN_00d1fac0)[*(byte *)(puVar20 + -1)])(&local_17d8,puVar20 + -0x4a);
            }
            *(undefined1 *)(puVar20 + -1) = 0xff;
            puVar9 = local_f50;
          }
          local_f48 = puVar18;
          goto LAB_004f5428;
        }
        goto LAB_004f542c;
      }
      puVar20 = local_f50;
      while( true ) {
                    /* try { // try from 004f508c to 004f509b has its CatchHandler @ 004f5c5c */
        FUN_005829b0(&local_878,*plVar25,puVar20);
                    /* try { // try from 004f509c to 004f50cf has its CatchHandler @ 004f5c70 */
        uVar5 = FUN_0056f60c(&local_878);
        uVar10 = FUN_004f66a8(param_2,uVar5,*(undefined8 *)(param_2 + 0xd0),param_4);
        if ((uVar10 & 1) == 0) break;
        FUN_00585acc(auStack_e48,*plVar25,&local_878);
        if (local_880 != '\0') {
          FUN_004fb91c(auStack_e48);
        }
                    /* try { // try from 004f50e0 to 004f50fb has its CatchHandler @ 004f5c6c */
        uVar5 = FUN_0056f60c(&local_878);
        FUN_004f6b98(&local_1840,local_1800,uVar5);
        local_1798 = local_838;
        uStack_17a0 = uStack_840;
        local_17a8 = local_848;
        local_17c0 = local_860;
        puStack_17c8 = puStack_868;
        local_17d0 = local_870;
        local_1788[0] = 0;
        local_17d8 = local_878._0_2_;
        puStack_868 = (undefined1 *)0x0;
        local_860 = 0;
        local_870 = (undefined8 *)0x0;
        local_15f0 = 0xff;
        uStack_17b0 = uStack_850;
        local_17b8 = local_858;
        local_848 = 0;
        uStack_840 = 0;
        local_838 = 0;
        if ((ulong)local_690 != 0xff) {
                    /* try { // try from 004f5170 to 004f517b has its CatchHandler @ 004f5c00 */
          (*(code *)(&PTR_FUN_00d1f978)[local_690])(&local_1818,local_1788,auStack_828);
          local_15f0 = local_690;
        }
        uVar27 = local_658;
        uVar5 = uStack_660;
        uVar10 = local_668;
        local_15d0 = local_670;
        uStack_15d8 = uStack_678;
        local_15e0 = local_680;
        local_1598 = puStack_1830;
        puStack_15a0 = puStack_1838;
        local_15a8 = local_1840;
        local_15c8 = local_15c8 & 0xffffffffffffff00;
        local_680 = 0;
        uStack_678 = 0;
        local_670 = 0;
        local_15e8 = local_688;
        local_15b0 = local_650 != '\0';
        if ((bool)local_15b0) {
          local_668 = 0;
          uStack_660 = 0;
          local_658 = 0;
          uStack_15c0 = uVar5;
          local_15c8 = uVar10;
          local_15b8 = uVar27;
        }
        puStack_1838 = (undefined1 *)0x0;
        puStack_1830 = (undefined1 *)0x0;
        local_1840 = (undefined1 *)0x0;
                    /* try { // try from 004f5204 to 004f520b has its CatchHandler @ 004f5c40 */
        plVar6 = (long *)operator_new(600);
        *plVar6 = 0;
        FUN_0050a340(plVar6 + 2,&local_17d8);
        lVar22 = *(long *)(param_2 + 0xd8);
        *plVar6 = lVar22;
        plVar6[1] = param_2 + 0xd8;
        *(long **)(lVar22 + 8) = plVar6;
        *(long **)(param_2 + 0xd8) = plVar6;
        *(long *)(param_2 + 0xe8) = *(long *)(param_2 + 0xe8) + 1;
        if (0 < (long)puStack_15a0 - (long)local_15a8) {
          uVar10 = ((long)puStack_15a0 - (long)local_15a8) + 1;
          puVar21 = local_15a8;
          do {
            uVar10 = uVar10 - 1;
            *puVar21 = 0;
            puVar21 = puVar21 + 1;
          } while (1 < uVar10);
        }
        if (local_15a8 != (undefined1 *)0x0) {
          puStack_15a0 = local_15a8;
          operator_delete(local_15a8);
        }
        FUN_004fda20(&local_17d8);
        if (0 < (long)puStack_1838 - (long)local_1840) {
          uVar10 = ((long)puStack_1838 - (long)local_1840) + 1;
          puVar21 = local_1840;
          do {
            uVar10 = uVar10 - 1;
            *puVar21 = 0;
            puVar21 = puVar21 + 1;
          } while (1 < uVar10);
        }
        if (local_1840 != (undefined1 *)0x0) {
          puStack_1838 = local_1840;
          operator_delete(local_1840);
        }
        FUN_004fda20(&local_878);
        puVar20 = puVar20 + 0x4b;
        if (puVar20 == puVar9) goto LAB_004f53bc;
      }
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 3) = 0;
      FUN_004fda20(&local_878);
      puVar20 = local_f50;
      local_1818 = local_f50;
      puVar9 = local_f48;
      if (local_f50 == (undefined8 *)0x0) goto LAB_004f58e8;
      for (; local_f50 = local_1818, puVar9 != puVar20; puVar9 = puVar9 + -0x4b) {
        if ((ulong)*(byte *)(puVar9 + -1) != 0xff) {
                    /* try { // try from 004f53a8 to 004f53af has its CatchHandler @ 004f5b70 */
          (*(code *)(&PTR_FUN_00d1fac0)[*(byte *)(puVar9 + -1)])(&local_17d8,puVar9 + -0x4a);
        }
        *(undefined1 *)(puVar9 + -1) = 0xff;
        local_1818 = local_f50;
      }
LAB_004f58e4:
      local_f48 = puVar20;
      operator_delete(local_1818);
    }
    else {
      local_870 = (undefined8 *)0x0;
      local_878 = (undefined8 *)0x0;
      puStack_868 = (undefined1 *)0x0;
                    /* try { // try from 004f4df4 to 004f4e03 has its CatchHandler @ 004f5b4c */
      FUN_004f5dd0(&local_17f8,&local_878);
      puVar9 = local_870;
      if (local_878 != local_870) {
        lVar22 = param_2 + 0xd8;
        puVar20 = local_878;
        while (lVar24 = *(long *)(param_2 + 0xe0), lVar24 != lVar22) {
                    /* try { // try from 004f4e30 to 004f4e37 has its CatchHandler @ 004f5c90 */
          while (uVar10 = FUN_005a18d4(lVar24 + 0x240,puVar20), (uVar10 & 1) == 0) {
            lVar24 = *(long *)(lVar24 + 8);
            if (lVar24 == lVar22) goto LAB_004f4ef4;
          }
                    /* try { // try from 004f4e4c to 004f4e57 has its CatchHandler @ 004f5a74 */
          FUN_004f6138(lVar22,lVar24);
          puVar20 = puVar20 + 3;
          if (puVar20 == puVar9) goto LAB_004f4e64;
        }
LAB_004f4ef4:
                    /* try { // try from 004f4ef4 to 004f4f0f has its CatchHandler @ 004f5ab0 */
        FUN_004f0510(&local_17d8,3,
                     "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0xb7)
        ;
                    /* try { // try from 004f4f14 to 004f4f2b has its CatchHandler @ 004f5a98 */
        FUN_00428964(&local_17c0,"Cannot revoke unrecognized proposal ref",0x27);
        FUN_004f0604(&local_17d8);
        if (*(char *)(*(long *)(param_2 + 0x108) + 0x10) == '\0') {
                    /* try { // try from 004f4f40 to 004f4f4f has its CatchHandler @ 004f5a38 */
          FUN_004a3cf4(&local_17d8,"ProcessProposals");
                    /* try { // try from 004f4f50 to 004f4f5f has its CatchHandler @ 004f5a18 */
          FUN_004a3cf4(&local_f50,"Unrecognized proposal revocation");
                    /* try { // try from 004f4f68 to 004f4f73 has its CatchHandler @ 004f59f8 */
          (**(code **)(param_2 + 0x100))(param_2 + 0xf0,&local_17d8,&local_f50);
          if (local_f40 < 0) {
            operator_delete(local_f50);
          }
          if ((long)puStack_17c8 < 0) {
            operator_delete((void *)CONCAT62(uStack_17d6,local_17d8));
          }
        }
        puVar9 = local_878;
        *(undefined1 *)param_1 = 0;
        *(undefined1 *)(param_1 + 3) = 0;
        local_1818 = local_878;
        puVar20 = local_870;
        if (local_878 == (undefined8 *)0x0) goto LAB_004f58e8;
        while (puVar18 = puVar20, local_878 = local_1818, puVar18 != puVar9) {
          puVar20 = puVar18 + -3;
          puVar21 = (undefined1 *)*puVar20;
          if (0 < puVar18[-2] - (long)puVar21) {
            uVar10 = (puVar18[-2] - (long)puVar21) + 1;
            do {
              uVar10 = uVar10 - 1;
              *puVar21 = 0;
              puVar21 = puVar21 + 1;
            } while (1 < uVar10);
            puVar21 = (undefined1 *)*puVar20;
          }
          if (puVar21 != (undefined1 *)0x0) {
            puVar18[-2] = puVar21;
            operator_delete(puVar21);
            local_1818 = local_878;
          }
        }
        local_870 = puVar9;
        puVar20 = local_f48;
        goto LAB_004f58e4;
      }
LAB_004f4e64:
      lVar24 = *(long *)(param_2 + 0x98);
      lVar22 = *(long *)(param_2 + 0xb0);
                    /* try { // try from 004f4e70 to 004f4e77 has its CatchHandler @ 004f5a68 */
      pvVar4 = operator_new(0x5c8);
      if (lVar24 != 0) {
        lVar22 = lVar24;
      }
                    /* try { // try from 004f4e84 to 004f4e87 has its CatchHandler @ 004f5a50 */
      FUN_00500d30(pvVar4,lVar22);
      pvVar23 = (void *)*plVar25;
      *plVar25 = (long)pvVar4;
      if (pvVar23 != (void *)0x0) {
        FUN_004fb91c(pvVar23);
        operator_delete(pvVar23);
      }
      for (lVar22 = *(long *)(param_2 + 0xe0); puVar20 = local_878, lVar22 != param_2 + 0xd8;
          lVar22 = *(long *)(lVar22 + 8)) {
                    /* try { // try from 004f4ec8 to 004f4ed3 has its CatchHandler @ 004f5c68 */
        FUN_00585acc(auStack_648,*plVar25,lVar22 + 0x10);
        if (local_80 != '\0') {
          FUN_004fb91c(auStack_648);
        }
      }
      puVar9 = local_878;
      puVar18 = local_870;
      if (local_878 != (undefined8 *)0x0) {
        while (puVar3 = puVar18, local_878 = puVar9, puVar3 != puVar20) {
          puVar18 = puVar3 + -3;
          puVar21 = (undefined1 *)*puVar18;
          if (0 < puVar3[-2] - (long)puVar21) {
            uVar10 = (puVar3[-2] - (long)puVar21) + 1;
            do {
              uVar10 = uVar10 - 1;
              *puVar21 = 0;
              puVar21 = puVar21 + 1;
            } while (1 < uVar10);
            puVar21 = (undefined1 *)*puVar18;
          }
          if (puVar21 != (undefined1 *)0x0) {
            puVar3[-2] = puVar21;
            operator_delete(puVar21);
            puVar9 = local_878;
          }
        }
        local_870 = puVar20;
LAB_004f5428:
        operator_delete(puVar9);
      }
LAB_004f542c:
                    /* try { // try from 004f542c to 004f5443 has its CatchHandler @ 004f5ba8 */
      lVar22 = FUN_00562410(local_1800);
      FUN_005aeec4(&local_1818,*(undefined8 *)(*(long *)(lVar22 + 0x30) + 8));
      local_f48 = (undefined8 *)0x0;
      local_f50 = (undefined8 *)0x0;
      local_f40 = 0;
      local_f38 = 1;
      local_f30 = 0;
      local_ef0 = 0;
      local_ee8 = 0;
      local_e70 = 0;
      local_e68 = 0;
      local_e50 = 0;
      lVar22 = *plVar25;
                    /* try { // try from 004f5474 to 004f5483 has its CatchHandler @ 004f5b3c */
      FUN_004fdb70(&local_878,extraout_x1,&local_f50);
      local_1840 = (undefined1 *)((ulong)local_1840 & 0xffffffffffffff00);
      puStack_1830 = (undefined1 *)0x0;
      puStack_1838 = (undefined1 *)0x0;
      uStack_1820 = 0;
      local_1828 = 0;
                    /* try { // try from 004f5494 to 004f54b3 has its CatchHandler @ 004f5b08 */
      FUN_00582c10(&local_17d8,lVar22,&local_1818,&local_878,&local_1840);
      if (0 < (long)puStack_1830 - (long)puStack_1838) {
        uVar10 = ((long)puStack_1830 - (long)puStack_1838) + 1;
        puVar21 = puStack_1838;
        do {
          uVar10 = uVar10 - 1;
          *puVar21 = 0;
          puVar21 = puVar21 + 1;
        } while (1 < uVar10);
      }
      if (puStack_1838 != (undefined1 *)0x0) {
        puStack_1830 = puStack_1838;
        operator_delete(puStack_1838);
      }
      if (local_770 != '\0') {
        FUN_004f6f30(&local_878);
      }
                    /* try { // try from 004f5504 to 004f5527 has its CatchHandler @ 004f5af8 */
      FUN_004f0510(&local_878,1,
                   "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0xeb);
                    /* try { // try from 004f552c to 004f553b has its CatchHandler @ 004f5adc */
      FUN_00428964(&local_860,
                   "Prepared commit/welcome/next state for MLS group from received proposals",0x48);
      FUN_004f0604(&local_878);
      local_1840 = (undefined1 *)0x0;
      puStack_1838 = (undefined1 *)0x0;
      puStack_1830 = (undefined1 *)0x0;
                    /* try { // try from 004f5554 to 004f5597 has its CatchHandler @ 004f5c04 */
      FUN_005a2eb4(&local_1840,local_17d8);
      local_17e0 = &local_1840;
      if ((ulong)local_1588 == 0xff) {
        if (*(long *)(lVar2 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 004f597c to 004f597f has its CatchHandler @ 004f5c04 */
          FUN_004f2868();
        }
        goto LAB_004f59b0;
      }
      local_1858 = &local_17e0;
      (*(code *)(&PTR_FUN_00d1fb10)[local_1588])(&local_1858,&local_17d0);
                    /* try { // try from 004f5598 to 004f559f has its CatchHandler @ 004f5ad8 */
      puVar7 = (undefined2 *)operator_new(600);
      *(undefined1 *)(puVar7 + 4) = 0;
      *puVar7 = local_17d8;
      *(undefined1 *)(puVar7 + 0x128) = 0xff;
      if ((ulong)local_1588 != 0xff) {
                    /* try { // try from 004f55d4 to 004f55e3 has its CatchHandler @ 004f5a70 */
        (*(code *)(&PTR_FUN_00d1fae8)[local_1588])(&local_878,puVar7 + 4,&local_17d0);
        *(byte *)(puVar7 + 0x128) = local_1588;
      }
      pvVar4 = *(void **)(param_2 + 0xa0);
      *(undefined2 **)(param_2 + 0xa0) = puVar7;
      if (pvVar4 != (void *)0x0) {
        if ((ulong)*(byte *)((long)pvVar4 + 0x250) != 0xff) {
                    /* try { // try from 004f5618 to 004f5623 has its CatchHandler @ 004f5a4c */
          (*(code *)(&PTR_FUN_00d1fac0)[*(byte *)((long)pvVar4 + 0x250)])
                    (&local_878,(long)pvVar4 + 8);
        }
        operator_delete(pvVar4);
      }
      if (local_1570 != local_1578) {
                    /* try { // try from 004f5640 to 004f5663 has its CatchHandler @ 004f5c04 */
        FUN_005a2eb4(&local_1840,local_1580[0]);
        FUN_0050ae98(&local_1840,&local_1578);
        FUN_004f277c(&local_1840,auStack_1560);
      }
                    /* try { // try from 004f5664 to 004f566b has its CatchHandler @ 004f5ad4 */
      pvVar4 = operator_new(0x5c8);
      FUN_0050afa4(pvVar4,auStack_1518);
      pvVar23 = *(void **)(param_2 + 0xa8);
      *(void **)(param_2 + 0xa8) = pvVar4;
      if (pvVar23 != (void *)0x0) {
        FUN_004fb91c(pvVar23);
        operator_delete(pvVar23);
      }
                    /* try { // try from 004f56a0 to 004f56c3 has its CatchHandler @ 004f5ad0 */
      FUN_004f0510(&local_878,1,
                   "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0xfd);
                    /* try { // try from 004f56c8 to 004f56db has its CatchHandler @ 004f5acc */
      FUN_00428964(&local_860,"Output: ",8);
      puVar14 = puStack_1838;
      puVar21 = local_1840;
      local_1858 = (undefined1 ***)0x0;
      local_1850 = (undefined1 ***)0x0;
      local_1848 = (undefined1 *)0x0;
      uVar10 = (long)puStack_1838 - (long)local_1840;
      if (uVar10 != 0) {
        if ((long)uVar10 < 0) {
          if (*(long *)(lVar2 + 0x28) == local_78) {
                    /* try { // try from 004f5990 to 004f5997 has its CatchHandler @ 004f5b50 */
                    /* WARNING: Subroutine does not return */
            FUN_004f04ec(&local_1858);
          }
          goto LAB_004f59b0;
        }
                    /* try { // try from 004f56f4 to 004f56fb has its CatchHandler @ 004f5b50 */
        local_1858 = (undefined1 ***)operator_new(uVar10);
        local_1848 = (undefined1 *)((long)local_1858 + uVar10);
        pppuVar8 = local_1858;
        puVar11 = puVar21;
        if ((0x1f < uVar10) && (0x1f < (ulong)((long)local_1858 - (long)puVar21))) {
          uVar13 = uVar10 & 0xffffffffffffffe0;
          pppuVar17 = local_1858 + 2;
          puVar11 = puVar21 + uVar13;
          pppuVar8 = (undefined1 ***)((long)local_1858 + uVar13);
          puVar9 = (undefined8 *)(puVar21 + 0x10);
          uVar19 = uVar13;
          do {
            puVar20 = puVar9 + -1;
            ppuVar26 = (undefined1 **)puVar9[-2];
            ppuVar30 = (undefined1 **)puVar9[1];
            ppuVar28 = (undefined1 **)*puVar9;
            puVar9 = puVar9 + 4;
            uVar19 = uVar19 - 0x20;
            pppuVar17[-1] = (undefined1 **)*puVar20;
            pppuVar17[-2] = ppuVar26;
            pppuVar17[1] = ppuVar30;
            *pppuVar17 = ppuVar28;
            pppuVar17 = pppuVar17 + 4;
          } while (uVar19 != 0);
          local_1850 = pppuVar8;
          if (uVar10 == uVar13) goto LAB_004f5774;
        }
        do {
          puVar21 = puVar11 + 1;
          local_1850 = (undefined1 ***)((long)pppuVar8 + 1);
          *(undefined1 *)pppuVar8 = *puVar11;
          pppuVar8 = local_1850;
          puVar11 = puVar21;
        } while (puVar21 != puVar14);
      }
LAB_004f5774:
                    /* try { // try from 004f5774 to 004f577f has its CatchHandler @ 004f5ab4 */
      FUN_005a2b88(&local_860,&local_1858);
      if (0 < (long)local_1850 - (long)local_1858) {
        uVar10 = ((long)local_1850 - (long)local_1858) + 1;
        pppuVar8 = local_1858;
        do {
          uVar10 = uVar10 - 1;
          *(undefined1 *)pppuVar8 = 0;
          pppuVar8 = (undefined1 ***)((long)pppuVar8 + 1);
        } while (1 < uVar10);
      }
      if (local_1858 != (undefined1 ***)0x0) {
        local_1850 = local_1858;
        operator_delete(local_1858);
      }
      FUN_004f0604(&local_878);
      puVar14 = puStack_1838;
      puVar21 = local_1840;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      uVar10 = (long)puStack_1838 - (long)local_1840;
      if (uVar10 != 0) {
        if ((long)uVar10 < 0) {
          if (*(long *)(lVar2 + 0x28) == local_78) {
                    /* try { // try from 004f59a8 to 004f59af has its CatchHandler @ 004f5c04 */
                    /* WARNING: Subroutine does not return */
            FUN_004f04ec(param_1);
          }
          goto LAB_004f59b0;
        }
                    /* try { // try from 004f57d8 to 004f57df has its CatchHandler @ 004f5c04 */
        puVar15 = (undefined1 *)operator_new(uVar10);
        *param_1 = puVar15;
        param_1[2] = puVar15 + uVar10;
        puVar11 = puVar21;
        if ((uVar10 < 0x20) || ((ulong)((long)puVar15 - (long)puVar21) < 0x20)) {
LAB_004f584c:
          do {
            puVar12 = puVar11 + 1;
            puVar16 = puVar15 + 1;
            *puVar15 = *puVar11;
            puVar11 = puVar12;
            puVar15 = puVar16;
          } while (puVar12 != puVar14);
        }
        else {
          uVar13 = uVar10 & 0xffffffffffffffe0;
          puVar9 = (undefined8 *)(puVar15 + 0x10);
          puVar16 = puVar15 + uVar13;
          puVar20 = (undefined8 *)(puVar21 + 0x10);
          uVar19 = uVar13;
          do {
            puVar18 = puVar20 + -1;
            uVar5 = puVar20[-2];
            uVar29 = puVar20[1];
            uVar27 = *puVar20;
            puVar20 = puVar20 + 4;
            uVar19 = uVar19 - 0x20;
            puVar9[-1] = *puVar18;
            puVar9[-2] = uVar5;
            puVar9[1] = uVar29;
            *puVar9 = uVar27;
            puVar9 = puVar9 + 4;
          } while (uVar19 != 0);
          puVar11 = puVar21 + uVar13;
          puVar15 = puVar16;
          if (uVar10 != uVar13) goto LAB_004f584c;
        }
        param_1[1] = puVar16;
      }
      *(undefined1 *)(param_1 + 3) = 1;
      if (puVar21 != (undefined1 *)0x0) {
        puStack_1838 = puVar21;
        operator_delete(puVar21);
      }
      FUN_004fb91c(auStack_1518);
      FUN_004f955c(local_1580);
      if ((ulong)local_1588 != 0xff) {
                    /* try { // try from 004f589c to 004f58ab has its CatchHandler @ 004f5a6c */
        (*(code *)(&PTR_FUN_00d1fac0)[local_1588])(&local_878,&local_17d0);
      }
      FUN_004f6f30(&local_f50);
      if (0 < (long)local_1810 - (long)local_1818) {
        uVar10 = ((long)local_1810 - (long)local_1818) + 1;
        puVar9 = local_1818;
        do {
          uVar10 = uVar10 - 1;
          *(undefined1 *)puVar9 = 0;
          puVar9 = (undefined8 *)((long)puVar9 + 1);
        } while (1 < uVar10);
      }
      if (local_1818 != (undefined8 *)0x0) {
        local_1810 = local_1818;
        puVar20 = local_f48;
        goto LAB_004f58e4;
      }
    }
LAB_004f58e8:
    if (local_17f8 != (undefined1 *)0x0) {
      local_17f0 = local_17f8;
      operator_delete(local_17f8);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
LAB_004f59b0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f5dd0  FUN_004f5dd0 =====

long * FUN_004f5dd0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  void *__dest;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  ulong local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_50 = 0;
  FUN_005a35bc(param_1,&local_50);
  uVar6 = local_50;
  puVar4 = (undefined1 *)param_1[1];
  if ((ulong)((long)puVar4 - *param_1) < local_50) {
    uVar5 = FUN_0054f64c(0x10);
                    /* try { // try from 004f6094 to 004f609f has its CatchHandler @ 004f60e0 */
    FUN_005064ec(uVar5,"Vector is longer than remaining data");
    if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar5,&PTR_PTR_thunk_FUN_00552768_00d1fbf0,PTR_FUN_00d51d28);
    }
    goto LAB_004f6130;
  }
  local_68 = (undefined1 *)0x0;
  local_60 = (undefined1 *)0x0;
  local_58 = (undefined1 *)0x0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (local_50 == 0) {
    local_58 = (undefined1 *)0x0;
    local_60 = (undefined1 *)0x0;
    local_68 = (undefined1 *)0x0;
  }
  else {
    if ((long)local_50 < 0) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 004f60d8 to 004f60df has its CatchHandler @ 004f60f0 */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_80);
      }
      goto LAB_004f6130;
    }
                    /* try { // try from 004f5e34 to 004f5e3b has its CatchHandler @ 004f60f0 */
    local_68 = (undefined1 *)operator_new(local_50);
    puVar9 = puVar4 + -uVar6;
    local_58 = local_68 + uVar6;
    puVar8 = local_68;
    if ((0x1f < uVar6) && ((undefined1 *)0x1f < local_68 + (uVar6 - (long)puVar4))) {
      uVar11 = uVar6 & 0xffffffffffffffe0;
      uVar12 = 0;
      local_60 = local_68 + uVar11;
      do {
        puVar1 = (undefined8 *)(puVar9 + uVar12);
        puVar7 = (undefined8 *)(local_68 + uVar12);
        uVar12 = uVar12 + 0x20;
        uVar5 = *puVar1;
        uVar14 = puVar1[3];
        uVar13 = puVar1[2];
        puVar7[1] = puVar1[1];
        *puVar7 = uVar5;
        puVar7[3] = uVar14;
        puVar7[2] = uVar13;
      } while (uVar11 != uVar12);
      puVar8 = local_60;
      puVar9 = puVar9 + uVar11;
      if (uVar6 == uVar11) goto LAB_004f5ec0;
    }
    do {
      puVar10 = puVar9 + 1;
      local_60 = puVar8 + 1;
      *puVar8 = *puVar9;
      puVar8 = local_60;
      puVar9 = puVar10;
    } while (puVar10 != puVar4);
  }
LAB_004f5ec0:
  puVar1 = (undefined8 *)*param_2;
  puVar7 = (undefined8 *)param_2[1];
  while (puVar3 = puVar7, puVar3 != puVar1) {
    puVar7 = puVar3 + -3;
    puVar4 = (undefined1 *)*puVar7;
    if (0 < puVar3[-2] - (long)puVar4) {
      uVar6 = (puVar3[-2] - (long)puVar4) + 1;
      do {
        uVar6 = uVar6 - 1;
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      } while (1 < uVar6);
      puVar4 = (undefined1 *)*puVar7;
    }
    if (puVar4 != (undefined1 *)0x0) {
      puVar3[-2] = puVar4;
      operator_delete(puVar4);
    }
  }
  param_2[1] = puVar1;
  while (local_60 != local_68) {
    puVar1 = (undefined8 *)param_2[1];
    if (puVar1 < (undefined8 *)param_2[2]) {
      if (puVar1 == (undefined8 *)0x0) {
        if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 004f6028 to 004f604f has its CatchHandler @ 004f6100 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        goto LAB_004f6130;
      }
      puVar7 = puVar1 + 3;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
      param_2[1] = puVar7;
    }
    else {
                    /* try { // try from 004f5f54 to 004f5f77 has its CatchHandler @ 004f60f4 */
      FUN_00506f74(param_2);
      puVar7 = (undefined8 *)param_2[1];
    }
    if ((undefined8 *)*param_2 == puVar7) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 004f5ff0 to 004f6017 has its CatchHandler @ 004f6134 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                   "!empty()","back() called on an empty vector");
      }
      goto LAB_004f6130;
    }
    FUN_00506244(&local_68,puVar7 + -3);
  }
  if ((long)local_50 < 0) {
    if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 004f6060 to 004f6087 has its CatchHandler @ 004f60f8 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x644,
                 "__first <= __last","vector::erase(first, last) called with invalid range");
    }
  }
  else {
    puVar4 = local_60;
    if (local_50 != 0) {
      __dest = (void *)(param_1[1] - local_50);
      memmove(__dest,(void *)((long)__dest + local_50),param_1[1] - (long)((long)__dest + local_50))
      ;
      param_1[1] = (long)__dest;
      puVar4 = local_68;
    }
    if (puVar4 != (undefined1 *)0x0) {
      local_60 = puVar4;
      operator_delete(puVar4);
    }
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return param_1;
    }
  }
LAB_004f6130:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f6138  FUN_004f6138 =====

long FUN_004f6138(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  if (param_2 != param_1) {
    lVar1 = *param_2;
    lVar2 = param_2[1];
    lVar5 = param_1[2];
    puVar3 = (undefined1 *)param_2[0x48];
    lVar6 = param_2[0x49];
    *(long *)(lVar1 + 8) = lVar2;
    plVar7 = (long *)param_2[1];
    param_1[2] = lVar5 + -1;
    *plVar7 = lVar1;
    if (0 < lVar6 - (long)puVar3) {
      uVar4 = (lVar6 - (long)puVar3) + 1;
      do {
        uVar4 = uVar4 - 1;
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      } while (1 < uVar4);
      puVar3 = (undefined1 *)param_2[0x48];
    }
    if (puVar3 != (undefined1 *)0x0) {
      param_2[0x49] = (long)puVar3;
      operator_delete(puVar3);
    }
    FUN_004fda20(param_2 + 2);
    operator_delete(param_2);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/list",0x6ab,"__p != end()"
             ,"list::erase(iterator) called with a non-dereferenceable iterator");
}


// ===== 004f61f0  FUN_004f61f0 =====

void FUN_004f61f0(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)*param_1;
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  puVar3 = (undefined8 *)param_1[1];
  puVar2 = puVar5;
  if (puVar3 != puVar5) {
    do {
      puVar2 = puVar3 + -3;
      puVar1 = (undefined1 *)*puVar2;
      if (0 < puVar3[-2] - (long)puVar1) {
        uVar4 = (puVar3[-2] - (long)puVar1) + 1;
        do {
          uVar4 = uVar4 - 1;
          *puVar1 = 0;
          puVar1 = puVar1 + 1;
        } while (1 < uVar4);
        puVar1 = (undefined1 *)*puVar2;
      }
      if (puVar1 != (undefined1 *)0x0) {
        puVar3[-2] = puVar1;
        operator_delete(puVar1);
      }
      puVar3 = puVar2;
    } while (puVar2 != puVar5);
    puVar2 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar5;
  operator_delete(puVar2);
  return;
}


// ===== 004f6290  FUN_004f6290 =====

long * FUN_004f6290(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  void *__dest;
  undefined2 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  ulong local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_60 = 0;
  FUN_005a35bc(param_1,&local_60);
  uVar4 = local_60;
  puVar5 = (undefined1 *)param_1[1];
  if ((ulong)((long)puVar5 - *param_1) < local_60) {
    uVar6 = FUN_0054f64c(0x10);
                    /* try { // try from 004f65fc to 004f6607 has its CatchHandler @ 004f6648 */
    FUN_005064ec(uVar6,"Vector is longer than remaining data");
    if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar6,&PTR_PTR_thunk_FUN_00552768_00d1fbf0,PTR_FUN_00d51d28);
    }
    goto LAB_004f66a0;
  }
  local_78 = (undefined1 *)0x0;
  local_70 = (undefined1 *)0x0;
  local_68 = (undefined1 *)0x0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  if (local_60 == 0) {
    local_68 = (undefined1 *)0x0;
    local_70 = (undefined1 *)0x0;
    local_78 = (undefined1 *)0x0;
  }
  else {
    if ((long)local_60 < 0) {
      if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 004f6640 to 004f6647 has its CatchHandler @ 004f6658 */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_90);
      }
      goto LAB_004f66a0;
    }
                    /* try { // try from 004f62f8 to 004f62ff has its CatchHandler @ 004f6658 */
    local_78 = (undefined1 *)operator_new(local_60);
    puVar9 = puVar5 + -uVar4;
    local_68 = local_78 + uVar4;
    puVar8 = local_78;
    if ((0x1f < uVar4) && ((undefined1 *)0x1f < local_78 + (uVar4 - (long)puVar5))) {
      uVar11 = uVar4 & 0xffffffffffffffe0;
      uVar12 = 0;
      local_70 = local_78 + uVar11;
      do {
        puVar1 = (undefined8 *)(puVar9 + uVar12);
        puVar2 = (undefined8 *)(local_78 + uVar12);
        uVar12 = uVar12 + 0x20;
        uVar6 = *puVar1;
        uVar15 = puVar1[3];
        uVar14 = puVar1[2];
        puVar2[1] = puVar1[1];
        *puVar2 = uVar6;
        puVar2[3] = uVar15;
        puVar2[2] = uVar14;
      } while (uVar11 != uVar12);
      puVar8 = local_70;
      puVar9 = puVar9 + uVar11;
      if (uVar4 == uVar11) goto LAB_004f6384;
    }
    do {
      puVar10 = puVar9 + 1;
      local_70 = puVar8 + 1;
      *puVar8 = *puVar9;
      puVar8 = local_70;
      puVar9 = puVar10;
    } while (puVar10 != puVar5);
  }
LAB_004f6384:
  puVar13 = (undefined2 *)*param_2;
  for (puVar7 = (undefined2 *)param_2[1]; puVar7 != puVar13; puVar7 = puVar7 + -300) {
    if ((ulong)*(byte *)(puVar7 + -4) != 0xff) {
                    /* try { // try from 004f63d0 to 004f63d7 has its CatchHandler @ 004f6660 */
      (*(code *)(&PTR_FUN_00d1fac0)[*(byte *)(puVar7 + -4)])(&local_90,puVar7 + -0x128);
    }
    *(undefined1 *)(puVar7 + -4) = 0xff;
  }
  param_2[1] = puVar13;
  puVar5 = local_78;
  if (local_70 != local_78) {
    while( true ) {
      if (puVar13 < (undefined2 *)param_2[2]) {
        if (puVar13 == (undefined2 *)0x0) {
          if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 004f6590 to 004f65b7 has its CatchHandler @ 004f6670 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                       ,0x23,"__location != nullptr","null pointer given to construct_at");
          }
          goto LAB_004f66a0;
        }
        memset(puVar13,0,600);
        *puVar13 = 1;
        memset(puVar13 + 4,0,0x249);
        puVar13 = puVar13 + 300;
        param_2[1] = puVar13;
      }
      else {
                    /* try { // try from 004f6438 to 004f6473 has its CatchHandler @ 004f6664 */
        FUN_00507280(param_2);
        puVar13 = (undefined2 *)param_2[1];
      }
      if ((undefined2 *)*param_2 == puVar13) {
        if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 004f6558 to 004f657f has its CatchHandler @ 004f66a4 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        goto LAB_004f66a0;
      }
      FUN_005a31cc(&local_78,&local_90);
      puVar13[-300] = (short)local_90;
      FUN_005a31cc(&local_78,&local_90);
      puVar7 = puVar13 + -0x128;
      if ((short)local_90 == 1) {
        if ((ulong)*(byte *)(puVar13 + -4) != 0xff) {
                    /* try { // try from 004f6494 to 004f649f has its CatchHandler @ 004f665c */
          (*(code *)(&PTR_FUN_00d1fac0)[*(byte *)(puVar13 + -4)])(&local_90,puVar7);
        }
        memset(puVar7,0,0x249);
                    /* try { // try from 004f64b0 to 004f64cb has its CatchHandler @ 004f6664 */
        FUN_00570c20(&local_78,puVar7);
      }
      else {
        FUN_00507a60(&local_78,local_90 & 0xffff,puVar7);
      }
      puVar5 = local_70;
      if (local_70 == local_78) break;
      puVar13 = (undefined2 *)param_2[1];
    }
  }
  if ((long)local_60 < 0) {
    if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 004f65c8 to 004f65ef has its CatchHandler @ 004f6668 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x644,
                 "__first <= __last","vector::erase(first, last) called with invalid range");
    }
  }
  else {
    if (local_60 != 0) {
      __dest = (void *)(param_1[1] - local_60);
      memmove(__dest,(void *)((long)__dest + local_60),param_1[1] - (long)((long)__dest + local_60))
      ;
      param_1[1] = (long)__dest;
      puVar5 = local_78;
    }
    if (puVar5 != (undefined1 *)0x0) {
      local_70 = puVar5;
      operator_delete(puVar5);
    }
    if (*(long *)(lVar3 + 0x28) == local_58) {
      return param_1;
    }
  }
LAB_004f66a0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f66a8  FUN_004f66a8 =====

void FUN_004f66a8(long param_1,short *param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  ulong uVar5;
  void *local_180 [2];
  char local_169;
  void *local_168 [2];
  char local_151;
  undefined1 auStack_150 [264];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*param_2 == 1) {
    if (*(long *)(param_2 + 0x10) != *(long *)(param_3 + 0x20)) {
      FUN_004f0510(local_168,3,
                   "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x123);
                    /* try { // try from 004f6808 to 004f683b has its CatchHandler @ 004f6b70 */
      FUN_00428964(auStack_150,"MLS proposal message must be for current epoch (",0x30);
      FUN_0054c088(auStack_150,*(undefined8 *)(param_2 + 0x10));
      FUN_00428964(auStack_150,&DAT_001c5200,4);
                    /* try { // try from 004f6840 to 004f685b has its CatchHandler @ 004f6b68 */
      FUN_0054c088(auStack_150,*(undefined8 *)(param_3 + 0x20));
      FUN_00428964(auStack_150,&DAT_001ca519,1);
      FUN_004f0604(local_168);
      if (*(char *)(*(long *)(param_1 + 0x108) + 0x10) == '\0') {
        FUN_004a3cf4(local_168,"ValidateProposalMessage");
                    /* try { // try from 004f6880 to 004f688f has its CatchHandler @ 004f6b30 */
        FUN_004a3cf4(local_180,"Proposal epoch mismatch");
                    /* try { // try from 004f6898 to 004f68a3 has its CatchHandler @ 004f6b2c */
        (**(code **)(param_1 + 0x100))(param_1 + 0xf0,local_168,local_180);
        goto LAB_004f6a94;
      }
      goto LAB_004f6aa4;
    }
    cVar3 = FUN_0056e240(param_2 + 4);
    if (cVar3 != '\x02') {
      FUN_004f0510(local_168,3,
                   "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x12a);
                    /* try { // try from 004f68c8 to 004f68d7 has its CatchHandler @ 004f6b34 */
      FUN_00428964(auStack_150,"ProcessProposals called with non-proposal message",0x31);
      FUN_004f0604(local_168);
      if (*(char *)(*(long *)(param_1 + 0x108) + 0x10) == '\0') {
        FUN_004a3cf4(local_168,"ValidateProposalMessage");
                    /* try { // try from 004f68fc to 004f690b has its CatchHandler @ 004f6b24 */
        FUN_004a3cf4(local_180,"Unexpected message type");
                    /* try { // try from 004f6914 to 004f691f has its CatchHandler @ 004f6b20 */
        (**(code **)(param_1 + 0x100))(param_1 + 0xf0,local_168,local_180);
        goto LAB_004f6a94;
      }
      goto LAB_004f6aa4;
    }
    uVar4 = FUN_0056dcb8(param_2 + 0x14);
    if (((uint)uVar4 & 0xff) != 2) {
      FUN_004f0510(local_168,3,
                   "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x130);
                    /* try { // try from 004f6944 to 004f6953 has its CatchHandler @ 004f6b28 */
      FUN_00428964(auStack_150,"MLS proposal must be from external sender",0x29);
      FUN_004f0604(local_168);
      if (*(char *)(*(long *)(param_1 + 0x108) + 0x10) == '\0') {
        FUN_004a3cf4(local_168,"ValidateProposalMessage");
                    /* try { // try from 004f6978 to 004f6987 has its CatchHandler @ 004f6b1c */
        FUN_004a3cf4(local_180,"Unexpected proposal sender type");
                    /* try { // try from 004f6990 to 004f699b has its CatchHandler @ 004f6b18 */
        (**(code **)(param_1 + 0x100))(param_1 + 0xf0,local_168,local_180);
        goto LAB_004f6a94;
      }
      goto LAB_004f6aa4;
    }
    if ((char)param_2[0xf4] != '\x01') {
LAB_004f6aec:
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_004f2868();
      }
      goto LAB_004f6b94;
    }
    uVar4 = FUN_0056dc38(param_2 + 0x28);
    uVar1 = (uint)uVar4 & 0xffff;
    if (uVar1 != 3) {
      if (uVar1 == 1) {
        if ((char)param_2[0xf0] != '\0') goto LAB_004f6aec;
        uVar5 = FUN_004f70a8(param_1,param_2 + 0x54,param_4);
        if ((uVar5 & 1) != 0) goto LAB_004f6764;
        FUN_004f0510(local_168,3,
                     "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x13b
                    );
                    /* try { // try from 004f6a3c to 004f6a4b has its CatchHandler @ 004f6b10 */
        FUN_00428964(auStack_150,"MLS add proposal must be for recognized user",0x2c);
        FUN_004f0604(local_168);
        if (*(char *)(*(long *)(param_1 + 0x108) + 0x10) == '\0') {
          FUN_004a3cf4(local_168,"ValidateProposalMessage");
                    /* try { // try from 004f6a70 to 004f6a7f has its CatchHandler @ 004f6b04 */
          FUN_004a3cf4(local_180,"Unexpected user ID in add proposal");
                    /* try { // try from 004f6a88 to 004f6a93 has its CatchHandler @ 004f6b00 */
          (**(code **)(param_1 + 0x100))(param_1 + 0xf0,local_168,local_180);
          goto LAB_004f6a94;
        }
      }
      else {
        FUN_004f0510(local_168,3,
                     "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x145
                    );
                    /* try { // try from 004f69c0 to 004f69cf has its CatchHandler @ 004f6b14 */
        FUN_00428964(auStack_150,"MLS proposal must be add or remove",0x22);
        FUN_004f0604(local_168);
        if (*(char *)(*(long *)(param_1 + 0x108) + 0x10) == '\0') {
          FUN_004a3cf4(local_168,"ValidateProposalMessage");
                    /* try { // try from 004f69f4 to 004f6a03 has its CatchHandler @ 004f6b0c */
          FUN_004a3cf4(local_180,"Unexpected proposal type");
                    /* try { // try from 004f6a0c to 004f6a17 has its CatchHandler @ 004f6b08 */
          (**(code **)(param_1 + 0x100))(param_1 + 0xf0,local_168,local_180);
          goto LAB_004f6a94;
        }
      }
      goto LAB_004f6aa4;
    }
LAB_004f6764:
    uVar4 = 1;
  }
  else {
    FUN_004f0510(local_168,3,
                 "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x11d);
                    /* try { // try from 004f678c to 004f679b has its CatchHandler @ 004f6b6c */
    FUN_00428964(auStack_150,"MLS proposal message must be PublicMessage",0x2a);
    FUN_004f0604(local_168);
    if (*(char *)(*(long *)(param_1 + 0x108) + 0x10) == '\0') {
      FUN_004a3cf4(local_168,"ValidateProposalMessage");
                    /* try { // try from 004f67c0 to 004f67cf has its CatchHandler @ 004f6b50 */
      FUN_004a3cf4(local_180,"Invalid proposal wire format");
                    /* try { // try from 004f67d8 to 004f67e3 has its CatchHandler @ 004f6b38 */
      (**(code **)(param_1 + 0x100))(param_1 + 0xf0,local_168,local_180);
LAB_004f6a94:
      if (local_169 < '\0') {
        operator_delete(local_180[0]);
      }
      if (local_151 < '\0') {
        operator_delete(local_168[0]);
      }
    }
LAB_004f6aa4:
    uVar4 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_004f6b94:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 004f6b98  FUN_004f6b98 =====

void FUN_004f6b98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  long local_58;
  undefined1 *puVar12;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_00563478();
  FUN_0050a1e0(&local_88,param_3);
  puVar3 = local_80;
  puVar11 = local_88;
  local_70 = (undefined1 *)0x0;
  local_68 = (undefined1 *)0x0;
  local_60 = (undefined1 *)0x0;
  uVar6 = (long)local_80 - (long)local_88;
  if (uVar6 != 0) {
    if ((long)uVar6 < 0) {
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 004f6d0c to 004f6d13 has its CatchHandler @ 004f6d24 */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_70);
      }
      goto LAB_004f6d50;
    }
                    /* try { // try from 004f6bf8 to 004f6bff has its CatchHandler @ 004f6d24 */
    local_70 = (undefined1 *)operator_new(uVar6);
    local_60 = local_70 + uVar6;
    puVar5 = local_70;
    puVar12 = puVar11;
    if ((0x1f < uVar6) && (0x1f < (ulong)((long)local_70 - (long)puVar11))) {
      uVar7 = uVar6 & 0xffffffffffffffe0;
      puVar8 = (undefined8 *)(local_70 + 0x10);
      puVar12 = puVar11 + uVar7;
      puVar5 = local_70 + uVar7;
      puVar9 = (undefined8 *)(puVar11 + 0x10);
      uVar10 = uVar7;
      do {
        puVar2 = puVar9 + -1;
        uVar13 = puVar9[-2];
        uVar15 = puVar9[1];
        uVar14 = *puVar9;
        puVar9 = puVar9 + 4;
        uVar10 = uVar10 - 0x20;
        puVar8[-1] = *puVar2;
        puVar8[-2] = uVar13;
        puVar8[1] = uVar15;
        *puVar8 = uVar14;
        puVar8 = puVar8 + 4;
      } while (uVar10 != 0);
      local_68 = puVar5;
      if (uVar6 == uVar7) goto LAB_004f6c78;
    }
    do {
      puVar11 = puVar12 + 1;
      local_68 = puVar5 + 1;
      *puVar5 = *puVar12;
      puVar5 = local_68;
      puVar12 = puVar11;
    } while (puVar11 != puVar3);
  }
LAB_004f6c78:
                    /* try { // try from 004f6c78 to 004f6c8b has its CatchHandler @ 004f6d14 */
  FUN_0050a018(param_1,param_2,uVar4,&local_70);
  if (0 < (long)local_68 - (long)local_70) {
    uVar6 = ((long)local_68 - (long)local_70) + 1;
    puVar11 = local_70;
    do {
      uVar6 = uVar6 - 1;
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    } while (1 < uVar6);
  }
  if (local_70 != (undefined1 *)0x0) {
    local_68 = local_70;
    operator_delete(local_70);
  }
  if (local_88 != (undefined1 *)0x0) {
    local_80 = local_88;
    operator_delete(local_88);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_004f6d50:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f6d54  FUN_004f6d54 =====

void FUN_004f6d54(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = *(undefined1 **)(param_1 + 0x230);
  lVar2 = *(long *)(param_1 + 0x238) - (long)puVar1;
  if (0 < lVar2) {
    uVar3 = lVar2 + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar3);
    puVar1 = *(undefined1 **)(param_1 + 0x230);
  }
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x238) = puVar1;
    operator_delete(puVar1);
  }
  FUN_004fda20(param_1);
  return;
}


// ===== 004f6dac  FUN_004f6dac =====

void FUN_004f6dac(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    pvVar4 = (void *)param_1[1];
    pvVar2 = pvVar3;
    if (pvVar4 != pvVar3) {
      do {
        if ((ulong)*(byte *)((long)pvVar4 + -8) != 0xff) {
                    /* try { // try from 004f6e24 to 004f6e2b has its CatchHandler @ 004f6e68 */
          (*(code *)(&PTR_FUN_00d1fac0)[*(byte *)((long)pvVar4 + -8)])
                    (auStack_50,(long)pvVar4 + -0x250);
        }
        pvVar2 = (void *)((long)pvVar4 + -600);
        *(undefined1 *)((long)pvVar4 + -8) = 0xff;
        pvVar4 = pvVar2;
      } while (pvVar2 != pvVar3);
      pvVar2 = (void *)*param_1;
    }
    param_1[1] = pvVar3;
    operator_delete(pvVar2);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004f6e6c  FUN_004f6e6c =====

void FUN_004f6e6c(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10) - (long)puVar1;
  if (0 < lVar2) {
    uVar3 = lVar2 + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar3);
    puVar1 = *(undefined1 **)(param_1 + 8);
  }
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x10) = puVar1;
    operator_delete(puVar1);
    return;
  }
  return;
}


// ===== 004f6eac  FUN_004f6eac =====

void FUN_004f6eac(long param_1)

{
  long lVar1;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_004fb91c(param_1 + 0x2c0);
  FUN_004f955c(param_1 + 600);
  if ((ulong)*(byte *)(param_1 + 0x250) != 0xff) {
                    /* try { // try from 004f6ef8 to 004f6eff has its CatchHandler @ 004f6f2c */
    (*(code *)(&PTR_FUN_00d1fac0)[*(byte *)(param_1 + 0x250)])(auStack_30,param_1 + 8);
  }
  *(undefined1 *)(param_1 + 0x250) = 0xff;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f6f30  FUN_004f6f30 =====

void FUN_004f6f30(undefined8 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  void *pvVar7;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(char *)(param_1 + 0x20) != '\0') && (pvVar6 = (void *)param_1[0x1d], pvVar6 != (void *)0x0)
     ) {
    pvVar3 = pvVar6;
    pvVar7 = (void *)param_1[0x1e];
    if ((void *)param_1[0x1e] != pvVar6) {
      do {
        puVar2 = *(undefined1 **)((long)pvVar7 + -0x18);
        lVar4 = *(long *)((long)pvVar7 + -0x10) - (long)puVar2;
        if (0 < lVar4) {
          uVar5 = lVar4 + 1;
          do {
            uVar5 = uVar5 - 1;
            *puVar2 = 0;
            puVar2 = puVar2 + 1;
          } while (1 < uVar5);
          puVar2 = *(undefined1 **)((long)pvVar7 + -0x18);
        }
        pvVar3 = (void *)((long)pvVar7 + -0x20);
        if (puVar2 != (undefined1 *)0x0) {
          *(undefined1 **)((long)pvVar7 + -0x10) = puVar2;
          operator_delete(puVar2);
        }
        pvVar7 = pvVar3;
      } while (pvVar3 != pvVar6);
      pvVar3 = (void *)param_1[0x1d];
    }
    param_1[0x1e] = pvVar6;
    operator_delete(pvVar3);
  }
  FUN_004ff6bc(param_1 + 0xd);
  if (*(char *)(param_1 + 0xc) != '\0') {
    if ((ulong)*(byte *)(param_1 + 0xb) != 0xff) {
                    /* try { // try from 004f6ffc to 004f7003 has its CatchHandler @ 004f70a0 */
      (*(code *)(&PTR_FUN_00d1f9c8)[*(byte *)(param_1 + 0xb)])(auStack_58,param_1 + 4);
    }
    *(undefined1 *)(param_1 + 0xb) = 0xff;
  }
  pvVar6 = (void *)*param_1;
  if (pvVar6 != (void *)0x0) {
    pvVar7 = (void *)param_1[1];
    pvVar3 = pvVar6;
    if (pvVar7 != pvVar6) {
      do {
        if ((ulong)*(byte *)((long)pvVar7 + -8) != 0xff) {
                    /* try { // try from 004f705c to 004f7063 has its CatchHandler @ 004f70a4 */
          (*(code *)(&PTR_FUN_00d1f8f8)[*(byte *)((long)pvVar7 + -8)])
                    (auStack_50,(long)pvVar7 + -400);
        }
        pvVar3 = (void *)((long)pvVar7 + -0x198);
        *(undefined1 *)((long)pvVar7 + -8) = 0xff;
        pvVar7 = pvVar3;
      } while (pvVar3 != pvVar6);
      pvVar3 = (void *)*param_1;
    }
    param_1[1] = pvVar6;
    operator_delete(pvVar3);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004f70a8  FUN_004f70a8 =====

undefined4 FUN_004f70a8(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined1 **ppuVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined1 *local_180;
  ulong local_178;
  byte local_169;
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [264];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_0050d5c8(&local_180,param_2,*(undefined2 *)(param_1 + 8));
  uVar1 = local_178;
  if (-1 < (char)local_169) {
    uVar1 = (ulong)local_169;
  }
  if (uVar1 == 0) {
                    /* try { // try from 004f71b4 to 004f71cf has its CatchHandler @ 004f7230 */
    FUN_004f0510(auStack_168,3,
                 "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x10c);
                    /* try { // try from 004f71d4 to 004f71e3 has its CatchHandler @ 004f722c */
    FUN_00428964(auStack_150,"Attempted to verify credential of unexpected type",0x31);
  }
  else {
    plVar8 = (long *)(param_3 + 8);
    plVar10 = (long *)*plVar8;
    plVar9 = plVar8;
    if (plVar10 != (long *)0x0) {
      do {
        cVar5 = FUN_0041d7a0(plVar10 + 4,&local_180);
        plVar3 = plVar10 + 1;
        if (-1 < cVar5) {
          plVar9 = plVar10;
          plVar3 = plVar10;
        }
        plVar10 = (long *)*plVar3;
      } while (plVar10 != (long *)0x0);
      if ((plVar9 != plVar8) && (uVar6 = FUN_0041d7a0(&local_180,plVar9 + 4), (uVar6 >> 7 & 1) == 0)
         ) {
        uVar7 = 1;
        goto joined_r0x004f71f4;
      }
    }
                    /* try { // try from 004f7158 to 004f7173 has its CatchHandler @ 004f7234 */
    FUN_004f0510(auStack_168,3,
                 "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x111);
                    /* try { // try from 004f7178 to 004f71af has its CatchHandler @ 004f723c */
    FUN_00428964(auStack_150,"Attempted to verify credential for unrecognized user ID: ",0x39);
    ppuVar4 = (undefined1 **)local_180;
    if (-1 < (char)local_169) {
      local_178 = (ulong)local_169;
      ppuVar4 = &local_180;
    }
    FUN_00428964(auStack_150,ppuVar4,local_178);
  }
  FUN_004f0604(auStack_168);
  uVar7 = 0;
joined_r0x004f71f4:
  if ((char)local_169 < '\0') {
    operator_delete(local_180);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}


// ===== 004f7274  FUN_004f7274 =====

/* WARNING: Removing unreachable block (ram,0x004f7580) */

void FUN_004f7274(long *param_1,long param_2,long *param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  char cVar7;
  void *pvVar8;
  long *plVar9;
  undefined1 *puVar10;
  ulong uVar11;
  short *psVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined1 *puVar19;
  undefined8 uVar21;
  undefined8 uVar22;
  void *local_1788;
  void **local_1780;
  void *local_1778;
  long local_1770;
  undefined1 auStack_1768 [264];
  undefined1 local_1660 [1480];
  char local_1098;
  undefined1 *local_1090;
  undefined1 *local_1088;
  undefined1 *local_1080;
  undefined8 local_1070;
  undefined4 local_cb8;
  char local_ac8;
  void ***local_ac0 [70];
  undefined1 local_890;
  undefined7 uStack_88f;
  long local_888;
  char local_879;
  undefined1 auStack_878 [1456];
  char local_2c8;
  short local_2c0 [4];
  undefined1 auStack_2b8 [584];
  byte local_70;
  long local_68;
  undefined1 *puVar20;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 004f72b0 to 004f72cb has its CatchHandler @ 004f7cfc */
  FUN_004f0510(&local_890,1,
               "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x14f);
                    /* try { // try from 004f72d0 to 004f72df has its CatchHandler @ 004f7cf8 */
  FUN_00428964(auStack_878,"Processing commit",0x11);
  FUN_004f0604(&local_890);
                    /* try { // try from 004f72e8 to 004f7303 has its CatchHandler @ 004f7cf4 */
  FUN_004f0510(&local_890,1,
               "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x150);
                    /* try { // try from 004f7308 to 004f731b has its CatchHandler @ 004f7cf0 */
  FUN_00428964(auStack_878,"Commit: ",8);
  puVar19 = (undefined1 *)*param_3;
  puVar2 = (undefined1 *)param_3[1];
  local_1088 = (undefined1 *)0x0;
  local_1090 = (undefined1 *)0x0;
  local_1080 = (undefined1 *)0x0;
  uVar11 = (long)puVar2 - (long)puVar19;
  if (uVar11 != 0) {
    if ((long)uVar11 < 0) {
      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 004f79f8 to 004f79ff has its CatchHandler @ 004f7d08 */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_1090);
      }
      goto LAB_004f7bb8;
    }
                    /* try { // try from 004f7338 to 004f733f has its CatchHandler @ 004f7d08 */
    local_1090 = (undefined1 *)operator_new(uVar11);
    local_1080 = local_1090 + uVar11;
    puVar10 = local_1090;
    puVar20 = puVar19;
    if ((0x1f < uVar11) && (0x1f < (ulong)((long)local_1090 - (long)puVar19))) {
      uVar14 = uVar11 & 0xffffffffffffffe0;
      puVar15 = (undefined8 *)(local_1090 + 0x10);
      puVar20 = puVar19 + uVar14;
      puVar10 = local_1090 + uVar14;
      puVar16 = (undefined8 *)(puVar19 + 0x10);
      uVar13 = uVar14;
      do {
        puVar5 = puVar16 + -1;
        uVar17 = puVar16[-2];
        uVar22 = puVar16[1];
        uVar21 = *puVar16;
        puVar16 = puVar16 + 4;
        uVar13 = uVar13 - 0x20;
        puVar15[-1] = *puVar5;
        puVar15[-2] = uVar17;
        puVar15[1] = uVar22;
        *puVar15 = uVar21;
        puVar15 = puVar15 + 4;
      } while (uVar13 != 0);
      local_1088 = puVar10;
      if (uVar11 == uVar14) goto LAB_004f73bc;
    }
    do {
      puVar19 = puVar20 + 1;
      local_1088 = puVar10 + 1;
      *puVar10 = *puVar20;
      puVar10 = local_1088;
      puVar20 = puVar19;
    } while (puVar19 != puVar2);
  }
LAB_004f73bc:
                    /* try { // try from 004f73bc to 004f73c7 has its CatchHandler @ 004f7cdc */
  FUN_005a2b88(auStack_878,&local_1090);
  if (0 < (long)local_1088 - (long)local_1090) {
    uVar11 = ((long)local_1088 - (long)local_1090) + 1;
    puVar19 = local_1090;
    do {
      uVar11 = uVar11 - 1;
      *puVar19 = 0;
      puVar19 = puVar19 + 1;
    } while (1 < uVar11);
  }
  if (local_1090 != (undefined1 *)0x0) {
    local_1088 = local_1090;
    operator_delete(local_1090);
  }
  FUN_004f0604(&local_890);
  if (*(long *)(param_2 + 0xd0) == 0) {
    if (*(long *)(param_2 + 0xb0) != 0) {
      plVar9 = (long *)FUN_0054f64c(0x10);
                    /* try { // try from 004f7b74 to 004f7b7f has its CatchHandler @ 004f7bfc */
      FUN_00547104(plVar9,"ProcessCommit called without queued proposals");
      *plVar9 = (long)(PTR_DAT_00d51d30 + 0x10);
      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 004f7ba0 to 004f7bb7 has its CatchHandler @ 004f7bf8 */
                    /* WARNING: Subroutine does not return */
        FUN_0054f748(plVar9,&PTR_PTR_thunk_FUN_00552768_00d23bb8,PTR_FUN_00d51d38);
      }
      goto LAB_004f7bb8;
    }
                    /* try { // try from 004f74d4 to 004f74ef has its CatchHandler @ 004f7c54 */
    FUN_004f0510(&local_890,3,
                 "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x157);
                    /* try { // try from 004f74f4 to 004f7503 has its CatchHandler @ 004f7c50 */
    FUN_00428964(auStack_878,"ProcessCommit called without state",0x22);
    FUN_004f0604(&local_890);
    if (*(char *)(*(long *)(param_2 + 0x108) + 0x10) == '\0') {
                    /* try { // try from 004f7518 to 004f7527 has its CatchHandler @ 004f7bf4 */
      FUN_004a3cf4(&local_890,"ProcessCommit");
                    /* try { // try from 004f7528 to 004f7537 has its CatchHandler @ 004f7bd8 */
      FUN_004a3cf4(&local_1090,"Received commit without state");
                    /* try { // try from 004f7540 to 004f754b has its CatchHandler @ 004f7bbc */
      (**(code **)(param_2 + 0x100))(param_2 + 0xf0,&local_890,&local_1090);
      if ((long)local_1080 < 0) {
        operator_delete(local_1090);
      }
      if (local_879 < '\0') {
        operator_delete((void *)CONCAT71(uStack_88f,local_890));
      }
    }
    *(undefined1 *)(param_1 + 3) = 1;
LAB_004f78a4:
    if (*(long *)(lVar4 + 0x28) == local_68) {
      return;
    }
  }
  else {
    memset(local_2c0,0,600);
    local_2c0[0] = 1;
    memset(auStack_2b8,0,0x249);
                    /* try { // try from 004f7448 to 004f7457 has its CatchHandler @ 004f7ccc */
    FUN_0050b674(param_3,local_2c0);
    psVar12 = *(short **)(param_2 + 0xa0);
    if ((psVar12 == (short *)0x0) || (local_2c0[0] != *psVar12)) {
LAB_004f758c:
      if (*(long *)(param_2 + 0xb0) != 0) goto LAB_004f7594;
      plVar9 = (long *)FUN_0054f64c(0x10);
                    /* try { // try from 004f7a0c to 004f7a17 has its CatchHandler @ 004f7c3c */
      FUN_00547104(plVar9,"Unexpected commit before welcome");
    }
    else {
      bVar6 = *(byte *)(psVar12 + 0x128) == 0xff;
      bVar1 = *(byte *)(psVar12 + 0x128) == local_70 && !(bool)bVar6;
      if ((local_70 != 0xff) && (bVar6 = bVar1, bVar1)) {
        local_ac0[0] = &local_1780;
                    /* try { // try from 004f74b8 to 004f74c3 has its CatchHandler @ 004f7cd0 */
        bVar6 = (*(code *)(&PTR_FUN_00d1fb80)[local_70])(local_ac0,auStack_2b8,psVar12 + 4);
      }
      if ((bVar6 & 1) == 0) goto LAB_004f758c;
LAB_004f7594:
                    /* try { // try from 004f7594 to 004f75a3 has its CatchHandler @ 004f7cc8 */
      FUN_00572f1c(&local_890,local_2c0);
                    /* try { // try from 004f75a8 to 004f75af has its CatchHandler @ 004f7cb4 */
      uVar11 = FUN_005a1c5c(&local_890,param_2 + 0x10);
      local_888 = local_888 - (long)CONCAT71(uStack_88f,local_890);
      if (0 < local_888) {
        uVar13 = local_888 + 1;
        puVar19 = (undefined1 *)CONCAT71(uStack_88f,local_890);
        do {
          uVar13 = uVar13 - 1;
          *puVar19 = 0;
          puVar19 = puVar19 + 1;
        } while (1 < uVar13);
      }
      if ((void *)CONCAT71(uStack_88f,local_890) != (void *)0x0) {
        operator_delete((void *)CONCAT71(uStack_88f,local_890));
      }
      if ((uVar11 & 1) == 0) {
        local_890 = 0;
        local_2c8 = 0;
        bVar1 = *(long *)(param_2 + 0xa8) != 0;
        if (bVar1) {
                    /* try { // try from 004f7600 to 004f7607 has its CatchHandler @ 004f7c60 */
          FUN_00500d30(&local_890);
        }
                    /* try { // try from 004f7614 to 004f7623 has its CatchHandler @ 004f7ca8 */
        local_2c8 = bVar1;
        FUN_005829b0(local_ac0,*(undefined8 *)(param_2 + 0xd0),local_2c0);
                    /* try { // try from 004f7624 to 004f766b has its CatchHandler @ 004f7d1c */
        psVar12 = (short *)FUN_0056f60c(local_ac0);
        if (*psVar12 == 1) {
          if (*(long *)(psVar12 + 0x10) == *(long *)(*(long *)(param_2 + 0xd0) + 0x20)) {
            cVar7 = FUN_0056e240(psVar12 + 4);
            if (cVar7 == '\x03') {
              cVar7 = FUN_0056dcb8(psVar12 + 0x14);
              if (cVar7 == '\x01') {
                if ((char)psVar12[0xf4] != '\x02') {
                  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 004f7b20 to 004f7b23 has its CatchHandler @ 004f7ca4 */
                    FUN_004f2868();
                  }
                  goto LAB_004f7bb8;
                }
                lVar18 = *(long *)(psVar12 + 0x28);
                lVar3 = *(long *)(psVar12 + 0x2c);
                if (lVar18 != lVar3) {
                  do {
                    if ((ulong)*(byte *)(lVar18 + 0x1a0) == 0xff) {
                      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 004f7990 to 004f7993 has its CatchHandler @ 004f7d38 */
                        FUN_004f2868();
                      }
                      goto LAB_004f7bb8;
                    }
                    /* try { // try from 004f76b4 to 004f76bb has its CatchHandler @ 004f7d34 */
                    local_1780 = &local_1788;
                    cVar7 = (*(code *)(&PTR_FUN_00d1fbe0)[*(byte *)(lVar18 + 0x1a0)])
                                      (&local_1780,lVar18 + 8);
                    if (cVar7 != '\x02') {
                      plVar9 = (long *)FUN_0054f64c(0x10);
                    /* try { // try from 004f79a0 to 004f79ab has its CatchHandler @ 004f7d20 */
                      FUN_00547104(plVar9,"Unexpected non-ref proposal");
                      *plVar9 = (long)(PTR_DAT_00d51d30 + 0x10);
                      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 004f79cc to 004f79e3 has its CatchHandler @ 004f7d38 */
                    /* WARNING: Subroutine does not return */
                        FUN_0054f748(plVar9,&PTR_PTR_thunk_FUN_00552768_00d23bb8,PTR_FUN_00d51d38);
                      }
                      goto LAB_004f7bb8;
                    }
                    lVar18 = lVar18 + 0x1a8;
                  } while (lVar18 != lVar3);
                }
                local_1660[0] = 0;
                uVar17 = *(undefined8 *)(param_2 + 0xd0);
                local_1098 = 0;
                bVar1 = local_2c8 != '\0';
                if (bVar1) {
                    /* try { // try from 004f76e8 to 004f76f3 has its CatchHandler @ 004f7c5c */
                  FUN_00500d30(local_1660,&local_890);
                }
                    /* try { // try from 004f76fc to 004f770f has its CatchHandler @ 004f7c8c */
                local_1098 = bVar1;
                FUN_00585ba4(&local_1090,uVar17,local_ac0,local_1660);
                if (local_1098 != '\0') {
                  FUN_004fb91c(local_1660);
                }
                if (local_ac8 == '\0') {
                  uVar17 = FUN_0054f64c(0x10);
                    /* try { // try from 004f7b30 to 004f7b3b has its CatchHandler @ 004f7c14 */
                  FUN_0054723c(uVar17,"Commit handling did not produce a new state");
                  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 004f7b4c to 004f7b63 has its CatchHandler @ 004f7c10 */
                    /* WARNING: Subroutine does not return */
                    FUN_0054f748(uVar17,&PTR_PTR_thunk_FUN_00552768_00d23c78,PTR_FUN_00d51d10);
                  }
                  goto LAB_004f7bb8;
                }
                    /* try { // try from 004f7728 to 004f7743 has its CatchHandler @ 004f7c80 */
                FUN_004f0510(&local_1780,1,
                             "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp"
                             ,0x193);
                    /* try { // try from 004f7748 to 004f775b has its CatchHandler @ 004f7c7c */
                FUN_00428964(auStack_1768,
                             "Successfully processed MLS commit, updating state; our leaf index is "
                             ,0x45);
                if (local_ac8 == '\0') {
                  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 004f78e8 to 004f790f has its CatchHandler @ 004f7d4c */
                    /* WARNING: Subroutine does not return */
                    std::__Cr::__libcpp_verbose_abort
                              ("%s:%d: assertion %s failed: %s",
                               "../../discord_common/native/third_party/llvm/libcxx/include/optional"
                               ,0x3b0,"this->has_value()",
                               "optional operator-> called on a disengaged value");
                  }
                  goto LAB_004f7bb8;
                }
                    /* try { // try from 004f7768 to 004f7783 has its CatchHandler @ 004f7d4c */
                FUN_0054bcd8(auStack_1768,local_cb8);
                FUN_00428964(auStack_1768,"; current epoch is ",0x13);
                if (local_ac8 == '\0') {
                  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 004f7920 to 004f7947 has its CatchHandler @ 004f7d48 */
                    /* WARNING: Subroutine does not return */
                    std::__Cr::__libcpp_verbose_abort
                              ("%s:%d: assertion %s failed: %s",
                               "../../discord_common/native/third_party/llvm/libcxx/include/optional"
                               ,0x3b0,"this->has_value()",
                               "optional operator-> called on a disengaged value");
                  }
                  goto LAB_004f7bb8;
                }
                    /* try { // try from 004f7790 to 004f7797 has its CatchHandler @ 004f7d48 */
                FUN_0054c088(auStack_1768,local_1070);
                FUN_004f0604(&local_1780);
                if (local_ac8 == '\0') {
                  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 004f7958 to 004f797f has its CatchHandler @ 004f7d44 */
                    /* WARNING: Subroutine does not return */
                    std::__Cr::__libcpp_verbose_abort
                              ("%s:%d: assertion %s failed: %s",
                               "../../discord_common/native/third_party/llvm/libcxx/include/optional"
                               ,0x3c2,"this->has_value()",
                               "optional operator* called on a disengaged value");
                  }
                  goto LAB_004f7bb8;
                }
                    /* try { // try from 004f77a8 to 004f77af has its CatchHandler @ 004f7c78 */
                pvVar8 = operator_new(0x5c8);
                FUN_0050afa4(pvVar8,&local_1090);
                    /* try { // try from 004f77c0 to 004f77cf has its CatchHandler @ 004f7c64 */
                local_1788 = pvVar8;
                FUN_004f7e84(&local_1780,param_2,&local_1788);
                pvVar8 = local_1788;
                if (local_1788 != (void *)0x0) {
                  FUN_004fb91c(local_1788);
                  operator_delete(pvVar8);
                }
                pvVar8 = *(void **)(param_2 + 0xa8);
                *(undefined8 *)(param_2 + 0xa8) = 0;
                if (pvVar8 != (void *)0x0) {
                  FUN_004fb91c(pvVar8);
                  operator_delete(pvVar8);
                }
                FUN_004f40c4(param_2);
                *param_1 = (long)local_1780;
                plVar9 = param_1 + 1;
                *plVar9 = (long)local_1778;
                param_1[2] = local_1770;
                if (local_1770 == 0) {
                  *param_1 = (long)plVar9;
                }
                else {
                  *(long **)((long)local_1778 + 0x10) = plVar9;
                  local_1780 = &local_1778;
                  local_1778 = (void *)0x0;
                  local_1770 = 0;
                }
                *(undefined1 *)(param_1 + 3) = 2;
                FUN_00442104(&local_1780,local_1778);
                if (local_ac8 != '\0') {
                  FUN_004fb91c(&local_1090);
                }
                FUN_004fda20(local_ac0);
                if (local_2c8 != '\0') {
                  FUN_004fb91c(&local_890);
                }
                if ((ulong)local_70 != 0xff) {
                    /* try { // try from 004f7898 to 004f78a3 has its CatchHandler @ 004f7c58 */
                  (*(code *)(&PTR_FUN_00d1fac0)[local_70])(&local_890,auStack_2b8);
                }
                goto LAB_004f78a4;
              }
              plVar9 = (long *)FUN_0054f64c(0x10);
                    /* try { // try from 004f7acc to 004f7ad7 has its CatchHandler @ 004f7c28 */
              FUN_00547104(plVar9,"Unexpected commit sender type");
            }
            else {
              plVar9 = (long *)FUN_0054f64c(0x10);
                    /* try { // try from 004f7ab0 to 004f7abb has its CatchHandler @ 004f7c2c */
              FUN_00547104(plVar9,"Unexpected message type");
            }
          }
          else {
            plVar9 = (long *)FUN_0054f64c(0x10);
                    /* try { // try from 004f7a94 to 004f7a9f has its CatchHandler @ 004f7c30 */
            FUN_00547104(plVar9,"Commit epoch mismatch");
          }
        }
        else {
          plVar9 = (long *)FUN_0054f64c(0x10);
                    /* try { // try from 004f7a78 to 004f7a83 has its CatchHandler @ 004f7c34 */
          FUN_00547104(plVar9,"Invalid commit wire format");
        }
        *plVar9 = (long)(PTR_DAT_00d51d30 + 0x10);
        if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 004f7af8 to 004f7b0f has its CatchHandler @ 004f7d1c */
                    /* WARNING: Subroutine does not return */
          FUN_0054f748(plVar9,&PTR_PTR_thunk_FUN_00552768_00d23bb8,PTR_FUN_00d51d38);
        }
        goto LAB_004f7bb8;
      }
      plVar9 = (long *)FUN_0054f64c(0x10);
                    /* try { // try from 004f7a28 to 004f7a33 has its CatchHandler @ 004f7c38 */
      FUN_00547104(plVar9,"MLS commit message was for unexpected group");
    }
    *plVar9 = (long)(PTR_DAT_00d51d30 + 0x10);
    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 004f7a54 to 004f7a6b has its CatchHandler @ 004f7cd0 */
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(plVar9,&PTR_PTR_thunk_FUN_00552768_00d23bb8,PTR_FUN_00d51d38);
    }
  }
LAB_004f7bb8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f7e84  FUN_004f7e84 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004f7e84(undefined8 ****param_1,long param_2,undefined8 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  long ****pppplVar4;
  long ****pppplVar5;
  long ***ppplVar6;
  long *plVar7;
  bool bVar8;
  short sVar9;
  long *plVar10;
  ulong extraout_x1;
  long **pplVar11;
  undefined8 uVar12;
  long **pplVar13;
  byte *pbVar14;
  void *pvVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long ***ppplVar19;
  long ***ppplVar20;
  long ****pppplVar21;
  long ***local_e0;
  long **local_d8;
  long local_d0;
  undefined1 local_c8 [8];
  long ****local_c0;
  long ****pppplStack_b8;
  long *local_a0;
  long lStack_98;
  long ***local_90;
  undefined8 ****local_88;
  long ****local_80;
  long ****pppplStack_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_d8 = (undefined8 **)0x0;
  local_d0 = 0;
                    /* try { // try from 004f7ed4 to 004f7edb has its CatchHandler @ 004f846c */
  local_e0 = &local_d8;
  FUN_0058952c(&local_c0,*param_3);
  pppplVar5 = pppplStack_b8;
  pppplVar4 = local_c0;
  for (pppplVar21 = local_c0; local_c0 = pppplVar4, pppplVar21 != pppplVar5;
      pppplVar21 = pppplVar21 + 0x27) {
                    /* try { // try from 004f7eec to 004f7ef3 has its CatchHandler @ 004f84a4 */
    sVar9 = FUN_0055fe68(pppplVar21 + 6);
    if (sVar9 != 1) {
      plVar10 = (long *)FUN_0054f64c(0x10);
                    /* try { // try from 004f8420 to 004f842b has its CatchHandler @ 004f8490 */
      FUN_00547104(plVar10,"Unexpected credential type in roster");
      *plVar10 = (long)(PTR_DAT_00d51d30 + 0x10);
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 004f8450 to 004f8467 has its CatchHandler @ 004f848c */
                    /* WARNING: Subroutine does not return */
        FUN_0054f748(plVar10,&PTR_PTR_thunk_FUN_00552768_00d23bb8,PTR_FUN_00d51d38);
      }
      goto LAB_004f84e0;
    }
    if (*(char *)(pppplVar21 + 0xd) != '\0') {
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_004f2868();
      }
      goto LAB_004f84e0;
    }
    local_80 = (long ****)FUN_0050d7f8(pppplVar21 + 6);
                    /* try { // try from 004f7f18 to 004f7f27 has its CatchHandler @ 004f84a8 */
    FUN_0050c714(&local_e0,&local_80,&local_80,pppplVar21 + 3);
    if ((extraout_x1 & 1) == 0) {
      plVar10 = (long *)FUN_0054f64c(0x10);
                    /* try { // try from 004f83b0 to 004f83bb has its CatchHandler @ 004f8494 */
      FUN_00547104(plVar10,"Duplicate identity in roster");
      *plVar10 = (long)(PTR_DAT_00d51d30 + 0x10);
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 004f83e0 to 004f8413 has its CatchHandler @ 004f84ac */
                    /* WARNING: Subroutine does not return */
        FUN_0054f748(plVar10,&PTR_PTR_thunk_FUN_00552768_00d23bb8,PTR_FUN_00d51d38);
      }
      goto LAB_004f84e0;
    }
    pppplVar4 = local_c0;
  }
  if (pppplVar4 != (long ****)0x0) {
    while (pppplStack_b8 != pppplVar4) {
      FUN_004fc1d0(pppplStack_b8 + -0x27);
      pppplStack_b8 = pppplStack_b8 + -0x27;
    }
    pppplStack_b8 = pppplVar4;
    operator_delete(local_c0);
  }
  param_1[2] = (undefined8 ***)0x0;
  plVar16 = (long *)(param_2 + 0xb8);
  lStack_98 = *plVar16;
  plVar10 = (long *)(param_2 + 0xc0);
  local_88 = (undefined8 ****)local_e0;
  pppplVar21 = param_1 + 1;
  *pppplVar21 = (long ***)0x0;
  *param_1 = pppplVar21;
                    /* try { // try from 004f7f9c to 004f7fbf has its CatchHandler @ 004f8468 */
  local_a0 = plVar10;
  local_90 = &local_d8;
  local_80 = param_1;
  pppplStack_78 = pppplVar21;
  FUN_00503e88(&local_c0,&local_88,&local_90,&lStack_98,&local_a0,&local_80,local_c8);
  plVar17 = (long *)*plVar16;
  pppplStack_78 = pppplVar21;
  local_80 = (long ****)&local_88;
  local_88 = param_1;
  ppplVar20 = local_e0;
  while (plVar17 != plVar10) {
    if (ppplVar20 == &local_d8) {
      local_c0 = local_80;
      pppplStack_b8 = pppplStack_78;
      if (plVar17 != plVar10) goto LAB_004f81d0;
      break;
    }
    pplVar13 = ppplVar20[4];
    pplVar11 = (long **)plVar17[4];
    if (pplVar11 == pplVar13) {
      pplVar11 = ppplVar20[5];
      pbVar1 = (byte *)plVar17[5];
      pbVar2 = (byte *)plVar17[6];
      pplVar13 = pplVar11;
      pbVar14 = pbVar1;
      while (pplVar13 != ppplVar20[6]) {
        if (pbVar14 == pbVar2) {
LAB_004f8110:
          FUN_00504388(&local_80);
          if (plVar17 != (long *)0x0) goto LAB_004f811c;
          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 004f8304 to 004f832b has its CatchHandler @ 004f84ec */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
                       "__x != nullptr","node shouldn\'t be null");
          }
          goto LAB_004f84e0;
        }
        if (*pbVar14 < *(byte *)pplVar13) goto LAB_004f8110;
        if (*(byte *)pplVar13 < *pbVar14) break;
        pbVar14 = pbVar14 + 1;
        pplVar13 = (long **)((long)pplVar13 + 1);
      }
      if (pbVar1 != pbVar2) {
        do {
          pbVar14 = pbVar1 + 1;
          if (pplVar11 == ppplVar20[6]) {
LAB_004f814c:
            if (ppplVar20 != (long ***)0x0) goto LAB_004f8150;
            if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 004f8340 to 004f8367 has its CatchHandler @ 004f84e8 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
                         "__x != nullptr","node shouldn\'t be null");
            }
            goto LAB_004f84e0;
          }
          if (*(byte *)pplVar11 < *pbVar1) goto LAB_004f814c;
        } while ((*(byte *)pplVar11 <= *pbVar1) &&
                (pplVar11 = (long **)((long)pplVar11 + 1), pbVar1 = pbVar14, pbVar14 != pbVar2));
        if (plVar17 == (long *)0x0) {
          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 004f837c to 004f83a3 has its CatchHandler @ 004f84e4 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
                       "__x != nullptr","node shouldn\'t be null");
          }
          goto LAB_004f84e0;
        }
      }
LAB_004f80b0:
      plVar7 = (long *)plVar17[1];
      plVar18 = plVar17;
      if ((long *)plVar17[1] == (long *)0x0) {
        do {
          plVar17 = (long *)plVar18[2];
          bVar8 = (long *)*plVar17 != plVar18;
          plVar18 = plVar17;
        } while (bVar8);
      }
      else {
        do {
          plVar17 = plVar7;
          plVar7 = (long *)*plVar17;
        } while ((long *)*plVar17 != (long *)0x0);
      }
      if (ppplVar20 == (long ***)0x0) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 004f82c8 to 004f82ef has its CatchHandler @ 004f84f0 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
                     "__x != nullptr","node shouldn\'t be null");
        }
        goto LAB_004f84e0;
      }
      ppplVar6 = (long ***)ppplVar20[1];
      ppplVar19 = ppplVar20;
      if ((long ***)ppplVar20[1] == (long ***)0x0) {
        do {
          ppplVar20 = (long ***)ppplVar19[2];
          bVar8 = (long ***)*ppplVar20 != ppplVar19;
          ppplVar19 = ppplVar20;
        } while (bVar8);
      }
      else {
        do {
          ppplVar20 = ppplVar6;
          ppplVar6 = (long ***)*ppplVar20;
        } while ((long ***)*ppplVar20 != (long ***)0x0);
      }
    }
    else if (pplVar11 < pplVar13) {
                    /* try { // try from 004f809c to 004f8117 has its CatchHandler @ 004f8474 */
      FUN_00504388(&local_80);
LAB_004f811c:
      plVar7 = (long *)plVar17[1];
      plVar18 = plVar17;
      if ((long *)plVar17[1] == (long *)0x0) {
        do {
          plVar17 = (long *)plVar18[2];
          bVar8 = (long *)*plVar17 != plVar18;
          plVar18 = plVar17;
        } while (bVar8);
      }
      else {
        do {
          plVar17 = plVar7;
          plVar7 = (long *)*plVar17;
        } while ((long *)*plVar17 != (long *)0x0);
      }
    }
    else {
      if (pplVar11 <= pplVar13) goto LAB_004f80b0;
LAB_004f8150:
      ppplVar6 = (long ***)ppplVar20[1];
      ppplVar19 = ppplVar20;
      if ((long ***)ppplVar20[1] == (long ***)0x0) {
        do {
          ppplVar20 = (long ***)ppplVar19[2];
          bVar8 = (long ***)*ppplVar20 != ppplVar19;
          ppplVar19 = ppplVar20;
        } while (bVar8);
      }
      else {
        do {
          ppplVar20 = ppplVar6;
          ppplVar6 = (long ***)*ppplVar20;
        } while ((long ***)*ppplVar20 != (long ***)0x0);
      }
    }
  }
  goto LAB_004f8190;
  while( true ) {
    plVar7 = (long *)plVar17[1];
    plVar18 = plVar17;
    if ((long *)plVar17[1] == (long *)0x0) {
      do {
        plVar17 = (long *)plVar18[2];
        bVar8 = (long *)*plVar17 != plVar18;
        plVar18 = plVar17;
      } while (bVar8);
    }
    else {
      do {
        plVar17 = plVar7;
        plVar7 = (long *)*plVar17;
      } while ((long *)*plVar17 != (long *)0x0);
    }
    if (plVar17 == plVar10) break;
LAB_004f81d0:
                    /* try { // try from 004f81d4 to 004f81db has its CatchHandler @ 004f8478 */
    FUN_00504388(&local_c0,plVar17 + 4);
    if (plVar17 == (long *)0x0) {
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 004f828c to 004f82b3 has its CatchHandler @ 004f84f4 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
                   "__x != nullptr","node shouldn\'t be null");
      }
      goto LAB_004f84e0;
    }
  }
LAB_004f8190:
  FUN_00442104(plVar16,*(undefined8 *)(param_2 + 0xc0));
  *(long ****)(param_2 + 0xb8) = local_e0;
  *(long ***)(param_2 + 0xc0) = local_d8;
  *(long *)(param_2 + 200) = local_d0;
  if (local_d0 == 0) {
    *plVar16 = (long)plVar10;
  }
  else {
    local_d8[2] = plVar10;
    local_d8 = (undefined8 **)0x0;
    local_d0 = 0;
    local_e0 = &local_d8;
  }
  uVar12 = *param_3;
  *param_3 = 0;
  pvVar15 = *(void **)(param_2 + 0xb0);
  *(undefined8 *)(param_2 + 0xb0) = uVar12;
  if (pvVar15 != (void *)0x0) {
    FUN_004fb91c(pvVar15,local_d8);
    operator_delete(pvVar15);
  }
  FUN_00442104(&local_e0,local_d8);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
LAB_004f84e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f84f8  FUN_004f84f8 =====

void FUN_004f84f8(long param_1)

{
  long lVar1;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((ulong)*(byte *)(param_1 + 0x250) != 0xff) {
                    /* try { // try from 004f8534 to 004f853b has its CatchHandler @ 004f8568 */
    (*(code *)(&PTR_FUN_00d1fac0)[*(byte *)(param_1 + 0x250)])(auStack_30,param_1 + 8);
  }
  *(undefined1 *)(param_1 + 0x250) = 0xff;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f856c  FUN_004f856c =====

void FUN_004f856c(long *param_1,long param_2,long *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long *plVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  void *local_1f8;
  undefined1 *local_1f0;
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  long *local_188;
  long local_180;
  long local_178;
  undefined1 auStack_170 [264];
  long local_68;
  undefined1 *puVar13;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (*(long *)(param_2 + 0x88) == 0) {
    plVar5 = (long *)FUN_0054f64c(0x10);
                    /* try { // try from 004f88c8 to 004f88d3 has its CatchHandler @ 004f89e0 */
    FUN_00547104(plVar5,"Missing join key package");
  }
  else if (*(long *)(param_2 + 0x80) == 0) {
    plVar5 = (long *)FUN_0054f64c(0x10);
                    /* try { // try from 004f88e4 to 004f88ef has its CatchHandler @ 004f89dc */
    FUN_00547104(plVar5,"Missing join init private key");
  }
  else if (*(long *)(param_2 + 0x68) == 0) {
    plVar5 = (long *)FUN_0054f64c(0x10);
                    /* try { // try from 004f8900 to 004f890b has its CatchHandler @ 004f89d8 */
    FUN_00547104(plVar5,"Missing self-sig private key");
  }
  else if (*(long *)(param_2 + 0x78) == 0) {
    plVar5 = (long *)FUN_0054f64c(0x10);
                    /* try { // try from 004f891c to 004f8927 has its CatchHandler @ 004f89d4 */
    FUN_00547104(plVar5,"Missing self-HPKE private key");
  }
  else if (*(long *)(param_2 + 0x90) == 0) {
    plVar5 = (long *)FUN_0054f64c(0x10);
                    /* try { // try from 004f8938 to 004f8943 has its CatchHandler @ 004f89d0 */
    FUN_00547104(plVar5,"Missing external sender");
  }
  else {
    if (*(long *)(param_2 + 0xb0) == 0) {
                    /* try { // try from 004f85d0 to 004f85f3 has its CatchHandler @ 004f8a64 */
      FUN_004f0510(&local_188,1,
                   "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x1be);
                    /* try { // try from 004f85f8 to 004f860b has its CatchHandler @ 004f8a60 */
      FUN_00428964(auStack_170,"Processing welcome: ",0x14);
      puVar12 = (undefined1 *)*param_3;
      puVar1 = (undefined1 *)param_3[1];
      local_1f0 = (undefined1 *)0x0;
      local_1e8 = (undefined1 *)0x0;
      local_1e0 = (undefined1 *)0x0;
      uVar7 = (long)puVar1 - (long)puVar12;
      if (uVar7 != 0) {
        if ((long)uVar7 < 0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 004f89a8 to 004f89af has its CatchHandler @ 004f8a68 */
                    /* WARNING: Subroutine does not return */
            FUN_004f04ec(&local_1f0);
          }
          goto LAB_004f89b0;
        }
                    /* try { // try from 004f8624 to 004f862b has its CatchHandler @ 004f8a68 */
        local_1f0 = (undefined1 *)operator_new(uVar7);
        local_1e0 = local_1f0 + uVar7;
        puVar6 = local_1f0;
        puVar13 = puVar12;
        if ((0x1f < uVar7) && (0x1f < (ulong)((long)local_1f0 - (long)puVar12))) {
          uVar8 = uVar7 & 0xffffffffffffffe0;
          puVar9 = (undefined8 *)(local_1f0 + 0x10);
          puVar13 = puVar12 + uVar8;
          puVar6 = local_1f0 + uVar8;
          puVar10 = (undefined8 *)(puVar12 + 0x10);
          uVar11 = uVar8;
          do {
            puVar3 = puVar10 + -1;
            uVar14 = puVar10[-2];
            uVar16 = puVar10[1];
            uVar15 = *puVar10;
            puVar10 = puVar10 + 4;
            uVar11 = uVar11 - 0x20;
            puVar9[-1] = *puVar3;
            puVar9[-2] = uVar14;
            puVar9[1] = uVar16;
            *puVar9 = uVar15;
            puVar9 = puVar9 + 4;
          } while (uVar11 != 0);
          local_1e8 = puVar6;
          if (uVar7 == uVar8) goto LAB_004f86a4;
        }
        do {
          puVar12 = puVar13 + 1;
          local_1e8 = puVar6 + 1;
          *puVar6 = *puVar13;
          puVar6 = local_1e8;
          puVar13 = puVar12;
        } while (puVar12 != puVar1);
      }
LAB_004f86a4:
                    /* try { // try from 004f86a4 to 004f86af has its CatchHandler @ 004f8a4c */
      FUN_005a2b88(auStack_170,&local_1f0);
      if (0 < (long)local_1e8 - (long)local_1f0) {
        uVar7 = ((long)local_1e8 - (long)local_1f0) + 1;
        puVar12 = local_1f0;
        do {
          uVar7 = uVar7 - 1;
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        } while (1 < uVar7);
      }
      if (local_1f0 != (undefined1 *)0x0) {
        local_1e8 = local_1f0;
        operator_delete(local_1f0);
      }
      FUN_004f0604(&local_188);
                    /* try { // try from 004f86ec to 004f86f3 has its CatchHandler @ 004f8a48 */
      FUN_0056bc68(&local_1f0);
                    /* try { // try from 004f86f4 to 004f86ff has its CatchHandler @ 004f8a3c */
      FUN_0050c444(param_3,&local_1f0);
      local_180 = 0;
      local_178 = 0;
      local_188 = &local_180;
                    /* try { // try from 004f871c to 004f872f has its CatchHandler @ 004f8a24 */
      pvVar4 = (void *)FUN_004f8b7c(*(undefined8 *)(param_2 + 0x80),*(undefined8 *)(param_2 + 0x78),
                                    *(undefined8 *)(param_2 + 0x68),*(undefined8 *)(param_2 + 0x88),
                                    &local_1f0,&DAT_001f73fa,&local_188);
      local_1f8 = pvVar4;
      FUN_0050070c(&local_188,local_180);
                    /* try { // try from 004f8744 to 004f8753 has its CatchHandler @ 004f8a08 */
      uVar7 = FUN_004f8dbc(param_2,pvVar4,param_4);
      if ((uVar7 & 1) == 0) {
                    /* try { // try from 004f8810 to 004f882b has its CatchHandler @ 004f89c4 */
        FUN_004f0510(&local_188,3,
                     "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x1cf
                    );
                    /* try { // try from 004f8830 to 004f883f has its CatchHandler @ 004f89bc */
        FUN_00428964(auStack_170,"Group received in MLS welcome is not valid",0x2a);
        FUN_004f0604(&local_188);
        *(undefined1 *)param_1 = 0;
        *(undefined1 *)(param_1 + 3) = 0;
      }
      else {
                    /* try { // try from 004f8758 to 004f8773 has its CatchHandler @ 004f89c8 */
        FUN_004f0510(&local_188,1,
                     "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x1d4
                    );
                    /* try { // try from 004f8778 to 004f878b has its CatchHandler @ 004f89c0 */
        FUN_00428964(auStack_170,"Successfully welcomed to MLS Group, our leaf index is ",0x36);
                    /* try { // try from 004f8790 to 004f87ab has its CatchHandler @ 004f89f4 */
        FUN_0054bcd8(auStack_170,*(undefined4 *)((long)pvVar4 + 0x3d8));
        FUN_00428964(auStack_170,"; current epoch is ",0x13);
                    /* try { // try from 004f87b0 to 004f87b7 has its CatchHandler @ 004f89b8 */
        FUN_0054c088(auStack_170,*(undefined8 *)((long)pvVar4 + 0x20));
        FUN_004f0604(&local_188);
                    /* try { // try from 004f87c0 to 004f87d3 has its CatchHandler @ 004f89b4 */
        FUN_004f7e84(&local_188,param_2,&local_1f8);
        FUN_004f40c4(param_2);
        *param_1 = (long)local_188;
        plVar5 = param_1 + 1;
        *plVar5 = local_180;
        param_1[2] = local_178;
        if (local_178 == 0) {
          *param_1 = (long)plVar5;
        }
        else {
          local_188 = &local_180;
          *(long **)(local_180 + 0x10) = plVar5;
          local_180 = 0;
          local_178 = 0;
        }
        *(undefined1 *)(param_1 + 3) = 1;
        FUN_00442104(&local_188,local_180);
        pvVar4 = local_1f8;
      }
      if (pvVar4 != (void *)0x0) {
        FUN_004fb91c(pvVar4);
        operator_delete(pvVar4);
      }
      FUN_004f955c(&local_1f0);
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return;
      }
      goto LAB_004f89b0;
    }
    plVar5 = (long *)FUN_0054f64c(0x10);
                    /* try { // try from 004f8954 to 004f895f has its CatchHandler @ 004f89cc */
    FUN_00547104(plVar5,"Already joined/created group");
  }
  *plVar5 = (long)(PTR_DAT_00d51d30 + 0x10);
  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 004f8980 to 004f8997 has its CatchHandler @ 004f8a7c */
                    /* WARNING: Subroutine does not return */
    FUN_0054f748(plVar5,&PTR_PTR_thunk_FUN_00552768_00d23bb8,PTR_FUN_00d51d38);
  }
LAB_004f89b0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f8b7c  FUN_004f8b7c =====

void * FUN_004f8b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,long *param_7)

{
  long lVar1;
  void *pvVar2;
  undefined1 *puVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *local_268;
  long local_260;
  long local_258;
  undefined1 *local_250;
  undefined1 *local_248;
  undefined1 *local_238;
  undefined1 *local_230;
  undefined1 *local_220;
  undefined1 *local_218;
  undefined1 *local_208;
  undefined1 *local_200;
  undefined1 local_1f0 [384];
  undefined1 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x5c8);
                    /* try { // try from 004f8bcc to 004f8bd7 has its CatchHandler @ 004f8d94 */
  FUN_004ffecc(&local_220,param_2);
                    /* try { // try from 004f8bd8 to 004f8be3 has its CatchHandler @ 004f8d84 */
  FUN_00501e78(&local_250,param_3);
  plVar6 = (long *)*param_7;
  local_268 = &local_260;
  local_258 = param_7[2];
  local_1f0[0] = 0;
  plVar4 = param_7 + 1;
  local_260 = *plVar4;
  local_70 = 0;
  if (local_258 != 0) {
    *(long **)(local_260 + 0x10) = local_268;
    *param_7 = (long)plVar4;
    *plVar4 = 0;
    param_7[2] = 0;
    local_268 = plVar6;
  }
                    /* try { // try from 004f8c24 to 004f8c47 has its CatchHandler @ 004f8d60 */
  FUN_0057eec8(pvVar2,param_1,&local_220,&local_250,param_4,param_5,local_1f0,&local_268);
  FUN_0050070c(&local_268,local_260);
  FUN_0050c5f8(local_1f0);
  if (0 < (long)local_230 - (long)local_238) {
    uVar5 = ((long)local_230 - (long)local_238) + 1;
    puVar3 = local_238;
    do {
      uVar5 = uVar5 - 1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (1 < uVar5);
  }
  if (local_238 != (undefined1 *)0x0) {
    local_230 = local_238;
    operator_delete(local_238);
  }
  if (0 < (long)local_248 - (long)local_250) {
    uVar5 = ((long)local_248 - (long)local_250) + 1;
    puVar3 = local_250;
    do {
      uVar5 = uVar5 - 1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (1 < uVar5);
  }
  if (local_250 != (undefined1 *)0x0) {
    local_248 = local_250;
    operator_delete(local_250);
  }
  if (0 < (long)local_200 - (long)local_208) {
    uVar5 = ((long)local_200 - (long)local_208) + 1;
    puVar3 = local_208;
    do {
      uVar5 = uVar5 - 1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (1 < uVar5);
  }
  if (local_208 != (undefined1 *)0x0) {
    local_200 = local_208;
    operator_delete(local_208);
  }
  if (0 < (long)local_218 - (long)local_220) {
    uVar5 = ((long)local_218 - (long)local_220) + 1;
    puVar3 = local_220;
    do {
      uVar5 = uVar5 - 1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (1 < uVar5);
  }
  if (local_220 != (undefined1 *)0x0) {
    local_218 = local_220;
    operator_delete(local_220);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pvVar2;
}


// ===== 004f8dbc  FUN_004f8dbc =====

uint FUN_004f8dbc(long param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  undefined8 ****ppppuVar5;
  undefined8 ***pppuVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 ***pppuVar9;
  short *psVar10;
  undefined8 ****ppppuVar11;
  long lVar12;
  undefined8 ****ppppuVar13;
  void *local_1c8 [2];
  char local_1b1;
  undefined8 ***local_1b0;
  undefined8 ***local_1a8;
  char local_199;
  undefined8 ***local_198;
  undefined8 ***local_190;
  long lStack_188;
  undefined1 local_180;
  undefined8 ***local_178;
  undefined8 ***local_170;
  long lStack_168;
  undefined1 auStack_160 [264];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (*(long *)(param_1 + 0x90) == 0) {
    FUN_004f0510(&local_178,3,
                 "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x220);
                    /* try { // try from 004f8ea4 to 004f8eb3 has its CatchHandler @ 004f952c */
    FUN_00428964(auStack_160,"Cannot verify MLS welcome without an external sender",0x34);
    FUN_004f0604(&local_178);
    if (*(char *)(*(long *)(param_1 + 0x108) + 0x10) == '\0') {
      FUN_004a3cf4(&local_178,"VerifyWelcomeState");
                    /* try { // try from 004f8ed8 to 004f8ee7 has its CatchHandler @ 004f9504 */
      FUN_004a3cf4(&local_198,"Missing external sender when processing Welcome");
                    /* try { // try from 004f8ef0 to 004f8efb has its CatchHandler @ 004f94ec */
      (**(code **)(param_1 + 0x100))(param_1 + 0xf0,&local_178,&local_198);
LAB_004f8efc:
      local_1b0 = local_198;
      if (lStack_188 < 0) {
LAB_004f8fc4:
        operator_delete(local_1b0);
      }
LAB_004f8fc8:
      if (lStack_168 < 0) {
        operator_delete(local_178);
      }
    }
  }
  else {
    uVar8 = FUN_005a1c5c(param_2 + 8,param_1 + 0x10);
    if ((uVar8 & 1) == 0) {
      for (psVar10 = *(short **)(param_2 + 0x230); psVar10 != *(short **)(param_2 + 0x238);
          psVar10 = psVar10 + 0x10) {
        if (*psVar10 == DAT_001fa138) {
          local_178 = (undefined8 ****)0x0;
          local_170 = (undefined8 ****)0x0;
          lStack_168 = 0;
                    /* try { // try from 004f9018 to 004f901f has its CatchHandler @ 004f94bc */
          FUN_0050c8ac(psVar10 + 4,&local_178);
          ppppuVar13 = (undefined8 ****)local_170;
          pppuVar6 = local_178;
          lStack_188 = lStack_168;
          local_190 = local_170;
          local_198 = local_178;
          local_180 = 1;
          lVar12 = (long)local_170 - (long)local_178;
          if (lVar12 == 0x58) {
            if (local_178 == local_170) {
              if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 004f93c0 to 004f93e7 has its CatchHandler @ 004f9558 */
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s:%d: assertion %s failed: %s",
                           "../../discord_common/native/third_party/llvm/libcxx/include/vector",
                           0x220,"!empty()","front() called on an empty vector");
              }
              goto LAB_004f9550;
            }
            lVar12 = *(long *)(param_1 + 0x90);
                    /* try { // try from 004f9054 to 004f90a7 has its CatchHandler @ 004f9494 */
            uVar8 = FUN_005a18d4(local_178,lVar12);
            if ((uVar8 & 1) != 0) {
              bVar1 = *(byte *)(lVar12 + 0x50);
              bVar2 = *(byte *)(pppuVar6 + 10);
              if ((bVar2 == 0xff) || (bVar1 == 0xff || bVar1 != bVar2)) {
                bVar4 = bVar1 != 0xff && bVar1 == bVar2;
                if (bVar2 == 0xff) {
                  bVar4 = bVar1 == 0xff;
                }
                if (bVar4) goto LAB_004f9294;
              }
              else {
                local_178 = &local_1b0;
                uVar8 = (*(code *)(&PTR_FUN_00d1fba8)[bVar2])(&local_178,pppuVar6 + 3,lVar12 + 0x18)
                ;
                if ((uVar8 & 1) != 0) {
LAB_004f9294:
                    /* try { // try from 004f9294 to 004f929f has its CatchHandler @ 004f9430 */
                  FUN_0058952c(&local_1b0,param_2);
                  pppuVar6 = local_1a8;
                  ppppuVar11 = (undefined8 ****)local_1b0;
                  if (local_1b0 != local_1a8) goto LAB_004f92ac;
                  uVar7 = 1;
                  goto LAB_004f9378;
                }
              }
            }
                    /* try { // try from 004f90ac to 004f90c7 has its CatchHandler @ 004f9478 */
            FUN_004f0510(&local_178,3,
                         "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",
                         0x23a);
                    /* try { // try from 004f90cc to 004f90db has its CatchHandler @ 004f9474 */
            FUN_00428964(auStack_160,"MLS welcome lists unexpected external sender",0x2c);
            FUN_004f0604(&local_178);
            if (*(char *)(*(long *)(param_1 + 0x108) + 0x10) == '\0') {
                    /* try { // try from 004f90f0 to 004f90ff has its CatchHandler @ 004f943c */
              FUN_004a3cf4(&local_178,"VerifyWelcomeState");
                    /* try { // try from 004f9100 to 004f910f has its CatchHandler @ 004f9438 */
              FUN_004a3cf4(&local_1b0,"Welcome message lists unexpected external sender");
                    /* try { // try from 004f9118 to 004f9123 has its CatchHandler @ 004f9434 */
              (**(code **)(param_1 + 0x100))(param_1 + 0xf0,&local_178,&local_1b0);
LAB_004f91c4:
              if (local_199 < '\0') {
                operator_delete(local_1b0);
              }
              if (lStack_168 < 0) {
                operator_delete(local_178);
              }
            }
          }
          else {
                    /* try { // try from 004f9128 to 004f9143 has its CatchHandler @ 004f9490 */
            FUN_004f0510(&local_178,3,
                         "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",
                         0x233);
                    /* try { // try from 004f9148 to 004f915b has its CatchHandler @ 004f9480 */
            FUN_00428964(auStack_160,"MLS welcome lists unexpected number of external senders: ",
                         0x39);
                    /* try { // try from 004f9174 to 004f917b has its CatchHandler @ 004f947c */
            FUN_0054c088(auStack_160,(lVar12 >> 3) * 0x2e8ba2e8ba2e8ba3);
            FUN_004f0604(&local_178);
            if (*(char *)(*(long *)(param_1 + 0x108) + 0x10) == '\0') {
                    /* try { // try from 004f9190 to 004f919f has its CatchHandler @ 004f9470 */
              FUN_004a3cf4(&local_178,"VerifyWelcomeState");
                    /* try { // try from 004f91a0 to 004f91af has its CatchHandler @ 004f9458 */
              FUN_004a3cf4(&local_1b0,"Welcome message lists unexpected external sender count");
                    /* try { // try from 004f91b8 to 004f91c3 has its CatchHandler @ 004f9440 */
              (**(code **)(param_1 + 0x100))(param_1 + 0xf0,&local_178,&local_1b0);
              goto LAB_004f91c4;
            }
          }
          uVar7 = 0;
          goto LAB_004f91e8;
        }
      }
                    /* try { // try from 004f8f40 to 004f8f5b has its CatchHandler @ 004f9520 */
      FUN_004f0510(&local_178,3,
                   "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x22d);
                    /* try { // try from 004f8f60 to 004f8f6f has its CatchHandler @ 004f951c */
      FUN_00428964(auStack_160,"MLS welcome missing external senders extension",0x2e);
      FUN_004f0604(&local_178);
      if (*(char *)(*(long *)(param_1 + 0x108) + 0x10) == '\0') {
                    /* try { // try from 004f8f84 to 004f8f93 has its CatchHandler @ 004f94b4 */
        FUN_004a3cf4(&local_178,"VerifyWelcomeState");
                    /* try { // try from 004f8f94 to 004f8fa3 has its CatchHandler @ 004f94b0 */
        FUN_004a3cf4(&local_1b0,"Welcome message missing external sender extension");
                    /* try { // try from 004f8fac to 004f8fb7 has its CatchHandler @ 004f949c */
        (**(code **)(param_1 + 0x100))(param_1 + 0xf0,&local_178,&local_1b0);
        if (local_199 < '\0') goto LAB_004f8fc4;
        goto LAB_004f8fc8;
      }
    }
    else {
      FUN_004f0510(&local_178,3,
                   "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x226);
                    /* try { // try from 004f8e28 to 004f8e37 has its CatchHandler @ 004f9528 */
      FUN_00428964(auStack_160,"Unexpected group ID in MLS welcome",0x22);
      FUN_004f0604(&local_178);
      if (*(char *)(*(long *)(param_1 + 0x108) + 0x10) == '\0') {
        FUN_004a3cf4(&local_178,"VerifyWelcomeState");
                    /* try { // try from 004f8e5c to 004f8e6b has its CatchHandler @ 004f94d0 */
        FUN_004a3cf4(&local_198,"Unexpected group ID in Welcome");
                    /* try { // try from 004f8e74 to 004f8e7f has its CatchHandler @ 004f94cc */
        (**(code **)(param_1 + 0x100))(param_1 + 0xf0,&local_178,&local_198);
        goto LAB_004f8efc;
      }
    }
  }
  uVar7 = 0;
LAB_004f8fdc:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return uVar7 & 1;
  }
LAB_004f9550:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while (ppppuVar11 = ppppuVar11 + 0x27, ppppuVar11 != (undefined8 ****)pppuVar6) {
LAB_004f92ac:
                    /* try { // try from 004f92b0 to 004f92bb has its CatchHandler @ 004f94d4 */
    uVar7 = FUN_004f70a8(param_1,ppppuVar11 + 6,param_3);
    if ((uVar7 & 1) == 0) {
                    /* try { // try from 004f92dc to 004f92f7 has its CatchHandler @ 004f942c */
      FUN_004f0510(&local_178,3,
                   "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x241);
                    /* try { // try from 004f92fc to 004f930b has its CatchHandler @ 004f941c */
      FUN_00428964(auStack_160,"MLS welcome lists unrecognized user ID",0x26);
      FUN_004f0604(&local_178);
      if (*(char *)(*(long *)(param_1 + 0x108) + 0x10) == '\0') {
                    /* try { // try from 004f9320 to 004f932f has its CatchHandler @ 004f9418 */
        FUN_004a3cf4(&local_178,"VerifyWelcomeState");
                    /* try { // try from 004f9330 to 004f933f has its CatchHandler @ 004f9400 */
        FUN_004a3cf4(local_1c8,"Welcome message lists unrecognized user ID");
                    /* try { // try from 004f9348 to 004f9353 has its CatchHandler @ 004f93e8 */
        (**(code **)(param_1 + 0x100))(param_1 + 0xf0,&local_178,local_1c8);
        if (local_1b1 < '\0') {
          operator_delete(local_1c8[0]);
        }
        if (lStack_168 < 0) {
          operator_delete(local_178);
        }
      }
      break;
    }
  }
LAB_004f9378:
  pppuVar6 = local_1b0;
  if ((undefined8 ****)local_1b0 != (undefined8 ****)0x0) {
    while (local_1a8 != pppuVar6) {
      FUN_004fc1d0((undefined8 ****)local_1a8 + -0x27);
      local_1a8 = (undefined8 ****)local_1a8 + -0x27;
    }
    local_1a8 = pppuVar6;
    operator_delete(local_1b0);
  }
LAB_004f91e8:
  pppuVar6 = local_198;
  ppppuVar11 = ppppuVar13;
  if ((undefined8 ****)local_198 != (undefined8 ****)0x0) {
    while (ppppuVar5 = ppppuVar13, ppppuVar5 != (undefined8 ****)pppuVar6) {
      if ((ulong)*(byte *)(ppppuVar5 + -1) != 0xff) {
                    /* try { // try from 004f9228 to 004f922f has its CatchHandler @ 004f9554 */
        (*(code *)(&PTR_FUN_00d1f9c8)[*(byte *)(ppppuVar5 + -1)])(&local_178,ppppuVar5 + -8);
      }
      pppuVar9 = ppppuVar5[-0xb];
      ppppuVar13 = ppppuVar5 + -0xb;
      *(undefined1 *)(ppppuVar5 + -1) = 0xff;
      if (0 < (long)ppppuVar5[-10] - (long)pppuVar9) {
        uVar8 = ((long)ppppuVar5[-10] - (long)pppuVar9) + 1;
        do {
          uVar8 = uVar8 - 1;
          *(undefined1 *)pppuVar9 = 0;
          pppuVar9 = (undefined8 ***)((long)pppuVar9 + 1);
        } while (1 < uVar8);
        pppuVar9 = *ppppuVar13;
      }
      ppppuVar11 = (undefined8 ****)local_198;
      if (pppuVar9 != (undefined8 ***)0x0) {
        ppppuVar5[-10] = pppuVar9;
        operator_delete(pppuVar9);
        ppppuVar11 = (undefined8 ****)local_198;
      }
    }
    operator_delete(ppppuVar11);
  }
  goto LAB_004f8fdc;
}


// ===== 004f955c  FUN_004f955c =====

void FUN_004f955c(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  FUN_00503c9c(param_1 + 0x50);
  puVar1 = *(undefined1 **)(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x40) - (long)puVar1;
  if (0 < lVar2) {
    uVar3 = lVar2 + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar3);
    puVar1 = *(undefined1 **)(param_1 + 0x38);
  }
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x40) = puVar1;
    operator_delete(puVar1);
  }
  puVar1 = *(undefined1 **)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28) - (long)puVar1;
  if (0 < lVar2) {
    uVar3 = lVar2 + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar3);
    puVar1 = *(undefined1 **)(param_1 + 0x20);
  }
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x28) = puVar1;
    operator_delete(puVar1);
  }
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    while (lVar4 != lVar2) {
      lVar4 = lVar4 + -0x48;
                    /* try { // try from 004f95f8 to 004f95ff has its CatchHandler @ 004f962c */
      FUN_00503d98(lVar4);
    }
    *(long *)(param_1 + 0x10) = lVar2;
    operator_delete(*(void **)(param_1 + 8));
    return;
  }
  return;
}


// ===== 004f9630  FUN_004f9630 =====

void FUN_004f9630(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)param_1[1];
    pvVar1 = pvVar3;
    if (pvVar2 != pvVar3) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -0x138);
        FUN_004fc1d0(pvVar2);
      } while (pvVar2 != pvVar3);
      pvVar1 = (void *)*param_1;
    }
    param_1[1] = pvVar3;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 004f9698  FUN_004f9698 =====

void FUN_004f9698(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  puVar1 = (undefined1 *)param_1[3];
  if (0 < param_1[4] - (long)puVar1) {
    uVar2 = (param_1[4] - (long)puVar1) + 1;
    do {
      uVar2 = uVar2 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar2);
    puVar1 = (undefined1 *)param_1[3];
  }
  if (puVar1 != (undefined1 *)0x0) {
    param_1[4] = puVar1;
    operator_delete(puVar1);
  }
  puVar1 = (undefined1 *)*param_1;
  if (0 < param_1[1] - (long)puVar1) {
    uVar2 = (param_1[1] - (long)puVar1) + 1;
    do {
      uVar2 = uVar2 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar2);
    puVar1 = (undefined1 *)*param_1;
  }
  if (puVar1 != (undefined1 *)0x0) {
    param_1[1] = puVar1;
    operator_delete(puVar1);
    return;
  }
  return;
}


// ===== 004f9728  FUN_004f9728 =====

void * FUN_004f9728(undefined2 *param_1,long *param_2,long *param_3,long param_4,undefined8 *param_5
                   ,undefined8 *param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined1 *puVar16;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  void *local_180;
  void *pvStack_178;
  undefined8 local_170;
  void *local_160;
  void *pvStack_158;
  undefined8 local_150;
  void *local_148;
  void *pvStack_140;
  undefined8 local_138;
  void *local_130;
  void *pvStack_128;
  undefined8 local_120;
  void *local_118;
  void *pvStack_110;
  undefined8 local_108;
  void *local_100;
  void *pvStack_f8;
  undefined8 local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 auStack_b8 [8];
  undefined1 local_b0 [56];
  byte local_78;
  long local_70;
  undefined1 *puVar17;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  pvVar8 = operator_new(0x138);
  puVar16 = (undefined1 *)*param_2;
  puVar1 = (undefined1 *)param_2[1];
  uVar2 = *param_1;
  local_c8 = (undefined1 *)0x0;
  local_c0 = (undefined1 *)0x0;
  local_d0 = (undefined1 *)0x0;
  uVar10 = (long)puVar1 - (long)puVar16;
  if (uVar10 != 0) {
    if ((long)uVar10 < 0) {
      if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* try { // try from 004f9b48 to 004f9b4f has its CatchHandler @ 004f9bac */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_d0);
      }
      goto LAB_004f9bd4;
    }
                    /* try { // try from 004f97a0 to 004f97a7 has its CatchHandler @ 004f9bac */
    local_d0 = (undefined1 *)operator_new(uVar10);
    local_c0 = local_d0 + uVar10;
    puVar9 = local_d0;
    puVar17 = puVar16;
    if ((0x1f < uVar10) && (0x1f < (ulong)((long)local_d0 - (long)puVar16))) {
      uVar11 = uVar10 & 0xffffffffffffffe0;
      puVar13 = (undefined8 *)(local_d0 + 0x10);
      puVar17 = puVar16 + uVar11;
      puVar9 = local_d0 + uVar11;
      puVar14 = (undefined8 *)(puVar16 + 0x10);
      uVar15 = uVar11;
      do {
        puVar4 = puVar14 + -1;
        uVar18 = puVar14[-2];
        uVar20 = puVar14[1];
        uVar19 = *puVar14;
        puVar14 = puVar14 + 4;
        uVar15 = uVar15 - 0x20;
        puVar13[-1] = *puVar4;
        puVar13[-2] = uVar18;
        puVar13[1] = uVar20;
        *puVar13 = uVar19;
        puVar13 = puVar13 + 4;
      } while (uVar15 != 0);
      local_c8 = puVar9;
      if (uVar10 == uVar11) goto LAB_004f9820;
    }
    do {
      puVar16 = puVar17 + 1;
      local_c8 = puVar9 + 1;
      *puVar9 = *puVar17;
      puVar9 = local_c8;
      puVar17 = puVar16;
    } while (puVar16 != puVar1);
  }
LAB_004f9820:
  puVar16 = (undefined1 *)*param_3;
  puVar1 = (undefined1 *)param_3[1];
  local_e8 = (undefined1 *)0x0;
  local_e0 = (undefined1 *)0x0;
  local_d8 = (undefined1 *)0x0;
  uVar10 = (long)puVar1 - (long)puVar16;
  if (uVar10 != 0) {
    if ((long)uVar10 < 0) {
      if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* try { // try from 004f9b64 to 004f9b6b has its CatchHandler @ 004f9b9c */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_e8);
      }
      goto LAB_004f9bd4;
    }
                    /* try { // try from 004f9838 to 004f983f has its CatchHandler @ 004f9b9c */
    local_e8 = (undefined1 *)operator_new(uVar10);
    local_d8 = local_e8 + uVar10;
    puVar9 = local_e8;
    puVar17 = puVar16;
    if ((0x1f < uVar10) && (0x1f < (ulong)((long)local_e8 - (long)puVar16))) {
      uVar11 = uVar10 & 0xffffffffffffffe0;
      puVar13 = (undefined8 *)(local_e8 + 0x10);
      puVar17 = puVar16 + uVar11;
      puVar9 = local_e8 + uVar11;
      puVar14 = (undefined8 *)(puVar16 + 0x10);
      uVar15 = uVar11;
      do {
        puVar4 = puVar14 + -1;
        uVar18 = puVar14[-2];
        uVar20 = puVar14[1];
        uVar19 = *puVar14;
        puVar14 = puVar14 + 4;
        uVar15 = uVar15 - 0x20;
        puVar13[-1] = *puVar4;
        puVar13[-2] = uVar18;
        puVar13[1] = uVar20;
        *puVar13 = uVar19;
        puVar13 = puVar13 + 4;
      } while (uVar15 != 0);
      local_e0 = puVar9;
      if (uVar10 == uVar11) goto LAB_004f98b8;
    }
    do {
      puVar16 = puVar17 + 1;
      local_e0 = puVar9 + 1;
      *puVar9 = *puVar17;
      puVar9 = local_e0;
      puVar17 = puVar16;
    } while (puVar16 != puVar1);
  }
LAB_004f98b8:
  local_b0[0] = 0;
  local_78 = 0xff;
  if ((ulong)*(byte *)(param_4 + 0x38) != 0xff) {
                    /* try { // try from 004f98dc to 004f98eb has its CatchHandler @ 004f9b70 */
    (*(code *)(&PTR_FUN_00d1f9e8)[*(byte *)(param_4 + 0x38)])(auStack_b8,local_b0,param_4);
    local_78 = *(byte *)(param_4 + 0x38);
  }
  pvStack_158 = (void *)param_5[1];
  local_160 = (void *)*param_5;
  *param_5 = 0;
  param_5[1] = 0;
  local_150 = param_5[2];
  local_138 = param_5[5];
  pvStack_140 = (void *)param_5[4];
  local_148 = (void *)param_5[3];
  local_120 = param_5[8];
  local_f0 = param_5[0xe];
  pvStack_128 = (void *)param_5[7];
  local_130 = (void *)param_5[6];
  local_108 = param_5[0xb];
  param_5[2] = 0;
  param_5[3] = 0;
  pvStack_110 = (void *)param_5[10];
  local_118 = (void *)param_5[9];
  param_5[4] = 0;
  param_5[5] = 0;
  param_5[6] = 0;
  param_5[7] = 0;
  pvStack_f8 = (void *)param_5[0xd];
  local_100 = (void *)param_5[0xc];
  param_5[8] = 0;
  param_5[9] = 0;
  param_5[10] = 0;
  param_5[0xb] = 0;
  param_5[0xc] = 0;
  param_5[0xd] = 0;
  param_5[0xe] = 0;
  uVar18 = *param_6;
  uVar19 = param_6[1];
  pvStack_178 = (void *)param_7[1];
  local_180 = (void *)*param_7;
  local_170 = param_7[2];
  *param_7 = 0;
  param_7[1] = 0;
  param_7[2] = 0;
                    /* try { // try from 004f9980 to 004f99a7 has its CatchHandler @ 004f9b74 */
  FUN_0055ac0c(pvVar8,uVar2,&local_d0,&local_e8,local_b0,&local_160,uVar18,uVar19,&local_180,param_8
              );
  pvVar6 = local_180;
  pvVar7 = pvStack_178;
  if (local_180 != (void *)0x0) {
    while (pvVar5 = pvVar7, pvVar5 != pvVar6) {
      puVar16 = *(undefined1 **)((long)pvVar5 + -0x18);
      lVar12 = *(long *)((long)pvVar5 + -0x10) - (long)puVar16;
      if (0 < lVar12) {
        uVar10 = lVar12 + 1;
        do {
          uVar10 = uVar10 - 1;
          *puVar16 = 0;
          puVar16 = puVar16 + 1;
        } while (1 < uVar10);
        puVar16 = *(undefined1 **)((long)pvVar5 + -0x18);
      }
      pvVar7 = (void *)((long)pvVar5 + -0x20);
      if (puVar16 != (undefined1 *)0x0) {
        *(undefined1 **)((long)pvVar5 + -0x10) = puVar16;
        operator_delete(puVar16);
      }
    }
    pvStack_178 = pvVar6;
    operator_delete(local_180);
  }
  if (local_100 != (void *)0x0) {
    pvStack_f8 = local_100;
    operator_delete(local_100);
  }
  if (local_118 != (void *)0x0) {
    pvStack_110 = local_118;
    operator_delete(local_118);
  }
  if (local_130 != (void *)0x0) {
    pvStack_128 = local_130;
    operator_delete(local_130);
  }
  if (local_148 != (void *)0x0) {
    pvStack_140 = local_148;
    operator_delete(local_148);
  }
  if (local_160 != (void *)0x0) {
    pvStack_158 = local_160;
    operator_delete(local_160);
  }
  if ((ulong)local_78 != 0xff) {
                    /* try { // try from 004f9a80 to 004f9a8b has its CatchHandler @ 004f9b6c */
    (*(code *)(&PTR_FUN_00d1f9c8)[local_78])(auStack_b8,local_b0);
  }
  local_78 = 0xff;
  if (0 < (long)local_e0 - (long)local_e8) {
    uVar10 = ((long)local_e0 - (long)local_e8) + 1;
    puVar16 = local_e8;
    do {
      uVar10 = uVar10 - 1;
      *puVar16 = 0;
      puVar16 = puVar16 + 1;
    } while (1 < uVar10);
  }
  if (local_e8 != (undefined1 *)0x0) {
    local_e0 = local_e8;
    operator_delete(local_e8);
  }
  if (0 < (long)local_c8 - (long)local_d0) {
    uVar10 = ((long)local_c8 - (long)local_d0) + 1;
    puVar16 = local_d0;
    do {
      uVar10 = uVar10 - 1;
      *puVar16 = 0;
      puVar16 = puVar16 + 1;
    } while (1 < uVar10);
  }
  if (local_d0 != (undefined1 *)0x0) {
    local_c8 = local_d0;
    operator_delete(local_d0);
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return pvVar8;
  }
LAB_004f9bd4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004f9bd8  FUN_004f9bd8 =====

void FUN_004f9bd8(undefined8 *param_1)

{
  undefined1 *puVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  void *pvVar6;
  
  pvVar5 = (void *)*param_1;
  if (pvVar5 == (void *)0x0) {
    return;
  }
  pvVar6 = pvVar5;
  pvVar2 = (void *)param_1[1];
  if ((void *)param_1[1] != pvVar5) {
    do {
      puVar1 = *(undefined1 **)((long)pvVar2 + -0x18);
      lVar3 = *(long *)((long)pvVar2 + -0x10) - (long)puVar1;
      if (0 < lVar3) {
        uVar4 = lVar3 + 1;
        do {
          uVar4 = uVar4 - 1;
          *puVar1 = 0;
          puVar1 = puVar1 + 1;
        } while (1 < uVar4);
        puVar1 = *(undefined1 **)((long)pvVar2 + -0x18);
      }
      pvVar6 = (void *)((long)pvVar2 + -0x20);
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined1 **)((long)pvVar2 + -0x10) = puVar1;
        operator_delete(puVar1);
      }
      pvVar2 = pvVar6;
    } while (pvVar6 != pvVar5);
    pvVar6 = (void *)*param_1;
  }
  param_1[1] = pvVar5;
  operator_delete(pvVar6);
  return;
}


// ===== 004f9c78  FUN_004f9c78 =====

void FUN_004f9c78(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[0xc];
  if (pvVar1 != (void *)0x0) {
    param_1[0xd] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[9];
  if (pvVar1 != (void *)0x0) {
    param_1[10] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[6];
  if (pvVar1 != (void *)0x0) {
    param_1[7] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    param_1[4] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    param_1[1] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 004f9cec  FUN_004f9cec =====

void FUN_004f9cec(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  void *pvVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 *local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a0;
  undefined1 *local_198;
  undefined1 *local_190;
  ushort local_188 [4];
  undefined1 *local_180;
  undefined1 *puStack_178;
  undefined8 local_170;
  undefined1 *local_168;
  undefined1 *puStack_160;
  undefined8 local_158;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x60) == 0) {
    uVar12 = FUN_0054f64c(0x10);
                    /* try { // try from 004fa084 to 004fa08f has its CatchHandler @ 004fa0d8 */
    FUN_0054723c(uVar12,"Missing leaf node");
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 004fa0a0 to 004fa0b7 has its CatchHandler @ 004fa0d4 */
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar12,&PTR_PTR_thunk_FUN_00552768_00d23c78,PTR_FUN_00d51d10);
    }
    goto LAB_004fa0d0;
  }
  local_188[0] = FUN_004f0b08(*(undefined2 *)(param_1 + 8));
                    /* try { // try from 004f9d30 to 004f9d3b has its CatchHandler @ 004fa13c */
  FUN_00563e48(&local_180,local_188[0]);
                    /* try { // try from 004f9d3c to 004f9d43 has its CatchHandler @ 004fa128 */
  puVar4 = (undefined8 *)operator_new(0x30);
  puVar14 = local_168;
  puVar3 = puStack_178;
  puVar5 = local_180;
  local_180 = (undefined1 *)0x0;
  puStack_178 = (undefined1 *)0x0;
  puVar11 = *(undefined8 **)(param_1 + 0x80);
  *(undefined8 **)(param_1 + 0x80) = puVar4;
  puVar4[1] = puVar3;
  *puVar4 = puVar5;
  puVar4[2] = local_170;
  local_170 = 0;
  local_168 = (undefined1 *)0x0;
  puVar4[4] = puStack_160;
  puVar4[3] = puVar14;
  puVar4[5] = local_158;
  puStack_160 = (undefined1 *)0x0;
  local_158 = 0;
  if (puVar11 != (undefined8 *)0x0) {
    puVar5 = (undefined1 *)puVar11[3];
    if (0 < puVar11[4] - (long)puVar5) {
      uVar7 = (puVar11[4] - (long)puVar5) + 1;
      do {
        uVar7 = uVar7 - 1;
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      } while (1 < uVar7);
      puVar5 = (undefined1 *)puVar11[3];
    }
    if (puVar5 != (undefined1 *)0x0) {
      puVar11[4] = puVar5;
      operator_delete(puVar5);
    }
    puVar5 = (undefined1 *)*puVar11;
    if (0 < puVar11[1] - (long)puVar5) {
      uVar7 = (puVar11[1] - (long)puVar5) + 1;
      do {
        uVar7 = uVar7 - 1;
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      } while (1 < uVar7);
      puVar5 = (undefined1 *)*puVar11;
    }
    if (puVar5 != (undefined1 *)0x0) {
      puVar11[1] = puVar5;
      operator_delete(puVar5);
    }
    operator_delete(puVar11);
  }
  if (0 < (long)puStack_160 - (long)local_168) {
    uVar7 = ((long)puStack_160 - (long)local_168) + 1;
    puVar5 = local_168;
    do {
      uVar7 = uVar7 - 1;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    } while (1 < uVar7);
  }
  if (local_168 != (undefined1 *)0x0) {
    puStack_160 = local_168;
    operator_delete(local_168);
  }
  if (0 < (long)puStack_178 - (long)local_180) {
    uVar7 = ((long)puStack_178 - (long)local_180) + 1;
    puVar5 = local_180;
    do {
      uVar7 = uVar7 - 1;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    } while (1 < uVar7);
  }
  if (local_180 != (undefined1 *)0x0) {
    puStack_178 = local_180;
    operator_delete(local_180);
  }
  lVar8 = *(long *)(param_1 + 0x80);
  uVar12 = *(undefined8 *)(param_1 + 0x60);
  FUN_004f0c34(&local_180,*(undefined2 *)(param_1 + 8));
                    /* try { // try from 004f9e7c to 004f9e8f has its CatchHandler @ 004fa114 */
  uVar12 = FUN_004fa260(local_188,lVar8 + 0x18,uVar12,&local_180,*(undefined8 *)(param_1 + 0x68));
  pvVar13 = *(void **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = uVar12;
  if (pvVar13 != (void *)0x0) {
    FUN_004fc83c(pvVar13);
    operator_delete(pvVar13);
  }
  puVar5 = local_180;
  puVar3 = puStack_178;
  if (local_180 != (undefined1 *)0x0) {
    while (puVar14 = puVar3, puVar14 != puVar5) {
      puVar6 = *(undefined1 **)(puVar14 + -0x18);
      if (0 < *(long *)(puVar14 + -0x10) - (long)puVar6) {
        uVar7 = (*(long *)(puVar14 + -0x10) - (long)puVar6) + 1;
        do {
          uVar7 = uVar7 - 1;
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        } while (1 < uVar7);
        puVar6 = *(undefined1 **)(puVar14 + -0x18);
      }
      puVar3 = puVar14 + -0x20;
      if (puVar6 != (undefined1 *)0x0) {
        *(undefined1 **)(puVar14 + -0x10) = puVar6;
        operator_delete(puVar6);
      }
    }
    puStack_178 = puVar5;
    operator_delete(local_180);
  }
                    /* try { // try from 004f9f1c to 004f9f37 has its CatchHandler @ 004fa110 */
  FUN_004f0510(&local_180,1,
               "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x293);
                    /* try { // try from 004f9f3c to 004f9f4f has its CatchHandler @ 004fa104 */
  FUN_00428964(&local_168,"Generated key package: ",0x17);
                    /* try { // try from 004f9f54 to 004f9f5b has its CatchHandler @ 004fa100 */
  FUN_004fa4d0(&local_1b8,*(undefined8 *)(param_1 + 0x88));
  puVar3 = local_1b0;
  puVar5 = local_1b8;
  local_1a0 = (undefined1 *)0x0;
  local_198 = (undefined1 *)0x0;
  local_190 = (undefined1 *)0x0;
  uVar7 = (long)local_1b0 - (long)local_1b8;
  if (uVar7 != 0) {
    if ((long)uVar7 < 0) {
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 004fa0c8 to 004fa0cf has its CatchHandler @ 004fa148 */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_1a0);
      }
      goto LAB_004fa0d0;
    }
                    /* try { // try from 004f9f74 to 004f9f7b has its CatchHandler @ 004fa148 */
    local_1a0 = (undefined1 *)operator_new(uVar7);
    local_190 = local_1a0 + uVar7;
    puVar6 = local_1a0;
    puVar14 = puVar5;
    if ((0x1f < uVar7) && (0x1f < (ulong)((long)local_1a0 - (long)puVar5))) {
      uVar9 = uVar7 & 0xffffffffffffffe0;
      puVar4 = (undefined8 *)(local_1a0 + 0x10);
      puVar14 = puVar5 + uVar9;
      puVar6 = local_1a0 + uVar9;
      puVar11 = (undefined8 *)(puVar5 + 0x10);
      uVar10 = uVar9;
      do {
        puVar2 = puVar11 + -1;
        uVar12 = puVar11[-2];
        uVar16 = puVar11[1];
        uVar15 = *puVar11;
        puVar11 = puVar11 + 4;
        uVar10 = uVar10 - 0x20;
        puVar4[-1] = *puVar2;
        puVar4[-2] = uVar12;
        puVar4[1] = uVar16;
        *puVar4 = uVar15;
        puVar4 = puVar4 + 4;
      } while (uVar10 != 0);
      local_198 = puVar6;
      if (uVar7 == uVar9) goto LAB_004f9ff4;
    }
    do {
      puVar5 = puVar14 + 1;
      local_198 = puVar6 + 1;
      *puVar6 = *puVar14;
      puVar6 = local_198;
      puVar14 = puVar5;
    } while (puVar5 != puVar3);
  }
LAB_004f9ff4:
                    /* try { // try from 004f9ff4 to 004f9fff has its CatchHandler @ 004fa0ec */
  FUN_005a2b88(&local_168,&local_1a0);
  if (0 < (long)local_198 - (long)local_1a0) {
    uVar7 = ((long)local_198 - (long)local_1a0) + 1;
    puVar5 = local_1a0;
    do {
      uVar7 = uVar7 - 1;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    } while (1 < uVar7);
  }
  if (local_1a0 != (undefined1 *)0x0) {
    local_198 = local_1a0;
    operator_delete(local_1a0);
  }
  if (local_1b8 != (undefined1 *)0x0) {
    local_1b0 = local_1b8;
    operator_delete(local_1b8);
  }
  FUN_004f0604(&local_180);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_004fa0d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004fa260  FUN_004fa260 =====

void * FUN_004fa260(undefined2 *param_1,long *param_2,undefined8 param_3,undefined8 *param_4,
                   undefined8 param_5)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined1 *puVar16;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  void *local_1d0;
  void *pvStack_1c8;
  undefined8 local_1c0;
  undefined1 *local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  undefined1 auStack_1a0 [312];
  long local_68;
  undefined1 *puVar17;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pvVar8 = operator_new(0x188);
  puVar16 = (undefined1 *)*param_2;
  puVar1 = (undefined1 *)param_2[1];
  local_1b0 = (undefined1 *)0x0;
  local_1a8 = (undefined1 *)0x0;
  uVar2 = *param_1;
  local_1b8 = (undefined1 *)0x0;
  uVar10 = (long)puVar1 - (long)puVar16;
  if (uVar10 != 0) {
    if ((long)uVar10 < 0) {
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 004fa478 to 004fa47f has its CatchHandler @ 004fa4a8 */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_1b8);
      }
      goto LAB_004fa4cc;
    }
                    /* try { // try from 004fa2c8 to 004fa2cf has its CatchHandler @ 004fa4a8 */
    local_1b8 = (undefined1 *)operator_new(uVar10);
    local_1a8 = local_1b8 + uVar10;
    puVar9 = local_1b8;
    puVar17 = puVar16;
    if ((0x1f < uVar10) && (0x1f < (ulong)((long)local_1b8 - (long)puVar16))) {
      uVar11 = uVar10 & 0xffffffffffffffe0;
      puVar13 = (undefined8 *)(local_1b8 + 0x10);
      puVar17 = puVar16 + uVar11;
      puVar9 = local_1b8 + uVar11;
      puVar14 = (undefined8 *)(puVar16 + 0x10);
      uVar15 = uVar11;
      do {
        puVar4 = puVar14 + -1;
        uVar18 = puVar14[-2];
        uVar20 = puVar14[1];
        uVar19 = *puVar14;
        puVar14 = puVar14 + 4;
        uVar15 = uVar15 - 0x20;
        puVar13[-1] = *puVar4;
        puVar13[-2] = uVar18;
        puVar13[1] = uVar20;
        *puVar13 = uVar19;
        puVar13 = puVar13 + 4;
      } while (uVar15 != 0);
      local_1b0 = puVar9;
      if (uVar10 == uVar11) goto LAB_004fa348;
    }
    do {
      puVar16 = puVar17 + 1;
      local_1b0 = puVar9 + 1;
      *puVar9 = *puVar17;
      puVar9 = local_1b0;
      puVar17 = puVar16;
    } while (puVar16 != puVar1);
  }
LAB_004fa348:
                    /* try { // try from 004fa348 to 004fa353 has its CatchHandler @ 004fa498 */
  FUN_004fe4d4(auStack_1a0,param_3);
  pvStack_1c8 = (void *)param_4[1];
  local_1d0 = (void *)*param_4;
  *param_4 = 0;
  local_1c0 = param_4[2];
  param_4[1] = 0;
  param_4[2] = 0;
                    /* try { // try from 004fa36c to 004fa387 has its CatchHandler @ 004fa480 */
  FUN_0055befc(pvVar8,uVar2,&local_1b8,auStack_1a0,&local_1d0,param_5);
  pvVar6 = local_1d0;
  pvVar7 = pvStack_1c8;
  if (local_1d0 != (void *)0x0) {
    while (pvVar5 = pvVar7, pvVar5 != pvVar6) {
      puVar16 = *(undefined1 **)((long)pvVar5 + -0x18);
      lVar12 = *(long *)((long)pvVar5 + -0x10) - (long)puVar16;
      if (0 < lVar12) {
        uVar10 = lVar12 + 1;
        do {
          uVar10 = uVar10 - 1;
          *puVar16 = 0;
          puVar16 = puVar16 + 1;
        } while (1 < uVar10);
        puVar16 = *(undefined1 **)((long)pvVar5 + -0x18);
      }
      pvVar7 = (void *)((long)pvVar5 + -0x20);
      if (puVar16 != (undefined1 *)0x0) {
        *(undefined1 **)((long)pvVar5 + -0x10) = puVar16;
        operator_delete(puVar16);
      }
    }
    pvStack_1c8 = pvVar6;
    operator_delete(local_1d0);
  }
  FUN_004fc1d0(auStack_1a0);
  if (0 < (long)local_1b0 - (long)local_1b8) {
    uVar10 = ((long)local_1b0 - (long)local_1b8) + 1;
    puVar16 = local_1b8;
    do {
      uVar10 = uVar10 - 1;
      *puVar16 = 0;
      puVar16 = puVar16 + 1;
    } while (1 < uVar10);
  }
  if (local_1b8 != (undefined1 *)0x0) {
    local_1b0 = local_1b8;
    operator_delete(local_1b8);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return pvVar8;
  }
LAB_004fa4cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004fa4d0  FUN_004fa4d0 =====

void FUN_004fa4d0(undefined8 *param_1,undefined2 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined2 *puStack_78;
  undefined2 *local_70;
  undefined2 *puStack_68;
  undefined2 *local_60;
  undefined2 *puStack_58;
  undefined2 *local_50;
  long local_48;
  undefined1 *puVar8;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puStack_58 = param_2 + 0xac;
  local_50 = param_2 + 0xb8;
  puStack_68 = param_2 + 4;
  local_80 = 0;
  local_60 = param_2 + 0x10;
  local_90 = (undefined1 *)0x0;
  local_88 = (undefined1 *)0x0;
  puStack_78 = param_2;
  local_70 = param_2 + 1;
                    /* try { // try from 004fa520 to 004fa62f has its CatchHandler @ 004fa630 */
  FUN_005a2eb4(&local_90,*param_2);
  FUN_005a2eb4(&local_90,param_2[1]);
  FUN_0050a858(&local_90,&puStack_78);
  puVar5 = local_88;
  puVar4 = local_90;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = (long)local_88 - (long)local_90;
  if (uVar1 != 0) {
    if ((long)uVar1 < 0) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(param_1);
      }
      goto LAB_004fa660;
    }
    puVar6 = (undefined1 *)operator_new(uVar1);
    *param_1 = puVar6;
    param_1[1] = puVar6;
    param_1[2] = puVar6 + uVar1;
    puVar8 = puVar4;
    if ((uVar1 < 0x20) || ((ulong)((long)puVar6 - (long)puVar4) < 0x20)) {
LAB_004fa5cc:
      do {
        puVar7 = puVar8 + 1;
        puVar9 = puVar6 + 1;
        *puVar6 = *puVar8;
        puVar8 = puVar7;
        puVar6 = puVar9;
      } while (puVar7 != puVar5);
    }
    else {
      uVar10 = uVar1 & 0xffffffffffffffe0;
      puVar11 = (undefined8 *)(puVar6 + 0x10);
      puVar9 = puVar6 + uVar10;
      puVar12 = (undefined8 *)(puVar4 + 0x10);
      uVar13 = uVar10;
      do {
        puVar3 = puVar12 + -1;
        uVar14 = puVar12[-2];
        uVar16 = puVar12[1];
        uVar15 = *puVar12;
        puVar12 = puVar12 + 4;
        uVar13 = uVar13 - 0x20;
        puVar11[-1] = *puVar3;
        puVar11[-2] = uVar14;
        puVar11[1] = uVar16;
        *puVar11 = uVar15;
        puVar11 = puVar11 + 4;
      } while (uVar13 != 0);
      puVar8 = puVar4 + uVar10;
      puVar6 = puVar9;
      if (uVar1 != uVar10) goto LAB_004fa5cc;
    }
    param_1[1] = puVar9;
  }
  if (puVar4 != (undefined1 *)0x0) {
    local_88 = puVar4;
    operator_delete(puVar4);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_004fa660:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004fa664  FUN_004fa664 =====

void * FUN_004fa664(long *param_1,undefined2 *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 *param_6)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined1 *puVar16;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  void *local_100;
  void *pvStack_f8;
  undefined8 local_f0;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  long local_68;
  undefined1 *puVar17;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pvVar8 = operator_new(0x5c8);
  puVar16 = (undefined1 *)*param_1;
  puVar1 = (undefined1 *)param_1[1];
  local_78 = (undefined1 *)0x0;
  local_70 = (undefined1 *)0x0;
  local_80 = (undefined1 *)0x0;
  uVar10 = (long)puVar1 - (long)puVar16;
  if (uVar10 != 0) {
    if ((long)uVar10 < 0) {
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 004fa958 to 004fa95f has its CatchHandler @ 004fa998 */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_80);
      }
      goto LAB_004fa9bc;
    }
                    /* try { // try from 004fa6cc to 004fa6d3 has its CatchHandler @ 004fa998 */
    local_80 = (undefined1 *)operator_new(uVar10);
    local_70 = local_80 + uVar10;
    puVar9 = local_80;
    puVar17 = puVar16;
    if ((0x1f < uVar10) && (0x1f < (ulong)((long)local_80 - (long)puVar16))) {
      uVar11 = uVar10 & 0xffffffffffffffe0;
      puVar13 = (undefined8 *)(local_80 + 0x10);
      puVar17 = puVar16 + uVar11;
      puVar9 = local_80 + uVar11;
      puVar14 = (undefined8 *)(puVar16 + 0x10);
      uVar15 = uVar11;
      do {
        puVar4 = puVar14 + -1;
        uVar18 = puVar14[-2];
        uVar20 = puVar14[1];
        uVar19 = *puVar14;
        puVar14 = puVar14 + 4;
        uVar15 = uVar15 - 0x20;
        puVar13[-1] = *puVar4;
        puVar13[-2] = uVar18;
        puVar13[1] = uVar20;
        *puVar13 = uVar19;
        puVar13 = puVar13 + 4;
      } while (uVar15 != 0);
      local_78 = puVar9;
      if (uVar10 == uVar11) goto LAB_004fa74c;
    }
    do {
      puVar16 = puVar17 + 1;
      local_78 = puVar9 + 1;
      *puVar9 = *puVar17;
      puVar9 = local_78;
      puVar17 = puVar16;
    } while (puVar16 != puVar1);
  }
LAB_004fa74c:
  uVar2 = *param_2;
                    /* try { // try from 004fa750 to 004fa75b has its CatchHandler @ 004fa988 */
  FUN_004ffecc(&local_b0,param_3);
                    /* try { // try from 004fa75c to 004fa767 has its CatchHandler @ 004fa978 */
  FUN_00501e78(&local_e0,param_4);
  pvStack_f8 = (void *)param_6[1];
  local_100 = (void *)*param_6;
  *param_6 = 0;
  local_f0 = param_6[2];
  param_6[1] = 0;
  param_6[2] = 0;
                    /* try { // try from 004fa780 to 004fa79f has its CatchHandler @ 004fa960 */
  FUN_0057d474(pvVar8,&local_80,uVar2,&local_b0,&local_e0,param_5,&local_100);
  pvVar6 = local_100;
  pvVar7 = pvStack_f8;
  if (local_100 != (void *)0x0) {
    while (pvVar5 = pvVar7, pvVar5 != pvVar6) {
      puVar16 = *(undefined1 **)((long)pvVar5 + -0x18);
      lVar12 = *(long *)((long)pvVar5 + -0x10) - (long)puVar16;
      if (0 < lVar12) {
        uVar10 = lVar12 + 1;
        do {
          uVar10 = uVar10 - 1;
          *puVar16 = 0;
          puVar16 = puVar16 + 1;
        } while (1 < uVar10);
        puVar16 = *(undefined1 **)((long)pvVar5 + -0x18);
      }
      pvVar7 = (void *)((long)pvVar5 + -0x20);
      if (puVar16 != (undefined1 *)0x0) {
        *(undefined1 **)((long)pvVar5 + -0x10) = puVar16;
        operator_delete(puVar16);
      }
    }
    pvStack_f8 = pvVar6;
    operator_delete(local_100);
  }
  if (0 < (long)local_c0 - (long)local_c8) {
    uVar10 = ((long)local_c0 - (long)local_c8) + 1;
    puVar16 = local_c8;
    do {
      uVar10 = uVar10 - 1;
      *puVar16 = 0;
      puVar16 = puVar16 + 1;
    } while (1 < uVar10);
  }
  if (local_c8 != (undefined1 *)0x0) {
    local_c0 = local_c8;
    operator_delete(local_c8);
  }
  if (0 < (long)local_d8 - (long)local_e0) {
    uVar10 = ((long)local_d8 - (long)local_e0) + 1;
    puVar16 = local_e0;
    do {
      uVar10 = uVar10 - 1;
      *puVar16 = 0;
      puVar16 = puVar16 + 1;
    } while (1 < uVar10);
  }
  if (local_e0 != (undefined1 *)0x0) {
    local_d8 = local_e0;
    operator_delete(local_e0);
  }
  if (0 < (long)local_90 - (long)local_98) {
    uVar10 = ((long)local_90 - (long)local_98) + 1;
    puVar16 = local_98;
    do {
      uVar10 = uVar10 - 1;
      *puVar16 = 0;
      puVar16 = puVar16 + 1;
    } while (1 < uVar10);
  }
  if (local_98 != (undefined1 *)0x0) {
    local_90 = local_98;
    operator_delete(local_98);
  }
  if (0 < (long)local_a8 - (long)local_b0) {
    uVar10 = ((long)local_a8 - (long)local_b0) + 1;
    puVar16 = local_b0;
    do {
      uVar10 = uVar10 - 1;
      *puVar16 = 0;
      puVar16 = puVar16 + 1;
    } while (1 < uVar10);
  }
  if (local_b0 != (undefined1 *)0x0) {
    local_a8 = local_b0;
    operator_delete(local_b0);
  }
  if (0 < (long)local_78 - (long)local_80) {
    uVar10 = ((long)local_78 - (long)local_80) + 1;
    puVar16 = local_80;
    do {
      uVar10 = uVar10 - 1;
      *puVar16 = 0;
      puVar16 = puVar16 + 1;
    } while (1 < uVar10);
  }
  if (local_80 != (undefined1 *)0x0) {
    local_78 = local_80;
    operator_delete(local_80);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return pvVar8;
  }
LAB_004fa9bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004fa9c0  FUN_004fa9c0 =====

void FUN_004fa9c0(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [264];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_004f9cec();
  if (*(long *)(param_2 + 0x88) == 0) {
                    /* try { // try from 004faa04 to 004faa1f has its CatchHandler @ 004faa88 */
    FUN_004f0510(auStack_168,3,
                 "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x2c7);
                    /* try { // try from 004faa24 to 004faa33 has its CatchHandler @ 004faa70 */
    FUN_00428964(auStack_150,"Cannot marshal an uninitialized key package",0x2b);
    FUN_004f0604(auStack_168);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
                    /* try { // try from 004fa9f8 to 004fa9ff has its CatchHandler @ 004faa8c */
    FUN_004fa4d0(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004fab98  FUN_004fab98 =====

void * FUN_004fab98(long param_1,char *param_2)

{
  char *__nptr;
  undefined2 uVar1;
  long lVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined1 *puVar5;
  ulonglong *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 *local_190;
  undefined1 *puStack_188;
  undefined8 local_180;
  ulonglong *local_178;
  ulonglong *local_170;
  ulonglong *local_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  undefined8 local_150;
  undefined1 auStack_148 [272];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(long *)(param_1 + 0xb0) == 0) {
    FUN_004f0510(&local_160,1,
                 "../../discord_common/native/third_party/libdave/cpp/src/mls/session.cpp",0x2d6);
    FUN_00428964(auStack_148,"Cannot get key ratchet without an established MLS group",0x37);
    FUN_004f0604(&local_160);
    pvVar4 = (void *)0x0;
  }
  else {
    __nptr = *(char **)param_2;
    if (-1 < param_2[0x17]) {
      __nptr = param_2;
    }
    uVar3 = strtoull(__nptr,(char **)0x0,10);
    local_178 = (ulonglong *)0x0;
    local_170 = (ulonglong *)0x0;
    local_168 = (ulonglong *)0x0;
                    /* try { // try from 004fabec to 004fad27 has its CatchHandler @ 004fad60 */
    local_178 = (ulonglong *)operator_new(8);
    uVar8 = *(undefined8 *)(param_1 + 0xb0);
    local_170 = local_178 + 1;
    *local_178 = uVar3;
    local_168 = local_170;
    FUN_00589524(&local_190,uVar8,&DAT_00d610f0,&local_178,0x10);
    uVar1 = **(undefined2 **)(param_1 + 0xb0);
    pvVar4 = operator_new(0x78);
    local_150 = local_180;
    puStack_158 = puStack_188;
    puStack_188 = (undefined1 *)0x0;
    local_180 = 0;
    local_160 = local_190;
    local_190 = (undefined1 *)0x0;
    FUN_0050d824(pvVar4,uVar1,&local_160);
    if (0 < (long)puStack_158 - (long)local_160) {
      uVar7 = ((long)puStack_158 - (long)local_160) + 1;
      puVar5 = local_160;
      do {
        uVar7 = uVar7 - 1;
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      } while (1 < uVar7);
    }
    if (local_160 != (undefined1 *)0x0) {
      puStack_158 = local_160;
      operator_delete(local_160);
    }
    if (0 < (long)puStack_188 - (long)local_190) {
      uVar7 = ((long)puStack_188 - (long)local_190) + 1;
      puVar5 = local_190;
      do {
        uVar7 = uVar7 - 1;
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      } while (1 < uVar7);
    }
    if (local_190 != (undefined1 *)0x0) {
      puStack_188 = local_190;
      operator_delete(local_190);
    }
    if (0 < (long)local_170 - (long)local_178) {
      uVar7 = ((long)local_170 - (long)local_178) + 1;
      puVar6 = local_178;
      do {
        uVar7 = uVar7 - 1;
        *(undefined1 *)puVar6 = 0;
        puVar6 = (ulonglong *)((long)puVar6 + 1);
      } while (1 < uVar7);
    }
    if (local_178 != (ulonglong *)0x0) {
      local_170 = local_178;
      operator_delete(local_178);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pvVar4;
}


// ===== 004fad64  FUN_004fad64 =====

void FUN_004fad64(long param_1,undefined4 param_2,char *param_3,undefined8 *param_4)

{
  char *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  void *pvVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined1 *puVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 *local_220;
  undefined1 *local_218;
  undefined1 *local_210;
  undefined1 *local_208;
  undefined1 *local_200;
  undefined1 *local_1f8;
  pthread_t pStack_1f0;
  long *local_1e8;
  long *local_1e0;
  long *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  undefined8 local_1c0;
  undefined1 *local_1b8;
  undefined1 *local_1b0;
  undefined8 local_1a8;
  undefined8 *local_1a0;
  void *local_198;
  undefined1 *local_190;
  undefined1 *puStack_188;
  code *local_180;
  undefined8 *local_178;
  undefined8 *local_170;
  undefined8 *puStack_168;
  undefined8 local_160 [31];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if ((*(long *)(param_1 + 0xb0) == 0) || (*(long *)(param_1 + 0x68) == 0)) {
    plVar12 = (long *)FUN_0054f64c(0x10);
                    /* try { // try from 004fb4fc to 004fb507 has its CatchHandler @ 004fb670 */
    FUN_00547104(plVar12,"No established MLS group");
    *plVar12 = (long)(PTR_DAT_00d51d30 + 0x10);
    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 004fb528 to 004fb53f has its CatchHandler @ 004fb664 */
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(plVar12,&PTR_PTR_thunk_FUN_00552768_00d23bb8,PTR_FUN_00d51d38);
    }
    goto LAB_004fb5c0;
  }
  pcVar1 = *(char **)param_3;
  if (-1 < param_3[0x17]) {
    pcVar1 = param_3;
  }
  uVar8 = strtoull(pcVar1,(char **)0x0,10);
  pcVar1 = *(char **)(param_1 + 0x40);
  if (-1 < *(char *)(param_1 + 0x57)) {
    pcVar1 = (char *)(param_1 + 0x40);
  }
  uVar9 = strtoull(pcVar1,(char **)0x0,10);
  plVar13 = (long *)(param_1 + 0xc0);
  plVar15 = (long *)*plVar13;
  plVar12 = plVar13;
  if (plVar15 != (long *)0x0) {
    do {
      plVar6 = plVar15 + 1;
      if (uVar8 <= (ulong)plVar15[4]) {
        plVar12 = plVar15;
        plVar6 = plVar15;
      }
      plVar15 = (long *)*plVar6;
    } while (plVar15 != (long *)0x0);
    if ((plVar12 != plVar13) && ((ulong)plVar12[4] <= uVar8)) {
      local_1b8 = (undefined1 *)0x0;
      local_1b0 = (undefined1 *)0x0;
      local_1a8 = 0;
      local_1d0 = (undefined1 *)0x0;
      local_1c8 = (undefined1 *)0x0;
      local_1c0 = 0;
                    /* try { // try from 004fae44 to 004fae8f has its CatchHandler @ 004fb750 */
      FUN_005a2eb4(&local_1b8,param_2);
      FUN_005a2d20(&local_1b8,plVar12 + 5);
      FUN_005a2fc8(&local_1b8,uVar8);
      FUN_005a2eb4(&local_1d0,param_2);
      FUN_005a2d20(&local_1d0,*(long *)(param_1 + 0x68) + 0x18);
      FUN_005a2fc8(&local_1d0,uVar9);
      puVar2 = local_1b0;
      puVar20 = local_1b8;
      local_190 = (undefined1 *)0x0;
      puStack_188 = (undefined1 *)0x0;
      local_180 = (code *)0x0;
      uVar18 = (long)local_1b0 - (long)local_1b8;
      if (uVar18 != 0) {
        if ((long)uVar18 < 0) {
          if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 004fb56c to 004fb573 has its CatchHandler @ 004fb6b4 */
                    /* WARNING: Subroutine does not return */
            FUN_004f04ec(&local_190);
          }
          goto LAB_004fb5c0;
        }
                    /* try { // try from 004faea8 to 004faeaf has its CatchHandler @ 004fb6b4 */
        local_190 = (undefined1 *)operator_new(uVar18);
        local_180 = (code *)(local_190 + uVar18);
        puVar14 = local_190;
        puVar21 = puVar20;
        if ((0x1f < uVar18) && (0x1f < (ulong)((long)local_190 - (long)puVar20))) {
          uVar16 = uVar18 & 0xffffffffffffffe0;
          puVar11 = (undefined8 *)(local_190 + 0x10);
          puVar21 = puVar20 + uVar16;
          puVar14 = local_190 + uVar16;
          puVar17 = (undefined8 *)(puVar20 + 0x10);
          uVar19 = uVar16;
          do {
            puVar5 = puVar17 + -1;
            uVar22 = puVar17[-2];
            uVar24 = puVar17[1];
            uVar23 = *puVar17;
            puVar17 = puVar17 + 4;
            uVar19 = uVar19 - 0x20;
            puVar11[-1] = *puVar5;
            puVar11[-2] = uVar22;
            puVar11[1] = uVar24;
            *puVar11 = uVar23;
            puVar11 = puVar11 + 4;
          } while (uVar19 != 0);
          puStack_188 = puVar14;
          if (uVar18 == uVar16) goto LAB_004faf28;
        }
        do {
          puVar20 = puVar21 + 1;
          puStack_188 = puVar14 + 1;
          *puVar14 = *puVar21;
          puVar14 = puStack_188;
          puVar21 = puVar20;
        } while (puVar20 != puVar2);
      }
LAB_004faf28:
      puVar2 = local_1c8;
      puVar20 = local_1d0;
      local_178 = (undefined8 *)0x0;
      local_170 = (undefined8 *)0x0;
      puStack_168 = (undefined8 *)0x0;
      uVar18 = (long)local_1c8 - (long)local_1d0;
      if (uVar18 != 0) {
        if ((long)uVar18 < 0) {
          if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 004fb584 to 004fb58f has its CatchHandler @ 004fb694 */
                    /* WARNING: Subroutine does not return */
            FUN_004f04ec(&local_178);
          }
          goto LAB_004fb5c0;
        }
                    /* try { // try from 004faf40 to 004faf47 has its CatchHandler @ 004fb694 */
        local_178 = (undefined8 *)operator_new(uVar18);
        puStack_168 = (undefined8 *)((long)local_178 + uVar18);
        puVar11 = local_178;
        if ((0x1f < uVar18) && (0x1f < (ulong)((long)local_178 - (long)puVar20))) {
          uVar16 = uVar18 & 0xffffffffffffffe0;
          puVar11 = local_178 + 2;
          local_170 = (undefined8 *)((long)local_178 + uVar16);
          puVar17 = (undefined8 *)(puVar20 + 0x10);
          uVar19 = uVar16;
          do {
            puVar5 = puVar17 + -1;
            uVar22 = puVar17[-2];
            uVar24 = puVar17[1];
            uVar23 = *puVar17;
            puVar17 = puVar17 + 4;
            uVar19 = uVar19 - 0x20;
            puVar11[-1] = *puVar5;
            puVar11[-2] = uVar22;
            puVar11[1] = uVar24;
            *puVar11 = uVar23;
            puVar11 = puVar11 + 4;
          } while (uVar19 != 0);
          puVar11 = local_170;
          puVar20 = puVar20 + uVar16;
          if (uVar18 == uVar16) goto LAB_004fafd0;
        }
        do {
          puVar21 = puVar20 + 1;
          local_170 = (undefined8 *)((long)puVar11 + 1);
          *(undefined1 *)puVar11 = *puVar20;
          puVar11 = local_170;
          puVar20 = puVar21;
        } while (puVar21 != puVar2);
      }
LAB_004fafd0:
      local_1e8 = (long *)0x0;
      local_1e0 = (long *)0x0;
      local_1d8 = (long *)0x0;
                    /* try { // try from 004fafd8 to 004fafdf has its CatchHandler @ 004fb638 */
      local_1e8 = (long *)operator_new(0x30);
      local_1d8 = local_1e8 + 6;
                    /* try { // try from 004fb000 to 004fb00b has its CatchHandler @ 004fb624 */
      local_1e0 = local_1e8;
      local_1e0 = (long *)FUN_005046b8(&local_1d8,&local_190,local_160,local_1e8);
      if (local_178 != (undefined8 *)0x0) {
        local_170 = local_178;
        operator_delete(local_178);
      }
      if (local_190 != (undefined1 *)0x0) {
        puStack_188 = local_190;
        operator_delete(local_190);
      }
      lVar3 = 0;
      if (local_1e0 != local_1e8) {
        lVar3 = LZCOUNT(((long)local_1e0 - (long)local_1e8 >> 3) * -0x5555555555555555) * -2 + 0x7e;
      }
                    /* try { // try from 004fb060 to 004fb067 has its CatchHandler @ 004fb618 */
      FUN_005048f8(local_1e8,local_1e0,&local_208,lVar3);
      plVar12 = local_1e8;
      local_180 = (code *)param_4[2];
      local_178 = (undefined8 *)param_4[3];
      puStack_188 = (undefined1 *)param_4[1];
      local_190 = (undefined1 *)*param_4;
      if (local_178[1] != 0) {
        param_4[2] = FUN_0049ac00;
        param_4[3] = &DAT_001f1910;
      }
      lVar3 = (long)local_1e0 - (long)local_1e8;
      if (lVar3 == 0) {
        if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 004fb420 to 004fb447 has its CatchHandler @ 004fb828 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x587,
                     "__n < size()","vector[] index out of bounds");
        }
        goto LAB_004fb5c0;
      }
      local_200 = (undefined1 *)0x0;
      local_1f8 = (undefined1 *)0x0;
      local_208 = (undefined1 *)0x0;
      uVar18 = local_1e8[1] - *local_1e8;
      if (uVar18 != 0) {
        if ((long)uVar18 < 0) {
          if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 004fb5a0 to 004fb5a7 has its CatchHandler @ 004fb688 */
                    /* WARNING: Subroutine does not return */
            FUN_004f04ec(&local_208);
          }
          goto LAB_004fb5c0;
        }
                    /* try { // try from 004fb0b8 to 004fb0bf has its CatchHandler @ 004fb688 */
        local_208 = (undefined1 *)operator_new(uVar18);
        local_1f8 = local_208 + uVar18;
        puVar20 = (undefined1 *)*plVar12;
        puVar2 = (undefined1 *)plVar12[1];
        local_200 = local_208;
        if (puVar20 != puVar2) {
          uVar18 = (long)puVar2 - (long)puVar20;
          puVar14 = local_208;
          puVar21 = puVar20;
          if ((0x1f < uVar18) && (0x1f < (ulong)((long)local_208 - (long)puVar20))) {
            uVar16 = uVar18 & 0xffffffffffffffe0;
            puVar11 = (undefined8 *)(local_208 + 0x10);
            puVar21 = puVar20 + uVar16;
            puVar14 = local_208 + uVar16;
            puVar17 = (undefined8 *)(puVar20 + 0x10);
            uVar19 = uVar16;
            do {
              puVar5 = puVar17 + -1;
              uVar22 = puVar17[-2];
              uVar24 = puVar17[1];
              uVar23 = *puVar17;
              puVar17 = puVar17 + 4;
              uVar19 = uVar19 - 0x20;
              puVar11[-1] = *puVar5;
              puVar11[-2] = uVar22;
              puVar11[1] = uVar24;
              *puVar11 = uVar23;
              puVar11 = puVar11 + 4;
            } while (uVar19 != 0);
            local_200 = puVar14;
            if (uVar18 == uVar16) goto LAB_004fb150;
          }
          do {
            puVar20 = puVar21 + 1;
            local_200 = puVar14 + 1;
            *puVar14 = *puVar21;
            puVar14 = local_200;
            puVar21 = puVar20;
          } while (puVar20 != puVar2);
        }
      }
LAB_004fb150:
      if ((ulong)((lVar3 >> 3) * -0x5555555555555555) < 2) {
        if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 004fb458 to 004fb47f has its CatchHandler @ 004fb824 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x587,
                     "__n < size()","vector[] index out of bounds");
        }
        goto LAB_004fb5c0;
      }
      local_220 = (undefined1 *)0x0;
      local_218 = (undefined1 *)0x0;
      local_210 = (undefined1 *)0x0;
      uVar18 = plVar12[4] - plVar12[3];
      if (uVar18 != 0) {
        if ((long)uVar18 < 0) {
          if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 004fb5b8 to 004fb5bf has its CatchHandler @ 004fb674 */
                    /* WARNING: Subroutine does not return */
            FUN_004f04ec(&local_220);
          }
          goto LAB_004fb5c0;
        }
                    /* try { // try from 004fb180 to 004fb187 has its CatchHandler @ 004fb674 */
        local_220 = (undefined1 *)operator_new(uVar18);
        puVar20 = (undefined1 *)plVar12[3];
        puVar2 = (undefined1 *)plVar12[4];
        local_210 = local_220 + uVar18;
        local_218 = local_220;
        if (puVar20 != puVar2) {
          uVar18 = (long)puVar2 - (long)puVar20;
          puVar14 = local_220;
          puVar21 = puVar20;
          if ((0x1f < uVar18) && (0x1f < (ulong)((long)local_220 - (long)puVar20))) {
            uVar16 = uVar18 & 0xffffffffffffffe0;
            puVar11 = (undefined8 *)(local_220 + 0x10);
            puVar21 = puVar20 + uVar16;
            puVar14 = local_220 + uVar16;
            puVar17 = (undefined8 *)(puVar20 + 0x10);
            uVar19 = uVar16;
            do {
              puVar5 = puVar17 + -1;
              uVar22 = puVar17[-2];
              uVar24 = puVar17[1];
              uVar23 = *puVar17;
              puVar17 = puVar17 + 4;
              uVar19 = uVar19 - 0x20;
              puVar11[-1] = *puVar5;
              puVar11[-2] = uVar22;
              puVar11[1] = uVar24;
              *puVar11 = uVar23;
              puVar11 = puVar11 + 4;
            } while (uVar19 != 0);
            local_218 = puVar14;
            if (uVar18 == uVar16) goto LAB_004fb218;
          }
          do {
            puVar20 = puVar21 + 1;
            local_218 = puVar14 + 1;
            *puVar14 = *puVar21;
            puVar14 = local_218;
            puVar21 = puVar20;
          } while (puVar20 != puVar2);
        }
      }
LAB_004fb218:
                    /* try { // try from 004fb218 to 004fb22f has its CatchHandler @ 004fb608 */
      FUN_005a228c(&local_170,&local_208,&local_220);
                    /* try { // try from 004fb230 to 004fb237 has its CatchHandler @ 004fb5fc */
      pvVar10 = operator_new(8);
                    /* try { // try from 004fb238 to 004fb23f has its CatchHandler @ 004fb5e8 */
      FUN_0054a384();
      local_198 = pvVar10;
                    /* try { // try from 004fb244 to 004fb24b has its CatchHandler @ 004fb5dc */
      local_1a0 = (undefined8 *)operator_new(0x40);
      uVar22 = local_160[0];
      puVar17 = puStack_168;
      puVar11 = local_170;
      *local_1a0 = pvVar10;
      local_198 = (void *)0x0;
      local_1a0[2] = puStack_188;
      local_1a0[1] = local_190;
      local_1a0[3] = local_180;
      local_1a0[4] = local_178;
      if (local_178[1] != 0) {
        local_180 = FUN_0049ac00;
        local_178 = &DAT_001f1910;
      }
      local_170 = (undefined8 *)0x0;
      puStack_168 = (undefined8 *)0x0;
      local_160[0] = 0;
      local_1a0[6] = puVar17;
      local_1a0[5] = puVar11;
      local_1a0[7] = uVar22;
                    /* try { // try from 004fb290 to 004fb2a3 has its CatchHandler @ 004fb6f4 */
      iVar7 = pthread_create(&pStack_1f0,(pthread_attr_t *)0x0,FUN_0050d270,local_1a0);
      if (iVar7 == 0) {
        local_1a0 = (undefined8 *)0x0;
        FUN_0050d434(&local_1a0);
                    /* try { // try from 004fb2b4 to 004fb2bb has its CatchHandler @ 004fb5c8 */
        FUN_0054a1b8(&pStack_1f0);
        FUN_0054a158(&pStack_1f0);
        if (0 < (long)puStack_168 - (long)local_170) {
          uVar18 = ((long)puStack_168 - (long)local_170) + 1;
          puVar11 = local_170;
          do {
            uVar18 = uVar18 - 1;
            *(undefined1 *)puVar11 = 0;
            puVar11 = (undefined8 *)((long)puVar11 + 1);
          } while (1 < uVar18);
        }
        if (local_170 != (undefined8 *)0x0) {
          puStack_168 = local_170;
          operator_delete(local_170);
        }
        if ((code *)local_178[1] != (code *)0x0) {
                    /* try { // try from 004fb308 to 004fb30b has its CatchHandler @ 004fb5c4 */
          (*(code *)local_178[1])(local_190);
        }
        if (0 < (long)local_218 - (long)local_220) {
          uVar18 = ((long)local_218 - (long)local_220) + 1;
          puVar20 = local_220;
          do {
            uVar18 = uVar18 - 1;
            *puVar20 = 0;
            puVar20 = puVar20 + 1;
          } while (1 < uVar18);
        }
        if (local_220 != (undefined1 *)0x0) {
          local_218 = local_220;
          operator_delete(local_220);
        }
        if (0 < (long)local_200 - (long)local_208) {
          uVar18 = ((long)local_200 - (long)local_208) + 1;
          puVar20 = local_208;
          do {
            uVar18 = uVar18 - 1;
            *puVar20 = 0;
            puVar20 = puVar20 + 1;
          } while (1 < uVar18);
        }
        if (local_208 != (undefined1 *)0x0) {
          local_200 = local_208;
          operator_delete(local_208);
        }
        plVar12 = local_1e8;
        plVar13 = local_1e0;
        if (local_1e8 != (long *)0x0) {
          while (plVar15 = plVar13, plVar15 != plVar12) {
            plVar13 = plVar15 + -3;
            pvVar10 = (void *)*plVar13;
            if (pvVar10 != (void *)0x0) {
              plVar15[-2] = (long)pvVar10;
              operator_delete(pvVar10);
            }
          }
          local_1e0 = plVar12;
          operator_delete(local_1e8);
        }
        if (local_1d0 != (undefined1 *)0x0) {
          local_1c8 = local_1d0;
          operator_delete(local_1d0);
        }
        if (local_1b8 != (undefined1 *)0x0) {
          local_1b0 = local_1b8;
          operator_delete(local_1b8);
        }
        if (*(long *)(lVar4 + 0x28) == local_68) {
          return;
        }
      }
      else if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 004fb550 to 004fb55b has its CatchHandler @ 004fb6f4 */
                    /* WARNING: Subroutine does not return */
        FUN_0054a0b0(iVar7,"thread constructor failed");
      }
      goto LAB_004fb5c0;
    }
  }
  plVar12 = (long *)FUN_0054f64c(0x10);
                    /* try { // try from 004fb48c to 004fb49f has its CatchHandler @ 004fb6e0 */
  FUN_00548c1c(&local_190,"Unknown user ID: ",param_3);
                    /* try { // try from 004fb4a4 to 004fb4eb has its CatchHandler @ 004fb6b8 */
  FUN_00547078(plVar12,&local_190);
  *plVar12 = (long)(PTR_DAT_00d51d30 + 0x10);
  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_0054f748(plVar12,&PTR_PTR_thunk_FUN_00552768_00d23bb8,PTR_FUN_00d51d38);
  }
LAB_004fb5c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004fb82c  FUN_004fb82c =====

void FUN_004fb82c(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  puVar1 = (undefined1 *)param_1[4];
  if (0 < param_1[5] - (long)puVar1) {
    uVar2 = (param_1[5] - (long)puVar1) + 1;
    do {
      uVar2 = uVar2 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar2);
    puVar1 = (undefined1 *)param_1[4];
  }
  if (puVar1 != (undefined1 *)0x0) {
    param_1[5] = puVar1;
    operator_delete(puVar1);
  }
  if (*(code **)(param_1[3] + 8) != (code *)0x0) {
                    /* try { // try from 004fb884 to 004fb887 has its CatchHandler @ 004fb894 */
    (**(code **)(param_1[3] + 8))(*param_1);
  }
  return;
}


// ===== 004fb898  FUN_004fb898 =====

void FUN_004fb898(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  puVar3 = (undefined8 *)param_1[1];
  puVar2 = puVar4;
  if (puVar3 != puVar4) {
    do {
      puVar2 = puVar3 + -3;
      pvVar1 = (void *)*puVar2;
      if (pvVar1 != (void *)0x0) {
        puVar3[-2] = pvVar1;
        operator_delete(pvVar1);
      }
      puVar3 = puVar2;
    } while (puVar2 != puVar4);
    puVar2 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar4;
  operator_delete(puVar2);
  return;
}


// ===== 004fb914  FUN_004fb914 =====

undefined2 FUN_004fb914(long param_1)

{
  return *(undefined2 *)(param_1 + 8);
}


// ===== 004fb91c  FUN_004fb91c =====

void FUN_004fb91c(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x5c0) != '\0') {
    FUN_004fc1d0(param_1 + 0x488);
    puVar2 = *(undefined1 **)(param_1 + 0x470);
    lVar3 = *(long *)(param_1 + 0x478) - (long)puVar2;
    if (0 < lVar3) {
      uVar4 = lVar3 + 1;
      do {
        uVar4 = uVar4 - 1;
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      } while (1 < uVar4);
      puVar2 = *(undefined1 **)(param_1 + 0x470);
    }
    if (puVar2 != (undefined1 *)0x0) {
      *(undefined1 **)(param_1 + 0x478) = puVar2;
      operator_delete(puVar2);
    }
    puVar2 = *(undefined1 **)(param_1 + 0x458);
    lVar3 = *(long *)(param_1 + 0x460) - (long)puVar2;
    if (0 < lVar3) {
      uVar4 = lVar3 + 1;
      do {
        uVar4 = uVar4 - 1;
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      } while (1 < uVar4);
      puVar2 = *(undefined1 **)(param_1 + 0x458);
    }
    if (puVar2 != (undefined1 *)0x0) {
      *(undefined1 **)(param_1 + 0x460) = puVar2;
      operator_delete(puVar2);
    }
  }
  FUN_004fc4d0(param_1 + 0x440);
  FUN_004fca34(param_1 + 0x428,*(undefined8 *)(param_1 + 0x430));
  FUN_0050070c(param_1 + 0x410,*(undefined8 *)(param_1 + 0x418));
  puVar2 = *(undefined1 **)(param_1 + 0x3f8);
  lVar3 = *(long *)(param_1 + 0x400) - (long)puVar2;
  if (0 < lVar3) {
    uVar4 = lVar3 + 1;
    do {
      uVar4 = uVar4 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (1 < uVar4);
    puVar2 = *(undefined1 **)(param_1 + 0x3f8);
  }
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x400) = puVar2;
    operator_delete(puVar2);
  }
  puVar2 = *(undefined1 **)(param_1 + 0x3e0);
  lVar3 = *(long *)(param_1 + 1000) - (long)puVar2;
  if (0 < lVar3) {
    uVar4 = lVar3 + 1;
    do {
      uVar4 = uVar4 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (1 < uVar4);
    puVar2 = *(undefined1 **)(param_1 + 0x3e0);
  }
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 1000) = puVar2;
    operator_delete(puVar2);
  }
  FUN_004fcb84(param_1 + 0x3c0,*(undefined8 *)(param_1 + 0x3c8));
  FUN_004fcd14(param_1 + 0x3a0,*(undefined8 *)(param_1 + 0x3a8));
  FUN_004fbcf0(param_1 + 0x248);
  pvVar5 = *(void **)(param_1 + 0x230);
  if (pvVar5 != (void *)0x0) {
    pvVar6 = pvVar5;
    pvVar7 = *(void **)(param_1 + 0x238);
    if (*(void **)(param_1 + 0x238) != pvVar5) {
      do {
        puVar2 = *(undefined1 **)((long)pvVar7 + -0x18);
        lVar3 = *(long *)((long)pvVar7 + -0x10) - (long)puVar2;
        if (0 < lVar3) {
          uVar4 = lVar3 + 1;
          do {
            uVar4 = uVar4 - 1;
            *puVar2 = 0;
            puVar2 = puVar2 + 1;
          } while (1 < uVar4);
          puVar2 = *(undefined1 **)((long)pvVar7 + -0x18);
        }
        pvVar6 = (void *)((long)pvVar7 + -0x20);
        if (puVar2 != (undefined1 *)0x0) {
          *(undefined1 **)((long)pvVar7 + -0x10) = puVar2;
          operator_delete(puVar2);
        }
        pvVar7 = pvVar6;
      } while (pvVar6 != pvVar5);
      pvVar6 = *(void **)(param_1 + 0x230);
    }
    *(void **)(param_1 + 0x238) = pvVar5;
    operator_delete(pvVar6);
  }
  puVar2 = *(undefined1 **)(param_1 + 0x218);
  lVar3 = *(long *)(param_1 + 0x220) - (long)puVar2;
  if (0 < lVar3) {
    uVar4 = lVar3 + 1;
    do {
      uVar4 = uVar4 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (1 < uVar4);
    puVar2 = *(undefined1 **)(param_1 + 0x218);
  }
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x220) = puVar2;
    operator_delete(puVar2);
  }
  puVar2 = *(undefined1 **)(param_1 + 0x200);
  lVar3 = *(long *)(param_1 + 0x208) - (long)puVar2;
  if (0 < lVar3) {
    uVar4 = lVar3 + 1;
    do {
      uVar4 = uVar4 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (1 < uVar4);
    puVar2 = *(undefined1 **)(param_1 + 0x200);
  }
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x208) = puVar2;
    operator_delete(puVar2);
  }
  FUN_004fcd88(param_1 + 0x1e0,*(undefined8 *)(param_1 + 0x1e8));
  FUN_004fcd14(param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1d0));
  puVar2 = *(undefined1 **)(param_1 + 0x1b0);
  lVar3 = *(long *)(param_1 + 0x1b8) - (long)puVar2;
  if (0 < lVar3) {
    uVar4 = lVar3 + 1;
    do {
      uVar4 = uVar4 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (1 < uVar4);
    puVar2 = *(undefined1 **)(param_1 + 0x1b0);
  }
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x1b8) = puVar2;
    operator_delete(puVar2);
  }
  if (*(char *)(param_1 + 0x1a0) != '\0') {
    if ((ulong)*(byte *)(param_1 + 0x198) != 0xff) {
                    /* try { // try from 004fbbc8 to 004fbbcf has its CatchHandler @ 004fbcb8 */
      (*(code *)(&PTR_FUN_00d1f940)[*(byte *)(param_1 + 0x198)])(auStack_68,param_1 + 0x60);
    }
    *(undefined1 *)(param_1 + 0x198) = 0xff;
  }
  FUN_004fcd14(param_1 + 0x48,*(undefined8 *)(param_1 + 0x50));
  pvVar5 = *(void **)(param_1 + 0x30);
  if (pvVar5 != (void *)0x0) {
    pvVar7 = *(void **)(param_1 + 0x38);
    pvVar6 = pvVar5;
    if (pvVar7 != pvVar5) {
      do {
        pvVar6 = (void *)((long)pvVar7 + -0x148);
        if (*(char *)((long)pvVar7 + -8) != '\0') {
          if ((ulong)*(byte *)((long)pvVar7 + -0x10) != 0xff) {
                    /* try { // try from 004fbc38 to 004fbc43 has its CatchHandler @ 004fbcbc */
            (*(code *)(&PTR_FUN_00d1f940)[*(byte *)((long)pvVar7 + -0x10)])(auStack_60,pvVar6);
          }
          *(undefined1 *)((long)pvVar7 + -0x10) = 0xff;
        }
        pvVar7 = pvVar6;
      } while (pvVar6 != pvVar5);
      pvVar6 = *(void **)(param_1 + 0x30);
    }
    *(void **)(param_1 + 0x38) = pvVar5;
    operator_delete(pvVar6);
  }
  puVar2 = *(undefined1 **)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10) - (long)puVar2;
  if (0 < lVar3) {
    uVar4 = lVar3 + 1;
    do {
      uVar4 = uVar4 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (1 < uVar4);
    puVar2 = *(undefined1 **)(param_1 + 8);
  }
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x10) = puVar2;
    operator_delete(puVar2);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004fbcc0  FUN_004fbcc0 =====

void FUN_004fbcc0(long param_1)

{
  FUN_004fcb84(param_1 + 0x38,*(undefined8 *)(param_1 + 0x40));
  FUN_004fcd14(param_1 + 0x18,*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 004fbcf0  FUN_004fbcf0 =====

void FUN_004fbcf0(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = *(undefined1 **)(param_1 + 0x128);
  lVar2 = *(long *)(param_1 + 0x130) - (long)puVar1;
  if (0 < lVar2) {
    uVar3 = lVar2 + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar3);
    puVar1 = *(undefined1 **)(param_1 + 0x128);
  }
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x130) = puVar1;
    operator_delete(puVar1);
  }
  puVar1 = *(undefined1 **)(param_1 + 0x110);
  lVar2 = *(long *)(param_1 + 0x118) - (long)puVar1;
  if (0 < lVar2) {
    uVar3 = lVar2 + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar3);
    puVar1 = *(undefined1 **)(param_1 + 0x110);
  }
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x118) = puVar1;
    operator_delete(puVar1);
  }
  puVar1 = *(undefined1 **)(param_1 + 0xf8);
  lVar2 = *(long *)(param_1 + 0x100) - (long)puVar1;
  if (0 < lVar2) {
    uVar3 = lVar2 + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar3);
    puVar1 = *(undefined1 **)(param_1 + 0xf8);
  }
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x100) = puVar1;
    operator_delete(puVar1);
  }
  puVar1 = *(undefined1 **)(param_1 + 0xe0);
  lVar2 = *(long *)(param_1 + 0xe8) - (long)puVar1;
  if (0 < lVar2) {
    uVar3 = lVar2 + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar3);
    puVar1 = *(undefined1 **)(param_1 + 0xe0);
  }
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0xe8) = puVar1;
    operator_delete(puVar1);
  }
  puVar1 = *(undefined1 **)(param_1 + 200);
  lVar2 = *(long *)(param_1 + 0xd0) - (long)puVar1;
  if (0 < lVar2) {
    uVar3 = lVar2 + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar3);
    puVar1 = *(undefined1 **)(param_1 + 200);
  }
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0xd0) = puVar1;
    operator_delete(puVar1);
  }
  puVar1 = *(undefined1 **)(param_1 + 0xb0);
  lVar2 = *(long *)(param_1 + 0xb8) - (long)puVar1;
  if (0 < lVar2) {
    uVar3 = lVar2 + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar3);
    puVar1 = *(undefined1 **)(param_1 + 0xb0);
  }
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0xb8) = puVar1;
    operator_delete(puVar1);
  }
  puVar1 = *(undefined1 **)(param_1 + 0x98);
  lVar2 = *(long *)(param_1 + 0xa0) - (long)puVar1;
  if (0 < lVar2) {
    uVar3 = lVar2 + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar3);
    puVar1 = *(undefined1 **)(param_1 + 0x98);
  }
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0xa0) = puVar1;
    operator_delete(puVar1);
  }
  puVar1 = *(undefined1 **)(param_1 + 0x80);
  lVar2 = *(long *)(param_1 + 0x88) - (long)puVar1;
  if (0 < lVar2) {
    uVar3 = lVar2 + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar3);
    puVar1 = *(undefined1 **)(param_1 + 0x80);
  }
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x88) = puVar1;
    operator_delete(puVar1);
  }
  puVar1 = *(undefined1 **)(param_1 + 0x68);
  lVar2 = *(long *)(param_1 + 0x70) - (long)puVar1;
  if (0 < lVar2) {
    uVar3 = lVar2 + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar3);
    puVar1 = *(undefined1 **)(param_1 + 0x68);
  }
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x70) = puVar1;
    operator_delete(puVar1);
  }
  puVar1 = *(undefined1 **)(param_1 + 0x50);
  lVar2 = *(long *)(param_1 + 0x58) - (long)puVar1;
  if (0 < lVar2) {
    uVar3 = lVar2 + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar3);
    puVar1 = *(undefined1 **)(param_1 + 0x50);
  }
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x58) = puVar1;
    operator_delete(puVar1);
  }
  puVar1 = *(undefined1 **)(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x40) - (long)puVar1;
  if (0 < lVar2) {
    uVar3 = lVar2 + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar3);
    puVar1 = *(undefined1 **)(param_1 + 0x38);
  }
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x40) = puVar1;
    operator_delete(puVar1);
  }
  puVar1 = *(undefined1 **)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28) - (long)puVar1;
  if (0 < lVar2) {
    uVar3 = lVar2 + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar3);
    puVar1 = *(undefined1 **)(param_1 + 0x20);
  }
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x28) = puVar1;
    operator_delete(puVar1);
  }
  puVar1 = *(undefined1 **)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10) - (long)puVar1;
  if (0 < lVar2) {
    uVar3 = lVar2 + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar3);
    puVar1 = *(undefined1 **)(param_1 + 8);
  }
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x10) = puVar1;
    operator_delete(puVar1);
    return;
  }
  return;
}


// ===== 004fbfbc  FUN_004fbfbc =====

void FUN_004fbfbc(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = *(undefined1 **)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28) - (long)puVar1;
  if (0 < lVar2) {
    uVar3 = lVar2 + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar3);
    puVar1 = *(undefined1 **)(param_1 + 0x20);
  }
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x28) = puVar1;
    operator_delete(puVar1);
  }
  puVar1 = *(undefined1 **)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10) - (long)puVar1;
  if (0 < lVar2) {
    uVar3 = lVar2 + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar3);
    puVar1 = *(undefined1 **)(param_1 + 8);
  }
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x10) = puVar1;
    operator_delete(puVar1);
    return;
  }
  return;
}


// ===== 004fc04c  FUN_004fc04c =====

void FUN_004fc04c(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  
  FUN_004fcd88(param_1 + 0x38,*(undefined8 *)(param_1 + 0x40));
  FUN_004fcd14(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28));
  puVar1 = *(undefined1 **)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10) - (long)puVar1;
  if (0 < lVar2) {
    uVar3 = lVar2 + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar3);
    puVar1 = *(undefined1 **)(param_1 + 8);
  }
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x10) = puVar1;
    operator_delete(puVar1);
    return;
  }
  return;
}


// ===== 004fc0bc  FUN_004fc0bc =====

void FUN_004fc0bc(long param_1)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x178) != '\0') {
    if ((ulong)*(byte *)(param_1 + 0x170) != 0xff) {
                    /* try { // try from 004fc10c to 004fc113 has its CatchHandler @ 004fc1c8 */
      (*(code *)(&PTR_FUN_00d1f940)[*(byte *)(param_1 + 0x170)])(auStack_68,param_1 + 0x38);
    }
    *(undefined1 *)(param_1 + 0x170) = 0xff;
  }
  FUN_004fcd14(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28));
  pvVar3 = *(void **)(param_1 + 8);
  if (pvVar3 != (void *)0x0) {
    pvVar4 = *(void **)(param_1 + 0x10);
    pvVar2 = pvVar3;
    if (pvVar4 != pvVar3) {
      do {
        pvVar2 = (void *)((long)pvVar4 + -0x148);
        if (*(char *)((long)pvVar4 + -8) != '\0') {
          if ((ulong)*(byte *)((long)pvVar4 + -0x10) != 0xff) {
                    /* try { // try from 004fc17c to 004fc187 has its CatchHandler @ 004fc1cc */
            (*(code *)(&PTR_FUN_00d1f940)[*(byte *)((long)pvVar4 + -0x10)])(auStack_60,pvVar2);
          }
          *(undefined1 *)((long)pvVar4 + -0x10) = 0xff;
        }
        pvVar4 = pvVar2;
      } while (pvVar2 != pvVar3);
      pvVar2 = *(void **)(param_1 + 8);
    }
    *(void **)(param_1 + 0x10) = pvVar3;
    operator_delete(pvVar2);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004fc1d0  FUN_004fc1d0 =====

void FUN_004fc1d0(undefined8 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined1 *)param_1[0x24];
  if (0 < param_1[0x25] - (long)puVar2) {
    uVar3 = (param_1[0x25] - (long)puVar2) + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (1 < uVar3);
    puVar2 = (undefined1 *)param_1[0x24];
  }
  if (puVar2 != (undefined1 *)0x0) {
    param_1[0x25] = puVar2;
    operator_delete(puVar2);
  }
  pvVar6 = (void *)param_1[0x21];
  if (pvVar6 != (void *)0x0) {
    pvVar7 = pvVar6;
    pvVar4 = (void *)param_1[0x22];
    if ((void *)param_1[0x22] != pvVar6) {
      do {
        puVar2 = *(undefined1 **)((long)pvVar4 + -0x18);
        lVar5 = *(long *)((long)pvVar4 + -0x10) - (long)puVar2;
        if (0 < lVar5) {
          uVar3 = lVar5 + 1;
          do {
            uVar3 = uVar3 - 1;
            *puVar2 = 0;
            puVar2 = puVar2 + 1;
          } while (1 < uVar3);
          puVar2 = *(undefined1 **)((long)pvVar4 + -0x18);
        }
        pvVar7 = (void *)((long)pvVar4 + -0x20);
        if (puVar2 != (undefined1 *)0x0) {
          *(undefined1 **)((long)pvVar4 + -0x10) = puVar2;
          operator_delete(puVar2);
        }
        pvVar4 = pvVar7;
      } while (pvVar7 != pvVar6);
      pvVar7 = (void *)param_1[0x21];
    }
    param_1[0x22] = pvVar6;
    operator_delete(pvVar7);
  }
  if ((ulong)*(byte *)(param_1 + 0x20) != 0xff) {
                    /* try { // try from 004fc2b8 to 004fc2bf has its CatchHandler @ 004fc3d8 */
    (*(code *)(&PTR_FUN_00d1f8e0)[*(byte *)(param_1 + 0x20)])(auStack_48,param_1 + 0x1d);
  }
  pvVar6 = (void *)param_1[0x1a];
  *(undefined1 *)(param_1 + 0x20) = 0xff;
  if (pvVar6 != (void *)0x0) {
    param_1[0x1b] = pvVar6;
    operator_delete(pvVar6);
  }
  pvVar6 = (void *)param_1[0x17];
  if (pvVar6 != (void *)0x0) {
    param_1[0x18] = pvVar6;
    operator_delete(pvVar6);
  }
  pvVar6 = (void *)param_1[0x14];
  if (pvVar6 != (void *)0x0) {
    param_1[0x15] = pvVar6;
    operator_delete(pvVar6);
  }
  pvVar6 = (void *)param_1[0x11];
  if (pvVar6 != (void *)0x0) {
    param_1[0x12] = pvVar6;
    operator_delete(pvVar6);
  }
  pvVar6 = (void *)param_1[0xe];
  if (pvVar6 != (void *)0x0) {
    param_1[0xf] = pvVar6;
    operator_delete(pvVar6);
  }
  if ((ulong)*(byte *)(param_1 + 0xd) != 0xff) {
                    /* try { // try from 004fc334 to 004fc33b has its CatchHandler @ 004fc3d4 */
    (*(code *)(&PTR_FUN_00d1f9c8)[*(byte *)(param_1 + 0xd)])(auStack_40,param_1 + 6);
  }
  puVar2 = (undefined1 *)param_1[3];
  *(undefined1 *)(param_1 + 0xd) = 0xff;
  if (0 < param_1[4] - (long)puVar2) {
    uVar3 = (param_1[4] - (long)puVar2) + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (1 < uVar3);
    puVar2 = (undefined1 *)param_1[3];
  }
  if (puVar2 != (undefined1 *)0x0) {
    param_1[4] = puVar2;
    operator_delete(puVar2);
  }
  puVar2 = (undefined1 *)*param_1;
  if (0 < param_1[1] - (long)puVar2) {
    uVar3 = (param_1[1] - (long)puVar2) + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (1 < uVar3);
    puVar2 = (undefined1 *)*param_1;
  }
  if (puVar2 != (undefined1 *)0x0) {
    param_1[1] = puVar2;
    operator_delete(puVar2);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004fc3dc  FUN_004fc3dc =====

void FUN_004fc3dc(long param_1)

{
  long lVar1;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((ulong)*(byte *)(param_1 + 0x18) != 0xff) {
                    /* try { // try from 004fc414 to 004fc41f has its CatchHandler @ 004fc44c */
    (*(code *)(&PTR_FUN_00d1f8e0)[*(byte *)(param_1 + 0x18)])(auStack_30,param_1);
  }
  *(undefined1 *)(param_1 + 0x18) = 0xff;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004fc450  FUN_004fc450 =====

void FUN_004fc450(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  puVar1 = (undefined1 *)*param_1;
  if (0 < param_1[1] - (long)puVar1) {
    uVar2 = (param_1[1] - (long)puVar1) + 1;
    do {
      uVar2 = uVar2 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar2);
    puVar1 = (undefined1 *)*param_1;
  }
  if (puVar1 != (undefined1 *)0x0) {
    param_1[1] = puVar1;
    operator_delete(puVar1);
    return;
  }
  return;
}


// ===== 004fc490  FUN_004fc490 =====

void FUN_004fc490(void)

{
  return;
}


// ===== 004fc494  FUN_004fc494 =====

void FUN_004fc494(void)

{
  return;
}


// ===== 004fc498  FUN_004fc498 =====

void FUN_004fc498(undefined8 param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  puVar1 = (undefined1 *)*param_2;
  if (0 < param_2[1] - (long)puVar1) {
    uVar2 = (param_2[1] - (long)puVar1) + 1;
    do {
      uVar2 = uVar2 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar2);
    puVar1 = (undefined1 *)*param_2;
  }
  if (puVar1 != (undefined1 *)0x0) {
    param_2[1] = puVar1;
    operator_delete(puVar1);
    return;
  }
  return;
}


// ===== 004fc4d0  FUN_004fc4d0 =====

void FUN_004fc4d0(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (param_1[2] != 0) {
    lVar1 = *param_1;
    plVar2 = (long *)param_1[1];
    param_1[2] = 0;
    lVar6 = *plVar2;
    *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar6;
    while (plVar2 != param_1) {
      plVar7 = (long *)plVar2[1];
      if ((ulong)*(byte *)(plVar2 + 0x37) != 0xff) {
                    /* try { // try from 004fc560 to 004fc567 has its CatchHandler @ 004fc5d0 */
        (*(code *)(&PTR_FUN_00d1f8f8)[*(byte *)(plVar2 + 0x37)])(auStack_50,plVar2 + 6);
      }
      puVar4 = (undefined1 *)plVar2[2];
      *(undefined1 *)(plVar2 + 0x37) = 0xff;
      if (0 < plVar2[3] - (long)puVar4) {
        uVar5 = (plVar2[3] - (long)puVar4) + 1;
        do {
          uVar5 = uVar5 - 1;
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        } while (1 < uVar5);
        puVar4 = (undefined1 *)plVar2[2];
      }
      if (puVar4 != (undefined1 *)0x0) {
        plVar2[3] = (long)puVar4;
        operator_delete(puVar4);
      }
      operator_delete(plVar2);
      plVar2 = plVar7;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004fc5d4  FUN_004fc5d4 =====

void FUN_004fc5d4(undefined8 param_1,undefined8 param_2)

{
  FUN_004fc83c(param_2);
  return;
}


// ===== 004fc5dc  FUN_004fc5dc =====

void FUN_004fc5dc(undefined8 param_1,undefined8 param_2)

{
  FUN_004fc1d0(param_2);
  return;
}


// ===== 004fc5e4  FUN_004fc5e4 =====

void FUN_004fc5e4(void)

{
  return;
}


// ===== 004fc5e8  FUN_004fc5e8 =====

void FUN_004fc5e8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  puVar2 = *(undefined1 **)(param_2 + 0x30);
  lVar3 = *(long *)(param_2 + 0x38) - (long)puVar2;
  if (0 < lVar3) {
    uVar4 = lVar3 + 1;
    do {
      uVar4 = uVar4 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (1 < uVar4);
    puVar2 = *(undefined1 **)(param_2 + 0x30);
  }
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined1 **)(param_2 + 0x38) = puVar2;
    operator_delete(puVar2);
  }
  if ((ulong)*(byte *)(param_2 + 0x28) != 0xff) {
                    /* try { // try from 004fc654 to 004fc65f has its CatchHandler @ 004fc68c */
    (*(code *)(&PTR_FUN_00d1f930)[*(byte *)(param_2 + 0x28)])(auStack_30,param_2);
  }
  *(undefined1 *)(param_2 + 0x28) = 0xff;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004fc690  FUN_004fc690 =====

void FUN_004fc690(undefined8 param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  
  pvVar5 = (void *)param_2[4];
  if (pvVar5 != (void *)0x0) {
    pvVar6 = pvVar5;
    pvVar2 = (void *)param_2[5];
    if ((void *)param_2[5] != pvVar5) {
      do {
        puVar1 = *(undefined1 **)((long)pvVar2 + -0x18);
        lVar4 = *(long *)((long)pvVar2 + -0x10) - (long)puVar1;
        if (0 < lVar4) {
          uVar3 = lVar4 + 1;
          do {
            uVar3 = uVar3 - 1;
            *puVar1 = 0;
            puVar1 = puVar1 + 1;
          } while (1 < uVar3);
          puVar1 = *(undefined1 **)((long)pvVar2 + -0x18);
        }
        pvVar6 = (void *)((long)pvVar2 + -0x20);
        if (puVar1 != (undefined1 *)0x0) {
          *(undefined1 **)((long)pvVar2 + -0x10) = puVar1;
          operator_delete(puVar1);
        }
        pvVar2 = pvVar6;
      } while (pvVar6 != pvVar5);
      pvVar6 = (void *)param_2[4];
    }
    param_2[5] = pvVar5;
    operator_delete(pvVar6);
  }
  puVar1 = (undefined1 *)*param_2;
  if (0 < param_2[1] - (long)puVar1) {
    uVar3 = (param_2[1] - (long)puVar1) + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar3);
    puVar1 = (undefined1 *)*param_2;
  }
  if (puVar1 == (undefined1 *)0x0) {
    return;
  }
  param_2[1] = puVar1;
  operator_delete(puVar1);
  return;
}


// ===== 004fc764  FUN_004fc764 =====

void FUN_004fc764(undefined8 param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  puVar1 = (undefined1 *)*param_2;
  if (0 < param_2[1] - (long)puVar1) {
    uVar2 = (param_2[1] - (long)puVar1) + 1;
    do {
      uVar2 = uVar2 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar2);
    puVar1 = (undefined1 *)*param_2;
  }
  if (puVar1 != (undefined1 *)0x0) {
    param_2[1] = puVar1;
    operator_delete(puVar1);
    return;
  }
  return;
}


// ===== 004fc79c  FUN_004fc79c =====

void FUN_004fc79c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  void *pvVar6;
  
  pvVar5 = (void *)*param_2;
  if (pvVar5 == (void *)0x0) {
    return;
  }
  pvVar6 = pvVar5;
  pvVar2 = (void *)param_2[1];
  if ((void *)param_2[1] != pvVar5) {
    do {
      puVar1 = *(undefined1 **)((long)pvVar2 + -0x18);
      lVar3 = *(long *)((long)pvVar2 + -0x10) - (long)puVar1;
      if (0 < lVar3) {
        uVar4 = lVar3 + 1;
        do {
          uVar4 = uVar4 - 1;
          *puVar1 = 0;
          puVar1 = puVar1 + 1;
        } while (1 < uVar4);
        puVar1 = *(undefined1 **)((long)pvVar2 + -0x18);
      }
      pvVar6 = (void *)((long)pvVar2 + -0x20);
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined1 **)((long)pvVar2 + -0x10) = puVar1;
        operator_delete(puVar1);
      }
      pvVar2 = pvVar6;
    } while (pvVar6 != pvVar5);
    pvVar6 = (void *)*param_2;
  }
  param_2[1] = pvVar5;
  operator_delete(pvVar6);
  return;
}


// ===== 004fc83c  FUN_004fc83c =====

void FUN_004fc83c(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  
  puVar1 = *(undefined1 **)(param_1 + 0x170);
  lVar2 = *(long *)(param_1 + 0x178) - (long)puVar1;
  if (0 < lVar2) {
    uVar3 = lVar2 + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar3);
    puVar1 = *(undefined1 **)(param_1 + 0x170);
  }
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x178) = puVar1;
    operator_delete(puVar1);
  }
  pvVar5 = *(void **)(param_1 + 0x158);
  if (pvVar5 != (void *)0x0) {
    pvVar6 = pvVar5;
    pvVar4 = *(void **)(param_1 + 0x160);
    if (*(void **)(param_1 + 0x160) != pvVar5) {
      do {
        puVar1 = *(undefined1 **)((long)pvVar4 + -0x18);
        lVar2 = *(long *)((long)pvVar4 + -0x10) - (long)puVar1;
        if (0 < lVar2) {
          uVar3 = lVar2 + 1;
          do {
            uVar3 = uVar3 - 1;
            *puVar1 = 0;
            puVar1 = puVar1 + 1;
          } while (1 < uVar3);
          puVar1 = *(undefined1 **)((long)pvVar4 + -0x18);
        }
        pvVar6 = (void *)((long)pvVar4 + -0x20);
        if (puVar1 != (undefined1 *)0x0) {
          *(undefined1 **)((long)pvVar4 + -0x10) = puVar1;
          operator_delete(puVar1);
        }
        pvVar4 = pvVar6;
      } while (pvVar6 != pvVar5);
      pvVar6 = *(void **)(param_1 + 0x158);
    }
    *(void **)(param_1 + 0x160) = pvVar5;
    operator_delete(pvVar6);
  }
  FUN_004fc1d0(param_1 + 0x20);
  puVar1 = *(undefined1 **)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10) - (long)puVar1;
  if (0 < lVar2) {
    uVar3 = lVar2 + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar3);
    puVar1 = *(undefined1 **)(param_1 + 8);
  }
  if (puVar1 == (undefined1 *)0x0) {
    return;
  }
  *(undefined1 **)(param_1 + 0x10) = puVar1;
  operator_delete(puVar1);
  return;
}


// ===== 004fc950  FUN_004fc950 =====

void FUN_004fc950(long param_1)

{
  long lVar1;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((ulong)*(byte *)(param_1 + 0x28) != 0xff) {
                    /* try { // try from 004fc988 to 004fc993 has its CatchHandler @ 004fc9c0 */
    (*(code *)(&PTR_FUN_00d1f930)[*(byte *)(param_1 + 0x28)])(auStack_30,param_1);
  }
  *(undefined1 *)(param_1 + 0x28) = 0xff;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004fc9c4  FUN_004fc9c4 =====

void FUN_004fc9c4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  puVar1 = (undefined1 *)*param_2;
  if (0 < param_2[1] - (long)puVar1) {
    uVar2 = (param_2[1] - (long)puVar1) + 1;
    do {
      uVar2 = uVar2 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar2);
    puVar1 = (undefined1 *)*param_2;
  }
  if (puVar1 != (undefined1 *)0x0) {
    param_2[1] = puVar1;
    operator_delete(puVar1);
    return;
  }
  return;
}


// ===== 004fc9fc  FUN_004fc9fc =====

void FUN_004fc9fc(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = *(undefined1 **)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x10) - (long)puVar1;
  if (0 < lVar2) {
    uVar3 = lVar2 + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar3);
    puVar1 = *(undefined1 **)(param_2 + 8);
  }
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined1 **)(param_2 + 0x10) = puVar1;
    operator_delete(puVar1);
    return;
  }
  return;
}


// ===== 004fca34  FUN_004fca34 =====

void FUN_004fca34(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_004fca34(param_1,*param_2);
    FUN_004fca34(param_1,param_2[1]);
                    /* try { // try from 004fca64 to 004fca67 has its CatchHandler @ 004fca84 */
    FUN_004fca88(param_2 + 4);
    operator_delete(param_2);
    return;
  }
  return;
}


// ===== 004fca88  FUN_004fca88 =====

void FUN_004fca88(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x3f,"__loc != nullptr","null pointer given to destroy_at");
  }
  puVar1 = (undefined1 *)param_1[4];
  if (0 < param_1[5] - (long)puVar1) {
    uVar2 = (param_1[5] - (long)puVar1) + 1;
    do {
      uVar2 = uVar2 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar2);
    puVar1 = (undefined1 *)param_1[4];
  }
  if (puVar1 != (undefined1 *)0x0) {
    param_1[5] = puVar1;
    operator_delete(puVar1);
  }
  puVar1 = (undefined1 *)*param_1;
  if (0 < param_1[1] - (long)puVar1) {
    uVar2 = (param_1[1] - (long)puVar1) + 1;
    do {
      uVar2 = uVar2 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar2);
    puVar1 = (undefined1 *)*param_1;
  }
  if (puVar1 != (undefined1 *)0x0) {
    param_1[1] = puVar1;
    operator_delete(puVar1);
    return;
  }
  return;
}


// ===== 004fcb44  FUN_004fcb44 =====

void FUN_004fcb44(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  puVar1 = (undefined1 *)*param_1;
  if (0 < param_1[1] - (long)puVar1) {
    uVar2 = (param_1[1] - (long)puVar1) + 1;
    do {
      uVar2 = uVar2 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar2);
    puVar1 = (undefined1 *)*param_1;
  }
  if (puVar1 != (undefined1 *)0x0) {
    param_1[1] = puVar1;
    operator_delete(puVar1);
    return;
  }
  return;
}


// ===== 004fcb84  FUN_004fcb84 =====

void FUN_004fcb84(undefined8 param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_004fcb84(param_1,*param_2);
    FUN_004fcb84(param_1,param_2[1]);
    FUN_004fcc04(param_2 + 10,param_2[0xb]);
    puVar1 = (undefined1 *)param_2[6];
    if (0 < param_2[7] - (long)puVar1) {
      uVar2 = (param_2[7] - (long)puVar1) + 1;
      do {
        uVar2 = uVar2 - 1;
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
      } while (1 < uVar2);
      puVar1 = (undefined1 *)param_2[6];
    }
    if (puVar1 != (undefined1 *)0x0) {
      param_2[7] = puVar1;
      operator_delete(puVar1);
    }
    operator_delete(param_2);
    return;
  }
  return;
}


// ===== 004fcc04  FUN_004fcc04 =====

void FUN_004fcc04(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_004fcc04(param_1,*param_2);
    FUN_004fcc04(param_1,param_2[1]);
                    /* try { // try from 004fcc34 to 004fcc37 has its CatchHandler @ 004fcc54 */
    FUN_004fcc58(param_2 + 4);
    operator_delete(param_2);
    return;
  }
  return;
}


// ===== 004fcc58  FUN_004fcc58 =====

void FUN_004fcc58(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x3f,"__loc != nullptr","null pointer given to destroy_at");
  }
  puVar1 = *(undefined1 **)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28) - (long)puVar1;
  if (0 < lVar2) {
    uVar3 = lVar2 + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar3);
    puVar1 = *(undefined1 **)(param_1 + 0x20);
  }
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x28) = puVar1;
    operator_delete(puVar1);
  }
  puVar1 = *(undefined1 **)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10) - (long)puVar1;
  if (0 < lVar2) {
    uVar3 = lVar2 + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar3);
    puVar1 = *(undefined1 **)(param_1 + 8);
  }
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x10) = puVar1;
    operator_delete(puVar1);
    return;
  }
  return;
}


// ===== 004fcd14  FUN_004fcd14 =====

void FUN_004fcd14(undefined8 param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_004fcd14(param_1,*param_2);
    FUN_004fcd14(param_1,param_2[1]);
    puVar1 = (undefined1 *)param_2[5];
    if (0 < param_2[6] - (long)puVar1) {
      uVar2 = (param_2[6] - (long)puVar1) + 1;
      do {
        uVar2 = uVar2 - 1;
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
      } while (1 < uVar2);
      puVar1 = (undefined1 *)param_2[5];
    }
    if (puVar1 != (undefined1 *)0x0) {
      param_2[6] = puVar1;
      operator_delete(puVar1);
    }
    operator_delete(param_2);
    return;
  }
  return;
}


// ===== 004fcd88  FUN_004fcd88 =====

void FUN_004fcd88(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_004fcd88(param_1,*param_2);
    FUN_004fcd88(param_1,param_2[1]);
                    /* try { // try from 004fcdb8 to 004fcdbb has its CatchHandler @ 004fcdd8 */
    FUN_004fcddc(param_2 + 4);
    operator_delete(param_2);
    return;
  }
  return;
}


// ===== 004fcddc  FUN_004fcddc =====

void FUN_004fcddc(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x3f,"__loc != nullptr","null pointer given to destroy_at");
  }
  puVar1 = *(undefined1 **)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28) - (long)puVar1;
  if (0 < lVar2) {
    uVar3 = lVar2 + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar3);
    puVar1 = *(undefined1 **)(param_1 + 0x20);
  }
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x28) = puVar1;
    operator_delete(puVar1);
  }
  puVar1 = *(undefined1 **)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10) - (long)puVar1;
  if (0 < lVar2) {
    uVar3 = lVar2 + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar3);
    puVar1 = *(undefined1 **)(param_1 + 8);
  }
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x10) = puVar1;
    operator_delete(puVar1);
    return;
  }
  return;
}


// ===== 004fce98  FUN_004fce98 =====

void FUN_004fce98(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    pvVar4 = (void *)param_1[1];
    pvVar2 = pvVar3;
    if (pvVar4 != pvVar3) {
      do {
        pvVar2 = (void *)((long)pvVar4 + -0x148);
        if (*(char *)((long)pvVar4 + -8) != '\0') {
          if ((ulong)*(byte *)((long)pvVar4 + -0x10) != 0xff) {
                    /* try { // try from 004fcf18 to 004fcf23 has its CatchHandler @ 004fcf64 */
            (*(code *)(&PTR_FUN_00d1f940)[*(byte *)((long)pvVar4 + -0x10)])(auStack_60,pvVar2);
          }
          *(undefined1 *)((long)pvVar4 + -0x10) = 0xff;
        }
        pvVar4 = pvVar2;
      } while (pvVar2 != pvVar3);
      pvVar2 = (void *)*param_1;
    }
    param_1[1] = pvVar3;
    operator_delete(pvVar2);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004fcf68  FUN_004fcf68 =====

void FUN_004fcf68(undefined8 param_1,undefined8 param_2)

{
  FUN_004fc1d0(param_2);
  return;
}


// ===== 004fcf70  FUN_004fcf70 =====

void FUN_004fcf70(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined1 *puVar2;
  ulong uVar3;
  
  pvVar1 = (void *)param_2[6];
  if (pvVar1 != (void *)0x0) {
    param_2[7] = pvVar1;
    operator_delete(pvVar1);
  }
  puVar2 = (undefined1 *)param_2[3];
  if (0 < param_2[4] - (long)puVar2) {
    uVar3 = (param_2[4] - (long)puVar2) + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (1 < uVar3);
    puVar2 = (undefined1 *)param_2[3];
  }
  if (puVar2 != (undefined1 *)0x0) {
    param_2[4] = puVar2;
    operator_delete(puVar2);
  }
  puVar2 = (undefined1 *)*param_2;
  if (0 < param_2[1] - (long)puVar2) {
    uVar3 = (param_2[1] - (long)puVar2) + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (1 < uVar3);
    puVar2 = (undefined1 *)*param_2;
  }
  if (puVar2 != (undefined1 *)0x0) {
    param_2[1] = puVar2;
    operator_delete(puVar2);
    return;
  }
  return;
}


// ===== 004fd00c  FUN_004fd00c =====

void FUN_004fd00c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  puVar1 = (undefined1 *)*param_2;
  if (0 < param_2[1] - (long)puVar1) {
    uVar2 = (param_2[1] - (long)puVar1) + 1;
    do {
      uVar2 = uVar2 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar2);
    puVar1 = (undefined1 *)*param_2;
  }
  if (puVar1 != (undefined1 *)0x0) {
    param_2[1] = puVar1;
    operator_delete(puVar1);
    return;
  }
  return;
}


// ===== 004fd044  FUN_004fd044 =====

void FUN_004fd044(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((ulong)*(byte *)(param_2 + 400) != 0xff) {
                    /* try { // try from 004fd080 to 004fd087 has its CatchHandler @ 004fd0b4 */
    (*(code *)(&PTR_FUN_00d1f8f8)[*(byte *)(param_2 + 400)])(auStack_30,param_2 + 8);
  }
  *(undefined1 *)(param_2 + 400) = 0xff;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004fd0b8  FUN_004fd0b8 =====

void FUN_004fd0b8(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_004fd180(param_2 + 3);
  pvVar3 = (void *)*param_2;
  if (pvVar3 != (void *)0x0) {
    pvVar4 = (void *)param_2[1];
    pvVar2 = pvVar3;
    if (pvVar4 != pvVar3) {
      do {
        if ((ulong)*(byte *)((long)pvVar4 + -8) != 0xff) {
                    /* try { // try from 004fd138 to 004fd13f has its CatchHandler @ 004fd17c */
          (*(code *)(&PTR_FUN_00d1f968)[*(byte *)((long)pvVar4 + -8)])
                    (auStack_50,(long)pvVar4 + -0x1a0);
        }
        pvVar2 = (void *)((long)pvVar4 + -0x1a8);
        *(undefined1 *)((long)pvVar4 + -8) = 0xff;
        pvVar4 = pvVar2;
      } while (pvVar2 != pvVar3);
      pvVar2 = (void *)*param_2;
    }
    param_2[1] = pvVar3;
    operator_delete(pvVar2);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004fd180  FUN_004fd180 =====

void FUN_004fd180(long param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (*(char *)(param_1 + 0x150) == '\0') {
    return;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x138);
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_1 + 0x140);
    puVar2 = puVar4;
    if (puVar5 != puVar4) {
      do {
        FUN_004fd238(puVar5 + -3);
        puVar2 = puVar5 + -6;
        puVar1 = (undefined1 *)*puVar2;
        if (0 < puVar5[-5] - (long)puVar1) {
          uVar3 = (puVar5[-5] - (long)puVar1) + 1;
          do {
            uVar3 = uVar3 - 1;
            *puVar1 = 0;
            puVar1 = puVar1 + 1;
          } while (1 < uVar3);
          puVar1 = (undefined1 *)*puVar2;
        }
        if (puVar1 != (undefined1 *)0x0) {
          puVar5[-5] = puVar1;
          operator_delete(puVar1);
        }
        puVar5 = puVar2;
      } while (puVar2 != puVar4);
      puVar2 = *(undefined8 **)(param_1 + 0x138);
    }
    *(undefined8 **)(param_1 + 0x140) = puVar4;
    operator_delete(puVar2);
  }
  FUN_004fc1d0(param_1);
  return;
}


// ===== 004fd238  FUN_004fd238 =====

void FUN_004fd238(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = puVar4;
  puVar5 = (undefined8 *)param_1[1];
  if ((undefined8 *)param_1[1] != puVar4) {
    do {
      puVar1 = (undefined1 *)puVar5[-3];
      if (0 < puVar5[-2] - (long)puVar1) {
        uVar3 = (puVar5[-2] - (long)puVar1) + 1;
        do {
          uVar3 = uVar3 - 1;
          *puVar1 = 0;
          puVar1 = puVar1 + 1;
        } while (1 < uVar3);
        puVar1 = (undefined1 *)puVar5[-3];
      }
      puVar2 = puVar5 + -6;
      if (puVar1 != (undefined1 *)0x0) {
        puVar5[-2] = puVar1;
        operator_delete(puVar1);
      }
      puVar1 = (undefined1 *)puVar5[-6];
      if (0 < puVar5[-5] - (long)puVar1) {
        uVar3 = (puVar5[-5] - (long)puVar1) + 1;
        do {
          uVar3 = uVar3 - 1;
          *puVar1 = 0;
          puVar1 = puVar1 + 1;
        } while (1 < uVar3);
        puVar1 = (undefined1 *)*puVar2;
      }
      if (puVar1 != (undefined1 *)0x0) {
        puVar5[-5] = puVar1;
        operator_delete(puVar1);
      }
      puVar5 = puVar2;
    } while (puVar2 != puVar4);
    puVar2 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar4;
  operator_delete(puVar2);
  return;
}


// ===== 004fd30c  FUN_004fd30c =====

void FUN_004fd30c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((ulong)*(byte *)(param_2 + 400) != 0xff) {
                    /* try { // try from 004fd348 to 004fd34f has its CatchHandler @ 004fd37c */
    (*(code *)(&PTR_FUN_00d1f8f8)[*(byte *)(param_2 + 400)])(auStack_30,param_2 + 8);
  }
  *(undefined1 *)(param_2 + 400) = 0xff;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004fd380  FUN_004fd380 =====

void FUN_004fd380(undefined8 param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  puVar1 = (undefined1 *)*param_2;
  if (0 < param_2[1] - (long)puVar1) {
    uVar2 = (param_2[1] - (long)puVar1) + 1;
    do {
      uVar2 = uVar2 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar2);
    puVar1 = (undefined1 *)*param_2;
  }
  if (puVar1 != (undefined1 *)0x0) {
    param_2[1] = puVar1;
    operator_delete(puVar1);
    return;
  }
  return;
}


// ===== 004fd3b8  FUN_004fd3b8 =====

void FUN_004fd3b8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = uVar1;
  param_2[2] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}


// ===== 004fd3dc  FUN_004fd3dc =====

void FUN_004fd3dc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_2 + 8) = 0;
  *(undefined1 *)(param_2 + 400) = 0xff;
  if ((ulong)*(byte *)(param_3 + 400) != 0xff) {
                    /* try { // try from 004fd42c to 004fd433 has its CatchHandler @ 004fd464 */
    (*(code *)(&PTR_FUN_00d1f990)[*(byte *)(param_3 + 400)])
              (auStack_40,(undefined1 *)(param_2 + 8),param_3 + 8);
    *(undefined1 *)(param_2 + 400) = *(undefined1 *)(param_3 + 400);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004fd468  FUN_004fd468 =====

void FUN_004fd468(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = uVar1;
  param_2[2] = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined1 *)(param_2 + 0x2d) = 0;
  if (*(char *)(param_3 + 0x2d) != '\0') {
    FUN_004fd6e4(param_2 + 3,param_3 + 3);
    param_2[0x2b] = 0;
    param_2[0x2c] = 0;
    param_2[0x2a] = 0;
    uVar1 = param_3[0x2a];
    param_2[0x2b] = param_3[0x2b];
    param_2[0x2a] = uVar1;
    param_2[0x2c] = param_3[0x2c];
    param_3[0x2b] = 0;
    param_3[0x2c] = 0;
    param_3[0x2a] = 0;
    *(undefined1 *)(param_2 + 0x2d) = 1;
  }
  return;
}


// ===== 004fd4ec  FUN_004fd4ec =====

void FUN_004fd4ec(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_3;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  *param_2 = uVar1;
  uVar2 = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)(param_2 + 2) = uVar2;
  *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)(param_3 + 2) = 0;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0;
  FUN_004fd6e4(param_2 + 8,param_3 + 8);
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x5a) = 0;
  *(undefined8 *)(param_2 + 0x56) = 0;
  uVar2 = *(undefined8 *)(param_3 + 0x56);
  *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_3 + 0x58);
  *(undefined8 *)(param_2 + 0x56) = uVar2;
  *(undefined8 *)(param_2 + 0x5a) = *(undefined8 *)(param_3 + 0x5a);
  *(undefined8 *)(param_3 + 0x58) = 0;
  *(undefined8 *)(param_3 + 0x5a) = 0;
  *(undefined8 *)(param_3 + 0x56) = 0;
  *(undefined8 *)(param_2 + 0x5c) = 0;
  *(undefined8 *)(param_2 + 0x5e) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  uVar2 = *(undefined8 *)(param_3 + 0x5c);
  *(undefined8 *)(param_2 + 0x5e) = *(undefined8 *)(param_3 + 0x5e);
  *(undefined8 *)(param_2 + 0x5c) = uVar2;
  *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_3 + 0x60);
  *(undefined8 *)(param_3 + 0x5c) = 0;
  *(undefined8 *)(param_3 + 0x5e) = 0;
  *(undefined8 *)(param_3 + 0x60) = 0;
  return;
}


// ===== 004fd588  FUN_004fd588 =====

void FUN_004fd588(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004fd6e4(param_2,param_3);
  return;
}


// ===== 004fd594  FUN_004fd594 =====

void FUN_004fd594(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *param_3;
  return;
}


// ===== 004fd5a0  FUN_004fd5a0 =====

void FUN_004fd5a0(undefined8 param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_2 = 0;
  param_2[0x28] = 0xff;
  if ((ulong)*(byte *)(param_3 + 0x28) != 0xff) {
                    /* try { // try from 004fd5ec to 004fd5fb has its CatchHandler @ 004fd64c */
    (*(code *)(&PTR_FUN_00d1fa20)[*(byte *)(param_3 + 0x28)])(auStack_40,param_2,param_3);
    param_2[0x28] = *(undefined1 *)(param_3 + 0x28);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  uVar2 = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = uVar2;
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_3 + 0x40);
  *(undefined8 *)(param_3 + 0x38) = 0;
  *(undefined8 *)(param_3 + 0x40) = 0;
  *(undefined8 *)(param_3 + 0x30) = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004fd650  FUN_004fd650 =====

void FUN_004fd650(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar2 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = uVar2;
  param_2[2] = param_3[2];
  uVar1 = *(undefined4 *)(param_3 + 3);
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 3) = uVar1;
  uVar2 = param_3[4];
  param_2[5] = param_3[5];
  param_2[4] = uVar2;
  param_2[6] = param_3[6];
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  return;
}


// ===== 004fd69c  FUN_004fd69c =====

void FUN_004fd69c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = uVar1;
  param_2[2] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}


// ===== 004fd6c0  FUN_004fd6c0 =====

void FUN_004fd6c0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = uVar1;
  param_2[2] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}


// ===== 004fd6e4  FUN_004fd6e4 =====

void FUN_004fd6e4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[2] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  param_1[5] = param_2[5];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0xff;
  if ((ulong)*(byte *)(param_2 + 0xd) != 0xff) {
                    /* try { // try from 004fd778 to 004fd77f has its CatchHandler @ 004fd8d4 */
    (*(code *)(&PTR_FUN_00d1f9e8)[*(byte *)(param_2 + 0xd)])(auStack_48,param_1 + 6,param_2 + 6);
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  uVar2 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar2;
  param_1[0x10] = param_2[0x10];
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  uVar2 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar2;
  param_1[0x13] = param_2[0x13];
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  uVar2 = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar2;
  param_1[0x16] = param_2[0x16];
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  uVar2 = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x17] = uVar2;
  param_1[0x19] = param_2[0x19];
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  uVar2 = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1a] = uVar2;
  param_1[0x1c] = param_2[0x1c];
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0xff;
  if ((ulong)*(byte *)(param_2 + 0x20) != 0xff) {
                    /* try { // try from 004fd850 to 004fd857 has its CatchHandler @ 004fd8d0 */
    (*(code *)(&PTR_FUN_00d1fa08)[*(byte *)(param_2 + 0x20)])
              (auStack_40,param_1 + 0x1d,param_2 + 0x1d);
    *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x21] = 0;
  uVar2 = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x21] = uVar2;
  param_1[0x23] = param_2[0x23];
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  uVar2 = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  param_1[0x24] = uVar2;
  param_1[0x26] = param_2[0x26];
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  param_2[0x24] = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004fd8d8  FUN_004fd8d8 =====

void FUN_004fd8d8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = uVar1;
  param_2[2] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}


// ===== 004fd8fc  FUN_004fd8fc =====

void FUN_004fd8fc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = uVar1;
  param_2[2] = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  uVar1 = param_3[3];
  param_2[4] = param_3[4];
  param_2[3] = uVar1;
  param_2[5] = param_3[5];
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[3] = 0;
  *(undefined2 *)(param_2 + 6) = *(undefined2 *)(param_3 + 6);
  return;
}


// ===== 004fd948  FUN_004fd948 =====

void FUN_004fd948(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_2[2] = param_3[2];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  uVar1 = param_3[3];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  param_2[4] = param_3[4];
  param_2[3] = uVar1;
  param_3[3] = 0;
  param_3[4] = 0;
  return;
}


// ===== 004fd970  FUN_004fd970 =====

void FUN_004fd970(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = uVar1;
  param_2[2] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}


// ===== 004fd994  FUN_004fd994 =====

void FUN_004fd994(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = uVar1;
  return;
}


// ===== 004fd9a0  FUN_004fd9a0 =====

void FUN_004fd9a0(void)

{
  return;
}


// ===== 004fd9a4  FUN_004fd9a4 =====

void FUN_004fd9a4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = uVar1;
  param_2[2] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}


// ===== 004fd9c8  FUN_004fd9c8 =====

void FUN_004fd9c8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = uVar1;
  param_2[2] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}


// ===== 004fd9ec  FUN_004fd9ec =====

void FUN_004fd9ec(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_3;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 8);
  *param_2 = uVar1;
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  *(undefined8 *)(param_2 + 8) = uVar3;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_3 + 8) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = uVar2;
  return;
}


// ===== 004fda20  FUN_004fda20 =====

void FUN_004fda20(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x228) != '\0') {
    puVar2 = *(undefined1 **)(param_1 + 0x210);
    lVar3 = *(long *)(param_1 + 0x218) - (long)puVar2;
    if (0 < lVar3) {
      uVar4 = lVar3 + 1;
      do {
        uVar4 = uVar4 - 1;
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      } while (1 < uVar4);
      puVar2 = *(undefined1 **)(param_1 + 0x210);
    }
    if (puVar2 != (undefined1 *)0x0) {
      *(undefined1 **)(param_1 + 0x218) = puVar2;
      operator_delete(puVar2);
    }
  }
  puVar2 = *(undefined1 **)(param_1 + 0x1f8);
  lVar3 = *(long *)(param_1 + 0x200) - (long)puVar2;
  if (0 < lVar3) {
    uVar4 = lVar3 + 1;
    do {
      uVar4 = uVar4 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (1 < uVar4);
    puVar2 = *(undefined1 **)(param_1 + 0x1f8);
  }
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x200) = puVar2;
    operator_delete(puVar2);
  }
  if ((ulong)*(byte *)(param_1 + 0x1e8) != 0xff) {
                    /* try { // try from 004fdad0 to 004fdad7 has its CatchHandler @ 004fdb6c */
    (*(code *)(&PTR_FUN_00d1f950)[*(byte *)(param_1 + 0x1e8)])(auStack_30,param_1 + 0x50);
  }
  puVar2 = *(undefined1 **)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x1e8) = 0xff;
  lVar3 = *(long *)(param_1 + 0x38) - (long)puVar2;
  if (0 < lVar3) {
    uVar4 = lVar3 + 1;
    do {
      uVar4 = uVar4 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (1 < uVar4);
    puVar2 = *(undefined1 **)(param_1 + 0x30);
  }
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x38) = puVar2;
    operator_delete(puVar2);
  }
  puVar2 = *(undefined1 **)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10) - (long)puVar2;
  if (0 < lVar3) {
    uVar4 = lVar3 + 1;
    do {
      uVar4 = uVar4 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (1 < uVar4);
    puVar2 = *(undefined1 **)(param_1 + 8);
  }
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x10) = puVar2;
    operator_delete(puVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004fdb70  FUN_004fdb70 =====

void FUN_004fdb70(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 unaff_x22;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = param_3[1] - *param_3;
  if (uVar1 != 0) {
    if (0xa0a0a0a0a0a0a0 < (ulong)(((long)uVar1 >> 3) * -0x505050505050505)) {
      if (*(long *)(lVar2 + 0x28) == lVar5) {
        uVar4 = FUN_004fde4c(param_1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004fdc04 with catch @ 004fdc74
                        */
        param_1[1] = unaff_x22;
        if (*(long *)(lVar2 + 0x28) == lVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_00d0fa5c(uVar4);
        }
      }
      goto LAB_004fdd04;
    }
    pvVar3 = operator_new(uVar1);
    *param_1 = pvVar3;
    param_1[1] = pvVar3;
    param_1[2] = (void *)((long)pvVar3 + ((long)uVar1 >> 3) * 8);
                    /* try { // try from 004fdc04 to 004fdc0f has its CatchHandler @ 004fdc74 */
    uVar4 = FUN_004fde60(param_1 + 2,*param_3,param_3[1],pvVar3);
    param_1[1] = uVar4;
  }
  *(short *)(param_1 + 3) = (short)param_3[3];
                    /* try { // try from 004fdc24 to 004fdc27 has its CatchHandler @ 004fdc80 */
  FUN_004fdd0c(param_1 + 4,param_3 + 4);
  *(undefined1 *)(param_1 + 0x21) = 1;
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return;
  }
LAB_004fdd04:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004fdd0c  FUN_004fdd0c =====

void FUN_004fdd0c(undefined1 *param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = 0;
  param_1[0x40] = 0;
  if (*(char *)(param_2 + 0x40) != '\0') {
    *param_1 = 0;
    param_1[0x38] = 0xff;
    if ((ulong)*(byte *)(param_2 + 0x38) != 0xff) {
                    /* try { // try from 004fdd68 to 004fdd77 has its CatchHandler @ 004fdde0 */
      (*(code *)(&PTR_FUN_00d1fa68)[*(byte *)(param_2 + 0x38)])(auStack_48,param_1,param_2);
      param_1[0x38] = *(undefined1 *)(param_2 + 0x38);
    }
    param_1[0x40] = 1;
  }
  param_1[0x48] = 0;
  param_1[0xc0] = 0;
  if (*(char *)(param_2 + 0xc0) != '\0') {
                    /* try { // try from 004fdda0 to 004fdda7 has its CatchHandler @ 004fde18 */
    FUN_004fe96c(param_1 + 0x48,param_2 + 0x48);
    param_1[0xc0] = 1;
  }
                    /* try { // try from 004fddb8 to 004fddbb has its CatchHandler @ 004fde1c */
  FUN_004ff7b4(param_1 + 200,param_2 + 200);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004fde4c  FUN_004fde4c =====

void FUN_004fde4c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_004e8250("vector");
}


// ===== 004fde60  FUN_004fde60 =====

long FUN_004fde60(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (param_2 != param_3) {
    lVar4 = 0;
    do {
      if (param_4 + lVar4 == 0) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 004fdf64 to 004fdf8b has its CatchHandler @ 004fdfc8 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        goto LAB_004fe024;
      }
      lVar1 = param_4 + lVar4;
      lVar2 = param_2 + lVar4;
      *(undefined1 *)(lVar1 + 400) = 0xff;
      *(undefined1 *)(lVar1 + 8) = 0;
      if ((ulong)*(byte *)(lVar2 + 400) != 0xff) {
                    /* try { // try from 004fdf08 to 004fdf0f has its CatchHandler @ 004fdf8c */
        (*(code *)(&PTR_FUN_00d1fa30)[*(byte *)(lVar2 + 400)])
                  (auStack_70,(undefined1 *)(lVar1 + 8),lVar2 + 8);
        *(undefined1 *)(lVar1 + 400) = *(undefined1 *)(lVar2 + 400);
      }
      lVar4 = lVar4 + 0x198;
    } while (param_2 + lVar4 != param_3);
    param_4 = param_4 + lVar4;
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return param_4;
  }
LAB_004fe024:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004fe02c  FUN_004fe02c =====

void FUN_004fe02c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = **(long **)(param_1 + 8);
  for (lVar3 = **(long **)(param_1 + 0x10); lVar3 != lVar2; lVar3 = lVar3 + -0x198) {
    if ((ulong)*(byte *)(lVar3 + -8) != 0xff) {
                    /* try { // try from 004fe09c to 004fe0a3 has its CatchHandler @ 004fe0d4 */
      (*(code *)(&PTR_FUN_00d1f8f8)[*(byte *)(lVar3 + -8)])(auStack_50,lVar3 + -400);
    }
    *(undefined1 *)(lVar3 + -8) = 0xff;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004fe0d8  FUN_004fe0d8 =====

void FUN_004fe0d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004fe27c(param_2,param_3);
  return;
}


// ===== 004fe0e4  FUN_004fe0e4 =====

void FUN_004fe0e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004fe4d4(param_2,param_3);
  return;
}


// ===== 004fe0f0  FUN_004fe0f0 =====

void FUN_004fe0f0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *param_3;
  return;
}


// ===== 004fe0fc  FUN_004fe0fc =====

void FUN_004fe0fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004ff1d4(param_2,param_3);
  return;
}


// ===== 004fe108  FUN_004fe108 =====

void FUN_004fe108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004ff554(param_2,param_3);
  return;
}


// ===== 004fe114  FUN_004fe114 =====

void FUN_004fe114(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 *puVar7;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar8 = param_3[1] - *param_3;
  if (uVar8 == 0) {
    return;
  }
  if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004f04ec(param_2);
  }
  puVar3 = (undefined1 *)operator_new(uVar8);
  *param_2 = puVar3;
  param_2[1] = puVar3;
  param_2[2] = puVar3 + uVar8;
  puVar6 = (undefined1 *)*param_3;
  puVar1 = (undefined1 *)param_3[1];
  puVar4 = puVar3;
  if (puVar6 != puVar1) {
    uVar8 = (long)puVar1 - (long)puVar6;
    puVar7 = puVar6;
    if ((0x1f < uVar8) && (0x1f < (ulong)((long)puVar3 - (long)puVar6))) {
      uVar9 = uVar8 & 0xffffffffffffffe0;
      puVar10 = (undefined8 *)(puVar3 + 0x10);
      puVar7 = puVar6 + uVar9;
      puVar3 = puVar3 + uVar9;
      puVar5 = (undefined8 *)(puVar6 + 0x10);
      uVar11 = uVar9;
      do {
        puVar2 = puVar5 + -1;
        uVar12 = puVar5[-2];
        uVar14 = puVar5[1];
        uVar13 = *puVar5;
        puVar5 = puVar5 + 4;
        uVar11 = uVar11 - 0x20;
        puVar10[-1] = *puVar2;
        puVar10[-2] = uVar12;
        puVar10[1] = uVar14;
        *puVar10 = uVar13;
        puVar10 = puVar10 + 4;
      } while (uVar11 != 0);
      puVar4 = puVar3;
      if (uVar8 == uVar9) goto LAB_004fe1d8;
    }
    do {
      puVar6 = puVar7 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = *puVar7;
      puVar3 = puVar4;
      puVar7 = puVar6;
    } while (puVar6 != puVar1);
  }
LAB_004fe1d8:
  param_2[1] = puVar4;
  return;
}


// ===== 004fe1f4  FUN_004fe1f4 =====

void FUN_004fe1f4(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 unaff_x22;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar1 = param_3[1] - *param_3;
  if (uVar1 != 0) {
    if ((long)uVar1 < 0) {
      FUN_004fef58(param_2);
                    /* catch() { ... } // from try @ 004fe248 with catch @ 004fe274 */
      param_2[1] = unaff_x22;
                    /* WARNING: Subroutine does not return */
      FUN_00d0fa5c();
    }
    pvVar2 = operator_new(uVar1);
    *param_2 = pvVar2;
    param_2[1] = pvVar2;
    param_2[2] = (void *)((long)pvVar2 + ((long)uVar1 >> 5) * 0x20);
                    /* try { // try from 004fe248 to 004fe253 has its CatchHandler @ 004fe274 */
    uVar3 = FUN_004fef6c(param_2 + 2,*param_3,param_3[1],pvVar2);
    param_2[1] = uVar3;
  }
  return;
}


// ===== 004fe27c  FUN_004fe27c =====

void FUN_004fe27c(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *param_1 = uVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  uVar11 = *(long *)(param_2 + 4) - *(long *)(param_2 + 2);
  if (uVar11 != 0) {
    if ((long)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004f04ec(param_1 + 2);
    }
    puVar4 = (undefined1 *)operator_new(uVar11);
    *(undefined1 **)(param_1 + 2) = puVar4;
    *(undefined1 **)(param_1 + 4) = puVar4;
    *(undefined1 **)(param_1 + 6) = puVar4 + uVar11;
    puVar8 = *(undefined1 **)(param_2 + 2);
    puVar1 = *(undefined1 **)(param_2 + 4);
    puVar7 = puVar4;
    if (puVar8 != puVar1) {
      uVar11 = (long)puVar1 - (long)puVar8;
      puVar10 = puVar8;
      if ((0x1f < uVar11) && (0x1f < (ulong)((long)puVar4 - (long)puVar8))) {
        uVar12 = uVar11 & 0xffffffffffffffe0;
        puVar13 = (undefined8 *)(puVar4 + 0x10);
        puVar10 = puVar8 + uVar12;
        puVar4 = puVar4 + uVar12;
        puVar9 = (undefined8 *)(puVar8 + 0x10);
        uVar14 = uVar12;
        do {
          puVar3 = puVar9 + -1;
          uVar6 = puVar9[-2];
          uVar16 = puVar9[1];
          uVar15 = *puVar9;
          puVar9 = puVar9 + 4;
          uVar14 = uVar14 - 0x20;
          puVar13[-1] = *puVar3;
          puVar13[-2] = uVar6;
          puVar13[1] = uVar16;
          *puVar13 = uVar15;
          puVar13 = puVar13 + 4;
        } while (uVar14 != 0);
        puVar7 = puVar4;
        if (uVar11 == uVar12) goto LAB_004fe354;
      }
      do {
        puVar8 = puVar10 + 1;
        puVar7 = puVar4 + 1;
        *puVar4 = *puVar10;
        puVar4 = puVar7;
        puVar10 = puVar8;
      } while (puVar8 != puVar1);
    }
LAB_004fe354:
    *(undefined1 **)(param_1 + 4) = puVar7;
  }
                    /* try { // try from 004fe360 to 004fe367 has its CatchHandler @ 004fe4a0 */
  FUN_004fe4d4(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  uVar11 = *(long *)(param_2 + 0x58) - *(long *)(param_2 + 0x56);
  if (uVar11 != 0) {
    if ((long)uVar11 < 0) {
                    /* try { // try from 004fe484 to 004fe48b has its CatchHandler @ 004fe4b8 */
      FUN_004fef58(param_1 + 0x56);
      goto LAB_004fe48c;
    }
                    /* try { // try from 004fe384 to 004fe38b has its CatchHandler @ 004fe4b8 */
    pvVar5 = operator_new(uVar11);
    *(void **)(param_1 + 0x56) = pvVar5;
    *(void **)(param_1 + 0x58) = pvVar5;
    *(void **)(param_1 + 0x5a) = (void *)((long)pvVar5 + ((long)uVar11 >> 5) * 0x20);
                    /* try { // try from 004fe3a8 to 004fe3af has its CatchHandler @ 004fe494 */
    uVar6 = FUN_004fef6c(param_1 + 0x5a,*(undefined8 *)(param_2 + 0x56),
                         *(undefined8 *)(param_2 + 0x58),pvVar5);
    *(undefined8 *)(param_1 + 0x58) = uVar6;
  }
  *(undefined8 *)(param_1 + 0x5e) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  uVar11 = *(long *)(param_2 + 0x5e) - *(long *)(param_2 + 0x5c);
  if (uVar11 == 0) {
    return;
  }
  if ((long)uVar11 < 0) {
LAB_004fe48c:
                    /* try { // try from 004fe48c to 004fe493 has its CatchHandler @ 004fe4a8 */
                    /* WARNING: Subroutine does not return */
    FUN_004f04ec(param_1 + 0x5c);
  }
                    /* try { // try from 004fe3cc to 004fe3d3 has its CatchHandler @ 004fe4a8 */
  puVar4 = (undefined1 *)operator_new(uVar11);
  *(undefined1 **)(param_1 + 0x5c) = puVar4;
  *(undefined1 **)(param_1 + 0x5e) = puVar4;
  *(undefined1 **)(param_1 + 0x60) = puVar4 + uVar11;
  puVar8 = *(undefined1 **)(param_2 + 0x5c);
  puVar1 = *(undefined1 **)(param_2 + 0x5e);
  puVar7 = puVar4;
  if (puVar8 != puVar1) {
    uVar11 = (long)puVar1 - (long)puVar8;
    puVar10 = puVar8;
    if ((0x1f < uVar11) && (0x1f < (ulong)((long)puVar4 - (long)puVar8))) {
      uVar12 = uVar11 & 0xffffffffffffffe0;
      puVar13 = (undefined8 *)(puVar4 + 0x10);
      puVar10 = puVar8 + uVar12;
      puVar4 = puVar4 + uVar12;
      puVar9 = (undefined8 *)(puVar8 + 0x10);
      uVar14 = uVar12;
      do {
        puVar3 = puVar9 + -1;
        uVar6 = puVar9[-2];
        uVar16 = puVar9[1];
        uVar15 = *puVar9;
        puVar9 = puVar9 + 4;
        uVar14 = uVar14 - 0x20;
        puVar13[-1] = *puVar3;
        puVar13[-2] = uVar6;
        puVar13[1] = uVar16;
        *puVar13 = uVar15;
        puVar13 = puVar13 + 4;
      } while (uVar14 != 0);
      puVar7 = puVar4;
      if (uVar11 == uVar12) goto LAB_004fe460;
    }
    do {
      puVar8 = puVar10 + 1;
      puVar7 = puVar4 + 1;
      *puVar4 = *puVar10;
      puVar4 = puVar7;
      puVar10 = puVar8;
    } while (puVar8 != puVar1);
  }
LAB_004fe460:
  *(undefined1 **)(param_1 + 0x5e) = puVar7;
  return;
}


// ===== 004fe4d4  FUN_004fe4d4 =====

void FUN_004fe4d4(undefined8 *param_1,long *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar11 = param_2[1] - *param_2;
  if (uVar11 != 0) {
    if ((long)uVar11 < 0) {
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(param_1);
      }
      goto LAB_004fe960;
    }
    puVar4 = (undefined1 *)operator_new(uVar11);
    *param_1 = puVar4;
    param_1[1] = puVar4;
    param_1[2] = puVar4 + uVar11;
    puVar8 = (undefined1 *)*param_2;
    puVar1 = (undefined1 *)param_2[1];
    puVar7 = puVar4;
    if (puVar8 != puVar1) {
      uVar11 = (long)puVar1 - (long)puVar8;
      puVar10 = puVar8;
      if ((0x1f < uVar11) && (0x1f < (ulong)((long)puVar4 - (long)puVar8))) {
        uVar12 = uVar11 & 0xffffffffffffffe0;
        puVar13 = (undefined8 *)(puVar4 + 0x10);
        puVar10 = puVar8 + uVar12;
        puVar4 = puVar4 + uVar12;
        puVar9 = (undefined8 *)(puVar8 + 0x10);
        uVar14 = uVar12;
        do {
          puVar3 = puVar9 + -1;
          uVar6 = puVar9[-2];
          uVar16 = puVar9[1];
          uVar15 = *puVar9;
          puVar9 = puVar9 + 4;
          uVar14 = uVar14 - 0x20;
          puVar13[-1] = *puVar3;
          puVar13[-2] = uVar6;
          puVar13[1] = uVar16;
          *puVar13 = uVar15;
          puVar13 = puVar13 + 4;
        } while (uVar14 != 0);
        puVar7 = puVar4;
        if (uVar11 == uVar12) goto LAB_004fe5b4;
      }
      do {
        puVar8 = puVar10 + 1;
        puVar7 = puVar4 + 1;
        *puVar4 = *puVar10;
        puVar4 = puVar7;
        puVar10 = puVar8;
      } while (puVar8 != puVar1);
    }
LAB_004fe5b4:
    param_1[1] = puVar7;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar11 = param_2[4] - param_2[3];
  if (uVar11 != 0) {
    if ((long)uVar11 < 0) {
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 004fe850 to 004fe857 has its CatchHandler @ 004fe964 */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(param_1 + 3);
      }
      goto LAB_004fe960;
    }
                    /* try { // try from 004fe5d4 to 004fe5db has its CatchHandler @ 004fe964 */
    puVar4 = (undefined1 *)operator_new(uVar11);
    param_1[3] = puVar4;
    param_1[4] = puVar4;
    param_1[5] = puVar4 + uVar11;
    puVar8 = (undefined1 *)param_2[3];
    puVar1 = (undefined1 *)param_2[4];
    puVar7 = puVar4;
    if (puVar8 != puVar1) {
      uVar11 = (long)puVar1 - (long)puVar8;
      puVar10 = puVar8;
      if ((0x1f < uVar11) && (0x1f < (ulong)((long)puVar4 - (long)puVar8))) {
        uVar12 = uVar11 & 0xffffffffffffffe0;
        puVar13 = (undefined8 *)(puVar4 + 0x10);
        puVar10 = puVar8 + uVar12;
        puVar4 = puVar4 + uVar12;
        puVar9 = (undefined8 *)(puVar8 + 0x10);
        uVar14 = uVar12;
        do {
          puVar3 = puVar9 + -1;
          uVar6 = puVar9[-2];
          uVar16 = puVar9[1];
          uVar15 = *puVar9;
          puVar9 = puVar9 + 4;
          uVar14 = uVar14 - 0x20;
          puVar13[-1] = *puVar3;
          puVar13[-2] = uVar6;
          puVar13[1] = uVar16;
          *puVar13 = uVar15;
          puVar13 = puVar13 + 4;
        } while (uVar14 != 0);
        puVar7 = puVar4;
        if (uVar11 == uVar12) goto LAB_004fe668;
      }
      do {
        puVar8 = puVar10 + 1;
        puVar7 = puVar4 + 1;
        *puVar4 = *puVar10;
        puVar4 = puVar7;
        puVar10 = puVar8;
      } while (puVar8 != puVar1);
    }
LAB_004fe668:
    param_1[4] = puVar7;
  }
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0xff;
  if ((ulong)*(byte *)(param_2 + 0xd) != 0xff) {
                    /* try { // try from 004fe698 to 004fe6a3 has its CatchHandler @ 004fe8cc */
    (*(code *)(&PTR_FUN_00d1fa68)[*(byte *)(param_2 + 0xd)])(auStack_88,param_1 + 6,param_2 + 6);
    *(char *)(param_1 + 0xd) = (char)param_2[0xd];
  }
                    /* try { // try from 004fe6b4 to 004fe6bb has its CatchHandler @ 004fe904 */
  FUN_004fe96c(param_1 + 0xe,param_2 + 0xe);
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0xff;
  if ((ulong)*(byte *)(param_2 + 0x20) != 0xff) {
                    /* try { // try from 004fe6e8 to 004fe6f3 has its CatchHandler @ 004fe894 */
    (*(code *)(&PTR_FUN_00d1fa88)[*(byte *)(param_2 + 0x20)])
              (auStack_78,param_1 + 0x1d,param_2 + 0x1d);
    *(char *)(param_1 + 0x20) = (char)param_2[0x20];
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x21] = 0;
  uVar11 = param_2[0x22] - param_2[0x21];
  if (uVar11 == 0) {
LAB_004fe748:
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x24] = 0;
    uVar11 = param_2[0x25] - param_2[0x24];
    if (uVar11 != 0) {
      if ((long)uVar11 < 0) goto LAB_004fe870;
                    /* try { // try from 004fe760 to 004fe767 has its CatchHandler @ 004fe90c */
      puVar4 = (undefined1 *)operator_new(uVar11);
      param_1[0x24] = puVar4;
      param_1[0x25] = puVar4;
      param_1[0x26] = puVar4 + uVar11;
      puVar8 = (undefined1 *)param_2[0x24];
      puVar1 = (undefined1 *)param_2[0x25];
      puVar7 = puVar4;
      if (puVar8 != puVar1) {
        uVar11 = (long)puVar1 - (long)puVar8;
        puVar10 = puVar8;
        if ((0x1f < uVar11) && (0x1f < (ulong)((long)puVar4 - (long)puVar8))) {
          uVar12 = uVar11 & 0xffffffffffffffe0;
          puVar13 = (undefined8 *)(puVar4 + 0x10);
          puVar10 = puVar8 + uVar12;
          puVar4 = puVar4 + uVar12;
          puVar9 = (undefined8 *)(puVar8 + 0x10);
          uVar14 = uVar12;
          do {
            puVar3 = puVar9 + -1;
            uVar6 = puVar9[-2];
            uVar16 = puVar9[1];
            uVar15 = *puVar9;
            puVar9 = puVar9 + 4;
            uVar14 = uVar14 - 0x20;
            puVar13[-1] = *puVar3;
            puVar13[-2] = uVar6;
            puVar13[1] = uVar16;
            *puVar13 = uVar15;
            puVar13 = puVar13 + 4;
          } while (uVar14 != 0);
          puVar7 = puVar4;
          if (uVar11 == uVar12) goto LAB_004fe7f4;
        }
        do {
          puVar8 = puVar10 + 1;
          puVar7 = puVar4 + 1;
          *puVar4 = *puVar10;
          puVar4 = puVar7;
          puVar10 = puVar8;
        } while (puVar8 != puVar1);
      }
LAB_004fe7f4:
      param_1[0x25] = puVar7;
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else {
    if (-1 < (long)uVar11) {
                    /* try { // try from 004fe718 to 004fe71f has its CatchHandler @ 004fe91c */
      pvVar5 = operator_new(uVar11);
      param_1[0x21] = pvVar5;
      param_1[0x22] = pvVar5;
      param_1[0x23] = (void *)((long)pvVar5 + ((long)uVar11 >> 5) * 0x20);
                    /* try { // try from 004fe73c to 004fe743 has its CatchHandler @ 004fe888 */
      uVar6 = FUN_004fef6c(param_1 + 0x23,param_2[0x21],param_2[0x22],pvVar5);
      param_1[0x22] = uVar6;
      goto LAB_004fe748;
    }
    if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_004fe960;
                    /* try { // try from 004fe868 to 004fe86f has its CatchHandler @ 004fe91c */
    FUN_004fef58(param_1 + 0x21);
LAB_004fe870:
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 004fe880 to 004fe887 has its CatchHandler @ 004fe90c */
                    /* WARNING: Subroutine does not return */
      FUN_004f04ec(param_1 + 0x24);
    }
  }
LAB_004fe960:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004fe96c  FUN_004fe96c =====

void FUN_004fe96c(undefined8 *param_1,long *param_2)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined2 *puVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  ulong uVar9;
  undefined2 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uVar14;
  undefined8 uVar15;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar9 = param_2[1] - *param_2;
  if (uVar9 == 0) {
LAB_004fea48:
    unaff_x21 = param_1 + 3;
    *unaff_x21 = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    unaff_x22 = (undefined8 *)(param_2[4] - param_2[3]);
    if (unaff_x22 != (undefined8 *)0x0) {
      if ((long)unaff_x22 < 0) goto LAB_004fed84;
                    /* try { // try from 004fea64 to 004fea6b has its CatchHandler @ 004fee24 */
      puVar3 = (undefined2 *)operator_new((ulong)unaff_x22);
      param_1[3] = puVar3;
      param_1[4] = puVar3;
      param_1[5] = puVar3 + ((long)unaff_x22 >> 1);
      puVar6 = (undefined2 *)param_2[3];
      puVar1 = (undefined2 *)param_2[4];
      puVar10 = puVar3;
      if (puVar6 != puVar1) {
        uVar9 = (long)puVar1 + (-2 - (long)puVar6);
        puVar8 = puVar6;
        if ((0x1d < uVar9) && (0x1f < (ulong)((long)puVar3 - (long)puVar6))) {
          puVar12 = (undefined8 *)(puVar3 + 8);
          uVar9 = (uVar9 >> 1) + 1;
          uVar11 = uVar9 & 0xfffffffffffffff0;
          puVar8 = puVar6 + uVar11;
          puVar3 = puVar3 + uVar11;
          puVar7 = (undefined8 *)(puVar6 + 8);
          uVar13 = uVar11;
          do {
            puVar2 = puVar7 + -1;
            uVar4 = puVar7[-2];
            uVar15 = puVar7[1];
            uVar14 = *puVar7;
            puVar7 = puVar7 + 4;
            uVar13 = uVar13 - 0x10;
            puVar12[-1] = *puVar2;
            puVar12[-2] = uVar4;
            puVar12[1] = uVar15;
            *puVar12 = uVar14;
            puVar12 = puVar12 + 4;
          } while (uVar13 != 0);
          puVar10 = puVar3;
          if (uVar9 == uVar11) goto LAB_004feb0c;
        }
        do {
          puVar6 = puVar8 + 1;
          puVar10 = puVar3 + 1;
          *puVar3 = *puVar8;
          puVar8 = puVar6;
          puVar3 = puVar10;
        } while (puVar6 != puVar1);
      }
LAB_004feb0c:
      param_1[4] = puVar10;
    }
    unaff_x22 = param_1 + 6;
    *unaff_x22 = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    unaff_x23 = (undefined8 *)(param_2[7] - param_2[6]);
    if (unaff_x23 != (undefined8 *)0x0) {
      if ((long)unaff_x23 < 0) goto LAB_004fed8c;
                    /* try { // try from 004feb2c to 004feb33 has its CatchHandler @ 004fee04 */
      puVar3 = (undefined2 *)operator_new((ulong)unaff_x23);
      param_1[6] = puVar3;
      param_1[7] = puVar3;
      param_1[8] = puVar3 + ((long)unaff_x23 >> 1);
      puVar6 = (undefined2 *)param_2[6];
      puVar1 = (undefined2 *)param_2[7];
      puVar10 = puVar3;
      if (puVar6 != puVar1) {
        uVar9 = (long)puVar1 + (-2 - (long)puVar6);
        puVar8 = puVar6;
        if ((0x1d < uVar9) && (0x1f < (ulong)((long)puVar3 - (long)puVar6))) {
          puVar12 = (undefined8 *)(puVar3 + 8);
          uVar9 = (uVar9 >> 1) + 1;
          uVar11 = uVar9 & 0xfffffffffffffff0;
          puVar8 = puVar6 + uVar11;
          puVar3 = puVar3 + uVar11;
          puVar7 = (undefined8 *)(puVar6 + 8);
          uVar13 = uVar11;
          do {
            puVar2 = puVar7 + -1;
            uVar4 = puVar7[-2];
            uVar15 = puVar7[1];
            uVar14 = *puVar7;
            puVar7 = puVar7 + 4;
            uVar13 = uVar13 - 0x10;
            puVar12[-1] = *puVar2;
            puVar12[-2] = uVar4;
            puVar12[1] = uVar15;
            *puVar12 = uVar14;
            puVar12 = puVar12 + 4;
          } while (uVar13 != 0);
          puVar10 = puVar3;
          if (uVar9 == uVar11) goto LAB_004febd4;
        }
        do {
          puVar6 = puVar8 + 1;
          puVar10 = puVar3 + 1;
          *puVar3 = *puVar8;
          puVar8 = puVar6;
          puVar3 = puVar10;
        } while (puVar6 != puVar1);
      }
LAB_004febd4:
      param_1[7] = puVar10;
    }
    unaff_x23 = param_1 + 9;
    *unaff_x23 = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    uVar9 = param_2[10] - param_2[9];
    if (uVar9 != 0) {
      if ((long)uVar9 < 0) goto LAB_004fed94;
                    /* try { // try from 004febf4 to 004febfb has its CatchHandler @ 004fede4 */
      puVar3 = (undefined2 *)operator_new(uVar9);
      param_1[9] = puVar3;
      param_1[10] = puVar3;
      param_1[0xb] = puVar3 + ((long)uVar9 >> 1);
      puVar6 = (undefined2 *)param_2[9];
      puVar1 = (undefined2 *)param_2[10];
      puVar10 = puVar3;
      if (puVar6 != puVar1) {
        uVar9 = (long)puVar1 + (-2 - (long)puVar6);
        puVar8 = puVar6;
        if ((0x1d < uVar9) && (0x1f < (ulong)((long)puVar3 - (long)puVar6))) {
          puVar12 = (undefined8 *)(puVar3 + 8);
          uVar9 = (uVar9 >> 1) + 1;
          uVar11 = uVar9 & 0xfffffffffffffff0;
          puVar8 = puVar6 + uVar11;
          puVar3 = puVar3 + uVar11;
          puVar7 = (undefined8 *)(puVar6 + 8);
          uVar13 = uVar11;
          do {
            puVar2 = puVar7 + -1;
            uVar4 = puVar7[-2];
            uVar15 = puVar7[1];
            uVar14 = *puVar7;
            puVar7 = puVar7 + 4;
            uVar13 = uVar13 - 0x10;
            puVar12[-1] = *puVar2;
            puVar12[-2] = uVar4;
            puVar12[1] = uVar15;
            *puVar12 = uVar14;
            puVar12 = puVar12 + 4;
          } while (uVar13 != 0);
          puVar10 = puVar3;
          if (uVar9 == uVar11) goto LAB_004fec9c;
        }
        do {
          puVar6 = puVar8 + 1;
          puVar10 = puVar3 + 1;
          *puVar3 = *puVar8;
          puVar8 = puVar6;
          puVar3 = puVar10;
        } while (puVar6 != puVar1);
      }
LAB_004fec9c:
      param_1[10] = puVar10;
    }
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    uVar9 = param_2[0xd] - param_2[0xc];
    if (uVar9 == 0) {
      return;
    }
    if (-1 < (long)uVar9) {
                    /* try { // try from 004fecbc to 004fecc3 has its CatchHandler @ 004feda0 */
      puVar3 = (undefined2 *)operator_new(uVar9);
      param_1[0xc] = puVar3;
      param_1[0xd] = puVar3;
      param_1[0xe] = puVar3 + ((long)uVar9 >> 1);
      puVar6 = (undefined2 *)param_2[0xc];
      puVar1 = (undefined2 *)param_2[0xd];
      puVar10 = puVar3;
      if (puVar6 != puVar1) {
        uVar9 = (long)puVar1 + (-2 - (long)puVar6);
        puVar8 = puVar6;
        if ((0x1d < uVar9) && (0x1f < (ulong)((long)puVar3 - (long)puVar6))) {
          puVar12 = (undefined8 *)(puVar3 + 8);
          uVar9 = (uVar9 >> 1) + 1;
          uVar11 = uVar9 & 0xfffffffffffffff0;
          puVar8 = puVar6 + uVar11;
          puVar3 = puVar3 + uVar11;
          puVar7 = (undefined8 *)(puVar6 + 8);
          uVar13 = uVar11;
          do {
            puVar2 = puVar7 + -1;
            uVar4 = puVar7[-2];
            uVar15 = puVar7[1];
            uVar14 = *puVar7;
            puVar7 = puVar7 + 4;
            uVar13 = uVar13 - 0x10;
            puVar12[-1] = *puVar2;
            puVar12[-2] = uVar4;
            puVar12[1] = uVar15;
            *puVar12 = uVar14;
            puVar12 = puVar12 + 4;
          } while (uVar13 != 0);
          puVar10 = puVar3;
          if (uVar9 == uVar11) goto LAB_004fed64;
        }
        do {
          puVar6 = puVar8 + 1;
          puVar10 = puVar3 + 1;
          *puVar3 = *puVar8;
          puVar8 = puVar6;
          puVar3 = puVar10;
        } while (puVar6 != puVar1);
      }
LAB_004fed64:
      param_1[0xd] = puVar10;
      return;
    }
  }
  else {
    if (-1 < (long)uVar9) {
      puVar3 = (undefined2 *)operator_new(uVar9);
      *param_1 = puVar3;
      param_1[1] = puVar3;
      param_1[2] = puVar3 + ((long)uVar9 >> 1);
      puVar6 = (undefined2 *)*param_2;
      puVar1 = (undefined2 *)param_2[1];
      puVar10 = puVar3;
      if (puVar6 != puVar1) {
        uVar9 = (long)puVar1 + (-2 - (long)puVar6);
        puVar8 = puVar6;
        if ((0x1d < uVar9) && (0x1f < (ulong)((long)puVar3 - (long)puVar6))) {
          puVar12 = (undefined8 *)(puVar3 + 8);
          uVar9 = (uVar9 >> 1) + 1;
          uVar11 = uVar9 & 0xfffffffffffffff0;
          puVar8 = puVar6 + uVar11;
          puVar3 = puVar3 + uVar11;
          puVar7 = (undefined8 *)(puVar6 + 8);
          uVar13 = uVar11;
          do {
            puVar2 = puVar7 + -1;
            uVar4 = puVar7[-2];
            uVar15 = puVar7[1];
            uVar14 = *puVar7;
            puVar7 = puVar7 + 4;
            uVar13 = uVar13 - 0x10;
            puVar12[-1] = *puVar2;
            puVar12[-2] = uVar4;
            puVar12[1] = uVar15;
            *puVar12 = uVar14;
            puVar12 = puVar12 + 4;
          } while (uVar13 != 0);
          puVar10 = puVar3;
          if (uVar9 == uVar11) goto LAB_004fea44;
        }
        do {
          puVar6 = puVar8 + 1;
          puVar10 = puVar3 + 1;
          *puVar3 = *puVar8;
          puVar8 = puVar6;
          puVar3 = puVar10;
        } while (puVar6 != puVar1);
      }
LAB_004fea44:
      param_1[1] = puVar10;
      goto LAB_004fea48;
    }
    FUN_004fee40(param_1);
LAB_004fed84:
                    /* try { // try from 004fed84 to 004fed8b has its CatchHandler @ 004fee24 */
    FUN_004f1214(unaff_x21);
LAB_004fed8c:
                    /* try { // try from 004fed8c to 004fed93 has its CatchHandler @ 004fee04 */
    FUN_004fee54(unaff_x22);
LAB_004fed94:
                    /* try { // try from 004fed94 to 004fed9b has its CatchHandler @ 004fede4 */
    FUN_004fee54(unaff_x23);
  }
                    /* try { // try from 004fed9c to 004fed9f has its CatchHandler @ 004feda0 */
  uVar4 = FUN_004f1364();
                    /* catch() { ... } // from try @ 004fecbc with catch @ 004feda0
                       catch() { ... } // from try @ 004fed9c with catch @ 004feda0 */
  pvVar5 = (void *)*unaff_x23;
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)*unaff_x22;
  }
  else {
    param_1[10] = pvVar5;
    operator_delete(pvVar5);
    pvVar5 = (void *)*unaff_x22;
  }
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)*unaff_x21;
  }
  else {
    param_1[7] = pvVar5;
    operator_delete(pvVar5);
    pvVar5 = (void *)*unaff_x21;
  }
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)*param_1;
  }
  else {
    param_1[4] = pvVar5;
    operator_delete(pvVar5);
    pvVar5 = (void *)*param_1;
  }
  if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00d0fa5c(uVar4);
  }
  param_1[1] = pvVar5;
  operator_delete(pvVar5);
                    /* WARNING: Subroutine does not return */
  FUN_00d0fa5c(uVar4);
}


// ===== 004fee40  FUN_004fee40 =====

void FUN_004fee40(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_004e8250("vector");
}


// ===== 004fee54  FUN_004fee54 =====

void FUN_004fee54(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_004e8250("vector");
}


// ===== 004fee68  FUN_004fee68 =====

void FUN_004fee68(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = uVar1;
  return;
}


// ===== 004fee74  FUN_004fee74 =====

void FUN_004fee74(void)

{
  return;
}


// ===== 004fee78  FUN_004fee78 =====

void FUN_004fee78(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 *puVar7;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar8 = param_3[1] - *param_3;
  if (uVar8 == 0) {
    return;
  }
  if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004f04ec(param_2);
  }
  puVar3 = (undefined1 *)operator_new(uVar8);
  *param_2 = puVar3;
  param_2[1] = puVar3;
  param_2[2] = puVar3 + uVar8;
  puVar6 = (undefined1 *)*param_3;
  puVar1 = (undefined1 *)param_3[1];
  puVar4 = puVar3;
  if (puVar6 != puVar1) {
    uVar8 = (long)puVar1 - (long)puVar6;
    puVar7 = puVar6;
    if ((0x1f < uVar8) && (0x1f < (ulong)((long)puVar3 - (long)puVar6))) {
      uVar9 = uVar8 & 0xffffffffffffffe0;
      puVar10 = (undefined8 *)(puVar3 + 0x10);
      puVar7 = puVar6 + uVar9;
      puVar3 = puVar3 + uVar9;
      puVar5 = (undefined8 *)(puVar6 + 0x10);
      uVar11 = uVar9;
      do {
        puVar2 = puVar5 + -1;
        uVar12 = puVar5[-2];
        uVar14 = puVar5[1];
        uVar13 = *puVar5;
        puVar5 = puVar5 + 4;
        uVar11 = uVar11 - 0x20;
        puVar10[-1] = *puVar2;
        puVar10[-2] = uVar12;
        puVar10[1] = uVar14;
        *puVar10 = uVar13;
        puVar10 = puVar10 + 4;
      } while (uVar11 != 0);
      puVar4 = puVar3;
      if (uVar8 == uVar9) goto LAB_004fef3c;
    }
    do {
      puVar6 = puVar7 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = *puVar7;
      puVar3 = puVar4;
      puVar7 = puVar6;
    } while (puVar6 != puVar1);
  }
LAB_004fef3c:
  param_2[1] = puVar4;
  return;
}


// ===== 004fef58  FUN_004fef58 =====

void FUN_004fef58(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_004e8250("vector");
}


// ===== 004fef6c  FUN_004fef6c =====

undefined2 *
FUN_004fef6c(undefined8 param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 *puVar10;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  if (param_2 != param_3) {
    do {
      if (param_4 == (undefined2 *)0x0) {
        if (*(long *)(lVar3 + 0x28) == lVar6) {
                    /* try { // try from 004ff0c4 to 004ff0ff has its CatchHandler @ 004ff104 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        goto LAB_004ff158;
      }
      uVar2 = *param_2;
      *(undefined8 *)(param_4 + 8) = 0;
      *(undefined8 *)(param_4 + 0xc) = 0;
      *param_4 = uVar2;
      *(undefined8 *)(param_4 + 4) = 0;
      uVar11 = *(long *)(param_2 + 8) - *(long *)(param_2 + 4);
      if (uVar11 != 0) {
        if ((long)uVar11 < 0) {
          if (*(long *)(lVar3 + 0x28) == lVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_004f04ec();
          }
          goto LAB_004ff158;
        }
                    /* try { // try from 004feff8 to 004fefff has its CatchHandler @ 004ff100 */
        puVar5 = (undefined1 *)operator_new(uVar11);
        *(undefined1 **)(param_4 + 4) = puVar5;
        *(undefined1 **)(param_4 + 8) = puVar5;
        *(undefined1 **)(param_4 + 0xc) = puVar5 + uVar11;
        puVar9 = *(undefined1 **)(param_2 + 4);
        puVar1 = *(undefined1 **)(param_2 + 8);
        puVar7 = puVar5;
        if (puVar9 != puVar1) {
          uVar11 = (long)puVar1 - (long)puVar9;
          puVar10 = puVar9;
          if ((0x1f < uVar11) && (0x1f < (ulong)((long)puVar5 - (long)puVar9))) {
            uVar12 = uVar11 & 0xffffffffffffffe0;
            puVar13 = (undefined8 *)(puVar5 + 0x10);
            puVar10 = puVar9 + uVar12;
            puVar5 = puVar5 + uVar12;
            puVar8 = (undefined8 *)(puVar9 + 0x10);
            uVar14 = uVar12;
            do {
              puVar4 = puVar8 + -1;
              uVar15 = puVar8[-2];
              uVar17 = puVar8[1];
              uVar16 = *puVar8;
              puVar8 = puVar8 + 4;
              uVar14 = uVar14 - 0x20;
              puVar13[-1] = *puVar4;
              puVar13[-2] = uVar15;
              puVar13[1] = uVar17;
              *puVar13 = uVar16;
              puVar13 = puVar13 + 4;
            } while (uVar14 != 0);
            puVar7 = puVar5;
            if (uVar11 == uVar12) goto LAB_004fefb8;
          }
          do {
            puVar9 = puVar10 + 1;
            puVar7 = puVar5 + 1;
            *puVar5 = *puVar10;
            puVar5 = puVar7;
            puVar10 = puVar9;
          } while (puVar9 != puVar1);
        }
LAB_004fefb8:
        *(undefined1 **)(param_4 + 8) = puVar7;
      }
      param_4 = param_4 + 0x10;
      param_2 = param_2 + 0x10;
    } while (param_2 != param_3);
  }
  if (*(long *)(lVar3 + 0x28) == lVar6) {
    return param_4;
  }
LAB_004ff158:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ff160  FUN_004ff160 =====

void FUN_004ff160(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = **(long **)(param_1 + 8);
  lVar3 = **(long **)(param_1 + 0x10);
  while (lVar1 = lVar3, lVar1 != lVar5) {
    puVar2 = *(undefined1 **)(lVar1 + -0x18);
    lVar3 = *(long *)(lVar1 + -0x10) - (long)puVar2;
    if (0 < lVar3) {
      uVar4 = lVar3 + 1;
      do {
        uVar4 = uVar4 - 1;
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      } while (1 < uVar4);
      puVar2 = *(undefined1 **)(lVar1 + -0x18);
    }
    lVar3 = lVar1 + -0x20;
    if (puVar2 != (undefined1 *)0x0) {
      *(undefined1 **)(lVar1 + -0x10) = puVar2;
      operator_delete(puVar2);
    }
  }
  return;
}


// ===== 004ff1d4  FUN_004ff1d4 =====

void FUN_004ff1d4(undefined1 *param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_48 [16];
  long local_38;
  undefined1 *puVar8;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  *param_1 = 0;
  param_1[0x28] = 0xff;
  if ((ulong)*(byte *)(param_2 + 0x28) != 0xff) {
                    /* try { // try from 004ff220 to 004ff22f has its CatchHandler @ 004ff324 */
    (*(code *)(&PTR_FUN_00d1faa0)[*(byte *)(param_2 + 0x28)])(auStack_48,param_1,param_2);
    param_1[0x28] = *(undefined1 *)(param_2 + 0x28);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  uVar9 = *(long *)(param_2 + 0x38) - *(long *)(param_2 + 0x30);
  if (uVar9 != 0) {
    if ((long)uVar9 < 0) {
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec();
      }
      goto LAB_004ff380;
    }
                    /* try { // try from 004ff254 to 004ff323 has its CatchHandler @ 004ff35c */
    puVar4 = (undefined1 *)operator_new(uVar9);
    *(undefined1 **)(param_1 + 0x30) = puVar4;
    *(undefined1 **)(param_1 + 0x38) = puVar4;
    *(undefined1 **)(param_1 + 0x40) = puVar4 + uVar9;
    puVar7 = *(undefined1 **)(param_2 + 0x30);
    puVar1 = *(undefined1 **)(param_2 + 0x38);
    puVar5 = puVar4;
    if (puVar7 != puVar1) {
      uVar9 = (long)puVar1 - (long)puVar7;
      puVar8 = puVar7;
      if ((0x1f < uVar9) && (0x1f < (ulong)((long)puVar4 - (long)puVar7))) {
        uVar10 = uVar9 & 0xffffffffffffffe0;
        puVar11 = (undefined8 *)(puVar4 + 0x10);
        puVar8 = puVar7 + uVar10;
        puVar4 = puVar4 + uVar10;
        puVar6 = (undefined8 *)(puVar7 + 0x10);
        uVar12 = uVar10;
        do {
          puVar3 = puVar6 + -1;
          uVar13 = puVar6[-2];
          uVar15 = puVar6[1];
          uVar14 = *puVar6;
          puVar6 = puVar6 + 4;
          uVar12 = uVar12 - 0x20;
          puVar11[-1] = *puVar3;
          puVar11[-2] = uVar13;
          puVar11[1] = uVar15;
          *puVar11 = uVar14;
          puVar11 = puVar11 + 4;
        } while (uVar12 != 0);
        puVar5 = puVar4;
        if (uVar9 == uVar10) goto LAB_004ff2e8;
      }
      do {
        puVar7 = puVar8 + 1;
        puVar5 = puVar4 + 1;
        *puVar4 = *puVar8;
        puVar4 = puVar5;
        puVar8 = puVar7;
      } while (puVar7 != puVar1);
    }
LAB_004ff2e8:
    *(undefined1 **)(param_1 + 0x38) = puVar5;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004ff380:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ff384  FUN_004ff384 =====

void FUN_004ff384(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 *puVar7;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar8 = param_3[1] - *param_3;
  if (uVar8 == 0) {
    return;
  }
  if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004f04ec(param_2);
  }
  puVar3 = (undefined1 *)operator_new(uVar8);
  *param_2 = puVar3;
  param_2[1] = puVar3;
  param_2[2] = puVar3 + uVar8;
  puVar6 = (undefined1 *)*param_3;
  puVar1 = (undefined1 *)param_3[1];
  puVar4 = puVar3;
  if (puVar6 != puVar1) {
    uVar8 = (long)puVar1 - (long)puVar6;
    puVar7 = puVar6;
    if ((0x1f < uVar8) && (0x1f < (ulong)((long)puVar3 - (long)puVar6))) {
      uVar9 = uVar8 & 0xffffffffffffffe0;
      puVar10 = (undefined8 *)(puVar3 + 0x10);
      puVar7 = puVar6 + uVar9;
      puVar3 = puVar3 + uVar9;
      puVar5 = (undefined8 *)(puVar6 + 0x10);
      uVar11 = uVar9;
      do {
        puVar2 = puVar5 + -1;
        uVar12 = puVar5[-2];
        uVar14 = puVar5[1];
        uVar13 = *puVar5;
        puVar5 = puVar5 + 4;
        uVar11 = uVar11 - 0x20;
        puVar10[-1] = *puVar2;
        puVar10[-2] = uVar12;
        puVar10[1] = uVar14;
        *puVar10 = uVar13;
        puVar10 = puVar10 + 4;
      } while (uVar11 != 0);
      puVar4 = puVar3;
      if (uVar8 == uVar9) goto LAB_004ff448;
    }
    do {
      puVar6 = puVar7 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = *puVar7;
      puVar3 = puVar4;
      puVar7 = puVar6;
    } while (puVar6 != puVar1);
  }
LAB_004ff448:
  param_2[1] = puVar4;
  return;
}


// ===== 004ff464  FUN_004ff464 =====

void FUN_004ff464(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 *puVar10;
  
  uVar4 = *param_3;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  lVar1 = *(long *)(param_3 + 8);
  lVar2 = *(long *)(param_3 + 0x10);
  *param_2 = uVar4;
  uVar11 = lVar2 - lVar1;
  if (uVar11 == 0) goto LAB_004ff538;
  if ((long)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004f04ec();
  }
  puVar6 = (undefined1 *)operator_new(uVar11);
  *(undefined1 **)(param_2 + 8) = puVar6;
  *(undefined1 **)(param_2 + 0x10) = puVar6;
  *(undefined1 **)(param_2 + 0x18) = puVar6 + uVar11;
  puVar9 = *(undefined1 **)(param_3 + 8);
  puVar3 = *(undefined1 **)(param_3 + 0x10);
  puVar7 = puVar6;
  if (puVar9 != puVar3) {
    uVar11 = (long)puVar3 - (long)puVar9;
    puVar10 = puVar9;
    if ((0x1f < uVar11) && (0x1f < (ulong)((long)puVar6 - (long)puVar9))) {
      uVar12 = uVar11 & 0xffffffffffffffe0;
      puVar13 = (undefined8 *)(puVar6 + 0x10);
      puVar10 = puVar9 + uVar12;
      puVar6 = puVar6 + uVar12;
      puVar8 = (undefined8 *)(puVar9 + 0x10);
      uVar14 = uVar12;
      do {
        puVar5 = puVar8 + -1;
        uVar15 = puVar8[-2];
        uVar17 = puVar8[1];
        uVar16 = *puVar8;
        puVar8 = puVar8 + 4;
        uVar14 = uVar14 - 0x20;
        puVar13[-1] = *puVar5;
        puVar13[-2] = uVar15;
        puVar13[1] = uVar17;
        *puVar13 = uVar16;
        puVar13 = puVar13 + 4;
      } while (uVar14 != 0);
      puVar7 = puVar6;
      if (uVar11 == uVar12) goto LAB_004ff534;
    }
    do {
      puVar9 = puVar10 + 1;
      puVar7 = puVar6 + 1;
      *puVar6 = *puVar10;
      puVar6 = puVar7;
      puVar10 = puVar9;
    } while (puVar9 != puVar3);
  }
LAB_004ff534:
  *(undefined1 **)(param_2 + 0x10) = puVar7;
LAB_004ff538:
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
  return;
}


// ===== 004ff554  FUN_004ff554 =====

void FUN_004ff554(undefined8 *param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 unaff_x22;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 *puVar10;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar11 = param_2[1] - *param_2;
  if (uVar11 == 0) goto LAB_004ff620;
  if ((long)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004f04ec(param_1);
  }
  puVar4 = (undefined1 *)operator_new(uVar11);
  *param_1 = puVar4;
  param_1[1] = puVar4;
  param_1[2] = puVar4 + uVar11;
  puVar9 = (undefined1 *)*param_2;
  puVar1 = (undefined1 *)param_2[1];
  puVar7 = puVar4;
  if (puVar9 != puVar1) {
    uVar11 = (long)puVar1 - (long)puVar9;
    puVar10 = puVar9;
    if ((0x1f < uVar11) && (0x1f < (ulong)((long)puVar4 - (long)puVar9))) {
      uVar12 = uVar11 & 0xffffffffffffffe0;
      puVar13 = (undefined8 *)(puVar4 + 0x10);
      puVar10 = puVar9 + uVar12;
      puVar4 = puVar4 + uVar12;
      puVar8 = (undefined8 *)(puVar9 + 0x10);
      uVar14 = uVar12;
      do {
        puVar2 = puVar8 + -1;
        uVar6 = puVar8[-2];
        uVar16 = puVar8[1];
        uVar15 = *puVar8;
        puVar8 = puVar8 + 4;
        uVar14 = uVar14 - 0x20;
        puVar13[-1] = *puVar2;
        puVar13[-2] = uVar6;
        puVar13[1] = uVar16;
        *puVar13 = uVar15;
        puVar13 = puVar13 + 4;
      } while (uVar14 != 0);
      puVar7 = puVar4;
      if (uVar11 == uVar12) goto LAB_004ff61c;
    }
    do {
      puVar9 = puVar10 + 1;
      puVar7 = puVar4 + 1;
      *puVar4 = *puVar10;
      puVar4 = puVar7;
      puVar10 = puVar9;
    } while (puVar9 != puVar1);
  }
LAB_004ff61c:
  param_1[1] = puVar7;
LAB_004ff620:
  lVar3 = param_2[3];
  param_1[6] = 0;
  *(int *)(param_1 + 3) = (int)lVar3;
  param_1[5] = 0;
  param_1[4] = 0;
  uVar11 = param_2[5] - param_2[4];
  if (uVar11 != 0) {
    if ((long)uVar11 < 0) {
                    /* try { // try from 004ff698 to 004ff69b has its CatchHandler @ 004ff6a8 */
      uVar6 = FUN_004fef58();
                    /* catch() { ... } // from try @ 004ff66c with catch @ 004ff69c */
      param_1[5] = unaff_x22;
      FUN_004e9f60(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_00d0fa5c(uVar6);
    }
                    /* try { // try from 004ff64c to 004ff653 has its CatchHandler @ 004ff6a8 */
    pvVar5 = operator_new(uVar11);
    param_1[4] = pvVar5;
    param_1[5] = pvVar5;
    param_1[6] = (void *)((long)pvVar5 + ((long)uVar11 >> 5) * 0x20);
                    /* try { // try from 004ff66c to 004ff677 has its CatchHandler @ 004ff69c */
    uVar6 = FUN_004fef6c(param_1 + 6,param_2[4],param_2[5],pvVar5);
    param_1[5] = uVar6;
  }
  return;
}


// ===== 004ff6bc  FUN_004ff6bc =====

void FUN_004ff6bc(undefined8 *param_1)

{
  void *pvVar1;
  
  if (*(char *)(param_1 + 0xf) != '\0') {
    pvVar1 = (void *)param_1[0xc];
    if (pvVar1 != (void *)0x0) {
      param_1[0xd] = pvVar1;
      operator_delete(pvVar1);
    }
    pvVar1 = (void *)param_1[9];
    if (pvVar1 != (void *)0x0) {
      param_1[10] = pvVar1;
      operator_delete(pvVar1);
    }
    pvVar1 = (void *)param_1[6];
    if (pvVar1 != (void *)0x0) {
      param_1[7] = pvVar1;
      operator_delete(pvVar1);
    }
    pvVar1 = (void *)param_1[3];
    if (pvVar1 != (void *)0x0) {
      param_1[4] = pvVar1;
      operator_delete(pvVar1);
    }
    pvVar1 = (void *)*param_1;
    if (pvVar1 != (void *)0x0) {
      param_1[1] = pvVar1;
      operator_delete(pvVar1);
      return;
    }
  }
  return;
}


// ===== 004ff738  FUN_004ff738 =====

void FUN_004ff738(long param_1)

{
  long lVar1;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x40) != '\0') {
    if ((ulong)*(byte *)(param_1 + 0x38) != 0xff) {
                    /* try { // try from 004ff778 to 004ff783 has its CatchHandler @ 004ff7b0 */
      (*(code *)(&PTR_FUN_00d1f9c8)[*(byte *)(param_1 + 0x38)])(auStack_30,param_1);
    }
    *(undefined1 *)(param_1 + 0x38) = 0xff;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ff7b4  FUN_004ff7b4 =====

void FUN_004ff7b4(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  if (*(char *)(param_2 + 0x18) != '\0') {
                    /* try { // try from 004ff7d4 to 004ff7db has its CatchHandler @ 004ff7ec */
    FUN_004ff870();
  }
  return;
}


// ===== 004ff870  FUN_004ff870 =====

void FUN_004ff870(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 unaff_x22;
  
  if (*(char *)(param_1 + 3) != '\0') {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x167,
               "!has_value()","__construct called for engaged __optional_storage");
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = param_2[1] - *param_2;
  if (uVar1 != 0) {
    if ((long)uVar1 < 0) {
      FUN_004fef58(param_1);
                    /* catch() { ... } // from try @ 004ff8cc with catch @ 004ff928 */
      param_1[1] = unaff_x22;
                    /* WARNING: Subroutine does not return */
      FUN_00d0fa5c();
    }
    pvVar2 = operator_new(uVar1);
    *param_1 = pvVar2;
    param_1[1] = pvVar2;
    param_1[2] = (void *)((long)pvVar2 + ((long)uVar1 >> 5) * 0x20);
                    /* try { // try from 004ff8cc to 004ff8d7 has its CatchHandler @ 004ff928 */
    uVar3 = FUN_004fef6c(param_1 + 2,*param_2,param_2[1],pvVar2);
    param_1[1] = uVar3;
  }
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}


// ===== 004ff930  FUN_004ff930 =====

long FUN_004ff930(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (param_2 != param_3) {
    do {
                    /* try { // try from 004ff974 to 004ff97f has its CatchHandler @ 004ff9c0 */
      FUN_004ffad0(param_4,param_2);
      param_4 = param_4 + 0x148;
      param_2 = param_2 + 0x148;
    } while (param_2 != param_3);
  }
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}


// ===== 004ffa1c  FUN_004ffa1c =====

void FUN_004ffa1c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = **(long **)(param_1 + 8);
  lVar3 = **(long **)(param_1 + 0x10);
  while (lVar2 = lVar3, lVar2 != lVar4) {
    lVar3 = lVar2 + -0x148;
    if (*(char *)(lVar2 + -8) != '\0') {
      if ((ulong)*(byte *)(lVar2 + -0x10) != 0xff) {
                    /* try { // try from 004ffa90 to 004ffa9b has its CatchHandler @ 004ffacc */
        (*(code *)(&PTR_FUN_00d1f940)[*(byte *)(lVar2 + -0x10)])(auStack_50,lVar3);
      }
      *(undefined1 *)(lVar2 + -0x10) = 0xff;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004ffad0  FUN_004ffad0 =====

undefined1 * FUN_004ffad0(undefined1 *param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == (undefined1 *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                 ,0x23,"__location != nullptr","null pointer given to construct_at");
    }
  }
  else {
    *param_1 = 0;
    param_1[0x140] = 0;
    if (*(char *)(param_2 + 0x140) != '\0') {
      *param_1 = 0;
      param_1[0x138] = 0xff;
      if ((ulong)*(byte *)(param_2 + 0x138) != 0xff) {
                    /* try { // try from 004ffb30 to 004ffb3f has its CatchHandler @ 004ffbb0 */
        (*(code *)(&PTR_FUN_00d1fab0)[*(byte *)(param_2 + 0x138)])(auStack_48,param_1,param_2);
        param_1[0x138] = *(undefined1 *)(param_2 + 0x138);
      }
      param_1[0x140] = 1;
    }
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ffc00  FUN_004ffc00 =====

void FUN_004ffc00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004fe4d4(param_2,param_3);
  return;
}


// ===== 004ffc0c  FUN_004ffc0c =====

void FUN_004ffc0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004ffc18(param_2,param_3);
  return;
}


// ===== 004ffc18  FUN_004ffc18 =====

void FUN_004ffc18(undefined8 *param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined4 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 *puVar10;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar15 = param_2[1] - *param_2;
  if (uVar15 != 0) {
    if ((long)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004f04ec(param_1);
    }
    puVar4 = (undefined1 *)operator_new(uVar15);
    *param_1 = puVar4;
    param_1[1] = puVar4;
    param_1[2] = puVar4 + uVar15;
    puVar11 = (undefined1 *)*param_2;
    puVar1 = (undefined1 *)param_2[1];
    puVar7 = puVar4;
    if (puVar11 != puVar1) {
      uVar15 = (long)puVar1 - (long)puVar11;
      puVar13 = puVar11;
      if ((0x1f < uVar15) && (0x1f < (ulong)((long)puVar4 - (long)puVar11))) {
        uVar16 = uVar15 & 0xffffffffffffffe0;
        puVar17 = (undefined8 *)(puVar4 + 0x10);
        puVar13 = puVar11 + uVar16;
        puVar4 = puVar4 + uVar16;
        puVar8 = (undefined8 *)(puVar11 + 0x10);
        uVar18 = uVar16;
        do {
          puVar12 = puVar8 + -1;
          uVar6 = puVar8[-2];
          uVar20 = puVar8[1];
          uVar19 = *puVar8;
          puVar8 = puVar8 + 4;
          uVar18 = uVar18 - 0x20;
          puVar17[-1] = *puVar12;
          puVar17[-2] = uVar6;
          puVar17[1] = uVar20;
          *puVar17 = uVar19;
          puVar17 = puVar17 + 4;
        } while (uVar18 != 0);
        puVar7 = puVar4;
        if (uVar15 == uVar16) goto LAB_004ffcdc;
      }
      do {
        puVar11 = puVar13 + 1;
        puVar7 = puVar4 + 1;
        *puVar4 = *puVar13;
        puVar4 = puVar7;
        puVar13 = puVar11;
      } while (puVar11 != puVar1);
    }
LAB_004ffcdc:
    param_1[1] = puVar7;
  }
  puVar17 = param_1 + 3;
  *puVar17 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar15 = param_2[4] - param_2[3];
  if (uVar15 != 0) {
    if ((long)uVar15 < 0) {
                    /* try { // try from 004ffe74 to 004ffe7b has its CatchHandler @ 004ffe90 */
                    /* WARNING: Subroutine does not return */
      FUN_004f04ec(puVar17);
    }
                    /* try { // try from 004ffcfc to 004ffd03 has its CatchHandler @ 004ffe90 */
    puVar4 = (undefined1 *)operator_new(uVar15);
    param_1[3] = puVar4;
    param_1[4] = puVar4;
    param_1[5] = puVar4 + uVar15;
    puVar11 = (undefined1 *)param_2[3];
    puVar1 = (undefined1 *)param_2[4];
    puVar7 = puVar4;
    if (puVar11 != puVar1) {
      uVar15 = (long)puVar1 - (long)puVar11;
      puVar13 = puVar11;
      if ((0x1f < uVar15) && (0x1f < (ulong)((long)puVar4 - (long)puVar11))) {
        uVar16 = uVar15 & 0xffffffffffffffe0;
        puVar8 = (undefined8 *)(puVar4 + 0x10);
        puVar13 = puVar11 + uVar16;
        puVar4 = puVar4 + uVar16;
        puVar12 = (undefined8 *)(puVar11 + 0x10);
        uVar18 = uVar16;
        do {
          puVar3 = puVar12 + -1;
          uVar6 = puVar12[-2];
          uVar20 = puVar12[1];
          uVar19 = *puVar12;
          puVar12 = puVar12 + 4;
          uVar18 = uVar18 - 0x20;
          puVar8[-1] = *puVar3;
          puVar8[-2] = uVar6;
          puVar8[1] = uVar20;
          *puVar8 = uVar19;
          puVar8 = puVar8 + 4;
        } while (uVar18 != 0);
        puVar7 = puVar4;
        if (uVar15 == uVar16) goto LAB_004ffd90;
      }
      do {
        puVar11 = puVar13 + 1;
        puVar7 = puVar4 + 1;
        *puVar4 = *puVar13;
        puVar4 = puVar7;
        puVar13 = puVar11;
      } while (puVar11 != puVar1);
    }
LAB_004ffd90:
    param_1[4] = puVar7;
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar15 = param_2[7] - param_2[6];
  if (uVar15 == 0) {
    return;
  }
  if ((long)uVar15 < 0) {
                    /* try { // try from 004ffe7c to 004ffe7f has its CatchHandler @ 004ffe80 */
    uVar6 = FUN_004ffea4();
                    /* catch() { ... } // from try @ 004ffdb0 with catch @ 004ffe80
                       catch() { ... } // from try @ 004ffe7c with catch @ 004ffe80 */
    FUN_004e9f60(puVar17);
    FUN_004fc450(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_00d0fa5c(uVar6);
  }
                    /* try { // try from 004ffdb0 to 004ffdb7 has its CatchHandler @ 004ffe80 */
  puVar5 = (undefined4 *)operator_new(uVar15);
  param_1[6] = puVar5;
  param_1[7] = puVar5;
  param_1[8] = puVar5 + ((long)uVar15 >> 2);
  puVar10 = (undefined4 *)param_2[6];
  puVar2 = (undefined4 *)param_2[7];
  puVar14 = puVar5;
  if (puVar10 != puVar2) {
    uVar15 = (long)puVar2 + (-4 - (long)puVar10);
    puVar9 = puVar10;
    if ((0x1b < uVar15) && (0x1f < (ulong)((long)puVar5 - (long)puVar10))) {
      puVar17 = (undefined8 *)(puVar5 + 4);
      uVar15 = (uVar15 >> 2) + 1;
      uVar16 = uVar15 & 0x7ffffffffffffff8;
      puVar9 = puVar10 + uVar16;
      puVar5 = puVar5 + uVar16;
      puVar8 = (undefined8 *)(puVar10 + 4);
      uVar18 = uVar16;
      do {
        puVar12 = puVar8 + -1;
        uVar6 = puVar8[-2];
        uVar20 = puVar8[1];
        uVar19 = *puVar8;
        puVar8 = puVar8 + 4;
        uVar18 = uVar18 - 8;
        puVar17[-1] = *puVar12;
        puVar17[-2] = uVar6;
        puVar17[1] = uVar20;
        *puVar17 = uVar19;
        puVar17 = puVar17 + 4;
      } while (uVar18 != 0);
      puVar14 = puVar5;
      if (uVar15 == uVar16) goto LAB_004ffe58;
    }
    do {
      puVar10 = puVar9 + 1;
      puVar14 = puVar5 + 1;
      *puVar5 = *puVar9;
      puVar9 = puVar10;
      puVar5 = puVar14;
    } while (puVar10 != puVar2);
  }
LAB_004ffe58:
  param_1[7] = puVar14;
  return;
}


// ===== 004ffea4  FUN_004ffea4 =====

void FUN_004ffea4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_004e8250("vector");
}


// ===== 004ffeb8  FUN_004ffeb8 =====

void FUN_004ffeb8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_004e8250("vector");
}


// ===== 004ffecc  FUN_004ffecc =====

void FUN_004ffecc(undefined8 *param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar8 = param_2[1] - *param_2;
  if (uVar8 != 0) {
    if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004f04ec(param_1);
    }
    puVar3 = (undefined1 *)operator_new(uVar8);
    *param_1 = puVar3;
    param_1[1] = puVar3;
    param_1[2] = puVar3 + uVar8;
    puVar5 = (undefined1 *)*param_2;
    puVar1 = (undefined1 *)param_2[1];
    puVar4 = puVar3;
    if (puVar5 != puVar1) {
      uVar8 = (long)puVar1 - (long)puVar5;
      puVar7 = puVar5;
      if ((0x1f < uVar8) && (0x1f < (ulong)((long)puVar3 - (long)puVar5))) {
        uVar9 = uVar8 & 0xffffffffffffffe0;
        puVar10 = (undefined8 *)(puVar3 + 0x10);
        puVar7 = puVar5 + uVar9;
        puVar3 = puVar3 + uVar9;
        puVar6 = (undefined8 *)(puVar5 + 0x10);
        uVar11 = uVar9;
        do {
          puVar2 = puVar6 + -1;
          uVar12 = puVar6[-2];
          uVar14 = puVar6[1];
          uVar13 = *puVar6;
          puVar6 = puVar6 + 4;
          uVar11 = uVar11 - 0x20;
          puVar10[-1] = *puVar2;
          puVar10[-2] = uVar12;
          puVar10[1] = uVar14;
          *puVar10 = uVar13;
          puVar10 = puVar10 + 4;
        } while (uVar11 != 0);
        puVar4 = puVar3;
        if (uVar8 == uVar9) goto LAB_004fff90;
      }
      do {
        puVar5 = puVar7 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = *puVar7;
        puVar3 = puVar4;
        puVar7 = puVar5;
      } while (puVar5 != puVar1);
    }
LAB_004fff90:
    param_1[1] = puVar4;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar8 = param_2[4] - param_2[3];
  if (uVar8 == 0) {
    return;
  }
  if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00500060 to 00500063 has its CatchHandler @ 00500064 */
    FUN_004f04ec();
  }
                    /* try { // try from 004fffb0 to 004fffb7 has its CatchHandler @ 00500064 */
  puVar3 = (undefined1 *)operator_new(uVar8);
  param_1[3] = puVar3;
  param_1[4] = puVar3;
  param_1[5] = puVar3 + uVar8;
  puVar5 = (undefined1 *)param_2[3];
  puVar1 = (undefined1 *)param_2[4];
  puVar4 = puVar3;
  if (puVar5 != puVar1) {
    uVar8 = (long)puVar1 - (long)puVar5;
    puVar7 = puVar5;
    if ((0x1f < uVar8) && (0x1f < (ulong)((long)puVar3 - (long)puVar5))) {
      uVar9 = uVar8 & 0xffffffffffffffe0;
      puVar10 = (undefined8 *)(puVar3 + 0x10);
      puVar7 = puVar5 + uVar9;
      puVar3 = puVar3 + uVar9;
      puVar6 = (undefined8 *)(puVar5 + 0x10);
      uVar11 = uVar9;
      do {
        puVar2 = puVar6 + -1;
        uVar12 = puVar6[-2];
        uVar14 = puVar6[1];
        uVar13 = *puVar6;
        puVar6 = puVar6 + 4;
        uVar11 = uVar11 - 0x20;
        puVar10[-1] = *puVar2;
        puVar10[-2] = uVar12;
        puVar10[1] = uVar14;
        *puVar10 = uVar13;
        puVar10 = puVar10 + 4;
      } while (uVar11 != 0);
      puVar4 = puVar3;
      if (uVar8 == uVar9) goto LAB_00500044;
    }
    do {
      puVar5 = puVar7 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = *puVar7;
      puVar3 = puVar4;
      puVar7 = puVar5;
    } while (puVar5 != puVar1);
  }
LAB_00500044:
  param_1[4] = puVar4;
  return;
}


// ===== 00500078  FUN_00500078 =====

void FUN_00500078(undefined8 *param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar8 = param_2[1] - *param_2;
  if (uVar8 != 0) {
    if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004f04ec(param_1);
    }
    puVar3 = (undefined1 *)operator_new(uVar8);
    *param_1 = puVar3;
    param_1[1] = puVar3;
    param_1[2] = puVar3 + uVar8;
    puVar5 = (undefined1 *)*param_2;
    puVar1 = (undefined1 *)param_2[1];
    puVar4 = puVar3;
    if (puVar5 != puVar1) {
      uVar8 = (long)puVar1 - (long)puVar5;
      puVar7 = puVar5;
      if ((0x1f < uVar8) && (0x1f < (ulong)((long)puVar3 - (long)puVar5))) {
        uVar9 = uVar8 & 0xffffffffffffffe0;
        puVar10 = (undefined8 *)(puVar3 + 0x10);
        puVar7 = puVar5 + uVar9;
        puVar3 = puVar3 + uVar9;
        puVar6 = (undefined8 *)(puVar5 + 0x10);
        uVar11 = uVar9;
        do {
          puVar2 = puVar6 + -1;
          uVar12 = puVar6[-2];
          uVar14 = puVar6[1];
          uVar13 = *puVar6;
          puVar6 = puVar6 + 4;
          uVar11 = uVar11 - 0x20;
          puVar10[-1] = *puVar2;
          puVar10[-2] = uVar12;
          puVar10[1] = uVar14;
          *puVar10 = uVar13;
          puVar10 = puVar10 + 4;
        } while (uVar11 != 0);
        puVar4 = puVar3;
        if (uVar8 == uVar9) goto LAB_0050013c;
      }
      do {
        puVar5 = puVar7 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = *puVar7;
        puVar3 = puVar4;
        puVar7 = puVar5;
      } while (puVar5 != puVar1);
    }
LAB_0050013c:
    param_1[1] = puVar4;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar8 = param_2[4] - param_2[3];
  if (uVar8 == 0) {
    return;
  }
  if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0050020c to 0050020f has its CatchHandler @ 00500210 */
    FUN_004f04ec();
  }
                    /* try { // try from 0050015c to 00500163 has its CatchHandler @ 00500210 */
  puVar3 = (undefined1 *)operator_new(uVar8);
  param_1[3] = puVar3;
  param_1[4] = puVar3;
  param_1[5] = puVar3 + uVar8;
  puVar5 = (undefined1 *)param_2[3];
  puVar1 = (undefined1 *)param_2[4];
  puVar4 = puVar3;
  if (puVar5 != puVar1) {
    uVar8 = (long)puVar1 - (long)puVar5;
    puVar7 = puVar5;
    if ((0x1f < uVar8) && (0x1f < (ulong)((long)puVar3 - (long)puVar5))) {
      uVar9 = uVar8 & 0xffffffffffffffe0;
      puVar10 = (undefined8 *)(puVar3 + 0x10);
      puVar7 = puVar5 + uVar9;
      puVar3 = puVar3 + uVar9;
      puVar6 = (undefined8 *)(puVar5 + 0x10);
      uVar11 = uVar9;
      do {
        puVar2 = puVar6 + -1;
        uVar12 = puVar6[-2];
        uVar14 = puVar6[1];
        uVar13 = *puVar6;
        puVar6 = puVar6 + 4;
        uVar11 = uVar11 - 0x20;
        puVar10[-1] = *puVar2;
        puVar10[-2] = uVar12;
        puVar10[1] = uVar14;
        *puVar10 = uVar13;
        puVar10 = puVar10 + 4;
      } while (uVar11 != 0);
      puVar4 = puVar3;
      if (uVar8 == uVar9) goto LAB_005001f0;
    }
    do {
      puVar5 = puVar7 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = *puVar7;
      puVar3 = puVar4;
      puVar7 = puVar5;
    } while (puVar5 != puVar1);
  }
LAB_005001f0:
  param_1[4] = puVar4;
  return;
}


// ===== 00500224  FUN_00500224 =====

void FUN_00500224(undefined2 *param_1,undefined2 *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined2 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 *puVar10;
  
  uVar4 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar1 = *(long *)(param_2 + 4);
  lVar2 = *(long *)(param_2 + 8);
  *param_1 = uVar4;
  uVar11 = lVar2 - lVar1;
  if (uVar11 == 0) goto LAB_005002f8;
  if ((long)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004f04ec(param_1 + 4);
  }
  puVar6 = (undefined1 *)operator_new(uVar11);
  *(undefined1 **)(param_1 + 4) = puVar6;
  *(undefined1 **)(param_1 + 8) = puVar6;
  *(undefined1 **)(param_1 + 0xc) = puVar6 + uVar11;
  puVar9 = *(undefined1 **)(param_2 + 4);
  puVar3 = *(undefined1 **)(param_2 + 8);
  puVar7 = puVar6;
  if (puVar9 != puVar3) {
    uVar11 = (long)puVar3 - (long)puVar9;
    puVar10 = puVar9;
    if ((0x1f < uVar11) && (0x1f < (ulong)((long)puVar6 - (long)puVar9))) {
      uVar12 = uVar11 & 0xffffffffffffffe0;
      puVar13 = (undefined8 *)(puVar6 + 0x10);
      puVar10 = puVar9 + uVar12;
      puVar6 = puVar6 + uVar12;
      puVar8 = (undefined8 *)(puVar9 + 0x10);
      uVar14 = uVar12;
      do {
        puVar5 = puVar8 + -1;
        uVar15 = puVar8[-2];
        uVar17 = puVar8[1];
        uVar16 = *puVar8;
        puVar8 = puVar8 + 4;
        uVar14 = uVar14 - 0x20;
        puVar13[-1] = *puVar5;
        puVar13[-2] = uVar15;
        puVar13[1] = uVar17;
        *puVar13 = uVar16;
        puVar13 = puVar13 + 4;
      } while (uVar14 != 0);
      puVar7 = puVar6;
      if (uVar11 == uVar12) goto LAB_005002f4;
    }
    do {
      puVar9 = puVar10 + 1;
      puVar7 = puVar6 + 1;
      *puVar6 = *puVar10;
      puVar6 = puVar7;
      puVar10 = puVar9;
    } while (puVar9 != puVar3);
  }
LAB_005002f4:
  *(undefined1 **)(param_1 + 8) = puVar7;
LAB_005002f8:
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
                    /* try { // try from 00500308 to 0050030b has its CatchHandler @ 00500334 */
  FUN_00500348(param_1 + 0x14,param_2 + 0x14);
  uVar16 = *(undefined8 *)(param_2 + 0x24);
  uVar15 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x24) = uVar16;
  *(undefined8 *)(param_1 + 0x20) = uVar15;
  return;
}


// ===== 00500348  FUN_00500348 =====

void FUN_00500348(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  
  param_1[2] = 0;
  puVar3 = param_1 + 1;
  *puVar3 = 0;
  *param_1 = puVar3;
  plVar4 = (long *)*param_2;
  while( true ) {
    if (plVar4 == param_2 + 1) {
      return;
    }
                    /* try { // try from 00500390 to 0050039f has its CatchHandler @ 0050040c */
    FUN_00500428(param_1,puVar3,plVar4 + 4,plVar4 + 4);
    if (plVar4 == (long *)0x0) break;
    plVar1 = (long *)plVar4[1];
    plVar5 = plVar4;
    if ((long *)plVar4[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar5[2];
        bVar2 = (long *)*plVar4 != plVar5;
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
                    /* try { // try from 005003e4 to 0050040b has its CatchHandler @ 00500424 */
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
             "__x != nullptr","node shouldn\'t be null");
}


// ===== 00500428  FUN_00500428 =====

undefined8 * FUN_00500428(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)FUN_0050052c(param_1,param_2,&local_50,auStack_58,param_3);
  puVar5 = (undefined8 *)*puVar2;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(0x58);
    *(undefined4 *)(puVar5 + 4) = *param_4;
                    /* try { // try from 00500490 to 00500497 has its CatchHandler @ 00500504 */
    FUN_00500078(puVar5 + 5,param_4 + 2);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = local_50;
    *puVar2 = puVar5;
    puVar4 = puVar5;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      puVar4 = (undefined8 *)*puVar2;
    }
    puVar2 = (undefined8 *)FUN_0041dcd0(param_1[1],puVar4);
    uVar3 = 1;
    param_1[2] = param_1[2] + 1;
  }
  else {
    uVar3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar2,uVar3);
}


// ===== 0050052c  FUN_0050052c =====

long * FUN_0050052c(undefined8 *param_1,long *param_2,long *param_3,long *param_4,uint *param_5)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar5 = param_1 + 1;
  if (plVar5 != param_2) {
    uVar1 = *param_5;
    if (*(uint *)(param_2 + 4) <= uVar1) {
      if (uVar1 <= *(uint *)(param_2 + 4)) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar3 = param_2 + 1;
      plVar7 = (long *)*plVar3;
      plVar8 = param_2;
      plVar6 = plVar7;
      if (plVar7 == (long *)0x0) {
        do {
          plVar4 = (long *)plVar8[2];
          bVar2 = (long *)*plVar4 != plVar8;
          plVar8 = plVar4;
        } while (bVar2);
      }
      else {
        do {
          plVar4 = plVar6;
          plVar6 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      if ((plVar4 != plVar5) && (*(uint *)(plVar4 + 4) <= uVar1)) {
        plVar6 = (long *)*plVar5;
        plVar8 = plVar5;
        while (plVar6 != (long *)0x0) {
          while (plVar8 = plVar6, uVar1 < *(uint *)(plVar8 + 4)) {
            plVar5 = plVar8;
            plVar6 = (long *)*plVar8;
            if ((long *)*plVar8 == (long *)0x0) goto LAB_005006c4;
          }
          if (uVar1 <= *(uint *)(plVar8 + 4)) break;
          plVar5 = plVar8 + 1;
          plVar6 = (long *)*plVar5;
        }
LAB_005006c4:
        *param_3 = (long)plVar8;
        return plVar5;
      }
      if (plVar7 != (long *)0x0) {
        *param_3 = (long)plVar4;
        return plVar4;
      }
      goto LAB_00500638;
    }
  }
  if ((long *)*param_1 == param_2) {
    plVar6 = (long *)*param_2;
    plVar8 = param_2;
  }
  else {
    if (param_2 == (long *)0x0) {
                    /* try { // try from 005006e0 to 00500707 has its CatchHandler @ 00500708 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xd1,
                 "__x != nullptr","node shouldn\'t be null");
    }
    plVar6 = (long *)*param_2;
    plVar3 = param_2;
    plVar7 = plVar6;
    if (plVar6 == (long *)0x0) {
      do {
        plVar8 = (long *)plVar3[2];
        bVar2 = (long *)*plVar8 == plVar3;
        plVar3 = plVar8;
      } while (bVar2);
    }
    else {
      do {
        plVar8 = plVar7;
        plVar7 = (long *)plVar8[1];
      } while ((long *)plVar8[1] != (long *)0x0);
    }
    uVar1 = *param_5;
    if (uVar1 <= *(uint *)(plVar8 + 4)) {
      plVar6 = (long *)*plVar5;
      plVar8 = plVar5;
      while (plVar6 != (long *)0x0) {
        while (plVar8 = plVar6, uVar1 < *(uint *)(plVar8 + 4)) {
          plVar5 = plVar8;
          plVar6 = (long *)*plVar8;
          if ((long *)*plVar8 == (long *)0x0) goto LAB_00500628;
        }
        if (uVar1 <= *(uint *)(plVar8 + 4)) break;
        plVar5 = plVar8 + 1;
        plVar6 = (long *)*plVar5;
      }
LAB_00500628:
      *param_3 = (long)plVar8;
      return plVar5;
    }
  }
  plVar3 = param_2;
  if (plVar6 != (long *)0x0) {
    *param_3 = (long)plVar8;
    return plVar8 + 1;
  }
LAB_00500638:
  *param_3 = (long)param_2;
  return plVar3;
}


// ===== 0050070c  FUN_0050070c =====

void FUN_0050070c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_0050070c(param_1,*param_2);
    FUN_0050070c(param_1,param_2[1]);
                    /* try { // try from 0050073c to 0050073f has its CatchHandler @ 0050075c */
    FUN_00500760(param_2 + 4);
    operator_delete(param_2);
    return;
  }
  return;
}


// ===== 00500760  FUN_00500760 =====

void FUN_00500760(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x3f,"__loc != nullptr","null pointer given to destroy_at");
  }
  puVar1 = (undefined1 *)param_1[3];
  if (0 < param_1[4] - (long)puVar1) {
    uVar2 = (param_1[4] - (long)puVar1) + 1;
    do {
      uVar2 = uVar2 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar2);
    puVar1 = (undefined1 *)param_1[3];
  }
  if (puVar1 != (undefined1 *)0x0) {
    param_1[4] = puVar1;
    operator_delete(puVar1);
  }
  puVar1 = (undefined1 *)*param_1;
  if (0 < param_1[1] - (long)puVar1) {
    uVar2 = (param_1[1] - (long)puVar1) + 1;
    do {
      uVar2 = uVar2 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar2);
    puVar1 = (undefined1 *)*param_1;
  }
  if (puVar1 != (undefined1 *)0x0) {
    param_1[1] = puVar1;
    operator_delete(puVar1);
    return;
  }
  return;
}


// ===== 0050081c  FUN_0050081c =====

void FUN_0050081c(undefined8 *param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar8 = param_2[1] - *param_2;
  if (uVar8 != 0) {
    if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004f04ec(param_1);
    }
    puVar3 = (undefined1 *)operator_new(uVar8);
    *param_1 = puVar3;
    param_1[1] = puVar3;
    param_1[2] = puVar3 + uVar8;
    puVar5 = (undefined1 *)*param_2;
    puVar1 = (undefined1 *)param_2[1];
    puVar4 = puVar3;
    if (puVar5 != puVar1) {
      uVar8 = (long)puVar1 - (long)puVar5;
      puVar7 = puVar5;
      if ((0x1f < uVar8) && (0x1f < (ulong)((long)puVar3 - (long)puVar5))) {
        uVar9 = uVar8 & 0xffffffffffffffe0;
        puVar10 = (undefined8 *)(puVar3 + 0x10);
        puVar7 = puVar5 + uVar9;
        puVar3 = puVar3 + uVar9;
        puVar6 = (undefined8 *)(puVar5 + 0x10);
        uVar11 = uVar9;
        do {
          puVar2 = puVar6 + -1;
          uVar12 = puVar6[-2];
          uVar14 = puVar6[1];
          uVar13 = *puVar6;
          puVar6 = puVar6 + 4;
          uVar11 = uVar11 - 0x20;
          puVar10[-1] = *puVar2;
          puVar10[-2] = uVar12;
          puVar10[1] = uVar14;
          *puVar10 = uVar13;
          puVar10 = puVar10 + 4;
        } while (uVar11 != 0);
        puVar4 = puVar3;
        if (uVar8 == uVar9) goto LAB_005008e0;
      }
      do {
        puVar5 = puVar7 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = *puVar7;
        puVar3 = puVar4;
        puVar7 = puVar5;
      } while (puVar5 != puVar1);
    }
LAB_005008e0:
    param_1[1] = puVar4;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar8 = param_2[4] - param_2[3];
  if (uVar8 == 0) {
    return;
  }
  if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005009b0 to 005009b3 has its CatchHandler @ 005009b4 */
    FUN_004f04ec();
  }
                    /* try { // try from 00500900 to 00500907 has its CatchHandler @ 005009b4 */
  puVar3 = (undefined1 *)operator_new(uVar8);
  param_1[3] = puVar3;
  param_1[4] = puVar3;
  param_1[5] = puVar3 + uVar8;
  puVar5 = (undefined1 *)param_2[3];
  puVar1 = (undefined1 *)param_2[4];
  puVar4 = puVar3;
  if (puVar5 != puVar1) {
    uVar8 = (long)puVar1 - (long)puVar5;
    puVar7 = puVar5;
    if ((0x1f < uVar8) && (0x1f < (ulong)((long)puVar3 - (long)puVar5))) {
      uVar9 = uVar8 & 0xffffffffffffffe0;
      puVar10 = (undefined8 *)(puVar3 + 0x10);
      puVar7 = puVar5 + uVar9;
      puVar3 = puVar3 + uVar9;
      puVar6 = (undefined8 *)(puVar5 + 0x10);
      uVar11 = uVar9;
      do {
        puVar2 = puVar6 + -1;
        uVar12 = puVar6[-2];
        uVar14 = puVar6[1];
        uVar13 = *puVar6;
        puVar6 = puVar6 + 4;
        uVar11 = uVar11 - 0x20;
        puVar10[-1] = *puVar2;
        puVar10[-2] = uVar12;
        puVar10[1] = uVar14;
        *puVar10 = uVar13;
        puVar10 = puVar10 + 4;
      } while (uVar11 != 0);
      puVar4 = puVar3;
      if (uVar8 == uVar9) goto LAB_00500994;
    }
    do {
      puVar5 = puVar7 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = *puVar7;
      puVar3 = puVar4;
      puVar7 = puVar5;
    } while (puVar5 != puVar1);
  }
LAB_00500994:
  param_1[4] = puVar4;
  return;
}


// ===== 005009c8  FUN_005009c8 =====

void FUN_005009c8(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar11 = param_2[1] - *param_2;
  if (uVar11 != 0) {
    if ((long)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004f04ec(param_1);
    }
    puVar5 = (undefined1 *)operator_new(uVar11);
    *param_1 = puVar5;
    param_1[1] = puVar5;
    param_1[2] = puVar5 + uVar11;
    puVar8 = (undefined1 *)*param_2;
    puVar2 = (undefined1 *)param_2[1];
    puVar7 = puVar5;
    if (puVar8 != puVar2) {
      uVar11 = (long)puVar2 - (long)puVar8;
      puVar10 = puVar8;
      if ((0x1f < uVar11) && (0x1f < (ulong)((long)puVar5 - (long)puVar8))) {
        uVar12 = uVar11 & 0xffffffffffffffe0;
        puVar13 = (undefined8 *)(puVar5 + 0x10);
        puVar10 = puVar8 + uVar12;
        puVar5 = puVar5 + uVar12;
        puVar9 = (undefined8 *)(puVar8 + 0x10);
        uVar14 = uVar12;
        do {
          puVar4 = puVar9 + -1;
          uVar15 = puVar9[-2];
          uVar17 = puVar9[1];
          uVar16 = *puVar9;
          puVar9 = puVar9 + 4;
          uVar14 = uVar14 - 0x20;
          puVar13[-1] = *puVar4;
          puVar13[-2] = uVar15;
          puVar13[1] = uVar17;
          *puVar13 = uVar16;
          puVar13 = puVar13 + 4;
        } while (uVar14 != 0);
        puVar7 = puVar5;
        if (uVar11 == uVar12) goto LAB_00500a8c;
      }
      do {
        puVar8 = puVar10 + 1;
        puVar7 = puVar5 + 1;
        *puVar5 = *puVar10;
        puVar5 = puVar7;
        puVar10 = puVar8;
      } while (puVar8 != puVar2);
    }
LAB_00500a8c:
    param_1[1] = puVar7;
  }
  lVar6 = param_2[3];
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  lVar1 = param_2[4];
  lVar3 = param_2[5];
  param_1[3] = lVar6;
  uVar11 = lVar3 - lVar1;
  if (uVar11 == 0) {
    return;
  }
  if ((long)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00500b64 to 00500b67 has its CatchHandler @ 00500b68 */
    FUN_004f04ec();
  }
                    /* try { // try from 00500ab4 to 00500abb has its CatchHandler @ 00500b68 */
  puVar5 = (undefined1 *)operator_new(uVar11);
  param_1[4] = puVar5;
  param_1[5] = puVar5;
  param_1[6] = puVar5 + uVar11;
  puVar8 = (undefined1 *)param_2[4];
  puVar2 = (undefined1 *)param_2[5];
  puVar7 = puVar5;
  if (puVar8 != puVar2) {
    uVar11 = (long)puVar2 - (long)puVar8;
    puVar10 = puVar8;
    if ((0x1f < uVar11) && (0x1f < (ulong)((long)puVar5 - (long)puVar8))) {
      uVar12 = uVar11 & 0xffffffffffffffe0;
      puVar13 = (undefined8 *)(puVar5 + 0x10);
      puVar10 = puVar8 + uVar12;
      puVar5 = puVar5 + uVar12;
      puVar9 = (undefined8 *)(puVar8 + 0x10);
      uVar14 = uVar12;
      do {
        puVar4 = puVar9 + -1;
        uVar15 = puVar9[-2];
        uVar17 = puVar9[1];
        uVar16 = *puVar9;
        puVar9 = puVar9 + 4;
        uVar14 = uVar14 - 0x20;
        puVar13[-1] = *puVar4;
        puVar13[-2] = uVar15;
        puVar13[1] = uVar17;
        *puVar13 = uVar16;
        puVar13 = puVar13 + 4;
      } while (uVar14 != 0);
      puVar7 = puVar5;
      if (uVar11 == uVar12) goto LAB_00500b48;
    }
    do {
      puVar8 = puVar10 + 1;
      puVar7 = puVar5 + 1;
      *puVar5 = *puVar10;
      puVar5 = puVar7;
      puVar10 = puVar8;
    } while (puVar8 != puVar2);
  }
LAB_00500b48:
  param_1[5] = puVar7;
  return;
}


// ===== 00500b7c  FUN_00500b7c =====

void FUN_00500b7c(undefined8 *param_1,long *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_48 [16];
  long local_38;
  undefined1 *puVar8;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar9 = param_2[1] - *param_2;
  if (uVar9 != 0) {
    if ((long)uVar9 < 0) {
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(param_1);
      }
      goto LAB_00500d28;
    }
    puVar4 = (undefined1 *)operator_new(uVar9);
    *param_1 = puVar4;
    param_1[1] = puVar4;
    param_1[2] = puVar4 + uVar9;
    puVar7 = (undefined1 *)*param_2;
    puVar1 = (undefined1 *)param_2[1];
    puVar5 = puVar4;
    if (puVar7 != puVar1) {
      uVar9 = (long)puVar1 - (long)puVar7;
      puVar8 = puVar7;
      if ((0x1f < uVar9) && (0x1f < (ulong)((long)puVar4 - (long)puVar7))) {
        uVar10 = uVar9 & 0xffffffffffffffe0;
        puVar11 = (undefined8 *)(puVar4 + 0x10);
        puVar8 = puVar7 + uVar10;
        puVar4 = puVar4 + uVar10;
        puVar6 = (undefined8 *)(puVar7 + 0x10);
        uVar12 = uVar10;
        do {
          puVar3 = puVar6 + -1;
          uVar13 = puVar6[-2];
          uVar15 = puVar6[1];
          uVar14 = *puVar6;
          puVar6 = puVar6 + 4;
          uVar12 = uVar12 - 0x20;
          puVar11[-1] = *puVar3;
          puVar11[-2] = uVar13;
          puVar11[1] = uVar15;
          *puVar11 = uVar14;
          puVar11 = puVar11 + 4;
        } while (uVar12 != 0);
        puVar5 = puVar4;
        if (uVar9 == uVar10) goto LAB_00500c50;
      }
      do {
        puVar7 = puVar8 + 1;
        puVar5 = puVar4 + 1;
        *puVar4 = *puVar8;
        puVar4 = puVar5;
        puVar8 = puVar7;
      } while (puVar7 != puVar1);
    }
LAB_00500c50:
    param_1[1] = puVar5;
  }
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0xff;
  if ((ulong)*(byte *)(param_2 + 0x35) != 0xff) {
                    /* try { // try from 00500c80 to 00500c8b has its CatchHandler @ 00500cd8 */
    (*(code *)(&PTR_FUN_00d1fa30)[*(byte *)(param_2 + 0x35)])(auStack_48,param_1 + 4,param_2 + 4);
    *(char *)(param_1 + 0x35) = (char)param_2[0x35];
  }
  param_1[0x36] = param_2[0x36];
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_00500d28:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00500d30  FUN_00500d30 =====

void FUN_00500d30(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  void *pvVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined2 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  uVar3 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  puVar19 = (undefined8 *)(param_1 + 4);
  *puVar19 = 0;
  lVar9 = *(long *)(param_2 + 4);
  lVar11 = *(long *)(param_2 + 8);
  *param_1 = uVar3;
  uVar15 = lVar11 - lVar9;
  if (uVar15 != 0) {
    if ((long)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004f04ec(puVar19);
    }
    puVar5 = (undefined1 *)operator_new(uVar15);
    *(undefined1 **)(param_1 + 4) = puVar5;
    *(undefined1 **)(param_1 + 8) = puVar5;
    *(undefined1 **)(param_1 + 0xc) = puVar5 + uVar15;
    puVar12 = *(undefined1 **)(param_2 + 4);
    puVar2 = *(undefined1 **)(param_2 + 8);
    puVar10 = puVar5;
    if (puVar12 != puVar2) {
      uVar15 = (long)puVar2 - (long)puVar12;
      puVar14 = puVar12;
      if ((0x1f < uVar15) && (0x1f < (ulong)((long)puVar5 - (long)puVar12))) {
        uVar16 = uVar15 & 0xffffffffffffffe0;
        puVar17 = (undefined8 *)(puVar5 + 0x10);
        puVar14 = puVar12 + uVar16;
        puVar5 = puVar5 + uVar16;
        puVar13 = (undefined8 *)(puVar12 + 0x10);
        uVar18 = uVar16;
        do {
          puVar4 = puVar13 + -1;
          uVar8 = puVar13[-2];
          uVar22 = puVar13[1];
          uVar21 = *puVar13;
          puVar13 = puVar13 + 4;
          uVar18 = uVar18 - 0x20;
          puVar17[-1] = *puVar4;
          puVar17[-2] = uVar8;
          puVar17[1] = uVar22;
          *puVar17 = uVar21;
          puVar17 = puVar17 + 4;
        } while (uVar18 != 0);
        puVar10 = puVar5;
        if (uVar15 == uVar16) goto LAB_00500e10;
      }
      do {
        puVar12 = puVar14 + 1;
        puVar10 = puVar5 + 1;
        *puVar5 = *puVar14;
        puVar5 = puVar10;
        puVar14 = puVar12;
      } while (puVar12 != puVar2);
    }
LAB_00500e10:
    *(undefined1 **)(param_1 + 8) = puVar10;
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
                    /* try { // try from 00500e24 to 00500e2f has its CatchHandler @ 00501120 */
  FUN_005011b4(param_1 + 0x14,param_2 + 0x14);
  uVar8 = *(undefined8 *)(param_2 + 0xd4);
  *(undefined8 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd4) = uVar8;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  uVar15 = *(long *)(param_2 + 0xdc) - *(long *)(param_2 + 0xd8);
  if (uVar15 == 0) goto LAB_00500eec;
  if ((long)uVar15 < 0) {
                    /* try { // try from 00501098 to 0050109f has its CatchHandler @ 00501130 */
                    /* WARNING: Subroutine does not return */
    FUN_004f04ec(param_1 + 0xd8);
  }
                    /* try { // try from 00500e54 to 00500e5b has its CatchHandler @ 00501130 */
  puVar5 = (undefined1 *)operator_new(uVar15);
  *(undefined1 **)(param_1 + 0xd8) = puVar5;
  *(undefined1 **)(param_1 + 0xdc) = puVar5;
  *(undefined1 **)(param_1 + 0xe0) = puVar5 + uVar15;
  puVar12 = *(undefined1 **)(param_2 + 0xd8);
  puVar2 = *(undefined1 **)(param_2 + 0xdc);
  puVar10 = puVar5;
  if (puVar12 != puVar2) {
    uVar15 = (long)puVar2 - (long)puVar12;
    puVar14 = puVar12;
    if ((0x1f < uVar15) && (0x1f < (ulong)((long)puVar5 - (long)puVar12))) {
      uVar16 = uVar15 & 0xffffffffffffffe0;
      puVar17 = (undefined8 *)(puVar5 + 0x10);
      puVar14 = puVar12 + uVar16;
      puVar5 = puVar5 + uVar16;
      puVar13 = (undefined8 *)(puVar12 + 0x10);
      uVar18 = uVar16;
      do {
        puVar4 = puVar13 + -1;
        uVar8 = puVar13[-2];
        uVar22 = puVar13[1];
        uVar21 = *puVar13;
        puVar13 = puVar13 + 4;
        uVar18 = uVar18 - 0x20;
        puVar17[-1] = *puVar4;
        puVar17[-2] = uVar8;
        puVar17[1] = uVar22;
        *puVar17 = uVar21;
        puVar17 = puVar17 + 4;
      } while (uVar18 != 0);
      puVar10 = puVar5;
      if (uVar15 == uVar16) goto LAB_00500ee8;
    }
    do {
      puVar12 = puVar14 + 1;
      puVar10 = puVar5 + 1;
      *puVar5 = *puVar14;
      puVar5 = puVar10;
      puVar14 = puVar12;
    } while (puVar12 != puVar2);
  }
LAB_00500ee8:
  *(undefined1 **)(param_1 + 0xdc) = puVar10;
LAB_00500eec:
                    /* try { // try from 00500ef4 to 00500efb has its CatchHandler @ 00501110 */
  FUN_005021e4(param_1 + 0xe4,param_2 + 0xe4);
                    /* try { // try from 00500f04 to 00500f07 has its CatchHandler @ 005010fc */
  FUN_00502650(param_1 + 0xf0,param_2 + 0xf0);
                    /* try { // try from 00500f10 to 00500f17 has its CatchHandler @ 005010f4 */
  FUN_0050138c(param_1 + 0xfc,param_2 + 0xfc);
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x11c) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  uVar15 = *(long *)(param_2 + 0x11c) - *(long *)(param_2 + 0x118);
  if (uVar15 != 0) {
    if ((long)uVar15 < 0) {
                    /* try { // try from 005010a0 to 005010a7 has its CatchHandler @ 00501128 */
      uVar8 = FUN_004fef58(param_1 + 0x118);
                    /* catch() { ... } // from try @ 00500f6c with catch @ 005010a8 */
      *(undefined2 **)(param_1 + 0x11c) = param_1 + 0xe4;
      FUN_004fbfbc(param_1 + 0xfc);
      FUN_004fc04c(param_1 + 0xd4);
      FUN_004fc0bc(param_1 + 0x14);
      FUN_004e9f60(puVar19);
                    /* WARNING: Subroutine does not return */
      FUN_00d0fa5c(uVar8);
    }
                    /* try { // try from 00500f40 to 00500f47 has its CatchHandler @ 00501128 */
    pvVar6 = operator_new(uVar15);
    *(void **)(param_1 + 0x118) = pvVar6;
    *(void **)(param_1 + 0x11c) = pvVar6;
    *(void **)(param_1 + 0x120) = (void *)((long)pvVar6 + ((long)uVar15 >> 5) * 0x20);
                    /* try { // try from 00500f6c to 00500f73 has its CatchHandler @ 005010a8 */
    uVar8 = FUN_004fef6c(param_1 + 0x120,*(undefined8 *)(param_2 + 0x118),
                         *(undefined8 *)(param_2 + 0x11c),pvVar6);
    *(undefined8 *)(param_1 + 0x11c) = uVar8;
  }
                    /* try { // try from 00500f80 to 00500f8b has its CatchHandler @ 005010ec */
  FUN_00501544(param_1 + 0x124,param_2 + 0x124);
  param_1[0x1c4] = param_2[0x1c4];
  uVar8 = *(undefined8 *)(param_2 + 0x1c8);
  *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_2 + 0x1cc);
  *(undefined8 *)(param_1 + 0x1c8) = uVar8;
                    /* try { // try from 00500fac to 00500fb3 has its CatchHandler @ 005010e4 */
  FUN_005021e4(param_1 + 0x1d0,param_2 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1dc) = *(undefined8 *)(param_2 + 0x1dc);
                    /* try { // try from 00500fc4 to 00500fc7 has its CatchHandler @ 005010d0 */
  FUN_00502a14(param_1 + 0x1e0,param_2 + 0x1e0);
  *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0x1ec);
                    /* try { // try from 00500fd8 to 00500fdf has its CatchHandler @ 005010c8 */
  FUN_00501e78(param_1 + 0x1f0,param_2 + 0x1f0);
                    /* try { // try from 00500fe8 to 00500fef has its CatchHandler @ 005010c0 */
  FUN_00502024(param_1 + 0x208,param_2 + 0x208);
                    /* try { // try from 00500ff8 to 00500fff has its CatchHandler @ 005010b8 */
  FUN_00502104(param_1 + 0x214,param_2 + 0x214);
  puVar1 = param_1 + 0x220;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined2 **)(param_1 + 0x224) = puVar1;
  puVar20 = *(undefined2 **)(param_2 + 0x224);
  *(undefined2 **)(param_1 + 0x220) = puVar1;
  while (puVar20 != param_2 + 0x220) {
                    /* try { // try from 00501020 to 00501027 has its CatchHandler @ 00501138 */
    plVar7 = (long *)operator_new(0x1c8);
    *plVar7 = 0;
                    /* try { // try from 00501034 to 00501037 has its CatchHandler @ 00501140 */
    FUN_00500b7c(plVar7 + 2,puVar20 + 8);
    lVar9 = *(long *)(param_1 + 0x220);
    plVar7[1] = (long)puVar1;
    lVar11 = *(long *)(param_1 + 0x228);
    *(long **)(param_1 + 0x220) = plVar7;
    *(long **)(lVar9 + 8) = plVar7;
    puVar20 = *(undefined2 **)(puVar20 + 4);
    *plVar7 = lVar9;
    *(long *)(param_1 + 0x228) = lVar11 + 1;
  }
                    /* try { // try from 0050106c to 0050106f has its CatchHandler @ 005010b4 */
  FUN_0050360c(param_1 + 0x22c,param_2 + 0x22c);
  return;
}


// ===== 005011b4  FUN_005011b4 =====

void FUN_005011b4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar4 = *param_2;
  param_1[2] = 0;
  puVar5 = param_1 + 1;
  *puVar5 = 0;
  puVar6 = param_1 + 3;
  *puVar6 = 0;
  *param_1 = uVar4;
  uVar1 = param_2[2] - param_2[1];
  if (uVar1 != 0) {
    if (0xc7ce0c7ce0c7ce < (ulong)(((long)uVar1 >> 3) * -0x7063e7063e7063e7)) {
      if (*(long *)(lVar2 + 0x28) == local_58) {
        uVar4 = FUN_004ffeb8(puVar5);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005012b4 with catch @ 00501314
                        */
        if ((ulong)*(byte *)(param_1 + 0x2e) != 0xff) {
                    /* try { // try from 00501330 to 0050133b has its CatchHandler @ 00501354 */
          (*(code *)(&PTR_FUN_00d1f940)[*(byte *)(param_1 + 0x2e)])(auStack_60);
        }
        *(undefined1 *)(param_1 + 0x2e) = 0xff;
        FUN_004fcd14(puVar6,param_1[5]);
        FUN_004fce98(puVar5);
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_00d0fa5c(uVar4);
        }
      }
      goto LAB_00501388;
    }
    pvVar3 = operator_new(uVar1);
    param_1[1] = pvVar3;
    param_1[2] = pvVar3;
    param_1[3] = (void *)((long)pvVar3 + ((long)uVar1 >> 3) * 8);
                    /* try { // try from 00501258 to 00501263 has its CatchHandler @ 00501358 */
    uVar4 = FUN_004ff930(puVar6,param_2[1],param_2[2],pvVar3);
    param_1[2] = uVar4;
  }
                    /* try { // try from 00501270 to 00501277 has its CatchHandler @ 00501364 */
  FUN_005021e4(param_1 + 4,param_2 + 4);
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  if (*(char *)(param_2 + 0x2f) != '\0') {
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined1 *)(param_1 + 0x2e) = 0xff;
    if ((ulong)*(byte *)(param_2 + 0x2e) != 0xff) {
                    /* try { // try from 005012b4 to 005012bf has its CatchHandler @ 00501314 */
      (*(code *)(&PTR_FUN_00d1fab0)[*(byte *)(param_2 + 0x2e)])(auStack_68,param_1 + 7,param_2 + 7);
      *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)(param_2 + 0x2e);
    }
    *(undefined1 *)(param_1 + 0x2f) = 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_00501388:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050138c  FUN_0050138c =====

void FUN_0050138c(undefined2 *param_1,undefined2 *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined2 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar4 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar1 = *(long *)(param_2 + 4);
  lVar2 = *(long *)(param_2 + 8);
  *param_1 = uVar4;
  uVar11 = lVar2 - lVar1;
  if (uVar11 != 0) {
    if ((long)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004f04ec(param_1 + 4);
    }
    puVar6 = (undefined1 *)operator_new(uVar11);
    *(undefined1 **)(param_1 + 4) = puVar6;
    *(undefined1 **)(param_1 + 8) = puVar6;
    *(undefined1 **)(param_1 + 0xc) = puVar6 + uVar11;
    puVar8 = *(undefined1 **)(param_2 + 4);
    puVar3 = *(undefined1 **)(param_2 + 8);
    puVar7 = puVar6;
    if (puVar8 != puVar3) {
      uVar11 = (long)puVar3 - (long)puVar8;
      puVar10 = puVar8;
      if ((0x1f < uVar11) && (0x1f < (ulong)((long)puVar6 - (long)puVar8))) {
        uVar12 = uVar11 & 0xffffffffffffffe0;
        puVar13 = (undefined8 *)(puVar6 + 0x10);
        puVar10 = puVar8 + uVar12;
        puVar6 = puVar6 + uVar12;
        puVar9 = (undefined8 *)(puVar8 + 0x10);
        uVar14 = uVar12;
        do {
          puVar5 = puVar9 + -1;
          uVar15 = puVar9[-2];
          uVar17 = puVar9[1];
          uVar16 = *puVar9;
          puVar9 = puVar9 + 4;
          uVar14 = uVar14 - 0x20;
          puVar13[-1] = *puVar5;
          puVar13[-2] = uVar15;
          puVar13[1] = uVar17;
          *puVar13 = uVar16;
          puVar13 = puVar13 + 4;
        } while (uVar14 != 0);
        puVar7 = puVar6;
        if (uVar11 == uVar12) goto LAB_0050145c;
      }
      do {
        puVar8 = puVar10 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = *puVar10;
        puVar6 = puVar7;
        puVar10 = puVar8;
      } while (puVar8 != puVar3);
    }
LAB_0050145c:
    *(undefined1 **)(param_1 + 8) = puVar7;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar11 = *(long *)(param_2 + 0x14) - *(long *)(param_2 + 0x10);
  if (uVar11 == 0) {
    return;
  }
  if ((long)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0050152c to 0050152f has its CatchHandler @ 00501530 */
    FUN_004f04ec();
  }
                    /* try { // try from 0050147c to 00501483 has its CatchHandler @ 00501530 */
  puVar6 = (undefined1 *)operator_new(uVar11);
  *(undefined1 **)(param_1 + 0x10) = puVar6;
  *(undefined1 **)(param_1 + 0x14) = puVar6;
  *(undefined1 **)(param_1 + 0x18) = puVar6 + uVar11;
  puVar8 = *(undefined1 **)(param_2 + 0x10);
  puVar3 = *(undefined1 **)(param_2 + 0x14);
  puVar7 = puVar6;
  if (puVar8 != puVar3) {
    uVar11 = (long)puVar3 - (long)puVar8;
    puVar10 = puVar8;
    if ((0x1f < uVar11) && (0x1f < (ulong)((long)puVar6 - (long)puVar8))) {
      uVar12 = uVar11 & 0xffffffffffffffe0;
      puVar13 = (undefined8 *)(puVar6 + 0x10);
      puVar10 = puVar8 + uVar12;
      puVar6 = puVar6 + uVar12;
      puVar9 = (undefined8 *)(puVar8 + 0x10);
      uVar14 = uVar12;
      do {
        puVar5 = puVar9 + -1;
        uVar15 = puVar9[-2];
        uVar17 = puVar9[1];
        uVar16 = *puVar9;
        puVar9 = puVar9 + 4;
        uVar14 = uVar14 - 0x20;
        puVar13[-1] = *puVar5;
        puVar13[-2] = uVar15;
        puVar13[1] = uVar17;
        *puVar13 = uVar16;
        puVar13 = puVar13 + 4;
      } while (uVar14 != 0);
      puVar7 = puVar6;
      if (uVar11 == uVar12) goto LAB_00501510;
    }
    do {
      puVar8 = puVar10 + 1;
      puVar7 = puVar6 + 1;
      *puVar6 = *puVar10;
      puVar6 = puVar7;
      puVar10 = puVar8;
    } while (puVar8 != puVar3);
  }
LAB_00501510:
  *(undefined1 **)(param_1 + 0x14) = puVar7;
  return;
}


// ===== 00501544  FUN_00501544 =====

void FUN_00501544(undefined2 *param_1,undefined2 *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined2 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar4 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar1 = *(long *)(param_2 + 4);
  lVar2 = *(long *)(param_2 + 8);
  *param_1 = uVar4;
  uVar11 = lVar2 - lVar1;
  if (uVar11 != 0) {
    if ((long)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004f04ec(param_1 + 4);
    }
    puVar6 = (undefined1 *)operator_new(uVar11);
    *(undefined1 **)(param_1 + 4) = puVar6;
    *(undefined1 **)(param_1 + 8) = puVar6;
    *(undefined1 **)(param_1 + 0xc) = puVar6 + uVar11;
    puVar8 = *(undefined1 **)(param_2 + 4);
    puVar3 = *(undefined1 **)(param_2 + 8);
    puVar7 = puVar6;
    if (puVar8 != puVar3) {
      uVar11 = (long)puVar3 - (long)puVar8;
      puVar10 = puVar8;
      if ((0x1f < uVar11) && (0x1f < (ulong)((long)puVar6 - (long)puVar8))) {
        uVar12 = uVar11 & 0xffffffffffffffe0;
        puVar13 = (undefined8 *)(puVar6 + 0x10);
        puVar10 = puVar8 + uVar12;
        puVar6 = puVar6 + uVar12;
        puVar9 = (undefined8 *)(puVar8 + 0x10);
        uVar14 = uVar12;
        do {
          puVar5 = puVar9 + -1;
          uVar15 = puVar9[-2];
          uVar17 = puVar9[1];
          uVar16 = *puVar9;
          puVar9 = puVar9 + 4;
          uVar14 = uVar14 - 0x20;
          puVar13[-1] = *puVar5;
          puVar13[-2] = uVar15;
          puVar13[1] = uVar17;
          *puVar13 = uVar16;
          puVar13 = puVar13 + 4;
        } while (uVar14 != 0);
        puVar7 = puVar6;
        if (uVar11 == uVar12) goto LAB_00501624;
      }
      do {
        puVar8 = puVar10 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = *puVar10;
        puVar6 = puVar7;
        puVar10 = puVar8;
      } while (puVar8 != puVar3);
    }
LAB_00501624:
    *(undefined1 **)(param_1 + 8) = puVar7;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar11 = *(long *)(param_2 + 0x14) - *(long *)(param_2 + 0x10);
  if (uVar11 != 0) {
    if ((long)uVar11 < 0) {
                    /* try { // try from 00501d74 to 00501d7b has its CatchHandler @ 00501e70 */
                    /* WARNING: Subroutine does not return */
      FUN_004f04ec(param_1 + 0x10);
    }
                    /* try { // try from 00501648 to 0050164f has its CatchHandler @ 00501e70 */
    puVar6 = (undefined1 *)operator_new(uVar11);
    *(undefined1 **)(param_1 + 0x10) = puVar6;
    *(undefined1 **)(param_1 + 0x14) = puVar6;
    *(undefined1 **)(param_1 + 0x18) = puVar6 + uVar11;
    puVar8 = *(undefined1 **)(param_2 + 0x10);
    puVar3 = *(undefined1 **)(param_2 + 0x14);
    puVar7 = puVar6;
    if (puVar8 != puVar3) {
      uVar11 = (long)puVar3 - (long)puVar8;
      puVar10 = puVar8;
      if ((0x1f < uVar11) && (0x1f < (ulong)((long)puVar6 - (long)puVar8))) {
        uVar12 = uVar11 & 0xffffffffffffffe0;
        puVar13 = (undefined8 *)(puVar6 + 0x10);
        puVar10 = puVar8 + uVar12;
        puVar6 = puVar6 + uVar12;
        puVar9 = (undefined8 *)(puVar8 + 0x10);
        uVar14 = uVar12;
        do {
          puVar5 = puVar9 + -1;
          uVar15 = puVar9[-2];
          uVar17 = puVar9[1];
          uVar16 = *puVar9;
          puVar9 = puVar9 + 4;
          uVar14 = uVar14 - 0x20;
          puVar13[-1] = *puVar5;
          puVar13[-2] = uVar15;
          puVar13[1] = uVar17;
          *puVar13 = uVar16;
          puVar13 = puVar13 + 4;
        } while (uVar14 != 0);
        puVar7 = puVar6;
        if (uVar11 == uVar12) goto LAB_005016dc;
      }
      do {
        puVar8 = puVar10 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = *puVar10;
        puVar6 = puVar7;
        puVar10 = puVar8;
      } while (puVar8 != puVar3);
    }
LAB_005016dc:
    *(undefined1 **)(param_1 + 0x14) = puVar7;
  }
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  uVar11 = *(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x1c);
  if (uVar11 != 0) {
    if ((long)uVar11 < 0) {
                    /* try { // try from 00501d7c to 00501d83 has its CatchHandler @ 00501e68 */
                    /* WARNING: Subroutine does not return */
      FUN_004f04ec(param_1 + 0x1c);
    }
                    /* try { // try from 00501700 to 00501707 has its CatchHandler @ 00501e68 */
    puVar6 = (undefined1 *)operator_new(uVar11);
    *(undefined1 **)(param_1 + 0x1c) = puVar6;
    *(undefined1 **)(param_1 + 0x20) = puVar6;
    *(undefined1 **)(param_1 + 0x24) = puVar6 + uVar11;
    puVar8 = *(undefined1 **)(param_2 + 0x1c);
    puVar3 = *(undefined1 **)(param_2 + 0x20);
    puVar7 = puVar6;
    if (puVar8 != puVar3) {
      uVar11 = (long)puVar3 - (long)puVar8;
      puVar10 = puVar8;
      if ((0x1f < uVar11) && (0x1f < (ulong)((long)puVar6 - (long)puVar8))) {
        uVar12 = uVar11 & 0xffffffffffffffe0;
        puVar13 = (undefined8 *)(puVar6 + 0x10);
        puVar10 = puVar8 + uVar12;
        puVar6 = puVar6 + uVar12;
        puVar9 = (undefined8 *)(puVar8 + 0x10);
        uVar14 = uVar12;
        do {
          puVar5 = puVar9 + -1;
          uVar15 = puVar9[-2];
          uVar17 = puVar9[1];
          uVar16 = *puVar9;
          puVar9 = puVar9 + 4;
          uVar14 = uVar14 - 0x20;
          puVar13[-1] = *puVar5;
          puVar13[-2] = uVar15;
          puVar13[1] = uVar17;
          *puVar13 = uVar16;
          puVar13 = puVar13 + 4;
        } while (uVar14 != 0);
        puVar7 = puVar6;
        if (uVar11 == uVar12) goto LAB_00501794;
      }
      do {
        puVar8 = puVar10 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = *puVar10;
        puVar6 = puVar7;
        puVar10 = puVar8;
      } while (puVar8 != puVar3);
    }
LAB_00501794:
    *(undefined1 **)(param_1 + 0x20) = puVar7;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  uVar11 = *(long *)(param_2 + 0x2c) - *(long *)(param_2 + 0x28);
  if (uVar11 != 0) {
    if ((long)uVar11 < 0) {
                    /* try { // try from 00501d84 to 00501d8b has its CatchHandler @ 00501e60 */
                    /* WARNING: Subroutine does not return */
      FUN_004f04ec(param_1 + 0x28);
    }
                    /* try { // try from 005017b8 to 005017bf has its CatchHandler @ 00501e60 */
    puVar6 = (undefined1 *)operator_new(uVar11);
    *(undefined1 **)(param_1 + 0x28) = puVar6;
    *(undefined1 **)(param_1 + 0x2c) = puVar6;
    *(undefined1 **)(param_1 + 0x30) = puVar6 + uVar11;
    puVar8 = *(undefined1 **)(param_2 + 0x28);
    puVar3 = *(undefined1 **)(param_2 + 0x2c);
    puVar7 = puVar6;
    if (puVar8 != puVar3) {
      uVar11 = (long)puVar3 - (long)puVar8;
      puVar10 = puVar8;
      if ((0x1f < uVar11) && (0x1f < (ulong)((long)puVar6 - (long)puVar8))) {
        uVar12 = uVar11 & 0xffffffffffffffe0;
        puVar13 = (undefined8 *)(puVar6 + 0x10);
        puVar10 = puVar8 + uVar12;
        puVar6 = puVar6 + uVar12;
        puVar9 = (undefined8 *)(puVar8 + 0x10);
        uVar14 = uVar12;
        do {
          puVar5 = puVar9 + -1;
          uVar15 = puVar9[-2];
          uVar17 = puVar9[1];
          uVar16 = *puVar9;
          puVar9 = puVar9 + 4;
          uVar14 = uVar14 - 0x20;
          puVar13[-1] = *puVar5;
          puVar13[-2] = uVar15;
          puVar13[1] = uVar17;
          *puVar13 = uVar16;
          puVar13 = puVar13 + 4;
        } while (uVar14 != 0);
        puVar7 = puVar6;
        if (uVar11 == uVar12) goto LAB_0050184c;
      }
      do {
        puVar8 = puVar10 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = *puVar10;
        puVar6 = puVar7;
        puVar10 = puVar8;
      } while (puVar8 != puVar3);
    }
LAB_0050184c:
    *(undefined1 **)(param_1 + 0x2c) = puVar7;
  }
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  uVar11 = *(long *)(param_2 + 0x38) - *(long *)(param_2 + 0x34);
  if (uVar11 != 0) {
    if ((long)uVar11 < 0) {
                    /* try { // try from 00501d8c to 00501d93 has its CatchHandler @ 00501e58 */
                    /* WARNING: Subroutine does not return */
      FUN_004f04ec(param_1 + 0x34);
    }
                    /* try { // try from 00501870 to 00501877 has its CatchHandler @ 00501e58 */
    puVar6 = (undefined1 *)operator_new(uVar11);
    *(undefined1 **)(param_1 + 0x34) = puVar6;
    *(undefined1 **)(param_1 + 0x38) = puVar6;
    *(undefined1 **)(param_1 + 0x3c) = puVar6 + uVar11;
    puVar8 = *(undefined1 **)(param_2 + 0x34);
    puVar3 = *(undefined1 **)(param_2 + 0x38);
    puVar7 = puVar6;
    if (puVar8 != puVar3) {
      uVar11 = (long)puVar3 - (long)puVar8;
      puVar10 = puVar8;
      if ((0x1f < uVar11) && (0x1f < (ulong)((long)puVar6 - (long)puVar8))) {
        uVar12 = uVar11 & 0xffffffffffffffe0;
        puVar13 = (undefined8 *)(puVar6 + 0x10);
        puVar10 = puVar8 + uVar12;
        puVar6 = puVar6 + uVar12;
        puVar9 = (undefined8 *)(puVar8 + 0x10);
        uVar14 = uVar12;
        do {
          puVar5 = puVar9 + -1;
          uVar15 = puVar9[-2];
          uVar17 = puVar9[1];
          uVar16 = *puVar9;
          puVar9 = puVar9 + 4;
          uVar14 = uVar14 - 0x20;
          puVar13[-1] = *puVar5;
          puVar13[-2] = uVar15;
          puVar13[1] = uVar17;
          *puVar13 = uVar16;
          puVar13 = puVar13 + 4;
        } while (uVar14 != 0);
        puVar7 = puVar6;
        if (uVar11 == uVar12) goto LAB_00501904;
      }
      do {
        puVar8 = puVar10 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = *puVar10;
        puVar6 = puVar7;
        puVar10 = puVar8;
      } while (puVar8 != puVar3);
    }
LAB_00501904:
    *(undefined1 **)(param_1 + 0x38) = puVar7;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  uVar11 = *(long *)(param_2 + 0x44) - *(long *)(param_2 + 0x40);
  if (uVar11 != 0) {
    if ((long)uVar11 < 0) {
                    /* try { // try from 00501d94 to 00501d9b has its CatchHandler @ 00501e50 */
                    /* WARNING: Subroutine does not return */
      FUN_004f04ec(param_1 + 0x40);
    }
                    /* try { // try from 00501924 to 0050192b has its CatchHandler @ 00501e50 */
    puVar6 = (undefined1 *)operator_new(uVar11);
    *(undefined1 **)(param_1 + 0x40) = puVar6;
    *(undefined1 **)(param_1 + 0x44) = puVar6;
    *(undefined1 **)(param_1 + 0x48) = puVar6 + uVar11;
    puVar8 = *(undefined1 **)(param_2 + 0x40);
    puVar3 = *(undefined1 **)(param_2 + 0x44);
    puVar7 = puVar6;
    if (puVar8 != puVar3) {
      uVar11 = (long)puVar3 - (long)puVar8;
      puVar10 = puVar8;
      if ((0x1f < uVar11) && (0x1f < (ulong)((long)puVar6 - (long)puVar8))) {
        uVar12 = uVar11 & 0xffffffffffffffe0;
        puVar13 = (undefined8 *)(puVar6 + 0x10);
        puVar10 = puVar8 + uVar12;
        puVar6 = puVar6 + uVar12;
        puVar9 = (undefined8 *)(puVar8 + 0x10);
        uVar14 = uVar12;
        do {
          puVar5 = puVar9 + -1;
          uVar15 = puVar9[-2];
          uVar17 = puVar9[1];
          uVar16 = *puVar9;
          puVar9 = puVar9 + 4;
          uVar14 = uVar14 - 0x20;
          puVar13[-1] = *puVar5;
          puVar13[-2] = uVar15;
          puVar13[1] = uVar17;
          *puVar13 = uVar16;
          puVar13 = puVar13 + 4;
        } while (uVar14 != 0);
        puVar7 = puVar6;
        if (uVar11 == uVar12) goto LAB_005019b8;
      }
      do {
        puVar8 = puVar10 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = *puVar10;
        puVar6 = puVar7;
        puVar10 = puVar8;
      } while (puVar8 != puVar3);
    }
LAB_005019b8:
    *(undefined1 **)(param_1 + 0x44) = puVar7;
  }
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  uVar11 = *(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x4c);
  if (uVar11 != 0) {
    if ((long)uVar11 < 0) {
                    /* try { // try from 00501d9c to 00501da3 has its CatchHandler @ 00501e48 */
                    /* WARNING: Subroutine does not return */
      FUN_004f04ec(param_1 + 0x4c);
    }
                    /* try { // try from 005019d8 to 005019df has its CatchHandler @ 00501e48 */
    puVar6 = (undefined1 *)operator_new(uVar11);
    *(undefined1 **)(param_1 + 0x4c) = puVar6;
    *(undefined1 **)(param_1 + 0x50) = puVar6;
    *(undefined1 **)(param_1 + 0x54) = puVar6 + uVar11;
    puVar8 = *(undefined1 **)(param_2 + 0x4c);
    puVar3 = *(undefined1 **)(param_2 + 0x50);
    puVar7 = puVar6;
    if (puVar8 != puVar3) {
      uVar11 = (long)puVar3 - (long)puVar8;
      puVar10 = puVar8;
      if ((0x1f < uVar11) && (0x1f < (ulong)((long)puVar6 - (long)puVar8))) {
        uVar12 = uVar11 & 0xffffffffffffffe0;
        puVar13 = (undefined8 *)(puVar6 + 0x10);
        puVar10 = puVar8 + uVar12;
        puVar6 = puVar6 + uVar12;
        puVar9 = (undefined8 *)(puVar8 + 0x10);
        uVar14 = uVar12;
        do {
          puVar5 = puVar9 + -1;
          uVar15 = puVar9[-2];
          uVar17 = puVar9[1];
          uVar16 = *puVar9;
          puVar9 = puVar9 + 4;
          uVar14 = uVar14 - 0x20;
          puVar13[-1] = *puVar5;
          puVar13[-2] = uVar15;
          puVar13[1] = uVar17;
          *puVar13 = uVar16;
          puVar13 = puVar13 + 4;
        } while (uVar14 != 0);
        puVar7 = puVar6;
        if (uVar11 == uVar12) goto LAB_00501a6c;
      }
      do {
        puVar8 = puVar10 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = *puVar10;
        puVar6 = puVar7;
        puVar10 = puVar8;
      } while (puVar8 != puVar3);
    }
LAB_00501a6c:
    *(undefined1 **)(param_1 + 0x50) = puVar7;
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  uVar11 = *(long *)(param_2 + 0x5c) - *(long *)(param_2 + 0x58);
  if (uVar11 != 0) {
    if ((long)uVar11 < 0) {
                    /* try { // try from 00501da4 to 00501dab has its CatchHandler @ 00501e04 */
                    /* WARNING: Subroutine does not return */
      FUN_004f04ec(param_1 + 0x58);
    }
                    /* try { // try from 00501a8c to 00501a93 has its CatchHandler @ 00501e04 */
    puVar6 = (undefined1 *)operator_new(uVar11);
    *(undefined1 **)(param_1 + 0x58) = puVar6;
    *(undefined1 **)(param_1 + 0x5c) = puVar6;
    *(undefined1 **)(param_1 + 0x60) = puVar6 + uVar11;
    puVar8 = *(undefined1 **)(param_2 + 0x58);
    puVar3 = *(undefined1 **)(param_2 + 0x5c);
    puVar7 = puVar6;
    if (puVar8 != puVar3) {
      uVar11 = (long)puVar3 - (long)puVar8;
      puVar10 = puVar8;
      if ((0x1f < uVar11) && (0x1f < (ulong)((long)puVar6 - (long)puVar8))) {
        uVar12 = uVar11 & 0xffffffffffffffe0;
        puVar13 = (undefined8 *)(puVar6 + 0x10);
        puVar10 = puVar8 + uVar12;
        puVar6 = puVar6 + uVar12;
        puVar9 = (undefined8 *)(puVar8 + 0x10);
        uVar14 = uVar12;
        do {
          puVar5 = puVar9 + -1;
          uVar15 = puVar9[-2];
          uVar17 = puVar9[1];
          uVar16 = *puVar9;
          puVar9 = puVar9 + 4;
          uVar14 = uVar14 - 0x20;
          puVar13[-1] = *puVar5;
          puVar13[-2] = uVar15;
          puVar13[1] = uVar17;
          *puVar13 = uVar16;
          puVar13 = puVar13 + 4;
        } while (uVar14 != 0);
        puVar7 = puVar6;
        if (uVar11 == uVar12) goto LAB_00501b20;
      }
      do {
        puVar8 = puVar10 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = *puVar10;
        puVar6 = puVar7;
        puVar10 = puVar8;
      } while (puVar8 != puVar3);
    }
LAB_00501b20:
    *(undefined1 **)(param_1 + 0x5c) = puVar7;
  }
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  uVar11 = *(long *)(param_2 + 0x68) - *(long *)(param_2 + 100);
  if (uVar11 != 0) {
    if ((long)uVar11 < 0) {
                    /* try { // try from 00501dac to 00501db3 has its CatchHandler @ 00501df4 */
                    /* WARNING: Subroutine does not return */
      FUN_004f04ec(param_1 + 100);
    }
                    /* try { // try from 00501b40 to 00501b47 has its CatchHandler @ 00501df4 */
    puVar6 = (undefined1 *)operator_new(uVar11);
    *(undefined1 **)(param_1 + 100) = puVar6;
    *(undefined1 **)(param_1 + 0x68) = puVar6;
    *(undefined1 **)(param_1 + 0x6c) = puVar6 + uVar11;
    puVar8 = *(undefined1 **)(param_2 + 100);
    puVar3 = *(undefined1 **)(param_2 + 0x68);
    puVar7 = puVar6;
    if (puVar8 != puVar3) {
      uVar11 = (long)puVar3 - (long)puVar8;
      puVar10 = puVar8;
      if ((0x1f < uVar11) && (0x1f < (ulong)((long)puVar6 - (long)puVar8))) {
        uVar12 = uVar11 & 0xffffffffffffffe0;
        puVar13 = (undefined8 *)(puVar6 + 0x10);
        puVar10 = puVar8 + uVar12;
        puVar6 = puVar6 + uVar12;
        puVar9 = (undefined8 *)(puVar8 + 0x10);
        uVar14 = uVar12;
        do {
          puVar5 = puVar9 + -1;
          uVar15 = puVar9[-2];
          uVar17 = puVar9[1];
          uVar16 = *puVar9;
          puVar9 = puVar9 + 4;
          uVar14 = uVar14 - 0x20;
          puVar13[-1] = *puVar5;
          puVar13[-2] = uVar15;
          puVar13[1] = uVar17;
          *puVar13 = uVar16;
          puVar13 = puVar13 + 4;
        } while (uVar14 != 0);
        puVar7 = puVar6;
        if (uVar11 == uVar12) goto LAB_00501bd4;
      }
      do {
        puVar8 = puVar10 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = *puVar10;
        puVar6 = puVar7;
        puVar10 = puVar8;
      } while (puVar8 != puVar3);
    }
LAB_00501bd4:
    *(undefined1 **)(param_1 + 0x68) = puVar7;
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  uVar11 = *(long *)(param_2 + 0x74) - *(long *)(param_2 + 0x70);
  if (uVar11 != 0) {
    if ((long)uVar11 < 0) {
                    /* try { // try from 00501db4 to 00501dbb has its CatchHandler @ 00501de4 */
                    /* WARNING: Subroutine does not return */
      FUN_004f04ec(param_1 + 0x70);
    }
                    /* try { // try from 00501bf4 to 00501bfb has its CatchHandler @ 00501de4 */
    puVar6 = (undefined1 *)operator_new(uVar11);
    *(undefined1 **)(param_1 + 0x70) = puVar6;
    *(undefined1 **)(param_1 + 0x74) = puVar6;
    *(undefined1 **)(param_1 + 0x78) = puVar6 + uVar11;
    puVar8 = *(undefined1 **)(param_2 + 0x70);
    puVar3 = *(undefined1 **)(param_2 + 0x74);
    puVar7 = puVar6;
    if (puVar8 != puVar3) {
      uVar11 = (long)puVar3 - (long)puVar8;
      puVar10 = puVar8;
      if ((0x1f < uVar11) && (0x1f < (ulong)((long)puVar6 - (long)puVar8))) {
        uVar12 = uVar11 & 0xffffffffffffffe0;
        puVar13 = (undefined8 *)(puVar6 + 0x10);
        puVar10 = puVar8 + uVar12;
        puVar6 = puVar6 + uVar12;
        puVar9 = (undefined8 *)(puVar8 + 0x10);
        uVar14 = uVar12;
        do {
          puVar5 = puVar9 + -1;
          uVar15 = puVar9[-2];
          uVar17 = puVar9[1];
          uVar16 = *puVar9;
          puVar9 = puVar9 + 4;
          uVar14 = uVar14 - 0x20;
          puVar13[-1] = *puVar5;
          puVar13[-2] = uVar15;
          puVar13[1] = uVar17;
          *puVar13 = uVar16;
          puVar13 = puVar13 + 4;
        } while (uVar14 != 0);
        puVar7 = puVar6;
        if (uVar11 == uVar12) goto LAB_00501c88;
      }
      do {
        puVar8 = puVar10 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = *puVar10;
        puVar6 = puVar7;
        puVar10 = puVar8;
      } while (puVar8 != puVar3);
    }
LAB_00501c88:
    *(undefined1 **)(param_1 + 0x74) = puVar7;
  }
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  uVar11 = *(long *)(param_2 + 0x80) - *(long *)(param_2 + 0x7c);
  if (uVar11 == 0) goto LAB_00501d40;
  if ((long)uVar11 < 0) {
                    /* try { // try from 00501dbc to 00501dc3 has its CatchHandler @ 00501dd4 */
                    /* WARNING: Subroutine does not return */
    FUN_004f04ec(param_1 + 0x7c);
  }
                    /* try { // try from 00501ca8 to 00501caf has its CatchHandler @ 00501dd4 */
  puVar6 = (undefined1 *)operator_new(uVar11);
  *(undefined1 **)(param_1 + 0x7c) = puVar6;
  *(undefined1 **)(param_1 + 0x80) = puVar6;
  *(undefined1 **)(param_1 + 0x84) = puVar6 + uVar11;
  puVar8 = *(undefined1 **)(param_2 + 0x7c);
  puVar3 = *(undefined1 **)(param_2 + 0x80);
  puVar7 = puVar6;
  if (puVar8 != puVar3) {
    uVar11 = (long)puVar3 - (long)puVar8;
    puVar10 = puVar8;
    if ((0x1f < uVar11) && (0x1f < (ulong)((long)puVar6 - (long)puVar8))) {
      uVar12 = uVar11 & 0xffffffffffffffe0;
      puVar13 = (undefined8 *)(puVar6 + 0x10);
      puVar10 = puVar8 + uVar12;
      puVar6 = puVar6 + uVar12;
      puVar9 = (undefined8 *)(puVar8 + 0x10);
      uVar14 = uVar12;
      do {
        puVar5 = puVar9 + -1;
        uVar15 = puVar9[-2];
        uVar17 = puVar9[1];
        uVar16 = *puVar9;
        puVar9 = puVar9 + 4;
        uVar14 = uVar14 - 0x20;
        puVar13[-1] = *puVar5;
        puVar13[-2] = uVar15;
        puVar13[1] = uVar17;
        *puVar13 = uVar16;
        puVar13 = puVar13 + 4;
      } while (uVar14 != 0);
      puVar7 = puVar6;
      if (uVar11 == uVar12) goto LAB_00501d3c;
    }
    do {
      puVar8 = puVar10 + 1;
      puVar7 = puVar6 + 1;
      *puVar6 = *puVar10;
      puVar6 = puVar7;
      puVar10 = puVar8;
    } while (puVar8 != puVar3);
  }
LAB_00501d3c:
  *(undefined1 **)(param_1 + 0x80) = puVar7;
LAB_00501d40:
                    /* try { // try from 00501d48 to 00501d4b has its CatchHandler @ 00501dc4 */
  FUN_004ffecc(param_1 + 0x88,param_2 + 0x88);
  return;
}


// ===== 00501e78  FUN_00501e78 =====

void FUN_00501e78(undefined8 *param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar8 = param_2[1] - *param_2;
  if (uVar8 != 0) {
    if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004f04ec(param_1);
    }
    puVar3 = (undefined1 *)operator_new(uVar8);
    *param_1 = puVar3;
    param_1[1] = puVar3;
    param_1[2] = puVar3 + uVar8;
    puVar5 = (undefined1 *)*param_2;
    puVar1 = (undefined1 *)param_2[1];
    puVar4 = puVar3;
    if (puVar5 != puVar1) {
      uVar8 = (long)puVar1 - (long)puVar5;
      puVar7 = puVar5;
      if ((0x1f < uVar8) && (0x1f < (ulong)((long)puVar3 - (long)puVar5))) {
        uVar9 = uVar8 & 0xffffffffffffffe0;
        puVar10 = (undefined8 *)(puVar3 + 0x10);
        puVar7 = puVar5 + uVar9;
        puVar3 = puVar3 + uVar9;
        puVar6 = (undefined8 *)(puVar5 + 0x10);
        uVar11 = uVar9;
        do {
          puVar2 = puVar6 + -1;
          uVar12 = puVar6[-2];
          uVar14 = puVar6[1];
          uVar13 = *puVar6;
          puVar6 = puVar6 + 4;
          uVar11 = uVar11 - 0x20;
          puVar10[-1] = *puVar2;
          puVar10[-2] = uVar12;
          puVar10[1] = uVar14;
          *puVar10 = uVar13;
          puVar10 = puVar10 + 4;
        } while (uVar11 != 0);
        puVar4 = puVar3;
        if (uVar8 == uVar9) goto LAB_00501f3c;
      }
      do {
        puVar5 = puVar7 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = *puVar7;
        puVar3 = puVar4;
        puVar7 = puVar5;
      } while (puVar5 != puVar1);
    }
LAB_00501f3c:
    param_1[1] = puVar4;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar8 = param_2[4] - param_2[3];
  if (uVar8 == 0) {
    return;
  }
  if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0050200c to 0050200f has its CatchHandler @ 00502010 */
    FUN_004f04ec();
  }
                    /* try { // try from 00501f5c to 00501f63 has its CatchHandler @ 00502010 */
  puVar3 = (undefined1 *)operator_new(uVar8);
  param_1[3] = puVar3;
  param_1[4] = puVar3;
  param_1[5] = puVar3 + uVar8;
  puVar5 = (undefined1 *)param_2[3];
  puVar1 = (undefined1 *)param_2[4];
  puVar4 = puVar3;
  if (puVar5 != puVar1) {
    uVar8 = (long)puVar1 - (long)puVar5;
    puVar7 = puVar5;
    if ((0x1f < uVar8) && (0x1f < (ulong)((long)puVar3 - (long)puVar5))) {
      uVar9 = uVar8 & 0xffffffffffffffe0;
      puVar10 = (undefined8 *)(puVar3 + 0x10);
      puVar7 = puVar5 + uVar9;
      puVar3 = puVar3 + uVar9;
      puVar6 = (undefined8 *)(puVar5 + 0x10);
      uVar11 = uVar9;
      do {
        puVar2 = puVar6 + -1;
        uVar12 = puVar6[-2];
        uVar14 = puVar6[1];
        uVar13 = *puVar6;
        puVar6 = puVar6 + 4;
        uVar11 = uVar11 - 0x20;
        puVar10[-1] = *puVar2;
        puVar10[-2] = uVar12;
        puVar10[1] = uVar14;
        *puVar10 = uVar13;
        puVar10 = puVar10 + 4;
      } while (uVar11 != 0);
      puVar4 = puVar3;
      if (uVar8 == uVar9) goto LAB_00501ff0;
    }
    do {
      puVar5 = puVar7 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = *puVar7;
      puVar3 = puVar4;
      puVar7 = puVar5;
    } while (puVar5 != puVar1);
  }
LAB_00501ff0:
  param_1[4] = puVar4;
  return;
}


// ===== 00502024  FUN_00502024 =====

void FUN_00502024(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  
  param_1[2] = 0;
  puVar3 = param_1 + 1;
  *puVar3 = 0;
  *param_1 = puVar3;
  plVar4 = (long *)*param_2;
  while( true ) {
    if (plVar4 == param_2 + 1) {
      return;
    }
                    /* try { // try from 0050206c to 0050207b has its CatchHandler @ 005020e8 */
    FUN_00502e7c(param_1,puVar3,plVar4 + 4,plVar4 + 4);
    if (plVar4 == (long *)0x0) break;
    plVar1 = (long *)plVar4[1];
    plVar5 = plVar4;
    if ((long *)plVar4[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar5[2];
        bVar2 = (long *)*plVar4 != plVar5;
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
                    /* try { // try from 005020c0 to 005020e7 has its CatchHandler @ 00502100 */
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
             "__x != nullptr","node shouldn\'t be null");
}


// ===== 00502104  FUN_00502104 =====

void FUN_00502104(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  
  param_1[2] = 0;
  puVar3 = param_1 + 1;
  *puVar3 = 0;
  *param_1 = puVar3;
  plVar4 = (long *)*param_2;
  while( true ) {
    if (plVar4 == param_2 + 1) {
      return;
    }
                    /* try { // try from 0050214c to 0050215b has its CatchHandler @ 005021c8 */
    FUN_005031dc(param_1,puVar3,plVar4 + 4,plVar4 + 4);
    if (plVar4 == (long *)0x0) break;
    plVar1 = (long *)plVar4[1];
    plVar5 = plVar4;
    if ((long *)plVar4[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar5[2];
        bVar2 = (long *)*plVar4 != plVar5;
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
                    /* try { // try from 005021a0 to 005021c7 has its CatchHandler @ 005021e0 */
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
             "__x != nullptr","node shouldn\'t be null");
}


// ===== 005021e4  FUN_005021e4 =====

void FUN_005021e4(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  
  param_1[2] = 0;
  puVar3 = param_1 + 1;
  *puVar3 = 0;
  *param_1 = puVar3;
  plVar4 = (long *)*param_2;
  while( true ) {
    if (plVar4 == param_2 + 1) {
      return;
    }
                    /* try { // try from 0050222c to 0050223b has its CatchHandler @ 005022a8 */
    FUN_005022c4(param_1,puVar3,plVar4 + 4,plVar4 + 4);
    if (plVar4 == (long *)0x0) break;
    plVar1 = (long *)plVar4[1];
    plVar5 = plVar4;
    if ((long *)plVar4[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar5[2];
        bVar2 = (long *)*plVar4 != plVar5;
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
                    /* try { // try from 00502280 to 005022a7 has its CatchHandler @ 005022c0 */
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
             "__x != nullptr","node shouldn\'t be null");
}


// ===== 005022c4  FUN_005022c4 =====

undefined1  [16]
FUN_005022c4(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_68 [8];
  undefined8 local_60;
  long local_58;
  undefined1 *puVar16;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  puVar6 = (undefined8 *)FUN_00502470(param_1,param_2,&local_60,auStack_68,param_3);
  puVar14 = (undefined8 *)*puVar6;
  if (puVar14 == (undefined8 *)0x0) {
    puVar14 = (undefined8 *)operator_new(0x40);
    puVar15 = *(undefined1 **)(param_4 + 2);
    puVar1 = *(undefined1 **)(param_4 + 4);
    uVar2 = *param_4;
    puVar14[6] = 0;
    puVar14[7] = 0;
    uVar3 = (long)puVar1 - (long)puVar15;
    *(undefined4 *)(puVar14 + 4) = uVar2;
    puVar14[5] = 0;
    if (uVar3 != 0) {
      if ((long)uVar3 < 0) {
        if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_004f04ec();
        }
        goto LAB_0050246c;
      }
                    /* try { // try from 00502344 to 00502447 has its CatchHandler @ 00502448 */
      puVar7 = (undefined1 *)operator_new(uVar3);
      puVar14[5] = puVar7;
      puVar14[6] = puVar7;
      puVar14[7] = puVar7 + uVar3;
      puVar16 = puVar15;
      if ((uVar3 < 0x20) || ((ulong)((long)puVar7 - (long)puVar15) < 0x20)) {
LAB_005023b0:
        do {
          puVar15 = puVar16 + 1;
          puVar10 = puVar7 + 1;
          *puVar7 = *puVar16;
          puVar7 = puVar10;
          puVar16 = puVar15;
        } while (puVar15 != puVar1);
      }
      else {
        uVar11 = uVar3 & 0xffffffffffffffe0;
        puVar9 = (undefined8 *)(puVar7 + 0x10);
        puVar16 = puVar15 + uVar11;
        puVar10 = puVar7 + uVar11;
        puVar12 = (undefined8 *)(puVar15 + 0x10);
        uVar13 = uVar11;
        do {
          puVar5 = puVar12 + -1;
          uVar8 = puVar12[-2];
          uVar18 = puVar12[1];
          uVar17 = *puVar12;
          puVar12 = puVar12 + 4;
          uVar13 = uVar13 - 0x20;
          puVar9[-1] = *puVar5;
          puVar9[-2] = uVar8;
          puVar9[1] = uVar18;
          *puVar9 = uVar17;
          puVar9 = puVar9 + 4;
        } while (uVar13 != 0);
        puVar7 = puVar10;
        if (uVar3 != uVar11) goto LAB_005023b0;
      }
      puVar14[6] = puVar10;
    }
    *puVar14 = 0;
    puVar14[1] = 0;
    puVar14[2] = local_60;
    *puVar6 = puVar14;
    puVar9 = puVar14;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      puVar9 = (undefined8 *)*puVar6;
    }
    FUN_0041dcd0(param_1[1],puVar9);
    uVar8 = 1;
    param_1[2] = param_1[2] + 1;
  }
  else {
    uVar8 = 0;
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    auVar19._8_8_ = uVar8;
    auVar19._0_8_ = puVar14;
    return auVar19;
  }
LAB_0050246c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00502470  FUN_00502470 =====

long * FUN_00502470(undefined8 *param_1,long *param_2,long *param_3,long *param_4,uint *param_5)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar5 = param_1 + 1;
  if (plVar5 != param_2) {
    uVar1 = *param_5;
    if (*(uint *)(param_2 + 4) <= uVar1) {
      if (uVar1 <= *(uint *)(param_2 + 4)) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar3 = param_2 + 1;
      plVar7 = (long *)*plVar3;
      plVar8 = param_2;
      plVar6 = plVar7;
      if (plVar7 == (long *)0x0) {
        do {
          plVar4 = (long *)plVar8[2];
          bVar2 = (long *)*plVar4 != plVar8;
          plVar8 = plVar4;
        } while (bVar2);
      }
      else {
        do {
          plVar4 = plVar6;
          plVar6 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      if ((plVar4 != plVar5) && (*(uint *)(plVar4 + 4) <= uVar1)) {
        plVar6 = (long *)*plVar5;
        plVar8 = plVar5;
        while (plVar6 != (long *)0x0) {
          while (plVar8 = plVar6, uVar1 < *(uint *)(plVar8 + 4)) {
            plVar5 = plVar8;
            plVar6 = (long *)*plVar8;
            if ((long *)*plVar8 == (long *)0x0) goto LAB_00502608;
          }
          if (uVar1 <= *(uint *)(plVar8 + 4)) break;
          plVar5 = plVar8 + 1;
          plVar6 = (long *)*plVar5;
        }
LAB_00502608:
        *param_3 = (long)plVar8;
        return plVar5;
      }
      if (plVar7 != (long *)0x0) {
        *param_3 = (long)plVar4;
        return plVar4;
      }
      goto LAB_0050257c;
    }
  }
  if ((long *)*param_1 == param_2) {
    plVar6 = (long *)*param_2;
    plVar8 = param_2;
  }
  else {
    if (param_2 == (long *)0x0) {
                    /* try { // try from 00502624 to 0050264b has its CatchHandler @ 0050264c */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xd1,
                 "__x != nullptr","node shouldn\'t be null");
    }
    plVar6 = (long *)*param_2;
    plVar3 = param_2;
    plVar7 = plVar6;
    if (plVar6 == (long *)0x0) {
      do {
        plVar8 = (long *)plVar3[2];
        bVar2 = (long *)*plVar8 == plVar3;
        plVar3 = plVar8;
      } while (bVar2);
    }
    else {
      do {
        plVar8 = plVar7;
        plVar7 = (long *)plVar8[1];
      } while ((long *)plVar8[1] != (long *)0x0);
    }
    uVar1 = *param_5;
    if (uVar1 <= *(uint *)(plVar8 + 4)) {
      plVar6 = (long *)*plVar5;
      plVar8 = plVar5;
      while (plVar6 != (long *)0x0) {
        while (plVar8 = plVar6, uVar1 < *(uint *)(plVar8 + 4)) {
          plVar5 = plVar8;
          plVar6 = (long *)*plVar8;
          if ((long *)*plVar8 == (long *)0x0) goto LAB_0050256c;
        }
        if (uVar1 <= *(uint *)(plVar8 + 4)) break;
        plVar5 = plVar8 + 1;
        plVar6 = (long *)*plVar5;
      }
LAB_0050256c:
      *param_3 = (long)plVar8;
      return plVar5;
    }
  }
  plVar3 = param_2;
  if (plVar6 != (long *)0x0) {
    *param_3 = (long)plVar8;
    return plVar8 + 1;
  }
LAB_0050257c:
  *param_3 = (long)param_2;
  return plVar3;
}


// ===== 00502650  FUN_00502650 =====

void FUN_00502650(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  
  param_1[2] = 0;
  puVar3 = param_1 + 1;
  *puVar3 = 0;
  *param_1 = puVar3;
  plVar4 = (long *)*param_2;
  while( true ) {
    if (plVar4 == param_2 + 1) {
      return;
    }
                    /* try { // try from 00502698 to 005026a7 has its CatchHandler @ 00502714 */
    FUN_00502730(param_1,puVar3,plVar4 + 4,plVar4 + 4);
    if (plVar4 == (long *)0x0) break;
    plVar1 = (long *)plVar4[1];
    plVar5 = plVar4;
    if ((long *)plVar4[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar5[2];
        bVar2 = (long *)*plVar4 != plVar5;
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
                    /* try { // try from 005026ec to 00502713 has its CatchHandler @ 0050272c */
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
             "__x != nullptr","node shouldn\'t be null");
}


// ===== 00502730  FUN_00502730 =====

undefined8 * FUN_00502730(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)FUN_00502834(param_1,param_2,&local_50,auStack_58,param_3);
  puVar5 = (undefined8 *)*puVar2;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(0x58);
    *(undefined4 *)(puVar5 + 4) = *param_4;
                    /* try { // try from 00502798 to 0050279f has its CatchHandler @ 0050280c */
    FUN_004ffecc(puVar5 + 5,param_4 + 2);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = local_50;
    *puVar2 = puVar5;
    puVar4 = puVar5;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      puVar4 = (undefined8 *)*puVar2;
    }
    puVar2 = (undefined8 *)FUN_0041dcd0(param_1[1],puVar4);
    uVar3 = 1;
    param_1[2] = param_1[2] + 1;
  }
  else {
    uVar3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar2,uVar3);
}


// ===== 00502834  FUN_00502834 =====

long * FUN_00502834(undefined8 *param_1,long *param_2,long *param_3,long *param_4,uint *param_5)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar5 = param_1 + 1;
  if (plVar5 != param_2) {
    uVar1 = *param_5;
    if (*(uint *)(param_2 + 4) <= uVar1) {
      if (uVar1 <= *(uint *)(param_2 + 4)) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar3 = param_2 + 1;
      plVar7 = (long *)*plVar3;
      plVar8 = param_2;
      plVar6 = plVar7;
      if (plVar7 == (long *)0x0) {
        do {
          plVar4 = (long *)plVar8[2];
          bVar2 = (long *)*plVar4 != plVar8;
          plVar8 = plVar4;
        } while (bVar2);
      }
      else {
        do {
          plVar4 = plVar6;
          plVar6 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      if ((plVar4 != plVar5) && (*(uint *)(plVar4 + 4) <= uVar1)) {
        plVar6 = (long *)*plVar5;
        plVar8 = plVar5;
        while (plVar6 != (long *)0x0) {
          while (plVar8 = plVar6, uVar1 < *(uint *)(plVar8 + 4)) {
            plVar5 = plVar8;
            plVar6 = (long *)*plVar8;
            if ((long *)*plVar8 == (long *)0x0) goto LAB_005029cc;
          }
          if (uVar1 <= *(uint *)(plVar8 + 4)) break;
          plVar5 = plVar8 + 1;
          plVar6 = (long *)*plVar5;
        }
LAB_005029cc:
        *param_3 = (long)plVar8;
        return plVar5;
      }
      if (plVar7 != (long *)0x0) {
        *param_3 = (long)plVar4;
        return plVar4;
      }
      goto LAB_00502940;
    }
  }
  if ((long *)*param_1 == param_2) {
    plVar6 = (long *)*param_2;
    plVar8 = param_2;
  }
  else {
    if (param_2 == (long *)0x0) {
                    /* try { // try from 005029e8 to 00502a0f has its CatchHandler @ 00502a10 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xd1,
                 "__x != nullptr","node shouldn\'t be null");
    }
    plVar6 = (long *)*param_2;
    plVar3 = param_2;
    plVar7 = plVar6;
    if (plVar6 == (long *)0x0) {
      do {
        plVar8 = (long *)plVar3[2];
        bVar2 = (long *)*plVar8 == plVar3;
        plVar3 = plVar8;
      } while (bVar2);
    }
    else {
      do {
        plVar8 = plVar7;
        plVar7 = (long *)plVar8[1];
      } while ((long *)plVar8[1] != (long *)0x0);
    }
    uVar1 = *param_5;
    if (uVar1 <= *(uint *)(plVar8 + 4)) {
      plVar6 = (long *)*plVar5;
      plVar8 = plVar5;
      while (plVar6 != (long *)0x0) {
        while (plVar8 = plVar6, uVar1 < *(uint *)(plVar8 + 4)) {
          plVar5 = plVar8;
          plVar6 = (long *)*plVar8;
          if ((long *)*plVar8 == (long *)0x0) goto LAB_00502930;
        }
        if (uVar1 <= *(uint *)(plVar8 + 4)) break;
        plVar5 = plVar8 + 1;
        plVar6 = (long *)*plVar5;
      }
LAB_00502930:
      *param_3 = (long)plVar8;
      return plVar5;
    }
  }
  plVar3 = param_2;
  if (plVar6 != (long *)0x0) {
    *param_3 = (long)plVar8;
    return plVar8 + 1;
  }
LAB_00502940:
  *param_3 = (long)param_2;
  return plVar3;
}


// ===== 00502a14  FUN_00502a14 =====

void FUN_00502a14(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  
  param_1[2] = 0;
  puVar3 = param_1 + 1;
  *puVar3 = 0;
  *param_1 = puVar3;
  plVar4 = (long *)*param_2;
  while( true ) {
    if (plVar4 == param_2 + 1) {
      return;
    }
                    /* try { // try from 00502a5c to 00502a6b has its CatchHandler @ 00502ad8 */
    FUN_00502af4(param_1,puVar3,plVar4 + 4,plVar4 + 4);
    if (plVar4 == (long *)0x0) break;
    plVar1 = (long *)plVar4[1];
    plVar5 = plVar4;
    if ((long *)plVar4[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar5[2];
        bVar2 = (long *)*plVar4 != plVar5;
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
                    /* try { // try from 00502ab0 to 00502ad7 has its CatchHandler @ 00502af0 */
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
             "__x != nullptr","node shouldn\'t be null");
}


// ===== 00502af4  FUN_00502af4 =====

undefined8 * FUN_00502af4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)FUN_00502bf8(param_1,param_2,&local_50,auStack_58,param_3);
  puVar5 = (undefined8 *)*puVar2;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(0x80);
    puVar5[4] = *param_4;
                    /* try { // try from 00502b5c to 00502b63 has its CatchHandler @ 00502bd0 */
    FUN_00500224(puVar5 + 5,param_4 + 1);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = local_50;
    *puVar2 = puVar5;
    puVar4 = puVar5;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      puVar4 = (undefined8 *)*puVar2;
    }
    puVar2 = (undefined8 *)FUN_0041dcd0(param_1[1],puVar4);
    uVar3 = 1;
    param_1[2] = param_1[2] + 1;
  }
  else {
    uVar3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar2,uVar3);
}


// ===== 00502bf8  FUN_00502bf8 =====

long * FUN_00502bf8(undefined8 *param_1,long *param_2,long *param_3,long *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar7 = param_1 + 1;
  if (plVar7 == param_2) {
LAB_00502c30:
    if ((long *)*param_1 == param_2) {
      plVar6 = (long *)*param_2;
      plVar9 = param_2;
    }
    else {
      if (param_2 == (long *)0x0) {
                    /* try { // try from 00502e50 to 00502e77 has its CatchHandler @ 00502e78 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xd1,
                   "__x != nullptr","node shouldn\'t be null");
      }
      plVar6 = (long *)*param_2;
      plVar8 = param_2;
      plVar5 = plVar6;
      if (plVar6 == (long *)0x0) {
        do {
          plVar9 = (long *)plVar8[2];
          bVar4 = (long *)*plVar9 == plVar8;
          plVar8 = plVar9;
        } while (bVar4);
      }
      else {
        do {
          plVar9 = plVar5;
          plVar5 = (long *)plVar9[1];
        } while ((long *)plVar9[1] != (long *)0x0);
      }
      iVar2 = *param_5;
      uVar3 = param_5[1];
      bVar4 = *(uint *)((long)plVar9 + 0x24) < uVar3;
      if ((int)plVar9[4] != iVar2) {
        bVar4 = (int)plVar9[4] < iVar2;
      }
      if (!bVar4) {
        plVar9 = (long *)*plVar7;
        param_2 = plVar7;
        while (plVar7 = param_2, plVar6 = plVar9, plVar9 != (long *)0x0) {
          while( true ) {
            iVar1 = (int)plVar6[4];
            bVar4 = uVar3 < *(uint *)((long)plVar6 + 0x24);
            if (iVar2 != iVar1) {
              bVar4 = iVar2 < iVar1;
            }
            if (bVar4) break;
            bVar4 = *(uint *)((long)plVar6 + 0x24) < uVar3;
            if (iVar2 != iVar1) {
              bVar4 = iVar1 < iVar2;
            }
            plVar7 = plVar6;
            if (!bVar4) goto LAB_00502d60;
            param_2 = plVar6 + 1;
            plVar6 = (long *)*param_2;
            if ((long *)*param_2 == (long *)0x0) goto LAB_00502d60;
          }
          param_2 = plVar6;
          plVar9 = (long *)*plVar6;
        }
        goto LAB_00502d60;
      }
    }
    if (plVar6 == (long *)0x0) {
      *param_3 = (long)param_2;
    }
    else {
      param_2 = plVar9 + 1;
      *param_3 = (long)plVar9;
    }
  }
  else {
    iVar2 = (int)param_2[4];
    iVar1 = *param_5;
    uVar3 = param_5[1];
    bVar4 = uVar3 < *(uint *)((long)param_2 + 0x24);
    if (iVar1 != iVar2) {
      bVar4 = iVar1 < iVar2;
    }
    if (bVar4) goto LAB_00502c30;
    bVar4 = *(uint *)((long)param_2 + 0x24) < uVar3;
    if (iVar1 != iVar2) {
      bVar4 = iVar2 < iVar1;
    }
    if (!bVar4) {
      *param_3 = (long)param_2;
      *param_4 = (long)param_2;
      return param_4;
    }
    plVar8 = (long *)param_2[1];
    plVar9 = param_2;
    plVar6 = plVar8;
    if (plVar8 == (long *)0x0) {
      do {
        plVar5 = (long *)plVar9[2];
        bVar4 = (long *)*plVar5 != plVar9;
        plVar9 = plVar5;
      } while (bVar4);
    }
    else {
      do {
        plVar5 = plVar6;
        plVar6 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
    if (plVar5 == plVar7) {
LAB_00502dc4:
      if (plVar8 != (long *)0x0) {
        *param_3 = (long)plVar5;
        return plVar5;
      }
      *param_3 = (long)param_2;
      return param_2 + 1;
    }
    bVar4 = uVar3 < *(uint *)((long)plVar5 + 0x24);
    if (iVar1 != (int)plVar5[4]) {
      bVar4 = iVar1 < (int)plVar5[4];
    }
    if (bVar4) goto LAB_00502dc4;
    plVar9 = (long *)*plVar7;
    param_2 = plVar7;
    while (plVar7 = param_2, plVar9 != (long *)0x0) {
      while( true ) {
        plVar7 = plVar9;
        iVar2 = (int)plVar7[4];
        bVar4 = uVar3 < *(uint *)((long)plVar7 + 0x24);
        if (iVar1 != iVar2) {
          bVar4 = iVar1 < iVar2;
        }
        if (bVar4) break;
        bVar4 = *(uint *)((long)plVar7 + 0x24) < uVar3;
        if (iVar1 != iVar2) {
          bVar4 = iVar2 < iVar1;
        }
        if (!bVar4) goto LAB_00502d60;
        param_2 = plVar7 + 1;
        plVar9 = (long *)*param_2;
        if ((long *)*param_2 == (long *)0x0) goto LAB_00502d60;
      }
      param_2 = plVar7;
      plVar9 = (long *)*plVar7;
    }
LAB_00502d60:
    *param_3 = (long)plVar7;
  }
  return param_2;
}


// ===== 00502e7c  FUN_00502e7c =====

undefined8 * FUN_00502e7c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)FUN_00502f78(param_1,param_2,&local_50,auStack_58,param_3);
  puVar5 = (undefined8 *)*puVar2;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(0x50);
                    /* try { // try from 00502edc to 00502ee3 has its CatchHandler @ 00502f50 */
    FUN_0050081c(puVar5 + 4,param_4);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = local_50;
    *puVar2 = puVar5;
    puVar4 = puVar5;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      puVar4 = (undefined8 *)*puVar2;
    }
    puVar2 = (undefined8 *)FUN_0041dcd0(param_1[1],puVar4);
    uVar3 = 1;
    param_1[2] = param_1[2] + 1;
  }
  else {
    uVar3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar2,uVar3);
}


// ===== 00502f78  FUN_00502f78 =====

long * FUN_00502f78(undefined8 *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5
                   )

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar1 = param_1 + 1;
  if (plVar1 != param_2) {
    uVar3 = FUN_005a2384(param_5,param_2 + 4);
    if ((uVar3 & 1) == 0) {
      uVar3 = FUN_005a2384(param_2 + 4,param_5);
      if ((uVar3 & 1) == 0) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      if (param_2 == (long *)0x0) {
                    /* try { // try from 005031ac to 005031d3 has its CatchHandler @ 005031d4 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
                   "__x != nullptr","node shouldn\'t be null");
      }
      plVar6 = param_2 + 1;
      plVar4 = (long *)*plVar6;
      plVar7 = param_2;
      plVar5 = plVar4;
      if (plVar4 == (long *)0x0) {
        do {
          plVar8 = (long *)plVar7[2];
          bVar2 = (long *)*plVar8 != plVar7;
          plVar7 = plVar8;
        } while (bVar2);
      }
      else {
        do {
          plVar8 = plVar5;
          plVar5 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
      if (plVar8 != plVar1) {
        uVar3 = FUN_005a2384(param_5,plVar8 + 4);
        if ((uVar3 & 1) == 0) {
          plVar5 = (long *)*plVar1;
          plVar8 = plVar1;
          while (plVar7 = plVar8, plVar5 != (long *)0x0) {
            while( true ) {
              plVar7 = plVar5;
              uVar3 = FUN_005a2384(param_5,plVar7 + 4);
              if ((uVar3 & 1) != 0) break;
              uVar3 = FUN_005a2384(plVar7 + 4,param_5);
              if ((uVar3 & 1) == 0) goto LAB_0050310c;
              plVar8 = plVar7 + 1;
              plVar5 = (long *)*plVar8;
              if ((long *)*plVar8 == (long *)0x0) goto LAB_0050310c;
            }
            plVar8 = plVar7;
            plVar5 = (long *)*plVar7;
          }
          goto LAB_0050310c;
        }
        plVar4 = (long *)*plVar6;
      }
      plVar7 = plVar8;
      if (plVar4 == (long *)0x0) {
        *param_3 = (long)param_2;
        return plVar6;
      }
      goto LAB_0050310c;
    }
  }
  plVar7 = param_2;
  if ((long *)*param_1 != param_2) {
    if (param_2 == (long *)0x0) {
                    /* try { // try from 00503184 to 005031ab has its CatchHandler @ 005031d8 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xd1,
                 "__x != nullptr","node shouldn\'t be null");
    }
    plVar8 = param_2;
    plVar5 = (long *)*param_2;
    if ((long *)*param_2 == (long *)0x0) {
      do {
        plVar7 = (long *)plVar8[2];
        bVar2 = (long *)*plVar7 == plVar8;
        plVar8 = plVar7;
      } while (bVar2);
    }
    else {
      do {
        plVar7 = plVar5;
        plVar5 = (long *)plVar7[1];
      } while ((long *)plVar7[1] != (long *)0x0);
    }
    uVar3 = FUN_005a2384(plVar7 + 4,param_5);
    if ((uVar3 & 1) == 0) {
      plVar5 = (long *)*plVar1;
      plVar8 = plVar1;
      while (plVar7 = plVar8, plVar5 != (long *)0x0) {
        while( true ) {
          plVar7 = plVar5;
          uVar3 = FUN_005a2384(param_5,plVar7 + 4);
          if ((uVar3 & 1) != 0) break;
          uVar3 = FUN_005a2384(plVar7 + 4,param_5);
          if ((uVar3 & 1) == 0) goto LAB_0050310c;
          plVar8 = plVar7 + 1;
          plVar5 = (long *)*plVar8;
          if ((long *)*plVar8 == (long *)0x0) goto LAB_0050310c;
        }
        plVar8 = plVar7;
        plVar5 = (long *)*plVar7;
      }
      goto LAB_0050310c;
    }
  }
  if (*param_2 == 0) {
    *param_3 = (long)param_2;
    return param_2;
  }
  plVar8 = plVar7 + 1;
LAB_0050310c:
  *param_3 = (long)plVar7;
  return plVar8;
}


// ===== 005031dc  FUN_005031dc =====

undefined8 * FUN_005031dc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)FUN_005032d8(param_1,param_2,&local_50,auStack_58,param_3);
  puVar5 = (undefined8 *)*puVar2;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(0x58);
                    /* try { // try from 0050323c to 00503243 has its CatchHandler @ 005032b0 */
    FUN_005009c8(puVar5 + 4,param_4);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = local_50;
    *puVar2 = puVar5;
    puVar4 = puVar5;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      puVar4 = (undefined8 *)*puVar2;
    }
    puVar2 = (undefined8 *)FUN_0041dcd0(param_1[1],puVar4);
    uVar3 = 1;
    param_1[2] = param_1[2] + 1;
  }
  else {
    uVar3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar2,uVar3);
}


// ===== 005032d8  FUN_005032d8 =====

long * FUN_005032d8(long *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  if (param_1 + 1 != param_2) {
    plVar4 = param_2 + 4;
    uVar3 = FUN_005a2384(param_5,plVar4);
    if (((uVar3 & 1) == 0) &&
       ((uVar3 = FUN_005a2384(plVar4,param_5), (uVar3 & 1) != 0 ||
        ((ulong)param_2[7] <= *(ulong *)(param_5 + 0x18))))) {
      uVar3 = FUN_005a2384(plVar4,param_5);
      if (((uVar3 & 1) == 0) &&
         ((uVar3 = FUN_005a2384(param_5,plVar4), (uVar3 & 1) != 0 ||
          (*(ulong *)(param_5 + 0x18) <= (ulong)param_2[7])))) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      if (param_2 == (long *)0x0) {
                    /* try { // try from 0050350c to 00503533 has its CatchHandler @ 00503534 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
                   "__x != nullptr","node shouldn\'t be null");
      }
      plVar5 = param_2 + 1;
      plVar4 = param_2;
      plVar1 = (long *)*plVar5;
      if ((long *)*plVar5 == (long *)0x0) {
        do {
          plVar6 = (long *)plVar4[2];
          bVar2 = (long *)*plVar6 != plVar4;
          plVar4 = plVar6;
        } while (bVar2);
      }
      else {
        do {
          plVar6 = plVar1;
          plVar1 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      if (plVar6 != param_1 + 1) {
        uVar3 = FUN_005a2384(param_5,plVar6 + 4);
        if (((uVar3 & 1) == 0) &&
           ((uVar3 = FUN_005a2384(plVar6 + 4,param_5), (uVar3 & 1) != 0 ||
            ((ulong)plVar6[7] <= *(ulong *)(param_5 + 0x18))))) goto LAB_005034c0;
      }
      if (*plVar5 != 0) {
        *param_3 = (long)plVar6;
        return plVar6;
      }
      goto LAB_0050340c;
    }
  }
  plVar4 = param_2;
  if ((long *)*param_1 != param_2) {
    if (param_2 == (long *)0x0) {
                    /* try { // try from 005034e4 to 0050350b has its CatchHandler @ 00503538 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xd1,
                 "__x != nullptr","node shouldn\'t be null");
    }
    plVar5 = param_2;
    plVar1 = (long *)*param_2;
    if ((long *)*param_2 == (long *)0x0) {
      do {
        plVar4 = (long *)plVar5[2];
        bVar2 = (long *)*plVar4 == plVar5;
        plVar5 = plVar4;
      } while (bVar2);
    }
    else {
      do {
        plVar4 = plVar1;
        plVar1 = (long *)plVar4[1];
      } while ((long *)plVar4[1] != (long *)0x0);
    }
    uVar3 = FUN_005a2384(plVar4 + 4,param_5);
    if (((uVar3 & 1) == 0) &&
       ((uVar3 = FUN_005a2384(param_5,plVar4 + 4), (uVar3 & 1) != 0 ||
        (*(ulong *)(param_5 + 0x18) <= (ulong)plVar4[7])))) {
LAB_005034c0:
      plVar4 = (long *)FUN_0050353c(param_1,param_3,param_5);
      return plVar4;
    }
  }
  plVar5 = param_2;
  if (*param_2 != 0) {
    *param_3 = (long)plVar4;
    return plVar4 + 1;
  }
LAB_0050340c:
  *param_3 = (long)param_2;
  return plVar5;
}


// ===== 0050353c  FUN_0050353c =====

long * FUN_0050353c(long param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = *(long **)(param_1 + 8);
  plVar3 = (long *)(param_1 + 8);
  while (plVar4 = plVar3, plVar2 != (long *)0x0) {
    while( true ) {
      plVar4 = plVar2;
      plVar2 = plVar4 + 4;
      uVar1 = FUN_005a2384(param_3,plVar2);
      if (((uVar1 & 1) != 0) ||
         ((uVar1 = FUN_005a2384(plVar2,param_3), (uVar1 & 1) == 0 &&
          (*(ulong *)(param_3 + 0x18) < (ulong)plVar4[7])))) break;
      uVar1 = FUN_005a2384(plVar2,param_3);
      if (((uVar1 & 1) == 0) &&
         ((uVar1 = FUN_005a2384(param_3,plVar2), (uVar1 & 1) != 0 ||
          (*(ulong *)(param_3 + 0x18) <= (ulong)plVar4[7])))) goto LAB_005035f0;
      plVar3 = plVar4 + 1;
      plVar2 = (long *)*plVar3;
      if ((long *)*plVar3 == (long *)0x0) goto LAB_005035f0;
    }
    plVar3 = plVar4;
    plVar2 = (long *)*plVar4;
  }
LAB_005035f0:
  *param_2 = plVar4;
  return plVar3;
}


// ===== 0050360c  FUN_0050360c =====

void FUN_0050360c(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x168] = 0;
                    /* try { // try from 00503624 to 00503627 has its CatchHandler @ 00503634 */
  FUN_005036b8();
  return;
}


// ===== 005036b8  FUN_005036b8 =====

void FUN_005036b8(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x168) != '\0') {
    if (*(char *)(param_1 + 0x168) != '\0') {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x167,
                 "!has_value()","__construct called for engaged __optional_storage");
    }
    FUN_004ffecc(param_1);
                    /* try { // try from 005036ec to 005036ef has its CatchHandler @ 0050372c */
    FUN_004fe4d4(param_1 + 0x30,param_2 + 0x30);
    *(undefined1 *)(param_1 + 0x168) = 1;
  }
  return;
}


// ===== 005037ac  FUN_005037ac =====

void FUN_005037ac(undefined8 param_1,undefined8 param_2)

{
  FUN_005037d4(param_2);
  return;
}


// ===== 005037b4  FUN_005037b4 =====

void FUN_005037b4(undefined8 param_1,undefined8 param_2)

{
  FUN_00503964(param_2);
  return;
}


// ===== 005037bc  FUN_005037bc =====

void FUN_005037bc(undefined8 param_1,undefined8 param_2)

{
  FUN_004f955c(param_2);
  return;
}


// ===== 005037c4  FUN_005037c4 =====

void FUN_005037c4(undefined8 param_1,undefined8 param_2)

{
  FUN_00503a5c(param_2);
  return;
}


// ===== 005037cc  FUN_005037cc =====

void FUN_005037cc(undefined8 param_1,undefined8 param_2)

{
  FUN_004fc83c(param_2);
  return;
}


// ===== 005037d4  FUN_005037d4 =====

void FUN_005037d4(undefined8 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x48) != '\0') {
    puVar2 = (undefined1 *)param_1[0x45];
    if (0 < param_1[0x46] - (long)puVar2) {
      uVar3 = (param_1[0x46] - (long)puVar2) + 1;
      do {
        uVar3 = uVar3 - 1;
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      } while (1 < uVar3);
      puVar2 = (undefined1 *)param_1[0x45];
    }
    if (puVar2 != (undefined1 *)0x0) {
      param_1[0x46] = puVar2;
      operator_delete(puVar2);
    }
  }
  if (*(char *)(param_1 + 0x44) != '\0') {
    puVar2 = (undefined1 *)param_1[0x41];
    if (0 < param_1[0x42] - (long)puVar2) {
      uVar3 = (param_1[0x42] - (long)puVar2) + 1;
      do {
        uVar3 = uVar3 - 1;
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      } while (1 < uVar3);
      puVar2 = (undefined1 *)param_1[0x41];
    }
    if (puVar2 != (undefined1 *)0x0) {
      param_1[0x42] = puVar2;
      operator_delete(puVar2);
    }
  }
  puVar2 = (undefined1 *)param_1[0x3e];
  if (0 < param_1[0x3f] - (long)puVar2) {
    uVar3 = (param_1[0x3f] - (long)puVar2) + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (1 < uVar3);
    puVar2 = (undefined1 *)param_1[0x3e];
  }
  if (puVar2 != (undefined1 *)0x0) {
    param_1[0x3f] = puVar2;
    operator_delete(puVar2);
  }
  if ((ulong)*(byte *)(param_1 + 0x3c) != 0xff) {
                    /* try { // try from 005038c4 to 005038cb has its CatchHandler @ 00503960 */
    (*(code *)(&PTR_FUN_00d1f950)[*(byte *)(param_1 + 0x3c)])(auStack_30,param_1 + 9);
  }
  puVar2 = (undefined1 *)param_1[5];
  *(undefined1 *)(param_1 + 0x3c) = 0xff;
  if (0 < param_1[6] - (long)puVar2) {
    uVar3 = (param_1[6] - (long)puVar2) + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (1 < uVar3);
    puVar2 = (undefined1 *)param_1[5];
  }
  if (puVar2 != (undefined1 *)0x0) {
    param_1[6] = puVar2;
    operator_delete(puVar2);
  }
  puVar2 = (undefined1 *)*param_1;
  if (0 < param_1[1] - (long)puVar2) {
    uVar3 = (param_1[1] - (long)puVar2) + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (1 < uVar3);
    puVar2 = (undefined1 *)*param_1;
  }
  if (puVar2 != (undefined1 *)0x0) {
    param_1[1] = puVar2;
    operator_delete(puVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00503964  FUN_00503964 =====

void FUN_00503964(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  puVar1 = (undefined1 *)param_1[0xb];
  if (0 < param_1[0xc] - (long)puVar1) {
    uVar2 = (param_1[0xc] - (long)puVar1) + 1;
    do {
      uVar2 = uVar2 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar2);
    puVar1 = (undefined1 *)param_1[0xb];
  }
  if (puVar1 != (undefined1 *)0x0) {
    param_1[0xc] = puVar1;
    operator_delete(puVar1);
  }
  puVar1 = (undefined1 *)param_1[8];
  if (0 < param_1[9] - (long)puVar1) {
    uVar2 = (param_1[9] - (long)puVar1) + 1;
    do {
      uVar2 = uVar2 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar2);
    puVar1 = (undefined1 *)param_1[8];
  }
  if (puVar1 != (undefined1 *)0x0) {
    param_1[9] = puVar1;
    operator_delete(puVar1);
  }
  puVar1 = (undefined1 *)param_1[5];
  if (0 < param_1[6] - (long)puVar1) {
    uVar2 = (param_1[6] - (long)puVar1) + 1;
    do {
      uVar2 = uVar2 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar2);
    puVar1 = (undefined1 *)param_1[5];
  }
  if (puVar1 != (undefined1 *)0x0) {
    param_1[6] = puVar1;
    operator_delete(puVar1);
  }
  puVar1 = (undefined1 *)*param_1;
  if (0 < param_1[1] - (long)puVar1) {
    uVar2 = (param_1[1] - (long)puVar1) + 1;
    do {
      uVar2 = uVar2 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar2);
    puVar1 = (undefined1 *)*param_1;
  }
  if (puVar1 != (undefined1 *)0x0) {
    param_1[1] = puVar1;
    operator_delete(puVar1);
    return;
  }
  return;
}


// ===== 00503a5c  FUN_00503a5c =====

void FUN_00503a5c(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  
  puVar1 = *(undefined1 **)(param_1 + 0xa8);
  lVar2 = *(long *)(param_1 + 0xb0) - (long)puVar1;
  if (0 < lVar2) {
    uVar3 = lVar2 + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar3);
    puVar1 = *(undefined1 **)(param_1 + 0xa8);
  }
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0xb0) = puVar1;
    operator_delete(puVar1);
  }
  puVar1 = *(undefined1 **)(param_1 + 0x88);
  lVar2 = *(long *)(param_1 + 0x90) - (long)puVar1;
  if (0 < lVar2) {
    uVar3 = lVar2 + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar3);
    puVar1 = *(undefined1 **)(param_1 + 0x88);
  }
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x90) = puVar1;
    operator_delete(puVar1);
  }
  pvVar5 = *(void **)(param_1 + 0x70);
  if (pvVar5 != (void *)0x0) {
    pvVar6 = pvVar5;
    pvVar4 = *(void **)(param_1 + 0x78);
    if (*(void **)(param_1 + 0x78) != pvVar5) {
      do {
        puVar1 = *(undefined1 **)((long)pvVar4 + -0x18);
        lVar2 = *(long *)((long)pvVar4 + -0x10) - (long)puVar1;
        if (0 < lVar2) {
          uVar3 = lVar2 + 1;
          do {
            uVar3 = uVar3 - 1;
            *puVar1 = 0;
            puVar1 = puVar1 + 1;
          } while (1 < uVar3);
          puVar1 = *(undefined1 **)((long)pvVar4 + -0x18);
        }
        pvVar6 = (void *)((long)pvVar4 + -0x20);
        if (puVar1 != (undefined1 *)0x0) {
          *(undefined1 **)((long)pvVar4 + -0x10) = puVar1;
          operator_delete(puVar1);
        }
        pvVar4 = pvVar6;
      } while (pvVar6 != pvVar5);
      pvVar6 = *(void **)(param_1 + 0x70);
    }
    *(void **)(param_1 + 0x78) = pvVar5;
    operator_delete(pvVar6);
  }
  FUN_00503b60(param_1);
  return;
}


// ===== 00503b60  FUN_00503b60 =====

void FUN_00503b60(long param_1)

{
  undefined1 *puVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  void *pvVar6;
  
  pvVar5 = *(void **)(param_1 + 0x58);
  if (pvVar5 != (void *)0x0) {
    pvVar6 = pvVar5;
    pvVar2 = *(void **)(param_1 + 0x60);
    if (*(void **)(param_1 + 0x60) != pvVar5) {
      do {
        puVar1 = *(undefined1 **)((long)pvVar2 + -0x18);
        lVar3 = *(long *)((long)pvVar2 + -0x10) - (long)puVar1;
        if (0 < lVar3) {
          uVar4 = lVar3 + 1;
          do {
            uVar4 = uVar4 - 1;
            *puVar1 = 0;
            puVar1 = puVar1 + 1;
          } while (1 < uVar4);
          puVar1 = *(undefined1 **)((long)pvVar2 + -0x18);
        }
        pvVar6 = (void *)((long)pvVar2 + -0x20);
        if (puVar1 != (undefined1 *)0x0) {
          *(undefined1 **)((long)pvVar2 + -0x10) = puVar1;
          operator_delete(puVar1);
        }
        pvVar2 = pvVar6;
      } while (pvVar6 != pvVar5);
      pvVar6 = *(void **)(param_1 + 0x58);
    }
    *(void **)(param_1 + 0x60) = pvVar5;
    operator_delete(pvVar6);
  }
  puVar1 = *(undefined1 **)(param_1 + 0x40);
  lVar3 = *(long *)(param_1 + 0x48) - (long)puVar1;
  if (0 < lVar3) {
    uVar4 = lVar3 + 1;
    do {
      uVar4 = uVar4 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar4);
    puVar1 = *(undefined1 **)(param_1 + 0x40);
  }
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x48) = puVar1;
    operator_delete(puVar1);
  }
  puVar1 = *(undefined1 **)(param_1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x30) - (long)puVar1;
  if (0 < lVar3) {
    uVar4 = lVar3 + 1;
    do {
      uVar4 = uVar4 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar4);
    puVar1 = *(undefined1 **)(param_1 + 0x28);
  }
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x30) = puVar1;
    operator_delete(puVar1);
  }
  puVar1 = *(undefined1 **)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10) - (long)puVar1;
  if (0 < lVar3) {
    uVar4 = lVar3 + 1;
    do {
      uVar4 = uVar4 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar4);
    puVar1 = *(undefined1 **)(param_1 + 8);
  }
  if (puVar1 == (undefined1 *)0x0) {
    return;
  }
  *(undefined1 **)(param_1 + 0x10) = puVar1;
  operator_delete(puVar1);
  return;
}


// ===== 00503c9c  FUN_00503c9c =====

void FUN_00503c9c(undefined8 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pvVar6 = (void *)*param_1;
  if (pvVar6 != (void *)0x0) {
    pvVar7 = (void *)param_1[1];
    pvVar5 = pvVar6;
    if (pvVar7 != pvVar6) {
      do {
        puVar2 = *(undefined1 **)((long)pvVar7 + -0x18);
        lVar3 = *(long *)((long)pvVar7 + -0x10) - (long)puVar2;
        if (0 < lVar3) {
          uVar4 = lVar3 + 1;
          do {
            uVar4 = uVar4 - 1;
            *puVar2 = 0;
            puVar2 = puVar2 + 1;
          } while (1 < uVar4);
          puVar2 = *(undefined1 **)((long)pvVar7 + -0x18);
        }
        pvVar5 = (void *)((long)pvVar7 + -0x48);
        if (puVar2 != (undefined1 *)0x0) {
          *(undefined1 **)((long)pvVar7 + -0x10) = puVar2;
          operator_delete(puVar2);
        }
        if ((ulong)*(byte *)((long)pvVar7 + -0x20) != 0xff) {
                    /* try { // try from 00503d48 to 00503d53 has its CatchHandler @ 00503d94 */
          (*(code *)(&PTR_FUN_00d1f930)[*(byte *)((long)pvVar7 + -0x20)])(auStack_60,pvVar5);
        }
        *(undefined1 *)((long)pvVar7 + -0x20) = 0xff;
        pvVar7 = pvVar5;
      } while (pvVar5 != pvVar6);
      pvVar5 = (void *)*param_1;
    }
    param_1[1] = pvVar6;
    operator_delete(pvVar5);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00503d98  FUN_00503d98 =====

void FUN_00503d98(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x3f,"__loc != nullptr","null pointer given to destroy_at");
  }
  puVar1 = (undefined1 *)param_1[6];
  if (0 < param_1[7] - (long)puVar1) {
    uVar2 = (param_1[7] - (long)puVar1) + 1;
    do {
      uVar2 = uVar2 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar2);
    puVar1 = (undefined1 *)param_1[6];
  }
  if (puVar1 != (undefined1 *)0x0) {
    param_1[7] = puVar1;
    operator_delete(puVar1);
  }
  puVar1 = (undefined1 *)param_1[3];
  if (0 < param_1[4] - (long)puVar1) {
    uVar2 = (param_1[4] - (long)puVar1) + 1;
    do {
      uVar2 = uVar2 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar2);
    puVar1 = (undefined1 *)param_1[3];
  }
  if (puVar1 != (undefined1 *)0x0) {
    param_1[4] = puVar1;
    operator_delete(puVar1);
  }
  puVar1 = (undefined1 *)*param_1;
  if (0 < param_1[1] - (long)puVar1) {
    uVar2 = (param_1[1] - (long)puVar1) + 1;
    do {
      uVar2 = uVar2 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar2);
    puVar1 = (undefined1 *)*param_1;
  }
  if (puVar1 != (undefined1 *)0x0) {
    param_1[1] = puVar1;
    operator_delete(puVar1);
    return;
  }
  return;
}


// ===== 00503e88  FUN_00503e88 =====

void FUN_00503e88(undefined8 *param_1,long *param_2,long *param_3,long *param_4,long *param_5,
                 undefined8 *param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  byte *pbVar4;
  bool bVar5;
  ulong *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  plVar9 = (long *)*param_2;
  plVar8 = plVar9;
  if ((plVar9 != (long *)*param_3) &&
     (plVar7 = (long *)*param_4, plVar8 = (long *)*param_3, plVar7 != (long *)*param_5)) {
    do {
      uVar12 = plVar7[4];
      puVar6 = (ulong *)(plVar9 + 4);
      uVar10 = *puVar6;
      if (uVar10 == uVar12) {
        pbVar11 = (byte *)plVar7[5];
        pbVar1 = (byte *)plVar9[5];
        pbVar2 = (byte *)plVar9[6];
        pbVar4 = pbVar11;
        pbVar13 = pbVar1;
        while (pbVar4 != (byte *)plVar7[6]) {
          if (pbVar13 == pbVar2) goto LAB_00503f94;
          if (*pbVar13 < *pbVar4) goto LAB_00503f94;
          if (*pbVar4 < *pbVar13) break;
          pbVar13 = pbVar13 + 1;
          pbVar4 = pbVar4 + 1;
        }
        if (pbVar1 != pbVar2) {
          do {
            pbVar13 = pbVar1 + 1;
            if (pbVar11 == (byte *)plVar7[6]) {
LAB_00504088:
              if (plVar7 != (long *)0x0) goto LAB_0050408c;
              if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 005041e8 to 0050420f has its CatchHandler @ 00504250 */
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s:%d: assertion %s failed: %s",
                           "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2
                           ,"__x != nullptr","node shouldn\'t be null");
              }
              goto LAB_00504248;
            }
            if (*pbVar11 < *pbVar1) goto LAB_00504088;
          } while ((*pbVar11 <= *pbVar1) &&
                  (pbVar11 = pbVar11 + 1, pbVar1 = pbVar13, pbVar13 != pbVar2));
          if (plVar9 == (long *)0x0) {
            if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 00504220 to 00504247 has its CatchHandler @ 0050424c */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
                         "__x != nullptr","node shouldn\'t be null");
            }
            goto LAB_00504248;
          }
        }
LAB_00504020:
        plVar8 = (long *)plVar9[1];
        if ((long *)plVar9[1] == (long *)0x0) {
          do {
            plVar7 = (long *)plVar9[2];
            bVar5 = (long *)*plVar7 != plVar9;
            plVar9 = plVar7;
          } while (bVar5);
        }
        else {
          do {
            plVar7 = plVar8;
            plVar8 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
        }
        *param_2 = (long)plVar7;
        plVar8 = (long *)*param_4;
        if (plVar8 == (long *)0x0) {
          if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 005041b0 to 005041d7 has its CatchHandler @ 00504254 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
                       "__x != nullptr","node shouldn\'t be null");
          }
          goto LAB_00504248;
        }
        plVar7 = (long *)plVar8[1];
        if ((long *)plVar8[1] == (long *)0x0) {
          do {
            plVar9 = (long *)plVar8[2];
            bVar5 = (long *)*plVar9 != plVar8;
            plVar8 = plVar9;
          } while (bVar5);
        }
        else {
          do {
            plVar9 = plVar7;
            plVar7 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
LAB_005040b8:
        *param_4 = (long)plVar9;
      }
      else {
        if (uVar12 <= uVar10) {
          if (uVar10 <= uVar12) goto LAB_00504020;
LAB_0050408c:
          plVar8 = (long *)plVar7[1];
          if ((long *)plVar7[1] == (long *)0x0) {
            do {
              plVar9 = (long *)plVar7[2];
              bVar5 = (long *)*plVar9 != plVar7;
              plVar7 = plVar9;
            } while (bVar5);
          }
          else {
            do {
              plVar9 = plVar8;
              plVar8 = (long *)*plVar9;
            } while ((long *)*plVar9 != (long *)0x0);
          }
          goto LAB_005040b8;
        }
LAB_00503f94:
        plVar8 = (long *)FUN_0044224c(*param_6,param_6[1],puVar6,puVar6);
        param_6[1] = plVar8;
        if (plVar8 == (long *)0x0) {
          if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 00504140 to 00504167 has its CatchHandler @ 0050425c */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
                       "__x != nullptr","node shouldn\'t be null");
          }
          goto LAB_00504248;
        }
        plVar9 = (long *)plVar8[1];
        if ((long *)plVar8[1] == (long *)0x0) {
          do {
            plVar7 = (long *)plVar8[2];
            bVar5 = (long *)*plVar7 != plVar8;
            plVar8 = plVar7;
          } while (bVar5);
        }
        else {
          do {
            plVar7 = plVar9;
            plVar9 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
        }
        param_6[1] = plVar7;
        plVar8 = (long *)*param_2;
        if (plVar8 == (long *)0x0) {
          if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 00504178 to 0050419f has its CatchHandler @ 00504258 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
                       "__x != nullptr","node shouldn\'t be null");
          }
          goto LAB_00504248;
        }
        plVar9 = (long *)plVar8[1];
        if ((long *)plVar8[1] == (long *)0x0) {
          do {
            plVar7 = (long *)plVar8[2];
            bVar5 = (long *)*plVar7 != plVar8;
            plVar8 = plVar7;
          } while (bVar5);
        }
        else {
          do {
            plVar7 = plVar9;
            plVar9 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
        }
        *param_2 = (long)plVar7;
      }
      plVar9 = (long *)*param_2;
      plVar8 = plVar9;
    } while ((plVar9 != (long *)*param_3) &&
            (plVar7 = (long *)*param_4, plVar8 = (long *)*param_3, plVar7 != (long *)*param_5));
  }
  FUN_00504260(&local_70,plVar9,plVar8,*param_6,param_6[1]);
  *param_1 = local_70;
  param_1[2] = uStack_60;
  param_1[1] = local_68;
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
LAB_00504248:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00504260  FUN_00504260 =====

void FUN_00504260(long *param_1,long *param_2,long *param_3,long param_4,long *param_5)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = param_2;
  if (param_2 != param_3) {
    do {
      plVar2 = (long *)FUN_0044224c(param_4,param_5,param_2 + 4,param_2 + 4);
      if (plVar2 == (long *)0x0) {
                    /* try { // try from 00504330 to 00504357 has its CatchHandler @ 00504384 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
                   "__x != nullptr","node shouldn\'t be null");
      }
      plVar3 = (long *)plVar2[1];
      if ((long *)plVar2[1] == (long *)0x0) {
        do {
          param_5 = (long *)plVar2[2];
          bVar1 = (long *)*param_5 != plVar2;
          plVar2 = param_5;
        } while (bVar1);
      }
      else {
        do {
          param_5 = plVar3;
          plVar3 = (long *)*param_5;
        } while ((long *)*param_5 != (long *)0x0);
      }
      if (param_2 == (long *)0x0) {
                    /* try { // try from 00504358 to 0050437f has its CatchHandler @ 00504380 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
                   "__x != nullptr","node shouldn\'t be null");
      }
      plVar2 = (long *)param_2[1];
      plVar3 = param_2;
      if ((long *)param_2[1] == (long *)0x0) {
        do {
          param_2 = (long *)plVar3[2];
          bVar1 = (long *)*param_2 != plVar3;
          plVar3 = param_2;
        } while (bVar1);
      }
      else {
        do {
          param_2 = plVar2;
          plVar2 = (long *)*param_2;
        } while ((long *)*param_2 != (long *)0x0);
      }
      plVar2 = param_3;
    } while (param_2 != param_3);
  }
  *param_1 = (long)plVar2;
  param_1[1] = param_4;
  param_1[2] = (long)param_5;
  return;
}


// ===== 00504388  FUN_00504388 =====

undefined8 * FUN_00504388(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  void *local_60;
  void *local_58;
  undefined8 local_50;
  undefined1 *puStack_48;
  undefined8 local_40;
  long local_38;
  
  puStack_48 = (undefined1 *)&local_60;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_60 = (void *)0x0;
  local_58 = (void *)0x0;
  local_50 = 0;
                    /* try { // try from 005043c8 to 005043db has its CatchHandler @ 00504488 */
  local_40 = param_2;
  plVar4 = (long *)FUN_005044c0(*(undefined8 *)*param_1,param_1[1],param_2,&DAT_001f73fb,&local_40,
                                &puStack_48);
  if (local_60 != (void *)0x0) {
    local_58 = local_60;
    operator_delete(local_60);
  }
  param_1[1] = plVar4;
  if (plVar4 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00504460 to 00504487 has its CatchHandler @ 005044bc */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
                 "__x != nullptr","node shouldn\'t be null");
    }
  }
  else {
    plVar2 = (long *)plVar4[1];
    if ((long *)plVar4[1] == (long *)0x0) {
      do {
        plVar5 = (long *)plVar4[2];
        bVar3 = (long *)*plVar5 != plVar4;
        plVar4 = plVar5;
      } while (bVar3);
    }
    else {
      do {
        plVar5 = plVar2;
        plVar2 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
    param_1[1] = plVar5;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005044c0  FUN_005044c0 =====

undefined8 *
FUN_005044c0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5,undefined8 *param_6)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)FUN_004423c0(param_1,param_2,&local_50,auStack_58,param_3);
  puVar5 = (undefined8 *)*puVar2;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(0x40);
    param_6 = (undefined8 *)*param_6;
    uVar3 = *(undefined8 *)*param_5;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[4] = uVar3;
    puVar5[5] = 0;
    uVar3 = *param_6;
    puVar5[6] = param_6[1];
    puVar5[5] = uVar3;
    puVar5[7] = param_6[2];
    *param_6 = 0;
    param_6[1] = 0;
    param_6[2] = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = local_50;
    *puVar2 = puVar5;
    puVar4 = puVar5;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      puVar4 = (undefined8 *)*puVar2;
    }
    puVar2 = (undefined8 *)FUN_0041dcd0(param_1[1],puVar4);
    uVar3 = 1;
    param_1[2] = param_1[2] + 1;
  }
  else {
    uVar3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar2,uVar3);
}


// ===== 005045bc  FUN_005045bc =====

void FUN_005045bc(undefined8 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar5 = (undefined8 *)*param_1;
  if (puVar5 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)param_1[1];
    puVar3 = puVar5;
    if (puVar6 != puVar5) {
      do {
        if ((ulong)*(byte *)(puVar6 + -1) != 0xff) {
                    /* try { // try from 00504630 to 00504637 has its CatchHandler @ 005046b4 */
          (*(code *)(&PTR_FUN_00d1f9c8)[*(byte *)(puVar6 + -1)])(auStack_60,puVar6 + -8);
        }
        puVar2 = (undefined1 *)puVar6[-0xb];
        puVar3 = puVar6 + -0xb;
        *(undefined1 *)(puVar6 + -1) = 0xff;
        if (0 < puVar6[-10] - (long)puVar2) {
          uVar4 = (puVar6[-10] - (long)puVar2) + 1;
          do {
            uVar4 = uVar4 - 1;
            *puVar2 = 0;
            puVar2 = puVar2 + 1;
          } while (1 < uVar4);
          puVar2 = (undefined1 *)*puVar3;
        }
        if (puVar2 != (undefined1 *)0x0) {
          puVar6[-10] = puVar2;
          operator_delete(puVar2);
        }
        puVar6 = puVar3;
      } while (puVar3 != puVar5);
      puVar3 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar5;
    operator_delete(puVar3);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 005046b8  FUN_005046b8 =====

undefined8 * FUN_005046b8(undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 *puVar9;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  if (param_2 != param_3) {
    do {
      if (param_4 == (undefined8 *)0x0) {
        if (*(long *)(lVar2 + 0x28) == lVar5) {
                    /* try { // try from 00504804 to 00504843 has its CatchHandler @ 00504848 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        goto LAB_0050489c;
      }
      param_4[1] = 0;
      param_4[2] = 0;
      *param_4 = 0;
      uVar10 = param_2[1] - *param_2;
      if (uVar10 != 0) {
        if ((long)uVar10 < 0) {
          if (*(long *)(lVar2 + 0x28) == lVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_004f04ec(param_4);
          }
          goto LAB_0050489c;
        }
                    /* try { // try from 00504738 to 0050473f has its CatchHandler @ 00504844 */
        puVar4 = (undefined1 *)operator_new(uVar10);
        *param_4 = puVar4;
        param_4[1] = puVar4;
        param_4[2] = puVar4 + uVar10;
        puVar8 = (undefined1 *)*param_2;
        puVar1 = (undefined1 *)param_2[1];
        puVar6 = puVar4;
        if (puVar8 != puVar1) {
          uVar10 = (long)puVar1 - (long)puVar8;
          puVar9 = puVar8;
          if ((0x1f < uVar10) && (0x1f < (ulong)((long)puVar4 - (long)puVar8))) {
            uVar11 = uVar10 & 0xffffffffffffffe0;
            puVar12 = (undefined8 *)(puVar4 + 0x10);
            puVar9 = puVar8 + uVar11;
            puVar4 = puVar4 + uVar11;
            puVar7 = (undefined8 *)(puVar8 + 0x10);
            uVar13 = uVar11;
            do {
              puVar3 = puVar7 + -1;
              uVar14 = puVar7[-2];
              uVar16 = puVar7[1];
              uVar15 = *puVar7;
              puVar7 = puVar7 + 4;
              uVar13 = uVar13 - 0x20;
              puVar12[-1] = *puVar3;
              puVar12[-2] = uVar14;
              puVar12[1] = uVar16;
              *puVar12 = uVar15;
              puVar12 = puVar12 + 4;
            } while (uVar13 != 0);
            puVar6 = puVar4;
            if (uVar10 == uVar11) goto LAB_00504704;
          }
          do {
            puVar8 = puVar9 + 1;
            puVar6 = puVar4 + 1;
            *puVar4 = *puVar9;
            puVar4 = puVar6;
            puVar9 = puVar8;
          } while (puVar8 != puVar1);
        }
LAB_00504704:
        param_4[1] = puVar6;
      }
      param_4 = param_4 + 3;
      param_2 = param_2 + 3;
    } while (param_2 != param_3);
  }
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return param_4;
  }
LAB_0050489c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005048a4  FUN_005048a4 =====

void FUN_005048a4(long param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 8);
  puVar4 = (undefined8 *)**(long **)(param_1 + 0x10);
  while (puVar1 = puVar4, puVar1 != puVar3) {
    puVar4 = puVar1 + -3;
    pvVar2 = (void *)*puVar4;
    if (pvVar2 != (void *)0x0) {
      puVar1[-2] = pvVar2;
      operator_delete(pvVar2);
    }
  }
  return;
}


// ===== 005048f8  FUN_005048f8 =====

void FUN_005048f8(long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  long *plVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  long *plVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  
LAB_0050492c:
  plVar19 = param_2 + -3;
  plVar22 = param_2 + -6;
  plVar18 = param_1;
LAB_00504938:
  param_1 = plVar18;
  uVar21 = (long)param_2 - (long)param_1;
  uVar20 = ((long)uVar21 >> 3) * -0x5555555555555555;
  switch(uVar20) {
  case 0:
  case 1:
    goto switchD_00504ed8_caseD_0;
  case 2:
    lVar10 = *param_1;
    if (lVar10 == param_1[1]) {
      return;
    }
    lVar16 = 0;
    goto LAB_00504ef0;
  case 3:
    FUN_005051ec(param_1,param_1 + 3,plVar19,param_3);
    return;
  case 4:
    FUN_005056e0(param_1,param_1 + 3,param_1 + 6,plVar19,param_3);
    return;
  case 5:
    FUN_00505e1c(param_1,param_1 + 3,param_1 + 6,param_1 + 9,plVar19,param_3);
    return;
  default:
    if ((long)uVar21 < 0xa8) {
      FUN_0050509c(param_1,param_2,param_3);
      return;
    }
    if (param_4 == 0) {
      if (param_1 != param_2) {
        uVar8 = uVar20 - 2 >> 1;
        lVar10 = uVar8 + 1;
        plVar18 = param_1 + uVar8 * 3;
        do {
          FUN_00505884(param_1,param_3,uVar20,plVar18);
          lVar10 = lVar10 + -1;
          plVar18 = plVar18 + -3;
        } while (lVar10 != 0);
        uVar20 = uVar21 / 0x18;
        do {
          FUN_00505ab4(param_1,param_2,param_3,uVar20);
          param_2 = param_2 + -3;
          bVar1 = 2 < uVar20;
          uVar20 = uVar20 - 1;
        } while (bVar1);
      }
    }
    else {
      param_4 = param_4 + -1;
      plVar18 = param_1 + (uVar20 >> 1) * 3;
      if (uVar21 < 0x5da9) {
        iVar4 = FUN_005051ec(param_1,plVar18,plVar19,param_3);
      }
      else {
        iVar4 = FUN_00505e1c(param_1,param_1 + (uVar20 >> 2) * 3,plVar18,plVar18 + (uVar20 >> 2) * 3
                             ,plVar19,param_3);
      }
      pbVar12 = (byte *)*plVar18;
      pbVar9 = (byte *)param_1[1];
      pbVar13 = (byte *)param_1[(uVar20 >> 1) * 3 + 1];
      plVar11 = plVar19;
      plVar6 = plVar22;
      if (pbVar12 != pbVar13) {
        pbVar5 = (byte *)*param_1;
        pbVar15 = pbVar12;
        do {
          pbVar14 = pbVar15 + 1;
          plVar6 = plVar19;
          if (pbVar5 == pbVar9) goto LAB_00504b14;
          if (*pbVar5 < *pbVar15) goto LAB_00504b14;
          plVar6 = plVar22;
        } while ((*pbVar5 <= *pbVar15) &&
                (pbVar5 = pbVar5 + 1, pbVar15 = pbVar14, pbVar14 != pbVar13));
      }
      for (; param_1 != plVar6; plVar6 = plVar6 + -3) {
        if (pbVar12 != pbVar13) {
          lVar10 = 0;
          do {
            pbVar5 = (byte *)(*plVar6 + lVar10);
            if (pbVar5 == (byte *)plVar11[-2]) {
LAB_00504ae4:
              lVar10 = *param_1;
              *param_1 = *plVar6;
              iVar4 = iVar4 + 1;
              *plVar6 = lVar10;
              lVar10 = param_1[1];
              param_1[1] = plVar11[-2];
              plVar11[-2] = lVar10;
              lVar10 = param_1[2];
              param_1[2] = plVar11[-1];
              plVar11[-1] = lVar10;
              goto LAB_00504b14;
            }
            bVar3 = *pbVar5;
            if (bVar3 < pbVar12[lVar10]) goto LAB_00504ae4;
          } while ((bVar3 <= pbVar12[lVar10]) && (lVar10 = lVar10 + 1, pbVar12 + lVar10 != pbVar13))
          ;
        }
        plVar11 = plVar6;
      }
      pbVar12 = (byte *)param_2[-3];
      plVar18 = param_1 + 3;
      if (pbVar12 != (byte *)param_2[-2]) {
        pbVar13 = (byte *)*param_1;
        pbVar5 = pbVar12;
        do {
          pbVar15 = pbVar5 + 1;
          if (pbVar13 == pbVar9) goto LAB_00504d84;
          if (*pbVar13 < *pbVar5) goto LAB_00504d84;
        } while ((*pbVar13 <= *pbVar5) &&
                (pbVar13 = pbVar13 + 1, pbVar5 = pbVar15, pbVar15 != (byte *)param_2[-2]));
      }
      for (; plVar18 != plVar19; plVar18 = plVar18 + 3) {
        lVar10 = *plVar18;
        if (lVar10 != plVar18[1]) {
          lVar16 = 0;
          do {
            if ((byte *)(*param_1 + lVar16) == pbVar9) {
LAB_00504d58:
              *plVar18 = (long)pbVar12;
              param_2[-3] = lVar10;
              lVar10 = plVar18[1];
              plVar18[1] = param_2[-2];
              param_2[-2] = lVar10;
              lVar10 = plVar18[2];
              plVar18[2] = param_2[-1];
              plVar18 = plVar18 + 3;
              param_2[-1] = lVar10;
              goto LAB_00504d84;
            }
            bVar3 = *(byte *)(*param_1 + lVar16);
            if (bVar3 < *(byte *)(lVar10 + lVar16)) goto LAB_00504d58;
          } while ((bVar3 <= *(byte *)(lVar10 + lVar16)) &&
                  (lVar16 = lVar16 + 1, lVar16 + lVar10 != plVar18[1]));
        }
      }
    }
    goto switchD_00504ed8_caseD_0;
  }
LAB_00504b14:
  plVar11 = param_1 + 3;
  if (plVar11 < plVar6) {
LAB_00504b20:
    pbVar9 = (byte *)*plVar18;
    pbVar12 = (byte *)plVar18[1];
    if (pbVar9 != pbVar12) {
      do {
        pbVar13 = (byte *)*plVar11;
        pbVar5 = pbVar9;
        while (pbVar15 = pbVar5 + 1, pbVar13 != (byte *)plVar11[1]) {
          if (*pbVar13 < *pbVar5) break;
          if ((*pbVar5 < *pbVar13) || (pbVar13 = pbVar13 + 1, pbVar5 = pbVar15, pbVar15 == pbVar12))
          goto LAB_00504b74;
        }
        plVar11 = plVar11 + 3;
      } while( true );
    }
LAB_00504b74:
    do {
      do {
        plVar7 = plVar6;
        plVar6 = plVar7 + -3;
      } while (pbVar9 == pbVar12);
      lVar10 = 0;
      do {
        pbVar13 = (byte *)(*plVar6 + lVar10);
        if (pbVar13 == (byte *)plVar7[-2]) {
LAB_00504bc8:
          if (plVar6 < plVar11) goto LAB_00504c10;
          lVar10 = *plVar11;
          *plVar11 = *plVar6;
          iVar4 = iVar4 + 1;
          plVar2 = plVar6;
          if (plVar18 != plVar11) {
            plVar2 = plVar18;
          }
          plVar7[-3] = lVar10;
          lVar10 = plVar11[1];
          plVar11[1] = plVar7[-2];
          plVar7[-2] = lVar10;
          lVar10 = plVar11[2];
          plVar11[2] = plVar7[-1];
          plVar11 = plVar11 + 3;
          plVar7[-1] = lVar10;
          plVar18 = plVar2;
          goto LAB_00504b20;
        }
        pbVar5 = pbVar9 + lVar10;
        bVar3 = *pbVar13;
        if (bVar3 < *pbVar5) goto LAB_00504bc8;
        lVar10 = lVar10 + 1;
      } while ((bVar3 <= *pbVar5) && (pbVar9 + lVar10 != pbVar12));
    } while( true );
  }
LAB_00504c10:
  if (plVar11 != plVar18) {
    lVar10 = *plVar11;
    if (lVar10 != plVar11[1]) {
      lVar16 = 0;
      while (pbVar9 = (byte *)(*plVar18 + lVar16), pbVar9 != (byte *)plVar18[1]) {
        bVar3 = *pbVar9;
        if (bVar3 < *(byte *)(lVar10 + lVar16)) break;
        if ((*(byte *)(lVar10 + lVar16) < bVar3) ||
           (lVar16 = lVar16 + 1, lVar16 + lVar10 == plVar11[1])) goto LAB_00504c90;
      }
      *plVar11 = *plVar18;
      iVar4 = iVar4 + 1;
      *plVar18 = lVar10;
      lVar10 = plVar11[1];
      plVar11[1] = plVar18[1];
      plVar18[1] = lVar10;
      lVar10 = plVar11[2];
      plVar11[2] = plVar18[2];
      plVar18[2] = lVar10;
    }
  }
LAB_00504c90:
  if (iVar4 == 0) {
    uVar20 = FUN_00505450(param_1,plVar11,param_3);
    uVar21 = FUN_00505450(plVar11 + 3,param_2,param_3);
    if ((uVar21 & 1) != 0) goto LAB_00504eb8;
    plVar18 = plVar11 + 3;
    if ((uVar20 & 1) != 0) goto LAB_00504938;
  }
  if (((long)param_2 - (long)plVar11 >> 3) * -0x5555555555555555 <=
      ((long)plVar11 - (long)param_1 >> 3) * -0x5555555555555555) {
    FUN_005048f8(plVar11 + 3,param_2,param_3,param_4);
    param_2 = plVar11;
    goto LAB_0050492c;
  }
  FUN_005048f8(param_1,plVar11,param_3,param_4);
  plVar18 = plVar11 + 3;
  goto LAB_00504938;
LAB_00504eb8:
  param_2 = plVar11;
  if ((uVar20 & 1) != 0) {
    return;
  }
  goto LAB_0050492c;
LAB_00504d84:
  plVar11 = plVar19;
  if (plVar18 == plVar19) {
    return;
  }
LAB_00504d90:
  do {
    lVar10 = *plVar18;
    if (lVar10 != plVar18[1]) {
      lVar16 = 0;
      do {
        pbVar9 = (byte *)(*param_1 + lVar16);
        if (pbVar9 == (byte *)param_1[1]) goto LAB_00504e2c;
        bVar3 = *pbVar9;
        if (bVar3 < *(byte *)(lVar10 + lVar16)) goto LAB_00504e2c;
      } while ((bVar3 <= *(byte *)(lVar10 + lVar16)) &&
              (lVar16 = lVar16 + 1, lVar16 + lVar10 != plVar18[1]));
    }
    plVar18 = plVar18 + 3;
  } while( true );
LAB_00504e2c:
  plVar6 = plVar11;
  plVar11 = plVar6 + -3;
  lVar16 = *plVar11;
  if (lVar16 != plVar6[-2]) {
    lVar17 = 0;
    while (pbVar9 = (byte *)(*param_1 + lVar17), pbVar9 != (byte *)param_1[1]) {
      bVar3 = *pbVar9;
      if (bVar3 < *(byte *)(lVar16 + lVar17)) break;
      if ((*(byte *)(lVar16 + lVar17) < bVar3) ||
         (lVar17 = lVar17 + 1, lVar17 + lVar16 == plVar6[-2])) goto joined_r0x00504e64;
    }
    goto LAB_00504e2c;
  }
joined_r0x00504e64:
  if (plVar11 <= plVar18) goto LAB_00504938;
  *plVar18 = lVar16;
  *plVar11 = lVar10;
  lVar10 = plVar18[1];
  plVar18[1] = plVar6[-2];
  plVar6[-2] = lVar10;
  lVar10 = plVar18[2];
  plVar18[2] = plVar6[-1];
  plVar18 = plVar18 + 3;
  plVar6[-1] = lVar10;
  goto LAB_00504d90;
LAB_00504ef0:
  pbVar9 = (byte *)(param_2[-3] + lVar16);
  if (pbVar9 == (byte *)param_2[-2]) {
LAB_00505058:
    *param_1 = param_2[-3];
    param_2[-3] = lVar10;
    lVar10 = param_1[1];
    param_1[1] = param_2[-2];
    param_2[-2] = lVar10;
    lVar10 = param_1[2];
    param_1[2] = param_2[-1];
    param_2[-1] = lVar10;
switchD_00504ed8_caseD_0:
    return;
  }
  bVar3 = *pbVar9;
  if (bVar3 < *(byte *)(lVar10 + lVar16)) goto LAB_00505058;
  if (*(byte *)(lVar10 + lVar16) < bVar3) {
    return;
  }
  lVar16 = lVar16 + 1;
  if (lVar16 + lVar10 == param_1[1]) {
    return;
  }
  goto LAB_00504ef0;
}


// ===== 0050509c  FUN_0050509c =====

void FUN_0050509c(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  byte bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  FUN_005051ec(param_1,param_1 + 3,param_1 + 6,param_3);
  plVar5 = param_1 + 6;
  plVar6 = param_1 + 9;
joined_r0x005050d0:
  if (plVar6 == param_2) {
    return;
  }
  lVar1 = *plVar5;
  if (lVar1 != plVar5[1]) {
    lVar2 = *plVar6;
    pbVar3 = (byte *)plVar6[1];
    lVar8 = 0;
    do {
      if ((byte *)(lVar2 + lVar8) == pbVar3) {
LAB_00505150:
        *plVar6 = 0;
        plVar6[1] = 0;
        lVar8 = plVar6[2];
        plVar6[2] = 0;
        lVar9 = plVar5[1];
        *plVar6 = lVar1;
        plVar6[1] = lVar9;
        plVar6[2] = plVar5[2];
        *plVar5 = 0;
        plVar5[1] = 0;
        plVar5[2] = 0;
        goto joined_r0x0050517c;
      }
      bVar4 = *(byte *)(lVar2 + lVar8);
      if (bVar4 < *(byte *)(lVar1 + lVar8)) goto LAB_00505150;
    } while ((bVar4 <= *(byte *)(lVar1 + lVar8)) && (lVar8 = lVar8 + 1, lVar8 + lVar1 != plVar5[1]))
    ;
  }
  goto LAB_005050f0;
joined_r0x0050517c:
  plVar7 = param_1;
  if (plVar5 == param_1) goto LAB_005050e8;
  plVar10 = plVar5 + -3;
  lVar1 = *plVar10;
  plVar7 = plVar5;
  if (lVar1 == plVar5[-2]) goto LAB_005050e8;
  lVar9 = 0;
  while ((byte *)(lVar2 + lVar9) != pbVar3) {
    bVar4 = *(byte *)(lVar2 + lVar9);
    if (bVar4 < *(byte *)(lVar1 + lVar9)) break;
    if ((*(byte *)(lVar1 + lVar9) < bVar4) || (lVar9 = lVar9 + 1, lVar9 + lVar1 == plVar5[-2]))
    goto LAB_005050e8;
  }
  lVar9 = plVar5[-2];
  *plVar5 = lVar1;
  *plVar10 = 0;
  plVar5[-2] = 0;
  plVar5[2] = plVar5[-1];
  plVar5[1] = lVar9;
  plVar5[-1] = 0;
  plVar5 = plVar10;
  goto joined_r0x0050517c;
LAB_005050e8:
  *plVar7 = lVar2;
  plVar7[1] = (long)pbVar3;
  plVar7[2] = lVar8;
LAB_005050f0:
  plVar5 = plVar6;
  plVar6 = plVar6 + 3;
  goto joined_r0x005050d0;
}


// ===== 005051ec  FUN_005051ec =====

undefined4 FUN_005051ec(long *param_1,long *param_2,long *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  undefined4 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *param_1;
  pbVar2 = (byte *)*param_2;
  pbVar3 = (byte *)param_2[1];
  if (lVar8 != param_1[1]) {
    lVar9 = 0;
    do {
      if (pbVar2 + lVar9 == pbVar3) {
LAB_00505280:
        if (pbVar2 == pbVar3) goto LAB_005052c4;
        lVar9 = 0;
        goto LAB_00505290;
      }
      bVar4 = pbVar2[lVar9];
      if (bVar4 < *(byte *)(lVar8 + lVar9)) goto LAB_00505280;
    } while ((bVar4 <= *(byte *)(lVar8 + lVar9)) && (lVar9 = lVar9 + 1, lVar9 + lVar8 != param_1[1])
            );
  }
  if (pbVar2 == pbVar3) {
    return 0;
  }
  lVar8 = 0;
  while (pbVar1 = (byte *)(*param_3 + lVar8), pbVar1 != (byte *)param_3[1]) {
    bVar4 = *pbVar1;
    if (bVar4 < pbVar2[lVar8]) break;
    if (pbVar2[lVar8] < bVar4) {
      return 0;
    }
    lVar8 = lVar8 + 1;
    if (pbVar2 + lVar8 == pbVar3) {
      return 0;
    }
  }
  *param_2 = *param_3;
  *param_3 = (long)pbVar2;
  lVar8 = param_2[1];
  param_2[1] = param_3[1];
  param_3[1] = lVar8;
  plVar7 = param_2 + 2;
  lVar8 = *plVar7;
  *plVar7 = param_3[2];
  param_3[2] = lVar8;
  lVar8 = *param_1;
  if (lVar8 == param_1[1]) {
    return 1;
  }
  lVar9 = 0;
  while (pbVar2 = (byte *)(*param_2 + lVar9), pbVar2 != (byte *)param_2[1]) {
    bVar4 = *pbVar2;
    if (bVar4 < *(byte *)(lVar8 + lVar9)) break;
    if ((*(byte *)(lVar8 + lVar9) < bVar4) || (lVar9 = lVar9 + 1, lVar9 + lVar8 == param_1[1])) {
      return 1;
    }
  }
  *param_1 = *param_2;
  uVar5 = 2;
  *param_2 = lVar8;
  lVar8 = param_1[1];
  plVar6 = param_1 + 2;
  param_1[1] = param_2[1];
  param_2[1] = lVar8;
LAB_00505438:
  lVar8 = *plVar6;
  *plVar6 = *plVar7;
  *plVar7 = lVar8;
  return uVar5;
  while( true ) {
    bVar4 = *pbVar1;
    if (bVar4 < pbVar2[lVar9]) goto LAB_005053d0;
    if ((pbVar2[lVar9] < bVar4) || (lVar9 = lVar9 + 1, pbVar2 + lVar9 == pbVar3)) break;
LAB_00505290:
    pbVar1 = (byte *)(*param_3 + lVar9);
    if (pbVar1 == (byte *)param_3[1]) {
LAB_005053d0:
      *param_1 = *param_3;
      plVar6 = param_1 + 2;
      *param_3 = lVar8;
      lVar8 = param_1[1];
      uVar5 = 1;
      param_1[1] = param_3[1];
      goto LAB_00505410;
    }
  }
LAB_005052c4:
  *param_1 = (long)pbVar2;
  *param_2 = lVar8;
  lVar8 = param_1[1];
  param_1[1] = param_2[1];
  plVar6 = param_2 + 2;
  param_2[1] = lVar8;
  lVar9 = param_1[2];
  param_1[2] = *plVar6;
  lVar8 = *param_2;
  *plVar6 = lVar9;
  if (lVar8 == param_2[1]) {
    return 1;
  }
  lVar9 = 0;
  while (pbVar2 = (byte *)(*param_3 + lVar9), pbVar2 != (byte *)param_3[1]) {
    bVar4 = *pbVar2;
    if (bVar4 < *(byte *)(lVar8 + lVar9)) break;
    if (*(byte *)(lVar8 + lVar9) < bVar4) {
      return 1;
    }
    lVar9 = lVar9 + 1;
    if (lVar9 + lVar8 == param_2[1]) {
      return 1;
    }
  }
  *param_2 = *param_3;
  uVar5 = 2;
  *param_3 = lVar8;
  lVar8 = param_2[1];
  param_2[1] = param_3[1];
LAB_00505410:
  plVar7 = param_3 + 2;
  param_3[1] = lVar8;
  goto LAB_00505438;
}


// ===== 00505450  FUN_00505450 =====

bool FUN_00505450(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  switch(((long)param_2 - (long)param_1 >> 3) * -0x5555555555555555) {
  case 0:
  case 1:
    break;
  case 2:
    lVar6 = *param_1;
    if (lVar6 != param_1[1]) {
      lVar8 = 0;
      while (pbVar2 = (byte *)(param_2[-3] + lVar8), pbVar2 != (byte *)param_2[-2]) {
        bVar3 = *pbVar2;
        if (bVar3 < *(byte *)(lVar6 + lVar8)) break;
        if (*(byte *)(lVar6 + lVar8) < bVar3) {
          return true;
        }
        lVar8 = lVar8 + 1;
        if (lVar8 + lVar6 == param_1[1]) {
          return true;
        }
      }
      *param_1 = param_2[-3];
      param_2[-3] = lVar6;
      lVar6 = param_1[1];
      param_1[1] = param_2[-2];
      param_2[-2] = lVar6;
      lVar6 = param_1[2];
      param_1[2] = param_2[-1];
      param_2[-1] = lVar6;
    }
    break;
  case 3:
    FUN_005051ec(param_1,param_1 + 3,param_2 + -3,param_3);
    break;
  case 4:
    FUN_005056e0(param_1,param_1 + 3,param_1 + 6,param_2 + -3,param_3);
    break;
  case 5:
    FUN_00505e1c(param_1,param_1 + 3,param_1 + 6,param_1 + 9,param_2 + -3);
    break;
  default:
    FUN_005051ec(param_1,param_1 + 3,param_1 + 6,param_3);
    if (param_1 + 9 != param_2) {
      iVar5 = 0;
      plVar7 = param_1 + 9;
      plVar10 = param_1 + 6;
LAB_005055d4:
      plVar4 = plVar7;
      lVar6 = *plVar10;
      if (lVar6 != plVar10[1]) {
        lVar1 = *plVar4;
        pbVar2 = (byte *)plVar4[1];
        lVar8 = 0;
        do {
          if ((byte *)(lVar1 + lVar8) == pbVar2) {
LAB_00505620:
            *plVar4 = 0;
            plVar4[1] = 0;
            lVar8 = plVar4[2];
            plVar4[2] = 0;
            lVar9 = plVar10[1];
            *plVar4 = lVar6;
            plVar4[1] = lVar9;
            plVar4[2] = plVar10[2];
            *plVar10 = 0;
            plVar10[1] = 0;
            plVar10[2] = 0;
            goto joined_r0x0050564c;
          }
          bVar3 = *(byte *)(lVar1 + lVar8);
          if (bVar3 < *(byte *)(lVar6 + lVar8)) goto LAB_00505620;
        } while ((bVar3 <= *(byte *)(lVar6 + lVar8)) &&
                (lVar8 = lVar8 + 1, lVar8 + lVar6 != plVar10[1]));
      }
      goto LAB_005055c0;
    }
  }
  return true;
joined_r0x0050564c:
  plVar7 = param_1;
  if (plVar10 == param_1) goto LAB_005055ac;
  plVar11 = plVar10 + -3;
  lVar6 = *plVar11;
  plVar7 = plVar10;
  if (lVar6 == plVar10[-2]) goto LAB_005055ac;
  lVar9 = 0;
  while ((byte *)(lVar1 + lVar9) != pbVar2) {
    bVar3 = *(byte *)(lVar1 + lVar9);
    if (bVar3 < *(byte *)(lVar6 + lVar9)) break;
    if ((*(byte *)(lVar6 + lVar9) < bVar3) || (lVar9 = lVar9 + 1, lVar9 + lVar6 == plVar10[-2]))
    goto LAB_005055ac;
  }
  lVar9 = plVar10[-2];
  *plVar10 = lVar6;
  *plVar11 = 0;
  plVar10[-2] = 0;
  plVar10[2] = plVar10[-1];
  plVar10[1] = lVar9;
  plVar10[-1] = 0;
  plVar10 = plVar11;
  goto joined_r0x0050564c;
LAB_005055ac:
  iVar5 = iVar5 + 1;
  *plVar7 = lVar1;
  plVar7[1] = (long)pbVar2;
  plVar7[2] = lVar8;
  if (iVar5 == 8) {
    return plVar4 + 3 == param_2;
  }
LAB_005055c0:
  plVar7 = plVar4 + 3;
  plVar10 = plVar4;
  if (plVar4 + 3 == param_2) {
    return true;
  }
  goto LAB_005055d4;
}


// ===== 005056e0  FUN_005056e0 =====

ulong FUN_005056e0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  uVar4 = FUN_005051ec();
  lVar6 = *param_3;
  if (lVar6 == param_3[1]) {
    return uVar4;
  }
  lVar7 = 0;
  while (pbVar1 = (byte *)(*param_4 + lVar7), pbVar1 != (byte *)param_4[1]) {
    bVar2 = *pbVar1;
    if (bVar2 < *(byte *)(lVar6 + lVar7)) break;
    if (*(byte *)(lVar6 + lVar7) < bVar2) {
      return uVar4;
    }
    lVar7 = lVar7 + 1;
    if (lVar7 + lVar6 == param_3[1]) {
      return uVar4;
    }
  }
  *param_3 = *param_4;
  *param_4 = lVar6;
  lVar6 = param_3[1];
  param_3[1] = param_4[1];
  param_4[1] = lVar6;
  lVar6 = param_3[2];
  param_3[2] = param_4[2];
  param_4[2] = lVar6;
  iVar3 = (int)uVar4;
  uVar5 = iVar3 + 1;
  lVar6 = *param_2;
  if (lVar6 != param_2[1]) {
    lVar7 = 0;
    while (pbVar1 = (byte *)(*param_3 + lVar7), pbVar1 != (byte *)param_3[1]) {
      bVar2 = *pbVar1;
      if (bVar2 < *(byte *)(lVar6 + lVar7)) break;
      if ((*(byte *)(lVar6 + lVar7) < bVar2) || (lVar7 = lVar7 + 1, lVar7 + lVar6 == param_2[1]))
      goto LAB_00505840;
    }
    *param_2 = *param_3;
    *param_3 = lVar6;
    lVar6 = param_2[1];
    param_2[1] = param_3[1];
    param_3[1] = lVar6;
    lVar6 = param_2[2];
    param_2[2] = param_3[2];
    param_3[2] = lVar6;
    uVar5 = iVar3 + 2;
    lVar6 = *param_1;
    if (lVar6 != param_1[1]) {
      lVar7 = 0;
      goto LAB_0050580c;
    }
  }
  goto LAB_00505840;
  while( true ) {
    bVar2 = *pbVar1;
    if (bVar2 < *(byte *)(lVar6 + lVar7)) goto LAB_00505854;
    if ((*(byte *)(lVar6 + lVar7) < bVar2) || (lVar7 = lVar7 + 1, lVar7 + lVar6 == param_1[1]))
    break;
LAB_0050580c:
    pbVar1 = (byte *)(*param_2 + lVar7);
    if (pbVar1 == (byte *)param_2[1]) {
LAB_00505854:
      *param_1 = *param_2;
      *param_2 = lVar6;
      lVar6 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = lVar6;
      lVar6 = param_1[2];
      param_1[2] = param_2[2];
      param_2[2] = lVar6;
      return (ulong)(iVar3 + 3);
    }
  }
LAB_00505840:
  return (ulong)uVar5;
}


// ===== 00505884  FUN_00505884 =====

void FUN_00505884(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  
  if (1 < param_3) {
    lVar7 = (long)param_4 - param_1 >> 3;
    uVar6 = param_3 - 2U >> 1;
    if (lVar7 * -0x5555555555555555 <= (long)uVar6) {
      uVar2 = lVar7 * 0x5555555555555556 | 1;
      plVar8 = (long *)(param_1 + uVar2 * 0x18);
      uVar1 = lVar7 * 0x5555555555555556 + 2;
      plVar9 = plVar8;
      uVar11 = uVar2;
      if ((long)uVar1 < param_3) {
        plVar10 = plVar8 + 3;
        if ((byte *)*plVar10 != (byte *)plVar8[4]) {
          pbVar12 = (byte *)*plVar8;
          pbVar3 = (byte *)*plVar10;
          while (pbVar14 = pbVar3 + 1, plVar9 = plVar10, uVar11 = uVar1,
                pbVar12 != *(byte **)(param_1 + uVar2 * 0x18 + 8)) {
            if (((*pbVar12 < *pbVar3) || (plVar9 = plVar8, uVar11 = uVar2, *pbVar3 < *pbVar12)) ||
               (pbVar12 = pbVar12 + 1, pbVar3 = pbVar14, pbVar14 == (byte *)plVar8[4])) break;
          }
        }
      }
      pbVar12 = (byte *)*param_4;
      pbVar3 = (byte *)param_4[1];
      if (pbVar12 != pbVar3) {
        pbVar14 = (byte *)*plVar9;
        pbVar4 = pbVar12;
        do {
          pbVar13 = pbVar4 + 1;
          if (pbVar14 == (byte *)plVar9[1]) {
            return;
          }
          if (*pbVar14 < *pbVar4) {
            return;
          }
        } while ((*pbVar14 <= *pbVar4) &&
                (pbVar14 = pbVar14 + 1, pbVar4 = pbVar13, pbVar13 != pbVar3));
      }
      *param_4 = 0;
      param_4[1] = 0;
      lVar7 = param_4[2];
      param_4[2] = 0;
      lVar15 = *plVar9;
      param_4[1] = plVar9[1];
      *param_4 = lVar15;
      param_4[2] = plVar9[2];
      *plVar9 = 0;
      plVar9[1] = 0;
      plVar9[2] = 0;
      while ((long)uVar11 <= (long)uVar6) {
        uVar2 = uVar11 << 1 | 1;
        uVar1 = uVar11 * 2 + 2;
        plVar10 = (long *)(param_1 + uVar2 * 0x18);
        plVar8 = plVar10;
        uVar11 = uVar2;
        if ((long)uVar1 < param_3) {
          plVar5 = plVar10 + 3;
          if ((byte *)*plVar5 != (byte *)plVar10[4]) {
            pbVar14 = (byte *)*plVar10;
            pbVar4 = (byte *)*plVar5;
            while (pbVar13 = pbVar4 + 1, plVar8 = plVar5, uVar11 = uVar1,
                  pbVar14 != *(byte **)(param_1 + uVar2 * 0x18 + 8)) {
              if (((*pbVar14 < *pbVar4) || (plVar8 = plVar10, uVar11 = uVar2, *pbVar4 < *pbVar14))
                 || (pbVar14 = pbVar14 + 1, pbVar4 = pbVar13, pbVar13 == (byte *)plVar10[4])) break;
            }
          }
        }
        if (pbVar12 != pbVar3) {
          pbVar14 = (byte *)*plVar8;
          pbVar4 = pbVar12;
          do {
            pbVar13 = pbVar4 + 1;
            if (pbVar14 == (byte *)plVar8[1]) goto LAB_00505aa4;
            if (*pbVar14 < *pbVar4) goto LAB_00505aa4;
          } while ((*pbVar14 <= *pbVar4) &&
                  (pbVar14 = pbVar14 + 1, pbVar4 = pbVar13, pbVar13 != pbVar3));
        }
        lVar15 = *plVar8;
        plVar9[1] = plVar8[1];
        *plVar9 = lVar15;
        plVar9[2] = plVar8[2];
        *plVar8 = 0;
        plVar8[1] = 0;
        plVar8[2] = 0;
        plVar9 = plVar8;
      }
LAB_00505aa4:
      *plVar9 = (long)pbVar12;
      plVar9[1] = (long)pbVar3;
      plVar9[2] = lVar7;
    }
  }
  return;
}


// ===== 00505ab4  FUN_00505ab4 =====

void FUN_00505ab4(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  byte bVar5;
  long *plVar6;
  void *pvVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  if (param_4 < 1) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__algorithm/pop_heap.h",
               0x21,"__len > 0","The heap given to pop_heap must be non-empty");
  }
  if (param_4 != 1) {
    lVar2 = param_1[1];
    lVar3 = param_1[2];
    lVar12 = *param_1;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
                    /* try { // try from 00505af0 to 00505afb has its CatchHandler @ 00505ccc */
    plVar6 = (long *)FUN_00505ce4(param_1,param_3,param_4);
    pvVar7 = (void *)*plVar6;
    if (plVar6 == (long *)(param_2 + -0x18)) {
      if (pvVar7 != (void *)0x0) {
        plVar6[1] = (long)pvVar7;
        operator_delete(pvVar7);
        *plVar6 = 0;
        plVar6[1] = 0;
        plVar6[2] = 0;
      }
      *plVar6 = lVar12;
      plVar6[1] = lVar2;
      plVar6[2] = lVar3;
    }
    else {
      if (pvVar7 != (void *)0x0) {
        plVar6[1] = (long)pvVar7;
        operator_delete(pvVar7);
        *plVar6 = 0;
        plVar6[1] = 0;
        plVar6[2] = 0;
      }
      lVar11 = *(long *)(param_2 + -0x18);
      uVar9 = (long)plVar6 + (0x18 - (long)param_1);
      plVar6[1] = *(long *)(param_2 + -0x10);
      *plVar6 = lVar11;
      plVar6[2] = *(long *)(param_2 + -8);
      *(long *)(param_2 + -0x18) = lVar12;
      *(long *)(param_2 + -0x10) = lVar2;
      *(long *)(param_2 + -8) = lVar3;
      if (0x18 < (long)uVar9) {
        lVar2 = *plVar6;
        lVar3 = plVar6[1];
        if (lVar2 != lVar3) {
          lVar12 = 0;
          uVar10 = uVar9 / 0x18 - 2;
          uVar9 = uVar10 >> 1;
          plVar8 = param_1 + uVar9 * 3;
          do {
            if ((byte *)(*plVar8 + lVar12) == (byte *)plVar8[1]) {
LAB_00505bd8:
              *plVar6 = 0;
              plVar6[1] = 0;
              lVar12 = plVar6[2];
              plVar6[2] = 0;
              lVar11 = *plVar8;
              plVar6[1] = plVar8[1];
              *plVar6 = lVar11;
              plVar6[2] = param_1[uVar9 * 3 + 2];
              *plVar8 = 0;
              plVar8[1] = 0;
              plVar8[2] = 0;
              do {
                if (uVar10 < 2) {
LAB_00505c88:
                  *plVar8 = lVar2;
                  plVar8[1] = lVar3;
                  plVar8[2] = lVar12;
                  return;
                }
                uVar10 = uVar9 - 1;
                uVar9 = uVar10 >> 1;
                lVar11 = 0;
                plVar6 = param_1 + uVar9 * 3;
                pbVar4 = (byte *)plVar6[1];
                while (pbVar1 = (byte *)(*plVar6 + lVar11), pbVar1 != pbVar4) {
                  bVar5 = *pbVar1;
                  if (bVar5 < *(byte *)(lVar2 + lVar11)) break;
                  if ((*(byte *)(lVar2 + lVar11) < bVar5) ||
                     (lVar11 = lVar11 + 1, lVar11 + lVar2 == lVar3)) goto LAB_00505c88;
                }
                *plVar8 = *plVar6;
                plVar8[1] = (long)pbVar4;
                plVar8[2] = param_1[uVar9 * 3 + 2];
                *plVar6 = 0;
                plVar6[1] = 0;
                plVar6[2] = 0;
                plVar8 = plVar6;
              } while( true );
            }
            bVar5 = *(byte *)(*plVar8 + lVar12);
            if (bVar5 < *(byte *)(lVar2 + lVar12)) goto LAB_00505bd8;
          } while ((bVar5 <= *(byte *)(lVar2 + lVar12)) &&
                  (lVar12 = lVar12 + 1, lVar12 + lVar2 != lVar3));
        }
      }
    }
  }
  return;
}


// ===== 00505ce4  FUN_00505ce4 =====

long * FUN_00505ce4(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  void *pvVar4;
  long *plVar5;
  byte *pbVar6;
  byte *pbVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  
  if (param_3 < 2) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__algorithm/sift_down.h"
               ,0x56,"__len >= 2","shouldn\'t be called unless __len >= 2");
  }
  uVar10 = 0;
  do {
    lVar11 = uVar10 + 1;
    uVar2 = uVar10 << 1 | 1;
    plVar8 = param_1 + lVar11 * 3;
    uVar1 = uVar10 * 2 + 2;
    plVar9 = plVar8;
    uVar10 = uVar2;
    if ((long)uVar1 < param_3) {
      plVar5 = plVar8 + 3;
      if ((byte *)*plVar5 != (byte *)plVar8[4]) {
        pbVar6 = (byte *)*plVar8;
        pbVar3 = (byte *)*plVar5;
        while (pbVar7 = pbVar3 + 1, plVar9 = plVar5, uVar10 = uVar1,
              pbVar6 != (byte *)param_1[lVar11 * 3 + 1]) {
          if (((*pbVar6 < *pbVar3) || (plVar9 = plVar8, uVar10 = uVar2, *pbVar3 < *pbVar6)) ||
             (pbVar6 = pbVar6 + 1, pbVar3 = pbVar7, pbVar7 == (byte *)plVar8[4])) break;
        }
      }
    }
    pvVar4 = (void *)*param_1;
    if (pvVar4 != (void *)0x0) {
      param_1[1] = (long)pvVar4;
      operator_delete(pvVar4);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    lVar11 = *plVar9;
    param_1[1] = plVar9[1];
    *param_1 = lVar11;
    param_1[2] = plVar9[2];
    *plVar9 = 0;
    plVar9[1] = 0;
    plVar9[2] = 0;
    param_1 = plVar9;
    if ((long)(param_3 - 2U >> 1) < (long)uVar10) {
      return plVar9;
    }
  } while( true );
}


// ===== 00505e1c  FUN_00505e1c =====

ulong FUN_00505e1c(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  uVar4 = FUN_005056e0();
  lVar6 = *param_4;
  if (lVar6 == param_4[1]) {
    return uVar4;
  }
  lVar7 = 0;
  while (pbVar1 = (byte *)(*param_5 + lVar7), pbVar1 != (byte *)param_5[1]) {
    bVar2 = *pbVar1;
    if (bVar2 < *(byte *)(lVar6 + lVar7)) break;
    if (*(byte *)(lVar6 + lVar7) < bVar2) {
      return uVar4;
    }
    lVar7 = lVar7 + 1;
    if (lVar7 + lVar6 == param_4[1]) {
      return uVar4;
    }
  }
  *param_4 = *param_5;
  *param_5 = lVar6;
  lVar6 = param_4[1];
  param_4[1] = param_5[1];
  param_5[1] = lVar6;
  lVar6 = param_4[2];
  param_4[2] = param_5[2];
  param_5[2] = lVar6;
  iVar3 = (int)uVar4;
  uVar5 = iVar3 + 1;
  lVar6 = *param_3;
  if (lVar6 != param_3[1]) {
    lVar7 = 0;
    while (pbVar1 = (byte *)(*param_4 + lVar7), pbVar1 != (byte *)param_4[1]) {
      bVar2 = *pbVar1;
      if (bVar2 < *(byte *)(lVar6 + lVar7)) break;
      if ((*(byte *)(lVar6 + lVar7) < bVar2) || (lVar7 = lVar7 + 1, lVar7 + lVar6 == param_3[1]))
      goto LAB_00505ffc;
    }
    *param_3 = *param_4;
    *param_4 = lVar6;
    lVar6 = param_3[1];
    param_3[1] = param_4[1];
    param_4[1] = lVar6;
    lVar6 = param_3[2];
    param_3[2] = param_4[2];
    param_4[2] = lVar6;
    uVar5 = iVar3 + 2;
    lVar6 = *param_2;
    if (lVar6 != param_2[1]) {
      lVar7 = 0;
      goto LAB_00505f50;
    }
  }
  goto LAB_00505ffc;
LAB_00505f50:
  pbVar1 = (byte *)(*param_3 + lVar7);
  if (pbVar1 == (byte *)param_3[1]) {
LAB_00505f88:
    *param_2 = *param_3;
    *param_3 = lVar6;
    lVar6 = param_2[1];
    param_2[1] = param_3[1];
    param_3[1] = lVar6;
    lVar6 = param_2[2];
    param_2[2] = param_3[2];
    param_3[2] = lVar6;
    uVar5 = iVar3 + 3;
    lVar6 = *param_1;
    if (lVar6 != param_1[1]) {
      lVar7 = 0;
      goto LAB_00505fc8;
    }
    goto LAB_00505ffc;
  }
  bVar2 = *pbVar1;
  if (bVar2 < *(byte *)(lVar6 + lVar7)) goto LAB_00505f88;
  if ((*(byte *)(lVar6 + lVar7) < bVar2) || (lVar7 = lVar7 + 1, lVar7 + lVar6 == param_2[1]))
  goto LAB_00505ffc;
  goto LAB_00505f50;
  while( true ) {
    bVar2 = *pbVar1;
    if (bVar2 < *(byte *)(lVar6 + lVar7)) goto LAB_00506014;
    if ((*(byte *)(lVar6 + lVar7) < bVar2) || (lVar7 = lVar7 + 1, lVar7 + lVar6 == param_1[1]))
    break;
LAB_00505fc8:
    pbVar1 = (byte *)(*param_2 + lVar7);
    if (pbVar1 == (byte *)param_2[1]) {
LAB_00506014:
      *param_1 = *param_2;
      *param_2 = lVar6;
      lVar6 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = lVar6;
      lVar6 = param_1[2];
      param_1[2] = param_2[2];
      param_2[2] = lVar6;
      return (ulong)(iVar3 + 4);
    }
  }
LAB_00505ffc:
  return (ulong)uVar5;
}


// ===== 00506044  FUN_00506044 =====

void FUN_00506044(long *param_1,long param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  short local_50 [4];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  puVar5 = (undefined1 *)*param_1;
  puVar8 = (undefined1 *)param_1[1];
  local_68 = (undefined1 *)0x0;
  local_60 = (undefined1 *)0x0;
  local_58 = (undefined1 *)0x0;
  uVar2 = (long)puVar8 - (long)puVar5;
  if (uVar2 != 0) {
    if ((long)uVar2 < 0) {
      if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_68);
      }
      goto LAB_00506240;
    }
    local_68 = (undefined1 *)operator_new(uVar2);
    local_58 = local_68 + uVar2;
    local_60 = local_68;
    puVar6 = puVar5;
    if ((uVar2 < 0x20) || ((ulong)((long)local_68 - (long)puVar5) < 0x20)) {
LAB_00506100:
      do {
        puVar9 = puVar6 + 1;
        puVar5 = local_60 + 1;
        *local_60 = *puVar6;
        local_60 = puVar5;
        puVar6 = puVar9;
      } while (puVar9 != puVar8);
    }
    else {
      uVar7 = uVar2 & 0xffffffffffffffe0;
      puVar10 = (undefined8 *)(local_68 + 0x10);
      puVar6 = puVar5 + uVar7;
      local_60 = local_68 + uVar7;
      puVar11 = (undefined8 *)(puVar5 + 0x10);
      uVar12 = uVar7;
      do {
        puVar4 = puVar11 + -1;
        uVar13 = puVar11[-2];
        uVar15 = puVar11[1];
        uVar14 = *puVar11;
        puVar11 = puVar11 + 4;
        uVar12 = uVar12 - 0x20;
        puVar10[-1] = *puVar4;
        puVar10[-2] = uVar13;
        puVar10[1] = uVar15;
        *puVar10 = uVar14;
        puVar10 = puVar10 + 4;
      } while (uVar12 != 0);
      if (uVar2 != uVar7) goto LAB_00506100;
    }
    puVar8 = local_60 + -1;
    puVar5 = local_68;
    if (local_68 < puVar8 && local_68 != local_60) {
      do {
        puVar6 = puVar5 + 1;
        uVar1 = *puVar5;
        *puVar5 = *puVar8;
        puVar9 = puVar8 + -1;
        *puVar8 = uVar1;
        puVar8 = puVar9;
        puVar5 = puVar6;
      } while (puVar6 < puVar9);
    }
  }
                    /* try { // try from 00506148 to 0050615f has its CatchHandler @ 00506210 */
  FUN_00506244(&local_68,param_2);
  FUN_005a31cc(&local_68,local_50);
  puVar10 = (undefined8 *)(param_2 + 0x18);
  if (local_50[0] == 1) {
    if ((ulong)*(byte *)(param_2 + 0x50) != 0xff) {
                    /* try { // try from 00506188 to 00506193 has its CatchHandler @ 0050620c */
      (*(code *)(&PTR_FUN_00d1f9c8)[*(byte *)(param_2 + 0x50)])(local_50,puVar10);
    }
    *puVar10 = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined1 *)(param_2 + 0x50) = 0;
                    /* try { // try from 005061a0 to 005061bb has its CatchHandler @ 00506210 */
    FUN_00506244(&local_68,puVar10);
  }
  else {
    FUN_00506690(&local_68,local_50[0],puVar10);
  }
  if (local_68 != (undefined1 *)0x0) {
    local_60 = local_68;
    operator_delete(local_68);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_00506240:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00506244  FUN_00506244 =====

long * FUN_00506244(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  void *__dest;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  ulong local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_50 = 0;
  FUN_005a35bc(param_1,&local_50);
  uVar4 = local_50;
  puVar5 = (undefined1 *)param_1[1];
  if ((ulong)((long)puVar5 - *param_1) < local_50) {
    uVar6 = FUN_0054f64c(0x10);
                    /* try { // try from 00506454 to 0050645f has its CatchHandler @ 005064a0 */
    FUN_005064ec(uVar6,"Vector is longer than remaining data");
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar6,&PTR_PTR_thunk_FUN_00552768_00d1fbf0,PTR_FUN_00d51d28);
    }
    goto LAB_005064e4;
  }
  local_68 = (undefined1 *)0x0;
  local_60 = (undefined1 *)0x0;
  local_58 = (undefined1 *)0x0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (local_50 == 0) {
    local_58 = (undefined1 *)0x0;
    local_60 = (undefined1 *)0x0;
    local_68 = (undefined1 *)0x0;
  }
  else {
    if ((long)local_50 < 0) {
      if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 00506498 to 0050649f has its CatchHandler @ 005064b0 */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_80);
      }
      goto LAB_005064e4;
    }
                    /* try { // try from 005062a8 to 005062af has its CatchHandler @ 005064b0 */
    local_68 = (undefined1 *)operator_new(local_50);
    puVar8 = puVar5 + -uVar4;
    local_58 = local_68 + uVar4;
    puVar7 = local_68;
    if ((0x1f < uVar4) && ((undefined1 *)0x1f < local_68 + (uVar4 - (long)puVar5))) {
      uVar10 = uVar4 & 0xffffffffffffffe0;
      uVar11 = 0;
      local_60 = local_68 + uVar10;
      do {
        puVar1 = (undefined8 *)(puVar8 + uVar11);
        puVar2 = (undefined8 *)(local_68 + uVar11);
        uVar11 = uVar11 + 0x20;
        uVar6 = *puVar1;
        uVar13 = puVar1[3];
        uVar12 = puVar1[2];
        puVar2[1] = puVar1[1];
        *puVar2 = uVar6;
        puVar2[3] = uVar13;
        puVar2[2] = uVar12;
      } while (uVar10 != uVar11);
      puVar7 = local_60;
      puVar8 = puVar8 + uVar10;
      if (uVar4 == uVar10) goto LAB_00506334;
    }
    do {
      puVar9 = puVar8 + 1;
      local_60 = puVar7 + 1;
      *puVar7 = *puVar8;
      puVar7 = local_60;
      puVar8 = puVar9;
    } while (puVar9 != puVar5);
  }
LAB_00506334:
  param_2[1] = *param_2;
  while (local_60 != local_68) {
                    /* try { // try from 00506350 to 0050636f has its CatchHandler @ 005064b4 */
    FUN_00506518(param_2);
    if (*param_2 == param_2[1]) {
      if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 005063e8 to 0050640f has its CatchHandler @ 005064e8 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                   "!empty()","back() called on an empty vector");
      }
      goto LAB_005064e4;
    }
    FUN_005a3158(&local_68,param_2[1] + -1);
  }
  if ((long)local_50 < 0) {
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 00506420 to 00506447 has its CatchHandler @ 005064b8 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x644,
                 "__first <= __last","vector::erase(first, last) called with invalid range");
    }
  }
  else {
    puVar5 = local_60;
    if (local_50 != 0) {
      __dest = (void *)(param_1[1] - local_50);
      memmove(__dest,(void *)((long)__dest + local_50),param_1[1] - (long)((long)__dest + local_50))
      ;
      param_1[1] = (long)__dest;
      puVar5 = local_68;
    }
    if (puVar5 != (undefined1 *)0x0) {
      local_60 = puVar5;
      operator_delete(puVar5);
    }
    if (*(long *)(lVar3 + 0x28) == local_48) {
      return param_1;
    }
  }
LAB_005064e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005064ec  FUN_005064ec =====

void FUN_005064ec(undefined8 *param_1)

{
  FUN_00547104();
  *param_1 = &PTR_FUN_00d1fc18;
  return;
}


// ===== 00506518  FUN_00506518 =====

undefined1 * FUN_00506518(undefined8 *param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  void *__dest;
  ulong uVar3;
  ulong uVar4;
  void *__src;
  size_t __n;
  undefined1 *puVar5;
  
  puVar2 = (undefined1 *)param_1[1];
  if (puVar2 < (undefined1 *)param_1[2]) {
    if (puVar2 == (undefined1 *)0x0) {
                    /* try { // try from 00506608 to 0050662f has its CatchHandler @ 00506660 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                 ,0x23,"__location != nullptr","null pointer given to construct_at");
    }
    puVar5 = puVar2 + 1;
    *puVar2 = 0;
    param_1[1] = puVar5;
  }
  else {
    __src = (void *)*param_1;
    __n = (long)puVar2 - (long)__src;
    uVar1 = __n + 1;
    if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004f04ec(param_1);
    }
    uVar3 = (long)param_1[2] - (long)__src;
    uVar4 = uVar3 * 2;
    if (uVar4 < uVar1 || uVar4 - uVar1 == 0) {
      uVar4 = uVar1;
    }
    if (0x3ffffffffffffffe < uVar3) {
      uVar4 = 0x7fffffffffffffff;
    }
    if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                 ,0x23,"__location != nullptr","null pointer given to construct_at");
    }
    __dest = operator_new(uVar4);
    puVar5 = (undefined1 *)((long)__dest + __n) + 1;
    *(undefined1 *)((long)__dest + __n) = 0;
    memmove(__dest,__src,__n);
    *param_1 = __dest;
    param_1[1] = puVar5;
    param_1[2] = (long)__dest + uVar4;
    if (__src != (void *)0x0) {
      operator_delete(__src);
      puVar5 = (undefined1 *)param_1[1];
    }
  }
  if ((undefined1 *)*param_1 != puVar5) {
    return puVar5 + -1;
  }
                    /* try { // try from 005065e0 to 00506607 has its CatchHandler @ 00506668 */
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,"!empty()",
             "back() called on an empty vector");
}


// ===== 0050666c  FUN_0050666c =====

void FUN_0050666c(void *param_1)

{
  FUN_005523a0();
  operator_delete(param_1);
  return;
}


// ===== 00506690  FUN_00506690 =====

void FUN_00506690(undefined8 param_1,short param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_50;
  void *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 == 2) {
    if ((ulong)*(byte *)(param_3 + 7) != 0xff) {
                    /* try { // try from 005066dc to 005066e7 has its CatchHandler @ 00506858 */
      (*(code *)(&PTR_FUN_00d1f9c8)[*(byte *)(param_3 + 7)])(&local_50,param_3);
    }
    param_3[6] = 0;
    *(undefined1 *)(param_3 + 7) = 1;
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[1] = 0;
    *param_3 = 0;
    FUN_0055f0c4(param_1,param_3);
  }
  else if (param_2 == -0x100) {
    if ((ulong)*(byte *)(param_3 + 7) != 0xff) {
                    /* try { // try from 0050679c to 005067a7 has its CatchHandler @ 00506850 */
      (*(code *)(&PTR_FUN_00d1f9c8)[*(byte *)(param_3 + 7)])(&local_50,param_3);
    }
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    *(undefined1 *)(param_3 + 7) = 3;
    FUN_0050685c(param_1,param_3);
  }
  else {
    if (param_2 != -0x200) {
      uVar2 = FUN_0054f64c(0x10);
                    /* try { // try from 005067f4 to 005067ff has its CatchHandler @ 00506828 */
      FUN_005064ec(uVar2,"Invalid variant type label");
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_0054f748(uVar2,&PTR_PTR_thunk_FUN_00552768_00d1fbf0,PTR_FUN_00d51d28);
      }
      goto LAB_0050684c;
    }
    if ((ulong)*(byte *)(param_3 + 7) != 0xff) {
                    /* try { // try from 00506740 to 0050674b has its CatchHandler @ 00506854 */
      (*(code *)(&PTR_FUN_00d1f9c8)[*(byte *)(param_3 + 7)])(&local_50,param_3);
    }
    param_3[4] = 0;
    *(undefined1 *)(param_3 + 7) = 2;
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    FUN_0055fb04(&local_50,param_1,param_3);
    if (local_50 != (void *)0x0) {
      local_48 = local_50;
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0050684c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050685c  FUN_0050685c =====

long * FUN_0050685c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  void *__dest;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong local_80 [3];
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  ulong local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_50 = 0;
  FUN_005a35bc(param_1,&local_50);
  uVar3 = local_50;
  puVar4 = (undefined1 *)param_1[1];
  if ((ulong)((long)puVar4 - *param_1) < local_50) {
    uVar5 = FUN_0054f64c(0x10);
                    /* try { // try from 00506ba0 to 00506bab has its CatchHandler @ 00506bec */
    FUN_005064ec(uVar5,"Vector is longer than remaining data");
    if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar5,&PTR_PTR_thunk_FUN_00552768_00d1fbf0,PTR_FUN_00d51d28);
    }
    goto LAB_00506c48;
  }
  local_68 = (undefined1 *)0x0;
  local_60 = (undefined1 *)0x0;
  local_58 = (undefined1 *)0x0;
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  if (local_50 == 0) {
    local_58 = (undefined1 *)0x0;
    local_60 = (undefined1 *)0x0;
    local_68 = (undefined1 *)0x0;
  }
  else {
    if ((long)local_50 < 0) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 00506be4 to 00506beb has its CatchHandler @ 00506bfc */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(local_80);
      }
      goto LAB_00506c48;
    }
                    /* try { // try from 005068c0 to 005068c7 has its CatchHandler @ 00506bfc */
    local_68 = (undefined1 *)operator_new(local_50);
    puVar7 = puVar4 + -uVar3;
    local_58 = local_68 + uVar3;
    puVar6 = local_68;
    if ((0x1f < uVar3) && ((undefined1 *)0x1f < local_68 + (uVar3 - (long)puVar4))) {
      uVar9 = uVar3 & 0xffffffffffffffe0;
      uVar10 = 0;
      local_60 = local_68 + uVar9;
      do {
        puVar12 = (undefined8 *)(puVar7 + uVar10);
        puVar13 = (undefined8 *)(local_68 + uVar10);
        uVar10 = uVar10 + 0x20;
        uVar5 = *puVar12;
        uVar15 = puVar12[3];
        uVar14 = puVar12[2];
        puVar13[1] = puVar12[1];
        *puVar13 = uVar5;
        puVar13[3] = uVar15;
        puVar13[2] = uVar14;
      } while (uVar9 != uVar10);
      puVar6 = local_60;
      puVar7 = puVar7 + uVar9;
      if (uVar3 == uVar9) goto LAB_0050694c;
    }
    do {
      puVar8 = puVar7 + 1;
      local_60 = puVar6 + 1;
      *puVar6 = *puVar7;
      puVar6 = local_60;
      puVar7 = puVar8;
    } while (puVar8 != puVar4);
  }
LAB_0050694c:
  lVar1 = *param_2;
  lVar11 = param_2[1];
  while (lVar11 != lVar1) {
    lVar11 = lVar11 + -0x78;
                    /* try { // try from 00506964 to 0050696b has its CatchHandler @ 00506c08 */
    FUN_004f163c(lVar11);
  }
  param_2[1] = lVar1;
  while (local_60 != local_68) {
    puVar12 = (undefined8 *)param_2[1];
    if (puVar12 < (undefined8 *)param_2[2]) {
      if (puVar12 == (undefined8 *)0x0) {
        if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 00506b34 to 00506b5b has its CatchHandler @ 00506c18 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        goto LAB_00506c48;
      }
      puVar12[0xe] = 0;
      puVar12[3] = 0;
      puVar12[2] = 0;
      puVar12[5] = 0;
      puVar12[4] = 0;
      puVar12[7] = 0;
      puVar12[6] = 0;
      puVar12[9] = 0;
      puVar12[8] = 0;
      puVar12[0xb] = 0;
      puVar12[10] = 0;
      puVar12[0xd] = 0;
      puVar12[0xc] = 0;
      puVar12[1] = 0;
      *puVar12 = 0;
                    /* try { // try from 005069b0 to 005069b7 has its CatchHandler @ 00506c04 */
      FUN_00562400(puVar12);
      puVar13 = puVar12 + 0xf;
      puVar12[2] = 0;
      puVar12[3] = 0;
      puVar12[1] = 0;
      *(undefined1 *)(puVar12 + 8) = 0;
      puVar12[10] = 0;
      puVar12[9] = 0;
      puVar12[0xc] = 0;
      puVar12[0xb] = 0;
      puVar12[0xe] = 0;
      puVar12[0xd] = 0;
      param_2[1] = (long)puVar13;
    }
    else {
                    /* try { // try from 005069e0 to 00506a17 has its CatchHandler @ 00506c0c */
      FUN_00506c50(param_2);
      puVar13 = (undefined8 *)param_2[1];
    }
    if ((undefined8 *)*param_2 == puVar13) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 00506afc to 00506b23 has its CatchHandler @ 00506c4c */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                   "!empty()","back() called on an empty vector");
      }
      goto LAB_00506c48;
    }
    FUN_005a31cc(&local_68,local_80);
    *(short *)(puVar13 + -0xf) = (short)local_80[0];
    FUN_005a31cc(&local_68,local_80);
    puVar12 = puVar13 + -0xe;
    if ((short)local_80[0] == 1) {
      if ((ulong)*(byte *)(puVar13 + -7) != 0xff) {
                    /* try { // try from 00506a38 to 00506a43 has its CatchHandler @ 00506c00 */
        (*(code *)(&PTR_FUN_00d1f9c8)[*(byte *)(puVar13 + -7)])(local_80,puVar12);
      }
      *puVar12 = 0;
      puVar13[-0xd] = 0;
      puVar13[-0xc] = 0;
      *(undefined1 *)(puVar13 + -7) = 0;
                    /* try { // try from 00506a50 to 00506a83 has its CatchHandler @ 00506c0c */
      FUN_00506244(&local_68,puVar12);
    }
    else {
      FUN_00506690(&local_68,local_80[0] & 0xffff,puVar12);
    }
    FUN_00506244(&local_68,puVar13 + -6);
    FUN_00506244(&local_68,puVar13 + -3);
  }
  if ((long)local_50 < 0) {
    if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 00506b6c to 00506b93 has its CatchHandler @ 00506c10 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x644,
                 "__first <= __last","vector::erase(first, last) called with invalid range");
    }
  }
  else {
    puVar4 = local_60;
    if (local_50 != 0) {
      __dest = (void *)(param_1[1] - local_50);
      memmove(__dest,(void *)((long)__dest + local_50),param_1[1] - (long)((long)__dest + local_50))
      ;
      param_1[1] = (long)__dest;
      puVar4 = local_68;
    }
    if (puVar4 != (undefined1 *)0x0) {
      local_60 = puVar4;
      operator_delete(puVar4);
    }
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return param_1;
    }
  }
LAB_00506c48:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00506c50  FUN_00506c50 =====

void FUN_00506c50(long *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined2 uVar3;
  long lVar4;
  void *pvVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  void *pvVar13;
  undefined8 uVar14;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar7 = param_1[1] - *param_1 >> 3;
  uVar8 = lVar7 * -0x1111111111111111 + 1;
  if (uVar8 < 0x222222222222223) {
    lVar9 = param_1[2] - *param_1 >> 3;
    uVar10 = lVar9 * -0x2222222222222222;
    if (uVar10 < uVar8 || uVar10 - uVar8 == 0) {
      uVar10 = uVar8;
    }
    if (0x111111111111110 < (ulong)(lVar9 * -0x1111111111111111)) {
      uVar10 = 0x222222222222222;
    }
    if (uVar10 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (0x222222222222222 < uVar10) goto LAB_00506edc;
      pvVar5 = operator_new(uVar10 * 0x78);
    }
    puVar11 = (undefined8 *)((long)pvVar5 + lVar7 * 8);
    if (pvVar5 == (void *)0x0) {
      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 00506e9c to 00506ec3 has its CatchHandler @ 00506ef8 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x23,"__location != nullptr","null pointer given to construct_at");
      }
    }
    else {
      puVar11[0xe] = 0;
      puVar11[3] = 0;
      puVar11[2] = 0;
      puVar11[5] = 0;
      puVar11[4] = 0;
      puVar11[7] = 0;
      puVar11[6] = 0;
      puVar11[9] = 0;
      puVar11[8] = 0;
      puVar11[0xb] = 0;
      puVar11[10] = 0;
      puVar11[0xd] = 0;
      puVar11[0xc] = 0;
      puVar11[1] = 0;
      *puVar11 = 0;
                    /* try { // try from 00506d34 to 00506d3b has its CatchHandler @ 00506ef8 */
      FUN_00562400(puVar11);
      puVar1 = puVar11 + 0xf;
      pvVar2 = (void *)*param_1;
      pvVar12 = (void *)param_1[1];
      *(undefined8 *)((long)pvVar5 + lVar7 * 8 + 8) = 0;
      *(undefined8 *)((long)pvVar5 + lVar7 * 8 + 0x10) = 0;
      *(undefined8 *)((long)pvVar5 + lVar7 * 8 + 0x18) = 0;
      *(undefined1 *)((long)pvVar5 + lVar7 * 8 + 0x40) = 0;
      *(undefined8 *)((long)pvVar5 + lVar7 * 8 + 0x50) = 0;
      *(undefined8 *)((long)pvVar5 + lVar7 * 8 + 0x48) = 0;
      *(undefined8 *)((long)pvVar5 + lVar7 * 8 + 0x60) = 0;
      *(undefined8 *)((long)pvVar5 + lVar7 * 8 + 0x58) = 0;
      *(undefined8 *)((long)pvVar5 + lVar7 * 8 + 0x70) = 0;
      *(undefined8 *)((long)pvVar5 + lVar7 * 8 + 0x68) = 0;
      pvVar13 = pvVar12;
      if (pvVar12 != pvVar2) {
        lVar7 = 0;
        do {
          uVar3 = *(undefined2 *)((long)pvVar12 + lVar7 + -0x78);
          *(undefined1 *)((long)puVar11 + lVar7 + -0x38) = 0xff;
          puVar6 = (undefined1 *)((long)puVar11 + lVar7 + -0x70);
          *puVar6 = 0;
          *(undefined2 *)((long)puVar11 + lVar7 + -0x78) = uVar3;
          uVar8 = (ulong)*(byte *)((long)pvVar12 + lVar7 + -0x38);
          if (uVar8 != 0xff) {
                    /* try { // try from 00506e10 to 00506e17 has its CatchHandler @ 00506ef0 */
            (*(code *)(&PTR_FUN_00d1f9e8)[uVar8])(auStack_70,puVar6,(long)pvVar12 + lVar7 + -0x70);
            *(undefined1 *)((long)puVar11 + lVar7 + -0x38) =
                 *(undefined1 *)((long)pvVar12 + lVar7 + -0x38);
          }
          *(undefined8 *)((long)puVar11 + lVar7 + -0x28) = 0;
          *(undefined8 *)((long)puVar11 + lVar7 + -0x20) = 0;
          lVar9 = lVar7 + -0x78;
          *(undefined8 *)((long)puVar11 + lVar7 + -0x30) = 0;
          uVar14 = *(undefined8 *)((long)pvVar12 + lVar7 + -0x30);
          *(undefined8 *)((long)puVar11 + lVar7 + -0x28) =
               *(undefined8 *)((long)pvVar12 + lVar7 + -0x28);
          *(undefined8 *)((long)puVar11 + lVar7 + -0x30) = uVar14;
          *(undefined8 *)((long)puVar11 + lVar7 + -0x20) =
               *(undefined8 *)((long)pvVar12 + lVar7 + -0x20);
          *(undefined8 *)((long)pvVar12 + lVar7 + -0x28) = 0;
          *(undefined8 *)((long)pvVar12 + lVar7 + -0x20) = 0;
          *(undefined8 *)((long)pvVar12 + lVar7 + -0x30) = 0;
          *(undefined8 *)((long)puVar11 + lVar7 + -0x18) = 0;
          *(undefined8 *)((long)puVar11 + lVar7 + -0x10) = 0;
          *(undefined8 *)((long)puVar11 + lVar7 + -8) = 0;
          uVar14 = *(undefined8 *)((long)pvVar12 + lVar7 + -0x18);
          *(undefined8 *)((long)puVar11 + lVar7 + -0x10) =
               *(undefined8 *)((long)pvVar12 + lVar7 + -0x10);
          *(undefined8 *)((long)puVar11 + lVar7 + -0x18) = uVar14;
          *(undefined8 *)((long)puVar11 + lVar7 + -8) = *(undefined8 *)((long)pvVar12 + lVar7 + -8);
          *(undefined8 *)((long)pvVar12 + lVar7 + -0x18) = 0;
          *(undefined8 *)((long)pvVar12 + lVar7 + -0x10) = 0;
          *(undefined8 *)((long)pvVar12 + lVar7 + -8) = 0;
          lVar7 = lVar9;
        } while ((void *)((long)pvVar12 + lVar9) != pvVar2);
        pvVar12 = (void *)param_1[1];
        puVar11 = (undefined8 *)((long)puVar11 + lVar9);
        pvVar13 = (void *)*param_1;
      }
      *param_1 = (long)puVar11;
      param_1[1] = (long)puVar1;
      param_1[2] = (long)((long)pvVar5 + uVar10 * 0x78);
      while (pvVar12 != pvVar13) {
        pvVar12 = (void *)((long)pvVar12 + -0x78);
                    /* try { // try from 00506e44 to 00506e4b has its CatchHandler @ 00506ef4 */
        FUN_004f163c(pvVar12);
      }
      if (pvVar13 != (void *)0x0) {
        operator_delete(pvVar13);
      }
      if (*(long *)(lVar4 + 0x28) == local_68) {
        return;
      }
    }
  }
  else {
    if (*(long *)(lVar4 + 0x28) != local_68) goto LAB_00506f1c;
    FUN_004f1da0(param_1);
LAB_00506edc:
    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
  }
LAB_00506f1c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00506f20  FUN_00506f20 =====

void FUN_00506f20(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (param_1[2] != lVar1) {
    param_1[2] = param_1[2] + -0x78;
                    /* try { // try from 00506f48 to 00506f4b has its CatchHandler @ 00506f70 */
    FUN_004f163c();
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 00506f74  FUN_00506f74 =====

void FUN_00506f74(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  puVar2 = (undefined8 *)*param_1;
  puVar13 = (undefined8 *)param_1[1];
  lVar7 = (long)puVar13 - (long)puVar2 >> 3;
  uVar10 = lVar7 * -0x5555555555555555 + 1;
  if (uVar10 < 0xaaaaaaaaaaaaaab) {
    lVar11 = param_1[2] - (long)puVar2 >> 3;
    uVar12 = lVar11 * 0x5555555555555556;
    if (uVar12 < uVar10 || uVar12 - uVar10 == 0) {
      uVar12 = uVar10;
    }
    if (0x555555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
      uVar12 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar12 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar12) goto LAB_005071ac;
      pvVar4 = operator_new(uVar12 * 0x18);
    }
    puVar8 = (undefined8 *)((long)pvVar4 + lVar7 * 8);
    if (pvVar4 == (void *)0x0) {
      if (*(long *)(lVar3 + 0x28) == lVar6) {
                    /* try { // try from 0050716c to 00507193 has its CatchHandler @ 005071c0 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x23,"__location != nullptr","null pointer given to construct_at");
      }
    }
    else {
      puVar1 = puVar8 + 3;
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar9 = puVar8;
      puVar14 = puVar13;
      if (puVar13 != puVar2) {
        do {
          puVar9[-2] = 0;
          puVar9[-1] = 0;
          puVar14 = puVar13 + -3;
          uVar15 = *puVar14;
          puVar8 = puVar9 + -3;
          puVar9[-2] = puVar13[-2];
          *puVar8 = uVar15;
          puVar9[-1] = puVar13[-1];
          *puVar14 = 0;
          puVar13[-2] = 0;
          puVar13[-1] = 0;
          puVar9 = puVar8;
          puVar13 = puVar14;
        } while (puVar14 != puVar2);
        puVar13 = (undefined8 *)param_1[1];
        puVar14 = (undefined8 *)*param_1;
      }
      *param_1 = puVar8;
      param_1[1] = puVar1;
      param_1[2] = (void *)((long)pvVar4 + uVar12 * 0x18);
      puVar2 = puVar13;
      while (puVar8 = puVar13, puVar8 != puVar14) {
        puVar13 = puVar8 + -3;
        puVar5 = (undefined1 *)*puVar13;
        if (0 < puVar8[-2] - (long)puVar5) {
          uVar10 = (puVar8[-2] - (long)puVar5) + 1;
          do {
            uVar10 = uVar10 - 1;
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          } while (1 < uVar10);
          puVar5 = (undefined1 *)*puVar13;
        }
        puVar2 = puVar14;
        if (puVar5 != (undefined1 *)0x0) {
          puVar8[-2] = puVar5;
          operator_delete(puVar5);
        }
      }
      if (puVar2 == (undefined8 *)0x0) {
        if (*(long *)(lVar3 + 0x28) == lVar6) {
          return;
        }
      }
      else if (*(long *)(lVar3 + 0x28) == lVar6) {
        operator_delete(puVar2);
        return;
      }
    }
  }
  else {
    if (*(long *)(lVar3 + 0x28) != lVar6) goto LAB_005071e4;
    FUN_0050726c(param_1);
LAB_005071ac:
    if (*(long *)(lVar3 + 0x28) == lVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
  }
LAB_005071e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005071e8  FUN_005071e8 =====

void FUN_005071e8(undefined8 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar1) {
    puVar4 = (undefined8 *)(lVar3 + -0x18);
    puVar2 = (undefined1 *)*puVar4;
    lVar5 = *(long *)(lVar3 + -0x10);
    param_1[2] = puVar4;
    lVar5 = lVar5 - (long)puVar2;
    if (0 < lVar5) {
      uVar6 = lVar5 + 1;
      do {
        uVar6 = uVar6 - 1;
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      } while (1 < uVar6);
      puVar2 = (undefined1 *)*puVar4;
    }
    if (puVar2 != (undefined1 *)0x0) {
      *(undefined1 **)(lVar3 + -0x10) = puVar2;
      operator_delete(puVar2);
    }
    lVar3 = param_1[2];
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 0050726c  FUN_0050726c =====

void FUN_0050726c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_004e8250("vector");
}


// ===== 00507280  FUN_00507280 =====

void FUN_00507280(long *param_1)

{
  undefined2 *puVar1;
  void *pvVar2;
  undefined2 uVar3;
  long lVar4;
  void *pvVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  undefined2 *__s;
  void *pvVar12;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  pvVar2 = (void *)*param_1;
  pvVar9 = (void *)param_1[1];
  lVar7 = (long)pvVar9 - (long)pvVar2 >> 3;
  uVar8 = lVar7 * 0x2fc962fc962fc963 + 1;
  if (uVar8 < 0x6d3a06d3a06d3b) {
    lVar10 = param_1[2] - (long)pvVar2 >> 3;
    uVar11 = lVar10 * 0x5f92c5f92c5f92c6;
    if (uVar11 < uVar8 || uVar11 - uVar8 == 0) {
      uVar11 = uVar8;
    }
    if (0x369d0369d0369c < (ulong)(lVar10 * 0x2fc962fc962fc963)) {
      uVar11 = 0x6d3a06d3a06d3a;
    }
    if (uVar11 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (0x6d3a06d3a06d3a < uVar11) goto LAB_0050750c;
      pvVar5 = operator_new(uVar11 * 600);
    }
    __s = (undefined2 *)((long)pvVar5 + lVar7 * 8);
    if (pvVar5 == (void *)0x0) {
      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 005074cc to 005074f3 has its CatchHandler @ 00507528 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x23,"__location != nullptr","null pointer given to construct_at");
      }
    }
    else {
      memset(__s,0,600);
      *__s = 1;
      memset((void *)((long)pvVar5 + lVar7 * 8 + 8),0,0x249);
      puVar1 = __s + 300;
      pvVar12 = pvVar9;
      if (pvVar9 != pvVar2) {
        lVar7 = 0;
        do {
          puVar6 = (undefined1 *)((long)__s + lVar7 + -0x250);
          uVar3 = *(undefined2 *)((long)pvVar9 + lVar7 + -600);
          *puVar6 = 0;
          *(undefined1 *)((long)__s + lVar7 + -8) = 0xff;
          *(undefined2 *)((long)__s + lVar7 + -600) = uVar3;
          uVar8 = (ulong)*(byte *)((long)pvVar9 + lVar7 + -8);
          if (uVar8 != 0xff) {
                    /* try { // try from 00507400 to 00507407 has its CatchHandler @ 00507524 */
            (*(code *)(&PTR_FUN_00d1fae8)[uVar8])(auStack_70,puVar6,(long)pvVar9 + lVar7 + -0x250);
            *(undefined1 *)((long)__s + lVar7 + -8) = *(undefined1 *)((long)pvVar9 + lVar7 + -8);
          }
          lVar7 = lVar7 + -600;
        } while ((void *)((long)pvVar9 + lVar7) != pvVar2);
        pvVar9 = (void *)param_1[1];
        __s = (undefined2 *)((long)__s + lVar7);
        pvVar12 = (void *)*param_1;
      }
      *param_1 = (long)__s;
      param_1[1] = (long)puVar1;
      param_1[2] = (long)((long)pvVar5 + uVar11 * 600);
      pvVar2 = pvVar9;
      for (; pvVar9 != pvVar12; pvVar9 = (void *)((long)pvVar9 + -600)) {
        if ((ulong)*(byte *)((long)pvVar9 + -8) != 0xff) {
                    /* try { // try from 00507470 to 00507477 has its CatchHandler @ 00507520 */
          (*(code *)(&PTR_FUN_00d1fac0)[*(byte *)((long)pvVar9 + -8)])
                    (auStack_70,(long)pvVar9 + -0x250);
        }
        *(undefined1 *)((long)pvVar9 + -8) = 0xff;
        pvVar2 = pvVar12;
      }
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
      if (*(long *)(lVar4 + 0x28) == local_68) {
        return;
      }
    }
  }
  else {
    if (*(long *)(lVar4 + 0x28) != local_68) goto LAB_0050754c;
    FUN_0050760c(param_1);
LAB_0050750c:
    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
  }
LAB_0050754c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00507550  FUN_00507550 =====

void FUN_00507550(undefined8 *param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar1 = param_1[1];
  lVar4 = param_1[2];
  while (lVar4 != lVar1) {
    bVar2 = *(byte *)(lVar4 + -8);
    lVar5 = lVar4 + -600;
    param_1[2] = lVar5;
    if ((ulong)bVar2 != 0xff) {
                    /* try { // try from 005075c0 to 005075c7 has its CatchHandler @ 00507608 */
      (*(code *)(&PTR_FUN_00d1fac0)[bVar2])(auStack_50,lVar4 + -0x250);
      lVar5 = param_1[2];
    }
    *(undefined1 *)(lVar4 + -8) = 0xff;
    lVar4 = lVar5;
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050760c  FUN_0050760c =====

void FUN_0050760c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_004e8250("vector");
}


// ===== 00507620  FUN_00507620 =====

void FUN_00507620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_005078e0(param_2,param_3);
  return;
}


// ===== 0050762c  FUN_0050762c =====

void FUN_0050762c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar2 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = uVar2;
  param_2[2] = param_3[2];
  uVar2 = param_3[3];
  param_3[1] = 0;
  param_3[2] = 0;
  uVar1 = *(undefined1 *)(param_3 + 4);
  *param_3 = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[5] = 0;
  *(undefined1 *)(param_2 + 4) = uVar1;
  param_2[3] = uVar2;
  uVar2 = param_3[5];
  param_2[6] = param_3[6];
  param_2[5] = uVar2;
  param_2[7] = param_3[7];
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[5] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  uVar2 = param_3[8];
  param_2[9] = param_3[9];
  param_2[8] = uVar2;
  param_2[10] = param_3[10];
  param_3[9] = 0;
  param_3[10] = 0;
  param_3[8] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  uVar2 = param_3[0xb];
  param_2[0xc] = param_3[0xc];
  param_2[0xb] = uVar2;
  param_2[0xd] = param_3[0xd];
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  return;
}


// ===== 005076c0  FUN_005076c0 =====

void FUN_005076c0(undefined8 param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_3;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  uVar3 = *(undefined8 *)(param_3 + 8);
  uVar2 = *(undefined8 *)(param_3 + 4);
  *param_2 = uVar1;
  *(undefined8 *)(param_2 + 8) = uVar3;
  *(undefined8 *)(param_2 + 4) = uVar2;
  *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(param_3 + 0xc);
  *(undefined8 *)(param_3 + 8) = 0;
  *(undefined8 *)(param_3 + 0xc) = 0;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(param_3 + 0x14);
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_3 + 0x14) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x24) = 0;
  uVar2 = *(undefined8 *)(param_3 + 0x1c);
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_2 + 0x1c) = uVar2;
  *(undefined8 *)(param_2 + 0x24) = *(undefined8 *)(param_3 + 0x24);
  *(undefined8 *)(param_3 + 0x20) = 0;
  *(undefined8 *)(param_3 + 0x24) = 0;
  *(undefined8 *)(param_3 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(param_2 + 0x2c) = *(undefined8 *)(param_3 + 0x2c);
  *(undefined8 *)(param_2 + 0x28) = uVar2;
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)(param_3 + 0x28) = 0;
  *(undefined8 *)(param_3 + 0x2c) = 0;
  *(undefined8 *)(param_3 + 0x30) = 0;
  return;
}


// ===== 0050774c  FUN_0050774c =====

void FUN_0050774c(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_3;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  *param_2 = uVar1;
  uVar2 = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)(param_2 + 2) = uVar2;
  uVar2 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0;
  *(undefined8 *)(param_3 + 2) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  uVar4 = *(undefined8 *)(param_3 + 0xc);
  uVar3 = *(undefined8 *)(param_3 + 10);
  *(undefined8 *)(param_2 + 8) = uVar2;
  *(undefined8 *)(param_2 + 0xc) = uVar4;
  *(undefined8 *)(param_2 + 10) = uVar3;
  *(undefined8 *)(param_2 + 0xe) = *(undefined8 *)(param_3 + 0xe);
  *(undefined8 *)(param_3 + 10) = 0;
  *(undefined8 *)(param_3 + 0xc) = 0;
  *(undefined8 *)(param_3 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_2 + 0x12) = *(undefined8 *)(param_3 + 0x12);
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(param_3 + 0x14);
  *(undefined8 *)(param_3 + 0x12) = 0;
  *(undefined8 *)(param_3 + 0x14) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x1a) = 0;
  uVar2 = *(undefined8 *)(param_3 + 0x16);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_2 + 0x16) = uVar2;
  *(undefined8 *)(param_2 + 0x1a) = *(undefined8 *)(param_3 + 0x1a);
  *(undefined8 *)(param_3 + 0x18) = 0;
  *(undefined8 *)(param_3 + 0x1a) = 0;
  *(undefined8 *)(param_3 + 0x16) = 0;
  *(undefined8 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x1e) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  uVar2 = *(undefined8 *)(param_3 + 0x1c);
  *(undefined8 *)(param_2 + 0x1e) = *(undefined8 *)(param_3 + 0x1e);
  *(undefined8 *)(param_2 + 0x1c) = uVar2;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_3 + 0x1e) = 0;
  *(undefined8 *)(param_3 + 0x20) = 0;
  *(undefined8 *)(param_3 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x22) = 0;
  *(undefined8 *)(param_2 + 0x24) = 0;
  *(undefined8 *)(param_2 + 0x26) = 0;
  uVar2 = *(undefined8 *)(param_3 + 0x22);
  *(undefined8 *)(param_2 + 0x24) = *(undefined8 *)(param_3 + 0x24);
  *(undefined8 *)(param_2 + 0x22) = uVar2;
  *(undefined8 *)(param_2 + 0x26) = *(undefined8 *)(param_3 + 0x26);
  uVar1 = param_3[0x28];
  *(undefined8 *)(param_3 + 0x24) = 0;
  *(undefined8 *)(param_3 + 0x26) = 0;
  *(undefined8 *)(param_3 + 0x22) = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x2e) = 0;
  *(undefined8 *)(param_2 + 0x2a) = 0;
  param_2[0x28] = uVar1;
  uVar2 = *(undefined8 *)(param_3 + 0x2a);
  *(undefined8 *)(param_2 + 0x2c) = *(undefined8 *)(param_3 + 0x2c);
  *(undefined8 *)(param_2 + 0x2a) = uVar2;
  *(undefined8 *)(param_2 + 0x2e) = *(undefined8 *)(param_3 + 0x2e);
  *(undefined8 *)(param_3 + 0x2a) = 0;
  *(undefined8 *)(param_3 + 0x2c) = 0;
  *(undefined8 *)(param_3 + 0x2e) = 0;
  return;
}


// ===== 00507844  FUN_00507844 =====

void FUN_00507844(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_3;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  *param_2 = uVar1;
  uVar2 = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)(param_2 + 2) = uVar2;
  *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)(param_3 + 2) = 0;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0;
  FUN_004fd6e4(param_2 + 8,param_3 + 8);
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x5a) = 0;
  *(undefined8 *)(param_2 + 0x56) = 0;
  uVar2 = *(undefined8 *)(param_3 + 0x56);
  *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_3 + 0x58);
  *(undefined8 *)(param_2 + 0x56) = uVar2;
  *(undefined8 *)(param_2 + 0x5a) = *(undefined8 *)(param_3 + 0x5a);
  *(undefined8 *)(param_3 + 0x58) = 0;
  *(undefined8 *)(param_3 + 0x5a) = 0;
  *(undefined8 *)(param_3 + 0x56) = 0;
  *(undefined8 *)(param_2 + 0x5c) = 0;
  *(undefined8 *)(param_2 + 0x5e) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  uVar2 = *(undefined8 *)(param_3 + 0x5c);
  *(undefined8 *)(param_2 + 0x5e) = *(undefined8 *)(param_3 + 0x5e);
  *(undefined8 *)(param_2 + 0x5c) = uVar2;
  *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_3 + 0x60);
  *(undefined8 *)(param_3 + 0x5c) = 0;
  *(undefined8 *)(param_3 + 0x5e) = 0;
  *(undefined8 *)(param_3 + 0x60) = 0;
  return;
}


// ===== 005078e0  FUN_005078e0 =====

void FUN_005078e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[2] = param_2[2];
  uVar4 = param_2[4];
  uVar3 = param_2[3];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  param_1[4] = uVar4;
  param_1[3] = uVar3;
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  param_1[7] = param_2[7];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[5] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0xff;
  if ((ulong)*(byte *)(param_2 + 0x3c) != 0xff) {
                    /* try { // try from 0050797c to 00507987 has its CatchHandler @ 00507a5c */
    (*(code *)(&PTR_FUN_00d1f978)[*(byte *)(param_2 + 0x3c)])(auStack_40,param_1 + 9,param_2 + 9);
    *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
  }
  uVar1 = *(undefined1 *)(param_2 + 0x3d);
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3e] = 0;
  uVar4 = param_2[0x3f];
  uVar3 = param_2[0x3e];
  *(undefined1 *)(param_1 + 0x3d) = uVar1;
  param_1[0x3f] = uVar4;
  param_1[0x3e] = uVar3;
  param_1[0x40] = param_2[0x40];
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  if (*(char *)(param_2 + 0x44) != '\0') {
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x41] = 0;
    uVar3 = param_2[0x41];
    param_1[0x42] = param_2[0x42];
    param_1[0x41] = uVar3;
    param_1[0x43] = param_2[0x43];
    param_2[0x42] = 0;
    param_2[0x43] = 0;
    param_2[0x41] = 0;
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  if (*(char *)(param_2 + 0x48) != '\0') {
    param_1[0x46] = 0;
    param_1[0x47] = 0;
    param_1[0x45] = 0;
    uVar3 = param_2[0x45];
    param_1[0x46] = param_2[0x46];
    param_1[0x45] = uVar3;
    param_1[0x47] = param_2[0x47];
    param_2[0x46] = 0;
    param_2[0x47] = 0;
    param_2[0x45] = 0;
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00507a60  FUN_00507a60 =====

void FUN_00507a60(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [4];
  undefined1 local_64 [4];
  undefined1 auStack_60 [4];
  undefined2 local_5c [2];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar1 = (uint)param_2 & 0xffff;
  if (uVar1 == 3) {
    if ((ulong)*(byte *)(param_3 + 0x49) != 0xff) {
                    /* try { // try from 00507b5c to 00507b67 has its CatchHandler @ 00507c18 */
      (*(code *)(&PTR_FUN_00d1fac0)[*(byte *)(param_3 + 0x49)])(auStack_60,param_3);
    }
    *(undefined1 *)(param_3 + 0x49) = 0xff;
    FUN_0056bc68(param_3);
    puVar3 = param_3 + 4;
    *(undefined1 *)(param_3 + 0x49) = 2;
    FUN_005a31cc(param_1,local_5c);
    *(undefined2 *)param_3 = local_5c[0];
    FUN_00507e34(param_1,param_3 + 1);
  }
  else {
    if (uVar1 != 2) {
      if (*(long *)(lVar2 + 0x28) == local_58) {
        FUN_00507c20(param_1,param_2,param_3);
        return;
      }
      goto LAB_00507c14;
    }
    if ((ulong)*(byte *)(param_3 + 0x49) != 0xff) {
                    /* try { // try from 00507abc to 00507ac7 has its CatchHandler @ 00507c1c */
      (*(code *)(&PTR_FUN_00d1fac0)[*(byte *)(param_3 + 0x49)])(auStack_68,param_3);
    }
    puVar3 = param_3 + 0xb;
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[7] = 0;
    param_3[6] = 0;
    param_3[0xb] = 0;
    param_3[10] = 0;
    param_3[0xd] = 0;
    param_3[0xc] = 0;
    param_3[9] = 0;
    param_3[8] = 0;
    *(undefined1 *)(param_3 + 0x49) = 1;
    FUN_00506244(param_1,param_3);
    FUN_005a3318(param_1,param_3 + 3);
    FUN_005a3158(param_1,local_64);
    *(undefined1 *)(param_3 + 4) = local_64[0];
    FUN_00506244(param_1,param_3 + 5);
    FUN_00506244(param_1,param_3 + 8);
  }
  FUN_00506244(param_1,puVar3);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_00507c14:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00507c20  FUN_00507c20 =====

void FUN_00507c20(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 auStack_78 [8];
  undefined2 local_70 [2];
  undefined2 local_6c [2];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (((uint)param_2 & 0xffff) == 4) {
    if ((ulong)*(byte *)(param_3 + 0x49) != 0xff) {
                    /* try { // try from 00507c7c to 00507c87 has its CatchHandler @ 00507e30 */
      (*(code *)(&PTR_FUN_00d1fac0)[*(byte *)(param_3 + 0x49)])(auStack_78,param_3);
    }
    *(undefined1 *)(param_3 + 0x49) = 0xff;
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[7] = 0;
    param_3[6] = 0;
    param_3[0xb] = 0;
    param_3[10] = 0;
    param_3[0xd] = 0;
    param_3[0xc] = 0;
    param_3[0x11] = 0;
    param_3[0x10] = 0;
    param_3[0x13] = 0;
    param_3[0x12] = 0;
    *(undefined2 *)param_3 = 1;
    param_3[0x17] = 0;
    param_3[0x16] = 0;
    param_3[0x15] = 0;
    param_3[0x14] = 0;
    param_3[0xf] = 0;
    param_3[0xe] = 0;
    param_3[9] = 0;
    param_3[8] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    FUN_00562400((long)param_3 + 2);
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[1] = 0;
    param_3[0x15] = 0;
    param_3[0x16] = 0;
    param_3[0x17] = 0;
    param_3[8] = 0;
    param_3[7] = 0;
    *(undefined8 *)((long)param_3 + 0x9c) = 0;
    *(undefined8 *)((long)param_3 + 0x94) = 0;
    param_3[0x12] = 0;
    param_3[0x11] = 0;
    param_3[10] = 0;
    param_3[9] = 0;
    param_3[0xe] = 0;
    param_3[0xd] = 0;
    param_3[0x10] = 0;
    param_3[0xf] = 0;
    param_3[0xc] = 0;
    param_3[0xb] = 0;
    param_3[6] = 0;
    param_3[5] = 0;
    *(undefined1 *)(param_3 + 0x49) = 3;
    FUN_005a31cc(param_1,local_70);
    *(undefined2 *)param_3 = local_70[0];
    FUN_005a31cc(param_1,local_6c);
    *(undefined2 *)((long)param_3 + 2) = local_6c[0];
    FUN_00506244(param_1,param_3 + 1);
    FUN_005a3318(param_1,param_3 + 4);
    FUN_00506244(param_1,param_3 + 5);
    FUN_00506244(param_1,param_3 + 8);
    FUN_00508614(param_1,param_3 + 0xb);
    FUN_00508614(param_1,param_3 + 0xe);
    FUN_00506244(param_1,param_3 + 0x11);
    FUN_005a3258(param_1,param_3 + 0x14);
    FUN_00506244(param_1,param_3 + 0x15);
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_68) {
    FUN_0050845c(param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00507e34  FUN_00507e34 =====

long * FUN_00507e34(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  void *__dest;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  ulong local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_50 = 0;
  FUN_005a35bc(param_1,&local_50);
  uVar4 = local_50;
  puVar5 = (undefined1 *)param_1[1];
  if ((ulong)((long)puVar5 - *param_1) < local_50) {
    uVar6 = FUN_0054f64c(0x10);
                    /* try { // try from 005080dc to 005080e7 has its CatchHandler @ 00508128 */
    FUN_005064ec(uVar6,"Vector is longer than remaining data");
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar6,&PTR_PTR_thunk_FUN_00552768_00d1fbf0,PTR_FUN_00d51d28);
    }
    goto LAB_0050817c;
  }
  local_68 = (undefined1 *)0x0;
  local_60 = (undefined1 *)0x0;
  local_58 = (undefined1 *)0x0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (local_50 == 0) {
    local_58 = (undefined1 *)0x0;
    local_60 = (undefined1 *)0x0;
    local_68 = (undefined1 *)0x0;
  }
  else {
    if ((long)local_50 < 0) {
      if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 00508120 to 00508127 has its CatchHandler @ 00508138 */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_80);
      }
      goto LAB_0050817c;
    }
                    /* try { // try from 00507e98 to 00507e9f has its CatchHandler @ 00508138 */
    local_68 = (undefined1 *)operator_new(local_50);
    puVar8 = puVar5 + -uVar4;
    local_58 = local_68 + uVar4;
    puVar7 = local_68;
    if ((0x1f < uVar4) && ((undefined1 *)0x1f < local_68 + (uVar4 - (long)puVar5))) {
      uVar10 = uVar4 & 0xffffffffffffffe0;
      uVar11 = 0;
      local_60 = local_68 + uVar10;
      do {
        puVar2 = (undefined8 *)(puVar8 + uVar11);
        puVar13 = (undefined8 *)(local_68 + uVar11);
        uVar11 = uVar11 + 0x20;
        uVar6 = *puVar2;
        uVar15 = puVar2[3];
        uVar14 = puVar2[2];
        puVar13[1] = puVar2[1];
        *puVar13 = uVar6;
        puVar13[3] = uVar15;
        puVar13[2] = uVar14;
      } while (uVar10 != uVar11);
      puVar7 = local_60;
      puVar8 = puVar8 + uVar10;
      if (uVar4 == uVar10) goto LAB_00507f24;
    }
    do {
      puVar9 = puVar8 + 1;
      local_60 = puVar7 + 1;
      *puVar7 = *puVar8;
      puVar7 = local_60;
      puVar8 = puVar9;
    } while (puVar9 != puVar5);
  }
LAB_00507f24:
  lVar1 = *param_2;
  lVar12 = param_2[1];
  while (lVar12 != lVar1) {
    lVar12 = lVar12 + -0x48;
                    /* try { // try from 00507f3c to 00507f43 has its CatchHandler @ 0050813c */
    FUN_00503d98(lVar12);
  }
  param_2[1] = lVar1;
  while (local_60 != local_68) {
    puVar2 = (undefined8 *)param_2[1];
    if (puVar2 < (undefined8 *)param_2[2]) {
      if (puVar2 == (undefined8 *)0x0) {
        if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 00508070 to 00508097 has its CatchHandler @ 0050814c */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        goto LAB_0050817c;
      }
      puVar13 = puVar2 + 9;
      puVar2[8] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[7] = 0;
      puVar2[6] = 0;
      param_2[1] = (long)puVar13;
    }
    else {
                    /* try { // try from 00507f84 to 00507fbf has its CatchHandler @ 00508140 */
      FUN_00508184(param_2);
      puVar13 = (undefined8 *)param_2[1];
    }
    if ((undefined8 *)*param_2 == puVar13) {
      if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 00508038 to 0050805f has its CatchHandler @ 00508180 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                   "!empty()","back() called on an empty vector");
      }
      goto LAB_0050817c;
    }
    FUN_00506244(&local_68,puVar13 + -9);
    FUN_00506244(&local_68,puVar13 + -6);
    FUN_00506244(&local_68,puVar13 + -3);
  }
  if ((long)local_50 < 0) {
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 005080a8 to 005080cf has its CatchHandler @ 00508144 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x644,
                 "__first <= __last","vector::erase(first, last) called with invalid range");
    }
  }
  else {
    puVar5 = local_60;
    if (local_50 != 0) {
      __dest = (void *)(param_1[1] - local_50);
      memmove(__dest,(void *)((long)__dest + local_50),param_1[1] - (long)((long)__dest + local_50))
      ;
      param_1[1] = (long)__dest;
      puVar5 = local_68;
    }
    if (puVar5 != (undefined1 *)0x0) {
      local_60 = puVar5;
      operator_delete(puVar5);
    }
    if (*(long *)(lVar3 + 0x28) == local_48) {
      return param_1;
    }
  }
LAB_0050817c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00508184  FUN_00508184 =====

void FUN_00508184(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  puVar3 = (undefined8 *)*param_1;
  puVar12 = (undefined8 *)param_1[1];
  lVar7 = (long)puVar12 - (long)puVar3 >> 3;
  uVar1 = lVar7 * -0x71c71c71c71c71c7 + 1;
  if (uVar1 < 0x38e38e38e38e38f) {
    lVar10 = param_1[2] - (long)puVar3 >> 3;
    uVar11 = lVar10 * 0x1c71c71c71c71c72;
    if (uVar11 < uVar1 || uVar11 - uVar1 == 0) {
      uVar11 = uVar1;
    }
    if (0x1c71c71c71c71c6 < (ulong)(lVar10 * -0x71c71c71c71c71c7)) {
      uVar11 = 0x38e38e38e38e38e;
    }
    if (uVar11 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (0x38e38e38e38e38e < uVar11) goto LAB_005083b4;
      pvVar5 = operator_new(uVar11 * 0x48);
    }
    puVar8 = (undefined8 *)((long)pvVar5 + lVar7 * 8);
    if (pvVar5 == (void *)0x0) {
      if (*(long *)(lVar4 + 0x28) == lVar6) {
                    /* try { // try from 00508374 to 0050839b has its CatchHandler @ 005083cc */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x23,"__location != nullptr","null pointer given to construct_at");
      }
    }
    else {
      puVar2 = puVar8 + 9;
      puVar8[8] = 0;
      puVar8[1] = 0;
      *puVar8 = 0;
      puVar8[3] = 0;
      puVar8[2] = 0;
      puVar8[5] = 0;
      puVar8[4] = 0;
      puVar8[7] = 0;
      puVar8[6] = 0;
      puVar9 = puVar8;
      puVar13 = puVar12;
      if (puVar12 != puVar3) {
        do {
          puVar9[-8] = 0;
          puVar9[-7] = 0;
          puVar13 = puVar12 + -9;
          uVar14 = *puVar13;
          puVar8 = puVar9 + -9;
          puVar9[-8] = puVar12[-8];
          *puVar8 = uVar14;
          puVar9[-7] = puVar12[-7];
          puVar12[-8] = 0;
          puVar12[-7] = 0;
          *puVar13 = 0;
          puVar9[-5] = 0;
          puVar9[-4] = 0;
          uVar14 = puVar12[-6];
          puVar9[-5] = puVar12[-5];
          puVar9[-6] = uVar14;
          puVar9[-4] = puVar12[-4];
          puVar12[-5] = 0;
          puVar12[-4] = 0;
          puVar12[-6] = 0;
          puVar9[-2] = 0;
          puVar9[-1] = 0;
          uVar14 = puVar12[-3];
          puVar9[-2] = puVar12[-2];
          puVar9[-3] = uVar14;
          puVar9[-1] = puVar12[-1];
          puVar12[-3] = 0;
          puVar12[-2] = 0;
          puVar12[-1] = 0;
          puVar9 = puVar8;
          puVar12 = puVar13;
        } while (puVar13 != puVar3);
        puVar12 = (undefined8 *)param_1[1];
        puVar13 = (undefined8 *)*param_1;
      }
      *param_1 = puVar8;
      param_1[1] = puVar2;
      param_1[2] = (void *)((long)pvVar5 + uVar11 * 0x48);
      while (puVar12 != puVar13) {
        puVar12 = puVar12 + -9;
                    /* try { // try from 00508300 to 00508307 has its CatchHandler @ 005083c8 */
        FUN_00503d98(puVar12);
      }
      if (puVar13 == (undefined8 *)0x0) {
        if (*(long *)(lVar4 + 0x28) == lVar6) {
          return;
        }
      }
      else if (*(long *)(lVar4 + 0x28) == lVar6) {
        operator_delete(puVar13);
        return;
      }
    }
  }
  else {
    if (*(long *)(lVar4 + 0x28) != lVar6) goto LAB_005083f0;
    FUN_00508448(param_1);
LAB_005083b4:
    if (*(long *)(lVar4 + 0x28) == lVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
  }
LAB_005083f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005083f4  FUN_005083f4 =====

void FUN_005083f4(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (param_1[2] != lVar1) {
    param_1[2] = param_1[2] + -0x48;
                    /* try { // try from 0050841c to 0050841f has its CatchHandler @ 00508444 */
    FUN_00503d98();
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 00508448  FUN_00508448 =====

void FUN_00508448(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_004e8250("vector");
}


// ===== 0050845c  FUN_0050845c =====

void FUN_0050845c(undefined8 param_1,short param_2,undefined2 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined2 *local_90;
  undefined2 *puStack_88;
  undefined2 *local_80;
  undefined2 *puStack_78;
  undefined2 *local_70;
  undefined2 *puStack_68;
  undefined2 *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_2 == 5) {
    if ((ulong)*(byte *)(param_3 + 0x124) != 0xff) {
                    /* try { // try from 005084b0 to 005084bb has its CatchHandler @ 00508610 */
      (*(code *)(&PTR_FUN_00d1fac0)[*(byte *)(param_3 + 0x124)])(&local_90,param_3);
    }
    *(undefined1 *)(param_3 + 0x124) = 0xff;
    FUN_0055be84(param_3);
    *(undefined1 *)(param_3 + 0x124) = 4;
    FUN_005a31cc(param_1,&local_90);
    *param_3 = local_90._0_2_;
    FUN_005a31cc(param_1,&local_90);
    param_3[1] = local_90._0_2_;
    FUN_00506244(param_1,param_3 + 4);
    local_80 = param_3 + 0x28;
    puStack_78 = param_3 + 0x48;
    local_70 = param_3 + 0x84;
    puStack_68 = param_3 + 0x94;
    local_60 = param_3 + 0xa0;
    local_90 = param_3 + 0x10;
    puStack_88 = param_3 + 0x1c;
    FUN_00506244(param_1,param_3 + 0x10);
    FUN_00506244(param_1,param_3 + 0x1c);
    FUN_00508c6c(param_1,&local_90);
    FUN_00508614(param_1,param_3 + 0xac);
    FUN_00506244(param_1,param_3 + 0xb8);
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
  else {
    uVar2 = FUN_0054f64c(0x10);
                    /* try { // try from 005085b4 to 005085bf has its CatchHandler @ 005085e8 */
    FUN_005064ec(uVar2,"Invalid variant type label");
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar2,&PTR_PTR_thunk_FUN_00552768_00d1fbf0,PTR_FUN_00d51d28);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00508614  FUN_00508614 =====

long * FUN_00508614(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  void *__dest;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  ulong local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_50 = 0;
  FUN_005a35bc(param_1,&local_50);
  uVar8 = local_50;
  puVar5 = (undefined1 *)param_1[1];
  if ((ulong)((long)puVar5 - *param_1) < local_50) {
    uVar6 = FUN_0054f64c(0x10);
                    /* try { // try from 005088e0 to 005088eb has its CatchHandler @ 0050892c */
    FUN_005064ec(uVar6,"Vector is longer than remaining data");
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar6,&PTR_PTR_thunk_FUN_00552768_00d1fbf0,PTR_FUN_00d51d28);
    }
    goto LAB_0050897c;
  }
  local_68 = (undefined1 *)0x0;
  local_60 = (undefined1 *)0x0;
  local_58 = (undefined1 *)0x0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (local_50 == 0) {
    local_58 = (undefined1 *)0x0;
    local_60 = (undefined1 *)0x0;
    local_68 = (undefined1 *)0x0;
  }
  else {
    if ((long)local_50 < 0) {
      if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 00508924 to 0050892b has its CatchHandler @ 0050893c */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_80);
      }
      goto LAB_0050897c;
    }
                    /* try { // try from 00508678 to 0050867f has its CatchHandler @ 0050893c */
    local_68 = (undefined1 *)operator_new(local_50);
    puVar10 = puVar5 + -uVar8;
    local_58 = local_68 + uVar8;
    puVar9 = local_68;
    if ((0x1f < uVar8) && ((undefined1 *)0x1f < local_68 + (uVar8 - (long)puVar5))) {
      uVar12 = uVar8 & 0xffffffffffffffe0;
      uVar13 = 0;
      local_60 = local_68 + uVar12;
      do {
        puVar2 = (undefined8 *)(puVar10 + uVar13);
        puVar14 = (undefined8 *)(local_68 + uVar13);
        uVar13 = uVar13 + 0x20;
        uVar6 = *puVar2;
        uVar16 = puVar2[3];
        uVar15 = puVar2[2];
        puVar14[1] = puVar2[1];
        *puVar14 = uVar6;
        puVar14[3] = uVar16;
        puVar14[2] = uVar15;
      } while (uVar12 != uVar13);
      puVar9 = local_60;
      puVar10 = puVar10 + uVar12;
      if (uVar8 == uVar12) goto LAB_00508704;
    }
    do {
      puVar11 = puVar10 + 1;
      local_60 = puVar9 + 1;
      *puVar9 = *puVar10;
      puVar9 = local_60;
      puVar10 = puVar11;
    } while (puVar11 != puVar5);
  }
LAB_00508704:
  lVar1 = *param_2;
  lVar7 = param_2[1];
  while (lVar4 = lVar7, lVar4 != lVar1) {
    puVar5 = *(undefined1 **)(lVar4 + -0x18);
    lVar7 = *(long *)(lVar4 + -0x10) - (long)puVar5;
    if (0 < lVar7) {
      uVar8 = lVar7 + 1;
      do {
        uVar8 = uVar8 - 1;
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      } while (1 < uVar8);
      puVar5 = *(undefined1 **)(lVar4 + -0x18);
    }
    lVar7 = lVar4 + -0x20;
    if (puVar5 != (undefined1 *)0x0) {
      *(undefined1 **)(lVar4 + -0x10) = puVar5;
      operator_delete(puVar5);
    }
  }
  param_2[1] = lVar1;
  while (local_60 != local_68) {
    puVar2 = (undefined8 *)param_2[1];
    if (puVar2 < (undefined8 *)param_2[2]) {
      if (puVar2 == (undefined8 *)0x0) {
        if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 00508874 to 0050889b has its CatchHandler @ 0050894c */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        goto LAB_0050897c;
      }
      puVar14 = puVar2 + 4;
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      param_2[1] = (long)puVar14;
    }
    else {
                    /* try { // try from 0050874c to 0050877b has its CatchHandler @ 00508940 */
      FUN_00508984(param_2);
      puVar14 = (undefined8 *)param_2[1];
    }
    if ((undefined8 *)*param_2 == puVar14) {
      if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 0050883c to 00508863 has its CatchHandler @ 00508980 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                   "!empty()","back() called on an empty vector");
      }
      goto LAB_0050897c;
    }
    FUN_005a31cc(&local_68,puVar14 + -4);
    FUN_00506244(&local_68,puVar14 + -3);
  }
  if ((long)local_50 < 0) {
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 005088ac to 005088d3 has its CatchHandler @ 00508944 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x644,
                 "__first <= __last","vector::erase(first, last) called with invalid range");
    }
  }
  else {
    puVar5 = local_60;
    if (local_50 != 0) {
      __dest = (void *)(param_1[1] - local_50);
      memmove(__dest,(void *)((long)__dest + local_50),param_1[1] - (long)((long)__dest + local_50))
      ;
      param_1[1] = (long)__dest;
      puVar5 = local_68;
    }
    if (puVar5 != (undefined1 *)0x0) {
      local_60 = puVar5;
      operator_delete(puVar5);
    }
    if (*(long *)(lVar3 + 0x28) == local_48) {
      return param_1;
    }
  }
LAB_0050897c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00508984  FUN_00508984 =====

void FUN_00508984(long *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  void *pvVar11;
  void *pvVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  pvVar2 = (void *)*param_1;
  pvVar11 = (void *)param_1[1];
  lVar13 = (long)pvVar11 - (long)pvVar2 >> 5;
  uVar8 = lVar13 + 1;
  if (uVar8 >> 0x3b == 0) {
    uVar10 = (ulong)(param_1[2] - (long)pvVar2) >> 4;
    if (uVar10 <= uVar8) {
      uVar10 = uVar8;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - (long)pvVar2)) {
      uVar10 = 0x7ffffffffffffff;
    }
    if (uVar10 != 0) {
      if (uVar10 >> 0x3b == 0) {
        pvVar4 = operator_new(uVar10 * 0x20);
        puVar7 = (undefined8 *)((long)pvVar4 + lVar13 * 0x20);
        puVar1 = puVar7 + 4;
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7[3] = 0;
        puVar7[2] = 0;
        pvVar12 = pvVar11;
        if (pvVar11 != pvVar2) {
          lVar13 = 0;
          do {
            lVar9 = lVar13 + -0x20;
            *(undefined2 *)((long)puVar7 + lVar13 + -0x20) =
                 *(undefined2 *)((long)pvVar11 + lVar13 + -0x20);
            uVar14 = *(undefined8 *)((long)pvVar11 + lVar13 + -0x18);
            *(undefined8 *)((long)puVar7 + lVar13 + -0x10) =
                 *(undefined8 *)((long)pvVar11 + lVar13 + -0x10);
            *(undefined8 *)((long)puVar7 + lVar13 + -0x18) = uVar14;
            *(undefined8 *)((long)puVar7 + lVar13 + -8) =
                 *(undefined8 *)((long)pvVar11 + lVar13 + -8);
            *(undefined8 *)((long)pvVar11 + lVar13 + -0x18) = 0;
            *(undefined8 *)((long)pvVar11 + lVar13 + -0x10) = 0;
            *(undefined8 *)((long)pvVar11 + lVar13 + -8) = 0;
            lVar13 = lVar9;
          } while ((void *)((long)pvVar11 + lVar9) != pvVar2);
          pvVar11 = (void *)param_1[1];
          puVar7 = (undefined8 *)((long)puVar7 + lVar9);
          pvVar12 = (void *)*param_1;
        }
        *param_1 = (long)puVar7;
        param_1[1] = (long)puVar1;
        param_1[2] = (long)((long)pvVar4 + uVar10 * 0x20);
        pvVar2 = pvVar11;
        while (pvVar4 = pvVar11, pvVar4 != pvVar12) {
          puVar5 = *(undefined1 **)((long)pvVar4 + -0x18);
          lVar13 = *(long *)((long)pvVar4 + -0x10) - (long)puVar5;
          if (0 < lVar13) {
            uVar8 = lVar13 + 1;
            do {
              uVar8 = uVar8 - 1;
              *puVar5 = 0;
              puVar5 = puVar5 + 1;
            } while (1 < uVar8);
            puVar5 = *(undefined1 **)((long)pvVar4 + -0x18);
          }
          pvVar11 = (void *)((long)pvVar4 + -0x20);
          pvVar2 = pvVar12;
          if (puVar5 != (undefined1 *)0x0) {
            *(undefined1 **)((long)pvVar4 + -0x10) = puVar5;
            operator_delete(puVar5);
          }
        }
        if (pvVar2 == (void *)0x0) {
          if (*(long *)(lVar3 + 0x28) == lVar6) {
            return;
          }
        }
        else if (*(long *)(lVar3 + 0x28) == lVar6) {
          operator_delete(pvVar2);
          return;
        }
      }
      else if (*(long *)(lVar3 + 0x28) == lVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      goto LAB_00508be4;
    }
  }
  else {
    if (*(long *)(lVar3 + 0x28) != lVar6) goto LAB_00508be4;
    FUN_004fef58(param_1);
  }
  if (*(long *)(lVar3 + 0x28) == lVar6) {
                    /* try { // try from 00508b84 to 00508bab has its CatchHandler @ 00508bc0 */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
LAB_00508be4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00508be8  FUN_00508be8 =====

void FUN_00508be8(undefined8 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar1) {
    puVar2 = *(undefined1 **)(lVar3 + -0x18);
    lVar4 = *(long *)(lVar3 + -0x10);
    param_1[2] = lVar3 + -0x20;
    lVar4 = lVar4 - (long)puVar2;
    if (0 < lVar4) {
      uVar5 = lVar4 + 1;
      do {
        uVar5 = uVar5 - 1;
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      } while (1 < uVar5);
      puVar2 = *(undefined1 **)(lVar3 + -0x18);
    }
    if (puVar2 != (undefined1 *)0x0) {
      *(undefined1 **)(lVar3 + -0x10) = puVar2;
      operator_delete(puVar2);
    }
    lVar3 = param_1[2];
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 00508c6c  FUN_00508c6c =====

void FUN_00508c6c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  short local_64 [2];
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar3 = *(undefined8 **)(param_2 + 0x10);
  FUN_005a31cc(param_1,local_64);
  if (local_64[0] == 1) {
    if ((ulong)*(byte *)(puVar3 + 7) != 0xff) {
                    /* try { // try from 00508ccc to 00508cd7 has its CatchHandler @ 00508da0 */
      (*(code *)(&PTR_FUN_00d1f9c8)[*(byte *)(puVar3 + 7)])(auStack_60,puVar3);
    }
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 7) = 0;
    FUN_00506244(param_1,puVar3);
  }
  else {
    FUN_00506690(param_1,local_64[0],puVar3);
  }
  lVar2 = *(long *)(param_2 + 0x18);
  FUN_00508da4(param_1);
  FUN_005091c4(param_1,lVar2 + 0x18);
  FUN_005095e4(param_1,lVar2 + 0x30);
  FUN_005095e4(param_1,lVar2 + 0x48);
  FUN_005099f0(param_1,lVar2 + 0x60);
  FUN_00509e10(param_1,*(undefined8 *)(param_2 + 0x20));
  FUN_00508614(param_1,*(undefined8 *)(param_2 + 0x28));
  FUN_00506244(param_1,*(undefined8 *)(param_2 + 0x30));
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00508da4  FUN_00508da4 =====

long * FUN_00508da4(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  ulong local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  local_50 = 0;
  FUN_005a35bc(param_1,&local_50);
  uVar11 = local_50;
  puVar12 = (undefined1 *)param_1[1];
  if ((ulong)((long)puVar12 - *param_1) < local_50) {
    uVar6 = FUN_0054f64c(0x10);
                    /* try { // try from 00508fc8 to 00508fd3 has its CatchHandler @ 00509014 */
    FUN_005064ec(uVar6,"Vector is longer than remaining data");
    if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar6,&PTR_PTR_thunk_FUN_00552768_00d1fbf0,PTR_FUN_00d51d28);
    }
    goto LAB_00509058;
  }
  local_68 = (undefined1 *)0x0;
  local_60 = (undefined1 *)0x0;
  local_58 = (undefined1 *)0x0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (local_50 == 0) {
    local_58 = (undefined1 *)0x0;
    local_60 = (undefined1 *)0x0;
    local_68 = (undefined1 *)0x0;
  }
  else {
    if ((long)local_50 < 0) {
      if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 0050900c to 00509013 has its CatchHandler @ 00509024 */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_80);
      }
      goto LAB_00509058;
    }
                    /* try { // try from 00508e08 to 00508e0f has its CatchHandler @ 00509024 */
    local_68 = (undefined1 *)operator_new(local_50);
    puVar7 = puVar12 + -uVar11;
    local_58 = local_68 + uVar11;
    puVar5 = local_68;
    if ((0x1f < uVar11) && ((undefined1 *)0x1f < local_68 + (uVar11 - (long)puVar12))) {
      uVar9 = uVar11 & 0xffffffffffffffe0;
      uVar10 = 0;
      local_60 = local_68 + uVar9;
      do {
        puVar1 = (undefined8 *)(puVar7 + uVar10);
        puVar2 = (undefined8 *)(local_68 + uVar10);
        uVar10 = uVar10 + 0x20;
        uVar6 = *puVar1;
        uVar14 = puVar1[3];
        uVar13 = puVar1[2];
        puVar2[1] = puVar1[1];
        *puVar2 = uVar6;
        puVar2[3] = uVar14;
        puVar2[2] = uVar13;
      } while (uVar9 != uVar10);
      puVar5 = local_60;
      puVar7 = puVar7 + uVar9;
      if (uVar11 == uVar9) goto LAB_00508e98;
    }
    do {
      puVar8 = puVar7 + 1;
      local_60 = puVar5 + 1;
      *puVar5 = *puVar7;
      puVar5 = local_60;
      puVar7 = puVar8;
    } while (puVar8 != puVar12);
  }
LAB_00508e98:
  param_2[1] = *param_2;
  if (local_60 != local_68) {
    do {
                    /* try { // try from 00508eb0 to 00508ecf has its CatchHandler @ 00509028 */
      FUN_00509060(param_2);
      lVar3 = param_2[1];
      if (*param_2 == lVar3) {
        if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 00508f5c to 00508f83 has its CatchHandler @ 0050905c */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        goto LAB_00509058;
      }
      FUN_005a31cc(&local_68,&local_80);
      *(undefined2 *)(lVar3 + -2) = (undefined2)local_80;
    } while (local_60 != local_68);
    puVar12 = (undefined1 *)param_1[1];
    uVar11 = local_50;
  }
  if ((long)uVar11 < 0) {
    if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 00508f94 to 00508fbb has its CatchHandler @ 0050902c */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x644,
                 "__first <= __last","vector::erase(first, last) called with invalid range");
    }
  }
  else {
    puVar5 = local_60;
    if (uVar11 != 0) {
      puVar5 = puVar12 + -uVar11;
      memmove(puVar5,puVar5 + uVar11,(long)puVar12 - (long)(puVar5 + uVar11));
      param_1[1] = (long)puVar12 - uVar11;
      puVar5 = local_68;
    }
    if (puVar5 != (undefined1 *)0x0) {
      local_60 = puVar5;
      operator_delete(puVar5);
    }
    if (*(long *)(lVar4 + 0x28) == local_48) {
      return param_1;
    }
  }
LAB_00509058:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00509060  FUN_00509060 =====

undefined2 * FUN_00509060(undefined8 *param_1)

{
  ulong uVar1;
  undefined2 *puVar2;
  void *__dest;
  ulong uVar3;
  void *__src;
  size_t __n;
  long lVar4;
  undefined2 *puVar5;
  
  puVar2 = (undefined2 *)param_1[1];
  if (puVar2 < (undefined2 *)param_1[2]) {
    if (puVar2 == (undefined2 *)0x0) {
                    /* try { // try from 0050915c to 00509183 has its CatchHandler @ 005091b8 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                 ,0x23,"__location != nullptr","null pointer given to construct_at");
    }
    puVar5 = puVar2 + 1;
    *puVar2 = 0;
    param_1[1] = puVar5;
LAB_00509110:
    if ((undefined2 *)*param_1 != puVar5) {
      return puVar5 + -1;
    }
                    /* try { // try from 00509134 to 0050915b has its CatchHandler @ 005091c0 */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,"!empty()"
               ,"back() called on an empty vector");
  }
  __src = (void *)*param_1;
  __n = (long)puVar2 - (long)__src;
  if (__n == 0xfffffffffffffffd || (long)(__n + 3) < 0 != SCARRY8(__n,3)) {
    FUN_004fee40(param_1);
  }
  else {
    lVar4 = (long)__n >> 1;
    uVar3 = (long)param_1[2] - (long)__src;
    uVar1 = uVar3;
    if (uVar3 <= lVar4 + 1U) {
      uVar1 = lVar4 + 1;
    }
    if (0x7ffffffffffffffd < uVar3) {
      uVar1 = 0x7fffffffffffffff;
    }
    if (uVar1 != 0) {
      if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      __dest = operator_new(uVar1 * 2);
      puVar2 = (undefined2 *)((long)__dest + lVar4 * 2);
      puVar5 = puVar2 + 1;
      *puVar2 = 0;
      memmove(__dest,__src,__n);
      *param_1 = __dest;
      param_1[1] = puVar5;
      param_1[2] = (void *)((long)__dest + uVar1 * 2);
      if (__src != (void *)0x0) {
        operator_delete(__src);
        puVar5 = (undefined2 *)param_1[1];
      }
      goto LAB_00509110;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h",
             0x23,"__location != nullptr","null pointer given to construct_at");
}


// ===== 005091c4  FUN_005091c4 =====

long * FUN_005091c4(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  ulong local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  local_50 = 0;
  FUN_005a35bc(param_1,&local_50);
  uVar11 = local_50;
  puVar12 = (undefined1 *)param_1[1];
  if ((ulong)((long)puVar12 - *param_1) < local_50) {
    uVar6 = FUN_0054f64c(0x10);
                    /* try { // try from 005093e8 to 005093f3 has its CatchHandler @ 00509434 */
    FUN_005064ec(uVar6,"Vector is longer than remaining data");
    if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar6,&PTR_PTR_thunk_FUN_00552768_00d1fbf0,PTR_FUN_00d51d28);
    }
    goto LAB_00509478;
  }
  local_68 = (undefined1 *)0x0;
  local_60 = (undefined1 *)0x0;
  local_58 = (undefined1 *)0x0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (local_50 == 0) {
    local_58 = (undefined1 *)0x0;
    local_60 = (undefined1 *)0x0;
    local_68 = (undefined1 *)0x0;
  }
  else {
    if ((long)local_50 < 0) {
      if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 0050942c to 00509433 has its CatchHandler @ 00509444 */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_80);
      }
      goto LAB_00509478;
    }
                    /* try { // try from 00509228 to 0050922f has its CatchHandler @ 00509444 */
    local_68 = (undefined1 *)operator_new(local_50);
    puVar7 = puVar12 + -uVar11;
    local_58 = local_68 + uVar11;
    puVar5 = local_68;
    if ((0x1f < uVar11) && ((undefined1 *)0x1f < local_68 + (uVar11 - (long)puVar12))) {
      uVar9 = uVar11 & 0xffffffffffffffe0;
      uVar10 = 0;
      local_60 = local_68 + uVar9;
      do {
        puVar1 = (undefined8 *)(puVar7 + uVar10);
        puVar2 = (undefined8 *)(local_68 + uVar10);
        uVar10 = uVar10 + 0x20;
        uVar6 = *puVar1;
        uVar14 = puVar1[3];
        uVar13 = puVar1[2];
        puVar2[1] = puVar1[1];
        *puVar2 = uVar6;
        puVar2[3] = uVar14;
        puVar2[2] = uVar13;
      } while (uVar9 != uVar10);
      puVar5 = local_60;
      puVar7 = puVar7 + uVar9;
      if (uVar11 == uVar9) goto LAB_005092b8;
    }
    do {
      puVar8 = puVar7 + 1;
      local_60 = puVar5 + 1;
      *puVar5 = *puVar7;
      puVar5 = local_60;
      puVar7 = puVar8;
    } while (puVar8 != puVar12);
  }
LAB_005092b8:
  param_2[1] = *param_2;
  if (local_60 != local_68) {
    do {
                    /* try { // try from 005092d0 to 005092ef has its CatchHandler @ 00509448 */
      FUN_00509480(param_2);
      lVar3 = param_2[1];
      if (*param_2 == lVar3) {
        if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 0050937c to 005093a3 has its CatchHandler @ 0050947c */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        goto LAB_00509478;
      }
      FUN_005a31cc(&local_68,&local_80);
      *(undefined2 *)(lVar3 + -2) = (undefined2)local_80;
    } while (local_60 != local_68);
    puVar12 = (undefined1 *)param_1[1];
    uVar11 = local_50;
  }
  if ((long)uVar11 < 0) {
    if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 005093b4 to 005093db has its CatchHandler @ 0050944c */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x644,
                 "__first <= __last","vector::erase(first, last) called with invalid range");
    }
  }
  else {
    puVar5 = local_60;
    if (uVar11 != 0) {
      puVar5 = puVar12 + -uVar11;
      memmove(puVar5,puVar5 + uVar11,(long)puVar12 - (long)(puVar5 + uVar11));
      param_1[1] = (long)puVar12 - uVar11;
      puVar5 = local_68;
    }
    if (puVar5 != (undefined1 *)0x0) {
      local_60 = puVar5;
      operator_delete(puVar5);
    }
    if (*(long *)(lVar4 + 0x28) == local_48) {
      return param_1;
    }
  }
LAB_00509478:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00509480  FUN_00509480 =====

undefined2 * FUN_00509480(undefined8 *param_1)

{
  ulong uVar1;
  undefined2 *puVar2;
  void *__dest;
  ulong uVar3;
  void *__src;
  size_t __n;
  long lVar4;
  undefined2 *puVar5;
  
  puVar2 = (undefined2 *)param_1[1];
  if (puVar2 < (undefined2 *)param_1[2]) {
    if (puVar2 == (undefined2 *)0x0) {
                    /* try { // try from 0050957c to 005095a3 has its CatchHandler @ 005095d8 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                 ,0x23,"__location != nullptr","null pointer given to construct_at");
    }
    puVar5 = puVar2 + 1;
    *puVar2 = 0;
    param_1[1] = puVar5;
LAB_00509530:
    if ((undefined2 *)*param_1 != puVar5) {
      return puVar5 + -1;
    }
                    /* try { // try from 00509554 to 0050957b has its CatchHandler @ 005095e0 */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,"!empty()"
               ,"back() called on an empty vector");
  }
  __src = (void *)*param_1;
  __n = (long)puVar2 - (long)__src;
  if (__n == 0xfffffffffffffffd || (long)(__n + 3) < 0 != SCARRY8(__n,3)) {
    FUN_004f1214(param_1);
  }
  else {
    lVar4 = (long)__n >> 1;
    uVar3 = (long)param_1[2] - (long)__src;
    uVar1 = uVar3;
    if (uVar3 <= lVar4 + 1U) {
      uVar1 = lVar4 + 1;
    }
    if (0x7ffffffffffffffd < uVar3) {
      uVar1 = 0x7fffffffffffffff;
    }
    if (uVar1 != 0) {
      if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      __dest = operator_new(uVar1 * 2);
      puVar2 = (undefined2 *)((long)__dest + lVar4 * 2);
      puVar5 = puVar2 + 1;
      *puVar2 = 0;
      memmove(__dest,__src,__n);
      *param_1 = __dest;
      param_1[1] = puVar5;
      param_1[2] = (void *)((long)__dest + uVar1 * 2);
      if (__src != (void *)0x0) {
        operator_delete(__src);
        puVar5 = (undefined2 *)param_1[1];
      }
      goto LAB_00509530;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h",
             0x23,"__location != nullptr","null pointer given to construct_at");
}


// ===== 005095e4  FUN_005095e4 =====

long * FUN_005095e4(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  void *__dest;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  ulong local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_50 = 0;
  FUN_005a35bc(param_1,&local_50);
  uVar4 = local_50;
  puVar5 = (undefined1 *)param_1[1];
  if ((ulong)((long)puVar5 - *param_1) < local_50) {
    uVar6 = FUN_0054f64c(0x10);
                    /* try { // try from 005097f4 to 005097ff has its CatchHandler @ 00509840 */
    FUN_005064ec(uVar6,"Vector is longer than remaining data");
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar6,&PTR_PTR_thunk_FUN_00552768_00d1fbf0,PTR_FUN_00d51d28);
    }
    goto LAB_00509884;
  }
  local_68 = (undefined1 *)0x0;
  local_60 = (undefined1 *)0x0;
  local_58 = (undefined1 *)0x0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (local_50 == 0) {
    local_58 = (undefined1 *)0x0;
    local_60 = (undefined1 *)0x0;
    local_68 = (undefined1 *)0x0;
  }
  else {
    if ((long)local_50 < 0) {
      if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 00509838 to 0050983f has its CatchHandler @ 00509850 */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_80);
      }
      goto LAB_00509884;
    }
                    /* try { // try from 00509648 to 0050964f has its CatchHandler @ 00509850 */
    local_68 = (undefined1 *)operator_new(local_50);
    puVar8 = puVar5 + -uVar4;
    local_58 = local_68 + uVar4;
    puVar7 = local_68;
    if ((0x1f < uVar4) && ((undefined1 *)0x1f < local_68 + (uVar4 - (long)puVar5))) {
      uVar10 = uVar4 & 0xffffffffffffffe0;
      uVar11 = 0;
      local_60 = local_68 + uVar10;
      do {
        puVar1 = (undefined8 *)(puVar8 + uVar11);
        puVar2 = (undefined8 *)(local_68 + uVar11);
        uVar11 = uVar11 + 0x20;
        uVar6 = *puVar1;
        uVar13 = puVar1[3];
        uVar12 = puVar1[2];
        puVar2[1] = puVar1[1];
        *puVar2 = uVar6;
        puVar2[3] = uVar13;
        puVar2[2] = uVar12;
      } while (uVar10 != uVar11);
      puVar7 = local_60;
      puVar8 = puVar8 + uVar10;
      if (uVar4 == uVar10) goto LAB_005096d4;
    }
    do {
      puVar9 = puVar8 + 1;
      local_60 = puVar7 + 1;
      *puVar7 = *puVar8;
      puVar7 = local_60;
      puVar8 = puVar9;
    } while (puVar9 != puVar5);
  }
LAB_005096d4:
  param_2[1] = *param_2;
  while (local_60 != local_68) {
                    /* try { // try from 005096f0 to 0050970f has its CatchHandler @ 00509854 */
    FUN_0050988c(param_2);
    if (*param_2 == param_2[1]) {
      if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 00509788 to 005097af has its CatchHandler @ 00509888 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                   "!empty()","back() called on an empty vector");
      }
      goto LAB_00509884;
    }
    FUN_005a31cc(&local_68,param_2[1] + -2);
  }
  if ((long)local_50 < 0) {
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 005097c0 to 005097e7 has its CatchHandler @ 00509858 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x644,
                 "__first <= __last","vector::erase(first, last) called with invalid range");
    }
  }
  else {
    puVar5 = local_60;
    if (local_50 != 0) {
      __dest = (void *)(param_1[1] - local_50);
      memmove(__dest,(void *)((long)__dest + local_50),param_1[1] - (long)((long)__dest + local_50))
      ;
      param_1[1] = (long)__dest;
      puVar5 = local_68;
    }
    if (puVar5 != (undefined1 *)0x0) {
      local_60 = puVar5;
      operator_delete(puVar5);
    }
    if (*(long *)(lVar3 + 0x28) == local_48) {
      return param_1;
    }
  }
LAB_00509884:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050988c  FUN_0050988c =====

undefined2 * FUN_0050988c(undefined8 *param_1)

{
  ulong uVar1;
  undefined2 *puVar2;
  void *__dest;
  ulong uVar3;
  void *__src;
  size_t __n;
  long lVar4;
  undefined2 *puVar5;
  
  puVar2 = (undefined2 *)param_1[1];
  if (puVar2 < (undefined2 *)param_1[2]) {
    if (puVar2 == (undefined2 *)0x0) {
                    /* try { // try from 00509988 to 005099af has its CatchHandler @ 005099e4 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                 ,0x23,"__location != nullptr","null pointer given to construct_at");
    }
    puVar5 = puVar2 + 1;
    *puVar2 = 0;
    param_1[1] = puVar5;
LAB_0050993c:
    if ((undefined2 *)*param_1 != puVar5) {
      return puVar5 + -1;
    }
                    /* try { // try from 00509960 to 00509987 has its CatchHandler @ 005099ec */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,"!empty()"
               ,"back() called on an empty vector");
  }
  __src = (void *)*param_1;
  __n = (long)puVar2 - (long)__src;
  if (__n == 0xfffffffffffffffd || (long)(__n + 3) < 0 != SCARRY8(__n,3)) {
    FUN_004fee54(param_1);
  }
  else {
    lVar4 = (long)__n >> 1;
    uVar3 = (long)param_1[2] - (long)__src;
    uVar1 = uVar3;
    if (uVar3 <= lVar4 + 1U) {
      uVar1 = lVar4 + 1;
    }
    if (0x7ffffffffffffffd < uVar3) {
      uVar1 = 0x7fffffffffffffff;
    }
    if (uVar1 != 0) {
      if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      __dest = operator_new(uVar1 * 2);
      puVar2 = (undefined2 *)((long)__dest + lVar4 * 2);
      puVar5 = puVar2 + 1;
      *puVar2 = 0;
      memmove(__dest,__src,__n);
      *param_1 = __dest;
      param_1[1] = puVar5;
      param_1[2] = (void *)((long)__dest + uVar1 * 2);
      if (__src != (void *)0x0) {
        operator_delete(__src);
        puVar5 = (undefined2 *)param_1[1];
      }
      goto LAB_0050993c;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h",
             0x23,"__location != nullptr","null pointer given to construct_at");
}


// ===== 005099f0  FUN_005099f0 =====

long * FUN_005099f0(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  ulong local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  local_50 = 0;
  FUN_005a35bc(param_1,&local_50);
  uVar11 = local_50;
  puVar12 = (undefined1 *)param_1[1];
  if ((ulong)((long)puVar12 - *param_1) < local_50) {
    uVar6 = FUN_0054f64c(0x10);
                    /* try { // try from 00509c14 to 00509c1f has its CatchHandler @ 00509c60 */
    FUN_005064ec(uVar6,"Vector is longer than remaining data");
    if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar6,&PTR_PTR_thunk_FUN_00552768_00d1fbf0,PTR_FUN_00d51d28);
    }
    goto LAB_00509ca4;
  }
  local_68 = (undefined1 *)0x0;
  local_60 = (undefined1 *)0x0;
  local_58 = (undefined1 *)0x0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (local_50 == 0) {
    local_58 = (undefined1 *)0x0;
    local_60 = (undefined1 *)0x0;
    local_68 = (undefined1 *)0x0;
  }
  else {
    if ((long)local_50 < 0) {
      if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 00509c58 to 00509c5f has its CatchHandler @ 00509c70 */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_80);
      }
      goto LAB_00509ca4;
    }
                    /* try { // try from 00509a54 to 00509a5b has its CatchHandler @ 00509c70 */
    local_68 = (undefined1 *)operator_new(local_50);
    puVar7 = puVar12 + -uVar11;
    local_58 = local_68 + uVar11;
    puVar5 = local_68;
    if ((0x1f < uVar11) && ((undefined1 *)0x1f < local_68 + (uVar11 - (long)puVar12))) {
      uVar9 = uVar11 & 0xffffffffffffffe0;
      uVar10 = 0;
      local_60 = local_68 + uVar9;
      do {
        puVar1 = (undefined8 *)(puVar7 + uVar10);
        puVar2 = (undefined8 *)(local_68 + uVar10);
        uVar10 = uVar10 + 0x20;
        uVar6 = *puVar1;
        uVar14 = puVar1[3];
        uVar13 = puVar1[2];
        puVar2[1] = puVar1[1];
        *puVar2 = uVar6;
        puVar2[3] = uVar14;
        puVar2[2] = uVar13;
      } while (uVar9 != uVar10);
      puVar5 = local_60;
      puVar7 = puVar7 + uVar9;
      if (uVar11 == uVar9) goto LAB_00509ae4;
    }
    do {
      puVar8 = puVar7 + 1;
      local_60 = puVar5 + 1;
      *puVar5 = *puVar7;
      puVar5 = local_60;
      puVar7 = puVar8;
    } while (puVar8 != puVar12);
  }
LAB_00509ae4:
  param_2[1] = *param_2;
  if (local_60 != local_68) {
    do {
                    /* try { // try from 00509afc to 00509b1b has its CatchHandler @ 00509c74 */
      FUN_00509cac(param_2);
      lVar3 = param_2[1];
      if (*param_2 == lVar3) {
        if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 00509ba8 to 00509bcf has its CatchHandler @ 00509ca8 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        goto LAB_00509ca4;
      }
      FUN_005a31cc(&local_68,&local_80);
      *(undefined2 *)(lVar3 + -2) = (undefined2)local_80;
    } while (local_60 != local_68);
    puVar12 = (undefined1 *)param_1[1];
    uVar11 = local_50;
  }
  if ((long)uVar11 < 0) {
    if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 00509be0 to 00509c07 has its CatchHandler @ 00509c78 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x644,
                 "__first <= __last","vector::erase(first, last) called with invalid range");
    }
  }
  else {
    puVar5 = local_60;
    if (uVar11 != 0) {
      puVar5 = puVar12 + -uVar11;
      memmove(puVar5,puVar5 + uVar11,(long)puVar12 - (long)(puVar5 + uVar11));
      param_1[1] = (long)puVar12 - uVar11;
      puVar5 = local_68;
    }
    if (puVar5 != (undefined1 *)0x0) {
      local_60 = puVar5;
      operator_delete(puVar5);
    }
    if (*(long *)(lVar4 + 0x28) == local_48) {
      return param_1;
    }
  }
LAB_00509ca4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00509cac  FUN_00509cac =====

undefined2 * FUN_00509cac(undefined8 *param_1)

{
  ulong uVar1;
  undefined2 *puVar2;
  void *__dest;
  ulong uVar3;
  void *__src;
  size_t __n;
  long lVar4;
  undefined2 *puVar5;
  
  puVar2 = (undefined2 *)param_1[1];
  if (puVar2 < (undefined2 *)param_1[2]) {
    if (puVar2 == (undefined2 *)0x0) {
                    /* try { // try from 00509da8 to 00509dcf has its CatchHandler @ 00509e04 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                 ,0x23,"__location != nullptr","null pointer given to construct_at");
    }
    puVar5 = puVar2 + 1;
    *puVar2 = 0;
    param_1[1] = puVar5;
LAB_00509d5c:
    if ((undefined2 *)*param_1 != puVar5) {
      return puVar5 + -1;
    }
                    /* try { // try from 00509d80 to 00509da7 has its CatchHandler @ 00509e0c */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,"!empty()"
               ,"back() called on an empty vector");
  }
  __src = (void *)*param_1;
  __n = (long)puVar2 - (long)__src;
  if (__n == 0xfffffffffffffffd || (long)(__n + 3) < 0 != SCARRY8(__n,3)) {
    FUN_004f1364(param_1);
  }
  else {
    lVar4 = (long)__n >> 1;
    uVar3 = (long)param_1[2] - (long)__src;
    uVar1 = uVar3;
    if (uVar3 <= lVar4 + 1U) {
      uVar1 = lVar4 + 1;
    }
    if (0x7ffffffffffffffd < uVar3) {
      uVar1 = 0x7fffffffffffffff;
    }
    if (uVar1 != 0) {
      if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      __dest = operator_new(uVar1 * 2);
      puVar2 = (undefined2 *)((long)__dest + lVar4 * 2);
      puVar5 = puVar2 + 1;
      *puVar2 = 0;
      memmove(__dest,__src,__n);
      *param_1 = __dest;
      param_1[1] = puVar5;
      param_1[2] = (void *)((long)__dest + uVar1 * 2);
      if (__src != (void *)0x0) {
        operator_delete(__src);
        puVar5 = (undefined2 *)param_1[1];
      }
      goto LAB_00509d5c;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h",
             0x23,"__location != nullptr","null pointer given to construct_at");
}


// ===== 00509e10  FUN_00509e10 =====

undefined8 FUN_00509e10(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  char local_44 [4];
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_005a3158(param_1,local_44);
  if (local_44[0] == '\x01') {
    if ((ulong)*(byte *)(param_2 + 3) != 0xff) {
                    /* try { // try from 00509e64 to 00509e6f has its CatchHandler @ 00509ed4 */
      (*(code *)(&PTR_FUN_00d1f8e0)[*(byte *)(param_2 + 3)])(auStack_40,param_2);
    }
    *param_2 = 0;
    *(undefined1 *)(param_2 + 3) = 0;
    param_2[1] = 0;
    FUN_005a3318(param_1,param_2);
    FUN_005a3318(param_1,param_2 + 1);
  }
  else {
    FUN_00509ed8(param_1,local_44[0],param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00509ed8  FUN_00509ed8 =====

void FUN_00509ed8(undefined8 param_1,char param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 == '\x03') {
    if ((ulong)*(byte *)(param_3 + 3) != 0xff) {
                    /* try { // try from 00509f5c to 00509f67 has its CatchHandler @ 0050a010 */
      (*(code *)(&PTR_FUN_00d1f8e0)[*(byte *)(param_3 + 3)])(auStack_40,param_3);
    }
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    *(undefined1 *)(param_3 + 3) = 2;
    FUN_00506244(param_1,param_3);
  }
  else {
    if (param_2 != '\x02') {
      uVar2 = FUN_0054f64c(0x10);
                    /* try { // try from 00509fb4 to 00509fbf has its CatchHandler @ 00509fe8 */
      FUN_005064ec(uVar2,"Invalid variant type label");
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_0054f748(uVar2,&PTR_PTR_thunk_FUN_00552768_00d1fbf0,PTR_FUN_00d51d28);
      }
      goto LAB_0050a00c;
    }
    if ((ulong)*(byte *)(param_3 + 3) != 0xff) {
                    /* try { // try from 00509f28 to 00509f33 has its CatchHandler @ 0050a014 */
      (*(code *)(&PTR_FUN_00d1f8e0)[*(byte *)(param_3 + 3)])(auStack_48,param_3);
    }
    *(undefined1 *)(param_3 + 3) = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0050a00c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050a018  FUN_0050a018 =====

void FUN_0050a018(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined8 local_50;
  long local_48;
  undefined1 *puVar13;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = (undefined1 *)0x0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
                    /* try { // try from 0050a050 to 0050a06b has its CatchHandler @ 0050a1b0 */
  FUN_004f277c(&local_60);
  FUN_004f277c(&local_60,param_4);
  lVar4 = FUN_00562410(param_2);
  puVar3 = local_58;
  puVar12 = local_60;
  local_78 = (undefined1 *)0x0;
  local_70 = (undefined1 *)0x0;
  uVar11 = *(undefined8 *)(lVar4 + 0x30);
  local_68 = (undefined1 *)0x0;
  uVar6 = (long)local_58 - (long)local_60;
  if (uVar6 != 0) {
    if ((long)uVar6 < 0) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 0050a194 to 0050a19b has its CatchHandler @ 0050a1ac */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_78);
      }
      goto LAB_0050a1dc;
    }
                    /* try { // try from 0050a088 to 0050a08f has its CatchHandler @ 0050a1ac */
    local_78 = (undefined1 *)operator_new(uVar6);
    local_68 = local_78 + uVar6;
    puVar5 = local_78;
    puVar13 = puVar12;
    if ((0x1f < uVar6) && (0x1f < (ulong)((long)local_78 - (long)puVar12))) {
      uVar7 = uVar6 & 0xffffffffffffffe0;
      puVar8 = (undefined8 *)(local_78 + 0x10);
      puVar13 = puVar12 + uVar7;
      puVar5 = local_78 + uVar7;
      puVar9 = (undefined8 *)(puVar12 + 0x10);
      uVar10 = uVar7;
      do {
        puVar2 = puVar9 + -1;
        uVar14 = puVar9[-2];
        uVar16 = puVar9[1];
        uVar15 = *puVar9;
        puVar9 = puVar9 + 4;
        uVar10 = uVar10 - 0x20;
        puVar8[-1] = *puVar2;
        puVar8[-2] = uVar14;
        puVar8[1] = uVar16;
        *puVar8 = uVar15;
        puVar8 = puVar8 + 4;
      } while (uVar10 != 0);
      local_70 = puVar5;
      if (uVar6 == uVar7) goto LAB_0050a108;
    }
    do {
      puVar12 = puVar13 + 1;
      local_70 = puVar5 + 1;
      *puVar5 = *puVar13;
      puVar5 = local_70;
      puVar13 = puVar12;
    } while (puVar12 != puVar3);
  }
LAB_0050a108:
                    /* try { // try from 0050a108 to 0050a117 has its CatchHandler @ 0050a19c */
  FUN_005a9174(param_1,uVar11,&local_78);
  if (0 < (long)local_70 - (long)local_78) {
    uVar6 = ((long)local_70 - (long)local_78) + 1;
    puVar12 = local_78;
    do {
      uVar6 = uVar6 - 1;
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    } while (1 < uVar6);
  }
  if (local_78 != (undefined1 *)0x0) {
    local_70 = local_78;
    operator_delete(local_78);
  }
  if (local_60 != (undefined1 *)0x0) {
    local_58 = local_60;
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_0050a1dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050a1e0  FUN_0050a1e0 =====

void FUN_0050a1e0(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined8 local_50;
  long local_48;
  undefined1 *puVar8;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_60 = (undefined1 *)0x0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
                    /* try { // try from 0050a214 to 0050a30b has its CatchHandler @ 0050a30c */
  FUN_0056f0bc(&local_60,param_2);
  puVar5 = local_58;
  puVar4 = local_60;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = (long)local_58 - (long)local_60;
  if (uVar1 != 0) {
    if ((long)uVar1 < 0) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(param_1);
      }
      goto LAB_0050a33c;
    }
    puVar6 = (undefined1 *)operator_new(uVar1);
    *param_1 = puVar6;
    param_1[1] = puVar6;
    param_1[2] = puVar6 + uVar1;
    puVar8 = puVar4;
    if ((uVar1 < 0x20) || ((ulong)((long)puVar6 - (long)puVar4) < 0x20)) {
LAB_0050a2a8:
      do {
        puVar7 = puVar8 + 1;
        puVar9 = puVar6 + 1;
        *puVar6 = *puVar8;
        puVar8 = puVar7;
        puVar6 = puVar9;
      } while (puVar7 != puVar5);
    }
    else {
      uVar10 = uVar1 & 0xffffffffffffffe0;
      puVar11 = (undefined8 *)(puVar6 + 0x10);
      puVar9 = puVar6 + uVar10;
      puVar12 = (undefined8 *)(puVar4 + 0x10);
      uVar13 = uVar10;
      do {
        puVar3 = puVar12 + -1;
        uVar14 = puVar12[-2];
        uVar16 = puVar12[1];
        uVar15 = *puVar12;
        puVar12 = puVar12 + 4;
        uVar13 = uVar13 - 0x20;
        puVar11[-1] = *puVar3;
        puVar11[-2] = uVar14;
        puVar11[1] = uVar16;
        *puVar11 = uVar15;
        puVar11 = puVar11 + 4;
      } while (uVar13 != 0);
      puVar8 = puVar4 + uVar10;
      puVar6 = puVar9;
      if (uVar1 != uVar10) goto LAB_0050a2a8;
    }
    param_1[1] = puVar9;
  }
  if (puVar4 != (undefined1 *)0x0) {
    local_58 = puVar4;
    operator_delete(puVar4);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_0050a33c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050a340  FUN_0050a340 =====

void FUN_0050a340(undefined2 *param_1,undefined2 *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  uVar5 = *(undefined8 *)(param_2 + 8);
  uVar4 = *(undefined8 *)(param_2 + 4);
  *param_1 = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar5;
  *(undefined8 *)(param_1 + 4) = uVar4;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  uVar5 = *(undefined8 *)(param_2 + 0x14);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x14) = uVar5;
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0xf4) = 0xff;
  if ((ulong)*(byte *)(param_2 + 0xf4) != 0xff) {
                    /* try { // try from 0050a3e4 to 0050a3eb has its CatchHandler @ 0050a4b8 */
    (*(code *)(&PTR_FUN_00d1f978)[*(byte *)(param_2 + 0xf4)])
              (auStack_40,param_1 + 0x28,param_2 + 0x28);
    *(undefined1 *)(param_1 + 0xf4) = *(undefined1 *)(param_2 + 0xf4);
  }
  uVar1 = *(undefined1 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0x104) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0;
  uVar5 = *(undefined8 *)(param_2 + 0x100);
  uVar4 = *(undefined8 *)(param_2 + 0xfc);
  *(undefined1 *)(param_1 + 0xf8) = uVar1;
  *(undefined8 *)(param_1 + 0x100) = uVar5;
  *(undefined8 *)(param_1 + 0xfc) = uVar4;
  *(undefined8 *)(param_1 + 0x104) = *(undefined8 *)(param_2 + 0x104);
  *(undefined8 *)(param_2 + 0x104) = 0;
  *(undefined8 *)(param_2 + 0x100) = 0;
  *(undefined8 *)(param_2 + 0xfc) = 0;
  *(undefined1 *)(param_1 + 0x108) = 0;
  *(undefined1 *)(param_1 + 0x114) = 0;
  if (*(char *)(param_2 + 0x114) != '\0') {
    *(undefined8 *)(param_1 + 0x10c) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    uVar4 = *(undefined8 *)(param_2 + 0x108);
    *(undefined8 *)(param_1 + 0x10c) = *(undefined8 *)(param_2 + 0x10c);
    *(undefined8 *)(param_1 + 0x108) = uVar4;
    *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
    *(undefined8 *)(param_2 + 0x110) = 0;
    *(undefined8 *)(param_2 + 0x10c) = 0;
    *(undefined8 *)(param_2 + 0x108) = 0;
    *(undefined1 *)(param_1 + 0x114) = 1;
  }
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x11c) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  uVar4 = *(undefined8 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x11c) = *(undefined8 *)(param_2 + 0x11c);
  *(undefined8 *)(param_1 + 0x118) = uVar4;
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_2 + 0x120) = 0;
  *(undefined8 *)(param_2 + 0x11c) = 0;
  *(undefined8 *)(param_2 + 0x118) = 0;
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050a4bc  FUN_0050a4bc =====

void FUN_0050a4bc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_005a2eb4(*(undefined8 *)*param_1,1);
  FUN_00570984(uVar1,param_2);
  return;
}


// ===== 0050a4ec  FUN_0050a4ec =====

void FUN_0050a4ec(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_005a2eb4(*(undefined8 *)*param_1,2);
  FUN_004f277c(uVar1,param_2);
  FUN_005a2fc8(uVar1,*(undefined8 *)(param_2 + 0x18));
  FUN_005a2e60(uVar1,*(undefined1 *)(param_2 + 0x20));
  FUN_004f277c(uVar1,param_2 + 0x28);
  FUN_004f277c(uVar1,param_2 + 0x40);
  FUN_004f277c(uVar1,param_2 + 0x58);
  return;
}


// ===== 0050a578  FUN_0050a578 =====

void FUN_0050a578(undefined8 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_005a2eb4(*(undefined8 *)*param_1,3);
  FUN_005a2eb4(uVar1,*param_2);
  FUN_0050ae98(uVar1,param_2 + 4);
  FUN_004f277c(uVar1,param_2 + 0x10);
  return;
}


// ===== 0050a5d0  thunk_FUN_0050a674 =====

void thunk_FUN_0050a674(undefined8 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_005a2eb4(*(undefined8 *)*param_1,4);
  FUN_005a2eb4(uVar1,*param_2);
  FUN_005a2eb4(uVar1,param_2[1]);
  FUN_004f277c(uVar1,param_2 + 4);
  FUN_005a2fc8(uVar1,*(undefined8 *)(param_2 + 0x10));
  FUN_004f277c(uVar1,param_2 + 0x14);
  FUN_004f277c(uVar1,param_2 + 0x20);
  FUN_0050a75c(uVar1,param_2 + 0x2c);
  FUN_0050a75c(uVar1,param_2 + 0x38);
  FUN_004f277c(uVar1,param_2 + 0x44);
  FUN_005a2f28(uVar1,*(undefined4 *)(param_2 + 0x50));
  FUN_004f277c(uVar1,param_2 + 0x54);
  return;
}


// ===== 0050a5d4  FUN_0050a5d4 =====

void FUN_0050a5d4(undefined8 *param_1,undefined2 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined2 *local_68;
  undefined2 *puStack_60;
  undefined2 *local_58;
  undefined2 *puStack_50;
  undefined2 *local_48;
  undefined2 *puStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_005a2eb4(*(undefined8 *)*param_1,5);
  puStack_60 = param_2 + 1;
  local_58 = param_2 + 4;
  puStack_50 = param_2 + 0x10;
  local_48 = param_2 + 0xac;
  puStack_40 = param_2 + 0xb8;
  local_68 = param_2;
  FUN_005a2eb4(uVar2,*param_2);
  FUN_005a2eb4(uVar2,param_2[1]);
  FUN_0050a858(uVar2,&local_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050a674  FUN_0050a674 =====

void FUN_0050a674(undefined8 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_005a2eb4(*(undefined8 *)*param_1,4);
  FUN_005a2eb4(uVar1,*param_2);
  FUN_005a2eb4(uVar1,param_2[1]);
  FUN_004f277c(uVar1,param_2 + 4);
  FUN_005a2fc8(uVar1,*(undefined8 *)(param_2 + 0x10));
  FUN_004f277c(uVar1,param_2 + 0x14);
  FUN_004f277c(uVar1,param_2 + 0x20);
  FUN_0050a75c(uVar1,param_2 + 0x2c);
  FUN_0050a75c(uVar1,param_2 + 0x38);
  FUN_004f277c(uVar1,param_2 + 0x44);
  FUN_005a2f28(uVar1,*(undefined4 *)(param_2 + 0x50));
  FUN_004f277c(uVar1,param_2 + 0x54);
  return;
}


// ===== 0050a75c  FUN_0050a75c =====

undefined8 FUN_0050a75c(undefined8 param_1,long *param_2)

{
  undefined2 *puVar1;
  long lVar2;
  undefined2 *puVar3;
  long local_58;
  void *local_50;
  void *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined2 *)*param_2;
  puVar1 = (undefined2 *)param_2[1];
  local_50 = (void *)0x0;
  local_48 = (void *)0x0;
  local_40 = 0;
  if (puVar3 == puVar1) {
    local_58 = 0;
  }
  else {
    do {
                    /* try { // try from 0050a798 to 0050a7af has its CatchHandler @ 0050a828 */
      FUN_005a2eb4(&local_50,*puVar3);
      FUN_004f277c(&local_50,puVar3 + 4);
      puVar3 = puVar3 + 0x10;
    } while (puVar3 != puVar1);
    local_58 = (long)local_48 - (long)local_50;
  }
                    /* try { // try from 0050a7d0 to 0050a7db has its CatchHandler @ 0050a824 */
  FUN_005a3440(param_1,&local_58);
                    /* try { // try from 0050a7dc to 0050a7e7 has its CatchHandler @ 0050a820 */
  FUN_005a2d20(param_1,&local_50);
  if (local_50 != (void *)0x0) {
    local_48 = local_50;
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050a858  FUN_0050a858 =====

void FUN_0050a858(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long local_60;
  undefined8 local_58;
  undefined8 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_004f277c(param_1,*(undefined8 *)(param_2 + 0x10));
  lVar2 = *(long *)(param_2 + 0x18);
  lStack_78 = lVar2 + 0x70;
  local_70 = lVar2 + 0xe8;
  lStack_68 = lVar2 + 0x108;
  local_60 = lVar2 + 0x120;
  local_90 = lVar2;
  lStack_88 = lVar2 + 0x18;
  local_80 = lVar2 + 0x30;
  FUN_004f277c(param_1,lVar2);
  FUN_004f277c(param_1,lVar2 + 0x18);
  local_58 = param_1;
  if ((ulong)*(byte *)(lVar2 + 0x68) == 0xff) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_004f2868();
    }
  }
  else {
    local_50 = &local_58;
    (*(code *)(&PTR_FUN_00d1fb38)[*(byte *)(lVar2 + 0x68)])(&local_50,lVar2 + 0x30);
    FUN_0050a964(param_1,&local_90);
    FUN_0050a75c(param_1,*(undefined8 *)(param_2 + 0x20));
    FUN_004f277c(param_1,*(undefined8 *)(param_2 + 0x28));
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050a964  FUN_0050a964 =====

void FUN_0050a964(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_68;
  undefined8 *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(param_2 + 0x18);
  FUN_0050aa68();
  FUN_0050ab54(param_1,lVar2 + 0x18);
  FUN_0050ac40(param_1,lVar2 + 0x30);
  FUN_0050ac40(param_1,lVar2 + 0x48);
  FUN_0050ad2c(param_1,lVar2 + 0x60);
  uVar3 = (ulong)*(byte *)(*(long *)(param_2 + 0x20) + 0x18);
  local_68 = param_1;
  if (uVar3 == 0xff) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_004f2868();
    }
  }
  else {
    local_60 = &local_68;
    (*(code *)(&PTR_FUN_00d1fb58)[uVar3])(&local_60);
    FUN_0050a75c(param_1,*(undefined8 *)(param_2 + 0x28));
    FUN_004f277c(param_1,*(undefined8 *)(param_2 + 0x30));
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050aa68  FUN_0050aa68 =====

undefined8 FUN_0050aa68(undefined8 param_1,long *param_2)

{
  undefined2 *puVar1;
  long lVar2;
  undefined2 *puVar3;
  long local_58;
  void *local_50;
  void *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined2 *)*param_2;
  puVar1 = (undefined2 *)param_2[1];
  local_50 = (void *)0x0;
  local_48 = (void *)0x0;
  local_40 = 0;
  if (puVar3 == puVar1) {
    local_58 = 0;
  }
  else {
    do {
                    /* try { // try from 0050aaa4 to 0050aaab has its CatchHandler @ 0050ab24 */
      FUN_005a2eb4(&local_50,*puVar3);
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar1);
    local_58 = (long)local_48 - (long)local_50;
  }
                    /* try { // try from 0050aacc to 0050aad7 has its CatchHandler @ 0050ab20 */
  FUN_005a3440(param_1,&local_58);
                    /* try { // try from 0050aad8 to 0050aae3 has its CatchHandler @ 0050ab1c */
  FUN_005a2d20(param_1,&local_50);
  if (local_50 != (void *)0x0) {
    local_48 = local_50;
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050ab54  FUN_0050ab54 =====

undefined8 FUN_0050ab54(undefined8 param_1,long *param_2)

{
  undefined2 *puVar1;
  long lVar2;
  undefined2 *puVar3;
  long local_58;
  void *local_50;
  void *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined2 *)*param_2;
  puVar1 = (undefined2 *)param_2[1];
  local_50 = (void *)0x0;
  local_48 = (void *)0x0;
  local_40 = 0;
  if (puVar3 == puVar1) {
    local_58 = 0;
  }
  else {
    do {
                    /* try { // try from 0050ab90 to 0050ab97 has its CatchHandler @ 0050ac10 */
      FUN_005a2eb4(&local_50,*puVar3);
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar1);
    local_58 = (long)local_48 - (long)local_50;
  }
                    /* try { // try from 0050abb8 to 0050abc3 has its CatchHandler @ 0050ac0c */
  FUN_005a3440(param_1,&local_58);
                    /* try { // try from 0050abc4 to 0050abcf has its CatchHandler @ 0050ac08 */
  FUN_005a2d20(param_1,&local_50);
  if (local_50 != (void *)0x0) {
    local_48 = local_50;
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050ac40  FUN_0050ac40 =====

undefined8 FUN_0050ac40(undefined8 param_1,long *param_2)

{
  undefined2 *puVar1;
  long lVar2;
  undefined2 *puVar3;
  long local_58;
  void *local_50;
  void *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined2 *)*param_2;
  puVar1 = (undefined2 *)param_2[1];
  local_50 = (void *)0x0;
  local_48 = (void *)0x0;
  local_40 = 0;
  if (puVar3 == puVar1) {
    local_58 = 0;
  }
  else {
    do {
                    /* try { // try from 0050ac7c to 0050ac83 has its CatchHandler @ 0050acfc */
      FUN_005a2eb4(&local_50,*puVar3);
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar1);
    local_58 = (long)local_48 - (long)local_50;
  }
                    /* try { // try from 0050aca4 to 0050acaf has its CatchHandler @ 0050acf8 */
  FUN_005a3440(param_1,&local_58);
                    /* try { // try from 0050acb0 to 0050acbb has its CatchHandler @ 0050acf4 */
  FUN_005a2d20(param_1,&local_50);
  if (local_50 != (void *)0x0) {
    local_48 = local_50;
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050ad2c  FUN_0050ad2c =====

undefined8 FUN_0050ad2c(undefined8 param_1,long *param_2)

{
  undefined2 *puVar1;
  long lVar2;
  undefined2 *puVar3;
  long local_58;
  void *local_50;
  void *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined2 *)*param_2;
  puVar1 = (undefined2 *)param_2[1];
  local_50 = (void *)0x0;
  local_48 = (void *)0x0;
  local_40 = 0;
  if (puVar3 == puVar1) {
    local_58 = 0;
  }
  else {
    do {
                    /* try { // try from 0050ad68 to 0050ad6f has its CatchHandler @ 0050ade8 */
      FUN_005a2eb4(&local_50,*puVar3);
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar1);
    local_58 = (long)local_48 - (long)local_50;
  }
                    /* try { // try from 0050ad90 to 0050ad9b has its CatchHandler @ 0050ade4 */
  FUN_005a3440(param_1,&local_58);
                    /* try { // try from 0050ad9c to 0050ada7 has its CatchHandler @ 0050ade0 */
  FUN_005a2d20(param_1,&local_50);
  if (local_50 != (void *)0x0) {
    local_48 = local_50;
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050ae18  FUN_0050ae18 =====

void FUN_0050ae18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_005a2e60(*(undefined8 *)*param_1,1);
  FUN_005a2fc8(uVar1,*param_2);
  FUN_005a2fc8(uVar1,param_2[1]);
  return;
}


// ===== 0050ae58  FUN_0050ae58 =====

void FUN_0050ae58(undefined8 *param_1)

{
  FUN_005a2e60(*(undefined8 *)*param_1,2);
  return;
}


// ===== 0050ae68  FUN_0050ae68 =====

void FUN_0050ae68(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_005a2e60(*(undefined8 *)*param_1,3);
  FUN_004f277c(uVar1,param_2);
  return;
}


// ===== 0050ae98  FUN_0050ae98 =====

undefined8 FUN_0050ae98(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_58;
  void *local_50;
  void *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = *param_2;
  lVar1 = param_2[1];
  local_50 = (void *)0x0;
  local_48 = (void *)0x0;
  local_40 = 0;
  if (lVar3 == lVar1) {
    local_58 = 0;
  }
  else {
    do {
                    /* try { // try from 0050aed0 to 0050aefb has its CatchHandler @ 0050af74 */
      FUN_004f277c(&local_50,lVar3);
      FUN_004f277c(&local_50,lVar3 + 0x18);
      FUN_004f277c(&local_50,lVar3 + 0x30);
      lVar3 = lVar3 + 0x48;
    } while (lVar3 != lVar1);
    local_58 = (long)local_48 - (long)local_50;
  }
                    /* try { // try from 0050af1c to 0050af27 has its CatchHandler @ 0050af70 */
  FUN_005a3440(param_1,&local_58);
                    /* try { // try from 0050af28 to 0050af33 has its CatchHandler @ 0050af6c */
  FUN_005a2d20(param_1,&local_50);
  if (local_50 != (void *)0x0) {
    local_48 = local_50;
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050afa4  FUN_0050afa4 =====

void FUN_0050afa4(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar3 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  uVar11 = *(undefined8 *)(param_2 + 8);
  uVar10 = *(undefined8 *)(param_2 + 4);
  *param_1 = uVar3;
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar11;
  *(undefined8 *)(param_1 + 4) = uVar10;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x14) = uVar5;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  plVar8 = (long *)(param_2 + 0x28);
  lVar6 = *plVar8;
  plVar9 = (long *)(param_1 + 0x28);
  *plVar9 = lVar6;
  lVar7 = *(long *)(param_2 + 0x2c);
  *(long *)(param_1 + 0x2c) = lVar7;
  if (lVar7 == 0) {
    *(long **)(param_1 + 0x24) = plVar9;
  }
  else {
    *(long **)(lVar6 + 0x10) = plVar9;
    *(long **)(param_2 + 0x24) = plVar8;
    *plVar8 = 0;
    *(undefined8 *)(param_2 + 0x2c) = 0;
  }
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  if (*(char *)(param_2 + 0xd0) != '\0') {
    *(undefined1 *)(param_1 + 0xcc) = 0xff;
    if ((ulong)*(byte *)(param_2 + 0xcc) != 0xff) {
                    /* try { // try from 0050b094 to 0050b09b has its CatchHandler @ 0050b448 */
      (*(code *)(&PTR_FUN_00d1fb70)[*(byte *)(param_2 + 0xcc)])
                (auStack_50,param_1 + 0x30,param_2 + 0x30);
      *(undefined1 *)(param_1 + 0xcc) = *(undefined1 *)(param_2 + 0xcc);
    }
    *(undefined1 *)(param_1 + 0xd0) = 1;
  }
  uVar5 = *(undefined8 *)(param_2 + 0xd4);
  *(undefined8 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd4) = uVar5;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  uVar5 = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xdc) = *(undefined8 *)(param_2 + 0xdc);
  *(undefined8 *)(param_1 + 0xd8) = uVar5;
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_2 + 0xdc) = 0;
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe4) = *(undefined8 *)(param_2 + 0xe4);
  lVar6 = *(long *)(param_2 + 0xe8);
  *(long *)(param_1 + 0xe8) = lVar6;
  lVar7 = *(long *)(param_2 + 0xec);
  *(long *)(param_1 + 0xec) = lVar7;
  if (lVar7 == 0) {
    *(undefined2 **)(param_1 + 0xe4) = param_1 + 0xe8;
  }
  else {
    *(undefined2 **)(lVar6 + 0x10) = param_1 + 0xe8;
    *(undefined2 **)(param_2 + 0xe4) = param_2 + 0xe8;
    *(undefined8 *)(param_2 + 0xe8) = 0;
    *(undefined8 *)(param_2 + 0xec) = 0;
  }
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  lVar6 = *(long *)(param_2 + 0xf4);
  *(long *)(param_1 + 0xf4) = lVar6;
  lVar7 = *(long *)(param_2 + 0xf8);
  *(long *)(param_1 + 0xf8) = lVar7;
  if (lVar7 == 0) {
    *(undefined2 **)(param_1 + 0xf0) = param_1 + 0xf4;
  }
  else {
    *(undefined2 **)(lVar6 + 0x10) = param_1 + 0xf4;
    *(undefined2 **)(param_2 + 0xf0) = param_2 + 0xf4;
    *(undefined8 *)(param_2 + 0xf4) = 0;
    *(undefined8 *)(param_2 + 0xf8) = 0;
  }
  uVar3 = param_2[0xfc];
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x104) = 0;
  uVar10 = *(undefined8 *)(param_2 + 0x104);
  uVar5 = *(undefined8 *)(param_2 + 0x100);
  param_1[0xfc] = uVar3;
  *(undefined8 *)(param_1 + 0x104) = uVar10;
  *(undefined8 *)(param_1 + 0x100) = uVar5;
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_2 + 0x108) = 0;
  *(undefined8 *)(param_2 + 0x104) = 0;
  *(undefined8 *)(param_2 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x114) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0;
  uVar5 = *(undefined8 *)(param_2 + 0x10c);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x10c) = uVar5;
  *(undefined8 *)(param_1 + 0x114) = *(undefined8 *)(param_2 + 0x114);
  *(undefined8 *)(param_2 + 0x114) = 0;
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined8 *)(param_2 + 0x10c) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x11c) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  uVar5 = *(undefined8 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x11c) = *(undefined8 *)(param_2 + 0x11c);
  *(undefined8 *)(param_1 + 0x118) = uVar5;
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_2 + 0x120) = 0;
  *(undefined8 *)(param_2 + 0x11c) = 0;
  *(undefined8 *)(param_2 + 0x118) = 0;
  FUN_0050b450(param_1 + 0x124,param_2 + 0x124);
  param_1[0x1c4] = param_2[0x1c4];
  uVar5 = *(undefined8 *)(param_2 + 0x1c8);
  *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_2 + 0x1cc);
  *(undefined8 *)(param_1 + 0x1c8) = uVar5;
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_2 + 0x1d0);
  lVar6 = *(long *)(param_2 + 0x1d4);
  *(long *)(param_1 + 0x1d4) = lVar6;
  lVar7 = *(long *)(param_2 + 0x1d8);
  *(long *)(param_1 + 0x1d8) = lVar7;
  if (lVar7 == 0) {
    *(undefined2 **)(param_1 + 0x1d0) = param_1 + 0x1d4;
  }
  else {
    *(undefined2 **)(lVar6 + 0x10) = param_1 + 0x1d4;
    *(undefined2 **)(param_2 + 0x1d0) = param_2 + 0x1d4;
    *(undefined8 *)(param_2 + 0x1d4) = 0;
    *(undefined8 *)(param_2 + 0x1d8) = 0;
  }
  uVar5 = *(undefined8 *)(param_2 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1dc) = *(undefined8 *)(param_2 + 0x1dc);
  *(undefined8 *)(param_1 + 0x1e0) = uVar5;
  lVar6 = *(long *)(param_2 + 0x1e4);
  *(long *)(param_1 + 0x1e4) = lVar6;
  lVar7 = *(long *)(param_2 + 0x1e8);
  *(long *)(param_1 + 0x1e8) = lVar7;
  if (lVar7 == 0) {
    *(undefined2 **)(param_1 + 0x1e0) = param_1 + 0x1e4;
  }
  else {
    *(undefined2 **)(lVar6 + 0x10) = param_1 + 0x1e4;
    *(undefined2 **)(param_2 + 0x1e0) = param_2 + 0x1e4;
    *(undefined8 *)(param_2 + 0x1e4) = 0;
    *(undefined8 *)(param_2 + 0x1e8) = 0;
  }
  uVar2 = *(undefined4 *)(param_2 + 0x1ec);
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = uVar2;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 500) = 0;
  uVar5 = *(undefined8 *)(param_2 + 0x1f0);
  *(undefined8 *)(param_1 + 500) = *(undefined8 *)(param_2 + 500);
  *(undefined8 *)(param_1 + 0x1f0) = uVar5;
  *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_2 + 0x1f8);
  *(undefined8 *)(param_2 + 0x1f8) = 0;
  *(undefined8 *)(param_2 + 500) = 0;
  *(undefined8 *)(param_2 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x204) = 0;
  *(undefined8 *)(param_1 + 0x1fc) = 0;
  uVar5 = *(undefined8 *)(param_2 + 0x1fc);
  *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_2 + 0x200);
  *(undefined8 *)(param_1 + 0x1fc) = uVar5;
  *(undefined8 *)(param_1 + 0x204) = *(undefined8 *)(param_2 + 0x204);
  *(undefined8 *)(param_2 + 0x200) = 0;
  *(undefined8 *)(param_2 + 0x204) = 0;
  *(undefined8 *)(param_2 + 0x1fc) = 0;
  *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_2 + 0x208);
  lVar6 = *(long *)(param_2 + 0x20c);
  *(long *)(param_1 + 0x20c) = lVar6;
  lVar7 = *(long *)(param_2 + 0x210);
  *(long *)(param_1 + 0x210) = lVar7;
  if (lVar7 == 0) {
    *(undefined2 **)(param_1 + 0x208) = param_1 + 0x20c;
  }
  else {
    *(undefined2 **)(lVar6 + 0x10) = param_1 + 0x20c;
    *(undefined2 **)(param_2 + 0x208) = param_2 + 0x20c;
    *(undefined8 *)(param_2 + 0x20c) = 0;
    *(undefined8 *)(param_2 + 0x210) = 0;
  }
  *(undefined8 *)(param_1 + 0x214) = *(undefined8 *)(param_2 + 0x214);
  lVar6 = *(long *)(param_2 + 0x218);
  *(long *)(param_1 + 0x218) = lVar6;
  lVar7 = *(long *)(param_2 + 0x21c);
  *(long *)(param_1 + 0x21c) = lVar7;
  if (lVar7 == 0) {
    *(undefined2 **)(param_1 + 0x214) = param_1 + 0x218;
  }
  else {
    *(undefined2 **)(lVar6 + 0x10) = param_1 + 0x218;
    *(undefined2 **)(param_2 + 0x214) = param_2 + 0x218;
    *(undefined8 *)(param_2 + 0x218) = 0;
    *(undefined8 *)(param_2 + 0x21c) = 0;
  }
  puVar1 = param_1 + 0x220;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined2 **)(param_1 + 0x220) = puVar1;
  *(undefined2 **)(param_1 + 0x224) = puVar1;
  if (param_1 == param_2) {
    if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 0050b41c to 0050b443 has its CatchHandler @ 0050b44c */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/list",0x756,
                 "this != _VSTD::addressof(__c)",
                 "list::splice(iterator, list) called with this == &list");
    }
  }
  else {
    if (*(long *)(param_2 + 0x228) != 0) {
      lVar6 = *(long *)(param_2 + 0x220);
      *(long *)(param_1 + 0x228) = *(long *)(param_2 + 0x228);
      plVar8 = *(long **)(param_2 + 0x224);
      *(undefined8 *)(param_2 + 0x228) = 0;
      lVar7 = *plVar8;
      *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(lVar6 + 8);
      **(long **)(lVar6 + 8) = lVar7;
      lVar7 = *(long *)(param_1 + 0x220);
      *(long **)(lVar7 + 8) = plVar8;
      *plVar8 = lVar7;
      *(long *)(param_1 + 0x220) = lVar6;
      *(undefined2 **)(lVar6 + 8) = puVar1;
    }
    *(undefined1 *)(param_1 + 0x22c) = 0;
    *(undefined1 *)(param_1 + 0x2e0) = 0;
    if (*(char *)(param_2 + 0x2e0) != '\0') {
      *(undefined8 *)(param_1 + 0x230) = 0;
      *(undefined8 *)(param_1 + 0x234) = 0;
      *(undefined8 *)(param_1 + 0x22c) = 0;
      uVar5 = *(undefined8 *)(param_2 + 0x22c);
      *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_2 + 0x230);
      *(undefined8 *)(param_1 + 0x22c) = uVar5;
      *(undefined8 *)(param_1 + 0x234) = *(undefined8 *)(param_2 + 0x234);
      *(undefined8 *)(param_2 + 0x230) = 0;
      *(undefined8 *)(param_2 + 0x234) = 0;
      *(undefined8 *)(param_2 + 0x22c) = 0;
      *(undefined8 *)(param_1 + 0x238) = 0;
      *(undefined8 *)(param_1 + 0x23c) = 0;
      *(undefined8 *)(param_1 + 0x240) = 0;
      uVar5 = *(undefined8 *)(param_2 + 0x238);
      *(undefined8 *)(param_1 + 0x23c) = *(undefined8 *)(param_2 + 0x23c);
      *(undefined8 *)(param_1 + 0x238) = uVar5;
      *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_2 + 0x240);
      *(undefined8 *)(param_2 + 0x23c) = 0;
      *(undefined8 *)(param_2 + 0x238) = 0;
      *(undefined8 *)(param_2 + 0x240) = 0;
      FUN_004fd6e4(param_1 + 0x244,param_2 + 0x244);
      *(undefined1 *)(param_1 + 0x2e0) = 1;
    }
    if (*(long *)(lVar4 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050b450  FUN_0050b450 =====

void FUN_0050b450(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  uVar3 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 4);
  *param_1 = uVar1;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(undefined8 *)(param_1 + 4) = uVar2;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x1c) = uVar2;
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x24) = 0;
  *(undefined8 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x34) = uVar2;
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x3c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x44) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x4c);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x4c) = uVar2;
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_2 + 0x54);
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x54) = 0;
  *(undefined8 *)(param_2 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_2 + 0x5c);
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x5c) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  uVar2 = *(undefined8 *)(param_2 + 100);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 100) = uVar2;
  *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_2 + 0x6c);
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x6c) = 0;
  *(undefined8 *)(param_2 + 100) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_2 + 0x74);
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_2 + 0x74) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x7c);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x7c) = uVar2;
  *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)(param_2 + 0x84);
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x84) = 0;
  *(undefined8 *)(param_2 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)(param_2 + 0x8c);
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_2 + 0x8c) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x94);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x94) = uVar2;
  *(undefined8 *)(param_1 + 0x9c) = *(undefined8 *)(param_2 + 0x9c);
  *(undefined8 *)(param_2 + 0x94) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0x9c) = 0;
  return;
}


// ===== 0050b604  FUN_0050b604 =====

void FUN_0050b604(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004fd6e4(param_2,param_3);
  return;
}


// ===== 0050b610  FUN_0050b610 =====

void FUN_0050b610(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = uVar1;
  param_2[2] = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  uVar1 = param_3[3];
  param_2[4] = param_3[4];
  param_2[3] = uVar1;
  param_2[5] = param_3[5];
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[3] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  uVar1 = param_3[6];
  param_2[7] = param_3[7];
  param_2[6] = uVar1;
  param_2[8] = param_3[8];
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[8] = 0;
  return;
}


// ===== 0050b674  FUN_0050b674 =====

void FUN_0050b674(long *param_1,short *param_2)

{
  short *__s;
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  short local_50 [4];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  puVar5 = (undefined1 *)*param_1;
  puVar8 = (undefined1 *)param_1[1];
  local_68 = (undefined1 *)0x0;
  local_60 = (undefined1 *)0x0;
  local_58 = (undefined1 *)0x0;
  uVar2 = (long)puVar8 - (long)puVar5;
  if (uVar2 != 0) {
    if ((long)uVar2 < 0) {
      if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_68);
      }
      goto LAB_0050b87c;
    }
    local_68 = (undefined1 *)operator_new(uVar2);
    local_58 = local_68 + uVar2;
    local_60 = local_68;
    puVar6 = puVar5;
    if ((uVar2 < 0x20) || ((ulong)((long)local_68 - (long)puVar5) < 0x20)) {
LAB_0050b730:
      do {
        puVar9 = puVar6 + 1;
        puVar5 = local_60 + 1;
        *local_60 = *puVar6;
        local_60 = puVar5;
        puVar6 = puVar9;
      } while (puVar9 != puVar8);
    }
    else {
      uVar7 = uVar2 & 0xffffffffffffffe0;
      puVar10 = (undefined8 *)(local_68 + 0x10);
      puVar6 = puVar5 + uVar7;
      local_60 = local_68 + uVar7;
      puVar11 = (undefined8 *)(puVar5 + 0x10);
      uVar12 = uVar7;
      do {
        puVar4 = puVar11 + -1;
        uVar13 = puVar11[-2];
        uVar15 = puVar11[1];
        uVar14 = *puVar11;
        puVar11 = puVar11 + 4;
        uVar12 = uVar12 - 0x20;
        puVar10[-1] = *puVar4;
        puVar10[-2] = uVar13;
        puVar10[1] = uVar15;
        *puVar10 = uVar14;
        puVar10 = puVar10 + 4;
      } while (uVar12 != 0);
      if (uVar2 != uVar7) goto LAB_0050b730;
    }
    puVar8 = local_60 + -1;
    puVar5 = local_68;
    if (local_68 < puVar8 && local_68 != local_60) {
      do {
        puVar6 = puVar5 + 1;
        uVar1 = *puVar5;
        *puVar5 = *puVar8;
        puVar9 = puVar8 + -1;
        *puVar8 = uVar1;
        puVar8 = puVar9;
        puVar5 = puVar6;
      } while (puVar6 < puVar9);
    }
  }
                    /* try { // try from 0050b778 to 0050b797 has its CatchHandler @ 0050b84c */
  FUN_005a31cc(&local_68,local_50);
  *param_2 = local_50[0];
  FUN_005a31cc(&local_68,local_50);
  __s = param_2 + 4;
  if (local_50[0] == 1) {
    if ((ulong)*(byte *)(param_2 + 0x128) != 0xff) {
                    /* try { // try from 0050b7c0 to 0050b7cb has its CatchHandler @ 0050b848 */
      (*(code *)(&PTR_FUN_00d1fac0)[*(byte *)(param_2 + 0x128)])(local_50,__s);
    }
    memset(__s,0,0x249);
                    /* try { // try from 0050b7dc to 0050b7f7 has its CatchHandler @ 0050b84c */
    FUN_00570c20(&local_68,__s);
  }
  else {
    FUN_00507a60(&local_68,local_50[0],__s);
  }
  if (local_68 != (undefined1 *)0x0) {
    local_60 = local_68;
    operator_delete(local_68);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_0050b87c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050b880  FUN_0050b880 =====

void FUN_0050b880(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00570d5c(param_2,param_3);
  return;
}


// ===== 0050b88c  FUN_0050b88c =====

undefined8 FUN_0050b88c(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005a18d4(param_2,param_3);
  if (((((uVar1 & 1) != 0) && (*(long *)(param_2 + 0x18) == *(long *)(param_3 + 0x18))) &&
      (*(char *)(param_2 + 0x20) == *(char *)(param_3 + 0x20))) &&
     ((uVar1 = FUN_005a18d4(param_2 + 0x28,param_3 + 0x28), (uVar1 & 1) != 0 &&
      (uVar1 = FUN_005a18d4(param_2 + 0x40,param_3 + 0x40), (uVar1 & 1) != 0)))) {
    uVar2 = FUN_005a18d4(param_2 + 0x58,param_3 + 0x58);
    return uVar2;
  }
  return 0;
}


// ===== 0050b914  FUN_0050b914 =====

undefined8 FUN_0050b914(undefined8 param_1,short *param_2,short *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (*param_2 == *param_3) {
    lVar1 = *(long *)(param_2 + 4);
    lVar3 = *(long *)(param_2 + 8);
    lVar2 = *(long *)(param_3 + 4);
    if (lVar3 - lVar1 == *(long *)(param_3 + 8) - lVar2) {
      while( true ) {
        if (lVar1 == lVar3) {
          uVar5 = FUN_005a18d4(param_2 + 0x10,param_3 + 0x10);
          return uVar5;
        }
        uVar4 = FUN_005a18d4(lVar1,lVar2);
        if ((((uVar4 & 1) == 0) ||
            (uVar4 = FUN_005a18d4(lVar1 + 0x18,lVar2 + 0x18), (uVar4 & 1) == 0)) ||
           (uVar4 = FUN_005a18d4(lVar1 + 0x30,lVar2 + 0x30), (uVar4 & 1) == 0)) break;
        lVar1 = lVar1 + 0x48;
        lVar2 = lVar2 + 0x48;
      }
    }
  }
  return 0;
}


// ===== 0050b9e4  FUN_0050b9e4 =====

void FUN_0050b9e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0050ba3c(param_2,param_3);
  return;
}


// ===== 0050b9f0  FUN_0050b9f0 =====

uint FUN_0050b9f0(void)

{
  long lVar1;
  uint uVar2;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_0050bc9c(auStack_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050ba3c  FUN_0050ba3c =====

uint FUN_0050ba3c(long param_1,long param_2)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar4 = tpidr_el0;
  lStack_80 = param_1 + 2;
  local_48 = *(long *)(lVar4 + 0x28);
  local_78 = param_1 + 8;
  local_68 = param_1 + 0x28;
  lStack_70 = param_1 + 0x20;
  lStack_60 = param_1 + 0x40;
  local_58 = param_1 + 0x58;
  lStack_b8 = param_2 + 2;
  local_b0 = param_2 + 8;
  local_a0 = param_2 + 0x28;
  lStack_a8 = param_2 + 0x20;
  lStack_98 = param_2 + 0x40;
  local_90 = param_2 + 0x58;
  local_c0 = param_2;
  local_88 = param_1;
  uVar6 = FUN_0050bb88(auStack_50,&local_88,&local_c0);
  if ((uVar6 & 1) != 0) {
    psVar1 = *(short **)(param_1 + 0x70);
    psVar3 = *(short **)(param_1 + 0x78);
    psVar2 = *(short **)(param_2 + 0x70);
    if ((long)psVar3 - (long)psVar1 == *(long *)(param_2 + 0x78) - (long)psVar2) {
      for (; psVar1 != psVar3; psVar1 = psVar1 + 0x10) {
        if ((*psVar1 != *psVar2) || (uVar6 = FUN_005a18d4(psVar1 + 4,psVar2 + 4), (uVar6 & 1) == 0))
        goto LAB_0050bb54;
        psVar2 = psVar2 + 0x10;
      }
      uVar6 = FUN_005a18d4(param_1 + 0x88,param_2 + 0x88);
      if (((uVar6 & 1) != 0) && (*(int *)(param_1 + 0xa0) == *(int *)(param_2 + 0xa0))) {
        uVar5 = FUN_005a18d4(param_1 + 0xa8,param_2 + 0xa8);
        goto LAB_0050bb58;
      }
    }
  }
LAB_0050bb54:
  uVar5 = 0;
LAB_0050bb58:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return uVar5 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050bb88  FUN_0050bb88 =====

undefined8 FUN_0050bb88(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  short *psVar1;
  ulong uVar2;
  short *psVar3;
  short *psVar4;
  
  if (((((*(short *)*param_2 == *(short *)*param_3) &&
        (*(short *)param_2[1] == *(short *)param_3[1])) &&
       (uVar2 = FUN_005a18d4(param_2[2],param_3[2]), (uVar2 & 1) != 0)) &&
      ((*(long *)param_2[3] == *(long *)param_3[3] &&
       (uVar2 = FUN_005a18d4(param_2[4],param_3[4]), (uVar2 & 1) != 0)))) &&
     (uVar2 = FUN_005a18d4(param_2[5],param_3[5]), (uVar2 & 1) != 0)) {
    psVar3 = *(short **)param_2[6];
    psVar1 = (short *)((long *)param_2[6])[1];
    psVar4 = *(short **)param_3[6];
    if ((long)psVar1 - (long)psVar3 == ((long *)param_3[6])[1] - (long)psVar4) {
      if (psVar3 == psVar1) {
        return 1;
      }
      while ((*psVar3 == *psVar4 && (uVar2 = FUN_005a18d4(psVar3 + 4,psVar4 + 4), (uVar2 & 1) != 0))
            ) {
        psVar3 = psVar3 + 0x10;
        psVar4 = psVar4 + 0x10;
        if (psVar3 == psVar1) {
          return 1;
        }
      }
    }
  }
  return 0;
}


// ===== 0050bc9c  FUN_0050bc9c =====

uint FUN_0050bc9c(undefined8 param_1,long param_2,long param_3)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long *local_80;
  long local_78;
  long local_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long *local_50;
  long local_48;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar4 = tpidr_el0;
  lStack_68 = param_2 + 2;
  local_38 = *(long *)(lVar4 + 0x28);
  local_60 = param_2 + 8;
  local_50 = (long *)(param_2 + 0x158);
  lStack_58 = param_2 + 0x20;
  local_48 = param_2 + 0x170;
  lStack_98 = param_3 + 2;
  local_90 = param_3 + 8;
  lStack_88 = param_3 + 0x20;
  local_80 = (long *)(param_3 + 0x158);
  local_78 = param_3 + 0x170;
  local_a0 = param_3;
  local_70 = param_2;
  uVar6 = FUN_0050bdb0(auStack_40,&local_70,&local_a0);
  if ((uVar6 & 1) != 0) {
    psVar1 = (short *)*local_50;
    psVar3 = (short *)local_50[1];
    psVar2 = (short *)*local_80;
    if ((long)psVar3 - (long)psVar1 == local_80[1] - (long)psVar2) {
      for (; psVar1 != psVar3; psVar1 = psVar1 + 0x10) {
        if ((*psVar1 != *psVar2) || (uVar6 = FUN_005a18d4(psVar1 + 4,psVar2 + 4), (uVar6 & 1) == 0))
        goto LAB_0050bd80;
        psVar2 = psVar2 + 0x10;
      }
      uVar5 = FUN_005a18d4(local_48,local_78);
      goto LAB_0050bd84;
    }
  }
LAB_0050bd80:
  uVar5 = 0;
LAB_0050bd84:
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return uVar5 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050bdb0  FUN_0050bdb0 =====

uint FUN_0050bdb0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*(short *)*param_2 == *(short *)*param_3) && (*(short *)param_2[1] == *(short *)param_3[1]))
     && (uVar3 = FUN_005a18d4(param_2[2],param_3[2]), (uVar3 & 1) != 0)) {
    local_78 = param_2[3];
    local_b0 = param_3[3];
    lStack_70 = local_78 + 0x18;
    local_68 = local_78 + 0x30;
    lStack_60 = local_78 + 0x70;
    local_58 = local_78 + 0xe8;
    lStack_50 = local_78 + 0x108;
    local_48 = local_78 + 0x120;
    lStack_98 = local_b0 + 0x70;
    local_90 = local_b0 + 0xe8;
    lStack_a8 = local_b0 + 0x18;
    local_a0 = local_b0 + 0x30;
    lStack_88 = local_b0 + 0x108;
    local_80 = local_b0 + 0x120;
    uVar3 = FUN_0050bec4(auStack_40,&local_78,&local_b0);
    if ((uVar3 & 1) != 0) {
      uVar2 = FUN_005a18d4(local_48,local_80);
      goto LAB_0050be98;
    }
  }
  uVar2 = 0;
LAB_0050be98:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050bec4  FUN_0050bec4 =====

void FUN_0050bec4(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  short *psVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  short *psVar8;
  short *psVar9;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 *local_40;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  uVar6 = FUN_0050bff8(auStack_50);
  if ((uVar6 & 1) != 0) {
    bVar3 = *(byte *)(*(long *)(param_3 + 0x20) + 0x18);
    bVar4 = *(byte *)(*(long *)(param_2 + 0x20) + 0x18);
    if ((bVar4 == 0xff) || (bVar3 == 0xff || bVar3 != bVar4)) {
      bVar1 = bVar3 != 0xff && bVar3 == bVar4;
      if (bVar4 == 0xff) {
        bVar1 = bVar3 == 0xff;
      }
      if (bVar1) goto LAB_0050bf5c;
    }
    else {
      local_40 = auStack_48;
      uVar6 = (*(code *)(&PTR_FUN_00d1fbc8)[bVar4])(&local_40);
      if ((uVar6 & 1) != 0) {
LAB_0050bf5c:
        psVar8 = (short *)**(long **)(param_2 + 0x28);
        psVar2 = (short *)(*(long **)(param_2 + 0x28))[1];
        psVar9 = (short *)**(long **)(param_3 + 0x28);
        if ((long)psVar2 - (long)psVar8 == (*(long **)(param_3 + 0x28))[1] - (long)psVar9) {
          if (psVar8 == psVar2) {
            uVar7 = 1;
          }
          else {
            do {
              if ((*psVar8 != *psVar9) ||
                 (uVar6 = FUN_005a18d4(psVar8 + 4,psVar9 + 4), (uVar6 & 1) == 0)) goto LAB_0050bfc4;
              psVar8 = psVar8 + 0x10;
              psVar9 = psVar9 + 0x10;
              uVar7 = 1;
            } while (psVar8 != psVar2);
          }
          goto LAB_0050bfc8;
        }
      }
    }
  }
LAB_0050bfc4:
  uVar7 = 0;
LAB_0050bfc8:
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


// ===== 0050bff8  FUN_0050bff8 =====

uint FUN_0050bff8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 auStack_48 [8];
  undefined1 *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  uVar6 = FUN_005a18d4(*param_2,*param_3);
  if (((uVar6 & 1) != 0) && (uVar6 = FUN_005a18d4(param_2[1],param_3[1]), (uVar6 & 1) != 0)) {
    bVar2 = *(byte *)(param_3[2] + 0x38);
    bVar3 = *(byte *)(param_2[2] + 0x38);
    if ((bVar3 == 0xff) || (bVar2 == 0xff || bVar2 != bVar3)) {
      bVar1 = bVar2 != 0xff && bVar2 == bVar3;
      if (bVar3 == 0xff) {
        bVar1 = bVar2 == 0xff;
      }
      if (bVar1) goto LAB_0050c0cc;
    }
    else {
      local_40 = auStack_48;
      uVar6 = (*(code *)(&PTR_FUN_00d1fba8)[bVar3])(&local_40);
      if ((uVar6 & 1) != 0) {
LAB_0050c0cc:
        uVar5 = FUN_0050c0e0(param_2[3],param_3[3]);
        goto LAB_0050c08c;
      }
    }
  }
  uVar5 = 0;
LAB_0050c08c:
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return uVar5 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050c0e0  FUN_0050c0e0 =====

bool FUN_0050c0e0(long *param_1,long *param_2)

{
  short *psVar1;
  short *psVar2;
  bool bVar3;
  short *psVar4;
  short *psVar5;
  
  psVar1 = (short *)*param_1;
  psVar4 = (short *)*param_2;
  if (param_1[1] - (long)psVar1 == param_2[1] - (long)psVar4) {
    for (; psVar1 != (short *)param_1[1]; psVar1 = psVar1 + 1) {
      if (*psVar1 != *psVar4) {
        return false;
      }
      psVar4 = psVar4 + 1;
    }
    psVar1 = (short *)param_1[3];
    psVar4 = (short *)param_2[3];
    if (param_1[4] - (long)psVar1 == param_2[4] - (long)psVar4) {
      for (; psVar1 != (short *)param_1[4]; psVar1 = psVar1 + 1) {
        if (*psVar1 != *psVar4) {
          return false;
        }
        psVar4 = psVar4 + 1;
      }
      psVar1 = (short *)param_1[6];
      psVar4 = (short *)param_2[6];
      if (param_1[7] - (long)psVar1 == param_2[7] - (long)psVar4) {
        for (; psVar1 != (short *)param_1[7]; psVar1 = psVar1 + 1) {
          if (*psVar1 != *psVar4) {
            return false;
          }
          psVar4 = psVar4 + 1;
        }
        psVar1 = (short *)param_1[9];
        psVar4 = (short *)param_2[9];
        if (param_1[10] - (long)psVar1 == param_2[10] - (long)psVar4) {
          for (; psVar1 != (short *)param_1[10]; psVar1 = psVar1 + 1) {
            if (*psVar1 != *psVar4) {
              return false;
            }
            psVar4 = psVar4 + 1;
          }
          psVar1 = (short *)param_1[0xc];
          psVar2 = (short *)param_1[0xd];
          psVar4 = (short *)param_2[0xc];
          if ((long)psVar2 - (long)psVar1 == param_2[0xd] - (long)psVar4) {
            if (psVar1 == psVar2) {
              return true;
            }
            do {
              psVar5 = psVar1 + 1;
              bVar3 = *psVar1 == *psVar4;
              if (*psVar1 != *psVar4) {
                return bVar3;
              }
              psVar4 = psVar4 + 1;
              psVar1 = psVar5;
            } while (psVar5 != psVar2);
            return bVar3;
          }
        }
      }
    }
  }
  return false;
}


// ===== 0050c23c  FUN_0050c23c =====

void FUN_0050c23c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_005a18d4(param_2,param_3);
  return;
}


// ===== 0050c248  FUN_0050c248 =====

void FUN_0050c248(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0055f844(param_2,param_3);
  return;
}


// ===== 0050c254  FUN_0050c254 =====

void FUN_0050c254(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0055fdb4(param_2,param_3);
  return;
}


// ===== 0050c260  FUN_0050c260 =====

uint FUN_0050c260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = param_3;
  uStack_38 = param_2;
  uVar2 = FUN_0050c2b8(auStack_30,&uStack_38,&local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050c2b8  FUN_0050c2b8 =====

void FUN_0050c2b8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_68 [8];
  undefined1 *local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  lVar9 = *(long *)*param_2;
  lVar3 = ((long *)*param_2)[1];
  lVar10 = *(long *)*param_3;
  if (lVar3 - lVar9 == ((long *)*param_3)[1] - lVar10) {
    if (lVar9 != lVar3) {
      lVar10 = lVar10 + 8;
      lVar9 = lVar9 + 8;
      do {
        if (*(short *)(lVar9 + -8) != *(short *)(lVar10 + -8)) goto LAB_0050c3d4;
        bVar4 = *(byte *)(lVar10 + 0x38);
        bVar5 = *(byte *)(lVar9 + 0x38);
        if ((bVar5 == 0xff) || (bVar4 == 0xff || bVar4 != bVar5)) {
          bVar2 = bVar4 != 0xff && bVar4 == bVar5;
          if (bVar5 == 0xff) {
            bVar2 = bVar4 == 0xff;
          }
          if (!bVar2) goto LAB_0050c3d4;
        }
        else {
          local_60 = auStack_68;
          uVar7 = (*(code *)(&PTR_FUN_00d1fba8)[bVar5])(&local_60,lVar9,lVar10);
          if ((uVar7 & 1) == 0) goto LAB_0050c3d4;
        }
        uVar7 = FUN_005a18d4(lVar9 + 0x40,lVar10 + 0x40);
        if (((uVar7 & 1) == 0) ||
           (uVar7 = FUN_005a18d4(lVar9 + 0x58,lVar10 + 0x58), (uVar7 & 1) == 0)) goto LAB_0050c3d4;
        lVar10 = lVar10 + 0x78;
        lVar1 = lVar9 + 0x70;
        lVar9 = lVar9 + 0x78;
      } while (lVar1 != lVar3);
    }
    uVar8 = 1;
  }
  else {
LAB_0050c3d4:
    uVar8 = 0;
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


// ===== 0050c408  FUN_0050c408 =====

bool FUN_0050c408(undefined8 param_1,long *param_2,long *param_3)

{
  return *param_2 == *param_3 && param_2[1] == param_3[1];
}


// ===== 0050c420  FUN_0050c420 =====

undefined8 FUN_0050c420(void)

{
  return 1;
}


// ===== 0050c428  FUN_0050c428 =====

void FUN_0050c428(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_005a18d4(param_2,param_3);
  return;
}


// ===== 0050c434  FUN_0050c434 =====

undefined8 FUN_0050c434(void)

{
  return 1;
}


// ===== 0050c43c  FUN_0050c43c =====

undefined8 FUN_0050c43c(void)

{
  return 2;
}


// ===== 0050c444  FUN_0050c444 =====

void FUN_0050c444(long *param_1,undefined2 *param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined2 local_4c [2];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  puVar5 = (undefined1 *)*param_1;
  puVar8 = (undefined1 *)param_1[1];
  local_68 = (undefined1 *)0x0;
  local_60 = (undefined1 *)0x0;
  local_58 = (undefined1 *)0x0;
  uVar2 = (long)puVar8 - (long)puVar5;
  if (uVar2 != 0) {
    if ((long)uVar2 < 0) {
      if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_68);
      }
      goto LAB_0050c5f4;
    }
    local_68 = (undefined1 *)operator_new(uVar2);
    local_58 = local_68 + uVar2;
    local_60 = local_68;
    puVar6 = puVar5;
    if ((uVar2 < 0x20) || ((ulong)((long)local_68 - (long)puVar5) < 0x20)) {
LAB_0050c500:
      do {
        puVar9 = puVar6 + 1;
        puVar5 = local_60 + 1;
        *local_60 = *puVar6;
        local_60 = puVar5;
        puVar6 = puVar9;
      } while (puVar9 != puVar8);
    }
    else {
      uVar7 = uVar2 & 0xffffffffffffffe0;
      puVar10 = (undefined8 *)(local_68 + 0x10);
      puVar6 = puVar5 + uVar7;
      local_60 = local_68 + uVar7;
      puVar11 = (undefined8 *)(puVar5 + 0x10);
      uVar12 = uVar7;
      do {
        puVar4 = puVar11 + -1;
        uVar13 = puVar11[-2];
        uVar15 = puVar11[1];
        uVar14 = *puVar11;
        puVar11 = puVar11 + 4;
        uVar12 = uVar12 - 0x20;
        puVar10[-1] = *puVar4;
        puVar10[-2] = uVar13;
        puVar10[1] = uVar15;
        *puVar10 = uVar14;
        puVar10 = puVar10 + 4;
      } while (uVar12 != 0);
      if (uVar2 != uVar7) goto LAB_0050c500;
    }
    puVar8 = local_60 + -1;
    puVar5 = local_68;
    if (local_68 < puVar8 && local_68 != local_60) {
      do {
        puVar6 = puVar5 + 1;
        uVar1 = *puVar5;
        *puVar5 = *puVar8;
        puVar9 = puVar8 + -1;
        *puVar8 = uVar1;
        puVar8 = puVar9;
        puVar5 = puVar6;
      } while (puVar6 < puVar9);
    }
  }
                    /* try { // try from 0050c548 to 0050c573 has its CatchHandler @ 0050c5c4 */
  FUN_005a31cc(&local_68,local_4c);
  *param_2 = local_4c[0];
  FUN_00507e34(&local_68,param_2 + 4);
  FUN_00506244(&local_68,param_2 + 0x10);
  if (local_68 != (undefined1 *)0x0) {
    local_60 = local_68;
    operator_delete(local_68);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_0050c5f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050c5f8  FUN_0050c5f8 =====

void FUN_0050c5f8(long param_1)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x180) != '\0') {
    if (*(char *)(param_1 + 0x178) != '\0') {
      if ((ulong)*(byte *)(param_1 + 0x170) != 0xff) {
                    /* try { // try from 0050c650 to 0050c657 has its CatchHandler @ 0050c70c */
        (*(code *)(&PTR_FUN_00d1f940)[*(byte *)(param_1 + 0x170)])(auStack_68,param_1 + 0x38);
      }
      *(undefined1 *)(param_1 + 0x170) = 0xff;
    }
    FUN_004fcd14(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28));
    pvVar3 = *(void **)(param_1 + 8);
    if (pvVar3 != (void *)0x0) {
      pvVar4 = *(void **)(param_1 + 0x10);
      pvVar2 = pvVar3;
      if (pvVar4 != pvVar3) {
        do {
          pvVar2 = (void *)((long)pvVar4 + -0x148);
          if (*(char *)((long)pvVar4 + -8) != '\0') {
            if ((ulong)*(byte *)((long)pvVar4 + -0x10) != 0xff) {
                    /* try { // try from 0050c6c0 to 0050c6cb has its CatchHandler @ 0050c710 */
              (*(code *)(&PTR_FUN_00d1f940)[*(byte *)((long)pvVar4 + -0x10)])(auStack_60,pvVar2);
            }
            *(undefined1 *)((long)pvVar4 + -0x10) = 0xff;
          }
          pvVar4 = pvVar2;
        } while (pvVar2 != pvVar3);
        pvVar2 = *(void **)(param_1 + 8);
      }
      *(void **)(param_1 + 0x10) = pvVar3;
      operator_delete(pvVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0050c714  FUN_0050c714 =====

undefined1  [16] FUN_0050c714(long *param_1,ulong *param_2,long *param_3,long *param_4)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  undefined1 *puVar15;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 *puVar16;
  
  plVar7 = param_1 + 1;
  plVar14 = plVar7;
  if ((long *)*plVar7 != (long *)0x0) {
    plVar4 = (long *)*plVar7;
    do {
      while (plVar5 = plVar4, plVar7 = plVar5, *param_2 < (ulong)plVar5[4]) {
        plVar4 = (long *)*plVar5;
        plVar14 = plVar5;
        if ((long *)*plVar5 == (long *)0x0) goto LAB_0050c784;
      }
      if (*param_2 <= (ulong)plVar5[4]) {
        uVar8 = 0;
        goto LAB_0050c878;
      }
      plVar4 = (long *)plVar5[1];
    } while ((long *)plVar5[1] != (long *)0x0);
    plVar14 = plVar5 + 1;
  }
LAB_0050c784:
  plVar5 = (long *)operator_new(0x40);
  puVar15 = (undefined1 *)*param_4;
  puVar1 = (undefined1 *)param_4[1];
  plVar5[4] = *param_3;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  uVar2 = (long)puVar1 - (long)puVar15;
  if (uVar2 == 0) goto LAB_0050c830;
  if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004f04ec();
  }
                    /* try { // try from 0050c7b0 to 0050c897 has its CatchHandler @ 0050c898 */
  puVar6 = (undefined1 *)operator_new(uVar2);
  plVar5[5] = (long)puVar6;
  plVar5[6] = (long)puVar6;
  plVar5[7] = (long)(puVar6 + uVar2);
  puVar16 = puVar15;
  if ((uVar2 < 0x20) || ((ulong)((long)puVar6 - (long)puVar15) < 0x20)) {
LAB_0050c81c:
    do {
      puVar15 = puVar16 + 1;
      puVar9 = puVar6 + 1;
      *puVar6 = *puVar16;
      puVar6 = puVar9;
      puVar16 = puVar15;
    } while (puVar15 != puVar1);
  }
  else {
    uVar10 = uVar2 & 0xffffffffffffffe0;
    puVar11 = (undefined8 *)(puVar6 + 0x10);
    puVar16 = puVar15 + uVar10;
    puVar9 = puVar6 + uVar10;
    puVar12 = (undefined8 *)(puVar15 + 0x10);
    uVar13 = uVar10;
    do {
      puVar3 = puVar12 + -1;
      uVar8 = puVar12[-2];
      uVar18 = puVar12[1];
      uVar17 = *puVar12;
      puVar12 = puVar12 + 4;
      uVar13 = uVar13 - 0x20;
      puVar11[-1] = *puVar3;
      puVar11[-2] = uVar8;
      puVar11[1] = uVar18;
      *puVar11 = uVar17;
      puVar11 = puVar11 + 4;
    } while (uVar13 != 0);
    puVar6 = puVar9;
    if (uVar2 != uVar10) goto LAB_0050c81c;
  }
  plVar5[6] = (long)puVar9;
LAB_0050c830:
  *plVar5 = 0;
  plVar5[1] = 0;
  plVar5[2] = (long)plVar7;
  *plVar14 = (long)plVar5;
  plVar7 = plVar5;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    plVar7 = (long *)*plVar14;
  }
  FUN_0041dcd0(param_1[1],plVar7);
  uVar8 = 1;
  param_1[2] = param_1[2] + 1;
LAB_0050c878:
  auVar19._8_8_ = uVar8;
  auVar19._0_8_ = plVar5;
  return auVar19;
}


// ===== 0050c8ac  FUN_0050c8ac =====

void FUN_0050c8ac(long *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  puVar5 = (undefined1 *)*param_1;
  puVar8 = (undefined1 *)param_1[1];
  local_60 = (undefined1 *)0x0;
  local_58 = (undefined1 *)0x0;
  local_50 = (undefined1 *)0x0;
  uVar2 = (long)puVar8 - (long)puVar5;
  if (uVar2 != 0) {
    if ((long)uVar2 < 0) {
      if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_60);
      }
      goto LAB_0050ca3c;
    }
    local_60 = (undefined1 *)operator_new(uVar2);
    local_50 = local_60 + uVar2;
    local_58 = local_60;
    puVar6 = puVar5;
    if ((uVar2 < 0x20) || ((ulong)((long)local_60 - (long)puVar5) < 0x20)) {
LAB_0050c968:
      do {
        puVar9 = puVar6 + 1;
        puVar5 = local_58 + 1;
        *local_58 = *puVar6;
        local_58 = puVar5;
        puVar6 = puVar9;
      } while (puVar9 != puVar8);
    }
    else {
      uVar7 = uVar2 & 0xffffffffffffffe0;
      puVar10 = (undefined8 *)(local_60 + 0x10);
      puVar6 = puVar5 + uVar7;
      local_58 = local_60 + uVar7;
      puVar11 = (undefined8 *)(puVar5 + 0x10);
      uVar12 = uVar7;
      do {
        puVar4 = puVar11 + -1;
        uVar13 = puVar11[-2];
        uVar15 = puVar11[1];
        uVar14 = *puVar11;
        puVar11 = puVar11 + 4;
        uVar12 = uVar12 - 0x20;
        puVar10[-1] = *puVar4;
        puVar10[-2] = uVar13;
        puVar10[1] = uVar15;
        *puVar10 = uVar14;
        puVar10 = puVar10 + 4;
      } while (uVar12 != 0);
      if (uVar2 != uVar7) goto LAB_0050c968;
    }
    puVar8 = local_58 + -1;
    puVar5 = local_60;
    if (local_60 < puVar8 && local_60 != local_58) {
      do {
        puVar6 = puVar5 + 1;
        uVar1 = *puVar5;
        *puVar5 = *puVar8;
        puVar9 = puVar8 + -1;
        *puVar8 = uVar1;
        puVar8 = puVar9;
        puVar5 = puVar6;
      } while (puVar6 < puVar9);
    }
  }
                    /* try { // try from 0050c9b0 to 0050c9bb has its CatchHandler @ 0050ca0c */
  FUN_0050ca40(&local_60,param_2);
  if (local_60 != (undefined1 *)0x0) {
    local_58 = local_60;
    operator_delete(local_60);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_0050ca3c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050ca40  FUN_0050ca40 =====

long * FUN_0050ca40(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  void *__dest;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  ulong local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  FUN_005a35bc(param_1,&local_60);
  uVar5 = local_60;
  puVar3 = (undefined1 *)param_1[1];
  if ((ulong)((long)puVar3 - *param_1) < local_60) {
    uVar4 = FUN_0054f64c(0x10);
                    /* try { // try from 0050cdbc to 0050cdc7 has its CatchHandler @ 0050ce08 */
    FUN_005064ec(uVar4,"Vector is longer than remaining data");
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar4,&PTR_PTR_thunk_FUN_00552768_00d1fbf0,PTR_FUN_00d51d28);
    }
    goto LAB_0050ce60;
  }
  local_78 = (undefined1 *)0x0;
  local_70 = (undefined1 *)0x0;
  local_68 = (undefined1 *)0x0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  if (local_60 == 0) {
    local_68 = (undefined1 *)0x0;
    local_70 = (undefined1 *)0x0;
    local_78 = (undefined1 *)0x0;
  }
  else {
    if ((long)local_60 < 0) {
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 0050ce00 to 0050ce07 has its CatchHandler @ 0050ce18 */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_90);
      }
      goto LAB_0050ce60;
    }
                    /* try { // try from 0050caa8 to 0050caaf has its CatchHandler @ 0050ce18 */
    local_78 = (undefined1 *)operator_new(local_60);
    puVar7 = puVar3 + -uVar5;
    local_68 = local_78 + uVar5;
    puVar6 = local_78;
    if ((0x1f < uVar5) && ((undefined1 *)0x1f < local_78 + (uVar5 - (long)puVar3))) {
      uVar9 = uVar5 & 0xffffffffffffffe0;
      uVar10 = 0;
      local_70 = local_78 + uVar9;
      do {
        puVar11 = (undefined8 *)(puVar7 + uVar10);
        puVar12 = (undefined8 *)(local_78 + uVar10);
        uVar10 = uVar10 + 0x20;
        uVar4 = *puVar11;
        uVar14 = puVar11[3];
        uVar13 = puVar11[2];
        puVar12[1] = puVar11[1];
        *puVar12 = uVar4;
        puVar12[3] = uVar14;
        puVar12[2] = uVar13;
      } while (uVar9 != uVar10);
      puVar6 = local_70;
      puVar7 = puVar7 + uVar9;
      if (uVar5 == uVar9) goto LAB_0050cb34;
    }
    do {
      puVar8 = puVar7 + 1;
      local_70 = puVar6 + 1;
      *puVar6 = *puVar7;
      puVar6 = local_70;
      puVar7 = puVar8;
    } while (puVar8 != puVar3);
  }
LAB_0050cb34:
  puVar11 = (undefined8 *)*param_2;
  puVar12 = (undefined8 *)param_2[1];
  while (puVar2 = puVar12, puVar2 != puVar11) {
    if ((ulong)*(byte *)(puVar2 + -1) != 0xff) {
                    /* try { // try from 0050cb78 to 0050cb7f has its CatchHandler @ 0050ce20 */
      (*(code *)(&PTR_FUN_00d1f9c8)[*(byte *)(puVar2 + -1)])(&local_90,puVar2 + -8);
    }
    puVar3 = (undefined1 *)puVar2[-0xb];
    puVar12 = puVar2 + -0xb;
    *(undefined1 *)(puVar2 + -1) = 0xff;
    if (0 < puVar2[-10] - (long)puVar3) {
      uVar5 = (puVar2[-10] - (long)puVar3) + 1;
      do {
        uVar5 = uVar5 - 1;
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      } while (1 < uVar5);
      puVar3 = (undefined1 *)*puVar12;
    }
    if (puVar3 != (undefined1 *)0x0) {
      puVar2[-10] = puVar3;
      operator_delete(puVar3);
    }
  }
  param_2[1] = puVar11;
  puVar3 = local_78;
  if (local_70 != local_78) {
    while( true ) {
      if (puVar11 < (undefined8 *)param_2[2]) {
        if (puVar11 == (undefined8 *)0x0) {
          if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 0050cd50 to 0050cd77 has its CatchHandler @ 0050ce30 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                       ,0x23,"__location != nullptr","null pointer given to construct_at");
          }
          goto LAB_0050ce60;
        }
        puVar12 = puVar11 + 0xb;
        puVar11[10] = 0;
        puVar11[3] = 0;
        puVar11[2] = 0;
        puVar11[5] = 0;
        puVar11[4] = 0;
        puVar11[7] = 0;
        puVar11[6] = 0;
        puVar11[9] = 0;
        puVar11[8] = 0;
        puVar11[1] = 0;
        *puVar11 = 0;
        param_2[1] = puVar12;
      }
      else {
                    /* try { // try from 0050cc08 to 0050cc37 has its CatchHandler @ 0050ce24 */
        FUN_0050ce68(param_2);
        puVar12 = (undefined8 *)param_2[1];
      }
      if ((undefined8 *)*param_2 == puVar12) {
        if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 0050cd18 to 0050cd3f has its CatchHandler @ 0050ce64 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        goto LAB_0050ce60;
      }
      FUN_00506244(&local_78,puVar12 + -0xb);
      FUN_005a31cc(&local_78,&local_90);
      puVar11 = puVar12 + -8;
      if ((short)local_90 == 1) {
        if ((ulong)*(byte *)(puVar12 + -1) != 0xff) {
                    /* try { // try from 0050cc58 to 0050cc63 has its CatchHandler @ 0050ce1c */
          (*(code *)(&PTR_FUN_00d1f9c8)[*(byte *)(puVar12 + -1)])(&local_90,puVar11);
        }
        *puVar11 = 0;
        puVar12[-7] = 0;
        puVar12[-6] = 0;
        *(undefined1 *)(puVar12 + -1) = 0;
                    /* try { // try from 0050cc70 to 0050cc8b has its CatchHandler @ 0050ce24 */
        FUN_00506244(&local_78,puVar11);
      }
      else {
        FUN_00506690(&local_78,local_90 & 0xffff,puVar11);
      }
      puVar3 = local_70;
      if (local_70 == local_78) break;
      puVar11 = (undefined8 *)param_2[1];
    }
  }
  if ((long)local_60 < 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 0050cd88 to 0050cdaf has its CatchHandler @ 0050ce28 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x644,
                 "__first <= __last","vector::erase(first, last) called with invalid range");
    }
  }
  else {
    if (local_60 != 0) {
      __dest = (void *)(param_1[1] - local_60);
      memmove(__dest,(void *)((long)__dest + local_60),param_1[1] - (long)((long)__dest + local_60))
      ;
      param_1[1] = (long)__dest;
      puVar3 = local_78;
    }
    if (puVar3 != (undefined1 *)0x0) {
      local_70 = puVar3;
      operator_delete(puVar3);
    }
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return param_1;
    }
  }
LAB_0050ce60:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050ce68  FUN_0050ce68 =====

void FUN_0050ce68(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  puVar2 = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)param_1[1];
  lVar6 = (long)puVar10 - (long)puVar2 >> 3;
  uVar7 = lVar6 * 0x2e8ba2e8ba2e8ba3 + 1;
  if (uVar7 < 0x2e8ba2e8ba2e8bb) {
    lVar8 = param_1[2] - (long)puVar2 >> 3;
    uVar9 = lVar8 * 0x5d1745d1745d1746;
    if (uVar9 < uVar7 || uVar9 - uVar7 == 0) {
      uVar9 = uVar7;
    }
    if (0x1745d1745d1745c < (ulong)(lVar8 * 0x2e8ba2e8ba2e8ba3)) {
      uVar9 = 0x2e8ba2e8ba2e8ba;
    }
    if (uVar9 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (0x2e8ba2e8ba2e8ba < uVar9) goto LAB_0050d124;
      pvVar4 = operator_new(uVar9 * 0x58);
    }
    puVar12 = (undefined8 *)((long)pvVar4 + lVar6 * 8);
    if (pvVar4 == (void *)0x0) {
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 0050d0e4 to 0050d10b has its CatchHandler @ 0050d140 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x23,"__location != nullptr","null pointer given to construct_at");
      }
    }
    else {
      puVar1 = puVar12 + 0xb;
      puVar12[10] = 0;
      puVar12[3] = 0;
      puVar12[2] = 0;
      puVar12[5] = 0;
      puVar12[4] = 0;
      puVar12[7] = 0;
      puVar12[6] = 0;
      puVar12[9] = 0;
      puVar12[8] = 0;
      puVar12[1] = 0;
      *puVar12 = 0;
      puVar11 = puVar10;
      if (puVar10 != puVar2) {
        lVar6 = 0;
        do {
          *(undefined8 *)((long)puVar12 + lVar6 + -0x50) = 0;
          *(undefined8 *)((long)puVar12 + lVar6 + -0x48) = 0;
          uVar13 = *(undefined8 *)((long)puVar10 + lVar6 + -0x58);
          *(undefined8 *)((long)puVar12 + lVar6 + -0x50) =
               *(undefined8 *)((long)puVar10 + lVar6 + -0x50);
          *(undefined8 *)((long)puVar12 + lVar6 + -0x58) = uVar13;
          *(undefined8 *)((long)puVar12 + lVar6 + -0x48) =
               *(undefined8 *)((long)puVar10 + lVar6 + -0x48);
          *(undefined8 *)((long)puVar10 + lVar6 + -0x50) = 0;
          *(undefined8 *)((long)puVar10 + lVar6 + -0x48) = 0;
          *(undefined8 *)((long)puVar10 + lVar6 + -0x58) = 0;
          puVar5 = (undefined1 *)((long)puVar12 + lVar6 + -0x40);
          *puVar5 = 0;
          *(undefined1 *)((long)puVar12 + lVar6 + -8) = 0xff;
          uVar7 = (ulong)*(byte *)((long)puVar10 + lVar6 + -8);
          if (uVar7 != 0xff) {
                    /* try { // try from 0050cfd4 to 0050cfdb has its CatchHandler @ 0050d13c */
            (*(code *)(&PTR_FUN_00d1f9e8)[uVar7])(auStack_70,puVar5,(long)puVar10 + lVar6 + -0x40);
            *(undefined1 *)((long)puVar12 + lVar6 + -8) =
                 *(undefined1 *)((long)puVar10 + lVar6 + -8);
          }
          lVar6 = lVar6 + -0x58;
        } while ((undefined8 *)((long)puVar10 + lVar6) != puVar2);
        puVar10 = (undefined8 *)param_1[1];
        puVar12 = (undefined8 *)((long)puVar12 + lVar6);
        puVar11 = (undefined8 *)*param_1;
      }
      *param_1 = puVar12;
      param_1[1] = puVar1;
      param_1[2] = (void *)((long)pvVar4 + uVar9 * 0x58);
      puVar2 = puVar10;
      while (puVar12 = puVar10, puVar12 != puVar11) {
        puVar10 = puVar12 + -0xb;
        if ((ulong)*(byte *)(puVar12 + -1) != 0xff) {
                    /* try { // try from 0050d050 to 0050d057 has its CatchHandler @ 0050d138 */
          (*(code *)(&PTR_FUN_00d1f9c8)[*(byte *)(puVar12 + -1)])(auStack_70,puVar12 + -8);
        }
        puVar5 = (undefined1 *)puVar12[-0xb];
        *(undefined1 *)(puVar12 + -1) = 0xff;
        if (0 < puVar12[-10] - (long)puVar5) {
          uVar7 = (puVar12[-10] - (long)puVar5) + 1;
          do {
            uVar7 = uVar7 - 1;
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          } while (1 < uVar7);
          puVar5 = (undefined1 *)*puVar10;
        }
        puVar2 = puVar11;
        if (puVar5 != (undefined1 *)0x0) {
          puVar12[-10] = puVar5;
          operator_delete(puVar5);
        }
      }
      if (puVar2 != (undefined8 *)0x0) {
        operator_delete(puVar2);
      }
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return;
      }
    }
  }
  else {
    if (*(long *)(lVar3 + 0x28) != local_68) goto LAB_0050d164;
    FUN_0050d25c(param_1);
LAB_0050d124:
    if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
  }
LAB_0050d164:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050d168  FUN_0050d168 =====

void FUN_0050d168(undefined8 *param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar1 = param_1[1];
  lVar7 = param_1[2];
  while (lVar7 != lVar1) {
    bVar2 = *(byte *)(lVar7 + -8);
    param_1[2] = (undefined8 *)(lVar7 + -0x58);
    if ((ulong)bVar2 != 0xff) {
                    /* try { // try from 0050d1d8 to 0050d1df has its CatchHandler @ 0050d258 */
      (*(code *)(&PTR_FUN_00d1f9c8)[bVar2])(auStack_60,lVar7 + -0x40);
    }
    puVar4 = *(undefined1 **)(lVar7 + -0x58);
    *(undefined1 *)(lVar7 + -8) = 0xff;
    lVar5 = *(long *)(lVar7 + -0x50) - (long)puVar4;
    if (0 < lVar5) {
      uVar6 = lVar5 + 1;
      do {
        uVar6 = uVar6 - 1;
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      } while (1 < uVar6);
      puVar4 = *(undefined1 **)(lVar7 + -0x58);
    }
    if (puVar4 != (undefined1 *)0x0) {
      *(undefined1 **)(lVar7 + -0x50) = puVar4;
      operator_delete(puVar4);
    }
    lVar7 = param_1[2];
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050d25c  FUN_0050d25c =====

void FUN_0050d25c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_004e8250("vector");
}


// ===== 0050d270  FUN_0050d270 =====

undefined8 FUN_0050d270(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  pthread_key_t *ppVar5;
  void *pvVar6;
  undefined8 *puVar7;
  void *__pointer;
  undefined8 *local_70;
  void *local_68;
  void *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *puStack_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_70 = param_1;
                    /* try { // try from 0050d298 to 0050d2c7 has its CatchHandler @ 0050d40c */
  ppVar5 = (pthread_key_t *)FUN_0054a21c();
  __pointer = (void *)*param_1;
  *param_1 = 0;
  pvVar6 = pthread_getspecific(*ppVar5);
  if (pvVar6 != (void *)0x0) {
    if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 0050d3ac to 0050d3d3 has its CatchHandler @ 0050d40c */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/thread",0xc9,
                 "get() == nullptr","Attempting to overwrite thread local data");
    }
    goto LAB_0050d430;
  }
  pthread_setspecific(*ppVar5,__pointer);
  puVar7 = (undefined8 *)operator_new(0x40);
  local_48 = puVar7 + 8;
  lVar1 = param_1[5];
  lVar2 = param_1[6];
  puVar7[1] = 0;
  *puVar7 = 0;
  puVar7[3] = 0;
  puVar7[2] = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  local_50 = puVar7;
  puStack_40 = local_48;
                    /* try { // try from 0050d2ec to 0050d32f has its CatchHandler @ 0050d3f0 */
  iVar4 = FUN_0078a938(lVar1,lVar2 - lVar1,&DAT_001f73fc,0x10,0x4000,8,2,0x2000000,puVar7,0x40);
  if (iVar4 == 1) {
    (*(code *)param_1[3])(param_1 + 1,&local_50);
    puVar7 = local_50;
    if (local_50 != (undefined8 *)0x0) goto LAB_0050d360;
  }
  else {
    local_68 = (void *)0x0;
    local_60 = (void *)0x0;
    local_58 = 0;
                    /* try { // try from 0050d348 to 0050d34f has its CatchHandler @ 0050d3d4 */
    (*(code *)param_1[3])(param_1 + 1,&local_68);
    if (local_68 != (void *)0x0) {
      local_60 = local_68;
      operator_delete(local_68);
    }
LAB_0050d360:
    local_48 = puVar7;
    operator_delete(puVar7);
  }
  FUN_0050d434(&local_70);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return 0;
  }
LAB_0050d430:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050d434  FUN_0050d434 =====

void FUN_0050d434(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  
  puVar3 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined1 *)puVar3[5];
    if (0 < puVar3[6] - (long)puVar1) {
      uVar2 = (puVar3[6] - (long)puVar1) + 1;
      do {
        uVar2 = uVar2 - 1;
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
      } while (1 < uVar2);
      puVar1 = (undefined1 *)puVar3[5];
    }
    if (puVar1 != (undefined1 *)0x0) {
      puVar3[6] = puVar1;
      operator_delete(puVar1);
    }
    if (*(code **)(puVar3[4] + 8) != (code *)0x0) {
                    /* try { // try from 0050d490 to 0050d493 has its CatchHandler @ 0050d4cc */
      (**(code **)(puVar3[4] + 8))(puVar3[1]);
    }
    pvVar4 = (void *)*puVar3;
    *puVar3 = 0;
    if (pvVar4 != (void *)0x0) {
      FUN_0054a3b8(pvVar4);
      operator_delete(pvVar4);
    }
    operator_delete(puVar3);
    return;
  }
  return;
}


// ===== 0050d4d0  FUN_0050d4d0 =====

void FUN_0050d4d0(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_0054a3b8(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 0050d50c  FUN_0050d50c =====

void FUN_0050d50c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *local_40;
  undefined1 *local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00548ec4(param_2,0,10);
  FUN_0050d628(&local_40);
                    /* try { // try from 0050d540 to 0050d54b has its CatchHandler @ 0050d5a0 */
  FUN_005603e8(param_1,&local_40);
  if (0 < (long)local_38 - (long)local_40) {
    uVar3 = ((long)local_38 - (long)local_40) + 1;
    puVar2 = local_40;
    do {
      uVar3 = uVar3 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (1 < uVar3);
  }
  if (local_40 != (undefined1 *)0x0) {
    local_38 = local_40;
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0050d5c8  FUN_0050d5c8 =====

void FUN_0050d5c8(undefined8 param_1,long param_2)

{
  short sVar1;
  
  sVar1 = FUN_0055fe68();
  if (sVar1 != 1) {
    FUN_004a3cf4(param_1,&DAT_001b3348);
    return;
  }
  if (*(char *)(param_2 + 0x38) == '\0') {
    FUN_0050d7f8(param_2);
    FUN_00549320(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004f2868();
}


// ===== 0050d628  FUN_0050d628 =====

void FUN_0050d628(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
                    /* try { // try from 0050d644 to 0050d64b has its CatchHandler @ 0050d6c4 */
  pvVar1 = operator_new(8);
  *param_1 = pvVar1;
  param_1[1] = pvVar1;
  param_1[2] = (long)pvVar1 + 8;
                    /* try { // try from 0050d65c to 0050d6b7 has its CatchHandler @ 0050d6c8 */
  FUN_0050d6cc(param_1,param_2 >> 0x38);
  FUN_0050d6cc(param_1,param_2 >> 0x30);
  FUN_0050d6cc(param_1,param_2 >> 0x28);
  FUN_0050d6cc(param_1,param_2 >> 0x20);
  FUN_0050d6cc(param_1,param_2 >> 0x18);
  FUN_0050d6cc(param_1,param_2 >> 0x10);
  FUN_0050d6cc(param_1,param_2 >> 8);
  FUN_0050d6cc(param_1,param_2 & 0xffffffff);
  return;
}


// ===== 0050d6cc  FUN_0050d6cc =====

void FUN_0050d6cc(undefined8 *param_1,undefined1 param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  void *__dest;
  ulong uVar3;
  void *__src;
  ulong __n;
  
  puVar2 = (undefined1 *)param_1[1];
  if (puVar2 == (undefined1 *)param_1[2]) {
    __src = (void *)*param_1;
    __n = (long)puVar2 - (long)__src;
    uVar1 = __n + 1;
    if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004f04ec(param_1);
    }
    uVar3 = __n * 2;
    if (uVar3 < uVar1 || uVar3 - uVar1 == 0) {
      uVar3 = uVar1;
    }
    if (0x3ffffffffffffffe < __n) {
      uVar3 = 0x7fffffffffffffff;
    }
    if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                 ,0x23,"__location != nullptr","null pointer given to construct_at");
    }
    __dest = operator_new(uVar3);
    *(undefined1 *)((long)__dest + __n) = param_2;
    memmove(__dest,__src,__n);
    *param_1 = __dest;
    param_1[1] = (undefined1 *)((long)__dest + __n) + 1;
    param_1[2] = (long)__dest + uVar3;
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    if (puVar2 == (undefined1 *)0x0) {
                    /* try { // try from 0050d798 to 0050d7bf has its CatchHandler @ 0050d7f0 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                 ,0x23,"__location != nullptr","null pointer given to construct_at");
    }
    *puVar2 = param_2;
    param_1[1] = puVar2 + 1;
  }
  return;
}


// ===== 0050d7f8  FUN_0050d7f8 =====

ulong FUN_0050d7f8(long *param_1)

{
  byte *pbVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)*param_1;
  pbVar1 = (byte *)param_1[1];
  uVar2 = 0;
  if ((ulong)((long)pbVar1 - (long)pbVar4) < 9 && pbVar4 != pbVar1) {
    do {
      pbVar3 = pbVar4 + 1;
      uVar2 = (ulong)*pbVar4 | uVar2 << 8;
      pbVar4 = pbVar3;
    } while (pbVar3 != pbVar1);
  }
  return uVar2;
}


// ===== 0050d824  FUN_0050d824 =====

void FUN_0050d824(undefined8 *param_1,undefined2 param_2,long *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  long local_58;
  undefined1 *puVar11;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_68 = (undefined1 *)0x0;
  local_60 = (undefined1 *)0x0;
  puVar10 = (undefined1 *)*param_3;
  puVar1 = (undefined1 *)param_3[1];
  local_70 = (undefined1 *)0x0;
  *param_1 = &PTR_FUN_00d1fc40;
  uVar5 = (long)puVar1 - (long)puVar10;
  if (uVar5 != 0) {
    if ((long)uVar5 < 0) {
      if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_70);
      }
      goto LAB_0050d9a4;
    }
                    /* try { // try from 0050d87c to 0050d9a3 has its CatchHandler @ 0050d9a8 */
    local_70 = (undefined1 *)operator_new(uVar5);
    local_60 = local_70 + uVar5;
    puVar4 = local_70;
    puVar11 = puVar10;
    if ((0x1f < uVar5) && (0x1f < (ulong)((long)local_70 - (long)puVar10))) {
      uVar6 = uVar5 & 0xffffffffffffffe0;
      puVar7 = (undefined8 *)(local_70 + 0x10);
      puVar11 = puVar10 + uVar6;
      puVar4 = local_70 + uVar6;
      puVar8 = (undefined8 *)(puVar10 + 0x10);
      uVar9 = uVar6;
      do {
        puVar3 = puVar8 + -1;
        uVar12 = puVar8[-2];
        uVar15 = puVar8[1];
        uVar14 = *puVar8;
        puVar8 = puVar8 + 4;
        uVar9 = uVar9 - 0x20;
        puVar7[-1] = *puVar3;
        puVar7[-2] = uVar12;
        puVar7[1] = uVar15;
        *puVar7 = uVar14;
        puVar7 = puVar7 + 4;
      } while (uVar9 != 0);
      local_68 = puVar4;
      if (uVar5 == uVar6) goto LAB_0050d8fc;
    }
    do {
      puVar10 = puVar11 + 1;
      local_68 = puVar4 + 1;
      *puVar4 = *puVar11;
      puVar4 = local_68;
      puVar11 = puVar10;
    } while (puVar10 != puVar1);
  }
LAB_0050d8fc:
  FUN_00565dc0(param_1 + 1,param_2,&local_70);
  if (0 < (long)local_68 - (long)local_70) {
    uVar5 = ((long)local_68 - (long)local_70) + 1;
    puVar10 = local_70;
    do {
      uVar5 = uVar5 - 1;
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    } while (1 < uVar5);
  }
  if (local_70 != (undefined1 *)0x0) {
    local_68 = local_70;
    operator_delete(local_70);
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  lVar13 = *param_3;
  param_1[0xd] = param_3[1];
  param_1[0xc] = lVar13;
  param_1[0xe] = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_0050d9a4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050d9ac  FUN_0050d9ac =====

void FUN_0050d9ac(undefined8 *param_1)

{
  void *pvVar1;
  undefined1 *puVar2;
  ulong uVar3;
  
  pvVar1 = (void *)param_1[0xc];
  *param_1 = &PTR_FUN_00d1fc40;
  if (pvVar1 != (void *)0x0) {
    param_1[0xd] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_004fcc04(param_1 + 6,param_1[7]);
  puVar2 = (undefined1 *)param_1[2];
  if (0 < param_1[3] - (long)puVar2) {
    uVar3 = (param_1[3] - (long)puVar2) + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (1 < uVar3);
    puVar2 = (undefined1 *)param_1[2];
  }
  if (puVar2 != (undefined1 *)0x0) {
    param_1[3] = puVar2;
    operator_delete(puVar2);
    return;
  }
  return;
}


// ===== 0050da2c  FUN_0050da2c =====

void FUN_0050da2c(undefined8 *param_1)

{
  void *pvVar1;
  undefined1 *puVar2;
  ulong uVar3;
  
  pvVar1 = (void *)param_1[0xc];
  *param_1 = &PTR_FUN_00d1fc40;
  if (pvVar1 != (void *)0x0) {
    param_1[0xd] = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_004fcc04(param_1 + 6,param_1[7]);
  puVar2 = (undefined1 *)param_1[2];
  if (0 < param_1[3] - (long)puVar2) {
    uVar3 = (param_1[3] - (long)puVar2) + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (1 < uVar3);
    puVar2 = (undefined1 *)param_1[2];
  }
  if (puVar2 != (undefined1 *)0x0) {
    param_1[3] = puVar2;
    operator_delete(puVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 0050daa8  FUN_0050daa8 =====

void FUN_0050daa8(undefined8 *param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 *local_178;
  undefined1 *local_170;
  undefined1 *local_160;
  undefined1 *local_158;
  long local_58;
  undefined1 *puVar12;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0050dadc to 0050db2f has its CatchHandler @ 0050dd54 */
  FUN_004f0510(&local_178,1,
               "../../discord_common/native/third_party/libdave/cpp/src/mls_key_ratchet.cpp",0x16);
  FUN_00428964(&local_160,"Retrieving key for generation ",0x1e);
  FUN_0054bcd8(&local_160,param_3);
  FUN_00428964(&local_160," from HashRatchet",0x11);
  FUN_004f0604(&local_178);
                    /* try { // try from 0050db3c to 0050db47 has its CatchHandler @ 0050dc90 */
  FUN_005663d0(&local_178,param_2 + 8,param_3);
  puVar3 = local_170;
  puVar11 = local_178;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar6 = (long)local_170 - (long)local_178;
  if (uVar6 != 0) {
    if ((long)uVar6 < 0) {
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(param_1);
      }
      goto LAB_0050dc8c;
    }
                    /* try { // try from 0050db60 to 0050dc8b has its CatchHandler @ 0050dc9c */
    puVar4 = (undefined1 *)operator_new(uVar6);
    *param_1 = puVar4;
    param_1[2] = puVar4 + uVar6;
    puVar12 = puVar11;
    if ((uVar6 < 0x20) || ((ulong)((long)puVar4 - (long)puVar11) < 0x20)) {
LAB_0050dbcc:
      do {
        puVar11 = puVar12 + 1;
        puVar5 = puVar4 + 1;
        *puVar4 = *puVar12;
        puVar4 = puVar5;
        puVar12 = puVar11;
      } while (puVar11 != puVar3);
    }
    else {
      uVar7 = uVar6 & 0xffffffffffffffe0;
      puVar8 = (undefined8 *)(puVar4 + 0x10);
      puVar12 = puVar11 + uVar7;
      puVar5 = puVar4 + uVar7;
      puVar9 = (undefined8 *)(puVar11 + 0x10);
      uVar10 = uVar7;
      do {
        puVar2 = puVar9 + -1;
        uVar13 = puVar9[-2];
        uVar15 = puVar9[1];
        uVar14 = *puVar9;
        puVar9 = puVar9 + 4;
        uVar10 = uVar10 - 0x20;
        puVar8[-1] = *puVar2;
        puVar8[-2] = uVar13;
        puVar8[1] = uVar15;
        *puVar8 = uVar14;
        puVar8 = puVar8 + 4;
      } while (uVar10 != 0);
      puVar4 = puVar5;
      if (uVar6 != uVar7) goto LAB_0050dbcc;
    }
    param_1[1] = puVar5;
  }
  if (0 < (long)local_158 - (long)local_160) {
    uVar6 = ((long)local_158 - (long)local_160) + 1;
    puVar11 = local_160;
    do {
      uVar6 = uVar6 - 1;
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    } while (1 < uVar6);
  }
  if (local_160 != (undefined1 *)0x0) {
    local_158 = local_160;
    operator_delete(local_160);
  }
  if (0 < (long)local_170 - (long)local_178) {
    uVar6 = ((long)local_170 - (long)local_178) + 1;
    puVar11 = local_178;
    do {
      uVar6 = uVar6 - 1;
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    } while (1 < uVar6);
  }
  if (local_178 != (undefined1 *)0x0) {
    local_170 = local_178;
    operator_delete(local_178);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_0050dc8c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050dd58  FUN_0050dd58 =====

void FUN_0050dd58(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  puVar1 = (undefined1 *)param_1[3];
  if (0 < param_1[4] - (long)puVar1) {
    uVar2 = (param_1[4] - (long)puVar1) + 1;
    do {
      uVar2 = uVar2 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar2);
    puVar1 = (undefined1 *)param_1[3];
  }
  if (puVar1 != (undefined1 *)0x0) {
    param_1[4] = puVar1;
    operator_delete(puVar1);
  }
  puVar1 = (undefined1 *)*param_1;
  if (0 < param_1[1] - (long)puVar1) {
    uVar2 = (param_1[1] - (long)puVar1) + 1;
    do {
      uVar2 = uVar2 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar2);
    puVar1 = (undefined1 *)*param_1;
  }
  if (puVar1 != (undefined1 *)0x0) {
    param_1[1] = puVar1;
    operator_delete(puVar1);
    return;
  }
  return;
}


// ===== 0050dde8  FUN_0050dde8 =====

void FUN_0050dde8(long param_1)

{
                    /* try { // try from 0050ddf4 to 0050ddf7 has its CatchHandler @ 0050de00 */
  FUN_005666a8(param_1 + 8);
  return;
}


// ===== 0050de04  FUN_0050de04 =====

void FUN_0050de04(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 *puVar11;
  
  puVar10 = *(undefined1 **)(param_2 + 0x60);
  puVar1 = *(undefined1 **)(param_2 + 0x68);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = (long)puVar1 - (long)puVar10;
  if (uVar2 == 0) {
    return;
  }
  if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004f04ec(param_1);
  }
                    /* try { // try from 0050de30 to 0050dec7 has its CatchHandler @ 0050dec8 */
  puVar4 = (undefined1 *)operator_new(uVar2);
  *param_1 = puVar4;
  param_1[2] = puVar4 + uVar2;
  puVar11 = puVar10;
  if ((0x1f < uVar2) && (0x1f < (ulong)((long)puVar4 - (long)puVar10))) {
    uVar6 = uVar2 & 0xffffffffffffffe0;
    puVar7 = (undefined8 *)(puVar4 + 0x10);
    puVar11 = puVar10 + uVar6;
    puVar5 = puVar4 + uVar6;
    puVar8 = (undefined8 *)(puVar10 + 0x10);
    uVar9 = uVar6;
    do {
      puVar3 = puVar8 + -1;
      uVar12 = puVar8[-2];
      uVar14 = puVar8[1];
      uVar13 = *puVar8;
      puVar8 = puVar8 + 4;
      uVar9 = uVar9 - 0x20;
      puVar7[-1] = *puVar3;
      puVar7[-2] = uVar12;
      puVar7[1] = uVar14;
      *puVar7 = uVar13;
      puVar7 = puVar7 + 4;
    } while (uVar9 != 0);
    puVar4 = puVar5;
    if (uVar2 == uVar6) goto LAB_0050deac;
  }
  do {
    puVar10 = puVar11 + 1;
    puVar5 = puVar4 + 1;
    *puVar4 = *puVar11;
    puVar4 = puVar5;
    puVar11 = puVar10;
  } while (puVar10 != puVar1);
LAB_0050deac:
  param_1[1] = puVar5;
  return;
}


// ===== 0050decc  FUN_0050decc =====

long FUN_0050decc(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (0x7f < param_1) {
    lVar1 = 1;
    do {
      uVar2 = param_1 >> 0xe;
      lVar1 = lVar1 + 1;
      param_1 = param_1 >> 7;
    } while (uVar2 != 0);
    return lVar1;
  }
  return 1;
}


// ===== 0050defc  FUN_0050defc =====

ulong FUN_0050defc(long *param_1,byte *param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  uVar6 = 0;
  uVar3 = 0;
  pbVar4 = (byte *)*param_1;
  while ((pbVar4 != param_2 && (uVar6 < 0x39))) {
    bVar1 = *pbVar4;
    *param_1 = (long)(pbVar4 + 1);
    uVar2 = uVar6 & 0x3f;
    uVar6 = uVar6 + 7;
    uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
    pbVar4 = pbVar4 + 1;
    if (-1 < (char)bVar1) {
      return uVar3;
    }
  }
  if ((pbVar4 == param_2) || (1 < (ulong)*pbVar4)) {
    pbVar5 = (byte *)0x0;
    uVar3 = 0;
  }
  else {
    pbVar5 = pbVar4 + 1;
    uVar3 = (ulong)*pbVar4 << (uVar6 & 0x3f) | uVar3;
  }
  *param_1 = (long)pbVar5;
  return uVar3;
}


// ===== 0050df74  FUN_0050df74 =====

int FUN_0050df74(ulong param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_1 < 0x80) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    do {
      bVar1 = (byte)param_1;
      uVar3 = param_1 >> 0xe;
      param_1 = param_1 >> 7;
      *(byte *)(param_2 + uVar2) = bVar1 | 0x80;
      uVar2 = uVar2 + 1;
    } while (uVar3 != 0);
  }
  *(char *)(param_2 + (uVar2 & 0xffffffff)) = (char)param_1;
  return (int)uVar2 + 1;
}


// ===== 0050dfb0  FUN_0050dfb0 =====

undefined8 FUN_0050dfb0(void)

{
  return 1;
}


// ===== 0050dfb8  FUN_0050dfb8 =====

void FUN_0050dfb8(long param_1)

{
  FUN_0050ea60(param_1,*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 0050dfc0  FUN_0050dfc0 =====

void FUN_0050dfc0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  
  uVar1 = FUN_004f0b08(param_3);
  FUN_0050dff4(param_1,param_2,uVar1);
  return;
}


// ===== 0050dff4  FUN_0050dff4 =====

undefined1  [16] FUN_0050dff4(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char cVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined1 auVar13 [16];
  char local_1a4 [4];
  undefined1 local_1a0 [8];
  undefined8 local_198;
  void *local_190 [2];
  char local_179;
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [264];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_005467a4(&DAT_00d61128);
                    /* try { // try from 0050e038 to 0050e047 has its CatchHandler @ 0050e2bc */
  FUN_0050e6cc(local_190,param_2,param_3);
  if (DAT_00d61158 != (undefined8 *)0x0) {
    puVar10 = &DAT_00d61158;
    puVar12 = DAT_00d61158;
    do {
      cVar7 = FUN_0041d7a0(puVar12 + 4,local_190);
      puVar4 = puVar12 + 1;
      if (-1 < cVar7) {
        puVar10 = puVar12;
        puVar4 = puVar12;
      }
      puVar12 = (undefined8 *)*puVar4;
    } while (puVar12 != (undefined8 *)0x0);
    if ((undefined8 **)puVar10 != &DAT_00d61158) {
      uVar8 = FUN_0041d7a0(local_190,puVar10 + 4);
      auVar13._8_8_ = local_198;
      auVar13._0_8_ = local_1a0;
      if ((uVar8 >> 7 & 1) == 0) {
        auVar6 = *(undefined1 (*) [16])(puVar10 + 7);
        auVar5 = *(undefined1 (*) [16])(puVar10 + 7);
        if (puVar10[8] != 0) {
          plVar11 = (long *)(puVar10[8] + 8);
          do {
            cVar7 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar2) {
              *plVar11 = *plVar11 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
            _local_1a0 = auVar13;
            auVar5 = auVar6;
          } while (cVar7 != '\0');
        }
        goto joined_r0x0050e268;
      }
    }
  }
  local_1a0 = (undefined1  [8])0x0;
  local_198 = (long *)0x0;
  local_1a4[0] = '\0';
                    /* try { // try from 0050e0c8 to 0050e0db has its CatchHandler @ 0050e29c */
  _local_1a0 = FUN_00510348(param_1,local_190,param_3,local_1a4);
  plVar11 = SUB168(_local_1a0,8);
  if ((SUB168(_local_1a0,0) == 0) && (local_1a4[0] != '\0')) {
                    /* try { // try from 0050e0f0 to 0050e10b has its CatchHandler @ 0050e298 */
    FUN_004f0510(auStack_178,3,
                 "../../discord_common/native/third_party/libdave/cpp/src/mls/persisted_key_pair.cpp"
                 ,0x34);
                    /* try { // try from 0050e110 to 0050e11f has its CatchHandler @ 0050e288 */
    FUN_00428964(auStack_160,"Encountered error in native key handling in GetPersistedKeyPair",0x3f)
    ;
    FUN_004f0604(auStack_178);
  }
  else {
    if (SUB168(_local_1a0,0) == 0) {
                    /* try { // try from 0050e1a0 to 0050e1af has its CatchHandler @ 0050e280 */
      auVar13 = FUN_0050eb7c(param_1,local_190,param_3);
      _local_1a0 = auVar13;
      if (plVar11 != (long *)0x0) {
        plVar1 = plVar11 + 1;
        do {
          lVar9 = *plVar1;
          cVar7 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar2) {
            *plVar1 = lVar9 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          FUN_005466cc(plVar11);
        }
      }
    }
    if (local_1a0 != (undefined1  [8])0x0) {
                    /* try { // try from 0050e13c to 0050e153 has its CatchHandler @ 0050e284 */
      FUN_0050e92c(&DAT_00d61150,local_190,local_190,local_1a0);
      auVar5 = _local_1a0;
      goto joined_r0x0050e268;
    }
                    /* try { // try from 0050e1ec to 0050e207 has its CatchHandler @ 0050e27c */
    FUN_004f0510(auStack_178,3,
                 "../../discord_common/native/third_party/libdave/cpp/src/mls/persisted_key_pair.cpp"
                 ,0x3d);
                    /* try { // try from 0050e20c to 0050e21b has its CatchHandler @ 0050e278 */
    FUN_00428964(auStack_160,"Failed to get key in GetPersistedKeyPair",0x28);
    FUN_004f0604(auStack_178);
    plVar11 = local_198;
  }
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 1;
    do {
      lVar9 = *plVar1;
      cVar7 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar2) {
        *plVar1 = lVar9 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      FUN_005466cc(plVar11);
    }
    plVar11 = (long *)0x0;
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = plVar11;
joined_r0x0050e268:
  if (local_179 < '\0') {
    operator_delete(local_190[0]);
  }
  FUN_005467c8(&DAT_00d61128);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050e2e8  FUN_0050e2e8 =====

void FUN_0050e2e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  void *local_1b8 [2];
  char local_1a1;
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  undefined8 local_190;
  undefined1 local_180 [16];
  ushort local_170 [4];
  undefined1 *local_168;
  undefined1 *local_160;
  long local_48;
  undefined1 *puVar14;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  local_170[0] = FUN_004f0b5c(param_4);
                    /* try { // try from 0050e328 to 0050e333 has its CatchHandler @ 0050e5dc */
  local_180 = FUN_0050dff4(param_2,param_3,local_170[0]);
  lVar11 = local_180._0_8_;
  if (lVar11 == 0) {
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
                    /* try { // try from 0050e344 to 0050e357 has its CatchHandler @ 0050e5b4 */
    FUN_004d7ccc(local_1b8,param_3,&DAT_001ca603);
                    /* try { // try from 0050e358 to 0050e363 has its CatchHandler @ 0050e598 */
    FUN_005a2680(&local_1a0,local_1b8);
                    /* try { // try from 0050e368 to 0050e373 has its CatchHandler @ 0050e584 */
    FUN_005a228c(&local_168,&local_1a0,lVar11 + 0x18);
    if (0 < (long)puStack_198 - (long)local_1a0) {
      uVar9 = ((long)puStack_198 - (long)local_1a0) + 1;
      puVar8 = local_1a0;
      do {
        uVar9 = uVar9 - 1;
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      } while (1 < uVar9);
    }
    if (local_1a0 != (undefined1 *)0x0) {
      puStack_198 = local_1a0;
      operator_delete(local_1a0);
    }
    if (local_1a1 < '\0') {
      operator_delete(local_1b8[0]);
    }
    uVar7 = local_180._0_8_;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    uVar9 = *(long *)(local_180._0_8_ + 0x20) - *(long *)(local_180._0_8_ + 0x18);
    if (uVar9 != 0) {
      if ((long)uVar9 < 0) {
        if (*(long *)(lVar5 + 0x28) == local_48) {
                    /* try { // try from 0050e55c to 0050e563 has its CatchHandler @ 0050e5c0 */
                    /* WARNING: Subroutine does not return */
          FUN_004f04ec(param_1);
        }
        goto LAB_0050e564;
      }
                    /* try { // try from 0050e3d4 to 0050e3db has its CatchHandler @ 0050e5c0 */
      puVar8 = (undefined1 *)operator_new(uVar9);
      *param_1 = puVar8;
      param_1[2] = puVar8 + uVar9;
      puVar14 = *(undefined1 **)(uVar7 + 0x18);
      puVar2 = *(undefined1 **)(uVar7 + 0x20);
      if (puVar14 != puVar2) {
        uVar9 = (long)puVar2 - (long)puVar14;
        puVar10 = puVar8;
        if ((0x1f < uVar9) && (0x1f < (ulong)((long)puVar8 - (long)puVar14))) {
          uVar15 = uVar9 & 0xffffffffffffffe0;
          puVar16 = (undefined8 *)(puVar8 + 0x10);
          puVar8 = puVar8 + uVar15;
          puVar12 = (undefined8 *)(puVar14 + 0x10);
          uVar17 = uVar15;
          do {
            puVar6 = puVar12 + -1;
            uVar18 = puVar12[-2];
            uVar20 = puVar12[1];
            uVar19 = *puVar12;
            puVar12 = puVar12 + 4;
            uVar17 = uVar17 - 0x20;
            puVar16[-1] = *puVar6;
            puVar16[-2] = uVar18;
            puVar16[1] = uVar20;
            *puVar16 = uVar19;
            puVar16 = puVar16 + 4;
          } while (uVar17 != 0);
          puVar10 = puVar8;
          puVar14 = puVar14 + uVar15;
          if (uVar9 == uVar15) goto LAB_0050e488;
        }
        do {
          puVar13 = puVar14 + 1;
          puVar8 = puVar10 + 1;
          *puVar10 = *puVar14;
          puVar10 = puVar8;
          puVar14 = puVar13;
        } while (puVar13 != puVar2);
      }
LAB_0050e488:
      param_1[1] = puVar8;
    }
                    /* try { // try from 0050e48c to 0050e4a7 has its CatchHandler @ 0050e568 */
    FUN_00565458(&local_1a0,uVar7,local_170,&DAT_00d61110,&local_168);
    param_1[4] = puStack_198;
    param_1[3] = local_1a0;
    param_1[5] = local_190;
    if (0 < (long)local_160 - (long)local_168) {
      uVar9 = ((long)local_160 - (long)local_168) + 1;
      puVar8 = local_168;
      do {
        uVar9 = uVar9 - 1;
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      } while (1 < uVar9);
    }
    if (local_168 != (undefined1 *)0x0) {
      local_160 = local_168;
      operator_delete(local_168);
    }
  }
  if (local_180._8_8_ != 0) {
    uVar7 = local_180._8_8_;
    plVar1 = (long *)(local_180._8_8_ + 8);
    do {
      lVar11 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*(long *)local_180._8_8_ + 0x10))(local_180._8_8_);
      FUN_005466cc(uVar7);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
LAB_0050e564:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050e674  FUN_0050e674 =====

void FUN_0050e674(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
      return;
    }
  }
  return;
}


// ===== 0050e6cc  FUN_0050e6cc =====

/* WARNING: Removing unreachable block (ram,0x0050e81c) */
/* WARNING: Removing unreachable block (ram,0x0050e82c) */

void FUN_0050e6cc(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 ***local_b8;
  ulong uStack_b0;
  byte local_a1;
  undefined8 ***local_a0;
  ulong uStack_98;
  byte local_89;
  void *local_88 [2];
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004d7ccc(local_88,param_2,&DAT_001b07f5);
                    /* try { // try from 0050e708 to 0050e713 has its CatchHandler @ 0050e91c */
  FUN_005490bc(&local_a0,param_3);
  ppppuVar2 = (undefined8 ****)local_a0;
  if (-1 < (char)local_89) {
    uStack_98 = (ulong)local_89;
    ppppuVar2 = &local_a0;
  }
                    /* try { // try from 0050e72c to 0050e733 has its CatchHandler @ 0050e8fc */
  puVar3 = (undefined8 *)FUN_00547cac(local_88,ppppuVar2,uStack_98);
  local_60 = puVar3[2];
  uStack_68 = puVar3[1];
  local_70 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
                    /* try { // try from 0050e74c to 0050e75f has its CatchHandler @ 0050e8dc */
  puVar3 = (undefined8 *)FUN_00547cac(&local_70,&DAT_001b07f5,1);
  local_40 = puVar3[2];
  uStack_48 = puVar3[1];
  local_50 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
                    /* try { // try from 0050e778 to 0050e787 has its CatchHandler @ 0050e8bc */
  FUN_0054923c(&local_b8,1);
  ppppuVar2 = (undefined8 ****)local_b8;
  if (-1 < (char)local_a1) {
    uStack_b0 = (ulong)local_a1;
    ppppuVar2 = &local_b8;
  }
                    /* try { // try from 0050e7a0 to 0050e7a7 has its CatchHandler @ 0050e858 */
  puVar3 = (undefined8 *)FUN_00547cac(&local_50,ppppuVar2,uStack_b0);
  uVar4 = puVar3[2];
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  param_1[2] = uVar4;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  if ((char)local_a1 < '\0') {
    operator_delete(local_b8);
  }
  if ((char)local_89 < '\0') {
    operator_delete(local_a0);
  }
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0050e92c  FUN_0050e92c =====

undefined1  [16]
FUN_0050e92c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  
  plVar8 = (long *)param_1[1];
  plVar9 = param_1 + 1;
  while (plVar10 = plVar9, plVar8 != (long *)0x0) {
    while( true ) {
      plVar10 = plVar8;
      uVar4 = FUN_0041d7a0(param_2,plVar10 + 4);
      if ((uVar4 >> 7 & 1) != 0) break;
      uVar4 = FUN_0041d7a0(plVar10 + 4,param_2);
      if ((uVar4 >> 7 & 1) == 0) {
        puVar5 = (undefined8 *)*plVar9;
        if (puVar5 == (undefined8 *)0x0) goto LAB_0050e9ac;
        uVar7 = 0;
        goto LAB_0050ea20;
      }
      plVar9 = plVar10 + 1;
      plVar8 = (long *)*plVar9;
      if ((long *)*plVar9 == (long *)0x0) goto LAB_0050e9ac;
    }
    plVar9 = plVar10;
    plVar8 = (long *)*plVar10;
  }
LAB_0050e9ac:
  puVar5 = (undefined8 *)operator_new(0x48);
                    /* try { // try from 0050e9bc to 0050e9c3 has its CatchHandler @ 0050ea4c */
  FUN_004c55b4(puVar5 + 4,param_3);
  lVar1 = param_4[1];
  puVar5[7] = *param_4;
  puVar5[8] = lVar1;
  if (lVar1 != 0) {
    plVar8 = (long *)(lVar1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = plVar10;
  *plVar9 = (long)puVar5;
  puVar6 = puVar5;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    puVar6 = (undefined8 *)*plVar9;
  }
  FUN_0041dcd0(param_1[1],puVar6);
  uVar7 = 1;
  param_1[2] = param_1[2] + 1;
LAB_0050ea20:
  auVar11._8_8_ = uVar7;
  auVar11._0_8_ = puVar5;
  return auVar11;
}


// ===== 0050ea60  FUN_0050ea60 =====

void FUN_0050ea60(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_0050ea60(param_1,*param_2);
  FUN_0050ea60(param_1,param_2[1]);
  plVar5 = (long *)param_2[8];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_005466cc(plVar5);
      cVar2 = *(char *)((long)param_2 + 0x37);
      goto joined_r0x0050eab0;
    }
  }
  cVar2 = *(char *)((long)param_2 + 0x37);
joined_r0x0050eab0:
  if (cVar2 < '\0') {
    operator_delete((void *)param_2[4]);
  }
  operator_delete(param_2);
  return;
}


// ===== 0050eaf4  _INIT_10 =====

void _INIT_10(void)

{
  FUN_004a3cf4(&DAT_00d61110,"DiscordSelfSignature");
  __cxa_atexit(PTR_FUN_00d51c00,&DAT_00d61110,&PTR_LOOP_00d19390);
  __cxa_atexit(PTR_FUN_00d51ac8,&DAT_00d61128,&PTR_LOOP_00d19390);
  DAT_00d61160 = 0;
  DAT_00d61158 = 0;
  DAT_00d61150 = &DAT_00d61158;
  __cxa_atexit(FUN_0050dfb8,&DAT_00d61150,&PTR_LOOP_00d19390);
  return;
}


// ===== 0050eb7c  FUN_0050eb7c =====

undefined1  [16] FUN_0050eb7c(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  undefined8 *****pppppuVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  int __fd;
  char *pcVar6;
  size_t sVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 *****pppppuVar10;
  undefined4 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auVar15 [16];
  char local_378;
  undefined7 uStack_377;
  ulong uStack_370;
  undefined7 local_368;
  byte bStack_361;
  undefined8 ****local_360 [2];
  char local_349;
  int local_348 [2];
  long *local_340;
  void *local_338;
  ulong local_330;
  byte local_321;
  void *local_320;
  ulong uStack_318;
  long local_310;
  undefined8 ****local_300;
  undefined8 ****ppppuStack_2f8;
  ulong local_2f0;
  undefined1 *puStack_2e8;
  undefined1 *local_2e0;
  undefined8 local_2d8;
  undefined8 ****local_2d0 [2];
  ulong local_2c0;
  undefined1 *local_2b8;
  undefined1 *puStack_2b0;
  undefined8 local_2a8;
  void *local_278;
  char local_261;
  undefined1 auStack_250 [160];
  undefined8 ****local_1b0 [2];
  ulong local_1a0;
  undefined1 *local_198;
  undefined1 *puStack_190;
  undefined8 local_188;
  undefined1 auStack_f8 [160];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  puStack_2e8 = (undefined1 *)0x0;
  local_2f0 = 0;
  local_2d8 = 0;
  local_2e0 = (undefined1 *)0x0;
  ppppuStack_2f8 = (undefined8 *****)0x0;
  local_300 = (undefined8 *****)0x0;
  local_320 = (void *)0x0;
  uStack_318 = 0;
  local_310 = 0;
                    /* try { // try from 0050ebc4 to 0050ebcb has its CatchHandler @ 0050f608 */
  FUN_0050f660(&local_338);
  if (-1 < (char)local_321) {
    local_330 = (ulong)local_321;
  }
  if (local_330 == 0) {
                    /* try { // try from 0050ec80 to 0050ec9b has its CatchHandler @ 0050f5f8 */
    FUN_004f0510(local_1b0,3,
                 "../../discord_common/native/third_party/libdave/cpp/src/mls/detail/persisted_key_pair_generic.cpp"
                 ,0x4d);
                    /* try { // try from 0050eca0 to 0050ecaf has its CatchHandler @ 0050f5f4 */
    FUN_00428964(&local_198,"Failed to determine key storage directory in GetPersistedKeyPair",0x40)
    ;
  }
  else {
    local_348[0] = 0;
    local_340 = (long *)FUN_00549d28();
                    /* try { // try from 0050ebf0 to 0050ebfb has its CatchHandler @ 0050f600 */
    FUN_0051bca4(&local_338,local_348);
    if (local_348[0] == 0) {
                    /* try { // try from 0050ed88 to 0050ed9b has its CatchHandler @ 0050f58c */
      FUN_004d7ccc(local_2d0,param_2,&DAT_001caa1b);
      local_1a0 = local_2c0;
      local_1b0[1] = local_2d0[1];
      local_1b0[0] = local_2d0[0];
      local_2d0[0] = (undefined8 *****)0x0;
      local_2d0[1] = (undefined8 *****)0x0;
      local_2c0 = 0;
                    /* try { // try from 0050edb4 to 0050edbf has its CatchHandler @ 0050f564 */
      FUN_004c55b4(local_360,&local_338);
                    /* try { // try from 0050edc0 to 0050edcb has its CatchHandler @ 0050f530 */
      FUN_004b1f38(local_360,local_1b0);
      if ((long)local_1a0 < 0) {
        operator_delete(local_1b0[0]);
      }
      if ((long)local_2c0 < 0) {
        operator_delete(local_2d0[0]);
      }
                    /* try { // try from 0050eddc to 0050edeb has its CatchHandler @ 0050f590 */
      FUN_0051c50c(local_1b0,local_360,0);
      if (((char)local_1b0[0] == '\0') || ((char)local_1b0[0] == -1)) {
                    /* try { // try from 0050ee00 to 0050ee0b has its CatchHandler @ 0050f524 */
        FUN_005650ec(local_1b0,param_3);
        if ((undefined8 *****)local_300 != (undefined8 *****)0x0) {
          ppppuStack_2f8 = local_300;
          operator_delete(local_300);
        }
        local_2f0 = local_1a0;
        ppppuStack_2f8 = local_1b0[1];
        local_300 = local_1b0[0];
        local_1b0[0] = (undefined8 *****)0x0;
        local_1b0[1] = (undefined8 *****)0x0;
        local_1a0 = 0;
        if (puStack_2e8 != (undefined1 *)0x0) {
          local_2e0 = puStack_2e8;
          operator_delete(puStack_2e8);
        }
        local_2d8 = local_188;
        local_2e0 = puStack_190;
        puStack_2e8 = local_198;
        local_198 = (undefined1 *)0x0;
        puStack_190 = (undefined1 *)0x0;
        local_188 = 0;
        if (0 < (long)local_1b0[1] - (long)local_1b0[0]) {
          uVar12 = ((long)local_1b0[1] - (long)local_1b0[0]) + 1;
          pppppuVar10 = (undefined8 *****)local_1b0[0];
          do {
            uVar12 = uVar12 - 1;
            *(undefined1 *)pppppuVar10 = 0;
            pppppuVar10 = (undefined8 *****)((long)pppppuVar10 + 1);
          } while (1 < uVar12);
        }
        if ((undefined8 *****)local_1b0[0] != (undefined8 *****)0x0) {
          local_1b0[1] = local_1b0[0];
          operator_delete(local_1b0[0]);
        }
                    /* try { // try from 0050ee94 to 0050eea3 has its CatchHandler @ 0050f520 */
        FUN_00565a44(local_2d0,&local_300,param_3);
                    /* try { // try from 0050eea4 to 0050eeaf has its CatchHandler @ 0050f510 */
        FUN_004c55b4(&local_378,local_360);
                    /* try { // try from 0050eeb0 to 0050eec7 has its CatchHandler @ 0050f50c */
        FUN_00547cac(&local_378,&DAT_001caa20,4);
        pcVar6 = (char *)CONCAT71(uStack_377,local_378);
        if (-1 < (char)bStack_361) {
          pcVar6 = &local_378;
        }
                    /* try { // try from 0050eed8 to 0050eee7 has its CatchHandler @ 0050f508 */
        __fd = open(pcVar6,0x88241,0x180);
        if (__fd < 0) {
                    /* try { // try from 0050f070 to 0050f08b has its CatchHandler @ 0050f4d8 */
          FUN_004f0510(local_1b0,3,
                       "../../discord_common/native/third_party/libdave/cpp/src/mls/detail/persisted_key_pair_generic.cpp"
                       ,0x80);
                    /* try { // try from 0050f090 to 0050f10b has its CatchHandler @ 0050f5a0 */
          FUN_00428964(&local_198,"Failed to open output file in GetPersistedKeyPair: ",0x33);
          puVar11 = (undefined4 *)__errno();
          FUN_0054bae0(&local_198,*puVar11);
          FUN_00428964(&local_198,&DAT_0019fcd5,1);
          pcVar6 = (char *)CONCAT71(uStack_377,local_378);
          if (-1 < (char)bStack_361) {
            uStack_370 = (ulong)bStack_361;
            pcVar6 = &local_378;
          }
          FUN_0050ffe8(&local_198,pcVar6,pcVar6 + uStack_370,0x22,0x5c);
          FUN_00428964(&local_198,&DAT_001ca519,1);
LAB_0050f10c:
          FUN_004f0604(local_1b0);
          bVar3 = false;
        }
        else {
          pppppuVar10 = (undefined8 *****)local_2d0[1];
          pppppuVar1 = (undefined8 *****)local_2d0[0];
          if (-1 < (long)local_2c0) {
            pppppuVar10 = (undefined8 *****)(local_2c0 >> 0x38);
            pppppuVar1 = local_2d0;
          }
                    /* try { // try from 0050ef0c to 0050ef1f has its CatchHandler @ 0050f528 */
          pppppuVar10 = (undefined8 *****)write(__fd,pppppuVar1,(size_t)pppppuVar10);
          close(__fd);
          if ((long)pppppuVar10 < 0) {
LAB_0050f028:
                    /* try { // try from 0050f028 to 0050f043 has its CatchHandler @ 0050f4fc */
            FUN_004f0510(local_1b0,3,
                         "../../discord_common/native/third_party/libdave/cpp/src/mls/detail/persisted_key_pair_generic.cpp"
                         ,0x8d);
                    /* try { // try from 0050f048 to 0050f06b has its CatchHandler @ 0050f504 */
            FUN_00428964(&local_198,"Failed to write output file in GetPersistedKeyPair: ",0x34);
            puVar11 = (undefined4 *)__errno();
            FUN_0054bae0(&local_198,*puVar11);
            goto LAB_0050f10c;
          }
          pppppuVar1 = (undefined8 *****)local_2d0[1];
          if (-1 < (long)local_2c0) {
            pppppuVar1 = (undefined8 *****)(local_2c0 >> 0x38);
          }
          if (pppppuVar10 != pppppuVar1) goto LAB_0050f028;
                    /* try { // try from 0050ef40 to 0050ef4f has its CatchHandler @ 0050f4b8 */
          FUN_0051c414(&local_378,local_360,local_348);
          if (local_348[0] != 0) {
                    /* try { // try from 0050ef58 to 0050ef73 has its CatchHandler @ 0050f4b0 */
            FUN_004f0510(local_1b0,3,
                         "../../discord_common/native/third_party/libdave/cpp/src/mls/detail/persisted_key_pair_generic.cpp"
                         ,0x94);
                    /* try { // try from 0050ef78 to 0050ef93 has its CatchHandler @ 0050f4bc */
            FUN_00428964(&local_198,"Failed to rename output file in GetPersistedKeyPair: ",0x35);
            FUN_0050f858(local_1b0,local_348);
            goto LAB_0050f10c;
          }
          bVar3 = true;
        }
        if ((char)bStack_361 < '\0') {
          operator_delete((void *)CONCAT71(uStack_377,local_378));
        }
        if ((long)local_2c0 < 0) {
          operator_delete(local_2d0[0]);
          if (bVar3) goto LAB_0050f378;
          goto LAB_0050f3e0;
        }
        if (!bVar3) goto LAB_0050f3e0;
LAB_0050f378:
        puVar5 = local_2e0;
        puVar9 = puStack_2e8;
        if (puStack_2e8 == local_2e0) goto LAB_0050f3e0;
                    /* try { // try from 0050f384 to 0050f38b has its CatchHandler @ 0050f590 */
        puVar13 = (undefined8 *)operator_new(0x48);
        *puVar13 = &PTR_FUN_00d1f7d8;
        puVar13[1] = 0;
        puVar13[2] = 0;
        puVar14 = puVar13 + 3;
        puVar13[4] = ppppuStack_2f8;
        *puVar14 = local_300;
        puVar13[5] = local_2f0;
        puVar13[6] = puVar9;
        local_300 = (undefined8 *****)0x0;
        ppppuStack_2f8 = (undefined8 *****)0x0;
        local_2f0 = 0;
        puVar13[7] = puVar5;
        puVar13[8] = local_2d8;
        local_2e0 = (undefined1 *)0x0;
        local_2d8 = 0;
        puStack_2e8 = (undefined1 *)0x0;
      }
      else {
        pppppuVar10 = (undefined8 *****)local_360[0];
        if (-1 < local_349) {
          pppppuVar10 = local_360;
        }
                    /* try { // try from 0050efc8 to 0050efd7 has its CatchHandler @ 0050f500 */
        FUN_0050faf8(local_1b0,pppppuVar10,0xc);
        if ((*(byte *)((long)&puStack_190 + (long)local_1b0[0][-3]) & 5) == 0) {
                    /* try { // try from 0050f148 to 0050f153 has its CatchHandler @ 0050f4b4 */
          FUN_0050f8fc(local_2d0);
                    /* try { // try from 0050f160 to 0050f17b has its CatchHandler @ 0050f4dc */
          FUN_0054c9c0(&local_2c0,&local_1a0);
          FUN_0054d504(&local_378,&local_2b8);
          if (local_310 < 0) {
            operator_delete(local_320);
          }
          puVar4 = PTR_PTR_00d51b18;
          local_320 = (void *)CONCAT71(uStack_377,local_378);
          local_378 = '\0';
          local_310 = CONCAT17(bStack_361,local_368);
          bStack_361 = 0;
          local_2d0[0] = *(undefined8 *****)PTR_PTR_00d51b18;
          uStack_318 = uStack_370;
          uVar12 = *(ulong *)(PTR_PTR_00d51b18 + 0x48);
          *(undefined8 *)((long)local_2d0 + (long)((undefined8 *****)local_2d0[0])[-3]) =
               *(undefined8 *)(PTR_PTR_00d51b18 + 0x40);
          local_2b8 = PTR_DAT_00d51b20 + 0x10;
          local_2c0 = uVar12;
          if (local_261 < '\0') {
            operator_delete(local_278);
          }
          FUN_0054a488(&local_2b8);
          FUN_0054ce58(local_2d0,puVar4 + 8);
          thunk_FUN_00520cf4(auStack_250);
          if ((*(byte *)((long)&puStack_190 + (long)local_1b0[0][-3]) & 5) == 0) {
                    /* try { // try from 0050f2ac to 0050f2b7 has its CatchHandler @ 0050f3fc */
            FUN_005656d0(local_2d0,param_3,&local_320);
            if ((undefined8 *****)local_300 != (undefined8 *****)0x0) {
              ppppuStack_2f8 = local_300;
              operator_delete(local_300);
            }
            local_2f0 = local_2c0;
            ppppuStack_2f8 = local_2d0[1];
            local_300 = local_2d0[0];
            local_2d0[0] = (undefined8 *****)0x0;
            local_2d0[1] = (undefined8 *****)0x0;
            local_2c0 = 0;
            if (puStack_2e8 != (undefined1 *)0x0) {
              local_2e0 = puStack_2e8;
              operator_delete(puStack_2e8);
            }
            local_2d8 = local_2a8;
            local_2e0 = puStack_2b0;
            puStack_2e8 = local_2b8;
            puStack_2b0 = (undefined1 *)0x0;
            local_2a8 = 0;
            local_2b8 = (undefined1 *)0x0;
            if (0 < (long)local_2d0[1] - (long)local_2d0[0]) {
              uVar12 = ((long)local_2d0[1] - (long)local_2d0[0]) + 1;
              pppppuVar10 = (undefined8 *****)local_2d0[0];
              do {
                uVar12 = uVar12 - 1;
                *(undefined1 *)pppppuVar10 = 0;
                pppppuVar10 = (undefined8 *****)((long)pppppuVar10 + 1);
              } while (1 < uVar12);
            }
            if ((undefined8 *****)local_2d0[0] != (undefined8 *****)0x0) {
              local_2d0[1] = local_2d0[0];
              operator_delete(local_2d0[0]);
            }
            puVar4 = PTR_PTR_00d51c38;
            local_1b0[0] = *(undefined8 *****)PTR_PTR_00d51c38;
            *(undefined8 *)((long)local_1b0 + (long)((undefined8 *****)local_1b0[0])[-3]) =
                 *(undefined8 *)(PTR_PTR_00d51c38 + 0x18);
            FUN_0054dfb0(&local_1a0);
            FUN_0054a7a4(local_1b0,puVar4 + 8);
            thunk_FUN_00520cf4(auStack_f8);
            goto LAB_0050f378;
          }
                    /* try { // try from 0050f220 to 0050f23b has its CatchHandler @ 0050f4ac */
          FUN_004f0510(local_2d0,3,
                       "../../discord_common/native/third_party/libdave/cpp/src/mls/detail/persisted_key_pair_generic.cpp"
                       ,100);
                    /* try { // try from 0050f240 to 0050f24f has its CatchHandler @ 0050f4a8 */
          FUN_00428964(&local_2b8,"Failed to read key in GetPersistedKeyPair",0x29);
        }
        else {
                    /* try { // try from 0050eff4 to 0050f00f has its CatchHandler @ 0050f4d0 */
          FUN_004f0510(local_2d0,3,
                       "../../discord_common/native/third_party/libdave/cpp/src/mls/detail/persisted_key_pair_generic.cpp"
                       ,0x5e);
                    /* try { // try from 0050f014 to 0050f023 has its CatchHandler @ 0050f4c0 */
          FUN_00428964(&local_2b8,"Failed to open key in GetPersistedKeyPair",0x29);
        }
        FUN_004f0604(local_2d0);
        puVar4 = PTR_PTR_00d51c38;
        local_1b0[0] = *(undefined8 *****)PTR_PTR_00d51c38;
        *(undefined8 *)((long)local_1b0 + (long)((undefined8 *****)local_1b0[0])[-3]) =
             *(undefined8 *)(PTR_PTR_00d51c38 + 0x18);
        FUN_0054dfb0(&local_1a0);
        FUN_0054a7a4(local_1b0,puVar4 + 8);
        thunk_FUN_00520cf4(auStack_f8);
LAB_0050f3e0:
        puVar13 = (undefined8 *)0x0;
        puVar14 = (undefined8 *)0x0;
      }
      if (local_349 < '\0') {
        operator_delete(local_360[0]);
      }
      goto LAB_0050ecc0;
    }
                    /* try { // try from 0050ec04 to 0050ec1f has its CatchHandler @ 0050f5fc */
    FUN_004f0510(local_1b0,3,
                 "../../discord_common/native/third_party/libdave/cpp/src/mls/detail/persisted_key_pair_generic.cpp"
                 ,0x54);
                    /* try { // try from 0050ec24 to 0050ec37 has its CatchHandler @ 0050f610 */
    FUN_00428964(&local_198,"Failed to create key storage directory in GetPersistedKeyPair: ",0x3f);
    pcVar6 = (char *)(**(code **)(*local_340 + 0x10))();
    sVar7 = strlen(pcVar6);
                    /* try { // try from 0050ec54 to 0050ec7b has its CatchHandler @ 0050f610 */
    uVar8 = FUN_00428964(&local_198,pcVar6,sVar7);
    local_2d0[0] = (undefined8 ****)CONCAT71(local_2d0[0]._1_7_,0x3a);
    uVar8 = FUN_00428964(uVar8,local_2d0,1);
    FUN_0054bae0(uVar8,local_348[0]);
  }
  FUN_004f0604(local_1b0);
  puVar13 = (undefined8 *)0x0;
  puVar14 = (undefined8 *)0x0;
LAB_0050ecc0:
  if ((char)local_321 < '\0') {
    operator_delete(local_338);
  }
  if (local_310 < 0) {
    operator_delete(local_320);
  }
  if (0 < (long)local_2e0 - (long)puStack_2e8) {
    uVar12 = ((long)local_2e0 - (long)puStack_2e8) + 1;
    puVar9 = puStack_2e8;
    do {
      uVar12 = uVar12 - 1;
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    } while (1 < uVar12);
  }
  if (puStack_2e8 != (undefined1 *)0x0) {
    local_2e0 = puStack_2e8;
    operator_delete(puStack_2e8);
  }
  if (0 < (long)ppppuStack_2f8 - (long)local_300) {
    uVar12 = ((long)ppppuStack_2f8 - (long)local_300) + 1;
    pppppuVar10 = (undefined8 *****)local_300;
    do {
      uVar12 = uVar12 - 1;
      *(undefined1 *)pppppuVar10 = 0;
      pppppuVar10 = (undefined8 *****)((long)pppppuVar10 + 1);
    } while (1 < uVar12);
  }
  if ((undefined8 *****)local_300 != (undefined8 *****)0x0) {
    ppppuStack_2f8 = local_300;
    operator_delete(local_300);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    auVar15._8_8_ = puVar13;
    auVar15._0_8_ = puVar14;
    return auVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050f660  FUN_0050f660 =====

void FUN_0050f660(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  void *local_1c8;
  undefined8 uStack_1c0;
  long local_1b8;
  void *local_1b0;
  undefined8 uStack_1a8;
  long local_1a0;
  void *local_198 [2];
  long local_188 [21];
  undefined1 auStack_e0 [152];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_1b0 = (void *)0x0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  local_198[0] = (void *)0x0;
  local_198[1] = (void *)0x0;
  local_188[0] = 0;
                    /* try { // try from 0050f694 to 0050f6a7 has its CatchHandler @ 0050f7f8 */
  FUN_004b2050(local_198,"/data/data","");
  uStack_1a8 = local_198[1];
  local_1b0 = local_198[0];
  local_1a0 = local_188[0];
                    /* try { // try from 0050f6b8 to 0050f6cb has its CatchHandler @ 0050f7f0 */
  FUN_0050faf8(local_198,"/proc/self/cmdline",8);
  local_1c8 = (void *)0x0;
  uStack_1c0 = 0;
  local_1b8 = 0;
                    /* try { // try from 0050f6d4 to 0050f6ef has its CatchHandler @ 0050f810 */
  FUN_0050fc0c(local_198,&local_1c8,0);
  FUN_0050fe90(&local_1b0,&local_1c8);
  if (local_1b8 < 0) {
    operator_delete(local_1c8);
  }
  puVar2 = PTR_PTR_00d51c38;
  local_198[0] = *(void **)PTR_PTR_00d51c38;
  *(undefined8 *)((long)local_198 + *(long *)((long)local_198[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_00d51c38 + 0x18);
  FUN_0054dfb0(local_188);
  FUN_0054a7a4(local_198,puVar2 + 8);
  thunk_FUN_00520cf4(auStack_e0);
  local_198[0] = (void *)0x0;
  local_198[1] = (void *)0x0;
  local_188[0] = 0;
                    /* try { // try from 0050f744 to 0050f757 has its CatchHandler @ 0050f7ec */
  FUN_004b2050(local_198,"Discord Key Storage","");
                    /* try { // try from 0050f758 to 0050f763 has its CatchHandler @ 0050f7dc */
  FUN_004c55b4(param_1,&local_1b0);
                    /* try { // try from 0050f764 to 0050f76f has its CatchHandler @ 0050f7c4 */
  FUN_004b1f38(param_1,local_198);
  if (local_188[0] < 0) {
    operator_delete(local_198[0]);
  }
  if (local_1a0 < 0) {
    operator_delete(local_1b0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050f858  FUN_0050f858 =====

long FUN_0050f858(long param_1,undefined4 *param_2)

{
  long lVar1;
  char *__s;
  size_t sVar2;
  undefined8 uVar3;
  undefined1 local_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __s = (char *)(**(code **)(**(long **)(param_2 + 2) + 0x10))();
  sVar2 = strlen(__s);
  uVar3 = FUN_00428964(param_1 + 0x18,__s,sVar2);
  local_4c[0] = 0x3a;
  uVar3 = FUN_00428964(uVar3,local_4c,1);
  FUN_0054bae0(uVar3,*param_2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050f8fc  FUN_0050f8fc =====

void FUN_0050f8fc(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  puVar4 = PTR_PTR_00d51b18;
  puVar3 = PTR_DAT_00d51b10;
  puVar1 = PTR_DAT_00d51b10 + 0x68;
  puVar2 = PTR_DAT_00d51b10 + 0x40;
  lVar5 = *(long *)(PTR_PTR_00d51b18 + 0x10);
  uVar6 = *(undefined8 *)(PTR_PTR_00d51b18 + 0x18);
  param_1[0x10] = (long)puVar1;
  param_1[2] = (long)puVar2;
  *param_1 = lVar5;
  lVar5 = *(long *)(lVar5 + -0x18);
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + lVar5) = uVar6;
  lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 0050f96c to 0050f977 has its CatchHandler @ 0050fa18 */
  FUN_00520e8c(lVar5,param_1 + 3);
  lVar7 = *(long *)(puVar4 + 0x20);
  *(undefined8 *)(lVar5 + 0x88) = 0;
  lVar8 = *(long *)(puVar4 + 8);
  *(undefined4 *)(lVar5 + 0x90) = 0xffffffff;
  uVar6 = *(undefined8 *)(puVar4 + 0x28);
  param_1[2] = lVar7;
  *(undefined8 *)((long)(param_1 + 2) + *(long *)(lVar7 + -0x18)) = uVar6;
  uVar6 = *(undefined8 *)(puVar4 + 0x30);
  *param_1 = lVar8;
  *(undefined8 *)((long)param_1 + *(long *)(lVar8 + -0x18)) = uVar6;
  *param_1 = (long)(puVar3 + 0x18);
  param_1[0x10] = (long)puVar1;
  param_1[2] = (long)puVar2;
                    /* try { // try from 0050f9bc to 0050f9c3 has its CatchHandler @ 0050fa04 */
  FUN_0054a4c8(param_1 + 3);
  puVar1 = PTR_DAT_00d51b20;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[3] = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0x18;
  return;
}


// ===== 0050fa2c  FUN_0050fa2c =====

void FUN_0050fa2c(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar4 = PTR_PTR_00d51b18;
  lVar5 = *(long *)PTR_PTR_00d51b18;
  uVar2 = *(undefined8 *)(PTR_PTR_00d51b18 + 0x40);
  lVar3 = *(long *)(PTR_PTR_00d51b18 + 0x48);
  puVar1 = PTR_DAT_00d51b20 + 0x10;
  *param_1 = lVar5;
  *(undefined8 *)((long)param_1 + *(long *)(lVar5 + -0x18)) = uVar2;
  param_1[3] = (long)puVar1;
  param_1[2] = lVar3;
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    operator_delete((void *)param_1[0xb]);
  }
  FUN_0054a488(param_1 + 3);
  FUN_0054ce58(param_1,puVar4 + 8);
  thunk_FUN_00520cf4(param_1 + 0x10);
  return;
}


// ===== 0050faac  FUN_0050faac =====

void FUN_0050faac(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_00d51c38;
  lVar2 = *(long *)PTR_PTR_00d51c38;
  uVar3 = *(undefined8 *)(PTR_PTR_00d51c38 + 0x18);
  *param_1 = lVar2;
  *(undefined8 *)((long)param_1 + *(long *)(lVar2 + -0x18)) = uVar3;
  FUN_0054dfb0(param_1 + 2);
  FUN_0054a7a4(param_1,puVar1 + 8);
  thunk_FUN_00520cf4(param_1 + 0x17);
  return;
}


// ===== 0050faf8  FUN_0050faf8 =====

void FUN_0050faf8(long *param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar4 = PTR_DAT_00d51c30;
  plVar1 = param_1 + 2;
  puVar2 = PTR_DAT_00d51c30 + 0x40;
  lVar5 = *(long *)(PTR_PTR_00d51c38 + 8);
  uVar3 = *(undefined8 *)(PTR_PTR_00d51c38 + 0x10);
  param_1[0x17] = (long)puVar2;
  *param_1 = lVar5;
  lVar5 = *(long *)(lVar5 + -0x18);
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + lVar5) = uVar3;
  lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 0050fb60 to 0050fb6b has its CatchHandler @ 0050fbdc */
  FUN_00520e8c(lVar5,plVar1);
  *(undefined8 *)(lVar5 + 0x88) = 0;
  param_1[0x17] = (long)puVar2;
  *(undefined4 *)(lVar5 + 0x90) = 0xffffffff;
  *param_1 = (long)(puVar4 + 0x18);
                    /* try { // try from 0050fb84 to 0050fb8b has its CatchHandler @ 0050fbd4 */
  FUN_0054de58(plVar1);
                    /* try { // try from 0050fb90 to 0050fbb7 has its CatchHandler @ 0050fbe4 */
  lVar5 = FUN_0054dcd4(plVar1,param_2,param_3 | 8);
  if (lVar5 == 0) {
    lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
    FUN_00520d98(lVar5,*(uint *)(lVar5 + 0x20) | 4);
  }
  return;
}


// ===== 0050fc0c  FUN_0050fc0c =====

long * FUN_0050fc0c(long *param_1,undefined8 *param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  char local_60 [8];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_0054a81c(local_60,param_1,1);
  if (local_60[0] != '\0') {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      *(undefined1 *)*param_2 = 0;
      param_2[1] = 0;
    }
    else {
      *(undefined1 *)param_2 = 0;
      *(undefined1 *)((long)param_2 + 0x17) = 0;
    }
    lVar9 = 0;
    do {
      plVar5 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28);
      pbVar1 = (byte *)plVar5[3];
      if (pbVar1 == (byte *)plVar5[4]) {
                    /* try { // try from 0050fcbc to 0050fcbf has its CatchHandler @ 0050fe14 */
        uVar4 = (**(code **)(*plVar5 + 0x50))();
        if (uVar4 == 0xffffffff) {
          uVar4 = 6;
          if (lVar9 != 0) {
            uVar4 = 2;
          }
          goto LAB_0050fd94;
        }
      }
      else {
        plVar5[3] = (long)(pbVar1 + 1);
        uVar4 = (uint)*pbVar1;
      }
      if ((uVar4 & 0xff) == (param_3 & 0xff)) {
        uVar4 = 0;
        goto LAB_0050fd94;
      }
      bVar2 = *(byte *)((long)param_2 + 0x17);
      if ((char)bVar2 < '\0') {
        uVar6 = param_2[1];
        uVar8 = (param_2[2] & 0x7fffffffffffffff) - 1;
        if (uVar6 == uVar8) goto LAB_0050fd08;
LAB_0050fd2c:
        param_2[1] = uVar6 + 1;
        puVar7 = (undefined8 *)*param_2;
      }
      else {
        if (bVar2 == 0x16) {
          uVar8 = 0x16;
LAB_0050fd08:
                    /* try { // try from 0050fd08 to 0050fd27 has its CatchHandler @ 0050fe18 */
          uVar6 = uVar8;
          FUN_0054774c(param_2,uVar6,1,uVar6,uVar6,0,0);
          goto LAB_0050fd2c;
        }
        if (0x15 < bVar2) {
          if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 0050fdec to 0050fe13 has its CatchHandler @ 0050fe8c */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_0050fe84;
        }
        uVar6 = (ulong)bVar2;
        *(byte *)((long)param_2 + 0x17) = bVar2 + 1;
        puVar7 = param_2;
      }
      lVar9 = lVar9 + -1;
      *(undefined1 *)((long)puVar7 + uVar6) = (char)uVar4;
      ((undefined1 *)((long)puVar7 + uVar6))[1] = 0;
    } while ((-1 < *(char *)((long)param_2 + 0x17)) || (param_2[1] != 0x7fffffffffffffef));
    uVar4 = 4;
LAB_0050fd94:
    lVar9 = (long)param_1 + *(long *)(*param_1 + -0x18);
    FUN_00520d98(lVar9,*(uint *)(lVar9 + 0x20) | uVar4);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return param_1;
  }
LAB_0050fe84:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0050fe90  FUN_0050fe90 =====

undefined8 * FUN_0050fe90(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  byte bVar2;
  long extraout_x1;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  bVar2 = param_2[0x17];
  uVar3 = *(ulong *)(param_2 + 8);
  if (-1 < (char)bVar2) {
    uVar3 = (ulong)bVar2;
  }
  if (uVar3 != 0) {
    pcVar1 = *(char **)param_2;
    if (-1 < (char)bVar2) {
      pcVar1 = param_2;
    }
    if (*pcVar1 == '/') {
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        *(undefined1 *)*param_1 = 0;
        param_1[1] = 0;
      }
      else {
        *(undefined1 *)param_1 = 0;
        *(undefined1 *)((long)param_1 + 0x17) = 0;
      }
      goto LAB_0050ff84;
    }
  }
  FUN_0051d984(param_1);
  if (extraout_x1 == 0) goto LAB_0050ff84;
  bVar2 = *(byte *)((long)param_1 + 0x17);
  if ((char)bVar2 < '\0') {
    uVar3 = param_1[1];
    uVar5 = (param_1[2] & 0x7fffffffffffffff) - 1;
    if (uVar3 == uVar5) goto LAB_0050ff24;
LAB_0050ff48:
    param_1[1] = uVar3 + 1;
    puVar4 = (undefined8 *)*param_1;
  }
  else {
    if (bVar2 == 0x16) {
      uVar5 = 0x16;
LAB_0050ff24:
      uVar3 = uVar5;
      FUN_0054774c(param_1,uVar3,1,uVar3,uVar3,0,0);
      goto LAB_0050ff48;
    }
    if (0x15 < bVar2) {
                    /* try { // try from 0050ffbc to 0050ffe3 has its CatchHandler @ 0050ffe4 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                 "__s < __min_cap",
                 "__s should never be greater than or equal to the short string capacity");
    }
    uVar3 = (ulong)bVar2;
    *(byte *)((long)param_1 + 0x17) = bVar2 + 1;
    puVar4 = param_1;
  }
  *(undefined2 *)((long)puVar4 + uVar3) = 0x2f;
LAB_0050ff84:
  uVar3 = *(ulong *)(param_2 + 8);
  pcVar1 = *(char **)param_2;
  if (-1 < param_2[0x17]) {
    uVar3 = (ulong)(byte)param_2[0x17];
    pcVar1 = param_2;
  }
  FUN_004b2050(param_1,pcVar1,pcVar1 + uVar3);
  return param_1;
}


// ===== 0050ffe8  FUN_0050ffe8 =====

undefined8 FUN_0050ffe8(undefined8 param_1,byte *param_2,byte *param_3,byte param_4,byte param_5)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 **ppuVar4;
  undefined1 **ppuVar5;
  ulong uVar6;
  byte bVar7;
  undefined1 *local_70;
  ulong local_68;
  undefined8 uStack_60;
  long local_58;
  
  ppuVar5 = &local_70;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uStack_60._7_1_ = 1;
  local_68 = 0;
  uStack_60 = 0x100000000000000;
  local_70 = (undefined1 *)(ulong)param_4;
  if (param_2 == param_3) {
    uVar3 = 1;
LAB_005101e0:
    uStack_60 = CONCAT17(uStack_60._7_1_ + 1,(undefined7)uStack_60);
  }
  else {
    do {
      bVar7 = *param_2;
      if (bVar7 == param_5 || bVar7 == param_4) {
        if ((long)uStack_60 < 0) {
          uVar6 = (uStack_60 & 0x7fffffffffffffff) - 1;
          uVar3 = local_68;
          if (local_68 == uVar6) goto LAB_005100d0;
LAB_005100f4:
          local_68 = uVar3 + 1;
          ppuVar4 = (undefined1 **)local_70;
        }
        else {
          if (uStack_60._7_1_ == 0x16) {
            uVar6 = 0x16;
LAB_005100d0:
            FUN_0054774c(&local_70,uVar6,1,uVar6,uVar6,0,0);
            uVar3 = uVar6;
            goto LAB_005100f4;
          }
          if (0x15 < uStack_60._7_1_) {
            if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 005102a8 to 005102cf has its CatchHandler @ 00510340 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                         "__s < __min_cap",
                         "__s should never be greater than or equal to the short string capacity");
            }
            goto LAB_00510338;
          }
          uVar3 = (ulong)uStack_60._7_1_;
          uStack_60 = CONCAT17(uStack_60._7_1_ + 1,(undefined7)uStack_60);
          ppuVar4 = &local_70;
        }
        *(byte *)((long)ppuVar4 + uVar3) = param_5;
        ((byte *)((long)ppuVar4 + uVar3))[1] = 0;
        bVar7 = *param_2;
      }
      if ((long)uStack_60 < 0) {
        uVar6 = (uStack_60 & 0x7fffffffffffffff) - 1;
        uVar3 = local_68;
        if (local_68 == uVar6) goto LAB_00510048;
LAB_0051006c:
        local_68 = uVar3 + 1;
        ppuVar4 = (undefined1 **)local_70;
      }
      else {
        if (uStack_60._7_1_ == 0x16) {
          uVar6 = 0x16;
LAB_00510048:
                    /* try { // try from 00510048 to 005100ef has its CatchHandler @ 0051030c */
          FUN_0054774c(&local_70,uVar6,1,uVar6,uVar6,0,0);
          uVar3 = uVar6;
          goto LAB_0051006c;
        }
        if (0x15 < uStack_60._7_1_) {
          if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 00510270 to 00510297 has its CatchHandler @ 00510344 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00510338;
        }
        uVar3 = (ulong)uStack_60._7_1_;
        uStack_60 = CONCAT17(uStack_60._7_1_ + 1,(undefined7)uStack_60);
        ppuVar4 = &local_70;
      }
      param_2 = param_2 + 1;
      *(byte *)((long)ppuVar4 + uVar3) = bVar7;
      ((byte *)((long)ppuVar4 + uVar3))[1] = 0;
    } while (param_2 != param_3);
    if ((long)uStack_60 < 0) {
      uVar3 = (uStack_60 & 0x7fffffffffffffff) - 1;
      if (local_68 == uVar3) goto LAB_005101a4;
    }
    else {
      if (uStack_60._7_1_ != 0x16) {
        if (0x15 < uStack_60._7_1_) {
          if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 005102e0 to 00510307 has its CatchHandler @ 0051033c */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_00510338;
        }
        uVar3 = (ulong)uStack_60._7_1_;
        goto LAB_005101e0;
      }
      uVar3 = 0x16;
LAB_005101a4:
                    /* try { // try from 005101a4 to 0051021b has its CatchHandler @ 00510308 */
      FUN_0054774c(&local_70,uVar3,1,uVar3,uVar3,0,0);
      local_68 = uVar3;
    }
    uVar3 = local_68;
    ppuVar5 = (undefined1 **)local_70;
    local_68 = local_68 + 1;
  }
  *(byte *)((long)ppuVar5 + uVar3) = param_4;
  ((byte *)((long)ppuVar5 + uVar3))[1] = 0;
  uVar3 = local_68;
  ppuVar5 = (undefined1 **)local_70;
  if (-1 < (long)uStack_60) {
    uVar3 = uStack_60 >> 0x38;
    ppuVar5 = &local_70;
  }
  uVar2 = FUN_00428964(param_1,ppuVar5,uVar3);
  if ((long)uStack_60 < 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar2;
  }
LAB_00510338:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00510348  FUN_00510348 =====

undefined1  [16] FUN_00510348(void)

{
  undefined1 *in_x3;
  
  *in_x3 = 0;
  return ZEXT816(0);
}


// ===== 00510358  FUN_00510358 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00510358(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_005104d8(0x4024000000000000,0x4059000000000000,0x40e5888000000000);
  uVar2 = _UNK_001f3dd8;
  uVar1 = _DAT_001f3dd0;
  *param_1 = &PTR_FUN_00d1fc78;
  param_1[10] = uVar2;
  param_1[9] = uVar1;
  param_1[0xb] = 0x3abef2d0f5da7dd9;
  return;
}


// ===== 005103bc  FUN_005103bc =====

void FUN_005103bc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x48) = param_1;
  return;
}


// ===== 005103c4  FUN_005103c4 =====

void FUN_005103c4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x50) = param_1;
  return;
}


// ===== 005103cc  FUN_005103cc =====

void FUN_005103cc(long param_1)

{
  *(undefined8 *)(param_1 + 0x58) = 0x3abef2d0f5da7dd9;
  return;
}


// ===== 005103e4  FUN_005103e4 =====

void FUN_005103e4(undefined8 param_1,long param_2)

{
  FUN_00510580();
  FUN_0051048c(param_1,param_2 + 0x60);
  return;
}


// ===== 00510418  FUN_00510418 =====

void FUN_00510418(long param_1)

{
  FUN_0051047c(param_1 + 0x60);
  return;
}


// ===== 00510420  FUN_00510420 =====

void FUN_00510420(long param_1)

{
  *(undefined8 *)(param_1 + 0x58) = 0x3abef2d0f5da7dd9;
  *(undefined8 *)(param_1 + 0x80) = 0x3abef2d0f5da7dd9;
  return;
}


// ===== 0051043c  FUN_0051043c =====

void FUN_0051043c(void)

{
  return;
}


// ===== 00510440  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00510444  FUN_00510444 =====

undefined1  [16] FUN_00510444(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + 0x18);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 0051044c  FUN_0051044c =====

undefined1  [16] FUN_0051044c(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + 0x38);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 00510454  FUN_00510454 =====

undefined1  [16] FUN_00510454(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + 0x10);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 0051045c  FUN_0051045c =====

undefined1  [16] FUN_0051045c(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + 0x48);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 00510464  FUN_00510464 =====

undefined1  [16] FUN_00510464(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + 0x50);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 0051046c  FUN_0051046c =====

void FUN_0051046c(void)

{
  return;
}


// ===== 00510470  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00510474  FUN_00510474 =====

undefined1  [16] FUN_00510474(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + 0x70);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 0051047c  FUN_0051047c =====

void FUN_0051047c(long param_1,long *param_2)

{
  param_2[2] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00510488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x30))();
  return;
}


// ===== 0051048c  FUN_0051048c =====

void FUN_0051048c(long param_1,long *param_2)

{
  param_2[1] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00510498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x30))();
  return;
}


// ===== 0051049c  FUN_0051049c =====

void FUN_0051049c(long param_1)

{
  double dVar1;
  
  dVar1 = exp(-1000.0 / (*(double *)(param_1 + 0x10) * *(double *)(param_1 + 8)));
  *(double *)(param_1 + 0x18) = dVar1;
  return;
}


// ===== 005104d8  FUN_005104d8 =====

void FUN_005104d8(double param_1,double param_2,double param_3,undefined8 *param_4)

{
  double dVar1;
  
  param_4[2] = param_3;
  param_4[3] = param_1;
  *param_4 = &PTR_FUN_00d1fdc0;
  param_4[1] = &PTR_FUN_00d1fd78;
  dVar1 = exp(-1000.0 / (param_1 * param_3));
  param_4[4] = dVar1;
  param_4[5] = &PTR_FUN_00d1fd78;
  param_4[6] = param_3;
  param_4[7] = param_2;
  dVar1 = exp(-1000.0 / (param_2 * param_3));
  param_4[8] = dVar1;
  return;
}


// ===== 00510560  FUN_00510560 =====

void FUN_00510560(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0051056c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 8) + 0x30))();
  return;
}


// ===== 00510570  FUN_00510570 =====

void FUN_00510570(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x38) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0051057c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x28) + 0x30))();
  return;
}


// ===== 00510580  FUN_00510580 =====

void FUN_00510580(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  (**(code **)(*(long *)(param_2 + 8) + 0x30))();
  *(undefined8 *)(param_2 + 0x30) = param_1;
                    /* WARNING: Could not recover jumptable at 0x005105c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x28) + 0x30))((long *)(param_2 + 0x28));
  return;
}


// ===== 005105c8  FUN_005105c8 =====

void FUN_005105c8(void)

{
  return;
}


// ===== 005105cc  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 005105d0  FUN_005105d0 =====

undefined1  [16] FUN_005105d0(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + 0x10);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 005105d8  FUN_005105d8 =====

undefined1  [16] FUN_005105d8(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + 8);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 005105e0  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 005105e4  FUN_005105e4 =====

bool FUN_005105e4(byte *param_1,ulong param_2)

{
  if ((7 < param_2) && ((*param_1 & 0xc0) == 0x80)) {
    return (byte)(param_1[1] + 0x3e) < 0x1e;
  }
  return false;
}


// ===== 0051061c  FUN_0051061c =====

bool FUN_0051061c(byte *param_1,ulong param_2)

{
  if ((0xb < param_2) && ((*param_1 & 0xc0) == 0x80)) {
    return (byte)(param_1[1] + 0x20) < 0xe2;
  }
  return false;
}


// ===== 00510654  FUN_00510654 =====

bool FUN_00510654(byte *param_1,ulong param_2)

{
  if (((0x49 < param_2) && (*param_1 < 2)) &&
     (param_2 - 4 ==
      (ulong)((uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8)))
  {
    return CONCAT11(*param_1,param_1[1]) == 2;
  }
  return false;
}


