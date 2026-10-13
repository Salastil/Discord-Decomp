// ===== 0069b54c  FUN_0069b54c =====

void FUN_0069b54c(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if (*param_1 != 0) {
    __rustc::__rust_dealloc(param_1[1],*param_1 << 2,4);
  }
  lVar4 = param_1[4];
  lVar5 = param_1[5];
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)(lVar4 + 8);
    do {
      if (puVar6[-1] != 0) {
        __rustc::__rust_dealloc(*puVar6,puVar6[-1] << 2,4);
      }
      lVar5 = lVar5 + -1;
      puVar6 = puVar6 + 3;
    } while (lVar5 != 0);
  }
  if (param_1[3] != 0) {
    __rustc::__rust_dealloc(lVar4,param_1[3] * 0x18,8);
  }
  if (param_1[6] != 0) {
    __rustc::__rust_dealloc(param_1[7],param_1[6] << 2,4);
  }
  plVar3 = (long *)param_1[10];
  if (plVar3 != (long *)0x0) {
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+aho_corasick::ahocorasick::AcAutomaton>>
      ::drop_slow(param_1 + 10);
      return;
    }
  }
  return;
}


// ===== 0069b628  FUN_0069b628 =====

void FUN_0069b628(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 != 0) {
    __rustc::__rust_dealloc(param_1[1],*param_1 << 2,4);
  }
  if (param_1[3] != 0) {
    __rustc::__rust_dealloc(param_1[4],param_1[3] << 2,4);
  }
  plVar3 = (long *)param_1[7];
  if (plVar3 != (long *)0x0) {
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+aho_corasick::ahocorasick::AcAutomaton>>
      ::drop_slow(param_1 + 7);
      return;
    }
  }
  return;
}


// ===== 0069b6a4  FUN_0069b6a4 =====

void FUN_0069b6a4(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 != 0) {
    __rustc::__rust_dealloc(param_1[1],*param_1 * 0x14,4);
  }
  if (param_1[3] != 0) {
    __rustc::__rust_dealloc(param_1[4],param_1[3] * 9,1);
  }
  if (param_1[6] != 0) {
    __rustc::__rust_dealloc(param_1[7],param_1[6] << 2,4);
  }
  if (param_1[9] != 0) {
    __rustc::__rust_dealloc(param_1[10],param_1[9] << 3,4);
  }
  if (param_1[0xc] != 0) {
    __rustc::__rust_dealloc(param_1[0xd],param_1[0xc] << 2,4);
  }
  plVar3 = (long *)param_1[0xf];
  if (plVar3 != (long *)0x0) {
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+aho_corasick::ahocorasick::AcAutomaton>>
      ::drop_slow(param_1 + 0xf);
      return;
    }
  }
  return;
}


// ===== 0069b76c  FUN_0069b76c =====

void FUN_0069b76c(undefined8 *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  undefined **ppuVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 local_b0;
  long lStack_a8;
  ulong local_a0;
  long *plStack_98;
  ulong local_90;
  ulong uStack_88;
  long *local_80;
  undefined8 local_78;
  long lStack_70;
  ulong local_68;
  
  plVar14 = (long *)*param_2;
  if (plVar14[4] == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: patterns.len() >= 1",0x25,
               &PTR_s__home_runner__cargo_registry_src_00922fb0);
  }
  uVar10 = plVar14[8];
  lVar7 = uVar10 - 1;
  uVar11 = uVar10;
  if (lVar7 != 0) {
    if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: hash_len >= 1",0x1f,
                 &PTR_s__home_runner__cargo_registry_src_00922fc8);
    }
    uVar11 = 1;
    do {
      uVar11 = uVar11 << 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  do {
    lVar7 = *plVar14;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar4) {
      *plVar14 = lVar7 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x69b978);
    (*pcVar5)();
  }
  local_b0 = 0;
  lStack_a8 = 8;
  local_a0 = 0;
                    /* try { // try from 0069b7e4 to 0069b7f3 has its CatchHandler @ 0069b978 */
  local_80 = plVar14;
  FUN_0068e510(&local_78,&local_b0,0x40);
  uVar6 = plVar14[4];
  lStack_a8 = lStack_70;
  local_b0 = local_78;
  local_a0 = local_68;
  plStack_98 = plVar14;
  local_90 = uVar10;
  uStack_88 = uVar11;
  if (uVar6 != 0) {
    uVar11 = 0;
    ppuVar12 = &PTR_s__home_runner__cargo_registry_src_009235e8;
    do {
      uVar8 = plVar14[7];
      if (uVar8 <= uVar11) {
LAB_0069b958:
                    /* try { // try from 0069b958 to 0069b973 has its CatchHandler @ 0069b9a8 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check(uVar11,uVar8,ppuVar12);
      }
      uVar2 = *(uint *)(plVar14[6] + uVar11 * 4);
      uVar15 = (ulong)uVar2;
      if (uVar6 <= uVar15) {
        ppuVar12 = &PTR_s__home_runner__cargo_registry_src_00923010;
        uVar8 = uVar6;
        uVar11 = uVar15;
        goto LAB_0069b958;
      }
      lVar7 = plVar14[3] + uVar15 * 0x18;
      uVar6 = *(ulong *)(lVar7 + 0x10);
      if (uVar6 < uVar10) {
                    /* try { // try from 0069b8fc to 0069b90f has its CatchHandler @ 0069b9a8 */
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,uVar10,uVar6,&PTR_s__home_runner__cargo_registry_src_00922ff8);
      }
      uVar6 = 0;
      uVar11 = uVar11 + 1;
      pbVar9 = *(byte **)(lVar7 + 8);
      uVar8 = uVar10;
      do {
        uVar8 = uVar8 - 1;
        uVar6 = (ulong)*pbVar9 + uVar6 * 2;
        pbVar9 = pbVar9 + 1;
      } while (uVar8 != 0);
      uVar8 = uVar6 & 0x3f;
      if (local_a0 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar8,local_a0,&PTR_s__home_runner__cargo_registry_src_00922fe0);
      }
      plVar13 = (long *)(lStack_a8 + uVar8 * 0x18);
      lVar7 = plVar13[2];
      if (lVar7 == *plVar13) {
                    /* try { // try from 0069b8c0 to 0069b8c7 has its CatchHandler @ 0069b9a4 */
        <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<(usize,aho_corasick::util::primitives::PatternID)>>
        ::grow_one(plVar13);
      }
      puVar1 = (ulong *)(plVar13[1] + lVar7 * 0x10);
      *puVar1 = uVar6;
      *(uint *)(puVar1 + 1) = uVar2;
      plVar13[2] = lVar7 + 1;
      uVar6 = plVar14[4];
    } while (uVar11 < uVar6);
  }
  param_1[1] = lStack_a8;
  *param_1 = local_b0;
  param_1[3] = plStack_98;
  param_1[2] = local_a0;
  param_1[5] = uStack_88;
  param_1[4] = local_90;
  return;
}


// ===== 0069ba34  FUN_0069ba34 =====

void FUN_0069ba34(undefined8 *param_1,long param_2,uint param_3,long param_4,ulong param_5,
                 ulong param_6)

{
  int *piVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  int *piVar7;
  int *piVar6;
  
  uVar2 = (ulong)param_3;
  if (*(ulong *)(param_2 + 0x20) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (uVar2,*(ulong *)(param_2 + 0x20),&PTR_s__home_runner__cargo_registry_src_00923010);
  }
  if (param_5 < param_6) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (param_6,param_5,param_5,&PTR_s__home_runner__cargo_registry_src_00923028);
  }
  lVar4 = *(long *)(param_2 + 0x18) + uVar2 * 0x18;
  uVar2 = *(ulong *)(lVar4 + 0x10);
  if (uVar2 <= param_5 - param_6) {
    piVar3 = *(int **)(lVar4 + 8);
    lVar4 = uVar2 - 4;
    piVar5 = (int *)(param_4 + param_6);
    if (uVar2 < 4) {
      if ((long)uVar2 < 2) {
        if ((uVar2 == 0) || ((char)*piVar5 == (char)*piVar3)) goto LAB_0069bb1c;
      }
      else if (uVar2 == 2) {
        if ((short)*piVar5 == (short)*piVar3) {
LAB_0069bb1c:
          *(uint *)(param_1 + 3) = param_3;
          param_1[1] = param_6;
          param_1[2] = uVar2 + param_6;
          *param_1 = 1;
          return;
        }
      }
      else if ((int3)*piVar5 == (int3)*piVar3) goto LAB_0069bb1c;
    }
    else {
      piVar1 = (int *)((long)piVar5 + lVar4);
      piVar7 = piVar3;
      if (lVar4 != 0) {
        do {
          piVar6 = piVar5 + 1;
          if (*piVar5 != *piVar7) goto LAB_0069ba6c;
          piVar5 = piVar6;
          piVar7 = piVar7 + 1;
        } while (piVar6 < piVar1);
      }
      if (*piVar1 == *(int *)((long)piVar3 + lVar4)) goto LAB_0069bb1c;
    }
  }
LAB_0069ba6c:
  *param_1 = 0;
  return;
}


// ===== 0069bb64  <aho_corasick::packed::rabinkarp::aho_corasick::packed::rabinkarp::RabinKarp>::find_at =====

/* WARNING: Unknown calling convention: __rustcall */
/* <aho_corasick::packed::rabinkarp::aho_corasick::packed::rabinkarp::RabinKarp>::find_at */

void __rustcall
<aho_corasick::packed::rabinkarp::aho_corasick::packed::rabinkarp::RabinKarp>::find_at
          (uint *param_1,long param_2,long param_3,ulong param_4,ulong param_5,undefined8 param_6)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long local_68;
  
  local_68 = *(long *)(param_2 + 0x10);
  if (local_68 != 0x40) {
                    /* WARNING: Subroutine does not return */
    core::panicking::assert_failed<usize,usize>
              (0,&DAT_00375f70,&local_68,0,param_6,&PTR_s__home_runner__cargo_registry_src_00923070)
    ;
  }
  lVar7 = *(long *)(param_2 + 0x20);
  uVar8 = lVar7 + param_5;
  if (uVar8 <= param_4) {
    if (uVar8 < param_5) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (param_5,uVar8,param_4,&PTR_s__home_runner__cargo_registry_src_00923058);
    }
    uVar8 = 0;
    if (lVar7 != 0) {
      pbVar2 = (byte *)(param_3 + param_5);
      lVar4 = lVar7;
      do {
        lVar4 = lVar4 + -1;
        uVar8 = (ulong)*pbVar2 + uVar8 * 2;
        pbVar2 = pbVar2 + 1;
      } while (lVar4 != 0);
    }
    lVar9 = *(long *)(param_2 + 8);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    lVar10 = *(long *)(param_2 + 0x28);
    lVar3 = lVar9 + (uVar8 & 0x3f) * 0x18;
    lVar4 = *(long *)(lVar3 + 0x10);
    local_68 = 0x40;
    while( true ) {
      if (lVar4 != 0) {
        lVar4 = lVar4 << 4;
        puVar6 = (undefined4 *)(*(long *)(lVar3 + 8) + 8);
        do {
          if ((*(ulong *)(puVar6 + -2) == uVar8) &&
             (FUN_0069ba34(param_1,uVar5,*puVar6,param_3,param_4,param_5), (*param_1 & 1) != 0)) {
            return;
          }
          lVar4 = lVar4 + -0x10;
          puVar6 = puVar6 + 4;
        } while (lVar4 != 0);
      }
      uVar1 = param_5 + lVar7;
      if (param_4 <= uVar1) break;
      if (param_5 == param_4) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (param_4,param_4,&PTR_s__home_runner__cargo_registry_src_00923040);
      }
      pbVar2 = (byte *)(param_3 + param_5);
      param_5 = param_5 + 1;
      uVar8 = (ulong)*(byte *)(param_3 + uVar1) + (uVar8 - lVar10 * (ulong)*pbVar2) * 2;
      lVar3 = lVar9 + (uVar8 & 0x3f) * 0x18;
      lVar4 = *(long *)(lVar3 + 0x10);
    }
  }
  param_1[0] = 0;
  param_1[1] = 0;
  return;
}


// ===== 0069bd10  <aho_corasick::ahocorasick::[1]::aho_corasick::ahocorasick::AhoCorasick>::match_kind =====

/* WARNING: Unknown calling convention: __rustcall */
/* <aho_corasick::ahocorasick::[1]::aho_corasick::ahocorasick::AhoCorasick>::match_kind */

void __rustcall
<aho_corasick::ahocorasick::[1]::aho_corasick::ahocorasick::AhoCorasick>::match_kind(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0069bd2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x48))
            (*param_1 + (*(long *)(param_1[1] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
  return;
}


// ===== 0069bd30  <aho_corasick::ahocorasick::[1]::aho_corasick::ahocorasick::AhoCorasick>::memory_usage =====

/* WARNING: Unknown calling convention: __rustcall */
/* <aho_corasick::ahocorasick::[1]::aho_corasick::ahocorasick::AhoCorasick>::memory_usage */

void __rustcall
<aho_corasick::ahocorasick::[1]::aho_corasick::ahocorasick::AhoCorasick>::memory_usage
          (long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0069bd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x80))
            (*param_1 + (*(long *)(param_1[1] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
  return;
}


// ===== 0069bd50  <aho_corasick::ahocorasick::[1]::aho_corasick::ahocorasick::AhoCorasick>::patterns_len =====

/* WARNING: Unknown calling convention: __rustcall */
/* <aho_corasick::ahocorasick::[1]::aho_corasick::ahocorasick::AhoCorasick>::patterns_len */

void __rustcall
<aho_corasick::ahocorasick::[1]::aho_corasick::ahocorasick::AhoCorasick>::patterns_len
          (long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0069bd6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x60))
            (*param_1 + (*(long *)(param_1[1] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
  return;
}


// ===== 0069bd70  <aho_corasick::ahocorasick::[1]::aho_corasick::ahocorasick::AhoCorasick>::max_pattern_len =====

/* WARNING: Unknown calling convention: __rustcall */
/* <aho_corasick::ahocorasick::[1]::aho_corasick::ahocorasick::AhoCorasick>::max_pattern_len */

void __rustcall
<aho_corasick::ahocorasick::[1]::aho_corasick::ahocorasick::AhoCorasick>::max_pattern_len
          (long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0069bd8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x78))
            (*param_1 + (*(long *)(param_1[1] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
  return;
}


// ===== 0069bd90  <aho_corasick::ahocorasick::[1]::aho_corasick::ahocorasick::AhoCorasick>::min_pattern_len =====

/* WARNING: Unknown calling convention: __rustcall */
/* <aho_corasick::ahocorasick::[1]::aho_corasick::ahocorasick::AhoCorasick>::min_pattern_len */

void __rustcall
<aho_corasick::ahocorasick::[1]::aho_corasick::ahocorasick::AhoCorasick>::min_pattern_len
          (long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0069bdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x70))
            (*param_1 + (*(long *)(param_1[1] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
  return;
}


// ===== 0069bdb0  <aho_corasick::ahocorasick::[6]::aho_corasick::ahocorasick::AhoCorasickBuilder>::build_auto =====

/* WARNING: Unknown calling convention: __rustcall */
/* <aho_corasick::ahocorasick::[6]::aho_corasick::ahocorasick::AhoCorasickBuilder>::build_auto */

void __rustcall
<aho_corasick::ahocorasick::[6]::aho_corasick::ahocorasick::AhoCorasickBuilder>::build_auto
          (undefined8 *param_1,long param_2,void *param_3)

{
  void *pvVar1;
  long local_3b8 [53];
  undefined8 local_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [448];
  
                    /* try { // try from 0069bde8 to 0069bdfb has its CatchHandler @ 0069bf88 */
  if (((*(char *)(param_2 + 0x48) == '\0') || (100 < *(ulong *)((long)param_3 + 0x70))) ||
     (<aho_corasick::dfa::[3]::aho_corasick::dfa::Builder>::build_from_noncontiguous
                (local_3b8,param_2 + 0x10,param_3), local_3b8[0] == -1)) {
                    /* try { // try from 0069be68 to 0069be77 has its CatchHandler @ 0069bf88 */
    <aho_corasick::nfa::contiguous::[5]::aho_corasick::nfa::contiguous::Builder>::
    build_from_noncontiguous(local_3b8,param_2 + 0x28,param_3);
    if (local_3b8[0] == -1) {
      memcpy(auStack_200,param_3,0x1b8);
      uStack_208 = 1;
      local_210 = 1;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      pvVar1 = (void *)__rustc::__rust_alloc(0x1c8,8);
      if (pvVar1 == (void *)0x0) {
                    /* try { // try from 0069bf68 to 0069bf73 has its CatchHandler @ 0069bfa4 */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x1c8);
      }
      memcpy(pvVar1,&local_210,0x1c8);
      *(undefined1 *)(param_1 + 2) = 0;
      *param_1 = pvVar1;
      param_1[1] = &PTR_FUN_009232d8;
      return;
    }
    memcpy(auStack_200,local_3b8,0x180);
    uStack_208 = 1;
    local_210 = 1;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    pvVar1 = (void *)__rustc::__rust_alloc(400,8);
    if (pvVar1 == (void *)0x0) {
                    /* try { // try from 0069bf58 to 0069bf63 has its CatchHandler @ 0069bfb8 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,400);
    }
    memcpy(pvVar1,&local_210,400);
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = pvVar1;
    param_1[1] = &PTR_FUN_00923208;
  }
  else {
    memcpy(auStack_200,local_3b8,0x1a8);
    uStack_208 = 1;
    local_210 = 1;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    pvVar1 = (void *)__rustc::__rust_alloc(0x1b8,8);
    if (pvVar1 == (void *)0x0) {
                    /* try { // try from 0069bf78 to 0069bf83 has its CatchHandler @ 0069bf90 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x1b8);
    }
    memcpy(pvVar1,&local_210,0x1b8);
    *param_1 = pvVar1;
    param_1[1] = &PTR_FUN_00923138;
    *(undefined1 *)(param_1 + 2) = 2;
  }
  FUN_0069b6a4(param_3);
  return;
}


// ===== 0069bfdc  aho_corasick::ahocorasick::enforce_anchored_consistency =====

/* WARNING: Unknown calling convention: __rustcall */
/* aho_corasick::ahocorasick::enforce_anchored_consistency */

undefined1 * __rustcall
aho_corasick::ahocorasick::enforce_anchored_consistency(char param_1,uint param_2)

{
  undefined1 *puVar1;
  
  if (param_1 == '\0') {
    return (undefined1 *)0x0;
  }
  if (param_1 == '\x01') {
    if ((param_2 & 1) == 0) {
      return (undefined1 *)0x0;
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar1 = (undefined1 *)__rustc::__rust_alloc(2,1);
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
      return puVar1;
    }
  }
  else {
    if (param_2 != 0) {
      return (undefined1 *)0x0;
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar1 = (undefined1 *)__rustc::__rust_alloc(2,1);
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 1;
      return puVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(1,2);
}


// ===== 0069c068  FUN_0069c068 =====

bool FUN_0069c068(long param_1,uint param_2)

{
  return param_2 <= *(uint *)(param_1 + 400);
}


// ===== 0069c078  FUN_0069c078 =====

undefined1 FUN_0069c078(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1a0);
}


// ===== 0069c080  FUN_0069c080 =====

undefined4 FUN_0069c080(long param_1,undefined8 param_2,int param_3,byte param_4)

{
  ulong uVar1;
  
  uVar1 = (ulong)(param_3 + (uint)*(byte *)(param_1 + (ulong)param_4 + 0x80));
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    return *(undefined4 *)(*(long *)(param_1 + 8) + uVar1 * 4);
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (uVar1,*(ulong *)(param_1 + 0x10),&PTR_s__home_runner__cargo_registry_src_009233d0);
}


// ===== 0069c0bc  FUN_0069c0bc =====

undefined4 FUN_0069c0bc(long param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_2;
  if (uVar1 < *(ulong *)(param_1 + 0x40)) {
    return *(undefined4 *)(*(long *)(param_1 + 0x38) + uVar1 * 4);
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (uVar1,*(ulong *)(param_1 + 0x40),&PTR_s__home_runner__cargo_registry_src_009233e8);
}


// ===== 0069c0f4  FUN_0069c0f4 =====

void FUN_0069c0f4(undefined4 *param_1,long param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  
  if (param_3 == 0) {
    iVar2 = *(int *)(param_2 + 0x198);
    if (iVar2 != 0) goto LAB_0069c148;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar1 = (undefined1 *)__rustc::__rust_alloc(2,1);
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 1;
      *(undefined1 **)(param_1 + 2) = puVar1;
      *param_1 = 1;
      return;
    }
  }
  else {
    iVar2 = *(int *)(param_2 + 0x19c);
    if (iVar2 != 0) {
LAB_0069c148:
      *param_1 = 0;
      param_1[1] = iVar2;
      return;
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar1 = (undefined1 *)__rustc::__rust_alloc(2,1);
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
      *(undefined1 **)(param_1 + 2) = puVar1;
      *param_1 = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(1,2);
}


// ===== 0069c19c  FUN_0069c19c =====

long FUN_0069c19c(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar1 = *(long *)(param_1 + 0x60);
  }
  return *(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x28) * 0x18 +
         (*(long *)(param_1 + 0x40) + *(long *)(param_1 + 0x10)) * 4 + lVar1;
}


// ===== 0069c1d0  FUN_0069c1d0 =====

undefined8 FUN_0069c1d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}


// ===== 0069c1d8  FUN_0069c1d8 =====

undefined4 FUN_0069c1d8(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = ((param_2 & 0xffffffff) >> (*(ulong *)(param_1 + 0x78) & 0x3f)) - 2;
  if (*(ulong *)(param_1 + 0x28) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (uVar1,*(ulong *)(param_1 + 0x28),&PTR_s__home_runner__cargo_registry_src_00923400);
  }
  lVar2 = *(long *)(param_1 + 0x20) + uVar1 * 0x18;
  uVar1 = *(ulong *)(lVar2 + 0x10);
  if (param_3 < uVar1) {
    return *(undefined4 *)(*(long *)(lVar2 + 8) + param_3 * 4);
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (param_3,uVar1,&PTR_s__home_runner__cargo_registry_src_00923418);
}


// ===== 0069c248  FUN_0069c248 =====

undefined8 FUN_0069c248(long param_1)

{
  return *(undefined8 *)(param_1 + 0x188);
}


// ===== 0069c250  FUN_0069c250 =====

undefined8 FUN_0069c250(long param_1)

{
  return *(undefined8 *)(param_1 + 0x180);
}


// ===== 0069c258  FUN_0069c258 =====

bool FUN_0069c258(undefined8 param_1,int param_2)

{
  return param_2 == 0;
}


// ===== 0069c264  FUN_0069c264 =====

bool FUN_0069c264(long param_1,int param_2)

{
  return param_2 - 1U < *(uint *)(param_1 + 0x194);
}


// ===== 0069c278  FUN_0069c278 =====

bool FUN_0069c278(long param_1,int param_2)

{
  return param_2 == *(int *)(param_1 + 0x198) || param_2 == *(int *)(param_1 + 0x19c);
}


// ===== 0069c290  FUN_0069c290 =====

undefined8 FUN_0069c290(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = ((param_2 & 0xffffffff) >> (*(ulong *)(param_1 + 0x78) & 0x3f)) - 2;
  if (uVar1 < *(ulong *)(param_1 + 0x28)) {
    return *(undefined8 *)(*(long *)(param_1 + 0x20) + uVar1 * 0x18 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (uVar1,*(ulong *)(param_1 + 0x28),&PTR_s__home_runner__cargo_registry_src_00923430);
}


// ===== 0069c2d8  FUN_0069c2d8 =====

long * FUN_0069c2d8(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)0x0;
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar1 = (long *)(param_1 + 0x50);
  }
  return plVar1;
}


// ===== 0069c2e8  FUN_0069c2e8 =====

bool FUN_0069c2e8(long param_1,uint param_2)

{
  return param_2 <= *(uint *)(param_1 + 0x168);
}


// ===== 0069c2f8  FUN_0069c2f8 =====

undefined1 FUN_0069c2f8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x178);
}


// ===== 0069c300  FUN_0069c300 =====

int FUN_0069c300(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  uVar8 = *(ulong *)(param_1 + 0x10);
  param_3 = param_3 & 0xffffffff;
  if (param_3 < uVar8) {
    bVar4 = *(byte *)(param_1 + (param_4 & 0xff) + 0x58);
    lVar9 = *(long *)(param_1 + 8);
    lVar12 = (ulong)bVar4 + 2;
    uVar10 = (uint)bVar4;
    if ((param_2 & 1) != 0) {
      uVar1 = *(uint *)(lVar9 + param_3 * 4);
      if ((uVar1 & 0xff) == 0xff) {
        uVar5 = lVar12 + param_3;
        if (uVar5 < uVar8) {
          iVar3 = *(int *)(lVar9 + uVar5 * 4);
          iVar2 = 0;
          if (iVar3 != 1) {
            iVar2 = iVar3;
          }
          return iVar2;
        }
LAB_0069c59c:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar5,uVar8,&PTR_s__home_runner__cargo_registry_src_00923460);
      }
      if ((uVar1 & 0xff) == 0xfe) {
        if (uVar10 != (uVar1 >> 8 & 0xff)) {
          return 0;
        }
LAB_0069c350:
        param_3 = param_3 + 2;
        if (uVar8 <= param_3) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (param_3,uVar8,&PTR_s__home_runner__cargo_registry_src_00923478);
        }
      }
      else {
        uVar5 = param_3 + 2;
        uVar7 = uVar8 - uVar5;
        if (uVar8 < uVar5) {
LAB_0069c564:
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (uVar5,uVar8,uVar8,&PTR_s__home_runner__cargo_registry_src_00923520);
        }
        uVar6 = ((ulong)uVar1 & 0xff) + 3 >> 2;
        if (uVar7 < uVar6) {
LAB_0069c554:
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,uVar6,uVar7,&PTR_s__home_runner__cargo_registry_src_00923508);
        }
        lVar12 = uVar6 << 2;
        lVar11 = 0;
        do {
          if (lVar12 == 0) {
            return 0;
          }
          uVar1 = *(uint *)(lVar9 + uVar5 * 4 + lVar11 * 4);
          if (uVar10 == (uVar1 & 0xff)) goto LAB_0069c4e4;
          if (uVar10 == (uVar1 >> 8 & 0xff)) goto LAB_0069c504;
          if (uVar10 == (uVar1 >> 0x10 & 0xff)) goto LAB_0069c528;
          lVar12 = lVar12 + -4;
          lVar11 = lVar11 + 1;
        } while (uVar10 != uVar1 >> 0x18);
LAB_0069c4bc:
        param_3 = uVar5 + uVar6 + (lVar11 + -1) * 4 + 3;
        if (uVar8 <= param_3) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (param_3,uVar8,&PTR_s__home_runner__cargo_registry_src_009234a8);
        }
      }
      goto LAB_0069c53c;
    }
    do {
      uVar1 = *(uint *)(lVar9 + param_3 * 4);
      if ((uVar1 & 0xff) == 0xfe) {
        if (uVar10 == (uVar1 >> 8 & 0xff)) goto LAB_0069c350;
      }
      else if ((uVar1 & 0xff) == 0xff) {
        uVar5 = param_3 + lVar12;
        if (uVar8 <= uVar5) goto LAB_0069c59c;
        iVar2 = *(int *)(lVar9 + uVar5 * 4);
        if (iVar2 != 1) {
          return iVar2;
        }
      }
      else {
        uVar5 = param_3 + 2;
        uVar7 = uVar8 - uVar5;
        if (uVar8 < uVar5) goto LAB_0069c564;
        uVar6 = ((ulong)uVar1 & 0xff) + 3 >> 2;
        if (uVar7 < uVar6) goto LAB_0069c554;
        lVar13 = uVar6 << 2;
        lVar11 = 0;
        while (lVar13 != 0) {
          uVar1 = *(uint *)(lVar9 + uVar5 * 4 + lVar11 * 4);
          if (uVar10 == (uVar1 & 0xff)) goto LAB_0069c4e4;
          if (uVar10 == (uVar1 >> 8 & 0xff)) goto LAB_0069c504;
          if (uVar10 == (uVar1 >> 0x10 & 0xff)) goto LAB_0069c528;
          lVar13 = lVar13 + -4;
          lVar11 = lVar11 + 1;
          if (uVar10 == uVar1 >> 0x18) goto LAB_0069c4bc;
        }
      }
      param_3 = param_3 + 1;
      if (uVar8 <= param_3) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (param_3,uVar8,&PTR_s__home_runner__cargo_registry_src_00923490);
      }
      param_3 = (ulong)*(uint *)(lVar9 + param_3 * 4);
    } while (param_3 < uVar8);
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (param_3,uVar8,&PTR_s__home_runner__cargo_registry_src_00923448);
LAB_0069c4e4:
  param_3 = uVar6 + uVar5 + lVar11 * 4;
  if (uVar8 <= param_3) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (param_3,uVar8,&PTR_s__home_runner__cargo_registry_src_009234f0);
  }
  goto LAB_0069c53c;
LAB_0069c504:
  param_3 = uVar5 + uVar6 + lVar11 * 4 + 1;
  if (uVar8 <= param_3) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (param_3,uVar8,&PTR_s__home_runner__cargo_registry_src_009234d8);
  }
  goto LAB_0069c53c;
LAB_0069c528:
  param_3 = uVar5 + uVar6 + lVar11 * 4 + 2;
  if (uVar8 <= param_3) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (param_3,uVar8,&PTR_s__home_runner__cargo_registry_src_009234c0);
  }
LAB_0069c53c:
  return *(int *)(lVar9 + param_3 * 4);
}


// ===== 0069c5bc  FUN_0069c5bc =====

undefined4 FUN_0069c5bc(long param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_2;
  if (uVar1 < *(ulong *)(param_1 + 0x28)) {
    return *(undefined4 *)(*(long *)(param_1 + 0x20) + uVar1 * 4);
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (uVar1,*(ulong *)(param_1 + 0x28),&PTR_s__home_runner__cargo_registry_src_00923538);
}


// ===== 0069c5f4  FUN_0069c5f4 =====

void FUN_0069c5f4(undefined4 *param_1,long param_2,int param_3)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = 0x174;
  if (param_3 == 0) {
    lVar1 = 0x170;
  }
  uVar2 = *(undefined4 *)(param_2 + lVar1);
  *param_1 = 0;
  param_1[1] = uVar2;
  return;
}


// ===== 0069c610  FUN_0069c610 =====

long FUN_0069c610(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar1 = *(long *)(param_1 + 0x48);
  }
  return lVar1 + (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x10)) * 4;
}


// ===== 0069c634  FUN_0069c634 =====

undefined8 FUN_0069c634(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


// ===== 0069c63c  FUN_0069c63c =====

uint FUN_0069c63c(long param_1,uint param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long local_18;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  uVar3 = (ulong)param_2;
  if (uVar4 < uVar3) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar3,uVar4,uVar4,&PTR_s__home_runner__cargo_registry_src_00923550);
  }
  lVar5 = *(long *)(param_1 + 0x50);
  uVar4 = uVar4 - uVar3;
  local_18 = param_3;
  if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check(0,0,&PTR_s__home_runner__cargo_registry_src_00923088);
  }
  pbVar1 = (byte *)(*(long *)(param_1 + 8) + uVar3 * 4);
  bVar2 = *pbVar1;
  if (bVar2 != 0xff) {
    lVar5 = (ulong)bVar2 + ((ulong)bVar2 + 3 >> 2);
  }
  uVar3 = lVar5 + 2;
  if (uVar4 <= uVar3) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (uVar3,uVar4,&PTR_s__home_runner__cargo_registry_src_009230a0);
  }
  if ((int)*(uint *)(pbVar1 + uVar3 * 4) < 0) {
    if (param_3 == 0) {
      return *(uint *)(pbVar1 + uVar3 * 4) & 0x7fffffff;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::assert_failed<usize,usize>
              (0,&DAT_00374590,&local_18,0,param_5,&PTR_s__home_runner__cargo_registry_src_009230d0)
    ;
  }
  uVar3 = param_3 + uVar3 + 1;
  if (uVar3 < uVar4) {
    return *(uint *)(pbVar1 + uVar3 * 4);
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check(uVar3,uVar4,&PTR_s__home_runner__cargo_registry_src_009230b8);
}


// ===== 0069c72c  FUN_0069c72c =====

undefined8 FUN_0069c72c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x160);
}


// ===== 0069c734  FUN_0069c734 =====

undefined8 FUN_0069c734(long param_1)

{
  return *(undefined8 *)(param_1 + 0x158);
}


// ===== 0069c73c  FUN_0069c73c =====

bool FUN_0069c73c(long param_1,int param_2)

{
  return param_2 - 1U < *(uint *)(param_1 + 0x16c);
}


// ===== 0069c750  FUN_0069c750 =====

bool FUN_0069c750(long param_1,int param_2)

{
  return param_2 == *(int *)(param_1 + 0x170) || param_2 == *(int *)(param_1 + 0x174);
}


// ===== 0069c768  FUN_0069c768 =====

int FUN_0069c768(long param_1,uint param_2)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  uVar5 = (ulong)param_2;
  if (uVar4 < uVar5) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar5,uVar4,uVar4,&PTR_s__home_runner__cargo_registry_src_00923568);
  }
  uVar4 = uVar4 - uVar5;
  if (uVar4 != 0) {
    pbVar1 = (byte *)(*(long *)(param_1 + 8) + uVar5 * 4);
    bVar3 = *pbVar1;
    if (bVar3 == 0xff) {
      uVar5 = *(long *)(param_1 + 0x50) + 2;
      if (uVar4 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar5,uVar4,&PTR_s__home_runner__cargo_registry_src_009230e8);
      }
    }
    else {
      uVar5 = (ulong)bVar3 + ((ulong)bVar3 + 3 >> 2) + 2;
      if (uVar4 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar5,uVar4,&PTR_s__home_runner__cargo_registry_src_00923100);
      }
    }
    iVar2 = *(int *)(pbVar1 + uVar5 * 4);
    if (iVar2 == -1 || iVar2 + 1 < 0 != SCARRY4(iVar2,1)) {
      iVar2 = 1;
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check(0,0,&PTR_s__home_runner__cargo_registry_src_00923088);
}


// ===== 0069c814  FUN_0069c814 =====

long * FUN_0069c814(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)0x0;
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar1 = (long *)(param_1 + 0x38);
  }
  return plVar1;
}


// ===== 0069c824  FUN_0069c824 =====

bool FUN_0069c824(long param_1,uint param_2)

{
  return param_2 <= *(uint *)(param_1 + 0x1a0);
}


// ===== 0069c834  FUN_0069c834 =====

undefined1 FUN_0069c834(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1b0);
}


// ===== 0069c83c  FUN_0069c83c =====

int FUN_0069c83c(long param_1,ulong param_2,ulong param_3,byte param_4)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  
  uVar7 = *(ulong *)(param_1 + 0x10);
  param_3 = param_3 & 0xffffffff;
  if (param_3 < uVar7) {
    uVar1 = *(ulong *)(param_1 + 0x40);
    uVar2 = *(ulong *)(param_1 + 0x28);
    if ((param_2 & 1) != 0) {
      puVar8 = (uint *)(*(long *)(param_1 + 8) + param_3 * 0x14);
      uVar3 = puVar8[1];
      if (uVar3 == 0) {
        uVar3 = *puVar8;
        while (uVar3 != 0) {
          uVar6 = (ulong)uVar3;
          if (uVar2 <= uVar6) {
LAB_0069c97c:
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (uVar6,uVar2,&PTR_s__home_runner__cargo_registry_src_009233b8);
          }
          pbVar5 = (byte *)(*(long *)(param_1 + 0x20) + uVar6 * 9);
          if (param_4 <= *pbVar5) {
            if (param_4 != *pbVar5) {
              return 0;
            }
            iVar4 = *(int *)(pbVar5 + 1);
            goto joined_r0x0069c96c;
          }
          uVar3 = *(uint *)(pbVar5 + 5);
        }
      }
      else {
        uVar6 = (ulong)*(byte *)(param_1 + 0x90 + (ulong)param_4) + (ulong)uVar3;
        if (uVar1 <= uVar6) {
LAB_0069c998:
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar6,uVar1,&PTR_s__home_runner__cargo_registry_src_009233a0);
        }
        iVar4 = *(int *)(*(long *)(param_1 + 0x38) + uVar6 * 4);
joined_r0x0069c96c:
        if (iVar4 != 1) {
          return iVar4;
        }
      }
      return 0;
    }
    do {
      puVar8 = (uint *)(*(long *)(param_1 + 8) + param_3 * 0x14);
      if (puVar8[1] == 0) {
        uVar3 = *puVar8;
        while (uVar3 != 0) {
          uVar6 = (ulong)uVar3;
          if (uVar2 <= uVar6) goto LAB_0069c97c;
          pbVar5 = (byte *)(*(long *)(param_1 + 0x20) + uVar6 * 9);
          if (param_4 <= *pbVar5) {
            if (param_4 == *pbVar5) {
              pbVar5 = pbVar5 + 1;
              goto LAB_0069c8b8;
            }
            break;
          }
          uVar3 = *(uint *)(pbVar5 + 5);
        }
      }
      else {
        uVar6 = (ulong)*(byte *)(param_1 + 0x90 + (ulong)param_4) + (ulong)puVar8[1];
        if (uVar1 <= uVar6) goto LAB_0069c998;
        pbVar5 = (byte *)(*(long *)(param_1 + 0x38) + uVar6 * 4);
LAB_0069c8b8:
        if (*(int *)pbVar5 != 1) {
          return *(int *)pbVar5;
        }
      }
      param_3 = (ulong)puVar8[3];
    } while (param_3 < uVar7);
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (param_3,uVar7,&PTR_s__home_runner__cargo_registry_src_00923388);
}


// ===== 0069c9a8  FUN_0069c9a8 =====

undefined4 FUN_0069c9a8(long param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_2;
  if (uVar1 < *(ulong *)(param_1 + 0x70)) {
    return *(undefined4 *)(*(long *)(param_1 + 0x68) + uVar1 * 4);
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (uVar1,*(ulong *)(param_1 + 0x70),&PTR_s__home_runner__cargo_registry_src_00923580);
}


// ===== 0069c9e0  FUN_0069c9e0 =====

void FUN_0069c9e0(undefined4 *param_1,long param_2,int param_3)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = 0x1ac;
  if (param_3 == 0) {
    lVar1 = 0x1a8;
  }
  uVar2 = *(undefined4 *)(param_2 + lVar1);
  *param_1 = 0;
  param_1[1] = uVar2;
  return;
}


// ===== 0069c9fc  FUN_0069c9fc =====

long FUN_0069c9fc(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x78) != 0) {
    lVar1 = *(long *)(param_1 + 0x88);
  }
  return *(long *)(param_1 + 0x28) * 9 + *(long *)(param_1 + 0x10) * 0x14 +
         *(long *)(param_1 + 0x58) * 8 + (*(long *)(param_1 + 0x70) + *(long *)(param_1 + 0x40)) * 4
         + lVar1;
}


// ===== 0069ca3c  FUN_0069ca3c =====

undefined8 FUN_0069ca3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}


// ===== 0069ca44  FUN_0069ca44 =====

undefined4 FUN_0069ca44(long param_1,uint param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = (ulong)param_2;
  if (*(ulong *)(param_1 + 0x10) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (uVar2,*(ulong *)(param_1 + 0x10),&PTR_s__home_runner__cargo_registry_src_00923598);
  }
  uVar2 = (ulong)*(uint *)(*(long *)(param_1 + 8) + uVar2 * 0x14 + 8);
  if (param_3 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x58);
    do {
      if (uVar2 == 0) goto LAB_0069cab8;
      if (uVar1 <= uVar2) goto LAB_0069cac4;
      param_3 = param_3 + -1;
      uVar2 = (ulong)*(uint *)(*(long *)(param_1 + 0x50) + uVar2 * 8 + 4);
    } while (param_3 != 0);
  }
  if (uVar2 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x58);
    if (uVar2 < uVar1) {
      return *(undefined4 *)(*(long *)(param_1 + 0x50) + uVar2 * 8);
    }
LAB_0069cac4:
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (uVar2,uVar1,&PTR_s__home_runner__cargo_registry_src_00922f98);
  }
LAB_0069cab8:
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__home_runner__cargo_registry_src_009235b0);
}


// ===== 0069cae4  FUN_0069cae4 =====

undefined8 FUN_0069cae4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x198);
}


// ===== 0069caec  FUN_0069caec =====

undefined8 FUN_0069caec(long param_1)

{
  return *(undefined8 *)(param_1 + 400);
}


// ===== 0069caf4  FUN_0069caf4 =====

bool FUN_0069caf4(long param_1,int param_2)

{
  return param_2 - 1U < *(uint *)(param_1 + 0x1a4);
}


// ===== 0069cb08  FUN_0069cb08 =====

bool FUN_0069cb08(long param_1,int param_2)

{
  return param_2 == *(int *)(param_1 + 0x1a8) || param_2 == *(int *)(param_1 + 0x1ac);
}


// ===== 0069cb20  FUN_0069cb20 =====

long FUN_0069cb20(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = (ulong)param_2;
  if (*(ulong *)(param_1 + 0x10) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (uVar2,*(ulong *)(param_1 + 0x10),&PTR_s__home_runner__cargo_registry_src_00923598);
  }
  uVar1 = *(uint *)(*(long *)(param_1 + 8) + uVar2 * 0x14 + 8);
  if (uVar1 != 0) {
    lVar3 = 0;
    do {
      uVar2 = (ulong)uVar1;
      if (*(ulong *)(param_1 + 0x58) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar2,*(ulong *)(param_1 + 0x58),&PTR_s__home_runner__cargo_registry_src_00922f98
                  );
      }
      lVar3 = lVar3 + 1;
      uVar1 = *(uint *)(*(long *)(param_1 + 0x50) + uVar2 * 8 + 4);
    } while (uVar1 != 0);
    return lVar3;
  }
  return 0;
}


// ===== 0069cba8  FUN_0069cba8 =====

long * FUN_0069cba8(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)0x0;
  if (*(long *)(param_1 + 0x78) != 0) {
    plVar1 = (long *)(param_1 + 0x78);
  }
  return plVar1;
}


// ===== 0069cbb8  <aho_corasick::ahocorasick::AhoCorasick_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <aho_corasick::ahocorasick::AhoCorasick as core::fmt::Debug>::fmt */

void __rustcall
<aho_corasick::ahocorasick::AhoCorasick_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_38,param_2,"AhoCorasick",0xb);
  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::field
            (auStack_38,param_1,&PTR_FUN_009235c8);
  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::finish();
  return;
}


// ===== 0069cc10  FUN_0069cc10 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0069cc10(pthread_key_t param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *__pointer;
  void *__ptr;
  long *plVar7;
  long lVar8;
  undefined4 uStack_34;
  
  uVar6 = _UNK_00453af0;
  uVar5 = _DAT_00453ae8;
  uVar4 = _UNK_00453ae0;
  uVar3 = _DAT_00453ad8;
  if (param_2 == 1) {
    return (undefined8 *)0x0;
  }
  __pointer = (undefined8 *)malloc(0x30);
  if (__pointer != (undefined8 *)0x0) {
    __pointer[1] = uVar4;
    *__pointer = uVar3;
    __pointer[3] = uVar6;
    __pointer[2] = uVar5;
    __pointer[5] = CONCAT44(uStack_34,param_1);
    __pointer[4] = 1;
    __ptr = pthread_getspecific(param_1);
    pthread_setspecific(param_1,__pointer);
    if (__ptr != (void *)0x0) {
      if ((*(long *)((long)__ptr + 8) != 2) && (*(long *)((long)__ptr + 8) != 0)) {
        plVar7 = *(long **)((long)__ptr + 0x10);
        do {
          lVar8 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 + -1 == 0) {
          DataMemoryBarrier(2,1);
                    /* try { // try from 0069ccb8 to 0069ccbb has its CatchHandler @ 0069cd08 */
          <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
          ::drop_slow();
        }
      }
      free(__ptr);
    }
    return __pointer;
  }
                    /* try { // try from 0069ccf8 to 0069cd03 has its CatchHandler @ 0069cd30 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x30);
}


// ===== 0069cd48  FUN_0069cd48 =====

void FUN_0069cd48(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if ((*param_1 != 2) && (*param_1 != 0)) {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
      ::drop_slow();
      return;
    }
  }
  return;
}


// ===== 0069cd7c  FUN_0069cd7c =====

void FUN_0069cd7c(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if ((*(long *)(param_1 + 8) != 2) && (*(long *)(param_1 + 8) != 0)) {
    plVar3 = *(long **)(param_1 + 0x10);
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
      ::drop_slow();
      return;
    }
  }
  return;
}


// ===== 0069cdb0  FUN_0069cdb0 =====

void FUN_0069cdb0(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_1;
                    /* try { // try from 0069cdd0 to 0069cdd3 has its CatchHandler @ 0069ce10 */
  if ((lVar4 != 2) &&
     (<tracing_core::dispatcher::[2]::tracing_core::dispatcher::Dispatch>::try_close
                (param_1,param_1[3]), lVar4 != 0)) {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
      ::drop_slow(param_1 + 1);
      return;
    }
  }
  return;
}


// ===== 0069ce28  <tracing::span::tracing::span::Span>::or_current =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing::span::tracing::span::Span>::or_current */

void __rustcall <tracing::span::tracing::span::Span>::or_current(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (*param_2 == 2) {
                    /* try { // try from 0069ce44 to 0069ce47 has its CatchHandler @ 0069ce70 */
    current();
    return;
  }
  lVar2 = *param_2;
  lVar4 = param_2[3];
  lVar3 = param_2[2];
  lVar1 = param_2[4];
  param_1[1] = param_2[1];
  *param_1 = lVar2;
  param_1[3] = lVar4;
  param_1[2] = lVar3;
  param_1[4] = lVar1;
  return;
}


// ===== 0069ce88  <tracing::span::tracing::span::Span>::record_all =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing::span::tracing::span::Span>::record_all */

long * __rustcall <tracing::span::tracing::span::Span>::record_all(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_8;
  
  if (*param_1 != 2) {
    lVar1 = param_1[1];
    if (*param_1 == 1) {
      lVar1 = lVar1 + (*(long *)(param_1[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    local_8 = param_2;
    (**(code **)(param_1[2] + 0x40))(lVar1,param_1 + 3,&local_8);
  }
  return param_1;
}


// ===== 0069ceec  <tracing::span::tracing::span::Span>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing::span::tracing::span::Span>::new */

void __rustcall
<tracing::span::tracing::span::Span>::new(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*(long *)PTR_SCOPED_COUNT_0099f698 == 0) {
    bVar3 = *(long *)PTR_GLOBAL_INIT_0099f6a8 == 2;
    local_60[0] = 1;
    plVar11 = (long *)PTR_GLOBAL_DISPATCH_0099f6b8;
    if (!bVar3) {
      plVar11 = (long *)PTR_NONE_0099f6b0;
    }
    auVar14._0_8_ = (ulong)CONCAT14(bVar3,(uint)bVar3) << 0x3f;
    auVar14._8_8_ = (ulong)bVar3 << 0x3f;
    auVar14 = NEON_cmlt(auVar14,0,8);
    auVar14 = NEON_bsl(auVar14,*(undefined1 (*) [16])(PTR_GLOBAL_DISPATCH_0099f6b8 + 8),
                       *(undefined1 (*) [16])(PTR_NONE_0099f6b0 + 8),1);
    lVar7 = auVar14._8_8_;
    plVar13 = auVar14._0_8_;
    if (*plVar11 == 1) {
      local_50 = param_2;
      uStack_48 = param_3;
      uVar5 = (**(code **)(lVar7 + 0x38))
                        ((long)plVar13 + (*(long *)(lVar7 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                         local_60);
      do {
        lVar9 = *plVar13;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = lVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 < 0) goto LAB_0069d248;
      uVar8 = 1;
    }
    else {
      local_50 = param_2;
      uStack_48 = param_3;
      uVar5 = (**(code **)(lVar7 + 0x38))(plVar13,local_60);
      uVar8 = 0;
    }
    *param_1 = uVar8;
    param_1[2] = lVar7;
    param_1[1] = plVar13;
    goto LAB_0069d220;
  }
  uVar12 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_0099f6a0;
  if (uVar12 == 0) {
    uVar12 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_0099f6a0);
    puVar4 = (ulong *)pthread_getspecific((pthread_key_t)uVar12);
    if (puVar4 < &DAT_00000002) goto LAB_0069d190;
  }
  else {
    puVar4 = (ulong *)pthread_getspecific((pthread_key_t)uVar12);
    if (puVar4 < &DAT_00000002) {
LAB_0069d190:
      puVar4 = (ulong *)FUN_0069cc10(uVar12 & 0xffffffff,puVar4);
    }
  }
  if (puVar4 == (ulong *)0x0) {
    local_60[0] = 1;
    plVar11 = *(long **)((long)PTR_NONE_0099f6b0 + 8);
    lVar7 = *(long *)((long)PTR_NONE_0099f6b0 + 0x10);
    if (*(long *)PTR_NONE_0099f6b0 == 1) {
      local_50 = param_2;
      uStack_48 = param_3;
      uVar5 = (**(code **)(lVar7 + 0x38))
                        ((long)plVar11 + (*(long *)(lVar7 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                         local_60);
      do {
        lVar9 = *plVar11;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 < 0) goto LAB_0069d248;
      uVar8 = 1;
    }
    else {
      local_50 = param_2;
      uStack_48 = param_3;
      uVar5 = (**(code **)(lVar7 + 0x38))(plVar11,local_60);
      uVar8 = 0;
    }
    *param_1 = uVar8;
    param_1[1] = plVar11;
    param_1[2] = lVar7;
  }
  else {
    uVar12 = puVar4[4];
    *(undefined1 *)(puVar4 + 4) = 0;
    if ((uVar12 & 1) == 0) {
      local_60[0] = 1;
      plVar11 = *(long **)(PTR_NONE_0099f6b0 + 8);
      uVar12 = *(ulong *)(PTR_NONE_0099f6b0 + 0x10);
      if (*(long *)PTR_NONE_0099f6b0 == 1) {
        local_50 = param_2;
        uStack_48 = param_3;
        uVar5 = (**(code **)(uVar12 + 0x38))
                          ((long)plVar11 +
                           (*(long *)(uVar12 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,local_60);
        do {
          lVar7 = *plVar11;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 < 0) goto LAB_0069d248;
        uVar8 = 1;
      }
      else {
        local_50 = param_2;
        uStack_48 = param_3;
        uVar5 = (**(code **)(uVar12 + 0x38))(plVar11,local_60);
        uVar8 = 0;
      }
    }
    else {
      if (0x7ffffffffffffffe < *puVar4) {
                    /* try { // try from 0069d23c to 0069d247 has its CatchHandler @ 0069d264 */
        core::cell::panic_already_mutably_borrowed(&PTR_s__home_runner__cargo_registry_src_00975038)
        ;
LAB_0069d248:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x69d24c);
        (*pcVar2)();
      }
      puVar6 = puVar4 + 1;
      uVar10 = *puVar6;
      *puVar4 = *puVar4 + 1;
      if (uVar10 == 2) {
        puVar6 = (ulong *)PTR_GLOBAL_DISPATCH_0099f6b8;
        if (*(long *)PTR_GLOBAL_INIT_0099f6a8 != 2) {
          puVar6 = (ulong *)PTR_NONE_0099f6b0;
        }
        uVar10 = *puVar6;
      }
      plVar11 = (long *)puVar6[1];
      uVar12 = puVar6[2];
      local_60[0] = 1;
      if (uVar10 == 1) {
                    /* try { // try from 0069cfd0 to 0069cfdb has its CatchHandler @ 0069d24c */
        local_50 = param_2;
        uStack_48 = param_3;
        uVar5 = (**(code **)(uVar12 + 0x38))
                          ((long)plVar11 +
                           (*(long *)(uVar12 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,local_60);
        do {
          lVar7 = *plVar11;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 < 0) goto LAB_0069d248;
        uVar8 = 1;
      }
      else {
                    /* try { // try from 0069d140 to 0069d14b has its CatchHandler @ 0069d24c */
        local_50 = param_2;
        uStack_48 = param_3;
        uVar5 = (**(code **)(uVar12 + 0x38))(plVar11,local_60);
        uVar8 = 0;
      }
      *(undefined1 *)(puVar4 + 4) = 1;
      *puVar4 = *puVar4 - 1;
    }
    *param_1 = uVar8;
    param_1[1] = plVar11;
    param_1[2] = uVar12;
  }
LAB_0069d220:
  param_1[3] = uVar5;
  param_1[4] = param_2;
  return;
}


// ===== 0069d270  <tracing::span::tracing::span::Span>::current =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing::span::tracing::span::Span>::current */

void __rustcall <tracing::span::tracing::span::Span>::current(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  ulong *puVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  long local_58;
  long local_50;
  undefined8 uStack_48;
  
  if (*(long *)PTR_SCOPED_COUNT_0099f698 == 0) {
    bVar3 = *(long *)PTR_GLOBAL_INIT_0099f6a8 == 2;
    puVar4 = (ulong *)PTR_GLOBAL_DISPATCH_0099f6b8;
    if (!bVar3) {
      puVar4 = (ulong *)PTR_NONE_0099f6b0;
    }
    uVar11 = *puVar4;
    auVar14._0_8_ = (ulong)CONCAT14(bVar3,(uint)bVar3) << 0x3f;
    auVar14._8_8_ = (ulong)bVar3 << 0x3f;
    auVar14 = NEON_cmlt(auVar14,0,8);
    auVar14 = NEON_bsl(auVar14,*(undefined1 (*) [16])(PTR_GLOBAL_DISPATCH_0099f6b8 + 8),
                       *(undefined1 (*) [16])(PTR_NONE_0099f6b0 + 8),1);
    lVar10 = auVar14._8_8_;
    plVar12 = auVar14._0_8_;
    plVar5 = plVar12;
    if (uVar11 == 1) {
      plVar5 = (long *)((long)plVar12 + (*(long *)(lVar10 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10)
      ;
    }
    (**(code **)(lVar10 + 0x88))(&local_58,plVar5);
    if (local_58 != 0) goto LAB_0069d62c;
    local_58 = local_50;
    if ((uVar11 & 1) == 0) {
      uVar6 = (**(code **)(lVar10 + 0x70))(plVar12,&local_58);
      uVar8 = 0;
LAB_0069d528:
      *param_1 = uVar8;
      param_1[3] = uVar6;
      param_1[4] = uStack_48;
      param_1[2] = lVar10;
      param_1[1] = plVar12;
      return;
    }
    uVar6 = (**(code **)(lVar10 + 0x70))
                      ((long)plVar12 + (*(long *)(lVar10 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                       &local_58);
    do {
      lVar9 = *plVar12;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (-1 < lVar9) {
      uVar8 = 1;
      goto LAB_0069d528;
    }
    goto LAB_0069d6dc;
  }
  uVar11 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_0099f6a0;
  if (uVar11 == 0) {
    uVar11 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_0099f6a0);
    puVar4 = (ulong *)pthread_getspecific((pthread_key_t)uVar11);
    if (puVar4 < &DAT_00000002) goto LAB_0069d5d4;
  }
  else {
    puVar4 = (ulong *)pthread_getspecific((pthread_key_t)uVar11);
    if (puVar4 < &DAT_00000002) {
LAB_0069d5d4:
      puVar4 = (ulong *)FUN_0069cc10(uVar11 & 0xffffffff,puVar4);
    }
  }
  if (puVar4 == (ulong *)0x0) {
    uVar11 = *(ulong *)PTR_NONE_0099f6b0;
    plVar12 = *(long **)((long)PTR_NONE_0099f6b0 + 8);
    uVar13 = *(ulong *)((long)PTR_NONE_0099f6b0 + 0x10);
    plVar5 = plVar12;
    if (uVar11 == 1) {
      plVar5 = (long *)((long)plVar12 + (*(long *)(uVar13 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10)
      ;
    }
    (**(code **)(uVar13 + 0x88))(&local_58,plVar5);
    if (local_58 != 0) {
LAB_0069d62c:
      param_1[4] = 0;
      *param_1 = 2;
      return;
    }
    local_58 = local_50;
    if ((uVar11 & 1) == 0) {
      uVar6 = (**(code **)(uVar13 + 0x70))(plVar12,&local_58);
      uVar8 = 0;
    }
    else {
      uVar6 = (**(code **)(uVar13 + 0x70))
                        ((long)plVar12 + (*(long *)(uVar13 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10
                         ,&local_58);
      do {
        lVar10 = *plVar12;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = lVar10 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar10 < 0) goto LAB_0069d6dc;
      uVar8 = 1;
    }
    *param_1 = uVar8;
    param_1[1] = plVar12;
    param_1[2] = uVar13;
    param_1[3] = uVar6;
    param_1[4] = uStack_48;
    return;
  }
  uVar11 = puVar4[4];
  *(undefined1 *)(puVar4 + 4) = 0;
  if ((uVar11 & 1) == 0) {
    uVar11 = *(ulong *)PTR_NONE_0099f6b0;
    plVar12 = *(long **)(PTR_NONE_0099f6b0 + 8);
    uVar13 = *(ulong *)(PTR_NONE_0099f6b0 + 0x10);
    plVar5 = plVar12;
    if (uVar11 == 1) {
      plVar5 = (long *)((long)plVar12 + (*(long *)(uVar13 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10)
      ;
    }
    uVar6 = (**(code **)(uVar13 + 0x88))(&local_58,plVar5);
    if (local_58 == 0) {
      local_58 = local_50;
      if ((uVar11 & 1) == 0) {
        uVar6 = (**(code **)(uVar13 + 0x70))(plVar12,&local_58);
        uVar8 = 0;
      }
      else {
        uVar6 = (**(code **)(uVar13 + 0x70))
                          ((long)plVar12 +
                           (*(long *)(uVar13 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,&local_58);
        do {
          lVar10 = *plVar12;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar10 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar10 < 0) goto LAB_0069d6dc;
        uVar8 = 1;
      }
    }
    else {
      uStack_48 = 0;
      uVar8 = 2;
    }
  }
  else {
    if (0x7ffffffffffffffe < *puVar4) {
                    /* try { // try from 0069d6d0 to 0069d6db has its CatchHandler @ 0069d6f8 */
      core::cell::panic_already_mutably_borrowed(&PTR_s__home_runner__cargo_registry_src_00975038);
LAB_0069d6dc:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x69d6e0);
      (*pcVar2)();
    }
    puVar7 = puVar4 + 1;
    uVar11 = *puVar7;
    *puVar4 = *puVar4 + 1;
    if (uVar11 == 2) {
      puVar7 = (ulong *)PTR_GLOBAL_DISPATCH_0099f6b8;
      if (*(long *)PTR_GLOBAL_INIT_0099f6a8 != 2) {
        puVar7 = (ulong *)PTR_NONE_0099f6b0;
      }
      uVar11 = *puVar7;
    }
    plVar12 = (long *)puVar7[1];
    uVar13 = puVar7[2];
    plVar5 = plVar12;
    if (uVar11 == 1) {
      plVar5 = (long *)((long)plVar12 + (*(long *)(uVar13 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10)
      ;
    }
                    /* try { // try from 0069d348 to 0069d34f has its CatchHandler @ 0069d6e0 */
    uVar6 = (**(code **)(uVar13 + 0x88))(&local_58,plVar5);
    if (local_58 == 0) {
      local_58 = local_50;
      if ((uVar11 & 1) == 0) {
                    /* try { // try from 0069d56c to 0069d577 has its CatchHandler @ 0069d6e0 */
        uVar6 = (**(code **)(uVar13 + 0x70))(plVar12,&local_58);
        uVar8 = 0;
      }
      else {
                    /* try { // try from 0069d4ec to 0069d4f7 has its CatchHandler @ 0069d6e0 */
        uVar6 = (**(code **)(uVar13 + 0x70))
                          ((long)plVar12 +
                           (*(long *)(uVar13 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,&local_58);
        do {
          lVar10 = *plVar12;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar10 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar10 < 0) goto LAB_0069d6dc;
        uVar8 = 1;
      }
    }
    else {
      uStack_48 = 0;
      uVar8 = 2;
    }
    *(undefined1 *)(puVar4 + 4) = 1;
    *puVar4 = *puVar4 - 1;
  }
  *param_1 = uVar8;
  param_1[1] = plVar12;
  param_1[2] = uVar13;
  param_1[3] = uVar6;
  param_1[4] = uStack_48;
  return;
}


// ===== 0069d704  <tracing::span::tracing::span::Span>::new_root =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing::span::tracing::span::Span>::new_root */

void __rustcall
<tracing::span::tracing::span::Span>::new_root
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*(long *)PTR_SCOPED_COUNT_0099f698 == 0) {
    bVar3 = *(long *)PTR_GLOBAL_INIT_0099f6a8 == 2;
    local_60[0] = 0;
    plVar11 = (long *)PTR_GLOBAL_DISPATCH_0099f6b8;
    if (!bVar3) {
      plVar11 = (long *)PTR_NONE_0099f6b0;
    }
    auVar14._0_8_ = (ulong)CONCAT14(bVar3,(uint)bVar3) << 0x3f;
    auVar14._8_8_ = (ulong)bVar3 << 0x3f;
    auVar14 = NEON_cmlt(auVar14,0,8);
    auVar14 = NEON_bsl(auVar14,*(undefined1 (*) [16])(PTR_GLOBAL_DISPATCH_0099f6b8 + 8),
                       *(undefined1 (*) [16])(PTR_NONE_0099f6b0 + 8),1);
    lVar7 = auVar14._8_8_;
    plVar13 = auVar14._0_8_;
    if (*plVar11 == 1) {
      local_50 = param_2;
      uStack_48 = param_3;
      uVar5 = (**(code **)(lVar7 + 0x38))
                        ((long)plVar13 + (*(long *)(lVar7 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                         local_60);
      do {
        lVar9 = *plVar13;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = lVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 < 0) goto LAB_0069da50;
      uVar8 = 1;
    }
    else {
      local_50 = param_2;
      uStack_48 = param_3;
      uVar5 = (**(code **)(lVar7 + 0x38))(plVar13,local_60);
      uVar8 = 0;
    }
    *param_1 = uVar8;
    param_1[2] = lVar7;
    param_1[1] = plVar13;
    goto LAB_0069da28;
  }
  uVar12 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_0099f6a0;
  if (uVar12 == 0) {
    uVar12 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_0099f6a0);
    puVar4 = (ulong *)pthread_getspecific((pthread_key_t)uVar12);
    if (puVar4 < &DAT_00000002) goto LAB_0069d99c;
  }
  else {
    puVar4 = (ulong *)pthread_getspecific((pthread_key_t)uVar12);
    if (puVar4 < &DAT_00000002) {
LAB_0069d99c:
      puVar4 = (ulong *)FUN_0069cc10(uVar12 & 0xffffffff,puVar4);
    }
  }
  if (puVar4 == (ulong *)0x0) {
    local_60[0] = 0;
    plVar11 = *(long **)((long)PTR_NONE_0099f6b0 + 8);
    lVar7 = *(long *)((long)PTR_NONE_0099f6b0 + 0x10);
    if (*(long *)PTR_NONE_0099f6b0 == 1) {
      local_50 = param_2;
      uStack_48 = param_3;
      uVar5 = (**(code **)(lVar7 + 0x38))
                        ((long)plVar11 + (*(long *)(lVar7 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                         local_60);
      do {
        lVar9 = *plVar11;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 < 0) goto LAB_0069da50;
      uVar8 = 1;
    }
    else {
      local_50 = param_2;
      uStack_48 = param_3;
      uVar5 = (**(code **)(lVar7 + 0x38))(plVar11,local_60);
      uVar8 = 0;
    }
    *param_1 = uVar8;
    param_1[1] = plVar11;
    param_1[2] = lVar7;
  }
  else {
    uVar12 = puVar4[4];
    *(undefined1 *)(puVar4 + 4) = 0;
    if ((uVar12 & 1) == 0) {
      local_60[0] = 0;
      plVar11 = *(long **)(PTR_NONE_0099f6b0 + 8);
      uVar12 = *(ulong *)(PTR_NONE_0099f6b0 + 0x10);
      if (*(long *)PTR_NONE_0099f6b0 == 1) {
        local_50 = param_2;
        uStack_48 = param_3;
        uVar5 = (**(code **)(uVar12 + 0x38))
                          ((long)plVar11 +
                           (*(long *)(uVar12 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,local_60);
        do {
          lVar7 = *plVar11;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 < 0) goto LAB_0069da50;
        uVar8 = 1;
      }
      else {
        local_50 = param_2;
        uStack_48 = param_3;
        uVar5 = (**(code **)(uVar12 + 0x38))(plVar11,local_60);
        uVar8 = 0;
      }
    }
    else {
      if (0x7ffffffffffffffe < *puVar4) {
                    /* try { // try from 0069da44 to 0069da4f has its CatchHandler @ 0069da6c */
        core::cell::panic_already_mutably_borrowed(&PTR_s__home_runner__cargo_registry_src_00975038)
        ;
LAB_0069da50:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x69da54);
        (*pcVar2)();
      }
      puVar6 = puVar4 + 1;
      uVar10 = *puVar6;
      *puVar4 = *puVar4 + 1;
      if (uVar10 == 2) {
        puVar6 = (ulong *)PTR_GLOBAL_DISPATCH_0099f6b8;
        if (*(long *)PTR_GLOBAL_INIT_0099f6a8 != 2) {
          puVar6 = (ulong *)PTR_NONE_0099f6b0;
        }
        uVar10 = *puVar6;
      }
      plVar11 = (long *)puVar6[1];
      uVar12 = puVar6[2];
      local_60[0] = 0;
      if (uVar10 == 1) {
                    /* try { // try from 0069d7e4 to 0069d7ef has its CatchHandler @ 0069da54 */
        local_50 = param_2;
        uStack_48 = param_3;
        uVar5 = (**(code **)(uVar12 + 0x38))
                          ((long)plVar11 +
                           (*(long *)(uVar12 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,local_60);
        do {
          lVar7 = *plVar11;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 < 0) goto LAB_0069da50;
        uVar8 = 1;
      }
      else {
                    /* try { // try from 0069d94c to 0069d957 has its CatchHandler @ 0069da54 */
        local_50 = param_2;
        uStack_48 = param_3;
        uVar5 = (**(code **)(uVar12 + 0x38))(plVar11,local_60);
        uVar8 = 0;
      }
      *(undefined1 *)(puVar4 + 4) = 1;
      *puVar4 = *puVar4 - 1;
    }
    *param_1 = uVar8;
    param_1[1] = plVar11;
    param_1[2] = uVar12;
  }
LAB_0069da28:
  param_1[3] = uVar5;
  param_1[4] = param_2;
  return;
}


// ===== 0069da78  <tracing::span::tracing::span::Span>::make_with =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing::span::tracing::span::Span>::make_with */

void __rustcall
<tracing::span::tracing::span::Span>::make_with
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  plVar1 = (long *)param_4[1];
  lVar8 = param_4[2];
  if (*param_4 == 1) {
    uVar5 = (**(code **)(lVar8 + 0x38))
                      ((long)plVar1 + (*(long *)(lVar8 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x69db08);
      (*pcVar4)();
    }
    uVar7 = 1;
  }
  else {
    uVar5 = (**(code **)(lVar8 + 0x38))(plVar1);
    uVar7 = 0;
  }
  *param_1 = uVar7;
  param_1[1] = plVar1;
  param_1[2] = lVar8;
  param_1[3] = uVar5;
  param_1[4] = param_2;
  return;
}


// ===== 0069db08  <tracing::span::[8]::tracing::span::Inner>::follows_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing::span::[8]::tracing::span::Inner>::follows_from */

void __rustcall
<tracing::span::[8]::tracing::span::Inner>::follows_from(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  if (*param_1 == 1) {
    lVar1 = lVar1 + (*(long *)(param_1[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0069db3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[2] + 0x48))(lVar1,param_1 + 3,param_2);
  return;
}


// ===== 0069db40  tracing::__macro_support::__is_enabled =====

/* WARNING: Unknown calling convention: __rustcall */
/* tracing::__macro_support::__is_enabled */

undefined8 __rustcall tracing::__macro_support::__is_enabled(undefined8 param_1,char param_2)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  if (param_2 == '\x02') {
    return 1;
  }
  if (*(long *)PTR_SCOPED_COUNT_0099f698 == 0) {
    plVar1 = (long *)PTR_GLOBAL_DISPATCH_0099f6b8;
    if (*(long *)PTR_GLOBAL_INIT_0099f6a8 != 2) {
      plVar1 = (long *)PTR_NONE_0099f6b0;
    }
    lVar10 = *plVar1;
    puVar2 = PTR_GLOBAL_DISPATCH_0099f6b8;
    if (*(long *)PTR_GLOBAL_INIT_0099f6a8 != 2) {
      puVar2 = PTR_NONE_0099f6b0;
    }
    lVar9 = plVar1[2];
    lVar7 = *(long *)(puVar2 + 8);
    goto joined_r0x0069dc98;
  }
  uVar11 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_0099f6a0;
  if (uVar11 == 0) {
    uVar11 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_0099f6a0);
    puVar4 = (ulong *)pthread_getspecific((pthread_key_t)uVar11);
    if (puVar4 < &DAT_00000002) goto LAB_0069dcc0;
  }
  else {
    puVar4 = (ulong *)pthread_getspecific((pthread_key_t)uVar11);
    if (puVar4 < &DAT_00000002) {
LAB_0069dcc0:
      puVar4 = (ulong *)FUN_0069cc10(uVar11 & 0xffffffff,puVar4);
    }
  }
  if ((puVar4 != (ulong *)0x0) &&
     (uVar11 = puVar4[4], *(undefined1 *)(puVar4 + 4) = 0, (uVar11 & 1) != 0)) {
    if (0x7ffffffffffffffe < *puVar4) {
                    /* try { // try from 0069dd18 to 0069dd23 has its CatchHandler @ 0069dd40 */
      core::cell::panic_already_mutably_borrowed(&PTR_s__home_runner__cargo_registry_src_00975038);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x69dd28);
      (*pcVar3)();
    }
    puVar8 = puVar4 + 1;
    uVar11 = *puVar8;
    *puVar4 = *puVar4 + 1;
    if (uVar11 == 2) {
      puVar8 = (ulong *)PTR_GLOBAL_DISPATCH_0099f6b8;
      if (*(long *)PTR_GLOBAL_INIT_0099f6a8 != 2) {
        puVar8 = (ulong *)PTR_NONE_0099f6b0;
      }
      uVar11 = *puVar8;
    }
    uVar5 = puVar8[1];
    if (uVar11 == 1) {
      uVar5 = uVar5 + (*(long *)(puVar8[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
                    /* try { // try from 0069dc2c to 0069dc33 has its CatchHandler @ 0069dd28 */
    uVar6 = (**(code **)(puVar8[2] + 0x28))(uVar5,param_1);
    *(undefined1 *)(puVar4 + 4) = 1;
    *puVar4 = *puVar4 - 1;
    return uVar6;
  }
  lVar10 = *(long *)PTR_NONE_0099f6b0;
  lVar7 = *(long *)(PTR_NONE_0099f6b0 + 8);
  lVar9 = *(long *)(PTR_NONE_0099f6b0 + 0x10);
joined_r0x0069dc98:
  if (lVar10 == 1) {
    lVar7 = lVar7 + (*(long *)(lVar9 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0069dd14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(lVar9 + 0x28))(lVar7,param_1);
  return uVar6;
}


// ===== 0069dd4c  <tracing::span::Span_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing::span::Span as core::fmt::Debug>::fmt */

void __rustcall <tracing::span::Span_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong **ppuVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_60 [16];
  ulong *local_50;
  undefined8 uStack_48;
  ulong local_40;
  undefined8 uStack_38;
  long local_18;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_60,param_2,&DAT_00378c7c,4);
  lVar5 = param_1[4];
  if (lVar5 == 0) {
    puVar2 = &DAT_003788d0;
    ppuVar3 = (ulong **)&DAT_00453b0d;
    puVar4 = &DAT_009750b0;
  }
  else {
    local_50 = *(ulong **)(lVar5 + 0x10);
    uStack_48 = *(undefined8 *)(lVar5 + 0x18);
    uVar1 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                      (auStack_60,&DAT_00378e60,4,&local_50,&DAT_00975050);
    local_18 = lVar5;
    uVar1 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                      (uVar1,&DAT_00453b00,5,&local_18,&DAT_00975070);
    local_40 = *(ulong *)(lVar5 + 0x20);
    uStack_38 = *(undefined8 *)(lVar5 + 0x28);
    <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
              (uVar1,&DAT_00453b05,6,&local_40,&DAT_00975050);
    if (*param_1 == 2) {
      <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                (auStack_60,&DAT_003760a0,8,&DAT_00453b0d,&DAT_009750b0);
      local_40 = *(ulong *)(lVar5 + 0x50);
      uStack_38 = *(undefined8 *)(lVar5 + 0x58);
    }
    else {
      local_40 = param_1[3];
      <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                (auStack_60,&DAT_00453b0b,2,&local_40,&DAT_00975090);
      local_40 = *(ulong *)(lVar5 + 0x50);
      uStack_38 = *(undefined8 *)(lVar5 + 0x58);
    }
    if (local_40 != 0) {
      local_50 = &local_40;
      <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                (auStack_60,"module_path",0xb,&local_50,&DAT_009750d0);
    }
    local_50 = *(ulong **)(lVar5 + 8);
    if (*(int *)(lVar5 + 8) == 1) {
      local_40 = (ulong)&local_50 | 4;
      <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                (auStack_60,&DAT_00378c80,4,&local_40,&DAT_009750f0);
    }
    local_40 = *(ulong *)(lVar5 + 0x60);
    uStack_38 = *(undefined8 *)(lVar5 + 0x68);
    if (local_40 == 0) goto LAB_0069df24;
    local_50 = &local_40;
    puVar2 = &DAT_00379908;
    puVar4 = &DAT_009750d0;
    ppuVar3 = &local_50;
  }
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (auStack_60,puVar2,4,ppuVar3,puVar4);
LAB_0069df24:
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish(auStack_60);
  return;
}


// ===== 0069df40  FUN_0069df40 =====

void FUN_0069df40(undefined8 *param_1,long param_2)

{
  undefined8 local_18;
  
  local_18 = *(undefined8 *)*param_1;
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u64_as_core::fmt::LowerHex>::fmt(&local_18);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <usize_as_core::fmt::Display>::fmt();
    return;
  }
  <u64_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 0069df98  FUN_0069df98 =====

void FUN_0069df98(undefined8 *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_00453b60 + *(int *)(&DAT_00453b60 + *(long *)*param_1 * 4),
             *(undefined8 *)(&DAT_00453b38 + *(long *)*param_1 * 8));
  return;
}


// ===== 0069dfc4  FUN_0069dfc4 =====

void FUN_0069dfc4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"Level",5,&local_18,&DAT_00975130);
  return;
}


// ===== 0069e008  FUN_0069e008 =====

void FUN_0069e008(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*(undefined8 *)*param_1,((undefined8 *)*param_1)[1],param_2);
  return;
}


// ===== 0069e01c  FUN_0069e01c =====

void FUN_0069e01c(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 0069e030  FUN_0069e030 =====

void FUN_0069e030(undefined8 *param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u32_as_core::fmt::LowerHex>::fmt(*param_1);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <u32_as_core::fmt::Display>::fmt();
    return;
  }
  <u32_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 0069e04c  <core::option::Option<tracing_core::span::Id>as{backref_13}::convert::From<tracing::span::Span>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::option::Option<tracing_core::span::Id> as {backref
   13}::convert::From<tracing::span::Span>>::from */

long __rustcall
<core::option::Option<tracing_core::span::Id>as{backref_13}::convert::From<tracing::span::Span>>::
from(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  if (lVar5 == 2) {
    lVar4 = 0;
  }
  else {
                    /* try { // try from 0069e080 to 0069e08f has its CatchHandler @ 0069e0cc */
    lVar4 = param_1[3];
    <tracing_core::dispatcher::[2]::tracing_core::dispatcher::Dispatch>::try_close(param_1,lVar4);
    if (lVar5 != 0) {
      plVar3 = (long *)param_1[1];
      do {
        lVar5 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
        ::drop_slow(param_1 + 1);
        return lVar4;
      }
    }
  }
  return lVar4;
}


// ===== 0069e0e4  FUN_0069e0e4 =====

void FUN_0069e0e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"IdTraceDebugInfoWarnError",2,&local_18,&DAT_00975110);
  return;
}


// ===== 0069e124  <tracing::span::Inner_as_core::clone::Clone>::clone =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing::span::Inner as core::clone::Clone>::clone */

void __rustcall
<tracing::span::Inner_as_core::clone::Clone>::clone(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  plVar1 = (long *)param_2[1];
  lVar7 = param_2[2];
  if (*param_2 != 1) {
    uVar5 = (**(code **)(lVar7 + 0x70))(plVar1,param_2 + 3);
    *param_1 = 0;
    param_1[1] = plVar1;
    param_1[2] = lVar7;
    param_1[3] = uVar5;
    return;
  }
  uVar5 = (**(code **)(lVar7 + 0x70))
                    ((long)plVar1 + (*(long *)(lVar7 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                     param_2 + 3);
  do {
    lVar6 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (-1 < lVar6) {
    *param_1 = 1;
    param_1[1] = plVar1;
    param_1[2] = lVar7;
    param_1[3] = uVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x69e1c8);
  (*pcVar4)();
}


// ===== 0069e1c8  <bool_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <bool_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_009a06e0)();
  return;
}


// ===== 0069e1cc  FUN_0069e1cc =====

void FUN_0069e1cc(long param_1,undefined8 param_2)

{
  undefined8 local_40;
  long lStack_38;
  undefined1 *local_30;
  long *plStack_28;
  undefined1 *local_20;
  undefined1 uStack_11;
  
  local_30 = (undefined1 *)&local_40;
  lStack_38 = param_1 + 8;
  plStack_28 = &lStack_38;
  local_20 = &uStack_11;
  local_40 = param_2;
  once_cell::imp::initialize_or_wait(param_1,&local_30,&DAT_00975150);
  return;
}


// ===== 0069e210  FUN_0069e210 =====

void FUN_0069e210(void)

{
  undefined *local_40;
  undefined *puStack_38;
  undefined1 *local_30;
  undefined **ppuStack_28;
  undefined1 *local_20;
  undefined1 uStack_11;
  
  local_30 = (undefined1 *)&local_40;
  ppuStack_28 = &puStack_38;
  local_20 = &uStack_11;
  local_40 = &DAT_009a6300;
  puStack_38 = &DAT_009a6300;
  once_cell::imp::initialize_or_wait(&DAT_009a6330,&local_30,&DAT_00975178);
  return;
}


// ===== 0069e25c  FUN_0069e25c =====

void FUN_0069e25c(long *param_1,undefined8 *param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  code *pcVar14;
  undefined **local_78;
  code *local_70;
  long lStack_68;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    FUN_006a147c(param_2,param_3);
    return;
  }
  lVar10 = 8;
  if (lVar4 != 1) {
    lVar10 = 0x18;
  }
  lVar11 = 0x10;
  if (lVar4 != 1) {
    lVar11 = 0x20;
  }
  lVar4 = *(long *)(param_1[1] + lVar11);
  if (lVar4 != 0) {
    lVar11 = *(long *)(param_1[1] + lVar10);
    uVar9 = *param_2;
    lVar10 = 0;
    do {
      plVar5 = (long *)(lVar11 + lVar10 * 0x18);
      lVar13 = *plVar5;
      if (lVar13 == 1) {
        pcVar12 = (code *)plVar5[1];
        if (pcVar12 != (code *)0xffffffffffffffff) {
          lVar6 = *(long *)pcVar12;
          do {
            if (lVar6 == 0) goto LAB_0069e2cc;
            if (lVar6 < 0) {
              local_78 = &PTR_DAT_00975308;
              local_70 = FUN_0069f8c4;
                    /* WARNING: Subroutine does not return */
              core::panicking::panic_fmt
                        (&DAT_00368e80,&local_78,&PTR_s__rustc_48a229ceaefd4985c50990b14_00975330);
            }
            lVar7 = *(long *)pcVar12;
            if (lVar7 == lVar6) {
              cVar3 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
              if (bVar8) {
                *(long *)pcVar12 = lVar6 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                bVar8 = true;
              }
              else {
                bVar8 = false;
              }
            }
            else {
              bVar8 = false;
              ClearExclusiveLocal();
            }
            lVar6 = lVar7;
          } while (!bVar8);
          lVar6 = plVar5[2];
          local_78 = (undefined **)0x1;
          pcVar14 = pcVar12 + (*(long *)(lVar6 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
          lStack_68 = lVar6;
          goto LAB_0069e378;
        }
      }
      else {
        local_78 = (undefined **)0x0;
        lStack_68 = plVar5[2];
        pcVar14 = (code *)plVar5[1];
        lVar6 = plVar5[2];
        pcVar12 = pcVar14;
LAB_0069e378:
        local_70 = pcVar12;
                    /* try { // try from 0069e37c to 0069e383 has its CatchHandler @ 0069e438 */
        cVar3 = (**(code **)(lVar6 + 0x20))(pcVar14,uVar9);
        cVar2 = *param_3;
        cVar1 = cVar2;
        if (cVar2 != cVar3) {
          cVar1 = '\x01';
        }
        if (cVar2 != -1) {
          cVar3 = cVar1;
        }
        *param_3 = cVar3;
        if ((int)lVar13 != 0) {
          do {
            lVar13 = *(long *)pcVar12;
            cVar3 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
            if (bVar8) {
              *(long *)pcVar12 = lVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar13 + -1 == 0) {
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
            ::drop_slow(&local_70);
          }
        }
      }
LAB_0069e2cc:
      lVar10 = lVar10 + 1;
    } while (lVar10 != lVar4);
  }
  return;
}


// ===== 0069e46c  FUN_0069e46c =====

void FUN_0069e46c(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  code *pcVar15;
  undefined **local_78;
  code *local_70;
  long lStack_68;
  
  lVar6 = *param_1;
  if (lVar6 == 0) {
    FUN_006a122c(param_2);
    return;
  }
  lVar11 = 8;
  if (lVar6 != 1) {
    lVar11 = 0x18;
  }
  lVar12 = 0x10;
  if (lVar6 != 1) {
    lVar12 = 0x20;
  }
  lVar6 = *(long *)(param_1[1] + lVar12);
  if (lVar6 != 0) {
    lVar12 = *(long *)(param_1[1] + lVar11);
    lVar11 = 0;
    do {
      plVar7 = (long *)(lVar12 + lVar11 * 0x18);
      lVar14 = *plVar7;
      if (lVar14 == 1) {
        pcVar13 = (code *)plVar7[1];
        if (pcVar13 != (code *)0xffffffffffffffff) {
          lVar8 = *(long *)pcVar13;
          do {
            if (lVar8 == 0) goto LAB_0069e4dc;
            if (lVar8 < 0) {
              local_78 = &PTR_DAT_00975308;
              local_70 = FUN_0069f8c4;
                    /* WARNING: Subroutine does not return */
              core::panicking::panic_fmt
                        (&DAT_00368e80,&local_78,&PTR_s__rustc_48a229ceaefd4985c50990b14_00975330);
            }
            lVar9 = *(long *)pcVar13;
            if (lVar9 == lVar8) {
              cVar4 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(pcVar13,0x10);
              if (bVar10) {
                *(long *)pcVar13 = lVar8 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                bVar10 = true;
              }
              else {
                bVar10 = false;
              }
            }
            else {
              bVar10 = false;
              ClearExclusiveLocal();
            }
            lVar8 = lVar9;
          } while (!bVar10);
          lVar8 = plVar7[2];
          local_78 = (undefined **)0x1;
          pcVar15 = pcVar13 + (*(long *)(lVar8 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
          lStack_68 = lVar8;
          goto LAB_0069e588;
        }
      }
      else {
        local_78 = (undefined **)0x0;
        lStack_68 = plVar7[2];
        pcVar15 = (code *)plVar7[1];
        lVar8 = plVar7[2];
        pcVar13 = pcVar15;
LAB_0069e588:
        local_70 = pcVar13;
                    /* try { // try from 0069e58c to 0069e58f has its CatchHandler @ 0069e658 */
        uVar5 = (**(code **)(lVar8 + 0x30))(pcVar15);
        uVar3 = 5;
        if (*param_2 != 0xffffffffffffffff) {
          uVar3 = *param_2;
        }
        uVar1 = 5;
        if (uVar5 != 0xffffffffffffffff) {
          uVar1 = uVar5;
        }
        uVar2 = 0;
        if (uVar5 != 0xfffffffffffffffe) {
          uVar2 = uVar1;
        }
        if (uVar2 < uVar3) {
          uVar3 = 0;
          if (uVar5 != 0xfffffffffffffffe) {
            uVar3 = uVar5;
          }
          *param_2 = uVar3;
        }
        if ((int)lVar14 != 0) {
          do {
            lVar14 = *(long *)pcVar13;
            cVar4 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(pcVar13,0x10);
            if (bVar10) {
              *(long *)pcVar13 = lVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar14 + -1 == 0) {
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
            ::drop_slow(&local_70);
          }
        }
      }
LAB_0069e4dc:
      lVar11 = lVar11 + 1;
    } while (lVar11 != lVar6);
  }
  return;
}


// ===== 0069e68c  FUN_0069e68c =====

void FUN_0069e68c(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  if (param_1 != -1) {
    plVar1 = (long *)(param_1 + 8);
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 + -1 == 0) {
      DataMemoryBarrier(2,1);
      uVar2 = *(ulong *)(param_2 + 0x10);
      if (uVar2 < 9) {
        uVar2 = 8;
      }
      uVar2 = *(long *)(param_2 + 8) + uVar2 + 0xf & -uVar2;
      if (uVar2 != 0) {
        __rustc::__rust_dealloc(param_1,uVar2);
        return;
      }
    }
  }
  return;
}


// ===== 0069e6dc  FUN_0069e6dc =====

void FUN_0069e6dc(long param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  
  puVar4 = *(uint **)(param_1 + 8);
  do {
    uVar1 = *puVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar3) {
      *puVar4 = uVar1 - 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((uVar1 - 1 & 0xbfffffff) != 0x80000000) {
    return;
  }
  <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers();
  return;
}


// ===== 0069e708  FUN_0069e708 =====

void FUN_0069e708(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  ulong uVar5;
  
  piVar4 = (int *)*param_1;
  if ((((*(byte *)(param_1 + 1) & 1) == 0) &&
      ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0 & 0x7fffffffffffffff) != 0)) &&
     (uVar5 = std::panicking::panic_count::is_zero_slow_path(), (uVar5 & 1) == 0)) {
    *(undefined1 *)(piVar4 + 2) = 1;
  }
  do {
    iVar1 = *piVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar3) {
      *piVar4 = iVar1 + -0x3fffffff;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + 0xc0000001U >> 0x1e != 0) {
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers()
    ;
    return;
  }
  return;
}


// ===== 0069e790  FUN_0069e790 =====

void FUN_0069e790(long param_1)

{
  ulong uVar1;
  long local_18;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (((uVar1 != 0) && (1 < (uVar1 & 3) - 2)) && ((uVar1 & 3) != 0)) {
    local_18 = uVar1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 0069e7e0  FUN_0069e7e0 =====

void FUN_0069e7e0(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((*param_1 != 0) && (lVar5 = param_1[1], lVar5 != -1)) {
    lVar6 = param_1[2];
    plVar1 = (long *)(lVar5 + 8);
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      DataMemoryBarrier(2,1);
      uVar2 = *(ulong *)(lVar6 + 0x10);
      if (uVar2 < 9) {
        uVar2 = 8;
      }
      uVar2 = *(long *)(lVar6 + 8) + uVar2 + 0xf & -uVar2;
      if (uVar2 != 0) {
        __rustc::__rust_dealloc(lVar5,uVar2);
        return;
      }
    }
  }
  return;
}


// ===== 0069e844  core[188d2c0002da36d0]::panicking::assert_failed::<*const_tracing_core[702fccbc9f4cc72b]::callsite::DefaultCallsite,*mut_tracing_core[702fccbc9f4cc72b]::callsite::DefaultCallsite> =====

/* core[188d2c0002da36d0]::panicking::assert_failed::<*const
   tracing_core[702fccbc9f4cc72b]::callsite::DefaultCallsite, *mut
   tracing_core[702fccbc9f4cc72b]::callsite::DefaultCallsite> */

void core[188d2c0002da36d0]::panicking::assert_failed::
     <*const_tracing_core[702fccbc9f4cc72b]::callsite::DefaultCallsite,*mut_tracing_core[702fccbc9f4cc72b]::callsite::DefaultCallsite>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = param_2;
  uStack_18 = param_3;
                    /* WARNING: Subroutine does not return */
  core::panicking::assert_failed_inner
            (param_1,&local_20,&DAT_009751e0,&uStack_18,&DAT_00975200,param_4,param_5,param_6);
}


// ===== 0069e87c  FUN_0069e87c =====

ulong FUN_0069e87c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_40;
  ulong local_38;
  undefined1 local_30;
  long local_28;
  
  local_38 = 0;
  local_40 = param_1;
                    /* try { // try from 0069e898 to 0069e8a7 has its CatchHandler @ 0069e92c */
  iVar1 = core::fmt::write(&local_40,&PTR_FUN_00975220,param_2,param_3);
  if (iVar1 == 0) {
    if (local_38 != 0) {
      if ((1 < (local_38 & 3) - 2) && ((local_38 & 3) != 0)) {
        local_28 = local_38 - 1;
        local_30 = 3;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
      }
      return 0;
    }
  }
  else if (local_38 == 0) {
                    /* try { // try from 0069e910 to 0069e927 has its CatchHandler @ 0069e92c */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_00453b74,0xad,&PTR_s__rustc_48a229ceaefd4985c50990b14_00975250);
  }
  return local_38;
}


// ===== 0069e944  FUN_0069e944 =====

undefined8 FUN_0069e944(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  long local_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lVar3 = *(long *)*param_1;
  *(long *)*param_1 = 0;
  pcVar2 = *(code **)(lVar3 + 0x30);
  *(undefined8 *)(lVar3 + 0x30) = 0;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(&local_40);
    puVar4 = (undefined8 *)param_1[1];
    plVar1 = (long *)*puVar4;
    if ((*plVar1 != 0) && (plVar1[2] != 0)) {
      __rustc::__rust_dealloc(plVar1[3],plVar1[2] << 4,8);
      plVar1 = (long *)*puVar4;
    }
    *plVar1 = 1;
    plVar1[2] = lStack_38;
    plVar1[1] = local_40;
    plVar1[4] = lStack_28;
    plVar1[3] = lStack_30;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_00453bca,0x55,&PTR_s__home_runner__cargo_registry_src_00975268);
}


// ===== 0069e9e4  FUN_0069e9e4 =====

undefined8 FUN_0069e9e4(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  
  lVar8 = *(long *)*param_1;
  *(long *)*param_1 = 0;
  pcVar7 = *(code **)(lVar8 + 0x38);
  *(undefined8 *)(lVar8 + 0x38) = 0;
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(&local_78);
    puVar11 = (undefined8 *)param_1[1];
    plVar10 = (long *)*puVar11;
    if (*plVar10 != 0) {
      lVar8 = plVar10[5];
      if (lVar8 != 0) {
        lVar13 = plVar10[4];
        lVar12 = 0;
        do {
          plVar6 = (long *)(lVar13 + lVar12 * 0x18);
          if ((*plVar6 != 0) && (lVar5 = plVar6[1], lVar5 != -1)) {
            plVar1 = (long *)(lVar5 + 8);
            do {
              lVar9 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar9 + -1 == 0) {
              DataMemoryBarrier(2,1);
              uVar2 = *(ulong *)(plVar6[2] + 0x10);
              if (uVar2 < 9) {
                uVar2 = 8;
              }
              uVar2 = *(long *)(plVar6[2] + 8) + uVar2 + 0xf & -uVar2;
              if (uVar2 != 0) {
                __rustc::__rust_dealloc(lVar5,uVar2);
              }
            }
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 != lVar8);
      }
      if (plVar10[3] != 0) {
        __rustc::__rust_dealloc(plVar10[4],plVar10[3] * 0x18,8);
      }
      plVar10 = (long *)*puVar11;
    }
    *plVar10 = 1;
    plVar10[2] = lStack_70;
    plVar10[1] = local_78;
    plVar10[4] = lStack_60;
    plVar10[3] = local_68;
    plVar10[5] = local_58;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_00453bca,0x55,&PTR_s__home_runner__cargo_registry_src_00975268);
}


// ===== 0069eb34  FUN_0069eb34 =====

undefined8 FUN_0069eb34(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long local_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar1 = (undefined8 *)param_1[1];
  lVar4 = *(long *)*param_1;
  *(long *)*param_1 = 0;
  pcVar3 = *(code **)(lVar4 + 0x30);
  *(undefined8 *)(lVar4 + 0x30) = 0;
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(&local_40);
    plVar2 = (long *)*puVar1;
    if ((*plVar2 != 0) && (plVar2[2] != 0)) {
      __rustc::__rust_dealloc(plVar2[3],plVar2[2] << 4,8);
      plVar2 = (long *)*puVar1;
    }
    *plVar2 = 1;
    plVar2[2] = lStack_38;
    plVar2[1] = local_40;
    plVar2[4] = lStack_28;
    plVar2[3] = lStack_30;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_00453bca,0x55,&PTR_s__home_runner__cargo_registry_src_00975268);
}


// ===== 0069ebcc  FUN_0069ebcc =====

undefined8 FUN_0069ebcc(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  
  puVar2 = (undefined8 *)param_1[1];
  lVar9 = *(long *)*param_1;
  *(long *)*param_1 = 0;
  pcVar8 = *(code **)(lVar9 + 0x38);
  *(undefined8 *)(lVar9 + 0x38) = 0;
  if (pcVar8 != (code *)0x0) {
    (*pcVar8)(&local_78);
    plVar11 = (long *)*puVar2;
    if (*plVar11 != 0) {
      lVar9 = plVar11[5];
      if (lVar9 != 0) {
        lVar13 = plVar11[4];
        lVar12 = 0;
        do {
          plVar7 = (long *)(lVar13 + lVar12 * 0x18);
          if ((*plVar7 != 0) && (lVar6 = plVar7[1], lVar6 != -1)) {
            plVar1 = (long *)(lVar6 + 8);
            do {
              lVar10 = *plVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar10 + -1 == 0) {
              DataMemoryBarrier(2,1);
              uVar3 = *(ulong *)(plVar7[2] + 0x10);
              if (uVar3 < 9) {
                uVar3 = 8;
              }
              uVar3 = *(long *)(plVar7[2] + 8) + uVar3 + 0xf & -uVar3;
              if (uVar3 != 0) {
                __rustc::__rust_dealloc(lVar6,uVar3);
              }
            }
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 != lVar9);
      }
      if (plVar11[3] != 0) {
        __rustc::__rust_dealloc(plVar11[4],plVar11[3] * 0x18,8);
      }
      plVar11 = (long *)*puVar2;
    }
    *plVar11 = 1;
    plVar11[2] = lStack_70;
    plVar11[1] = local_78;
    plVar11[4] = lStack_60;
    plVar11[3] = local_68;
    plVar11[5] = local_58;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_00453bca,0x55,&PTR_s__home_runner__cargo_registry_src_00975268);
}


// ===== 0069ed14  <tracing_core::span::tracing_core::span::Id>::from_u64 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::span::tracing_core::span::Id>::from_u64 */

void __rustcall <tracing_core::span::tracing_core::span::Id>::from_u64(long param_1)

{
  if (param_1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::option::expect_failed(&DAT_00453c34,0x14,&PTR_s__home_runner__cargo_registry_src_009752c0);
}


// ===== 0069ed3c  FUN_0069ed3c =====

void FUN_0069ed3c(undefined8 *param_1,uint *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined **local_58;
  code *pcStack_50;
  long local_48;
  
  if (DAT_009a6330 == 2) {
    if (DAT_009a6308 == 0) goto LAB_0069ed84;
LAB_0069eec0:
    ClearExclusiveLocal();
  }
  else {
    FUN_0069e210();
    if (DAT_009a6308 != 0) goto LAB_0069eec0;
LAB_0069ed84:
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x9a6308,0x10);
    if (bVar3) {
      DAT_009a6308 = 0x3fffffff;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      uVar5 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      goto joined_r0x0069eee0;
    }
  }
  <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::write_contended
            (&DAT_009a6308);
  uVar5 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
joined_r0x0069eee0:
  if ((uVar5 & 0x7fffffffffffffff) == 0) {
    bVar4 = 0;
  }
  else {
    bVar4 = std::panicking::panic_count::is_zero_slow_path();
    bVar4 = bVar4 ^ 1;
  }
  if (DAT_009a6310 != '\0') {
    local_58 = (undefined **)&DAT_009a6308;
    uVar5 = (ulong)pcStack_50 >> 8;
    pcStack_50 = (code *)CONCAT71((int7)uVar5,bVar4);
                    /* try { // try from 0069ef00 to 0069ef23 has its CatchHandler @ 0069ef7c */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              (&DAT_00453c09,0x2b,&local_58,&PTR_FUN_009752a0,
               &PTR_s__home_runner__cargo_registry_src_009752d8);
  }
                    /* try { // try from 0069edbc to 0069edc3 has its CatchHandler @ 0069ef68 */
  FUN_006a2e00(&DAT_009a6318);
  if (*param_3 == 1) {
    pcStack_50 = (code *)param_3[1];
    local_58 = (undefined **)0x1;
    plVar1 = (long *)((long)pcStack_50 + 8);
    do {
      lVar7 = *plVar1;
      while (lVar7 != -1) {
        if (lVar7 < 0) {
          local_58 = &PTR_DAT_00975308;
          pcStack_50 = FUN_0069f8c4;
                    /* try { // try from 0069ef3c to 0069ef53 has its CatchHandler @ 0069ef68 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_fmt
                    (&DAT_00368e80,&local_58,&PTR_s__rustc_48a229ceaefd4985c50990b14_00975318);
        }
        lVar8 = *plVar1;
        if (lVar8 == lVar7) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          lVar7 = lVar8;
          if (cVar2 == '\0') goto LAB_0069ee28;
        }
        else {
          ClearExclusiveLocal();
          lVar7 = lVar8;
        }
      }
      InstructionSynchronizationBarrier();
    } while( true );
  }
  pcStack_50 = (code *)param_3[1];
  local_58 = (undefined **)0x0;
LAB_0069ee28:
  lVar7 = DAT_009a6328;
  local_48 = param_3[2];
  if (DAT_009a6328 == DAT_009a6318) {
                    /* try { // try from 0069ee4c to 0069ee57 has its CatchHandler @ 0069ef58 */
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<tracing_core::dispatcher::Registrar>>::grow_one
              (&DAT_009a6318);
  }
  puVar6 = (undefined8 *)(DAT_009a6320 + lVar7 * 0x18);
  DAT_009a6328 = lVar7 + 1;
  puVar6[1] = pcStack_50;
  *puVar6 = local_58;
  puVar6[2] = local_48;
  *param_2 = (uint)(lVar7 < 1);
  *(byte *)(param_1 + 2) = bVar4;
  *param_1 = 2;
  param_1[1] = &DAT_009a6308;
  return;
}


// ===== 0069ef94  FUN_0069ef94 =====

/* WARNING: Removing unreachable block (ram,0x0069f044) */

void FUN_0069ef94(undefined8 *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *local_30;
  undefined4 *puStack_28;
  
  if (*param_2 != '\0') {
    *param_1 = 0;
    return;
  }
  if (DAT_009a6330 != 2) {
    FUN_0069e210();
  }
  if (DAT_009a6308 < 0x3ffffffe) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x9a6308,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_009a6308 = DAT_009a6308 + 1;
    }
    if (cVar1 == '\0') goto joined_r0x0069f010;
  }
  <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::read_contended
            (&DAT_009a6308);
joined_r0x0069f010:
  if (DAT_009a6310 != '\0') {
    local_30 = &DAT_009a6318;
    puStack_28 = &DAT_009a6308;
                    /* try { // try from 0069f070 to 0069f093 has its CatchHandler @ 0069f098 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              (&DAT_00453c09,0x2b,&local_30,&PTR_FUN_00975280,
               &PTR_s__home_runner__cargo_registry_src_009752f0);
  }
  param_1[1] = &DAT_009a6318;
  param_1[2] = &DAT_009a6308;
  *param_1 = 1;
  return;
}


// ===== 0069f0d8  <tracing_core::span::[0]::tracing_core::span::Attributes>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::span::[0]::tracing_core::span::Attributes>::record */

void __rustcall
<tracing_core::span::[0]::tracing_core::span::Attributes>::record
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1[1] != 0) {
    lVar2 = *(long *)(plVar1[2] + 0x10);
    lVar3 = plVar1[1] * 0x18;
    plVar1 = (long *)(*plVar1 + 0x10);
    do {
      if ((*(long *)(plVar1[-2] + 0x10) == lVar2) && (plVar1[-1] != 0)) {
        (**(code **)(*plVar1 + 0x18))(plVar1[-1],plVar1[-2],param_2,param_3);
      }
      lVar3 = lVar3 + -0x18;
      plVar1 = plVar1 + 3;
    } while (lVar3 != 0);
  }
  return;
}


// ===== 0069f16c  <tracing_core::span::[0]::tracing_core::span::Attributes>::contains =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::span::[0]::tracing_core::span::Attributes>::contains */

undefined8 __rustcall
<tracing_core::span::[0]::tracing_core::span::Attributes>::contains(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if ((*(long *)(param_2 + 0x10) == *(long *)(plVar1[2] + 0x10)) && (plVar1[1] != 0)) {
    lVar2 = plVar1[1] * 0x18;
    plVar1 = (long *)(*plVar1 + 8);
    do {
      if (((*(long *)(plVar1[-1] + 0x10) == *(long *)(param_2 + 0x10)) &&
          (*(long *)(plVar1[-1] + 0x20) == *(long *)(param_2 + 0x20))) && (*plVar1 != 0)) {
        return 1;
      }
      lVar2 = lVar2 + -0x18;
      plVar1 = plVar1 + 3;
    } while (lVar2 != 0);
  }
  return 0;
}


// ===== 0069f1e4  <tracing_core::span::[0]::tracing_core::span::Attributes>::is_empty =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::span::[0]::tracing_core::span::Attributes>::is_empty */

undefined8 __rustcall
<tracing_core::span::[0]::tracing_core::span::Attributes>::is_empty(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1[1] != 0) {
    lVar2 = plVar1[1] * 0x18;
    plVar3 = (long *)(*plVar1 + 8);
    do {
      if ((*plVar3 != 0) && (*(long *)(plVar3[-1] + 0x10) == *(long *)(plVar1[2] + 0x10))) {
        return 0;
      }
      lVar2 = lVar2 + -0x18;
      plVar3 = plVar3 + 3;
    } while (lVar2 != 0);
  }
  return 1;
}


// ===== 0069f240  <tracing_core::span::[1]::tracing_core::span::Record>::len =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::span::[1]::tracing_core::span::Record>::len */

long __rustcall <tracing_core::span::[1]::tracing_core::span::Record>::len(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  param_1 = (long *)*param_1;
  uVar4 = param_1[1];
  if (uVar4 == 0) {
    return 0;
  }
  lVar3 = *(long *)(param_1[2] + 0x10);
  if (uVar4 == 1) {
    uVar7 = 0;
    lVar2 = 0;
  }
  else {
    lVar5 = 0;
    lVar2 = 0;
    uVar7 = uVar4 & 0xfffffffffffffffe;
    uVar8 = uVar4 & 0xfffffffffffffffe;
    plVar6 = (long *)*param_1;
    do {
      lVar9 = *plVar6;
      plVar1 = plVar6 + 3;
      plVar6 = plVar6 + 6;
      if (*(long *)(lVar9 + 0x10) == lVar3) {
        lVar5 = lVar5 + 1;
      }
      if (*(long *)(*plVar1 + 0x10) == lVar3) {
        lVar2 = lVar2 + 1;
      }
      uVar8 = uVar8 - 2;
    } while (uVar8 != 0);
    lVar2 = lVar2 + lVar5;
    if (uVar4 == uVar7) {
      return lVar2;
    }
  }
  lVar5 = uVar4 - uVar7;
  plVar6 = (long *)*param_1 + uVar7 * 3;
  do {
    if (*(long *)(*plVar6 + 0x10) == lVar3) {
      lVar2 = lVar2 + 1;
    }
    lVar5 = lVar5 + -1;
    plVar6 = plVar6 + 3;
  } while (lVar5 != 0);
  return lVar2;
}


// ===== 0069f2e8  <tracing_core::span::[1]::tracing_core::span::Record>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::span::[1]::tracing_core::span::Record>::record */

void __rustcall
<tracing_core::span::[1]::tracing_core::span::Record>::record
          (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  param_1 = (long *)*param_1;
  if (param_1[1] != 0) {
    lVar1 = *(long *)(param_1[2] + 0x10);
    lVar2 = param_1[1] * 0x18;
    plVar3 = (long *)(*param_1 + 0x10);
    do {
      if ((*(long *)(plVar3[-2] + 0x10) == lVar1) && (plVar3[-1] != 0)) {
        (**(code **)(*plVar3 + 0x18))(plVar3[-1],plVar3[-2],param_2,param_3);
      }
      lVar2 = lVar2 + -0x18;
      plVar3 = plVar3 + 3;
    } while (lVar2 != 0);
  }
  return;
}


// ===== 0069f37c  <tracing_core::span::[1]::tracing_core::span::Record>::contains =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::span::[1]::tracing_core::span::Record>::contains */

undefined8 __rustcall
<tracing_core::span::[1]::tracing_core::span::Record>::contains(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  param_1 = (long *)*param_1;
  if ((*(long *)(param_2 + 0x10) == *(long *)(param_1[2] + 0x10)) && (param_1[1] != 0)) {
    lVar1 = param_1[1] * 0x18;
    plVar2 = (long *)(*param_1 + 8);
    do {
      if (((*(long *)(plVar2[-1] + 0x10) == *(long *)(param_2 + 0x10)) &&
          (*(long *)(plVar2[-1] + 0x20) == *(long *)(param_2 + 0x20))) && (*plVar2 != 0)) {
        return 1;
      }
      lVar1 = lVar1 + -0x18;
      plVar2 = plVar2 + 3;
    } while (lVar1 != 0);
  }
  return 0;
}


// ===== 0069f3f4  <tracing_core::span::[1]::tracing_core::span::Record>::is_empty =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::span::[1]::tracing_core::span::Record>::is_empty */

undefined8 __rustcall <tracing_core::span::[1]::tracing_core::span::Record>::is_empty(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  param_1 = (long *)*param_1;
  if (param_1[1] != 0) {
    lVar1 = param_1[1] * 0x18;
    plVar2 = (long *)(*param_1 + 8);
    do {
      if ((*plVar2 != 0) && (*(long *)(plVar2[-1] + 0x10) == *(long *)(param_1[2] + 0x10))) {
        return 0;
      }
      lVar1 = lVar1 + -0x18;
      plVar2 = plVar2 + 3;
    } while (lVar1 != 0);
  }
  return 1;
}


// ===== 0069f450  <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<dyn Trait<Assoc = X> + tracing_core::subscriber::Subscriber +
   core::marker::Sync + {backref 29}::Send>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
::drop_slow(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  
  lVar2 = *param_1;
  puVar3 = (undefined8 *)param_1[1];
  uVar7 = puVar3[2];
  if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 0069f47c to 0069f483 has its CatchHandler @ 0069f4f0 */
    (*(code *)*puVar3)(lVar2 + (uVar7 - 1 & 0xfffffffffffffff0) + 0x10);
  }
  if (lVar2 != -1) {
    plVar1 = (long *)(lVar2 + 8);
    do {
      lVar6 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 + -1 == 0) {
      DataMemoryBarrier(2,1);
      if (uVar7 < 9) {
        uVar7 = 8;
      }
      uVar7 = uVar7 + puVar3[1] + 0xf & -uVar7;
      if (uVar7 != 0) {
        __rustc::__rust_dealloc(lVar2,uVar7);
        return;
      }
    }
  }
  return;
}


// ===== 0069f508  FUN_0069f508 =====

bool FUN_0069f508(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  
  lVar1 = FUN_006a2b5c(*param_1);
  if (lVar1 != 0) {
    uVar2 = param_1[1];
    if (((uVar2 != 0) && (1 < (uVar2 & 3) - 2)) && ((uVar2 & 3) != 0)) {
      local_28 = uVar2 - 1;
                    /* try { // try from 0069f55c to 0069f563 has its CatchHandler @ 0069f580 */
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
    param_1[1] = lVar1;
  }
  return lVar1 != 0;
}


// ===== 0069f588  <core::fmt::builders::DebugMap_as_tracing_core::field::Visit>::record_debug =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::DebugMap as tracing_core::field::Visit>::record_debug */

void __rustcall
<core::fmt::builders::DebugMap_as_tracing_core::field::Visit>::record_debug
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_38;
  undefined *puStack_30;
  undefined8 **local_28;
  undefined8 *local_20;
  code *pcStack_18;
  
  local_20 = &local_38;
  pcStack_18 = FUN_006a3754;
  local_28 = &local_20;
  puStack_30 = &DAT_00368e80;
  local_38 = param_2;
  <core::fmt::builders::[6]::core::fmt::builders::DebugMap>::entry
            (param_1,&puStack_30,&DAT_00975348,param_3,param_4);
  return;
}


// ===== 0069f5dc  <tracing_core::metadata::Kind_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::metadata::Kind as core::fmt::Debug>::fmt */

undefined8 __rustcall
<tracing_core::metadata::Kind_as_core::fmt::Debug>::fmt(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte *local_40;
  undefined *puStack_38;
  
  uVar2 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00453c5c,5);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  bVar1 = *param_1;
  if ((bVar1 & 1) == 0) {
    if ((bVar1 >> 1 & 1) != 0) {
LAB_0069f6d8:
      uVar2 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00377ffc,4);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      goto LAB_0069f708;
    }
    if ((bVar1 >> 2 & 1) == 0) {
      puStack_38 = PTR_fmt_0099f668;
      local_40 = param_1;
      uVar2 = core::fmt::write(*param_2,param_2[1],&DAT_00453c66,&local_40);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      goto LAB_0069f76c;
    }
  }
  else {
    uVar2 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00453c61,5);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    if ((bVar1 >> 1 & 1) != 0) {
      uVar2 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00453bf4,3);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      goto LAB_0069f6d8;
    }
LAB_0069f708:
    if ((bVar1 >> 2 & 1) == 0) goto LAB_0069f76c;
    uVar2 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00453bf4,3);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  uVar2 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_003797d4,4);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
LAB_0069f76c:
  uVar3 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,")",1);
  return uVar3;
}


// ===== 0069f794  FUN_0069f794 =====

void FUN_0069f794(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  undefined8 local_8;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_38,param_2,"DynMetadata",0xb);
  local_8 = *param_1;
  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::field
            (auStack_38,&local_8,&DAT_00975368);
  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::finish();
  return;
}


// ===== 0069f7f4  FUN_0069f7f4 =====

void FUN_0069f7f4(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0069f7fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x18))(*param_1);
  return;
}


// ===== 0069f800  FUN_0069f800 =====

void FUN_0069f800(undefined8 *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_00453e18 + *(int *)(&DAT_00453e18 + *(long *)*param_1 * 4),
             *(undefined8 *)(&DAT_00453df0 + *(long *)*param_1 * 8));
  return;
}


// ===== 0069f82c  FUN_0069f82c =====

void FUN_0069f82c(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*(undefined8 *)*param_1,((undefined8 *)*param_1)[1],param_2);
  return;
}


// ===== 0069f840  FUN_0069f840 =====

void FUN_0069f840(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  if (lVar2 != 0) {
    lVar2 = lVar2 << 4;
    do {
      local_18 = lVar1;
      <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::entry
                (auStack_40,&local_18,&DAT_009751c0);
      lVar2 = lVar2 + -0x10;
      lVar1 = lVar1 + 0x10;
    } while (lVar2 != 0);
  }
  <core::fmt::builders::[5]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 0069f8b0  FUN_0069f8b0 =====

void FUN_0069f8b0(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 0069f8c4  FUN_0069f8c4 =====

void FUN_0069f8c4(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 0069f8d8  FUN_0069f8d8 =====

void FUN_0069f8d8(undefined8 *param_1)

{
  <u8_as_core::fmt::LowerHex>::fmt(*param_1);
  return;
}


// ===== 0069f8e0  <tracing_core::metadata::Level_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::metadata::Level as core::fmt::Display>::fmt */

void __rustcall
<tracing_core::metadata::Level_as_core::fmt::Display>::fmt(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"TRACE",5);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"DEBUG",5);
    return;
  }
  if (lVar1 != 2) {
    if (lVar1 == 3) {
      <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_00379d8c,4);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"ERRORTraceDebugInfoWarnError",5);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_003788c4,4);
  return;
}


// ===== 0069f954  <tracing_core::metadata::Level_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::metadata::Level as core::str::traits::FromStr>::from_str */

long __rustcall
<tracing_core::metadata::Level_as_core::str::traits::FromStr>::from_str(byte *param_1,long param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
    return -1;
  }
  pbVar7 = param_1;
  if (param_2 == 1) {
    bVar1 = *param_1;
    if (bVar1 == 0x2b) {
      return -1;
    }
    if (bVar1 == 0x2d) {
      return -1;
    }
    uVar6 = (ulong)(bVar1 != 0x2b);
    if (bVar1 == 0x2b) {
      pbVar7 = param_1 + 1;
    }
  }
  else {
    bVar1 = *param_1;
    if (bVar1 == 0x2b) {
      pbVar7 = param_1 + 1;
    }
    uVar6 = param_2 - (ulong)(bVar1 == 0x2b);
  }
  uVar5 = (uint)bVar1;
  if (uVar6 < 0x11) {
    if (uVar6 != 0) {
      uVar8 = 0;
      do {
        if (9 < *pbVar7 - 0x30) goto LAB_0069fa2c;
        uVar6 = uVar6 - 1;
        uVar8 = uVar8 * 10 + (ulong)(*pbVar7 - 0x30);
        pbVar7 = pbVar7 + 1;
      } while (uVar6 != 0);
LAB_0069f9b8:
      if (uVar8 - 1 < 5) {
        return 5 - uVar8;
      }
    }
  }
  else {
    uVar8 = 0;
    while( true ) {
      if (uVar6 == 0) goto LAB_0069f9b8;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar8;
      if (SUB168(auVar2 * ZEXT816(10),8) != 0) break;
      uVar9 = uVar8 * 10;
      uVar3 = *pbVar7 - 0x30;
      uVar8 = uVar9 + uVar3;
      if ((9 < uVar3) || (uVar6 = uVar6 - 1, pbVar7 = pbVar7 + 1, CARRY8(uVar9,(ulong)uVar3)))
      break;
    }
  }
LAB_0069fa2c:
  if (param_2 == 4) {
    uVar4 = 0x20;
    uVar3 = uVar4;
    if (0x19 < uVar5 - 0x41) {
      uVar3 = 0;
    }
    if ((uVar3 | uVar5) == 0x69) {
      if (0x19 < param_1[1] - 0x41) {
        uVar4 = 0;
      }
      if ((uVar4 | param_1[1]) == 0x6e) {
        uVar3 = 0x20;
        uVar5 = uVar3;
        if (0x19 < param_1[2] - 0x41) {
          uVar5 = 0;
        }
        if ((uVar5 | param_1[2]) == 0x66) {
          if (0x19 < param_1[3] - 0x41) {
            uVar3 = 0;
          }
          if ((uVar3 | param_1[3]) == 0x6f) {
            return 2;
          }
        }
      }
    }
    else if ((uVar3 | uVar5) == 0x77) {
      uVar3 = 0x20;
      uVar5 = uVar3;
      if (0x19 < param_1[1] - 0x41) {
        uVar5 = 0;
      }
      if ((uVar5 | param_1[1]) == 0x61) {
        if (0x19 < param_1[2] - 0x41) {
          uVar3 = 0;
        }
        if ((uVar3 | param_1[2]) == 0x72) {
          uVar5 = 0x20;
          if (0x19 < param_1[3] - 0x41) {
            uVar5 = 0;
          }
          if ((uVar5 | param_1[3]) == 0x6e) {
            return 3;
          }
        }
      }
    }
  }
  else if (param_2 == 5) {
    uVar4 = 0x20;
    uVar3 = uVar4;
    if (0x19 < uVar5 - 0x41) {
      uVar3 = 0;
    }
    uVar3 = uVar3 | uVar5;
    if (uVar3 == 100) {
      if (0x19 < param_1[1] - 0x41) {
        uVar4 = 0;
      }
      if ((uVar4 | param_1[1]) == 0x65) {
        uVar3 = 0x20;
        uVar5 = uVar3;
        if (0x19 < param_1[2] - 0x41) {
          uVar5 = 0;
        }
        if ((uVar5 | param_1[2]) == 0x62) {
          if (0x19 < param_1[3] - 0x41) {
            uVar3 = 0;
          }
          if ((uVar3 | param_1[3]) == 0x75) {
            uVar5 = 0x20;
            if (0x19 < param_1[4] - 0x41) {
              uVar5 = 0;
            }
            if ((uVar5 | param_1[4]) == 0x67) {
              return 1;
            }
          }
        }
      }
    }
    else if (uVar3 == 0x74) {
      uVar3 = 0x20;
      uVar5 = uVar3;
      if (0x19 < param_1[1] - 0x41) {
        uVar5 = 0;
      }
      if ((uVar5 | param_1[1]) == 0x72) {
        if (0x19 < param_1[2] - 0x41) {
          uVar3 = 0;
        }
        if ((uVar3 | param_1[2]) == 0x61) {
          uVar3 = 0x20;
          uVar5 = uVar3;
          if (0x19 < param_1[3] - 0x41) {
            uVar5 = 0;
          }
          if ((uVar5 | param_1[3]) == 99) {
            if (0x19 < param_1[4] - 0x41) {
              uVar3 = 0;
            }
            return -(ulong)((uVar3 | param_1[4]) != 0x65);
          }
        }
      }
    }
    else if (uVar3 == 0x65) {
      uVar3 = 0x20;
      uVar5 = uVar3;
      if (0x19 < param_1[1] - 0x41) {
        uVar5 = 0;
      }
      if ((uVar5 | param_1[1]) == 0x72) {
        if (0x19 < param_1[2] - 0x41) {
          uVar3 = 0;
        }
        if ((uVar3 | param_1[2]) == 0x72) {
          uVar3 = 0x20;
          uVar5 = uVar3;
          if (0x19 < param_1[3] - 0x41) {
            uVar5 = 0;
          }
          if ((uVar5 | param_1[3]) == 0x6f) {
            if (0x19 < param_1[4] - 0x41) {
              uVar3 = 0;
            }
            if ((uVar3 | param_1[4]) == 0x72) {
              return 4;
            }
          }
        }
      }
    }
  }
  return -1;
}


// ===== 0069fcd4  FUN_0069fcd4 =====

void FUN_0069fcd4(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 8;
  *(undefined8 *)(param_1 + 6) = 0;
  return;
}


// ===== 0069fcec  FUN_0069fcec =====

void FUN_0069fcec(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <i64_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <i64_as_core::fmt::Display>::fmt();
    return;
  }
  <i64_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 0069fd04  FUN_0069fd04 =====

void FUN_0069fd04(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <i128_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <i128_as_core::fmt::Display>::fmt();
    return;
  }
  <i128_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 0069fd1c  FUN_0069fd1c =====

void FUN_0069fd1c(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u32_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <u32_as_core::fmt::Display>::fmt();
    return;
  }
  <u32_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 0069fd34  FUN_0069fd34 =====

void FUN_0069fd34(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u64_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <usize_as_core::fmt::Display>::fmt();
    return;
  }
  <u64_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 0069fd4c  FUN_0069fd4c =====

void FUN_0069fd4c(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u128_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <u128_as_core::fmt::Display>::fmt();
    return;
  }
  <u128_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 0069fd64  <core::fmt::builders::DebugStruct_as_tracing_core::field::Visit>::record_debug =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::DebugStruct as tracing_core::field::Visit>::record_debug */

void __rustcall
<core::fmt::builders::DebugStruct_as_tracing_core::field::Visit>::record_debug
          (undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = param_2[4];
  if (uVar2 < (ulong)param_2[1]) {
    puVar1 = (undefined8 *)(*param_2 + uVar2 * 0x10);
    <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
              (param_1,*puVar1,puVar1[1],param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (uVar2,param_2[1],&PTR_s__home_runner__cargo_registry_src_00975388);
}


// ===== 0069fda8  <tracing_core::metadata::Metadata_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::metadata::Metadata as core::fmt::Debug>::fmt */

void __rustcall
<tracing_core::metadata::Metadata_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined ***pppuVar3;
  undefined *puVar4;
  undefined1 auStack_78 [20];
  undefined4 local_64;
  undefined **local_60;
  code *pcStack_58;
  undefined4 *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined **ppuStack_38;
  undefined8 *local_30;
  undefined8 **ppuStack_28;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_78,param_2,&DAT_00375c20,8);
  uVar1 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (auStack_78,&DAT_00378e60,4,param_1 + 0x10,&DAT_009753a0);
  uVar1 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (uVar1,"target",6,param_1 + 0x20,&DAT_009753a0);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (uVar1,"level",5,param_1,&DAT_009753c0);
  if (*(undefined ***)(param_1 + 0x50) != (undefined **)0x0) {
    pcStack_58 = *(code **)(param_1 + 0x58);
    local_60 = *(undefined ***)(param_1 + 0x50);
    <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
              (auStack_78,"module_path",0xb,&local_60,&DAT_009753a0);
  }
  puVar4 = *(undefined **)(param_1 + 0x60);
  if (puVar4 == (undefined *)0x0) {
    if (*(uint *)(param_1 + 8) == 0) goto LAB_0069ff34;
    pcVar2 = &DAT_00378c80;
    puVar4 = &DAT_009753e0;
    pppuVar3 = &local_60;
    local_60 = (undefined **)CONCAT44(local_60._4_4_,*(undefined4 *)(param_1 + 0xc));
LAB_0069ff2c:
    uVar1 = 4;
  }
  else {
    ppuStack_38 = *(undefined ***)(param_1 + 0x68);
    local_40 = puVar4;
    if ((*(uint *)(param_1 + 8) & 1) == 0) {
      local_60 = &local_40;
      pcVar2 = &DAT_00379908;
      pcStack_58 = FUN_0069f8c4;
      ppuStack_28 = &local_60;
      puVar4 = &DAT_00975348;
      local_30 = (undefined8 *)&DAT_00368e80;
      pppuVar3 = (undefined ***)&local_30;
      goto LAB_0069ff2c;
    }
    local_60 = &local_40;
    pcVar2 = "location";
    pcStack_58 = FUN_0069f8c4;
    local_50 = &local_64;
    puVar4 = &DAT_00975348;
    pppuVar3 = (undefined ***)&local_30;
    puStack_48 = PTR_fmt_0099f518;
    ppuStack_28 = &local_60;
    uVar1 = 8;
    local_30 = (undefined8 *)&DAT_00366572;
    local_64 = *(undefined4 *)(param_1 + 0xc);
  }
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (auStack_78,pcVar2,uVar1,pppuVar3,puVar4);
LAB_0069ff34:
  local_30 = (undefined8 *)(param_1 + 0x30);
  ppuStack_28 = (undefined8 **)PTR_fmt_0099f6d0;
  ppuStack_38 = (undefined **)&local_30;
  local_40 = &DAT_00368e80;
  uVar1 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (auStack_78,"fields",6,&local_40,&DAT_00975348);
  pcStack_58 = *(code **)(param_1 + 0x48);
  local_60 = *(undefined ***)(param_1 + 0x40);
  uVar1 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (uVar1,"callsite",8,&local_60,&DAT_00975400);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (uVar1,&DAT_00376fb4,4,param_1 + 0x70,&DAT_00975420);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 0069ffc0  FUN_0069ffc0 =====

void FUN_0069ffc0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,"PoisonError",0xb);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 0069fff8  FUN_0069fff8 =====

void FUN_0069fff8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,"PoisonError",0xb);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 006a0030  <tracing_core::metadata::LevelFilter_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::metadata::LevelFilter as core::fmt::Display>::fmt */

void __rustcall
<tracing_core::metadata::LevelFilter_as_core::fmt::Display>::fmt(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (1 < lVar1) {
    if (lVar1 == 2) {
      <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_00376404,4);
      return;
    }
    if (lVar1 == 3) {
      <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_003765fc,4);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_00453bf7,5);
    return;
  }
  if (lVar1 == -1) {
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_00453c06,3);
    return;
  }
  if (lVar1 == 0) {
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_00453c01,5);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_00453bfc,5);
  return;
}


// ===== 006a00bc  <tracing_core::metadata::LevelFilter_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::metadata::LevelFilter as core::fmt::Debug>::fmt */

void __rustcall
<tracing_core::metadata::LevelFilter_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (1 < lVar1) {
    if (lVar1 == 2) {
      <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"LevelFilter::INFO",0x11);
      return;
    }
    if (lVar1 == 3) {
      <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"LevelFilter::WARN",0x11);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"LevelFilter::ERROR",0x12);
    return;
  }
  if (lVar1 == -1) {
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_00372df0,0x10);
    return;
  }
  if (lVar1 == 0) {
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"LevelFilter::TRACE",0x12);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,"LevelFilter::DEBUG",0x12);
  return;
}


// ===== 006a0148  <tracing_core::metadata::LevelFilter_as_core::str::traits::FromStr>::from_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::metadata::LevelFilter as core::str::traits::FromStr>::from_str */

undefined8 __rustcall
<tracing_core::metadata::LevelFilter_as_core::str::traits::FromStr>::from_str
          (byte *param_1,long param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_2 == 0) {
    return 4;
  }
  pbVar8 = param_1;
  if (param_2 == 1) {
    bVar2 = *param_1;
    if (bVar2 == 0x2b) {
      return 0xfffffffffffffffe;
    }
    if (bVar2 == 0x2d) {
      return 0xfffffffffffffffe;
    }
    uVar7 = (ulong)(bVar2 != 0x2b);
    if (bVar2 == 0x2b) {
      pbVar8 = param_1 + 1;
    }
  }
  else {
    bVar2 = *param_1;
    if (bVar2 == 0x2b) {
      pbVar8 = param_1 + 1;
    }
    uVar7 = param_2 - (ulong)(bVar2 == 0x2b);
  }
  uVar6 = (uint)bVar2;
  if (uVar7 < 0x11) {
    if (uVar7 == 0) {
      return 0xffffffffffffffff;
    }
    uVar9 = 0;
    do {
      if (9 < *pbVar8 - 0x30) goto LAB_006a0224;
      uVar7 = uVar7 - 1;
      uVar9 = uVar9 * 10 + (ulong)(*pbVar8 - 0x30);
      pbVar8 = pbVar8 + 1;
    } while (uVar7 != 0);
LAB_006a01ac:
    if (uVar9 < 6) {
      return *(undefined8 *)(&DAT_00453e30 + uVar9 * 8);
    }
  }
  else {
    uVar9 = 0;
    while( true ) {
      if (uVar7 == 0) goto LAB_006a01ac;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar9;
      if (SUB168(auVar3 * ZEXT816(10),8) != 0) break;
      uVar10 = uVar9 * 10;
      uVar4 = *pbVar8 - 0x30;
      uVar9 = uVar10 + uVar4;
      if ((9 < uVar4) || (uVar7 = uVar7 - 1, pbVar8 = pbVar8 + 1, CARRY8(uVar10,(ulong)uVar4)))
      break;
    }
  }
LAB_006a0224:
  if (param_2 < 4) {
    if (param_2 == 0) {
      return 4;
    }
    if (param_2 == 3) {
      uVar5 = 0x20;
      uVar4 = uVar5;
      if (0x19 < uVar6 - 0x41) {
        uVar4 = 0;
      }
      if ((uVar4 | uVar6) == 0x6f) {
        if (0x19 < param_1[1] - 0x41) {
          uVar5 = 0;
        }
        if ((uVar5 | param_1[1]) != 0x66) {
          return 0xfffffffffffffffe;
        }
        uVar6 = 0x20;
        if (0x19 < param_1[2] - 0x41) {
          uVar6 = 0;
        }
        uVar1 = 0xfffffffffffffffe;
        if ((uVar6 | param_1[2]) == 0x66) {
          uVar1 = 0xffffffffffffffff;
        }
        return uVar1;
      }
    }
  }
  else if (param_2 == 4) {
    uVar5 = 0x20;
    uVar4 = uVar5;
    if (0x19 < uVar6 - 0x41) {
      uVar4 = 0;
    }
    if ((uVar4 | uVar6) == 0x69) {
      if (0x19 < param_1[1] - 0x41) {
        uVar5 = 0;
      }
      if ((uVar5 | param_1[1]) == 0x6e) {
        uVar4 = 0x20;
        uVar6 = uVar4;
        if (0x19 < param_1[2] - 0x41) {
          uVar6 = 0;
        }
        if ((uVar6 | param_1[2]) == 0x66) {
          if (0x19 < param_1[3] - 0x41) {
            uVar4 = 0;
          }
          if ((uVar4 | param_1[3]) == 0x6f) {
            return 2;
          }
        }
      }
    }
    else if ((uVar4 | uVar6) == 0x77) {
      uVar4 = 0x20;
      uVar6 = uVar4;
      if (0x19 < param_1[1] - 0x41) {
        uVar6 = 0;
      }
      if ((uVar6 | param_1[1]) == 0x61) {
        if (0x19 < param_1[2] - 0x41) {
          uVar4 = 0;
        }
        if ((uVar4 | param_1[2]) == 0x72) {
          uVar6 = 0x20;
          if (0x19 < param_1[3] - 0x41) {
            uVar6 = 0;
          }
          if ((uVar6 | param_1[3]) == 0x6e) {
            return 3;
          }
        }
      }
    }
  }
  else if (param_2 == 5) {
    uVar5 = 0x20;
    uVar4 = uVar5;
    if (0x19 < uVar6 - 0x41) {
      uVar4 = 0;
    }
    uVar4 = uVar4 | uVar6;
    if (uVar4 == 100) {
      if (0x19 < param_1[1] - 0x41) {
        uVar5 = 0;
      }
      if ((uVar5 | param_1[1]) == 0x65) {
        uVar4 = 0x20;
        uVar6 = uVar4;
        if (0x19 < param_1[2] - 0x41) {
          uVar6 = 0;
        }
        if ((uVar6 | param_1[2]) == 0x62) {
          if (0x19 < param_1[3] - 0x41) {
            uVar4 = 0;
          }
          if ((uVar4 | param_1[3]) == 0x75) {
            uVar6 = 0x20;
            if (0x19 < param_1[4] - 0x41) {
              uVar6 = 0;
            }
            if ((uVar6 | param_1[4]) == 0x67) {
              return 1;
            }
          }
        }
      }
    }
    else if (uVar4 == 0x74) {
      uVar4 = 0x20;
      uVar6 = uVar4;
      if (0x19 < param_1[1] - 0x41) {
        uVar6 = 0;
      }
      if ((uVar6 | param_1[1]) == 0x72) {
        if (0x19 < param_1[2] - 0x41) {
          uVar4 = 0;
        }
        if ((uVar4 | param_1[2]) == 0x61) {
          uVar4 = 0x20;
          uVar6 = uVar4;
          if (0x19 < param_1[3] - 0x41) {
            uVar6 = 0;
          }
          if ((uVar6 | param_1[3]) == 99) {
            if (0x19 < param_1[4] - 0x41) {
              uVar4 = 0;
            }
            if ((uVar4 | param_1[4]) == 0x65) {
              return 0;
            }
          }
        }
      }
    }
    else if (uVar4 == 0x65) {
      uVar4 = 0x20;
      uVar6 = uVar4;
      if (0x19 < param_1[1] - 0x41) {
        uVar6 = 0;
      }
      if ((uVar6 | param_1[1]) == 0x72) {
        if (0x19 < param_1[2] - 0x41) {
          uVar4 = 0;
        }
        if ((uVar4 | param_1[2]) == 0x72) {
          uVar4 = 0x20;
          uVar6 = uVar4;
          if (0x19 < param_1[3] - 0x41) {
            uVar6 = 0;
          }
          if ((uVar6 | param_1[3]) == 0x6f) {
            if (0x19 < param_1[4] - 0x41) {
              uVar4 = 0;
            }
            if ((uVar4 | param_1[4]) == 0x72) {
              return 4;
            }
          }
        }
      }
    }
  }
  return 0xfffffffffffffffe;
}


// ===== 006a055c  <bool_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <bool_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_009a06e0)();
  return;
}


// ===== 006a0560  <tracing_core::metadata::ParseLevelError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::metadata::ParseLevelError as core::fmt::Display>::fmt */

void __rustcall
<tracing_core::metadata::ParseLevelError_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad
            (param_2,
             "error parsing level: expected one of \"error\", \"warn\", \"info\", \"debug\", \"trace\", or a number 1-5"
             ,0x5f);
  return;
}


// ===== 006a0574  <tracing_core::metadata::ParseLevelFilterError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::metadata::ParseLevelFilterError as core::fmt::Display>::fmt */

void __rustcall
<tracing_core::metadata::ParseLevelFilterError_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad
            (param_2,
             "error parsing level filter: expected one of \"off\", \"error\", \"warn\", \"info\", \"debug\", \"trace\", or a number 0-5"
             ,0x6d);
  return;
}


// ===== 006a0588  <core::fmt::Arguments_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::Arguments as tracing_core::field::Value>::record */

void __rustcall
<core::fmt::Arguments_as_tracing_core::field::Value>::record
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006a05a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x60))(param_3,param_2,param_1,&DAT_00975348);
  return;
}


// ===== 006a05a4  FUN_006a05a4 =====

void FUN_006a05a4(undefined8 *param_1)

{
  core::fmt::pointer_fmt_inner(*param_1);
  return;
}


// ===== 006a05ac  FUN_006a05ac =====

void FUN_006a05ac(undefined8 *param_1)

{
  core::fmt::pointer_fmt_inner(*param_1);
  return;
}


// ===== 006a05b4  <alloc::string::String_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::string::String as tracing_core::field::Value>::record */

void __rustcall
<alloc::string::String_as_tracing_core::field::Value>::record
          (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006a05c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x48))
            (param_3,param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  return;
}


// ===== 006a05cc  FUN_006a05cc =====

void FUN_006a05cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"Level",5,&local_18,&DAT_00975440);
  return;
}


// ===== 006a060c  FUN_006a060c =====

bool FUN_006a060c(undefined8 *param_1,uint param_2)

{
  byte bVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  uint local_34;
  undefined1 local_30;
  long local_28;
  
  if (param_2 < 0x80) {
    local_34 = param_2 & 0xff;
    lVar3 = FUN_006a2b5c(*param_1,&local_34,1);
    if (lVar3 != 0) goto LAB_006a0714;
    lVar3 = 0;
  }
  else {
    uVar2 = (undefined1)param_2;
    if (param_2 < 0x800) {
      local_34 = (CONCAT11(uVar2,(char)(param_2 >> 6)) & 0x3fff | 0x8000) | 0xc0;
      lVar3 = FUN_006a2b5c(*param_1,&local_34,2);
      if (lVar3 != 0) {
LAB_006a0714:
        uVar4 = param_1[1];
        if (((uVar4 != 0) && (1 < (uVar4 & 3) - 2)) && ((uVar4 & 3) != 0)) {
          local_28 = uVar4 - 1;
          local_30 = 3;
                    /* try { // try from 006a0744 to 006a074b has its CatchHandler @ 006a0768 */
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
        }
        param_1[1] = lVar3;
        return lVar3 != 0;
      }
      lVar3 = 0;
    }
    else {
      bVar1 = (byte)(param_2 >> 6);
      if (param_2 >> 0x10 == 0) {
        local_34._0_2_ = (bVar1 & 0xff3f | 0x80) << 8;
        local_34 = CONCAT31(CONCAT12(uVar2,(short)local_34) >> 8,(char)(param_2 >> 0xc)) & 0x3fffff
                   | 0x8000e0;
        lVar3 = FUN_006a2b5c(*param_1,&local_34,3);
      }
      else {
        local_34 = CONCAT31(CONCAT21(CONCAT11(uVar2,bVar1),(char)(param_2 >> 0xc)),
                            (char)(param_2 >> 0x12)) & 0x3f3f3fff | 0x808080f0;
        lVar3 = FUN_006a2b5c(*param_1,&local_34,4);
      }
      if (lVar3 != 0) goto LAB_006a0714;
    }
  }
  return lVar3 != 0;
}


// ===== 006a0770  FUN_006a0770 =====

void FUN_006a0770(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&PTR_FUN_00975220,param_2,param_3);
  return;
}


// ===== 006a0784  FUN_006a0784 =====

void FUN_006a0784(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 local_18;
  
  uVar2 = param_3[4];
  local_18 = param_1;
  if (uVar2 < (ulong)param_3[1]) {
    puVar1 = (undefined8 *)(*param_3 + uVar2 * 0x10);
    <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
              (param_2,*puVar1,puVar1[1],&local_18,&DAT_00975460);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (uVar2,param_3[1],&PTR_s__home_runner__cargo_registry_src_00975388);
}


// ===== 006a07e0  FUN_006a07e0 =====

void FUN_006a07e0(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 local_18;
  
  uVar2 = param_2[4];
  local_18 = param_3;
  if (uVar2 < (ulong)param_2[1]) {
    puVar1 = (undefined8 *)(*param_2 + uVar2 * 0x10);
    <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
              (param_1,*puVar1,puVar1[1],&local_18,&DAT_00975480);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (uVar2,param_2[1],&PTR_s__home_runner__cargo_registry_src_00975388);
}


// ===== 006a083c  FUN_006a083c =====

void FUN_006a083c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uVar2 = param_2[4];
  local_20 = param_3;
  uStack_18 = param_4;
  if (uVar2 < (ulong)param_2[1]) {
    puVar1 = (undefined8 *)(*param_2 + uVar2 * 0x10);
    <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
              (param_1,*puVar1,puVar1[1],&local_20,&DAT_009753a0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (uVar2,param_2[1],&PTR_s__home_runner__cargo_registry_src_00975388);
}


// ===== 006a0898  FUN_006a0898 =====

void FUN_006a0898(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 local_18;
  
  uVar2 = param_2[4];
  local_18 = param_3;
  if (uVar2 < (ulong)param_2[1]) {
    puVar1 = (undefined8 *)(*param_2 + uVar2 * 0x10);
    <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
              (param_1,*puVar1,puVar1[1],&local_18,&DAT_009754a0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (uVar2,param_2[1],&PTR_s__home_runner__cargo_registry_src_00975388);
}


// ===== 006a08f4  FUN_006a08f4 =====

void FUN_006a08f4(undefined8 param_1,long *param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 local_14 [4];
  
  uVar2 = param_2[4];
  local_14[0] = param_3;
  if (uVar2 < (ulong)param_2[1]) {
    puVar1 = (undefined8 *)(*param_2 + uVar2 * 0x10);
    <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
              (param_1,*puVar1,puVar1[1],local_14,&DAT_009754c0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (uVar2,param_2[1],&PTR_s__home_runner__cargo_registry_src_00975388);
}


// ===== 006a0950  FUN_006a0950 =====

void FUN_006a0950(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uVar2 = param_2[4];
  local_20 = param_3;
  uStack_18 = param_4;
  if (uVar2 < (ulong)param_2[1]) {
    puVar1 = (undefined8 *)(*param_2 + uVar2 * 0x10);
    <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
              (param_1,*puVar1,puVar1[1],&local_20,&DAT_009754e0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (uVar2,param_2[1],&PTR_s__home_runner__cargo_registry_src_00975388);
}


// ===== 006a09ac  FUN_006a09ac =====

void FUN_006a09ac(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uVar2 = param_2[4];
  local_20 = param_3;
  uStack_18 = param_4;
  if (uVar2 < (ulong)param_2[1]) {
    puVar1 = (undefined8 *)(*param_2 + uVar2 * 0x10);
    <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
              (param_1,*puVar1,puVar1[1],&local_20,&DAT_00975500);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (uVar2,param_2[1],&PTR_s__home_runner__cargo_registry_src_00975388);
}


// ===== 006a0a08  FUN_006a0a08 =====

void FUN_006a0a08(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uVar2 = param_2[4];
  local_20 = param_3;
  uStack_18 = param_4;
  if (uVar2 < (ulong)param_2[1]) {
    puVar1 = (undefined8 *)(*param_2 + uVar2 * 0x10);
    <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
              (param_1,*puVar1,puVar1[1],&local_20,&DAT_00975520);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (uVar2,param_2[1],&PTR_s__home_runner__cargo_registry_src_00975388);
}


// ===== 006a0a64  FUN_006a0a64 =====

void FUN_006a0a64(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uVar2 = param_2[4];
  local_20 = param_3;
  uStack_18 = param_4;
  if (uVar2 < (ulong)param_2[1]) {
    puVar1 = (undefined8 *)(*param_2 + uVar2 * 0x10);
    <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
              (param_1,*puVar1,puVar1[1],&local_20,&DAT_00975540);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (uVar2,param_2[1],&PTR_s__home_runner__cargo_registry_src_00975388);
}


// ===== 006a0ac0  FUN_006a0ac0 =====

void FUN_006a0ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_40;
  undefined8 local_38;
  undefined *puStack_30;
  undefined8 **local_28;
  undefined8 *local_20;
  code *pcStack_18;
  
  local_20 = &local_38;
  pcStack_18 = FUN_006a3754;
  local_28 = &local_20;
  puStack_30 = &DAT_00368e80;
  local_40 = param_1;
  local_38 = param_3;
  <core::fmt::builders::[6]::core::fmt::builders::DebugMap>::entry
            (param_2,&puStack_30,&DAT_00975348,&local_40,&DAT_00975460);
  return;
}


// ===== 006a0b1c  FUN_006a0b1c =====

void FUN_006a0b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined *local_30;
  undefined8 **ppuStack_28;
  undefined8 *local_20;
  code *pcStack_18;
  
  local_20 = &uStack_38;
  pcStack_18 = FUN_006a3754;
  ppuStack_28 = &local_20;
  local_30 = &DAT_00368e80;
  local_40 = param_3;
  uStack_38 = param_2;
  <core::fmt::builders::[6]::core::fmt::builders::DebugMap>::entry
            (param_1,&local_30,&DAT_00975348,&local_40,&DAT_00975480);
  return;
}


// ===== 006a0b74  FUN_006a0b74 =====

void FUN_006a0b74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined *puStack_30;
  undefined8 **local_28;
  undefined8 *local_20;
  code *pcStack_18;
  
  local_20 = &local_38;
  pcStack_18 = FUN_006a3754;
  local_28 = &local_20;
  puStack_30 = &DAT_00368e80;
  local_48 = param_3;
  uStack_40 = param_4;
  local_38 = param_2;
  <core::fmt::builders::[6]::core::fmt::builders::DebugMap>::entry
            (param_1,&puStack_30,&DAT_00975348,&local_48,&DAT_009753a0);
  return;
}


// ===== 006a0bd0  FUN_006a0bd0 =====

void FUN_006a0bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined *local_30;
  undefined8 **ppuStack_28;
  undefined8 *local_20;
  code *pcStack_18;
  
  local_20 = &uStack_38;
  pcStack_18 = FUN_006a3754;
  ppuStack_28 = &local_20;
  local_30 = &DAT_00368e80;
  local_40 = param_3;
  uStack_38 = param_2;
  <core::fmt::builders::[6]::core::fmt::builders::DebugMap>::entry
            (param_1,&local_30,&DAT_00975348,&local_40,&DAT_009754a0);
  return;
}


// ===== 006a0c28  FUN_006a0c28 =====

void FUN_006a0c28(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 local_3c [4];
  undefined8 local_38;
  undefined *puStack_30;
  undefined8 **local_28;
  undefined8 *local_20;
  code *pcStack_18;
  
  local_20 = &local_38;
  pcStack_18 = FUN_006a3754;
  local_28 = &local_20;
  puStack_30 = &DAT_00368e80;
  local_3c[0] = param_3;
  local_38 = param_2;
  <core::fmt::builders::[6]::core::fmt::builders::DebugMap>::entry
            (param_1,&puStack_30,&DAT_00975348,local_3c,&DAT_009754c0);
  return;
}


// ===== 006a0c84  FUN_006a0c84 =====

void FUN_006a0c84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  undefined *puStack_30;
  undefined8 **local_28;
  undefined8 *local_20;
  code *pcStack_18;
  
  local_20 = &local_38;
  pcStack_18 = FUN_006a3754;
  local_28 = &local_20;
  puStack_30 = &DAT_00368e80;
  local_50 = param_3;
  uStack_48 = param_4;
  local_38 = param_2;
  <core::fmt::builders::[6]::core::fmt::builders::DebugMap>::entry
            (param_1,&puStack_30,&DAT_00975348,&local_50,&DAT_009754e0);
  return;
}


// ===== 006a0ce0  FUN_006a0ce0 =====

void FUN_006a0ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  undefined *puStack_30;
  undefined8 **local_28;
  undefined8 *local_20;
  code *pcStack_18;
  
  local_20 = &local_38;
  pcStack_18 = FUN_006a3754;
  local_28 = &local_20;
  puStack_30 = &DAT_00368e80;
  local_50 = param_3;
  uStack_48 = param_4;
  local_38 = param_2;
  <core::fmt::builders::[6]::core::fmt::builders::DebugMap>::entry
            (param_1,&puStack_30,&DAT_00975348,&local_50,&DAT_00975500);
  return;
}


// ===== 006a0d3c  FUN_006a0d3c =====

void FUN_006a0d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined *puStack_30;
  undefined8 **local_28;
  undefined8 *local_20;
  code *pcStack_18;
  
  local_20 = &local_38;
  pcStack_18 = FUN_006a3754;
  local_28 = &local_20;
  puStack_30 = &DAT_00368e80;
  local_48 = param_3;
  uStack_40 = param_4;
  local_38 = param_2;
  <core::fmt::builders::[6]::core::fmt::builders::DebugMap>::entry
            (param_1,&puStack_30,&DAT_00975348,&local_48,&DAT_00975520);
  return;
}


// ===== 006a0d98  FUN_006a0d98 =====

void FUN_006a0d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined *puStack_30;
  undefined8 **local_28;
  undefined8 *local_20;
  code *pcStack_18;
  
  local_20 = &local_38;
  pcStack_18 = FUN_006a3754;
  local_28 = &local_20;
  puStack_30 = &DAT_00368e80;
  local_48 = param_3;
  uStack_40 = param_4;
  local_38 = param_2;
  <core::fmt::builders::[6]::core::fmt::builders::DebugMap>::entry
            (param_1,&puStack_30,&DAT_00975348,&local_48,&DAT_00975540);
  return;
}


// ===== 006a0df4  FUN_006a0df4 =====

void FUN_006a0df4(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if ((*param_1 != 2) && (*param_1 != 0)) {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
      ::drop_slow();
      return;
    }
  }
  return;
}


// ===== 006a0e28  FUN_006a0e28 =====

void FUN_006a0e28(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int *piVar5;
  
  piVar5 = (int *)*param_1;
  if ((((*(byte *)(param_1 + 1) & 1) == 0) &&
      ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0 & 0x7fffffffffffffff) != 0)) &&
     (uVar4 = std::panicking::panic_count::is_zero_slow_path(), (uVar4 & 1) == 0)) {
    *(undefined1 *)(piVar5 + 1) = 1;
  }
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 != 2) {
    return;
  }
  <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(piVar5);
  return;
}


// ===== 006a0e98  FUN_006a0e98 =====

void FUN_006a0e98(int *param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  
  if (((param_2 & 1) == 0) &&
     ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0 & 0x7fffffffffffffff) != 0)) {
    uVar4 = std::panicking::panic_count::is_zero_slow_path();
    if ((uVar4 & 1) == 0) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 != 2) {
    return;
  }
  <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake();
  return;
}


// ===== 006a0f08  FUN_006a0f08 =====

void FUN_006a0f08(ulong param_1)

{
  long local_18;
  
  if ((1 < (param_1 & 3) - 2) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 006a0f50  FUN_006a0f50 =====

void FUN_006a0f50(long *param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint *puVar5;
  int *piVar6;
  ulong uVar7;
  
  if (*param_1 != 0) {
    if (*param_1 == 1) {
      puVar5 = (uint *)param_1[2];
      do {
        uVar1 = *puVar5;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar4) {
          *puVar5 = uVar1 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar1 - 1 & 0xbfffffff) == 0x80000000) {
        <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::
        wake_writer_or_readers();
        return;
      }
    }
    else {
      piVar6 = (int *)param_1[1];
      if ((((*(byte *)(param_1 + 2) & 1) == 0) &&
          ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0 & 0x7fffffffffffffff) != 0)) &&
         (uVar7 = std::panicking::panic_count::is_zero_slow_path(), (uVar7 & 1) == 0)) {
        *(undefined1 *)(piVar6 + 2) = 1;
      }
      do {
        iVar2 = *piVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar4) {
          *piVar6 = iVar2 + -0x3fffffff;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + 0xc0000001U >> 0x1e != 0) {
        <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::
        wake_writer_or_readers();
        return;
      }
    }
  }
  return;
}


// ===== 006a1018  FUN_006a1018 =====

void FUN_006a1018(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  int iVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (*(long *)PTR_SCOPED_COUNT_0099f698 == 0) {
    puVar3 = *(undefined **)(PTR_GLOBAL_DISPATCH_0099f6b8 + 0x10);
    puVar1 = &DAT_009755f8;
    puVar8 = PTR_NO_SUBSCRIBER_0099f6d8;
    if ((*(long *)PTR_GLOBAL_INIT_0099f6a8 == 2) &&
       (puVar8 = *(undefined **)(PTR_GLOBAL_DISPATCH_0099f6b8 + 8), puVar1 = puVar3,
       *(int *)PTR_GLOBAL_DISPATCH_0099f6b8 != 0)) {
      puVar8 = *(undefined **)(PTR_GLOBAL_DISPATCH_0099f6b8 + 8) +
               (*(long *)(puVar3 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    iVar5 = (**(code **)(puVar1 + 0x50))(puVar8,param_1);
    if (iVar5 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x006a11ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(puVar1 + 0x58))(puVar8,param_1);
    return;
  }
  uVar9 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_0099f6a0;
  if (uVar9 == 0) {
    uVar9 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_0099f6a0);
    puVar6 = (ulong *)pthread_getspecific((pthread_key_t)uVar9);
    if (&DAT_00000002 <= puVar6) goto joined_r0x006a1060;
  }
  else {
    puVar6 = (ulong *)pthread_getspecific((pthread_key_t)uVar9);
    if (&DAT_00000002 <= puVar6) goto joined_r0x006a1060;
  }
  puVar6 = (ulong *)FUN_006a2cb4(uVar9 & 0xffffffff,puVar6,0);
joined_r0x006a1060:
  if ((puVar6 != (ulong *)0x0) &&
     (uVar9 = puVar6[4], *(undefined1 *)(puVar6 + 4) = 0, (char)uVar9 == '\x01')) {
    if (*puVar6 < 0x7fffffffffffffff) {
      puVar7 = puVar6 + 1;
      uVar9 = *puVar7;
      *puVar6 = *puVar6 + 1;
      if (uVar9 == 2) {
        puVar7 = (ulong *)PTR_GLOBAL_DISPATCH_0099f6b8;
        if (*(long *)PTR_GLOBAL_INIT_0099f6a8 != 2) {
          puVar7 = (ulong *)PTR_NONE_0099f6b0;
        }
        uVar9 = *puVar7;
      }
      uVar10 = puVar7[1];
      uVar2 = puVar7[2];
      if (uVar9 == 1) {
        uVar10 = uVar10 + (*(long *)(uVar2 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
      }
                    /* try { // try from 006a10e8 to 006a1107 has its CatchHandler @ 006a1208 */
      iVar5 = (**(code **)(uVar2 + 0x50))(uVar10,param_1);
      if (iVar5 != 0) {
        (**(code **)(uVar2 + 0x58))(uVar10,param_1);
      }
      *(undefined1 *)(puVar6 + 4) = 1;
      *puVar6 = *puVar6 - 1;
      return;
    }
                    /* try { // try from 006a11f8 to 006a1203 has its CatchHandler @ 006a1220 */
    core::cell::panic_already_mutably_borrowed(&PTR_s__home_runner__cargo_registry_src_00975578);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x6a1208);
    (*pcVar4)();
  }
  return;
}


// ===== 006a122c  FUN_006a122c =====

void FUN_006a122c(ulong *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong *puVar9;
  ulong uVar10;
  
  if (*(long *)PTR_SCOPED_COUNT_0099f698 == 0) {
    puVar4 = *(undefined **)(PTR_GLOBAL_DISPATCH_0099f6b8 + 0x10);
    puVar1 = &DAT_009755f8;
    puVar8 = PTR_NO_SUBSCRIBER_0099f6d8;
    if ((*(long *)PTR_GLOBAL_INIT_0099f6a8 == 2) &&
       (puVar8 = *(undefined **)(PTR_GLOBAL_DISPATCH_0099f6b8 + 8), puVar1 = puVar4,
       *(int *)PTR_GLOBAL_DISPATCH_0099f6b8 != 0)) {
      puVar8 = *(undefined **)(PTR_GLOBAL_DISPATCH_0099f6b8 + 8) +
               (*(long *)(puVar4 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    uVar7 = (**(code **)(puVar1 + 0x30))(puVar8);
    uVar10 = 5;
    if (*param_1 != 0xffffffffffffffff) {
      uVar10 = *param_1;
    }
    uVar2 = 5;
    if (uVar7 != 0xffffffffffffffff) {
      uVar2 = uVar7;
    }
    uVar3 = 0;
    if (uVar7 != 0xfffffffffffffffe) {
      uVar3 = uVar2;
    }
    if (uVar10 <= uVar3) {
      return;
    }
    uVar10 = 0;
    if (uVar7 != 0xfffffffffffffffe) {
      uVar10 = uVar7;
    }
    *param_1 = uVar10;
    return;
  }
  uVar10 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_0099f6a0;
  if (uVar10 == 0) {
    uVar10 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_0099f6a0);
    puVar6 = (ulong *)pthread_getspecific((pthread_key_t)uVar10);
    if (&DAT_00000002 <= puVar6) goto joined_r0x006a1274;
  }
  else {
    puVar6 = (ulong *)pthread_getspecific((pthread_key_t)uVar10);
    if (&DAT_00000002 <= puVar6) goto joined_r0x006a1274;
  }
  puVar6 = (ulong *)FUN_006a2cb4(uVar10 & 0xffffffff,puVar6,0);
joined_r0x006a1274:
  if ((puVar6 == (ulong *)0x0) ||
     (uVar10 = puVar6[4], *(undefined1 *)(puVar6 + 4) = 0, (uVar10 & 1) == 0)) {
    if (*param_1 != 0) {
      *param_1 = 0;
      return;
    }
  }
  else {
    if (0x7ffffffffffffffe < *puVar6) {
                    /* try { // try from 006a1448 to 006a1453 has its CatchHandler @ 006a1470 */
      core::cell::panic_already_mutably_borrowed(&PTR_s__home_runner__cargo_registry_src_00975578);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x6a1458);
      (*pcVar5)();
    }
    puVar9 = puVar6 + 1;
    uVar10 = *puVar9;
    *puVar6 = *puVar6 + 1;
    if (uVar10 == 2) {
      puVar9 = (ulong *)PTR_GLOBAL_DISPATCH_0099f6b8;
      if (*(long *)PTR_GLOBAL_INIT_0099f6a8 != 2) {
        puVar9 = (ulong *)PTR_NONE_0099f6b0;
      }
      uVar10 = *puVar9;
    }
    uVar7 = puVar9[1];
    if (uVar10 == 1) {
      uVar7 = uVar7 + (*(long *)(puVar9[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
                    /* try { // try from 006a12f8 to 006a12fb has its CatchHandler @ 006a1458 */
    uVar7 = (**(code **)(puVar9[2] + 0x30))(uVar7);
    uVar10 = 5;
    if (*param_1 != 0xffffffffffffffff) {
      uVar10 = *param_1;
    }
    uVar2 = 5;
    if (uVar7 != 0xffffffffffffffff) {
      uVar2 = uVar7;
    }
    uVar3 = 0;
    if (uVar7 != 0xfffffffffffffffe) {
      uVar3 = uVar2;
    }
    if (uVar3 < uVar10) {
      uVar10 = 0;
      if (uVar7 != 0xfffffffffffffffe) {
        uVar10 = uVar7;
      }
      *param_1 = uVar10;
    }
    *(undefined1 *)(puVar6 + 4) = 1;
    *puVar6 = *puVar6 - 1;
  }
  return;
}


// ===== 006a147c  FUN_006a147c =====

void FUN_006a147c(undefined8 *param_1,byte *param_2)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  byte bVar4;
  code *pcVar5;
  byte bVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong *puVar10;
  ulong uVar11;
  
  if (*(long *)PTR_SCOPED_COUNT_0099f698 == 0) {
    puVar3 = *(undefined **)(PTR_GLOBAL_DISPATCH_0099f6b8 + 0x10);
    puVar1 = &DAT_009755f8;
    puVar9 = PTR_NO_SUBSCRIBER_0099f6d8;
    if ((*(long *)PTR_GLOBAL_INIT_0099f6a8 == 2) &&
       (puVar9 = *(undefined **)(PTR_GLOBAL_DISPATCH_0099f6b8 + 8), puVar1 = puVar3,
       *(int *)PTR_GLOBAL_DISPATCH_0099f6b8 != 0)) {
      puVar9 = *(undefined **)(PTR_GLOBAL_DISPATCH_0099f6b8 + 8) +
               (*(long *)(puVar3 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    bVar6 = (**(code **)(puVar1 + 0x20))(puVar9,*param_1);
    bVar4 = *param_2;
    bVar2 = bVar4;
    if (bVar4 != bVar6) {
      bVar2 = 1;
    }
    if (bVar4 != 0xff) {
      bVar6 = bVar2;
    }
    *param_2 = bVar6;
    return;
  }
  uVar11 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_0099f6a0;
  if (uVar11 == 0) {
    uVar11 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_0099f6a0);
    puVar7 = (ulong *)pthread_getspecific((pthread_key_t)uVar11);
  }
  else {
    puVar7 = (ulong *)pthread_getspecific((pthread_key_t)uVar11);
  }
  if (puVar7 < &DAT_00000002) {
    puVar7 = (ulong *)FUN_006a2cb4(uVar11 & 0xffffffff,puVar7,0);
  }
  if ((puVar7 != (ulong *)0x0) &&
     (uVar11 = puVar7[4], *(undefined1 *)(puVar7 + 4) = 0, (uVar11 & 1) != 0)) {
    if (*puVar7 < 0x7fffffffffffffff) {
      puVar10 = puVar7 + 1;
      uVar11 = *puVar10;
      *puVar7 = *puVar7 + 1;
      if (uVar11 == 2) {
        puVar10 = (ulong *)PTR_GLOBAL_DISPATCH_0099f6b8;
        if (*(long *)PTR_GLOBAL_INIT_0099f6a8 != 2) {
          puVar10 = (ulong *)PTR_NONE_0099f6b0;
        }
        uVar11 = *puVar10;
      }
      uVar8 = puVar10[1];
      if (uVar11 == 1) {
        uVar8 = uVar8 + (*(long *)(puVar10[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
      }
                    /* try { // try from 006a1550 to 006a1553 has its CatchHandler @ 006a1684 */
      bVar6 = (**(code **)(puVar10[2] + 0x20))(uVar8,*param_1);
      bVar4 = *param_2;
      bVar2 = bVar4;
      if (bVar4 != bVar6) {
        bVar2 = 1;
      }
      *puVar7 = *puVar7 - 1;
      if (bVar4 != 0xff) {
        bVar6 = bVar2;
      }
      *param_2 = bVar6;
      *(undefined1 *)(puVar7 + 4) = 1;
      return;
    }
                    /* try { // try from 006a1674 to 006a167f has its CatchHandler @ 006a169c */
    core::cell::panic_already_mutably_borrowed(&PTR_s__home_runner__cargo_registry_src_00975578);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x6a1684);
    (*pcVar5)();
  }
  *param_2 = *param_2 - 1 < 0xfe;
  return;
}


// ===== 006a16a8  <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register */

undefined4 __rustcall
<tracing_core::callsite::tracing_core::callsite::DefaultCallsite>::register(long *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  uint *puVar6;
  long *plVar7;
  bool bVar8;
  int *piVar9;
  ulong uVar10;
  undefined4 uVar11;
  long *local_48;
  int *local_40;
  byte local_38;
  undefined7 uStack_37;
  long local_30;
  char local_24 [4];
  
  pcVar1 = (char *)((long)param_1 + 0x11);
  do {
    if (*pcVar1 != '\0') {
      ClearExclusiveLocal();
      if (*pcVar1 != '\x02') {
        return 1;
      }
      goto LAB_006a17bc;
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar8) {
      *pcVar1 = '\x01';
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  while( true ) {
    plVar7 = DAT_009a6ea0;
    bVar8 = param_1 == DAT_009a6ea0;
    local_30 = (long)DAT_009a6ea0;
    param_1[1] = (long)DAT_009a6ea0;
    local_48 = param_1;
    if (bVar8) break;
    while (DAT_009a6ea0 == plVar7) {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(0x9a6ea0,0x10);
      if (bVar8) {
        cVar5 = ExclusiveMonitorsStatus();
        DAT_009a6ea0 = param_1;
      }
      if (cVar5 == '\0') {
        FUN_0069ef94(&local_48,&DAT_009a6370);
        local_30 = *param_1;
        local_24[0] = -1;
                    /* try { // try from 006a1748 to 006a1757 has its CatchHandler @ 006a1894 */
        FUN_0069e25c(&local_48,&local_30,local_24);
        cVar5 = '\0';
        if (local_24[0] != -1) {
          cVar5 = local_24[0];
        }
        uVar11 = 1;
        if (cVar5 == '\x02') {
          uVar11 = 2;
        }
        uVar2 = 0;
        if (cVar5 != '\0') {
          uVar2 = uVar11;
        }
        *(undefined4 *)(param_1 + 2) = uVar2;
        if (local_48 == (long *)0x0) goto LAB_006a17b4;
        if (local_48 == (long *)0x1) {
          puVar6 = (uint *)CONCAT71(uStack_37,local_38);
          do {
            uVar3 = *puVar6;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar6,0x10);
            if (bVar8) {
              *puVar6 = uVar3 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((uVar3 - 1 & 0xbfffffff) == 0x80000000) goto LAB_006a1828;
          goto LAB_006a17b4;
        }
        piVar9 = local_40;
        if (((local_38 & 1) != 0) ||
           ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0 & 0x7fffffffffffffff) == 0))
        goto LAB_006a1808;
        goto LAB_006a1854;
      }
    }
    ClearExclusiveLocal();
  }
  piVar9 = (int *)core[188d2c0002da36d0]::panicking::assert_failed::
                  <*const_tracing_core[702fccbc9f4cc72b]::callsite::DefaultCallsite,*mut_tracing_core[702fccbc9f4cc72b]::callsite::DefaultCallsite>
                            (1,&local_48,&local_30,
                             "Attempted to register a `DefaultCallsite` that already exists! This will cause an infinite loop when attempting to read from the callsite cache. This is likely a bug! You should only need to call `DefaultCallsite::register` once per `DefaultCallsite`."
                             ,0x1f7,&PTR_s__home_runner__cargo_registry_src_009755c8);
LAB_006a1854:
  uVar10 = std::panicking::panic_count::is_zero_slow_path();
  if ((uVar10 & 1) == 0) {
    *(undefined1 *)(piVar9 + 2) = 1;
  }
LAB_006a1808:
  do {
    iVar4 = *piVar9;
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(piVar9,0x10);
    if (bVar8) {
      *piVar9 = iVar4 + -0x3fffffff;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar4 + 0xc0000001U >> 0x1e != 0) {
LAB_006a1828:
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers()
    ;
  }
LAB_006a17b4:
  pcVar1[0] = '\x02';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
LAB_006a17bc:
  uVar11 = 1;
  if ((char)param_1[2] == '\x02') {
    uVar11 = 2;
  }
  uVar2 = 0;
  if ((char)param_1[2] != '\0') {
    uVar2 = uVar11;
  }
  return uVar2;
}


// ===== 006a18ac  <tracing_core::dispatcher::[2]::tracing_core::dispatcher::Dispatch>::exit =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::dispatcher::[2]::tracing_core::dispatcher::Dispatch>::exit */

void __rustcall
<tracing_core::dispatcher::[2]::tracing_core::dispatcher::Dispatch>::exit(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  if (*param_1 == 1) {
    lVar1 = lVar1 + (*(long *)(param_1[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x006a18d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[2] + 0x68))(lVar1);
  return;
}


// ===== 006a18dc  <tracing_core::dispatcher::[2]::tracing_core::dispatcher::Dispatch>::enter =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::dispatcher::[2]::tracing_core::dispatcher::Dispatch>::enter */

void __rustcall
<tracing_core::dispatcher::[2]::tracing_core::dispatcher::Dispatch>::enter(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  if (*param_1 == 1) {
    lVar1 = lVar1 + (*(long *)(param_1[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x006a1908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[2] + 0x60))(lVar1);
  return;
}


// ===== 006a190c  <tracing_core::dispatcher::[2]::tracing_core::dispatcher::Dispatch>::downgrade =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::dispatcher::[2]::tracing_core::dispatcher::Dispatch>::downgrade */

void __rustcall
<tracing_core::dispatcher::[2]::tracing_core::dispatcher::Dispatch>::downgrade
          (undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined **local_20;
  code *pcStack_18;
  
  if (*param_2 != 1) {
    lVar4 = param_2[1];
    uVar5 = 0;
LAB_006a197c:
    lVar6 = param_2[2];
    *param_1 = uVar5;
    param_1[1] = lVar4;
    param_1[2] = lVar6;
    return;
  }
  lVar4 = param_2[1];
  uVar5 = 1;
  plVar1 = (long *)(lVar4 + 8);
  do {
    lVar6 = *plVar1;
    while (lVar6 != -1) {
      if (lVar6 < 0) {
        local_20 = &PTR_DAT_00975308;
        pcStack_18 = FUN_0069f8c4;
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_00368e80,&local_20,&PTR_s__rustc_48a229ceaefd4985c50990b14_00975318);
      }
      lVar7 = *plVar1;
      if (lVar7 == lVar6) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        lVar6 = lVar7;
        if (cVar2 == '\0') goto LAB_006a197c;
      }
      else {
        ClearExclusiveLocal();
        lVar6 = lVar7;
      }
    }
    InstructionSynchronizationBarrier();
  } while( true );
}


// ===== 006a19c0  <tracing_core::dispatcher::[2]::tracing_core::dispatcher::Dispatch>::try_close =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::dispatcher::[2]::tracing_core::dispatcher::Dispatch>::try_close */

void __rustcall
<tracing_core::dispatcher::[2]::tracing_core::dispatcher::Dispatch>::try_close(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  if (*param_1 == 1) {
    lVar1 = lVar1 + (*(long *)(param_1[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x006a19ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[2] + 0x80))(lVar1);
  return;
}


// ===== 006a19f0  FUN_006a19f0 =====

void FUN_006a19f0(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  byte bVar10;
  uint *puVar11;
  int *piVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  undefined8 *puVar16;
  long local_80;
  undefined4 *local_78;
  byte local_70;
  char local_64 [4];
  undefined8 *puVar17;
  
  local_80 = -1;
                    /* try { // try from 006a1a1c to 006a1a23 has its CatchHandler @ 006a1ce4 */
  FUN_0069e46c(param_1,&local_80);
  for (puVar14 = DAT_009a6ea0; puVar14 != (undefined8 *)0x0; puVar14 = (undefined8 *)puVar14[1]) {
    local_78 = (undefined4 *)*puVar14;
    local_64[0] = -1;
                    /* try { // try from 006a1a48 to 006a1a57 has its CatchHandler @ 006a1ce8 */
    FUN_0069e25c(param_1,&local_78,local_64);
    cVar7 = '\0';
    if (local_64[0] != -1) {
      cVar7 = local_64[0];
    }
    uVar15 = 1;
    if (cVar7 == '\x02') {
      uVar15 = 2;
    }
    uVar1 = 0;
    if (cVar7 != '\0') {
      uVar1 = uVar15;
    }
    *(undefined4 *)(puVar14 + 2) = uVar1;
  }
  if (DAT_009a6ea8 != '\0') {
    if (DAT_009a6378 != 2) {
                    /* try { // try from 006a1c34 to 006a1c4b has its CatchHandler @ 006a1ce4 */
      FUN_0069e1cc(&DAT_009a6378,&DAT_009a6378);
    }
    do {
      if (DAT_009a6388 != 0) {
        ClearExclusiveLocal();
                    /* try { // try from 006a1cd4 to 006a1cdf has its CatchHandler @ 006a1ce4 */
        <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                  (&DAT_009a6388);
        break;
      }
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(0x9a6388,0x10);
      if (bVar8) {
        DAT_009a6388 = 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    puVar9 = PTR_GLOBAL_PANIC_COUNT_0099f6c0;
    if ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0 & 0x7fffffffffffffff) == 0) {
      bVar10 = 0;
    }
    else {
      bVar10 = std::panicking::panic_count::is_zero_slow_path();
      bVar10 = bVar10 ^ 1;
    }
    if (DAT_009a638c != '\0') {
      local_78 = &DAT_009a6388;
                    /* try { // try from 006a1c64 to 006a1c87 has its CatchHandler @ 006a1d0c */
      local_70 = bVar10;
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                ("called `Result::unwrap()` on an `Err` value",0x2b,&local_78,&PTR_FUN_009755a8,
                 &PTR_s__home_runner__cargo_registry_src_00975560);
    }
    DAT_009a638c = '\0';
    if (DAT_009a63a0 != 0) {
      puVar14 = DAT_009a6398 + DAT_009a63a0 * 2;
      puVar16 = DAT_009a6398;
      do {
        puVar17 = puVar16 + 2;
        uVar3 = *puVar16;
        pcVar4 = *(code **)(puVar16[1] + 0x18);
                    /* try { // try from 006a1b10 to 006a1b43 has its CatchHandler @ 006a1cf0 */
        local_78 = (undefined4 *)(**(code **)(puVar16[1] + 0x20))(uVar3);
        local_64[0] = -1;
        FUN_0069e25c(param_1,&local_78,local_64);
        cVar7 = '\0';
        if (local_64[0] != -1) {
          cVar7 = local_64[0];
        }
        (*pcVar4)(uVar3,cVar7);
        puVar16 = puVar17;
      } while (puVar17 != puVar14);
    }
    if ((((bVar10 & 1) == 0) && ((*(ulong *)puVar9 & 0x7fffffffffffffff) != 0)) &&
       (uVar13 = std::panicking::panic_count::is_zero_slow_path(), (uVar13 & 1) == 0)) {
      DAT_009a638c = '\x01';
    }
    do {
      iVar6 = DAT_009a6388;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(0x9a6388,0x10);
      if (bVar8) {
        DAT_009a6388 = 0;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar6 == 2) {
                    /* try { // try from 006a1c8c to 006a1c9f has its CatchHandler @ 006a1ce4 */
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(&DAT_009a6388);
    }
  }
  puVar9 = PTR_MAX_LEVEL_0099f430;
  lVar2 = 5;
  if (local_80 != -1) {
    lVar2 = local_80;
  }
  do {
    uVar3 = *(undefined8 *)puVar9;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar9,0x10);
    if (bVar8) {
      *(long *)puVar9 = lVar2;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (*param_1 != 0) {
    if (*param_1 == 1) {
      puVar11 = (uint *)param_1[2];
      do {
        uVar5 = *puVar11;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar11,0x10);
        if (bVar8) {
          *puVar11 = uVar5 - 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((uVar5 - 1 & 0xbfffffff) != 0x80000000) {
        return;
      }
    }
    else {
      piVar12 = (int *)param_1[1];
      if ((((*(byte *)(param_1 + 2) & 1) == 0) &&
          ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0 & 0x7fffffffffffffff) != 0)) &&
         (uVar13 = std::panicking::panic_count::is_zero_slow_path(), (uVar13 & 1) == 0)) {
        *(undefined1 *)(piVar12 + 2) = 1;
      }
      do {
        iVar6 = *piVar12;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar8) {
          *piVar12 = iVar6 + -0x3fffffff;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar6 + 0xc0000001U >> 0x1e == 0) {
        return;
      }
    }
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers()
    ;
  }
  return;
}


// ===== 006a1d30  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<tracing_core::dispatcher::Registrar>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<tracing_core::dispatcher::Registrar>>::grow_one */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<tracing_core::dispatcher::Registrar>>::grow_one
          (undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_006a1e28(param_1,*param_1,0x18);
  if (lVar1 == -1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error();
}


// ===== 006a1d58  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<&dyn_Trait<Assoc=X>+tracing_core::callsite::Callsite>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<&dyn Trait<Assoc = X> +
   tracing_core::callsite::Callsite>>::grow_one */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<&dyn_Trait<Assoc=X>+tracing_core::callsite::Callsite>>
::grow_one(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_006a1e28(param_1,*param_1,0x10);
  if (lVar1 == -1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error();
}


// ===== 006a1d80  FUN_006a1d80 =====

void FUN_006a1d80(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_5;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_4;
  lVar5 = 8;
  uVar3 = 1;
  uVar4 = 0;
  if ((SUB168(auVar1 * auVar2,8) != 0) ||
     (param_4 = param_5 * param_4, 0x7ffffffffffffff8 < param_4)) goto LAB_006a1e14;
  if (param_2 == 0) {
    if (param_4 == 0) {
      lVar5 = 8;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      lVar5 = __rustc::__rust_alloc(param_4,8);
      if (lVar5 == 0) goto LAB_006a1df0;
    }
LAB_006a1e04:
    uVar3 = 0;
    param_1[1] = lVar5;
  }
  else {
    lVar5 = __rustc::__rust_realloc(param_3,param_5 * param_2,8,param_4);
    if (lVar5 != 0) goto LAB_006a1e04;
LAB_006a1df0:
    param_1[1] = 8;
    uVar3 = 1;
  }
  lVar5 = 0x10;
  uVar4 = param_4;
LAB_006a1e14:
  *(ulong *)((long)param_1 + lVar5) = uVar4;
  *param_1 = uVar3;
  return;
}


// ===== 006a1e28  FUN_006a1e28 =====

undefined1  [16] FUN_006a1e28(ulong *param_1,long param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 extraout_x1;
  ulong uVar2;
  undefined1 auVar3 [16];
  uint local_38 [2];
  ulong local_30;
  undefined8 uStack_28;
  
  uVar2 = *param_1 * 2;
  if (uVar2 < param_2 + 1U) {
    uVar2 = param_2 + 1;
  }
  if (uVar2 < 5) {
    uVar2 = 4;
  }
  FUN_006a1d80(local_38,*param_1,param_1[1],uVar2,param_3);
  if ((local_38[0] & 1) != 0) {
    auVar1._8_8_ = uStack_28;
    auVar1._0_8_ = local_30;
    return auVar1;
  }
  *param_1 = uVar2;
  param_1[1] = local_30;
  auVar3._8_8_ = extraout_x1;
  auVar3._0_8_ = 0xffffffffffffffff;
  return auVar3;
}


// ===== 006a1ea8  <tracing_core::dispatcher::[6]::tracing_core::dispatcher::WeakDispatch>::upgrade =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::dispatcher::[6]::tracing_core::dispatcher::WeakDispatch>::upgrade */

void __rustcall
<tracing_core::dispatcher::[6]::tracing_core::dispatcher::WeakDispatch>::upgrade
          (undefined8 *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined **local_20;
  code *pcStack_18;
  
  if (*param_2 == 1) {
    plVar3 = (long *)param_2[1];
    if (plVar3 == (long *)0xffffffffffffffff) {
LAB_006a1f28:
      *param_1 = 2;
      return;
    }
    uVar4 = 1;
    lVar5 = *plVar3;
    do {
      while( true ) {
        if (lVar5 == 0) goto LAB_006a1f28;
        if (lVar5 < 0) {
          local_20 = &PTR_DAT_00975308;
          pcStack_18 = FUN_0069f8c4;
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_fmt
                    (&DAT_00368e80,&local_20,&PTR_s__rustc_48a229ceaefd4985c50990b14_00975330);
        }
        lVar6 = *plVar3;
        if (lVar6 == lVar5) break;
        ClearExclusiveLocal();
        lVar5 = lVar6;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      lVar5 = lVar6;
    } while (cVar1 != '\0');
  }
  else {
    plVar3 = (long *)param_2[1];
    uVar4 = 0;
  }
  lVar5 = param_2[2];
  *param_1 = uVar4;
  param_1[1] = plVar3;
  param_1[2] = lVar5;
  return;
}


// ===== 006a1f68  tracing_core::dispatcher::set_default =====

/* WARNING: Unknown calling convention: __rustcall */
/* tracing_core::dispatcher::set_default */

void __rustcall tracing_core::dispatcher::set_default(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long local_70;
  long lStack_68;
  long *plStack_40;
  long local_38;
  
  plVar5 = (long *)param_2[1];
  if (*param_2 == 1) {
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 < 0) goto LAB_006a20e0;
    lVar6 = 1;
  }
  else {
    lVar6 = 0;
  }
  local_38 = param_2[2];
  uVar8 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_0099f6a0;
  plStack_40 = plVar5;
  if (uVar8 == 0) {
                    /* try { // try from 006a20a0 to 006a20cf has its CatchHandler @ 006a20e4 */
    uVar8 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_0099f6a0);
    plVar5 = (long *)pthread_getspecific((pthread_key_t)uVar8);
  }
  else {
    plVar5 = (long *)pthread_getspecific((pthread_key_t)uVar8);
  }
  if (plVar5 < &DAT_00000002) {
    plVar5 = (long *)FUN_006a2cb4(uVar8 & 0xffffffff,plVar5,0);
  }
  if (plVar5 == (long *)0x0) {
    if (lVar6 != 0) {
      do {
        lVar6 = *plStack_40;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plStack_40,0x10);
        if (bVar2) {
          *plStack_40 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 1) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
        ::drop_slow(&plStack_40);
      }
    }
  }
  else {
    *(undefined1 *)(plVar5 + 4) = 1;
    if (*plVar5 != 0) {
                    /* try { // try from 006a20d4 to 006a20df has its CatchHandler @ 006a211c */
      core::cell::panic_already_borrowed(&PTR_s__home_runner__cargo_registry_src_00975590);
LAB_006a20e0:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x6a20e4);
      (*pcVar4)();
    }
    lVar7 = plVar5[1];
    lVar10 = plVar5[3];
    lVar9 = plVar5[2];
    plVar5[3] = local_38;
    plVar5[2] = (long)plStack_40;
    plVar5[1] = lVar6;
    if (lVar7 != -1) goto LAB_006a2058;
  }
  lVar7 = 2;
  lVar9 = local_70;
  lVar10 = lStack_68;
LAB_006a2058:
  lStack_68 = lVar10;
  local_70 = lVar9;
  puVar3 = PTR_SCOPED_COUNT_0099f698;
  *(undefined4 *)PTR_EXISTS_0099f6e0 = 1;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *(long *)puVar3 = *(long *)puVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *param_1 = lVar7;
  param_1[2] = lStack_68;
  param_1[1] = local_70;
  return;
}


// ===== 006a2134  tracing_core::dispatcher::set_global_default =====

/* WARNING: Unknown calling convention: __rustcall */
/* tracing_core::dispatcher::set_global_default */

uint __rustcall tracing_core::dispatcher::set_global_default(uint *param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  puVar4 = PTR_GLOBAL_INIT_0099f6a8;
  do {
    if (*(long *)puVar4 != 0) {
      ClearExclusiveLocal();
      uVar9 = 0;
      if ((*param_1 & 1) != 0) {
        plVar6 = *(long **)(param_1 + 2);
        do {
          lVar8 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          DataMemoryBarrier(2,1);
          <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
          ::drop_slow();
          return 1;
        }
      }
      goto LAB_006a21dc;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar3) {
      *(undefined8 *)puVar4 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    puVar5 = PTR_GLOBAL_DISPATCH_0099f6b8;
  } while (cVar2 != '\0');
  uVar9 = 1;
  lVar8 = *(long *)(param_1 + 2);
  lVar1 = *(long *)(param_1 + 4);
  if ((*param_1 & 1) != 0) {
    lVar8 = lVar8 + (*(long *)(lVar1 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
  }
  if (*(long *)PTR_GLOBAL_DISPATCH_0099f6b8 != 0) {
    plVar6 = *(long **)(PTR_GLOBAL_DISPATCH_0099f6b8 + 8);
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 006a21b4 to 006a21bb has its CatchHandler @ 006a2240 */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
      ::drop_slow(puVar5 + 8);
    }
  }
  *(undefined8 *)puVar5 = 0;
  *(long *)(puVar5 + 8) = lVar8;
  *(long *)(puVar5 + 0x10) = lVar1;
  puVar5 = PTR_EXISTS_0099f6e0;
  *(undefined8 *)puVar4 = 2;
  *(undefined4 *)puVar5 = 1;
LAB_006a21dc:
  return uVar9 ^ 1;
}


// ===== 006a224c  tracing_core::callsite::register_dispatch =====

/* WARNING: Unknown calling convention: __rustcall */
/* tracing_core::callsite::register_dispatch */

void __rustcall tracing_core::callsite::register_dispatch(long *param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  FUN_0069ed3c(auStack_38,&DAT_009a6370,param_1);
  lVar1 = param_1[1];
  if (*param_1 == 1) {
    lVar1 = lVar1 + (*(long *)(param_1[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
  }
                    /* try { // try from 006a229c to 006a22a3 has its CatchHandler @ 006a22bc */
  (**(code **)(param_1[2] + 0x18))(lVar1,param_1);
  FUN_006a19f0(auStack_38);
  return;
}


// ===== 006a22d4  tracing_core::callsite::rebuild_interest_cache =====

/* WARNING: Unknown calling convention: __rustcall */
/* tracing_core::callsite::rebuild_interest_cache */

void __rustcall tracing_core::callsite::rebuild_interest_cache(void)

{
  undefined1 auStack_28 [24];
  
  FUN_0069ef94(auStack_28,&DAT_009a6370);
  FUN_006a19f0(auStack_28);
  return;
}


// ===== 006a2304  tracing_core::callsite::register =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* tracing_core::callsite::register */

void __rustcall tracing_core::callsite::register(undefined4 *param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  uint *puVar7;
  long lVar8;
  ulong *puVar9;
  undefined4 *puVar10;
  bool bVar11;
  byte bVar12;
  ulong uVar13;
  undefined4 *local_70;
  byte local_68;
  undefined7 uStack_67;
  byte local_60;
  undefined7 uStack_5f;
  undefined4 *local_58;
  char local_34 [4];
  
  (**(code **)(param_2 + 0x28))(&local_70);
  if (CONCAT71(uStack_67,local_68) == -0x2d43d410e942ec78 &&
      local_70 == (undefined4 *)0x6fa162fef1d6166d) {
    while( true ) {
      puVar10 = DAT_009a6ea0;
      bVar11 = param_1 == DAT_009a6ea0;
      local_58 = DAT_009a6ea0;
      *(undefined4 **)(param_1 + 2) = DAT_009a6ea0;
      local_70 = param_1;
      if (bVar11) break;
      while (DAT_009a6ea0 == puVar10) {
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(0x9a6ea0,0x10);
        if (bVar11) {
          cVar5 = ExclusiveMonitorsStatus();
          DAT_009a6ea0 = param_1;
        }
        if (cVar5 == '\0') goto LAB_006a2480;
      }
      ClearExclusiveLocal();
    }
    core[188d2c0002da36d0]::panicking::assert_failed::
    <*const_tracing_core[702fccbc9f4cc72b]::callsite::DefaultCallsite,*mut_tracing_core[702fccbc9f4cc72b]::callsite::DefaultCallsite>
              (1,&local_70,&local_58,
               "Attempted to register a `DefaultCallsite` that already exists! This will cause an infinite loop when attempting to read from the callsite cache. This is likely a bug! You should only need to call `DefaultCallsite::register` once per `DefaultCallsite`."
               ,0x1f7,&PTR_s__home_runner__cargo_registry_src_009755c8);
  }
  else if (DAT_009a6378 == 2) goto LAB_006a23d8;
  FUN_0069e1cc(&DAT_009a6378,&DAT_009a6378);
LAB_006a23d8:
  do {
    if (DAT_009a6388 != 0) {
      ClearExclusiveLocal();
      <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::lock_contended
                (&DAT_009a6388);
      uVar13 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      puVar9 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
      goto joined_r0x006a2604;
    }
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(0x9a6388,0x10);
    if (bVar11) {
      DAT_009a6388 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  uVar13 = *(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
  puVar9 = (ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0;
joined_r0x006a2604:
  PTR_GLOBAL_PANIC_COUNT_0099f6c0 = (undefined *)puVar9;
  if ((uVar13 & 0x7fffffffffffffff) == 0) {
    bVar12 = 0;
    lVar8 = DAT_009a63a0;
  }
  else {
    bVar12 = std::panicking::panic_count::is_zero_slow_path();
    bVar12 = bVar12 ^ 1;
    lVar8 = DAT_009a63a0;
  }
  DAT_009a63a0 = lVar8;
  if (DAT_009a638c != '\0') {
    local_70 = &DAT_009a6388;
    local_68 = bVar12;
                    /* try { // try from 006a2624 to 006a2647 has its CatchHandler @ 006a267c */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("called `Result::unwrap()` on an `Err` value",0x2b,&local_70,&PTR_FUN_009755a8,
               &PTR_s__home_runner__cargo_registry_src_009755e0);
  }
  _DAT_009a6ea8 = 1;
  if (lVar8 == DAT_009a6390) {
                    /* try { // try from 006a2434 to 006a243f has its CatchHandler @ 006a264c */
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<&dyn_Trait<Assoc=X>+tracing_core::callsite::Callsite>>
    ::grow_one(&DAT_009a6390);
  }
  DAT_009a63a0 = lVar8 + 1;
  plVar1 = (long *)(DAT_009a6398 + lVar8 * 0x10);
  *plVar1 = (long)param_1;
  plVar1[1] = param_2;
  if ((((bVar12 & 1) == 0) && ((*puVar9 & 0x7fffffffffffffff) != 0)) &&
     (uVar13 = std::panicking::panic_count::is_zero_slow_path(), (uVar13 & 1) == 0)) {
    DAT_009a638c = '\x01';
  }
  do {
    iVar4 = DAT_009a6388;
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(0x9a6388,0x10);
    if (bVar11) {
      DAT_009a6388 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar4 == 2) {
    <std::sys::sync::mutex::futex::std::sys::sync::mutex::futex::Mutex>::wake(&DAT_009a6388);
  }
LAB_006a2480:
  FUN_0069ef94(&local_70,&DAT_009a6370);
  pcVar2 = *(code **)(param_2 + 0x18);
                    /* try { // try from 006a2494 to 006a24cb has its CatchHandler @ 006a2668 */
  local_58 = (undefined4 *)(**(code **)(param_2 + 0x20))(param_1);
  local_34[0] = -1;
  FUN_0069e25c(&local_70,&local_58,local_34);
  cVar5 = '\0';
  if (local_34[0] != -1) {
    cVar5 = local_34[0];
  }
  (*pcVar2)(param_1,cVar5);
  if (local_70 != (undefined4 *)0x0) {
    if (local_70 == (undefined4 *)0x1) {
      puVar7 = (uint *)CONCAT71(uStack_5f,local_60);
      do {
        uVar3 = *puVar7;
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar11) {
          *puVar7 = uVar3 - 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar3 - 1 & 0xbfffffff) != 0x80000000) {
        return;
      }
    }
    else {
      piVar6 = (int *)CONCAT71(uStack_67,local_68);
      if ((((local_60 & 1) == 0) &&
          ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0 & 0x7fffffffffffffff) != 0)) &&
         (uVar13 = std::panicking::panic_count::is_zero_slow_path(), (uVar13 & 1) == 0)) {
        *(undefined1 *)(piVar6 + 2) = 1;
      }
      do {
        iVar4 = *piVar6;
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar11) {
          *piVar6 = iVar4 + -0x3fffffff;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 + 0xc0000001U >> 0x1e == 0) {
        return;
      }
    }
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers()
    ;
  }
  return;
}


// ===== 006a2694  <tracing_core::dispatcher::SetGlobalDefaultError_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::dispatcher::SetGlobalDefaultError as core::fmt::Debug>::fmt */

void __rustcall
<tracing_core::dispatcher::SetGlobalDefaultError_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_28 [24];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple
            (auStack_28,param_2,tracing_core::dispatcher::NO_SUBSCRIBER,0x15);
  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::field
            (auStack_28,&PTR_s_a_global_default_trace_dispatche_009756a8,&DAT_009756b8);
  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::finish();
  return;
}


// ===== 006a26e0  FUN_006a26e0 =====

void FUN_006a26e0(undefined8 *param_1)

{
  core::fmt::pointer_fmt_inner(*(undefined8 *)*param_1);
  return;
}


// ===== 006a26ec  <tracing_core::callsite::Identifier_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::callsite::Identifier as core::fmt::Debug>::fmt */

void __rustcall
<tracing_core::callsite::Identifier_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_20;
  code *pcStack_18;
  
  pcStack_18 = FUN_006a2ac4;
  local_20 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_0036db27,&local_20);
  return;
}


// ===== 006a2728  <tracing_core::dispatcher::Dispatch_as_core::default::Default>::default =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::dispatcher::Dispatch as core::default::Default>::default */

void __rustcall
<tracing_core::dispatcher::Dispatch_as_core::default::Default>::default(undefined8 *param_1)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong *puVar10;
  long *plVar11;
  ulong uVar12;
  
  puVar1 = PTR_GLOBAL_DISPATCH_0099f6b8;
  if (*(long *)PTR_SCOPED_COUNT_0099f698 == 0) {
    lVar7 = *(long *)PTR_GLOBAL_INIT_0099f6a8;
    plVar11 = *(long **)(PTR_GLOBAL_DISPATCH_0099f6b8 + 8);
    uVar8 = 0;
    plVar6 = (long *)PTR_NO_SUBSCRIBER_0099f6d8;
    if ((lVar7 != 2) || (plVar6 = plVar11, *(int *)PTR_GLOBAL_DISPATCH_0099f6b8 == 0)) {
LAB_006a2848:
      puVar1 = *(undefined **)(puVar1 + 0x10);
      if (lVar7 != 2) {
        puVar1 = &DAT_009755f8;
      }
      *param_1 = uVar8;
      param_1[1] = plVar6;
      param_1[2] = puVar1;
      return;
    }
    do {
      lVar9 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (-1 < lVar9) {
      uVar8 = 1;
      goto LAB_006a2848;
    }
    goto LAB_006a2914;
  }
  uVar12 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_0099f6a0;
  if (uVar12 == 0) {
    uVar12 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_0099f6a0);
    puVar5 = (ulong *)pthread_getspecific((pthread_key_t)uVar12);
    if (puVar5 < &DAT_00000002) goto LAB_006a28c8;
  }
  else {
    puVar5 = (ulong *)pthread_getspecific((pthread_key_t)uVar12);
    if (puVar5 < &DAT_00000002) {
LAB_006a28c8:
      puVar5 = (ulong *)FUN_006a2cb4(uVar12 & 0xffffffff,puVar5,0);
    }
  }
  if ((puVar5 == (ulong *)0x0) ||
     (uVar12 = puVar5[4], *(undefined1 *)(puVar5 + 4) = 0, (char)uVar12 != '\x01')) {
    puVar1 = PTR_NO_SUBSCRIBER_0099f6d8;
    *param_1 = 0;
    param_1[1] = puVar1;
    param_1[2] = &DAT_009755f8;
    return;
  }
  if (0x7ffffffffffffffe < *puVar5) {
                    /* try { // try from 006a2908 to 006a2913 has its CatchHandler @ 006a2918 */
    core::cell::panic_already_mutably_borrowed(&PTR_s__home_runner__cargo_registry_src_00975578);
LAB_006a2914:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x6a2918);
    (*pcVar4)();
  }
  puVar10 = puVar5 + 1;
  uVar12 = *puVar10;
  *puVar5 = *puVar5 + 1;
  if (uVar12 == 2) {
    puVar10 = (ulong *)PTR_GLOBAL_DISPATCH_0099f6b8;
    if (*(long *)PTR_GLOBAL_INIT_0099f6a8 != 2) {
      puVar10 = (ulong *)PTR_NONE_0099f6b0;
    }
    uVar12 = *puVar10;
  }
  plVar6 = (long *)puVar10[1];
  if (uVar12 == 1) {
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 < 0) goto LAB_006a2914;
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  uVar12 = puVar10[2];
  *(undefined1 *)(puVar5 + 4) = 1;
  *puVar5 = *puVar5 - 1;
  *param_1 = uVar8;
  param_1[1] = plVar6;
  param_1[2] = uVar12;
  return;
}


// ===== 006a2924  FUN_006a2924 =====

undefined8 FUN_006a2924(void)

{
  return 0;
}


// ===== 006a292c  FUN_006a292c =====

void FUN_006a292c(void)

{
  return;
}


// ===== 006a2930  FUN_006a2930 =====

void FUN_006a2930(void)

{
  return;
}


// ===== 006a2934  FUN_006a2934 =====

undefined8 FUN_006a2934(void)

{
  return 0;
}


// ===== 006a293c  <tracing_core::dispatcher::Dispatch_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::dispatcher::Dispatch as core::fmt::Debug>::fmt */

void __rustcall
<tracing_core::dispatcher::Dispatch_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  long local_60;
  long lStack_58;
  undefined1 auStack_48 [24];
  undefined *local_30;
  undefined1 **ppuStack_28;
  undefined1 *local_20;
  code *pcStack_18;
  
  local_60 = (long)(param_1 + 1);
  if (*param_1 == 1) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_48,param_2,&DAT_00372e00,0x10);
    pcStack_18 = FUN_006a05a4;
  }
  else {
    lStack_58 = param_1[2];
    local_60 = *(long *)local_60;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple(auStack_48,param_2,&DAT_00371e00,0x10);
    pcStack_18 = FUN_006a3c2c;
  }
  ppuStack_28 = &local_20;
  local_30 = &DAT_00368e80;
  local_20 = (undefined1 *)&local_60;
  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::field
            (auStack_48,&local_30,&DAT_009756d8);
  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::finish();
  return;
}


// ===== 006a29e4  <tracing_core::dispatcher::WeakDispatch_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::dispatcher::WeakDispatch as core::fmt::Debug>::fmt */

void __rustcall
<tracing_core::dispatcher::WeakDispatch_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  long local_60;
  long lStack_58;
  undefined1 auStack_48 [24];
  undefined *local_30;
  undefined1 **ppuStack_28;
  undefined1 *local_20;
  code *pcStack_18;
  
  local_60 = (long)(param_1 + 1);
  if (*param_1 == 1) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple
              (auStack_48,param_2,"WeakDispatch::Scopedfailed to write whole buffer",0x14);
    pcStack_18 = FUN_006a05a4;
  }
  else {
    lStack_58 = param_1[2];
    local_60 = *(long *)local_60;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple
              (auStack_48,param_2,"WeakDispatch::Global",0x14);
    pcStack_18 = FUN_006a3c2c;
  }
  ppuStack_28 = &local_20;
  local_30 = &DAT_00368e80;
  local_20 = (undefined1 *)&local_60;
  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::field
            (auStack_48,&local_30,&DAT_009756d8);
  <core::fmt::builders::[2]::core::fmt::builders::DebugTuple>::finish();
  return;
}


// ===== 006a2a8c  <tracing_core::dispatcher::SetGlobalDefaultError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::dispatcher::SetGlobalDefaultError as core::fmt::Display>::fmt */

void __rustcall
<tracing_core::dispatcher::SetGlobalDefaultError_as_core::fmt::Display>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad
            (param_2,"a global default trace dispatcher has already been set",0x36);
  return;
}


// ===== 006a2aa0  <tracing_core::callsite::DefaultCallsite_as_tracing_core::callsite::Callsite>::set_interest =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::callsite::DefaultCallsite as tracing_core::callsite::Callsite>::set_interest */

void __rustcall
<tracing_core::callsite::DefaultCallsite_as_tracing_core::callsite::Callsite>::set_interest
          (long param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_2 == '\x02') {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (param_2 != '\0') {
    uVar1 = uVar2;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}


// ===== 006a2ac4  FUN_006a2ac4 =====

void FUN_006a2ac4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1[1];
  core::fmt::wide_pointer_fmt_inner(*param_1,&local_18,&DAT_009756f8,param_2);
  return;
}


// ===== 006a2af8  FUN_006a2af8 =====

undefined8 FUN_006a2af8(undefined8 param_1,undefined8 *param_2)

{
  return *param_2;
}


// ===== 006a2b00  FUN_006a2b00 =====

void FUN_006a2b00(undefined8 *param_1)

{
  *param_1 = 2;
  return;
}


// ===== 006a2b0c  FUN_006a2b0c =====

undefined1  [16] FUN_006a2b0c(undefined8 param_1,long *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._1_7_ = 0;
  auVar1[0] = *param_2 == -0x57b66019343f4a11 && param_2[1] == 0x20f4a74a1cdc7a7a;
  auVar1._8_8_ = param_1;
  return auVar1;
}


// ===== 006a2b48  FUN_006a2b48 =====

undefined8 FUN_006a2b48(void)

{
  return 1;
}


// ===== 006a2b50  FUN_006a2b50 =====

undefined8 FUN_006a2b50(void)

{
  return 0xfffffffffffffffe;
}


// ===== 006a2b58  FUN_006a2b58 =====

void FUN_006a2b58(void)

{
  return;
}


// ===== 006a2b5c  FUN_006a2b5c =====

/* WARNING: Type propagation algorithm not settling */

undefined * FUN_006a2b5c(undefined8 param_1,long param_2,undefined *param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined *local_58;
  
  if (param_3 != (undefined *)0x0) {
    do {
      auVar6 = <std::sys::stdio::unix::Stderr_as_std::io::Write>::write(param_1,param_2,param_3);
      puVar3 = auVar6._8_8_;
      if ((auVar6 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        if (puVar3 == (undefined *)0x0) {
          return &DAT_00975718;
        }
        puVar4 = param_3 + -(long)puVar3;
        if (param_3 < puVar3) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (puVar3,param_3,param_3,&PTR_s__rustc_48a229ceaefd4985c50990b14_00975730);
        }
        param_2 = param_2 + (long)puVar3;
      }
      else {
        puVar4 = param_3;
        if (((ulong)puVar3 & 3) < 2) {
          if ((auVar6 & (undefined1  [16])0x3) == (undefined1  [16])0x0) {
            if (puVar3[0x10] != '#') {
              return puVar3;
            }
          }
          else {
            if (puVar3[0x1f] != '#') {
              return puVar3;
            }
            local_58 = puVar3 + -1;
            <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_58);
          }
        }
        else if (((ulong)puVar3 & 3) == 2) {
                    /* try { // try from 006a2c14 to 006a2c27 has its CatchHandler @ 006a2c98 */
          lVar2 = core::io::error::os_functions::get_os_functions();
          iVar1 = (**(code **)(lVar2 + 0x10))((ulong)puVar3 >> 0x20);
          if (iVar1 == 0) {
            return puVar3;
          }
        }
        else {
          uVar5 = auVar6._12_4_ & 0xff;
          if (0x2a < (ulong)puVar3 >> 0x20) {
            uVar5 = 0xff;
          }
          if (uVar5 != 0x23) {
            return puVar3;
          }
        }
      }
      param_3 = puVar4;
    } while (puVar4 != (undefined *)0x0);
  }
  return (undefined *)0x0;
}


// ===== 006a2cb0  thunk_FUN_0069e87c =====

ulong thunk_FUN_0069e87c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined1 uStack_30;
  long lStack_28;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  iVar1 = core::fmt::write(&uStack_40,&PTR_FUN_00975220,param_2,param_3);
  if (iVar1 == 0) {
    if (uStack_38 != 0) {
      if ((1 < (uStack_38 & 3) - 2) && ((uStack_38 & 3) != 0)) {
        lStack_28 = uStack_38 - 1;
        uStack_30 = 3;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&lStack_28);
      }
      return 0;
    }
  }
  else if (uStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_00453b74,0xad,&PTR_s__rustc_48a229ceaefd4985c50990b14_00975250);
  }
  return uStack_38;
}


// ===== 006a2cb4  FUN_006a2cb4 =====

undefined8 * FUN_006a2cb4(pthread_key_t param_1,long param_2,uint *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *__pointer;
  void *__ptr;
  uint *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uStack_34;
  
  if (param_2 == 1) {
    return (undefined8 *)0x0;
  }
  puVar3 = (uint *)&DAT_00454018;
  if (param_3 != (uint *)0x0) {
    param_3[0] = 0;
    param_3[1] = 0;
    puVar3 = param_3 + 2;
    if ((*param_3 & 1) == 0) {
      puVar3 = (uint *)&DAT_00454018;
    }
  }
  uVar8 = *(undefined8 *)(puVar3 + 2);
  uVar7 = *(undefined8 *)puVar3;
  uVar10 = *(undefined8 *)(puVar3 + 6);
  uVar9 = *(undefined8 *)(puVar3 + 4);
  uVar4 = *(undefined8 *)(puVar3 + 8);
  __pointer = (undefined8 *)malloc(0x30);
  if (__pointer == (undefined8 *)0x0) {
                    /* try { // try from 006a2db0 to 006a2dbb has its CatchHandler @ 006a2de8 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x30);
  }
  __pointer[1] = uVar8;
  *__pointer = uVar7;
  __pointer[3] = uVar10;
  __pointer[2] = uVar9;
  __pointer[5] = CONCAT44(uStack_34,param_1);
  __pointer[4] = uVar4;
  __ptr = pthread_getspecific(param_1);
  pthread_setspecific(param_1,__pointer);
  if (__ptr != (void *)0x0) {
    if ((*(long *)((long)__ptr + 8) != 2) && (*(long *)((long)__ptr + 8) != 0)) {
      plVar5 = *(long **)((long)__ptr + 0x10);
      do {
        lVar6 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 006a2d70 to 006a2d73 has its CatchHandler @ 006a2dc0 */
        <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
        ::drop_slow();
      }
    }
    free(__ptr);
  }
  return __pointer;
}


// ===== 006a2e00  FUN_006a2e00 =====

void FUN_006a2e00(long param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plStack_80;
  long local_78;
  undefined **local_70;
  code *pcStack_68;
  
  uVar10 = *(ulong *)(param_1 + 0x10);
  if (uVar10 != 0) {
    uVar9 = 0;
    do {
      lVar8 = *(long *)(param_1 + 8);
      plVar5 = (long *)(lVar8 + uVar9 * 0x18);
      if (*plVar5 == 1) {
        plVar6 = (long *)plVar5[1];
        if (plVar6 == (long *)0xffffffffffffffff) {
LAB_006a2ee4:
          uVar11 = uVar9 + 1;
          if ((*plVar5 != 0) && (lVar4 = plVar5[1], lVar4 != -1)) {
            plVar6 = (long *)(lVar4 + 8);
            do {
              lVar7 = *plVar6;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar3) {
                *plVar6 = lVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar7 + -1 == 0) {
              DataMemoryBarrier(2,1);
              uVar1 = *(ulong *)(plVar5[2] + 0x10);
              if (uVar1 < 9) {
                uVar1 = 8;
              }
              uVar1 = *(long *)(plVar5[2] + 8) + uVar1 + 0xf & -uVar1;
              if (uVar1 != 0) {
                __rustc::__rust_dealloc(lVar4,uVar1);
              }
            }
          }
          if (uVar10 <= uVar11) goto LAB_006a3078;
          do {
            plVar5 = (long *)(lVar8 + uVar11 * 0x18);
            if (*plVar5 == 1) {
              plVar6 = (long *)plVar5[1];
              if (plVar6 != (long *)0xffffffffffffffff) {
                lVar4 = *plVar6;
                do {
                  if (lVar4 == 0) goto LAB_006a2fec;
                  if (lVar4 < 0) {
                    local_70 = &PTR_DAT_00975308;
                    pcStack_68 = FUN_0069f8c4;
                    /* try { // try from 006a30b0 to 006a30c7 has its CatchHandler @ 006a30fc */
                    /* WARNING: Subroutine does not return */
                    core::panicking::panic_fmt
                              (&DAT_00368e80,&local_70,
                               &PTR_s__rustc_48a229ceaefd4985c50990b14_00975330);
                  }
                  lVar7 = *plVar6;
                  if (lVar7 == lVar4) {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                    if (bVar3) {
                      *plVar6 = lVar4 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                    if (cVar2 == '\0') {
                      bVar3 = true;
                    }
                    else {
                      bVar3 = false;
                    }
                  }
                  else {
                    bVar3 = false;
                    ClearExclusiveLocal();
                  }
                  lVar4 = lVar7;
                } while (!bVar3);
                local_78 = plVar5[2];
                do {
                  lVar8 = *plVar6;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                  if (bVar3) {
                    *plVar6 = lVar8 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                plStack_80 = plVar6;
                if (lVar8 + -1 == 0) {
                  DataMemoryBarrier(2,1);
                    /* try { // try from 006a306c to 006a3073 has its CatchHandler @ 006a30f8 */
                  <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
                  ::drop_slow(&plStack_80);
                }
                goto LAB_006a2f60;
              }
LAB_006a2fec:
              if ((*plVar5 != 0) && (lVar4 = plVar5[1], lVar4 != -1)) {
                plVar6 = (long *)(lVar4 + 8);
                do {
                  lVar7 = *plVar6;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                  if (bVar3) {
                    *plVar6 = lVar7 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar7 + -1 == 0) {
                  DataMemoryBarrier(2,1);
                  uVar1 = *(ulong *)(plVar5[2] + 0x10);
                  if (uVar1 < 9) {
                    uVar1 = 8;
                  }
                  uVar1 = *(long *)(plVar5[2] + 8) + uVar1 + 0xf & -uVar1;
                  if (uVar1 != 0) {
                    __rustc::__rust_dealloc(lVar4,uVar1);
                  }
                }
              }
            }
            else {
LAB_006a2f60:
              lVar8 = *(long *)(param_1 + 8);
              plVar6 = (long *)(lVar8 + uVar9 * 0x18);
              lVar7 = *plVar5;
              lVar4 = plVar5[2];
              uVar9 = uVar9 + 1;
              plVar6[1] = plVar5[1];
              *plVar6 = lVar7;
              plVar6[2] = lVar4;
            }
            uVar11 = uVar11 + 1;
            if (uVar11 == uVar10) {
LAB_006a3078:
              *(ulong *)(param_1 + 0x10) = uVar9;
              return;
            }
          } while( true );
        }
        lVar4 = *plVar6;
        do {
          if (lVar4 == 0) goto LAB_006a2ee4;
          if (lVar4 < 0) {
            local_70 = &PTR_DAT_00975308;
            pcStack_68 = FUN_0069f8c4;
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_fmt
                      (&DAT_00368e80,&local_70,&PTR_s__rustc_48a229ceaefd4985c50990b14_00975330);
          }
          lVar7 = *plVar6;
          if (lVar7 == lVar4) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar4 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
          }
          else {
            bVar3 = false;
            ClearExclusiveLocal();
          }
          lVar4 = lVar7;
        } while (!bVar3);
        local_78 = plVar5[2];
        do {
          lVar8 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plStack_80 = plVar6;
        if (lVar8 + -1 == 0) {
          DataMemoryBarrier(2,1);
          <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
          ::drop_slow(&plStack_80);
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar10);
  }
  return;
}


// ===== 006a3130  FUN_006a3130 =====

void FUN_006a3130(ulong param_1)

{
  long local_18;
  
  if (((param_1 != 0) && (1 < (param_1 & 3) - 2)) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 006a317c  FUN_006a317c =====

void FUN_006a317c(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if ((*(long *)(param_1 + 8) != 2) && (*(long *)(param_1 + 8) != 0)) {
    plVar3 = *(long **)(param_1 + 0x10);
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
      ::drop_slow();
      return;
    }
  }
  return;
}


// ===== 006a31b0  FUN_006a31b0 =====

void FUN_006a31b0(void *param_1)

{
  pthread_key_t __key;
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  __key = *(pthread_key_t *)((long)param_1 + 0x28);
  pthread_setspecific(__key,(void *)0x1);
  if ((*(long *)((long)param_1 + 8) != 2) && (*(long *)((long)param_1 + 8) != 0)) {
    plVar4 = *(long **)((long)param_1 + 0x10);
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 006a3204 to 006a3207 has its CatchHandler @ 006a3230 */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+tracing_core::subscriber::Subscriber+core::marker::Sync+{backref_29}::Send>>
      ::drop_slow();
    }
  }
  free(param_1);
  iVar3 = pthread_setspecific(__key,(void *)0x0);
                    /* try { // try from 006a321c to 006a321f has its CatchHandler @ 006a325c */
  std::sys::thread_local::guard::key::enable(iVar3);
  return;
}


// ===== 006a3268  <tracing_core::event::tracing_core::event::Event>::dispatch =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::event::tracing_core::event::Event>::dispatch */

void __rustcall
<tracing_core::event::tracing_core::event::Event>::dispatch(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_30 [2];
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_30[0] = 1;
  local_20 = param_2;
  uStack_18 = param_1;
  FUN_006a1018(local_30);
  return;
}


// ===== 006a3294  <tracing_core::field::[R]::tracing_core::field::ValueSet>::len =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::field::[R]::tracing_core::field::ValueSet>::len */

long __rustcall <tracing_core::field::[R]::tracing_core::field::ValueSet>::len(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_1[1];
  if (uVar4 == 0) {
    return 0;
  }
  lVar3 = *(long *)(param_1[2] + 0x10);
  if (uVar4 == 1) {
    uVar7 = 0;
    lVar2 = 0;
  }
  else {
    lVar5 = 0;
    lVar2 = 0;
    uVar7 = uVar4 & 0xfffffffffffffffe;
    uVar8 = uVar4 & 0xfffffffffffffffe;
    plVar6 = (long *)*param_1;
    do {
      lVar9 = *plVar6;
      plVar1 = plVar6 + 3;
      plVar6 = plVar6 + 6;
      if (*(long *)(lVar9 + 0x10) == lVar3) {
        lVar5 = lVar5 + 1;
      }
      if (*(long *)(*plVar1 + 0x10) == lVar3) {
        lVar2 = lVar2 + 1;
      }
      uVar8 = uVar8 - 2;
    } while (uVar8 != 0);
    lVar2 = lVar2 + lVar5;
    if (uVar4 == uVar7) {
      return lVar2;
    }
  }
  lVar5 = uVar4 - uVar7;
  plVar6 = (long *)*param_1 + uVar7 * 3;
  do {
    if (*(long *)(*plVar6 + 0x10) == lVar3) {
      lVar2 = lVar2 + 1;
    }
    lVar5 = lVar5 + -1;
    plVar6 = plVar6 + 3;
  } while (lVar5 != 0);
  return lVar2;
}


// ===== 006a3338  <tracing_core::field::[R]::tracing_core::field::ValueSet>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::field::[R]::tracing_core::field::ValueSet>::record */

void __rustcall
<tracing_core::field::[R]::tracing_core::field::ValueSet>::record
          (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1[1] != 0) {
    lVar1 = *(long *)(param_1[2] + 0x10);
    lVar2 = param_1[1] * 0x18;
    plVar3 = (long *)(*param_1 + 0x10);
    do {
      if ((*(long *)(plVar3[-2] + 0x10) == lVar1) && (plVar3[-1] != 0)) {
        (**(code **)(*plVar3 + 0x18))(plVar3[-1],plVar3[-2],param_2,param_3);
      }
      lVar2 = lVar2 + -0x18;
      plVar3 = plVar3 + 3;
    } while (lVar2 != 0);
  }
  return;
}


// ===== 006a33c8  <tracing_core::field::[R]::tracing_core::field::ValueSet>::is_empty =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::field::[R]::tracing_core::field::ValueSet>::is_empty */

undefined8 __rustcall
<tracing_core::field::[R]::tracing_core::field::ValueSet>::is_empty(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  if (param_1[1] != 0) {
    lVar1 = param_1[1] * 0x18;
    plVar2 = (long *)(*param_1 + 8);
    do {
      if ((*plVar2 != 0) && (*(long *)(plVar2[-1] + 0x10) == *(long *)(param_1[2] + 0x10))) {
        return 0;
      }
      lVar1 = lVar1 + -0x18;
      plVar2 = plVar2 + 3;
    } while (lVar1 != 0);
  }
  return 1;
}


// ===== 006a3420  <tracing_core::field::HexBytes_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::field::HexBytes as core::fmt::Debug>::fmt */

undefined8 __rustcall
<tracing_core::field::HexBytes_as_core::fmt::Debug>::fmt(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long local_58;
  long *plStack_50;
  code *local_48;
  
  uVar4 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(param_2,0x5b);
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    plStack_50 = &local_58;
    local_48 = FUN_0069f8d8;
    local_58 = lVar1;
    iVar3 = core::fmt::write(*param_2,param_2[1],&DAT_003741e0,&plStack_50);
    if (iVar3 != 0) {
      return 1;
    }
    lVar6 = lVar1 + 1;
    if (lVar6 != lVar1 + lVar2) {
      do {
        local_48 = FUN_0069f8d8;
        local_58 = lVar6;
        plStack_50 = &local_58;
        uVar4 = core::fmt::write(*param_2,param_2[1],&DAT_00454040,&plStack_50);
        if ((uVar4 & 1) != 0) {
          return 1;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != lVar1 + lVar2);
    }
  }
  uVar5 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(param_2,0x5d);
  return uVar5;
}


// ===== 006a351c  FUN_006a351c =====

void FUN_006a351c(void)

{
  undefined1 uStack_11;
  
  thunk_FUN_0069e87c(&uStack_11,"fatal runtime error: thread local panicked on drop, aborting\n",
                     0x7b);
  FUN_006a3130();
                    /* WARNING: Subroutine does not return */
  std::process::abort();
}


// ===== 006a3544  <<dyn_Trait<Assoc=X>+tracing_core::field::Value_as_core::fmt::Debug>::fmt::NullCallsite_as_tracing_core::callsite::Callsite>::set_interest =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<dyn Trait<Assoc = X> + tracing_core::field::Value as core::fmt::Debug>::fmt::NullCallsite as
   tracing_core::callsite::Callsite>::set_interest */

void __rustcall
<<dyn_Trait<Assoc=X>+tracing_core::field::Value_as_core::fmt::Debug>::fmt::NullCallsite_as_tracing_core::callsite::Callsite>
::set_interest(void)

{
  undefined **local_20;
  code *pcStack_18;
  
  local_20 = &PTR_s_you_somehow_managed_to_register_t_00975870;
  pcStack_18 = FUN_0069f8c4;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_00369fbc,&local_20,&PTR_s__home_runner__cargo_registry_src_00975880);
}


// ===== 006a357c  <<dyn_Trait<Assoc=X>+tracing_core::field::Value_as_core::fmt::Debug>::fmt::NullCallsite_as_tracing_core::callsite::Callsite>::metadata =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<dyn Trait<Assoc = X> + tracing_core::field::Value as core::fmt::Debug>::fmt::NullCallsite as
   tracing_core::callsite::Callsite>::metadata */

void __rustcall
<<dyn_Trait<Assoc=X>+tracing_core::field::Value_as_core::fmt::Debug>::fmt::NullCallsite_as_tracing_core::callsite::Callsite>
::metadata(void)

{
  undefined **local_20;
  code *pcStack_18;
  
  local_20 = &PTR_s_you_somehow_managed_to_access_th_00975898;
  pcStack_18 = FUN_0069f8c4;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt
            (&DAT_00369fbc,&local_20,&PTR_s__home_runner__cargo_registry_src_009758a8);
}


// ===== 006a35b4  <u64_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u64 as tracing_core::field::Value>::record */

void __rustcall
<u64_as_tracing_core::field::Value>::record
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006a35c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x28))(param_3,param_2,*param_1);
  return;
}


// ===== 006a35c8  <core::num::nonzero::NonZero<u64>as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<u64> as tracing_core::field::Value>::record */

void __rustcall
<core::num::nonzero::NonZero<u64>as_tracing_core::field::Value>::record
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006a35d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x28))(param_3,param_2,*param_1);
  return;
}


// ===== 006a35dc  <core::num::nonzero::NonZero<i16>as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<i16> as tracing_core::field::Value>::record */

void __rustcall
<core::num::nonzero::NonZero<i16>as_tracing_core::field::Value>::record
          (short *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006a35ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x20))(param_3,param_2,(long)*param_1);
  return;
}


// ===== 006a35f0  <i8_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i8 as tracing_core::field::Value>::record */

void __rustcall
<i8_as_tracing_core::field::Value>::record
          (char *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006a3600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x20))(param_3,param_2,(long)*param_1);
  return;
}


// ===== 006a3604  <core::num::nonzero::NonZero<i8>as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<i8> as tracing_core::field::Value>::record */

void __rustcall
<core::num::nonzero::NonZero<i8>as_tracing_core::field::Value>::record
          (char *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006a3614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x20))(param_3,param_2,(long)*param_1);
  return;
}


// ===== 006a3618  <u128_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u128 as tracing_core::field::Value>::record */

void __rustcall
<u128_as_tracing_core::field::Value>::record
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006a362c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x38))(param_3,param_2,*param_1,param_1[1]);
  return;
}


// ===== 006a3630  <core::num::nonzero::NonZero<u128>as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<u128> as tracing_core::field::Value>::record */

void __rustcall
<core::num::nonzero::NonZero<u128>as_tracing_core::field::Value>::record
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006a3644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x38))(param_3,param_2,*param_1,param_1[1]);
  return;
}


// ===== 006a3648  <i128_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i128 as tracing_core::field::Value>::record */

void __rustcall
<i128_as_tracing_core::field::Value>::record
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006a365c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x30))(param_3,param_2,*param_1,param_1[1]);
  return;
}


// ===== 006a3660  <core::num::nonzero::NonZero<i128>as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<i128> as tracing_core::field::Value>::record */

void __rustcall
<core::num::nonzero::NonZero<i128>as_tracing_core::field::Value>::record
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006a3674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x30))(param_3,param_2,*param_1,param_1[1]);
  return;
}


// ===== 006a3678  <bool_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <bool as tracing_core::field::Value>::record */

void __rustcall
<bool_as_tracing_core::field::Value>::record
          (undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006a3688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x40))(param_3,param_2,*param_1);
  return;
}


// ===== 006a368c  <f64_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f64 as tracing_core::field::Value>::record */

void __rustcall
<f64_as_tracing_core::field::Value>::record
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006a3698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x18))(*param_1,param_3);
  return;
}


// ===== 006a369c  <f32_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <f32 as tracing_core::field::Value>::record */

void __rustcall
<f32_as_tracing_core::field::Value>::record
          (float *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006a36ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x18))((double)*param_1,param_3);
  return;
}


// ===== 006a36b0  FUN_006a36b0 =====

void FUN_006a36b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 *local_30;
  code *pcStack_28;
  
  local_30 = (undefined1 *)&local_40;
  puVar1 = (undefined1 *)*param_1;
  pcStack_28 = FUN_0069f7f4;
  local_40 = param_3;
  uStack_38 = param_4;
  uVar2 = core::fmt::write(**(undefined8 **)param_1[1],(*(undefined8 **)param_1[1])[1],&DAT_00368e80
                           ,&local_30);
  *puVar1 = uVar2;
  return;
}


// ===== 006a3704  <u32_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as tracing_core::field::Value>::record */

void __rustcall
<u32_as_tracing_core::field::Value>::record
          (undefined4 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006a3714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x28))(param_3,param_2,*param_1);
  return;
}


// ===== 006a3718  <core::num::nonzero::NonZero<u32>as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<u32> as tracing_core::field::Value>::record */

void __rustcall
<core::num::nonzero::NonZero<u32>as_tracing_core::field::Value>::record
          (undefined4 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006a3728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x28))(param_3,param_2,*param_1);
  return;
}


// ===== 006a372c  <u16_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as tracing_core::field::Value>::record */

void __rustcall
<u16_as_tracing_core::field::Value>::record
          (undefined2 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006a373c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x28))(param_3,param_2,*param_1);
  return;
}


// ===== 006a3740  <core::num::nonzero::NonZero<u16>as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<u16> as tracing_core::field::Value>::record */

void __rustcall
<core::num::nonzero::NonZero<u16>as_tracing_core::field::Value>::record
          (undefined2 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006a3750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x28))(param_3,param_2,*param_1);
  return;
}


// ===== 006a3754  FUN_006a3754 =====

void FUN_006a3754(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  uVar2 = plVar3[4];
  if (uVar2 < (ulong)plVar3[1]) {
    puVar1 = (undefined8 *)(*plVar3 + uVar2 * 0x10);
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,*puVar1,puVar1[1]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (uVar2,plVar3[1],&PTR_s__home_runner__cargo_registry_src_009758c0);
}


// ===== 006a3798  <u8_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as tracing_core::field::Value>::record */

void __rustcall
<u8_as_tracing_core::field::Value>::record
          (undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006a37a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x28))(param_3,param_2,*param_1);
  return;
}


// ===== 006a37ac  <core::num::nonzero::NonZero<u8>as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<u8> as tracing_core::field::Value>::record */

void __rustcall
<core::num::nonzero::NonZero<u8>as_tracing_core::field::Value>::record
          (undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006a37bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x28))(param_3,param_2,*param_1);
  return;
}


// ===== 006a37c0  <i64_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i64 as tracing_core::field::Value>::record */

void __rustcall
<i64_as_tracing_core::field::Value>::record
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006a37d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x20))(param_3,param_2,*param_1);
  return;
}


// ===== 006a37d4  <core::num::nonzero::NonZero<isize>as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<isize> as tracing_core::field::Value>::record */

void __rustcall
<core::num::nonzero::NonZero<isize>as_tracing_core::field::Value>::record
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006a37e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x20))(param_3,param_2,*param_1);
  return;
}


// ===== 006a37e8  <i32_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i32 as tracing_core::field::Value>::record */

void __rustcall
<i32_as_tracing_core::field::Value>::record
          (int *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006a37f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x20))(param_3,param_2,(long)*param_1);
  return;
}


// ===== 006a37fc  <core::num::nonzero::NonZero<i32>as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::num::nonzero::NonZero<i32> as tracing_core::field::Value>::record */

void __rustcall
<core::num::nonzero::NonZero<i32>as_tracing_core::field::Value>::record
          (int *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006a380c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x20))(param_3,param_2,(long)*param_1);
  return;
}


// ===== 006a3810  <i16_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <i16 as tracing_core::field::Value>::record */

void __rustcall
<i16_as_tracing_core::field::Value>::record
          (short *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x006a3820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x20))(param_3,param_2,(long)*param_1);
  return;
}


// ===== 006a3824  <tracing_core::subscriber::NoSubscriber_as_tracing_core::subscriber::Subscriber>::new_span =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::subscriber::NoSubscriber as tracing_core::subscriber::Subscriber>::new_span */

undefined8 __rustcall
<tracing_core::subscriber::NoSubscriber_as_tracing_core::subscriber::Subscriber>::new_span(void)

{
  return 0xdead;
}


// ===== 006a382c  <str_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <str as tracing_core::field::Value>::record */

void __rustcall
<str_as_tracing_core::field::Value>::record
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
                    /* WARNING: Could not recover jumptable at 0x006a3848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x48))(param_4,param_3,param_1,param_2);
  return;
}


// ===== 006a384c  <[u8]as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <[u8] as tracing_core::field::Value>::record */

void __rustcall
<[u8]as_tracing_core::field::Value>::record
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
                    /* WARNING: Could not recover jumptable at 0x006a3868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x50))(param_4,param_3,param_1,param_2);
  return;
}


// ===== 006a386c  <dyn_Trait<Assoc=X>+core::error::Error_as_tracing_core::field::Value>::record =====

/* WARNING: Unknown calling convention: __rustcall */
/* <dyn Trait<Assoc = X> + core::error::Error as tracing_core::field::Value>::record */

void __rustcall
<dyn_Trait<Assoc=X>+core::error::Error_as_tracing_core::field::Value>::record
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
                    /* WARNING: Could not recover jumptable at 0x006a3888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x58))(param_4,param_3,param_1,param_2);
  return;
}


// ===== 006a388c  <tracing_core::field::Field_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::field::Field as core::fmt::Display>::fmt */

void __rustcall
<tracing_core::field::Field_as_core::fmt::Display>::fmt(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = param_1[4];
  if (uVar2 < (ulong)param_1[1]) {
    puVar1 = (undefined8 *)(*param_1 + uVar2 * 0x10);
    <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,*puVar1,puVar1[1]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check
            (uVar2,param_1[1],&PTR_s__home_runner__cargo_registry_src_009758c0);
}


// ===== 006a38d0  <tracing_core::field::FieldSet_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::field::FieldSet as core::fmt::Debug>::fmt */

void __rustcall
<tracing_core::field::FieldSet_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_00375768,8);
  uVar1 = <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
                    (auStack_30,
                     "namesTagMap on ResultMap on OptionAlternativeIsNotIsASeparated listSeparated non empty listMany0Many1ManyTillCountTake untilLength followed by valueTag closureAlphabeticDigitHexadecimal DigitOctal digitBinary digitAlphaNumericSpaceMultiple spacesLengthValueFnEnd of fileSwitchTag on bitstreamOneOfNoneOfCharCrLfRegexpMatchRegexpMatchesRegexpFindRegexpCaptureRegexpCapturesTakeWhile1CompleteFixEscapedEscapedTransformNonEmptyMany(m, n)NegationPermutationpredicate verificationTakeTill1TakeWhileMNNeeded data size is too largeCount occurrence of >=0 patternsCount occurrence of >=1 patternsFloatSatisfyFailManyFoldPrecedence"
                     ,5,param_1,&DAT_009758d8);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (uVar1,"callsite",8,param_1 + 0x10,&DAT_009758f8);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 006a3950  <tracing_core::field::FieldSet_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::field::FieldSet as core::fmt::Display>::fmt */

void __rustcall
<tracing_core::field::FieldSet_as_core::fmt::Display>::fmt(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long local_18;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_set(auStack_40,param_2);
  if (param_1[1] != 0) {
    lVar1 = param_1[1] << 4;
    lVar2 = *param_1;
    do {
      local_18 = lVar2;
      <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::entry
                (auStack_40,&local_18,&DAT_009751a0);
      lVar1 = lVar1 + -0x10;
      lVar2 = lVar2 + 0x10;
    } while (lVar1 != 0);
  }
  <core::fmt::builders::[4]::core::fmt::builders::DebugSet>::finish(auStack_40);
  return;
}


// ===== 006a39c8  FUN_006a39c8 =====

void FUN_006a39c8(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <i64_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <i64_as_core::fmt::Display>::fmt();
    return;
  }
  <i64_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 006a39e0  <tracing_core::field::ValueSet_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::field::ValueSet as core::fmt::Debug>::fmt */

void __rustcall
<tracing_core::field::ValueSet_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_50,param_2,&DAT_00373e20,8);
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar1 + 0x10);
    do {
      if (plVar3[-1] != 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3[-1],plVar3[-2],auStack_50,&DAT_00975748);
      }
      lVar2 = lVar2 + -1;
      plVar3 = plVar3 + 3;
    } while (lVar2 != 0);
  }
  uStack_38 = *(undefined8 *)(param_1[2] + 0x18);
  local_40 = *(undefined8 *)(param_1[2] + 0x10);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::field
            (auStack_50,"callsite",8,&local_40,&DAT_009758f8);
  <core::fmt::builders::[1]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 006a3a9c  FUN_006a3a9c =====

void FUN_006a3a9c(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <i128_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <i128_as_core::fmt::Display>::fmt();
    return;
  }
  <i128_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 006a3ab4  <tracing_core::field::ValueSet_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <tracing_core::field::ValueSet as core::fmt::Display>::fmt */

void __rustcall
<tracing_core::field::ValueSet_as_core::fmt::Display>::fmt(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_40 [16];
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  <core::fmt::[a]::core::fmt::Formatter>::debug_map(auStack_40,param_2);
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar1 + 0x10);
    do {
      if (plVar3[-1] != 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3[-1],plVar3[-2],auStack_40,&DAT_009757b0);
      }
      lVar2 = lVar2 + -1;
      plVar3 = plVar3 + 3;
    } while (lVar2 != 0);
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugMap>::finish(auStack_40);
  return;
}


// ===== 006a3b38  FUN_006a3b38 =====

void FUN_006a3b38(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u64_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <usize_as_core::fmt::Display>::fmt();
    return;
  }
  <u64_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 006a3b50  FUN_006a3b50 =====

void FUN_006a3b50(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u128_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <u128_as_core::fmt::Display>::fmt();
    return;
  }
  <u128_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 006a3b68  <dyn_core[188d2c0002da36d0]::error::Error+core[188d2c0002da36d0]::marker::Sync+core[188d2c0002da36d0]::marker::Send_as_tracing_core[702fccbc9f4cc72b]::field::Value>::record =====

/* <dyn core[188d2c0002da36d0]::error::Error + core[188d2c0002da36d0]::marker::Sync +
   core[188d2c0002da36d0]::marker::Send as tracing_core[702fccbc9f4cc72b]::field::Value>::record */

void <dyn_core[188d2c0002da36d0]::error::Error+core[188d2c0002da36d0]::marker::Sync+core[188d2c0002da36d0]::marker::Send_as_tracing_core[702fccbc9f4cc72b]::field::Value>
     ::record(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
                    /* WARNING: Could not recover jumptable at 0x006a3b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x58))(param_4,param_3,param_1,param_2);
  return;
}


// ===== 006a3b88  FUN_006a3b88 =====

void FUN_006a3b88(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 8;
  param_1[4] = 0;
  return;
}


// ===== 006a3ba0  <bool_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <bool_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_009a06e0)();
  return;
}


// ===== 006a3ba4  FUN_006a3ba4 =====

void FUN_006a3ba4(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  ulong uVar5;
  
  piVar4 = (int *)*param_1;
  if ((((*(byte *)(param_1 + 1) & 1) == 0) &&
      ((*(ulong *)PTR_GLOBAL_PANIC_COUNT_0099f6c0 & 0x7fffffffffffffff) != 0)) &&
     (uVar5 = std::panicking::panic_count::is_zero_slow_path(), (uVar5 & 1) == 0)) {
    *(undefined1 *)(piVar4 + 2) = 1;
  }
  do {
    iVar1 = *piVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar3) {
      *piVar4 = iVar1 + -0x3fffffff;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + 0xc0000001U >> 0x1e != 0) {
    <std::sys::sync::rwlock::futex::std::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers()
    ;
    return;
  }
  return;
}


// ===== 006a3c2c  FUN_006a3c2c =====

void FUN_006a3c2c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1[1];
  core::fmt::wide_pointer_fmt_inner(*param_1,&local_18,&DAT_00975918,param_2);
  return;
}


// ===== 006a3c60  <dyn_Trait<Assoc=X>+tracing_core::field::Value_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <dyn Trait<Assoc = X> + tracing_core::field::Value as core::fmt::Debug>::fmt */

undefined1 __rustcall
<dyn_Trait<Assoc=X>+tracing_core::field::Value_as_core::fmt::Debug>::fmt
          (undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 local_30;
  undefined1 local_24 [4];
  undefined1 *local_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&local_30;
  local_20 = local_24;
  local_24[0] = 0;
  local_30 = param_3;
  (**(code **)(param_2 + 0x18))(param_1,&DAT_00975848,&local_20,&DAT_00975938);
  return local_24[0];
}


// ===== 006a3cac  <dyn_Trait<Assoc=X>+tracing_core::field::Value_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <dyn Trait<Assoc = X> + tracing_core::field::Value as core::fmt::Display>::fmt */

undefined1 __rustcall
<dyn_Trait<Assoc=X>+tracing_core::field::Value_as_core::fmt::Display>::fmt
          (undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 local_30;
  undefined1 local_24 [4];
  undefined1 *local_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&local_30;
  local_20 = local_24;
  local_24[0] = 0;
  local_30 = param_3;
  (**(code **)(param_2 + 0x18))(param_1,&DAT_00975848,&local_20,&DAT_00975938);
  return local_24[0];
}


// ===== 006a3cf8  FUN_006a3cf8 =====

void FUN_006a3cf8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006a3d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x20))(*param_1);
  return;
}


// ===== 006a3d04  FUN_006a3d04 =====

void FUN_006a3d04(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*(undefined8 *)*param_1,((undefined8 *)*param_1)[1],param_2);
  return;
}


// ===== 006a3d18  FUN_006a3d18 =====

void FUN_006a3d18(undefined8 param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 *local_40;
  undefined *puStack_38;
  undefined1 *local_30;
  code *pcStack_28;
  undefined8 local_8;
  
  local_30 = (undefined1 *)&local_40;
  puVar1 = (undefined1 *)*param_2;
  local_40 = &local_8;
  puStack_38 = &DAT_009759a0;
  pcStack_28 = FUN_0069f7f4;
  local_8 = param_1;
  uVar2 = core::fmt::write(**(undefined8 **)param_2[1],(*(undefined8 **)param_2[1])[1],&DAT_00368e80
                           ,&local_30);
  *puVar1 = uVar2;
  return;
}


// ===== 006a3d7c  FUN_006a3d7c =====

void FUN_006a3d7c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 *local_40;
  undefined *puStack_38;
  undefined1 *local_30;
  code *pcStack_28;
  undefined8 local_8;
  
  local_30 = (undefined1 *)&local_40;
  puVar1 = (undefined1 *)*param_1;
  local_40 = &local_8;
  puStack_38 = &DAT_009759c0;
  pcStack_28 = FUN_0069f7f4;
  local_8 = param_3;
  uVar2 = core::fmt::write(**(undefined8 **)param_1[1],(*(undefined8 **)param_1[1])[1],&DAT_00368e80
                           ,&local_30);
  *puVar1 = uVar2;
  return;
}


// ===== 006a3de0  FUN_006a3de0 =====

void FUN_006a3de0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  undefined *puStack_38;
  undefined1 **local_30;
  code *pcStack_28;
  
  local_40 = (undefined1 *)&local_50;
  puVar1 = (undefined1 *)*param_1;
  puStack_38 = &DAT_009759e0;
  local_30 = &local_40;
  pcStack_28 = FUN_0069f7f4;
  local_50 = param_3;
  uStack_48 = param_4;
  uVar2 = core::fmt::write(**(undefined8 **)param_1[1],(*(undefined8 **)param_1[1])[1],&DAT_00368e80
                           ,&local_30);
  *puVar1 = uVar2;
  return;
}


// ===== 006a3e44  FUN_006a3e44 =====

void FUN_006a3e44(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 *local_40;
  undefined *puStack_38;
  undefined1 *local_30;
  code *pcStack_28;
  undefined8 local_8;
  
  local_30 = (undefined1 *)&local_40;
  puVar1 = (undefined1 *)*param_1;
  local_40 = &local_8;
  puStack_38 = &DAT_00975a00;
  pcStack_28 = FUN_0069f7f4;
  local_8 = param_3;
  uVar2 = core::fmt::write(**(undefined8 **)param_1[1],(*(undefined8 **)param_1[1])[1],&DAT_00368e80
                           ,&local_30);
  *puVar1 = uVar2;
  return;
}


// ===== 006a3ea8  FUN_006a3ea8 =====

void FUN_006a3ea8(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *local_40;
  undefined *puStack_38;
  undefined1 *local_30;
  code *pcStack_28;
  undefined1 local_4 [4];
  
  local_30 = (undefined1 *)&local_40;
  puVar1 = (undefined1 *)*param_1;
  local_40 = local_4;
  puStack_38 = &DAT_00975a20;
  pcStack_28 = FUN_0069f7f4;
  local_4[0] = param_3;
  uVar2 = core::fmt::write(**(undefined8 **)param_1[1],(*(undefined8 **)param_1[1])[1],&DAT_00368e80
                           ,&local_30);
  *puVar1 = uVar2;
  return;
}


// ===== 006a3f0c  FUN_006a3f0c =====

void FUN_006a3f0c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  undefined *puStack_38;
  undefined1 **local_30;
  code *pcStack_28;
  
  local_40 = (undefined1 *)&local_50;
  puVar1 = (undefined1 *)*param_1;
  puStack_38 = &DAT_00975a40;
  local_30 = &local_40;
  pcStack_28 = FUN_0069f7f4;
  local_50 = param_3;
  uStack_48 = param_4;
  uVar2 = core::fmt::write(**(undefined8 **)param_1[1],(*(undefined8 **)param_1[1])[1],&DAT_00368e80
                           ,&local_30);
  *puVar1 = uVar2;
  return;
}


// ===== 006a3f70  FUN_006a3f70 =====

void FUN_006a3f70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  undefined *puStack_38;
  undefined1 **local_30;
  code *pcStack_28;
  
  local_40 = (undefined1 *)&local_50;
  puVar1 = (undefined1 *)*param_1;
  puStack_38 = &DAT_00975a60;
  local_30 = &local_40;
  pcStack_28 = FUN_0069f7f4;
  local_50 = param_3;
  uStack_48 = param_4;
  uVar2 = core::fmt::write(**(undefined8 **)param_1[1],(*(undefined8 **)param_1[1])[1],&DAT_00368e80
                           ,&local_30);
  *puVar1 = uVar2;
  return;
}


// ===== 006a3fd4  FUN_006a3fd4 =====

void FUN_006a3fd4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  undefined *puStack_38;
  undefined1 **local_30;
  code *pcStack_28;
  
  local_40 = (undefined1 *)&local_50;
  puVar1 = (undefined1 *)*param_1;
  puStack_38 = &DAT_00975a80;
  local_30 = &local_40;
  pcStack_28 = FUN_0069f7f4;
  local_50 = param_3;
  uStack_48 = param_4;
  uVar2 = core::fmt::write(**(undefined8 **)param_1[1],(*(undefined8 **)param_1[1])[1],&DAT_00368e80
                           ,&local_30);
  *puVar1 = uVar2;
  return;
}


// ===== 006a4038  FUN_006a4038 =====

void FUN_006a4038(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  undefined *puStack_38;
  undefined1 **local_30;
  code *pcStack_28;
  
  local_40 = (undefined1 *)&local_50;
  puVar1 = (undefined1 *)*param_1;
  puStack_38 = &DAT_00975aa0;
  local_30 = &local_40;
  pcStack_28 = FUN_0069f7f4;
  local_50 = param_3;
  uStack_48 = param_4;
  uVar2 = core::fmt::write(**(undefined8 **)param_1[1],(*(undefined8 **)param_1[1])[1],&DAT_00368e80
                           ,&local_30);
  *puVar1 = uVar2;
  return;
}


// ===== 006a409c  FUN_006a409c =====

undefined8 FUN_006a409c(void)

{
  return 0;
}


// ===== 006a40a4  FUN_006a40a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006a40a4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _s__003723f0;
  param_1[1] = _UNK_003723f8;
  *param_1 = uVar1;
  return;
}


// ===== 006a40b8  once_cell::imp::initialize_or_wait =====

/* WARNING: Unknown calling convention: __rustcall */
/* once_cell::imp::initialize_or_wait */

void __rustcall once_cell::imp::initialize_or_wait(ulong *param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *local_78;
  long local_70;
  char local_68;
  
  uVar3 = *param_1;
LAB_006a40ec:
  uVar4 = uVar3 & 3;
  do {
  } while (uVar4 == 3);
  if (uVar4 == 0) {
    if (param_2 != 0) {
      while (*param_1 == uVar3) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = uVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          local_70 = 0;
          local_78 = param_1;
                    /* try { // try from 006a4260 to 006a4267 has its CatchHandler @ 006a429c */
          uVar3 = (**(code **)(param_3 + 0x20))(param_2);
          if ((uVar3 & 1) != 0) {
            local_70 = 2;
          }
          <once_cell::imp::Guard_as_core::ops::drop::Drop>::drop(&local_78);
          return;
        }
      }
      ClearExclusiveLocal();
      uVar3 = *param_1;
      goto LAB_006a40ec;
    }
  }
  else if (uVar4 != 1) {
    return;
  }
  local_78 = (ulong *)std::thread::current::current();
  local_70 = uVar3 - uVar4;
  local_68 = '\0';
LAB_006a414c:
  uVar5 = *param_1;
  if (uVar5 == uVar3) goto code_r0x006a4158;
  ClearExclusiveLocal();
  while (local_68 = '\0', (uVar5 & 3) == uVar4) {
    if (local_78 != (ulong *)0x0) {
      do {
        uVar3 = *local_78;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(local_78,0x10);
        if (bVar2) {
          *local_78 = uVar3 - 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (uVar3 - 1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc[cc0d62b833a55794]::sync::Arc<std[29fbf8137994c300]::thread::thread::Inner,std[29fbf8137994c300]::alloc::System>>
        ::drop_slow(&local_78);
      }
    }
    local_78 = (ulong *)std::thread::current::current();
    local_70 = uVar5 - uVar4;
    local_68 = '\0';
    while (*param_1 == uVar5) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = (ulong)&local_78 | uVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') goto LAB_006a4200;
    }
    ClearExclusiveLocal();
    uVar5 = *param_1;
  }
  if (local_78 != (ulong *)0x0) {
    do {
      uVar3 = *local_78 - 1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(local_78,0x10);
      if (bVar2) {
        *local_78 = uVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    goto LAB_006a422c;
  }
  goto LAB_006a4244;
code_r0x006a4158:
  cVar1 = '\x01';
  bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar2) {
    *param_1 = (ulong)&local_78 | uVar4;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_006a4200;
  goto LAB_006a414c;
LAB_006a4200:
  while (local_68 == '\0') {
                    /* try { // try from 006a420c to 006a420f has its CatchHandler @ 006a42b0 */
    std::thread::functions::park();
  }
  if (local_78 != (ulong *)0x0) {
    do {
      uVar3 = *local_78 - 1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(local_78,0x10);
      if (bVar2) {
        *local_78 = uVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_006a422c:
    if (uVar3 == 0) {
      DataMemoryBarrier(2,1);
      <alloc[cc0d62b833a55794]::sync::Arc<std[29fbf8137994c300]::thread::thread::Inner,std[29fbf8137994c300]::alloc::System>>
      ::drop_slow(&local_78);
      uVar3 = *param_1;
      goto LAB_006a40ec;
    }
  }
LAB_006a4244:
  uVar3 = *param_1;
  goto LAB_006a40ec;
}


// ===== 006a42e8  <once_cell::imp::Guard_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <once_cell::imp::Guard as core::ops::drop::Drop>::drop */

void __rustcall <once_cell::imp::Guard_as_core::ops::drop::Drop>::drop(undefined8 *param_1)

{
  long *plVar1;
  ulong *puVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  undefined8 in_x4;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong local_30;
  long *local_28;
  
  puVar2 = (ulong *)*param_1;
  uVar4 = param_1[1];
  do {
    uVar8 = *puVar2;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar7) {
      *puVar2 = uVar4;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  local_30 = uVar8 & 3;
  if (local_30 != 1) {
                    /* WARNING: Subroutine does not return */
    core::panicking::assert_failed<usize,usize>
              (0,&local_30,&DAT_003743c8,0,in_x4,&PTR_s__home_runner__cargo_registry_src_00975ad8);
  }
  plVar9 = (long *)(uVar8 - 1);
  if (plVar9 != (long *)0x0) {
    local_30 = 1;
    do {
      plVar3 = (long *)*plVar9;
      plVar5 = (long *)plVar9[1];
      *plVar9 = 0;
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__home_runner__cargo_registry_src_00975ac0);
      }
      plVar1 = plVar3 + 5;
      *(undefined4 *)(plVar9 + 2) = 1;
      do {
        lVar10 = *plVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      local_28 = plVar3;
      if ((int)lVar10 == -1) {
                    /* try { // try from 006a435c to 006a435f has its CatchHandler @ 006a43c4 */
        std::sys::pal::unix::futex::futex_wake();
      }
      do {
        lVar10 = *local_28;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(local_28,0x10);
        if (bVar7) {
          *local_28 = lVar10 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar10 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc[cc0d62b833a55794]::sync::Arc<std[29fbf8137994c300]::thread::thread::Inner,std[29fbf8137994c300]::alloc::System>>
        ::drop_slow(&local_28);
      }
      plVar9 = plVar5;
    } while (plVar5 != (long *)0x0);
  }
  return;
}


// ===== 006a43f8  <nom::internal::[6]::nom::internal::Err<nom::error::Error<&str>>>::to_owned =====

/* WARNING: Unknown calling convention: __rustcall */
/* <nom::internal::[6]::nom::internal::Err<nom::error::Error<&str>>>::to_owned */

void __rustcall
<nom::internal::[6]::nom::internal::Err<nom::error::Error<&str>>>::to_owned
          (long *param_1,long *param_2)

{
  long lVar1;
  void *__dest;
  size_t __n;
  void *__src;
  long lVar2;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    lVar2 = param_2[1];
    *param_1 = 0;
    param_1[1] = lVar2;
    return;
  }
  __n = param_2[2];
  lVar1 = param_2[3];
  if (__n == 0) {
    __dest = (void *)0x1;
  }
  else {
    __src = (void *)param_2[1];
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (void *)__rustc::__rust_alloc(__n,1);
    if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,__n);
    }
    memcpy(__dest,__src,__n);
  }
  param_1[1] = __n;
  param_1[2] = (long)__dest;
  param_1[3] = __n;
  *(char *)(param_1 + 4) = (char)lVar1;
  *param_1 = lVar2;
  return;
}


// ===== 006a44a4  <nom::error::[h]::nom::error::ErrorKind>::description =====

/* WARNING: Unknown calling convention: __rustcall */
/* <nom::error::[h]::nom::error::ErrorKind>::description */

undefined1  [16] __rustcall <nom::error::[h]::nom::error::ErrorKind>::description(byte *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = *(undefined8 *)(&DAT_00454378 + (ulong)*param_1 * 8);
  auVar1._0_8_ = &DAT_00454540 + *(int *)(&DAT_00454540 + (ulong)*param_1 * 4);
  return auVar1;
}


// ===== 006a44c8  nom::error::error_to_u32 =====

/* WARNING: Unknown calling convention: __rustcall */
/* nom::error::error_to_u32 */

undefined4 __rustcall nom::error::error_to_u32(byte *param_1)

{
  return *(undefined4 *)(&DAT_00454624 + (ulong)*param_1 * 4);
}


// ===== 006a44dc  <&[u8]as_nom::traits::Input>::take_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&[u8] as nom::traits::Input>::take_from */

undefined1  [16] __rustcall <&[u8]as_nom::traits::Input>::take_from(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1[1];
  if (param_2 <= uVar1) {
    auVar2._8_8_ = uVar1 - param_2;
    auVar2._0_8_ = *param_1 + param_2;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (param_2,uVar1,uVar1,&PTR_s__home_runner__cargo_registry_src_00975b08);
}


// ===== 006a4514  <nom[a37cf3f84424f934]::error::Error<alloc[cc0d62b833a55794]::vec::Vec<u8>>as_core[188d2c0002da36d0]::convert::From<nom[a37cf3f84424f934]::error::Error<&[u8]>>>::from =====

/* <nom[a37cf3f84424f934]::error::Error<alloc[cc0d62b833a55794]::vec::Vec<u8>> as
   core[188d2c0002da36d0]::convert::From<nom[a37cf3f84424f934]::error::Error<&[u8]>>>::from */

void <nom[a37cf3f84424f934]::error::Error<alloc[cc0d62b833a55794]::vec::Vec<u8>>as_core[188d2c0002da36d0]::convert::From<nom[a37cf3f84424f934]::error::Error<&[u8]>>>
     ::from(size_t *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  void *__dest;
  size_t __n;
  void *__src;
  undefined8 uVar2;
  
  __n = param_2[1];
  if (-1 < (long)__n) {
    if (__n == 0) {
      __dest = (void *)0x1;
    }
    else {
      __src = (void *)*param_2;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (void *)__rustc::__rust_alloc(__n,1);
      if (__dest == (void *)0x0) goto LAB_006a4598;
      memcpy(__dest,__src,__n);
    }
    uVar1 = *(undefined1 *)(param_2 + 2);
    *param_1 = __n;
    param_1[1] = (size_t)__dest;
    param_1[2] = __n;
    *(undefined1 *)(param_1 + 3) = uVar1;
    return;
  }
  uVar2 = 0;
LAB_006a4598:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,__n);
}


// ===== 006a45a4  <[u8]as_nom::traits::HexDisplay>::to_hex_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <[u8] as nom::traits::HexDisplay>::to_hex_from */

void __rustcall
<[u8]as_nom::traits::HexDisplay>::to_hex_from
          (size_t *param_1,byte *param_2,ulong param_3,ulong param_4,long param_5)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 uVar3;
  char cVar4;
  size_t sVar5;
  size_t sVar6;
  undefined1 *puVar7;
  void *__dest;
  long lVar8;
  ulong uVar9;
  long lVar10;
  byte bVar11;
  byte *pbVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long *local_88;
  undefined *local_80;
  size_t local_78;
  undefined1 *puStack_70;
  size_t local_68;
  
  lVar8 = param_3 * 3;
  if (lVar8 < 0) {
    uVar14 = 0;
LAB_006a4a64:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar14,lVar8);
  }
  local_a8 = lVar8;
  local_90 = param_5;
  if (param_3 == 0) {
    local_98 = 0;
    local_a0 = 1;
    if (param_4 == 0) {
LAB_006a4a44:
                    /* try { // try from 006a4a44 to 006a4a5b has its CatchHandler @ 006a4a98 */
      local_98 = 0;
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                ("chunk size must be non-zero",0x37,&PTR_s__home_runner__cargo_registry_src_00975b20
                );
    }
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar14 = 1;
    local_a0 = __rustc::__rust_alloc(lVar8,1);
    if (local_a0 == 0) goto LAB_006a4a64;
    local_98 = 0;
    if (param_4 == 0) goto LAB_006a4a44;
    do {
      local_88 = &local_90;
      uVar2 = param_4;
      if (param_3 <= param_4) {
        uVar2 = param_3;
      }
      local_80 = PTR_fmt_0099f510;
                    /* try { // try from 006a4644 to 006a4657 has its CatchHandler @ 006a4a84 */
      alloc::fmt::format::format_inner(&local_78,&DAT_00373e28,&local_88);
      puVar7 = puStack_70;
      sVar6 = local_78;
      lVar8 = local_98;
      puVar1 = puStack_70;
      for (sVar5 = local_68; local_98 = lVar8, sVar5 != 0; sVar5 = sVar5 - 1) {
        uVar3 = *puVar1;
        if (lVar8 == local_a8) {
                    /* try { // try from 006a47a4 to 006a47ab has its CatchHandler @ 006a4a8c */
          <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(&local_a8);
        }
        puVar1 = puVar1 + 1;
        *(undefined1 *)(local_a0 + lVar8) = uVar3;
        lVar8 = lVar8 + 1;
      }
      if (lVar8 == local_a8) {
                    /* try { // try from 006a467c to 006a4683 has its CatchHandler @ 006a4a88 */
        <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(&local_a8);
      }
      local_98 = lVar8 + 1;
      *(undefined1 *)(local_a0 + lVar8) = 9;
      uVar9 = param_3 - uVar2;
      local_90 = local_90 + param_4;
      pbVar12 = param_2;
      uVar15 = uVar2;
      lVar13 = lVar8;
      do {
        lVar10 = lVar13;
        lVar8 = lVar8 + 3;
        bVar11 = *pbVar12;
        cVar4 = "0123456789abcdef"[bVar11 >> 4];
        if (lVar10 + 1 == local_a8) {
                    /* try { // try from 006a470c to 006a4773 has its CatchHandler @ 006a4aa0 */
          <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(&local_a8);
        }
        local_98 = lVar10 + 2;
        *(char *)(local_a0 + lVar10 + 1) = cVar4;
        cVar4 = "0123456789abcdef"[(ulong)bVar11 & 0xf];
        if (local_98 == local_a8) {
          <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(&local_a8);
        }
        *(char *)(local_a0 + lVar10 + 2) = cVar4;
        local_98 = lVar10 + 3;
        if (local_98 == local_a8) {
          <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(&local_a8);
        }
        local_98 = lVar10 + 4;
        uVar15 = uVar15 - 1;
        *(undefined1 *)(local_a0 + lVar10 + 3) = 0x20;
        pbVar12 = pbVar12 + 1;
        lVar13 = lVar10 + 3;
      } while (uVar15 != 0);
      if (param_3 < param_4) {
        lVar13 = param_4 - uVar2;
        do {
          lVar10 = lVar8;
          if (lVar10 + 1 == local_a8) {
                    /* try { // try from 006a47f8 to 006a484f has its CatchHandler @ 006a4a94 */
            <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(&local_a8);
          }
          local_98 = lVar10 + 2;
          *(undefined1 *)(local_a0 + lVar10 + 1) = 0x20;
          if (local_98 == local_a8) {
            <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(&local_a8);
          }
          local_98 = lVar10 + 3;
          *(undefined1 *)(local_a0 + lVar10 + 2) = 0x20;
          if (local_98 == local_a8) {
            <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(&local_a8);
          }
          local_98 = lVar10 + 4;
          lVar13 = lVar13 + -1;
          *(undefined1 *)(local_a0 + lVar10 + 3) = 0x20;
          lVar8 = lVar10 + 3;
        } while (lVar13 != 0);
        lVar10 = lVar10 + 4;
        if (lVar10 == local_a8) {
LAB_006a4880:
                    /* try { // try from 006a4880 to 006a4887 has its CatchHandler @ 006a4a88 */
          <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(&local_a8);
        }
      }
      else {
        lVar10 = lVar10 + 4;
        if (lVar10 == local_a8) goto LAB_006a4880;
      }
      uVar15 = 0;
      local_98 = lVar10 + 1;
      *(undefined1 *)(local_a0 + lVar10) = 9;
      do {
        bVar11 = param_2[uVar15];
        lVar8 = lVar10 + uVar15 + 1;
        if (((char)bVar11 < '\0') || (bVar11 - 0x20 < 0x5f)) {
          if (lVar8 == local_a8) {
            <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(&local_a8);
          }
        }
        else {
          if (lVar8 == local_a8) {
                    /* try { // try from 006a48f4 to 006a490f has its CatchHandler @ 006a4a90 */
            <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(&local_a8);
          }
          bVar11 = 0x2e;
        }
        lVar8 = lVar10 + uVar15;
        uVar15 = uVar15 + 1;
        local_98 = lVar8 + 2;
        *(byte *)(lVar8 + local_a0 + 1) = bVar11;
      } while (uVar2 != uVar15);
      if ((lVar10 - local_a8) + uVar15 == -1) {
                    /* try { // try from 006a4928 to 006a492f has its CatchHandler @ 006a4a88 */
        <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(&local_a8);
      }
      local_98 = lVar10 + uVar15 + 2;
      *(undefined1 *)(lVar10 + uVar15 + local_a0 + 1) = 10;
      if (sVar6 != 0) {
        __rustc::__rust_dealloc(puVar7,sVar6,1);
      }
      param_2 = param_2 + uVar2;
      param_3 = uVar9;
    } while (uVar9 != 0);
  }
                    /* try { // try from 006a4988 to 006a498f has its CatchHandler @ 006a4a98 */
  <alloc::string::alloc::string::String>::from_utf8_lossy(&local_78,local_a0,local_98);
  if (local_78 == 0xffffffffffffffff) {
    if ((long)local_68 < 0) {
      uVar14 = 0;
LAB_006a4a74:
                    /* try { // try from 006a4a74 to 006a4a7f has its CatchHandler @ 006a4a98 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar14,local_68);
    }
    if (local_68 == 0) {
      *param_1 = 0;
      param_1[1] = 1;
      param_1[2] = 0;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar14 = 1;
      __dest = (void *)__rustc::__rust_alloc(local_68,1);
      if (__dest == (void *)0x0) goto LAB_006a4a74;
      memcpy(__dest,puStack_70,local_68);
      *param_1 = local_68;
      param_1[1] = (size_t)__dest;
      param_1[2] = local_68;
    }
  }
  else {
    param_1[1] = (size_t)puStack_70;
    *param_1 = local_78;
    param_1[2] = local_68;
  }
  if (local_a8 != 0) {
    __rustc::__rust_dealloc(local_a0,local_a8,1);
  }
  return;
}


// ===== 006a4ad4  <[u8]as_nom::traits::HexDisplay>::to_hex =====

/* WARNING: Unknown calling convention: __rustcall */
/* <[u8] as nom::traits::HexDisplay>::to_hex */

void __rustcall <[u8]as_nom::traits::HexDisplay>::to_hex(void)

{
  to_hex_from();
  return;
}


// ===== 006a4adc  <str_as_nom::traits::HexDisplay>::to_hex_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <str as nom::traits::HexDisplay>::to_hex_from */

void __rustcall <str_as_nom::traits::HexDisplay>::to_hex_from(void)

{
  (*(code *)PTR_to_hex_from_009a12a8)();
  return;
}


// ===== 006a4ae0  <str_as_nom::traits::HexDisplay>::to_hex =====

/* WARNING: Unknown calling convention: __rustcall */
/* <str as nom::traits::HexDisplay>::to_hex */

void __rustcall <str_as_nom::traits::HexDisplay>::to_hex(void)

{
  <[u8]as_nom::traits::HexDisplay>::to_hex_from();
  return;
}


// ===== 006a4ae8  <core::ops::range::Range<usize>as_nom::traits::NomRange<usize>>::bounded_iter =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ops::range::Range<usize> as nom::traits::NomRange<usize>>::bounded_iter */

undefined1  [16] __rustcall
<core::ops::range::Range<usize>as_nom::traits::NomRange<usize>>::bounded_iter(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *(long *)(param_1 + 8) - (ulong)(*(long *)(param_1 + 8) != 0);
  return auVar1 << 0x40;
}


// ===== 006a4b04  <core::ops::range::Range<usize>as_nom::traits::NomRange<usize>>::contains =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ops::range::Range<usize> as nom::traits::NomRange<usize>>::contains */

bool __rustcall
<core::ops::range::Range<usize>as_nom::traits::NomRange<usize>>::contains
          (ulong *param_1,ulong *param_2)

{
  return *param_1 <= *param_2 && *param_2 < param_1[1];
}


// ===== 006a4b1c  <core::ops::range::RangeInclusive<usize>as_nom::traits::NomRange<usize>>::is_inverted =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ops::range::RangeInclusive<usize> as nom::traits::NomRange<usize>>::is_inverted */

bool __rustcall
<core::ops::range::RangeInclusive<usize>as_nom::traits::NomRange<usize>>::is_inverted
          (ulong *param_1)

{
  bool bVar1;
  
  bVar1 = param_1[1] < *param_1;
  if ((char)param_1[2] != '\0') {
    bVar1 = param_1[1] <= *param_1;
  }
  return bVar1;
}


// ===== 006a4b3c  <core::ops::range::RangeInclusive<usize>as_nom::traits::NomRange<usize>>::contains =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ops::range::RangeInclusive<usize> as nom::traits::NomRange<usize>>::contains */

bool __rustcall
<core::ops::range::RangeInclusive<usize>as_nom::traits::NomRange<usize>>::contains
          (ulong *param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  if (uVar2 < *param_1) {
    return false;
  }
  bVar1 = uVar2 < param_1[1];
  if ((param_1[2] & 1) == 0) {
    bVar1 = uVar2 <= param_1[1];
  }
  return bVar1;
}


// ===== 006a4b74  <core::ops::range::RangeFrom<usize>as_nom::traits::NomRange<usize>>::contains =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ops::range::RangeFrom<usize> as nom::traits::NomRange<usize>>::contains */

bool __rustcall
<core::ops::range::RangeFrom<usize>as_nom::traits::NomRange<usize>>::contains
          (ulong *param_1,ulong *param_2)

{
  return *param_1 <= *param_2;
}


// ===== 006a4b88  <core::ops::range::RangeTo<usize>as_nom::traits::NomRange<usize>>::saturating_iter =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ops::range::RangeTo<usize> as nom::traits::NomRange<usize>>::saturating_iter */

undefined1  [16] __rustcall
<core::ops::range::RangeTo<usize>as_nom::traits::NomRange<usize>>::saturating_iter(long *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_1 - (ulong)(*param_1 != 0);
  return auVar1 << 0x40;
}


// ===== 006a4ba4  <core::ops::range::RangeTo<usize>as_nom::traits::NomRange<usize>>::contains =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ops::range::RangeTo<usize> as nom::traits::NomRange<usize>>::contains */

bool __rustcall
<core::ops::range::RangeTo<usize>as_nom::traits::NomRange<usize>>::contains
          (ulong *param_1,ulong *param_2)

{
  return *param_2 < *param_1;
}


// ===== 006a4bb8  <core::ops::range::RangeToInclusive<usize>as_nom::traits::NomRange<usize>>::contains =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ops::range::RangeToInclusive<usize> as nom::traits::NomRange<usize>>::contains */

bool __rustcall
<core::ops::range::RangeToInclusive<usize>as_nom::traits::NomRange<usize>>::contains
          (ulong *param_1,ulong *param_2)

{
  return *param_2 <= *param_1;
}


// ===== 006a4bcc  <core::ops::range::RangeFull_as_nom::traits::NomRange<usize>>::contains =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::ops::range::RangeFull as nom::traits::NomRange<usize>>::contains */

undefined8 __rustcall <core::ops::range::RangeFull_as_nom::traits::NomRange<usize>>::contains(void)

{
  return 1;
}


// ===== 006a4bd4  <&[u8]as_nom::traits::FindToken<u8>>::find_token =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&[u8] as nom::traits::FindToken<u8>>::find_token */

undefined8 __rustcall
<&[u8]as_nom::traits::FindToken<u8>>::find_token(undefined8 *param_1,char param_2)

{
  undefined1 (*pauVar1) [16];
  ulong uVar2;
  undefined1 (*pauVar3) [16];
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    pauVar3 = (undefined1 (*) [16])*param_1;
    if (0xf < uVar2) {
      auVar5[1] = param_2;
      auVar5[0] = param_2;
      auVar5[2] = param_2;
      auVar5[3] = param_2;
      auVar5[4] = param_2;
      auVar5[5] = param_2;
      auVar5[6] = param_2;
      auVar5[7] = param_2;
      auVar5[8] = param_2;
      auVar5[9] = param_2;
      auVar5[10] = param_2;
      auVar5[0xb] = param_2;
      auVar5[0xc] = param_2;
      auVar5[0xd] = param_2;
      auVar5[0xe] = param_2;
      auVar5[0xf] = param_2;
      auVar6 = NEON_cmeq(auVar5,*pauVar3,1);
      if ((CONCAT17((char)(auVar6._14_2_ >> 4),
                    CONCAT16((char)(auVar6._12_2_ >> 4),
                             CONCAT15((char)(auVar6._10_2_ >> 4),
                                      CONCAT14((char)(auVar6._8_2_ >> 4),
                                               CONCAT13((char)(auVar6._6_2_ >> 4),
                                                        CONCAT12((char)(auVar6._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar6._2_2_ >> 4),
                                                                          (char)(auVar6._0_2_ >> 4))
                                                                )))))) & 0x8888888888888888) == 0) {
        uVar4 = 0x10 - ((ulong)pauVar3 & 0xf);
        pauVar1 = (undefined1 (*) [16])(*pauVar3 + uVar2);
        pauVar3 = (undefined1 (*) [16])((long)pauVar3 + uVar4);
        if ((0x3f < uVar2) && (uVar4 <= uVar2 - 0x40)) {
          do {
            auVar6 = NEON_cmeq(auVar5,*pauVar3,1);
            auVar8 = NEON_cmeq(auVar5,pauVar3[1],1);
            auVar10 = NEON_cmeq(auVar5,pauVar3[2],1);
            auVar9 = NEON_cmeq(auVar5,pauVar3[3],1);
            auVar7[0] = (auVar9[0] | auVar8[0] | auVar6[0] | auVar10[0]) << 7;
            auVar7[1] = (auVar9[1] | auVar8[1] | auVar6[1] | auVar10[1]) << 7;
            auVar7[2] = (auVar9[2] | auVar8[2] | auVar6[2] | auVar10[2]) << 7;
            auVar7[3] = (auVar9[3] | auVar8[3] | auVar6[3] | auVar10[3]) << 7;
            auVar7[4] = (auVar9[4] | auVar8[4] | auVar6[4] | auVar10[4]) << 7;
            auVar7[5] = (auVar9[5] | auVar8[5] | auVar6[5] | auVar10[5]) << 7;
            auVar7[6] = (auVar9[6] | auVar8[6] | auVar6[6] | auVar10[6]) << 7;
            auVar7[7] = (auVar9[7] | auVar8[7] | auVar6[7] | auVar10[7]) << 7;
            auVar7[8] = (auVar9[8] | auVar8[8] | auVar6[8] | auVar10[8]) << 7;
            auVar7[9] = (auVar9[9] | auVar8[9] | auVar6[9] | auVar10[9]) << 7;
            auVar7[10] = (auVar9[10] | auVar8[10] | auVar6[10] | auVar10[10]) << 7;
            auVar7[0xb] = (auVar9[0xb] | auVar8[0xb] | auVar6[0xb] | auVar10[0xb]) << 7;
            auVar7[0xc] = (auVar9[0xc] | auVar8[0xc] | auVar6[0xc] | auVar10[0xc]) << 7;
            auVar7[0xd] = (auVar9[0xd] | auVar8[0xd] | auVar6[0xd] | auVar10[0xd]) << 7;
            auVar7[0xe] = (auVar9[0xe] | auVar8[0xe] | auVar6[0xe] | auVar10[0xe]) << 7;
            auVar7[0xf] = (auVar9[0xf] | auVar8[0xf] | auVar6[0xf] | auVar10[0xf]) << 7;
            auVar6 = NEON_cmlt(auVar7,0,1);
            auVar6 = NEON_umaxp(auVar6,auVar6,1);
            if (auVar6._0_8_ != 0) {
              return 1;
            }
            pauVar3 = pauVar3 + 4;
          } while (pauVar3 <= pauVar1 + -4);
        }
        do {
          if (pauVar1 + -1 < pauVar3) {
            if (pauVar1 <= pauVar3) {
              return 0;
            }
            auVar5 = NEON_cmeq(auVar5,pauVar1[-1],1);
            if ((CONCAT17((char)(auVar5._14_2_ >> 4),
                          CONCAT16((char)(auVar5._12_2_ >> 4),
                                   CONCAT15((char)(auVar5._10_2_ >> 4),
                                            CONCAT14((char)(auVar5._8_2_ >> 4),
                                                     CONCAT13((char)(auVar5._6_2_ >> 4),
                                                              CONCAT12((char)(auVar5._4_2_ >> 4),
                                                                       CONCAT11((char)(auVar5._2_2_
                                                                                      >> 4),
                                                                                (char)(auVar5._0_2_
                                                                                      >> 4)))))))) &
                0x8888888888888888) != 0) {
              return 1;
            }
            return 0;
          }
          auVar6 = NEON_cmeq(auVar5,*pauVar3,1);
          pauVar3 = pauVar3 + 1;
        } while ((CONCAT17((char)(auVar6._14_2_ >> 4),
                           CONCAT16((char)(auVar6._12_2_ >> 4),
                                    CONCAT15((char)(auVar6._10_2_ >> 4),
                                             CONCAT14((char)(auVar6._8_2_ >> 4),
                                                      CONCAT13((char)(auVar6._6_2_ >> 4),
                                                               CONCAT12((char)(auVar6._4_2_ >> 4),
                                                                        CONCAT11((char)(auVar6._2_2_
                                                                                       >> 4),
                                                                                 (char)(auVar6._0_2_
                                                                                       >> 4))))))))
                 & 0x8888888888888888) == 0);
      }
      return 1;
    }
    do {
      if ((*pauVar3)[0] == param_2) {
        return 1;
      }
      uVar2 = uVar2 - 1;
      pauVar3 = (undefined1 (*) [16])(*pauVar3 + 1);
    } while (uVar2 != 0);
  }
  return 0;
}


// ===== 006a4ce4  <&str_as_nom::traits::FindToken<u8>>::find_token =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&str as nom::traits::FindToken<u8>>::find_token */

undefined8 __rustcall
<&str_as_nom::traits::FindToken<u8>>::find_token(undefined8 *param_1,char param_2)

{
  undefined1 (*pauVar1) [16];
  ulong uVar2;
  undefined1 (*pauVar3) [16];
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    pauVar3 = (undefined1 (*) [16])*param_1;
    if (0xf < uVar2) {
      auVar5[1] = param_2;
      auVar5[0] = param_2;
      auVar5[2] = param_2;
      auVar5[3] = param_2;
      auVar5[4] = param_2;
      auVar5[5] = param_2;
      auVar5[6] = param_2;
      auVar5[7] = param_2;
      auVar5[8] = param_2;
      auVar5[9] = param_2;
      auVar5[10] = param_2;
      auVar5[0xb] = param_2;
      auVar5[0xc] = param_2;
      auVar5[0xd] = param_2;
      auVar5[0xe] = param_2;
      auVar5[0xf] = param_2;
      auVar6 = NEON_cmeq(auVar5,*pauVar3,1);
      if ((CONCAT17((char)(auVar6._14_2_ >> 4),
                    CONCAT16((char)(auVar6._12_2_ >> 4),
                             CONCAT15((char)(auVar6._10_2_ >> 4),
                                      CONCAT14((char)(auVar6._8_2_ >> 4),
                                               CONCAT13((char)(auVar6._6_2_ >> 4),
                                                        CONCAT12((char)(auVar6._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar6._2_2_ >> 4),
                                                                          (char)(auVar6._0_2_ >> 4))
                                                                )))))) & 0x8888888888888888) == 0) {
        uVar4 = 0x10 - ((ulong)pauVar3 & 0xf);
        pauVar1 = (undefined1 (*) [16])(*pauVar3 + uVar2);
        pauVar3 = (undefined1 (*) [16])((long)pauVar3 + uVar4);
        if ((0x3f < uVar2) && (uVar4 <= uVar2 - 0x40)) {
          do {
            auVar6 = NEON_cmeq(auVar5,*pauVar3,1);
            auVar8 = NEON_cmeq(auVar5,pauVar3[1],1);
            auVar10 = NEON_cmeq(auVar5,pauVar3[2],1);
            auVar9 = NEON_cmeq(auVar5,pauVar3[3],1);
            auVar7[0] = (auVar9[0] | auVar8[0] | auVar6[0] | auVar10[0]) << 7;
            auVar7[1] = (auVar9[1] | auVar8[1] | auVar6[1] | auVar10[1]) << 7;
            auVar7[2] = (auVar9[2] | auVar8[2] | auVar6[2] | auVar10[2]) << 7;
            auVar7[3] = (auVar9[3] | auVar8[3] | auVar6[3] | auVar10[3]) << 7;
            auVar7[4] = (auVar9[4] | auVar8[4] | auVar6[4] | auVar10[4]) << 7;
            auVar7[5] = (auVar9[5] | auVar8[5] | auVar6[5] | auVar10[5]) << 7;
            auVar7[6] = (auVar9[6] | auVar8[6] | auVar6[6] | auVar10[6]) << 7;
            auVar7[7] = (auVar9[7] | auVar8[7] | auVar6[7] | auVar10[7]) << 7;
            auVar7[8] = (auVar9[8] | auVar8[8] | auVar6[8] | auVar10[8]) << 7;
            auVar7[9] = (auVar9[9] | auVar8[9] | auVar6[9] | auVar10[9]) << 7;
            auVar7[10] = (auVar9[10] | auVar8[10] | auVar6[10] | auVar10[10]) << 7;
            auVar7[0xb] = (auVar9[0xb] | auVar8[0xb] | auVar6[0xb] | auVar10[0xb]) << 7;
            auVar7[0xc] = (auVar9[0xc] | auVar8[0xc] | auVar6[0xc] | auVar10[0xc]) << 7;
            auVar7[0xd] = (auVar9[0xd] | auVar8[0xd] | auVar6[0xd] | auVar10[0xd]) << 7;
            auVar7[0xe] = (auVar9[0xe] | auVar8[0xe] | auVar6[0xe] | auVar10[0xe]) << 7;
            auVar7[0xf] = (auVar9[0xf] | auVar8[0xf] | auVar6[0xf] | auVar10[0xf]) << 7;
            auVar6 = NEON_cmlt(auVar7,0,1);
            auVar6 = NEON_umaxp(auVar6,auVar6,1);
            if (auVar6._0_8_ != 0) {
              return 1;
            }
            pauVar3 = pauVar3 + 4;
          } while (pauVar3 <= pauVar1 + -4);
        }
        do {
          if (pauVar1 + -1 < pauVar3) {
            if (pauVar1 <= pauVar3) {
              return 0;
            }
            auVar5 = NEON_cmeq(auVar5,pauVar1[-1],1);
            if ((CONCAT17((char)(auVar5._14_2_ >> 4),
                          CONCAT16((char)(auVar5._12_2_ >> 4),
                                   CONCAT15((char)(auVar5._10_2_ >> 4),
                                            CONCAT14((char)(auVar5._8_2_ >> 4),
                                                     CONCAT13((char)(auVar5._6_2_ >> 4),
                                                              CONCAT12((char)(auVar5._4_2_ >> 4),
                                                                       CONCAT11((char)(auVar5._2_2_
                                                                                      >> 4),
                                                                                (char)(auVar5._0_2_
                                                                                      >> 4)))))))) &
                0x8888888888888888) != 0) {
              return 1;
            }
            return 0;
          }
          auVar6 = NEON_cmeq(auVar5,*pauVar3,1);
          pauVar3 = pauVar3 + 1;
        } while ((CONCAT17((char)(auVar6._14_2_ >> 4),
                           CONCAT16((char)(auVar6._12_2_ >> 4),
                                    CONCAT15((char)(auVar6._10_2_ >> 4),
                                             CONCAT14((char)(auVar6._8_2_ >> 4),
                                                      CONCAT13((char)(auVar6._6_2_ >> 4),
                                                               CONCAT12((char)(auVar6._4_2_ >> 4),
                                                                        CONCAT11((char)(auVar6._2_2_
                                                                                       >> 4),
                                                                                 (char)(auVar6._0_2_
                                                                                       >> 4))))))))
                 & 0x8888888888888888) == 0);
      }
      return 1;
    }
    do {
      if ((*pauVar3)[0] == param_2) {
        return 1;
      }
      uVar2 = uVar2 - 1;
      pauVar3 = (undefined1 (*) [16])(*pauVar3 + 1);
    } while (uVar2 != 0);
  }
  return 0;
}


// ===== 006a4df4  <&[u8]as_nom::traits::FindToken<&u8>>::find_token =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&[u8] as nom::traits::FindToken<&u8>>::find_token */

undefined8 __rustcall
<&[u8]as_nom::traits::FindToken<&u8>>::find_token(undefined8 *param_1,char *param_2)

{
  undefined1 (*pauVar1) [16];
  char cVar2;
  ulong uVar3;
  undefined1 (*pauVar4) [16];
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    cVar2 = *param_2;
    pauVar4 = (undefined1 (*) [16])*param_1;
    if (0xf < uVar3) {
      auVar6[1] = cVar2;
      auVar6[0] = cVar2;
      auVar6[2] = cVar2;
      auVar6[3] = cVar2;
      auVar6[4] = cVar2;
      auVar6[5] = cVar2;
      auVar6[6] = cVar2;
      auVar6[7] = cVar2;
      auVar6[8] = cVar2;
      auVar6[9] = cVar2;
      auVar6[10] = cVar2;
      auVar6[0xb] = cVar2;
      auVar6[0xc] = cVar2;
      auVar6[0xd] = cVar2;
      auVar6[0xe] = cVar2;
      auVar6[0xf] = cVar2;
      auVar7 = NEON_cmeq(auVar6,*pauVar4,1);
      if ((CONCAT17((char)(auVar7._14_2_ >> 4),
                    CONCAT16((char)(auVar7._12_2_ >> 4),
                             CONCAT15((char)(auVar7._10_2_ >> 4),
                                      CONCAT14((char)(auVar7._8_2_ >> 4),
                                               CONCAT13((char)(auVar7._6_2_ >> 4),
                                                        CONCAT12((char)(auVar7._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar7._2_2_ >> 4),
                                                                          (char)(auVar7._0_2_ >> 4))
                                                                )))))) & 0x8888888888888888) == 0) {
        uVar5 = 0x10 - ((ulong)pauVar4 & 0xf);
        pauVar1 = (undefined1 (*) [16])(*pauVar4 + uVar3);
        pauVar4 = (undefined1 (*) [16])((long)pauVar4 + uVar5);
        if ((0x3f < uVar3) && (uVar5 <= uVar3 - 0x40)) {
          do {
            auVar7 = NEON_cmeq(auVar6,*pauVar4,1);
            auVar9 = NEON_cmeq(auVar6,pauVar4[1],1);
            auVar11 = NEON_cmeq(auVar6,pauVar4[2],1);
            auVar10 = NEON_cmeq(auVar6,pauVar4[3],1);
            auVar8[0] = (auVar10[0] | auVar9[0] | auVar7[0] | auVar11[0]) << 7;
            auVar8[1] = (auVar10[1] | auVar9[1] | auVar7[1] | auVar11[1]) << 7;
            auVar8[2] = (auVar10[2] | auVar9[2] | auVar7[2] | auVar11[2]) << 7;
            auVar8[3] = (auVar10[3] | auVar9[3] | auVar7[3] | auVar11[3]) << 7;
            auVar8[4] = (auVar10[4] | auVar9[4] | auVar7[4] | auVar11[4]) << 7;
            auVar8[5] = (auVar10[5] | auVar9[5] | auVar7[5] | auVar11[5]) << 7;
            auVar8[6] = (auVar10[6] | auVar9[6] | auVar7[6] | auVar11[6]) << 7;
            auVar8[7] = (auVar10[7] | auVar9[7] | auVar7[7] | auVar11[7]) << 7;
            auVar8[8] = (auVar10[8] | auVar9[8] | auVar7[8] | auVar11[8]) << 7;
            auVar8[9] = (auVar10[9] | auVar9[9] | auVar7[9] | auVar11[9]) << 7;
            auVar8[10] = (auVar10[10] | auVar9[10] | auVar7[10] | auVar11[10]) << 7;
            auVar8[0xb] = (auVar10[0xb] | auVar9[0xb] | auVar7[0xb] | auVar11[0xb]) << 7;
            auVar8[0xc] = (auVar10[0xc] | auVar9[0xc] | auVar7[0xc] | auVar11[0xc]) << 7;
            auVar8[0xd] = (auVar10[0xd] | auVar9[0xd] | auVar7[0xd] | auVar11[0xd]) << 7;
            auVar8[0xe] = (auVar10[0xe] | auVar9[0xe] | auVar7[0xe] | auVar11[0xe]) << 7;
            auVar8[0xf] = (auVar10[0xf] | auVar9[0xf] | auVar7[0xf] | auVar11[0xf]) << 7;
            auVar7 = NEON_cmlt(auVar8,0,1);
            auVar7 = NEON_umaxp(auVar7,auVar7,1);
            if (auVar7._0_8_ != 0) {
              return 1;
            }
            pauVar4 = pauVar4 + 4;
          } while (pauVar4 <= pauVar1 + -4);
        }
        do {
          if (pauVar1 + -1 < pauVar4) {
            if (pauVar1 <= pauVar4) {
              return 0;
            }
            auVar6 = NEON_cmeq(auVar6,pauVar1[-1],1);
            if ((CONCAT17((char)(auVar6._14_2_ >> 4),
                          CONCAT16((char)(auVar6._12_2_ >> 4),
                                   CONCAT15((char)(auVar6._10_2_ >> 4),
                                            CONCAT14((char)(auVar6._8_2_ >> 4),
                                                     CONCAT13((char)(auVar6._6_2_ >> 4),
                                                              CONCAT12((char)(auVar6._4_2_ >> 4),
                                                                       CONCAT11((char)(auVar6._2_2_
                                                                                      >> 4),
                                                                                (char)(auVar6._0_2_
                                                                                      >> 4)))))))) &
                0x8888888888888888) != 0) {
              return 1;
            }
            return 0;
          }
          auVar7 = NEON_cmeq(auVar6,*pauVar4,1);
          pauVar4 = pauVar4 + 1;
        } while ((CONCAT17((char)(auVar7._14_2_ >> 4),
                           CONCAT16((char)(auVar7._12_2_ >> 4),
                                    CONCAT15((char)(auVar7._10_2_ >> 4),
                                             CONCAT14((char)(auVar7._8_2_ >> 4),
                                                      CONCAT13((char)(auVar7._6_2_ >> 4),
                                                               CONCAT12((char)(auVar7._4_2_ >> 4),
                                                                        CONCAT11((char)(auVar7._2_2_
                                                                                       >> 4),
                                                                                 (char)(auVar7._0_2_
                                                                                       >> 4))))))))
                 & 0x8888888888888888) == 0);
      }
      return 1;
    }
    do {
      if ((*pauVar4)[0] == cVar2) {
        return 1;
      }
      uVar3 = uVar3 - 1;
      pauVar4 = (undefined1 (*) [16])(*pauVar4 + 1);
    } while (uVar3 != 0);
  }
  return 0;
}


// ===== 006a4f08  <&str_as_nom::traits::FindToken<&u8>>::find_token =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&str as nom::traits::FindToken<&u8>>::find_token */

undefined8 __rustcall
<&str_as_nom::traits::FindToken<&u8>>::find_token(undefined8 *param_1,char *param_2)

{
  undefined1 (*pauVar1) [16];
  char cVar2;
  ulong uVar3;
  undefined1 (*pauVar4) [16];
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    pauVar4 = (undefined1 (*) [16])*param_1;
    cVar2 = *param_2;
    if (0xf < uVar3) {
      auVar6[1] = cVar2;
      auVar6[0] = cVar2;
      auVar6[2] = cVar2;
      auVar6[3] = cVar2;
      auVar6[4] = cVar2;
      auVar6[5] = cVar2;
      auVar6[6] = cVar2;
      auVar6[7] = cVar2;
      auVar6[8] = cVar2;
      auVar6[9] = cVar2;
      auVar6[10] = cVar2;
      auVar6[0xb] = cVar2;
      auVar6[0xc] = cVar2;
      auVar6[0xd] = cVar2;
      auVar6[0xe] = cVar2;
      auVar6[0xf] = cVar2;
      auVar7 = NEON_cmeq(auVar6,*pauVar4,1);
      if ((CONCAT17((char)(auVar7._14_2_ >> 4),
                    CONCAT16((char)(auVar7._12_2_ >> 4),
                             CONCAT15((char)(auVar7._10_2_ >> 4),
                                      CONCAT14((char)(auVar7._8_2_ >> 4),
                                               CONCAT13((char)(auVar7._6_2_ >> 4),
                                                        CONCAT12((char)(auVar7._4_2_ >> 4),
                                                                 CONCAT11((char)(auVar7._2_2_ >> 4),
                                                                          (char)(auVar7._0_2_ >> 4))
                                                                )))))) & 0x8888888888888888) == 0) {
        uVar5 = 0x10 - ((ulong)pauVar4 & 0xf);
        pauVar1 = (undefined1 (*) [16])(*pauVar4 + uVar3);
        pauVar4 = (undefined1 (*) [16])((long)pauVar4 + uVar5);
        if ((0x3f < uVar3) && (uVar5 <= uVar3 - 0x40)) {
          do {
            auVar7 = NEON_cmeq(auVar6,*pauVar4,1);
            auVar9 = NEON_cmeq(auVar6,pauVar4[1],1);
            auVar11 = NEON_cmeq(auVar6,pauVar4[2],1);
            auVar10 = NEON_cmeq(auVar6,pauVar4[3],1);
            auVar8[0] = (auVar10[0] | auVar9[0] | auVar7[0] | auVar11[0]) << 7;
            auVar8[1] = (auVar10[1] | auVar9[1] | auVar7[1] | auVar11[1]) << 7;
            auVar8[2] = (auVar10[2] | auVar9[2] | auVar7[2] | auVar11[2]) << 7;
            auVar8[3] = (auVar10[3] | auVar9[3] | auVar7[3] | auVar11[3]) << 7;
            auVar8[4] = (auVar10[4] | auVar9[4] | auVar7[4] | auVar11[4]) << 7;
            auVar8[5] = (auVar10[5] | auVar9[5] | auVar7[5] | auVar11[5]) << 7;
            auVar8[6] = (auVar10[6] | auVar9[6] | auVar7[6] | auVar11[6]) << 7;
            auVar8[7] = (auVar10[7] | auVar9[7] | auVar7[7] | auVar11[7]) << 7;
            auVar8[8] = (auVar10[8] | auVar9[8] | auVar7[8] | auVar11[8]) << 7;
            auVar8[9] = (auVar10[9] | auVar9[9] | auVar7[9] | auVar11[9]) << 7;
            auVar8[10] = (auVar10[10] | auVar9[10] | auVar7[10] | auVar11[10]) << 7;
            auVar8[0xb] = (auVar10[0xb] | auVar9[0xb] | auVar7[0xb] | auVar11[0xb]) << 7;
            auVar8[0xc] = (auVar10[0xc] | auVar9[0xc] | auVar7[0xc] | auVar11[0xc]) << 7;
            auVar8[0xd] = (auVar10[0xd] | auVar9[0xd] | auVar7[0xd] | auVar11[0xd]) << 7;
            auVar8[0xe] = (auVar10[0xe] | auVar9[0xe] | auVar7[0xe] | auVar11[0xe]) << 7;
            auVar8[0xf] = (auVar10[0xf] | auVar9[0xf] | auVar7[0xf] | auVar11[0xf]) << 7;
            auVar7 = NEON_cmlt(auVar8,0,1);
            auVar7 = NEON_umaxp(auVar7,auVar7,1);
            if (auVar7._0_8_ != 0) {
              return 1;
            }
            pauVar4 = pauVar4 + 4;
          } while (pauVar4 <= pauVar1 + -4);
        }
        do {
          if (pauVar1 + -1 < pauVar4) {
            if (pauVar1 <= pauVar4) {
              return 0;
            }
            auVar6 = NEON_cmeq(auVar6,pauVar1[-1],1);
            if ((CONCAT17((char)(auVar6._14_2_ >> 4),
                          CONCAT16((char)(auVar6._12_2_ >> 4),
                                   CONCAT15((char)(auVar6._10_2_ >> 4),
                                            CONCAT14((char)(auVar6._8_2_ >> 4),
                                                     CONCAT13((char)(auVar6._6_2_ >> 4),
                                                              CONCAT12((char)(auVar6._4_2_ >> 4),
                                                                       CONCAT11((char)(auVar6._2_2_
                                                                                      >> 4),
                                                                                (char)(auVar6._0_2_
                                                                                      >> 4)))))))) &
                0x8888888888888888) != 0) {
              return 1;
            }
            return 0;
          }
          auVar7 = NEON_cmeq(auVar6,*pauVar4,1);
          pauVar4 = pauVar4 + 1;
        } while ((CONCAT17((char)(auVar7._14_2_ >> 4),
                           CONCAT16((char)(auVar7._12_2_ >> 4),
                                    CONCAT15((char)(auVar7._10_2_ >> 4),
                                             CONCAT14((char)(auVar7._8_2_ >> 4),
                                                      CONCAT13((char)(auVar7._6_2_ >> 4),
                                                               CONCAT12((char)(auVar7._4_2_ >> 4),
                                                                        CONCAT11((char)(auVar7._2_2_
                                                                                       >> 4),
                                                                                 (char)(auVar7._0_2_
                                                                                       >> 4))))))))
                 & 0x8888888888888888) == 0);
      }
      return 1;
    }
    do {
      if ((*pauVar4)[0] == cVar2) {
        return 1;
      }
      uVar3 = uVar3 - 1;
      pauVar4 = (undefined1 (*) [16])(*pauVar4 + 1);
    } while (uVar3 != 0);
  }
  return 0;
}


// ===== 006a501c  <&[u8]as_nom::traits::FindToken<char>>::find_token =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&[u8] as nom::traits::FindToken<char>>::find_token */

bool __rustcall <&[u8]as_nom::traits::FindToken<char>>::find_token(undefined8 *param_1,char param_2)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  
  pcVar3 = (char *)*param_1;
  lVar2 = param_1[1];
  do {
    lVar4 = lVar2;
    if (lVar4 == 0) break;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    lVar2 = lVar4 + -1;
  } while (cVar1 != param_2);
  return lVar4 != 0;
}


// ===== 006a5048  <&str_as_nom::traits::FindToken<char>>::find_token =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&str as nom::traits::FindToken<char>>::find_token */

bool __rustcall <&str_as_nom::traits::FindToken<char>>::find_token(long *param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  pbVar1 = (byte *)*param_1 + param_1[1];
  pbVar5 = (byte *)*param_1;
  do {
    pbVar4 = pbVar5;
    if (pbVar4 == pbVar1) break;
    pbVar5 = pbVar4 + 1;
    uVar3 = (uint)*pbVar4;
    if ((char)*pbVar4 < '\0') {
      if (uVar3 < 0xe0) {
        uVar3 = pbVar4[1] & 0x3f | (uVar3 & 0x1f) << 6;
        pbVar5 = pbVar4 + 2;
      }
      else {
        uVar2 = pbVar4[2] & 0x3f | (pbVar4[1] & 0x3f) << 6;
        if (uVar3 < 0xf0) {
          uVar3 = uVar2 | (uVar3 & 0x1f) << 0xc;
          pbVar5 = pbVar4 + 3;
        }
        else {
          uVar3 = pbVar4[3] & 0x3f | uVar2 << 6 | (uVar3 & 7) << 0x12;
          pbVar5 = pbVar4 + 4;
        }
      }
    }
  } while (uVar3 != param_2);
  return pbVar4 != pbVar1;
}


// ===== 006a50dc  <&[char]as_nom::traits::FindToken<char>>::find_token =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&[char] as nom::traits::FindToken<char>>::find_token */

bool __rustcall
<&[char]as_nom::traits::FindToken<char>>::find_token(undefined8 *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  
  piVar3 = (int *)*param_1;
  lVar2 = param_1[1] << 2;
  do {
    lVar4 = lVar2;
    if (lVar4 == 0) break;
    iVar1 = *piVar3;
    piVar3 = piVar3 + 1;
    lVar2 = lVar4 + -4;
  } while (iVar1 != param_2);
  return lVar4 != 0;
}


// ===== 006a5108  <&[char]as_nom::traits::FindToken<&char>>::find_token =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&[char] as nom::traits::FindToken<&char>>::find_token */

bool __rustcall
<&[char]as_nom::traits::FindToken<&char>>::find_token(undefined8 *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  
  piVar3 = (int *)*param_1;
  lVar2 = param_1[1] << 2;
  do {
    lVar4 = lVar2;
    if (lVar4 == 0) break;
    iVar1 = *piVar3;
    piVar3 = piVar3 + 1;
    lVar2 = lVar4 + -4;
  } while (iVar1 != *param_2);
  return lVar4 != 0;
}


// ===== 006a5138  <&[u8]as_nom[a37cf3f84424f934]::traits::FindSubstring<&[u8]>>::find_substring =====

/* <&[u8] as nom[a37cf3f84424f934]::traits::FindSubstring<&[u8]>>::find_substring */

undefined1  [16]
<&[u8]as_nom[a37cf3f84424f934]::traits::FindSubstring<&[u8]>>::find_substring
          (undefined8 *param_1,char *param_2,char *param_3)

{
  undefined1 (*pauVar1) [16];
  ulong uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 *puVar13;
  undefined1 (*pauVar14) [16];
  int iVar15;
  ulong uVar16;
  undefined1 (*pauVar17) [16];
  char *pcVar18;
  undefined1 (*pauVar19) [16];
  long lVar20;
  char *pcVar21;
  undefined8 uVar22;
  char *pcVar23;
  char *pcVar24;
  char *unaff_x25;
  undefined1 (*pauVar25) [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  
  pcVar21 = (char *)param_1[1];
  if (pcVar21 < param_3) goto LAB_006a5164;
  if (param_3 == (char *)0x0) {
    unaff_x25 = (char *)0x0;
  }
  else {
    pauVar25 = (undefined1 (*) [16])*param_1;
    param_3 = param_3 + -1;
    cVar3 = *param_2;
    if (param_3 != (char *)0x0) {
      pcVar24 = pcVar21 + -(long)param_3;
      pcVar23 = (char *)0x0;
      uVar22 = 1;
      pauVar1 = (undefined1 (*) [16])(pcVar24 + (long)*pauVar25);
      uVar5 = CONCAT17(cVar3,CONCAT16(cVar3,CONCAT15(cVar3,CONCAT14(cVar3,CONCAT13(cVar3,CONCAT12(
                                                  cVar3,CONCAT11(cVar3,cVar3)))))));
      do {
        if (pcVar24 < pcVar23) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (pcVar23,pcVar24,pcVar24,&PTR_s__home_runner__cargo_registry_src_00975b68);
        }
        auVar7[8] = cVar3;
        auVar7._0_8_ = uVar5;
        auVar6[8] = cVar3;
        auVar6._0_8_ = uVar5;
        auVar36[8] = cVar3;
        auVar36._0_8_ = uVar5;
        auVar32[8] = cVar3;
        auVar32._0_8_ = uVar5;
        auVar30[8] = cVar3;
        auVar30._0_8_ = uVar5;
        auVar28[8] = cVar3;
        auVar28._0_8_ = uVar5;
        auVar26[8] = cVar3;
        auVar26._0_8_ = uVar5;
        uVar16 = (long)pcVar24 - (long)pcVar23;
        if (pcVar24 < pcVar23 || uVar16 == 0) goto LAB_006a5164;
        pauVar19 = (undefined1 (*) [16])(*pauVar25 + (long)pcVar23);
        if (uVar16 < 0x10) {
          pcVar18 = *pauVar25 + (long)pcVar23;
          for (uVar2 = uVar16 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            if (*pcVar18 == cVar3) goto LAB_006a537c;
            pcVar18 = pcVar18 + 1;
          }
          if (uVar16 - 1 < 3) goto LAB_006a5164;
          pcVar18 = pcVar18 + 3;
          while (pcVar18[-3] != cVar3) {
            if (pcVar18[-2] == cVar3) {
              pcVar18 = pcVar18 + -2;
              goto LAB_006a537c;
            }
            if (pcVar18[-1] == cVar3) {
              pcVar18 = pcVar18 + -1;
              goto LAB_006a537c;
            }
            if (*pcVar18 == cVar3) goto LAB_006a537c;
            pauVar17 = (undefined1 (*) [16])(pcVar18 + 1);
            pcVar18 = pcVar18 + 4;
            if (pauVar17 == pauVar1) goto LAB_006a5164;
          }
          pcVar18 = pcVar18 + -3;
        }
        else {
          auVar26[9] = cVar3;
          auVar26[10] = cVar3;
          auVar26[0xb] = cVar3;
          auVar26[0xc] = cVar3;
          auVar26[0xd] = cVar3;
          auVar26[0xe] = cVar3;
          auVar26[0xf] = cVar3;
          auVar26 = NEON_cmeq(auVar26,*pauVar19,1);
          uVar2 = CONCAT17((char)(auVar26._14_2_ >> 4),
                           CONCAT16((char)(auVar26._12_2_ >> 4),
                                    CONCAT15((char)(auVar26._10_2_ >> 4),
                                             CONCAT14((char)(auVar26._8_2_ >> 4),
                                                      CONCAT13((char)(auVar26._6_2_ >> 4),
                                                               CONCAT12((char)(auVar26._4_2_ >> 4),
                                                                        CONCAT11((char)(auVar26.
                                                  _2_2_ >> 4),(char)(auVar26._0_2_ >> 4)))))))) &
                  0x8888888888888888;
          if (uVar2 == 0) {
            lVar20 = 0x10 - ((ulong)pauVar19 & 0xf);
            pauVar17 = (undefined1 (*) [16])((long)pauVar19 + lVar20);
            if ((0x3f < uVar16) && ((long)(pcVar23 + lVar20) <= (long)(pcVar24 + -0x40))) {
              pauVar14 = (undefined1 (*) [16])
                         (pcVar23 + (0x20 - ((ulong)pauVar19 & 0xf)) + (long)*pauVar25);
              do {
                pauVar17 = pauVar14;
                uVar4 = *(undefined8 *)(pauVar17[2] + 8);
                auVar28[9] = cVar3;
                auVar28[10] = cVar3;
                auVar28[0xb] = cVar3;
                auVar28[0xc] = cVar3;
                auVar28[0xd] = cVar3;
                auVar28[0xe] = cVar3;
                auVar28[0xf] = cVar3;
                auVar31 = NEON_cmeq(auVar28,pauVar17[-1],1);
                auVar30[9] = cVar3;
                auVar30[10] = cVar3;
                auVar30[0xb] = cVar3;
                auVar30[0xc] = cVar3;
                auVar30[0xd] = cVar3;
                auVar30[0xe] = cVar3;
                auVar30[0xf] = cVar3;
                auVar29 = NEON_cmeq(auVar30,*pauVar17,1);
                auVar32[9] = cVar3;
                auVar32[10] = cVar3;
                auVar32[0xb] = cVar3;
                auVar32[0xc] = cVar3;
                auVar32[0xd] = cVar3;
                auVar32[0xe] = cVar3;
                auVar32[0xf] = cVar3;
                auVar27 = NEON_cmeq(auVar32,pauVar17[1],1);
                auVar34[9] = (char)((ulong)uVar4 >> 8);
                auVar34._0_9_ = *(unkbyte9 *)pauVar17[2];
                auVar34[10] = (char)((ulong)uVar4 >> 0x10);
                auVar34[0xb] = (char)((ulong)uVar4 >> 0x18);
                auVar34[0xc] = (char)((ulong)uVar4 >> 0x20);
                auVar34[0xd] = (char)((ulong)uVar4 >> 0x28);
                auVar34[0xe] = (char)((ulong)uVar4 >> 0x30);
                auVar34[0xf] = (char)((ulong)uVar4 >> 0x38);
                auVar36[9] = cVar3;
                auVar36[10] = cVar3;
                auVar36[0xb] = cVar3;
                auVar36[0xc] = cVar3;
                auVar36[0xd] = cVar3;
                auVar36[0xe] = cVar3;
                auVar36[0xf] = cVar3;
                auVar26 = NEON_cmeq(auVar36,auVar34,1);
                auVar33[0] = auVar29[0] | auVar31[0] | auVar27[0] | auVar26[0];
                auVar33[1] = auVar29[1] | auVar31[1] | auVar27[1] | auVar26[1];
                auVar33[2] = auVar29[2] | auVar31[2] | auVar27[2] | auVar26[2];
                auVar33[3] = auVar29[3] | auVar31[3] | auVar27[3] | auVar26[3];
                auVar33[4] = auVar29[4] | auVar31[4] | auVar27[4] | auVar26[4];
                auVar33[5] = auVar29[5] | auVar31[5] | auVar27[5] | auVar26[5];
                auVar33[6] = auVar29[6] | auVar31[6] | auVar27[6] | auVar26[6];
                auVar33[7] = auVar29[7] | auVar31[7] | auVar27[7] | auVar26[7];
                auVar33[8] = auVar29[8] | auVar31[8] | auVar27[8] | auVar26[8];
                auVar33[9] = auVar29[9] | auVar31[9] | auVar27[9] | auVar26[9];
                auVar33[10] = auVar29[10] | auVar31[10] | auVar27[10] | auVar26[10];
                auVar33[0xb] = auVar29[0xb] | auVar31[0xb] | auVar27[0xb] | auVar26[0xb];
                auVar33[0xc] = auVar29[0xc] | auVar31[0xc] | auVar27[0xc] | auVar26[0xc];
                auVar33[0xd] = auVar29[0xd] | auVar31[0xd] | auVar27[0xd] | auVar26[0xd];
                auVar33[0xe] = auVar29[0xe] | auVar31[0xe] | auVar27[0xe] | auVar26[0xe];
                auVar33[0xf] = auVar29[0xf] | auVar31[0xf] | auVar27[0xf] | auVar26[0xf];
                auVar34 = NEON_umaxp(auVar33,auVar33,1);
                if (auVar34._0_8_ != 0) {
                  uVar16 = CONCAT17((char)(auVar31._14_2_ >> 4),
                                    CONCAT16((char)(auVar31._12_2_ >> 4),
                                             CONCAT15((char)(auVar31._10_2_ >> 4),
                                                      CONCAT14((char)(auVar31._8_2_ >> 4),
                                                               CONCAT13((char)(auVar31._6_2_ >> 4),
                                                                        CONCAT12((char)(auVar31.
                                                  _4_2_ >> 4),
                                                  CONCAT11((char)(auVar31._2_2_ >> 4),
                                                           (char)(auVar31._0_2_ >> 4)))))))) &
                           0x8888888888888888;
                  if (uVar16 == 0) {
                    uVar16 = CONCAT17((char)(auVar29._14_2_ >> 4),
                                      CONCAT16((char)(auVar29._12_2_ >> 4),
                                               CONCAT15((char)(auVar29._10_2_ >> 4),
                                                        CONCAT14((char)(auVar29._8_2_ >> 4),
                                                                 CONCAT13((char)(auVar29._6_2_ >> 4)
                                                                          ,CONCAT12((char)(auVar29.
                                                  _4_2_ >> 4),
                                                  CONCAT11((char)(auVar29._2_2_ >> 4),
                                                           (char)(auVar29._0_2_ >> 4)))))))) &
                             0x8888888888888888;
                    if (uVar16 != 0) goto LAB_006a5334;
                    uVar16 = CONCAT17((char)(auVar27._14_2_ >> 4),
                                      CONCAT16((char)(auVar27._12_2_ >> 4),
                                               CONCAT15((char)(auVar27._10_2_ >> 4),
                                                        CONCAT14((char)(auVar27._8_2_ >> 4),
                                                                 CONCAT13((char)(auVar27._6_2_ >> 4)
                                                                          ,CONCAT12((char)(auVar27.
                                                  _4_2_ >> 4),
                                                  CONCAT11((char)(auVar27._2_2_ >> 4),
                                                           (char)(auVar27._0_2_ >> 4)))))))) &
                             0x8888888888888888;
                    if (uVar16 == 0) {
                      uVar16 = (CONCAT17((char)(auVar26._14_2_ >> 4),
                                         CONCAT16((char)(auVar26._12_2_ >> 4),
                                                  CONCAT15((char)(auVar26._10_2_ >> 4),
                                                           CONCAT14((char)(auVar26._8_2_ >> 4),
                                                                    CONCAT13((char)(auVar26._6_2_ >>
                                                                                   4),CONCAT12((char
                                                  )(auVar26._4_2_ >> 4),
                                                  CONCAT11((char)(auVar26._2_2_ >> 4),
                                                           (char)(auVar26._0_2_ >> 4)))))))) &
                               0x8888888888888888) >> 3;
                      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar16 & 0xffff0000ffff) << 0x10;
                      pcVar18 = pauVar17[2] + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 2)
                      ;
                    }
                    else {
                      uVar16 = uVar16 >> 3;
                      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar16 & 0xffff0000ffff) << 0x10;
                      pcVar18 = pauVar17[1] + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 2)
                      ;
                    }
                  }
                  else {
                    uVar16 = uVar16 >> 3;
                    uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
                    uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar16 & 0xffff0000ffff) << 0x10;
                    pcVar18 = pauVar17[-1] + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 2);
                  }
                  goto LAB_006a537c;
                }
                pauVar14 = pauVar17 + 4;
              } while (pauVar17 + 3 <= pauVar1 + -4);
              pauVar17 = pauVar17 + 3;
            }
            for (; pauVar17 <= pauVar1 + -1; pauVar17 = pauVar17 + 1) {
              auVar6[9] = cVar3;
              auVar6[10] = cVar3;
              auVar6[0xb] = cVar3;
              auVar6[0xc] = cVar3;
              auVar6[0xd] = cVar3;
              auVar6[0xe] = cVar3;
              auVar6[0xf] = cVar3;
              auVar26 = NEON_cmeq(auVar6,*pauVar17,1);
              uVar16 = CONCAT17((char)(auVar26._14_2_ >> 4),
                                CONCAT16((char)(auVar26._12_2_ >> 4),
                                         CONCAT15((char)(auVar26._10_2_ >> 4),
                                                  CONCAT14((char)(auVar26._8_2_ >> 4),
                                                           CONCAT13((char)(auVar26._6_2_ >> 4),
                                                                    CONCAT12((char)(auVar26._4_2_ >>
                                                                                   4),CONCAT11((char
                                                  )(auVar26._2_2_ >> 4),(char)(auVar26._0_2_ >> 4)))
                                                  ))))) & 0x8888888888888888;
              if (uVar16 != 0) goto LAB_006a5334;
            }
            if (pauVar1 <= pauVar17) goto LAB_006a5164;
            pauVar17 = (undefined1 (*) [16])(pcVar24 + (long)pauVar25[-1]);
            auVar7[9] = cVar3;
            auVar7[10] = cVar3;
            auVar7[0xb] = cVar3;
            auVar7[0xc] = cVar3;
            auVar7[0xd] = cVar3;
            auVar7[0xe] = cVar3;
            auVar7[0xf] = cVar3;
            auVar26 = NEON_cmeq(auVar7,*pauVar17,1);
            uVar16 = CONCAT17((char)(auVar26._14_2_ >> 4),
                              CONCAT16((char)(auVar26._12_2_ >> 4),
                                       CONCAT15((char)(auVar26._10_2_ >> 4),
                                                CONCAT14((char)(auVar26._8_2_ >> 4),
                                                         CONCAT13((char)(auVar26._6_2_ >> 4),
                                                                  CONCAT12((char)(auVar26._4_2_ >> 4
                                                                                 ),CONCAT11((char)(
                                                  auVar26._2_2_ >> 4),(char)(auVar26._0_2_ >> 4)))))
                                               ))) & 0x8888888888888888;
            if (uVar16 == 0) goto LAB_006a5164;
LAB_006a5334:
            uVar16 = (uVar16 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                     (uVar16 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            pcVar18 = *pauVar17 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 2);
          }
          else {
            uVar2 = uVar2 >> 3;
            uVar16 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            pcVar18 = *pauVar19 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 2);
          }
        }
LAB_006a537c:
        unaff_x25 = pcVar18 + ((long)pcVar23 - (long)pauVar19);
        pcVar23 = unaff_x25 + 1;
        if (pcVar21 < pcVar23) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (pcVar23,pcVar21,pcVar21,&PTR_s__home_runner__cargo_registry_src_00975b50);
        }
        if (pcVar21 + -(long)pcVar23 < param_3) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,param_3,pcVar21 + -(long)pcVar23,
                     &PTR_s__home_runner__cargo_registry_src_00975b38);
        }
        iVar15 = memcmp(pcVar23 + (long)*pauVar25,param_2 + 1,(size_t)param_3);
      } while (iVar15 != 0);
      goto LAB_006a540c;
    }
    pauVar1 = (undefined1 (*) [16])(*pauVar25 + (long)pcVar21);
    if (pcVar21 < (char *)0x10) {
      pauVar19 = pauVar25;
      for (uVar16 = (ulong)pcVar21 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        if ((*pauVar19)[0] == cVar3) goto LAB_006a55f0;
        pauVar19 = (undefined1 (*) [16])(*pauVar19 + 1);
      }
      if (pcVar21 + -1 < (char *)0x3) goto LAB_006a5164;
      pauVar19 = (undefined1 (*) [16])(*pauVar19 + 3);
      while (pauVar19[-1][0xd] != cVar3) {
        if (pauVar19[-1][0xe] == cVar3) {
          unaff_x25 = (char *)((long)pauVar19 + (-2 - (long)pauVar25));
          goto LAB_006a5408;
        }
        if (pauVar19[-1][0xf] == cVar3) {
          unaff_x25 = (char *)((long)pauVar19 + (-1 - (long)pauVar25));
          goto LAB_006a5408;
        }
        if ((*pauVar19)[0] == cVar3) goto LAB_006a55f0;
        puVar13 = *pauVar19;
        uVar22 = 0;
        pauVar19 = (undefined1 (*) [16])(*pauVar19 + 4);
        if ((undefined1 (*) [16])(puVar13 + 1) == pauVar1) goto LAB_006a540c;
      }
      pauVar19 = (undefined1 (*) [16])(pauVar19[-1] + 0xd);
LAB_006a55f0:
      unaff_x25 = (char *)((long)pauVar19 - (long)pauVar25);
    }
    else {
      auVar27[1] = cVar3;
      auVar27[0] = cVar3;
      auVar27[2] = cVar3;
      auVar27[3] = cVar3;
      auVar27[4] = cVar3;
      auVar27[5] = cVar3;
      auVar27[6] = cVar3;
      auVar27[7] = cVar3;
      auVar27[8] = cVar3;
      auVar27[9] = cVar3;
      auVar27[10] = cVar3;
      auVar27[0xb] = cVar3;
      auVar27[0xc] = cVar3;
      auVar27[0xd] = cVar3;
      auVar27[0xe] = cVar3;
      auVar27[0xf] = cVar3;
      auVar26 = NEON_cmeq(auVar27,*pauVar25,1);
      uVar16 = CONCAT17((char)(auVar26._14_2_ >> 4),
                        CONCAT16((char)(auVar26._12_2_ >> 4),
                                 CONCAT15((char)(auVar26._10_2_ >> 4),
                                          CONCAT14((char)(auVar26._8_2_ >> 4),
                                                   CONCAT13((char)(auVar26._6_2_ >> 4),
                                                            CONCAT12((char)(auVar26._4_2_ >> 4),
                                                                     CONCAT11((char)(auVar26._2_2_
                                                                                    >> 4),
                                                                              (char)(auVar26._0_2_
                                                                                    >> 4)))))))) &
               0x8888888888888888;
      if (uVar16 == 0) {
        pcVar23 = (char *)(0x10 - ((ulong)pauVar25 & 0xf));
        pauVar19 = (undefined1 (*) [16])((long)pauVar25 + (long)pcVar23);
        if (((char *)0x3f < pcVar21) && (pcVar23 <= pcVar21 + -0x40)) {
          pauVar17 = (undefined1 (*) [16])((long)pauVar25 + (0x20 - ((ulong)pauVar25 & 0xf)));
          do {
            pauVar19 = pauVar17;
            uVar5 = *(undefined8 *)(pauVar19[2] + 8);
            auVar31[1] = cVar3;
            auVar31[0] = cVar3;
            auVar31[2] = cVar3;
            auVar31[3] = cVar3;
            auVar31[4] = cVar3;
            auVar31[5] = cVar3;
            auVar31[6] = cVar3;
            auVar31[7] = cVar3;
            auVar31[8] = cVar3;
            auVar31[9] = cVar3;
            auVar31[10] = cVar3;
            auVar31[0xb] = cVar3;
            auVar31[0xc] = cVar3;
            auVar31[0xd] = cVar3;
            auVar31[0xe] = cVar3;
            auVar31[0xf] = cVar3;
            auVar32 = NEON_cmeq(auVar31,pauVar19[-1],1);
            auVar8[1] = cVar3;
            auVar8[0] = cVar3;
            auVar8[2] = cVar3;
            auVar8[3] = cVar3;
            auVar8[4] = cVar3;
            auVar8[5] = cVar3;
            auVar8[6] = cVar3;
            auVar8[7] = cVar3;
            auVar8[8] = cVar3;
            auVar8[9] = cVar3;
            auVar8[10] = cVar3;
            auVar8[0xb] = cVar3;
            auVar8[0xc] = cVar3;
            auVar8[0xd] = cVar3;
            auVar8[0xe] = cVar3;
            auVar8[0xf] = cVar3;
            auVar30 = NEON_cmeq(auVar8,*pauVar19,1);
            auVar9[1] = cVar3;
            auVar9[0] = cVar3;
            auVar9[2] = cVar3;
            auVar9[3] = cVar3;
            auVar9[4] = cVar3;
            auVar9[5] = cVar3;
            auVar9[6] = cVar3;
            auVar9[7] = cVar3;
            auVar9[8] = cVar3;
            auVar9[9] = cVar3;
            auVar9[10] = cVar3;
            auVar9[0xb] = cVar3;
            auVar9[0xc] = cVar3;
            auVar9[0xd] = cVar3;
            auVar9[0xe] = cVar3;
            auVar9[0xf] = cVar3;
            auVar28 = NEON_cmeq(auVar9,pauVar19[1],1);
            auVar29[9] = (char)((ulong)uVar5 >> 8);
            auVar29._0_9_ = *(unkbyte9 *)pauVar19[2];
            auVar29[10] = (char)((ulong)uVar5 >> 0x10);
            auVar29[0xb] = (char)((ulong)uVar5 >> 0x18);
            auVar29[0xc] = (char)((ulong)uVar5 >> 0x20);
            auVar29[0xd] = (char)((ulong)uVar5 >> 0x28);
            auVar29[0xe] = (char)((ulong)uVar5 >> 0x30);
            auVar29[0xf] = (char)((ulong)uVar5 >> 0x38);
            auVar10[1] = cVar3;
            auVar10[0] = cVar3;
            auVar10[2] = cVar3;
            auVar10[3] = cVar3;
            auVar10[4] = cVar3;
            auVar10[5] = cVar3;
            auVar10[6] = cVar3;
            auVar10[7] = cVar3;
            auVar10[8] = cVar3;
            auVar10[9] = cVar3;
            auVar10[10] = cVar3;
            auVar10[0xb] = cVar3;
            auVar10[0xc] = cVar3;
            auVar10[0xd] = cVar3;
            auVar10[0xe] = cVar3;
            auVar10[0xf] = cVar3;
            auVar26 = NEON_cmeq(auVar10,auVar29,1);
            auVar35[0] = auVar30[0] | auVar32[0] | auVar28[0] | auVar26[0];
            auVar35[1] = auVar30[1] | auVar32[1] | auVar28[1] | auVar26[1];
            auVar35[2] = auVar30[2] | auVar32[2] | auVar28[2] | auVar26[2];
            auVar35[3] = auVar30[3] | auVar32[3] | auVar28[3] | auVar26[3];
            auVar35[4] = auVar30[4] | auVar32[4] | auVar28[4] | auVar26[4];
            auVar35[5] = auVar30[5] | auVar32[5] | auVar28[5] | auVar26[5];
            auVar35[6] = auVar30[6] | auVar32[6] | auVar28[6] | auVar26[6];
            auVar35[7] = auVar30[7] | auVar32[7] | auVar28[7] | auVar26[7];
            auVar35[8] = auVar30[8] | auVar32[8] | auVar28[8] | auVar26[8];
            auVar35[9] = auVar30[9] | auVar32[9] | auVar28[9] | auVar26[9];
            auVar35[10] = auVar30[10] | auVar32[10] | auVar28[10] | auVar26[10];
            auVar35[0xb] = auVar30[0xb] | auVar32[0xb] | auVar28[0xb] | auVar26[0xb];
            auVar35[0xc] = auVar30[0xc] | auVar32[0xc] | auVar28[0xc] | auVar26[0xc];
            auVar35[0xd] = auVar30[0xd] | auVar32[0xd] | auVar28[0xd] | auVar26[0xd];
            auVar35[0xe] = auVar30[0xe] | auVar32[0xe] | auVar28[0xe] | auVar26[0xe];
            auVar35[0xf] = auVar30[0xf] | auVar32[0xf] | auVar28[0xf] | auVar26[0xf];
            auVar36 = NEON_umaxp(auVar35,auVar35,1);
            if (auVar36._0_8_ != 0) {
              uVar16 = CONCAT17((char)(auVar32._14_2_ >> 4),
                                CONCAT16((char)(auVar32._12_2_ >> 4),
                                         CONCAT15((char)(auVar32._10_2_ >> 4),
                                                  CONCAT14((char)(auVar32._8_2_ >> 4),
                                                           CONCAT13((char)(auVar32._6_2_ >> 4),
                                                                    CONCAT12((char)(auVar32._4_2_ >>
                                                                                   4),CONCAT11((char
                                                  )(auVar32._2_2_ >> 4),(char)(auVar32._0_2_ >> 4)))
                                                  ))))) & 0x8888888888888888;
              if (uVar16 != 0) {
                uVar16 = uVar16 >> 3;
                uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
                uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
                unaff_x25 = (char *)((long)pauVar19 +
                                    ((((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 2) - 0x10)
                                    - (long)pauVar25));
                goto LAB_006a5408;
              }
              uVar16 = CONCAT17((char)(auVar30._14_2_ >> 4),
                                CONCAT16((char)(auVar30._12_2_ >> 4),
                                         CONCAT15((char)(auVar30._10_2_ >> 4),
                                                  CONCAT14((char)(auVar30._8_2_ >> 4),
                                                           CONCAT13((char)(auVar30._6_2_ >> 4),
                                                                    CONCAT12((char)(auVar30._4_2_ >>
                                                                                   4),CONCAT11((char
                                                  )(auVar30._2_2_ >> 4),(char)(auVar30._0_2_ >> 4)))
                                                  ))))) & 0x8888888888888888;
              if (uVar16 != 0) {
                uVar16 = uVar16 >> 3;
                uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
                uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
                uVar16 = uVar16 >> 0x20 | uVar16 << 0x20;
                goto LAB_006a562c;
              }
              uVar16 = CONCAT17((char)(auVar28._14_2_ >> 4),
                                CONCAT16((char)(auVar28._12_2_ >> 4),
                                         CONCAT15((char)(auVar28._10_2_ >> 4),
                                                  CONCAT14((char)(auVar28._8_2_ >> 4),
                                                           CONCAT13((char)(auVar28._6_2_ >> 4),
                                                                    CONCAT12((char)(auVar28._4_2_ >>
                                                                                   4),CONCAT11((char
                                                  )(auVar28._2_2_ >> 4),(char)(auVar28._0_2_ >> 4)))
                                                  ))))) & 0x8888888888888888;
              if (uVar16 == 0) {
                uVar16 = (CONCAT17((char)(auVar26._14_2_ >> 4),
                                   CONCAT16((char)(auVar26._12_2_ >> 4),
                                            CONCAT15((char)(auVar26._10_2_ >> 4),
                                                     CONCAT14((char)(auVar26._8_2_ >> 4),
                                                              CONCAT13((char)(auVar26._6_2_ >> 4),
                                                                       CONCAT12((char)(auVar26._4_2_
                                                                                      >> 4),
                                                                                CONCAT11((char)(
                                                  auVar26._2_2_ >> 4),(char)(auVar26._0_2_ >> 4)))))
                                                  ))) & 0x8888888888888888) >> 3;
                uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
                uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
                unaff_x25 = (char *)((long)pauVar19 +
                                    ((((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 2) + 0x20)
                                    - (long)pauVar25));
              }
              else {
                uVar16 = uVar16 >> 3;
                uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
                uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
                unaff_x25 = (char *)((long)pauVar19 +
                                    ((((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 2) + 0x10)
                                    - (long)pauVar25));
              }
              goto LAB_006a5408;
            }
            pauVar17 = pauVar19 + 4;
          } while (pauVar19 + 3 <= pauVar1 + -4);
          pauVar19 = pauVar19 + 3;
        }
        if (pauVar19 <= pauVar1 + -1) {
LAB_006a556c:
          auVar11[1] = cVar3;
          auVar11[0] = cVar3;
          auVar11[2] = cVar3;
          auVar11[3] = cVar3;
          auVar11[4] = cVar3;
          auVar11[5] = cVar3;
          auVar11[6] = cVar3;
          auVar11[7] = cVar3;
          auVar11[8] = cVar3;
          auVar11[9] = cVar3;
          auVar11[10] = cVar3;
          auVar11[0xb] = cVar3;
          auVar11[0xc] = cVar3;
          auVar11[0xd] = cVar3;
          auVar11[0xe] = cVar3;
          auVar11[0xf] = cVar3;
          auVar26 = NEON_cmeq(auVar11,*pauVar19,1);
          uVar16 = CONCAT17((char)(auVar26._14_2_ >> 4),
                            CONCAT16((char)(auVar26._12_2_ >> 4),
                                     CONCAT15((char)(auVar26._10_2_ >> 4),
                                              CONCAT14((char)(auVar26._8_2_ >> 4),
                                                       CONCAT13((char)(auVar26._6_2_ >> 4),
                                                                CONCAT12((char)(auVar26._4_2_ >> 4),
                                                                         CONCAT11((char)(auVar26.
                                                  _2_2_ >> 4),(char)(auVar26._0_2_ >> 4)))))))) &
                   0x8888888888888888;
          if (uVar16 == 0) goto code_r0x006a5584;
          uVar16 = uVar16 >> 3;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
          uVar16 = uVar16 >> 0x20 | uVar16 << 0x20;
LAB_006a562c:
          unaff_x25 = (char *)((long)pauVar19 + (((ulong)LZCOUNT(uVar16) >> 2) - (long)pauVar25));
          goto LAB_006a5408;
        }
LAB_006a5590:
        if (pauVar19 < pauVar1) {
          auVar12[1] = cVar3;
          auVar12[0] = cVar3;
          auVar12[2] = cVar3;
          auVar12[3] = cVar3;
          auVar12[4] = cVar3;
          auVar12[5] = cVar3;
          auVar12[6] = cVar3;
          auVar12[7] = cVar3;
          auVar12[8] = cVar3;
          auVar12[9] = cVar3;
          auVar12[10] = cVar3;
          auVar12[0xb] = cVar3;
          auVar12[0xc] = cVar3;
          auVar12[0xd] = cVar3;
          auVar12[0xe] = cVar3;
          auVar12[0xf] = cVar3;
          auVar26 = NEON_cmeq(auVar12,pauVar1[-1],1);
          uVar16 = CONCAT17((char)(auVar26._14_2_ >> 4),
                            CONCAT16((char)(auVar26._12_2_ >> 4),
                                     CONCAT15((char)(auVar26._10_2_ >> 4),
                                              CONCAT14((char)(auVar26._8_2_ >> 4),
                                                       CONCAT13((char)(auVar26._6_2_ >> 4),
                                                                CONCAT12((char)(auVar26._4_2_ >> 4),
                                                                         CONCAT11((char)(auVar26.
                                                  _2_2_ >> 4),(char)(auVar26._0_2_ >> 4)))))))) &
                   0x8888888888888888;
          if (uVar16 != 0) {
            uVar16 = uVar16 >> 3;
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            unaff_x25 = (char *)((long)(pauVar1 + -1) +
                                (((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 2) -
                                (long)pauVar25));
            goto LAB_006a5408;
          }
        }
LAB_006a5164:
        uVar22 = 0;
        goto LAB_006a540c;
      }
      uVar16 = uVar16 >> 3;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      unaff_x25 = (char *)((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 2);
    }
  }
LAB_006a5408:
  uVar22 = 1;
LAB_006a540c:
  auVar37._8_8_ = unaff_x25;
  auVar37._0_8_ = uVar22;
  return auVar37;
code_r0x006a5584:
  pauVar19 = pauVar19 + 1;
  if (pauVar1 + -1 < pauVar19) goto LAB_006a5590;
  goto LAB_006a556c;
}


// ===== 006a56cc  <&[u8]as_nom::traits::FindSubstring<&str>>::find_substring =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&[u8] as nom::traits::FindSubstring<&str>>::find_substring */

void __rustcall <&[u8]as_nom::traits::FindSubstring<&str>>::find_substring(void)

{
  (*(code *)PTR_find_substring_009a12b0)();
  return;
}


// ===== 006a56d0  <&str_as_nom[a37cf3f84424f934]::traits::FindSubstring<&str>>::find_substring =====

/* <&str as nom[a37cf3f84424f934]::traits::FindSubstring<&str>>::find_substring */

undefined1  [16]
<&str_as_nom[a37cf3f84424f934]::traits::FindSubstring<&str>>::find_substring
          (undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  char *pcVar1;
  byte *pbVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  char *pcVar13;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  uint local_78 [2];
  ulong local_70;
  byte local_60;
  undefined1 uStack_5f;
  byte bStack_5e;
  undefined5 uStack_5d;
  ulong local_58;
  ulong local_50;
  ulong local_40;
  long local_30;
  ulong uStack_28;
  long local_20;
  ulong uStack_18;
  
  <core::str::pattern::[u]::core::str::pattern::StrSearcher>::new
            (local_78,*param_1,param_1[1],param_2,param_3);
  if ((local_78[0] & 1) != 0) {
    lVar15 = uStack_18 - 1;
    if (local_40 == 0xffffffffffffffff) {
      uVar12 = local_50 + lVar15;
      if (uVar12 < uStack_28) {
        uVar7 = local_70;
        if (local_70 <= uStack_18) {
          uVar7 = uStack_18;
        }
        if (local_70 - 1 < uStack_18) {
LAB_006a5874:
          if ((local_58 >> ((ulong)*(byte *)(local_30 + uVar12) & 0x3f) & 1) == 0) {
            local_50 = local_50 + uStack_18;
          }
          else {
            lVar8 = -local_50;
            lVar11 = local_70 + local_50;
            lVar14 = uVar7 - local_70;
            pcVar13 = (char *)(local_20 + local_70);
            do {
              if (lVar14 == 0) {
                uVar12 = local_70;
                goto LAB_006a58c0;
              }
              cVar4 = *pcVar13;
              pcVar1 = (char *)(local_30 + lVar11);
              lVar8 = lVar8 + -1;
              lVar11 = lVar11 + 1;
              lVar14 = lVar14 + -1;
              pcVar13 = pcVar13 + 1;
            } while (cVar4 == *pcVar1);
            local_50 = -lVar8;
          }
          goto LAB_006a5864;
        }
        uVar10 = local_50;
        do {
          while (uVar9 = uVar7, pcVar13 = (char *)(local_20 + local_70), local_50 = uVar10,
                (local_58 >> ((ulong)*(byte *)(local_30 + uVar12) & 0x3f) & 1) == 0) {
            uVar10 = uVar10 + uStack_18;
            uVar12 = uVar10 + lVar15;
            local_50 = uVar10;
            if (uStack_28 <= uVar12) goto LAB_006a5850;
          }
          do {
            if (local_70 == uVar9) {
              if (local_70 != 0) {
                    /* WARNING: Subroutine does not return */
                core::panicking::panic_bounds_check
                          (local_70 - 1,uStack_18,&PTR_s__rustc_48a229ceaefd4985c50990b14_00975af0);
              }
              goto LAB_006a5a8c;
            }
            cVar4 = *pcVar13;
            pcVar1 = (char *)(local_30 + local_70 + local_50);
            local_50 = local_50 + 1;
            uVar9 = uVar9 - 1;
            pcVar13 = pcVar13 + 1;
          } while (cVar4 == *pcVar1);
          uVar12 = local_50 + lVar15;
          uVar10 = local_50;
        } while (uVar12 < uStack_28);
      }
    }
    else {
      uVar12 = local_50 + lVar15;
      if (uVar12 < uStack_28) {
        lVar11 = CONCAT53(uStack_5d,CONCAT12(bStack_5e,CONCAT11(uStack_5f,local_60)));
LAB_006a5784:
        if ((local_58 >> ((ulong)*(byte *)(local_30 + uVar12) & 0x3f) & 1) == 0) {
          local_40 = 0;
          local_50 = local_50 + uStack_18;
        }
        else {
          uVar12 = local_40;
          if (local_40 <= local_70) {
            uVar12 = local_70;
          }
          uVar7 = (local_50 - local_70) + uVar12;
          do {
            if (uStack_18 <= uVar12) {
              uVar12 = local_70;
              goto LAB_006a57d4;
            }
            pcVar13 = (char *)(local_20 + uVar12);
            pcVar1 = (char *)(local_30 + local_50 + uVar12);
            uVar12 = uVar12 + 1;
            uVar7 = uVar7 + 1;
          } while (*pcVar13 == *pcVar1);
          local_40 = 0;
          local_50 = uVar7;
        }
        goto LAB_006a5770;
      }
    }
LAB_006a5850:
    auVar6._8_8_ = 0;
    auVar6._0_8_ = local_50;
    return auVar6 << 0x40;
  }
  local_50 = param_2;
  if ((bStack_5e & 1) != 0) goto LAB_006a5850;
  if (local_70 != 0) {
    if (local_70 < uStack_28) {
      if (*(char *)(local_30 + local_70) + 0x40 < 0 !=
          SCARRY4((int)*(char *)(local_30 + local_70),0x40)) goto LAB_006a5a34;
    }
    else if (local_70 != uStack_28) goto LAB_006a5a34;
  }
  if (local_70 == uStack_28) {
    auVar16._0_8_ = (ulong)local_60 & 1;
    auVar16._8_8_ = local_70;
    return auVar16;
  }
  pbVar2 = (byte *)(local_30 + local_70);
  uVar3 = (uint)*pbVar2;
  if ((char)*pbVar2 < '\0') {
    if (uVar3 < 0xe0) {
      uVar3 = pbVar2[1] & 0x3f | (uVar3 & 0x1f) << 6;
    }
    else {
      uVar5 = pbVar2[2] & 0x3f | (pbVar2[1] & 0x3f) << 6;
      if (uVar3 < 0xf0) {
        uVar3 = uVar5 | (uVar3 & 0x1f) << 0xc;
      }
      else {
        uVar3 = pbVar2[3] & 0x3f | uVar5 << 6 | (uVar3 & 7) << 0x12;
      }
    }
  }
  uVar10 = local_70;
  if ((local_60 & 1) == 0) {
    if (uVar3 < 0x80) {
      lVar15 = 1;
    }
    else if (uVar3 < 0x800) {
      lVar15 = 2;
    }
    else {
      lVar15 = 3;
      if (0xffff < uVar3) {
        lVar15 = 4;
      }
    }
    uVar10 = lVar15 + local_70;
    if (uVar10 != 0) {
      if (uVar10 < uStack_28) {
        if (*(char *)(local_30 + uVar10) + 0x40 < 0 !=
            SCARRY4((int)*(char *)(local_30 + uVar10),0x40)) {
LAB_006a5a34:
                    /* WARNING: Subroutine does not return */
          core::str::slice_error_fail();
        }
      }
      else if (uVar10 != uStack_28) goto LAB_006a5a34;
    }
    if (uVar10 == uStack_28) {
      auVar17._8_8_ = uStack_28;
      auVar17._0_8_ = 1;
      return auVar17;
    }
    if (*(char *)(local_30 + uVar10) < '\0') {
      auVar18._8_8_ = uVar10;
      auVar18._0_8_ = 1;
      return auVar18;
    }
  }
LAB_006a5a8c:
  auVar19._8_8_ = uVar10;
  auVar19._0_8_ = 1;
  return auVar19;
  while (pcVar13 = (char *)(local_20 + -1 + uVar12),
        pcVar1 = (char *)(local_30 + -1 + local_50 + uVar12), uVar12 = uVar12 - 1,
        *pcVar13 == *pcVar1) {
LAB_006a58c0:
    uVar10 = local_50;
    if (uVar12 == 0) goto LAB_006a5a8c;
  }
  local_50 = local_50 + CONCAT53(uStack_5d,CONCAT12(bStack_5e,CONCAT11(uStack_5f,local_60)));
LAB_006a5864:
  uVar12 = local_50 + lVar15;
  if (uStack_28 <= uVar12) goto LAB_006a5850;
  goto LAB_006a5874;
  while( true ) {
    if (uStack_18 <= uVar7) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar7,uStack_18,&PTR_s__rustc_48a229ceaefd4985c50990b14_00975af0);
    }
    uVar12 = uVar7;
    if (*(char *)(local_20 + uVar7) != *(char *)(local_30 + local_50 + uVar7)) break;
LAB_006a57d4:
    uVar7 = uVar12 - 1;
    uVar10 = local_50;
    if (uVar12 <= local_40) goto LAB_006a5a8c;
  }
  local_50 = local_50 + lVar11;
  local_40 = uStack_18 - lVar11;
LAB_006a5770:
  uVar12 = local_50 + lVar15;
  if (uStack_28 <= uVar12) goto LAB_006a5850;
  goto LAB_006a5784;
}


// ===== 006a5aac  FUN_006a5aac =====

void FUN_006a5aac(byte *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  ulong uVar8;
  
  if (param_2 == 0) {
    return;
  }
  pbVar5 = param_1 + param_2;
  do {
    pbVar6 = pbVar5 + -1;
    bVar1 = *pbVar6;
    uVar8 = (ulong)(char)bVar1;
    if ((char)bVar1 < 0) {
      pbVar6 = pbVar5 + -2;
      bVar2 = *pbVar6;
      uVar7 = (uint)(char)bVar2;
      if ((int)(uVar7 + 0x40) < 0 == SCARRY4(uVar7,0x40)) {
        uVar7 = uVar7 & 0x1f;
      }
      else {
        pbVar6 = pbVar5 + -3;
        bVar3 = *pbVar6;
        if ((char)bVar3 + 0x40 < 0 == SCARRY4((int)(char)bVar3,0x40)) {
          uVar7 = (int)(char)bVar3 & 0xf;
        }
        else {
          pbVar6 = pbVar5 + -4;
          uVar7 = bVar3 & 0x3f | (*pbVar6 & 7) << 6;
        }
        uVar7 = bVar2 & 0x3f | uVar7 << 6;
      }
      uVar8 = (ulong)((int)(char)bVar1 & 0x3fU | uVar7 << 6);
    }
    uVar7 = (uint)uVar8;
    if ((4 < uVar7 - 9) && (uVar7 != 0x20)) {
      if (uVar7 < 0x85) {
        return;
      }
      uVar4 = uVar7 >> 8;
      if (uVar4 < 0x20) {
        if (uVar4 == 0) {
          bVar1 = PTR_WHITESPACE_MAP_0099f420[uVar8 & 0xff];
joined_r0x006a5ba4:
          if ((bVar1 & 1) == 0) {
            return;
          }
        }
        else {
          if (uVar4 != 0x16) {
            return;
          }
          if (uVar7 != 0x1680) {
            return;
          }
        }
      }
      else {
        if (uVar4 == 0x20) {
          bVar1 = (byte)PTR_WHITESPACE_MAP_0099f420[uVar8 & 0xff] >> 1;
          goto joined_r0x006a5ba4;
        }
        if (uVar4 != 0x30) {
          return;
        }
        if (uVar7 != 0x3000) {
          return;
        }
      }
    }
    pbVar5 = pbVar6;
    if (param_1 == pbVar6) {
      return;
    }
  } while( true );
}


// ===== 006a5bb8  FUN_006a5bb8 =====

void FUN_006a5bb8(undefined8 param_1)

{
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
                    /* try { // try from 006a5bcc to 006a5bd3 has its CatchHandler @ 006a5c00 */
  <std::backtrace::[2]::std::backtrace::Backtrace>::capture(&local_50);
  uStack_78 = uStack_48;
  local_80 = local_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  local_60 = local_30;
  FUN_006a5c60(param_1,&local_80);
  return;
}


// ===== 006a5c20  FUN_006a5c20 =====

void FUN_006a5c20(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_50 [48];
  
  <std::backtrace::[2]::std::backtrace::Backtrace>::capture(auStack_50);
  FUN_006a5d04(param_1,param_2,auStack_50);
  return;
}


// ===== 006a5c60  FUN_006a5c60 =====

void FUN_006a5c60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar5 = param_2[1];
  uVar3 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  uVar10 = param_2[5];
  uVar9 = param_2[4];
  uVar2 = param_1[2];
  uVar6 = param_1[1];
  uVar4 = *param_1;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)__rustc::__rust_alloc(0x50,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = uVar7;
    puVar1[2] = uVar5;
    puVar1[5] = uVar9;
    puVar1[4] = uVar8;
    puVar1[7] = uVar4;
    puVar1[6] = uVar10;
    puVar1[9] = uVar2;
    puVar1[8] = uVar6;
    puVar1[1] = uVar3;
    *puVar1 = &PTR_FUN_00975b98;
    return;
  }
                    /* try { // try from 006a5cdc to 006a5ce7 has its CatchHandler @ 006a5cec */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x50);
}


// ===== 006a5d04  FUN_006a5d04 =====

void FUN_006a5d04(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = param_3[1];
  uVar2 = *param_3;
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  uVar7 = param_3[5];
  uVar6 = param_3[4];
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)__rustc::__rust_alloc(0x48,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = uVar4;
    puVar1[2] = uVar3;
    puVar1[5] = uVar6;
    puVar1[4] = uVar5;
    puVar1[7] = param_1;
    puVar1[6] = uVar7;
    puVar1[8] = param_2;
    puVar1[1] = uVar2;
    *puVar1 = &PTR_FUN_00975bc8;
    return;
  }
                    /* try { // try from 006a5d74 to 006a5d7f has its CatchHandler @ 006a5d84 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x48);
}


// ===== 006a5dac  FUN_006a5dac =====

void FUN_006a5dac(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = param_3[1];
  uVar2 = *param_3;
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  uVar7 = param_3[5];
  uVar6 = param_3[4];
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)__rustc::__rust_alloc(0x48,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = uVar4;
    puVar1[2] = uVar3;
    puVar1[5] = uVar6;
    puVar1[4] = uVar5;
    puVar1[7] = param_1;
    puVar1[6] = uVar7;
    puVar1[8] = param_2;
    puVar1[1] = uVar2;
    *puVar1 = &PTR_FUN_00975ec8;
    return;
  }
                    /* try { // try from 006a5e24 to 006a5e2f has its CatchHandler @ 006a5e34 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x48);
}


// ===== 006a5e4c  FUN_006a5e4c =====

void FUN_006a5e4c(long *param_1,ulong param_2,ulong param_3,ulong *param_4,ulong param_5,
                 undefined8 param_6)

{
  ulong *puVar1;
  ulong *puVar2;
  size_t __n;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  ulong *puVar6;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong *puVar16;
  undefined1 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined1 *puVar21;
  long lVar22;
  ulong uVar23;
  undefined8 uVar24;
  ulong *puVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  ulong local_78;
  ulong *puVar7;
  
  puVar25 = (ulong *)(param_1 + 2);
  uVar23 = *puVar25;
  if (uVar23 < param_3) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,param_3,uVar23,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976020);
  }
  if (param_3 < param_2) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (param_2,param_3,uVar23,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976038);
  }
  lVar22 = param_1[1];
  if (((param_2 != 0) && (param_2 < uVar23)) &&
     (iVar4 = (int)*(char *)(lVar22 + param_2),
     iVar4 == -0x41 || iVar4 + 0x41 < 0 != SCARRY4(iVar4,0x41))) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_00454708,0x5b,param_6);
  }
  if (((param_3 != 0) && (param_3 < uVar23)) &&
     (iVar4 = (int)*(char *)(lVar22 + param_3),
     iVar4 == -0x41 || iVar4 + 0x41 < 0 != SCARRY4(iVar4,0x41))) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_00454735,0x57,param_6);
  }
  __n = uVar23 - param_3;
  puVar2 = (ulong *)((long)param_4 + param_5);
  *puVar25 = param_2;
  if (__n == 0) {
    if (*param_1 - param_2 < param_5) {
                    /* try { // try from 006a6560 to 006a6627 has its CatchHandler @ 006a6688 */
      FUN_006a6aa4(param_1,param_2,param_5);
      lVar22 = param_1[1];
      param_2 = param_1[2];
    }
    else if (param_5 == 0) goto LAB_006a65f0;
    if ((0x1f < param_5) && (0x1f < (param_2 + lVar22) - (long)param_4)) {
      uVar11 = param_5 & 0xffffffffffffffe0;
      puVar9 = (ulong *)(param_2 + lVar22 + 0x10);
      uVar23 = param_5 & 0xffffffffffffffe0;
      param_2 = param_2 + uVar11;
      puVar7 = param_4 + 2;
      do {
        puVar6 = puVar7 + -1;
        uVar12 = puVar7[-2];
        uVar18 = puVar7[1];
        uVar10 = *puVar7;
        uVar23 = uVar23 - 0x20;
        puVar7 = puVar7 + 4;
        puVar9[-1] = *puVar6;
        puVar9[-2] = uVar12;
        puVar9[1] = uVar18;
        *puVar9 = uVar10;
        puVar9 = puVar9 + 4;
      } while (uVar23 != 0);
      param_4 = (ulong *)((long)param_4 + uVar11);
      if (param_5 == uVar11) goto LAB_006a65f0;
    }
    do {
      puVar9 = (ulong *)((long)param_4 + 1);
      *(char *)(lVar22 + param_2) = (char)*param_4;
      param_2 = param_2 + 1;
      param_4 = puVar9;
    } while (puVar9 != puVar2);
    goto LAB_006a65f0;
  }
  puVar9 = param_4;
  uVar11 = param_2;
  local_78 = param_3;
  if (param_2 < param_3) {
    uVar11 = param_5;
    if (param_3 + ~param_2 <= param_5) {
      uVar11 = param_3 + ~param_2;
    }
    uVar11 = uVar11 + 1;
    puVar7 = param_4;
    uVar12 = param_2;
    if ((0x20 < uVar11) && (0x1f < (param_2 + lVar22) - (long)param_4)) {
      puVar9 = (ulong *)(param_2 + lVar22 + 0x10);
      uVar12 = 0x20;
      if ((uVar11 & 0x1f) != 0) {
        uVar12 = uVar11 & 0x1f;
      }
      lVar8 = -param_2;
      lVar5 = uVar11 - uVar12;
      param_2 = param_2 + lVar5;
      puVar7 = (ulong *)((long)param_4 + lVar5);
      puVar6 = param_4 + 2;
      do {
        puVar16 = puVar6 + -1;
        uVar11 = puVar6[-2];
        uVar10 = puVar6[1];
        uVar12 = *puVar6;
        lVar5 = lVar5 + -0x20;
        lVar8 = lVar8 + -0x20;
        puVar6 = puVar6 + 4;
        puVar9[-1] = *puVar16;
        puVar9[-2] = uVar11;
        puVar9[1] = uVar10;
        *puVar9 = uVar12;
        puVar9 = puVar9 + 4;
      } while (lVar5 != 0);
      *puVar25 = -lVar8;
      uVar12 = param_2;
    }
    do {
      if (puVar7 == puVar2) goto LAB_006a61e8;
      uVar10 = param_2 + 1;
      *(char *)(lVar22 + param_2) = (char)*puVar7;
      uVar11 = uVar12 + 1;
      *puVar25 = uVar11;
      param_2 = uVar10;
      puVar9 = (ulong *)((long)puVar7 + 1);
      puVar7 = (ulong *)((long)puVar7 + 1);
      uVar12 = uVar11;
    } while (param_3 != uVar10);
  }
  uVar10 = (long)puVar2 - (long)puVar9;
  if (uVar10 == 0) {
    puVar9 = (ulong *)((long)param_4 + param_5);
    uVar12 = uVar11;
    puVar7 = (ulong *)((long)param_4 + param_5);
  }
  else {
    if (*param_1 - uVar23 < uVar10) {
      FUN_006a6aa4(param_1,uVar23,uVar10);
      lVar22 = param_1[1];
      uVar11 = param_1[2];
    }
    memmove((void *)(lVar22 + uVar10 + param_3),(void *)(lVar22 + param_3),__n);
    local_78 = uVar10 + param_3;
    uVar12 = uVar11;
    puVar7 = puVar9;
    if (uVar11 < uVar10 + param_3) {
      uVar12 = (long)param_4 + ((~uVar11 + param_5 + param_3) - (long)puVar9);
      uVar23 = uVar12;
      if (uVar10 <= uVar12) {
        uVar23 = uVar10;
      }
      uVar23 = uVar23 + 1;
      puVar6 = puVar9;
      if (0x20 < uVar23) {
        puVar7 = (ulong *)(lVar22 + uVar11);
        if (uVar10 <= uVar12) {
          uVar12 = uVar10;
        }
        puVar16 = (ulong *)((long)puVar9 + uVar12 + 1);
        puVar1 = (ulong *)((long)puVar7 + uVar12 + 1);
        if (((puVar1 <= puVar25 || param_1 + 3 <= puVar7) && (puVar16 <= puVar7 || puVar1 <= puVar9)
            ) && (puVar16 <= puVar25 || param_1 + 3 <= puVar9)) {
          uVar12 = 0x20;
          if ((uVar23 & 0x1f) != 0) {
            uVar12 = uVar23 & 0x1f;
          }
          lVar8 = -uVar11;
          puVar7 = (ulong *)(uVar11 + lVar22 + 0x10);
          lVar5 = uVar23 - uVar12;
          puVar16 = puVar9 + 2;
          uVar11 = uVar11 + lVar5;
          puVar6 = (ulong *)((long)puVar9 + lVar5);
          do {
            puVar1 = puVar16 + -1;
            uVar23 = puVar16[-2];
            uVar10 = puVar16[1];
            uVar12 = *puVar16;
            lVar5 = lVar5 + -0x20;
            lVar8 = lVar8 + -0x20;
            puVar16 = puVar16 + 4;
            puVar7[-1] = *puVar1;
            puVar7[-2] = uVar23;
            puVar7[1] = uVar10;
            *puVar7 = uVar12;
            puVar7 = puVar7 + 4;
          } while (lVar5 != 0);
          *puVar25 = -lVar8;
        }
      }
      lVar5 = (long)param_4 + (((param_5 + param_3) - uVar11) - (long)puVar9);
      puVar9 = puVar6;
      uVar12 = uVar11;
      do {
        if (puVar6 == puVar2) goto LAB_006a61e8;
        uVar12 = uVar12 + 1;
        *(char *)(lVar22 + uVar11) = (char)*puVar6;
        uVar11 = uVar11 + 1;
        lVar5 = lVar5 + -1;
        puVar9 = (ulong *)((long)puVar9 + 1);
        *puVar25 = uVar12;
        puVar7 = (ulong *)((long)puVar6 + 1);
        puVar6 = (ulong *)((long)puVar6 + 1);
      } while (lVar5 != 0);
    }
  }
  lVar5 = (long)puVar2 - (long)puVar9;
  if (lVar5 < 0) {
    uVar24 = 0;
LAB_006a6148:
                    /* try { // try from 006a6148 to 006a6157 has its CatchHandler @ 006a6688 */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar24,lVar5);
  }
  uVar23 = local_78;
  if (puVar2 == puVar7) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar24 = 1;
    puVar3 = (undefined1 *)__rustc::__rust_alloc(lVar5,1);
    if (puVar3 == (undefined1 *)0x0) goto LAB_006a6148;
    uVar11 = 0;
    uVar10 = (long)param_4 + (param_5 - (long)puVar7);
    if ((uVar10 < 0x20) || ((ulong)((long)puVar3 - (long)puVar7) < 0x20)) {
LAB_006a6230:
      do {
        puVar6 = (ulong *)((long)puVar7 + 1);
        puVar3[uVar11] = (char)*puVar7;
        uVar11 = uVar11 + 1;
        puVar7 = puVar6;
      } while (puVar6 != puVar2);
    }
    else {
      uVar11 = uVar10 & 0xffffffffffffffe0;
      puVar6 = (ulong *)(puVar3 + 0x10);
      puVar16 = puVar7 + 2;
      uVar18 = uVar10 & 0xffffffffffffffe0;
      do {
        puVar1 = puVar16 + -1;
        uVar20 = puVar16[-2];
        uVar28 = puVar16[1];
        uVar14 = *puVar16;
        uVar18 = uVar18 - 0x20;
        puVar16 = puVar16 + 4;
        puVar6[-1] = *puVar1;
        puVar6[-2] = uVar20;
        puVar6[1] = uVar28;
        *puVar6 = uVar14;
        puVar6 = puVar6 + 4;
      } while (uVar18 != 0);
      puVar7 = (ulong *)((long)puVar7 + uVar11);
      if (uVar10 != uVar11) goto LAB_006a6230;
    }
    if (uVar11 != 0) {
      if (*param_1 - (local_78 + __n) < uVar11) {
                    /* try { // try from 006a6634 to 006a6647 has its CatchHandler @ 006a665c */
        FUN_006a6aa4(param_1,local_78 + __n,uVar11);
        lVar22 = param_1[1];
      }
      uVar23 = uVar11 + local_78;
      memmove((void *)(lVar22 + uVar23),(void *)(lVar22 + local_78),__n);
      uVar12 = *puVar25;
      if (uVar12 < uVar23) {
        uVar10 = local_78 + uVar11 + ~uVar12;
        if (uVar11 - 1 <= uVar10) {
          uVar10 = uVar11 - 1;
        }
        uVar10 = uVar10 + 1;
        uVar18 = uVar12;
        puVar21 = puVar3;
        if ((uVar10 < 8) || ((uVar12 + lVar22) - (long)puVar3 < 0x20)) {
LAB_006a62d8:
          lVar8 = ~uVar12 + local_78 + uVar11;
          puVar13 = (undefined1 *)(lVar22 + uVar12);
          do {
            puVar17 = puVar21 + 1;
            uVar18 = uVar18 + 1;
            *puVar13 = *puVar21;
            if (lVar8 == 0) break;
            lVar8 = lVar8 + -1;
            puVar13 = puVar13 + 1;
            puVar21 = puVar17;
          } while (puVar17 != puVar3 + uVar11);
        }
        else if (uVar10 < 0x20) {
          uVar14 = 0;
LAB_006a6484:
          lVar26 = 0;
          lVar27 = 0;
          lVar29 = 0;
          lVar30 = 0;
          lVar31 = 0;
          lVar32 = 0;
          lVar33 = 0;
          puVar19 = (undefined8 *)(lVar22 + uVar14 + uVar12);
          uVar20 = uVar10 & 0xfffffffffffffff8;
          uVar12 = uVar12 + uVar20;
          lVar8 = uVar14 - uVar20;
          puVar15 = (undefined8 *)(puVar3 + uVar14);
          do {
            lVar27 = lVar27 + 1;
            lVar29 = lVar29 + 1;
            lVar30 = lVar30 + 1;
            lVar31 = lVar31 + 1;
            lVar8 = lVar8 + 8;
            uVar18 = uVar18 + 1;
            lVar26 = lVar26 + 1;
            lVar32 = lVar32 + 1;
            lVar33 = lVar33 + 1;
            *puVar19 = *puVar15;
            puVar15 = puVar15 + 1;
            puVar19 = puVar19 + 1;
          } while (lVar8 != 0);
          uVar18 = uVar18 + lVar27 + lVar30 + lVar32 + lVar26 + lVar29 + lVar31 + lVar33;
          puVar21 = puVar3 + uVar20;
          if (uVar10 != uVar20) goto LAB_006a62d8;
        }
        else {
          lVar27 = 0;
          lVar8 = 0;
          lVar26 = 0;
          lVar35 = 0;
          lVar36 = 0;
          lVar41 = 0;
          lVar42 = 0;
          lVar31 = 0;
          lVar32 = 0;
          lVar33 = 0;
          lVar34 = 0;
          lVar29 = 0;
          lVar30 = 0;
          lVar45 = 0;
          lVar46 = 0;
          puVar19 = (undefined8 *)(uVar12 + lVar22 + 0x10);
          lVar37 = 0;
          lVar38 = 0;
          puVar15 = (undefined8 *)(puVar3 + 0x10);
          lVar51 = 0;
          lVar52 = 0;
          lVar39 = 0;
          lVar40 = 0;
          uVar18 = uVar10 & 0xffffffffffffffe0;
          lVar53 = 0;
          lVar54 = 0;
          lVar47 = 0;
          lVar48 = 0;
          lVar49 = 0;
          lVar50 = 0;
          lVar43 = 0;
          lVar44 = 0;
          lVar55 = 0;
          lVar56 = 0;
          uVar14 = uVar10 & 0xffffffffffffffe0;
          uVar20 = uVar12;
          do {
            uVar24 = puVar15[-2];
            uVar58 = puVar15[1];
            uVar57 = *puVar15;
            lVar8 = lVar8 + 1;
            lVar26 = lVar26 + 1;
            lVar35 = lVar35 + 1;
            lVar36 = lVar36 + 1;
            uVar20 = uVar20 + 1;
            lVar27 = lVar27 + 1;
            lVar41 = lVar41 + 1;
            lVar42 = lVar42 + 1;
            lVar31 = lVar31 + 1;
            lVar32 = lVar32 + 1;
            lVar33 = lVar33 + 1;
            lVar34 = lVar34 + 1;
            uVar18 = uVar18 - 0x20;
            lVar29 = lVar29 + 1;
            lVar30 = lVar30 + 1;
            lVar45 = lVar45 + 1;
            lVar46 = lVar46 + 1;
            puVar19[-1] = puVar15[-1];
            puVar19[-2] = uVar24;
            puVar19[1] = uVar58;
            *puVar19 = uVar57;
            lVar39 = lVar39 + 1;
            lVar40 = lVar40 + 1;
            lVar51 = lVar51 + 1;
            lVar52 = lVar52 + 1;
            puVar19 = puVar19 + 4;
            lVar37 = lVar37 + 1;
            lVar38 = lVar38 + 1;
            lVar53 = lVar53 + 1;
            lVar54 = lVar54 + 1;
            puVar15 = puVar15 + 4;
            lVar47 = lVar47 + 1;
            lVar48 = lVar48 + 1;
            lVar49 = lVar49 + 1;
            lVar50 = lVar50 + 1;
            lVar43 = lVar43 + 1;
            lVar44 = lVar44 + 1;
            lVar55 = lVar55 + 1;
            lVar56 = lVar56 + 1;
          } while (uVar18 != 0);
          uVar18 = lVar37 + uVar20 + lVar47 + lVar31 + lVar39 + lVar8 + lVar43 + lVar29 +
                   lVar51 + lVar35 + lVar49 + lVar33 + lVar53 + lVar41 + lVar55 + lVar45 +
                   lVar38 + lVar27 + lVar48 + lVar32 + lVar40 + lVar26 + lVar44 + lVar30 +
                   lVar52 + lVar36 + lVar50 + lVar34 + lVar54 + lVar42 + lVar56 + lVar46;
          if (uVar10 != uVar14) {
            if ((uVar10 & 0x18) == 0) {
              uVar12 = uVar12 + uVar14;
              puVar21 = puVar3 + uVar14;
              goto LAB_006a62d8;
            }
            goto LAB_006a6484;
          }
        }
        *puVar25 = uVar18;
        uVar12 = uVar18;
      }
    }
  }
  local_78 = uVar23;
  if (puVar9 != puVar2) {
    __rustc::__rust_dealloc(puVar3,lVar5,1);
  }
  if (local_78 != uVar12) {
LAB_006a61f4:
    memmove((void *)(param_1[1] + uVar12),(void *)(param_1[1] + local_78),__n);
  }
LAB_006a6208:
  param_2 = uVar12 + __n;
LAB_006a65f0:
  *puVar25 = param_2;
  return;
LAB_006a61e8:
  if (local_78 != uVar12) goto LAB_006a61f4;
  goto LAB_006a6208;
}


// ===== 006a66c8  FUN_006a66c8 =====

void FUN_006a66c8(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 8) == 2) {
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 != 0) {
      if (iVar1 == 2) goto LAB_006a6720;
      if (iVar1 != 3) {
                    /* try { // try from 006a6748 to 006a675f has its CatchHandler @ 006a6764 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  ("internal error: entered unreachable code: invalid Once state",0x79,
                   &PTR_s__rustc_48a229ceaefd4985c50990b14_00976050);
      }
    }
    FUN_006a73e4(param_1 + 0x10);
    if (*(long *)(param_1 + 0x10) != 0) {
      __rustc::__rust_dealloc(*(undefined8 *)(param_1 + 0x18),*(long *)(param_1 + 0x10) * 0x38,8);
    }
  }
LAB_006a6720:
  if (*(long *)(param_1 + 0x38) != 0) {
    __rustc::__rust_dealloc(*(undefined8 *)(param_1 + 0x40),*(long *)(param_1 + 0x38),1);
    return;
  }
  return;
}


// ===== 006a6784  FUN_006a6784 =====

void FUN_006a6784(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 8) == 2) {
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 != 0) {
      if (iVar1 == 2) {
        return;
      }
      if (iVar1 != 3) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  ("internal error: entered unreachable code: invalid Once state",0x79,
                   &PTR_s__rustc_48a229ceaefd4985c50990b14_00976050);
      }
    }
    FUN_006a73e4(param_1 + 0x10);
    if (*(long *)(param_1 + 0x10) != 0) {
      __rustc::__rust_dealloc(*(undefined8 *)(param_1 + 0x18),*(long *)(param_1 + 0x10) * 0x38,8);
      return;
    }
  }
  return;
}


// ===== 006a6808  FUN_006a6808 =====

void FUN_006a6808(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (*(long *)(param_1 + 8) == 2) {
    iVar3 = *(int *)(param_1 + 0x30);
    if (iVar3 != 0) {
      if (iVar3 == 2) goto LAB_006a6860;
      if (iVar3 != 3) {
                    /* try { // try from 006a689c to 006a68b3 has its CatchHandler @ 006a68dc */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  ("internal error: entered unreachable code: invalid Once state",0x79,
                   &PTR_s__rustc_48a229ceaefd4985c50990b14_00976050);
      }
    }
    FUN_006a73e4(param_1 + 0x10);
    if (*(long *)(param_1 + 0x10) != 0) {
      __rustc::__rust_dealloc(*(undefined8 *)(param_1 + 0x18),*(long *)(param_1 + 0x10) * 0x38,8);
    }
  }
LAB_006a6860:
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  puVar2 = *(undefined8 **)(param_1 + 0x40);
  if ((code *)*puVar2 != (code *)0x0) {
                    /* try { // try from 006a686c to 006a6873 has its CatchHandler @ 006a68b8 */
    (*(code *)*puVar2)(uVar1);
  }
  if (puVar2[1] != 0) {
    __rustc::__rust_dealloc(uVar1,puVar2[1],puVar2[2]);
    return;
  }
  return;
}


// ===== 006a68f4  FUN_006a68f4 =====

void FUN_006a68f4(long *param_1)

{
  if (*param_1 != 0) {
    __rustc::__rust_dealloc(param_1[1],*param_1,1);
    return;
  }
  return;
}


// ===== 006a690c  FUN_006a690c =====

void FUN_006a690c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = *param_1;
  puVar2 = (undefined8 *)param_1[1];
  if ((code *)*puVar2 != (code *)0x0) {
                    /* try { // try from 006a6924 to 006a692b has its CatchHandler @ 006a6954 */
    (*(code *)*puVar2)(uVar1);
  }
  if (puVar2[1] != 0) {
    __rustc::__rust_dealloc(uVar1,puVar2[1],puVar2[2]);
    return;
  }
  return;
}


// ===== 006a6978  FUN_006a6978 =====

void FUN_006a6978(long *param_1)

{
  if (*param_1 != 0) {
    __rustc::__rust_dealloc(param_1[1],*param_1,1);
    return;
  }
  return;
}


// ===== 006a6990  FUN_006a6990 =====

undefined1  [16] FUN_006a6990(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &PTR_FUN_00975c18;
  auVar1._0_8_ = param_1 + 0x38;
  return auVar1;
}


// ===== 006a69a0  FUN_006a69a0 =====

undefined1  [16] FUN_006a69a0(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &UNK_00975c90;
  auVar1._0_8_ = param_1 + 0x38;
  return auVar1;
}


// ===== 006a69b0  FUN_006a69b0 =====

undefined1  [16] FUN_006a69b0(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &PTR_FUN_00975d08;
  auVar1._0_8_ = param_1 + 0x38;
  return auVar1;
}


// ===== 006a69c0  FUN_006a69c0 =====

void FUN_006a69c0(void)

{
  return;
}


// ===== 006a69cc  FUN_006a69cc =====

void FUN_006a69cc(void)

{
  return;
}


// ===== 006a69d8  FUN_006a69d8 =====

void FUN_006a69d8(void)

{
  return;
}


// ===== 006a69e4  FUN_006a69e4 =====

long FUN_006a69e4(long param_1,long *param_2)

{
  param_1 = param_1 + 0x38;
  if (*param_2 != -0x5238f33e6f436146 || param_2[1] != 0x5d4fcbdfee3dbd11) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 006a6a24  FUN_006a6a24 =====

long FUN_006a6a24(long param_1,long *param_2)

{
  param_1 = param_1 + 0x38;
  if (*param_2 != -0x717792f12e63cac0 || param_2[1] != -0x42f18623245a2bbe) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 006a6a64  FUN_006a6a64 =====

long FUN_006a6a64(long param_1,long *param_2)

{
  param_1 = param_1 + 0x38;
  if (*param_2 != -0x4609fd23a01609a4 || param_2[1] != 0x24c161f26c70c1f1) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 006a6aa4  FUN_006a6aa4 =====

void FUN_006a6aa4(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  if (CARRY8(param_3,param_2)) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(0);
  }
  uVar2 = *param_1 * 2;
  uVar1 = param_3 + param_2;
  if (param_3 + param_2 <= uVar2) {
    uVar1 = uVar2;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  FUN_006a6c54(&local_38,*param_1,param_1[1],uVar1,1,1);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 006a6b24  <anyhow::error::anyhow::Error>::root_cause =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::error::anyhow::Error>::root_cause */

undefined1  [16] __rustcall <anyhow::error::anyhow::Error>::root_cause(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar2 = (**(code **)(*(long *)*param_1 + 8))();
  do {
    auVar1 = auVar2;
    auVar2 = (**(code **)(auVar1._8_8_ + 0x30))();
  } while (auVar2._0_8_ != 0);
  return auVar1;
}


// ===== 006a6b68  <anyhow::error::anyhow::Error>::chain =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::error::anyhow::Error>::chain */

void __rustcall <anyhow::error::anyhow::Error>::chain(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = (**(code **)(*(long *)*param_2 + 8))();
  *param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 1) = auVar1;
  return;
}


// ===== 006a6b9c  <anyhow::error::anyhow::Error>::backtrace =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::error::anyhow::Error>::backtrace */

void __rustcall <anyhow::error::anyhow::Error>::backtrace(long *param_1)

{
  long lVar1;
  
  param_1 = (long *)*param_1;
  if ((param_1[1] == -1) && (lVar1 = (**(code **)(*param_1 + 0x28))(param_1), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("backtrace capture failed",0x18,&PTR_s__home_runner__cargo_registry_src_00975fd8);
  }
  return;
}


// ===== 006a6bec  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<&dyn_Trait<Assoc=X>+core::error::Error>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<&dyn Trait<Assoc = X> +
   core::error::Error>>::grow_one */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<&dyn_Trait<Assoc=X>+core::error::Error>>::grow_one
          (ulong *param_1)

{
  ulong uVar1;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1 * 2;
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_006a6c54(&local_38,*param_1,param_1[1],uVar1,8,0x10);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 006a6c54  FUN_006a6c54 =====

void FUN_006a6c54(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
                 ulong param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_6;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_4;
  lVar5 = 8;
  uVar3 = 1;
  uVar4 = 0;
  if ((SUB168(auVar1 * auVar2,8) != 0) ||
     (param_4 = param_6 * param_4,
     0x8000000000000000U - param_5 <= param_4 && param_4 - (0x8000000000000000U - param_5) != 0))
  goto LAB_006a6cf0;
  if (param_2 == 0) {
    lVar5 = param_5;
    if (param_4 != 0) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      lVar5 = __rustc::__rust_alloc(param_4,param_5);
      if (lVar5 == 0) goto LAB_006a6cd0;
    }
LAB_006a6ce0:
    uVar3 = 0;
    param_1[1] = lVar5;
  }
  else {
    lVar5 = __rustc::__rust_realloc(param_3,param_6 * param_2,param_5,param_4);
    if (lVar5 != 0) goto LAB_006a6ce0;
LAB_006a6cd0:
    uVar3 = 1;
    param_1[1] = param_5;
  }
  lVar5 = 0x10;
  uVar4 = param_4;
LAB_006a6cf0:
  *(ulong *)((long)param_1 + lVar5) = uVar4;
  *param_1 = uVar3;
  return;
}


// ===== 006a6d08  FUN_006a6d08 =====

undefined8 FUN_006a6d08(void)

{
  return 0;
}


// ===== 006a6d10  <anyhow::Chain_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::Chain as core::iter::traits::double_ended::DoubleEndedIterator>::next_back */

undefined1  [16] __rustcall
<anyhow::Chain_as_core::iter::traits::double_ended::DoubleEndedIterator>::next_back(long *param_1)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 unaff_x20;
  undefined8 *puVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long local_68;
  long local_60;
  long local_58;
  
  if (*param_1 == 0) {
    local_68 = 0;
    local_60 = 8;
    local_58 = 0;
    if (*(long *)*(undefined1 (*) [16])(param_1 + 1) == 0) {
      uVar4 = 0;
      puVar6 = (undefined8 *)&DAT_00000008;
      lVar5 = *param_1;
      unaff_x20 = 0;
      lVar7 = 0;
      lVar3 = 8;
    }
    else {
      lVar5 = 0;
      lVar7 = 8;
      auVar9 = *(undefined1 (*) [16])(param_1 + 1);
      do {
        lVar3 = local_58;
                    /* try { // try from 006a6da0 to 006a6dc3 has its CatchHandler @ 006a6e58 */
        auVar8 = (**(code **)(auVar9._8_8_ + 0x30))(auVar9._0_8_);
        if (lVar3 == local_68) {
          <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<&dyn_Trait<Assoc=X>+core::error::Error>>::
          grow_one(&local_68);
          lVar7 = local_60;
        }
        pauVar1 = (undefined1 (*) [16])(lVar7 + lVar5);
        local_58 = lVar3 + 1;
        lVar5 = lVar5 + 0x10;
        *pauVar1 = auVar9;
        auVar9 = auVar8;
      } while (auVar8._0_8_ != 0);
      puVar2 = (undefined8 *)(local_60 + lVar5);
      lVar7 = local_68;
      lVar3 = local_60;
      if (local_58 == 0) {
        uVar4 = 0;
        lVar5 = *param_1;
        unaff_x20 = 0;
        puVar6 = puVar2;
      }
      else {
        puVar6 = puVar2 + -2;
        uVar4 = *puVar6;
        unaff_x20 = puVar2[-1];
        lVar5 = *param_1;
      }
    }
    if ((lVar5 != 0) && (param_1[2] != 0)) {
      local_68 = lVar7;
      local_60 = lVar3;
      __rustc::__rust_dealloc(lVar5,param_1[2] << 4,8);
    }
    *param_1 = lVar3;
    param_1[1] = lVar3;
    param_1[2] = lVar7;
    param_1[3] = (long)puVar6;
  }
  else {
    lVar5 = param_1[3];
    if (param_1[1] == lVar5) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(lVar5 + -0x10);
      unaff_x20 = *(undefined8 *)(lVar5 + -8);
      param_1[3] = lVar5 + -0x10;
    }
  }
  auVar9._8_8_ = unaff_x20;
  auVar9._0_8_ = uVar4;
  return auVar9;
}


// ===== 006a6e7c  <anyhow::Error_as_core::ops::deref::Deref>::deref =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::Error as core::ops::deref::Deref>::deref */

void __rustcall <anyhow::Error_as_core::ops::deref::Deref>::deref(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006a6e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 8))();
  return;
}


// ===== 006a6e8c  <anyhow::Chain_as_core::iter::traits::exact_size::ExactSizeIterator>::len =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::Chain as core::iter::traits::exact_size::ExactSizeIterator>::len */

ulong __rustcall
<anyhow::Chain_as_core::iter::traits::exact_size::ExactSizeIterator>::len(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  if (*param_1 == 0) {
    if (param_1[1] == 0) {
      return 0;
    }
    lVar1 = param_1[2];
    uVar2 = 0;
    do {
      auVar3 = (**(code **)(lVar1 + 0x30))();
      lVar1 = auVar3._8_8_;
      uVar2 = uVar2 + 1;
    } while (auVar3._0_8_ != 0);
  }
  else {
    uVar2 = (ulong)(param_1[3] - param_1[1]) >> 4;
  }
  return uVar2;
}


// ===== 006a6ef4  <anyhow::Error_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::Error as core::fmt::Display>::fmt */

void __rustcall <anyhow::Error_as_core::fmt::Display>::fmt(undefined8 *param_1)

{
  FUN_006a7eec(*param_1);
  return;
}


// ===== 006a6efc  <anyhow::Error_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::Error as core::fmt::Debug>::fmt */

void __rustcall <anyhow::Error_as_core::fmt::Debug>::fmt(undefined8 *param_1)

{
  <anyhow::fmt::anyhow::error::ErrorImpl>::debug(*param_1);
  return;
}


// ===== 006a6f04  <anyhow::Error_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::Error as core::ops::drop::Drop>::drop */

void __rustcall <anyhow::Error_as_core::ops::drop::Drop>::drop(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006a6f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)*param_1)();
  return;
}


// ===== 006a6f14  FUN_006a6f14 =====

undefined8 FUN_006a6f14(long *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = param_1[2];
  if (param_2 < 0x80) {
    uVar6 = 1;
  }
  else if (param_2 < 0x800) {
    uVar6 = 2;
  }
  else {
    uVar6 = 3;
    if (0xffff < param_2) {
      uVar6 = 4;
    }
  }
  if ((ulong)(*param_1 - lVar5) < uVar6) {
    FUN_006a6aa4(param_1,lVar5,uVar6);
    lVar4 = param_1[1];
  }
  else {
    lVar4 = param_1[1];
  }
  pbVar3 = (byte *)(lVar4 + lVar5);
  if (param_2 < 0x80) {
    *pbVar3 = (byte)param_2;
  }
  else {
    bVar1 = (byte)param_2 & 0x3f | 0x80;
    if (param_2 < 0x800) {
      pbVar3[1] = bVar1;
      *pbVar3 = (byte)(param_2 >> 6) | 0xc0;
    }
    else {
      bVar2 = (byte)(param_2 >> 6) & 0x3f | 0x80;
      if (param_2 >> 0x10 == 0) {
        pbVar3[1] = bVar2;
        pbVar3[2] = bVar1;
        *pbVar3 = (byte)(param_2 >> 0xc) | 0xe0;
      }
      else {
        pbVar3[2] = bVar2;
        pbVar3[3] = bVar1;
        pbVar3[1] = (byte)(param_2 >> 0xc) & 0x3f | 0x80;
        *pbVar3 = (byte)(param_2 >> 0x12) | 0xf0;
      }
    }
  }
  param_1[2] = uVar6 + lVar5;
  return 0;
}


// ===== 006a7030  FUN_006a7030 =====

undefined8 FUN_006a7030(long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if ((ulong)(*param_1 - lVar1) < param_3) {
    FUN_006a6aa4(param_1,lVar1,param_3);
    lVar1 = param_1[2];
  }
  else if (param_3 == 0) goto LAB_006a7070;
  memcpy((void *)(param_1[1] + lVar1),param_2,param_3);
LAB_006a7070:
  param_1[2] = lVar1 + param_3;
  return 0;
}


// ===== 006a70ac  FUN_006a70ac =====

uint FUN_006a70ac(ulong *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  byte bVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  ulong local_78;
  ulong *puStack_70;
  undefined *local_68;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  puVar6 = (undefined8 *)param_1[2];
  bVar8 = (byte)param_1[3];
  uVar10 = 0;
  lVar9 = 0;
  lVar7 = 0;
  uVar12 = 0;
  do {
    uVar11 = uVar12;
    if (uVar11 != 0) break;
    do {
      uVar4 = uVar10;
      if (param_3 < uVar10) {
LAB_006a7230:
        uVar12 = 1;
        uVar5 = param_3;
        uVar10 = uVar4;
        lVar3 = lVar7;
        goto joined_r0x006a7210;
      }
      uVar4 = param_3;
      if (param_3 - uVar10 < 0x10) {
        uVar5 = 0;
        if (param_3 == uVar10) goto LAB_006a7230;
        while (*(char *)(param_2 + uVar10 + uVar5) != '\n') {
          uVar5 = uVar5 + 1;
          if (param_3 - uVar10 == uVar5) goto LAB_006a7230;
        }
      }
      else {
        auVar13 = core::slice::memchr::memchr_aligned(10,param_2 + uVar10,param_3 - uVar10);
        uVar5 = auVar13._8_8_;
        if (auVar13._0_8_ != 1) goto LAB_006a7230;
      }
      uVar5 = uVar5 + uVar10;
      uVar10 = uVar5 + 1;
    } while ((param_3 <= uVar5) || (*(char *)(param_2 + uVar5) != '\n'));
    uVar12 = 0;
    lVar3 = uVar5 + 1;
joined_r0x006a7210:
    if ((bVar8 & 1) == 0) {
      *(undefined1 *)(param_1 + 3) = 1;
      if ((uVar1 & 1) == 0) {
LAB_006a7274:
        uVar4 = <core::fmt::[a]::core::fmt::Formatter>::write_str(puVar6,"    ",4);
        goto joined_r0x006a7288;
      }
      puStack_70 = &local_78;
      local_68 = PTR_fmt_0099f458;
      local_78 = uVar2;
      uVar4 = core::fmt::write(*puVar6,puVar6[1],&DAT_00454760,&puStack_70);
      if ((uVar4 & 1) != 0) {
        return 1;
      }
    }
    else if (lVar9 != 0) {
      uVar4 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(puVar6,10);
      if ((uVar4 & 1) != 0) break;
      if (uVar1 == 0) goto LAB_006a7274;
      uVar4 = <core::fmt::[a]::core::fmt::Formatter>::write_str(puVar6,"       ",7);
joined_r0x006a7288:
      if ((uVar4 & 1) != 0) break;
    }
    lVar9 = lVar9 + 1;
    uVar4 = <core::fmt::[a]::core::fmt::Formatter>::write_str(puVar6,param_2 + lVar7,uVar5 - lVar7);
    bVar8 = 1;
    lVar7 = lVar3;
  } while ((uVar4 & 1) == 0);
  return uVar11 ^ 1;
}


// ===== 006a72bc  <anyhow::Chain_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::Chain as core::iter::traits::iterator::Iterator>::next */

undefined1  [16] __rustcall
<anyhow::Chain_as_core::iter::traits::iterator::Iterator>::next(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  ulong unaff_x19;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if (*param_1 == 0) {
    lVar4 = param_1[1];
    if (lVar4 != 0) {
      lVar3 = param_1[2];
      auVar5 = (**(code **)(lVar3 + 0x30))(lVar4);
      *(undefined1 (*) [16])(param_1 + 1) = auVar5;
      auVar5._8_8_ = lVar3;
      auVar5._0_8_ = lVar4;
      return auVar5;
    }
  }
  else {
    pauVar2 = (undefined1 (*) [16])param_1[1];
    if (pauVar2 != (undefined1 (*) [16])param_1[3]) {
      auVar5 = *pauVar2;
      param_1[1] = (long)(pauVar2 + 1);
      return auVar5;
    }
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = unaff_x19;
  return auVar1 << 0x40;
}


// ===== 006a735c  <anyhow::Chain_as_core::iter::traits::iterator::Iterator>::size_hint =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::Chain as core::iter::traits::iterator::Iterator>::size_hint */

void __rustcall
<anyhow::Chain_as_core::iter::traits::iterator::Iterator>::size_hint(ulong *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  if (*param_2 == 0) {
    if (param_2[1] == 0) {
      *param_1 = 0;
      param_1[1] = 1;
      param_1[2] = 0;
      return;
    }
    lVar1 = param_2[2];
    uVar2 = 0;
    do {
      auVar3 = (**(code **)(lVar1 + 0x30))();
      lVar1 = auVar3._8_8_;
      uVar2 = uVar2 + 1;
    } while (auVar3._0_8_ != 0);
  }
  else {
    uVar2 = (ulong)(param_2[3] - param_2[1]) >> 4;
  }
  *param_1 = uVar2;
  param_1[1] = 1;
  param_1[2] = uVar2;
  return;
}


// ===== 006a73d4  <anyhow[31805316622d7069]::Error_as_core[188d2c0002da36d0]::convert::AsRef<dyn_core[188d2c0002da36d0]::error::Error+core[188d2c0002da36d0]::marker::Sync+core[188d2c0002da36d0]::marker::Send>>::as_ref =====

/* <anyhow[31805316622d7069]::Error as core[188d2c0002da36d0]::convert::AsRef<dyn
   core[188d2c0002da36d0]::error::Error + core[188d2c0002da36d0]::marker::Sync +
   core[188d2c0002da36d0]::marker::Send>>::as_ref */

void <anyhow[31805316622d7069]::Error_as_core[188d2c0002da36d0]::convert::AsRef<dyn_core[188d2c0002da36d0]::error::Error+core[188d2c0002da36d0]::marker::Sync+core[188d2c0002da36d0]::marker::Send>>
     ::as_ref(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006a73e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 8))();
  return;
}


// ===== 006a73e4  FUN_006a73e4 =====

void FUN_006a73e4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    lVar7 = *(long *)(param_1 + 8);
    lVar6 = 0;
    do {
      lVar8 = lVar7 + lVar6 * 0x38;
      lVar1 = *(long *)(lVar8 + 0x28);
      lVar9 = *(long *)(lVar8 + 0x30);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar1 + 0x20);
        do {
          if (0 < *plVar10) {
            __rustc::__rust_dealloc(plVar10[1],*plVar10,1);
          }
          if (plVar10[-4] != 2) {
            lVar3 = plVar10[-3];
            if (plVar10[-4] == 0) {
              if (lVar3 != 0) {
                lVar2 = plVar10[-2];
                uVar4 = 1;
                goto LAB_006a7434;
              }
            }
            else if (lVar3 != 0) {
              lVar2 = plVar10[-2];
              lVar3 = lVar3 << 1;
              uVar4 = 2;
LAB_006a7434:
              __rustc::__rust_dealloc(lVar2,lVar3,uVar4);
            }
          }
          lVar9 = lVar9 + -1;
          plVar10 = plVar10 + 9;
        } while (lVar9 != 0);
      }
      if (*(long *)(lVar8 + 0x20) != 0) {
        __rustc::__rust_dealloc(lVar1,*(long *)(lVar8 + 0x20) * 0x48,8);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != lVar5);
  }
  return;
}


// ===== 006a74cc  FUN_006a74cc =====

void FUN_006a74cc(undefined8 param_1,uint param_2)

{
  byte bVar1;
  undefined1 uVar2;
  uint local_14;
  
  if (param_2 < 0x80) {
    local_14 = param_2 & 0xff;
    FUN_006a70ac(param_1,&local_14,1);
    return;
  }
  uVar2 = (undefined1)param_2;
  if (param_2 < 0x800) {
    local_14 = (CONCAT11(uVar2,(char)(param_2 >> 6)) & 0x3fff | 0x8000) | 0xc0;
    FUN_006a70ac(param_1,&local_14,2);
    return;
  }
  bVar1 = (byte)(param_2 >> 6);
  if (param_2 >> 0x10 == 0) {
    local_14._0_2_ = (bVar1 & 0xff3f | 0x80) << 8;
    local_14 = CONCAT31(CONCAT12(uVar2,(short)local_14) >> 8,(char)(param_2 >> 0xc)) & 0x3fffff |
               0x8000e0;
    FUN_006a70ac(param_1,&local_14,3);
    return;
  }
  local_14 = CONCAT31(CONCAT21(CONCAT11(uVar2,bVar1),(char)(param_2 >> 0xc)),(char)(param_2 >> 0x12)
                     ) & 0x3f3f3fff | 0x808080f0;
  FUN_006a70ac(param_1,&local_14,4);
  return;
}


// ===== 006a75ac  FUN_006a75ac =====

void FUN_006a75ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&DAT_00975ef8,param_2,param_3);
  return;
}


// ===== 006a75c0  FUN_006a75c0 =====

undefined1  [16] FUN_006a75c0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 006a75d0  FUN_006a75d0 =====

void FUN_006a75d0(void)

{
  return;
}


// ===== 006a75d4  FUN_006a75d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006a75d4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_00372100;
  param_1[1] = _UNK_00372108;
  *param_1 = uVar1;
  return;
}


// ===== 006a75e8  FUN_006a75e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006a75e8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_003714f0;
  param_1[1] = _UNK_003714f8;
  *param_1 = uVar1;
  return;
}


// ===== 006a75fc  FUN_006a75fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006a75fc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_00372660;
  param_1[1] = _UNK_00372668;
  *param_1 = uVar1;
  return;
}


// ===== 006a7610  FUN_006a7610 =====

undefined1  [16] FUN_006a7610(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 006a7620  FUN_006a7620 =====

undefined8 FUN_006a7620(void)

{
  return 0;
}


// ===== 006a7628  FUN_006a7628 =====

void FUN_006a7628(void)

{
  return;
}


// ===== 006a762c  FUN_006a762c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006a762c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_00371150;
  param_1[1] = _UNK_00371158;
  *param_1 = uVar1;
  return;
}


// ===== 006a7640  FUN_006a7640 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006a7640(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_00372a10;
  param_1[1] = _UNK_00372a18;
  *param_1 = uVar1;
  return;
}


// ===== 006a7654  FUN_006a7654 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006a7654(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_00372e10;
  param_1[1] = _UNK_00372e18;
  *param_1 = uVar1;
  return;
}


// ===== 006a7668  FUN_006a7668 =====

void FUN_006a7668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&PTR_FUN_00975f28,param_2,param_3);
  return;
}


// ===== 006a767c  FUN_006a767c =====

void FUN_006a767c(undefined8 param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 006a769c to 006a76a3 has its CatchHandler @ 006a76d4 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    __rustc::__rust_dealloc(param_1,param_2[1],param_2[2]);
    return;
  }
  return;
}


// ===== 006a76f4  FUN_006a76f4 =====

void FUN_006a76f4(undefined8 param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 006a7714 to 006a771b has its CatchHandler @ 006a774c */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    __rustc::__rust_dealloc(param_1,param_2[1],param_2[2]);
    return;
  }
  return;
}


// ===== 006a776c  FUN_006a776c =====

void FUN_006a776c(long *param_1)

{
  if (*param_1 != 0) {
    __rustc::__rust_dealloc(param_1[1],*param_1,1);
    return;
  }
  return;
}


// ===== 006a7784  FUN_006a7784 =====

void FUN_006a7784(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 8) == 2) {
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 != 0) {
      if (iVar1 == 2) goto LAB_006a77dc;
      if (iVar1 != 3) {
                    /* try { // try from 006a7808 to 006a781f has its CatchHandler @ 006a7824 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  ("internal error: entered unreachable code: invalid Once state",0x79,
                   &PTR_s__rustc_48a229ceaefd4985c50990b14_00976050);
      }
    }
    FUN_006a73e4(param_1 + 0x10);
    if (*(long *)(param_1 + 0x10) != 0) {
      __rustc::__rust_dealloc(*(undefined8 *)(param_1 + 0x18),*(long *)(param_1 + 0x10) * 0x38,8);
    }
  }
LAB_006a77dc:
  if (*(long *)(param_1 + 0x38) != 0) {
    __rustc::__rust_dealloc(*(undefined8 *)(param_1 + 0x40),*(long *)(param_1 + 0x38),1);
  }
  __rustc::__rust_dealloc(param_1,0x50,8);
  return;
}


// ===== 006a7854  FUN_006a7854 =====

void FUN_006a7854(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 8) == 2) {
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 != 0) {
      if (iVar1 == 2) goto LAB_006a78ac;
      if (iVar1 != 3) {
                    /* try { // try from 006a78c4 to 006a78db has its CatchHandler @ 006a78e0 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  ("internal error: entered unreachable code: invalid Once state",0x79,
                   &PTR_s__rustc_48a229ceaefd4985c50990b14_00976050);
      }
    }
    FUN_006a73e4(param_1 + 0x10);
    if (*(long *)(param_1 + 0x10) != 0) {
      __rustc::__rust_dealloc(*(undefined8 *)(param_1 + 0x18),*(long *)(param_1 + 0x10) * 0x38,8);
    }
  }
LAB_006a78ac:
  __rustc::__rust_dealloc(param_1,0x48,8);
  return;
}


// ===== 006a78fc  FUN_006a78fc =====

void FUN_006a78fc(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (*(long *)(param_1 + 8) == 2) {
    iVar3 = *(int *)(param_1 + 0x30);
    if (iVar3 != 0) {
      if (iVar3 == 2) goto LAB_006a7958;
      if (iVar3 != 3) {
                    /* try { // try from 006a799c to 006a79b3 has its CatchHandler @ 006a79ec */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  ("internal error: entered unreachable code: invalid Once state",0x79,
                   &PTR_s__rustc_48a229ceaefd4985c50990b14_00976050);
      }
    }
    FUN_006a73e4(param_1 + 0x10);
    if (*(long *)(param_1 + 0x10) != 0) {
      __rustc::__rust_dealloc(*(undefined8 *)(param_1 + 0x18),*(long *)(param_1 + 0x10) * 0x38,8);
    }
  }
LAB_006a7958:
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  puVar2 = *(undefined8 **)(param_1 + 0x40);
  if ((code *)*puVar2 != (code *)0x0) {
                    /* try { // try from 006a7964 to 006a796b has its CatchHandler @ 006a79b8 */
    (*(code *)*puVar2)(uVar1);
  }
  if (puVar2[1] != 0) {
    __rustc::__rust_dealloc(uVar1,puVar2[1],puVar2[2]);
  }
  __rustc::__rust_dealloc(param_1,0x48,8);
  return;
}


// ===== 006a7a18  FUN_006a7a18 =====

void FUN_006a7a18(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 8) == 2) {
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 != 0) {
      if (iVar1 == 2) goto LAB_006a7a70;
      if (iVar1 != 3) {
                    /* try { // try from 006a7a88 to 006a7a9f has its CatchHandler @ 006a7aa4 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  ("internal error: entered unreachable code: invalid Once state",0x79,
                   &PTR_s__rustc_48a229ceaefd4985c50990b14_00976050);
      }
    }
    FUN_006a73e4(param_1 + 0x10);
    if (*(long *)(param_1 + 0x10) != 0) {
      __rustc::__rust_dealloc(*(undefined8 *)(param_1 + 0x18),*(long *)(param_1 + 0x10) * 0x38,8);
    }
  }
LAB_006a7a70:
  __rustc::__rust_dealloc(param_1,0x48,8);
  return;
}


// ===== 006a7ac0  FUN_006a7ac0 =====

void FUN_006a7ac0(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 8) == 2) {
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 != 0) {
      if (iVar1 == 2) goto LAB_006a7b18;
      if (iVar1 != 3) {
                    /* try { // try from 006a7b30 to 006a7b47 has its CatchHandler @ 006a7b4c */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  ("internal error: entered unreachable code: invalid Once state",0x79,
                   &PTR_s__rustc_48a229ceaefd4985c50990b14_00976050);
      }
    }
    FUN_006a73e4(param_1 + 0x10);
    if (*(long *)(param_1 + 0x10) != 0) {
      __rustc::__rust_dealloc(*(undefined8 *)(param_1 + 0x18),*(long *)(param_1 + 0x10) * 0x38,8);
    }
  }
LAB_006a7b18:
  __rustc::__rust_dealloc(param_1,0x50,8);
  return;
}


// ===== 006a7b68  <anyhow::fmt::anyhow::error::ErrorImpl>::debug =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::fmt::anyhow::error::ErrorImpl>::debug */

undefined8 __rustcall
<anyhow::fmt::anyhow::error::ErrorImpl>::debug(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 local_d0 [16];
  undefined8 **local_c0;
  undefined **local_b8;
  undefined8 *local_b0;
  undefined1 local_a8;
  undefined1 local_a0 [16];
  ulong local_90;
  undefined8 *local_80;
  long *plStack_78;
  ulong local_70;
  undefined1 uStack_61;
  
  local_d0 = (**(code **)(*param_1 + 8))();
  puVar1 = PTR_fmt_0099f6e8;
  lVar5 = local_d0._8_8_;
  uVar4 = local_d0._0_8_;
  if (*(char *)((long)param_2 + 0x12) < '\0') {
                    /* WARNING: Could not recover jumptable at 0x006a7c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(lVar5 + 0x18))(uVar4,param_2);
    return uVar4;
  }
  local_b8 = (undefined **)PTR_fmt_0099f6e8;
  local_c0 = (undefined8 **)local_d0;
  uVar3 = core::fmt::write(*param_2,param_2[1],&DAT_00368e80,&local_c0);
  if ((uVar3 & 1) != 0) {
    return 1;
  }
  auVar8 = (**(code **)(lVar5 + 0x30))(uVar4);
  if (auVar8._0_8_ != 0) {
    uVar3 = (**(code **)(param_2[1] + 0x18))(*param_2,"\n\nCaused by:",0xc);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
    lVar5 = (**(code **)(auVar8._8_8_ + 0x30))(auVar8._0_8_);
    puVar7 = (undefined *)0x0;
    do {
      auVar9 = (**(code **)(auVar8._8_8_ + 0x30))(auVar8._0_8_);
      local_a0 = auVar8;
      uVar3 = (**(code **)(param_2[1] + 0x18))(*param_2,"\n",1);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
      local_80 = (undefined8 *)local_a0;
      local_a8 = 0;
      plStack_78 = (long *)puVar1;
      local_c0 = (undefined8 **)(ulong)(lVar5 != 0);
      local_b8 = (undefined **)puVar7;
      local_b0 = param_2;
      uVar3 = core::fmt::write(&local_c0,&DAT_00975f78,&DAT_00368e80,&local_80);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
      puVar7 = puVar7 + 1;
      auVar8 = auVar9;
    } while (auVar9._0_8_ != 0);
  }
  plVar6 = param_1 + 1;
  lVar5 = *plVar6;
  if (lVar5 == -1) {
    plVar6 = (long *)(**(code **)(*param_1 + 0x28))(param_1);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      core::option::expect_failed
                ("backtrace capture failed",0x18,&PTR_s__home_runner__cargo_registry_src_00975fd8);
    }
    lVar5 = *plVar6;
  }
  if (lVar5 != 2) {
    return 0;
  }
  local_80 = (undefined8 *)0x0;
  plStack_78 = (long *)0x1;
  local_70 = 0;
  local_b0 = (undefined8 *)0x60000020;
  local_c0 = &local_80;
  local_b8 = &PTR_FUN_00976068;
                    /* try { // try from 006a7d50 to 006a7d57 has its CatchHandler @ 006a7ecc */
  iVar2 = <std::backtrace::Backtrace_as_core::fmt::Display>::fmt(plVar6,&local_c0);
  if (iVar2 != 0) {
                    /* try { // try from 006a7e90 to 006a7eb3 has its CatchHandler @ 006a7ecc */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              ("a Display implementation returned an error unexpectedly",0x37,&uStack_61,
               &DAT_00975f58,&PTR_s__rustc_48a229ceaefd4985c50990b14_00976098);
  }
  local_a0._8_8_ = plStack_78;
  local_a0._0_8_ = local_80;
  local_90 = local_70;
                    /* try { // try from 006a7d74 to 006a7e3f has its CatchHandler @ 006a7eb8 */
  uVar3 = (**(code **)(param_2[1] + 0x18))(*param_2,"\n\n",2);
  if ((uVar3 & 1) == 0) {
    if ((local_90 < 0x10) ||
       (*(long *)local_a0._8_8_ != 0x6162206b63617473 ||
        *(long *)(local_a0._8_8_ + 8) != 0x3a65636172746b63)) {
      uVar3 = (**(code **)(param_2[1] + 0x18))(*param_2,"Stack backtrace:\n",0x11);
      if ((uVar3 & 1) != 0) goto LAB_006a7e44;
    }
    else {
      FUN_006a5e4c(local_a0,0,1,"S",1,&PTR_s__home_runner__cargo_registry_src_00975fa8);
    }
    FUN_006a5aac(local_a0._8_8_,local_90);
    FUN_006a8038(local_a0);
    local_b8 = (undefined **)FUN_006a87ec;
    local_c0 = (undefined8 **)local_a0;
    uVar3 = core::fmt::write(*param_2,param_2[1],&DAT_00368e80,&local_c0);
    if ((uVar3 & 1) == 0) {
      if ((undefined8 *)local_a0._0_8_ != (undefined8 *)0x0) {
        __rustc::__rust_dealloc(local_a0._8_8_,local_a0._0_8_,1);
      }
      return 0;
    }
  }
LAB_006a7e44:
  if ((undefined8 *)local_a0._0_8_ != (undefined8 *)0x0) {
    __rustc::__rust_dealloc(local_a0._8_8_,local_a0._0_8_,1);
  }
  return 1;
}


// ===== 006a7eec  FUN_006a7eec =====

undefined8 FUN_006a7eec(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long extraout_x1;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 local_80 [16];
  undefined1 *local_70;
  undefined *puStack_68;
  
  local_80 = (**(code **)(*param_1 + 8))();
  puVar3 = PTR_fmt_0099f6e8;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  puStack_68 = PTR_fmt_0099f6e8;
  local_70 = local_80;
  uVar5 = core::fmt::write(uVar1,uVar2,&DAT_00368e80,&local_70);
  if ((uVar5 & 1) != 0) {
    return 1;
  }
  if (*(char *)((long)param_2 + 0x12) < '\0') {
    (**(code **)(*param_1 + 8))(param_1);
    auVar6 = (**(code **)(extraout_x1 + 0x30))();
    if (auVar6._0_8_ == 0) {
      return 0;
    }
    auVar7 = (**(code **)(auVar6._8_8_ + 0x30))();
    puStack_68 = puVar3;
    local_70 = local_80;
    local_80 = auVar6;
    uVar5 = core::fmt::write(uVar1,uVar2,&DAT_00364976,&local_70);
    if ((uVar5 & 1) != 0) {
      return 1;
    }
    while( true ) {
      if (auVar7._0_8_ == 0) break;
      auVar6 = (**(code **)(auVar7._8_8_ + 0x30))(auVar7._0_8_);
      puStack_68 = puVar3;
      local_70 = local_80;
      local_80 = auVar7;
      iVar4 = core::fmt::write(uVar1,uVar2,&DAT_00364976,&local_70);
      auVar7 = auVar6;
      if (iVar4 != 0) {
        return 1;
      }
    }
  }
  return 0;
}


// ===== 006a8038  FUN_006a8038 =====

void FUN_006a8038(long param_1,ulong param_2)

{
  int iVar1;
  
  if (param_2 <= *(ulong *)(param_1 + 0x10)) {
    if ((param_2 != 0) && (param_2 < *(ulong *)(param_1 + 0x10))) {
      iVar1 = (int)*(char *)(*(long *)(param_1 + 8) + param_2);
      if (iVar1 == -0x41 || iVar1 + 0x41 < 0 != SCARRY4(iVar1,0x41)) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("assertion faile",0x30,&PTR_s__home_runner__cargo_registry_src_00975fc0);
      }
    }
    *(ulong *)(param_1 + 0x10) = param_2;
  }
  return;
}


// ===== 006a8088  <anyhow::kind::[3]::anyhow::kind::Boxed>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::kind::[3]::anyhow::kind::Boxed>::new */

void __rustcall <anyhow::kind::[3]::anyhow::kind::Boxed>::new(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
                    /* try { // try from 006a80a4 to 006a80ab has its CatchHandler @ 006a80e0 */
  <std::backtrace::[2]::std::backtrace::Backtrace>::capture(&local_60);
  uStack_88 = uStack_58;
  local_90 = local_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  local_70 = local_40;
  FUN_006a5dac(param_1,param_2,&local_90);
  return;
}


// ===== 006a80fc  <anyhow::error::[6]::anyhow::error::ErrorImpl>::error =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::error::[6]::anyhow::error::ErrorImpl>::error */

void __rustcall <anyhow::error::[6]::anyhow::error::ErrorImpl>::error(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006a8104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}


// ===== 006a8108  <anyhow::error::[6]::anyhow::error::ErrorImpl>::backtrace =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::error::[6]::anyhow::error::ErrorImpl>::backtrace */

void __rustcall <anyhow::error::[6]::anyhow::error::ErrorImpl>::backtrace(long *param_1)

{
  long lVar1;
  
  if ((param_1[1] == -1) && (lVar1 = (**(code **)(*param_1 + 0x28))(param_1), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    core::option::expect_failed
              ("backtrace capture failed",0x18,&PTR_s__home_runner__cargo_registry_src_00975fd8);
  }
  return;
}


// ===== 006a8154  anyhow::ensure::render =====

/* WARNING: Unknown calling convention: __rustcall */
/* anyhow::ensure::render */

void __rustcall
anyhow::ensure::render
          (void *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  undefined *puVar1;
  ulong __n;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong local_b8;
  undefined1 *local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong local_88;
  undefined8 *local_78;
  undefined *puStack_70;
  ulong local_68;
  long local_60;
  ulong local_58;
  
  puVar1 = PTR_fmt_0099f6f0;
  local_b0 = (undefined1 *)&local_100;
  uStack_c8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  puStack_a8 = PTR_fmt_0099f6f0;
  local_100 = param_3;
  uStack_f8 = param_4;
  local_f0 = param_5;
  uStack_e8 = param_6;
  uVar2 = core::fmt::write(&local_e0,&DAT_00975ff0,&DAT_00368e80,&local_b0);
  if ((uVar2 & 1) != 0) {
LAB_006a834c:
    FUN_006a5c20(param_1,param_2);
    return;
  }
  local_78 = &local_f0;
  puStack_70 = puVar1;
  uStack_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  uStack_90 = 0;
  puStack_a8 = (undefined *)0x0;
  local_b0 = (undefined1 *)0x0;
  uVar3 = core::fmt::write(&local_b0,&DAT_00975ff0,&DAT_00368e80,&local_78);
  __n = local_88;
  uVar2 = local_b8;
  if ((uVar3 & 1) != 0) goto LAB_006a834c;
  uVar3 = param_2 + local_b8 + local_88 + 7;
  if ((long)uVar3 < 0) {
    uVar6 = 0;
LAB_006a820c:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar6,uVar3);
  }
  if (uVar3 == 0) {
    lVar5 = 1;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar6 = 1;
    lVar5 = __rustc::__rust_alloc(uVar3,1);
    if (lVar5 == 0) goto LAB_006a820c;
  }
  local_58 = 0;
  local_68 = uVar3;
  local_60 = lVar5;
  if (uVar3 < param_2) {
                    /* try { // try from 006a835c to 006a83eb has its CatchHandler @ 006a83f4 */
    FUN_006a6aa4(&local_68,0,param_2);
LAB_006a825c:
    uVar4 = local_58;
    lVar5 = local_60;
    uVar3 = local_68;
    memcpy((void *)(local_60 + local_58),param_1,param_2);
  }
  else {
    uVar4 = 0;
    if (param_2 != 0) goto LAB_006a825c;
  }
  local_58 = uVar4 + param_2;
  if (uVar3 - local_58 < 2) {
    FUN_006a6aa4(&local_68,local_58,2);
    lVar5 = local_60;
  }
  *(undefined2 *)(lVar5 + local_58) = 0x2820;
  uVar3 = local_58 + 2;
  local_58 = uVar3;
  if (local_68 - uVar3 < uVar2) {
    FUN_006a6aa4(&local_68,uVar3,uVar2);
LAB_006a82a8:
    uVar3 = local_58;
    uVar4 = local_68;
    memcpy((void *)(local_60 + local_58),&local_e0,uVar2);
  }
  else {
    uVar4 = local_68;
    if (uVar2 != 0) goto LAB_006a82a8;
  }
  local_58 = uVar3 + uVar2;
  if (uVar4 - local_58 < 4) {
    FUN_006a6aa4(&local_68,local_58,4);
    uVar4 = local_68;
  }
  uVar2 = local_58 + 4;
  *(undefined4 *)(local_60 + local_58) = 0x20737620;
  local_58 = uVar2;
  if (uVar4 - uVar2 < __n) {
    FUN_006a6aa4(&local_68,uVar2,__n);
    uVar4 = local_68;
  }
  else {
    lVar5 = local_60;
    if (__n == 0) goto LAB_006a8308;
  }
  uVar2 = local_58;
  lVar5 = local_60;
  memcpy((void *)(local_60 + local_58),&local_b0,__n);
LAB_006a8308:
  uVar2 = uVar2 + __n;
  if (uVar4 == uVar2) {
    local_58 = uVar2;
    FUN_006a6aa4(&local_68,uVar4,1);
    lVar5 = local_60;
  }
  *(undefined1 *)(lVar5 + uVar2) = 0x29;
  local_58 = uVar2 + 1;
  FUN_006a5bb8(&local_68);
  return;
}


// ===== 006a8414  FUN_006a8414 =====

void FUN_006a8414(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 006a8428  FUN_006a8428 =====

void FUN_006a8428(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 006a843c  FUN_006a843c =====

void FUN_006a843c(long *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[4];
  if (iVar1 != 0) {
    if (iVar1 == 2) {
      return;
    }
    if (iVar1 != 3) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                ("internal error: entered unreachable code: invalid Once state",0x79,
                 &PTR_s__rustc_48a229ceaefd4985c50990b14_00976050);
    }
  }
  FUN_006a73e4(param_1);
  if (*param_1 == 0) {
    return;
  }
  __rustc::__rust_dealloc(param_1[1],*param_1 * 0x38,8);
  return;
}


// ===== 006a84b4  <anyhow::ensure::Buf_as_core::fmt::Write>::write_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::ensure::Buf as core::fmt::Write>::write_str */

undefined8 __rustcall
<anyhow::ensure::Buf_as_core::fmt::Write>::write_str(long param_1,void *param_2,size_t param_3)

{
  char *pcVar1;
  size_t sVar2;
  
  sVar2 = 0;
  do {
    if (param_3 == sVar2) {
      if (0x28U - *(long *)(param_1 + 0x28) < param_3) {
        return 1;
      }
      memcpy((void *)(param_1 + *(long *)(param_1 + 0x28)),param_2,param_3);
      *(size_t *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + param_3;
      return 0;
    }
    pcVar1 = (char *)((long)param_2 + sVar2);
    if (*pcVar1 == '\n') {
      return 1;
    }
    sVar2 = sVar2 + 1;
  } while (*pcVar1 != ' ');
  return 1;
}


// ===== 006a8530  <anyhow::wrapper::BoxedError_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::wrapper::BoxedError as core::fmt::Debug>::fmt */

void __rustcall <anyhow::wrapper::BoxedError_as_core::fmt::Debug>::fmt(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006a8538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x18))(*param_1);
  return;
}


// ===== 006a853c  <anyhow[31805316622d7069]::context::Quoted<&mut_core[188d2c0002da36d0]::fmt::Formatter>as_core[188d2c0002da36d0]::fmt::Write>::write_str =====

/* <anyhow[31805316622d7069]::context::Quoted<&mut core[188d2c0002da36d0]::fmt::Formatter> as
   core[188d2c0002da36d0]::fmt::Write>::write_str */

void <anyhow[31805316622d7069]::context::Quoted<&mut_core[188d2c0002da36d0]::fmt::Formatter>as_core[188d2c0002da36d0]::fmt::Write>
     ::write_str(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_98 [120];
  
  <core::str::str>::escape_debug(auStack_98,param_2,param_3);
  <core::str::iter::EscapeDebug_as_core::fmt::Display>::fmt(auStack_98,*param_1);
  return;
}


// ===== 006a857c  <anyhow::wrapper::BoxedError_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::wrapper::BoxedError as core::fmt::Display>::fmt */

void __rustcall <anyhow::wrapper::BoxedError_as_core::fmt::Display>::fmt(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006a8584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x20))(*param_1);
  return;
}


// ===== 006a8588  <anyhow::wrapper::BoxedError_as_core::error::Error>::source =====

/* WARNING: Unknown calling convention: __rustcall */
/* <anyhow::wrapper::BoxedError as core::error::Error>::source */

void __rustcall <anyhow::wrapper::BoxedError_as_core::error::Error>::source(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006a8590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x30))(*param_1);
  return;
}


// ===== 006a8594  FUN_006a8594 =====

void FUN_006a8594(long *param_1)

{
  long extraout_x1;
  
  (**(code **)(*param_1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x006a85b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_x1 + 0x30))();
  return;
}


// ===== 006a85b4  <anyhow::fmt::anyhow::error::ErrorImpl>::debug =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <anyhow::fmt::anyhow::error::ErrorImpl>::debug(void)

{
  (*(code *)PTR_debug_009a0a30)();
  return;
}


// ===== 006a85b8  FUN_006a85b8 =====

void FUN_006a85b8(long *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = (**(code **)(*param_1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x006a85e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(auVar1._8_8_ + 0x20))(auVar1._0_8_,param_2);
  return;
}


// ===== 006a85e8  FUN_006a85e8 =====

void FUN_006a85e8(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"Error",5);
  return;
}


// ===== 006a85fc  FUN_006a85fc =====

undefined8 FUN_006a85fc(long *param_1,uint param_2)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = param_1[2];
  if (param_2 < 0x80) {
    if (*param_1 == lVar7) {
      FUN_006a6aa4(param_1,lVar7,1);
    }
    *(byte *)(param_1[1] + lVar7) = (byte)param_2;
    lVar6 = 1;
  }
  else {
    uVar2 = 3;
    if (0xffff < param_2) {
      uVar2 = 4;
    }
    uVar3 = 2;
    if (0x7ff < param_2) {
      uVar3 = uVar2;
    }
    if ((ulong)(*param_1 - lVar7) < uVar3) {
      FUN_006a6aa4(param_1,lVar7);
    }
    bVar4 = (byte)param_2 & 0x3f | 0x80;
    pbVar1 = (byte *)(param_1[1] + lVar7);
    if (param_2 < 0x800) {
      pbVar1[1] = bVar4;
      lVar6 = 2;
      *pbVar1 = (byte)(param_2 >> 6) | 0xc0;
    }
    else {
      bVar5 = (byte)(param_2 >> 6) & 0x3f | 0x80;
      if (param_2 >> 0x10 == 0) {
        pbVar1[1] = bVar5;
        pbVar1[2] = bVar4;
        lVar6 = 3;
        *pbVar1 = (byte)(param_2 >> 0xc) | 0xe0;
      }
      else {
        pbVar1[2] = bVar5;
        pbVar1[3] = bVar4;
        lVar6 = 4;
        pbVar1[1] = (byte)(param_2 >> 0xc) & 0x3f | 0x80;
        *pbVar1 = (byte)(param_2 >> 0x12) | 0xf0;
      }
    }
  }
  param_1[2] = lVar6 + lVar7;
  return 0;
}


// ===== 006a8730  FUN_006a8730 =====

undefined8 FUN_006a8730(long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if ((ulong)(*param_1 - lVar1) < param_3) {
    FUN_006a6aa4(param_1,lVar1,param_3);
    lVar1 = param_1[2];
  }
  else if (param_3 == 0) goto LAB_006a8770;
  memcpy((void *)(param_1[1] + lVar1),param_2,param_3);
LAB_006a8770:
  param_1[2] = lVar1 + param_3;
  return 0;
}


// ===== 006a87ac  FUN_006a87ac =====

void FUN_006a87ac(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 006a87c0  FUN_006a87c0 =====

void FUN_006a87c0(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 006a87d4  <alloc[cc0d62b833a55794]::boxed::Box<dyn_core[188d2c0002da36d0]::error::Error+core[188d2c0002da36d0]::marker::Sync+core[188d2c0002da36d0]::marker::Send>as_core[188d2c0002da36d0]::convert::From<anyhow[31805316622d7069]::Error>>::from =====

/* <alloc[cc0d62b833a55794]::boxed::Box<dyn core[188d2c0002da36d0]::error::Error +
   core[188d2c0002da36d0]::marker::Sync + core[188d2c0002da36d0]::marker::Send> as
   core[188d2c0002da36d0]::convert::From<anyhow[31805316622d7069]::Error>>::from */

void <alloc[cc0d62b833a55794]::boxed::Box<dyn_core[188d2c0002da36d0]::error::Error+core[188d2c0002da36d0]::marker::Sync+core[188d2c0002da36d0]::marker::Send>as_core[188d2c0002da36d0]::convert::From<anyhow[31805316622d7069]::Error>>
     ::from(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006a87dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}


// ===== 006a87e0  <alloc::boxed::Box<dyn_Trait<Assoc=X>+core::error::Error+{backref_28}::marker::Send>as{backref_28}::convert::From<anyhow::Error>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::boxed::Box<dyn Trait<Assoc = X> + core::error::Error + {backref 28}::marker::Send> as
   {backref 28}::convert::From<anyhow::Error>>::from */

void __rustcall
<alloc::boxed::Box<dyn_Trait<Assoc=X>+core::error::Error+{backref_28}::marker::Send>as{backref_28}::convert::From<anyhow::Error>>
::from(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006a87e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}


// ===== 006a87ec  FUN_006a87ec =====

void FUN_006a87ec(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 006a8800  FUN_006a8800 =====

void FUN_006a8800(long *param_1)

{
  long extraout_x1;
  
  (**(code **)(*param_1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x006a881c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_x1 + 0x30))();
  return;
}


// ===== 006a8820  FUN_006a8820 =====

undefined8 FUN_006a8820(void)

{
  return 0;
}


// ===== 006a8828  FUN_006a8828 =====

undefined8 FUN_006a8828(void)

{
  return 0;
}


