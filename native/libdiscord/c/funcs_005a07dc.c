// ===== 005a07dc  FUN_005a07dc =====

undefined8 FUN_005a07dc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 0x48) == '\0') {
    uVar1 = FUN_005a2e60(param_1,0);
    return uVar1;
  }
  uVar1 = FUN_005a2e60(param_1,1);
  if (*(char *)(param_2 + 0x48) != '\0') {
    FUN_004f277c(uVar1,param_2);
    FUN_004f277c(uVar1,param_2 + 0x18);
    FUN_005a08a0(uVar1,param_2 + 0x30);
    return uVar1;
  }
  uVar1 = FUN_0054f64c(0x10);
                    /* try { // try from 005a0868 to 005a0873 has its CatchHandler @ 005a088c */
  FUN_0054723c(uVar1,"bad_optional_access");
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar1,&PTR_PTR_thunk_FUN_00552768_00d23c78,PTR_FUN_00d51d10);
}


// ===== 005a08a0  FUN_005a08a0 =====

undefined8 FUN_005a08a0(undefined8 param_1,long *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  long local_58;
  void *local_50;
  void *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined4 *)*param_2;
  puVar1 = (undefined4 *)param_2[1];
  local_50 = (void *)0x0;
  local_48 = (void *)0x0;
  local_40 = 0;
  if (puVar3 == puVar1) {
    local_58 = 0;
  }
  else {
    do {
                    /* try { // try from 005a08dc to 005a08e3 has its CatchHandler @ 005a095c */
      FUN_005a2f28(&local_50,*puVar3);
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar1);
    local_58 = (long)local_48 - (long)local_50;
  }
                    /* try { // try from 005a0904 to 005a090f has its CatchHandler @ 005a0958 */
  FUN_005a3440(param_1,&local_58);
                    /* try { // try from 005a0910 to 005a091b has its CatchHandler @ 005a0954 */
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


// ===== 005a098c  FUN_005a098c =====

long * FUN_005a098c(undefined8 *param_1,long *param_2,long *param_3,long *param_4,uint *param_5)

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
            if ((long *)*plVar8 == (long *)0x0) goto LAB_005a0b24;
          }
          if (uVar1 <= *(uint *)(plVar8 + 4)) break;
          plVar5 = plVar8 + 1;
          plVar6 = (long *)*plVar5;
        }
LAB_005a0b24:
        *param_3 = (long)plVar8;
        return plVar5;
      }
      if (plVar7 != (long *)0x0) {
        *param_3 = (long)plVar4;
        return plVar4;
      }
      goto LAB_005a0a98;
    }
  }
  if ((long *)*param_1 == param_2) {
    plVar6 = (long *)*param_2;
    plVar8 = param_2;
  }
  else {
    if (param_2 == (long *)0x0) {
                    /* try { // try from 005a0b40 to 005a0b67 has its CatchHandler @ 005a0b68 */
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
          if ((long *)*plVar8 == (long *)0x0) goto LAB_005a0a88;
        }
        if (uVar1 <= *(uint *)(plVar8 + 4)) break;
        plVar5 = plVar8 + 1;
        plVar6 = (long *)*plVar5;
      }
LAB_005a0a88:
      *param_3 = (long)plVar8;
      return plVar5;
    }
  }
  plVar3 = param_2;
  if (plVar6 != (long *)0x0) {
    *param_3 = (long)plVar8;
    return plVar8 + 1;
  }
LAB_005a0a98:
  *param_3 = (long)param_2;
  return plVar3;
}


// ===== 005a0b6c  FUN_005a0b6c =====

undefined8 FUN_005a0b6c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_2 + 0x140) == '\0') {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      uVar2 = FUN_005a2e60(param_1,0);
      return uVar2;
    }
  }
  else {
    uVar2 = FUN_005a2e60(param_1,1);
    if (*(char *)(param_2 + 0x140) == '\0') {
      uVar2 = FUN_0054f64c(0x10);
                    /* try { // try from 005a0c38 to 005a0c43 has its CatchHandler @ 005a0c80 */
      FUN_0054723c(uVar2,"bad_optional_access");
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_0054f748(uVar2,&PTR_PTR_thunk_FUN_00552768_00d23c78,PTR_FUN_00d51d10);
      }
    }
    else {
      local_48 = uVar2;
      if ((ulong)*(byte *)(param_2 + 0x138) == 0xff) {
        if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_004f2868();
        }
      }
      else {
        local_40 = &local_48;
        (*(code *)(&PTR_thunk_FUN_005a0d08_00d24f98)[*(byte *)(param_2 + 0x138)])(&local_40,param_2)
        ;
        if (*(long *)(lVar1 + 0x28) == local_38) {
          return uVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a0ca8  thunk_FUN_005a0d08 =====

void thunk_FUN_005a0d08(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_005a2e60(*(undefined8 *)*param_1,1);
  lStack_78 = param_2 + 0x70;
  lStack_70 = param_2 + 0xe8;
  lStack_68 = param_2 + 0x108;
  lStack_60 = param_2 + 0x120;
  lStack_90 = param_2;
  lStack_88 = param_2 + 0x18;
  lStack_80 = param_2 + 0x30;
  FUN_004f277c(uVar2,param_2);
  FUN_004f277c(uVar2,param_2 + 0x18);
  uStack_58 = uVar2;
  if ((ulong)*(byte *)(param_2 + 0x68) == 0xff) {
    if (*(long *)(lVar1 + 0x28) == lStack_48) {
                    /* WARNING: Subroutine does not return */
      FUN_004f2868();
    }
  }
  else {
    puStack_50 = &uStack_58;
    (*(code *)(&PTR_FUN_00d24f60)[*(byte *)(param_2 + 0x68)])(&puStack_50,param_2 + 0x30);
    FUN_0050a964(uVar2,&lStack_90);
    if (*(long *)(lVar1 + 0x28) == lStack_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a0cac  FUN_005a0cac =====

void FUN_005a0cac(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_005a2e60(*(undefined8 *)*param_1,2);
  FUN_004f277c(uVar1,param_2);
  FUN_004f277c(uVar1,param_2 + 0x18);
  FUN_005a08a0(uVar1,param_2 + 0x30);
  return;
}


// ===== 005a0d08  FUN_005a0d08 =====

void FUN_005a0d08(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
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
  uVar2 = FUN_005a2e60(*(undefined8 *)*param_1,1);
  lStack_78 = param_2 + 0x70;
  local_70 = param_2 + 0xe8;
  lStack_68 = param_2 + 0x108;
  local_60 = param_2 + 0x120;
  local_90 = param_2;
  lStack_88 = param_2 + 0x18;
  local_80 = param_2 + 0x30;
  FUN_004f277c(uVar2,param_2);
  FUN_004f277c(uVar2,param_2 + 0x18);
  local_58 = uVar2;
  if ((ulong)*(byte *)(param_2 + 0x68) == 0xff) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_004f2868();
    }
  }
  else {
    local_50 = &local_58;
    (*(code *)(&PTR_FUN_00d24f60)[*(byte *)(param_2 + 0x68)])(&local_50,param_2 + 0x30);
    FUN_0050a964(uVar2,&local_90);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a0dfc  FUN_005a0dfc =====

void FUN_005a0dfc(long *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  void *pvVar10;
  void *pvVar11;
  undefined8 *puVar12;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pvVar2 = (void *)*param_1;
  pvVar10 = (void *)param_1[1];
  lVar6 = (long)pvVar10 - (long)pvVar2 >> 3;
  uVar7 = lVar6 * -0x7063e7063e7063e7 + 1;
  if (uVar7 < 0xc7ce0c7ce0c7cf) {
    lVar8 = param_1[2] - (long)pvVar2 >> 3;
    uVar9 = lVar8 * 0x1f3831f3831f3832;
    if (uVar9 < uVar7 || uVar9 - uVar7 == 0) {
      uVar9 = uVar7;
    }
    if (0x63e7063e7063e6 < (ulong)(lVar8 * -0x7063e7063e7063e7)) {
      uVar9 = 0xc7ce0c7ce0c7ce;
    }
    if (uVar9 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (0xc7ce0c7ce0c7ce < uVar9) goto LAB_005a1098;
      pvVar4 = operator_new(uVar9 * 0x148);
    }
    puVar12 = (undefined8 *)((long)pvVar4 + lVar6 * 8);
    if (pvVar4 == (void *)0x0) {
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 005a1058 to 005a107f has its CatchHandler @ 005a10b4 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                   ,0x23,"__location != nullptr","null pointer given to construct_at");
      }
    }
    else {
      puVar1 = puVar12 + 0x29;
      puVar12[0x28] = 0;
      puVar12[1] = 0;
      *puVar12 = 0;
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
      puVar12[0xf] = 0;
      puVar12[0xe] = 0;
      puVar12[0x11] = 0;
      puVar12[0x10] = 0;
      puVar12[0x13] = 0;
      puVar12[0x12] = 0;
      puVar12[0x15] = 0;
      puVar12[0x14] = 0;
      puVar12[0x17] = 0;
      puVar12[0x16] = 0;
      puVar12[0x19] = 0;
      puVar12[0x18] = 0;
      puVar12[0x1b] = 0;
      puVar12[0x1a] = 0;
      puVar12[0x1d] = 0;
      puVar12[0x1c] = 0;
      puVar12[0x1f] = 0;
      puVar12[0x1e] = 0;
      puVar12[0x21] = 0;
      puVar12[0x20] = 0;
      puVar12[0x23] = 0;
      puVar12[0x22] = 0;
      puVar12[0x25] = 0;
      puVar12[0x24] = 0;
      puVar12[0x27] = 0;
      puVar12[0x26] = 0;
      pvVar11 = pvVar10;
      if (pvVar10 != pvVar2) {
        lVar6 = 0;
        do {
          puVar5 = (undefined1 *)((long)puVar12 + lVar6 + -0x148);
          *(undefined1 *)((long)puVar12 + lVar6 + -8) = 0;
          *puVar5 = 0;
          if (*(char *)((long)pvVar10 + lVar6 + -8) != '\0') {
            *(undefined1 *)((long)puVar12 + lVar6 + -0x10) = 0xff;
            uVar7 = (ulong)*(byte *)((long)pvVar10 + lVar6 + -0x10);
            if (uVar7 != 0xff) {
                    /* try { // try from 005a0f80 to 005a0f87 has its CatchHandler @ 005a10b0 */
              (*(code *)(&PTR_FUN_00d24df0)[uVar7])
                        (auStack_70,puVar5,(long)pvVar10 + lVar6 + -0x148);
              *(undefined1 *)((long)puVar12 + lVar6 + -0x10) =
                   *(undefined1 *)((long)pvVar10 + lVar6 + -0x10);
            }
            *(undefined1 *)((long)puVar12 + lVar6 + -8) = 1;
          }
          lVar6 = lVar6 + -0x148;
        } while ((void *)((long)pvVar10 + lVar6) != pvVar2);
        pvVar10 = (void *)param_1[1];
        puVar12 = (undefined8 *)((long)puVar12 + lVar6);
        pvVar11 = (void *)*param_1;
      }
      *param_1 = (long)puVar12;
      param_1[1] = (long)puVar1;
      param_1[2] = (long)((long)pvVar4 + uVar9 * 0x148);
      pvVar2 = pvVar10;
      while (pvVar4 = pvVar10, pvVar4 != pvVar11) {
        pvVar10 = (void *)((long)pvVar4 + -0x148);
        pvVar2 = pvVar11;
        if (*(char *)((long)pvVar4 + -8) != '\0') {
          if ((ulong)*(byte *)((long)pvVar4 + -0x10) != 0xff) {
                    /* try { // try from 005a0ff8 to 005a1003 has its CatchHandler @ 005a10ac */
            (*(code *)(&PTR_FUN_00d24dd0)[*(byte *)((long)pvVar4 + -0x10)])(auStack_70,pvVar10);
          }
          *(undefined1 *)((long)pvVar4 + -0x10) = 0xff;
        }
      }
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return;
      }
    }
  }
  else {
    if (*(long *)(lVar3 + 0x28) != local_68) goto LAB_005a10d8;
    FUN_004ffeb8(param_1);
LAB_005a1098:
    if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00401ad4();
    }
  }
LAB_005a10d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a10dc  FUN_005a10dc =====

undefined8 FUN_005a10dc(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  char local_4c [4];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_4c[0] = '\0';
  FUN_005a3158(param_1,local_4c);
  if (local_4c[0] == '\x01') {
    if ((*(char *)(param_2 + 0x28) != '\0') && ((ulong)*(byte *)(param_2 + 0x27) != 0xff)) {
                    /* try { // try from 005a117c to 005a1187 has its CatchHandler @ 005a1230 */
      (*(code *)(&PTR_FUN_00d24dd0)[*(byte *)(param_2 + 0x27)])(auStack_40,param_2);
    }
    *(undefined1 *)(param_2 + 0x28) = 1;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    param_2[9] = 0;
    param_2[8] = 0;
    param_2[0xb] = 0;
    param_2[10] = 0;
    param_2[0xd] = 0;
    param_2[0xc] = 0;
    param_2[0xf] = 0;
    param_2[0xe] = 0;
    param_2[0x11] = 0;
    param_2[0x10] = 0;
    param_2[0x13] = 0;
    param_2[0x12] = 0;
    param_2[0x15] = 0;
    param_2[0x14] = 0;
    param_2[0x17] = 0;
    param_2[0x16] = 0;
    param_2[0x19] = 0;
    param_2[0x18] = 0;
    param_2[0x1b] = 0;
    param_2[0x1a] = 0;
    param_2[0x1d] = 0;
    param_2[0x1c] = 0;
    param_2[0x1f] = 0;
    param_2[0x1e] = 0;
    param_2[0x21] = 0;
    param_2[0x20] = 0;
    param_2[0x23] = 0;
    param_2[0x22] = 0;
    param_2[0x25] = 0;
    param_2[0x24] = 0;
    param_2[0x27] = 0;
    param_2[0x26] = 0;
    FUN_005a1260(param_1,param_2);
  }
  else {
    if (local_4c[0] != '\0') {
      uVar2 = FUN_0054f64c(0x10);
                    /* try { // try from 005a11fc to 005a1207 has its CatchHandler @ 005a1238 */
      FUN_00579118(uVar2,"Malformed optional");
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_0054f748(uVar2,&PTR_PTR_thunk_FUN_00552768_00d23bb8,PTR_FUN_00d51d38);
      }
      goto LAB_005a125c;
    }
    if (*(char *)(param_2 + 0x28) != '\0') {
      if ((ulong)*(byte *)(param_2 + 0x27) != 0xff) {
                    /* try { // try from 005a1140 to 005a114b has its CatchHandler @ 005a1234 */
        (*(code *)(&PTR_FUN_00d24dd0)[*(byte *)(param_2 + 0x27)])(auStack_48,param_2);
      }
      *(undefined1 *)(param_2 + 0x28) = 0;
      *(undefined1 *)(param_2 + 0x27) = 0xff;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
LAB_005a125c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a1260  FUN_005a1260 =====

undefined8 FUN_005a1260(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *local_70;
  undefined8 *puStack_68;
  undefined8 *local_60;
  undefined8 *puStack_58;
  undefined8 *local_50;
  undefined8 *puStack_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_005a3158(param_1,&local_70);
  if ((char)local_70 == '\x01') {
    if ((ulong)*(byte *)(param_2 + 0x27) != 0xff) {
                    /* try { // try from 005a12b4 to 005a12bf has its CatchHandler @ 005a1384 */
      (*(code *)(&PTR_FUN_00d24dd0)[*(byte *)(param_2 + 0x27)])(&local_70,param_2);
    }
    puStack_48 = param_2 + 0x21;
    local_60 = param_2 + 6;
    param_2[7] = 0;
    *local_60 = 0;
    param_2[0xb] = 0;
    param_2[10] = 0;
    param_2[0xd] = 0;
    param_2[0xc] = 0;
    param_2[0x13] = 0;
    param_2[0x12] = 0;
    param_2[0x15] = 0;
    param_2[0x14] = 0;
    param_2[0x17] = 0;
    param_2[0x16] = 0;
    param_2[0x19] = 0;
    param_2[0x18] = 0;
    param_2[0x1b] = 0;
    param_2[0x1a] = 0;
    param_2[0x1d] = 0;
    param_2[0x1c] = 0;
    param_2[0x1f] = 0;
    param_2[0x1e] = 0;
    param_2[0x21] = 0;
    param_2[0x20] = 0;
    param_2[0x23] = 0;
    param_2[0x22] = 0;
    param_2[0x25] = 0;
    param_2[0x24] = 0;
    puStack_58 = param_2 + 0xe;
    param_2[0xf] = 0;
    *puStack_58 = 0;
    *(undefined8 *)((long)param_2 + 0x131) = 0;
    *(undefined8 *)((long)param_2 + 0x129) = 0;
    local_50 = param_2 + 0x1d;
    local_40 = param_2 + 0x24;
    param_2[0x11] = 0;
    param_2[0x10] = 0;
    param_2[9] = 0;
    param_2[8] = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    local_70 = param_2;
    puStack_68 = param_2 + 3;
    FUN_00506244(param_1,param_2);
    FUN_00506244(param_1,param_2 + 3);
    FUN_00508c6c(param_1,&local_70);
  }
  else {
    FUN_005a1388(param_1,(ulong)local_70 & 0xff,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a1388  FUN_005a1388 =====

void FUN_005a1388(undefined8 param_1,char param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_2 == '\x02') {
    if ((ulong)*(byte *)(param_3 + 0x27) != 0xff) {
                    /* try { // try from 005a13d8 to 005a13e3 has its CatchHandler @ 005a14bc */
      (*(code *)(&PTR_FUN_00d24dd0)[*(byte *)(param_3 + 0x27)])(auStack_50,param_3);
    }
    param_3[8] = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[1] = 0;
    *param_3 = 0;
    param_3[7] = 0;
    param_3[6] = 0;
    *(undefined1 *)(param_3 + 0x27) = 1;
    FUN_00506244(param_1,param_3);
    FUN_00506244(param_1,param_3 + 3);
    FUN_005a14c0(param_1,param_3 + 6);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else {
    uVar2 = FUN_0054f64c(0x10);
                    /* try { // try from 005a1460 to 005a146b has its CatchHandler @ 005a1494 */
    FUN_005064ec(uVar2,"Invalid variant type label");
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar2,&PTR_PTR_thunk_FUN_00552768_00d1fbf0,PTR_FUN_00d51d28);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a14c0  FUN_005a14c0 =====

long * FUN_005a14c0(long *param_1,long *param_2)

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
                    /* try { // try from 005a16d0 to 005a16db has its CatchHandler @ 005a171c */
    FUN_005064ec(uVar6,"Vector is longer than remaining data");
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar6,&PTR_PTR_thunk_FUN_00552768_00d1fbf0,PTR_FUN_00d51d28);
    }
    goto LAB_005a1760;
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
                    /* try { // try from 005a1714 to 005a171b has its CatchHandler @ 005a172c */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_80);
      }
      goto LAB_005a1760;
    }
                    /* try { // try from 005a1524 to 005a152b has its CatchHandler @ 005a172c */
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
      if (uVar4 == uVar10) goto LAB_005a15b0;
    }
    do {
      puVar9 = puVar8 + 1;
      local_60 = puVar7 + 1;
      *puVar7 = *puVar8;
      puVar7 = local_60;
      puVar8 = puVar9;
    } while (puVar9 != puVar5);
  }
LAB_005a15b0:
  param_2[1] = *param_2;
  while (local_60 != local_68) {
                    /* try { // try from 005a15cc to 005a15eb has its CatchHandler @ 005a1730 */
    FUN_005a1768(param_2);
    if (*param_2 == param_2[1]) {
      if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 005a1664 to 005a168b has its CatchHandler @ 005a1764 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                   "!empty()","back() called on an empty vector");
      }
      goto LAB_005a1760;
    }
    FUN_005a3258(&local_68,param_2[1] + -4);
  }
  if ((long)local_50 < 0) {
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 005a169c to 005a16c3 has its CatchHandler @ 005a1734 */
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
LAB_005a1760:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a1768  FUN_005a1768 =====

undefined4 * FUN_005a1768(undefined8 *param_1)

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
    if (puVar3 == (undefined4 *)0x0) {
                    /* try { // try from 005a186c to 005a1893 has its CatchHandler @ 005a18c8 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                 ,0x23,"__location != nullptr","null pointer given to construct_at");
    }
    puVar7 = puVar3 + 1;
    *puVar3 = 0;
    param_1[1] = puVar7;
LAB_005a1820:
    if ((undefined4 *)*param_1 != puVar7) {
      return puVar7 + -1;
    }
                    /* try { // try from 005a1844 to 005a186b has its CatchHandler @ 005a18d0 */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,"!empty()"
               ,"back() called on an empty vector");
  }
  __src = (void *)*param_1;
  lVar6 = (long)puVar3 - (long)__src >> 2;
  uVar1 = lVar6 + 1;
  if (uVar1 >> 0x3e == 0) {
    uVar4 = (long)param_1[2] - (long)__src;
    uVar5 = uVar4 >> 1;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar4) {
      uVar5 = 0x3fffffffffffffff;
    }
    if (uVar5 != 0) {
      if (uVar5 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      __dest = operator_new(uVar5 * 4);
      puVar2 = (undefined4 *)((long)__dest + lVar6 * 4);
      puVar7 = puVar2 + 1;
      *puVar2 = 0;
      memmove(__dest,__src,(long)puVar3 - (long)__src);
      *param_1 = __dest;
      param_1[1] = puVar7;
      param_1[2] = (void *)((long)__dest + uVar5 * 4);
      if (__src != (void *)0x0) {
        operator_delete(__src);
        puVar7 = (undefined4 *)param_1[1];
      }
      goto LAB_005a1820;
    }
  }
  else {
    FUN_004ffea4(param_1);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h",
             0x23,"__location != nullptr","null pointer given to construct_at");
}


// ===== 005a18d4  FUN_005a18d4 =====

bool FUN_005a18d4(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  byte bVar12;
  byte bVar13;
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
  byte bVar30;
  byte bVar31;
  undefined8 uVar32;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 auVar33 [16];
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  
  lVar2 = *param_2;
  lVar3 = *param_1;
  uVar8 = param_2[1] - lVar2;
  if (param_1[1] - lVar3 != uVar8) {
    return false;
  }
  if (param_2[1] == lVar2) {
    return true;
  }
  uVar1 = uVar8;
  if (uVar8 < 2) {
    uVar1 = 1;
  }
  if (uVar8 <= uVar1 - 1) {
                    /* WARNING: Subroutine does not return */
    FUN_0056a714();
  }
  if (uVar1 < 8) {
    uVar9 = 0;
    bVar12 = 0;
  }
  else {
    if (uVar1 < 0x20) {
      bVar12 = 0;
      uVar8 = 0;
    }
    else {
      uVar9 = uVar1 & 0xffffffffffffffe0;
      puVar10 = (undefined8 *)(lVar3 + 0x10);
      bVar12 = 0;
      bVar14 = 0;
      bVar17 = 0;
      bVar21 = 0;
      bVar16 = 0;
      bVar18 = 0;
      bVar20 = 0;
      bVar22 = 0;
      bVar24 = 0;
      bVar25 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      puVar11 = (undefined8 *)(lVar2 + 0x10);
      bVar13 = 0;
      bVar15 = 0;
      bVar19 = 0;
      bVar23 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      bVar41 = 0;
      bVar42 = 0;
      bVar43 = 0;
      bVar44 = 0;
      bVar45 = 0;
      uVar8 = uVar9;
      do {
        uVar46 = puVar10[-1];
        uVar32 = puVar10[-2];
        uVar48 = puVar10[1];
        uVar47 = *puVar10;
        puVar10 = puVar10 + 4;
        uVar8 = uVar8 - 0x20;
        uVar50 = puVar11[-1];
        uVar49 = puVar11[-2];
        uVar52 = puVar11[1];
        uVar51 = *puVar11;
        puVar11 = puVar11 + 4;
        bVar12 = (byte)uVar49 ^ (byte)uVar32 | bVar12;
        bVar14 = (byte)((ulong)uVar49 >> 8) ^ (byte)((ulong)uVar32 >> 8) | bVar14;
        bVar17 = (byte)((ulong)uVar49 >> 0x10) ^ (byte)((ulong)uVar32 >> 0x10) | bVar17;
        bVar21 = (byte)((ulong)uVar49 >> 0x18) ^ (byte)((ulong)uVar32 >> 0x18) | bVar21;
        bVar16 = (byte)((ulong)uVar49 >> 0x20) ^ (byte)((ulong)uVar32 >> 0x20) | bVar16;
        bVar18 = (byte)((ulong)uVar49 >> 0x28) ^ (byte)((ulong)uVar32 >> 0x28) | bVar18;
        bVar20 = (byte)((ulong)uVar49 >> 0x30) ^ (byte)((ulong)uVar32 >> 0x30) | bVar20;
        bVar22 = (byte)((ulong)uVar49 >> 0x38) ^ (byte)((ulong)uVar32 >> 0x38) | bVar22;
        bVar24 = (byte)uVar50 ^ (byte)uVar46 | bVar24;
        bVar25 = (byte)((ulong)uVar50 >> 8) ^ (byte)((ulong)uVar46 >> 8) | bVar25;
        bVar26 = (byte)((ulong)uVar50 >> 0x10) ^ (byte)((ulong)uVar46 >> 0x10) | bVar26;
        bVar27 = (byte)((ulong)uVar50 >> 0x18) ^ (byte)((ulong)uVar46 >> 0x18) | bVar27;
        bVar28 = (byte)((ulong)uVar50 >> 0x20) ^ (byte)((ulong)uVar46 >> 0x20) | bVar28;
        bVar29 = (byte)((ulong)uVar50 >> 0x28) ^ (byte)((ulong)uVar46 >> 0x28) | bVar29;
        bVar30 = (byte)((ulong)uVar50 >> 0x30) ^ (byte)((ulong)uVar46 >> 0x30) | bVar30;
        bVar31 = (byte)((ulong)uVar50 >> 0x38) ^ (byte)((ulong)uVar46 >> 0x38) | bVar31;
        bVar13 = (byte)uVar51 ^ (byte)uVar47 | bVar13;
        bVar15 = (byte)((ulong)uVar51 >> 8) ^ (byte)((ulong)uVar47 >> 8) | bVar15;
        bVar19 = (byte)((ulong)uVar51 >> 0x10) ^ (byte)((ulong)uVar47 >> 0x10) | bVar19;
        bVar23 = (byte)((ulong)uVar51 >> 0x18) ^ (byte)((ulong)uVar47 >> 0x18) | bVar23;
        bVar34 = (byte)((ulong)uVar51 >> 0x20) ^ (byte)((ulong)uVar47 >> 0x20) | bVar34;
        bVar35 = (byte)((ulong)uVar51 >> 0x28) ^ (byte)((ulong)uVar47 >> 0x28) | bVar35;
        bVar36 = (byte)((ulong)uVar51 >> 0x30) ^ (byte)((ulong)uVar47 >> 0x30) | bVar36;
        bVar37 = (byte)((ulong)uVar51 >> 0x38) ^ (byte)((ulong)uVar47 >> 0x38) | bVar37;
        bVar38 = (byte)uVar52 ^ (byte)uVar48 | bVar38;
        bVar39 = (byte)((ulong)uVar52 >> 8) ^ (byte)((ulong)uVar48 >> 8) | bVar39;
        bVar40 = (byte)((ulong)uVar52 >> 0x10) ^ (byte)((ulong)uVar48 >> 0x10) | bVar40;
        bVar41 = (byte)((ulong)uVar52 >> 0x18) ^ (byte)((ulong)uVar48 >> 0x18) | bVar41;
        bVar42 = (byte)((ulong)uVar52 >> 0x20) ^ (byte)((ulong)uVar48 >> 0x20) | bVar42;
        bVar43 = (byte)((ulong)uVar52 >> 0x28) ^ (byte)((ulong)uVar48 >> 0x28) | bVar43;
        bVar44 = (byte)((ulong)uVar52 >> 0x30) ^ (byte)((ulong)uVar48 >> 0x30) | bVar44;
        bVar45 = (byte)((ulong)uVar52 >> 0x38) ^ (byte)((ulong)uVar48 >> 0x38) | bVar45;
      } while (uVar8 != 0);
      bVar13 = bVar13 | bVar12;
      bVar15 = bVar15 | bVar14;
      bVar19 = bVar19 | bVar17;
      bVar23 = bVar23 | bVar21;
      bVar34 = bVar34 | bVar16;
      bVar35 = bVar35 | bVar18;
      bVar36 = bVar36 | bVar20;
      bVar37 = bVar37 | bVar22;
      auVar33[1] = bVar15;
      auVar33[0] = bVar13;
      auVar33[2] = bVar19;
      auVar33[3] = bVar23;
      auVar33[4] = bVar34;
      auVar33[5] = bVar35;
      auVar33[6] = bVar36;
      auVar33[7] = bVar37;
      auVar33[8] = bVar38 | bVar24;
      auVar33[9] = bVar39 | bVar25;
      auVar33[10] = bVar40 | bVar26;
      auVar33[0xb] = bVar41 | bVar27;
      auVar33[0xc] = bVar42 | bVar28;
      auVar33[0xd] = bVar43 | bVar29;
      auVar33[0xe] = bVar44 | bVar30;
      auVar33[0xf] = bVar45 | bVar31;
      auVar4[1] = bVar15;
      auVar4[0] = bVar13;
      auVar4[2] = bVar19;
      auVar4[3] = bVar23;
      auVar4[4] = bVar34;
      auVar4[5] = bVar35;
      auVar4[6] = bVar36;
      auVar4[7] = bVar37;
      auVar4[8] = bVar38 | bVar24;
      auVar4[9] = bVar39 | bVar25;
      auVar4[10] = bVar40 | bVar26;
      auVar4[0xb] = bVar41 | bVar27;
      auVar4[0xc] = bVar42 | bVar28;
      auVar4[0xd] = bVar43 | bVar29;
      auVar4[0xe] = bVar44 | bVar30;
      auVar4[0xf] = bVar45 | bVar31;
      auVar33 = NEON_ext(auVar33,auVar4,8,1);
      bVar12 = bVar13 | auVar33[0] | bVar15 | auVar33[1] | bVar19 | auVar33[2] | bVar23 | auVar33[3]
               | bVar34 | auVar33[4] | bVar35 | auVar33[5] | bVar36 | auVar33[6] |
               bVar37 | auVar33[7];
      if (uVar1 == uVar9) goto LAB_005a1a84;
      uVar8 = uVar9;
      if ((uVar1 & 0x18) == 0) goto LAB_005a1a60;
    }
    bVar13 = 0;
    bVar14 = 0;
    bVar15 = 0;
    bVar17 = 0;
    bVar19 = 0;
    bVar21 = 0;
    bVar23 = 0;
    uVar9 = uVar1 & 0xfffffffffffffff8;
    lVar7 = uVar8 - uVar9;
    puVar10 = (undefined8 *)(lVar3 + uVar8);
    puVar11 = (undefined8 *)(lVar2 + uVar8);
    do {
      uVar32 = *puVar10;
      uVar46 = *puVar11;
      lVar7 = lVar7 + 8;
      bVar12 = (byte)uVar46 ^ (byte)uVar32 | bVar12;
      bVar13 = (byte)((ulong)uVar46 >> 8) ^ (byte)((ulong)uVar32 >> 8) | bVar13;
      bVar14 = (byte)((ulong)uVar46 >> 0x10) ^ (byte)((ulong)uVar32 >> 0x10) | bVar14;
      bVar15 = (byte)((ulong)uVar46 >> 0x18) ^ (byte)((ulong)uVar32 >> 0x18) | bVar15;
      bVar17 = (byte)((ulong)uVar46 >> 0x20) ^ (byte)((ulong)uVar32 >> 0x20) | bVar17;
      bVar19 = (byte)((ulong)uVar46 >> 0x28) ^ (byte)((ulong)uVar32 >> 0x28) | bVar19;
      bVar21 = (byte)((ulong)uVar46 >> 0x30) ^ (byte)((ulong)uVar32 >> 0x30) | bVar21;
      bVar23 = (byte)((ulong)uVar46 >> 0x38) ^ (byte)((ulong)uVar32 >> 0x38) | bVar23;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    } while (lVar7 != 0);
    bVar12 = bVar12 | bVar13 | bVar14 | bVar15 | bVar17 | bVar19 | bVar21 | bVar23;
    if (uVar1 == uVar9) goto LAB_005a1a84;
  }
LAB_005a1a60:
  lVar7 = uVar1 - uVar9;
  pbVar5 = (byte *)(lVar2 + uVar9);
  pbVar6 = (byte *)(lVar3 + uVar9);
  do {
    lVar7 = lVar7 + -1;
    bVar12 = *pbVar5 ^ *pbVar6 | bVar12;
    pbVar5 = pbVar5 + 1;
    pbVar6 = pbVar6 + 1;
  } while (lVar7 != 0);
LAB_005a1a84:
  return bVar12 == 0;
}


// ===== 005a1a98  FUN_005a1a98 =====

bool FUN_005a1a98(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  byte bVar12;
  byte bVar13;
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
  byte bVar30;
  byte bVar31;
  undefined8 uVar32;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 auVar33 [16];
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  
  lVar2 = *param_2;
  lVar3 = *param_1;
  uVar8 = param_2[1] - lVar2;
  if (param_1[1] - lVar3 != uVar8) {
    return true;
  }
  if (param_2[1] == lVar2) {
    return false;
  }
  uVar1 = uVar8;
  if (uVar8 < 2) {
    uVar1 = 1;
  }
  if (uVar8 <= uVar1 - 1) {
                    /* WARNING: Subroutine does not return */
    FUN_0056a714();
  }
  if (uVar1 < 8) {
    uVar9 = 0;
    bVar12 = 0;
  }
  else {
    if (uVar1 < 0x20) {
      bVar12 = 0;
      uVar8 = 0;
    }
    else {
      uVar9 = uVar1 & 0xffffffffffffffe0;
      puVar10 = (undefined8 *)(lVar3 + 0x10);
      bVar12 = 0;
      bVar14 = 0;
      bVar17 = 0;
      bVar21 = 0;
      bVar16 = 0;
      bVar18 = 0;
      bVar20 = 0;
      bVar22 = 0;
      bVar24 = 0;
      bVar25 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      puVar11 = (undefined8 *)(lVar2 + 0x10);
      bVar13 = 0;
      bVar15 = 0;
      bVar19 = 0;
      bVar23 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      bVar41 = 0;
      bVar42 = 0;
      bVar43 = 0;
      bVar44 = 0;
      bVar45 = 0;
      uVar8 = uVar9;
      do {
        uVar46 = puVar10[-1];
        uVar32 = puVar10[-2];
        uVar48 = puVar10[1];
        uVar47 = *puVar10;
        puVar10 = puVar10 + 4;
        uVar8 = uVar8 - 0x20;
        uVar50 = puVar11[-1];
        uVar49 = puVar11[-2];
        uVar52 = puVar11[1];
        uVar51 = *puVar11;
        puVar11 = puVar11 + 4;
        bVar12 = (byte)uVar49 ^ (byte)uVar32 | bVar12;
        bVar14 = (byte)((ulong)uVar49 >> 8) ^ (byte)((ulong)uVar32 >> 8) | bVar14;
        bVar17 = (byte)((ulong)uVar49 >> 0x10) ^ (byte)((ulong)uVar32 >> 0x10) | bVar17;
        bVar21 = (byte)((ulong)uVar49 >> 0x18) ^ (byte)((ulong)uVar32 >> 0x18) | bVar21;
        bVar16 = (byte)((ulong)uVar49 >> 0x20) ^ (byte)((ulong)uVar32 >> 0x20) | bVar16;
        bVar18 = (byte)((ulong)uVar49 >> 0x28) ^ (byte)((ulong)uVar32 >> 0x28) | bVar18;
        bVar20 = (byte)((ulong)uVar49 >> 0x30) ^ (byte)((ulong)uVar32 >> 0x30) | bVar20;
        bVar22 = (byte)((ulong)uVar49 >> 0x38) ^ (byte)((ulong)uVar32 >> 0x38) | bVar22;
        bVar24 = (byte)uVar50 ^ (byte)uVar46 | bVar24;
        bVar25 = (byte)((ulong)uVar50 >> 8) ^ (byte)((ulong)uVar46 >> 8) | bVar25;
        bVar26 = (byte)((ulong)uVar50 >> 0x10) ^ (byte)((ulong)uVar46 >> 0x10) | bVar26;
        bVar27 = (byte)((ulong)uVar50 >> 0x18) ^ (byte)((ulong)uVar46 >> 0x18) | bVar27;
        bVar28 = (byte)((ulong)uVar50 >> 0x20) ^ (byte)((ulong)uVar46 >> 0x20) | bVar28;
        bVar29 = (byte)((ulong)uVar50 >> 0x28) ^ (byte)((ulong)uVar46 >> 0x28) | bVar29;
        bVar30 = (byte)((ulong)uVar50 >> 0x30) ^ (byte)((ulong)uVar46 >> 0x30) | bVar30;
        bVar31 = (byte)((ulong)uVar50 >> 0x38) ^ (byte)((ulong)uVar46 >> 0x38) | bVar31;
        bVar13 = (byte)uVar51 ^ (byte)uVar47 | bVar13;
        bVar15 = (byte)((ulong)uVar51 >> 8) ^ (byte)((ulong)uVar47 >> 8) | bVar15;
        bVar19 = (byte)((ulong)uVar51 >> 0x10) ^ (byte)((ulong)uVar47 >> 0x10) | bVar19;
        bVar23 = (byte)((ulong)uVar51 >> 0x18) ^ (byte)((ulong)uVar47 >> 0x18) | bVar23;
        bVar34 = (byte)((ulong)uVar51 >> 0x20) ^ (byte)((ulong)uVar47 >> 0x20) | bVar34;
        bVar35 = (byte)((ulong)uVar51 >> 0x28) ^ (byte)((ulong)uVar47 >> 0x28) | bVar35;
        bVar36 = (byte)((ulong)uVar51 >> 0x30) ^ (byte)((ulong)uVar47 >> 0x30) | bVar36;
        bVar37 = (byte)((ulong)uVar51 >> 0x38) ^ (byte)((ulong)uVar47 >> 0x38) | bVar37;
        bVar38 = (byte)uVar52 ^ (byte)uVar48 | bVar38;
        bVar39 = (byte)((ulong)uVar52 >> 8) ^ (byte)((ulong)uVar48 >> 8) | bVar39;
        bVar40 = (byte)((ulong)uVar52 >> 0x10) ^ (byte)((ulong)uVar48 >> 0x10) | bVar40;
        bVar41 = (byte)((ulong)uVar52 >> 0x18) ^ (byte)((ulong)uVar48 >> 0x18) | bVar41;
        bVar42 = (byte)((ulong)uVar52 >> 0x20) ^ (byte)((ulong)uVar48 >> 0x20) | bVar42;
        bVar43 = (byte)((ulong)uVar52 >> 0x28) ^ (byte)((ulong)uVar48 >> 0x28) | bVar43;
        bVar44 = (byte)((ulong)uVar52 >> 0x30) ^ (byte)((ulong)uVar48 >> 0x30) | bVar44;
        bVar45 = (byte)((ulong)uVar52 >> 0x38) ^ (byte)((ulong)uVar48 >> 0x38) | bVar45;
      } while (uVar8 != 0);
      bVar13 = bVar13 | bVar12;
      bVar15 = bVar15 | bVar14;
      bVar19 = bVar19 | bVar17;
      bVar23 = bVar23 | bVar21;
      bVar34 = bVar34 | bVar16;
      bVar35 = bVar35 | bVar18;
      bVar36 = bVar36 | bVar20;
      bVar37 = bVar37 | bVar22;
      auVar33[1] = bVar15;
      auVar33[0] = bVar13;
      auVar33[2] = bVar19;
      auVar33[3] = bVar23;
      auVar33[4] = bVar34;
      auVar33[5] = bVar35;
      auVar33[6] = bVar36;
      auVar33[7] = bVar37;
      auVar33[8] = bVar38 | bVar24;
      auVar33[9] = bVar39 | bVar25;
      auVar33[10] = bVar40 | bVar26;
      auVar33[0xb] = bVar41 | bVar27;
      auVar33[0xc] = bVar42 | bVar28;
      auVar33[0xd] = bVar43 | bVar29;
      auVar33[0xe] = bVar44 | bVar30;
      auVar33[0xf] = bVar45 | bVar31;
      auVar4[1] = bVar15;
      auVar4[0] = bVar13;
      auVar4[2] = bVar19;
      auVar4[3] = bVar23;
      auVar4[4] = bVar34;
      auVar4[5] = bVar35;
      auVar4[6] = bVar36;
      auVar4[7] = bVar37;
      auVar4[8] = bVar38 | bVar24;
      auVar4[9] = bVar39 | bVar25;
      auVar4[10] = bVar40 | bVar26;
      auVar4[0xb] = bVar41 | bVar27;
      auVar4[0xc] = bVar42 | bVar28;
      auVar4[0xd] = bVar43 | bVar29;
      auVar4[0xe] = bVar44 | bVar30;
      auVar4[0xf] = bVar45 | bVar31;
      auVar33 = NEON_ext(auVar33,auVar4,8,1);
      bVar12 = bVar13 | auVar33[0] | bVar15 | auVar33[1] | bVar19 | auVar33[2] | bVar23 | auVar33[3]
               | bVar34 | auVar33[4] | bVar35 | auVar33[5] | bVar36 | auVar33[6] |
               bVar37 | auVar33[7];
      if (uVar1 == uVar9) goto LAB_005a1c48;
      uVar8 = uVar9;
      if ((uVar1 & 0x18) == 0) goto LAB_005a1c24;
    }
    bVar13 = 0;
    bVar14 = 0;
    bVar15 = 0;
    bVar17 = 0;
    bVar19 = 0;
    bVar21 = 0;
    bVar23 = 0;
    uVar9 = uVar1 & 0xfffffffffffffff8;
    lVar7 = uVar8 - uVar9;
    puVar10 = (undefined8 *)(lVar3 + uVar8);
    puVar11 = (undefined8 *)(lVar2 + uVar8);
    do {
      uVar32 = *puVar10;
      uVar46 = *puVar11;
      lVar7 = lVar7 + 8;
      bVar12 = (byte)uVar46 ^ (byte)uVar32 | bVar12;
      bVar13 = (byte)((ulong)uVar46 >> 8) ^ (byte)((ulong)uVar32 >> 8) | bVar13;
      bVar14 = (byte)((ulong)uVar46 >> 0x10) ^ (byte)((ulong)uVar32 >> 0x10) | bVar14;
      bVar15 = (byte)((ulong)uVar46 >> 0x18) ^ (byte)((ulong)uVar32 >> 0x18) | bVar15;
      bVar17 = (byte)((ulong)uVar46 >> 0x20) ^ (byte)((ulong)uVar32 >> 0x20) | bVar17;
      bVar19 = (byte)((ulong)uVar46 >> 0x28) ^ (byte)((ulong)uVar32 >> 0x28) | bVar19;
      bVar21 = (byte)((ulong)uVar46 >> 0x30) ^ (byte)((ulong)uVar32 >> 0x30) | bVar21;
      bVar23 = (byte)((ulong)uVar46 >> 0x38) ^ (byte)((ulong)uVar32 >> 0x38) | bVar23;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    } while (lVar7 != 0);
    bVar12 = bVar12 | bVar13 | bVar14 | bVar15 | bVar17 | bVar19 | bVar21 | bVar23;
    if (uVar1 == uVar9) goto LAB_005a1c48;
  }
LAB_005a1c24:
  lVar7 = uVar1 - uVar9;
  pbVar5 = (byte *)(lVar2 + uVar9);
  pbVar6 = (byte *)(lVar3 + uVar9);
  do {
    lVar7 = lVar7 + -1;
    bVar12 = *pbVar5 ^ *pbVar6 | bVar12;
    pbVar5 = pbVar5 + 1;
    pbVar6 = pbVar6 + 1;
  } while (lVar7 != 0);
LAB_005a1c48:
  return bVar12 != 0;
}


// ===== 005a1c5c  FUN_005a1c5c =====

bool FUN_005a1c5c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  byte bVar12;
  byte bVar13;
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
  byte bVar30;
  byte bVar31;
  undefined8 uVar32;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 auVar33 [16];
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  
  lVar2 = *param_2;
  lVar3 = *param_1;
  uVar8 = param_2[1] - lVar2;
  if (param_1[1] - lVar3 != uVar8) {
    return true;
  }
  if (param_2[1] == lVar2) {
    return false;
  }
  uVar1 = uVar8;
  if (uVar8 < 2) {
    uVar1 = 1;
  }
  if (uVar8 <= uVar1 - 1) {
                    /* WARNING: Subroutine does not return */
    FUN_0056a714();
  }
  if (uVar1 < 8) {
    uVar9 = 0;
    bVar12 = 0;
  }
  else {
    if (uVar1 < 0x20) {
      bVar12 = 0;
      uVar8 = 0;
    }
    else {
      uVar9 = uVar1 & 0xffffffffffffffe0;
      puVar10 = (undefined8 *)(lVar3 + 0x10);
      bVar12 = 0;
      bVar14 = 0;
      bVar17 = 0;
      bVar21 = 0;
      bVar16 = 0;
      bVar18 = 0;
      bVar20 = 0;
      bVar22 = 0;
      bVar24 = 0;
      bVar25 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      puVar11 = (undefined8 *)(lVar2 + 0x10);
      bVar13 = 0;
      bVar15 = 0;
      bVar19 = 0;
      bVar23 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      bVar41 = 0;
      bVar42 = 0;
      bVar43 = 0;
      bVar44 = 0;
      bVar45 = 0;
      uVar8 = uVar9;
      do {
        uVar46 = puVar10[-1];
        uVar32 = puVar10[-2];
        uVar48 = puVar10[1];
        uVar47 = *puVar10;
        puVar10 = puVar10 + 4;
        uVar8 = uVar8 - 0x20;
        uVar50 = puVar11[-1];
        uVar49 = puVar11[-2];
        uVar52 = puVar11[1];
        uVar51 = *puVar11;
        puVar11 = puVar11 + 4;
        bVar12 = (byte)uVar49 ^ (byte)uVar32 | bVar12;
        bVar14 = (byte)((ulong)uVar49 >> 8) ^ (byte)((ulong)uVar32 >> 8) | bVar14;
        bVar17 = (byte)((ulong)uVar49 >> 0x10) ^ (byte)((ulong)uVar32 >> 0x10) | bVar17;
        bVar21 = (byte)((ulong)uVar49 >> 0x18) ^ (byte)((ulong)uVar32 >> 0x18) | bVar21;
        bVar16 = (byte)((ulong)uVar49 >> 0x20) ^ (byte)((ulong)uVar32 >> 0x20) | bVar16;
        bVar18 = (byte)((ulong)uVar49 >> 0x28) ^ (byte)((ulong)uVar32 >> 0x28) | bVar18;
        bVar20 = (byte)((ulong)uVar49 >> 0x30) ^ (byte)((ulong)uVar32 >> 0x30) | bVar20;
        bVar22 = (byte)((ulong)uVar49 >> 0x38) ^ (byte)((ulong)uVar32 >> 0x38) | bVar22;
        bVar24 = (byte)uVar50 ^ (byte)uVar46 | bVar24;
        bVar25 = (byte)((ulong)uVar50 >> 8) ^ (byte)((ulong)uVar46 >> 8) | bVar25;
        bVar26 = (byte)((ulong)uVar50 >> 0x10) ^ (byte)((ulong)uVar46 >> 0x10) | bVar26;
        bVar27 = (byte)((ulong)uVar50 >> 0x18) ^ (byte)((ulong)uVar46 >> 0x18) | bVar27;
        bVar28 = (byte)((ulong)uVar50 >> 0x20) ^ (byte)((ulong)uVar46 >> 0x20) | bVar28;
        bVar29 = (byte)((ulong)uVar50 >> 0x28) ^ (byte)((ulong)uVar46 >> 0x28) | bVar29;
        bVar30 = (byte)((ulong)uVar50 >> 0x30) ^ (byte)((ulong)uVar46 >> 0x30) | bVar30;
        bVar31 = (byte)((ulong)uVar50 >> 0x38) ^ (byte)((ulong)uVar46 >> 0x38) | bVar31;
        bVar13 = (byte)uVar51 ^ (byte)uVar47 | bVar13;
        bVar15 = (byte)((ulong)uVar51 >> 8) ^ (byte)((ulong)uVar47 >> 8) | bVar15;
        bVar19 = (byte)((ulong)uVar51 >> 0x10) ^ (byte)((ulong)uVar47 >> 0x10) | bVar19;
        bVar23 = (byte)((ulong)uVar51 >> 0x18) ^ (byte)((ulong)uVar47 >> 0x18) | bVar23;
        bVar34 = (byte)((ulong)uVar51 >> 0x20) ^ (byte)((ulong)uVar47 >> 0x20) | bVar34;
        bVar35 = (byte)((ulong)uVar51 >> 0x28) ^ (byte)((ulong)uVar47 >> 0x28) | bVar35;
        bVar36 = (byte)((ulong)uVar51 >> 0x30) ^ (byte)((ulong)uVar47 >> 0x30) | bVar36;
        bVar37 = (byte)((ulong)uVar51 >> 0x38) ^ (byte)((ulong)uVar47 >> 0x38) | bVar37;
        bVar38 = (byte)uVar52 ^ (byte)uVar48 | bVar38;
        bVar39 = (byte)((ulong)uVar52 >> 8) ^ (byte)((ulong)uVar48 >> 8) | bVar39;
        bVar40 = (byte)((ulong)uVar52 >> 0x10) ^ (byte)((ulong)uVar48 >> 0x10) | bVar40;
        bVar41 = (byte)((ulong)uVar52 >> 0x18) ^ (byte)((ulong)uVar48 >> 0x18) | bVar41;
        bVar42 = (byte)((ulong)uVar52 >> 0x20) ^ (byte)((ulong)uVar48 >> 0x20) | bVar42;
        bVar43 = (byte)((ulong)uVar52 >> 0x28) ^ (byte)((ulong)uVar48 >> 0x28) | bVar43;
        bVar44 = (byte)((ulong)uVar52 >> 0x30) ^ (byte)((ulong)uVar48 >> 0x30) | bVar44;
        bVar45 = (byte)((ulong)uVar52 >> 0x38) ^ (byte)((ulong)uVar48 >> 0x38) | bVar45;
      } while (uVar8 != 0);
      bVar13 = bVar13 | bVar12;
      bVar15 = bVar15 | bVar14;
      bVar19 = bVar19 | bVar17;
      bVar23 = bVar23 | bVar21;
      bVar34 = bVar34 | bVar16;
      bVar35 = bVar35 | bVar18;
      bVar36 = bVar36 | bVar20;
      bVar37 = bVar37 | bVar22;
      auVar33[1] = bVar15;
      auVar33[0] = bVar13;
      auVar33[2] = bVar19;
      auVar33[3] = bVar23;
      auVar33[4] = bVar34;
      auVar33[5] = bVar35;
      auVar33[6] = bVar36;
      auVar33[7] = bVar37;
      auVar33[8] = bVar38 | bVar24;
      auVar33[9] = bVar39 | bVar25;
      auVar33[10] = bVar40 | bVar26;
      auVar33[0xb] = bVar41 | bVar27;
      auVar33[0xc] = bVar42 | bVar28;
      auVar33[0xd] = bVar43 | bVar29;
      auVar33[0xe] = bVar44 | bVar30;
      auVar33[0xf] = bVar45 | bVar31;
      auVar4[1] = bVar15;
      auVar4[0] = bVar13;
      auVar4[2] = bVar19;
      auVar4[3] = bVar23;
      auVar4[4] = bVar34;
      auVar4[5] = bVar35;
      auVar4[6] = bVar36;
      auVar4[7] = bVar37;
      auVar4[8] = bVar38 | bVar24;
      auVar4[9] = bVar39 | bVar25;
      auVar4[10] = bVar40 | bVar26;
      auVar4[0xb] = bVar41 | bVar27;
      auVar4[0xc] = bVar42 | bVar28;
      auVar4[0xd] = bVar43 | bVar29;
      auVar4[0xe] = bVar44 | bVar30;
      auVar4[0xf] = bVar45 | bVar31;
      auVar33 = NEON_ext(auVar33,auVar4,8,1);
      bVar12 = bVar13 | auVar33[0] | bVar15 | auVar33[1] | bVar19 | auVar33[2] | bVar23 | auVar33[3]
               | bVar34 | auVar33[4] | bVar35 | auVar33[5] | bVar36 | auVar33[6] |
               bVar37 | auVar33[7];
      if (uVar1 == uVar9) goto LAB_005a1e0c;
      uVar8 = uVar9;
      if ((uVar1 & 0x18) == 0) goto LAB_005a1de8;
    }
    bVar13 = 0;
    bVar14 = 0;
    bVar15 = 0;
    bVar17 = 0;
    bVar19 = 0;
    bVar21 = 0;
    bVar23 = 0;
    uVar9 = uVar1 & 0xfffffffffffffff8;
    lVar7 = uVar8 - uVar9;
    puVar10 = (undefined8 *)(lVar3 + uVar8);
    puVar11 = (undefined8 *)(lVar2 + uVar8);
    do {
      uVar32 = *puVar10;
      uVar46 = *puVar11;
      lVar7 = lVar7 + 8;
      bVar12 = (byte)uVar46 ^ (byte)uVar32 | bVar12;
      bVar13 = (byte)((ulong)uVar46 >> 8) ^ (byte)((ulong)uVar32 >> 8) | bVar13;
      bVar14 = (byte)((ulong)uVar46 >> 0x10) ^ (byte)((ulong)uVar32 >> 0x10) | bVar14;
      bVar15 = (byte)((ulong)uVar46 >> 0x18) ^ (byte)((ulong)uVar32 >> 0x18) | bVar15;
      bVar17 = (byte)((ulong)uVar46 >> 0x20) ^ (byte)((ulong)uVar32 >> 0x20) | bVar17;
      bVar19 = (byte)((ulong)uVar46 >> 0x28) ^ (byte)((ulong)uVar32 >> 0x28) | bVar19;
      bVar21 = (byte)((ulong)uVar46 >> 0x30) ^ (byte)((ulong)uVar32 >> 0x30) | bVar21;
      bVar23 = (byte)((ulong)uVar46 >> 0x38) ^ (byte)((ulong)uVar32 >> 0x38) | bVar23;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    } while (lVar7 != 0);
    bVar12 = bVar12 | bVar13 | bVar14 | bVar15 | bVar17 | bVar19 | bVar21 | bVar23;
    if (uVar1 == uVar9) goto LAB_005a1e0c;
  }
LAB_005a1de8:
  lVar7 = uVar1 - uVar9;
  pbVar5 = (byte *)(lVar2 + uVar9);
  pbVar6 = (byte *)(lVar3 + uVar9);
  do {
    lVar7 = lVar7 + -1;
    bVar12 = *pbVar5 ^ *pbVar6 | bVar12;
    pbVar5 = pbVar5 + 1;
    pbVar6 = pbVar6 + 1;
  } while (lVar7 != 0);
LAB_005a1e0c:
  return bVar12 != 0;
}


// ===== 005a1e20  FUN_005a1e20 =====

long FUN_005a1e20(long param_1,undefined8 *param_2)

{
  FUN_005a1e50(param_1,*(undefined8 *)(param_1 + 8),*param_2,param_2[1]);
  return param_1;
}


// ===== 005a1e50  FUN_005a1e50 =====

undefined1 * FUN_005a1e50(long *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  void *__src;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar16 = (long)param_4 - (long)param_3;
  puVar15 = param_2;
  if (0 < lVar16) {
    puVar1 = (undefined1 *)param_1[1];
    if (param_1[2] - (long)puVar1 < lVar16) {
      __src = (void *)*param_1;
      puVar15 = puVar1 + (lVar16 - (long)__src);
      if ((long)puVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(param_1);
      }
      uVar4 = param_1[2] - (long)__src;
      puVar9 = (undefined1 *)(uVar4 * 2);
      if (puVar9 < puVar15 || (long)puVar9 - (long)puVar15 == 0) {
        puVar9 = puVar15;
      }
      if (0x3ffffffffffffffe < uVar4) {
        puVar9 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar9 == (undefined1 *)0x0) {
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = operator_new((ulong)puVar9);
      }
      puVar15 = (undefined1 *)((long)pvVar3 + ((long)param_2 - (long)__src));
      puVar5 = puVar15;
      if (param_4 != param_3) {
        puVar7 = (undefined1 *)((long)__src - ((long)pvVar3 + (long)param_2));
        puVar5 = puVar15 + lVar16;
        if (param_4 + ~(ulong)param_3 <= puVar7) {
          puVar7 = param_4 + ~(ulong)param_3;
        }
        puVar7 = puVar7 + 1;
        puVar11 = puVar15;
        if (((undefined1 *)0x20 < puVar7) &&
           ((undefined1 *)0x1f <
            (undefined1 *)((long)pvVar3 + (long)param_2) + (-(long)__src - (long)param_3))) {
          uVar4 = 0x20;
          if (((ulong)puVar7 & 0x1f) != 0) {
            uVar4 = (ulong)puVar7 & 0x1f;
          }
          lVar16 = (long)puVar7 - uVar4;
          puVar13 = (undefined8 *)(param_3 + 0x10);
          puVar11 = puVar15 + lVar16;
          param_3 = param_3 + lVar16;
          puVar14 = (undefined8 *)((long)pvVar3 + ((long)param_2 - (long)__src) + 0x10);
          do {
            puVar2 = puVar13 + -1;
            uVar17 = puVar13[-2];
            uVar19 = puVar13[1];
            uVar18 = *puVar13;
            lVar16 = lVar16 + -0x20;
            puVar13 = puVar13 + 4;
            puVar14[-1] = *puVar2;
            puVar14[-2] = uVar17;
            puVar14[1] = uVar19;
            *puVar14 = uVar18;
            puVar14 = puVar14 + 4;
          } while (lVar16 != 0);
        }
        do {
          if (puVar11 == (undefined1 *)0x0) {
                    /* try { // try from 005a21c8 to 005a21ef has its CatchHandler @ 005a226c */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                       ,0x23,"__location != nullptr","null pointer given to construct_at");
          }
          puVar7 = puVar11 + 1;
          *puVar11 = *param_3;
          puVar11 = puVar7;
          param_3 = param_3 + 1;
        } while (puVar7 != puVar5);
        __src = (void *)*param_1;
      }
      memmove(puVar15 + ((long)__src - (long)param_2),__src,(long)param_2 - (long)__src);
      memmove(puVar5,param_2,(long)puVar1 - (long)param_2);
      param_1[2] = (long)((long)pvVar3 + (long)puVar9);
      *param_1 = (long)(puVar15 + ((long)__src - (long)param_2));
      param_1[1] = (long)(puVar5 + ((long)puVar1 - (long)param_2));
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
    else {
      lVar6 = (long)puVar1 - (long)param_2;
      puVar5 = puVar1;
      puVar9 = param_4;
      if (lVar6 < lVar16) {
        puVar9 = param_3 + lVar6;
        if (puVar9 != param_4) {
          puVar5 = param_2 + (long)param_4 + (~(ulong)param_3 - (long)puVar1);
          if ((undefined1 *)-(long)puVar1 <= puVar5) {
            puVar5 = (undefined1 *)-(long)puVar1;
          }
          puVar5 = puVar5 + 1;
          puVar11 = puVar1;
          puVar7 = puVar9;
          if (((undefined1 *)0x20 < puVar5) && (0x1f < (ulong)((long)param_2 - (long)param_3))) {
            uVar4 = 0x20;
            if (((ulong)puVar5 & 0x1f) != 0) {
              uVar4 = (ulong)puVar5 & 0x1f;
            }
            puVar13 = (undefined8 *)(puVar1 + 0x10);
            lVar12 = (long)puVar5 - uVar4;
            puVar7 = puVar9 + lVar12;
            puVar11 = puVar1 + lVar12;
            puVar14 = (undefined8 *)(param_3 + ((long)puVar13 - (long)param_2));
            do {
              puVar2 = puVar14 + -1;
              uVar17 = puVar14[-2];
              uVar19 = puVar14[1];
              uVar18 = *puVar14;
              lVar12 = lVar12 + -0x20;
              puVar14 = puVar14 + 4;
              puVar13[-1] = *puVar2;
              puVar13[-2] = uVar17;
              puVar13[1] = uVar19;
              *puVar13 = uVar18;
              puVar13 = puVar13 + 4;
            } while (lVar12 != 0);
          }
          do {
            if (puVar11 == (undefined1 *)0x0) {
                    /* try { // try from 005a2218 to 005a223f has its CatchHandler @ 005a2248 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                         ,0x23,"__location != nullptr","null pointer given to construct_at");
            }
            puVar10 = puVar7 + 1;
            puVar5 = puVar11 + 1;
            *puVar11 = *puVar7;
            puVar11 = puVar5;
            puVar7 = puVar10;
          } while (puVar10 != param_4);
        }
        param_1[1] = (long)puVar5;
        if (lVar6 < 1) {
          return param_2;
        }
      }
      puVar7 = puVar5 + -lVar16;
      puVar11 = puVar5;
      if (puVar7 < puVar1) {
        puVar11 = puVar1 + (long)param_4 + (~(ulong)puVar5 - (long)param_3);
        if ((undefined1 *)-(long)puVar5 < puVar11) {
          puVar11 = (undefined1 *)-(long)puVar5;
        }
        puVar11 = puVar11 + 1;
        puVar10 = puVar5;
        if (((undefined1 *)0x20 < puVar11) && (0x1f < (ulong)((long)param_4 - (long)param_3))) {
          uVar4 = 0x20;
          if (((ulong)puVar11 & 0x1f) != 0) {
            uVar4 = (ulong)puVar11 & 0x1f;
          }
          lVar6 = (long)puVar11 - uVar4;
          puVar7 = puVar7 + lVar6;
          puVar10 = puVar5 + lVar6;
          puVar13 = (undefined8 *)(puVar5 + 0x10);
          puVar14 = (undefined8 *)(puVar5 + (long)param_3 + (0x10 - (long)param_4));
          do {
            puVar2 = puVar14 + -1;
            uVar17 = puVar14[-2];
            uVar19 = puVar14[1];
            uVar18 = *puVar14;
            lVar6 = lVar6 + -0x20;
            puVar14 = puVar14 + 4;
            puVar13[-1] = *puVar2;
            puVar13[-2] = uVar17;
            puVar13[1] = uVar19;
            *puVar13 = uVar18;
            puVar13 = puVar13 + 4;
          } while (lVar6 != 0);
        }
        do {
          if (puVar10 == (undefined1 *)0x0) {
                    /* try { // try from 005a21f0 to 005a2217 has its CatchHandler @ 005a2264 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                       ,0x23,"__location != nullptr","null pointer given to construct_at");
          }
          puVar8 = puVar7 + 1;
          puVar11 = puVar10 + 1;
          *puVar10 = *puVar7;
          puVar7 = puVar8;
          puVar10 = puVar11;
        } while (puVar8 < puVar1);
      }
      param_1[1] = (long)puVar11;
      if (puVar5 != param_2 + lVar16) {
        __n = (long)puVar5 - (long)(param_2 + lVar16);
        memmove(puVar5 + -__n,param_2,__n);
      }
      if ((long)puVar9 - (long)param_3 != 0) {
        memmove(param_2,param_3,(long)puVar9 - (long)param_3);
      }
    }
  }
  return puVar15;
}


// ===== 005a228c  FUN_005a228c =====

void FUN_005a228c(undefined8 *param_1,long *param_2,undefined8 *param_3)

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
  
  puVar10 = (undefined1 *)*param_2;
  puVar1 = (undefined1 *)param_2[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = (long)puVar1 - (long)puVar10;
  if (uVar2 == 0) {
    puVar5 = (undefined1 *)0x0;
    goto LAB_005a2348;
  }
  if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004f04ec(param_1);
  }
  puVar4 = (undefined1 *)operator_new(uVar2);
  *param_1 = puVar4;
  param_1[1] = puVar4;
  param_1[2] = puVar4 + uVar2;
  puVar11 = puVar10;
  if ((uVar2 < 0x20) || ((ulong)((long)puVar4 - (long)puVar10) < 0x20)) {
LAB_005a232c:
    do {
      puVar10 = puVar11 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = *puVar11;
      puVar4 = puVar5;
      puVar11 = puVar10;
    } while (puVar10 != puVar1);
  }
  else {
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
    if (uVar2 != uVar6) goto LAB_005a232c;
  }
  param_1[1] = puVar5;
LAB_005a2348:
                    /* try { // try from 005a234c to 005a2353 has its CatchHandler @ 005a2370 */
  FUN_005a1e50(param_1,puVar5,*param_3,param_3[1]);
  return;
}


// ===== 005a2384  FUN_005a2384 =====

undefined8 FUN_005a2384(undefined8 *param_1,long *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if ((byte *)*param_2 == (byte *)param_2[1]) {
    return 0;
  }
  pbVar2 = (byte *)*param_1;
  pbVar1 = (byte *)*param_2;
  while( true ) {
    pbVar3 = pbVar1 + 1;
    if (pbVar2 == (byte *)param_1[1]) {
      return 1;
    }
    if (*pbVar2 < *pbVar1) break;
    if ((*pbVar1 < *pbVar2) || (pbVar2 = pbVar2 + 1, pbVar1 = pbVar3, pbVar3 == (byte *)param_2[1]))
    {
      return 0;
    }
  }
  return 1;
}


// ===== 005a23e4  FUN_005a23e4 =====

void FUN_005a23e4(long *param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 *puVar8;
  
  puVar1 = (undefined1 *)*param_2;
  puVar3 = (undefined1 *)param_2[1];
  uVar15 = (long)puVar3 - (long)puVar1;
  if (uVar15 != param_3[1] - *param_3) {
    uVar6 = FUN_0054f64c(0x10);
                    /* try { // try from 005a2534 to 005a253f has its CatchHandler @ 005a2560 */
    FUN_00579118(uVar6,"XOR with unequal size");
                    /* WARNING: Subroutine does not return */
    FUN_0054f748(uVar6,&PTR_PTR_thunk_FUN_00552768_00d23bb8,PTR_FUN_00d51d38);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (puVar3 == puVar1) {
    return;
  }
  if ((long)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004f04ec(param_1);
  }
  puVar5 = (undefined1 *)operator_new(uVar15);
  *param_1 = (long)puVar5;
  param_1[1] = (long)puVar5;
  param_1[2] = (long)(puVar5 + uVar15);
  puVar8 = puVar1;
  if ((0x1f < uVar15) && (0x1f < (ulong)((long)puVar5 - (long)puVar1))) {
    uVar10 = uVar15 & 0xffffffffffffffe0;
    puVar11 = (undefined8 *)(puVar5 + 0x10);
    puVar9 = puVar5 + uVar10;
    puVar12 = (undefined8 *)(puVar1 + 0x10);
    uVar13 = uVar10;
    do {
      puVar4 = puVar12 + -1;
      uVar6 = puVar12[-2];
      uVar17 = puVar12[1];
      uVar16 = *puVar12;
      puVar12 = puVar12 + 4;
      uVar13 = uVar13 - 0x20;
      puVar11[-1] = *puVar4;
      puVar11[-2] = uVar6;
      puVar11[1] = uVar17;
      *puVar11 = uVar16;
      puVar11 = puVar11 + 4;
    } while (uVar13 != 0);
    puVar8 = puVar1 + uVar10;
    puVar5 = puVar9;
    if (uVar15 == uVar10) goto LAB_005a24b4;
  }
  do {
    puVar7 = puVar8 + 1;
    puVar9 = puVar5 + 1;
    *puVar5 = *puVar8;
    puVar8 = puVar7;
    puVar5 = puVar9;
  } while (puVar7 != puVar3);
LAB_005a24b4:
  param_1[1] = (long)puVar9;
  if (puVar3 != puVar1) {
    uVar15 = 0;
    do {
      plVar14 = param_3;
      if (((ulong)(param_3[1] - *param_3) <= uVar15) ||
         (lVar2 = *param_1, plVar14 = param_1, (ulong)(param_1[1] - lVar2) <= uVar15)) {
                    /* try { // try from 005a2520 to 005a2527 has its CatchHandler @ 005a2574 */
                    /* WARNING: Subroutine does not return */
        FUN_0056a714(plVar14);
      }
      *(byte *)(lVar2 + uVar15) = *(byte *)(lVar2 + uVar15) ^ *(byte *)(*param_3 + uVar15);
      uVar15 = uVar15 + 1;
    } while (uVar15 < (ulong)(param_2[1] - *param_2));
  }
  return;
}


// ===== 005a2588  FUN_005a2588 =====

void FUN_005a2588(undefined8 *param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 *puVar5;
  
  puVar5 = (undefined1 *)*param_2;
  puVar1 = (undefined1 *)param_2[1];
  uVar9 = (long)puVar1 - (long)puVar5;
  if (0x7fffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_004e823c(param_1);
  }
  if (uVar9 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar9;
  }
  else {
    uVar8 = (uVar9 | 0xf) + 1;
    puVar3 = (undefined8 *)operator_new(uVar8);
    *param_1 = puVar3;
    param_1[1] = uVar9;
    param_1[2] = uVar8 | 0x8000000000000000;
    param_1 = puVar3;
  }
  puVar3 = param_1;
  if (puVar5 != puVar1) {
    if ((0x1f < uVar9) && (0x1f < (ulong)((long)param_1 - (long)puVar5))) {
      uVar6 = uVar9 & 0xffffffffffffffe0;
      puVar7 = (undefined8 *)(puVar5 + 0x10);
      puVar3 = (undefined8 *)((long)param_1 + uVar6);
      param_1 = param_1 + 2;
      uVar8 = uVar6;
      do {
        puVar2 = puVar7 + -1;
        uVar10 = puVar7[-2];
        uVar12 = puVar7[1];
        uVar11 = *puVar7;
        puVar7 = puVar7 + 4;
        uVar8 = uVar8 - 0x20;
        param_1[-1] = *puVar2;
        param_1[-2] = uVar10;
        param_1[1] = uVar12;
        *param_1 = uVar11;
        param_1 = param_1 + 4;
      } while (uVar8 != 0);
      param_1 = puVar3;
      puVar5 = puVar5 + uVar6;
      if (uVar9 == uVar6) goto LAB_005a2660;
    }
    do {
      puVar4 = puVar5 + 1;
      *(undefined1 *)param_1 = *puVar5;
      puVar3 = (undefined8 *)((long)param_1 + 1);
      param_1 = (undefined8 *)((long)param_1 + 1);
      puVar5 = puVar4;
    } while (puVar4 != puVar1);
  }
LAB_005a2660:
  *(undefined1 *)puVar3 = 0;
  return;
}


// ===== 005a2680  FUN_005a2680 =====

void FUN_005a2680(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plVar1 = (long *)*param_2;
  uVar4 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
    uVar4 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  if (uVar4 == 0) {
    if (*(long *)(lVar2 + 0x28) == local_48) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    goto LAB_005a2894;
  }
  if ((long)uVar4 < 0) {
    if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_004f04ec(&local_60);
    }
    goto LAB_005a2894;
  }
  puVar5 = (undefined1 *)operator_new(uVar4);
  puVar7 = puVar5;
  plVar9 = plVar1;
  if ((uVar4 < 0x20) || ((ulong)((long)puVar5 - (long)plVar1) < 0x20)) {
LAB_005a2774:
    puVar10 = puVar7;
    do {
      puVar6 = (undefined1 *)((long)plVar9 + 1);
      puVar7 = puVar10 + 1;
      *puVar10 = *(undefined1 *)plVar9;
      puVar10 = puVar7;
      plVar9 = (long *)puVar6;
    } while (puVar6 != (undefined1 *)((long)plVar1 + uVar4));
  }
  else {
    uVar11 = uVar4 & 0xffffffffffffffe0;
    puVar12 = (undefined8 *)(puVar5 + 0x10);
    puVar7 = puVar5 + uVar11;
    puVar13 = plVar1 + 2;
    uVar14 = uVar11;
    do {
      puVar3 = puVar13 + -1;
      uVar15 = puVar13[-2];
      uVar17 = puVar13[1];
      uVar16 = *puVar13;
      puVar13 = puVar13 + 4;
      uVar14 = uVar14 - 0x20;
      puVar12[-1] = *puVar3;
      puVar12[-2] = uVar15;
      puVar12[1] = uVar17;
      *puVar12 = uVar16;
      puVar12 = puVar12 + 4;
    } while (uVar14 != 0);
    plVar9 = (long *)((long)plVar1 + uVar11);
    if (uVar4 != uVar11) goto LAB_005a2774;
  }
  uVar14 = (long)puVar7 - (long)puVar5;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (uVar14 != 0) {
    if ((long)uVar14 < 0) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 005a2868 to 005a286f has its CatchHandler @ 005a2870 */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(param_1);
      }
      goto LAB_005a2894;
    }
                    /* try { // try from 005a27a0 to 005a27a7 has its CatchHandler @ 005a2870 */
    puVar6 = (undefined1 *)operator_new(uVar14);
    *param_1 = puVar6;
    param_1[1] = puVar6;
    param_1[2] = puVar6 + uVar14;
    puVar10 = puVar5;
    if (uVar4 < 0x20) {
LAB_005a27fc:
      puVar10 = puVar10 + -1;
      puVar8 = puVar6;
      do {
        puVar10 = puVar10 + 1;
        puVar6 = puVar8 + 1;
        *puVar8 = *puVar10;
        puVar8 = puVar6;
      } while (puVar10 != puVar7 + -1);
    }
    else {
      uVar11 = uVar4 & 0xffffffffffffffe0;
      puVar12 = (undefined8 *)(puVar6 + 0x10);
      puVar10 = puVar5 + uVar11;
      puVar6 = puVar6 + uVar11;
      puVar13 = (undefined8 *)(puVar5 + 0x10);
      uVar14 = uVar11;
      do {
        puVar3 = puVar13 + -1;
        uVar15 = puVar13[-2];
        uVar17 = puVar13[1];
        uVar16 = *puVar13;
        puVar13 = puVar13 + 4;
        uVar14 = uVar14 - 0x20;
        puVar12[-1] = *puVar3;
        puVar12[-2] = uVar15;
        puVar12[1] = uVar17;
        *puVar12 = uVar16;
        puVar12 = puVar12 + 4;
      } while (uVar14 != 0);
      if (uVar4 != uVar11) goto LAB_005a27fc;
    }
    param_1[1] = puVar6;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    operator_delete(puVar5);
    return;
  }
LAB_005a2894:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a2898  FUN_005a2898 =====

void FUN_005a2898(undefined8 param_1,long *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auStack_190 [8];
  long local_188;
  undefined4 auStack_180 [2];
  long local_178;
  undefined *apuStack_170 [2];
  undefined8 auStack_160 [6];
  void *local_130;
  char local_119;
  undefined1 auStack_108 [32];
  int aiStack_e8 [30];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  FUN_005a2a58(&local_188,0x10);
  puVar3 = PTR_DAT_00d51b28;
  puVar6 = (undefined1 *)*param_2;
  puVar1 = (undefined1 *)param_2[1];
  *(undefined4 *)((long)auStack_180 + *(long *)(local_188 + -0x18)) = 8;
  if (puVar6 != puVar1) {
    do {
      *(undefined8 *)((long)auStack_160 + *(long *)(local_178 + -0x18)) = 2;
      lVar5 = *(long *)(local_178 + -0x18);
      if (*(int *)((long)aiStack_e8 + lVar5) == -1) {
                    /* try { // try from 005a2934 to 005a293f has its CatchHandler @ 005a2a30 */
        FUN_00520ce8(auStack_190,(long)&local_178 + lVar5);
                    /* try { // try from 005a2940 to 005a295b has its CatchHandler @ 005a2a20 */
        plVar4 = (long *)FUN_0053cfd4(auStack_190,puVar3);
        (**(code **)(*plVar4 + 0x38))(plVar4,0x20);
        FUN_0053ceec(auStack_190);
      }
      *(undefined4 *)((long)aiStack_e8 + lVar5) = 0x30;
                    /* try { // try from 005a296c to 005a2973 has its CatchHandler @ 005a2a30 */
      FUN_0054bae0(&local_178,*puVar6);
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar1);
  }
                    /* try { // try from 005a2984 to 005a298f has its CatchHandler @ 005a2a1c */
  FUN_0054d504(param_1,apuStack_170);
  puVar3 = PTR_PTR_00d51b18;
  local_188 = *(long *)PTR_PTR_00d51b18;
  lVar5 = *(long *)(PTR_PTR_00d51b18 + 0x48);
  *(undefined8 *)((long)auStack_180 + *(long *)(local_188 + -0x18) + -8) =
       *(undefined8 *)(PTR_PTR_00d51b18 + 0x40);
  apuStack_170[0] = PTR_DAT_00d51b20 + 0x10;
  local_178 = lVar5;
  if (local_119 < '\0') {
    operator_delete(local_130);
  }
  FUN_0054a488(apuStack_170);
  FUN_0054ce58(&local_188,puVar3 + 8);
  thunk_FUN_00520cf4(auStack_108);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a2a58  FUN_005a2a58 =====

void FUN_005a2a58(long *param_1,undefined4 param_2)

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
                    /* try { // try from 005a2acc to 005a2ad7 has its CatchHandler @ 005a2b74 */
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
                    /* try { // try from 005a2b1c to 005a2b23 has its CatchHandler @ 005a2b60 */
  FUN_0054a4c8(param_1 + 3);
  puVar1 = PTR_DAT_00d51b20;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[3] = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = param_2;
  return;
}


// ===== 005a2b88  FUN_005a2b88 =====

undefined8 FUN_005a2b88(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 ****ppppuVar3;
  ulong uVar4;
  undefined8 ***local_68;
  undefined8 ***local_60;
  undefined8 ***local_50;
  ulong uStack_48;
  byte local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((ulong)(param_2[1] - *param_2) < 0xffff) {
    FUN_005a2898(&local_50,param_2);
    ppppuVar3 = (undefined8 ****)local_50;
    if (-1 < (char)local_39) {
      uStack_48 = (ulong)local_39;
      ppppuVar3 = &local_50;
    }
                    /* try { // try from 005a2be8 to 005a2bef has its CatchHandler @ 005a2cd0 */
    uVar2 = FUN_00428964(param_1,ppppuVar3,uStack_48);
    local_68 = local_50;
    if (-1 < (char)local_39) goto LAB_005a2ca0;
  }
  else {
    FUN_00569e50(&local_68,param_2,0,0xffff);
                    /* try { // try from 005a2c18 to 005a2c27 has its CatchHandler @ 005a2cc8 */
    FUN_005a2898(&local_50,&local_68);
    ppppuVar3 = (undefined8 ****)local_50;
    if (-1 < (char)local_39) {
      uStack_48 = (ulong)local_39;
      ppppuVar3 = &local_50;
    }
                    /* try { // try from 005a2c40 to 005a2c57 has its CatchHandler @ 005a2ce8 */
    uVar2 = FUN_00428964(param_1,ppppuVar3,uStack_48);
    uVar2 = FUN_00428964(uVar2,&DAT_001d07cc,3);
    if ((char)local_39 < '\0') {
      operator_delete(local_50);
    }
    if (0 < (long)local_60 - (long)local_68) {
      uVar4 = ((long)local_60 - (long)local_68) + 1;
      ppppuVar3 = (undefined8 ****)local_68;
      do {
        uVar4 = uVar4 - 1;
        *(undefined1 *)ppppuVar3 = 0;
        ppppuVar3 = (undefined8 ****)((long)ppppuVar3 + 1);
      } while (1 < uVar4);
    }
    if ((undefined8 ****)local_68 == (undefined8 ****)0x0) goto LAB_005a2ca0;
    local_60 = local_68;
  }
  operator_delete(local_68);
LAB_005a2ca0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a2d20  FUN_005a2d20 =====

void FUN_005a2d20(long param_1,undefined8 *param_2)

{
  FUN_005a1e50(param_1,*(undefined8 *)(param_1 + 8),*param_2,param_2[1]);
  return;
}


// ===== 005a2d30  FUN_005a2d30 =====

void FUN_005a2d30(undefined8 *param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  void *__dest;
  ulong uVar3;
  ulong uVar4;
  void *__src;
  size_t __n;
  
  puVar2 = (undefined1 *)param_1[1];
  if (puVar2 < (undefined1 *)param_1[2]) {
    if (puVar2 == (undefined1 *)0x0) {
                    /* try { // try from 005a2e00 to 005a2e27 has its CatchHandler @ 005a2e58 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                 ,0x23,"__location != nullptr","null pointer given to construct_at");
    }
    *puVar2 = *param_2;
    param_1[1] = puVar2 + 1;
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
    *(undefined1 *)((long)__dest + __n) = *param_2;
    memmove(__dest,__src,__n);
    *param_1 = __dest;
    param_1[1] = (undefined1 *)((long)__dest + __n) + 1;
    param_1[2] = (long)__dest + uVar4;
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}


// ===== 005a2e60  FUN_005a2e60 =====

undefined8 FUN_005a2e60(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  undefined1 local_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c[0] = param_2;
  FUN_005a2d30(param_1,local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a2eb4  FUN_005a2eb4 =====

undefined8 FUN_005a2eb4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c[0] = (undefined1)((ulong)param_2 >> 8);
  FUN_005a2d30(param_1,local_3c);
  local_3c[0] = (char)param_2;
  FUN_005a2d30(param_1,local_3c);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a2f28  FUN_005a2f28 =====

undefined8 FUN_005a2f28(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined1 local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c[0] = (undefined1)((uint)param_2 >> 0x18);
  FUN_005a2d30(param_1,local_3c);
  local_3c[0] = (undefined1)((uint)param_2 >> 0x10);
  FUN_005a2d30(param_1,local_3c);
  local_3c[0] = (undefined1)((uint)param_2 >> 8);
  FUN_005a2d30(param_1,local_3c);
  local_3c[0] = (char)param_2;
  FUN_005a2d30(param_1,local_3c);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a2fc8  FUN_005a2fc8 =====

undefined8 FUN_005a2fc8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c[0] = (undefined1)((ulong)param_2 >> 0x38);
  FUN_005a2d30(param_1,local_3c);
  local_3c[0] = (undefined1)((ulong)param_2 >> 0x30);
  FUN_005a2d30(param_1,local_3c);
  local_3c[0] = (undefined1)((ulong)param_2 >> 0x28);
  FUN_005a2d30(param_1,local_3c);
  local_3c[0] = (undefined1)((ulong)param_2 >> 0x20);
  FUN_005a2d30(param_1,local_3c);
  local_3c[0] = (undefined1)((ulong)param_2 >> 0x18);
  FUN_005a2d30(param_1,local_3c);
  local_3c[0] = (undefined1)((ulong)param_2 >> 0x10);
  FUN_005a2d30(param_1,local_3c);
  local_3c[0] = (undefined1)((ulong)param_2 >> 8);
  FUN_005a2d30(param_1,local_3c);
  local_3c[0] = (undefined1)param_2;
  FUN_005a2d30(param_1,local_3c);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a30b4  FUN_005a30b4 =====

void FUN_005a30b4(long *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  byte *pbVar3;
  
  if (*param_1 == param_1[1]) {
    uVar2 = FUN_0054f64c(0x10);
                    /* try { // try from 005a3100 to 005a310b has its CatchHandler @ 005a3144 */
    FUN_005064ec(uVar2,"Attempt to read from empty buffer");
  }
  else {
    pbVar3 = (byte *)(param_1[1] + -1);
    bVar1 = *pbVar3;
    param_1[1] = (long)pbVar3;
    if (bVar1 < 2) {
      *(bool *)param_2 = bVar1 == 1;
      return;
    }
    uVar2 = FUN_0054f64c(0x10);
                    /* try { // try from 005a311c to 005a3127 has its CatchHandler @ 005a3140 */
    FUN_005064ec(uVar2,"Malformed boolean");
  }
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar2,&PTR_PTR_thunk_FUN_00552768_00d1fbf0,PTR_FUN_00d51d28);
}


// ===== 005a3158  FUN_005a3158 =====

void FUN_005a3158(long *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  
  if (*param_1 != param_1[1]) {
    puVar3 = (undefined1 *)(param_1[1] + -1);
    uVar1 = *puVar3;
    param_1[1] = (long)puVar3;
    *param_2 = uVar1;
    return;
  }
  uVar2 = FUN_0054f64c(0x10);
                    /* try { // try from 005a3194 to 005a319f has its CatchHandler @ 005a31b8 */
  FUN_005064ec(uVar2,"Attempt to read from empty buffer");
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar2,&PTR_PTR_thunk_FUN_00552768_00d1fbf0,PTR_FUN_00d51d28);
}


// ===== 005a31cc  FUN_005a31cc =====

void FUN_005a31cc(long *param_1,undefined2 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  
  puVar1 = (undefined1 *)param_1[1];
  if ((undefined1 *)*param_1 != puVar1) {
    puVar5 = puVar1 + -1;
    uVar2 = *puVar5;
    param_1[1] = (long)puVar5;
    if ((undefined1 *)*param_1 != puVar5) {
      uVar3 = puVar1[-2];
      param_1[1] = (long)(puVar1 + -2);
      *param_2 = CONCAT11(uVar2,uVar3);
      return;
    }
  }
  uVar4 = FUN_0054f64c(0x10);
                    /* try { // try from 005a3220 to 005a322b has its CatchHandler @ 005a3244 */
  FUN_005064ec(uVar4,"Attempt to read from empty buffer");
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar4,&PTR_PTR_thunk_FUN_00552768_00d1fbf0,PTR_FUN_00d51d28);
}


// ===== 005a3258  FUN_005a3258 =====

void FUN_005a3258(long *param_1,uint *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined8 uVar7;
  byte *pbVar8;
  
  pbVar1 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if (pbVar1 != pbVar2) {
    pbVar8 = pbVar2 + -1;
    bVar3 = *pbVar8;
    param_1[1] = (long)pbVar8;
    if (pbVar1 != pbVar8) {
      pbVar8 = pbVar2 + -2;
      bVar4 = *pbVar8;
      param_1[1] = (long)pbVar8;
      if (pbVar1 != pbVar8) {
        pbVar8 = pbVar2 + -3;
        bVar5 = *pbVar8;
        param_1[1] = (long)pbVar8;
        if (pbVar1 != pbVar8) {
          bVar6 = pbVar2[-4];
          param_1[1] = (long)(pbVar2 + -4);
          *param_2 = (uint)bVar6 | ((uint)bVar4 << 8 | (uint)bVar3 << 0x10 | (uint)bVar5) << 8;
          return;
        }
      }
    }
  }
  uVar7 = FUN_0054f64c(0x10);
                    /* try { // try from 005a32e0 to 005a32eb has its CatchHandler @ 005a3304 */
  FUN_005064ec(uVar7,"Attempt to read from empty buffer");
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar7,&PTR_PTR_thunk_FUN_00552768_00d1fbf0,PTR_FUN_00d51d28);
}


// ===== 005a3318  FUN_005a3318 =====

void FUN_005a3318(long *param_1,ulong *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined8 uVar11;
  byte *pbVar12;
  
  pbVar1 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if (pbVar1 != pbVar2) {
    pbVar12 = pbVar2 + -1;
    bVar3 = *pbVar12;
    param_1[1] = (long)pbVar12;
    if (pbVar1 != pbVar12) {
      pbVar12 = pbVar2 + -2;
      bVar4 = *pbVar12;
      param_1[1] = (long)pbVar12;
      if (pbVar1 != pbVar12) {
        pbVar12 = pbVar2 + -3;
        bVar5 = *pbVar12;
        param_1[1] = (long)pbVar12;
        if (pbVar1 != pbVar12) {
          pbVar12 = pbVar2 + -4;
          bVar6 = *pbVar12;
          param_1[1] = (long)pbVar12;
          if (pbVar1 != pbVar12) {
            pbVar12 = pbVar2 + -5;
            bVar7 = *pbVar12;
            param_1[1] = (long)pbVar12;
            if (pbVar1 != pbVar12) {
              pbVar12 = pbVar2 + -6;
              bVar8 = *pbVar12;
              param_1[1] = (long)pbVar12;
              if (pbVar1 != pbVar12) {
                pbVar12 = pbVar2 + -7;
                bVar9 = *pbVar12;
                param_1[1] = (long)pbVar12;
                if (pbVar1 != pbVar12) {
                  bVar10 = pbVar2[-8];
                  param_1[1] = (long)(pbVar2 + -8);
                  *param_2 = (ulong)bVar10 |
                             ((ulong)bVar8 << 8 |
                              ((ulong)bVar6 << 8 |
                               (ulong)((uint)bVar4 << 8 | (uint)bVar3 << 0x10 | (uint)bVar5) << 0x10
                              | (ulong)bVar7) << 0x10 | (ulong)bVar9) << 8;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  uVar11 = FUN_0054f64c(0x10);
                    /* try { // try from 005a3408 to 005a3413 has its CatchHandler @ 005a342c */
  FUN_005064ec(uVar11,"Attempt to read from empty buffer");
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar11,&PTR_PTR_thunk_FUN_00552768_00d1fbf0,PTR_FUN_00d51d28);
}


// ===== 005a3440  FUN_005a3440 =====

undefined8 FUN_005a3440(undefined8 param_1,ulong *param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  ulong uVar6;
  byte local_44 [4];
  byte local_40 [4];
  byte local_3c [4];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar6 = *param_2;
  bVar1 = (byte)uVar6;
  if (uVar6 < 0x40) {
    pbVar5 = local_44;
    local_44[0] = bVar1;
  }
  else {
    bVar2 = (byte)(uVar6 >> 8);
    if (uVar6 >> 0xe == 0) {
      local_40[0] = bVar2 | 0x40;
      FUN_005a2d30(param_1,local_40);
      pbVar5 = local_40;
      local_40[0] = bVar1;
    }
    else {
      if (uVar6 >> 0x1e != 0) {
        uVar4 = FUN_0054f64c(0x10);
                    /* try { // try from 005a3534 to 005a353f has its CatchHandler @ 005a3568 */
        FUN_005a3590(uVar4,"Varint value exceeds maximum size");
        if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_0054f748(uVar4,&PTR_PTR_thunk_FUN_00552768_00d24fa8,PTR_FUN_00d51d28);
        }
        goto LAB_005a358c;
      }
      local_3c[0] = (byte)(uVar6 >> 0x18) | 0x80;
      FUN_005a2d30(param_1,local_3c);
      local_3c[0] = (byte)(uVar6 >> 0x10);
      FUN_005a2d30(param_1,local_3c);
      local_3c[0] = bVar2;
      FUN_005a2d30(param_1,local_3c);
      pbVar5 = local_3c;
      local_3c[0] = bVar1;
    }
  }
  FUN_005a2d30(param_1,pbVar5);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return param_1;
  }
LAB_005a358c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a3590  FUN_005a3590 =====

void FUN_005a3590(undefined8 *param_1)

{
  FUN_00547104();
  *param_1 = &PTR_FUN_00d24fd0;
  return;
}


// ===== 005a35bc  FUN_005a35bc =====

void FUN_005a35bc(long *param_1,ulong *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  
  if ((byte *)*param_1 == (byte *)param_1[1]) {
                    /* try { // try from 005a366c to 005a3693 has its CatchHandler @ 005a373c */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,"!empty()"
               ,"back() called on an empty vector");
  }
  pbVar5 = (byte *)param_1[1] + -1;
  uVar4 = (ulong)(*pbVar5 >> 6);
  if (*pbVar5 >> 6 == 3) {
    uVar2 = FUN_0054f64c(0x10);
                    /* try { // try from 005a36d0 to 005a36db has its CatchHandler @ 005a3724 */
    FUN_005064ec(uVar2,"Malformed varint header");
  }
  else {
    uVar3 = 0;
    lVar6 = 1L << uVar4;
    do {
      if (pbVar5 + 1 == (byte *)*param_1) {
        uVar2 = FUN_0054f64c(0x10);
                    /* try { // try from 005a36a0 to 005a36ab has its CatchHandler @ 005a3728 */
        FUN_005064ec(uVar2,"Attempt to read from empty buffer");
        goto LAB_005a36ac;
      }
      bVar1 = *pbVar5;
      param_1[1] = (long)pbVar5;
      pbVar5 = pbVar5 + -1;
      lVar6 = lVar6 + -1;
      uVar3 = (ulong)bVar1 | uVar3 << 8;
    } while (lVar6 != 0);
    if (uVar4 == 0) {
LAB_005a365c:
      *param_2 = uVar3;
      return;
    }
    if (uVar4 == 2) {
      uVar3 = uVar3 ^ 0x80000000;
      if (uVar3 >> 0xe != 0) goto LAB_005a365c;
      uVar2 = FUN_0054f64c(0x10);
                    /* try { // try from 005a3708 to 005a3713 has its CatchHandler @ 005a3718 */
      FUN_005064ec(uVar2,"Non-minimal varint");
    }
    else if (uVar4 == 1) {
      uVar3 = uVar3 ^ 0x4000;
      if (0x3f < uVar3) goto LAB_005a365c;
      uVar2 = FUN_0054f64c(0x10);
                    /* try { // try from 005a3640 to 005a364b has its CatchHandler @ 005a371c */
      FUN_005064ec(uVar2,"Non-minimal varint");
    }
    else {
      uVar2 = FUN_0054f64c(0x10);
                    /* try { // try from 005a36ec to 005a36f7 has its CatchHandler @ 005a3720 */
      FUN_005064ec(uVar2,"Malformed varint header");
    }
  }
LAB_005a36ac:
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar2,&PTR_PTR_thunk_FUN_00552768_00d1fbf0,PTR_FUN_00d51d28);
}


// ===== 005a3740  FUN_005a3740 =====

void FUN_005a3740(void *param_1)

{
  FUN_005523a0();
  operator_delete(param_1);
  return;
}


// ===== 005a3764  FUN_005a3764 =====

void FUN_005a3764(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0054f64c(0x10);
                    /* try { // try from 005a377c to 005a3787 has its CatchHandler @ 005a37a0 */
  FUN_0054723c(uVar1,"seal() on export-only context");
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar1,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
}


// ===== 005a37b4  FUN_005a37b4 =====

void FUN_005a37b4(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0054f64c(0x10);
                    /* try { // try from 005a37cc to 005a37d7 has its CatchHandler @ 005a37f0 */
  FUN_0054723c(uVar1,"open() on export-only context");
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar1,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
}


// ===== 005a3804  FUN_005a3804 =====

void FUN_005a3804(undefined8 *param_1)

{
  FUN_005ad29c(param_1,0xffff,0,0);
  *param_1 = &PTR_FUN_00d24ff8;
  return;
}


// ===== 005a383c  FUN_005a383c =====

undefined * FUN_005a383c(void)

{
  int iVar1;
  
  if (((DAT_00d62fc8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d62fc8), iVar1 != 0)) {
                    /* try { // try from 005a387c to 005a388b has its CatchHandler @ 005a389c */
    FUN_005a39a4(&DAT_00d62fa0,1);
    FUN_0054ff1c(&DAT_00d62fc8);
  }
  return &DAT_00d62fa0;
}


// ===== 005a38b4  FUN_005a38b4 =====

undefined * FUN_005a38b4(void)

{
  int iVar1;
  
  if (((DAT_00d62ff8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d62ff8), iVar1 != 0)) {
                    /* try { // try from 005a38f4 to 005a3903 has its CatchHandler @ 005a3914 */
    FUN_005a39a4(&DAT_00d62fd0,2);
    FUN_0054ff1c(&DAT_00d62ff8);
  }
  return &DAT_00d62fd0;
}


// ===== 005a392c  FUN_005a392c =====

undefined * FUN_005a392c(void)

{
  int iVar1;
  
  if (((DAT_00d63028 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d63028), iVar1 != 0)) {
                    /* try { // try from 005a396c to 005a397b has its CatchHandler @ 005a398c */
    FUN_005a39a4(&DAT_00d63000,3);
    FUN_0054ff1c(&DAT_00d63028);
  }
  return &DAT_00d63000;
}


// ===== 005a39a4  FUN_005a39a4 =====

void FUN_005a39a4(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = (int)param_2 - 1;
  if ((uVar1 & 0xffff) < 3) {
    FUN_005ad29c(param_1,param_2,*(undefined8 *)(&DAT_001fa1a8 + (long)(short)uVar1 * 8),0xc);
    *param_1 = &PTR_FUN_00d25028;
    if (*(ushort *)(param_1 + 1) - 1 < 3) {
      param_1[4] = 0x10;
      return;
    }
    uVar2 = FUN_0054f64c(0x10);
                    /* try { // try from 005a3a34 to 005a3a3f has its CatchHandler @ 005a3a58 */
    FUN_0054723c(uVar2,"Unsupported algorithm");
  }
  else {
    uVar2 = FUN_0054f64c(0x10);
                    /* try { // try from 005a3a18 to 005a3a23 has its CatchHandler @ 005a3a5c */
    FUN_0054723c(uVar2,"Unsupported algorithm");
  }
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar2,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
}


// ===== 005a3a70  FUN_005a3a70 =====

void FUN_005a3a70(undefined8 *param_1,long param_2,long *param_3,long *param_4,long *param_5,
                 long *param_6)

{
  ulong __n;
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  void *__s;
  long lVar6;
  long lVar7;
  long lStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_005a3c8c(*(undefined2 *)(param_2 + 8));
  lVar5 = FUN_00728064(uVar4,*param_3,param_3[1] - *param_3,*(undefined8 *)(param_2 + 0x20));
  if (lVar5 == 0) {
    uVar4 = FUN_0054f64c(0x10);
                    /* try { // try from 005a3ba8 to 005a3baf has its CatchHandler @ 005a3c3c */
    FUN_005aee88(uVar4);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar4,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
    }
  }
  else {
    lVar1 = *param_6;
    lVar7 = param_6[1];
    param_1[1] = 0;
    param_1[2] = 0;
    lVar6 = *(long *)(param_2 + 0x20);
    *param_1 = 0;
    lVar7 = lVar7 - lVar1;
    __n = lVar7 + lVar6;
    if (__n == 0) {
      __s = (void *)0x0;
      lVar6 = 0;
    }
    else {
      if ((long)__n < 0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 005a3c24 to 005a3c2b has its CatchHandler @ 005a3c50 */
                    /* WARNING: Subroutine does not return */
          FUN_004f04ec(param_1);
        }
        goto LAB_005a3c84;
      }
                    /* try { // try from 005a3af4 to 005a3afb has its CatchHandler @ 005a3c50 */
      __s = operator_new(__n);
      lVar6 = (long)__s + __n;
      *param_1 = __s;
      param_1[2] = lVar6;
      memset(__s,0,__n);
      param_1[1] = lVar6;
    }
    lStack_70 = lVar6 - (long)__s;
                    /* try { // try from 005a3b40 to 005a3b5b has its CatchHandler @ 005a3c58 */
    iVar3 = FUN_0072835c(lVar5,__s,&lStack_70,lStack_70,*param_4,param_4[1] - *param_4,lVar1,lVar7,
                         *param_5,param_5[1] - *param_5);
    if (iVar3 == 1) {
                    /* try { // try from 005a3b64 to 005a3b6b has its CatchHandler @ 005a3c4c */
      thunk_FUN_00728234(lVar5);
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return;
      }
    }
    else {
      uVar4 = FUN_0054f64c(0x10);
                    /* try { // try from 005a3be4 to 005a3beb has its CatchHandler @ 005a3c2c */
      FUN_005aee88(uVar4);
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 005a3bfc to 005a3c13 has its CatchHandler @ 005a3c58 */
                    /* WARNING: Subroutine does not return */
        FUN_0054f748(uVar4,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
      }
    }
  }
LAB_005a3c84:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a3c8c  FUN_005a3c8c =====

void FUN_005a3c8c(short param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 3) {
    FUN_00773f84();
    return;
  }
  if (param_1 != 2) {
    if (param_1 == 1) {
      FUN_0072a230();
      return;
    }
    uVar1 = FUN_0054f64c(0x10);
                    /* try { // try from 005a3ce4 to 005a3cef has its CatchHandler @ 005a3d08 */
    FUN_0054723c(uVar1,"Unsupported algorithm");
                    /* WARNING: Subroutine does not return */
    FUN_0054f748(uVar1,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
  }
  FUN_0072a2bc();
  return;
}


// ===== 005a3d1c  FUN_005a3d1c =====

void FUN_005a3d1c(undefined8 *param_1,long param_2,long *param_3,long *param_4,long *param_5,
                 long *param_6)

{
  long lVar1;
  ulong __n;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  void *__s;
  long lVar7;
  long local_88;
  void *local_80;
  long local_78;
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((ulong)(param_6[1] - *param_6) < *(ulong *)(param_2 + 0x20)) {
    uVar5 = FUN_0054f64c(0x10);
                    /* try { // try from 005a3e84 to 005a3e8f has its CatchHandler @ 005a3f58 */
    FUN_0054723c(uVar5,"AEAD ciphertext smaller than tag size");
  }
  else {
    uVar5 = FUN_005a3c8c(*(undefined2 *)(param_2 + 8));
    if (*(ushort *)(param_2 + 8) - 1 < 3) {
      lVar6 = FUN_00728064(uVar5,*param_3,param_3[1] - *param_3,0x10);
      if (lVar6 != 0) {
        lVar1 = *param_6;
        __s = (void *)0x0;
        local_78 = 0;
        local_70 = 0;
        local_80 = (void *)0x0;
        lVar7 = param_6[1] - lVar1;
        __n = lVar7 - *(long *)(param_2 + 0x20);
        if (__n != 0) {
          if ((long)__n < 0) {
            if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 005a3f38 to 005a3f3f has its CatchHandler @ 005a3f6c */
                    /* WARNING: Subroutine does not return */
              FUN_004f04ec(&local_80);
            }
            goto LAB_005a3fa0;
          }
                    /* try { // try from 005a3dcc to 005a3dd3 has its CatchHandler @ 005a3f6c */
          __s = operator_new(__n);
          local_80 = __s;
          local_70 = (long)__s + __n;
          memset(__s,0,__n);
          local_78 = (long)__s + __n;
        }
        lVar3 = local_78;
        local_88 = local_78 - (long)__s;
                    /* try { // try from 005a3e0c to 005a3e27 has its CatchHandler @ 005a3f74 */
        iVar4 = FUN_007286e0(lVar6,__s,&local_88,local_88,*param_4,param_4[1] - *param_4,lVar1,lVar7
                             ,*param_5,param_5[1] - *param_5);
        if (iVar4 == 1) {
          *param_1 = __s;
          param_1[1] = lVar3;
          param_1[2] = lVar3;
          *(undefined1 *)(param_1 + 3) = 1;
                    /* try { // try from 005a3e40 to 005a3e47 has its CatchHandler @ 005a3f68 */
          thunk_FUN_00728234(lVar6);
          if (*(long *)(lVar2 + 0x28) == local_68) {
            return;
          }
        }
        else {
          uVar5 = FUN_0054f64c(0x10);
                    /* try { // try from 005a3ef8 to 005a3eff has its CatchHandler @ 005a3f40 */
          FUN_005aee88(uVar5);
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 005a3f10 to 005a3f27 has its CatchHandler @ 005a3f74 */
                    /* WARNING: Subroutine does not return */
            FUN_0054f748(uVar5,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
          }
        }
        goto LAB_005a3fa0;
      }
      uVar5 = FUN_0054f64c(0x10);
                    /* try { // try from 005a3ebc to 005a3ec3 has its CatchHandler @ 005a3f50 */
      FUN_005aee88(uVar5);
    }
    else {
      uVar5 = FUN_0054f64c(0x10);
                    /* try { // try from 005a3ea0 to 005a3eab has its CatchHandler @ 005a3f54 */
      FUN_0054723c(uVar5,"Unsupported algorithm");
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_0054f748(uVar5,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
  }
LAB_005a3fa0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a3fa8  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 005a3fac  FUN_005a3fac =====

void FUN_005a3fac(void)

{
  return;
}


// ===== 005a3fb0  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 005a3fb4  FUN_005a3fb4 =====

void FUN_005a3fb4(undefined8 param_1,long *param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined1 *__s;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar3 = *param_2;
  if (lVar3 == param_2[1]) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
      FUN_004a3cf4(param_1,&DAT_001b3348);
      return;
    }
  }
  else {
    lVar7 = param_2[1] - lVar3;
    uVar6 = lVar7 + 2;
    local_70 = (undefined1 *)0x0;
    local_68 = (undefined1 *)0x0;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar6;
    local_60 = (undefined1 *)0x0;
    uVar6 = uVar6 / 3 << 2 | 1;
    if ((long)uVar6 < 0) {
      if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_70);
      }
    }
    else {
      __s = (undefined1 *)operator_new(uVar6);
      puVar4 = __s + uVar6;
      local_70 = __s;
      local_60 = puVar4;
      memset(__s,0,uVar6);
      local_68 = puVar4;
                    /* try { // try from 005a4040 to 005a407b has its CatchHandler @ 005a4178 */
      lVar3 = FUN_0076eeb8(__s,lVar3,lVar7);
      if (lVar3 == (SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0x7ffffffffffffffe) * 2) {
        local_68 = __s + ~(ulong)__s + (long)puVar4;
        FUN_005a2588(param_1,&local_70);
        if (0 < (long)local_68 - (long)local_70) {
          uVar6 = ((long)local_68 - (long)local_70) + 1;
          puVar4 = local_70;
          do {
            uVar6 = uVar6 - 1;
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          } while (1 < uVar6);
        }
        if (local_70 != (undefined1 *)0x0) {
          local_68 = local_70;
          operator_delete(local_70);
        }
        if (*(long *)(lVar2 + 0x28) == local_58) {
          return;
        }
      }
      else {
        uVar5 = FUN_0054f64c(0x10);
                    /* try { // try from 005a4138 to 005a413f has its CatchHandler @ 005a4168 */
        FUN_005aee88(uVar5);
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 005a4150 to 005a4167 has its CatchHandler @ 005a4178 */
                    /* WARNING: Subroutine does not return */
          FUN_0054f748(uVar5,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a41a0  FUN_005a41a0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_005a41a0(char *param_1,long *param_2)

{
  size_t __n;
  long lVar1;
  void *pvVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  size_t sVar9;
  byte bVar10;
  ulong uVar11;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*param_2 == param_2[1]) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      FUN_004a3cf4(param_1,&DAT_001b3348);
      return;
    }
    goto LAB_005a453c;
  }
  FUN_005a3fb4(param_1);
  bVar10 = param_1[0x17];
  uVar8 = (ulong)bVar10;
  sVar9 = *(size_t *)(param_1 + 8);
  __n = sVar9;
  if (-1 < (char)bVar10) {
    __n = uVar8;
  }
  if (__n != 0) {
    pcVar4 = *(char **)param_1;
    if (-1 < (char)bVar10) {
      pcVar4 = param_1;
    }
    pvVar2 = memchr(pcVar4,0x3d,__n);
    if ((pvVar2 != (void *)0x0) && ((long)pvVar2 - (long)pcVar4 != -1)) {
                    /* try { // try from 005a421c to 005a422f has its CatchHandler @ 005a4510 */
      FUN_00547e10(&local_60,param_1,0,(long)pvVar2 - (long)pcVar4,param_1);
      if (param_1[0x17] < '\0') {
        operator_delete(*(void **)param_1);
      }
      uVar8 = local_50 >> 0x38;
      *(ulong *)(param_1 + 0x10) = local_50;
      *(undefined8 *)(param_1 + 8) = uStack_58;
      *(undefined8 *)param_1 = local_60;
      bVar10 = (byte)(local_50 >> 0x38);
      sVar9 = *(size_t *)(param_1 + 8);
    }
  }
  pcVar3 = *(char **)param_1;
  pcVar4 = pcVar3;
  uVar6 = sVar9;
  if (-1 < (char)bVar10) {
    pcVar4 = param_1;
    uVar6 = uVar8;
  }
  if (uVar6 != 0) {
    pcVar3 = pcVar4;
    if (uVar6 < 8) {
LAB_005a4488:
      do {
        if (*pcVar3 == '+') {
          *pcVar3 = '-';
        }
        pcVar3 = pcVar3 + 1;
      } while (pcVar3 != pcVar4 + uVar6);
    }
    else {
      uVar5 = uVar6 & 0xfffffffffffffff8;
      pcVar3 = pcVar4 + uVar5;
      pcVar7 = pcVar4 + 3;
      uVar8 = uVar5;
      do {
        uVar11 = NEON_cmeq(*(undefined8 *)(pcVar7 + -3),0x2b2b2b2b2b2b2b2b,1);
        if ((uVar11 & 1) != 0) {
          pcVar7[-3] = '-';
        }
        if ((uVar11 & 0x100) != 0) {
          pcVar7[-2] = '-';
        }
        if ((uVar11 & 0x10000) != 0) {
          pcVar7[-1] = '-';
        }
        if ((uVar11 & 0x1000000) != 0) {
          *pcVar7 = '-';
        }
        if ((uVar11 & 0x100000000) != 0) {
          pcVar7[1] = '-';
        }
        if ((uVar11 & 0x10000000000) != 0) {
          pcVar7[2] = '-';
        }
        if ((uVar11 & 0x1000000000000) != 0) {
          pcVar7[3] = '-';
        }
        if ((uVar11 & 0x100000000000000) != 0) {
          pcVar7[4] = '-';
        }
        uVar8 = uVar8 - 8;
        pcVar7 = pcVar7 + 8;
      } while (uVar8 != 0);
      if (uVar6 != uVar5) goto LAB_005a4488;
    }
    bVar10 = param_1[0x17];
    uVar8 = (ulong)bVar10;
    pcVar3 = *(char **)param_1;
    sVar9 = *(size_t *)(param_1 + 8);
  }
  if (-1 < (char)bVar10) {
    pcVar3 = param_1;
    sVar9 = uVar8;
  }
  if (sVar9 != 0) {
    pcVar4 = pcVar3;
    if (7 < sVar9) {
      uVar6 = sVar9 & 0xfffffffffffffff8;
      pcVar4 = pcVar3 + uVar6;
      pcVar7 = pcVar3 + 3;
      uVar8 = uVar6;
      do {
        uVar5 = NEON_cmeq(*(undefined8 *)(pcVar7 + -3),0x2f2f2f2f2f2f2f2f,1);
        if ((uVar5 & 1) != 0) {
          pcVar7[-3] = '_';
        }
        if ((uVar5 & 0x100) != 0) {
          pcVar7[-2] = '_';
        }
        if ((uVar5 & 0x10000) != 0) {
          pcVar7[-1] = '_';
        }
        if ((uVar5 & 0x1000000) != 0) {
          *pcVar7 = '_';
        }
        if ((uVar5 & 0x100000000) != 0) {
          pcVar7[1] = '_';
        }
        if ((uVar5 & 0x10000000000) != 0) {
          pcVar7[2] = '_';
        }
        if ((uVar5 & 0x1000000000000) != 0) {
          pcVar7[3] = '_';
        }
        if ((uVar5 & 0x100000000000000) != 0) {
          pcVar7[4] = '_';
        }
        uVar8 = uVar8 - 8;
        pcVar7 = pcVar7 + 8;
      } while (uVar8 != 0);
      if (sVar9 == uVar6) goto LAB_005a44bc;
    }
    do {
      if (*pcVar4 == '/') {
        *pcVar4 = '_';
      }
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 != pcVar3 + sVar9);
  }
LAB_005a44bc:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_005a453c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a4540  FUN_005a4540 =====

void FUN_005a4540(undefined8 *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  short *******pppppppsVar4;
  bool bVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  void *__s;
  ulong uVar10;
  void *pvVar11;
  uint uVar12;
  short ******local_88;
  ulong uStack_80;
  byte local_71;
  undefined1 *local_70;
  undefined1 *local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar10 = *(ulong *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x17)) {
    uVar10 = (ulong)*(byte *)(param_2 + 0x17);
  }
  if (uVar10 == 0) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    goto LAB_005a4930;
  }
  if ((uVar10 & 3) != 0) {
    uVar8 = FUN_0054f64c(0x10);
                    /* try { // try from 005a484c to 005a4857 has its CatchHandler @ 005a48e8 */
    FUN_0054723c(uVar8,"Base64 length is not divisible by 4");
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar8,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
    }
    goto LAB_005a4930;
  }
  FUN_005a2680(&local_70);
  puVar7 = local_70;
  pvVar11 = (void *)0x0;
  __s = (void *)0x0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar12 = (int)local_68 - (int)local_70;
  uVar1 = uVar12 + 3;
  if (-1 < (int)uVar12) {
    uVar1 = uVar12;
  }
  iVar3 = ((int)uVar1 >> 2) * 3;
  uVar10 = (ulong)iVar3;
  if (6 < uVar12 + 3) {
    if (uVar12 == 0xfffffffc || (int)(uVar12 + 4) < 0 != SCARRY4(uVar12,4)) {
      if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 005a48cc to 005a48d3 has its CatchHandler @ 005a48fc */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(param_1);
      }
      goto LAB_005a4930;
    }
                    /* try { // try from 005a45d8 to 005a45df has its CatchHandler @ 005a48fc */
    __s = operator_new(uVar10);
    pvVar11 = (void *)((long)__s + uVar10);
    *param_1 = __s;
    param_1[2] = pvVar11;
    memset(__s,0,uVar10);
    param_1[1] = pvVar11;
  }
                    /* try { // try from 005a4604 to 005a460f has its CatchHandler @ 005a4904 */
  iVar6 = FUN_0076f5ac(__s,puVar7,(long)(int)uVar12);
  if (iVar6 != iVar3) {
    uVar8 = FUN_0054f64c(0x10);
                    /* try { // try from 005a488c to 005a4893 has its CatchHandler @ 005a48d8 */
    FUN_005aee88(uVar8);
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 005a48a4 to 005a48bb has its CatchHandler @ 005a4904 */
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar8,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
    }
    goto LAB_005a4930;
  }
  uVar10 = *(ulong *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x17)) {
    uVar10 = (ulong)*(byte *)(param_2 + 0x17);
  }
                    /* try { // try from 005a4630 to 005a4643 has its CatchHandler @ 005a48f8 */
  FUN_00547e10(&local_88,param_2,uVar10 - 2,uVar10,param_2);
  uVar10 = uStack_80;
  pppppppsVar4 = (short *******)local_88;
  if (-1 < (char)local_71) {
    uVar10 = (ulong)local_71;
    pppppppsVar4 = &local_88;
  }
  if ((pppppppsVar4 == (short *******)0x0) && (uVar10 != 0)) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 005a47e0 to 005a4807 has its CatchHandler @ 005a4938 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
                 "__len == 0 || __s != nullptr",
                 "string_view::string_view(_CharT *, size_t): received nullptr");
    }
    goto LAB_005a4930;
  }
  if (uVar10 == 2) {
    bVar5 = *(short *)pppppppsVar4 == 0x3d3d;
    if (-1 < (char)local_71) goto LAB_005a46a8;
LAB_005a46c0:
    operator_delete(local_88);
    if (bVar5) goto LAB_005a46ac;
LAB_005a46c8:
    uVar10 = *(ulong *)(param_2 + 8);
    if (-1 < (char)*(byte *)(param_2 + 0x17)) {
      uVar10 = (ulong)*(byte *)(param_2 + 0x17);
    }
                    /* try { // try from 005a46e0 to 005a46f3 has its CatchHandler @ 005a48d4 */
    FUN_00547e10(&local_88,param_2,uVar10 - 1,uVar10,param_2);
    pppppppsVar4 = (short *******)local_88;
    if (-1 < (char)local_71) {
      uStack_80 = (ulong)local_71;
      pppppppsVar4 = &local_88;
    }
    if ((pppppppsVar4 == (short *******)0x0) && (uStack_80 != 0)) {
      if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 005a4818 to 005a483f has its CatchHandler @ 005a4934 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
                   "__len == 0 || __s != nullptr",
                   "string_view::string_view(_CharT *, size_t): received nullptr");
      }
      goto LAB_005a4930;
    }
    if (uStack_80 == 1) {
      bVar5 = *(char *)pppppppsVar4 == '=';
      if (-1 < (char)local_71) goto LAB_005a4738;
LAB_005a4740:
      operator_delete(local_88);
      if (bVar5) goto LAB_005a4748;
    }
    else {
      bVar5 = false;
      if ((char)local_71 < '\0') goto LAB_005a4740;
LAB_005a4738:
      if (bVar5) {
LAB_005a4748:
        if (pvVar11 == __s) {
          uVar8 = 0xffffffffffffffff;
          goto LAB_005a4768;
        }
        lVar9 = ~(ulong)__s + (long)pvVar11;
        goto LAB_005a4758;
      }
    }
  }
  else {
    bVar5 = false;
    if ((char)local_71 < '\0') goto LAB_005a46c0;
LAB_005a46a8:
    if (!bVar5) goto LAB_005a46c8;
LAB_005a46ac:
    lVar9 = ((long)pvVar11 - (long)__s) - 2;
    if ((ulong)((long)pvVar11 - (long)__s) < 2) {
      uVar8 = 0xfffffffffffffffe;
LAB_005a4768:
                    /* try { // try from 005a4768 to 005a476f has its CatchHandler @ 005a4904 */
      FUN_00432ba8(param_1,uVar8);
    }
    else {
LAB_005a4758:
      param_1[1] = (long)__s + lVar9;
    }
  }
  if (0 < (long)local_68 - (long)local_70) {
    uVar10 = ((long)local_68 - (long)local_70) + 1;
    puVar7 = local_70;
    do {
      uVar10 = uVar10 - 1;
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    } while (1 < uVar10);
  }
  if (local_70 != (undefined1 *)0x0) {
    local_68 = local_70;
    operator_delete(local_70);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_005a4930:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a493c  FUN_005a493c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_005a493c(undefined8 *param_1,long param_2)

{
  char **ppcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  char *local_50;
  ulong local_48;
  byte local_39;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar2 = *(ulong *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x17)) {
    uVar2 = (ulong)*(byte *)(param_2 + 0x17);
  }
  if (uVar2 == 0) {
    if (*(long *)(lVar3 + 0x28) == local_38) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    goto LAB_005a4ca8;
  }
  FUN_004c55b4(&local_50,param_2);
  uVar4 = (ulong)local_39;
  ppcVar1 = (char **)local_50;
  uVar2 = local_48;
  if (-1 < (char)local_39) {
    ppcVar1 = &local_50;
    uVar2 = uVar4;
  }
  if (uVar2 != 0) {
    pcVar5 = (char *)ppcVar1;
    if (uVar2 < 8) {
LAB_005a4ba0:
      do {
        if (*pcVar5 == '-') {
          *pcVar5 = '+';
        }
        pcVar5 = pcVar5 + 1;
      } while (pcVar5 != (char *)((long)ppcVar1 + uVar2));
    }
    else {
      uVar6 = uVar2 & 0xfffffffffffffff8;
      pcVar5 = (char *)((long)ppcVar1 + uVar6);
      pcVar7 = (char *)((long)ppcVar1 + 3);
      uVar4 = uVar6;
      do {
        uVar8 = NEON_cmeq(*(undefined8 *)(pcVar7 + -3),0x2d2d2d2d2d2d2d2d,1);
        if ((uVar8 & 1) != 0) {
          pcVar7[-3] = '+';
        }
        if ((uVar8 & 0x100) != 0) {
          pcVar7[-2] = '+';
        }
        if ((uVar8 & 0x10000) != 0) {
          pcVar7[-1] = '+';
        }
        if ((uVar8 & 0x1000000) != 0) {
          *pcVar7 = '+';
        }
        if ((uVar8 & 0x100000000) != 0) {
          pcVar7[1] = '+';
        }
        if ((uVar8 & 0x10000000000) != 0) {
          pcVar7[2] = '+';
        }
        if ((uVar8 & 0x1000000000000) != 0) {
          pcVar7[3] = '+';
        }
        if ((uVar8 & 0x100000000000000) != 0) {
          pcVar7[4] = '+';
        }
        uVar4 = uVar4 - 8;
        pcVar7 = pcVar7 + 8;
      } while (uVar4 != 0);
      if (uVar2 != uVar6) goto LAB_005a4ba0;
    }
    uVar4 = (ulong)local_39;
  }
  ppcVar1 = (char **)local_50;
  uVar2 = local_48;
  if (-1 < (char)local_39) {
    ppcVar1 = &local_50;
    uVar2 = uVar4;
  }
  if (uVar2 != 0) {
    pcVar5 = (char *)ppcVar1;
    if (7 < uVar2) {
      uVar6 = uVar2 & 0xfffffffffffffff8;
      pcVar5 = (char *)((long)ppcVar1 + uVar6);
      pcVar7 = (char *)((long)ppcVar1 + 3);
      uVar4 = uVar6;
      do {
        uVar8 = NEON_cmeq(*(undefined8 *)(pcVar7 + -3),0x5f5f5f5f5f5f5f5f,1);
        if ((uVar8 & 1) != 0) {
          pcVar7[-3] = '/';
        }
        if ((uVar8 & 0x100) != 0) {
          pcVar7[-2] = '/';
        }
        if ((uVar8 & 0x10000) != 0) {
          pcVar7[-1] = '/';
        }
        if ((uVar8 & 0x1000000) != 0) {
          *pcVar7 = '/';
        }
        if ((uVar8 & 0x100000000) != 0) {
          pcVar7[1] = '/';
        }
        if ((uVar8 & 0x10000000000) != 0) {
          pcVar7[2] = '/';
        }
        if ((uVar8 & 0x1000000000000) != 0) {
          pcVar7[3] = '/';
        }
        if ((uVar8 & 0x100000000000000) != 0) {
          pcVar7[4] = '/';
        }
        uVar4 = uVar4 - 8;
        pcVar7 = pcVar7 + 8;
      } while (uVar4 != 0);
      if (uVar2 == uVar6) goto LAB_005a4bdc;
    }
    do {
      if (*pcVar5 == '_') {
        *pcVar5 = '/';
      }
      pcVar5 = pcVar5 + 1;
    } while (pcVar5 != (char *)((long)ppcVar1 + uVar2));
  }
LAB_005a4bdc:
  while( true ) {
    uVar2 = local_48;
    if (-1 < (char)local_39) {
      uVar2 = (ulong)local_39;
    }
    if ((uVar2 & 3) == 0) break;
                    /* try { // try from 005a4bf8 to 005a4c07 has its CatchHandler @ 005a4c7c */
    FUN_00547cac(&local_50,&DAT_00197a5b,1);
  }
                    /* try { // try from 005a4c0c to 005a4c17 has its CatchHandler @ 005a4c78 */
  FUN_005a4540(param_1,&local_50);
  if ((char)local_39 < '\0') {
    operator_delete(local_50);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
LAB_005a4ca8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a4cac  FUN_005a4cac =====

undefined8 * FUN_005a4cac(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  iVar2 = FUN_00778dec();
  if (iVar2 < 0x3b5) {
    if (iVar2 == 6) {
      puVar4 = (undefined8 *)operator_new(0x18);
      puVar1 = PTR_thunk_FUN_00778828_00d51ea8;
      *puVar4 = &PTR_FUN_00d25098;
      puVar4[1] = param_1;
      puVar4[2] = puVar1;
      return puVar4;
    }
    if (iVar2 != 0x198) {
LAB_005a4d34:
      uVar5 = FUN_0054f64c(0x10);
                    /* try { // try from 005a4d40 to 005a4d4b has its CatchHandler @ 005a4d64 */
      FUN_0054723c(uVar5,"Unsupported algorithm");
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar5,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
    }
  }
  else if ((iVar2 != 0x3b5) && (iVar2 != 0x3c0)) goto LAB_005a4d34;
  pvVar3 = operator_new(0x20);
                    /* try { // try from 005a4cf8 to 005a4cff has its CatchHandler @ 005a4d78 */
  FUN_005a9934(pvVar3,param_1);
  return (undefined8 *)((long)pvVar3 + 8);
}


// ===== 005a4d90  FUN_005a4d90 =====

void FUN_005a4d90(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_005a6a24(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 005a4dcc  FUN_005a4dcc =====

void FUN_005a4dcc(undefined8 *param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 *puVar9;
  
  puVar3 = (undefined8 *)FUN_005a4f0c(param_2);
  *param_1 = puVar3;
                    /* try { // try from 005a4df4 to 005a4df7 has its CatchHandler @ 005a4ed4 */
  FUN_007a0d24(*puVar3);
                    /* try { // try from 005a4df8 to 005a4dfb has its CatchHandler @ 005a4ecc */
  uVar4 = FUN_005a4cac();
  param_1[2] = 0;
  param_1[1] = uVar4;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar10 = param_2[1] - *param_2;
  if (uVar10 == 0) {
    return;
  }
  if ((long)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004f04ec();
  }
                    /* try { // try from 005a4e20 to 005a4ecb has its CatchHandler @ 005a4edc */
  puVar5 = (undefined1 *)operator_new(uVar10);
  param_1[2] = puVar5;
  param_1[3] = puVar5;
  param_1[4] = puVar5 + uVar10;
  puVar8 = (undefined1 *)*param_2;
  puVar1 = (undefined1 *)param_2[1];
  puVar6 = puVar5;
  if (puVar8 != puVar1) {
    uVar10 = (long)puVar1 - (long)puVar8;
    puVar9 = puVar8;
    if ((0x1f < uVar10) && (0x1f < (ulong)((long)puVar5 - (long)puVar8))) {
      uVar11 = uVar10 & 0xffffffffffffffe0;
      puVar3 = (undefined8 *)(puVar5 + 0x10);
      puVar9 = puVar8 + uVar11;
      puVar5 = puVar5 + uVar11;
      puVar7 = (undefined8 *)(puVar8 + 0x10);
      uVar12 = uVar11;
      do {
        puVar2 = puVar7 + -1;
        uVar4 = puVar7[-2];
        uVar14 = puVar7[1];
        uVar13 = *puVar7;
        puVar7 = puVar7 + 4;
        uVar12 = uVar12 - 0x20;
        puVar3[-1] = *puVar2;
        puVar3[-2] = uVar4;
        puVar3[1] = uVar14;
        *puVar3 = uVar13;
        puVar3 = puVar3 + 4;
      } while (uVar12 != 0);
      puVar6 = puVar5;
      if (uVar10 == uVar11) goto LAB_005a4eb4;
    }
    do {
      puVar8 = puVar9 + 1;
      puVar6 = puVar5 + 1;
      *puVar5 = *puVar9;
      puVar5 = puVar6;
      puVar9 = puVar8;
    } while (puVar8 != puVar1);
  }
LAB_005a4eb4:
  param_1[3] = puVar6;
  return;
}


// ===== 005a4f0c  FUN_005a4f0c =====

void * FUN_005a4f0c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = *param_1;
  lVar2 = FUN_007a78e0(0,&local_40,(long)(*(int *)(param_1 + 1) - (int)local_40));
  if (lVar2 == 0) {
    uVar4 = FUN_0054f64c(0x10);
                    /* try { // try from 005a4f9c to 005a4fa3 has its CatchHandler @ 005a4fcc */
    FUN_005aee88(uVar4);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar4,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
    }
  }
  else {
    pvVar3 = operator_new(0xe0);
                    /* try { // try from 005a4f60 to 005a4f67 has its CatchHandler @ 005a4fdc */
    FUN_005a54c4(pvVar3,lVar2);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return pvVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a5004  FUN_005a5004 =====

void FUN_005a5004(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 *puVar8;
  
  uVar12 = *param_2;
  puVar3 = (undefined8 *)operator_new(0xe0);
                    /* try { // try from 005a502c to 005a5033 has its CatchHandler @ 005a5124 */
  FUN_005a6eb0(puVar3,uVar12);
  uVar12 = *puVar3;
  *param_1 = puVar3;
                    /* try { // try from 005a503c to 005a503f has its CatchHandler @ 005a511c */
  FUN_007a0d24(uVar12);
                    /* try { // try from 005a5040 to 005a5043 has its CatchHandler @ 005a5114 */
  uVar12 = FUN_005a4cac();
  param_1[2] = 0;
  param_1[1] = uVar12;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar9 = param_2[3] - param_2[2];
  if (uVar9 == 0) {
    return;
  }
  if ((long)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004f04ec();
  }
                    /* try { // try from 005a5068 to 005a5113 has its CatchHandler @ 005a5138 */
  puVar4 = (undefined1 *)operator_new(uVar9);
  param_1[2] = puVar4;
  param_1[3] = puVar4;
  param_1[4] = puVar4 + uVar9;
  puVar7 = (undefined1 *)param_2[2];
  puVar1 = (undefined1 *)param_2[3];
  puVar5 = puVar4;
  if (puVar7 != puVar1) {
    uVar9 = (long)puVar1 - (long)puVar7;
    puVar8 = puVar7;
    if ((0x1f < uVar9) && (0x1f < (ulong)((long)puVar4 - (long)puVar7))) {
      uVar10 = uVar9 & 0xffffffffffffffe0;
      puVar3 = (undefined8 *)(puVar4 + 0x10);
      puVar8 = puVar7 + uVar10;
      puVar4 = puVar4 + uVar10;
      puVar6 = (undefined8 *)(puVar7 + 0x10);
      uVar11 = uVar10;
      do {
        puVar2 = puVar6 + -1;
        uVar12 = puVar6[-2];
        uVar14 = puVar6[1];
        uVar13 = *puVar6;
        puVar6 = puVar6 + 4;
        uVar11 = uVar11 - 0x20;
        puVar3[-1] = *puVar2;
        puVar3[-2] = uVar12;
        puVar3[1] = uVar14;
        *puVar3 = uVar13;
        puVar3 = puVar3 + 4;
      } while (uVar11 != 0);
      puVar5 = puVar4;
      if (uVar9 == uVar10) goto LAB_005a50fc;
    }
    do {
      puVar7 = puVar8 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = *puVar8;
      puVar4 = puVar5;
      puVar8 = puVar7;
    } while (puVar7 != puVar1);
  }
LAB_005a50fc:
  param_1[3] = puVar5;
  return;
}


// ===== 005a5168  FUN_005a5168 =====

void FUN_005a5168(undefined8 *param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  ulong uVar3;
  void *pvVar4;
  
  puVar1 = (undefined1 *)param_1[2];
  if (0 < param_1[3] - (long)puVar1) {
    uVar3 = (param_1[3] - (long)puVar1) + 1;
    do {
      uVar3 = uVar3 - 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (1 < uVar3);
    puVar1 = (undefined1 *)param_1[2];
  }
  if (puVar1 != (undefined1 *)0x0) {
    param_1[3] = puVar1;
    operator_delete(puVar1);
  }
  plVar2 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  pvVar4 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar4 != (void *)0x0) {
    FUN_005a6a24(pvVar4);
    operator_delete(pvVar4);
    return;
  }
  return;
}


// ===== 005a51f8  FUN_005a51f8 =====

bool FUN_005a51f8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_007a0d24(*(undefined8 *)*param_2);
                    /* try { // try from 005a5220 to 005a5227 has its CatchHandler @ 005a5250 */
  iVar1 = FUN_007a1ea8(*(undefined8 *)*param_1,lVar2);
  if (lVar2 != 0) {
                    /* try { // try from 005a5230 to 005a5237 has its CatchHandler @ 005a524c */
    thunk_FUN_00778828(lVar2);
  }
  return iVar1 == 1;
}


// ===== 005a526c  FUN_005a526c =====

void FUN_005a526c(undefined8 *param_1,long *param_2)

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
                    /* try { // try from 005a52b4 to 005a52c3 has its CatchHandler @ 005a5330 */
    FUN_005a6bcc(param_1,puVar3,plVar4 + 4,plVar4 + 4);
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
                    /* try { // try from 005a5308 to 005a532f has its CatchHandler @ 005a5348 */
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
             "__x != nullptr","node shouldn\'t be null");
}


// ===== 005a534c  FUN_005a534c =====

/* WARNING: Removing unreachable block (ram,0x005a5394) */

void FUN_005a534c(undefined8 *param_1)

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
        pvVar2 = (void *)((long)pvVar2 + -0x18);
      } while (pvVar2 != pvVar3);
      pvVar1 = (void *)*param_1;
    }
    param_1[1] = pvVar3;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 005a53c8  FUN_005a53c8 =====

undefined4 FUN_005a53c8(long *param_1)

{
  return *(undefined4 *)(*param_1 + 0x10);
}


// ===== 005a53d4  FUN_005a53d4 =====

void FUN_005a53d4(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_00d25098;
  param_1[1] = 0;
  if (lVar1 != 0) {
                    /* try { // try from 005a53f8 to 005a53fb has its CatchHandler @ 005a5404 */
    (*(code *)param_1[2])();
  }
  return;
}


// ===== 005a5408  FUN_005a5408 =====

void FUN_005a5408(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_00d25098;
  param_1[1] = 0;
  if (lVar1 != 0) {
                    /* try { // try from 005a5430 to 005a5433 has its CatchHandler @ 005a5444 */
    (*(code *)param_1[2])();
  }
  operator_delete(param_1);
  return;
}


// ===== 005a5448  FUN_005a5448 =====

/* WARNING: Removing unreachable block (ram,0x005a5494) */

void FUN_005a5448(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x18;
    param_1[2] = lVar1;
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 005a54b0  FUN_005a54b0 =====

void FUN_005a54b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_004e8250("vector");
}


// ===== 005a54c4  FUN_005a54c4 =====

void FUN_005a54c4(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_thunk_FUN_007a71fc_00d51eb0;
  *param_1 = param_2;
  param_1[1] = puVar1;
                    /* try { // try from 005a54ec to 005a553f has its CatchHandler @ 005a5658 */
  uVar2 = FUN_005a567c(param_2);
  *(undefined4 *)(param_1 + 2) = uVar2;
  uVar2 = FUN_005a57c0(*param_1);
  *(undefined4 *)((long)param_1 + 0x14) = uVar2;
  uVar4 = FUN_007a0b5c(*param_1);
  param_1[3] = uVar4 & 0xffffffff;
  uVar4 = FUN_007a0bf4(*param_1);
  param_1[4] = uVar4 & 0xffffffff;
  FUN_007a0b50(*param_1);
  FUN_005a58ac(param_1 + 5);
                    /* try { // try from 005a5548 to 005a5553 has its CatchHandler @ 005a560c */
  FUN_007a0bd0(*param_1);
  FUN_005a58ac(param_1 + 8);
                    /* try { // try from 005a555c to 005a5567 has its CatchHandler @ 005a5604 */
  FUN_00796c20(*param_1);
  FUN_005a62a4(param_1 + 0xb);
                    /* try { // try from 005a5570 to 005a557b has its CatchHandler @ 005a55fc */
  FUN_00796c58(*param_1);
  FUN_005a62a4(param_1 + 0xf);
                    /* try { // try from 005a5584 to 005a558b has its CatchHandler @ 005a55ec */
  FUN_005a5af0(param_1 + 0x13,*param_1);
                    /* try { // try from 005a5590 to 005a55af has its CatchHandler @ 005a55f4 */
  iVar3 = FUN_00796b18(*param_1);
  *(bool *)(param_1 + 0x16) = iVar3 != 0;
  FUN_005a5e50(param_1 + 0x17,*param_1);
                    /* try { // try from 005a55b4 to 005a55cf has its CatchHandler @ 005a5614 */
  FUN_007a1358(*param_1);
  uVar5 = FUN_005a5fa8();
  param_1[0x1a] = uVar5;
  FUN_007a1370(*param_1);
  uVar5 = FUN_005a5fa8();
  param_1[0x1b] = uVar5;
  return;
}


// ===== 005a567c  FUN_005a567c =====

undefined4 FUN_005a567c(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar2 = FUN_007a0d24();
                    /* try { // try from 005a5694 to 005a5697 has its CatchHandler @ 005a57a4 */
  iVar1 = FUN_00778dec();
  if (iVar1 == 6) {
    uVar4 = 4;
  }
  else if (iVar1 == 0x198) {
                    /* try { // try from 005a56bc to 005a56c3 has its CatchHandler @ 005a579c */
    iVar1 = FUN_00778a54(lVar2);
    if (iVar1 == 0x100) {
      uVar4 = 0;
    }
    else if (iVar1 == 0x180) {
      uVar4 = 1;
    }
    else {
      if (iVar1 != 0x209) {
        uVar3 = FUN_0054f64c(0x10);
                    /* try { // try from 005a5764 to 005a576f has its CatchHandler @ 005a5788 */
        FUN_0054723c(uVar3,"Unknown curve");
                    /* try { // try from 005a5770 to 005a5787 has its CatchHandler @ 005a579c */
                    /* WARNING: Subroutine does not return */
        FUN_0054f748(uVar3,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
      }
      uVar4 = 2;
    }
  }
  else {
    if (iVar1 != 0x3b5) {
      uVar3 = FUN_0054f64c(0x10);
                    /* try { // try from 005a5730 to 005a573b has its CatchHandler @ 005a578c */
      FUN_0054723c(uVar3,"Unsupported public key algorithm");
                    /* try { // try from 005a573c to 005a5753 has its CatchHandler @ 005a57a4 */
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar3,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
    }
    uVar4 = 3;
  }
  if (lVar2 != 0) {
                    /* try { // try from 005a5708 to 005a570f has its CatchHandler @ 005a57a0 */
    thunk_FUN_00778828(lVar2);
  }
  return uVar4;
}


// ===== 005a57c0  FUN_005a57c0 =====

undefined8 FUN_005a57c0(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_007a7b0c();
  if (iVar1 < 0x31a) {
    if (iVar1 < 0x29d) {
      if ((iVar1 != 0x41) && (iVar1 != 0x29c)) {
LAB_005a5868:
        uVar2 = FUN_0054f64c(0x10);
                    /* try { // try from 005a5874 to 005a587f has its CatchHandler @ 005a5898 */
        FUN_0054723c(uVar2,"Unsupported signature algorithm");
                    /* WARNING: Subroutine does not return */
        FUN_0054f748(uVar2,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
      }
      uVar2 = 4;
    }
    else if (iVar1 == 0x29d) {
      uVar2 = 5;
    }
    else {
      if (iVar1 != 0x29e) goto LAB_005a5868;
      uVar2 = 6;
    }
  }
  else if (iVar1 < 0x31c) {
    if (iVar1 == 0x31a) {
      uVar2 = 0;
    }
    else {
      if (iVar1 != 0x31b) goto LAB_005a5868;
      uVar2 = 1;
    }
  }
  else if (iVar1 == 0x31c) {
    uVar2 = 2;
  }
  else {
    if (iVar1 != 0x3b5) goto LAB_005a5868;
    uVar2 = 3;
  }
  return uVar2;
}


// ===== 005a58ac  FUN_005a58ac =====

void FUN_005a58ac(long *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  void *local_80 [2];
  char local_69;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_2 == 0) {
    uVar8 = FUN_0054f64c(0x10);
                    /* try { // try from 005a5a58 to 005a5a5f has its CatchHandler @ 005a5a88 */
    FUN_005aee88(uVar8);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar8,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
    }
  }
  else {
    param_1[2] = 0;
    plVar11 = param_1 + 1;
    *plVar11 = 0;
    *param_1 = (long)plVar11;
                    /* try { // try from 005a58f4 to 005a58f7 has its CatchHandler @ 005a5a98 */
    iVar3 = FUN_007a1530();
    if (0 < iVar3) {
      do {
                    /* try { // try from 005a5944 to 005a594f has its CatchHandler @ 005a5ac4 */
        lVar5 = FUN_007a14d4(param_2,iVar3 + -1);
        if (lVar5 != 0) {
                    /* try { // try from 005a5958 to 005a595f has its CatchHandler @ 005a5abc */
          lVar6 = FUN_007a1a6c(lVar5);
                    /* try { // try from 005a5960 to 005a596b has its CatchHandler @ 005a5ac0 */
          lVar5 = FUN_007a14c0(lVar5);
          if ((lVar6 != 0) && (lVar5 != 0)) {
                    /* try { // try from 005a5978 to 005a597f has its CatchHandler @ 005a5a9c */
            iVar4 = FUN_0078d994(lVar6);
                    /* try { // try from 005a5980 to 005a598f has its CatchHandler @ 005a5aa0 */
            FUN_005a61e4(local_80,lVar5);
            plVar10 = (long *)*plVar11;
            plVar9 = plVar11;
            while (plVar12 = plVar9, plVar10 != (long *)0x0) {
              while (plVar7 = plVar10, plVar9 = plVar7, (int)plVar7[4] <= iVar4) {
                if (iVar4 <= (int)plVar7[4]) goto LAB_005a5a2c;
                plVar10 = (long *)plVar7[1];
                if ((long *)plVar7[1] == (long *)0x0) {
                  plVar12 = plVar7 + 1;
                  goto LAB_005a59d4;
                }
              }
              plVar10 = (long *)*plVar7;
            }
LAB_005a59d4:
                    /* try { // try from 005a59d4 to 005a5a37 has its CatchHandler @ 005a5aa4 */
            plVar7 = (long *)operator_new(0x40);
            *(int *)(plVar7 + 4) = iVar4;
            plVar7[6] = 0;
            plVar7[7] = 0;
            plVar7[5] = 0;
            *plVar7 = 0;
            plVar7[1] = 0;
            plVar7[2] = (long)plVar9;
            *plVar12 = (long)plVar7;
            plVar9 = plVar7;
            if (*(long *)*param_1 != 0) {
              *param_1 = *(long *)*param_1;
              plVar9 = (long *)*plVar12;
            }
            FUN_0041dcd0(param_1[1],plVar9);
            param_1[2] = param_1[2] + 1;
LAB_005a5a2c:
            FUN_00411268(plVar7 + 5,local_80);
            if (local_69 < '\0') {
              operator_delete(local_80[0]);
            }
          }
        }
        bVar1 = 1 < iVar3;
        iVar3 = iVar3 + -1;
      } while (bVar1);
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a5af0  FUN_005a5af0 =====

void FUN_005a5af0(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  undefined8 *puVar6;
  long lVar7;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  void *local_60 [2];
  char local_49;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
                    /* try { // try from 005a5b20 to 005a5b2f has its CatchHandler @ 005a5d9c */
  lVar3 = FUN_007a0de4(param_2,0x55,0,0);
                    /* try { // try from 005a5b30 to 005a5b37 has its CatchHandler @ 005a5d98 */
  lVar4 = FUN_00795280();
  if (lVar4 != 0) {
    lVar7 = 0;
    do {
                    /* try { // try from 005a5b68 to 005a5b73 has its CatchHandler @ 005a5dcc */
      piVar5 = (int *)FUN_007952e0(lVar3,lVar7);
      if (*piVar5 == 1) {
                    /* try { // try from 005a5bdc to 005a5be3 has its CatchHandler @ 005a5db4 */
        FUN_005a61e4(local_60,*(undefined8 *)(piVar5 + 2));
                    /* try { // try from 005a5be4 to 005a5bef has its CatchHandler @ 005a5db0 */
        FUN_004c55b4(&local_78,local_60);
        puVar1 = (undefined8 *)param_1[1];
        if (puVar1 < (undefined8 *)param_1[2]) {
          if (puVar1 == (undefined8 *)0x0) {
            if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 005a5d6c to 005a5d93 has its CatchHandler @ 005a5dd8 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                         ,0x23,"__location != nullptr","null pointer given to construct_at");
            }
            goto LAB_005a5e40;
          }
          *(undefined1 *)(puVar1 + 3) = 0;
          puVar1[2] = local_68;
          puVar6 = puVar1 + 4;
          puVar1[1] = uStack_70;
          *puVar1 = local_78;
          uStack_70 = 0;
          local_68 = 0;
          local_78 = (void *)0x0;
          param_1[1] = (long)puVar6;
        }
        else {
                    /* try { // try from 005a5c48 to 005a5c53 has its CatchHandler @ 005a5da8 */
          FUN_005a676c(param_1,&local_78);
          puVar6 = (undefined8 *)param_1[1];
        }
        if ((undefined8 *)*param_1 == puVar6) {
          if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 005a5cc4 to 005a5ceb has its CatchHandler @ 005a5e4c */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                       "!empty()","back() called on an empty vector");
          }
          goto LAB_005a5e40;
        }
LAB_005a5c64:
        if (local_68 < 0) {
          operator_delete(local_78);
        }
        if (local_49 < '\0') {
          operator_delete(local_60[0]);
        }
      }
      else if (*piVar5 == 2) {
                    /* try { // try from 005a5b8c to 005a5b93 has its CatchHandler @ 005a5dc8 */
        FUN_005a61e4(local_60,*(undefined8 *)(piVar5 + 2));
                    /* try { // try from 005a5b94 to 005a5b9f has its CatchHandler @ 005a5db8 */
        FUN_004c55b4(&local_78,local_60);
        puVar1 = (undefined8 *)param_1[1];
        if (puVar1 < (undefined8 *)param_1[2]) {
          if (puVar1 == (undefined8 *)0x0) {
            if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 005a5d34 to 005a5d5b has its CatchHandler @ 005a5ddc */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                         ,0x23,"__location != nullptr","null pointer given to construct_at");
            }
            goto LAB_005a5e40;
          }
          *(undefined1 *)(puVar1 + 3) = 1;
          puVar1[2] = local_68;
          puVar6 = puVar1 + 4;
          puVar1[1] = uStack_70;
          *puVar1 = local_78;
          uStack_70 = 0;
          local_68 = 0;
          local_78 = (void *)0x0;
          param_1[1] = (long)puVar6;
        }
        else {
                    /* try { // try from 005a5c28 to 005a5c33 has its CatchHandler @ 005a5da4 */
          FUN_005a63d4(param_1,&local_78);
          puVar6 = (undefined8 *)param_1[1];
        }
        if ((undefined8 *)*param_1 != puVar6) goto LAB_005a5c64;
        if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 005a5cfc to 005a5d23 has its CatchHandler @ 005a5e48 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        goto LAB_005a5e40;
      }
      lVar7 = lVar7 + 1;
    } while (lVar4 != lVar7);
  }
  if (lVar3 != 0) {
                    /* try { // try from 005a5c84 to 005a5c8b has its CatchHandler @ 005a5d94 */
    FUN_005aee70(lVar3);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_005a5e40:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a5e50  FUN_005a5e50 =====

void FUN_005a5e50(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong __n;
  void *__s;
  undefined4 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_0072abc4();
  __n = FUN_0072a5a0();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (__n == 0) {
    __s = (void *)0x0;
  }
  else {
    if ((long)__n < 0) {
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(param_1);
      }
      goto LAB_005a5fa4;
    }
    __s = operator_new(__n);
    *param_1 = __s;
    param_1[2] = (long)__s + __n;
    memset(__s,0,__n);
    param_1[1] = (long)__s + __n;
  }
  local_5c = 0;
                    /* try { // try from 005a5ed4 to 005a5ee7 has its CatchHandler @ 005a5f80 */
  iVar2 = FUN_007a1f8c(param_2,uVar3,__s,&local_5c);
  if (iVar2 == 1) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
  else {
    uVar3 = FUN_0054f64c(0x10);
                    /* try { // try from 005a5f28 to 005a5f2f has its CatchHandler @ 005a5f70 */
    FUN_005aee88(uVar3);
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 005a5f40 to 005a5f57 has its CatchHandler @ 005a5f80 */
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar3,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
    }
  }
LAB_005a5fa4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a5fa8  FUN_005a5fa8 =====

long FUN_005a5fa8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = 0;
  uVar4 = FUN_005183a4(&local_40);
  lVar5 = FUN_00768958(0,uVar4);
  if (lVar5 == 0) {
    uVar4 = FUN_0054f64c(0x10);
                    /* try { // try from 005a6060 to 005a6067 has its CatchHandler @ 005a60dc */
    FUN_005aee88(uVar4);
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar4,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
    }
  }
  else {
    local_48 = 0;
                    /* try { // try from 005a5ff0 to 005a6003 has its CatchHandler @ 005a60f0 */
    iVar3 = FUN_00768a00(&local_48,(long)&local_48 + 4,lVar5,param_1);
    if (iVar3 == 1) {
      iVar3 = (int)local_48;
      lVar1 = (long)(int)local_40;
                    /* try { // try from 005a6010 to 005a6017 has its CatchHandler @ 005a60ec */
      thunk_FUN_00768948(lVar5);
      if (*(long *)(lVar2 + 0x28) == local_38) {
        return (lVar1 + (long)iVar3 * 0x15180) * 1000000;
      }
    }
    else {
      uVar4 = FUN_0054f64c(0x10);
                    /* try { // try from 005a609c to 005a60a3 has its CatchHandler @ 005a60cc */
      FUN_005aee88(uVar4);
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 005a60b4 to 005a60cb has its CatchHandler @ 005a60f0 */
                    /* WARNING: Subroutine does not return */
        FUN_0054f748(uVar4,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a611c  FUN_005a611c =====

void FUN_005a611c(undefined8 *param_1)

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
        pvVar2 = (void *)((long)pvVar4 + -0x20);
        if ((ulong)*(byte *)((long)pvVar4 + -8) != 0xff) {
                    /* try { // try from 005a6194 to 005a619f has its CatchHandler @ 005a61e0 */
          (*(code *)(&PTR_FUN_00d250d0)[*(byte *)((long)pvVar4 + -8)])(auStack_60,pvVar2);
        }
        *(undefined1 *)((long)pvVar4 + -8) = 0xff;
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


// ===== 005a61e4  FUN_005a61e4 =====

void FUN_005a61e4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_0076978c();
  iVar2 = FUN_00769780(param_2);
  FUN_004a3cf4(param_1,uVar3);
  uVar1 = *(ulong *)(param_1 + 8);
  if (-1 < (char)*(byte *)(param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_1 + 0x17);
  }
  if (uVar1 == (long)iVar2) {
    return;
  }
  uVar3 = FUN_0054f64c(0x10);
                    /* try { // try from 005a6254 to 005a625f has its CatchHandler @ 005a6280 */
  FUN_0054723c(uVar3,"Malformed ASN.1 string");
                    /* try { // try from 005a6260 to 005a6277 has its CatchHandler @ 005a6278 */
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar3,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
}


// ===== 005a62a4  FUN_005a62a4 =====

void FUN_005a62a4(undefined8 *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  void *__dest;
  ulong __n;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_2 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    pvVar3 = (void *)FUN_0076978c();
    iVar2 = FUN_00769780(param_2);
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    if (iVar2 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      *(undefined1 *)(param_1 + 3) = 1;
    }
    else {
      __n = (ulong)iVar2;
      if (iVar2 < 0) {
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_004f04ec(&local_60);
        }
        goto LAB_005a63d0;
      }
      __dest = operator_new(__n);
      memcpy(__dest,pvVar3,__n);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
                    /* try { // try from 005a6318 to 005a631f has its CatchHandler @ 005a63ac */
      pvVar3 = operator_new(__n);
      *param_1 = pvVar3;
      param_1[2] = (long)pvVar3 + __n;
      memcpy(pvVar3,__dest,__n);
      param_1[1] = (long)pvVar3 + __n;
      *(undefined1 *)(param_1 + 3) = 1;
      operator_delete(__dest);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_005a63d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a63d4  FUN_005a63d4 =====

void FUN_005a63d4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  void *pvVar11;
  long lVar12;
  void *pvVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar12 = param_1[1] - *param_1 >> 5;
  uVar1 = lVar12 + 1;
  if (uVar1 >> 0x3b == 0) {
    uVar8 = param_1[2] - *param_1;
    uVar10 = uVar8 >> 4;
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar8) {
      uVar10 = 0x7ffffffffffffff;
    }
    if (uVar10 != 0) {
      if (uVar10 >> 0x3b == 0) {
        pvVar6 = operator_new(uVar10 * 0x20);
        uVar15 = param_2[1];
        uVar14 = *param_2;
        *param_2 = 0;
        param_2[1] = 0;
        uVar9 = param_2[2];
        param_2[2] = 0;
        puVar7 = (undefined8 *)((long)pvVar6 + lVar12 * 0x20);
        pvVar3 = (void *)*param_1;
        pvVar11 = (void *)param_1[1];
        puVar7[2] = uVar9;
        puVar2 = puVar7 + 4;
        *(undefined1 *)(puVar7 + 3) = 1;
        puVar7[1] = uVar15;
        *puVar7 = uVar14;
        pvVar13 = pvVar11;
        puVar5 = puVar7;
        if (pvVar11 != pvVar3) {
          do {
            puVar7 = puVar5 + -4;
            *(undefined1 *)puVar7 = 0;
            pvVar13 = (void *)((long)pvVar11 + -0x20);
            *(undefined1 *)(puVar5 + -1) = 0xff;
            if ((ulong)*(byte *)((long)pvVar11 + -8) != 0xff) {
                    /* try { // try from 005a64e4 to 005a64f3 has its CatchHandler @ 005a663c */
              (*(code *)(&PTR_FUN_00d250e0)[*(byte *)((long)pvVar11 + -8)])
                        (auStack_60,puVar7,pvVar13);
              *(undefined1 *)(puVar5 + -1) = *(undefined1 *)((long)pvVar11 + -8);
            }
            pvVar11 = pvVar13;
            puVar5 = puVar7;
          } while (pvVar13 != pvVar3);
          pvVar11 = (void *)param_1[1];
          pvVar13 = (void *)*param_1;
        }
        *param_1 = (long)puVar7;
        param_1[1] = (long)puVar2;
        param_1[2] = (long)((long)pvVar6 + uVar10 * 0x20);
        pvVar3 = pvVar11;
        while (pvVar11 != pvVar13) {
          if ((ulong)*(byte *)((long)pvVar11 + -8) != 0xff) {
                    /* try { // try from 005a6550 to 005a655b has its CatchHandler @ 005a6638 */
            (*(code *)(&PTR_FUN_00d250d0)[*(byte *)((long)pvVar11 + -8)])
                      (auStack_60,(void *)((long)pvVar11 + -0x20));
          }
          *(undefined1 *)((long)pvVar11 + -8) = 0xff;
          pvVar11 = (void *)((long)pvVar11 + -0x20);
          pvVar3 = pvVar13;
        }
        if (pvVar3 != (void *)0x0) {
          operator_delete(pvVar3);
        }
        if (*(long *)(lVar4 + 0x28) == local_58) {
          return;
        }
      }
      else if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      goto LAB_005a6634;
    }
  }
  else {
    if (*(long *)(lVar4 + 0x28) != local_58) goto LAB_005a6634;
    FUN_005a66f8(param_1);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* try { // try from 005a65d4 to 005a65fb has its CatchHandler @ 005a6610 */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
LAB_005a6634:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a6640  FUN_005a6640 =====

void FUN_005a6640(undefined8 *param_1)

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
    lVar5 = lVar4 + -0x20;
    param_1[2] = lVar5;
    if ((ulong)bVar2 != 0xff) {
                    /* try { // try from 005a66ac to 005a66b3 has its CatchHandler @ 005a66f4 */
      (*(code *)(&PTR_FUN_00d250d0)[bVar2])(auStack_50);
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


// ===== 005a66f8  FUN_005a66f8 =====

void FUN_005a66f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_004e8250("vector");
}


// ===== 005a670c  FUN_005a670c =====

void FUN_005a670c(undefined8 param_1,undefined8 *param_2)

{
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    return;
  }
  operator_delete((void *)*param_2);
  return;
}


// ===== 005a6720  FUN_005a6720 =====

void FUN_005a6720(undefined8 param_1,undefined8 *param_2)

{
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    return;
  }
  operator_delete((void *)*param_2);
  return;
}


// ===== 005a6734  FUN_005a6734 =====

void FUN_005a6734(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_2[2] = param_3[2];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  return;
}


// ===== 005a6750  FUN_005a6750 =====

void FUN_005a6750(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_2[2] = param_3[2];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  return;
}


// ===== 005a676c  FUN_005a676c =====

void FUN_005a676c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  void *pvVar11;
  long lVar12;
  void *pvVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar12 = param_1[1] - *param_1 >> 5;
  uVar1 = lVar12 + 1;
  if (uVar1 >> 0x3b == 0) {
    uVar8 = param_1[2] - *param_1;
    uVar10 = uVar8 >> 4;
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar8) {
      uVar10 = 0x7ffffffffffffff;
    }
    if (uVar10 != 0) {
      if (uVar10 >> 0x3b == 0) {
        pvVar6 = operator_new(uVar10 * 0x20);
        uVar15 = param_2[1];
        uVar14 = *param_2;
        *param_2 = 0;
        param_2[1] = 0;
        uVar9 = param_2[2];
        param_2[2] = 0;
        puVar7 = (undefined8 *)((long)pvVar6 + lVar12 * 0x20);
        pvVar3 = (void *)*param_1;
        pvVar11 = (void *)param_1[1];
        puVar7[2] = uVar9;
        puVar2 = puVar7 + 4;
        puVar7[1] = uVar15;
        *puVar7 = uVar14;
        *(undefined1 *)(puVar7 + 3) = 0;
        pvVar13 = pvVar11;
        puVar5 = puVar7;
        if (pvVar11 != pvVar3) {
          do {
            puVar7 = puVar5 + -4;
            *(undefined1 *)puVar7 = 0;
            pvVar13 = (void *)((long)pvVar11 + -0x20);
            *(undefined1 *)(puVar5 + -1) = 0xff;
            if ((ulong)*(byte *)((long)pvVar11 + -8) != 0xff) {
                    /* try { // try from 005a6878 to 005a6887 has its CatchHandler @ 005a69d0 */
              (*(code *)(&PTR_FUN_00d250e0)[*(byte *)((long)pvVar11 + -8)])
                        (auStack_60,puVar7,pvVar13);
              *(undefined1 *)(puVar5 + -1) = *(undefined1 *)((long)pvVar11 + -8);
            }
            pvVar11 = pvVar13;
            puVar5 = puVar7;
          } while (pvVar13 != pvVar3);
          pvVar11 = (void *)param_1[1];
          pvVar13 = (void *)*param_1;
        }
        *param_1 = (long)puVar7;
        param_1[1] = (long)puVar2;
        param_1[2] = (long)((long)pvVar6 + uVar10 * 0x20);
        pvVar3 = pvVar11;
        while (pvVar11 != pvVar13) {
          if ((ulong)*(byte *)((long)pvVar11 + -8) != 0xff) {
                    /* try { // try from 005a68e4 to 005a68ef has its CatchHandler @ 005a69cc */
            (*(code *)(&PTR_FUN_00d250d0)[*(byte *)((long)pvVar11 + -8)])
                      (auStack_60,(void *)((long)pvVar11 + -0x20));
          }
          *(undefined1 *)((long)pvVar11 + -8) = 0xff;
          pvVar11 = (void *)((long)pvVar11 + -0x20);
          pvVar3 = pvVar13;
        }
        if (pvVar3 != (void *)0x0) {
          operator_delete(pvVar3);
        }
        if (*(long *)(lVar4 + 0x28) == local_58) {
          return;
        }
      }
      else if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      goto LAB_005a69c8;
    }
  }
  else {
    if (*(long *)(lVar4 + 0x28) != local_58) goto LAB_005a69c8;
    FUN_005a66f8(param_1);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* try { // try from 005a6968 to 005a698f has its CatchHandler @ 005a69a4 */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
LAB_005a69c8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a69d4  FUN_005a69d4 =====

void FUN_005a69d4(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_005a69d4(param_1,*param_2);
    FUN_005a69d4(param_1,param_2[1]);
    if (*(char *)((long)param_2 + 0x3f) < '\0') {
      operator_delete((void *)param_2[5]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}


// ===== 005a6a24  FUN_005a6a24 =====

void FUN_005a6a24(long *param_1)

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
  puVar2 = (undefined1 *)param_1[0x17];
  if (0 < param_1[0x18] - (long)puVar2) {
    uVar4 = (param_1[0x18] - (long)puVar2) + 1;
    do {
      uVar4 = uVar4 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (1 < uVar4);
    puVar2 = (undefined1 *)param_1[0x17];
  }
  if (puVar2 != (undefined1 *)0x0) {
    param_1[0x18] = (long)puVar2;
    operator_delete(puVar2);
  }
  pvVar6 = (void *)param_1[0x13];
  if (pvVar6 != (void *)0x0) {
    pvVar7 = (void *)param_1[0x14];
    pvVar5 = pvVar6;
    if (pvVar7 != pvVar6) {
      do {
        pvVar5 = (void *)((long)pvVar7 + -0x20);
        if ((ulong)*(byte *)((long)pvVar7 + -8) != 0xff) {
                    /* try { // try from 005a6ad4 to 005a6adf has its CatchHandler @ 005a6bc8 */
          (*(code *)(&PTR_FUN_00d250d0)[*(byte *)((long)pvVar7 + -8)])(auStack_60,pvVar5);
        }
        *(undefined1 *)((long)pvVar7 + -8) = 0xff;
        pvVar7 = pvVar5;
      } while (pvVar5 != pvVar6);
      pvVar5 = (void *)param_1[0x13];
    }
    param_1[0x14] = (long)pvVar6;
    operator_delete(pvVar5);
  }
  if ((char)param_1[0x12] != '\0') {
    puVar2 = (undefined1 *)param_1[0xf];
    if (0 < param_1[0x10] - (long)puVar2) {
      uVar4 = (param_1[0x10] - (long)puVar2) + 1;
      do {
        uVar4 = uVar4 - 1;
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      } while (1 < uVar4);
      puVar2 = (undefined1 *)param_1[0xf];
    }
    if (puVar2 != (undefined1 *)0x0) {
      param_1[0x10] = (long)puVar2;
      operator_delete(puVar2);
    }
  }
  if ((char)param_1[0xe] != '\0') {
    puVar2 = (undefined1 *)param_1[0xb];
    if (0 < param_1[0xc] - (long)puVar2) {
      uVar4 = (param_1[0xc] - (long)puVar2) + 1;
      do {
        uVar4 = uVar4 - 1;
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      } while (1 < uVar4);
      puVar2 = (undefined1 *)param_1[0xb];
    }
    if (puVar2 != (undefined1 *)0x0) {
      param_1[0xc] = (long)puVar2;
      operator_delete(puVar2);
    }
  }
  FUN_005a69d4(param_1 + 8,param_1[9]);
  FUN_005a69d4(param_1 + 5,param_1[6]);
  lVar3 = *param_1;
  *param_1 = 0;
  if (lVar3 != 0) {
                    /* try { // try from 005a6b90 to 005a6b93 has its CatchHandler @ 005a6bc4 */
    (*(code *)param_1[1])();
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 005a6bcc  FUN_005a6bcc =====

undefined8 * FUN_005a6bcc(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  puVar2 = (undefined8 *)FUN_005a6cd0(param_1,param_2,&local_50,auStack_58,param_3);
  puVar5 = (undefined8 *)*puVar2;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(0x40);
    *(undefined4 *)(puVar5 + 4) = *param_4;
                    /* try { // try from 005a6c34 to 005a6c3b has its CatchHandler @ 005a6ca8 */
    FUN_004c55b4(puVar5 + 5,param_4 + 2);
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


// ===== 005a6cd0  FUN_005a6cd0 =====

long * FUN_005a6cd0(undefined8 *param_1,long *param_2,long *param_3,long *param_4,int *param_5)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar5 = param_1 + 1;
  if (plVar5 != param_2) {
    iVar1 = *param_5;
    if ((int)param_2[4] <= iVar1) {
      if (iVar1 <= (int)param_2[4]) {
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
      if ((plVar4 != plVar5) && ((int)plVar4[4] <= iVar1)) {
        plVar6 = (long *)*plVar5;
        plVar8 = plVar5;
        while (plVar6 != (long *)0x0) {
          while (plVar8 = plVar6, iVar1 < (int)plVar8[4]) {
            plVar5 = plVar8;
            plVar6 = (long *)*plVar8;
            if ((long *)*plVar8 == (long *)0x0) goto LAB_005a6e68;
          }
          if (iVar1 <= (int)plVar8[4]) break;
          plVar5 = plVar8 + 1;
          plVar6 = (long *)*plVar5;
        }
LAB_005a6e68:
        *param_3 = (long)plVar8;
        return plVar5;
      }
      if (plVar7 != (long *)0x0) {
        *param_3 = (long)plVar4;
        return plVar4;
      }
      goto LAB_005a6ddc;
    }
  }
  if ((long *)*param_1 == param_2) {
    plVar6 = (long *)*param_2;
    plVar8 = param_2;
  }
  else {
    if (param_2 == (long *)0x0) {
                    /* try { // try from 005a6e84 to 005a6eab has its CatchHandler @ 005a6eac */
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
    iVar1 = *param_5;
    if (iVar1 <= (int)plVar8[4]) {
      plVar6 = (long *)*plVar5;
      plVar8 = plVar5;
      while (plVar6 != (long *)0x0) {
        while (plVar8 = plVar6, iVar1 < (int)plVar8[4]) {
          plVar5 = plVar8;
          plVar6 = (long *)*plVar8;
          if ((long *)*plVar8 == (long *)0x0) goto LAB_005a6dcc;
        }
        if (iVar1 <= (int)plVar8[4]) break;
        plVar5 = plVar8 + 1;
        plVar6 = (long *)*plVar5;
      }
LAB_005a6dcc:
      *param_3 = (long)plVar8;
      return plVar5;
    }
  }
  plVar3 = param_2;
  if (plVar6 != (long *)0x0) {
    *param_3 = (long)plVar8;
    return plVar8 + 1;
  }
LAB_005a6ddc:
  *param_3 = (long)param_2;
  return plVar3;
}


// ===== 005a6eb0  FUN_005a6eb0 =====

void FUN_005a6eb0(long *param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  void *pvVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 *puVar14;
  
  puVar4 = PTR_thunk_FUN_007a71fc_00d51eb0;
  *param_1 = 0;
  param_1[1] = (long)puVar4;
                    /* try { // try from 005a6ee4 to 005a6f13 has its CatchHandler @ 005a716c */
  uVar5 = FUN_005a567c(*param_2);
  lVar10 = *param_2;
  *(undefined4 *)(param_1 + 2) = uVar5;
  uVar5 = FUN_005a57c0(lVar10);
  lVar20 = param_2[4];
  lVar10 = param_2[3];
  *(undefined4 *)((long)param_1 + 0x14) = uVar5;
  param_1[4] = lVar20;
  param_1[3] = lVar10;
  FUN_005a526c(param_1 + 5,param_2 + 5);
                    /* try { // try from 005a6f1c to 005a6f23 has its CatchHandler @ 005a7114 */
  FUN_005a526c(param_1 + 8,param_2 + 8);
                    /* try { // try from 005a6f2c to 005a6f33 has its CatchHandler @ 005a710c */
  FUN_005747fc(param_1 + 0xb,param_2 + 0xb);
                    /* try { // try from 005a6f3c to 005a6f43 has its CatchHandler @ 005a7104 */
  FUN_005747fc(param_1 + 0xf,param_2 + 0xf);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  plVar19 = param_1 + 0x15;
  *plVar19 = 0;
  uVar15 = param_2[0x14] - param_2[0x13];
  if (uVar15 != 0) {
    if ((long)uVar15 < 0) {
                    /* try { // try from 005a70d4 to 005a70db has its CatchHandler @ 005a7124 */
      FUN_005a66f8(param_1 + 0x13);
      goto LAB_005a70dc;
    }
                    /* try { // try from 005a6f68 to 005a6f6f has its CatchHandler @ 005a7124 */
    pvVar7 = operator_new(uVar15);
    param_1[0x13] = (long)pvVar7;
    param_1[0x14] = (long)pvVar7;
    param_1[0x15] = (long)((long)pvVar7 + ((long)uVar15 >> 5) * 0x20);
                    /* try { // try from 005a6f88 to 005a6f93 has its CatchHandler @ 005a70f8 */
    lVar10 = FUN_005a7190(plVar19,param_2[0x13],param_2[0x14],pvVar7);
    param_1[0x14] = lVar10;
  }
  lVar3 = param_2[0x16];
  plVar19 = param_1 + 0x17;
  *plVar19 = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  lVar10 = param_2[0x17];
  lVar20 = param_2[0x18];
  *(char *)(param_1 + 0x16) = (char)lVar3;
  uVar15 = lVar20 - lVar10;
  if (uVar15 == 0) goto LAB_005a7054;
  if ((long)uVar15 < 0) {
LAB_005a70dc:
                    /* try { // try from 005a70dc to 005a70e3 has its CatchHandler @ 005a711c */
                    /* WARNING: Subroutine does not return */
    FUN_004f04ec(plVar19);
  }
                    /* try { // try from 005a6fbc to 005a6fc3 has its CatchHandler @ 005a711c */
  puVar8 = (undefined1 *)operator_new(uVar15);
  param_1[0x17] = (long)puVar8;
  param_1[0x18] = (long)puVar8;
  param_1[0x19] = (long)(puVar8 + uVar15);
  puVar13 = (undefined1 *)param_2[0x17];
  puVar1 = (undefined1 *)param_2[0x18];
  puVar11 = puVar8;
  if (puVar13 != puVar1) {
    uVar15 = (long)puVar1 - (long)puVar13;
    puVar14 = puVar13;
    if ((0x1f < uVar15) && (0x1f < (ulong)((long)puVar8 - (long)puVar13))) {
      uVar16 = uVar15 & 0xffffffffffffffe0;
      puVar17 = (undefined8 *)(puVar8 + 0x10);
      puVar14 = puVar13 + uVar16;
      puVar8 = puVar8 + uVar16;
      puVar12 = (undefined8 *)(puVar13 + 0x10);
      uVar18 = uVar16;
      do {
        puVar2 = puVar12 + -1;
        uVar9 = puVar12[-2];
        uVar22 = puVar12[1];
        uVar21 = *puVar12;
        puVar12 = puVar12 + 4;
        uVar18 = uVar18 - 0x20;
        puVar17[-1] = *puVar2;
        puVar17[-2] = uVar9;
        puVar17[1] = uVar22;
        *puVar17 = uVar21;
        puVar17 = puVar17 + 4;
      } while (uVar18 != 0);
      puVar11 = puVar8;
      if (uVar15 == uVar16) goto LAB_005a7050;
    }
    do {
      puVar13 = puVar14 + 1;
      puVar11 = puVar8 + 1;
      *puVar8 = *puVar14;
      puVar8 = puVar11;
      puVar14 = puVar13;
    } while (puVar13 != puVar1);
  }
LAB_005a7050:
  param_1[0x18] = (long)puVar11;
LAB_005a7054:
  lVar10 = *param_2;
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
                    /* try { // try from 005a7068 to 005a706b has its CatchHandler @ 005a712c */
  iVar6 = FUN_007a7ae8(lVar10);
  if (iVar6 != 1) {
    uVar9 = FUN_0054f64c(0x10);
                    /* try { // try from 005a70b4 to 005a70bb has its CatchHandler @ 005a70e4 */
    FUN_005aee88(uVar9);
                    /* try { // try from 005a70bc to 005a70d3 has its CatchHandler @ 005a712c */
                    /* WARNING: Subroutine does not return */
    FUN_0054f748(uVar9,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
  }
  lVar10 = *param_1;
  *param_1 = *param_2;
  if (lVar10 != 0) {
                    /* try { // try from 005a7088 to 005a708b has its CatchHandler @ 005a70f4 */
    (*(code *)param_1[1])();
  }
  return;
}


// ===== 005a7190  FUN_005a7190 =====

long FUN_005a7190(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_2 != param_3) {
    lVar2 = param_4 + 0x20;
    do {
      param_4 = lVar2;
      if (param_4 + -0x20 == 0) {
        if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 005a727c to 005a72a3 has its CatchHandler @ 005a72dc */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        goto LAB_005a7338;
      }
      *(undefined1 *)(param_4 + -0x20) = 0;
      *(undefined1 *)(param_4 + -8) = 0xff;
      if ((ulong)*(byte *)(param_2 + 0x18) != 0xff) {
                    /* try { // try from 005a721c to 005a722b has its CatchHandler @ 005a72a4 */
        (*(code *)(&PTR_FUN_00d250f0)[*(byte *)(param_2 + 0x18)])
                  (auStack_60,param_4 + -0x20,param_2);
        *(undefined1 *)(param_4 + -8) = *(undefined1 *)(param_2 + 0x18);
      }
      param_2 = param_2 + 0x20;
      lVar2 = param_4 + 0x20;
    } while (param_2 != param_3);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return param_4;
  }
LAB_005a7338:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a7340  FUN_005a7340 =====

void FUN_005a7340(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = **(long **)(param_1 + 8);
  lVar2 = **(long **)(param_1 + 0x10);
  while (lVar2 != lVar3) {
    if ((ulong)*(byte *)(lVar2 + -8) != 0xff) {
                    /* try { // try from 005a73ac to 005a73b7 has its CatchHandler @ 005a73e8 */
      (*(code *)(&PTR_FUN_00d250d0)[*(byte *)(lVar2 + -8)])(auStack_50,lVar2 + -0x20);
    }
    *(undefined1 *)(lVar2 + -8) = 0xff;
    lVar2 = lVar2 + -0x20;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a73ec  FUN_005a73ec =====

void FUN_005a73ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004c55b4(param_2,param_3);
  return;
}


// ===== 005a73f8  FUN_005a73f8 =====

void FUN_005a73f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004c55b4(param_2,param_3);
  return;
}


// ===== 005a7404  FUN_005a7404 =====

void FUN_005a7404(long *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  void *__s;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    if ((long)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004f04ec(param_1);
    }
    __s = operator_new(param_3);
    *param_1 = (long)__s;
    param_1[2] = (long)__s + param_3;
    memset(__s,0,param_3);
    param_1[1] = (long)__s + param_3;
  }
  uVar1 = param_3;
  if (7 < param_3) {
    uVar1 = 8;
  }
  if (uVar1 != 0) {
    if ((ulong)(param_1[1] - *param_1) <= param_3 - 1) {
LAB_005a7584:
                    /* try { // try from 005a7584 to 005a758b has its CatchHandler @ 005a7594 */
                    /* WARNING: Subroutine does not return */
      FUN_0056a714(param_1);
    }
    *(char *)(*param_1 + (param_3 - 1)) = (char)param_2;
    if (uVar1 != 1) {
      if ((ulong)(param_1[1] - *param_1) <= param_3 - 2) goto LAB_005a7584;
      *(char *)(*param_1 + (param_3 - 2)) = (char)((ulong)param_2 >> 8);
      if (uVar1 != 2) {
        if ((ulong)(param_1[1] - *param_1) <= param_3 - 3) goto LAB_005a7584;
        *(char *)(*param_1 + (param_3 - 3)) = (char)((ulong)param_2 >> 0x10);
        if (uVar1 != 3) {
          if ((ulong)(param_1[1] - *param_1) <= param_3 - 4) goto LAB_005a7584;
          *(char *)(*param_1 + (param_3 - 4)) = (char)((ulong)param_2 >> 0x18);
          if (uVar1 != 4) {
            if ((ulong)(param_1[1] - *param_1) <= param_3 - 5) goto LAB_005a7584;
            *(char *)(*param_1 + (param_3 - 5)) = (char)((ulong)param_2 >> 0x20);
            if (uVar1 != 5) {
              if ((ulong)(param_1[1] - *param_1) <= param_3 - 6) goto LAB_005a7584;
              *(char *)(*param_1 + (param_3 - 6)) = (char)((ulong)param_2 >> 0x28);
              if (uVar1 != 6) {
                if ((ulong)(param_1[1] - *param_1) <= param_3 - 7) goto LAB_005a7584;
                *(char *)(*param_1 + (param_3 - 7)) = (char)((ulong)param_2 >> 0x30);
                if (uVar1 != 7) {
                  if ((ulong)(param_1[1] - *param_1) <= param_3 - 8) goto LAB_005a7584;
                  *(char *)(*param_1 + (param_3 - 8)) = (char)((ulong)param_2 >> 0x38);
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


// ===== 005a75a8  FUN_005a75a8 =====

void FUN_005a75a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005a75b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}


// ===== 005a75b8  FUN_005a75b8 =====

undefined * FUN_005a75b8(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (((DAT_00d63088 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d63088), iVar1 != 0)) {
                    /* try { // try from 005a75f8 to 005a761b has its CatchHandler @ 005a7648 */
    uVar2 = FUN_005aa2e4();
    uVar3 = thunk_FUN_005ac7d0();
    FUN_005a78a4(&DAT_00d63030,0x10,uVar2,uVar3);
    __cxa_atexit(FUN_005a7660,&DAT_00d63030,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d63088);
  }
  return &DAT_00d63030;
}


// ===== 005a7660  FUN_005a7660 =====

void FUN_005a7660(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  puVar1 = (undefined1 *)param_1[8];
  *param_1 = &PTR_FUN_00d25138;
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
    return;
  }
  return;
}


// ===== 005a76ac  FUN_005a76ac =====

undefined * FUN_005a76ac(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (((DAT_00d630e8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d630e8), iVar1 != 0)) {
                    /* try { // try from 005a76ec to 005a770f has its CatchHandler @ 005a773c */
    uVar2 = FUN_005aa394();
    uVar3 = thunk_FUN_005ac84c();
    FUN_005a78a4(&DAT_00d63090,0x11,uVar2,uVar3);
    __cxa_atexit(FUN_005a7660,&DAT_00d63090,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d630e8);
  }
  return &DAT_00d63090;
}


// ===== 005a7754  FUN_005a7754 =====

undefined * FUN_005a7754(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (((DAT_00d63148 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d63148), iVar1 != 0)) {
                    /* try { // try from 005a7794 to 005a77b7 has its CatchHandler @ 005a77e4 */
    uVar2 = FUN_005aa444();
    uVar3 = thunk_FUN_005ac8c8();
    FUN_005a78a4(&DAT_00d630f0,0x12,uVar2,uVar3);
    __cxa_atexit(FUN_005a7660,&DAT_00d630f0,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d63148);
  }
  return &DAT_00d630f0;
}


// ===== 005a77fc  FUN_005a77fc =====

undefined * FUN_005a77fc(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (((DAT_00d631a8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d631a8), iVar1 != 0)) {
                    /* try { // try from 005a783c to 005a785f has its CatchHandler @ 005a788c */
    uVar2 = FUN_005aa4f4();
    uVar3 = thunk_FUN_005ac7d0();
    FUN_005a78a4(&DAT_00d63150,0x20,uVar2,uVar3);
    __cxa_atexit(FUN_005a7660,&DAT_00d63150,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d631a8);
  }
  return &DAT_00d63150;
}


// ===== 005a78a4  FUN_005a78a4 =====

void FUN_005a78a4(undefined8 *param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  void *pvVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined1 *local_78;
  undefined1 *local_70;
  void *local_60;
  undefined8 uStack_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_005acc30(param_1,param_2,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_3 + 0x18),
               *(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x20));
  param_1[6] = param_3;
  param_1[7] = param_4;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = &PTR_FUN_00d25138;
  puVar8 = param_1 + 8;
  *puVar8 = 0;
  if (((DAT_00d631c8 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00d631c8), iVar4 != 0)) {
                    /* try { // try from 005a79d4 to 005a79e3 has its CatchHandler @ 005a7a48 */
    FUN_004a3cf4(&local_60,&DAT_001c81a1);
                    /* try { // try from 005a79e4 to 005a79f3 has its CatchHandler @ 005a7a30 */
    FUN_005a2680(&DAT_00d631b0,&local_60);
    if (local_50 < 0) {
      operator_delete(local_60);
    }
    __cxa_atexit(FUN_004e9f60,&DAT_00d631b0,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d631c8);
  }
                    /* try { // try from 005a7918 to 005a7923 has its CatchHandler @ 005a7a6c */
  FUN_005a7404(&local_78,param_2 & 0xffff,2);
                    /* try { // try from 005a7924 to 005a7937 has its CatchHandler @ 005a7a5c */
  FUN_005a228c(&local_60,&DAT_00d631b0,&local_78);
  pvVar5 = (void *)*puVar8;
  if (pvVar5 != (void *)0x0) {
    param_1[9] = pvVar5;
    operator_delete(pvVar5);
    *puVar8 = 0;
    param_1[9] = 0;
    param_1[10] = 0;
  }
  lVar3 = local_50;
  uVar2 = uStack_58;
  pvVar5 = local_60;
  uStack_58 = 0;
  local_50 = 0;
  local_60 = (void *)0x0;
  param_1[10] = lVar3;
  param_1[9] = uVar2;
  param_1[8] = pvVar5;
  if (0 < (long)local_70 - (long)local_78) {
    uVar7 = ((long)local_70 - (long)local_78) + 1;
    puVar6 = local_78;
    do {
      uVar7 = uVar7 - 1;
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    } while (1 < uVar7);
  }
  if (local_78 != (undefined1 *)0x0) {
    local_70 = local_78;
    operator_delete(local_78);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 005a7a94  FUN_005a7a94 =====

void FUN_005a7a94(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
  puVar2 = (undefined8 *)operator_new(0x10);
  *puVar2 = &PTR_FUN_00d25110;
  puVar2[1] = uVar1;
  return;
}


// ===== 005a7ad4  FUN_005a7ad4 =====

void FUN_005a7ad4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x18))
                    (*(long **)(param_1 + 0x30),param_1 + 0x40,param_2);
  puVar2 = (undefined8 *)operator_new(0x10);
  *puVar2 = &PTR_FUN_00d25110;
  puVar2[1] = uVar1;
  return;
}


// ===== 005a7b1c  FUN_005a7b1c =====

void FUN_005a7b1c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_00550ef4(param_3,&PTR_PTR_thunk_FUN_00552768_00d251c8,
                       &PTR_PTR_thunk_FUN_00552768_00d251d8,0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x005a7b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x30) + 0x20))(param_1,*(long **)(param_2 + 0x30),lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0054f5f0();
}


// ===== 005a7b78  FUN_005a7b78 =====

void FUN_005a7b78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005a7b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x30) + 0x28))();
  return;
}


// ===== 005a7b88  FUN_005a7b88 =====

void FUN_005a7b88(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_00550ef4(param_3,&PTR_PTR_thunk_FUN_00552768_00d25210,
                       &PTR_PTR_thunk_FUN_00552768_00d25198,0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x005a7be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x30) + 0x30))
              (param_1,*(long **)(param_2 + 0x30),*(undefined8 *)(lVar1 + 8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0054f5f0();
}


// ===== 005a7be8  FUN_005a7be8 =====

void FUN_005a7be8(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x38))();
  puVar2 = (undefined8 *)operator_new(0x10);
  *puVar2 = &PTR_FUN_00d25110;
  puVar2[1] = uVar1;
  return;
}


// ===== 005a7c28  FUN_005a7c28 =====

void FUN_005a7c28(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_60;
  undefined1 *local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00550ef4(param_3,&PTR_PTR_thunk_FUN_00552768_00d251c8,
                       &PTR_PTR_thunk_FUN_00552768_00d251d8,0);
  if (lVar2 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f5f0();
    }
  }
  else {
    plVar3 = (long *)(**(code **)(**(long **)(param_2 + 0x30) + 0x10))();
                    /* try { // try from 005a7c98 to 005a7c9b has its CatchHandler @ 005a7ef4 */
    plVar4 = (long *)(**(code **)(*plVar3 + 0x10))();
                    /* try { // try from 005a7cac to 005a7cbb has its CatchHandler @ 005a7ee8 */
    (**(code **)(**(long **)(param_2 + 0x30) + 0x40))
              (&local_60,*(long **)(param_2 + 0x30),plVar3,lVar2);
                    /* try { // try from 005a7cc8 to 005a7cd3 has its CatchHandler @ 005a7ee0 */
    (**(code **)(**(long **)(param_2 + 0x30) + 0x20))(&local_78,*(long **)(param_2 + 0x30),plVar4);
                    /* try { // try from 005a7ce0 to 005a7ceb has its CatchHandler @ 005a7eb4 */
    (**(code **)(**(long **)(param_2 + 0x30) + 0x20))(&local_90,*(long **)(param_2 + 0x30),lVar2);
                    /* try { // try from 005a7cec to 005a7cfb has its CatchHandler @ 005a7ea4 */
    FUN_005a228c(&local_a8,&local_78,&local_90);
                    /* try { // try from 005a7cfc to 005a7d0f has its CatchHandler @ 005a7e94 */
    FUN_005a7f24(&local_c0,param_2,&local_60,&local_a8);
                    /* try { // try from 005a7d10 to 005a7d1f has its CatchHandler @ 005a7e84 */
    FUN_005a8db4(param_1,&local_c0,&local_78);
    if (0 < (long)local_b8 - (long)local_c0) {
      uVar6 = ((long)local_b8 - (long)local_c0) + 1;
      puVar5 = local_c0;
      do {
        uVar6 = uVar6 - 1;
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
    if (local_c0 != (undefined1 *)0x0) {
      local_b8 = local_c0;
      operator_delete(local_c0);
    }
    if (0 < (long)local_a0 - (long)local_a8) {
      uVar6 = ((long)local_a0 - (long)local_a8) + 1;
      puVar5 = local_a8;
      do {
        uVar6 = uVar6 - 1;
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
    if (local_a8 != (undefined1 *)0x0) {
      local_a0 = local_a8;
      operator_delete(local_a8);
    }
    if (0 < (long)local_88 - (long)local_90) {
      uVar6 = ((long)local_88 - (long)local_90) + 1;
      puVar5 = local_90;
      do {
        uVar6 = uVar6 - 1;
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
    if (local_90 != (undefined1 *)0x0) {
      local_88 = local_90;
      operator_delete(local_90);
    }
    if (0 < (long)local_70 - (long)local_78) {
      uVar6 = ((long)local_70 - (long)local_78) + 1;
      puVar5 = local_78;
      do {
        uVar6 = uVar6 - 1;
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
    if (local_78 != (undefined1 *)0x0) {
      local_70 = local_78;
      operator_delete(local_78);
    }
    if (0 < (long)local_58 - (long)local_60) {
      uVar6 = ((long)local_58 - (long)local_60) + 1;
      puVar5 = local_60;
      do {
        uVar6 = uVar6 - 1;
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
    if (local_60 != (undefined1 *)0x0) {
      local_58 = local_60;
      operator_delete(local_60);
    }
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
    (**(code **)(*plVar3 + 8))(plVar3);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a7f24  FUN_005a7f24 =====

void FUN_005a7f24(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  char local_49;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((DAT_00d631e8 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d631e8), iVar2 != 0)) {
                    /* try { // try from 005a8068 to 005a8077 has its CatchHandler @ 005a8174 */
    FUN_004a3cf4(&local_60,"eae_prk");
                    /* try { // try from 005a8078 to 005a8087 has its CatchHandler @ 005a815c */
    FUN_005a2680(&DAT_00d631d0,&local_60);
    if (local_49 < '\0') {
      operator_delete(local_60);
    }
    __cxa_atexit(FUN_004e9f60,&DAT_00d631d0,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d631e8);
  }
  if (((DAT_00d63208 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d63208), iVar2 != 0)) {
                    /* try { // try from 005a80d4 to 005a80e3 has its CatchHandler @ 005a8148 */
    FUN_004a3cf4(&local_60,"shared_secret");
                    /* try { // try from 005a80e4 to 005a80f3 has its CatchHandler @ 005a8130 */
    FUN_005a2680(&DAT_00d631f0,&local_60);
    if (local_49 < '\0') {
      operator_delete(local_60);
    }
    __cxa_atexit(FUN_004e9f60,&DAT_00d631f0,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d63208);
  }
  local_78 = (undefined1 *)0x0;
  local_70 = (undefined1 *)0x0;
  local_68 = 0;
                    /* try { // try from 005a7f88 to 005a7fa3 has its CatchHandler @ 005a8194 */
  FUN_005acdb0(&local_60,*(undefined8 *)(param_2 + 0x38),param_2 + 0x40,&local_78,&DAT_00d631d0,
               param_3);
  if (0 < (long)local_70 - (long)local_78) {
    uVar4 = ((long)local_70 - (long)local_78) + 1;
    puVar3 = local_78;
    do {
      uVar4 = uVar4 - 1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (1 < uVar4);
  }
  if (local_78 != (undefined1 *)0x0) {
    local_70 = local_78;
    operator_delete(local_78);
  }
                    /* try { // try from 005a7fe0 to 005a7ffb has its CatchHandler @ 005a8188 */
  FUN_005ad04c(param_1,*(undefined8 *)(param_2 + 0x38),param_2 + 0x40,&local_60,&DAT_00d631f0,
               param_4,*(undefined8 *)(param_2 + 0x10));
  if (0 < (long)local_58 - (long)local_60) {
    uVar4 = ((long)local_58 - (long)local_60) + 1;
    puVar3 = local_60;
    do {
      uVar4 = uVar4 - 1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (1 < uVar4);
  }
  if (local_60 != (undefined1 *)0x0) {
    local_58 = local_60;
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 005a81bc  FUN_005a81bc =====

void FUN_005a81bc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_70;
  undefined1 *local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00550ef4(param_4,&PTR_PTR_thunk_FUN_00552768_00d25210,
                       &PTR_PTR_thunk_FUN_00552768_00d25198,0);
  if (lVar2 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f5f0();
    }
  }
  else {
    plVar3 = (long *)(**(code **)(**(long **)(lVar2 + 8) + 0x10))();
                    /* try { // try from 005a8238 to 005a823f has its CatchHandler @ 005a83ec */
    plVar4 = (long *)(**(code **)(**(long **)(param_2 + 0x30) + 0x28))
                               (*(long **)(param_2 + 0x30),param_3);
                    /* try { // try from 005a8254 to 005a825f has its CatchHandler @ 005a83d0 */
    (**(code **)(**(long **)(param_2 + 0x30) + 0x40))
              (&local_70,*(long **)(param_2 + 0x30),*(undefined8 *)(lVar2 + 8),plVar4);
                    /* try { // try from 005a826c to 005a8277 has its CatchHandler @ 005a83c0 */
    (**(code **)(**(long **)(param_2 + 0x30) + 0x20))(&local_88,*(long **)(param_2 + 0x30),plVar3);
                    /* try { // try from 005a8278 to 005a8287 has its CatchHandler @ 005a83b0 */
    FUN_005a228c(&local_a0,param_3,&local_88);
                    /* try { // try from 005a8288 to 005a829b has its CatchHandler @ 005a83a0 */
    FUN_005a7f24(param_1,param_2,&local_70,&local_a0);
    if (0 < (long)local_98 - (long)local_a0) {
      uVar6 = ((long)local_98 - (long)local_a0) + 1;
      puVar5 = local_a0;
      do {
        uVar6 = uVar6 - 1;
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
    if (local_a0 != (undefined1 *)0x0) {
      local_98 = local_a0;
      operator_delete(local_a0);
    }
    if (0 < (long)local_80 - (long)local_88) {
      uVar6 = ((long)local_80 - (long)local_88) + 1;
      puVar5 = local_88;
      do {
        uVar6 = uVar6 - 1;
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
    if (local_88 != (undefined1 *)0x0) {
      local_80 = local_88;
      operator_delete(local_88);
    }
    if (0 < (long)local_68 - (long)local_70) {
      uVar6 = ((long)local_68 - (long)local_70) + 1;
      puVar5 = local_70;
      do {
        uVar6 = uVar6 - 1;
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
    if (local_70 != (undefined1 *)0x0) {
      local_68 = local_70;
      operator_delete(local_70);
    }
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a8420  FUN_005a8420 =====

void FUN_005a8420(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined1 *local_128;
  undefined1 *local_120;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined1 *local_f8;
  undefined1 *local_f0;
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
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00550ef4(param_3,&PTR_PTR_thunk_FUN_00552768_00d251c8,
                       &PTR_PTR_thunk_FUN_00552768_00d251d8,0);
  if ((lVar2 == 0) ||
     (lVar3 = FUN_00550ef4(param_4,&PTR_PTR_thunk_FUN_00552768_00d25210,
                           &PTR_PTR_thunk_FUN_00552768_00d25198,0), lVar3 == 0)) {
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f5f0();
    }
  }
  else {
    plVar4 = (long *)(**(code **)(**(long **)(param_2 + 0x30) + 0x10))();
                    /* try { // try from 005a84c0 to 005a84c3 has its CatchHandler @ 005a88f0 */
    plVar5 = (long *)(**(code **)(*plVar4 + 0x10))();
                    /* try { // try from 005a84d4 to 005a84d7 has its CatchHandler @ 005a88e8 */
    plVar6 = (long *)(**(code **)(**(long **)(lVar3 + 8) + 0x10))();
                    /* try { // try from 005a84e8 to 005a84f7 has its CatchHandler @ 005a88dc */
    (**(code **)(**(long **)(param_2 + 0x30) + 0x40))
              (&local_80,*(long **)(param_2 + 0x30),plVar4,lVar2);
                    /* try { // try from 005a8508 to 005a8513 has its CatchHandler @ 005a88d4 */
    (**(code **)(**(long **)(param_2 + 0x30) + 0x40))
              (&local_98,*(long **)(param_2 + 0x30),*(undefined8 *)(lVar3 + 8),lVar2);
                    /* try { // try from 005a8514 to 005a8523 has its CatchHandler @ 005a88cc */
    FUN_005a228c(&local_b0,&local_80,&local_98);
                    /* try { // try from 005a8530 to 005a853b has its CatchHandler @ 005a88c4 */
    (**(code **)(**(long **)(param_2 + 0x30) + 0x20))(&local_c8,*(long **)(param_2 + 0x30),plVar5);
                    /* try { // try from 005a8548 to 005a8553 has its CatchHandler @ 005a88bc */
    (**(code **)(**(long **)(param_2 + 0x30) + 0x20))(&local_e0,*(long **)(param_2 + 0x30),lVar2);
                    /* try { // try from 005a8560 to 005a856b has its CatchHandler @ 005a88b4 */
    (**(code **)(**(long **)(param_2 + 0x30) + 0x20))(&local_f8,*(long **)(param_2 + 0x30),plVar6);
                    /* try { // try from 005a856c to 005a857b has its CatchHandler @ 005a882c */
    FUN_005a228c(&local_128,&local_c8,&local_e0);
                    /* try { // try from 005a857c to 005a858b has its CatchHandler @ 005a881c */
    FUN_005a228c(&local_110,&local_128,&local_f8);
    if (0 < (long)local_120 - (long)local_128) {
      uVar8 = ((long)local_120 - (long)local_128) + 1;
      puVar7 = local_128;
      do {
        uVar8 = uVar8 - 1;
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
    if (local_128 != (undefined1 *)0x0) {
      local_120 = local_128;
      operator_delete(local_128);
    }
                    /* try { // try from 005a85c0 to 005a85d3 has its CatchHandler @ 005a8810 */
    FUN_005a7f24(&local_128,param_2,&local_b0,&local_110);
                    /* try { // try from 005a85d4 to 005a85e3 has its CatchHandler @ 005a8800 */
    FUN_005a8db4(param_1,&local_128,&local_c8);
    if (0 < (long)local_120 - (long)local_128) {
      uVar8 = ((long)local_120 - (long)local_128) + 1;
      puVar7 = local_128;
      do {
        uVar8 = uVar8 - 1;
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
    if (local_128 != (undefined1 *)0x0) {
      local_120 = local_128;
      operator_delete(local_128);
    }
    if (0 < (long)local_108 - (long)local_110) {
      uVar8 = ((long)local_108 - (long)local_110) + 1;
      puVar7 = local_110;
      do {
        uVar8 = uVar8 - 1;
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
    if (local_110 != (undefined1 *)0x0) {
      local_108 = local_110;
      operator_delete(local_110);
    }
    if (0 < (long)local_f0 - (long)local_f8) {
      uVar8 = ((long)local_f0 - (long)local_f8) + 1;
      puVar7 = local_f8;
      do {
        uVar8 = uVar8 - 1;
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
    if (local_f8 != (undefined1 *)0x0) {
      local_f0 = local_f8;
      operator_delete(local_f8);
    }
    if (0 < (long)local_d8 - (long)local_e0) {
      uVar8 = ((long)local_d8 - (long)local_e0) + 1;
      puVar7 = local_e0;
      do {
        uVar8 = uVar8 - 1;
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
    if (local_e0 != (undefined1 *)0x0) {
      local_d8 = local_e0;
      operator_delete(local_e0);
    }
    if (0 < (long)local_c0 - (long)local_c8) {
      uVar8 = ((long)local_c0 - (long)local_c8) + 1;
      puVar7 = local_c8;
      do {
        uVar8 = uVar8 - 1;
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
    if (local_c8 != (undefined1 *)0x0) {
      local_c0 = local_c8;
      operator_delete(local_c8);
    }
    if (0 < (long)local_a8 - (long)local_b0) {
      uVar8 = ((long)local_a8 - (long)local_b0) + 1;
      puVar7 = local_b0;
      do {
        uVar8 = uVar8 - 1;
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
    if (local_b0 != (undefined1 *)0x0) {
      local_a8 = local_b0;
      operator_delete(local_b0);
    }
    if (0 < (long)local_90 - (long)local_98) {
      uVar8 = ((long)local_90 - (long)local_98) + 1;
      puVar7 = local_98;
      do {
        uVar8 = uVar8 - 1;
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
    if (local_98 != (undefined1 *)0x0) {
      local_90 = local_98;
      operator_delete(local_98);
    }
    if (0 < (long)local_78 - (long)local_80) {
      uVar8 = ((long)local_78 - (long)local_80) + 1;
      puVar7 = local_80;
      do {
        uVar8 = uVar8 - 1;
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
    if (local_80 != (undefined1 *)0x0) {
      local_78 = local_80;
      operator_delete(local_80);
    }
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    (**(code **)(*plVar4 + 8))(plVar4);
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a88f8  FUN_005a88f8 =====

void FUN_005a88f8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_70;
  undefined1 *local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00550ef4(param_4,&PTR_PTR_thunk_FUN_00552768_00d251c8,
                       &PTR_PTR_thunk_FUN_00552768_00d251d8,0);
  if ((lVar2 == 0) ||
     (lVar3 = FUN_00550ef4(param_5,&PTR_PTR_thunk_FUN_00552768_00d25210,
                           &PTR_PTR_thunk_FUN_00552768_00d25198,0), lVar3 == 0)) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f5f0();
    }
  }
  else {
    plVar4 = (long *)(**(code **)(**(long **)(param_2 + 0x30) + 0x28))
                               (*(long **)(param_2 + 0x30),param_3);
                    /* try { // try from 005a89a0 to 005a89a3 has its CatchHandler @ 005a8ce0 */
    plVar5 = (long *)(**(code **)(**(long **)(lVar3 + 8) + 0x10))();
                    /* try { // try from 005a89b8 to 005a89c3 has its CatchHandler @ 005a8cd4 */
    (**(code **)(**(long **)(param_2 + 0x30) + 0x40))
              (&local_70,*(long **)(param_2 + 0x30),*(undefined8 *)(lVar3 + 8),plVar4);
                    /* try { // try from 005a89d4 to 005a89df has its CatchHandler @ 005a8ccc */
    (**(code **)(**(long **)(param_2 + 0x30) + 0x40))
              (&local_88,*(long **)(param_2 + 0x30),*(undefined8 *)(lVar3 + 8),lVar2);
                    /* try { // try from 005a89e0 to 005a89ef has its CatchHandler @ 005a8cc4 */
    FUN_005a228c(&local_a0,&local_70,&local_88);
                    /* try { // try from 005a89fc to 005a8a07 has its CatchHandler @ 005a8cbc */
    (**(code **)(**(long **)(param_2 + 0x30) + 0x20))(&local_b8,*(long **)(param_2 + 0x30),plVar5);
                    /* try { // try from 005a8a14 to 005a8a1f has its CatchHandler @ 005a8c54 */
    (**(code **)(**(long **)(param_2 + 0x30) + 0x20))(&local_d0,*(long **)(param_2 + 0x30),lVar2);
                    /* try { // try from 005a8a20 to 005a8a2f has its CatchHandler @ 005a8c44 */
    FUN_005a228c(&local_100,param_3,&local_b8);
                    /* try { // try from 005a8a30 to 005a8a3f has its CatchHandler @ 005a8c34 */
    FUN_005a228c(&local_e8,&local_100,&local_d0);
    if (0 < (long)local_f8 - (long)local_100) {
      uVar7 = ((long)local_f8 - (long)local_100) + 1;
      puVar6 = local_100;
      do {
        uVar7 = uVar7 - 1;
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      } while (1 < uVar7);
    }
    if (local_100 != (undefined1 *)0x0) {
      local_f8 = local_100;
      operator_delete(local_100);
    }
                    /* try { // try from 005a8a74 to 005a8a87 has its CatchHandler @ 005a8c28 */
    FUN_005a7f24(param_1,param_2,&local_a0,&local_e8);
    if (0 < (long)local_e0 - (long)local_e8) {
      uVar7 = ((long)local_e0 - (long)local_e8) + 1;
      puVar6 = local_e8;
      do {
        uVar7 = uVar7 - 1;
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      } while (1 < uVar7);
    }
    if (local_e8 != (undefined1 *)0x0) {
      local_e0 = local_e8;
      operator_delete(local_e8);
    }
    if (0 < (long)local_c8 - (long)local_d0) {
      uVar7 = ((long)local_c8 - (long)local_d0) + 1;
      puVar6 = local_d0;
      do {
        uVar7 = uVar7 - 1;
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      } while (1 < uVar7);
    }
    if (local_d0 != (undefined1 *)0x0) {
      local_c8 = local_d0;
      operator_delete(local_d0);
    }
    if (0 < (long)local_b0 - (long)local_b8) {
      uVar7 = ((long)local_b0 - (long)local_b8) + 1;
      puVar6 = local_b8;
      do {
        uVar7 = uVar7 - 1;
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      } while (1 < uVar7);
    }
    if (local_b8 != (undefined1 *)0x0) {
      local_b0 = local_b8;
      operator_delete(local_b8);
    }
    if (0 < (long)local_98 - (long)local_a0) {
      uVar7 = ((long)local_98 - (long)local_a0) + 1;
      puVar6 = local_a0;
      do {
        uVar7 = uVar7 - 1;
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      } while (1 < uVar7);
    }
    if (local_a0 != (undefined1 *)0x0) {
      local_98 = local_a0;
      operator_delete(local_a0);
    }
    if (0 < (long)local_80 - (long)local_88) {
      uVar7 = ((long)local_80 - (long)local_88) + 1;
      puVar6 = local_88;
      do {
        uVar7 = uVar7 - 1;
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      } while (1 < uVar7);
    }
    if (local_88 != (undefined1 *)0x0) {
      local_80 = local_88;
      operator_delete(local_88);
    }
    if (0 < (long)local_68 - (long)local_70) {
      uVar7 = ((long)local_68 - (long)local_70) + 1;
      puVar6 = local_70;
      do {
        uVar7 = uVar7 - 1;
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      } while (1 < uVar7);
    }
    if (local_70 != (undefined1 *)0x0) {
      local_68 = local_70;
      operator_delete(local_70);
    }
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a8ce8  FUN_005a8ce8 =====

void FUN_005a8ce8(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[1];
  *param_1 = &PTR_FUN_00d25110;
  param_1[1] = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005a8d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 005a8d10  FUN_005a8d10 =====

void FUN_005a8d10(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[1];
  *param_1 = &PTR_FUN_00d25110;
  param_1[1] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  operator_delete(param_1);
  return;
}


// ===== 005a8d50  FUN_005a8d50 =====

void FUN_005a8d50(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  puVar1 = (undefined1 *)param_1[8];
  *param_1 = &PTR_FUN_00d25138;
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
  operator_delete(param_1);
  return;
}


// ===== 005a8db4  FUN_005a8db4 =====

void FUN_005a8db4(undefined8 *param_1,long *param_2,long *param_3)

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
        if (uVar8 == uVar9) goto LAB_005a8e7c;
      }
      do {
        puVar5 = puVar7 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = *puVar7;
        puVar3 = puVar4;
        puVar7 = puVar5;
      } while (puVar5 != puVar1);
    }
LAB_005a8e7c:
    param_1[1] = puVar4;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar8 = param_3[1] - *param_3;
  if (uVar8 == 0) {
    return;
  }
  if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005a8f4c to 005a8f4f has its CatchHandler @ 005a8f50 */
    FUN_004f04ec();
  }
                    /* try { // try from 005a8e9c to 005a8ea3 has its CatchHandler @ 005a8f50 */
  puVar3 = (undefined1 *)operator_new(uVar8);
  param_1[3] = puVar3;
  param_1[4] = puVar3;
  param_1[5] = puVar3 + uVar8;
  puVar5 = (undefined1 *)*param_3;
  puVar1 = (undefined1 *)param_3[1];
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
      if (uVar8 == uVar9) goto LAB_005a8f30;
    }
    do {
      puVar5 = puVar7 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = *puVar7;
      puVar3 = puVar4;
      puVar7 = puVar5;
    } while (puVar5 != puVar1);
  }
LAB_005a8f30:
  param_1[4] = puVar4;
  return;
}


// ===== 005a8f64  FUN_005a8f64 =====

undefined4 * FUN_005a8f64(void)

{
  int iVar1;
  
  if (((DAT_00d63220 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d63220), iVar1 != 0)) {
    DAT_00d63210 = 0;
                    /* try { // try from 005a8fac to 005a8fb3 has its CatchHandler @ 005a8fcc */
    FUN_0072abc4();
    DAT_00d63218 = FUN_0072a5a0();
    FUN_0054ff1c(&DAT_00d63220);
  }
  return &DAT_00d63210;
}


// ===== 005a8fe4  FUN_005a8fe4 =====

undefined4 * FUN_005a8fe4(void)

{
  int iVar1;
  
  if (((DAT_00d63238 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d63238), iVar1 != 0)) {
    DAT_00d63228 = 1;
                    /* try { // try from 005a9030 to 005a9037 has its CatchHandler @ 005a9050 */
    FUN_0072ac44();
    DAT_00d63230 = FUN_0072a5a0();
    FUN_0054ff1c(&DAT_00d63238);
  }
  return &DAT_00d63228;
}


// ===== 005a9068  FUN_005a9068 =====

undefined4 * FUN_005a9068(void)

{
  int iVar1;
  
  if (((DAT_00d63250 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d63250), iVar1 != 0)) {
    DAT_00d63240 = 2;
                    /* try { // try from 005a90b4 to 005a90bb has its CatchHandler @ 005a90d4 */
    FUN_0072acc4();
    DAT_00d63248 = FUN_0072a5a0();
    FUN_0054ff1c(&DAT_00d63250);
  }
  return &DAT_00d63240;
}


// ===== 005a90ec  FUN_005a90ec =====

void FUN_005a90ec(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 2) {
    FUN_0072acc4();
    return;
  }
  if (param_1 != 1) {
    if (param_1 == 0) {
      FUN_0072abc4();
      return;
    }
    uVar1 = FUN_0054f64c(0x10);
                    /* try { // try from 005a913c to 005a9147 has its CatchHandler @ 005a9160 */
    FUN_0054723c(uVar1,"Unsupported ciphersuite");
                    /* WARNING: Subroutine does not return */
    FUN_0054f748(uVar1,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
  }
  FUN_0072ac44();
  return;
}


// ===== 005a9174  FUN_005a9174 =====

void FUN_005a9174(undefined8 *param_1,undefined4 *param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  void *__s;
  undefined8 uVar3;
  ulong __n;
  undefined4 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __n = *(ulong *)(param_2 + 2);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (__n == 0) {
    __s = (void *)0x0;
  }
  else {
    if ((long)__n < 0) {
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(param_1);
      }
      goto LAB_005a92d0;
    }
    __s = operator_new(__n);
    *param_1 = __s;
    param_1[2] = (long)__s + __n;
    memset(__s,0,__n);
    param_1[1] = (long)__s + __n;
  }
  local_5c = 0;
                    /* try { // try from 005a91f4 to 005a9213 has its CatchHandler @ 005a92ac */
  uVar3 = FUN_005a90ec(*param_2);
  iVar2 = FUN_0072a5ac(*param_3,param_3[1] - *param_3,__s,&local_5c,uVar3,0);
  if (iVar2 == 1) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
  else {
    uVar3 = FUN_0054f64c(0x10);
                    /* try { // try from 005a9254 to 005a925b has its CatchHandler @ 005a929c */
    FUN_005aee88(uVar3);
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 005a926c to 005a9283 has its CatchHandler @ 005a92ac */
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar3,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
    }
  }
LAB_005a92d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a92d4  FUN_005a92d4 =====

void FUN_005a92d4(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  void *__s;
  undefined8 uVar2;
  long lVar3;
  ulong __n;
  undefined4 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __n = *(ulong *)(param_2 + 2);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (__n == 0) {
    __s = (void *)0x0;
  }
  else {
    if ((long)__n < 0) {
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(param_1);
      }
      goto LAB_005a9440;
    }
    __s = operator_new(__n);
    *param_1 = __s;
    param_1[2] = (long)__s + __n;
    memset(__s,0,__n);
    param_1[1] = (long)__s + __n;
  }
  local_5c = 0;
                    /* try { // try from 005a9358 to 005a9387 has its CatchHandler @ 005a941c */
  uVar2 = FUN_005a90ec(*param_2);
  lVar3 = FUN_0073a19c(uVar2,*param_3,(long)(*(int *)(param_3 + 1) - (int)*param_3),*param_4,
                       (long)(*(int *)(param_4 + 1) - (int)*param_4),__s,&local_5c);
  if (lVar3 == 0) {
    uVar2 = FUN_0054f64c(0x10);
                    /* try { // try from 005a93c4 to 005a93cb has its CatchHandler @ 005a940c */
    FUN_005aee88(uVar2);
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 005a93dc to 005a93f3 has its CatchHandler @ 005a941c */
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar2,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_005a9440:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a9444  FUN_005a9444 =====

void FUN_005a9444(undefined8 *param_1,undefined4 *param_2,long *param_3,long *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  void *__s;
  ulong __n;
  undefined4 local_70;
  undefined1 local_6c [4];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar6 = FUN_005a90ec(*param_2);
  lVar7 = FUN_0073a860();
  if (lVar7 == 0) {
    uVar6 = FUN_0054f64c(0x10);
                    /* try { // try from 005a9588 to 005a958f has its CatchHandler @ 005a9678 */
    FUN_005aee88(uVar6);
    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar6,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
    }
  }
  else {
    puVar2 = (undefined1 *)*param_3;
    lVar3 = param_3[1];
    local_6c[0] = 0;
    __n = *(ulong *)(param_2 + 2);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    if (__n == 0) {
      __s = (void *)0x0;
    }
    else {
      if ((long)__n < 0) {
        if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 005a9658 to 005a965f has its CatchHandler @ 005a968c */
                    /* WARNING: Subroutine does not return */
          FUN_004f04ec(param_1);
        }
        goto LAB_005a96c4;
      }
                    /* try { // try from 005a94b4 to 005a94bb has its CatchHandler @ 005a968c */
      __s = operator_new(__n);
      *param_1 = __s;
      param_1[2] = (long)__s + __n;
      memset(__s,0,__n);
      param_1[1] = (long)__s + __n;
    }
    puVar1 = local_6c;
    if (puVar2 != (undefined1 *)0x0) {
      puVar1 = puVar2;
    }
                    /* try { // try from 005a94f8 to 005a951f has its CatchHandler @ 005a9698 */
    iVar5 = FUN_0073a394(lVar7,puVar1,(long)((int)lVar3 - (int)puVar2),uVar6,0);
    if (iVar5 == 1) {
      iVar5 = FUN_0073a6a4(lVar7,*param_4,param_4[1] - *param_4);
      if (iVar5 == 1) {
        local_70 = 0;
                    /* try { // try from 005a952c to 005a953b has its CatchHandler @ 005a9694 */
        iVar5 = FUN_0073a6d0(lVar7,__s,&local_70);
        if (iVar5 == 1) {
                    /* try { // try from 005a9544 to 005a954b has its CatchHandler @ 005a9688 */
          thunk_FUN_0073a898(lVar7);
          if (*(long *)(lVar4 + 0x28) == local_68) {
            return;
          }
        }
        else {
          uVar6 = FUN_0054f64c(0x10);
                    /* try { // try from 005a9618 to 005a961f has its CatchHandler @ 005a9660 */
          FUN_005aee88(uVar6);
          if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 005a9630 to 005a9647 has its CatchHandler @ 005a9694 */
                    /* WARNING: Subroutine does not return */
            FUN_0054f748(uVar6,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
          }
        }
        goto LAB_005a96c4;
      }
      uVar6 = FUN_0054f64c(0x10);
                    /* try { // try from 005a95dc to 005a95e3 has its CatchHandler @ 005a9664 */
      FUN_005aee88(uVar6);
    }
    else {
      uVar6 = FUN_0054f64c(0x10);
                    /* try { // try from 005a95c4 to 005a95cb has its CatchHandler @ 005a9668 */
      FUN_005aee88(uVar6);
    }
    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 005a95f4 to 005a960b has its CatchHandler @ 005a9698 */
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar6,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
    }
  }
LAB_005a96c4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a96cc  FUN_005a96cc =====

void FUN_005a96cc(undefined8 *param_1,byte param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(byte *)(param_1 + 1) = param_2;
  *param_1 = &PTR_FUN_00d25368;
  uVar2 = 0x20;
  switch(param_2) {
  case 0:
  case 3:
    break;
  case 1:
    param_1[2] = 0x30;
    goto switchD_005a9758_caseD_1;
  case 2:
    param_1[2] = 0x42;
    goto switchD_005a9758_caseD_2;
  case 4:
    uVar2 = 0x38;
    param_1[3] = 0x38;
    param_1[2] = 0x38;
    goto LAB_005a9800;
  case 5:
  case 6:
    uVar2 = 0;
    break;
  default:
    uVar2 = FUN_0054f64c(0x10);
                    /* try { // try from 005a9890 to 005a989b has its CatchHandler @ 005a98f4 */
    FUN_0054723c(uVar2,"Unknown group");
    goto LAB_005a98d4;
  }
  param_1[2] = uVar2;
  switch(param_2) {
  case 0:
    uVar3 = 0x41;
    uVar2 = 0x20;
    break;
  case 1:
switchD_005a9758_caseD_1:
    uVar3 = 0x61;
    uVar2 = 0x30;
    break;
  case 2:
switchD_005a9758_caseD_2:
    uVar3 = 0x85;
    uVar2 = 0x42;
    break;
  case 3:
  case 5:
    param_1[3] = 0x20;
    if (param_2 != 3) {
      if (param_2 == 4) {
        uVar2 = 0x38;
        goto LAB_005a9800;
      }
      if (param_2 != 5) {
        uVar2 = FUN_0054f64c(0x10);
                    /* try { // try from 005a98c8 to 005a98d3 has its CatchHandler @ 005a98ec */
        FUN_0054723c(uVar2,"Unknown group");
        goto LAB_005a98d4;
      }
    }
    uVar2 = 0x20;
    goto LAB_005a9800;
  default:
    uVar2 = FUN_0054f64c(0x10);
                    /* try { // try from 005a98ac to 005a98b7 has its CatchHandler @ 005a98f0 */
    FUN_0054723c(uVar2,"Unknown group");
LAB_005a98d4:
                    /* WARNING: Subroutine does not return */
    FUN_0054f748(uVar2,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
  case 6:
    uVar2 = 0x39;
    param_1[3] = 0x39;
LAB_005a9800:
    puVar1 = &DAT_001d07f6;
    param_1[4] = uVar2;
    goto LAB_005a980c;
  }
  param_1[3] = uVar3;
  puVar1 = &DAT_001d9268;
  param_1[4] = uVar2;
LAB_005a980c:
  FUN_004a3cf4(param_1 + 5,puVar1);
  if (param_2 < 7) {
                    /* try { // try from 005a983c to 005a983f has its CatchHandler @ 005a9918 */
    FUN_004a3cf4(param_1 + 8,&DAT_001fa31c + *(int *)(&DAT_001fa31c + (long)(char)param_2 * 4));
    param_1[0xb] = param_3;
    return;
  }
  uVar2 = FUN_0054f64c(0x10);
                    /* try { // try from 005a9860 to 005a986b has its CatchHandler @ 005a9908 */
  FUN_0054723c(uVar2,"Unknown group");
                    /* try { // try from 005a986c to 005a9883 has its CatchHandler @ 005a9918 */
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar2,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
}


// ===== 005a9934  FUN_005a9934 =====

void FUN_005a9934(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_thunk_FUN_00778828_00d51ea8;
  *param_1 = &PTR_FUN_00d25300;
  param_1[1] = &PTR_FUN_00d25320;
  param_1[2] = param_2;
  param_1[3] = puVar1;
  return;
}


// ===== 005a9954  FUN_005a9954 =====

void FUN_005a9954(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  iVar2 = FUN_00778898(*(undefined8 *)(param_1 + 8));
  if (iVar2 == 1) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    puVar3 = (undefined8 *)operator_new(0x20);
    puVar1 = PTR_thunk_FUN_00778828_00d51ea8;
    *puVar3 = &PTR_FUN_00d25300;
    puVar3[1] = &PTR_FUN_00d25320;
    puVar3[2] = uVar4;
    puVar3[3] = puVar1;
    return;
  }
  uVar4 = FUN_0054f64c(0x10);
                    /* try { // try from 005a99b4 to 005a99bb has its CatchHandler @ 005a99d4 */
  FUN_005aee88(uVar4);
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar4,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
}


// ===== 005a99e8  FUN_005a99e8 =====

undefined8 FUN_005a99e8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = (undefined1 *)0x0;
  local_38 = (undefined1 *)0x0;
  local_30 = 0;
                    /* try { // try from 005a9a14 to 005a9a1b has its CatchHandler @ 005a9ad4 */
  FUN_005aeec4(&local_58,param_1[4]);
                    /* try { // try from 005a9a24 to 005a9a33 has its CatchHandler @ 005a9ac4 */
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1,&local_40,&local_58);
  if (0 < (long)local_50 - (long)local_58) {
    uVar4 = ((long)local_50 - (long)local_58) + 1;
    puVar3 = local_58;
    do {
      uVar4 = uVar4 - 1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (1 < uVar4);
  }
  if (local_58 != (undefined1 *)0x0) {
    local_50 = local_58;
    operator_delete(local_58);
  }
  if (0 < (long)local_38 - (long)local_40) {
    uVar4 = ((long)local_38 - (long)local_40) + 1;
    puVar3 = local_40;
    do {
      uVar4 = uVar4 - 1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (1 < uVar4);
  }
  if (local_40 != (undefined1 *)0x0) {
    local_38 = local_40;
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}


// ===== 005a9afc  FUN_005a9afc =====

void FUN_005a9afc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong __n;
  int iVar2;
  long lVar3;
  long lVar4;
  void *__s;
  undefined8 uVar5;
  ulong local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00550ef4(param_3,&PTR_PTR_thunk_FUN_00552768_00d25330,
                       &PTR_PTR_thunk_FUN_00552768_00d252c0,0);
  if ((lVar3 == 0) ||
     (lVar4 = FUN_00550ef4(param_4,&PTR_PTR_thunk_FUN_00552768_00d251d8,
                           &PTR_PTR_thunk_FUN_00552768_00d25340,0), lVar4 == 0)) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f5f0();
    }
  }
  else {
    uVar5 = *(undefined8 *)(lVar4 + 0x10);
    lVar3 = FUN_0077a310(*(undefined8 *)(lVar3 + 8),0);
    if (lVar3 == 0) {
      uVar5 = FUN_0054f64c(0x10);
                    /* try { // try from 005a9c70 to 005a9c77 has its CatchHandler @ 005a9db0 */
      FUN_005aee88(uVar5);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_0054f748(uVar5,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
      }
    }
    else {
                    /* try { // try from 005a9b84 to 005a9b9f has its CatchHandler @ 005a9ddc */
      iVar2 = FUN_0077a8d8();
      if (iVar2 == 1) {
        iVar2 = FUN_0077a938(lVar3,uVar5);
        if (iVar2 == 1) {
          local_50 = 0;
                    /* try { // try from 005a9bac to 005a9bbb has its CatchHandler @ 005a9dd8 */
          iVar2 = FUN_0077ab04(lVar3,0,&local_50);
          __n = local_50;
          if (iVar2 == 1) {
            param_1[1] = 0;
            param_1[2] = 0;
            *param_1 = 0;
            if (local_50 == 0) {
              __s = (void *)0x0;
            }
            else {
              if ((long)local_50 < 0) {
                if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 005a9d80 to 005a9d87 has its CatchHandler @ 005a9dc4 */
                    /* WARNING: Subroutine does not return */
                  FUN_004f04ec(param_1);
                }
                goto LAB_005a9e00;
              }
                    /* try { // try from 005a9bd8 to 005a9bdf has its CatchHandler @ 005a9dc4 */
              __s = operator_new(local_50);
              lVar4 = (long)__s + __n;
              *param_1 = __s;
              param_1[2] = lVar4;
              memset(__s,0,__n);
              param_1[1] = lVar4;
            }
                    /* try { // try from 005a9c08 to 005a9c17 has its CatchHandler @ 005a9dc8 */
            iVar2 = FUN_0077ab04(lVar3,__s,&local_50);
            if (iVar2 == 1) {
                    /* try { // try from 005a9c20 to 005a9c27 has its CatchHandler @ 005a9dc0 */
              thunk_FUN_0077a47c(lVar3);
              if (*(long *)(lVar1 + 0x28) == local_48) {
                return;
              }
            }
            else {
              uVar5 = FUN_0054f64c(0x10);
                    /* try { // try from 005a9d40 to 005a9d47 has its CatchHandler @ 005a9d88 */
              FUN_005aee88(uVar5);
              if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 005a9d58 to 005a9d6f has its CatchHandler @ 005a9dc8 */
                    /* WARNING: Subroutine does not return */
                FUN_0054f748(uVar5,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
              }
            }
          }
          else {
            uVar5 = FUN_0054f64c(0x10);
                    /* try { // try from 005a9d00 to 005a9d07 has its CatchHandler @ 005a9d98 */
            FUN_005aee88(uVar5);
            if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 005a9d18 to 005a9d2f has its CatchHandler @ 005a9dd8 */
                    /* WARNING: Subroutine does not return */
              FUN_0054f748(uVar5,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
            }
          }
          goto LAB_005a9e00;
        }
        uVar5 = FUN_0054f64c(0x10);
                    /* try { // try from 005a9cc4 to 005a9ccb has its CatchHandler @ 005a9d9c */
        FUN_005aee88(uVar5);
      }
      else {
        uVar5 = FUN_0054f64c(0x10);
                    /* try { // try from 005a9cac to 005a9cb3 has its CatchHandler @ 005a9da0 */
        FUN_005aee88(uVar5);
      }
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 005a9cdc to 005a9cf3 has its CatchHandler @ 005a9ddc */
                    /* WARNING: Subroutine does not return */
        FUN_0054f748(uVar5,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
      }
    }
  }
LAB_005a9e00:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005a9e08  FUN_005a9e08 =====

void FUN_005a9e08(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  void *__s;
  ulong uVar6;
  ulong local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00550ef4(param_4,&PTR_PTR_thunk_FUN_00552768_00d25330,
                       &PTR_PTR_thunk_FUN_00552768_00d252c0,0);
  if (lVar3 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f5f0();
    }
  }
  else {
    lVar4 = FUN_0072a724();
    if (lVar4 == 0) {
      uVar5 = FUN_0054f64c(0x10);
                    /* try { // try from 005a9f88 to 005a9f8f has its CatchHandler @ 005aa06c */
      FUN_005aee88(uVar5);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_0054f748(uVar5,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
      }
    }
    else {
                    /* try { // try from 005a9e74 to 005a9e8f has its CatchHandler @ 005aa098 */
      uVar5 = FUN_005aa0c4(*(undefined1 *)(param_2 + 8));
      iVar2 = FUN_0072adc4(lVar4,0,uVar5,0,*(undefined8 *)(lVar3 + 8));
      if (iVar2 == 1) {
                    /* try { // try from 005a9e9c to 005a9e9f has its CatchHandler @ 005aa080 */
        iVar2 = FUN_00778a30(*(undefined8 *)(lVar3 + 8));
        uVar6 = (ulong)iVar2;
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        local_60 = uVar6;
        if (iVar2 == 0) {
          lVar3 = 0;
          __s = (void *)0x0;
        }
        else {
          if (iVar2 < 0) {
            if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 005aa044 to 005aa04b has its CatchHandler @ 005aa084 */
                    /* WARNING: Subroutine does not return */
              FUN_004f04ec(param_1);
            }
            goto LAB_005aa0bc;
          }
                    /* try { // try from 005a9eb8 to 005a9ebf has its CatchHandler @ 005aa084 */
          __s = operator_new(uVar6);
          lVar3 = (long)__s + uVar6;
          *param_1 = __s;
          param_1[2] = lVar3;
          memset(__s,0,uVar6);
          param_1[1] = lVar3;
        }
                    /* try { // try from 005a9ef4 to 005a9f23 has its CatchHandler @ 005aa088 */
        iVar2 = FUN_0072b1e8(lVar4,__s,&local_60,*param_3,param_3[1] - *param_3);
        if (iVar2 == 1) {
          uVar6 = lVar3 - (long)__s;
          if (local_60 < uVar6 || local_60 - uVar6 == 0) {
            if (local_60 < uVar6) {
              param_1[1] = (long)__s + local_60;
            }
          }
          else {
            FUN_00432ba8(param_1,local_60 - uVar6);
          }
                    /* try { // try from 005a9f34 to 005a9f3b has its CatchHandler @ 005aa07c */
          thunk_FUN_0072a7b4(lVar4);
          if (*(long *)(lVar1 + 0x28) == local_58) {
            return;
          }
        }
        else {
          uVar5 = FUN_0054f64c(0x10);
                    /* try { // try from 005aa004 to 005aa00b has its CatchHandler @ 005aa04c */
          FUN_005aee88(uVar5);
          if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 005aa01c to 005aa033 has its CatchHandler @ 005aa088 */
                    /* WARNING: Subroutine does not return */
            FUN_0054f748(uVar5,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
          }
        }
      }
      else {
        uVar5 = FUN_0054f64c(0x10);
                    /* try { // try from 005a9fc4 to 005a9fcb has its CatchHandler @ 005aa05c */
        FUN_005aee88(uVar5);
        if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 005a9fdc to 005a9ff3 has its CatchHandler @ 005aa098 */
                    /* WARNING: Subroutine does not return */
          FUN_0054f748(uVar5,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
        }
      }
    }
  }
LAB_005aa0bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005aa0c4  FUN_005aa0c4 =====

undefined8 FUN_005aa0c4(undefined1 param_1)

{
  undefined8 uVar1;
  
  switch(param_1) {
  case 0:
    uVar1 = FUN_0072abc4();
    return uVar1;
  case 1:
    uVar1 = FUN_0072ac44();
    return uVar1;
  case 2:
    uVar1 = FUN_0072acc4();
    return uVar1;
  case 3:
  case 4:
    uVar1 = FUN_0054f64c(0x10);
                    /* try { // try from 005aa138 to 005aa143 has its CatchHandler @ 005aa17c */
    FUN_0054723c(uVar1,"Signature not supported for group");
    break;
  case 5:
  case 6:
    return 0;
  default:
    uVar1 = FUN_0054f64c(0x10);
                    /* try { // try from 005aa154 to 005aa15f has its CatchHandler @ 005aa178 */
    FUN_0054723c(uVar1,"Unknown group");
  }
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar1,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
}


// ===== 005aa190  FUN_005aa190 =====

bool FUN_005aa190(long param_1,long *param_2,long *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_00550ef4(param_4,&PTR_PTR_thunk_FUN_00552768_00d251d8,
                       &PTR_PTR_thunk_FUN_00552768_00d25340,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0054f5f0();
  }
  lVar3 = FUN_0072a724();
  if (lVar3 != 0) {
                    /* try { // try from 005aa1e4 to 005aa1ff has its CatchHandler @ 005aa2cc */
    uVar4 = FUN_005aa0c4(*(undefined1 *)(param_1 + 8));
    iVar1 = FUN_0072af08(lVar3,0,uVar4,0,*(undefined8 *)(lVar2 + 0x10));
    if (iVar1 == 1) {
                    /* try { // try from 005aa218 to 005aa21f has its CatchHandler @ 005aa2c8 */
      iVar1 = FUN_0072b2ac(lVar3,*param_3,param_3[1] - *param_3,*param_2,param_2[1] - *param_2);
                    /* try { // try from 005aa220 to 005aa22b has its CatchHandler @ 005aa2c4 */
      thunk_FUN_0072a7b4(lVar3);
      return iVar1 == 1;
    }
    uVar4 = FUN_0054f64c(0x10);
                    /* try { // try from 005aa284 to 005aa28b has its CatchHandler @ 005aa2a4 */
    FUN_005aee88(uVar4);
                    /* try { // try from 005aa28c to 005aa2a3 has its CatchHandler @ 005aa2cc */
                    /* WARNING: Subroutine does not return */
    FUN_0054f748(uVar4,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
  }
  uVar4 = FUN_0054f64c(0x10);
                    /* try { // try from 005aa258 to 005aa25f has its CatchHandler @ 005aa2b4 */
  FUN_005aee88(uVar4);
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar4,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
}


// ===== 005aa2e4  FUN_005aa2e4 =====

undefined8 * FUN_005aa2e4(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_00d632c0 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d632c0), iVar1 != 0)) {
                    /* try { // try from 005aa324 to 005aa33f has its CatchHandler @ 005aa37c */
    uVar2 = thunk_FUN_005ac7d0();
    FUN_005a96cc(&DAT_00d63258,0,uVar2);
    DAT_00d63258 = &PTR_FUN_00d253f0;
    DAT_00d632b8 = 0x19f;
    __cxa_atexit(FUN_005aa5a4,&DAT_00d63258,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d632c0);
  }
  return &DAT_00d63258;
}


// ===== 005aa394  FUN_005aa394 =====

undefined8 * FUN_005aa394(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_00d63330 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d63330), iVar1 != 0)) {
                    /* try { // try from 005aa3d4 to 005aa3ef has its CatchHandler @ 005aa42c */
    uVar2 = thunk_FUN_005ac84c();
    FUN_005a96cc(&DAT_00d632c8,1,uVar2);
    DAT_00d632c8 = &PTR_FUN_00d253f0;
    DAT_00d63328 = 0x2cb;
    __cxa_atexit(FUN_005aa5a4,&DAT_00d632c8,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d63330);
  }
  return &DAT_00d632c8;
}


// ===== 005aa444  FUN_005aa444 =====

undefined8 * FUN_005aa444(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_00d633a0 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d633a0), iVar1 != 0)) {
                    /* try { // try from 005aa484 to 005aa49f has its CatchHandler @ 005aa4dc */
    uVar2 = thunk_FUN_005ac8c8();
    FUN_005a96cc(&DAT_00d63338,2,uVar2);
    DAT_00d63338 = &PTR_FUN_00d253f0;
    DAT_00d63398 = 0x2cc;
    __cxa_atexit(FUN_005aa5a4,&DAT_00d63338,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d633a0);
  }
  return &DAT_00d63338;
}


// ===== 005aa4f4  FUN_005aa4f4 =====

undefined8 * FUN_005aa4f4(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_00d63410 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d63410), iVar1 != 0)) {
                    /* try { // try from 005aa534 to 005aa54f has its CatchHandler @ 005aa58c */
    uVar2 = thunk_FUN_005ac7d0();
    FUN_005a96cc(&DAT_00d633a8,3,uVar2);
    DAT_00d633a8 = &PTR_FUN_00d25480;
    DAT_00d63408 = 0x3b4;
    __cxa_atexit(FUN_005aa5a4,&DAT_00d633a8,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d63410);
  }
  return &DAT_00d633a8;
}


// ===== 005aa5a4  FUN_005aa5a4 =====

void FUN_005aa5a4(undefined8 *param_1)

{
  char cVar1;
  
  *param_1 = &PTR_FUN_00d25368;
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
    cVar1 = *(char *)((long)param_1 + 0x3f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x3f);
  }
  if (-1 < cVar1) {
    return;
  }
  operator_delete((void *)param_1[5]);
  return;
}


// ===== 005aa5fc  FUN_005aa5fc =====

undefined8 * FUN_005aa5fc(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_00d63480 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d63480), iVar1 != 0)) {
                    /* try { // try from 005aa63c to 005aa657 has its CatchHandler @ 005aa694 */
    uVar2 = thunk_FUN_005ac7d0();
    FUN_005a96cc(&DAT_00d63418,5,uVar2);
    DAT_00d63418 = &PTR_FUN_00d25480;
    DAT_00d63478 = 0x3b5;
    __cxa_atexit(FUN_005aa5a4,&DAT_00d63418,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d63480);
  }
  return &DAT_00d63418;
}


// ===== 005aa6ac  FUN_005aa6ac =====

void FUN_005aa6ac(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x5aa6b0);
  (*pcVar1)();
}


// ===== 005aa6b0  FUN_005aa6b0 =====

void FUN_005aa6b0(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_00d252a8;
  param_1[1] = 0;
  if (lVar1 != 0) {
                    /* try { // try from 005aa6d4 to 005aa6d7 has its CatchHandler @ 005aa6e0 */
    (*(code *)param_1[2])();
  }
  return;
}


// ===== 005aa6e4  FUN_005aa6e4 =====

void FUN_005aa6e4(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_00d252a8;
  param_1[1] = 0;
  if (lVar1 != 0) {
                    /* try { // try from 005aa70c to 005aa70f has its CatchHandler @ 005aa720 */
    (*(code *)param_1[2])();
  }
  operator_delete(param_1);
  return;
}


// ===== 005aa724  FUN_005aa724 =====

void FUN_005aa724(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  param_1[2] = 0;
  *param_1 = &PTR_FUN_00d25300;
  param_1[1] = &PTR_FUN_00d25320;
  if (lVar1 != 0) {
                    /* try { // try from 005aa74c to 005aa753 has its CatchHandler @ 005aa75c */
    (*(code *)param_1[3])(lVar1);
  }
  return;
}


// ===== 005aa760  FUN_005aa760 =====

void FUN_005aa760(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  *param_1 = &PTR_FUN_00d25300;
  param_1[1] = &PTR_FUN_00d25320;
  param_1[2] = 0;
  if (lVar1 != 0) {
                    /* try { // try from 005aa790 to 005aa793 has its CatchHandler @ 005aa7a4 */
    (*(code *)param_1[3])();
  }
  operator_delete(param_1);
  return;
}


// ===== 005aa7a8  FUN_005aa7a8 =====

void FUN_005aa7a8(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  param_1[1] = 0;
  param_1[-1] = &PTR_FUN_00d25300;
  *param_1 = &PTR_FUN_00d25320;
  if (lVar1 != 0) {
                    /* try { // try from 005aa7d0 to 005aa7d7 has its CatchHandler @ 005aa7e0 */
    (*(code *)param_1[2])(lVar1);
  }
  return;
}


// ===== 005aa7e4  FUN_005aa7e4 =====

void FUN_005aa7e4(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  param_1[-1] = &PTR_FUN_00d25300;
  *param_1 = &PTR_FUN_00d25320;
  param_1[1] = 0;
  if (lVar1 != 0) {
                    /* try { // try from 005aa814 to 005aa81b has its CatchHandler @ 005aa82c */
    (*(code *)param_1[2])(lVar1);
  }
  operator_delete(param_1 + -1);
  return;
}


// ===== 005aa830  FUN_005aa830 =====

void FUN_005aa830(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x5aa834);
  (*pcVar1)();
}


// ===== 005aa834  FUN_005aa834 =====

void FUN_005aa834(undefined8 *param_1)

{
  char cVar1;
  
  *param_1 = &PTR_FUN_00d25368;
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
    cVar1 = *(char *)((long)param_1 + 0x3f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x3f);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[5]);
  }
  operator_delete(param_1);
  return;
}


// ===== 005aa88c  FUN_005aa88c =====

/* WARNING: Removing unreachable block (ram,0x005aaca0) */
/* WARNING: Removing unreachable block (ram,0x005aad0c) */

undefined8 * FUN_005aa88c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  byte *local_b0;
  byte *local_a8;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (((DAT_00d63510 & 1) == 0) && (iVar3 = FUN_0054fdd4(&DAT_00d63510), iVar3 != 0)) {
                    /* try { // try from 005aac78 to 005aac87 has its CatchHandler @ 005aadc4 */
    FUN_004a3cf4(&local_80,"dkp_prk");
                    /* try { // try from 005aac88 to 005aac97 has its CatchHandler @ 005aadac */
    FUN_005a2680(&DAT_00d634f8,&local_80);
    __cxa_atexit(FUN_004e9f60,&DAT_00d634f8,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d63510);
  }
  if (((DAT_00d63530 & 1) == 0) && (iVar3 = FUN_0054fdd4(&DAT_00d63530), iVar3 != 0)) {
                    /* try { // try from 005aace4 to 005aacf3 has its CatchHandler @ 005aad98 */
    FUN_004a3cf4(&local_80,"candidate");
                    /* try { // try from 005aacf4 to 005aad03 has its CatchHandler @ 005aad80 */
    FUN_005a2680(&DAT_00d63518,&local_80);
    __cxa_atexit(FUN_004e9f60,&DAT_00d63518,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d63530);
  }
  local_98 = (undefined1 *)0x0;
  local_90 = (undefined1 *)0x0;
  local_88 = 0;
                    /* try { // try from 005aa8f4 to 005aa90f has its CatchHandler @ 005aae18 */
  FUN_005acdb0(&local_80,*(undefined8 *)(param_1 + 0x58),param_2,&local_98,&DAT_00d634f8,param_3);
  if (0 < (long)local_90 - (long)local_98) {
    uVar12 = ((long)local_90 - (long)local_98) + 1;
    puVar10 = local_98;
    do {
      uVar12 = uVar12 - 1;
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    } while (1 < uVar12);
  }
  if (local_98 != (undefined1 *)0x0) {
    local_90 = local_98;
    operator_delete(local_98);
  }
                    /* try { // try from 005aa948 to 005aa94b has its CatchHandler @ 005aae10 */
  uVar4 = FUN_0072efdc(*(undefined4 *)(param_1 + 0x60));
                    /* try { // try from 005aa94c to 005aa953 has its CatchHandler @ 005aae08 */
  uVar5 = FUN_0072f524();
                    /* try { // try from 005aa954 to 005aa95b has its CatchHandler @ 005aae04 */
  lVar6 = FUN_00719ff4();
                    /* try { // try from 005aa95c to 005aa96f has its CatchHandler @ 005aae24 */
  iVar3 = FUN_0072c3a0(uVar5,lVar6,0);
  if (iVar3 == 1) {
                    /* try { // try from 005aa978 to 005aa97b has its CatchHandler @ 005aae00 */
    lVar7 = FUN_00719ff4();
                    /* try { // try from 005aa97c to 005aa983 has its CatchHandler @ 005aadfc */
    FUN_0071a3d8();
    lVar13 = 0;
    while( true ) {
                    /* try { // try from 005aa9a0 to 005aa9b7 has its CatchHandler @ 005aae88 */
      iVar3 = FUN_007199e0(lVar7);
      if ((iVar3 == 0) && (iVar3 = FUN_0071ada0(lVar7,lVar6), iVar3 == -1)) {
                    /* try { // try from 005aaab8 to 005aaabf has its CatchHandler @ 005aadf8 */
        lVar13 = FUN_0072ca18(uVar5);
                    /* try { // try from 005aaac0 to 005aaaf7 has its CatchHandler @ 005aae38 */
        thunk_FUN_0072e4b0(uVar5,lVar13,lVar7,0,0,0);
        FUN_0072f374(uVar4,lVar7);
        FUN_0072f1f8(uVar4,lVar13);
                    /* try { // try from 005aaaf8 to 005aab07 has its CatchHandler @ 005aae2c */
        uVar5 = FUN_007787a4();
        FUN_0077b37c(uVar5,uVar4);
                    /* try { // try from 005aab08 to 005aab0f has its CatchHandler @ 005aadf4 */
        puVar11 = (undefined8 *)operator_new(0x18);
        puVar2 = PTR_thunk_FUN_00778828_00d51ea8;
        *puVar11 = &PTR_FUN_00d252a8;
        puVar11[1] = uVar5;
        puVar11[2] = puVar2;
        if (lVar13 != 0) {
                    /* try { // try from 005aab30 to 005aab37 has its CatchHandler @ 005aadf0 */
          thunk_FUN_0072cae8(lVar13);
        }
        if (lVar7 != 0) {
                    /* try { // try from 005aab3c to 005aab43 has its CatchHandler @ 005aadec */
          thunk_FUN_0071a024(lVar7);
        }
        if (lVar6 != 0) {
                    /* try { // try from 005aab48 to 005aab4f has its CatchHandler @ 005aade8 */
          thunk_FUN_0071a024(lVar6);
        }
        if (0 < (long)local_78 - (long)local_80) {
          uVar12 = ((long)local_78 - (long)local_80) + 1;
          puVar10 = local_80;
          do {
            uVar12 = uVar12 - 1;
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          } while (1 < uVar12);
        }
        if (local_80 != (undefined1 *)0x0) {
          local_78 = local_80;
          operator_delete(local_80);
        }
        if (*(long *)(lVar1 + 0x28) == local_68) {
          return puVar11;
        }
        goto LAB_005aaeec;
      }
                    /* try { // try from 005aa9c0 to 005aa9cf has its CatchHandler @ 005aae7c */
      FUN_005a7404(&local_98,lVar13,1);
                    /* try { // try from 005aa9d8 to 005aa9ef has its CatchHandler @ 005aae80 */
      FUN_005ad04c(&local_b0,*(undefined8 *)(param_1 + 0x58),param_2,&local_80,&DAT_00d63518,
                   &local_98,*(undefined8 *)(param_1 + 0x20));
      if (2 < *(byte *)(param_1 + 8)) {
        uVar4 = FUN_0054f64c(0x10);
                    /* try { // try from 005aabc8 to 005aabd3 has its CatchHandler @ 005aae64 */
        FUN_0054723c(uVar4,"Unsupported algorithm");
        if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 005aabe8 to 005aac1b has its CatchHandler @ 005aae90 */
                    /* WARNING: Subroutine does not return */
          FUN_0054f748(uVar4,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
        }
        goto LAB_005aaeec;
      }
      if (local_a8 == local_b0) {
        if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_0056a714(&local_b0);
        }
        goto LAB_005aaeec;
      }
      *local_b0 = *local_b0 & (byte)(0x1ffff >> (ulong)((*(byte *)(param_1 + 8) & 3) << 3));
                    /* try { // try from 005aaa2c to 005aaa33 has its CatchHandler @ 005aae78 */
      lVar8 = FUN_0071a744(local_b0,(long)((int)local_a8 - (int)local_b0),0);
      if (lVar7 != 0) {
                    /* try { // try from 005aaa3c to 005aaa43 has its CatchHandler @ 005aae74 */
        thunk_FUN_0071a024(lVar7);
      }
      if (lVar13 == 0xff) break;
      if (0 < (long)local_a8 - (long)local_b0) {
        uVar12 = ((long)local_a8 - (long)local_b0) + 1;
        pbVar9 = local_b0;
        do {
          uVar12 = uVar12 - 1;
          *pbVar9 = 0;
          pbVar9 = pbVar9 + 1;
        } while (1 < uVar12);
      }
      if (local_b0 != (byte *)0x0) {
        local_a8 = local_b0;
        operator_delete(local_b0);
      }
      if (0 < (long)local_90 - (long)local_98) {
        uVar12 = ((long)local_90 - (long)local_98) + 1;
        puVar10 = local_98;
        do {
          uVar12 = uVar12 - 1;
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        } while (1 < uVar12);
      }
      if (local_98 != (undefined1 *)0x0) {
        local_90 = local_98;
        operator_delete(local_98);
      }
      lVar13 = lVar13 + 1;
      lVar7 = lVar8;
    }
    uVar4 = FUN_0054f64c(0x10);
                    /* try { // try from 005aac28 to 005aac33 has its CatchHandler @ 005aae50 */
    FUN_0054723c(uVar4,"DeriveKeyPair iteration limit exceeded");
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 005aac48 to 005aac63 has its CatchHandler @ 005aae90 */
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar4,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
    }
  }
  else {
    uVar4 = FUN_0054f64c(0x10);
                    /* try { // try from 005aad4c to 005aad53 has its CatchHandler @ 005aadd8 */
    FUN_005aee88(uVar4);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 005aad68 to 005aad7f has its CatchHandler @ 005aae24 */
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar4,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
    }
  }
LAB_005aaeec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005aaefc  FUN_005aaefc =====

void FUN_005aaefc(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  void *__s;
  ulong __n;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00550ef4(param_3,&PTR_PTR_thunk_FUN_00552768_00d251d8,
                       &PTR_PTR_thunk_FUN_00552768_00d25340,0);
  if (lVar3 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f5f0();
    }
  }
  else {
    uVar4 = FUN_0077b3b8(*(undefined8 *)(lVar3 + 0x10));
    iVar2 = FUN_00776b30(uVar4,0);
    if (iVar2 == *(int *)(param_2 + 0x18)) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      if (iVar2 == 0) {
        __s = (void *)0x0;
      }
      else {
        if (iVar2 < 0) {
          if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
            FUN_004f04ec(param_1);
          }
          goto LAB_005ab0d4;
        }
        __n = (ulong)iVar2;
        __s = operator_new(__n);
        *param_1 = __s;
        param_1[2] = (long)__s + __n;
        memset(__s,0,__n);
        param_1[1] = (long)__s + __n;
      }
      local_50 = __s;
                    /* try { // try from 005aafb4 to 005aafbf has its CatchHandler @ 005ab0b0 */
      iVar2 = FUN_00776b30(uVar4,&local_50);
      if (iVar2 == 0) {
        uVar4 = FUN_0054f64c(0x10);
                    /* try { // try from 005ab048 to 005ab04f has its CatchHandler @ 005ab090 */
        FUN_005aee88(uVar4);
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 005ab060 to 005ab077 has its CatchHandler @ 005ab0b0 */
                    /* WARNING: Subroutine does not return */
          FUN_0054f748(uVar4,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
        }
      }
      else if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
    }
    else {
      uVar4 = FUN_0054f64c(0x10);
                    /* try { // try from 005ab00c to 005ab013 has its CatchHandler @ 005ab0a0 */
      FUN_005aee88(uVar4);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_0054f748(uVar4,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
      }
    }
  }
LAB_005ab0d4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005ab0d8  FUN_005ab0d8 =====

void FUN_005ab0d8(long param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_0072efdc(*(undefined4 *)(param_1 + 0x60));
  local_48 = *param_2;
                    /* try { // try from 005ab114 to 005ab11f has its CatchHandler @ 005ab1cc */
  uStack_40 = uVar3;
  lVar4 = FUN_00776a5c(&uStack_40,&local_48,param_2[1] - local_48);
  if (lVar4 == 0) {
    uVar3 = FUN_0054f64c(0x10);
                    /* try { // try from 005ab188 to 005ab18f has its CatchHandler @ 005ab1b8 */
    FUN_005aee88(uVar3);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 005ab1a0 to 005ab1b7 has its CatchHandler @ 005ab1cc */
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar3,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
    }
  }
  else {
                    /* try { // try from 005ab124 to 005ab133 has its CatchHandler @ 005ab1e4 */
    uVar5 = FUN_007787a4();
    FUN_0077b37c(uVar5,uVar3);
                    /* try { // try from 005ab134 to 005ab13b has its CatchHandler @ 005ab1c8 */
    puVar6 = (undefined8 *)operator_new(0x20);
    puVar2 = PTR_thunk_FUN_00778828_00d51ea8;
    *puVar6 = &PTR_FUN_00d25300;
    puVar6[1] = &PTR_FUN_00d25320;
    puVar6[2] = uVar5;
    puVar6[3] = puVar2;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005ab204  FUN_005ab204 =====

void FUN_005ab204(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar4 = FUN_00550ef4(param_3,&PTR_PTR_thunk_FUN_00552768_00d25330,
                       &PTR_PTR_thunk_FUN_00552768_00d252c0,0);
  if (lVar4 == 0) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f5f0();
    }
  }
  else {
    FUN_0077b3b8(*(undefined8 *)(lVar4 + 8));
    uVar5 = FUN_0072f4f8();
    uVar3 = FUN_0071a2fc();
    local_68 = (undefined1 *)0x0;
    local_60 = (undefined1 *)0x0;
    local_70 = (undefined1 *)0x0;
    if (uVar3 == 0) {
      puVar6 = (undefined1 *)0x0;
    }
    else {
      uVar7 = (ulong)uVar3;
      puVar6 = (undefined1 *)operator_new(uVar7);
      local_70 = puVar6;
      local_60 = puVar6 + uVar7;
      memset(puVar6,0,uVar7);
      local_68 = puVar6 + uVar7;
    }
                    /* try { // try from 005ab2b0 to 005ab2bb has its CatchHandler @ 005ab494 */
    puVar1 = local_68;
    lVar4 = FUN_0071a964(uVar5,puVar6);
    if (lVar4 == (long)puVar1 - (long)puVar6) {
      if ((ulong)(long)*(char *)(param_2 + 8) < 7) {
        local_88 = (undefined1 *)0x0;
        local_80 = (undefined1 *)0x0;
        local_78 = (undefined1 *)0x0;
        puVar6 = puVar6 + (*(long *)(&DAT_001fa338 + (long)*(char *)(param_2 + 8) * 8) -
                          (long)puVar1);
        if (puVar6 != (undefined1 *)0x0) {
          if ((long)puVar6 < 0) {
            if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 005ab460 to 005ab467 has its CatchHandler @ 005ab490 */
                    /* WARNING: Subroutine does not return */
              FUN_004f04ec(&local_88);
            }
            goto LAB_005ab4b8;
          }
                    /* try { // try from 005ab2f8 to 005ab2ff has its CatchHandler @ 005ab490 */
          local_88 = (undefined1 *)operator_new((ulong)puVar6);
          puVar1 = local_88 + (long)puVar6;
          local_78 = puVar1;
          memset(local_88,0,(size_t)puVar6);
          local_80 = puVar1;
        }
                    /* try { // try from 005ab31c to 005ab32b has its CatchHandler @ 005ab480 */
        FUN_005a228c(param_1,&local_88,&local_70);
        if (0 < (long)local_80 - (long)local_88) {
          uVar7 = ((long)local_80 - (long)local_88) + 1;
          puVar6 = local_88;
          do {
            uVar7 = uVar7 - 1;
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          } while (1 < uVar7);
        }
        if (local_88 != (undefined1 *)0x0) {
          local_80 = local_88;
          operator_delete(local_88);
        }
        if (0 < (long)local_68 - (long)local_70) {
          uVar7 = ((long)local_68 - (long)local_70) + 1;
          puVar6 = local_70;
          do {
            uVar7 = uVar7 - 1;
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          } while (1 < uVar7);
        }
        if (local_70 != (undefined1 *)0x0) {
          local_68 = local_70;
          operator_delete(local_70);
        }
        if (*(long *)(lVar2 + 0x28) == local_58) {
          return;
        }
      }
      else {
        uVar5 = FUN_0054f64c(0x10);
                    /* try { // try from 005ab41c to 005ab427 has its CatchHandler @ 005ab46c */
        FUN_0054723c(uVar5,"Unknown group");
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 005ab438 to 005ab44f has its CatchHandler @ 005ab468 */
                    /* WARNING: Subroutine does not return */
          FUN_0054f748(uVar5,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
        }
      }
    }
    else {
      uVar5 = FUN_0054f64c(0x10);
                    /* try { // try from 005ab3e0 to 005ab3e7 has its CatchHandler @ 005ab470 */
      FUN_005aee88(uVar5);
      if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 005ab3f8 to 005ab40f has its CatchHandler @ 005ab494 */
                    /* WARNING: Subroutine does not return */
        FUN_0054f748(uVar5,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
      }
    }
  }
LAB_005ab4b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005ab4bc  FUN_005ab4bc =====

undefined8 * FUN_005ab4bc(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  uVar2 = FUN_0072efdc(*(undefined4 *)(param_1 + 0x60));
                    /* try { // try from 005ab4dc to 005ab4df has its CatchHandler @ 005ab5b8 */
  uVar3 = FUN_0072f524();
                    /* try { // try from 005ab4f4 to 005ab4fb has its CatchHandler @ 005ab5b4 */
  lVar4 = FUN_0071a744(*param_2,(long)(*(int *)(param_2 + 1) - (int)*param_2),0);
                    /* try { // try from 005ab4fc to 005ab507 has its CatchHandler @ 005ab5ac */
  lVar5 = FUN_0072ca18(uVar3);
                    /* try { // try from 005ab508 to 005ab53f has its CatchHandler @ 005ab5cc */
  thunk_FUN_0072e4b0(uVar3,lVar5,lVar4,0,0,0);
  FUN_0072f374(uVar2,lVar4);
  FUN_0072f1f8(uVar2,lVar5);
                    /* try { // try from 005ab540 to 005ab54f has its CatchHandler @ 005ab5c0 */
  uVar3 = FUN_007787a4();
  FUN_0077b37c(uVar3,uVar2);
                    /* try { // try from 005ab550 to 005ab557 has its CatchHandler @ 005ab5a8 */
  puVar6 = (undefined8 *)operator_new(0x18);
  puVar1 = PTR_thunk_FUN_00778828_00d51ea8;
  *puVar6 = &PTR_FUN_00d252a8;
  puVar6[1] = uVar3;
  puVar6[2] = puVar1;
  if (lVar5 != 0) {
                    /* try { // try from 005ab578 to 005ab57f has its CatchHandler @ 005ab5a4 */
    thunk_FUN_0072cae8(lVar5);
  }
  if (lVar4 != 0) {
                    /* try { // try from 005ab584 to 005ab58b has its CatchHandler @ 005ab5a0 */
    thunk_FUN_0071a024(lVar4);
  }
  return puVar6;
}


// ===== 005ab608  FUN_005ab608 =====

void FUN_005ab608(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined1 *__n;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar6 = FUN_00719ff4();
                    /* try { // try from 005ab648 to 005ab64b has its CatchHandler @ 005abae4 */
  lVar7 = FUN_00719ff4();
  lVar8 = FUN_00550ef4(param_3,&PTR_PTR_thunk_FUN_00552768_00d251d8,
                       &PTR_PTR_thunk_FUN_00552768_00d25340,0);
  if (lVar8 == 0) {
    if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005ab94c to 005ab94f has its CatchHandler @ 005abad8 */
      FUN_0054f5f0();
    }
  }
  else {
                    /* try { // try from 005ab674 to 005ab677 has its CatchHandler @ 005abacc */
    uVar9 = FUN_0077b3b8(*(undefined8 *)(lVar8 + 0x10));
                    /* try { // try from 005ab678 to 005ab67f has its CatchHandler @ 005abac0 */
    uVar10 = FUN_0072f6dc();
                    /* try { // try from 005ab680 to 005ab69f has its CatchHandler @ 005abb2c */
    uVar9 = FUN_0072f524(uVar9);
    iVar4 = FUN_0072d62c(uVar9,uVar10,lVar6,lVar7,0);
    if (iVar4 == 1) {
                    /* try { // try from 005ab6a8 to 005ab6af has its CatchHandler @ 005abab4 */
      uVar5 = FUN_0071a2fc(lVar6);
      uVar13 = (ulong)uVar5;
      local_80 = (undefined1 *)0x0;
      local_78 = (undefined1 *)0x0;
      local_70 = (undefined1 *)0x0;
      if (uVar5 == 0) {
        puVar11 = (undefined1 *)0x0;
      }
      else {
                    /* try { // try from 005ab6c0 to 005ab6c7 has its CatchHandler @ 005aba80 */
        puVar11 = (undefined1 *)operator_new(uVar13);
        local_80 = puVar11;
        local_70 = puVar11 + uVar13;
        memset(puVar11,0,uVar13);
        local_78 = puVar11 + uVar13;
      }
                    /* try { // try from 005ab6f0 to 005ab6fb has its CatchHandler @ 005abb24 */
      uVar12 = FUN_0071a964(lVar6,puVar11);
      if (uVar12 == uVar13) {
                    /* try { // try from 005ab704 to 005ab70b has its CatchHandler @ 005abaac */
        uVar5 = FUN_0071a2fc(lVar7);
        uVar13 = (ulong)uVar5;
        local_98 = (undefined1 *)0x0;
        local_90 = (undefined1 *)0x0;
        local_88 = (undefined1 *)0x0;
        if (uVar5 == 0) {
          puVar11 = (undefined1 *)0x0;
        }
        else {
                    /* try { // try from 005ab71c to 005ab723 has its CatchHandler @ 005aba78 */
          puVar11 = (undefined1 *)operator_new(uVar13);
          local_98 = puVar11;
          local_88 = puVar11 + uVar13;
          memset(puVar11,0,uVar13);
          local_90 = puVar11 + uVar13;
        }
                    /* try { // try from 005ab74c to 005ab757 has its CatchHandler @ 005abb00 */
        uVar12 = FUN_0071a964(lVar7,puVar11);
        puVar2 = local_90;
        puVar11 = local_98;
        if (uVar12 == uVar13) {
          local_b0 = (undefined1 *)0x0;
          local_a8 = (undefined1 *)0x0;
          lVar8 = *(long *)(param_2 + 0x10);
          local_a0 = (undefined1 *)0x0;
          __n = local_80 + (lVar8 - (long)local_78);
          if (__n != (undefined1 *)0x0) {
            if ((long)__n < 0) {
              if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 005aba1c to 005aba23 has its CatchHandler @ 005abafc */
                    /* WARNING: Subroutine does not return */
                FUN_004f04ec(&local_b0);
              }
              goto LAB_005abb58;
            }
                    /* try { // try from 005ab784 to 005ab78b has its CatchHandler @ 005abafc */
            local_b0 = (undefined1 *)operator_new((ulong)__n);
            puVar1 = local_b0 + (long)__n;
            local_a0 = puVar1;
            memset(local_b0,0,(size_t)__n);
            local_a8 = puVar1;
          }
          local_c8 = (undefined1 *)0x0;
          local_c0 = (undefined1 *)0x0;
          puVar11 = puVar11 + (lVar8 - (long)puVar2);
          local_b8 = (undefined1 *)0x0;
          if (puVar11 != (undefined1 *)0x0) {
            if ((long)puVar11 < 0) {
              if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 005aba34 to 005aba3b has its CatchHandler @ 005abaec */
                    /* WARNING: Subroutine does not return */
                FUN_004f04ec(&local_c8);
              }
              goto LAB_005abb58;
            }
                    /* try { // try from 005ab7c0 to 005ab7c7 has its CatchHandler @ 005abaec */
            local_c8 = (undefined1 *)operator_new((ulong)puVar11);
            puVar2 = local_c8 + (long)puVar11;
            local_b8 = puVar2;
            memset(local_c8,0,(size_t)puVar11);
            local_c0 = puVar2;
          }
                    /* try { // try from 005ab7e4 to 005ab7f3 has its CatchHandler @ 005aba9c */
          FUN_005a228c(&local_e0,&local_b0,&local_80);
                    /* try { // try from 005ab7f4 to 005ab803 has its CatchHandler @ 005aba8c */
          FUN_005a228c(&local_100,&local_c8,&local_98);
          param_1[2] = local_d0;
          param_1[1] = uStack_d8;
          *param_1 = local_e0;
          param_1[4] = uStack_f8;
          param_1[3] = local_100;
          param_1[5] = local_f0;
          if (0 < (long)local_c0 - (long)local_c8) {
            uVar13 = ((long)local_c0 - (long)local_c8) + 1;
            puVar11 = local_c8;
            do {
              uVar13 = uVar13 - 1;
              *puVar11 = 0;
              puVar11 = puVar11 + 1;
            } while (1 < uVar13);
          }
          if (local_c8 != (undefined1 *)0x0) {
            local_c0 = local_c8;
            operator_delete(local_c8);
          }
          if (0 < (long)local_a8 - (long)local_b0) {
            uVar13 = ((long)local_a8 - (long)local_b0) + 1;
            puVar11 = local_b0;
            do {
              uVar13 = uVar13 - 1;
              *puVar11 = 0;
              puVar11 = puVar11 + 1;
            } while (1 < uVar13);
          }
          if (local_b0 != (undefined1 *)0x0) {
            local_a8 = local_b0;
            operator_delete(local_b0);
          }
          if (0 < (long)local_90 - (long)local_98) {
            uVar13 = ((long)local_90 - (long)local_98) + 1;
            puVar11 = local_98;
            do {
              uVar13 = uVar13 - 1;
              *puVar11 = 0;
              puVar11 = puVar11 + 1;
            } while (1 < uVar13);
          }
          if (local_98 != (undefined1 *)0x0) {
            local_90 = local_98;
            operator_delete(local_98);
          }
          if (0 < (long)local_78 - (long)local_80) {
            uVar13 = ((long)local_78 - (long)local_80) + 1;
            puVar11 = local_80;
            do {
              uVar13 = uVar13 - 1;
              *puVar11 = 0;
              puVar11 = puVar11 + 1;
            } while (1 < uVar13);
          }
          if (local_80 != (undefined1 *)0x0) {
            local_78 = local_80;
            operator_delete(local_80);
          }
          if (lVar7 != 0) {
                    /* try { // try from 005ab8f8 to 005ab8ff has its CatchHandler @ 005aba74 */
            thunk_FUN_0071a024(lVar7);
          }
          if (lVar6 != 0) {
                    /* try { // try from 005ab904 to 005ab90b has its CatchHandler @ 005aba70 */
            thunk_FUN_0071a024(lVar6);
          }
          if (*(long *)(lVar3 + 0x28) == local_68) {
            return;
          }
        }
        else {
          uVar9 = FUN_0054f64c(0x10);
                    /* try { // try from 005ab9dc to 005ab9e3 has its CatchHandler @ 005aba3c */
          FUN_005aee88(uVar9);
          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 005ab9f4 to 005aba0b has its CatchHandler @ 005abb00 */
                    /* WARNING: Subroutine does not return */
            FUN_0054f748(uVar9,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
          }
        }
      }
      else {
        uVar9 = FUN_0054f64c(0x10);
                    /* try { // try from 005ab99c to 005ab9a3 has its CatchHandler @ 005aba4c */
        FUN_005aee88(uVar9);
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 005ab9b4 to 005ab9cb has its CatchHandler @ 005abb24 */
                    /* WARNING: Subroutine does not return */
          FUN_0054f748(uVar9,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
        }
      }
    }
    else {
      uVar9 = FUN_0054f64c(0x10);
                    /* try { // try from 005ab95c to 005ab963 has its CatchHandler @ 005aba5c */
      FUN_005aee88(uVar9);
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 005ab974 to 005ab98b has its CatchHandler @ 005abb2c */
                    /* WARNING: Subroutine does not return */
        FUN_0054f748(uVar9,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
      }
    }
  }
LAB_005abb58:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005abb64  FUN_005abb64 =====

undefined8 * FUN_005abb64(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  
  lVar3 = FUN_0071a744(*param_2,(long)(*(int *)(param_2 + 1) - (int)*param_2),0);
                    /* try { // try from 005abbac to 005abbb3 has its CatchHandler @ 005abda0 */
  lVar4 = FUN_0071a744(*param_3,(long)(*(int *)(param_3 + 1) - (int)*param_3),0);
  if (lVar3 == 0 || lVar4 == 0) {
    uVar6 = FUN_0054f64c(0x10);
                    /* try { // try from 005abc94 to 005abc9f has its CatchHandler @ 005abd64 */
    FUN_0054723c(uVar6,"Failed to convert bn_x or bn_y");
                    /* try { // try from 005abca0 to 005abcb7 has its CatchHandler @ 005abd5c */
                    /* WARNING: Subroutine does not return */
    FUN_0054f748(uVar6,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
  }
                    /* try { // try from 005abbc8 to 005abbcb has its CatchHandler @ 005abd98 */
  lVar5 = FUN_0072efdc(*(undefined4 *)(param_1 + 0x60));
  if (lVar5 != 0) {
                    /* try { // try from 005abbd4 to 005abbdb has its CatchHandler @ 005abd90 */
    uVar6 = FUN_0072f524(lVar5);
                    /* try { // try from 005abbdc to 005abbe3 has its CatchHandler @ 005abd88 */
    lVar7 = FUN_0072ca18();
                    /* try { // try from 005abbe4 to 005abc13 has its CatchHandler @ 005abdb4 */
    iVar2 = FUN_0072dea0(uVar6,lVar7,lVar3,lVar4,0);
    if (iVar2 == 1) {
      iVar2 = FUN_0072f1f8(lVar5,lVar7);
      if (iVar2 == 1) {
                    /* try { // try from 005abc1c to 005abc2b has its CatchHandler @ 005abda8 */
        uVar6 = FUN_007787a4();
        FUN_0077b37c(uVar6,lVar5);
                    /* try { // try from 005abc2c to 005abc33 has its CatchHandler @ 005abd84 */
        puVar8 = (undefined8 *)operator_new(0x20);
        puVar1 = PTR_thunk_FUN_00778828_00d51ea8;
        *puVar8 = &PTR_FUN_00d25300;
        puVar8[1] = &PTR_FUN_00d25320;
        puVar8[2] = uVar6;
        puVar8[3] = puVar1;
        if (lVar7 != 0) {
                    /* try { // try from 005abc58 to 005abc5f has its CatchHandler @ 005abd78 */
          thunk_FUN_0072cae8(lVar7);
        }
                    /* try { // try from 005abc60 to 005abc67 has its CatchHandler @ 005abd80 */
        thunk_FUN_0071a024(lVar4);
                    /* try { // try from 005abc68 to 005abc6f has its CatchHandler @ 005abd7c */
        thunk_FUN_0071a024(lVar3);
        return puVar8;
      }
      uVar6 = FUN_0054f64c(0x10);
                    /* try { // try from 005abd10 to 005abd17 has its CatchHandler @ 005abd30 */
      FUN_005aee88(uVar6);
    }
    else {
      uVar6 = FUN_0054f64c(0x10);
                    /* try { // try from 005abcf8 to 005abcff has its CatchHandler @ 005abd34 */
      FUN_005aee88(uVar6);
    }
                    /* try { // try from 005abd18 to 005abd2f has its CatchHandler @ 005abdb4 */
                    /* WARNING: Subroutine does not return */
    FUN_0054f748(uVar6,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
  }
  uVar6 = FUN_0054f64c(0x10);
                    /* try { // try from 005abcc8 to 005abcd3 has its CatchHandler @ 005abd4c */
  FUN_0054723c(uVar6,"Failed to create EC_KEY");
                    /* try { // try from 005abcd4 to 005abceb has its CatchHandler @ 005abd44 */
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar6,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
}


// ===== 005abdfc  FUN_005abdfc =====

void FUN_005abdfc(undefined8 *param_1)

{
  char cVar1;
  
  *param_1 = &PTR_FUN_00d25368;
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
    cVar1 = *(char *)((long)param_1 + 0x3f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x3f);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[5]);
  }
  operator_delete(param_1);
  return;
}


// ===== 005abe54  FUN_005abe54 =====

/* WARNING: Removing unreachable block (ram,0x005ac03c) */
/* WARNING: Removing unreachable block (ram,0x005ac0a8) */

undefined8 FUN_005abe54(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_00d63550 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d63550), iVar2 != 0)) {
                    /* try { // try from 005ac014 to 005ac023 has its CatchHandler @ 005ac120 */
    FUN_004a3cf4(&local_50,"dkp_prk");
                    /* try { // try from 005ac024 to 005ac033 has its CatchHandler @ 005ac108 */
    FUN_005a2680(&DAT_00d63538,&local_50);
    __cxa_atexit(FUN_004e9f60,&DAT_00d63538,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d63550);
  }
  if (((DAT_00d63570 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d63570), iVar2 != 0)) {
                    /* try { // try from 005ac080 to 005ac08f has its CatchHandler @ 005ac0f4 */
    FUN_004a3cf4(&local_50,&DAT_001bf4ab);
                    /* try { // try from 005ac090 to 005ac09f has its CatchHandler @ 005ac0dc */
    FUN_005a2680(&DAT_00d63558,&local_50);
    __cxa_atexit(FUN_004e9f60,&DAT_00d63558,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d63570);
  }
  local_68 = (undefined1 *)0x0;
  local_60 = (undefined1 *)0x0;
  local_58 = 0;
                    /* try { // try from 005abeac to 005abec7 has its CatchHandler @ 005ac154 */
  FUN_005acdb0(&local_50,param_1[0xb],param_2,&local_68,&DAT_00d63538,param_3);
  if (0 < (long)local_60 - (long)local_68) {
    uVar5 = ((long)local_60 - (long)local_68) + 1;
    puVar4 = local_68;
    do {
      uVar5 = uVar5 - 1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    } while (1 < uVar5);
  }
  if (local_68 != (undefined1 *)0x0) {
    local_60 = local_68;
    operator_delete(local_68);
  }
  local_80 = (undefined1 *)0x0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
                    /* try { // try from 005abf0c to 005abf27 has its CatchHandler @ 005ac140 */
  FUN_005ad04c(&local_68,param_1[0xb],param_2,&local_50,&DAT_00d63558,&local_80,param_1[4]);
  if (0 < (long)local_78 - (long)local_80) {
    uVar5 = ((long)local_78 - (long)local_80) + 1;
    puVar4 = local_80;
    do {
      uVar5 = uVar5 - 1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    } while (1 < uVar5);
  }
  if (local_80 != (undefined1 *)0x0) {
    local_78 = local_80;
    operator_delete(local_80);
  }
                    /* try { // try from 005abf64 to 005abf6f has its CatchHandler @ 005ac134 */
  uVar3 = (**(code **)(*param_1 + 0x38))(param_1,&local_68);
  if (0 < (long)local_60 - (long)local_68) {
    uVar5 = ((long)local_60 - (long)local_68) + 1;
    puVar4 = local_68;
    do {
      uVar5 = uVar5 - 1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    } while (1 < uVar5);
  }
  if (local_68 != (undefined1 *)0x0) {
    local_60 = local_68;
    operator_delete(local_68);
  }
  if (0 < (long)local_48 - (long)local_50) {
    uVar5 = ((long)local_48 - (long)local_50) + 1;
    puVar4 = local_50;
    do {
      uVar5 = uVar5 - 1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    } while (1 < uVar5);
  }
  if (local_50 != (undefined1 *)0x0) {
    local_48 = local_50;
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005ac17c  FUN_005ac17c =====

void FUN_005ac17c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  void *__s;
  undefined8 uVar4;
  ulong __n;
  long lVar5;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00550ef4(param_3,&PTR_PTR_thunk_FUN_00552768_00d251d8,
                       &PTR_PTR_thunk_FUN_00552768_00d25340,0);
  if (lVar3 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f5f0();
    }
  }
  else {
    __n = *(ulong *)(param_2 + 0x18);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    if (__n == 0) {
      lVar5 = 0;
      __s = (void *)0x0;
    }
    else {
      if ((long)__n < 0) {
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_004f04ec(param_1);
        }
        goto LAB_005ac2fc;
      }
      __s = operator_new(__n);
      lVar5 = (long)__s + __n;
      *param_1 = __s;
      param_1[2] = lVar5;
      memset(__s,0,__n);
      param_1[1] = lVar5;
    }
    local_50 = lVar5 - (long)__s;
                    /* try { // try from 005ac224 to 005ac22f has its CatchHandler @ 005ac2d8 */
    iVar2 = FUN_00778d84(*(undefined8 *)(lVar3 + 0x10),__s,&local_50);
    if (iVar2 == 1) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
    }
    else {
      uVar4 = FUN_0054f64c(0x10);
                    /* try { // try from 005ac280 to 005ac287 has its CatchHandler @ 005ac2c8 */
      FUN_005aee88(uVar4);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 005ac298 to 005ac2af has its CatchHandler @ 005ac2d8 */
                    /* WARNING: Subroutine does not return */
        FUN_0054f748(uVar4,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
      }
    }
  }
LAB_005ac2fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005ac300  FUN_005ac300 =====

void FUN_005ac300(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_00778cbc(*(undefined4 *)(param_1 + 0x60),0,*param_2,param_2[1] - *param_2);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)operator_new(0x20);
    puVar1 = PTR_thunk_FUN_00778828_00d51ea8;
    *puVar3 = &PTR_FUN_00d25300;
    puVar3[1] = &PTR_FUN_00d25320;
    puVar3[2] = lVar2;
    puVar3[3] = puVar1;
    return;
  }
  uVar4 = FUN_0054f64c(0x10);
                    /* try { // try from 005ac364 to 005ac36b has its CatchHandler @ 005ac384 */
  FUN_005aee88(uVar4);
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar4,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
}


// ===== 005ac398  FUN_005ac398 =====

void FUN_005ac398(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  void *__s;
  undefined8 uVar4;
  ulong __n;
  long lVar5;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00550ef4(param_3,&PTR_PTR_thunk_FUN_00552768_00d25330,
                       &PTR_PTR_thunk_FUN_00552768_00d252c0,0);
  if (lVar3 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f5f0();
    }
  }
  else {
    __n = *(ulong *)(param_2 + 0x20);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    if (__n == 0) {
      lVar5 = 0;
      __s = (void *)0x0;
    }
    else {
      if ((long)__n < 0) {
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_004f04ec(param_1);
        }
        goto LAB_005ac518;
      }
      __s = operator_new(__n);
      lVar5 = (long)__s + __n;
      *param_1 = __s;
      param_1[2] = lVar5;
      memset(__s,0,__n);
      param_1[1] = lVar5;
    }
    local_50 = lVar5 - (long)__s;
                    /* try { // try from 005ac440 to 005ac44b has its CatchHandler @ 005ac4f4 */
    iVar2 = FUN_00778d38(*(undefined8 *)(lVar3 + 8),__s,&local_50);
    if (iVar2 == 1) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
    }
    else {
      uVar4 = FUN_0054f64c(0x10);
                    /* try { // try from 005ac49c to 005ac4a3 has its CatchHandler @ 005ac4e4 */
      FUN_005aee88(uVar4);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 005ac4b4 to 005ac4cb has its CatchHandler @ 005ac4f4 */
                    /* WARNING: Subroutine does not return */
        FUN_0054f748(uVar4,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
      }
    }
  }
LAB_005ac518:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005ac51c  FUN_005ac51c =====

void FUN_005ac51c(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_00778c40(*(undefined4 *)(param_1 + 0x60),0,*param_2,param_2[1] - *param_2);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)operator_new(0x18);
    puVar1 = PTR_thunk_FUN_00778828_00d51ea8;
    *puVar3 = &PTR_FUN_00d252a8;
    puVar3[1] = lVar2;
    puVar3[2] = puVar1;
    return;
  }
  uVar4 = FUN_0054f64c(0x10);
                    /* try { // try from 005ac57c to 005ac583 has its CatchHandler @ 005ac59c */
  FUN_005aee88(uVar4);
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar4,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
}


// ===== 005ac5b0  FUN_005ac5b0 =====

/* WARNING: Removing unreachable block (ram,0x005ac694) */
/* WARNING: Removing unreachable block (ram,0x005ac698) */
/* WARNING: Removing unreachable block (ram,0x005ac6a8) */
/* WARNING: Removing unreachable block (ram,0x005ac6b0) */

void FUN_005ac5b0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00550ef4(param_3,&PTR_PTR_thunk_FUN_00552768_00d251d8,
                       &PTR_PTR_thunk_FUN_00552768_00d25340,0);
  if (lVar3 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f5f0();
    }
  }
  else {
    uVar6 = *(ulong *)(param_2 + 0x18);
    local_58 = (undefined1 *)0x0;
    local_50 = (undefined1 *)0x0;
    local_60 = (undefined1 *)0x0;
    if (uVar6 == 0) {
      puVar4 = (undefined1 *)0x0;
    }
    else {
      if ((long)uVar6 < 0) {
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_004f04ec(&local_60);
        }
        goto LAB_005ac7c0;
      }
      puVar4 = (undefined1 *)operator_new(uVar6);
      local_60 = puVar4;
      local_50 = puVar4 + uVar6;
      memset(puVar4,0,uVar6);
      local_58 = puVar4 + uVar6;
    }
    local_68 = (long)local_58 - (long)puVar4;
                    /* try { // try from 005ac658 to 005ac663 has its CatchHandler @ 005ac79c */
    iVar2 = FUN_00778d84(*(undefined8 *)(lVar3 + 0x10),puVar4,&local_68);
    if (iVar2 == 1) {
                    /* try { // try from 005ac674 to 005ac683 has its CatchHandler @ 005ac78c */
      FUN_0058d4b0(param_1);
      if (0 < (long)local_58 - (long)local_60) {
        uVar6 = ((long)local_58 - (long)local_60) + 1;
        puVar4 = local_60;
        do {
          uVar6 = uVar6 - 1;
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        } while (1 < uVar6);
      }
      if (local_60 != (undefined1 *)0x0) {
        local_58 = local_60;
        operator_delete(local_60);
      }
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
    }
    else {
      uVar5 = FUN_0054f64c(0x10);
                    /* try { // try from 005ac734 to 005ac73b has its CatchHandler @ 005ac77c */
      FUN_005aee88(uVar5);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 005ac74c to 005ac763 has its CatchHandler @ 005ac79c */
                    /* WARNING: Subroutine does not return */
        FUN_0054f748(uVar5,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
      }
    }
  }
LAB_005ac7c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005ac7c4  FUN_005ac7c4 =====

void FUN_005ac7c4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005ac7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}


// ===== 005ac7d0  FUN_005ac7d0 =====

undefined * FUN_005ac7d0(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_00d63598 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d63598), iVar1 != 0)) {
                    /* try { // try from 005ac810 to 005ac823 has its CatchHandler @ 005ac834 */
    uVar2 = FUN_005a8f64();
    FUN_005ac944(&DAT_00d63578,uVar2);
    FUN_0054ff1c(&DAT_00d63598);
  }
  return &DAT_00d63578;
}


// ===== 005ac84c  FUN_005ac84c =====

undefined * FUN_005ac84c(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_00d635c0 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d635c0), iVar1 != 0)) {
                    /* try { // try from 005ac88c to 005ac89f has its CatchHandler @ 005ac8b0 */
    uVar2 = FUN_005a8fe4();
    FUN_005ac944(&DAT_00d635a0,uVar2);
    FUN_0054ff1c(&DAT_00d635c0);
  }
  return &DAT_00d635a0;
}


// ===== 005ac8c8  FUN_005ac8c8 =====

undefined * FUN_005ac8c8(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_00d635e8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d635e8), iVar1 != 0)) {
                    /* try { // try from 005ac908 to 005ac91b has its CatchHandler @ 005ac92c */
    uVar2 = FUN_005a9068();
    FUN_005ac944(&DAT_00d635c8,uVar2);
    FUN_0054ff1c(&DAT_00d635e8);
  }
  return &DAT_00d635c8;
}


// ===== 005ac944  FUN_005ac944 =====

void FUN_005ac944(undefined8 *param_1,uint *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 < 3) {
    FUN_005acd98(param_1,*param_2 + 1,*(undefined8 *)(param_2 + 2));
    *param_1 = &PTR_FUN_00d25510;
    param_1[3] = param_2;
    return;
  }
  uVar1 = FUN_0054f64c(0x10);
                    /* try { // try from 005ac998 to 005ac9a3 has its CatchHandler @ 005ac9bc */
  FUN_0054723c(uVar1,"Unsupported algorithm");
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar1,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
}


// ===== 005ac9d0  FUN_005ac9d0 =====

void FUN_005ac9d0(long param_1)

{
  FUN_005a9444(*(undefined8 *)(param_1 + 0x18));
  return;
}


// ===== 005ac9d8  FUN_005ac9d8 =====

void FUN_005ac9d8(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  char *pcVar2;
  undefined1 *puVar3;
  ulong uVar4;
  char cVar5;
  char *local_b8;
  char *local_b0;
  char *pcStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined8 local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_70 = (undefined1 *)0x0;
  puStack_68 = (undefined1 *)0x0;
  local_60 = 0;
  if (param_5 != 0) {
    cVar5 = '\0';
    do {
                    /* try { // try from 005aca40 to 005aca4f has its CatchHandler @ 005acbc8 */
      FUN_005a228c(&local_a0,&local_70,param_4);
                    /* try { // try from 005aca50 to 005aca57 has its CatchHandler @ 005acbf0 */
      local_b8 = (char *)operator_new(1);
      cVar5 = cVar5 + '\x01';
      local_b0 = local_b8 + 1;
      *local_b8 = cVar5;
                    /* try { // try from 005aca6c to 005aca7b has its CatchHandler @ 005acbe0 */
      pcStack_a8 = local_b0;
      FUN_005a228c(&local_88,&local_a0,&local_b8);
      if (0 < (long)local_b0 - (long)local_b8) {
        uVar4 = ((long)local_b0 - (long)local_b8) + 1;
        pcVar2 = local_b8;
        do {
          uVar4 = uVar4 - 1;
          *pcVar2 = '\0';
          pcVar2 = pcVar2 + 1;
        } while (1 < uVar4);
      }
      if (local_b8 != (char *)0x0) {
        local_b0 = local_b8;
        operator_delete(local_b8);
      }
      if (0 < (long)puStack_98 - (long)local_a0) {
        uVar4 = ((long)puStack_98 - (long)local_a0) + 1;
        puVar3 = local_a0;
        do {
          uVar4 = uVar4 - 1;
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        } while (1 < uVar4);
      }
      if (local_a0 != (undefined1 *)0x0) {
        puStack_98 = local_a0;
        operator_delete(local_a0);
      }
                    /* try { // try from 005acae8 to 005acaf7 has its CatchHandler @ 005acbd4 */
      FUN_005a92d4(&local_a0,*(undefined8 *)(param_2 + 0x18),param_3,&local_88);
      if (local_70 != (undefined1 *)0x0) {
        puStack_68 = local_70;
        operator_delete(local_70);
      }
      puStack_68 = puStack_98;
      local_70 = local_a0;
      local_60 = local_90;
                    /* try { // try from 005acb18 to 005acb23 has its CatchHandler @ 005acbd0 */
      FUN_005a1e20(param_1,&local_70);
      if (0 < (long)local_80 - (long)local_88) {
        uVar4 = ((long)local_80 - (long)local_88) + 1;
        puVar3 = local_88;
        do {
          uVar4 = uVar4 - 1;
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        } while (1 < uVar4);
      }
      if (local_88 != (undefined1 *)0x0) {
        local_80 = local_88;
        operator_delete(local_88);
      }
      uVar4 = param_1[1] - *param_1;
    } while (uVar4 < param_5);
    if (param_5 < uVar4) {
      param_1[1] = *param_1 + param_5;
    }
  }
  if (0 < (long)puStack_68 - (long)local_70) {
    uVar4 = ((long)puStack_68 - (long)local_70) + 1;
    puVar3 = local_70;
    do {
      uVar4 = uVar4 - 1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (1 < uVar4);
  }
  if (local_70 != (undefined1 *)0x0) {
    puStack_68 = local_70;
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 005acc28  FUN_005acc28 =====

void FUN_005acc28(void)

{
  return;
}


// ===== 005acc2c  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 005acc30  FUN_005acc30 =====

void FUN_005acc30(undefined8 *param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  *(undefined2 *)(param_1 + 1) = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  *param_1 = &PTR_FUN_00d25568;
  param_1[4] = param_5;
  param_1[5] = param_6;
  return;
}


// ===== 005acc4c  FUN_005acc4c =====

void FUN_005acc4c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0054f64c(0x10);
                    /* try { // try from 005acc64 to 005acc6f has its CatchHandler @ 005acc88 */
  FUN_0054723c(uVar1,"Not implemented");
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar1,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
}


// ===== 005acc9c  FUN_005acc9c =====

void FUN_005acc9c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0054f64c(0x10);
                    /* try { // try from 005accb4 to 005accbf has its CatchHandler @ 005accd8 */
  FUN_0054723c(uVar1,"Not implemented");
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar1,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
}


// ===== 005accec  FUN_005accec =====

void FUN_005accec(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0054f64c(0x10);
                    /* try { // try from 005acd04 to 005acd0f has its CatchHandler @ 005acd28 */
  FUN_0054723c(uVar1,"Not implemented");
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar1,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
}


// ===== 005acd3c  FUN_005acd3c =====

void FUN_005acd3c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0054f64c(0x10);
                    /* try { // try from 005acd54 to 005acd5f has its CatchHandler @ 005acd78 */
  FUN_0054723c(uVar1,"Not implemented");
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar1,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
}


// ===== 005acd8c  thunk_FUN_005ac7d0 =====

undefined * thunk_FUN_005ac7d0(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_00d63598 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d63598), iVar1 != 0)) {
    uVar2 = FUN_005a8f64();
    FUN_005ac944(&DAT_00d63578,uVar2);
    FUN_0054ff1c(&DAT_00d63598);
  }
  return &DAT_00d63578;
}


// ===== 005acd90  thunk_FUN_005ac84c =====

undefined * thunk_FUN_005ac84c(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_00d635c0 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d635c0), iVar1 != 0)) {
    uVar2 = FUN_005a8fe4();
    FUN_005ac944(&DAT_00d635a0,uVar2);
    FUN_0054ff1c(&DAT_00d635c0);
  }
  return &DAT_00d635a0;
}


// ===== 005acd94  thunk_FUN_005ac8c8 =====

undefined * thunk_FUN_005ac8c8(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_00d635e8 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d635e8), iVar1 != 0)) {
    uVar2 = FUN_005a9068();
    FUN_005ac944(&DAT_00d635c8,uVar2);
    FUN_0054ff1c(&DAT_00d635e8);
  }
  return &DAT_00d635c8;
}


// ===== 005acd98  FUN_005acd98 =====

void FUN_005acd98(undefined8 *param_1,undefined2 param_2,undefined8 param_3)

{
  *(undefined2 *)(param_1 + 1) = param_2;
  param_1[2] = param_3;
  *param_1 = &PTR_FUN_00d255e8;
  return;
}


// ===== 005acdb0  FUN_005acdb0 =====

void FUN_005acdb0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_70;
  undefined1 *local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_005acf50();
  FUN_005a228c(&local_a0,&DAT_00d63648,param_3);
                    /* try { // try from 005ace08 to 005ace17 has its CatchHandler @ 005acf28 */
  FUN_005a228c(&local_88,&local_a0,param_5);
                    /* try { // try from 005ace18 to 005ace27 has its CatchHandler @ 005acf18 */
  FUN_005a228c(&local_70,&local_88,param_6);
  if (0 < (long)local_80 - (long)local_88) {
    uVar3 = ((long)local_80 - (long)local_88) + 1;
    puVar2 = local_88;
    do {
      uVar3 = uVar3 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (1 < uVar3);
  }
  if (local_88 != (undefined1 *)0x0) {
    local_80 = local_88;
    operator_delete(local_88);
  }
  if (0 < (long)local_98 - (long)local_a0) {
    uVar3 = ((long)local_98 - (long)local_a0) + 1;
    puVar2 = local_a0;
    do {
      uVar3 = uVar3 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (1 < uVar3);
  }
  if (local_a0 != (undefined1 *)0x0) {
    local_98 = local_a0;
    operator_delete(local_a0);
  }
                    /* try { // try from 005ace98 to 005aceab has its CatchHandler @ 005acf0c */
  (**(code **)(*param_2 + 0x10))(param_1,param_2,param_4,&local_70);
  if (0 < (long)local_68 - (long)local_70) {
    uVar3 = ((long)local_68 - (long)local_70) + 1;
    puVar2 = local_70;
    do {
      uVar3 = uVar3 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (1 < uVar3);
  }
  if (local_70 != (undefined1 *)0x0) {
    local_68 = local_70;
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 005acf50  FUN_005acf50 =====

void FUN_005acf50(void)

{
  long lVar1;
  int iVar2;
  void *local_40 [2];
  char local_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((DAT_00d63660 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d63660), iVar2 != 0)) {
                    /* try { // try from 005acfac to 005acfbb has its CatchHandler @ 005ad020 */
    FUN_004a3cf4(local_40,"HPKE-v1");
                    /* try { // try from 005acfbc to 005acfcb has its CatchHandler @ 005ad008 */
    FUN_005a2680(&DAT_00d63648,local_40);
    if (local_29 < '\0') {
      operator_delete(local_40[0]);
    }
    __cxa_atexit(FUN_004e9f60,&DAT_00d63648,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d63660);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005ad04c  FUN_005ad04c =====

void FUN_005ad04c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_70;
  undefined1 *local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_005a7404(&local_d0,param_7,2);
                    /* try { // try from 005ad0a0 to 005ad0b7 has its CatchHandler @ 005ad274 */
  FUN_005acf50();
  FUN_005a228c(&local_b8,&local_d0,&DAT_00d63648);
                    /* try { // try from 005ad0b8 to 005ad0c7 has its CatchHandler @ 005ad264 */
  FUN_005a228c(&local_a0,&local_b8,param_3);
                    /* try { // try from 005ad0c8 to 005ad0d7 has its CatchHandler @ 005ad254 */
  FUN_005a228c(&local_88,&local_a0,param_5);
                    /* try { // try from 005ad0d8 to 005ad0e7 has its CatchHandler @ 005ad244 */
  FUN_005a228c(&local_70,&local_88,param_6);
  if (0 < (long)local_80 - (long)local_88) {
    uVar3 = ((long)local_80 - (long)local_88) + 1;
    puVar2 = local_88;
    do {
      uVar3 = uVar3 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (1 < uVar3);
  }
  if (local_88 != (undefined1 *)0x0) {
    local_80 = local_88;
    operator_delete(local_88);
  }
  if (0 < (long)local_98 - (long)local_a0) {
    uVar3 = ((long)local_98 - (long)local_a0) + 1;
    puVar2 = local_a0;
    do {
      uVar3 = uVar3 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (1 < uVar3);
  }
  if (local_a0 != (undefined1 *)0x0) {
    local_98 = local_a0;
    operator_delete(local_a0);
  }
  if (0 < (long)local_b0 - (long)local_b8) {
    uVar3 = ((long)local_b0 - (long)local_b8) + 1;
    puVar2 = local_b8;
    do {
      uVar3 = uVar3 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (1 < uVar3);
  }
  if (local_b8 != (undefined1 *)0x0) {
    local_b0 = local_b8;
    operator_delete(local_b8);
  }
  if (0 < (long)local_c8 - (long)local_d0) {
    uVar3 = ((long)local_c8 - (long)local_d0) + 1;
    puVar2 = local_d0;
    do {
      uVar3 = uVar3 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (1 < uVar3);
  }
  if (local_d0 != (undefined1 *)0x0) {
    local_c8 = local_d0;
    operator_delete(local_d0);
  }
                    /* try { // try from 005ad1c0 to 005ad1d7 has its CatchHandler @ 005ad238 */
  (**(code **)(*param_2 + 0x18))(param_1,param_2,param_4,&local_70,param_7);
  if (0 < (long)local_68 - (long)local_70) {
    uVar3 = ((long)local_68 - (long)local_70) + 1;
    puVar2 = local_70;
    do {
      uVar3 = uVar3 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (1 < uVar3);
  }
  if (local_70 != (undefined1 *)0x0) {
    local_68 = local_70;
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 005ad29c  FUN_005ad29c =====

void FUN_005ad29c(undefined8 *param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined2 *)(param_1 + 1) = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  *param_1 = &PTR_FUN_00d25618;
  return;
}


// ===== 005ad2b4  FUN_005ad2b4 =====

void FUN_005ad2b4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  void *local_60 [2];
  char local_49;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  if (((DAT_00d63680 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d63680), iVar2 != 0)) {
                    /* try { // try from 005ad358 to 005ad367 has its CatchHandler @ 005ad3cc */
    FUN_004a3cf4(local_60,&DAT_001bf4b4);
                    /* try { // try from 005ad368 to 005ad377 has its CatchHandler @ 005ad3b4 */
    FUN_005a2680(&DAT_00d63668,local_60);
    if (local_49 < '\0') {
      operator_delete(local_60[0]);
    }
    __cxa_atexit(FUN_004e9f60,&DAT_00d63668,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d63680);
  }
  FUN_005ad04c(param_1,uVar3,param_2,param_2 + 0x48,&DAT_00d63668,param_3,param_4);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005ad3f8  FUN_005ad3f8 =====

void FUN_005ad3f8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_70;
  undefined1 *local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar1 = *(long **)(param_2 + 0x68);
  FUN_005a7404(&local_70,*(undefined8 *)(param_2 + 0x70),plVar1[3]);
                    /* try { // try from 005ad444 to 005ad44f has its CatchHandler @ 005ad58c */
  FUN_005a23e4(&local_88,&local_70,param_2 + 0x30);
  if (0 < (long)local_68 - (long)local_70) {
    uVar5 = ((long)local_68 - (long)local_70) + 1;
    puVar3 = local_70;
    do {
      uVar5 = uVar5 - 1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (1 < uVar5);
  }
  if (local_70 != (undefined1 *)0x0) {
    local_68 = local_70;
    operator_delete(local_70);
  }
                    /* try { // try from 005ad490 to 005ad4ab has its CatchHandler @ 005ad580 */
  (**(code **)(*plVar1 + 0x10))(param_1,plVar1,param_2 + 0x18,&local_88,param_3,param_4);
  if (0 < (long)local_80 - (long)local_88) {
    uVar5 = ((long)local_80 - (long)local_88) + 1;
    puVar3 = local_88;
    do {
      uVar5 = uVar5 - 1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (1 < uVar5);
  }
  if (local_88 != (undefined1 *)0x0) {
    local_80 = local_88;
    operator_delete(local_88);
  }
  if (*(long *)(param_2 + 0x70) == -1) {
    uVar4 = FUN_0054f64c(0x10);
                    /* try { // try from 005ad52c to 005ad537 has its CatchHandler @ 005ad56c */
    FUN_0054723c(uVar4,"Sequence number overflow");
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 005ad548 to 005ad55f has its CatchHandler @ 005ad560 */
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar4,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
    }
  }
  else {
    *(long *)(param_2 + 0x70) = *(long *)(param_2 + 0x70) + 1;
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005ad5b4  FUN_005ad5b4 =====

void FUN_005ad5b4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_70;
  undefined1 *local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar1 = *(long **)(param_2 + 0x68);
  FUN_005a7404(&local_70,*(undefined8 *)(param_2 + 0x70),plVar1[3]);
                    /* try { // try from 005ad600 to 005ad60b has its CatchHandler @ 005ad748 */
  FUN_005a23e4(&local_88,&local_70,param_2 + 0x30);
  if (0 < (long)local_68 - (long)local_70) {
    uVar5 = ((long)local_68 - (long)local_70) + 1;
    puVar3 = local_70;
    do {
      uVar5 = uVar5 - 1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (1 < uVar5);
  }
  if (local_70 != (undefined1 *)0x0) {
    local_68 = local_70;
    operator_delete(local_70);
  }
                    /* try { // try from 005ad64c to 005ad667 has its CatchHandler @ 005ad73c */
  (**(code **)(*plVar1 + 0x18))(param_1,plVar1,param_2 + 0x18,&local_88,param_3,param_4);
  if (0 < (long)local_80 - (long)local_88) {
    uVar5 = ((long)local_80 - (long)local_88) + 1;
    puVar3 = local_88;
    do {
      uVar5 = uVar5 - 1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (1 < uVar5);
  }
  if (local_88 != (undefined1 *)0x0) {
    local_80 = local_88;
    operator_delete(local_88);
  }
  if (*(long *)(param_2 + 0x70) == -1) {
    uVar4 = FUN_0054f64c(0x10);
                    /* try { // try from 005ad6e8 to 005ad6f3 has its CatchHandler @ 005ad724 */
    FUN_0054723c(uVar4,"Sequence number overflow");
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 005ad704 to 005ad71b has its CatchHandler @ 005ad71c */
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar4,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
    }
  }
  else {
    *(long *)(param_2 + 0x70) = *(long *)(param_2 + 0x70) + 1;
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005ad770  FUN_005ad770 =====

/* WARNING: Removing unreachable block (ram,0x005ada5c) */

void FUN_005ad770(long param_1,undefined2 param_2,short param_3,ushort param_4)

{
  long lVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_60;
  undefined1 *local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((DAT_00d636a0 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d636a0), iVar2 != 0)) {
                    /* try { // try from 005ada34 to 005ada43 has its CatchHandler @ 005adb60 */
    FUN_004a3cf4(&local_60,&DAT_001bc90b);
                    /* try { // try from 005ada44 to 005ada53 has its CatchHandler @ 005adb48 */
    FUN_005a2680(&DAT_00d63688,&local_60);
    __cxa_atexit(FUN_004e9f60,&DAT_00d63688,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d636a0);
  }
  FUN_005a7404(&local_60,param_2,2);
                    /* try { // try from 005ad7c4 to 005ad7d7 has its CatchHandler @ 005adbcc */
  FUN_005a228c(&local_90,&DAT_00d63688,&local_60);
                    /* try { // try from 005ad7dc to 005ad7e7 has its CatchHandler @ 005adbbc */
  FUN_005a7404(&local_a8,param_3,2);
                    /* try { // try from 005ad7e8 to 005ad7f7 has its CatchHandler @ 005adbac */
  FUN_005a228c(&local_78,&local_90,&local_a8);
                    /* try { // try from 005ad7fc to 005ad807 has its CatchHandler @ 005adb9c */
  FUN_005a7404(&local_c0,param_4,2);
                    /* try { // try from 005ad808 to 005ad817 has its CatchHandler @ 005adb8c */
  FUN_005a228c(param_1,&local_78,&local_c0);
  if (0 < (long)local_b8 - (long)local_c0) {
    uVar6 = ((long)local_b8 - (long)local_c0) + 1;
    puVar3 = local_c0;
    do {
      uVar6 = uVar6 - 1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (1 < uVar6);
  }
  if (local_c0 != (undefined1 *)0x0) {
    local_b8 = local_c0;
    operator_delete(local_c0);
  }
  if (0 < (long)local_70 - (long)local_78) {
    uVar6 = ((long)local_70 - (long)local_78) + 1;
    puVar3 = local_78;
    do {
      uVar6 = uVar6 - 1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (1 < uVar6);
  }
  if (local_78 != (undefined1 *)0x0) {
    local_70 = local_78;
    operator_delete(local_78);
  }
  if (0 < (long)local_a0 - (long)local_a8) {
    uVar6 = ((long)local_a0 - (long)local_a8) + 1;
    puVar3 = local_a8;
    do {
      uVar6 = uVar6 - 1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (1 < uVar6);
  }
  if (local_a8 != (undefined1 *)0x0) {
    local_a0 = local_a8;
    operator_delete(local_a8);
  }
  if (0 < (long)local_88 - (long)local_90) {
    uVar6 = ((long)local_88 - (long)local_90) + 1;
    puVar3 = local_90;
    do {
      uVar6 = uVar6 - 1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (1 < uVar6);
  }
  if (local_90 != (undefined1 *)0x0) {
    local_88 = local_90;
    operator_delete(local_90);
  }
  if (0 < (long)local_58 - (long)local_60) {
    uVar6 = ((long)local_58 - (long)local_60) + 1;
    puVar3 = local_60;
    do {
      uVar6 = uVar6 - 1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (1 < uVar6);
  }
  if (local_60 != (undefined1 *)0x0) {
    local_58 = local_60;
    operator_delete(local_60);
  }
  switch(param_2) {
  case 0x10:
                    /* try { // try from 005ad944 to 005ad9f7 has its CatchHandler @ 005adbd8 */
    uVar5 = FUN_005a75b8();
    break;
  case 0x11:
    uVar5 = FUN_005a76ac();
    break;
  case 0x12:
    uVar5 = FUN_005a7754();
    break;
  default:
    uVar5 = FUN_0054f64c(0x10);
                    /* try { // try from 005adab8 to 005adac3 has its CatchHandler @ 005adb78 */
    FUN_0054723c(uVar5,"Unsupported algorithm");
    goto LAB_005adae0;
  case 0x20:
    uVar5 = FUN_005a77fc();
  }
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  if (param_3 == 3) {
    uVar5 = FUN_005ac8c8();
LAB_005ad994:
    *(undefined8 *)(param_1 + 0x20) = uVar5;
    if (param_4 < 3) {
      if (param_4 == 1) {
        puVar4 = (undefined *)FUN_005a383c();
      }
      else {
        if (param_4 != 2) {
LAB_005adac8:
          uVar5 = FUN_0054f64c(0x10);
                    /* try { // try from 005adad4 to 005adadf has its CatchHandler @ 005adb74 */
          FUN_0054723c(uVar5,"Unsupported algorithm");
          goto LAB_005adae0;
        }
        puVar4 = (undefined *)FUN_005a38b4();
      }
    }
    else if (param_4 == 3) {
      puVar4 = (undefined *)FUN_005a392c();
    }
    else {
      if (param_4 != 0xffff) goto LAB_005adac8;
      if (((DAT_00d63610 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d63610), iVar2 != 0)) {
                    /* try { // try from 005adb18 to 005adb23 has its CatchHandler @ 005adb34 */
        FUN_005a3804(&DAT_00d635f0);
        FUN_0054ff1c(&DAT_00d63610);
      }
      puVar4 = &DAT_00d635f0;
    }
    *(undefined **)(param_1 + 0x28) = puVar4;
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else {
    if (param_3 == 2) {
      uVar5 = FUN_005ac84c();
      goto LAB_005ad994;
    }
    if (param_3 == 1) {
      uVar5 = FUN_005ac7d0();
      goto LAB_005ad994;
    }
    uVar5 = FUN_0054f64c(0x10);
                    /* try { // try from 005ada9c to 005adaa7 has its CatchHandler @ 005adb7c */
    FUN_0054723c(uVar5,"Unsupported algorithm");
LAB_005adae0:
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 005adaf0 to 005adb07 has its CatchHandler @ 005adbd8 */
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar5,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005adc00  FUN_005adc00 =====

void FUN_005adc00(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  ulong uVar19;
  undefined1 *puVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_88;
  undefined1 *local_80;
  long local_70;
  undefined1 *puVar18;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(param_2 + 0x18) + 0x40))(&local_a0);
                    /* try { // try from 005adc50 to 005adc77 has its CatchHandler @ 005ade78 */
  FUN_005adebc(&local_118,param_2,0,&local_a0,param_4,&DAT_00d63618,&DAT_00d63630);
  puVar16 = local_88;
  uVar14 = uStack_c0;
  uVar13 = local_c8;
  uVar12 = uStack_d0;
  uVar11 = local_d8;
  uVar10 = uStack_e0;
  uVar9 = local_e8;
  uVar8 = uStack_f0;
  uVar7 = local_f8;
  uVar6 = uStack_100;
  uVar5 = local_108;
  uVar4 = uStack_110;
  uVar3 = local_118;
  local_118 = 0;
  uStack_110 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar19 = (long)local_80 - (long)local_88;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  param_1[2] = 0;
  if (uVar19 != 0) {
    if ((long)uVar19 < 0) {
      if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(param_1);
      }
      goto LAB_005adeb8;
    }
                    /* try { // try from 005adcf8 to 005ade77 has its CatchHandler @ 005ade80 */
    puVar15 = (undefined1 *)operator_new(uVar19);
    *param_1 = puVar15;
    param_1[1] = puVar15;
    param_1[2] = puVar15 + uVar19;
    puVar18 = puVar16;
    if ((uVar19 < 0x20) || ((ulong)((long)puVar15 - (long)puVar16) < 0x20)) {
LAB_005add6c:
      do {
        puVar17 = puVar18 + 1;
        puVar20 = puVar15 + 1;
        *puVar15 = *puVar18;
        puVar18 = puVar17;
        puVar15 = puVar20;
      } while (puVar17 != local_80);
    }
    else {
      uVar21 = uVar19 & 0xffffffffffffffe0;
      puVar22 = (undefined8 *)(puVar15 + 0x10);
      puVar20 = puVar15 + uVar21;
      puVar23 = (undefined8 *)(puVar16 + 0x10);
      uVar24 = uVar21;
      do {
        puVar2 = puVar23 + -1;
        uVar25 = puVar23[-2];
        uVar27 = puVar23[1];
        uVar26 = *puVar23;
        puVar23 = puVar23 + 4;
        uVar24 = uVar24 - 0x20;
        puVar22[-1] = *puVar2;
        puVar22[-2] = uVar25;
        puVar22[1] = uVar27;
        *puVar22 = uVar26;
        puVar22 = puVar22 + 4;
      } while (uVar24 != 0);
      puVar18 = puVar16 + uVar21;
      puVar15 = puVar20;
      if (uVar19 != uVar21) goto LAB_005add6c;
    }
    param_1[1] = puVar20;
  }
  param_1[9] = uVar9;
  param_1[10] = uVar10;
  param_1[0xb] = uVar11;
  param_1[0xc] = uVar12;
  param_1[0xd] = uVar13;
  param_1[0xe] = uVar14;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  param_1[8] = uVar8;
  param_1[0x10] = uStack_b0;
  param_1[0xf] = local_b8;
  param_1[0x11] = local_a8;
  if (0 < (long)uVar19) {
    uVar19 = uVar19 + 1;
    puVar18 = puVar16;
    do {
      uVar19 = uVar19 - 1;
      *puVar18 = 0;
      puVar16 = local_88;
      puVar18 = puVar18 + 1;
    } while (1 < uVar19);
  }
  if (puVar16 != (undefined1 *)0x0) {
    operator_delete(puVar16);
  }
  if (0 < (long)local_98 - (long)local_a0) {
    uVar19 = ((long)local_98 - (long)local_a0) + 1;
    puVar16 = local_a0;
    do {
      uVar19 = uVar19 - 1;
      *puVar16 = 0;
      puVar16 = puVar16 + 1;
    } while (1 < uVar19);
  }
  if (local_a0 != (undefined1 *)0x0) {
    local_98 = local_a0;
    operator_delete(local_a0);
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
LAB_005adeb8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005adebc  FUN_005adebc =====

/* WARNING: Removing unreachable block (ram,0x005ae874) */
/* WARNING: Removing unreachable block (ram,0x005ae79c) */
/* WARNING: Removing unreachable block (ram,0x005ae6c4) */
/* WARNING: Removing unreachable block (ram,0x005ae730) */
/* WARNING: Removing unreachable block (ram,0x005ae808) */
/* WARNING: Removing unreachable block (ram,0x005ae8e0) */

void FUN_005adebc(undefined8 *param_1,long *param_2,byte param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  undefined8 *puVar21;
  ulong uVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  long lVar28;
  undefined1 *puVar29;
  long lVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined1 *local_118;
  undefined1 *local_110;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined1 *local_e8;
  undefined1 *local_e0;
  byte *local_d0;
  byte *local_c8;
  byte *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_88;
  undefined1 *local_80;
  long local_70;
  undefined1 *puVar20;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  bVar6 = FUN_005a1a98(param_6,&DAT_00d63618);
  bVar7 = FUN_005a1a98(param_7,&DAT_00d63630);
  if ((((bVar6 ^ bVar7) & 1) != 0) || ((param_3 & 0xfd) != (bVar6 & 1))) {
    uVar12 = FUN_0054f64c(0x10);
                    /* try { // try from 005ae654 to 005ae65f has its CatchHandler @ 005aeae8 */
    FUN_0054723c(uVar12,"Invalid PSK inputs");
    if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar12,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
    }
    goto LAB_005aeb88;
  }
  local_b8 = (undefined1 *)0x0;
  local_b0 = (undefined1 *)0x0;
  lVar28 = param_2[4];
  local_a8 = 0;
  if (((DAT_00d636c0 & 1) == 0) && (iVar8 = FUN_0054fdd4(&DAT_00d636c0), iVar8 != 0)) {
                    /* try { // try from 005ae69c to 005ae6ab has its CatchHandler @ 005aea7c */
    FUN_004a3cf4(&local_88,"psk_id_hash");
                    /* try { // try from 005ae6ac to 005ae6bb has its CatchHandler @ 005aea64 */
    FUN_005a2680(&DAT_00d636a8,&local_88);
    __cxa_atexit(FUN_004e9f60,&DAT_00d636a8,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d636c0);
  }
                    /* try { // try from 005adf64 to 005adf83 has its CatchHandler @ 005aeadc */
  FUN_005acdb0(&local_a0,lVar28,param_2,&local_b8,&DAT_00d636a8,param_7);
  if (0 < (long)local_b0 - (long)local_b8) {
    uVar13 = ((long)local_b0 - (long)local_b8) + 1;
    puVar11 = local_b8;
    do {
      uVar13 = uVar13 - 1;
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    } while (1 < uVar13);
  }
  if (local_b8 != (undefined1 *)0x0) {
    local_b0 = local_b8;
    operator_delete(local_b8);
  }
  local_d0 = (byte *)0x0;
  local_c8 = (byte *)0x0;
  lVar28 = param_2[4];
  local_c0 = (byte *)0x0;
  if (((DAT_00d636e0 & 1) == 0) && (iVar8 = FUN_0054fdd4(&DAT_00d636e0), iVar8 != 0)) {
                    /* try { // try from 005ae708 to 005ae717 has its CatchHandler @ 005aea4c */
    FUN_004a3cf4(&local_88,"info_hash");
                    /* try { // try from 005ae718 to 005ae727 has its CatchHandler @ 005aea34 */
    FUN_005a2680(&DAT_00d636c8,&local_88);
    __cxa_atexit(FUN_004e9f60,&DAT_00d636c8,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d636e0);
  }
                    /* try { // try from 005adfd4 to 005adff3 has its CatchHandler @ 005aead0 */
  FUN_005acdb0(&local_b8,lVar28,param_2,&local_d0,&DAT_00d636c8,param_5);
  if (0 < (long)local_c8 - (long)local_d0) {
    uVar13 = ((long)local_c8 - (long)local_d0) + 1;
    pbVar10 = local_d0;
    do {
      uVar13 = uVar13 - 1;
      *pbVar10 = 0;
      pbVar10 = pbVar10 + 1;
    } while (1 < uVar13);
  }
  if (local_d0 != (byte *)0x0) {
    local_c8 = local_d0;
    operator_delete(local_d0);
  }
                    /* try { // try from 005ae028 to 005ae02f has its CatchHandler @ 005aeac8 */
  local_d0 = (byte *)operator_new(1);
  local_c8 = local_d0 + 1;
  *local_d0 = param_3;
                    /* try { // try from 005ae03c to 005ae04b has its CatchHandler @ 005aeac0 */
  local_c0 = local_c8;
  FUN_005a228c(&local_88,&local_d0,&local_a0);
                    /* try { // try from 005ae04c to 005ae05b has its CatchHandler @ 005aeab4 */
  FUN_005a228c(&local_e8,&local_88,&local_b8);
  if (0 < (long)local_80 - (long)local_88) {
    uVar13 = ((long)local_80 - (long)local_88) + 1;
    puVar11 = local_88;
    do {
      uVar13 = uVar13 - 1;
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    } while (1 < uVar13);
  }
  if (local_88 != (undefined1 *)0x0) {
    local_80 = local_88;
    operator_delete(local_88);
  }
  lVar28 = param_2[4];
  if (((DAT_00d63700 & 1) == 0) && (iVar8 = FUN_0054fdd4(&DAT_00d63700), iVar8 != 0)) {
                    /* try { // try from 005ae774 to 005ae783 has its CatchHandler @ 005aea20 */
    FUN_004a3cf4(&local_88,"secret");
                    /* try { // try from 005ae784 to 005ae793 has its CatchHandler @ 005aea08 */
    FUN_005a2680(&DAT_00d636e8,&local_88);
    __cxa_atexit(FUN_004e9f60,&DAT_00d636e8,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d63700);
  }
                    /* try { // try from 005ae0a4 to 005ae0c3 has its CatchHandler @ 005aeaac */
  FUN_005acdb0(&local_100,lVar28,param_2,param_4,&DAT_00d636e8,param_6);
  lVar28 = param_2[4];
  if (((DAT_00d63720 & 1) == 0) && (iVar8 = FUN_0054fdd4(&DAT_00d63720), iVar8 != 0)) {
                    /* try { // try from 005ae7e0 to 005ae7ef has its CatchHandler @ 005ae9f4 */
    FUN_004a3cf4(&local_88,&DAT_001a6150);
                    /* try { // try from 005ae7f0 to 005ae7ff has its CatchHandler @ 005ae9dc */
    FUN_005a2680(&DAT_00d63708,&local_88);
    __cxa_atexit(FUN_004e9f60,&DAT_00d63708,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d63720);
  }
                    /* try { // try from 005ae0e0 to 005ae0ff has its CatchHandler @ 005aeaa4 */
  FUN_005ad04c(&local_118,lVar28,param_2,&local_100,&DAT_00d63708,&local_e8,
               *(undefined8 *)(param_2[5] + 0x10));
  lVar28 = param_2[4];
  if (((DAT_00d63740 & 1) == 0) && (iVar8 = FUN_0054fdd4(&DAT_00d63740), iVar8 != 0)) {
                    /* try { // try from 005ae84c to 005ae85b has its CatchHandler @ 005ae9c8 */
    FUN_004a3cf4(&local_88,"base_nonce");
                    /* try { // try from 005ae85c to 005ae86b has its CatchHandler @ 005ae9b0 */
    FUN_005a2680(&DAT_00d63728,&local_88);
    __cxa_atexit(FUN_004e9f60,&DAT_00d63728,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d63740);
  }
                    /* try { // try from 005ae11c to 005ae13b has its CatchHandler @ 005aea9c */
  FUN_005ad04c(&local_130,lVar28,param_2,&local_100,&DAT_00d63728,&local_e8,
               *(undefined8 *)(param_2[5] + 0x18));
  lVar28 = param_2[4];
  if (((DAT_00d63760 & 1) == 0) && (iVar8 = FUN_0054fdd4(&DAT_00d63760), iVar8 != 0)) {
                    /* try { // try from 005ae8b8 to 005ae8c7 has its CatchHandler @ 005ae99c */
    FUN_004a3cf4(&local_88,&DAT_001e79b3);
                    /* try { // try from 005ae8c8 to 005ae8d7 has its CatchHandler @ 005ae984 */
    FUN_005a2680(&DAT_00d63748,&local_88);
    __cxa_atexit(FUN_004e9f60,&DAT_00d63748,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d63760);
  }
                    /* try { // try from 005ae158 to 005ae177 has its CatchHandler @ 005aea94 */
  FUN_005ad04c(&local_148,lVar28,param_2,&local_100,&DAT_00d63748,&local_e8,
               *(undefined8 *)(param_2[4] + 0x10));
  puVar11 = (undefined1 *)*param_2;
  puVar1 = (undefined1 *)param_2[1];
  local_160 = (undefined1 *)0x0;
  local_158 = (undefined1 *)0x0;
  local_150 = (undefined1 *)0x0;
  uVar13 = (long)puVar1 - (long)puVar11;
  if (uVar13 != 0) {
    if ((long)uVar13 < 0) {
      if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 005ae928 to 005ae92f has its CatchHandler @ 005aeb28 */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_160);
      }
      goto LAB_005aeb88;
    }
                    /* try { // try from 005ae190 to 005ae197 has its CatchHandler @ 005aeb28 */
    local_160 = (undefined1 *)operator_new(uVar13);
    local_150 = local_160 + uVar13;
    puVar29 = local_160;
    if ((0x1f < uVar13) && (0x1f < (ulong)((long)local_160 - (long)puVar11))) {
      uVar14 = uVar13 & 0xffffffffffffffe0;
      puVar18 = (undefined8 *)(local_160 + 0x10);
      local_158 = local_160 + uVar14;
      puVar21 = (undefined8 *)(puVar11 + 0x10);
      uVar22 = uVar14;
      do {
        puVar3 = puVar21 + -1;
        uVar12 = puVar21[-2];
        uVar32 = puVar21[1];
        uVar31 = *puVar21;
        puVar21 = puVar21 + 4;
        uVar22 = uVar22 - 0x20;
        puVar18[-1] = *puVar3;
        puVar18[-2] = uVar12;
        puVar18[1] = uVar32;
        *puVar18 = uVar31;
        puVar18 = puVar18 + 4;
      } while (uVar22 != 0);
      puVar11 = puVar11 + uVar14;
      puVar29 = local_158;
      if (uVar13 == uVar14) goto LAB_005ae228;
    }
    do {
      puVar23 = puVar11 + 1;
      local_158 = puVar29 + 1;
      *puVar29 = *puVar11;
      puVar11 = puVar23;
      puVar29 = local_158;
    } while (puVar23 != puVar1);
  }
LAB_005ae228:
  puVar5 = local_110;
  puVar23 = local_118;
  puVar29 = local_150;
  puVar1 = local_158;
  puVar11 = local_160;
  local_178 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (undefined1 *)0x0;
  uVar13 = (long)local_110 - (long)local_118;
  if (uVar13 != 0) {
    if ((long)uVar13 < 0) {
      if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 005ae944 to 005ae94b has its CatchHandler @ 005aeb18 */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_178);
      }
      goto LAB_005aeb88;
    }
                    /* try { // try from 005ae244 to 005ae24b has its CatchHandler @ 005aeb18 */
    local_178 = (undefined1 *)operator_new(uVar13);
    local_168 = local_178 + uVar13;
    puVar26 = local_178;
    if ((0x1f < uVar13) && (0x1f < (ulong)((long)local_178 - (long)puVar23))) {
      uVar14 = uVar13 & 0xffffffffffffffe0;
      puVar18 = (undefined8 *)(local_178 + 0x10);
      local_170 = local_178 + uVar14;
      puVar21 = (undefined8 *)(puVar23 + 0x10);
      uVar22 = uVar14;
      do {
        puVar3 = puVar21 + -1;
        uVar12 = puVar21[-2];
        uVar32 = puVar21[1];
        uVar31 = *puVar21;
        puVar21 = puVar21 + 4;
        uVar22 = uVar22 - 0x20;
        puVar18[-1] = *puVar3;
        puVar18[-2] = uVar12;
        puVar18[1] = uVar32;
        *puVar18 = uVar31;
        puVar18 = puVar18 + 4;
      } while (uVar22 != 0);
      puVar23 = puVar23 + uVar14;
      puVar26 = local_170;
      if (uVar13 == uVar14) goto LAB_005ae2e0;
    }
    do {
      puVar24 = puVar23 + 1;
      local_170 = puVar26 + 1;
      *puVar26 = *puVar23;
      puVar23 = puVar24;
      puVar26 = local_170;
    } while (puVar24 != puVar5);
  }
LAB_005ae2e0:
  puVar4 = local_128;
  puVar24 = local_130;
  puVar26 = local_168;
  puVar5 = local_170;
  puVar23 = local_178;
  local_190 = (undefined1 *)0x0;
  local_188 = (undefined1 *)0x0;
  local_180 = (undefined1 *)0x0;
  uVar13 = (long)local_128 - (long)local_130;
  if (uVar13 != 0) {
    if ((long)uVar13 < 0) {
      if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 005ae960 to 005ae967 has its CatchHandler @ 005aeb08 */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_190);
      }
      goto LAB_005aeb88;
    }
                    /* try { // try from 005ae2f8 to 005ae2ff has its CatchHandler @ 005aeb08 */
    local_190 = (undefined1 *)operator_new(uVar13);
    local_180 = local_190 + uVar13;
    puVar27 = local_190;
    if ((0x1f < uVar13) && (0x1f < (ulong)((long)local_190 - (long)puVar24))) {
      uVar14 = uVar13 & 0xffffffffffffffe0;
      puVar18 = (undefined8 *)(local_190 + 0x10);
      local_188 = local_190 + uVar14;
      puVar21 = (undefined8 *)(puVar24 + 0x10);
      uVar22 = uVar14;
      do {
        puVar3 = puVar21 + -1;
        uVar12 = puVar21[-2];
        uVar32 = puVar21[1];
        uVar31 = *puVar21;
        puVar21 = puVar21 + 4;
        uVar22 = uVar22 - 0x20;
        puVar18[-1] = *puVar3;
        puVar18[-2] = uVar12;
        puVar18[1] = uVar32;
        *puVar18 = uVar31;
        puVar18 = puVar18 + 4;
      } while (uVar22 != 0);
      puVar24 = puVar24 + uVar14;
      puVar27 = local_188;
      if (uVar13 == uVar14) goto LAB_005ae394;
    }
    do {
      puVar25 = puVar24 + 1;
      local_188 = puVar27 + 1;
      *puVar27 = *puVar24;
      puVar24 = puVar25;
      puVar27 = local_188;
    } while (puVar25 != puVar4);
  }
LAB_005ae394:
  puVar25 = local_148;
  puVar27 = local_180;
  puVar4 = local_188;
  puVar24 = local_190;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uVar13 = (long)local_140 - (long)local_148;
  if (uVar13 == 0) {
    puVar15 = (undefined1 *)0x0;
    puVar17 = (undefined1 *)0x0;
    puVar9 = (undefined1 *)0x0;
  }
  else {
    if ((long)uVar13 < 0) {
      if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 005ae97c to 005ae983 has its CatchHandler @ 005aeaf8 */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(&local_1a8);
      }
      goto LAB_005aeb88;
    }
                    /* try { // try from 005ae3ac to 005ae3b3 has its CatchHandler @ 005aeaf8 */
    puVar9 = (undefined1 *)operator_new(uVar13);
    puVar15 = puVar9 + uVar13;
    puVar16 = puVar9;
    puVar20 = puVar25;
    if ((0x1f < uVar13) && (0x1f < (ulong)((long)puVar9 - (long)puVar25))) {
      uVar14 = uVar13 & 0xffffffffffffffe0;
      uVar22 = 0;
      puVar17 = puVar9 + uVar14;
      do {
        puVar18 = (undefined8 *)(puVar25 + uVar22);
        puVar21 = (undefined8 *)(puVar9 + uVar22);
        uVar22 = uVar22 + 0x20;
        uVar12 = *puVar18;
        uVar32 = puVar18[3];
        uVar31 = puVar18[2];
        puVar21[1] = puVar18[1];
        *puVar21 = uVar12;
        puVar21[3] = uVar32;
        puVar21[2] = uVar31;
      } while (uVar14 != uVar22);
      puVar16 = puVar17;
      puVar20 = puVar25 + uVar14;
      if (uVar13 == uVar14) goto LAB_005ae430;
    }
    do {
      puVar19 = puVar20 + 1;
      puVar17 = puVar16 + 1;
      *puVar16 = *puVar20;
      puVar16 = puVar17;
      puVar20 = puVar19;
    } while (puVar19 != local_140);
  }
LAB_005ae430:
  lVar30 = param_2[5];
  lVar28 = param_2[4];
  local_158 = (undefined1 *)0x0;
  local_150 = (undefined1 *)0x0;
  local_168 = (undefined1 *)0x0;
  local_160 = (undefined1 *)0x0;
  *param_1 = puVar11;
  param_1[1] = puVar1;
  local_178 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  param_1[6] = puVar24;
  param_1[7] = puVar4;
  param_1[2] = puVar29;
  param_1[3] = puVar23;
  local_188 = (undefined1 *)0x0;
  local_180 = (undefined1 *)0x0;
  local_190 = (undefined1 *)0x0;
  param_1[4] = puVar5;
  param_1[5] = puVar26;
  param_1[10] = puVar17;
  param_1[0xb] = puVar15;
  param_1[0xd] = lVar30;
  param_1[0xc] = lVar28;
  param_1[8] = puVar27;
  param_1[9] = puVar9;
  param_1[0xe] = 0;
  if (0 < (long)uVar13) {
    uVar13 = uVar13 + 1;
    puVar11 = puVar25;
    do {
      uVar13 = uVar13 - 1;
      *puVar11 = 0;
      puVar25 = local_148;
      puVar11 = puVar11 + 1;
    } while (1 < uVar13);
  }
  if (puVar25 != (undefined1 *)0x0) {
    operator_delete(puVar25);
  }
  if (0 < (long)local_128 - (long)local_130) {
    uVar13 = ((long)local_128 - (long)local_130) + 1;
    puVar11 = local_130;
    do {
      uVar13 = uVar13 - 1;
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    } while (1 < uVar13);
  }
  if (local_130 != (undefined1 *)0x0) {
    local_128 = local_130;
    operator_delete(local_130);
  }
  if (0 < (long)local_110 - (long)local_118) {
    uVar13 = ((long)local_110 - (long)local_118) + 1;
    puVar11 = local_118;
    do {
      uVar13 = uVar13 - 1;
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    } while (1 < uVar13);
  }
  if (local_118 != (undefined1 *)0x0) {
    local_110 = local_118;
    operator_delete(local_118);
  }
  if (0 < (long)local_f8 - (long)local_100) {
    uVar13 = ((long)local_f8 - (long)local_100) + 1;
    puVar11 = local_100;
    do {
      uVar13 = uVar13 - 1;
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    } while (1 < uVar13);
  }
  if (local_100 != (undefined1 *)0x0) {
    local_f8 = local_100;
    operator_delete(local_100);
  }
  if (0 < (long)local_e0 - (long)local_e8) {
    uVar13 = ((long)local_e0 - (long)local_e8) + 1;
    puVar11 = local_e8;
    do {
      uVar13 = uVar13 - 1;
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    } while (1 < uVar13);
  }
  if (local_e8 != (undefined1 *)0x0) {
    local_e0 = local_e8;
    operator_delete(local_e8);
  }
  if (0 < (long)local_c8 - (long)local_d0) {
    uVar13 = ((long)local_c8 - (long)local_d0) + 1;
    pbVar10 = local_d0;
    do {
      uVar13 = uVar13 - 1;
      *pbVar10 = 0;
      pbVar10 = pbVar10 + 1;
    } while (1 < uVar13);
  }
  if (local_d0 != (byte *)0x0) {
    local_c8 = local_d0;
    operator_delete(local_d0);
  }
  if (0 < (long)local_b0 - (long)local_b8) {
    uVar13 = ((long)local_b0 - (long)local_b8) + 1;
    puVar11 = local_b8;
    do {
      uVar13 = uVar13 - 1;
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    } while (1 < uVar13);
  }
  if (local_b8 != (undefined1 *)0x0) {
    local_b0 = local_b8;
    operator_delete(local_b8);
  }
  if (0 < (long)local_98 - (long)local_a0) {
    uVar13 = ((long)local_98 - (long)local_a0) + 1;
    puVar11 = local_a0;
    do {
      uVar13 = uVar13 - 1;
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    } while (1 < uVar13);
  }
  if (local_a0 != (undefined1 *)0x0) {
    local_98 = local_a0;
    operator_delete(local_a0);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
LAB_005aeb88:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005aeb8c  FUN_005aeb8c =====

void FUN_005aeb8c(undefined8 *param_1)

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


// ===== 005aec1c  FUN_005aec1c =====

void FUN_005aec1c(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long *plVar5;
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
  undefined8 local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_70;
  undefined1 *local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar5 = *(long **)(param_2 + 0x18);
  plVar2 = (long *)(**(code **)(*param_4 + 0x10))(param_4);
                    /* try { // try from 005aec78 to 005aec87 has its CatchHandler @ 005aedd4 */
  (**(code **)(*plVar5 + 0x20))(&local_70,plVar5,plVar2);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
                    /* try { // try from 005aeca8 to 005aecb7 has its CatchHandler @ 005aedac */
  (**(code **)(**(long **)(param_2 + 0x18) + 0x48))
            (&local_88,*(long **)(param_2 + 0x18),param_3,param_4);
                    /* try { // try from 005aecb8 to 005aecdf has its CatchHandler @ 005aed9c */
  FUN_005adebc(&local_100,param_2,0,&local_88,param_5,&DAT_00d63618,&DAT_00d63630);
  param_1[1] = uStack_f8;
  *param_1 = local_100;
  param_1[3] = uStack_e8;
  param_1[2] = uStack_f0;
  param_1[5] = uStack_d8;
  param_1[4] = local_e0;
  param_1[7] = uStack_c8;
  param_1[6] = uStack_d0;
  param_1[9] = uStack_b8;
  param_1[8] = local_c0;
  param_1[0xb] = uStack_a8;
  param_1[10] = uStack_b0;
  param_1[0xe] = local_90;
  param_1[0xd] = uStack_98;
  param_1[0xc] = local_a0;
  if (0 < (long)local_80 - (long)local_88) {
    uVar4 = ((long)local_80 - (long)local_88) + 1;
    puVar3 = local_88;
    do {
      uVar4 = uVar4 - 1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (1 < uVar4);
  }
  if (local_88 != (undefined1 *)0x0) {
    local_80 = local_88;
    operator_delete(local_88);
  }
  if (0 < (long)local_68 - (long)local_70) {
    uVar4 = ((long)local_68 - (long)local_70) + 1;
    puVar3 = local_70;
    do {
      uVar4 = uVar4 - 1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (1 < uVar4);
  }
  if (local_70 != (undefined1 *)0x0) {
    local_68 = local_70;
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 005aedf0  FUN_005aedf0 =====

void FUN_005aedf0(void)

{
  return;
}


// ===== 005aedf4  FUN_005aedf4 =====

void FUN_005aedf4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x5aedf8);
  (*pcVar1)();
}


// ===== 005aedf8  FUN_005aedf8 =====

void FUN_005aedf8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x5aedfc);
  (*pcVar1)();
}


// ===== 005aedfc  FUN_005aedfc =====

void FUN_005aedfc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x5aee00);
  (*pcVar1)();
}


// ===== 005aee00  _INIT_17 =====

void _INIT_17(void)

{
  __cxa_atexit(FUN_004e9f60,&DAT_00d63618,&PTR_LOOP_00d19390);
  __cxa_atexit(FUN_004e9f60,&DAT_00d63630,&PTR_LOOP_00d19390);
  return;
}


// ===== 005aee4c  thunk_FUN_00728234 =====

void thunk_FUN_00728234(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      (**(code **)(*param_1 + 0x18))(param_1);
      *param_1 = 0;
    }
    FUN_0078cb3c(param_1);
    return;
  }
  return;
}


// ===== 005aee50  thunk_FUN_0077a47c =====

void thunk_FUN_0077a47c(long *param_1)

{
  long lVar1;
  code *pcVar2;
  
  if (param_1 != (long *)0x0) {
    if ((*param_1 != 0) && (pcVar2 = *(code **)(*param_1 + 0x18), pcVar2 != (code *)0x0)) {
      (*pcVar2)(param_1);
    }
    lVar1 = param_1[2];
    param_1[2] = 0;
    if (lVar1 != 0) {
      FUN_00778828();
    }
    lVar1 = param_1[1];
    param_1[1] = 0;
    if (lVar1 != 0) {
      FUN_00778828();
    }
    FUN_0078cb3c(param_1);
    return;
  }
  return;
}


// ===== 005aee54  thunk_FUN_0072a7b4 =====

void thunk_FUN_0072a7b4(long param_1)

{
  if (param_1 != 0) {
    if (*(undefined8 **)(param_1 + 0xe0) != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)(param_1 + 0xe0))(*(undefined8 *)(param_1 + 0xd8));
    }
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    FUN_0078cb3c(param_1);
    return;
  }
  return;
}


// ===== 005aee58  thunk_FUN_0073a898 =====

void thunk_FUN_0073a898(long param_1)

{
  if (param_1 != 0) {
    if (*(undefined8 **)(param_1 + 0x1d0) != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)(param_1 + 0x1d0))(*(undefined8 *)(param_1 + 0x1c8));
    }
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    if (*(undefined8 **)(param_1 + 0x2b8) != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)(param_1 + 0x2b8))(*(undefined8 *)(param_1 + 0x2b0));
    }
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    *(undefined8 *)(param_1 + 0x2b0) = 0;
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    if (*(undefined8 **)(param_1 + 0xe8) != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)(param_1 + 0xe8))(*(undefined8 *)(param_1 + 0xe0));
    }
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    FUN_0078cba8(param_1,0x2c0);
    FUN_0078cb3c(param_1);
    return;
  }
  return;
}


// ===== 005aee5c  thunk_FUN_00778828 =====

void thunk_FUN_00778828(undefined8 *param_1)

{
  int iVar1;
  code *pcVar2;
  
  if ((param_1 != (undefined8 *)0x0) && (iVar1 = FUN_0079347c(), iVar1 != 0)) {
    if ((uint)*param_1 < 2) {
      if ((param_1[2] != 0) && (pcVar2 = *(code **)(param_1[2] + 0xc0), pcVar2 != (code *)0x0)) {
        (*pcVar2)(param_1);
      }
      param_1[1] = 0;
      param_1[2] = 0;
      FUN_0078cb3c(param_1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}


// ===== 005aee60  thunk_FUN_0071a024 =====

void thunk_FUN_0071a024(undefined8 *param_1)

{
  uint uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *(uint *)((long)param_1 + 0x14);
    if ((uVar1 >> 1 & 1) == 0) {
      FUN_0078cb3c(*param_1);
      uVar1 = *(uint *)((long)param_1 + 0x14);
    }
    if ((uVar1 & 1) != 0) {
      FUN_0078cb3c(param_1);
      return;
    }
    *param_1 = 0;
  }
  return;
}


// ===== 005aee64  thunk_FUN_0072cae8 =====

void thunk_FUN_0072cae8(long *param_1)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  lVar2 = *param_1;
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x1f0) == 0)) {
    iVar1 = FUN_0079347c(lVar2 + 0x210);
    if (iVar1 != 0) {
      if (1 < (uint)*(undefined8 *)(lVar2 + 0x210)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      FUN_007232e4(lVar2 + 0xe8);
      FUN_007232e4(lVar2 + 0x120);
      FUN_0078cb3c(lVar2);
    }
  }
  FUN_0078cb3c(param_1);
  return;
}


// ===== 005aee68  thunk_FUN_0072f044 =====

void thunk_FUN_0072f044(long param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = FUN_0079347c(param_1 + 0x20), iVar1 != 0)) {
    FUN_0072f094(param_1);
    FUN_0078cb3c(param_1);
    return;
  }
  return;
}


// ===== 005aee6c  thunk_FUN_007a71fc =====

void thunk_FUN_007a71fc(long param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = FUN_0079347c(param_1 + 0xf8), iVar1 != 0)) {
    FUN_007a7108(param_1);
    FUN_0078cb3c(param_1);
    return;
  }
  return;
}


// ===== 005aee70  FUN_005aee70 =====

void FUN_005aee70(undefined8 param_1)

{
  FUN_00795370(param_1,FUN_005aeeb8,PTR_FUN_00d51ec8);
  return;
}


// ===== 005aee84  thunk_FUN_00768948 =====

void thunk_FUN_00768948(undefined8 param_1)

{
  FUN_0076e060(param_1,&DAT_00d2a288);
  return;
}


// ===== 005aee88  FUN_005aee88 =====

void FUN_005aee88(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_007774b0();
  uVar1 = FUN_00777b60(uVar1,0);
  FUN_0054723c(param_1,uVar1);
  return;
}


// ===== 005aeeb8  FUN_005aeeb8 =====

void FUN_005aeeb8(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x005aeec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}


// ===== 005aeec4  FUN_005aeec4 =====

void FUN_005aeec4(undefined8 *param_1,ulong param_2)

{
  int iVar1;
  void *__s;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 == 0) {
    __s = (void *)0x0;
  }
  else {
    if ((long)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004f04ec(param_1);
    }
    __s = operator_new(param_2);
    *param_1 = __s;
    param_1[2] = (long)__s + param_2;
    memset(__s,0,param_2);
    param_1[1] = (long)__s + param_2;
  }
                    /* try { // try from 005aef20 to 005aef27 has its CatchHandler @ 005aef84 */
  iVar1 = FUN_00793258(__s,(long)(int)param_2);
  if (iVar1 == 1) {
    return;
  }
  uVar2 = FUN_0054f64c(0x10);
                    /* try { // try from 005aef4c to 005aef53 has its CatchHandler @ 005aef74 */
  FUN_005aee88(uVar2);
                    /* try { // try from 005aef54 to 005aef6b has its CatchHandler @ 005aef84 */
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar2,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
}


// ===== 005aef98  FUN_005aef98 =====

void FUN_005aef98(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0054f64c(0x10);
                    /* try { // try from 005aefb0 to 005aefbb has its CatchHandler @ 005aefd4 */
  FUN_0054723c(uVar1,"Not implemented");
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar1,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
}


// ===== 005aefe8  FUN_005aefe8 =====

void FUN_005aefe8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0054f64c(0x10);
                    /* try { // try from 005af000 to 005af00b has its CatchHandler @ 005af024 */
  FUN_0054723c(uVar1,"Not implemented");
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar1,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
}


// ===== 005af038  FUN_005af038 =====

void FUN_005af038(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  void *__s;
  undefined8 uVar5;
  ulong __n;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = FUN_00550ef4(param_3,&PTR_PTR_thunk_FUN_00552768_00d250a8,
                       &PTR_PTR_thunk_FUN_00552768_00d250b8,0);
  if (lVar4 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f5f0();
    }
  }
  else {
    iVar2 = FUN_00779464(*(undefined8 *)(lVar4 + 8),0);
    __n = (ulong)iVar2;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    if (iVar2 == 0) {
      __s = (void *)0x0;
    }
    else {
      if (iVar2 < 0) {
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_004f04ec(param_1);
        }
        goto LAB_005af1b0;
      }
      __s = operator_new(__n);
      *param_1 = __s;
      param_1[2] = (long)__s + __n;
      memset(__s,0,__n);
      param_1[1] = (long)__s + __n;
    }
    local_50 = __s;
                    /* try { // try from 005af0dc to 005af0e3 has its CatchHandler @ 005af18c */
    iVar3 = FUN_00779464(*(undefined8 *)(lVar4 + 8),&local_50);
    if (iVar2 == iVar3) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
    }
    else {
      uVar5 = FUN_0054f64c(0x10);
                    /* try { // try from 005af134 to 005af13b has its CatchHandler @ 005af17c */
      FUN_005aee88(uVar5);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 005af14c to 005af163 has its CatchHandler @ 005af18c */
                    /* WARNING: Subroutine does not return */
        FUN_0054f748(uVar5,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
      }
    }
  }
LAB_005af1b0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005af1b4  FUN_005af1b4 =====

void FUN_005af1b4(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = *param_2;
  lVar3 = FUN_0077951c(6,0,&local_40,(long)(*(int *)(param_2 + 1) - (int)local_40));
  if (lVar3 == 0) {
    uVar5 = FUN_0054f64c(0x10);
                    /* try { // try from 005af250 to 005af257 has its CatchHandler @ 005af280 */
    FUN_005aee88(uVar5);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar5,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
    }
  }
  else {
    puVar4 = (undefined8 *)operator_new(0x18);
    puVar2 = PTR_thunk_FUN_00778828_00d51ea8;
    *puVar4 = &PTR_FUN_00d25098;
    puVar4[1] = lVar3;
    puVar4[2] = puVar2;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005af2a8  FUN_005af2a8 =====

void FUN_005af2a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  void *__s;
  undefined8 uVar5;
  ulong __n;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = FUN_00550ef4(param_3,&PTR_PTR_thunk_FUN_00552768_00d25638,
                       &PTR_PTR_thunk_FUN_00552768_00d25648,0);
  if (lVar4 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f5f0();
    }
  }
  else {
    iVar2 = FUN_00796058(*(undefined8 *)(lVar4 + 8),0);
    __n = (ulong)iVar2;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    if (iVar2 == 0) {
      __s = (void *)0x0;
    }
    else {
      if (iVar2 < 0) {
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_004f04ec(param_1);
        }
        goto LAB_005af420;
      }
      __s = operator_new(__n);
      *param_1 = __s;
      param_1[2] = (long)__s + __n;
      memset(__s,0,__n);
      param_1[1] = (long)__s + __n;
    }
    local_50 = __s;
                    /* try { // try from 005af34c to 005af353 has its CatchHandler @ 005af3fc */
    iVar3 = FUN_00796058(*(undefined8 *)(lVar4 + 8),&local_50);
    if (iVar2 == iVar3) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
    }
    else {
      uVar5 = FUN_0054f64c(0x10);
                    /* try { // try from 005af3a4 to 005af3ab has its CatchHandler @ 005af3ec */
      FUN_005aee88(uVar5);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 005af3bc to 005af3d3 has its CatchHandler @ 005af3fc */
                    /* WARNING: Subroutine does not return */
        FUN_0054f748(uVar5,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
      }
    }
  }
LAB_005af420:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005af424  FUN_005af424 =====

void FUN_005af424(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = *param_2;
  lVar3 = FUN_007792dc(6,0,&local_40,(long)(*(int *)(param_2 + 1) - (int)local_40));
  if (lVar3 == 0) {
    uVar5 = FUN_0054f64c(0x10);
                    /* try { // try from 005af4c0 to 005af4c7 has its CatchHandler @ 005af4f0 */
    FUN_005aee88(uVar5);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar5,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
    }
  }
  else {
    puVar4 = (undefined8 *)operator_new(0x18);
    puVar2 = PTR_thunk_FUN_00778828_00d51ea8;
    *puVar4 = &PTR_FUN_00d25718;
    puVar4[1] = lVar3;
    puVar4[2] = puVar2;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005af518  FUN_005af518 =====

void FUN_005af518(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  void *__s;
  undefined8 uVar5;
  ulong uVar6;
  ulong local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00550ef4(param_4,&PTR_PTR_thunk_FUN_00552768_00d25638,
                       &PTR_PTR_thunk_FUN_00552768_00d25648,0);
  if (lVar3 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f5f0();
    }
  }
  else {
    lVar4 = FUN_0072a724();
    if (lVar4 == 0) {
      uVar5 = FUN_0054f64c(0x10);
                    /* try { // try from 005af68c to 005af693 has its CatchHandler @ 005af770 */
      FUN_005aee88(uVar5);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_0054f748(uVar5,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
      }
    }
    else {
                    /* try { // try from 005af588 to 005af593 has its CatchHandler @ 005af78c */
      iVar2 = FUN_0072adc4(lVar4,0,*(undefined8 *)(param_2 + 0x10),0,*(undefined8 *)(lVar3 + 8));
      if (iVar2 == 1) {
                    /* try { // try from 005af5a0 to 005af5a3 has its CatchHandler @ 005af784 */
        iVar2 = FUN_00778a30(*(undefined8 *)(lVar3 + 8));
        uVar6 = (ulong)iVar2;
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        local_60 = uVar6;
        if (iVar2 == 0) {
          lVar3 = 0;
          __s = (void *)0x0;
        }
        else {
          if (iVar2 < 0) {
            if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 005af748 to 005af74f has its CatchHandler @ 005af788 */
                    /* WARNING: Subroutine does not return */
              FUN_004f04ec(param_1);
            }
            goto LAB_005af7c0;
          }
                    /* try { // try from 005af5bc to 005af5c3 has its CatchHandler @ 005af788 */
          __s = operator_new(uVar6);
          lVar3 = (long)__s + uVar6;
          *param_1 = __s;
          param_1[2] = lVar3;
          memset(__s,0,uVar6);
          param_1[1] = lVar3;
        }
                    /* try { // try from 005af5f8 to 005af627 has its CatchHandler @ 005af794 */
        iVar2 = FUN_0072b1e8(lVar4,__s,&local_60,*param_3,param_3[1] - *param_3);
        if (iVar2 == 1) {
          uVar6 = lVar3 - (long)__s;
          if (local_60 < uVar6 || local_60 - uVar6 == 0) {
            if (local_60 < uVar6) {
              param_1[1] = (long)__s + local_60;
            }
          }
          else {
            FUN_00432ba8(param_1,local_60 - uVar6);
          }
                    /* try { // try from 005af638 to 005af63f has its CatchHandler @ 005af780 */
          thunk_FUN_0072a7b4(lVar4);
          if (*(long *)(lVar1 + 0x28) == local_58) {
            return;
          }
        }
        else {
          uVar5 = FUN_0054f64c(0x10);
                    /* try { // try from 005af708 to 005af70f has its CatchHandler @ 005af750 */
          FUN_005aee88(uVar5);
          if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 005af720 to 005af737 has its CatchHandler @ 005af794 */
                    /* WARNING: Subroutine does not return */
            FUN_0054f748(uVar5,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
          }
        }
      }
      else {
        uVar5 = FUN_0054f64c(0x10);
                    /* try { // try from 005af6c8 to 005af6cf has its CatchHandler @ 005af760 */
        FUN_005aee88(uVar5);
        if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 005af6e0 to 005af6f7 has its CatchHandler @ 005af78c */
                    /* WARNING: Subroutine does not return */
          FUN_0054f748(uVar5,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
        }
      }
    }
  }
LAB_005af7c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005af7c8  FUN_005af7c8 =====

bool FUN_005af7c8(long param_1,long *param_2,long *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_00550ef4(param_4,&PTR_PTR_thunk_FUN_00552768_00d250a8,
                       &PTR_PTR_thunk_FUN_00552768_00d250b8,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0054f5f0();
  }
  lVar3 = FUN_0072a724();
  if (lVar3 != 0) {
                    /* try { // try from 005af820 to 005af82b has its CatchHandler @ 005af8f8 */
    iVar1 = FUN_0072af08(lVar3,0,*(undefined8 *)(param_1 + 0x10),0,*(undefined8 *)(lVar2 + 8));
    if (iVar1 == 1) {
                    /* try { // try from 005af844 to 005af84b has its CatchHandler @ 005af8f4 */
      iVar1 = FUN_0072b2ac(lVar3,*param_3,param_3[1] - *param_3,*param_2,param_2[1] - *param_2);
                    /* try { // try from 005af84c to 005af857 has its CatchHandler @ 005af8f0 */
      thunk_FUN_0072a7b4(lVar3);
      return iVar1 == 1;
    }
    uVar4 = FUN_0054f64c(0x10);
                    /* try { // try from 005af8b0 to 005af8b7 has its CatchHandler @ 005af8d0 */
    FUN_005aee88(uVar4);
                    /* try { // try from 005af8b8 to 005af8cf has its CatchHandler @ 005af8f8 */
                    /* WARNING: Subroutine does not return */
    FUN_0054f748(uVar4,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
  }
  uVar4 = FUN_0054f64c(0x10);
                    /* try { // try from 005af884 to 005af88b has its CatchHandler @ 005af8e0 */
  FUN_005aee88(uVar4);
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar4,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
}


// ===== 005af910  FUN_005af910 =====

void FUN_005af910(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0054f64c(0x10);
                    /* try { // try from 005af928 to 005af933 has its CatchHandler @ 005af94c */
  FUN_0054723c(uVar1,"not implemented");
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar1,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
}


// ===== 005af960  FUN_005af960 =====

void FUN_005af960(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0054f64c(0x10);
                    /* try { // try from 005af978 to 005af983 has its CatchHandler @ 005af99c */
  FUN_0054723c(uVar1,"not implemented");
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar1,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
}


// ===== 005af9b0  FUN_005af9b0 =====

void FUN_005af9b0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0054f64c(0x10);
                    /* try { // try from 005af9c8 to 005af9d3 has its CatchHandler @ 005af9ec */
  FUN_0054723c(uVar1,"not implemented");
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar1,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
}


// ===== 005afa00  FUN_005afa00 =====

void FUN_005afa00(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0054f64c(0x10);
                    /* try { // try from 005afa18 to 005afa23 has its CatchHandler @ 005afa3c */
  FUN_0054723c(uVar1,"not implemented");
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar1,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
}


// ===== 005afa50  FUN_005afa50 =====

void FUN_005afa50(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 2) {
    FUN_0072acc4();
    return;
  }
  if (param_1 != 1) {
    if (param_1 == 0) {
      FUN_0072abc4();
      return;
    }
    uVar1 = FUN_0054f64c(0x10);
                    /* try { // try from 005afaa0 to 005afaab has its CatchHandler @ 005afac4 */
    FUN_0054723c(uVar1,"Unsupported digest");
                    /* WARNING: Subroutine does not return */
    FUN_0054f748(uVar1,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
  }
  FUN_0072ac44();
  return;
}


// ===== 005afad8  FUN_005afad8 =====

int FUN_005afad8(uint param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 3) {
    return param_1 + 4;
  }
  uVar1 = FUN_0054f64c(0x10);
                    /* try { // try from 005afb08 to 005afb13 has its CatchHandler @ 005afb2c */
  FUN_0054723c(uVar1,"Unsupported digest");
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar1,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
}


// ===== 005afb40  FUN_005afb40 =====

void FUN_005afb40(void)

{
  return;
}


// ===== 005afb44  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 005afb48  FUN_005afb48 =====

void FUN_005afb48(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_00d25718;
  param_1[1] = 0;
  if (lVar1 != 0) {
                    /* try { // try from 005afb6c to 005afb6f has its CatchHandler @ 005afb78 */
    (*(code *)param_1[2])();
  }
  return;
}


// ===== 005afb7c  FUN_005afb7c =====

void FUN_005afb7c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_00d25718;
  param_1[1] = 0;
  if (lVar1 != 0) {
                    /* try { // try from 005afba4 to 005afba7 has its CatchHandler @ 005afbb8 */
    (*(code *)param_1[2])();
  }
  operator_delete(param_1);
  return;
}


// ===== 005afbbc  FUN_005afbbc =====

void FUN_005afbbc(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  iVar2 = FUN_00778898(*(undefined8 *)(param_1 + 8));
  if (iVar2 == 1) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    puVar3 = (undefined8 *)operator_new(0x18);
    puVar1 = PTR_thunk_FUN_00778828_00d51ea8;
    *puVar3 = &PTR_FUN_00d25098;
    puVar3[1] = uVar4;
    puVar3[2] = puVar1;
    return;
  }
  uVar4 = FUN_0054f64c(0x10);
                    /* try { // try from 005afc18 to 005afc1f has its CatchHandler @ 005afc38 */
  FUN_005aee88(uVar4);
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar4,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
}


// ===== 005afc4c  FUN_005afc4c =====

undefined * FUN_005afc4c(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_00d63780 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d63780), iVar1 != 0)) {
                    /* try { // try from 005afc8c to 005afc9f has its CatchHandler @ 005afcb0 */
    uVar2 = FUN_005aa2e4();
    FUN_005afcc8(&DAT_00d63768,uVar2);
    FUN_0054ff1c(&DAT_00d63780);
  }
  return &DAT_00d63768;
}


// ===== 005afcc8  FUN_005afcc8 =====

void FUN_005afcc8(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = *(char *)(param_2 + 8);
  if (((ulong)(long)cVar2 < 6) && ((0x27U >> (ulong)((int)cVar2 & 0x1f) & 1) != 0)) {
    uVar1 = *(undefined4 *)(&DAT_001fb3bc + (long)cVar2 * 4);
    *param_1 = &PTR_FUN_00d25740;
    *(undefined4 *)(param_1 + 1) = uVar1;
    param_1[2] = param_2;
    return;
  }
  uVar3 = FUN_0054f64c(0x10);
                    /* try { // try from 005afd24 to 005afd2f has its CatchHandler @ 005afd48 */
  FUN_0054723c(uVar3,"Unsupported group");
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar3,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
}


// ===== 005afd5c  FUN_005afd5c =====

undefined * FUN_005afd5c(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_00d637a0 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d637a0), iVar1 != 0)) {
                    /* try { // try from 005afd9c to 005afdaf has its CatchHandler @ 005afdc0 */
    uVar2 = FUN_005aa394();
    FUN_005afcc8(&DAT_00d63788,uVar2);
    FUN_0054ff1c(&DAT_00d637a0);
  }
  return &DAT_00d63788;
}


// ===== 005afdd8  FUN_005afdd8 =====

undefined * FUN_005afdd8(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_00d637c0 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d637c0), iVar1 != 0)) {
                    /* try { // try from 005afe18 to 005afe2b has its CatchHandler @ 005afe3c */
    uVar2 = FUN_005aa444();
    FUN_005afcc8(&DAT_00d637a8,uVar2);
    FUN_0054ff1c(&DAT_00d637c0);
  }
  return &DAT_00d637a8;
}


// ===== 005afe54  FUN_005afe54 =====

undefined * FUN_005afe54(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_00d637e0 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d637e0), iVar1 != 0)) {
                    /* try { // try from 005afe94 to 005afea7 has its CatchHandler @ 005afeb8 */
    uVar2 = FUN_005aa5fc();
    FUN_005afcc8(&DAT_00d637c8,uVar2);
    FUN_0054ff1c(&DAT_00d637e0);
  }
  return &DAT_00d637c8;
}


// ===== 005afed0  FUN_005afed0 =====

undefined * FUN_005afed0(void)

{
  int iVar1;
  
  if (((DAT_00d63800 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d63800), iVar1 != 0)) {
                    /* try { // try from 005aff10 to 005aff1f has its CatchHandler @ 005aff30 */
    FUN_005aff48(&DAT_00d637e8,0);
    FUN_0054ff1c(&DAT_00d63800);
  }
  return &DAT_00d637e8;
}


// ===== 005aff48  FUN_005aff48 =====

void FUN_005aff48(undefined8 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_005afad8(param_2);
  *(undefined4 *)(param_1 + 1) = uVar1;
  *param_1 = &PTR_FUN_00d25670;
  uVar2 = FUN_005afa50(param_2);
  param_1[2] = uVar2;
  return;
}


// ===== 005aff90  FUN_005aff90 =====

undefined * FUN_005aff90(void)

{
  int iVar1;
  
  if (((DAT_00d63820 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d63820), iVar1 != 0)) {
                    /* try { // try from 005affd0 to 005affdf has its CatchHandler @ 005afff0 */
    FUN_005aff48(&DAT_00d63808,1);
    FUN_0054ff1c(&DAT_00d63820);
  }
  return &DAT_00d63808;
}


// ===== 005b0008  FUN_005b0008 =====

undefined * FUN_005b0008(void)

{
  int iVar1;
  
  if (((DAT_00d63840 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00d63840), iVar1 != 0)) {
                    /* try { // try from 005b0048 to 005b0057 has its CatchHandler @ 005b0068 */
    FUN_005aff48(&DAT_00d63828,2);
    FUN_0054ff1c(&DAT_00d63840);
  }
  return &DAT_00d63828;
}


// ===== 005b0080  FUN_005b0080 =====

/* WARNING: Removing unreachable block (ram,0x005b0274) */
/* WARNING: Removing unreachable block (ram,0x005b0284) */

undefined8 FUN_005b0080(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined1 auStack_228 [8];
  undefined1 auStack_220 [48];
  undefined1 auStack_1f0 [48];
  char local_1c0 [8];
  long local_1b8 [5];
  void *local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_158 [2];
  code *local_148;
  undefined8 *local_140;
  void *local_138;
  undefined8 uStack_130;
  long local_128;
  undefined1 local_120 [32];
  undefined1 auStack_100 [56];
  undefined1 auStack_c8 [56];
  undefined1 auStack_90 [56];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((DAT_00d63860 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00d63860), iVar4 != 0)) {
                    /* try { // try from 005b02b0 to 005b02c7 has its CatchHandler @ 005b0450 */
    FUN_005b8be4(&local_190,&DAT_001d9268,"P-256");
                    /* try { // try from 005b02c8 to 005b02e3 has its CatchHandler @ 005b04c8 */
    FUN_005afc4c();
    FUN_005b8c30(&local_138,&local_190,&DAT_00d63768);
                    /* try { // try from 005b02e8 to 005b02ff has its CatchHandler @ 005b0444 */
    FUN_005b8be4(local_1c0,&DAT_001d9268,"P-384");
                    /* try { // try from 005b0300 to 005b0317 has its CatchHandler @ 005b0480 */
    FUN_005afd5c();
    FUN_005b8c30(auStack_100,local_1c0,&DAT_00d63788);
                    /* try { // try from 005b0320 to 005b0337 has its CatchHandler @ 005b0440 */
    FUN_005b8be4(auStack_1f0,&DAT_001d9268,"P-512");
                    /* try { // try from 005b0338 to 005b034f has its CatchHandler @ 005b046c */
    FUN_005afdd8();
    FUN_005b8c30(auStack_c8,auStack_1f0,&DAT_00d637a8);
                    /* try { // try from 005b0358 to 005b036f has its CatchHandler @ 005b043c */
    FUN_005b8c8c(auStack_220,&DAT_001d07f6,"Ed25519");
                    /* try { // try from 005b0370 to 005b0387 has its CatchHandler @ 005b0458 */
    FUN_005afe54();
    FUN_005b8c30(auStack_90,auStack_220,&DAT_00d637c8);
                    /* try { // try from 005b0388 to 005b03a3 has its CatchHandler @ 005b0410 */
    FUN_005b8cd8(&DAT_00d63848,&local_138,4,auStack_228);
    FUN_005b8d54(auStack_90);
    FUN_005b8d54(auStack_c8);
    FUN_005b8d54(auStack_100);
    FUN_005b8d54(&local_138);
    FUN_005b8da0(auStack_220);
    FUN_005b8da0(auStack_1f0);
    FUN_005b8da0(local_1c0);
    FUN_005b8da0(&local_190);
    __cxa_atexit(FUN_005b8dec,&DAT_00d63848,&PTR_LOOP_00d19390);
    FUN_0054ff1c(&DAT_00d63860);
  }
  local_148 = FUN_005b9584;
  local_140 = &DAT_001f1910;
                    /* try { // try from 005b00d0 to 005b00e7 has its CatchHandler @ 005b0534 */
  FUN_005b058c(local_1c0,param_1,local_158,1,0);
  if ((code *)local_140[1] != (code *)0x0) {
                    /* try { // try from 005b00f8 to 005b00fb has its CatchHandler @ 005b04f0 */
    (*(code *)local_140[1])(local_158[0]);
  }
                    /* try { // try from 005b00fc to 005b010b has its CatchHandler @ 005b052c */
  uVar5 = FUN_005b0738(local_1c0,&DAT_001b39bc);
                    /* try { // try from 005b010c to 005b011f has its CatchHandler @ 005b0524 */
  FUN_004a3cf4(&local_190,&DAT_001b3348);
  if (local_1c0[0] != '\x01') goto LAB_005b01e4;
  plVar7 = (long *)(local_1b8[0] + 8);
  plVar9 = (long *)*plVar7;
  plVar8 = plVar7;
  if (plVar9 == (long *)0x0) {
LAB_005b0190:
    plVar8 = plVar7;
  }
  else {
    do {
                    /* try { // try from 005b0148 to 005b014f has its CatchHandler @ 005b0554 */
      cVar3 = FUN_005b2010(plVar9 + 4,&DAT_001ab7bd);
      plVar2 = plVar9 + 1;
      if (-1 < cVar3) {
        plVar8 = plVar9;
        plVar2 = plVar9;
      }
      plVar9 = (long *)*plVar2;
    } while (plVar9 != (long *)0x0);
                    /* try { // try from 005b0178 to 005b0183 has its CatchHandler @ 005b04e4 */
    if ((plVar8 == plVar7) ||
       (iVar4 = FUN_005b2010(plVar8 + 4,&DAT_001ab7bd), 0 < iVar4 * 0x1000000)) goto LAB_005b0190;
  }
  if (plVar8 != (long *)(local_1b8[0] + 8)) {
                    /* try { // try from 005b01a4 to 005b01b3 has its CatchHandler @ 005b04ec */
    uVar6 = FUN_005b0738(local_1c0,&DAT_001ab7bd);
    local_138 = (void *)0x0;
    uStack_130 = 0;
    local_128 = 0;
                    /* try { // try from 005b01bc to 005b01c3 has its CatchHandler @ 005b04e8 */
    FUN_005b937c(uVar6,&local_138);
    if (local_180._7_1_ < '\0') {
      operator_delete(local_190);
    }
    uStack_188 = uStack_130;
    local_190 = local_138;
    local_180 = local_128;
  }
LAB_005b01e4:
  local_138 = (void *)0x0;
  uStack_130 = 0;
  local_128 = 0;
                    /* try { // try from 005b01ec to 005b01fb has its CatchHandler @ 005b050c */
  FUN_005b937c(uVar5,&local_138);
                    /* try { // try from 005b0200 to 005b0207 has its CatchHandler @ 005b0508 */
  FUN_004c55b4(local_120,&local_190);
                    /* try { // try from 005b0208 to 005b0217 has its CatchHandler @ 005b04f8 */
  uVar5 = FUN_005b8df4(&DAT_00d63848,&local_138);
  if (local_180 < 0) {
    operator_delete(local_190);
  }
                    /* try { // try from 005b0240 to 005b0243 has its CatchHandler @ 005b04f4 */
  FUN_005b2fc4(local_1b8,local_1c0[0]);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005b058c  FUN_005b058c =====

void FUN_005b058c(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
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
                    /* try { // try from 005b061c to 005b0637 has its CatchHandler @ 005b06e4 */
  local_68 = uVar5;
  FUN_005b9bd4(local_130,&local_140,&local_68,param_4 & 1,param_5 & 1);
  if ((code *)local_50[1] != (code *)0x0) {
                    /* try { // try from 005b0648 to 005b064b has its CatchHandler @ 005b06d0 */
    (*(code *)local_50[1])(local_68);
  }
                    /* try { // try from 005b064c to 005b065b has its CatchHandler @ 005b06d4 */
  FUN_005b9590(local_130,1,param_1);
  if (local_a1 < '\0') {
    operator_delete(local_b8);
  }
  if (local_d0 != (void *)0x0) {
    local_c8 = local_d0;
    operator_delete(local_d0);
  }
  if (*(code **)(local_118 + 8) != (code *)0x0) {
                    /* try { // try from 005b068c to 005b068f has its CatchHandler @ 005b06cc */
    (**(code **)(local_118 + 8))(local_130[0]);
  }
  if ((code *)puVar1[1] != (code *)0x0) {
                    /* try { // try from 005b0698 to 005b069f has its CatchHandler @ 005b06c8 */
    (*(code *)puVar1[1])(uVar5);
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 005b0738  FUN_005b0738 =====

long * FUN_005b0738(char *param_1,undefined8 param_2)

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
                    /* try { // try from 005b0820 to 005b0833 has its CatchHandler @ 005b0950 */
    FUN_005b2784(auStack_60,"cannot use at() with ",local_78);
                    /* try { // try from 005b0838 to 005b0877 has its CatchHandler @ 005b0934 */
    FUN_005b3a24(uVar5,0x130,auStack_60,param_1);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar5,&PTR_PTR_thunk_FUN_00552768_00d25820,FUN_005be5f0);
    }
    goto LAB_005b0974;
  }
  plVar7 = (long *)(*(long *)(param_1 + 8) + 8);
  plVar8 = (long *)*plVar7;
  plVar6 = plVar7;
  if (plVar8 == (long *)0x0) {
LAB_005b07c8:
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
    goto LAB_005b07c8;
  }
  if (plVar6 == (long *)(*(long *)(param_1 + 8) + 8)) {
    uVar5 = FUN_0054f64c(0x20);
                    /* try { // try from 005b088c to 005b0893 has its CatchHandler @ 005b0930 */
    FUN_004a3cf4(local_78,param_2);
                    /* try { // try from 005b0894 to 005b08af has its CatchHandler @ 005b0918 */
    FUN_005b2a84(auStack_60,"key \'",local_78,"\' not found");
                    /* try { // try from 005b08b4 to 005b08f3 has its CatchHandler @ 005b08f4 */
    FUN_005b3c0c(uVar5,0x193,auStack_60,param_1);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar5,&PTR_PTR_thunk_FUN_00552768_00d25838,FUN_005be5f0);
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_48) {
    return plVar6 + 7;
  }
LAB_005b0974:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005b0978  FUN_005b0978 =====

void FUN_005b0978(undefined1 *param_1)

{
                    /* try { // try from 005b0984 to 005b0987 has its CatchHandler @ 005b0990 */
  FUN_005b2fc4(param_1 + 8,*param_1);
  return;
}


// ===== 005b0994  FUN_005b0994 =====

void FUN_005b0994(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  void *local_c8;
  undefined8 uStack_c0;
  long local_b8;
  char local_b0 [8];
  long local_a8;
  void *local_a0;
  undefined8 uStack_98;
  long local_90;
  char local_88;
  undefined8 local_78 [2];
  code *local_68;
  undefined8 *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar5 = (long *)FUN_005b0080();
  local_68 = FUN_005b9584;
  local_60 = &DAT_001f1910;
                    /* try { // try from 005b09e0 to 005b09f7 has its CatchHandler @ 005b0bc4 */
  FUN_005b058c(local_b0,param_2,local_78,1,0);
  if ((code *)local_60[1] != (code *)0x0) {
                    /* try { // try from 005b0a08 to 005b0a0b has its CatchHandler @ 005b0bb4 */
    (*(code *)local_60[1])(local_78[0]);
  }
                    /* try { // try from 005b0a14 to 005b0a1f has its CatchHandler @ 005b0bbc */
  uVar6 = (**(code **)(*plVar5 + 0x48))(plVar5,param_2);
  local_a0 = (void *)((ulong)local_a0 & 0xffffffffffffff00);
  local_88 = '\0';
  if (local_b0[0] == '\x01') {
    plVar8 = (long *)(local_a8 + 8);
    plVar10 = (long *)*plVar8;
    plVar9 = plVar8;
    if (plVar10 == (long *)0x0) {
LAB_005b0a9c:
      plVar9 = plVar8;
    }
    else {
      do {
                    /* try { // try from 005b0a54 to 005b0a5b has its CatchHandler @ 005b0be4 */
        cVar3 = FUN_005b2010(plVar10 + 4,&DAT_001bf4b8);
        plVar2 = plVar10 + 1;
        if (-1 < cVar3) {
          plVar9 = plVar10;
          plVar2 = plVar10;
        }
        plVar10 = (long *)*plVar2;
      } while (plVar10 != (long *)0x0);
                    /* try { // try from 005b0a84 to 005b0a8f has its CatchHandler @ 005b0b74 */
      if ((plVar9 == plVar8) ||
         (iVar4 = FUN_005b2010(plVar9 + 4,&DAT_001bf4b8), 0 < iVar4 * 0x1000000)) goto LAB_005b0a9c;
    }
    if (plVar9 != (long *)(local_a8 + 8)) {
                    /* try { // try from 005b0ab0 to 005b0abf has its CatchHandler @ 005b0bb0 */
      uVar7 = FUN_005b0738(local_b0,&DAT_001bf4b8);
      local_c8 = (void *)0x0;
      uStack_c0 = 0;
      local_b8 = 0;
                    /* try { // try from 005b0ac8 to 005b0acf has its CatchHandler @ 005b0b98 */
      FUN_005b937c(uVar7,&local_c8);
      *param_1 = plVar5;
      uStack_98 = uStack_c0;
      local_a0 = local_c8;
      local_90 = local_b8;
      local_88 = '\x01';
      *(undefined1 *)(param_1 + 1) = 0;
      *(undefined1 *)(param_1 + 4) = 0;
                    /* try { // try from 005b0af8 to 005b0b03 has its CatchHandler @ 005b0b78 */
      FUN_004c55b4(param_1 + 1,&local_a0);
      *(undefined1 *)(param_1 + 4) = 1;
      param_1[5] = uVar6;
      if ((local_88 != '\0') && (local_90 < 0)) {
        operator_delete(local_a0);
      }
      goto LAB_005b0b38;
    }
  }
  *param_1 = plVar5;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = uVar6;
LAB_005b0b38:
                    /* try { // try from 005b0b44 to 005b0b47 has its CatchHandler @ 005b0bb8 */
  FUN_005b2fc4(&local_a8,local_b0[0]);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005b0c38  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 005b0c3c  FUN_005b0c3c =====

void FUN_005b0c3c(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  puVar2 = (undefined8 *)operator_new(0x10);
  *puVar2 = &PTR_FUN_00d257d8;
  puVar2[1] = uVar1;
  return;
}


// ===== 005b0c7c  FUN_005b0c7c =====

undefined8 * FUN_005b0c7c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = (undefined1 *)0x0;
  uStack_40 = 0;
  local_50 = (undefined1 *)0x0;
                    /* try { // try from 005b0cb4 to 005b0cbb has its CatchHandler @ 005b0d38 */
  uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
                    (*(long **)(param_1 + 0x10),&local_50,param_2);
                    /* try { // try from 005b0cbc to 005b0cc7 has its CatchHandler @ 005b0d34 */
  puVar3 = (undefined8 *)operator_new(0x10);
  *puVar3 = &PTR_FUN_00d257d8;
  puVar3[1] = uVar2;
  if (0 < (long)local_48 - (long)local_50) {
    uVar5 = ((long)local_48 - (long)local_50) + 1;
    puVar4 = local_50;
    do {
      uVar5 = uVar5 - 1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    } while (1 < uVar5);
  }
  if (local_50 != (undefined1 *)0x0) {
    local_48 = local_50;
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar3;
}


// ===== 005b0d60  FUN_005b0d60 =====

void FUN_005b0d60(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_00550ef4(param_3,&PTR_PTR_thunk_FUN_00552768_00d250a8,
                       &PTR_PTR_thunk_FUN_00552768_00d251d8,8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x005b0db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x10) + 0x20))(param_1,*(long **)(param_2 + 0x10),lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0054f5f0();
}


// ===== 005b0dbc  FUN_005b0dbc =====

long FUN_005b0dbc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 8;
  }
  return lVar1;
}


// ===== 005b0de8  FUN_005b0de8 =====

void FUN_005b0de8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_00550ef4(param_3,&PTR_PTR_thunk_FUN_00552768_00d25638,
                       &PTR_PTR_thunk_FUN_00552768_00d257f0,0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x005b0e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x10) + 0x30))
              (param_1,*(long **)(param_2 + 0x10),*(undefined8 *)(lVar1 + 8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0054f5f0();
}


// ===== 005b0e48  FUN_005b0e48 =====

void FUN_005b0e48(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x38))();
  puVar2 = (undefined8 *)operator_new(0x10);
  *puVar2 = &PTR_FUN_00d257d8;
  puVar2[1] = uVar1;
  return;
}


// ===== 005b0e88  FUN_005b0e88 =====

undefined8 * FUN_005b0e88(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 local_48 [8];
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_005b16c8(local_48,param_1,param_2,1);
                    /* try { // try from 005b0eb8 to 005b0ec7 has its CatchHandler @ 005b0fc4 */
  uVar2 = FUN_005b1b90(local_48,&DAT_001cab48);
  local_78 = (void *)0x0;
  uStack_70 = 0;
  local_68 = 0;
                    /* try { // try from 005b0ed0 to 005b0ed7 has its CatchHandler @ 005b0fac */
  FUN_005b937c(uVar2,&local_78);
                    /* try { // try from 005b0ed8 to 005b0ee3 has its CatchHandler @ 005b0fa8 */
  FUN_005a493c(&local_60,&local_78);
  if (local_68 < 0) {
    operator_delete(local_78);
  }
                    /* try { // try from 005b0f00 to 005b0f07 has its CatchHandler @ 005b0f98 */
  uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x38))(*(long **)(param_1 + 0x10),&local_60);
                    /* try { // try from 005b0f08 to 005b0f13 has its CatchHandler @ 005b0f94 */
  puVar3 = (undefined8 *)operator_new(0x10);
  *puVar3 = &PTR_FUN_00d257d8;
  puVar3[1] = uVar2;
  if (0 < (long)local_58 - (long)local_60) {
    uVar5 = ((long)local_58 - (long)local_60) + 1;
    puVar4 = local_60;
    do {
      uVar5 = uVar5 - 1;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    } while (1 < uVar5);
  }
  if (local_60 != (undefined1 *)0x0) {
    local_58 = local_60;
    operator_delete(local_60);
  }
                    /* try { // try from 005b0f64 to 005b0f67 has its CatchHandler @ 005b0f90 */
  FUN_005b2fc4(auStack_40,local_48[0]);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar3;
}


// ===== 005b0fec  FUN_005b0fec =====

void FUN_005b0fec(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  void *local_c8;
  undefined8 uStack_c0;
  long local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  undefined1 *local_90;
  undefined1 *puStack_88;
  long local_80;
  undefined1 *local_70;
  undefined1 *local_68;
  char local_58 [8];
  long local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_005b16c8(local_58,param_1,param_2,0);
                    /* try { // try from 005b1020 to 005b102f has its CatchHandler @ 005b124c */
  uVar6 = FUN_005b1b90(local_58,&DAT_001c4fee);
  local_90 = (undefined1 *)0x0;
  puStack_88 = (undefined1 *)0x0;
  local_80 = 0;
                    /* try { // try from 005b1038 to 005b103f has its CatchHandler @ 005b1234 */
  FUN_005b937c(uVar6,&local_90);
                    /* try { // try from 005b1040 to 005b104b has its CatchHandler @ 005b1230 */
  FUN_005a493c(&local_70,&local_90);
  if (local_80 < 0) {
    operator_delete(local_90);
  }
  local_90 = (undefined1 *)0x0;
  puStack_88 = (undefined1 *)0x0;
  local_80 = 0;
  if (local_58[0] != '\x01') goto LAB_005b113c;
  plVar10 = (long *)(local_50 + 8);
  plVar12 = (long *)*plVar10;
  plVar11 = plVar10;
  if (plVar12 == (long *)0x0) {
LAB_005b10d4:
    plVar11 = plVar10;
  }
  else {
    do {
                    /* try { // try from 005b108c to 005b1093 has its CatchHandler @ 005b1254 */
      cVar4 = FUN_005b2010(plVar12 + 4,&DAT_001d07fa);
      plVar3 = plVar12 + 1;
      if (-1 < cVar4) {
        plVar11 = plVar12;
        plVar3 = plVar12;
      }
      plVar12 = (long *)*plVar3;
    } while (plVar12 != (long *)0x0);
                    /* try { // try from 005b10bc to 005b10c7 has its CatchHandler @ 005b1204 */
    if ((plVar11 == plVar10) ||
       (iVar5 = FUN_005b2010(plVar11 + 4,&DAT_001d07fa), 0 < iVar5 * 0x1000000)) goto LAB_005b10d4;
  }
  if (plVar11 != (long *)(local_50 + 8)) {
                    /* try { // try from 005b10e8 to 005b10f7 has its CatchHandler @ 005b1224 */
    uVar6 = FUN_005b1b90(local_58,&DAT_001d07fa);
    local_c8 = (void *)0x0;
    uStack_c0 = 0;
    local_b8 = 0;
                    /* try { // try from 005b1100 to 005b1107 has its CatchHandler @ 005b120c */
    FUN_005b937c(uVar6,&local_c8);
                    /* try { // try from 005b1108 to 005b1113 has its CatchHandler @ 005b1208 */
    FUN_005a493c(&local_b0,&local_c8);
    local_80 = local_a0;
    puStack_88 = puStack_a8;
    local_90 = local_b0;
    local_b0 = (undefined1 *)0x0;
    puStack_a8 = (undefined1 *)0x0;
    local_a0 = 0;
    if (local_b8 < 0) {
      operator_delete(local_c8);
    }
  }
LAB_005b113c:
                    /* try { // try from 005b1148 to 005b1153 has its CatchHandler @ 005b122c */
  lVar7 = (**(code **)(**(long **)(param_1 + 0x10) + 0x60))
                    (*(long **)(param_1 + 0x10),&local_70,&local_90);
  if (0 < (long)puStack_88 - (long)local_90) {
    uVar9 = ((long)puStack_88 - (long)local_90) + 1;
    puVar8 = local_90;
    do {
      uVar9 = uVar9 - 1;
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    } while (1 < uVar9);
  }
  if (local_90 != (undefined1 *)0x0) {
    puStack_88 = local_90;
    operator_delete(local_90);
  }
  if (0 < (long)local_68 - (long)local_70) {
    uVar9 = ((long)local_68 - (long)local_70) + 1;
    puVar8 = local_70;
    do {
      uVar9 = uVar9 - 1;
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    } while (1 < uVar9);
  }
  if (local_70 != (undefined1 *)0x0) {
    local_68 = local_70;
    operator_delete(local_70);
  }
                    /* try { // try from 005b11cc to 005b11cf has its CatchHandler @ 005b1228 */
  FUN_005b2fc4(&local_50,local_58[0]);
  lVar1 = 0;
  if (lVar7 != 0) {
    lVar1 = lVar7 + 8;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}


// ===== 005b128c  FUN_005b128c =====

void FUN_005b128c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  ulong uVar5;
  void *local_b0 [2];
  char local_99;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 local_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00550ef4(param_3,&PTR_PTR_thunk_FUN_00552768_00d25638,
                       &PTR_PTR_thunk_FUN_00552768_00d257f0,0);
  if (lVar2 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f5f0();
    }
  }
  else {
    plVar3 = (long *)(**(code **)(**(long **)(lVar2 + 8) + 0x10))();
                    /* try { // try from 005b12f0 to 005b12ff has its CatchHandler @ 005b1464 */
    FUN_005b3df4(local_80,param_2,plVar3);
                    /* try { // try from 005b1308 to 005b1317 has its CatchHandler @ 005b1428 */
    (**(code **)(*param_2 + 0x30))(&local_98,param_2,param_3);
                    /* try { // try from 005b1318 to 005b1323 has its CatchHandler @ 005b1418 */
    FUN_005a41a0(local_b0,&local_98);
                    /* try { // try from 005b1324 to 005b133b has its CatchHandler @ 005b1400 */
    FUN_005b4368(auStack_70,local_80,&DAT_001cab48,local_b0);
    if (local_99 < '\0') {
      operator_delete(local_b0[0]);
    }
                    /* try { // try from 005b134c to 005b1367 has its CatchHandler @ 005b13fc */
    FUN_005b451c(param_1,local_80,0xffffffff,0x20,0,0);
    if (0 < (long)local_90 - (long)local_98) {
      uVar5 = ((long)local_90 - (long)local_98) + 1;
      puVar4 = local_98;
      do {
        uVar5 = uVar5 - 1;
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      } while (1 < uVar5);
    }
    if (local_98 != (undefined1 *)0x0) {
      local_90 = local_98;
      operator_delete(local_98);
    }
                    /* try { // try from 005b13a8 to 005b13ab has its CatchHandler @ 005b13f8 */
    FUN_005b2fc4(auStack_78,local_80[0]);
    (**(code **)(*plVar3 + 8))(plVar3);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005b1470  FUN_005b1470 =====

void FUN_005b1470(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 local_48 [8];
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00550ef4(param_3,&PTR_PTR_thunk_FUN_00552768_00d250a8,
                       &PTR_PTR_thunk_FUN_00552768_00d251d8,8);
  if (lVar2 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f5f0();
    }
  }
  else {
    FUN_005b3df4(local_48,param_2,lVar2);
                    /* try { // try from 005b14d0 to 005b14eb has its CatchHandler @ 005b1534 */
    FUN_005b451c(param_1,local_48,0xffffffff,0x20,0,0);
                    /* try { // try from 005b14f4 to 005b14f7 has its CatchHandler @ 005b1530 */
    FUN_005b2fc4(auStack_40,local_48[0]);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005b155c  FUN_005b155c =====

void FUN_005b155c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = FUN_00550ef4(param_4,&PTR_PTR_thunk_FUN_00552768_00d25638,
                       &PTR_PTR_thunk_FUN_00552768_00d257f0,0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x005b15c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x10) + 0x48))
              (param_1,*(long **)(param_2 + 0x10),param_3,*(undefined8 *)(lVar1 + 8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0054f5f0();
}


// ===== 005b15cc  FUN_005b15cc =====

void FUN_005b15cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = FUN_00550ef4(param_4,&PTR_PTR_thunk_FUN_00552768_00d250a8,
                       &PTR_PTR_thunk_FUN_00552768_00d251d8,8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x005b162c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x50))
              (*(long **)(param_1 + 0x10),param_2,param_3,lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0054f5f0();
}


// ===== 005b1634  FUN_005b1634 =====

void FUN_005b1634(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[1];
  *param_1 = &PTR_FUN_00d257d8;
  param_1[1] = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005b1654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 005b165c  FUN_005b165c =====

void FUN_005b165c(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[1];
  *param_1 = &PTR_FUN_00d257d8;
  param_1[1] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  operator_delete(param_1);
  return;
}


// ===== 005b169c  FUN_005b169c =====

long FUN_005b169c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 8;
  }
  return lVar1;
}


// ===== 005b16c8  FUN_005b16c8 =====

void FUN_005b16c8(char *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  void *pvVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  ulong local_88;
  void *local_80;
  undefined8 local_78 [2];
  code *local_68;
  undefined8 *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_68 = FUN_005b9584;
  local_60 = &DAT_001f1910;
                    /* try { // try from 005b1714 to 005b172b has its CatchHandler @ 005b1b28 */
  FUN_005b058c(param_1,param_3,local_78,1,0);
  if ((code *)local_60[1] != (code *)0x0) {
                    /* try { // try from 005b173c to 005b173f has its CatchHandler @ 005b1af4 */
    (*(code *)local_60[1])(local_78[0]);
  }
  if ((*param_1 == '\x01') && (*(long *)(*(long *)(param_1 + 8) + 0x10) != 0)) {
    plVar10 = (long *)(*(long *)(param_1 + 8) + 8);
    plVar13 = (long *)*plVar10;
    plVar11 = plVar10;
    if (plVar13 == (long *)0x0) {
LAB_005b17b8:
      plVar11 = plVar10;
    }
    else {
      do {
                    /* try { // try from 005b1770 to 005b1777 has its CatchHandler @ 005b1b68 */
        cVar3 = FUN_005b2010(plVar13 + 4,&DAT_001b39bc);
        plVar2 = plVar13 + 1;
        if (-1 < cVar3) {
          plVar11 = plVar13;
          plVar2 = plVar13;
        }
        plVar13 = (long *)*plVar2;
      } while (plVar13 != (long *)0x0);
                    /* try { // try from 005b17a0 to 005b17ab has its CatchHandler @ 005b1b58 */
      if ((plVar11 == plVar10) ||
         (iVar4 = FUN_005b2010(plVar11 + 4,&DAT_001b39bc), 0 < iVar4 * 0x1000000))
      goto LAB_005b17b8;
    }
    plVar10 = (long *)(*(long *)(param_1 + 8) + 8);
    if ((plVar11 == plVar10) || (*param_1 != '\x01')) goto LAB_005b1a74;
    plVar13 = (long *)*plVar10;
    plVar11 = plVar10;
    if (plVar13 == (long *)0x0) {
LAB_005b1838:
      plVar11 = plVar10;
    }
    else {
      do {
                    /* try { // try from 005b17f0 to 005b17f7 has its CatchHandler @ 005b1b64 */
        cVar3 = FUN_005b2010(plVar13 + 4,&DAT_001ab7bd);
        plVar2 = plVar13 + 1;
        if (-1 < cVar3) {
          plVar11 = plVar13;
          plVar2 = plVar13;
        }
        plVar13 = (long *)*plVar2;
      } while (plVar13 != (long *)0x0);
                    /* try { // try from 005b1820 to 005b182b has its CatchHandler @ 005b1b58 */
      if ((plVar11 == plVar10) ||
         (iVar4 = FUN_005b2010(plVar11 + 4,&DAT_001ab7bd), 0 < iVar4 * 0x1000000))
      goto LAB_005b1838;
    }
    plVar10 = (long *)(*(long *)(param_1 + 8) + 8);
    if ((plVar11 == plVar10) || (*param_1 != '\x01')) goto LAB_005b1a74;
    plVar13 = (long *)*plVar10;
    plVar11 = plVar10;
    if (plVar13 == (long *)0x0) {
LAB_005b18b8:
      plVar11 = plVar10;
    }
    else {
      do {
                    /* try { // try from 005b1870 to 005b1877 has its CatchHandler @ 005b1b60 */
        cVar3 = FUN_005b2010(plVar13 + 4,&DAT_001c4fee);
        plVar2 = plVar13 + 1;
        if (-1 < cVar3) {
          plVar11 = plVar13;
          plVar2 = plVar13;
        }
        plVar13 = (long *)*plVar2;
      } while (plVar13 != (long *)0x0);
                    /* try { // try from 005b18a0 to 005b18ab has its CatchHandler @ 005b1b58 */
      if ((plVar11 == plVar10) ||
         (iVar4 = FUN_005b2010(plVar11 + 4,&DAT_001c4fee), 0 < iVar4 * 0x1000000))
      goto LAB_005b18b8;
    }
    plVar10 = (long *)(*(long *)(param_1 + 8) + 8);
    if (plVar11 == plVar10) goto LAB_005b1a74;
    if ((param_4 & 1) != 0) {
      if (*param_1 != '\x01') goto LAB_005b1a74;
      plVar13 = (long *)*plVar10;
      plVar11 = plVar10;
      if (plVar13 == (long *)0x0) {
LAB_005b193c:
        plVar11 = plVar10;
      }
      else {
        do {
                    /* try { // try from 005b18f4 to 005b18fb has its CatchHandler @ 005b1b5c */
          cVar3 = FUN_005b2010(plVar13 + 4,&DAT_001cab48);
          plVar2 = plVar13 + 1;
          if (-1 < cVar3) {
            plVar11 = plVar13;
            plVar2 = plVar13;
          }
          plVar13 = (long *)*plVar2;
        } while (plVar13 != (long *)0x0);
                    /* try { // try from 005b1924 to 005b195f has its CatchHandler @ 005b1b58 */
        if ((plVar11 == plVar10) ||
           (iVar4 = FUN_005b2010(plVar11 + 4,&DAT_001cab48), 0 < iVar4 * 0x1000000))
        goto LAB_005b193c;
      }
      if (plVar11 == (long *)(*(long *)(param_1 + 8) + 8)) goto LAB_005b1a74;
    }
    pcVar6 = (char *)FUN_005b1dd0(param_1,&DAT_001b39bc);
    lVar12 = *(long *)(param_2 + 0x10);
    local_80 = (void *)0x0;
    local_88 = 3;
                    /* try { // try from 005b1974 to 005b197b has its CatchHandler @ 005b1b18 */
    pvVar7 = operator_new(0x18);
                    /* try { // try from 005b1984 to 005b1987 has its CatchHandler @ 005b1b08 */
    FUN_004c55b4(pvVar7,lVar12 + 0x28);
    local_80 = pvVar7;
    if (*pcVar6 == '\t') {
      uVar5 = 0;
      uVar9 = 3;
    }
    else {
      uVar5 = FUN_005b216c(pcVar6,&local_88);
      uVar9 = local_88 & 0xff;
      uVar5 = uVar5 ^ 1;
    }
                    /* try { // try from 005b19c0 to 005b19c7 has its CatchHandler @ 005b1b04 */
    FUN_005b2fc4(&local_80,uVar9);
    if ((uVar5 & 1) == 0) {
                    /* try { // try from 005b19cc to 005b19db has its CatchHandler @ 005b1b58 */
      pcVar6 = (char *)FUN_005b1dd0(param_1,&DAT_001ab7bd);
      lVar12 = *(long *)(param_2 + 0x10);
      local_80 = (void *)0x0;
      local_88 = 3;
                    /* try { // try from 005b19f0 to 005b19f7 has its CatchHandler @ 005b1b00 */
      pvVar7 = operator_new(0x18);
                    /* try { // try from 005b1a00 to 005b1a03 has its CatchHandler @ 005b1afc */
      FUN_004c55b4(pvVar7,lVar12 + 0x40);
      local_80 = pvVar7;
      if (*pcVar6 == '\t') {
        uVar5 = 0;
        uVar9 = 3;
      }
      else {
        uVar5 = FUN_005b216c(pcVar6,&local_88);
        uVar9 = local_88 & 0xff;
        uVar5 = uVar5 ^ 1;
      }
                    /* try { // try from 005b1a3c to 005b1a43 has its CatchHandler @ 005b1af8 */
      FUN_005b2fc4(&local_80,uVar9);
      if ((uVar5 & 1) == 0) {
        if (*(long *)(lVar1 + 0x28) == local_58) {
          return;
        }
        goto LAB_005b1b8c;
      }
      uVar8 = FUN_0054f64c(0x10);
                    /* try { // try from 005b1adc to 005b1ae7 has its CatchHandler @ 005b1aec */
      FUN_0054723c(uVar8,"invalid JWK curve");
    }
    else {
      uVar8 = FUN_0054f64c(0x10);
                    /* try { // try from 005b1ac0 to 005b1acb has its CatchHandler @ 005b1af0 */
      FUN_0054723c(uVar8,"invalid JWK key type");
    }
  }
  else {
LAB_005b1a74:
    uVar8 = FUN_0054f64c(0x10);
                    /* try { // try from 005b1a80 to 005b1a8b has its CatchHandler @ 005b1b48 */
    FUN_0054723c(uVar8,"malformed JWK");
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 005b1a9c to 005b1ab3 has its CatchHandler @ 005b1b58 */
                    /* WARNING: Subroutine does not return */
    FUN_0054f748(uVar8,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
  }
LAB_005b1b8c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005b1b90  FUN_005b1b90 =====

long * FUN_005b1b90(char *param_1,undefined8 param_2)

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
                    /* try { // try from 005b1c78 to 005b1c8b has its CatchHandler @ 005b1da8 */
    FUN_005b2784(auStack_60,"cannot use at() with ",local_78);
                    /* try { // try from 005b1c90 to 005b1ccf has its CatchHandler @ 005b1d8c */
    FUN_005b3a24(uVar5,0x130,auStack_60,param_1);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar5,&PTR_PTR_thunk_FUN_00552768_00d25820,FUN_005be5f0);
    }
    goto LAB_005b1dcc;
  }
  plVar7 = (long *)(*(long *)(param_1 + 8) + 8);
  plVar8 = (long *)*plVar7;
  plVar6 = plVar7;
  if (plVar8 == (long *)0x0) {
LAB_005b1c20:
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
    goto LAB_005b1c20;
  }
  if (plVar6 == (long *)(*(long *)(param_1 + 8) + 8)) {
    uVar5 = FUN_0054f64c(0x20);
                    /* try { // try from 005b1ce4 to 005b1ceb has its CatchHandler @ 005b1d88 */
    FUN_004a3cf4(local_78,param_2);
                    /* try { // try from 005b1cec to 005b1d07 has its CatchHandler @ 005b1d70 */
    FUN_005b2a84(auStack_60,"key \'",local_78,"\' not found");
                    /* try { // try from 005b1d0c to 005b1d4b has its CatchHandler @ 005b1d4c */
    FUN_005b3c0c(uVar5,0x193,auStack_60,param_1);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar5,&PTR_PTR_thunk_FUN_00552768_00d25838,FUN_005be5f0);
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_48) {
    return plVar6 + 7;
  }
LAB_005b1dcc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005b1dd0  FUN_005b1dd0 =====

long * FUN_005b1dd0(char *param_1,undefined8 param_2)

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
                    /* try { // try from 005b1eb8 to 005b1ecb has its CatchHandler @ 005b1fe8 */
    FUN_005b2784(auStack_60,"cannot use at() with ",local_78);
                    /* try { // try from 005b1ed0 to 005b1f0f has its CatchHandler @ 005b1fcc */
    FUN_005b259c(uVar5,0x130,auStack_60,param_1);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar5,&PTR_PTR_thunk_FUN_00552768_00d25820,FUN_005be5f0);
    }
    goto LAB_005b200c;
  }
  plVar7 = (long *)(*(long *)(param_1 + 8) + 8);
  plVar8 = (long *)*plVar7;
  plVar6 = plVar7;
  if (plVar8 == (long *)0x0) {
LAB_005b1e60:
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
    goto LAB_005b1e60;
  }
  if (plVar6 == (long *)(*(long *)(param_1 + 8) + 8)) {
    uVar5 = FUN_0054f64c(0x20);
                    /* try { // try from 005b1f24 to 005b1f2b has its CatchHandler @ 005b1fc8 */
    FUN_004a3cf4(local_78,param_2);
                    /* try { // try from 005b1f2c to 005b1f47 has its CatchHandler @ 005b1fb0 */
    FUN_005b2a84(auStack_60,"key \'",local_78,"\' not found");
                    /* try { // try from 005b1f4c to 005b1f8b has its CatchHandler @ 005b1f8c */
    FUN_005b289c(uVar5,0x193,auStack_60,param_1);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar5,&PTR_PTR_thunk_FUN_00552768_00d25838,FUN_005be5f0);
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_48) {
    return plVar6 + 7;
  }
LAB_005b200c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005b2010  FUN_005b2010 =====

undefined8 FUN_005b2010(undefined8 *param_1,char *param_2)

{
  ulong uVar1;
  size_t __n;
  undefined8 *__s1;
  int iVar2;
  size_t sVar3;
  
  uVar1 = param_1[1];
  __s1 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    __s1 = param_1;
  }
  if (__s1 == (undefined8 *)0x0 && uVar1 != 0) {
                    /* try { // try from 005b20a8 to 005b20cf has its CatchHandler @ 005b20fc */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
               "__len == 0 || __s != nullptr",
               "string_view::string_view(_CharT *, size_t): received nullptr");
  }
  if (param_2 == (char *)0x0) {
                    /* try { // try from 005b20d0 to 005b20f7 has its CatchHandler @ 005b20f8 */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0xff,
               "__s != nullptr",
               "null pointer passed to non-null argument of char_traits<...>::length");
  }
  sVar3 = strlen(param_2);
  __n = sVar3;
  if (uVar1 <= sVar3) {
    __n = uVar1;
  }
  if ((__n == 0) || (iVar2 = memcmp(__s1,param_2,__n), iVar2 == 0)) {
    if (uVar1 == sVar3) {
      return 0;
    }
    if (uVar1 < sVar3) {
      return 0xff;
    }
  }
  else if (iVar2 < 0) {
    return 0xff;
  }
  return 1;
}


// ===== 005b2100  FUN_005b2100 =====

bool FUN_005b2100(byte *param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  
  bVar1 = *param_1;
  bVar2 = false;
  if ((bVar1 == 7) && (bVar2 = true, !NAN(*(double *)(param_1 + 8)))) {
    bVar2 = false;
  }
  uVar3 = (uint)*param_2;
  if (bVar2) {
    if (uVar3 - 5 < 3) {
      return true;
    }
  }
  else if (uVar3 == 7) {
    bVar2 = false;
    if ((bVar1 - 5 < 3) && (bVar2 = true, !NAN(*(double *)(param_2 + 8)))) {
      bVar2 = false;
    }
    if ((bVar2) || (bVar1 == 9)) {
      return true;
    }
  }
  else if (bVar1 == 9) {
    return true;
  }
  return uVar3 == 9;
}


// ===== 005b216c  FUN_005b216c =====

byte FUN_005b216c(char *param_1,char *param_2)

{
  char *__s1;
  size_t sVar1;
  size_t sVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  bool bVar10;
  int iVar11;
  char *__s2;
  long *__s2_00;
  char *pcVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  char *pcVar18;
  undefined8 *puVar19;
  double dVar20;
  double dVar21;
  
  cVar6 = *param_1;
  cVar7 = *param_2;
  if (cVar6 != cVar7) {
    if ((cVar6 == '\x05') && (cVar7 == '\a')) {
      dVar20 = (double)*(long *)(param_1 + 8);
LAB_005b21e0:
      dVar21 = *(double *)(param_2 + 8);
    }
    else if ((cVar6 == '\a') && (cVar7 == '\x05')) {
      dVar21 = *(double *)(param_1 + 8);
      dVar20 = (double)*(long *)(param_2 + 8);
    }
    else {
      if ((cVar6 == '\x06') && (cVar7 == '\a')) {
        dVar20 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 8));
        goto LAB_005b21e0;
      }
      if ((cVar6 != '\a') || (cVar7 != '\x06')) {
        if (((cVar6 == '\x06') && (cVar7 == '\x05')) || ((cVar6 == '\x05' && (cVar7 == '\x06'))))
        goto switchD_005b21b0_caseD_5;
        FUN_005b2100(param_1,param_2,0);
        goto switchD_005b21b0_default;
      }
      dVar21 = *(double *)(param_1 + 8);
      dVar20 = (double)NEON_ucvtf(*(undefined8 *)(param_2 + 8));
    }
    bVar9 = dVar21 == dVar20;
    goto switchD_005b21b0_caseD_0;
  }
  bVar9 = 1;
  switch(cVar6) {
  case '\0':
    goto switchD_005b21b0_caseD_0;
  case '\x01':
    puVar19 = *(undefined8 **)(param_1 + 8);
    if (puVar19[2] == (*(undefined8 **)(param_2 + 8))[2]) {
      plVar13 = (long *)*puVar19;
      if (plVar13 != puVar19 + 1) {
        plVar17 = (long *)**(undefined8 **)(param_2 + 8);
        do {
          bVar9 = *(byte *)((long)plVar13 + 0x37);
          uVar14 = (ulong)bVar9;
          bVar8 = *(byte *)((long)plVar17 + 0x37);
          sVar1 = plVar13[5];
          if (-1 < (char)bVar9) {
            sVar1 = uVar14;
          }
          sVar2 = plVar17[5];
          if (-1 < (char)bVar8) {
            sVar2 = (ulong)bVar8;
          }
          if (sVar1 != sVar2) goto switchD_005b21b0_default;
          plVar15 = plVar13 + 4;
          plVar16 = (long *)*plVar15;
          if (-1 < (char)bVar9) {
            plVar16 = plVar15;
          }
          __s2_00 = (long *)plVar17[4];
          if (-1 < (char)bVar8) {
            __s2_00 = plVar17 + 4;
          }
          if ((char)bVar9 < '\0') {
            if ((sVar1 != 0) && (iVar11 = memcmp(plVar16,__s2_00,sVar1), iVar11 != 0))
            goto switchD_005b21b0_default;
          }
          else if (bVar9 != 0) {
            do {
              if ((char)*plVar15 != (char)*__s2_00) goto switchD_005b21b0_default;
              uVar14 = uVar14 - 1;
              plVar15 = (long *)((long)plVar15 + 1);
              __s2_00 = (long *)((long)__s2_00 + 1);
            } while (uVar14 != 0);
          }
          uVar14 = FUN_005b216c(plVar13 + 7,plVar17 + 7);
          if ((uVar14 & 1) == 0) goto switchD_005b21b0_default;
          if (plVar13 == (long *)0x0) {
                    /* try { // try from 005b2544 to 005b256b has its CatchHandler @ 005b2598 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
                       "__x != nullptr","node shouldn\'t be null");
          }
          plVar15 = (long *)plVar13[1];
          plVar16 = plVar13;
          if ((long *)plVar13[1] == (long *)0x0) {
            do {
              plVar13 = (long *)plVar16[2];
              bVar10 = (long *)*plVar13 != plVar16;
              plVar16 = plVar13;
            } while (bVar10);
          }
          else {
            do {
              plVar13 = plVar15;
              plVar15 = (long *)*plVar13;
            } while ((long *)*plVar13 != (long *)0x0);
          }
          if (plVar17 == (long *)0x0) {
                    /* try { // try from 005b256c to 005b2593 has its CatchHandler @ 005b2594 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
                       "__x != nullptr","node shouldn\'t be null");
          }
          plVar15 = (long *)plVar17[1];
          plVar16 = plVar17;
          if ((long *)plVar17[1] == (long *)0x0) {
            do {
              plVar17 = (long *)plVar16[2];
              bVar10 = (long *)*plVar17 != plVar16;
              plVar16 = plVar17;
            } while (bVar10);
          }
          else {
            do {
              plVar17 = plVar15;
              plVar15 = (long *)*plVar17;
            } while ((long *)*plVar17 != (long *)0x0);
          }
          bVar9 = 1;
        } while (plVar13 != puVar19 + 1);
      }
      goto switchD_005b21b0_caseD_0;
    }
    break;
  case '\x02':
    lVar3 = **(long **)(param_1 + 8);
    lVar5 = (*(long **)(param_1 + 8))[1];
    lVar4 = **(long **)(param_2 + 8);
    if (lVar5 - lVar3 == (*(long **)(param_2 + 8))[1] - lVar4) {
      while ((lVar3 != lVar5 && (bVar9 = FUN_005b216c(lVar3,lVar4), (bVar9 & 1) != 0))) {
        lVar3 = lVar3 + 0x10;
        lVar4 = lVar4 + 0x10;
      }
      goto switchD_005b21b0_caseD_0;
    }
    break;
  case '\x03':
    pcVar12 = *(char **)(param_1 + 8);
    pcVar18 = *(char **)(param_2 + 8);
    bVar9 = pcVar12[0x17];
    uVar14 = (ulong)bVar9;
    bVar8 = pcVar18[0x17];
    sVar1 = *(size_t *)(pcVar12 + 8);
    if (-1 < (char)bVar9) {
      sVar1 = uVar14;
    }
    sVar2 = *(size_t *)(pcVar18 + 8);
    if (-1 < (char)bVar8) {
      sVar2 = (ulong)bVar8;
    }
    if (sVar1 == sVar2) {
      __s1 = *(char **)pcVar12;
      if (-1 < (char)bVar9) {
        __s1 = pcVar12;
      }
      __s2 = *(char **)pcVar18;
      if (-1 < (char)bVar8) {
        __s2 = pcVar18;
      }
      if ((char)bVar9 < '\0') {
        if (sVar1 != 0) {
          iVar11 = memcmp(__s1,__s2,sVar1);
          bVar9 = iVar11 == 0;
          goto switchD_005b21b0_caseD_0;
        }
      }
      else if (bVar9 != 0) {
        do {
          uVar14 = uVar14 - 1;
          bVar9 = *pcVar12 == *__s2;
          if (!(bool)bVar9) break;
          __s2 = __s2 + 1;
          pcVar12 = pcVar12 + 1;
        } while (uVar14 != 0);
        goto switchD_005b21b0_caseD_0;
      }
      bVar9 = 1;
      goto switchD_005b21b0_caseD_0;
    }
    break;
  case '\x04':
    cVar6 = param_1[8];
    cVar7 = param_2[8];
LAB_005b2254:
    bVar9 = cVar6 == cVar7;
    goto switchD_005b21b0_caseD_0;
  case '\x05':
  case '\x06':
switchD_005b21b0_caseD_5:
    bVar9 = *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
    goto switchD_005b21b0_caseD_0;
  case '\a':
    bVar9 = *(double *)(param_1 + 8) == *(double *)(param_2 + 8);
    goto switchD_005b21b0_caseD_0;
  case '\b':
    plVar13 = *(long **)(param_1 + 8);
    plVar17 = *(long **)(param_2 + 8);
    pcVar12 = (char *)*plVar13;
    pcVar18 = (char *)*plVar17;
    if (plVar13[1] - (long)pcVar12 == plVar17[1] - (long)pcVar18) {
      for (; pcVar12 != (char *)plVar13[1]; pcVar12 = pcVar12 + 1) {
        if (*pcVar12 != *pcVar18) goto switchD_005b21b0_default;
        pcVar18 = pcVar18 + 1;
      }
      if (plVar13[3] == plVar17[3]) {
        cVar6 = (char)plVar13[4];
        cVar7 = (char)plVar17[4];
        goto LAB_005b2254;
      }
    }
  }
switchD_005b21b0_default:
  bVar9 = 0;
switchD_005b21b0_caseD_0:
  return bVar9 & 1;
}


// ===== 005b259c  FUN_005b259c =====

/* WARNING: Removing unreachable block (ram,0x005b2618) */
/* WARNING: Removing unreachable block (ram,0x005b26c8) */

void FUN_005b259c(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

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
  FUN_004a3cf4(local_a0,"type_error");
  local_3c[0] = 0x2e;
                    /* try { // try from 005b25e0 to 005b25eb has its CatchHandler @ 005b2754 */
  FUN_005490bc(local_58,param_2);
                    /* try { // try from 005b25ec to 005b260f has its CatchHandler @ 005b273c */
  FUN_005b2cac(local_88,"[json.exception.",local_a0,local_3c,local_58,&DAT_001d2ea9);
                    /* try { // try from 005b2620 to 005b262f has its CatchHandler @ 005b2728 */
  FUN_004a3cf4(local_58,&DAT_001b3348);
                    /* try { // try from 005b2630 to 005b2643 has its CatchHandler @ 005b2710 */
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
                    /* try { // try from 005b2684 to 005b2687 has its CatchHandler @ 005b26f4 */
  FUN_0054723c(param_1 + 2,ppppuVar1);
  *param_1 = &PTR_FUN_00d25860;
  if (local_59 < '\0') {
    operator_delete(local_70[0]);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 005b2784  FUN_005b2784 =====

void FUN_005b2784(undefined8 *param_1,char *param_2,undefined8 *param_3)

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
                    /* try { // try from 005b27d4 to 005b2853 has its CatchHandler @ 005b2854 */
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


// ===== 005b2870  FUN_005b2870 =====

char * FUN_005b2870(char *param_1)

{
  if ((ulong)(long)*param_1 < 10) {
    return &DAT_001fb3d4 + *(int *)(&DAT_001fb3d4 + (long)*param_1 * 4);
  }
  return "number";
}


// ===== 005b289c  FUN_005b289c =====

/* WARNING: Removing unreachable block (ram,0x005b2918) */
/* WARNING: Removing unreachable block (ram,0x005b29c8) */

void FUN_005b289c(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

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
  FUN_004a3cf4(local_a0,"out_of_range");
  local_3c[0] = 0x2e;
                    /* try { // try from 005b28e0 to 005b28eb has its CatchHandler @ 005b2a54 */
  FUN_005490bc(local_58,param_2);
                    /* try { // try from 005b28ec to 005b290f has its CatchHandler @ 005b2a3c */
  FUN_005b2cac(local_88,"[json.exception.",local_a0,local_3c,local_58,&DAT_001d2ea9);
                    /* try { // try from 005b2920 to 005b292f has its CatchHandler @ 005b2a28 */
  FUN_004a3cf4(local_58,&DAT_001b3348);
                    /* try { // try from 005b2930 to 005b2943 has its CatchHandler @ 005b2a10 */
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
                    /* try { // try from 005b2984 to 005b2987 has its CatchHandler @ 005b29f4 */
  FUN_0054723c(param_1 + 2,ppppuVar1);
  *param_1 = &PTR_FUN_00d258b0;
  if (local_59 < '\0') {
    operator_delete(local_70[0]);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 005b2a84  FUN_005b2a84 =====

void FUN_005b2a84(undefined8 *param_1,char *param_2,undefined8 *param_3,char *param_4)

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
                    /* try { // try from 005b2af4 to 005b2b67 has its CatchHandler @ 005b2b68 */
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


// ===== 005b2b84  FUN_005b2b84 =====

void FUN_005b2b84(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  
  bVar8 = *(byte *)((long)param_2 + 0x17);
  uVar6 = (ulong)bVar8;
  uVar7 = param_2[1];
  uVar4 = uVar7;
  if (-1 < (char)bVar8) {
    uVar4 = uVar6;
  }
  uVar2 = param_3[1];
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  uVar1 = param_4[1];
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_4 + 0x17);
  }
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = uVar2 + uVar4 + uVar1;
  param_1[2] = 0;
  if (0x7fffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_004e823c(param_1);
  }
  if (0x16 < uVar1) {
                    /* try { // try from 005b2c08 to 005b2c8f has its CatchHandler @ 005b2c90 */
    FUN_0051f494(param_1,uVar1 | 0xf);
    bVar8 = *(byte *)((long)param_2 + 0x17);
    uVar6 = (ulong)bVar8;
    uVar7 = param_2[1];
  }
  plVar3 = (long *)*param_2;
  if (-1 < (char)bVar8) {
    plVar3 = param_2;
    uVar7 = uVar6;
  }
  FUN_00547cac(param_1,plVar3,uVar7);
  uVar4 = param_3[1];
  puVar5 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar4 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar5 = param_3;
  }
  FUN_00547cac(param_1,puVar5,uVar4);
  uVar4 = param_4[1];
  puVar5 = (undefined8 *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar4 = (ulong)*(byte *)((long)param_4 + 0x17);
    puVar5 = param_4;
  }
  FUN_00547cac(param_1,puVar5,uVar4);
  return;
}


// ===== 005b2cac  FUN_005b2cac =====

void FUN_005b2cac(undefined8 *param_1,char *param_2,undefined8 *param_3,undefined8 param_4,
                 long param_5,char *param_6)

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
  uVar1 = param_3[1];
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  uVar2 = *(ulong *)(param_5 + 8);
  if (-1 < (char)*(byte *)(param_5 + 0x17)) {
    uVar2 = (ulong)*(byte *)(param_5 + 0x17);
  }
  sVar5 = strlen(param_6);
  uVar1 = sVar4 + sVar5 + uVar1 + uVar2 + 1;
  if (0x7fffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_004e823c(param_1);
  }
  if (0x16 < uVar1) {
                    /* try { // try from 005b2d48 to 005b2dbf has its CatchHandler @ 005b2dc0 */
    FUN_0051f494(param_1,uVar1 | 0xf);
  }
  sVar4 = strlen(param_2);
  FUN_00547cac(param_1,param_2,sVar4);
  uVar1 = param_3[1];
  puVar3 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar3 = param_3;
  }
  FUN_00547cac(param_1,puVar3,uVar1);
  FUN_005b2ddc(param_1,param_4,param_5,param_6);
  return;
}


// ===== 005b2ddc  FUN_005b2ddc =====

void FUN_005b2ddc(undefined8 *param_1,undefined1 *param_2,undefined8 *param_3,char *param_4)

{
  undefined1 uVar1;
  byte bVar2;
  size_t sVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  bVar2 = *(byte *)((long)param_1 + 0x17);
  uVar1 = *param_2;
  if ((char)bVar2 < '\0') {
    uVar4 = param_1[1];
    uVar6 = (param_1[2] & 0x7fffffffffffffff) - 1;
    if (uVar4 == uVar6) goto LAB_005b2e30;
  }
  else {
    if (bVar2 != 0x16) {
      if (0x15 < bVar2) {
                    /* try { // try from 005b2ecc to 005b2ef3 has its CatchHandler @ 005b2ef4 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                   "__s < __min_cap",
                   "__s should never be greater than or equal to the short string capacity");
      }
      uVar4 = (ulong)bVar2;
      *(byte *)((long)param_1 + 0x17) = bVar2 + 1;
      puVar5 = param_1;
      goto LAB_005b2e78;
    }
    uVar6 = 0x16;
LAB_005b2e30:
    uVar4 = uVar6;
    FUN_0054774c(param_1,uVar4,1,uVar4,uVar4,0,0);
  }
  param_1[1] = uVar4 + 1;
  puVar5 = (undefined8 *)*param_1;
LAB_005b2e78:
  *(undefined1 *)((long)puVar5 + uVar4) = uVar1;
  ((undefined1 *)((long)puVar5 + uVar4))[1] = 0;
  uVar4 = param_3[1];
  puVar5 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar4 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar5 = param_3;
  }
  FUN_00547cac(param_1,puVar5,uVar4);
  sVar3 = strlen(param_4);
  FUN_00547cac(param_1,param_4,sVar3);
  return;
}


// ===== 005b2ef8  FUN_005b2ef8 =====

void FUN_005b2ef8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d25888;
  FUN_00552450(param_1 + 2);
  FUN_0055234c(param_1);
  operator_delete(param_1);
  return;
}


// ===== 005b2f30  FUN_005b2f30 =====

void FUN_005b2f30(long param_1)

{
  FUN_005524f8(param_1 + 0x10);
  return;
}


// ===== 005b2f38  FUN_005b2f38 =====

void FUN_005b2f38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d25888;
  FUN_00552450(param_1 + 2);
  FUN_0055234c(param_1);
  operator_delete(param_1);
  return;
}


// ===== 005b2f70  FUN_005b2f70 =====

void FUN_005b2f70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d25888;
  FUN_00552450(param_1 + 2);
  FUN_0055234c(param_1);
  operator_delete(param_1);
  return;
}


// ===== 005b2fa8  FUN_005b2fa8 =====

void FUN_005b2fa8(undefined1 *param_1)

{
                    /* try { // try from 005b2fb4 to 005b2fb7 has its CatchHandler @ 005b2fc0 */
  FUN_005b2fc4(param_1 + 8,*param_1);
  return;
}


// ===== 005b2fc4  FUN_005b2fc4 =====

void FUN_005b2fc4(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  long lVar6;
  void *pvVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  char local_80;
  undefined8 *puStack_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  uVar1 = param_2 & 0xff;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar2 = uVar1 - 1;
  plVar8 = (long *)*param_1;
  if (((uVar2 != 0) || (plVar8 != (long *)0x0)) &&
     ((param_2 & 0xfe) != 2 && uVar1 != 8 || plVar8 != (long *)0x0)) {
    if (uVar2 < 2) {
      local_70 = (undefined8 *)0x0;
      local_68 = (undefined8 *)0x0;
      local_60 = (undefined8 *)0x0;
      if (uVar1 == 2) {
                    /* try { // try from 005b303c to 005b3043 has its CatchHandler @ 005b3590 */
        FUN_005b3610(&local_70,plVar8[1] - *plVar8 >> 4);
        puVar15 = *(undefined8 **)*param_1;
        puVar13 = (undefined8 *)((undefined8 *)*param_1)[1];
        while (puVar15 != puVar13) {
          if (local_68 < local_60) {
            if (local_68 == (undefined8 *)0x0) {
              if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 005b34c0 to 005b34e7 has its CatchHandler @ 005b35c0 */
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s:%d: assertion %s failed: %s",
                           "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                           ,0x23,"__location != nullptr","null pointer given to construct_at");
              }
              goto LAB_005b360c;
            }
            uVar18 = *puVar15;
            local_68[1] = puVar15[1];
            *local_68 = uVar18;
            *(undefined1 *)puVar15 = 0;
            puVar15[1] = 0;
            puVar15 = puVar15 + 2;
            local_68 = local_68 + 2;
          }
          else {
                    /* try { // try from 005b3084 to 005b308f has its CatchHandler @ 005b3598 */
            FUN_005b37c0(&local_70,puVar15);
            puVar15 = puVar15 + 2;
          }
        }
      }
      else {
                    /* try { // try from 005b309c to 005b30a3 has its CatchHandler @ 005b3590 */
        FUN_005b3610(&local_70,plVar8[2]);
        plVar9 = (long *)*param_1;
        plVar8 = (long *)*plVar9;
        while (plVar8 != plVar9 + 1) {
          if (local_68 < local_60) {
            if (local_68 == (undefined8 *)0x0) {
              if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 005b34f8 to 005b351f has its CatchHandler @ 005b35bc */
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s:%d: assertion %s failed: %s",
                           "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                           ,0x23,"__location != nullptr","null pointer given to construct_at");
              }
              goto LAB_005b360c;
            }
            uVar18 = plVar8[7];
            local_68[1] = plVar8[8];
            *local_68 = uVar18;
            *(undefined1 *)(plVar8 + 7) = 0;
            plVar8[8] = 0;
            local_68 = local_68 + 2;
          }
          else {
                    /* try { // try from 005b32f4 to 005b32fb has its CatchHandler @ 005b3594 */
            FUN_005b37c0(&local_70);
            if (plVar8 == (long *)0x0) {
              if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 005b3530 to 005b3557 has its CatchHandler @ 005b35b8 */
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s:%d: assertion %s failed: %s",
                           "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2
                           ,"__x != nullptr","node shouldn\'t be null");
              }
              goto LAB_005b360c;
            }
          }
          plVar4 = (long *)plVar8[1];
          plVar10 = plVar8;
          if ((long *)plVar8[1] == (long *)0x0) {
            do {
              plVar8 = (long *)plVar10[2];
              bVar5 = (long *)*plVar8 != plVar10;
              plVar10 = plVar8;
            } while (bVar5);
          }
          else {
            do {
              plVar8 = plVar4;
              plVar4 = (long *)*plVar8;
            } while ((long *)*plVar8 != (long *)0x0);
          }
        }
      }
      if (local_70 != local_68) {
        do {
          puVar15 = local_68;
          puStack_78 = (undefined8 *)local_68[-1];
          uVar19 = local_68[-2];
          *(undefined1 *)(local_68 + -2) = 0;
          local_68[-1] = 0;
          if (local_70 == local_68) {
            if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 005b3488 to 005b34af has its CatchHandler @ 005b35cc */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x623,
                         "!empty()","vector::pop_back called on an empty vector");
            }
            goto LAB_005b360c;
          }
          puVar13 = local_68 + -2;
          lVar6 = 0;
          while (lVar6 + -0x10 != -0x20) {
                    /* try { // try from 005b3104 to 005b3107 has its CatchHandler @ 005b35b4 */
            FUN_005b2fc4((long)puVar15 + lVar6 + -8,*(undefined1 *)((long)puVar15 + lVar6 + -0x10));
            lVar6 = lVar6 + -0x10;
          }
          local_80 = (char)uVar19;
          local_68 = puVar13;
          if (local_80 == '\x01') {
            puVar14 = puStack_78 + 1;
            puVar15 = (undefined8 *)*puStack_78;
            puVar13 = puStack_78;
            while (puStack_78 = puVar13, puVar15 != puVar14) {
              if (local_68 < local_60) {
                if (local_68 == (undefined8 *)0x0) {
                  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 005b3418 to 005b343f has its CatchHandler @ 005b35d8 */
                    /* WARNING: Subroutine does not return */
                    std::__Cr::__libcpp_verbose_abort
                              ("%s:%d: assertion %s failed: %s",
                               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                               ,0x23,"__location != nullptr","null pointer given to construct_at");
                  }
                  goto LAB_005b360c;
                }
                uVar18 = puVar15[7];
                local_68[1] = puVar15[8];
                *local_68 = uVar18;
                *(undefined1 *)(puVar15 + 7) = 0;
                puVar15[8] = 0;
                local_68 = local_68 + 2;
              }
              else {
                    /* try { // try from 005b31d8 to 005b31df has its CatchHandler @ 005b35a8 */
                FUN_005b37c0(&local_70);
                if (puVar15 == (undefined8 *)0x0) {
                  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 005b3450 to 005b3477 has its CatchHandler @ 005b35d4 */
                    /* WARNING: Subroutine does not return */
                    std::__Cr::__libcpp_verbose_abort
                              ("%s:%d: assertion %s failed: %s",
                               "../../discord_common/native/third_party/llvm/libcxx/include/__tree",
                               0xc2,"__x != nullptr","node shouldn\'t be null");
                  }
                  goto LAB_005b360c;
                }
              }
              puVar17 = (undefined8 *)puVar15[1];
              puVar16 = puVar15;
              puVar13 = puStack_78;
              if ((undefined8 *)puVar15[1] == (undefined8 *)0x0) {
                do {
                  puVar15 = (undefined8 *)puVar16[2];
                  bVar5 = (undefined8 *)*puVar15 != puVar16;
                  puVar16 = puVar15;
                } while (bVar5);
              }
              else {
                do {
                  puVar15 = puVar17;
                  puVar17 = (undefined8 *)*puVar15;
                } while ((undefined8 *)*puVar15 != (undefined8 *)0x0);
              }
            }
            puVar15 = puVar13 + 1;
            FUN_005b39bc(puVar13,*puVar15);
            *puVar13 = puVar15;
            puVar13[2] = 0;
            *puVar15 = 0;
          }
          else if (local_80 == '\x02') {
            puVar15 = (undefined8 *)*puStack_78;
            puVar13 = (undefined8 *)puStack_78[1];
            puVar14 = puStack_78;
            puVar17 = puVar15;
            if (puVar15 != puVar13) {
              do {
                if (local_68 < local_60) {
                  if (local_68 == (undefined8 *)0x0) {
                    if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 005b33e0 to 005b3407 has its CatchHandler @ 005b35dc */
                    /* WARNING: Subroutine does not return */
                      std::__Cr::__libcpp_verbose_abort
                                ("%s:%d: assertion %s failed: %s",
                                 "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                                 ,0x23,"__location != nullptr","null pointer given to construct_at")
                      ;
                    }
                    goto LAB_005b360c;
                  }
                  uVar18 = *puVar15;
                  local_68[1] = puVar15[1];
                  *local_68 = uVar18;
                  *(undefined1 *)puVar15 = 0;
                  puVar15[1] = 0;
                  local_68 = local_68 + 2;
                }
                else {
                    /* try { // try from 005b3140 to 005b314b has its CatchHandler @ 005b35ac */
                  FUN_005b37c0(&local_70,puVar15);
                }
                puVar15 = puVar15 + 2;
              } while (puVar15 != puVar13);
              puVar15 = (undefined8 *)*puStack_78;
              puVar14 = puStack_78;
              puVar17 = (undefined8 *)puStack_78[1];
            }
            while (puVar17 != puVar15) {
                    /* try { // try from 005b322c to 005b322f has its CatchHandler @ 005b35b0 */
              FUN_005b2fc4(puVar17 + -1,*(undefined1 *)(puVar17 + -2));
              puVar17 = puVar17 + -2;
            }
            puVar14[1] = puVar15;
          }
                    /* try { // try from 005b3260 to 005b3267 has its CatchHandler @ 005b35a4 */
          FUN_005b2fc4(&puStack_78,uVar19 & 0xff);
        } while (local_70 != local_68);
      }
      if (local_70 != (undefined8 *)0x0) {
        local_68 = local_70;
        operator_delete(local_70);
      }
    }
    switch(uVar2) {
    case 0:
      lVar6 = *param_1;
      if (lVar6 == 0) {
LAB_005b3558:
        if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x3f,"__loc != nullptr","null pointer given to destroy_at");
        }
        goto LAB_005b360c;
      }
      FUN_005b39bc(lVar6,*(undefined8 *)(lVar6 + 8));
LAB_005b3398:
      plVar8 = (long *)*param_1;
      break;
    case 1:
      plVar8 = (long *)*param_1;
      if (plVar8 == (long *)0x0) goto LAB_005b3558;
      puVar11 = (undefined1 *)*plVar8;
      if (puVar11 != (undefined1 *)0x0) {
        puVar12 = (undefined1 *)plVar8[1];
        while (puVar12 != puVar11) {
                    /* try { // try from 005b336c to 005b336f has its CatchHandler @ 005b35a0 */
          FUN_005b2fc4(puVar12 + -8,puVar12[-0x10]);
          puVar12 = puVar12 + -0x10;
        }
        pvVar7 = (void *)*plVar8;
        plVar8[1] = (long)puVar11;
LAB_005b3394:
        operator_delete(pvVar7);
        goto LAB_005b3398;
      }
      break;
    case 2:
      plVar8 = (long *)*param_1;
      if (plVar8 == (long *)0x0) goto LAB_005b3558;
      if (*(char *)((long)plVar8 + 0x17) < '\0') {
        pvVar7 = (void *)*plVar8;
        goto LAB_005b3394;
      }
      break;
    default:
      goto switchD_005b32a0_caseD_3;
    case 7:
      plVar8 = (long *)*param_1;
      if (plVar8 == (long *)0x0) goto LAB_005b3558;
      pvVar7 = (void *)*plVar8;
      if (pvVar7 != (void *)0x0) {
        plVar8[1] = (long)pvVar7;
        goto LAB_005b3394;
      }
    }
    operator_delete(plVar8);
  }
switchD_005b32a0_caseD_3:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
LAB_005b360c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005b3610  FUN_005b3610 =====

void FUN_005b3610(long *param_1,ulong param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  
  puVar5 = (undefined1 *)*param_1;
  if ((ulong)(param_1[2] - (long)puVar5 >> 4) < param_2) {
    if (param_2 >> 0x3c != 0) {
      FUN_005b3754(param_1);
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b36b4 with catch @ 005b36ec
                        */
      FUN_004e7ed8();
    }
    puVar6 = (undefined1 *)param_1[1];
    pvVar2 = operator_new(param_2 * 0x10);
    lVar1 = (long)pvVar2 + ((long)puVar6 - (long)puVar5 & 0xfffffffffffffff0U);
    lVar3 = lVar1;
    puVar4 = puVar5;
    if ((long)puVar6 - (long)puVar5 != 0) {
      do {
        uVar7 = *(undefined8 *)(puVar6 + -0x10);
        puVar4 = puVar6 + -0x10;
        *(undefined8 *)(lVar3 + -8) = *(undefined8 *)(puVar6 + -8);
        *(undefined8 *)(lVar3 + -0x10) = uVar7;
        lVar3 = lVar3 + -0x10;
        puVar6[-0x10] = 0;
        *(undefined8 *)(puVar6 + -8) = 0;
        puVar6 = puVar4;
      } while (puVar4 != puVar5);
      puVar5 = (undefined1 *)*param_1;
      puVar4 = (undefined1 *)param_1[1];
    }
    *param_1 = lVar3;
    param_1[1] = lVar1;
    param_1[2] = (long)((long)pvVar2 + param_2 * 0x10);
    while (puVar4 != puVar5) {
                    /* try { // try from 005b36b4 to 005b36b7 has its CatchHandler @ 005b36ec */
      FUN_005b2fc4(puVar4 + -8,puVar4[-0x10]);
      puVar4 = puVar4 + -0x10;
    }
    if (puVar5 != (undefined1 *)0x0) {
      operator_delete(puVar5);
      return;
    }
  }
  return;
}


// ===== 005b36f0  FUN_005b36f0 =====

void FUN_005b36f0(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = (undefined1 *)*param_1;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)param_1[1];
    while (puVar2 != puVar1) {
                    /* try { // try from 005b3720 to 005b3723 has its CatchHandler @ 005b3750 */
      FUN_005b2fc4(puVar2 + -8,puVar2[-0x10]);
      puVar2 = puVar2 + -0x10;
    }
    param_1[1] = puVar1;
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 005b3754  FUN_005b3754 =====

void FUN_005b3754(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_004e8250("vector");
}


// ===== 005b3768  FUN_005b3768 =====

void FUN_005b3768(undefined8 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1[1];
  while (lVar2 = param_1[2], lVar2 != lVar3) {
    uVar1 = *(undefined1 *)(lVar2 + -0x10);
    param_1[2] = (undefined1 *)(lVar2 + -0x10);
                    /* try { // try from 005b3794 to 005b3797 has its CatchHandler @ 005b37bc */
    FUN_005b2fc4(lVar2 + -8,uVar1);
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 005b37c0  FUN_005b37c0 =====

void FUN_005b37c0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  lVar12 = param_1[1] - *param_1 >> 4;
  uVar1 = lVar12 + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar8 = param_1[2] - *param_1;
    uVar10 = uVar8 >> 3;
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    if (0x7fffffffffffffef < uVar8) {
      uVar10 = 0xfffffffffffffff;
    }
    if (uVar10 != 0) {
      if (uVar10 >> 0x3c == 0) {
        pvVar5 = operator_new(uVar10 * 0x10);
        uVar14 = param_2[1];
        uVar13 = *param_2;
        *(undefined1 *)param_2 = 0;
        param_2[1] = 0;
        puVar7 = (undefined8 *)((long)pvVar5 + lVar12 * 0x10);
        puVar3 = (undefined1 *)*param_1;
        puVar11 = (undefined1 *)param_1[1];
        puVar2 = puVar7 + 2;
        puVar7[1] = uVar14;
        *puVar7 = uVar13;
        puVar9 = puVar11;
        if (puVar11 != puVar3) {
          do {
            uVar13 = *(undefined8 *)(puVar11 + -0x10);
            puVar9 = puVar11 + -0x10;
            puVar7[-1] = *(undefined8 *)(puVar11 + -8);
            puVar7[-2] = uVar13;
            puVar7 = puVar7 + -2;
            puVar11[-0x10] = 0;
            *(undefined8 *)(puVar11 + -8) = 0;
            puVar11 = puVar9;
          } while (puVar9 != puVar3);
          puVar11 = (undefined1 *)*param_1;
          puVar9 = (undefined1 *)param_1[1];
        }
        *param_1 = (long)puVar7;
        param_1[1] = (long)puVar2;
        param_1[2] = (long)((long)pvVar5 + uVar10 * 0x10);
        while (puVar9 != puVar11) {
                    /* try { // try from 005b38c0 to 005b38c3 has its CatchHandler @ 005b39b8 */
          FUN_005b2fc4(puVar9 + -8,puVar9[-0x10]);
          puVar9 = puVar9 + -0x10;
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
      goto LAB_005b39b4;
    }
  }
  else {
    if (*(long *)(lVar4 + 0x28) != lVar6) goto LAB_005b39b4;
    FUN_005b3754(param_1);
  }
  if (*(long *)(lVar4 + 0x28) == lVar6) {
                    /* try { // try from 005b3954 to 005b397b has its CatchHandler @ 005b3990 */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
LAB_005b39b4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005b39bc  FUN_005b39bc =====

void FUN_005b39bc(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_005b39bc(param_1,*param_2);
    FUN_005b39bc(param_1,param_2[1]);
                    /* try { // try from 005b39f0 to 005b39f3 has its CatchHandler @ 005b3a20 */
    FUN_005b2fc4(param_2 + 8,*(undefined1 *)(param_2 + 7));
    if (*(char *)((long)param_2 + 0x37) < '\0') {
      operator_delete((void *)param_2[4]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}


// ===== 005b3a24  FUN_005b3a24 =====

/* WARNING: Removing unreachable block (ram,0x005b3aa0) */
/* WARNING: Removing unreachable block (ram,0x005b3b50) */

void FUN_005b3a24(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

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
  FUN_004a3cf4(local_a0,"type_error");
  local_3c[0] = 0x2e;
                    /* try { // try from 005b3a68 to 005b3a73 has its CatchHandler @ 005b3bdc */
  FUN_005490bc(local_58,param_2);
                    /* try { // try from 005b3a74 to 005b3a97 has its CatchHandler @ 005b3bc4 */
  FUN_005b2cac(local_88,"[json.exception.",local_a0,local_3c,local_58,&DAT_001d2ea9);
                    /* try { // try from 005b3aa8 to 005b3ab7 has its CatchHandler @ 005b3bb0 */
  FUN_004a3cf4(local_58,&DAT_001b3348);
                    /* try { // try from 005b3ab8 to 005b3acb has its CatchHandler @ 005b3b98 */
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
                    /* try { // try from 005b3b0c to 005b3b0f has its CatchHandler @ 005b3b7c */
  FUN_0054723c(param_1 + 2,ppppuVar1);
  *param_1 = &PTR_FUN_00d25860;
  if (local_59 < '\0') {
    operator_delete(local_70[0]);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 005b3c0c  FUN_005b3c0c =====

/* WARNING: Removing unreachable block (ram,0x005b3c88) */
/* WARNING: Removing unreachable block (ram,0x005b3d38) */

void FUN_005b3c0c(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

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
  FUN_004a3cf4(local_a0,"out_of_range");
  local_3c[0] = 0x2e;
                    /* try { // try from 005b3c50 to 005b3c5b has its CatchHandler @ 005b3dc4 */
  FUN_005490bc(local_58,param_2);
                    /* try { // try from 005b3c5c to 005b3c7f has its CatchHandler @ 005b3dac */
  FUN_005b2cac(local_88,"[json.exception.",local_a0,local_3c,local_58,&DAT_001d2ea9);
                    /* try { // try from 005b3c90 to 005b3c9f has its CatchHandler @ 005b3d98 */
  FUN_004a3cf4(local_58,&DAT_001b3348);
                    /* try { // try from 005b3ca0 to 005b3cb3 has its CatchHandler @ 005b3d80 */
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
                    /* try { // try from 005b3cf4 to 005b3cf7 has its CatchHandler @ 005b3d64 */
  FUN_0054723c(param_1 + 2,ppppuVar1);
  *param_1 = &PTR_FUN_00d258b0;
  if (local_59 < '\0') {
    operator_delete(local_70[0]);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 005b3df4  FUN_005b3df4 =====

void FUN_005b3df4(undefined8 param_1,long param_2)

{
  short *__s1;
  byte bVar1;
  long lVar2;
  int iVar3;
  void *pvVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *local_118;
  undefined1 *local_110;
  undefined1 *local_100;
  undefined1 *local_f8;
  ulong local_e8;
  void *local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  void *local_c8;
  undefined8 uStack_c0;
  void *local_b8;
  void *local_b0;
  long lStack_a8;
  ulong local_a0;
  void *local_98;
  undefined8 uStack_90;
  undefined1 local_88 [8];
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined1 local_70 [8];
  undefined1 auStack_68 [8];
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  (**(code **)(**(long **)(param_2 + 0x10) + 0x58))(&local_118);
  local_b0 = (void *)0x0;
  local_b8 = (void *)0x3;
                    /* try { // try from 005b3e48 to 005b3e4f has its CatchHandler @ 005b431c */
  pvVar4 = operator_new(0x18);
                    /* try { // try from 005b3e50 to 005b3e5f has its CatchHandler @ 005b4308 */
  FUN_004a3cf4(pvVar4,&DAT_001ab7bd);
  lVar8 = *(long *)(param_2 + 0x10);
  lStack_a8 = 0;
  local_98 = (void *)0x0;
  local_a0 = 3;
  local_b0 = pvVar4;
                    /* try { // try from 005b3e74 to 005b3e7b has its CatchHandler @ 005b42e4 */
  pvVar4 = operator_new(0x18);
                    /* try { // try from 005b3e84 to 005b3e87 has its CatchHandler @ 005b42d0 */
  FUN_004c55b4(pvVar4,lVar8 + 0x40);
  uStack_90 = 0;
                    /* try { // try from 005b3e8c to 005b3ea7 has its CatchHandler @ 005b4280 */
  local_98 = pvVar4;
  FUN_005b4814(local_88,&local_b8,2,1,2);
  local_78 = 0;
  local_e0 = (void *)0x0;
  local_e8 = 3;
                    /* try { // try from 005b3ebc to 005b3ec3 has its CatchHandler @ 005b4260 */
  pvVar4 = operator_new(0x18);
                    /* try { // try from 005b3ec4 to 005b3ed3 has its CatchHandler @ 005b424c */
  FUN_004a3cf4(pvVar4,&DAT_001b39bc);
  lVar8 = *(long *)(param_2 + 0x10);
  uStack_d8 = 0;
  local_c8 = (void *)0x0;
  local_d0 = 3;
  local_e0 = pvVar4;
                    /* try { // try from 005b3ee8 to 005b3eef has its CatchHandler @ 005b4224 */
  pvVar4 = operator_new(0x18);
                    /* try { // try from 005b3ef8 to 005b3efb has its CatchHandler @ 005b4210 */
  FUN_004c55b4(pvVar4,lVar8 + 0x28);
  uStack_c0 = 0;
                    /* try { // try from 005b3f00 to 005b3f17 has its CatchHandler @ 005b41f8 */
  local_c8 = pvVar4;
  FUN_005b4814(local_70,&local_e8,2,1,2);
  local_60 = 0;
                    /* try { // try from 005b3f1c to 005b3f37 has its CatchHandler @ 005b41dc */
  FUN_005b4814(param_1,local_88,2,0,1);
                    /* try { // try from 005b3f40 to 005b3f53 has its CatchHandler @ 005b4360 */
  FUN_005b2fc4(auStack_68,local_70[0]);
  FUN_005b2fc4(auStack_80,local_88[0]);
                    /* try { // try from 005b3f60 to 005b3f6f has its CatchHandler @ 005b435c */
  FUN_005b2fc4(&local_c8,local_d0 & 0xff);
  FUN_005b2fc4(&local_e0,local_e8 & 0xff);
                    /* try { // try from 005b3f7c to 005b3f8b has its CatchHandler @ 005b4358 */
  FUN_005b2fc4(&local_98,local_a0 & 0xff);
  FUN_005b2fc4(&local_b0,(ulong)local_b8 & 0xff);
  lVar8 = *(long *)(param_2 + 0x10);
  bVar1 = *(byte *)(lVar8 + 0x3f);
  __s1 = *(short **)(lVar8 + 0x28);
  if (-1 < (char)bVar1) {
    __s1 = (short *)(lVar8 + 0x28);
  }
  uVar7 = *(ulong *)(lVar8 + 0x30);
  if (-1 < (char)bVar1) {
    uVar7 = (ulong)bVar1;
  }
  if ((__s1 == (short *)0x0) && (uVar7 != 0)) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 005b411c to 005b4143 has its CatchHandler @ 005b4364 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/string_view",0x131,
                 "__len == 0 || __s != nullptr",
                 "string_view::string_view(_CharT *, size_t): received nullptr");
    }
    goto LAB_005b4350;
  }
  if (uVar7 == 3) {
    iVar3 = memcmp(__s1,&DAT_001d07f6,3);
    if (iVar3 != 0) goto LAB_005b4144;
                    /* try { // try from 005b4044 to 005b404f has its CatchHandler @ 005b41ac */
    FUN_005a41a0(&local_b8,&local_118);
                    /* try { // try from 005b4050 to 005b4067 has its CatchHandler @ 005b4190 */
    FUN_005b4368(local_88,param_1,&DAT_001c4fee,&local_b8);
  }
  else {
    if ((uVar7 != 2) || (*__s1 != 0x4345)) {
LAB_005b4144:
      uVar6 = FUN_0054f64c(0x10);
                    /* try { // try from 005b4150 to 005b415b has its CatchHandler @ 005b41c4 */
      FUN_0054723c(uVar6,"unknown key type");
      if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 005b416c to 005b4183 has its CatchHandler @ 005b41bc */
                    /* WARNING: Subroutine does not return */
        FUN_0054f748(uVar6,PTR_PTR_00d51d18,PTR_FUN_00d51d10);
      }
      goto LAB_005b4350;
    }
                    /* try { // try from 005b3fd4 to 005b3fdf has its CatchHandler @ 005b41b4 */
    FUN_005a41a0(&local_b8,&local_118);
                    /* try { // try from 005b3fe0 to 005b3ff7 has its CatchHandler @ 005b4194 */
    FUN_005b4368(local_88,param_1,&DAT_001c4fee,&local_b8);
    if (lStack_a8 < 0) {
      operator_delete(local_b8);
    }
                    /* try { // try from 005b400c to 005b4017 has its CatchHandler @ 005b4188 */
    FUN_005a41a0(&local_b8,&local_100);
                    /* try { // try from 005b4018 to 005b402f has its CatchHandler @ 005b4184 */
    FUN_005b4368(local_88,param_1,&DAT_001d07fa,&local_b8);
  }
  if (lStack_a8 < 0) {
    operator_delete(local_b8);
  }
  if (0 < (long)local_f8 - (long)local_100) {
    uVar7 = ((long)local_f8 - (long)local_100) + 1;
    puVar5 = local_100;
    do {
      uVar7 = uVar7 - 1;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    } while (1 < uVar7);
  }
  if (local_100 != (undefined1 *)0x0) {
    local_f8 = local_100;
    operator_delete(local_100);
  }
  if (0 < (long)local_110 - (long)local_118) {
    uVar7 = ((long)local_110 - (long)local_118) + 1;
    puVar5 = local_118;
    do {
      uVar7 = uVar7 - 1;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    } while (1 < uVar7);
  }
  if (local_118 != (undefined1 *)0x0) {
    local_110 = local_118;
    operator_delete(local_118);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_005b4350:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005b4368  FUN_005b4368 =====

void FUN_005b4368(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 extraout_w1;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_68;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*param_2 == '\0') {
    *param_2 = '\x01';
    puVar3 = (undefined8 *)operator_new(0x18);
    puVar3[2] = 0;
    *(undefined8 **)(param_2 + 8) = puVar3;
    puVar3[1] = 0;
    *puVar3 = puVar3 + 1;
  }
  else {
    if (*param_2 != '\x01') {
      uVar4 = FUN_0054f64c(0x20);
      local_68 = FUN_005b2870(param_2);
                    /* try { // try from 005b4478 to 005b448b has its CatchHandler @ 005b44f4 */
      FUN_005b5bc4(auStack_60,"cannot use emplace() with ",&local_68);
                    /* try { // try from 005b4490 to 005b44cf has its CatchHandler @ 005b44d0 */
      FUN_005b259c(uVar4,0x137,auStack_60,param_2);
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_0054f748(uVar4,&PTR_PTR_thunk_FUN_00552768_00d25820,FUN_005be5f0);
      }
      goto LAB_005b4518;
    }
    puVar3 = *(undefined8 **)(param_2 + 8);
  }
  uVar4 = FUN_005b5cb0(puVar3,param_3,param_4);
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    uVar5 = 0;
    uVar6 = 1;
  }
  else if (cVar1 == '\x02') {
    uVar6 = 0x8000000000000000;
    uVar5 = **(undefined8 **)(param_2 + 8);
  }
  else if (cVar1 == '\x01') {
    uVar5 = 0;
    uVar6 = 0x8000000000000000;
  }
  else {
    uVar5 = 0;
    uVar6 = 0;
  }
  *param_1 = param_2;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined1 *)(param_1 + 4) = extraout_w1;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_005b4518:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005b451c  FUN_005b451c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b451c(undefined8 *param_1,undefined8 param_2,uint param_3,undefined1 param_4,
                 uint param_5,undefined4 param_6)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  byte *pbVar7;
  long lVar8;
  long *plVar9;
  long *local_2f0;
  long *local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  lconv *local_2a0;
  undefined1 local_298;
  undefined1 local_297;
  undefined8 local_296;
  undefined8 uStack_28e;
  undefined8 local_286;
  undefined8 uStack_27e;
  undefined8 local_276;
  undefined8 uStack_26e;
  undefined8 local_266;
  undefined8 uStack_25e;
  undefined8 local_256;
  undefined8 uStack_24e;
  undefined8 local_246;
  undefined8 uStack_23e;
  undefined8 local_236;
  undefined8 uStack_22e;
  undefined8 local_226;
  undefined8 uStack_21e;
  undefined8 local_216;
  undefined8 uStack_20e;
  undefined8 local_206;
  undefined8 uStack_1fe;
  undefined8 local_1f6;
  undefined8 uStack_1ee;
  undefined8 local_1e6;
  undefined8 uStack_1de;
  undefined8 uStack_1d6;
  undefined8 uStack_1ce;
  undefined8 local_1c6;
  undefined8 uStack_1be;
  undefined8 uStack_1b6;
  undefined8 uStack_1ae;
  undefined8 local_1a6;
  undefined8 uStack_19e;
  undefined8 uStack_196;
  undefined8 uStack_18e;
  undefined8 local_186;
  undefined8 uStack_17e;
  undefined8 uStack_176;
  undefined8 uStack_16e;
  undefined8 local_166;
  undefined8 uStack_15e;
  undefined8 uStack_156;
  undefined8 uStack_14e;
  undefined8 local_146;
  undefined8 uStack_13e;
  undefined8 uStack_136;
  undefined8 uStack_12e;
  undefined8 local_126;
  undefined8 uStack_11e;
  undefined8 uStack_116;
  undefined8 uStack_10e;
  undefined8 local_106;
  undefined8 uStack_fe;
  undefined8 uStack_f6;
  undefined8 uStack_ee;
  undefined8 local_e6;
  undefined8 uStack_de;
  undefined8 uStack_d6;
  undefined8 uStack_ce;
  undefined8 local_c6;
  undefined8 uStack_be;
  undefined8 uStack_b6;
  undefined8 uStack_ae;
  undefined8 local_a6;
  undefined8 uStack_9e;
  undefined1 local_96;
  undefined8 *local_90;
  undefined8 local_88;
  long lStack_80;
  undefined4 local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
                    /* try { // try from 005b456c to 005b4573 has its CatchHandler @ 005b47a4 */
  plVar6 = (long *)operator_new(0x28);
  *plVar6 = (long)&PTR_FUN_00d258d8;
  plVar6[2] = 0;
  plVar9 = plVar6 + 1;
  *plVar9 = 0;
  local_2f0 = plVar6 + 3;
  *local_2f0 = (long)&PTR_FUN_00d25928;
  plVar6[4] = (long)param_1;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = *plVar9 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uStack_2d8 = 0;
  local_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  local_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  local_2e8 = plVar6;
                    /* try { // try from 005b45d4 to 005b466b has its CatchHandler @ 005b47ac */
  local_2a0 = localeconv();
  pbVar7 = (byte *)local_2a0->thousands_sep;
  if (pbVar7 != (byte *)0x0) {
    pbVar7 = (byte *)(ulong)*pbVar7;
  }
  local_298 = SUB81(pbVar7,0);
  pbVar7 = (byte *)local_2a0->decimal_point;
  if (pbVar7 != (byte *)0x0) {
    pbVar7 = (byte *)(ulong)*pbVar7;
  }
  local_297 = SUB81(pbVar7,0);
  uStack_1de = 0;
  local_1e6 = 0;
  uStack_1ce = 0;
  uStack_1d6 = 0;
  uStack_1be = 0;
  local_1c6 = 0;
  uStack_1ae = 0;
  uStack_1b6 = 0;
  uStack_19e = 0;
  local_1a6 = 0;
  uStack_18e = 0;
  uStack_196 = 0;
  uStack_17e = 0;
  local_186 = 0;
  uStack_16e = 0;
  uStack_176 = 0;
  uStack_15e = 0;
  local_166 = 0;
  uStack_14e = 0;
  uStack_156 = 0;
  uStack_13e = 0;
  local_146 = 0;
  uStack_12e = 0;
  uStack_136 = 0;
  uStack_11e = 0;
  local_126 = 0;
  uStack_10e = 0;
  uStack_116 = 0;
  uStack_fe = 0;
  local_106 = 0;
  uStack_ee = 0;
  uStack_f6 = 0;
  uStack_de = 0;
  local_e6 = 0;
  uStack_ce = 0;
  uStack_d6 = 0;
  uStack_be = 0;
  local_c6 = 0;
  uStack_ae = 0;
  uStack_b6 = 0;
  uStack_9e = 0;
  local_a6 = 0;
  uStack_28e = 0;
  local_296 = 0;
  uStack_27e = 0;
  local_286 = 0;
  uStack_26e = 0;
  local_276 = 0;
  uStack_25e = 0;
  local_266 = 0;
  uStack_24e = 0;
  local_256 = 0;
  uStack_23e = 0;
  local_246 = 0;
  uStack_22e = 0;
  local_236 = 0;
  uStack_21e = 0;
  local_226 = 0;
  uStack_20e = 0;
  local_216 = 0;
  uStack_1fe = 0;
  local_206 = 0;
  uStack_1ee = 0;
  local_1f6 = 0;
  local_96 = param_4;
  local_90 = (undefined8 *)operator_new(0x210);
  *(undefined1 *)(local_90 + 0x40) = 0;
  lStack_80 = _UNK_001f3858;
  local_88 = _DAT_001f3850;
  uVar4 = CONCAT17(param_4,CONCAT16(param_4,CONCAT15(param_4,CONCAT14(param_4,CONCAT13(param_4,
                                                  CONCAT12(param_4,CONCAT11(param_4,param_4)))))));
  uVar5 = CONCAT17(param_4,CONCAT16(param_4,CONCAT15(param_4,CONCAT14(param_4,CONCAT13(param_4,
                                                  CONCAT12(param_4,CONCAT11(param_4,param_4)))))));
  local_90[1] = uVar5;
  *local_90 = uVar4;
  local_90[3] = uVar5;
  local_90[2] = uVar4;
  local_90[5] = uVar5;
  local_90[4] = uVar4;
  local_90[7] = uVar5;
  local_90[6] = uVar4;
  local_90[9] = uVar5;
  local_90[8] = uVar4;
  local_90[0xb] = uVar5;
  local_90[10] = uVar4;
  local_90[0xd] = uVar5;
  local_90[0xc] = uVar4;
  local_90[0xf] = uVar5;
  local_90[0xe] = uVar4;
  local_90[0x11] = uVar5;
  local_90[0x10] = uVar4;
  local_90[0x13] = uVar5;
  local_90[0x12] = uVar4;
  local_90[0x15] = uVar5;
  local_90[0x14] = uVar4;
  local_90[0x17] = uVar5;
  local_90[0x16] = uVar4;
  local_90[0x19] = uVar5;
  local_90[0x18] = uVar4;
  local_90[0x1b] = uVar5;
  local_90[0x1a] = uVar4;
  local_90[0x1d] = uVar5;
  local_90[0x1c] = uVar4;
  local_90[0x1f] = uVar5;
  local_90[0x1e] = uVar4;
  local_90[0x21] = uVar5;
  local_90[0x20] = uVar4;
  local_90[0x23] = uVar5;
  local_90[0x22] = uVar4;
  local_90[0x25] = uVar5;
  local_90[0x24] = uVar4;
  local_90[0x27] = uVar5;
  local_90[0x26] = uVar4;
  local_90[0x29] = uVar5;
  local_90[0x28] = uVar4;
  local_90[0x2b] = uVar5;
  local_90[0x2a] = uVar4;
  local_90[0x2d] = uVar5;
  local_90[0x2c] = uVar4;
  local_90[0x2f] = uVar5;
  local_90[0x2e] = uVar4;
  local_90[0x31] = uVar5;
  local_90[0x30] = uVar4;
  local_90[0x33] = uVar5;
  local_90[0x32] = uVar4;
  local_90[0x35] = uVar5;
  local_90[0x34] = uVar4;
  local_90[0x37] = uVar5;
  local_90[0x36] = uVar4;
  local_90[0x39] = uVar5;
  local_90[0x38] = uVar4;
  local_90[0x3b] = uVar5;
  local_90[0x3a] = uVar4;
  local_90[0x3d] = uVar5;
  local_90[0x3c] = uVar4;
  local_90[0x3f] = uVar5;
  local_90[0x3e] = uVar4;
  do {
    lVar8 = *plVar9;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = lVar8 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  local_78 = param_6;
  if (lVar8 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_005466cc(plVar6);
  }
                    /* try { // try from 005b46fc to 005b4717 has its CatchHandler @ 005b4794 */
  FUN_005b5ef0(&local_2f0,param_2,~param_3 >> 0x1f,param_5 & 1,
               param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU),0);
  if (lStack_80 < 0) {
    operator_delete(local_90);
  }
  plVar6 = local_2e8;
  if (local_2e8 != (long *)0x0) {
    plVar9 = local_2e8 + 1;
    do {
      lVar8 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*local_2e8 + 0x10))(local_2e8);
      FUN_005466cc(plVar6);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005b47f8  FUN_005b47f8 =====

void FUN_005b47f8(undefined1 *param_1)

{
                    /* try { // try from 005b4804 to 005b4807 has its CatchHandler @ 005b4810 */
  FUN_005b2fc4(param_1 + 8,*param_1);
  return;
}


// ===== 005b4814  FUN_005b4814 =====

void FUN_005b4814(undefined8 *param_1,char *param_2,long param_3,ulong param_4,char param_5)

{
  long lVar1;
  bool bVar2;
  char *pcVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  bool bVar7;
  long lVar8;
  char *pcVar9;
  char *local_78;
  char *local_70;
  long *aplStack_68 [2];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3 != 0) {
    lVar8 = param_3 * 0x18;
    pcVar9 = param_2;
    do {
      pcVar3 = pcVar9;
      if (*(char **)(pcVar9 + 0x10) != (char *)0x0) {
        pcVar3 = *(char **)(pcVar9 + 0x10);
      }
                    /* try { // try from 005b4890 to 005b4897 has its CatchHandler @ 005b4acc */
      if (((*pcVar3 != '\x02') || ((*(long **)(pcVar3 + 8))[1] - **(long **)(pcVar3 + 8) != 0x20))
         || (pcVar3 = (char *)FUN_005b4e08(pcVar3,0), *pcVar3 != '\x03')) {
        bVar7 = false;
        bVar2 = false;
        goto joined_r0x005b4964;
      }
      pcVar9 = pcVar9 + 0x18;
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != 0);
  }
  bVar7 = true;
  bVar2 = true;
joined_r0x005b4964:
  if ((param_4 & 1) == 0) {
    bVar2 = false;
    if (param_5 != '\x02') {
      bVar2 = bVar7;
    }
    if (param_5 != '\x01') {
      bVar7 = true;
    }
    if (!bVar7) {
      uVar6 = FUN_0054f64c(0x20);
                    /* try { // try from 005b4a60 to 005b4a6f has its CatchHandler @ 005b4b10 */
      FUN_004a3cf4(&local_70,"cannot create object from initializer list");
                    /* try { // try from 005b4a74 to 005b4ab3 has its CatchHandler @ 005b4aec */
      FUN_005b4b48(uVar6,0x12d,&local_70,0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_0054f748(uVar6,&PTR_PTR_thunk_FUN_00552768_00d25820,FUN_005be5f0);
      }
      goto LAB_005b4b3c;
    }
    if (!bVar2) goto LAB_005b4988;
LAB_005b48bc:
    *(undefined1 *)param_1 = 1;
                    /* try { // try from 005b48c4 to 005b48cb has its CatchHandler @ 005b4ac8 */
    puVar4 = (undefined8 *)operator_new(0x18);
    puVar4[2] = 0;
    param_1[1] = puVar4;
    puVar4[1] = 0;
    *puVar4 = puVar4 + 1;
    if (param_3 != 0) {
      param_3 = param_3 * 0x18;
      do {
        if (*(long *)(param_2 + 0x10) == 0) {
          aplStack_68[0] = *(long **)(param_2 + 8);
          local_70 = *(char **)param_2;
          *param_2 = '\0';
          param_2[8] = '\0';
          param_2[9] = '\0';
          param_2[10] = '\0';
          param_2[0xb] = '\0';
          param_2[0xc] = '\0';
          param_2[0xd] = '\0';
          param_2[0xe] = '\0';
          param_2[0xf] = '\0';
        }
        else {
                    /* try { // try from 005b48fc to 005b4903 has its CatchHandler @ 005b4ad0 */
          FUN_005b5058(&local_70);
        }
        lVar8 = *aplStack_68[0];
        if (aplStack_68[0][1] == lVar8) {
          if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 005b49f4 to 005b4a1b has its CatchHandler @ 005b4b44 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x587,
                       "__n < size()","vector[] index out of bounds");
          }
          goto LAB_005b4b3c;
        }
        if ((ulong)(aplStack_68[0][1] - lVar8) < 0x11) {
          if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 005b4a2c to 005b4a53 has its CatchHandler @ 005b4b40 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x587,
                       "__n < size()","vector[] index out of bounds");
          }
          goto LAB_005b4b3c;
        }
                    /* try { // try from 005b493c to 005b4943 has its CatchHandler @ 005b4ad8 */
        FUN_005b5888(param_1[1],*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 8),lVar8 + 0x10);
                    /* try { // try from 005b4948 to 005b494f has its CatchHandler @ 005b4ae8 */
        FUN_005b2fc4(aplStack_68,(ulong)local_70 & 0xff);
        param_2 = param_2 + 0x18;
        param_3 = param_3 + -0x18;
      } while (param_3 != 0);
    }
  }
  else {
    if (bVar2) goto LAB_005b48bc;
LAB_005b4988:
    local_78 = param_2 + param_3 * 0x18;
    *(undefined1 *)param_1 = 2;
    local_70 = param_2;
                    /* try { // try from 005b499c to 005b49a3 has its CatchHandler @ 005b4ac4 */
    pvVar5 = operator_new(0x18);
                    /* try { // try from 005b49a4 to 005b49b3 has its CatchHandler @ 005b4ab4 */
    FUN_005b59a8(pvVar5,&local_70,&local_78);
    param_1[1] = pvVar5;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_005b4b3c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005b4b48  FUN_005b4b48 =====

/* WARNING: Removing unreachable block (ram,0x005b4bc4) */
/* WARNING: Removing unreachable block (ram,0x005b4c74) */

void FUN_005b4b48(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

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
  FUN_004a3cf4(local_a0,"type_error");
  local_3c[0] = 0x2e;
                    /* try { // try from 005b4b8c to 005b4b97 has its CatchHandler @ 005b4d00 */
  FUN_005490bc(local_58,param_2);
                    /* try { // try from 005b4b98 to 005b4bbb has its CatchHandler @ 005b4ce8 */
  FUN_005b2cac(local_88,"[json.exception.",local_a0,local_3c,local_58,&DAT_001d2ea9);
                    /* try { // try from 005b4bcc to 005b4bdb has its CatchHandler @ 005b4cd4 */
  FUN_004a3cf4(local_58,&DAT_001b3348);
                    /* try { // try from 005b4bdc to 005b4bef has its CatchHandler @ 005b4cbc */
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
                    /* try { // try from 005b4c30 to 005b4c33 has its CatchHandler @ 005b4ca0 */
  FUN_0054723c(param_1 + 2,ppppuVar1);
  *param_1 = &PTR_FUN_00d25860;
  if (local_59 < '\0') {
    operator_delete(local_70[0]);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 005b4d30  FUN_005b4d30 =====

void FUN_005b4d30(undefined8 *param_1,undefined1 param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  switch(param_2) {
  default:
    *param_1 = 0;
    break;
  case 1:
    puVar2 = (undefined8 *)operator_new(0x18);
    puVar2[2] = 0;
    *param_1 = puVar2;
    puVar2[1] = 0;
    *puVar2 = puVar2 + 1;
    break;
  case 2:
    puVar2 = (undefined8 *)operator_new(0x18);
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    *param_1 = puVar2;
    break;
  case 3:
    pvVar1 = operator_new(0x18);
                    /* try { // try from 005b4dc4 to 005b4dcf has its CatchHandler @ 005b4df4 */
    FUN_004a3cf4(pvVar1,&DAT_001b3348);
    *param_1 = pvVar1;
    break;
  case 4:
    *(undefined1 *)param_1 = 0;
    break;
  case 8:
    puVar2 = (undefined8 *)operator_new(0x28);
    *(undefined1 *)(puVar2 + 4) = 0;
    *param_1 = puVar2;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
  }
  return;
}


// ===== 005b4e08  FUN_005b4e08 =====

long FUN_005b4e08(char *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*param_1 == '\x02') {
    lVar1 = **(long **)(param_1 + 8);
    if (param_2 < (ulong)((*(long **)(param_1 + 8))[1] - lVar1 >> 4)) {
      if (*(long *)(lVar2 + 0x28) == local_38) {
        return lVar1 + param_2 * 0x10;
      }
    }
    else if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 005b4ef4 to 005b4f1b has its CatchHandler @ 005b4f68 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x587,
                 "__n < size()","vector[] index out of bounds");
    }
  }
  else {
    uVar3 = FUN_0054f64c(0x20);
    local_58 = FUN_005b2870(param_1);
                    /* try { // try from 005b4e8c to 005b4e9f has its CatchHandler @ 005b4f40 */
    FUN_005b4f6c(auStack_50,"cannot use operator[] with a numeric argument with ",&local_58);
                    /* try { // try from 005b4ea4 to 005b4ee3 has its CatchHandler @ 005b4f1c */
    FUN_005b3a24(uVar3,0x131,auStack_50,param_1);
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar3,&PTR_PTR_thunk_FUN_00552768_00d25820,FUN_005be5f0);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005b4f6c  FUN_005b4f6c =====

void FUN_005b4f6c(undefined8 *param_1,char *param_2,undefined8 *param_3)

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
                    /* try { // try from 005b4fbc to 005b503b has its CatchHandler @ 005b503c */
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


// ===== 005b5058  FUN_005b5058 =====

void FUN_005b5058(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  void *pvVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 unaff_x22;
  long *plVar15;
  undefined1 *puVar16;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 *puVar17;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = *param_2;
  *(undefined1 *)param_1 = uVar2;
  switch(uVar2) {
  case 1:
    puVar14 = *(undefined8 **)(param_2 + 8);
                    /* try { // try from 005b518c to 005b5193 has its CatchHandler @ 005b5264 */
    puVar5 = (undefined8 *)operator_new(0x18);
    puVar5[2] = 0;
    puVar5[1] = 0;
    *puVar5 = puVar5 + 1;
                    /* try { // try from 005b51ac to 005b51b3 has its CatchHandler @ 005b5248 */
    FUN_005b5294(puVar5,*puVar14,puVar14 + 1);
    break;
  case 2:
    plVar15 = *(long **)(param_2 + 8);
                    /* try { // try from 005b51bc to 005b51c3 has its CatchHandler @ 005b5260 */
    puVar5 = (undefined8 *)operator_new(0x18);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    uVar3 = plVar15[1] - *plVar15;
    if (uVar3 != 0) {
      if ((long)uVar3 < 0) {
                    /* try { // try from 005b5234 to 005b523b has its CatchHandler @ 005b5274 */
        uVar13 = FUN_005b3754(puVar5);
                    /* catch() { ... } // from try @ 005b5204 with catch @ 005b523c */
        puVar5[1] = unaff_x22;
        operator_delete(puVar5);
        FUN_005b2fa8(param_1);
                    /* WARNING: Subroutine does not return */
        FUN_00d0fa5c(uVar13);
      }
                    /* try { // try from 005b51e4 to 005b51eb has its CatchHandler @ 005b5274 */
      pvVar7 = operator_new(uVar3);
      *puVar5 = pvVar7;
      puVar5[1] = pvVar7;
      puVar5[2] = (void *)((long)pvVar7 + ((long)uVar3 >> 4) * 0x10);
                    /* try { // try from 005b5204 to 005b520f has its CatchHandler @ 005b523c */
      uVar13 = FUN_005b571c(puVar5 + 2,*plVar15,plVar15[1],pvVar7);
      puVar5[1] = uVar13;
    }
    break;
  case 3:
    uVar13 = *(undefined8 *)(param_2 + 8);
                    /* try { // try from 005b50ac to 005b50b3 has its CatchHandler @ 005b526c */
    puVar5 = (undefined8 *)operator_new(0x18);
                    /* try { // try from 005b50b4 to 005b50bf has its CatchHandler @ 005b525c */
    FUN_004c55b4(puVar5,uVar13);
    break;
  case 4:
    puVar5 = (undefined8 *)(ulong)(byte)param_2[8];
    break;
  case 5:
  case 6:
  case 7:
    puVar5 = *(undefined8 **)(param_2 + 8);
    break;
  case 8:
    plVar15 = *(long **)(param_2 + 8);
                    /* try { // try from 005b50c8 to 005b50cf has its CatchHandler @ 005b5268 */
    puVar5 = (undefined8 *)operator_new(0x28);
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    puVar16 = (undefined1 *)*plVar15;
    puVar1 = (undefined1 *)plVar15[1];
    uVar3 = (long)puVar1 - (long)puVar16;
    if (uVar3 != 0) {
      if ((long)uVar3 < 0) {
                    /* try { // try from 005b522c to 005b5233 has its CatchHandler @ 005b5278 */
                    /* WARNING: Subroutine does not return */
        FUN_004f04ec(puVar5);
      }
                    /* try { // try from 005b50ec to 005b50f3 has its CatchHandler @ 005b5278 */
      puVar6 = (undefined1 *)operator_new(uVar3);
      *puVar5 = puVar6;
      puVar5[1] = puVar6;
      puVar5[2] = puVar6 + uVar3;
      puVar17 = puVar16;
      if ((uVar3 < 0x20) || ((ulong)((long)puVar6 - (long)puVar16) < 0x20)) {
LAB_005b5158:
        do {
          puVar16 = puVar17 + 1;
          puVar8 = puVar6 + 1;
          *puVar6 = *puVar17;
          puVar6 = puVar8;
          puVar17 = puVar16;
        } while (puVar16 != puVar1);
      }
      else {
        uVar9 = uVar3 & 0xffffffffffffffe0;
        puVar14 = (undefined8 *)(puVar6 + 0x10);
        puVar17 = puVar16 + uVar9;
        puVar8 = puVar6 + uVar9;
        puVar11 = (undefined8 *)(puVar16 + 0x10);
        uVar12 = uVar9;
        do {
          puVar4 = puVar11 + -1;
          uVar13 = puVar11[-2];
          uVar19 = puVar11[1];
          uVar18 = *puVar11;
          puVar11 = puVar11 + 4;
          uVar12 = uVar12 - 0x20;
          puVar14[-1] = *puVar4;
          puVar14[-2] = uVar13;
          puVar14[1] = uVar19;
          *puVar14 = uVar18;
          puVar14 = puVar14 + 4;
        } while (uVar12 != 0);
        puVar6 = puVar8;
        if (uVar3 != uVar9) goto LAB_005b5158;
      }
      puVar5[1] = puVar8;
    }
    lVar10 = plVar15[3];
    *(char *)(puVar5 + 4) = (char)plVar15[4];
    puVar5[3] = lVar10;
    break;
  default:
    goto switchD_005b509c_default;
  }
  param_1[1] = puVar5;
switchD_005b509c_default:
  return;
}


// ===== 005b5294  FUN_005b5294 =====

void FUN_005b5294(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 *local_80;
  long *plStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_2 != param_3) {
    do {
      plVar3 = (long *)FUN_005b545c(param_1,param_1 + 1,&local_88,auStack_90,param_2 + 4);
      if (*plVar3 == 0) {
        puVar4 = (undefined8 *)operator_new(0x48);
        local_70 = 0;
        local_80 = puVar4;
        plStack_78 = param_1 + 1;
                    /* try { // try from 005b5328 to 005b5333 has its CatchHandler @ 005b5430 */
        FUN_004c55b4(puVar4 + 4,param_2 + 4);
                    /* try { // try from 005b533c to 005b533f has its CatchHandler @ 005b5418 */
        FUN_005b5058(puVar4 + 7,param_2 + 7);
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = local_88;
        *plVar3 = (long)puVar4;
        if (*(long *)*param_1 != 0) {
          *param_1 = *(long *)*param_1;
          puVar4 = (undefined8 *)*plVar3;
        }
        FUN_0041dcd0(param_1[1],puVar4);
        param_1[2] = param_1[2] + 1;
      }
      if (param_2 == (long *)0x0) {
        if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 005b53f0 to 005b5417 has its CatchHandler @ 005b5458 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
                     "__x != nullptr","node shouldn\'t be null");
        }
        goto LAB_005b5454;
      }
      plVar3 = (long *)param_2[1];
      plVar5 = param_2;
      if ((long *)param_2[1] == (long *)0x0) {
        do {
          param_2 = (long *)plVar5[2];
          bVar2 = (long *)*param_2 != plVar5;
          plVar5 = param_2;
        } while (bVar2);
      }
      else {
        do {
          param_2 = plVar3;
          plVar3 = (long *)*param_2;
        } while ((long *)*param_2 != (long *)0x0);
      }
    } while (param_2 != param_3);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
LAB_005b5454:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005b545c  FUN_005b545c =====

long * FUN_005b545c(undefined8 *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5
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
                    /* try { // try from 005b5690 to 005b56b7 has its CatchHandler @ 005b56b8 */
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
              if ((uVar3 >> 7 & 1) == 0) goto LAB_005b55a4;
              plVar8 = plVar7 + 1;
              plVar5 = (long *)*plVar8;
              if ((long *)*plVar8 == (long *)0x0) goto LAB_005b55a4;
            }
            plVar8 = plVar7;
            plVar5 = (long *)*plVar7;
          }
          goto LAB_005b55a4;
        }
        plVar4 = (long *)*plVar6;
      }
      plVar7 = plVar8;
      if (plVar4 == (long *)0x0) {
        *param_3 = (long)param_2;
        return plVar6;
      }
      goto LAB_005b55a4;
    }
  }
  plVar7 = param_2;
  if ((long *)*param_1 != param_2) {
    if (param_2 == (long *)0x0) {
                    /* try { // try from 005b5668 to 005b568f has its CatchHandler @ 005b56bc */
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
          if ((uVar3 >> 7 & 1) == 0) goto LAB_005b55a4;
          plVar8 = plVar7 + 1;
          plVar5 = (long *)*plVar8;
          if ((long *)*plVar8 == (long *)0x0) goto LAB_005b55a4;
        }
        plVar8 = plVar7;
        plVar5 = (long *)*plVar7;
      }
      goto LAB_005b55a4;
    }
  }
  if (*param_2 == 0) {
    *param_3 = (long)param_2;
    return param_2;
  }
  plVar8 = plVar7 + 1;
LAB_005b55a4:
  *param_3 = (long)plVar7;
  return plVar8;
}


// ===== 005b56c0  FUN_005b56c0 =====

void FUN_005b56c0(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
                    /* try { // try from 005b56e8 to 005b56eb has its CatchHandler @ 005b5718 */
    if ((*(char *)(param_1 + 2) != '\0') &&
       (FUN_005b2fc4((long)pvVar1 + 0x40,*(undefined1 *)((long)pvVar1 + 0x38)),
       *(char *)((long)pvVar1 + 0x37) < '\0')) {
      operator_delete(*(void **)((long)pvVar1 + 0x20));
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 005b571c  FUN_005b571c =====

long FUN_005b571c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (param_2 != param_3) {
    do {
      if (param_4 == 0) {
        if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* try { // try from 005b57c0 to 005b57e7 has its CatchHandler @ 005b57ec */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        goto LAB_005b5840;
      }
                    /* try { // try from 005b5764 to 005b576f has its CatchHandler @ 005b57e8 */
      FUN_005b5058(param_4,param_2);
      param_4 = param_4 + 0x10;
      param_2 = param_2 + 0x10;
    } while (param_2 != param_3);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return param_4;
  }
LAB_005b5840:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005b5848  FUN_005b5848 =====

void FUN_005b5848(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)**(undefined8 **)(param_1 + 8);
  puVar1 = (undefined1 *)**(undefined8 **)(param_1 + 0x10);
  while (puVar1 != puVar2) {
                    /* try { // try from 005b5870 to 005b5873 has its CatchHandler @ 005b5884 */
    FUN_005b2fc4(puVar1 + -8,puVar1[-0x10]);
    puVar1 = puVar1 + -0x10;
  }
  return;
}


// ===== 005b5888  FUN_005b5888 =====

undefined1  [16]
FUN_005b5888(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  plVar4 = (long *)param_1[1];
  plVar6 = param_1 + 1;
  while (plVar7 = plVar6, plVar4 != (long *)0x0) {
    while( true ) {
      plVar7 = plVar4;
      uVar1 = FUN_0041d7a0(param_2,plVar7 + 4);
      if ((uVar1 >> 7 & 1) != 0) break;
      uVar1 = FUN_0041d7a0(plVar7 + 4,param_2);
      if ((uVar1 >> 7 & 1) == 0) {
        puVar2 = (undefined8 *)*plVar6;
        if (puVar2 == (undefined8 *)0x0) goto LAB_005b591c;
        uVar5 = 0;
        goto LAB_005b598c;
      }
      plVar6 = plVar7 + 1;
      plVar4 = (long *)*plVar6;
      if ((long *)*plVar6 == (long *)0x0) goto LAB_005b591c;
    }
    plVar6 = plVar7;
    plVar4 = (long *)*plVar7;
  }
LAB_005b591c:
  puVar2 = (undefined8 *)operator_new(0x48);
  uVar5 = param_3[2];
  *puVar2 = 0;
  puVar2[1] = 0;
  uVar9 = param_3[1];
  uVar8 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  uVar11 = param_4[1];
  uVar10 = *param_4;
  puVar2[6] = uVar5;
  puVar2[5] = uVar9;
  puVar2[4] = uVar8;
  param_4[1] = 0;
  puVar2[8] = uVar11;
  puVar2[7] = uVar10;
  puVar2[2] = plVar7;
  *plVar6 = (long)puVar2;
  plVar4 = (long *)*param_1;
  *(undefined1 *)param_4 = 0;
  puVar3 = puVar2;
  if (*plVar4 != 0) {
    *param_1 = *plVar4;
    puVar3 = (undefined8 *)*plVar6;
  }
  FUN_0041dcd0(param_1[1],puVar3);
  uVar5 = 1;
  param_1[2] = param_1[2] + 1;
LAB_005b598c:
  auVar12._8_8_ = uVar5;
  auVar12._0_8_ = puVar2;
  return auVar12;
}


// ===== 005b59a8  FUN_005b59a8 =====

undefined8 * FUN_005b59a8(undefined8 *param_1,long *param_2,long *param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 unaff_x23;
  ulong uVar6;
  
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  lVar4 = *param_2;
  lVar5 = *param_3;
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = lVar5 - lVar4;
  param_1[2] = 0;
  if (lVar3 != 0) {
    lVar3 = lVar3 >> 3;
    if ((ulong)(lVar3 * -0x5555555555555555) >> 0x3c != 0) {
      FUN_005b3754(param_1);
                    /* catch() { ... } // from try @ 005b5a14 with catch @ 005b5a74 */
      param_1[1] = unaff_x23;
                    /* WARNING: Subroutine does not return */
      FUN_00d0fa5c();
    }
    uVar6 = lVar3 * -0x5555555555555550;
    pvVar1 = operator_new(uVar6);
    *param_1 = pvVar1;
    param_1[1] = pvVar1;
    param_1[2] = (void *)((long)pvVar1 + uVar6);
                    /* try { // try from 005b5a14 to 005b5a27 has its CatchHandler @ 005b5a74 */
    uVar2 = FUN_005b5a7c(param_1 + 2,lVar4,lVar5,pvVar1);
    param_1[1] = uVar2;
  }
  return param_1;
}


// ===== 005b5a7c  FUN_005b5a7c =====

undefined8 *
FUN_005b5a7c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar2 = param_4;
  if (param_2 != param_3) {
    do {
      if (puVar2 == (undefined8 *)0x0) {
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 005b5b3c to 005b5b63 has its CatchHandler @ 005b5b68 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x23,"__location != nullptr","null pointer given to construct_at");
        }
        goto LAB_005b5bbc;
      }
      if (param_2[2] == 0) {
        uStack_58 = param_2[1];
        local_60 = *param_2;
        *(undefined1 *)param_2 = 0;
        param_2[1] = 0;
      }
      else {
                    /* try { // try from 005b5af4 to 005b5afb has its CatchHandler @ 005b5b64 */
        FUN_005b5058(&local_60);
      }
      param_2 = param_2 + 3;
      param_4 = puVar2 + 2;
      puVar2[1] = uStack_58;
      *puVar2 = local_60;
      puVar2 = param_4;
    } while (param_2 != param_3);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_4;
  }
LAB_005b5bbc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005b5bc4  FUN_005b5bc4 =====

void FUN_005b5bc4(undefined8 *param_1,char *param_2,undefined8 *param_3)

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
                    /* try { // try from 005b5c14 to 005b5c93 has its CatchHandler @ 005b5c94 */
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


// ===== 005b5cb0  FUN_005b5cb0 =====

undefined8 * FUN_005b5cb0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  puVar3 = (undefined8 *)operator_new(0x48);
  puVar8 = puVar3 + 4;
                    /* try { // try from 005b5d04 to 005b5d0f has its CatchHandler @ 005b5e70 */
  FUN_004a3cf4(puVar8,param_2);
  puVar10 = puVar3 + 7;
  *puVar10 = 0;
  puVar3[8] = 0;
  *(undefined1 *)puVar10 = 3;
                    /* try { // try from 005b5d20 to 005b5d27 has its CatchHandler @ 005b5e48 */
  puVar4 = (undefined8 *)operator_new(0x18);
  uVar7 = param_3[2];
  uVar13 = param_3[1];
  uVar12 = *param_3;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  plVar6 = (long *)param_1[1];
  puVar4[2] = uVar7;
  puVar3[8] = puVar4;
  puVar4[1] = uVar13;
  *puVar4 = uVar12;
  plVar9 = param_1 + 1;
  while (plVar11 = plVar9, plVar6 != (long *)0x0) {
    while( true ) {
      plVar11 = plVar6;
      uVar2 = FUN_0041d7a0(puVar8,plVar11 + 4);
      if ((uVar2 >> 7 & 1) != 0) break;
      uVar2 = FUN_0041d7a0(plVar11 + 4,puVar8);
      if ((uVar2 >> 7 & 1) == 0) {
        puVar4 = (undefined8 *)*plVar9;
        if (puVar4 == (undefined8 *)0x0) goto LAB_005b5dd0;
                    /* try { // try from 005b5da8 to 005b5daf has its CatchHandler @ 005b5e44 */
        FUN_005b2fc4(puVar3 + 8,*(undefined1 *)puVar10);
        if (*(char *)((long)puVar3 + 0x37) < '\0') {
          operator_delete((void *)*puVar8);
        }
        operator_delete(puVar3);
        goto LAB_005b5e10;
      }
      plVar9 = plVar11 + 1;
      plVar6 = (long *)*plVar9;
      if ((long *)*plVar9 == (long *)0x0) goto LAB_005b5dd0;
    }
    plVar9 = plVar11;
    plVar6 = (long *)*plVar11;
  }
LAB_005b5dd0:
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = plVar11;
  *plVar9 = (long)puVar3;
  puVar8 = puVar3;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    puVar8 = (undefined8 *)*plVar9;
  }
  FUN_0041dcd0(param_1[1],puVar8);
  param_1[2] = param_1[2] + 1;
  puVar4 = puVar3;
LAB_005b5e10:
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005b5e98  FUN_005b5e98 =====

void FUN_005b5e98(long param_1)

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


// ===== 005b5ef0  FUN_005b5ef0 =====

void FUN_005b5ef0(undefined8 *param_1,byte *param_2,ulong param_3,uint param_4,int param_5,
                 ulong param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  bool bVar4;
  long *plVar5;
  char *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  code *UNRECOVERED_JUMPTABLE_00;
  byte bVar9;
  uint uVar10;
  undefined8 *puVar11;
  long lVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  char *pcVar16;
  undefined2 *puVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  int iVar21;
  ulong uVar22;
  byte *pbVar23;
  ulong uVar24;
  long *plVar25;
  double dVar26;
  
  if (9 < *param_2) {
    return;
  }
  uVar22 = param_6 & 0xffffffff;
  iVar21 = (int)param_6;
  switch(*param_2) {
  case 1:
    plVar5 = (long *)*param_1;
    puVar11 = (undefined8 *)*plVar5;
    if (*(long *)(*(long *)(param_2 + 8) + 0x10) == 0) {
      pcVar6 = "{}";
      goto LAB_005b65b4;
    }
    if ((param_3 & 1) != 0) {
      (*(code *)puVar11[1])(plVar5,&DAT_001e79b7,2);
      uVar24 = (ulong)(uint)(iVar21 + param_5);
      puVar1 = param_1 + 0x4c;
      uVar8 = param_1[0x4d];
      if (-1 < (char)*(byte *)((long)param_1 + 0x277)) {
        uVar8 = (ulong)*(byte *)((long)param_1 + 0x277);
      }
      if (uVar8 < uVar24) {
        FUN_0054836c(puVar1,uVar8 << 1,0x20);
      }
      plVar5 = (long *)**(undefined8 **)(param_2 + 8);
      if ((*(undefined8 **)(param_2 + 8))[2] != 1) {
        uVar8 = 0;
        do {
          puVar11 = (undefined8 *)param_1[0x4c];
          if (-1 < *(char *)((long)param_1 + 0x277)) {
            puVar11 = puVar1;
          }
          (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,puVar11,uVar24);
          (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
          FUN_005b7240(param_1,plVar5 + 4,param_4 & 1);
          (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,&DAT_001ea432,3);
          FUN_005b5ef0(param_1,plVar5 + 7,1,param_4 & 1,param_5,uVar24);
          (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,&DAT_001b39c0,2);
          if (plVar5 == (long *)0x0) {
                    /* try { // try from 005b6ef0 to 005b6f17 has its CatchHandler @ 005b7034 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
                       "__x != nullptr","node shouldn\'t be null");
          }
          plVar3 = (long *)plVar5[1];
          plVar25 = plVar5;
          if ((long *)plVar5[1] == (long *)0x0) {
            do {
              plVar5 = (long *)plVar25[2];
              bVar4 = (long *)*plVar5 != plVar25;
              plVar25 = plVar5;
            } while (bVar4);
          }
          else {
            do {
              plVar5 = plVar3;
              plVar3 = (long *)*plVar5;
            } while ((long *)*plVar5 != (long *)0x0);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(long *)(*(long *)(param_2 + 8) + 0x10) - 1U);
      }
      puVar11 = (undefined8 *)param_1[0x4c];
      if (-1 < *(char *)((long)param_1 + 0x277)) {
        puVar11 = puVar1;
      }
      (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,puVar11,uVar24);
      (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
      FUN_005b7240(param_1,plVar5 + 4,param_4 & 1);
      (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,&DAT_001ea432,3);
      FUN_005b5ef0(param_1,plVar5 + 7,1,param_4 & 1,param_5,uVar24);
      (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,10);
      plVar5 = (long *)*param_1;
      lVar19 = *plVar5;
      puVar11 = (undefined8 *)param_1[0x4c];
      if (-1 < *(char *)((long)param_1 + 0x277)) {
        puVar11 = puVar1;
      }
      goto LAB_005b6e1c;
    }
    (*(code *)*puVar11)(plVar5,0x7b);
    plVar5 = (long *)**(undefined8 **)(param_2 + 8);
    if ((*(undefined8 **)(param_2 + 8))[2] != 1) {
      uVar8 = 0;
      do {
        (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
        FUN_005b7240(param_1,plVar5 + 4,param_4 & 1);
        (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,&DAT_001c2302,2);
        FUN_005b5ef0(param_1,plVar5 + 7,0,param_4 & 1,param_5,uVar22);
        (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x2c);
        if (plVar5 == (long *)0x0) {
                    /* try { // try from 005b6f18 to 005b6f3f has its CatchHandler @ 005b7030 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
                     "__x != nullptr","node shouldn\'t be null");
        }
        plVar3 = (long *)plVar5[1];
        plVar25 = plVar5;
        if ((long *)plVar5[1] == (long *)0x0) {
          do {
            plVar5 = (long *)plVar25[2];
            bVar4 = (long *)*plVar5 != plVar25;
            plVar25 = plVar5;
          } while (bVar4);
        }
        else {
          do {
            plVar5 = plVar3;
            plVar3 = (long *)*plVar5;
          } while ((long *)*plVar5 != (long *)0x0);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(long *)(*(long *)(param_2 + 8) + 0x10) - 1U);
    }
    (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
    FUN_005b7240(param_1,plVar5 + 4,param_4 & 1);
    (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,&DAT_001c2302,2);
    FUN_005b5ef0(param_1,plVar5 + 7,0,param_4 & 1,param_5,uVar22);
    break;
  case 2:
    plVar5 = (long *)*param_1;
    puVar11 = (undefined8 *)*plVar5;
    if (**(long **)(param_2 + 8) != (*(long **)(param_2 + 8))[1]) {
      if ((param_3 & 1) == 0) {
        (*(code *)*puVar11)(plVar5,0x5b);
        lVar15 = **(long **)(param_2 + 8);
        lVar12 = (*(long **)(param_2 + 8))[1];
        lVar19 = lVar15;
        if (lVar15 != lVar12 + -0x10) {
          do {
            FUN_005b5ef0(param_1,lVar15,0,param_4 & 1,param_5,uVar22);
            (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x2c);
            lVar19 = lVar15 + 0x10;
            lVar12 = (*(long **)(param_2 + 8))[1];
            lVar15 = lVar19;
          } while (lVar19 != lVar12 + -0x10);
          lVar15 = **(long **)(param_2 + 8);
        }
        if (lVar15 == lVar12) {
                    /* try { // try from 005b6f94 to 005b6fbb has its CatchHandler @ 005b7028 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        FUN_005b5ef0(param_1,lVar19,0,param_4 & 1,param_5,uVar22);
      }
      else {
        (*(code *)puVar11[1])(plVar5,&DAT_001d07fc,2);
        uVar24 = (ulong)(uint)(iVar21 + param_5);
        puVar11 = param_1 + 0x4c;
        uVar8 = param_1[0x4d];
        if (-1 < (char)*(byte *)((long)param_1 + 0x277)) {
          uVar8 = (ulong)*(byte *)((long)param_1 + 0x277);
        }
        if (uVar8 < uVar24) {
          FUN_0054836c(puVar11,uVar8 << 1,0x20);
        }
        lVar19 = **(long **)(param_2 + 8);
        if (lVar19 != (*(long **)(param_2 + 8))[1] + -0x10) {
          do {
            puVar1 = (undefined8 *)param_1[0x4c];
            if (-1 < *(char *)((long)param_1 + 0x277)) {
              puVar1 = puVar11;
            }
            (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,puVar1,uVar24);
            FUN_005b5ef0(param_1,lVar19,1,param_4 & 1,param_5,uVar24);
            (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,&DAT_001b39c0,2);
            lVar19 = lVar19 + 0x10;
          } while (lVar19 != *(long *)(*(long *)(param_2 + 8) + 8) + -0x10);
        }
        puVar1 = (undefined8 *)param_1[0x4c];
        if (-1 < *(char *)((long)param_1 + 0x277)) {
          puVar1 = puVar11;
        }
        (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,puVar1,uVar24);
        lVar19 = (*(long **)(param_2 + 8))[1];
        if (**(long **)(param_2 + 8) == lVar19) {
                    /* try { // try from 005b6f6c to 005b6f93 has its CatchHandler @ 005b702c */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        FUN_005b5ef0(param_1,lVar19 + -0x10,1,param_4 & 1,param_5,uVar24);
        (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,10);
        puVar1 = (undefined8 *)param_1[0x4c];
        if (-1 < *(char *)((long)param_1 + 0x277)) {
          puVar1 = puVar11;
        }
        (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,puVar1,uVar22);
      }
      param_1 = (undefined8 *)*param_1;
      UNRECOVERED_JUMPTABLE_00 = *(code **)*param_1;
      uVar7 = 0x5d;
      goto LAB_005b6e38;
    }
    pcVar6 = "[]";
LAB_005b65b4:
    UNRECOVERED_JUMPTABLE_00 = (code *)puVar11[1];
    uVar22 = 2;
    goto LAB_005b6cb4;
  case 3:
    (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x22);
    FUN_005b7240(param_1,*(undefined8 *)(param_2 + 8),param_4 & 1);
    param_1 = (undefined8 *)*param_1;
    UNRECOVERED_JUMPTABLE_00 = *(code **)*param_1;
    uVar7 = 0x22;
    goto LAB_005b6e38;
  case 4:
    plVar5 = (long *)*param_1;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar5 + 8);
    if (param_2[8] == 0) {
      pcVar6 = "false";
LAB_005b6cb0:
      uVar22 = 5;
      goto LAB_005b6cb4;
    }
    pcVar6 = "true";
    goto LAB_005b6274;
  case 5:
    FUN_005b7f9c(param_1,*(undefined8 *)(param_2 + 8));
    return;
  case 6:
    uVar8 = *(ulong *)(param_2 + 8);
    if (uVar8 == 0) {
      param_1 = (undefined8 *)*param_1;
      UNRECOVERED_JUMPTABLE_00 = *(code **)*param_1;
      uVar7 = 0x30;
      goto LAB_005b6e38;
    }
    pcVar6 = (char *)(param_1 + 2);
    if (uVar8 < 10) {
      pcVar16 = (char *)((long)param_1 + 0x11);
      uVar22 = 1;
LAB_005b6a9c:
      pcVar16[-1] = (char)uVar8 + '0';
    }
    else {
      uVar22 = uVar8;
      uVar2 = 4;
      do {
        uVar10 = uVar2;
        if (uVar22 < 100) {
          uVar10 = uVar10 - 2;
          goto LAB_005b6a20;
        }
        if (uVar22 < 1000) {
          uVar10 = uVar10 - 1;
          goto LAB_005b6a20;
        }
        if (uVar22 >> 4 < 0x271) goto LAB_005b6a20;
        bVar4 = 99999 < uVar22;
        uVar22 = uVar22 / 10000;
        uVar2 = uVar10 + 4;
      } while (bVar4);
      uVar10 = uVar10 + 1;
LAB_005b6a20:
      uVar22 = (ulong)uVar10;
      pcVar16 = pcVar6 + uVar22;
      if (99 < uVar8) {
        do {
          uVar18 = uVar8 >> 4;
          uVar24 = uVar8 / 100;
          pcVar16 = pcVar16 + -2;
          *(undefined2 *)pcVar16 = *(undefined2 *)(&DAT_001face8 + (uVar8 % 100) * 2);
          uVar8 = uVar24;
        } while (0x270 < uVar18);
      }
      if (uVar8 < 10) goto LAB_005b6a9c;
      *(undefined2 *)(pcVar16 + -2) = *(undefined2 *)(&DAT_001face8 + uVar8 * 2);
    }
    plVar5 = (long *)*param_1;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar5 + 8);
    goto LAB_005b6cb4;
  case 7:
    dVar26 = ABS(*(double *)(param_2 + 8));
    if ((dVar26 < INFINITY) || (dVar26 != INFINITY && dVar26 < INFINITY == NAN(dVar26))) {
      pcVar6 = (char *)(param_1 + 2);
      lVar19 = FUN_005b848c(pcVar6,param_1 + 10);
      plVar5 = (long *)*param_1;
      uVar22 = lVar19 - (long)pcVar6;
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar5 + 8);
      goto LAB_005b6cb4;
    }
  case 0:
    plVar5 = (long *)*param_1;
    pcVar6 = "null";
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar5 + 8);
LAB_005b6274:
    uVar22 = 4;
LAB_005b6cb4:
                    /* WARNING: Could not recover jumptable at 0x005b6cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar5,pcVar6,uVar22);
    return;
  case 8:
    plVar5 = (long *)*param_1;
    if ((param_3 & 1) == 0) {
      (**(code **)(*plVar5 + 8))(plVar5,"{\"bytes\":[",10);
      pbVar13 = (byte *)**(long **)(param_2 + 8);
      pbVar14 = (byte *)(*(long **)(param_2 + 8))[1];
      if (pbVar13 != pbVar14) {
        pbVar23 = pbVar13;
        if (pbVar13 != pbVar14 + -1) {
          do {
            bVar9 = *pbVar23;
            if ((ulong)bVar9 == 0) {
              (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x30);
            }
            else {
              if (bVar9 < 10) {
                uVar7 = 1;
LAB_005b6574:
                bVar9 = bVar9 | 0x30;
              }
              else {
                if (99 < bVar9) {
                  uVar10 = (uint)bVar9;
                  uVar7 = 3;
                  uVar2 = uVar10 * 0x29 >> 0xc;
                  bVar9 = (byte)uVar2;
                  *(undefined2 *)((long)param_1 + 0x11) =
                       *(undefined2 *)(&DAT_001fac20 + ((ulong)(uVar10 + uVar2 * -100) & 0xff) * 2);
                  goto LAB_005b6574;
                }
                lVar19 = (ulong)bVar9 * 2;
                uVar7 = 2;
                bVar9 = (&DAT_001fac20)[lVar19];
                *(undefined *)((long)param_1 + 0x11) = (&DAT_001fac21)[lVar19];
              }
              *(byte *)(param_1 + 2) = bVar9;
              (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,param_1 + 2,uVar7);
            }
            (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x2c);
            pbVar23 = pbVar23 + 1;
            pbVar14 = (byte *)(*(undefined8 **)(param_2 + 8))[1];
          } while (pbVar23 != pbVar14 + -1);
          pbVar13 = (byte *)**(undefined8 **)(param_2 + 8);
        }
        if (pbVar13 == pbVar14) {
                    /* try { // try from 005b6ff8 to 005b701f has its CatchHandler @ 005b7020 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        bVar9 = *pbVar23;
        if ((ulong)bVar9 == 0) {
          (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x30);
        }
        else {
          if (bVar9 < 10) {
            uVar7 = 1;
LAB_005b6c3c:
            bVar9 = bVar9 | 0x30;
          }
          else {
            if (99 < bVar9) {
              uVar7 = 3;
              uVar10 = (uint)bVar9;
              uVar2 = uVar10 * 0x29 >> 0xc;
              bVar9 = (byte)uVar2;
              *(undefined2 *)((long)param_1 + 0x11) =
                   *(undefined2 *)(&DAT_001fac20 + ((ulong)(uVar10 + uVar2 * -100) & 0xff) * 2);
              goto LAB_005b6c3c;
            }
            lVar19 = (ulong)bVar9 * 2;
            uVar7 = 2;
            bVar9 = (&DAT_001fac20)[lVar19];
            *(undefined *)((long)param_1 + 0x11) = (&DAT_001fac21)[lVar19];
          }
          *(byte *)(param_1 + 2) = bVar9;
          (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,param_1 + 2,uVar7);
        }
      }
      (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,"],\"subtype\":",0xc);
      if (*(char *)(*(long *)(param_2 + 8) + 0x20) == '\0') {
        plVar5 = (long *)*param_1;
        pcVar6 = "null}";
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar5 + 8);
        goto LAB_005b6cb0;
      }
      uVar8 = *(ulong *)(*(long *)(param_2 + 8) + 0x18);
      if (uVar8 == 0) {
        (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x30);
        break;
      }
      puVar11 = param_1 + 2;
      if (uVar8 < 10) {
        puVar17 = (undefined2 *)((long)param_1 + 0x11);
        uVar22 = 1;
LAB_005b6ed8:
        *(char *)((long)puVar17 + -1) = (char)uVar8 + '0';
      }
      else {
        uVar22 = uVar8;
        uVar2 = 4;
        do {
          uVar10 = uVar2;
          if (uVar22 < 100) {
            uVar10 = uVar10 - 2;
            goto LAB_005b6e5c;
          }
          if (uVar22 < 1000) {
            uVar10 = uVar10 - 1;
            goto LAB_005b6e5c;
          }
          if (uVar22 >> 4 < 0x271) goto LAB_005b6e5c;
          bVar4 = 99999 < uVar22;
          uVar22 = uVar22 / 10000;
          uVar2 = uVar10 + 4;
        } while (bVar4);
        uVar10 = uVar10 + 1;
LAB_005b6e5c:
        uVar22 = (ulong)uVar10;
        puVar17 = (undefined2 *)((long)puVar11 + uVar22);
        if (99 < uVar8) {
          do {
            uVar18 = uVar8 >> 4;
            uVar24 = uVar8 / 100;
            puVar17 = puVar17 + -1;
            *puVar17 = *(undefined2 *)(&DAT_001face8 + (uVar8 % 100) * 2);
            uVar8 = uVar24;
          } while (0x270 < uVar18);
        }
        if (uVar8 < 10) goto LAB_005b6ed8;
        puVar17[-1] = *(undefined2 *)(&DAT_001face8 + uVar8 * 2);
      }
      plVar5 = (long *)*param_1;
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar5 + 8);
    }
    else {
      (**(code **)(*plVar5 + 8))(plVar5,&DAT_001e79b7,2);
      bVar9 = *(byte *)((long)param_1 + 0x277);
      uVar24 = (ulong)(uint)(iVar21 + param_5);
      puVar1 = param_1 + 0x4c;
      uVar8 = param_1[0x4d];
      if (-1 < (char)bVar9) {
        uVar8 = (ulong)bVar9;
      }
      if (uVar8 < uVar24) {
        FUN_0054836c(puVar1,uVar8 << 1,0x20);
        bVar9 = *(byte *)((long)param_1 + 0x277);
      }
      puVar11 = (undefined8 *)param_1[0x4c];
      if (-1 < (char)bVar9) {
        puVar11 = puVar1;
      }
      (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,puVar11,uVar24);
      (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,"\"bytes\": [",10);
      pbVar13 = (byte *)**(long **)(param_2 + 8);
      pbVar14 = (byte *)(*(long **)(param_2 + 8))[1];
      if (pbVar13 != pbVar14) {
        pbVar23 = pbVar13;
        if (pbVar13 != pbVar14 + -1) {
          do {
            bVar9 = *pbVar23;
            if ((ulong)bVar9 == 0) {
              (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x30);
            }
            else {
              if (bVar9 < 10) {
                uVar7 = 1;
LAB_005b6448:
                bVar9 = bVar9 | 0x30;
              }
              else {
                if (99 < bVar9) {
                  uVar10 = (uint)bVar9;
                  uVar7 = 3;
                  uVar2 = uVar10 * 0x29 >> 0xc;
                  bVar9 = (byte)uVar2;
                  *(undefined2 *)((long)param_1 + 0x11) =
                       *(undefined2 *)(&DAT_001fac20 + ((ulong)(uVar10 + uVar2 * -100) & 0xff) * 2);
                  goto LAB_005b6448;
                }
                lVar19 = (ulong)bVar9 * 2;
                uVar7 = 2;
                bVar9 = (&DAT_001fac20)[lVar19];
                *(undefined *)((long)param_1 + 0x11) = (&DAT_001fac21)[lVar19];
              }
              *(byte *)(param_1 + 2) = bVar9;
              (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,param_1 + 2,uVar7);
            }
            (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,&DAT_001e1644,2);
            pbVar23 = pbVar23 + 1;
            pbVar14 = (byte *)(*(undefined8 **)(param_2 + 8))[1];
          } while (pbVar23 != pbVar14 + -1);
          pbVar13 = (byte *)**(undefined8 **)(param_2 + 8);
        }
        if (pbVar13 == pbVar14) {
                    /* try { // try from 005b6fd0 to 005b6ff7 has its CatchHandler @ 005b7024 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        bVar9 = *pbVar23;
        if ((ulong)bVar9 == 0) {
          (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x30);
        }
        else {
          if (bVar9 < 10) {
            uVar7 = 1;
LAB_005b6ae4:
            bVar9 = bVar9 | 0x30;
          }
          else {
            if (99 < bVar9) {
              uVar7 = 3;
              uVar10 = (uint)bVar9;
              uVar2 = uVar10 * 0x29 >> 0xc;
              bVar9 = (byte)uVar2;
              *(undefined2 *)((long)param_1 + 0x11) =
                   *(undefined2 *)(&DAT_001fac20 + ((ulong)(uVar10 + uVar2 * -100) & 0xff) * 2);
              goto LAB_005b6ae4;
            }
            lVar19 = (ulong)bVar9 * 2;
            uVar7 = 2;
            bVar9 = (&DAT_001fac20)[lVar19];
            *(undefined *)((long)param_1 + 0x11) = (&DAT_001fac21)[lVar19];
          }
          *(byte *)(param_1 + 2) = bVar9;
          (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,param_1 + 2,uVar7);
        }
      }
      (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,&DAT_001c81ab,3);
      puVar11 = (undefined8 *)param_1[0x4c];
      if (-1 < *(char *)((long)param_1 + 0x277)) {
        puVar11 = puVar1;
      }
      (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,puVar11,uVar24);
      (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,"\"subtype\": ",0xb);
      if (*(char *)(*(long *)(param_2 + 8) + 0x20) == '\0') {
        plVar5 = (long *)*param_1;
        puVar11 = (undefined8 *)&DAT_001b9a21;
        uVar8 = 4;
LAB_005b6de4:
        (**(code **)(*plVar5 + 8))(plVar5,puVar11,uVar8);
      }
      else {
        uVar24 = *(ulong *)(*(long *)(param_2 + 8) + 0x18);
        if (uVar24 != 0) {
          puVar11 = param_1 + 2;
          if (uVar24 < 10) {
            puVar17 = (undefined2 *)((long)param_1 + 0x11);
            uVar8 = 1;
LAB_005b6dd8:
            *(char *)((long)puVar17 + -1) = (char)uVar24 + '0';
          }
          else {
            uVar8 = uVar24;
            uVar2 = 4;
            do {
              uVar10 = uVar2;
              if (uVar8 < 100) {
                uVar10 = uVar10 - 2;
                goto LAB_005b6d5c;
              }
              if (uVar8 < 1000) {
                uVar10 = uVar10 - 1;
                goto LAB_005b6d5c;
              }
              if (uVar8 >> 4 < 0x271) goto LAB_005b6d5c;
              bVar4 = 99999 < uVar8;
              uVar8 = uVar8 / 10000;
              uVar2 = uVar10 + 4;
            } while (bVar4);
            uVar10 = uVar10 + 1;
LAB_005b6d5c:
            uVar8 = (ulong)uVar10;
            puVar17 = (undefined2 *)((long)puVar11 + uVar8);
            if (99 < uVar24) {
              do {
                uVar20 = uVar24 >> 4;
                uVar18 = uVar24 / 100;
                puVar17 = puVar17 + -1;
                *puVar17 = *(undefined2 *)(&DAT_001face8 + (uVar24 % 100) * 2);
                uVar24 = uVar18;
              } while (0x270 < uVar20);
            }
            if (uVar24 < 10) goto LAB_005b6dd8;
            puVar17[-1] = *(undefined2 *)(&DAT_001face8 + uVar24 * 2);
          }
          plVar5 = (long *)*param_1;
          goto LAB_005b6de4;
        }
        (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x30);
      }
      (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,10);
      plVar5 = (long *)*param_1;
      lVar19 = *plVar5;
      puVar11 = (undefined8 *)param_1[0x4c];
      if (-1 < *(char *)((long)param_1 + 0x277)) {
        puVar11 = puVar1;
      }
LAB_005b6e1c:
      UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar19 + 8);
    }
    (*UNRECOVERED_JUMPTABLE_00)(plVar5,puVar11,uVar22);
    break;
  case 9:
    plVar5 = (long *)*param_1;
    pcVar6 = "<discarded>";
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar5 + 8);
    uVar22 = 0xb;
    goto LAB_005b6cb4;
  }
  param_1 = (undefined8 *)*param_1;
  UNRECOVERED_JUMPTABLE_00 = *(code **)*param_1;
  uVar7 = 0x7d;
LAB_005b6e38:
                    /* WARNING: Could not recover jumptable at 0x005b6e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_1,uVar7);
  return;
}


// ===== 005b7038  FUN_005b7038 =====

void FUN_005b7038(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x277) < '\0') {
    operator_delete(*(void **)(param_1 + 0x260));
    plVar5 = *(long **)(param_1 + 8);
  }
  else {
    plVar5 = *(long **)(param_1 + 8);
  }
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


// ===== 005b70b0  FUN_005b70b0 =====

void FUN_005b70b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d258d8;
  FUN_005466c0();
  return;
}


// ===== 005b70c0  FUN_005b70c0 =====

void FUN_005b70c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d258d8;
  FUN_005466c0();
  operator_delete(param_1);
  return;
}


// ===== 005b70f0  FUN_005b70f0 =====

void FUN_005b70f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005b70f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}


// ===== 005b70fc  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 005b7100  FUN_005b7100 =====

void FUN_005b7100(long param_1,undefined1 param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  bVar1 = *(byte *)((long)puVar3 + 0x17);
  if ((char)bVar1 < '\0') {
    uVar2 = puVar3[1];
    uVar4 = (puVar3[2] & 0x7fffffffffffffff) - 1;
    if (uVar2 == uVar4) goto LAB_005b7148;
  }
  else {
    if (bVar1 != 0x16) {
      if (0x15 < bVar1) {
                    /* try { // try from 005b71ac to 005b71d3 has its CatchHandler @ 005b71d4 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                   "__s < __min_cap",
                   "__s should never be greater than or equal to the short string capacity");
      }
      uVar2 = (ulong)bVar1;
      *(byte *)((long)puVar3 + 0x17) = bVar1 + 1;
      goto LAB_005b7190;
    }
    uVar4 = 0x16;
LAB_005b7148:
    uVar2 = uVar4;
    FUN_0054774c(puVar3,uVar2,1,uVar2,uVar2,0,0);
  }
  puVar3[1] = uVar2 + 1;
  puVar3 = (undefined8 *)*puVar3;
LAB_005b7190:
  *(undefined1 *)((long)puVar3 + uVar2) = param_2;
  ((undefined1 *)((long)puVar3 + uVar2))[1] = 0;
  return;
}


// ===== 005b71d8  FUN_005b71d8 =====

void FUN_005b71d8(long param_1)

{
  FUN_00547cac(*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 005b71e0  FUN_005b71e0 =====

void FUN_005b71e0(void)

{
  return;
}


// ===== 005b71e4  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 005b71e8  FUN_005b71e8 =====

void FUN_005b71e8(long param_1)

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


// ===== 005b7240  FUN_005b7240 =====

undefined8 * FUN_005b7240(undefined8 *param_1,long *param_2,byte param_3)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  ulong uVar12;
  code *UNRECOVERED_JUMPTABLE;
  long lVar13;
  long lVar14;
  undefined1 uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar14 = tpidr_el0;
  local_68 = *(long *)(lVar14 + 0x28);
  bVar5 = (char)*(byte *)((long)param_2 + 0x17) < '\0';
  uVar18 = param_2[1];
  if (!bVar5) {
    uVar18 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  puVar7 = param_1;
  if (uVar18 != 0) {
    uVar20 = 0;
    uVar18 = 0;
    lVar13 = 0;
    uVar12 = 0;
    uVar16 = 0;
    uVar19 = 0;
    lVar1 = (long)param_1 + 0x5a;
LAB_005b72f0:
    plVar8 = (long *)*param_2;
    if (!bVar5) {
      plVar8 = param_2;
    }
    bVar3 = *(byte *)((long)plVar8 + uVar18);
    if ((int)uVar16 == 0) {
      uVar19 = 0xffU >> (ulong)((byte)(&DAT_001faa90)[bVar3] & 0x1f) & (uint)bVar3;
    }
    else {
      uVar19 = bVar3 & 0x3f | uVar19 << 6;
    }
    lVar17 = uVar16 * 0x10 + (ulong)(byte)(&DAT_001faa90)[bVar3];
    if (399 < lVar17 + 0x100U) {
      if (*(long *)(lVar14 + 0x28) == local_68) {
                    /* try { // try from 005b7680 to 005b76a7 has its CatchHandler @ 005b7f98 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/array",0xdf,
                   "__n < _Size","out-of-bounds access in std::array<T, N>");
      }
      goto LAB_005b7f30;
    }
    bVar4 = (&UNK_001fab90)[lVar17];
    uVar16 = (ulong)bVar4;
    if (bVar4 == 1) {
      iVar2 = *(int *)(param_1 + 0x4f);
      if (1 < iVar2 - 1U) {
        if (iVar2 != 0) {
          uVar16 = 1;
          goto LAB_005b72cc;
        }
        uVar9 = FUN_0054f64c(0x20);
                    /* try { // try from 005b7d68 to 005b7d73 has its CatchHandler @ 005b7f08 */
        FUN_00549320(auStack_98,uVar18);
                    /* try { // try from 005b7d74 to 005b7d7f has its CatchHandler @ 005b7ef0 */
        FUN_005b82a4(auStack_b0,(ulong)bVar3);
                    /* try { // try from 005b7d80 to 005b7d9f has its CatchHandler @ 005b7ec8 */
        FUN_005b8160(auStack_80,"invalid UTF-8 byte at index ",auStack_98,&DAT_001a616e,auStack_b0);
                    /* try { // try from 005b7da4 to 005b7de7 has its CatchHandler @ 005b7e88 */
        FUN_005b4b48(uVar9,0x13c,auStack_80,0);
        if (*(long *)(lVar14 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_0054f748(uVar9,&PTR_PTR_thunk_FUN_00552768_00d25820,FUN_005be5f0);
        }
        goto LAB_005b7f30;
      }
      uVar18 = uVar18 - (lVar13 != 0);
      if (iVar2 != 1) goto LAB_005b74b4;
      uVar20 = uVar12 + 1;
      if ((param_3 & 1) == 0) {
        if (0x1ff < uVar12) {
          if (*(long *)(lVar14 + 0x28) == local_68) {
                    /* try { // try from 005b7734 to 005b775b has its CatchHandler @ 005b7f8c */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/array",0xda,
                       "__n < _Size","out-of-bounds access in std::array<T, N>");
          }
          goto LAB_005b7f30;
        }
        *(undefined1 *)(lVar1 + uVar12) = 0xef;
        if (0x1ff < uVar20) {
          if (*(long *)(lVar14 + 0x28) == local_68) {
                    /* try { // try from 005b7770 to 005b7797 has its CatchHandler @ 005b7f88 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/array",0xda,
                       "__n < _Size","out-of-bounds access in std::array<T, N>");
          }
          goto LAB_005b7f30;
        }
        *(undefined1 *)(lVar1 + uVar20) = 0xbf;
        if (0x1fd < uVar12) {
          if (*(long *)(lVar14 + 0x28) == local_68) {
                    /* try { // try from 005b7824 to 005b784b has its CatchHandler @ 005b7f7c */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/array",0xda,
                       "__n < _Size","out-of-bounds access in std::array<T, N>");
          }
          goto LAB_005b7f30;
        }
        lVar13 = uVar12 + 2;
        uVar15 = 0xbd;
        lVar17 = 3;
      }
      else {
        if (0x1ff < uVar12) {
          if (*(long *)(lVar14 + 0x28) == local_68) {
                    /* try { // try from 005b76f8 to 005b771f has its CatchHandler @ 005b7f90 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/array",0xda,
                       "__n < _Size","out-of-bounds access in std::array<T, N>");
          }
          goto LAB_005b7f30;
        }
        *(undefined1 *)(lVar1 + uVar12) = 0x5c;
        if (0x1ff < uVar20) {
          if (*(long *)(lVar14 + 0x28) == local_68) {
                    /* try { // try from 005b77ac to 005b77d3 has its CatchHandler @ 005b7f84 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/array",0xda,
                       "__n < _Size","out-of-bounds access in std::array<T, N>");
          }
          goto LAB_005b7f30;
        }
        *(undefined1 *)(lVar1 + uVar20) = 0x75;
        if (0x1fd < uVar12) {
          if (*(long *)(lVar14 + 0x28) == local_68) {
                    /* try { // try from 005b77e8 to 005b780f has its CatchHandler @ 005b7f80 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/array",0xda,
                       "__n < _Size","out-of-bounds access in std::array<T, N>");
          }
          goto LAB_005b7f30;
        }
        *(undefined1 *)(lVar1 + uVar12 + 2) = 0x66;
        if (uVar12 == 0x1fd) {
          if (*(long *)(lVar14 + 0x28) == local_68) {
                    /* try { // try from 005b7860 to 005b7887 has its CatchHandler @ 005b7f78 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/array",0xda,
                       "__n < _Size","out-of-bounds access in std::array<T, N>");
          }
          goto LAB_005b7f30;
        }
        *(undefined1 *)(lVar1 + uVar12 + 3) = 0x66;
        if (0x1fb < uVar12) {
          if (*(long *)(lVar14 + 0x28) == local_68) {
                    /* try { // try from 005b789c to 005b78c3 has its CatchHandler @ 005b7f74 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/array",0xda,
                       "__n < _Size","out-of-bounds access in std::array<T, N>");
          }
          goto LAB_005b7f30;
        }
        *(undefined1 *)(lVar1 + uVar12 + 4) = 0x66;
        if (uVar12 == 0x1fb) {
          if (*(long *)(lVar14 + 0x28) == local_68) {
                    /* try { // try from 005b78d8 to 005b78ff has its CatchHandler @ 005b7f70 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/array",0xda,
                       "__n < _Size","out-of-bounds access in std::array<T, N>");
          }
          goto LAB_005b7f30;
        }
        lVar13 = uVar12 + 5;
        uVar15 = 100;
        lVar17 = 6;
      }
      uVar12 = uVar12 + lVar17;
      *(undefined1 *)(lVar1 + lVar13) = uVar15;
      goto joined_r0x005b74b0;
    }
    if (bVar4 != 0) {
      uVar21 = uVar20;
      if ((param_3 & 1) == 0) {
        if (0x1ff < uVar20) {
          if (*(long *)(lVar14 + 0x28) == local_68) {
                    /* try { // try from 005b76bc to 005b76e3 has its CatchHandler @ 005b7f94 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/array",0xda,
                       "__n < _Size","out-of-bounds access in std::array<T, N>");
          }
          goto LAB_005b7f30;
        }
        uVar21 = uVar20 + 1;
        *(byte *)(lVar1 + uVar20) = bVar3;
      }
      lVar13 = lVar13 + 1;
      uVar20 = uVar21;
      goto LAB_005b72cc;
    }
    switch(uVar19) {
    case 8:
      if (0x1ff < uVar20) {
        if (*(long *)(lVar14 + 0x28) == local_68) {
                    /* try { // try from 005b7a04 to 005b7a2b has its CatchHandler @ 005b7f5c */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/array",0xda,
                     "__n < _Size","out-of-bounds access in std::array<T, N>");
        }
        goto LAB_005b7f30;
      }
      *(undefined1 *)(lVar1 + uVar20) = 0x5c;
      if (0x1ff < uVar20 + 1) {
        if (*(long *)(lVar14 + 0x28) == local_68) {
                    /* try { // try from 005b7af4 to 005b7b1b has its CatchHandler @ 005b7f4c */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/array",0xda,
                     "__n < _Size","out-of-bounds access in std::array<T, N>");
        }
        goto LAB_005b7f30;
      }
      uVar15 = 0x62;
      break;
    case 9:
      if (0x1ff < uVar20) {
        if (*(long *)(lVar14 + 0x28) == local_68) {
                    /* try { // try from 005b798c to 005b79b3 has its CatchHandler @ 005b7f64 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/array",0xda,
                     "__n < _Size","out-of-bounds access in std::array<T, N>");
        }
        goto LAB_005b7f30;
      }
      *(undefined1 *)(lVar1 + uVar20) = 0x5c;
      if (0x1ff < uVar20 + 1) {
        if (*(long *)(lVar14 + 0x28) == local_68) {
                    /* try { // try from 005b7a7c to 005b7aa3 has its CatchHandler @ 005b7f54 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/array",0xda,
                     "__n < _Size","out-of-bounds access in std::array<T, N>");
        }
        goto LAB_005b7f30;
      }
      uVar15 = 0x74;
      break;
    case 10:
      if (0x1ff < uVar20) {
        if (*(long *)(lVar14 + 0x28) == local_68) {
                    /* try { // try from 005b7914 to 005b793b has its CatchHandler @ 005b7f6c */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/array",0xda,
                     "__n < _Size","out-of-bounds access in std::array<T, N>");
        }
        goto LAB_005b7f30;
      }
      *(undefined1 *)(lVar1 + uVar20) = 0x5c;
      if (0x1ff < uVar20 + 1) {
        if (*(long *)(lVar14 + 0x28) == local_68) {
                    /* try { // try from 005b7ab8 to 005b7adf has its CatchHandler @ 005b7f50 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/array",0xda,
                     "__n < _Size","out-of-bounds access in std::array<T, N>");
        }
        goto LAB_005b7f30;
      }
      uVar15 = 0x6e;
      break;
    case 0xb:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
      goto switchD_005b7364_caseD_b;
    case 0xc:
      if (0x1ff < uVar20) {
        if (*(long *)(lVar14 + 0x28) == local_68) {
                    /* try { // try from 005b79c8 to 005b79ef has its CatchHandler @ 005b7f60 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/array",0xda,
                     "__n < _Size","out-of-bounds access in std::array<T, N>");
        }
        goto LAB_005b7f30;
      }
      *(undefined1 *)(lVar1 + uVar20) = 0x5c;
      if (0x1ff < uVar20 + 1) {
        if (*(long *)(lVar14 + 0x28) == local_68) {
                    /* try { // try from 005b7b30 to 005b7b57 has its CatchHandler @ 005b7f48 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/array",0xda,
                     "__n < _Size","out-of-bounds access in std::array<T, N>");
        }
        goto LAB_005b7f30;
      }
      uVar15 = 0x66;
      break;
    case 0xd:
      if (0x1ff < uVar20) {
        if (*(long *)(lVar14 + 0x28) == local_68) {
                    /* try { // try from 005b7950 to 005b7977 has its CatchHandler @ 005b7f68 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/array",0xda,
                     "__n < _Size","out-of-bounds access in std::array<T, N>");
        }
        goto LAB_005b7f30;
      }
      *(undefined1 *)(lVar1 + uVar20) = 0x5c;
      if (0x1ff < uVar20 + 1) {
        if (*(long *)(lVar14 + 0x28) == local_68) {
                    /* try { // try from 005b7b6c to 005b7b93 has its CatchHandler @ 005b7f44 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/array",0xda,
                     "__n < _Size","out-of-bounds access in std::array<T, N>");
        }
        goto LAB_005b7f30;
      }
      uVar15 = 0x72;
      break;
    case 0x22:
      if (0x1ff < uVar20) {
        if (*(long *)(lVar14 + 0x28) == local_68) {
                    /* try { // try from 005b7a40 to 005b7a67 has its CatchHandler @ 005b7f58 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/array",0xda,
                     "__n < _Size","out-of-bounds access in std::array<T, N>");
        }
        goto LAB_005b7f30;
      }
      *(undefined1 *)(lVar1 + uVar20) = 0x5c;
      if (0x1ff < uVar20 + 1) {
        if (*(long *)(lVar14 + 0x28) == local_68) {
                    /* try { // try from 005b7ba8 to 005b7bcf has its CatchHandler @ 005b7f40 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/array",0xda,
                     "__n < _Size","out-of-bounds access in std::array<T, N>");
        }
        goto LAB_005b7f30;
      }
      uVar15 = 0x22;
      break;
    default:
      if (uVar19 == 0x5c) {
        if (uVar20 < 0x200) {
          *(undefined1 *)(lVar1 + uVar20) = 0x5c;
          if (uVar20 + 1 < 0x200) {
            uVar12 = uVar20 + 2;
            *(undefined1 *)(lVar1 + uVar20 + 1) = 0x5c;
            goto joined_r0x005b74b0;
          }
          if (*(long *)(lVar14 + 0x28) == local_68) {
                    /* try { // try from 005b7c20 to 005b7c47 has its CatchHandler @ 005b7f38 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/array",0xda,
                       "__n < _Size","out-of-bounds access in std::array<T, N>");
          }
        }
        else if (*(long *)(lVar14 + 0x28) == local_68) {
                    /* try { // try from 005b7be4 to 005b7c0b has its CatchHandler @ 005b7f3c */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/array",0xda,
                     "__n < _Size","out-of-bounds access in std::array<T, N>");
        }
        goto LAB_005b7f30;
      }
switchD_005b7364_caseD_b:
      if ((0x1f < uVar19) && ((0x7e < uVar19 & param_3) == 0)) {
        if (uVar20 < 0x200) {
          uVar12 = uVar20 + 1;
          *(byte *)(lVar1 + uVar20) = bVar3;
          goto joined_r0x005b74b0;
        }
        if (*(long *)(lVar14 + 0x28) == local_68) {
                    /* try { // try from 005b7ca8 to 005b7ccf has its CatchHandler @ 005b7f34 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/array",0xda,
                     "__n < _Size","out-of-bounds access in std::array<T, N>");
        }
        goto LAB_005b7f30;
      }
      if (uVar19 >> 0x10 == 0) {
        uVar6 = snprintf((char *)(lVar1 + uVar20),7,"\\u%04x",(ulong)uVar19);
        puVar7 = (undefined8 *)(ulong)uVar6;
        uVar12 = uVar20 + 6;
      }
      else {
        uVar6 = snprintf((char *)(lVar1 + uVar20),0xd,"\\u%04x\\u%04x",
                         (ulong)((uVar19 >> 10) + 0xd7c0 & 0xffff),(ulong)(uVar19 & 0x3ff | 0xdc00))
        ;
        puVar7 = (undefined8 *)(ulong)uVar6;
        uVar12 = uVar20 + 0xc;
      }
      goto joined_r0x005b74b0;
    }
    uVar12 = uVar20 + 2;
    *(undefined1 *)(lVar1 + uVar20 + 1) = uVar15;
joined_r0x005b74b0:
    if (uVar12 - 500 < 0xd) {
      puVar7 = (undefined8 *)(**(code **)(*(long *)*param_1 + 8))((long *)*param_1,lVar1);
      uVar16 = 0;
      uVar12 = 0;
      lVar13 = 0;
      uVar20 = 0;
    }
    else {
LAB_005b74b4:
      uVar16 = 0;
      lVar13 = 0;
      uVar20 = uVar12;
    }
LAB_005b72cc:
    uVar18 = uVar18 + 1;
    bVar5 = (char)*(byte *)((long)param_2 + 0x17) < '\0';
    uVar21 = param_2[1];
    if (!bVar5) {
      uVar21 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    if (uVar21 <= uVar18) goto LAB_005b761c;
    goto LAB_005b72f0;
  }
LAB_005b7c64:
  if (*(long *)(lVar14 + 0x28) == local_68) {
    return puVar7;
  }
LAB_005b7f30:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_005b761c:
  if ((int)uVar16 == 0) {
    if (uVar20 != 0) {
      plVar8 = (long *)*param_1;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar8 + 8);
      lVar14 = *(long *)(lVar14 + 0x28);
joined_r0x005b7ce8:
      puVar11 = (undefined *)((long)param_1 + 0x5a);
      if (lVar14 == local_68) {
LAB_005b764c:
                    /* WARNING: Could not recover jumptable at 0x005b7668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar7 = (undefined8 *)(*UNRECOVERED_JUMPTABLE)(plVar8,puVar11,uVar20);
        return puVar7;
      }
      goto LAB_005b7f30;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x4f);
    if (iVar2 == 1) {
      (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,(long)param_1 + 0x5a);
      plVar8 = (long *)*param_1;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar8 + 8);
      if ((param_3 & 1) == 0) {
        if (*(long *)(lVar14 + 0x28) != local_68) goto LAB_005b7f30;
        puVar11 = &UNK_001a04f0;
        uVar20 = 3;
        goto LAB_005b764c;
      }
      if (*(long *)(lVar14 + 0x28) == local_68) {
        puVar11 = &UNK_001cdce8;
        uVar20 = 6;
        goto LAB_005b764c;
      }
      goto LAB_005b7f30;
    }
    if (iVar2 == 2) {
      plVar8 = (long *)*param_1;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar8 + 8);
      lVar14 = *(long *)(lVar14 + 0x28);
      uVar20 = uVar12;
      goto joined_r0x005b7ce8;
    }
    if (iVar2 == 0) {
      uVar9 = FUN_0054f64c(0x20);
      puVar10 = (undefined1 *)FUN_005b8424(param_2);
                    /* try { // try from 005b7e04 to 005b7e0b has its CatchHandler @ 005b7e84 */
      FUN_005b82a4(auStack_98,*puVar10);
                    /* try { // try from 005b7e0c to 005b7e1f has its CatchHandler @ 005b7e80 */
      FUN_005b8358(auStack_80,"incomplete UTF-8 string; last byte: 0x",auStack_98);
                    /* try { // try from 005b7e24 to 005b7e67 has its CatchHandler @ 005b7e68 */
      FUN_005b4b48(uVar9,0x13c,auStack_80,0);
      if (*(long *)(lVar14 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_0054f748(uVar9,&PTR_PTR_thunk_FUN_00552768_00d25820,FUN_005be5f0);
      }
      goto LAB_005b7f30;
    }
  }
  goto LAB_005b7c64;
}


// ===== 005b7f9c  FUN_005b7f9c =====

void FUN_005b7f9c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  undefined2 *puVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x005b7fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x30);
    return;
  }
  puVar1 = param_1 + 2;
  if ((long)param_2 < 0) {
    param_2 = -param_2;
    *(undefined1 *)puVar1 = 0x2d;
    if (param_2 < 10) {
      iVar6 = 1;
    }
    else {
      uVar5 = param_2;
      iVar3 = 4;
      do {
        iVar6 = iVar3;
        if (uVar5 < 100) {
          iVar6 = iVar6 + -2;
          goto LAB_005b80c4;
        }
        if (uVar5 < 1000) {
          iVar6 = iVar6 + -1;
          goto LAB_005b80c4;
        }
        if (uVar5 >> 4 < 0x271) goto LAB_005b80c4;
        bVar4 = 99999 < uVar5;
        uVar5 = uVar5 / 10000;
        iVar3 = iVar6 + 4;
      } while (bVar4);
      iVar6 = iVar6 + 1;
    }
LAB_005b80c4:
    uVar7 = iVar6 + 1;
LAB_005b80c8:
    uVar5 = (ulong)uVar7;
    puVar8 = (undefined2 *)((long)puVar1 + uVar5);
    if (99 < param_2) {
      do {
        uVar10 = param_2 >> 4;
        uVar9 = param_2 / 100;
        puVar8 = puVar8 + -1;
        *puVar8 = *(undefined2 *)(&DAT_001fadb0 + (param_2 % 100) * 2);
        param_2 = uVar9;
      } while (0x270 < uVar10);
    }
    if (9 < param_2) {
      puVar8[-1] = *(undefined2 *)(&DAT_001fadb0 + param_2 * 2);
      goto LAB_005b8150;
    }
  }
  else {
    if (9 < param_2) {
      uVar5 = param_2;
      uVar2 = 4;
      do {
        uVar7 = uVar2;
        if (uVar5 < 100) {
          uVar7 = uVar7 - 2;
          goto LAB_005b80c8;
        }
        if (uVar5 < 1000) {
          uVar7 = uVar7 - 1;
          goto LAB_005b80c8;
        }
        if (uVar5 >> 4 < 0x271) goto LAB_005b80c8;
        bVar4 = 99999 < uVar5;
        uVar5 = uVar5 / 10000;
        uVar2 = uVar7 + 4;
      } while (bVar4);
      uVar7 = uVar7 + 1;
      goto LAB_005b80c8;
    }
    puVar8 = (undefined2 *)((long)param_1 + 0x11);
    uVar5 = 1;
  }
  *(char *)((long)puVar8 + -1) = (char)param_2 + '0';
LAB_005b8150:
                    /* WARNING: Could not recover jumptable at 0x005b815c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,puVar1,uVar5);
  return;
}


// ===== 005b8160  FUN_005b8160 =====

void FUN_005b8160(undefined8 *param_1,char *param_2,undefined8 *param_3,char *param_4,
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
                    /* try { // try from 005b81f0 to 005b8287 has its CatchHandler @ 005b8288 */
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


// ===== 005b82a4  FUN_005b82a4 =====

void FUN_005b82a4(long *param_1,uint param_2)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  
  FUN_004a3cf4(param_1,&DAT_001a04f4);
  plVar2 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar2 = param_1;
  }
  *(char *)plVar2 = "0123456789ABCDEF"[(ulong)(param_2 >> 4) & 0xf];
  bVar3 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
  }
  if (uVar1 != 0) {
    plVar2 = (long *)*param_1;
    if (-1 < (char)bVar3) {
      plVar2 = param_1;
    }
    *(char *)((long)plVar2 + 1) = "0123456789ABCDEF"[(ulong)(param_2 & 0xff) & 0xf];
    return;
  }
                    /* try { // try from 005b832c to 005b8353 has its CatchHandler @ 005b8354 */
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/string",0xd57,
             "__pos <= size()","string index out of bounds");
}


// ===== 005b8358  FUN_005b8358 =====

void FUN_005b8358(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  size_t sVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  sVar3 = strlen(param_2);
  uVar1 = param_3[1];
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  uVar1 = uVar1 + sVar3;
  if (0x7fffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_004e823c(param_1);
  }
  if (0x16 < uVar1) {
                    /* try { // try from 005b83b0 to 005b8407 has its CatchHandler @ 005b8408 */
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
  return;
}


// ===== 005b8424  FUN_005b8424 =====

long FUN_005b8424(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  
  bVar3 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
  }
  if (uVar1 != 0) {
    plVar2 = (long *)*param_1;
    if (-1 < (char)bVar3) {
      plVar2 = param_1;
    }
    return (long)plVar2 + (uVar1 - 1);
  }
                    /* try { // try from 005b8460 to 005b8487 has its CatchHandler @ 005b8488 */
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/string",0xd8f,"!empty()",
             "string::back(): string is empty");
}


// ===== 005b848c  FUN_005b848c =====

void FUN_005b848c(double param_1,undefined2 *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  undefined2 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 in_x7;
  ulong uVar9;
  char cVar10;
  long lVar11;
  byte bVar12;
  undefined1 uVar13;
  int iVar14;
  undefined2 *__src;
  size_t __n;
  int iVar15;
  int local_50;
  int local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((long)param_1 < 0) {
    param_1 = -param_1;
    __src = (undefined2 *)((long)param_2 + 1);
    *(undefined1 *)param_2 = 0x2d;
    if (param_1 != 0.0) goto LAB_005b84f0;
  }
  else {
    __src = param_2;
    if (param_1 != 0.0) {
LAB_005b84f0:
      local_4c = 0;
      local_50 = 0;
      uVar6 = (ulong)param_1 & 0xfffffffffffff;
      if ((ulong)param_1 >> 0x34 == 0) {
        uVar9 = uVar6 << 1 | 1;
        uVar8 = 0xfffffbce;
        iVar15 = -0x433;
        uVar7 = uVar6;
LAB_005b8568:
        lVar11 = uVar7 * 2 + -1;
        iVar14 = iVar15;
      }
      else {
        uVar7 = uVar6 | 0x10000000000000;
        uVar8 = ((ulong)param_1 >> 0x34) + 0xfffffbcd;
        iVar14 = (int)uVar8;
        iVar15 = iVar14 + -1;
        uVar8 = uVar8 & 0xffffffff;
        uVar9 = uVar7 << 1 | 1;
        if (((ulong)param_1 >> 0x35 == 0) || (uVar6 != 0)) goto LAB_005b8568;
        iVar14 = iVar14 + -2;
        lVar11 = 0x3fffffffffffff;
        uVar7 = 0x10000000000000;
      }
      do {
        iVar15 = iVar15 + -1;
        uVar9 = uVar9 << 1;
      } while (-1 < (long)uVar9);
      do {
        uVar7 = uVar7 << 1;
        uVar8 = (ulong)((int)uVar8 - 1);
      } while (-1 < (long)uVar7);
      FUN_005b8784(__src,&local_4c,&local_50,lVar11 << ((ulong)(uint)(iVar14 - iVar15) & 0x3f),
                   iVar15,uVar7,uVar8,in_x7,uVar9,iVar15);
      __n = (size_t)local_4c;
      uVar6 = (long)local_50 + __n;
      iVar15 = (int)uVar6;
      if ((-1 < local_50) && (iVar15 < 0x10)) {
        memset((undefined1 *)((long)__src + __n),0x30,uVar6 - __n);
        puVar5 = (undefined2 *)((long)__src + uVar6) + 1;
        *(undefined2 *)((long)__src + uVar6) = 0x302e;
        goto LAB_005b8758;
      }
      if (0xfffffff0 < iVar15 - 0x10U) {
        puVar1 = (undefined1 *)((long)__src + (uVar6 & 0xffffffff));
        memmove(puVar1 + 1,puVar1,__n - (uVar6 & 0xffffffff));
        puVar5 = (undefined2 *)((long)__src + __n + 1);
        *puVar1 = 0x2e;
        goto LAB_005b8758;
      }
      if (iVar15 + 3U < 4) {
        lVar11 = (ulong)(uint)-iVar15 + 2;
        memmove((undefined1 *)((long)__src + lVar11),__src,__n);
        *__src = 0x2e30;
        memset(__src + 1,0x30,(ulong)(uint)-iVar15);
        puVar5 = (undefined2 *)((long)__src + lVar11 + __n);
        goto LAB_005b8758;
      }
      if (local_4c == 1) {
        lVar11 = 1;
      }
      else {
        memmove(__src + 1,(undefined1 *)((long)__src + 1),__n - 1);
        lVar11 = __n + 1;
        *(undefined1 *)((long)__src + 1) = 0x2e;
      }
      puVar1 = (undefined1 *)((long)__src + lVar11);
      uVar13 = 0x2d;
      if (0 < iVar15) {
        uVar13 = 0x2b;
      }
      uVar2 = iVar15 - 1U;
      if ((int)(iVar15 - 1U) < 0) {
        uVar2 = 1 - iVar15;
      }
      puVar1[1] = uVar13;
      *puVar1 = 0x65;
      if (uVar2 < 10) {
        cVar10 = '0';
        bVar12 = (char)uVar2 + 0x30;
LAB_005b86f4:
        lVar11 = 1;
        puVar1[2] = cVar10;
        puVar1[3] = bVar12;
      }
      else {
        if (uVar2 < 100) {
          cVar4 = (char)((uVar2 & 0xff) / 10);
          cVar10 = cVar4 + '0';
          bVar12 = (char)uVar2 + cVar4 * -10 | 0x30;
          goto LAB_005b86f4;
        }
        puVar1[2] = (char)(uVar2 / 100) + '0';
        bVar12 = (byte)((uVar2 % 100) / 10);
        lVar11 = 2;
        puVar1[3] = bVar12 | 0x30;
        puVar1[4] = (char)(uVar2 % 100) + bVar12 * -10 | 0x30;
      }
      puVar5 = (undefined2 *)(puVar1 + lVar11 + 3);
      goto LAB_005b8758;
    }
  }
  puVar5 = (undefined2 *)((long)__src + 3);
  *__src = 0x2e30;
  *(undefined1 *)(__src + 1) = 0x30;
LAB_005b8758:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar5);
}


// ===== 005b8784  FUN_005b8784 =====

void FUN_005b8784(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int in_stack_00000008;
  
  iVar2 = (-0x3d - in_stack_00000008) * 0x13441;
  iVar1 = iVar2 + 0x3ffff;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar1 = iVar1 >> 0x12;
  if (0 < -0x3d - in_stack_00000008) {
    iVar1 = iVar1 + 1;
  }
  iVar1 = iVar1 + 0x133U + (iVar1 + 0x133U >> 0x1c & 7);
  if ((uint)(iVar1 * 0x10000 >> 0x13) < 0x4f) {
    *param_3 = -*(int *)(&DAT_001fae84 + (ulong)(ushort)((short)iVar1 >> 3) * 0x10);
    FUN_005b8900();
    return;
  }
                    /* try { // try from 005b88d4 to 005b88fb has its CatchHandler @ 005b88fc */
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/array",0xdf,"__n < _Size",
             "out-of-bounds access in std::array<T, N>");
}


// ===== 005b8900  FUN_005b8900 =====

void FUN_005b8900(long param_1,int *param_2,int *param_3,long param_4,undefined8 param_5,
                 long param_6,undefined8 param_7,undefined8 param_8,ulong param_9,int param_10)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  
  uVar7 = (ulong)(uint)-param_10;
  uVar8 = param_9 - param_4;
  uVar5 = param_9 - param_6;
  uVar4 = 1L << (uVar7 & 0x3f);
  uVar11 = param_9 >> (uVar7 & 0x3f);
  uVar10 = (uint)uVar11;
  uVar6 = uVar4 - 1 & param_9;
  if (uVar10 < 1000000000) {
    if (uVar10 < 100000000) {
      if (uVar10 < 10000000) {
        if (uVar10 < 1000000) {
          if (uVar10 >> 5 < 0xc35) {
            if (uVar10 >> 4 < 0x271) {
              if (uVar10 < 1000) {
                if (uVar10 < 100) {
                  uVar12 = 10;
                  if (uVar10 < 10) {
                    uVar12 = 1;
                  }
                  uVar13 = (ulong)uVar12;
                  iVar3 = 1;
                  if (9 < uVar10) {
                    iVar3 = 2;
                  }
                }
                else {
                  iVar3 = 3;
                  uVar13 = 100;
                }
              }
              else {
                iVar3 = 4;
                uVar13 = 1000;
              }
            }
            else {
              iVar3 = 5;
              uVar13 = 10000;
            }
          }
          else {
            uVar13 = 100000;
            iVar3 = 6;
          }
        }
        else {
          uVar13 = 1000000;
          iVar3 = 7;
        }
      }
      else {
        uVar13 = 10000000;
        iVar3 = 8;
      }
    }
    else {
      uVar13 = 100000000;
      iVar3 = 9;
    }
  }
  else {
    uVar13 = 1000000000;
    iVar3 = 10;
  }
  do {
    if (iVar3 < 1) {
      iVar3 = 0;
      do {
        uVar9 = uVar8;
        uVar11 = uVar5;
        iVar2 = *param_2;
        uVar13 = uVar6 * 10;
        iVar3 = iVar3 + -1;
        uVar6 = uVar13 & uVar4 - 1;
        uVar8 = uVar9 * 10;
        uVar5 = uVar11 * 10;
        *param_2 = iVar2 + 1;
        *(char *)(param_1 + iVar2) = (char)(uVar13 >> (uVar7 & 0x3f)) + '0';
      } while (uVar8 < uVar6);
      *param_3 = *param_3 + iVar3;
      if ((uVar6 < uVar5) && (uVar4 <= uVar8 - uVar6)) {
        iVar3 = *param_2;
        lVar15 = -uVar6;
        while ((uVar6 = uVar4 + uVar6, uVar6 < uVar5 ||
               (uVar11 * -10 + uVar6 < uVar11 * 10 + lVar15))) {
          *(char *)(param_1 + (long)iVar3 + -1) = *(char *)(param_1 + (long)iVar3 + -1) + -1;
          if (uVar5 <= uVar6) {
            return;
          }
          uVar8 = (uVar9 * 10 - uVar4) + lVar15;
          lVar15 = lVar15 - uVar4;
          if (uVar8 < uVar4) {
            return;
          }
        }
      }
      return;
    }
    uVar10 = 0;
    uVar12 = (uint)uVar13;
    if (uVar12 != 0) {
      uVar10 = (uint)uVar11 / uVar12;
    }
    iVar2 = *param_2;
    iVar3 = iVar3 + -1;
    *param_2 = iVar2 + 1;
    uVar11 = (ulong)((uint)uVar11 - uVar10 * uVar12);
    *(char *)(param_1 + iVar2) = (char)uVar10 + '0';
    lVar15 = uVar11 << (uVar7 & 0x3f);
    uVar9 = lVar15 + uVar6;
    if (uVar8 < uVar9) {
      uVar13 = uVar13 / 10;
    }
    else {
      uVar14 = uVar13 << (uVar7 & 0x3f);
      *param_3 = *param_3 + iVar3;
      if (uVar5 <= uVar9 || uVar8 - uVar9 < uVar14) {
        return;
      }
      iVar2 = *param_2;
      uVar16 = uVar6 + lVar15 + uVar14;
      lVar15 = -uVar16;
      uVar17 = param_9;
      do {
        if (((uVar5 <= uVar16) && ((-uVar9 - param_6) + uVar17 <= (param_6 - param_9) + uVar16)) ||
           (*(char *)(param_1 + (long)iVar2 + -1) = *(char *)(param_1 + (long)iVar2 + -1) + -1,
           uVar5 <= uVar16)) break;
        uVar1 = (lVar15 - param_4) + uVar17;
        uVar17 = uVar17 - uVar14;
        uVar16 = uVar16 + uVar14;
      } while (uVar14 <= uVar1);
    }
    if (uVar9 <= uVar8) {
      return;
    }
  } while( true );
}


// ===== 005b8be4  FUN_005b8be4 =====

void FUN_005b8be4(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004a3cf4();
                    /* try { // try from 005b8c00 to 005b8c07 has its CatchHandler @ 005b8c14 */
  FUN_004a3cf4(param_1 + 0x18,param_3);
  return;
}


// ===== 005b8c30  FUN_005b8c30 =====

void FUN_005b8c30(long param_1,long param_2,undefined8 param_3)

{
  FUN_004c55b4();
                    /* try { // try from 005b8c58 to 005b8c5b has its CatchHandler @ 005b8c70 */
  FUN_004c55b4(param_1 + 0x18,param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}


// ===== 005b8c8c  FUN_005b8c8c =====

void FUN_005b8c8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_004a3cf4();
                    /* try { // try from 005b8ca8 to 005b8caf has its CatchHandler @ 005b8cbc */
  FUN_004a3cf4(param_1 + 0x18,param_3);
  return;
}


// ===== 005b8cd8  FUN_005b8cd8 =====

void FUN_005b8cd8(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  
  param_1[2] = 0;
  puVar1 = param_1 + 1;
  *puVar1 = 0;
  *param_1 = puVar1;
  if (param_3 != 0) {
    param_3 = param_3 * 0x38;
    do {
                    /* try { // try from 005b8d0c to 005b8d1f has its CatchHandler @ 005b8d3c */
      FUN_005b8ec0(param_1,puVar1,param_2,param_2);
      param_2 = param_2 + 0x38;
      param_3 = param_3 + -0x38;
    } while (param_3 != 0);
  }
  return;
}


// ===== 005b8d54  FUN_005b8d54 =====

void FUN_005b8d54(undefined8 *param_1)

{
  char cVar1;
  
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
    cVar1 = *(char *)((long)param_1 + 0x17);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x17);
  }
  if (-1 < cVar1) {
    return;
  }
  operator_delete((void *)*param_1);
  return;
}


// ===== 005b8da0  FUN_005b8da0 =====

void FUN_005b8da0(undefined8 *param_1)

{
  char cVar1;
  
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
    cVar1 = *(char *)((long)param_1 + 0x17);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x17);
  }
  if (-1 < cVar1) {
    return;
  }
  operator_delete((void *)*param_1);
  return;
}


// ===== 005b8dec  FUN_005b8dec =====

void FUN_005b8dec(long param_1)

{
  FUN_005b9310(param_1,*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 005b8df4  FUN_005b8df4 =====

undefined8 FUN_005b8df4(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = *(long **)(param_1 + 8);
  if (plVar2 != (long *)0x0) {
    plVar4 = (long *)(param_1 + 8);
    do {
      while( true ) {
        plVar3 = plVar2;
        uVar1 = FUN_0041d7a0(param_2,plVar3 + 4);
        if ((uVar1 & 0xff) == 0) break;
        if ((uVar1 >> 7 & 1) == 0) goto LAB_005b8e60;
LAB_005b8e20:
        plVar2 = (long *)*plVar3;
        plVar4 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_005b8eb4;
      }
      uVar1 = FUN_0041d7a0(param_2 + 0x18,plVar3 + 7);
      if ((uVar1 >> 7 & 1) != 0) goto LAB_005b8e20;
LAB_005b8e60:
      uVar1 = FUN_0041d7a0(plVar3 + 4,param_2);
      if ((uVar1 & 0xff) == 0) {
        uVar1 = FUN_0041d7a0(plVar3 + 7,param_2 + 0x18);
      }
      if ((uVar1 >> 7 & 1) == 0) {
        if (*plVar4 != 0) {
          return *(undefined8 *)(*plVar4 + 0x50);
        }
        break;
      }
      plVar4 = plVar3 + 1;
      plVar2 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
LAB_005b8eb4:
                    /* WARNING: Subroutine does not return */
  FUN_0051ef20("map::at:  key not found");
}


// ===== 005b8ec0  FUN_005b8ec0 =====

undefined8 * FUN_005b8ec0(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  puVar2 = (undefined8 *)FUN_005b8fec(param_1,param_2,&local_50,auStack_58,param_3);
  puVar5 = (undefined8 *)*puVar2;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(0x58);
                    /* try { // try from 005b8f20 to 005b8f2b has its CatchHandler @ 005b8fc4 */
    FUN_004c55b4(puVar5 + 4,param_4);
                    /* try { // try from 005b8f34 to 005b8f37 has its CatchHandler @ 005b8fac */
    FUN_004c55b4(puVar5 + 7,param_4 + 0x18);
    uVar3 = *(undefined8 *)(param_4 + 0x30);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[10] = uVar3;
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


// ===== 005b8fec  FUN_005b8fec =====

long * FUN_005b8fec(long *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar8 = param_1 + 1;
  plVar7 = plVar8;
  if (plVar8 != param_2) {
    uVar2 = FUN_0041d7a0(param_5,param_2 + 4);
    if ((uVar2 & 0xff) == 0) {
      uVar2 = FUN_0041d7a0(param_5 + 0x18,param_2 + 7);
    }
    if ((uVar2 >> 7 & 1) == 0) {
      uVar2 = FUN_0041d7a0(param_2 + 4,param_5);
      if ((uVar2 & 0xff) == 0) {
        uVar2 = FUN_0041d7a0(param_2 + 7,param_5 + 0x18);
      }
      if ((uVar2 >> 7 & 1) == 0) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      if (param_2 == (long *)0x0) {
                    /* try { // try from 005b92e0 to 005b9307 has its CatchHandler @ 005b9308 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
                   "__x != nullptr","node shouldn\'t be null");
      }
      plVar5 = param_2 + 1;
      plVar3 = (long *)*plVar5;
      plVar6 = param_2;
      plVar4 = plVar3;
      if (plVar3 == (long *)0x0) {
        do {
          plVar7 = (long *)plVar6[2];
          bVar1 = (long *)*plVar7 != plVar6;
          plVar6 = plVar7;
        } while (bVar1);
      }
      else {
        do {
          plVar7 = plVar4;
          plVar4 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
      if (plVar7 != plVar8) {
        uVar2 = FUN_0041d7a0(param_5,plVar7 + 4);
        if ((uVar2 & 0xff) == 0) {
          uVar2 = FUN_0041d7a0(param_5 + 0x18,plVar7 + 7);
        }
        if ((uVar2 >> 7 & 1) == 0) {
          plVar7 = plVar8;
          if ((long *)*plVar8 != (long *)0x0) {
            plVar6 = (long *)*plVar8;
            do {
              while( true ) {
                plVar8 = plVar6;
                uVar2 = FUN_0041d7a0(param_5,plVar8 + 4);
                if ((uVar2 & 0xff) == 0) {
                  uVar2 = FUN_0041d7a0(param_5 + 0x18,plVar8 + 7);
                }
                if ((uVar2 >> 7 & 1) != 0) break;
                uVar2 = FUN_0041d7a0(plVar8 + 4,param_5);
                if ((uVar2 & 0xff) == 0) {
                  uVar2 = FUN_0041d7a0(plVar8 + 7,param_5 + 0x18);
                }
                if ((uVar2 >> 7 & 1) == 0) goto LAB_005b9280;
                plVar7 = plVar8 + 1;
                plVar6 = (long *)*plVar7;
                if ((long *)*plVar7 == (long *)0x0) goto LAB_005b9280;
              }
              plVar6 = (long *)*plVar8;
              plVar7 = plVar8;
            } while ((long *)*plVar8 != (long *)0x0);
          }
          goto LAB_005b9280;
        }
        plVar3 = (long *)*plVar5;
      }
      plVar8 = plVar7;
      if (plVar3 == (long *)0x0) {
        *param_3 = (long)param_2;
        return plVar5;
      }
      goto LAB_005b9280;
    }
  }
  plVar6 = param_2;
  if ((long *)*param_1 != param_2) {
    if (param_2 == (long *)0x0) {
                    /* try { // try from 005b92b8 to 005b92df has its CatchHandler @ 005b930c */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xd1,
                 "__x != nullptr","node shouldn\'t be null");
    }
    plVar4 = param_2;
    plVar3 = (long *)*param_2;
    if ((long *)*param_2 == (long *)0x0) {
      do {
        plVar6 = (long *)plVar4[2];
        bVar1 = (long *)*plVar6 == plVar4;
        plVar4 = plVar6;
      } while (bVar1);
    }
    else {
      do {
        plVar6 = plVar3;
        plVar3 = (long *)plVar6[1];
      } while ((long *)plVar6[1] != (long *)0x0);
    }
    uVar2 = FUN_0041d7a0(plVar6 + 4,param_5);
    if ((uVar2 & 0xff) == 0) {
      uVar2 = FUN_0041d7a0(plVar6 + 7,param_5 + 0x18);
    }
    if ((uVar2 >> 7 & 1) == 0) {
      if ((long *)*plVar8 != (long *)0x0) {
        plVar6 = (long *)*plVar8;
        do {
          while( true ) {
            plVar8 = plVar6;
            uVar2 = FUN_0041d7a0(param_5,plVar8 + 4);
            if ((uVar2 & 0xff) == 0) break;
            if ((uVar2 >> 7 & 1) == 0) goto LAB_005b9158;
LAB_005b9118:
            plVar6 = (long *)*plVar8;
            plVar7 = plVar8;
            if ((long *)*plVar8 == (long *)0x0) goto LAB_005b9280;
          }
          uVar2 = FUN_0041d7a0(param_5 + 0x18,plVar8 + 7);
          if ((uVar2 >> 7 & 1) != 0) goto LAB_005b9118;
LAB_005b9158:
          uVar2 = FUN_0041d7a0(plVar8 + 4,param_5);
          if ((uVar2 & 0xff) == 0) {
            uVar2 = FUN_0041d7a0(plVar8 + 7,param_5 + 0x18);
          }
          if ((uVar2 >> 7 & 1) == 0) break;
          plVar7 = plVar8 + 1;
          plVar6 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
      goto LAB_005b9280;
    }
  }
  if (*param_2 == 0) {
    *param_3 = (long)param_2;
    return param_2;
  }
  plVar7 = plVar6 + 1;
  plVar8 = plVar6;
LAB_005b9280:
  *param_3 = (long)plVar8;
  return plVar7;
}


// ===== 005b9310  FUN_005b9310 =====

void FUN_005b9310(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_005b9310(param_1,*param_2);
    FUN_005b9310(param_1,param_2[1]);
    if (*(char *)((long)param_2 + 0x4f) < '\0') {
      operator_delete((void *)param_2[7]);
      cVar1 = *(char *)((long)param_2 + 0x37);
    }
    else {
      cVar1 = *(char *)((long)param_2 + 0x37);
    }
    if (cVar1 < '\0') {
      operator_delete((void *)param_2[4]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}


// ===== 005b937c  FUN_005b937c =====

void FUN_005b937c(char *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*param_1 == '\x03') {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      FUN_00411268(param_2,*(undefined8 *)(param_1 + 8));
      return;
    }
  }
  else {
    uVar2 = FUN_0054f64c(0x20);
    local_58 = FUN_005b2870(param_1);
                    /* try { // try from 005b93f4 to 005b9407 has its CatchHandler @ 005b9470 */
    FUN_005b9498(auStack_50,"type must be string, but is ",&local_58);
                    /* try { // try from 005b940c to 005b944b has its CatchHandler @ 005b944c */
    FUN_005b3a24(uVar2,0x12e,auStack_50,param_1);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar2,&PTR_PTR_thunk_FUN_00552768_00d25820,FUN_005be5f0);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005b9498  FUN_005b9498 =====

void FUN_005b9498(undefined8 *param_1,char *param_2,undefined8 *param_3)

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
                    /* try { // try from 005b94e8 to 005b9567 has its CatchHandler @ 005b9568 */
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


// ===== 005b9584  FUN_005b9584 =====

void FUN_005b9584(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0040298c();
}


// ===== 005b9590  FUN_005b9590 =====

void FUN_005b9590(undefined8 *param_1,ulong param_2,char *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 local_1c8;
  undefined1 local_1c0;
  undefined8 local_1b8;
  char local_1b0;
  undefined8 local_1a8;
  void *local_1a0 [2];
  char local_189;
  void *local_188 [2];
  char local_171;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined **local_150;
  undefined4 local_148;
  undefined1 auStack_140 [16];
  undefined8 local_130;
  void *local_128 [2];
  char local_111;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 *local_f8;
  char *local_e8;
  void *local_e0;
  void *pvStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  char local_c0;
  char local_bf;
  undefined8 *local_b8;
  char local_90;
  char local_68;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar3 = (undefined8 *)param_1[3];
  if (*(char *)(puVar3 + 2) == '\0') {
    uStack_108 = param_1[1];
    local_110 = *param_1;
    local_100 = param_1[2];
    local_f8 = puVar3;
    if ((code *)*puVar3 != (code *)0x0) {
      local_110 = (*(code *)*puVar3)(*param_1);
    }
    puVar3 = param_1 + 5;
                    /* try { // try from 005b9728 to 005b973b has its CatchHandler @ 005b9b1c */
    FUN_005bcd70(&local_e8,param_3,&local_110,*(undefined1 *)(param_1 + 0x18),puVar3);
    if ((code *)local_f8[1] != (code *)0x0) {
                    /* try { // try from 005b974c to 005b974f has its CatchHandler @ 005b9b18 */
      (*(code *)local_f8[1])(local_110);
    }
                    /* try { // try from 005b9750 to 005b9767 has its CatchHandler @ 005b9b40 */
    FUN_005bceb8(param_1,&local_e8);
    if ((param_2 & 1) == 0) {
LAB_005b9814:
      if (local_90 != '\0') goto LAB_005b981c;
LAB_005b98ac:
      if (*param_3 == '\t') {
        local_1b8 = *(undefined8 *)(param_3 + 8);
        *param_3 = '\0';
        param_3[8] = '\0';
        param_3[9] = '\0';
        param_3[10] = '\0';
        param_3[0xb] = '\0';
        param_3[0xc] = '\0';
        param_3[0xd] = '\0';
        param_3[0xe] = '\0';
        param_3[0xf] = '\0';
        local_1c0 = 9;
                    /* try { // try from 005b98d8 to 005b98df has its CatchHandler @ 005b99e8 */
        FUN_005b2fc4(&local_1b8,9);
      }
    }
    else {
      iVar2 = FUN_005b9d30(puVar3);
      *(int *)(param_1 + 4) = iVar2;
      if (iVar2 == 0xf) goto LAB_005b9814;
                    /* try { // try from 005b9774 to 005b977f has its CatchHandler @ 005b9a74 */
      FUN_005bde8c(local_128,puVar3);
      uStack_168 = param_1[10];
      local_170 = param_1[9];
      local_160 = param_1[0xb];
                    /* try { // try from 005b9790 to 005b979f has its CatchHandler @ 005b9a5c */
      FUN_004a3cf4(local_1a0,"value");
                    /* try { // try from 005b97a0 to 005b97b3 has its CatchHandler @ 005b9a3c */
      FUN_005be2b8(local_188,param_1,0xf,local_1a0);
                    /* try { // try from 005b97b4 to 005b97cb has its CatchHandler @ 005b9a08 */
      FUN_005be048(&local_150,0x65,&local_170,local_188,0);
      local_90 = '\x01';
      if (local_68 != '\0') {
        puVar3 = (undefined8 *)FUN_0054f64c(0x28);
        *puVar3 = &PTR_FUN_00d25888;
        *(undefined4 *)(puVar3 + 1) = local_148;
        FUN_005472bc(puVar3 + 2,auStack_140);
        *puVar3 = &PTR_FUN_00d259d8;
        puVar3[4] = local_130;
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 005b99d0 to 005b99e7 has its CatchHandler @ 005b99ec */
                    /* WARNING: Subroutine does not return */
          FUN_0054f748(puVar3,&PTR_PTR_thunk_FUN_00552768_00d259b0,FUN_005be5f0);
        }
        goto LAB_005b9b7c;
      }
      local_150 = &PTR_FUN_00d25888;
      FUN_00552450(auStack_140);
      FUN_0055234c(&local_150);
      if (local_171 < '\0') {
        operator_delete(local_188[0]);
      }
      if (local_189 < '\0') {
        operator_delete(local_1a0[0]);
      }
      if (-1 < local_111) goto LAB_005b9814;
      operator_delete(local_128[0]);
      if (local_90 == '\0') goto LAB_005b98ac;
LAB_005b981c:
      local_1b0 = *param_3;
      local_1a8 = *(undefined8 *)(param_3 + 8);
      param_3[8] = '\0';
      param_3[9] = '\0';
      param_3[10] = '\0';
      param_3[0xb] = '\0';
      param_3[0xc] = '\0';
      param_3[0xd] = '\0';
      param_3[0xe] = '\0';
      param_3[0xf] = '\0';
      *param_3 = '\t';
                    /* try { // try from 005b9840 to 005b9843 has its CatchHandler @ 005b9b14 */
      FUN_005b2fc4(&local_1a8);
    }
    FUN_005be620(&local_e8);
  }
  else {
    local_bf = *(char *)(param_1 + 0x18);
    puVar3 = param_1 + 5;
    local_c0 = '\0';
    pvStack_d8 = (void *)0x0;
    local_e0 = (void *)0x0;
    uStack_c8 = 0;
    local_d0 = 0;
                    /* try { // try from 005b95f4 to 005b960b has its CatchHandler @ 005b9b50 */
    local_e8 = param_3;
    local_b8 = puVar3;
    FUN_005be694(param_1,&local_e8);
    if ((param_2 & 1) != 0) {
      iVar2 = FUN_005b9d30(puVar3);
      *(int *)(param_1 + 4) = iVar2;
      if (iVar2 != 0xf) {
                    /* try { // try from 005b9618 to 005b9623 has its CatchHandler @ 005b9b10 */
        FUN_005bde8c(local_128,puVar3);
        uStack_168 = param_1[10];
        local_170 = param_1[9];
        local_160 = param_1[0xb];
                    /* try { // try from 005b9634 to 005b9643 has its CatchHandler @ 005b9af0 */
        FUN_004a3cf4(local_1a0,"value");
                    /* try { // try from 005b9644 to 005b9657 has its CatchHandler @ 005b9ad0 */
        FUN_005be2b8(local_188,param_1,0xf,local_1a0);
                    /* try { // try from 005b9658 to 005b966f has its CatchHandler @ 005b9a94 */
        FUN_005be048(&local_150,0x65,&local_170,local_188,0);
        local_c0 = '\x01';
        if (local_bf != '\0') {
          puVar3 = (undefined8 *)FUN_0054f64c(0x28);
          *puVar3 = &PTR_FUN_00d25888;
          *(undefined4 *)(puVar3 + 1) = local_148;
          FUN_005472bc(puVar3 + 2,auStack_140);
          *puVar3 = &PTR_FUN_00d259d8;
          puVar3[4] = local_130;
          if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 005b9964 to 005b997b has its CatchHandler @ 005b9a78 */
                    /* WARNING: Subroutine does not return */
            FUN_0054f748(puVar3,&PTR_PTR_thunk_FUN_00552768_00d259b0,FUN_005be5f0);
          }
          goto LAB_005b9b7c;
        }
        local_150 = &PTR_FUN_00d25888;
        FUN_00552450(auStack_140);
        FUN_0055234c(&local_150);
        if (local_171 < '\0') {
          operator_delete(local_188[0]);
        }
        if (local_189 < '\0') {
          operator_delete(local_1a0[0]);
        }
        if (local_111 < '\0') {
          operator_delete(local_128[0]);
        }
      }
    }
    if (local_c0 != '\0') {
      local_1c8 = *(undefined8 *)(param_3 + 8);
      param_3[8] = '\0';
      param_3[9] = '\0';
      param_3[10] = '\0';
      param_3[0xb] = '\0';
      param_3[0xc] = '\0';
      param_3[0xd] = '\0';
      param_3[0xe] = '\0';
      param_3[0xf] = '\0';
      *param_3 = '\t';
                    /* try { // try from 005b96e4 to 005b96e7 has its CatchHandler @ 005b9b3c */
      FUN_005b2fc4(&local_1c8);
    }
    if (local_e0 != (void *)0x0) {
      pvStack_d8 = local_e0;
      operator_delete(local_e0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_005b9b7c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005b9b80  FUN_005b9b80 =====

void FUN_005b9b80(undefined8 *param_1)

{
  void *pvVar1;
  
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    operator_delete((void *)param_1[0xf]);
  }
  pvVar1 = (void *)param_1[0xc];
  if (pvVar1 != (void *)0x0) {
    param_1[0xd] = pvVar1;
    operator_delete(pvVar1);
  }
  if (*(code **)(param_1[3] + 8) != (code *)0x0) {
                    /* try { // try from 005b9bc0 to 005b9bc3 has its CatchHandler @ 005b9bd0 */
    (**(code **)(param_1[3] + 8))(*param_1);
  }
  return;
}


// ===== 005b9bd4  FUN_005b9bd4 =====

void FUN_005b9bd4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,byte param_4,
                 byte param_5)

{
  undefined4 uVar1;
  lconv *plVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar5;
  param_1[2] = param_3[2];
  lVar4 = *(long *)(param_3[3] + 8);
  param_1[3] = param_3[3];
  if (lVar4 != 0) {
    param_3[2] = FUN_005b9584;
    param_3[3] = &DAT_001f1910;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  uVar6 = param_2[1];
  uVar5 = *param_2;
  *(undefined1 *)(param_1 + 8) = 0;
  *(byte *)(param_1 + 7) = param_5 & 1;
  param_1[6] = uVar6;
  param_1[5] = uVar5;
  *(undefined4 *)((long)param_1 + 0x3c) = 0xffffffff;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = &DAT_001b3348;
  param_1[0x13] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
                    /* try { // try from 005b9c68 to 005b9c6b has its CatchHandler @ 005b9ce0 */
  plVar2 = localeconv();
  if ((byte *)plVar2->decimal_point == (byte *)0x0) {
    uVar3 = 0x2e;
  }
  else {
    uVar3 = (uint)(byte)*plVar2->decimal_point;
  }
  *(uint *)(param_1 + 0x16) = uVar3;
  *(byte *)(param_1 + 0x18) = param_4 & 1;
  param_1[0x17] = 0xffffffffffffffff;
                    /* try { // try from 005b9c98 to 005b9c9f has its CatchHandler @ 005b9cb4 */
  uVar1 = FUN_005b9d30(param_1 + 5);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}


// ===== 005b9ce4  FUN_005b9ce4 =====

void FUN_005b9ce4(long param_1)

{
  void *pvVar1;
  
  if (*(char *)(param_1 + 0x67) < '\0') {
    operator_delete(*(void **)(param_1 + 0x50));
    pvVar1 = *(void **)(param_1 + 0x38);
  }
  else {
    pvVar1 = *(void **)(param_1 + 0x38);
  }
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x40) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 005b9d30  FUN_005b9d30 =====

void FUN_005b9d30(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined4 local_30;
  undefined1 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(param_1 + 0x20) == 0) && (uVar2 = FUN_005b9ee4(param_1), (uVar2 & 1) == 0)) {
    pcVar4 = "invalid BOM; must be 0xEF 0xBB 0xBF if given";
LAB_005b9dec:
    uVar3 = 0xe;
    *(char **)(param_1 + 0x68) = pcVar4;
  }
  else {
    do {
      FUN_005ba180(param_1);
      if ((*(char *)(param_1 + 0x10) == '\0') || (*(int *)(param_1 + 0x14) != 0x2f)) {
        uVar3 = 8;
        switch(*(int *)(param_1 + 0x14)) {
        default:
          pcVar4 = "invalid literal";
          goto LAB_005b9dec;
        case 0x22:
          if (*(long *)(lVar1 + 0x28) == local_28) {
            FUN_005ba71c(param_1);
            return;
          }
          goto LAB_005b9ee0;
        case 0x2c:
          uVar3 = 0xd;
          goto switchD_005b9db8_caseD_5b;
        case 0x2d:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
          if (*(long *)(lVar1 + 0x28) == local_28) {
            FUN_005bb5a0(param_1);
            return;
          }
          goto LAB_005b9ee0;
        case 0x3a:
          uVar3 = 0xc;
        case 0x5b:
          goto switchD_005b9db8_caseD_5b;
        case 0x5d:
          uVar3 = 10;
          goto switchD_005b9db8_caseD_5b;
        case 0x66:
          local_2c = 0x65;
          local_30 = 0x736c6166;
          uVar3 = FUN_005ba5f4(param_1,&local_30,5,2);
          goto switchD_005b9db8_caseD_5b;
        case 0x6e:
          local_30 = 0x6c6c756e;
          uVar3 = 3;
          break;
        case 0x74:
          local_30 = 0x65757274;
          uVar3 = 1;
          break;
        case 0x7b:
          uVar3 = 9;
          goto switchD_005b9db8_caseD_5b;
        case 0x7d:
          uVar3 = 0xb;
          goto switchD_005b9db8_caseD_5b;
        case -1:
        case 0:
          uVar3 = 0xf;
          goto switchD_005b9db8_caseD_5b;
        }
        uVar3 = FUN_005ba5f4(param_1,&local_30,4,uVar3);
        goto switchD_005b9db8_caseD_5b;
      }
      uVar2 = FUN_005ba278(param_1);
    } while ((uVar2 & 1) != 0);
    uVar3 = 0xe;
  }
switchD_005b9db8_caseD_5b:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_005b9ee0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 005b9ee4  FUN_005b9ee4 =====

void FUN_005b9ee4(long *param_1)

{
  long *plVar1;
  byte *pbVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  undefined1 local_44 [4];
  byte local_40 [4];
  byte local_3c [4];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  plVar9 = param_1 + 5;
  lVar8 = param_1[4];
  lVar6 = *plVar9 + 1;
  param_1[4] = lVar8 + 1;
  param_1[5] = lVar6;
  plVar4 = param_1;
  if ((char)param_1[3] == '\0') {
    pbVar2 = (byte *)*param_1;
    if (pbVar2 == (byte *)param_1[1]) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = (uint)*pbVar2;
      *param_1 = (long)(pbVar2 + 1);
    }
    *(uint *)((long)param_1 + 0x14) = uVar7;
    if (uVar7 != 0xffffffff) goto LAB_005b9f5c;
LAB_005b9fe0:
    param_1[4] = lVar8;
    *(undefined1 *)(param_1 + 3) = 1;
    if (lVar6 == 0) {
      lVar6 = param_1[6];
joined_r0x005b9fd0:
      if (lVar6 != 0) {
        plVar9 = param_1 + 6;
        goto LAB_005b9ffc;
      }
    }
    else {
LAB_005b9ffc:
      *plVar9 = lVar6 + -1;
    }
    if (uVar7 == 0xffffffff) {
      plVar4 = (long *)0x1;
    }
    else {
      if (param_1[7] == param_1[8]) {
        if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x623,
                     "!empty()","vector::pop_back called on an empty vector");
        }
        goto LAB_005ba17c;
      }
      plVar4 = (long *)0x1;
      param_1[8] = param_1[8] + -1;
    }
  }
  else {
    uVar7 = *(uint *)((long)param_1 + 0x14);
    *(undefined1 *)(param_1 + 3) = 0;
    if (uVar7 == 0xffffffff) {
      uVar7 = 0xffffffff;
      goto LAB_005b9fe0;
    }
LAB_005b9f5c:
    plVar1 = param_1 + 7;
    local_44[0] = (undefined1)uVar7;
    plVar4 = (long *)FUN_005bc738(plVar1,local_44);
    uVar7 = *(uint *)((long)param_1 + 0x14);
    if (uVar7 == 10) {
      lVar6 = param_1[6] + 1;
      *(undefined1 *)(param_1 + 3) = 1;
      uVar7 = 10;
      param_1[5] = 0;
      param_1[6] = lVar6;
      param_1[4] = param_1[4] + -1;
      goto joined_r0x005b9fd0;
    }
    if (uVar7 != 0xef) {
      lVar6 = param_1[5];
      lVar8 = param_1[4] + -1;
      goto LAB_005b9fe0;
    }
    param_1[5] = param_1[5] + 1;
    param_1[4] = param_1[4] + 1;
    if ((char)param_1[3] == '\0') {
      pbVar2 = (byte *)*param_1;
      if (pbVar2 != (byte *)param_1[1]) {
        local_40[0] = *pbVar2;
        *param_1 = (long)(pbVar2 + 1);
        *(uint *)((long)param_1 + 0x14) = (uint)local_40[0];
        goto LAB_005ba060;
      }
      plVar4 = (long *)0x0;
      *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
    }
    else {
      local_40[0] = 0xef;
      *(undefined1 *)(param_1 + 3) = 0;
LAB_005ba060:
      FUN_005bc738(plVar1,local_40);
      if (*(int *)((long)param_1 + 0x14) == 0xbb) {
        param_1[5] = param_1[5] + 1;
        param_1[4] = param_1[4] + 1;
        if ((char)param_1[3] == '\0') {
          pbVar2 = (byte *)*param_1;
          if (pbVar2 != (byte *)param_1[1]) {
            local_3c[0] = *pbVar2;
            *param_1 = (long)(pbVar2 + 1);
            *(uint *)((long)param_1 + 0x14) = (uint)local_3c[0];
            goto LAB_005ba0e0;
          }
          iVar5 = -1;
          *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
        }
        else {
          local_3c[0] = 0xbb;
          *(undefined1 *)(param_1 + 3) = 0;
LAB_005ba0e0:
          FUN_005bc738(plVar1,local_3c);
          iVar5 = *(int *)((long)param_1 + 0x14);
          if (iVar5 == 10) {
            iVar5 = 10;
            param_1[5] = 0;
            param_1[6] = param_1[6] + 1;
          }
        }
        plVar4 = (long *)(ulong)(iVar5 == 0xbf);
      }
      else if (*(int *)((long)param_1 + 0x14) == 10) {
        plVar4 = (long *)0x0;
        param_1[5] = 0;
        param_1[6] = param_1[6] + 1;
      }
      else {
        plVar4 = (long *)0x0;
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
LAB_005ba17c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar4);
}


// ===== 005ba180  FUN_005ba180 =====

void FUN_005ba180(long *param_1)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  undefined1 local_3c [4];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  do {
    param_1[5] = param_1[5] + 1;
    param_1[4] = param_1[4] + 1;
    if ((char)param_1[3] == '\0') {
      pbVar1 = (byte *)*param_1;
      if (pbVar1 == (byte *)param_1[1]) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = (uint)*pbVar1;
        *param_1 = (long)(pbVar1 + 1);
      }
      *(uint *)((long)param_1 + 0x14) = uVar3;
    }
    else {
      uVar3 = *(uint *)((long)param_1 + 0x14);
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (uVar3 == 0xffffffff) goto switchD_005ba244_caseD_b;
    local_3c[0] = (undefined1)uVar3;
    FUN_005bc738(param_1 + 7,local_3c);
    switch(*(undefined4 *)((long)param_1 + 0x14)) {
    case 9:
    case 0xd:
    case 0x20:
      break;
    case 10:
      param_1[5] = 0;
      param_1[6] = param_1[6] + 1;
      break;
    default:
switchD_005ba244_caseD_b:
      if (*(long *)(lVar2 + 0x28) == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


// ===== 005ba278  FUN_005ba278 =====

void FUN_005ba278(long *param_1)

{
  long *plVar1;
  long *plVar2;
  byte *pbVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined1 local_58 [4];
  byte local_54 [4];
  undefined1 local_50 [4];
  byte local_4c [4];
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  param_1[5] = param_1[5] + 1;
  param_1[4] = param_1[4] + 1;
  if ((char)param_1[3] == '\0') {
    pbVar3 = (byte *)*param_1;
    if (pbVar3 == (byte *)param_1[1]) {
      uVar9 = 0xffffffff;
    }
    else {
      uVar9 = (uint)*pbVar3;
      *param_1 = (long)(pbVar3 + 1);
    }
    *(uint *)((long)param_1 + 0x14) = uVar9;
  }
  else {
    uVar9 = *(uint *)((long)param_1 + 0x14);
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (uVar9 != 0xffffffff) {
    plVar1 = param_1 + 7;
    local_58[0] = (undefined1)uVar9;
    FUN_005bc738(plVar1,local_58);
    iVar4 = *(int *)((long)param_1 + 0x14);
    if (iVar4 == 10) {
      param_1[5] = 0;
      param_1[6] = param_1[6] + 1;
    }
    else {
      if (iVar4 == 0x2f) {
        iVar4 = 0x2f;
        do {
          param_1[5] = param_1[5] + 1;
          param_1[4] = param_1[4] + 1;
          if ((char)param_1[3] == '\0') {
            pbVar3 = (byte *)*param_1;
            if (pbVar3 == (byte *)param_1[1]) {
              uVar6 = 1;
              *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
              goto LAB_005ba578;
            }
            local_54[0] = *pbVar3;
            *param_1 = (long)(pbVar3 + 1);
            *(uint *)((long)param_1 + 0x14) = (uint)local_54[0];
          }
          else {
            *(undefined1 *)(param_1 + 3) = 0;
            local_54[0] = (byte)iVar4;
          }
          FUN_005bc738(plVar1,local_54);
          iVar4 = *(int *)((long)param_1 + 0x14);
          if ((iVar4 + 1U < 2) || (iVar4 == 0xd)) goto LAB_005ba560;
        } while (iVar4 != 10);
        uVar6 = 1;
        param_1[5] = 0;
        param_1[6] = param_1[6] + 1;
        goto LAB_005ba578;
      }
      if (iVar4 == 0x2a) {
        plVar2 = param_1 + 6;
        uVar9 = 0x2a;
LAB_005ba34c:
        while( true ) {
          param_1[5] = param_1[5] + 1;
          param_1[4] = param_1[4] + 1;
          if ((char)param_1[3] == '\0') {
            pbVar3 = (byte *)*param_1;
            if (pbVar3 == (byte *)param_1[1]) {
              uVar9 = 0xffffffff;
            }
            else {
              uVar9 = (uint)*pbVar3;
              *param_1 = (long)(pbVar3 + 1);
            }
            *(uint *)((long)param_1 + 0x14) = uVar9;
          }
          else {
            *(undefined1 *)(param_1 + 3) = 0;
          }
          if (uVar9 == 0xffffffff) goto LAB_005ba568;
          local_50[0] = (undefined1)uVar9;
          uVar6 = FUN_005bc738(plVar1,local_50);
          uVar9 = *(uint *)((long)param_1 + 0x14);
          if (uVar9 != 10) break;
          param_1[5] = 0;
          *plVar2 = *plVar2 + 1;
        }
        if (uVar9 != 0x2a) {
          if (uVar9 + 1 < 2) goto LAB_005ba568;
          goto LAB_005ba34c;
        }
        lVar11 = param_1[4] + 1;
        lVar10 = param_1[5] + 1;
        param_1[4] = lVar11;
        param_1[5] = lVar10;
        if ((char)param_1[3] == '\0') {
          pbVar3 = (byte *)*param_1;
          if (pbVar3 != (byte *)param_1[1]) {
            local_4c[0] = *pbVar3;
            *param_1 = (long)(pbVar3 + 1);
            *(uint *)((long)param_1 + 0x14) = (uint)local_4c[0];
            goto LAB_005ba404;
          }
          uVar7 = 0xffffffff;
          *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
LAB_005ba42c:
          *(undefined1 *)(param_1 + 3) = 1;
          param_1[4] = lVar11 + -1;
          plVar12 = param_1 + 5;
          if (lVar10 == 0) {
            lVar10 = *plVar2;
            goto joined_r0x005ba4a4;
          }
LAB_005ba46c:
          *plVar12 = lVar10 + -1;
        }
        else {
          local_4c[0] = 0x2a;
          *(undefined1 *)(param_1 + 3) = 0;
LAB_005ba404:
          uVar6 = FUN_005bc738(plVar1,local_4c);
          uVar7 = *(uint *)((long)param_1 + 0x14);
          if (uVar7 != 10) {
            if (uVar7 != 0x2f) {
              lVar11 = param_1[4];
              lVar10 = param_1[5];
              goto LAB_005ba42c;
            }
LAB_005ba560:
            uVar6 = 1;
            goto LAB_005ba578;
          }
          *(undefined1 *)(param_1 + 3) = 1;
          lVar10 = param_1[6] + 1;
          uVar7 = 10;
          param_1[5] = 0;
          param_1[6] = lVar10;
          param_1[4] = param_1[4] + -1;
joined_r0x005ba4a4:
          plVar12 = plVar2;
          if (lVar10 != 0) goto LAB_005ba46c;
        }
        uVar9 = 0xffffffff;
        if (uVar7 != 0xffffffff) {
          if (param_1[7] == param_1[8]) {
            if (*(long *)(lVar5 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x623,
                         "!empty()","vector::pop_back called on an empty vector");
            }
            goto LAB_005ba5f0;
          }
          param_1[8] = param_1[8] + -1;
          uVar9 = uVar7;
        }
        goto LAB_005ba34c;
      }
    }
  }
  pcVar8 = "invalid comment; expecting \'/\' or \'*\' after \'/\'";
LAB_005ba570:
  uVar6 = 0;
  param_1[0xd] = (long)pcVar8;
LAB_005ba578:
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
LAB_005ba5f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
LAB_005ba568:
  pcVar8 = "invalid comment; missing closing \'*/\'";
  goto LAB_005ba570;
}


// ===== 005ba5f4  FUN_005ba5f4 =====

undefined4 FUN_005ba5f4(long *param_1,long param_2,ulong param_3,undefined4 param_4)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  byte *pbVar5;
  undefined1 local_4c [4];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (1 < param_3) {
    lVar4 = param_3 - 1;
    pbVar5 = (byte *)(param_2 + 1);
    do {
      param_1[5] = param_1[5] + 1;
      param_1[4] = param_1[4] + 1;
      if ((char)param_1[3] == '\0') {
        pbVar1 = (byte *)*param_1;
        if (pbVar1 == (byte *)param_1[1]) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (uint)*pbVar1;
          *param_1 = (long)(pbVar1 + 1);
        }
        *(uint *)((long)param_1 + 0x14) = uVar3;
        if (uVar3 != 0xffffffff) goto LAB_005ba68c;
      }
      else {
        uVar3 = *(uint *)((long)param_1 + 0x14);
        *(undefined1 *)(param_1 + 3) = 0;
        if (uVar3 == 0xffffffff) {
          uVar3 = 0xffffffff;
        }
        else {
LAB_005ba68c:
          local_4c[0] = (undefined1)uVar3;
          FUN_005bc738(param_1 + 7,local_4c);
          uVar3 = *(uint *)((long)param_1 + 0x14);
          if (uVar3 == 10) {
            uVar3 = 10;
            param_1[5] = 0;
            param_1[6] = param_1[6] + 1;
          }
        }
      }
      if ((uint)*pbVar5 != (uVar3 & 0xff)) {
        param_4 = 0xe;
        param_1[0xd] = (long)"invalid literal";
        break;
      }
      lVar4 = lVar4 + -1;
      pbVar5 = pbVar5 + 1;
    } while (lVar4 != 0);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_4;
}


// ===== 005ba71c  FUN_005ba71c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ba71c(long *param_1)

{
  byte *pbVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  byte bVar6;
  uint uVar7;
  char *pcVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pbVar14 = (byte *)((long)param_1 + 0x67);
  plVar10 = param_1 + 10;
  if ((char)*pbVar14 < '\0') {
    *(undefined1 *)param_1[10] = 0;
    param_1[0xb] = 0;
  }
  else {
    *(undefined1 *)plVar10 = 0;
    *pbVar14 = 0;
  }
  plVar11 = param_1 + 7;
  param_1[0x12] = -1;
  param_1[8] = *plVar11;
  local_80 = CONCAT71(local_80._1_7_,(char)*(undefined4 *)((long)param_1 + 0x14));
                    /* try { // try from 005ba790 to 005ba79b has its CatchHandler @ 005bb578 */
  FUN_005bc738(plVar11,&local_80);
LAB_005ba7dc:
  param_1[5] = param_1[5] + 1;
  param_1[4] = param_1[4] + 1;
  pcVar8 = "invalid string: missing closing quote";
  if ((char)param_1[3] == '\0') {
    pbVar1 = (byte *)*param_1;
    if (pbVar1 == (byte *)param_1[1]) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = (uint)*pbVar1;
      *param_1 = (long)(pbVar1 + 1);
    }
    *(uint *)((long)param_1 + 0x14) = uVar7;
    if (uVar7 != 0xffffffff) goto LAB_005ba828;
    goto switchD_005ba864_caseD_ffffffff;
  }
  uVar7 = *(uint *)((long)param_1 + 0x14);
  *(undefined1 *)(param_1 + 3) = 0;
  if (uVar7 == 0xffffffff) goto switchD_005ba864_caseD_ffffffff;
LAB_005ba828:
  local_80 = CONCAT71(local_80._1_7_,(char)uVar7);
  FUN_005bc738(plVar11,&local_80);
  iVar2 = *(int *)((long)param_1 + 0x14);
  if (iVar2 == 10) {
    param_1[5] = 0;
    param_1[6] = param_1[6] + 1;
    pcVar8 = "invalid string: control character U+000A (LF) must be escaped to \\u000A or \\n";
    goto switchD_005ba864_caseD_ffffffff;
  }
  uVar5 = 4;
  pcVar8 = "invalid string: missing closing quote";
  switch(iVar2) {
  case 0:
    pcVar8 = "invalid string: control character U+0000 (NUL) must be escaped to \\u0000";
    break;
  case 1:
    pcVar8 = "invalid string: control character U+0001 (SOH) must be escaped to \\u0001";
    break;
  case 2:
    pcVar8 = "invalid string: control character U+0002 (STX) must be escaped to \\u0002";
    break;
  case 3:
    pcVar8 = "invalid string: control character U+0003 (ETX) must be escaped to \\u0003";
    break;
  case 4:
    pcVar8 = "invalid string: control character U+0004 (EOT) must be escaped to \\u0004";
    break;
  case 5:
    pcVar8 = "invalid string: control character U+0005 (ENQ) must be escaped to \\u0005";
    break;
  case 6:
    pcVar8 = "invalid string: control character U+0006 (ACK) must be escaped to \\u0006";
    break;
  case 7:
    pcVar8 = "invalid string: control character U+0007 (BEL) must be escaped to \\u0007";
    break;
  case 8:
    pcVar8 = "invalid string: control character U+0008 (BS) must be escaped to \\u0008 or \\b";
    break;
  case 9:
    pcVar8 = "invalid string: control character U+0009 (HT) must be escaped to \\u0009 or \\t";
    break;
  default:
    pcVar8 = "invalid string: ill-formed UTF-8 byte";
    break;
  case 0xb:
    pcVar8 = "invalid string: control character U+000B (VT) must be escaped to \\u000B";
    break;
  case 0xc:
    pcVar8 = "invalid string: control character U+000C (FF) must be escaped to \\u000C or \\f";
    break;
  case 0xd:
    pcVar8 = "invalid string: control character U+000D (CR) must be escaped to \\u000D or \\r";
    break;
  case 0xe:
    pcVar8 = "invalid string: control character U+000E (SO) must be escaped to \\u000E";
    break;
  case 0xf:
    pcVar8 = "invalid string: control character U+000F (SI) must be escaped to \\u000F";
    break;
  case 0x10:
    pcVar8 = "invalid string: control character U+0010 (DLE) must be escaped to \\u0010";
    break;
  case 0x11:
    pcVar8 = "invalid string: control character U+0011 (DC1) must be escaped to \\u0011";
    break;
  case 0x12:
    pcVar8 = "invalid string: control character U+0012 (DC2) must be escaped to \\u0012";
    break;
  case 0x13:
    pcVar8 = "invalid string: control character U+0013 (DC3) must be escaped to \\u0013";
    break;
  case 0x14:
    pcVar8 = "invalid string: control character U+0014 (DC4) must be escaped to \\u0014";
    break;
  case 0x15:
    pcVar8 = "invalid string: control character U+0015 (NAK) must be escaped to \\u0015";
    break;
  case 0x16:
    pcVar8 = "invalid string: control character U+0016 (SYN) must be escaped to \\u0016";
    break;
  case 0x17:
    pcVar8 = "invalid string: control character U+0017 (ETB) must be escaped to \\u0017";
    break;
  case 0x18:
    pcVar8 = "invalid string: control character U+0018 (CAN) must be escaped to \\u0018";
    break;
  case 0x19:
    pcVar8 = "invalid string: control character U+0019 (EM) must be escaped to \\u0019";
    break;
  case 0x1a:
    pcVar8 = "invalid string: control character U+001A (SUB) must be escaped to \\u001A";
    break;
  case 0x1b:
    pcVar8 = "invalid string: control character U+001B (ESC) must be escaped to \\u001B";
    break;
  case 0x1c:
    pcVar8 = "invalid string: control character U+001C (FS) must be escaped to \\u001C";
    break;
  case 0x1d:
    pcVar8 = "invalid string: control character U+001D (GS) must be escaped to \\u001D";
    break;
  case 0x1e:
    pcVar8 = "invalid string: control character U+001E (RS) must be escaped to \\u001E";
    break;
  case 0x1f:
    pcVar8 = "invalid string: control character U+001F (US) must be escaped to \\u001F";
    break;
  case 0x20:
  case 0x21:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
    bVar6 = *pbVar14;
    if ((char)bVar6 < '\0') {
      uVar5 = param_1[0xb];
      uVar12 = (param_1[0xc] & 0x7fffffffffffffffU) - 1;
      if (uVar5 == uVar12) goto LAB_005ba898;
LAB_005ba8bc:
      param_1[0xb] = uVar5 + 1;
      plVar9 = (long *)param_1[10];
    }
    else {
      if (bVar6 == 0x16) {
        uVar12 = 0x16;
LAB_005ba898:
        uVar5 = uVar12;
        FUN_0054774c(plVar10,uVar5,1,uVar5,uVar5,0,0);
        goto LAB_005ba8bc;
      }
      if (0x15 < bVar6) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 005bb300 to 005bb327 has its CatchHandler @ 005bb59c */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                     "__s < __min_cap",
                     "__s should never be greater than or equal to the short string capacity");
        }
        goto LAB_005bb570;
      }
      uVar5 = (ulong)bVar6;
      *pbVar14 = bVar6 + 1;
      plVar9 = plVar10;
    }
    *(undefined1 *)((long)plVar9 + uVar5) = (char)iVar2;
    ((undefined1 *)((long)plVar9 + uVar5))[1] = 0;
    goto LAB_005ba7dc;
  case 0x22:
    goto switchD_005ba864_caseD_22;
  case 0x5c:
    param_1[5] = param_1[5] + 1;
    param_1[4] = param_1[4] + 1;
    if ((char)param_1[3] == '\0') {
      pbVar1 = (byte *)*param_1;
      if (pbVar1 != (byte *)param_1[1]) {
        bVar6 = *pbVar1;
        *param_1 = (long)(pbVar1 + 1);
        *(uint *)((long)param_1 + 0x14) = (uint)bVar6;
        goto LAB_005baa38;
      }
      *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
LAB_005bb33c:
      pcVar8 = "invalid string: forbidden character after backslash";
    }
    else {
      bVar6 = 0x5c;
      *(undefined1 *)(param_1 + 3) = 0;
LAB_005baa38:
      local_80 = CONCAT71(local_80._1_7_,bVar6);
      uVar5 = FUN_005bc738(plVar11,&local_80);
      pcVar8 = "invalid string: forbidden character after backslash";
      switch(*(int *)((long)param_1 + 0x14)) {
      case 0x22:
        bVar6 = *pbVar14;
        if ((char)bVar6 < '\0') {
          uVar5 = param_1[0xb];
          uVar12 = (param_1[0xc] & 0x7fffffffffffffffU) - 1;
          if (uVar5 == uVar12) goto LAB_005bac78;
LAB_005bac9c:
          param_1[0xb] = uVar5 + 1;
          plVar9 = (long *)param_1[10];
        }
        else {
          if (bVar6 == 0x16) {
            uVar12 = 0x16;
LAB_005bac78:
            uVar5 = uVar12;
            FUN_0054774c(plVar10,uVar5,1,uVar5,uVar5,0,0);
            goto LAB_005bac9c;
          }
          if (0x15 < bVar6) {
            if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 005bb504 to 005bb52b has its CatchHandler @ 005bb57c */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                         "__s < __min_cap",
                         "__s should never be greater than or equal to the short string capacity");
            }
            goto LAB_005bb570;
          }
          uVar5 = (ulong)bVar6;
          *pbVar14 = bVar6 + 1;
          plVar9 = plVar10;
        }
        *(undefined2 *)((long)plVar9 + uVar5) = 0x22;
        goto LAB_005ba7dc;
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x3f:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
      case 0x61:
      case 99:
      case 100:
      case 0x65:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6f:
      case 0x70:
      case 0x71:
      case 0x73:
        break;
      case 0x2f:
        bVar6 = *pbVar14;
        if ((char)bVar6 < '\0') {
          uVar5 = param_1[0xb];
          uVar12 = (param_1[0xc] & 0x7fffffffffffffffU) - 1;
          if (uVar5 == uVar12) goto LAB_005babe8;
LAB_005bac0c:
          param_1[0xb] = uVar5 + 1;
          plVar9 = (long *)param_1[10];
        }
        else {
          if (bVar6 == 0x16) {
            uVar12 = 0x16;
LAB_005babe8:
            uVar5 = uVar12;
            FUN_0054774c(plVar10,uVar5,1,uVar5,uVar5,0,0);
            goto LAB_005bac0c;
          }
          if (0x15 < bVar6) {
            if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 005bb4cc to 005bb4f3 has its CatchHandler @ 005bb580 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                         "__s < __min_cap",
                         "__s should never be greater than or equal to the short string capacity");
            }
            goto LAB_005bb570;
          }
          uVar5 = (ulong)bVar6;
          *pbVar14 = bVar6 + 1;
          plVar9 = plVar10;
        }
        *(undefined2 *)((long)plVar9 + uVar5) = 0x2f;
        goto LAB_005ba7dc;
      case 0x5c:
        bVar6 = *pbVar14;
        if ((char)bVar6 < '\0') {
          uVar5 = param_1[0xb];
          uVar12 = (param_1[0xc] & 0x7fffffffffffffffU) - 1;
          if (uVar5 == uVar12) goto LAB_005bacc0;
LAB_005bace4:
          param_1[0xb] = uVar5 + 1;
          plVar9 = (long *)param_1[10];
        }
        else {
          if (bVar6 == 0x16) {
            uVar12 = 0x16;
LAB_005bacc0:
            uVar5 = uVar12;
            FUN_0054774c(plVar10,uVar5,1,uVar5,uVar5,0,0);
            goto LAB_005bace4;
          }
          if (0x15 < bVar6) {
            if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 005bb494 to 005bb4bb has its CatchHandler @ 005bb584 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                         "__s < __min_cap",
                         "__s should never be greater than or equal to the short string capacity");
            }
            goto LAB_005bb570;
          }
          uVar5 = (ulong)bVar6;
          *pbVar14 = bVar6 + 1;
          plVar9 = plVar10;
        }
        *(undefined2 *)((long)plVar9 + uVar5) = 0x5c;
        goto LAB_005ba7dc;
      case 0x62:
        bVar6 = *pbVar14;
        if ((char)bVar6 < '\0') {
          uVar5 = param_1[0xb];
          uVar12 = (param_1[0xc] & 0x7fffffffffffffffU) - 1;
          if (uVar5 == uVar12) goto LAB_005bad50;
LAB_005bad74:
          param_1[0xb] = uVar5 + 1;
          plVar9 = (long *)param_1[10];
        }
        else {
          if (bVar6 == 0x16) {
            uVar12 = 0x16;
LAB_005bad50:
            uVar5 = uVar12;
            FUN_0054774c(plVar10,uVar5,1,uVar5,uVar5,0,0);
            goto LAB_005bad74;
          }
          if (0x15 < bVar6) {
            if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 005bb45c to 005bb483 has its CatchHandler @ 005bb588 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                         "__s < __min_cap",
                         "__s should never be greater than or equal to the short string capacity");
            }
            goto LAB_005bb570;
          }
          uVar5 = (ulong)bVar6;
          *pbVar14 = bVar6 + 1;
          plVar9 = plVar10;
        }
        *(undefined2 *)((long)plVar9 + uVar5) = 8;
        goto LAB_005ba7dc;
      case 0x66:
        bVar6 = *pbVar14;
        if ((char)bVar6 < '\0') {
          uVar5 = param_1[0xb];
          uVar12 = (param_1[0xc] & 0x7fffffffffffffffU) - 1;
          if (uVar5 == uVar12) goto LAB_005bad08;
LAB_005bad2c:
          param_1[0xb] = uVar5 + 1;
          plVar9 = (long *)param_1[10];
        }
        else {
          if (bVar6 == 0x16) {
            uVar12 = 0x16;
LAB_005bad08:
            uVar5 = uVar12;
            FUN_0054774c(plVar10,uVar5,1,uVar5,uVar5,0,0);
            goto LAB_005bad2c;
          }
          if (0x15 < bVar6) {
            if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 005bb424 to 005bb44b has its CatchHandler @ 005bb58c */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                         "__s < __min_cap",
                         "__s should never be greater than or equal to the short string capacity");
            }
            goto LAB_005bb570;
          }
          uVar5 = (ulong)bVar6;
          *pbVar14 = bVar6 + 1;
          plVar9 = plVar10;
        }
        *(undefined2 *)((long)plVar9 + uVar5) = 0xc;
        goto LAB_005ba7dc;
      case 0x6e:
        bVar6 = *pbVar14;
        if ((char)bVar6 < '\0') {
          uVar5 = param_1[0xb];
          uVar12 = (param_1[0xc] & 0x7fffffffffffffffU) - 1;
          if (uVar5 == uVar12) goto LAB_005bad98;
LAB_005badbc:
          param_1[0xb] = uVar5 + 1;
          plVar9 = (long *)param_1[10];
        }
        else {
          if (bVar6 == 0x16) {
            uVar12 = 0x16;
LAB_005bad98:
            uVar5 = uVar12;
            FUN_0054774c(plVar10,uVar5,1,uVar5,uVar5,0,0);
            goto LAB_005badbc;
          }
          if (0x15 < bVar6) {
            if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 005bb3ec to 005bb413 has its CatchHandler @ 005bb590 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                         "__s < __min_cap",
                         "__s should never be greater than or equal to the short string capacity");
            }
            goto LAB_005bb570;
          }
          uVar5 = (ulong)bVar6;
          *pbVar14 = bVar6 + 1;
          plVar9 = plVar10;
        }
        *(undefined2 *)((long)plVar9 + uVar5) = 10;
        goto LAB_005ba7dc;
      case 0x72:
        bVar6 = *pbVar14;
        if ((char)bVar6 < '\0') {
          uVar5 = param_1[0xb];
          uVar12 = (param_1[0xc] & 0x7fffffffffffffffU) - 1;
          if (uVar5 == uVar12) goto LAB_005bade0;
LAB_005bae04:
          param_1[0xb] = uVar5 + 1;
          plVar9 = (long *)param_1[10];
        }
        else {
          if (bVar6 == 0x16) {
            uVar12 = 0x16;
LAB_005bade0:
            uVar5 = uVar12;
            FUN_0054774c(plVar10,uVar5,1,uVar5,uVar5,0,0);
            goto LAB_005bae04;
          }
          if (0x15 < bVar6) {
            if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 005bb3b4 to 005bb3db has its CatchHandler @ 005bb594 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                         "__s < __min_cap",
                         "__s should never be greater than or equal to the short string capacity");
            }
            goto LAB_005bb570;
          }
          uVar5 = (ulong)bVar6;
          *pbVar14 = bVar6 + 1;
          plVar9 = plVar10;
        }
        *(undefined2 *)((long)plVar9 + uVar5) = 0xd;
        goto LAB_005ba7dc;
      case 0x74:
        bVar6 = *pbVar14;
        if ((char)bVar6 < '\0') {
          uVar5 = param_1[0xb];
          uVar12 = (param_1[0xc] & 0x7fffffffffffffffU) - 1;
          if (uVar5 == uVar12) goto LAB_005bac30;
LAB_005bac54:
          param_1[0xb] = uVar5 + 1;
          plVar9 = (long *)param_1[10];
        }
        else {
          if (bVar6 == 0x16) {
            uVar12 = 0x16;
LAB_005bac30:
            uVar5 = uVar12;
            FUN_0054774c(plVar10,uVar5,1,uVar5,uVar5,0,0);
            goto LAB_005bac54;
          }
          if (0x15 < bVar6) {
            if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 005bb37c to 005bb3a3 has its CatchHandler @ 005bb598 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                         "__s < __min_cap",
                         "__s should never be greater than or equal to the short string capacity");
            }
            goto LAB_005bb570;
          }
          uVar5 = (ulong)bVar6;
          *pbVar14 = bVar6 + 1;
          plVar9 = plVar10;
        }
        *(undefined2 *)((long)plVar9 + uVar5) = 9;
        goto LAB_005ba7dc;
      case 0x75:
        uVar5 = FUN_005bc950(param_1);
        uVar7 = (uint)uVar5;
        if (uVar7 == 0xffffffff) {
LAB_005bb354:
          pcVar8 = "invalid string: \'\\u\' must be followed by 4 hex digits";
        }
        else {
          uVar12 = uVar5 & 0xffffffff;
          if ((uVar7 & 0xfffffc00) != 0xd800) {
            if ((uVar7 & 0xfffffc00) == 0xdc00) {
              pcVar8 = "invalid string: surrogate U+DC00..U+DFFF must follow U+D800..U+DBFF";
              break;
            }
            if ((int)uVar7 < 0x80) {
              bVar6 = *pbVar14;
              if ((char)bVar6 < '\0') {
                uVar12 = param_1[0xb];
                uVar13 = (param_1[0xc] & 0x7fffffffffffffffU) - 1;
                if (uVar12 == uVar13) goto LAB_005bafec;
LAB_005bb010:
                param_1[0xb] = uVar12 + 1;
                plVar9 = (long *)param_1[10];
              }
              else {
                if (bVar6 == 0x16) {
                  uVar13 = 0x16;
LAB_005bafec:
                  uVar12 = uVar13;
                  FUN_0054774c(plVar10,uVar12,1,uVar12,uVar12,0,0);
                  goto LAB_005bb010;
                }
                if (0x15 < bVar6) {
                  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 005bb548 to 005bb56f has its CatchHandler @ 005bb574 */
                    /* WARNING: Subroutine does not return */
                    std::__Cr::__libcpp_verbose_abort
                              ("%s:%d: assertion %s failed: %s",
                               "../../discord_common/native/third_party/llvm/libcxx/include/string",
                               0x66c,"__s < __min_cap",
                               "__s should never be greater than or equal to the short string capacity"
                              );
                  }
                  goto LAB_005bb570;
                }
                uVar12 = (ulong)bVar6;
                *pbVar14 = bVar6 + 1;
                plVar9 = plVar10;
              }
              *(undefined1 *)((long)plVar9 + uVar12) = (char)uVar5;
              ((undefined1 *)((long)plVar9 + uVar12))[1] = 0;
            }
            else if (uVar7 < 0x800) {
              FUN_005bc87c(param_1,uVar7 >> 6 | 0xc0);
              FUN_005bc87c(param_1,uVar7 & 0x3f | 0x80);
            }
            else {
              if (uVar7 >> 0x10 == 0) {
                FUN_005bc87c(param_1,uVar7 >> 0xc | 0xe0);
              }
              else {
LAB_005bb088:
                FUN_005bc87c(param_1,(uint)(uVar12 >> 0x12) | 0xf0);
                uVar7 = (uint)uVar12;
                FUN_005bc87c(param_1,uVar7 >> 0xc & 0x3f | 0x80);
              }
              FUN_005bc87c(param_1,uVar7 >> 6 & 0x3f | 0x80);
              FUN_005bc87c(param_1,uVar7 & 0x3f | 0x80);
            }
            goto LAB_005ba7dc;
          }
          param_1[5] = param_1[5] + 1;
          param_1[4] = param_1[4] + 1;
          if ((char)param_1[3] == '\0') {
            pbVar1 = (byte *)*param_1;
            if (pbVar1 == (byte *)param_1[1]) {
              uVar4 = 0xffffffff;
            }
            else {
              uVar4 = (uint)*pbVar1;
              *param_1 = (long)(pbVar1 + 1);
            }
            *(uint *)((long)param_1 + 0x14) = uVar4;
          }
          else {
            uVar4 = *(uint *)((long)param_1 + 0x14);
            *(undefined1 *)(param_1 + 3) = 0;
          }
          if (uVar4 != 0xffffffff) {
            local_80 = CONCAT71(local_80._1_7_,(char)uVar4);
            FUN_005bc738(plVar11,&local_80);
            if (*(int *)((long)param_1 + 0x14) == 10) {
LAB_005bb150:
              param_1[5] = 0;
              param_1[6] = param_1[6] + 1;
            }
            else if (*(int *)((long)param_1 + 0x14) == 0x5c) {
              param_1[5] = param_1[5] + 1;
              param_1[4] = param_1[4] + 1;
              if ((char)param_1[3] == '\0') {
                pbVar1 = (byte *)*param_1;
                if (pbVar1 == (byte *)param_1[1]) {
                  *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
                  goto LAB_005bb15c;
                }
                bVar6 = *pbVar1;
                *param_1 = (long)(pbVar1 + 1);
                *(uint *)((long)param_1 + 0x14) = (uint)bVar6;
              }
              else {
                bVar6 = 0x5c;
                *(undefined1 *)(param_1 + 3) = 0;
              }
              local_80 = CONCAT71(local_80._1_7_,bVar6);
              FUN_005bc738(plVar11,&local_80);
              if (*(int *)((long)param_1 + 0x14) == 10) goto LAB_005bb150;
              if (*(int *)((long)param_1 + 0x14) == 0x75) {
                uVar4 = FUN_005bc950(param_1);
                if (uVar4 == 0xffffffff) goto LAB_005bb354;
                if (uVar4 >> 10 == 0x37) {
                  uVar12 = (ulong)(uVar4 + uVar7 * 0x400 + 0xfca02400);
                  goto LAB_005bb088;
                }
              }
            }
          }
LAB_005bb15c:
          pcVar8 = "invalid string: surrogate U+D800..U+DBFF must be followed by U+DC00..U+DFFF";
        }
        break;
      default:
        if (*(int *)((long)param_1 + 0x14) == 10) {
          param_1[5] = 0;
          param_1[6] = param_1[6] + 1;
          goto LAB_005bb33c;
        }
      }
    }
    break;
  case 0xc2:
  case 0xc3:
  case 0xc4:
  case 0xc5:
  case 0xc6:
  case 199:
  case 200:
  case 0xc9:
  case 0xca:
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xd7:
  case 0xd8:
  case 0xd9:
  case 0xda:
  case 0xdb:
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xdf:
    local_80 = DAT_001f50d8;
    uVar5 = FUN_005bcaac(param_1,&local_80,2);
    goto joined_r0x005ba9f4;
  case 0xe0:
    uStack_78 = _UNK_001f4608;
    local_80 = _DAT_001f4600;
    uVar5 = FUN_005bcaac(param_1,&local_80,4);
    goto joined_r0x005ba9f4;
  case 0xe1:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xec:
  case 0xee:
  case 0xef:
    uStack_78 = _UNK_001f3df8;
    local_80 = _DAT_001f3df0;
    uVar5 = FUN_005bcaac(param_1,&local_80,4);
    goto joined_r0x005ba9f4;
  case 0xed:
    uStack_78 = _UNK_001f1b28;
    local_80 = _DAT_001f1b20;
    uVar5 = FUN_005bcaac(param_1,&local_80,4);
    goto joined_r0x005ba9f4;
  case 0xf0:
    local_70 = 0xbf00000080;
    uStack_78 = _UNK_001fb378;
    local_80 = _DAT_001fb370;
    uVar5 = FUN_005bcaac(param_1,&local_80,6);
    goto joined_r0x005ba9f4;
  case 0xf1:
  case 0xf2:
  case 0xf3:
    local_70 = 0xbf00000080;
    uStack_78 = _UNK_001fb390;
    local_80 = _DAT_001fb388;
    uVar5 = FUN_005bcaac(param_1,&local_80,6);
    goto joined_r0x005ba9f4;
  case 0xf4:
    local_70 = 0xbf00000080;
    uStack_78 = _UNK_001fb3a8;
    local_80 = _DAT_001fb3a0;
    uVar5 = FUN_005bcaac(param_1,&local_80,6);
joined_r0x005ba9f4:
    if ((uVar5 & 1) == 0) {
      uVar5 = 0xe;
switchD_005ba864_caseD_22:
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return;
      }
LAB_005bb570:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar5);
    }
    goto LAB_005ba7dc;
  case -1:
    break;
  }
switchD_005ba864_caseD_ffffffff:
  uVar5 = 0xe;
  param_1[0xd] = (long)pcVar8;
  goto switchD_005ba864_caseD_22;
}


// ===== 005bb5a0  FUN_005bb5a0 =====

void FUN_005bb5a0(long *param_1)

{
  byte *pbVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  char *pcVar10;
  byte bVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  byte *pbVar16;
  char cVar17;
  int iVar18;
  int iVar19;
  double dVar20;
  char *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pbVar16 = (byte *)((long)param_1 + 0x67);
  plVar14 = param_1 + 10;
  if ((char)*pbVar16 < '\0') {
    *(undefined1 *)param_1[10] = 0;
    param_1[0xb] = 0;
  }
  else {
    *(char *)plVar14 = '\0';
    *pbVar16 = 0;
  }
  plVar9 = param_1 + 7;
  param_1[0x12] = -1;
  param_1[8] = *plVar9;
  local_60 = (char *)CONCAT71(local_60._1_7_,(char)*(undefined4 *)((long)param_1 + 0x14));
                    /* try { // try from 005bb610 to 005bb61b has its CatchHandler @ 005bc6f4 */
  uVar3 = FUN_005bc738(plVar9,&local_60);
  iVar18 = *(int *)((long)param_1 + 0x14);
  if (iVar18 - 0x31U < 9) {
    bVar11 = *pbVar16;
    if ((char)bVar11 < '\0') {
      uVar8 = param_1[0xb];
      uVar15 = (param_1[0xc] & 0x7fffffffffffffffU) - 1;
      if (uVar8 == uVar15) goto LAB_005bb65c;
LAB_005bb680:
      param_1[0xb] = uVar8 + 1;
      plVar12 = (long *)param_1[10];
    }
    else {
      if (bVar11 == 0x16) {
        uVar15 = 0x16;
LAB_005bb65c:
        uVar8 = uVar15;
        uVar3 = FUN_0054774c(plVar14,uVar8,1,uVar8,uVar8,0,0);
        goto LAB_005bb680;
      }
      if (0x15 < bVar11) {
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 005bc4e0 to 005bc507 has its CatchHandler @ 005bc728 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                     "__s < __min_cap",
                     "__s should never be greater than or equal to the short string capacity");
        }
        goto LAB_005bc6f0;
      }
      uVar8 = (ulong)bVar11;
      *pbVar16 = bVar11 + 1;
      plVar12 = plVar14;
    }
    pcVar10 = (char *)((long)plVar12 + uVar8);
    iVar19 = 5;
LAB_005bb6d8:
    *pcVar10 = (char)iVar18;
    do {
      pcVar10[1] = '\0';
      param_1[5] = param_1[5] + 1;
      param_1[4] = param_1[4] + 1;
      if ((char)param_1[3] == '\0') {
        pbVar1 = (byte *)*param_1;
        if (pbVar1 == (byte *)param_1[1]) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (uint)*pbVar1;
          *param_1 = (long)(pbVar1 + 1);
        }
        *(uint *)((long)param_1 + 0x14) = uVar7;
      }
      else {
        uVar7 = *(uint *)((long)param_1 + 0x14);
        *(undefined1 *)(param_1 + 3) = 0;
      }
      if (uVar7 == 0xffffffff) goto LAB_005bbcc4;
      local_60 = (char *)CONCAT71(local_60._1_7_,(char)uVar7);
      uVar3 = FUN_005bc738(plVar9,&local_60);
      iVar18 = *(int *)((long)param_1 + 0x14);
      if (9 < iVar18 - 0x30U) {
        if (iVar18 < 0x45) {
          if (iVar18 == 10) goto LAB_005bc278;
          if (iVar18 != 0x2e) goto LAB_005bc290;
          bVar11 = *(byte *)((long)param_1 + 0x67);
          cVar17 = (char)(int)param_1[0x11];
          if ((char)bVar11 < '\0') goto LAB_005bbb28;
          if (bVar11 == 0x16) goto LAB_005bb814;
          if (bVar11 < 0x16) goto LAB_005bb880;
          if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 005bc5a0 to 005bc5c7 has its CatchHandler @ 005bc71c */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
        }
        else {
          if ((iVar18 != 0x45) && (iVar18 != 0x65)) goto LAB_005bc290;
          bVar11 = *pbVar16;
          uVar8 = (ulong)(char)bVar11;
          if ((char)bVar11 < '\0') goto LAB_005bbea0;
          if (bVar11 == 0x16) goto LAB_005bb840;
          if (bVar11 < 0x16) goto LAB_005bb84c;
          if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 005bc520 to 005bc547 has its CatchHandler @ 005bc724 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
        }
        goto LAB_005bc6f0;
      }
      bVar11 = *pbVar16;
      if ((char)bVar11 < '\0') {
        uVar8 = param_1[0xb];
        uVar15 = (param_1[0xc] & 0x7fffffffffffffffU) - 1;
        if (uVar8 == uVar15) goto LAB_005bb6f0;
LAB_005bb714:
        plVar12 = (long *)param_1[10];
        param_1[0xb] = uVar8 + 1;
      }
      else {
        if (bVar11 == 0x16) {
          uVar15 = 0x16;
LAB_005bb6f0:
          uVar8 = uVar15;
          uVar3 = FUN_0054774c(plVar14,uVar8,1,uVar8,uVar8,0,0);
          goto LAB_005bb714;
        }
        if (0x15 < bVar11) goto LAB_005bc3e4;
        uVar8 = (ulong)bVar11;
        *pbVar16 = bVar11 + 1;
        plVar12 = plVar14;
      }
      pcVar10 = (char *)((long)plVar12 + uVar8);
      *pcVar10 = (char)iVar18;
    } while( true );
  }
  if (iVar18 == 0x30) {
    bVar11 = *pbVar16;
    if ((char)bVar11 < '\0') {
      uVar8 = param_1[0xb];
      uVar15 = (param_1[0xc] & 0x7fffffffffffffffU) - 1;
      if (uVar8 == uVar15) goto LAB_005bb8f0;
LAB_005bb914:
      param_1[0xb] = uVar8 + 1;
      plVar12 = (long *)param_1[10];
    }
    else {
      if (bVar11 == 0x16) {
        uVar15 = 0x16;
LAB_005bb8f0:
        uVar8 = uVar15;
        uVar3 = FUN_0054774c(plVar14,uVar8,1,uVar8,uVar8,0,0);
        goto LAB_005bb914;
      }
      if (0x15 < bVar11) {
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 005bc650 to 005bc677 has its CatchHandler @ 005bc710 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                     "__s < __min_cap",
                     "__s should never be greater than or equal to the short string capacity");
        }
        goto LAB_005bc6f0;
      }
      uVar8 = (ulong)bVar11;
      *pbVar16 = bVar11 + 1;
      plVar12 = plVar14;
    }
    iVar19 = 5;
    ((char *)((long)plVar12 + uVar8))[0] = '0';
    ((char *)((long)plVar12 + uVar8))[1] = '\0';
LAB_005bba7c:
    param_1[5] = param_1[5] + 1;
    param_1[4] = param_1[4] + 1;
    if ((char)param_1[3] == '\0') {
      pbVar1 = (byte *)*param_1;
      if (pbVar1 == (byte *)param_1[1]) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = (uint)*pbVar1;
        *param_1 = (long)(pbVar1 + 1);
      }
      *(uint *)((long)param_1 + 0x14) = uVar7;
    }
    else {
      uVar7 = *(uint *)((long)param_1 + 0x14);
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (uVar7 == 0xffffffff) {
LAB_005bbcc4:
      iVar18 = -1;
      goto LAB_005bc290;
    }
    local_60 = (char *)CONCAT71(local_60._1_7_,(char)uVar7);
    uVar3 = FUN_005bc738(plVar9,&local_60);
    iVar18 = *(int *)((long)param_1 + 0x14);
    if (iVar18 < 0x45) {
      if (iVar18 == 10) goto LAB_005bc278;
      if (iVar18 != 0x2e) goto LAB_005bc290;
      bVar11 = *(byte *)((long)param_1 + 0x67);
      cVar17 = (char)(int)param_1[0x11];
      if ((char)bVar11 < '\0') {
LAB_005bbb28:
        uVar8 = param_1[0xb];
        uVar15 = (param_1[0xc] & 0x7fffffffffffffffU) - 1;
        if (uVar8 == uVar15) goto LAB_005bbb3c;
LAB_005bbb60:
        param_1[0xb] = uVar8 + 1;
        plVar12 = (long *)param_1[10];
      }
      else {
        if (bVar11 == 0x16) {
LAB_005bb814:
          uVar15 = 0x16;
LAB_005bbb3c:
          uVar8 = uVar15;
          FUN_0054774c(plVar14,uVar8,1,uVar8,uVar8,0,0);
          goto LAB_005bbb60;
        }
        if (0x15 < bVar11) {
          if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 005bbb00 to 005bbb27 has its CatchHandler @ 005bc6fc */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_005bc6f0;
        }
LAB_005bb880:
        uVar8 = (ulong)bVar11;
        *pbVar16 = bVar11 + 1;
        plVar12 = plVar14;
      }
      *(char *)((long)plVar12 + uVar8) = cVar17;
      ((char *)((long)plVar12 + uVar8))[1] = '\0';
      uVar8 = param_1[0xb];
      if (-1 < (char)*(byte *)((long)param_1 + 0x67)) {
        uVar8 = (ulong)*(byte *)((long)param_1 + 0x67);
      }
      param_1[0x12] = uVar8 - 1;
      param_1[5] = param_1[5] + 1;
      param_1[4] = param_1[4] + 1;
      if ((char)param_1[3] == '\0') {
        pbVar1 = (byte *)*param_1;
        if (pbVar1 == (byte *)param_1[1]) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (uint)*pbVar1;
          *param_1 = (long)(pbVar1 + 1);
        }
        *(uint *)((long)param_1 + 0x14) = uVar7;
      }
      else {
        uVar7 = *(uint *)((long)param_1 + 0x14);
        *(undefined1 *)(param_1 + 3) = 0;
      }
      if (uVar7 != 0xffffffff) {
        local_60 = (char *)CONCAT71(local_60._1_7_,(char)uVar7);
        uVar3 = FUN_005bc738(plVar9,&local_60);
        iVar18 = *(int *)((long)param_1 + 0x14);
        if (iVar18 == 10) {
          param_1[5] = 0;
          param_1[6] = param_1[6] + 1;
        }
        else if (iVar18 - 0x30U < 10) {
          bVar11 = *pbVar16;
          if ((char)bVar11 < '\0') {
            uVar8 = param_1[0xb];
            uVar15 = (param_1[0xc] & 0x7fffffffffffffffU) - 1;
            if (uVar8 == uVar15) goto LAB_005bbce0;
          }
          else {
            if (bVar11 != 0x16) {
              if (0x15 < bVar11) {
                if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 005bc6c8 to 005bc6ef has its CatchHandler @ 005bc708 */
                    /* WARNING: Subroutine does not return */
                  std::__Cr::__libcpp_verbose_abort
                            ("%s:%d: assertion %s failed: %s",
                             "../../discord_common/native/third_party/llvm/libcxx/include/string",
                             0x66c,"__s < __min_cap",
                             "__s should never be greater than or equal to the short string capacity"
                            );
                }
                goto LAB_005bc6f0;
              }
              uVar8 = (ulong)bVar11;
              *pbVar16 = bVar11 + 1;
              plVar12 = plVar14;
              goto LAB_005bbd28;
            }
            uVar15 = 0x16;
LAB_005bbce0:
            uVar8 = uVar15;
            uVar3 = FUN_0054774c(plVar14,uVar8,1,uVar8,uVar8,0,0);
          }
          param_1[0xb] = uVar8 + 1;
          plVar12 = (long *)param_1[10];
LAB_005bbd28:
          pcVar10 = (char *)((long)plVar12 + uVar8);
          *pcVar10 = (char)iVar18;
          do {
            pcVar10[1] = '\0';
            param_1[5] = param_1[5] + 1;
            param_1[4] = param_1[4] + 1;
            if ((char)param_1[3] == '\0') {
              pbVar1 = (byte *)*param_1;
              if (pbVar1 == (byte *)param_1[1]) {
                uVar7 = 0xffffffff;
              }
              else {
                uVar7 = (uint)*pbVar1;
                *param_1 = (long)(pbVar1 + 1);
              }
              *(uint *)((long)param_1 + 0x14) = uVar7;
            }
            else {
              uVar7 = *(uint *)((long)param_1 + 0x14);
              *(undefined1 *)(param_1 + 3) = 0;
            }
            if (uVar7 == 0xffffffff) goto LAB_005bc41c;
            local_60 = (char *)CONCAT71(local_60._1_7_,(char)uVar7);
            uVar3 = FUN_005bc738(plVar9,&local_60);
            iVar18 = *(int *)((long)param_1 + 0x14);
            if (9 < iVar18 - 0x30U) {
              if (iVar18 == 10) goto LAB_005bc274;
              if ((iVar18 != 0x45) && (iVar18 != 0x65)) goto LAB_005bc28c;
              bVar11 = *pbVar16;
              uVar8 = (ulong)(char)bVar11;
              if ((char)bVar11 < '\0') goto LAB_005bbea0;
              if (bVar11 == 0x16) goto LAB_005bb840;
              if (bVar11 < 0x16) goto LAB_005bb84c;
              if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 005bbe78 to 005bbe9f has its CatchHandler @ 005bc700 */
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s:%d: assertion %s failed: %s",
                           "../../discord_common/native/third_party/llvm/libcxx/include/string",
                           0x66c,"__s < __min_cap",
                           "__s should never be greater than or equal to the short string capacity")
                ;
              }
              goto LAB_005bc6f0;
            }
            bVar11 = *pbVar16;
            if ((char)bVar11 < '\0') {
              uVar8 = param_1[0xb];
              uVar15 = (param_1[0xc] & 0x7fffffffffffffffU) - 1;
              if (uVar8 == uVar15) goto LAB_005bbd44;
LAB_005bbd68:
              plVar12 = (long *)param_1[10];
              param_1[0xb] = uVar8 + 1;
            }
            else {
              if (bVar11 == 0x16) {
                uVar15 = 0x16;
LAB_005bbd44:
                uVar8 = uVar15;
                uVar3 = FUN_0054774c(plVar14,uVar8,1,uVar8,uVar8,0,0);
                goto LAB_005bbd68;
              }
              if (0x15 < bVar11) goto LAB_005bc460;
              uVar8 = (ulong)bVar11;
              *pbVar16 = bVar11 + 1;
              plVar12 = plVar14;
            }
            pcVar10 = (char *)((long)plVar12 + uVar8);
            *pcVar10 = (char)iVar18;
          } while( true );
        }
      }
      pcVar10 = "invalid number; expected digit after \'.\'";
      goto LAB_005bc39c;
    }
    if ((iVar18 != 0x45) && (iVar18 != 0x65)) goto LAB_005bc290;
    bVar11 = *pbVar16;
    uVar8 = (ulong)(char)bVar11;
    if ((char)bVar11 < '\0') {
LAB_005bbea0:
      cVar17 = (char)iVar18;
      uVar8 = param_1[0xb];
      uVar15 = (param_1[0xc] & 0x7fffffffffffffffU) - 1;
      if (uVar8 == uVar15) goto LAB_005bbeb4;
LAB_005bbed8:
      plVar12 = (long *)param_1[10];
      param_1[0xb] = uVar8 + 1;
    }
    else {
      if (bVar11 == 0x16) {
LAB_005bb840:
        cVar17 = (char)iVar18;
        uVar15 = 0x16;
LAB_005bbeb4:
        uVar8 = uVar15;
        FUN_0054774c(plVar14,uVar8,1,uVar8,uVar8,0,0);
        goto LAB_005bbed8;
      }
      if (0x15 < bVar11) {
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 005bbc7c to 005bbca3 has its CatchHandler @ 005bc704 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                     "__s < __min_cap",
                     "__s should never be greater than or equal to the short string capacity");
        }
        goto LAB_005bc6f0;
      }
LAB_005bb84c:
      cVar17 = (char)iVar18;
      uVar8 = uVar8 & 0xff;
      *pbVar16 = bVar11 + 1;
      plVar12 = plVar14;
    }
    *(char *)((long)plVar12 + uVar8) = cVar17;
    ((char *)((long)plVar12 + uVar8))[1] = '\0';
    param_1[5] = param_1[5] + 1;
    param_1[4] = param_1[4] + 1;
    if ((char)param_1[3] == '\0') {
      pbVar1 = (byte *)*param_1;
      if (pbVar1 == (byte *)param_1[1]) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = (uint)*pbVar1;
        *param_1 = (long)(pbVar1 + 1);
      }
      *(uint *)((long)param_1 + 0x14) = uVar7;
    }
    else {
      uVar7 = *(uint *)((long)param_1 + 0x14);
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (uVar7 == 0xffffffff) {
LAB_005bbfa0:
      pcVar10 = "invalid number; expected \'+\', \'-\', or digit after exponent";
    }
    else {
      local_60 = (char *)CONCAT71(local_60._1_7_,(char)uVar7);
      uVar3 = FUN_005bc738(plVar9,&local_60);
      iVar18 = *(int *)((long)param_1 + 0x14);
      if (iVar18 - 0x30U < 10) {
        bVar11 = *pbVar16;
        if ((char)bVar11 < '\0') {
LAB_005bc118:
          cVar17 = (char)iVar18;
          uVar8 = param_1[0xb];
          uVar15 = (param_1[0xc] & 0x7fffffffffffffffU) - 1;
          if (uVar8 == uVar15) goto LAB_005bc12c;
        }
        else {
          if (bVar11 != 0x16) {
            if (0x15 < bVar11) {
              if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 005bc558 to 005bc57f has its CatchHandler @ 005bc720 */
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s:%d: assertion %s failed: %s",
                           "../../discord_common/native/third_party/llvm/libcxx/include/string",
                           0x66c,"__s < __min_cap",
                           "__s should never be greater than or equal to the short string capacity")
                ;
              }
              goto LAB_005bc6f0;
            }
LAB_005bbfb0:
            cVar17 = (char)iVar18;
            uVar8 = (ulong)bVar11;
            *pbVar16 = bVar11 + 1;
            plVar12 = plVar14;
            goto LAB_005bc15c;
          }
LAB_005bbf74:
          cVar17 = (char)iVar18;
          uVar15 = 0x16;
LAB_005bc12c:
          uVar8 = uVar15;
          uVar3 = FUN_0054774c(plVar14,uVar8,1,uVar8,uVar8,0,0);
        }
        param_1[0xb] = uVar8 + 1;
        plVar12 = (long *)param_1[10];
LAB_005bc15c:
        pcVar10 = (char *)((long)plVar12 + uVar8);
        *pcVar10 = cVar17;
        do {
          pcVar10[1] = '\0';
          param_1[5] = param_1[5] + 1;
          param_1[4] = param_1[4] + 1;
          if ((char)param_1[3] == '\0') {
            pbVar1 = (byte *)*param_1;
            if (pbVar1 == (byte *)param_1[1]) {
              uVar7 = 0xffffffff;
            }
            else {
              uVar7 = (uint)*pbVar1;
              *param_1 = (long)(pbVar1 + 1);
            }
            *(uint *)((long)param_1 + 0x14) = uVar7;
          }
          else {
            uVar7 = *(uint *)((long)param_1 + 0x14);
            *(undefined1 *)(param_1 + 3) = 0;
          }
          if (uVar7 == 0xffffffff) goto LAB_005bc41c;
          local_60 = (char *)CONCAT71(local_60._1_7_,(char)uVar7);
          uVar3 = FUN_005bc738(plVar9,&local_60);
          iVar18 = *(int *)((long)param_1 + 0x14);
          if (iVar18 == 10) goto LAB_005bc274;
          if (9 < iVar18 - 0x30U) goto LAB_005bc28c;
          bVar11 = *pbVar16;
          if ((char)bVar11 < '\0') {
            uVar8 = param_1[0xb];
            uVar15 = (param_1[0xc] & 0x7fffffffffffffffU) - 1;
            if (uVar8 == uVar15) goto LAB_005bc178;
LAB_005bc19c:
            plVar12 = (long *)param_1[10];
            param_1[0xb] = uVar8 + 1;
          }
          else {
            if (bVar11 == 0x16) {
              uVar15 = 0x16;
LAB_005bc178:
              uVar8 = uVar15;
              uVar3 = FUN_0054774c(plVar14,uVar8,1,uVar8,uVar8,0,0);
              goto LAB_005bc19c;
            }
            if (0x15 < bVar11) goto LAB_005bc428;
            uVar8 = (ulong)bVar11;
            *pbVar16 = bVar11 + 1;
            plVar12 = plVar14;
          }
          pcVar10 = (char *)((long)plVar12 + uVar8);
          *pcVar10 = (char)iVar18;
        } while( true );
      }
      if ((iVar18 != 0x2d) && (iVar18 != 0x2b)) {
        if (iVar18 == 10) {
          param_1[5] = 0;
          param_1[6] = param_1[6] + 1;
        }
        goto LAB_005bbfa0;
      }
      bVar11 = *pbVar16;
      if ((char)bVar11 < '\0') {
        uVar8 = param_1[0xb];
        uVar15 = (param_1[0xc] & 0x7fffffffffffffffU) - 1;
        if (uVar8 == uVar15) goto LAB_005bbff4;
LAB_005bc018:
        param_1[0xb] = uVar8 + 1;
        plVar12 = (long *)param_1[10];
      }
      else {
        if (bVar11 == 0x16) {
          uVar15 = 0x16;
LAB_005bbff4:
          uVar8 = uVar15;
          FUN_0054774c(plVar14,uVar8,1,uVar8,uVar8,0,0);
          goto LAB_005bc018;
        }
        if (0x15 < bVar11) {
          if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 005bc690 to 005bc6b7 has its CatchHandler @ 005bc70c */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_005bc6f0;
        }
        uVar8 = (ulong)bVar11;
        *pbVar16 = bVar11 + 1;
        plVar12 = plVar14;
      }
      *(char *)((long)plVar12 + uVar8) = (char)iVar18;
      ((char *)((long)plVar12 + uVar8))[1] = '\0';
      param_1[5] = param_1[5] + 1;
      param_1[4] = param_1[4] + 1;
      if ((char)param_1[3] == '\0') {
        pbVar1 = (byte *)*param_1;
        if (pbVar1 == (byte *)param_1[1]) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (uint)*pbVar1;
          *param_1 = (long)(pbVar1 + 1);
        }
        *(uint *)((long)param_1 + 0x14) = uVar7;
      }
      else {
        uVar7 = *(uint *)((long)param_1 + 0x14);
        *(undefined1 *)(param_1 + 3) = 0;
      }
      if (uVar7 != 0xffffffff) {
        local_60 = (char *)CONCAT71(local_60._1_7_,(char)uVar7);
        uVar3 = FUN_005bc738(plVar9,&local_60);
        iVar18 = *(int *)((long)param_1 + 0x14);
        if (iVar18 == 10) {
          param_1[5] = 0;
          param_1[6] = param_1[6] + 1;
        }
        else if (iVar18 - 0x30U < 10) {
          bVar11 = *pbVar16;
          if ((char)bVar11 < '\0') goto LAB_005bc118;
          if (bVar11 != 0x16) {
            if (0x15 < bVar11) {
              if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 005bc0f0 to 005bc117 has its CatchHandler @ 005bc6f8 */
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s:%d: assertion %s failed: %s",
                           "../../discord_common/native/third_party/llvm/libcxx/include/string",
                           0x66c,"__s < __min_cap",
                           "__s should never be greater than or equal to the short string capacity")
                ;
              }
              goto LAB_005bc6f0;
            }
            goto LAB_005bbfb0;
          }
          goto LAB_005bbf74;
        }
      }
      pcVar10 = "invalid number; expected digit after exponent sign";
    }
  }
  else {
    if (iVar18 == 0x2d) {
      bVar11 = *pbVar16;
      if ((char)bVar11 < '\0') {
        uVar8 = param_1[0xb];
        uVar15 = (param_1[0xc] & 0x7fffffffffffffffU) - 1;
        if (uVar8 == uVar15) goto LAB_005bb8a8;
LAB_005bb8cc:
        param_1[0xb] = uVar8 + 1;
        plVar12 = (long *)param_1[10];
      }
      else {
        if (bVar11 == 0x16) {
          uVar15 = 0x16;
LAB_005bb8a8:
          uVar8 = uVar15;
          FUN_0054774c(plVar14,uVar8,1,uVar8,uVar8,0,0);
          goto LAB_005bb8cc;
        }
        if (0x15 < bVar11) {
          if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 005bc618 to 005bc63f has its CatchHandler @ 005bc714 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_005bc6f0;
        }
        uVar8 = (ulong)bVar11;
        *pbVar16 = bVar11 + 1;
        plVar12 = plVar14;
      }
      ((char *)((long)plVar12 + uVar8))[0] = '-';
      ((char *)((long)plVar12 + uVar8))[1] = '\0';
    }
    param_1[5] = param_1[5] + 1;
    param_1[4] = param_1[4] + 1;
    if ((char)param_1[3] == '\0') {
      pbVar1 = (byte *)*param_1;
      if (pbVar1 == (byte *)param_1[1]) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = (uint)*pbVar1;
        *param_1 = (long)(pbVar1 + 1);
      }
      *(uint *)((long)param_1 + 0x14) = uVar7;
    }
    else {
      uVar7 = *(uint *)((long)param_1 + 0x14);
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (uVar7 != 0xffffffff) {
      local_60 = (char *)CONCAT71(local_60._1_7_,(char)uVar7);
      uVar3 = FUN_005bc738(plVar9,&local_60);
      iVar18 = *(int *)((long)param_1 + 0x14);
      if (iVar18 - 0x31U < 9) {
        bVar11 = *pbVar16;
        if ((char)bVar11 < '\0') {
          uVar8 = param_1[0xb];
          uVar15 = (param_1[0xc] & 0x7fffffffffffffffU) - 1;
          if (uVar8 == uVar15) goto LAB_005bb9e0;
LAB_005bba04:
          param_1[0xb] = uVar8 + 1;
          plVar12 = (long *)param_1[10];
        }
        else {
          if (bVar11 == 0x16) {
            uVar15 = 0x16;
LAB_005bb9e0:
            uVar8 = uVar15;
            uVar3 = FUN_0054774c(plVar14,uVar8,1,uVar8,uVar8,0,0);
            goto LAB_005bba04;
          }
          if (0x15 < bVar11) {
            if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 005bc5d8 to 005bc5ff has its CatchHandler @ 005bc718 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                         "__s < __min_cap",
                         "__s should never be greater than or equal to the short string capacity");
            }
            goto LAB_005bc6f0;
          }
          uVar8 = (ulong)bVar11;
          *pbVar16 = bVar11 + 1;
          plVar12 = plVar14;
        }
        pcVar10 = (char *)((long)plVar12 + uVar8);
        iVar19 = 6;
        goto LAB_005bb6d8;
      }
      if (iVar18 != 0x30) {
        if (iVar18 == 10) {
          param_1[5] = 0;
          param_1[6] = param_1[6] + 1;
        }
        goto LAB_005bba30;
      }
      uVar3 = FUN_005bc87c(param_1,0x30);
      iVar19 = 6;
      goto LAB_005bba7c;
    }
LAB_005bba30:
    pcVar10 = "invalid number; expected digit after \'-\'";
  }
LAB_005bc39c:
  uVar3 = 0xe;
  param_1[0xd] = (long)pcVar10;
  goto LAB_005bc3a4;
LAB_005bc3e4:
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 005bc3f4 to 005bc41b has its CatchHandler @ 005bc734 */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
               "__s < __min_cap",
               "__s should never be greater than or equal to the short string capacity");
  }
  goto LAB_005bc6f0;
LAB_005bc460:
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 005bc470 to 005bc497 has its CatchHandler @ 005bc72c */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
               "__s < __min_cap",
               "__s should never be greater than or equal to the short string capacity");
  }
  goto LAB_005bc6f0;
LAB_005bc41c:
  iVar19 = 7;
  iVar18 = -1;
  goto LAB_005bc290;
LAB_005bc274:
  iVar19 = 7;
LAB_005bc278:
  iVar18 = 10;
  param_1[5] = 0;
  param_1[6] = param_1[6] + 1;
  goto LAB_005bc290;
LAB_005bc428:
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 005bc438 to 005bc45f has its CatchHandler @ 005bc730 */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
               "__s < __min_cap",
               "__s should never be greater than or equal to the short string capacity");
  }
  goto LAB_005bc6f0;
LAB_005bc28c:
  iVar19 = 7;
LAB_005bc290:
  plVar9 = param_1 + 5;
  lVar13 = *plVar9;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = param_1[4] + -1;
  if (lVar13 == 0) {
    plVar9 = param_1 + 6;
    lVar13 = *plVar9;
    if (lVar13 != 0) goto LAB_005bc2bc;
  }
  else {
LAB_005bc2bc:
    *plVar9 = lVar13 + -1;
  }
  if (iVar18 != -1) {
    if (param_1[7] == param_1[8]) {
      if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x623,
                   "!empty()","vector::pop_back called on an empty vector");
      }
      goto LAB_005bc6f0;
    }
    param_1[8] = param_1[8] + -1;
  }
  local_60 = (char *)0x0;
  piVar4 = (int *)__errno();
  *piVar4 = 0;
  if (iVar19 == 6) {
    plVar9 = (long *)*plVar14;
    if (-1 < (char)*pbVar16) {
      plVar9 = plVar14;
    }
    lVar6 = strtoll((char *)plVar9,&local_60,10);
    if (*piVar4 == 0x22) goto LAB_005bc360;
    uVar3 = 6;
    param_1[0xe] = lVar6;
  }
  else {
    if (iVar19 == 5) {
      plVar9 = (long *)*plVar14;
      if (-1 < (char)*pbVar16) {
        plVar9 = plVar14;
      }
      uVar5 = strtoull((char *)plVar9,&local_60,10);
      if (*piVar4 != 0x22) {
        uVar3 = 5;
        param_1[0xf] = uVar5;
        goto LAB_005bc3a4;
      }
    }
LAB_005bc360:
    plVar9 = (long *)param_1[10];
    if (-1 < *(char *)((long)param_1 + 0x67)) {
      plVar9 = plVar14;
    }
    dVar20 = strtod((char *)plVar9,&local_60);
    uVar3 = 7;
    param_1[0x10] = (long)dVar20;
  }
LAB_005bc3a4:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_005bc6f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 005bc738  FUN_005bc738 =====

void FUN_005bc738(undefined8 *param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  void *__dest;
  ulong uVar3;
  ulong uVar4;
  void *__src;
  size_t __n;
  
  puVar2 = (undefined1 *)param_1[1];
  if (puVar2 < (undefined1 *)param_1[2]) {
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = *param_2;
      param_1[1] = puVar2 + 1;
      return;
    }
                    /* try { // try from 005bc808 to 005bc82f has its CatchHandler @ 005bc860 */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  __src = (void *)*param_1;
  __n = (long)puVar2 - (long)__src;
  uVar1 = __n + 1;
  if ((long)uVar1 < 0) {
    FUN_005bc868(param_1);
  }
  else {
    uVar3 = (long)param_1[2] - (long)__src;
    uVar4 = uVar3 * 2;
    if (uVar4 < uVar1 || uVar4 - uVar1 == 0) {
      uVar4 = uVar1;
    }
    if (0x3ffffffffffffffe < uVar3) {
      uVar4 = 0x7fffffffffffffff;
    }
    if (uVar4 != 0) {
      __dest = operator_new(uVar4);
      *(undefined1 *)((long)__dest + __n) = *param_2;
      memmove(__dest,__src,__n);
      *param_1 = __dest;
      param_1[1] = (undefined1 *)((long)__dest + __n) + 1;
      param_1[2] = (long)__dest + uVar4;
      if (__src == (void *)0x0) {
        return;
      }
      operator_delete(__src);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h",
             0x23,"__location != nullptr","null pointer given to construct_at");
}


// ===== 005bc868  FUN_005bc868 =====

void FUN_005bc868(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_004e8250("vector");
}


// ===== 005bc87c  FUN_005bc87c =====

void FUN_005bc87c(long param_1,undefined1 param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  bVar1 = *(byte *)(param_1 + 0x67);
  lVar2 = param_1 + 0x50;
  if ((char)bVar1 < '\0') {
    uVar3 = *(ulong *)(param_1 + 0x58);
    uVar4 = (*(ulong *)(param_1 + 0x60) & 0x7fffffffffffffff) - 1;
    if (uVar3 == uVar4) goto LAB_005bc8c8;
  }
  else {
    if (bVar1 != 0x16) {
      if (0x15 < bVar1) {
                    /* try { // try from 005bc924 to 005bc94b has its CatchHandler @ 005bc94c */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                   "__s < __min_cap",
                   "__s should never be greater than or equal to the short string capacity");
      }
      uVar3 = (ulong)bVar1;
      *(byte *)(param_1 + 0x67) = bVar1 + 1;
      goto LAB_005bc908;
    }
    uVar4 = 0x16;
LAB_005bc8c8:
    uVar3 = uVar4;
    FUN_0054774c(lVar2,uVar3,1,uVar3,uVar3,0,0);
  }
  lVar2 = *(long *)(param_1 + 0x50);
  *(ulong *)(param_1 + 0x58) = uVar3 + 1;
LAB_005bc908:
  *(undefined1 *)(lVar2 + uVar3) = param_2;
  ((undefined1 *)(lVar2 + uVar3))[1] = 0;
  return;
}


// ===== 005bc950  FUN_005bc950 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005bc950(long *param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined1 local_74 [4];
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar4 = tpidr_el0;
  lVar7 = 0;
  iVar6 = 0;
  local_58 = *(long *)(lVar4 + 0x28);
  uStack_68 = _UNK_001f1e98;
  local_70 = _DAT_001f1e90;
  do {
    uVar3 = *(uint *)((long)&local_70 + lVar7);
    param_1[5] = param_1[5] + 1;
    param_1[4] = param_1[4] + 1;
    if ((char)param_1[3] == '\0') {
      pbVar1 = (byte *)*param_1;
      if (pbVar1 == (byte *)param_1[1]) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (uint)*pbVar1;
        *param_1 = (long)(pbVar1 + 1);
      }
      *(uint *)((long)param_1 + 0x14) = uVar5;
      if (uVar5 != 0xffffffff) goto LAB_005bca10;
LAB_005bca74:
      iVar6 = -1;
      break;
    }
    uVar5 = *(uint *)((long)param_1 + 0x14);
    *(undefined1 *)(param_1 + 3) = 0;
    if (uVar5 == 0xffffffff) goto LAB_005bca74;
LAB_005bca10:
    local_74[0] = (undefined1)uVar5;
    FUN_005bc738(param_1 + 7,local_74);
    iVar2 = *(int *)((long)param_1 + 0x14);
    if (iVar2 == 10) {
      iVar6 = -1;
      param_1[5] = 0;
      param_1[6] = param_1[6] + 1;
      break;
    }
    uVar5 = iVar2 - 0x30;
    if (9 < uVar5) {
      if (iVar2 - 0x41U < 6) {
        uVar5 = iVar2 - 0x37;
      }
      else {
        if (5 < iVar2 - 0x61U) goto LAB_005bca74;
        uVar5 = iVar2 - 0x57;
      }
    }
    lVar7 = lVar7 + 4;
    iVar6 = (uVar5 << (ulong)(uVar3 & 0x1f)) + iVar6;
  } while (lVar7 != 0x10);
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar6;
}


// ===== 005bcaac  FUN_005bcaac =====

void FUN_005bcaac(long *param_1,int *param_2,long param_3)

{
  int *piVar1;
  byte *pbVar2;
  undefined4 uVar3;
  byte bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  int iVar12;
  undefined1 local_5c [4];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  plVar7 = param_1 + 10;
  bVar4 = *(byte *)((long)param_1 + 0x67);
  uVar3 = *(undefined4 *)((long)param_1 + 0x14);
  plVar6 = param_1;
  if ((char)bVar4 < '\0') {
    uVar9 = param_1[0xb];
    uVar11 = (param_1[0xc] & 0x7fffffffffffffffU) - 1;
    if (uVar9 == uVar11) goto LAB_005bcb18;
LAB_005bcb3c:
    param_1[0xb] = uVar9 + 1;
    plVar10 = (long *)param_1[10];
  }
  else {
    if (bVar4 == 0x16) {
      uVar11 = 0x16;
LAB_005bcb18:
      uVar9 = uVar11;
      plVar6 = (long *)FUN_0054774c(plVar7,uVar9,1,uVar9,uVar9,0,0);
      goto LAB_005bcb3c;
    }
    if (0x15 < bVar4) {
      if (*(long *)(lVar5 + 0x28) == local_58) {
                    /* try { // try from 005bcd3c to 005bcd63 has its CatchHandler @ 005bcd68 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                   "__s < __min_cap",
                   "__s should never be greater than or equal to the short string capacity");
      }
      goto LAB_005bcd64;
    }
    uVar9 = (ulong)bVar4;
    *(byte *)((long)param_1 + 0x67) = bVar4 + 1;
    plVar10 = plVar7;
  }
  *(undefined1 *)((long)plVar10 + uVar9) = (char)uVar3;
  ((undefined1 *)((long)plVar10 + uVar9))[1] = 0;
  if (param_3 != 0) {
    piVar1 = param_2 + param_3;
    do {
      param_1[5] = param_1[5] + 1;
      param_1[4] = param_1[4] + 1;
      if ((char)param_1[3] == '\0') {
        pbVar2 = (byte *)*param_1;
        if (pbVar2 == (byte *)param_1[1]) {
          uVar8 = 0xffffffff;
        }
        else {
          uVar8 = (uint)*pbVar2;
          *param_1 = (long)(pbVar2 + 1);
        }
        *(uint *)((long)param_1 + 0x14) = uVar8;
        if (uVar8 != 0xffffffff) goto LAB_005bcbfc;
LAB_005bcc88:
        iVar12 = -1;
      }
      else {
        uVar8 = *(uint *)((long)param_1 + 0x14);
        *(undefined1 *)(param_1 + 3) = 0;
        if (uVar8 == 0xffffffff) goto LAB_005bcc88;
LAB_005bcbfc:
        local_5c[0] = (undefined1)uVar8;
        plVar6 = (long *)FUN_005bc738(param_1 + 7,local_5c);
        iVar12 = *(int *)((long)param_1 + 0x14);
        if (iVar12 == 10) {
          param_1[5] = 0;
          param_1[6] = param_1[6] + 1;
        }
      }
      if ((iVar12 < *param_2) || (param_2[1] < iVar12)) {
        plVar7 = (long *)0x0;
        param_1[0xd] = (long)"invalid string: ill-formed UTF-8 byte";
        goto LAB_005bccb4;
      }
      bVar4 = *(byte *)((long)param_1 + 0x67);
      if ((char)bVar4 < '\0') {
        uVar9 = param_1[0xb];
        uVar11 = (param_1[0xc] & 0x7fffffffffffffffU) - 1;
        if (uVar9 == uVar11) goto LAB_005bcb8c;
LAB_005bcbb0:
        plVar10 = (long *)param_1[10];
        param_1[0xb] = uVar9 + 1;
      }
      else {
        if (bVar4 == 0x16) {
          uVar11 = 0x16;
LAB_005bcb8c:
          uVar9 = uVar11;
          plVar6 = (long *)FUN_0054774c(plVar7,uVar9,1,uVar9,uVar9,0,0);
          goto LAB_005bcbb0;
        }
        if (0x15 < bVar4) {
          param_1 = plVar6;
          if (*(long *)(lVar5 + 0x28) == local_58) {
                    /* try { // try from 005bcd04 to 005bcd2b has its CatchHandler @ 005bcd6c */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_005bcd64;
        }
        uVar9 = (ulong)bVar4;
        *(byte *)((long)param_1 + 0x67) = bVar4 + 1;
        plVar10 = plVar7;
      }
      param_2 = param_2 + 2;
      *(undefined1 *)((long)plVar10 + uVar9) = (char)iVar12;
      ((undefined1 *)((long)plVar10 + uVar9))[1] = 0;
    } while (param_2 != piVar1);
  }
  plVar7 = (long *)0x1;
LAB_005bccb4:
  param_1 = plVar7;
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
LAB_005bcd64:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 005bcd70  FUN_005bcd70 =====

void FUN_005bcd70(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,byte param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  uVar4 = *param_3;
  param_1[0xd] = param_3[1];
  param_1[0xc] = uVar4;
  param_1[0xe] = param_3[2];
  lVar2 = *(long *)(param_3[3] + 8);
  param_1[0xf] = param_3[3];
  if (lVar2 != 0) {
    param_3[2] = FUN_005b9584;
    param_3[3] = &DAT_001f1910;
  }
  *(undefined1 *)(param_1 + 0x11) = 9;
  *(byte *)(param_1 + 0x10) = param_4 & 1;
  param_1[0x12] = 0;
  param_1[0x13] = param_5;
                    /* try { // try from 005bce00 to 005bce0b has its CatchHandler @ 005bce48 */
  FUN_005bf890(param_1 + 4,0x40);
  uVar1 = param_1[5];
  uVar3 = uVar1 >> 3 & 0x1ffffffffffffff8;
  param_1[5] = uVar1 + 1;
  *(ulong *)(param_1[4] + uVar3) = *(ulong *)(param_1[4] + uVar3) | 1L << (uVar1 & 0x3f);
  return;
}


// ===== 005bceb8  FUN_005bceb8 =====

/* WARNING: Removing unreachable block (ram,0x005bd870) */
/* WARNING: Removing unreachable block (ram,0x005bd630) */

uint FUN_005bceb8(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined **ppuVar14;
  double dVar15;
  undefined1 local_110;
  undefined7 uStack_10f;
  char local_f9;
  void *local_f8 [2];
  char local_e1;
  void *local_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined **local_c8;
  undefined4 local_c0;
  undefined1 auStack_b8 [16];
  undefined8 local_a8;
  undefined1 local_a0 [24];
  void *local_88;
  ulong local_80;
  long local_78;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  plVar12 = (long *)(param_1 + 0x78);
  lVar1 = param_1 + 0x28;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_78 = 0;
LAB_005bcf14:
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 1:
    local_c8 = (undefined **)CONCAT71(local_c8._1_7_,1);
                    /* try { // try from 005bcf38 to 005bd01b has its CatchHandler @ 005bddf4 */
    FUN_005c2780(param_2,&local_c8,0);
    break;
  case 2:
    local_c8 = (undefined **)((ulong)local_c8._1_7_ << 8);
    FUN_005c2780(param_2,&local_c8,0);
    break;
  case 3:
    local_c8 = (undefined **)0x0;
    FUN_005c2abc(param_2,&local_c8,0);
    break;
  case 4:
    if ((*(int *)(param_1 + 0xb0) != 0x2e) &&
       (uVar9 = *(ulong *)(param_1 + 0xb8), uVar9 != 0xffffffffffffffff)) {
      bVar4 = *(byte *)(param_1 + 0x8f);
      uVar2 = *(ulong *)(param_1 + 0x80);
      if (-1 < (char)bVar4) {
        uVar2 = (ulong)bVar4;
      }
      if (uVar2 < uVar9) {
        if (*(long *)(lVar5 + 0x28) == local_70) {
                    /* try { // try from 005bda54 to 005bda7b has its CatchHandler @ 005bde28 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string",0xd57,
                     "__pos <= size()","string index out of bounds");
        }
        goto LAB_005bde1c;
      }
      plVar3 = (long *)*plVar12;
      if (-1 < (char)bVar4) {
        plVar3 = plVar12;
      }
      *(undefined1 *)((long)plVar3 + uVar9) = 0x2e;
    }
    FUN_005c312c(param_2,plVar12,0);
    break;
  case 5:
    local_c8 = *(undefined ***)(param_1 + 0xa0);
                    /* try { // try from 005bd054 to 005bd093 has its CatchHandler @ 005bddf4 */
    FUN_005c34ac(param_2,&local_c8,0);
    break;
  case 6:
    local_c8 = *(undefined ***)(param_1 + 0x98);
    FUN_005c2df0(param_2,&local_c8,0);
    break;
  case 7:
    ppuVar14 = *(undefined ***)(param_1 + 0xa8);
    dVar15 = ABS((double)ppuVar14);
    if ((dVar15 >= INFINITY) && (dVar15 == INFINITY || dVar15 < INFINITY != NAN(dVar15))) {
      uVar11 = *(undefined8 *)(param_1 + 0x48);
                    /* try { // try from 005bd03c to 005bd047 has its CatchHandler @ 005bdccc */
      FUN_005bde8c(local_a0,lVar1);
                    /* try { // try from 005bd87c to 005bd887 has its CatchHandler @ 005bdcc4 */
      FUN_005bde8c(local_f8,lVar1);
      local_110 = 0x27;
                    /* try { // try from 005bd890 to 005bd8a7 has its CatchHandler @ 005bdcb0 */
      FUN_005c0e7c(&local_e0,"number overflow parsing \'",local_f8,&local_110);
                    /* try { // try from 005bd8a8 to 005bd8bb has its CatchHandler @ 005bdc98 */
      FUN_005c0c94(&local_c8,0x196,&local_e0,0);
                    /* try { // try from 005bd8bc to 005bd8d3 has its CatchHandler @ 005bdc74 */
      uVar8 = FUN_005c0c38(param_2,uVar11,local_a0,&local_c8);
      local_c8 = &PTR_FUN_00d25888;
      FUN_00552450(auStack_b8);
      FUN_0055234c(&local_c8);
      if (local_d0 < 0) {
        operator_delete(local_e0);
      }
      goto joined_r0x005bdb6c;
    }
    if ((*(int *)(param_1 + 0xb0) != 0x2e) &&
       (uVar9 = *(ulong *)(param_1 + 0xb8), uVar9 != 0xffffffffffffffff)) {
      bVar4 = *(byte *)(param_1 + 0x8f);
      uVar2 = *(ulong *)(param_1 + 0x80);
      if (-1 < (char)bVar4) {
        uVar2 = (ulong)bVar4;
      }
      if (uVar2 < uVar9) {
        if (*(long *)(lVar5 + 0x28) == local_70) {
                    /* try { // try from 005bda8c to 005bdab3 has its CatchHandler @ 005bde24 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string",0xd57,
                     "__pos <= size()","string index out of bounds");
        }
        goto LAB_005bde1c;
      }
      plVar3 = (long *)*plVar12;
      if (-1 < (char)bVar4) {
        plVar3 = plVar12;
      }
      *(undefined1 *)((long)plVar3 + uVar9) = 0x2e;
    }
                    /* try { // try from 005bd0e4 to 005bd0f3 has its CatchHandler @ 005bddec */
    local_c8 = ppuVar14;
    FUN_005c2440(param_2,&local_c8,0);
    break;
  case 8:
    uVar9 = FUN_005c0724(param_2,0xffffffffffffffff);
    if ((uVar9 & 1) == 0) goto LAB_005bd608;
    iVar6 = FUN_005b9d30(lVar1);
    *(int *)(param_1 + 0x20) = iVar6;
    if (iVar6 != 10) {
      if (local_80 == local_78 * 0x40) {
        if ((long)(local_80 + 1) < 0) {
          if (*(long *)(lVar5 + 0x28) == local_70) {
                    /* try { // try from 005bdb84 to 005bdb8b has its CatchHandler @ 005bdde4 */
            FUN_005bf9a8(&local_88);
LAB_005bdb8c:
            if (*(long *)(lVar5 + 0x28) == local_70) {
                    /* try { // try from 005bdb9c to 005bdba3 has its CatchHandler @ 005bdddc */
              FUN_005bf9a8(&local_88);
              goto LAB_005bdba4;
            }
          }
          goto LAB_005bde1c;
        }
        if (local_80 < 0x3fffffffffffffff) {
          uVar9 = local_78 * 0x80;
          uVar2 = (local_80 & 0xffffffffffffffc0) + 0x40;
          if (uVar9 < uVar2 || uVar9 - uVar2 == 0) {
            uVar9 = uVar2;
          }
        }
        else {
          uVar9 = 0x7fffffffffffffff;
        }
                    /* try { // try from 005bd2f4 to 005bd2fb has its CatchHandler @ 005bdde8 */
        FUN_005bf890(&local_88,uVar9);
      }
      uVar9 = local_80 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)((long)local_88 + uVar9) =
           *(ulong *)((long)local_88 + uVar9) | 1L << (local_80 & 0x3f);
      local_80 = local_80 + 1;
      goto LAB_005bcf14;
    }
    uVar9 = FUN_005c09d0(param_2);
LAB_005bd094:
    if ((uVar9 & 1) == 0) goto LAB_005bd608;
    break;
  case 9:
    uVar9 = FUN_005bfda0(param_2,0xffffffffffffffff);
    if ((uVar9 & 1) == 0) goto LAB_005bd608;
    iVar6 = FUN_005b9d30(lVar1);
    *(int *)(param_1 + 0x20) = iVar6;
    if (iVar6 == 0xb) {
      uVar9 = FUN_005c004c(param_2);
      goto LAB_005bd094;
    }
    if (iVar6 != 4) {
      lVar13 = *(long *)(param_1 + 0x48);
                    /* try { // try from 005bd954 to 005bd95f has its CatchHandler @ 005bdc70 */
      FUN_005bde8c(local_a0,lVar1);
      uStack_d8 = *(undefined8 *)(param_1 + 0x50);
      local_e0 = *(void **)(param_1 + 0x48);
      local_d0 = *(long *)(param_1 + 0x58);
                    /* try { // try from 005bd970 to 005bd97f has its CatchHandler @ 005bdc68 */
      FUN_004a3cf4(&local_110,"object key");
                    /* try { // try from 005bd980 to 005bd993 has its CatchHandler @ 005bdc64 */
      FUN_005be2b8(local_f8,param_1,4,&local_110);
                    /* try { // try from 005bd994 to 005bd9ab has its CatchHandler @ 005bdc60 */
      FUN_005be048(&local_c8,0x65,&local_e0,local_f8,0);
                    /* try { // try from 005bd9ac to 005bd9c3 has its CatchHandler @ 005bdc5c */
      uVar8 = FUN_005bde30(param_2,lVar13,local_a0,&local_c8);
LAB_005bd828:
      local_c8 = &PTR_FUN_00d25888;
      FUN_00552450(auStack_b8);
      FUN_0055234c(&local_c8);
      if (local_e1 < '\0') {
        operator_delete(local_f8[0]);
      }
      if (local_f9 < '\0') {
        local_f8[0] = (void *)CONCAT71(uStack_10f,local_110);
        goto LAB_005bd864;
      }
      goto LAB_005bd370;
    }
    if ((*(int *)(param_1 + 0xb0) != 0x2e) &&
       (uVar9 = *(ulong *)(param_1 + 0xb8), uVar9 != 0xffffffffffffffff)) {
      bVar4 = *(byte *)(param_1 + 0x8f);
      uVar2 = *(ulong *)(param_1 + 0x80);
      if (-1 < (char)bVar4) {
        uVar2 = (ulong)bVar4;
      }
      if (uVar2 < uVar9) {
        if (*(long *)(lVar5 + 0x28) == local_70) {
                    /* try { // try from 005bdac4 to 005bdaeb has its CatchHandler @ 005bde20 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string",0xd57,
                     "__pos <= size()","string index out of bounds");
        }
        goto LAB_005bde1c;
      }
      plVar3 = (long *)*plVar12;
      if (-1 < (char)bVar4) {
        plVar3 = plVar12;
      }
      *(undefined1 *)((long)plVar3 + uVar9) = 0x2e;
    }
    uVar9 = FUN_005c0488(param_2,plVar12);
    if ((uVar9 & 1) == 0) goto LAB_005bd608;
    iVar6 = FUN_005b9d30(lVar1);
    *(int *)(param_1 + 0x20) = iVar6;
    if (iVar6 != 0xc) {
      lVar13 = *(long *)(param_1 + 0x48);
                    /* try { // try from 005bd9d0 to 005bd9db has its CatchHandler @ 005bdc58 */
      FUN_005bde8c(local_a0,lVar1);
      uStack_d8 = *(undefined8 *)(param_1 + 0x50);
      local_e0 = *(void **)(param_1 + 0x48);
      local_d0 = *(long *)(param_1 + 0x58);
                    /* try { // try from 005bd9ec to 005bd9fb has its CatchHandler @ 005bdc50 */
      FUN_004a3cf4(&local_110,"object separator");
                    /* try { // try from 005bd9fc to 005bda0f has its CatchHandler @ 005bdc4c */
      FUN_005be2b8(local_f8,param_1,0xc,&local_110);
                    /* try { // try from 005bda10 to 005bda27 has its CatchHandler @ 005bdc48 */
      FUN_005be048(&local_c8,0x65,&local_e0,local_f8,0);
                    /* try { // try from 005bda28 to 005bda3f has its CatchHandler @ 005bdc44 */
      uVar8 = FUN_005bde30(param_2,lVar13,local_a0,&local_c8);
      goto LAB_005bd828;
    }
    if (local_80 == local_78 * 0x40) {
      if ((long)(local_80 + 1) < 0) goto LAB_005bdb8c;
      if (local_80 < 0x3fffffffffffffff) {
        uVar9 = local_78 * 0x80;
        uVar2 = (local_80 & 0xffffffffffffffc0) + 0x40;
        if (uVar9 < uVar2 || uVar9 - uVar2 == 0) {
          uVar9 = uVar2;
        }
      }
      else {
        uVar9 = 0x7fffffffffffffff;
      }
                    /* try { // try from 005bd32c to 005bd333 has its CatchHandler @ 005bdde0 */
      FUN_005bf890(&local_88,uVar9);
    }
    uVar9 = local_80 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)((long)local_88 + uVar9) =
         *(ulong *)((long)local_88 + uVar9) & (1L << (local_80 & 0x3f) ^ 0xffffffffffffffffU);
    local_80 = local_80 + 1;
                    /* try { // try from 005bd35c to 005bd363 has its CatchHandler @ 005bddf4 */
    uVar7 = FUN_005b9d30(lVar1);
    *(undefined4 *)(param_1 + 0x20) = uVar7;
    goto LAB_005bcf14;
  default:
    goto switchD_005bcf30_caseD_a;
  case 0xe:
                    /* try { // try from 005bd484 to 005bd48f has its CatchHandler @ 005bddd4 */
    FUN_005bde8c(local_a0,lVar1);
    uStack_d8 = *(undefined8 *)(param_1 + 0x50);
    local_e0 = *(void **)(param_1 + 0x48);
    local_d0 = *(long *)(param_1 + 0x58);
                    /* try { // try from 005bd4a0 to 005bd4af has its CatchHandler @ 005bddc4 */
    FUN_004a3cf4(&local_110,"value");
                    /* try { // try from 005bd4b0 to 005bd4c3 has its CatchHandler @ 005bdd98 */
    FUN_005be2b8(local_f8,param_1,0,&local_110);
                    /* try { // try from 005bd4c4 to 005bd4db has its CatchHandler @ 005bdd7c */
    FUN_005be048(&local_c8,0x65,&local_e0,local_f8,0);
    *(undefined1 *)(param_2 + 0x58) = 1;
    if (*(char *)(param_2 + 0x80) == '\0') goto LAB_005bd5d0;
    puVar10 = (undefined8 *)FUN_0054f64c(0x28);
    *puVar10 = &PTR_FUN_00d25888;
    *(undefined4 *)(puVar10 + 1) = local_c0;
    FUN_005472bc(puVar10 + 2,auStack_b8);
    *puVar10 = &PTR_FUN_00d259d8;
    puVar10[4] = local_a8;
    if (*(long *)(lVar5 + 0x28) == local_70) {
                    /* try { // try from 005bd540 to 005bd557 has its CatchHandler @ 005bdd5c */
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(puVar10,&PTR_PTR_thunk_FUN_00552768_00d259b0,FUN_005be5f0);
    }
    goto LAB_005bde1c;
  case 0xf:
    plVar12 = (long *)(param_1 + 0x48);
    if (*plVar12 == 1) {
                    /* try { // try from 005bdaec to 005bdaf7 has its CatchHandler @ 005bdc40 */
      FUN_005bde8c(local_a0,lVar1);
      uStack_d8 = *(undefined8 *)(param_1 + 0x50);
      local_e0 = (void *)*plVar12;
      local_d0 = *(long *)(param_1 + 0x58);
                    /* try { // try from 005bdb08 to 005bdb17 has its CatchHandler @ 005bdc38 */
      FUN_004a3cf4(local_f8,
                   "attempting to parse an empty input; check that your input string or stream contains the expected JSON"
                  );
                    /* try { // try from 005bdb18 to 005bdb2f has its CatchHandler @ 005bdc34 */
      FUN_005be048(&local_c8,0x65,&local_e0,local_f8,0);
                    /* try { // try from 005bdb30 to 005bdb47 has its CatchHandler @ 005bdc10 */
      uVar8 = FUN_005bde30(param_2,1,local_a0,&local_c8);
      local_c8 = &PTR_FUN_00d25888;
      FUN_00552450(auStack_b8);
      FUN_0055234c(&local_c8);
joined_r0x005bdb6c:
      if (local_e1 < '\0') {
LAB_005bd864:
        operator_delete(local_f8[0]);
      }
      goto LAB_005bd370;
    }
                    /* try { // try from 005bd568 to 005bd573 has its CatchHandler @ 005bdd58 */
    FUN_005bde8c(local_a0,lVar1);
    uStack_d8 = *(undefined8 *)(param_1 + 0x50);
    local_e0 = (void *)*plVar12;
    local_d0 = *(long *)(param_1 + 0x58);
                    /* try { // try from 005bd584 to 005bd593 has its CatchHandler @ 005bdd50 */
    FUN_004a3cf4(&local_110,"value");
                    /* try { // try from 005bd594 to 005bd5a7 has its CatchHandler @ 005bdd4c */
    FUN_005be2b8(local_f8,param_1,0x10,&local_110);
                    /* try { // try from 005bd5a8 to 005bd5bf has its CatchHandler @ 005bdd48 */
    FUN_005be048(&local_c8,0x65,&local_e0,local_f8,0);
    *(undefined1 *)(param_2 + 0x58) = 1;
    if (*(char *)(param_2 + 0x80) == '\0') goto LAB_005bd5d0;
LAB_005bdba4:
    puVar10 = (undefined8 *)FUN_0054f64c(0x28);
    *puVar10 = &PTR_FUN_00d25888;
    *(undefined4 *)(puVar10 + 1) = local_c0;
    FUN_005472bc(puVar10 + 2,auStack_b8);
    *puVar10 = &PTR_FUN_00d259d8;
    puVar10[4] = local_a8;
    if (*(long *)(lVar5 + 0x28) == local_70) {
                    /* try { // try from 005bdbf8 to 005bdc0f has its CatchHandler @ 005bdd44 */
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(puVar10,&PTR_PTR_thunk_FUN_00552768_00d259b0,FUN_005be5f0);
    }
    goto LAB_005bde1c;
  }
  if (local_80 != 0) {
    do {
      if ((*(ulong *)((long)local_88 + (local_80 - 1 >> 3 & 0x1ffffffffffffff8)) >>
           (local_80 - 1 & 0x3f) & 1) == 0) {
        iVar6 = FUN_005b9d30(lVar1);
        *(int *)(param_1 + 0x20) = iVar6;
        if (iVar6 == 0xd) {
          iVar6 = FUN_005b9d30(lVar1);
          *(int *)(param_1 + 0x20) = iVar6;
          if (iVar6 != 4) {
            lVar13 = *(long *)(param_1 + 0x48);
                    /* try { // try from 005bd73c to 005bd747 has its CatchHandler @ 005bdd04 */
            FUN_005bde8c(local_a0,lVar1);
            uStack_d8 = *(undefined8 *)(param_1 + 0x50);
            local_e0 = *(void **)(param_1 + 0x48);
            local_d0 = *(long *)(param_1 + 0x58);
                    /* try { // try from 005bd758 to 005bd767 has its CatchHandler @ 005bdcf8 */
            FUN_004a3cf4(&local_110,"object key");
                    /* try { // try from 005bd768 to 005bd77b has its CatchHandler @ 005bdcf0 */
            FUN_005be2b8(local_f8,param_1,4,&local_110);
                    /* try { // try from 005bd77c to 005bd793 has its CatchHandler @ 005bdcec */
            FUN_005be048(&local_c8,0x65,&local_e0,local_f8,0);
                    /* try { // try from 005bd794 to 005bd7ab has its CatchHandler @ 005bdce8 */
            uVar8 = FUN_005bde30(param_2,lVar13,local_a0,&local_c8);
            goto LAB_005bd828;
          }
          if ((*(int *)(param_1 + 0xb0) != 0x2e) &&
             (uVar9 = *(ulong *)(param_1 + 0xb8), uVar9 != 0xffffffffffffffff)) {
            bVar4 = *(byte *)(param_1 + 0x8f);
            uVar2 = *(ulong *)(param_1 + 0x80);
            if (-1 < (char)bVar4) {
              uVar2 = (ulong)bVar4;
            }
            if (uVar2 < uVar9) {
              if (*(long *)(lVar5 + 0x28) == local_70) {
                    /* try { // try from 005bd924 to 005bd94b has its CatchHandler @ 005bde2c */
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s:%d: assertion %s failed: %s",
                           "../../discord_common/native/third_party/llvm/libcxx/include/string",
                           0xd57,"__pos <= size()","string index out of bounds");
              }
              goto LAB_005bde1c;
            }
            plVar3 = (long *)*plVar12;
            if (-1 < (char)bVar4) {
              plVar3 = plVar12;
            }
            *(undefined1 *)((long)plVar3 + uVar9) = 0x2e;
          }
          uVar9 = FUN_005c0488(param_2,plVar12);
          if ((uVar9 & 1) == 0) goto LAB_005bd608;
          iVar6 = FUN_005b9d30(lVar1);
          *(int *)(param_1 + 0x20) = iVar6;
          if (iVar6 != 0xc) {
            lVar13 = *(long *)(param_1 + 0x48);
                    /* try { // try from 005bd7b8 to 005bd7c3 has its CatchHandler @ 005bdce4 */
            FUN_005bde8c(local_a0,lVar1);
            uStack_d8 = *(undefined8 *)(param_1 + 0x50);
            local_e0 = *(void **)(param_1 + 0x48);
            local_d0 = *(long *)(param_1 + 0x58);
                    /* try { // try from 005bd7d4 to 005bd7e3 has its CatchHandler @ 005bdcdc */
            FUN_004a3cf4(&local_110,"object separator");
                    /* try { // try from 005bd7e4 to 005bd7f7 has its CatchHandler @ 005bdcd8 */
            FUN_005be2b8(local_f8,param_1,0xc,&local_110);
                    /* try { // try from 005bd7f8 to 005bd80f has its CatchHandler @ 005bdcd4 */
            FUN_005be048(&local_c8,0x65,&local_e0,local_f8,0);
                    /* try { // try from 005bd810 to 005bd827 has its CatchHandler @ 005bdcd0 */
            uVar8 = FUN_005bde30(param_2,lVar13,local_a0,&local_c8);
            goto LAB_005bd828;
          }
          uVar7 = FUN_005b9d30(lVar1);
          *(undefined4 *)(param_1 + 0x20) = uVar7;
          goto LAB_005bcf14;
        }
        if (iVar6 != 0xb) {
          lVar13 = *(long *)(param_1 + 0x48);
                    /* try { // try from 005bd6c0 to 005bd6cb has its CatchHandler @ 005bdd14 */
          FUN_005bde8c(local_a0,lVar1);
          uStack_d8 = *(undefined8 *)(param_1 + 0x50);
          local_e0 = *(void **)(param_1 + 0x48);
          local_d0 = *(long *)(param_1 + 0x58);
                    /* try { // try from 005bd6dc to 005bd6eb has its CatchHandler @ 005bdd0c */
          FUN_004a3cf4(&local_110,"object");
                    /* try { // try from 005bd6ec to 005bd6ff has its CatchHandler @ 005bdd08 */
          FUN_005be2b8(local_f8,param_1,0xb,&local_110);
                    /* try { // try from 005bd700 to 005bd717 has its CatchHandler @ 005bdd00 */
          FUN_005be048(&local_c8,0x65,&local_e0,local_f8,0);
                    /* try { // try from 005bd718 to 005bd72f has its CatchHandler @ 005bdcf4 */
          uVar8 = FUN_005bde30(param_2,lVar13,local_a0,&local_c8);
          goto LAB_005bd828;
        }
        uVar9 = FUN_005c004c(param_2);
      }
      else {
                    /* try { // try from 005bd118 to 005bd163 has its CatchHandler @ 005bddf0 */
        iVar6 = FUN_005b9d30(lVar1);
        *(int *)(param_1 + 0x20) = iVar6;
        if (iVar6 == 0xd) goto LAB_005bd17c;
        if (iVar6 != 10) {
          lVar13 = *(long *)(param_1 + 0x48);
                    /* try { // try from 005bd644 to 005bd64f has its CatchHandler @ 005bdd40 */
          FUN_005bde8c(local_a0,lVar1);
          uStack_d8 = *(undefined8 *)(param_1 + 0x50);
          local_e0 = *(void **)(param_1 + 0x48);
          local_d0 = *(long *)(param_1 + 0x58);
                    /* try { // try from 005bd660 to 005bd66f has its CatchHandler @ 005bdd38 */
          FUN_004a3cf4(&local_110,"array");
                    /* try { // try from 005bd670 to 005bd683 has its CatchHandler @ 005bdd34 */
          FUN_005be2b8(local_f8,param_1,10,&local_110);
                    /* try { // try from 005bd684 to 005bd69b has its CatchHandler @ 005bdd30 */
          FUN_005be048(&local_c8,0x65,&local_e0,local_f8,0);
                    /* try { // try from 005bd69c to 005bd6b3 has its CatchHandler @ 005bdd18 */
          uVar8 = FUN_005bde30(param_2,lVar13,local_a0,&local_c8);
          goto LAB_005bd828;
        }
        uVar9 = FUN_005c09d0(param_2);
      }
      if ((uVar9 & 1) == 0) goto LAB_005bd608;
      local_80 = local_80 - 1;
      if (local_80 == 0) break;
    } while( true );
  }
  uVar8 = 1;
  goto LAB_005bd370;
LAB_005bd17c:
                    /* try { // try from 005bd17c to 005bd27b has its CatchHandler @ 005bddf4 */
  uVar7 = FUN_005b9d30(lVar1);
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  goto LAB_005bcf14;
switchD_005bcf30_caseD_a:
                    /* try { // try from 005bd3b0 to 005bd3bb has its CatchHandler @ 005bddd8 */
  FUN_005bde8c(local_a0,lVar1);
  uStack_d8 = *(undefined8 *)(param_1 + 0x50);
  local_e0 = *(void **)(param_1 + 0x48);
  local_d0 = *(long *)(param_1 + 0x58);
                    /* try { // try from 005bd3cc to 005bd3db has its CatchHandler @ 005bddcc */
  FUN_004a3cf4(&local_110,"value");
                    /* try { // try from 005bd3dc to 005bd3ef has its CatchHandler @ 005bdd9c */
  FUN_005be2b8(local_f8,param_1,0x10,&local_110);
                    /* try { // try from 005bd3f0 to 005bd407 has its CatchHandler @ 005bdd80 */
  FUN_005be048(&local_c8,0x65,&local_e0,local_f8,0);
  *(undefined1 *)(param_2 + 0x58) = 1;
  if (*(char *)(param_2 + 0x80) == '\0') {
LAB_005bd5d0:
    local_c8 = &PTR_FUN_00d25888;
    FUN_00552450(auStack_b8);
    FUN_0055234c(&local_c8);
    if (local_e1 < '\0') {
      operator_delete(local_f8[0]);
    }
    if (local_f9 < '\0') {
      operator_delete((void *)CONCAT71(uStack_10f,local_110));
    }
LAB_005bd608:
    uVar8 = 0;
LAB_005bd370:
    if (local_88 != (void *)0x0) {
      operator_delete(local_88);
    }
    if (*(long *)(lVar5 + 0x28) == local_70) {
      return uVar8 & 1;
    }
  }
  else {
    puVar10 = (undefined8 *)FUN_0054f64c(0x28);
    *puVar10 = &PTR_FUN_00d25888;
    *(undefined4 *)(puVar10 + 1) = local_c0;
    FUN_005472bc(puVar10 + 2,auStack_b8);
    *puVar10 = &PTR_FUN_00d259d8;
    puVar10[4] = local_a8;
    if (*(long *)(lVar5 + 0x28) == local_70) {
                    /* try { // try from 005bd46c to 005bd483 has its CatchHandler @ 005bdd60 */
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(puVar10,&PTR_PTR_thunk_FUN_00552768_00d259b0,FUN_005be5f0);
    }
  }
LAB_005bde1c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005bde30  FUN_005bde30 =====

undefined8 FUN_005bde30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x58) = 1;
  if (*(char *)(param_1 + 0x80) == '\0') {
    return 0;
  }
  uVar1 = FUN_0054f64c(0x28);
  FUN_005c37e8(uVar1,param_4);
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar1,&PTR_PTR_thunk_FUN_00552768_00d259b0,FUN_005be5f0);
}


// ===== 005bde8c  FUN_005bde8c =====

void FUN_005bde8c(undefined8 *param_1,long param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  size_t sVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 local_68;
  undefined1 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  pbVar1 = *(byte **)(param_2 + 0x38);
  pbVar2 = *(byte **)(param_2 + 0x40);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    if (pbVar1 == pbVar2) {
      if (*(long *)(lVar5 + 0x28) == local_58) {
        return;
      }
LAB_005be040:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    bVar3 = *pbVar1;
    if (bVar3 < 0x20) {
      local_60 = 0;
      local_68 = 0;
      snprintf((char *)&local_68,9,"<U+%.4X>",(ulong)bVar3);
      sVar6 = strlen((char *)&local_68);
                    /* try { // try from 005bdf00 to 005bdf0b has its CatchHandler @ 005be014 */
      FUN_00547cac(param_1,&local_68,sVar6);
    }
    else {
      bVar4 = *(byte *)((long)param_1 + 0x17);
      if ((char)bVar4 < '\0') {
        uVar7 = param_1[1];
        uVar9 = (param_1[2] & 0x7fffffffffffffff) - 1;
        if (uVar7 == uVar9) goto LAB_005bdf54;
LAB_005bdf78:
        param_1[1] = uVar7 + 1;
        puVar8 = (undefined8 *)*param_1;
      }
      else {
        if (bVar4 == 0x16) {
          uVar9 = 0x16;
LAB_005bdf54:
                    /* try { // try from 005bdf54 to 005bdf73 has its CatchHandler @ 005be010 */
          uVar7 = uVar9;
          FUN_0054774c(param_1,uVar7,1,uVar7,uVar7,0,0);
          goto LAB_005bdf78;
        }
        if (0x15 < bVar4) {
          if (*(long *)(lVar5 + 0x28) == local_58) {
                    /* try { // try from 005bdfe8 to 005be00f has its CatchHandler @ 005be044 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/string",0x66c,
                       "__s < __min_cap",
                       "__s should never be greater than or equal to the short string capacity");
          }
          goto LAB_005be040;
        }
        uVar7 = (ulong)bVar4;
        *(byte *)((long)param_1 + 0x17) = bVar4 + 1;
        puVar8 = param_1;
      }
      *(byte *)((long)puVar8 + uVar7) = bVar3;
      ((byte *)((long)puVar8 + uVar7))[1] = 0;
    }
    pbVar1 = pbVar1 + 1;
  } while( true );
}


// ===== 005be048  FUN_005be048 =====

/* WARNING: Removing unreachable block (ram,0x005be1c0) */
/* WARNING: Removing unreachable block (ram,0x005be0cc) */
/* WARNING: Removing unreachable block (ram,0x005be180) */

void FUN_005be048(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 local_c0;
  undefined7 uStack_bf;
  char local_a9;
  void *local_a8 [2];
  char local_91;
  void *local_90 [2];
  char local_79;
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_004a3cf4(local_a8,"parse_error");
  local_c0 = 0x2e;
                    /* try { // try from 005be094 to 005be09f has its CatchHandler @ 005be288 */
  FUN_005490bc(local_60,param_2);
                    /* try { // try from 005be0a0 to 005be0c3 has its CatchHandler @ 005be270 */
  FUN_005b2cac(local_90,"[json.exception.",local_a8,&local_c0,local_60,&DAT_001d2ea9);
                    /* try { // try from 005be0d4 to 005be0df has its CatchHandler @ 005be25c */
  FUN_005c3a74(local_60,param_3);
                    /* try { // try from 005be0e0 to 005be0ef has its CatchHandler @ 005be23c */
  FUN_004a3cf4(&local_c0,&DAT_001b3348);
                    /* try { // try from 005be0f0 to 005be117 has its CatchHandler @ 005be208 */
  FUN_005c3874(local_78,local_90,"parse error",local_60,&DAT_001c4dc3,&local_c0,param_4);
  if (local_a9 < '\0') {
    operator_delete((void *)CONCAT71(uStack_bf,local_c0));
  }
  if (local_79 < '\0') {
    operator_delete(local_90[0]);
  }
  if (local_91 < '\0') {
    operator_delete(local_a8[0]);
  }
  uVar2 = *param_3;
  *(undefined4 *)(param_1 + 1) = param_2;
  *param_1 = &PTR_FUN_00d25888;
                    /* try { // try from 005be164 to 005be167 has its CatchHandler @ 005be1ec */
  FUN_0054723c(param_1 + 2,local_78);
  param_1[4] = uVar2;
  *param_1 = &PTR_FUN_00d259d8;
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 005be2b8  FUN_005be2b8 =====

/* WARNING: Removing unreachable block (ram,0x005be48c) */
/* WARNING: Removing unreachable block (ram,0x005be38c) */
/* WARNING: Removing unreachable block (ram,0x005be494) */
/* WARNING: Removing unreachable block (ram,0x005be51c) */

void FUN_005be2b8(undefined8 param_1,long param_2,uint param_3,long param_4)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  undefined1 local_84 [4];
  char *local_80 [2];
  char local_69;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulong uStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_004a3cf4(param_1,"syntax error ");
  uVar1 = *(ulong *)(param_4 + 8);
  if (-1 < (char)*(byte *)(param_4 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_4 + 0x17);
  }
  if (uVar1 != 0) {
    uVar1 = uVar1 + 0xf;
    local_58 = 0;
    uStack_50 = 0;
    local_60 = 0;
    local_80[0] = (char *)CONCAT71(local_80[0]._1_7_,0x20);
    if (0x7fffffffffffffef < uVar1) {
      if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 005be55c to 005be563 has its CatchHandler @ 005be5b0 */
                    /* WARNING: Subroutine does not return */
        FUN_004e823c(&local_60);
      }
      goto LAB_005be5ec;
    }
    if (0x16 < uVar1) {
                    /* try { // try from 005be340 to 005be363 has its CatchHandler @ 005be5b0 */
      FUN_0051f494(&local_60,uVar1 | 0xf);
    }
    FUN_005c3ec4(&local_60,"while parsing ",param_4,local_80);
                    /* try { // try from 005be37c to 005be383 has its CatchHandler @ 005be5a4 */
    FUN_00547cac(param_1,&local_60,uStack_50 >> 0x38);
  }
                    /* try { // try from 005be394 to 005be3a7 has its CatchHandler @ 005be5a8 */
  FUN_00547cac(param_1,&DAT_001d8b2f,2);
  uVar2 = *(uint *)(param_2 + 0x20);
  if (uVar2 == 0xe) {
    local_68 = *(undefined8 *)(param_2 + 0x90);
                    /* try { // try from 005be3c0 to 005be3c7 has its CatchHandler @ 005be598 */
    FUN_005bde8c(local_80,param_2 + 0x28);
    local_84[0] = 0x27;
                    /* try { // try from 005be3d0 to 005be3ef has its CatchHandler @ 005be580 */
    FUN_005c3cb4(&local_60,&local_68,"; last read: \'",local_80,local_84);
                    /* try { // try from 005be408 to 005be40f has its CatchHandler @ 005be564 */
    FUN_00547cac(param_1,&local_60,uStack_50 >> 0x38);
    if (local_69 < '\0') {
      operator_delete(local_80[0]);
    }
  }
  else {
    if (uVar2 < 0x11) {
      local_80[0] = &DAT_001fb3fc + *(int *)(&DAT_001fb3fc + (long)(int)uVar2 * 4);
    }
    else {
      local_80[0] = "unknown token";
    }
                    /* try { // try from 005be44c to 005be463 has its CatchHandler @ 005be594 */
    FUN_005c3dd8(&local_60,"unexpected ",local_80);
                    /* try { // try from 005be47c to 005be483 has its CatchHandler @ 005be57c */
    FUN_00547cac(param_1,&local_60,uStack_50 >> 0x38);
  }
  if (param_3 != 0) {
    if (param_3 < 0x11) {
      local_80[0] = &DAT_001fb440 + *(int *)(&DAT_001fb440 + (long)(int)(param_3 - 1) * 4);
    }
    else {
      local_80[0] = "unknown token";
    }
                    /* try { // try from 005be4dc to 005be4f3 has its CatchHandler @ 005be5a0 */
    FUN_005c3dd8(&local_60,"; expected ",local_80);
                    /* try { // try from 005be50c to 005be513 has its CatchHandler @ 005be59c */
    FUN_00547cac(param_1,&local_60,uStack_50 >> 0x38);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_005be5ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005be5f0  FUN_005be5f0 =====

void FUN_005be5f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d25888;
  FUN_00552450(param_1 + 2);
  FUN_0055234c(param_1);
  return;
}


// ===== 005be620  FUN_005be620 =====

void FUN_005be620(long param_1)

{
  void *pvVar1;
  code *pcVar2;
  
                    /* try { // try from 005be638 to 005be63b has its CatchHandler @ 005be690 */
  FUN_005b2fc4(param_1 + 0x90,*(undefined1 *)(param_1 + 0x88));
  pcVar2 = *(code **)(*(long *)(param_1 + 0x78) + 8);
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 005be64c to 005be64f has its CatchHandler @ 005be68c */
    (*pcVar2)(*(undefined8 *)(param_1 + 0x60));
  }
  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x38));
  }
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x20));
  }
  pvVar1 = *(void **)(param_1 + 8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x10) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 005be694  FUN_005be694 =====

/* WARNING: Removing unreachable block (ram,0x005bf188) */
/* WARNING: Removing unreachable block (ram,0x005bee94) */

uint FUN_005be694(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  ulong uVar3;
  undefined **ppuVar4;
  byte bVar5;
  long lVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  undefined **ppuVar15;
  double dVar16;
  undefined1 local_110;
  undefined7 uStack_10f;
  char local_f9;
  void *local_f8 [2];
  char local_e1;
  void *local_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined **local_c8;
  undefined4 local_c0;
  undefined1 auStack_b8 [16];
  undefined8 local_a8;
  undefined1 local_a0 [24];
  void *local_88;
  ulong local_80;
  long local_78;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  ppuVar1 = (undefined **)(param_1 + 0x78);
  lVar2 = param_1 + 0x28;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_78 = 0;
LAB_005be6fc:
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 1:
    local_c8 = (undefined **)CONCAT71(local_c8._1_7_,1);
                    /* try { // try from 005be720 to 005be803 has its CatchHandler @ 005bf7dc */
    FUN_005c4b94(param_2,&local_c8);
    break;
  case 2:
    local_c8 = (undefined **)((ulong)local_c8._1_7_ << 8);
    FUN_005c4b94(param_2,&local_c8);
    break;
  case 3:
    local_c8 = (undefined **)0x0;
    FUN_005c5000(param_2,&local_c8);
    break;
  case 4:
    if ((*(int *)(param_1 + 0xb0) != 0x2e) &&
       (uVar11 = *(ulong *)(param_1 + 0xb8), uVar11 != 0xffffffffffffffff)) {
      bVar5 = *(byte *)(param_1 + 0x8f);
      uVar3 = *(ulong *)(param_1 + 0x80);
      if (-1 < (char)bVar5) {
        uVar3 = (ulong)bVar5;
      }
      if (uVar3 < uVar11) {
        if (*(long *)(lVar6 + 0x28) == local_70) {
                    /* try { // try from 005bf428 to 005bf44f has its CatchHandler @ 005bf814 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string",0xd57,
                     "__pos <= size()","string index out of bounds");
        }
        goto LAB_005bf808;
      }
      ppuVar15 = (undefined **)*ppuVar1;
      if (-1 < (char)bVar5) {
        ppuVar15 = ppuVar1;
      }
      *(undefined1 *)((long)ppuVar15 + uVar11) = 0x2e;
    }
    FUN_005c58a4(param_2,ppuVar1);
    break;
  case 5:
    local_c8 = *(undefined ***)(param_1 + 0xa0);
                    /* try { // try from 005be83c to 005be877 has its CatchHandler @ 005bf7dc */
    FUN_005c5de0(param_2,&local_c8);
    break;
  case 6:
    local_c8 = *(undefined ***)(param_1 + 0x98);
    FUN_005c5438(param_2,&local_c8);
    break;
  case 7:
    ppuVar15 = *(undefined ***)(param_1 + 0xa8);
    dVar16 = ABS((double)ppuVar15);
    if ((dVar16 >= INFINITY) && (dVar16 == INFINITY || dVar16 < INFINITY != NAN(dVar16))) {
      uVar12 = *(undefined8 *)(param_1 + 0x48);
                    /* try { // try from 005be824 to 005be82f has its CatchHandler @ 005bf6b4 */
      FUN_005bde8c(local_a0,lVar2);
                    /* try { // try from 005bf194 to 005bf19f has its CatchHandler @ 005bf6ac */
      FUN_005bde8c(local_f8,lVar2);
      local_110 = 0x27;
                    /* try { // try from 005bf1a8 to 005bf1bf has its CatchHandler @ 005bf698 */
      FUN_005c0e7c(&local_e0,"number overflow parsing \'",local_f8,&local_110);
                    /* try { // try from 005bf1c0 to 005bf1d3 has its CatchHandler @ 005bf680 */
      FUN_005c0c94(&local_c8,0x196,&local_e0,0);
                    /* try { // try from 005bf1d4 to 005bf1eb has its CatchHandler @ 005bf65c */
      uVar9 = FUN_005c40ec(param_2,uVar12,local_a0,&local_c8);
      local_c8 = &PTR_FUN_00d25888;
      FUN_00552450(auStack_b8);
      FUN_0055234c(&local_c8);
      if (local_d0 < 0) {
        operator_delete(local_e0);
      }
      goto joined_r0x005bf548;
    }
    if ((*(int *)(param_1 + 0xb0) != 0x2e) &&
       (uVar11 = *(ulong *)(param_1 + 0xb8), uVar11 != 0xffffffffffffffff)) {
      bVar5 = *(byte *)(param_1 + 0x8f);
      uVar3 = *(ulong *)(param_1 + 0x80);
      if (-1 < (char)bVar5) {
        uVar3 = (ulong)bVar5;
      }
      if (uVar3 < uVar11) {
        if (*(long *)(lVar6 + 0x28) == local_70) {
                    /* try { // try from 005bf464 to 005bf48b has its CatchHandler @ 005bf810 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string",0xd57,
                     "__pos <= size()","string index out of bounds");
        }
        goto LAB_005bf808;
      }
      ppuVar4 = (undefined **)*ppuVar1;
      if (-1 < (char)bVar5) {
        ppuVar4 = ppuVar1;
      }
      *(undefined1 *)((long)ppuVar4 + uVar11) = 0x2e;
    }
                    /* try { // try from 005be8e4 to 005be8ef has its CatchHandler @ 005bf7d4 */
    local_c8 = ppuVar15;
    FUN_005c471c(param_2,&local_c8);
    break;
  case 8:
    local_a0[0] = 2;
    local_c8 = (undefined **)FUN_005c429c(param_2,local_a0);
    FUN_005c4148(param_2 + 8,&local_c8);
    iVar7 = FUN_005b9d30(lVar2);
    *(int *)(param_1 + 0x20) = iVar7;
    if (iVar7 != 10) {
      if (local_80 == local_78 * 0x40) {
        if ((long)(local_80 + 1) < 0) {
          if (*(long *)(lVar6 + 0x28) == local_70) {
                    /* try { // try from 005bf564 to 005bf56b has its CatchHandler @ 005bf7cc */
            FUN_005bf9a8(&local_88);
LAB_005bf56c:
            if (*(long *)(lVar6 + 0x28) == local_70) {
                    /* try { // try from 005bf580 to 005bf587 has its CatchHandler @ 005bf7c4 */
              FUN_005bf9a8(&local_88);
              goto LAB_005bf588;
            }
          }
          goto LAB_005bf808;
        }
        if (local_80 < 0x3fffffffffffffff) {
          uVar11 = local_78 * 0x80;
          uVar3 = (local_80 & 0xffffffffffffffc0) + 0x40;
          if (uVar11 < uVar3 || uVar11 - uVar3 == 0) {
            uVar11 = uVar3;
          }
        }
        else {
          uVar11 = 0x7fffffffffffffff;
        }
                    /* try { // try from 005beb4c to 005beb53 has its CatchHandler @ 005bf7d0 */
        FUN_005bf890(&local_88,uVar11);
      }
      uVar11 = local_80 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)((long)local_88 + uVar11) =
           *(ulong *)((long)local_88 + uVar11) | 1L << (local_80 & 0x3f);
      local_80 = local_80 + 1;
      goto LAB_005be6fc;
    }
    lVar14 = *(long *)(param_2 + 0x10);
    if (*(long *)(param_2 + 8) == lVar14) {
      if (*(long *)(lVar6 + 0x28) == local_70) {
                    /* try { // try from 005bf2f8 to 005bf31f has its CatchHandler @ 005bf820 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                   "!empty()","back() called on an empty vector");
      }
      goto LAB_005bf808;
    }
LAB_005be890:
    *(long *)(param_2 + 0x10) = lVar14 + -8;
    break;
  case 9:
    local_a0[0] = 1;
    local_c8 = (undefined **)FUN_005c429c(param_2,local_a0);
    FUN_005c4148(param_2 + 8,&local_c8);
    iVar7 = FUN_005b9d30(lVar2);
    *(int *)(param_1 + 0x20) = iVar7;
    if (iVar7 == 0xb) {
      lVar14 = *(long *)(param_2 + 0x10);
      if (*(long *)(param_2 + 8) != lVar14) goto LAB_005be890;
      if (*(long *)(lVar6 + 0x28) == local_70) {
                    /* try { // try from 005bf334 to 005bf35b has its CatchHandler @ 005bf81c */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                   "!empty()","back() called on an empty vector");
      }
      goto LAB_005bf808;
    }
    if (iVar7 != 4) {
      lVar14 = *(long *)(param_1 + 0x48);
                    /* try { // try from 005bf270 to 005bf27b has its CatchHandler @ 005bf658 */
      FUN_005bde8c(local_a0,lVar2);
      uStack_d8 = *(undefined8 *)(param_1 + 0x50);
      local_e0 = *(void **)(param_1 + 0x48);
      local_d0 = *(long *)(param_1 + 0x58);
                    /* try { // try from 005bf28c to 005bf29b has its CatchHandler @ 005bf650 */
      FUN_004a3cf4(&local_110,"object key");
                    /* try { // try from 005bf29c to 005bf2af has its CatchHandler @ 005bf64c */
      FUN_005be2b8(local_f8,param_1,4,&local_110);
                    /* try { // try from 005bf2b0 to 005bf2c7 has its CatchHandler @ 005bf648 */
      FUN_005be048(&local_c8,0x65,&local_e0,local_f8,0);
                    /* try { // try from 005bf2c8 to 005bf2df has its CatchHandler @ 005bf644 */
      uVar9 = FUN_005bf834(param_2,lVar14,local_a0,&local_c8);
LAB_005bf140:
      local_c8 = &PTR_FUN_00d25888;
      FUN_00552450(auStack_b8);
      FUN_0055234c(&local_c8);
      if (local_e1 < '\0') {
        operator_delete(local_f8[0]);
      }
      if (local_f9 < '\0') {
        local_f8[0] = (void *)CONCAT71(uStack_10f,local_110);
        goto LAB_005bf17c;
      }
      goto LAB_005bebc8;
    }
    if ((*(int *)(param_1 + 0xb0) != 0x2e) &&
       (uVar11 = *(ulong *)(param_1 + 0xb8), uVar11 != 0xffffffffffffffff)) {
      bVar5 = *(byte *)(param_1 + 0x8f);
      uVar3 = *(ulong *)(param_1 + 0x80);
      if (-1 < (char)bVar5) {
        uVar3 = (ulong)bVar5;
      }
      if (uVar3 < uVar11) {
        if (*(long *)(lVar6 + 0x28) == local_70) {
                    /* try { // try from 005bf4a0 to 005bf4c7 has its CatchHandler @ 005bf80c */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/string",0xd57,
                     "__pos <= size()","string index out of bounds");
        }
        goto LAB_005bf808;
      }
      ppuVar15 = (undefined **)*ppuVar1;
      if (-1 < (char)bVar5) {
        ppuVar15 = ppuVar1;
      }
      *(undefined1 *)((long)ppuVar15 + uVar11) = 0x2e;
    }
    if (*(long *)(param_2 + 8) == *(long *)(param_2 + 0x10)) {
      if (*(long *)(lVar6 + 0x28) == local_70) {
                    /* try { // try from 005bf370 to 005bf397 has its CatchHandler @ 005bf818 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                   "!empty()","back() called on an empty vector");
      }
      goto LAB_005bf808;
    }
    local_c8 = ppuVar1;
    lVar14 = FUN_005c2108(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 8),ppuVar1,
                          &DAT_001fb3b8,&local_c8,local_a0);
    *(long *)(param_2 + 0x20) = lVar14 + 0x38;
    iVar7 = FUN_005b9d30(lVar2);
    *(int *)(param_1 + 0x20) = iVar7;
    if (iVar7 != 0xc) {
      lVar14 = *(long *)(param_1 + 0x48);
                    /* try { // try from 005bf3a0 to 005bf3ab has its CatchHandler @ 005bf640 */
      FUN_005bde8c(local_a0,lVar2);
      uStack_d8 = *(undefined8 *)(param_1 + 0x50);
      local_e0 = *(void **)(param_1 + 0x48);
      local_d0 = *(long *)(param_1 + 0x58);
                    /* try { // try from 005bf3bc to 005bf3cb has its CatchHandler @ 005bf638 */
      FUN_004a3cf4(&local_110,"object separator");
                    /* try { // try from 005bf3cc to 005bf3df has its CatchHandler @ 005bf634 */
      FUN_005be2b8(local_f8,param_1,0xc,&local_110);
                    /* try { // try from 005bf3e0 to 005bf3f7 has its CatchHandler @ 005bf630 */
      FUN_005be048(&local_c8,0x65,&local_e0,local_f8,0);
                    /* try { // try from 005bf3f8 to 005bf40f has its CatchHandler @ 005bf62c */
      uVar9 = FUN_005bf834(param_2,lVar14,local_a0,&local_c8);
      goto LAB_005bf140;
    }
    if (local_80 == local_78 * 0x40) {
      if ((long)(local_80 + 1) < 0) goto LAB_005bf56c;
      if (local_80 < 0x3fffffffffffffff) {
        uVar11 = local_78 * 0x80;
        uVar3 = (local_80 & 0xffffffffffffffc0) + 0x40;
        if (uVar11 < uVar3 || uVar11 - uVar3 == 0) {
          uVar11 = uVar3;
        }
      }
      else {
        uVar11 = 0x7fffffffffffffff;
      }
                    /* try { // try from 005beb84 to 005beb8b has its CatchHandler @ 005bf7c8 */
      FUN_005bf890(&local_88,uVar11);
    }
    uVar11 = local_80 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)((long)local_88 + uVar11) =
         *(ulong *)((long)local_88 + uVar11) & (1L << (local_80 & 0x3f) ^ 0xffffffffffffffffU);
    local_80 = local_80 + 1;
                    /* try { // try from 005bebb4 to 005bebbb has its CatchHandler @ 005bf7dc */
    uVar8 = FUN_005b9d30(lVar2);
    *(undefined4 *)(param_1 + 0x20) = uVar8;
    goto LAB_005be6fc;
  default:
    goto switchD_005be718_caseD_a;
  case 0xe:
                    /* try { // try from 005bec0c to 005bec17 has its CatchHandler @ 005bf7c0 */
    FUN_005bde8c(local_a0,lVar2);
    uStack_d8 = *(undefined8 *)(param_1 + 0x50);
    local_e0 = *(void **)(param_1 + 0x48);
    local_d0 = *(long *)(param_1 + 0x58);
                    /* try { // try from 005bec28 to 005bec37 has its CatchHandler @ 005bf7b4 */
    FUN_004a3cf4(&local_110,"value");
                    /* try { // try from 005bec38 to 005bec4b has its CatchHandler @ 005bf784 */
    FUN_005be2b8(local_f8,param_1,0,&local_110);
                    /* try { // try from 005bec4c to 005bec63 has its CatchHandler @ 005bf768 */
    FUN_005be048(&local_c8,0x65,&local_e0,local_f8,0);
    *(undefined1 *)(param_2 + 0x28) = 1;
    if (*(char *)(param_2 + 0x29) == '\0') goto LAB_005bee34;
    puVar10 = (undefined8 *)FUN_0054f64c(0x28);
    *puVar10 = &PTR_FUN_00d25888;
    *(undefined4 *)(puVar10 + 1) = local_c0;
    FUN_005472bc(puVar10 + 2,auStack_b8);
    *puVar10 = &PTR_FUN_00d259d8;
    puVar10[4] = local_a8;
    if (*(long *)(lVar6 + 0x28) == local_70) {
                    /* try { // try from 005beccc to 005bece3 has its CatchHandler @ 005bf748 */
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(puVar10,&PTR_PTR_thunk_FUN_00552768_00d259b0,FUN_005be5f0);
    }
    goto LAB_005bf808;
  case 0xf:
    plVar13 = (long *)(param_1 + 0x48);
    if (*plVar13 == 1) {
                    /* try { // try from 005bf4c8 to 005bf4d3 has its CatchHandler @ 005bf628 */
      FUN_005bde8c(local_a0,lVar2);
      uStack_d8 = *(undefined8 *)(param_1 + 0x50);
      local_e0 = (void *)*plVar13;
      local_d0 = *(long *)(param_1 + 0x58);
                    /* try { // try from 005bf4e4 to 005bf4f3 has its CatchHandler @ 005bf620 */
      FUN_004a3cf4(local_f8,
                   "attempting to parse an empty input; check that your input string or stream contains the expected JSON"
                  );
                    /* try { // try from 005bf4f4 to 005bf50b has its CatchHandler @ 005bf61c */
      FUN_005be048(&local_c8,0x65,&local_e0,local_f8,0);
                    /* try { // try from 005bf50c to 005bf523 has its CatchHandler @ 005bf5f8 */
      uVar9 = FUN_005bf834(param_2,1,local_a0,&local_c8);
      local_c8 = &PTR_FUN_00d25888;
      FUN_00552450(auStack_b8);
      FUN_0055234c(&local_c8);
joined_r0x005bf548:
      if (local_e1 < '\0') {
LAB_005bf17c:
        operator_delete(local_f8[0]);
      }
      goto LAB_005bebc8;
    }
                    /* try { // try from 005bedcc to 005bedd7 has its CatchHandler @ 005bf740 */
    FUN_005bde8c(local_a0,lVar2);
    uStack_d8 = *(undefined8 *)(param_1 + 0x50);
    local_e0 = (void *)*plVar13;
    local_d0 = *(long *)(param_1 + 0x58);
                    /* try { // try from 005bede8 to 005bedf7 has its CatchHandler @ 005bf738 */
    FUN_004a3cf4(&local_110,"value");
                    /* try { // try from 005bedf8 to 005bee0b has its CatchHandler @ 005bf734 */
    FUN_005be2b8(local_f8,param_1,0x10,&local_110);
                    /* try { // try from 005bee0c to 005bee23 has its CatchHandler @ 005bf730 */
    FUN_005be048(&local_c8,0x65,&local_e0,local_f8,0);
    *(undefined1 *)(param_2 + 0x28) = 1;
    if (*(char *)(param_2 + 0x29) == '\0') goto LAB_005bee34;
LAB_005bf588:
    puVar10 = (undefined8 *)FUN_0054f64c(0x28);
    *puVar10 = &PTR_FUN_00d25888;
    *(undefined4 *)(puVar10 + 1) = local_c0;
    FUN_005472bc(puVar10 + 2,auStack_b8);
    *puVar10 = &PTR_FUN_00d259d8;
    puVar10[4] = local_a8;
    if (*(long *)(lVar6 + 0x28) == local_70) {
                    /* try { // try from 005bf5e0 to 005bf5f7 has its CatchHandler @ 005bf72c */
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(puVar10,&PTR_PTR_thunk_FUN_00552768_00d259b0,FUN_005be5f0);
    }
    goto LAB_005bf808;
  }
  if (local_80 != 0) {
    do {
      if ((*(ulong *)((long)local_88 + (local_80 - 1 >> 3 & 0x1ffffffffffffff8)) >>
           (local_80 - 1 & 0x3f) & 1) == 0) {
        iVar7 = FUN_005b9d30(lVar2);
        *(int *)(param_1 + 0x20) = iVar7;
        if (iVar7 == 0xd) {
          iVar7 = FUN_005b9d30(lVar2);
          *(int *)(param_1 + 0x20) = iVar7;
          if (iVar7 != 4) {
            lVar14 = *(long *)(param_1 + 0x48);
                    /* try { // try from 005befdc to 005befe7 has its CatchHandler @ 005bf6ec */
            FUN_005bde8c(local_a0,lVar2);
            uStack_d8 = *(undefined8 *)(param_1 + 0x50);
            local_e0 = *(void **)(param_1 + 0x48);
            local_d0 = *(long *)(param_1 + 0x58);
                    /* try { // try from 005beff8 to 005bf007 has its CatchHandler @ 005bf6e0 */
            FUN_004a3cf4(&local_110,"object key");
                    /* try { // try from 005bf008 to 005bf01b has its CatchHandler @ 005bf6d8 */
            FUN_005be2b8(local_f8,param_1,4,&local_110);
                    /* try { // try from 005bf01c to 005bf033 has its CatchHandler @ 005bf6d4 */
            FUN_005be048(&local_c8,0x65,&local_e0,local_f8,0);
                    /* try { // try from 005bf034 to 005bf04b has its CatchHandler @ 005bf6d0 */
            uVar9 = FUN_005bf834(param_2,lVar14,local_a0,&local_c8);
            goto LAB_005bf140;
          }
          if ((*(int *)(param_1 + 0xb0) != 0x2e) &&
             (uVar11 = *(ulong *)(param_1 + 0xb8), uVar11 != 0xffffffffffffffff)) {
            bVar5 = *(byte *)(param_1 + 0x8f);
            uVar3 = *(ulong *)(param_1 + 0x80);
            if (-1 < (char)bVar5) {
              uVar3 = (ulong)bVar5;
            }
            if (uVar3 < uVar11) {
              if (*(long *)(lVar6 + 0x28) == local_70) {
                    /* try { // try from 005bf240 to 005bf267 has its CatchHandler @ 005bf824 */
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s:%d: assertion %s failed: %s",
                           "../../discord_common/native/third_party/llvm/libcxx/include/string",
                           0xd57,"__pos <= size()","string index out of bounds");
              }
              goto LAB_005bf808;
            }
            ppuVar15 = (undefined **)*ppuVar1;
            if (-1 < (char)bVar5) {
              ppuVar15 = ppuVar1;
            }
            *(undefined1 *)((long)ppuVar15 + uVar11) = 0x2e;
          }
          if (*(long *)(param_2 + 8) == *(long *)(param_2 + 0x10)) {
            if (*(long *)(lVar6 + 0x28) == local_70) {
                    /* try { // try from 005bf0a0 to 005bf0c7 has its CatchHandler @ 005bf828 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                         "!empty()","back() called on an empty vector");
            }
            goto LAB_005bf808;
          }
          local_c8 = ppuVar1;
          lVar14 = FUN_005c2108(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 8),
                                ppuVar1,&DAT_001fb3b8,&local_c8,local_a0);
          *(long *)(param_2 + 0x20) = lVar14 + 0x38;
          iVar7 = FUN_005b9d30(lVar2);
          *(int *)(param_1 + 0x20) = iVar7;
          if (iVar7 != 0xc) {
            lVar14 = *(long *)(param_1 + 0x48);
                    /* try { // try from 005bf0d0 to 005bf0db has its CatchHandler @ 005bf6cc */
            FUN_005bde8c(local_a0,lVar2);
            uStack_d8 = *(undefined8 *)(param_1 + 0x50);
            local_e0 = *(void **)(param_1 + 0x48);
            local_d0 = *(long *)(param_1 + 0x58);
                    /* try { // try from 005bf0ec to 005bf0fb has its CatchHandler @ 005bf6c4 */
            FUN_004a3cf4(&local_110,"object separator");
                    /* try { // try from 005bf0fc to 005bf10f has its CatchHandler @ 005bf6c0 */
            FUN_005be2b8(local_f8,param_1,0xc,&local_110);
                    /* try { // try from 005bf110 to 005bf127 has its CatchHandler @ 005bf6bc */
            FUN_005be048(&local_c8,0x65,&local_e0,local_f8,0);
                    /* try { // try from 005bf128 to 005bf13f has its CatchHandler @ 005bf6b8 */
            uVar9 = FUN_005bf834(param_2,lVar14,local_a0,&local_c8);
            goto LAB_005bf140;
          }
          uVar8 = FUN_005b9d30(lVar2);
          *(undefined4 *)(param_1 + 0x20) = uVar8;
          goto LAB_005be6fc;
        }
        if (iVar7 != 0xb) {
          lVar14 = *(long *)(param_1 + 0x48);
                    /* try { // try from 005bef60 to 005bef6b has its CatchHandler @ 005bf6fc */
          FUN_005bde8c(local_a0,lVar2);
          uStack_d8 = *(undefined8 *)(param_1 + 0x50);
          local_e0 = *(void **)(param_1 + 0x48);
          local_d0 = *(long *)(param_1 + 0x58);
                    /* try { // try from 005bef7c to 005bef8b has its CatchHandler @ 005bf6f4 */
          FUN_004a3cf4(&local_110,"object");
                    /* try { // try from 005bef8c to 005bef9f has its CatchHandler @ 005bf6f0 */
          FUN_005be2b8(local_f8,param_1,0xb,&local_110);
                    /* try { // try from 005befa0 to 005befb7 has its CatchHandler @ 005bf6e8 */
          FUN_005be048(&local_c8,0x65,&local_e0,local_f8,0);
                    /* try { // try from 005befb8 to 005befcf has its CatchHandler @ 005bf6dc */
          uVar9 = FUN_005bf834(param_2,lVar14,local_a0,&local_c8);
          goto LAB_005bf140;
        }
        lVar14 = *(long *)(param_2 + 0x10);
        if (*(long *)(param_2 + 8) == lVar14) {
          if (*(long *)(lVar6 + 0x28) == local_70) {
                    /* try { // try from 005bf064 to 005bf08b has its CatchHandler @ 005bf82c */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                       "!empty()","back() called on an empty vector");
          }
          goto LAB_005bf808;
        }
      }
      else {
                    /* try { // try from 005be914 to 005be947 has its CatchHandler @ 005bf7d8 */
        iVar7 = FUN_005b9d30(lVar2);
        *(int *)(param_1 + 0x20) = iVar7;
        if (iVar7 == 0xd) goto LAB_005be984;
        if (iVar7 != 10) {
          lVar14 = *(long *)(param_1 + 0x48);
                    /* try { // try from 005beea8 to 005beeb3 has its CatchHandler @ 005bf728 */
          FUN_005bde8c(local_a0,lVar2);
          uStack_d8 = *(undefined8 *)(param_1 + 0x50);
          local_e0 = *(void **)(param_1 + 0x48);
          local_d0 = *(long *)(param_1 + 0x58);
                    /* try { // try from 005beec4 to 005beed3 has its CatchHandler @ 005bf720 */
          FUN_004a3cf4(&local_110,"array");
                    /* try { // try from 005beed4 to 005beee7 has its CatchHandler @ 005bf71c */
          FUN_005be2b8(local_f8,param_1,10,&local_110);
                    /* try { // try from 005beee8 to 005beeff has its CatchHandler @ 005bf718 */
          FUN_005be048(&local_c8,0x65,&local_e0,local_f8,0);
                    /* try { // try from 005bef00 to 005bef17 has its CatchHandler @ 005bf700 */
          uVar9 = FUN_005bf834(param_2,lVar14,local_a0,&local_c8);
          goto LAB_005bf140;
        }
        lVar14 = *(long *)(param_2 + 0x10);
        if (*(long *)(param_2 + 8) == lVar14) {
          if (*(long *)(lVar6 + 0x28) == local_70) {
                    /* try { // try from 005bef30 to 005bef57 has its CatchHandler @ 005bf830 */
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s:%d: assertion %s failed: %s",
                       "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                       "!empty()","back() called on an empty vector");
          }
          goto LAB_005bf808;
        }
      }
      local_80 = local_80 - 1;
      *(long *)(param_2 + 0x10) = lVar14 + -8;
      if (local_80 == 0) break;
    } while( true );
  }
  uVar9 = 1;
  goto LAB_005bebc8;
LAB_005be984:
                    /* try { // try from 005be984 to 005beacb has its CatchHandler @ 005bf7dc */
  uVar8 = FUN_005b9d30(lVar2);
  *(undefined4 *)(param_1 + 0x20) = uVar8;
  goto LAB_005be6fc;
switchD_005be718_caseD_a:
                    /* try { // try from 005bece4 to 005becef has its CatchHandler @ 005bf7bc */
  FUN_005bde8c(local_a0,lVar2);
  uStack_d8 = *(undefined8 *)(param_1 + 0x50);
  local_e0 = *(void **)(param_1 + 0x48);
  local_d0 = *(long *)(param_1 + 0x58);
                    /* try { // try from 005bed00 to 005bed0f has its CatchHandler @ 005bf7ac */
  FUN_004a3cf4(&local_110,"value");
                    /* try { // try from 005bed10 to 005bed23 has its CatchHandler @ 005bf780 */
  FUN_005be2b8(local_f8,param_1,0x10,&local_110);
                    /* try { // try from 005bed24 to 005bed3b has its CatchHandler @ 005bf764 */
  FUN_005be048(&local_c8,0x65,&local_e0,local_f8,0);
  *(undefined1 *)(param_2 + 0x28) = 1;
  if (*(char *)(param_2 + 0x29) == '\0') {
LAB_005bee34:
    local_c8 = &PTR_FUN_00d25888;
    FUN_00552450(auStack_b8);
    FUN_0055234c(&local_c8);
    if (local_e1 < '\0') {
      operator_delete(local_f8[0]);
    }
    if (local_f9 < '\0') {
      operator_delete((void *)CONCAT71(uStack_10f,local_110));
    }
    uVar9 = 0;
LAB_005bebc8:
    if (local_88 != (void *)0x0) {
      operator_delete(local_88);
    }
    if (*(long *)(lVar6 + 0x28) == local_70) {
      return uVar9 & 1;
    }
  }
  else {
    puVar10 = (undefined8 *)FUN_0054f64c(0x28);
    *puVar10 = &PTR_FUN_00d25888;
    *(undefined4 *)(puVar10 + 1) = local_c0;
    FUN_005472bc(puVar10 + 2,auStack_b8);
    *puVar10 = &PTR_FUN_00d259d8;
    puVar10[4] = local_a8;
    if (*(long *)(lVar6 + 0x28) == local_70) {
                    /* try { // try from 005beda4 to 005bedbb has its CatchHandler @ 005bf744 */
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(puVar10,&PTR_PTR_thunk_FUN_00552768_00d259b0,FUN_005be5f0);
    }
  }
LAB_005bf808:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005bf834  FUN_005bf834 =====

undefined8 FUN_005bf834(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (*(char *)(param_1 + 0x29) == '\0') {
    return 0;
  }
  uVar1 = FUN_0054f64c(0x28);
  FUN_005c37e8(uVar1,param_4);
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar1,&PTR_PTR_thunk_FUN_00552768_00d259b0,FUN_005be5f0);
}


// ===== 005bf890  FUN_005bf890 =====

void FUN_005bf890(long *param_1,ulong param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  void *local_70;
  long local_68;
  long lStack_60;
  long lStack_58;
  uint local_50;
  long local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((ulong)(param_1[2] * 0x40) < param_2) {
    if ((long)param_2 < 0) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
        uVar3 = FUN_005bf9a8(param_1);
                    /* catch() { ... } // from try @ 005bf8dc with catch @ 005bf978 */
        if (local_70 != (void *)0x0) {
          operator_delete(local_70);
        }
        if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00d0fa5c(uVar3);
        }
      }
      goto LAB_005bf9a4;
    }
    local_70 = (void *)0x0;
    local_68 = 0;
    lStack_60 = 0;
    lVar4 = (param_2 - 1 >> 6) + 1;
                    /* try { // try from 005bf8dc to 005bf913 has its CatchHandler @ 005bf978 */
    local_70 = operator_new(lVar4 * 8);
    local_48 = *param_1;
    local_68 = 0;
    local_40 = 0;
    local_50 = (uint)param_1[1] & 0x3f;
    lStack_58 = local_48 + ((ulong)param_1[1] >> 6) * 8;
    lStack_60 = lVar4;
    FUN_005bf9bc(&local_70,&local_48,&lStack_58);
    pvVar2 = (void *)*param_1;
    lVar5 = param_1[2];
    lVar4 = param_1[1];
    *param_1 = (long)local_70;
    param_1[2] = lStack_60;
    param_1[1] = local_68;
    local_70 = pvVar2;
    local_68 = lVar4;
    lStack_60 = lVar5;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_005bf9a4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005bf9a8  FUN_005bf9a8 =====

void FUN_005bf9a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_004e8250("vector");
}


// ===== 005bf9bc  FUN_005bf9bc =====

void FUN_005bf9bc(long *param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *__src;
  ulong *__dest;
  ulong uVar12;
  undefined1 auStack_88 [16];
  ulong *local_78;
  uint local_70;
  long local_68;
  uint local_60;
  ulong *local_58;
  uint local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  puVar11 = (ulong *)*param_2;
  lVar9 = *param_3;
  uVar4 = *(uint *)(param_2 + 1);
  uVar7 = (ulong)uVar4;
  uVar5 = *(uint *)(param_3 + 1);
  uVar10 = param_1[1];
  uVar12 = (uVar5 - uVar7) + (lVar9 - (long)puVar11) * 8;
  uVar1 = uVar12 + uVar10;
  param_1[1] = uVar1;
  if ((uVar10 == 0) || (0x3f < (uVar1 - 1 ^ uVar10 - 1))) {
    uVar3 = 0;
    if (0x40 < uVar1) {
      uVar3 = uVar1 - 1 >> 6;
    }
    *(undefined8 *)(*param_1 + uVar3 * 8) = 0;
  }
  uVar2 = (uint)uVar10 & 0x3f;
  __dest = (ulong *)(*param_1 + (uVar10 >> 6) * 8);
  if (uVar4 == uVar2) {
    if (0 < (long)uVar12) {
      __src = puVar11;
      if (uVar4 != 0) {
        uVar10 = (ulong)(0x40 - uVar4);
        uVar1 = uVar12;
        if (uVar10 <= uVar12) {
          uVar1 = uVar10;
        }
        uVar12 = uVar12 - uVar1;
        __src = puVar11 + 1;
        uVar10 = 0xffffffffffffffffU >> (uVar10 - uVar1 & 0x3f) & -1L << (uVar7 & 0x3f);
        *__dest = *__dest & (uVar10 ^ 0xffffffffffffffff) | *puVar11 & uVar10;
        __dest = (ulong *)((long)__dest + (uVar1 + uVar7 >> 3 & 0x3ffffff8));
      }
      uVar1 = uVar12 + 0x3f;
      if (-1 < (long)uVar12) {
        uVar1 = uVar12;
      }
      lVar9 = (long)uVar1 >> 6;
      if (0x7e < uVar12 + 0x3f) {
        memmove(__dest,__src,lVar9 * 8);
      }
      lVar8 = uVar12 + lVar9 * -0x40;
      if (0 < lVar8) {
        uVar12 = 0xffffffffffffffff >> (-lVar8 & 0x3fU);
        __dest[lVar9] = __dest[lVar9] & (uVar12 ^ 0xffffffffffffffff) | __src[lVar9] & uVar12;
      }
    }
  }
  else {
    local_78 = __dest;
    local_70 = uVar2;
    local_68 = lVar9;
    local_60 = uVar5;
    local_58 = puVar11;
    local_50 = uVar4;
    FUN_005bfb64(auStack_88,&local_58,&local_68,&local_78);
  }
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005bfb64  FUN_005bfb64 =====

void FUN_005bfb64(long *param_1,long *param_2,long *param_3,long *param_4)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  puVar8 = (ulong *)*param_2;
  uVar7 = *(uint *)(param_2 + 1);
  uVar5 = ((ulong)*(uint *)(param_3 + 1) + (*param_3 - (long)puVar8) * 8) - (ulong)uVar7;
  if ((long)uVar5 < 1) {
    uVar7 = *(uint *)(param_4 + 1);
  }
  else {
    if (uVar7 == 0) {
      uVar11 = (ulong)*(uint *)(param_4 + 1);
    }
    else {
      uVar2 = *(uint *)(param_4 + 1);
      uVar11 = (ulong)(0x40 - uVar7);
      puVar4 = (ulong *)*param_4;
      uVar13 = uVar5;
      if (uVar11 <= uVar5) {
        uVar13 = uVar11;
      }
      uVar9 = (ulong)(0x40 - uVar2);
      uVar12 = uVar13;
      if (uVar9 <= uVar13) {
        uVar12 = uVar9;
      }
      uVar10 = 0xffffffffffffffffU >> (uVar11 - uVar13 & 0x3f) &
               -1L << ((ulong)uVar7 & 0x3f) & *puVar8;
      uVar3 = uVar10 << ((ulong)(uVar2 - uVar7) & 0x3f);
      if (uVar2 < uVar7 || uVar2 - uVar7 == 0) {
        uVar3 = uVar10 >> ((ulong)(uVar7 - uVar2) & 0x3f);
      }
      uVar5 = uVar5 - uVar13;
      puVar8 = (ulong *)((long)puVar4 + (uVar12 + uVar2 >> 3 & 0x3ffffff8));
      uVar7 = uVar2 + (int)uVar12 & 0x3f;
      uVar11 = (ulong)uVar7;
      uVar13 = uVar13 - uVar12;
      *puVar4 = *puVar4 & (0xffffffffffffffffU >> (uVar9 - uVar12 & 0x3f) &
                           -1L << ((ulong)uVar2 & 0x3f) ^ 0xffffffffffffffff) | uVar3;
      *param_4 = (long)puVar8;
      *(uint *)(param_4 + 1) = uVar7;
      if (0 < (long)uVar13) {
        uVar7 = *(uint *)(param_2 + 1);
        uVar9 = *puVar8;
        *(int *)(param_4 + 1) = (int)uVar13;
        uVar11 = uVar13 & 0xffffffff;
        *puVar8 = uVar10 >> (uVar12 + uVar7 & 0x3f) |
                  uVar9 & (0xffffffffffffffffU >> (-uVar13 & 0x3f) ^ 0xffffffffffffffff);
      }
      puVar8 = (ulong *)(*param_2 + 8);
      *param_2 = (long)puVar8;
    }
    uVar7 = (uint)uVar11;
    uVar12 = (ulong)(0x40 - uVar7);
    uVar13 = -1L << (uVar11 & 0x3f);
    if (0x3f < (long)uVar5) {
      uVar9 = uVar5;
      do {
        puVar4 = (ulong *)*param_4;
        uVar10 = *puVar8;
        *puVar4 = *puVar4 & ~uVar13 | uVar10 << (uVar11 & 0x3f);
        uVar5 = uVar9 - 0x40;
        puVar4 = puVar4 + 1;
        uVar3 = *puVar4;
        *param_4 = (long)puVar4;
        puVar8 = (ulong *)(*param_2 + 8);
        *puVar4 = uVar3 & uVar13 | uVar10 >> (uVar12 & 0x3f);
        *param_2 = (long)puVar8;
        bVar1 = 0x7f < uVar9;
        uVar9 = uVar5;
      } while (bVar1);
    }
    if (0 < (long)uVar5) {
      uVar9 = uVar5;
      if (uVar12 <= uVar5) {
        uVar9 = uVar12;
      }
      puVar4 = (ulong *)*param_4;
      uVar10 = *puVar4;
      uVar3 = *puVar8 & 0xffffffffffffffffU >> (-uVar5 & 0x3f);
      uVar7 = uVar7 + (int)uVar9 & 0x3f;
      puVar8 = (ulong *)((long)puVar4 + (uVar9 + uVar11 >> 3 & 0x3ffffff8));
      lVar6 = uVar5 - uVar9;
      *(uint *)(param_4 + 1) = uVar7;
      *param_4 = (long)puVar8;
      *puVar4 = uVar10 & (0xffffffffffffffffU >> (uVar12 - uVar9 & 0x3f) & uVar13 ^
                         0xffffffffffffffff) | uVar3 << (uVar11 & 0x3f);
      if (0 < lVar6) {
        uVar5 = *puVar8;
        uVar7 = (uint)lVar6;
        *(uint *)(param_4 + 1) = uVar7;
        *puVar8 = uVar5 & (0xffffffffffffffffU >> (-lVar6 & 0x3fU) ^ 0xffffffffffffffff) |
                  uVar3 >> (uVar9 & 0x3f);
      }
    }
  }
  lVar6 = *param_4;
  *(uint *)(param_1 + 1) = uVar7;
  *param_1 = lVar6;
  return;
}


// ===== 005bfda0  FUN_005bfda0 =====

undefined8 FUN_005bfda0(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  void *local_88 [2];
  char local_71;
  undefined1 local_70;
  undefined7 uStack_6f;
  char local_59;
  undefined1 local_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar10 = (long *)(param_1 + 8);
  uVar2 = (**(code **)(param_1 + 0x70))
                    (param_1 + 0x60,(ulong)(*(long *)(param_1 + 0x10) - *plVar10) >> 3,0,
                     param_1 + 0x88);
  uVar5 = *(ulong *)(param_1 + 0x28);
  if (uVar5 == *(long *)(param_1 + 0x30) * 0x40) {
    if ((long)(uVar5 + 1) < 0) {
      if (*(long *)(lVar1 + 0x28) != local_48) goto LAB_005c0044;
      uVar3 = FUN_005bf9a8(param_1 + 0x20);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005bff84 with catch @ 005bffd4
                        */
      if (local_59 < '\0') {
        operator_delete((void *)CONCAT71(uStack_6f,local_70));
      }
      if (local_71 < '\0') {
        operator_delete(local_88[0]);
        if ((param_2 & 1) != 0) {
LAB_005c0024:
          FUN_0054f72c(param_1);
        }
      }
      else if ((int)param_2 != 0) goto LAB_005c0024;
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00d0fa5c(uVar3);
      }
      goto LAB_005c0044;
    }
    if (uVar5 < 0x3fffffffffffffff) {
      uVar7 = *(long *)(param_1 + 0x30) * 0x80;
      uVar5 = (uVar5 & 0xffffffffffffffc0) + 0x40;
      if (uVar7 < uVar5 || uVar7 - uVar5 == 0) {
        uVar7 = uVar5;
      }
    }
    else {
      uVar7 = 0x7fffffffffffffff;
    }
    FUN_005bf890(param_1 + 0x20,uVar7);
    uVar5 = *(ulong *)(param_1 + 0x28);
  }
  lVar8 = *(long *)(param_1 + 0x20);
  uVar9 = uVar5 >> 6;
  uVar7 = 1L << (uVar5 & 0x3f);
  *(ulong *)(param_1 + 0x28) = uVar5 + 1;
  if ((uVar2 & 1) == 0) {
    uVar7 = *(ulong *)(lVar8 + uVar9 * 8) & (uVar7 ^ 0xffffffffffffffff);
  }
  else {
    uVar7 = *(ulong *)(lVar8 + uVar9 * 8) | uVar7;
  }
  *(ulong *)(lVar8 + uVar9 * 8) = uVar7;
  local_70 = 1;
  local_58 = FUN_005c0f2c(param_1,&local_70,1);
  FUN_005c1270(plVar10,local_58 + 8);
  if (*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 005bff20 to 005bff47 has its CatchHandler @ 005c0048 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                 "!empty()","back() called on an empty vector");
    }
  }
  else {
    if ((param_2 != 0xffffffffffffffff) &&
       (pcVar6 = *(char **)(*(long *)(param_1 + 0x10) + -8), pcVar6 != (char *)0x0)) {
      uVar5 = (ulong)*pcVar6;
      if (uVar5 < 3) {
        uVar5 = *(ulong *)(&DAT_001fb480 + uVar5 * 8);
      }
      else {
        uVar5 = 1;
      }
      if (uVar5 < param_2) {
        uVar3 = FUN_0054f64c(0x20);
                    /* try { // try from 005bff54 to 005bff5f has its CatchHandler @ 005c0020 */
        FUN_00549320(local_88,param_2);
                    /* try { // try from 005bff60 to 005bff73 has its CatchHandler @ 005c0008 */
        FUN_005c1408(&local_70,"excessive object size: ",local_88);
        puVar4 = (undefined8 *)FUN_005c13bc(plVar10);
                    /* try { // try from 005bff84 to 005bffbf has its CatchHandler @ 005bffd4 */
        FUN_005b289c(uVar3,0x198,&local_70,*puVar4);
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_0054f748(uVar3,&PTR_PTR_thunk_FUN_00552768_00d25838,FUN_005be5f0);
        }
        goto LAB_005c0044;
      }
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return 1;
    }
  }
LAB_005c0044:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005c004c  FUN_005c004c =====

undefined8 FUN_005c004c(long param_1)

{
  undefined1 uVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  ulong uVar6;
  char *pcVar7;
  undefined1 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  byte *pbVar12;
  undefined8 uVar13;
  long lVar14;
  byte *local_b8;
  long *local_b0;
  long lStack_a8;
  long local_a0;
  char *local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  byte *local_78;
  long *local_70;
  long lStack_68;
  long local_60;
  undefined1 local_58 [8];
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar14 = *(long *)(param_1 + 8);
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar14 == lVar11) {
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 005c0360 to 005c0387 has its CatchHandler @ 005c0480 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                 "!empty()","back() called on an empty vector");
    }
    goto LAB_005c0468;
  }
  if (*(long *)(lVar11 + -8) != 0) {
    uVar6 = (**(code **)(param_1 + 0x70))
                      (param_1 + 0x60,(int)((ulong)(lVar11 - lVar14) >> 3) + -1,1);
    if ((uVar6 & 1) == 0) {
      FUN_005b5058(local_58,param_1 + 0x88);
      if (*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) {
        if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 005c0408 to 005c042f has its CatchHandler @ 005c0474 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        goto LAB_005c0468;
      }
      puVar8 = *(undefined1 **)(*(long *)(param_1 + 0x10) + -8);
      uVar1 = *puVar8;
      *puVar8 = local_58[0];
      uVar13 = *(undefined8 *)(puVar8 + 8);
      *(undefined8 *)(puVar8 + 8) = local_50;
      local_58[0] = uVar1;
      local_50 = uVar13;
                    /* try { // try from 005c0130 to 005c0133 has its CatchHandler @ 005c046c */
      FUN_005b2fc4(&local_50);
      lVar14 = *(long *)(param_1 + 8);
      lVar11 = *(long *)(param_1 + 0x10);
    }
    else {
      lVar14 = *(long *)(param_1 + 8);
      lVar11 = *(long *)(param_1 + 0x10);
      if (lVar14 == lVar11) {
        if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 005c00c4 to 005c00eb has its CatchHandler @ 005c0478 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        goto LAB_005c0468;
      }
    }
  }
  if (lVar14 == lVar11) {
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x623,
                 "!empty()","vector::pop_back called on an empty vector");
    }
  }
  else {
    lVar9 = lVar11 + -8;
    *(long *)(param_1 + 0x10) = lVar9;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
    if ((lVar14 != lVar9) && (pbVar12 = *(byte **)(lVar11 + -0x10), pbVar12 != (byte *)0x0)) {
      bVar2 = *pbVar12;
      if (bVar2 - 1 < 2) {
        local_70 = (long *)0x0;
        lStack_68 = 0;
        local_60 = -0x8000000000000000;
        local_78 = pbVar12;
        if (bVar2 == 2) {
          lStack_68 = **(long **)(pbVar12 + 8);
        }
        else if (bVar2 == 1) {
          local_70 = (long *)**(long **)(pbVar12 + 8);
        }
        else {
          local_60 = 0;
        }
        do {
          local_98 = *(char **)(lVar9 + -8);
          local_90 = 0;
          local_88 = 0;
          local_80 = 0x8000000000000000;
          if (*local_98 == '\x02') {
            local_88 = *(undefined8 *)(*(long *)(local_98 + 8) + 8);
          }
          else if (*local_98 == '\x01') {
            local_90 = *(long *)(local_98 + 8) + 8;
          }
          else {
            local_80 = 1;
          }
          uVar6 = FUN_005c1be0(&local_78,&local_98);
          if ((uVar6 & 1) != 0) goto LAB_005c02ec;
          pcVar7 = (char *)FUN_005c16e8(&local_78);
          if (*pcVar7 == '\t') {
            if (*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) {
              if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 005c0440 to 005c0467 has its CatchHandler @ 005c0470 */
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s:%d: assertion %s failed: %s",
                           "../../discord_common/native/third_party/llvm/libcxx/include/vector",
                           0x22a,"!empty()","back() called on an empty vector");
              }
              goto LAB_005c0468;
            }
            local_b8 = local_78;
            lStack_a8 = lStack_68;
            local_b0 = local_70;
            local_a0 = local_60;
            FUN_005c1814(&local_98,*(undefined8 *)(*(long *)(param_1 + 0x10) + -8),&local_b8);
            goto LAB_005c02ec;
          }
          if (*local_78 == 2) {
            lStack_68 = lStack_68 + 0x10;
          }
          else if (*local_78 == 1) {
            if (local_70 == (long *)0x0) {
              if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 005c03d0 to 005c03f7 has its CatchHandler @ 005c047c */
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s:%d: assertion %s failed: %s",
                           "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2
                           ,"__x != nullptr","node shouldn\'t be null");
              }
              goto LAB_005c0468;
            }
            plVar10 = local_70;
            plVar4 = (long *)local_70[1];
            if ((long *)local_70[1] == (long *)0x0) {
              do {
                local_70 = (long *)plVar10[2];
                bVar5 = (long *)*local_70 != plVar10;
                plVar10 = local_70;
              } while (bVar5);
            }
            else {
              do {
                local_70 = plVar4;
                plVar4 = (long *)*local_70;
              } while ((long *)*local_70 != (long *)0x0);
            }
          }
          else {
            local_60 = local_60 + 1;
          }
          lVar9 = *(long *)(param_1 + 0x10);
        } while (*(long *)(param_1 + 8) != lVar9);
        if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 005c0328 to 005c034f has its CatchHandler @ 005c0484 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        goto LAB_005c0468;
      }
    }
LAB_005c02ec:
    if (*(long *)(lVar3 + 0x28) == local_48) {
      return 1;
    }
  }
LAB_005c0468:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005c0488  FUN_005c0488 =====

undefined8 FUN_005c0488(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 local_68 [8];
  undefined8 local_60;
  ulong local_58;
  void *local_50;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_50 = (void *)0x0;
  local_58 = 3;
                    /* try { // try from 005c04bc to 005c04c3 has its CatchHandler @ 005c06e4 */
  pvVar3 = operator_new(0x18);
                    /* try { // try from 005c04c4 to 005c04cf has its CatchHandler @ 005c06d4 */
  FUN_004c55b4(pvVar3,param_2);
                    /* try { // try from 005c04e8 to 005c058b has its CatchHandler @ 005c06f4 */
  local_50 = pvVar3;
  uVar4 = (**(code **)(param_1 + 0x70))
                    (param_1 + 0x60,(ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) >> 3
                     ,4,&local_58);
  uVar6 = *(ulong *)(param_1 + 0x40);
  if (uVar6 == *(long *)(param_1 + 0x48) * 0x40) {
    if ((long)(uVar6 + 1) < 0) {
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 005c06b8 to 005c06bb has its CatchHandler @ 005c06f4 */
        FUN_005bf9a8(param_1 + 0x38);
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005c05e8 with catch @ 005c06bc
                        */
        FUN_004e7ed8();
      }
      goto LAB_005c0718;
    }
    if (uVar6 < 0x3fffffffffffffff) {
      uVar7 = *(long *)(param_1 + 0x48) * 0x80;
      uVar6 = (uVar6 & 0xffffffffffffffc0) + 0x40;
      if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
        uVar7 = uVar6;
      }
    }
    else {
      uVar7 = 0x7fffffffffffffff;
    }
    FUN_005bf890(param_1 + 0x38,uVar7);
    uVar6 = *(ulong *)(param_1 + 0x40);
  }
  lVar8 = *(long *)(param_1 + 0x38);
  uVar7 = 1L << (uVar6 & 0x3f);
  lVar9 = (uVar6 >> 6) * 8;
  *(ulong *)(param_1 + 0x40) = uVar6 + 1;
  if ((uVar4 & 1) == 0) {
    *(ulong *)(lVar8 + lVar9) = *(ulong *)(lVar8 + lVar9) & (uVar7 ^ 0xffffffffffffffff);
  }
  else {
    *(ulong *)(lVar8 + lVar9) = *(ulong *)(lVar8 + lVar9) | uVar7;
    if (*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) {
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 005c0648 to 005c066f has its CatchHandler @ 005c0720 */
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                   "!empty()","back() called on an empty vector");
      }
      goto LAB_005c0718;
    }
    if (*(long *)(*(long *)(param_1 + 0x10) + -8) != 0) {
      FUN_005b5058(local_68,param_1 + 0x88);
      if (*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) {
        if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 005c0680 to 005c06a7 has its CatchHandler @ 005c071c */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        goto LAB_005c0718;
      }
                    /* try { // try from 005c05a4 to 005c05bb has its CatchHandler @ 005c06c0 */
      local_40 = param_2;
      lVar8 = FUN_005c2108(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + -8) + 8),param_2,
                           &DAT_001fb3b8,&local_40,auStack_48);
      puVar5 = (undefined1 *)(lVar8 + 0x38);
      uVar1 = *puVar5;
      uVar10 = *(undefined8 *)(lVar8 + 0x40);
      *puVar5 = local_68[0];
      *(undefined8 *)(lVar8 + 0x40) = local_60;
      *(undefined1 **)(param_1 + 0x50) = puVar5;
      local_68[0] = uVar1;
      local_60 = uVar10;
                    /* try { // try from 005c05e8 to 005c05ef has its CatchHandler @ 005c06bc */
      FUN_005b2fc4(&local_60);
    }
  }
                    /* try { // try from 005c060c to 005c060f has its CatchHandler @ 005c06d0 */
  FUN_005b2fc4(&local_50,local_58 & 0xff);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return 1;
  }
LAB_005c0718:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005c0724  FUN_005c0724 =====

undefined8 FUN_005c0724(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  void *local_88 [2];
  char local_71;
  undefined1 local_70;
  undefined7 uStack_6f;
  char local_59;
  undefined1 local_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar10 = (long *)(param_1 + 8);
  uVar2 = (**(code **)(param_1 + 0x70))
                    (param_1 + 0x60,(ulong)(*(long *)(param_1 + 0x10) - *plVar10) >> 3,2,
                     param_1 + 0x88);
  uVar5 = *(ulong *)(param_1 + 0x28);
  if (uVar5 == *(long *)(param_1 + 0x30) * 0x40) {
    if ((long)(uVar5 + 1) < 0) {
      if (*(long *)(lVar1 + 0x28) != local_48) goto LAB_005c09c8;
      uVar3 = FUN_005bf9a8(param_1 + 0x20);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005c0908 with catch @ 005c0958
                        */
      if (local_59 < '\0') {
        operator_delete((void *)CONCAT71(uStack_6f,local_70));
      }
      if (local_71 < '\0') {
        operator_delete(local_88[0]);
        if ((param_2 & 1) != 0) {
LAB_005c09a8:
          FUN_0054f72c(param_1);
        }
      }
      else if ((int)param_2 != 0) goto LAB_005c09a8;
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00d0fa5c(uVar3);
      }
      goto LAB_005c09c8;
    }
    if (uVar5 < 0x3fffffffffffffff) {
      uVar7 = *(long *)(param_1 + 0x30) * 0x80;
      uVar5 = (uVar5 & 0xffffffffffffffc0) + 0x40;
      if (uVar7 < uVar5 || uVar7 - uVar5 == 0) {
        uVar7 = uVar5;
      }
    }
    else {
      uVar7 = 0x7fffffffffffffff;
    }
    FUN_005bf890(param_1 + 0x20,uVar7);
    uVar5 = *(ulong *)(param_1 + 0x28);
  }
  lVar8 = *(long *)(param_1 + 0x20);
  uVar9 = uVar5 >> 6;
  uVar7 = 1L << (uVar5 & 0x3f);
  *(ulong *)(param_1 + 0x28) = uVar5 + 1;
  if ((uVar2 & 1) == 0) {
    uVar7 = *(ulong *)(lVar8 + uVar9 * 8) & (uVar7 ^ 0xffffffffffffffff);
  }
  else {
    uVar7 = *(ulong *)(lVar8 + uVar9 * 8) | uVar7;
  }
  *(ulong *)(lVar8 + uVar9 * 8) = uVar7;
  local_70 = 2;
  local_58 = FUN_005c0f2c(param_1,&local_70,1);
  FUN_005c1270(plVar10,local_58 + 8);
  if (*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 005c08a4 to 005c08cb has its CatchHandler @ 005c09cc */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                 "!empty()","back() called on an empty vector");
    }
  }
  else {
    if ((param_2 != 0xffffffffffffffff) &&
       (pcVar6 = *(char **)(*(long *)(param_1 + 0x10) + -8), pcVar6 != (char *)0x0)) {
      uVar5 = (ulong)*pcVar6;
      if (uVar5 < 3) {
        uVar5 = *(ulong *)(&DAT_001fb480 + uVar5 * 8);
      }
      else {
        uVar5 = 1;
      }
      if (uVar5 < param_2) {
        uVar3 = FUN_0054f64c(0x20);
                    /* try { // try from 005c08d8 to 005c08e3 has its CatchHandler @ 005c09a4 */
        FUN_00549320(local_88,param_2);
                    /* try { // try from 005c08e4 to 005c08f7 has its CatchHandler @ 005c098c */
        FUN_005c2218(&local_70,"excessive array size: ",local_88);
        puVar4 = (undefined8 *)FUN_005c13bc(plVar10);
                    /* try { // try from 005c0908 to 005c0943 has its CatchHandler @ 005c0958 */
        FUN_005b289c(uVar3,0x198,&local_70,*puVar4);
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_0054f748(uVar3,&PTR_PTR_thunk_FUN_00552768_00d25838,FUN_005be5f0);
        }
        goto LAB_005c09c8;
      }
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return 1;
    }
  }
LAB_005c09c8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005c09d0  FUN_005c09d0 =====

undefined8 FUN_005c09d0(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined1 local_48 [8];
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar6 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 8) == lVar6) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 005c0b88 to 005c0baf has its CatchHandler @ 005c0c34 */
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s:%d: assertion %s failed: %s",
                 "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                 "!empty()","back() called on an empty vector");
    }
    goto LAB_005c0c20;
  }
  if (*(long *)(lVar6 + -8) == 0) {
    *(long **)(param_1 + 0x10) = (long *)(lVar6 + -8);
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  }
  else {
    uVar3 = (**(code **)(param_1 + 0x70))
                      (param_1 + 0x60,(int)((ulong)(lVar6 - *(long *)(param_1 + 8)) >> 3) + -1,3);
    if ((uVar3 & 1) == 0) {
      FUN_005b5058(local_48,param_1 + 0x88);
      if (*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) {
        if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 005c0bf8 to 005c0c1f has its CatchHandler @ 005c0c2c */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        goto LAB_005c0c20;
      }
      puVar4 = *(undefined1 **)(*(long *)(param_1 + 0x10) + -8);
      uVar1 = *puVar4;
      *puVar4 = local_48[0];
      uVar7 = *(undefined8 *)(puVar4 + 8);
      *(undefined8 *)(puVar4 + 8) = local_40;
      local_48[0] = uVar1;
      local_40 = uVar7;
                    /* try { // try from 005c0acc to 005c0acf has its CatchHandler @ 005c0c24 */
      FUN_005b2fc4(&local_40);
      lVar6 = *(long *)(param_1 + 8);
      lVar5 = *(long *)(param_1 + 0x10);
    }
    else {
      lVar6 = *(long *)(param_1 + 8);
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar6 == lVar5) {
        if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 005c0a4c to 005c0a73 has its CatchHandler @ 005c0c30 */
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                     "!empty()","back() called on an empty vector");
        }
        goto LAB_005c0c20;
      }
    }
    if (lVar6 == lVar5) {
LAB_005c0bb0:
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x623,
                   "!empty()","vector::pop_back called on an empty vector");
      }
      goto LAB_005c0c20;
    }
    *(long *)(param_1 + 0x10) = lVar5 + -8;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
    if (((uVar3 & 1) == 0 && lVar6 != lVar5 + -8) && (**(char **)(lVar5 + -0x10) == '\x02')) {
      plVar8 = *(long **)(*(char **)(lVar5 + -0x10) + 8);
      lVar6 = plVar8[1];
      if (*plVar8 == lVar6) goto LAB_005c0bb0;
      lVar5 = 0;
      while (lVar5 + -0x10 != -0x20) {
                    /* try { // try from 005c0b3c to 005c0b3f has its CatchHandler @ 005c0c28 */
        FUN_005b2fc4(lVar6 + lVar5 + -8,*(undefined1 *)(lVar6 + lVar5 + -0x10));
        lVar5 = lVar5 + -0x10;
      }
      plVar8[1] = lVar6 + -0x10;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return 1;
  }
LAB_005c0c20:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005c0c38  FUN_005c0c38 =====

undefined8 FUN_005c0c38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x58) = 1;
  if (*(char *)(param_1 + 0x80) == '\0') {
    return 0;
  }
  uVar1 = FUN_0054f64c(0x20);
  FUN_005c22e4(uVar1,param_4);
                    /* WARNING: Subroutine does not return */
  FUN_0054f748(uVar1,&PTR_PTR_thunk_FUN_00552768_00d25838,FUN_005be5f0);
}


// ===== 005c0c94  FUN_005c0c94 =====

/* WARNING: Removing unreachable block (ram,0x005c0d10) */
/* WARNING: Removing unreachable block (ram,0x005c0dc0) */

void FUN_005c0c94(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

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
  FUN_004a3cf4(local_a0,"out_of_range");
  local_3c[0] = 0x2e;
                    /* try { // try from 005c0cd8 to 005c0ce3 has its CatchHandler @ 005c0e4c */
  FUN_005490bc(local_58,param_2);
                    /* try { // try from 005c0ce4 to 005c0d07 has its CatchHandler @ 005c0e34 */
  FUN_005b2cac(local_88,"[json.exception.",local_a0,local_3c,local_58,&DAT_001d2ea9);
                    /* try { // try from 005c0d18 to 005c0d27 has its CatchHandler @ 005c0e20 */
  FUN_004a3cf4(local_58,&DAT_001b3348);
                    /* try { // try from 005c0d28 to 005c0d3b has its CatchHandler @ 005c0e08 */
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
                    /* try { // try from 005c0d7c to 005c0d7f has its CatchHandler @ 005c0dec */
  FUN_0054723c(param_1 + 2,ppppuVar1);
  *param_1 = &PTR_FUN_00d258b0;
  if (local_59 < '\0') {
    operator_delete(local_70[0]);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 005c0e7c  FUN_005c0e7c =====

void FUN_005c0e7c(undefined8 *param_1,char *param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  size_t sVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  sVar2 = strlen(param_2);
  uVar1 = *(ulong *)(param_3 + 8);
  if (-1 < (char)*(byte *)(param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_3 + 0x17);
  }
  uVar1 = sVar2 + uVar1 + 1;
  if (uVar1 < 0x7ffffffffffffff0) {
    if (0x16 < uVar1) {
                    /* try { // try from 005c0edc to 005c0f0f has its CatchHandler @ 005c0f10 */
      FUN_0051f494(param_1,uVar1 | 0xf);
    }
    FUN_005c232c(param_1,param_2,param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004e823c(param_1);
}


// ===== 005c0f2c  FUN_005c0f2c =====

undefined1  [16] FUN_005c0f2c(long *param_1,undefined1 *param_2,ulong param_3)

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
    local_48 = *param_2;
    FUN_005b4d30(&uStack_40);
                    /* try { // try from 005c0fa0 to 005c0fab has its CatchHandler @ 005c122c */
    if (((param_3 & 1) == 0) &&
       (uVar5 = (*(code *)param_1[0xe])
                          (param_1 + 0xc,(ulong)(param_1[2] - param_1[1]) >> 3,5,&local_48),
       (uVar5 & 1) == 0)) {
LAB_005c10bc:
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
                    /* try { // try from 005c1048 to 005c104b has its CatchHandler @ 005c1228 */
        FUN_005b2fc4((ulong)&local_60 | 8);
        lVar13 = *param_1;
      }
      else {
        pcVar6 = *(char **)(param_1[2] + -8);
        if (pcVar6 == (char *)0x0) goto LAB_005c10bc;
        if (*pcVar6 == '\x02') {
          puVar12 = *(undefined8 **)(pcVar6 + 8);
          puVar1 = (undefined8 *)puVar12[1];
          if (puVar1 < (undefined8 *)puVar12[2]) {
            if (puVar1 == (undefined8 *)0x0) {
              if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c11fc to 005c1223 has its CatchHandler @ 005c1238 */
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s:%d: assertion %s failed: %s",
                           "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                           ,0x23,"__location != nullptr","null pointer given to construct_at");
              }
              goto LAB_005c1260;
            }
            puVar10 = puVar1 + 2;
            puVar1[1] = uStack_40;
            *puVar1 = CONCAT71(uStack_47,local_48);
            local_48 = 0;
            uStack_40 = 0;
            puVar12[1] = puVar10;
          }
          else {
                    /* try { // try from 005c10c8 to 005c10d3 has its CatchHandler @ 005c122c */
            FUN_005c14d4(puVar12,&local_48);
            puVar10 = (undefined8 *)puVar12[1];
          }
          if ((undefined8 *)*puVar12 == puVar10) {
            if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c1154 to 005c117b has its CatchHandler @ 005c126c */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                         "!empty()","back() called on an empty vector");
            }
            goto LAB_005c1260;
          }
          if (param_1[1] == param_1[2]) {
            if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c118c to 005c11b3 has its CatchHandler @ 005c1268 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                         "!empty()","back() called on an empty vector");
            }
            goto LAB_005c1260;
          }
          plVar8 = *(long **)(*(long *)(param_1[2] + -8) + 8);
          lVar13 = plVar8[1];
          if (*plVar8 == lVar13) {
            if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005c11c4 to 005c11eb has its CatchHandler @ 005c1264 */
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s:%d: assertion %s failed: %s",
                         "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,
                         "!empty()","back() called on an empty vector");
            }
            goto LAB_005c1260;
          }
          lVar13 = lVar13 + -0x10;
        }
        else {
          uVar5 = param_1[8] - 1;
          uVar9 = *(ulong *)(param_1[7] + (uVar5 >> 3 & 0x1ffffffffffffff8));
          param_1[8] = uVar5;
          if ((uVar9 >> (uVar5 & 0x3f) & 1) == 0) goto LAB_005c10bc;
          local_48 = 0;
          puVar7 = (undefined1 *)param_1[10];
          uStack_40 = 0;
          uVar2 = *puVar7;
          uStack_68 = *(undefined8 *)(puVar7 + 8);
          *puVar7 = uVar4;
          _local_70 = CONCAT71(uStack_47,uVar2);
          *(undefined8 *)(puVar7 + 8) = uVar11;
                    /* try { // try from 005c10b0 to 005c10b3 has its CatchHandler @ 005c1224 */
          FUN_005b2fc4((ulong)&local_70 | 8);
          lVar13 = param_1[10];
        }
      }
      uVar11 = 1;
    }
                    /* try { // try from 005c1110 to 005c1117 has its CatchHandler @ 005c1234 */
    FUN_005b2fc4(&uStack_40,local_48);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    auVar14._8_8_ = lVar13;
    auVar14._0_8_ = uVar11;
    return auVar14;
  }
LAB_005c1260:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005c1270  FUN_005c1270 =====

void FUN_005c1270(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  void *__dest;
  void *__src;
  ulong __n;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 != (undefined8 *)param_1[2]) {
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = *param_2;
      param_1[1] = puVar3 + 1;
      return;
    }
                    /* try { // try from 005c1358 to 005c137f has its CatchHandler @ 005c13b4 */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
  __src = (void *)*param_1;
  __n = (long)puVar3 - (long)__src;
  uVar1 = ((long)__n >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar2 = __n >> 2;
    if (__n >> 2 <= uVar1) {
      uVar2 = uVar1;
    }
    if (0x7ffffffffffffff7 < __n) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 != 0) {
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00401ad4();
      }
      __dest = operator_new(uVar2 * 8);
      puVar3 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
      *puVar3 = *param_2;
      memmove(__dest,__src,__n);
      *param_1 = __dest;
      param_1[1] = puVar3 + 1;
      param_1[2] = (void *)((long)__dest + uVar2 * 8);
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


// ===== 005c13bc  FUN_005c13bc =====

long FUN_005c13bc(long *param_1)

{
  if (*param_1 != param_1[1]) {
    return param_1[1] + -8;
  }
                    /* try { // try from 005c13dc to 005c1403 has its CatchHandler @ 005c1404 */
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s:%d: assertion %s failed: %s",
             "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x22a,"!empty()",
             "back() called on an empty vector");
}


// ===== 005c1408  FUN_005c1408 =====

void FUN_005c1408(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  size_t sVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  sVar3 = strlen(param_2);
  uVar1 = param_3[1];
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  uVar1 = uVar1 + sVar3;
  if (0x7fffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_004e823c(param_1);
  }
  if (0x16 < uVar1) {
                    /* try { // try from 005c1460 to 005c14b7 has its CatchHandler @ 005c14b8 */
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
  return;
}


// ===== 005c14d4  FUN_005c14d4 =====

void FUN_005c14d4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  lVar12 = param_1[1] - *param_1 >> 4;
  uVar1 = lVar12 + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar8 = param_1[2] - *param_1;
    uVar10 = uVar8 >> 3;
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    if (0x7fffffffffffffef < uVar8) {
      uVar10 = 0xfffffffffffffff;
    }
    if (uVar10 != 0) {
      if (uVar10 >> 0x3c == 0) {
        pvVar5 = operator_new(uVar10 * 0x10);
        uVar14 = param_2[1];
        uVar13 = *param_2;
        *(undefined1 *)param_2 = 0;
        param_2[1] = 0;
        puVar7 = (undefined8 *)((long)pvVar5 + lVar12 * 0x10);
        puVar3 = (undefined1 *)*param_1;
        puVar11 = (undefined1 *)param_1[1];
        puVar2 = puVar7 + 2;
        puVar7[1] = uVar14;
        *puVar7 = uVar13;
        puVar9 = puVar11;
        if (puVar11 != puVar3) {
          do {
            uVar13 = *(undefined8 *)(puVar11 + -0x10);
            puVar9 = puVar11 + -0x10;
            puVar7[-1] = *(undefined8 *)(puVar11 + -8);
            puVar7[-2] = uVar13;
            puVar7 = puVar7 + -2;
            puVar11[-0x10] = 0;
            *(undefined8 *)(puVar11 + -8) = 0;
            puVar11 = puVar9;
          } while (puVar9 != puVar3);
          puVar11 = (undefined1 *)*param_1;
          puVar9 = (undefined1 *)param_1[1];
        }
        *param_1 = (long)puVar7;
        param_1[1] = (long)puVar2;
        param_1[2] = (long)((long)pvVar5 + uVar10 * 0x10);
        while (puVar9 != puVar11) {
                    /* try { // try from 005c15d4 to 005c15d7 has its CatchHandler @ 005c16d0 */
          FUN_005b2fc4(puVar9 + -8,puVar9[-0x10]);
          puVar9 = puVar9 + -0x10;
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
      goto LAB_005c16cc;
    }
  }
  else {
    if (*(long *)(lVar4 + 0x28) != lVar6) goto LAB_005c16cc;
    FUN_005b3754(param_1);
  }
  if (*(long *)(lVar4 + 0x28) == lVar6) {
                    /* try { // try from 005c166c to 005c1693 has its CatchHandler @ 005c16a8 */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
               ,0x23,"__location != nullptr","null pointer given to construct_at");
  }
LAB_005c16cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005c16d4  FUN_005c16d4 =====

void FUN_005c16d4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_004e8250("vector");
}


// ===== 005c16e8  FUN_005c16e8 =====

void FUN_005c16e8(long *param_1)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pcVar2 = (char *)*param_1;
  if (*pcVar2 == '\x02') {
    pcVar2 = (char *)param_1[2];
  }
  else if (*pcVar2 == '\x01') {
    pcVar2 = (char *)(param_1[1] + 0x38);
  }
  else if (param_1[3] != 0) {
    uVar3 = FUN_0054f64c(0x20);
                    /* try { // try from 005c1774 to 005c1783 has its CatchHandler @ 005c17ec */
    FUN_004a3cf4(auStack_50,"cannot get value");
                    /* try { // try from 005c178c to 005c17c7 has its CatchHandler @ 005c17c8 */
    pcVar2 = (char *)FUN_005c1d2c(uVar3,0xd6,auStack_50,*param_1);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar3,&PTR_PTR_thunk_FUN_00552768_00d25970,FUN_005be5f0);
    }
    goto LAB_005c1810;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_005c1810:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pcVar2);
}


// ===== 005c1814  FUN_005c1814 =====

void FUN_005c1814(undefined8 *param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 local_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined8 auStack_68 [2];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if ((byte *)*param_3 != param_2) {
    uVar8 = FUN_0054f64c(0x20);
                    /* try { // try from 005c19e8 to 005c19f7 has its CatchHandler @ 005c1bb8 */
    FUN_004a3cf4(&local_70,"iterator does not fit current value");
                    /* try { // try from 005c19fc to 005c1a3b has its CatchHandler @ 005c1b9c */
    FUN_005c1d2c(uVar8,0xca,&local_70,param_2);
    if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar8,&PTR_PTR_thunk_FUN_00552768_00d25970,FUN_005be5f0);
    }
    goto LAB_005c1bdc;
  }
  bVar1 = *param_2;
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[3] = 0x8000000000000000;
  plVar11 = param_1 + 1;
  *plVar11 = 0;
  if (bVar1 == 2) {
    lVar5 = *(long *)(param_2 + 8);
    puVar12 = (undefined8 *)param_3[2];
    puVar6 = *(undefined8 **)(lVar5 + 8);
    param_1[2] = puVar6;
    if (puVar6 == puVar12) {
      if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s:%d: assertion %s failed: %s",
                   "../../discord_common/native/third_party/llvm/libcxx/include/vector",0x630,
                   "__position != end()",
                   "vector::erase(iterator) called with a non-dereferenceable iterator");
      }
      goto LAB_005c1bdc;
    }
    puVar10 = puVar12;
    if (puVar12 + 2 != puVar6) {
      puVar4 = puVar12 + 2;
      do {
        puVar10 = puVar4;
        uVar13 = puVar10[1];
        uVar8 = *puVar10;
        *(undefined1 *)puVar10 = 0;
        uVar2 = *(undefined1 *)(puVar10 + -2);
        puVar10[1] = 0;
        local_70 = (undefined1)uVar8;
        *(undefined1 *)(puVar10 + -2) = local_70;
        _local_70 = CONCAT71((int7)((ulong)uVar8 >> 8),uVar2);
        auStack_68[0] = puVar10[-1];
        puVar10[-1] = uVar13;
                    /* try { // try from 005c18f0 to 005c18f7 has its CatchHandler @ 005c1b8c */
        FUN_005b2fc4(auStack_68);
        puVar4 = puVar10 + 2;
      } while (puVar10 + 2 != puVar6);
      puVar6 = *(undefined8 **)(lVar5 + 8);
    }
    while (puVar6 != puVar10) {
                    /* try { // try from 005c196c to 005c196f has its CatchHandler @ 005c1b90 */
      FUN_005b2fc4(puVar6 + -1,*(undefined1 *)(puVar6 + -2));
      puVar6 = puVar6 + -2;
    }
    *(undefined8 **)(lVar5 + 8) = puVar10;
    param_1[2] = puVar12;
  }
  else if (bVar1 == 1) {
    lVar5 = *(long *)(param_2 + 8);
    uVar8 = param_3[1];
    *plVar11 = lVar5 + 8;
    lVar5 = FUN_005c2038(lVar5,uVar8);
    *plVar11 = lVar5;
  }
  else {
    uVar9 = (uint)bVar1;
    param_1[3] = 1;
    if (5 < uVar9 - 3) {
      uVar8 = FUN_0054f64c(0x20);
      local_78 = FUN_005b2870(param_2);
                    /* try { // try from 005c1b2c to 005c1b3f has its CatchHandler @ 005c1b88 */
      FUN_005c1f4c(&local_70,"cannot use erase() with ",&local_78);
                    /* try { // try from 005c1b44 to 005c1b83 has its CatchHandler @ 005c1b84 */
      FUN_005b259c(uVar8,0x133,&local_70,param_2);
      if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_0054f748(uVar8,&PTR_PTR_thunk_FUN_00552768_00d25820,FUN_005be5f0);
      }
      goto LAB_005c1bdc;
    }
    if (param_3[3] != 0) {
      uVar8 = FUN_0054f64c(0x20);
                    /* try { // try from 005c1a84 to 005c1a93 has its CatchHandler @ 005c1b98 */
      FUN_004a3cf4(&local_70,"iterator out of range");
                    /* try { // try from 005c1a98 to 005c1ad7 has its CatchHandler @ 005c1b94 */
      FUN_005c1d2c(uVar8,0xcd,&local_70,param_2);
      if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_0054f748(uVar8,&PTR_PTR_thunk_FUN_00552768_00d25970,FUN_005be5f0);
      }
      goto LAB_005c1bdc;
    }
    if (uVar9 == 8) {
      puVar6 = *(undefined8 **)(param_2 + 8);
      if (puVar6 == (undefined8 *)0x0) {
LAB_005c1adc:
        if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s:%d: assertion %s failed: %s",
                     "../../discord_common/native/third_party/llvm/libcxx/include/__memory/construct_at.h"
                     ,0x3f,"__loc != nullptr","null pointer given to destroy_at");
        }
        goto LAB_005c1bdc;
      }
      pvVar7 = (void *)*puVar6;
      if (pvVar7 != (void *)0x0) {
        puVar6[1] = pvVar7;
LAB_005c199c:
        operator_delete(pvVar7);
        puVar6 = *(undefined8 **)(param_2 + 8);
      }
LAB_005c19a4:
      operator_delete(puVar6);
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[0xc] = 0;
      param_2[0xd] = 0;
      param_2[0xe] = 0;
      param_2[0xf] = 0;
    }
    else if (uVar9 == 3) {
      puVar6 = *(undefined8 **)(param_2 + 8);
      if (puVar6 == (undefined8 *)0x0) goto LAB_005c1adc;
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        pvVar7 = (void *)*puVar6;
        goto LAB_005c199c;
      }
      goto LAB_005c19a4;
    }
    *param_2 = 0;
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
LAB_005c1bdc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005c1be0  FUN_005c1be0 =====

void FUN_005c1be0(undefined8 *param_1,undefined8 *param_2)

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
                    /* try { // try from 005c1c8c to 005c1c9b has its CatchHandler @ 005c1d04 */
    FUN_004a3cf4(auStack_50,"cannot compare iterators of different containers");
                    /* try { // try from 005c1ca4 to 005c1cdf has its CatchHandler @ 005c1ce0 */
    uVar2 = FUN_005c1d2c(uVar3,0xd4,auStack_50,*param_1);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_0054f748(uVar3,&PTR_PTR_thunk_FUN_00552768_00d25970,FUN_005be5f0);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 005c1d2c  FUN_005c1d2c =====

/* WARNING: Removing unreachable block (ram,0x005c1da8) */
/* WARNING: Removing unreachable block (ram,0x005c1e58) */

void FUN_005c1d2c(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

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
                    /* try { // try from 005c1d70 to 005c1d7b has its CatchHandler @ 005c1ee4 */
  FUN_005490bc(local_58,param_2);
                    /* try { // try from 005c1d7c to 005c1d9f has its CatchHandler @ 005c1ecc */
  FUN_005b2cac(local_88,"[json.exception.",local_a0,local_3c,local_58,&DAT_001d2ea9);
                    /* try { // try from 005c1db0 to 005c1dbf has its CatchHandler @ 005c1eb8 */
  FUN_004a3cf4(local_58,&DAT_001b3348);
                    /* try { // try from 005c1dc0 to 005c1dd3 has its CatchHandler @ 005c1ea0 */
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
                    /* try { // try from 005c1e14 to 005c1e17 has its CatchHandler @ 005c1e84 */
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


// ===== 005c1f14  FUN_005c1f14 =====

void FUN_005c1f14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d25888;
  FUN_00552450(param_1 + 2);
  FUN_0055234c(param_1);
  operator_delete(param_1);
  return;
}


// ===== 005c1f4c  FUN_005c1f4c =====

void FUN_005c1f4c(undefined8 *param_1,char *param_2,undefined8 *param_3)

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
                    /* try { // try from 005c1f9c to 005c201b has its CatchHandler @ 005c201c */
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


// ===== 005c2038  FUN_005c2038 =====

undefined8 * FUN_005c2038(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_2 == (undefined8 *)0x0) {
                    /* try { // try from 005c20d8 to 005c20ff has its CatchHandler @ 005c2104 */
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s:%d: assertion %s failed: %s",
               "../../discord_common/native/third_party/llvm/libcxx/include/__tree",0xc2,
               "__x != nullptr","node shouldn\'t be null");
  }
  puVar3 = param_2;
  puVar1 = (undefined8 *)param_2[1];
  if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
    do {
      puVar4 = (undefined8 *)puVar3[2];
      bVar2 = (undefined8 *)*puVar4 != puVar3;
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
  FUN_0045db64(param_1[1],param_2);
                    /* try { // try from 005c20ac to 005c20af has its CatchHandler @ 005c2100 */
  FUN_005b2fc4(param_2 + 8,*(undefined1 *)(param_2 + 7));
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    operator_delete((void *)param_2[4]);
  }
  operator_delete(param_2);
  return puVar4;
}


// ===== 005c2108  FUN_005c2108 =====

undefined1  [16]
FUN_005c2108(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  plVar5 = (long *)param_1[1];
  plVar6 = param_1 + 1;
  while (plVar7 = plVar6, plVar5 != (long *)0x0) {
    while( true ) {
      plVar7 = plVar5;
      uVar1 = FUN_0041d7a0(param_2,plVar7 + 4);
      if ((uVar1 >> 7 & 1) != 0) break;
      uVar1 = FUN_0041d7a0(plVar7 + 4,param_2);
      if ((uVar1 >> 7 & 1) == 0) {
        puVar2 = (undefined8 *)*plVar6;
        if (puVar2 == (undefined8 *)0x0) goto LAB_005c2180;
        uVar4 = 0;
        goto LAB_005c21dc;
      }
      plVar6 = plVar7 + 1;
      plVar5 = (long *)*plVar6;
      if ((long *)*plVar6 == (long *)0x0) goto LAB_005c2180;
    }
    plVar6 = plVar7;
    plVar5 = (long *)*plVar7;
  }
LAB_005c2180:
  puVar2 = (undefined8 *)operator_new(0x48);
                    /* try { // try from 005c2194 to 005c2197 has its CatchHandler @ 005c2204 */
  FUN_004c55b4(puVar2 + 4,*param_4);
  puVar2[8] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = plVar7;
  *plVar6 = (long)puVar2;
  plVar5 = (long *)*param_1;
  *(undefined1 *)(puVar2 + 7) = 0;
  puVar3 = puVar2;
  if (*plVar5 != 0) {
    *param_1 = *plVar5;
    puVar3 = (undefined8 *)*plVar6;
  }
  FUN_0041dcd0(param_1[1],puVar3);
  uVar4 = 1;
  param_1[2] = param_1[2] + 1;
LAB_005c21dc:
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = puVar2;
  return auVar8;
}


// ===== 005c2218  FUN_005c2218 =====

void FUN_005c2218(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  size_t sVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  sVar3 = strlen(param_2);
  uVar1 = param_3[1];
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  uVar1 = uVar1 + sVar3;
  if (0x7fffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_004e823c(param_1);
  }
  if (0x16 < uVar1) {
                    /* try { // try from 005c2270 to 005c22c7 has its CatchHandler @ 005c22c8 */
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
  return;
}


