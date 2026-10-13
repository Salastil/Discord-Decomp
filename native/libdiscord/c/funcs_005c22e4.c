// ===== 005c22e4  FUN_005c22e4 =====

void FUN_005c22e4(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  *param_1 = &PTR_FUN_00d25888;
  *(undefined4 *)(param_1 + 1) = uVar1;
  FUN_005472bc(param_1 + 2,param_2 + 0x10);
  *param_1 = &PTR_FUN_00d258b0;
  return;
}


// ===== 005c232c  FUN_005c232c =====

void FUN_005c232c(undefined8 *param_1,char *param_2,undefined8 *param_3,undefined1 *param_4)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  size_t sVar4;
  ulong uVar5;
  ulong uVar6;
  
  sVar4 = strlen(param_2);
  FUN_00547cac(param_1,param_2,sVar4);
  uVar5 = param_3[1];
  puVar3 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar5 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar3 = param_3;
  }
  FUN_00547cac(param_1,puVar3,uVar5);
  bVar1 = *(byte *)((long)param_1 + 0x17);
  uVar5 = (ulong)bVar1;
  uVar2 = *param_4;
  if ((char)bVar1 < '\0') {
    uVar5 = param_1[1];
    uVar6 = (param_1[2] & 0x7fffffffffffffff) - 1;
    if (uVar5 == uVar6) goto LAB_005c23b4;
  }
  else {
    if (bVar1 != 0x16) {
      if (0x15 < bVar1) {
                    /* try { // try from 005c2414 to 005c243b has its CatchHandler @ 005c243c */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                   "__s < __min_cap",
                   "__s should never be greater than or equal to the short string capacity");
      }
      *(byte *)((long)param_1 + 0x17) = bVar1 + 1;
      goto LAB_005c23f8;
    }
    uVar6 = 0x16;
LAB_005c23b4:
    uVar5 = uVar6;
    FUN_0054774c(param_1,uVar5,1,uVar5,uVar5,0,0);
  }
  param_1[1] = uVar5 + 1;
  param_1 = (undefined8 *)*param_1;
LAB_005c23f8:
  *(undefined1 *)((long)param_1 + uVar5) = uVar2;
  ((undefined1 *)((long)param_1 + uVar5))[1] = 0;
  return;
}


// ===== 005c2440  FUN_005c2440 =====

undefined1  [16] FUN_005c2440(long *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  undefined1 uVar2;
  long lVar3;
  uint7 uVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 local_70;
  uint7 uStack_6f;
  undefined8 uStack_68;
  undefined1 local_60;
  uint7 uStack_5f;
  undefined8 uStack_58;
  ulong local_48;
  ulong uStack_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((*(ulong *)(param_1[4] + (param_1[5] - 1U >> 3 & 0x1ffffffffffffff8)) >>
       (param_1[5] - 1U & 0x3f) & 1) == 0) {
    uVar11 = 0;
    lVar13 = 0;
  }
  else {
    uStack_40 = *param_2;
    local_48 = 7;
                    /* try { // try from 005c24ac to 005c24b7 has its CatchHandler @ 005c273c */
    if (((param_3 & 1) == 0) &&
       (uVar5 = (*(code *)param_1[0xe])
                          (param_1 + 0xc,(ulong)(param_1[2] - param_1[1]) >> 3,5,&local_48),
       uVar11 = _local_60, (uVar5 & 1) == 0)) {
LAB_005c25c8:
      _local_60 = uVar11;
      uVar11 = 0;
      lVar13 = 0;
    }
    else {
      uVar5 = uStack_40;
      uVar11 = _local_60;
      uVar4 = local_48._1_7_;
      local_60 = (undefined1)local_48;
      if (param_1[1] == param_1[2]) {
        local_48 = (ulong)local_48._1_7_ << 8;
        puVar8 = (undefined1 *)*param_1;
        uStack_40 = 0;
        uVar2 = *puVar8;
        uStack_58 = *(undefined8 *)(puVar8 + 8);
        *puVar8 = local_60;
        _local_60 = CONCAT71(uVar4,uVar2);
        *(ulong *)(puVar8 + 8) = uVar5;
                    /* try { // try from 005c2554 to 005c2557 has its CatchHandler @ 005c2738 */
        FUN_005b2fc4((ulong)&local_60 | 8);
        lVar13 = *param_1;
      }
      else {
        pcVar6 = *(char **)(param_1[2] + -8);
        if (pcVar6 == (char *)0x0) goto LAB_005c25c8;
        _local_60 = uVar11;
        if (*pcVar6 == '\x02') {
          plVar12 = *(long **)(pcVar6 + 8);
          puVar1 = (ulong *)plVar12[1];
          if (puVar1 < (ulong *)plVar12[2]) {
            if (puVar1 == (ulong *)0x0) {
              if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c270c to 005c2733 has its CatchHandler @ 005c2748 */
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s:%d: assertion %s failed: %s",
                           "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                           ,0x23,"__location != nullptr","null pointer given to construct_at");
              }
              goto LAB_005c2770;
            }
            puVar10 = puVar1 + 2;
            puVar1[1] = uStack_40;
            *puVar1 = local_48;
            local_48 = local_48 & 0xffffffffffffff00;
            uStack_40 = 0;
            plVar12[1] = (long)puVar10;
          }
          else {
                    /* try { // try from 005c25d4 to 005c25df has its CatchHandler @ 005c273c */
            FUN_005c14d4(plVar12,&local_48);
            puVar10 = (ulong *)plVar12[1];
          }
          if ((ulong *)*plVar12 == puVar10) {
            if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c2664 to 005c268b has its CatchHandler @ 005c277c */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                         "!empty()","back() called on an empty vector");
            }
            goto LAB_005c2770;
          }
          if (param_1[1] == param_1[2]) {
            if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c269c to 005c26c3 has its CatchHandler @ 005c2778 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                         "!empty()","back() called on an empty vector");
            }
            goto LAB_005c2770;
          }
          plVar12 = *(long **)(*(long *)(param_1[2] + -8) + 8);
          lVar13 = plVar12[1];
          if (*plVar12 == lVar13) {
            if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c26d4 to 005c26fb has its CatchHandler @ 005c2774 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                         "!empty()","back() called on an empty vector");
            }
            goto LAB_005c2770;
          }
          lVar13 = lVar13 + -0x10;
        }
        else {
          uVar7 = param_1[8] - 1;
          uVar9 = *(ulong *)(param_1[7] + (uVar7 >> 3 & 0x1ffffffffffffff8));
          param_1[8] = uVar7;
          if ((uVar9 >> (uVar7 & 0x3f) & 1) == 0) goto LAB_005c25c8;
          local_48 = (ulong)local_48._1_7_ << 8;
          puVar8 = (undefined1 *)param_1[10];
          uStack_40 = 0;
          uVar2 = *puVar8;
          uStack_68 = *(undefined8 *)(puVar8 + 8);
          *puVar8 = local_60;
          _local_70 = CONCAT71(uVar4,uVar2);
          *(ulong *)(puVar8 + 8) = uVar5;
                    /* try { // try from 005c25bc to 005c25bf has its CatchHandler @ 005c2734 */
          FUN_005b2fc4((ulong)&local_70 | 8);
          lVar13 = param_1[10];
        }
      }
      uVar11 = 1;
    }
                    /* try { // try from 005c2624 to 005c2627 has its CatchHandler @ 005c2744 */
    FUN_005b2fc4(&uStack_40,local_48 & 0xff);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    auVar14._8_8_ = lVar13;
    auVar14._0_8_ = uVar11;
    return auVar14;
  }
LAB_005c2770:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005c2780  FUN_005c2780 =====

undefined1  [16] FUN_005c2780(long *param_1,byte *param_2,ulong param_3)

{
  ulong *puVar1;
  undefined1 uVar2;
  long lVar3;
  uint7 uVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 local_70;
  uint7 uStack_6f;
  undefined8 uStack_68;
  undefined1 local_60;
  uint7 uStack_5f;
  undefined8 uStack_58;
  ulong local_48;
  ulong uStack_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((*(ulong *)(param_1[4] + (param_1[5] - 1U >> 3 & 0x1ffffffffffffff8)) >>
       (param_1[5] - 1U & 0x3f) & 1) == 0) {
    uVar11 = 0;
    lVar13 = 0;
  }
  else {
    uStack_40 = (ulong)*param_2;
    local_48 = 4;
                    /* try { // try from 005c27e8 to 005c27f3 has its CatchHandler @ 005c2a78 */
    if (((param_3 & 1) == 0) &&
       (uVar5 = (*(code *)param_1[0xe])
                          (param_1 + 0xc,(ulong)(param_1[2] - param_1[1]) >> 3,5,&local_48),
       uVar11 = _local_60, (uVar5 & 1) == 0)) {
LAB_005c2904:
      _local_60 = uVar11;
      uVar11 = 0;
      lVar13 = 0;
    }
    else {
      uVar5 = uStack_40;
      uVar11 = _local_60;
      uVar4 = local_48._1_7_;
      local_60 = (undefined1)local_48;
      if (param_1[1] == param_1[2]) {
        local_48 = (ulong)local_48._1_7_ << 8;
        puVar8 = (undefined1 *)*param_1;
        uStack_40 = 0;
        uVar2 = *puVar8;
        uStack_58 = *(undefined8 *)(puVar8 + 8);
        *puVar8 = local_60;
        _local_60 = CONCAT71(uVar4,uVar2);
        *(ulong *)(puVar8 + 8) = uVar5;
                    /* try { // try from 005c2890 to 005c2893 has its CatchHandler @ 005c2a74 */
        FUN_005b2fc4((ulong)&local_60 | 8);
        lVar13 = *param_1;
      }
      else {
        pcVar6 = *(char **)(param_1[2] + -8);
        if (pcVar6 == (char *)0x0) goto LAB_005c2904;
        _local_60 = uVar11;
        if (*pcVar6 == '\x02') {
          plVar12 = *(long **)(pcVar6 + 8);
          puVar1 = (ulong *)plVar12[1];
          if (puVar1 < (ulong *)plVar12[2]) {
            if (puVar1 == (ulong *)0x0) {
              if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c2a48 to 005c2a6f has its CatchHandler @ 005c2a84 */
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s:%d: assertion %s failed: %s",
                           "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                           ,0x23,"__location != nullptr","null pointer given to construct_at");
              }
              goto LAB_005c2aac;
            }
            puVar10 = puVar1 + 2;
            puVar1[1] = uStack_40;
            *puVar1 = local_48;
            local_48 = local_48 & 0xffffffffffffff00;
            uStack_40 = 0;
            plVar12[1] = (long)puVar10;
          }
          else {
                    /* try { // try from 005c2910 to 005c291b has its CatchHandler @ 005c2a78 */
            FUN_005c14d4(plVar12,&local_48);
            puVar10 = (ulong *)plVar12[1];
          }
          if ((ulong *)*plVar12 == puVar10) {
            if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c29a0 to 005c29c7 has its CatchHandler @ 005c2ab8 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                         "!empty()","back() called on an empty vector");
            }
            goto LAB_005c2aac;
          }
          if (param_1[1] == param_1[2]) {
            if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c29d8 to 005c29ff has its CatchHandler @ 005c2ab4 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                         "!empty()","back() called on an empty vector");
            }
            goto LAB_005c2aac;
          }
          plVar12 = *(long **)(*(long *)(param_1[2] + -8) + 8);
          lVar13 = plVar12[1];
          if (*plVar12 == lVar13) {
            if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c2a10 to 005c2a37 has its CatchHandler @ 005c2ab0 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                         "!empty()","back() called on an empty vector");
            }
            goto LAB_005c2aac;
          }
          lVar13 = lVar13 + -0x10;
        }
        else {
          uVar7 = param_1[8] - 1;
          uVar9 = *(ulong *)(param_1[7] + (uVar7 >> 3 & 0x1ffffffffffffff8));
          param_1[8] = uVar7;
          if ((uVar9 >> (uVar7 & 0x3f) & 1) == 0) goto LAB_005c2904;
          local_48 = (ulong)local_48._1_7_ << 8;
          puVar8 = (undefined1 *)param_1[10];
          uStack_40 = 0;
          uVar2 = *puVar8;
          uStack_68 = *(undefined8 *)(puVar8 + 8);
          *puVar8 = local_60;
          _local_70 = CONCAT71(uVar4,uVar2);
          *(ulong *)(puVar8 + 8) = uVar5;
                    /* try { // try from 005c28f8 to 005c28fb has its CatchHandler @ 005c2a70 */
          FUN_005b2fc4((ulong)&local_70 | 8);
          lVar13 = param_1[10];
        }
      }
      uVar11 = 1;
    }
                    /* try { // try from 005c2960 to 005c2963 has its CatchHandler @ 005c2a80 */
    FUN_005b2fc4(&uStack_40,local_48 & 0xff);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    auVar14._8_8_ = lVar13;
    auVar14._0_8_ = uVar11;
    return auVar14;
  }
LAB_005c2aac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005c2abc  FUN_005c2abc =====

undefined1  [16] FUN_005c2abc(long *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  long lVar3;
  undefined1 uVar4;
  ulong uVar5;
  char *pcVar6;
  undefined1 *puVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined8 uStack_58;
  undefined1 local_48;
  undefined7 uStack_47;
  undefined8 uStack_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((*(ulong *)(param_1[4] + (param_1[5] - 1U >> 3 & 0x1ffffffffffffff8)) >>
       (param_1[5] - 1U & 0x3f) & 1) == 0) {
    uVar11 = 0;
    lVar13 = 0;
  }
  else {
    local_48 = 0;
    uStack_40 = 0;
                    /* try { // try from 005c2b1c to 005c2b27 has its CatchHandler @ 005c2dac */
    if (((param_3 & 1) == 0) &&
       (uVar5 = (*(code *)param_1[0xe])
                          (param_1 + 0xc,(ulong)(param_1[2] - param_1[1]) >> 3,5,&local_48),
       (uVar5 & 1) == 0)) {
LAB_005c2c38:
      uVar11 = 0;
      lVar13 = 0;
    }
    else {
      uVar11 = uStack_40;
      uVar4 = local_48;
      if (param_1[1] == param_1[2]) {
        local_48 = 0;
        puVar7 = (undefined1 *)*param_1;
        uStack_40 = 0;
        uVar2 = *puVar7;
        uStack_58 = *(undefined8 *)(puVar7 + 8);
        *puVar7 = uVar4;
        _local_60 = CONCAT71(uStack_47,uVar2);
        *(undefined8 *)(puVar7 + 8) = uVar11;
                    /* try { // try from 005c2bc4 to 005c2bc7 has its CatchHandler @ 005c2da8 */
        FUN_005b2fc4((ulong)&local_60 | 8);
        lVar13 = *param_1;
      }
      else {
        pcVar6 = *(char **)(param_1[2] + -8);
        if (pcVar6 == (char *)0x0) goto LAB_005c2c38;
        if (*pcVar6 == '\x02') {
          puVar12 = *(undefined8 **)(pcVar6 + 8);
          puVar1 = (undefined8 *)puVar12[1];
          if (puVar1 < (undefined8 *)puVar12[2]) {
            if (puVar1 == (undefined8 *)0x0) {
              if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c2d7c to 005c2da3 has its CatchHandler @ 005c2db8 */
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s:%d: assertion %s failed: %s",
                           "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                           ,0x23,"__location != nullptr","null pointer given to construct_at");
              }
              goto LAB_005c2de0;
            }
            puVar10 = puVar1 + 2;
            puVar1[1] = uStack_40;
            *puVar1 = CONCAT71(uStack_47,local_48);
            local_48 = 0;
            uStack_40 = 0;
            puVar12[1] = puVar10;
          }
          else {
                    /* try { // try from 005c2c44 to 005c2c4f has its CatchHandler @ 005c2dac */
            FUN_005c14d4(puVar12,&local_48);
            puVar10 = (undefined8 *)puVar12[1];
          }
          if ((undefined8 *)*puVar12 == puVar10) {
            if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c2cd4 to 005c2cfb has its CatchHandler @ 005c2dec */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                         "!empty()","back() called on an empty vector");
            }
            goto LAB_005c2de0;
          }
          if (param_1[1] == param_1[2]) {
            if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c2d0c to 005c2d33 has its CatchHandler @ 005c2de8 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                         "!empty()","back() called on an empty vector");
            }
            goto LAB_005c2de0;
          }
          plVar8 = *(long **)(*(long *)(param_1[2] + -8) + 8);
          lVar13 = plVar8[1];
          if (*plVar8 == lVar13) {
            if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c2d44 to 005c2d6b has its CatchHandler @ 005c2de4 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                         "!empty()","back() called on an empty vector");
            }
            goto LAB_005c2de0;
          }
          lVar13 = lVar13 + -0x10;
        }
        else {
          uVar5 = param_1[8] - 1;
          uVar9 = *(ulong *)(param_1[7] + (uVar5 >> 3 & 0x1ffffffffffffff8));
          param_1[8] = uVar5;
          if ((uVar9 >> (uVar5 & 0x3f) & 1) == 0) goto LAB_005c2c38;
          local_48 = 0;
          puVar7 = (undefined1 *)param_1[10];
          uStack_40 = 0;
          uVar2 = *puVar7;
          uStack_68 = *(undefined8 *)(puVar7 + 8);
          *puVar7 = uVar4;
          _local_70 = CONCAT71(uStack_47,uVar2);
          *(undefined8 *)(puVar7 + 8) = uVar11;
                    /* try { // try from 005c2c2c to 005c2c2f has its CatchHandler @ 005c2da4 */
          FUN_005b2fc4((ulong)&local_70 | 8);
          lVar13 = param_1[10];
        }
      }
      uVar11 = 1;
    }
                    /* try { // try from 005c2c94 to 005c2c97 has its CatchHandler @ 005c2db4 */
    FUN_005b2fc4(&uStack_40,local_48);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    auVar14._8_8_ = lVar13;
    auVar14._0_8_ = uVar11;
    return auVar14;
  }
LAB_005c2de0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005c2df0  FUN_005c2df0 =====

undefined1  [16] FUN_005c2df0(long *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  undefined1 uVar2;
  long lVar3;
  uint7 uVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 local_70;
  uint7 uStack_6f;
  undefined8 uStack_68;
  undefined1 local_60;
  uint7 uStack_5f;
  undefined8 uStack_58;
  ulong local_48;
  ulong uStack_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((*(ulong *)(param_1[4] + (param_1[5] - 1U >> 3 & 0x1ffffffffffffff8)) >>
       (param_1[5] - 1U & 0x3f) & 1) == 0) {
    uVar11 = 0;
    lVar13 = 0;
  }
  else {
    uStack_40 = *param_2;
    local_48 = 5;
                    /* try { // try from 005c2e58 to 005c2e63 has its CatchHandler @ 005c30e8 */
    if (((param_3 & 1) == 0) &&
       (uVar5 = (*(code *)param_1[0xe])
                          (param_1 + 0xc,(ulong)(param_1[2] - param_1[1]) >> 3,5,&local_48),
       uVar11 = _local_60, (uVar5 & 1) == 0)) {
LAB_005c2f74:
      _local_60 = uVar11;
      uVar11 = 0;
      lVar13 = 0;
    }
    else {
      uVar5 = uStack_40;
      uVar11 = _local_60;
      uVar4 = local_48._1_7_;
      local_60 = (undefined1)local_48;
      if (param_1[1] == param_1[2]) {
        local_48 = (ulong)local_48._1_7_ << 8;
        puVar8 = (undefined1 *)*param_1;
        uStack_40 = 0;
        uVar2 = *puVar8;
        uStack_58 = *(undefined8 *)(puVar8 + 8);
        *puVar8 = local_60;
        _local_60 = CONCAT71(uVar4,uVar2);
        *(ulong *)(puVar8 + 8) = uVar5;
                    /* try { // try from 005c2f00 to 005c2f03 has its CatchHandler @ 005c30e4 */
        FUN_005b2fc4((ulong)&local_60 | 8);
        lVar13 = *param_1;
      }
      else {
        pcVar6 = *(char **)(param_1[2] + -8);
        if (pcVar6 == (char *)0x0) goto LAB_005c2f74;
        _local_60 = uVar11;
        if (*pcVar6 == '\x02') {
          plVar12 = *(long **)(pcVar6 + 8);
          puVar1 = (ulong *)plVar12[1];
          if (puVar1 < (ulong *)plVar12[2]) {
            if (puVar1 == (ulong *)0x0) {
              if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c30b8 to 005c30df has its CatchHandler @ 005c30f4 */
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s:%d: assertion %s failed: %s",
                           "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                           ,0x23,"__location != nullptr","null pointer given to construct_at");
              }
              goto LAB_005c311c;
            }
            puVar10 = puVar1 + 2;
            puVar1[1] = uStack_40;
            *puVar1 = local_48;
            local_48 = local_48 & 0xffffffffffffff00;
            uStack_40 = 0;
            plVar12[1] = (long)puVar10;
          }
          else {
                    /* try { // try from 005c2f80 to 005c2f8b has its CatchHandler @ 005c30e8 */
            FUN_005c14d4(plVar12,&local_48);
            puVar10 = (ulong *)plVar12[1];
          }
          if ((ulong *)*plVar12 == puVar10) {
            if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c3010 to 005c3037 has its CatchHandler @ 005c3128 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                         "!empty()","back() called on an empty vector");
            }
            goto LAB_005c311c;
          }
          if (param_1[1] == param_1[2]) {
            if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c3048 to 005c306f has its CatchHandler @ 005c3124 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                         "!empty()","back() called on an empty vector");
            }
            goto LAB_005c311c;
          }
          plVar12 = *(long **)(*(long *)(param_1[2] + -8) + 8);
          lVar13 = plVar12[1];
          if (*plVar12 == lVar13) {
            if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c3080 to 005c30a7 has its CatchHandler @ 005c3120 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                         "!empty()","back() called on an empty vector");
            }
            goto LAB_005c311c;
          }
          lVar13 = lVar13 + -0x10;
        }
        else {
          uVar7 = param_1[8] - 1;
          uVar9 = *(ulong *)(param_1[7] + (uVar7 >> 3 & 0x1ffffffffffffff8));
          param_1[8] = uVar7;
          if ((uVar9 >> (uVar7 & 0x3f) & 1) == 0) goto LAB_005c2f74;
          local_48 = (ulong)local_48._1_7_ << 8;
          puVar8 = (undefined1 *)param_1[10];
          uStack_40 = 0;
          uVar2 = *puVar8;
          uStack_68 = *(undefined8 *)(puVar8 + 8);
          *puVar8 = local_60;
          _local_70 = CONCAT71(uVar4,uVar2);
          *(ulong *)(puVar8 + 8) = uVar5;
                    /* try { // try from 005c2f68 to 005c2f6b has its CatchHandler @ 005c30e0 */
          FUN_005b2fc4((ulong)&local_70 | 8);
          lVar13 = param_1[10];
        }
      }
      uVar11 = 1;
    }
                    /* try { // try from 005c2fd0 to 005c2fd3 has its CatchHandler @ 005c30f0 */
    FUN_005b2fc4(&uStack_40,local_48 & 0xff);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    auVar14._8_8_ = lVar13;
    auVar14._0_8_ = uVar11;
    return auVar14;
  }
LAB_005c311c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005c312c  FUN_005c312c =====

undefined1  [16] FUN_005c312c(long *param_1,undefined8 param_2,ulong param_3)

{
  ulong *puVar1;
  undefined1 uVar2;
  long lVar3;
  uint7 uVar4;
  void *pvVar5;
  ulong uVar6;
  char *pcVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 local_80;
  uint7 uStack_7f;
  undefined8 uStack_78;
  undefined1 local_70;
  uint7 uStack_6f;
  undefined8 uStack_68;
  ulong local_58;
  void *pvStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((*(ulong *)(param_1[4] + (param_1[5] - 1U >> 3 & 0x1ffffffffffffff8)) >>
       (param_1[5] - 1U & 0x3f) & 1) == 0) {
    uVar11 = 0;
    lVar13 = 0;
  }
  else {
    pvStack_50 = (void *)0x0;
    local_58 = 3;
                    /* try { // try from 005c3184 to 005c318b has its CatchHandler @ 005c3464 */
    pvVar5 = operator_new(0x18);
                    /* try { // try from 005c318c to 005c3197 has its CatchHandler @ 005c3454 */
    FUN_004c55b4(pvVar5,param_2);
    pvStack_50 = pvVar5;
                    /* try { // try from 005c31b4 to 005c31bf has its CatchHandler @ 005c3448 */
    if (((param_3 & 1) == 0) &&
       (uVar6 = (*(code *)param_1[0xe])
                          (param_1 + 0xc,(ulong)(param_1[2] - param_1[1]) >> 3,5,&local_58),
       uVar11 = _local_70, (uVar6 & 1) == 0)) {
LAB_005c32d0:
      _local_70 = uVar11;
      uVar11 = 0;
      lVar13 = 0;
    }
    else {
      pvVar5 = pvStack_50;
      uVar11 = _local_70;
      uVar4 = local_58._1_7_;
      local_70 = (undefined1)local_58;
      if (param_1[1] == param_1[2]) {
        local_58 = (ulong)local_58._1_7_ << 8;
        puVar8 = (undefined1 *)*param_1;
        pvStack_50 = (void *)0x0;
        uVar2 = *puVar8;
        uStack_68 = *(undefined8 *)(puVar8 + 8);
        *puVar8 = local_70;
        _local_70 = CONCAT71(uVar4,uVar2);
        *(void **)(puVar8 + 8) = pvVar5;
                    /* try { // try from 005c325c to 005c325f has its CatchHandler @ 005c3444 */
        FUN_005b2fc4((ulong)&local_70 | 8);
        lVar13 = *param_1;
      }
      else {
        pcVar7 = *(char **)(param_1[2] + -8);
        if (pcVar7 == (char *)0x0) goto LAB_005c32d0;
        _local_70 = uVar11;
        if (*pcVar7 == '\x02') {
          plVar12 = *(long **)(pcVar7 + 8);
          puVar1 = (ulong *)plVar12[1];
          if (puVar1 < (ulong *)plVar12[2]) {
            if (puVar1 == (ulong *)0x0) {
              if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 005c3418 to 005c343f has its CatchHandler @ 005c3474 */
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s:%d: assertion %s failed: %s",
                           "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                           ,0x23,"__location != nullptr","null pointer given to construct_at");
              }
              goto LAB_005c349c;
            }
            puVar10 = puVar1 + 2;
            puVar1[1] = (ulong)pvStack_50;
            *puVar1 = local_58;
            local_58 = local_58 & 0xffffffffffffff00;
            pvStack_50 = (void *)0x0;
            plVar12[1] = (long)puVar10;
          }
          else {
                    /* try { // try from 005c32dc to 005c32e7 has its CatchHandler @ 005c3448 */
            FUN_005c14d4(plVar12,&local_58);
            puVar10 = (ulong *)plVar12[1];
          }
          if ((ulong *)*plVar12 == puVar10) {
            if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 005c3370 to 005c3397 has its CatchHandler @ 005c34a8 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                         "!empty()","back() called on an empty vector");
            }
            goto LAB_005c349c;
          }
          if (param_1[1] == param_1[2]) {
            if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 005c33a8 to 005c33cf has its CatchHandler @ 005c34a4 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                         "!empty()","back() called on an empty vector");
            }
            goto LAB_005c349c;
          }
          plVar12 = *(long **)(*(long *)(param_1[2] + -8) + 8);
          lVar13 = plVar12[1];
          if (*plVar12 == lVar13) {
            if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 005c33e0 to 005c3407 has its CatchHandler @ 005c34a0 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                         "!empty()","back() called on an empty vector");
            }
            goto LAB_005c349c;
          }
          lVar13 = lVar13 + -0x10;
        }
        else {
          uVar6 = param_1[8] - 1;
          uVar9 = *(ulong *)(param_1[7] + (uVar6 >> 3 & 0x1ffffffffffffff8));
          param_1[8] = uVar6;
          if ((uVar9 >> (uVar6 & 0x3f) & 1) == 0) goto LAB_005c32d0;
          local_58 = (ulong)local_58._1_7_ << 8;
          puVar8 = (undefined1 *)param_1[10];
          pvStack_50 = (void *)0x0;
          uVar2 = *puVar8;
          uStack_78 = *(undefined8 *)(puVar8 + 8);
          *puVar8 = local_70;
          _local_80 = CONCAT71(uVar4,uVar2);
          *(void **)(puVar8 + 8) = pvVar5;
                    /* try { // try from 005c32c4 to 005c32c7 has its CatchHandler @ 005c3440 */
          FUN_005b2fc4((ulong)&local_80 | 8);
          lVar13 = param_1[10];
        }
      }
      uVar11 = 1;
    }
                    /* try { // try from 005c332c to 005c332f has its CatchHandler @ 005c3450 */
    FUN_005b2fc4(&pvStack_50,local_58 & 0xff);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    auVar14._8_8_ = lVar13;
    auVar14._0_8_ = uVar11;
    return auVar14;
  }
LAB_005c349c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005c34ac  FUN_005c34ac =====

undefined1  [16] FUN_005c34ac(long *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  undefined1 uVar2;
  long lVar3;
  uint7 uVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 local_70;
  uint7 uStack_6f;
  undefined8 uStack_68;
  undefined1 local_60;
  uint7 uStack_5f;
  undefined8 uStack_58;
  ulong local_48;
  ulong uStack_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((*(ulong *)(param_1[4] + (param_1[5] - 1U >> 3 & 0x1ffffffffffffff8)) >>
       (param_1[5] - 1U & 0x3f) & 1) == 0) {
    uVar11 = 0;
    lVar13 = 0;
  }
  else {
    uStack_40 = *param_2;
    local_48 = 6;
                    /* try { // try from 005c3514 to 005c351f has its CatchHandler @ 005c37a4 */
    if (((param_3 & 1) == 0) &&
       (uVar5 = (*(code *)param_1[0xe])
                          (param_1 + 0xc,(ulong)(param_1[2] - param_1[1]) >> 3,5,&local_48),
       uVar11 = _local_60, (uVar5 & 1) == 0)) {
LAB_005c3630:
      _local_60 = uVar11;
      uVar11 = 0;
      lVar13 = 0;
    }
    else {
      uVar5 = uStack_40;
      uVar11 = _local_60;
      uVar4 = local_48._1_7_;
      local_60 = (undefined1)local_48;
      if (param_1[1] == param_1[2]) {
        local_48 = (ulong)local_48._1_7_ << 8;
        puVar8 = (undefined1 *)*param_1;
        uStack_40 = 0;
        uVar2 = *puVar8;
        uStack_58 = *(undefined8 *)(puVar8 + 8);
        *puVar8 = local_60;
        _local_60 = CONCAT71(uVar4,uVar2);
        *(ulong *)(puVar8 + 8) = uVar5;
                    /* try { // try from 005c35bc to 005c35bf has its CatchHandler @ 005c37a0 */
        FUN_005b2fc4((ulong)&local_60 | 8);
        lVar13 = *param_1;
      }
      else {
        pcVar6 = *(char **)(param_1[2] + -8);
        if (pcVar6 == (char *)0x0) goto LAB_005c3630;
        _local_60 = uVar11;
        if (*pcVar6 == '\x02') {
          plVar12 = *(long **)(pcVar6 + 8);
          puVar1 = (ulong *)plVar12[1];
          if (puVar1 < (ulong *)plVar12[2]) {
            if (puVar1 == (ulong *)0x0) {
              if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c3774 to 005c379b has its CatchHandler @ 005c37b0 */
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s:%d: assertion %s failed: %s",
                           "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                           ,0x23,"__location != nullptr","null pointer given to construct_at");
              }
              goto LAB_005c37d8;
            }
            puVar10 = puVar1 + 2;
            puVar1[1] = uStack_40;
            *puVar1 = local_48;
            local_48 = local_48 & 0xffffffffffffff00;
            uStack_40 = 0;
            plVar12[1] = (long)puVar10;
          }
          else {
                    /* try { // try from 005c363c to 005c3647 has its CatchHandler @ 005c37a4 */
            FUN_005c14d4(plVar12,&local_48);
            puVar10 = (ulong *)plVar12[1];
          }
          if ((ulong *)*plVar12 == puVar10) {
            if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c36cc to 005c36f3 has its CatchHandler @ 005c37e4 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                         "!empty()","back() called on an empty vector");
            }
            goto LAB_005c37d8;
          }
          if (param_1[1] == param_1[2]) {
            if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c3704 to 005c372b has its CatchHandler @ 005c37e0 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                         "!empty()","back() called on an empty vector");
            }
            goto LAB_005c37d8;
          }
          plVar12 = *(long **)(*(long *)(param_1[2] + -8) + 8);
          lVar13 = plVar12[1];
          if (*plVar12 == lVar13) {
            if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c373c to 005c3763 has its CatchHandler @ 005c37dc */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                         "!empty()","back() called on an empty vector");
            }
            goto LAB_005c37d8;
          }
          lVar13 = lVar13 + -0x10;
        }
        else {
          uVar7 = param_1[8] - 1;
          uVar9 = *(ulong *)(param_1[7] + (uVar7 >> 3 & 0x1ffffffffffffff8));
          param_1[8] = uVar7;
          if ((uVar9 >> (uVar7 & 0x3f) & 1) == 0) goto LAB_005c3630;
          local_48 = (ulong)local_48._1_7_ << 8;
          puVar8 = (undefined1 *)param_1[10];
          uStack_40 = 0;
          uVar2 = *puVar8;
          uStack_68 = *(undefined8 *)(puVar8 + 8);
          *puVar8 = local_60;
          _local_70 = CONCAT71(uVar4,uVar2);
          *(ulong *)(puVar8 + 8) = uVar5;
                    /* try { // try from 005c3624 to 005c3627 has its CatchHandler @ 005c379c */
          FUN_005b2fc4((ulong)&local_70 | 8);
          lVar13 = param_1[10];
        }
      }
      uVar11 = 1;
    }
                    /* try { // try from 005c368c to 005c368f has its CatchHandler @ 005c37ac */
    FUN_005b2fc4(&uStack_40,local_48 & 0xff);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    auVar14._8_8_ = lVar13;
    auVar14._0_8_ = uVar11;
    return auVar14;
  }
LAB_005c37d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005c37e8  FUN_005c37e8 =====

void FUN_005c37e8(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  *param_1 = &PTR_FUN_00d25888;
  *(undefined4 *)(param_1 + 1) = uVar1;
  FUN_005472bc(param_1 + 2,param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *param_1 = &PTR_FUN_00d259d8;
  param_1[4] = uVar2;
  return;
}


// ===== 005c383c  FUN_005c383c =====

void FUN_005c383c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d25888;
  FUN_00552450(param_1 + 2);
  FUN_0055234c(param_1);
  operator_delete(param_1);
  return;
}


// ===== 005c3874  FUN_005c3874 =====

void FUN_005c3874(undefined8 *param_1,long *param_2,char *param_3,undefined8 *param_4,char *param_5,
                 undefined8 *param_6,undefined8 *param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  size_t sVar7;
  size_t sVar8;
  ulong uVar9;
  byte bVar10;
  ulong uVar11;
  
  bVar10 = *(byte *)((long)param_2 + 0x17);
  uVar11 = (ulong)bVar10;
  uVar9 = param_2[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar5 = uVar9;
  if (-1 < (char)bVar10) {
    uVar5 = uVar11;
  }
  sVar7 = strlen(param_3);
  uVar2 = param_4[1];
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_4 + 0x17);
  }
  sVar8 = strlen(param_5);
  uVar3 = param_6[1];
  if (-1 < (char)*(byte *)((long)param_6 + 0x17)) {
    uVar3 = (ulong)*(byte *)((long)param_6 + 0x17);
  }
  uVar1 = param_7[1];
  if (-1 < (char)*(byte *)((long)param_7 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_7 + 0x17);
  }
  uVar1 = uVar5 + sVar7 + sVar8 + uVar2 + uVar3 + uVar1;
  if (uVar1 < 0x7ffffffffffffff0) {
    if (0x16 < uVar1) {
                    /* try { // try from 005c3958 to 005c3a57 has its CatchHandler @ 005c3a58 */
      FUN_0051f494(param_1,uVar1 | 0xf);
      bVar10 = *(byte *)((long)param_2 + 0x17);
      uVar11 = (ulong)bVar10;
      uVar9 = param_2[1];
    }
    plVar4 = (long *)*param_2;
    if (-1 < (char)bVar10) {
      plVar4 = param_2;
      uVar9 = uVar11;
    }
    FUN_00547cac(param_1,plVar4,uVar9);
    sVar7 = strlen(param_3);
    FUN_00547cac(param_1,param_3,sVar7);
    uVar5 = param_4[1];
    puVar6 = (undefined8 *)*param_4;
    if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
      uVar5 = (ulong)*(byte *)((long)param_4 + 0x17);
      puVar6 = param_4;
    }
    FUN_00547cac(param_1,puVar6,uVar5);
    sVar7 = strlen(param_5);
    FUN_00547cac(param_1,param_5,sVar7);
    uVar5 = param_6[1];
    puVar6 = (undefined8 *)*param_6;
    if (-1 < (char)*(byte *)((long)param_6 + 0x17)) {
      uVar5 = (ulong)*(byte *)((long)param_6 + 0x17);
      puVar6 = param_6;
    }
    FUN_00547cac(param_1,puVar6,uVar5);
    uVar5 = param_7[1];
    puVar6 = (undefined8 *)*param_7;
    if (-1 < (char)*(byte *)((long)param_7 + 0x17)) {
      uVar5 = (ulong)*(byte *)((long)param_7 + 0x17);
      puVar6 = param_7;
    }
    FUN_00547cac(param_1,puVar6,uVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004e823c(param_1);
}


// ===== 005c3a74  FUN_005c3a74 =====

void FUN_005c3a74(undefined8 param_1,long param_2)

{
  long lVar1;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00549320(local_50,*(long *)(param_2 + 0x10) + 1);
                    /* try { // try from 005c3ab0 to 005c3ab7 has its CatchHandler @ 005c3b40 */
  FUN_00549320(local_68,*(undefined8 *)(param_2 + 8));
                    /* try { // try from 005c3ab8 to 005c3ad7 has its CatchHandler @ 005c3b28 */
  FUN_005c3b70(param_1," at line ",local_50,", column ",local_68);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005c3b70  FUN_005c3b70 =====

void FUN_005c3b70(undefined8 *param_1,char *param_2,undefined8 *param_3,char *param_4,
                 undefined8 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  size_t sVar4;
  size_t sVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  sVar4 = strlen(param_2);
  uVar2 = param_3[1];
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  sVar5 = strlen(param_4);
  uVar1 = param_5[1];
  if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_5 + 0x17);
  }
  uVar1 = sVar5 + sVar4 + uVar2 + uVar1;
  if (0x7fffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_004e823c(param_1);
  }
  if (0x16 < uVar1) {
                    /* try { // try from 005c3c00 to 005c3c97 has its CatchHandler @ 005c3c98 */
    FUN_0051f494(param_1,uVar1 | 0xf);
  }
  sVar4 = strlen(param_2);
  FUN_00547cac(param_1,param_2,sVar4);
  uVar2 = param_3[1];
  puVar3 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar3 = param_3;
  }
  FUN_00547cac(param_1,puVar3,uVar2);
  sVar4 = strlen(param_4);
  FUN_00547cac(param_1,param_4,sVar4);
  uVar2 = param_5[1];
  puVar3 = (undefined8 *)*param_5;
  if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_5 + 0x17);
    puVar3 = param_5;
  }
  FUN_00547cac(param_1,puVar3,uVar2);
  return;
}


// ===== 005c3cb4  FUN_005c3cb4 =====

void FUN_005c3cb4(undefined8 *param_1,undefined8 *param_2,char *param_3,long param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  size_t sVar2;
  size_t sVar3;
  char *__s;
  
  __s = (char *)*param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  sVar2 = strlen(__s);
  sVar3 = strlen(param_3);
  uVar1 = *(ulong *)(param_4 + 8);
  if (-1 < (char)*(byte *)(param_4 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_4 + 0x17);
  }
  uVar1 = sVar2 + sVar3 + uVar1 + 1;
  if (0x7fffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_004e823c(param_1);
  }
  if (0x16 < uVar1) {
                    /* try { // try from 005c3d38 to 005c3dbb has its CatchHandler @ 005c3dbc */
    FUN_0051f494(param_1,uVar1 | 0xf);
    __s = (char *)*param_2;
  }
  if (__s != (char *)0x0) {
    sVar2 = strlen(__s);
    FUN_00547cac(param_1,__s,sVar2);
    FUN_005c3fd8(param_1,param_3,param_4,param_5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/string",0xad0,
             "__s != nullptr","string::append received nullptr");
}


// ===== 005c3dd8  FUN_005c3dd8 =====

void FUN_005c3dd8(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  ulong uVar1;
  size_t sVar2;
  size_t sVar3;
  char *__s;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  sVar2 = strlen(param_2);
  sVar3 = strlen((char *)*param_3);
  uVar1 = sVar3 + sVar2;
  if (0x7fffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_004e823c(param_1);
  }
  if (0x16 < uVar1) {
                    /* try { // try from 005c3e28 to 005c3ea7 has its CatchHandler @ 005c3ea8 */
    FUN_0051f494(param_1,uVar1 | 0xf);
  }
  sVar2 = strlen(param_2);
  FUN_00547cac(param_1,param_2,sVar2);
  __s = (char *)*param_3;
  if (__s != (char *)0x0) {
    sVar2 = strlen(__s);
    FUN_00547cac(param_1,__s,sVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/string",0xad0,
             "__s != nullptr","string::append received nullptr");
}


// ===== 005c3ec4  FUN_005c3ec4 =====

void FUN_005c3ec4(undefined8 *param_1,char *param_2,undefined8 *param_3,undefined1 *param_4)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  size_t sVar4;
  ulong uVar5;
  ulong uVar6;
  
  sVar4 = strlen(param_2);
  FUN_00547cac(param_1,param_2,sVar4);
  uVar5 = param_3[1];
  puVar3 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar5 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar3 = param_3;
  }
  FUN_00547cac(param_1,puVar3,uVar5);
  bVar1 = *(byte *)((long)param_1 + 0x17);
  uVar5 = (ulong)bVar1;
  uVar2 = *param_4;
  if ((char)bVar1 < '\0') {
    uVar5 = param_1[1];
    uVar6 = (param_1[2] & 0x7fffffffffffffff) - 1;
    if (uVar5 == uVar6) goto LAB_005c3f4c;
  }
  else {
    if (bVar1 != 0x16) {
      if (0x15 < bVar1) {
                    /* try { // try from 005c3fac to 005c3fd3 has its CatchHandler @ 005c3fd4 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                   "__s < __min_cap",
                   "__s should never be greater than or equal to the short string capacity");
      }
      *(byte *)((long)param_1 + 0x17) = bVar1 + 1;
      goto LAB_005c3f90;
    }
    uVar6 = 0x16;
LAB_005c3f4c:
    uVar5 = uVar6;
    FUN_0054774c(param_1,uVar5,1,uVar5,uVar5,0,0);
  }
  param_1[1] = uVar5 + 1;
  param_1 = (undefined8 *)*param_1;
LAB_005c3f90:
  *(undefined1 *)((long)param_1 + uVar5) = uVar2;
  ((undefined1 *)((long)param_1 + uVar5))[1] = 0;
  return;
}


// ===== 005c3fd8  FUN_005c3fd8 =====

void FUN_005c3fd8(undefined8 *param_1,char *param_2,undefined8 *param_3,undefined1 *param_4)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  size_t sVar4;
  ulong uVar5;
  ulong uVar6;
  
  sVar4 = strlen(param_2);
  FUN_00547cac(param_1,param_2,sVar4);
  uVar5 = param_3[1];
  puVar3 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar5 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar3 = param_3;
  }
  FUN_00547cac(param_1,puVar3,uVar5);
  bVar1 = *(byte *)((long)param_1 + 0x17);
  uVar5 = (ulong)bVar1;
  uVar2 = *param_4;
  if ((char)bVar1 < '\0') {
    uVar5 = param_1[1];
    uVar6 = (param_1[2] & 0x7fffffffffffffff) - 1;
    if (uVar5 == uVar6) goto LAB_005c4060;
  }
  else {
    if (bVar1 != 0x16) {
      if (0x15 < bVar1) {
                    /* try { // try from 005c40c0 to 005c40e7 has its CatchHandler @ 005c40e8 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                   "__s < __min_cap",
                   "__s should never be greater than or equal to the short string capacity");
      }
      *(byte *)((long)param_1 + 0x17) = bVar1 + 1;
      goto LAB_005c40a4;
    }
    uVar6 = 0x16;
LAB_005c4060:
    uVar5 = uVar6;
    FUN_0054774c(param_1,uVar5,1,uVar5,uVar5,0,0);
  }
  param_1[1] = uVar5 + 1;
  param_1 = (undefined8 *)*param_1;
LAB_005c40a4:
  *(undefined1 *)((long)param_1 + uVar5) = uVar2;
  ((undefined1 *)((long)param_1 + uVar5))[1] = 0;
  return;
}


// ===== 005c40ec  FUN_005c40ec =====

undefined8 FUN_005c40ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (*(char *)(param_1 + 0x29) == '\0') {
    return 0;
  }
  uVar1 = FUN_0054f64c(0x20);
  FUN_005c22e4(uVar1,param_4);
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar1,&PTR_PTR_thunk_FUN_00552768_00d25838,FUN_005be5f0);
}


// ===== 005c4148  FUN_005c4148 =====

void FUN_005c4148(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  void *__src;
  long lVar6;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 < (undefined8 *)param_1[2]) {
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = *param_2;
      param_1[1] = puVar3 + 1;
      return;
    }
                    /* try { // try from 005c4238 to 005c425f has its CatchHandler @ 005c4294 */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  __src = (void *)*param_1;
  lVar6 = (long)puVar3 - (long)__src >> 3;
  uVar1 = lVar6 + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar4 = (long)param_1[2] - (long)__src;
    uVar5 = uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    if (uVar5 != 0) {
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      __dest = operator_new(uVar5 * 8);
      puVar2 = (undefined8 *)((long)__dest + lVar6 * 8);
      *puVar2 = *param_2;
      memmove(__dest,__src,(long)puVar3 - (long)__src);
      *param_1 = __dest;
      param_1[1] = puVar2 + 1;
      param_1[2] = (void *)((long)__dest + uVar5 * 8);
      if (__src == (void *)0x0) {
        return;
      }
      operator_delete(__src);
      return;
    }
  }
  else {
    FUN_005c16d4(param_1);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h",
             0x23,"__location != nullptr","null pointer given to construct_at");
}


// ===== 005c429c  FUN_005c429c =====

void FUN_005c429c(undefined8 *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1[1] == param_1[2]) {
    local_48 = *param_2;
    FUN_005b4d30(&local_40);
    puVar6 = (undefined1 *)*param_1;
    uVar2 = *puVar6;
    *puVar6 = local_48;
    uVar8 = *(undefined8 *)(puVar6 + 8);
    *(undefined8 *)(puVar6 + 8) = local_40;
    local_48 = uVar2;
    local_40 = uVar8;
                    /* try { // try from 005c4348 to 005c434f has its CatchHandler @ 005c44e8 */
    FUN_005b2fc4(&local_40);
    param_1 = (undefined8 *)*param_1;
  }
  else {
    pcVar5 = *(char **)(param_1[2] + -8);
    if (*pcVar5 == '\x02') {
      puVar9 = *(undefined8 **)(pcVar5 + 8);
      puVar6 = (undefined1 *)puVar9[1];
      if (puVar6 < (undefined1 *)puVar9[2]) {
        if (puVar6 == (undefined1 *)0x0) {
          if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c44bc to 005c44e3 has its CatchHandler @ 005c44ec */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                       ,0x23,"__location != nullptr","null pointer given to construct_at");
          }
          goto LAB_005c4504;
        }
        *puVar6 = *param_2;
                    /* try { // try from 005c42fc to 005c42ff has its CatchHandler @ 005c44ec */
        puVar4 = (undefined8 *)FUN_005b4d30(puVar6 + 8);
        puVar6 = puVar6 + 0x10;
        puVar9[1] = puVar6;
      }
      else {
        puVar4 = (undefined8 *)FUN_005c4514(puVar9);
        puVar6 = (undefined1 *)puVar9[1];
      }
      if ((undefined1 *)*puVar9 == puVar6) {
        param_1 = puVar4;
        if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c4414 to 005c443b has its CatchHandler @ 005c4510 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        goto LAB_005c4504;
      }
      if (param_1[1] == param_1[2]) {
        param_1 = puVar4;
        if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c444c to 005c4473 has its CatchHandler @ 005c450c */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        goto LAB_005c4504;
      }
      plVar7 = *(long **)(*(long *)(param_1[2] + -8) + 8);
      lVar1 = plVar7[1];
      if (*plVar7 == lVar1) {
        param_1 = puVar4;
        if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c4484 to 005c44ab has its CatchHandler @ 005c4508 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        goto LAB_005c4504;
      }
      param_1 = (undefined8 *)(lVar1 + -0x10);
    }
    else {
      uVar2 = *param_2;
      FUN_005b4d30(&local_50);
      puVar6 = (undefined1 *)param_1[4];
      *puVar6 = uVar2;
      uVar8 = *(undefined8 *)(puVar6 + 8);
      *(undefined8 *)(puVar6 + 8) = local_50;
      local_50 = uVar8;
                    /* try { // try from 005c4394 to 005c439b has its CatchHandler @ 005c44e4 */
      FUN_005b2fc4(&local_50);
      param_1 = (undefined8 *)param_1[4];
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
LAB_005c4504:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 005c4514  FUN_005c4514 =====

void FUN_005c4514(long *param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  lVar11 = param_1[1] - *param_1 >> 4;
  uVar1 = lVar11 + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar8 = param_1[2] - *param_1;
    uVar9 = uVar8 >> 3;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7fffffffffffffef < uVar8) {
      uVar9 = 0xfffffffffffffff;
    }
    if (uVar9 != 0) {
      if (uVar9 >> 0x3c == 0) {
        pvVar5 = operator_new(uVar9 * 0x10);
        puVar12 = (undefined1 *)((long)pvVar5 + lVar11 * 0x10);
        *puVar12 = *param_2;
                    /* try { // try from 005c45b8 to 005c45bb has its CatchHandler @ 005c46f0 */
        FUN_005b4d30(puVar12 + 8);
        puVar3 = (undefined1 *)*param_1;
        puVar10 = (undefined1 *)param_1[1];
        puVar2 = puVar12 + 0x10;
        puVar7 = puVar10;
        if (puVar10 != puVar3) {
          do {
            uVar13 = *(undefined8 *)(puVar10 + -0x10);
            puVar7 = puVar10 + -0x10;
            *(undefined8 *)(puVar12 + -8) = *(undefined8 *)(puVar10 + -8);
            *(undefined8 *)(puVar12 + -0x10) = uVar13;
            puVar12 = puVar12 + -0x10;
            puVar10[-0x10] = 0;
            *(undefined8 *)(puVar10 + -8) = 0;
            puVar10 = puVar7;
          } while (puVar7 != puVar3);
          puVar10 = (undefined1 *)*param_1;
          puVar7 = (undefined1 *)param_1[1];
        }
        *param_1 = (long)puVar12;
        param_1[1] = (long)puVar2;
        param_1[2] = (long)((long)pvVar5 + uVar9 * 0x10);
        while (puVar7 != puVar10) {
                    /* try { // try from 005c461c to 005c461f has its CatchHandler @ 005c4718 */
          FUN_005b2fc4(puVar7 + -8,puVar7[-0x10]);
          puVar7 = puVar7 + -0x10;
        }
        if (puVar10 == (undefined1 *)0x0) {
          if (*(long *)(lVar4 + 0x28) == lVar6) {
            return;
          }
        }
        else if (*(long *)(lVar4 + 0x28) == lVar6) {
          operator_delete(puVar10);
          return;
        }
      }
      else if (*(long *)(lVar4 + 0x28) == lVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      goto LAB_005c4714;
    }
  }
  else {
    if (*(long *)(lVar4 + 0x28) != lVar6) goto LAB_005c4714;
    FUN_005b3754(param_1);
  }
  if (*(long *)(lVar4 + 0x28) == lVar6) {
                    /* try { // try from 005c46b4 to 005c46db has its CatchHandler @ 005c46f0 */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
LAB_005c4714:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005c471c  FUN_005c471c =====

void FUN_005c471c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1[1] == param_1[2]) {
    uVar11 = *param_2;
    pbVar6 = (byte *)*param_1;
    bVar2 = *pbVar6;
    *pbVar6 = 7;
    local_40 = *(undefined8 *)(pbVar6 + 8);
    local_48 = (ulong)bVar2;
    *(undefined8 *)(pbVar6 + 8) = uVar11;
                    /* try { // try from 005c47c8 to 005c47cb has its CatchHandler @ 005c495c */
    FUN_005b2fc4(&local_40);
    param_1 = (undefined8 *)*param_1;
  }
  else {
    pcVar5 = *(char **)(param_1[2] + -8);
    if (*pcVar5 == '\x02') {
      puVar10 = *(undefined8 **)(pcVar5 + 8);
      puVar4 = (undefined8 *)puVar10[1];
      if (puVar4 < (undefined8 *)puVar10[2]) {
        if (puVar4 == (undefined8 *)0x0) {
          if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c4930 to 005c4957 has its CatchHandler @ 005c4960 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                       ,0x23,"__location != nullptr","null pointer given to construct_at");
          }
          goto LAB_005c4978;
        }
        *puVar4 = 0;
        puVar4[1] = 0;
        uVar11 = *param_2;
        puVar9 = puVar4 + 2;
        *(undefined1 *)puVar4 = 7;
        puVar4[1] = uVar11;
        puVar10[1] = puVar9;
        puVar4 = param_1;
      }
      else {
        puVar4 = (undefined8 *)FUN_005c4988(puVar10);
        puVar9 = (undefined8 *)puVar10[1];
      }
      if ((undefined8 *)*puVar10 == puVar9) {
        param_1 = puVar4;
        if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c4888 to 005c48af has its CatchHandler @ 005c4984 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        goto LAB_005c4978;
      }
      if (param_1[1] == param_1[2]) {
        param_1 = puVar4;
        if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c48c0 to 005c48e7 has its CatchHandler @ 005c4980 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        goto LAB_005c4978;
      }
      plVar8 = *(long **)(*(long *)(param_1[2] + -8) + 8);
      lVar1 = plVar8[1];
      if (*plVar8 == lVar1) {
        param_1 = puVar4;
        if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c48f8 to 005c491f has its CatchHandler @ 005c497c */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        goto LAB_005c4978;
      }
      param_1 = (undefined8 *)(lVar1 + -0x10);
    }
    else {
      uVar11 = *param_2;
      puVar7 = (undefined1 *)param_1[4];
      *puVar7 = 7;
      local_50 = *(undefined8 *)(puVar7 + 8);
      *(undefined8 *)(puVar7 + 8) = uVar11;
                    /* try { // try from 005c480c to 005c480f has its CatchHandler @ 005c4958 */
      FUN_005b2fc4(&local_50);
      param_1 = (undefined8 *)param_1[4];
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
LAB_005c4978:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 005c4988  FUN_005c4988 =====

void FUN_005c4988(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  puVar3 = (undefined1 *)*param_1;
  puVar10 = (undefined1 *)param_1[1];
  lVar11 = (long)puVar10 - (long)puVar3 >> 4;
  uVar1 = lVar11 + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar9 = (ulong)(param_1[2] - (long)puVar3) >> 3;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - (long)puVar3)) {
      uVar9 = 0xfffffffffffffff;
    }
    if (uVar9 != 0) {
      if (uVar9 >> 0x3c == 0) {
        pvVar5 = operator_new(uVar9 * 0x10);
        puVar7 = (undefined8 *)((long)pvVar5 + lVar11 * 0x10);
        uVar12 = *param_2;
        puVar2 = puVar7 + 2;
        *puVar7 = 0;
        *(undefined1 *)puVar7 = 7;
        puVar7[1] = uVar12;
        puVar8 = puVar10;
        if (puVar10 != puVar3) {
          do {
            uVar12 = *(undefined8 *)(puVar10 + -0x10);
            puVar8 = puVar10 + -0x10;
            puVar7[-1] = *(undefined8 *)(puVar10 + -8);
            puVar7[-2] = uVar12;
            puVar7 = puVar7 + -2;
            puVar10[-0x10] = 0;
            *(undefined8 *)(puVar10 + -8) = 0;
            puVar10 = puVar8;
          } while (puVar8 != puVar3);
          puVar10 = (undefined1 *)*param_1;
          puVar8 = (undefined1 *)param_1[1];
        }
        *param_1 = (long)puVar7;
        param_1[1] = (long)puVar2;
        param_1[2] = (long)((long)pvVar5 + uVar9 * 0x10);
        while (puVar8 != puVar10) {
                    /* try { // try from 005c4a8c to 005c4a8f has its CatchHandler @ 005c4b90 */
          FUN_005b2fc4(puVar8 + -8,puVar8[-0x10]);
          puVar8 = puVar8 + -0x10;
        }
        if (puVar10 == (undefined1 *)0x0) {
          if (*(long *)(lVar4 + 0x28) == lVar6) {
            return;
          }
        }
        else if (*(long *)(lVar4 + 0x28) == lVar6) {
          operator_delete(puVar10);
          return;
        }
      }
      else if (*(long *)(lVar4 + 0x28) == lVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      goto LAB_005c4b8c;
    }
  }
  else {
    if (*(long *)(lVar4 + 0x28) != lVar6) goto LAB_005c4b8c;
    FUN_005b3754(param_1);
  }
  if (*(long *)(lVar4 + 0x28) == lVar6) {
                    /* try { // try from 005c4b2c to 005c4b53 has its CatchHandler @ 005c4b68 */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
LAB_005c4b8c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005c4b94  FUN_005c4b94 =====

void FUN_005c4b94(undefined8 *param_1,byte *param_2)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  undefined8 *puVar5;
  char *pcVar6;
  long *plVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_1[1] == param_1[2]) {
    bVar2 = *param_2;
    pbVar8 = (byte *)*param_1;
    bVar3 = *pbVar8;
    *pbVar8 = 4;
    local_40 = *(undefined8 *)(pbVar8 + 8);
    local_48 = (ulong)bVar3;
    *(ulong *)(pbVar8 + 8) = (ulong)bVar2;
                    /* try { // try from 005c4c3c to 005c4c3f has its CatchHandler @ 005c4dcc */
    FUN_005b2fc4(&local_40);
    param_1 = (undefined8 *)*param_1;
  }
  else {
    pcVar6 = *(char **)(param_1[2] + -8);
    if (*pcVar6 == '\x02') {
      puVar11 = *(undefined8 **)(pcVar6 + 8);
      puVar5 = (undefined8 *)puVar11[1];
      if (puVar5 < (undefined8 *)puVar11[2]) {
        if (puVar5 == (undefined8 *)0x0) {
          if (*(long *)(lVar4 + 0x28) == local_38) {
                    /* try { // try from 005c4da0 to 005c4dc7 has its CatchHandler @ 005c4dd0 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                       ,0x23,"__location != nullptr","null pointer given to construct_at");
          }
          goto LAB_005c4de8;
        }
        *puVar5 = 0;
        puVar5[1] = 0;
        bVar2 = *param_2;
        puVar10 = puVar5 + 2;
        *(undefined1 *)puVar5 = 4;
        puVar5[1] = (ulong)bVar2;
        puVar11[1] = puVar10;
        puVar5 = param_1;
      }
      else {
        puVar5 = (undefined8 *)FUN_005c4df8(puVar11);
        puVar10 = (undefined8 *)puVar11[1];
      }
      if ((undefined8 *)*puVar11 == puVar10) {
        param_1 = puVar5;
        if (*(long *)(lVar4 + 0x28) == local_38) {
                    /* try { // try from 005c4cf8 to 005c4d1f has its CatchHandler @ 005c4df4 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        goto LAB_005c4de8;
      }
      if (param_1[1] == param_1[2]) {
        param_1 = puVar5;
        if (*(long *)(lVar4 + 0x28) == local_38) {
                    /* try { // try from 005c4d30 to 005c4d57 has its CatchHandler @ 005c4df0 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        goto LAB_005c4de8;
      }
      plVar7 = *(long **)(*(long *)(param_1[2] + -8) + 8);
      lVar1 = plVar7[1];
      if (*plVar7 == lVar1) {
        param_1 = puVar5;
        if (*(long *)(lVar4 + 0x28) == local_38) {
                    /* try { // try from 005c4d68 to 005c4d8f has its CatchHandler @ 005c4dec */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        goto LAB_005c4de8;
      }
      param_1 = (undefined8 *)(lVar1 + -0x10);
    }
    else {
      bVar2 = *param_2;
      puVar9 = (undefined1 *)param_1[4];
      *puVar9 = 4;
      local_50 = *(undefined8 *)(puVar9 + 8);
      *(ulong *)(puVar9 + 8) = (ulong)bVar2;
                    /* try { // try from 005c4c7c to 005c4c7f has its CatchHandler @ 005c4dc8 */
      FUN_005b2fc4(&local_50);
      param_1 = (undefined8 *)param_1[4];
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
LAB_005c4de8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 005c4df8  FUN_005c4df8 =====

void FUN_005c4df8(long *param_1,byte *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 uVar13;
  
  lVar5 = tpidr_el0;
  lVar7 = *(long *)(lVar5 + 0x28);
  puVar3 = (undefined1 *)*param_1;
  puVar11 = (undefined1 *)param_1[1];
  lVar12 = (long)puVar11 - (long)puVar3 >> 4;
  uVar1 = lVar12 + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar10 = (ulong)(param_1[2] - (long)puVar3) >> 3;
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - (long)puVar3)) {
      uVar10 = 0xfffffffffffffff;
    }
    if (uVar10 != 0) {
      if (uVar10 >> 0x3c == 0) {
        pvVar6 = operator_new(uVar10 * 0x10);
        puVar8 = (undefined8 *)((long)pvVar6 + lVar12 * 0x10);
        bVar4 = *param_2;
        puVar2 = puVar8 + 2;
        *puVar8 = 0;
        puVar8[1] = (ulong)bVar4;
        *(undefined1 *)puVar8 = 4;
        puVar9 = puVar11;
        if (puVar11 != puVar3) {
          do {
            uVar13 = *(undefined8 *)(puVar11 + -0x10);
            puVar9 = puVar11 + -0x10;
            puVar8[-1] = *(undefined8 *)(puVar11 + -8);
            puVar8[-2] = uVar13;
            puVar8 = puVar8 + -2;
            puVar11[-0x10] = 0;
            *(undefined8 *)(puVar11 + -8) = 0;
            puVar11 = puVar9;
          } while (puVar9 != puVar3);
          puVar11 = (undefined1 *)*param_1;
          puVar9 = (undefined1 *)param_1[1];
        }
        *param_1 = (long)puVar8;
        param_1[1] = (long)puVar2;
        param_1[2] = (long)((long)pvVar6 + uVar10 * 0x10);
        while (puVar9 != puVar11) {
                    /* try { // try from 005c4ef8 to 005c4efb has its CatchHandler @ 005c4ffc */
          FUN_005b2fc4(puVar9 + -8,puVar9[-0x10]);
          puVar9 = puVar9 + -0x10;
        }
        if (puVar11 == (undefined1 *)0x0) {
          if (*(long *)(lVar5 + 0x28) == lVar7) {
            return;
          }
        }
        else if (*(long *)(lVar5 + 0x28) == lVar7) {
          operator_delete(puVar11);
          return;
        }
      }
      else if (*(long *)(lVar5 + 0x28) == lVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      goto LAB_005c4ff8;
    }
  }
  else {
    if (*(long *)(lVar5 + 0x28) != lVar7) goto LAB_005c4ff8;
    FUN_005b3754(param_1);
  }
  if (*(long *)(lVar5 + 0x28) == lVar7) {
                    /* try { // try from 005c4f98 to 005c4fbf has its CatchHandler @ 005c4fd4 */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
LAB_005c4ff8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005c5000  FUN_005c5000 =====

void FUN_005c5000(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1[1] == param_1[2]) {
    puVar5 = (undefined1 *)*param_1;
    local_48 = *puVar5;
    *puVar5 = 0;
    local_40 = *(undefined8 *)(puVar5 + 8);
    *(undefined8 *)(puVar5 + 8) = 0;
                    /* try { // try from 005c5094 to 005c5097 has its CatchHandler @ 005c521c */
    FUN_005b2fc4(&local_40);
    param_1 = (undefined8 *)*param_1;
  }
  else {
    pcVar4 = *(char **)(param_1[2] + -8);
    if (*pcVar4 == '\x02') {
      puVar8 = *(undefined8 **)(pcVar4 + 8);
      puVar5 = (undefined1 *)puVar8[1];
      if (puVar5 < (undefined1 *)puVar8[2]) {
        if (puVar5 == (undefined1 *)0x0) {
          if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 005c51f0 to 005c5217 has its CatchHandler @ 005c5220 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                       ,0x23,"__location != nullptr","null pointer given to construct_at");
          }
          goto LAB_005c5238;
        }
        puVar7 = puVar5 + 0x10;
        *puVar5 = 0;
        *(undefined8 *)(puVar5 + 8) = 0;
        puVar8[1] = puVar7;
        puVar3 = param_1;
      }
      else {
        puVar3 = (undefined8 *)FUN_005c5248(puVar8);
        puVar7 = (undefined1 *)puVar8[1];
      }
      if ((undefined1 *)*puVar8 == puVar7) {
        param_1 = puVar3;
        if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 005c5148 to 005c516f has its CatchHandler @ 005c5244 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        goto LAB_005c5238;
      }
      if (param_1[1] == param_1[2]) {
        param_1 = puVar3;
        if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 005c5180 to 005c51a7 has its CatchHandler @ 005c5240 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        goto LAB_005c5238;
      }
      plVar6 = *(long **)(*(long *)(param_1[2] + -8) + 8);
      lVar1 = plVar6[1];
      if (*plVar6 == lVar1) {
        param_1 = puVar3;
        if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 005c51b8 to 005c51df has its CatchHandler @ 005c523c */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        goto LAB_005c5238;
      }
      param_1 = (undefined8 *)(lVar1 + -0x10);
    }
    else {
      puVar5 = (undefined1 *)param_1[4];
      *puVar5 = 0;
      local_50 = *(undefined8 *)(puVar5 + 8);
      *(undefined8 *)(puVar5 + 8) = 0;
                    /* try { // try from 005c50cc to 005c50cf has its CatchHandler @ 005c5218 */
      FUN_005b2fc4(&local_50);
      param_1 = (undefined8 *)param_1[4];
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_005c5238:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 005c5248  FUN_005c5248 =====

void FUN_005c5248(long *param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  puVar3 = (undefined1 *)*param_1;
  puVar10 = (undefined1 *)param_1[1];
  lVar11 = (long)puVar10 - (long)puVar3 >> 4;
  uVar1 = lVar11 + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar9 = (ulong)(param_1[2] - (long)puVar3) >> 3;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - (long)puVar3)) {
      uVar9 = 0xfffffffffffffff;
    }
    if (uVar9 != 0) {
      if (uVar9 >> 0x3c == 0) {
        pvVar5 = operator_new(uVar9 * 0x10);
        puVar7 = (undefined1 *)((long)pvVar5 + lVar11 * 0x10);
        puVar2 = puVar7 + 0x10;
        *puVar7 = 0;
        *(undefined8 *)(puVar7 + 8) = 0;
        puVar8 = puVar10;
        if (puVar10 != puVar3) {
          do {
            uVar12 = *(undefined8 *)(puVar10 + -0x10);
            puVar8 = puVar10 + -0x10;
            *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar10 + -8);
            *(undefined8 *)(puVar7 + -0x10) = uVar12;
            puVar7 = puVar7 + -0x10;
            puVar10[-0x10] = 0;
            *(undefined8 *)(puVar10 + -8) = 0;
            puVar10 = puVar8;
          } while (puVar8 != puVar3);
          puVar10 = (undefined1 *)*param_1;
          puVar8 = (undefined1 *)param_1[1];
        }
        *param_1 = (long)puVar7;
        param_1[1] = (long)puVar2;
        param_1[2] = (long)((long)pvVar5 + uVar9 * 0x10);
        while (puVar8 != puVar10) {
                    /* try { // try from 005c5338 to 005c533b has its CatchHandler @ 005c5434 */
          FUN_005b2fc4(puVar8 + -8,puVar8[-0x10]);
          puVar8 = puVar8 + -0x10;
        }
        if (puVar10 == (undefined1 *)0x0) {
          if (*(long *)(lVar4 + 0x28) == lVar6) {
            return;
          }
        }
        else if (*(long *)(lVar4 + 0x28) == lVar6) {
          operator_delete(puVar10);
          return;
        }
      }
      else if (*(long *)(lVar4 + 0x28) == lVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      goto LAB_005c5430;
    }
  }
  else {
    if (*(long *)(lVar4 + 0x28) != lVar6) goto LAB_005c5430;
    FUN_005b3754(param_1);
  }
  if (*(long *)(lVar4 + 0x28) == lVar6) {
                    /* try { // try from 005c53d0 to 005c53f7 has its CatchHandler @ 005c540c */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
LAB_005c5430:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005c5438  FUN_005c5438 =====

void FUN_005c5438(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  char *pcVar5;
  long *plVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1[1] == param_1[2]) {
    uVar10 = *param_2;
    pbVar7 = (byte *)*param_1;
    bVar2 = *pbVar7;
    *pbVar7 = 5;
    local_40 = *(undefined8 *)(pbVar7 + 8);
    local_48 = (ulong)bVar2;
    *(undefined8 *)(pbVar7 + 8) = uVar10;
                    /* try { // try from 005c54e0 to 005c54e3 has its CatchHandler @ 005c5670 */
    FUN_005b2fc4(&local_40);
    param_1 = (undefined8 *)*param_1;
  }
  else {
    pcVar5 = *(char **)(param_1[2] + -8);
    if (*pcVar5 == '\x02') {
      puVar11 = *(undefined8 **)(pcVar5 + 8);
      puVar4 = (undefined8 *)puVar11[1];
      if (puVar4 < (undefined8 *)puVar11[2]) {
        if (puVar4 == (undefined8 *)0x0) {
          if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c5644 to 005c566b has its CatchHandler @ 005c5674 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                       ,0x23,"__location != nullptr","null pointer given to construct_at");
          }
          goto LAB_005c568c;
        }
        *puVar4 = 0;
        puVar4[1] = 0;
        uVar10 = *param_2;
        puVar9 = puVar4 + 2;
        *(undefined1 *)puVar4 = 5;
        puVar4[1] = uVar10;
        puVar11[1] = puVar9;
        puVar4 = param_1;
      }
      else {
        puVar4 = (undefined8 *)FUN_005c569c(puVar11);
        puVar9 = (undefined8 *)puVar11[1];
      }
      if ((undefined8 *)*puVar11 == puVar9) {
        param_1 = puVar4;
        if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c559c to 005c55c3 has its CatchHandler @ 005c5698 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        goto LAB_005c568c;
      }
      if (param_1[1] == param_1[2]) {
        param_1 = puVar4;
        if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c55d4 to 005c55fb has its CatchHandler @ 005c5694 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        goto LAB_005c568c;
      }
      plVar6 = *(long **)(*(long *)(param_1[2] + -8) + 8);
      lVar1 = plVar6[1];
      if (*plVar6 == lVar1) {
        param_1 = puVar4;
        if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c560c to 005c5633 has its CatchHandler @ 005c5690 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        goto LAB_005c568c;
      }
      param_1 = (undefined8 *)(lVar1 + -0x10);
    }
    else {
      uVar10 = *param_2;
      puVar8 = (undefined1 *)param_1[4];
      *puVar8 = 5;
      local_50 = *(undefined8 *)(puVar8 + 8);
      *(undefined8 *)(puVar8 + 8) = uVar10;
                    /* try { // try from 005c5520 to 005c5523 has its CatchHandler @ 005c566c */
      FUN_005b2fc4(&local_50);
      param_1 = (undefined8 *)param_1[4];
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
LAB_005c568c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 005c569c  FUN_005c569c =====

void FUN_005c569c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long lVar12;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  puVar3 = (undefined1 *)*param_1;
  puVar11 = (undefined1 *)param_1[1];
  lVar12 = (long)puVar11 - (long)puVar3 >> 4;
  uVar1 = lVar12 + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar9 = (ulong)(param_1[2] - (long)puVar3) >> 3;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - (long)puVar3)) {
      uVar9 = 0xfffffffffffffff;
    }
    if (uVar9 != 0) {
      if (uVar9 >> 0x3c == 0) {
        pvVar5 = operator_new(uVar9 * 0x10);
        puVar7 = (undefined8 *)((long)pvVar5 + lVar12 * 0x10);
        uVar10 = *param_2;
        puVar2 = puVar7 + 2;
        *puVar7 = 0;
        puVar7[1] = uVar10;
        *(undefined1 *)puVar7 = 5;
        puVar8 = puVar11;
        if (puVar11 != puVar3) {
          do {
            uVar10 = *(undefined8 *)(puVar11 + -0x10);
            puVar8 = puVar11 + -0x10;
            puVar7[-1] = *(undefined8 *)(puVar11 + -8);
            puVar7[-2] = uVar10;
            puVar7 = puVar7 + -2;
            puVar11[-0x10] = 0;
            *(undefined8 *)(puVar11 + -8) = 0;
            puVar11 = puVar8;
          } while (puVar8 != puVar3);
          puVar11 = (undefined1 *)*param_1;
          puVar8 = (undefined1 *)param_1[1];
        }
        *param_1 = (long)puVar7;
        param_1[1] = (long)puVar2;
        param_1[2] = (long)((long)pvVar5 + uVar9 * 0x10);
        while (puVar8 != puVar11) {
                    /* try { // try from 005c579c to 005c579f has its CatchHandler @ 005c58a0 */
          FUN_005b2fc4(puVar8 + -8,puVar8[-0x10]);
          puVar8 = puVar8 + -0x10;
        }
        if (puVar11 == (undefined1 *)0x0) {
          if (*(long *)(lVar4 + 0x28) == lVar6) {
            return;
          }
        }
        else if (*(long *)(lVar4 + 0x28) == lVar6) {
          operator_delete(puVar11);
          return;
        }
      }
      else if (*(long *)(lVar4 + 0x28) == lVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      goto LAB_005c589c;
    }
  }
  else {
    if (*(long *)(lVar4 + 0x28) != lVar6) goto LAB_005c589c;
    FUN_005b3754(param_1);
  }
  if (*(long *)(lVar4 + 0x28) == lVar6) {
                    /* try { // try from 005c583c to 005c5863 has its CatchHandler @ 005c5878 */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
LAB_005c589c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005c58a4  FUN_005c58a4 =====

void FUN_005c58a4(long *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  char *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_1[1] == param_1[2]) {
    local_50 = 0;
    local_58 = 3;
    uStack_57 = 0;
                    /* try { // try from 005c5930 to 005c5937 has its CatchHandler @ 005c5b38 */
    pvVar4 = operator_new(0x18);
                    /* try { // try from 005c5938 to 005c5943 has its CatchHandler @ 005c5b28 */
    FUN_004c55b4(pvVar4,param_2);
    puVar6 = (undefined1 *)*param_1;
    uVar1 = *puVar6;
    *puVar6 = 3;
    local_50 = *(undefined8 *)(puVar6 + 8);
    _local_58 = CONCAT71(uStack_57,uVar1);
    *(void **)(puVar6 + 8) = pvVar4;
                    /* try { // try from 005c596c to 005c5973 has its CatchHandler @ 005c5b24 */
    FUN_005b2fc4(&local_50);
    lVar3 = *param_1;
  }
  else {
    pcVar5 = *(char **)(param_1[2] + -8);
    if (*pcVar5 == '\x02') {
      plVar8 = *(long **)(pcVar5 + 8);
      uVar9 = plVar8[1];
      if (uVar9 < (ulong)plVar8[2]) {
                    /* try { // try from 005c5904 to 005c590f has its CatchHandler @ 005c5aec */
        lVar3 = FUN_005c5d38(plVar8 + 2,uVar9,param_2);
        lVar7 = uVar9 + 0x10;
        plVar8[1] = lVar7;
      }
      else {
        lVar3 = FUN_005c5b74(plVar8,param_2);
        lVar7 = plVar8[1];
      }
      if (*plVar8 == lVar7) {
        if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 005c5a54 to 005c5a7b has its CatchHandler @ 005c5b70 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        goto LAB_005c5b60;
      }
      if (param_1[1] == param_1[2]) {
        if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 005c5a8c to 005c5ab3 has its CatchHandler @ 005c5b6c */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        goto LAB_005c5b60;
      }
      plVar8 = *(long **)(*(long *)(param_1[2] + -8) + 8);
      lVar7 = plVar8[1];
      if (*plVar8 == lVar7) {
        if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 005c5ac4 to 005c5aeb has its CatchHandler @ 005c5b68 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        goto LAB_005c5b60;
      }
      lVar3 = lVar7 + -0x10;
    }
    else {
      local_60 = 0;
                    /* try { // try from 005c5990 to 005c5997 has its CatchHandler @ 005c5b0c */
      pvVar4 = operator_new(0x18);
                    /* try { // try from 005c5998 to 005c59a3 has its CatchHandler @ 005c5afc */
      FUN_004c55b4(pvVar4,param_2);
      puVar6 = (undefined1 *)param_1[4];
      *puVar6 = 3;
      local_60 = *(undefined8 *)(puVar6 + 8);
      *(void **)(puVar6 + 8) = pvVar4;
                    /* try { // try from 005c59cc to 005c59d3 has its CatchHandler @ 005c5af8 */
      FUN_005b2fc4(&local_60);
      lVar3 = param_1[4];
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_005c5b60:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


// ===== 005c5b74  FUN_005c5b74 =====

void FUN_005c5b74(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  void *pvVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar9 = param_1[1] - *param_1 >> 4;
  uVar1 = lVar9 + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar7 = param_1[2] - *param_1;
    uVar8 = uVar7 >> 3;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffef < uVar7) {
      uVar8 = 0xfffffffffffffff;
    }
    if (uVar8 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (uVar8 >> 0x3c != 0) goto LAB_005c5cf8;
      pvVar4 = operator_new(uVar8 << 4);
    }
    pvVar10 = (void *)((long)pvVar4 + lVar9 * 0x10);
                    /* try { // try from 005c5c10 to 005c5c1f has its CatchHandler @ 005c5d0c */
    FUN_005c5d38(param_1 + 2,pvVar10,param_2);
    puVar2 = (undefined1 *)*param_1;
    puVar11 = (undefined1 *)param_1[1];
    lVar9 = (long)pvVar10 + 0x10;
    puVar6 = puVar11;
    if (puVar11 != puVar2) {
      do {
        uVar12 = *(undefined8 *)(puVar11 + -0x10);
        puVar6 = puVar11 + -0x10;
        *(undefined8 *)((long)pvVar10 + -8) = *(undefined8 *)(puVar11 + -8);
        *(undefined8 *)((long)pvVar10 + -0x10) = uVar12;
        pvVar10 = (void *)((long)pvVar10 + -0x10);
        puVar11[-0x10] = 0;
        *(undefined8 *)(puVar11 + -8) = 0;
        puVar11 = puVar6;
      } while (puVar6 != puVar2);
      puVar11 = (undefined1 *)*param_1;
      puVar6 = (undefined1 *)param_1[1];
    }
    *param_1 = (long)pvVar10;
    param_1[1] = lVar9;
    param_1[2] = (long)((long)pvVar4 + uVar8 * 0x10);
    while (puVar6 != puVar11) {
                    /* try { // try from 005c5c80 to 005c5c83 has its CatchHandler @ 005c5d34 */
      FUN_005b2fc4(puVar6 + -8,puVar6[-0x10]);
      puVar6 = puVar6 + -0x10;
    }
    if (puVar11 == (undefined1 *)0x0) {
      if (*(long *)(lVar3 + 0x28) == lVar5) {
        return;
      }
    }
    else if (*(long *)(lVar3 + 0x28) == lVar5) {
      operator_delete(puVar11);
      return;
    }
  }
  else {
    if (*(long *)(lVar3 + 0x28) != lVar5) goto LAB_005c5d30;
    FUN_005b3754(param_1);
LAB_005c5cf8:
    if (*(long *)(lVar3 + 0x28) == lVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
  }
LAB_005c5d30:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005c5d38  FUN_005c5d38 =====

void FUN_005c5d38(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  void *pvVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)param_2 = 3;
                    /* try { // try from 005c5d60 to 005c5d67 has its CatchHandler @ 005c5dc4 */
    pvVar1 = operator_new(0x18);
                    /* try { // try from 005c5d68 to 005c5d73 has its CatchHandler @ 005c5db0 */
    FUN_004c55b4(pvVar1,param_3);
    param_2[1] = pvVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h",
             0x23,"__location != nullptr","null pointer given to construct_at");
}


// ===== 005c5de0  FUN_005c5de0 =====

void FUN_005c5de0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  char *pcVar5;
  long *plVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_1[1] == param_1[2]) {
    uVar10 = *param_2;
    pbVar7 = (byte *)*param_1;
    bVar2 = *pbVar7;
    *pbVar7 = 6;
    local_40 = *(undefined8 *)(pbVar7 + 8);
    local_48 = (ulong)bVar2;
    *(undefined8 *)(pbVar7 + 8) = uVar10;
                    /* try { // try from 005c5e88 to 005c5e8b has its CatchHandler @ 005c6018 */
    FUN_005b2fc4(&local_40);
    param_1 = (undefined8 *)*param_1;
  }
  else {
    pcVar5 = *(char **)(param_1[2] + -8);
    if (*pcVar5 == '\x02') {
      puVar11 = *(undefined8 **)(pcVar5 + 8);
      puVar4 = (undefined8 *)puVar11[1];
      if (puVar4 < (undefined8 *)puVar11[2]) {
        if (puVar4 == (undefined8 *)0x0) {
          if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c5fec to 005c6013 has its CatchHandler @ 005c601c */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                       ,0x23,"__location != nullptr","null pointer given to construct_at");
          }
          goto LAB_005c6034;
        }
        *puVar4 = 0;
        puVar4[1] = 0;
        uVar10 = *param_2;
        puVar9 = puVar4 + 2;
        *(undefined1 *)puVar4 = 6;
        puVar4[1] = uVar10;
        puVar11[1] = puVar9;
        puVar4 = param_1;
      }
      else {
        puVar4 = (undefined8 *)FUN_005c6044(puVar11);
        puVar9 = (undefined8 *)puVar11[1];
      }
      if ((undefined8 *)*puVar11 == puVar9) {
        param_1 = puVar4;
        if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c5f44 to 005c5f6b has its CatchHandler @ 005c6040 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        goto LAB_005c6034;
      }
      if (param_1[1] == param_1[2]) {
        param_1 = puVar4;
        if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c5f7c to 005c5fa3 has its CatchHandler @ 005c603c */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        goto LAB_005c6034;
      }
      plVar6 = *(long **)(*(long *)(param_1[2] + -8) + 8);
      lVar1 = plVar6[1];
      if (*plVar6 == lVar1) {
        param_1 = puVar4;
        if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c5fb4 to 005c5fdb has its CatchHandler @ 005c6038 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        goto LAB_005c6034;
      }
      param_1 = (undefined8 *)(lVar1 + -0x10);
    }
    else {
      uVar10 = *param_2;
      puVar8 = (undefined1 *)param_1[4];
      *puVar8 = 6;
      local_50 = *(undefined8 *)(puVar8 + 8);
      *(undefined8 *)(puVar8 + 8) = uVar10;
                    /* try { // try from 005c5ec8 to 005c5ecb has its CatchHandler @ 005c6014 */
      FUN_005b2fc4(&local_50);
      param_1 = (undefined8 *)param_1[4];
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
LAB_005c6034:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 005c6044  FUN_005c6044 =====

void FUN_005c6044(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long lVar12;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  puVar3 = (undefined1 *)*param_1;
  puVar11 = (undefined1 *)param_1[1];
  lVar12 = (long)puVar11 - (long)puVar3 >> 4;
  uVar1 = lVar12 + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar9 = (ulong)(param_1[2] - (long)puVar3) >> 3;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - (long)puVar3)) {
      uVar9 = 0xfffffffffffffff;
    }
    if (uVar9 != 0) {
      if (uVar9 >> 0x3c == 0) {
        pvVar5 = operator_new(uVar9 * 0x10);
        puVar7 = (undefined8 *)((long)pvVar5 + lVar12 * 0x10);
        uVar10 = *param_2;
        puVar2 = puVar7 + 2;
        *puVar7 = 0;
        puVar7[1] = uVar10;
        *(undefined1 *)puVar7 = 6;
        puVar8 = puVar11;
        if (puVar11 != puVar3) {
          do {
            uVar10 = *(undefined8 *)(puVar11 + -0x10);
            puVar8 = puVar11 + -0x10;
            puVar7[-1] = *(undefined8 *)(puVar11 + -8);
            puVar7[-2] = uVar10;
            puVar7 = puVar7 + -2;
            puVar11[-0x10] = 0;
            *(undefined8 *)(puVar11 + -8) = 0;
            puVar11 = puVar8;
          } while (puVar8 != puVar3);
          puVar11 = (undefined1 *)*param_1;
          puVar8 = (undefined1 *)param_1[1];
        }
        *param_1 = (long)puVar7;
        param_1[1] = (long)puVar2;
        param_1[2] = (long)((long)pvVar5 + uVar9 * 0x10);
        while (puVar8 != puVar11) {
                    /* try { // try from 005c6144 to 005c6147 has its CatchHandler @ 005c6248 */
          FUN_005b2fc4(puVar8 + -8,puVar8[-0x10]);
          puVar8 = puVar8 + -0x10;
        }
        if (puVar11 == (undefined1 *)0x0) {
          if (*(long *)(lVar4 + 0x28) == lVar6) {
            return;
          }
        }
        else if (*(long *)(lVar4 + 0x28) == lVar6) {
          operator_delete(puVar11);
          return;
        }
      }
      else if (*(long *)(lVar4 + 0x28) == lVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      goto LAB_005c6244;
    }
  }
  else {
    if (*(long *)(lVar4 + 0x28) != lVar6) goto LAB_005c6244;
    FUN_005b3754(param_1);
  }
  if (*(long *)(lVar4 + 0x28) == lVar6) {
                    /* try { // try from 005c61e4 to 005c620b has its CatchHandler @ 005c6220 */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
LAB_005c6244:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005c624c  FUN_005c624c =====

/* WARNING: Removing unreachable block (ram,0x005c690c) */
/* WARNING: Removing unreachable block (ram,0x005c68dc) */
/* WARNING: Removing unreachable block (ram,0x005c68ac) */
/* WARNING: Removing unreachable block (ram,0x005c68c4) */
/* WARNING: Removing unreachable block (ram,0x005c68f4) */
/* WARNING: Removing unreachable block (ram,0x005c6924) */

void FUN_005c624c(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  void *pvVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  void *pvVar12;
  undefined8 uVar13;
  long lVar14;
  void *pvVar15;
  undefined8 uVar16;
  long lVar17;
  char cVar18;
  undefined2 uVar19;
  uint uVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  undefined1 local_240 [8];
  undefined1 auStack_238 [8];
  char local_230 [8];
  long local_228;
  void *local_220;
  undefined8 uStack_218;
  long local_210;
  char local_208;
  void *local_200;
  undefined8 uStack_1f8;
  long local_1f0;
  char local_1e8;
  void *local_1e0;
  undefined8 uStack_1d8;
  long local_1d0;
  char local_1c8;
  void *local_1c0;
  undefined8 uStack_1b8;
  long local_1b0;
  char local_1a8;
  void *local_1a0;
  undefined8 uStack_198;
  long local_190;
  char local_188;
  void *local_180;
  undefined8 uStack_178;
  long local_170;
  char local_168;
  void *local_160;
  undefined8 uStack_158;
  long local_150;
  undefined1 local_148;
  void *local_140;
  undefined8 uStack_138;
  long local_130;
  undefined1 local_128;
  void *local_120;
  undefined8 uStack_118;
  long local_110;
  undefined1 local_108;
  void *local_100;
  undefined8 uStack_f8;
  long local_f0;
  undefined1 local_e8;
  void *local_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined1 local_c8;
  void *local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined1 local_a8;
  char local_a0;
  undefined8 local_90 [2];
  code *local_80;
  undefined8 *local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  local_80 = FUN_005b9584;
  local_78 = &DAT_001f1910;
                    /* try { // try from 005c6290 to 005c62a3 has its CatchHandler @ 005c6bbc */
  FUN_005b058c(local_230,param_2,local_90,1,0);
  if ((code *)local_78[1] != (code *)0x0) {
                    /* try { // try from 005c62b4 to 005c62b7 has its CatchHandler @ 005c6a4c */
    (*(code *)local_78[1])(local_90[0]);
  }
  local_160 = (void *)((ulong)local_160 & 0xffffffffffffff00);
  local_a0 = '\0';
  if (local_230[0] == '\x01') {
    plVar24 = (long *)(local_228 + 8);
    plVar26 = (long *)*plVar24;
    plVar25 = plVar24;
    if (plVar26 == (long *)0x0) {
LAB_005c6328:
      plVar25 = plVar24;
    }
    else {
      do {
        cVar18 = FUN_0041d7a0(plVar26 + 4,&DAT_00d63a18);
        plVar2 = plVar26 + 1;
        if (-1 < cVar18) {
          plVar25 = plVar26;
          plVar2 = plVar26;
        }
        plVar26 = (long *)*plVar2;
      } while (plVar26 != (long *)0x0);
      if ((plVar25 == plVar24) ||
         (uVar20 = FUN_0041d7a0(&DAT_00d63a18,plVar25 + 4), (uVar20 >> 7 & 1) != 0))
      goto LAB_005c6328;
    }
    if (plVar25 != (long *)(local_228 + 8)) {
                    /* try { // try from 005c633c to 005c6357 has its CatchHandler @ 005c6a44 */
      uVar21 = FUN_005c6d4c(local_230,&DAT_00d63a18);
      FUN_005b5058(local_240,uVar21);
                    /* try { // try from 005c6358 to 005c636f has its CatchHandler @ 005c6a10 */
      FUN_005c6f40(&local_220,local_240,&DAT_00d63a30);
                    /* try { // try from 005c6374 to 005c6387 has its CatchHandler @ 005c69f0 */
      FUN_005c6f40(&local_200,local_240,&DAT_00d63a48);
                    /* try { // try from 005c6390 to 005c63a3 has its CatchHandler @ 005c69d0 */
      FUN_005c6f40(&local_1e0,local_240,&DAT_00d63a60);
                    /* try { // try from 005c63a8 to 005c63bb has its CatchHandler @ 005c69b0 */
      FUN_005c6f40(&local_1c0,local_240,&DAT_00d63a78);
                    /* try { // try from 005c63c4 to 005c63d7 has its CatchHandler @ 005c6990 */
      FUN_005c6f40(&local_1a0,local_240,&DAT_00d63a90);
                    /* try { // try from 005c63dc to 005c63ef has its CatchHandler @ 005c6970 */
      FUN_005c6f40(&local_180,local_240,&DAT_00d63aa8);
      lVar17 = local_170;
      uVar16 = uStack_178;
      pvVar15 = local_180;
      lVar14 = local_190;
      uVar13 = uStack_198;
      pvVar12 = local_1a0;
      lVar11 = local_1b0;
      uVar10 = uStack_1b8;
      lVar9 = local_1d0;
      uVar8 = uStack_1d8;
      pvVar7 = local_1e0;
      lVar6 = local_1f0;
      uVar5 = uStack_1f8;
      lVar4 = local_210;
      uVar21 = uStack_218;
      pvVar3 = local_220;
      if (local_a0 == '\0') {
        local_160 = (void *)((ulong)local_160 & 0xffffffffffffff00);
        local_148 = local_208 != '\0';
        if ((bool)local_148) {
          uStack_218 = 0;
          local_210 = 0;
          local_220 = (void *)0x0;
          uStack_158 = uVar21;
          local_160 = pvVar3;
          local_150 = lVar4;
        }
        local_140 = (void *)((ulong)local_140 & 0xffffffffffffff00);
        local_128 = local_1e8 != '\0';
        if ((bool)local_128) {
          uStack_1f8 = 0;
          local_1f0 = 0;
          uStack_138 = uVar5;
          local_140 = local_200;
          local_130 = lVar6;
          local_200 = (void *)0x0;
        }
        local_120 = (void *)((ulong)local_120 & 0xffffffffffffff00);
        local_108 = local_1c8 != '\0';
        if ((bool)local_108) {
          uStack_1d8 = 0;
          local_1d0 = 0;
          local_1e0 = (void *)0x0;
          uStack_118 = uVar8;
          local_120 = pvVar7;
          local_110 = lVar9;
        }
        local_100 = (void *)((ulong)local_100 & 0xffffffffffffff00);
        local_e8 = local_1a8 != '\0';
        if ((bool)local_e8) {
          uStack_1b8 = 0;
          local_1b0 = 0;
          uStack_f8 = uVar10;
          local_100 = local_1c0;
          local_f0 = lVar11;
          local_1c0 = (void *)0x0;
        }
        local_e0 = (void *)((ulong)local_e0 & 0xffffffffffffff00);
        local_c8 = local_188 != '\0';
        if ((bool)local_c8) {
          uStack_198 = 0;
          local_190 = 0;
          local_1a0 = (void *)0x0;
          uStack_d8 = uVar13;
          local_e0 = pvVar12;
          local_d0 = lVar14;
        }
        local_c0 = (void *)((ulong)local_c0 & 0xffffffffffffff00);
        local_a8 = local_168 != '\0';
        if ((bool)local_a8) {
          uStack_178 = 0;
          local_170 = 0;
          local_180 = (void *)0x0;
          uStack_b8 = uVar16;
          local_c0 = pvVar15;
          local_b0 = lVar17;
        }
        local_a0 = '\x01';
      }
      else {
        FUN_005c880c(&local_160,&local_220);
      }
      if ((local_168 != '\0') && (local_170 < 0)) {
        operator_delete(local_180);
      }
      if ((local_188 != '\0') && (local_190 < 0)) {
        operator_delete(local_1a0);
      }
      if ((local_1a8 != '\0') && (local_1b0 < 0)) {
        operator_delete(local_1c0);
      }
      if ((local_1c8 != '\0') && (local_1d0 < 0)) {
        operator_delete(local_1e0);
      }
      if ((local_1e8 != '\0') && (local_1f0 < 0)) {
        operator_delete(local_200);
      }
      if ((local_208 != '\0') && (local_210 < 0)) {
        operator_delete(local_220);
      }
                    /* try { // try from 005c65e4 to 005c65e7 has its CatchHandler @ 005c696c */
      FUN_005b2fc4(auStack_238,local_240[0]);
    }
  }
                    /* try { // try from 005c65e8 to 005c65fb has its CatchHandler @ 005c6bb4 */
  FUN_005c6f40(param_1,local_230,&DAT_00d63880);
                    /* try { // try from 005c6600 to 005c6613 has its CatchHandler @ 005c6bac */
  FUN_005c6f40(param_1 + 0x20,local_230,&DAT_00d63868);
                    /* try { // try from 005c6618 to 005c662b has its CatchHandler @ 005c6ba0 */
  FUN_005c6f40(param_1 + 0x40,local_230,&DAT_00d63898);
                    /* try { // try from 005c6630 to 005c6643 has its CatchHandler @ 005c6b94 */
  FUN_005c6f40(param_1 + 0x60,local_230,&DAT_00d638b0);
                    /* try { // try from 005c6648 to 005c665b has its CatchHandler @ 005c6b84 */
  FUN_005c6f40(param_1 + 0x80,local_230,&DAT_00d638c8);
                    /* try { // try from 005c6660 to 005c6673 has its CatchHandler @ 005c6b74 */
  FUN_005c6f40(param_1 + 0xa0,local_230,&DAT_00d638e0);
                    /* try { // try from 005c6678 to 005c668f has its CatchHandler @ 005c6b64 */
  FUN_005c6f40(param_1 + 0xc0,local_230,&DAT_00d638f8);
                    /* try { // try from 005c6694 to 005c66ab has its CatchHandler @ 005c6b54 */
  FUN_005c6f40(param_1 + 0xe0,local_230,&DAT_00d63910);
                    /* try { // try from 005c66b0 to 005c66c7 has its CatchHandler @ 005c6b44 */
  FUN_005c6f40(param_1 + 0x100,local_230,&DAT_00d63928);
                    /* try { // try from 005c66cc to 005c66df has its CatchHandler @ 005c6b34 */
  FUN_005c6f40(local_230,&DAT_00d63940);
                    /* try { // try from 005c66e4 to 005c66f7 has its CatchHandler @ 005c6b24 */
  FUN_005c6f40(local_230,&DAT_00d63958);
                    /* try { // try from 005c66f8 to 005c6723 has its CatchHandler @ 005c6bdc */
  uVar19 = FUN_005c7134(local_230,&DAT_00d63970);
  *(undefined2 *)(param_1 + 0x160) = uVar19;
  FUN_005c6f40(local_230,&DAT_00d63988);
                    /* try { // try from 005c6728 to 005c673b has its CatchHandler @ 005c6af8 */
  FUN_005c6f40(local_230,&DAT_00d639a0);
                    /* try { // try from 005c6740 to 005c6753 has its CatchHandler @ 005c6acc */
  FUN_005c6f40(param_1 + 0x1a8,local_230,&DAT_00d639b8);
                    /* try { // try from 005c6758 to 005c676b has its CatchHandler @ 005c6aa4 */
  FUN_005c6f40(param_1 + 0x1c8,local_230,&DAT_00d639d0);
                    /* try { // try from 005c6770 to 005c6783 has its CatchHandler @ 005c6a7c */
  FUN_005c6f40(param_1 + 0x1e8,local_230,&DAT_00d639e8);
                    /* try { // try from 005c6784 to 005c6793 has its CatchHandler @ 005c6a54 */
  uVar19 = FUN_005c7134(local_230,&DAT_00d63a00);
  *(undefined2 *)(param_1 + 0x208) = uVar19;
  *(undefined1 *)(param_1 + 0x210) = 0;
  *(undefined1 *)(param_1 + 0x2d0) = 0;
  if (local_a0 != '\0') {
                    /* try { // try from 005c67ac to 005c67b7 has its CatchHandler @ 005c6a24 */
    FUN_005c8cc4(param_1 + 0x210,&local_160);
    *(undefined1 *)(param_1 + 0x2d0) = 1;
  }
  if (local_230[0] == '\x01') {
    plVar24 = (long *)(local_228 + 8);
    plVar26 = (long *)*plVar24;
    plVar25 = plVar24;
    if (plVar26 == (long *)0x0) {
LAB_005c6838:
      plVar25 = plVar24;
    }
    else {
      do {
        cVar18 = FUN_0041d7a0(plVar26 + 4,&DAT_00d63ac0);
        plVar2 = plVar26 + 1;
        if (-1 < cVar18) {
          plVar25 = plVar26;
          plVar2 = plVar26;
        }
        plVar26 = (long *)*plVar2;
      } while (plVar26 != (long *)0x0);
      if ((plVar25 == plVar24) ||
         (uVar20 = FUN_0041d7a0(&DAT_00d63ac0,plVar25 + 4), (uVar20 >> 7 & 1) != 0))
      goto LAB_005c6838;
    }
    if (plVar25 != (long *)(local_228 + 8)) {
                    /* try { // try from 005c684c to 005c6867 has its CatchHandler @ 005c6a20 */
      uVar21 = FUN_005c6d4c(local_230,&DAT_00d63ac0);
      local_220 = (void *)0x0;
      FUN_005cc2b0(uVar21,&local_220);
      uVar23 = (ulong)local_220 & 0xffffffffffffff00;
      uVar22 = (ulong)local_220 & 0xff;
      uVar21 = 1;
      goto LAB_005c6888;
    }
  }
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
LAB_005c6888:
  *(undefined8 *)(param_1 + 0x2e0) = uVar21;
  *(ulong *)(param_1 + 0x2d8) = uVar23 | uVar22;
                    /* try { // try from 005c6938 to 005c693b has its CatchHandler @ 005c6a50 */
  FUN_005b2fc4(&local_228,local_230[0]);
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 005c6d4c  FUN_005c6d4c =====

long * FUN_005c6d4c(char *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 local_68;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*param_1 != '\x01') {
    uVar5 = FUN_0054f64c(0x20);
    local_68 = FUN_005b2870(param_1);
                    /* try { // try from 005c6e2c to 005c6e3f has its CatchHandler @ 005c6f18 */
    FUN_005b2784(auStack_60,"cannot use at() with ",&local_68);
                    /* try { // try from 005c6e44 to 005c6e83 has its CatchHandler @ 005c6efc */
    FUN_005b3a24(uVar5,0x130,auStack_60,param_1);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar5,&PTR_PTR_thunk_FUN_00552768_00d25820,FUN_005be5f0);
    }
    goto LAB_005c6f3c;
  }
  plVar7 = (long *)(*(long *)(param_1 + 8) + 8);
  plVar8 = (long *)*plVar7;
  plVar6 = plVar7;
  if (plVar8 == (long *)0x0) {
LAB_005c6dd4:
    plVar6 = plVar7;
  }
  else {
    do {
      cVar3 = FUN_0041d7a0(plVar8 + 4,param_2);
      plVar2 = plVar8 + 1;
      if (-1 < cVar3) {
        plVar6 = plVar8;
        plVar2 = plVar8;
      }
      plVar8 = (long *)*plVar2;
    } while (plVar8 != (long *)0x0);
    if ((plVar6 == plVar7) || (uVar4 = FUN_0041d7a0(param_2,plVar6 + 4), (uVar4 >> 7 & 1) != 0))
    goto LAB_005c6dd4;
  }
  if (plVar6 == (long *)(*(long *)(param_1 + 8) + 8)) {
    uVar5 = FUN_0054f64c(0x20);
                    /* try { // try from 005c6e98 to 005c6eaf has its CatchHandler @ 005c6ef8 */
    FUN_005cbf8c(auStack_60,"key \'",param_2,"\' not found");
                    /* try { // try from 005c6eb4 to 005c6ef3 has its CatchHandler @ 005c6ef4 */
    FUN_005b3c0c(uVar5,0x193,auStack_60,param_1);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar5,&PTR_PTR_thunk_FUN_00552768_00d25838,FUN_005be5f0);
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_48) {
    return plVar6 + 7;
  }
LAB_005c6f3c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005c6f40  FUN_005c6f40 =====

void FUN_005c6f40(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*param_2 == '\x01') {
    plVar6 = (long *)(*(long *)(param_2 + 8) + 8);
    plVar8 = (long *)*plVar6;
    plVar7 = plVar6;
    if (plVar8 == (long *)0x0) {
LAB_005c6fd0:
      plVar7 = plVar6;
    }
    else {
      do {
        cVar3 = FUN_0041d7a0(plVar8 + 4,param_3);
        plVar2 = plVar8 + 1;
        if (-1 < cVar3) {
          plVar7 = plVar8;
          plVar2 = plVar8;
        }
        plVar8 = (long *)*plVar2;
      } while (plVar8 != (long *)0x0);
      if ((plVar7 == plVar6) || (uVar4 = FUN_0041d7a0(param_3,plVar7 + 4), (uVar4 >> 7 & 1) != 0))
      goto LAB_005c6fd0;
    }
    if (plVar7 != (long *)(*(long *)(param_2 + 8) + 8)) {
      uVar5 = FUN_005c6d4c(param_2,param_3);
      uStack_68 = 0;
      local_60 = 0;
      local_70 = 0;
                    /* try { // try from 005c6ff8 to 005c6fff has its CatchHandler @ 005c7050 */
      FUN_005b937c(uVar5,&local_70);
      param_1[1] = uStack_68;
      *param_1 = local_70;
      param_1[2] = local_60;
      *(undefined1 *)(param_1 + 3) = 1;
      goto LAB_005c7024;
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
LAB_005c7024:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005c7080  FUN_005c7080 =====

void FUN_005c7080(undefined8 *param_1)

{
  if ((*(char *)(param_1 + 0x17) != '\0') && (*(char *)((long)param_1 + 0xb7) < '\0')) {
    operator_delete((void *)param_1[0x14]);
  }
  if ((*(char *)(param_1 + 0x13) != '\0') && (*(char *)((long)param_1 + 0x97) < '\0')) {
    operator_delete((void *)param_1[0x10]);
  }
  if ((*(char *)(param_1 + 0xf) != '\0') && (*(char *)((long)param_1 + 0x77) < '\0')) {
    operator_delete((void *)param_1[0xc]);
  }
  if ((*(char *)(param_1 + 0xb) != '\0') && (*(char *)((long)param_1 + 0x57) < '\0')) {
    operator_delete((void *)param_1[8]);
  }
  if ((*(char *)(param_1 + 7) != '\0') && (*(char *)((long)param_1 + 0x37) < '\0')) {
    operator_delete((void *)param_1[4]);
  }
  if ((*(char *)(param_1 + 3) != '\0') && (*(char *)((long)param_1 + 0x17) < '\0')) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 005c7134  FUN_005c7134 =====

uint FUN_005c7134(char *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  if (*param_1 == '\x01') {
    plVar5 = (long *)(*(long *)(param_1 + 8) + 8);
    plVar7 = (long *)*plVar5;
    plVar6 = plVar5;
    if (plVar7 == (long *)0x0) {
LAB_005c71ac:
      plVar6 = plVar5;
    }
    else {
      do {
        cVar2 = FUN_0041d7a0(plVar7 + 4,param_2);
        plVar1 = plVar7 + 1;
        if (-1 < cVar2) {
          plVar6 = plVar7;
          plVar1 = plVar7;
        }
        plVar7 = (long *)*plVar1;
      } while (plVar7 != (long *)0x0);
      if ((plVar6 == plVar5) || (uVar3 = FUN_0041d7a0(param_2,plVar6 + 4), (uVar3 >> 7 & 1) != 0))
      goto LAB_005c71ac;
    }
    if (plVar6 != (long *)(*(long *)(param_1 + 8) + 8)) {
      FUN_005c6d4c(param_1,param_2);
      uVar3 = FUN_005cc08c();
      iVar4 = 1;
      uVar3 = uVar3 & 1;
      goto LAB_005c71e4;
    }
  }
  uVar3 = 0;
  iVar4 = 0;
LAB_005c71e4:
  return uVar3 | iVar4 << 8;
}


// ===== 005c71fc  FUN_005c71fc =====

void FUN_005c71fc(undefined1 (*param_1) [16],undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  auVar3 = FUN_005c7240(param_2);
  *param_1 = auVar3;
  uVar2 = *param_2;
  uVar1 = param_2[2];
  *(undefined8 *)(param_1[1] + 8) = param_2[1];
  *(undefined8 *)param_1[1] = uVar2;
  *(undefined8 *)param_1[2] = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  return;
}


// ===== 005c7240  FUN_005c7240 =====

/* WARNING: Removing unreachable block (ram,0x005c7d58) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_005c7240(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong __n;
  byte *pbVar4;
  undefined8 *******pppppppuVar5;
  undefined8 *__s1;
  undefined8 *__s2;
  undefined8 *******pppppppuVar6;
  byte bVar7;
  byte bVar8;
  size_t sVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  bool bVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  void *pvVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  byte *__s;
  undefined8 uVar22;
  byte *pbVar23;
  undefined8 *******pppppppuVar24;
  undefined8 uVar25;
  undefined1 *puVar26;
  byte *pbVar27;
  ulong uVar28;
  long *plVar29;
  long *plVar30;
  size_t sVar31;
  ulong uVar32;
  ulong __n_00;
  long *plVar33;
  undefined8 *puVar34;
  long lVar35;
  ulong uVar36;
  undefined1 auVar37 [16];
  void *local_4f8 [2];
  char local_4e1;
  long local_4e0;
  long local_4d8;
  void *local_4d0 [2];
  char local_4b9;
  undefined8 *******local_4b8;
  ulong local_4b0;
  ulong local_4a8;
  undefined8 *local_4a0;
  undefined8 *local_498;
  undefined8 local_490;
  byte *local_488;
  byte *local_480;
  byte *local_478;
  undefined1 *local_470;
  undefined1 *local_468;
  undefined1 local_458 [8];
  undefined1 auStack_450 [8];
  char local_448 [8];
  long local_440;
  void *local_438 [2];
  char local_421;
  undefined8 *******local_420;
  ulong uStack_418;
  byte local_409;
  void *local_408 [2];
  char local_3f1;
  undefined1 *local_3f0;
  undefined1 *local_3e8;
  long local_3e0;
  char local_3d1;
  char local_3d0;
  long *local_3c8;
  byte *local_3c0;
  byte *pbStack_3b8;
  undefined8 local_3b0;
  char local_3a8;
  byte *local_3a0;
  byte *pbStack_398;
  byte *local_390;
  void *local_388;
  void *local_380;
  char local_371;
  char local_369;
  undefined8 local_368;
  void *local_360 [2];
  char local_349;
  undefined8 local_348;
  void *local_340 [2];
  char local_329;
  undefined8 local_328;
  void *local_320 [2];
  char local_309;
  undefined8 local_308;
  void *local_300 [2];
  char local_2e9;
  undefined8 local_2e8;
  void *local_2e0 [2];
  char local_2c9;
  undefined8 local_2c8;
  undefined8 local_b8 [2];
  code *local_a8;
  undefined8 *local_a0;
  undefined8 local_98 [2];
  code *local_88;
  undefined8 *local_80;
  long local_78;
  
  lVar10 = tpidr_el0;
  local_78 = *(long *)(lVar10 + 0x28);
  bVar7 = *(byte *)((long)param_1 + 0x17);
  sVar9 = param_1[1];
  if (-1 < (char)bVar7) {
    sVar9 = (ulong)bVar7;
  }
  if (sVar9 != 0) {
    puVar21 = (undefined8 *)*param_1;
    if (-1 < (char)bVar7) {
      puVar21 = param_1;
    }
    pvVar19 = memchr(puVar21,0x2e,sVar9);
    uVar28 = (long)pvVar19 - (long)puVar21;
    uVar32 = sVar9;
    if (pvVar19 == (void *)0x0) {
      uVar28 = 0xffffffffffffffff;
    }
    do {
      sVar31 = uVar32;
      if (sVar31 == 0) goto LAB_005c7eb8;
      uVar32 = sVar31 - 1;
    } while (*(char *)((long)puVar21 + (sVar31 - 1)) != '.');
    if ((((uVar28 != uVar32) && (uVar28 != 0xffffffffffffffff)) && (uVar32 != 0xffffffffffffffff))
       && (uVar32 <= sVar9 - 2)) {
      FUN_00547e10(local_408,param_1,0,uVar28,param_1);
                    /* try { // try from 005c7318 to 005c7327 has its CatchHandler @ 005c86ac */
      FUN_00547e10(&local_420,param_1,uVar28 + 1,~uVar28 + uVar32,param_1);
                    /* try { // try from 005c732c to 005c733f has its CatchHandler @ 005c869c */
      FUN_00547e10(local_438,param_1,sVar31,0xffffffffffffffff,param_1);
                    /* try { // try from 005c7340 to 005c734b has its CatchHandler @ 005c8694 */
      FUN_005a493c(&local_3f0,local_408);
                    /* try { // try from 005c734c to 005c7357 has its CatchHandler @ 005c8684 */
      FUN_005a2588(&local_3a0,&local_3f0);
      local_88 = FUN_005b9584;
      local_80 = &DAT_001f1910;
                    /* try { // try from 005c736c to 005c7383 has its CatchHandler @ 005c8654 */
      FUN_005c8ed4(local_448,&local_3a0,local_98,1,0);
      if ((code *)local_80[1] != (code *)0x0) {
                    /* try { // try from 005c7394 to 005c7397 has its CatchHandler @ 005c84bc */
        (*(code *)local_80[1])(local_98[0]);
      }
      if ((long)local_390 < 0) {
        operator_delete(local_3a0);
      }
      if (0 < (long)local_3e8 - (long)local_3f0) {
        uVar28 = ((long)local_3e8 - (long)local_3f0) + 1;
        puVar26 = local_3f0;
        do {
          uVar28 = uVar28 - 1;
          *puVar26 = 0;
          puVar26 = puVar26 + 1;
        } while (1 < uVar28);
      }
      if (local_3f0 != (undefined1 *)0x0) {
        local_3e8 = local_3f0;
        operator_delete(local_3f0);
      }
                    /* try { // try from 005c73dc to 005c73e7 has its CatchHandler @ 005c864c */
      FUN_005a493c(&local_3f0,&local_420);
                    /* try { // try from 005c73e8 to 005c73f3 has its CatchHandler @ 005c863c */
      FUN_005a2588(&local_3a0,&local_3f0);
      local_a8 = FUN_005b9584;
      local_a0 = &DAT_001f1910;
                    /* try { // try from 005c73f8 to 005c740f has its CatchHandler @ 005c860c */
      FUN_005c8ed4(local_458,&local_3a0,local_b8,1,0);
      if ((code *)local_a0[1] != (code *)0x0) {
                    /* try { // try from 005c7420 to 005c7423 has its CatchHandler @ 005c84b8 */
        (*(code *)local_a0[1])(local_b8[0]);
      }
      if ((long)local_390 < 0) {
        operator_delete(local_3a0);
      }
      if (0 < (long)local_3e8 - (long)local_3f0) {
        uVar28 = ((long)local_3e8 - (long)local_3f0) + 1;
        puVar26 = local_3f0;
        do {
          uVar28 = uVar28 - 1;
          *puVar26 = 0;
          puVar26 = puVar26 + 1;
        } while (1 < uVar28);
      }
      if (local_3f0 != (undefined1 *)0x0) {
        local_3e8 = local_3f0;
        operator_delete(local_3f0);
      }
                    /* try { // try from 005c7468 to 005c7477 has its CatchHandler @ 005c8604 */
      uVar20 = FUN_005b0738(local_448,&DAT_001cab67);
      local_3f0 = (undefined1 *)0x0;
      local_3e8 = (undefined1 *)0x0;
      local_3e0 = 0;
                    /* try { // try from 005c7480 to 005c7487 has its CatchHandler @ 005c85f4 */
      FUN_005b937c(uVar20,&local_3f0);
      if (((DAT_00d63af0 & 1) == 0) && (iVar17 = FUN_0054fdd4(&DAT_00d63af0), iVar17 != 0)) {
                    /* try { // try from 005c7f08 to 005c7f23 has its CatchHandler @ 005c8420 */
        pvVar19 = (void *)FUN_005afc4c();
        FUN_004a3cf4(&local_3a0,"ES256");
        local_388 = pvVar19;
                    /* try { // try from 005c7f2c to 005c7ff7 has its CatchHandler @ 005c8434 */
        uVar20 = FUN_005afd5c();
        FUN_004a3cf4(&local_380,"ES384");
        local_368 = uVar20;
        uVar20 = FUN_005afdd8();
        FUN_004a3cf4(local_360,"ES512");
        local_348 = uVar20;
        uVar20 = FUN_005afe54();
        FUN_004a3cf4(local_340,"Ed25519");
        local_328 = uVar20;
        uVar20 = FUN_005afed0();
        FUN_004a3cf4(local_320,"RS256");
        local_308 = uVar20;
        uVar20 = FUN_005aff90();
        FUN_004a3cf4(local_300,"RS384");
        local_2e8 = uVar20;
        uVar20 = FUN_005b0008();
        FUN_004a3cf4(local_2e0,"RS512");
                    /* try { // try from 005c7ffc to 005c8013 has its CatchHandler @ 005c8374 */
        local_2c8 = uVar20;
        FUN_005c9bd0(&DAT_00d63ad8,&local_3a0,7,&local_3c0);
        if (local_2c9 < '\0') {
          operator_delete(local_2e0[0]);
        }
        if (local_2e9 < '\0') {
          operator_delete(local_300[0]);
        }
        if (local_309 < '\0') {
          operator_delete(local_320[0]);
        }
        if (local_329 < '\0') {
          operator_delete(local_340[0]);
        }
        if (local_349 < '\0') {
          operator_delete(local_360[0]);
        }
        if (local_369 < '\0') {
          operator_delete(local_380);
        }
        if ((long)local_390 < 0) {
          operator_delete(local_3a0);
        }
        __cxa_atexit(FUN_005c9c48,&DAT_00d63ad8,&PTR_LOOP_00d19390);
        FUN_0054ff1c(&DAT_00d63af0);
      }
      if (DAT_00d63ae0 == (long *)0x0) {
LAB_005c74f0:
        if (*(long *)(lVar10 + 0x28) == local_78) {
                    /* try { // try from 005c7500 to 005c750b has its CatchHandler @ 005c8734 */
                    /* WARNING: Subroutine does not return */
          FUN_0051ef20("map::at:  key not found");
        }
        goto LAB_005c87fc;
      }
      plVar30 = (long *)&DAT_00d63ae0;
      plVar29 = DAT_00d63ae0;
LAB_005c74bc:
      uVar16 = FUN_0041d7a0(&local_3f0,plVar29 + 4);
      if ((uVar16 >> 7 & 1) != 0) {
        plVar33 = (long *)*plVar29;
        plVar30 = plVar29;
joined_r0x005c74b8:
        plVar29 = plVar33;
        if (plVar29 == (long *)0x0) goto LAB_005c74f0;
        goto LAB_005c74bc;
      }
      uVar16 = FUN_0041d7a0(plVar29 + 4,&local_3f0);
      if ((uVar16 >> 7 & 1) != 0) {
        plVar30 = plVar29 + 1;
        plVar33 = (long *)*plVar30;
        goto joined_r0x005c74b8;
      }
      if (*plVar30 == 0) goto LAB_005c74f0;
      lVar35 = *(long *)(*plVar30 + 0x38);
      if (local_3e0 < 0) {
        operator_delete(local_3f0);
      }
                    /* try { // try from 005c7528 to 005c753b has its CatchHandler @ 005c85ec */
      FUN_004d7ccc(&local_3f0,local_408,&DAT_001ea377);
      pppppppuVar6 = local_420;
      if (-1 < (char)local_409) {
        uStack_418 = (ulong)local_409;
        pppppppuVar6 = &local_420;
      }
                    /* try { // try from 005c7558 to 005c755f has its CatchHandler @ 005c85e8 */
      puVar21 = (undefined8 *)FUN_00547cac(&local_3f0,pppppppuVar6,uStack_418);
      local_390 = (byte *)puVar21[2];
      pbStack_398 = (byte *)puVar21[1];
      local_3a0 = (byte *)*puVar21;
      puVar21[1] = 0;
      puVar21[2] = 0;
      *puVar21 = 0;
                    /* try { // try from 005c7578 to 005c7583 has its CatchHandler @ 005c85d0 */
      FUN_005a2680(&local_470,&local_3a0);
      if ((long)local_390 < 0) {
        operator_delete(local_3a0);
      }
      if (local_3e0 < 0) {
        operator_delete(local_3f0);
      }
                    /* try { // try from 005c7594 to 005c759f has its CatchHandler @ 005c85c8 */
      FUN_005a493c(&local_488,local_438);
      pbVar13 = local_480;
      pbVar23 = local_488;
      if (*(uint *)(lVar35 + 8) < 3) {
        uVar28 = (long)local_480 - (long)local_488;
        if (uVar28 < 0xfb) {
          if ((uVar28 & 1) == 0) {
            if (local_480 == local_488) {
              if (*(long *)(lVar10 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                FUN_0056a714(&local_488);
              }
            }
            else {
              __n_00 = uVar28 >> 1;
              bVar7 = *local_488;
              bVar8 = local_488[__n_00];
              lVar2 = __n_00 + (bVar7 >> 7);
              lVar1 = lVar2 + 2;
              lVar3 = __n_00 + (bVar8 >> 7);
              uVar32 = lVar3 + lVar1 + 2;
              uVar16 = 2;
              if (0x80 < uVar32) {
                uVar16 = 3;
              }
              uVar36 = (ulong)uVar16;
              __n = uVar32 + uVar36;
                    /* try { // try from 005c760c to 005c7613 has its CatchHandler @ 005c86bc */
              __s = (byte *)operator_new(__n);
              pbVar4 = __s + __n;
              local_3a0 = __s;
              local_390 = pbVar4;
              memset(__s,0,__n);
              pbVar27 = __s + 1;
              *__s = 0x30;
              if (0x80 < uVar32) {
                pbVar27 = __s + 2;
                __s[1] = 0x81;
              }
              *pbVar27 = (byte)uVar32;
              __s[uVar36] = 2;
              (__s + uVar36)[1] = (byte)lVar2;
              pbStack_398 = pbVar4;
              if (1 < uVar28) {
                memmove(__s + (uVar16 + (bVar7 >> 7) + 2),pbVar23,__n_00);
              }
              lVar1 = lVar1 + uVar36;
              __s[lVar1] = 2;
              if (lVar1 + 1U < __n) {
                sVar9 = (long)pbVar13 - (long)(pbVar23 + __n_00);
                __s[lVar1 + 1U] = (byte)lVar3;
                if (sVar9 != 0) {
                  memmove(__s + lVar1 + (ulong)(bVar8 >> 7) + 2,pbVar23 + __n_00,sVar9);
                }
                local_480 = pbVar23;
                operator_delete(pbVar23);
                local_488 = __s;
                local_480 = pbVar4;
                local_478 = pbVar4;
                goto LAB_005c76f4;
              }
              if (*(long *)(lVar10 + 0x28) == local_78) {
                    /* try { // try from 005c8274 to 005c827b has its CatchHandler @ 005c84a4 */
                    /* WARNING: Subroutine does not return */
                FUN_0056a714(&local_3a0);
              }
            }
            goto LAB_005c87fc;
          }
          uVar20 = FUN_0054f64c(0x10);
                    /* try { // try from 005c8214 to 005c821f has its CatchHandler @ 005c846c */
          FUN_0054723c(uVar20,"Malformed JWS signature");
        }
        else {
          uVar20 = FUN_0054f64c(0x10);
                    /* try { // try from 005c81f8 to 005c8203 has its CatchHandler @ 005c8470 */
          FUN_0054723c(uVar20,"JWS signature too large");
        }
        if (*(long *)(lVar10 + 0x28) == local_78) {
                    /* try { // try from 005c8230 to 005c825f has its CatchHandler @ 005c86bc */
                    /* WARNING: Subroutine does not return */
          FUN_0054f748(uVar20,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
        }
        goto LAB_005c87fc;
      }
LAB_005c76f4:
      local_3c0 = (byte *)((ulong)local_3c0 & 0xffffffffffffff00);
      local_3a8 = '\0';
      if (local_448[0] != '\x01') goto LAB_005c7800;
      plVar29 = (long *)(local_440 + 8);
      plVar33 = (long *)*plVar29;
      plVar30 = plVar29;
      if (plVar33 == (long *)0x0) goto LAB_005c776c;
      do {
                    /* try { // try from 005c7724 to 005c772b has its CatchHandler @ 005c86f4 */
        cVar15 = FUN_005b2010(plVar33 + 4,&DAT_001bf4b8);
        plVar11 = plVar33 + 1;
        if (-1 < cVar15) {
          plVar30 = plVar33;
          plVar11 = plVar33;
        }
        plVar33 = (long *)*plVar11;
      } while (plVar33 != (long *)0x0);
                    /* try { // try from 005c7754 to 005c775f has its CatchHandler @ 005c8464 */
      if ((plVar30 == plVar29) ||
         (iVar17 = FUN_005b2010(plVar30 + 4,&DAT_001bf4b8), 0 < iVar17 * 0x1000000)) {
LAB_005c776c:
        plVar30 = plVar29;
      }
      if (plVar30 != (long *)(local_440 + 8)) {
                    /* try { // try from 005c7780 to 005c778f has its CatchHandler @ 005c8498 */
        uVar20 = FUN_005b0738(local_448,&DAT_001bf4b8);
        local_3a0 = (byte *)0x0;
        pbStack_398 = (byte *)0x0;
        local_390 = (byte *)0x0;
                    /* try { // try from 005c7798 to 005c779f has its CatchHandler @ 005c8480 */
        FUN_005b937c(uVar20,&local_3a0);
        if (local_3a8 == '\0') {
          pbStack_3b8 = pbStack_398;
          local_3c0 = local_3a0;
          local_3b0 = local_390;
          local_3a8 = '\x01';
        }
        else {
          if (local_3b0._7_1_ < '\0') {
            operator_delete(local_3c0);
          }
          pbStack_3b8 = pbStack_398;
          local_3c0 = local_3a0;
          local_3b0 = local_390;
        }
      }
LAB_005c7800:
                    /* try { // try from 005c7800 to 005c780f has its CatchHandler @ 005c85c0 */
      uVar20 = FUN_005c9080(local_458,&DAT_001c8219);
      if (((DAT_00d63b10 & 1) == 0) && (iVar17 = FUN_0054fdd4(&DAT_00d63b10), iVar17 != 0)) {
                    /* try { // try from 005c808c to 005c809b has its CatchHandler @ 005c8360 */
        FUN_004a3cf4(&local_3a0,"https://www.w3.org/2018/credentials/v1");
                    /* try { // try from 005c809c to 005c80af has its CatchHandler @ 005c8348 */
        FUN_005c92c0(&DAT_00d63af8,&local_3a0,1);
        if ((long)local_390 < 0) {
          operator_delete(local_3a0);
        }
        __cxa_atexit(FUN_005a534c,&DAT_00d63af8,&PTR_LOOP_00d19390);
        FUN_0054ff1c(&DAT_00d63b10);
      }
                    /* try { // try from 005c7824 to 005c7833 has its CatchHandler @ 005c85b8 */
      uVar22 = FUN_005c935c(uVar20,"@context");
      local_4a0 = (undefined8 *)0x0;
      local_498 = (undefined8 *)0x0;
      local_490 = 0;
                    /* try { // try from 005c783c to 005c7843 has its CatchHandler @ 005c8564 */
      FUN_005ca184(uVar22,&local_4a0);
      puVar12 = local_498;
      puVar21 = local_4a0;
      puVar34 = DAT_00d63af8;
      if ((long)local_498 - (long)local_4a0 == DAT_00d63b00 - (long)DAT_00d63af8) {
        for (; puVar21 != puVar12; puVar21 = puVar21 + 3) {
          bVar7 = *(byte *)((long)puVar21 + 0x17);
          bVar8 = *(byte *)((long)puVar34 + 0x17);
          sVar9 = puVar21[1];
          if (-1 < (char)bVar7) {
            sVar9 = (ulong)bVar7;
          }
          sVar31 = puVar34[1];
          if (-1 < (char)bVar8) {
            sVar31 = (ulong)bVar8;
          }
          if (sVar9 != sVar31) goto LAB_005c78fc;
          __s1 = (undefined8 *)*puVar21;
          if (-1 < (char)bVar7) {
            __s1 = puVar21;
          }
          __s2 = (undefined8 *)*puVar34;
          if (-1 < (char)bVar8) {
            __s2 = puVar34;
          }
          if ((char)bVar7 < '\0') {
            if ((sVar9 != 0) && (iVar17 = memcmp(__s1,__s2,sVar9), iVar17 != 0)) goto LAB_005c78fc;
          }
          else if (bVar7 != 0) {
            uVar28 = 0;
            do {
              if (*(char *)((long)puVar21 + uVar28) != *(char *)((long)__s2 + uVar28))
              goto LAB_005c78fc;
              uVar28 = uVar28 + 1;
            } while (bVar7 != uVar28);
          }
          puVar34 = puVar34 + 3;
        }
        if (((DAT_00d63b30 & 1) == 0) && (iVar17 = FUN_0054fdd4(&DAT_00d63b30), iVar17 != 0)) {
                    /* try { // try from 005c80fc to 005c810f has its CatchHandler @ 005c8334 */
          FUN_004a3cf4(&local_3a0,"VerifiableCredential");
                    /* try { // try from 005c8114 to 005c811f has its CatchHandler @ 005c831c */
          FUN_004a3cf4(&local_388,"UserInfoCredential");
                    /* try { // try from 005c8120 to 005c8133 has its CatchHandler @ 005c82fc */
          FUN_005c92c0(&DAT_00d63b18,&local_3a0,2);
          if (local_371 < '\0') {
            operator_delete(local_388);
          }
          if ((long)local_390 < 0) {
            operator_delete(local_3a0);
          }
          __cxa_atexit(FUN_005a534c,&DAT_00d63b18,&PTR_LOOP_00d19390);
          FUN_0054ff1c(&DAT_00d63b30);
        }
        pbVar23 = (byte *)FUN_005c959c(uVar20,&DAT_001ab396);
        local_3a0 = (byte *)0x0;
        pbStack_398 = (byte *)0x0;
                    /* try { // try from 005c7964 to 005c7973 has its CatchHandler @ 005c8554 */
        FUN_005cb298(&local_3a0,&DAT_00d63b18);
        bVar7 = *pbVar23;
        uVar28 = (ulong)local_3a0 & 0xff;
        uVar16 = (uint)(byte)local_3a0;
        if ((bVar7 == 7) && (NAN(*(double *)(pbVar23 + 8)))) {
          uVar16 = uVar16 - 5;
          if ((uVar16 < 5) && ((0x17U >> (ulong)(uVar16 & 0x1f) & 1) != 0)) {
            uVar18 = 0;
            uVar28 = 0x909070605 >> (((ulong)uVar16 & 7) << 3);
            goto LAB_005c7a20;
          }
LAB_005c7a0c:
          uVar18 = FUN_005b216c(pbVar23,&local_3a0);
          uVar28 = (ulong)local_3a0 & 0xff;
          uVar18 = uVar18 ^ 1;
        }
        else if (uVar16 == 7) {
          uVar16 = (uint)bVar7;
          uVar18 = 0;
          uVar28 = 7;
          bVar14 = false;
          if ((uVar16 - 5 < 3) && (bVar14 = true, !NAN((double)pbStack_398))) {
            bVar14 = false;
          }
          if (!bVar14) {
joined_r0x005c7a08:
            uVar18 = 0;
            if (uVar16 != 9) goto LAB_005c7a0c;
          }
        }
        else {
          uVar18 = 0;
          if (bVar7 != 9) goto joined_r0x005c7a08;
        }
LAB_005c7a20:
                    /* try { // try from 005c7a28 to 005c7a2b has its CatchHandler @ 005c8550 */
        FUN_005b2fc4(&pbStack_398,uVar28);
        if ((uVar18 & 1) == 0) {
          if (((DAT_00d63b50 & 1) == 0) && (iVar17 = FUN_0054fdd4(&DAT_00d63b50), iVar17 != 0)) {
                    /* try { // try from 005c81ac to 005c81bf has its CatchHandler @ 005c82e8 */
            FUN_004a3cf4(&DAT_00d63b38,"did:jwk:");
            __cxa_atexit(PTR_FUN_00d51c00,&DAT_00d63b38,&PTR_LOOP_00d19390);
            FUN_0054ff1c(&DAT_00d63b50);
          }
                    /* try { // try from 005c7a40 to 005c7a5b has its CatchHandler @ 005c86f0 */
          uVar22 = FUN_005c97dc(uVar20,"credentialSubject");
          uVar22 = FUN_005c9080(uVar22,&DAT_0019cad0);
          local_4b8 = (undefined8 *******)0x0;
          local_4b0 = 0;
          local_4a8 = 0;
                    /* try { // try from 005c7a64 to 005c7a6f has its CatchHandler @ 005c8540 */
          FUN_005b937c(uVar22,&local_4b8);
          pppppppuVar6 = local_4b8;
          if (-1 < (long)local_4a8) {
            pppppppuVar6 = &local_4b8;
          }
          sVar9 = DAT_00d63b40;
          pbVar23 = DAT_00d63b38;
          if (-1 < (char)DAT_00d63b4f) {
            sVar9 = (ulong)DAT_00d63b4f;
            pbVar23 = (byte *)&DAT_00d63b38;
          }
          if (sVar9 == 0) {
LAB_005c7b5c:
                    /* try { // try from 005c7b5c to 005c7b73 has its CatchHandler @ 005c8538 */
            FUN_00547e10(&local_3f0,&local_4b8,sVar9,0xffffffffffffffff,&local_4b8);
                    /* try { // try from 005c7b74 to 005c7b7f has its CatchHandler @ 005c8524 */
            FUN_005a493c(&local_3a0,&local_3f0);
                    /* try { // try from 005c7b80 to 005c7b8b has its CatchHandler @ 005c8514 */
            FUN_005a2588(local_4d0,&local_3a0);
            if (0 < (long)pbStack_398 - (long)local_3a0) {
              uVar28 = ((long)pbStack_398 - (long)local_3a0) + 1;
              pbVar23 = local_3a0;
              do {
                uVar28 = uVar28 - 1;
                *pbVar23 = 0;
                pbVar23 = pbVar23 + 1;
              } while (1 < uVar28);
            }
            if (local_3a0 != (byte *)0x0) {
              pbStack_398 = local_3a0;
              operator_delete(local_3a0);
            }
            if (local_3e0 < 0) {
              operator_delete(local_3f0);
            }
                    /* try { // try from 005c7bd0 to 005c7bdb has its CatchHandler @ 005c850c */
            FUN_005b0994(&local_3f0,local_4d0);
                    /* try { // try from 005c7bdc to 005c7beb has its CatchHandler @ 005c8508 */
            uVar22 = FUN_005b0738(local_458,&DAT_001c530f);
                    /* try { // try from 005c7bec to 005c7c0b has its CatchHandler @ 005c86d0 */
            uVar25 = FUN_005b0738(local_458,&DAT_001bc9ac);
            local_3a0 = (byte *)0x0;
            FUN_005cbe48(uVar25,&local_3a0);
            local_4d8 = (long)local_3a0 * 1000000;
                    /* try { // try from 005c7c20 to 005c7c3b has its CatchHandler @ 005c86cc */
            uVar25 = FUN_005b0738(local_458,&DAT_001e79b3);
            local_3a0 = (byte *)0x0;
            FUN_005cbe48(uVar25,&local_3a0);
            local_4e0 = (long)local_3a0 * 1000000;
                    /* try { // try from 005c7c48 to 005c7c6f has its CatchHandler @ 005c86c8 */
            uVar20 = FUN_005c97dc(uVar20,"credentialSubject");
            FUN_005b451c(local_4f8,uVar20,0xffffffff,0x20,0,0);
                    /* try { // try from 005c7c70 to 005c7c7b has its CatchHandler @ 005c84f0 */
            FUN_005c624c(&local_3a0,local_4f8);
                    /* try { // try from 005c7c7c to 005c7c83 has its CatchHandler @ 005c84e0 */
            puVar21 = (undefined8 *)operator_new(0x3b0);
            puVar21[1] = 0;
            puVar21[2] = 0;
            *puVar21 = &PTR_FUN_00d25a00;
                    /* try { // try from 005c7c9c to 005c7ccb has its CatchHandler @ 005c84c8 */
            FUN_005cb564(puVar21 + 3,lVar35,&local_3c0,uVar22,&local_4d8,&local_4e0,&local_3a0,
                         &local_3f0,&local_470,&local_488);
            FUN_005c9a1c(&local_3a0);
            if (local_4e1 < '\0') {
              operator_delete(local_4f8[0]);
            }
            plVar30 = local_3c8;
            local_3c8 = (long *)0x0;
            if (plVar30 != (long *)0x0) {
              (**(code **)(*plVar30 + 8))();
            }
            if ((local_3d0 != '\0') && (local_3d1 < '\0')) {
              operator_delete(local_3e8);
            }
            if (local_4b9 < '\0') {
              operator_delete(local_4d0[0]);
            }
            if ((long)local_4a8 < 0) {
              operator_delete(local_4b8);
            }
            if (local_4a0 != (undefined8 *)0x0) {
              for (; local_498 != local_4a0; local_498 = local_498 + -3) {
              }
              local_498 = local_4a0;
              operator_delete(local_4a0);
            }
            if ((local_3a8 != '\0') && ((long)local_3b0 < 0)) {
              operator_delete(local_3c0);
            }
            if (0 < (long)local_480 - (long)local_488) {
              uVar28 = ((long)local_480 - (long)local_488) + 1;
              pbVar23 = local_488;
              do {
                uVar28 = uVar28 - 1;
                *pbVar23 = 0;
                pbVar23 = pbVar23 + 1;
              } while (1 < uVar28);
            }
            if (local_488 != (byte *)0x0) {
              local_480 = local_488;
              operator_delete(local_488);
            }
            if (0 < (long)local_468 - (long)local_470) {
              uVar28 = ((long)local_468 - (long)local_470) + 1;
              puVar26 = local_470;
              do {
                uVar28 = uVar28 - 1;
                *puVar26 = 0;
                puVar26 = puVar26 + 1;
              } while (1 < uVar28);
            }
            if (local_470 != (undefined1 *)0x0) {
              local_468 = local_470;
              operator_delete(local_470);
            }
                    /* try { // try from 005c7e28 to 005c7e2b has its CatchHandler @ 005c84c4 */
            FUN_005b2fc4(auStack_450,local_458[0]);
                    /* try { // try from 005c7e38 to 005c7e3b has its CatchHandler @ 005c84c0 */
            FUN_005b2fc4(&local_440,local_448[0]);
            if (local_421 < '\0') {
              operator_delete(local_438[0]);
            }
            if ((char)local_409 < '\0') {
              operator_delete(local_420);
            }
            if (local_3f1 < '\0') {
              operator_delete(local_408[0]);
            }
            if (*(long *)(lVar10 + 0x28) == local_78) {
              auVar37._8_8_ = puVar21;
              auVar37._0_8_ = puVar21 + 3;
              return auVar37;
            }
          }
          else {
            uVar28 = local_4b0;
            if (-1 < (long)local_4a8) {
              uVar28 = local_4a8 >> 0x38;
            }
            if ((long)sVar9 <= (long)uVar28) {
              pppppppuVar5 = (undefined8 *******)((long)pppppppuVar6 + uVar28);
              bVar7 = *pbVar23;
              pppppppuVar24 = pppppppuVar6;
              do {
                if ((0xfffffffffffffffe < uVar28 - sVar9) ||
                   (pppppppuVar24 =
                         (undefined8 *******)memchr(pppppppuVar24,(uint)bVar7,(uVar28 - sVar9) + 1),
                   pppppppuVar24 == (undefined8 *******)0x0)) break;
                iVar17 = memcmp(pppppppuVar24,pbVar23,sVar9);
                if (iVar17 == 0) {
                  if ((pppppppuVar24 != pppppppuVar5) && (pppppppuVar24 == pppppppuVar6))
                  goto LAB_005c7b5c;
                  break;
                }
                pppppppuVar24 = (undefined8 *******)((long)pppppppuVar24 + 1);
                uVar28 = (long)pppppppuVar5 - (long)pppppppuVar24;
              } while ((long)sVar9 <= (long)uVar28);
            }
            uVar20 = FUN_0054f64c(0x10);
                    /* try { // try from 005c7b14 to 005c7b1f has its CatchHandler @ 005c8714 */
            FUN_0054723c(uVar20,"malformed UserInfo VC: ID is not did:jwk");
            if (*(long *)(lVar10 + 0x28) == local_78) {
                    /* try { // try from 005c7b34 to 005c7b4b has its CatchHandler @ 005c870c */
                    /* WARNING: Subroutine does not return */
              FUN_0054f748(uVar20,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
            }
          }
          goto LAB_005c87fc;
        }
        uVar20 = FUN_0054f64c(0x10);
                    /* try { // try from 005c818c to 005c8197 has its CatchHandler @ 005c84a0 */
        FUN_0054723c(uVar20,"malformed VC: incorrect type value");
      }
      else {
LAB_005c78fc:
        uVar20 = FUN_0054f64c(0x10);
                    /* try { // try from 005c7908 to 005c7913 has its CatchHandler @ 005c874c */
        FUN_0054723c(uVar20,"malformed VC: incorrect context value");
      }
      if (*(long *)(lVar10 + 0x28) == local_78) {
                    /* try { // try from 005c7924 to 005c795b has its CatchHandler @ 005c875c */
                    /* WARNING: Subroutine does not return */
        FUN_0054f748(uVar20,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
      }
      goto LAB_005c87fc;
    }
  }
LAB_005c7eb8:
  uVar20 = FUN_0054f64c(0x10);
                    /* try { // try from 005c7ec4 to 005c7ecf has its CatchHandler @ 005c86fc */
  FUN_0054723c(uVar20,"malformed JWT; not enough \'.\' characters");
  if (*(long *)(lVar10 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_0054f748(uVar20,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
  }
LAB_005c87fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005c8800  FUN_005c8800 =====

long FUN_005c8800(long *param_1)

{
  return *param_1 + 0x338;
}


// ===== 005c880c  FUN_005c880c =====

undefined8 * FUN_005c880c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  cVar3 = *(char *)(param_1 + 3);
  if (cVar3 == *(char *)(param_2 + 3)) {
    if (cVar3 != '\0') {
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        operator_delete((void *)*param_1);
      }
      uVar5 = param_2[1];
      uVar4 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar5;
      *param_1 = uVar4;
      *(undefined1 *)((long)param_2 + 0x17) = 0;
      *(undefined1 *)param_2 = 0;
    }
  }
  else if (cVar3 == '\0') {
    uVar5 = param_2[1];
    uVar4 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar5;
    *param_1 = uVar4;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else {
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      operator_delete((void *)*param_1);
    }
    *(undefined1 *)(param_1 + 3) = 0;
  }
  cVar3 = *(char *)(param_1 + 7);
  puVar1 = param_1 + 4;
  puVar2 = param_2 + 4;
  if (cVar3 == *(char *)(param_2 + 7)) {
    if (cVar3 != '\0') {
      if (*(char *)((long)param_1 + 0x37) < '\0') {
        operator_delete((void *)*puVar1);
      }
      uVar5 = param_2[5];
      uVar4 = *puVar2;
      param_1[6] = param_2[6];
      param_1[5] = uVar5;
      *puVar1 = uVar4;
      *(undefined1 *)((long)param_2 + 0x37) = 0;
      *(undefined1 *)(param_2 + 4) = 0;
    }
  }
  else if (cVar3 == '\0') {
    uVar5 = param_2[5];
    uVar4 = *puVar2;
    param_1[6] = param_2[6];
    param_1[5] = uVar5;
    *puVar1 = uVar4;
    param_2[5] = 0;
    param_2[6] = 0;
    *puVar2 = 0;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  else {
    if (*(char *)((long)param_1 + 0x37) < '\0') {
      operator_delete((void *)*puVar1);
    }
    *(undefined1 *)(param_1 + 7) = 0;
  }
  cVar3 = *(char *)(param_1 + 0xb);
  puVar1 = param_1 + 8;
  puVar2 = param_2 + 8;
  if (cVar3 == *(char *)(param_2 + 0xb)) {
    if (cVar3 != '\0') {
      if (*(char *)((long)param_1 + 0x57) < '\0') {
        operator_delete((void *)*puVar1);
      }
      uVar5 = param_2[9];
      uVar4 = *puVar2;
      param_1[10] = param_2[10];
      param_1[9] = uVar5;
      *puVar1 = uVar4;
      *(undefined1 *)((long)param_2 + 0x57) = 0;
      *(undefined1 *)(param_2 + 8) = 0;
    }
  }
  else if (cVar3 == '\0') {
    uVar5 = param_2[9];
    uVar4 = *puVar2;
    param_1[10] = param_2[10];
    param_1[9] = uVar5;
    *puVar1 = uVar4;
    param_2[9] = 0;
    param_2[10] = 0;
    *puVar2 = 0;
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  else {
    if (*(char *)((long)param_1 + 0x57) < '\0') {
      operator_delete((void *)*puVar1);
    }
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  cVar3 = *(char *)(param_1 + 0xf);
  puVar1 = param_1 + 0xc;
  puVar2 = param_2 + 0xc;
  if (cVar3 == *(char *)(param_2 + 0xf)) {
    if (cVar3 != '\0') {
      if (*(char *)((long)param_1 + 0x77) < '\0') {
        operator_delete((void *)*puVar1);
      }
      uVar5 = param_2[0xd];
      uVar4 = *puVar2;
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar5;
      *puVar1 = uVar4;
      *(undefined1 *)((long)param_2 + 0x77) = 0;
      *(undefined1 *)(param_2 + 0xc) = 0;
    }
  }
  else if (cVar3 == '\0') {
    uVar5 = param_2[0xd];
    uVar4 = *puVar2;
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar5;
    *puVar1 = uVar4;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    *puVar2 = 0;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  else {
    if (*(char *)((long)param_1 + 0x77) < '\0') {
      operator_delete((void *)*puVar1);
    }
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  cVar3 = *(char *)(param_1 + 0x13);
  puVar1 = param_1 + 0x10;
  puVar2 = param_2 + 0x10;
  if (cVar3 == *(char *)(param_2 + 0x13)) {
    if (cVar3 != '\0') {
      if (*(char *)((long)param_1 + 0x97) < '\0') {
        operator_delete((void *)*puVar1);
      }
      uVar5 = param_2[0x11];
      uVar4 = *puVar2;
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = uVar5;
      *puVar1 = uVar4;
      *(undefined1 *)((long)param_2 + 0x97) = 0;
      *(undefined1 *)(param_2 + 0x10) = 0;
    }
  }
  else if (cVar3 == '\0') {
    uVar5 = param_2[0x11];
    uVar4 = *puVar2;
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar5;
    *puVar1 = uVar4;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    *puVar2 = 0;
    *(undefined1 *)(param_1 + 0x13) = 1;
  }
  else {
    if (*(char *)((long)param_1 + 0x97) < '\0') {
      operator_delete((void *)*puVar1);
    }
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  cVar3 = *(char *)(param_1 + 0x17);
  puVar1 = param_1 + 0x14;
  puVar2 = param_2 + 0x14;
  if (cVar3 == *(char *)(param_2 + 0x17)) {
    if (cVar3 != '\0') {
      if (*(char *)((long)param_1 + 0xb7) < '\0') {
        operator_delete((void *)*puVar1);
      }
      uVar5 = param_2[0x15];
      uVar4 = *puVar2;
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar5;
      *puVar1 = uVar4;
      *(undefined1 *)((long)param_2 + 0xb7) = 0;
      *(undefined1 *)(param_2 + 0x14) = 0;
    }
  }
  else if (cVar3 == '\0') {
    uVar5 = param_2[0x15];
    uVar4 = *puVar2;
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar5;
    *puVar1 = uVar4;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    *puVar2 = 0;
    *(undefined1 *)(param_1 + 0x17) = 1;
  }
  else {
    if (*(char *)((long)param_1 + 0xb7) < '\0') {
      operator_delete((void *)*puVar1);
    }
    *(undefined1 *)(param_1 + 0x17) = 0;
  }
  return param_1;
}


// ===== 005c8b48  FUN_005c8b48 =====

void FUN_005c8b48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    if (*(char *)(param_2 + 3) != '\0') {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar2;
      *param_1 = uVar1;
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = 0;
      *(undefined1 *)(param_1 + 3) = 1;
    }
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    if (*(char *)(param_2 + 7) != '\0') {
      uVar2 = param_2[5];
      uVar1 = param_2[4];
      param_1[6] = param_2[6];
      param_1[5] = uVar2;
      param_1[4] = uVar1;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[4] = 0;
      *(undefined1 *)(param_1 + 7) = 1;
    }
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 0xb) = 0;
    if (*(char *)(param_2 + 0xb) != '\0') {
      uVar2 = param_2[9];
      uVar1 = param_2[8];
      param_1[10] = param_2[10];
      param_1[9] = uVar2;
      param_1[8] = uVar1;
      param_2[9] = 0;
      param_2[10] = 0;
      param_2[8] = 0;
      *(undefined1 *)(param_1 + 0xb) = 1;
    }
    *(undefined1 *)(param_1 + 0xc) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    if (*(char *)(param_2 + 0xf) != '\0') {
      uVar2 = param_2[0xd];
      uVar1 = param_2[0xc];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar2;
      param_1[0xc] = uVar1;
      param_2[0xd] = 0;
      param_2[0xe] = 0;
      param_2[0xc] = 0;
      *(undefined1 *)(param_1 + 0xf) = 1;
    }
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
    if (*(char *)(param_2 + 0x13) != '\0') {
      uVar2 = param_2[0x11];
      uVar1 = param_2[0x10];
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = uVar2;
      param_1[0x10] = uVar1;
      param_2[0x11] = 0;
      param_2[0x12] = 0;
      param_2[0x10] = 0;
      *(undefined1 *)(param_1 + 0x13) = 1;
    }
    *(undefined1 *)(param_1 + 0x14) = 0;
    *(undefined1 *)(param_1 + 0x17) = 0;
    if (*(char *)(param_2 + 0x17) != '\0') {
      uVar2 = param_2[0x15];
      uVar1 = param_2[0x14];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar2;
      param_1[0x14] = uVar1;
      param_2[0x15] = 0;
      param_2[0x16] = 0;
      param_2[0x14] = 0;
      *(undefined1 *)(param_1 + 0x17) = 1;
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/optional",0x167,
             "!has_value()","__construct called for engaged __optional_storage");
}


// ===== 005c8cc4  FUN_005c8cc4 =====

void FUN_005c8cc4(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  if (*(char *)(param_2 + 0x18) != '\0') {
                    /* try { // try from 005c8cf4 to 005c8cff has its CatchHandler @ 005c8ec4 */
    FUN_004c55b4(param_1,param_2);
    param_1[0x18] = 1;
  }
  param_1[0x20] = 0;
  param_1[0x38] = 0;
  if (*(char *)(param_2 + 0x38) != '\0') {
                    /* try { // try from 005c8d20 to 005c8d27 has its CatchHandler @ 005c8e88 */
    FUN_004c55b4(param_1 + 0x20,param_2 + 0x20);
    param_1[0x38] = 1;
  }
  param_1[0x40] = 0;
  param_1[0x58] = 0;
  if (*(char *)(param_2 + 0x58) != '\0') {
                    /* try { // try from 005c8d48 to 005c8d4f has its CatchHandler @ 005c8e60 */
    FUN_004c55b4(param_1 + 0x40,param_2 + 0x40);
    param_1[0x58] = 1;
  }
  param_1[0x60] = 0;
  param_1[0x78] = 0;
  if (*(char *)(param_2 + 0x78) != '\0') {
                    /* try { // try from 005c8d70 to 005c8d77 has its CatchHandler @ 005c8e38 */
    FUN_004c55b4(param_1 + 0x60,param_2 + 0x60);
    param_1[0x78] = 1;
  }
  param_1[0x80] = 0;
  param_1[0x98] = 0;
  if (*(char *)(param_2 + 0x98) != '\0') {
                    /* try { // try from 005c8d98 to 005c8d9f has its CatchHandler @ 005c8e10 */
    FUN_004c55b4(param_1 + 0x80,param_2 + 0x80);
    param_1[0x98] = 1;
  }
  param_1[0xa0] = 0;
  param_1[0xb8] = 0;
  if (*(char *)(param_2 + 0xb8) != '\0') {
                    /* try { // try from 005c8dc0 to 005c8dc7 has its CatchHandler @ 005c8de8 */
    FUN_004c55b4(param_1 + 0xa0,param_2 + 0xa0);
    param_1[0xb8] = 1;
  }
  return;
}


// ===== 005c8ed4  FUN_005c8ed4 =====

void FUN_005c8ed4(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                 uint param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *local_140;
  long lStack_138;
  undefined8 local_130 [3];
  long local_118;
  void *local_d0;
  void *local_c8;
  void *local_b8;
  char local_a1;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  local_140 = (undefined8 *)*param_2;
  uVar2 = param_2[1];
  *param_1 = 0;
  bVar3 = *(byte *)((long)param_2 + 0x17);
  *(undefined8 *)(param_1 + 8) = 0;
  local_50 = (undefined8 *)param_3[3];
  uVar5 = *param_3;
  if (-1 < (char)bVar3) {
    uVar2 = (ulong)bVar3;
    local_140 = param_2;
  }
  lStack_138 = (long)local_140 + uVar2;
  uStack_58 = param_3[2];
  local_60 = param_3[1];
  if (local_50[1] != 0) {
    param_3[2] = FUN_005b9584;
    param_3[3] = &DAT_001f1910;
  }
  puVar1 = local_50;
  if (local_50[1] != 0) {
    puVar1 = &DAT_001f1910;
  }
                    /* try { // try from 005c8f64 to 005c8f7f has its CatchHandler @ 005c902c */
  local_68 = uVar5;
  FUN_005b9bd4(local_130,&local_140,&local_68,param_4 & 1,param_5 & 1);
  if ((code *)local_50[1] != (code *)0x0) {
                    /* try { // try from 005c8f90 to 005c8f93 has its CatchHandler @ 005c9018 */
    (*(code *)local_50[1])(local_68);
  }
                    /* try { // try from 005c8f94 to 005c8fa3 has its CatchHandler @ 005c901c */
  FUN_005b9590(local_130,1,param_1);
  if (local_a1 < '\0') {
    operator_delete(local_b8);
  }
  if (local_d0 != (void *)0x0) {
    local_c8 = local_d0;
    operator_delete(local_d0);
  }
  if (*(code **)(local_118 + 8) != (code *)0x0) {
                    /* try { // try from 005c8fd4 to 005c8fd7 has its CatchHandler @ 005c9014 */
    (**(code **)(local_118 + 8))(local_130[0]);
  }
  if ((code *)puVar1[1] != (code *)0x0) {
                    /* try { // try from 005c8fe0 to 005c8fe7 has its CatchHandler @ 005c9010 */
    (*(code *)puVar1[1])(uVar5);
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 005c9080  FUN_005c9080 =====

long * FUN_005c9080(char *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 local_78 [3];
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*param_1 != '\x01') {
    uVar5 = FUN_0054f64c(0x20);
    local_78[0] = FUN_005b2870(param_1);
                    /* try { // try from 005c9168 to 005c917b has its CatchHandler @ 005c9298 */
    FUN_005b2784(auStack_60,"cannot use at() with ",local_78);
                    /* try { // try from 005c9180 to 005c91bf has its CatchHandler @ 005c927c */
    FUN_005b3a24(uVar5,0x130,auStack_60,param_1);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar5,&PTR_PTR_thunk_FUN_00552768_00d25820,FUN_005be5f0);
    }
    goto LAB_005c92bc;
  }
  plVar7 = (long *)(*(long *)(param_1 + 8) + 8);
  plVar8 = (long *)*plVar7;
  plVar6 = plVar7;
  if (plVar8 == (long *)0x0) {
LAB_005c9110:
    plVar6 = plVar7;
  }
  else {
    do {
      cVar3 = FUN_005b2010(plVar8 + 4,param_2);
      plVar2 = plVar8 + 1;
      if (-1 < cVar3) {
        plVar6 = plVar8;
        plVar2 = plVar8;
      }
      plVar8 = (long *)*plVar2;
    } while (plVar8 != (long *)0x0);
    if ((plVar6 == plVar7) || (iVar4 = FUN_005b2010(plVar6 + 4,param_2), 0 < iVar4 * 0x1000000))
    goto LAB_005c9110;
  }
  if (plVar6 == (long *)(*(long *)(param_1 + 8) + 8)) {
    uVar5 = FUN_0054f64c(0x20);
                    /* try { // try from 005c91d4 to 005c91db has its CatchHandler @ 005c9278 */
    FUN_004a3cf4(local_78,param_2);
                    /* try { // try from 005c91dc to 005c91f7 has its CatchHandler @ 005c9260 */
    FUN_005b2a84(auStack_60,"key \'",local_78,"\' not found");
                    /* try { // try from 005c91fc to 005c923b has its CatchHandler @ 005c923c */
    FUN_005b3c0c(uVar5,0x193,auStack_60,param_1);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar5,&PTR_PTR_thunk_FUN_00552768_00d25838,FUN_005be5f0);
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_48) {
    return plVar6 + 7;
  }
LAB_005c92bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005c92c0  FUN_005c92c0 =====

void FUN_005c92c0(undefined8 *param_1,long param_2,ulong param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 unaff_x22;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    if (0xaaaaaaaaaaaaaaa < param_3) {
      FUN_005a54b0(param_1);
                    /* catch() { ... } // from try @ 005c9324 with catch @ 005c9354 */
      param_1[1] = unaff_x22;
                    /* WARNING: Subroutine does not return */
      FUN_00d0fa5c();
    }
    param_3 = param_3 * 0x18;
    pvVar1 = operator_new(param_3);
    *param_1 = pvVar1;
    param_1[1] = pvVar1;
    param_1[2] = (void *)((long)pvVar1 + param_3);
                    /* try { // try from 005c9324 to 005c9333 has its CatchHandler @ 005c9354 */
    uVar2 = FUN_005ca008(param_1 + 2,param_2,param_2 + param_3,pvVar1);
    param_1[1] = uVar2;
  }
  return;
}


// ===== 005c935c  FUN_005c935c =====

long * FUN_005c935c(char *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 local_78 [3];
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*param_1 != '\x01') {
    uVar5 = FUN_0054f64c(0x20);
    local_78[0] = FUN_005b2870(param_1);
                    /* try { // try from 005c9444 to 005c9457 has its CatchHandler @ 005c9574 */
    FUN_005b2784(auStack_60,"cannot use at() with ",local_78);
                    /* try { // try from 005c945c to 005c949b has its CatchHandler @ 005c9558 */
    FUN_005b3a24(uVar5,0x130,auStack_60,param_1);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar5,&PTR_PTR_thunk_FUN_00552768_00d25820,FUN_005be5f0);
    }
    goto LAB_005c9598;
  }
  plVar7 = (long *)(*(long *)(param_1 + 8) + 8);
  plVar8 = (long *)*plVar7;
  plVar6 = plVar7;
  if (plVar8 == (long *)0x0) {
LAB_005c93ec:
    plVar6 = plVar7;
  }
  else {
    do {
      cVar3 = FUN_005b2010(plVar8 + 4,param_2);
      plVar2 = plVar8 + 1;
      if (-1 < cVar3) {
        plVar6 = plVar8;
        plVar2 = plVar8;
      }
      plVar8 = (long *)*plVar2;
    } while (plVar8 != (long *)0x0);
    if ((plVar6 == plVar7) || (iVar4 = FUN_005b2010(plVar6 + 4,param_2), 0 < iVar4 * 0x1000000))
    goto LAB_005c93ec;
  }
  if (plVar6 == (long *)(*(long *)(param_1 + 8) + 8)) {
    uVar5 = FUN_0054f64c(0x20);
                    /* try { // try from 005c94b0 to 005c94b7 has its CatchHandler @ 005c9554 */
    FUN_004a3cf4(local_78,param_2);
                    /* try { // try from 005c94b8 to 005c94d3 has its CatchHandler @ 005c953c */
    FUN_005b2a84(auStack_60,"key \'",local_78,"\' not found");
                    /* try { // try from 005c94d8 to 005c9517 has its CatchHandler @ 005c9518 */
    FUN_005b3c0c(uVar5,0x193,auStack_60,param_1);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar5,&PTR_PTR_thunk_FUN_00552768_00d25838,FUN_005be5f0);
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_48) {
    return plVar6 + 7;
  }
LAB_005c9598:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005c959c  FUN_005c959c =====

long * FUN_005c959c(char *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 local_78 [3];
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*param_1 != '\x01') {
    uVar5 = FUN_0054f64c(0x20);
    local_78[0] = FUN_005b2870(param_1);
                    /* try { // try from 005c9684 to 005c9697 has its CatchHandler @ 005c97b4 */
    FUN_005b2784(auStack_60,"cannot use at() with ",local_78);
                    /* try { // try from 005c969c to 005c96db has its CatchHandler @ 005c9798 */
    FUN_005b3a24(uVar5,0x130,auStack_60,param_1);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar5,&PTR_PTR_thunk_FUN_00552768_00d25820,FUN_005be5f0);
    }
    goto LAB_005c97d8;
  }
  plVar7 = (long *)(*(long *)(param_1 + 8) + 8);
  plVar8 = (long *)*plVar7;
  plVar6 = plVar7;
  if (plVar8 == (long *)0x0) {
LAB_005c962c:
    plVar6 = plVar7;
  }
  else {
    do {
      cVar3 = FUN_005b2010(plVar8 + 4,param_2);
      plVar2 = plVar8 + 1;
      if (-1 < cVar3) {
        plVar6 = plVar8;
        plVar2 = plVar8;
      }
      plVar8 = (long *)*plVar2;
    } while (plVar8 != (long *)0x0);
    if ((plVar6 == plVar7) || (iVar4 = FUN_005b2010(plVar6 + 4,param_2), 0 < iVar4 * 0x1000000))
    goto LAB_005c962c;
  }
  if (plVar6 == (long *)(*(long *)(param_1 + 8) + 8)) {
    uVar5 = FUN_0054f64c(0x20);
                    /* try { // try from 005c96f0 to 005c96f7 has its CatchHandler @ 005c9794 */
    FUN_004a3cf4(local_78,param_2);
                    /* try { // try from 005c96f8 to 005c9713 has its CatchHandler @ 005c977c */
    FUN_005b2a84(auStack_60,"key \'",local_78,"\' not found");
                    /* try { // try from 005c9718 to 005c9757 has its CatchHandler @ 005c9758 */
    FUN_005b3c0c(uVar5,0x193,auStack_60,param_1);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar5,&PTR_PTR_thunk_FUN_00552768_00d25838,FUN_005be5f0);
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_48) {
    return plVar6 + 7;
  }
LAB_005c97d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005c97dc  FUN_005c97dc =====

long * FUN_005c97dc(char *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 local_78 [3];
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*param_1 != '\x01') {
    uVar5 = FUN_0054f64c(0x20);
    local_78[0] = FUN_005b2870(param_1);
                    /* try { // try from 005c98c4 to 005c98d7 has its CatchHandler @ 005c99f4 */
    FUN_005b2784(auStack_60,"cannot use at() with ",local_78);
                    /* try { // try from 005c98dc to 005c991b has its CatchHandler @ 005c99d8 */
    FUN_005b3a24(uVar5,0x130,auStack_60,param_1);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar5,&PTR_PTR_thunk_FUN_00552768_00d25820,FUN_005be5f0);
    }
    goto LAB_005c9a18;
  }
  plVar7 = (long *)(*(long *)(param_1 + 8) + 8);
  plVar8 = (long *)*plVar7;
  plVar6 = plVar7;
  if (plVar8 == (long *)0x0) {
LAB_005c986c:
    plVar6 = plVar7;
  }
  else {
    do {
      cVar3 = FUN_005b2010(plVar8 + 4,param_2);
      plVar2 = plVar8 + 1;
      if (-1 < cVar3) {
        plVar6 = plVar8;
        plVar2 = plVar8;
      }
      plVar8 = (long *)*plVar2;
    } while (plVar8 != (long *)0x0);
    if ((plVar6 == plVar7) || (iVar4 = FUN_005b2010(plVar6 + 4,param_2), 0 < iVar4 * 0x1000000))
    goto LAB_005c986c;
  }
  if (plVar6 == (long *)(*(long *)(param_1 + 8) + 8)) {
    uVar5 = FUN_0054f64c(0x20);
                    /* try { // try from 005c9930 to 005c9937 has its CatchHandler @ 005c99d4 */
    FUN_004a3cf4(local_78,param_2);
                    /* try { // try from 005c9938 to 005c9953 has its CatchHandler @ 005c99bc */
    FUN_005b2a84(auStack_60,"key \'",local_78,"\' not found");
                    /* try { // try from 005c9958 to 005c9997 has its CatchHandler @ 005c9998 */
    FUN_005b3c0c(uVar5,0x193,auStack_60,param_1);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar5,&PTR_PTR_thunk_FUN_00552768_00d25838,FUN_005be5f0);
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_48) {
    return plVar6 + 7;
  }
LAB_005c9a18:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005c9a1c  FUN_005c9a1c =====

void FUN_005c9a1c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x5a) != '\0') {
    FUN_005c7080(param_1 + 0x42);
  }
  if ((*(char *)(param_1 + 0x40) != '\0') && (*(char *)((long)param_1 + 0x1ff) < '\0')) {
    operator_delete((void *)param_1[0x3d]);
  }
  if ((*(char *)(param_1 + 0x3c) != '\0') && (*(char *)((long)param_1 + 0x1df) < '\0')) {
    operator_delete((void *)param_1[0x39]);
  }
  if ((*(char *)(param_1 + 0x38) != '\0') && (*(char *)((long)param_1 + 0x1bf) < '\0')) {
    operator_delete((void *)param_1[0x35]);
  }
  if ((*(char *)(param_1 + 0x34) != '\0') && (*(char *)((long)param_1 + 0x19f) < '\0')) {
    operator_delete((void *)param_1[0x31]);
  }
  if ((*(char *)(param_1 + 0x30) != '\0') && (*(char *)((long)param_1 + 0x17f) < '\0')) {
    operator_delete((void *)param_1[0x2d]);
  }
  if ((*(char *)(param_1 + 0x2b) != '\0') && (*(char *)((long)param_1 + 0x157) < '\0')) {
    operator_delete((void *)param_1[0x28]);
  }
  if ((*(char *)(param_1 + 0x27) != '\0') && (*(char *)((long)param_1 + 0x137) < '\0')) {
    operator_delete((void *)param_1[0x24]);
  }
  if ((*(char *)(param_1 + 0x23) != '\0') && (*(char *)((long)param_1 + 0x117) < '\0')) {
    operator_delete((void *)param_1[0x20]);
  }
  if ((*(char *)(param_1 + 0x1f) != '\0') && (*(char *)((long)param_1 + 0xf7) < '\0')) {
    operator_delete((void *)param_1[0x1c]);
  }
  if ((*(char *)(param_1 + 0x1b) != '\0') && (*(char *)((long)param_1 + 0xd7) < '\0')) {
    operator_delete((void *)param_1[0x18]);
  }
  if ((*(char *)(param_1 + 0x17) != '\0') && (*(char *)((long)param_1 + 0xb7) < '\0')) {
    operator_delete((void *)param_1[0x14]);
  }
  if ((*(char *)(param_1 + 0x13) != '\0') && (*(char *)((long)param_1 + 0x97) < '\0')) {
    operator_delete((void *)param_1[0x10]);
  }
  if ((*(char *)(param_1 + 0xf) != '\0') && (*(char *)((long)param_1 + 0x77) < '\0')) {
    operator_delete((void *)param_1[0xc]);
  }
  if ((*(char *)(param_1 + 0xb) != '\0') && (*(char *)((long)param_1 + 0x57) < '\0')) {
    operator_delete((void *)param_1[8]);
  }
  if ((*(char *)(param_1 + 7) != '\0') && (*(char *)((long)param_1 + 0x37) < '\0')) {
    operator_delete((void *)param_1[4]);
  }
  if ((*(char *)(param_1 + 3) != '\0') && (*(char *)((long)param_1 + 0x17) < '\0')) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 005c9bd0  FUN_005c9bd0 =====

void FUN_005c9bd0(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  
  param_1[2] = 0;
  puVar1 = param_1 + 1;
  *puVar1 = 0;
  *param_1 = puVar1;
  if (param_3 != 0) {
    param_3 = param_3 << 5;
    do {
                    /* try { // try from 005c9c00 to 005c9c13 has its CatchHandler @ 005c9c30 */
      FUN_005c9c50(param_1,puVar1,param_2,param_2);
      param_2 = param_2 + 0x20;
      param_3 = param_3 + -0x20;
    } while (param_3 != 0);
  }
  return;
}


// ===== 005c9c48  FUN_005c9c48 =====

void FUN_005c9c48(long param_1)

{
  FUN_005c9fb8(param_1,*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 005c9c50  FUN_005c9c50 =====

undefined8 * FUN_005c9c50(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  puVar2 = (undefined8 *)FUN_005c9d54(param_1,param_2,&local_50,auStack_58,param_3);
  puVar5 = (undefined8 *)*puVar2;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(0x40);
                    /* try { // try from 005c9cb0 to 005c9cb7 has its CatchHandler @ 005c9d2c */
    FUN_004c55b4(puVar5 + 4,param_4);
    uVar3 = *(undefined8 *)(param_4 + 0x18);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[7] = uVar3;
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


// ===== 005c9d54  FUN_005c9d54 =====

long * FUN_005c9d54(undefined8 *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5
                   )

{
  long *plVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar1 = param_1 + 1;
  if (plVar1 != param_2) {
    uVar3 = FUN_0041d7a0(param_5,param_2 + 4);
    if ((uVar3 >> 7 & 1) == 0) {
      uVar3 = FUN_0041d7a0(param_2 + 4,param_5);
      if ((uVar3 >> 7 & 1) == 0) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      if (param_2 == (long *)0x0) {
                    /* try { // try from 005c9f88 to 005c9faf has its CatchHandler @ 005c9fb0 */
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
        uVar3 = FUN_0041d7a0(param_5,plVar8 + 4);
        if ((uVar3 >> 7 & 1) == 0) {
          plVar5 = (long *)*plVar1;
          plVar8 = plVar1;
          while (plVar7 = plVar8, plVar5 != (long *)0x0) {
            while( true ) {
              plVar7 = plVar5;
              uVar3 = FUN_0041d7a0(param_5,plVar7 + 4);
              if ((uVar3 >> 7 & 1) != 0) break;
              uVar3 = FUN_0041d7a0(plVar7 + 4,param_5);
              if ((uVar3 >> 7 & 1) == 0) goto LAB_005c9e9c;
              plVar8 = plVar7 + 1;
              plVar5 = (long *)*plVar8;
              if ((long *)*plVar8 == (long *)0x0) goto LAB_005c9e9c;
            }
            plVar8 = plVar7;
            plVar5 = (long *)*plVar7;
          }
          goto LAB_005c9e9c;
        }
        plVar4 = (long *)*plVar6;
      }
      plVar7 = plVar8;
      if (plVar4 == (long *)0x0) {
        *param_3 = (long)param_2;
        return plVar6;
      }
      goto LAB_005c9e9c;
    }
  }
  plVar7 = param_2;
  if ((long *)*param_1 != param_2) {
    if (param_2 == (long *)0x0) {
                    /* try { // try from 005c9f60 to 005c9f87 has its CatchHandler @ 005c9fb4 */
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
    uVar3 = FUN_0041d7a0(plVar7 + 4,param_5);
    if ((uVar3 >> 7 & 1) == 0) {
      plVar5 = (long *)*plVar1;
      plVar8 = plVar1;
      while (plVar7 = plVar8, plVar5 != (long *)0x0) {
        while( true ) {
          plVar7 = plVar5;
          uVar3 = FUN_0041d7a0(param_5,plVar7 + 4);
          if ((uVar3 >> 7 & 1) != 0) break;
          uVar3 = FUN_0041d7a0(plVar7 + 4,param_5);
          if ((uVar3 >> 7 & 1) == 0) goto LAB_005c9e9c;
          plVar8 = plVar7 + 1;
          plVar5 = (long *)*plVar8;
          if ((long *)*plVar8 == (long *)0x0) goto LAB_005c9e9c;
        }
        plVar8 = plVar7;
        plVar5 = (long *)*plVar7;
      }
      goto LAB_005c9e9c;
    }
  }
  if (*param_2 == 0) {
    *param_3 = (long)param_2;
    return param_2;
  }
  plVar8 = plVar7 + 1;
LAB_005c9e9c:
  *param_3 = (long)plVar7;
  return plVar8;
}


// ===== 005c9fb8  FUN_005c9fb8 =====

void FUN_005c9fb8(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_005c9fb8(param_1,*param_2);
    FUN_005c9fb8(param_1,param_2[1]);
    if (*(char *)((long)param_2 + 0x37) < '\0') {
      operator_delete((void *)param_2[4]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}


// ===== 005ca008  FUN_005ca008 =====

long FUN_005ca008(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (param_2 != param_3) {
    do {
      if (param_4 == 0) {
        if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* try { // try from 005ca0ac to 005ca0d3 has its CatchHandler @ 005ca0d8 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        goto LAB_005ca12c;
      }
                    /* try { // try from 005ca050 to 005ca05b has its CatchHandler @ 005ca0d4 */
      FUN_004c55b4(param_4,param_2);
      param_4 = param_4 + 0x18;
      param_2 = param_2 + 0x18;
    } while (param_2 != param_3);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return param_4;
  }
LAB_005ca12c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005ca134  FUN_005ca134 =====

/* WARNING: Removing unreachable block (ram,0x005ca178) */

void FUN_005ca134(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x18
      ) {
  }
  return;
}


// ===== 005ca184  FUN_005ca184 =====

void FUN_005ca184(char *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*param_1 == '\x02') {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      FUN_005ca384(param_1);
      return;
    }
  }
  else {
    uVar2 = FUN_0054f64c(0x20);
    local_58 = FUN_005b2870(param_1);
                    /* try { // try from 005ca1f4 to 005ca207 has its CatchHandler @ 005ca270 */
    FUN_005ca298(auStack_50,"type must be array, but is ",&local_58);
                    /* try { // try from 005ca20c to 005ca24b has its CatchHandler @ 005ca24c */
    FUN_005b3a24(uVar2,0x12e,auStack_50,param_1);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar2,&PTR_PTR_thunk_FUN_00552768_00d25820,FUN_005be5f0);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005ca298  FUN_005ca298 =====

void FUN_005ca298(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  ulong uVar1;
  size_t sVar2;
  size_t sVar3;
  char *__s;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  sVar2 = strlen(param_2);
  sVar3 = strlen((char *)*param_3);
  uVar1 = sVar3 + sVar2;
  if (0x7fffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_004e823c(param_1);
  }
  if (0x16 < uVar1) {
                    /* try { // try from 005ca2e8 to 005ca367 has its CatchHandler @ 005ca368 */
    FUN_0051f494(param_1,uVar1 | 0xf);
  }
  sVar2 = strlen(param_2);
  FUN_00547cac(param_1,param_2,sVar2);
  __s = (char *)*param_3;
  if (__s != (char *)0x0) {
    sVar2 = strlen(__s);
    FUN_00547cac(param_1,__s,sVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/string",0xad0,
             "__s != nullptr","string::append received nullptr");
}


// ===== 005ca384  FUN_005ca384 =====

/* WARNING: Removing unreachable block (ram,0x005ca4c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ca384(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  void *pvVar5;
  void *pvVar6;
  byte *local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  byte *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  bVar1 = *param_1;
  uVar4 = (ulong)bVar1;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  if (bVar1 != 0) {
    if (bVar1 == 1) {
      uVar4 = *(ulong *)(*(long *)(param_1 + 8) + 0x10);
    }
    else if (bVar1 == 2) {
      uVar4 = (*(long **)(param_1 + 8))[1] - **(long **)(param_1 + 8) >> 4;
    }
    else {
      uVar4 = 1;
    }
  }
                    /* try { // try from 005ca3f0 to 005ca48f has its CatchHandler @ 005ca518 */
  FUN_0047a51c(&local_50,uVar4);
  bVar1 = *param_1;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0x8000000000000000;
  if (bVar1 == 0) {
    local_58 = 1;
  }
  else {
    if (bVar1 == 2) {
      local_60 = **(undefined8 **)(param_1 + 8);
      puStack_88 = (undefined8 *)0x0;
      uStack_78 = 0x8000000000000000;
      local_80 = (*(undefined8 **)(param_1 + 8))[1];
      goto LAB_005ca47c;
    }
    if (bVar1 == 1) {
      puStack_88 = *(undefined8 **)(param_1 + 8) + 1;
      local_68 = **(undefined8 **)(param_1 + 8);
      uStack_78 = _UNK_001f3868;
      local_80 = _DAT_001f3860;
      goto LAB_005ca47c;
    }
    local_58 = 0;
  }
  puStack_88 = (undefined8 *)0x0;
  local_80 = 0;
  uStack_78 = 1;
LAB_005ca47c:
  local_90 = param_1;
  local_70 = param_1;
  FUN_005ca540(&local_70,&local_90,&local_50,uStack_48);
  pvVar6 = (void *)*param_2;
  if (pvVar6 != (void *)0x0) {
    pvVar5 = (void *)param_2[1];
    pvVar3 = pvVar6;
    if (pvVar5 != pvVar6) {
      do {
        pvVar5 = (void *)((long)pvVar5 + -0x18);
      } while (pvVar5 != pvVar6);
      pvVar3 = (void *)*param_2;
    }
    param_2[1] = pvVar6;
    operator_delete(pvVar3);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  param_2[1] = uStack_48;
  *param_2 = local_50;
  param_2[2] = local_40;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005ca540  FUN_005ca540 =====

undefined1  [16]
FUN_005ca540(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  void *local_60;
  undefined8 local_58;
  long lStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  do {
    uVar4 = FUN_005ca864(param_1,param_2);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
        auVar8._8_8_ = param_4;
        auVar8._0_8_ = param_3;
        return auVar8;
      }
LAB_005ca6d0:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar5 = FUN_005ca6d8(param_1);
    local_58 = 0;
    lStack_50 = 0;
    local_60 = (void *)0x0;
                    /* try { // try from 005ca5a8 to 005ca5af has its CatchHandler @ 005ca6a4 */
    FUN_005b937c(uVar5,&local_60);
                    /* try { // try from 005ca5b0 to 005ca5bf has its CatchHandler @ 005ca6a0 */
    param_4 = FUN_005cab98(param_3,param_4,&local_60);
    if (lStack_50 < 0) {
      operator_delete(local_60);
    }
    if (*(char *)*param_1 == '\x02') {
      param_1[2] = param_1[2] + 0x10;
    }
    else if (*(char *)*param_1 == '\x01') {
      plVar6 = (long *)param_1[1];
      if (plVar6 == (long *)0x0) {
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 005ca678 to 005ca69f has its CatchHandler @ 005ca6d4 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
                     "__x != nullptr","node shouldn\'t be null");
        }
        goto LAB_005ca6d0;
      }
      plVar2 = (long *)plVar6[1];
      if ((long *)plVar6[1] == (long *)0x0) {
        do {
          plVar7 = (long *)plVar6[2];
          bVar3 = (long *)*plVar7 != plVar6;
          plVar6 = plVar7;
        } while (bVar3);
      }
      else {
        do {
          plVar7 = plVar2;
          plVar2 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
      param_1[1] = plVar7;
    }
    else {
      param_1[3] = param_1[3] + 1;
    }
    param_4 = param_4 + 0x18;
  } while( true );
}


// ===== 005ca6d8  FUN_005ca6d8 =====

void FUN_005ca6d8(long *param_1)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pcVar3 = (char *)*param_1;
  cVar1 = *pcVar3;
  if (cVar1 == '\x01') {
    pcVar3 = (char *)(param_1[1] + 0x38);
  }
  else if (cVar1 == '\x02') {
    pcVar3 = (char *)param_1[2];
  }
  else {
    if (cVar1 == '\0') {
      uVar4 = FUN_0054f64c(0x20);
                    /* try { // try from 005ca7c4 to 005ca7d3 has its CatchHandler @ 005ca81c */
      FUN_004a3cf4(auStack_50,"cannot get value");
                    /* try { // try from 005ca7dc to 005ca817 has its CatchHandler @ 005ca818 */
      pcVar3 = (char *)FUN_005ca9b0(uVar4,0xd6,auStack_50,*param_1);
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_0054f748(uVar4,&PTR_PTR_thunk_FUN_00552768_00d25970,FUN_005be5f0);
      }
      goto LAB_005ca860;
    }
    if (param_1[3] != 0) {
      uVar4 = FUN_0054f64c(0x20);
                    /* try { // try from 005ca72c to 005ca73b has its CatchHandler @ 005ca83c */
      FUN_004a3cf4(auStack_50,"cannot get value");
                    /* try { // try from 005ca744 to 005ca77f has its CatchHandler @ 005ca820 */
      pcVar3 = (char *)FUN_005ca9b0(uVar4,0xd6,auStack_50,*param_1);
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_0054f748(uVar4,&PTR_PTR_thunk_FUN_00552768_00d25970,FUN_005be5f0);
      }
      goto LAB_005ca860;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_005ca860:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pcVar3);
}


// ===== 005ca864  FUN_005ca864 =====

void FUN_005ca864(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pcVar4 = (char *)*param_1;
  if (pcVar4 == (char *)*param_2) {
    if (pcVar4 == (char *)0x0) {
      uVar2 = 1;
    }
    else {
      if (*pcVar4 == '\x02') {
        lVar5 = param_1[2];
        lVar6 = param_2[2];
      }
      else if (*pcVar4 == '\x01') {
        lVar5 = param_1[1];
        lVar6 = param_2[1];
      }
      else {
        lVar5 = param_1[3];
        lVar6 = param_2[3];
      }
      uVar2 = (ulong)(lVar5 == lVar6);
    }
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else {
    uVar3 = FUN_0054f64c(0x20);
                    /* try { // try from 005ca910 to 005ca91f has its CatchHandler @ 005ca988 */
    FUN_004a3cf4(auStack_50,"cannot compare iterators of different containers");
                    /* try { // try from 005ca928 to 005ca963 has its CatchHandler @ 005ca964 */
    uVar2 = FUN_005ca9b0(uVar3,0xd4,auStack_50,*param_1);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar3,&PTR_PTR_thunk_FUN_00552768_00d25970,FUN_005be5f0);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 005ca9b0  FUN_005ca9b0 =====

/* WARNING: Removing unreachable block (ram,0x005caa2c) */
/* WARNING: Removing unreachable block (ram,0x005caadc) */

void FUN_005ca9b0(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 ****ppppuVar1;
  long lVar2;
  void *local_a0 [2];
  char local_89;
  void *local_88 [2];
  char local_71;
  undefined8 ***local_70 [2];
  char local_59;
  undefined1 local_58 [28];
  undefined1 local_3c [4];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_004a3cf4(local_a0,"invalid_iterator");
  local_3c[0] = 0x2e;
                    /* try { // try from 005ca9f4 to 005ca9ff has its CatchHandler @ 005cab68 */
  FUN_005490bc(local_58,param_2);
                    /* try { // try from 005caa00 to 005caa23 has its CatchHandler @ 005cab50 */
  FUN_005b2cac(local_88,"[json.exception.",local_a0,local_3c,local_58,&DAT_001d2ea9);
                    /* try { // try from 005caa34 to 005caa43 has its CatchHandler @ 005cab3c */
  FUN_004a3cf4(local_58,&DAT_001b3348);
                    /* try { // try from 005caa44 to 005caa57 has its CatchHandler @ 005cab24 */
  FUN_005b2b84(local_70,local_88,local_58,param_3);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_89 < '\0') {
    operator_delete(local_a0[0]);
  }
  *(undefined4 *)(param_1 + 1) = param_2;
  ppppuVar1 = (undefined8 ****)local_70[0];
  if (-1 < local_59) {
    ppppuVar1 = local_70;
  }
  *param_1 = &PTR_FUN_00d25888;
                    /* try { // try from 005caa98 to 005caa9b has its CatchHandler @ 005cab08 */
  FUN_0054723c(param_1 + 2,ppppuVar1);
  *param_1 = &PTR_FUN_00d25998;
  if (local_59 < '\0') {
    operator_delete(local_70[0]);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 005cab98  FUN_005cab98 =====

/* WARNING: Removing unreachable block (ram,0x005cadc4) */

undefined8 * FUN_005cab98(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  void *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  void *pvStack_68;
  long *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = *param_1;
  puVar9 = (undefined8 *)param_1[1];
  lVar13 = (param_2 - lVar2) / 0x18;
  plVar8 = param_1 + 2;
  puVar6 = (undefined8 *)(lVar2 + lVar13 * 0x18);
  if (puVar9 < (undefined8 *)*plVar8) {
    puVar7 = puVar6;
    if (puVar6 == puVar9) {
      if (lVar2 == 0) {
        if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 005caeb4 to 005caedb has its CatchHandler @ 005caf18 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        goto LAB_005caf38;
      }
      uVar12 = param_3[1];
      uVar11 = *param_3;
      puVar6[2] = param_3[2];
      puVar6[1] = uVar12;
      *puVar6 = uVar11;
      param_3[1] = 0;
      param_3[2] = 0;
      *param_3 = 0;
      param_1[1] = (long)(puVar6 + 3);
    }
    else {
      puVar10 = puVar9;
      for (puVar4 = puVar9 + -3; puVar4 < puVar9; puVar4 = puVar4 + 3) {
        uVar12 = puVar4[1];
        uVar11 = *puVar4;
        puVar10[2] = puVar4[2];
        puVar10[1] = uVar12;
        *puVar10 = uVar11;
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = 0;
        puVar10 = puVar10 + 3;
      }
      param_1[1] = (long)puVar10;
      if (puVar9 != puVar6 + 3) {
        lVar2 = ((long)puVar9 - (long)(puVar6 + 3) >> 3) * 8;
        puVar9 = puVar9 + -3;
        do {
          puVar10 = (undefined8 *)((long)puVar6 + lVar2 + -0x18);
          if (*(char *)((long)puVar9 + 0x17) < '\0') {
            operator_delete((void *)*puVar9);
          }
          lVar13 = lVar2 + -0x18;
          uVar12 = *(undefined8 *)((long)puVar6 + lVar2 + -0x10);
          uVar11 = *puVar10;
          puVar9[2] = *(undefined8 *)((long)puVar6 + lVar2 + -8);
          puVar9[1] = uVar12;
          *puVar9 = uVar11;
          *(undefined1 *)((long)puVar6 + lVar2 + -1) = 0;
          *(undefined1 *)puVar10 = 0;
          lVar2 = lVar13;
          puVar9 = puVar9 + -3;
        } while (lVar13 != 0);
      }
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        operator_delete((void *)*puVar6);
      }
      uVar12 = param_3[1];
      uVar11 = *param_3;
      puVar6[2] = param_3[2];
      puVar6[1] = uVar12;
      *puVar6 = uVar11;
      *(undefined1 *)((long)param_3 + 0x17) = 0;
      *(undefined1 *)param_3 = 0;
    }
  }
  else {
    uVar5 = ((long)puVar9 - lVar2 >> 3) * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar5) {
      if (*(long *)(lVar1 + 0x28) != local_58) goto LAB_005caf38;
      FUN_005a54b0(param_1);
LAB_005caef4:
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      goto LAB_005caf38;
    }
    lVar2 = *plVar8 - lVar2 >> 3;
    uVar3 = lVar2 * 0x5555555555555556;
    if (uVar3 < uVar5 || uVar3 - uVar5 == 0) {
      uVar3 = uVar5;
    }
    if (0x555555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
      uVar3 = 0xaaaaaaaaaaaaaaa;
    }
    local_60 = plVar8;
    if (uVar3 == 0) {
      local_80 = (void *)0x0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar3) goto LAB_005caef4;
      local_80 = operator_new(uVar3 * 0x18);
    }
    local_78 = (undefined8 *)((long)local_80 + lVar13 * 0x18);
    pvStack_68 = (void *)((long)local_80 + uVar3 * 0x18);
    local_70 = local_78;
                    /* try { // try from 005cacf8 to 005cad67 has its CatchHandler @ 005caf08 */
    FUN_005caf3c(&local_80,param_3);
    puVar7 = local_78;
    puVar10 = (undefined8 *)*param_1;
    for (puVar9 = puVar6; puVar10 != puVar9; puVar9 = puVar9 + -3) {
      uVar12 = puVar9[-2];
      uVar11 = puVar9[-3];
      local_78[-1] = puVar9[-1];
      local_78[-2] = uVar12;
      local_78[-3] = uVar11;
      puVar9[-2] = 0;
      puVar9[-1] = 0;
      puVar9[-3] = 0;
      local_78 = local_78 + -3;
    }
    lVar2 = FUN_005cb188(plVar8,puVar6,param_1[1],local_70);
    lVar13 = param_1[2];
    local_70 = (undefined8 *)param_1[1];
    local_80 = (void *)*param_1;
    param_1[2] = (long)pvStack_68;
    *param_1 = (long)local_78;
    param_1[1] = lVar2;
    for (; local_70 != (undefined8 *)local_80; local_70 = (undefined8 *)((long)local_70 + -0x18)) {
    }
    local_78 = (undefined8 *)local_80;
    pvStack_68 = (void *)lVar13;
    if (local_80 != (void *)0x0) {
      operator_delete(local_80);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return puVar7;
  }
LAB_005caf38:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005caf3c  FUN_005caf3c =====

/* WARNING: Removing unreachable block (ram,0x005cb0c4) */

void FUN_005caf3c(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar10 = (undefined8 *)param_1[2];
  puVar8 = puVar10;
  if (puVar10 == (undefined8 *)param_1[3]) {
    puVar8 = (undefined8 *)*param_1;
    puVar9 = (undefined8 *)param_1[1];
    if (puVar9 < puVar8 || (long)puVar9 - (long)puVar8 == 0) {
      uVar6 = ((long)puVar10 - (long)puVar8 >> 3) * 0x5555555555555556;
      if ((long)puVar10 - (long)puVar8 == 0) {
        uVar6 = 1;
      }
      if (0xaaaaaaaaaaaaaaa < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      pvVar3 = operator_new(uVar6 * 0x18);
      pvVar1 = (void *)((long)pvVar3 + uVar6 * 0x18);
      pvVar7 = (void *)((long)pvVar3 + (uVar6 >> 2) * 0x18);
      if ((long)puVar10 - (long)puVar9 == 0) {
        *param_1 = pvVar3;
        param_1[1] = pvVar7;
        param_1[2] = pvVar7;
        param_1[3] = pvVar1;
      }
      else {
        lVar2 = ((long)puVar10 - (long)puVar9) / 0x18;
        lVar5 = (uVar6 >> 2) * 0x18;
        lVar4 = lVar2 * 0x18;
        do {
          puVar8 = (undefined8 *)((long)pvVar3 + lVar5);
          uVar12 = puVar9[1];
          uVar11 = *puVar9;
          lVar4 = lVar4 + -0x18;
          lVar5 = lVar5 + 0x18;
          puVar8[2] = puVar9[2];
          puVar8[1] = uVar12;
          *puVar8 = uVar11;
          puVar9[1] = 0;
          puVar9[2] = 0;
          *puVar9 = 0;
          puVar9 = puVar9 + 3;
        } while (lVar4 != 0);
        lVar5 = param_1[1];
        lVar4 = param_1[2];
        param_1[2] = (void *)((long)pvVar7 + lVar2 * 0x18);
        param_1[3] = pvVar1;
        puVar8 = (undefined8 *)*param_1;
        *param_1 = pvVar3;
        param_1[1] = pvVar7;
        for (; lVar4 != lVar5; lVar4 = lVar4 + -0x18) {
        }
      }
      if (puVar8 != (undefined8 *)0x0) {
        operator_delete(puVar8);
      }
      puVar8 = (undefined8 *)param_1[2];
    }
    else {
      lVar4 = ((long)puVar9 - (long)puVar8 >> 3) * -0x5555555555555555;
      lVar5 = lVar4 + 2;
      if (-1 < lVar4 + 1) {
        lVar5 = lVar4 + 1;
      }
      lVar5 = lVar5 >> 1;
      if (puVar9 == puVar10) {
        puVar8 = puVar9 + lVar5 * -3;
      }
      else {
        do {
          puVar8 = puVar9 + lVar5 * -3;
          if (*(char *)((long)puVar8 + 0x17) < '\0') {
            operator_delete((void *)*puVar8);
          }
          uVar12 = puVar9[1];
          uVar11 = *puVar9;
          puVar8[2] = puVar9[2];
          puVar8[1] = uVar12;
          *puVar8 = uVar11;
          *(undefined1 *)((long)puVar9 + 0x17) = 0;
          puVar8 = puVar9 + 3;
          *(undefined1 *)puVar9 = 0;
          puVar9 = puVar8;
        } while (puVar8 != puVar10);
        puVar10 = (undefined8 *)param_1[1];
        puVar8 = puVar8 + lVar5 * -3;
      }
      param_1[1] = puVar10 + lVar5 * -3;
      param_1[2] = puVar8;
    }
  }
  if (puVar8 != (undefined8 *)0x0) {
    uVar12 = param_2[1];
    uVar11 = *param_2;
    puVar8[2] = param_2[2];
    puVar8[1] = uVar12;
    *puVar8 = uVar11;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    param_1[2] = param_1[2] + 0x18;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h",
             0x23,"__location != nullptr","null pointer given to construct_at");
}


// ===== 005cb188  FUN_005cb188 =====

undefined8 *
FUN_005cb188(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = param_4;
  if (param_2 != param_3) {
    do {
      if (puVar2 == (undefined8 *)0x0) {
        if (*(long *)(lVar1 + 0x28) == lVar4) {
                    /* try { // try from 005cb214 to 005cb23b has its CatchHandler @ 005cb23c */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        goto LAB_005cb290;
      }
      uVar6 = param_2[1];
      uVar5 = *param_2;
      puVar2[2] = param_2[2];
      param_4 = puVar2 + 3;
      puVar2[1] = uVar6;
      *puVar2 = uVar5;
      param_2[1] = 0;
      param_2[2] = 0;
      puVar3 = param_2 + 3;
      *param_2 = 0;
      puVar2 = param_4;
      param_2 = puVar3;
    } while (puVar3 != param_3);
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return param_4;
  }
LAB_005cb290:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005cb298  FUN_005cb298 =====

void FUN_005cb298(undefined1 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 unaff_x24;
  
  FUN_005b2fc4(param_1 + 8,*param_1);
  lVar1 = *param_2;
  lVar2 = param_2[1];
  *param_1 = 2;
  puVar3 = (undefined8 *)operator_new(0x18);
  lVar6 = lVar2 - lVar1;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  if (lVar6 != 0) {
    lVar6 = lVar6 >> 3;
    if ((ulong)(lVar6 * -0x5555555555555555) >> 0x3c != 0) {
                    /* try { // try from 005cb358 to 005cb35f has its CatchHandler @ 005cb36c */
      uVar5 = FUN_005b3754(puVar3);
                    /* catch() { ... } // from try @ 005cb324 with catch @ 005cb360 */
      puVar3[1] = unaff_x24;
      operator_delete(puVar3);
                    /* WARNING: Subroutine does not return */
      FUN_00d0fa5c(uVar5);
    }
                    /* try { // try from 005cb310 to 005cb313 has its CatchHandler @ 005cb36c */
    pvVar4 = operator_new(lVar6 * -0x5555555555555550);
    *puVar3 = pvVar4;
    puVar3[1] = pvVar4;
    puVar3[2] = (void *)((long)pvVar4 + lVar6 * -0x5555555555555550);
                    /* try { // try from 005cb324 to 005cb337 has its CatchHandler @ 005cb360 */
    uVar5 = FUN_005cb380(puVar3 + 2,lVar1,lVar2,pvVar4);
    puVar3[1] = uVar5;
  }
  *(undefined8 **)(param_1 + 8) = puVar3;
  return;
}


// ===== 005cb380  FUN_005cb380 =====

long FUN_005cb380(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (param_2 != param_3) {
    do {
                    /* try { // try from 005cb3c4 to 005cb3d3 has its CatchHandler @ 005cb414 */
      FUN_005cb470(param_1,param_4,param_2);
      param_4 = param_4 + 0x10;
      param_2 = param_2 + 0x18;
    } while (param_2 != param_3);
  }
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}


// ===== 005cb470  FUN_005cb470 =====

void FUN_005cb470(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  void *pvVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)param_2 = 3;
                    /* try { // try from 005cb498 to 005cb49f has its CatchHandler @ 005cb4fc */
    pvVar1 = operator_new(0x18);
                    /* try { // try from 005cb4a0 to 005cb4ab has its CatchHandler @ 005cb4e8 */
    FUN_004c55b4(pvVar1,param_3);
    param_2[1] = pvVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h",
             0x23,"__location != nullptr","null pointer given to construct_at");
}


// ===== 005cb518  FUN_005cb518 =====

void FUN_005cb518(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d25a00;
  FUN_005466c0();
  return;
}


// ===== 005cb528  FUN_005cb528 =====

void FUN_005cb528(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d25a00;
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 005cb558  FUN_005cb558 =====

void FUN_005cb558(long param_1)

{
  FUN_005cbd48(param_1 + 0x18);
  return;
}


// ===== 005cb560  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 005cb564  FUN_005cb564 =====

/* WARNING: Removing unreachable block (ram,0x005cb86c) */

undefined8 *
FUN_005cb564(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
            undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 *param_8,
            long *param_9,long *param_10)

{
  bool bVar1;
  undefined1 *puVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  void *pvVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined1 *local_3a8;
  undefined1 *local_3a0;
  undefined1 *local_398;
  void *local_390;
  undefined8 uStack_388;
  long local_380;
  undefined1 auStack_378 [744];
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  char local_78;
  long local_70;
  undefined1 *puVar21;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  if (param_1 == (undefined8 *)0x0) {
    if (*(long *)(lVar5 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                 ,0x23,"__location != nullptr","null pointer given to construct_at");
    }
    goto LAB_005cb994;
  }
  local_90 = local_90 & 0xffffffffffffff00;
  local_78 = 0;
  bVar1 = *(char *)(param_3 + 0x18) != '\0';
  if (bVar1) {
                    /* try { // try from 005cb5c4 to 005cb5cf has its CatchHandler @ 005cb914 */
    FUN_004c55b4(&local_90,param_3);
  }
  local_390 = (void *)0x0;
  uStack_388 = 0;
  local_380 = 0;
                    /* try { // try from 005cb5e0 to 005cb5eb has its CatchHandler @ 005cb924 */
  local_78 = bVar1;
  FUN_005b937c(param_4,&local_390);
  uVar13 = *param_5;
  uVar11 = *param_6;
  FUN_005cb998(auStack_378,param_7);
  puVar21 = (undefined1 *)*param_9;
  puVar2 = (undefined1 *)param_9[1];
  local_3a8 = (undefined1 *)0x0;
  local_3a0 = (undefined1 *)0x0;
  local_398 = (undefined1 *)0x0;
  uVar4 = (long)puVar2 - (long)puVar21;
  if (uVar4 != 0) {
    if ((long)uVar4 < 0) {
      if (*(long *)(lVar5 + 0x28) == local_70) {
                    /* try { // try from 005cb8f0 to 005cb8f7 has its CatchHandler @ 005cb944 */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_3a8);
      }
      goto LAB_005cb994;
    }
                    /* try { // try from 005cb620 to 005cb627 has its CatchHandler @ 005cb944 */
    local_3a8 = (undefined1 *)operator_new(uVar4);
    local_398 = local_3a8 + uVar4;
    puVar17 = local_3a8;
    if ((0x1f < uVar4) && (0x1f < (ulong)((long)local_3a8 - (long)puVar21))) {
      uVar12 = uVar4 & 0xffffffffffffffe0;
      puVar14 = (undefined8 *)(local_3a8 + 0x10);
      local_3a0 = local_3a8 + uVar12;
      puVar16 = (undefined8 *)(puVar21 + 0x10);
      uVar15 = uVar12;
      do {
        puVar6 = puVar16 + -1;
        uVar24 = puVar16[-2];
        uVar26 = puVar16[1];
        uVar25 = *puVar16;
        puVar16 = puVar16 + 4;
        uVar15 = uVar15 - 0x20;
        puVar14[-1] = *puVar6;
        puVar14[-2] = uVar24;
        puVar14[1] = uVar26;
        *puVar14 = uVar25;
        puVar14 = puVar14 + 4;
      } while (uVar15 != 0);
      puVar17 = local_3a0;
      puVar21 = puVar21 + uVar12;
      if (uVar4 == uVar12) goto LAB_005cb6c4;
    }
    do {
      puVar20 = puVar21 + 1;
      local_3a0 = puVar17 + 1;
      *puVar17 = *puVar21;
      puVar17 = local_3a0;
      puVar21 = puVar20;
    } while (puVar20 != puVar2);
  }
LAB_005cb6c4:
  puVar7 = local_398;
  puVar20 = local_3a0;
  puVar17 = local_3a8;
  local_3c0 = 0;
  uStack_3b8 = 0;
  local_3b0 = 0;
  puVar21 = (undefined1 *)*param_10;
  puVar2 = (undefined1 *)param_10[1];
  uVar4 = (long)puVar2 - (long)puVar21;
  if (uVar4 == 0) {
    puVar22 = (undefined1 *)0x0;
    puVar19 = (undefined1 *)0x0;
    puVar10 = (undefined1 *)0x0;
  }
  else {
    if ((long)uVar4 < 0) {
      if (*(long *)(lVar5 + 0x28) == local_70) {
                    /* try { // try from 005cb90c to 005cb913 has its CatchHandler @ 005cb934 */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_3c0);
      }
      goto LAB_005cb994;
    }
                    /* try { // try from 005cb6e0 to 005cb6e7 has its CatchHandler @ 005cb934 */
    puVar10 = (undefined1 *)operator_new(uVar4);
    puVar22 = puVar10 + uVar4;
    puVar18 = puVar10;
    if ((0x1f < uVar4) && (0x1f < (ulong)((long)puVar10 - (long)puVar21))) {
      uVar12 = uVar4 & 0xffffffffffffffe0;
      uVar15 = 0;
      puVar19 = puVar10 + uVar12;
      do {
        puVar14 = (undefined8 *)(puVar21 + uVar15);
        puVar16 = (undefined8 *)(puVar10 + uVar15);
        uVar15 = uVar15 + 0x20;
        uVar24 = *puVar14;
        uVar26 = puVar14[3];
        uVar25 = puVar14[2];
        puVar16[1] = puVar14[1];
        *puVar16 = uVar24;
        puVar16[3] = uVar26;
        puVar16[2] = uVar25;
      } while (uVar12 != uVar15);
      puVar18 = puVar19;
      puVar21 = puVar21 + uVar12;
      if (uVar4 == uVar12) goto LAB_005cb76c;
    }
    do {
      puVar23 = puVar21 + 1;
      puVar19 = puVar18 + 1;
      *puVar18 = *puVar21;
      puVar18 = puVar19;
      puVar21 = puVar23;
    } while (puVar23 != puVar2);
  }
LAB_005cb76c:
  uVar26 = local_80;
  uVar25 = uStack_88;
  uVar4 = local_90;
  lVar9 = local_380;
  uVar24 = uStack_388;
  pvVar8 = local_390;
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  if (local_78 != '\0') {
    uStack_88 = 0;
    local_80 = 0;
    local_90 = 0;
    param_1[2] = uVar25;
    param_1[1] = uVar4;
    param_1[3] = uVar26;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  local_390 = (void *)0x0;
  uStack_388 = 0;
  local_380 = 0;
  param_1[7] = lVar9;
  param_1[8] = uVar13;
  param_1[6] = uVar24;
  param_1[5] = pvVar8;
  param_1[9] = uVar11;
  FUN_005cb998(param_1 + 10,auStack_378);
  uVar11 = *param_8;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x6b) = 0;
  cVar3 = *(char *)(param_8 + 4);
  param_1[0x67] = uVar11;
  if (cVar3 != '\0') {
    uVar13 = param_8[2];
    uVar11 = param_8[1];
    param_1[0x6a] = param_8[3];
    param_1[0x69] = uVar13;
    param_1[0x68] = uVar11;
    param_8[2] = 0;
    param_8[3] = 0;
    param_8[1] = 0;
    *(undefined1 *)(param_1 + 0x6b) = 1;
  }
  uVar11 = param_8[5];
  param_8[5] = 0;
  param_1[0x6d] = puVar17;
  param_1[0x6e] = puVar20;
  param_1[0x6c] = uVar11;
  local_3a0 = (undefined1 *)0x0;
  local_398 = (undefined1 *)0x0;
  local_3a8 = (undefined1 *)0x0;
  param_1[0x6f] = puVar7;
  param_1[0x70] = puVar10;
  param_1[0x71] = puVar19;
  param_1[0x72] = puVar22;
  FUN_005c9a1c(auStack_378);
  if (local_380 < 0) {
    operator_delete(local_390);
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return param_1;
  }
LAB_005cb994:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005cb998  FUN_005cb998 =====

void FUN_005cb998(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (*(char *)(param_2 + 3) != '\0') {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar3;
    *param_1 = uVar2;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  if (*(char *)(param_2 + 7) != '\0') {
    uVar3 = param_2[5];
    uVar2 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    param_1[4] = uVar2;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[4] = 0;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  if (*(char *)(param_2 + 0xb) != '\0') {
    uVar3 = param_2[9];
    uVar2 = param_2[8];
    param_1[10] = param_2[10];
    param_1[9] = uVar3;
    param_1[8] = uVar2;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[8] = 0;
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  if (*(char *)(param_2 + 0xf) != '\0') {
    uVar3 = param_2[0xd];
    uVar2 = param_2[0xc];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar3;
    param_1[0xc] = uVar2;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xc] = 0;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  if (*(char *)(param_2 + 0x13) != '\0') {
    uVar3 = param_2[0x11];
    uVar2 = param_2[0x10];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar3;
    param_1[0x10] = uVar2;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x10] = 0;
    *(undefined1 *)(param_1 + 0x13) = 1;
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  if (*(char *)(param_2 + 0x17) != '\0') {
    uVar3 = param_2[0x15];
    uVar2 = param_2[0x14];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar3;
    param_1[0x14] = uVar2;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x14] = 0;
    *(undefined1 *)(param_1 + 0x17) = 1;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  if (*(char *)(param_2 + 0x1b) != '\0') {
    uVar3 = param_2[0x19];
    uVar2 = param_2[0x18];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar3;
    param_1[0x18] = uVar2;
    param_2[0x19] = 0;
    param_2[0x1a] = 0;
    param_2[0x18] = 0;
    *(undefined1 *)(param_1 + 0x1b) = 1;
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  if (*(char *)(param_2 + 0x1f) != '\0') {
    uVar3 = param_2[0x1d];
    uVar2 = param_2[0x1c];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1d] = uVar3;
    param_1[0x1c] = uVar2;
    param_2[0x1d] = 0;
    param_2[0x1e] = 0;
    param_2[0x1c] = 0;
    *(undefined1 *)(param_1 + 0x1f) = 1;
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  if (*(char *)(param_2 + 0x23) != '\0') {
    uVar3 = param_2[0x21];
    uVar2 = param_2[0x20];
    param_1[0x22] = param_2[0x22];
    param_1[0x21] = uVar3;
    param_1[0x20] = uVar2;
    param_2[0x21] = 0;
    param_2[0x22] = 0;
    param_2[0x20] = 0;
    *(undefined1 *)(param_1 + 0x23) = 1;
  }
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  if (*(char *)(param_2 + 0x27) != '\0') {
    uVar3 = param_2[0x25];
    uVar2 = param_2[0x24];
    param_1[0x26] = param_2[0x26];
    param_1[0x25] = uVar3;
    param_1[0x24] = uVar2;
    param_2[0x25] = 0;
    param_2[0x26] = 0;
    param_2[0x24] = 0;
    *(undefined1 *)(param_1 + 0x27) = 1;
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  if (*(char *)(param_2 + 0x2b) != '\0') {
    uVar3 = param_2[0x29];
    uVar2 = param_2[0x28];
    param_1[0x2a] = param_2[0x2a];
    param_1[0x29] = uVar3;
    param_1[0x28] = uVar2;
    param_2[0x29] = 0;
    param_2[0x2a] = 0;
    param_2[0x28] = 0;
    *(undefined1 *)(param_1 + 0x2b) = 1;
  }
  uVar1 = *(undefined2 *)(param_2 + 0x2c);
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x2c) = uVar1;
  if (*(char *)(param_2 + 0x30) != '\0') {
    uVar3 = param_2[0x2e];
    uVar2 = param_2[0x2d];
    param_1[0x2f] = param_2[0x2f];
    param_1[0x2e] = uVar3;
    param_1[0x2d] = uVar2;
    param_2[0x2e] = 0;
    param_2[0x2f] = 0;
    param_2[0x2d] = 0;
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  if (*(char *)(param_2 + 0x34) != '\0') {
    uVar3 = param_2[0x32];
    uVar2 = param_2[0x31];
    param_1[0x33] = param_2[0x33];
    param_1[0x32] = uVar3;
    param_1[0x31] = uVar2;
    param_2[0x32] = 0;
    param_2[0x33] = 0;
    param_2[0x31] = 0;
    *(undefined1 *)(param_1 + 0x34) = 1;
  }
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  if (*(char *)(param_2 + 0x38) != '\0') {
    uVar3 = param_2[0x36];
    uVar2 = param_2[0x35];
    param_1[0x37] = param_2[0x37];
    param_1[0x36] = uVar3;
    param_1[0x35] = uVar2;
    param_2[0x36] = 0;
    param_2[0x37] = 0;
    param_2[0x35] = 0;
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  if (*(char *)(param_2 + 0x3c) != '\0') {
    uVar3 = param_2[0x3a];
    uVar2 = param_2[0x39];
    param_1[0x3b] = param_2[0x3b];
    param_1[0x3a] = uVar3;
    param_1[0x39] = uVar2;
    param_2[0x3a] = 0;
    param_2[0x3b] = 0;
    param_2[0x39] = 0;
    *(undefined1 *)(param_1 + 0x3c) = 1;
  }
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  if (*(char *)(param_2 + 0x40) != '\0') {
    uVar3 = param_2[0x3e];
    uVar2 = param_2[0x3d];
    param_1[0x3f] = param_2[0x3f];
    param_1[0x3e] = uVar3;
    param_1[0x3d] = uVar2;
    param_2[0x3e] = 0;
    param_2[0x3f] = 0;
    param_2[0x3d] = 0;
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  uVar1 = *(undefined2 *)(param_2 + 0x41);
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined2 *)(param_1 + 0x41) = uVar1;
  if (*(char *)(param_2 + 0x5a) != '\0') {
                    /* try { // try from 005cbd24 to 005cbd27 has its CatchHandler @ 005cbd44 */
    FUN_005c8b48(param_1 + 0x42,param_2 + 0x42);
  }
  uVar2 = param_2[0x5b];
  param_1[0x5c] = param_2[0x5c];
  param_1[0x5b] = uVar2;
  return;
}


// ===== 005cbd48  FUN_005cbd48 =====

void FUN_005cbd48(long param_1)

{
  char cVar1;
  undefined1 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  puVar2 = *(undefined1 **)(param_1 + 0x380);
  lVar4 = *(long *)(param_1 + 0x388) - (long)puVar2;
  if (0 < lVar4) {
    uVar5 = lVar4 + 1;
    do {
      uVar5 = uVar5 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (1 < uVar5);
    puVar2 = *(undefined1 **)(param_1 + 0x380);
  }
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x388) = puVar2;
    operator_delete(puVar2);
  }
  puVar2 = *(undefined1 **)(param_1 + 0x368);
  lVar4 = *(long *)(param_1 + 0x370) - (long)puVar2;
  if (0 < lVar4) {
    uVar5 = lVar4 + 1;
    do {
      uVar5 = uVar5 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (1 < uVar5);
    puVar2 = *(undefined1 **)(param_1 + 0x368);
  }
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined1 **)(param_1 + 0x370) = puVar2;
    operator_delete(puVar2);
  }
  plVar3 = *(long **)(param_1 + 0x360);
  *(undefined8 *)(param_1 + 0x360) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if ((*(char *)(param_1 + 0x358) != '\0') && (*(char *)(param_1 + 0x357) < '\0')) {
    operator_delete(*(void **)(param_1 + 0x340));
  }
  FUN_005c9a1c(param_1 + 0x50);
  if (*(char *)(param_1 + 0x3f) < '\0') {
    operator_delete(*(void **)(param_1 + 0x28));
    cVar1 = *(char *)(param_1 + 0x20);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x20);
  }
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x1f) < '\0')) {
    operator_delete(*(void **)(param_1 + 8));
    return;
  }
  return;
}


// ===== 005cbe48  FUN_005cbe48 =====

void FUN_005cbe48(char *param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  cVar1 = *param_1;
  if (cVar1 == '\x05') {
LAB_005cbe84:
    lVar4 = *(long *)(param_1 + 8);
  }
  else {
    if (cVar1 != '\a') {
      if (cVar1 != '\x06') {
        uVar3 = FUN_0054f64c(0x20);
        local_58 = FUN_005b2870(param_1);
                    /* try { // try from 005cbee0 to 005cbef3 has its CatchHandler @ 005cbf60 */
        FUN_005b9498(auStack_50,"type must be number, but is ",&local_58);
                    /* try { // try from 005cbef8 to 005cbf3b has its CatchHandler @ 005cbf3c */
        FUN_005b3a24(uVar3,0x12e,auStack_50,param_1);
        if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_0054f748(uVar3,&PTR_PTR_thunk_FUN_00552768_00d25820,FUN_005be5f0);
        }
        goto LAB_005cbf88;
      }
      goto LAB_005cbe84;
    }
    lVar4 = (long)*(double *)(param_1 + 8);
  }
  *param_2 = lVar4;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_005cbf88:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005cbf8c  FUN_005cbf8c =====

void FUN_005cbf8c(undefined8 *param_1,char *param_2,undefined8 *param_3,char *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  size_t sVar3;
  size_t sVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  sVar3 = strlen(param_2);
  uVar1 = param_3[1];
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  sVar4 = strlen(param_4);
  uVar1 = sVar4 + sVar3 + uVar1;
  if (0x7fffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_004e823c(param_1);
  }
  if (0x16 < uVar1) {
                    /* try { // try from 005cbffc to 005cc06f has its CatchHandler @ 005cc070 */
    FUN_0051f494(param_1,uVar1 | 0xf);
  }
  sVar3 = strlen(param_2);
  FUN_00547cac(param_1,param_2,sVar3);
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
  FUN_00547cac(param_1,puVar2,uVar1);
  sVar3 = strlen(param_4);
  FUN_00547cac(param_1,param_4,sVar3);
  return;
}


// ===== 005cc08c  FUN_005cc08c =====

void FUN_005cc08c(char *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*param_1 == '\x04') {
    uVar2 = (ulong)(param_1[8] != '\0');
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else {
    uVar3 = FUN_0054f64c(0x20);
    if ((ulong)(long)*param_1 < 10) {
      local_58 = (&PTR_DAT_00d25a40)[*param_1];
    }
    else {
      local_58 = "number";
    }
                    /* try { // try from 005cc120 to 005cc133 has its CatchHandler @ 005cc19c */
    FUN_005cc1c4(auStack_50,"type must be boolean, but is ",&local_58);
                    /* try { // try from 005cc138 to 005cc177 has its CatchHandler @ 005cc178 */
    uVar2 = FUN_005b3a24(uVar3,0x12e,auStack_50,param_1);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar3,&PTR_PTR_thunk_FUN_00552768_00d25820,FUN_005be5f0);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 005cc1c4  FUN_005cc1c4 =====

void FUN_005cc1c4(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  ulong uVar1;
  size_t sVar2;
  size_t sVar3;
  char *__s;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  sVar2 = strlen(param_2);
  sVar3 = strlen((char *)*param_3);
  uVar1 = sVar3 + sVar2;
  if (0x7fffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_004e823c(param_1);
  }
  if (0x16 < uVar1) {
                    /* try { // try from 005cc214 to 005cc293 has its CatchHandler @ 005cc294 */
    FUN_0051f494(param_1,uVar1 | 0xf);
  }
  sVar2 = strlen(param_2);
  FUN_00547cac(param_1,param_2,sVar2);
  __s = (char *)*param_3;
  if (__s != (char *)0x0) {
    sVar2 = strlen(__s);
    FUN_00547cac(param_1,__s,sVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/string",0xad0,
             "__s != nullptr","string::append received nullptr");
}


// ===== 005cc2b0  FUN_005cc2b0 =====

void FUN_005cc2b0(char *param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  cVar1 = *param_1;
  if (cVar1 == '\x05') {
LAB_005cc2ec:
    lVar4 = *(long *)(param_1 + 8);
  }
  else {
    if (cVar1 != '\a') {
      if (cVar1 != '\x06') {
        uVar3 = FUN_0054f64c(0x20);
        local_58 = FUN_005b2870(param_1);
                    /* try { // try from 005cc348 to 005cc35b has its CatchHandler @ 005cc3c8 */
        FUN_005b9498(auStack_50,"type must be number, but is ",&local_58);
                    /* try { // try from 005cc360 to 005cc3a3 has its CatchHandler @ 005cc3a4 */
        FUN_005b3a24(uVar3,0x12e,auStack_50,param_1);
        if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_0054f748(uVar3,&PTR_PTR_thunk_FUN_00552768_00d25820,FUN_005be5f0);
        }
        goto LAB_005cc3f0;
      }
      goto LAB_005cc2ec;
    }
    lVar4 = (long)*(double *)(param_1 + 8);
  }
  *param_2 = lVar4;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_005cc3f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005cc3f4  _INIT_18 =====

void _INIT_18(void)

{
  undefined *puVar1;
  
  FUN_004a3cf4(&DAT_00d63868,&DAT_001b0a79);
  puVar1 = PTR_FUN_00d51c00;
  __cxa_atexit(PTR_FUN_00d51c00,&DAT_00d63868,&PTR_LOOP_00d19390);
  FUN_004a3cf4(&DAT_00d63880,&DAT_001bf4f3);
  __cxa_atexit(puVar1,&DAT_00d63880,&PTR_LOOP_00d19390);
  FUN_004a3cf4(&DAT_00d63898,"given_name");
  __cxa_atexit(puVar1,&DAT_00d63898,&PTR_LOOP_00d19390);
  FUN_004a3cf4(&DAT_00d638b0,"family_name");
  __cxa_atexit(puVar1,&DAT_00d638b0,&PTR_LOOP_00d19390);
  FUN_004a3cf4(&DAT_00d638c8,"middle_name");
  __cxa_atexit(puVar1,&DAT_00d638c8,&PTR_LOOP_00d19390);
  FUN_004a3cf4(&DAT_00d638e0,"nickname");
  __cxa_atexit(puVar1,&DAT_00d638e0,&PTR_LOOP_00d19390);
  FUN_004a3cf4(&DAT_00d638f8,"preferred_username");
  __cxa_atexit(puVar1,&DAT_00d638f8,&PTR_LOOP_00d19390);
  FUN_004a3cf4(&DAT_00d63910,"profile");
  __cxa_atexit(puVar1,&DAT_00d63910,&PTR_LOOP_00d19390);
  FUN_004a3cf4(&DAT_00d63928,"picture");
  __cxa_atexit(puVar1,&DAT_00d63928,&PTR_LOOP_00d19390);
  FUN_004a3cf4(&DAT_00d63940,"website");
  __cxa_atexit(puVar1,&DAT_00d63940,&PTR_LOOP_00d19390);
  FUN_004a3cf4(&DAT_00d63958,"email");
  __cxa_atexit(puVar1,&DAT_00d63958,&PTR_LOOP_00d19390);
  FUN_004a3cf4(&DAT_00d63970,"email_verified");
  __cxa_atexit(puVar1,&DAT_00d63970,&PTR_LOOP_00d19390);
  FUN_004a3cf4(&DAT_00d63988,"gender");
  __cxa_atexit(puVar1,&DAT_00d63988,&PTR_LOOP_00d19390);
  FUN_004a3cf4(&DAT_00d639a0,"birthdate");
  __cxa_atexit(puVar1,&DAT_00d639a0,&PTR_LOOP_00d19390);
  FUN_004a3cf4(&DAT_00d639b8,"zoneinfo");
  __cxa_atexit(puVar1,&DAT_00d639b8,&PTR_LOOP_00d19390);
  FUN_004a3cf4(&DAT_00d639d0,"locale");
  __cxa_atexit(puVar1,&DAT_00d639d0,&PTR_LOOP_00d19390);
  FUN_004a3cf4(&DAT_00d639e8,"phone_number");
  __cxa_atexit(puVar1,&DAT_00d639e8,&PTR_LOOP_00d19390);
  FUN_004a3cf4(&DAT_00d63a00,"phone_number_verified");
  __cxa_atexit(puVar1,&DAT_00d63a00,&PTR_LOOP_00d19390);
  FUN_004a3cf4(&DAT_00d63a18,"address");
  __cxa_atexit(puVar1,&DAT_00d63a18,&PTR_LOOP_00d19390);
  FUN_004a3cf4(&DAT_00d63a30,"formatted");
  __cxa_atexit(puVar1,&DAT_00d63a30,&PTR_LOOP_00d19390);
  FUN_004a3cf4(&DAT_00d63a48,"street_address");
  __cxa_atexit(puVar1,&DAT_00d63a48,&PTR_LOOP_00d19390);
  FUN_004a3cf4(&DAT_00d63a60,"locality");
  __cxa_atexit(puVar1,&DAT_00d63a60,&PTR_LOOP_00d19390);
  FUN_004a3cf4(&DAT_00d63a78,"region");
  __cxa_atexit(puVar1,&DAT_00d63a78,&PTR_LOOP_00d19390);
  FUN_004a3cf4(&DAT_00d63a90,"postal_code");
  __cxa_atexit(puVar1,&DAT_00d63a90,&PTR_LOOP_00d19390);
  FUN_004a3cf4(&DAT_00d63aa8,"country");
  __cxa_atexit(puVar1,&DAT_00d63aa8,&PTR_LOOP_00d19390);
  FUN_004a3cf4(&DAT_00d63ac0,"updated_at");
  __cxa_atexit(puVar1,&DAT_00d63ac0,&PTR_LOOP_00d19390);
  return;
}


// ===== 005cc830  FUN_005cc830 =====

void FUN_005cc830(long param_1)

{
  free((void *)(param_1 + -0x28));
  return;
}


// ===== 005cc838  FUN_005cc838 =====

void FUN_005cc838(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if ((uVar1 >> 0xe & 1) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    *puVar2 = 0;
    if ((*(byte *)((long)puVar2 + 0x81) >> 6 & 1) != 0) {
      FUN_005ce374(puVar2 + 5,FUN_005cc830);
      uVar1 = *(uint *)(param_1 + 0x58);
      if ((uVar1 >> 0xe & 1) == 0) {
        return;
      }
    }
    *(uint *)(param_1 + 0x58) = uVar1 & 0xffffbfff;
    if ((uVar1 >> 0xd & 1) != 0) {
      *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
    }
  }
  return;
}


// ===== 005cc8a4  FUN_005cc8a4 =====

void FUN_005cc8a4(int param_1,byte *param_2,uint *param_3)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  void *pvVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined1 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  byte *pbVar20;
  uint uVar21;
  undefined4 *puVar22;
  long lVar23;
  uint uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 *local_b8;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 local_88 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 uStack_69;
  undefined8 local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar5 = 0xffffffea;
  if ((param_2 == (byte *)0x0) || (param_3 == (uint *)0x0)) goto LAB_005cccc8;
  if (param_1 != 10) {
    if (param_1 == 2) {
      uVar21 = (uint)*param_2;
      local_a8 = local_a8 & 0xffffff00;
      if (*param_2 != 0) {
        uVar24 = 0;
        bVar3 = false;
        iVar8 = 0;
        puVar22 = &local_a8;
        pbVar20 = param_2 + 1;
        do {
          while (pvVar6 = memchr("0123456789",uVar21,0xb), pvVar6 != (void *)0x0) {
            uVar5 = 0xffffffea;
            if ((uVar24 == 0 && bVar3) ||
               (uVar21 = (int)pvVar6 + -0x1fb56d + uVar24 * 10, 0xff < uVar21)) goto LAB_005cccc8;
            uVar24 = uVar21 & 0xff;
            *(char *)puVar22 = (char)uVar21;
            if (!bVar3) {
              if (3 < iVar8) goto LAB_005cccc8;
              iVar8 = iVar8 + 1;
            }
            bVar3 = true;
            bVar1 = *pbVar20;
            uVar21 = (uint)bVar1;
            pbVar20 = pbVar20 + 1;
            if (bVar1 == 0) goto LAB_005cc9b4;
          }
          uVar5 = 0xffffffea;
          if (((uVar21 != 0x2e) || (!bVar3)) || (iVar8 == 4)) goto LAB_005cccc8;
          uVar24 = 0;
          bVar3 = false;
          puVar22 = (undefined4 *)((long)puVar22 + 1);
          *(undefined1 *)puVar22 = 0;
          uVar21 = (uint)*pbVar20;
          pbVar20 = pbVar20 + 1;
        } while (uVar21 != 0);
LAB_005cc9b4:
        uVar5 = 0xffffffea;
        if (3 < iVar8) {
          uVar5 = 0;
          *param_3 = local_a8;
        }
      }
    }
    else {
      uVar5 = 0xffffff9f;
    }
    goto LAB_005cccc8;
  }
  pcVar7 = strchr((char *)param_2,0x25);
  if (pcVar7 != (char *)0x0) {
    iVar8 = (int)pcVar7 - (int)param_2;
    if (0x2d < iVar8) goto LAB_005cccc4;
    memcpy(&local_a8,param_2,(long)iVar8);
    param_2 = (byte *)&local_a8;
    *(undefined1 *)((long)&local_a8 + (long)iVar8) = 0;
  }
  bVar1 = *param_2;
  uVar21 = (uint)bVar1;
  local_78 = 0;
  uStack_70 = 0;
  if ((bVar1 != 0) && ((bVar1 != 0x3a || (param_2 = param_2 + 1, *param_2 == 0x3a)))) {
    local_b8 = (undefined8 *)0x0;
    uVar24 = 0;
    iVar8 = 0;
    lVar23 = 0;
    puVar16 = &local_78;
    pbVar20 = param_2;
    do {
      pbVar20 = pbVar20 + 1;
      pvVar6 = memchr("0123456789abcdef",uVar21,0x11);
      if (pvVar6 == (void *)0x0) {
        pvVar6 = memchr("0123456789ABCDEF",uVar21,0x11);
        if (pvVar6 != (void *)0x0) {
          iVar9 = 0x1fb589;
          if (iVar8 < 4) goto LAB_005ccab0;
          goto LAB_005cccc4;
        }
        if (uVar21 != 0x3a) {
          if ((uVar21 != 0x2e) || (0xc < lVar23)) goto LAB_005cccc4;
          local_ac = local_ac & 0xffffff00;
          uVar21 = (uint)*param_2;
          if (*param_2 == 0) goto LAB_005cccc4;
          uVar24 = 0;
          bVar3 = false;
          iVar8 = 0;
          lVar12 = lVar23 + 4;
          puVar22 = &local_ac;
          pbVar20 = param_2 + 1;
          goto LAB_005ccc3c;
        }
        param_2 = pbVar20;
        if (iVar8 == 0) {
          if (local_b8 != (undefined8 *)0x0) goto LAB_005cccc4;
          iVar8 = 0;
          local_b8 = puVar16;
        }
        else {
          uVar5 = 0xffffffea;
          if ((*pbVar20 == 0) || (0xe < lVar23)) goto LAB_005cccc8;
          uVar4 = uVar24 >> 8;
          uVar21 = uVar24 & 0xff00ff;
          iVar8 = 0;
          uVar24 = 0;
          *(ushort *)((long)&local_78 + lVar23) = (ushort)uVar4 & 0xff | (ushort)(uVar21 << 8);
          lVar23 = lVar23 + 2;
        }
      }
      else {
        iVar9 = 0x1fb578;
        if (3 < iVar8) goto LAB_005cccc4;
LAB_005ccab0:
        iVar8 = iVar8 + 1;
        uVar24 = (int)pvVar6 - iVar9 | uVar24 << 4;
      }
      uVar21 = (uint)*pbVar20;
      puVar16 = (undefined8 *)((long)&local_78 + lVar23);
    } while (uVar21 != 0);
    lVar12 = lVar23;
    if (iVar8 != 0) {
      if (0xe < lVar23) goto LAB_005cccc4;
      lVar12 = lVar23 + 2;
      *(ushort *)((long)&local_78 + lVar23) =
           (ushort)(uVar24 >> 8) & 0xff | (ushort)((uVar24 & 0xff00ff) << 8);
    }
joined_r0x005ccb7c:
    if (local_b8 == (undefined8 *)0x0) {
      if (lVar12 == 0x10) {
LAB_005ccbe0:
        uVar5 = 0;
        *(undefined8 *)(param_3 + 2) = uStack_70;
        *(undefined8 *)param_3 = local_78;
        goto LAB_005cccc8;
      }
    }
    else if (lVar12 != 0x10) {
      iVar8 = ((int)&stack0xffffffffffffffa0 + -0x18 + (int)lVar12) - (int)local_b8;
      if (iVar8 < 1) goto LAB_005ccbe0;
      uVar11 = (ulong)(iVar8 + 1);
      lVar23 = (long)iVar8;
      uVar13 = uVar11 - 1;
      if (uVar13 < 8) {
LAB_005ccbb0:
        uVar15 = 1;
      }
      else {
        uVar15 = 1;
        if ((&uStack_69 + (2 - uVar11) <= &uStack_69) &&
           (uVar17 = (long)local_b8 + lVar23 + -1, uVar17 + (2 - uVar11) <= uVar17)) {
          if (((long)&local_68 + (1 - uVar11) < (ulong)((long)local_b8 + lVar23)) &&
             ((undefined8 *)((long)local_b8 + (lVar23 - uVar11) + 1) < &local_68))
          goto LAB_005ccbb0;
          if (uVar13 < 0x20) {
            uVar17 = 0;
          }
          else {
            uVar17 = uVar13 & 0xffffffffffffffe0;
            puVar16 = (undefined8 *)((long)local_b8 + lVar23 + -0x10);
            puVar18 = &local_78;
            uVar15 = uVar17;
            do {
              uVar26 = puVar16[-2];
              uVar25 = puVar16[1];
              uVar5 = *puVar16;
              uVar15 = uVar15 - 0x20;
              puVar18[-1] = puVar16[-1];
              puVar18[-2] = uVar26;
              puVar18[1] = uVar25;
              *puVar18 = uVar5;
              puVar18 = puVar18 + -4;
              puVar16[-1] = 0;
              puVar16[-2] = 0;
              puVar16[1] = 0;
              *puVar16 = 0;
              puVar16 = puVar16 + -4;
            } while (uVar15 != 0);
            if (uVar13 == uVar17) goto LAB_005ccbe0;
            if ((uVar13 & 0x18) == 0) {
              uVar15 = uVar17 | 1;
              goto LAB_005ccbb4;
            }
          }
          uVar19 = uVar13 & 0xfffffffffffffff8;
          puVar16 = (undefined8 *)((lVar23 - uVar17) + (long)local_b8);
          uVar15 = uVar19 | 1;
          lVar12 = uVar17 - uVar19;
          puVar18 = (undefined8 *)((long)&stack0xffffffffffffff90 + -uVar17);
          do {
            puVar16 = puVar16 + -1;
            lVar12 = lVar12 + 8;
            *puVar18 = *puVar16;
            *puVar16 = 0;
            puVar18 = puVar18 + -1;
          } while (lVar12 != 0);
          if (uVar13 == uVar19) goto LAB_005ccbe0;
        }
      }
LAB_005ccbb4:
      lVar12 = uVar11 - uVar15;
      puVar10 = (undefined1 *)((long)&local_68 - uVar15);
      puVar14 = (undefined1 *)((long)local_b8 + (lVar23 - uVar15));
      do {
        lVar12 = lVar12 + -1;
        *puVar10 = *puVar14;
        *puVar14 = 0;
        puVar10 = puVar10 + -1;
        puVar14 = puVar14 + -1;
      } while (lVar12 != 0);
      goto LAB_005ccbe0;
    }
  }
  goto LAB_005cccc4;
  while( true ) {
    if (((uVar21 != 0x2e) || (!bVar3)) || (iVar8 == 4)) goto LAB_005cccc4;
    uVar24 = 0;
    bVar3 = false;
    puVar22 = (undefined4 *)((long)puVar22 + 1);
    *(undefined1 *)puVar22 = 0;
    uVar21 = (uint)*pbVar20;
    pbVar20 = pbVar20 + 1;
    if (uVar21 == 0) break;
LAB_005ccc3c:
    pvVar6 = memchr("0123456789",uVar21,0xb);
    if (pvVar6 != (void *)0x0) {
      if ((uVar24 == 0 && bVar3) || (uVar21 = (int)pvVar6 + -0x1fb56d + uVar24 * 10, 0xff < uVar21))
      goto LAB_005cccc4;
      uVar24 = uVar21 & 0xff;
      *(char *)puVar22 = (char)uVar21;
      if (!bVar3) {
        if (3 < iVar8) goto LAB_005cccc4;
        iVar8 = iVar8 + 1;
      }
      bVar3 = true;
      bVar1 = *pbVar20;
      uVar21 = (uint)bVar1;
      pbVar20 = pbVar20 + 1;
      if (bVar1 == 0) break;
      goto LAB_005ccc3c;
    }
  }
  if (3 < iVar8) {
    *(uint *)((long)&local_78 + lVar23) = local_ac;
    goto joined_r0x005ccb7c;
  }
LAB_005cccc4:
  uVar5 = 0xffffffea;
LAB_005cccc8:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 005cce1c  _FINI_2 =====

void _FINI_2(void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (DAT_00d63b58 != 0) {
    FUN_005d0710(&DAT_00d63ba0);
    iVar1 = DAT_00d63c10;
    DAT_00d63b60 = &DAT_00d63c00;
    DAT_00d63b68 = DAT_00d63c08;
    *DAT_00d63c08 = &DAT_00d63b60;
    DAT_00d63c08 = &DAT_00d63b60;
    if (iVar1 != 0) {
      FUN_005d0864(&DAT_00d63bc8);
    }
    FUN_005d072c(&DAT_00d63ba0);
    if (DAT_00d63b70 != 0) {
      lVar2 = 0;
      uVar3 = 0;
      do {
        iVar1 = FUN_005d06b8(DAT_00d63b78 + lVar2);
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar3 = uVar3 + 1;
        lVar2 = lVar2 + 8;
      } while (uVar3 < DAT_00d63b70);
    }
    if (DAT_00d63b78 != &DAT_00d63b80) {
      free(DAT_00d63b78);
    }
    FUN_005d06f4(&DAT_00d63ba0);
    FUN_005d0848(&DAT_00d63bc8);
    DAT_00d63b78 = (undefined *)0x0;
    DAT_00d63b70 = 0;
    DAT_00d63b58 = 0;
  }
  return;
}


// ===== 005ccf1c  FUN_005ccf1c =====

void FUN_005ccf1c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  
  FUN_005d0780(&DAT_00d63bf8,FUN_005ccfac);
  param_2[1] = param_4;
  param_2[2] = param_1;
  *param_2 = param_3;
  FUN_005d0710(&DAT_00d63ba0);
  iVar1 = DAT_00d63c10;
  puVar2 = param_2 + 3;
  *puVar2 = &DAT_00d63c00;
  param_2[4] = DAT_00d63c08;
  *DAT_00d63c08 = puVar2;
  DAT_00d63c08 = puVar2;
  if (iVar1 != 0) {
    FUN_005d0864(&DAT_00d63bc8);
  }
  FUN_005d072c(&DAT_00d63ba0);
  return;
}


// ===== 005ccfac  FUN_005ccfac =====

void FUN_005ccfac(void)

{
  int iVar1;
  char *__nptr;
  ulong uVar2;
  long lVar3;
  
  DAT_00d63b70 = 4;
  __nptr = getenv("UV_THREADPOOL_SIZE");
  if (__nptr != (char *)0x0) {
    DAT_00d63b70 = atoi(__nptr);
    uVar2 = (ulong)DAT_00d63b70;
    if (DAT_00d63b70 == 0) {
      DAT_00d63b70 = 1;
    }
    else {
      if (DAT_00d63b70 < 0x81) {
        DAT_00d63b78 = &DAT_00d63b80;
        if (DAT_00d63b70 < 5) goto LAB_005cd04c;
      }
      else {
        uVar2 = 0x80;
        DAT_00d63b70 = 0x80;
      }
      DAT_00d63b78 = &DAT_00d63b80;
      DAT_00d63b78 = (undefined *)malloc(uVar2 << 3);
      if (DAT_00d63b78 != (undefined *)0x0) goto LAB_005cd04c;
      DAT_00d63b70 = 4;
    }
  }
  DAT_00d63b78 = &DAT_00d63b80;
LAB_005cd04c:
  iVar1 = FUN_005d079c(&DAT_00d63bc8);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar1 = FUN_005d06d8(&DAT_00d63ba0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  DAT_00d63c00 = &DAT_00d63c00;
  DAT_00d63c08 = &DAT_00d63c00;
  if (DAT_00d63b70 != 0) {
    lVar3 = 0;
    uVar2 = 0;
    do {
      iVar1 = FUN_005d0618(DAT_00d63b78 + lVar3,FUN_005cd1e4,0);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < DAT_00d63b70);
  }
  DAT_00d63b58 = 1;
  return;
}


// ===== 005cd0e8  FUN_005cd0e8 =====

void FUN_005cd0e8(long param_1)

{
  long lVar1;
  long *****ppppplVar2;
  long *****ppppplVar3;
  long ****pppplVar4;
  undefined4 uVar5;
  long ****local_48;
  long ***local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_005d0710(param_1 + -0x28);
  ppppplVar3 = (long *****)(param_1 + -0x38);
  local_48 = *ppppplVar3;
  if (ppppplVar3 == (long *****)local_48) {
    local_48 = (long ****)&local_48;
    ppppplVar2 = (long *****)&local_40;
  }
  else {
    local_40 = *(long ****)(param_1 + -0x30);
    *local_40 = (long **)&local_48;
    ppppplVar2 = (long *****)local_48 + 1;
    pppplVar4 = *ppppplVar2;
    *(long *****)(param_1 + -0x30) = pppplVar4;
    *pppplVar4 = (long ***)ppppplVar3;
  }
  *ppppplVar2 = (long ****)&local_48;
  FUN_005d072c(param_1 + -0x28);
  while (&local_48 != (long *****)local_48) {
    *((long *****)local_48)[1] = *local_48;
    (*local_48)[1] = (long **)((long *****)local_48)[1];
    uVar5 = 0xffffff83;
    if (((long *****)local_48)[-3] != (long ****)FUN_005cd1d8) {
      uVar5 = 0;
    }
    (*(code *)((long *****)local_48)[-2])((long *****)local_48 + -3,uVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005cd1d8  FUN_005cd1d8 =====

void FUN_005cd1d8(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 005cd1e4  FUN_005cd1e4 =====

void FUN_005cd1e4(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  while( true ) {
    FUN_005d0710(&DAT_00d63ba0);
    if ((long **)DAT_00d63c00 == &DAT_00d63c00) {
      do {
        DAT_00d63c10 = DAT_00d63c10 + 1;
        FUN_005d0880(&DAT_00d63bc8,&DAT_00d63ba0);
        DAT_00d63c10 = DAT_00d63c10 + -1;
      } while ((long **)DAT_00d63c00 == &DAT_00d63c00);
    }
    plVar1 = DAT_00d63c00;
    if (DAT_00d63c00 == &DAT_00d63b60) break;
    *(long *)DAT_00d63c00[1] = *DAT_00d63c00;
    *(long *)(*plVar1 + 8) = plVar1[1];
    *plVar1 = (long)plVar1;
    plVar1[1] = (long)plVar1;
    FUN_005d072c(&DAT_00d63ba0);
    plVar3 = plVar1 + -3;
    (*(code *)*plVar3)(plVar3);
    FUN_005d0710(plVar1[-1] + 0x88);
    *plVar3 = 0;
    *plVar1 = plVar1[-1] + 0x78;
    puVar2 = *(undefined8 **)(plVar1[-1] + 0x80);
    plVar1[1] = (long)puVar2;
    *puVar2 = plVar1;
    *(long **)(plVar1[-1] + 0x80) = plVar1;
    FUN_005ce108(plVar1[-1] + 0xb0);
    FUN_005d072c(plVar1[-1] + 0x88);
  }
  FUN_005d0864(&DAT_00d63bc8);
  FUN_005d072c(&DAT_00d63ba0);
  return;
}


// ===== 005cd310  <EXTERNAL>::malloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00d59688)();
  return pvVar1;
}


// ===== 005cd31c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00d596a0)();
  return;
}


// ===== 005cd328  <EXTERNAL>::realloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_00d59690)();
  return pvVar1;
}


// ===== 005cd334  FUN_005cd334 =====

void FUN_005cd334(void)

{
  return;
}


// ===== 005cd33c  FUN_005cd33c =====

char * FUN_005cd33c(int param_1)

{
  char *pcVar1;
  
  if (param_1 == -0x7e || param_1 + 0x7e < 0 != SCARRY4(param_1,0x7e)) {
    if (param_1 == -0xbc7 || param_1 + 0xbc7 < 0 != SCARRY4(param_1,0xbc7)) {
      if (param_1 == -0xfff) {
        return "EOF";
      }
      if (param_1 == -0xffe) {
        return "UNKNOWN";
      }
      if (param_1 == -0xff0) {
        return "ECHARSET";
      }
    }
    else {
      switch(param_1) {
      case -0xbc6:
        return "EAI_PROTOCOL";
      case -0xbc5:
        return "EAI_BADHINTS";
      case -0xbc3:
        return "EAI_SOCKTYPE";
      case -0xbc2:
        return "EAI_SERVICE";
      case -0xbc1:
        return "EAI_OVERFLOW";
      case -0xbc0:
        return "EAI_NONAME";
      case -0xbbf:
        return "EAI_NODATA";
      case -0xbbe:
        return "EAI_MEMORY";
      case -0xbbd:
        return "EAI_FAMILY";
      case -0xbbc:
        return "EAI_FAIL";
      case -0xbbb:
        return "EAI_CANCELED";
      case -0xbba:
        return "EAI_BADFLAGS";
      case -0xbb9:
        return "EAI_AGAIN";
      case -3000:
        return "EAI_ADDRFAMILY";
      }
    }
  }
  else {
    switch(param_1) {
    case -0x7d:
      return "ECANCELED";
    case -0x72:
      return "EALREADY";
    case -0x71:
      return "EHOSTUNREACH";
    case -0x70:
      return "EHOSTDOWN";
    case -0x6f:
      return "ECONNREFUSED";
    case -0x6e:
      return "ETIMEDOUT";
    case -0x6c:
      return "ESHUTDOWN";
    case -0x6b:
      return "ENOTCONN";
    case -0x6a:
      return "EISCONN";
    case -0x69:
      return "ENOBUFS";
    case -0x68:
      return "ECONNRESET";
    case -0x67:
      return "ECONNABORTED";
    case -0x65:
      return "ENETUNREACH";
    case -100:
      return "ENETDOWN";
    case -99:
      return "EADDRNOTAVAIL";
    case -0x62:
      return "EADDRINUSE";
    case -0x61:
      return "EAFNOSUPPORT";
    case -0x5f:
      return "ENOTSUP";
    case -0x5d:
      return "EPROTONOSUPPORT";
    case -0x5c:
      return "ENOPROTOOPT";
    case -0x5b:
      return "EPROTOTYPE";
    case -0x5a:
      return "EMSGSIZE";
    case -0x59:
      return "EDESTADDRREQ";
    case -0x58:
      return "ENOTSOCK";
    case -0x47:
      return "EPROTO";
    case -0x40:
      return "ENONET";
    case -0x28:
      return "ELOOP";
    case -0x27:
      return "ENOTEMPTY";
    case -0x26:
      return "ENOSYS";
    case -0x24:
      return "ENAMETOOLONG";
    case -0x22:
      return "ERANGE";
    case -0x20:
      return "EPIPE";
    case -0x1f:
      return "EMLINK";
    case -0x1e:
      return "EROFS";
    case -0x1d:
      return "ESPIPE";
    case -0x1c:
      return "ENOSPC";
    case -0x1b:
      return "EFBIG";
    case -0x1a:
      return "ETXTBSY";
    case -0x18:
      return "EMFILE";
    case -0x17:
      return "ENFILE";
    case -0x16:
      return "EINVAL";
    case -0x15:
      return "EISDIR";
    case -0x14:
      return "ENOTDIR";
    case -0x13:
      return "ENODEV";
    case -0x12:
      return "EXDEV";
    case -0x11:
      return "EEXIST";
    case -0x10:
      return "EBUSY";
    case -0xe:
      return "EFAULT";
    case -0xd:
      return "EACCES";
    case -0xc:
      return "ENOMEM";
    case -0xb:
      return "EAGAIN";
    case -9:
      return "EBADF";
    case -7:
      return "E2BIG";
    case -6:
      return "ENXIO";
    case -5:
      return "EIO";
    case -4:
      return "EINTR";
    case -3:
      return "ESRCH";
    case -2:
      return "ENOENT";
    case -1:
      return "EPERM";
    }
  }
  pcVar1 = (char *)FUN_005cd744(param_1);
  return pcVar1;
}


// ===== 005cd744  FUN_005cd744 =====

char * FUN_005cd744(ulong param_1)

{
  long lVar1;
  size_t sVar2;
  char *__dest;
  char acStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  snprintf(acStack_58,0x20,"Unknown system error %d",param_1 & 0xffffffff);
  sVar2 = strlen(acStack_58);
  __dest = (char *)(*(code *)PTR_malloc_00d59688)(sVar2 + 1);
  if (__dest == (char *)0x0) {
    __dest = "Unknown system error";
  }
  else {
    memcpy(__dest,acStack_58,sVar2 + 1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return __dest;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005cd7e4  FUN_005cd7e4 =====

char * FUN_005cd7e4(int param_1)

{
  char *pcVar1;
  
  if (param_1 == -0x7e || param_1 + 0x7e < 0 != SCARRY4(param_1,0x7e)) {
    if (param_1 == -0xbc7 || param_1 + 0xbc7 < 0 != SCARRY4(param_1,0xbc7)) {
      if (param_1 == -0xfff) {
        return "end of file";
      }
      if (param_1 == -0xffe) {
        return "unknown error";
      }
      if (param_1 == -0xff0) {
        return "invalid Unicode character";
      }
    }
    else {
      switch(param_1) {
      case -0xbc6:
        return "resolved protocol is unknown";
      case -0xbc5:
        return "invalid value for hints";
      case -0xbc3:
        return "socket type not supported";
      case -0xbc2:
        return "service not available for socket type";
      case -0xbc1:
        return "argument buffer overflow";
      case -0xbc0:
        return "unknown node or service";
      case -0xbbf:
        return "no address";
      case -0xbbe:
        return "out of memory";
      case -0xbbd:
        return "ai_family not supported";
      case -0xbbc:
        return "permanent failure";
      case -0xbbb:
        return "request canceled";
      case -0xbba:
        return "bad ai_flags value";
      case -0xbb9:
        return "temporary failure";
      case -3000:
        goto switchD_005cd818_caseD_ffffff9f;
      }
    }
  }
  else {
    switch(param_1) {
    case -0x7d:
      return "operation canceled";
    case -0x72:
      return "connection already in progress";
    case -0x71:
      return "host is unreachable";
    case -0x70:
      return "host is down";
    case -0x6f:
      return "connection refused";
    case -0x6e:
      return "connection timed out";
    case -0x6c:
      return "cannot send after transport endpoint shutdown";
    case -0x6b:
      return "socket is not connected";
    case -0x6a:
      return "socket is already connected";
    case -0x69:
      return "no buffer space available";
    case -0x68:
      return "connection reset by peer";
    case -0x67:
      return "software caused connection abort";
    case -0x65:
      return "network is unreachable";
    case -100:
      return "network is down";
    case -99:
      return "address not available";
    case -0x62:
      return "address already in use";
    case -0x61:
switchD_005cd818_caseD_ffffff9f:
      return "address family not supported";
    case -0x5f:
      return "operation not supported on socket";
    case -0x5d:
      return "protocol not supported";
    case -0x5c:
      return "protocol not available";
    case -0x5b:
      return "protocol wrong type for socket";
    case -0x5a:
      return "message too long";
    case -0x59:
      return "destination address required";
    case -0x58:
      return "socket operation on non-socket";
    case -0x47:
      return "protocol error";
    case -0x40:
      return "machine is not on the network";
    case -0x28:
      return "too many symbolic links encountered";
    case -0x27:
      return "directory not empty";
    case -0x26:
      return "function not implemented";
    case -0x24:
      return "name too long";
    case -0x22:
      return "result too large";
    case -0x20:
      return "broken pipe";
    case -0x1f:
      return "too many links";
    case -0x1e:
      return "read-only file system";
    case -0x1d:
      return "invalid seek";
    case -0x1c:
      return "no space left on device";
    case -0x1b:
      return "file too large";
    case -0x1a:
      return "text file is busy";
    case -0x18:
      return "too many open files";
    case -0x17:
      return "file table overflow";
    case -0x16:
      return "invalid argument";
    case -0x15:
      return "illegal operation on a directory";
    case -0x14:
      return "not a directory";
    case -0x13:
      return "no such device";
    case -0x12:
      return "cross-device link not permitted";
    case -0x11:
      return "file already exists";
    case -0x10:
      return "resource busy or locked";
    case -0xe:
      return "bad address in system call argument";
    case -0xd:
      return "permission denied";
    case -0xc:
      return "not enough memory";
    case -0xb:
      return "resource temporarily unavailable";
    case -9:
      return "bad file descriptor";
    case -7:
      return "argument list too long";
    case -6:
      return "no such device or address";
    case -5:
      return "i/o error";
    case -4:
      return "interrupted system call";
    case -3:
      return "no such process";
    case -2:
      return "no such file or directory";
    case -1:
      return "operation not permitted";
    }
  }
  pcVar1 = (char *)FUN_005cd744(param_1);
  return pcVar1;
}


// ===== 005cdbe0  FUN_005cdbe0 =====

void FUN_005cdbe0(undefined8 param_1,uint param_2,undefined2 *param_3)

{
  *(undefined8 *)(param_3 + 2) = 0;
  *(undefined4 *)(param_3 + 6) = 0;
  *param_3 = 2;
  param_3[1] = (ushort)(param_2 >> 8) & 0xff | (ushort)((param_2 & 0xff00ff) << 8);
  FUN_005cc8a4(2,param_1);
  return;
}


// ===== 005cdc10  FUN_005cdc10 =====

undefined8
FUN_005cdc10(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,short *param_5)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 0x10) == 0xf) {
    if (*param_5 == 2) {
      uVar1 = FUN_005d1128();
      return uVar1;
    }
    if (*param_5 == 10) {
      uVar1 = FUN_005d1128();
      return uVar1;
    }
  }
  return 0xffffffea;
}


// ===== 005cdc4c  FUN_005cdc4c =====

undefined8 FUN_005cdc4c(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if (((param_3 != 0) && (param_2 != 0)) && (*(int *)(param_1 + 0x10) == 0xf)) {
    uVar1 = FUN_005d17cc();
    return uVar1;
  }
  return 0xffffffea;
}


// ===== 005cdc6c  FUN_005cdc6c =====

undefined8 FUN_005cdc6c(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x10) == 0xf) {
    uVar1 = FUN_005d1928();
    return uVar1;
  }
  return 0xffffffea;
}


// ===== 005cdc84  FUN_005cdc84 =====

void FUN_005cdc84(long param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 1;
  return;
}


// ===== 005cdc90  FUN_005cdc90 =====

undefined8 FUN_005cdc90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x220);
}


// ===== 005cdc98  FUN_005cdc98 =====

long FUN_005cdc98(long param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (param_2 != 0) {
    uVar4 = (ulong)param_2;
    if (param_2 < 5) {
      lVar6 = 0;
      lVar2 = 0;
    }
    else {
      uVar1 = 4;
      if ((param_2 & 3) != 0) {
        uVar1 = uVar4 & 3;
      }
      lVar6 = uVar4 - uVar1;
      lVar5 = 0;
      lVar7 = 0;
      lVar8 = 0;
      lVar9 = 0;
      plVar3 = (long *)(param_1 + 0x28);
      lVar2 = lVar6;
      do {
        lVar2 = lVar2 + -4;
        lVar8 = *plVar3 + lVar8;
        lVar9 = plVar3[2] + lVar9;
        lVar5 = plVar3[-4] + lVar5;
        lVar7 = plVar3[-2] + lVar7;
        plVar3 = plVar3 + 8;
      } while (lVar2 != 0);
      lVar2 = lVar8 + lVar5 + lVar9 + lVar7;
    }
    lVar5 = uVar4 - lVar6;
    plVar3 = (long *)(param_1 + lVar6 * 0x10 + 8);
    do {
      lVar5 = lVar5 + -1;
      lVar2 = *plVar3 + lVar2;
      plVar3 = plVar3 + 2;
    } while (lVar5 != 0);
    return lVar2;
  }
  return 0;
}


// ===== 005cdd2c  FUN_005cdd2c =====

undefined8 FUN_005cdd2c(long param_1)

{
  long *plVar1;
  
  if ((long *)(param_1 + 0x20) == *(long **)(param_1 + 0x20)) {
    plVar1 = (long *)(param_1 + 0x10);
    do {
      plVar1 = (long *)*plVar1;
      if (plVar1 == (long *)(param_1 + 0x10)) {
        FUN_005cf75c(param_1);
        if (DAT_00d63c18 != param_1) {
          return 0;
        }
        DAT_00d63c18 = 0;
        return 0;
      }
    } while (*(char *)((long)plVar1 + 0x39) < '\0');
  }
  return 0xfffffff0;
}


// ===== 005cdda4  FUN_005cdda4 =====

void FUN_005cdda4(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  iVar1 = FUN_005cde4c((int)param_1,param_1 + 0x1c0,FUN_005ce010);
  if (iVar1 == 0) {
    *(long *)(param_2 + 8) = param_1;
    plVar3 = (long *)(param_2 + 0x20);
    *plVar3 = param_1 + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    *(undefined8 **)(param_2 + 0x28) = puVar2;
    *puVar2 = plVar3;
    *(long **)(param_1 + 0x18) = plVar3;
    plVar3 = (long *)(param_2 + 0x68);
    *plVar3 = param_1 + 0x1b0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x60) = param_3;
    puVar2 = *(undefined8 **)(param_1 + 0x1b8);
    *(undefined4 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 0x78) = 0;
    *(undefined4 *)(param_2 + 0x58) = 0x6000;
    *(undefined8 **)(param_2 + 0x70) = puVar2;
    *puVar2 = plVar3;
    *(long **)(param_1 + 0x1b8) = plVar3;
    *(int *)(*(long *)(param_2 + 8) + 8) = *(int *)(*(long *)(param_2 + 8) + 8) + 1;
  }
  return;
}


// ===== 005cde4c  FUN_005cde4c =====

uint FUN_005cde4c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  int *piVar4;
  int iVar5;
  char acStack_70 [32];
  uint local_50;
  uint local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_2 + 7) != -1) {
    uVar2 = 0;
    goto LAB_005cdfe0;
  }
  if ((DAT_00d63f70 & 1) == 0) {
    uVar2 = FUN_005d2518(0,0x80800);
    if (uVar2 == 0xffffffff) {
      piVar4 = (int *)__errno();
      iVar5 = *piVar4;
      if (iVar5 == 0x26) {
        DAT_00d63f70 = 1;
        goto LAB_005cde9c;
      }
LAB_005cdf3c:
      uVar2 = -iVar5;
      if (0 < iVar5) {
LAB_005cdf44:
        if (uVar2 != 0xffffffda) goto LAB_005cdfe0;
        goto LAB_005cdf4c;
      }
    }
    else {
joined_r0x005cdef4:
      if ((int)uVar2 < 0) goto LAB_005cdf44;
    }
    local_4c = 0xffffffff;
    local_50 = uVar2;
  }
  else {
LAB_005cde9c:
    if ((DAT_00d63f74 & 1) == 0) {
      uVar3 = FUN_005d24f4(0);
      uVar2 = (uint)uVar3;
      if (uVar2 != 0xffffffff) {
        FUN_005ce970(uVar3,1);
        FUN_005ce8ec(uVar3 & 0xffffffff,1);
        goto joined_r0x005cdef4;
      }
      piVar4 = (int *)__errno();
      iVar5 = *piVar4;
      if (iVar5 != 0x26) goto LAB_005cdf3c;
      DAT_00d63f74 = 1;
    }
LAB_005cdf4c:
    uVar2 = FUN_005cf87c(&local_50,0x800);
    if (uVar2 == 0) {
      snprintf(acStack_70,0x20,"/proc/self/fd/%d",(ulong)local_50);
      uVar2 = FUN_005cea24(acStack_70,2);
      if (-1 < (int)uVar2) {
        FUN_005ce9d0(local_50);
        FUN_005ce9d0(local_4c);
        local_50 = uVar2;
        local_4c = uVar2;
      }
    }
    else if ((int)uVar2 < 0) goto LAB_005cdfe0;
  }
  FUN_005ceb8c(param_2 + 1,FUN_005ce214,local_50);
  FUN_005ceba8(param_1,param_2 + 1,1);
  uVar2 = 0;
  *param_2 = param_3;
  *(uint *)(param_2 + 8) = local_4c;
LAB_005cdfe0:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}


// ===== 005ce010  FUN_005ce010 =====

/* WARNING: Removing unreachable block (ram,0x005ce0e8) */

void FUN_005ce010(long param_1)

{
  long ****pppplVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long ***ppplVar5;
  long ****pppplVar6;
  long ***local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  pppplVar1 = (long ****)(param_1 + 0x1b0);
  local_38 = *(long *)(lVar4 + 0x28);
  pppplVar6 = *(long *****)(param_1 + 0x1b0);
  if (pppplVar1 != pppplVar6) {
    local_40 = *(undefined8 **)(param_1 + 0x1b8);
    *local_40 = &local_48;
    ppplVar5 = pppplVar6[1];
    *(long ****)(param_1 + 0x1b8) = ppplVar5;
    *ppplVar5 = (long **)pppplVar1;
    pppplVar6[1] = (long ***)&local_48;
    local_48 = (long ***)pppplVar6;
joined_r0x005ce070:
    if (&local_48 != (long ****)local_48) {
      *((long ****)local_48)[1] = *local_48;
      (*local_48)[1] = (long *)((long ****)local_48)[1];
      pppplVar6 = (long ****)local_48 + 2;
      *local_48 = (long **)pppplVar1;
      ppplVar5 = *(long ****)(param_1 + 0x1b8);
      ((long ****)local_48)[1] = ppplVar5;
      *ppplVar5 = (long **)local_48;
      *(long ****)(param_1 + 0x1b8) = local_48;
      do {
        if (*(int *)pppplVar6 != 1) {
          ClearExclusiveLocal();
          if (*(int *)pppplVar6 == 0) goto joined_r0x005ce070;
          break;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppplVar6,0x10);
        if (bVar3) {
          *(undefined4 *)pppplVar6 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((long ****)local_48)[-1] != (long ***)0x0) {
        (*(code *)((long ****)local_48)[-1])((long ****)local_48 + -0xd);
      }
      goto joined_r0x005ce070;
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005ce108  FUN_005ce108 =====

undefined8 FUN_005ce108(long param_1)

{
  char cVar1;
  bool bVar2;
  ssize_t sVar3;
  int *piVar4;
  int __fd;
  size_t __n;
  undefined *__buf;
  
  piVar4 = (int *)(param_1 + 0x78);
  if (*piVar4 == 0) {
    do {
      if (*piVar4 != 0) {
        ClearExclusiveLocal();
        return 0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    __fd = *(int *)(*(long *)(param_1 + 8) + 0x200);
    if (__fd == -1) {
      __fd = *(int *)(*(long *)(param_1 + 8) + 0x1f8);
      __n = 8;
      __buf = &DAT_001fb6b8;
    }
    else {
      __n = 1;
      __buf = &DAT_001b3348;
    }
    do {
      sVar3 = write(__fd,__buf,__n);
      if ((int)sVar3 != -1) {
        if (__n == (long)(int)sVar3) {
          return 0;
        }
        goto LAB_005ce1ac;
      }
      piVar4 = (int *)__errno();
    } while (*piVar4 == 4);
    if ((__n != 0xffffffffffffffff) && (*piVar4 != 0xb)) {
LAB_005ce1ac:
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return 0;
}


// ===== 005ce1cc  FUN_005ce1cc =====

void FUN_005ce1cc(long param_1)

{
  uint uVar1;
  
  **(undefined8 **)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x68);
  uVar1 = *(uint *)(param_1 + 0x58);
  *(undefined8 *)(*(long *)(param_1 + 0x68) + 8) = *(undefined8 *)(param_1 + 0x70);
  if (((uVar1 >> 0xe & 1) != 0) &&
     (*(uint *)(param_1 + 0x58) = uVar1 & 0xffffbfff, (uVar1 >> 0xd & 1) != 0)) {
    *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
  }
  return;
}


// ===== 005ce204  FUN_005ce204 =====

void FUN_005ce204(long param_1)

{
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return;
}


// ===== 005ce214  FUN_005ce214 =====

void FUN_005ce214(undefined8 param_1,long param_2)

{
  ssize_t sVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined8 *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  int iVar6;
  int local_448 [256];
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  iVar6 = 0;
  do {
    do {
      sVar2 = read(*(int *)(param_2 + 0x30),local_448,0x400);
      sVar1 = sVar2;
      if (sVar2 < 1) {
        sVar1 = 0;
      }
      iVar6 = iVar6 + (int)sVar1;
    } while (sVar2 == 0x400);
    if (sVar2 != -1) goto LAB_005ce288;
    piVar3 = (int *)__errno();
  } while (*piVar3 == 4);
  if (*piVar3 != 0xb) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
LAB_005ce288:
  puVar4 = (undefined8 *)(param_2 + -8);
  if (*(int *)(param_2 + 0x38) == -1) {
    UNRECOVERED_JUMPTABLE = (code *)*puVar4;
    lVar5 = *(long *)(lVar5 + 0x28);
    iVar6 = local_448[0];
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)*puVar4;
    lVar5 = *(long *)(lVar5 + 0x28);
  }
  if (lVar5 == local_48) {
                    /* WARNING: Could not recover jumptable at 0x005ce2e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,puVar4,iVar6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005ce2f4  FUN_005ce2f4 =====

void FUN_005ce2f4(undefined8 param_1,long param_2)

{
  if (*(int *)(param_2 + 0x38) != -1) {
    if (*(int *)(param_2 + 0x40) != -1) {
      if (*(int *)(param_2 + 0x40) != *(int *)(param_2 + 0x38)) {
        FUN_005ce9d0();
      }
      *(undefined4 *)(param_2 + 0x40) = 0xffffffff;
    }
    FUN_005ced14(param_1,param_2 + 8,1);
    FUN_005ce9d0(*(undefined4 *)(param_2 + 0x38));
    *(undefined4 *)(param_2 + 0x38) = 0xffffffff;
  }
  return;
}


// ===== 005ce36c  FUN_005ce36c =====

void FUN_005ce36c(void)

{
  FUN_005d1f80(0);
  return;
}


// ===== 005ce374  FUN_005ce374 =====

void FUN_005ce374(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 1;
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 1:
    FUN_005ce1cc(param_1);
    break;
  case 2:
    FUN_005cf45c(param_1);
    break;
  case 3:
    FUN_005d2478(param_1);
    break;
  case 4:
    FUN_005cc838(param_1);
    break;
  case 6:
    FUN_005cf55c(param_1);
    break;
  case 7:
    FUN_005cf7f4(param_1);
    break;
  case 8:
    FUN_005cf82c(param_1);
    break;
  case 9:
    FUN_005cf35c(param_1);
    break;
  case 10:
    FUN_005cf92c(param_1);
    break;
  case 0xc:
    thunk_FUN_005d04e8(param_1);
    break;
  case 0xd:
    thunk_FUN_005d0af4(param_1);
    break;
  case 0xe:
    FUN_005d04e8(param_1);
    break;
  case 0xf:
    FUN_005d0f1c(param_1);
    break;
  case 0x10:
    FUN_005d0120(param_1);
    return;
  }
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x168);
  *(long *)(*(long *)(param_1 + 8) + 0x168) = param_1;
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  return;
}


// ===== 005ce480  FUN_005ce480 =====

void FUN_005ce480(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x168);
  *(long *)(*(long *)(param_1 + 8) + 0x168) = param_1;
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  return;
}


// ===== 005ce494  FUN_005ce494 =====

void FUN_005ce494(long param_1,int param_2)

{
  long *****ppppplVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  undefined4 uVar8;
  ulong uVar9;
  long ****pppplVar10;
  long *****ppppplVar11;
  long lVar12;
  long ****local_78;
  long *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if (((*(int *)(param_1 + 8) == 0) && ((long *)(param_1 + 0x20) == *(long **)(param_1 + 0x20))) &&
     (*(long *)(param_1 + 0x168) == 0)) {
    uVar9 = FUN_005d1f80(1);
    bVar7 = false;
    *(ulong *)(param_1 + 0x220) = uVar9 / 1000000;
    iVar4 = *(int *)(param_1 + 0x30);
  }
  else {
    ppppplVar1 = (long *****)(param_1 + 0x48);
    plVar2 = (long *)(param_1 + 0x20);
    while (*(int *)(param_1 + 0x30) == 0) {
      uVar9 = FUN_005d1f80(1);
      *(ulong *)(param_1 + 0x220) = uVar9 / 1000000;
      FUN_005d0e90(param_1);
      ppppplVar11 = *(long ******)(param_1 + 0x48);
      if (ppppplVar1 != ppppplVar11) {
        local_70 = *(long **)(param_1 + 0x50);
        *local_70 = (long)&local_78;
        pppplVar10 = ppppplVar11[1];
        *(long *****)(param_1 + 0x50) = pppplVar10;
        *pppplVar10 = (long ***)ppppplVar1;
        ppppplVar11[1] = (long ****)&local_78;
        local_78 = (long ****)ppppplVar11;
        while (&local_78 != (long *****)local_78) {
          *((long *****)local_78)[1] = *local_78;
          (*local_78)[1] = (long **)((long *****)local_78)[1];
          *local_78 = (long ***)local_78;
          ((long *****)local_78)[1] = local_78;
          (*(code *)((long *****)local_78)[-1])(param_1,(long *****)local_78 + -1,4);
        }
      }
      FUN_005cf494(param_1);
      FUN_005cf294(param_1);
      if (((((param_2 == 0) || (param_2 == 1 && ppppplVar1 == ppppplVar11)) &&
           ((*(int *)(param_1 + 0x30) == 0 &&
            ((*(int *)(param_1 + 8) != 0 || (plVar2 != (long *)*plVar2)))))) &&
          ((long *)(param_1 + 0x1a0) == *(long **)(param_1 + 0x1a0))) &&
         ((ppppplVar1 == (long *****)*ppppplVar1 && (*(long *)(param_1 + 0x168) == 0)))) {
        uVar8 = FUN_005d0e58(param_1);
      }
      else {
        uVar8 = 0;
      }
      FUN_005d1b24(param_1,uVar8);
      FUN_005cf394(param_1);
      lVar12 = *(long *)(param_1 + 0x168);
      *(undefined8 *)(param_1 + 0x168) = 0;
      while (lVar6 = lVar12, lVar6 != 0) {
        lVar12 = *(long *)(lVar6 + 0x50);
        *(uint *)(lVar6 + 0x58) = *(uint *)(lVar6 + 0x58) | 2;
        switch(*(undefined4 *)(lVar6 + 0x10)) {
        case 7:
        case 0xc:
        case 0xe:
          FUN_005d0358(lVar6);
        default:
          uVar3 = *(uint *)(lVar6 + 0x58);
          break;
        case 0xf:
          FUN_005d0f80(lVar6);
          uVar3 = *(uint *)(lVar6 + 0x58);
        }
        if (((uVar3 >> 0xd & 1) != 0) &&
           (*(uint *)(lVar6 + 0x58) = uVar3 & 0xffffdfff, (uVar3 >> 0xe & 1) != 0)) {
          *(int *)(*(long *)(lVar6 + 8) + 8) = *(int *)(*(long *)(lVar6 + 8) + 8) + -1;
        }
        **(undefined8 **)(lVar6 + 0x28) = *(undefined8 *)(lVar6 + 0x20);
        *(undefined8 *)(*(long *)(lVar6 + 0x20) + 8) = *(undefined8 *)(lVar6 + 0x28);
        if (*(code **)(lVar6 + 0x18) != (code *)0x0) {
          (**(code **)(lVar6 + 0x18))(lVar6);
        }
      }
      if (param_2 == 1) {
        uVar9 = FUN_005d1f80(1);
        *(ulong *)(param_1 + 0x220) = uVar9 / 1000000;
        FUN_005d0e90(param_1);
      }
      if ((*(int *)(param_1 + 8) == 0) && (plVar2 == (long *)*plVar2)) {
        bVar7 = *(long *)(param_1 + 0x168) != 0;
      }
      else {
        bVar7 = true;
      }
      if ((0xfffffffd < param_2 - 3U) || (bVar7 == false)) goto LAB_005ce734;
    }
    bVar7 = true;
LAB_005ce734:
    iVar4 = *(int *)(param_1 + 0x30);
  }
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar7);
}


// ===== 005ce798  FUN_005ce798 =====

int FUN_005ce798(int param_1,uint param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int __fd;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __fd = socket(param_1,param_2 | 0x80800,param_3);
  if (__fd == -1) {
    piVar5 = (int *)__errno();
    if (*piVar5 == 0x16) {
      __fd = socket(param_1,param_2,param_3);
      if (__fd == -1) {
        __fd = -*piVar5;
      }
      else {
        local_4c = 1;
        do {
          iVar3 = ioctl(__fd,0x5421,&local_4c);
          if (iVar3 != -1) {
            if (iVar3 == 0) goto LAB_005ce85c;
            iVar3 = *piVar5;
            break;
          }
          iVar3 = *piVar5;
        } while (iVar3 == 4);
        if (iVar3 == 0) {
LAB_005ce85c:
          do {
            iVar3 = ioctl(__fd,0x5451);
            if (iVar3 != -1) {
              if (iVar3 == 0) goto LAB_005ce8bc;
              iVar3 = *piVar5;
              break;
            }
            iVar3 = *piVar5;
          } while (iVar3 == 4);
          if (iVar3 == 0) goto LAB_005ce8bc;
        }
        iVar1 = *piVar5;
        iVar4 = close(__fd);
        __fd = -iVar3;
        if (iVar4 == -1) {
          *piVar5 = iVar1;
        }
      }
    }
    else {
      __fd = -*piVar5;
    }
  }
LAB_005ce8bc:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return __fd;
}


// ===== 005ce8ec  FUN_005ce8ec =====

void FUN_005ce8ec(int param_1,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = param_2;
  do {
    iVar2 = ioctl(param_1,0x5421,&local_2c);
    if (iVar2 != -1) {
      if (iVar2 == 0) goto LAB_005ce94c;
      piVar3 = (int *)__errno();
      break;
    }
    piVar3 = (int *)__errno();
  } while (*piVar3 == 4);
  iVar2 = -*piVar3;
LAB_005ce94c:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}


// ===== 005ce970  FUN_005ce970 =====

int FUN_005ce970(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0x5450;
  if (param_2 != 0) {
    uVar3 = 0x5451;
  }
  do {
    iVar1 = ioctl(param_1,(ulong)uVar3);
    if (iVar1 != -1) {
      if (iVar1 == 0) {
        return 0;
      }
      piVar2 = (int *)__errno();
      break;
    }
    piVar2 = (int *)__errno();
  } while (*piVar2 == 4);
  return -*piVar2;
}


// ===== 005ce9d0  FUN_005ce9d0 =====

int FUN_005ce9d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  iVar3 = close(param_1);
  if (iVar3 == -1) {
    iVar2 = *piVar4;
    *piVar4 = iVar1;
    iVar3 = -0x73;
    if (iVar2 != 4) {
      iVar3 = -iVar2;
    }
  }
  return iVar3;
}


// ===== 005cea24  FUN_005cea24 =====

int FUN_005cea24(char *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  if ((DAT_00d63f80 & 1) == 0) {
    iVar2 = open(param_1,param_2 | 0x80000);
    if (iVar2 != -1) {
      return iVar2;
    }
    piVar4 = (int *)__errno();
    iVar2 = *piVar4;
    if (iVar2 != 0x16) goto LAB_005ceb00;
    DAT_00d63f80 = 1;
  }
  iVar2 = open(param_1,param_2);
  if (iVar2 != -1) {
    do {
      iVar3 = ioctl(iVar2,0x5451);
      if (iVar3 != -1) {
        if (iVar3 == 0) {
          return iVar2;
        }
        piVar4 = (int *)__errno();
        iVar3 = *piVar4;
        if (iVar3 == 0) {
          return iVar2;
        }
        goto LAB_005cead0;
      }
      piVar4 = (int *)__errno();
      iVar3 = *piVar4;
    } while (iVar3 == 4);
    if (iVar3 == 0) {
      return iVar2;
    }
LAB_005cead0:
    puVar5 = (undefined4 *)__errno();
    uVar1 = *puVar5;
    iVar2 = close(iVar2);
    if (iVar2 != -1) {
      return -iVar3;
    }
    *puVar5 = uVar1;
    return -iVar3;
  }
  piVar4 = (int *)__errno();
  iVar2 = *piVar4;
LAB_005ceb00:
  return -iVar2;
}


// ===== 005ceb20  FUN_005ceb20 =====

undefined4 FUN_005ceb20(long param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = 0xffffffea;
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 7:
  case 0xc:
  case 0xe:
    piVar2 = (int *)(param_1 + 0xb8);
    break;
  case 8:
    piVar2 = (int *)(param_1 + 0x98);
    break;
  default:
    goto switchD_005ceb48_caseD_9;
  case 0xf:
    piVar2 = (int *)(param_1 + 0xb0);
  }
  uVar1 = 0xfffffff7;
  if (((*(byte *)(param_1 + 0x58) & 3) == 0) && (*piVar2 != -1)) {
    uVar1 = 0;
    *param_2 = *piVar2;
  }
switchD_005ceb48_caseD_9:
  return uVar1;
}


// ===== 005ceb8c  FUN_005ceb8c =====

void FUN_005ceb8c(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 6) = param_3;
  param_1[2] = param_1 + 1;
  param_1[3] = param_1 + 3;
  param_1[4] = param_1 + 3;
  param_1[5] = 0;
  *param_1 = param_2;
  param_1[1] = param_1 + 1;
  return;
}


// ===== 005ceba8  FUN_005ceba8 =====

void FUN_005ceba8(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = *(uint *)(param_1 + 0x70);
  param_3 = *(uint *)(param_2 + 0x28) | param_3;
  *(uint *)(param_2 + 0x28) = param_3;
  if (uVar1 < *(int *)(param_2 + 0x30) + 1U) {
    pvVar5 = *(void **)(param_1 + 0x68);
    if (pvVar5 == (void *)0x0) {
      uVar8 = 0;
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)((long)pvVar5 + (ulong)uVar1 * 8);
      uVar8 = *(undefined8 *)((long)pvVar5 + (ulong)(uVar1 + 1) * 8);
    }
    uVar1 = *(int *)(param_2 + 0x30) + 2;
    uVar1 = uVar1 | uVar1 >> 1;
    uVar1 = uVar1 | uVar1 >> 2;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 0x10;
    pvVar5 = realloc(pvVar5,(ulong)(uVar1 + 1) << 3);
    if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar2 = *(uint *)(param_1 + 0x70);
    uVar4 = uVar1 - 1;
    if (uVar2 < uVar4) {
      memset((void *)((long)pvVar5 + (ulong)uVar2 * 8),0,(ulong)((uVar1 - uVar2) - 2) * 8 + 8);
    }
    param_3 = *(uint *)(param_2 + 0x28);
    *(undefined8 *)((long)pvVar5 + (ulong)uVar4 * 8) = uVar9;
    *(undefined8 *)((long)pvVar5 + (ulong)uVar1 * 8) = uVar8;
    *(void **)(param_1 + 0x68) = pvVar5;
    *(uint *)(param_1 + 0x70) = uVar4;
  }
  if (*(uint *)(param_2 + 0x2c) == param_3) {
    if (param_3 == 0) {
      plVar6 = (long *)(param_2 + 0x18);
      if (plVar6 != (long *)*plVar6) {
        **(long **)(param_2 + 0x20) = *plVar6;
        *(undefined8 *)(*(long *)(param_2 + 0x18) + 8) = *(undefined8 *)(param_2 + 0x20);
        *(long *)(param_2 + 0x18) = param_2 + 0x18;
        *(long **)(param_2 + 0x20) = plVar6;
      }
    }
  }
  else {
    plVar6 = (long *)(param_2 + 0x18);
    if (plVar6 == (long *)*plVar6) {
      *(long *)(param_2 + 0x18) = param_1 + 0x58;
      plVar7 = *(long **)(param_1 + 0x60);
      *(long **)(param_2 + 0x20) = plVar7;
      *plVar7 = (long)plVar6;
      *(long **)(param_1 + 0x60) = plVar6;
    }
    if (*(long *)(*(long *)(param_1 + 0x68) + (long)*(int *)(param_2 + 0x30) * 8) == 0) {
      iVar3 = *(int *)(param_1 + 0x74);
      *(long *)(*(long *)(param_1 + 0x68) + (long)*(int *)(param_2 + 0x30) * 8) = param_2;
      *(int *)(param_1 + 0x74) = iVar3 + 1;
    }
  }
  return;
}


// ===== 005ced14  FUN_005ced14 =====

void FUN_005ced14(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  
  uVar3 = *(uint *)(param_2 + 0x30);
  if ((uVar3 != 0xffffffff) && (uVar3 < *(uint *)(param_1 + 0x70))) {
    plVar5 = (long *)(param_2 + 0x18);
    uVar1 = *(uint *)(param_2 + 0x28) & (param_3 ^ 0xffffffff);
    *(uint *)(param_2 + 0x28) = uVar1;
    if (uVar1 == 0) {
      **(long **)(param_2 + 0x20) = *plVar5;
      *(undefined8 *)(*(long *)(param_2 + 0x18) + 8) = *(undefined8 *)(param_2 + 0x20);
      *(long *)(param_2 + 0x18) = param_2 + 0x18;
      *(long **)(param_2 + 0x20) = plVar5;
      if (*(long *)(*(long *)(param_1 + 0x68) + (long)(int)uVar3 * 8) != 0) {
        iVar2 = *(int *)(param_1 + 0x74);
        *(undefined8 *)(*(long *)(param_1 + 0x68) + (long)(int)uVar3 * 8) = 0;
        *(undefined4 *)(param_2 + 0x2c) = 0;
        *(int *)(param_1 + 0x74) = iVar2 + -1;
        return;
      }
    }
    else if (plVar5 == (long *)*plVar5) {
      *(long *)(param_2 + 0x18) = param_1 + 0x58;
      plVar4 = *(long **)(param_1 + 0x60);
      *(long **)(param_2 + 0x20) = plVar4;
      *plVar4 = (long)plVar5;
      *(long **)(param_1 + 0x60) = plVar5;
      return;
    }
  }
  return;
}


// ===== 005ceda8  FUN_005ceda8 =====

void FUN_005ceda8(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  
  uVar3 = *(uint *)(param_2 + 0x30);
  if ((uVar3 != 0xffffffff) && (uVar3 < *(uint *)(param_1 + 0x70))) {
    plVar4 = (long *)(param_2 + 0x18);
    uVar1 = *(uint *)(param_2 + 0x28) & 0xffffdffa;
    *(uint *)(param_2 + 0x28) = uVar1;
    if (uVar1 == 0) {
      **(long **)(param_2 + 0x20) = *plVar4;
      *(undefined8 *)(*(long *)(param_2 + 0x18) + 8) = *(undefined8 *)(param_2 + 0x20);
      *(long *)(param_2 + 0x18) = param_2 + 0x18;
      *(long **)(param_2 + 0x20) = plVar4;
      if (*(long *)(*(long *)(param_1 + 0x68) + (long)(int)uVar3 * 8) != 0) {
        iVar2 = *(int *)(param_1 + 0x74);
        *(undefined8 *)(*(long *)(param_1 + 0x68) + (long)(int)uVar3 * 8) = 0;
        *(undefined4 *)(param_2 + 0x2c) = 0;
        *(int *)(param_1 + 0x74) = iVar2 + -1;
      }
    }
    else if (plVar4 == (long *)*plVar4) {
      *(long *)(param_2 + 0x18) = param_1 + 0x58;
      plVar5 = *(long **)(param_1 + 0x60);
      *(long **)(param_2 + 0x20) = plVar5;
      *plVar5 = (long)plVar4;
      *(long **)(param_1 + 0x60) = plVar4;
    }
  }
  **(undefined8 **)(param_2 + 0x10) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(*(long *)(param_2 + 8) + 8) = *(undefined8 *)(param_2 + 0x10);
  FUN_005d1a74();
  return;
}


// ===== 005cee50  FUN_005cee50 =====

void FUN_005cee50(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)(param_2 + 8);
  if (plVar1 != (long *)*plVar1) {
    return;
  }
  *(long *)(param_2 + 8) = param_1 + 0x48;
  plVar2 = *(long **)(param_1 + 0x50);
  *(long **)(param_2 + 0x10) = plVar2;
  *plVar2 = (long)plVar1;
  *(long **)(param_1 + 0x50) = plVar1;
  return;
}


// ===== 005cee80  FUN_005cee80 =====

bool FUN_005cee80(long param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0x28) & param_2) != 0;
}


// ===== 005cee90  FUN_005cee90 =====

undefined4
FUN_005cee90(long param_1,long param_2,long param_3,char *param_4,char *param_5,undefined8 *param_6)

{
  undefined4 uVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 *puVar7;
  void *pvVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if ((param_2 != 0) && (param_4 != (char *)0x0 || param_5 != (char *)0x0)) {
    if (param_4 == (char *)0x0) {
      sVar3 = 0;
    }
    else {
      sVar3 = strlen(param_4);
      sVar3 = sVar3 + 1;
    }
    if (param_5 == (char *)0x0) {
      sVar4 = 0;
    }
    else {
      sVar4 = strlen(param_5);
      sVar4 = sVar4 + 1;
    }
    lVar10 = 0;
    if (param_6 != (undefined8 *)0x0) {
      lVar10 = 0x30;
    }
    puVar5 = (undefined8 *)malloc(sVar3 + sVar4 + lVar10);
    if (puVar5 == (undefined8 *)0x0) {
      uVar1 = 0xfffffff4;
    }
    else {
      plVar9 = (long *)(param_2 + 0x10);
      *plVar9 = param_1 + 0x20;
      puVar7 = *(undefined8 **)(param_1 + 0x28);
      *(undefined8 **)(param_2 + 0x18) = puVar7;
      *puVar7 = plVar9;
      *(long **)(param_1 + 0x28) = plVar9;
      puVar7 = (undefined8 *)(param_2 + 0x78);
      *(undefined8 *)(param_2 + 0x80) = 0;
      *puVar7 = 0;
      *(undefined4 *)(param_2 + 8) = 8;
      *(long *)(param_2 + 0x40) = param_1;
      *(long *)(param_2 + 0x70) = param_3;
      *(undefined8 *)(param_2 + 0x90) = 0;
      *(undefined8 *)(param_2 + 0x88) = 0;
      *(undefined4 *)(param_2 + 0x98) = 0;
      if (param_6 == (undefined8 *)0x0) {
        lVar10 = 0;
      }
      else {
        uVar13 = param_6[2];
        uVar12 = param_6[5];
        uVar11 = param_6[4];
        lVar10 = 0x30;
        uVar15 = param_6[1];
        uVar14 = *param_6;
        puVar5[3] = param_6[3];
        puVar5[2] = uVar13;
        puVar5[5] = uVar12;
        puVar5[4] = uVar11;
        puVar5[1] = uVar15;
        *puVar5 = uVar14;
        *puVar7 = puVar5;
      }
      if (param_5 != (char *)0x0) {
        pvVar8 = (void *)((long)puVar5 + lVar10);
        memcpy(pvVar8,param_5,sVar4);
        lVar10 = lVar10 + sVar4;
        *(void **)(param_2 + 0x88) = pvVar8;
      }
      if (param_4 != (char *)0x0) {
        memcpy((void *)((long)puVar5 + lVar10),param_4,sVar3);
        *(void **)(param_2 + 0x80) = (void *)((long)puVar5 + lVar10);
      }
      if (param_3 == 0) {
        iVar2 = getaddrinfo(*(char **)(param_2 + 0x80),*(char **)(param_2 + 0x88),
                            *(addrinfo **)(param_2 + 0x78),(addrinfo **)(param_2 + 0x90));
        switch(iVar2) {
        case 0:
          break;
        case 1:
          iVar2 = -3000;
          break;
        case 2:
          iVar2 = -0xbb9;
          break;
        case 3:
          iVar2 = -0xbba;
          break;
        case 4:
          iVar2 = -0xbbc;
          break;
        case 5:
          iVar2 = -0xbbd;
          break;
        case 6:
          iVar2 = -0xbbe;
          break;
        case 7:
          iVar2 = -0xbbf;
          break;
        case 8:
          iVar2 = -0xbc0;
          break;
        case 9:
          iVar2 = -0xbc2;
          break;
        case 10:
          iVar2 = -0xbc3;
          break;
        case 0xb:
          piVar6 = (int *)__errno();
          iVar2 = -*piVar6;
          break;
        case 0xc:
          iVar2 = -0xbc5;
          break;
        case 0xd:
          iVar2 = -0xbc6;
          break;
        case 0xe:
          iVar2 = -0xbc1;
          break;
        default:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(int *)(param_2 + 0x98) = iVar2;
        **(undefined8 **)(param_2 + 0x18) = *(undefined8 *)(param_2 + 0x10);
        *(undefined8 *)(*(long *)(param_2 + 0x10) + 8) = *(undefined8 *)(param_2 + 0x18);
        pvVar8 = *(void **)(param_2 + 0x78);
        if (((pvVar8 != (void *)0x0) || (pvVar8 = *(void **)(param_2 + 0x88), pvVar8 != (void *)0x0)
            ) || (pvVar8 = *(void **)(param_2 + 0x80), pvVar8 != (void *)0x0)) {
          free(pvVar8);
        }
        *puVar7 = 0;
        *(undefined8 *)(param_2 + 0x80) = 0;
        *(undefined8 *)(param_2 + 0x88) = 0;
        if (*(code **)(param_2 + 0x70) != (code *)0x0) {
          (**(code **)(param_2 + 0x70))
                    (param_2,*(undefined4 *)(param_2 + 0x98),*(undefined8 *)(param_2 + 0x90));
        }
        uVar1 = *(undefined4 *)(param_2 + 0x98);
      }
      else {
        FUN_005ccf1c(param_1,param_2 + 0x48,FUN_005cf128,FUN_005cf1f4);
        uVar1 = 0;
      }
    }
    return uVar1;
  }
  return 0xffffffea;
}


// ===== 005cf128  FUN_005cf128 =====

void FUN_005cf128(long param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = getaddrinfo(*(char **)(param_1 + 0x38),*(char **)(param_1 + 0x40),
                      *(addrinfo **)(param_1 + 0x30),(addrinfo **)(param_1 + 0x48));
  switch(iVar1) {
  case 0:
    break;
  case 1:
    iVar1 = -3000;
    break;
  case 2:
    iVar1 = -0xbb9;
    break;
  case 3:
    iVar1 = -0xbba;
    break;
  case 4:
    iVar1 = -0xbbc;
    break;
  case 5:
    iVar1 = -0xbbd;
    break;
  case 6:
    iVar1 = -0xbbe;
    break;
  case 7:
    iVar1 = -0xbbf;
    break;
  case 8:
    iVar1 = -0xbc0;
    break;
  case 9:
    iVar1 = -0xbc2;
    break;
  case 10:
    iVar1 = -0xbc3;
    break;
  case 0xb:
    piVar2 = (int *)__errno();
    iVar1 = -*piVar2;
    break;
  case 0xc:
    iVar1 = -0xbc5;
    break;
  case 0xd:
    iVar1 = -0xbc6;
    break;
  case 0xe:
    iVar1 = -0xbc1;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(int *)(param_1 + 0x50) = iVar1;
  return;
}


// ===== 005cf1f4  FUN_005cf1f4 =====

void FUN_005cf1f4(long param_1,int param_2)

{
  void *__ptr;
  
  **(undefined8 **)(param_1 + -0x30) = *(undefined8 *)(param_1 + -0x38);
  *(undefined8 *)(*(long *)(param_1 + -0x38) + 8) = *(undefined8 *)(param_1 + -0x30);
  __ptr = *(void **)(param_1 + 0x30);
  if (((__ptr != (void *)0x0) || (__ptr = *(void **)(param_1 + 0x40), __ptr != (void *)0x0)) ||
     (__ptr = *(void **)(param_1 + 0x38), __ptr != (void *)0x0)) {
    free(__ptr);
  }
  *(long *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (param_2 == -0x7d) {
    *(undefined4 *)(param_1 + 0x50) = 0xfffff445;
  }
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005cf274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x28))
              (param_1 + -0x48,*(undefined4 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x48));
    return;
  }
  return;
}


// ===== 005cf288  FUN_005cf288 =====

void FUN_005cf288(addrinfo *param_1)

{
  if (param_1 != (addrinfo *)0x0) {
    freeaddrinfo(param_1);
    return;
  }
  return;
}


// ===== 005cf294  FUN_005cf294 =====

void FUN_005cf294(long param_1)

{
  long ****pppplVar1;
  long lVar2;
  long ***ppplVar3;
  long ****pppplVar4;
  long ***local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  pppplVar1 = (long ****)(param_1 + 0x180);
  local_38 = *(long *)(lVar2 + 0x28);
  pppplVar4 = *(long *****)(param_1 + 0x180);
  if (pppplVar1 != pppplVar4) {
    local_40 = *(undefined8 **)(param_1 + 0x188);
    *local_40 = &local_48;
    ppplVar3 = pppplVar4[1];
    *(long ****)(param_1 + 0x188) = ppplVar3;
    *ppplVar3 = (long **)pppplVar1;
    pppplVar4[1] = (long ***)&local_48;
    local_48 = (long ***)pppplVar4;
    while (&local_48 != (long ****)local_48) {
      *((long ****)local_48)[1] = *local_48;
      (*local_48)[1] = (long *)((long ****)local_48)[1];
      *local_48 = (long **)pppplVar1;
      ppplVar3 = *(long ****)(param_1 + 0x188);
      ((long ****)local_48)[1] = ppplVar3;
      *ppplVar3 = (long **)local_48;
      *(long ****)(param_1 + 0x188) = local_48;
      (*(code *)((long ****)local_48)[-1])((long ****)local_48 + -0xd);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 005cf35c  FUN_005cf35c =====

void FUN_005cf35c(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if ((uVar1 >> 0xe & 1) != 0) {
    *(uint *)(param_1 + 0x58) = uVar1 & 0xffffbfff;
    **(undefined8 **)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(*(long *)(param_1 + 0x68) + 8) = *(undefined8 *)(param_1 + 0x70);
    if ((uVar1 >> 0xd & 1) != 0) {
      *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
    }
  }
  return;
}


// ===== 005cf394  FUN_005cf394 =====

void FUN_005cf394(long param_1)

{
  long ****pppplVar1;
  long lVar2;
  long ***ppplVar3;
  long ****pppplVar4;
  long ***local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  pppplVar1 = (long ****)(param_1 + 400);
  local_38 = *(long *)(lVar2 + 0x28);
  pppplVar4 = *(long *****)(param_1 + 400);
  if (pppplVar1 != pppplVar4) {
    local_40 = *(undefined8 **)(param_1 + 0x198);
    *local_40 = &local_48;
    ppplVar3 = pppplVar4[1];
    *(long ****)(param_1 + 0x198) = ppplVar3;
    *ppplVar3 = (long **)pppplVar1;
    pppplVar4[1] = (long ***)&local_48;
    local_48 = (long ***)pppplVar4;
    while (&local_48 != (long ****)local_48) {
      *((long ****)local_48)[1] = *local_48;
      (*local_48)[1] = (long *)((long ****)local_48)[1];
      *local_48 = (long **)pppplVar1;
      ppplVar3 = *(long ****)(param_1 + 0x198);
      ((long ****)local_48)[1] = ppplVar3;
      *ppplVar3 = (long **)local_48;
      *(long ****)(param_1 + 0x198) = local_48;
      (*(code *)((long ****)local_48)[-1])((long ****)local_48 + -0xd);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 005cf45c  FUN_005cf45c =====

void FUN_005cf45c(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if ((uVar1 >> 0xe & 1) != 0) {
    *(uint *)(param_1 + 0x58) = uVar1 & 0xffffbfff;
    **(undefined8 **)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(*(long *)(param_1 + 0x68) + 8) = *(undefined8 *)(param_1 + 0x70);
    if ((uVar1 >> 0xd & 1) != 0) {
      *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
    }
  }
  return;
}


// ===== 005cf494  FUN_005cf494 =====

void FUN_005cf494(long param_1)

{
  long ****pppplVar1;
  long lVar2;
  long ***ppplVar3;
  long ****pppplVar4;
  long ***local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  pppplVar1 = (long ****)(param_1 + 0x1a0);
  local_38 = *(long *)(lVar2 + 0x28);
  pppplVar4 = *(long *****)(param_1 + 0x1a0);
  if (pppplVar1 != pppplVar4) {
    local_40 = *(undefined8 **)(param_1 + 0x1a8);
    *local_40 = &local_48;
    ppplVar3 = pppplVar4[1];
    *(long ****)(param_1 + 0x1a8) = ppplVar3;
    *ppplVar3 = (long **)pppplVar1;
    pppplVar4[1] = (long ***)&local_48;
    local_48 = (long ***)pppplVar4;
    while (&local_48 != (long ****)local_48) {
      *((long ****)local_48)[1] = *local_48;
      (*local_48)[1] = (long *)((long ****)local_48)[1];
      *local_48 = (long **)pppplVar1;
      ppplVar3 = *(long ****)(param_1 + 0x1a8);
      ((long ****)local_48)[1] = ppplVar3;
      *ppplVar3 = (long **)local_48;
      *(long ****)(param_1 + 0x1a8) = local_48;
      (*(code *)((long ****)local_48)[-1])((long ****)local_48 + -0xd);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 005cf55c  FUN_005cf55c =====

void FUN_005cf55c(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if ((uVar1 >> 0xe & 1) != 0) {
    *(uint *)(param_1 + 0x58) = uVar1 & 0xffffbfff;
    **(undefined8 **)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(*(long *)(param_1 + 0x68) + 8) = *(undefined8 *)(param_1 + 0x70);
    if ((uVar1 >> 0xd & 1) != 0) {
      *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
    }
  }
  return;
}


// ===== 005cf594  FUN_005cf594 =====

int FUN_005cf594(void *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  
  FUN_005cf9a8();
  memset(param_1,0,0x350);
  *(long *)((long)param_1 + 0x78) = (long)param_1 + 0x78;
  *(long *)((long)param_1 + 0x80) = (long)param_1 + 0x78;
  *(undefined8 *)((long)param_1 + 0x68) = 0;
  *(undefined8 *)((long)param_1 + 0x70) = 0;
  *(long *)((long)param_1 + 0x20) = (long)param_1 + 0x20;
  *(long *)((long)param_1 + 0x28) = (long)param_1 + 0x20;
  *(long *)((long)param_1 + 0x1a0) = (long)param_1 + 0x1a0;
  *(long *)((long)param_1 + 0x1a8) = (long)param_1 + 0x1a0;
  *(long *)((long)param_1 + 0x1b0) = (long)param_1 + 0x1b0;
  *(long *)((long)param_1 + 0x1b8) = (long)param_1 + 0x1b0;
  *(long *)((long)param_1 + 400) = (long)param_1 + 400;
  *(long *)((long)param_1 + 0x198) = (long)param_1 + 400;
  *(long *)((long)param_1 + 0x180) = (long)param_1 + 0x180;
  *(long *)((long)param_1 + 0x188) = (long)param_1 + 0x180;
  *(long *)((long)param_1 + 0x10) = (long)param_1 + 0x10;
  *(long *)((long)param_1 + 0x18) = (long)param_1 + 0x10;
  *(long *)((long)param_1 + 0x48) = (long)param_1 + 0x48;
  *(long *)((long)param_1 + 0x50) = (long)param_1 + 0x48;
  *(long *)((long)param_1 + 0x58) = (long)param_1 + 0x58;
  *(long *)((long)param_1 + 0x60) = (long)param_1 + 0x58;
  uVar4 = FUN_005d1f80(1);
  *(ulong *)((long)param_1 + 0x220) = uVar4 / 1000000;
  FUN_005ce204((long)param_1 + 0x1c0);
  *(undefined8 *)((long)param_1 + 0x218) = 0;
  *(undefined4 *)((long)param_1 + 0x30) = 0;
  *(undefined4 *)((long)param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x300) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x228) = 0xffffffffffffffff;
  iVar3 = FUN_005d1994(param_1);
  if (iVar3 == 0) {
    iVar3 = FUN_005d0070(param_1,(long)param_1 + 0x268);
    if (iVar3 == 0) {
      uVar5 = *(uint *)((long)param_1 + 0x2c0);
      if (((uVar5 >> 0xd & 1) != 0) &&
         (uVar1 = uVar5 & 0xffffdfff, uVar2 = uVar5 >> 0xe, uVar5 = uVar1, (uVar2 & 1) != 0)) {
        *(int *)(*(long *)((long)param_1 + 0x270) + 8) =
             *(int *)(*(long *)((long)param_1 + 0x270) + 8) + -1;
      }
      *(uint *)((long)param_1 + 0x2c0) = uVar5 | 0x8000;
      *(long *)((long)param_1 + 0x170) = (long)param_1 + 0x170;
      *(long *)((long)param_1 + 0x178) = (long)param_1 + 0x170;
      iVar3 = FUN_005d0748((long)param_1 + 0x130);
      if (iVar3 == 0) {
        iVar3 = FUN_005d06d8((long)param_1 + 0x88);
        if (iVar3 == 0) {
          iVar3 = FUN_005cdda4(param_1,(long)param_1 + 0xb0,PTR_FUN_00d51ed8);
          if (iVar3 == 0) {
            uVar5 = *(uint *)((long)param_1 + 0x108);
            if (((uVar5 >> 0xd & 1) != 0) &&
               (uVar1 = uVar5 & 0xffffdfff, uVar2 = uVar5 >> 0xe, uVar5 = uVar1, (uVar2 & 1) != 0))
            {
              *(int *)(*(long *)((long)param_1 + 0xb8) + 8) =
                   *(int *)(*(long *)((long)param_1 + 0xb8) + 8) + -1;
            }
            *(uint *)((long)param_1 + 0x108) = uVar5 | 0x8000;
            return 0;
          }
          FUN_005d06f4((long)param_1 + 0x88);
        }
        FUN_005d0764((long)param_1 + 0x130);
      }
      FUN_005cfa48(param_1);
    }
    FUN_005d1a30(param_1);
  }
  return iVar3;
}


// ===== 005cf75c  FUN_005cf75c =====

void FUN_005cf75c(long param_1)

{
  long lVar1;
  
  FUN_005cfa48();
  FUN_005d1a30(param_1);
  FUN_005ce2f4(param_1,param_1 + 0x1c0);
  if (*(int *)(param_1 + 0x300) != -1) {
    FUN_005ce9d0();
    *(undefined4 *)(param_1 + 0x300) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x40) != -1) {
    FUN_005ce9d0();
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  }
  lVar1 = param_1 + 0x88;
  FUN_005d0710(lVar1);
  FUN_005d072c(lVar1);
  FUN_005d06f4(lVar1);
  FUN_005d0764(param_1 + 0x130);
  free(*(void **)(param_1 + 0x68));
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}


// ===== 005cf7f4  FUN_005cf7f4 =====

void FUN_005cf7f4(long param_1)

{
  if (*(char **)(param_1 + 0x100) != (char *)0x0) {
    unlink(*(char **)(param_1 + 0x100));
    free(*(void **)(param_1 + 0x100));
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  FUN_005d04e8(param_1);
  return;
}


// ===== 005cf82c  FUN_005cf82c =====

void FUN_005cf82c(long param_1)

{
  uint uVar1;
  
  FUN_005ced14(*(undefined8 *)(param_1 + 8),param_1 + 0x68,0x2005);
  uVar1 = *(uint *)(param_1 + 0x58);
  if (((uVar1 >> 0xe & 1) != 0) &&
     (*(uint *)(param_1 + 0x58) = uVar1 & 0xffffbfff, (uVar1 >> 0xd & 1) != 0)) {
    *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
  }
  return;
}


// ===== 005cf87c  FUN_005cf87c =====

ulong FUN_005cf87c(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  
  if ((DAT_00d63f8c & 1) == 0) {
    uVar2 = FUN_005d25dc(param_1,param_2 | 0x80000);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    piVar3 = (int *)__errno();
    iVar1 = *piVar3;
    if (iVar1 != 0x26) goto LAB_005cf8dc;
    DAT_00d63f8c = 1;
  }
  iVar1 = pipe(param_1);
  if (iVar1 == 0) {
    FUN_005ce970(*param_1,1);
    FUN_005ce970(param_1[1],1);
    if ((param_2 >> 0xb & 1) != 0) {
      FUN_005ce8ec(*param_1,1);
      FUN_005ce8ec(param_1[1],1);
    }
    return 0;
  }
  piVar3 = (int *)__errno();
  iVar1 = *piVar3;
LAB_005cf8dc:
  return (ulong)(uint)-iVar1;
}


// ===== 005cf92c  FUN_005cf92c =====

void FUN_005cf92c(long param_1)

{
  uint uVar1;
  long lVar2;
  
  **(undefined8 **)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
  uVar1 = *(uint *)(param_1 + 0x58);
  *(undefined8 *)(*(long *)(param_1 + 0x70) + 8) = *(undefined8 *)(param_1 + 0x78);
  if (((uVar1 >> 0xe & 1) != 0) &&
     (*(uint *)(param_1 + 0x58) = uVar1 & 0xffffbfff, (uVar1 >> 0xd & 1) != 0)) {
    *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
  }
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 + 0x170 != *(long *)(lVar2 + 0x170)) {
    return;
  }
  FUN_005d01f4(lVar2 + 0x268);
  return;
}


// ===== 005cf980  _FINI_3 =====

void _FINI_3(void)

{
  free(DAT_00d63fa0);
  DAT_00d63fa0 = (void *)0x0;
  return;
}


// ===== 005cf9a8  FUN_005cf9a8 =====

int FUN_005cf9a8(void)

{
  int iVar1;
  
  iVar1 = pthread_once((pthread_once_t *)&DAT_00d63fa8,FUN_005cf9bc);
  return iVar1;
}


// ===== 005cf9bc  FUN_005cf9bc =====

void FUN_005cf9bc(void)

{
  long lVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  undefined1 local_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_005cf87c(&DAT_00d63fb8,0);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_2c[0] = 0x2a;
  do {
    sVar3 = write(DAT_00d63fbc,local_2c,1);
    if (-1 < (int)sVar3) {
      if (*(long *)(lVar1 + 0x28) == local_28) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar4 = (int *)__errno();
  } while (*piVar4 == 4);
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 005cfa48  FUN_005cfa48 =====

void FUN_005cfa48(long param_1)

{
  undefined8 *puVar1;
  
  for (puVar1 = *(undefined8 **)(param_1 + 0x10); puVar1 != (undefined8 *)(param_1 + 0x10);
      puVar1 = (undefined8 *)*puVar1) {
    if (*(int *)(puVar1 + -2) == 0x10) {
      FUN_005cfacc(puVar1 + -4);
    }
  }
  if (*(int *)(param_1 + 0x228) != -1) {
    FUN_005ce9d0();
    *(undefined4 *)(param_1 + 0x228) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x22c) != -1) {
    FUN_005ce9d0();
    *(undefined4 *)(param_1 + 0x22c) = 0xffffffff;
  }
  return;
}


// ===== 005cfacc  FUN_005cfacc =====

void FUN_005cfacc(__sighandler_t param_1)

{
  uint uVar1;
  long lVar2;
  _union_1457 *p_Var3;
  int iVar4;
  ssize_t sVar5;
  int *piVar6;
  _union_1457 *p_Var7;
  _union_1457 *p_Var8;
  __sighandler_t p_Var9;
  _union_1457 *p_Var10;
  undefined8 *puVar11;
  code *pcVar12;
  long lVar13;
  _union_1457 *p_Var14;
  _union_1457 *p_Var15;
  __sighandler_t p_Var16;
  _union_1457 _Var17;
  _union_1457 _Var18;
  undefined1 auStack_d8 [8];
  _union_1457 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  int local_68;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(int *)(param_1 + 0x68) == 0) goto LAB_005cffb4;
  FUN_005d015c(auStack_d8);
  p_Var15 = *(_union_1457 **)(param_1 + 0x70);
  p_Var14 = *(_union_1457 **)(param_1 + 0x78);
  if (p_Var15 == (_union_1457 *)0x0) {
    p_Var8 = *(_union_1457 **)(param_1 + 0x80);
    iVar4 = *(int *)(param_1 + 0x88);
    if (p_Var14 != (_union_1457 *)0x0) goto LAB_005cfb80;
    if (p_Var8 != (_union_1457 *)0x0) goto LAB_005cfb5c;
LAB_005cfb88:
    p_Var15 = (_union_1457 *)&DAT_00d63fb0;
LAB_005cfb90:
    p_Var15->sa_handler = (__sighandler_t)p_Var14;
  }
  else {
    if (p_Var14 == (_union_1457 *)0x0) {
      p_Var8 = *(_union_1457 **)(param_1 + 0x80);
      iVar4 = *(int *)(param_1 + 0x88);
      p_Var14 = p_Var15;
LAB_005cfb80:
      p_Var14[0x10].sa_handler = (__sighandler_t)p_Var8;
      if (p_Var8 == (_union_1457 *)0x0) goto LAB_005cfb88;
LAB_005cfb5c:
      p_Var15 = p_Var8 + 0xe;
      if (p_Var8[0xe].sa_handler != param_1) {
        p_Var15 = p_Var8 + 0xf;
      }
      goto LAB_005cfb90;
    }
    do {
      p_Var15 = p_Var14;
      p_Var14 = (_union_1457 *)p_Var15[0xe].sa_handler;
    } while ((_union_1457 *)p_Var15[0xe].sa_handler != (_union_1457 *)0x0);
    p_Var14 = (_union_1457 *)p_Var15[0xf].sa_handler;
    p_Var7 = (_union_1457 *)p_Var15[0x10].sa_handler;
    iVar4 = *(int *)(p_Var15 + 0x11);
    if (p_Var14 != (_union_1457 *)0x0) {
      p_Var14[0x10].sa_handler = (__sighandler_t)p_Var7;
    }
    if (p_Var7 == (_union_1457 *)0x0) {
      p_Var8 = (_union_1457 *)&DAT_00d63fb0;
    }
    else {
      p_Var8 = p_Var7 + 0xe;
      if ((_union_1457 *)p_Var7[0xe].sa_handler != p_Var15) {
        p_Var8 = p_Var7 + 0xf;
      }
    }
    p_Var8->sa_handler = (__sighandler_t)p_Var14;
    p_Var16 = *(__sighandler_t *)(param_1 + 0x70);
    _Var18 = *(_union_1457 *)(param_1 + 0x88);
    _Var17 = *(_union_1457 *)(param_1 + 0x80);
    p_Var9 = p_Var15[0x10].sa_handler;
    p_Var15[0xf] = *(_union_1457 *)(param_1 + 0x78);
    p_Var15[0xe].sa_handler = p_Var16;
    p_Var15[0x11] = _Var18;
    p_Var15[0x10] = _Var17;
    lVar13 = *(long *)(param_1 + 0x80);
    p_Var8 = p_Var15;
    if (p_Var9 != param_1) {
      p_Var8 = p_Var7;
    }
    if (lVar13 == 0) {
      puVar11 = &DAT_00d63fb0;
    }
    else {
      puVar11 = (undefined8 *)(lVar13 + 0x70);
      if (*(__sighandler_t *)(lVar13 + 0x70) != param_1) {
        puVar11 = (undefined8 *)(lVar13 + 0x78);
      }
    }
    *puVar11 = p_Var15;
    *(_union_1457 **)(*(long *)(param_1 + 0x70) + 0x80) = p_Var15;
    p_Var7 = p_Var8;
    if (*(long *)(param_1 + 0x78) != 0) {
      *(_union_1457 **)(*(long *)(param_1 + 0x78) + 0x80) = p_Var15;
    }
    for (; p_Var7 != (_union_1457 *)0x0; p_Var7 = (_union_1457 *)p_Var7[0x10].sa_handler) {
    }
  }
  p_Var15 = DAT_00d63fb0;
  if (iVar4 == 0) {
    do {
      if (p_Var14 == (_union_1457 *)0x0) {
        if (p_Var15 == (_union_1457 *)0x0) break;
      }
      else if ((*(int *)(p_Var14 + 0x11) != 0) || (p_Var14 == p_Var15)) goto LAB_005cfeb0;
      p_Var10 = (_union_1457 *)p_Var8[0xe].sa_handler;
      p_Var7 = p_Var15;
      if (p_Var10 == p_Var14) {
        p_Var10 = (_union_1457 *)p_Var8[0xf].sa_handler;
        p_Var14 = p_Var10;
        if (*(int *)(p_Var10 + 0x11) == 1) {
          *(undefined4 *)(p_Var10 + 0x11) = 0;
          *(undefined4 *)(p_Var8 + 0x11) = 1;
          p_Var14 = (_union_1457 *)p_Var10[0xe].sa_handler;
          p_Var8[0xf].sa_handler = (__sighandler_t)p_Var14;
          if (p_Var14 != (_union_1457 *)0x0) {
            p_Var14[0x10].sa_handler = (__sighandler_t)p_Var8;
          }
          p_Var9 = p_Var8[0x10].sa_handler;
          p_Var10[0x10].sa_handler = p_Var9;
          p_Var7 = p_Var10;
          p_Var3 = p_Var10;
          if (p_Var9 != (__sighandler_t)0x0) {
            p_Var9 = p_Var8[0x10].sa_handler;
            if (p_Var8 == *(_union_1457 **)(p_Var9 + 0x70)) {
              *(_union_1457 **)(p_Var9 + 0x70) = p_Var10;
              p_Var7 = p_Var15;
              p_Var3 = DAT_00d63fb0;
            }
            else {
              *(_union_1457 **)(p_Var9 + 0x78) = p_Var10;
              p_Var14 = (_union_1457 *)p_Var8[0xf].sa_handler;
              p_Var7 = p_Var15;
              p_Var3 = DAT_00d63fb0;
            }
          }
          DAT_00d63fb0 = p_Var3;
          p_Var10[0xe].sa_handler = (__sighandler_t)p_Var8;
          p_Var8[0x10].sa_handler = (__sighandler_t)p_Var10;
        }
        p_Var15 = (_union_1457 *)p_Var14[0xe].sa_handler;
        if ((p_Var15 == (_union_1457 *)0x0) || (*(int *)(p_Var15 + 0x11) == 0)) {
          p_Var9 = p_Var14[0xf].sa_handler;
          if ((p_Var9 == (__sighandler_t)0x0) || (*(int *)(p_Var9 + 0x88) == 0)) goto LAB_005cfc18;
LAB_005cfd98:
          *(undefined4 *)(p_Var14 + 0x11) = *(undefined4 *)(p_Var8 + 0x11);
          *(undefined4 *)(p_Var8 + 0x11) = 0;
LAB_005d0008:
          *(undefined4 *)(p_Var9 + 0x88) = 0;
        }
        else {
          p_Var9 = p_Var14[0xf].sa_handler;
          if ((p_Var9 != (__sighandler_t)0x0) && (*(int *)(p_Var9 + 0x88) != 0)) goto LAB_005cfd98;
          *(undefined4 *)(p_Var15 + 0x11) = 0;
          *(undefined4 *)(p_Var14 + 0x11) = 1;
          p_Var9 = p_Var15[0xf].sa_handler;
          p_Var14[0xe].sa_handler = p_Var9;
          if (p_Var9 != (__sighandler_t)0x0) {
            *(_union_1457 **)(p_Var9 + 0x80) = p_Var14;
          }
          p_Var9 = p_Var14[0x10].sa_handler;
          p_Var15[0x10].sa_handler = p_Var9;
          if (p_Var9 == (__sighandler_t)0x0) {
            p_Var7 = p_Var15;
            pcVar12 = (code *)&DAT_00d63fb0;
          }
          else {
            pcVar12 = p_Var14[0x10].sa_handler + 0x70;
            if (p_Var14 != *(_union_1457 **)pcVar12) {
              pcVar12 = p_Var14[0x10].sa_handler + 0x78;
            }
          }
          *(_union_1457 **)pcVar12 = p_Var15;
          p_Var15[0xf].sa_handler = (__sighandler_t)p_Var14;
          p_Var14[0x10].sa_handler = (__sighandler_t)p_Var15;
          p_Var14 = (_union_1457 *)p_Var8[0xf].sa_handler;
          p_Var9 = p_Var14[0xf].sa_handler;
          *(undefined4 *)(p_Var14 + 0x11) = *(undefined4 *)(p_Var8 + 0x11);
          *(undefined4 *)(p_Var8 + 0x11) = 0;
          if (p_Var9 != (__sighandler_t)0x0) goto LAB_005d0008;
        }
        p_Var9 = p_Var14[0xe].sa_handler;
        p_Var8[0xf].sa_handler = p_Var9;
        if (p_Var9 != (__sighandler_t)0x0) {
          *(_union_1457 **)(p_Var9 + 0x80) = p_Var8;
        }
        p_Var9 = p_Var8[0x10].sa_handler;
        p_Var14[0x10].sa_handler = p_Var9;
        if (p_Var9 == (__sighandler_t)0x0) {
          p_Var7 = p_Var14;
          pcVar12 = (code *)&DAT_00d63fb0;
        }
        else {
          pcVar12 = p_Var8[0x10].sa_handler + 0x70;
          if (p_Var8 != *(_union_1457 **)pcVar12) {
            pcVar12 = p_Var8[0x10].sa_handler + 0x78;
          }
        }
        *(_union_1457 **)pcVar12 = p_Var14;
        p_Var14[0xe].sa_handler = (__sighandler_t)p_Var8;
        p_Var8[0x10].sa_handler = (__sighandler_t)p_Var14;
        p_Var14 = p_Var7;
        goto joined_r0x005d005c;
      }
      p_Var14 = p_Var10;
      if (*(int *)(p_Var10 + 0x11) == 1) {
        *(undefined4 *)(p_Var10 + 0x11) = 0;
        *(undefined4 *)(p_Var8 + 0x11) = 1;
        p_Var14 = (_union_1457 *)p_Var10[0xf].sa_handler;
        p_Var8[0xe].sa_handler = (__sighandler_t)p_Var14;
        if (p_Var14 != (_union_1457 *)0x0) {
          p_Var14[0x10].sa_handler = (__sighandler_t)p_Var8;
        }
        p_Var9 = p_Var8[0x10].sa_handler;
        p_Var10[0x10].sa_handler = p_Var9;
        p_Var7 = p_Var10;
        p_Var3 = p_Var10;
        if (p_Var9 != (__sighandler_t)0x0) {
          p_Var9 = p_Var8[0x10].sa_handler;
          if (p_Var8 == *(_union_1457 **)(p_Var9 + 0x70)) {
            *(_union_1457 **)(p_Var9 + 0x70) = p_Var10;
            p_Var14 = (_union_1457 *)p_Var8[0xe].sa_handler;
            p_Var7 = p_Var15;
            p_Var3 = DAT_00d63fb0;
          }
          else {
            *(_union_1457 **)(p_Var9 + 0x78) = p_Var10;
            p_Var7 = p_Var15;
            p_Var3 = DAT_00d63fb0;
          }
        }
        DAT_00d63fb0 = p_Var3;
        p_Var10[0xf].sa_handler = (__sighandler_t)p_Var8;
        p_Var8[0x10].sa_handler = (__sighandler_t)p_Var10;
      }
      p_Var9 = p_Var14[0xe].sa_handler;
      if ((p_Var9 != (__sighandler_t)0x0) && (*(int *)(p_Var9 + 0x88) != 0)) goto LAB_005cfd78;
      p_Var15 = (_union_1457 *)p_Var14[0xf].sa_handler;
      if ((p_Var15 != (_union_1457 *)0x0) && (*(int *)(p_Var15 + 0x11) != 0)) goto LAB_005cfd6c;
LAB_005cfc18:
      *(undefined4 *)(p_Var14 + 0x11) = 1;
      p_Var14 = p_Var8;
      p_Var15 = p_Var7;
      p_Var8 = (_union_1457 *)p_Var8[0x10].sa_handler;
    } while( true );
  }
  goto LAB_005cfeb4;
LAB_005cfd6c:
  if ((p_Var9 == (__sighandler_t)0x0) || (*(int *)(p_Var9 + 0x88) == 0)) {
    *(undefined4 *)(p_Var15 + 0x11) = 0;
    *(undefined4 *)(p_Var14 + 0x11) = 1;
    p_Var9 = p_Var15[0xe].sa_handler;
    p_Var14[0xf].sa_handler = p_Var9;
    if (p_Var9 != (__sighandler_t)0x0) {
      *(_union_1457 **)(p_Var9 + 0x80) = p_Var14;
    }
    p_Var9 = p_Var14[0x10].sa_handler;
    p_Var15[0x10].sa_handler = p_Var9;
    if (p_Var9 == (__sighandler_t)0x0) {
      p_Var7 = p_Var15;
      pcVar12 = (code *)&DAT_00d63fb0;
    }
    else {
      pcVar12 = p_Var14[0x10].sa_handler + 0x70;
      if (p_Var14 != *(_union_1457 **)pcVar12) {
        pcVar12 = p_Var14[0x10].sa_handler + 0x78;
      }
    }
    *(_union_1457 **)pcVar12 = p_Var15;
    p_Var15[0xe].sa_handler = (__sighandler_t)p_Var14;
    p_Var14[0x10].sa_handler = (__sighandler_t)p_Var15;
    p_Var14 = (_union_1457 *)p_Var8[0xe].sa_handler;
    p_Var9 = p_Var14[0xe].sa_handler;
    *(undefined4 *)(p_Var14 + 0x11) = *(undefined4 *)(p_Var8 + 0x11);
    *(undefined4 *)(p_Var8 + 0x11) = 0;
    if (p_Var9 != (__sighandler_t)0x0) goto LAB_005cfe58;
  }
  else {
LAB_005cfd78:
    *(undefined4 *)(p_Var14 + 0x11) = *(undefined4 *)(p_Var8 + 0x11);
    *(undefined4 *)(p_Var8 + 0x11) = 0;
LAB_005cfe58:
    *(undefined4 *)(p_Var9 + 0x88) = 0;
  }
  p_Var9 = p_Var14[0xf].sa_handler;
  p_Var8[0xe].sa_handler = p_Var9;
  if (p_Var9 != (__sighandler_t)0x0) {
    *(_union_1457 **)(p_Var9 + 0x80) = p_Var8;
  }
  p_Var9 = p_Var8[0x10].sa_handler;
  p_Var14[0x10].sa_handler = p_Var9;
  if (p_Var9 == (__sighandler_t)0x0) {
    p_Var7 = p_Var14;
    pcVar12 = (code *)&DAT_00d63fb0;
  }
  else {
    pcVar12 = p_Var8[0x10].sa_handler + 0x70;
    if (p_Var8 != *(_union_1457 **)pcVar12) {
      pcVar12 = p_Var8[0x10].sa_handler + 0x78;
    }
  }
  *(_union_1457 **)pcVar12 = p_Var14;
  p_Var14[0xf].sa_handler = (__sighandler_t)p_Var8;
  p_Var8[0x10].sa_handler = (__sighandler_t)p_Var14;
  p_Var14 = p_Var7;
joined_r0x005d005c:
  if (p_Var14 != (_union_1457 *)0x0) {
LAB_005cfeb0:
    *(undefined4 *)(p_Var14 + 0x11) = 0;
  }
LAB_005cfeb4:
  local_68 = *(int *)(param_1 + 0x68);
  uStack_c8 = 0;
  if (DAT_00d63fb0 == (_union_1457 *)0x0) {
LAB_005cff2c:
    uStack_c8 = 0;
    local_d0.sa_handler = (__sighandler_t)0x0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    iVar4 = sigaction(local_68,(sigaction *)&local_d0,(sigaction *)0x0);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    p_Var15 = (_union_1457 *)0x0;
    p_Var14 = DAT_00d63fb0;
    do {
      while (p_Var8 = p_Var14, iVar4 = *(int *)(p_Var8 + 0xd), iVar4 <= local_68) {
        if (local_68 <= iVar4) {
          if ((p_Var8[1].sa_handler != (__sighandler_t)0x0) || (&local_d0 < p_Var8)) break;
          if (&local_d0 <= p_Var8) goto LAB_005cff24;
        }
        p_Var7 = p_Var8 + 0xf;
        p_Var8 = p_Var15;
        p_Var14 = (_union_1457 *)p_Var7->sa_handler;
        if ((_union_1457 *)p_Var7->sa_handler == (_union_1457 *)0x0) goto LAB_005cff1c;
      }
      p_Var15 = p_Var8;
      p_Var14 = (_union_1457 *)p_Var8[0xe].sa_handler;
    } while ((_union_1457 *)p_Var8[0xe].sa_handler != (_union_1457 *)0x0);
LAB_005cff1c:
    if (p_Var8 == (_union_1457 *)0x0) goto LAB_005cff2c;
    iVar4 = *(int *)(p_Var8 + 0xd);
LAB_005cff24:
    if (iVar4 != local_68) goto LAB_005cff2c;
  }
  local_d0._0_1_ = 0x2a;
  while (sVar5 = write(DAT_00d63fbc,&local_d0,1), (int)sVar5 < 0) {
    piVar6 = (int *)__errno();
    if (*piVar6 != 4) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  iVar4 = FUN_005d25fc(2,auStack_d8,0);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar1 = *(uint *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (((uVar1 >> 0xe & 1) != 0) &&
     (*(uint *)(param_1 + 0x58) = uVar1 & 0xffffbfff, (uVar1 >> 0xd & 1) != 0)) {
    *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
  }
LAB_005cffb4:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005d0070  FUN_005d0070 =====

undefined8 FUN_005d0070(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  if (*(int *)(param_1 + 0x228) == -1) {
    uVar1 = FUN_005cf87c(param_1 + 0x228,0x800);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    FUN_005ceb8c(param_1 + 0x230,FUN_005d020c,*(undefined4 *)(param_1 + 0x228));
    FUN_005ceba8(param_1,param_1 + 0x230,1);
  }
  plVar3 = (long *)(param_2 + 0x20);
  *plVar3 = param_1 + 0x10;
  *(long *)(param_2 + 8) = param_1;
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  *(undefined4 *)(param_2 + 0x10) = 0x10;
  *(undefined4 *)(param_2 + 0x68) = 0;
  *(undefined4 *)(param_2 + 0x58) = 0x2000;
  *(undefined8 **)(param_2 + 0x28) = puVar2;
  *puVar2 = plVar3;
  *(long **)(param_1 + 0x18) = plVar3;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  return 0;
}


// ===== 005d0120  FUN_005d0120 =====

void FUN_005d0120(long param_1)

{
  FUN_005cfacc();
  if (*(int *)(param_1 + 0x90) == *(int *)(param_1 + 0x94)) {
    FUN_005ce480(param_1);
    return;
  }
  return;
}


// ===== 005d015c  FUN_005d015c =====

void FUN_005d015c(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  undefined1 auStack_34 [4];
  ulong local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(ulong *)(lVar1 + 0x28);
  iVar2 = sigfillset((sigset_t *)&stack0xffffffffffffffd0);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar2 = FUN_005d25fc(2,&stack0xffffffffffffffd0,param_1);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  do {
    sVar3 = read(DAT_00d63fb8,auStack_34,1);
    if (-1 < (int)sVar3) {
      if (*(ulong *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    piVar4 = (int *)__errno();
  } while (*piVar4 == 4);
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 005d01f4  FUN_005d01f4 =====

undefined8 FUN_005d01f4(void)

{
  FUN_005cfacc();
  return 0;
}


// ===== 005d020c  FUN_005d020c =====

void FUN_005d020c(long param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  ssize_t sVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long local_268;
  int local_260 [126];
  long local_68;
  
  lVar2 = tpidr_el0;
  uVar8 = 0;
  uVar6 = 0;
  local_68 = *(long *)(lVar2 + 0x28);
  do {
    sVar4 = read(*(int *)(param_1 + 0x228),(void *)((long)local_260 + (uVar6 - 8)),0x200 - uVar6);
    if ((int)sVar4 == -1) {
      piVar5 = (int *)__errno();
      if (*piVar5 != 4) {
        if (*piVar5 != 0xb) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (uVar6 == 0) break;
      }
    }
    else {
      uVar6 = uVar6 + (long)(int)sVar4;
      uVar8 = uVar6 & 0xfffffffffffffff0;
      if (uVar8 != 0) {
        uVar9 = 0;
        do {
          lVar7 = *(long *)((long)local_260 + (uVar9 - 8));
          if (*(int *)((long)local_260 + uVar9) == *(int *)(lVar7 + 0x68)) {
            (**(code **)(lVar7 + 0x60))(lVar7);
          }
          iVar1 = *(int *)(lVar7 + 0x94) + 1;
          *(int *)(lVar7 + 0x94) = iVar1;
          if (((*(byte *)(lVar7 + 0x58) & 1) != 0) && (*(int *)(lVar7 + 0x90) == iVar1)) {
            FUN_005ce480(lVar7);
          }
          uVar9 = uVar9 + 0x10;
        } while (uVar9 < uVar8);
      }
      uVar6 = uVar6 & 0xf;
      if (uVar6 != 0) {
        memmove(&local_268,(void *)((long)local_260 + (uVar8 - 8)),uVar6);
      }
    }
    bVar3 = uVar8 == 0x200;
    uVar8 = 0x200;
  } while (bVar3);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 005d0358  FUN_005d0358 =====

void FUN_005d0358(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar1 != 0) {
    **(undefined8 **)(lVar1 + 0x18) = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x78) + 0x10) + 8) =
         *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x18);
    (**(code **)(*(long *)(param_1 + 0x78) + 0x40))(*(long *)(param_1 + 0x78),0xffffff83);
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  plVar2 = (long *)(param_1 + 0xc0);
  plVar3 = (long *)*plVar2;
  if (plVar2 != plVar3) {
    do {
      *(undefined4 *)((long)plVar3 + 0x24) = 0xffffff83;
      *(long *)plVar3[1] = *plVar3;
      *(long *)(*plVar3 + 8) = plVar3[1];
      *plVar3 = param_1 + 0xd0;
      puVar4 = *(undefined8 **)(param_1 + 0xd8);
      plVar3[1] = (long)puVar4;
      *puVar4 = plVar3;
      *(long **)(param_1 + 0xd8) = plVar3;
      plVar3 = *(long **)(param_1 + 0xc0);
    } while (plVar2 != plVar3);
  }
  FUN_005d0428(param_1);
  lVar1 = *(long *)(param_1 + 0x80);
  if (lVar1 != 0) {
    **(undefined8 **)(lVar1 + 0x18) = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x80) + 0x10) + 8) =
         *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x18);
    (**(code **)(*(long *)(param_1 + 0x80) + 0x48))(*(long *)(param_1 + 0x80),0xffffff83);
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  return;
}


// ===== 005d0428  FUN_005d0428 =====

void FUN_005d0428(long param_1)

{
  long lVar1;
  long *__ptr;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)(param_1 + 0xd0);
  plVar3 = (long *)*plVar2;
  while (plVar2 != plVar3) {
    *(long *)plVar3[1] = *plVar3;
    *(long *)(*plVar3 + 8) = plVar3[1];
    *(long *)plVar3[-8] = plVar3[-9];
    *(long *)(plVar3[-9] + 8) = plVar3[-8];
    if (plVar3[3] != 0) {
      lVar1 = FUN_005cdc98(plVar3[3] + (ulong)*(uint *)(plVar3 + 2) * 0x10,
                           (int)plVar3[4] - *(uint *)(plVar3 + 2));
      __ptr = (long *)plVar3[3];
      *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) - lVar1;
      if (__ptr != plVar3 + 5) {
        free(__ptr);
      }
      plVar3[3] = 0;
    }
    if ((code *)plVar3[-3] != (code *)0x0) {
      (*(code *)plVar3[-3])(plVar3 + -0xb,*(undefined4 *)((long)plVar3 + 0x24));
    }
    plVar3 = (long *)*plVar2;
  }
  return;
}


// ===== 005d04e8  FUN_005d04e8 =====

void FUN_005d04e8(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  void *__ptr;
  ulong uVar6;
  
  lVar1 = param_1 + 0x88;
  FUN_005ceda8(*(undefined8 *)(param_1 + 8),lVar1);
  uVar5 = *(uint *)(param_1 + 0x58);
  if ((uVar5 >> 2 & 1) != 0) {
    *(uint *)(param_1 + 0x58) = uVar5 & 0xfffffffb;
    FUN_005ced14(*(undefined8 *)(param_1 + 8),lVar1,1);
    iVar4 = FUN_005cee80(lVar1,4);
    uVar5 = *(uint *)(param_1 + 0x58);
    if ((iVar4 == 0) && ((uVar5 >> 0xe & 1) != 0)) {
      uVar2 = uVar5 & 0xffffbfff;
      *(uint *)(param_1 + 0x58) = uVar2;
      uVar3 = uVar5 >> 0xd;
      uVar5 = uVar2;
      if ((uVar3 & 1) != 0) {
        *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
      }
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  if (((uVar5 >> 0xe & 1) != 0) &&
     (*(uint *)(param_1 + 0x58) = uVar5 & 0xffffbfff, (uVar5 >> 0xd & 1) != 0)) {
    *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
  }
  if (*(int *)(param_1 + 0xb8) != -1) {
    if (2 < *(int *)(param_1 + 0xb8)) {
      FUN_005ce9d0();
    }
    *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0xec) != -1) {
    FUN_005ce9d0();
    *(undefined4 *)(param_1 + 0xec) = 0xffffffff;
  }
  __ptr = *(void **)(param_1 + 0xf0);
  if (__ptr != (void *)0x0) {
    if (*(int *)((long)__ptr + 4) != 0) {
      uVar6 = 0;
      do {
        FUN_005ce9d0(*(undefined4 *)((long)__ptr + uVar6 * 4 + 8));
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)((long)__ptr + 4));
      __ptr = *(void **)(param_1 + 0xf0);
    }
    free(__ptr);
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  return;
}


// ===== 005d0614  thunk_FUN_005d04e8 =====

void thunk_FUN_005d04e8(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  void *__ptr;
  ulong uVar6;
  
  lVar1 = param_1 + 0x88;
  FUN_005ceda8(*(undefined8 *)(param_1 + 8),lVar1);
  uVar5 = *(uint *)(param_1 + 0x58);
  if ((uVar5 >> 2 & 1) != 0) {
    *(uint *)(param_1 + 0x58) = uVar5 & 0xfffffffb;
    FUN_005ced14(*(undefined8 *)(param_1 + 8),lVar1,1);
    iVar4 = FUN_005cee80(lVar1,4);
    uVar5 = *(uint *)(param_1 + 0x58);
    if ((iVar4 == 0) && ((uVar5 >> 0xe & 1) != 0)) {
      uVar2 = uVar5 & 0xffffbfff;
      *(uint *)(param_1 + 0x58) = uVar2;
      uVar3 = uVar5 >> 0xd;
      uVar5 = uVar2;
      if ((uVar3 & 1) != 0) {
        *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
      }
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  if (((uVar5 >> 0xe & 1) != 0) &&
     (*(uint *)(param_1 + 0x58) = uVar5 & 0xffffbfff, (uVar5 >> 0xd & 1) != 0)) {
    *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
  }
  if (*(int *)(param_1 + 0xb8) != -1) {
    if (2 < *(int *)(param_1 + 0xb8)) {
      FUN_005ce9d0();
    }
    *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0xec) != -1) {
    FUN_005ce9d0();
    *(undefined4 *)(param_1 + 0xec) = 0xffffffff;
  }
  __ptr = *(void **)(param_1 + 0xf0);
  if (__ptr != (void *)0x0) {
    if (*(int *)((long)__ptr + 4) != 0) {
      uVar6 = 0;
      do {
        FUN_005ce9d0(*(undefined4 *)((long)__ptr + uVar6 * 4 + 8));
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)((long)__ptr + 4));
      __ptr = *(void **)(param_1 + 0xf0);
    }
    free(__ptr);
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  return;
}


// ===== 005d0618  FUN_005d0618 =====

int FUN_005d0618(pthread_t *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *__arg;
  
  __arg = (undefined8 *)malloc(0x10);
  if (__arg == (undefined8 *)0x0) {
    iVar1 = -0xc;
  }
  else {
    *__arg = param_2;
    __arg[1] = param_3;
    iVar1 = pthread_create(param_1,(pthread_attr_t *)0x0,FUN_005d068c,__arg);
    if (iVar1 != 0) {
      free(__arg);
    }
    iVar1 = -iVar1;
  }
  return iVar1;
}


// ===== 005d068c  FUN_005d068c =====

undefined8 FUN_005d068c(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)*param_1;
  uVar2 = param_1[1];
  free(param_1);
  (*pcVar1)(uVar2);
  return 0;
}


// ===== 005d06b8  FUN_005d06b8 =====

int FUN_005d06b8(pthread_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_join(*param_1,(void **)0x0);
  return -iVar1;
}


// ===== 005d06d8  FUN_005d06d8 =====

int FUN_005d06d8(pthread_mutex_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_mutex_init(param_1,(pthread_mutexattr_t *)0x0);
  return -iVar1;
}


// ===== 005d06f4  FUN_005d06f4 =====

void FUN_005d06f4(pthread_mutex_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_mutex_destroy(param_1);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 005d0710  FUN_005d0710 =====

void FUN_005d0710(pthread_mutex_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock(param_1);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 005d072c  FUN_005d072c =====

void FUN_005d072c(pthread_mutex_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_mutex_unlock(param_1);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 005d0748  FUN_005d0748 =====

int FUN_005d0748(pthread_rwlock_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_rwlock_init(param_1,(pthread_rwlockattr_t *)0x0);
  return -iVar1;
}


// ===== 005d0764  FUN_005d0764 =====

void FUN_005d0764(pthread_rwlock_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_rwlock_destroy(param_1);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 005d0780  FUN_005d0780 =====

void FUN_005d0780(pthread_once_t *param_1,__init_routine *param_2)

{
  int iVar1;
  
  iVar1 = pthread_once(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 005d079c  FUN_005d079c =====

void FUN_005d079c(pthread_cond_t *param_1)

{
  long lVar1;
  int iVar2;
  pthread_condattr_t apStack_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = pthread_condattr_init(apStack_40);
  if (iVar2 == 0) {
    iVar2 = pthread_condattr_setclock(apStack_40,1);
    if ((iVar2 == 0) && (iVar2 = pthread_cond_init(param_1,apStack_40), iVar2 == 0)) {
      iVar2 = pthread_condattr_destroy(apStack_40);
      if (iVar2 == 0) goto LAB_005d0820;
      pthread_cond_destroy(param_1);
    }
    pthread_condattr_destroy(apStack_40);
    iVar2 = -iVar2;
  }
  else {
    iVar2 = -iVar2;
  }
LAB_005d0820:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


// ===== 005d0848  FUN_005d0848 =====

void FUN_005d0848(pthread_cond_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_cond_destroy(param_1);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 005d0864  FUN_005d0864 =====

void FUN_005d0864(pthread_cond_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_cond_signal(param_1);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 005d0880  FUN_005d0880 =====

void FUN_005d0880(pthread_cond_t *param_1,pthread_mutex_t *param_2)

{
  int iVar1;
  
  iVar1 = pthread_cond_wait(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 005d089c  FUN_005d089c =====

undefined8 FUN_005d089c(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (long *)(param_2 + 0x20);
  *plVar1 = param_1 + 0x10;
  *(long *)(param_2 + 8) = param_1;
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  *(undefined4 *)(param_2 + 0x10) = 0xd;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined4 *)(param_2 + 0x58) = 0x2000;
  *(undefined8 **)(param_2 + 0x28) = puVar2;
  *puVar2 = plVar1;
  *(long **)(param_1 + 0x18) = plVar1;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  return 0;
}


// ===== 005d08e0  FUN_005d08e0 =====

void FUN_005d08e0(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  int iVar13;
  undefined8 *puVar14;
  long lVar15;
  uint uVar16;
  undefined8 *puVar17;
  long lVar18;
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  if (param_2 == 0) {
    uVar6 = 0xffffffea;
  }
  else {
    if ((*(byte *)(param_1 + 0x59) >> 6 & 1) != 0) {
      FUN_005d0af4(param_1);
    }
    lVar10 = *(long *)(param_1 + 8);
    lVar9 = *(long *)(lVar10 + 0x218);
    lVar15 = param_3 + *(ulong *)(lVar10 + 0x220);
    if (CARRY8(param_3,*(ulong *)(lVar10 + 0x220))) {
      lVar15 = -1;
    }
    *(long *)(lVar10 + 0x218) = lVar9 + 1;
    plVar8 = (long *)(param_1 + 0x68);
    *plVar8 = 0;
    *(long *)(param_1 + 0x60) = param_2;
    *(undefined8 *)(param_1 + 0x88) = param_4;
    *(long *)(param_1 + 0x90) = lVar9;
    puVar2 = (undefined8 *)(lVar10 + 0x208);
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(long *)(param_1 + 0x80) = lVar15;
    *(undefined8 *)(param_1 + 0x70) = 0;
    uVar1 = *(int *)(lVar10 + 0x210) + 1;
    if (uVar1 < 2) {
      puVar17 = (undefined8 *)*puVar2;
      puVar14 = puVar2;
    }
    else {
      iVar13 = 0;
      uVar16 = 0;
      uVar3 = uVar1;
      do {
        uVar16 = uVar3 & 1 | uVar16 << 1;
        iVar13 = iVar13 + -1;
        bVar5 = 3 < uVar3;
        puVar14 = puVar2;
        uVar3 = uVar3 >> 1;
      } while (bVar5);
      do {
        puVar17 = (undefined8 *)*puVar14;
        uVar3 = uVar16 & 1;
        uVar16 = uVar16 >> 1;
        puVar14 = puVar17;
        if (uVar3 != 0) {
          puVar14 = puVar17 + 1;
        }
        bVar5 = iVar13 != -1;
        iVar13 = iVar13 + 1;
      } while (bVar5);
    }
    *(undefined8 **)(param_1 + 0x78) = puVar17;
    *puVar14 = plVar8;
    *(uint *)(lVar10 + 0x210) = uVar1;
    while (plVar11 = *(long **)(param_1 + 0x78), plVar11 != (long *)0x0) {
      if (((ulong)plVar11[3] <= *(ulong *)(param_1 + 0x80)) &&
         (((ulong)plVar11[3] < *(ulong *)(param_1 + 0x80) ||
          ((ulong)plVar11[5] <= *(ulong *)(param_1 + 0x90))))) break;
      lVar9 = *plVar8;
      lVar18 = plVar11[1];
      lVar10 = *plVar11;
      lVar15 = plVar11[2];
      plVar11[1] = *(long *)(param_1 + 0x70);
      *plVar11 = lVar9;
      *(long *)(param_1 + 0x70) = lVar18;
      *plVar8 = lVar10;
      *(long *)(param_1 + 0x78) = lVar15;
      plVar11[2] = (long)plVar8;
      plVar12 = (long *)*plVar8;
      if (plVar12 == plVar8) {
        plVar12 = *(long **)(param_1 + 0x70);
        *(long **)(param_1 + 0x68) = plVar11;
      }
      else {
        *(long **)(param_1 + 0x70) = plVar11;
      }
      if (plVar12 != (long *)0x0) {
        plVar12[2] = (long)plVar8;
      }
      if (*plVar11 != 0) {
        *(long **)(*plVar11 + 0x10) = plVar11;
      }
      if (plVar11[1] != 0) {
        *(long **)(plVar11[1] + 0x10) = plVar11;
      }
      puVar17 = *(undefined8 **)(param_1 + 0x78);
      puVar14 = puVar2;
      if ((puVar17 != (undefined8 *)0x0) && (puVar14 = puVar17, (long *)*puVar17 != plVar11)) {
        puVar14 = puVar17 + 1;
      }
      *puVar14 = plVar8;
    }
    uVar1 = *(uint *)(param_1 + 0x58);
    if (((uVar1 >> 0xe & 1) == 0) &&
       (*(uint *)(param_1 + 0x58) = uVar1 | 0x4000, (uVar1 >> 0xd & 1) != 0)) {
      uVar6 = 0;
      *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + 1;
    }
    else {
      uVar6 = 0;
    }
  }
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


// ===== 005d0af4  FUN_005d0af4 =====

undefined8 FUN_005d0af4(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  if ((*(byte *)(param_1 + 0x59) >> 6 & 1) != 0) {
    lVar6 = *(long *)(param_1 + 8);
    uVar2 = *(uint *)(lVar6 + 0x210);
    if (uVar2 != 0) {
      plVar1 = (long *)(lVar6 + 0x208);
      plVar8 = (long *)(param_1 + 0x68);
      plVar10 = plVar1;
      if (uVar2 - 1 != 0) {
        iVar11 = 0;
        uVar12 = 0;
        uVar13 = uVar2;
        do {
          uVar12 = uVar13 & 1 | uVar12 << 1;
          iVar11 = iVar11 + -1;
          bVar4 = 3 < uVar13;
          plVar7 = plVar1;
          uVar13 = uVar13 >> 1;
        } while (bVar4);
        do {
          uVar13 = uVar12 & 1;
          uVar12 = uVar12 >> 1;
          plVar10 = (long *)*plVar7;
          if (uVar13 != 0) {
            plVar10 = (long *)*plVar7 + 1;
          }
          bVar4 = iVar11 != -1;
          iVar11 = iVar11 + 1;
          plVar7 = plVar10;
        } while (bVar4);
      }
      *(uint *)(lVar6 + 0x210) = uVar2 - 1;
      plVar7 = (long *)*plVar10;
      *plVar10 = 0;
      if (plVar7 == plVar8) {
        if ((long *)*plVar1 == plVar8) {
          *plVar1 = 0;
        }
      }
      else {
        lVar6 = *(long *)(param_1 + 0x68);
        *plVar7 = lVar6;
        lVar14 = *(long *)(param_1 + 0x70);
        plVar7[2] = *(long *)(param_1 + 0x78);
        plVar7[1] = lVar14;
        if (lVar6 != 0) {
          *(long **)(lVar6 + 0x10) = plVar7;
        }
        if (lVar14 != 0) {
          *(long **)(lVar14 + 0x10) = plVar7;
        }
        plVar9 = *(long **)(param_1 + 0x78);
        plVar10 = plVar1;
        if ((plVar9 != (long *)0x0) && (plVar10 = plVar9, (long *)*plVar9 != plVar8)) {
          plVar10 = plVar9 + 1;
        }
        *plVar10 = (long)plVar7;
        while( true ) {
          plVar10 = (long *)*plVar7;
          plVar8 = plVar7;
          if (plVar10 != (long *)0x0) {
            if (((ulong)plVar10[3] < (ulong)plVar7[3]) ||
               (((ulong)plVar10[3] <= (ulong)plVar7[3] && ((ulong)plVar10[5] < (ulong)plVar7[5]))))
            {
              plVar8 = plVar10;
            }
          }
          plVar10 = (long *)plVar7[1];
          if (plVar10 != (long *)0x0) {
            if (((ulong)plVar10[3] < (ulong)plVar8[3]) ||
               (((ulong)plVar10[3] <= (ulong)plVar8[3] && ((ulong)plVar10[5] < (ulong)plVar8[5]))))
            {
              plVar8 = plVar10;
            }
          }
          if (plVar8 == plVar7) break;
          lVar14 = plVar7[1];
          lVar6 = *plVar7;
          lVar15 = *plVar8;
          plVar7[1] = plVar8[1];
          *plVar7 = lVar15;
          plVar8[2] = plVar7[2];
          plVar8[1] = lVar14;
          *plVar8 = lVar6;
          plVar7[2] = (long)plVar8;
          plVar10 = (long *)*plVar8;
          if (plVar10 == plVar8) {
            plVar10 = (long *)plVar8[1];
            *plVar8 = (long)plVar7;
          }
          else {
            plVar8[1] = (long)plVar7;
          }
          if (plVar10 != (long *)0x0) {
            plVar10[2] = (long)plVar8;
          }
          if (*plVar7 != 0) {
            *(long **)(*plVar7 + 0x10) = plVar7;
          }
          if (plVar7[1] != 0) {
            *(long **)(plVar7[1] + 0x10) = plVar7;
          }
          plVar9 = (long *)plVar8[2];
          plVar10 = plVar1;
          if ((plVar9 != (long *)0x0) && (plVar10 = plVar9, (long *)*plVar9 != plVar7)) {
            plVar10 = plVar9 + 1;
          }
          *plVar10 = (long)plVar8;
        }
        while (plVar8 = (long *)plVar7[2], plVar8 != (long *)0x0) {
          if (((ulong)plVar8[3] <= (ulong)plVar7[3]) &&
             (((ulong)plVar8[3] < (ulong)plVar7[3] || ((ulong)plVar8[5] <= (ulong)plVar7[5]))))
          break;
          lVar14 = *plVar7;
          lVar16 = plVar8[1];
          lVar15 = *plVar8;
          lVar6 = plVar8[2];
          plVar8[1] = plVar7[1];
          *plVar8 = lVar14;
          plVar7[1] = lVar16;
          *plVar7 = lVar15;
          plVar7[2] = lVar6;
          plVar8[2] = (long)plVar7;
          plVar10 = (long *)*plVar7;
          if (plVar10 == plVar7) {
            plVar10 = (long *)plVar7[1];
            *plVar7 = (long)plVar8;
          }
          else {
            plVar7[1] = (long)plVar8;
          }
          if (plVar10 != (long *)0x0) {
            plVar10[2] = (long)plVar7;
          }
          if (*plVar8 != 0) {
            *(long **)(*plVar8 + 0x10) = plVar8;
          }
          if (plVar8[1] != 0) {
            *(long **)(plVar8[1] + 0x10) = plVar8;
          }
          plVar9 = (long *)plVar7[2];
          plVar10 = plVar1;
          if ((plVar9 != (long *)0x0) && (plVar10 = plVar9, (long *)*plVar9 != plVar8)) {
            plVar10 = plVar9 + 1;
          }
          *plVar10 = (long)plVar7;
        }
      }
    }
    uVar2 = *(uint *)(param_1 + 0x58);
    if (((uVar2 >> 0xe & 1) != 0) &&
       (*(uint *)(param_1 + 0x58) = uVar2 & 0xffffbfff, (uVar2 >> 0xd & 1) != 0)) {
      *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
    }
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005d0df4  FUN_005d0df4 =====

undefined8 FUN_005d0df4(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x60) == 0) {
    uVar1 = 0xffffffea;
  }
  else {
    if (*(long *)(param_1 + 0x88) != 0) {
      FUN_005d0af4(param_1);
      FUN_005d08e0(param_1,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x88),
                   *(undefined8 *)(param_1 + 0x88));
    }
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 005d0e48  FUN_005d0e48 =====

void FUN_005d0e48(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x88) = param_2;
  return;
}


// ===== 005d0e50  FUN_005d0e50 =====

undefined8 FUN_005d0e50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}


// ===== 005d0e58  FUN_005d0e58 =====

ulong FUN_005d0e58(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x208) == 0) {
    return 0xffffffff;
  }
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x208) + 0x18);
  uVar1 = uVar2 - *(ulong *)(param_1 + 0x220);
  if (*(ulong *)(param_1 + 0x220) <= uVar2 && uVar1 != 0) {
    if (0x7ffffffe < uVar1) {
      uVar1 = 0x7fffffff;
    }
    return uVar1;
  }
  return 0;
}


// ===== 005d0e90  FUN_005d0e90 =====

void FUN_005d0e90(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x208);
  while ((lVar2 != 0 && (*(ulong *)(lVar2 + 0x18) <= *(ulong *)(param_1 + 0x220)))) {
    lVar1 = lVar2 + -0x68;
    FUN_005d0af4(lVar1);
    if (*(long *)(lVar2 + 0x20) != 0) {
      FUN_005d0af4(lVar1);
      FUN_005d08e0(lVar1,*(undefined8 *)(lVar2 + -8),*(undefined8 *)(lVar2 + 0x20),
                   *(undefined8 *)(lVar2 + 0x20));
    }
    (**(code **)(lVar2 + -8))(lVar1);
    lVar2 = *(long *)(param_1 + 0x208);
  }
  return;
}


// ===== 005d0f18  thunk_FUN_005d0af4 =====

undefined8 thunk_FUN_005d0af4(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  if ((*(byte *)(param_1 + 0x59) >> 6 & 1) != 0) {
    lVar6 = *(long *)(param_1 + 8);
    uVar2 = *(uint *)(lVar6 + 0x210);
    if (uVar2 != 0) {
      plVar1 = (long *)(lVar6 + 0x208);
      plVar8 = (long *)(param_1 + 0x68);
      plVar10 = plVar1;
      if (uVar2 - 1 != 0) {
        iVar11 = 0;
        uVar12 = 0;
        uVar13 = uVar2;
        do {
          uVar12 = uVar13 & 1 | uVar12 << 1;
          iVar11 = iVar11 + -1;
          bVar4 = 3 < uVar13;
          plVar7 = plVar1;
          uVar13 = uVar13 >> 1;
        } while (bVar4);
        do {
          uVar13 = uVar12 & 1;
          uVar12 = uVar12 >> 1;
          plVar10 = (long *)*plVar7;
          if (uVar13 != 0) {
            plVar10 = (long *)*plVar7 + 1;
          }
          bVar4 = iVar11 != -1;
          iVar11 = iVar11 + 1;
          plVar7 = plVar10;
        } while (bVar4);
      }
      *(uint *)(lVar6 + 0x210) = uVar2 - 1;
      plVar7 = (long *)*plVar10;
      *plVar10 = 0;
      if (plVar7 == plVar8) {
        if ((long *)*plVar1 == plVar8) {
          *plVar1 = 0;
        }
      }
      else {
        lVar6 = *(long *)(param_1 + 0x68);
        *plVar7 = lVar6;
        lVar14 = *(long *)(param_1 + 0x70);
        plVar7[2] = *(long *)(param_1 + 0x78);
        plVar7[1] = lVar14;
        if (lVar6 != 0) {
          *(long **)(lVar6 + 0x10) = plVar7;
        }
        if (lVar14 != 0) {
          *(long **)(lVar14 + 0x10) = plVar7;
        }
        plVar9 = *(long **)(param_1 + 0x78);
        plVar10 = plVar1;
        if ((plVar9 != (long *)0x0) && (plVar10 = plVar9, (long *)*plVar9 != plVar8)) {
          plVar10 = plVar9 + 1;
        }
        *plVar10 = (long)plVar7;
        while( true ) {
          plVar10 = (long *)*plVar7;
          plVar8 = plVar7;
          if (plVar10 != (long *)0x0) {
            if (((ulong)plVar10[3] < (ulong)plVar7[3]) ||
               (((ulong)plVar10[3] <= (ulong)plVar7[3] && ((ulong)plVar10[5] < (ulong)plVar7[5]))))
            {
              plVar8 = plVar10;
            }
          }
          plVar10 = (long *)plVar7[1];
          if (plVar10 != (long *)0x0) {
            if (((ulong)plVar10[3] < (ulong)plVar8[3]) ||
               (((ulong)plVar10[3] <= (ulong)plVar8[3] && ((ulong)plVar10[5] < (ulong)plVar8[5]))))
            {
              plVar8 = plVar10;
            }
          }
          if (plVar8 == plVar7) break;
          lVar14 = plVar7[1];
          lVar6 = *plVar7;
          lVar15 = *plVar8;
          plVar7[1] = plVar8[1];
          *plVar7 = lVar15;
          plVar8[2] = plVar7[2];
          plVar8[1] = lVar14;
          *plVar8 = lVar6;
          plVar7[2] = (long)plVar8;
          plVar10 = (long *)*plVar8;
          if (plVar10 == plVar8) {
            plVar10 = (long *)plVar8[1];
            *plVar8 = (long)plVar7;
          }
          else {
            plVar8[1] = (long)plVar7;
          }
          if (plVar10 != (long *)0x0) {
            plVar10[2] = (long)plVar8;
          }
          if (*plVar7 != 0) {
            *(long **)(*plVar7 + 0x10) = plVar7;
          }
          if (plVar7[1] != 0) {
            *(long **)(plVar7[1] + 0x10) = plVar7;
          }
          plVar9 = (long *)plVar8[2];
          plVar10 = plVar1;
          if ((plVar9 != (long *)0x0) && (plVar10 = plVar9, (long *)*plVar9 != plVar7)) {
            plVar10 = plVar9 + 1;
          }
          *plVar10 = (long)plVar8;
        }
        while (plVar8 = (long *)plVar7[2], plVar8 != (long *)0x0) {
          if (((ulong)plVar8[3] <= (ulong)plVar7[3]) &&
             (((ulong)plVar8[3] < (ulong)plVar7[3] || ((ulong)plVar8[5] <= (ulong)plVar7[5]))))
          break;
          lVar14 = *plVar7;
          lVar16 = plVar8[1];
          lVar15 = *plVar8;
          lVar6 = plVar8[2];
          plVar8[1] = plVar7[1];
          *plVar8 = lVar14;
          plVar7[1] = lVar16;
          *plVar7 = lVar15;
          plVar7[2] = lVar6;
          plVar8[2] = (long)plVar7;
          plVar10 = (long *)*plVar7;
          if (plVar10 == plVar7) {
            plVar10 = (long *)plVar7[1];
            *plVar7 = (long)plVar8;
          }
          else {
            plVar7[1] = (long)plVar8;
          }
          if (plVar10 != (long *)0x0) {
            plVar10[2] = (long)plVar7;
          }
          if (*plVar8 != 0) {
            *(long **)(*plVar8 + 0x10) = plVar8;
          }
          if (plVar8[1] != 0) {
            *(long **)(plVar8[1] + 0x10) = plVar8;
          }
          plVar9 = (long *)plVar7[2];
          plVar10 = plVar1;
          if ((plVar9 != (long *)0x0) && (plVar10 = plVar9, (long *)*plVar9 != plVar8)) {
            plVar10 = plVar9 + 1;
          }
          *plVar10 = (long)plVar7;
        }
      }
    }
    uVar2 = *(uint *)(param_1 + 0x58);
    if (((uVar2 >> 0xe & 1) != 0) &&
       (*(uint *)(param_1 + 0x58) = uVar2 & 0xffffbfff, (uVar2 >> 0xd & 1) != 0)) {
      *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
    }
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005d0f1c  FUN_005d0f1c =====

void FUN_005d0f1c(long param_1)

{
  uint uVar1;
  
  FUN_005ceda8(*(undefined8 *)(param_1 + 8),param_1 + 0x80);
  uVar1 = *(uint *)(param_1 + 0x58);
  if (((uVar1 >> 0xe & 1) != 0) &&
     (*(uint *)(param_1 + 0x58) = uVar1 & 0xffffbfff, (uVar1 >> 0xd & 1) != 0)) {
    *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
  }
  if (*(int *)(param_1 + 0xb0) != -1) {
    FUN_005ce9d0();
    *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  }
  return;
}


// ===== 005d0f80  FUN_005d0f80 =====

void FUN_005d0f80(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  plVar1 = (long *)(param_1 + 0xb8);
  plVar2 = (long *)*plVar1;
  if (plVar1 != plVar2) {
    do {
      plVar2[0x14] = -0x7d;
      *(long *)plVar2[1] = *plVar2;
      *(long *)(*plVar2 + 8) = plVar2[1];
      *plVar2 = param_1 + 200;
      puVar3 = *(undefined8 **)(param_1 + 0xd0);
      plVar2[1] = (long)puVar3;
      *puVar3 = plVar2;
      *(long **)(param_1 + 0xd0) = plVar2;
      plVar2 = *(long **)(param_1 + 0xb8);
    } while (plVar1 != plVar2);
  }
  FUN_005d0ff4(param_1);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}


// ===== 005d0ff4  FUN_005d0ff4 =====

void FUN_005d0ff4(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *__ptr;
  undefined4 uVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = (long *)(param_1 + 200);
  plVar6 = (long *)*plVar5;
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x20000;
  while (plVar5 != plVar6) {
    lVar3 = plVar6[0x12];
    *(long *)plVar6[1] = *plVar6;
    *(long *)(*plVar6 + 8) = plVar6[1];
    *(long *)plVar6[-7] = plVar6[-8];
    *(long *)(plVar6[-8] + 8) = plVar6[-7];
    lVar3 = FUN_005cdc98(plVar6[0x13],(int)lVar3);
    __ptr = (long *)plVar6[0x13];
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + -1;
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) - lVar3;
    if (__ptr != plVar6 + 0x16) {
      free(__ptr);
    }
    plVar6[0x13] = 0;
    if ((code *)plVar6[0x15] != (code *)0x0) {
      uVar4 = 0;
      if (plVar6[0x14] < 0) {
        uVar4 = (undefined4)plVar6[0x14];
      }
      (*(code *)plVar6[0x15])(plVar6 + -10,uVar4);
    }
    plVar6 = (long *)*plVar5;
  }
  if ((long *)(param_1 + 0xb8) == *(long **)(param_1 + 0xb8)) {
    FUN_005ced14(*(undefined8 *)(param_1 + 8),param_1 + 0x80,4);
    iVar2 = FUN_005cee80(param_1 + 0x80,1);
    if (((iVar2 == 0) && (uVar1 = *(uint *)(param_1 + 0x58), (uVar1 >> 0xe & 1) != 0)) &&
       (*(uint *)(param_1 + 0x58) = uVar1 & 0xffffbfff, (uVar1 >> 0xd & 1) != 0)) {
      *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
    }
  }
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xfffdffff;
  return;
}


// ===== 005d1128  FUN_005d1128 =====

void FUN_005d1128(long param_1,long param_2,void *param_3,uint param_4,short *param_5,uint param_6,
                 undefined8 param_7)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  void *__dest;
  ulong uVar6;
  int *piVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  socklen_t __len;
  long lVar11;
  long *plVar12;
  sockaddr local_88;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (*(int *)(param_2 + 0xb0) == -1) {
    sVar2 = *param_5;
    if (sVar2 == 10) {
      __len = 0x1c;
      local_70 = 0;
      uStack_78 = *(undefined8 *)(PTR_in6addr_any_00d51ee0 + 8);
      local_88.sa_data._6_8_ = *(undefined8 *)PTR_in6addr_any_00d51ee0;
      local_88.sa_family = 10;
      local_88.sa_data[0] = '\0';
      local_88.sa_data[1] = '\0';
      local_88.sa_data[2] = '\0';
      local_88.sa_data[3] = '\0';
      local_88.sa_data[4] = '\0';
      local_88.sa_data[5] = '\0';
    }
    else {
      if (sVar2 != 2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      __len = 0x10;
      local_88.sa_data[6] = '\0';
      local_88.sa_data[7] = '\0';
      local_88.sa_data[8] = '\0';
      local_88.sa_data[9] = '\0';
      local_88.sa_data[10] = '\0';
      local_88.sa_data[0xb] = '\0';
      local_88.sa_data[0xc] = '\0';
      local_88.sa_data[0xd] = '\0';
      local_88.sa_family = 2;
      local_88.sa_data[0] = '\0';
      local_88.sa_data[1] = '\0';
      local_88.sa_data[2] = '\0';
      local_88.sa_data[3] = '\0';
      local_88.sa_data[4] = '\0';
      local_88.sa_data[5] = '\0';
    }
    uVar6 = FUN_005ce798(sVar2,2,0);
    iVar5 = (int)uVar6;
    if (iVar5 < 0) goto LAB_005d12ac;
    *(int *)(param_2 + 0xb0) = iVar5;
    iVar5 = bind(iVar5,&local_88,__len);
    if (iVar5 == 0) {
      if (local_88.sa_family == 10) {
        *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) | 0x10000;
      }
    }
    else {
      piVar7 = (int *)__errno();
      iVar5 = *piVar7;
      FUN_005ce9d0(*(undefined4 *)(param_2 + 0xb0));
      *(undefined4 *)(param_2 + 0xb0) = 0xffffffff;
      if (iVar5 == 0x61) {
        uVar6 = 0xffffffea;
        goto LAB_005d12ac;
      }
      if (iVar5 != 0) {
        uVar6 = (ulong)(uint)-iVar5;
        goto LAB_005d12ac;
      }
    }
  }
  lVar9 = *(long *)(param_2 + 8);
  lVar11 = *(long *)(param_2 + 0x68);
  plVar12 = (long *)(param_1 + 0x10);
  *plVar12 = lVar9 + 0x20;
  *(undefined4 *)(param_1 + 8) = 5;
  puVar10 = *(undefined8 **)(lVar9 + 0x28);
  *(undefined8 **)(param_1 + 0x18) = puVar10;
  *puVar10 = plVar12;
  *(long **)(lVar9 + 0x28) = plVar12;
  memcpy((void *)(param_1 + 0x60),param_5,(ulong)param_6);
  *(undefined8 *)(param_1 + 0xf8) = param_7;
  __dest = (void *)(param_1 + 0x100);
  *(long *)(param_1 + 0x40) = param_2;
  *(uint *)(param_1 + 0xe0) = param_4;
  *(void **)(param_1 + 0xe8) = __dest;
  if (4 < param_4) {
    __dest = malloc((ulong)param_4 << 4);
    *(void **)(param_1 + 0xe8) = __dest;
    if (__dest == (void *)0x0) {
      uVar6 = 0xfffffff4;
      **(undefined8 **)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(*(long *)(param_1 + 0x10) + 8) = *(undefined8 *)(param_1 + 0x18);
      goto LAB_005d12ac;
    }
  }
  memcpy(__dest,param_3,(ulong)param_4 << 4);
  lVar9 = FUN_005cdc98(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xe0));
  *(long *)(param_2 + 0x68) = *(long *)(param_2 + 0x68) + 1;
  *(long *)(param_2 + 0x60) = *(long *)(param_2 + 0x60) + lVar9;
  plVar12 = (long *)(param_1 + 0x50);
  *plVar12 = param_2 + 0xb8;
  puVar10 = *(undefined8 **)(param_2 + 0xc0);
  *(undefined8 **)(param_1 + 0x58) = puVar10;
  *puVar10 = plVar12;
  uVar8 = *(uint *)(param_2 + 0x58);
  *(long **)(param_2 + 0xc0) = plVar12;
  if ((uVar8 >> 0xe & 1) == 0) {
    uVar3 = uVar8 | 0x4000;
    *(uint *)(param_2 + 0x58) = uVar3;
    uVar1 = uVar8 >> 0xd;
    uVar8 = uVar3;
    if ((uVar1 & 1) != 0) {
      *(int *)(*(long *)(param_2 + 8) + 8) = *(int *)(*(long *)(param_2 + 8) + 8) + 1;
    }
  }
  if ((lVar11 == 0) && ((uVar8 >> 0x11 & 1) == 0)) {
    FUN_005d139c(param_2);
  }
  else {
    FUN_005ceba8(*(undefined8 *)(param_2 + 8),param_2 + 0x80,4);
  }
  uVar6 = 0;
LAB_005d12ac:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


// ===== 005d139c  FUN_005d139c =====

void FUN_005d139c(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  msghdr local_a0;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  plVar6 = (long *)(param_1 + 0xb8);
  plVar7 = (long *)*plVar6;
  if (plVar6 != plVar7) {
    do {
      local_a0.msg_control = (void *)0x0;
      local_a0.msg_flags = 0;
      local_a0._52_4_ = 0;
      local_a0.msg_controllen = 0;
      local_a0.msg_name = plVar7 + 2;
                    /* WARNING: Load size is inaccurate */
      local_a0.msg_iov = (iovec *)plVar7[0x13];
      local_a0.msg_iovlen = (size_t)*(uint *)(plVar7 + 0x12);
      local_a0.msg_namelen = 0x1c;
      if ((short)*local_a0.msg_name != 10) {
        local_a0.msg_namelen = 0x10;
      }
      local_a0._12_4_ = 0;
      do {
        lVar3 = sendmsg(*(int *)(param_1 + 0xb0),&local_a0,0);
        if (lVar3 != -1) goto LAB_005d145c;
        piVar4 = (int *)__errno();
        iVar1 = *piVar4;
      } while (iVar1 == 4);
      if (iVar1 == 0xb) break;
      lVar3 = -(long)iVar1;
LAB_005d145c:
      plVar7[0x14] = lVar3;
      *(long *)plVar7[1] = *plVar7;
      *(long *)(*plVar7 + 8) = plVar7[1];
      *plVar7 = param_1 + 200;
      puVar5 = *(undefined8 **)(param_1 + 0xd0);
      plVar7[1] = (long)puVar5;
      *puVar5 = plVar7;
      *(long **)(param_1 + 0xd0) = plVar7;
      FUN_005cee50(*(undefined8 *)(param_1 + 8),param_1 + 0x80);
      plVar7 = *(long **)(param_1 + 0xb8);
    } while (plVar6 != plVar7);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005d14d0  FUN_005d14d0 =====

int FUN_005d14d0(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  uVar1 = param_3 & 0xff;
  if (((param_3 & 0xf7) == 2) || (uVar1 == 0)) {
    if (uVar1 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = FUN_005ce798(uVar1,2,0);
      if (iVar2 < 0) {
        return iVar2;
      }
    }
    plVar4 = (long *)(param_2 + 0x20);
    *plVar4 = param_1 + 0x10;
    *(long *)(param_2 + 8) = param_1;
    puVar3 = *(undefined8 **)(param_1 + 0x18);
    *(undefined4 *)(param_2 + 0x10) = 0xf;
    *(undefined4 *)(param_2 + 0x58) = 0x2000;
    *(undefined8 **)(param_2 + 0x28) = puVar3;
    *puVar3 = plVar4;
    *(long **)(param_1 + 0x18) = plVar4;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(uint *)(param_2 + 0xd8) = param_3 & 0x200;
    FUN_005ceb8c(param_2 + 0x80,FUN_005d15a4,iVar2);
    iVar2 = 0;
    *(long *)(param_2 + 0xb8) = param_2 + 0xb8;
    *(long *)(param_2 + 0xc0) = param_2 + 0xb8;
    *(long *)(param_2 + 200) = param_2 + 200;
    *(long *)(param_2 + 0xd0) = param_2 + 200;
  }
  else {
    iVar2 = -0x16;
  }
  return iVar2;
}


// ===== 005d15a4  FUN_005d15a4 =====

void FUN_005d15a4(undefined8 param_1,long param_2,uint param_3)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  ssize_t sVar4;
  int *piVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  int iVar9;
  iovec iStack_130;
  msghdr local_120;
  undefined1 auStack_e8 [128];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar8 = param_2 + -0x80;
  if ((param_3 & 1) != 0) {
    iVar9 = 0x20;
    local_120.msg_iov = (iovec *)0x0;
    local_120.msg_namelen = 0;
    local_120._12_4_ = 0;
    local_120.msg_control = (void *)0x0;
    local_120.msg_iovlen = 0;
    local_120.msg_flags = 0;
    local_120._52_4_ = 0;
    local_120.msg_controllen = 0;
    local_120.msg_name = auStack_e8;
    while ((**(code **)(param_2 + -0x10))(lVar8,0x10000,&iStack_130), iStack_130.iov_len != 0) {
      local_120.msg_namelen = 0x80;
      local_120.msg_iovlen = 1;
      local_120.msg_iov = &iStack_130;
      while (sVar4 = recvmsg(*(int *)(param_2 + 0x30),&local_120,0), sVar4 == -1) {
        piVar5 = (int *)__errno();
        iVar2 = *piVar5;
        if (iVar2 != 4) {
          if (iVar2 != 0xb) {
            (**(code **)(param_2 + -8))(lVar8,-(long)iVar2,&iStack_130,0,0);
            if ((param_3 >> 2 & 1) == 0) goto LAB_005d16dc;
            goto LAB_005d16cc;
          }
          pcVar7 = *(code **)(param_2 + -8);
          uVar6 = 0;
          goto LAB_005d16bc;
        }
      }
      puVar1 = (undefined1 *)0x0;
      if (local_120.msg_namelen != 0) {
        puVar1 = auStack_e8;
      }
      (**(code **)(param_2 + -8))(lVar8,sVar4,&iStack_130,puVar1,(uint)local_120.msg_flags >> 4 & 2)
      ;
      if (((iVar9 == 0) || (*(int *)(param_2 + 0x30) == -1)) ||
         (iVar9 = iVar9 + -1, *(long *)(param_2 + -8) == 0)) goto LAB_005d16c8;
    }
    pcVar7 = *(code **)(param_2 + -8);
    uVar6 = 0xffffffffffffff97;
LAB_005d16bc:
    (*pcVar7)(lVar8,uVar6,&iStack_130,0,0);
  }
LAB_005d16c8:
  if ((param_3 >> 2 & 1) != 0) {
LAB_005d16cc:
    FUN_005d139c(lVar8);
    FUN_005d0ff4(lVar8);
  }
LAB_005d16dc:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 005d174c  FUN_005d174c =====

undefined8 FUN_005d174c(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_2 + 0x20);
  *plVar2 = param_1 + 0x10;
  *(long *)(param_2 + 8) = param_1;
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  *(undefined4 *)(param_2 + 0x10) = 0xf;
  *(undefined4 *)(param_2 + 0x58) = 0x2000;
  *(undefined8 **)(param_2 + 0x28) = puVar1;
  *puVar1 = plVar2;
  *(long **)(param_1 + 0x18) = plVar2;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined4 *)(param_2 + 0xd8) = 0;
  FUN_005ceb8c(param_2 + 0x80,FUN_005d15a4,0xffffffff);
  *(long *)(param_2 + 0xb8) = param_2 + 0xb8;
  *(long *)(param_2 + 0xc0) = param_2 + 0xb8;
  *(long *)(param_2 + 200) = param_2 + 200;
  *(long *)(param_2 + 0xd0) = param_2 + 200;
  return 0;
}


// ===== 005d17cc  FUN_005d17cc =====

void FUN_005d17cc(long param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  sockaddr local_68 [2];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = 0xffffffea;
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar3 = FUN_005cee80(param_1 + 0x80,1);
    if (iVar3 == 0) {
      if (*(int *)(param_1 + 0xb0) == -1) {
        local_68[0].sa_data[6] = '\0';
        local_68[0].sa_data[7] = '\0';
        local_68[0].sa_data[8] = '\0';
        local_68[0].sa_data[9] = '\0';
        local_68[0].sa_data[10] = '\0';
        local_68[0].sa_data[0xb] = '\0';
        local_68[0].sa_data[0xc] = '\0';
        local_68[0].sa_data[0xd] = '\0';
        local_68[0].sa_family = 2;
        local_68[0].sa_data[0] = '\0';
        local_68[0].sa_data[1] = '\0';
        local_68[0].sa_data[2] = '\0';
        local_68[0].sa_data[3] = '\0';
        local_68[0].sa_data[4] = '\0';
        local_68[0].sa_data[5] = '\0';
        uVar4 = FUN_005ce798(2,2,0);
        iVar3 = (int)uVar4;
        if (iVar3 < 0) goto LAB_005d18d4;
        *(int *)(param_1 + 0xb0) = iVar3;
        iVar3 = bind(iVar3,local_68,0x10);
        if (iVar3 == 0) {
          if (local_68[0].sa_family == 10) {
            *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x10000;
          }
        }
        else {
          piVar5 = (int *)__errno();
          iVar3 = *piVar5;
          FUN_005ce9d0(*(undefined4 *)(param_1 + 0xb0));
          *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
          if (iVar3 == 0x61) {
            uVar4 = 0xffffffea;
            goto LAB_005d18d4;
          }
          if (iVar3 != 0) {
            uVar4 = (ulong)(uint)-iVar3;
            goto LAB_005d18d4;
          }
        }
      }
      *(long *)(param_1 + 0x70) = param_2;
      *(long *)(param_1 + 0x78) = param_3;
      FUN_005ceba8(*(undefined8 *)(param_1 + 8),param_1 + 0x80,1);
      uVar1 = *(uint *)(param_1 + 0x58);
      if (((uVar1 >> 0xe & 1) == 0) &&
         (*(uint *)(param_1 + 0x58) = uVar1 | 0x4000, (uVar1 >> 0xd & 1) != 0)) {
        uVar4 = 0;
        *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + 1;
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0xffffff8e;
    }
  }
LAB_005d18d4:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 005d1928  FUN_005d1928 =====

undefined8 FUN_005d1928(long param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_005ced14(*(undefined8 *)(param_1 + 8),param_1 + 0x80,1);
  iVar2 = FUN_005cee80(param_1 + 0x80,4);
  if (((iVar2 == 0) && (uVar1 = *(uint *)(param_1 + 0x58), (uVar1 >> 0xe & 1) != 0)) &&
     (*(uint *)(param_1 + 0x58) = uVar1 & 0xffffbfff, (uVar1 >> 0xd & 1) != 0)) {
    *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  return 0;
}


// ===== 005d1994  FUN_005d1994 =====

int FUN_005d1994(long param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_005d2538(0x80000);
  if (iVar1 == -1) {
    piVar3 = (int *)__errno();
    if ((*piVar3 == 0x26) || (*piVar3 == 0x16)) {
      iVar1 = epoll_create(0x100);
      if (iVar1 != -1) {
        FUN_005ce970(iVar1,1);
        goto LAB_005d19f4;
      }
    }
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x348) = 0xffffffff;
    iVar2 = -*piVar3;
  }
  else {
LAB_005d19f4:
    iVar2 = 0;
    *(int *)(param_1 + 0x40) = iVar1;
    *(undefined4 *)(param_1 + 0x348) = 0xffffffff;
  }
  *(undefined8 *)(param_1 + 0x340) = 0;
  return iVar2;
}


// ===== 005d1a30  FUN_005d1a30 =====

void FUN_005d1a30(long param_1)

{
  if (*(int *)(param_1 + 0x348) != -1) {
    FUN_005ced14(param_1,param_1 + 0x308,1);
    FUN_005ce9d0(*(undefined4 *)(param_1 + 0x348));
    *(undefined4 *)(param_1 + 0x348) = 0xffffffff;
  }
  return;
}


// ===== 005d1a74  FUN_005d1a74 =====

void FUN_005d1a74(long param_1,int param_2)

{
  long lVar1;
  int __epfd;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  epoll_event local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(*(long *)(param_1 + 0x68) + (ulong)*(uint *)(param_1 + 0x70) * 8);
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x68) + (ulong)(*(uint *)(param_1 + 0x70) + 1) * 8);
  if (lVar3 != 0 && uVar2 != 0) {
    piVar4 = (int *)(lVar3 + 8);
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    do {
      if (*piVar4 == param_2) {
        *piVar4 = -1;
      }
      uVar2 = uVar2 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar2 != 0);
  }
  __epfd = *(int *)(param_1 + 0x40);
  if (-1 < __epfd) {
    local_38.events = 0;
    local_38._4_4_ = 0;
    local_38.data.ptr = (void *)0x0;
    __epfd = epoll_ctl(__epfd,2,param_2,&local_38);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__epfd);
}


// ===== 005d1b24  FUN_005d1b24 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_005d1b24(ulong param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  epoll_event *__event;
  ulong uVar15;
  int local_40bc;
  int local_40a4;
  undefined8 local_40a0;
  epoll_event local_4098;
  timespec local_4088;
  undefined1 auStack_4078 [16];
  int local_4068 [4094];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  uVar8 = param_1;
  if (*(int *)(param_1 + 0x74) == 0) {
LAB_005d1f34:
    if (*(long *)(lVar2 + 0x28) == local_70) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  plVar12 = (long *)(param_1 + 0x58);
  plVar13 = (long *)*plVar12;
  while (plVar12 != plVar13) {
    *(long *)plVar13[1] = *plVar13;
    *(long *)(*plVar13 + 8) = plVar13[1];
    local_4098.events = *(uint32_t *)(plVar13 + 2);
    *plVar13 = (long)plVar13;
    plVar13[1] = (long)plVar13;
    local_4098.data.fd = (int)plVar13[3];
    iVar3 = 3;
    if (*(int *)((long)plVar13 + 0x14) == 0) {
      iVar3 = 1;
    }
    iVar3 = epoll_ctl(*(int *)(param_1 + 0x40),iVar3,local_4098.data.fd,&local_4098);
    if (iVar3 != 0) {
      piVar7 = (int *)__errno();
      if (*piVar7 != 0x11) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      iVar3 = epoll_ctl(*(int *)(param_1 + 0x40),3,(int)plVar13[3],&local_4098);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    *(int *)((long)plVar13 + 0x14) = (int)plVar13[2];
    plVar13 = (long *)*plVar12;
  }
  uVar15 = *(ulong *)(param_1 + 0x38);
  if ((uVar15 & 1) == 0) {
    local_40a0 = 0;
  }
  else {
    sigemptyset((sigset_t *)auStack_4078);
    sigaddset((sigset_t *)auStack_4078,0x1b);
    local_40a0 = 0x4000000;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x220);
  local_40bc = 0x30;
  local_40a4 = param_2;
LAB_005d1c68:
  do {
    if ((((uVar15 & 1) != 0) && (DAT_00d63fc0 != 0)) &&
       (iVar3 = FUN_005d25fc(0,auStack_4078,0), iVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if ((DAT_00d63fc4 == '\x01') || ((uVar15 & 1) != 0 && (DAT_00d63fc0 & 1) == 0)) {
      uVar4 = FUN_005d2554(*(int *)(param_1 + 0x40),auStack_4078 + 8,0x400,param_2,local_40a0);
      if (uVar4 == 0xffffffff) {
        piVar7 = (int *)__errno();
        puVar11 = &DAT_00d63fc0;
        if (*piVar7 == 0x26) goto LAB_005d1ec4;
LAB_005d1cdc:
        uVar4 = 0xffffffff;
      }
    }
    else {
      uVar4 = epoll_wait(*(int *)(param_1 + 0x40),(epoll_event *)(auStack_4078 + 8),0x400,param_2);
      if (uVar4 == 0xffffffff) {
        piVar7 = (int *)__errno();
        puVar11 = &DAT_00d63fc4;
        if (*piVar7 != 0x26) goto LAB_005d1cdc;
LAB_005d1ec4:
        uVar4 = 0xffffffff;
        *puVar11 = 1;
      }
    }
    if ((((uVar15 & 1) != 0) && (DAT_00d63fc0 != 0)) &&
       (iVar3 = FUN_005d25fc(1,auStack_4078,0), iVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    piVar7 = (int *)__errno();
    iVar3 = *piVar7;
    if (DAT_00d596a8 == -1) {
      iVar5 = clock_getres(6,&local_4088);
      DAT_00d596a8 = 6;
      if (1000000 < local_4088.tv_nsec || iVar5 != 0) {
        DAT_00d596a8 = 1;
      }
    }
    uVar6 = clock_gettime((clockid_t)DAT_00d596a8,&local_4088);
    uVar8 = (ulong)uVar6;
    uVar14 = (ulong)(local_4088.tv_nsec + local_4088.tv_sec * 1000000000) / 1000000;
    if (uVar6 != 0) {
      uVar14 = 0;
    }
    *(ulong *)(param_1 + 0x220) = uVar14;
    *piVar7 = iVar3;
    if (uVar4 != 0xffffffff) {
      if (uVar4 == 0) {
        param_2 = local_40a4 - param_2;
      }
      else {
        uVar6 = *(uint *)(param_1 + 0x70);
        *(undefined1 **)(*(long *)(param_1 + 0x68) + (ulong)uVar6 * 8) = auStack_4078 + 8;
        *(long *)(*(long *)(param_1 + 0x68) + (ulong)(uVar6 + 1) * 8) = (long)(int)uVar4;
        if ((int)uVar4 < 1) {
          *(undefined8 *)(*(long *)(param_1 + 0x68) + (ulong)uVar6 * 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x68) + (ulong)(uVar6 + 1) * 8) = 0;
        }
        else {
          iVar3 = 0;
          uVar14 = (ulong)uVar4;
          __event = (epoll_event *)(auStack_4078 + 8);
          do {
            iVar5 = (__event->data).fd;
            if (iVar5 != -1) {
              puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + (long)iVar5 * 8);
              if (puVar9 == (undefined8 *)0x0) {
                uVar6 = epoll_ctl(*(int *)(param_1 + 0x40),2,iVar5,__event);
                uVar8 = (ulong)uVar6;
              }
              else {
                uVar1 = *(uint *)(puVar9 + 5);
                uVar6 = __event->events & (uVar1 | 0x18);
                __event->events = uVar6;
                if (uVar6 != 0) {
                  if (uVar6 == 0x10 || uVar6 == 8) {
                    __event->events = uVar6 | uVar1 & 5;
                  }
                  uVar8 = (*(code *)*puVar9)(param_1);
                  iVar3 = iVar3 + 1;
                }
              }
            }
            __event = __event + 1;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
          uVar6 = *(uint *)(param_1 + 0x70);
          *(undefined8 *)(*(long *)(param_1 + 0x68) + (ulong)uVar6 * 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x68) + (ulong)(uVar6 + 1) * 8) = 0;
          if (iVar3 != 0) {
            if (uVar4 != 0x400) goto LAB_005d1f34;
            param_2 = 0;
            local_40bc = local_40bc + -1;
            if (local_40bc == 0) goto LAB_005d1f34;
            goto LAB_005d1c68;
          }
        }
        if (param_2 == -1) goto LAB_005d1c68;
        if (param_2 == 0) goto LAB_005d1f34;
        uVar14 = *(ulong *)(param_1 + 0x220);
LAB_005d1f00:
        param_2 = local_40a4 + ((int)uVar10 - (int)uVar14);
        local_40a4 = param_2;
      }
      if (param_2 < 1) goto LAB_005d1f34;
      goto LAB_005d1c68;
    }
    if (iVar3 == 4) {
      if (param_2 != -1) {
        if (param_2 != 0) goto LAB_005d1f00;
        goto LAB_005d1f34;
      }
    }
    else if (iVar3 != 0x26) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  } while( true );
}


// ===== 005d1f80  FUN_005d1f80 =====

void FUN_005d1f80(int param_1)

{
  long lVar1;
  int iVar2;
  clockid_t __clock_id;
  timespec local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_1 == 1) && (DAT_00d596a8 == -1)) {
    iVar2 = clock_getres(6,&local_48);
    DAT_00d596a8 = 6;
    if (1000000 < local_48.tv_nsec || iVar2 != 0) {
      DAT_00d596a8 = 1;
    }
  }
  __clock_id = (clockid_t)DAT_00d596a8;
  if (param_1 != 1) {
    __clock_id = 1;
  }
  iVar2 = clock_gettime(__clock_id,&local_48);
  local_48.tv_nsec = local_48.tv_nsec + local_48.tv_sec * 1000000000;
  if (iVar2 != 0) {
    local_48.tv_nsec = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_48.tv_nsec);
}


// ===== 005d203c  FUN_005d203c =====

void FUN_005d203c(long *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  
  if (((int)param_1[6] != 0) || (param_1 + 4 != (long *)param_1[4])) {
    return;
  }
  plVar8 = (long *)param_1[1];
  plVar1 = (long *)(param_2 + 0x340);
  if ((long *)*param_1 == (long *)0x0) {
    plVar4 = (long *)param_1[2];
    iVar2 = (int)param_1[3];
    if (plVar8 != (long *)0x0) goto LAB_005d212c;
LAB_005d2130:
    plVar5 = plVar1;
    if ((plVar4 != (long *)0x0) && (plVar5 = plVar4, (long *)*plVar4 != param_1)) {
      plVar5 = plVar4 + 1;
    }
    *plVar5 = (long)plVar8;
  }
  else {
    if (plVar8 == (long *)0x0) {
      plVar4 = (long *)param_1[2];
      iVar2 = (int)param_1[3];
      plVar8 = (long *)*param_1;
LAB_005d212c:
      plVar8[2] = (long)plVar4;
      goto LAB_005d2130;
    }
    do {
      plVar5 = plVar8;
      plVar8 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
    plVar8 = (long *)plVar5[1];
    plVar3 = (long *)plVar5[2];
    iVar2 = (int)plVar5[3];
    if (plVar8 != (long *)0x0) {
      plVar8[2] = (long)plVar3;
    }
    plVar4 = plVar1;
    if ((plVar3 != (long *)0x0) && (plVar4 = plVar3, (long *)*plVar3 != plVar5)) {
      plVar4 = plVar3 + 1;
    }
    *plVar4 = (long)plVar8;
    lVar9 = *param_1;
    lVar12 = param_1[3];
    lVar11 = param_1[2];
    plVar6 = (long *)plVar5[2];
    plVar5[1] = param_1[1];
    *plVar5 = lVar9;
    plVar5[3] = lVar12;
    plVar5[2] = lVar11;
    plVar7 = (long *)param_1[2];
    plVar4 = plVar5;
    if (plVar6 != param_1) {
      plVar4 = plVar3;
    }
    plVar3 = plVar1;
    if ((plVar7 != (long *)0x0) && (plVar3 = plVar7, (long *)*plVar7 != param_1)) {
      plVar3 = plVar7 + 1;
    }
    *plVar3 = (long)plVar5;
    lVar9 = param_1[1];
    *(long **)(*param_1 + 0x10) = plVar5;
    plVar3 = plVar4;
    if (lVar9 != 0) {
      *(long **)(lVar9 + 0x10) = plVar5;
    }
    for (; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[2]) {
    }
  }
  if (iVar2 == 0) {
    do {
      if ((plVar8 != (long *)0x0) && ((int)plVar8[3] != 0)) goto LAB_005d2458;
      plVar5 = (long *)*plVar1;
      if (plVar8 == plVar5) goto LAB_005d2454;
      plVar3 = (long *)*plVar4;
      if (plVar3 == plVar8) {
        plVar8 = (long *)plVar4[1];
        plVar6 = plVar8;
        if ((int)plVar8[3] == 1) {
          plVar6 = (long *)*plVar8;
          *(undefined4 *)(plVar8 + 3) = 0;
          *(undefined4 *)(plVar4 + 3) = 1;
          plVar4[1] = (long)plVar6;
          if (plVar6 != (long *)0x0) {
            plVar6[2] = (long)plVar4;
          }
          lVar9 = plVar4[2];
          plVar8[2] = lVar9;
          if (lVar9 == 0) {
            *plVar1 = (long)plVar8;
            plVar5 = plVar8;
          }
          else {
            puVar10 = (undefined8 *)plVar4[2];
            if (plVar4 == (long *)*puVar10) {
              *puVar10 = plVar8;
            }
            else {
              puVar10[1] = plVar8;
              plVar6 = (long *)plVar4[1];
            }
          }
          *plVar8 = (long)plVar4;
          plVar4[2] = (long)plVar8;
        }
        plVar8 = (long *)*plVar6;
        if ((plVar8 != (long *)0x0) && ((int)plVar8[3] != 0)) {
          lVar9 = plVar6[1];
          if ((lVar9 == 0) || (*(int *)(lVar9 + 0x18) == 0)) {
            lVar9 = plVar8[1];
            *(undefined4 *)(plVar8 + 3) = 0;
            *(undefined4 *)(plVar6 + 3) = 1;
            *plVar6 = lVar9;
            if (lVar9 != 0) {
              *(long **)(lVar9 + 0x10) = plVar6;
            }
            lVar9 = plVar6[2];
            plVar8[2] = lVar9;
            plVar3 = plVar8;
            plVar7 = plVar1;
            if (lVar9 != 0) {
              plVar7 = (long *)plVar6[2];
              plVar3 = plVar5;
              if (plVar6 != (long *)*plVar7) {
                plVar7 = plVar7 + 1;
              }
            }
            *plVar7 = (long)plVar8;
            lVar11 = plVar4[3];
            plVar8[1] = (long)plVar6;
            plVar6[2] = (long)plVar8;
            plVar6 = (long *)plVar4[1];
            lVar9 = plVar6[1];
            *(int *)(plVar6 + 3) = (int)lVar11;
            *(undefined4 *)(plVar4 + 3) = 0;
            if (lVar9 != 0) goto LAB_005d240c;
          }
          else {
LAB_005d22d8:
            *(int *)(plVar6 + 3) = (int)plVar4[3];
            *(undefined4 *)(plVar4 + 3) = 0;
            plVar3 = plVar5;
LAB_005d240c:
            *(undefined4 *)(lVar9 + 0x18) = 0;
          }
          lVar9 = *plVar6;
          plVar4[1] = lVar9;
          if (lVar9 != 0) {
            *(long **)(lVar9 + 0x10) = plVar4;
          }
          lVar9 = plVar4[2];
          plVar6[2] = lVar9;
          plVar8 = plVar6;
          if (lVar9 != 0) {
            plVar1 = (long *)plVar4[2];
            plVar8 = plVar3;
            if (plVar4 != (long *)*plVar1) {
              plVar1 = plVar1 + 1;
            }
          }
          *plVar1 = (long)plVar6;
          *plVar6 = (long)plVar4;
          goto LAB_005d2450;
        }
        lVar9 = plVar6[1];
        if ((lVar9 != 0) && (*(int *)(lVar9 + 0x18) != 0)) goto LAB_005d22d8;
      }
      else {
        plVar6 = plVar3;
        if ((int)plVar3[3] == 1) {
          plVar6 = (long *)plVar3[1];
          *(undefined4 *)(plVar3 + 3) = 0;
          *(undefined4 *)(plVar4 + 3) = 1;
          *plVar4 = (long)plVar6;
          if (plVar6 != (long *)0x0) {
            plVar6[2] = (long)plVar4;
          }
          lVar9 = plVar4[2];
          plVar3[2] = lVar9;
          if (lVar9 == 0) {
            *plVar1 = (long)plVar3;
            plVar5 = plVar3;
          }
          else {
            puVar10 = (undefined8 *)plVar4[2];
            if (plVar4 == (long *)*puVar10) {
              *puVar10 = plVar3;
              plVar6 = (long *)*plVar4;
            }
            else {
              puVar10[1] = plVar3;
            }
          }
          plVar3[1] = (long)plVar4;
          plVar4[2] = (long)plVar3;
        }
        lVar9 = *plVar6;
        if ((lVar9 != 0) && (*(int *)(lVar9 + 0x18) != 0)) goto LAB_005d22b4;
        plVar8 = (long *)plVar6[1];
        if ((plVar8 != (long *)0x0) && ((int)plVar8[3] != 0)) goto LAB_005d22a8;
      }
      plVar5 = (long *)plVar4[2];
      *(undefined4 *)(plVar6 + 3) = 1;
      plVar8 = plVar4;
      plVar4 = plVar5;
    } while( true );
  }
  goto LAB_005d245c;
LAB_005d22a8:
  if ((lVar9 == 0) || (*(int *)(lVar9 + 0x18) == 0)) {
    lVar9 = *plVar8;
    *(undefined4 *)(plVar8 + 3) = 0;
    *(undefined4 *)(plVar6 + 3) = 1;
    plVar6[1] = lVar9;
    if (lVar9 != 0) {
      *(long **)(lVar9 + 0x10) = plVar6;
    }
    lVar9 = plVar6[2];
    plVar8[2] = lVar9;
    plVar3 = plVar8;
    plVar7 = plVar1;
    if (lVar9 != 0) {
      plVar7 = (long *)plVar6[2];
      plVar3 = plVar5;
      if (plVar6 != (long *)*plVar7) {
        plVar7 = plVar7 + 1;
      }
    }
    *plVar7 = (long)plVar8;
    lVar11 = plVar4[3];
    *plVar8 = (long)plVar6;
    plVar6[2] = (long)plVar8;
    plVar6 = (long *)*plVar4;
    lVar9 = *plVar6;
    *(int *)(plVar6 + 3) = (int)lVar11;
    *(undefined4 *)(plVar4 + 3) = 0;
    if (lVar9 != 0) goto LAB_005d2358;
  }
  else {
LAB_005d22b4:
    *(int *)(plVar6 + 3) = (int)plVar4[3];
    *(undefined4 *)(plVar4 + 3) = 0;
    plVar3 = plVar5;
LAB_005d2358:
    *(undefined4 *)(lVar9 + 0x18) = 0;
  }
  lVar9 = plVar6[1];
  *plVar4 = lVar9;
  if (lVar9 != 0) {
    *(long **)(lVar9 + 0x10) = plVar4;
  }
  lVar9 = plVar4[2];
  plVar6[2] = lVar9;
  plVar8 = plVar6;
  if (lVar9 != 0) {
    plVar1 = (long *)plVar4[2];
    plVar8 = plVar3;
    if (plVar4 != (long *)*plVar1) {
      plVar1 = plVar1 + 1;
    }
  }
  *plVar1 = (long)plVar6;
  plVar6[1] = (long)plVar4;
LAB_005d2450:
  plVar4[2] = (long)plVar6;
LAB_005d2454:
  if (plVar8 != (long *)0x0) {
LAB_005d2458:
    *(undefined4 *)(plVar8 + 3) = 0;
  }
LAB_005d245c:
  FUN_005d25bc(*(undefined4 *)(param_2 + 0x348),(int)param_1[8]);
  free(param_1);
  return;
}


// ===== 005d2478  FUN_005d2478 =====

void FUN_005d2478(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if ((uVar1 >> 0xe & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 8);
  plVar2 = *(long **)(lVar3 + 0x340);
  if (plVar2 != (long *)0x0) {
    do {
      if ((int)plVar2[8] <= *(int *)(param_1 + 0x80)) {
        if (*(int *)(param_1 + 0x80) <= (int)plVar2[8]) break;
        plVar2 = plVar2 + 1;
      }
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)0x0);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(uint *)(param_1 + 0x58) = uVar1 & 0xffffbfff;
  if ((uVar1 >> 0xd & 1) != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + -1;
  }
  **(undefined8 **)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(*(long *)(param_1 + 0x70) + 8) = *(undefined8 *)(param_1 + 0x78);
  FUN_005d203c(plVar2,*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 005d24f4  FUN_005d24f4 =====

undefined8 FUN_005d24f4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__errno();
  *puVar1 = 0x26;
  return 0xffffffff;
}


// ===== 005d2518  FUN_005d2518 =====

void FUN_005d2518(ulong param_1,ulong param_2)

{
  syscall(0x13,param_1 & 0xffffffff,param_2 & 0xffffffff);
  return;
}


// ===== 005d2538  FUN_005d2538 =====

void FUN_005d2538(ulong param_1)

{
  syscall(0x14,param_1 & 0xffffffff);
  return;
}


// ===== 005d2554  FUN_005d2554 =====

void FUN_005d2554(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_5;
  syscall(0x16,param_1 & 0xffffffff,param_2,param_3 & 0xffffffff,param_4 & 0xffffffff,&local_30,8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005d25bc  FUN_005d25bc =====

void FUN_005d25bc(ulong param_1,ulong param_2)

{
  syscall(0x1c,param_1 & 0xffffffff,param_2 & 0xffffffff);
  return;
}


// ===== 005d25dc  FUN_005d25dc =====

void FUN_005d25dc(undefined8 param_1,ulong param_2)

{
  syscall(0x3b,param_1,param_2 & 0xffffffff);
  return;
}


// ===== 005d25fc  FUN_005d25fc =====

int FUN_005d25fc(int param_1,sigset_t *param_2,sigset_t *param_3)

{
  int iVar1;
  int *piVar2;
  
  if (DAT_00d63fcc == '\x01') {
    iVar1 = sigprocmask(param_1,param_2,param_3);
    return iVar1;
  }
  iVar1 = pthread_sigmask(param_1,param_2,param_3);
  if (iVar1 != 0) {
    piVar2 = (int *)__errno();
    if ((*piVar2 == 0x16) && (iVar1 = sigprocmask(param_1,param_2,param_3), iVar1 == 0)) {
      DAT_00d63fcc = 1;
      return 0;
    }
    iVar1 = -1;
  }
  return iVar1;
}


// ===== 005d269c  FUN_005d269c =====

void FUN_005d269c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d25aa0;
  FUN_0061f310(param_1 + 1);
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined1 *)(param_1 + 0x9b) = 0;
  return;
}


// ===== 005d26d8  FUN_005d26d8 =====

void * FUN_005d26d8(long param_1,undefined8 param_2,undefined4 param_3,int param_4,int param_5)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x990);
  FUN_00628a40(pvVar1,param_2,param_1 + 8,param_1 + 0x270,0,param_3,(long)param_4,(long)param_5);
  return pvVar1;
}


// ===== 005d274c  FUN_005d274c =====

void * FUN_005d274c(long param_1,undefined8 param_2,undefined4 param_3,int param_4,int param_5,
                   undefined8 param_6)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x990);
  FUN_00628a40(pvVar1,param_2,param_1 + 8,param_1 + 0x270,param_6,param_3,(long)param_4,
               (long)param_5);
  return pvVar1;
}


// ===== 005d27c4  FUN_005d27c4 =====

void FUN_005d27c4(void)

{
  return;
}


// ===== 005d27cc  FUN_005d27cc =====

void FUN_005d27cc(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 005d27d8  FUN_005d27d8 =====

void FUN_005d27d8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_00d25ad0;
  *(undefined4 *)(puVar1 + 1) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00d0f740(1,puVar1 + 1);
  }
  *param_1 = puVar1;
  return;
}


// ===== 005d282c  FUN_005d282c =====

void FUN_005d282c(long param_1)

{
  FUN_00d0f740(1,param_1 + 8);
  return;
}


// ===== 005d2850  FUN_005d2850 =====

bool FUN_005d2850(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 1);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 005d28a8  FUN_005d28a8 =====

void FUN_005d28a8(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 005d28b4  FUN_005d28b4 =====

void FUN_005d28b4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_006cc8ac(param_1);
  FUN_0067267c(param_1);
  FUN_00671484(param_1);
  return;
}


// ===== 005d28f4  FUN_005d28f4 =====

uint FUN_005d28f4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  uint extraout_w1;
  ulong extraout_x1;
  ulong extraout_x1_00;
  uint uVar2;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  undefined1 *local_28;
  
  FUN_006cc6b8(param_2);
  if ((extraout_x1 >> 0x20 & 1) == 0) {
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    local_28 = &DAT_aaaaaaaaaaaaaaaa;
    local_30 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    thunk_FUN_0067460c(&local_50,param_2);
    if (((((ulong)local_28 & 1) == 0) && (uVar1 = FUN_00672600(param_2), (uVar1 >> 0x20 & 1) == 0))
       && (FUN_006713b8(param_2), (extraout_x1_00 & 1) == 0)) {
      FUN_0066feb4(param_2);
      uVar2 = extraout_w1;
    }
    else {
      uVar2 = 1;
    }
    if (((char)local_28 == '\x01') && (local_40 != (undefined1 *)0x0)) {
      if (puStack_38 + -1 < puStack_38 + -(long)local_40) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puStack_38 = local_40;
      operator_delete(local_40);
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2 & 1;
}


// ===== 005d29d0  FUN_005d29d0 =====

void FUN_005d29d0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005d29e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}


// ===== 005d29e8  FUN_005d29e8 =====

undefined8 FUN_005d29e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_48;
  undefined4 local_40;
  undefined1 *local_38;
  undefined1 *puStack_30;
  undefined1 *local_28;
  
  auVar6 = FUN_006cc6b8(param_3);
  if ((auVar6._8_8_ >> 0x20 & 1) != 0) {
    uVar4 = FUN_006ccabc(param_2,auVar6._0_8_,auVar6._8_8_ & 0xffffffff);
    return uVar4;
  }
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  thunk_FUN_0067460c(&local_80,param_3);
  puVar3 = local_60;
  puVar2 = puStack_68;
  puVar1 = local_70;
  if ((char)local_58 == '\x01') {
    local_48 = local_80;
    local_40 = puStack_78._0_4_;
    puStack_68 = (undefined1 *)0x0;
    local_60 = (undefined1 *)0x0;
    local_70 = (undefined1 *)0x0;
    puStack_30 = puVar2;
    local_38 = puVar1;
    local_28 = puVar3;
    uVar4 = FUN_00673efc(&local_48,0,0,0);
    if (local_38 != (undefined1 *)0x0) {
      if (puStack_30 + -1 < puStack_30 + -(long)local_38) goto LAB_005d2b8c;
      puStack_30 = local_38;
      operator_delete(local_38);
    }
  }
  else {
    uVar5 = FUN_00672600(param_3);
    if ((uVar5 >> 0x20 & 1) == 0) {
      auVar6 = FUN_006713b8(param_3);
      if ((auVar6 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        auVar6 = FUN_0066feb4(param_3);
        if ((auVar6 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
          uVar4 = 0;
        }
        else {
          local_48 = auVar6._0_8_;
          uVar4 = FUN_0066ff9c(&local_48,0,0,0);
        }
      }
      else {
        local_48 = auVar6._0_8_;
        uVar4 = FUN_006715b8(&local_48);
      }
    }
    else {
      uVar4 = FUN_0067273c(uVar5 & 0xffffffff,0,0,0);
    }
  }
  if (((char)local_58 == '\x01') && (local_70 != (undefined1 *)0x0)) {
    if (puStack_68 + -1 < puStack_68 + -(long)local_70) {
LAB_005d2b8c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    puStack_68 = local_70;
    operator_delete(local_70);
  }
  return uVar4;
}


// ===== 005d2ba0  FUN_005d2ba0 =====

bool FUN_005d2ba0(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 8) == 1;
}


// ===== 005d2bb8  FUN_005d2bb8 =====

void FUN_005d2bb8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_00d25b28;
  *(undefined4 *)(puVar1 + 1) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00d0f740(1,puVar1 + 1);
  }
  *param_1 = puVar1;
  return;
}


// ===== 005d2c0c  FUN_005d2c0c =====

void FUN_005d2c0c(long param_1)

{
  FUN_00d0f740(1,param_1 + 8);
  return;
}


// ===== 005d2c30  FUN_005d2c30 =====

bool FUN_005d2c30(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 1);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 005d2c88  FUN_005d2c88 =====

void FUN_005d2c88(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 005d2c94  FUN_005d2c94 =====

void FUN_005d2c94(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  thunk_FUN_006d1998(param_1);
  FUN_006cecd4(param_1);
  FUN_006ce85c(param_1);
  return;
}


// ===== 005d2cd4  FUN_005d2cd4 =====

void FUN_005d2cd4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 *local_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  undefined1 *local_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
  local_160 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  local_140 = &DAT_aaaaaaaaaaaaaaaa;
  local_128 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_110 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  thunk_FUN_006d1cdc(&local_160,param_3);
  if (((ulong)local_100 & 1) == 0) {
    puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
    local_f0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
    local_d0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    local_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    thunk_FUN_006d0710(&local_f0,param_3);
    if (((ulong)local_90 & 1) == 0) {
      local_78 = 0xaaaaaaaa;
      auVar4 = FUN_006ceaa4(param_3);
      local_80 = auVar4._0_8_;
      local_78 = CONCAT31(local_78._1_3_,auVar4[8]);
      if ((auVar4 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        FUN_006cedf4(&local_60,&local_80);
        goto LAB_005d2e08;
      }
      local_64 = 0xaaaaaaaa;
      auVar4 = FUN_006ce5fc(param_3);
      local_70 = auVar4._0_8_;
      local_68 = auVar4._8_4_;
      local_64 = CONCAT31(local_64._1_3_,auVar4[0xc]);
      if ((auVar4._8_8_ >> 0x20 & 1) != 0) {
        FUN_006ce990(&local_60,&local_70);
        goto LAB_005d2e08;
      }
      local_34 = 0xaaaaaaaa;
      auVar4 = FUN_006cd710(param_3);
      local_40 = auVar4._0_8_;
      local_38 = auVar4._8_4_;
      local_34 = CONCAT31(local_34._1_3_,auVar4[0xc]);
      if ((auVar4._8_8_ >> 0x20 & 1) != 0) {
        FUN_006cd968(&local_60,&local_40);
        goto LAB_005d2e08;
      }
      uVar1 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      thunk_FUN_006d0ee8(&local_60,&local_f0);
LAB_005d2e08:
      uVar1 = 1;
      param_1[1] = uStack_58;
      *param_1 = local_60;
      param_1[3] = uStack_48;
      param_1[2] = uStack_50;
    }
    *(undefined1 *)(param_1 + 4) = uVar1;
    if (((ulong)local_90 & 1) != 0) {
      if (puStack_a8 != (undefined1 *)0x0) {
        if (local_a0 + -1 < local_a0 + -(long)puStack_a8) goto LAB_005d2f40;
        local_a0 = puStack_a8;
        operator_delete(puStack_a8);
      }
      if (local_d0 != (undefined1 *)0x0) {
        uVar3 = (ulong)(((long)local_d0 - (long)puStack_c8 << 0x3e) -
                       ((long)local_d0 - (long)puStack_c8)) >> 2;
        if ((ulong)(puStack_c8 + (-4 - ((long)puStack_c8 << 0x3e))) >> 2 <= uVar3) {
          uVar3 = (ulong)(puStack_c8 + (-4 - ((long)puStack_c8 << 0x3e))) >> 2;
        }
        puVar2 = puStack_c8;
        if ((1 < uVar3) && ((((int)local_d0 - (int)puStack_c8 | -(int)puStack_c8) & 3U) == 0)) {
          uVar3 = uVar3 & 0x3ffffffffffffffe;
          puVar2 = puStack_c8 + uVar3 * -4;
          do {
            uVar3 = uVar3 - 2;
          } while (uVar3 != 0);
        }
        do {
          if (puVar2 == local_d0) {
            puStack_c8 = local_d0;
            operator_delete(local_d0);
            goto LAB_005d2ecc;
          }
          puVar2 = puVar2 + -4;
        } while (puVar2 != (undefined1 *)0x0);
        goto LAB_005d2f40;
      }
    }
  }
  else {
    thunk_FUN_006d1c6c(&local_f0,&local_160);
    *(undefined1 *)(param_1 + 4) = 1;
    param_1[1] = puStack_e8;
    *param_1 = local_f0;
    param_1[3] = puStack_d8;
    param_1[2] = puStack_e0;
  }
LAB_005d2ecc:
  if ((((ulong)local_100 & 1) == 0) || (local_128 == (undefined1 *)0x0)) {
    return;
  }
  uVar3 = (ulong)(((long)local_128 - (long)local_120 << 0x3e) - ((long)local_128 - (long)local_120))
          >> 2;
  if ((ulong)(local_120 + (-4 - ((long)local_120 << 0x3e))) >> 2 <= uVar3) {
    uVar3 = (ulong)(local_120 + (-4 - ((long)local_120 << 0x3e))) >> 2;
  }
  puVar2 = local_120;
  if ((1 < uVar3) && ((((int)local_128 - (int)local_120 | -(int)local_120) & 3U) == 0)) {
    uVar3 = uVar3 & 0x3ffffffffffffffe;
    puVar2 = local_120 + uVar3 * -4;
    do {
      uVar3 = uVar3 - 2;
    } while (uVar3 != 0);
  }
  do {
    if (puVar2 == local_128) {
      local_120 = local_128;
      operator_delete(local_128);
      return;
    }
    puVar2 = puVar2 + -4;
  } while (puVar2 != (undefined1 *)0x0);
LAB_005d2f40:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 005d2f7c  FUN_005d2f7c =====

undefined8
FUN_005d2f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *__dest;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auVar7 [16];
  undefined1 *local_120;
  undefined8 uStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined5 uStack_f8;
  undefined3 uStack_f3;
  undefined5 uStack_f0;
  undefined3 uStack_eb;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined5 uStack_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  undefined3 uStack_7b;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  
  uStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_110 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_f8 = 0xaaaaaaaaaa;
  uStack_f3 = 0xaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  local_e8 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_f0 = 0xaaaaaaaaaa;
  uStack_eb = 0xaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  thunk_FUN_006d1cdc(&local_120,param_3);
  puVar3 = local_e8;
  if (((ulong)local_c0 & 1) != 0) {
    uVar4 = (long)local_e0 - (long)local_e8;
    if (uVar4 == 0) {
      puVar1 = (undefined1 *)0x0;
      puVar5 = (undefined1 *)0x0;
    }
    else {
      if ((long)uVar4 < 0) {
LAB_005d346c:
                    /* WARNING: Subroutine does not return */
        FUN_005d348c();
      }
      puVar1 = (undefined1 *)operator_new(uVar4);
      puVar5 = puVar1 + uVar4;
      memcpy(puVar1,puVar3,uVar4);
    }
    puStack_a8 = uStack_118;
    local_b0 = local_120;
    puStack_98 = puStack_108;
    puStack_a0 = puStack_110;
    local_58 = (undefined1 *)CONCAT44(local_58._4_4_,local_c8._0_4_);
    uStack_88 = uStack_f8;
    local_90 = local_100;
    uStack_83 = uStack_f3;
    uStack_80 = uStack_f0;
    local_60 = local_d0;
    local_78 = puVar1;
    local_70 = puVar5;
    local_68 = puVar5;
    uVar2 = FUN_006d1860(param_2,&local_b0,param_4);
    if (local_78 == (undefined1 *)0x0) {
LAB_005d32f0:
      if (((ulong)local_c0 & 1) == 0) {
        return uVar2;
      }
      if (local_e8 == (undefined1 *)0x0) {
        return uVar2;
      }
      uVar4 = (ulong)(((long)local_e8 - (long)local_e0 << 0x3e) - ((long)local_e8 - (long)local_e0))
              >> 2;
      if ((ulong)(local_e0 + (-4 - ((long)local_e0 << 0x3e))) >> 2 <= uVar4) {
        uVar4 = (ulong)(local_e0 + (-4 - ((long)local_e0 << 0x3e))) >> 2;
      }
      puVar3 = local_e0;
      if ((1 < uVar4) && ((((int)local_e8 - (int)local_e0 | -(int)local_e0) & 3U) == 0)) {
        uVar4 = uVar4 & 0x3ffffffffffffffe;
        puVar3 = local_e0 + uVar4 * -4;
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      do {
        if (puVar3 == local_e8) {
          local_e0 = local_e8;
          puVar3 = local_e8;
          goto LAB_005d3440;
        }
        puVar3 = puVar3 + -4;
      } while (puVar3 != (undefined1 *)0x0);
    }
    else {
      uVar4 = (ulong)(((long)local_78 - (long)local_70 << 0x3e) - ((long)local_78 - (long)local_70))
              >> 2;
      if ((ulong)(local_70 + (-4 - ((long)local_70 << 0x3e))) >> 2 <= uVar4) {
        uVar4 = (ulong)(local_70 + (-4 - ((long)local_70 << 0x3e))) >> 2;
      }
      puVar3 = local_70;
      if ((1 < uVar4) && ((((int)local_78 - (int)local_70 | -(int)local_70) & 3U) == 0)) {
        uVar4 = uVar4 & 0x3ffffffffffffffe;
        puVar3 = local_70 + uVar4 * -4;
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      do {
        if (puVar3 == local_78) {
          local_70 = local_78;
          operator_delete(local_78);
          goto LAB_005d32f0;
        }
        puVar3 = puVar3 + -4;
      } while (puVar3 != (undefined1 *)0x0);
    }
LAB_005d3418:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_110 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_f8 = 0xaaaaaaaaaa;
  uStack_f3 = 0xaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  local_e8 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_f0 = 0xaaaaaaaaaa;
  uStack_eb = 0xaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  thunk_FUN_006d0710(&local_120,param_3);
  puVar3 = local_100;
  if (((ulong)local_c0 & 1) == 0) {
    uStack_118 = (undefined1 *)CONCAT44(uStack_118._4_4_,0xaaaaaaaa);
    auVar7 = FUN_006ceaa4(param_3);
    local_120 = auVar7._0_8_;
    uStack_118 = (undefined1 *)CONCAT71(uStack_118._1_7_,auVar7[8]);
    if ((auVar7 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
      uStack_118._4_4_ = 0xaaaaaaaa;
      auVar7 = FUN_006ce5fc(param_3);
      local_120 = auVar7._0_8_;
      uStack_118._0_5_ = auVar7._8_5_;
      if ((auVar7._8_8_ >> 0x20 & 1) == 0) {
        auVar7 = FUN_006cd710(param_3);
        local_120 = auVar7._0_8_;
        if ((auVar7._8_8_ >> 0x20 & 1) == 0) {
          uVar2 = 0;
        }
        else {
          uStack_118 = (undefined1 *)CONCAT44(uStack_118._4_4_,auVar7._8_4_);
          uVar2 = FUN_006cd984(&local_120,*param_4,0,0,0);
        }
      }
      else {
        uVar2 = FUN_006ce9ac(&local_120,*param_4);
      }
    }
    else {
      uVar2 = FUN_006cee10(&local_120,*param_4,0,0,0);
    }
  }
  else {
    uVar4 = CONCAT35(uStack_f3,uStack_f8) - (long)local_100;
    if (uVar4 == 0) {
      puVar5 = (undefined1 *)0x0;
      puVar1 = (undefined1 *)0x0;
    }
    else {
      if ((long)uVar4 < 0) goto LAB_005d346c;
      puVar1 = (undefined1 *)operator_new(uVar4);
      puVar5 = puVar1 + uVar4;
      memcpy(puVar1,puVar3,uVar4);
    }
    puVar3 = puStack_d8;
    uVar4 = (long)local_d0 - (long)puStack_d8;
    if (uVar4 == 0) {
      puVar6 = (undefined1 *)0x0;
      __dest = (undefined1 *)0x0;
    }
    else {
      if ((long)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d34c0();
      }
      __dest = (undefined1 *)operator_new(uVar4);
      puVar6 = __dest + uVar4;
      memcpy(__dest,puVar3,uVar4);
    }
    puStack_a8 = uStack_118;
    local_b0 = local_120;
    puStack_98 = puStack_108;
    puStack_a0 = puStack_110;
    uStack_88 = SUB85(puVar5,0);
    uStack_83 = (undefined3)((ulong)puVar5 >> 0x28);
    local_78 = local_e8;
    local_70 = (undefined1 *)CONCAT44(local_70._4_4_,local_e0._0_4_);
    local_90 = puVar1;
    uStack_80 = uStack_88;
    uStack_7b = uStack_83;
    local_68 = __dest;
    local_60 = puVar6;
    local_58 = puVar6;
    uVar2 = FUN_006cf850(&local_b0,*param_4,0,0,0);
    if (local_68 != (undefined1 *)0x0) {
      if (local_60 + -1 < local_60 + -(long)local_68) goto LAB_005d3418;
      local_60 = local_68;
      operator_delete(local_68);
    }
    if (local_90 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)CONCAT35(uStack_83,uStack_88);
      uVar4 = (ulong)(((long)local_90 - (long)puVar3 << 0x3e) - ((long)local_90 - (long)puVar3)) >>
              2;
      if ((ulong)(puVar3 + (-4 - ((long)puVar3 << 0x3e))) >> 2 <= uVar4) {
        uVar4 = (ulong)(puVar3 + (-4 - ((long)puVar3 << 0x3e))) >> 2;
      }
      if ((1 < uVar4) && ((((int)local_90 - (int)uStack_88 | -(int)uStack_88) & 3U) == 0)) {
        uVar4 = uVar4 & 0x3ffffffffffffffe;
        puVar3 = puVar3 + uVar4 * -4;
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      do {
        if (puVar3 == local_90) {
          uStack_88 = SUB85(local_90,0);
          uStack_83 = (undefined3)((ulong)local_90 >> 0x28);
          operator_delete(local_90);
          goto LAB_005d3378;
        }
        puVar3 = puVar3 + -4;
      } while (puVar3 != (undefined1 *)0x0);
      goto LAB_005d3418;
    }
LAB_005d3378:
    if (((ulong)local_c0 & 1) != 0) {
      if (puStack_d8 != (undefined1 *)0x0) {
        if (local_d0 + -1 < local_d0 + -(long)puStack_d8) goto LAB_005d3418;
        local_d0 = puStack_d8;
        operator_delete(puStack_d8);
      }
      if (local_100 != (undefined1 *)0x0) {
        puVar3 = (undefined1 *)CONCAT35(uStack_f3,uStack_f8);
        uVar4 = (ulong)(((long)local_100 - (long)puVar3 << 0x3e) - ((long)local_100 - (long)puVar3))
                >> 2;
        if ((ulong)(puVar3 + (-4 - ((long)puVar3 << 0x3e))) >> 2 <= uVar4) {
          uVar4 = (ulong)(puVar3 + (-4 - ((long)puVar3 << 0x3e))) >> 2;
        }
        if ((1 < uVar4) && ((((int)local_100 - (int)uStack_f8 | -(int)uStack_f8) & 3U) == 0)) {
          uVar4 = uVar4 & 0x3ffffffffffffffe;
          puVar3 = puVar3 + uVar4 * -4;
          do {
            uVar4 = uVar4 - 2;
          } while (uVar4 != 0);
        }
        do {
          if (puVar3 == local_100) {
            uStack_f8 = SUB85(local_100,0);
            uStack_f3 = (undefined3)((ulong)local_100 >> 0x28);
            puVar3 = local_100;
LAB_005d3440:
            operator_delete(puVar3);
            return uVar2;
          }
          puVar3 = puVar3 + -4;
        } while (puVar3 != (undefined1 *)0x0);
        goto LAB_005d3418;
      }
    }
  }
  return uVar2;
}


// ===== 005d3474  FUN_005d3474 =====

bool FUN_005d3474(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 8) == 1;
}


// ===== 005d348c  FUN_005d348c =====

void FUN_005d348c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 005d34a4  FUN_005d34a4 =====

void FUN_005d34a4(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("length_error was thrown in -fno-exceptions mode with message \"%s\"",param_1);
}


// ===== 005d34c0  FUN_005d34c0 =====

void FUN_005d34c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 005d34d8  FUN_005d34d8 =====

void FUN_005d34d8(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0xffffffffffffffff;
  *(undefined2 *)((long)param_1 + 0xc) = 0;
  return;
}


// ===== 005d34f0  FUN_005d34f0 =====

void FUN_005d34f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined8 *)((long)param_1 + 6) = *(undefined8 *)((long)param_2 + 6);
  *param_1 = uVar1;
  return;
}


// ===== 005d3508  FUN_005d3508 =====

void FUN_005d3508(void)

{
  return;
}


// ===== 005d3510  FUN_005d3510 =====

void FUN_005d3510(char *param_1,char *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  char *__dest;
  
  if (param_2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:1063: libc++ Hardening assertion __s != nullptr failed: basic_string(const char*) detected nullptr\n"
              );
  }
  __n = strlen(param_2);
  if (__n < 0x7ffffffffffffff7) {
    if (__n < 0x17) {
      param_1[0x17] = (char)__n;
      __dest = param_1;
    }
    else {
      uVar1 = (__n & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      __dest = (char *)operator_new(uVar2);
      *(char **)param_1 = __dest;
      *(size_t *)(param_1 + 8) = __n;
      *(ulong *)(param_1 + 0x10) = uVar2 | 0x8000000000000000;
    }
    if (__dest <= __dest + __n) {
      if ((__dest <= param_2) && (param_2 < __dest + __n)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                  );
      }
      memmove(__dest,param_2,__n);
      __dest[__n] = '\0';
      return;
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
                    /* WARNING: Subroutine does not return */
  FUN_005d45ec();
}


// ===== 005d360c  FUN_005d360c =====

void FUN_005d360c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5,long *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *local_78;
  long *local_70;
  long *local_68;
  
  uVar7 = *(undefined8 *)(param_5 + 6);
  uVar3 = *(undefined8 *)(param_5 + 8);
  uVar1 = *param_5;
  uVar2 = param_5[1];
  uVar8 = *(undefined8 *)(*param_6 + 0x18);
  local_68 = *(long **)(param_5 + 0x1a);
  uVar5 = *(undefined1 *)(param_5 + 10);
  uVar4 = param_5[0xb];
  uVar6 = *(undefined1 *)(param_5 + 4);
  if (local_68 != (long *)0x0) {
    (**(code **)*local_68)();
  }
  local_70 = *(long **)(param_5 + 0x28);
  if (local_70 != (long *)0x0) {
    (**(code **)*local_70)();
  }
  local_78 = *(long **)(param_5 + 0x2a);
  if (local_78 != (long *)0x0) {
    (**(code **)*local_78)();
  }
  uVar7 = FUN_005d7460(param_2,param_4,uVar8,uVar7,uVar2,uVar1,uVar3,uVar5,uVar4,uVar6,&local_68,
                       &local_70,param_5 + 0x20,&local_78,param_5[0xc]);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 8))(local_78);
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 8))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 8))();
  }
  FUN_005d3774(param_1,param_2,param_3,param_5,param_6,uVar7);
  return;
}


// ===== 005d3774  FUN_005d3774 =====

void FUN_005d3774(undefined8 *param_1,long *param_2,undefined8 param_3,undefined4 *param_4,
                 long *param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_00d25b78;
  param_1[1] = &PTR_FUN_00d25c80;
  param_1[2] = &PTR_FUN_00d25cc0;
  lVar4 = *param_2;
  param_1[3] = lVar4;
  if (lVar4 != 0) {
    FUN_00d0f740(1,lVar4 + 8);
  }
  lVar5 = param_2[4];
  lVar4 = param_2[3];
  lVar6 = param_2[1];
  param_1[5] = param_2[2];
  param_1[4] = lVar6;
  param_1[7] = lVar5;
  param_1[6] = lVar4;
  FUN_0042f4d0(param_1 + 8,param_4);
  puVar2 = (undefined8 *)*param_5;
  param_1[0x1e] = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)();
  }
  param_1[0x1f] = param_6;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  uVar3 = FUN_00417e08();
  if ((uVar3 & 1) == 0) {
    FUN_00623bb0(&DAT_001f6220,"../../audio/audio_receive_stream.cc",0x3e9,
                 "AudioReceiveStreamImpl: ",*param_4);
  }
  (**(code **)(*(long *)param_1[0x1f] + 200))((long *)param_1[0x1f],param_3);
  iVar1 = param_4[2];
  (**(code **)(*(long *)param_1[0x1f] + 0xe8))
            ((long *)param_1[0x1f],iVar1 != 0,
             (ulong)(uint)(iVar1 / 0x14 + (iVar1 >> 0x1f)) - ((long)iVar1 * 0x66666667 >> 0x3f));
  (**(code **)(*(long *)param_1[0x1f] + 0xf0))((long *)param_1[0x1f],param_4[3]);
                    /* WARNING: Could not recover jumptable at 0x005d38bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0x1f] + 0x20))((long *)param_1[0x1f],param_4 + 0x14);
  return;
}


// ===== 005d38c0  FUN_005d38c0 =====

void FUN_005d38c0(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f6220,"../../audio/audio_receive_stream.cc",0x4a1,
                 "~AudioReceiveStreamImpl: ",*(undefined4 *)(param_1 + 0x40));
  }
  if (*(char *)(param_1 + 0x100) == '\x01') {
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6220,"../../audio/audio_receive_stream.cc",0x681,
                   "AudioReceiveStreamImpl::Stop: ",*(undefined4 *)(param_1 + 0x40));
    }
    (**(code **)(**(long **)(param_1 + 0xf8) + 0x30))();
    *(undefined1 *)(param_1 + 0x100) = 0;
    FUN_005d4d9c(*(undefined8 *)(param_1 + 0xf0),param_1);
  }
  (**(code **)(**(long **)(param_1 + 0xf8) + 0xd0))();
  plVar3 = *(long **)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = *(long **)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (*(long **)(param_1 + 0xf0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xf0) + 8))();
  }
  FUN_008420e8(param_1 + 0x40);
  plVar3 = *(long **)(param_1 + 0x18);
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  FUN_008425a0(param_1 + 0x10);
  return;
}


// ===== 005d39f4  FUN_005d39f4 =====

undefined4 FUN_005d39f4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}


// ===== 005d3a00  FUN_005d3a00 =====

void FUN_005d3a00(long param_1)

{
  ulong uVar1;
  
  if (*(char *)(param_1 + 0x100) == '\x01') {
    uVar1 = FUN_00417e08();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6220,"../../audio/audio_receive_stream.cc",0x681,
                   "AudioReceiveStreamImpl::Stop: ",*(undefined4 *)(param_1 + 0x40));
    }
    (**(code **)(**(long **)(param_1 + 0xf8) + 0x30))();
    *(undefined1 *)(param_1 + 0x100) = 0;
    FUN_005d4d9c(*(undefined8 *)(param_1 + 0xf0),param_1);
    return;
  }
  return;
}


// ===== 005d3a80  FUN_005d3a80 =====

void FUN_005d3a80(long param_1)

{
  FUN_005d38c0(param_1 + -8);
  return;
}


// ===== 005d3a8c  FUN_005d3a8c =====

void FUN_005d3a8c(long param_1)

{
  FUN_005d38c0(param_1 + -0x10);
  return;
}


// ===== 005d3a98  FUN_005d3a98 =====

void FUN_005d3a98(void *param_1)

{
  FUN_005d38c0();
  operator_delete(param_1);
  return;
}


// ===== 005d3ac8  FUN_005d3ac8 =====

void FUN_005d3ac8(long param_1)

{
  FUN_005d38c0((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 005d3afc  FUN_005d3afc =====

void FUN_005d3afc(long param_1)

{
  FUN_005d38c0((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}


// ===== 005d3b30  FUN_005d3b30 =====

void FUN_005d3b30(long param_1,long *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  uVar1 = (**(code **)(*param_2 + 0x10))
                    (param_2,*(undefined4 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0xf8));
  plVar2 = *(long **)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = uVar1;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005d3b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 005d3b98  FUN_005d3b98 =====

void FUN_005d3b98(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005d3bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 005d3bbc  FUN_005d3bbc =====

void FUN_005d3bbc(long param_1)

{
  ulong uVar1;
  
  if ((*(byte *)(param_1 + 0x100) & 1) != 0) {
    return;
  }
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f6220,"../../audio/audio_receive_stream.cc",0x629,
                 "AudioReceiveStreamImpl::Start: ",*(undefined4 *)(param_1 + 0x40));
  }
  (**(code **)(**(long **)(param_1 + 0xf8) + 0x28))();
  *(undefined1 *)(param_1 + 0x100) = 1;
  FUN_005d4c90(*(undefined8 *)(param_1 + 0xf0),param_1);
  return;
}


// ===== 005d3c3c  FUN_005d3c3c =====

undefined1 FUN_005d3c3c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x100);
}


// ===== 005d3c48  FUN_005d3c48 =====

void FUN_005d3c48(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *local_18;
  
  local_18 = (long *)*param_2;
  plVar1 = *(long **)(param_1 + 0xf8);
  *param_2 = 0;
  (**(code **)(*plVar1 + 0x120))(plVar1,&local_18);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  return;
}


// ===== 005d3c9c  FUN_005d3c9c =====

void FUN_005d3c9c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *local_38;
  
  plVar5 = (long *)(param_1 + 0x98);
  puVar4 = (undefined8 *)(param_1 + 0x90);
  local_38 = puVar4;
  FUN_005d46d8(&local_38,*plVar5);
  *(undefined8 *)(param_1 + 0x90) = *param_2;
  plVar1 = param_2 + 1;
  lVar2 = *plVar1;
  *plVar5 = lVar2;
  lVar3 = param_2[2];
  *(long *)(param_1 + 0xa0) = lVar3;
  if (lVar3 == 0) {
    *puVar4 = plVar5;
  }
  else {
    *(long **)(lVar2 + 0x10) = plVar5;
    *param_2 = plVar1;
    *plVar1 = 0;
    param_2[2] = 0;
  }
  (**(code **)(**(long **)(param_1 + 0xf8) + 0x20))(*(long **)(param_1 + 0xf8),puVar4);
  return;
}


// ===== 005d3d34  FUN_005d3d34 =====

void FUN_005d3d34(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x48) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x48) = param_2;
                    /* WARNING: Could not recover jumptable at 0x005d3d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf8) + 0xe8))
            (*(long **)(param_1 + 0xf8),param_2 != 0,(long)param_2 / 0x14);
  return;
}


// ===== 005d3d7c  FUN_005d3d7c =====

void FUN_005d3d7c(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x4c) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x4c) = param_2;
                    /* WARNING: Could not recover jumptable at 0x005d3da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf8) + 0xf0))(*(long **)(param_1 + 0xf8));
  return;
}


// ===== 005d3da8  FUN_005d3da8 =====

void FUN_005d3da8(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x50) = param_2;
                    /* WARNING: Could not recover jumptable at 0x005d3dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf8) + 0xf8))(*(long **)(param_1 + 0xf8));
  return;
}


// ===== 005d3dc4  FUN_005d3dc4 =====

void FUN_005d3dc4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *local_18;
  
  local_18 = (long *)*param_2;
  plVar1 = *(long **)(param_1 + 0xf8);
  *param_2 = 0;
  (**(code **)(*plVar1 + 0x128))(plVar1,&local_18);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  return;
}


// ===== 005d3e18  FUN_005d3e18 =====

void FUN_005d3e18(undefined4 *param_1,long param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 extraout_w1;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 *local_270;
  undefined8 uStack_268;
  undefined1 *local_260;
  undefined8 uStack_258;
  undefined1 *local_250;
  undefined8 uStack_248;
  undefined1 *local_240;
  undefined1 *local_230;
  undefined1 *puStack_228;
  undefined1 *puStack_220;
  undefined1 *puStack_218;
  undefined8 local_210;
  undefined1 *puStack_208;
  undefined1 *local_200;
  undefined1 *puStack_1f8;
  undefined1 *local_1f0;
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *puStack_1d8;
  undefined1 *local_1d0;
  undefined1 *puStack_1c8;
  undefined1 *local_1c0;
  undefined1 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 *local_1a8;
  undefined1 *local_1a0;
  undefined8 uStack_198;
  undefined1 *puStack_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined1 *puStack_178;
  undefined1 *local_170;
  undefined1 *puStack_168;
  undefined8 local_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined1 *local_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a0;
  undefined8 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  
  memcpy(param_1,&DAT_001fb700,0x218);
  FUN_00841fa8(param_1);
  plVar4 = *(long **)(param_2 + 0xf8);
  *param_1 = *(undefined4 *)(param_2 + 0x40);
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*plVar4 + 0x38))(&local_a0);
  if ((char)local_58 == '\x01') {
    puVar6 = (undefined8 *)((ulong)&local_a0 | 8);
    if ((undefined8 *)(param_1 + 0x16) != puVar6) {
      if (*(char *)((long)param_1 + 0x6f) < '\0') {
        puVar1 = local_90;
        puVar2 = puStack_98;
        if (-1 < (long)puStack_88) {
          puVar1 = (undefined1 *)((ulong)puStack_88 >> 0x38);
          puVar2 = puVar6;
        }
        FUN_00547f08(param_1 + 0x16,puVar2,puVar1);
      }
      else if ((long)puStack_88 < 0) {
        FUN_00547fc0(param_1 + 0x16,puStack_98,local_90);
      }
      else {
        uVar10 = *puVar6;
        uVar7 = puVar6[2];
        *(undefined8 *)(param_1 + 0x18) = puVar6[1];
        *(undefined8 *)(param_1 + 0x16) = uVar10;
        *(undefined8 *)(param_1 + 0x1a) = uVar7;
      }
    }
    if (((ulong)local_58 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    *(undefined1 *)(param_1 + 0x1d) = 1;
    param_1[0x1c] = local_a0._0_4_;
  }
  puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  local_150 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  local_140 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  local_130 = &DAT_aaaaaaaaaaaaaaaa;
  local_118 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  local_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  local_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
  local_160 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(**(long **)(param_2 + 0xf8) + 0xd8))(&local_160);
  plVar4 = *(long **)(param_2 + 0xf8);
  param_1[6] = puStack_148._0_4_;
  param_1[0x10] = (undefined4)local_160;
  param_1[0x1e] = local_160._4_4_;
  param_1[0x14] = local_130._0_4_;
  *(undefined1 **)(param_1 + 4) = local_150;
  *(undefined1 **)(param_1 + 2) = puStack_158;
  *(undefined1 *)(param_1 + 0x52) = local_118._0_1_;
  *(undefined1 **)(param_1 + 0x4e) = puStack_128;
  *(undefined1 **)(param_1 + 0x50) = puStack_120;
  *(undefined1 **)(param_1 + 10) = puStack_138;
  *(undefined1 **)(param_1 + 8) = local_140;
  *(undefined1 *)(param_1 + 0x60) = puStack_108._0_1_;
  *(undefined1 **)(param_1 + 0x5e) = local_110;
  *(undefined1 *)(param_1 + 100) = local_f8._0_1_;
  *(undefined1 **)(param_1 + 0x62) = local_100;
  *(undefined1 *)(param_1 + 0x68) = puStack_e8._0_1_;
  *(undefined1 **)(param_1 + 0x66) = local_f0;
  *(undefined1 *)(param_1 + 0x72) = local_c0._0_1_;
  *(undefined1 **)(param_1 + 0x6c) = puStack_d8;
  *(undefined1 **)(param_1 + 0x6a) = local_e0;
  param_1[0x76] = local_b0._0_4_;
  *(undefined1 **)(param_1 + 0x6e) = local_d0;
  *(undefined1 **)(param_1 + 0x70) = puStack_c8;
  *(undefined1 **)(param_1 + 0x74) = local_b8;
  uVar3 = (**(code **)(*plVar4 + 0x78))();
  plVar4 = *(long **)(param_2 + 0xf8);
  param_1[0x21] = uVar3;
  uVar3 = (**(code **)(*plVar4 + 0x50))(plVar4);
  plVar4 = *(long **)(param_2 + 0xf8);
  param_1[0x22] = uVar3;
  uVar7 = (**(code **)(*plVar4 + 0x58))(plVar4);
  plVar4 = *(long **)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0x24) = uVar7;
  uVar7 = (**(code **)(*plVar4 + 0x60))();
  plVar4 = *(long **)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar7;
  plVar9 = *(long **)(param_2 + 0xf8);
  uVar5 = (**(code **)(*plVar4 + 0x10))();
  if ((long)uVar5 < 0) {
    uVar8 = -(-uVar5 / 1000) - (ulong)(500 < -uVar5 % 1000);
  }
  else {
    uVar8 = uVar5 / 1000;
    if (499 < uVar5 % 1000) {
      uVar8 = uVar8 + 1;
    }
  }
  uVar7 = (**(code **)(*plVar9 + 0x98))(plVar9,uVar8);
  *(undefined8 *)(param_1 + 0x5a) = uVar7;
  plVar4 = *(long **)(param_2 + 0xf8);
  *(undefined1 *)(param_1 + 0x5c) = extraout_w1;
  puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_200 = &DAT_aaaaaaaaaaaaaaaa;
  local_1e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1c0 = &DAT_aaaaaaaaaaaaaaaa;
  local_1a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1b0 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_198 = &DAT_aaaaaaaaaaaaaaaa;
  local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_190 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
  local_180 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
  local_170 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_208 = &DAT_aaaaaaaaaaaaaaaa;
  local_210 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*plVar4 + 0x68))(&local_210,plVar4,param_3 & 1);
  auVar12._8_8_ = puStack_1d8;
  auVar12._0_8_ = local_1e0;
  dVar11 = (double)NEON_ucvtf(local_1e8);
  auVar12 = NEON_ucvtf(auVar12,8);
  *(undefined1 **)(param_1 + 0x12) = local_1a0;
  plVar4 = *(long **)(param_2 + 0xf8);
  *(undefined1 **)(param_1 + 0x2c) = puStack_1f8;
  *(undefined1 **)(param_1 + 0x2a) = local_200;
  dVar13 = (double)NEON_ucvtf(local_1a8);
  *(double *)(param_1 + 0x30) = dVar11 / 1000.0;
  dVar11 = (double)NEON_ucvtf(local_170);
  auVar14._6_2_ = 0;
  auVar14._0_6_ = CONCAT24((short)((ulong)uStack_198 >> 0x10),(int)uStack_198) & 0xffff0000ffff;
  auVar14._8_2_ = (short)puStack_190;
  auVar14._10_2_ = 0;
  auVar14._12_2_ = (short)((ulong)puStack_190 >> 0x10);
  auVar14._14_2_ = 0;
  auVar15 = NEON_ucvtf(auVar14,4);
  *(double *)(param_1 + 0x36) = auVar12._8_8_ / 1000.0;
  *(double *)(param_1 + 0x34) = auVar12._0_8_ / 1000.0;
  *(undefined1 **)(param_1 + 0x3a) = local_1c0;
  *(undefined1 **)(param_1 + 0x38) = puStack_1c8;
  *(ulong *)(param_1 + 0x40) =
       CONCAT44(auVar15._12_4_ * 6.1035156e-05,auVar15._8_4_ * 6.1035156e-05);
  *(ulong *)(param_1 + 0x3e) = CONCAT44(auVar15._4_4_ * 6.1035156e-05,auVar15._0_4_ * 6.1035156e-05)
  ;
  param_1[0x1f] = (uint)(ushort)local_210;
  param_1[0x20] = (uint)local_210._2_2_;
  *(undefined1 **)(param_1 + 0xe) = puStack_1b0;
  *(undefined1 **)(param_1 + 0xc) = puStack_1b8;
  param_1[0x42] = (float)uStack_198._6_2_ / 16384.0;
  *(undefined1 **)(param_1 + 0x26) = puStack_208;
  *(double *)(param_1 + 0x3c) = dVar13 / 1000000.0;
  *(undefined1 **)(param_1 + 0x32) = local_1d0;
  param_1[0x43] = (float)uStack_198._4_2_ / 16384.0;
  *(undefined1 **)(param_1 + 0x2e) = local_1f0;
  *(undefined1 **)(param_1 + 0x54) = local_180;
  *(undefined1 **)(param_1 + 0x44) = puStack_178;
  puStack_228 = &DAT_aaaaaaaaaaaaaaaa;
  local_230 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_218 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_220 = &DAT_aaaaaaaaaaaaaaaa;
  *(double *)(param_1 + 0x56) = dVar11 / 1000.0;
  *(undefined1 **)(param_1 + 0x58) = puStack_168;
  (**(code **)(*plVar4 + 0x70))(&local_230);
  auVar15[8] = 0xaa;
  auVar15._0_8_ = &DAT_aaaaaaaaaaaaaaaa;
  auVar15[9] = 0xaa;
  auVar15[10] = 0xaa;
  auVar15[0xb] = 0xaa;
  auVar15[0xc] = 0xaa;
  auVar15[0xd] = 0xaa;
  auVar15[0xe] = 0xaa;
  auVar15[0xf] = 0xaa;
  plVar4 = *(long **)(param_2 + 0xf8);
  *(undefined1 **)(param_1 + 0x48) = puStack_228;
  *(undefined1 **)(param_1 + 0x46) = local_230;
  *(undefined1 **)(param_1 + 0x4c) = puStack_218;
  *(undefined1 **)(param_1 + 0x4a) = puStack_220;
  local_240 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_268 = auVar15._8_8_;
  local_260 = &DAT_aaaaaaaaaaaaaaaa;
  local_250 = &DAT_aaaaaaaaaaaaaaaa;
  local_270 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_258 = uStack_268;
  uStack_248 = uStack_268;
  (**(code **)(*plVar4 + 0xe0))(&local_270);
  *(undefined8 *)(param_1 + 0x7a) = uStack_268;
  *(undefined1 **)(param_1 + 0x78) = local_270;
  *(undefined8 *)(param_1 + 0x7e) = uStack_258;
  *(undefined1 **)(param_1 + 0x7c) = local_260;
  *(undefined8 *)(param_1 + 0x82) = uStack_248;
  *(undefined1 **)(param_1 + 0x80) = local_250;
  *(undefined1 **)(param_1 + 0x84) = local_240;
  if ((char)local_58 == '\x01') {
    FUN_006678ac((ulong)&local_a0 | 8);
  }
  return;
}


// ===== 005d42a4  FUN_005d42a4 =====

void FUN_005d42a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005d42b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf8) + 0x18))();
  return;
}


// ===== 005d42b8  FUN_005d42b8 =====

void FUN_005d42b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005d42c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf8) + 0x48))();
  return;
}


// ===== 005d42cc  FUN_005d42cc =====

void FUN_005d42cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005d42dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf8) + 0xb0))();
  return;
}


// ===== 005d42e0  FUN_005d42e0 =====

void FUN_005d42e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005d42f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf8) + 0xb8))();
  return;
}


// ===== 005d42f4  FUN_005d42f4 =====

void FUN_005d42f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005d4304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf8) + 0xa0))();
  return;
}


// ===== 005d4308  FUN_005d4308 =====

void FUN_005d4308(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005d4318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf8) + 0xa8))();
  return;
}


// ===== 005d431c  FUN_005d431c =====

void FUN_005d431c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005d432c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf8) + 0x118))();
  return;
}


// ===== 005d4330  FUN_005d4330 =====

void FUN_005d4330(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005d4340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf8) + 0x100))();
  return;
}


// ===== 005d4344  FUN_005d4344 =====

void FUN_005d4344(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005d4354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf0) + 0x100))();
  return;
}


// ===== 005d4358  FUN_005d4358 =====

void FUN_005d4358(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005d4368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf8) + 0x108))();
  return;
}


// ===== 005d436c  FUN_005d436c =====

void FUN_005d436c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005d437c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf0) + 0x108))();
  return;
}


// ===== 005d4380  FUN_005d4380 =====

undefined4 FUN_005d4380(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}


// ===== 005d438c  FUN_005d438c =====

undefined4 FUN_005d438c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}


// ===== 005d4398  FUN_005d4398 =====

void FUN_005d4398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005d43a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf8) + 0x110))();
  return;
}


// ===== 005d43ac  FUN_005d43ac =====

void FUN_005d43ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005d43bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf0) + 0x110))();
  return;
}


// ===== 005d43c0  FUN_005d43c0 =====

undefined4 FUN_005d43c0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}


// ===== 005d43cc  FUN_005d43cc =====

undefined4 FUN_005d43cc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}


// ===== 005d43d8  FUN_005d43d8 =====

void FUN_005d43d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005d43e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf8) + 0xc0))();
  return;
}


// ===== 005d43ec  FUN_005d43ec =====

void FUN_005d43ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005d43fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xe8) + 0xc0))();
  return;
}


// ===== 005d4400  FUN_005d4400 =====

void FUN_005d4400(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005d4410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf8) + 0x88))();
  return;
}


// ===== 005d4414  FUN_005d4414 =====

void FUN_005d4414(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005d4424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xe8) + 0x88))();
  return;
}


// ===== 005d4428  FUN_005d4428 =====

void FUN_005d4428(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005d4438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf8) + 0x90))();
  return;
}


// ===== 005d443c  FUN_005d443c =====

void FUN_005d443c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005d444c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xe8) + 0x90))();
  return;
}


// ===== 005d4450  FUN_005d4450 =====

void FUN_005d4450(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005d4460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf8) + 0x80))();
  return;
}


// ===== 005d4464  FUN_005d4464 =====

void FUN_005d4464(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005d4474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xe8) + 0x80))();
  return;
}


// ===== 005d4478  FUN_005d4478 =====

void FUN_005d4478(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005d4488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf8) + 0x40))();
  return;
}


// ===== 005d448c  FUN_005d448c =====

void FUN_005d448c(long param_1,undefined8 ***param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
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
    cVar3 = *(char *)(param_1 + 0x8f);
    *(undefined1 *)((long)__dest + param_3) = 0;
    if (cVar3 < '\0') {
      operator_delete(*(void **)(param_1 + 0x78));
    }
    *(ulong *)(param_1 + 0x80) = uStack_50;
    *(undefined8 ***)(param_1 + 0x78) = local_58;
    *(ulong *)(param_1 + 0x88) = local_48;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 005d45a4  FUN_005d45a4 =====

void FUN_005d45a4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x44) = param_2;
                    /* WARNING: Could not recover jumptable at 0x005d45bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf8) + 0x130))(*(long **)(param_1 + 0xf8));
  return;
}


// ===== 005d45c0  FUN_005d45c0 =====

long FUN_005d45c0(long param_1)

{
  return param_1 + 0x78;
}


// ===== 005d45cc  FUN_005d45cc =====

void FUN_005d45cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005d45dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf8) + 0x138))();
  return;
}


// ===== 005d45e0  FUN_005d45e0 =====

long FUN_005d45e0(long param_1)

{
  return param_1 + 8;
}


// ===== 005d45ec  FUN_005d45ec =====

void FUN_005d45ec(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("basic_string");
}


// ===== 005d4604  FUN_005d4604 =====

long * FUN_005d4604(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 == (undefined8 *)0x0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = (long *)operator_new(0x68);
    if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(undefined4 *)(plVar2 + 4) = *(undefined4 *)(param_2 + 4);
    FUN_00667388(plVar2 + 5,param_2 + 5);
    lVar3 = FUN_005d4604(param_1,*param_2,param_3);
    lVar4 = FUN_005d4604(param_1,param_2[1],param_3);
    uVar1 = *(undefined1 *)(param_2 + 3);
    *plVar2 = lVar3;
    plVar2[1] = lVar4;
    *(undefined1 *)(plVar2 + 3) = uVar1;
    if (lVar3 != 0) {
      *(long **)(lVar3 + 0x10) = plVar2;
      lVar4 = plVar2[1];
    }
    if (lVar4 != 0) {
      *(long **)(lVar4 + 0x10) = plVar2;
    }
  }
  return plVar2;
}


// ===== 005d46d8  FUN_005d46d8 =====

void FUN_005d46d8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_005d46d8(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar1 = (undefined8 *)param_2[1];
      FUN_006678ac(param_2 + 5);
      operator_delete(param_2);
      param_2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


// ===== 005d4754  FUN_005d4754 =====

void FUN_005d4754(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 005d476c  FUN_005d476c =====

long * FUN_005d476c(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,
                   undefined8 param_5)

{
  long lVar1;
  undefined8 local_38;
  
  if (param_3 == (long *)0x0) {
    local_38 = param_1;
    FUN_005d46d8(&local_38,param_2);
    param_2 = (long *)0x0;
  }
  else {
    *(int *)(param_2 + 4) = (int)param_3[4];
    FUN_006678fc(param_2 + 5,param_3 + 5);
    *(char *)(param_2 + 3) = (char)param_3[3];
    lVar1 = *param_3;
    if (*param_2 == 0) {
      if (lVar1 != 0) {
        lVar1 = FUN_005d4604(param_5,lVar1,param_5);
        *param_2 = lVar1;
        *(long **)(lVar1 + 0x10) = param_2;
      }
    }
    else {
      lVar1 = FUN_005d476c(param_1,*param_2,lVar1,0,param_5);
      *param_2 = lVar1;
    }
    lVar1 = param_3[1];
    if (param_2[1] == 0) {
      if (lVar1 != 0) {
        lVar1 = FUN_005d4604(param_5,lVar1,param_5);
        param_2[1] = lVar1;
        *(long **)(lVar1 + 0x10) = param_2;
      }
    }
    else {
      lVar1 = FUN_005d476c(param_1,param_2[1],lVar1,0,param_5);
      param_2[1] = lVar1;
    }
  }
  return param_2;
}


// ===== 005d4868  FUN_005d4868 =====

void FUN_005d4868(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

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
  if ((ulong)((long)(uVar2 - (long)pvVar6) >> 1) < param_4) {
    if (pvVar6 == (void *)0x0) {
LAB_005d49fc:
      if (-1 < (long)param_4) {
        uVar5 = uVar2;
        if (uVar2 <= param_4) {
          uVar5 = param_4;
        }
        if (0x7ffffffffffffffd < uVar2) {
          uVar5 = 0x7fffffffffffffff;
        }
        if (-1 < (long)uVar5) {
          pvVar6 = operator_new(uVar5 * 2);
          *param_1 = pvVar6;
          param_1[1] = pvVar6;
          param_1[2] = (void *)((long)pvVar6 + uVar5 * 2);
          memcpy(pvVar6,param_2,param_3 - (long)param_2);
          lVar1 = (long)pvVar6 + (param_3 - (long)param_2);
          goto LAB_005d4a4c;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_005d4754();
    }
    pvVar3 = (void *)param_1[1];
    uVar5 = (ulong)((long)pvVar3 + ((long)pvVar3 << 0x3f) + -2) >> 1;
    uVar2 = (ulong)(((long)pvVar6 - (long)pvVar3 << 0x3f) - ((long)pvVar6 - (long)pvVar3)) >> 1;
    if (uVar5 <= uVar2) {
      uVar2 = uVar5;
    }
    if ((1 < uVar2) && ((((int)pvVar6 - (uint)pvVar3 | (uint)pvVar3) & 1) == 0)) {
      uVar2 = uVar2 & 0x7ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar2 * -2);
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
        goto LAB_005d49fc;
      }
      pvVar3 = (void *)((long)pvVar3 + -2);
    } while (pvVar3 != (void *)0x0);
  }
  else {
    __n = param_1[1] - (long)pvVar6;
    if ((ulong)((long)__n >> 1) < param_4) {
      memmove(pvVar6,param_2,__n);
      pvVar6 = (void *)param_1[1];
      __n_00 = param_3 - (long)((long)param_2 + __n);
      memmove(pvVar6,(void *)((long)param_2 + __n),__n_00);
      lVar1 = (long)pvVar6 + __n_00;
LAB_005d4a4c:
      param_1[1] = lVar1;
      return;
    }
    memmove(pvVar6,param_2,param_3 - (long)param_2);
    lVar1 = param_1[1];
    lVar4 = (long)pvVar6 + (param_3 - (lVar1 + (long)param_2));
    uVar2 = (ulong)((lVar4 << 0x3f) - lVar4) >> 1;
    uVar5 = (lVar1 + (lVar1 << 0x3f)) - 2U >> 1;
    if (uVar5 <= uVar2) {
      uVar2 = uVar5;
    }
    lVar4 = (long)pvVar6 + (param_3 - (long)param_2);
    if ((1 < uVar2) &&
       (((((int)pvVar6 + (int)param_3) - ((uint)lVar1 + (int)param_2) | (uint)lVar1) & 1) == 0)) {
      uVar2 = uVar2 & 0x7ffffffffffffffe;
      lVar1 = lVar1 + uVar2 * -2;
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    do {
      if (lVar1 == lVar4) {
        param_1[1] = lVar4;
        return;
      }
      lVar1 = lVar1 + -2;
    } while (lVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 005d4a74  FUN_005d4a74 =====

void FUN_005d4a74(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x5d4a7c);
  (*pcVar1)();
}


// ===== 005d4a7c  FUN_005d4a7c =====

undefined8 FUN_005d4a7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 005d4a88  FUN_005d4a88 =====

long FUN_005d4a88(long param_1)

{
  return param_1 + 0x30;
}


// ===== 005d4a94  FUN_005d4a94 =====

void FUN_005d4a94(long param_1,byte param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f1906,"../../audio/audio_state.cc",0x1f9,"SetPlayout(",param_2 & 1,
                 &DAT_001ca519);
  }
  plVar4 = *(long **)(param_1 + 0x18);
  if ((param_2 & 1) == 0) {
    lVar3 = 0xd0;
  }
  else {
    if (((*(long *)(param_1 + 0x3de0) == *(long *)(param_1 + 0x3de8)) ||
        (uVar2 = (**(code **)(*plVar4 + 0xd8))(plVar4), (uVar2 & 1) != 0)) ||
       (iVar1 = (**(code **)(*plVar4 + 0xa0))(plVar4), iVar1 != 0)) goto LAB_005d4b40;
    lVar3 = 200;
  }
  (**(code **)(*plVar4 + lVar3))(plVar4);
LAB_005d4b40:
  *(byte *)(param_1 + 0x29) = param_2 & 1;
  FUN_005d4b60(param_1);
  return;
}


// ===== 005d4b60  FUN_005d4b60 =====

void FUN_005d4b60(long param_1)

{
  void *pvVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined1 uStack_51;
  long local_50 [2];
  code *local_40;
  code *pcStack_38;
  void *local_18;
  
  if ((*(long *)(param_1 + 0x3de0) != *(long *)(param_1 + 0x3de8)) &&
     ((*(byte *)(param_1 + 0x29) & 1) == 0)) {
    uVar3 = FUN_00841d54(param_1 + 0x3dd8);
    if ((uVar3 & 1) == 0) {
      uVar4 = FUN_005d6490();
      local_40 = FUN_004473ec;
      pcStack_38 = FUN_005d6144;
      local_50[0] = param_1 + 0x30;
      uVar5 = FUN_00622394();
      FUN_00841754(&local_18,uVar4,local_50,0,uVar5,&uStack_51);
      pvVar1 = local_18;
      pvVar6 = *(void **)(param_1 + 0x3dd8);
      local_18 = (void *)0x0;
      *(void **)(param_1 + 0x3dd8) = pvVar1;
      if (pvVar6 != (void *)0x0) {
        iVar2 = FUN_00d0f7a0(0xffffffff,pvVar6);
        if (iVar2 == 1) {
          operator_delete(pvVar6);
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
  FUN_00841cf8(param_1 + 0x3dd8);
  return;
}


// ===== 005d4c90  FUN_005d4c90 =====

void FUN_005d4c90(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *local_28;
  
  puVar4 = *(ulong **)(param_1 + 0x3de0);
  lVar1 = (long)*(ulong **)(param_1 + 0x3de8) - (long)puVar4;
  if (lVar1 != 0) {
    uVar6 = lVar1 >> 3;
    puVar5 = puVar4;
    do {
      uVar7 = uVar6 >> 1;
      puVar4 = puVar5 + uVar7 + 1;
      uVar6 = uVar6 + ~uVar7;
      if (param_2 <= (long *)puVar5[uVar7]) {
        puVar4 = puVar5;
        uVar6 = uVar7;
      }
      puVar5 = puVar4;
    } while (uVar6 != 0);
  }
  local_28 = param_2;
  if ((puVar4 == *(ulong **)(param_1 + 0x3de8)) || (param_2 < (long *)*puVar4)) {
    FUN_005d5630(param_1 + 0x3de0,puVar4,&local_28);
  }
  plVar8 = *(long **)(param_1 + 8);
  uVar3 = (**(code **)(*local_28 + 0xa0))(local_28);
  (**(code **)(*plVar8 + 0x20))(plVar8,uVar3);
  if (*(char *)(param_1 + 0x29) == '\x01') {
    plVar8 = *(long **)(param_1 + 0x18);
    uVar6 = (**(code **)(*plVar8 + 0xd8))(plVar8);
    if (((uVar6 & 1) == 0) && (iVar2 = (**(code **)(*plVar8 + 0xa0))(plVar8), iVar2 == 0)) {
      (**(code **)(*plVar8 + 200))(plVar8);
    }
  }
  FUN_005d4b60(param_1);
  return;
}


// ===== 005d4d9c  FUN_005d4d9c =====

void FUN_005d4d9c(long param_1,long *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong *__dest;
  ulong *puVar6;
  long *plVar7;
  ulong *puVar8;
  long lVar9;
  
  __dest = *(ulong **)(param_1 + 0x3de0);
  puVar8 = *(ulong **)(param_1 + 0x3de8);
  if ((long)puVar8 - (long)__dest != 0) {
    uVar2 = (long)puVar8 - (long)__dest >> 3;
    puVar6 = __dest;
    do {
      uVar4 = uVar2 >> 1;
      __dest = puVar6 + uVar4 + 1;
      uVar2 = uVar2 + ~uVar4;
      if (param_2 <= (long *)puVar6[uVar4]) {
        __dest = puVar6;
        uVar2 = uVar4;
      }
      puVar6 = __dest;
    } while (uVar2 != 0);
  }
  puVar6 = __dest;
  if (__dest == puVar8) {
    lVar9 = 0;
  }
  else {
    if ((long *)*__dest <= param_2) {
      puVar6 = __dest + 1;
    }
    lVar9 = (long)puVar6 - (long)__dest;
    if (puVar6 < __dest) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:1170: libc++ Hardening assertion __first <= __last failed: vector::erase(first, last) called with invalid range\n"
                );
    }
  }
  if (__dest != puVar6) {
    memmove(__dest,(void *)((long)__dest + lVar9),(long)puVar8 - ((long)__dest + lVar9));
    lVar3 = *(long *)(param_1 + 0x3de8);
    lVar5 = ((long)__dest + (long)puVar8) - ((long)puVar6 + lVar3);
    uVar2 = (ulong)((lVar5 << 0x3d) - lVar5) >> 3;
    uVar4 = (lVar3 - (lVar3 << 0x3d)) - 8U >> 3;
    if (uVar4 <= uVar2) {
      uVar2 = uVar4;
    }
    if ((1 < uVar2) && ((((int)__dest - ((int)puVar6 + (int)lVar3) | -(int)lVar3) & 7U) == 0)) {
      uVar2 = uVar2 & 0x1ffffffffffffffe;
      lVar3 = lVar3 + uVar2 * -8;
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    while (lVar3 != (long)puVar8 - lVar9) {
      lVar3 = lVar3 + -8;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    *(long *)(param_1 + 0x3de8) = (long)puVar8 - lVar9;
  }
  plVar7 = *(long **)(param_1 + 8);
  uVar1 = (**(code **)(*param_2 + 0xa0))(param_2);
  (**(code **)(*plVar7 + 0x28))(plVar7,uVar1);
  if (*(long *)(param_1 + 0x3de0) == *(long *)(param_1 + 0x3de8)) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0xd0))();
  }
  FUN_005d4b60(param_1);
  return;
}


// ===== 005d4f40  FUN_005d4f40 =====

void FUN_005d4f40(long param_1,byte param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f1906,"../../audio/audio_state.cc",0x3b1,"SetRecording(",param_2 & 1,
                 &DAT_001ca519);
  }
  plVar4 = *(long **)(param_1 + 0x18);
  if ((param_2 & 1) == 0) {
    lVar3 = 0xe8;
  }
  else {
    if (((*(long *)(param_1 + 0x3e08) == 0) ||
        (uVar2 = (**(code **)(*plVar4 + 0xf0))(plVar4), (uVar2 & 1) != 0)) ||
       (iVar1 = (**(code **)(*plVar4 + 0xb8))(plVar4), iVar1 != 0)) goto LAB_005d4fe4;
    lVar3 = 0xe0;
  }
  (**(code **)(*plVar4 + lVar3))(plVar4);
LAB_005d4fe4:
  *(byte *)(param_1 + 0x28) = param_2 & 1;
  return;
}


// ===== 005d5000  FUN_005d5000 =====

void FUN_005d5000(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 local_40;
  undefined1 uStack_31;
  undefined1 *local_18;
  
  local_18 = (undefined1 *)&local_40;
  local_40 = param_2;
  lVar2 = FUN_005d5a88(0,param_1 + 0x3df8,param_1 + 0x3df8,&DAT_001f94c3,&local_18,&uStack_31);
  *(undefined4 *)(lVar2 + 0x28) = param_3;
  *(undefined8 *)(lVar2 + 0x30) = param_4;
  FUN_005d50c4(param_1);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    plVar4 = *(long **)(param_1 + 0x18);
    uVar3 = (**(code **)(*plVar4 + 0xf0))(plVar4);
    if (((uVar3 & 1) == 0) && (iVar1 = (**(code **)(*plVar4 + 0xb8))(plVar4), iVar1 == 0)) {
      (**(code **)(*plVar4 + 0xe0))(plVar4);
    }
  }
  return;
}


// ===== 005d50c4  FUN_005d50c4 =====

void FUN_005d50c4(long param_1)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  long local_28;
  
  plVar6 = *(long **)(param_1 + 0x3df8);
  local_58 = (long *)0x0;
  local_50 = (long *)0x0;
  local_48 = (long *)0x0;
  if (plVar6 == (long *)(param_1 + 0x3e00)) {
    local_68 = (long *)0x0;
    iVar4 = 8000;
    uVar5 = 1;
    local_60 = (long *)0x0;
    local_70 = (long *)0x0;
  }
  else {
    iVar4 = 8000;
    uVar5 = 1;
    do {
      local_28 = plVar6[4];
      if (local_50 < local_48) {
        if (local_50 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        local_68 = local_50 + 1;
        *local_50 = local_28;
      }
      else {
        local_68 = (long *)FUN_005d5498(&local_58,&local_28);
      }
      if (iVar4 <= (int)plVar6[5]) {
        iVar4 = (int)plVar6[5];
      }
      if (uVar5 <= (ulong)plVar6[6]) {
        uVar5 = plVar6[6];
      }
      plVar1 = (long *)plVar6[1];
      plVar7 = plVar6;
      if ((long *)plVar6[1] == (long *)0x0) {
        do {
          plVar6 = (long *)plVar7[2];
          bVar2 = plVar7 != (long *)*plVar6;
          plVar7 = plVar6;
        } while (bVar2);
      }
      else {
        do {
          plVar6 = plVar1;
          plVar1 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      local_60 = local_48;
      local_70 = local_58;
      local_50 = local_68;
    } while (plVar6 != (long *)(param_1 + 0x3e00));
  }
  local_58 = (long *)0x0;
  local_50 = (long *)0x0;
  local_48 = (long *)0x0;
  FUN_005d72d8(param_1 + 0x30,&local_70,iVar4,uVar5);
  if (local_70 == (long *)0x0) {
LAB_005d5250:
    if (local_58 == (long *)0x0) {
      return;
    }
    uVar3 = (ulong)((long)local_50 + (-8 - ((long)local_50 << 0x3d))) >> 3;
    uVar5 = (ulong)(((long)local_58 - (long)local_50 << 0x3d) - ((long)local_58 - (long)local_50))
            >> 3;
    if (uVar3 <= uVar5) {
      uVar5 = uVar3;
    }
    plVar6 = local_50;
    if ((1 < uVar5) && ((((int)local_58 - (int)local_50 | -(int)local_50) & 7U) == 0)) {
      uVar5 = uVar5 & 0x1ffffffffffffffe;
      plVar6 = local_50 + -uVar5;
      do {
        uVar5 = uVar5 - 2;
      } while (uVar5 != 0);
    }
    do {
      if (plVar6 == local_58) {
        local_50 = local_58;
        operator_delete(local_58);
        return;
      }
      plVar6 = plVar6 + -1;
    } while (plVar6 != (long *)0x0);
  }
  else {
    uVar3 = (ulong)((long)local_68 + (-8 - ((long)local_68 << 0x3d))) >> 3;
    uVar5 = (ulong)(((long)local_70 - (long)local_68 << 0x3d) - ((long)local_70 - (long)local_68))
            >> 3;
    if (uVar3 <= uVar5) {
      uVar5 = uVar3;
    }
    plVar6 = local_68;
    if ((1 < uVar5) && ((((int)local_70 - (int)local_68 | -(int)local_68) & 7U) == 0)) {
      uVar5 = uVar5 & 0x1ffffffffffffffe;
      plVar6 = local_68 + -uVar5;
      do {
        uVar5 = uVar5 - 2;
      } while (uVar5 != 0);
    }
    do {
      if (plVar6 == local_70) {
        local_68 = local_70;
        operator_delete(local_70);
        goto LAB_005d5250;
      }
      plVar6 = plVar6 + -1;
    } while (plVar6 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 005d5310  FUN_005d5310 =====

void FUN_005d5310(long param_1,ulong param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar3 = *(long **)(param_1 + 0x3e00);
  if (plVar3 != (long *)0x0) {
    plVar6 = plVar3;
    do {
      while (param_2 < (ulong)plVar6[4]) {
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) goto LAB_005d53d8;
      }
      if (param_2 <= (ulong)plVar6[4]) {
        if (plVar6 != (long *)(param_1 + 0x3e00)) {
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
          if (*(long **)(param_1 + 0x3df8) == plVar6) {
            *(long **)(param_1 + 0x3df8) = plVar5;
          }
          *(long *)(param_1 + 0x3e08) = *(long *)(param_1 + 0x3e08) + -1;
          FUN_005d5d48(plVar3,plVar6);
          if (plVar6 == (long *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          operator_delete(plVar6);
        }
        break;
      }
      plVar6 = (long *)plVar6[1];
    } while (plVar6 != (long *)0x0);
  }
LAB_005d53d8:
  FUN_005d50c4(param_1);
  if (*(long *)(param_1 + 0x3e08) == 0) {
                    /* WARNING: Could not recover jumptable at 0x005d5418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0xe8))();
    return;
  }
  return;
}


// ===== 005d5430  FUN_005d5430 =====

void FUN_005d5430(long param_1)

{
  FUN_005d73e8(param_1 + 0x30);
  return;
}


// ===== 005d543c  FUN_005d543c =====

void FUN_005d543c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x3e18);
  FUN_005d61c4(puVar1,param_2);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
  }
  *param_1 = puVar1;
  return;
}


// ===== 005d5498  FUN_005d5498 =====

undefined8 * FUN_005d5498(long *param_1,undefined8 *param_2)

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
    FUN_005d558c();
LAB_005d5588:
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
    if (uVar5 >> 0x3d != 0) goto LAB_005d5588;
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


// ===== 005d558c  FUN_005d558c =====

void FUN_005d558c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 005d55a4  FUN_005d55a4 =====

void FUN_005d55a4(void)

{
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort("bad_array_new_length was thrown in -fno-exceptions mode");
}


// ===== 005d55bc  FUN_005d55bc =====

void FUN_005d55bc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_005d55bc(param_1,*param_2);
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


// ===== 005d5630  FUN_005d5630 =====

undefined8 * FUN_005d5630(long *param_1,undefined8 *param_2,undefined8 *param_3)

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
LAB_005d57cc:
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
        if (puVar3 == (undefined8 *)0x0) goto LAB_005d57cc;
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
      FUN_005d5a70();
LAB_005d57e4:
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
      if (uVar7 >> 0x3d != 0) goto LAB_005d57e4;
      local_60 = operator_new(uVar7 << 3);
    }
    pvStack_48 = (void *)((long)local_60 + uVar7 * 8);
    local_58 = (undefined8 *)((long)local_60 + ((long)param_2 - lVar10));
    local_50 = local_58;
    FUN_005d57e8(&local_60,param_3);
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


// ===== 005d57e8  FUN_005d57e8 =====

void FUN_005d57e8(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_005d5a58;
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
LAB_005d5a58:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 005d5a70  FUN_005d5a70 =====

void FUN_005d5a70(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 005d5a88  FUN_005d5a88 =====

undefined1  [16]
FUN_005d5a88(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
        if ((long *)*plVar2 == (long *)0x0) goto LAB_005d5af4;
      }
      if (uVar5 <= (ulong)plVar2[4]) {
        uVar4 = 0;
        goto LAB_005d5b64;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar7 = plVar2 + 1;
  }
LAB_005d5af4:
  plVar2 = (long *)operator_new(0x38);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar5 = *puVar6;
  plVar2[5] = 0;
  plVar2[6] = 0;
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
LAB_005d5b64:
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar2;
  return auVar8;
}


// ===== 005d5b94  FUN_005d5b94 =====

void FUN_005d5b94(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  *(bool *)(param_2 + 3) = param_2 == param_1;
  if (param_2 != param_1) {
    do {
      plVar2 = (long *)param_2[2];
      if ((*(byte *)(plVar2 + 3) & 1) != 0) {
        return;
      }
      plVar1 = (long *)plVar2[2];
      plVar5 = (long *)*plVar1;
      if (plVar2 == plVar5) {
        plVar5 = (long *)plVar1[1];
        if ((plVar5 == (long *)0x0) || ((*(byte *)(plVar5 + 3) & 1) != 0)) {
          if (param_2 != (long *)*plVar2) {
            plVar5 = (long *)plVar2[1];
            lVar3 = *plVar5;
            plVar2[1] = lVar3;
            if (lVar3 != 0) {
              *(long **)(lVar3 + 0x10) = plVar2;
              plVar1 = (long *)plVar2[2];
            }
            plVar5[2] = (long)plVar1;
            if (plVar2 == (long *)*plVar1) {
              *plVar1 = (long)plVar5;
            }
            else {
              plVar1[1] = (long)plVar5;
            }
            *plVar5 = (long)plVar2;
            plVar2[2] = (long)plVar5;
            plVar1 = (long *)plVar5[2];
            plVar2 = plVar5;
          }
          *(undefined1 *)(plVar2 + 3) = 1;
          plVar2 = (long *)*plVar1;
          *(undefined1 *)(plVar1 + 3) = 0;
          lVar3 = plVar2[1];
          *plVar1 = lVar3;
          if (lVar3 != 0) {
            *(long **)(lVar3 + 0x10) = plVar1;
          }
          puVar4 = (undefined8 *)plVar1[2];
          plVar2[2] = (long)puVar4;
          if (plVar1 == (long *)*puVar4) {
            *puVar4 = plVar2;
            plVar2[1] = (long)plVar1;
          }
          else {
            puVar4[1] = plVar2;
            plVar2[1] = (long)plVar1;
          }
LAB_005d5d40:
          plVar1[2] = (long)plVar2;
          return;
        }
      }
      else if ((plVar5 == (long *)0x0) || ((*(byte *)(plVar5 + 3) & 1) != 0)) {
        plVar5 = (long *)*plVar2;
        if (param_2 == plVar5) {
          lVar3 = plVar5[1];
          *plVar2 = lVar3;
          if (lVar3 != 0) {
            *(long **)(lVar3 + 0x10) = plVar2;
            plVar1 = (long *)plVar2[2];
          }
          plVar5[2] = (long)plVar1;
          if (plVar2 == (long *)*plVar1) {
            *plVar1 = (long)plVar5;
          }
          else {
            plVar1[1] = (long)plVar5;
          }
          plVar5[1] = (long)plVar2;
          plVar2[2] = (long)plVar5;
          plVar1 = (long *)plVar5[2];
          plVar2 = plVar5;
        }
        *(undefined1 *)(plVar2 + 3) = 1;
        plVar2 = (long *)plVar1[1];
        *(undefined1 *)(plVar1 + 3) = 0;
        lVar3 = *plVar2;
        plVar1[1] = lVar3;
        if (lVar3 != 0) {
          *(long **)(lVar3 + 0x10) = plVar1;
        }
        puVar4 = (undefined8 *)plVar1[2];
        plVar2[2] = (long)puVar4;
        if (plVar1 == (long *)*puVar4) {
          *puVar4 = plVar2;
        }
        else {
          puVar4[1] = plVar2;
        }
        *plVar2 = (long)plVar1;
        goto LAB_005d5d40;
      }
      *(undefined1 *)(plVar2 + 3) = 1;
      *(bool *)(plVar1 + 3) = plVar1 == param_1;
      *(undefined1 *)(plVar5 + 3) = 1;
      param_2 = plVar1;
    } while (plVar1 != param_1);
  }
  return;
}


// ===== 005d5d48  FUN_005d5d48 =====

void FUN_005d5d48(long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  plVar5 = (long *)*param_2;
  plVar7 = param_2;
  if (plVar5 == (long *)0x0) {
LAB_005d5d6c:
    plVar5 = (long *)plVar7[1];
    if (plVar5 == (long *)0x0) {
      puVar3 = (undefined8 *)plVar7[2];
      bVar1 = true;
      goto LAB_005d5d90;
    }
  }
  else {
    plVar4 = (long *)param_2[1];
    if ((long *)param_2[1] != (long *)0x0) {
      do {
        plVar7 = plVar4;
        plVar4 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
      goto LAB_005d5d6c;
    }
  }
  puVar3 = (undefined8 *)plVar7[2];
  bVar1 = false;
  plVar5[2] = (long)puVar3;
LAB_005d5d90:
  if (plVar7 == (long *)*puVar3) {
    *puVar3 = plVar5;
    if (plVar7 == param_1) {
      plVar4 = (long *)0x0;
      param_1 = plVar5;
    }
    else {
      plVar4 = *(long **)(plVar7[2] + 8);
    }
  }
  else {
    puVar3[1] = plVar5;
    plVar4 = *(long **)plVar7[2];
  }
  lVar6 = plVar7[3];
  plVar2 = param_1;
  if (plVar7 != param_2) {
    puVar3 = (undefined8 *)param_2[2];
    plVar7[2] = (long)puVar3;
    if (param_2 == (long *)*puVar3) {
      *puVar3 = plVar7;
    }
    else {
      puVar3[1] = plVar7;
    }
    lVar8 = *param_2;
    *plVar7 = lVar8;
    *(long **)(lVar8 + 0x10) = plVar7;
    lVar8 = param_2[1];
    plVar7[1] = lVar8;
    if (lVar8 != 0) {
      *(long **)(lVar8 + 0x10) = plVar7;
    }
    plVar2 = plVar7;
    if (param_1 != param_2) {
      plVar2 = param_1;
    }
    *(char *)(plVar7 + 3) = (char)param_2[3];
  }
  if ((plVar2 != (long *)0x0) && ((char)lVar6 != '\0')) {
    if (bVar1) {
      do {
        puVar3 = (undefined8 *)plVar4[2];
        plVar7 = plVar2;
        if (plVar4 != (long *)*puVar3) {
          if ((*(byte *)(plVar4 + 3) & 1) == 0) {
            *(undefined1 *)(plVar4 + 3) = 1;
            *(undefined1 *)(puVar3 + 3) = 0;
            lVar6 = plVar4[2];
            plVar7 = *(long **)(lVar6 + 8);
            lVar8 = *plVar7;
            *(long *)(lVar6 + 8) = lVar8;
            if (lVar8 != 0) {
              *(long *)(lVar8 + 0x10) = lVar6;
            }
            plVar5 = *(long **)(lVar6 + 0x10);
            plVar7[2] = (long)plVar5;
            if (lVar6 == *plVar5) {
              *plVar5 = (long)plVar7;
            }
            else {
              plVar5[1] = (long)plVar7;
            }
            *plVar7 = lVar6;
            *(long **)(lVar6 + 0x10) = plVar7;
            plVar7 = plVar4;
            if (plVar2 != (long *)*plVar4) {
              plVar7 = plVar2;
            }
            plVar4 = (long *)((long *)*plVar4)[1];
          }
          lVar6 = *plVar4;
          if ((lVar6 == 0) || (*(char *)(lVar6 + 0x18) == '\x01')) {
            lVar8 = plVar4[1];
            if ((lVar8 == 0) || (*(char *)(lVar8 + 0x18) == '\x01')) {
              plVar5 = (long *)plVar4[2];
              *(undefined1 *)(plVar4 + 3) = 0;
              if ((plVar5 != plVar7) && ((*(byte *)(plVar5 + 3) & 1) != 0)) goto LAB_005d5e3c;
              goto LAB_005d5fa4;
            }
LAB_005d5fc4:
            if (*(char *)(lVar8 + 0x18) != '\x01') goto LAB_005d6078;
          }
          else {
            lVar8 = plVar4[1];
            if (lVar8 != 0) goto LAB_005d5fc4;
          }
          *(undefined1 *)(lVar6 + 0x18) = 1;
          plVar7 = (long *)*plVar4;
          *(undefined1 *)(plVar4 + 3) = 0;
          lVar6 = plVar7[1];
          *plVar4 = lVar6;
          if (lVar6 != 0) {
            *(long **)(lVar6 + 0x10) = plVar4;
          }
          puVar3 = (undefined8 *)plVar4[2];
          plVar7[2] = (long)puVar3;
          if (plVar4 == (long *)*puVar3) {
            *puVar3 = plVar7;
          }
          else {
            puVar3[1] = plVar7;
          }
          plVar7[1] = (long)plVar4;
          plVar4[2] = (long)plVar7;
          plVar4 = plVar7;
LAB_005d6078:
          *(undefined1 *)(plVar4 + 3) = *(undefined1 *)(plVar4[2] + 0x18);
          *(undefined1 *)(plVar4[2] + 0x18) = 1;
          *(undefined1 *)(plVar4[1] + 0x18) = 1;
          lVar6 = plVar4[2];
          plVar7 = *(long **)(lVar6 + 8);
          lVar8 = *plVar7;
          *(long *)(lVar6 + 8) = lVar8;
          if (lVar8 != 0) {
            *(long *)(lVar8 + 0x10) = lVar6;
          }
          plVar5 = *(long **)(lVar6 + 0x10);
          plVar7[2] = (long)plVar5;
          if (lVar6 == *plVar5) {
            *plVar5 = (long)plVar7;
          }
          else {
            plVar5[1] = (long)plVar7;
          }
          *plVar7 = lVar6;
          *(long **)(lVar6 + 0x10) = plVar7;
          return;
        }
        if ((*(byte *)(plVar4 + 3) & 1) == 0) {
          *(undefined1 *)(plVar4 + 3) = 1;
          *(undefined1 *)(puVar3 + 3) = 0;
          plVar7 = (long *)plVar4[2];
          lVar6 = *plVar7;
          lVar8 = *(long *)(lVar6 + 8);
          *plVar7 = lVar8;
          if (lVar8 != 0) {
            *(long **)(lVar8 + 0x10) = plVar7;
          }
          plVar5 = (long *)plVar7[2];
          *(long **)(lVar6 + 0x10) = plVar5;
          if (plVar7 == (long *)*plVar5) {
            *plVar5 = lVar6;
          }
          else {
            plVar5[1] = lVar6;
          }
          *(long **)(lVar6 + 8) = plVar7;
          plVar7[2] = lVar6;
          plVar7 = plVar4;
          if (plVar2 != (long *)plVar4[1]) {
            plVar7 = plVar2;
          }
          plVar4 = *(long **)plVar4[1];
        }
        lVar6 = *plVar4;
        if ((lVar6 != 0) && (*(char *)(lVar6 + 0x18) != '\x01')) {
LAB_005d60e4:
          *(undefined1 *)(plVar4 + 3) = *(undefined1 *)(plVar4[2] + 0x18);
          *(undefined1 *)(plVar4[2] + 0x18) = 1;
          *(undefined1 *)(*plVar4 + 0x18) = 1;
          plVar7 = (long *)plVar4[2];
          lVar6 = *plVar7;
          lVar8 = *(long *)(lVar6 + 8);
          *plVar7 = lVar8;
          if (lVar8 != 0) {
            *(long **)(lVar8 + 0x10) = plVar7;
          }
          plVar5 = (long *)plVar7[2];
          *(long **)(lVar6 + 0x10) = plVar5;
          if (plVar7 == (long *)*plVar5) {
            *plVar5 = lVar6;
          }
          else {
            plVar5[1] = lVar6;
          }
          *(long **)(lVar6 + 8) = plVar7;
          plVar7[2] = lVar6;
          return;
        }
        lVar8 = plVar4[1];
        if ((lVar8 != 0) && (*(char *)(lVar8 + 0x18) != '\x01')) {
          if (lVar6 != 0) {
            if (*(char *)(lVar6 + 0x18) != '\x01') goto LAB_005d60e4;
            lVar8 = plVar4[1];
          }
          *(undefined1 *)(lVar8 + 0x18) = 1;
          plVar7 = (long *)plVar4[1];
          *(undefined1 *)(plVar4 + 3) = 0;
          lVar6 = *plVar7;
          plVar4[1] = lVar6;
          if (lVar6 != 0) {
            *(long **)(lVar6 + 0x10) = plVar4;
          }
          puVar3 = (undefined8 *)plVar4[2];
          plVar7[2] = (long)puVar3;
          if (plVar4 == (long *)*puVar3) {
            *puVar3 = plVar7;
          }
          else {
            puVar3[1] = plVar7;
          }
          *plVar7 = (long)plVar4;
          plVar4[2] = (long)plVar7;
          plVar4 = plVar7;
          goto LAB_005d60e4;
        }
        plVar5 = (long *)plVar4[2];
        *(undefined1 *)(plVar4 + 3) = 0;
        if (((char)plVar5[3] != '\x01') || (plVar5 == plVar7)) {
LAB_005d5fa4:
          *(undefined1 *)(plVar5 + 3) = 1;
          return;
        }
LAB_005d5e3c:
        lVar6 = 8;
        if (plVar5 != *(long **)plVar5[2]) {
          lVar6 = 0;
        }
        plVar4 = *(long **)((long)plVar5[2] + lVar6);
        plVar2 = plVar7;
      } while( true );
    }
    *(undefined1 *)(plVar5 + 3) = 1;
  }
  return;
}


// ===== 005d6144  FUN_005d6144 =====

undefined8 FUN_005d6144(undefined8 *param_1)

{
  undefined1 *local_3f8;
  undefined1 *local_3f0;
  undefined1 *puStack_3e8;
  undefined1 auStack_3e0 [960];
  
  memset(auStack_3e0,0xaa,0x3c0);
  local_3f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_3e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_3f8 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*(long *)*param_1 + 0x10))
            ((long *)*param_1,0x1e0,2,1,48000,auStack_3e0,&puStack_3e8,&local_3f0,&local_3f8);
  return 10000;
}


// ===== 005d61c4  FUN_005d61c4 =====

void FUN_005d61c4(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_00d25d08;
  puVar1 = (undefined8 *)*param_2;
  param_1[1] = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  puVar1 = (undefined8 *)param_2[1];
  param_1[2] = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  puVar1 = (undefined8 *)param_2[2];
  param_1[3] = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  puVar1 = (undefined8 *)param_2[3];
  param_1[4] = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    (**(code **)*puVar1)();
    uVar2 = param_1[4];
  }
  *(undefined2 *)(param_1 + 5) = 0x101;
  FUN_005d652c(param_1 + 6,param_1[1],param_1[2],uVar2);
  *param_1 = &PTR_FUN_00d25d60;
  param_1[0x7bf] = param_1 + 0x7c0;
  param_1[0x7c1] = 0;
  param_1[0x7c0] = 0;
  param_1[0x7bc] = 0;
  param_1[0x7bb] = 0;
  param_1[0x7be] = 0;
  param_1[0x7bd] = 0;
  *(undefined4 *)(param_1 + 0x7c2) = 0;
  return;
}


// ===== 005d62a8  FUN_005d62a8 =====

void FUN_005d62a8(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x3e10);
  return;
}


// ===== 005d62d0  FUN_005d62d0 =====

bool FUN_005d62d0(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 0x7c2);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 005d632c  FUN_005d632c =====

void FUN_005d632c(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *local_28;
  
  *param_1 = &PTR_FUN_00d25d08;
  local_28 = param_1 + 0x7bf;
  FUN_005d55bc(&local_28,param_1[0x7c0]);
  pvVar2 = (void *)param_1[0x7bc];
  if (pvVar2 != (void *)0x0) {
    pvVar3 = (void *)param_1[0x7bd];
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
    param_1[0x7bd] = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x7bb];
  if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar2), iVar1 == 1)) {
    operator_delete(pvVar2);
  }
  FUN_005d664c(param_1 + 6);
  FUN_0084220c(param_1 + 1);
  return;
}


// ===== 005d6444  FUN_005d6444 =====

void FUN_005d6444(void *param_1)

{
  FUN_005d632c();
  operator_delete(param_1);
  return;
}


// ===== 005d6474  FUN_005d6474 =====

bool FUN_005d6474(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x3e10) == 1;
}


// ===== 005d6490  FUN_005d6490 =====

undefined8 FUN_005d6490(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)__emutls_get_address(&DAT_00d596b0);
  return *puVar1;
}


// ===== 005d64b8  FUN_005d64b8 =====

void FUN_005d64b8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)__emutls_get_address(&DAT_00d596b0);
  *param_1 = *puVar1;
  *puVar1 = param_2;
  return;
}


// ===== 005d64f8  FUN_005d64f8 =====

void FUN_005d64f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  puVar1 = (undefined8 *)__emutls_get_address(&DAT_00d596b0);
  *puVar1 = uVar2;
  return;
}


// ===== 005d652c  FUN_005d652c =====

void FUN_005d652c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *local_60;
  undefined8 *local_58 [2];
  code *local_48;
  undefined *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00d25dc0;
  param_1[1] = param_3;
  if (param_4 == 0) {
    param_1[2] = 0;
  }
  else {
    local_48 = FUN_005d7420;
    local_40 = &DAT_001fb928;
    local_58[0] = param_1;
    uVar2 = FUN_0084a324(param_4,local_58);
    param_1[2] = uVar2;
    if (*(code **)(local_40 + 8) != (code *)0x0) {
      (**(code **)(local_40 + 8))(local_58[0]);
    }
  }
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_60);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 3),(pthread_mutexattr_t *)&local_60);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_60);
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xb) = 8000;
  param_1[10] = 0;
  param_1[0xc] = 1;
  *(undefined1 *)(param_1 + 0xd) = 0;
  FUN_005edbb0(param_1 + 0xe);
  param_1[0x1b] = param_2;
  if (param_2 != (undefined8 *)0x0) {
    (**(code **)*param_2)(param_2);
  }
  FUN_00658c48(param_1 + 0x1c);
  FUN_005edbb0(param_1 + 0x7a8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005d664c  FUN_005d664c =====

void * FUN_005d664c(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  void *pvVar9;
  void *pvVar10;
  
  *param_1 = &PTR_FUN_00d25dc0;
  FUN_005edd2c(param_1 + 0x7a8);
  pvVar9 = (void *)param_1[0x24];
  if ((pvVar9 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar9), iVar1 == 1)) {
    pvVar10 = *(void **)((long)pvVar9 + 8);
    if (pvVar10 != (void *)0x0) {
      pvVar4 = pvVar10;
      pvVar5 = *(void **)((long)pvVar9 + 0x10);
      if (pvVar10 != *(void **)((long)pvVar9 + 0x10)) {
        do {
          pvVar4 = (void *)((long)pvVar5 + -0x68);
          if (pvVar4 == (void *)0x0) goto LAB_005d67ec;
          pvVar3 = *(void **)((long)pvVar5 + -0x60);
          if (pvVar3 != (void *)0x0) {
            pvVar6 = *(void **)((long)pvVar5 + -0x58);
            uVar8 = (ulong)((long)pvVar6 + (-4 - ((long)pvVar6 << 0x3e))) >> 2;
            uVar7 = (ulong)(((long)pvVar3 - (long)pvVar6 << 0x3e) - ((long)pvVar3 - (long)pvVar6))
                    >> 2;
            if (uVar8 <= uVar7) {
              uVar7 = uVar8;
            }
            if ((1 < uVar7) && ((((int)pvVar3 - (int)pvVar6 | -(int)pvVar6) & 3U) == 0)) {
              uVar7 = uVar7 & 0x3ffffffffffffffe;
              pvVar6 = (void *)((long)pvVar6 + uVar7 * -4);
              do {
                uVar7 = uVar7 - 2;
              } while (uVar7 != 0);
            }
            while (pvVar6 != pvVar3) {
              pvVar6 = (void *)((long)pvVar6 + -4);
              if (pvVar6 == (void *)0x0) goto LAB_005d67ec;
            }
            *(void **)((long)pvVar5 + -0x58) = pvVar3;
            operator_delete(pvVar3);
          }
          pvVar5 = pvVar4;
        } while (pvVar10 != pvVar4);
        pvVar4 = *(void **)((long)pvVar9 + 8);
      }
      *(void **)((long)pvVar9 + 0x10) = pvVar10;
      operator_delete(pvVar4);
    }
    operator_delete(pvVar9);
  }
  if ((long *)param_1[0x1b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1b] + 8))();
  }
  FUN_005edd2c(param_1 + 0xe);
  pvVar9 = (void *)param_1[8];
  if (pvVar9 != (void *)0x0) {
    pvVar10 = (void *)param_1[9];
    uVar8 = (ulong)((long)pvVar10 + (-8 - ((long)pvVar10 << 0x3d))) >> 3;
    uVar7 = (ulong)(((long)pvVar9 - (long)pvVar10 << 0x3d) - ((long)pvVar9 - (long)pvVar10)) >> 3;
    if (uVar8 <= uVar7) {
      uVar7 = uVar8;
    }
    if ((1 < uVar7) && ((((int)pvVar9 - (int)pvVar10 | -(int)pvVar10) & 7U) == 0)) {
      uVar7 = uVar7 & 0x1ffffffffffffffe;
      pvVar10 = (void *)((long)pvVar10 + uVar7 * -8);
      do {
        uVar7 = uVar7 - 2;
      } while (uVar7 != 0);
    }
    while (pvVar10 != pvVar9) {
      pvVar10 = (void *)((long)pvVar10 + -8);
      if (pvVar10 == (void *)0x0) {
LAB_005d67ec:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[9] = pvVar9;
    operator_delete(pvVar9);
  }
  uVar2 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 3));
  pvVar9 = (void *)param_1[2];
  param_1[2] = 0;
  if (pvVar9 == (void *)0x0) {
    return (void *)(ulong)uVar2;
  }
  FUN_0084a518(pvVar9);
  operator_delete(pvVar9);
  return pvVar9;
}


// ===== 005d685c  FUN_005d685c =====

void FUN_005d685c(void *param_1)

{
  FUN_005d664c();
  operator_delete(param_1);
  return;
}


// ===== 005d688c  FUN_005d688c =====

void FUN_005d688c(long *param_1)

{
  (**(code **)(*param_1 + 8))();
  return;
}


// ===== 005d68d4  FUN_005d68d4 =====

undefined8
FUN_005d68d4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5,
            uint param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9,byte param_10,
            undefined8 param_11,long param_12,ulong param_13)

{
  undefined8 uVar1;
  uint uVar2;
  char cVar3;
  void *pvVar4;
  long *plVar5;
  ulong uVar6;
  ulong local_88;
  long lStack_80;
  undefined8 local_78;
  long lStack_70;
  void *local_68;
  
  uVar1 = 0;
  if (param_5 * param_3 != 0) {
    uVar1 = param_2;
  }
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x18));
  uVar2 = *(uint *)(param_1 + 0x58);
  uVar6 = *(ulong *)(param_1 + 0x60);
  cVar3 = *(char *)(param_1 + 0x68);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x18));
  pvVar4 = operator_new(0x3c60);
  FUN_00658c48();
  if ((int)param_6 <= (int)uVar2) {
    uVar2 = param_6;
  }
  local_68 = pvVar4;
  FUN_00659340(pvVar4,8000);
  if (((8000 < (int)uVar2) && (FUN_00659340(pvVar4,16000), 16000 < uVar2)) &&
     (FUN_00659340(pvVar4,32000), 32000 < uVar2)) {
    FUN_00659340(pvVar4,48000);
  }
  if (param_5 <= uVar6) {
    uVar6 = param_5;
  }
  *(ulong *)((long)pvVar4 + 0x28) = uVar6;
  local_88 = param_5;
  lStack_80 = param_3;
  local_78 = uVar1;
  lStack_70 = param_5 * param_3;
  FUN_005dd988(&local_88,param_6,param_1 + 0x70,pvVar4);
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0xc0))(plVar5,param_7);
    (**(code **)(*plVar5 + 0xd0))(plVar5,param_10 & 1);
    FUN_0092c08c(plVar5,pvVar4);
  }
  if (cVar3 != '\0') {
    FUN_0092a2e4(pvVar4);
  }
  if ((param_13 & 1) != 0) {
    *(long *)((long)pvVar4 + 0x3c50) = param_12 / 1000000;
    *(undefined1 *)((long)pvVar4 + 0x3c58) = 1;
  }
  local_68 = (void *)0x0;
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_005d6aa4(param_1,pvVar4);
  }
  else {
    FUN_0084a630(*(long *)(param_1 + 0x10),pvVar4);
  }
  FUN_005d6c5c(&local_68);
  return 0;
}


// ===== 005d6aa4  FUN_005d6aa4 =====

void FUN_005d6aa4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *local_60;
  char **local_58;
  char *local_50;
  char *pcStack_48;
  undefined8 local_28;
  
  local_28 = param_2;
  if (((DAT_00d63fd8 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d63fd8), iVar2 != 0)) {
    DAT_00d63fd0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d63fd8);
  }
  local_58 = (char **)0x0;
  pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d63fd0 != '\0') {
    FUN_0066d348(0x42,DAT_00d63fd0,"AudioTransportImpl::SendProcessedData",0,0,0,0,0,0);
    local_50 = DAT_00d63fd0;
    pcStack_48 = "AudioTransportImpl::SendProcessedData";
    local_58 = &local_50;
  }
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x18));
  uVar1 = local_28;
  puVar4 = *(undefined8 **)(param_1 + 0x40);
  if (puVar4 != *(undefined8 **)(param_1 + 0x48)) {
    puVar5 = puVar4 + 1;
    if (puVar5 != *(undefined8 **)(param_1 + 0x48)) {
      do {
        local_60 = &DAT_aaaaaaaaaaaaaaaa;
        puVar3 = (undefined1 *)operator_new(0x3c60);
        FUN_00658c48();
        local_60 = puVar3;
        FUN_00658e5c(puVar3,uVar1);
        puVar3 = local_60;
        puVar4 = puVar5 + 1;
        local_60 = (undefined1 *)0x0;
        (*(code *)**(undefined8 **)*puVar5)((undefined8 *)*puVar5,puVar3);
        FUN_005d6c5c(&local_60);
        puVar5 = puVar4;
      } while (puVar4 != *(undefined8 **)(param_1 + 0x48));
      puVar4 = *(undefined8 **)(param_1 + 0x40);
    }
    local_28 = 0;
    (*(code *)**(undefined8 **)*puVar4)((undefined8 *)*puVar4,uVar1);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x18));
  if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
    FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,0);
  }
  FUN_005d6c5c(&local_28);
  return;
}


// ===== 005d6c5c  FUN_005d6c5c =====

void FUN_005d6c5c(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  
  pvVar8 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar8 == (void *)0x0) {
    return;
  }
  pvVar9 = *(void **)((long)pvVar8 + 0x40);
  if ((pvVar9 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar9), iVar1 == 1)) {
    pvVar10 = *(void **)((long)pvVar9 + 8);
    if (pvVar10 != (void *)0x0) {
      pvVar3 = pvVar10;
      pvVar4 = *(void **)((long)pvVar9 + 0x10);
      if (pvVar10 != *(void **)((long)pvVar9 + 0x10)) {
        do {
          pvVar3 = (void *)((long)pvVar4 + -0x68);
          if (pvVar3 == (void *)0x0) {
LAB_005d6d94:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          pvVar2 = *(void **)((long)pvVar4 + -0x60);
          if (pvVar2 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + -0x58);
            uVar7 = (ulong)((long)pvVar5 + (-4 - ((long)pvVar5 << 0x3e))) >> 2;
            uVar6 = (ulong)(((long)pvVar2 - (long)pvVar5 << 0x3e) - ((long)pvVar2 - (long)pvVar5))
                    >> 2;
            if (uVar7 <= uVar6) {
              uVar6 = uVar7;
            }
            if ((1 < uVar6) && ((((int)pvVar2 - (int)pvVar5 | -(int)pvVar5) & 3U) == 0)) {
              uVar6 = uVar6 & 0x3ffffffffffffffe;
              pvVar5 = (void *)((long)pvVar5 + uVar6 * -4);
              do {
                uVar6 = uVar6 - 2;
              } while (uVar6 != 0);
            }
            while (pvVar5 != pvVar2) {
              pvVar5 = (void *)((long)pvVar5 + -4);
              if (pvVar5 == (void *)0x0) goto LAB_005d6d94;
            }
            *(void **)((long)pvVar4 + -0x58) = pvVar2;
            operator_delete(pvVar2);
          }
          pvVar4 = pvVar3;
        } while (pvVar10 != pvVar3);
        pvVar3 = *(void **)((long)pvVar9 + 8);
      }
      *(void **)((long)pvVar9 + 0x10) = pvVar10;
      operator_delete(pvVar3);
    }
    operator_delete(pvVar9);
  }
  operator_delete(pvVar8);
  return;
}


// ===== 005d6da8  FUN_005d6da8 =====

undefined8
FUN_005d6da8(long param_1,long param_2,undefined8 param_3,long param_4,undefined4 param_5,
            undefined8 param_6,long *param_7,undefined8 *param_8,undefined8 *param_9)

{
  int iVar1;
  long lVar2;
  long local_98;
  long lStack_90;
  undefined8 local_88;
  long lStack_80;
  char **local_78;
  char *local_70;
  char *pcStack_68;
  
  if (((DAT_00d63fe8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d63fe8), iVar1 != 0)) {
    DAT_00d63fe0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d63fe8);
  }
  local_78 = (char **)0x0;
  pcStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d63fe0 != '\0') {
    FUN_0066d348(0x42,DAT_00d63fe0,"AudioTransportImpl::NeedMorePlayData",0,0,0,0,0,0);
    local_70 = DAT_00d63fe0;
    pcStack_68 = "AudioTransportImpl::NeedMorePlayData";
    local_78 = &local_70;
  }
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x30))
            (*(long **)(param_1 + 0xd8),param_4,param_1 + 0xe0);
  *param_8 = *(undefined8 *)(param_1 + 0xe8);
  *param_9 = *(undefined8 *)(param_1 + 0xf0);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_0092c1a8(*(long *)(param_1 + 8),param_1 + 0xe0);
  }
  lVar2 = param_4 * param_2;
  local_88 = 0;
  if (lVar2 != 0) {
    local_88 = param_6;
  }
  local_98 = param_4;
  lStack_90 = param_2;
  lStack_80 = lVar2;
  FUN_005d6f54(param_1 + 0xe0,param_5,param_1 + 0x3d40,&local_98);
  *param_7 = lVar2;
  if ((local_78 != (char **)0x0) && (**local_78 != '\0')) {
    FUN_0066d348(0x45,*local_78,local_78[1],0,0,0,0,0,0);
  }
  return 0;
}


// ===== 005d6f54  FUN_005d6f54 =====

void FUN_005d6f54(long param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_a8 [32];
  char **local_88;
  char *local_80;
  char *pcStack_78;
  long local_70;
  long lStack_68;
  char *local_60;
  char *pcStack_58;
  undefined2 local_34 [2];
  
  if (((DAT_00d64008 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d64008), iVar1 != 0)) {
    DAT_00d64000 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d64008);
  }
  local_88 = (char **)0x0;
  pcStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d64000 != '\0') {
    lStack_68 = (long)param_2;
    local_60 = "frame sample rate";
    pcStack_58 = "destination_sample_rate";
    local_70 = (long)*(int *)(param_1 + 0x20);
    local_34[0] = 0x303;
    FUN_0066d348(0x42,DAT_00d64000,"Resample",0,2,&local_60,local_34,&local_70,0);
    local_80 = DAT_00d64000;
    pcStack_78 = "Resample";
    local_88 = &local_80;
  }
  if (param_4[3] != *(long *)(param_1 + 0x28) * ((ulong)(long)param_2 / 100)) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../audio/audio_transport_impl.cc",0x5b,
                 "destination.data().size() == frame.num_channels_ * target_number_of_samples_per_channel"
                 ,&DAT_001fb920);
  }
  FUN_0065902c(auStack_a8,param_1);
  uStack_c8 = param_4[1];
  local_d0 = *param_4;
  uStack_b8 = param_4[3];
  uStack_c0 = param_4[2];
  FUN_005eddfc(param_3,auStack_a8,&local_d0);
  if ((local_88 != (char **)0x0) && (**local_88 != '\0')) {
    FUN_0066d348(0x45,*local_88,local_88[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 005d7128  FUN_005d7128 =====

void FUN_005d7128(long param_1,undefined8 param_2,int param_3,long param_4,long param_5,
                 undefined8 param_6,undefined8 *param_7,undefined8 *param_8)

{
  int iVar1;
  long local_c0;
  long lStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  char **local_a0;
  char *local_98;
  char *pcStack_90;
  long local_88;
  long lStack_80;
  undefined2 local_74 [2];
  char *local_70;
  char *pcStack_68;
  
  if (((DAT_00d63ff8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d63ff8), iVar1 != 0)) {
    DAT_00d63ff0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d63ff8);
  }
  local_a0 = (char **)0x0;
  pcStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d63ff0 != '\0') {
    local_70 = "sample_rate";
    pcStack_68 = "number_of_frames";
    local_88 = (long)param_3;
    local_74[0] = 0x203;
    lStack_80 = param_5;
    FUN_0066d348(0x42,DAT_00d63ff0,"AudioTransportImpl::PullRenderData",0,2,&local_70,local_74,
                 &local_88,0);
    local_98 = DAT_00d63ff0;
    pcStack_90 = "AudioTransportImpl::PullRenderData";
    local_a0 = &local_98;
  }
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x30))
            (*(long **)(param_1 + 0xd8),param_4,param_1 + 0xe0);
  lStack_a8 = param_5 * param_4;
  *param_7 = *(undefined8 *)(param_1 + 0xe8);
  *param_8 = *(undefined8 *)(param_1 + 0xf0);
  local_b0 = 0;
  if (lStack_a8 != 0) {
    local_b0 = param_6;
  }
  local_c0 = param_4;
  lStack_b8 = param_5;
  FUN_005d6f54(param_1 + 0xe0,param_3,param_1 + 0x3d40,&local_c0);
  if ((local_a0 != (char **)0x0) && (**local_a0 != '\0')) {
    FUN_0066d348(0x45,*local_a0,local_a0[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 005d72d8  FUN_005d72d8 =====

int FUN_005d72d8(long param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x18));
  pvVar2 = *(void **)(param_1 + 0x40);
  if (pvVar2 != (void *)0x0) {
    pvVar3 = *(void **)(param_1 + 0x48);
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
    *(void **)(param_1 + 0x48) = pvVar2;
    operator_delete(pvVar2);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  *(undefined8 *)(param_1 + 0x50) = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 0x58) = param_3;
  *(undefined8 *)(param_1 + 0x60) = param_4;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x18));
  return iVar1;
}


// ===== 005d73e8  FUN_005d73e8 =====

int FUN_005d73e8(long param_1,undefined1 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x18));
  *(undefined1 *)(param_1 + 0x68) = param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x18));
  return iVar1;
}


// ===== 005d7420  FUN_005d7420 =====

void FUN_005d7420(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = *param_2;
  *param_2 = 0;
  local_18 = 0;
  FUN_005d6aa4(*param_1,uVar1);
  FUN_005d6c5c(&local_18);
  return;
}


// ===== 005d7460  FUN_005d7460 =====

long * FUN_005d7460(long *param_1,long *param_2,long param_3,undefined8 param_4,undefined4 param_5,
                   undefined4 param_6,undefined8 param_7,undefined1 param_8,undefined4 param_9,
                   undefined1 param_10,undefined8 *param_11,long *param_12,undefined4 *param_13,
                   undefined8 *param_14,undefined4 param_15)

{
  undefined4 uVar1;
  undefined1 uVar2;
  ulong __n;
  long lVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  long *plVar9;
  void *pvVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined1 *local_190;
  undefined1 *puStack_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  long *plStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined5 uStack_100;
  undefined3 local_fb;
  undefined5 uStack_f8;
  undefined3 uStack_f3;
  long *local_f0;
  undefined7 uStack_e8;
  undefined4 uStack_e1;
  undefined1 uStack_dd;
  undefined4 local_dc;
  undefined8 local_d8;
  long local_d0;
  void *pvStack_c8;
  undefined8 uStack_c0;
  long local_b8;
  undefined8 local_b0;
  long *local_a0;
  long *local_98;
  undefined1 *puStack_90;
  code *local_88;
  undefined *local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  plVar5 = (long *)operator_new(0x4160);
  plVar14 = (long *)*param_11;
  if (plVar14 != (long *)0x0) {
    (**(code **)*plVar14)(plVar14);
  }
  plVar11 = (long *)*param_12;
  *param_12 = 0;
  plVar13 = (long *)*param_14;
  *param_14 = 0;
  plVar9 = plVar5 + 1;
  *plVar9 = (long)&PTR_FUN_00d25f58;
  lVar12 = *param_1;
  *plVar5 = (long)&PTR_FUN_00d25e00;
  plVar15 = plVar5 + 2;
  *plVar15 = lVar12;
  if (lVar12 != 0) {
    FUN_00d0f740(1,lVar12 + 8);
  }
  lVar12 = param_1[1];
  lVar17 = param_1[4];
  lVar16 = param_1[3];
  plVar5[4] = param_1[2];
  plVar5[3] = lVar12;
  plVar5[6] = lVar17;
  plVar5[5] = lVar16;
  lVar12 = FUN_005d6490();
  plVar5[7] = lVar12;
  FUN_007ebca0(plVar5 + 8);
  FUN_00660fac(plVar5 + 9);
  plVar5[0xd] = 0;
  *(undefined1 *)(plVar5 + 0xb) = 0;
  plVar5[0xe] = 0;
  plVar5[0xc] = (long)(plVar5 + 0xd);
  lVar12 = FUN_00851b98(plVar5[4]);
  plVar5[0xf] = lVar12;
  plVar5[0x10] = 0;
  *(undefined4 *)(plVar5 + 0x11) = param_6;
  FUN_008742fc(plVar5 + 0x12,plVar5[4]);
  *(undefined1 *)(plVar5 + 0x26) = 0;
  *(undefined1 *)((long)plVar5 + 0x134) = 0;
  *(undefined1 *)(plVar5 + 0x27) = 0;
  *(undefined1 *)(plVar5 + 0x28) = 0;
  local_190 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_190);
  pthread_mutex_init((pthread_mutex_t *)(plVar5 + 0x29),(pthread_mutexattr_t *)&local_190);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_190);
  if (plVar14 != (long *)0x0) {
    (**(code **)*plVar14)(plVar14);
  }
  puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
  local_190 = &DAT_aaaaaaaaaaaaaaaa;
  local_178 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_180 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0084a080(&local_190);
  local_178 = (undefined1 *)(CONCAT71(local_178._1_7_,param_8) & 0xffffffffffffff01);
  uStack_180 = (undefined1 *)CONCAT44(param_9,(undefined4)uStack_180);
  local_178._0_2_ = CONCAT11(1,(undefined1)local_178);
  local_178 = (undefined1 *)CONCAT44(param_15,(undefined4)local_178);
  puStack_188 = (undefined1 *)param_7;
  if (param_2 == (long *)0x0) {
    FUN_0090c6d0(&local_98);
    local_a0 = plVar14;
    lVar12 = FUN_0090c734(&local_98,plVar15,&local_190,&local_a0);
    if (local_a0 != (long *)0x0) {
      (**(code **)(*local_a0 + 8))(local_a0);
    }
    FUN_0090c6e4(&local_98);
  }
  else {
    local_98 = plVar14;
    lVar12 = (**(code **)(*param_2 + 0x10))(param_2,plVar15,&local_190,&local_98);
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 8))(local_98);
    }
  }
  FUN_0084a09c(&local_190);
  plVar5[0x2e] = lVar12;
  FUN_00928920(plVar5 + 0x2f);
  local_190 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_190);
  pthread_mutex_init((pthread_mutex_t *)(plVar5 + 0x7bd),(pthread_mutexattr_t *)&local_190);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_190);
  local_190 = &DAT_aaaaaaaaaaaaaaaa;
  plVar5[0x7c5] = 0;
  plVar5[0x7c4] = 0;
  plVar5[0x7c3] = 0;
  plVar5[0x7c2] = 0;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_190);
  pthread_mutex_init((pthread_mutex_t *)(plVar5 + 0x7c6),(pthread_mutexattr_t *)&local_190);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_190);
  plVar5[0x7cb] = 0;
  FUN_005db784(plVar5 + 0x7cc);
  FUN_00853340(plVar5 + 0x7d4,plVar5[4]);
  *(undefined1 *)(plVar5 + 0x7ea) = 0;
  *(undefined1 *)((long)plVar5 + 0x3f54) = 0;
  *(undefined1 *)(plVar5 + 0x7eb) = 0;
  *(undefined1 *)(plVar5 + 0x7ed) = 0;
  *(undefined4 *)(plVar5 + 0x7ee) = 0;
  *(undefined1 *)(plVar5 + 0x7ef) = 0;
  *(undefined1 *)(plVar5 + 0x7f0) = 0;
  *(undefined1 *)(plVar5 + 0x7f1) = 0;
  *(undefined1 *)(plVar5 + 0x7f2) = 0;
  local_190 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_190);
  pthread_mutex_init((pthread_mutex_t *)(plVar5 + 0x7f3),(pthread_mutexattr_t *)&local_190);
  uVar4 = pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_190);
  uVar6 = (ulong)uVar4;
  plVar5[0x7f8] = 0;
  plVar5[0x803] = param_3;
  *(undefined1 *)(plVar5 + 0x7f9) = 0;
  *(undefined1 *)((long)plVar5 + 0x3fcc) = 0;
  plVar5[0x7fd] = 0;
  plVar5[0x7fc] = 0;
  plVar5[0x7fb] = -1;
  plVar5[0x7fa] = -1;
  plVar5[0x7ff] = 0;
  plVar5[0x7fe] = 0;
  plVar5[0x801] = 0;
  plVar5[0x800] = 0;
  plVar5[0x802] = 0;
  *(undefined4 *)(plVar5 + 0x804) = 0x3f800000;
  plVar5[0x805] = 0;
  plVar5[0x807] = (long)plVar11;
  if (plVar11 != (long *)0x0) {
    uVar6 = (**(code **)*plVar11)(plVar11);
  }
  uVar1 = *param_13;
  uVar2 = *(undefined1 *)(param_13 + 1);
  plVar5[0x809] = 0;
  *(undefined4 *)(plVar5 + 0x808) = uVar1;
  pvVar10 = *(void **)(param_13 + 2);
  lVar12 = *(long *)(param_13 + 4);
  *(undefined1 *)((long)plVar5 + 0x4044) = uVar2;
  plVar5[0x80b] = 0;
  __n = lVar12 - (long)pvVar10;
  plVar5[0x80a] = 0;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d4754(uVar6);
    }
    pvVar7 = operator_new(__n);
    plVar5[0x809] = (long)pvVar7;
    plVar5[0x80a] = (long)pvVar7;
    plVar5[0x80b] = (long)pvVar7 + __n;
    memcpy(pvVar7,pvVar10,__n);
    plVar5[0x80a] = (long)pvVar7 + __n;
  }
  FUN_0084ab04(plVar5 + 0x80c,plVar5[4]);
  *(undefined1 *)(plVar5 + 0x822) = 0;
  *(undefined1 *)(plVar5 + 0x823) = 0;
  plVar5[0x829] = 0;
  plVar5[0x82b] = 0;
  plVar5[0x82a] = 0;
  plVar5[0x825] = 0;
  plVar5[0x824] = 0;
  plVar5[0x827] = 0;
  plVar5[0x826] = 0;
  plVar5[0x828] = (long)(plVar5 + 0x829);
  (**(code **)(*(long *)plVar5[0xf] + 0x28))((long *)plVar5[0xf],(int)plVar5[0x11],1);
  local_190 = (undefined1 *)0xaaaaaaaaaaaa0101;
  puStack_188 = (undefined1 *)plVar5[0xf];
  uStack_f3 = 0xaaaaaa;
  uStack_dd = 0xaa;
  local_d8 = 0xaaaaaa00aaaaaa00;
  local_d0 = ((ulong)CONCAT61(0xaaaaaaaaaaaa,param_10) & 0xffffffffffff01) << 8;
  uStack_170 = 0;
  local_178 = (undefined1 *)0x0;
  uStack_160 = 0;
  uStack_168 = 0;
  local_150 = 0;
  uStack_158 = 0;
  uStack_140 = 0;
  local_130 = 0;
  uStack_138 = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  local_110 = 0;
  uStack_118 = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  local_fb = 0;
  uStack_f8 = 0;
  local_f0 = (long *)0x0;
  uStack_e8 = 0;
  uStack_e1 = 0;
  pvStack_c8 = (void *)0x0;
  uStack_c0 = 0;
  local_b0 = 0xaaaaaaaaaaaaaa00;
  local_b8 = 0;
  uStack_180 = (undefined1 *)param_4;
  plStack_148 = plVar9;
  local_dc = param_5;
  if (plVar13 != (long *)0x0) {
    puVar8 = (undefined8 *)operator_new(0x40);
    puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
    local_88 = FUN_005da398;
    local_80 = &DAT_001fb948;
    local_a0 = plVar13;
    local_98 = plVar5;
    FUN_005db9d0(puVar8,&local_98,&local_a0,plVar5[7]);
    if (local_a0 != (long *)0x0) {
      (**(code **)(*local_a0 + 8))();
    }
    if (*(code **)(local_80 + 8) != (code *)0x0) {
      (**(code **)(local_80 + 8))(local_98);
    }
    *(undefined4 *)((long)puVar8 + 0x3c) = 0;
    *puVar8 = &PTR_FUN_00d25f80;
    if (puVar8 != (undefined8 *)0x0) {
      FUN_00d0f740(1,(long)puVar8 + 0x3c);
    }
    plVar9 = (long *)plVar5[0x824];
    plVar5[0x824] = (long)puVar8;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
      puVar8 = (undefined8 *)plVar5[0x824];
    }
    FUN_005dba4c(puVar8);
  }
  pvVar10 = operator_new(0x560);
  FUN_00863e98(pvVar10,plVar15,&local_190);
  pvVar7 = (void *)plVar5[0x10];
  plVar5[0x10] = (long)pvVar10;
  if (pvVar7 != (void *)0x0) {
    FUN_0086425c(pvVar7);
    operator_delete(pvVar7);
    pvVar10 = (void *)plVar5[0x10];
  }
  FUN_008657ec(pvVar10,(int)plVar5[0x11]);
  FUN_00864f38(plVar5[0x10],1);
  if (local_b8 < 0) {
    operator_delete(pvStack_c8);
  }
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 8))();
  }
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))(plVar11);
  }
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))(plVar14);
  }
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar5;
}


// ===== 005d7ab4  FUN_005d7ab4 =====

void FUN_005d7ab4(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  undefined **ppuVar3;
  void *pvVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  long *local_18;
  
  ppuVar3 = &PTR_FUN_00d25e00;
  *param_1 = &PTR_FUN_00d25e00;
  param_1[1] = &PTR_FUN_00d25f58;
  if (param_1[0x824] != 0) {
    FUN_005dbaac();
    ppuVar3 = (undefined **)*param_1;
  }
  (*(code *)ppuVar3[6])(param_1);
  pvVar8 = (void *)param_1[0x82b];
  param_1[0x82b] = 0;
  if (pvVar8 != (void *)0x0) {
    FUN_005dcb1c(pvVar8);
    operator_delete(pvVar8);
  }
  local_18 = param_1 + 0x828;
  FUN_005d46d8(&local_18,param_1[0x829]);
  if ((long *)param_1[0x824] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x824] + 8))();
  }
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x80d));
  pvVar8 = (void *)param_1[0x809];
  if (pvVar8 == (void *)0x0) {
LAB_005d7bd8:
    if ((long *)param_1[0x807] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x807] + 8))();
    }
    pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x7f3));
    if (param_1[0x7e3] != 0) {
      plVar2 = (long *)param_1[0x7e2];
      plVar5 = *(long **)(param_1[0x7e1] + 8);
      *(long **)(*plVar2 + 8) = plVar5;
      *plVar5 = *plVar2;
      param_1[0x7e3] = 0;
      while (plVar2 != param_1 + 0x7e1) {
        if ((plVar2 == (long *)0xfffffffffffffff0) || (plVar2 == (long *)0x0)) goto LAB_005d7bb4;
        plVar5 = (long *)plVar2[1];
        operator_delete(plVar2);
        plVar2 = plVar5;
      }
    }
    if (param_1[0x7dd] != 0) {
      plVar2 = (long *)param_1[0x7dc];
      plVar5 = *(long **)(param_1[0x7db] + 8);
      *(long **)(*plVar2 + 8) = plVar5;
      *plVar5 = *plVar2;
      param_1[0x7dd] = 0;
      while (plVar2 != param_1 + 0x7db) {
        if ((plVar2 == (long *)0xfffffffffffffff0) || (plVar2 == (long *)0x0)) goto LAB_005d7bb4;
        plVar5 = (long *)plVar2[1];
        operator_delete(plVar2);
        plVar2 = plVar5;
      }
    }
    local_18 = param_1 + 0x7d6;
    FUN_005dabf4(&local_18,param_1[0x7d7]);
    pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x7cc));
    pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x7c6));
    pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x7bd));
    FUN_005edd2c(param_1 + 0x2f);
    plVar2 = (long *)param_1[0x2e];
    param_1[0x2e] = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x29));
    FUN_005daa6c(param_1 + 0x12);
    pvVar8 = (void *)param_1[0x10];
    param_1[0x10] = 0;
    if (pvVar8 != (void *)0x0) {
      FUN_0086425c(pvVar8);
      operator_delete(pvVar8);
    }
    plVar2 = (long *)param_1[0xf];
    param_1[0xf] = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    local_18 = param_1 + 0xc;
    FUN_005dac68(&local_18,param_1[0xd]);
    FUN_007ebdcc(param_1[8]);
    pvVar8 = (void *)param_1[8];
    if ((pvVar8 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar8), iVar1 == 1)) {
      operator_delete(pvVar8);
    }
    plVar2 = (long *)param_1[2];
    if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
    return;
  }
  pvVar4 = (void *)param_1[0x80a];
  uVar7 = (ulong)((long)pvVar4 + ((long)pvVar4 << 0x3f) + -2) >> 1;
  uVar6 = (ulong)(((long)pvVar8 - (long)pvVar4 << 0x3f) - ((long)pvVar8 - (long)pvVar4)) >> 1;
  if (uVar7 <= uVar6) {
    uVar6 = uVar7;
  }
  if ((1 < uVar6) && ((((int)pvVar8 - (uint)pvVar4 | (uint)pvVar4) & 1) == 0)) {
    uVar6 = uVar6 & 0x7ffffffffffffffe;
    pvVar4 = (void *)((long)pvVar4 + uVar6 * -2);
    do {
      uVar6 = uVar6 - 2;
    } while (uVar6 != 0);
  }
  do {
    if (pvVar4 == pvVar8) {
      param_1[0x80a] = pvVar8;
      operator_delete(pvVar8);
      goto LAB_005d7bd8;
    }
    pvVar4 = (void *)((long)pvVar4 + -2);
  } while (pvVar4 != (void *)0x0);
LAB_005d7bb4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 005d7dd8  FUN_005d7dd8 =====

void FUN_005d7dd8(void *param_1)

{
  FUN_005d7ab4();
  operator_delete(param_1);
  return;
}


// ===== 005d7e08  FUN_005d7e08 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_005d7e08(long param_1,long param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  char *******pppppppcVar4;
  undefined8 *******pppppppuVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  void *pvVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  size_t __n;
  char *******__dest;
  ulong extraout_x1;
  undefined8 in_x7;
  ulong uVar15;
  undefined4 *puVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  undefined1 *puVar20;
  long *plVar21;
  long *plVar22;
  undefined4 *puVar23;
  undefined1 auVar24 [16];
  undefined1 uStack_6c0;
  byte local_6bf;
  undefined4 local_6bc;
  undefined4 local_6b8;
  byte local_6b4;
  undefined4 auStack_6b0 [16];
  undefined1 *local_670;
  long lStack_668;
  undefined4 *local_650;
  undefined1 uStack_648;
  undefined7 uStack_647;
  undefined1 uStack_640;
  undefined8 uStack_63f;
  void *local_5f0;
  char cStack_5d9;
  void *local_5d8;
  char cStack_5c1;
  void *local_5c0;
  char cStack_5a9;
  undefined8 *******local_550;
  ulong uStack_548;
  undefined8 local_540;
  char *******local_538;
  ulong uStack_530;
  undefined8 local_528;
  char *******local_520;
  undefined1 *puStack_518;
  undefined1 *local_510;
  undefined1 *local_500;
  undefined1 *puStack_4f8;
  undefined1 *local_4f0;
  undefined1 *puStack_4e8;
  undefined1 *puStack_4e0;
  undefined1 *puStack_4d8;
  undefined1 *local_4d0;
  undefined1 *puStack_4c8;
  undefined1 *puStack_4c0;
  undefined1 *puStack_4b8;
  undefined1 *local_4b0;
  undefined1 *puStack_4a8;
  undefined1 *local_4a0;
  undefined1 *puStack_498;
  undefined1 *local_490;
  undefined8 uStack_488;
  undefined1 *puStack_480;
  undefined1 *puStack_478;
  undefined4 *local_470;
  undefined1 uStack_468;
  undefined7 uStack_467;
  undefined1 local_460;
  undefined7 uStack_45f;
  undefined1 uStack_458;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  plVar19 = *(long **)(param_1 + 0x30);
  pvVar9 = operator_new(0x88);
  FUN_00889b64(pvVar9,param_2,0);
  (**(code **)(*plVar19 + 0x28))(plVar19,pvVar9);
  uVar10 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0x134) = 1;
  if ((*(byte *)(param_1 + 0x140) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x140) = 1;
  }
  *(undefined8 *)(param_1 + 0x138) = uVar10;
  FUN_005dacdc(param_1,0);
  plVar19 = *(long **)(param_1 + 0x68);
  if (plVar19 != (long *)0x0) {
    do {
      while (*(byte *)((long)plVar19 + 0x1c) <= *(byte *)(param_2 + 1)) {
        if (*(byte *)(param_2 + 1) == *(byte *)((long)plVar19 + 0x1c)) {
          if (plVar19 != (long *)(param_1 + 0x68)) {
            puStack_4e8 = &DAT_aaaaaaaaaaaaaaaa;
            local_4f0 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_4d8 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_4e0 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_4c8 = &DAT_aaaaaaaaaaaaaaaa;
            local_4d0 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_4b8 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_4c0 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_4a8 = &DAT_aaaaaaaaaaaaaaaa;
            local_4b0 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_498 = &DAT_aaaaaaaaaaaaaaaa;
            local_4a0 = &DAT_aaaaaaaaaaaaaaaa;
            uStack_488 = &DAT_aaaaaaaaaaaaaaaa;
            local_490 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_478 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_480 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_4f8 = &DAT_aaaaaaaaaaaaaaaa;
            local_500 = &DAT_aaaaaaaaaaaaaaaa;
            FUN_007dc0a0(&local_500,param_2);
            uStack_488 = (undefined1 *)CONCAT44((int)plVar19[4],(undefined4)uStack_488);
            if (*(long *)(param_1 + 0x4158) == 0) goto LAB_005d805c;
            FUN_005dcb50();
            auVar24 = FUN_00864f50(*(undefined8 *)(param_1 + 0x80));
            uVar17 = auVar24._0_8_;
            if ((auVar24 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
              uVar17 = 0;
            }
            FUN_005dcc2c(*(undefined8 *)(param_1 + 0x4158),*(undefined2 *)(param_2 + 4),
                         *(undefined4 *)(param_2 + 8));
            local_460 = 0xaa;
            uStack_45f = 0xaaaaaaaaaaaaaa;
            uStack_468 = 0xaa;
            uStack_467 = 0xaaaaaaaaaaaaaa;
            local_470 = (undefined4 *)&DAT_aaaaaaaaaaaaaaaa;
            if ((long)uVar17 < 0) {
              uVar15 = -(-uVar17 / 1000) - (ulong)(500 < -uVar17 % 1000);
            }
            else {
              uVar15 = uVar17 / 1000;
              if (499 < uVar17 % 1000) {
                uVar15 = uVar15 + 1;
              }
            }
            FUN_005dd1e0(&local_470,*(undefined8 *)(param_1 + 0x4158),uVar15);
            if (local_470 != (undefined4 *)CONCAT71(uStack_467,uStack_468)) {
              FUN_00865430(*(undefined8 *)(param_1 + 0x80),local_470,
                           (ulong)((long)CONCAT71(uStack_467,uStack_468) - (long)local_470) >> 1);
            }
            if (local_470 == (undefined4 *)0x0) goto LAB_005d805c;
            puVar16 = (undefined4 *)CONCAT71(uStack_467,uStack_468);
            uVar15 = (ulong)((long)puVar16 + ((long)puVar16 << 0x3f) + -2) >> 1;
            uVar17 = (ulong)(((long)local_470 - (long)puVar16 << 0x3f) -
                            ((long)local_470 - (long)puVar16)) >> 1;
            if (uVar15 <= uVar17) {
              uVar17 = uVar15;
            }
            if ((1 < uVar17) && ((((int)local_470 - (uint)puVar16 | (uint)puVar16) & 1) == 0)) {
              uVar17 = uVar17 & 0x7ffffffffffffffe;
              puVar16 = (undefined4 *)((long)puVar16 + uVar17 * -2);
              do {
                uVar17 = uVar17 - 2;
              } while (uVar17 != 0);
            }
            goto LAB_005d8030;
          }
          goto LAB_005d855c;
        }
        plVar19 = (long *)plVar19[1];
        if (plVar19 == (long *)0x0) goto LAB_005d855c;
      }
      plVar19 = (long *)*plVar19;
    } while (plVar19 != (long *)0x0);
  }
LAB_005d855c:
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_005d8030:
  if (puVar16 == local_470) {
    uStack_468 = SUB81(local_470,0);
    uStack_467 = (undefined7)((ulong)local_470 >> 8);
    operator_delete(local_470);
LAB_005d805c:
    plVar19 = (long *)(*(long *)(param_1 + 0x78) + 8);
    (**(code **)(*plVar19 + 0x10))(plVar19,&local_500);
    memcpy(&uStack_6c0,&DAT_001fb968,0x170);
    FUN_006599bc(&uStack_6c0);
    FUN_007dc208(&local_500,&uStack_6c0);
    uVar7 = FUN_0084ab88(local_6b8,auStack_6b0,0xf);
    FUN_0084ab98(&local_470,param_1 + 0x4060,uVar7,local_6bc,
                 uStack_488._4_4_ & ((int)uStack_488._4_4_ >> 0x1f ^ 0xffffffffU),&local_650);
    uStack_63f = CONCAT17(uStack_458,uStack_45f);
    uStack_648 = uStack_468;
    local_650 = local_470;
    uStack_647 = uStack_467;
    uStack_640 = local_460;
    puVar13 = puStack_4a8;
    if (puStack_4a8 != (undefined1 *)0x0) {
      puVar13 = local_4a0 + *(long *)(puStack_4a8 + 0x10);
    }
    plVar19 = *(long **)(param_1 + 0x4038);
    uVar10 = *(undefined8 *)(param_2 + 0x70);
    puVar20 = puStack_4e8 + (long)local_4f0 + (((ulong)local_500 >> 0x10 & 0xff) - lStack_668);
    puVar13 = puVar13 + lStack_668;
    if (plVar19 == (long *)0x0) {
      puVar11 = (undefined1 *)0x0;
      uVar17 = 0;
      if (*(char *)(param_1 + 0x4044) == '\0') {
        uVar17 = (long)puVar20 - (long)local_670;
      }
    }
    else {
      uVar15 = (**(code **)(*plVar19 + 0x28))(plVar19,0,puVar20);
      if (uVar15 == 0) {
        puVar11 = (undefined1 *)0x0;
      }
      else {
        puVar11 = (undefined1 *)operator_new__(uVar15);
      }
      if (0xf < local_6b4) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0x5512,0x5d865c);
        (*pcVar6)();
      }
      uStack_468 = 0;
      uStack_467 = 0;
      local_470 = (undefined4 *)0x0;
      local_460 = 0;
      uStack_45f = 0;
      if (local_6b4 != 0) {
        uVar17 = ((ulong)local_6b4 & 0x3f) * 4;
        local_470 = (undefined4 *)operator_new(uVar17);
        local_460 = SUB81(local_470 + ((ulong)local_6b4 & 0x3f),0);
        uStack_45f = (undefined7)((ulong)(local_470 + ((ulong)local_6b4 & 0x3f)) >> 8);
        puVar16 = local_470;
        puVar23 = auStack_6b0;
        do {
          if (puVar16 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          uVar17 = uVar17 - 4;
          puVar12 = puVar16 + 1;
          *puVar16 = *puVar23;
          puVar16 = puVar12;
          puVar23 = puVar23 + 1;
        } while (uVar17 != 0);
        uStack_468 = SUB81(puVar12,0);
        uStack_467 = (undefined7)((ulong)puVar12 >> 8);
      }
      puVar1 = (undefined1 *)0x0;
      if (puVar20 != local_670) {
        puVar1 = puVar13;
      }
      puVar13 = (undefined1 *)0x0;
      if (uVar15 != 0) {
        puVar13 = puVar11;
      }
      iVar8 = (**(code **)(**(long **)(param_1 + 0x4038) + 0x20))
                        (*(long **)(param_1 + 0x4038),0,&local_470,0,0,puVar1,
                         (long)puVar20 - (long)local_670,in_x7,puVar13,uVar15);
      puVar13 = puVar11;
      if (iVar8 == 0) {
        uVar17 = extraout_x1;
        if (uVar15 < extraout_x1) {
          uVar18 = uVar15 + (uVar15 >> 1);
          uVar2 = extraout_x1;
          if (extraout_x1 <= uVar18) {
            uVar2 = uVar18;
          }
          puVar13 = (undefined1 *)operator_new__(uVar2);
          if (puVar11 != (undefined1 *)0x0) {
            memcpy(puVar13,puVar11,uVar15);
            operator_delete__(puVar11);
          }
        }
      }
      else {
        uVar17 = 0;
      }
      puVar11 = puVar13;
      if (local_470 != (undefined4 *)0x0) {
        puVar16 = (undefined4 *)CONCAT71(uStack_467,uStack_468);
        uVar18 = (ulong)((long)puVar16 + (-4 - ((long)puVar16 << 0x3e))) >> 2;
        uVar15 = (ulong)(((long)local_470 - (long)puVar16 << 0x3e) -
                        ((long)local_470 - (long)puVar16)) >> 2;
        if (uVar18 <= uVar15) {
          uVar15 = uVar18;
        }
        if ((1 < uVar15) && ((((int)local_470 - (int)puVar16 | -(int)puVar16) & 3U) == 0)) {
          uVar15 = uVar15 & 0x3ffffffffffffffe;
          puVar16 = puVar16 + -uVar15;
          do {
            uVar15 = uVar15 - 2;
          } while (uVar15 != 0);
        }
        while (puVar16 != local_470) {
          puVar16 = puVar16 + -1;
          if (puVar16 == (undefined4 *)0x0) {
LAB_005d82b8:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        uStack_468 = SUB81(local_470,0);
        uStack_467 = (undefined7)((ulong)local_470 >> 8);
        operator_delete(local_470);
      }
    }
    puVar20 = (undefined1 *)0x0;
    if (uVar17 != 0) {
      puVar20 = puVar13;
    }
    if (*(long *)(param_1 + 0x4120) == 0) {
      FUN_005da3b8(param_1,puVar20,uVar17,&uStack_6c0,uVar10);
    }
    else {
      memset(&local_470,0xaa,0x400);
      local_510 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_518 = &DAT_aaaaaaaaaaaaaaaa;
      local_520 = (char *******)&DAT_aaaaaaaaaaaaaaaa;
      FUN_00622830(&local_520,&local_470,0x400);
      plVar19 = (long *)(param_1 + 0x4148);
      for (plVar21 = *(long **)(param_1 + 0x4148); plVar22 = plVar19, plVar21 != (long *)0x0;
          plVar21 = (long *)*plVar21) {
        while ((int)*(uint *)(plVar21 + 4) <= (int)(uint)local_6bf) {
          plVar22 = plVar21;
          if ((*(uint *)(plVar21 + 4) == (uint)local_6bf) ||
             (plVar21 = (long *)plVar21[1], plVar22 = plVar19, plVar21 == (long *)0x0))
          goto LAB_005d835c;
        }
      }
LAB_005d835c:
      FUN_00667e40(&local_538,0);
      uVar15 = uStack_530;
      pppppppcVar4 = local_538;
      if (-1 < (long)local_528) {
        uVar15 = local_528 >> 0x38;
        pppppppcVar4 = (char *******)&local_538;
      }
      uVar14 = FUN_006228b0(&local_520,pppppppcVar4,uVar15);
      uVar14 = FUN_006228b0(uVar14,&DAT_001c7bbb,1);
      if (plVar22 == plVar19) {
        local_540 = CONCAT17(9,(undefined7)local_540);
        if ((&local_550 < (undefined8 *******)0x1e7a81) &&
           ("x-unknown" < (char *)((ulong)&local_550 | 9))) goto LAB_005d862c;
        uStack_548 = CONCAT62(uStack_548._2_6_,0x6e);
        local_550 = (undefined8 *******)s_x_unknown_001e7a80._0_8_;
      }
      else if (*(char *)((long)plVar22 + 0x3f) < '\0') {
        FUN_005478d8(&local_550,plVar22[5],plVar22[6]);
      }
      else {
        local_540 = plVar22[7];
        uStack_548 = plVar22[6];
        local_550 = (undefined8 *******)plVar22[5];
      }
      uVar15 = uStack_548;
      pppppppuVar5 = local_550;
      if (-1 < (long)local_540) {
        uVar15 = local_540 >> 0x38;
        pppppppuVar5 = &local_550;
      }
      FUN_006228b0(uVar14,pppppppuVar5,uVar15);
      if ((long)local_540 < 0) {
        operator_delete(local_550);
      }
      pppppppcVar4 = local_520;
      if ((long)local_528 < 0) {
        operator_delete(local_538);
        pppppppcVar4 = local_520;
      }
      local_520 = pppppppcVar4;
      if (pppppppcVar4 == (char *******)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string:1063: libc++ Hardening assertion __s != nullptr failed: basic_string(const char*) detected nullptr\n"
                  );
      }
      uVar14 = *(undefined8 *)(param_1 + 0x4120);
      uVar7 = *(undefined4 *)(param_1 + 0x88);
      __n = strlen((char *)pppppppcVar4);
      if (0x7ffffffffffffff6 < __n) {
                    /* WARNING: Subroutine does not return */
        FUN_005d45ec();
      }
      if (__n < 0x17) {
        local_528 = CONCAT17((char)__n,(undefined7)local_528);
        __dest = (char *******)&local_538;
      }
      else {
        uVar15 = (__n & 0x7ffffffffffffff8) + 8;
        uVar18 = 0x19;
        if (uVar15 != 0x18) {
          uVar18 = uVar15;
        }
        __dest = (char *******)operator_new(uVar18);
        local_528 = uVar18 | 0x8000000000000000;
        local_538 = __dest;
        uStack_530 = __n;
      }
      if ((char *******)((long)__dest + __n) < __dest) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                  );
      }
      if ((__dest <= pppppppcVar4) && (pppppppcVar4 < (char *******)((long)__dest + __n))) {
LAB_005d862c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                  );
      }
      memmove(__dest,pppppppcVar4,__n);
      *(char *)((long)__dest + __n) = '\0';
      FUN_005dbb24(uVar14,puVar20,uVar17,&uStack_6c0,uVar7,&local_538,uVar10);
      if ((long)local_528 < 0) {
        operator_delete(local_538);
      }
    }
    if (puVar11 != (undefined1 *)0x0) {
      operator_delete__(puVar11);
    }
    if (cStack_5a9 < '\0') {
      operator_delete(local_5c0);
    }
    if (cStack_5c1 < '\0') {
      operator_delete(local_5d8);
    }
    if (cStack_5d9 < '\0') {
      operator_delete(local_5f0);
    }
    FUN_007dc1b4(&local_500);
    goto LAB_005d855c;
  }
  puVar16 = (undefined4 *)((long)puVar16 + -2);
  if (puVar16 == (undefined4 *)0x0) goto LAB_005d82b8;
  goto LAB_005d8030;
}


// ===== 005d8660  FUN_005d8660 =====

int FUN_005d8660(long param_1,undefined8 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x3e30));
  *(undefined8 *)(param_1 + 0x3e58) = param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x3e30));
  return iVar1;
}


// ===== 005d86a4  FUN_005d86a4 =====

int FUN_005d86a4(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 local_54 [3];
  undefined1 uStack_51;
  undefined1 *local_38;
  
  puVar8 = param_2 + 1;
  puVar9 = (undefined8 *)*param_2;
  if (puVar9 != puVar8) {
    do {
      uVar1 = *(undefined4 *)(puVar9 + 8);
      local_54[0] = (undefined1)*(undefined4 *)(puVar9 + 4);
      local_38 = local_54;
      lVar5 = FUN_005dae6c(0,param_1 + 0x60,param_1 + 0x60,&DAT_001f94c3,&local_38,&uStack_51);
      *(undefined4 *)(lVar5 + 0x20) = uVar1;
      puVar2 = (undefined8 *)puVar9[1];
      puVar10 = puVar9;
      if ((undefined8 *)puVar9[1] == (undefined8 *)0x0) {
        do {
          puVar9 = (undefined8 *)puVar10[2];
          bVar3 = puVar10 != (undefined8 *)*puVar9;
          puVar10 = puVar9;
        } while (bVar3);
      }
      else {
        do {
          puVar9 = puVar2;
          puVar2 = (undefined8 *)*puVar9;
        } while ((undefined8 *)*puVar9 != (undefined8 *)0x0);
      }
    } while (puVar9 != puVar8);
  }
  puVar9 = (undefined8 *)(param_1 + 0x4140);
  if (puVar9 == param_2) goto LAB_005d87d8;
  if (*(long *)(param_1 + 0x4150) == 0) {
    lVar5 = FUN_005d4604(puVar9,*puVar8,puVar9);
    *(long *)(param_1 + 0x4148) = lVar5;
    plVar7 = (long *)(param_1 + 0x4148);
    if (lVar5 != 0) {
      *(long **)(lVar5 + 0x10) = plVar7;
      plVar6 = (long *)*plVar7;
      goto joined_r0x005d87b0;
    }
  }
  else {
    plVar6 = (long *)FUN_005d476c(puVar9,*(undefined8 *)(param_1 + 0x4148),*puVar8,0,puVar9);
    *(long **)(param_1 + 0x4148) = plVar6;
joined_r0x005d87b0:
    if (plVar6 == (long *)0x0) {
      plVar7 = (long *)(param_1 + 0x4148);
    }
    else {
      do {
        plVar7 = plVar6;
        plVar6 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
  }
  *(long **)(param_1 + 0x4140) = plVar7;
  *(undefined8 *)(param_1 + 0x4150) = param_2[2];
LAB_005d87d8:
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x148));
  (**(code **)(**(long **)(param_1 + 0x170) + 0x38))(*(long **)(param_1 + 0x170),param_2);
  iVar4 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x148));
  return iVar4;
}


// ===== 005d881c  FUN_005d881c =====

void FUN_005d881c(long param_1)

{
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}


// ===== 005d882c  FUN_005d882c =====

int FUN_005d882c(long param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x58) = 0;
  FUN_005db818(param_1 + 0x3e60);
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x148));
  (**(code **)(**(long **)(param_1 + 0x170) + 0xe0))();
  if (*(long *)(param_1 + 0x4158) != 0) {
    FUN_005dcbd0();
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x148));
  return iVar1;
}


// ===== 005d8888  FUN_005d8888 =====

int FUN_005d8888(undefined4 *param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_d0 [64];
  undefined1 *local_90;
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
  
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x148));
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(**(long **)(param_2 + 0x170) + 0xd8))(&local_90);
  if (((ulong)local_40 & 1) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  else {
    uVar1 = local_90._0_4_;
    FUN_00667388(auStack_d0,&local_80);
    *param_1 = uVar1;
    FUN_00667434(param_1 + 2,auStack_d0);
    *(undefined1 *)(param_1 + 0x12) = 1;
    FUN_006678ac(auStack_d0);
    if (((ulong)local_40 & 1) != 0) {
      FUN_006678ac(&local_80);
    }
  }
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x148));
  return iVar2;
}


// ===== 005d8960  FUN_005d8960 =====

ulong FUN_005d8960(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
  FUN_005dacdc(param_1,1,uVar2);
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = param_2;
  }
  FUN_00864454(*(undefined8 *)(param_1 + 0x80),uVar2,param_3);
  auVar4 = FUN_00864f50(*(undefined8 *)(param_1 + 0x80));
  uVar3 = auVar4._0_8_;
  if ((auVar4 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    uVar3 = FUN_008650b0(&local_70,*(undefined8 *)(param_1 + 0x80));
    if (((ulong)local_40 & 1) != 0) {
      pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x3f98));
      if (((ulong)local_40 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                  );
      }
      FUN_008533a4(param_1 + 0x3ea0,auVar4._0_8_,local_60,(ulong)puStack_58 & 0xffffffff);
      auVar4 = FUN_00853828(param_1 + 0x3ea0);
      if ((auVar4 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        FUN_0084b2f0(param_1 + 0x4110,auVar4._0_8_,1);
      }
      uVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x3f98));
      uVar3 = (ulong)uVar1;
    }
  }
  return uVar3;
}


// ===== 005d8a70  FUN_005d8a70 =====

void FUN_005d8a70(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x4020) = param_1;
  return;
}


// ===== 005d8a88  FUN_005d8a88 =====

int FUN_005d8a88(long param_1)

{
  short sVar1;
  
  sVar1 = FUN_005db7e0(param_1 + 0x3e60);
  return (int)sVar1;
}


// ===== 005d8ab0  FUN_005d8ab0 =====

void FUN_005d8ab0(long param_1)

{
  FUN_005db84c(param_1 + 0x3e60);
  return;
}


// ===== 005d8ac0  FUN_005d8ac0 =====

void FUN_005d8ac0(long param_1)

{
  FUN_005db88c(param_1 + 0x3e60);
  return;
}


// ===== 005d8ad0  FUN_005d8ad0 =====

int FUN_005d8ad0(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined1 *puStack_118;
  undefined1 *local_110;
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
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined4 local_60;
  short sStack_5c;
  undefined2 uStack_5a;
  undefined6 uStack_58;
  undefined2 uStack_52;
  undefined8 local_50;
  undefined1 *puStack_48;
  undefined4 local_40;
  
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
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = 0xaaaaaaaa;
  uStack_58 = 0xaaaaaaaaaaaa;
  uStack_52 = 0xaaaa;
  local_60 = 0xaaaaaaaa;
  sStack_5c = -0x5556;
  uStack_5a = 0xaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x148));
  lVar4 = **(long **)(param_2 + 0x170);
  if ((param_3 & 1) == 0) {
    (**(code **)(lVar4 + 0xa8))(&local_60);
    uVar9 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar3 = 1;
    uVar5 = 0xffffffff;
  }
  else {
    (**(code **)(lVar4 + 0xa0))(*(long **)(param_2 + 0x170),&local_60);
    uVar9 = CONCAT62(uStack_58,uStack_5a);
    uVar7 = uStack_52;
    uVar8 = (undefined2)local_50;
    uVar5 = local_50._4_4_;
    uVar3 = local_40;
  }
  plVar2 = *(long **)(param_2 + 0x170);
  *(undefined2 *)(param_1 + 0x10) = uVar7;
  *(undefined2 *)((long)param_1 + 0x82) = uVar8;
  *(undefined4 *)((long)param_1 + 0x84) = uVar5;
  *(undefined4 *)(param_1 + 0x11) = uVar3;
  param_1[0xf] = uVar9;
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
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  lVar4 = *plVar2;
  *(bool *)((long)param_1 + 4) = sStack_5c != 0;
  *(undefined4 *)param_1 = local_60;
  (**(code **)(lVar4 + 0xb0))(&local_100);
  plVar2 = *(long **)(param_2 + 0x170);
  param_1[8] = local_e0;
  param_1[2] = puStack_f8;
  param_1[1] = local_100;
  param_1[3] = puStack_b8;
  param_1[5] = puStack_e8;
  param_1[4] = puStack_f0;
  param_1[7] = puStack_d0;
  param_1[6] = puStack_d8;
  param_1[0x13] = puStack_98;
  param_1[0x14] = local_88;
  param_1[0xd] = local_68;
  param_1[0xe] = local_a0;
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  local_130 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  local_140 = &DAT_aaaaaaaaaaaaaaaa;
  lVar4 = *plVar2;
  param_1[0x15] = puStack_78;
  param_1[10] = local_c0;
  param_1[9] = puStack_c8;
  pcVar6 = *(code **)(lVar4 + 0xb8);
  param_1[0xc] = puStack_a8;
  param_1[0xb] = local_b0;
  (*pcVar6)(&local_140);
  param_1[0x12] = local_130;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x148));
  return iVar1;
}


// ===== 005d8c5c  FUN_005d8c5c =====

int FUN_005d8c5c(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x3de8));
  puVar2 = (undefined8 *)FUN_00929e38(param_2 + 0x3e10);
  uVar3 = *puVar2;
  uVar5 = puVar2[3];
  uVar4 = puVar2[2];
  param_1[1] = puVar2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x3de8));
  return iVar1;
}


// ===== 005d8cb4  FUN_005d8cb4 =====

int FUN_005d8cb4(long param_1)

{
  int iVar1;
  int iVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x148));
  iVar2 = (**(code **)(**(long **)(param_1 + 0x170) + 0x98))();
  iVar1 = *(int *)(param_1 + 0x3f70);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x148));
  return iVar1 + iVar2;
}


// ===== 005d8d0c  FUN_005d8d0c =====

uint FUN_005d8d0c(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x148));
  param_2 = param_2 & ((long)param_2 >> 0x3f ^ 0xffffffffffffffffU);
  if (9999999 < (long)param_2) {
    param_2 = 10000000;
  }
  uVar1 = (uint)(param_2 * 0x83126f >> 0x20);
  uVar2 = uVar1 >> 1;
  if (499 < (int)param_2 + uVar2 * -1000) {
    uVar2 = (uVar1 >> 1) + 1;
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0x170) + 0x70))(*(long **)(param_1 + 0x170),uVar2);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x148));
  return uVar2 & 1;
}


// ===== 005d8d90  FUN_005d8d90 =====

void FUN_005d8d90(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x3f60);
  uVar1 = *(undefined8 *)(param_2 + 0x3f58);
  param_1[2] = *(undefined8 *)(param_2 + 0x3f68);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}


// ===== 005d8dac  FUN_005d8dac =====

void FUN_005d8dac(long param_1,undefined8 param_2,undefined8 param_3)

{
  if ((*(byte *)(param_1 + 0x3f80) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x3f80) = 1;
  }
  *(undefined8 *)(param_1 + 0x3f78) = param_2;
  if ((*(byte *)(param_1 + 0x3f90) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x3f90) = 1;
  }
  *(undefined8 *)(param_1 + 0x3f88) = param_3;
  return;
}


// ===== 005d8de0  FUN_005d8de0 =====

undefined1  [16] FUN_005d8de0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  if ((*(char *)(param_1 + 0x3f80) == '\x01') && (*(char *)(param_1 + 0x3f90) == '\x01')) {
    uVar2 = *(ulong *)(param_1 + 0x3f88);
    uVar3 = -uVar2 / 1000;
    if (500 < -uVar2 % 1000) {
      uVar3 = uVar3 + 1;
    }
    uVar1 = -(uVar2 / 1000) - (ulong)(499 < uVar2 % 1000);
    if ((uVar2 & 0x8000000000000000) != 0) {
      uVar1 = uVar3;
    }
    auVar4._8_8_ = 1;
    auVar4._0_8_ = uVar1 + param_2 + (*(ulong *)(param_1 + 0x3f78) >> 0x20) * 1000 +
                   (long)((double)(*(ulong *)(param_1 + 0x3f78) & 0xffffffff) / DAT_001f4ff8 + 0.5);
    return auVar4;
  }
  return ZEXT816(0);
}


// ===== 005d8ea4  FUN_005d8ea4 =====

uint FUN_005d8ea4(long param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x30);
  pvVar2 = operator_new(0x18);
  FUN_006cd490(pvVar2,*(undefined4 *)(param_1 + 0x88),param_2);
  (**(code **)(*plVar3 + 0x28))(plVar3,pvVar2);
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x148));
  uVar1 = (**(code **)(**(long **)(param_1 + 0x170) + 0x80))(*(long **)(param_1 + 0x170),param_2);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x148));
  return uVar1 & 1;
}


// ===== 005d8f30  FUN_005d8f30 =====

undefined4 FUN_005d8f30(long param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x148));
  uVar1 = (**(code **)(**(long **)(param_1 + 0x170) + 0x88))();
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x148));
  return uVar1;
}


// ===== 005d8f7c  FUN_005d8f7c =====

int FUN_005d8f7c(long param_1,undefined8 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x148));
  (**(code **)(**(long **)(param_1 + 0x170) + 0x58))(*(long **)(param_1 + 0x170),param_2);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x148));
  return iVar1;
}


// ===== 005d8fc4  FUN_005d8fc4 =====

int FUN_005d8fc4(long param_1,undefined4 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x148));
  (**(code **)(**(long **)(param_1 + 0x170) + 0x60))(*(long **)(param_1 + 0x170),param_2);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x148));
  return iVar1;
}


// ===== 005d900c  FUN_005d900c =====

ulong FUN_005d900c(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  uVar7 = FUN_008650b0(&local_80,*(undefined8 *)(param_2 + 0x80));
  puVar3 = local_70;
  if (((((ulong)local_50 & 1) == 0) || (*(char *)(param_2 + 0x134) != '\x01')) ||
     ((*(byte *)(param_2 + 0x140) & 1) == 0)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  else {
    uVar4 = puStack_68._0_4_;
    uVar1 = *(undefined4 *)(param_2 + 0x130);
    uVar8 = *(undefined8 *)(param_2 + 0x138);
    pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x148));
    iVar5 = (**(code **)(**(long **)(param_2 + 0x170) + 0x98))();
    iVar2 = *(int *)(param_2 + 0x3f70);
    *param_1 = uVar8;
    *(undefined4 *)(param_1 + 1) = uVar1;
    *(undefined4 *)((long)param_1 + 0xc) = uVar4;
    *(undefined1 *)(param_1 + 4) = 1;
    param_1[2] = puVar3;
    param_1[3] = (ulong)(uint)(iVar2 + iVar5) * 1000;
    uVar6 = pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x148));
    uVar7 = (ulong)uVar6;
  }
  return uVar7;
}


// ===== 005d90e4  FUN_005d90e4 =====

void FUN_005d90e4(long param_1,undefined8 param_2)

{
  FUN_008e6c58(param_2,*(undefined8 *)(param_1 + 0x80),0);
  *(undefined8 *)(param_1 + 0x4028) = param_2;
  return;
}


// ===== 005d9124  FUN_005d9124 =====

void FUN_005d9124(long param_1)

{
  FUN_008e6d4c(*(undefined8 *)(param_1 + 0x4028),*(undefined8 *)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0x4028) = 0;
  return;
}


// ===== 005d9158  FUN_005d9158 =====

void FUN_005d9158(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  int iVar6;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined4 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  plVar2 = *(long **)(param_2 + 0x78);
  param_1[1] = 0;
  uVar1 = *(undefined4 *)(param_2 + 0x88);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xe] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xd] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x14] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x13] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x16] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x15] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x12] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x11] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x10] = 0;
  lVar3 = *plVar2;
  *(undefined1 *)(param_1 + 0x13) = 0;
  pcVar4 = *(code **)(lVar3 + 0x18);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  plVar2 = (long *)(*pcVar4)(plVar2,uVar1);
  if (plVar2 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x10))(&local_90);
    *(undefined4 *)param_1 = local_90._0_4_;
    if ((long)puStack_88 < 0) {
      iVar6 = -(int)((ulong)-(long)puStack_88 / 1000) -
              (uint)(500 < (ulong)-(long)puStack_88 % 1000);
    }
    else {
      iVar6 = (int)((ulong)puStack_88 / 1000);
      if (499 < (ulong)puStack_88 % 1000) {
        iVar6 = iVar6 + 1;
      }
    }
    *(int *)((long)param_1 + 4) = iVar6;
    param_1[1] = puStack_68;
    param_1[2] = (long)local_60 + (long)local_70;
    *(undefined4 *)(param_1 + 3) = uStack_58;
    param_1[5] = uStack_48;
    param_1[4] = local_50;
    param_1[8] = local_80;
    *(undefined1 *)(param_1 + 9) = puStack_78._0_1_;
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x412c);
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x3f98));
  param_1[7] = *(undefined8 *)(param_2 + 0x3fd8);
  pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x3f98));
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_008650b0(&local_90,*(undefined8 *)(param_2 + 0x80));
  if (((ulong)local_60 & 1) != 0) {
    *(undefined1 *)(param_1 + 0xb) = 1;
    param_1[10] = local_90;
    if (puStack_88 == (undefined1 *)0x0) {
      lVar3 = -0x8000000000000000;
    }
    else {
      uVar5 = ((ulong)puStack_88 & 0xffffffff) * 1000000;
      lVar3 = (uVar5 >> 0x1f & 1) + (uVar5 >> 0x20) +
              (((ulong)puStack_88 >> 0x20) + 0x7c558180 & 0xffffffff) * 1000000;
    }
    *(undefined1 *)(param_1 + 0xd) = 1;
    param_1[0xc] = lVar3;
    if (local_80 == (undefined1 *)0x0) {
      lVar3 = -0x8000000000000000;
    }
    else {
      uVar5 = ((ulong)local_80 & 0xffffffff) * 1000000;
      lVar3 = (uVar5 >> 0x1f & 1) + (uVar5 >> 0x20) +
              (((ulong)local_80 >> 0x20) + 0x7c558180 & 0xffffffff) * 1000000;
    }
    param_1[0xe] = lVar3;
    *(undefined1 *)(param_1 + 0xf) = 1;
    param_1[0x10] = (ulong)puStack_78 >> 0x20;
    param_1[0x12] = puStack_68;
    param_1[0x11] = local_70;
  }
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_008650bc(&local_c0,*(undefined8 *)(param_2 + 0x80));
  if (((ulong)local_a0 & 1) != 0) {
    param_1[0x13] = local_c0;
    *(undefined1 *)(param_1 + 0x14) = puStack_b8._0_1_;
    *(undefined4 *)(param_1 + 0x16) = local_a8._0_4_;
    param_1[0x15] = local_b0;
  }
  return;
}


// ===== 005d93f4  FUN_005d93f4 =====

void FUN_005d93f4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = *(undefined8 *)(param_2 + 0x3fe0);
  uVar4 = *(undefined8 *)(param_2 + 0x3ff8);
  uVar3 = *(undefined8 *)(param_2 + 0x3ff0);
  uVar6 = *(undefined8 *)(param_2 + 0x4008);
  uVar5 = *(undefined8 *)(param_2 + 0x4000);
  uVar1 = *(undefined8 *)(param_2 + 0x4010);
  param_1[1] = *(undefined8 *)(param_2 + 0x3fe8);
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[6] = uVar1;
  return;
}


// ===== 005d9418  FUN_005d9418 =====

void FUN_005d9418(long param_1,uint param_2,int param_3)

{
  void *pvVar1;
  code *pcVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  pcVar2 = *(code **)(**(long **)(param_1 + 0x78) + 0x20);
  if ((param_2 & 1) != 0) {
    (*pcVar2)();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    pvVar1 = operator_new(0x70);
    FUN_005dcac4(pvVar1,uVar3);
    pvVar4 = *(void **)(param_1 + 0x4158);
    *(void **)(param_1 + 0x4158) = pvVar1;
    if (pvVar4 != (void *)0x0) {
      FUN_005dcb1c(pvVar4);
      operator_delete(pvVar4);
      pvVar1 = *(void **)(param_1 + 0x4158);
    }
    FUN_005dd16c(pvVar1,(long)param_3);
    return;
  }
  (*pcVar2)(*(long **)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x88),0x32);
  pvVar1 = *(void **)(param_1 + 0x4158);
  *(undefined8 *)(param_1 + 0x4158) = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_005dcb1c(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 005d94f4  FUN_005d94f4 =====

void FUN_005d94f4(long param_1)

{
  FUN_00864f38(*(undefined8 *)(param_1 + 0x80));
  return;
}


// ===== 005d9500  FUN_005d9500 =====

void FUN_005d9500(long param_1)

{
  FUN_00864644(*(undefined8 *)(param_1 + 0x80));
  return;
}


// ===== 005d950c  FUN_005d950c =====

/* WARNING: Type propagation algorithm not settling */

uint FUN_005d950c(long param_1,int param_2,uint *param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  void *pvVar9;
  long lVar10;
  long *plVar11;
  undefined1 extraout_w1;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  code *pcVar15;
  long *plVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined1 auVar19 [16];
  undefined8 local_100;
  code *pcStack_f8;
  code *local_f0;
  code *pcStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined4 *local_90;
  undefined4 *local_88;
  undefined4 *local_80;
  ulong local_78;
  undefined1 local_6c [12];
  
  if (((DAT_00d64018 & 1) == 0) && (iVar6 = FUN_0054fdd4(&DAT_00d64018), iVar6 != 0)) {
    DAT_00d64010 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d64018);
  }
  if (*DAT_00d64010 != '\0') {
    local_90 = (undefined4 *)(long)param_2;
    local_100 = "sample_rate_hz";
    local_78 = CONCAT71(local_78._1_7_,3);
    FUN_0066d348(0x42,DAT_00d64010,"ChannelReceive::GetAudioFrameWithInfo",0,1,&local_100,&local_78,
                 &local_90,0);
  }
  plVar16 = *(long **)(param_1 + 0x30);
  pvVar9 = operator_new(0x18);
  FUN_006cd2b0(pvVar9,*(undefined4 *)(param_1 + 0x88));
  (**(code **)(*plVar16 + 0x28))(plVar16,pvVar9);
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x148));
  iVar6 = (**(code **)(**(long **)(param_1 + 0x170) + 0x30))
                    (*(long **)(param_1 + 0x170),param_3,0,0,0);
  if (iVar6 != 0) {
    if (((DAT_00d64028 & 1) == 0) && (iVar6 = FUN_0054fdd4(&DAT_00d64028), iVar6 != 0)) {
      DAT_00d64020 = (char *)FUN_0066d328("webrtc");
      FUN_0054ff1c(&DAT_00d64028);
    }
    if (*DAT_00d64020 != '\0') {
      local_100 = "error";
      local_78 = CONCAT71(local_78._1_7_,3);
      local_90 = (undefined4 *)0x1;
      FUN_0066d348(0x45,DAT_00d64020,"ChannelReceive::GetAudioFrameWithInfo",0,1,&local_100,
                   &local_78,&local_90,0);
    }
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x148));
    return 2;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x148));
  FUN_0092895c(param_1 + 0x178,param_2,param_3);
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x3de8));
  uVar8 = param_3[0xc];
  uVar7 = FUN_0065901c(param_3);
  FUN_00929de8(param_1 + 0x3e10,uVar8,uVar7 & 1);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x3de8));
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x3e30));
  if (*(long *)(param_1 + 0x3e58) != 0) {
    pcStack_f8 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    local_100 = &DAT_aaaaaaaaaaaaaaaa;
    pcStack_e8 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    local_f0 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    local_e0 = &DAT_aaaaaaaaaaaaaaaa;
    local_100 = (char *)FUN_00659108(param_3);
    pcStack_f8 = *(code **)(param_3 + 6);
    pcStack_e8 = *(code **)(param_3 + 10);
    local_f0 = (code *)CONCAT44(local_f0._4_4_,param_3[8]);
    local_e0 = (undefined1 *)CONCAT44(local_e0._4_4_,*param_3);
    (**(code **)(**(long **)(param_1 + 0x3e58) + 0x10))(*(long **)(param_1 + 0x3e58),&local_100);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x3e30));
  sVar5 = FUN_005db8cc(DAT_001f5338,param_1 + 0x3e60,param_3);
  uVar12 = *(ulong *)(param_1 + 0x3fd0);
  if ((long)uVar12 < 0) {
    uVar12 = (ulong)*param_3;
    if (*param_3 != 0) {
      *(ulong *)(param_1 + 0x3fd0) = uVar12;
      goto LAB_005d9758;
    }
  }
  else {
LAB_005d9758:
    uVar8 = *param_3;
    uVar14 = (ulong)uVar8;
    if ((*(byte *)(param_1 + 0x3fcc) & 1) != 0) {
      uVar7 = uVar8 - *(uint *)(param_1 + 0x3fc8);
      bVar1 = *(uint *)(param_1 + 0x3fc8) <= uVar8 && uVar7 != 0;
      if (uVar7 != 0x80000000) {
        bVar1 = uVar7 != 0xffffffff && (int)(uVar7 + 1) < 0 == SCARRY4(uVar7,1);
      }
      uVar14 = (ulong)uVar7;
      if (!bVar1) {
        uVar14 = (ulong)uVar7 | 0xffffffff00000000;
      }
      uVar14 = uVar14 + *(long *)(param_1 + 0x3fc0);
    }
    *(uint *)(param_1 + 0x3fc8) = uVar8;
    *(ulong *)(param_1 + 0x3fc0) = uVar14;
    *(byte *)(param_1 + 0x3fcc) = 1;
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x148));
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    pcStack_e8 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    local_f0 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
    local_e0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
    local_d0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = &DAT_aaaaaaaaaaaaaaaa;
    pcStack_f8 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    local_100 = &DAT_aaaaaaaaaaaaaaaa;
    (**(code **)(**(long **)(param_1 + 0x170) + 0xd8))(&local_100);
    if (((((ulong)local_b0 & 1) != 0) && (iVar6 = (int)puStack_d8, (int)puStack_d8 != 0)) ||
       (iVar6 = (**(code **)(**(long **)(param_1 + 0x170) + 200))(), ((ulong)local_b0 & 1) != 0)) {
      FUN_006678ac(&local_f0);
    }
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x148));
    lVar13 = 0;
    if ((long)(iVar6 / 1000) != 0) {
      lVar13 = (long)(uVar14 - uVar12) / (long)(iVar6 / 1000);
    }
    *(long *)(param_3 + 2) = lVar13;
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x3f98));
    uVar12 = FUN_008536b8(param_1 + 0x3ea0,*param_3);
    if (uVar12 == 0) {
      param_3[4] = 0xffffffff;
      param_3[5] = 0xffffffff;
    }
    else {
      lVar13 = (long)((double)(uVar12 & 0xffffffff) / DAT_001f4ff8 + 0.5) + (uVar12 >> 0x20) * 1000;
      *(long *)(param_3 + 4) = lVar13;
      if (0 < lVar13) {
        *(long *)(param_1 + 0x3fd8) = lVar13 - *(long *)(param_3 + 2);
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x3f98));
  }
  local_90 = (undefined4 *)0x0;
  local_88 = (undefined4 *)0x0;
  local_80 = (undefined4 *)0x0;
  if (*(long *)(param_3 + 0x10) == 0) {
    if (((DAT_00d60290 & 1) == 0) && (iVar6 = FUN_0054fdd4(&DAT_00d60290), iVar6 != 0)) {
      DAT_00d60288 = (long *)operator_new(0x18);
      DAT_00d60288[1] = 0;
      DAT_00d60288[2] = 0;
      *DAT_00d60288 = 0;
      FUN_0054ff1c(&DAT_00d60290);
    }
    puVar17 = (undefined4 *)*DAT_00d60288;
    if (*(long *)(param_3 + 0x10) == 0) {
      plVar16 = DAT_00d60288;
      if (((DAT_00d60290 & 1) == 0) &&
         (iVar6 = FUN_0054fdd4(&DAT_00d60290), plVar16 = DAT_00d60288, iVar6 != 0)) {
        DAT_00d60288 = (long *)operator_new(0x18);
        DAT_00d60288[1] = 0;
        DAT_00d60288[2] = 0;
        *DAT_00d60288 = 0;
        FUN_0054ff1c(&DAT_00d60290);
        plVar16 = DAT_00d60288;
      }
    }
    else {
      plVar16 = (long *)(*(long *)(param_3 + 0x10) + 8);
    }
  }
  else {
    plVar16 = (long *)(*(long *)(param_3 + 0x10) + 8);
    puVar17 = (undefined4 *)*plVar16;
  }
  puVar18 = (undefined4 *)plVar16[1];
  puVar2 = local_90;
  puVar3 = local_88;
  for (; local_90 = puVar2, local_88 = puVar3, puVar17 != puVar18; puVar17 = puVar17 + 0x1a) {
    puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
    local_e0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
    local_d0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = &DAT_aaaaaaaaaaaaaaaa;
    local_a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    local_f0 = (code *)0x0;
    pcStack_e8 = (code *)0x0;
    pcStack_f8 = (code *)0x0;
    pvVar9 = *(void **)(puVar17 + 2);
    local_100 = (char *)CONCAT44(0xaaaaaaaa,*puVar17);
    uVar12 = *(long *)(puVar17 + 4) - (long)pvVar9;
    if (uVar12 != 0) {
      if ((long)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005da79c();
      }
      pcStack_f8 = (code *)operator_new(uVar12);
      pcVar15 = pcStack_f8 + uVar12;
      local_f0 = pcStack_f8;
      pcStack_e8 = pcVar15;
      memcpy(pcStack_f8,pvVar9,uVar12);
      local_f0 = pcVar15;
    }
    puStack_b8 = *(undefined1 **)(puVar17 + 0x12);
    local_c0 = *(undefined1 **)(puVar17 + 0x10);
    local_a8 = *(undefined1 **)(puVar17 + 0x16);
    local_b0 = *(undefined1 **)(puVar17 + 0x14);
    puStack_d8 = *(undefined1 **)(puVar17 + 10);
    local_e0 = *(undefined1 **)(puVar17 + 8);
    puStack_c8 = *(undefined1 **)(puVar17 + 0xe);
    local_d0 = *(undefined1 **)(puVar17 + 0xc);
    local_a0 = (undefined1 *)CONCAT71(local_a0._1_7_,*(undefined1 *)(puVar17 + 0x18));
    if (*(char *)(puVar17 + 0x14) == '\x01') {
      pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x3f98));
      if ((*(byte *)(puVar17 + 0x14) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1054: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                  );
      }
      auVar19 = FUN_0084b284(param_1 + 0x4110,*(undefined8 *)(puVar17 + 0x10),
                             *(undefined8 *)(puVar17 + 0x12));
      local_a8 = (undefined1 *)FUN_0084b2b4(auVar19._0_8_,auVar19._8_8_ & 0xff);
      local_a0 = (undefined1 *)CONCAT71(local_a0._1_7_,extraout_w1);
      pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x3f98));
    }
    if (local_88 < local_80) {
      if (local_88 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(undefined8 *)(local_88 + 4) = 0;
      *(undefined8 *)(local_88 + 6) = 0;
      *(undefined8 *)(local_88 + 2) = 0;
      *local_88 = (undefined4)local_100;
      *(code **)(local_88 + 2) = pcStack_f8;
      *(code **)(local_88 + 4) = local_f0;
      *(code **)(local_88 + 6) = pcStack_e8;
      *(undefined1 **)(local_88 + 0x12) = puStack_b8;
      *(undefined1 **)(local_88 + 0x10) = local_c0;
      *(undefined1 **)(local_88 + 0x16) = local_a8;
      *(undefined1 **)(local_88 + 0x14) = local_b0;
      *(undefined1 **)(local_88 + 10) = puStack_d8;
      *(undefined1 **)(local_88 + 8) = local_e0;
      *(undefined1 **)(local_88 + 0xe) = puStack_c8;
      *(undefined1 **)(local_88 + 0xc) = local_d0;
      *(undefined1 *)(local_88 + 0x18) = local_a0._0_1_;
      local_88 = local_88 + 0x1a;
    }
    else {
      local_88 = (undefined4 *)FUN_005daf68(&local_90,&local_100);
      if (pcStack_f8 != (code *)0x0) {
        uVar12 = (ulong)(((long)pcStack_f8 - (long)local_f0 << 0x3e) -
                        ((long)pcStack_f8 - (long)local_f0)) >> 2;
        if ((ulong)(local_f0 + (-4 - ((long)local_f0 << 0x3e))) >> 2 <= uVar12) {
          uVar12 = (ulong)(local_f0 + (-4 - ((long)local_f0 << 0x3e))) >> 2;
        }
        pcVar15 = local_f0;
        if ((1 < uVar12) && ((((int)pcStack_f8 - (int)local_f0 | -(int)local_f0) & 3U) == 0)) {
          uVar12 = uVar12 & 0x3ffffffffffffffe;
          pcVar15 = local_f0 + uVar12 * -4;
          do {
            uVar12 = uVar12 - 2;
          } while (uVar12 != 0);
        }
        while (pcVar15 != pcStack_f8) {
          pcVar15 = pcVar15 + -4;
          if (pcVar15 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        local_f0 = pcStack_f8;
        operator_delete(pcStack_f8);
      }
    }
    puVar2 = local_90;
    puVar3 = local_88;
  }
  if (puVar2 == puVar3) {
    puVar17 = (undefined4 *)0x0;
  }
  else {
    puVar17 = (undefined4 *)operator_new(0x20);
    *puVar17 = 0;
    *(undefined4 **)(puVar17 + 2) = puVar2;
    *(undefined4 **)(puVar17 + 4) = puVar3;
    *(undefined4 **)(puVar17 + 6) = local_80;
    local_90 = (undefined4 *)0x0;
    local_88 = (undefined4 *)0x0;
    local_80 = (undefined4 *)0x0;
    if (puVar17 != (undefined4 *)0x0) {
      FUN_00d0f740(1,puVar17);
    }
  }
  pvVar9 = *(void **)(param_3 + 0x10);
  *(undefined4 **)(param_3 + 0x10) = puVar17;
  if (pvVar9 != (void *)0x0) {
    iVar6 = FUN_00d0f7a0(0xffffffff,pvVar9);
    if (iVar6 == 1) {
      FUN_005da674((long)pvVar9 + 8);
      operator_delete(pvVar9);
    }
    puVar17 = *(undefined4 **)(param_3 + 0x10);
  }
  if (puVar17 == (undefined4 *)0x0) {
    plVar16 = DAT_00d60288;
    if (((DAT_00d60290 & 1) == 0) &&
       (iVar6 = FUN_0054fdd4(&DAT_00d60290), plVar16 = DAT_00d60288, iVar6 != 0)) {
      DAT_00d60288 = (long *)operator_new(0x18);
      DAT_00d60288[1] = 0;
      DAT_00d60288[2] = 0;
      *DAT_00d60288 = 0;
      FUN_0054ff1c(&DAT_00d60290);
      plVar16 = DAT_00d60288;
    }
  }
  else {
    plVar16 = (long *)(puVar17 + 2);
  }
  if (*plVar16 != plVar16[1]) {
    pvVar9 = *(void **)(param_3 + 0x10);
    if (pvVar9 != (void *)0x0) {
      FUN_00d0f740(1,pvVar9);
    }
    lVar10 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
    plVar16 = *(long **)(param_1 + 0x38);
    lVar13 = *(long *)(param_1 + 0x40);
    if (lVar13 != 0) {
      FUN_00d0f740(1,lVar13);
    }
    if (pvVar9 != (void *)0x0) {
      FUN_00d0f740(1,pvVar9);
    }
    plVar11 = (long *)operator_new(0x18);
    *plVar11 = param_1;
    plVar11[1] = (long)pvVar9;
    plVar11[2] = lVar10;
    local_100 = (char *)operator_new(0x30);
    *(long *)local_100 = lVar13;
    *(long **)((long)local_100 + 0x10) = plVar11;
    *(code **)((long)local_100 + 0x20) = FUN_005db528;
    *(code **)((long)local_100 + 0x28) = FUN_005db42c;
    local_f0 = FUN_005db390;
    pcStack_e8 = FUN_005db348;
    (**(code **)(*plVar16 + 8))(plVar16,&local_100,&local_78,local_6c);
    (*local_f0)(0,&local_100,&local_100);
    if ((pvVar9 != (void *)0x0) && (iVar6 = FUN_00d0f7a0(0xffffffff,pvVar9), iVar6 == 1)) {
      FUN_005da674((long)pvVar9 + 8);
      operator_delete(pvVar9);
    }
  }
  iVar6 = *(int *)(param_1 + 0x4128) + 1;
  *(int *)(param_1 + 0x4128) = iVar6;
  if (99 < iVar6) {
    plVar16 = *(long **)(param_1 + 0x38);
    lVar13 = *(long *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x4128) = 0;
    if (lVar13 != 0) {
      FUN_00d0f740(1,lVar13);
    }
    local_100 = (char *)operator_new(0x30);
    *(long *)local_100 = lVar13;
    *(long *)((long)local_100 + 0x10) = param_1;
    *(code **)((long)local_100 + 0x20) = FUN_004473ec;
    *(code **)((long)local_100 + 0x28) = FUN_005db5b8;
    local_f0 = FUN_005db390;
    pcStack_e8 = FUN_005db348;
    (**(code **)(*plVar16 + 8))(plVar16,&local_100,&local_78,local_6c);
    (*local_f0)(0,&local_100,&local_100);
  }
  if (((DAT_00d64038 & 1) == 0) && (iVar6 = FUN_0054fdd4(&DAT_00d64038), iVar6 != 0)) {
    DAT_00d64030 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d64038);
  }
  pcVar4 = DAT_00d64030;
  if (*DAT_00d64030 != '\0') {
    uVar12 = FUN_0065901c(param_3);
    local_100 = "muted";
    local_78 = uVar12 & 1 | 0xaaaaaaaaaaaaaa00;
    local_6c[0] = 1;
    FUN_0066d348(0x45,pcVar4,"ChannelReceive::GetAudioFrameWithInfo",0,1,&local_100,local_6c,
                 &local_78,0);
  }
  if ((sVar5 == 0) || (uVar12 = FUN_0065901c(param_3), (uVar12 & 1) != 0)) {
    lVar13 = 0x3fe0;
  }
  else {
    uVar12 = *(ulong *)(param_3 + 0xe);
    uVar8 = (uint)uVar12;
    if ((uVar12 & 1) != 0) {
      *(long *)(param_1 + 0x3fe8) = *(long *)(param_1 + 0x3fe8) + 1;
    }
    if ((uVar8 >> 1 & 1) != 0) {
      *(long *)(param_1 + 0x3ff0) = *(long *)(param_1 + 0x3ff0) + 1;
    }
    if ((uVar8 >> 2 & 1) != 0) {
      *(long *)(param_1 + 0x3ff8) = *(long *)(param_1 + 0x3ff8) + 1;
    }
    if ((uVar12 & 0x18) != 0) {
      *(long *)(param_1 + 0x4000) = *(long *)(param_1 + 0x4000) + 1;
    }
    if ((uVar8 >> 5 & 1) != 0) {
      *(long *)(param_1 + 0x4008) = *(long *)(param_1 + 0x4008) + 1;
    }
    if ((uVar12 & 0x1c0) == 0) goto LAB_005d9dfc;
    lVar13 = 0x4010;
  }
  *(long *)(param_1 + lVar13) = *(long *)(param_1 + lVar13) + 1;
LAB_005d9dfc:
  uVar8 = FUN_0065901c(param_3);
  FUN_005da674(&local_90);
  return uVar8 & 1;
}


// ===== 005d9fe0  FUN_005d9fe0 =====

undefined1  [16] FUN_005d9fe0(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + 0x4020) & 0xffffffff;
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 005d9ff8  FUN_005d9ff8 =====

int FUN_005d9ff8(long param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x148));
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(**(long **)(param_1 + 0x170) + 0xd8))(&local_a0);
  puVar2 = local_50;
  iVar1 = local_a0._4_4_;
  iVar3 = (**(code **)(**(long **)(param_1 + 0x170) + 200))();
  if (((ulong)local_50 & 1) != 0) {
    FUN_006678ac(&local_90);
  }
  if (((ulong)puVar2 & 1) == 0) {
    iVar1 = 0;
  }
  if (iVar1 <= iVar3) {
    iVar1 = iVar3;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x148));
  return iVar1;
}


// ===== 005da0b0  FUN_005da0b0 =====

void FUN_005da0b0(long param_1)

{
  FUN_00874c9c(param_1 + 0x90);
  return;
}


// ===== 005da0bc  FUN_005da0bc =====

void FUN_005da0bc(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *local_70;
  long *local_68;
  undefined1 *puStack_60;
  code *local_58;
  undefined *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)*param_2;
  if (plVar3 != (long *)0x0) {
    if (param_1[0x824] == 0) {
      *param_2 = 0;
      puVar2 = (undefined8 *)operator_new(0x40);
      puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
      local_58 = FUN_005da398;
      local_50 = &DAT_001fb948;
      local_70 = plVar3;
      local_68 = param_1;
      FUN_005db9d0(puVar2,&local_68,&local_70,param_1[7]);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 8))();
      }
      if (*(code **)(local_50 + 8) != (code *)0x0) {
        (**(code **)(local_50 + 8))(local_68);
      }
      *(undefined4 *)((long)puVar2 + 0x3c) = 0;
      *puVar2 = &PTR_FUN_00d25f80;
      if (puVar2 != (undefined8 *)0x0) {
        FUN_00d0f740(1,(long)puVar2 + 0x3c);
      }
      plVar3 = (long *)param_1[0x824];
      param_1[0x824] = (long)puVar2;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
        puVar2 = (undefined8 *)param_1[0x824];
      }
      FUN_005dba4c(puVar2);
    }
    else {
      FUN_005dc064(&local_68);
      plVar3 = local_68;
      if (local_68 != (long *)0x0) {
        (**(code **)*local_68)(local_68);
      }
      plVar4 = (long *)*param_2;
      if (plVar4 != (long *)0x0) {
        (**(code **)*plVar4)(plVar4);
        (**(code **)(*plVar4 + 8))(plVar4);
      }
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      if (plVar3 != plVar4) {
        FUN_005dc064(&local_70,param_1[0x824]);
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../audio/channel_receive.cc",0x3f0,
                     "frame_transformer_delegate_->FrameTransformer() == frame_transformer",
                     &DAT_001fbad8,local_70,*param_2);
      }
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 8))();
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005da288  FUN_005da288 =====

void FUN_005da288(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  *param_2 = 0;
  plVar1 = *(long **)(param_1 + 0x4038);
  *(undefined8 *)(param_1 + 0x4038) = uVar2;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005da2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 005da2b4  FUN_005da2b4 =====

void FUN_005da2b4(long param_1)

{
  FUN_00865824(*(undefined8 *)(param_1 + 0x80));
  return;
}


// ===== 005da2c0  FUN_005da2c0 =====

int FUN_005da2c0(long param_1)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x148));
  (**(code **)(**(long **)(param_1 + 0x170) + 0xe8))();
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x148));
  return iVar1;
}


// ===== 005da300  FUN_005da300 =====

void FUN_005da300(long param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 == *(int *)(param_1 + 0x88)) {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    *(undefined4 *)(param_1 + 0x413c) = *(undefined4 *)(param_3 + 2);
    *(undefined8 *)(param_1 + 0x4134) = uVar2;
    *(undefined8 *)(param_1 + 0x412c) = uVar1;
  }
  return;
}


// ===== 005da32c  FUN_005da32c =====

void FUN_005da32c(long param_1)

{
  FUN_005d7ab4(param_1 + -8);
  return;
}


// ===== 005da338  FUN_005da338 =====

void FUN_005da338(long param_1)

{
  FUN_005d7ab4((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 005da36c  FUN_005da36c =====

void FUN_005da36c(long param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 == *(int *)(param_1 + 0x80)) {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    *(undefined4 *)(param_1 + 0x4134) = *(undefined4 *)(param_3 + 2);
    *(undefined8 *)(param_1 + 0x412c) = uVar2;
    *(undefined8 *)(param_1 + 0x4124) = uVar1;
  }
  return;
}


// ===== 005da398  FUN_005da398 =====

void FUN_005da398(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  FUN_005da3b8(*param_1,*param_2,param_2[1],param_3,*param_4);
  return;
}


// ===== 005da3b8  FUN_005da3b8 =====

ulong FUN_005da3b8(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *__dest;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  long *plVar8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  void *local_c8;
  void *local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 *local_68;
  undefined4 *local_60;
  undefined4 *local_58;
  
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    FUN_00659568(&local_d0,param_4,param_5);
    puVar3 = (undefined4 *)operator_new(0x68);
    pvVar7 = local_c0;
    local_60 = puVar3 + 0x1a;
    local_68 = puVar3;
    local_58 = local_60;
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(undefined8 *)(puVar3 + 4) = 0;
    *(undefined8 *)(puVar3 + 6) = 0;
    *(undefined8 *)(puVar3 + 2) = 0;
    uVar5 = (long)local_c0 - (long)local_c8;
    *puVar3 = local_d0;
    if (uVar5 != 0) {
      if ((long)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005da79c();
      }
      __dest = operator_new(uVar5);
      *(void **)(puVar3 + 2) = __dest;
      *(void **)(puVar3 + 4) = __dest;
      *(ulong *)(puVar3 + 6) = (long)__dest + uVar5;
      memcpy(__dest,local_c8,uVar5);
      *(ulong *)(puVar3 + 4) = (long)__dest + uVar5;
    }
    *(undefined1 *)(puVar3 + 0x18) = local_70;
    *(undefined8 *)(puVar3 + 10) = uStack_a8;
    *(undefined8 *)(puVar3 + 8) = local_b0;
    *(undefined8 *)(puVar3 + 0xe) = uStack_98;
    *(undefined8 *)(puVar3 + 0xc) = uStack_a0;
    *(undefined8 *)(puVar3 + 0x12) = uStack_88;
    *(undefined8 *)(puVar3 + 0x10) = local_90;
    *(undefined8 *)(puVar3 + 0x16) = uStack_78;
    *(undefined8 *)(puVar3 + 0x14) = uStack_80;
    if (local_c8 != (void *)0x0) {
      uVar6 = (ulong)((long)pvVar7 + (-4 - ((long)pvVar7 << 0x3e))) >> 2;
      uVar5 = (ulong)(((long)local_c8 - (long)pvVar7 << 0x3e) - ((long)local_c8 - (long)pvVar7)) >>
              2;
      if (uVar6 <= uVar5) {
        uVar5 = uVar6;
      }
      if ((1 < uVar5) && ((((int)local_c8 - (int)pvVar7 | -(int)pvVar7) & 3U) == 0)) {
        uVar5 = uVar5 & 0x3ffffffffffffffe;
        pvVar7 = (void *)((long)pvVar7 + uVar5 * -4);
        do {
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
      }
      do {
        if (pvVar7 == local_c8) {
          local_c0 = local_c8;
          operator_delete(local_c8);
          goto LAB_005da5bc;
        }
        pvVar7 = (void *)((long)pvVar7 + -4);
      } while (pvVar7 != (void *)0x0);
LAB_005da594:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
LAB_005da5bc:
    FUN_005da7b4(&local_d0,&local_68);
    uVar4 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
    FUN_0087435c(param_1 + 0x90,&local_d0,uVar4);
    pvVar7 = (void *)CONCAT44(uStack_cc,local_d0);
    if ((pvVar7 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar7), iVar1 == 1)) {
      FUN_005da674((long)pvVar7 + 8);
      operator_delete(pvVar7);
    }
    param_1 = FUN_005da674(&local_68);
  }
  else if (param_3 != 0) {
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x148));
    plVar8 = *(long **)(param_1 + 0x170);
    FUN_00659568(&local_d0,param_4,param_5);
    (**(code **)(*plVar8 + 0x20))(plVar8,param_4,param_2,param_3,&local_d0);
    if (local_c8 != (void *)0x0) {
      uVar6 = (ulong)((long)local_c0 + (-4 - ((long)local_c0 << 0x3e))) >> 2;
      uVar5 = (ulong)(((long)local_c8 - (long)local_c0 << 0x3e) - ((long)local_c8 - (long)local_c0))
              >> 2;
      if (uVar6 <= uVar5) {
        uVar5 = uVar6;
      }
      if ((1 < uVar5) && ((((int)local_c8 - (int)local_c0 | -(int)local_c0) & 3U) == 0)) {
        uVar5 = uVar5 & 0x3ffffffffffffffe;
        local_c0 = (void *)((long)local_c0 + uVar5 * -4);
        do {
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
      }
      do {
        if (local_c0 == local_c8) {
          local_c0 = local_c8;
          operator_delete(local_c8);
          goto LAB_005da634;
        }
        local_c0 = (void *)((long)local_c0 + -4);
      } while (local_c0 != (void *)0x0);
      goto LAB_005da594;
    }
LAB_005da634:
    uVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x148));
    param_1 = (ulong)uVar2;
  }
  return param_1;
}


// ===== 005da674  FUN_005da674 =====

void FUN_005da674(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  
  pvVar7 = (void *)*param_1;
  if (pvVar7 == (void *)0x0) {
    return;
  }
  pvVar2 = pvVar7;
  pvVar3 = (void *)param_1[1];
  if (pvVar7 != (void *)param_1[1]) {
    do {
      pvVar2 = (void *)((long)pvVar3 + -0x68);
      if (pvVar2 == (void *)0x0) {
LAB_005da75c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar1 = *(void **)((long)pvVar3 + -0x60);
      if (pvVar1 != (void *)0x0) {
        pvVar4 = *(void **)((long)pvVar3 + -0x58);
        uVar6 = (ulong)((long)pvVar4 + (-4 - ((long)pvVar4 << 0x3e))) >> 2;
        uVar5 = (ulong)(((long)pvVar1 - (long)pvVar4 << 0x3e) - ((long)pvVar1 - (long)pvVar4)) >> 2;
        if (uVar6 <= uVar5) {
          uVar5 = uVar6;
        }
        if ((1 < uVar5) && ((((int)pvVar1 - (int)pvVar4 | -(int)pvVar4) & 3U) == 0)) {
          uVar5 = uVar5 & 0x3ffffffffffffffe;
          pvVar4 = (void *)((long)pvVar4 + uVar5 * -4);
          do {
            uVar5 = uVar5 - 2;
          } while (uVar5 != 0);
        }
        while (pvVar4 != pvVar1) {
          pvVar4 = (void *)((long)pvVar4 + -4);
          if (pvVar4 == (void *)0x0) goto LAB_005da75c;
        }
        *(void **)((long)pvVar3 + -0x58) = pvVar1;
        operator_delete(pvVar1);
      }
      pvVar3 = pvVar2;
    } while (pvVar7 != pvVar2);
    pvVar2 = (void *)*param_1;
  }
  param_1[1] = pvVar7;
  operator_delete(pvVar2);
  return;
}


// ===== 005da784  FUN_005da784 =====

void FUN_005da784(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 005da79c  FUN_005da79c =====

void FUN_005da79c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 005da7b4  FUN_005da7b4 =====

void FUN_005da7b4(undefined8 *param_1,long *param_2)

{
  undefined4 *puVar1;
  void *__src;
  undefined4 *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *__dest;
  long lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar5 = (undefined4 *)operator_new(0x20);
  puVar8 = (undefined4 *)*param_2;
  puVar2 = (undefined4 *)param_2[1];
  *puVar5 = 0;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  uVar4 = (long)puVar2 - (long)puVar8;
  *(undefined8 *)(puVar5 + 2) = 0;
  if (uVar4 != 0) {
    if (0x276276276276276 < (ulong)(((long)uVar4 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
      lVar7 = FUN_005da784();
      FUN_00d0f740(1,lVar7 + 0x3c);
      return;
    }
    puVar6 = (undefined4 *)operator_new(uVar4);
    *(undefined4 **)(puVar5 + 2) = puVar6;
    *(ulong *)(puVar5 + 6) = (long)puVar6 + uVar4;
    do {
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar3 = *puVar8;
      *(undefined8 *)(puVar6 + 4) = 0;
      *(undefined8 *)(puVar6 + 6) = 0;
      *(undefined8 *)(puVar6 + 2) = 0;
      *puVar6 = uVar3;
      __src = *(void **)(puVar8 + 2);
      uVar4 = *(long *)(puVar8 + 4) - (long)__src;
      if (uVar4 != 0) {
        if ((long)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_005da79c();
        }
        __dest = operator_new(uVar4);
        *(void **)(puVar6 + 2) = __dest;
        *(void **)(puVar6 + 4) = __dest;
        *(ulong *)(puVar6 + 6) = (long)__dest + uVar4;
        memcpy(__dest,__src,uVar4);
        *(ulong *)(puVar6 + 4) = (long)__dest + uVar4;
      }
      uVar11 = *(undefined8 *)(puVar8 + 0x10);
      uVar10 = *(undefined8 *)(puVar8 + 0x16);
      uVar9 = *(undefined8 *)(puVar8 + 0x14);
      uVar13 = *(undefined8 *)(puVar8 + 10);
      uVar12 = *(undefined8 *)(puVar8 + 8);
      uVar15 = *(undefined8 *)(puVar8 + 0xe);
      uVar14 = *(undefined8 *)(puVar8 + 0xc);
      *(undefined8 *)(puVar6 + 0x12) = *(undefined8 *)(puVar8 + 0x12);
      *(undefined8 *)(puVar6 + 0x10) = uVar11;
      *(undefined8 *)(puVar6 + 0x16) = uVar10;
      *(undefined8 *)(puVar6 + 0x14) = uVar9;
      *(undefined8 *)(puVar6 + 10) = uVar13;
      *(undefined8 *)(puVar6 + 8) = uVar12;
      *(undefined8 *)(puVar6 + 0xe) = uVar15;
      *(undefined8 *)(puVar6 + 0xc) = uVar14;
      puVar1 = puVar8 + 0x18;
      puVar8 = puVar8 + 0x1a;
      *(undefined1 *)(puVar6 + 0x18) = *(undefined1 *)puVar1;
      puVar6 = puVar6 + 0x1a;
    } while (puVar8 != puVar2);
    *(undefined4 **)(puVar5 + 4) = puVar6;
  }
  *param_1 = puVar5;
  if (puVar5 != (undefined4 *)0x0) {
    FUN_00d0f740(1,puVar5);
  }
  return;
}


// ===== 005da90c  FUN_005da90c =====

void FUN_005da90c(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x3c);
  return;
}


// ===== 005da930  FUN_005da930 =====

bool FUN_005da930(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,(long)param_1 + 0x3c);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 005da988  FUN_005da988 =====

void FUN_005da988(long *param_1)

{
  *param_1 = (long)(PTR_DAT_00d51f28 + 0x10);
  if ((long *)param_1[5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[5] + 8))();
  }
  if (*(code **)(param_1[4] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005da9dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[4] + 8))(param_1[1]);
    return;
  }
  return;
}


// ===== 005da9f0  FUN_005da9f0 =====

void FUN_005da9f0(long *param_1)

{
  *param_1 = (long)(PTR_DAT_00d51f28 + 0x10);
  if ((long *)param_1[5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[5] + 8))();
  }
  if (*(code **)(param_1[4] + 8) != (code *)0x0) {
    (**(code **)(param_1[4] + 8))(param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 005daa54  FUN_005daa54 =====

bool FUN_005daa54(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x3c) == 1;
}


// ===== 005daa6c  FUN_005daa6c =====

void FUN_005daa6c(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  void *pvVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  
  FUN_007ebdcc(*(undefined8 *)(param_1 + 0x90));
  pvVar8 = *(void **)(param_1 + 0x90);
  if ((pvVar8 != (void *)0x0) && (iVar3 = FUN_00d0f7a0(0xffffffff,pvVar8), iVar3 == 1)) {
    operator_delete(pvVar8);
  }
  (**(code **)(param_1 + 0x80))(0,param_1 + 0x70,param_1 + 0x70);
  pvVar8 = *(void **)(param_1 + 0x50);
  if (pvVar8 == (void *)0x0) {
LAB_005dab54:
    puVar2 = (undefined8 *)*(void **)(param_1 + 0x30);
    while (puVar2 != (undefined8 *)0x0) {
      if (puVar2 == (undefined8 *)0xfffffffffffffff0) goto LAB_005dab30;
      pvVar8 = (void *)*puVar2;
      operator_delete(puVar2);
      puVar2 = (undefined8 *)pvVar8;
    }
    pvVar8 = *(void **)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      plVar1 = *(long **)(param_1 + 0x10);
      plVar5 = *(long **)(*(long *)(param_1 + 8) + 8);
      *(long **)(*plVar1 + 8) = plVar5;
      *plVar5 = *plVar1;
      *(undefined8 *)(param_1 + 0x18) = 0;
      while (plVar1 != (long *)(param_1 + 8)) {
        if ((plVar1 == (long *)0xfffffffffffffff0) || (plVar1 == (long *)0x0)) goto LAB_005dab30;
        plVar5 = (long *)plVar1[1];
        operator_delete(plVar1);
        plVar1 = plVar5;
      }
    }
    return;
  }
  pvVar4 = *(void **)(param_1 + 0x58);
  uVar7 = (ulong)((long)pvVar4 + (-4 - ((long)pvVar4 << 0x3e))) >> 2;
  uVar6 = (ulong)(((long)pvVar8 - (long)pvVar4 << 0x3e) - ((long)pvVar8 - (long)pvVar4)) >> 2;
  if (uVar7 <= uVar6) {
    uVar6 = uVar7;
  }
  if ((1 < uVar6) && ((((int)pvVar8 - (int)pvVar4 | -(int)pvVar4) & 3U) == 0)) {
    uVar6 = uVar6 & 0x3ffffffffffffffe;
    pvVar4 = (void *)((long)pvVar4 + uVar6 * -4);
    do {
      uVar6 = uVar6 - 2;
    } while (uVar6 != 0);
  }
  do {
    if (pvVar4 == pvVar8) {
      *(void **)(param_1 + 0x58) = pvVar8;
      operator_delete(pvVar8);
      goto LAB_005dab54;
    }
    pvVar4 = (void *)((long)pvVar4 + -4);
  } while (pvVar4 != (void *)0x0);
LAB_005dab30:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


