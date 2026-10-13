// ===== 0027189c  FUN_0027189c =====

void FUN_0027189c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar3 = param_1 + 2;
  plVar2 = (long *)param_1[6];
  *param_1 = &PTR_FUN_0037ce78;
  if (plVar2 == plVar3) {
    lVar5 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_002718f8;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_002718f8:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00271920  FUN_00271920 =====

undefined8 * FUN_00271920(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x40);
  plVar3 = *(long **)(param_1 + 0x30);
  *puVar2 = &PTR_FUN_0037ce78;
  if (plVar3 != (long *)0x0) {
    if (plVar3 == (long *)(param_1 + 0x10)) {
      lVar5 = *plVar3;
      puVar2[6] = puVar2 + 2;
      (**(code **)(lVar5 + 0x18))();
      goto LAB_00271998;
    }
                    /* try { // try from 0027197c to 00271997 has its CatchHandler @ 002719c0 */
    plVar3 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  puVar2[6] = plVar3;
LAB_00271998:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002719e8  FUN_002719e8 =====

void FUN_002719e8(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_0037ce78;
  if (plVar4 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar4 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
      if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00271a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
        return;
      }
      goto LAB_00271a94;
    }
    uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
    param_2[6] = uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
LAB_00271a94:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00271a98  FUN_00271a98 =====

void FUN_00271a98(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  plVar3 = (long *)(param_1 + 0x10);
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == plVar3) {
    lVar4 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
        return;
      }
      goto LAB_00271b18;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00271af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_00271b18:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00271b1c  FUN_00271b1c =====

void FUN_00271b1c(void *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)((long)param_1 + 0x10);
  plVar2 = *(long **)((long)param_1 + 0x30);
  if (plVar2 == plVar3) {
    lVar5 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_00271b6c;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_00271b6c:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00271b94  FUN_00271b94 =====

void FUN_00271b94(long param_1,ulong *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong local_40;
  long *local_38;
  char local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = local_40 & 0xffffffffffffff00;
  local_30 = '\0';
  if ((char)param_2[2] != '\0') {
    local_40 = *param_2;
    local_38 = (long *)param_2[1];
    if (local_38 != (long *)0x0) {
      FUN_00259a00(1,local_38 + 1);
    }
    local_30 = '\x01';
  }
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00271c64 to 00271c67 has its CatchHandler @ 00271c68 */
      uVar4 = FUN_0025cd00();
                    /* catch() { ... } // from try @ 00271bf4 with catch @ 00271c68
                       catch() { ... } // from try @ 00271c64 with catch @ 00271c68 */
      FUN_00271d28(local_38,local_30);
      if (*(long *)(lVar1 + 0x28) == local_28) {
        FUN_00255d34(uVar4);
      }
    }
  }
  else {
                    /* try { // try from 00271bf4 to 00271bfb has its CatchHandler @ 00271c68 */
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
    plVar2 = local_38;
    if (((local_30 != '\0') && (local_38 != (long *)0x0)) &&
       (lVar3 = FUN_00255510(0xffffffffffffffff,local_38 + 1), lVar3 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00271c98  FUN_00271c98 =====

void FUN_00271c98(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394a40) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00271ce8  FUN_00271ce8 =====

undefined * FUN_00271ce8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394a48;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00271d28  FUN_00271d28 =====

void FUN_00271d28(long *param_1,char param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((param_2 == '\0') || (param_1 == (long *)0x0)) ||
     (lVar2 = FUN_00255510(0xffffffffffffffff,param_1 + 1), lVar2 != 0)) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00271dbc  FUN_00271dbc =====

void FUN_00271dbc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00271e10  FUN_00271e10 =====

void FUN_00271e10(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037cd58;
  if (param_1[5] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00271e70  FUN_00271e70 =====

void FUN_00271e70(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037cd58;
  if (param_1[5] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0026d198(param_1 + 2);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00271ed8  FUN_00271ed8 =====

undefined8 * FUN_00271ed8(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x18);
  *puVar2 = &PTR_FUN_0037cd58;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = lVar3;
  if (lVar3 != 0) {
    FUN_00255510(1);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = lVar3;
  if (lVar3 != 0) {
    FUN_00259a00(1,lVar3 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00271f74  FUN_00271f74 =====

void FUN_00271f74(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0037cd58;
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[2] = uVar4;
  param_2[3] = lVar2;
  if (lVar2 != 0) {
    FUN_00255510(1);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = lVar2;
  if (lVar2 != 0) {
    FUN_00259a00(1,lVar2 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00272008  FUN_00272008 =====

void FUN_00272008(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x28) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027205c  FUN_0027205c =====

void FUN_0027205c(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)((long)param_1 + 0x28) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0026d198((long)param_1 + 0x10);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002720b8  FUN_002720b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002720b8(long param_1,ulong *param_2)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x19;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong local_d0;
  long *plStack_c8;
  ulong local_c0;
  long *plStack_b8;
  long *local_b0;
  ulong local_a8;
  long *plStack_a0;
  undefined1 local_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  ulong *local_70;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  cVar1 = (char)param_2[2];
  if (cVar1 == '\0') {
    local_d0 = local_d0 & 0xffffffffffffff00;
    lVar7 = *(long *)(param_1 + 0x28);
joined_r0x00272124:
    if (lVar7 != 0) goto LAB_00272128;
LAB_0027220c:
    plVar8 = (long *)0x0;
LAB_00272210:
                    /* try { // try from 00272210 to 00272217 has its CatchHandler @ 002724a0 */
    local_80 = (undefined8 *)operator_new(0x70);
    puVar4 = PTR_typeinfo_name_00394a18;
    uStack_88 = _UNK_001d7f18;
    local_90 = _DAT_001d7f10;
    *(undefined1 *)((long)local_80 + 0x6e) = 0;
    uVar12 = *(undefined8 *)(puVar4 + 0x40);
    uVar14 = *(undefined8 *)(puVar4 + 0x58);
    uVar13 = *(undefined8 *)(puVar4 + 0x50);
    uVar11 = *(undefined8 *)(puVar4 + 0x66);
    uVar10 = *(undefined8 *)(puVar4 + 0x5e);
    local_80[9] = *(undefined8 *)(puVar4 + 0x48);
    local_80[8] = uVar12;
    local_80[0xb] = uVar14;
    local_80[10] = uVar13;
    *(undefined8 *)((long)local_80 + 0x66) = uVar11;
    *(undefined8 *)((long)local_80 + 0x5e) = uVar10;
    uVar12 = *(undefined8 *)puVar4;
    uVar11 = *(undefined8 *)(puVar4 + 0x18);
    uVar10 = *(undefined8 *)(puVar4 + 0x10);
    local_80[1] = *(undefined8 *)(puVar4 + 8);
    *local_80 = uVar12;
    local_80[3] = uVar11;
    local_80[2] = uVar10;
    uVar10 = *(undefined8 *)(puVar4 + 0x20);
    uVar12 = *(undefined8 *)(puVar4 + 0x38);
    uVar11 = *(undefined8 *)(puVar4 + 0x30);
    local_80[5] = *(undefined8 *)(puVar4 + 0x28);
    local_80[4] = uVar10;
    local_80[7] = uVar12;
    local_80[6] = uVar11;
                    /* try { // try from 00272254 to 00272263 has its CatchHandler @ 00272488 */
    margelo::nitro::TypeInfo::demangleName((basic_string *)&local_90,true);
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
    if (plVar8 == (long *)0x0) goto LAB_002723a0;
  }
  else {
    local_d0 = *param_2;
    unaff_x19 = (long *)param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    plStack_c8 = unaff_x19;
    if (unaff_x19 == (long *)0x0) {
      lVar7 = *(long *)(param_1 + 0x28);
      goto joined_r0x00272124;
    }
    FUN_00259a00(1,unaff_x19 + 1);
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_0027220c;
LAB_00272128:
    plVar3 = plStack_c8;
    plVar8 = (long *)std::__ndk1::__shared_weak_count::lock();
    if ((plVar8 == (long *)0x0) || (plVar9 = *(long **)(param_1 + 0x20), plVar9 == (long *)0x0))
    goto LAB_00272210;
    plStack_b8 = *(long **)(param_1 + 0x10);
    local_c0 = *(ulong *)(param_1 + 8);
    local_b0 = *(long **)(param_1 + 0x18);
    if (local_b0 != (long *)0x0) {
      FUN_00255510(1);
    }
    local_a8 = local_a8 & 0xffffffffffffff00;
    local_98 = cVar1 != '\0';
    if ((bool)local_98) {
      plStack_c8 = (long *)0x0;
      plStack_a0 = plVar3;
      local_a8 = local_d0;
    }
    local_70 = (ulong *)0x0;
                    /* try { // try from 0027217c to 00272183 has its CatchHandler @ 00272478 */
    local_70 = (ulong *)operator_new(0x38);
    plVar3 = plStack_a0;
    uVar6 = local_a8;
    *local_70 = (ulong)&PTR_FUN_0037cde8;
    local_70[2] = (ulong)plStack_b8;
    local_70[1] = local_c0;
    local_70[3] = (ulong)local_b0;
    *(undefined8 *)((ulong)&local_c0 | 8) = 0;
    ((undefined8 *)((ulong)&local_c0 | 8))[1] = 0;
    *(undefined1 *)(local_70 + 4) = 0;
    *(undefined1 *)(local_70 + 6) = 0;
    if (cVar1 != '\0') {
      local_a8 = 0;
      plStack_a0 = (long *)0x0;
      *(undefined1 *)(local_70 + 6) = 1;
      local_70[5] = (ulong)plVar3;
      local_70[4] = uVar6;
    }
                    /* try { // try from 002721d8 to 002721e7 has its CatchHandler @ 00272440 */
    (**(code **)(*plVar9 + 0x18))(plVar9,&local_90);
    if (local_70 == &local_90) {
      lVar7 = 4;
      puVar5 = &local_90;
LAB_002722a4:
      (**(code **)(*puVar5 + lVar7 * 8))();
    }
    else if (local_70 != (ulong *)0x0) {
      lVar7 = 5;
      puVar5 = local_70;
      goto LAB_002722a4;
    }
    plVar3 = plStack_a0;
    if (((cVar1 != '\0') && (plStack_a0 != (long *)0x0)) &&
       (lVar7 = FUN_00255510(0xffffffffffffffff,plStack_a0 + 1), lVar7 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (local_b0 != (long *)0x0) {
      uVar6 = FUN_00255510(0xffffffffffffffff);
      plVar3 = plStack_b8;
      if (uVar6 < 2) {
        if ((*(byte *)(local_b0 + 2) & 1) == 0) {
          if (plStack_b8 != (long *)0x0) {
            if ((undefined8 *)*plStack_b8 != (undefined8 *)0x0) {
              (*(code *)**(undefined8 **)*plStack_b8)();
            }
            operator_delete(plVar3);
          }
          plStack_b8 = (long *)0x0;
          *(undefined4 *)(local_b0 + 2) = 1;
          goto LAB_00272344;
        }
        lVar7 = *local_b0;
        plVar3 = local_b0;
      }
      else {
LAB_00272344:
        lVar7 = *local_b0;
        plVar3 = local_b0;
      }
      local_b0 = plVar3;
      if ((lVar7 == 0) && (plVar3[1] == 0)) {
        if (plVar3 != (long *)0x0) {
          std::__ndk1::mutex::~mutex((mutex *)((long)plVar3 + 0x14));
          operator_delete(plVar3);
        }
        local_b0 = (long *)0x0;
      }
    }
  }
  lVar7 = FUN_00255510(0xffffffffffffffff,plVar8 + 1);
  if (lVar7 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
LAB_002723a0:
  if (cVar1 != '\0') {
    if ((plStack_c8 != (long *)0x0) &&
       (lVar7 = FUN_00255510(0xffffffffffffffff,plStack_c8 + 1), lVar7 == 0)) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (((cVar1 != '\0') && (unaff_x19 != (long *)0x0)) &&
       (lVar7 = FUN_00255510(0xffffffffffffffff,unaff_x19 + 1), lVar7 == 0)) {
      (**(code **)(*unaff_x19 + 0x10))(unaff_x19);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002724e0  FUN_002724e0 =====

void FUN_002724e0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394a18) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00272530  FUN_00272530 =====

undefined * FUN_00272530(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394a20;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00272570  FUN_00272570 =====

void FUN_00272570(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*(char *)(param_1 + 0x28) != '\0') &&
      (plVar4 = *(long **)(param_1 + 0x20), plVar4 != (long *)0x0)) &&
     (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    FUN_0026d198(param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002725f8  FUN_002725f8 =====

void FUN_002725f8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037cde8;
  if (((*(char *)(param_1 + 6) != '\0') && (plVar4 = (long *)param_1[5], plVar4 != (long *)0x0)) &&
     (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    FUN_0026d198(param_1 + 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027268c  FUN_0027268c =====

void FUN_0027268c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037cde8;
  if (((*(char *)(param_1 + 6) != '\0') && (plVar4 = (long *)param_1[5], plVar4 != (long *)0x0)) &&
     (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0026d198(param_1 + 2);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00272728  FUN_00272728 =====

undefined8 * FUN_00272728(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined8 *)operator_new(0x38);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x18);
  *puVar3 = &PTR_FUN_0037cde8;
  puVar3[2] = uVar7;
  puVar3[1] = uVar6;
  puVar3[3] = lVar4;
  if (lVar4 != 0) {
    FUN_00255510(1);
  }
  cVar1 = *(char *)(param_1 + 0x30);
  *(undefined1 *)(puVar3 + 4) = 0;
  *(undefined1 *)(puVar3 + 6) = 0;
  if (cVar1 != '\0') {
    lVar4 = *(long *)(param_1 + 0x28);
    puVar3[4] = *(undefined8 *)(param_1 + 0x20);
    puVar3[5] = lVar4;
    if (lVar4 != 0) {
      FUN_00259a00(1,lVar4 + 8);
    }
    *(undefined1 *)(puVar3 + 6) = 1;
  }
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002727dc  FUN_002727dc =====

void FUN_002727dc(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0037cde8;
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[2] = uVar4;
  param_2[3] = lVar2;
  if (lVar2 != 0) {
    FUN_00255510(1);
  }
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  if (*(char *)(param_1 + 0x30) != '\0') {
    lVar2 = *(long *)(param_1 + 0x28);
    param_2[4] = *(undefined8 *)(param_1 + 0x20);
    param_2[5] = lVar2;
    if (lVar2 != 0) {
      FUN_00259a00(1,lVar2 + 8);
    }
    *(undefined1 *)(param_2 + 6) = 1;
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00272888  FUN_00272888 =====

void FUN_00272888(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*(char *)(param_1 + 0x30) != '\0') &&
      (plVar4 = *(long **)(param_1 + 0x28), plVar4 != (long *)0x0)) &&
     (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    FUN_0026d198(param_1 + 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00272910  FUN_00272910 =====

void FUN_00272910(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((*(char *)((long)param_1 + 0x30) != '\0') &&
      (plVar4 = *(long **)((long)param_1 + 0x28), plVar4 != (long *)0x0)) &&
     (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0026d198((long)param_1 + 0x10);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002729a0  FUN_002729a0 =====

void FUN_002729a0(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  runtime_error *this;
  long lVar5;
  ulong local_b0;
  long *plStack_a8;
  undefined4 local_a0 [4];
  Value aVStack_90 [24];
  undefined4 local_78 [6];
  Value aVStack_60 [24];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  cVar3 = *(char *)(param_1 + 0x30);
  local_b0 = local_b0 & 0xffffffffffffff00;
  if (cVar3 == '\0') {
    lVar5 = *(long *)(param_1 + 0x10);
  }
  else {
    plStack_a8 = *(long **)(param_1 + 0x28);
    local_b0 = *(ulong *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    lVar5 = *(long *)(param_1 + 0x10);
  }
  if ((lVar5 == 0) || ((*(byte *)(*(long *)(param_1 + 0x18) + 0x10) & 1) != 0)) {
                    /* try { // try from 00272ad8 to 00272aeb has its CatchHandler @ 00272be8 */
    FUN_00264e5c(local_78,PTR_typeinfo_name_00394a28,1);
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00272af8 to 00272b0b has its CatchHandler @ 00272bc8 */
    std::__ndk1::operator+("Cannot call ",(basic_string *)local_78);
                    /* try { // try from 00272b0c to 00272b1f has its CatchHandler @ 00272bb0 */
    FUN_00263450(aVStack_60,aVStack_90," - the underlying `jsi::Function` has already been deleted!"
                );
                    /* try { // try from 00272b24 to 00272b5b has its CatchHandler @ 00272b7c */
    std::runtime_error::runtime_error(this,(basic_string *)aVStack_60);
    if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
  }
  else {
    plVar1 = *(long **)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    if (cVar3 == '\0') {
      local_a0[0] = 0;
    }
    else {
                    /* try { // try from 00272a14 to 00272a1f has its CatchHandler @ 00272be8 */
      FUN_00270734(local_a0,plVar1,local_b0);
    }
    facebook::jsi::Value::Value(aVStack_60,(Value *)local_a0);
    local_78[0] = 0;
                    /* try { // try from 00272a40 to 00272a5b has its CatchHandler @ 00272b5c */
    (**(code **)(*plVar1 + 0x280))(aVStack_90,plVar1,uVar2,local_78,aVStack_60,1);
    facebook::jsi::Value::~Value((Value *)local_78);
    facebook::jsi::Value::~Value(aVStack_60);
    facebook::jsi::Value::~Value((Value *)local_a0);
    facebook::jsi::Value::~Value(aVStack_90);
    if (((cVar3 != '\0') && (plStack_a8 != (long *)0x0)) &&
       (lVar5 = FUN_00255510(0xffffffffffffffff,plStack_a8 + 1), lVar5 == 0)) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar4 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00272c14  FUN_00272c14 =====

void FUN_00272c14(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394a30) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00272c64  FUN_00272c64 =====

undefined * FUN_00272c64(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394a38;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00272ca4  FUN_00272ca4 =====

void FUN_00272ca4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037cc78;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete((void *)param_1[3]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00272d10  FUN_00272d10 =====

void FUN_00272d10(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037cc78;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00272d78  FUN_00272d78 =====

undefined8 * FUN_00272d78(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x38);
  bVar2 = *(byte *)(param_1 + 8);
  *puVar4 = &PTR_FUN_0037cc78;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 00272dd8 to 00272ddb has its CatchHandler @ 00272e14 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar4 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    puVar4[5] = *(undefined8 *)(param_1 + 0x28);
    puVar4[4] = uVar6;
    *(undefined4 *)(puVar4 + 6) = uVar1;
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00272e3c  FUN_00272e3c =====

void FUN_00272e3c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037cc78;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar4;
    param_2[1] = uVar3;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x30);
    param_2[5] = uVar4;
    param_2[4] = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00272ed4  FUN_00272ed4 =====

void FUN_00272ed4(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00272f34  FUN_00272f34 =====

void FUN_00272f34(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00272f90  FUN_00272f90 =====

void FUN_00272f90(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  IRuntime *pIVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  JSError *pJVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  code *pcVar12;
  IRuntime *pIVar13;
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined8 *local_148 [3];
  undefined8 local_130;
  long *local_128;
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined8 *local_a0 [3];
  basic_string local_88;
  undefined7 uStack_87;
  long *plStack_80;
  void *local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  pIVar13 = (IRuntime *)*param_5;
  uVar10 = *param_6;
  local_a0[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 00272ff0 to 00272fff has its CatchHandler @ 0027348c */
  (**(code **)(*param_3 + 0x160))(&local_88,param_3,local_a0);
  if ((CONCAT71(uStack_87,local_88) == 0) ||
     (lVar6 = __dynamic_cast(CONCAT71(uStack_87,local_88),PTR_typeinfo_00394860,
                             PTR_typeinfo_00394870,0xffffffffffffffff), lVar6 == 0)) {
    lVar6 = 0;
    plVar11 = (long *)0x0;
    if (plStack_80 == (long *)0x0) goto joined_r0x00273078;
  }
  else {
    if (plStack_80 == (long *)0x0) {
      plVar11 = (long *)0x0;
      goto joined_r0x00273078;
    }
    FUN_00259a00(1,plStack_80 + 1);
    plVar11 = plStack_80;
  }
  lVar7 = FUN_00255510(0xffffffffffffffff,plStack_80 + 1);
  if (lVar7 == 0) {
    (**(code **)(*plStack_80 + 0x10))(plStack_80);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x00273078:
  if (local_a0[0] != (undefined8 *)0x0) {
    (**(code **)*local_a0[0])();
  }
  puVar4 = PTR_defaultValue_00394a08;
  if (uVar10 - 1 < 2) {
    pcVar12 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00394a10 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_defaultValue_00394a10), iVar5 != 0)) {
      *(undefined4 *)puVar4 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar4,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00394a10);
    }
    plVar1 = (long *)(lVar6 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar12 = *(code **)(pcVar12 + *plVar1);
    }
    pIVar2 = (IRuntime *)puVar4;
    if (uVar10 != 0) {
      pIVar2 = pIVar13;
    }
                    /* try { // try from 002730cc to 002730d7 has its CatchHandler @ 00273480 */
    facebook::jsi::Value::asString(pIVar2);
                    /* try { // try from 002730e0 to 002730ef has its CatchHandler @ 0027345c */
    (**(code **)(*param_3 + 0x120))(&local_88,param_3,local_148);
    if (local_148[0] != (undefined8 *)0x0) {
      (**(code **)*local_148[0])();
    }
    pIVar13 = pIVar13 + 0x10;
    if (uVar10 < 2) {
      pIVar13 = (IRuntime *)puVar4;
    }
    if (*(int *)pIVar13 == 0) {
      uVar10 = 0;
      uVar9 = 0;
    }
    else {
                    /* try { // try from 00273118 to 0027314b has its CatchHandler @ 002734d0 */
      uVar10 = facebook::jsi::Value::asBool();
      uVar10 = uVar10 & 1;
      uVar9 = 0x100;
    }
    (*pcVar12)(&local_130,plVar1,&local_88,uVar9 | uVar10);
    if (((byte)local_88 & 1) != 0) {
      operator_delete(local_78);
    }
                    /* try { // try from 00273160 to 0027316b has its CatchHandler @ 00273444 */
    FUN_002703c4(param_1,param_3,local_130,local_128);
    if ((local_128 != (long *)0x0) &&
       (lVar6 = FUN_00255510(0xffffffffffffffff,local_128 + 1), lVar6 == 0)) {
      (**(code **)(*local_128 + 0x10))(local_128);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if ((plVar11 != (long *)0x0) &&
       (lVar6 = FUN_00255510(0xffffffffffffffff,plVar11 + 1), lVar6 == 0)) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar3 + 0x28) == local_70) {
      return;
    }
  }
  else {
                    /* try { // try from 0027320c to 0027321b has its CatchHandler @ 002738e0 */
    FUN_00269c28(&local_88,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar6);
    pJVar8 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00273228 to 0027323b has its CatchHandler @ 002738c0 */
    std::__ndk1::operator+("`",&local_88);
                    /* try { // try from 0027323c to 0027324f has its CatchHandler @ 002738a8 */
    FUN_00263450(&local_130,local_148,"` expected between ");
                    /* try { // try from 00273250 to 0027325b has its CatchHandler @ 00273878 */
    std::__ndk1::to_string(1);
                    /* try { // try from 0027325c to 0027326b has its CatchHandler @ 00273854 */
    FUN_00264adc(auStack_118,&local_130,auStack_160);
                    /* try { // try from 0027326c to 0027327f has its CatchHandler @ 00273830 */
    FUN_00263450(auStack_100,auStack_118," and ");
                    /* try { // try from 00273280 to 0027328b has its CatchHandler @ 0027380c */
    std::__ndk1::to_string(2);
                    /* try { // try from 0027328c to 0027329b has its CatchHandler @ 002737e4 */
    FUN_00264adc(auStack_e8,auStack_100,auStack_178);
                    /* try { // try from 0027329c to 002732af has its CatchHandler @ 002734ac */
    FUN_00263450(auStack_d0,auStack_e8," arguments, but received ");
                    /* try { // try from 002732b0 to 002732bb has its CatchHandler @ 00273420 */
    std::__ndk1::to_string(uVar10);
                    /* try { // try from 002732bc to 002732cb has its CatchHandler @ 002733fc */
    FUN_00264adc(auStack_b8,auStack_d0,auStack_190);
                    /* try { // try from 002732cc to 002732df has its CatchHandler @ 002733d8 */
    FUN_00263450(local_a0,auStack_b8,&DAT_001d5be0);
                    /* try { // try from 002732e4 to 0027331f has its CatchHandler @ 00273360 */
    facebook::jsi::JSError::JSError(pJVar8,param_3,local_a0);
    if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar8,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00273908  FUN_00273908 =====

void FUN_00273908(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394a68) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00273958  FUN_00273958 =====

undefined * FUN_00273958(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394a70;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00273998  FUN_00273998 =====

void FUN_00273998(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037c968;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete((void *)param_1[3]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00273a04  FUN_00273a04 =====

void FUN_00273a04(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037c968;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00273a6c  FUN_00273a6c =====

undefined8 * FUN_00273a6c(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x38);
  bVar2 = *(byte *)(param_1 + 8);
  *puVar4 = &PTR_FUN_0037c968;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 00273acc to 00273acf has its CatchHandler @ 00273b08 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar4 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    puVar4[5] = *(undefined8 *)(param_1 + 0x28);
    puVar4[4] = uVar6;
    *(undefined4 *)(puVar4 + 6) = uVar1;
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00273b30  FUN_00273b30 =====

void FUN_00273b30(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037c968;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar4;
    param_2[1] = uVar3;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x30);
    param_2[5] = uVar4;
    param_2[4] = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00273bc8  FUN_00273bc8 =====

void FUN_00273bc8(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00273c28  FUN_00273c28 =====

void FUN_00273c28(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00273c84  FUN_00273c84 =====

void FUN_00273c84(long param_1,Runtime *param_2,long param_3,undefined8 param_4,ulong *param_5)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined ***pppuVar7;
  JSError *pJVar8;
  runtime_error *this;
  long *plVar9;
  ulong uVar10;
  code *pcVar11;
  undefined1 auStack_160 [24];
  long *local_148;
  long *local_140;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 *local_b8 [3];
  undefined **local_a0;
  long *plStack_98;
  long *local_90;
  undefined ***local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar10 = *param_5;
  local_b8[0] = (undefined8 *)
                (**(code **)(*(long *)param_2 + 0x88))(param_2,*(undefined8 *)(param_3 + 8));
                    /* try { // try from 00273ce0 to 00273cef has its CatchHandler @ 002744e4 */
  (**(code **)(*(long *)param_2 + 0x160))(&local_a0,param_2,local_b8);
  plVar3 = plStack_98;
  if ((local_a0 == (undefined **)0x0) ||
     (lVar5 = __dynamic_cast(local_a0,PTR_typeinfo_00394860,PTR_typeinfo_00394870,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar9 = (long *)0x0;
    if (plVar3 != (long *)0x0) goto LAB_00273d3c;
  }
  else if (plVar3 == (long *)0x0) {
    plVar9 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plVar3 + 1);
    plVar9 = plVar3;
LAB_00273d3c:
    lVar6 = FUN_00255510(0xffffffffffffffff,plVar3 + 1);
    if (lVar6 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (local_b8[0] != (undefined8 *)0x0) {
    (**(code **)*local_b8[0])();
  }
  if (uVar10 != 0) {
                    /* try { // try from 00273f64 to 00273f73 has its CatchHandler @ 00274684 */
    FUN_00269c28(&local_a0,*(undefined4 *)(param_1 + 0x30),param_1 + 8,lVar5);
    pJVar8 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00273f80 to 00273f93 has its CatchHandler @ 00274664 */
    std::__ndk1::operator+("`",(basic_string *)&local_a0);
                    /* try { // try from 00273f94 to 00273fa7 has its CatchHandler @ 0027464c */
    FUN_00263450(auStack_118,auStack_130,"` expected ");
                    /* try { // try from 00273fa8 to 00273fb3 has its CatchHandler @ 0027461c */
    std::__ndk1::to_string(0);
                    /* try { // try from 00273fb4 to 00273fc3 has its CatchHandler @ 002745f8 */
    FUN_00264adc(auStack_100,auStack_118,&local_148);
                    /* try { // try from 00273fc4 to 00273fd7 has its CatchHandler @ 002745d4 */
    FUN_00263450(auStack_e8,auStack_100," arguments, but received ");
                    /* try { // try from 00273fd8 to 00273fe3 has its CatchHandler @ 002745b0 */
    std::__ndk1::to_string(uVar10);
                    /* try { // try from 00273fe4 to 00273ff3 has its CatchHandler @ 0027458c */
    FUN_00264adc(auStack_d0,auStack_e8,auStack_160);
                    /* try { // try from 00273ff4 to 00274007 has its CatchHandler @ 00274564 */
    FUN_00263450(local_b8,auStack_d0,&DAT_001d5be0);
                    /* try { // try from 0027400c to 00274047 has its CatchHandler @ 00274504 */
    facebook::jsi::JSError::JSError(pJVar8,param_2,local_b8);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar8,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
    goto LAB_002746a8;
  }
  pcVar11 = *(code **)(param_1 + 0x20);
  uVar10 = *(ulong *)(param_1 + 0x28);
  if (((*
        PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveFileSpecENSt6__ndk110shared_ptrINS0_7PromiseINS5_6vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSC_ISE_EEEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSM_FT0_DpT1_ERNSK_7RuntimeEPKSL_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394960
       & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(
                                 PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveFileSpecENSt6__ndk110shared_ptrINS0_7PromiseINS5_6vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSC_ISE_EEEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSM_FT0_DpT1_ERNSK_7RuntimeEPKSL_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394960
                                 ),
     puVar2 = 
     PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveFileSpecENSt6__ndk110shared_ptrINS0_7PromiseINS5_6vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSC_ISE_EEEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSM_FT0_DpT1_ERNSK_7RuntimeEPKSL_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394958
     , iVar4 != 0)) {
    *(undefined4 *)
     PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveFileSpecENSt6__ndk110shared_ptrINS0_7PromiseINS5_6vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSC_ISE_EEEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSM_FT0_DpT1_ERNSK_7RuntimeEPKSL_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394958
         = 0;
    __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
    __cxa_guard_release(
                       PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveFileSpecENSt6__ndk110shared_ptrINS0_7PromiseINS5_6vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSC_ISE_EEEEEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSM_FT0_DpT1_ERNSK_7RuntimeEPKSL_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394960
                       );
  }
  if ((uVar10 & 1) != 0) {
    pcVar11 = *(code **)(pcVar11 + *(long *)(lVar5 + ((long)uVar10 >> 1)));
  }
                    /* try { // try from 00273da0 to 00273da7 has its CatchHandler @ 002741f0 */
  (*pcVar11)(&local_148);
  plVar3 = local_140;
  iVar4 = (int)local_148[3];
  if (iVar4 == 2) {
                    /* try { // try from 00273e4c to 00273e57 has its CatchHandler @ 002741dc */
    FUN_0026aee4(&local_a0,param_2);
                    /* try { // try from 00273e58 to 00273e67 has its CatchHandler @ 00274188 */
    margelo::nitro::CommonGlobals::Promise::rejected(param_2,(Value *)&local_a0);
LAB_00273e68:
    facebook::jsi::Value::~Value((Value *)&local_a0);
  }
  else {
    if (iVar4 == 1) {
                    /* try { // try from 00273e2c to 00273e37 has its CatchHandler @ 002741dc */
      FUN_002747c8(&local_a0,param_2);
                    /* try { // try from 00273e38 to 00273e47 has its CatchHandler @ 0027418c */
      margelo::nitro::CommonGlobals::Promise::resolved(param_2,(Value *)&local_a0);
      goto LAB_00273e68;
    }
    if (iVar4 != 0) {
                    /* try { // try from 0027408c to 0027409f has its CatchHandler @ 002741dc */
      FUN_00264e5c(&local_a0,PTR_typeinfo_name_003949f0,1);
      this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002740ac to 002740bf has its CatchHandler @ 00274164 */
      std::__ndk1::operator+("Promise<",(basic_string *)&local_a0);
                    /* try { // try from 002740c0 to 002740d3 has its CatchHandler @ 00274148 */
      FUN_00263450(local_b8,auStack_d0,"> has invalid state!");
                    /* try { // try from 002740d8 to 0027410f has its CatchHandler @ 00274110 */
      std::runtime_error::runtime_error(this,(basic_string *)local_b8);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_002746a8;
    }
    if (local_140 == (long *)0x0) {
      local_80 = &local_a0;
      local_a0 = &PTR_FUN_0037c9d8;
      plStack_98 = local_148;
      local_90 = (long *)0x0;
    }
    else {
      FUN_00259a00(1,local_140 + 1);
      local_a0 = &PTR_FUN_0037c9d8;
      plStack_98 = local_148;
      local_90 = plVar3;
      FUN_00259a00(1,plVar3 + 1);
      local_80 = &local_a0;
      lVar5 = FUN_00255510(0xffffffffffffffff,plVar3 + 1);
      if (lVar5 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
                    /* try { // try from 00273e94 to 00273ea7 has its CatchHandler @ 002741a0 */
    margelo::nitro::CommonGlobals::Promise::callConstructor(param_2,(function *)&local_a0);
    if (local_80 == &local_a0) {
      lVar5 = 4;
      pppuVar7 = &local_a0;
LAB_00273ec8:
      (*(code *)(*pppuVar7)[lVar5])();
    }
    else if (local_80 != (undefined ***)0x0) {
      lVar5 = 5;
      pppuVar7 = local_80;
      goto LAB_00273ec8;
    }
  }
  if ((local_140 != (long *)0x0) &&
     (lVar5 = FUN_00255510(0xffffffffffffffff,local_140 + 1), lVar5 == 0)) {
    (**(code **)(*local_140 + 0x10))(local_140);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if ((plVar9 != (long *)0x0) && (lVar5 = FUN_00255510(0xffffffffffffffff,plVar9 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
LAB_002746a8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002746ac  FUN_002746ac =====

void FUN_002746ac(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003949f8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002746fc  FUN_002746fc =====

undefined * FUN_002746fc(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394a00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027473c  FUN_0027473c =====

void FUN_0027473c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
     ) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002747c8  FUN_002747c8 =====

void FUN_002747c8(undefined4 *param_1,long *param_2,long *param_3)

{
  byte *pbVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  (**(code **)(*param_2 + 0x230))
            (&local_78,param_2,(param_3[1] - *param_3 >> 3) * -0x5555555555555555);
  lVar5 = *param_3;
  local_68 = CONCAT44(uStack_74,local_78);
  if (param_3[1] != lVar5) {
    lVar7 = 0;
    uVar6 = 0;
    do {
      pbVar1 = (byte *)(lVar5 + lVar7);
      uVar2 = *(ulong *)(pbVar1 + 8);
      pbVar3 = *(byte **)(pbVar1 + 0x10);
      if ((*pbVar1 & 1) == 0) {
        pbVar3 = pbVar1 + 1;
        uVar2 = (ulong)(*pbVar1 >> 1);
      }
                    /* try { // try from 0027486c to 00274877 has its CatchHandler @ 00274904 */
      (**(code **)(*param_2 + 0x110))(&local_60,param_2,pbVar3,uVar2);
      local_78 = 6;
      local_70 = local_60;
                    /* try { // try from 0027488c to 0027489f has its CatchHandler @ 0027490c */
      (**(code **)(*param_2 + 0x268))(param_2,&local_68,uVar6,&local_78);
      facebook::jsi::Value::~Value((Value *)&local_78);
      lVar5 = *param_3;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x18;
    } while (uVar6 < (ulong)((param_3[1] - lVar5 >> 3) * -0x5555555555555555));
  }
  *(undefined8 *)(param_1 + 2) = local_68;
  *param_1 = 7;
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00274948  FUN_00274948 =====

void FUN_00274948(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0037c9d8;
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002749e0  FUN_002749e0 =====

void FUN_002749e0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0037c9d8;
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00274a6c  FUN_00274a6c =====

void FUN_00274a6c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x18);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_0037c9d8;
  puVar4[1] = uVar1;
  puVar4[2] = lVar2;
  if (lVar2 != 0) {
    FUN_00259a00(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


// ===== 00274ae4  FUN_00274ae4 =====

void FUN_00274ae4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0037c9d8;
  param_2[1] = uVar1;
  param_2[2] = lVar2;
  if (lVar2 != 0) {
    FUN_00259a00(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00274b48  FUN_00274b48 =====

void FUN_00274b48(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x10);
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00274bd4  FUN_00274bd4 =====

void FUN_00274bd4(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)((long)param_1 + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00274c54  FUN_00274c54 =====

void FUN_00274c54(undefined4 *param_1,long param_2,Runtime *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  Runtime *pRVar4;
  ulong uVar5;
  Runtime **ppRVar6;
  void *pvVar7;
  long *plVar8;
  long lVar9;
  Runtime *pRVar10;
  long lVar11;
  long lVar12;
  void *pvVar13;
  Runtime ***pppRVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  IRuntime *pIVar19;
  ulong uVar20;
  void *pvVar21;
  Runtime *local_148;
  Runtime *local_140;
  undefined8 *local_138;
  Runtime *local_130;
  Runtime *local_128;
  Runtime *local_110 [2];
  Runtime *local_100;
  Runtime *local_f8;
  Runtime *local_f0;
  Runtime *local_e0 [2];
  Runtime *local_d0;
  Runtime *local_c8;
  Runtime *local_c0;
  undefined8 local_b8;
  Runtime **local_b0 [2];
  long local_a0 [4];
  Runtime *local_80 [2];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  pIVar19 = (IRuntime *)*param_5;
  facebook::jsi::Value::asObject(pIVar19);
                    /* try { // try from 00274ca0 to 00274caf has its CatchHandler @ 0027569c */
  facebook::jsi::Object::asFunction((IRuntime *)&local_d0);
  if (local_d0 != (Runtime *)0x0) {
    (*(code *)**(undefined8 **)local_d0)();
  }
  local_130 = (Runtime *)0x0;
  local_128 = (Runtime *)0x0;
                    /* try { // try from 00274cc8 to 00274cd3 has its CatchHandler @ 0027567c */
  margelo::nitro::JSICache::getOrCreateCache(param_3);
                    /* try { // try from 00274cd8 to 00274ce3 has its CatchHandler @ 0027566c */
  FUN_0026ce4c(&local_100,local_d0,&local_138);
                    /* try { // try from 00274ce4 to 00274cef has its CatchHandler @ 0027565c */
  FUN_0026d090(&local_130,&local_100);
  if (local_f8 != (Runtime *)0x0) {
    uVar5 = FUN_00255510(0xffffffffffffffff);
    if (uVar5 < 2) {
      if ((*(byte *)((long)local_f8 + 0x10) & 1) == 0) {
        if (local_100 != (Runtime *)0x0) {
          if (*(undefined8 **)local_100 != (undefined8 *)0x0) {
            (**(code **)**(undefined8 **)local_100)();
          }
          operator_delete(local_100);
        }
        local_100 = (Runtime *)0x0;
        *(undefined4 *)((long)local_f8 + 0x10) = 1;
        goto LAB_00274d50;
      }
      lVar11 = *(long *)local_f8;
      pRVar10 = local_f8;
    }
    else {
LAB_00274d50:
      lVar11 = *(long *)local_f8;
      pRVar10 = local_f8;
    }
    if (((lVar11 == 0) && (*(long *)((long)pRVar10 + 8) == 0)) && (pRVar10 != (Runtime *)0x0)) {
      std::__ndk1::mutex::~mutex((mutex *)((long)pRVar10 + 0x14));
      operator_delete(pRVar10);
    }
  }
  std::__ndk1::mutex::unlock();
  if ((local_c8 != (Runtime *)0x0) &&
     (lVar11 = FUN_00255510(0xffffffffffffffff,(long *)((long)local_c8 + 8)), lVar11 == 0)) {
    (**(code **)(*(long *)local_c8 + 0x10))(local_c8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pRVar4 = local_128;
  pRVar10 = local_130;
  local_130 = (Runtime *)0x0;
  local_128 = (Runtime *)0x0;
  local_f8 = pRVar10;
  local_f0 = pRVar4;
  local_100 = param_3;
                    /* try { // try from 00274dd0 to 00274ddb has its CatchHandler @ 0027564c */
  margelo::nitro::Dispatcher::getRuntimeGlobalDispatcher(param_3);
  if (local_140 != (Runtime *)0x0) {
    FUN_00259a00(1,local_140 + 0x10);
  }
  local_c8 = pRVar10;
  local_f8 = (Runtime *)0x0;
  local_f0 = (Runtime *)0x0;
  local_c0 = pRVar4;
  local_d0 = param_3;
  if (local_140 != (Runtime *)0x0) {
    FUN_00259a00(1,local_140 + 0x10);
  }
  local_80[0] = (Runtime *)0x0;
                    /* try { // try from 00274e14 to 00274e1b has its CatchHandler @ 00275628 */
  local_80[0] = (Runtime *)operator_new(0x30);
  *(Runtime **)(local_80[0] + 0x10) = pRVar10;
  *(Runtime **)(local_80[0] + 0x18) = pRVar4;
  *(undefined ***)local_80[0] = &PTR_FUN_0037ca48;
  *(Runtime **)(local_80[0] + 8) = param_3;
  local_c8 = (Runtime *)0x0;
  local_c0 = (Runtime *)0x0;
  *(Runtime **)(local_80[0] + 0x20) = local_148;
  *(Runtime **)(local_80[0] + 0x28) = local_140;
  local_b8 = 0;
  local_b0[0] = (Runtime **)0x0;
  if (((local_140 != (Runtime *)0x0) &&
      (std::__ndk1::__shared_weak_count::__release_weak(), local_140 != (Runtime *)0x0)) &&
     (lVar11 = FUN_00255510(0xffffffffffffffff,local_140 + 8), lVar11 == 0)) {
    (**(code **)(*(long *)local_140 + 0x10))(local_140);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (local_f0 != (Runtime *)0x0) {
    uVar5 = FUN_00255510(0xffffffffffffffff);
    pRVar10 = local_f8;
    if (uVar5 < 2) {
      if ((*(byte *)((long)local_f0 + 0x10) & 1) == 0) {
        if (local_f8 != (Runtime *)0x0) {
          if (*(undefined8 **)local_f8 != (undefined8 *)0x0) {
            (**(code **)**(undefined8 **)local_f8)();
          }
          operator_delete(pRVar10);
        }
        local_f8 = (Runtime *)0x0;
        *(undefined4 *)((long)local_f0 + 0x10) = 1;
        goto LAB_00274edc;
      }
      lVar11 = *(long *)local_f0;
      pRVar10 = local_f0;
    }
    else {
LAB_00274edc:
      lVar11 = *(long *)local_f0;
      pRVar10 = local_f0;
    }
    local_f0 = pRVar10;
    if (((lVar11 == 0) && (*(long *)((long)pRVar10 + 8) == 0)) && (pRVar10 != (Runtime *)0x0)) {
      std::__ndk1::mutex::~mutex((mutex *)((long)pRVar10 + 0x14));
      operator_delete(pRVar10);
    }
  }
  if (local_128 != (Runtime *)0x0) {
    uVar5 = FUN_00255510(0xffffffffffffffff);
    pRVar10 = local_130;
    if (uVar5 < 2) {
      if ((*(byte *)((long)local_128 + 0x10) & 1) == 0) {
        if (local_130 != (Runtime *)0x0) {
          if (*(undefined8 **)local_130 != (undefined8 *)0x0) {
            (**(code **)**(undefined8 **)local_130)();
          }
          operator_delete(pRVar10);
        }
        local_130 = (Runtime *)0x0;
        *(undefined4 *)((long)local_128 + 0x10) = 1;
        goto LAB_00274f6c;
      }
      lVar11 = *(long *)local_128;
      pRVar10 = local_128;
    }
    else {
LAB_00274f6c:
      lVar11 = *(long *)local_128;
      pRVar10 = local_128;
    }
    local_128 = pRVar10;
    if (((lVar11 == 0) && (*(long *)((long)pRVar10 + 8) == 0)) && (pRVar10 != (Runtime *)0x0)) {
      std::__ndk1::mutex::~mutex((mutex *)((long)pRVar10 + 0x14));
      operator_delete(pRVar10);
    }
  }
  if (local_138 != (undefined8 *)0x0) {
    (**(code **)*local_138)();
  }
  lVar11 = *(long *)(param_2 + 8);
  if (local_80[0] == (Runtime *)0x0) {
    ppRVar6 = local_e0;
LAB_00274fdc:
    *ppRVar6 = (Runtime *)0x0;
  }
  else {
    if (local_80[0] != (Runtime *)local_a0) {
      ppRVar6 = local_80;
      local_e0[0] = local_80[0];
      goto LAB_00274fdc;
    }
    local_e0[0] = (Runtime *)&local_100;
                    /* try { // try from 00274ff4 to 00274fff has its CatchHandler @ 00275604 */
    (**(code **)(local_a0[0] + 0x18))(local_a0,&local_100);
  }
  pRVar10 = local_e0[0];
  local_b0[0] = (Runtime **)0x0;
  if (local_e0[0] != (Runtime *)0x0) {
                    /* try { // try from 0027500c to 00275013 has its CatchHandler @ 00275610 */
    ppRVar6 = (Runtime **)operator_new(0x40);
    *ppRVar6 = (Runtime *)&PTR_FUN_0037cb68;
    if (pRVar10 == (Runtime *)&local_100) {
      ppRVar6[6] = (Runtime *)(ppRVar6 + 2);
                    /* try { // try from 00275048 to 00275057 has its CatchHandler @ 00275600 */
      (**(code **)(local_100 + 0x18))(&local_100);
      local_b0[0] = ppRVar6;
    }
    else {
      ppRVar6[6] = pRVar10;
      local_e0[0] = (Runtime *)0x0;
      local_b0[0] = ppRVar6;
    }
  }
                    /* try { // try from 0027505c to 00275063 has its CatchHandler @ 00275620 */
  std::__ndk1::mutex::lock();
  if (*(int *)(lVar11 + 0x18) == 1) {
    if (local_b0[0] != (Runtime **)0x0) {
                    /* try { // try from 00275084 to 00275127 has its CatchHandler @ 0027572c */
      (**(code **)(*local_b0[0] + 0x30))(local_b0[0],lVar11);
LAB_00275260:
      std::__ndk1::mutex::unlock();
      if (local_b0[0] == &local_d0) {
        lVar11 = 4;
        ppRVar6 = &local_d0;
LAB_002752c4:
        (**(code **)(*ppRVar6 + lVar11 * 8))();
      }
      else if (local_b0[0] != (Runtime **)0x0) {
        lVar11 = 5;
        ppRVar6 = local_b0[0];
        goto LAB_002752c4;
      }
      if (local_e0[0] == (Runtime *)&local_100) {
        lVar11 = 4;
        pRVar10 = (Runtime *)&local_100;
LAB_002752f4:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_e0[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_e0[0];
        goto LAB_002752f4;
      }
      if (local_80[0] == (Runtime *)local_a0) {
        lVar11 = 4;
        pRVar10 = (Runtime *)local_a0;
LAB_00275324:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_80[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_80[0];
        goto LAB_00275324;
      }
      FUN_0026c2bc(local_a0,param_3,pIVar19 + 0x10);
      lVar11 = *(long *)(param_2 + 8);
      if (local_80[0] == (Runtime *)0x0) {
        ppRVar6 = local_110;
LAB_0027536c:
        *ppRVar6 = (Runtime *)0x0;
      }
      else {
        if (local_80[0] != (Runtime *)local_a0) {
          ppRVar6 = local_80;
          local_110[0] = local_80[0];
          goto LAB_0027536c;
        }
        local_110[0] = (Runtime *)&local_130;
                    /* try { // try from 00275384 to 0027538f has its CatchHandler @ 002755fc */
        (**(code **)(local_a0[0] + 0x18))(local_a0,&local_130);
      }
      pRVar10 = local_110[0];
      local_b0[0] = (Runtime **)0x0;
      if (local_110[0] != (Runtime *)0x0) {
                    /* try { // try from 0027539c to 002753a3 has its CatchHandler @ 00275608 */
        ppRVar6 = (Runtime **)operator_new(0x40);
        *ppRVar6 = (Runtime *)&PTR_FUN_00384d40;
        if (pRVar10 == (Runtime *)&local_130) {
          ppRVar6[6] = (Runtime *)(ppRVar6 + 2);
                    /* try { // try from 002753d8 to 002753e7 has its CatchHandler @ 002755f8 */
          (**(code **)(local_130 + 0x18))(&local_130);
          local_b0[0] = ppRVar6;
        }
        else {
          ppRVar6[6] = pRVar10;
          local_110[0] = (Runtime *)0x0;
          local_b0[0] = ppRVar6;
        }
      }
                    /* try { // try from 002753ec to 002753f3 has its CatchHandler @ 00275618 */
      std::__ndk1::mutex::lock();
      if (*(int *)(lVar11 + 0x18) == 2) {
        if (local_b0[0] == (Runtime **)0x0) goto LAB_002755a4;
                    /* try { // try from 00275410 to 00275453 has its CatchHandler @ 002756c0 */
        (**(code **)(*local_b0[0] + 0x30))(local_b0[0],lVar11);
      }
      else {
        uVar5 = *(ulong *)(lVar11 + 0x40);
        if (uVar5 < *(ulong *)(lVar11 + 0x48)) {
          if (local_b0[0] == (Runtime **)0x0) {
            pppRVar14 = (Runtime ***)(uVar5 + 0x20);
LAB_0027545c:
            *pppRVar14 = (Runtime **)0x0;
          }
          else {
            if (local_b0[0] != &local_d0) {
              pppRVar14 = local_b0;
              *(Runtime ***)(uVar5 + 0x20) = local_b0[0];
              goto LAB_0027545c;
            }
            *(ulong *)(uVar5 + 0x20) = uVar5;
                    /* try { // try from 00275474 to 0027547b has its CatchHandler @ 002755ec */
            (**(code **)(*local_b0[0] + 0x18))(local_b0[0],uVar5);
          }
          lVar9 = uVar5 + 0x30;
        }
        else {
          lVar9 = FUN_0026c714(lVar11 + 0x38,&local_d0);
        }
        *(long *)(lVar11 + 0x40) = lVar9;
      }
      std::__ndk1::mutex::unlock();
      if (local_b0[0] == &local_d0) {
        lVar11 = 4;
        ppRVar6 = &local_d0;
LAB_002754b8:
        (**(code **)(*ppRVar6 + lVar11 * 8))();
      }
      else if (local_b0[0] != (Runtime **)0x0) {
        lVar11 = 5;
        ppRVar6 = local_b0[0];
        goto LAB_002754b8;
      }
      if (local_110[0] == (Runtime *)&local_130) {
        lVar11 = 4;
        pRVar10 = (Runtime *)&local_130;
LAB_002754e8:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_110[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_110[0];
        goto LAB_002754e8;
      }
      *param_1 = 0;
      if (local_80[0] == (Runtime *)local_a0) {
        lVar11 = 4;
        pRVar10 = (Runtime *)local_a0;
LAB_0027551c:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_80[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_80[0];
        goto LAB_0027551c;
      }
      if (*(long *)(lVar3 + 0x28) == local_70) {
        return;
      }
      goto LAB_002757e8;
    }
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_002757e8;
                    /* try { // try from 002755a0 to 002755a3 has its CatchHandler @ 0027572c */
    FUN_0025cd00();
LAB_002755a4:
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_002757e8;
                    /* try { // try from 002755b8 to 002755bb has its CatchHandler @ 002756c0 */
    FUN_0025cd00();
LAB_002755bc:
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_002757e8;
                    /* try { // try from 002755d0 to 002755eb has its CatchHandler @ 0027572c */
    FUN_0027587c();
  }
  else {
    uVar5 = *(ulong *)(lVar11 + 0x28);
    pppRVar14 = local_b0;
    if (uVar5 < *(ulong *)(lVar11 + 0x30)) {
      if (local_b0[0] == (Runtime **)0x0) {
        pppRVar14 = (Runtime ***)(uVar5 + 0x20);
LAB_00275130:
        *pppRVar14 = (Runtime **)0x0;
      }
      else {
        if (local_b0[0] != &local_d0) {
          *(Runtime ***)(uVar5 + 0x20) = local_b0[0];
          goto LAB_00275130;
        }
        *(ulong *)(uVar5 + 0x20) = uVar5;
                    /* try { // try from 00275184 to 0027518b has its CatchHandler @ 002755f4 */
        (**(code **)(*local_b0[0] + 0x18))(local_b0[0],uVar5);
      }
      lVar9 = uVar5 + 0x30;
LAB_0027525c:
      *(long *)(lVar11 + 0x28) = lVar9;
      goto LAB_00275260;
    }
    uVar17 = *(ulong *)(lVar11 + 0x20);
    lVar9 = (long)(uVar5 - uVar17) >> 4;
    uVar20 = lVar9 * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar20) goto LAB_002755bc;
    lVar12 = (long)(*(ulong *)(lVar11 + 0x30) - uVar17) >> 4;
    uVar16 = lVar12 * 0x5555555555555556;
    if (uVar16 < uVar20 || uVar16 - uVar20 == 0) {
      uVar16 = uVar20;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar12 * -0x5555555555555555)) {
      uVar16 = 0x555555555555555;
    }
    if (uVar16 == 0) {
      pvVar7 = (void *)0x0;
LAB_0027513c:
      pvVar21 = (void *)((long)pvVar7 + lVar9 * 0x10);
      if (local_b0[0] == (Runtime **)0x0) {
        pppRVar14 = (Runtime ***)((long)pvVar21 + 0x20);
LAB_0027516c:
        *pppRVar14 = (Runtime **)0x0;
      }
      else {
        if (local_b0[0] != &local_d0) {
          *(Runtime ***)((long)pvVar21 + 0x20) = local_b0[0];
          goto LAB_0027516c;
        }
        *(void **)((long)pvVar21 + 0x20) = pvVar21;
                    /* try { // try from 002751a0 to 002751ab has its CatchHandler @ 002755f0 */
        (**(code **)(local_d0 + 0x18))(&local_d0,pvVar21);
        uVar17 = *(ulong *)(lVar11 + 0x20);
        uVar5 = *(ulong *)(lVar11 + 0x28);
      }
      pvVar13 = pvVar21;
      if (uVar5 != uVar17) {
        lVar9 = 0;
        uVar20 = uVar5;
        do {
          lVar12 = uVar5 + lVar9;
          uVar1 = (long)pvVar21 + lVar9;
          lVar15 = *(long *)(lVar12 + -0x10);
          if (lVar15 == 0) {
LAB_002751cc:
            *(undefined8 *)(uVar1 - 0x10) = 0;
          }
          else {
            if (lVar12 + -0x30 != lVar15) {
              *(long *)(uVar1 - 0x10) = lVar15;
              uVar1 = uVar20;
              goto LAB_002751cc;
            }
            *(ulong *)(uVar1 - 0x10) = uVar1 - 0x30;
                    /* try { // try from 00275220 to 00275223 has its CatchHandler @ 002756bc */
            (**(code **)(**(long **)(lVar12 + -0x10) + 0x18))();
          }
          lVar9 = lVar9 + -0x30;
          uVar20 = uVar20 - 0x30;
        } while (uVar5 + lVar9 != uVar17);
        pvVar13 = (void *)((long)pvVar21 + lVar9);
      }
      lVar9 = (long)pvVar21 + 0x30;
      plVar2 = *(long **)(lVar11 + 0x20);
      plVar18 = *(long **)(lVar11 + 0x28);
      *(void **)(lVar11 + 0x20) = pvVar13;
      *(long *)(lVar11 + 0x28) = lVar9;
      *(void **)(lVar11 + 0x30) = (void *)((long)pvVar7 + uVar16 * 0x30);
joined_r0x0027524c:
      if (plVar18 != plVar2) {
        plVar8 = (long *)plVar18[-2];
        plVar18 = plVar18 + -6;
        if (plVar18 != plVar8) goto code_r0x002752b0;
        lVar12 = 4;
        plVar8 = plVar18;
        goto LAB_0027528c;
      }
      if (plVar2 != (long *)0x0) {
        operator_delete(plVar2);
      }
      goto LAB_0027525c;
    }
    if (uVar16 < 0x555555555555556) {
      pvVar7 = operator_new(uVar16 * 0x30);
      goto LAB_0027513c;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    FUN_00260a2c();
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00275474 with catch @ 002755ec */
    FUN_0025ad9c();
  }
LAB_002757e8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x002752b0:
  if (plVar8 != (long *)0x0) {
    lVar12 = 5;
LAB_0027528c:
    (**(code **)(*plVar8 + lVar12 * 8))();
  }
  goto joined_r0x0027524c;
}


// ===== 002757ec  FUN_002757ec =====

void FUN_002757ec(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003949e0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0027583c  FUN_0027583c =====

undefined * FUN_0027583c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003949e8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027587c  FUN_0027587c =====

void FUN_0027587c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_00260abc("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002758b4  FUN_002758b4 =====

void FUN_002758b4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  plVar3 = param_1 + 2;
  plVar2 = (long *)param_1[6];
  *param_1 = &PTR_FUN_0037cb68;
  if (plVar2 == plVar3) {
    lVar4 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == lVar5) {
        return;
      }
      goto LAB_00275940;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00275920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_00275940:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00275944  FUN_00275944 =====

void FUN_00275944(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar3 = param_1 + 2;
  plVar2 = (long *)param_1[6];
  *param_1 = &PTR_FUN_0037cb68;
  if (plVar2 == plVar3) {
    lVar5 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_002759a0;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_002759a0:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002759c8  FUN_002759c8 =====

undefined8 * FUN_002759c8(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x40);
  plVar3 = *(long **)(param_1 + 0x30);
  *puVar2 = &PTR_FUN_0037cb68;
  if (plVar3 != (long *)0x0) {
    if (plVar3 == (long *)(param_1 + 0x10)) {
      lVar5 = *plVar3;
      puVar2[6] = puVar2 + 2;
      (**(code **)(lVar5 + 0x18))();
      goto LAB_00275a40;
    }
                    /* try { // try from 00275a24 to 00275a3f has its CatchHandler @ 00275a68 */
    plVar3 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  puVar2[6] = plVar3;
LAB_00275a40:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00275a90  FUN_00275a90 =====

void FUN_00275a90(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_0037cb68;
  if (plVar4 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar4 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
      if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00275b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
        return;
      }
      goto LAB_00275b3c;
    }
    uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
    param_2[6] = uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
LAB_00275b3c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00275b40  FUN_00275b40 =====

void FUN_00275b40(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  plVar3 = (long *)(param_1 + 0x10);
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == plVar3) {
    lVar4 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
        return;
      }
      goto LAB_00275bc0;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00275ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_00275bc0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00275bc4  FUN_00275bc4 =====

void FUN_00275bc4(void *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)((long)param_1 + 0x10);
  plVar2 = *(long **)((long)param_1 + 0x30);
  if (plVar2 == plVar3) {
    lVar5 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_00275c14;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_00275c14:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00275c3c  FUN_00275c3c =====

void FUN_00275c3c(long param_1,long *param_2)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *local_50;
  byte *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (byte *)0x0;
  local_48 = (byte *)0x0;
  local_40 = 0;
  FUN_00275de0(&local_50,*param_2,param_2[1],(param_2[1] - *param_2 >> 3) * -0x5555555555555555);
  plVar4 = *(long **)(param_1 + 0x30);
  if (plVar4 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      uVar5 = FUN_0025cd00();
                    /* catch() { ... } // from try @ 00275c9c with catch @ 00275d28 */
      FUN_00275f3c(&local_50);
      if (*(long *)(lVar1 + 0x28) == local_38) {
        FUN_00255d34(uVar5);
      }
    }
  }
  else {
                    /* try { // try from 00275c9c to 00275d27 has its CatchHandler @ 00275d28 */
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_50);
    pbVar3 = local_50;
    pbVar6 = local_48;
    if (local_50 != (byte *)0x0) {
      while (pbVar2 = pbVar6, pbVar2 != pbVar3) {
        pbVar6 = pbVar2 + -0x18;
        if ((*pbVar6 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -8));
        }
      }
      local_48 = pbVar3;
      operator_delete(local_50);
    }
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00275d50  FUN_00275d50 =====

void FUN_00275d50(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394998) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00275da0  FUN_00275da0 =====

undefined * FUN_00275da0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003949a0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00275de0  FUN_00275de0 =====

void FUN_00275de0(undefined8 *param_1,byte *param_2,byte *param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_80;
  undefined8 *local_78;
  undefined1 local_70;
  undefined8 *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **ppbStack_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **local_58;
  undefined1 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_70 = 0;
  local_78 = param_1;
  if (param_4 != 0) {
    if (0xaaaaaaaaaaaaaaa < param_4) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00275efc to 00275eff has its CatchHandler @ 00275f00 */
        uVar2 = FUN_00275ff4();
                    /* catch() { ... } // from try @ 00275e3c with catch @ 00275f00
                       catch() { ... } // from try @ 00275efc with catch @ 00275f00 */
        FUN_002760b8(&local_78);
        if (*(long *)(lVar1 + 0x28) == local_48) {
          FUN_00255d34(uVar2);
        }
      }
      goto LAB_00275f38;
    }
                    /* try { // try from 00275e3c to 00275e3f has its CatchHandler @ 00275f00 */
    local_80 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               operator_new(param_4 * 0x18);
    *param_1 = local_80;
    param_1[1] = local_80;
    local_50 = 0;
    local_68 = param_1 + 2;
    *local_68 = local_80 + param_4 * 0x18;
    ppbStack_60 = &local_88;
    local_58 = &local_80;
    local_88 = local_80;
    if (param_2 != param_3) {
      do {
        if ((*param_2 & 1) == 0) {
          uVar3 = *(undefined8 *)(param_2 + 8);
          uVar2 = *(undefined8 *)param_2;
          *(undefined8 *)(local_80 + 0x10) = *(undefined8 *)(param_2 + 0x10);
          *(undefined8 *)(local_80 + 8) = uVar3;
          *(undefined8 *)local_80 = uVar2;
        }
        else {
                    /* try { // try from 00275eb0 to 00275eb3 has its CatchHandler @ 00275f08 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external(local_80,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
        }
        param_2 = param_2 + 0x18;
        local_80 = local_80 + 0x18;
      } while (param_2 != param_3);
    }
    param_1[1] = local_80;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00275f38:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00275f3c  FUN_00275f3c =====

void FUN_00275f3c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  pbVar4 = (byte *)*param_1;
  if (pbVar4 == (byte *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else {
    pbVar3 = (byte *)param_1[1];
    pbVar5 = pbVar4;
    if (pbVar3 != pbVar4) {
      do {
        pbVar5 = pbVar3 + -0x18;
        if ((*pbVar5 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -8));
        }
        pbVar3 = pbVar5;
      } while (pbVar5 != pbVar4);
      pbVar5 = (byte *)*param_1;
    }
    param_1[1] = pbVar4;
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pbVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00275ff4  FUN_00275ff4 =====

void FUN_00275ff4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_00260abc("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027602c  FUN_0027602c =====

void FUN_0027602c(long param_1)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x18) == '\0') {
    pbVar4 = (byte *)**(undefined8 **)(param_1 + 8);
    pbVar5 = (byte *)**(undefined8 **)(param_1 + 0x10);
    while (pbVar2 = pbVar5, pbVar2 != pbVar4) {
      pbVar5 = pbVar2 + -0x18;
      if ((*pbVar5 & 1) != 0) {
        operator_delete(*(void **)(pbVar2 + -8));
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 002760b8  FUN_002760b8 =====

void FUN_002760b8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 1) == '\0') {
    puVar4 = (undefined8 *)*param_1;
    pbVar5 = (byte *)*puVar4;
    if (pbVar5 != (byte *)0x0) {
      pbVar3 = (byte *)puVar4[1];
      pbVar6 = pbVar5;
      if (pbVar3 != pbVar5) {
        do {
          pbVar6 = pbVar3 + -0x18;
          if ((*pbVar6 & 1) != 0) {
            operator_delete(*(void **)(pbVar3 + -8));
          }
          pbVar3 = pbVar6;
        } while (pbVar6 != pbVar5);
        pbVar6 = *(byte **)*param_1;
      }
      puVar4[1] = pbVar5;
      if (*(long *)(lVar1 + 0x28) == lVar2) {
        operator_delete(pbVar6);
        return;
      }
      goto LAB_00276188;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
LAB_00276188:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027618c  FUN_0027618c =====

void FUN_0027618c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002761e0  FUN_002761e0 =====

void FUN_002761e0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037ca48;
  if (param_1[5] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00276240  FUN_00276240 =====

void FUN_00276240(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037ca48;
  if (param_1[5] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0026d198(param_1 + 2);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002762a8  FUN_002762a8 =====

undefined8 * FUN_002762a8(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x18);
  *puVar2 = &PTR_FUN_0037ca48;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = lVar3;
  if (lVar3 != 0) {
    FUN_00255510(1);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = lVar3;
  if (lVar3 != 0) {
    FUN_00259a00(1,lVar3 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00276344  FUN_00276344 =====

void FUN_00276344(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0037ca48;
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[2] = uVar4;
  param_2[3] = lVar2;
  if (lVar2 != 0) {
    FUN_00255510(1);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = lVar2;
  if (lVar2 != 0) {
    FUN_00259a00(1,lVar2 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002763d8  FUN_002763d8 =====

void FUN_002763d8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x28) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027642c  FUN_0027642c =====

void FUN_0027642c(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)((long)param_1 + 0x28) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0026d198((long)param_1 + 0x10);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00276488  FUN_00276488 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00276488(long param_1,undefined8 *param_2)

{
  long lVar1;
  byte *pbVar2;
  undefined *puVar3;
  byte *pbVar4;
  ulong uVar5;
  long *plVar6;
  ulong *puVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  long *plVar11;
  byte *pbVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  byte *local_d8;
  byte *local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  byte *local_a8;
  byte *local_a0;
  ulong local_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  ulong *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pbVar10 = (byte *)param_2[1];
  pbVar9 = (byte *)*param_2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  local_d8 = (byte *)0x0;
  local_d0 = (byte *)0x0;
  local_c8 = 0;
                    /* try { // try from 002764ec to 002764fb has its CatchHandler @ 002767c0 */
  FUN_00275de0(&local_d8,pbVar9,pbVar10,((long)pbVar10 - (long)pbVar9 >> 3) * -0x5555555555555555);
  if (*(long *)(param_1 + 0x28) == 0) {
    plVar6 = (long *)0x0;
LAB_002765c4:
                    /* try { // try from 002765c4 to 002765cb has its CatchHandler @ 002767a8 */
    local_80 = (undefined8 *)operator_new(0x90);
    puVar3 = PTR_typeinfo_name_00394970;
    uStack_88 = _UNK_001d7e58;
    local_90 = _DAT_001d7e50;
    *(undefined1 *)(local_80 + 0x10) = 0x45;
    uVar14 = *(undefined8 *)(puVar3 + 0x48);
    uVar13 = *(undefined8 *)(puVar3 + 0x40);
    uVar16 = *(undefined8 *)(puVar3 + 0x58);
    uVar15 = *(undefined8 *)(puVar3 + 0x50);
    *(undefined1 *)((long)local_80 + 0x81) = 0;
    local_80[9] = uVar14;
    local_80[8] = uVar13;
    local_80[0xb] = uVar16;
    local_80[10] = uVar15;
    uVar13 = *(undefined8 *)(puVar3 + 0x60);
    uVar15 = *(undefined8 *)(puVar3 + 0x78);
    uVar14 = *(undefined8 *)(puVar3 + 0x70);
    local_80[0xd] = *(undefined8 *)(puVar3 + 0x68);
    local_80[0xc] = uVar13;
    local_80[0xf] = uVar15;
    local_80[0xe] = uVar14;
    uVar15 = *(undefined8 *)puVar3;
    uVar14 = *(undefined8 *)(puVar3 + 0x18);
    uVar13 = *(undefined8 *)(puVar3 + 0x10);
    local_80[1] = *(undefined8 *)(puVar3 + 8);
    *local_80 = uVar15;
    local_80[3] = uVar14;
    local_80[2] = uVar13;
    uVar15 = *(undefined8 *)(puVar3 + 0x20);
    uVar14 = *(undefined8 *)(puVar3 + 0x38);
    uVar13 = *(undefined8 *)(puVar3 + 0x30);
    local_80[5] = *(undefined8 *)(puVar3 + 0x28);
    local_80[4] = uVar15;
    local_80[7] = uVar14;
    local_80[6] = uVar13;
                    /* try { // try from 00276610 to 0027661f has its CatchHandler @ 00276790 */
    margelo::nitro::TypeInfo::demangleName((basic_string *)&local_90,true);
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
    if (plVar6 == (long *)0x0) goto LAB_00276694;
  }
  else {
    plVar6 = (long *)std::__ndk1::__shared_weak_count::lock();
    if ((plVar6 == (long *)0x0) || (plVar11 = *(long **)(param_1 + 0x20), plVar11 == (long *)0x0))
    goto LAB_002765c4;
    uStack_b8 = *(ulong *)(param_1 + 0x10);
    local_c0 = *(ulong *)(param_1 + 8);
    local_b0 = *(void **)(param_1 + 0x18);
    if (local_b0 != (void *)0x0) {
      FUN_00255510(1);
    }
    uVar5 = local_c8;
    pbVar12 = local_d0;
    pbVar4 = local_d8;
    local_d8 = (byte *)0x0;
    local_d0 = (byte *)0x0;
    local_98 = local_c8;
    local_a8 = pbVar4;
    local_a0 = pbVar12;
    local_c8 = 0;
    local_70 = (ulong *)0x0;
                    /* try { // try from 00276550 to 00276557 has its CatchHandler @ 00276780 */
    local_70 = (ulong *)operator_new(0x38);
    local_70[5] = (ulong)pbVar12;
    local_70[6] = uVar5;
    *local_70 = (ulong)&PTR_FUN_0037cad8;
    local_70[2] = uStack_b8;
    local_70[1] = local_c0;
    *(undefined8 *)((ulong)&local_c0 | 8) = 0;
    ((undefined8 *)((ulong)&local_c0 | 8))[1] = 0;
    local_70[3] = (ulong)local_b0;
    local_70[4] = (ulong)pbVar4;
    local_a0 = (byte *)0x0;
    local_98 = 0;
    local_a8 = (byte *)0x0;
                    /* try { // try from 00276598 to 002765a7 has its CatchHandler @ 00276748 */
    (**(code **)(*plVar11 + 0x18))(plVar11,&local_90);
    if (local_70 == &local_90) {
      lVar8 = 4;
      puVar7 = &local_90;
LAB_00276660:
      (**(code **)(*puVar7 + lVar8 * 8))();
    }
    else if (local_70 != (ulong *)0x0) {
      lVar8 = 5;
      puVar7 = local_70;
      goto LAB_00276660;
    }
  }
  lVar8 = FUN_00255510(0xffffffffffffffff,plVar6 + 1);
  if (lVar8 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
LAB_00276694:
  pbVar4 = local_d8;
  pbVar12 = local_d0;
  if (local_d8 != (byte *)0x0) {
    while (pbVar2 = pbVar12, pbVar2 != pbVar4) {
      pbVar12 = pbVar2 + -0x18;
      if ((*pbVar12 & 1) != 0) {
        operator_delete(*(void **)(pbVar2 + -8));
      }
    }
    local_d0 = pbVar4;
    operator_delete(local_d8);
  }
  if (pbVar9 != (byte *)0x0) {
    while (pbVar4 = pbVar10, pbVar4 != pbVar9) {
      pbVar10 = pbVar4 + -0x18;
      if ((*pbVar10 & 1) != 0) {
        operator_delete(*(void **)(pbVar4 + -8));
      }
    }
    operator_delete(pbVar9);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002767e8  FUN_002767e8 =====

void FUN_002767e8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394970) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00276838  FUN_00276838 =====

undefined * FUN_00276838(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394978;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00276878  FUN_00276878 =====

void FUN_00276878(long param_1)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  pbVar4 = *(byte **)(param_1 + 0x18);
  if (pbVar4 != (byte *)0x0) {
    pbVar3 = *(byte **)(param_1 + 0x20);
    pbVar5 = pbVar4;
    if (pbVar3 != pbVar4) {
      do {
        pbVar5 = pbVar3 + -0x18;
        if ((*pbVar5 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -8));
        }
        pbVar3 = pbVar5;
      } while (pbVar5 != pbVar4);
      pbVar5 = *(byte **)(param_1 + 0x18);
    }
    *(byte **)(param_1 + 0x20) = pbVar4;
    operator_delete(pbVar5);
  }
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  FUN_0026d198(param_1 + 8);
  return;
}


// ===== 00276914  FUN_00276914 =====

void FUN_00276914(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  pbVar4 = (byte *)param_1[4];
  *param_1 = &PTR_FUN_0037cad8;
  if (pbVar4 != (byte *)0x0) {
    pbVar3 = (byte *)param_1[5];
    pbVar5 = pbVar4;
    if (pbVar3 != pbVar4) {
      do {
        pbVar5 = pbVar3 + -0x18;
        if ((*pbVar5 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -8));
        }
        pbVar3 = pbVar5;
      } while (pbVar5 != pbVar4);
      pbVar5 = (byte *)param_1[4];
    }
    param_1[5] = pbVar4;
    operator_delete(pbVar5);
  }
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  FUN_0026d198(param_1 + 2);
  return;
}


// ===== 002769bc  FUN_002769bc =====

void FUN_002769bc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  pbVar4 = (byte *)param_1[4];
  *param_1 = &PTR_FUN_0037cad8;
  if (pbVar4 != (byte *)0x0) {
    pbVar3 = (byte *)param_1[5];
    pbVar5 = pbVar4;
    if (pbVar3 != pbVar4) {
      do {
        pbVar5 = pbVar3 + -0x18;
        if ((*pbVar5 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -8));
        }
        pbVar3 = pbVar5;
      } while (pbVar5 != pbVar4);
      pbVar5 = (byte *)param_1[4];
    }
    param_1[5] = pbVar4;
    operator_delete(pbVar5);
  }
  FUN_0026d198(param_1 + 2);
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  operator_delete(param_1);
  return;
}


// ===== 00276a6c  FUN_00276a6c =====

undefined8 * FUN_00276a6c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x38);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x18);
  *puVar2 = &PTR_FUN_0037cad8;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = lVar3;
  if (lVar3 != 0) {
    FUN_00255510(1);
  }
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
                    /* try { // try from 00276ae8 to 00276aeb has its CatchHandler @ 00276b14 */
  FUN_00275de0();
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00276b44  FUN_00276b44 =====

void FUN_00276b44(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0037cad8;
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[2] = uVar4;
  param_2[3] = lVar2;
  if (lVar2 != 0) {
    FUN_00255510(1);
  }
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
                    /* try { // try from 00276bc0 to 00276bc7 has its CatchHandler @ 00276bec */
  FUN_00275de0(param_2 + 4,*(long *)(param_1 + 0x20),*(long *)(param_1 + 0x28),
               (*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 3) * -0x5555555555555555);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00276c14  FUN_00276c14 =====

void FUN_00276c14(long param_1)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  pbVar4 = *(byte **)(param_1 + 0x20);
  if (pbVar4 != (byte *)0x0) {
    pbVar3 = *(byte **)(param_1 + 0x28);
    pbVar5 = pbVar4;
    if (pbVar3 != pbVar4) {
      do {
        pbVar5 = pbVar3 + -0x18;
        if ((*pbVar5 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -8));
        }
        pbVar3 = pbVar5;
      } while (pbVar5 != pbVar4);
      pbVar5 = *(byte **)(param_1 + 0x20);
    }
    *(byte **)(param_1 + 0x28) = pbVar4;
    operator_delete(pbVar5);
  }
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  FUN_0026d198(param_1 + 0x10);
  return;
}


// ===== 00276cb0  FUN_00276cb0 =====

void FUN_00276cb0(void *param_1)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  pbVar4 = *(byte **)((long)param_1 + 0x20);
  if (pbVar4 != (byte *)0x0) {
    pbVar3 = *(byte **)((long)param_1 + 0x28);
    pbVar5 = pbVar4;
    if (pbVar3 != pbVar4) {
      do {
        pbVar5 = pbVar3 + -0x18;
        if ((*pbVar5 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -8));
        }
        pbVar3 = pbVar5;
      } while (pbVar5 != pbVar4);
      pbVar5 = *(byte **)((long)param_1 + 0x20);
    }
    *(byte **)((long)param_1 + 0x28) = pbVar4;
    operator_delete(pbVar5);
  }
  FUN_0026d198((long)param_1 + 0x10);
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  operator_delete(param_1);
  return;
}


// ===== 00276d54  FUN_00276d54 =====

void FUN_00276d54(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  long lVar5;
  runtime_error *this;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  undefined4 local_c8 [4];
  Value aVStack_b8 [24];
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined1 local_88 [8];
  undefined8 local_80 [3];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pbVar7 = *(byte **)(param_1 + 0x28);
  pbVar10 = *(byte **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if ((*(long *)(param_1 + 0x10) == 0) || ((*(byte *)(*(long *)(param_1 + 0x18) + 0x10) & 1) != 0))
  {
                    /* try { // try from 00276f5c to 00276f6f has its CatchHandler @ 00277098 */
    FUN_00264e5c(local_a0,PTR_typeinfo_name_00394980,1);
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00276f7c to 00276f8f has its CatchHandler @ 00277078 */
    std::__ndk1::operator+("Cannot call ",(basic_string *)local_a0);
                    /* try { // try from 00276f90 to 00276fa3 has its CatchHandler @ 00277060 */
    FUN_00263450(local_80,aVStack_b8," - the underlying `jsi::Function` has already been deleted!");
                    /* try { // try from 00276fa8 to 00276fdf has its CatchHandler @ 0027702c */
    std::runtime_error::runtime_error(this,(basic_string *)local_80);
    if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
  }
  else {
    plVar1 = *(long **)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 00276dd4 to 00276ddf has its CatchHandler @ 00277098 */
    (**(code **)(*plVar1 + 0x230))
              (local_a0,plVar1,((long)pbVar7 - (long)pbVar10 >> 3) * -0x5555555555555555);
    pbVar6 = pbVar7;
    if (pbVar7 != pbVar10) {
      lVar9 = 0;
      uVar8 = 0;
      do {
        pbVar6 = pbVar10 + lVar9;
        uVar2 = *(ulong *)(pbVar6 + 8);
        pbVar4 = *(byte **)(pbVar6 + 0x10);
        if ((*pbVar6 & 1) == 0) {
          pbVar4 = pbVar6 + 1;
          uVar2 = (ulong)(*pbVar6 >> 1);
        }
                    /* try { // try from 00276e28 to 00276e33 has its CatchHandler @ 00277000 */
        (**(code **)(*plVar1 + 0x110))(local_80,plVar1,pbVar4,uVar2);
        local_a0[0] = 6;
        local_98 = local_80[0];
                    /* try { // try from 00276e48 to 00276e5b has its CatchHandler @ 00277008 */
        (**(code **)(*plVar1 + 0x268))(plVar1,local_88,uVar8,local_a0);
        facebook::jsi::Value::~Value((Value *)local_a0);
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x18;
        pbVar6 = pbVar10;
      } while (uVar8 < (ulong)(((long)pbVar7 - (long)pbVar10 >> 3) * -0x5555555555555555));
    }
    local_c8[0] = 7;
    facebook::jsi::Value::Value((Value *)local_80,(Value *)local_c8);
    local_a0[0] = 0;
                    /* try { // try from 00276eb4 to 00276ecf has its CatchHandler @ 00276fe0 */
    (**(code **)(*plVar1 + 0x280))(aVStack_b8,plVar1,uVar3,local_a0,local_80,1);
    facebook::jsi::Value::~Value((Value *)local_a0);
    facebook::jsi::Value::~Value((Value *)local_80);
    facebook::jsi::Value::~Value((Value *)local_c8);
    facebook::jsi::Value::~Value(aVStack_b8);
    if (pbVar6 != (byte *)0x0) {
      while (pbVar10 = pbVar7, pbVar10 != pbVar6) {
        pbVar7 = pbVar10 + -0x18;
        if ((*pbVar7 & 1) != 0) {
          operator_delete(*(void **)(pbVar10 + -8));
        }
      }
      operator_delete(pbVar6);
    }
    if (*(long *)(lVar5 + 0x28) == local_68) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002770c0  FUN_002770c0 =====

void FUN_002770c0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394988) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00277110  FUN_00277110 =====

undefined * FUN_00277110(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394990;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00277150  FUN_00277150 =====

void FUN_00277150(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037c8e8;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete((void *)param_1[3]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002771bc  FUN_002771bc =====

void FUN_002771bc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037c8e8;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00277224  FUN_00277224 =====

undefined8 * FUN_00277224(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x38);
  bVar2 = *(byte *)(param_1 + 8);
  *puVar4 = &PTR_FUN_0037c8e8;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 00277284 to 00277287 has its CatchHandler @ 002772c0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar4 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    puVar4[5] = *(undefined8 *)(param_1 + 0x28);
    puVar4[4] = uVar6;
    *(undefined4 *)(puVar4 + 6) = uVar1;
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002772e8  FUN_002772e8 =====

void FUN_002772e8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037c8e8;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar4;
    param_2[1] = uVar3;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x30);
    param_2[5] = uVar4;
    param_2[4] = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00277380  FUN_00277380 =====

void FUN_00277380(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002773e0  FUN_002773e0 =====

void FUN_002773e0(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027743c  FUN_0027743c =====

void FUN_0027743c(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  JSError *pJVar9;
  long *plVar10;
  void *pvVar11;
  ulong uVar12;
  undefined8 uVar13;
  code *pcVar14;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined8 *local_b0 [3];
  void *local_98;
  long *plStack_90;
  undefined8 *local_88;
  char local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar13 = *param_5;
  uVar12 = *param_6;
  local_b0[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 0027749c to 002774ab has its CatchHandler @ 00277a80 */
  (**(code **)(*param_3 + 0x160))(&local_98,param_3,local_b0);
  if ((local_98 == (void *)0x0) ||
     (lVar7 = __dynamic_cast(local_98,PTR_typeinfo_00394860,PTR_typeinfo_00394870,0xffffffffffffffff
                            ), lVar7 == 0)) {
    lVar7 = 0;
    plVar10 = (long *)0x0;
    if (plStack_90 == (long *)0x0) goto joined_r0x00277524;
  }
  else {
    if (plStack_90 == (long *)0x0) {
      plVar10 = (long *)0x0;
      goto joined_r0x00277524;
    }
    FUN_00259a00(1,plStack_90 + 1);
    plVar10 = plStack_90;
  }
  lVar8 = FUN_00255510(0xffffffffffffffff,plStack_90 + 1);
  if (lVar8 == 0) {
    (**(code **)(*plStack_90 + 0x10))(plStack_90);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x00277524:
  if (local_b0[0] != (undefined8 *)0x0) {
    (**(code **)*local_b0[0])();
  }
  if (uVar12 == 1) {
    pcVar14 = *(code **)(param_2 + 0x20);
    uVar12 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00394940 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_defaultValue_00394940), puVar5 = PTR_defaultValue_00394938,
       iVar6 != 0)) {
      *(undefined4 *)PTR_defaultValue_00394938 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar5,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00394940);
    }
    plVar1 = (long *)(lVar7 + ((long)uVar12 >> 1));
    if ((uVar12 & 1) != 0) {
      pcVar14 = *(code **)(pcVar14 + *plVar1);
    }
                    /* try { // try from 00277560 to 0027756f has its CatchHandler @ 00277788 */
    FUN_00277cd4(&local_98,param_3,uVar13);
                    /* try { // try from 00277570 to 0027757b has its CatchHandler @ 00277774 */
    (*pcVar14)(plVar1,&local_98);
    pvVar3 = local_98;
    puVar4 = local_88;
    if (local_70 != '\0') {
      while (puVar4 != (undefined8 *)0x0) {
        pvVar11 = (void *)*puVar4;
        local_98 = pvVar3;
        FUN_00279620(puVar4 + 5);
        if ((*(byte *)(puVar4 + 2) & 1) != 0) {
          operator_delete((void *)puVar4[4]);
        }
        operator_delete(puVar4);
        pvVar3 = local_98;
        puVar4 = (undefined8 *)pvVar11;
      }
      local_98 = (void *)0x0;
      if (pvVar3 != (void *)0x0) {
        operator_delete(pvVar3);
      }
    }
    *param_1 = 0;
    if ((plVar10 != (long *)0x0) &&
       (lVar7 = FUN_00255510(0xffffffffffffffff,plVar10 + 1), lVar7 == 0)) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 00277640 to 0027764f has its CatchHandler @ 00277c1c */
    FUN_00269c28(&local_98,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar7);
    pJVar9 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0027765c to 0027766f has its CatchHandler @ 00277bfc */
    std::__ndk1::operator+("`",(basic_string *)&local_98);
                    /* try { // try from 00277670 to 00277683 has its CatchHandler @ 00277be4 */
    FUN_00263450(auStack_110,auStack_128,"` expected ");
                    /* try { // try from 00277684 to 0027768f has its CatchHandler @ 00277bb4 */
    std::__ndk1::to_string(1);
                    /* try { // try from 00277690 to 0027769f has its CatchHandler @ 00277b90 */
    FUN_00264adc(auStack_f8,auStack_110,auStack_140);
                    /* try { // try from 002776a0 to 002776b3 has its CatchHandler @ 00277b6c */
    FUN_00263450(auStack_e0,auStack_f8," arguments, but received ");
                    /* try { // try from 002776b4 to 002776bf has its CatchHandler @ 00277b48 */
    std::__ndk1::to_string(uVar12);
                    /* try { // try from 002776c0 to 002776cf has its CatchHandler @ 00277b24 */
    FUN_00264adc(auStack_c8,auStack_e0,auStack_158);
                    /* try { // try from 002776d0 to 002776e3 has its CatchHandler @ 00277b00 */
    FUN_00263450(local_b0,auStack_c8,&DAT_001d5be0);
                    /* try { // try from 002776e8 to 00277723 has its CatchHandler @ 00277aa0 */
    facebook::jsi::JSError::JSError(pJVar9,param_3,local_b0);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar9,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00277c44  FUN_00277c44 =====

void FUN_00277c44(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394948) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00277c94  FUN_00277c94 =====

undefined * FUN_00277c94(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394950;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00277cd4  FUN_00277cd4 =====

void FUN_00277cd4(long *param_1,Runtime *param_2,IRuntime *param_3)

{
  long **pplVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  void *pvVar8;
  basic_string bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long **pplVar14;
  long **pplVar15;
  char *pcVar16;
  long **pplVar17;
  char *pcVar18;
  bool bVar19;
  int iVar20;
  undefined8 uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong *puVar26;
  char *pcVar27;
  ulong *puVar28;
  ulong uVar29;
  long *plVar30;
  long *plVar31;
  char *pcVar32;
  ulong uVar33;
  char *pcVar34;
  ulong uVar35;
  ulong uVar36;
  long *plVar37;
  ulong uVar38;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar39;
  undefined4 *puVar40;
  byte *pbVar41;
  ulong uVar42;
  basic_string bVar43;
  ulong *unaff_x27;
  ulong *puVar44;
  undefined2 uVar45;
  long lVar46;
  long **local_348;
  long **local_340;
  long **local_338;
  long **local_330;
  char *local_320;
  char *local_318;
  char *local_310;
  char *local_308;
  ulong local_2f0;
  undefined8 *local_2e0;
  long *plStack_2d8;
  basic_string local_2d0;
  undefined4 local_2cf;
  undefined1 local_2cb;
  void *local_2c0;
  int local_2b8 [4];
  undefined8 *local_2a8;
  IRuntime aIStack_2a0 [16];
  basic_string local_290;
  undefined7 uStack_28f;
  ulong uStack_288;
  ulong *local_280;
  undefined8 *local_278;
  undefined8 *local_270;
  int local_268 [4];
  basic_string local_258;
  undefined4 uStack_257;
  undefined1 uStack_253;
  undefined2 uStack_252;
  void *local_248;
  int local_240 [4];
  basic_string local_230;
  undefined7 uStack_22f;
  undefined1 local_222;
  void *local_220;
  int local_218 [4];
  basic_string local_208;
  undefined7 uStack_207;
  undefined1 local_1fc;
  void *local_1f8;
  int local_1f0 [4];
  basic_string local_1e0 [10];
  undefined1 local_1d6;
  void *local_1d0;
  int local_1c8 [4];
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  long *plStack_1a8;
  void *local_1a0;
  ulong local_198;
  long *local_190;
  ulong local_188;
  float local_180;
  char local_178;
  void *local_170;
  ulong uStack_168;
  long *local_160;
  ulong local_158;
  float local_150;
  long *local_148;
  long **pplStack_140;
  char *local_138;
  char local_130;
  undefined8 local_128;
  long **pplStack_120;
  char *local_118;
  char local_110;
  undefined8 local_108;
  long **pplStack_100;
  char *local_f8;
  char local_f0;
  undefined8 local_e8;
  long **pplStack_e0;
  char *local_d8;
  char local_d0;
  undefined8 *local_c8;
  long *plStack_c0;
  char local_b8;
  undefined4 local_b0;
  undefined3 uStack_ac;
  undefined4 local_a8;
  undefined3 uStack_a4;
  undefined4 local_a0;
  undefined3 uStack_9c;
  undefined4 local_98;
  undefined3 uStack_94;
  long *local_90;
  long **local_88;
  undefined1 local_80;
  undefined7 uStack_7f;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  facebook::jsi::Value::asObject(param_3);
  local_2cb = 0;
  local_2d0 = (basic_string)0x8;
  local_2cf = 0x61746164;
                    /* try { // try from 00277d30 to 00277d57 has its CatchHandler @ 002791e0 */
  uVar21 = margelo::nitro::PropNameIDCache::get(param_2,&local_2d0);
  (**(code **)(*(long *)param_2 + 0x180))(local_2b8,param_2,&local_2a8,uVar21);
  if (local_2b8[0] == 0) {
    local_1a0 = (void *)((ulong)local_1a0 & 0xffffffffffffff00);
    local_178 = '\0';
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    goto LAB_00279130;
  }
                    /* try { // try from 00277d60 to 00277d6f has its CatchHandler @ 002791d4 */
  facebook::jsi::Value::asObject((IRuntime *)local_2b8);
                    /* try { // try from 00277d78 to 00277d87 has its CatchHandler @ 002791cc */
  (**(code **)(*(long *)param_2 + 0x218))(&local_278,param_2,&local_270);
                    /* try { // try from 00277d90 to 00277d9b has its CatchHandler @ 002791c4 */
  uVar22 = (**(code **)(*(long *)param_2 + 0x240))(param_2,&local_278);
  local_150 = 1.0;
  uVar38 = (ulong)(float)uVar22;
  uStack_168 = 0;
  local_170 = (void *)0x0;
  local_158 = 0;
  local_160 = (long *)0x0;
  if (uVar38 - 1 == 0) {
    uVar38 = 2;
LAB_00277e78:
    FUN_0027989c(&local_170,uVar38);
  }
  else {
    if ((uVar38 & uVar38 - 1) != 0) {
                    /* try { // try from 00277df4 to 00277e83 has its CatchHandler @ 002791dc */
      uVar38 = std::__ndk1::__next_prime(uVar38);
      bVar19 = uStack_168 <= uVar38;
      if (uVar38 <= uStack_168) goto LAB_00277e0c;
      goto LAB_00277e78;
    }
    bVar19 = true;
    if (uVar38 != 0) goto LAB_00277e78;
LAB_00277e0c:
    uVar42 = uStack_168;
    if (!bVar19) {
      uVar33 = (ulong)((float)local_158 / local_150);
      if (uStack_168 < 3) {
LAB_00277e64:
        uVar33 = std::__ndk1::__next_prime(uVar33);
      }
      else {
        uVar21 = NEON_cnt(uStack_168,1);
        uVar45 = NEON_uaddlv(uVar21,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar21 >> 0x10),uVar45)) goto LAB_00277e64;
        if (1 < uVar33) {
          uVar33 = 1L << (-LZCOUNT(uVar33 - 1) & 0x3fU);
        }
      }
      if (uVar38 <= uVar33) {
        uVar38 = uVar33;
      }
      if (uVar38 < uVar42) goto LAB_00277e78;
    }
  }
  if (uVar22 != 0) {
    uVar38 = 0;
    puVar40 = (undefined4 *)((ulong)&local_90 | 1);
    pcVar27 = (char *)((ulong)&local_208 | 1);
    do {
                    /* try { // try from 00277ef4 to 00277f07 has its CatchHandler @ 00279440 */
      (**(code **)(*(long *)param_2 + 0x260))(&local_148,param_2,&local_278,uVar38);
                    /* try { // try from 00277f08 to 00277f17 has its CatchHandler @ 00279448 */
      facebook::jsi::Value::asString((IRuntime *)&local_148);
                    /* try { // try from 00277f20 to 00277f2f has its CatchHandler @ 00279450 */
      (**(code **)(*(long *)param_2 + 0x120))(&local_290,param_2,&local_90);
      if (local_90 != (long *)0x0) {
        (**(code **)*local_90)();
      }
      facebook::jsi::Value::~Value((Value *)&local_148);
                    /* try { // try from 00277f50 to 00277f77 has its CatchHandler @ 00279600 */
      uVar21 = margelo::nitro::PropNameIDCache::get(param_2,&local_290);
      (**(code **)(*(long *)param_2 + 0x180))(aIStack_2a0,param_2,&local_270,uVar21);
                    /* try { // try from 00277f78 to 00277f87 has its CatchHandler @ 00279478 */
      facebook::jsi::Value::asObject(aIStack_2a0);
      uVar21 = s_sourceUrl_001d5620._0_8_;
      local_1e0[0] = (basic_string)0x12;
      ((char *)((ulong)local_1e0 | 1))[8] = 'l';
      local_1d6 = 0;
      *(undefined8 *)((ulong)local_1e0 | 1) = uVar21;
                    /* try { // try from 00277fb0 to 00277fd7 has its CatchHandler @ 00279610 */
      uVar21 = margelo::nitro::PropNameIDCache::get(param_2,local_1e0);
      (**(code **)(*(long *)param_2 + 0x180))(local_1c8,param_2,&local_1b8,uVar21);
      iVar20 = local_1c8[0];
      if (local_1c8[0] == 0) {
        bVar43 = (basic_string)0x0;
      }
      else {
                    /* try { // try from 00277fe4 to 00277ff3 has its CatchHandler @ 002793a8 */
        facebook::jsi::Value::asString((IRuntime *)local_1c8);
                    /* try { // try from 00277ffc to 0027800b has its CatchHandler @ 00279410 */
        (**(code **)(*(long *)param_2 + 0x120))(&local_90,param_2,&local_208);
        if ((undefined8 *)CONCAT71(uStack_207,local_208) != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)CONCAT71(uStack_207,local_208))();
        }
        local_308 = (char *)CONCAT71(uStack_7f,local_80);
        local_330 = local_88;
        local_98._0_3_ = (undefined3)*puVar40;
        local_98._3_1_ = (undefined1)*(undefined4 *)((long)puVar40 + 3);
        uStack_94 = (undefined3)((uint)*(undefined4 *)((long)puVar40 + 3) >> 8);
        bVar43 = local_90._0_1_;
      }
      uVar21 = s_sourceAsset_001d59e8._0_8_;
      local_208 = (basic_string)0x16;
      local_1fc = 0;
      pcVar27[7] = 's';
      pcVar27[8] = 's';
      pcVar27[9] = 'e';
      pcVar27[10] = 't';
      *(undefined8 *)pcVar27 = uVar21;
                    /* try { // try from 00278074 to 0027809b has its CatchHandler @ 00279480 */
      uVar21 = margelo::nitro::PropNameIDCache::get(param_2,&local_208);
      (**(code **)(*(long *)param_2 + 0x180))(local_1f0,param_2,&local_1b8,uVar21);
      iVar13 = local_1f0[0];
      if (local_1f0[0] == 0) {
        local_2f0 = 0;
      }
      else {
                    /* try { // try from 002780a4 to 002780b3 has its CatchHandler @ 002793a0 */
        facebook::jsi::Value::asString((IRuntime *)local_1f0);
                    /* try { // try from 002780bc to 002780cb has its CatchHandler @ 002793f0 */
        (**(code **)(*(long *)param_2 + 0x120))(&local_90,param_2,&local_230);
        if ((undefined8 *)CONCAT71(uStack_22f,local_230) != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)CONCAT71(uStack_22f,local_230))();
        }
        local_310 = (char *)CONCAT71(uStack_7f,local_80);
        local_2f0 = (ulong)local_90 & 0xff;
        local_338 = local_88;
        local_a0._0_3_ = (undefined3)*puVar40;
        local_a0._3_1_ = (undefined1)*(undefined4 *)((long)puVar40 + 3);
        uStack_9c = (undefined3)((uint)*(undefined4 *)((long)puVar40 + 3) >> 8);
      }
      local_230 = (basic_string)0x1a;
      uVar21 = CONCAT53(s_sourceAssetId_001d4bb4._8_5_,s_sourceAssetId_001d4bb4._5_3_);
      local_222 = 0;
      *(undefined8 *)((ulong)&local_230 | 1) =
           CONCAT35(s_sourceAssetId_001d4bb4._5_3_,s_sourceAssetId_001d4bb4._0_5_);
      *(undefined8 *)((long)((ulong)&local_230 | 1) + 5) = uVar21;
                    /* try { // try from 00278134 to 0027815b has its CatchHandler @ 00279488 */
      uVar21 = margelo::nitro::PropNameIDCache::get(param_2,&local_230);
      (**(code **)(*(long *)param_2 + 0x180))(local_218,param_2,&local_1b8,uVar21);
      iVar12 = local_218[0];
      if (local_218[0] == 0) {
        bVar9 = (basic_string)0x0;
      }
      else {
                    /* try { // try from 00278164 to 00278173 has its CatchHandler @ 00279398 */
        facebook::jsi::Value::asString((IRuntime *)local_218);
                    /* try { // try from 0027817c to 0027818b has its CatchHandler @ 002793d0 */
        (**(code **)(*(long *)param_2 + 0x120))(&local_90,param_2,&local_258);
        puVar7 = (undefined8 *)
                 CONCAT26(uStack_252,CONCAT15(uStack_253,CONCAT41(uStack_257,local_258)));
        if (puVar7 != (undefined8 *)0x0) {
          (**(code **)*puVar7)();
        }
        local_318 = (char *)CONCAT71(uStack_7f,local_80);
        local_340 = local_88;
        local_a8._0_3_ = (undefined3)*puVar40;
        local_a8._3_1_ = (undefined1)*(undefined4 *)((long)puVar40 + 3);
        uStack_a4 = (undefined3)((uint)*(undefined4 *)((long)puVar40 + 3) >> 8);
        bVar9 = local_90._0_1_;
      }
      uStack_253 = 0;
      local_258 = (basic_string)0x8;
      uStack_257 = 0x68746170;
                    /* try { // try from 002781e8 to 0027820f has its CatchHandler @ 00279490 */
      uVar21 = margelo::nitro::PropNameIDCache::get(param_2,&local_258);
      (**(code **)(*(long *)param_2 + 0x180))(local_240,param_2,&local_1b8,uVar21);
      iVar11 = local_240[0];
      if (local_240[0] == 0) {
        uVar42 = 0;
      }
      else {
                    /* try { // try from 00278218 to 00278227 has its CatchHandler @ 00279390 */
        facebook::jsi::Value::asString((IRuntime *)local_240);
                    /* try { // try from 00278230 to 0027823f has its CatchHandler @ 002793b0 */
        (**(code **)(*(long *)param_2 + 0x120))(&local_90,param_2,&local_1b0);
        if (local_1b0 != (undefined8 *)0x0) {
          (**(code **)*local_1b0)();
        }
        local_320 = (char *)CONCAT71(uStack_7f,local_80);
        uVar42 = (ulong)local_90 & 0xff;
        local_348 = local_88;
        local_b0._0_3_ = (undefined3)*puVar40;
        local_b0._3_1_ = (undefined1)*(undefined4 *)((long)puVar40 + 3);
        uStack_ac = (undefined3)((uint)*(undefined4 *)((long)puVar40 + 3) >> 8);
      }
      local_90._0_7_ = (uint7)(uint6)local_90;
      local_90 = (long *)CONCAT71(local_90._1_7_,10);
      *puVar40 = 0x67616d69;
      *(undefined1 *)(puVar40 + 1) = 0x65;
                    /* try { // try from 002782a4 to 002782cb has its CatchHandler @ 00279498 */
      uVar21 = margelo::nitro::PropNameIDCache::get(param_2,(basic_string *)&local_90);
      (**(code **)(*(long *)param_2 + 0x180))(local_268,param_2,&local_1b8,uVar21);
      iVar10 = local_268[0];
      if (local_268[0] == 0) {
        local_2e0 = (undefined8 *)((ulong)local_2e0 & 0xffffffffffffff00);
      }
      else {
                    /* try { // try from 002782d8 to 002782e7 has its CatchHandler @ 00279380 */
        FUN_00279c30(&local_1b0,param_2,local_268);
        plStack_2d8 = plStack_1a8;
        local_2e0 = local_1b0;
      }
      plVar37 = local_148;
      local_148 = (long *)((ulong)local_148 & 0xffffffffffffff00);
      local_130 = '\0';
      if (iVar20 != 0) {
        if (((byte)bVar43 & 1) == 0) {
          local_148 = (long *)CONCAT71(SUB87(plVar37,1),bVar43);
          *(undefined4 *)((ulong)&local_148 | 1) = local_98;
          *(uint *)((long)((ulong)&local_148 | 1) + 3) = CONCAT31(uStack_94,local_98._3_1_);
          pplStack_140 = local_330;
          local_138 = local_308;
        }
        else {
                    /* try { // try from 00278340 to 0027834f has its CatchHandler @ 0027931c */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_148,local_308,(ulong)local_330);
        }
        local_130 = '\x01';
      }
      local_128 = local_128 & 0xffffffffffffff00;
      local_110 = '\0';
      if (iVar13 != 0) {
        if ((local_2f0 & 1) == 0) {
          local_128._0_5_ = CONCAT41(local_a0,(char)local_2f0);
          local_128 = CONCAT44(CONCAT31(uStack_9c,local_a0._3_1_),(undefined4)local_128);
          pplStack_120 = local_338;
          local_118 = local_310;
        }
        else {
                    /* try { // try from 00278394 to 002783a7 has its CatchHandler @ 002792f4 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_128,local_310,(ulong)local_338);
        }
        local_110 = '\x01';
      }
      local_108 = local_108 & 0xffffffffffffff00;
      local_f0 = '\0';
      if (iVar12 != 0) {
        if (((byte)bVar9 & 1) == 0) {
          local_108._0_5_ = CONCAT41(local_a8,bVar9);
          local_108 = CONCAT44(CONCAT31(uStack_a4,local_a8._3_1_),(undefined4)local_108);
          pplStack_100 = local_340;
          local_f8 = local_318;
        }
        else {
                    /* try { // try from 002783ec to 002783ff has its CatchHandler @ 002792cc */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_108,local_318,(ulong)local_340);
        }
        local_f0 = '\x01';
      }
      local_e8 = local_e8 & 0xffffffffffffff00;
      local_d0 = '\0';
      if (iVar11 != 0) {
        if ((uVar42 & 1) == 0) {
          local_e8._0_5_ = CONCAT41(local_b0,(char)uVar42);
          local_e8 = CONCAT44(CONCAT31(uStack_ac,local_b0._3_1_),(undefined4)local_e8);
          pplStack_e0 = local_348;
          local_d8 = local_320;
        }
        else {
                    /* try { // try from 00278440 to 00278453 has its CatchHandler @ 002792a4 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_e8,local_320,(ulong)local_348);
        }
        local_d0 = '\x01';
      }
      local_c8 = (undefined8 *)((ulong)local_c8 & 0xffffffffffffff00);
      local_b8 = '\0';
      if (iVar10 != 0) {
        local_c8 = local_2e0;
        plStack_c0 = plStack_2d8;
        if (plStack_2d8 == (long *)0x0) {
          local_b8 = '\x01';
        }
        else {
          FUN_00259a00(1,plStack_2d8 + 1);
          local_b8 = '\x01';
          if ((plStack_2d8 != (long *)0x0) &&
             (lVar23 = FUN_00255510(0xffffffffffffffff,plStack_2d8 + 1), lVar23 == 0)) {
            (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
            std::__ndk1::__shared_weak_count::__release_weak();
          }
        }
      }
      facebook::jsi::Value::~Value((Value *)local_268);
      if (((ulong)local_90 & 1) != 0) {
        operator_delete((void *)CONCAT71(uStack_7f,local_80));
      }
      if ((iVar11 != 0) && ((uVar42 & 1) != 0)) {
        operator_delete(local_320);
      }
      facebook::jsi::Value::~Value((Value *)local_240);
      if (((byte)local_258 & 1) != 0) {
        operator_delete(local_248);
      }
      if ((iVar12 != 0) && (((byte)bVar9 & 1) != 0)) {
        operator_delete(local_318);
      }
      facebook::jsi::Value::~Value((Value *)local_218);
      if (((byte)local_230 & 1) != 0) {
        operator_delete(local_220);
      }
      if ((iVar13 != 0) && ((local_2f0 & 1) != 0)) {
        operator_delete(local_310);
      }
      facebook::jsi::Value::~Value((Value *)local_1f0);
      if (((byte)local_208 & 1) != 0) {
        operator_delete(local_1f8);
      }
      if ((iVar20 != 0) && (((byte)bVar43 & 1) != 0)) {
        operator_delete(local_308);
      }
      facebook::jsi::Value::~Value((Value *)local_1c8);
      if (((byte)local_1e0[0] & 1) != 0) {
        operator_delete(local_1d0);
      }
      if (local_1b8 != (undefined8 *)0x0) {
        (**(code **)*local_1b8)();
      }
      puVar44 = local_280;
      uVar33 = uStack_288;
      bVar43 = local_290;
      sVar3 = (ulong)((byte)local_290 >> 1);
      puVar26 = (ulong *)((ulong)&local_290 | 1);
      if (((byte)local_290 & 1) != 0) {
        sVar3 = uStack_288;
        puVar26 = local_280;
      }
      uVar24 = FUN_002603ac(puVar26,sVar3);
      uVar25 = uStack_168;
      if (uStack_168 != 0) {
        uVar21 = NEON_cnt(uStack_168,1);
        uVar45 = NEON_uaddlv(uVar21,1);
        uVar36 = CONCAT62((int6)((ulong)uVar21 >> 0x10),uVar45) & 0xffffffff;
        if (uVar36 < 2) {
          uVar42 = uStack_168 - 1 & uVar24;
        }
        else {
          uVar42 = uVar24;
          if (uStack_168 <= uVar24) {
            uVar42 = 0;
            if (uStack_168 != 0) {
              uVar42 = uVar24 / uStack_168;
            }
            uVar42 = uVar24 - uVar42 * uStack_168;
          }
        }
        puVar28 = *(ulong **)((long)local_170 + uVar42 * 8);
        if ((puVar28 != (ulong *)0x0) && (unaff_x27 = (ulong *)*puVar28, unaff_x27 != (ulong *)0x0))
        {
          uVar35 = uStack_168 - 1;
          do {
            uVar29 = unaff_x27[1];
            if (uVar29 == uVar24) {
              bVar4 = (byte)unaff_x27[2];
              uVar29 = (ulong)(bVar4 >> 1);
              sVar2 = uVar29;
              if ((bVar4 & 1) != 0) {
                sVar2 = unaff_x27[3];
              }
              if (sVar2 == sVar3) {
                if ((bVar4 & 1) == 0) {
                  if (bVar4 < 2) goto LAB_002789f4;
                  pcVar32 = (char *)((long)unaff_x27 + 0x11);
                  puVar28 = puVar26;
                  while (*pcVar32 == (char)*puVar28) {
                    uVar29 = uVar29 - 1;
                    pcVar32 = pcVar32 + 1;
                    puVar28 = (ulong *)((long)puVar28 + 1);
                    if (uVar29 == 0) goto LAB_002789f4;
                  }
                }
                else {
                  iVar20 = memcmp((void *)unaff_x27[4],puVar26,unaff_x27[3]);
                  if (iVar20 == 0) goto LAB_002789f4;
                }
              }
            }
            else {
              if (uVar36 < 2) {
                uVar29 = uVar29 & uVar35;
              }
              else if (uVar25 <= uVar29) {
                uVar5 = 0;
                if (uVar25 != 0) {
                  uVar5 = uVar29 / uVar25;
                }
                uVar29 = uVar29 - uVar5 * uVar25;
              }
              if (uVar29 != uVar42) break;
            }
            unaff_x27 = (ulong *)*unaff_x27;
          } while (unaff_x27 != (ulong *)0x0);
        }
      }
                    /* try { // try from 0027870c to 00278713 has its CatchHandler @ 00279430 */
      plVar37 = (long *)operator_new(0xc0);
      local_80 = 0;
      *plVar37 = 0;
      plVar37[1] = uVar24;
      local_90 = plVar37;
      local_88 = &local_160;
      if (((byte)bVar43 & 1) == 0) {
        plVar37[3] = uStack_288;
        plVar37[2] = CONCAT71(uStack_28f,local_290);
        plVar37[4] = (long)local_280;
      }
      else {
                    /* try { // try from 00278740 to 0027874f has its CatchHandler @ 0027934c */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(plVar37 + 2),(char *)puVar44,uVar33);
      }
      plVar31 = plStack_c0;
      puVar7 = local_c8;
      pcVar18 = local_d8;
      pplVar17 = pplStack_e0;
      uVar35 = local_e8;
      pcVar16 = local_f8;
      pplVar15 = pplStack_100;
      uVar36 = local_108;
      pcVar34 = local_118;
      pplVar14 = pplStack_120;
      uVar33 = local_128;
      pcVar32 = local_138;
      pplVar1 = pplStack_140;
      plVar30 = local_148;
      *(undefined1 *)(plVar37 + 5) = 0;
      *(undefined1 *)(plVar37 + 8) = 0;
      if (local_130 != '\0') {
        *(undefined1 *)(plVar37 + 8) = 1;
        pplStack_140 = (long **)0x0;
        local_138 = (char *)0x0;
        local_148 = (long *)0x0;
        plVar37[6] = (long)pplVar1;
        plVar37[5] = (long)plVar30;
        plVar37[7] = (long)pcVar32;
      }
      *(undefined1 *)(plVar37 + 9) = 0;
      *(undefined1 *)(plVar37 + 0xc) = 0;
      if (local_110 != '\0') {
        *(undefined1 *)(plVar37 + 0xc) = 1;
        pplStack_120 = (long **)0x0;
        local_118 = (char *)0x0;
        local_128 = 0;
        plVar37[10] = (long)pplVar14;
        plVar37[9] = uVar33;
        plVar37[0xb] = (long)pcVar34;
      }
      *(undefined1 *)(plVar37 + 0xd) = 0;
      *(undefined1 *)(plVar37 + 0x10) = 0;
      if (local_f0 != '\0') {
        *(undefined1 *)(plVar37 + 0x10) = 1;
        pplStack_100 = (long **)0x0;
        local_f8 = (char *)0x0;
        local_108 = 0;
        plVar37[0xe] = (long)pplVar15;
        plVar37[0xd] = uVar36;
        plVar37[0xf] = (long)pcVar16;
      }
      *(undefined1 *)(plVar37 + 0x11) = 0;
      *(undefined1 *)(plVar37 + 0x14) = 0;
      if (local_d0 != '\0') {
        *(undefined1 *)(plVar37 + 0x14) = 1;
        pplStack_e0 = (long **)0x0;
        local_d8 = (char *)0x0;
        local_e8 = 0;
        plVar37[0x12] = (long)pplVar17;
        plVar37[0x11] = uVar35;
        plVar37[0x13] = (long)pcVar18;
      }
      *(undefined1 *)(plVar37 + 0x15) = 0;
      *(undefined1 *)(plVar37 + 0x17) = 0;
      if (local_b8 != '\0') {
        *(undefined1 *)(plVar37 + 0x17) = 1;
        local_c8 = (undefined8 *)0x0;
        plStack_c0 = (long *)0x0;
        plVar37[0x16] = (long)plVar31;
        plVar37[0x15] = (long)puVar7;
      }
      local_80 = 1;
      if ((uVar25 == 0) || (local_150 * (float)uVar25 < (float)(local_158 + 1))) {
        if (uVar25 < 3) {
          uVar42 = 1;
        }
        else {
          uVar42 = (ulong)((uVar25 & uVar25 - 1) != 0);
        }
        uVar42 = uVar42 | uVar25 << 1;
        uVar33 = (ulong)((float)(local_158 + 1) / local_150);
        if (uVar42 <= uVar33) {
          uVar42 = uVar33;
        }
        if (uVar42 - 1 == 0) {
          uVar42 = 2;
        }
        else if ((uVar42 & uVar42 - 1) != 0) {
                    /* try { // try from 002788c0 to 0027893f has its CatchHandler @ 00279348 */
          uVar42 = std::__ndk1::__next_prime(uVar42);
        }
        uVar33 = uStack_168;
        if (uStack_168 < uVar42) {
LAB_002788d8:
          FUN_0027989c(&local_170,uVar42);
        }
        else if (uVar42 < uStack_168) {
          uVar25 = (ulong)((float)local_158 / local_150);
          if (uStack_168 < 3) {
LAB_0027893c:
            uVar25 = std::__ndk1::__next_prime(uVar25);
          }
          else {
            uVar21 = NEON_cnt(uStack_168,1);
            uVar45 = NEON_uaddlv(uVar21,1);
            if (1 < (uint)CONCAT62((int6)((ulong)uVar21 >> 0x10),uVar45)) goto LAB_0027893c;
            if (1 < uVar25) {
              uVar25 = 1L << (-LZCOUNT(uVar25 - 1) & 0x3fU);
            }
          }
          if (uVar42 <= uVar25) {
            uVar42 = uVar25;
          }
          if (uVar42 < uVar33) goto LAB_002788d8;
        }
        uVar25 = uStack_168;
        if ((uStack_168 & uStack_168 - 1) == 0) {
          uVar42 = uStack_168 - 1 & uVar24;
        }
        else {
          uVar42 = uVar24;
          if (uStack_168 <= uVar24) {
            uVar42 = 0;
            if (uStack_168 != 0) {
              uVar42 = uVar24 / uStack_168;
            }
            uVar42 = uVar24 - uVar42 * uStack_168;
          }
        }
      }
      plVar30 = *(long **)((long)local_170 + uVar42 * 8);
      if (plVar30 == (long *)0x0) {
        *plVar37 = (long)local_160;
        *(long ***)((long)local_170 + uVar42 * 8) = &local_160;
        local_160 = plVar37;
        if (*plVar37 != 0) {
          uVar42 = *(ulong *)(*plVar37 + 8);
          if ((uVar25 & uVar25 - 1) == 0) {
            uVar42 = uVar42 & uVar25 - 1;
          }
          else if (uVar25 <= uVar42) {
            uVar33 = 0;
            if (uVar25 != 0) {
              uVar33 = uVar42 / uVar25;
            }
            uVar42 = uVar42 - uVar33 * uVar25;
          }
          plVar30 = (long *)((long)local_170 + uVar42 * 8);
          goto LAB_002789e4;
        }
      }
      else {
        *plVar37 = *plVar30;
LAB_002789e4:
        *plVar30 = (long)plVar37;
      }
      local_158 = local_158 + 1;
      unaff_x27 = puVar44;
LAB_002789f4:
      plVar37 = plStack_c0;
      if (((local_b8 != '\0') && (plStack_c0 != (long *)0x0)) &&
         (lVar23 = FUN_00255510(0xffffffffffffffff,plStack_c0 + 1), lVar23 == 0)) {
        (**(code **)(*plVar37 + 0x10))(plVar37);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      if ((local_d0 != '\0') && ((local_e8 & 1) != 0)) {
        operator_delete(local_d8);
      }
      if ((local_f0 != '\0') && ((local_108 & 1) != 0)) {
        operator_delete(local_f8);
      }
      if ((local_110 != '\0') && ((local_128 & 1) != 0)) {
        operator_delete(local_118);
      }
      if ((local_130 != '\0') && (((ulong)local_148 & 1) != 0)) {
        operator_delete(local_138);
      }
      facebook::jsi::Value::~Value((Value *)aIStack_2a0);
      if (((byte)local_290 & 1) != 0) {
        operator_delete(local_280);
      }
      uVar38 = uVar38 + 1;
    } while (uVar38 != uVar22);
  }
  if (local_278 != (undefined8 *)0x0) {
    (**(code **)*local_278)();
  }
  if (local_270 != (undefined8 *)0x0) {
    (**(code **)*local_270)();
  }
  local_198 = uStack_168;
  local_1a0 = local_170;
  uStack_168 = 0;
  local_170 = (void *)0x0;
  local_190 = local_160;
  local_188 = local_158;
  local_180 = local_150;
  if (local_158 == 0) {
    local_178 = '\x01';
    plVar37 = local_160;
    local_158 = 0;
    while (plVar37 != (long *)0x0) {
      plVar30 = (long *)*plVar37;
      FUN_00279620(plVar37 + 5);
      if ((*(byte *)(plVar37 + 2) & 1) != 0) {
        operator_delete((void *)plVar37[4]);
      }
      operator_delete(plVar37);
      plVar37 = plVar30;
    }
  }
  else {
    uVar38 = local_160[1];
    if ((local_198 & local_198 - 1) == 0) {
      uVar38 = uVar38 & local_198 - 1;
    }
    else if (local_198 <= uVar38) {
      uVar22 = 0;
      if (local_198 != 0) {
        uVar22 = uVar38 / local_198;
      }
      uVar38 = uVar38 - uVar22 * local_198;
    }
    *(long ***)((long)local_1a0 + uVar38 * 8) = &local_190;
    local_160 = (long *)0x0;
    local_158 = 0;
    local_178 = '\x01';
  }
  pvVar8 = local_170;
  local_170 = (void *)0x0;
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  if (local_178 == '\0') goto LAB_00279130;
  *(float *)(param_1 + 4) = local_180;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if (local_198 - 1 == 0) {
    uVar38 = 2;
LAB_00278c70:
    FUN_0027989c(param_1,uVar38);
  }
  else {
    if ((local_198 & local_198 - 1) != 0) {
                    /* try { // try from 00278bec to 00278c7b has its CatchHandler @ 002791c0 */
      uVar38 = std::__ndk1::__next_prime(local_198);
      uVar22 = param_1[1];
      bVar19 = uVar22 <= uVar38;
      if (uVar38 <= uVar22) goto LAB_00278c04;
      goto LAB_00278c70;
    }
    uVar22 = 0;
    bVar19 = true;
    uVar38 = local_198;
    if (local_198 != 0) goto LAB_00278c70;
LAB_00278c04:
    if (!bVar19) {
      uVar42 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar22 < 3) {
LAB_00278c5c:
        uVar42 = std::__ndk1::__next_prime(uVar42);
      }
      else {
        uVar21 = NEON_cnt(uVar22,1);
        uVar45 = NEON_uaddlv(uVar21,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar21 >> 0x10),uVar45)) goto LAB_00278c5c;
        if (1 < uVar42) {
          uVar42 = 1L << (-LZCOUNT(uVar42 - 1) & 0x3fU);
        }
      }
      if (uVar38 <= uVar42) {
        uVar38 = uVar42;
      }
      if (uVar38 < uVar22) goto LAB_00278c70;
    }
  }
  if (local_190 != (long *)0x0) {
    pplVar1 = (long **)(param_1 + 2);
    plVar37 = local_190;
    do {
      pbVar41 = (byte *)(plVar37 + 2);
      sVar3 = plVar37[3];
      pcVar27 = (char *)plVar37[4];
      if ((*pbVar41 & 1) == 0) {
        pcVar27 = (char *)((long)plVar37 + 0x11);
        sVar3 = (ulong)(*pbVar41 >> 1);
      }
      puVar26 = (ulong *)FUN_002603ac(pcVar27,sVar3);
      puVar44 = (ulong *)param_1[1];
      if (puVar44 != (ulong *)0x0) {
        uVar21 = NEON_cnt(puVar44,1);
        uVar45 = NEON_uaddlv(uVar21,1);
        uVar38 = CONCAT62((int6)((ulong)uVar21 >> 0x10),uVar45) & 0xffffffff;
        if (uVar38 < 2) {
          unaff_x27 = (ulong *)((long)puVar44 - 1U & (ulong)puVar26);
        }
        else {
          unaff_x27 = puVar26;
          if (puVar44 <= puVar26) {
            uVar22 = 0;
            if (puVar44 != (ulong *)0x0) {
              uVar22 = (ulong)puVar26 / (ulong)puVar44;
            }
            unaff_x27 = (ulong *)((long)puVar26 - uVar22 * (long)puVar44);
          }
        }
        plVar30 = *(long **)(*param_1 + (long)unaff_x27 * 8);
        if ((plVar30 != (long *)0x0) && (plVar30 = (long *)*plVar30, plVar30 != (long *)0x0)) {
          do {
            puVar28 = (ulong *)plVar30[1];
            if (puVar28 == puVar26) {
              bVar4 = *(byte *)(plVar30 + 2);
              uVar22 = (ulong)(bVar4 >> 1);
              sVar2 = uVar22;
              if ((bVar4 & 1) != 0) {
                sVar2 = plVar30[3];
              }
              if (sVar2 == sVar3) {
                if ((bVar4 & 1) == 0) {
                  if (bVar4 < 2) goto LAB_00278ca8;
                  pcVar32 = (char *)((long)plVar30 + 0x11);
                  pcVar34 = pcVar27;
                  while (*pcVar32 == *pcVar34) {
                    uVar22 = uVar22 - 1;
                    pcVar32 = pcVar32 + 1;
                    pcVar34 = pcVar34 + 1;
                    if (uVar22 == 0) goto LAB_00278ca8;
                  }
                }
                else {
                  iVar20 = memcmp((void *)plVar30[4],pcVar27,plVar30[3]);
                  if (iVar20 == 0) goto LAB_00278ca8;
                }
              }
            }
            else {
              if (uVar38 < 2) {
                puVar28 = (ulong *)((ulong)puVar28 & (long)puVar44 - 1U);
              }
              else if (puVar44 <= puVar28) {
                uVar22 = 0;
                if (puVar44 != (ulong *)0x0) {
                  uVar22 = (ulong)puVar28 / (ulong)puVar44;
                }
                puVar28 = (ulong *)((long)puVar28 - uVar22 * (long)puVar44);
              }
              if (puVar28 != unaff_x27) break;
            }
            plVar30 = (long *)*plVar30;
          } while (plVar30 != (long *)0x0);
        }
      }
                    /* try { // try from 00278de4 to 00278deb has its CatchHandler @ 0027935c */
      plVar30 = (long *)operator_new(0xc0);
      local_138 = (char *)((ulong)local_138 & 0xffffffffffffff00);
      *plVar30 = 0;
      plVar30[1] = (long)puVar26;
      local_148 = plVar30;
      pplStack_140 = pplVar1;
      if ((*pbVar41 & 1) == 0) {
        lVar46 = plVar37[3];
        lVar23 = *(long *)pbVar41;
        plVar30[4] = plVar37[4];
        plVar30[3] = lVar46;
        plVar30[2] = lVar23;
      }
      else {
                    /* try { // try from 00278e20 to 00278e27 has its CatchHandler @ 00279290 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(plVar30 + 2),(char *)plVar37[4],plVar37[3]);
      }
      pbVar39 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (plVar30 + 5);
      *pbVar39 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0
      ;
      *(undefined1 *)(plVar30 + 8) = 0;
      if ((char)plVar37[8] != '\0') {
        if ((*(byte *)(plVar37 + 5) & 1) == 0) {
          lVar46 = plVar37[6];
          lVar23 = plVar37[5];
          plVar30[7] = plVar37[7];
          plVar30[6] = lVar46;
          *(long *)pbVar39 = lVar23;
        }
        else {
                    /* try { // try from 00278e5c to 00278e63 has its CatchHandler @ 002791f8 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external(pbVar39,(char *)plVar37[7],plVar37[6]);
        }
        *(undefined1 *)(plVar30 + 8) = 1;
      }
      pbVar39 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (plVar30 + 9);
      *pbVar39 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0
      ;
      *(undefined1 *)(plVar30 + 0xc) = 0;
      if ((char)plVar37[0xc] != '\0') {
        if ((*(byte *)(plVar37 + 9) & 1) == 0) {
          lVar46 = plVar37[10];
          lVar23 = plVar37[9];
          plVar30[0xb] = plVar37[0xb];
          plVar30[10] = lVar46;
          *(long *)pbVar39 = lVar23;
        }
        else {
                    /* try { // try from 00278ea0 to 00278ea7 has its CatchHandler @ 002791e8 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external(pbVar39,(char *)plVar37[0xb],plVar37[10]);
        }
        *(undefined1 *)(plVar30 + 0xc) = 1;
      }
      pbVar39 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (plVar30 + 0xd);
      *pbVar39 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0
      ;
      *(undefined1 *)(plVar30 + 0x10) = 0;
      if ((char)plVar37[0x10] != '\0') {
        if ((*(byte *)(plVar37 + 0xd) & 1) == 0) {
          lVar46 = plVar37[0xe];
          lVar23 = plVar37[0xd];
          plVar30[0xf] = plVar37[0xf];
          plVar30[0xe] = lVar46;
          *(long *)pbVar39 = lVar23;
        }
        else {
                    /* try { // try from 00278ee4 to 00278eeb has its CatchHandler @ 00279230 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external(pbVar39,(char *)plVar37[0xf],plVar37[0xe]);
        }
        *(undefined1 *)(plVar30 + 0x10) = 1;
      }
      pbVar39 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (plVar30 + 0x11);
      *pbVar39 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0
      ;
      *(undefined1 *)(plVar30 + 0x14) = 0;
      if ((char)plVar37[0x14] != '\0') {
        if ((*(byte *)(plVar37 + 0x11) & 1) == 0) {
          lVar46 = plVar37[0x12];
          lVar23 = plVar37[0x11];
          plVar30[0x13] = plVar37[0x13];
          plVar30[0x12] = lVar46;
          *(long *)pbVar39 = lVar23;
        }
        else {
                    /* try { // try from 00278f28 to 00278f2f has its CatchHandler @ 00279208 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external(pbVar39,(char *)plVar37[0x13],plVar37[0x12]);
        }
        *(undefined1 *)(plVar30 + 0x14) = 1;
      }
      *(undefined1 *)(plVar30 + 0x15) = 0;
      *(undefined1 *)(plVar30 + 0x17) = 0;
      if ((char)plVar37[0x17] != '\0') {
        plVar30[0x15] = plVar37[0x15];
        lVar23 = plVar37[0x16];
        plVar30[0x16] = lVar23;
        if (lVar23 != 0) {
          FUN_00259a00(1,lVar23 + 8);
        }
        *(undefined1 *)(plVar30 + 0x17) = 1;
      }
      local_138 = (char *)CONCAT71(local_138._1_7_,1);
      if ((puVar44 == (ulong *)0x0) ||
         (*(float *)(param_1 + 4) * (float)puVar44 < (float)(param_1[3] + 1))) {
        if (puVar44 < (ulong *)0x3) {
          uVar38 = 1;
        }
        else {
          uVar38 = (ulong)(((ulong)puVar44 & (long)puVar44 - 1U) != 0);
        }
        uVar38 = uVar38 | (long)puVar44 << 1;
        uVar22 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar38 <= uVar22) {
          uVar38 = uVar22;
        }
        if (uVar38 - 1 == 0) {
          uVar38 = 2;
        }
        else if ((uVar38 & uVar38 - 1) != 0) {
                    /* try { // try from 00278fe8 to 0027906b has its CatchHandler @ 00279294 */
          uVar38 = std::__ndk1::__next_prime(uVar38);
        }
        uVar22 = param_1[1];
        if (uVar22 < uVar38) {
LAB_00279000:
          FUN_0027989c(param_1,uVar38);
        }
        else if (uVar38 < uVar22) {
          uVar42 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
          if (uVar22 < 3) {
LAB_00279068:
            uVar42 = std::__ndk1::__next_prime(uVar42);
          }
          else {
            uVar21 = NEON_cnt(uVar22,1);
            uVar45 = NEON_uaddlv(uVar21,1);
            if (1 < (uint)CONCAT62((int6)((ulong)uVar21 >> 0x10),uVar45)) goto LAB_00279068;
            if (1 < uVar42) {
              uVar42 = 1L << (-LZCOUNT(uVar42 - 1) & 0x3fU);
            }
          }
          if (uVar38 <= uVar42) {
            uVar38 = uVar42;
          }
          if (uVar38 < uVar22) goto LAB_00279000;
        }
        puVar44 = (ulong *)param_1[1];
        if (((ulong)puVar44 & (long)puVar44 - 1U) == 0) {
          unaff_x27 = (ulong *)((long)puVar44 - 1U & (ulong)puVar26);
        }
        else {
          unaff_x27 = puVar26;
          if (puVar44 <= puVar26) {
            uVar38 = 0;
            if (puVar44 != (ulong *)0x0) {
              uVar38 = (ulong)puVar26 / (ulong)puVar44;
            }
            unaff_x27 = (ulong *)((long)puVar26 - uVar38 * (long)puVar44);
          }
        }
      }
      lVar23 = *param_1;
      plVar31 = *(long **)(lVar23 + (long)unaff_x27 * 8);
      if (plVar31 == (long *)0x0) {
        plVar31 = *pplVar1;
        *pplVar1 = plVar30;
        *plVar30 = (long)plVar31;
        *(long ***)(lVar23 + (long)unaff_x27 * 8) = pplVar1;
        if (*plVar30 != 0) {
          puVar26 = *(ulong **)(*plVar30 + 8);
          if (((ulong)puVar44 & (long)puVar44 - 1U) == 0) {
            puVar26 = (ulong *)((ulong)puVar26 & (long)puVar44 - 1U);
          }
          else if (puVar44 <= puVar26) {
            uVar38 = 0;
            if (puVar44 != (ulong *)0x0) {
              uVar38 = (ulong)puVar26 / (ulong)puVar44;
            }
            puVar26 = (ulong *)((long)puVar26 - uVar38 * (long)puVar44);
          }
          plVar31 = (long *)(*param_1 + (long)puVar26 * 8);
          goto LAB_00278c98;
        }
      }
      else {
        *plVar30 = *plVar31;
LAB_00278c98:
        *plVar31 = (long)plVar30;
      }
      param_1[3] = param_1[3] + 1;
LAB_00278ca8:
      plVar37 = (long *)*plVar37;
    } while (plVar37 != (long *)0x0);
  }
  *(undefined1 *)(param_1 + 5) = 1;
  pvVar8 = local_1a0;
  plVar37 = local_190;
  if (local_178 != '\0') {
    while (plVar37 != (long *)0x0) {
      plVar30 = (long *)*plVar37;
      local_1a0 = pvVar8;
      FUN_00279620(plVar37 + 5);
      if ((*(byte *)(plVar37 + 2) & 1) != 0) {
        operator_delete((void *)plVar37[4]);
      }
      operator_delete(plVar37);
      pvVar8 = local_1a0;
      plVar37 = plVar30;
    }
    local_1a0 = (void *)0x0;
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
    }
  }
LAB_00279130:
  facebook::jsi::Value::~Value((Value *)local_2b8);
  if (((byte)local_2d0 & 1) != 0) {
    operator_delete(local_2c0);
  }
  if (local_2a8 != (undefined8 *)0x0) {
    (**(code **)*local_2a8)();
  }
  if (*(long *)(lVar6 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00279620  FUN_00279620 =====

void FUN_00279620(byte *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((param_1[0x90] != 0) && (plVar4 = *(long **)(param_1 + 0x88), plVar4 != (long *)0x0)) &&
     (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if ((param_1[0x78] != 0) && ((param_1[0x60] & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x70));
  }
  if ((param_1[0x58] != 0) && ((param_1[0x40] & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x50));
  }
  if ((param_1[0x38] != 0) && ((param_1[0x20] & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  if ((param_1[0x18] == 0) || ((*param_1 & 1) == 0)) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(*(void **)(param_1 + 0x10));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00279724  FUN_00279724 =====

void FUN_00279724(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 5) != '\0') {
    puVar2 = (undefined8 *)param_1[2];
    while (puVar2 != (undefined8 *)0x0) {
      pvVar3 = (void *)*puVar2;
      FUN_00279620(puVar2 + 5);
      if ((*(byte *)(puVar2 + 2) & 1) != 0) {
        operator_delete((void *)puVar2[4]);
      }
      operator_delete(puVar2);
      puVar2 = (undefined8 *)pvVar3;
    }
    pvVar3 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar3 != (void *)0x0) {
      if (*(long *)(lVar1 + 0x28) == lVar4) {
        operator_delete(pvVar3);
        return;
      }
      goto LAB_002797dc;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
LAB_002797dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002797e0  FUN_002797e0 =====

void FUN_002797e0(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 5) != '\0') {
    puVar2 = (undefined8 *)param_1[2];
    while (puVar2 != (undefined8 *)0x0) {
      pvVar3 = (void *)*puVar2;
      FUN_00279620(puVar2 + 5);
      if ((*(byte *)(puVar2 + 2) & 1) != 0) {
        operator_delete((void *)puVar2[4]);
      }
      operator_delete(puVar2);
      puVar2 = (undefined8 *)pvVar3;
    }
    pvVar3 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar3 != (void *)0x0) {
      if (*(long *)(lVar1 + 0x28) == lVar4) {
        operator_delete(pvVar3);
        return;
      }
      goto LAB_00279898;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
LAB_00279898:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027989c  FUN_0027989c =====

void FUN_0027989c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  if (param_2 == 0) {
    pvVar3 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      if (*(long *)(lVar2 + 0x28) == lVar4) {
        FUN_00260a2c();
      }
      goto LAB_00279a34;
    }
    pvVar3 = operator_new(param_2 << 3);
    pvVar5 = (void *)*param_1;
    *param_1 = (long)pvVar3;
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
    }
    uVar6 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar6 * 8) = 0;
      uVar6 = uVar6 + 1;
    } while (param_2 != uVar6);
    plVar7 = (long *)param_1[2];
    if (plVar7 != (long *)0x0) {
      uVar6 = plVar7[1];
      uVar12 = NEON_cnt(param_2,1);
      uVar11 = NEON_uaddlv(uVar12,1);
      uVar8 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
      if (uVar8 < 2) {
        uVar6 = uVar6 & param_2 - 1;
      }
      else if (param_2 <= uVar6) {
        uVar10 = 0;
        if (param_2 != 0) {
          uVar10 = uVar6 / param_2;
        }
        uVar6 = uVar6 - uVar10 * param_2;
      }
      *(long **)(*param_1 + uVar6 * 8) = param_1 + 2;
      plVar9 = (long *)*plVar7;
      if (plVar9 != (long *)0x0) {
        do {
          uVar10 = plVar9[1];
          if (uVar8 < 2) {
            uVar10 = uVar10 & param_2 - 1;
          }
          else if (param_2 <= uVar10) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar10 / param_2;
            }
            uVar10 = uVar10 - uVar1 * param_2;
          }
          if (uVar10 != uVar6) {
            if (*(long *)(*param_1 + uVar10 * 8) == 0) {
              *(long **)(*param_1 + uVar10 * 8) = plVar7;
              uVar6 = uVar10;
            }
            else {
              *plVar7 = *plVar9;
              *plVar9 = **(long **)(*param_1 + uVar10 * 8);
              **(undefined8 **)(*param_1 + uVar10 * 8) = plVar9;
              plVar9 = plVar7;
            }
          }
          plVar7 = plVar9;
          plVar9 = (long *)*plVar7;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
LAB_00279a34:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00279a38  FUN_00279a38 =====

void FUN_00279a38(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)param_1[2];
  while (puVar2 != (undefined8 *)0x0) {
    pvVar3 = (void *)*puVar2;
    FUN_00279620(puVar2 + 5);
    if ((*(byte *)(puVar2 + 2) & 1) != 0) {
      operator_delete((void *)puVar2[4]);
    }
    operator_delete(puVar2);
    puVar2 = (undefined8 *)pvVar3;
  }
  pvVar3 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar3 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar4) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(pvVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00279aec  FUN_00279aec =====

void FUN_00279aec(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  pvVar3 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar3 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else {
    if ((*(char *)(param_1 + 2) != '\0') &&
       (FUN_00279620((long)pvVar3 + 0x28), (*(byte *)((long)pvVar3 + 0x10) & 1) != 0)) {
      operator_delete(*(void **)((long)pvVar3 + 0x20));
    }
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      operator_delete(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00279b7c  FUN_00279b7c =====

void FUN_00279b7c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)param_1[2];
  while (puVar2 != (undefined8 *)0x0) {
    pvVar3 = (void *)*puVar2;
    FUN_00279620(puVar2 + 5);
    if ((*(byte *)(puVar2 + 2) & 1) != 0) {
      operator_delete((void *)puVar2[4]);
    }
    operator_delete(puVar2);
    puVar2 = (undefined8 *)pvVar3;
  }
  pvVar3 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar3 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar4) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(pvVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00279c30  FUN_00279c30 =====

void FUN_00279c30(long *param_1,long *param_2,IRuntime *param_3)

{
  long lVar1;
  long lVar2;
  JSError *pJVar3;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 *local_80 [3];
  long local_68;
  long *plStack_60;
  undefined8 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  facebook::jsi::Value::asObject(param_3);
                    /* try { // try from 00279c74 to 00279c83 has its CatchHandler @ 00279ee8 */
  (**(code **)(*param_2 + 0x160))(&local_68,param_2,&local_50);
  if ((local_68 == 0) ||
     (lVar2 = __dynamic_cast(local_68,PTR_typeinfo_00394860,PTR_typeinfo_00394b40,0xffffffffffffffff
                            ), lVar2 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
                    /* try { // try from 00279d24 to 00279d33 has its CatchHandler @ 00279ed0 */
    facebook::jsi::Value::toString(param_3);
                    /* try { // try from 00279d3c to 00279d4b has its CatchHandler @ 00279eb0 */
    (**(code **)(*param_2 + 0x120))(&local_68,param_2,local_80);
    if (local_80[0] != (undefined8 *)0x0) {
      (**(code **)*local_80[0])();
    }
                    /* try { // try from 00279d60 to 00279d73 has its CatchHandler @ 00279e98 */
    FUN_00264e5c(local_80,PTR_typeinfo_name_00394d80,0);
    pJVar3 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00279d80 to 00279d93 has its CatchHandler @ 00279e78 */
    std::__ndk1::operator+
              ("Downcasting failed - It has a different NativeState<T>!\n- Did you accidentally pass a different type?\n- Is react-native-nitro-modules linked multiple times? Ensure you don\'t have any duplicate symbols for `"
               ,(basic_string *)local_80);
                    /* try { // try from 00279d94 to 00279da7 has its CatchHandler @ 00279e60 */
    FUN_00263450(auStack_b0,auStack_c8,"` in your app\'s binary.");
                    /* try { // try from 00279da8 to 00279db7 has its CatchHandler @ 00279e30 */
    FUN_00279fb0(auStack_98,&local_68,auStack_b0);
                    /* try { // try from 00279dbc to 00279df7 has its CatchHandler @ 00279df8 */
    facebook::jsi::JSError::JSError(pJVar3,param_2,auStack_98);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar3,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
  else {
    *param_1 = lVar2;
    param_1[1] = (long)plStack_60;
    if (plStack_60 != (long *)0x0) {
      FUN_00259a00(1,plStack_60 + 1);
      lVar2 = FUN_00255510(0xffffffffffffffff,plStack_60 + 1);
      if (lVar2 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
    if (local_50 != (undefined8 *)0x0) {
      (**(code **)*local_50)();
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00279f1c  FUN_00279f1c =====

void FUN_00279f1c(long *param_1,char param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (((param_2 == '\0') || (param_1 == (long *)0x0)) ||
     (lVar2 = FUN_00255510(0xffffffffffffffff,param_1 + 1), lVar2 != 0)) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00279fb0  FUN_00279fb0 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00279fb0(undefined8 *param_1,byte *param_2,byte *param_3)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  char *__dest;
  byte bVar3;
  long lVar4;
  char *pcVar5;
  void *pvVar6;
  undefined *puVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  byte *pbVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong local_d8;
  ulong local_d0;
  undefined8 local_c8;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  byte local_88 [16];
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  undefined8 *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_60 = (undefined8 *)operator_new(0x30);
  puVar7 = PTR_typeinfo_name_00394d80;
  uStack_68 = _UNK_001d7ea8;
  local_70 = _DAT_001d7ea0;
  *(undefined1 *)((long)local_60 + 0x2a) = 0;
  uVar14 = *(undefined8 *)puVar7;
  uVar16 = *(undefined8 *)(puVar7 + 0x18);
  uVar15 = *(undefined8 *)(puVar7 + 0x10);
  uVar13 = *(undefined8 *)(puVar7 + 0x22);
  uVar12 = *(undefined8 *)(puVar7 + 0x1a);
  local_60[1] = *(undefined8 *)(puVar7 + 8);
  *local_60 = uVar14;
  local_60[3] = uVar16;
  local_60[2] = uVar15;
  *(undefined8 *)((long)local_60 + 0x22) = uVar13;
  *(undefined8 *)((long)local_60 + 0x1a) = uVar12;
                    /* try { // try from 0027a018 to 0027a027 has its CatchHandler @ 0027a310 */
  margelo::nitro::TypeInfo::demangleName((basic_string *)&local_70,false);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  bVar3 = *param_2;
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  uVar1 = __n + 0x10;
  if (uVar1 < 0xfffffffffffffff0) {
    if (uVar1 < 0x17) {
      local_d0 = 0;
      uVar10 = ((uint)uVar1 & 0xff) << 1;
      local_c8 = (char *)0x0;
      local_d8 = (ulong)(byte)uVar10;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 0027a084 to 0027a08b has its CatchHandler @ 0027a324 */
      local_c8 = (char *)operator_new(uVar2);
      local_d8 = uVar2 | 1;
      uVar10 = (uint)local_d8 & 0xff;
      local_d0 = uVar1;
    }
    uVar12 = s_Cannot_convert___001d6d63._0_8_;
    __dest = (char *)((long)&local_c8 + 1);
    pcVar5 = (char *)((ulong)&local_d8 | 1);
    if ((uVar10 & 1) != 0) {
      __dest = local_c8 + 0x10;
      pcVar5 = local_c8;
    }
    *(undefined8 *)(pcVar5 + 8) = s_Cannot_convert___001d6d63._8_8_;
    *(undefined8 *)pcVar5 = uVar12;
    if (__n != 0) {
      pbVar11 = *(byte **)(param_2 + 0x10);
      if ((bVar3 & 1) == 0) {
        pbVar11 = param_2 + 1;
      }
      memmove(__dest,pbVar11,__n);
    }
    __dest[__n] = '\0';
                    /* try { // try from 0027a0e8 to 0027a0fb has its CatchHandler @ 0027a2f0 */
    puVar8 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_d8,0x1d7691);
    local_b0 = (void *)puVar8[2];
    uStack_b8 = puVar8[1];
    local_c0 = *puVar8;
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
    pvVar6 = (void *)((ulong)local_88 | 1);
    if ((local_88[0] & 1) != 0) {
      pvVar6 = local_78;
    }
                    /* try { // try from 0027a134 to 0027a13b has its CatchHandler @ 0027a2d0 */
    puVar8 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_c0,(ulong)pvVar6);
    local_90 = (void *)puVar8[2];
    uStack_98 = puVar8[1];
    local_a0 = *puVar8;
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
                    /* try { // try from 0027a154 to 0027a167 has its CatchHandler @ 0027a2b0 */
    puVar8 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_a0,0x1d6339);
    local_60 = (undefined8 *)puVar8[2];
    uStack_68 = puVar8[1];
    local_70 = *puVar8;
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
    pbVar11 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar11 = param_3 + 1;
    }
                    /* try { // try from 0027a198 to 0027a19f has its CatchHandler @ 0027a26c */
    puVar9 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       ((char *)&local_70,(ulong)pbVar11);
    uVar12 = puVar9[2];
    uVar14 = puVar9[1];
    uVar13 = *puVar9;
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    param_1[1] = uVar14;
    *param_1 = uVar13;
    param_1[2] = uVar12;
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
    if ((local_d8 & 1) != 0) {
      operator_delete(local_c8);
    }
    if ((local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    if (*(long *)(lVar4 + 0x28) == local_58) {
      return;
    }
  }
  else if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* try { // try from 0027a268 to 0027a26b has its CatchHandler @ 0027a324 */
    uVar12 = FUN_00260a84();
                    /* catch() { ... } // from try @ 0027a198 with catch @ 0027a26c */
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
    if ((local_d8 & 1) != 0) {
      operator_delete(local_c8);
    }
    if ((local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    if (*(long *)(lVar4 + 0x28) == local_58) {
      FUN_00255d34(uVar12);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027a354  FUN_0027a354 =====

void FUN_0027a354(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
     ) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027a3e0  FUN_0027a3e0 =====

void FUN_0027a3e0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
     ) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027a46c  FUN_0027a46c =====

void FUN_0027a46c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037c868;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete((void *)param_1[3]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027a4d8  FUN_0027a4d8 =====

void FUN_0027a4d8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037c868;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027a540  FUN_0027a540 =====

undefined8 * FUN_0027a540(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x38);
  bVar2 = *(byte *)(param_1 + 8);
  *puVar4 = &PTR_FUN_0037c868;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 0027a5a0 to 0027a5a3 has its CatchHandler @ 0027a5dc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar4 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    puVar4[5] = *(undefined8 *)(param_1 + 0x28);
    puVar4[4] = uVar6;
    *(undefined4 *)(puVar4 + 6) = uVar1;
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027a604  FUN_0027a604 =====

void FUN_0027a604(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037c868;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar4;
    param_2[1] = uVar3;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x30);
    param_2[5] = uVar4;
    param_2[4] = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027a69c  FUN_0027a69c =====

void FUN_0027a69c(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027a6fc  FUN_0027a6fc =====

void FUN_0027a6fc(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027a758  FUN_0027a758 =====

void FUN_0027a758(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  int *piVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  JSError *pJVar8;
  ulong uVar9;
  long *plVar10;
  int *piVar11;
  code *pcVar12;
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 *local_110;
  long *plStack_108;
  undefined1 local_100;
  ulong local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  char local_e0;
  char local_d8;
  undefined8 local_c8;
  long *local_c0;
  char local_b8;
  undefined8 *local_b0;
  long *plStack_a8;
  undefined1 local_a0;
  ulong local_98;
  undefined8 uStack_90;
  void *local_88;
  char local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  piVar11 = (int *)*param_5;
  uVar9 = *param_6;
  local_b0 = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 0027a7b8 to 0027a7c7 has its CatchHandler @ 0027af7c */
  (**(code **)(*param_3 + 0x160))(&local_110,param_3,&local_b0);
  plVar1 = plStack_108;
  if ((local_110 == (undefined8 *)0x0) ||
     (lVar6 = __dynamic_cast(local_110,PTR_typeinfo_00394860,PTR_typeinfo_00394870,
                             0xffffffffffffffff), lVar6 == 0)) {
    lVar6 = 0;
    plVar10 = (long *)0x0;
    if (plVar1 == (long *)0x0) goto joined_r0x0027a840;
  }
  else {
    if (plVar1 == (long *)0x0) {
      plVar10 = (long *)0x0;
      goto joined_r0x0027a840;
    }
    FUN_00259a00(1,plVar1 + 1);
    plVar10 = plVar1;
  }
  lVar7 = FUN_00255510(0xffffffffffffffff,plVar1 + 1);
  if (lVar7 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x0027a840:
  if (local_b0 != (undefined8 *)0x0) {
    (**(code **)*local_b0)();
  }
  piVar2 = (int *)PTR_defaultValue_00394918;
  if (uVar9 < 2) {
    pcVar12 = *(code **)(param_2 + 0x20);
    uVar3 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00394920 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_defaultValue_00394920), iVar5 != 0)) {
      *piVar2 = 0;
      __cxa_atexit(PTR__Value_00394848,piVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00394920);
    }
    plVar1 = (long *)(lVar6 + ((long)uVar3 >> 1));
    if ((uVar3 & 1) != 0) {
      pcVar12 = *(code **)(pcVar12 + *plVar1);
    }
    if (uVar9 != 0) {
      piVar2 = piVar11;
    }
    if (*piVar2 == 0) {
      local_110 = (undefined8 *)((ulong)local_110 & 0xffffffffffffff00);
      local_d8 = '\0';
    }
    else {
                    /* try { // try from 0027a8a0 to 0027a8ab has its CatchHandler @ 0027ac54 */
      FUN_0026fe74(&local_b0,param_3);
      local_f8 = local_f8 & 0xffffffffffffff00;
      local_100 = local_a0;
      plStack_108 = plStack_a8;
      local_110 = local_b0;
      local_e0 = local_80 != '\0';
      if ((bool)local_e0) {
        uStack_f0 = uStack_90;
        local_f8 = local_98;
        local_e8 = local_88;
      }
      local_d8 = '\x01';
    }
                    /* try { // try from 0027a8fc to 0027a90b has its CatchHandler @ 0027ac60 */
    (*pcVar12)(&local_c8,plVar1,&local_110);
    if (((local_d8 != '\0') && (local_e0 != '\0')) && ((local_f8 & 1) != 0)) {
      operator_delete(local_e8);
    }
    if (local_b8 == '\0') {
      *param_1 = 0;
    }
    else {
                    /* try { // try from 0027a938 to 0027a943 has its CatchHandler @ 0027ac38 */
      FUN_00270734(param_1,param_3,local_c8);
      if (((local_b8 != '\0') && (local_c0 != (long *)0x0)) &&
         (lVar6 = FUN_00255510(0xffffffffffffffff,local_c0 + 1), lVar6 == 0)) {
        (**(code **)(*local_c0 + 0x10))(local_c0);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
    if ((plVar10 != (long *)0x0) &&
       (lVar6 = FUN_00255510(0xffffffffffffffff,plVar10 + 1), lVar6 == 0)) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar4 + 0x28) == local_78) {
      return;
    }
  }
  else {
                    /* try { // try from 0027a9f4 to 0027aa03 has its CatchHandler @ 0027b0bc */
    FUN_00269c28(&local_110,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar6);
    pJVar8 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0027aa10 to 0027aa23 has its CatchHandler @ 0027b09c */
    std::__ndk1::operator+("`",(basic_string *)&local_110);
                    /* try { // try from 0027aa24 to 0027aa37 has its CatchHandler @ 0027b084 */
    FUN_00263450(auStack_188,auStack_1a0,"` expected between ");
                    /* try { // try from 0027aa38 to 0027aa43 has its CatchHandler @ 0027b054 */
    std::__ndk1::to_string(0);
                    /* try { // try from 0027aa44 to 0027aa53 has its CatchHandler @ 0027b030 */
    FUN_00264adc(auStack_170,auStack_188,auStack_1b8);
                    /* try { // try from 0027aa54 to 0027aa67 has its CatchHandler @ 0027b00c */
    FUN_00263450(auStack_158,auStack_170," and ");
                    /* try { // try from 0027aa68 to 0027aa73 has its CatchHandler @ 0027afe8 */
    std::__ndk1::to_string(1);
                    /* try { // try from 0027aa74 to 0027aa83 has its CatchHandler @ 0027afc4 */
    FUN_00264adc(auStack_140,auStack_158,auStack_1d0);
                    /* try { // try from 0027aa84 to 0027aa97 has its CatchHandler @ 0027af9c */
    FUN_00263450(auStack_128,auStack_140," arguments, but received ");
                    /* try { // try from 0027aa98 to 0027aaa3 has its CatchHandler @ 0027ac14 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 0027aaa4 to 0027aab3 has its CatchHandler @ 0027abf0 */
    FUN_00264adc(&local_c8,auStack_128,auStack_1e8);
                    /* try { // try from 0027aab4 to 0027aac7 has its CatchHandler @ 0027abcc */
    FUN_00263450(&local_b0,&local_c8,&DAT_001d5be0);
                    /* try { // try from 0027aacc to 0027ab07 has its CatchHandler @ 0027ab54 */
    facebook::jsi::JSError::JSError(pJVar8,param_3,&local_b0);
    if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar8,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027b0e4  FUN_0027b0e4 =====

void FUN_0027b0e4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394928) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0027b134  FUN_0027b134 =====

undefined * FUN_0027b134(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394930;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027b174  FUN_0027b174 =====

void FUN_0027b174(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037c7e8;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete((void *)param_1[3]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027b1e0  FUN_0027b1e0 =====

void FUN_0027b1e0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037c7e8;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027b248  FUN_0027b248 =====

undefined8 * FUN_0027b248(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x38);
  bVar2 = *(byte *)(param_1 + 8);
  *puVar4 = &PTR_FUN_0037c7e8;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 0027b2a8 to 0027b2ab has its CatchHandler @ 0027b2e4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar4 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    puVar4[5] = *(undefined8 *)(param_1 + 0x28);
    puVar4[4] = uVar6;
    *(undefined4 *)(puVar4 + 6) = uVar1;
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027b30c  FUN_0027b30c =====

void FUN_0027b30c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037c7e8;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar4;
    param_2[1] = uVar3;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x30);
    param_2[5] = uVar4;
    param_2[4] = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027b3a4  FUN_0027b3a4 =====

void FUN_0027b3a4(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027b404  FUN_0027b404 =====

void FUN_0027b404(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027b460  FUN_0027b460 =====

void FUN_0027b460(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  JSError *pJVar7;
  long *plVar8;
  ulong uVar9;
  IRuntime *pIVar10;
  code *pcVar11;
  undefined8 *local_140 [3];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [2];
  void *local_88;
  long local_80;
  long *local_78;
  char local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pIVar10 = (IRuntime *)*param_5;
  uVar9 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 0027b4c0 to 0027b4cf has its CatchHandler @ 0027bb2c */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  plVar1 = local_78;
  if ((local_80 == 0) ||
     (lVar5 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00394870,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plVar1 == (long *)0x0) goto joined_r0x0027b548;
  }
  else {
    if (plVar1 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x0027b548;
    }
    FUN_00259a00(1,plVar1 + 1);
    plVar8 = plVar1;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plVar1 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x0027b548:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar9 == 1) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00394900 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_00394900), puVar3 = PTR_defaultValue_003948f8,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_003948f8 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00394900);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
                    /* try { // try from 0027b584 to 0027b593 has its CatchHandler @ 0027b838 */
    facebook::jsi::Value::asString(pIVar10);
                    /* try { // try from 0027b59c to 0027b5ab has its CatchHandler @ 0027b814 */
    (**(code **)(*param_3 + 0x120))(local_98,param_3,local_140);
    if (local_140[0] != (undefined8 *)0x0) {
      (**(code **)*local_140[0])();
    }
                    /* try { // try from 0027b5c0 to 0027b5cf has its CatchHandler @ 0027b7f8 */
    (*pcVar11)(&local_80,plVar1,local_98);
    if (((ulong)local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_70 == '\0') {
      *param_1 = 0;
    }
    else {
                    /* try { // try from 0027b5ec to 0027b5f7 has its CatchHandler @ 0027b7dc */
      FUN_00270734(param_1,param_3,local_80);
      if (((local_70 != '\0') && (local_78 != (long *)0x0)) &&
         (lVar5 = FUN_00255510(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
        (**(code **)(*local_78 + 0x10))(local_78);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
    if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar5 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 0027b6a8 to 0027b6b7 has its CatchHandler @ 0027bccc */
    FUN_00269c28(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0027b6c4 to 0027b6d7 has its CatchHandler @ 0027bcac */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 0027b6d8 to 0027b6eb has its CatchHandler @ 0027bc94 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 0027b6ec to 0027b6f7 has its CatchHandler @ 0027bc64 */
    std::__ndk1::to_string(1);
                    /* try { // try from 0027b6f8 to 0027b707 has its CatchHandler @ 0027bc40 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 0027b708 to 0027b71b has its CatchHandler @ 0027bc1c */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 0027b71c to 0027b727 has its CatchHandler @ 0027bbf8 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 0027b728 to 0027b737 has its CatchHandler @ 0027bbd4 */
    FUN_00264adc(auStack_b0,auStack_c8,local_140);
                    /* try { // try from 0027b738 to 0027b74b has its CatchHandler @ 0027bbac */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 0027b750 to 0027b78b has its CatchHandler @ 0027bb4c */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027bcf4  FUN_0027bcf4 =====

void FUN_0027bcf4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394908) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0027bd44  FUN_0027bd44 =====

undefined * FUN_0027bd44(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394910;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027bd84  FUN_0027bd84 =====

void FUN_0027bd84(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037c768;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete((void *)param_1[3]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027bdf0  FUN_0027bdf0 =====

void FUN_0027bdf0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037c768;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027be58  FUN_0027be58 =====

undefined8 * FUN_0027be58(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x38);
  bVar2 = *(byte *)(param_1 + 8);
  *puVar4 = &PTR_FUN_0037c768;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 0027beb8 to 0027bebb has its CatchHandler @ 0027bef4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar4 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    puVar4[5] = *(undefined8 *)(param_1 + 0x28);
    puVar4[4] = uVar6;
    *(undefined4 *)(puVar4 + 6) = uVar1;
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027bf1c  FUN_0027bf1c =====

void FUN_0027bf1c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037c768;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar4;
    param_2[1] = uVar3;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x30);
    param_2[5] = uVar4;
    param_2[4] = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027bfb4  FUN_0027bfb4 =====

void FUN_0027bfb4(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027c014  FUN_0027c014 =====

void FUN_0027c014(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027c070  FUN_0027c070 =====

void FUN_0027c070(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  JSError *pJVar7;
  long *plVar8;
  ulong uVar9;
  code *pcVar10;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  long local_80;
  long *local_78;
  char local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar9 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 0027c0d0 to 0027c0df has its CatchHandler @ 0027c3c0 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  plVar1 = local_78;
  if ((local_80 == 0) ||
     (lVar5 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00394870,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plVar1 == (long *)0x0) goto joined_r0x0027c158;
  }
  else {
    if (plVar1 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x0027c158;
    }
    FUN_00259a00(1,plVar1 + 1);
    plVar8 = plVar1;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plVar1 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x0027c158:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar9 == 1) {
    pcVar10 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_003948e0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_003948e0), puVar3 = PTR_defaultValue_003948d8,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_003948d8 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_003948e0);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar10 = *(code **)(pcVar10 + *plVar1);
    }
                    /* try { // try from 0027c194 to 0027c1a7 has its CatchHandler @ 0027c464 */
    facebook::jsi::Value::asNumber();
    (*pcVar10)(&local_80,plVar1);
    if (local_70 == '\0') {
      *param_1 = 0;
    }
    else {
                    /* try { // try from 0027c1b4 to 0027c1bf has its CatchHandler @ 0027c3a4 */
      FUN_00270734(param_1,param_3,local_80);
      if (((local_70 != '\0') && (local_78 != (long *)0x0)) &&
         (lVar5 = FUN_00255510(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
        (**(code **)(*local_78 + 0x10))(local_78);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
    if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar5 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 0027c270 to 0027c27f has its CatchHandler @ 0027c854 */
    FUN_00269c28(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0027c28c to 0027c29f has its CatchHandler @ 0027c834 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 0027c2a0 to 0027c2b3 has its CatchHandler @ 0027c81c */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 0027c2b4 to 0027c2bf has its CatchHandler @ 0027c7ec */
    std::__ndk1::to_string(1);
                    /* try { // try from 0027c2c0 to 0027c2cf has its CatchHandler @ 0027c7c8 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 0027c2d0 to 0027c2e3 has its CatchHandler @ 0027c7a4 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 0027c2e4 to 0027c2ef has its CatchHandler @ 0027c780 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 0027c2f0 to 0027c2ff has its CatchHandler @ 0027c75c */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 0027c300 to 0027c313 has its CatchHandler @ 0027c440 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 0027c318 to 0027c353 has its CatchHandler @ 0027c3e0 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027c87c  FUN_0027c87c =====

void FUN_0027c87c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003948e8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0027c8cc  FUN_0027c8cc =====

undefined * FUN_0027c8cc(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003948f0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027c90c  FUN_0027c90c =====

void FUN_0027c90c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037c6e8;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete((void *)param_1[3]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027c978  FUN_0027c978 =====

void FUN_0027c978(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037c6e8;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027c9e0  FUN_0027c9e0 =====

undefined8 * FUN_0027c9e0(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x38);
  bVar2 = *(byte *)(param_1 + 8);
  *puVar4 = &PTR_FUN_0037c6e8;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 0027ca40 to 0027ca43 has its CatchHandler @ 0027ca7c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar4 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    puVar4[5] = *(undefined8 *)(param_1 + 0x28);
    puVar4[4] = uVar6;
    *(undefined4 *)(puVar4 + 6) = uVar1;
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027caa4  FUN_0027caa4 =====

void FUN_0027caa4(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037c6e8;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar4;
    param_2[1] = uVar3;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x30);
    param_2[5] = uVar4;
    param_2[4] = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027cb3c  FUN_0027cb3c =====

void FUN_0027cb3c(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027cb9c  FUN_0027cb9c =====

void FUN_0027cb9c(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027cbf8  FUN_0027cbf8 =====

void FUN_0027cbf8(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long lVar1;
  byte *pbVar2;
  undefined *puVar3;
  byte *pbVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  JSError *pJVar8;
  byte *pbVar9;
  ulong uVar10;
  code *pcVar11;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  byte *local_80;
  byte *local_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar10 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 0027cc54 to 0027cc63 has its CatchHandler @ 0027d21c */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  pbVar4 = local_78;
  if ((local_80 == (byte *)0x0) ||
     (lVar6 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00394870,0xffffffffffffffff
                            ), lVar6 == 0)) {
    lVar6 = 0;
    pbVar9 = (byte *)0x0;
    if (pbVar4 == (byte *)0x0) goto joined_r0x0027ccdc;
  }
  else {
    if (pbVar4 == (byte *)0x0) {
      pbVar9 = (byte *)0x0;
      goto joined_r0x0027ccdc;
    }
    FUN_00259a00(1,pbVar4 + 8);
    pbVar9 = pbVar4;
  }
  lVar7 = FUN_00255510(0xffffffffffffffff,pbVar4 + 8);
  if (lVar7 == 0) {
    (**(code **)(*(long *)pbVar4 + 0x10))(pbVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x0027ccdc:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar10 == 0) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar10 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveFileSpecENSt6__ndk16vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSA_ISC_EEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSI_FT0_DpT1_ERNSG_7RuntimeEPKSH_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003948c0
         & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveFileSpecENSt6__ndk16vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSA_ISC_EEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSI_FT0_DpT1_ERNSG_7RuntimeEPKSH_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003948c0
                                   ),
       puVar3 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveFileSpecENSt6__ndk16vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSA_ISC_EEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSI_FT0_DpT1_ERNSG_7RuntimeEPKSH_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003948b8
       , iVar5 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveFileSpecENSt6__ndk16vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSA_ISC_EEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSI_FT0_DpT1_ERNSG_7RuntimeEPKSH_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003948b8
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveFileSpecENSt6__ndk16vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSA_ISC_EEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSI_FT0_DpT1_ERNSG_7RuntimeEPKSH_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_003948c0
                         );
    }
    if ((uVar10 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *(long *)(lVar6 + ((long)uVar10 >> 1)));
    }
                    /* try { // try from 0027cd14 to 0027cd1b has its CatchHandler @ 0027cf24 */
    (*pcVar11)(&local_80);
                    /* try { // try from 0027cd1c to 0027cd2b has its CatchHandler @ 0027cf10 */
    FUN_002747c8(param_1,param_3,&local_80);
    pbVar4 = local_80;
    if (local_80 != (byte *)0x0) {
      while (pbVar2 = local_78, pbVar2 != pbVar4) {
        local_78 = pbVar2 + -0x18;
        if ((*local_78 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -8));
        }
      }
      local_78 = pbVar4;
      operator_delete(local_80);
    }
    if ((pbVar9 != (byte *)0x0) && (lVar6 = FUN_00255510(0xffffffffffffffff,pbVar9 + 8), lVar6 == 0)
       ) {
      (**(code **)(*(long *)pbVar9 + 0x10))(pbVar9);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 0027cde8 to 0027cdf7 has its CatchHandler @ 0027d3b8 */
    FUN_00269c28(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar6);
    pJVar8 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0027ce04 to 0027ce17 has its CatchHandler @ 0027d398 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 0027ce18 to 0027ce2b has its CatchHandler @ 0027d380 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 0027ce2c to 0027ce37 has its CatchHandler @ 0027d350 */
    std::__ndk1::to_string(0);
                    /* try { // try from 0027ce38 to 0027ce47 has its CatchHandler @ 0027d32c */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 0027ce48 to 0027ce5b has its CatchHandler @ 0027d308 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 0027ce5c to 0027ce67 has its CatchHandler @ 0027d2e4 */
    std::__ndk1::to_string(uVar10);
                    /* try { // try from 0027ce68 to 0027ce77 has its CatchHandler @ 0027d2c0 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 0027ce78 to 0027ce8b has its CatchHandler @ 0027d29c */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 0027ce90 to 0027cecb has its CatchHandler @ 0027d23c */
    facebook::jsi::JSError::JSError(pJVar8,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar8,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027d3e0  FUN_0027d3e0 =====

void FUN_0027d3e0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003948c8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0027d430  FUN_0027d430 =====

undefined * FUN_0027d430(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003948d0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027d470  FUN_0027d470 =====

void FUN_0027d470(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037c668;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete((void *)param_1[3]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027d4dc  FUN_0027d4dc =====

void FUN_0027d4dc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037c668;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027d544  FUN_0027d544 =====

undefined8 * FUN_0027d544(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x38);
  bVar2 = *(byte *)(param_1 + 8);
  *puVar4 = &PTR_FUN_0037c668;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 0027d5a4 to 0027d5a7 has its CatchHandler @ 0027d5e0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar4 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    puVar4[5] = *(undefined8 *)(param_1 + 0x28);
    puVar4[4] = uVar6;
    *(undefined4 *)(puVar4 + 6) = uVar1;
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027d608  FUN_0027d608 =====

void FUN_0027d608(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037c668;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar4;
    param_2[1] = uVar3;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x30);
    param_2[5] = uVar4;
    param_2[4] = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027d6a0  FUN_0027d6a0 =====

void FUN_0027d6a0(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027d700  FUN_0027d700 =====

void FUN_0027d700(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027d75c  FUN_0027d75c =====

void FUN_0027d75c(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  JSError *pJVar6;
  long *plVar7;
  ulong uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  long local_80;
  long *plStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar8 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 0027d7b8 to 0027d7c7 has its CatchHandler @ 0027dd10 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar4 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00394870,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x0027d840;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x0027d840;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x0027d840:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveFileSpecEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_003948a0
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveFileSpecEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_003948a0
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveFileSpecEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00394898
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveFileSpecEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_00394898
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveFileSpecEdJETpTnmJEEEN8facebook3jsi5ValueEPT_MS8_FT0_DpT1_ERNS6_7RuntimeEPKS7_mNSt6__ndk116integer_sequenceImJXspT2_EEEEE12defaultValue_003948a0
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 0027d878 to 0027d87b has its CatchHandler @ 0027da20 */
    uVar10 = (*pcVar9)();
    *(undefined8 *)(param_1 + 2) = uVar10;
    *param_1 = 3;
    if ((plVar7 != (long *)0x0) && (lVar4 = FUN_00255510(0xffffffffffffffff,plVar7 + 1), lVar4 == 0)
       ) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 0027d8f8 to 0027d907 has its CatchHandler @ 0027deac */
    FUN_00269c28(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0027d914 to 0027d927 has its CatchHandler @ 0027de8c */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 0027d928 to 0027d93b has its CatchHandler @ 0027de74 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 0027d93c to 0027d947 has its CatchHandler @ 0027de44 */
    std::__ndk1::to_string(0);
                    /* try { // try from 0027d948 to 0027d957 has its CatchHandler @ 0027de20 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 0027d958 to 0027d96b has its CatchHandler @ 0027ddfc */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 0027d96c to 0027d977 has its CatchHandler @ 0027ddd8 */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 0027d978 to 0027d987 has its CatchHandler @ 0027ddb4 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 0027d988 to 0027d99b has its CatchHandler @ 0027dd90 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 0027d9a0 to 0027d9db has its CatchHandler @ 0027dd30 */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027ded4  FUN_0027ded4 =====

void FUN_0027ded4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_003948a8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0027df24  FUN_0027df24 =====

undefined * FUN_0027df24(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_003948b0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027df64  FUN_0027df64 =====

void FUN_0027df64(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037c5e8;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete((void *)param_1[3]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027dfd0  FUN_0027dfd0 =====

void FUN_0027dfd0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037c5e8;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027e038  FUN_0027e038 =====

undefined8 * FUN_0027e038(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x38);
  bVar2 = *(byte *)(param_1 + 8);
  *puVar4 = &PTR_FUN_0037c5e8;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 0027e098 to 0027e09b has its CatchHandler @ 0027e0d4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar4 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    puVar4[5] = *(undefined8 *)(param_1 + 0x28);
    puVar4[4] = uVar6;
    *(undefined4 *)(puVar4 + 6) = uVar1;
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027e0fc  FUN_0027e0fc =====

void FUN_0027e0fc(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037c5e8;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar4;
    param_2[1] = uVar3;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x30);
    param_2[5] = uVar4;
    param_2[4] = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027e194  FUN_0027e194 =====

void FUN_0027e194(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027e1f4  FUN_0027e1f4 =====

void FUN_0027e1f4(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027e250  FUN_0027e250 =====

void FUN_0027e250(undefined4 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  JSError *pJVar6;
  long *plVar7;
  ulong uVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  long local_80;
  long *plStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar8 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 0027e2ac to 0027e2bb has its CatchHandler @ 0027e81c */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar4 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00394870,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x0027e334;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x0027e334;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x0027e334:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveFileSpecENSt6__ndk18optionalIdEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSB_FT0_DpT1_ERNS9_7RuntimeEPKSA_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394880
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveFileSpecENSt6__ndk18optionalIdEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSB_FT0_DpT1_ERNS9_7RuntimeEPKSA_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394880
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveFileSpecENSt6__ndk18optionalIdEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSB_FT0_DpT1_ERNS9_7RuntimeEPKSA_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394878
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveFileSpecENSt6__ndk18optionalIdEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSB_FT0_DpT1_ERNS9_7RuntimeEPKSA_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394878
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive18HybridRiveFileSpecENSt6__ndk18optionalIdEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSB_FT0_DpT1_ERNS9_7RuntimeEPKSA_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394880
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 0027e36c to 0027e36f has its CatchHandler @ 0027e52c */
    auVar10 = (*pcVar9)();
    if ((auVar10 & (undefined1  [16])0xff) == (undefined1  [16])0x0) {
      *param_1 = 0;
    }
    else {
      *(long *)(param_1 + 2) = auVar10._0_8_;
      *param_1 = 3;
    }
    if ((plVar7 != (long *)0x0) && (lVar4 = FUN_00255510(0xffffffffffffffff,plVar7 + 1), lVar4 == 0)
       ) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 0027e404 to 0027e413 has its CatchHandler @ 0027e9b8 */
    FUN_00269c28(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0027e420 to 0027e433 has its CatchHandler @ 0027e998 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 0027e434 to 0027e447 has its CatchHandler @ 0027e980 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 0027e448 to 0027e453 has its CatchHandler @ 0027e950 */
    std::__ndk1::to_string(0);
                    /* try { // try from 0027e454 to 0027e463 has its CatchHandler @ 0027e92c */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 0027e464 to 0027e477 has its CatchHandler @ 0027e908 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 0027e478 to 0027e483 has its CatchHandler @ 0027e8e4 */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 0027e484 to 0027e493 has its CatchHandler @ 0027e8c0 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 0027e494 to 0027e4a7 has its CatchHandler @ 0027e89c */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 0027e4ac to 0027e4e7 has its CatchHandler @ 0027e83c */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027e9e0  FUN_0027e9e0 =====

void FUN_0027e9e0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394888) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0027ea30  FUN_0027ea30 =====

undefined * FUN_0027ea30(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394890;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027ea70  margelo::nitro::rive::HybridRiveFileSpec::loadHybridMethods =====

/* virtual thunk to margelo::nitro::rive::HybridRiveFileSpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridRiveFileSpec::loadHybridMethods(HybridRiveFileSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    loadHybridMethods(this + *(long *)(*(long *)this + -0x20));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027eab4  FUN_0027eab4 =====

void FUN_0027eab4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x27eab8);
  (*pcVar1)();
}


// ===== 0027eab8  FUN_0027eab8 =====

void FUN_0027eab8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x27eabc);
  (*pcVar1)();
}


// ===== 0027eabc  FUN_0027eabc =====

void FUN_0027eabc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x27eac0);
  (*pcVar1)();
}


// ===== 0027eac0  FUN_0027eac0 =====

void FUN_0027eac0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x27eac4);
  (*pcVar1)();
}


// ===== 0027eac4  margelo::nitro::rive::HybridRiveFileFactorySpec::loadHybridMethods =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* margelo::nitro::rive::HybridRiveFileFactorySpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridRiveFileFactorySpec::loadHybridMethods(HybridRiveFileFactorySpec *this)

{
  long lVar1;
  long lVar2;
  long **pplVar3;
  runtime_error *prVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  basic_string local_160;
  undefined7 uStack_15f;
  char cStack_158;
  undefined2 uStack_157;
  undefined5 uStack_155;
  long *local_150;
  byte local_148;
  char local_147 [8];
  undefined4 local_13f;
  undefined1 local_13b;
  void *local_138;
  byte local_130;
  undefined7 local_12f;
  undefined4 uStack_128;
  undefined1 local_124;
  void *local_120;
  byte local_118;
  undefined4 local_117;
  undefined3 uStack_113;
  undefined1 local_110;
  void *local_108;
  undefined *local_100;
  long *plStack_f8;
  long *local_f0;
  long *local_e8;
  long *plStack_e0;
  undefined4 local_d8;
  long *local_d0;
  long *plStack_c8;
  long **local_b0;
  undefined8 local_a0;
  ulong local_98;
  undefined8 uStack_90;
  long *local_88;
  long *local_80;
  long *plStack_78;
  long **local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  margelo::nitro::HybridObject::loadHybridMethods();
  lVar5 = *(long *)(*(long *)this + -0x20);
  plVar6 = *(long **)(this + lVar5 + 8);
  if (plVar6 == (long *)0x0) {
    local_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    local_100 = PTR_typeinfo_00394b58;
                    /* try { // try from 0027eb20 to 0027eb2f has its CatchHandler @ 0027f17c */
    FUN_00264f84(&local_d0,&local_100,&local_80);
    plVar9 = plStack_c8;
    plVar6 = local_d0;
    plVar8 = *(long **)(this + lVar5 + 0x10);
    local_d0 = (long *)0x0;
    plStack_c8 = (long *)0x0;
    *(long **)(this + lVar5 + 0x10) = plVar9;
    *(long **)(this + lVar5 + 8) = plVar6;
    if ((plVar8 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar6 = plStack_c8;
    if ((plStack_c8 != (long *)0x0) &&
       (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_c8 + 1), lVar2 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar6 = plStack_78;
    if ((plStack_78 != (long *)0x0) &&
       (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1), lVar2 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar6 = *(long **)(this + lVar5 + 8);
  }
  puVar7 = *(undefined **)(*plVar6 + 8);
  plVar9 = plVar6;
  while (puVar7 != PTR_typeinfo_name_00394b50) {
    plVar9 = (long *)plVar9[1];
    if (plVar9 == (long *)0x0) {
      plStack_c8 = *(long **)(this + lVar5 + 0x10);
      local_d0 = plVar6;
      if (plStack_c8 != (long *)0x0) {
        FUN_00259a00(1,plStack_c8 + 1);
      }
      local_100 = PTR_typeinfo_00394b58;
                    /* try { // try from 0027ec3c to 0027ec4b has its CatchHandler @ 0027f170 */
      FUN_00264f84(&local_80,&local_100,&local_d0);
      plVar9 = plStack_78;
      plVar6 = local_80;
      plVar8 = *(long **)(this + lVar5 + 0x10);
      local_80 = (long *)0x0;
      plStack_78 = (long *)0x0;
      *(long **)(this + lVar5 + 0x10) = plVar9;
      *(long **)(this + lVar5 + 8) = plVar6;
      if ((plVar8 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar2 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar6 = plStack_78;
      if ((plStack_78 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1), lVar2 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar6 = plStack_c8;
      if ((plStack_c8 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_c8 + 1), lVar2 == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar9 = *(long **)(this + lVar5 + 8);
      lVar5 = plVar9[6];
      goto joined_r0x0027ecf0;
    }
    puVar7 = *(undefined **)(*plVar9 + 8);
  }
  lVar5 = plVar9[6];
joined_r0x0027ecf0:
  if (((lVar5 == 0) && (plVar9[0xb] == 0)) && (plVar9[0x10] == 0)) {
    local_110 = 0;
    local_118 = 0xe;
    local_117 = 0x6d6f7266;
    uStack_113 = 0x4c5255;
                    /* try { // try from 0027ed30 to 0027ed43 has its CatchHandler @ 0027f1c4 */
    FUN_0027f284(plVar9,&local_118,0x10,1);
    if ((local_118 & 1) != 0) {
      operator_delete(local_108);
    }
    local_130 = 0x16;
    local_12f = (undefined7)s_fromFileURL_001d5a11._0_8_;
    uStack_128 = CONCAT31(0x4c5255,SUB81(s_fromFileURL_001d5a11._0_8_,7));
    local_124 = 0;
                    /* try { // try from 0027ed84 to 0027ed97 has its CatchHandler @ 0027f1bc */
    FUN_0027f284(plVar9,&local_130,0x18,1);
    if ((local_130 & 1) != 0) {
      operator_delete(local_120);
    }
    local_148 = 0x18;
    local_13f = 0x65637275;
    local_147[0] = s_fromResource_001d6f98[0];
    local_147[1] = s_fromResource_001d6f98[1];
    local_147[2] = s_fromResource_001d6f98[2];
    local_147[3] = s_fromResource_001d6f98[3];
    local_147[4] = s_fromResource_001d6f98[4];
    local_147[5] = s_fromResource_001d6f98[5];
    local_147[6] = s_fromResource_001d6f98[6];
    local_147[7] = s_fromResource_001d6f98[7];
    local_13b = 0;
                    /* try { // try from 0027edd8 to 0027edeb has its CatchHandler @ 0027f1b4 */
    FUN_0027f284(plVar9,&local_148,0x20,1);
    if ((local_148 & 1) != 0) {
      operator_delete(local_138);
    }
    local_160 = (basic_string)0x12;
    uStack_157 = 0x73;
    uStack_15f = (undefined7)s_fromBytes_001d6fa5._0_8_;
    cStack_158 = SUB81(s_fromBytes_001d6fa5._0_8_,7);
    lVar5 = FUN_002632b8(plVar9[8],plVar9[9],&local_160);
    if ((lVar5 != 0) || (lVar5 = FUN_002632b8(plVar9[0xd],plVar9[0xe],&local_160), lVar5 != 0)) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0027f018 to 0027f02b has its CatchHandler @ 0027f244 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_160);
                    /* try { // try from 0027f02c to 0027f03f has its CatchHandler @ 0027f22c */
      FUN_00263450(&local_d0,&local_80,"\" - a property with that name already exists!");
                    /* try { // try from 0027f044 to 0027f07b has its CatchHandler @ 0027f208 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_d0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0027f280;
    }
    lVar5 = FUN_002632b8(plVar9[3],plVar9[4],&local_160);
    if (lVar5 != 0) {
      prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0027f08c to 0027f09f has its CatchHandler @ 0027f204 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_160);
                    /* try { // try from 0027f0a0 to 0027f0b3 has its CatchHandler @ 0027f200 */
      FUN_00263450(&local_d0,&local_80,"\" - a method with that name already exists!");
                    /* try { // try from 0027f0b8 to 0027f0ef has its CatchHandler @ 0027f1d4 */
      std::runtime_error::runtime_error(prVar4,(basic_string *)&local_d0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0027f280;
    }
    plStack_f8 = (long *)CONCAT53(uStack_155,CONCAT21(uStack_157,cStack_158));
    local_100 = (undefined *)CONCAT71(uStack_15f,local_160);
    local_d8 = 0;
    local_f0 = local_150;
    plStack_e0 = _UNK_001d81b8;
    local_e8 = _DAT_001d81b0;
                    /* try { // try from 0027ee6c to 0027ee73 has its CatchHandler @ 0027f19c */
    local_60 = (long **)operator_new(0x38);
    *local_60 = (long *)&PTR_FUN_0037d5e8;
    if (((ulong)local_100 & 1) == 0) {
      local_60[2] = plStack_f8;
      *(undefined **)(local_60 + 1) = local_100;
      local_60[3] = local_f0;
    }
    else {
                    /* try { // try from 0027eea4 to 0027eea7 has its CatchHandler @ 0027f160 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (local_60 + 1),(char *)local_f0,(ulong)plStack_f8);
    }
    local_60[5] = plStack_e0;
    local_60[4] = local_e8;
    *(undefined4 *)(local_60 + 6) = local_d8;
    if (((byte)local_100 & 1) == 0) {
LAB_0027eee4:
      pplVar3 = &local_80;
      local_b0 = local_60;
LAB_0027eef4:
      pplVar3[4] = (long *)0x0;
    }
    else {
      operator_delete(local_f0);
      if (local_60 == (long **)0x0) {
        pplVar3 = &local_d0;
        goto LAB_0027eef4;
      }
      if (local_60 != &local_80) goto LAB_0027eee4;
      local_b0 = &local_d0;
                    /* try { // try from 0027effc to 0027f007 has its CatchHandler @ 0027f0f0 */
      (*(code *)local_80[3])(&local_80,&local_d0);
    }
    local_a0 = 3;
    if (((byte)local_160 & 1) == 0) {
      uStack_90 = CONCAT53(uStack_155,CONCAT21(uStack_157,cStack_158));
      local_98 = CONCAT71(uStack_15f,local_160);
      local_88 = local_150;
    }
    else {
                    /* try { // try from 0027ef28 to 0027ef2f has its CatchHandler @ 0027f0f4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_98,(char *)local_150,CONCAT53(uStack_155,CONCAT21(uStack_157,cStack_158)));
    }
    if (local_60 == &local_80) {
      lVar5 = 4;
      pplVar3 = &local_80;
LAB_0027ef54:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_60 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_60;
      goto LAB_0027ef54;
    }
                    /* try { // try from 0027ef60 to 0027ef73 has its CatchHandler @ 0027f18c */
    FUN_002634d4(plVar9 + 3,&local_160,&local_160,&local_d0);
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if (local_b0 == &local_d0) {
      lVar5 = 4;
      pplVar3 = &local_d0;
LAB_0027efa8:
      (*(code *)(*pplVar3)[lVar5])();
    }
    else if (local_b0 != (long **)0x0) {
      lVar5 = 5;
      pplVar3 = local_b0;
      goto LAB_0027efa8;
    }
    if (((byte)local_160 & 1) != 0) {
      operator_delete(local_150);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_0027f280:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027f284  FUN_0027f284 =====

void FUN_0027f284(long param_1,basic_string *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  basic_string *pbVar3;
  runtime_error *prVar4;
  ulong local_100;
  ulong uStack_f8;
  char *local_f0;
  long local_e8;
  long lStack_e0;
  undefined4 local_d8;
  basic_string local_d0 [32];
  basic_string *local_b0;
  undefined8 local_a0;
  ulong local_98;
  undefined8 uStack_90;
  void *local_88;
  long local_80 [4];
  basic_string *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_002632b8(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),param_2);
  if ((lVar2 != 0) ||
     (lVar2 = FUN_002632b8(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),param_2),
     lVar2 != 0)) {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0027f4bc to 0027f4cf has its CatchHandler @ 0027f6ac */
    std::__ndk1::operator+("Cannot add Hybrid Method \"",param_2);
                    /* try { // try from 0027f4d0 to 0027f4e3 has its CatchHandler @ 0027f694 */
    FUN_00263450(local_d0,local_80,"\" - a property with that name already exists!");
                    /* try { // try from 0027f4e8 to 0027f51f has its CatchHandler @ 0027f670 */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_0027f6d0;
  }
  lVar2 = FUN_002632b8(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),param_2);
  if (lVar2 != 0) {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0027f530 to 0027f543 has its CatchHandler @ 0027f66c */
    std::__ndk1::operator+("Cannot add Hybrid Method \"",param_2);
                    /* try { // try from 0027f544 to 0027f557 has its CatchHandler @ 0027f668 */
    FUN_00263450(local_d0,local_80,"\" - a method with that name already exists!");
                    /* try { // try from 0027f55c to 0027f593 has its CatchHandler @ 0027f63c */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_0027f6d0;
  }
  if (((byte)*param_2 & 1) == 0) {
    uStack_f8 = *(ulong *)(param_2 + 8);
    local_100 = *(ulong *)param_2;
    local_f0 = *(char **)(param_2 + 0x10);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_100,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  local_d8 = 0;
  local_e8 = param_3;
  lStack_e0 = param_4;
                    /* try { // try from 0027f320 to 0027f327 has its CatchHandler @ 0027f624 */
  local_60 = (basic_string *)operator_new(0x38);
  *(undefined ***)local_60 = &PTR_FUN_0037d2d8;
  if ((local_100 & 1) == 0) {
    *(ulong *)(local_60 + 0x10) = uStack_f8;
    *(ulong *)(local_60 + 8) = local_100;
    *(char **)(local_60 + 0x18) = local_f0;
  }
  else {
                    /* try { // try from 0027f358 to 0027f35b has its CatchHandler @ 0027f604 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (local_60 + 8),local_f0,uStack_f8);
  }
  *(long *)(local_60 + 0x28) = lStack_e0;
  *(long *)(local_60 + 0x20) = local_e8;
  *(undefined4 *)(local_60 + 0x30) = local_d8;
  if (((byte)local_100._0_1_ & 1) == 0) {
LAB_0027f398:
    pbVar3 = (basic_string *)local_80;
    local_b0 = local_60;
LAB_0027f3a8:
    *(long *)(pbVar3 + 0x20) = 0;
  }
  else {
    operator_delete(local_f0);
    if (local_60 == (basic_string *)0x0) {
      pbVar3 = local_d0;
      goto LAB_0027f3a8;
    }
    if (local_60 != (basic_string *)local_80) goto LAB_0027f398;
    local_b0 = local_d0;
                    /* try { // try from 0027f4a0 to 0027f4ab has its CatchHandler @ 0027f594 */
    (**(code **)(local_80[0] + 0x18))(local_80,local_d0);
  }
  local_a0 = 3;
  if (((byte)*param_2 & 1) == 0) {
    uStack_90 = *(undefined8 *)(param_2 + 8);
    local_98 = *(ulong *)param_2;
    local_88 = *(void **)(param_2 + 0x10);
  }
  else {
                    /* try { // try from 0027f3dc to 0027f3e3 has its CatchHandler @ 0027f598 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_98,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  if (local_60 == (basic_string *)local_80) {
    lVar2 = 4;
    pbVar3 = (basic_string *)local_80;
LAB_0027f408:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_60 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_60;
    goto LAB_0027f408;
  }
                    /* try { // try from 0027f414 to 0027f427 has its CatchHandler @ 0027f614 */
  FUN_002634d4((undefined8 *)(param_1 + 0x18),param_2,param_2,local_d0);
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (local_b0 == local_d0) {
    lVar2 = 4;
    pbVar3 = local_d0;
LAB_0027f45c:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_b0 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_b0;
    goto LAB_0027f45c;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_0027f6d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027f6d4  FUN_0027f6d4 =====

void FUN_0027f6d4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037d5e8;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete((void *)param_1[3]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027f740  FUN_0027f740 =====

void FUN_0027f740(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037d5e8;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027f7a8  FUN_0027f7a8 =====

undefined8 * FUN_0027f7a8(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x38);
  bVar2 = *(byte *)(param_1 + 8);
  *puVar4 = &PTR_FUN_0037d5e8;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 0027f808 to 0027f80b has its CatchHandler @ 0027f844 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar4 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    puVar4[5] = *(undefined8 *)(param_1 + 0x28);
    puVar4[4] = uVar6;
    *(undefined4 *)(puVar4 + 6) = uVar1;
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027f86c  FUN_0027f86c =====

void FUN_0027f86c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037d5e8;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar4;
    param_2[1] = uVar3;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x30);
    param_2[5] = uVar4;
    param_2[4] = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027f904  FUN_0027f904 =====

void FUN_0027f904(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027f964  FUN_0027f964 =====

void FUN_0027f964(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0027f9c0  FUN_0027f9c0 =====

void FUN_0027f9c0(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  JSError *pJVar12;
  code *pcVar13;
  void *pvVar14;
  ulong uVar15;
  undefined *puVar16;
  long *local_1c0;
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [8];
  long *local_148;
  undefined8 local_138;
  long *local_130;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined8 *local_c0 [3];
  void *local_a8;
  long *plStack_a0;
  undefined8 *local_98;
  char local_80;
  char local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  puVar16 = (undefined *)*param_5;
  uVar15 = *param_6;
  local_c0[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 0027fa24 to 0027fa33 has its CatchHandler @ 002801f0 */
  (**(code **)(*param_3 + 0x160))(&local_a8,param_3,local_c0);
  if ((local_a8 == (void *)0x0) ||
     (lVar10 = __dynamic_cast(local_a8,PTR_typeinfo_00394860,PTR_typeinfo_00394b58,
                              0xffffffffffffffff), lVar10 == 0)) {
    lVar10 = 0;
    local_1c0 = (long *)0x0;
    if (plStack_a0 == (long *)0x0) goto joined_r0x0027faac;
  }
  else {
    if (plStack_a0 == (long *)0x0) {
      local_1c0 = (long *)0x0;
      goto joined_r0x0027faac;
    }
    FUN_00259a00(1,plStack_a0 + 1);
    local_1c0 = plStack_a0;
  }
  lVar11 = FUN_00255510(0xffffffffffffffff,plStack_a0 + 1);
  if (lVar11 == 0) {
    (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x0027faac:
  if (local_c0[0] != (undefined8 *)0x0) {
    (**(code **)*local_c0[0])();
  }
  puVar7 = PTR_defaultValue_00394bd0;
  if ((uVar15 & 0xfffffffffffffffe) == 2) {
    pcVar13 = *(code **)(param_2 + 0x20);
    uVar3 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00394bd8 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_defaultValue_00394bd8), iVar9 != 0)) {
      *(undefined4 *)puVar7 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar7,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00394bd8);
    }
    plVar1 = (long *)(lVar10 + ((long)uVar3 >> 1));
    if ((uVar3 & 1) != 0) {
      pcVar13 = *(code **)(pcVar13 + *plVar1);
    }
    puVar2 = puVar7;
    if (uVar15 != 0) {
      puVar2 = puVar16;
    }
                    /* try { // try from 0027fafc to 0027fb07 has its CatchHandler @ 0027ff0c */
    FUN_00280814(auStack_150,param_3,puVar2);
                    /* try { // try from 0027fb14 to 0027fb17 has its CatchHandler @ 0027fef8 */
    uVar8 = facebook::jsi::Value::asBool();
    puVar16 = puVar16 + 0x20;
    if (uVar15 < 3) {
      puVar16 = puVar7;
    }
                    /* try { // try from 0027fb28 to 0027fb33 has its CatchHandler @ 0027fef4 */
    FUN_00281044(&local_a8,param_3,puVar16);
                    /* try { // try from 0027fb34 to 0027fb4b has its CatchHandler @ 0027fee0 */
    (*pcVar13)(&local_138,plVar1,auStack_150,uVar8 & 1,&local_a8);
    if ((local_78 != '\0') && (pvVar5 = local_a8, puVar6 = local_98, local_80 != '\0')) {
      while (puVar6 != (undefined8 *)0x0) {
        pvVar14 = (void *)*puVar6;
        local_a8 = pvVar5;
        FUN_00279620(puVar6 + 5);
        if ((*(byte *)(puVar6 + 2) & 1) != 0) {
          operator_delete((void *)puVar6[4]);
        }
        operator_delete(puVar6);
        pvVar5 = local_a8;
        puVar6 = (undefined8 *)pvVar14;
      }
      local_a8 = (void *)0x0;
      if (pvVar5 != (void *)0x0) {
        operator_delete(pvVar5);
      }
    }
    if ((local_148 != (long *)0x0) &&
       (lVar10 = FUN_00255510(0xffffffffffffffff,local_148 + 1), lVar10 == 0)) {
      (**(code **)(*local_148 + 0x10))(local_148);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
                    /* try { // try from 0027fba8 to 0027fbb3 has its CatchHandler @ 0027fec8 */
    FUN_00281184(param_1,param_3,local_138,local_130);
    if ((local_130 != (long *)0x0) &&
       (lVar10 = FUN_00255510(0xffffffffffffffff,local_130 + 1), lVar10 == 0)) {
      (**(code **)(*local_130 + 0x10))(local_130);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if ((local_1c0 != (long *)0x0) &&
       (lVar10 = FUN_00255510(0xffffffffffffffff,local_1c0 + 1), lVar10 == 0)) {
      (**(code **)(*local_1c0 + 0x10))(local_1c0);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar4 + 0x28) == local_70) {
      return;
    }
  }
  else {
                    /* try { // try from 0027fc8c to 0027fc9b has its CatchHandler @ 00280348 */
    FUN_00280404(&local_a8,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar10);
    pJVar12 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0027fca8 to 0027fcbb has its CatchHandler @ 00280328 */
    std::__ndk1::operator+("`",(basic_string *)&local_a8);
                    /* try { // try from 0027fcbc to 0027fccf has its CatchHandler @ 00280310 */
    FUN_00263450(auStack_150,auStack_168,"` expected between ");
                    /* try { // try from 0027fcd0 to 0027fcdb has its CatchHandler @ 002802e0 */
    std::__ndk1::to_string(2);
                    /* try { // try from 0027fcdc to 0027fceb has its CatchHandler @ 002802bc */
    FUN_00264adc(&local_138,auStack_150,auStack_180);
                    /* try { // try from 0027fcec to 0027fcff has its CatchHandler @ 00280298 */
    FUN_00263450(auStack_120,&local_138," and ");
                    /* try { // try from 0027fd00 to 0027fd0b has its CatchHandler @ 00280274 */
    std::__ndk1::to_string(3);
                    /* try { // try from 0027fd0c to 0027fd1b has its CatchHandler @ 0028024c */
    FUN_00264adc(auStack_108,auStack_120,auStack_198);
                    /* try { // try from 0027fd1c to 0027fd2f has its CatchHandler @ 00280210 */
    FUN_00263450(auStack_f0,auStack_108," arguments, but received ");
                    /* try { // try from 0027fd30 to 0027fd3b has its CatchHandler @ 0027fea4 */
    std::__ndk1::to_string(uVar15);
                    /* try { // try from 0027fd3c to 0027fd4b has its CatchHandler @ 0027fe80 */
    FUN_00264adc(auStack_d8,auStack_f0,auStack_1b0);
                    /* try { // try from 0027fd4c to 0027fd5f has its CatchHandler @ 0027fe5c */
    FUN_00263450(local_c0,auStack_d8,&DAT_001d5be0);
                    /* try { // try from 0027fd64 to 0027fda3 has its CatchHandler @ 0027fde4 */
    facebook::jsi::JSError::JSError(pJVar12,param_3,local_c0);
    if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar12,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00280374  FUN_00280374 =====

void FUN_00280374(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394bf0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002803c4  FUN_002803c4 =====

undefined * FUN_002803c4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394bf8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00280404  FUN_00280404 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00280404(undefined8 *param_1,int param_2,byte *param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  void *pvVar4;
  byte *pbVar5;
  long lVar6;
  undefined *puVar7;
  byte bVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong local_a0;
  ulong local_98;
  undefined8 *local_90;
  byte local_88 [8];
  size_t local_80;
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  undefined8 *local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  if (param_4 == 0) {
    local_60 = (undefined8 *)operator_new(0x40);
    puVar7 = PTR_typeinfo_name_00394b50;
    uStack_68 = _UNK_001d8228;
    local_70 = _DAT_001d8220;
    *(undefined1 *)(local_60 + 6) = 0;
    uVar13 = *(undefined8 *)puVar7;
    uVar15 = *(undefined8 *)(puVar7 + 0x18);
    uVar14 = *(undefined8 *)(puVar7 + 0x10);
    uVar12 = *(undefined8 *)(puVar7 + 0x28);
    uVar10 = *(undefined8 *)(puVar7 + 0x20);
    local_60[1] = *(undefined8 *)(puVar7 + 8);
    *local_60 = uVar13;
    local_60[3] = uVar15;
    local_60[2] = uVar14;
    local_60[5] = uVar12;
    local_60[4] = uVar10;
                    /* try { // try from 00280488 to 00280497 has its CatchHandler @ 00280728 */
    margelo::nitro::TypeInfo::demangleName((basic_string *)&local_70,true);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
  }
  else {
    margelo::nitro::HybridObject::getName();
  }
  bVar8 = local_88[0];
  if (param_2 == 0) {
    sVar3 = (ulong)(local_88[0] >> 1);
    if ((local_88[0] & 1) != 0) {
      sVar3 = local_80;
    }
    uVar1 = sVar3 + 1;
    if (0xffffffffffffffef < uVar1) goto LAB_002806e8;
    if (uVar1 < 0x17) {
      local_98 = 0;
      puVar11 = (undefined8 *)((ulong)&local_a0 | 1);
      local_90 = (undefined8 *)0x0;
      local_a0 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_002805ec;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 002805d4 to 002805db has its CatchHandler @ 0028073c */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_a0 = uVar2 | 1;
      local_98 = uVar1;
      local_90 = puVar11;
LAB_002805ec:
      pvVar4 = (void *)((ulong)local_88 | 1);
      if ((bVar8 & 1) != 0) {
        pvVar4 = local_78;
      }
      memmove(puVar11,pvVar4,sVar3);
    }
    *(undefined2 *)((long)puVar11 + sVar3) = 0x2e;
    pbVar5 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar5 = param_3 + 1;
    }
                    /* try { // try from 0028062c to 00280633 has its CatchHandler @ 00280714 */
    puVar9 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_a0,(ulong)pbVar5);
    local_60 = (undefined8 *)puVar9[2];
    uStack_68 = puVar9[1];
    local_70 = *puVar9;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
                    /* try { // try from 0028064c to 0028065f has its CatchHandler @ 002806fc */
    puVar11 = (undefined8 *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_70,0x1d6185);
    uVar10 = puVar11[2];
    uVar13 = puVar11[1];
    uVar12 = *puVar11;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    param_1[1] = uVar13;
    *param_1 = uVar12;
    param_1[2] = uVar10;
    puVar11 = local_90;
    uVar1 = local_a0;
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
      puVar11 = local_90;
      uVar1 = local_a0;
    }
  }
  else {
    sVar3 = (ulong)(local_88[0] >> 1);
    if ((local_88[0] & 1) != 0) {
      sVar3 = local_80;
    }
    uVar1 = sVar3 + 1;
    if (0xffffffffffffffef < uVar1) {
      if (*(long *)(lVar6 + 0x28) != local_58) goto LAB_00280784;
                    /* try { // try from 002806e4 to 002806e7 has its CatchHandler @ 00280758 */
      FUN_00260a84();
LAB_002806e8:
      if (*(long *)(lVar6 + 0x28) == local_58) {
                    /* try { // try from 002806f8 to 002806fb has its CatchHandler @ 0028073c */
        uVar10 = FUN_00260a84();
                    /* catch() { ... } // from try @ 0028064c with catch @ 002806fc */
        if ((local_70 & 1) != 0) {
          operator_delete(local_60);
        }
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
        if ((local_88[0] & 1) != 0) {
          operator_delete(local_78);
        }
        if (*(long *)(lVar6 + 0x28) == local_58) {
          FUN_00255d34(uVar10);
        }
      }
      goto LAB_00280784;
    }
    if (uVar1 < 0x17) {
      uStack_68 = 0;
      puVar11 = (undefined8 *)((ulong)&local_70 | 1);
      local_60 = (undefined8 *)0x0;
      local_70 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_0028055c;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 00280544 to 0028054b has its CatchHandler @ 00280758 */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_70 = uVar2 | 1;
      uStack_68 = uVar1;
      local_60 = puVar11;
LAB_0028055c:
      pvVar4 = (void *)((ulong)local_88 | 1);
      if ((bVar8 & 1) != 0) {
        pvVar4 = local_78;
      }
      memmove(puVar11,pvVar4,sVar3);
    }
    *(undefined2 *)((long)puVar11 + sVar3) = 0x2e;
    pbVar5 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar5 = param_3 + 1;
    }
                    /* try { // try from 0028059c to 002805a3 has its CatchHandler @ 00280740 */
    puVar11 = (undefined8 *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_70,(ulong)pbVar5);
    uVar10 = puVar11[2];
    uVar13 = puVar11[1];
    uVar12 = *puVar11;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    param_1[1] = uVar13;
    *param_1 = uVar12;
    param_1[2] = uVar10;
    puVar11 = local_60;
    uVar1 = local_70;
  }
  if ((uVar1 & 1) != 0) {
    operator_delete(puVar11);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
LAB_00280784:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00280788  FUN_00280788 =====

void FUN_00280788(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
     ) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00280814  FUN_00280814 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00280814(long *param_1,Runtime *param_2,IRuntime *param_3)

{
  long *plVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  void *pvVar10;
  undefined8 *puVar11;
  long **pplVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long local_a8;
  long *local_a0;
  undefined8 *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long *plStack_78;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  facebook::jsi::Value::asObject(param_3);
                    /* try { // try from 0028085c to 00280883 has its CatchHandler @ 0028100c */
  uVar6 = (**(code **)(*(long *)param_2 + 0x158))(param_2,&local_98);
  if ((uVar6 & 1) == 0) {
LAB_00280a4c:
    local_90 = (long *)0x0;
    local_88 = (long *)0x0;
                    /* try { // try from 00280a50 to 00280a5b has its CatchHandler @ 00280fdc */
    margelo::nitro::JSICache::getOrCreateCache(param_2);
                    /* try { // try from 00280a68 to 00280a6f has its CatchHandler @ 00280fd4 */
    lVar7 = (**(code **)(*(long *)param_2 + 0x88))(param_2,local_98);
                    /* try { // try from 00280a70 to 00280a7b has its CatchHandler @ 00280fb8 */
    plVar8 = (long *)operator_new(8);
    *plVar8 = lVar7;
                    /* try { // try from 00280a88 to 00280a8f has its CatchHandler @ 00280fb0 */
    plVar9 = (long *)operator_new(0x40);
    *(undefined1 *)(plVar9 + 2) = 0;
    lVar17 = _UNK_001d8078;
    lVar7 = _DAT_001d8070;
    *(undefined8 *)((long)plVar9 + 0x34) = 0;
    plVar9[1] = lVar17;
    *plVar9 = lVar7;
    *(undefined8 *)((long)plVar9 + 0x1c) = 0;
    *(undefined8 *)((long)plVar9 + 0x14) = 0;
    *(undefined8 *)((long)plVar9 + 0x2c) = 0;
    *(undefined8 *)((long)plVar9 + 0x24) = 0;
    local_80 = plVar8;
    plStack_78 = plVar9;
    FUN_00255510(1,plVar9 + 1);
    puVar11 = *(undefined8 **)(local_a8 + 0xb0);
    if (*(undefined8 **)(local_a8 + 0xb8) <= puVar11) {
      lVar17 = (long)puVar11 - *(long *)(local_a8 + 0xa8);
      lVar7 = lVar17 >> 4;
      uVar6 = lVar7 + 1;
      if (uVar6 >> 0x3c == 0) {
        uVar13 = (long)*(undefined8 **)(local_a8 + 0xb8) - *(long *)(local_a8 + 0xa8);
        uVar14 = (long)uVar13 >> 3;
        if (uVar14 <= uVar6) {
          uVar14 = uVar6;
        }
        if (0x7fffffffffffffef < uVar13) {
          uVar14 = 0xfffffffffffffff;
        }
        if (uVar14 >> 0x3c == 0) {
                    /* try { // try from 00280b28 to 00280b2b has its CatchHandler @ 00280fe4 */
          pvVar10 = operator_new(uVar14 << 4);
          plVar5 = plStack_78;
          plVar1 = local_80;
          puVar11 = (undefined8 *)((long)pvVar10 + lVar17);
          pvVar2 = (void *)((long)pvVar10 + uVar14 * 0x10);
          local_80 = (long *)0x0;
          plStack_78 = (long *)0x0;
          puVar19 = puVar11 + 2;
          *puVar11 = plVar1;
          *(long **)((long)pvVar10 + lVar7 * 0x10 + 8) = plVar5;
          puVar3 = *(undefined8 **)(local_a8 + 0xa8);
          puVar16 = *(undefined8 **)(local_a8 + 0xb0);
          if (puVar16 == puVar3) {
            *(undefined8 **)(local_a8 + 0xa8) = puVar11;
            *(undefined8 **)(local_a8 + 0xb0) = puVar19;
            *(void **)(local_a8 + 0xb8) = pvVar2;
          }
          else {
            do {
              puVar15 = puVar16 + -2;
              puVar18 = puVar11 + -2;
              *puVar18 = *puVar15;
              lVar7 = puVar16[-1];
              puVar11[-1] = lVar7;
              if (lVar7 != 0) {
                FUN_00255510(1,lVar7 + 8);
              }
              puVar16 = puVar15;
              puVar11 = puVar18;
            } while (puVar15 != puVar3);
            puVar16 = *(undefined8 **)(local_a8 + 0xa8);
            puVar11 = *(undefined8 **)(local_a8 + 0xb0);
            *(undefined8 **)(local_a8 + 0xa8) = puVar18;
            *(undefined8 **)(local_a8 + 0xb0) = puVar19;
            *(void **)(local_a8 + 0xb8) = pvVar2;
            while (puVar11 != puVar16) {
              plVar1 = puVar11 + -1;
              puVar11 = puVar11 + -2;
              if (*plVar1 != 0) {
                FUN_00255510(0xffffffffffffffff,*plVar1 + 8);
                    /* try { // try from 00280f10 to 00280f17 has its CatchHandler @ 00281040 */
                FUN_00283b0c(puVar11);
              }
            }
          }
          if (puVar16 != (undefined8 *)0x0) {
            operator_delete(puVar16);
          }
          *(undefined8 **)(local_a8 + 0xb0) = puVar19;
          if (plStack_78 != (long *)0x0) {
            FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
                    /* try { // try from 00280bc8 to 00280bcf has its CatchHandler @ 00280f84 */
            FUN_00283b0c(&local_80);
          }
          goto LAB_00280bd0;
        }
      }
      else {
        if (*(long *)(lVar4 + 0x28) != local_68) goto LAB_0028103c;
                    /* try { // try from 00280f6c to 00280f83 has its CatchHandler @ 00280fe4 */
        FUN_00283d9c();
      }
      if (*(long *)(lVar4 + 0x28) == local_68) {
        FUN_00260a2c();
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00280bc8 with catch @ 00280f84 */
        FUN_0025ad9c();
      }
      goto LAB_0028103c;
    }
    puVar11[1] = plStack_78;
    *puVar11 = local_80;
    *(undefined8 **)(local_a8 + 0xb0) = puVar11 + 2;
LAB_00280bd0:
    if (local_88 != (long *)0x0) {
      uVar6 = FUN_00255510(0xffffffffffffffff);
      plVar1 = local_90;
      if (uVar6 < 2) {
        if ((*(byte *)(local_88 + 2) & 1) == 0) {
          if (local_90 != (long *)0x0) {
            if ((undefined8 *)*local_90 != (undefined8 *)0x0) {
              (*(code *)**(undefined8 **)*local_90)();
            }
            operator_delete(plVar1);
          }
          local_90 = (long *)0x0;
          *(undefined4 *)(local_88 + 2) = 1;
          goto LAB_00280c30;
        }
        lVar7 = *local_88;
        plVar1 = local_88;
      }
      else {
LAB_00280c30:
        lVar7 = *local_88;
        plVar1 = local_88;
      }
      if (((lVar7 == 0) && (plVar1[1] == 0)) && (plVar1 != (long *)0x0)) {
        local_88 = plVar1;
        std::__ndk1::mutex::~mutex((mutex *)((long)plVar1 + 0x14));
        operator_delete(plVar1);
      }
    }
    local_90 = plVar8;
    local_88 = plVar9;
    if ((plVar9 != (long *)0x0) && (FUN_00255510(1), plVar9 != (long *)0x0)) {
      uVar6 = FUN_00255510(0xffffffffffffffff);
      if (uVar6 < 2) {
        if ((*(byte *)(plVar9 + 2) & 1) == 0) {
          if (plVar8 != (long *)0x0) {
            if ((undefined8 *)*plVar8 != (undefined8 *)0x0) {
              (*(code *)**(undefined8 **)*plVar8)();
            }
            operator_delete(plVar8);
          }
          *(undefined4 *)(plVar9 + 2) = 1;
          goto LAB_00280cd4;
        }
        lVar7 = *plVar9;
      }
      else {
LAB_00280cd4:
        lVar7 = *plVar9;
      }
      if (((lVar7 == 0) && (plVar9[1] == 0)) && (plVar9 != (long *)0x0)) {
        std::__ndk1::mutex::~mutex((mutex *)((long)plVar9 + 0x14));
        operator_delete(plVar9);
      }
    }
    std::__ndk1::mutex::unlock();
    if ((local_a0 != (long *)0x0) &&
       (lVar7 = FUN_00255510(0xffffffffffffffff,local_a0 + 1), lVar7 == 0)) {
      (**(code **)(*local_a0 + 0x10))(local_a0);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
                    /* try { // try from 00280d40 to 00280d47 has its CatchHandler @ 00280fac */
    puVar11 = (undefined8 *)operator_new(0x40);
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = &PTR_FUN_0037e688;
    local_80 = local_90;
    plStack_78 = local_88;
    if (local_88 != (long *)0x0) {
      FUN_00255510(1);
    }
                    /* try { // try from 00280d74 to 00280d83 has its CatchHandler @ 00280f8c */
    margelo::nitro::JSArrayBuffer::JSArrayBuffer((JSArrayBuffer *)(puVar11 + 3),param_2,&local_80);
    if (plStack_78 != (long *)0x0) {
      uVar6 = FUN_00255510(0xffffffffffffffff);
      plVar8 = local_80;
      if (uVar6 < 2) {
        if ((*(byte *)(plStack_78 + 2) & 1) == 0) {
          if (local_80 != (long *)0x0) {
            if ((undefined8 *)*local_80 != (undefined8 *)0x0) {
              (*(code *)**(undefined8 **)*local_80)();
            }
            operator_delete(plVar8);
          }
          local_80 = (long *)0x0;
          *(undefined4 *)(plStack_78 + 2) = 1;
          goto LAB_00280de4;
        }
        lVar7 = *plStack_78;
        plVar8 = plStack_78;
      }
      else {
LAB_00280de4:
        lVar7 = *plStack_78;
        plVar8 = plStack_78;
      }
      plStack_78 = plVar8;
      if (((lVar7 == 0) && (plVar8[1] == 0)) && (plVar8 != (long *)0x0)) {
        std::__ndk1::mutex::~mutex((mutex *)((long)plVar8 + 0x14));
        operator_delete(plVar8);
      }
    }
    *param_1 = (long)(puVar11 + 3);
    param_1[1] = (long)puVar11;
    if (local_88 != (long *)0x0) {
      uVar6 = FUN_00255510(0xffffffffffffffff);
      plVar8 = local_90;
      if (uVar6 < 2) {
        if ((*(byte *)(local_88 + 2) & 1) == 0) {
          if (local_90 != (long *)0x0) {
            if ((undefined8 *)*local_90 != (undefined8 *)0x0) {
              (*(code *)**(undefined8 **)*local_90)();
            }
            operator_delete(plVar8);
          }
          local_90 = (long *)0x0;
          *(undefined4 *)(local_88 + 2) = 1;
          goto LAB_00280e78;
        }
        lVar7 = *local_88;
        plVar8 = local_88;
      }
      else {
LAB_00280e78:
        lVar7 = *local_88;
        plVar8 = local_88;
      }
      local_88 = plVar8;
      if (((lVar7 == 0) && (plVar8[1] == 0)) && (plVar8 != (long *)0x0)) {
        std::__ndk1::mutex::~mutex((mutex *)((long)plVar8 + 0x14));
        operator_delete(plVar8);
      }
    }
  }
  else {
    (**(code **)(*(long *)param_2 + 0x160))(&local_90,param_2,&local_98);
    if ((local_90 == (long *)0x0) || ((undefined **)*local_90 != &PTR_FUN_0037e620)) {
      pplVar12 = &local_80;
    }
    else {
      local_80 = local_90;
      plStack_78 = local_88;
      pplVar12 = &local_90;
    }
    *pplVar12 = (long *)0x0;
    pplVar12[1] = (long *)0x0;
    plVar1 = plStack_78;
    plVar9 = local_80;
    plVar8 = local_88;
    if ((plStack_78 != (long *)0x0) &&
       (lVar7 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1), plVar8 = local_88, lVar7 == 0)) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__ndk1::__shared_weak_count::__release_weak();
      plVar8 = local_88;
    }
    local_88 = plVar8;
    if ((plVar8 != (long *)0x0) && (lVar7 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar7 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (plVar9 == (long *)0x0) goto LAB_00280a4c;
                    /* try { // try from 002808f4 to 00280903 has its CatchHandler @ 00280f88 */
    (**(code **)(*(long *)param_2 + 0x160))(&local_80,param_2,&local_98);
    plVar9 = plStack_78;
    lVar7 = local_80[1];
    plVar8 = (long *)local_80[2];
    if (plVar8 != (long *)0x0) {
      FUN_00259a00(1,plVar8 + 1);
    }
    if ((lVar7 == 0) ||
       (lVar7 = __dynamic_cast(lVar7,PTR_typeinfo_00394c00,PTR_typeinfo_00394be0,0), lVar7 == 0)) {
      *param_1 = 0;
      param_1[1] = 0;
      if ((plVar8 != (long *)0x0) &&
         (lVar7 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar7 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      if ((plVar9 != (long *)0x0) &&
         (lVar7 = FUN_00255510(0xffffffffffffffff,plVar9 + 1), lVar7 == 0)) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      goto LAB_00280a4c;
    }
    *param_1 = lVar7;
    param_1[1] = (long)plVar8;
    if (plVar8 != (long *)0x0) {
      FUN_00259a00(1,plVar8 + 1);
      lVar7 = FUN_00255510(0xffffffffffffffff,plVar8 + 1);
      if (lVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
    if ((plVar9 != (long *)0x0) && (lVar7 = FUN_00255510(0xffffffffffffffff,plVar9 + 1), lVar7 == 0)
       ) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (local_98 != (undefined8 *)0x0) {
    (**(code **)*local_98)();
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
LAB_0028103c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00281044  FUN_00281044 =====

void FUN_00281044(long *param_1,undefined8 param_2,int *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  void *local_68;
  ulong uStack_60;
  void *local_58;
  long lStack_50;
  undefined4 local_48;
  char local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*param_3 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 6) = 0;
  }
  else {
    FUN_00277cd4(&local_68);
    uVar4 = uStack_60;
    pvVar6 = local_68;
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    if (local_40 == '\0') {
      *(undefined1 *)(param_1 + 6) = 1;
    }
    else {
      local_68 = (void *)0x0;
      uStack_60 = 0;
      *param_1 = (long)pvVar6;
      param_1[1] = uVar4;
      param_1[2] = (long)local_58;
      param_1[3] = lStack_50;
      *(undefined4 *)(param_1 + 4) = local_48;
      if (lStack_50 == 0) {
        *(undefined1 *)(param_1 + 5) = 1;
        *(undefined1 *)(param_1 + 6) = 1;
        puVar3 = (undefined8 *)local_58;
        while (puVar3 != (undefined8 *)0x0) {
          pvVar6 = (void *)*puVar3;
          FUN_00279620(puVar3 + 5);
          if ((*(byte *)(puVar3 + 2) & 1) != 0) {
            operator_delete((void *)puVar3[4]);
          }
          operator_delete(puVar3);
          puVar3 = (undefined8 *)pvVar6;
        }
      }
      else {
        uVar5 = *(ulong *)((long)local_58 + 8);
        if ((uVar4 & uVar4 - 1) == 0) {
          uVar5 = uVar5 & uVar4 - 1;
        }
        else if (uVar4 <= uVar5) {
          uVar1 = 0;
          if (uVar4 != 0) {
            uVar1 = uVar5 / uVar4;
          }
          uVar5 = uVar5 - uVar1 * uVar4;
        }
        *(long **)((long)pvVar6 + uVar5 * 8) = param_1 + 2;
        local_58 = (void *)0x0;
        lStack_50 = 0;
        *(undefined1 *)(param_1 + 5) = 1;
        *(undefined1 *)(param_1 + 6) = 1;
      }
      pvVar6 = local_68;
      local_68 = (void *)0x0;
      if (pvVar6 != (void *)0x0) {
        operator_delete(pvVar6);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00281184  FUN_00281184 =====

void FUN_00281184(undefined8 param_1,Runtime *param_2,undefined8 *param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined ***pppuVar4;
  runtime_error *this;
  undefined1 auStack_b0 [24];
  basic_string abStack_98 [24];
  undefined **local_80;
  undefined8 *puStack_78;
  long *local_70;
  undefined ***local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(param_3 + 2);
  if (iVar1 == 2) {
    FUN_0026aee4(&local_80,param_2);
                    /* try { // try from 00281264 to 00281273 has its CatchHandler @ 00281428 */
    margelo::nitro::CommonGlobals::Promise::rejected(param_2,(Value *)&local_80);
LAB_00281274:
    facebook::jsi::Value::~Value((Value *)&local_80);
  }
  else {
    if (iVar1 == 1) {
      FUN_00281630(&local_80,param_2,*param_3);
                    /* try { // try from 00281244 to 00281253 has its CatchHandler @ 0028142c */
      margelo::nitro::CommonGlobals::Promise::resolved(param_2,(Value *)&local_80);
      goto LAB_00281274;
    }
    if (iVar1 != 0) {
      FUN_00264e5c(&local_80,PTR_typeinfo_name_00394bb8,1);
      this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00281320 to 00281333 has its CatchHandler @ 002813d0 */
      std::__ndk1::operator+("Promise<",(basic_string *)&local_80);
                    /* try { // try from 00281334 to 00281347 has its CatchHandler @ 002813b8 */
      FUN_00263450(abStack_98,auStack_b0,"> has invalid state!");
                    /* try { // try from 0028134c to 00281383 has its CatchHandler @ 00281384 */
      std::runtime_error::runtime_error(this,abStack_98);
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00281450;
    }
    puStack_78 = param_3;
    if (param_4 == (long *)0x0) {
      local_70 = (long *)0x0;
      local_80 = &PTR_FUN_0037d348;
      local_60 = &local_80;
    }
    else {
      FUN_00259a00(1,param_4 + 1);
      local_80 = &PTR_FUN_0037d348;
      local_70 = param_4;
      FUN_00259a00(1,param_4 + 1);
      local_60 = &local_80;
      lVar3 = FUN_00255510(0xffffffffffffffff,param_4 + 1);
      if (lVar3 == 0) {
        (**(code **)(*param_4 + 0x10))(param_4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
                    /* try { // try from 00281298 to 002812ab has its CatchHandler @ 002813f0 */
    margelo::nitro::CommonGlobals::Promise::callConstructor(param_2,(function *)&local_80);
    if (local_60 == &local_80) {
      lVar3 = 4;
      pppuVar4 = &local_80;
LAB_002812cc:
      (*(code *)(*pppuVar4)[lVar3])();
    }
    else if (local_60 != (undefined ***)0x0) {
      lVar3 = 5;
      pppuVar4 = local_60;
      goto LAB_002812cc;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_00281450:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00281454  FUN_00281454 =====

void FUN_00281454(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  if ((*(char *)(param_1 + 6) != '\0') && (*(char *)(param_1 + 5) != '\0')) {
    puVar2 = (undefined8 *)param_1[2];
    while (puVar2 != (undefined8 *)0x0) {
      pvVar3 = (void *)*puVar2;
      FUN_00279620(puVar2 + 5);
      if ((*(byte *)(puVar2 + 2) & 1) != 0) {
        operator_delete((void *)puVar2[4]);
      }
      operator_delete(puVar2);
      puVar2 = (undefined8 *)pvVar3;
    }
    pvVar3 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar3 != (void *)0x0) {
      if (*(long *)(lVar1 + 0x28) == lVar4) {
        operator_delete(pvVar3);
        return;
      }
      goto LAB_00281514;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
LAB_00281514:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00281518  FUN_00281518 =====

void FUN_00281518(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
     ) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002815a4  FUN_002815a4 =====

void FUN_002815a4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
     ) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00281630  FUN_00281630 =====

void FUN_00281630(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  JSError *pJVar2;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  basic_string abStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_3 == (long *)0x0) {
    FUN_00264e5c(abStack_50,PTR_typeinfo_name_00394868);
    pJVar2 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002816ac to 002816bf has its CatchHandler @ 00281760 */
    std::__ndk1::operator+("Cannot convert `nullptr` to NativeState<",abStack_50);
                    /* try { // try from 002816c0 to 002816d3 has its CatchHandler @ 00281748 */
    FUN_00263450(auStack_68,auStack_80,&DAT_001d795b);
                    /* try { // try from 002816d8 to 00281713 has its CatchHandler @ 00281714 */
    facebook::jsi::JSError::JSError(pJVar2,param_2,auStack_68);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar2,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_38) {
    margelo::nitro::HybridObject::toObject((Runtime *)((long)param_3 + *(long *)(*param_3 + -0x20)))
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00281798  FUN_00281798 =====

void FUN_00281798(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0037d348;
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00281830  FUN_00281830 =====

void FUN_00281830(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0037d348;
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002818bc  FUN_002818bc =====

void FUN_002818bc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x18);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_0037d348;
  puVar4[1] = uVar1;
  puVar4[2] = lVar2;
  if (lVar2 != 0) {
    FUN_00259a00(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


// ===== 00281934  FUN_00281934 =====

void FUN_00281934(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0037d348;
  param_2[1] = uVar1;
  param_2[2] = lVar2;
  if (lVar2 != 0) {
    FUN_00259a00(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00281998  FUN_00281998 =====

void FUN_00281998(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x10);
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00281a24  FUN_00281a24 =====

void FUN_00281a24(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)((long)param_1 + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00281aa4  FUN_00281aa4 =====

void FUN_00281aa4(undefined4 *param_1,long param_2,Runtime *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  Runtime *pRVar4;
  ulong uVar5;
  Runtime **ppRVar6;
  void *pvVar7;
  long *plVar8;
  long lVar9;
  Runtime *pRVar10;
  long lVar11;
  long lVar12;
  void *pvVar13;
  Runtime ***pppRVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  IRuntime *pIVar19;
  ulong uVar20;
  void *pvVar21;
  Runtime *local_148;
  Runtime *local_140;
  undefined8 *local_138;
  Runtime *local_130;
  Runtime *local_128;
  Runtime *local_110 [2];
  Runtime *local_100;
  Runtime *local_f8;
  Runtime *local_f0;
  Runtime *local_e0 [2];
  Runtime *local_d0;
  Runtime *local_c8;
  Runtime *local_c0;
  undefined8 local_b8;
  Runtime **local_b0 [2];
  long local_a0 [4];
  Runtime *local_80 [2];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  pIVar19 = (IRuntime *)*param_5;
  facebook::jsi::Value::asObject(pIVar19);
                    /* try { // try from 00281af0 to 00281aff has its CatchHandler @ 002824ec */
  facebook::jsi::Object::asFunction((IRuntime *)&local_d0);
  if (local_d0 != (Runtime *)0x0) {
    (*(code *)**(undefined8 **)local_d0)();
  }
  local_130 = (Runtime *)0x0;
  local_128 = (Runtime *)0x0;
                    /* try { // try from 00281b18 to 00281b23 has its CatchHandler @ 002824cc */
  margelo::nitro::JSICache::getOrCreateCache(param_3);
                    /* try { // try from 00281b28 to 00281b33 has its CatchHandler @ 002824bc */
  FUN_0026ce4c(&local_100,local_d0,&local_138);
                    /* try { // try from 00281b34 to 00281b3f has its CatchHandler @ 002824ac */
  FUN_0026d090(&local_130,&local_100);
  if (local_f8 != (Runtime *)0x0) {
    uVar5 = FUN_00255510(0xffffffffffffffff);
    if (uVar5 < 2) {
      if ((*(byte *)((long)local_f8 + 0x10) & 1) == 0) {
        if (local_100 != (Runtime *)0x0) {
          if (*(undefined8 **)local_100 != (undefined8 *)0x0) {
            (**(code **)**(undefined8 **)local_100)();
          }
          operator_delete(local_100);
        }
        local_100 = (Runtime *)0x0;
        *(undefined4 *)((long)local_f8 + 0x10) = 1;
        goto LAB_00281ba0;
      }
      lVar11 = *(long *)local_f8;
      pRVar10 = local_f8;
    }
    else {
LAB_00281ba0:
      lVar11 = *(long *)local_f8;
      pRVar10 = local_f8;
    }
    if (((lVar11 == 0) && (*(long *)((long)pRVar10 + 8) == 0)) && (pRVar10 != (Runtime *)0x0)) {
      std::__ndk1::mutex::~mutex((mutex *)((long)pRVar10 + 0x14));
      operator_delete(pRVar10);
    }
  }
  std::__ndk1::mutex::unlock();
  if ((local_c8 != (Runtime *)0x0) &&
     (lVar11 = FUN_00255510(0xffffffffffffffff,(long *)((long)local_c8 + 8)), lVar11 == 0)) {
    (**(code **)(*(long *)local_c8 + 0x10))(local_c8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pRVar4 = local_128;
  pRVar10 = local_130;
  local_130 = (Runtime *)0x0;
  local_128 = (Runtime *)0x0;
  local_f8 = pRVar10;
  local_f0 = pRVar4;
  local_100 = param_3;
                    /* try { // try from 00281c20 to 00281c2b has its CatchHandler @ 0028249c */
  margelo::nitro::Dispatcher::getRuntimeGlobalDispatcher(param_3);
  if (local_140 != (Runtime *)0x0) {
    FUN_00259a00(1,local_140 + 0x10);
  }
  local_c8 = pRVar10;
  local_f8 = (Runtime *)0x0;
  local_f0 = (Runtime *)0x0;
  local_c0 = pRVar4;
  local_d0 = param_3;
  if (local_140 != (Runtime *)0x0) {
    FUN_00259a00(1,local_140 + 0x10);
  }
  local_80[0] = (Runtime *)0x0;
                    /* try { // try from 00281c64 to 00281c6b has its CatchHandler @ 00282478 */
  local_80[0] = (Runtime *)operator_new(0x30);
  *(Runtime **)(local_80[0] + 0x10) = pRVar10;
  *(Runtime **)(local_80[0] + 0x18) = pRVar4;
  *(undefined ***)local_80[0] = &PTR_FUN_0037d3b8;
  *(Runtime **)(local_80[0] + 8) = param_3;
  local_c8 = (Runtime *)0x0;
  local_c0 = (Runtime *)0x0;
  *(Runtime **)(local_80[0] + 0x20) = local_148;
  *(Runtime **)(local_80[0] + 0x28) = local_140;
  local_b8 = 0;
  local_b0[0] = (Runtime **)0x0;
  if (((local_140 != (Runtime *)0x0) &&
      (std::__ndk1::__shared_weak_count::__release_weak(), local_140 != (Runtime *)0x0)) &&
     (lVar11 = FUN_00255510(0xffffffffffffffff,local_140 + 8), lVar11 == 0)) {
    (**(code **)(*(long *)local_140 + 0x10))(local_140);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (local_f0 != (Runtime *)0x0) {
    uVar5 = FUN_00255510(0xffffffffffffffff);
    pRVar10 = local_f8;
    if (uVar5 < 2) {
      if ((*(byte *)((long)local_f0 + 0x10) & 1) == 0) {
        if (local_f8 != (Runtime *)0x0) {
          if (*(undefined8 **)local_f8 != (undefined8 *)0x0) {
            (**(code **)**(undefined8 **)local_f8)();
          }
          operator_delete(pRVar10);
        }
        local_f8 = (Runtime *)0x0;
        *(undefined4 *)((long)local_f0 + 0x10) = 1;
        goto LAB_00281d2c;
      }
      lVar11 = *(long *)local_f0;
      pRVar10 = local_f0;
    }
    else {
LAB_00281d2c:
      lVar11 = *(long *)local_f0;
      pRVar10 = local_f0;
    }
    local_f0 = pRVar10;
    if (((lVar11 == 0) && (*(long *)((long)pRVar10 + 8) == 0)) && (pRVar10 != (Runtime *)0x0)) {
      std::__ndk1::mutex::~mutex((mutex *)((long)pRVar10 + 0x14));
      operator_delete(pRVar10);
    }
  }
  if (local_128 != (Runtime *)0x0) {
    uVar5 = FUN_00255510(0xffffffffffffffff);
    pRVar10 = local_130;
    if (uVar5 < 2) {
      if ((*(byte *)((long)local_128 + 0x10) & 1) == 0) {
        if (local_130 != (Runtime *)0x0) {
          if (*(undefined8 **)local_130 != (undefined8 *)0x0) {
            (**(code **)**(undefined8 **)local_130)();
          }
          operator_delete(pRVar10);
        }
        local_130 = (Runtime *)0x0;
        *(undefined4 *)((long)local_128 + 0x10) = 1;
        goto LAB_00281dbc;
      }
      lVar11 = *(long *)local_128;
      pRVar10 = local_128;
    }
    else {
LAB_00281dbc:
      lVar11 = *(long *)local_128;
      pRVar10 = local_128;
    }
    local_128 = pRVar10;
    if (((lVar11 == 0) && (*(long *)((long)pRVar10 + 8) == 0)) && (pRVar10 != (Runtime *)0x0)) {
      std::__ndk1::mutex::~mutex((mutex *)((long)pRVar10 + 0x14));
      operator_delete(pRVar10);
    }
  }
  if (local_138 != (undefined8 *)0x0) {
    (**(code **)*local_138)();
  }
  lVar11 = *(long *)(param_2 + 8);
  if (local_80[0] == (Runtime *)0x0) {
    ppRVar6 = local_e0;
LAB_00281e2c:
    *ppRVar6 = (Runtime *)0x0;
  }
  else {
    if (local_80[0] != (Runtime *)local_a0) {
      ppRVar6 = local_80;
      local_e0[0] = local_80[0];
      goto LAB_00281e2c;
    }
    local_e0[0] = (Runtime *)&local_100;
                    /* try { // try from 00281e44 to 00281e4f has its CatchHandler @ 00282454 */
    (**(code **)(local_a0[0] + 0x18))(local_a0,&local_100);
  }
  pRVar10 = local_e0[0];
  local_b0[0] = (Runtime **)0x0;
  if (local_e0[0] != (Runtime *)0x0) {
                    /* try { // try from 00281e5c to 00281e63 has its CatchHandler @ 00282460 */
    ppRVar6 = (Runtime **)operator_new(0x40);
    *ppRVar6 = (Runtime *)&PTR_FUN_0037d4d8;
    if (pRVar10 == (Runtime *)&local_100) {
      ppRVar6[6] = (Runtime *)(ppRVar6 + 2);
                    /* try { // try from 00281e98 to 00281ea7 has its CatchHandler @ 00282450 */
      (**(code **)(local_100 + 0x18))(&local_100);
      local_b0[0] = ppRVar6;
    }
    else {
      ppRVar6[6] = pRVar10;
      local_e0[0] = (Runtime *)0x0;
      local_b0[0] = ppRVar6;
    }
  }
                    /* try { // try from 00281eac to 00281eb3 has its CatchHandler @ 00282470 */
  std::__ndk1::mutex::lock();
  if (*(int *)(lVar11 + 0x10) == 1) {
    if (local_b0[0] != (Runtime **)0x0) {
                    /* try { // try from 00281ed4 to 00281f77 has its CatchHandler @ 0028257c */
      (**(code **)(*local_b0[0] + 0x30))(local_b0[0],lVar11);
LAB_002820b0:
      std::__ndk1::mutex::unlock();
      if (local_b0[0] == &local_d0) {
        lVar11 = 4;
        ppRVar6 = &local_d0;
LAB_00282114:
        (**(code **)(*ppRVar6 + lVar11 * 8))();
      }
      else if (local_b0[0] != (Runtime **)0x0) {
        lVar11 = 5;
        ppRVar6 = local_b0[0];
        goto LAB_00282114;
      }
      if (local_e0[0] == (Runtime *)&local_100) {
        lVar11 = 4;
        pRVar10 = (Runtime *)&local_100;
LAB_00282144:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_e0[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_e0[0];
        goto LAB_00282144;
      }
      if (local_80[0] == (Runtime *)local_a0) {
        lVar11 = 4;
        pRVar10 = (Runtime *)local_a0;
LAB_00282174:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_80[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_80[0];
        goto LAB_00282174;
      }
      FUN_0026c2bc(local_a0,param_3,pIVar19 + 0x10);
      lVar11 = *(long *)(param_2 + 8);
      if (local_80[0] == (Runtime *)0x0) {
        ppRVar6 = local_110;
LAB_002821bc:
        *ppRVar6 = (Runtime *)0x0;
      }
      else {
        if (local_80[0] != (Runtime *)local_a0) {
          ppRVar6 = local_80;
          local_110[0] = local_80[0];
          goto LAB_002821bc;
        }
        local_110[0] = (Runtime *)&local_130;
                    /* try { // try from 002821d4 to 002821df has its CatchHandler @ 0028244c */
        (**(code **)(local_a0[0] + 0x18))(local_a0,&local_130);
      }
      pRVar10 = local_110[0];
      local_b0[0] = (Runtime **)0x0;
      if (local_110[0] != (Runtime *)0x0) {
                    /* try { // try from 002821ec to 002821f3 has its CatchHandler @ 00282458 */
        ppRVar6 = (Runtime **)operator_new(0x40);
        *ppRVar6 = (Runtime *)&PTR_FUN_00384d40;
        if (pRVar10 == (Runtime *)&local_130) {
          ppRVar6[6] = (Runtime *)(ppRVar6 + 2);
                    /* try { // try from 00282228 to 00282237 has its CatchHandler @ 00282448 */
          (**(code **)(local_130 + 0x18))(&local_130);
          local_b0[0] = ppRVar6;
        }
        else {
          ppRVar6[6] = pRVar10;
          local_110[0] = (Runtime *)0x0;
          local_b0[0] = ppRVar6;
        }
      }
                    /* try { // try from 0028223c to 00282243 has its CatchHandler @ 00282468 */
      std::__ndk1::mutex::lock();
      if (*(int *)(lVar11 + 0x10) == 2) {
        if (local_b0[0] == (Runtime **)0x0) goto LAB_002823f4;
                    /* try { // try from 00282260 to 002822a3 has its CatchHandler @ 00282510 */
        (**(code **)(*local_b0[0] + 0x30))(local_b0[0],lVar11);
      }
      else {
        uVar5 = *(ulong *)(lVar11 + 0x38);
        if (uVar5 < *(ulong *)(lVar11 + 0x40)) {
          if (local_b0[0] == (Runtime **)0x0) {
            pppRVar14 = (Runtime ***)(uVar5 + 0x20);
LAB_002822ac:
            *pppRVar14 = (Runtime **)0x0;
          }
          else {
            if (local_b0[0] != &local_d0) {
              pppRVar14 = local_b0;
              *(Runtime ***)(uVar5 + 0x20) = local_b0[0];
              goto LAB_002822ac;
            }
            *(ulong *)(uVar5 + 0x20) = uVar5;
                    /* try { // try from 002822c4 to 002822cb has its CatchHandler @ 0028243c */
            (**(code **)(*local_b0[0] + 0x18))(local_b0[0],uVar5);
          }
          lVar9 = uVar5 + 0x30;
        }
        else {
          lVar9 = FUN_0026c714(lVar11 + 0x30,&local_d0);
        }
        *(long *)(lVar11 + 0x38) = lVar9;
      }
      std::__ndk1::mutex::unlock();
      if (local_b0[0] == &local_d0) {
        lVar11 = 4;
        ppRVar6 = &local_d0;
LAB_00282308:
        (**(code **)(*ppRVar6 + lVar11 * 8))();
      }
      else if (local_b0[0] != (Runtime **)0x0) {
        lVar11 = 5;
        ppRVar6 = local_b0[0];
        goto LAB_00282308;
      }
      if (local_110[0] == (Runtime *)&local_130) {
        lVar11 = 4;
        pRVar10 = (Runtime *)&local_130;
LAB_00282338:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_110[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_110[0];
        goto LAB_00282338;
      }
      *param_1 = 0;
      if (local_80[0] == (Runtime *)local_a0) {
        lVar11 = 4;
        pRVar10 = (Runtime *)local_a0;
LAB_0028236c:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_80[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_80[0];
        goto LAB_0028236c;
      }
      if (*(long *)(lVar3 + 0x28) == local_70) {
        return;
      }
      goto LAB_00282638;
    }
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_00282638;
                    /* try { // try from 002823f0 to 002823f3 has its CatchHandler @ 0028257c */
    FUN_0025cd00();
LAB_002823f4:
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_00282638;
                    /* try { // try from 00282408 to 0028240b has its CatchHandler @ 00282510 */
    FUN_0025cd00();
LAB_0028240c:
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_00282638;
                    /* try { // try from 00282420 to 0028243b has its CatchHandler @ 0028257c */
    FUN_002826cc();
  }
  else {
    uVar5 = *(ulong *)(lVar11 + 0x20);
    pppRVar14 = local_b0;
    if (uVar5 < *(ulong *)(lVar11 + 0x28)) {
      if (local_b0[0] == (Runtime **)0x0) {
        pppRVar14 = (Runtime ***)(uVar5 + 0x20);
LAB_00281f80:
        *pppRVar14 = (Runtime **)0x0;
      }
      else {
        if (local_b0[0] != &local_d0) {
          *(Runtime ***)(uVar5 + 0x20) = local_b0[0];
          goto LAB_00281f80;
        }
        *(ulong *)(uVar5 + 0x20) = uVar5;
                    /* try { // try from 00281fd4 to 00281fdb has its CatchHandler @ 00282444 */
        (**(code **)(*local_b0[0] + 0x18))(local_b0[0],uVar5);
      }
      lVar9 = uVar5 + 0x30;
LAB_002820ac:
      *(long *)(lVar11 + 0x20) = lVar9;
      goto LAB_002820b0;
    }
    uVar17 = *(ulong *)(lVar11 + 0x18);
    lVar9 = (long)(uVar5 - uVar17) >> 4;
    uVar20 = lVar9 * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar20) goto LAB_0028240c;
    lVar12 = (long)(*(ulong *)(lVar11 + 0x28) - uVar17) >> 4;
    uVar16 = lVar12 * 0x5555555555555556;
    if (uVar16 < uVar20 || uVar16 - uVar20 == 0) {
      uVar16 = uVar20;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar12 * -0x5555555555555555)) {
      uVar16 = 0x555555555555555;
    }
    if (uVar16 == 0) {
      pvVar7 = (void *)0x0;
LAB_00281f8c:
      pvVar21 = (void *)((long)pvVar7 + lVar9 * 0x10);
      if (local_b0[0] == (Runtime **)0x0) {
        pppRVar14 = (Runtime ***)((long)pvVar21 + 0x20);
LAB_00281fbc:
        *pppRVar14 = (Runtime **)0x0;
      }
      else {
        if (local_b0[0] != &local_d0) {
          *(Runtime ***)((long)pvVar21 + 0x20) = local_b0[0];
          goto LAB_00281fbc;
        }
        *(void **)((long)pvVar21 + 0x20) = pvVar21;
                    /* try { // try from 00281ff0 to 00281ffb has its CatchHandler @ 00282440 */
        (**(code **)(local_d0 + 0x18))(&local_d0,pvVar21);
        uVar17 = *(ulong *)(lVar11 + 0x18);
        uVar5 = *(ulong *)(lVar11 + 0x20);
      }
      pvVar13 = pvVar21;
      if (uVar5 != uVar17) {
        lVar9 = 0;
        uVar20 = uVar5;
        do {
          lVar12 = uVar5 + lVar9;
          uVar1 = (long)pvVar21 + lVar9;
          lVar15 = *(long *)(lVar12 + -0x10);
          if (lVar15 == 0) {
LAB_0028201c:
            *(undefined8 *)(uVar1 - 0x10) = 0;
          }
          else {
            if (lVar12 + -0x30 != lVar15) {
              *(long *)(uVar1 - 0x10) = lVar15;
              uVar1 = uVar20;
              goto LAB_0028201c;
            }
            *(ulong *)(uVar1 - 0x10) = uVar1 - 0x30;
                    /* try { // try from 00282070 to 00282073 has its CatchHandler @ 0028250c */
            (**(code **)(**(long **)(lVar12 + -0x10) + 0x18))();
          }
          lVar9 = lVar9 + -0x30;
          uVar20 = uVar20 - 0x30;
        } while (uVar5 + lVar9 != uVar17);
        pvVar13 = (void *)((long)pvVar21 + lVar9);
      }
      lVar9 = (long)pvVar21 + 0x30;
      plVar2 = *(long **)(lVar11 + 0x18);
      plVar18 = *(long **)(lVar11 + 0x20);
      *(void **)(lVar11 + 0x18) = pvVar13;
      *(long *)(lVar11 + 0x20) = lVar9;
      *(void **)(lVar11 + 0x28) = (void *)((long)pvVar7 + uVar16 * 0x30);
joined_r0x0028209c:
      if (plVar18 != plVar2) {
        plVar8 = (long *)plVar18[-2];
        plVar18 = plVar18 + -6;
        if (plVar18 != plVar8) goto code_r0x00282100;
        lVar12 = 4;
        plVar8 = plVar18;
        goto LAB_002820dc;
      }
      if (plVar2 != (long *)0x0) {
        operator_delete(plVar2);
      }
      goto LAB_002820ac;
    }
    if (uVar16 < 0x555555555555556) {
      pvVar7 = operator_new(uVar16 * 0x30);
      goto LAB_00281f8c;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    FUN_00260a2c();
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 002822c4 with catch @ 0028243c */
    FUN_0025ad9c();
  }
LAB_00282638:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00282100:
  if (plVar8 != (long *)0x0) {
    lVar12 = 5;
LAB_002820dc:
    (**(code **)(*plVar8 + lVar12 * 8))();
  }
  goto joined_r0x0028209c;
}


// ===== 0028263c  FUN_0028263c =====

void FUN_0028263c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394ba8) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0028268c  FUN_0028268c =====

undefined * FUN_0028268c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394bb0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002826cc  FUN_002826cc =====

void FUN_002826cc(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_00260abc("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00282704  FUN_00282704 =====

void FUN_00282704(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  plVar3 = param_1 + 2;
  plVar2 = (long *)param_1[6];
  *param_1 = &PTR_FUN_0037d4d8;
  if (plVar2 == plVar3) {
    lVar4 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == lVar5) {
        return;
      }
      goto LAB_00282790;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00282770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_00282790:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00282794  FUN_00282794 =====

void FUN_00282794(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar3 = param_1 + 2;
  plVar2 = (long *)param_1[6];
  *param_1 = &PTR_FUN_0037d4d8;
  if (plVar2 == plVar3) {
    lVar5 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_002827f0;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_002827f0:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00282818  FUN_00282818 =====

undefined8 * FUN_00282818(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x40);
  plVar3 = *(long **)(param_1 + 0x30);
  *puVar2 = &PTR_FUN_0037d4d8;
  if (plVar3 != (long *)0x0) {
    if (plVar3 == (long *)(param_1 + 0x10)) {
      lVar5 = *plVar3;
      puVar2[6] = puVar2 + 2;
      (**(code **)(lVar5 + 0x18))();
      goto LAB_00282890;
    }
                    /* try { // try from 00282874 to 0028288f has its CatchHandler @ 002828b8 */
    plVar3 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  puVar2[6] = plVar3;
LAB_00282890:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002828e0  FUN_002828e0 =====

void FUN_002828e0(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_0037d4d8;
  if (plVar4 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar4 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
      if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00282988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
        return;
      }
      goto LAB_0028298c;
    }
    uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
    param_2[6] = uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
LAB_0028298c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00282990  FUN_00282990 =====

void FUN_00282990(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  plVar3 = (long *)(param_1 + 0x10);
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == plVar3) {
    lVar4 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
        return;
      }
      goto LAB_00282a10;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x002829f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_00282a10:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00282a14  FUN_00282a14 =====

void FUN_00282a14(void *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)((long)param_1 + 0x10);
  plVar2 = *(long **)((long)param_1 + 0x30);
  if (plVar2 == plVar3) {
    lVar5 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_00282a64;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_00282a64:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00282a8c  FUN_00282a8c =====

void FUN_00282a8c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_38;
  long *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = *param_2;
  local_30 = (long *)param_2[1];
  if (local_30 != (long *)0x0) {
    FUN_00259a00(1,local_30 + 1);
  }
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00282b3c to 00282b3f has its CatchHandler @ 00282b40 */
      uVar4 = FUN_0025cd00();
                    /* catch() { ... } // from try @ 00282ad4 with catch @ 00282b40
                       catch() { ... } // from try @ 00282b3c with catch @ 00282b40 */
      FUN_00269fac(local_30);
      if (*(long *)(lVar1 + 0x28) == local_28) {
        FUN_00255d34(uVar4);
      }
    }
  }
  else {
                    /* try { // try from 00282ad4 to 00282adb has its CatchHandler @ 00282b40 */
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_38);
    plVar2 = local_30;
    if ((local_30 != (long *)0x0) &&
       (lVar3 = FUN_00255510(0xffffffffffffffff,local_30 + 1), lVar3 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00282b6c  FUN_00282b6c =====

void FUN_00282b6c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394b98) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00282bbc  FUN_00282bbc =====

undefined * FUN_00282bbc(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394ba0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00282bfc  FUN_00282bfc =====

void FUN_00282bfc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00282c50  FUN_00282c50 =====

void FUN_00282c50(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037d3b8;
  if (param_1[5] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00282cb0  FUN_00282cb0 =====

void FUN_00282cb0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037d3b8;
  if (param_1[5] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0026d198(param_1 + 2);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00282d18  FUN_00282d18 =====

undefined8 * FUN_00282d18(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x18);
  *puVar2 = &PTR_FUN_0037d3b8;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = lVar3;
  if (lVar3 != 0) {
    FUN_00255510(1);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = lVar3;
  if (lVar3 != 0) {
    FUN_00259a00(1,lVar3 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00282db4  FUN_00282db4 =====

void FUN_00282db4(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0037d3b8;
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[2] = uVar4;
  param_2[3] = lVar2;
  if (lVar2 != 0) {
    FUN_00255510(1);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = lVar2;
  if (lVar2 != 0) {
    FUN_00259a00(1,lVar2 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00282e48  FUN_00282e48 =====

void FUN_00282e48(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x28) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00282e9c  FUN_00282e9c =====

void FUN_00282e9c(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)((long)param_1 + 0x28) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0026d198((long)param_1 + 0x10);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00282ef8  FUN_00282ef8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00282ef8(long param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  ulong *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  ulong local_98;
  long *plStack_90;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  ulong *local_60;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar1 = *param_2;
  plVar2 = (long *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  if (plVar2 != (long *)0x0) {
    FUN_00259a00(1,plVar2 + 1);
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    plVar5 = (long *)0x0;
LAB_00282fe8:
                    /* try { // try from 00282fe8 to 00282fef has its CatchHandler @ 002831a0 */
    local_70 = (undefined8 *)operator_new(0x60);
    puVar4 = PTR_typeinfo_name_00394b70;
    uStack_78 = _UNK_001d81d8;
    local_80 = _DAT_001d81d0;
    *(undefined1 *)((long)local_70 + 0x5d) = 0;
    uVar11 = *(undefined8 *)(puVar4 + 0x20);
    uVar13 = *(undefined8 *)(puVar4 + 0x38);
    uVar12 = *(undefined8 *)(puVar4 + 0x30);
    uVar10 = *(undefined8 *)(puVar4 + 0x48);
    uVar9 = *(undefined8 *)(puVar4 + 0x40);
    local_70[5] = *(undefined8 *)(puVar4 + 0x28);
    local_70[4] = uVar11;
    local_70[7] = uVar13;
    local_70[6] = uVar12;
    uVar12 = *(undefined8 *)(puVar4 + 0x55);
    uVar11 = *(undefined8 *)(puVar4 + 0x4d);
    local_70[9] = uVar10;
    local_70[8] = uVar9;
    *(undefined8 *)((long)local_70 + 0x55) = uVar12;
    *(undefined8 *)((long)local_70 + 0x4d) = uVar11;
    uVar9 = *(undefined8 *)puVar4;
    uVar11 = *(undefined8 *)(puVar4 + 0x18);
    uVar10 = *(undefined8 *)(puVar4 + 0x10);
    local_70[1] = *(undefined8 *)(puVar4 + 8);
    *local_70 = uVar9;
    local_70[3] = uVar11;
    local_70[2] = uVar10;
                    /* try { // try from 0028302c to 0028303b has its CatchHandler @ 00283188 */
    margelo::nitro::TypeInfo::demangleName((basic_string *)&local_80,true);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    plVar8 = plVar2;
    if (plVar5 == (long *)0x0) goto LAB_002830bc;
  }
  else {
    plVar5 = (long *)std::__ndk1::__shared_weak_count::lock();
    if ((plVar5 == (long *)0x0) || (plVar8 = *(long **)(param_1 + 0x20), plVar8 == (long *)0x0))
    goto LAB_00282fe8;
    uStack_a8 = *(ulong *)(param_1 + 0x10);
    local_b0 = *(ulong *)(param_1 + 8);
    local_a0 = *(void **)(param_1 + 0x18);
    if (local_a0 != (void *)0x0) {
      FUN_00255510(1);
    }
    local_60 = (ulong *)0x0;
    local_98 = uVar1;
    plStack_90 = plVar2;
                    /* try { // try from 00282f78 to 00282f7f has its CatchHandler @ 00283174 */
    local_60 = (ulong *)operator_new(0x30);
    local_60[5] = (ulong)plVar2;
    *local_60 = (ulong)&PTR_FUN_0037d448;
    local_60[2] = uStack_a8;
    local_60[1] = local_b0;
    *(undefined8 *)((ulong)&local_b0 | 8) = 0;
    ((undefined8 *)((ulong)&local_b0 | 8))[1] = 0;
    local_60[3] = (ulong)local_a0;
    local_60[4] = uVar1;
    local_98 = 0;
    plStack_90 = (long *)0x0;
                    /* try { // try from 00282fbc to 00282fcb has its CatchHandler @ 0028313c */
    (**(code **)(*plVar8 + 0x18))(plVar8,&local_80);
    if (local_60 == &local_80) {
      lVar7 = 4;
      puVar6 = &local_80;
LAB_00283084:
      (**(code **)(*puVar6 + lVar7 * 8))();
    }
    else if (local_60 != (ulong *)0x0) {
      lVar7 = 5;
      puVar6 = local_60;
      goto LAB_00283084;
    }
    plVar8 = (long *)0x0;
  }
  lVar7 = FUN_00255510(0xffffffffffffffff,plVar5 + 1);
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
LAB_002830bc:
  if ((plVar8 != (long *)0x0) && (lVar7 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar7 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if ((plVar2 != (long *)0x0) && (lVar7 = FUN_00255510(0xffffffffffffffff,plVar2 + 1), lVar7 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002831dc  FUN_002831dc =====

void FUN_002831dc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394b70) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0028322c  FUN_0028322c =====

undefined * FUN_0028322c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394b78;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028326c  FUN_0028326c =====

void FUN_0028326c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x20);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    FUN_0026d198(param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002832ec  FUN_002832ec =====

void FUN_002832ec(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[5];
  *param_1 = &PTR_FUN_0037d448;
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    FUN_0026d198(param_1 + 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00283378  FUN_00283378 =====

void FUN_00283378(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[5];
  *param_1 = &PTR_FUN_0037d448;
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0026d198(param_1 + 2);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028340c  FUN_0028340c =====

undefined8 * FUN_0028340c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x18);
  *puVar2 = &PTR_FUN_0037d448;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = lVar3;
  if (lVar3 != 0) {
    FUN_00255510(1);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = lVar3;
  if (lVar3 != 0) {
    FUN_00259a00(1,lVar3 + 8);
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002834a8  FUN_002834a8 =====

void FUN_002834a8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0037d448;
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[2] = uVar4;
  param_2[3] = lVar2;
  if (lVar2 != 0) {
    FUN_00255510(1);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = lVar2;
  if (lVar2 != 0) {
    FUN_00259a00(1,lVar2 + 8);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028353c  FUN_0028353c =====

void FUN_0028353c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x28);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    FUN_0026d198(param_1 + 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002835bc  FUN_002835bc =====

void FUN_002835bc(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)((long)param_1 + 0x28);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0026d198((long)param_1 + 0x10);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00283644  FUN_00283644 =====

void FUN_00283644(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  runtime_error *this;
  undefined8 uVar5;
  long *plVar6;
  Value aVStack_90 [16];
  Value aVStack_80 [24];
  undefined4 local_68 [6];
  Value aVStack_50 [24];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  plVar6 = *(long **)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if ((*(long *)(param_1 + 0x10) == 0) || ((*(byte *)(*(long *)(param_1 + 0x18) + 0x10) & 1) != 0))
  {
                    /* try { // try from 0028374c to 0028375f has its CatchHandler @ 0028385c */
    FUN_00264e5c(local_68,PTR_typeinfo_name_00394b80,1);
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0028376c to 0028377f has its CatchHandler @ 0028383c */
    std::__ndk1::operator+("Cannot call ",(basic_string *)local_68);
                    /* try { // try from 00283780 to 00283793 has its CatchHandler @ 00283824 */
    FUN_00263450(aVStack_50,aVStack_80," - the underlying `jsi::Function` has already been deleted!"
                );
                    /* try { // try from 00283798 to 002837cf has its CatchHandler @ 002837f0 */
    std::runtime_error::runtime_error(this,(basic_string *)aVStack_50);
    if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
  }
  else {
    plVar1 = *(long **)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 00283694 to 0028369f has its CatchHandler @ 0028385c */
    FUN_00281630(aVStack_90,plVar1,uVar5);
    facebook::jsi::Value::Value(aVStack_50,aVStack_90);
    local_68[0] = 0;
                    /* try { // try from 002836b8 to 002836d3 has its CatchHandler @ 002837d0 */
    (**(code **)(*plVar1 + 0x280))(aVStack_80,plVar1,uVar2,local_68,aVStack_50,1);
    facebook::jsi::Value::~Value((Value *)local_68);
    facebook::jsi::Value::~Value(aVStack_50);
    facebook::jsi::Value::~Value(aVStack_90);
    facebook::jsi::Value::~Value(aVStack_80);
    if ((plVar6 != (long *)0x0) &&
       (lVar4 = FUN_00255510(uVar5,0xffffffffffffffff,plVar6 + 1), lVar4 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00283888  FUN_00283888 =====

void FUN_00283888(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394b88) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002838d8  FUN_002838d8 =====

undefined * FUN_002838d8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394b90;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00283918  FUN_00283918 =====

void FUN_00283918(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (param_1[1] != 0) {
    uVar2 = FUN_00255510(0xffffffffffffffff);
    if ((uVar2 < 2) && ((*(byte *)(param_1[1] + 0x10) & 1) == 0)) {
      plVar4 = (long *)*param_1;
      if (plVar4 != (long *)0x0) {
        if ((undefined8 *)*plVar4 != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)*plVar4)();
        }
        operator_delete(plVar4);
      }
      *param_1 = 0;
      *(undefined4 *)(param_1[1] + 0x10) = 1;
    }
    if ((*(long *)param_1[1] == 0) && (*(long *)(param_1[1] + 8) == 0)) {
      pvVar5 = (void *)param_1[1];
      if (pvVar5 != (void *)0x0) {
        std::__ndk1::mutex::~mutex((mutex *)((long)pvVar5 + 0x14));
        operator_delete(pvVar5);
      }
      param_1[1] = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002839fc  FUN_002839fc =====

void FUN_002839fc(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_0037e688;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00283a40  FUN_00283a40 =====

void FUN_00283a40(__shared_weak_count *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_0037e688;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00283a98  FUN_00283a98 =====

void FUN_00283a98(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    margelo::nitro::JSArrayBuffer::~JSArrayBuffer((JSArrayBuffer *)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00283ad4  FUN_00283ad4 =====

void FUN_00283ad4(void *param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00283b0c  FUN_00283b0c =====

void FUN_00283b0c(long param_1)

{
  long lVar1;
  runtime_error *this;
  void *pvVar2;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  basic_string abStack_68 [24];
  basic_string abStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((**(long **)(param_1 + 8) == 0) && (*(long *)(*(long *)(param_1 + 8) + 8) == 0)) {
    if ((*(byte *)(*(long *)(param_1 + 8) + 0x10) & 1) == 0) {
      FUN_00264e5c(abStack_50,PTR_typeinfo_name_00394be8,1);
      this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00283bc4 to 00283bd7 has its CatchHandler @ 00283cfc */
      std::__ndk1::operator+("WeakReference<",abStack_50);
                    /* try { // try from 00283bd8 to 00283beb has its CatchHandler @ 00283ce4 */
      FUN_00263450(auStack_98,auStack_b0,"> encountered a stale `_value` - BorrowingReference<");
                    /* try { // try from 00283bec to 00283bfb has its CatchHandler @ 00283cb4 */
      FUN_00264d50(auStack_80,auStack_98,abStack_50);
                    /* try { // try from 00283bfc to 00283c0f has its CatchHandler @ 00283c90 */
      FUN_00263450(abStack_68,auStack_80,"> should\'ve already deleted this!");
                    /* try { // try from 00283c14 to 00283c4f has its CatchHandler @ 00283c50 */
      std::runtime_error::runtime_error(this,abStack_68);
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00283d34;
    }
    pvVar2 = *(void **)(param_1 + 8);
    if (pvVar2 != (void *)0x0) {
      std::__ndk1::mutex::~mutex((mutex *)((long)pvVar2 + 0x14));
      operator_delete(pvVar2);
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_00283d34:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00283d38  FUN_00283d38 =====

void FUN_00283d38(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_00255510(0xffffffffffffffff,*(long *)(param_1 + 8) + 8);
                    /* try { // try from 00283d6c to 00283d73 has its CatchHandler @ 00283d98 */
    FUN_00283b0c(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00283d9c  FUN_00283d9c =====

void FUN_00283d9c(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_00260abc("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00283dd4  FUN_00283dd4 =====

void FUN_00283dd4(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    facebook::jsi::NativeState::~NativeState(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00283e54  FUN_00283e54 =====

void FUN_00283e54(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  facebook::jsi::NativeState::~NativeState(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00283edc  FUN_00283edc =====

void FUN_00283edc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037d2d8;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete((void *)param_1[3]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00283f48  FUN_00283f48 =====

void FUN_00283f48(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037d2d8;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00283fb0  FUN_00283fb0 =====

undefined8 * FUN_00283fb0(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x38);
  bVar2 = *(byte *)(param_1 + 8);
  *puVar4 = &PTR_FUN_0037d2d8;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 00284010 to 00284013 has its CatchHandler @ 0028404c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar4 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    puVar4[5] = *(undefined8 *)(param_1 + 0x28);
    puVar4[4] = uVar6;
    *(undefined4 *)(puVar4 + 6) = uVar1;
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00284074  FUN_00284074 =====

void FUN_00284074(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037d2d8;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar4;
    param_2[1] = uVar3;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x30);
    param_2[5] = uVar4;
    param_2[4] = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028410c  FUN_0028410c =====

void FUN_0028410c(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028416c  FUN_0028416c =====

void FUN_0028416c(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002841c8  FUN_002841c8 =====

void FUN_002841c8(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  IRuntime *pIVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  JSError *pJVar12;
  code *pcVar13;
  void *pvVar14;
  ulong uVar15;
  IRuntime *pIVar16;
  long *local_1c0;
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined8 *local_168 [3];
  undefined8 local_150;
  long *local_148;
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined8 *local_c0 [2];
  void *local_b0;
  void *local_a8;
  long *plStack_a0;
  undefined8 *local_98;
  char local_80;
  char local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  pIVar16 = (IRuntime *)*param_5;
  uVar15 = *param_6;
  local_c0[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 0028422c to 0028423b has its CatchHandler @ 00284a30 */
  (**(code **)(*param_3 + 0x160))(&local_a8,param_3,local_c0);
  if ((local_a8 == (void *)0x0) ||
     (lVar10 = __dynamic_cast(local_a8,PTR_typeinfo_00394860,PTR_typeinfo_00394b58,
                              0xffffffffffffffff), lVar10 == 0)) {
    lVar10 = 0;
    local_1c0 = (long *)0x0;
    if (plStack_a0 == (long *)0x0) goto joined_r0x002842b4;
  }
  else {
    if (plStack_a0 == (long *)0x0) {
      local_1c0 = (long *)0x0;
      goto joined_r0x002842b4;
    }
    FUN_00259a00(1,plStack_a0 + 1);
    local_1c0 = plStack_a0;
  }
  lVar11 = FUN_00255510(0xffffffffffffffff,plStack_a0 + 1);
  if (lVar11 == 0) {
    (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002842b4:
  if (local_c0[0] != (undefined8 *)0x0) {
    (**(code **)*local_c0[0])();
  }
  puVar7 = PTR_defaultValue_00394b60;
  if ((uVar15 & 0xfffffffffffffffe) == 2) {
    pcVar13 = *(code **)(param_2 + 0x20);
    uVar3 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00394b68 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_defaultValue_00394b68), iVar9 != 0)) {
      *(undefined4 *)puVar7 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar7,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00394b68);
    }
    plVar1 = (long *)(lVar10 + ((long)uVar3 >> 1));
    if ((uVar3 & 1) != 0) {
      pcVar13 = *(code **)(pcVar13 + *plVar1);
    }
    pIVar2 = (IRuntime *)puVar7;
    if (uVar15 != 0) {
      pIVar2 = pIVar16;
    }
                    /* try { // try from 00284304 to 0028430f has its CatchHandler @ 0028474c */
    facebook::jsi::Value::asString(pIVar2);
                    /* try { // try from 00284318 to 00284327 has its CatchHandler @ 00284728 */
    (**(code **)(*param_3 + 0x120))(local_c0,param_3,local_168);
    if (local_168[0] != (undefined8 *)0x0) {
      (**(code **)*local_168[0])();
    }
                    /* try { // try from 00284348 to 0028434b has its CatchHandler @ 0028470c */
    uVar8 = facebook::jsi::Value::asBool();
    pIVar16 = pIVar16 + 0x20;
    if (uVar15 < 3) {
      pIVar16 = (IRuntime *)puVar7;
    }
                    /* try { // try from 0028435c to 00284367 has its CatchHandler @ 00284708 */
    FUN_00281044(&local_a8,param_3,pIVar16);
                    /* try { // try from 00284368 to 0028437f has its CatchHandler @ 002846f4 */
    (*pcVar13)(&local_150,plVar1,local_c0,uVar8 & 1,&local_a8);
    if ((local_78 != '\0') && (pvVar5 = local_a8, puVar6 = local_98, local_80 != '\0')) {
      while (puVar6 != (undefined8 *)0x0) {
        pvVar14 = (void *)*puVar6;
        local_a8 = pvVar5;
        FUN_00279620(puVar6 + 5);
        if ((*(byte *)(puVar6 + 2) & 1) != 0) {
          operator_delete((void *)puVar6[4]);
        }
        operator_delete(puVar6);
        pvVar5 = local_a8;
        puVar6 = (undefined8 *)pvVar14;
      }
      local_a8 = (void *)0x0;
      if (pvVar5 != (void *)0x0) {
        operator_delete(pvVar5);
      }
    }
    if (((ulong)local_c0[0] & 1) != 0) {
      operator_delete(local_b0);
    }
                    /* try { // try from 002843bc to 002843c7 has its CatchHandler @ 002846dc */
    FUN_00281184(param_1,param_3,local_150,local_148);
    if ((local_148 != (long *)0x0) &&
       (lVar10 = FUN_00255510(0xffffffffffffffff,local_148 + 1), lVar10 == 0)) {
      (**(code **)(*local_148 + 0x10))(local_148);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if ((local_1c0 != (long *)0x0) &&
       (lVar10 = FUN_00255510(0xffffffffffffffff,local_1c0 + 1), lVar10 == 0)) {
      (**(code **)(*local_1c0 + 0x10))(local_1c0);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar4 + 0x28) == local_70) {
      return;
    }
  }
  else {
                    /* try { // try from 002844a0 to 002844af has its CatchHandler @ 00284b88 */
    FUN_00280404(&local_a8,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar10);
    pJVar12 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002844bc to 002844cf has its CatchHandler @ 00284b68 */
    std::__ndk1::operator+("`",(basic_string *)&local_a8);
                    /* try { // try from 002844d0 to 002844e3 has its CatchHandler @ 00284b50 */
    FUN_00263450(&local_150,local_168,"` expected between ");
                    /* try { // try from 002844e4 to 002844ef has its CatchHandler @ 00284b20 */
    std::__ndk1::to_string(2);
                    /* try { // try from 002844f0 to 002844ff has its CatchHandler @ 00284afc */
    FUN_00264adc(auStack_138,&local_150,auStack_180);
                    /* try { // try from 00284500 to 00284513 has its CatchHandler @ 00284ad8 */
    FUN_00263450(auStack_120,auStack_138," and ");
                    /* try { // try from 00284514 to 0028451f has its CatchHandler @ 00284ab4 */
    std::__ndk1::to_string(3);
                    /* try { // try from 00284520 to 0028452f has its CatchHandler @ 00284a8c */
    FUN_00264adc(auStack_108,auStack_120,auStack_198);
                    /* try { // try from 00284530 to 00284543 has its CatchHandler @ 00284a50 */
    FUN_00263450(auStack_f0,auStack_108," arguments, but received ");
                    /* try { // try from 00284544 to 0028454f has its CatchHandler @ 002846b8 */
    std::__ndk1::to_string(uVar15);
                    /* try { // try from 00284550 to 0028455f has its CatchHandler @ 00284694 */
    FUN_00264adc(auStack_d8,auStack_f0,auStack_1b0);
                    /* try { // try from 00284560 to 00284573 has its CatchHandler @ 00284670 */
    FUN_00263450(local_c0,auStack_d8,&DAT_001d5be0);
                    /* try { // try from 00284578 to 002845b7 has its CatchHandler @ 002845f8 */
    facebook::jsi::JSError::JSError(pJVar12,param_3,local_c0);
    if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar12,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00284bb4  FUN_00284bb4 =====

void FUN_00284bb4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394bc0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00284c04  FUN_00284c04 =====

undefined * FUN_00284c04(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394bc8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00284c44  margelo::nitro::rive::HybridRiveFileFactorySpec::loadHybridMethods =====

/* virtual thunk to margelo::nitro::rive::HybridRiveFileFactorySpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridRiveFileFactorySpec::loadHybridMethods(HybridRiveFileFactorySpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    loadHybridMethods(this + *(long *)(*(long *)this + -0x20));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00284c88  FUN_00284c88 =====

void FUN_00284c88(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x284c8c);
  (*pcVar1)();
}


// ===== 00284c8c  FUN_00284c8c =====

void FUN_00284c8c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x284c90);
  (*pcVar1)();
}


// ===== 00284c90  FUN_00284c90 =====

void FUN_00284c90(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x284c94);
  (*pcVar1)();
}


// ===== 00284c94  FUN_00284c94 =====

void FUN_00284c94(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x284c98);
  (*pcVar1)();
}


// ===== 00284c98  margelo::nitro::rive::HybridFallbackFontSpec::loadHybridMethods =====

/* margelo::nitro::rive::HybridFallbackFontSpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridFallbackFontSpec::loadHybridMethods(HybridFallbackFontSpec *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  margelo::nitro::HybridObject::loadHybridMethods();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_00284cfc(this + *(long *)(*(long *)this + -0x20) + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00284cfc  FUN_00284cfc =====

void FUN_00284cfc(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  undefined *local_68;
  long local_60;
  long *plStack_58;
  long *local_50;
  long *plStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    plStack_58 = (long *)0x0;
    local_68 = PTR_typeinfo_00394c18;
    local_60 = 0;
                    /* try { // try from 00284d38 to 00284d47 has its CatchHandler @ 00284f20 */
    FUN_00264f84(&local_50,&local_68,&local_60);
    plVar5 = plStack_48;
    plVar3 = local_50;
    plVar6 = (long *)param_1[1];
    local_50 = (long *)0x0;
    plStack_48 = (long *)0x0;
    param_1[1] = (long)plVar5;
    *param_1 = (long)plVar3;
    if ((plVar6 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar6 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar3 = plStack_48;
    if ((plStack_48 != (long *)0x0) &&
       (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_48 + 1), lVar2 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar3 = plStack_58;
    if ((plStack_58 != (long *)0x0) &&
       (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_58 + 1), lVar2 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar3 = (long *)*param_1;
  }
  puVar4 = *(undefined **)(*plVar3 + 8);
  plVar5 = plVar3;
  do {
    if (puVar4 == PTR_typeinfo_name_00394c10) {
LAB_00284ef0:
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    plVar5 = (long *)plVar5[1];
    if (plVar5 == (long *)0x0) {
      plStack_48 = (long *)param_1[1];
      local_50 = plVar3;
      if (plStack_48 != (long *)0x0) {
        FUN_00259a00(1,plStack_48 + 1);
      }
      local_68 = PTR_typeinfo_00394c18;
                    /* try { // try from 00284e44 to 00284e53 has its CatchHandler @ 00284f14 */
      FUN_00264f84(&local_60,&local_68,&local_50);
      plVar3 = plStack_58;
      lVar2 = local_60;
      plVar5 = (long *)param_1[1];
      local_60 = 0;
      plStack_58 = (long *)0x0;
      param_1[1] = (long)plVar3;
      *param_1 = lVar2;
      if ((plVar5 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plVar5 + 1), lVar2 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar3 = plStack_58;
      if ((plStack_58 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_58 + 1), lVar2 == 0)) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar3 = plStack_48;
      if ((plStack_48 != (long *)0x0) &&
         (lVar2 = FUN_00255510(0xffffffffffffffff,plStack_48 + 1), lVar2 == 0)) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      goto LAB_00284ef0;
    }
    puVar4 = *(undefined **)(*plVar5 + 8);
  } while( true );
}


// ===== 00284f48  margelo::nitro::rive::HybridFallbackFontSpec::loadHybridMethods =====

/* virtual thunk to margelo::nitro::rive::HybridFallbackFontSpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridFallbackFontSpec::loadHybridMethods(HybridFallbackFontSpec *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(*(long *)this + -0x20);
  margelo::nitro::HybridObject::loadHybridMethods();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_00284cfc(this + lVar3 + *(long *)(*(long *)(this + lVar3) + -0x20) + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00284fb4  FUN_00284fb4 =====

void FUN_00284fb4(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 8));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00285010  FUN_00285010 =====

void FUN_00285010(NativeState *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(param_1 + 8));
  facebook::jsi::NativeState::~NativeState(param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00285074  FUN_00285074 =====

void FUN_00285074(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 8));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    facebook::jsi::NativeState::~NativeState(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002850d8  FUN_002850d8 =====

void FUN_002850d8(long *param_1)

{
  NativeState *this;
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this = (NativeState *)((long)param_1 + *(long *)(*param_1 + -0x28));
  margelo::nitro::HybridObject::~HybridObject((HybridObject *)(this + 8));
  facebook::jsi::NativeState::~NativeState(this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00285144  margelo::nitro::rive::HybridRiveFontConfigSpec::loadHybridMethods =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* margelo::nitro::rive::HybridRiveFontConfigSpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridRiveFontConfigSpec::loadHybridMethods(HybridRiveFontConfigSpec *this)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  basic_string *pbVar5;
  runtime_error *prVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  long *plVar10;
  basic_string local_1a0;
  undefined7 uStack_19f;
  char cStack_198;
  undefined7 uStack_197;
  char cStack_190;
  undefined2 uStack_18f;
  undefined5 uStack_18d;
  basic_string local_188;
  undefined7 uStack_187;
  char cStack_180;
  undefined7 uStack_17f;
  char cStack_178;
  undefined4 uStack_177;
  undefined1 uStack_173;
  undefined2 uStack_172;
  byte local_170;
  char local_16f [6];
  char acStack_169 [2];
  char acStack_167 [6];
  undefined1 local_161;
  void *local_160;
  basic_string local_158;
  undefined7 uStack_157;
  char cStack_150;
  undefined7 uStack_14f;
  char cStack_148;
  undefined2 uStack_147;
  undefined5 uStack_145;
  byte local_140;
  char local_13f [8];
  undefined7 uStack_137;
  char cStack_130;
  undefined4 uStack_12f;
  undefined1 uStack_12b;
  undefined2 uStack_12a;
  basic_string local_128;
  char acStack_127 [7];
  char cStack_120;
  char acStack_11f [7];
  undefined1 local_118;
  undefined7 uStack_117;
  undefined *local_110;
  ulong uStack_108;
  char *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  basic_string local_e0;
  undefined7 uStack_df;
  char cStack_d8;
  undefined7 uStack_d7;
  char local_d0;
  undefined2 uStack_cf;
  undefined1 uStack_cd;
  undefined4 uStack_cc;
  basic_string *local_c0;
  undefined8 local_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  void *local_98;
  basic_string local_90;
  undefined7 uStack_8f;
  char cStack_88;
  undefined7 uStack_87;
  char cStack_80;
  undefined2 uStack_7f;
  undefined1 uStack_7d;
  undefined4 uStack_7c;
  basic_string *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  margelo::nitro::HybridObject::loadHybridMethods();
  lVar7 = *(long *)(*(long *)this + -0x20);
  plVar8 = *(long **)(this + lVar7 + 8);
  if (plVar8 == (long *)0x0) {
    local_90 = (basic_string)0x0;
    uStack_8f = 0;
    cStack_88 = '\0';
    uStack_87 = 0;
    local_110 = PTR_typeinfo_00394c28;
                    /* try { // try from 002851a4 to 002851b3 has its CatchHandler @ 00286228 */
    FUN_00264f84(&local_e0,&local_110,&local_90);
    uVar3 = CONCAT71(uStack_d7,cStack_d8);
    uVar2 = CONCAT71(uStack_df,local_e0);
    plVar8 = *(long **)(this + lVar7 + 0x10);
    local_e0 = (basic_string)0x0;
    uStack_df = 0;
    cStack_d8 = '\0';
    uStack_d7 = 0;
    *(undefined8 *)(this + lVar7 + 0x10) = uVar3;
    *(undefined8 *)(this + lVar7 + 8) = uVar2;
    if ((plVar8 != (long *)0x0) && (lVar4 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar4 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar8 = (long *)CONCAT71(uStack_d7,cStack_d8);
    if ((plVar8 != (long *)0x0) && (lVar4 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar4 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar8 = (long *)CONCAT71(uStack_87,cStack_88);
    if ((plVar8 != (long *)0x0) && (lVar4 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar4 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    plVar8 = *(long **)(this + lVar7 + 8);
  }
  puVar9 = *(undefined **)(*plVar8 + 8);
  plVar10 = plVar8;
  while (puVar9 != PTR_typeinfo_name_00394c20) {
    plVar10 = (long *)plVar10[1];
    if (plVar10 == (long *)0x0) {
      lVar4 = *(long *)(this + lVar7 + 0x10);
      local_e0 = SUB81(plVar8,0);
      uStack_df = (undefined7)((ulong)plVar8 >> 8);
      cStack_d8 = (char)lVar4;
      uStack_d7 = (undefined7)((ulong)lVar4 >> 8);
      if (lVar4 != 0) {
        FUN_00259a00(1,lVar4 + 8);
      }
      local_110 = PTR_typeinfo_00394c28;
                    /* try { // try from 002852c0 to 002852cf has its CatchHandler @ 0028621c */
      FUN_00264f84(&local_90,&local_110,&local_e0);
      uVar3 = CONCAT71(uStack_87,cStack_88);
      uVar2 = CONCAT71(uStack_8f,local_90);
      plVar8 = *(long **)(this + lVar7 + 0x10);
      local_90 = (basic_string)0x0;
      uStack_8f = 0;
      cStack_88 = '\0';
      uStack_87 = 0;
      *(undefined8 *)(this + lVar7 + 0x10) = uVar3;
      *(undefined8 *)(this + lVar7 + 8) = uVar2;
      if ((plVar8 != (long *)0x0) &&
         (lVar4 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar4 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar8 = (long *)CONCAT71(uStack_87,cStack_88);
      if ((plVar8 != (long *)0x0) &&
         (lVar4 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar4 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar8 = (long *)CONCAT71(uStack_d7,cStack_d8);
      if ((plVar8 != (long *)0x0) &&
         (lVar4 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar4 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      plVar10 = *(long **)(this + lVar7 + 8);
      lVar7 = plVar10[6];
      goto joined_r0x00285374;
    }
    puVar9 = *(undefined **)(*plVar10 + 8);
  }
  lVar7 = plVar10[6];
joined_r0x00285374:
  if (((lVar7 == 0) && (plVar10[0xb] == 0)) && (plVar10[0x10] == 0)) {
    local_128 = (basic_string)0x1e;
    local_118 = 0;
    acStack_127 = (char  [7])s_loadFontFromURL_001d5a1d._0_7_;
    cStack_120 = s_loadFontFromURL_001d5a1d[7];
    acStack_11f = (char  [7])s_loadFontFromURL_001d5a1d._8_7_;
    lVar7 = FUN_002632b8(plVar10[8],plVar10[9],&local_128);
    if ((lVar7 != 0) || (lVar7 = FUN_002632b8(plVar10[0xd],plVar10[0xe],&local_128), lVar7 != 0)) {
      prVar6 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00285c98 to 00285cab has its CatchHandler @ 00286540 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_128);
                    /* try { // try from 00285cac to 00285cbf has its CatchHandler @ 002864d0 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 00285cc4 to 00285cfb has its CatchHandler @ 002864ac */
      std::runtime_error::runtime_error(prVar6,&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar6,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00286578;
    }
    plVar8 = plVar10 + 3;
    lVar7 = FUN_002632b8(*plVar8,plVar10[4],&local_128);
    if (lVar7 != 0) {
      prVar6 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00285e68 to 00285e7b has its CatchHandler @ 002864a8 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_128);
                    /* try { // try from 00285e7c to 00285e8f has its CatchHandler @ 002863e4 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 00285e94 to 00285ecb has its CatchHandler @ 002863b8 */
      std::runtime_error::runtime_error(prVar6,&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar6,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00286578;
    }
    uStack_108 = CONCAT71(acStack_11f,cStack_120);
    local_110 = (undefined *)CONCAT71(acStack_127,local_128);
    local_100 = (char *)CONCAT71(uStack_117,local_118);
    local_e8 = 0;
    uStack_f0 = _UNK_001d81a8;
    local_f8 = _DAT_001d81a0;
                    /* try { // try from 00285408 to 0028540f has its CatchHandler @ 00286310 */
    local_70 = (basic_string *)operator_new(0x38);
    *(undefined ***)local_70 = &PTR_FUN_0037d910;
    if (((ulong)local_110 & 1) == 0) {
      *(ulong *)(local_70 + 0x10) = uStack_108;
      *(undefined **)(local_70 + 8) = local_110;
      *(char **)(local_70 + 0x18) = local_100;
    }
    else {
                    /* try { // try from 00285440 to 00285443 has its CatchHandler @ 0028620c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (local_70 + 8),local_100,uStack_108);
    }
    *(undefined8 *)(local_70 + 0x28) = uStack_f0;
    *(undefined8 *)(local_70 + 0x20) = local_f8;
    *(undefined4 *)(local_70 + 0x30) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_00285480:
      lVar7 = -0x40;
      local_c0 = local_70;
LAB_00285490:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar7) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (basic_string *)0x0) {
        lVar7 = -0x90;
        goto LAB_00285490;
      }
      if (local_70 != &local_90) goto LAB_00285480;
      local_c0 = &local_e0;
                    /* try { // try from 00285c1c to 00285c27 has its CatchHandler @ 00286028 */
      (**(code **)(CONCAT71(uStack_8f,local_90) + 0x18))(&local_90,&local_e0);
    }
    local_b0 = 1;
    if (((byte)local_128 & 1) == 0) {
      uStack_a0 = CONCAT71(acStack_11f,cStack_120);
      local_a8 = CONCAT71(acStack_127,local_128);
      local_98 = (void *)CONCAT71(uStack_117,local_118);
    }
    else {
                    /* try { // try from 002854c4 to 002854cb has its CatchHandler @ 002861a0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)CONCAT71(uStack_117,local_118),CONCAT71(acStack_11f,cStack_120));
    }
    if (local_70 == &local_90) {
      lVar7 = 4;
      pbVar5 = &local_90;
LAB_002854f0:
      (**(code **)(*(long *)pbVar5 + lVar7 * 8))();
    }
    else if (local_70 != (basic_string *)0x0) {
      lVar7 = 5;
      pbVar5 = local_70;
      goto LAB_002854f0;
    }
                    /* try { // try from 002854fc to 0028550f has its CatchHandler @ 00286300 */
    FUN_002634d4(plVar8,&local_128,&local_128,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar7 = 4;
      pbVar5 = &local_e0;
LAB_00285544:
      (**(code **)(*(long *)pbVar5 + lVar7 * 8))();
    }
    else if (local_c0 != (basic_string *)0x0) {
      lVar7 = 5;
      pbVar5 = local_c0;
      goto LAB_00285544;
    }
    if (((byte)local_128 & 1) != 0) {
      operator_delete((void *)CONCAT71(uStack_117,local_118));
    }
    local_140 = 0x28;
    uStack_12f = 0x65637275;
    uStack_137 = (undefined7)s_loadFontFromResource_001d7982._8_8_;
    cStack_130 = SUB81(s_loadFontFromResource_001d7982._8_8_,7);
    local_13f[0] = s_loadFontFromResource_001d7982[0];
    local_13f[1] = s_loadFontFromResource_001d7982[1];
    local_13f[2] = s_loadFontFromResource_001d7982[2];
    local_13f[3] = s_loadFontFromResource_001d7982[3];
    local_13f[4] = s_loadFontFromResource_001d7982[4];
    local_13f[5] = s_loadFontFromResource_001d7982[5];
    local_13f[6] = s_loadFontFromResource_001d7982[6];
    local_13f[7] = s_loadFontFromResource_001d7982[7];
    uStack_12b = 0;
                    /* try { // try from 00285588 to 0028559b has its CatchHandler @ 002862ec */
    FUN_0028657c(plVar10,&local_140,0x18,1);
    if ((local_140 & 1) != 0) {
      operator_delete((void *)CONCAT26(uStack_12a,
                                       CONCAT15(uStack_12b,CONCAT41(uStack_12f,cStack_130))));
    }
    local_158 = (basic_string)0x22;
    uStack_147 = 0x73;
    uStack_14f = (undefined7)s_loadFontFromBytes_001d6397._8_8_;
    cStack_148 = SUB81(s_loadFontFromBytes_001d6397._8_8_,7);
    uStack_157 = (undefined7)s_loadFontFromBytes_001d6397._0_8_;
    cStack_150 = SUB81(s_loadFontFromBytes_001d6397._0_8_,7);
    lVar7 = FUN_002632b8(plVar10[8],plVar10[9],&local_158);
    if ((lVar7 != 0) || (lVar7 = FUN_002632b8(plVar10[0xd],plVar10[0xe],&local_158), lVar7 != 0)) {
      prVar6 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00285d0c to 00285d1f has its CatchHandler @ 00286520 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_158);
                    /* try { // try from 00285d20 to 00285d33 has its CatchHandler @ 00286490 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 00285d38 to 00285d6f has its CatchHandler @ 0028646c */
      std::runtime_error::runtime_error(prVar6,&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar6,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00286578;
    }
    lVar7 = FUN_002632b8(plVar10[3],plVar10[4],&local_158);
    if (lVar7 != 0) {
      prVar6 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00285ed8 to 00285eeb has its CatchHandler @ 00286468 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_158);
                    /* try { // try from 00285eec to 00285eff has its CatchHandler @ 002863b4 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 00285f04 to 00285f3b has its CatchHandler @ 00286388 */
      std::runtime_error::runtime_error(prVar6,&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar6,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00286578;
    }
    uStack_108 = CONCAT71(uStack_14f,cStack_150);
    local_110 = (undefined *)CONCAT71(uStack_157,local_158);
    local_100 = (char *)CONCAT53(uStack_145,CONCAT21(uStack_147,cStack_148));
    local_e8 = 0;
    uStack_f0 = _UNK_001d7f68;
    local_f8 = _DAT_001d7f60;
                    /* try { // try from 0028561c to 00285623 has its CatchHandler @ 002862d4 */
    pbVar5 = (basic_string *)operator_new(0x38);
    *(undefined ***)pbVar5 = &PTR_FUN_0037dca0;
    if (((ulong)local_110 & 1) == 0) {
      *(ulong *)(pbVar5 + 0x10) = uStack_108;
      *(undefined **)(pbVar5 + 8) = local_110;
      *(char **)(pbVar5 + 0x18) = local_100;
    }
    else {
                    /* try { // try from 00285654 to 00285657 has its CatchHandler @ 00286190 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pbVar5 + 8),local_100,uStack_108);
    }
    local_70 = pbVar5;
    *(undefined8 *)(pbVar5 + 0x28) = uStack_f0;
    *(undefined8 *)(pbVar5 + 0x20) = local_f8;
    *(undefined4 *)(pbVar5 + 0x30) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_00285694:
      lVar7 = -0x40;
      local_c0 = local_70;
LAB_002856a4:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar7) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (basic_string *)0x0) {
        lVar7 = -0x90;
        goto LAB_002856a4;
      }
      if (local_70 != &local_90) goto LAB_00285694;
      local_c0 = &local_e0;
                    /* try { // try from 00285c3c to 00285c47 has its CatchHandler @ 00286024 */
      (**(code **)(CONCAT71(uStack_8f,local_90) + 0x18))(&local_90,&local_e0);
    }
    local_b0 = 1;
    if (((byte)local_158 & 1) == 0) {
      uStack_a0 = CONCAT71(uStack_14f,cStack_150);
      local_a8 = CONCAT71(uStack_157,local_158);
      local_98 = (void *)CONCAT53(uStack_145,CONCAT21(uStack_147,cStack_148));
    }
    else {
                    /* try { // try from 002856d8 to 002856df has its CatchHandler @ 00286124 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)CONCAT53(uStack_145,CONCAT21(uStack_147,cStack_148)),
                 CONCAT71(uStack_14f,cStack_150));
    }
    if (local_70 == &local_90) {
      lVar7 = 4;
      pbVar5 = &local_90;
LAB_00285704:
      (**(code **)(*(long *)pbVar5 + lVar7 * 8))();
    }
    else if (local_70 != (basic_string *)0x0) {
      lVar7 = 5;
      pbVar5 = local_70;
      goto LAB_00285704;
    }
                    /* try { // try from 00285710 to 00285723 has its CatchHandler @ 002862c4 */
    FUN_002634d4(plVar8,&local_158,&local_158,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar7 = 4;
      pbVar5 = &local_e0;
LAB_00285758:
      (**(code **)(*(long *)pbVar5 + lVar7 * 8))();
    }
    else if (local_c0 != (basic_string *)0x0) {
      lVar7 = 5;
      pbVar5 = local_c0;
      goto LAB_00285758;
    }
    if (((byte)local_158 & 1) != 0) {
      operator_delete((void *)CONCAT53(uStack_145,CONCAT21(uStack_147,cStack_148)));
    }
    local_170 = 0x1c;
    local_161 = 0;
    local_16f[0] = s_loadFontByName_001d4ec7[0];
    local_16f[1] = s_loadFontByName_001d4ec7[1];
    local_16f[2] = s_loadFontByName_001d4ec7[2];
    local_16f[3] = s_loadFontByName_001d4ec7[3];
    local_16f[4] = s_loadFontByName_001d4ec7[4];
    local_16f[5] = s_loadFontByName_001d4ec7[5];
    acStack_169[0] = s_loadFontByName_001d4ec7[6];
    acStack_169[1] = s_loadFontByName_001d4ec7[7];
    acStack_167[0] = s_loadFontByName_001d4ec7[8];
    acStack_167[1] = s_loadFontByName_001d4ec7[9];
    acStack_167[2] = s_loadFontByName_001d4ec7[10];
    acStack_167[3] = s_loadFontByName_001d4ec7[0xb];
    acStack_167[4] = s_loadFontByName_001d4ec7[0xc];
    acStack_167[5] = s_loadFontByName_001d4ec7[0xd];
                    /* try { // try from 00285798 to 002857ab has its CatchHandler @ 002862b0 */
    FUN_0028657c(plVar10,&local_170,0x28,1);
    if ((local_170 & 1) != 0) {
      operator_delete(local_160);
    }
    local_188 = (basic_string)0x28;
    uStack_177 = 0x746e6f46;
    uStack_17f = (undefined7)s_getSystemDefaultFont_001d6faf._8_8_;
    cStack_178 = SUB81(s_getSystemDefaultFont_001d6faf._8_8_,7);
    uStack_187 = (undefined7)s_getSystemDefaultFont_001d6faf._0_8_;
    cStack_180 = SUB81(s_getSystemDefaultFont_001d6faf._0_8_,7);
    uStack_173 = 0;
    lVar7 = FUN_002632b8(plVar10[8],plVar10[9],&local_188);
    if ((lVar7 != 0) || (lVar7 = FUN_002632b8(plVar10[0xd],plVar10[0xe],&local_188), lVar7 != 0)) {
      prVar6 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00285d80 to 00285d93 has its CatchHandler @ 00286504 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_188);
                    /* try { // try from 00285d94 to 00285da7 has its CatchHandler @ 00286450 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 00285dac to 00285de3 has its CatchHandler @ 0028642c */
      std::runtime_error::runtime_error(prVar6,&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar6,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00286578;
    }
    lVar7 = FUN_002632b8(plVar10[3],plVar10[4],&local_188);
    if (lVar7 != 0) {
      prVar6 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00285f48 to 00285f5b has its CatchHandler @ 00286428 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_188);
                    /* try { // try from 00285f5c to 00285f6f has its CatchHandler @ 00286384 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 00285f74 to 00285fab has its CatchHandler @ 00286358 */
      std::runtime_error::runtime_error(prVar6,&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar6,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00286578;
    }
    uStack_108 = CONCAT71(uStack_17f,cStack_180);
    local_110 = (undefined *)CONCAT71(uStack_187,local_188);
    local_100 = (char *)CONCAT26(uStack_172,CONCAT15(uStack_173,CONCAT41(uStack_177,cStack_178)));
    local_e8 = 0;
    uStack_f0 = _UNK_001d8188;
    local_f8 = _DAT_001d8180;
                    /* try { // try from 00285834 to 0028583b has its CatchHandler @ 00286298 */
    pbVar5 = (basic_string *)operator_new(0x38);
    *(undefined ***)pbVar5 = &PTR_FUN_0037dd20;
    if (((ulong)local_110 & 1) == 0) {
      *(ulong *)(pbVar5 + 0x10) = uStack_108;
      *(undefined **)(pbVar5 + 8) = local_110;
      *(char **)(pbVar5 + 0x18) = local_100;
    }
    else {
                    /* try { // try from 0028586c to 0028586f has its CatchHandler @ 00286114 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pbVar5 + 8),local_100,uStack_108);
    }
    local_70 = pbVar5;
    *(undefined8 *)(pbVar5 + 0x28) = uStack_f0;
    *(undefined8 *)(pbVar5 + 0x20) = local_f8;
    *(undefined4 *)(pbVar5 + 0x30) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_002858ac:
      lVar7 = -0x40;
      local_c0 = local_70;
LAB_002858bc:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar7) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (basic_string *)0x0) {
        lVar7 = -0x90;
        goto LAB_002858bc;
      }
      if (local_70 != &local_90) goto LAB_002858ac;
      local_c0 = &local_e0;
                    /* try { // try from 00285c5c to 00285c67 has its CatchHandler @ 00286020 */
      (**(code **)(CONCAT71(uStack_8f,local_90) + 0x18))(&local_90,&local_e0);
    }
    local_b0 = 0;
    if (((byte)local_188 & 1) == 0) {
      uStack_a0 = CONCAT71(uStack_17f,cStack_180);
      local_a8 = CONCAT71(uStack_187,local_188);
      local_98 = (void *)CONCAT26(uStack_172,CONCAT15(uStack_173,CONCAT41(uStack_177,cStack_178)));
    }
    else {
                    /* try { // try from 002858ec to 002858f3 has its CatchHandler @ 002860a8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,
                 (char *)CONCAT26(uStack_172,CONCAT15(uStack_173,CONCAT41(uStack_177,cStack_178))),
                 CONCAT71(uStack_17f,cStack_180));
    }
    if (local_70 == &local_90) {
      lVar7 = 4;
      pbVar5 = &local_90;
LAB_00285918:
      (**(code **)(*(long *)pbVar5 + lVar7 * 8))();
    }
    else if (local_70 != (basic_string *)0x0) {
      lVar7 = 5;
      pbVar5 = local_70;
      goto LAB_00285918;
    }
                    /* try { // try from 00285924 to 00285937 has its CatchHandler @ 00286288 */
    FUN_002634d4(plVar8,&local_188,&local_188,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar7 = 4;
      pbVar5 = &local_e0;
LAB_0028596c:
      (**(code **)(*(long *)pbVar5 + lVar7 * 8))();
    }
    else if (local_c0 != (basic_string *)0x0) {
      lVar7 = 5;
      pbVar5 = local_c0;
      goto LAB_0028596c;
    }
    if (((byte)local_188 & 1) != 0) {
      operator_delete((void *)CONCAT26(uStack_172,
                                       CONCAT15(uStack_173,CONCAT41(uStack_177,cStack_178))));
    }
    local_1a0 = (basic_string)0x22;
    uStack_18f = 0x74;
    uStack_197 = (undefined7)s_setFontsForWeight_001d51e2._8_8_;
    cStack_190 = SUB81(s_setFontsForWeight_001d51e2._8_8_,7);
    uStack_19f = (undefined7)s_setFontsForWeight_001d51e2._0_8_;
    cStack_198 = SUB81(s_setFontsForWeight_001d51e2._0_8_,7);
    lVar7 = FUN_002632b8(plVar10[8],plVar10[9],&local_1a0);
    if ((lVar7 != 0) || (lVar7 = FUN_002632b8(plVar10[0xd],plVar10[0xe],&local_1a0), lVar7 != 0)) {
      prVar6 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00285df4 to 00285e07 has its CatchHandler @ 002864e8 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1a0);
                    /* try { // try from 00285e08 to 00285e1b has its CatchHandler @ 00286410 */
      FUN_00263450(&local_e0,&local_90,"\" - a property with that name already exists!");
                    /* try { // try from 00285e20 to 00285e57 has its CatchHandler @ 002863ec */
      std::runtime_error::runtime_error(prVar6,&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar6,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00286578;
    }
    lVar7 = FUN_002632b8(plVar10[3],plVar10[4],&local_1a0);
    if (lVar7 != 0) {
      prVar6 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00285fb8 to 00285fcb has its CatchHandler @ 002863e8 */
      std::__ndk1::operator+("Cannot add Hybrid Method \"",&local_1a0);
                    /* try { // try from 00285fcc to 00285fdf has its CatchHandler @ 00286354 */
      FUN_00263450(&local_e0,&local_90,"\" - a method with that name already exists!");
                    /* try { // try from 00285fe4 to 0028601b has its CatchHandler @ 00286328 */
      std::runtime_error::runtime_error(prVar6,&local_e0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(prVar6,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_00286578;
    }
    uStack_108 = CONCAT71(uStack_197,cStack_198);
    local_110 = (undefined *)CONCAT71(uStack_19f,local_1a0);
    local_100 = (char *)CONCAT53(uStack_18d,CONCAT21(uStack_18f,cStack_190));
    local_e8 = 0;
    uStack_f0 = _UNK_001d7f48;
    local_f8 = _DAT_001d7f40;
                    /* try { // try from 002859f8 to 002859ff has its CatchHandler @ 00286270 */
    pbVar5 = (basic_string *)operator_new(0x38);
    *(undefined ***)pbVar5 = &PTR_FUN_0037dda0;
    if (((ulong)local_110 & 1) == 0) {
      *(ulong *)(pbVar5 + 0x10) = uStack_108;
      *(undefined **)(pbVar5 + 8) = local_110;
      *(char **)(pbVar5 + 0x18) = local_100;
    }
    else {
                    /* try { // try from 00285a30 to 00285a33 has its CatchHandler @ 00286098 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pbVar5 + 8),local_100,uStack_108);
    }
    local_70 = pbVar5;
    *(undefined8 *)(pbVar5 + 0x28) = uStack_f0;
    *(undefined8 *)(pbVar5 + 0x20) = local_f8;
    *(undefined4 *)(pbVar5 + 0x30) = local_e8;
    if (((byte)local_110 & 1) == 0) {
LAB_00285a70:
      lVar7 = -0x40;
      local_c0 = local_70;
LAB_00285a80:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar7) = 0;
    }
    else {
      operator_delete(local_100);
      if (local_70 == (basic_string *)0x0) {
        lVar7 = -0x90;
        goto LAB_00285a80;
      }
      if (local_70 != &local_90) goto LAB_00285a70;
      local_c0 = &local_e0;
                    /* try { // try from 00285c7c to 00285c87 has its CatchHandler @ 0028601c */
      (**(code **)(CONCAT71(uStack_8f,local_90) + 0x18))(&local_90,&local_e0);
    }
    local_b0 = 2;
    if (((byte)local_1a0 & 1) == 0) {
      uStack_a0 = CONCAT71(uStack_197,cStack_198);
      local_a8 = CONCAT71(uStack_19f,local_1a0);
      local_98 = (void *)CONCAT53(uStack_18d,CONCAT21(uStack_18f,cStack_190));
    }
    else {
                    /* try { // try from 00285ab4 to 00285abb has its CatchHandler @ 0028602c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,(char *)CONCAT53(uStack_18d,CONCAT21(uStack_18f,cStack_190)),
                 CONCAT71(uStack_197,cStack_198));
    }
    if (local_70 == &local_90) {
      lVar7 = 4;
      pbVar5 = &local_90;
LAB_00285ae0:
      (**(code **)(*(long *)pbVar5 + lVar7 * 8))();
    }
    else if (local_70 != (basic_string *)0x0) {
      lVar7 = 5;
      pbVar5 = local_70;
      goto LAB_00285ae0;
    }
                    /* try { // try from 00285aec to 00285aff has its CatchHandler @ 00286260 */
    FUN_002634d4(plVar8,&local_1a0,&local_1a0,&local_e0);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_c0 == &local_e0) {
      lVar7 = 4;
      pbVar5 = &local_e0;
LAB_00285b34:
      (**(code **)(*(long *)pbVar5 + lVar7 * 8))();
    }
    else if (local_c0 != (basic_string *)0x0) {
      lVar7 = 5;
      pbVar5 = local_c0;
      goto LAB_00285b34;
    }
    if (((byte)local_1a0 & 1) != 0) {
      operator_delete((void *)CONCAT53(uStack_18d,CONCAT21(uStack_18f,cStack_190)));
    }
    local_e0 = (basic_string)0x24;
    uStack_cf = 0x7374;
    uStack_d7 = (undefined7)s_applyFallbackFonts_001d69f0._8_8_;
    local_d0 = SUB81(s_applyFallbackFonts_001d69f0._8_8_,7);
    uStack_df = (undefined7)s_applyFallbackFonts_001d69f0._0_8_;
    cStack_d8 = SUB81(s_applyFallbackFonts_001d69f0._0_8_,7);
    uStack_cd = 0;
                    /* try { // try from 00285b74 to 00285b87 has its CatchHandler @ 0028624c */
    FUN_002869cc(plVar10,&local_e0,0x40,1);
    if (((byte)local_e0 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_cc,CONCAT13(uStack_cd,CONCAT21(uStack_cf,local_d0))));
    }
    local_90 = (basic_string)0x24;
    uStack_7f = 0x7374;
    uStack_87 = (undefined7)s_clearFallbackFonts_001d51f4._8_8_;
    cStack_80 = SUB81(s_clearFallbackFonts_001d51f4._8_8_,7);
    uStack_8f = (undefined7)s_clearFallbackFonts_001d51f4._0_8_;
    cStack_88 = SUB81(s_clearFallbackFonts_001d51f4._0_8_,7);
    uStack_7d = 0;
                    /* try { // try from 00285bbc to 00285bcf has its CatchHandler @ 00286238 */
    FUN_002869cc(plVar10,&local_90,0x48,1);
    if (((byte)local_90 & 1) != 0) {
      operator_delete((void *)CONCAT44(uStack_7c,CONCAT13(uStack_7d,CONCAT21(uStack_7f,cStack_80))))
      ;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_00286578:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028657c  FUN_0028657c =====

void FUN_0028657c(long param_1,basic_string *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  basic_string *pbVar3;
  runtime_error *prVar4;
  ulong local_100;
  ulong uStack_f8;
  char *local_f0;
  long local_e8;
  long lStack_e0;
  undefined4 local_d8;
  basic_string local_d0 [32];
  basic_string *local_b0;
  undefined8 local_a0;
  ulong local_98;
  undefined8 uStack_90;
  void *local_88;
  long local_80 [4];
  basic_string *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_002632b8(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),param_2);
  if ((lVar2 != 0) ||
     (lVar2 = FUN_002632b8(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),param_2),
     lVar2 != 0)) {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 002867b4 to 002867c7 has its CatchHandler @ 002869a4 */
    std::__ndk1::operator+("Cannot add Hybrid Method \"",param_2);
                    /* try { // try from 002867c8 to 002867db has its CatchHandler @ 0028698c */
    FUN_00263450(local_d0,local_80,"\" - a property with that name already exists!");
                    /* try { // try from 002867e0 to 00286817 has its CatchHandler @ 00286968 */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_002869c8;
  }
  lVar2 = FUN_002632b8(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),param_2);
  if (lVar2 != 0) {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00286828 to 0028683b has its CatchHandler @ 00286964 */
    std::__ndk1::operator+("Cannot add Hybrid Method \"",param_2);
                    /* try { // try from 0028683c to 0028684f has its CatchHandler @ 00286960 */
    FUN_00263450(local_d0,local_80,"\" - a method with that name already exists!");
                    /* try { // try from 00286854 to 0028688b has its CatchHandler @ 00286934 */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_002869c8;
  }
  if (((byte)*param_2 & 1) == 0) {
    uStack_f8 = *(ulong *)(param_2 + 8);
    local_100 = *(ulong *)param_2;
    local_f0 = *(char **)(param_2 + 0x10);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_100,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  local_d8 = 0;
  local_e8 = param_3;
  lStack_e0 = param_4;
                    /* try { // try from 00286618 to 0028661f has its CatchHandler @ 0028691c */
  local_60 = (basic_string *)operator_new(0x38);
  *(undefined ***)local_60 = &PTR_FUN_0037dc20;
  if ((local_100 & 1) == 0) {
    *(ulong *)(local_60 + 0x10) = uStack_f8;
    *(ulong *)(local_60 + 8) = local_100;
    *(char **)(local_60 + 0x18) = local_f0;
  }
  else {
                    /* try { // try from 00286650 to 00286653 has its CatchHandler @ 002868fc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (local_60 + 8),local_f0,uStack_f8);
  }
  *(long *)(local_60 + 0x28) = lStack_e0;
  *(long *)(local_60 + 0x20) = local_e8;
  *(undefined4 *)(local_60 + 0x30) = local_d8;
  if (((byte)local_100._0_1_ & 1) == 0) {
LAB_00286690:
    pbVar3 = (basic_string *)local_80;
    local_b0 = local_60;
LAB_002866a0:
    *(long *)(pbVar3 + 0x20) = 0;
  }
  else {
    operator_delete(local_f0);
    if (local_60 == (basic_string *)0x0) {
      pbVar3 = local_d0;
      goto LAB_002866a0;
    }
    if (local_60 != (basic_string *)local_80) goto LAB_00286690;
    local_b0 = local_d0;
                    /* try { // try from 00286798 to 002867a3 has its CatchHandler @ 0028688c */
    (**(code **)(local_80[0] + 0x18))(local_80,local_d0);
  }
  local_a0 = 1;
  if (((byte)*param_2 & 1) == 0) {
    uStack_90 = *(undefined8 *)(param_2 + 8);
    local_98 = *(ulong *)param_2;
    local_88 = *(void **)(param_2 + 0x10);
  }
  else {
                    /* try { // try from 002866d4 to 002866db has its CatchHandler @ 00286890 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_98,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  if (local_60 == (basic_string *)local_80) {
    lVar2 = 4;
    pbVar3 = (basic_string *)local_80;
LAB_00286700:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_60 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_60;
    goto LAB_00286700;
  }
                    /* try { // try from 0028670c to 0028671f has its CatchHandler @ 0028690c */
  FUN_002634d4((undefined8 *)(param_1 + 0x18),param_2,param_2,local_d0);
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (local_b0 == local_d0) {
    lVar2 = 4;
    pbVar3 = local_d0;
LAB_00286754:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_b0 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_b0;
    goto LAB_00286754;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_002869c8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002869cc  FUN_002869cc =====

void FUN_002869cc(long param_1,basic_string *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  basic_string *pbVar3;
  runtime_error *prVar4;
  ulong local_100;
  ulong uStack_f8;
  char *local_f0;
  long local_e8;
  long lStack_e0;
  undefined4 local_d8;
  basic_string local_d0 [32];
  basic_string *local_b0;
  undefined8 local_a0;
  ulong local_98;
  undefined8 uStack_90;
  void *local_88;
  long local_80 [4];
  basic_string *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_002632b8(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),param_2);
  if ((lVar2 != 0) ||
     (lVar2 = FUN_002632b8(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),param_2),
     lVar2 != 0)) {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00286c00 to 00286c13 has its CatchHandler @ 00286df0 */
    std::__ndk1::operator+("Cannot add Hybrid Method \"",param_2);
                    /* try { // try from 00286c14 to 00286c27 has its CatchHandler @ 00286dd8 */
    FUN_00263450(local_d0,local_80,"\" - a property with that name already exists!");
                    /* try { // try from 00286c2c to 00286c63 has its CatchHandler @ 00286db4 */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_00286e14;
  }
  lVar2 = FUN_002632b8(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),param_2);
  if (lVar2 != 0) {
    prVar4 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00286c74 to 00286c87 has its CatchHandler @ 00286db0 */
    std::__ndk1::operator+("Cannot add Hybrid Method \"",param_2);
                    /* try { // try from 00286c88 to 00286c9b has its CatchHandler @ 00286dac */
    FUN_00263450(local_d0,local_80,"\" - a method with that name already exists!");
                    /* try { // try from 00286ca0 to 00286cd7 has its CatchHandler @ 00286d80 */
    std::runtime_error::runtime_error(prVar4,local_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar4,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
    goto LAB_00286e14;
  }
  if (((byte)*param_2 & 1) == 0) {
    uStack_f8 = *(ulong *)(param_2 + 8);
    local_100 = *(ulong *)param_2;
    local_f0 = *(char **)(param_2 + 0x10);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_100,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  local_d8 = 0;
  local_e8 = param_3;
  lStack_e0 = param_4;
                    /* try { // try from 00286a68 to 00286a6f has its CatchHandler @ 00286d68 */
  local_60 = (basic_string *)operator_new(0x38);
  *(undefined ***)local_60 = &PTR_FUN_0037de20;
  if ((local_100 & 1) == 0) {
    *(ulong *)(local_60 + 0x10) = uStack_f8;
    *(ulong *)(local_60 + 8) = local_100;
    *(char **)(local_60 + 0x18) = local_f0;
  }
  else {
                    /* try { // try from 00286aa0 to 00286aa3 has its CatchHandler @ 00286d48 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (local_60 + 8),local_f0,uStack_f8);
  }
  *(long *)(local_60 + 0x28) = lStack_e0;
  *(long *)(local_60 + 0x20) = local_e8;
  *(undefined4 *)(local_60 + 0x30) = local_d8;
  if (((byte)local_100._0_1_ & 1) == 0) {
LAB_00286ae0:
    pbVar3 = (basic_string *)local_80;
    local_b0 = local_60;
LAB_00286af0:
    *(long *)(pbVar3 + 0x20) = 0;
  }
  else {
    operator_delete(local_f0);
    if (local_60 == (basic_string *)0x0) {
      pbVar3 = local_d0;
      goto LAB_00286af0;
    }
    if (local_60 != (basic_string *)local_80) goto LAB_00286ae0;
    local_b0 = local_d0;
                    /* try { // try from 00286be4 to 00286bef has its CatchHandler @ 00286cd8 */
    (**(code **)(local_80[0] + 0x18))(local_80,local_d0);
  }
  local_a0 = 0;
  if (((byte)*param_2 & 1) == 0) {
    uStack_90 = *(undefined8 *)(param_2 + 8);
    local_98 = *(ulong *)param_2;
    local_88 = *(void **)(param_2 + 0x10);
  }
  else {
                    /* try { // try from 00286b20 to 00286b27 has its CatchHandler @ 00286cdc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_98,*(char **)(param_2 + 0x10),*(ulong *)(param_2 + 8));
  }
  if (local_60 == (basic_string *)local_80) {
    lVar2 = 4;
    pbVar3 = (basic_string *)local_80;
LAB_00286b4c:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_60 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_60;
    goto LAB_00286b4c;
  }
                    /* try { // try from 00286b58 to 00286b6b has its CatchHandler @ 00286d58 */
  FUN_002634d4((undefined8 *)(param_1 + 0x18),param_2,param_2,local_d0);
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (local_b0 == local_d0) {
    lVar2 = 4;
    pbVar3 = local_d0;
LAB_00286ba0:
    (**(code **)(*(long *)pbVar3 + lVar2 * 8))();
  }
  else if (local_b0 != (basic_string *)0x0) {
    lVar2 = 5;
    pbVar3 = local_b0;
    goto LAB_00286ba0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00286e14:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00286e18  FUN_00286e18 =====

void FUN_00286e18(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037de20;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete((void *)param_1[3]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00286e84  FUN_00286e84 =====

void FUN_00286e84(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037de20;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00286eec  FUN_00286eec =====

undefined8 * FUN_00286eec(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x38);
  bVar2 = *(byte *)(param_1 + 8);
  *puVar4 = &PTR_FUN_0037de20;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 00286f4c to 00286f4f has its CatchHandler @ 00286f88 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar4 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    puVar4[5] = *(undefined8 *)(param_1 + 0x28);
    puVar4[4] = uVar6;
    *(undefined4 *)(puVar4 + 6) = uVar1;
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00286fb0  FUN_00286fb0 =====

void FUN_00286fb0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037de20;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar4;
    param_2[1] = uVar3;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x30);
    param_2[5] = uVar4;
    param_2[4] = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00287048  FUN_00287048 =====

void FUN_00287048(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002870a8  FUN_002870a8 =====

void FUN_002870a8(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00287104  FUN_00287104 =====

void FUN_00287104(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  JSError *pJVar6;
  long *plVar7;
  ulong uVar8;
  code *pcVar9;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [8];
  long *local_108;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  long local_80;
  long *plStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar8 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 00287160 to 0028716f has its CatchHandler @ 00287710 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar4 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00394c28,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x002871e8;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x002871e8;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002871e8:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive24HybridRiveFontConfigSpecENSt6__ndk110shared_ptrINS0_7PromiseIvEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394d28
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive24HybridRiveFontConfigSpecENSt6__ndk110shared_ptrINS0_7PromiseIvEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394d28
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive24HybridRiveFontConfigSpecENSt6__ndk110shared_ptrINS0_7PromiseIvEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394d20
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive24HybridRiveFontConfigSpecENSt6__ndk110shared_ptrINS0_7PromiseIvEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394d20
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive24HybridRiveFontConfigSpecENSt6__ndk110shared_ptrINS0_7PromiseIvEEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSD_FT0_DpT1_ERNSB_7RuntimeEPKSC_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394d28
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 00287220 to 00287227 has its CatchHandler @ 00287418 */
    (*pcVar9)(auStack_110);
                    /* try { // try from 00287228 to 00287237 has its CatchHandler @ 00287400 */
    FUN_00287ce8(param_1,param_3,auStack_110);
    if ((local_108 != (long *)0x0) &&
       (lVar4 = FUN_00255510(0xffffffffffffffff,local_108 + 1), lVar4 == 0)) {
      (**(code **)(*local_108 + 0x10))(local_108);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if ((plVar7 != (long *)0x0) && (lVar4 = FUN_00255510(0xffffffffffffffff,plVar7 + 1), lVar4 == 0)
       ) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 002872d8 to 002872e7 has its CatchHandler @ 002878ac */
    FUN_00287964(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 002872f4 to 00287307 has its CatchHandler @ 0028788c */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 00287308 to 0028731b has its CatchHandler @ 00287874 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 0028731c to 00287327 has its CatchHandler @ 00287844 */
    std::__ndk1::to_string(0);
                    /* try { // try from 00287328 to 00287337 has its CatchHandler @ 00287820 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 00287338 to 0028734b has its CatchHandler @ 002877fc */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 0028734c to 00287357 has its CatchHandler @ 002877d8 */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 00287358 to 00287367 has its CatchHandler @ 002877b4 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 00287368 to 0028737b has its CatchHandler @ 00287790 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 00287380 to 002873bb has its CatchHandler @ 00287730 */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002878d4  FUN_002878d4 =====

void FUN_002878d4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394d68) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00287924  FUN_00287924 =====

undefined * FUN_00287924(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394d70;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00287964  FUN_00287964 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00287964(undefined8 *param_1,int param_2,byte *param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  void *pvVar4;
  byte *pbVar5;
  long lVar6;
  undefined *puVar7;
  byte bVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong local_a0;
  ulong local_98;
  undefined8 *local_90;
  byte local_88 [8];
  size_t local_80;
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  undefined8 *local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  if (param_4 == 0) {
    local_60 = (undefined8 *)operator_new(0x30);
    puVar7 = PTR_typeinfo_name_00394c20;
    uStack_68 = _UNK_001d7eb8;
    local_70 = _DAT_001d7eb0;
    *(undefined1 *)((long)local_60 + 0x2f) = 0;
    uVar13 = *(undefined8 *)puVar7;
    uVar15 = *(undefined8 *)(puVar7 + 0x18);
    uVar14 = *(undefined8 *)(puVar7 + 0x10);
    uVar12 = *(undefined8 *)(puVar7 + 0x27);
    uVar10 = *(undefined8 *)(puVar7 + 0x1f);
    local_60[1] = *(undefined8 *)(puVar7 + 8);
    *local_60 = uVar13;
    local_60[3] = uVar15;
    local_60[2] = uVar14;
    *(undefined8 *)((long)local_60 + 0x27) = uVar12;
    *(undefined8 *)((long)local_60 + 0x1f) = uVar10;
                    /* try { // try from 002879e8 to 002879f7 has its CatchHandler @ 00287c88 */
    margelo::nitro::TypeInfo::demangleName((basic_string *)&local_70,true);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
  }
  else {
    margelo::nitro::HybridObject::getName();
  }
  bVar8 = local_88[0];
  if (param_2 == 0) {
    sVar3 = (ulong)(local_88[0] >> 1);
    if ((local_88[0] & 1) != 0) {
      sVar3 = local_80;
    }
    uVar1 = sVar3 + 1;
    if (0xffffffffffffffef < uVar1) goto LAB_00287c48;
    if (uVar1 < 0x17) {
      local_98 = 0;
      puVar11 = (undefined8 *)((ulong)&local_a0 | 1);
      local_90 = (undefined8 *)0x0;
      local_a0 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_00287b4c;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 00287b34 to 00287b3b has its CatchHandler @ 00287c9c */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_a0 = uVar2 | 1;
      local_98 = uVar1;
      local_90 = puVar11;
LAB_00287b4c:
      pvVar4 = (void *)((ulong)local_88 | 1);
      if ((bVar8 & 1) != 0) {
        pvVar4 = local_78;
      }
      memmove(puVar11,pvVar4,sVar3);
    }
    *(undefined2 *)((long)puVar11 + sVar3) = 0x2e;
    pbVar5 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar5 = param_3 + 1;
    }
                    /* try { // try from 00287b8c to 00287b93 has its CatchHandler @ 00287c74 */
    puVar9 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_a0,(ulong)pbVar5);
    local_60 = (undefined8 *)puVar9[2];
    uStack_68 = puVar9[1];
    local_70 = *puVar9;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
                    /* try { // try from 00287bac to 00287bbf has its CatchHandler @ 00287c5c */
    puVar11 = (undefined8 *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_70,0x1d6185);
    uVar10 = puVar11[2];
    uVar13 = puVar11[1];
    uVar12 = *puVar11;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    param_1[1] = uVar13;
    *param_1 = uVar12;
    param_1[2] = uVar10;
    puVar11 = local_90;
    uVar1 = local_a0;
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
      puVar11 = local_90;
      uVar1 = local_a0;
    }
  }
  else {
    sVar3 = (ulong)(local_88[0] >> 1);
    if ((local_88[0] & 1) != 0) {
      sVar3 = local_80;
    }
    uVar1 = sVar3 + 1;
    if (0xffffffffffffffef < uVar1) {
      if (*(long *)(lVar6 + 0x28) != local_58) goto LAB_00287ce4;
                    /* try { // try from 00287c44 to 00287c47 has its CatchHandler @ 00287cb8 */
      FUN_00260a84();
LAB_00287c48:
      if (*(long *)(lVar6 + 0x28) == local_58) {
                    /* try { // try from 00287c58 to 00287c5b has its CatchHandler @ 00287c9c */
        uVar10 = FUN_00260a84();
                    /* catch() { ... } // from try @ 00287bac with catch @ 00287c5c */
        if ((local_70 & 1) != 0) {
          operator_delete(local_60);
        }
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
        if ((local_88[0] & 1) != 0) {
          operator_delete(local_78);
        }
        if (*(long *)(lVar6 + 0x28) == local_58) {
          FUN_00255d34(uVar10);
        }
      }
      goto LAB_00287ce4;
    }
    if (uVar1 < 0x17) {
      uStack_68 = 0;
      puVar11 = (undefined8 *)((ulong)&local_70 | 1);
      local_60 = (undefined8 *)0x0;
      local_70 = (ulong)(byte)((int)uVar1 << 1);
      if (sVar3 != 0) goto LAB_00287abc;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 00287aa4 to 00287aab has its CatchHandler @ 00287cb8 */
      puVar11 = (undefined8 *)operator_new(uVar2);
      local_70 = uVar2 | 1;
      uStack_68 = uVar1;
      local_60 = puVar11;
LAB_00287abc:
      pvVar4 = (void *)((ulong)local_88 | 1);
      if ((bVar8 & 1) != 0) {
        pvVar4 = local_78;
      }
      memmove(puVar11,pvVar4,sVar3);
    }
    *(undefined2 *)((long)puVar11 + sVar3) = 0x2e;
    pbVar5 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar5 = param_3 + 1;
    }
                    /* try { // try from 00287afc to 00287b03 has its CatchHandler @ 00287ca0 */
    puVar11 = (undefined8 *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)&local_70,(ulong)pbVar5);
    uVar10 = puVar11[2];
    uVar13 = puVar11[1];
    uVar12 = *puVar11;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    param_1[1] = uVar13;
    *param_1 = uVar12;
    param_1[2] = uVar10;
    puVar11 = local_60;
    uVar1 = local_70;
  }
  if ((uVar1 & 1) != 0) {
    operator_delete(puVar11);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
LAB_00287ce4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00287ce8  FUN_00287ce8 =====

void FUN_00287ce8(undefined8 param_1,Runtime *param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  runtime_error *this;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_b0 [24];
  basic_string abStack_98 [24];
  undefined **local_80;
  long lStack_78;
  long *local_70;
  undefined ***local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(char *)(*param_3 + 0x28) == '\0') {
    lVar6 = *(long *)(*param_3 + 0x30);
    local_80 = (undefined **)0x0;
    std::exception_ptr::~exception_ptr((exception_ptr *)&local_80);
    lVar5 = *param_3;
    if (lVar6 == 0) {
      plVar4 = (long *)param_3[1];
      lStack_78 = lVar5;
      if (plVar4 == (long *)0x0) {
        local_70 = (long *)0x0;
        local_80 = &PTR_FUN_003853d0;
        local_60 = &local_80;
      }
      else {
        FUN_00259a00(1,plVar4 + 1);
        local_80 = &PTR_FUN_003853d0;
        local_70 = plVar4;
        FUN_00259a00(1,plVar4 + 1);
        local_60 = &local_80;
        lVar5 = FUN_00255510(0xffffffffffffffff,plVar4 + 1);
        if (lVar5 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
                    /* try { // try from 00287e3c to 00287e4f has its CatchHandler @ 00287f84 */
      margelo::nitro::CommonGlobals::Promise::callConstructor(param_2,(function *)&local_80);
      if (local_60 == &local_80) {
        lVar5 = 4;
        pppuVar3 = &local_80;
      }
      else {
        if (local_60 == (undefined ***)0x0) goto LAB_00287d2c;
        lVar5 = 5;
        pppuVar3 = local_60;
      }
      (*(code *)(*pppuVar3)[lVar5])();
    }
    else {
      if (*(char *)(lVar5 + 0x28) != '\0') goto LAB_00287d20;
      lVar5 = *(long *)(lVar5 + 0x30);
      local_80 = (undefined **)0x0;
      std::exception_ptr::~exception_ptr((exception_ptr *)&local_80);
      if (lVar5 == 0) {
        FUN_00264e5c(&local_80,*(undefined8 *)(PTR_typeinfo_00394d78 + 8),1);
        this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00287ea4 to 00287eb7 has its CatchHandler @ 00287f54 */
        std::__ndk1::operator+("Promise<",(basic_string *)&local_80);
                    /* try { // try from 00287eb8 to 00287ecb has its CatchHandler @ 00287f3c */
        FUN_00263450(abStack_98,auStack_b0,"> has invalid state!");
                    /* try { // try from 00287ed0 to 00287f07 has its CatchHandler @ 00287f08 */
        std::runtime_error::runtime_error(this,abStack_98);
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
        }
        goto LAB_00287fd0;
      }
      uVar2 = margelo::nitro::Promise<void>::getError();
      FUN_0026aee4(&local_80,param_2,uVar2);
                    /* try { // try from 00287da4 to 00287db3 has its CatchHandler @ 00287f74 */
      margelo::nitro::CommonGlobals::Promise::rejected(param_2,(Value *)&local_80);
      facebook::jsi::Value::~Value((Value *)&local_80);
    }
  }
  else {
LAB_00287d20:
    margelo::nitro::CommonGlobals::Promise::resolved(param_2);
  }
LAB_00287d2c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00287fd0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00287fd4  FUN_00287fd4 =====

void FUN_00287fd4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
     ) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00288060  FUN_00288060 =====

void FUN_00288060(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
     ) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002880ec  FUN_002880ec =====

void FUN_002880ec(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_003853d0;
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00288184  FUN_00288184 =====

void FUN_00288184(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_003853d0;
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00288210  FUN_00288210 =====

void FUN_00288210(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x18);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_003853d0;
  puVar4[1] = uVar1;
  puVar4[2] = lVar2;
  if (lVar2 != 0) {
    FUN_00259a00(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


// ===== 00288288  FUN_00288288 =====

void FUN_00288288(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_003853d0;
  param_2[1] = uVar1;
  param_2[2] = lVar2;
  if (lVar2 != 0) {
    FUN_00259a00(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002882ec  FUN_002882ec =====

void FUN_002882ec(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x10);
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00288378  FUN_00288378 =====

void FUN_00288378(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)((long)param_1 + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002883f8  FUN_002883f8 =====

void FUN_002883f8(undefined4 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long **pplVar6;
  function *pfVar7;
  long lVar8;
  long local_e0 [4];
  long *local_c0 [2];
  long local_b0 [4];
  long *local_90;
  long local_80 [4];
  long *local_60 [3];
  long local_48;
  
  plVar4 = local_e0;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar8 = *param_5;
  FUN_00288784(local_80,param_3,lVar8);
                    /* try { // try from 00288440 to 00288447 has its CatchHandler @ 002886a4 */
  margelo::nitro::Promise<void>::addOnResolvedListener(*(function **)(param_2 + 8));
  if (local_60[0] == local_80) {
    lVar5 = 4;
    plVar3 = local_80;
LAB_00288468:
    (**(code **)(*plVar3 + lVar5 * 8))();
  }
  else if (local_60[0] != (long *)0x0) {
    lVar5 = 5;
    plVar3 = local_60[0];
    goto LAB_00288468;
  }
  FUN_0026c2bc(local_80,param_3,lVar8 + 0x10);
  pfVar7 = *(function **)(param_2 + 8);
  if (local_60[0] == (long *)0x0) {
    pplVar6 = local_c0;
LAB_002884b0:
    *pplVar6 = (long *)0x0;
  }
  else {
    if (local_60[0] != local_80) {
      pplVar6 = local_60;
      local_c0[0] = local_60[0];
      goto LAB_002884b0;
    }
                    /* try { // try from 002884c8 to 002884d3 has its CatchHandler @ 002885fc */
    local_c0[0] = local_e0;
    (**(code **)(local_80[0] + 0x18))(local_80,local_e0);
  }
  plVar3 = local_c0[0];
  local_90 = (long *)0x0;
  if (local_c0[0] != (long *)0x0) {
                    /* try { // try from 002884e0 to 002884e7 has its CatchHandler @ 00288600 */
    plVar2 = (long *)operator_new(0x40);
    *plVar2 = (long)&PTR_FUN_00384d40;
    if (plVar3 == local_e0) {
      plVar2[6] = (long)(plVar2 + 2);
                    /* try { // try from 0028851c to 0028852b has its CatchHandler @ 002885f8 */
      (**(code **)(local_e0[0] + 0x18))(local_e0);
      local_90 = plVar2;
    }
    else {
      plVar2[6] = (long)plVar3;
      local_c0[0] = (long *)0x0;
      local_90 = plVar2;
    }
  }
                    /* try { // try from 00288530 to 0028853f has its CatchHandler @ 00288608 */
  margelo::nitro::Promise<void>::addOnRejectedListener(pfVar7);
  if (local_90 == local_b0) {
    lVar8 = 4;
    plVar3 = local_b0;
LAB_00288560:
    (**(code **)(*plVar3 + lVar8 * 8))();
  }
  else if (local_90 != (long *)0x0) {
    lVar8 = 5;
    plVar3 = local_90;
    goto LAB_00288560;
  }
  if (local_c0[0] == local_e0) {
    lVar8 = 4;
LAB_00288590:
    (**(code **)(*plVar4 + lVar8 * 8))();
  }
  else if (local_c0[0] != (long *)0x0) {
    lVar8 = 5;
    plVar4 = local_c0[0];
    goto LAB_00288590;
  }
  *param_1 = 0;
  if (local_60[0] == local_80) {
    lVar8 = 4;
    local_60[0] = local_80;
  }
  else {
    if (local_60[0] == (long *)0x0) goto LAB_002885d0;
    lVar8 = 5;
  }
  (**(code **)(*local_60[0] + lVar8 * 8))();
LAB_002885d0:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 002886f4  FUN_002886f4 =====

void FUN_002886f4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394d58) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00288744  FUN_00288744 =====

undefined * FUN_00288744(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394d60;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00288784  FUN_00288784 =====

void FUN_00288784(long param_1,Runtime *param_2,IRuntime *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  Runtime *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  undefined8 *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  facebook::jsi::Value::asObject(param_3);
                    /* try { // try from 002887c0 to 002887cf has its CatchHandler @ 00288bbc */
  facebook::jsi::Object::asFunction((IRuntime *)&local_98);
  if (local_98 != (Runtime *)0x0) {
    (*(code *)**(undefined8 **)local_98)();
  }
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
                    /* try { // try from 002887e8 to 002887f3 has its CatchHandler @ 00288b80 */
  margelo::nitro::JSICache::getOrCreateCache(param_2);
                    /* try { // try from 002887f8 to 00288803 has its CatchHandler @ 00288b70 */
  FUN_0026ce4c(&local_80,local_98,&local_60);
                    /* try { // try from 00288804 to 0028880f has its CatchHandler @ 00288b60 */
  FUN_0026d090(&local_70,&local_80);
  if (local_78 != (long *)0x0) {
    uVar6 = FUN_00255510(0xffffffffffffffff);
    if (uVar6 < 2) {
      if ((*(byte *)(local_78 + 2) & 1) == 0) {
        if (local_80 != (long *)0x0) {
          if ((undefined8 *)*local_80 != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)*local_80)();
          }
          operator_delete(local_80);
        }
        local_80 = (long *)0x0;
        *(undefined4 *)(local_78 + 2) = 1;
        goto LAB_00288870;
      }
      lVar8 = *local_78;
      plVar2 = local_78;
    }
    else {
LAB_00288870:
      lVar8 = *local_78;
      plVar2 = local_78;
    }
    local_78 = plVar2;
    if (((lVar8 == 0) && (plVar2[1] == 0)) && (plVar2 != (long *)0x0)) {
      std::__ndk1::mutex::~mutex((mutex *)((long)plVar2 + 0x14));
      operator_delete(plVar2);
    }
  }
  std::__ndk1::mutex::unlock();
  if ((local_90 != (long *)0x0) &&
     (lVar8 = FUN_00255510(0xffffffffffffffff,local_90 + 1), lVar8 == 0)) {
    (**(code **)(*local_90 + 0x10))(local_90);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_68;
  plVar4 = local_70;
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  local_90 = plVar4;
  local_88 = plVar5;
  local_98 = param_2;
                    /* try { // try from 002888f0 to 002888fb has its CatchHandler @ 00288b50 */
  margelo::nitro::Dispatcher::getRuntimeGlobalDispatcher(param_2);
  plVar3 = local_78;
  plVar2 = local_80;
  if (local_78 != (long *)0x0) {
    FUN_00259a00(1,local_78 + 2);
  }
  local_90 = (long *)0x0;
  local_88 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    FUN_00259a00(1,plVar3 + 2);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* try { // try from 00288934 to 0028893b has its CatchHandler @ 00288b2c */
  puVar7 = (undefined8 *)operator_new(0x30);
  puVar7[2] = plVar4;
  puVar7[3] = plVar5;
  *puVar7 = &PTR_FUN_00385440;
  puVar7[1] = param_2;
  puVar7[4] = plVar2;
  puVar7[5] = plVar3;
  *(undefined8 **)(param_1 + 0x20) = puVar7;
  if (((plVar3 != (long *)0x0) &&
      (std::__ndk1::__shared_weak_count::__release_weak(), local_78 != (long *)0x0)) &&
     (lVar8 = FUN_00255510(0xffffffffffffffff,local_78 + 1), lVar8 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (local_88 != (long *)0x0) {
    uVar6 = FUN_00255510(0xffffffffffffffff);
    plVar2 = local_90;
    if (uVar6 < 2) {
      if ((*(byte *)(local_88 + 2) & 1) == 0) {
        if (local_90 != (long *)0x0) {
          if ((undefined8 *)*local_90 != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)*local_90)();
          }
          operator_delete(plVar2);
        }
        local_90 = (long *)0x0;
        *(undefined4 *)(local_88 + 2) = 1;
        goto LAB_002889fc;
      }
      lVar8 = *local_88;
      plVar2 = local_88;
    }
    else {
LAB_002889fc:
      lVar8 = *local_88;
      plVar2 = local_88;
    }
    local_88 = plVar2;
    if (((lVar8 == 0) && (plVar2[1] == 0)) && (plVar2 != (long *)0x0)) {
      std::__ndk1::mutex::~mutex((mutex *)((long)plVar2 + 0x14));
      operator_delete(plVar2);
    }
  }
  if (local_68 == (long *)0x0) goto LAB_00288abc;
  uVar6 = FUN_00255510(0xffffffffffffffff);
  plVar2 = local_70;
  if (uVar6 < 2) {
    if ((*(byte *)(local_68 + 2) & 1) == 0) {
      if (local_70 != (long *)0x0) {
        if ((undefined8 *)*local_70 != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)*local_70)();
        }
        operator_delete(plVar2);
      }
      local_70 = (long *)0x0;
      *(undefined4 *)(local_68 + 2) = 1;
      goto LAB_00288a8c;
    }
    lVar8 = *local_68;
    plVar2 = local_68;
  }
  else {
LAB_00288a8c:
    lVar8 = *local_68;
    plVar2 = local_68;
  }
  local_68 = plVar2;
  if (((lVar8 == 0) && (plVar2[1] == 0)) && (plVar2 != (long *)0x0)) {
    std::__ndk1::mutex::~mutex((mutex *)((long)plVar2 + 0x14));
    operator_delete(plVar2);
  }
LAB_00288abc:
  if (local_60 != (undefined8 *)0x0) {
    (**(code **)*local_60)();
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00288bdc  FUN_00288bdc =====

void FUN_00288bdc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00288c30  FUN_00288c30 =====

void FUN_00288c30(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00385440;
  if (param_1[5] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00288c90  FUN_00288c90 =====

void FUN_00288c90(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_00385440;
  if (param_1[5] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0026d198(param_1 + 2);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00288cf8  FUN_00288cf8 =====

undefined8 * FUN_00288cf8(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x18);
  *puVar2 = &PTR_FUN_00385440;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = lVar3;
  if (lVar3 != 0) {
    FUN_00255510(1);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = lVar3;
  if (lVar3 != 0) {
    FUN_00259a00(1,lVar3 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00288d94  FUN_00288d94 =====

void FUN_00288d94(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_00385440;
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[2] = uVar4;
  param_2[3] = lVar2;
  if (lVar2 != 0) {
    FUN_00255510(1);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = lVar2;
  if (lVar2 != 0) {
    FUN_00259a00(1,lVar2 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00288e28  FUN_00288e28 =====

void FUN_00288e28(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x28) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00288e7c  FUN_00288e7c =====

void FUN_00288e7c(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)((long)param_1 + 0x28) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0026d198((long)param_1 + 0x10);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00288ed8  FUN_00288ed8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00288ed8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  ulong *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  ulong local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  ulong *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x28) == 0) {
    plVar3 = (long *)0x0;
LAB_00288fa0:
                    /* try { // try from 00288fa0 to 00288fa7 has its CatchHandler @ 002890dc */
    local_60 = (undefined8 *)operator_new(0x30);
    puVar2 = PTR_typeinfo_name_00394d30;
    uStack_68 = _UNK_001d7ff8;
    local_70 = _DAT_001d7ff0;
    *(undefined1 *)((long)local_60 + 0x27) = 0;
    uVar8 = *(undefined8 *)puVar2;
    uVar10 = *(undefined8 *)(puVar2 + 0x18);
    uVar9 = *(undefined8 *)(puVar2 + 0x10);
    uVar6 = *(undefined8 *)(puVar2 + 0x1f);
    local_60[1] = *(undefined8 *)(puVar2 + 8);
    *local_60 = uVar8;
    local_60[3] = uVar10;
    local_60[2] = uVar9;
    *(undefined8 *)((long)local_60 + 0x1f) = uVar6;
                    /* try { // try from 00288fd4 to 00288fe3 has its CatchHandler @ 002890c4 */
    margelo::nitro::TypeInfo::demangleName((basic_string *)&local_70,true);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if (plVar3 == (long *)0x0) goto LAB_00289058;
  }
  else {
    plVar3 = (long *)std::__ndk1::__shared_weak_count::lock();
    if ((plVar3 == (long *)0x0) || (plVar7 = *(long **)(param_1 + 0x20), plVar7 == (long *)0x0))
    goto LAB_00288fa0;
    uStack_88 = *(ulong *)(param_1 + 0x10);
    local_90 = *(ulong *)(param_1 + 8);
    local_80 = *(void **)(param_1 + 0x18);
    if (local_80 != (void *)0x0) {
      FUN_00255510(1);
    }
    local_50 = (ulong *)0x0;
                    /* try { // try from 00288f40 to 00288f47 has its CatchHandler @ 002890b4 */
    local_50 = (ulong *)operator_new(0x20);
    *local_50 = (ulong)&PTR_FUN_003854c0;
    local_50[2] = uStack_88;
    local_50[1] = local_90;
    local_50[3] = (ulong)local_80;
    *(undefined8 *)((ulong)&local_90 | 8) = 0;
    ((undefined8 *)((ulong)&local_90 | 8))[1] = 0;
                    /* try { // try from 00288f74 to 00288f83 has its CatchHandler @ 0028907c */
    (**(code **)(*plVar7 + 0x18))(plVar7,&local_70);
    if (local_50 == &local_70) {
      lVar5 = 4;
      puVar4 = &local_70;
LAB_00289024:
      (**(code **)(*puVar4 + lVar5 * 8))();
    }
    else if (local_50 != (ulong *)0x0) {
      lVar5 = 5;
      puVar4 = local_50;
      goto LAB_00289024;
    }
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plVar3 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
LAB_00289058:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00289104  FUN_00289104 =====

void FUN_00289104(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394d30) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00289154  FUN_00289154 =====

undefined * FUN_00289154(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394d38;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00289194  FUN_00289194 =====

void FUN_00289194(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003854c0;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1 + 2);
}


// ===== 002891d8  FUN_002891d8 =====

void FUN_002891d8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_003854c0;
  FUN_0026d198(param_1 + 2);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00289230  FUN_00289230 =====

void FUN_00289230(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x18);
  *puVar2 = &PTR_FUN_003854c0;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = lVar3;
  if (lVar3 != 0) {
    FUN_00255510(1);
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar2);
}


// ===== 002892ac  FUN_002892ac =====

void FUN_002892ac(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_003854c0;
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[2] = uVar4;
  param_2[3] = lVar2;
  if (lVar2 != 0) {
    FUN_00255510(1);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028931c  FUN_0028931c =====

void FUN_0028931c(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_0026d198(param_1 + 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00289358  FUN_00289358 =====

void FUN_00289358(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0026d198((long)param_1 + 0x10);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002893a8  FUN_002893a8 =====

void FUN_002893a8(long param_1)

{
  long lVar1;
  runtime_error *this;
  undefined1 auStack_80 [24];
  Value aVStack_68 [24];
  undefined4 local_50 [6];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(param_1 + 0x10) == 0) || ((*(byte *)(*(long *)(param_1 + 0x18) + 0x10) & 1) != 0))
  {
    FUN_00264e5c(local_50,PTR_typeinfo_name_00394d40,1);
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0028945c to 0028946f has its CatchHandler @ 0028951c */
    std::__ndk1::operator+("Cannot call ",(basic_string *)local_50);
                    /* try { // try from 00289470 to 00289483 has its CatchHandler @ 00289504 */
    FUN_00263450(aVStack_68,auStack_80," - the underlying `jsi::Function` has already been deleted!"
                );
                    /* try { // try from 00289488 to 002894bf has its CatchHandler @ 002894d0 */
    std::runtime_error::runtime_error(this,(basic_string *)aVStack_68);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
  }
  else {
    local_50[0] = 0;
                    /* try { // try from 002893f0 to 00289407 has its CatchHandler @ 002894c0 */
    (**(code **)(**(long **)(param_1 + 8) + 0x280))
              (aVStack_68,*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),local_50,0,0);
    facebook::jsi::Value::~Value((Value *)local_50);
    facebook::jsi::Value::~Value(aVStack_68);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00289554  FUN_00289554 =====

void FUN_00289554(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394d48) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 002895a4  FUN_002895a4 =====

undefined * FUN_002895a4(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394d50;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002895e4  FUN_002895e4 =====

void FUN_002895e4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037dda0;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete((void *)param_1[3]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00289650  FUN_00289650 =====

void FUN_00289650(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037dda0;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002896b8  FUN_002896b8 =====

undefined8 * FUN_002896b8(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x38);
  bVar2 = *(byte *)(param_1 + 8);
  *puVar4 = &PTR_FUN_0037dda0;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 00289718 to 0028971b has its CatchHandler @ 00289754 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar4 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    puVar4[5] = *(undefined8 *)(param_1 + 0x28);
    puVar4[4] = uVar6;
    *(undefined4 *)(puVar4 + 6) = uVar1;
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028977c  FUN_0028977c =====

void FUN_0028977c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037dda0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar4;
    param_2[1] = uVar3;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x30);
    param_2[5] = uVar4;
    param_2[4] = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00289814  FUN_00289814 =====

void FUN_00289814(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00289874  FUN_00289874 =====

void FUN_00289874(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002898d0  FUN_002898d0 =====

void FUN_002898d0(undefined4 *param_1,undefined *param_2,long *param_3,long param_4,
                 undefined8 *param_5,ulong *param_6)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  JSError *pJVar9;
  undefined *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  undefined8 uVar21;
  undefined1 auVar22 [12];
  code *local_178;
  undefined8 *local_160 [3];
  undefined1 auStack_148 [24];
  Value aVStack_130 [24];
  long *local_118;
  long *local_110;
  long *local_108;
  undefined8 *local_100;
  byte local_f8 [16];
  void *local_e8;
  byte local_e0 [16];
  void *local_d0;
  IRuntime local_c8;
  undefined7 uStack_c7;
  long *plStack_c0;
  void *local_b8;
  undefined8 *local_b0 [2];
  void *local_a0;
  basic_string local_98;
  undefined7 uStack_97;
  long *plStack_90;
  void *local_88;
  long local_80;
  
  plVar15 = (long *)tpidr_el0;
  local_80 = plVar15[5];
  plVar19 = (long *)*param_5;
  uVar11 = *param_6;
  local_b0[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 00289934 to 00289943 has its CatchHandler @ 0028a0cc */
  (**(code **)(*param_3 + 0x160))(&local_98,param_3,local_b0);
  if ((CONCAT71(uStack_97,local_98) == 0) ||
     (uVar5 = __dynamic_cast(CONCAT71(uStack_97,local_98),PTR_typeinfo_00394860,
                             PTR_typeinfo_00394c28,0xffffffffffffffff), uVar5 == 0)) {
    uVar5 = 0;
    plVar12 = (long *)0x0;
    if (plStack_90 == (long *)0x0) goto joined_r0x002899c0;
  }
  else {
    if (plStack_90 == (long *)0x0) {
      plVar12 = (long *)0x0;
      goto joined_r0x002899c0;
    }
    FUN_00259a00(1,plStack_90 + 1);
    plVar12 = plStack_90;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plStack_90 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plStack_90 + 0x10))(plStack_90);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x002899c0:
  if (local_b0[0] != (undefined8 *)0x0) {
    (**(code **)*local_b0[0])();
  }
  if (uVar11 != 2) {
                    /* try { // try from 00289dc8 to 00289dd7 has its CatchHandler @ 0028a688 */
    FUN_00287964(&local_98,*(undefined4 *)(param_2 + 0x30),param_2 + 8,uVar5);
    pJVar9 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00289de4 to 00289df7 has its CatchHandler @ 0028a668 */
    std::__ndk1::operator+("`",&local_98);
                    /* try { // try from 00289df8 to 00289e0b has its CatchHandler @ 0028a64c */
    FUN_00263450(&local_118,aVStack_130,"` expected ");
                    /* try { // try from 00289e0c to 00289e17 has its CatchHandler @ 0028a5fc */
    std::__ndk1::to_string(2);
                    /* try { // try from 00289e18 to 00289e27 has its CatchHandler @ 0028a270 */
    FUN_00264adc(local_f8,&local_118,auStack_148);
                    /* try { // try from 00289e28 to 00289e3b has its CatchHandler @ 0028a224 */
    FUN_00263450(local_e0,local_f8," arguments, but received ");
                    /* try { // try from 00289e3c to 00289e47 has its CatchHandler @ 0028a1e4 */
    std::__ndk1::to_string(uVar11);
                    /* try { // try from 00289e48 to 00289e57 has its CatchHandler @ 0028a19c */
    FUN_00264adc(&local_c8,local_e0,local_160);
                    /* try { // try from 00289e58 to 00289e6b has its CatchHandler @ 0028a14c */
    FUN_00263450(local_b0,&local_c8,&DAT_001d5be0);
                    /* try { // try from 00289e70 to 00289eab has its CatchHandler @ 0028a0ec */
    facebook::jsi::JSError::JSError(pJVar9,param_3,local_b0);
    if (plVar15[5] == local_80) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar9,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
LAB_0028a6ac:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_178 = *(code **)(param_2 + 0x20);
  puVar10 = *(undefined **)(param_2 + 0x28);
  plVar14 = param_3;
  plVar13 = param_3;
  plVar7 = plStack_90;
  plVar16 = plVar15;
  plVar18 = plVar12;
  if ((*PTR_defaultValue_00394d08 & 1) == 0) goto LAB_00289fb8;
  do {
    plVar2 = (long *)(uVar5 + ((long)puVar10 >> 1));
    if (((ulong)puVar10 & 1) != 0) {
      local_178 = *(code **)(local_178 + *plVar2);
    }
                    /* try { // try from 00289a10 to 00289a2f has its CatchHandler @ 0028a190 */
    uVar21 = facebook::jsi::Value::asNumber();
    facebook::jsi::Value::asObject((IRuntime *)(plVar19 + 2));
                    /* try { // try from 00289a30 to 00289a3f has its CatchHandler @ 0028a0a8 */
    facebook::jsi::Object::asArray(&local_c8);
    if ((undefined8 *)CONCAT71(uStack_c7,local_c8) != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)CONCAT71(uStack_c7,local_c8))();
    }
                    /* try { // try from 00289a64 to 00289a6f has its CatchHandler @ 0028a098 */
    uVar11 = (**(code **)(*plVar13 + 0x240))(plVar13,&local_100);
    local_118 = (long *)0x0;
    local_110 = (long *)0x0;
    local_108 = (long *)0x0;
    if (uVar11 == 0) {
LAB_00289cb8:
      if (local_100 != (undefined8 *)0x0) {
        (**(code **)*local_100)();
      }
                    /* try { // try from 00289ccc to 00289ce3 has its CatchHandler @ 0028a080 */
      (*local_178)(uVar21,plVar2,&local_118);
      plVar19 = local_118;
      plVar15 = local_110;
      if (local_118 != (long *)0x0) {
        for (; plVar15 != plVar19; plVar15 = plVar15 + -2) {
          plVar12 = (long *)plVar15[-1];
          if ((plVar12 != (long *)0x0) &&
             (lVar6 = FUN_00255510(0xffffffffffffffff,plVar12 + 1), lVar6 == 0)) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            std::__ndk1::__shared_weak_count::__release_weak();
          }
        }
        local_110 = plVar19;
        operator_delete(local_118);
      }
      *param_1 = 0;
      if ((plVar18 != (long *)0x0) &&
         (lVar6 = FUN_00255510(0xffffffffffffffff,plVar18 + 1), lVar6 == 0)) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      if (plVar16[5] == local_80) {
        return;
      }
      goto LAB_0028a6ac;
    }
    if (uVar11 >> 0x3c != 0) {
      if (plVar16[5] == local_80) {
                    /* try { // try from 0028a00c to 0028a00f has its CatchHandler @ 0028a18c */
        auVar22 = FUN_0028a8ac();
                    /* catch() { ... } // from try @ 00289f48 with catch @ 0028a010 */
        if (((byte)local_c8 & 1) == 0) {
          if ((local_e0[0] & 1) != 0) goto LAB_0028a060;
LAB_0028a028:
          if ((local_f8[0] & 1) != 0) goto LAB_0028a070;
LAB_0028a030:
          if ((int)plVar7 != 0) {
LAB_0028a1c8:
            __cxa_free_exception(puVar10);
          }
        }
        else {
          operator_delete(local_b8);
          if ((local_e0[0] & 1) == 0) goto LAB_0028a028;
LAB_0028a060:
          operator_delete(local_d0);
          if ((local_f8[0] & 1) == 0) goto LAB_0028a030;
LAB_0028a070:
          operator_delete(local_e8);
          if (((ulong)plVar7 & 1) != 0) goto LAB_0028a1c8;
        }
        if (((ulong)local_b0[0] & 1) != 0) {
          operator_delete(local_a0);
        }
        if (((byte)local_98 & 1) != 0) {
          operator_delete(local_88);
        }
        FUN_0028a820(0);
        FUN_0027a3e0(plVar19);
        if (local_160[0] != (undefined8 *)0x0) {
          (**(code **)*local_160[0])();
        }
        facebook::jsi::Value::~Value(aVStack_130);
        FUN_0028a740(&local_118);
        if (local_100 != (undefined8 *)0x0) {
          (**(code **)*local_100)();
        }
        plVar15 = (long *)__cxa_begin_catch(auVar22._0_8_);
        if (auVar22._8_4_ == 2) {
                    /* try { // try from 0028a338 to 0028a347 has its CatchHandler @ 0028a63c */
          FUN_00287964(&local_98,*(undefined4 *)(param_2 + 0x30),param_2 + 8,uVar5);
          uVar21 = (**(code **)(*plVar15 + 0x10))(plVar15);
                    /* try { // try from 0028a35c to 0028a363 has its CatchHandler @ 0028a5e4 */
          _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc
                    (local_b0,uVar21);
          pJVar9 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0028a370 to 0028a383 has its CatchHandler @ 0028a5ac */
          FUN_00264c24(local_f8,&local_98,&DAT_001d768e);
                    /* try { // try from 0028a384 to 0028a393 has its CatchHandler @ 0028a574 */
          FUN_00264d50(local_e0,local_f8,local_b0);
                    /* try { // try from 0028a398 to 0028a3d7 has its CatchHandler @ 0028a528 */
          facebook::jsi::JSError::JSError(pJVar9,param_3,local_e0);
          if (plVar16[5] == local_80) {
                    /* WARNING: Subroutine does not return */
            __cxa_throw(pJVar9,PTR_typeinfo_00394858,PTR__JSError_00394840);
          }
        }
        else {
                    /* try { // try from 0028a3e0 to 0028a3ef has its CatchHandler @ 0028a62c */
          FUN_00287964(&local_98,*(undefined4 *)(param_2 + 0x30),param_2 + 8,uVar5);
                    /* try { // try from 0028a3f0 to 0028a3f7 has its CatchHandler @ 0028a5cc */
          margelo::nitro::TypeInfo::getCurrentExceptionName();
          pJVar9 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0028a404 to 0028a417 has its CatchHandler @ 0028a58c */
          std::__ndk1::operator+("`",&local_98);
                    /* try { // try from 0028a418 to 0028a42b has its CatchHandler @ 0028a55c */
          FUN_00263450(aVStack_130,auStack_148,"` threw an unknown ");
                    /* try { // try from 0028a42c to 0028a43b has its CatchHandler @ 0028a4f8 */
          FUN_00264d50(local_f8,aVStack_130,local_b0);
                    /* try { // try from 0028a43c to 0028a44f has its CatchHandler @ 0028a4d4 */
          FUN_00263450(local_e0,local_f8," error.");
                    /* try { // try from 0028a454 to 0028a493 has its CatchHandler @ 0028a494 */
          facebook::jsi::JSError::JSError(pJVar9,param_3,local_e0);
          if (plVar16[5] == local_80) {
                    /* WARNING: Subroutine does not return */
            __cxa_throw(pJVar9,PTR_typeinfo_00394858,PTR__JSError_00394840);
          }
        }
      }
      goto LAB_0028a6ac;
    }
                    /* try { // try from 00289a8c to 00289a8f has its CatchHandler @ 0028a18c */
    local_118 = (long *)operator_new(uVar11 << 4);
    puVar3 = PTR_typeinfo_00394c18;
    param_2 = PTR_typeinfo_00394860;
    local_108 = local_118 + uVar11 * 2;
    uVar5 = 0;
    local_110 = local_118;
LAB_00289ae0:
                    /* try { // try from 00289ae8 to 00289afb has its CatchHandler @ 0028a294 */
    (**(code **)(*plVar13 + 0x260))(aVStack_130,plVar13,&local_100,uVar5);
                    /* try { // try from 00289afc to 00289b0b has its CatchHandler @ 0028a2a0 */
    facebook::jsi::Value::asObject((IRuntime *)aVStack_130);
                    /* try { // try from 00289b14 to 00289b23 has its CatchHandler @ 0028a2ac */
    (**(code **)(*plVar13 + 0x160))(&local_c8,plVar13,local_160);
    plVar14 = plStack_c0;
    if ((CONCAT71(uStack_c7,local_c8) == 0) ||
       (plVar7 = (long *)__dynamic_cast(CONCAT71(uStack_c7,local_c8),param_2,puVar3,
                                        0xffffffffffffffff), plVar7 == (long *)0x0)) {
                    /* try { // try from 00289eb0 to 00289ebf has its CatchHandler @ 0028a2cc */
      facebook::jsi::Value::toString((IRuntime *)aVStack_130);
                    /* try { // try from 00289ecc to 00289ed7 has its CatchHandler @ 0028a248 */
      (**(code **)(*param_3 + 0x120))(&local_98,param_3,local_b0);
      if (local_b0[0] != (undefined8 *)0x0) {
        (**(code **)*local_b0[0])();
      }
                    /* try { // try from 00289eec to 00289eff has its CatchHandler @ 0028a208 */
      FUN_00264e5c(local_b0,PTR_typeinfo_name_00394c10,0);
      pJVar9 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 00289f0c to 00289f1f has its CatchHandler @ 0028a1c0 */
      std::__ndk1::operator+
                ("Downcasting failed - It has a different NativeState<T>!\n- Did you accidentally pass a different type?\n- Is react-native-nitro-modules linked multiple times? Ensure you don\'t have any duplicate symbols for `"
                 ,(basic_string *)local_b0);
                    /* try { // try from 00289f20 to 00289f33 has its CatchHandler @ 0028a170 */
      FUN_00263450(local_e0,local_f8,"` in your app\'s binary.");
                    /* try { // try from 00289f34 to 00289f43 has its CatchHandler @ 0028a04c */
      FUN_0028a8e4(&local_c8,&local_98,local_e0);
                    /* try { // try from 00289f48 to 00289f87 has its CatchHandler @ 0028a010 */
      facebook::jsi::JSError::JSError(pJVar9,param_3,&local_c8);
      if (plVar16[5] == local_80) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(pJVar9,PTR_typeinfo_00394858,PTR__JSError_00394840);
      }
      goto LAB_0028a6ac;
    }
    if (plVar14 != (long *)0x0) {
      FUN_00259a00(1,plVar14 + 1);
      lVar6 = FUN_00255510(0xffffffffffffffff,plVar14 + 1);
      if (lVar6 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
    if (local_160[0] != (undefined8 *)0x0) {
      (**(code **)*local_160[0])();
    }
    plVar15 = local_110;
    plVar12 = local_118;
    if (local_110 < local_108) {
      plVar19 = local_110 + 2;
      local_110[1] = (long)plVar14;
      *local_110 = (long)plVar7;
LAB_00289ac8:
      local_110 = plVar19;
      facebook::jsi::Value::~Value(aVStack_130);
      uVar5 = uVar5 + 1;
      if (uVar5 == uVar11) goto LAB_00289cb8;
      goto LAB_00289ae0;
    }
    lVar20 = (long)local_110 - (long)local_118;
    lVar6 = lVar20 >> 4;
    puVar1 = (undefined *)(lVar6 + 1);
    if ((ulong)puVar1 >> 0x3c == 0) {
      puVar10 = (undefined *)((long)local_108 - (long)local_118 >> 3);
      if (puVar10 <= puVar1) {
        puVar10 = puVar1;
      }
      if (0x7fffffffffffffef < (ulong)((long)local_108 - (long)local_118)) {
        puVar10 = (undefined *)0xfffffffffffffff;
      }
      plVar19 = (long *)puVar3;
      if ((ulong)puVar10 >> 0x3c != 0) goto LAB_00289fa0;
                    /* try { // try from 00289bd4 to 00289bd7 has its CatchHandler @ 0028a26c */
      pvVar8 = operator_new((long)puVar10 << 4);
      plVar13 = local_118;
      local_118 = (long *)((long)pvVar8 + lVar20);
      local_108 = (long *)((long)pvVar8 + (long)puVar10 * 0x10);
      plVar19 = local_118 + 2;
      *local_118 = (long)plVar7;
      *(long **)((long)pvVar8 + lVar6 * 0x10 + 8) = plVar14;
      if (plVar15 != plVar12) {
        do {
          plVar17 = plVar15 + -2;
          lVar6 = *plVar17;
          plVar14 = local_118 + -2;
          local_118[-1] = plVar15[-1];
          *plVar14 = lVar6;
          *plVar17 = 0;
          plVar15[-1] = 0;
          local_118 = plVar14;
          plVar15 = plVar17;
          plVar7 = plVar19;
          plVar14 = local_110;
        } while (plVar17 != plVar12);
        for (; local_110 = plVar7, plVar15 = plVar13, plVar14 != plVar13; plVar14 = plVar14 + -2) {
          plVar15 = (long *)plVar14[-1];
          if ((plVar15 != (long *)0x0) &&
             (lVar6 = FUN_00255510(0xffffffffffffffff,plVar15 + 1), lVar6 == 0)) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
            std::__ndk1::__shared_weak_count::__release_weak();
          }
          plVar7 = local_110;
        }
      }
      plVar13 = param_3;
      if (plVar15 != (long *)0x0) {
        operator_delete(plVar15);
      }
      goto LAB_00289ac8;
    }
    if (plVar16[5] != local_80) goto LAB_0028a6ac;
                    /* try { // try from 00289f9c to 00289fb7 has its CatchHandler @ 0028a2b8 */
    FUN_0028a8ac();
    puVar10 = param_2;
    plVar19 = plVar14;
    param_2 = puVar3;
LAB_00289fa0:
    if (plVar16[5] != local_80) goto LAB_0028a6ac;
    FUN_00260a2c();
LAB_00289fb8:
    iVar4 = __cxa_guard_acquire(PTR_defaultValue_00394d08);
    puVar3 = PTR_defaultValue_00394d00;
    plVar13 = plVar14;
    plVar16 = plVar15;
    plVar18 = plVar12;
    if (iVar4 != 0) {
      *(undefined4 *)PTR_defaultValue_00394d00 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00394d08);
    }
  } while( true );
}


// ===== 0028a6b0  FUN_0028a6b0 =====

void FUN_0028a6b0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394d10) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0028a700  FUN_0028a700 =====

undefined * FUN_0028a700(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394d18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028a740  FUN_0028a740 =====

void FUN_0028a740(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  void *pvVar7;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  pvVar6 = (void *)*param_1;
  if (pvVar6 == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lVar4) {
      return;
    }
  }
  else {
    pvVar7 = (void *)param_1[1];
    pvVar3 = pvVar6;
    if (pvVar7 != pvVar6) {
      do {
        plVar5 = *(long **)((long)pvVar7 + -8);
        if ((plVar5 != (long *)0x0) &&
           (lVar2 = FUN_00255510(0xffffffffffffffff,plVar5 + 1), lVar2 == 0)) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar7 = (void *)((long)pvVar7 + -0x10);
      } while (pvVar7 != pvVar6);
      pvVar3 = (void *)*param_1;
    }
    param_1[1] = pvVar6;
    if (*(long *)(lVar1 + 0x28) == lVar4) {
      operator_delete(pvVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028a820  FUN_0028a820 =====

void FUN_0028a820(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
     ) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028a8ac  FUN_0028a8ac =====

void FUN_0028a8ac(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_00260abc("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028a8e4  FUN_0028a8e4 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0028a8e4(undefined8 *param_1,byte *param_2,byte *param_3)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  char *__dest;
  byte bVar3;
  long lVar4;
  char *pcVar5;
  void *pvVar6;
  undefined *puVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  byte *pbVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong local_d8;
  ulong local_d0;
  undefined8 local_c8;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  byte local_88 [16];
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  undefined8 *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_60 = (undefined8 *)operator_new(0x30);
  puVar7 = PTR_typeinfo_name_00394c10;
  uStack_68 = _UNK_001d81c8;
  local_70 = _DAT_001d81c0;
  *(undefined1 *)((long)local_60 + 0x2d) = 0;
  uVar14 = *(undefined8 *)puVar7;
  uVar16 = *(undefined8 *)(puVar7 + 0x18);
  uVar15 = *(undefined8 *)(puVar7 + 0x10);
  uVar13 = *(undefined8 *)(puVar7 + 0x25);
  uVar12 = *(undefined8 *)(puVar7 + 0x1d);
  local_60[1] = *(undefined8 *)(puVar7 + 8);
  *local_60 = uVar14;
  local_60[3] = uVar16;
  local_60[2] = uVar15;
  *(undefined8 *)((long)local_60 + 0x25) = uVar13;
  *(undefined8 *)((long)local_60 + 0x1d) = uVar12;
                    /* try { // try from 0028a94c to 0028a95b has its CatchHandler @ 0028ac44 */
  margelo::nitro::TypeInfo::demangleName((basic_string *)&local_70,false);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  bVar3 = *param_2;
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  uVar1 = __n + 0x10;
  if (uVar1 < 0xfffffffffffffff0) {
    if (uVar1 < 0x17) {
      local_d0 = 0;
      uVar10 = ((uint)uVar1 & 0xff) << 1;
      local_c8 = (char *)0x0;
      local_d8 = (ulong)(byte)uVar10;
    }
    else {
      uVar2 = (uVar1 | 0xf) + 1;
                    /* try { // try from 0028a9b8 to 0028a9bf has its CatchHandler @ 0028ac58 */
      local_c8 = (char *)operator_new(uVar2);
      local_d8 = uVar2 | 1;
      uVar10 = (uint)local_d8 & 0xff;
      local_d0 = uVar1;
    }
    uVar12 = s_Cannot_convert___001d6d63._0_8_;
    __dest = (char *)((long)&local_c8 + 1);
    pcVar5 = (char *)((ulong)&local_d8 | 1);
    if ((uVar10 & 1) != 0) {
      __dest = local_c8 + 0x10;
      pcVar5 = local_c8;
    }
    *(undefined8 *)(pcVar5 + 8) = s_Cannot_convert___001d6d63._8_8_;
    *(undefined8 *)pcVar5 = uVar12;
    if (__n != 0) {
      pbVar11 = *(byte **)(param_2 + 0x10);
      if ((bVar3 & 1) == 0) {
        pbVar11 = param_2 + 1;
      }
      memmove(__dest,pbVar11,__n);
    }
    __dest[__n] = '\0';
                    /* try { // try from 0028aa1c to 0028aa2f has its CatchHandler @ 0028ac24 */
    puVar8 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_d8,0x1d7691);
    local_b0 = (void *)puVar8[2];
    uStack_b8 = puVar8[1];
    local_c0 = *puVar8;
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
    pvVar6 = (void *)((ulong)local_88 | 1);
    if ((local_88[0] & 1) != 0) {
      pvVar6 = local_78;
    }
                    /* try { // try from 0028aa68 to 0028aa6f has its CatchHandler @ 0028ac04 */
    puVar8 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_c0,(ulong)pvVar6);
    local_90 = (void *)puVar8[2];
    uStack_98 = puVar8[1];
    local_a0 = *puVar8;
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
                    /* try { // try from 0028aa88 to 0028aa9b has its CatchHandler @ 0028abe4 */
    puVar8 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((char *)&local_a0,0x1d6339);
    local_60 = (undefined8 *)puVar8[2];
    uStack_68 = puVar8[1];
    local_70 = *puVar8;
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
    pbVar11 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar11 = param_3 + 1;
    }
                    /* try { // try from 0028aacc to 0028aad3 has its CatchHandler @ 0028aba0 */
    puVar9 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       ((char *)&local_70,(ulong)pbVar11);
    uVar12 = puVar9[2];
    uVar14 = puVar9[1];
    uVar13 = *puVar9;
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    param_1[1] = uVar14;
    *param_1 = uVar13;
    param_1[2] = uVar12;
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
    if ((local_d8 & 1) != 0) {
      operator_delete(local_c8);
    }
    if ((local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    if (*(long *)(lVar4 + 0x28) == local_58) {
      return;
    }
  }
  else if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* try { // try from 0028ab9c to 0028ab9f has its CatchHandler @ 0028ac58 */
    uVar12 = FUN_00260a84();
                    /* catch() { ... } // from try @ 0028aacc with catch @ 0028aba0 */
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
    if ((local_d8 & 1) != 0) {
      operator_delete(local_c8);
    }
    if ((local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    if (*(long *)(lVar4 + 0x28) == local_58) {
      FUN_00255d34(uVar12);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028ac88  FUN_0028ac88 =====

void FUN_0028ac88(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037dd20;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete((void *)param_1[3]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028acf4  FUN_0028acf4 =====

void FUN_0028acf4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037dd20;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028ad5c  FUN_0028ad5c =====

undefined8 * FUN_0028ad5c(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x38);
  bVar2 = *(byte *)(param_1 + 8);
  *puVar4 = &PTR_FUN_0037dd20;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 0028adbc to 0028adbf has its CatchHandler @ 0028adf8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar4 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    puVar4[5] = *(undefined8 *)(param_1 + 0x28);
    puVar4[4] = uVar6;
    *(undefined4 *)(puVar4 + 6) = uVar1;
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028ae20  FUN_0028ae20 =====

void FUN_0028ae20(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037dd20;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar4;
    param_2[1] = uVar3;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x30);
    param_2[5] = uVar4;
    param_2[4] = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028aeb8  FUN_0028aeb8 =====

void FUN_0028aeb8(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028af18  FUN_0028af18 =====

void FUN_0028af18(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028af74  FUN_0028af74 =====

void FUN_0028af74(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 ulong *param_6)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  JSError *pJVar6;
  long *plVar7;
  ulong uVar8;
  code *pcVar9;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 local_110;
  long *local_108;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  long local_80;
  long *plStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar8 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 0028afd0 to 0028afdf has its CatchHandler @ 0028b580 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar4 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00394c28,0xffffffffffffffff
                            ), lVar4 == 0)) {
    lVar4 = 0;
    plVar7 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x0028b058;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar7 = (long *)0x0;
      goto joined_r0x0028b058;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar7 = plStack_78;
  }
  lVar5 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar5 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x0028b058:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar8 == 0) {
    pcVar9 = *(code **)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x28);
    if (((*
          PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive24HybridRiveFontConfigSpecENSt6__ndk110shared_ptrINS3_22HybridFallbackFontSpecEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSC_FT0_DpT1_ERNSA_7RuntimeEPKSB_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394ce8
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive24HybridRiveFontConfigSpecENSt6__ndk110shared_ptrINS3_22HybridFallbackFontSpecEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSC_FT0_DpT1_ERNSA_7RuntimeEPKSB_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394ce8
                                   ),
       puVar2 = 
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive24HybridRiveFontConfigSpecENSt6__ndk110shared_ptrINS3_22HybridFallbackFontSpecEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSC_FT0_DpT1_ERNSA_7RuntimeEPKSB_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394ce0
       , iVar3 != 0)) {
      *(undefined4 *)
       PTR__ZZN7margelo5nitro14HybridFunction10callMethodINS0_4rive24HybridRiveFontConfigSpecENSt6__ndk110shared_ptrINS3_22HybridFallbackFontSpecEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSC_FT0_DpT1_ERNSA_7RuntimeEPKSB_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394ce0
           = 0;
      __cxa_atexit(PTR__Value_00394848,puVar2,&PTR_LOOP_0037bc90);
      __cxa_guard_release(
                         PTR__ZGVZN7margelo5nitro14HybridFunction10callMethodINS0_4rive24HybridRiveFontConfigSpecENSt6__ndk110shared_ptrINS3_22HybridFallbackFontSpecEEEJETpTnmJEEEN8facebook3jsi5ValueEPT_MSC_FT0_DpT1_ERNSA_7RuntimeEPKSB_mNS5_16integer_sequenceImJXspT2_EEEEE12defaultValue_00394ce8
                         );
    }
    if ((uVar8 & 1) != 0) {
      pcVar9 = *(code **)(pcVar9 + *(long *)(lVar4 + ((long)uVar8 >> 1)));
    }
                    /* try { // try from 0028b090 to 0028b097 has its CatchHandler @ 0028b288 */
    (*pcVar9)(&local_110);
                    /* try { // try from 0028b09c to 0028b0a7 has its CatchHandler @ 0028b270 */
    FUN_0028b7d4(param_1,param_3,local_110);
    if ((local_108 != (long *)0x0) &&
       (lVar4 = FUN_00255510(0xffffffffffffffff,local_108 + 1), lVar4 == 0)) {
      (**(code **)(*local_108 + 0x10))(local_108);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if ((plVar7 != (long *)0x0) && (lVar4 = FUN_00255510(0xffffffffffffffff,plVar7 + 1), lVar4 == 0)
       ) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 0028b148 to 0028b157 has its CatchHandler @ 0028b71c */
    FUN_00287964(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar4);
    pJVar6 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0028b164 to 0028b177 has its CatchHandler @ 0028b6fc */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 0028b178 to 0028b18b has its CatchHandler @ 0028b6e4 */
    FUN_00263450(auStack_f8,&local_110,"` expected ");
                    /* try { // try from 0028b18c to 0028b197 has its CatchHandler @ 0028b6b4 */
    std::__ndk1::to_string(0);
                    /* try { // try from 0028b198 to 0028b1a7 has its CatchHandler @ 0028b690 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 0028b1a8 to 0028b1bb has its CatchHandler @ 0028b66c */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 0028b1bc to 0028b1c7 has its CatchHandler @ 0028b648 */
    std::__ndk1::to_string(uVar8);
                    /* try { // try from 0028b1c8 to 0028b1d7 has its CatchHandler @ 0028b624 */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 0028b1d8 to 0028b1eb has its CatchHandler @ 0028b600 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 0028b1f0 to 0028b22b has its CatchHandler @ 0028b5a0 */
    facebook::jsi::JSError::JSError(pJVar6,param_3,local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar6,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028b744  FUN_0028b744 =====

void FUN_0028b744(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394cf0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0028b794  FUN_0028b794 =====

undefined * FUN_0028b794(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394cf8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028b7d4  FUN_0028b7d4 =====

void FUN_0028b7d4(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  JSError *pJVar2;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  basic_string abStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_3 == (long *)0x0) {
    FUN_00264e5c(abStack_50,PTR_typeinfo_name_00394c10);
    pJVar2 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0028b850 to 0028b863 has its CatchHandler @ 0028b904 */
    std::__ndk1::operator+("Cannot convert `nullptr` to NativeState<",abStack_50);
                    /* try { // try from 0028b864 to 0028b877 has its CatchHandler @ 0028b8ec */
    FUN_00263450(auStack_68,auStack_80,&DAT_001d795b);
                    /* try { // try from 0028b87c to 0028b8b7 has its CatchHandler @ 0028b8b8 */
    facebook::jsi::JSError::JSError(pJVar2,param_2,auStack_68);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar2,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_38) {
    margelo::nitro::HybridObject::toObject((Runtime *)((long)param_3 + *(long *)(*param_3 + -0x20)))
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028b93c  FUN_0028b93c =====

void FUN_0028b93c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037dca0;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete((void *)param_1[3]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028b9a8  FUN_0028b9a8 =====

void FUN_0028b9a8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037dca0;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028ba10  FUN_0028ba10 =====

undefined8 * FUN_0028ba10(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x38);
  bVar2 = *(byte *)(param_1 + 8);
  *puVar4 = &PTR_FUN_0037dca0;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 0028ba70 to 0028ba73 has its CatchHandler @ 0028baac */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar4 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    puVar4[5] = *(undefined8 *)(param_1 + 0x28);
    puVar4[4] = uVar6;
    *(undefined4 *)(puVar4 + 6) = uVar1;
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028bad4  FUN_0028bad4 =====

void FUN_0028bad4(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037dca0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar4;
    param_2[1] = uVar3;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x30);
    param_2[5] = uVar4;
    param_2[4] = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028bb6c  FUN_0028bb6c =====

void FUN_0028bb6c(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028bbcc  FUN_0028bbcc =====

void FUN_0028bbcc(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028bc28  FUN_0028bc28 =====

void FUN_0028bc28(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  JSError *pJVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [8];
  long *local_120;
  undefined8 local_110;
  long *local_108;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  long local_80;
  long *plStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar10 = *param_5;
  uVar9 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 0028bc88 to 0028bc97 has its CatchHandler @ 0028c2a4 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((local_80 == 0) ||
     (lVar5 = __dynamic_cast(local_80,PTR_typeinfo_00394860,PTR_typeinfo_00394c28,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x0028bd10;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x0028bd10;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar8 = plStack_78;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x0028bd10:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar9 == 1) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00394cc8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_00394cc8), puVar3 = PTR_defaultValue_00394cc0,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_00394cc0 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00394cc8);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
                    /* try { // try from 0028bd4c to 0028bd5b has its CatchHandler @ 0028bfb0 */
    FUN_00280814(auStack_128,param_3,uVar10);
                    /* try { // try from 0028bd5c to 0028bd6b has its CatchHandler @ 0028bf98 */
    (*pcVar11)(&local_110,plVar1,auStack_128);
    if ((local_120 != (long *)0x0) &&
       (lVar5 = FUN_00255510(0xffffffffffffffff,local_120 + 1), lVar5 == 0)) {
      (**(code **)(*local_120 + 0x10))(local_120);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
                    /* try { // try from 0028bda0 to 0028bdab has its CatchHandler @ 0028bf80 */
    FUN_0028b7d4(param_1,param_3,local_110);
    if ((local_108 != (long *)0x0) &&
       (lVar5 = FUN_00255510(0xffffffffffffffff,local_108 + 1), lVar5 == 0)) {
      (**(code **)(*local_108 + 0x10))(local_108);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar5 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 0028be4c to 0028be5b has its CatchHandler @ 0028c444 */
    FUN_00287964(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0028be68 to 0028be7b has its CatchHandler @ 0028c424 */
    std::__ndk1::operator+("`",(basic_string *)&local_80);
                    /* try { // try from 0028be7c to 0028be8f has its CatchHandler @ 0028c40c */
    FUN_00263450(auStack_f8,&local_110,"` expected ");
                    /* try { // try from 0028be90 to 0028be9b has its CatchHandler @ 0028c3dc */
    std::__ndk1::to_string(1);
                    /* try { // try from 0028be9c to 0028beab has its CatchHandler @ 0028c3b8 */
    FUN_00264adc(auStack_e0,auStack_f8,auStack_128);
                    /* try { // try from 0028beac to 0028bebf has its CatchHandler @ 0028c394 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 0028bec0 to 0028becb has its CatchHandler @ 0028c370 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 0028becc to 0028bedb has its CatchHandler @ 0028c34c */
    FUN_00264adc(auStack_b0,auStack_c8,auStack_140);
                    /* try { // try from 0028bedc to 0028beef has its CatchHandler @ 0028c324 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 0028bef4 to 0028bf2f has its CatchHandler @ 0028c2c4 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028c46c  FUN_0028c46c =====

void FUN_0028c46c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394cd0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0028c4bc  FUN_0028c4bc =====

undefined * FUN_0028c4bc(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394cd8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028c4fc  FUN_0028c4fc =====

void FUN_0028c4fc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037dc20;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete((void *)param_1[3]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028c568  FUN_0028c568 =====

void FUN_0028c568(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037dc20;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028c5d0  FUN_0028c5d0 =====

undefined8 * FUN_0028c5d0(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x38);
  bVar2 = *(byte *)(param_1 + 8);
  *puVar4 = &PTR_FUN_0037dc20;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 0028c630 to 0028c633 has its CatchHandler @ 0028c66c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar4 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    puVar4[5] = *(undefined8 *)(param_1 + 0x28);
    puVar4[4] = uVar6;
    *(undefined4 *)(puVar4 + 6) = uVar1;
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028c694  FUN_0028c694 =====

void FUN_0028c694(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037dc20;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar4;
    param_2[1] = uVar3;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x30);
    param_2[5] = uVar4;
    param_2[4] = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028c72c  FUN_0028c72c =====

void FUN_0028c72c(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028c78c  FUN_0028c78c =====

void FUN_0028c78c(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028c7e8  FUN_0028c7e8 =====

void FUN_0028c7e8(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                 ulong *param_6)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  JSError *pJVar7;
  long *plVar8;
  ulong uVar9;
  IRuntime *pIVar10;
  code *pcVar11;
  undefined8 *local_140 [3];
  undefined8 local_128;
  long *local_120;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 *local_98 [3];
  basic_string local_80;
  undefined7 uStack_7f;
  long *plStack_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pIVar10 = (IRuntime *)*param_5;
  uVar9 = *param_6;
  local_98[0] = (undefined8 *)(**(code **)(*param_3 + 0x88))(param_3,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 0028c848 to 0028c857 has its CatchHandler @ 0028ce98 */
  (**(code **)(*param_3 + 0x160))(&local_80,param_3,local_98);
  if ((CONCAT71(uStack_7f,local_80) == 0) ||
     (lVar5 = __dynamic_cast(CONCAT71(uStack_7f,local_80),PTR_typeinfo_00394860,
                             PTR_typeinfo_00394c28,0xffffffffffffffff), lVar5 == 0)) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
    if (plStack_78 == (long *)0x0) goto joined_r0x0028c8d0;
  }
  else {
    if (plStack_78 == (long *)0x0) {
      plVar8 = (long *)0x0;
      goto joined_r0x0028c8d0;
    }
    FUN_00259a00(1,plStack_78 + 1);
    plVar8 = plStack_78;
  }
  lVar6 = FUN_00255510(0xffffffffffffffff,plStack_78 + 1);
  if (lVar6 == 0) {
    (**(code **)(*plStack_78 + 0x10))(plStack_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
joined_r0x0028c8d0:
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])();
  }
  if (uVar9 == 1) {
    pcVar11 = *(code **)(param_2 + 0x20);
    uVar9 = *(ulong *)(param_2 + 0x28);
    if (((*PTR_defaultValue_00394ca8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_defaultValue_00394ca8), puVar3 = PTR_defaultValue_00394ca0,
       iVar4 != 0)) {
      *(undefined4 *)PTR_defaultValue_00394ca0 = 0;
      __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
      __cxa_guard_release(PTR_defaultValue_00394ca8);
    }
    plVar1 = (long *)(lVar5 + ((long)uVar9 >> 1));
    if ((uVar9 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *plVar1);
    }
                    /* try { // try from 0028c90c to 0028c91b has its CatchHandler @ 0028cba4 */
    facebook::jsi::Value::asString(pIVar10);
                    /* try { // try from 0028c924 to 0028c933 has its CatchHandler @ 0028cb80 */
    (**(code **)(*param_3 + 0x120))(&local_80,param_3,local_140);
    if (local_140[0] != (undefined8 *)0x0) {
      (**(code **)*local_140[0])();
    }
                    /* try { // try from 0028c948 to 0028c957 has its CatchHandler @ 0028cb64 */
    (*pcVar11)(&local_128,plVar1,&local_80);
    if (((byte)local_80 & 1) != 0) {
      operator_delete(local_70);
    }
                    /* try { // try from 0028c96c to 0028c977 has its CatchHandler @ 0028cb4c */
    FUN_0028b7d4(param_1,param_3,local_128);
    if ((local_120 != (long *)0x0) &&
       (lVar5 = FUN_00255510(0xffffffffffffffff,local_120 + 1), lVar5 == 0)) {
      (**(code **)(*local_120 + 0x10))(local_120);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar5 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else {
                    /* try { // try from 0028ca18 to 0028ca27 has its CatchHandler @ 0028d038 */
    FUN_00287964(&local_80,*(undefined4 *)(param_2 + 0x30),param_2 + 8,lVar5);
    pJVar7 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0028ca34 to 0028ca47 has its CatchHandler @ 0028d018 */
    std::__ndk1::operator+("`",&local_80);
                    /* try { // try from 0028ca48 to 0028ca5b has its CatchHandler @ 0028d000 */
    FUN_00263450(auStack_f8,auStack_110,"` expected ");
                    /* try { // try from 0028ca5c to 0028ca67 has its CatchHandler @ 0028cfd0 */
    std::__ndk1::to_string(1);
                    /* try { // try from 0028ca68 to 0028ca77 has its CatchHandler @ 0028cfac */
    FUN_00264adc(auStack_e0,auStack_f8,&local_128);
                    /* try { // try from 0028ca78 to 0028ca8b has its CatchHandler @ 0028cf88 */
    FUN_00263450(auStack_c8,auStack_e0," arguments, but received ");
                    /* try { // try from 0028ca8c to 0028ca97 has its CatchHandler @ 0028cf64 */
    std::__ndk1::to_string(uVar9);
                    /* try { // try from 0028ca98 to 0028caa7 has its CatchHandler @ 0028cf40 */
    FUN_00264adc(auStack_b0,auStack_c8,local_140);
                    /* try { // try from 0028caa8 to 0028cabb has its CatchHandler @ 0028cf18 */
    FUN_00263450(local_98,auStack_b0,&DAT_001d5be0);
                    /* try { // try from 0028cac0 to 0028cafb has its CatchHandler @ 0028ceb8 */
    facebook::jsi::JSError::JSError(pJVar7,param_3,local_98);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar7,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028d060  FUN_0028d060 =====

void FUN_0028d060(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394cb0) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0028d0b0  FUN_0028d0b0 =====

undefined * FUN_0028d0b0(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394cb8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028d0f0  FUN_0028d0f0 =====

void FUN_0028d0f0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037d910;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == lVar2) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete((void *)param_1[3]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028d15c  FUN_0028d15c =====

void FUN_0028d15c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037d910;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028d1c4  FUN_0028d1c4 =====

undefined8 * FUN_0028d1c4(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x38);
  bVar2 = *(byte *)(param_1 + 8);
  *puVar4 = &PTR_FUN_0037d910;
  if ((bVar2 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = *(undefined8 *)(param_1 + 0x10);
    puVar4[1] = uVar7;
    puVar4[3] = uVar6;
  }
  else {
                    /* try { // try from 0028d224 to 0028d227 has its CatchHandler @ 0028d260 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (puVar4 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    puVar4[5] = *(undefined8 *)(param_1 + 0x28);
    puVar4[4] = uVar6;
    *(undefined4 *)(puVar4 + 6) = uVar1;
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028d288  FUN_0028d288 =====

void FUN_0028d288(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_2 = &PTR_FUN_0037d910;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar4;
    param_2[1] = uVar3;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_2 + 1),*(char **)(param_1 + 0x18),*(ulong *)(param_1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x30);
    param_2[5] = uVar4;
    param_2[4] = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028d320  FUN_0028d320 =====

void FUN_0028d320(long param_1)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028d380  FUN_0028d380 =====

void FUN_0028d380(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x18));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028d3dc  FUN_0028d3dc =====

void FUN_0028d3dc(long param_1,Runtime *param_2,long param_3,undefined8 *param_4,ulong *param_5)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined ***pppuVar7;
  JSError *pJVar8;
  runtime_error *this;
  long *plVar9;
  ulong uVar10;
  IRuntime *pIVar11;
  code *pcVar12;
  undefined8 *local_160 [3];
  long *local_148;
  long *local_140;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 *local_b8 [3];
  undefined **local_a0;
  long *plStack_98;
  long *local_90;
  undefined ***local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pIVar11 = (IRuntime *)*param_4;
  uVar10 = *param_5;
  local_b8[0] = (undefined8 *)
                (**(code **)(*(long *)param_2 + 0x88))(param_2,*(undefined8 *)(param_3 + 8));
                    /* try { // try from 0028d43c to 0028d44b has its CatchHandler @ 0028dcd8 */
  (**(code **)(*(long *)param_2 + 0x160))(&local_a0,param_2,local_b8);
  plVar1 = plStack_98;
  if ((local_a0 == (undefined **)0x0) ||
     (lVar5 = __dynamic_cast(local_a0,PTR_typeinfo_00394860,PTR_typeinfo_00394c28,0xffffffffffffffff
                            ), lVar5 == 0)) {
    lVar5 = 0;
    plVar9 = (long *)0x0;
    if (plVar1 != (long *)0x0) goto LAB_0028d498;
  }
  else if (plVar1 == (long *)0x0) {
    plVar9 = (long *)0x0;
  }
  else {
    FUN_00259a00(1,plVar1 + 1);
    plVar9 = plVar1;
LAB_0028d498:
    lVar6 = FUN_00255510(0xffffffffffffffff,plVar1 + 1);
    if (lVar6 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (local_b8[0] != (undefined8 *)0x0) {
    (**(code **)*local_b8[0])();
  }
  if (uVar10 != 1) {
                    /* try { // try from 0028d724 to 0028d733 has its CatchHandler @ 0028de90 */
    FUN_00287964(&local_a0,*(undefined4 *)(param_1 + 0x30),param_1 + 8,lVar5);
    pJVar8 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 0028d740 to 0028d753 has its CatchHandler @ 0028de70 */
    std::__ndk1::operator+("`",(basic_string *)&local_a0);
                    /* try { // try from 0028d754 to 0028d767 has its CatchHandler @ 0028de58 */
    FUN_00263450(auStack_118,auStack_130,"` expected ");
                    /* try { // try from 0028d768 to 0028d773 has its CatchHandler @ 0028de28 */
    std::__ndk1::to_string(1);
                    /* try { // try from 0028d774 to 0028d783 has its CatchHandler @ 0028de04 */
    FUN_00264adc(auStack_100,auStack_118,&local_148);
                    /* try { // try from 0028d784 to 0028d797 has its CatchHandler @ 0028dde0 */
    FUN_00263450(auStack_e8,auStack_100," arguments, but received ");
                    /* try { // try from 0028d798 to 0028d7a3 has its CatchHandler @ 0028ddbc */
    std::__ndk1::to_string(uVar10);
                    /* try { // try from 0028d7a4 to 0028d7b3 has its CatchHandler @ 0028dd94 */
    FUN_00264adc(auStack_d0,auStack_e8,local_160);
                    /* try { // try from 0028d7b4 to 0028d7c7 has its CatchHandler @ 0028dd58 */
    FUN_00263450(local_b8,auStack_d0,&DAT_001d5be0);
                    /* try { // try from 0028d7cc to 0028d807 has its CatchHandler @ 0028dcf8 */
    facebook::jsi::JSError::JSError(pJVar8,param_2,local_b8);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar8,PTR_typeinfo_00394858,PTR__JSError_00394840);
    }
    goto LAB_0028deb4;
  }
  pcVar12 = *(code **)(param_1 + 0x20);
  uVar10 = *(ulong *)(param_1 + 0x28);
  if (((*PTR_defaultValue_00394c38 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_defaultValue_00394c38), puVar3 = PTR_defaultValue_00394c30,
     iVar4 != 0)) {
    *(undefined4 *)PTR_defaultValue_00394c30 = 0;
    __cxa_atexit(PTR__Value_00394848,puVar3,&PTR_LOOP_0037bc90);
    __cxa_guard_release(PTR_defaultValue_00394c38);
  }
  plVar1 = (long *)(lVar5 + ((long)uVar10 >> 1));
  if ((uVar10 & 1) != 0) {
    pcVar12 = *(code **)(pcVar12 + *plVar1);
  }
                    /* try { // try from 0028d500 to 0028d50f has its CatchHandler @ 0028d9fc */
  facebook::jsi::Value::asString(pIVar11);
                    /* try { // try from 0028d518 to 0028d527 has its CatchHandler @ 0028d9d8 */
  (**(code **)(*(long *)param_2 + 0x120))(&local_a0,param_2,local_160);
  if (local_160[0] != (undefined8 *)0x0) {
    (**(code **)*local_160[0])();
  }
                    /* try { // try from 0028d53c to 0028d54b has its CatchHandler @ 0028d9bc */
  (*pcVar12)(&local_148,plVar1,&local_a0);
  if (((ulong)local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  plVar1 = local_140;
  iVar4 = (int)local_148[2];
  if (iVar4 == 2) {
                    /* try { // try from 0028d600 to 0028d60f has its CatchHandler @ 0028d9a8 */
    FUN_0026aee4(&local_a0,param_2,local_148);
                    /* try { // try from 0028d610 to 0028d61f has its CatchHandler @ 0028d954 */
    margelo::nitro::CommonGlobals::Promise::rejected(param_2,(Value *)&local_a0);
LAB_0028d620:
    facebook::jsi::Value::~Value((Value *)&local_a0);
  }
  else {
    if (iVar4 == 1) {
                    /* try { // try from 0028d5e0 to 0028d5eb has its CatchHandler @ 0028d9a8 */
      FUN_0028b7d4(&local_a0,param_2,*local_148);
                    /* try { // try from 0028d5ec to 0028d5fb has its CatchHandler @ 0028d958 */
      margelo::nitro::CommonGlobals::Promise::resolved(param_2,(Value *)&local_a0);
      goto LAB_0028d620;
    }
    if (iVar4 != 0) {
                    /* try { // try from 0028d858 to 0028d86b has its CatchHandler @ 0028d9a8 */
      FUN_00264e5c(&local_a0,PTR_typeinfo_name_00394c88,1);
      this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0028d878 to 0028d88b has its CatchHandler @ 0028d930 */
      std::__ndk1::operator+("Promise<",(basic_string *)&local_a0);
                    /* try { // try from 0028d88c to 0028d89f has its CatchHandler @ 0028d914 */
      FUN_00263450(local_b8,auStack_d0,"> has invalid state!");
                    /* try { // try from 0028d8a4 to 0028d8db has its CatchHandler @ 0028d8dc */
      std::runtime_error::runtime_error(this,(basic_string *)local_b8);
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
      }
      goto LAB_0028deb4;
    }
    if (local_140 == (long *)0x0) {
      local_90 = (long *)0x0;
      local_a0 = &PTR_FUN_0037d980;
      plStack_98 = local_148;
      local_80 = &local_a0;
    }
    else {
      FUN_00259a00(1,local_140 + 1);
      local_a0 = &PTR_FUN_0037d980;
      plStack_98 = local_148;
      local_90 = plVar1;
      FUN_00259a00(1,plVar1 + 1);
      local_80 = &local_a0;
      lVar5 = FUN_00255510(0xffffffffffffffff,plVar1 + 1);
      if (lVar5 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
                    /* try { // try from 0028d654 to 0028d667 has its CatchHandler @ 0028d96c */
    margelo::nitro::CommonGlobals::Promise::callConstructor(param_2,(function *)&local_a0);
    if (local_80 == &local_a0) {
      lVar5 = 4;
      pppuVar7 = &local_a0;
LAB_0028d688:
      (*(code *)(*pppuVar7)[lVar5])();
    }
    else if (local_80 != (undefined ***)0x0) {
      lVar5 = 5;
      pppuVar7 = local_80;
      goto LAB_0028d688;
    }
  }
  if ((local_140 != (long *)0x0) &&
     (lVar5 = FUN_00255510(0xffffffffffffffff,local_140 + 1), lVar5 == 0)) {
    (**(code **)(*local_140 + 0x10))(local_140);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if ((plVar9 != (long *)0x0) && (lVar5 = FUN_00255510(0xffffffffffffffff,plVar9 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0028deb4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028deb8  FUN_0028deb8 =====

void FUN_0028deb8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394c90) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0028df08  FUN_0028df08 =====

undefined * FUN_0028df08(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394c98;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028df48  FUN_0028df48 =====

void FUN_0028df48(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,param_1 + 1), lVar2 != 0)
     ) {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028dfd4  FUN_0028dfd4 =====

void FUN_0028dfd4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0037d980;
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028e06c  FUN_0028e06c =====

void FUN_0028e06c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[2];
  *param_1 = &PTR_FUN_0037d980;
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028e0f8  FUN_0028e0f8 =====

void FUN_0028e0f8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)operator_new(0x18);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_0037d980;
  puVar4[1] = uVar1;
  puVar4[2] = lVar2;
  if (lVar2 != 0) {
    FUN_00259a00(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


// ===== 0028e170  FUN_0028e170 =====

void FUN_0028e170(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0037d980;
  param_2[1] = uVar1;
  param_2[2] = lVar2;
  if (lVar2 != 0) {
    FUN_00259a00(1,lVar2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028e1d4  FUN_0028e1d4 =====

void FUN_0028e1d4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x10);
  if ((plVar4 == (long *)0x0) || (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      return;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(long *)(lVar1 + 0x28) == lVar3) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028e260  FUN_0028e260 =====

void FUN_0028e260(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)((long)param_1 + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028e2e0  FUN_0028e2e0 =====

void FUN_0028e2e0(undefined4 *param_1,long param_2,Runtime *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  Runtime *pRVar4;
  ulong uVar5;
  Runtime **ppRVar6;
  void *pvVar7;
  long *plVar8;
  long lVar9;
  Runtime *pRVar10;
  long lVar11;
  long lVar12;
  void *pvVar13;
  Runtime ***pppRVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  IRuntime *pIVar19;
  ulong uVar20;
  void *pvVar21;
  Runtime *local_148;
  Runtime *local_140;
  undefined8 *local_138;
  Runtime *local_130;
  Runtime *local_128;
  Runtime *local_110 [2];
  Runtime *local_100;
  Runtime *local_f8;
  Runtime *local_f0;
  Runtime *local_e0 [2];
  Runtime *local_d0;
  Runtime *local_c8;
  Runtime *local_c0;
  undefined8 local_b8;
  Runtime **local_b0 [2];
  long local_a0 [4];
  Runtime *local_80 [2];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  pIVar19 = (IRuntime *)*param_5;
  facebook::jsi::Value::asObject(pIVar19);
                    /* try { // try from 0028e32c to 0028e33b has its CatchHandler @ 0028ed28 */
  facebook::jsi::Object::asFunction((IRuntime *)&local_d0);
  if (local_d0 != (Runtime *)0x0) {
    (*(code *)**(undefined8 **)local_d0)();
  }
  local_130 = (Runtime *)0x0;
  local_128 = (Runtime *)0x0;
                    /* try { // try from 0028e354 to 0028e35f has its CatchHandler @ 0028ed08 */
  margelo::nitro::JSICache::getOrCreateCache(param_3);
                    /* try { // try from 0028e364 to 0028e36f has its CatchHandler @ 0028ecf8 */
  FUN_0026ce4c(&local_100,local_d0,&local_138);
                    /* try { // try from 0028e370 to 0028e37b has its CatchHandler @ 0028ece8 */
  FUN_0026d090(&local_130,&local_100);
  if (local_f8 != (Runtime *)0x0) {
    uVar5 = FUN_00255510(0xffffffffffffffff);
    if (uVar5 < 2) {
      if ((*(byte *)((long)local_f8 + 0x10) & 1) == 0) {
        if (local_100 != (Runtime *)0x0) {
          if (*(undefined8 **)local_100 != (undefined8 *)0x0) {
            (**(code **)**(undefined8 **)local_100)();
          }
          operator_delete(local_100);
        }
        local_100 = (Runtime *)0x0;
        *(undefined4 *)((long)local_f8 + 0x10) = 1;
        goto LAB_0028e3dc;
      }
      lVar11 = *(long *)local_f8;
      pRVar10 = local_f8;
    }
    else {
LAB_0028e3dc:
      lVar11 = *(long *)local_f8;
      pRVar10 = local_f8;
    }
    if (((lVar11 == 0) && (*(long *)((long)pRVar10 + 8) == 0)) && (pRVar10 != (Runtime *)0x0)) {
      std::__ndk1::mutex::~mutex((mutex *)((long)pRVar10 + 0x14));
      operator_delete(pRVar10);
    }
  }
  std::__ndk1::mutex::unlock();
  if ((local_c8 != (Runtime *)0x0) &&
     (lVar11 = FUN_00255510(0xffffffffffffffff,(long *)((long)local_c8 + 8)), lVar11 == 0)) {
    (**(code **)(*(long *)local_c8 + 0x10))(local_c8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pRVar4 = local_128;
  pRVar10 = local_130;
  local_130 = (Runtime *)0x0;
  local_128 = (Runtime *)0x0;
  local_f8 = pRVar10;
  local_f0 = pRVar4;
  local_100 = param_3;
                    /* try { // try from 0028e45c to 0028e467 has its CatchHandler @ 0028ecd8 */
  margelo::nitro::Dispatcher::getRuntimeGlobalDispatcher(param_3);
  if (local_140 != (Runtime *)0x0) {
    FUN_00259a00(1,local_140 + 0x10);
  }
  local_c8 = pRVar10;
  local_f8 = (Runtime *)0x0;
  local_f0 = (Runtime *)0x0;
  local_c0 = pRVar4;
  local_d0 = param_3;
  if (local_140 != (Runtime *)0x0) {
    FUN_00259a00(1,local_140 + 0x10);
  }
  local_80[0] = (Runtime *)0x0;
                    /* try { // try from 0028e4a0 to 0028e4a7 has its CatchHandler @ 0028ecb4 */
  local_80[0] = (Runtime *)operator_new(0x30);
  *(Runtime **)(local_80[0] + 0x10) = pRVar10;
  *(Runtime **)(local_80[0] + 0x18) = pRVar4;
  *(undefined ***)local_80[0] = &PTR_FUN_0037d9f0;
  *(Runtime **)(local_80[0] + 8) = param_3;
  local_c8 = (Runtime *)0x0;
  local_c0 = (Runtime *)0x0;
  *(Runtime **)(local_80[0] + 0x20) = local_148;
  *(Runtime **)(local_80[0] + 0x28) = local_140;
  local_b8 = 0;
  local_b0[0] = (Runtime **)0x0;
  if (((local_140 != (Runtime *)0x0) &&
      (std::__ndk1::__shared_weak_count::__release_weak(), local_140 != (Runtime *)0x0)) &&
     (lVar11 = FUN_00255510(0xffffffffffffffff,local_140 + 8), lVar11 == 0)) {
    (**(code **)(*(long *)local_140 + 0x10))(local_140);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (local_f0 != (Runtime *)0x0) {
    uVar5 = FUN_00255510(0xffffffffffffffff);
    pRVar10 = local_f8;
    if (uVar5 < 2) {
      if ((*(byte *)((long)local_f0 + 0x10) & 1) == 0) {
        if (local_f8 != (Runtime *)0x0) {
          if (*(undefined8 **)local_f8 != (undefined8 *)0x0) {
            (**(code **)**(undefined8 **)local_f8)();
          }
          operator_delete(pRVar10);
        }
        local_f8 = (Runtime *)0x0;
        *(undefined4 *)((long)local_f0 + 0x10) = 1;
        goto LAB_0028e568;
      }
      lVar11 = *(long *)local_f0;
      pRVar10 = local_f0;
    }
    else {
LAB_0028e568:
      lVar11 = *(long *)local_f0;
      pRVar10 = local_f0;
    }
    local_f0 = pRVar10;
    if (((lVar11 == 0) && (*(long *)((long)pRVar10 + 8) == 0)) && (pRVar10 != (Runtime *)0x0)) {
      std::__ndk1::mutex::~mutex((mutex *)((long)pRVar10 + 0x14));
      operator_delete(pRVar10);
    }
  }
  if (local_128 != (Runtime *)0x0) {
    uVar5 = FUN_00255510(0xffffffffffffffff);
    pRVar10 = local_130;
    if (uVar5 < 2) {
      if ((*(byte *)((long)local_128 + 0x10) & 1) == 0) {
        if (local_130 != (Runtime *)0x0) {
          if (*(undefined8 **)local_130 != (undefined8 *)0x0) {
            (**(code **)**(undefined8 **)local_130)();
          }
          operator_delete(pRVar10);
        }
        local_130 = (Runtime *)0x0;
        *(undefined4 *)((long)local_128 + 0x10) = 1;
        goto LAB_0028e5f8;
      }
      lVar11 = *(long *)local_128;
      pRVar10 = local_128;
    }
    else {
LAB_0028e5f8:
      lVar11 = *(long *)local_128;
      pRVar10 = local_128;
    }
    local_128 = pRVar10;
    if (((lVar11 == 0) && (*(long *)((long)pRVar10 + 8) == 0)) && (pRVar10 != (Runtime *)0x0)) {
      std::__ndk1::mutex::~mutex((mutex *)((long)pRVar10 + 0x14));
      operator_delete(pRVar10);
    }
  }
  if (local_138 != (undefined8 *)0x0) {
    (**(code **)*local_138)();
  }
  lVar11 = *(long *)(param_2 + 8);
  if (local_80[0] == (Runtime *)0x0) {
    ppRVar6 = local_e0;
LAB_0028e668:
    *ppRVar6 = (Runtime *)0x0;
  }
  else {
    if (local_80[0] != (Runtime *)local_a0) {
      ppRVar6 = local_80;
      local_e0[0] = local_80[0];
      goto LAB_0028e668;
    }
    local_e0[0] = (Runtime *)&local_100;
                    /* try { // try from 0028e680 to 0028e68b has its CatchHandler @ 0028ec90 */
    (**(code **)(local_a0[0] + 0x18))(local_a0,&local_100);
  }
  pRVar10 = local_e0[0];
  local_b0[0] = (Runtime **)0x0;
  if (local_e0[0] != (Runtime *)0x0) {
                    /* try { // try from 0028e698 to 0028e69f has its CatchHandler @ 0028ec9c */
    ppRVar6 = (Runtime **)operator_new(0x40);
    *ppRVar6 = (Runtime *)&PTR_FUN_0037db10;
    if (pRVar10 == (Runtime *)&local_100) {
      ppRVar6[6] = (Runtime *)(ppRVar6 + 2);
                    /* try { // try from 0028e6d4 to 0028e6e3 has its CatchHandler @ 0028ec8c */
      (**(code **)(local_100 + 0x18))(&local_100);
      local_b0[0] = ppRVar6;
    }
    else {
      ppRVar6[6] = pRVar10;
      local_e0[0] = (Runtime *)0x0;
      local_b0[0] = ppRVar6;
    }
  }
                    /* try { // try from 0028e6e8 to 0028e6ef has its CatchHandler @ 0028ecac */
  std::__ndk1::mutex::lock();
  if (*(int *)(lVar11 + 0x10) == 1) {
    if (local_b0[0] != (Runtime **)0x0) {
                    /* try { // try from 0028e710 to 0028e7b3 has its CatchHandler @ 0028edb8 */
      (**(code **)(*local_b0[0] + 0x30))(local_b0[0],lVar11);
LAB_0028e8ec:
      std::__ndk1::mutex::unlock();
      if (local_b0[0] == &local_d0) {
        lVar11 = 4;
        ppRVar6 = &local_d0;
LAB_0028e950:
        (**(code **)(*ppRVar6 + lVar11 * 8))();
      }
      else if (local_b0[0] != (Runtime **)0x0) {
        lVar11 = 5;
        ppRVar6 = local_b0[0];
        goto LAB_0028e950;
      }
      if (local_e0[0] == (Runtime *)&local_100) {
        lVar11 = 4;
        pRVar10 = (Runtime *)&local_100;
LAB_0028e980:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_e0[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_e0[0];
        goto LAB_0028e980;
      }
      if (local_80[0] == (Runtime *)local_a0) {
        lVar11 = 4;
        pRVar10 = (Runtime *)local_a0;
LAB_0028e9b0:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_80[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_80[0];
        goto LAB_0028e9b0;
      }
      FUN_0026c2bc(local_a0,param_3,pIVar19 + 0x10);
      lVar11 = *(long *)(param_2 + 8);
      if (local_80[0] == (Runtime *)0x0) {
        ppRVar6 = local_110;
LAB_0028e9f8:
        *ppRVar6 = (Runtime *)0x0;
      }
      else {
        if (local_80[0] != (Runtime *)local_a0) {
          ppRVar6 = local_80;
          local_110[0] = local_80[0];
          goto LAB_0028e9f8;
        }
        local_110[0] = (Runtime *)&local_130;
                    /* try { // try from 0028ea10 to 0028ea1b has its CatchHandler @ 0028ec88 */
        (**(code **)(local_a0[0] + 0x18))(local_a0,&local_130);
      }
      pRVar10 = local_110[0];
      local_b0[0] = (Runtime **)0x0;
      if (local_110[0] != (Runtime *)0x0) {
                    /* try { // try from 0028ea28 to 0028ea2f has its CatchHandler @ 0028ec94 */
        ppRVar6 = (Runtime **)operator_new(0x40);
        *ppRVar6 = (Runtime *)&PTR_FUN_00384d40;
        if (pRVar10 == (Runtime *)&local_130) {
          ppRVar6[6] = (Runtime *)(ppRVar6 + 2);
                    /* try { // try from 0028ea64 to 0028ea73 has its CatchHandler @ 0028ec84 */
          (**(code **)(local_130 + 0x18))(&local_130);
          local_b0[0] = ppRVar6;
        }
        else {
          ppRVar6[6] = pRVar10;
          local_110[0] = (Runtime *)0x0;
          local_b0[0] = ppRVar6;
        }
      }
                    /* try { // try from 0028ea78 to 0028ea7f has its CatchHandler @ 0028eca4 */
      std::__ndk1::mutex::lock();
      if (*(int *)(lVar11 + 0x10) == 2) {
        if (local_b0[0] == (Runtime **)0x0) goto LAB_0028ec30;
                    /* try { // try from 0028ea9c to 0028eadf has its CatchHandler @ 0028ed4c */
        (**(code **)(*local_b0[0] + 0x30))(local_b0[0],lVar11);
      }
      else {
        uVar5 = *(ulong *)(lVar11 + 0x38);
        if (uVar5 < *(ulong *)(lVar11 + 0x40)) {
          if (local_b0[0] == (Runtime **)0x0) {
            pppRVar14 = (Runtime ***)(uVar5 + 0x20);
LAB_0028eae8:
            *pppRVar14 = (Runtime **)0x0;
          }
          else {
            if (local_b0[0] != &local_d0) {
              pppRVar14 = local_b0;
              *(Runtime ***)(uVar5 + 0x20) = local_b0[0];
              goto LAB_0028eae8;
            }
            *(ulong *)(uVar5 + 0x20) = uVar5;
                    /* try { // try from 0028eb00 to 0028eb07 has its CatchHandler @ 0028ec78 */
            (**(code **)(*local_b0[0] + 0x18))(local_b0[0],uVar5);
          }
          lVar9 = uVar5 + 0x30;
        }
        else {
          lVar9 = FUN_0026c714(lVar11 + 0x30,&local_d0);
        }
        *(long *)(lVar11 + 0x38) = lVar9;
      }
      std::__ndk1::mutex::unlock();
      if (local_b0[0] == &local_d0) {
        lVar11 = 4;
        ppRVar6 = &local_d0;
LAB_0028eb44:
        (**(code **)(*ppRVar6 + lVar11 * 8))();
      }
      else if (local_b0[0] != (Runtime **)0x0) {
        lVar11 = 5;
        ppRVar6 = local_b0[0];
        goto LAB_0028eb44;
      }
      if (local_110[0] == (Runtime *)&local_130) {
        lVar11 = 4;
        pRVar10 = (Runtime *)&local_130;
LAB_0028eb74:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_110[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_110[0];
        goto LAB_0028eb74;
      }
      *param_1 = 0;
      if (local_80[0] == (Runtime *)local_a0) {
        lVar11 = 4;
        pRVar10 = (Runtime *)local_a0;
LAB_0028eba8:
        (**(code **)(*(Runtime **)pRVar10 + lVar11 * 8))();
      }
      else if (local_80[0] != (Runtime *)0x0) {
        lVar11 = 5;
        pRVar10 = local_80[0];
        goto LAB_0028eba8;
      }
      if (*(long *)(lVar3 + 0x28) == local_70) {
        return;
      }
      goto LAB_0028ee74;
    }
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_0028ee74;
                    /* try { // try from 0028ec2c to 0028ec2f has its CatchHandler @ 0028edb8 */
    FUN_0025cd00();
LAB_0028ec30:
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_0028ee74;
                    /* try { // try from 0028ec44 to 0028ec47 has its CatchHandler @ 0028ed4c */
    FUN_0025cd00();
LAB_0028ec48:
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_0028ee74;
                    /* try { // try from 0028ec5c to 0028ec77 has its CatchHandler @ 0028edb8 */
    FUN_0028ef08();
  }
  else {
    uVar5 = *(ulong *)(lVar11 + 0x20);
    pppRVar14 = local_b0;
    if (uVar5 < *(ulong *)(lVar11 + 0x28)) {
      if (local_b0[0] == (Runtime **)0x0) {
        pppRVar14 = (Runtime ***)(uVar5 + 0x20);
LAB_0028e7bc:
        *pppRVar14 = (Runtime **)0x0;
      }
      else {
        if (local_b0[0] != &local_d0) {
          *(Runtime ***)(uVar5 + 0x20) = local_b0[0];
          goto LAB_0028e7bc;
        }
        *(ulong *)(uVar5 + 0x20) = uVar5;
                    /* try { // try from 0028e810 to 0028e817 has its CatchHandler @ 0028ec80 */
        (**(code **)(*local_b0[0] + 0x18))(local_b0[0],uVar5);
      }
      lVar9 = uVar5 + 0x30;
LAB_0028e8e8:
      *(long *)(lVar11 + 0x20) = lVar9;
      goto LAB_0028e8ec;
    }
    uVar17 = *(ulong *)(lVar11 + 0x18);
    lVar9 = (long)(uVar5 - uVar17) >> 4;
    uVar20 = lVar9 * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar20) goto LAB_0028ec48;
    lVar12 = (long)(*(ulong *)(lVar11 + 0x28) - uVar17) >> 4;
    uVar16 = lVar12 * 0x5555555555555556;
    if (uVar16 < uVar20 || uVar16 - uVar20 == 0) {
      uVar16 = uVar20;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar12 * -0x5555555555555555)) {
      uVar16 = 0x555555555555555;
    }
    if (uVar16 == 0) {
      pvVar7 = (void *)0x0;
LAB_0028e7c8:
      pvVar21 = (void *)((long)pvVar7 + lVar9 * 0x10);
      if (local_b0[0] == (Runtime **)0x0) {
        pppRVar14 = (Runtime ***)((long)pvVar21 + 0x20);
LAB_0028e7f8:
        *pppRVar14 = (Runtime **)0x0;
      }
      else {
        if (local_b0[0] != &local_d0) {
          *(Runtime ***)((long)pvVar21 + 0x20) = local_b0[0];
          goto LAB_0028e7f8;
        }
        *(void **)((long)pvVar21 + 0x20) = pvVar21;
                    /* try { // try from 0028e82c to 0028e837 has its CatchHandler @ 0028ec7c */
        (**(code **)(local_d0 + 0x18))(&local_d0,pvVar21);
        uVar17 = *(ulong *)(lVar11 + 0x18);
        uVar5 = *(ulong *)(lVar11 + 0x20);
      }
      pvVar13 = pvVar21;
      if (uVar5 != uVar17) {
        lVar9 = 0;
        uVar20 = uVar5;
        do {
          lVar12 = uVar5 + lVar9;
          uVar1 = (long)pvVar21 + lVar9;
          lVar15 = *(long *)(lVar12 + -0x10);
          if (lVar15 == 0) {
LAB_0028e858:
            *(undefined8 *)(uVar1 - 0x10) = 0;
          }
          else {
            if (lVar12 + -0x30 != lVar15) {
              *(long *)(uVar1 - 0x10) = lVar15;
              uVar1 = uVar20;
              goto LAB_0028e858;
            }
            *(ulong *)(uVar1 - 0x10) = uVar1 - 0x30;
                    /* try { // try from 0028e8ac to 0028e8af has its CatchHandler @ 0028ed48 */
            (**(code **)(**(long **)(lVar12 + -0x10) + 0x18))();
          }
          lVar9 = lVar9 + -0x30;
          uVar20 = uVar20 - 0x30;
        } while (uVar5 + lVar9 != uVar17);
        pvVar13 = (void *)((long)pvVar21 + lVar9);
      }
      lVar9 = (long)pvVar21 + 0x30;
      plVar2 = *(long **)(lVar11 + 0x18);
      plVar18 = *(long **)(lVar11 + 0x20);
      *(void **)(lVar11 + 0x18) = pvVar13;
      *(long *)(lVar11 + 0x20) = lVar9;
      *(void **)(lVar11 + 0x28) = (void *)((long)pvVar7 + uVar16 * 0x30);
joined_r0x0028e8d8:
      if (plVar18 != plVar2) {
        plVar8 = (long *)plVar18[-2];
        plVar18 = plVar18 + -6;
        if (plVar18 != plVar8) goto code_r0x0028e93c;
        lVar12 = 4;
        plVar8 = plVar18;
        goto LAB_0028e918;
      }
      if (plVar2 != (long *)0x0) {
        operator_delete(plVar2);
      }
      goto LAB_0028e8e8;
    }
    if (uVar16 < 0x555555555555556) {
      pvVar7 = operator_new(uVar16 * 0x30);
      goto LAB_0028e7c8;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    FUN_00260a2c();
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0028eb00 with catch @ 0028ec78 */
    FUN_0025ad9c();
  }
LAB_0028ee74:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0028e93c:
  if (plVar8 != (long *)0x0) {
    lVar12 = 5;
LAB_0028e918:
    (**(code **)(*plVar8 + lVar12 * 8))();
  }
  goto joined_r0x0028e8d8;
}


// ===== 0028ee78  FUN_0028ee78 =====

void FUN_0028ee78(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394c78) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0028eec8  FUN_0028eec8 =====

undefined * FUN_0028eec8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394c80;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028ef08  FUN_0028ef08 =====

void FUN_0028ef08(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    FUN_00260abc("vector");
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028ef40  FUN_0028ef40 =====

void FUN_0028ef40(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  plVar3 = param_1 + 2;
  plVar2 = (long *)param_1[6];
  *param_1 = &PTR_FUN_0037db10;
  if (plVar2 == plVar3) {
    lVar4 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == lVar5) {
        return;
      }
      goto LAB_0028efcc;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x0028efac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_0028efcc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028efd0  FUN_0028efd0 =====

void FUN_0028efd0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar3 = param_1 + 2;
  plVar2 = (long *)param_1[6];
  *param_1 = &PTR_FUN_0037db10;
  if (plVar2 == plVar3) {
    lVar5 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_0028f02c;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_0028f02c:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028f054  FUN_0028f054 =====

undefined8 * FUN_0028f054(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x40);
  plVar3 = *(long **)(param_1 + 0x30);
  *puVar2 = &PTR_FUN_0037db10;
  if (plVar3 != (long *)0x0) {
    if (plVar3 == (long *)(param_1 + 0x10)) {
      lVar5 = *plVar3;
      puVar2[6] = puVar2 + 2;
      (**(code **)(lVar5 + 0x18))();
      goto LAB_0028f0cc;
    }
                    /* try { // try from 0028f0b0 to 0028f0cb has its CatchHandler @ 0028f0f4 */
    plVar3 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  puVar2[6] = plVar3;
LAB_0028f0cc:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028f11c  FUN_0028f11c =====

void FUN_0028f11c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_0037db10;
  if (plVar4 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar4 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
      if (*(long *)(lVar1 + 0x28) == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x0028f1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
        return;
      }
      goto LAB_0028f1c8;
    }
    uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
    param_2[6] = uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
LAB_0028f1c8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028f1cc  FUN_0028f1cc =====

void FUN_0028f1cc(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  plVar3 = (long *)(param_1 + 0x10);
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == plVar3) {
    lVar4 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
        return;
      }
      goto LAB_0028f24c;
    }
    lVar4 = 5;
    plVar3 = plVar2;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0028f22c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + lVar4 * 8))();
    return;
  }
LAB_0028f24c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028f250  FUN_0028f250 =====

void FUN_0028f250(void *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)((long)param_1 + 0x10);
  plVar2 = *(long **)((long)param_1 + 0x30);
  if (plVar2 == plVar3) {
    lVar5 = 4;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_0028f2a0;
    lVar5 = 5;
    plVar3 = plVar2;
  }
  (**(code **)(*plVar3 + lVar5 * 8))();
LAB_0028f2a0:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028f2c8  FUN_0028f2c8 =====

void FUN_0028f2c8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_38;
  long *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = *param_2;
  local_30 = (long *)param_2[1];
  if (local_30 != (long *)0x0) {
    FUN_00259a00(1,local_30 + 1);
  }
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0028f378 to 0028f37b has its CatchHandler @ 0028f37c */
      uVar4 = FUN_0025cd00();
                    /* catch() { ... } // from try @ 0028f310 with catch @ 0028f37c
                       catch() { ... } // from try @ 0028f378 with catch @ 0028f37c */
      FUN_0028a820(local_30);
      if (*(long *)(lVar1 + 0x28) == local_28) {
        FUN_00255d34(uVar4);
      }
    }
  }
  else {
                    /* try { // try from 0028f310 to 0028f317 has its CatchHandler @ 0028f37c */
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_38);
    plVar2 = local_30;
    if ((local_30 != (long *)0x0) &&
       (lVar3 = FUN_00255510(0xffffffffffffffff,local_30 + 1), lVar3 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028f3a8  FUN_0028f3a8 =====

void FUN_0028f3a8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394c68) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0028f3f8  FUN_0028f3f8 =====

undefined * FUN_0028f3f8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394c70;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028f438  FUN_0028f438 =====

void FUN_0028f438(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028f48c  FUN_0028f48c =====

void FUN_0028f48c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037d9f0;
  if (param_1[5] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028f4ec  FUN_0028f4ec =====

void FUN_0028f4ec(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_0037d9f0;
  if (param_1[5] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0026d198(param_1 + 2);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028f554  FUN_0028f554 =====

undefined8 * FUN_0028f554(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x18);
  *puVar2 = &PTR_FUN_0037d9f0;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = lVar3;
  if (lVar3 != 0) {
    FUN_00255510(1);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = lVar3;
  if (lVar3 != 0) {
    FUN_00259a00(1,lVar3 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028f5f0  FUN_0028f5f0 =====

void FUN_0028f5f0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0037d9f0;
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[2] = uVar4;
  param_2[3] = lVar2;
  if (lVar2 != 0) {
    FUN_00255510(1);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = lVar2;
  if (lVar2 != 0) {
    FUN_00259a00(1,lVar2 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028f684  FUN_0028f684 =====

void FUN_0028f684(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x28) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    FUN_0026d198(param_1 + 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028f6d8  FUN_0028f6d8 =====

void FUN_0028f6d8(void *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)((long)param_1 + 0x28) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0026d198((long)param_1 + 0x10);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028f734  FUN_0028f734 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0028f734(long param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  ulong *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  ulong local_98;
  long *plStack_90;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  ulong *local_60;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar1 = *param_2;
  plVar2 = (long *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  if (plVar2 != (long *)0x0) {
    FUN_00259a00(1,plVar2 + 1);
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    plVar5 = (long *)0x0;
LAB_0028f824:
                    /* try { // try from 0028f824 to 0028f82b has its CatchHandler @ 0028f9d8 */
    local_70 = (undefined8 *)operator_new(0x70);
    puVar4 = PTR_typeinfo_name_00394c40;
    uStack_78 = _UNK_001d7ec8;
    local_80 = _DAT_001d7ec0;
    *(undefined2 *)(local_70 + 0xc) = 0x45;
    uVar9 = *(undefined8 *)(puVar4 + 0x20);
    uVar11 = *(undefined8 *)(puVar4 + 0x38);
    uVar10 = *(undefined8 *)(puVar4 + 0x30);
    local_70[5] = *(undefined8 *)(puVar4 + 0x28);
    local_70[4] = uVar9;
    local_70[7] = uVar11;
    local_70[6] = uVar10;
    uVar9 = *(undefined8 *)(puVar4 + 0x40);
    uVar11 = *(undefined8 *)(puVar4 + 0x58);
    uVar10 = *(undefined8 *)(puVar4 + 0x50);
    local_70[9] = *(undefined8 *)(puVar4 + 0x48);
    local_70[8] = uVar9;
    local_70[0xb] = uVar11;
    local_70[10] = uVar10;
    uVar11 = *(undefined8 *)puVar4;
    uVar10 = *(undefined8 *)(puVar4 + 0x18);
    uVar9 = *(undefined8 *)(puVar4 + 0x10);
    local_70[1] = *(undefined8 *)(puVar4 + 8);
    *local_70 = uVar11;
    local_70[3] = uVar10;
    local_70[2] = uVar9;
                    /* try { // try from 0028f864 to 0028f873 has its CatchHandler @ 0028f9c0 */
    margelo::nitro::TypeInfo::demangleName((basic_string *)&local_80,true);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    plVar8 = plVar2;
    if (plVar5 == (long *)0x0) goto LAB_0028f8f4;
  }
  else {
    plVar5 = (long *)std::__ndk1::__shared_weak_count::lock();
    if ((plVar5 == (long *)0x0) || (plVar8 = *(long **)(param_1 + 0x20), plVar8 == (long *)0x0))
    goto LAB_0028f824;
    uStack_a8 = *(ulong *)(param_1 + 0x10);
    local_b0 = *(ulong *)(param_1 + 8);
    local_a0 = *(void **)(param_1 + 0x18);
    if (local_a0 != (void *)0x0) {
      FUN_00255510(1);
    }
    local_60 = (ulong *)0x0;
    local_98 = uVar1;
    plStack_90 = plVar2;
                    /* try { // try from 0028f7b4 to 0028f7bb has its CatchHandler @ 0028f9ac */
    local_60 = (ulong *)operator_new(0x30);
    local_60[5] = (ulong)plVar2;
    *local_60 = (ulong)&PTR_FUN_0037da80;
    local_60[2] = uStack_a8;
    local_60[1] = local_b0;
    *(undefined8 *)((ulong)&local_b0 | 8) = 0;
    ((undefined8 *)((ulong)&local_b0 | 8))[1] = 0;
    local_60[3] = (ulong)local_a0;
    local_60[4] = uVar1;
    local_98 = 0;
    plStack_90 = (long *)0x0;
                    /* try { // try from 0028f7f8 to 0028f807 has its CatchHandler @ 0028f974 */
    (**(code **)(*plVar8 + 0x18))(plVar8,&local_80);
    if (local_60 == &local_80) {
      lVar7 = 4;
      puVar6 = &local_80;
LAB_0028f8bc:
      (**(code **)(*puVar6 + lVar7 * 8))();
    }
    else if (local_60 != (ulong *)0x0) {
      lVar7 = 5;
      puVar6 = local_60;
      goto LAB_0028f8bc;
    }
    plVar8 = (long *)0x0;
  }
  lVar7 = FUN_00255510(0xffffffffffffffff,plVar5 + 1);
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
LAB_0028f8f4:
  if ((plVar8 != (long *)0x0) && (lVar7 = FUN_00255510(0xffffffffffffffff,plVar8 + 1), lVar7 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if ((plVar2 != (long *)0x0) && (lVar7 = FUN_00255510(0xffffffffffffffff,plVar2 + 1), lVar7 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028fa14  FUN_0028fa14 =====

void FUN_0028fa14(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394c40) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 0028fa64  FUN_0028fa64 =====

undefined * FUN_0028fa64(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394c48;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028faa4  FUN_0028faa4 =====

void FUN_0028faa4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x20);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    FUN_0026d198(param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028fb24  FUN_0028fb24 =====

void FUN_0028fb24(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[5];
  *param_1 = &PTR_FUN_0037da80;
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    FUN_0026d198(param_1 + 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028fbb0  FUN_0028fbb0 =====

void FUN_0028fbb0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_1[5];
  *param_1 = &PTR_FUN_0037da80;
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0026d198(param_1 + 2);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028fc44  FUN_0028fc44 =====

undefined8 * FUN_0028fc44(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x18);
  *puVar2 = &PTR_FUN_0037da80;
  puVar2[2] = uVar6;
  puVar2[1] = uVar5;
  puVar2[3] = lVar3;
  if (lVar3 != 0) {
    FUN_00255510(1);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = lVar3;
  if (lVar3 != 0) {
    FUN_00259a00(1,lVar3 + 8);
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028fce0  FUN_0028fce0 =====

void FUN_0028fce0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_0037da80;
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[2] = uVar4;
  param_2[3] = lVar2;
  if (lVar2 != 0) {
    FUN_00255510(1);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = lVar2;
  if (lVar2 != 0) {
    FUN_00259a00(1,lVar2 + 8);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028fd74  FUN_0028fd74 =====

void FUN_0028fd74(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x28);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    FUN_0026d198(param_1 + 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028fdf4  FUN_0028fdf4 =====

void FUN_0028fdf4(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)((long)param_1 + 0x28);
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00255510(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0026d198((long)param_1 + 0x10);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    operator_delete(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0028fe7c  FUN_0028fe7c =====

void FUN_0028fe7c(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  runtime_error *this;
  undefined8 uVar5;
  long *plVar6;
  Value aVStack_90 [16];
  Value aVStack_80 [24];
  undefined4 local_68 [6];
  Value aVStack_50 [24];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  plVar6 = *(long **)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if ((*(long *)(param_1 + 0x10) == 0) || ((*(byte *)(*(long *)(param_1 + 0x18) + 0x10) & 1) != 0))
  {
                    /* try { // try from 0028ff84 to 0028ff97 has its CatchHandler @ 00290094 */
    FUN_00264e5c(local_68,PTR_typeinfo_name_00394c50,1);
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0028ffa4 to 0028ffb7 has its CatchHandler @ 00290074 */
    std::__ndk1::operator+("Cannot call ",(basic_string *)local_68);
                    /* try { // try from 0028ffb8 to 0028ffcb has its CatchHandler @ 0029005c */
    FUN_00263450(aVStack_50,aVStack_80," - the underlying `jsi::Function` has already been deleted!"
                );
                    /* try { // try from 0028ffd0 to 00290007 has its CatchHandler @ 00290028 */
    std::runtime_error::runtime_error(this,(basic_string *)aVStack_50);
    if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00394850,PTR__runtime_error_00394838);
    }
  }
  else {
    plVar1 = *(long **)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 0028fecc to 0028fed7 has its CatchHandler @ 00290094 */
    FUN_0028b7d4(aVStack_90,plVar1,uVar5);
    facebook::jsi::Value::Value(aVStack_50,aVStack_90);
    local_68[0] = 0;
                    /* try { // try from 0028fef0 to 0028ff0b has its CatchHandler @ 00290008 */
    (**(code **)(*plVar1 + 0x280))(aVStack_80,plVar1,uVar2,local_68,aVStack_50,1);
    facebook::jsi::Value::~Value((Value *)local_68);
    facebook::jsi::Value::~Value(aVStack_50);
    facebook::jsi::Value::~Value(aVStack_90);
    facebook::jsi::Value::~Value(aVStack_80);
    if ((plVar6 != (long *)0x0) &&
       (lVar4 = FUN_00255510(uVar5,0xffffffffffffffff,plVar6 + 1), lVar4 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 002900c0  FUN_002900c0 =====

void FUN_002900c0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00394c58) {
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00290110  FUN_00290110 =====

undefined * FUN_00290110(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    return PTR_typeinfo_00394c60;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00290150  margelo::nitro::rive::HybridRiveFontConfigSpec::loadHybridMethods =====

/* virtual thunk to margelo::nitro::rive::HybridRiveFontConfigSpec::loadHybridMethods() */

void __thiscall
margelo::nitro::rive::HybridRiveFontConfigSpec::loadHybridMethods(HybridRiveFontConfigSpec *this)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x28)) {
    loadHybridMethods(this + *(long *)(*(long *)this + -0x20));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


